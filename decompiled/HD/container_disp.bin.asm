GlobalVarCount = 0

Strings:
	cleanup
	restore
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	self (1 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x7 Vars = (string)
		EVENT_6 Op = 0x1b Vars = ()
		EVENT_0 Op = 0x27 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call2 0x23

0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: PushEmpty(bool, bool)
0x8: Push("cleanup")
0x9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0xb: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc: @ IsLoaded(Stack[-1])
0xd: Pop(0)
0xe: Pop(0); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x10: PushEmpty(object)
0x11: Call2 0x41

0x12: Pop(0)
0x13: @ RemoveActor(Stack[-1])
0x14: Pop(1)
0x15: GOTO 0x1a

0x16: Push("restore")
0x17: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x19: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1a: Return(); Pop(2)

0x1b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1c: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1d: PushEmpty(object)
0x1e: Call2 0x41

0x1f: Pop(0)
0x20: @ RemoveActor(Stack[-1])
0x21: Pop(1)
0x22: Return(); Pop(0)

0x23: @ Hold()
0x24: Pop(0)
0x25: GOTO 0x23

0x26: Return(); Pop(0)

0x27: PushEmpty(bool, bool, bool, bool)
0x28: PushEmpty(bool)
0x29: Stack[-1] = (bool) 1
0x2a: Pop(0); Push((bool) Stack[-6] == 0)
0x2b: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2c: PushEmpty(bool)
0x2d: Call2 0x47

0x2e: Pop(0)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x31: Stack[-1] = (bool) 0
0x32: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x33: Return(); Pop(4)

0x34: @@ IsOnGround(Stack[-2])
0x35: Pop(0)
0x36: Push(Stack[-2])
0x37: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x38: EventDisable(0)
0x39: @ IsOverrideActive(Stack[-1])
0x3a: Pop(0)
0x3b: Pop(0); Push((bool) Stack[-1] == 0)
0x3c: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3d: @ Barter(Stack[-5])
0x3e: Pop(0)
0x3f: EventEnable(0)
0x40: Return(); Pop(4)

0x41: PushEmpty(object, object)
0x42: @ self(Stack[-1])
0x43: Pop(0)
0x44: Stack[-3] = Stack[-1]
0x45: Return(); Pop(2)

0x46: Stack[-1] = 0
0x47: PushEmpty(int, int)
0x48: Push("nouse_container")
0x49: @ GetVariable(Stack[-1], Stack[-2])
0x4a: Pop(1)
0x4b: Stack[-3] = !Stack[-1]; Pop(0);
0x4c: Return(); Pop(2)

