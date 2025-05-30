GlobalVarCount = 0

Strings:
	cleanup
	restore

Import:
	IsOverrideActive (1 args)
	Barter (1 args)
	sync (0 args)
	SetVisibility (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0xa
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x0 Vars = (object)
		EVENT_6 Op = 0x1b Vars = ()
		EVENT_26 Op = 0x29 Vars = (string)


0x0: PushEmpty(bool, bool)
0x1: @ IsOverrideActive(Stack[-1])
0x2: Pop(0)
0x3: Pop(0); Push((bool) Stack[-1] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x7; Pop(1)

0x5: @ Barter(Stack[-3])
0x6: Pop(0)
0x7: Return(); Pop(2)

0x8: Stack[-1] = (bool) 1
0x9: Return(); Pop(0)

0xa: @ sync()
0xb: Pop(0)
0xc: PushEmpty(bool)
0xd: Call2 0x55

0xe: Pop(0)
0xf: Pop(1); Push((bool) Stack[-1] == 0)
0x10: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x11: Push((bool) 1)
0x12: @ SetVisibility(Stack[-1])
0x13: Pop(1)
0x14: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x15: GOTO 0x17

0x16: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x17: PushEmpty()
0x18: Call2 0x25

0x19: Pop(0)
0x1a: Return(); Pop(0)

0x1b: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1d: Push((bool) 1)
0x1e: @ SetVisibility(Stack[-1])
0x1f: Pop(1)
0x20: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x21: PushEmpty()
0x22: Call2 0x45

0x23: Pop(0)
0x24: Return(); Pop(0)

0x25: @ Hold()
0x26: Pop(0)
0x27: GOTO 0x25

0x28: Return(); Pop(0)

0x29: PushEmpty(bool, bool)
0x2a: Push("cleanup")
0x2b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x2d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2e: @ IsLoaded(Stack[-1])
0x2f: Pop(0)
0x30: PushEmpty(bool)
0x31: Stack[-1] = (bool) 0
0x32: Pop(0); Push((bool) Stack[-2] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x34: PushEmpty(bool)
0x35: Call2 0x8

0x36: Pop(0)
0x37: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x38: Stack[-1] = (bool) 1
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: PushEmpty(object)
0x3b: Call2 0x5a

0x3c: Pop(0)
0x3d: @ RemoveActor(Stack[-1])
0x3e: Pop(1)
0x3f: GOTO 0x44

0x40: Push("restore")
0x41: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x43: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x44: Return(); Pop(2)

0x45: PushEmpty(bool)
0x46: Stack[-1] = (bool) 0
0x47: Push( Stack[0 + Tasks[-1].StackPointer] )
0x48: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x49: PushEmpty(bool)
0x4a: Call2 0x8

0x4b: Pop(0)
0x4c: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4d: Stack[-1] = (bool) 1
0x4e: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x4f: PushEmpty(object)
0x50: Call2 0x5a

0x51: Pop(0)
0x52: @ RemoveActor(Stack[-1])
0x53: Pop(1)
0x54: Return(); Pop(0)

0x55: PushEmpty(bool, bool)
0x56: @ IsLoaded(Stack[-1])
0x57: Pop(0)
0x58: Stack[-3] = Stack[-1]
0x59: Return(); Pop(2)

0x5a: PushEmpty(object, object)
0x5b: @ self(Stack[-1])
0x5c: Pop(0)
0x5d: Stack[-3] = Stack[-1]
0x5e: Return(); Pop(2)

0x5f: Stack[-1] = 0
