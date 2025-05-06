GlobalVarCount = 0

Strings:
	dream effect inited
	dream time
	klara2_positioner
	sleep_end
	sleeping

Import:
	Trace (1 args)
	GetGameTime (1 args)
	sync (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (float) Params = 0


0x0: PushEmpty(float, float, float, float, float, float)
0x1: Push("dream effect inited")
0x2: @ Trace(Stack[-1])
0x3: Pop(1)
0x4: @ GetGameTime(Stack[-3])
0x5: Pop(0)
0x6: Stack[-2] = Stack[-3]
0x7: @ sync()
0x8: Pop(0)
0x9: @ GetGameTime(Stack[-1])
0xa: Pop(0)
0xb: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0xc: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0xd: GOTO 0x13

0xe: PushEmpty(float)
0xf: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x10: Call2 0x15

0x11: Pop(1)
0x12: Stack[-2] = Stack[-1]
0x13: GOTO 0x7

0x14: Return(); Pop(6)

0x15: PushEmpty()
0x16: PushEmpty(bool)
0x17: Call2 0x2c

0x18: Pop(0)
0x19: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x1a: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x1b: GOTO 0x2b

0x1c: Push((float)4.0)
0x1d: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x1f: Push("dream time")
0x20: @ Trace(Stack[-1])
0x21: Pop(1)
0x22: Push((float)4.0)
0x23: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x24: @ sync()
0x25: Pop(0)
0x26: PushEmpty(bool, string, string)
0x27: Stack[-2] = "klara2_positioner"
0x28: Stack[-1] = "sleep_end"
0x29: Call2 0x39

0x2a: Pop(3)
0x2b: Return(); Pop(0)

0x2c: PushEmpty(bool, bool, bool, bool)
0x2d: Push("sleeping")
0x2e: @ HasProperty(Stack[-1], Stack[-3])
0x2f: Pop(1)
0x30: Pop(0); Push((bool) Stack[-2] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[-5] = (bool) 0
0x33: Return(); Pop(4)

0x34: Push("sleeping")
0x35: @ GetProperty(Stack[-1], Stack[-2])
0x36: Pop(1)
0x37: Stack[-5] = Stack[-1]
0x38: Return(); Pop(4)

0x39: PushEmpty(object, object)
0x3a: @ FindActor(Stack[-1], Stack[-4])
0x3b: Pop(0)
0x3c: Pop(0); Push((bool) Stack[-1] == 0)
0x3d: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3e: Stack[-5] = (bool) 0
0x3f: Return(); Pop(2)

0x40: @ Trigger(Stack[-1], Stack[-3])
0x41: Pop(0)
0x42: Stack[-5] = (bool) 1
0x43: Return(); Pop(2)

0x44: Stack[-1] = 0
