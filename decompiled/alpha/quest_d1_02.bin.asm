GlobalVarCount = 0

Strings:
	d1q02
	cot_anna
	cot_anna_corpse
	actor_disp.bin
	completed
	cleanup

Import:
	SetVariable (2 args)
	GetSceneByName (2 args)
	AddScriptedActor (5 args)
	Trace (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x13 Vars = (string)
		EVENT_9 Op = 0x57 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("d1q02")
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: Push("cot_anna")
0x6: @ GetSceneByName(Stack[-2], Stack[-1])
0x7: Pop(1)
0x8: Push("cot_anna_corpse")
0x9: Push("actor_disp.bin")
0xa: Push(CVector(0.0, 0.0, 0.0))
0xb: @ AddScriptedActor(Stack[-0], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0xc: Pop(3)
0xd: PushEmpty(int)
0xe: Stack[-1] = (int) 1
0xf: Call 0x44

0x10: Pop(1)
0x11: Return(); Pop(2)

0x12: Stack[-1] = 0
0x13: PushEmpty()
0x14: @ Trace(Stack[-1])
0x15: Pop(0)
0x16: Push("completed")
0x17: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x19: PushEmpty()
0x1a: Call 0x30

0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty(int, int)
0x1e: Push("d1q02")
0x1f: @ GetVariable(Stack[-1], Stack[-2])
0x20: Pop(1)
0x21: Push((int) 1000)
0x22: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x24: PushEmpty()
0x25: Call 0x28

0x26: Pop(0)
0x27: Return(); Pop(2)

0x28: Push("d1q02")
0x29: Push((int) -1)
0x2a: @ SetVariable(Stack[-2], Stack[-1])
0x2b: Pop(2)
0x2c: PushEmpty()
0x2d: Call 0x38

0x2e: Pop(0)
0x2f: Return(); Pop(0)

0x30: Push("d1q02")
0x31: Push((int) 1000)
0x32: @ SetVariable(Stack[-2], Stack[-1])
0x33: Pop(2)
0x34: PushEmpty()
0x35: Call 0x38

0x36: Pop(0)
0x37: Return(); Pop(0)

0x38: EventDisable(26)
0x39: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3a: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3b: Push("cleanup")
0x3c: @ Trigger(Stack[-0], Stack[-1])
0x3d: Pop(1)
0x3e: PushEmpty(object)
0x3f: Call 0x5c

0x40: Pop(0)
0x41: @ RemoveActor(Stack[-1])
0x42: Pop(1)
0x43: Return(); Pop(0)

0x44: PushEmpty(float, float)
0x45: @ GetGameTime(Stack[-1])
0x46: Pop(0)
0x47: Push((int) 24)
0x48: Pop(1); Push(Stack[-4] * Stack[-1]);
0x49: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4b: PushEmpty()
0x4c: Call 0x38

0x4d: Pop(0)
0x4e: GOTO 0x56

0x4f: Push((int) 0)
0x50: Push((int) 24)
0x51: Pop(1); Push(Stack[-5] * Stack[-1]);
0x52: @ SetTimeEvent(Stack[-2], Stack[-1])
0x53: Pop(2)
0x54: @ Hold()
0x55: Pop(0)
0x56: Return(); Pop(2)

0x57: PushEmpty()
0x58: PushEmpty()
0x59: Call 0x1d

0x5a: Pop(0)
0x5b: Return(); Pop(0)

0x5c: PushEmpty(object, object)
0x5d: @ self(Stack[-1])
0x5e: Pop(0)
0x5f: Stack[-3] = Stack[-1]
0x60: Return(); Pop(2)

0x61: Stack[-1] = 0
