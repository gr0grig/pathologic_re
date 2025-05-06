GlobalVarCount = 0

Strings:
	animation
	all
	cleanup
	restore

Import:
	RemoveRTEnvelope (0 args)
	RemoveEnvelope (0 args)
	SetDeathState (0 args)
	GetProperty (2 args)
	LockAnimationEnd (2 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_5 Op = 0x11 Vars = ()
		EVENT_26 Op = 0x1d Vars = (string)
		EVENT_6 Op = 0x39 Vars = ()


0x0: PushEmpty(string, string)
0x1: @ RemoveRTEnvelope()
0x2: Pop(0)
0x3: @ RemoveEnvelope()
0x4: Pop(0)
0x5: @ SetDeathState()
0x6: Pop(0)
0x7: Push("animation")
0x8: @ GetProperty(Stack[-1], Stack[-2])
0x9: Pop(1)
0xa: Push("all")
0xb: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xc: Pop(1)
0xd: PushEmpty()
0xe: Call2 0x19

0xf: Pop(0)
0x10: Return(); Pop(2)

0x11: PushEmpty(string, string)
0x12: Push("animation")
0x13: @ GetProperty(Stack[-1], Stack[-2])
0x14: Pop(1)
0x15: Push("all")
0x16: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x17: Pop(1)
0x18: Return(); Pop(2)

0x19: @ Hold()
0x1a: Pop(0)
0x1b: GOTO 0x19

0x1c: Return(); Pop(0)

0x1d: PushEmpty(bool, bool)
0x1e: Push("cleanup")
0x1f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x21: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x22: @ IsLoaded(Stack[-1])
0x23: Pop(0)
0x24: PushEmpty(bool)
0x25: Stack[-1] = (bool) 0
0x26: Pop(0); Push((bool) Stack[-2] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x28: PushEmpty(bool)
0x29: Call2 0x49

0x2a: Pop(0)
0x2b: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2c: Stack[-1] = (bool) 1
0x2d: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2e: PushEmpty(object)
0x2f: Call2 0x4b

0x30: Pop(0)
0x31: @ RemoveActor(Stack[-1])
0x32: Pop(1)
0x33: GOTO 0x38

0x34: Push("restore")
0x35: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x37: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x38: Return(); Pop(2)

0x39: PushEmpty(bool)
0x3a: Stack[-1] = (bool) 0
0x3b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3c: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3d: PushEmpty(bool)
0x3e: Call2 0x49

0x3f: Pop(0)
0x40: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x41: Stack[-1] = (bool) 1
0x42: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x43: PushEmpty(object)
0x44: Call2 0x4b

0x45: Pop(0)
0x46: @ RemoveActor(Stack[-1])
0x47: Pop(1)
0x48: Return(); Pop(0)

0x49: Stack[-1] = (bool) 1
0x4a: Return(); Pop(0)

0x4b: PushEmpty(object, object)
0x4c: @ self(Stack[-1])
0x4d: Pop(0)
0x4e: Stack[-3] = Stack[-1]
0x4f: Return(); Pop(2)

0x50: Stack[-1] = 0
