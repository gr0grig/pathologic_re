GlobalVarCount = 0

Strings:
	cleanup
	restore

Import:
	sync (0 args)
	SetVisibility (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool) Params = 0
		EVENT_6 Op = 0x11 Vars = ()
		EVENT_26 Op = 0x1f Vars = (string)


0x0: @ sync()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x4d

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x7: Push((bool) 1)
0x8: @ SetVisibility(Stack[-1])
0x9: Pop(1)
0xa: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xb: GOTO 0xd

0xc: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xd: PushEmpty()
0xe: Call2 0x1b

0xf: Pop(0)
0x10: Return(); Pop(0)

0x11: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x13: Push((bool) 1)
0x14: @ SetVisibility(Stack[-1])
0x15: Pop(1)
0x16: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x17: PushEmpty()
0x18: Call2 0x3b

0x19: Pop(0)
0x1a: Return(); Pop(0)

0x1b: @ Hold()
0x1c: Pop(0)
0x1d: GOTO 0x1b

0x1e: Return(); Pop(0)

0x1f: PushEmpty(bool, bool)
0x20: Push("cleanup")
0x21: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x23: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x24: @ IsLoaded(Stack[-1])
0x25: Pop(0)
0x26: PushEmpty(bool)
0x27: Stack[-1] = (bool) 0
0x28: Pop(0); Push((bool) Stack[-2] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2a: PushEmpty(bool)
0x2b: Call2 0x4b

0x2c: Pop(0)
0x2d: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2e: Stack[-1] = (bool) 1
0x2f: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x30: PushEmpty(object)
0x31: Call2 0x52

0x32: Pop(0)
0x33: @ RemoveActor(Stack[-1])
0x34: Pop(1)
0x35: GOTO 0x3a

0x36: Push("restore")
0x37: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x39: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3a: Return(); Pop(2)

0x3b: PushEmpty(bool)
0x3c: Stack[-1] = (bool) 0
0x3d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3e: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3f: PushEmpty(bool)
0x40: Call2 0x4b

0x41: Pop(0)
0x42: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x43: Stack[-1] = (bool) 1
0x44: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x45: PushEmpty(object)
0x46: Call2 0x52

0x47: Pop(0)
0x48: @ RemoveActor(Stack[-1])
0x49: Pop(1)
0x4a: Return(); Pop(0)

0x4b: Stack[-1] = (bool) 1
0x4c: Return(); Pop(0)

0x4d: PushEmpty(bool, bool)
0x4e: @ IsLoaded(Stack[-1])
0x4f: Pop(0)
0x50: Stack[-3] = Stack[-1]
0x51: Return(); Pop(2)

0x52: PushEmpty(object, object)
0x53: @ self(Stack[-1])
0x54: Pop(0)
0x55: Stack[-3] = Stack[-1]
0x56: Return(); Pop(2)

0x57: Stack[-1] = 0
