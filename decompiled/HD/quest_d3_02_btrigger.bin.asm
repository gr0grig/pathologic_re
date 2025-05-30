GlobalVarCount = 0

Strings:
	quest_d3_02
	butcher_trigger
	cleanup
	restore

Import:
	IsPlayerActor (2 args)
	RemoveActor (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x11
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_23 Op = 0x0 Vars = (object)
		EVENT_26 Op = 0x15 Vars = (string)
		EVENT_6 Op = 0x31 Vars = ()


0x0: PushEmpty(bool, bool)
0x1: @ IsPlayerActor(Stack[-3], Stack[-1])
0x2: Pop(0)
0x3: Push(Stack[-1])
0x4: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0x5: EventDisable(23)
0x6: PushEmpty(bool, string, string)
0x7: Stack[-2] = "quest_d3_02"
0x8: Stack[-1] = "butcher_trigger"
0x9: Call2 0x49

0xa: Pop(3)
0xb: PushEmpty(object)
0xc: Call2 0x43

0xd: Pop(0)
0xe: @ RemoveActor(Stack[-1])
0xf: Pop(1)
0x10: Return(); Pop(2)

0x11: @ Hold()
0x12: Pop(0)
0x13: GOTO 0x11

0x14: Return(); Pop(0)

0x15: PushEmpty(bool, bool)
0x16: Push("cleanup")
0x17: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x19: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1a: @ IsLoaded(Stack[-1])
0x1b: Pop(0)
0x1c: PushEmpty(bool)
0x1d: Stack[-1] = (bool) 0
0x1e: Pop(0); Push((bool) Stack[-2] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x20: PushEmpty(bool)
0x21: Call2 0x41

0x22: Pop(0)
0x23: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x24: Stack[-1] = (bool) 1
0x25: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x26: PushEmpty(object)
0x27: Call2 0x43

0x28: Pop(0)
0x29: @ RemoveActor(Stack[-1])
0x2a: Pop(1)
0x2b: GOTO 0x30

0x2c: Push("restore")
0x2d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x30: Return(); Pop(2)

0x31: PushEmpty(bool)
0x32: Stack[-1] = (bool) 0
0x33: Push( Stack[0 + Tasks[-1].StackPointer] )
0x34: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x35: PushEmpty(bool)
0x36: Call2 0x41

0x37: Pop(0)
0x38: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x39: Stack[-1] = (bool) 1
0x3a: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3b: PushEmpty(object)
0x3c: Call2 0x43

0x3d: Pop(0)
0x3e: @ RemoveActor(Stack[-1])
0x3f: Pop(1)
0x40: Return(); Pop(0)

0x41: Stack[-1] = (bool) 1
0x42: Return(); Pop(0)

0x43: PushEmpty(object, object)
0x44: @ self(Stack[-1])
0x45: Pop(0)
0x46: Stack[-3] = Stack[-1]
0x47: Return(); Pop(2)

0x48: Stack[-1] = 0
0x49: PushEmpty(object, object)
0x4a: @ FindActor(Stack[-1], Stack[-4])
0x4b: Pop(0)
0x4c: Pop(0); Push((bool) Stack[-1] == 0)
0x4d: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4e: Stack[-5] = (bool) 0
0x4f: Return(); Pop(2)

0x50: @ Trigger(Stack[-1], Stack[-3])
0x51: Pop(0)
0x52: Stack[-5] = (bool) 1
0x53: Return(); Pop(2)

0x54: Stack[-1] = 0
