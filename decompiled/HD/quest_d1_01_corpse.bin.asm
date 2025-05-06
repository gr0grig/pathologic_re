GlobalVarCount = 0

Strings:
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
	SetTimeEvent (2 args)
	RemoveActor (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	IsLoaded (1 args)
	self (1 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_9 Op = 0xc Vars = (int, float)
		EVENT_6 Op = 0x1a Vars = ()
		EVENT_0 Op = 0x26 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: Push((int) 0)
0x5: Push((int) 24)
0x6: @ SetTimeEvent(Stack[-2], Stack[-1])
0x7: Pop(2)
0x8: PushEmpty()
0x9: Call2 0x22

0xa: Pop(0)
0xb: Return(); Pop(0)

0xc: PushEmpty()
0xd: PushEmpty(bool)
0xe: Call2 0x40

0xf: Pop(0)
0x10: Pop(1); Push((bool) Stack[-1] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x12: PushEmpty(object)
0x13: Call2 0x45

0x14: Pop(0)
0x15: @ RemoveActor(Stack[-1])
0x16: Pop(1)
0x17: GOTO 0x19

0x18: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x19: Return(); Pop(0)

0x1a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1b: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1c: PushEmpty(object)
0x1d: Call2 0x45

0x1e: Pop(0)
0x1f: @ RemoveActor(Stack[-1])
0x20: Pop(1)
0x21: Return(); Pop(0)

0x22: @ Hold()
0x23: Pop(0)
0x24: GOTO 0x22

0x25: Return(); Pop(0)

0x26: PushEmpty(bool, bool, bool, bool)
0x27: PushEmpty(bool)
0x28: Stack[-1] = (bool) 1
0x29: Pop(0); Push((bool) Stack[-6] == 0)
0x2a: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2b: PushEmpty(bool)
0x2c: Call2 0x4b

0x2d: Pop(0)
0x2e: Pop(1); Push((bool) Stack[-1] == 0)
0x2f: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x30: Stack[-1] = (bool) 0
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: Return(); Pop(4)

0x33: @@ IsOnGround(Stack[-2])
0x34: Pop(0)
0x35: Push(Stack[-2])
0x36: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x37: EventDisable(0)
0x38: @ IsOverrideActive(Stack[-1])
0x39: Pop(0)
0x3a: Pop(0); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3c: @ Barter(Stack[-5])
0x3d: Pop(0)
0x3e: EventEnable(0)
0x3f: Return(); Pop(4)

0x40: PushEmpty(bool, bool)
0x41: @ IsLoaded(Stack[-1])
0x42: Pop(0)
0x43: Stack[-3] = Stack[-1]
0x44: Return(); Pop(2)

0x45: PushEmpty(object, object)
0x46: @ self(Stack[-1])
0x47: Pop(0)
0x48: Stack[-3] = Stack[-1]
0x49: Return(); Pop(2)

0x4a: Stack[-1] = 0
0x4b: PushEmpty(int, int)
0x4c: Push("nouse_container")
0x4d: @ GetVariable(Stack[-1], Stack[-2])
0x4e: Pop(1)
0x4f: Stack[-3] = !Stack[-1]; Pop(0);
0x50: Return(); Pop(2)

