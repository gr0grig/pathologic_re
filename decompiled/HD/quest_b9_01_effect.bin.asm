GlobalVarCount = 0

Strings:
	tiredness
	b9q01_stop
	add

Import:
	GetGameTime (1 args)
	sync (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	SetProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x13 Vars = (string)


0x0: PushEmpty(float)
0x1: Stack[-1] = (int) 12
0x2: Call2 0x1b

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty()
0x6: PushEmpty(bool, string, float, float, float)
0x7: Stack[-4] = "tiredness"
0x8: Stack[-3] = Stack[-6]
0x9: Stack[-2] = (int) 0
0xa: Stack[-1] = (int) 1
0xb: Call2 0x3d

0xc: Pop(5)
0xd: PushEmpty(float)
0xe: Stack[-1] = Stack[-2]
0xf: Call2 0x5b

0x10: Pop(1)
0x11: Stack[-2] = (bool) 0
0x12: Return(); Pop(0)

0x13: PushEmpty()
0x14: Push("b9q01_stop")
0x15: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x17: PushEmpty()
0x18: Call2 0x3b

0x19: Pop(0)
0x1a: Return(); Pop(0)

0x1b: PushEmpty(float, float, float, float, float, float, float, float)
0x1c: @ GetGameTime(Stack[-4])
0x1d: Pop(0)
0x1e: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x1f: Stack[-2] = Stack[-4]
0x20: @ sync()
0x21: Pop(0)
0x22: Push( Stack[0 + Tasks[-1].StackPointer] )
0x23: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x24: GOTO 0x3a

0x25: @ GetGameTime(Stack[-1])
0x26: Pop(0)
0x27: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x28: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x29: GOTO 0x39

0x2a: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x2b: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2c: PushEmpty(bool, float)
0x2d: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x2e: Call2 0x5

0x2f: Pop(2)
0x30: GOTO 0x3a

0x31: GOTO 0x39

0x32: PushEmpty(bool, float)
0x33: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x34: Call2 0x5

0x35: Pop(1)
0x36: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x37: GOTO 0x3a

0x38: Stack[-2] = Stack[-1]
0x39: GOTO 0x20

0x3a: Return(); Pop(8)

0x3b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3c: Return(); Pop(0)

0x3d: PushEmpty(bool, float, bool, float)
0x3e: @ HasProperty(Stack[-8], Stack[-2])
0x3f: Pop(0)
0x40: Pop(0); Push((bool) Stack[-2] == 0)
0x41: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x42: Stack[-9] = (bool) 0
0x43: Return(); Pop(4)

0x44: @ GetProperty(Stack[-8], Stack[-1])
0x45: Pop(0)
0x46: PushEmpty(float, float, float, float)
0x47: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x48: Stack[-2] = Stack[-10]
0x49: Stack[-1] = Stack[-9]
0x4a: Call2 0x50

0x4b: Pop(3)
0x4c: @ SetProperty(Stack[-9], Stack[-1])
0x4d: Pop(1)
0x4e: Stack[-9] = (bool) 1
0x4f: Return(); Pop(4)

0x50: PushEmpty()
0x51: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: Stack[-4] = Stack[-2]
0x54: Return(); Pop(0)

0x55: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Stack[-4] = Stack[-1]
0x58: Return(); Pop(0)

0x59: Stack[-4] = Stack[-3]
0x5a: Return(); Pop(0)

0x5b: PushEmpty(object, object)
0x5c: @ CreateFloatVector(Stack[-1])
0x5d: Pop(0)
0x5e: @@ add(Stack[-3])
0x5f: Pop(0)
0x60: Push((int) 11)
0x61: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x62: Pop(1)
0x63: Return(); Pop(2)

0x64: Stack[-1] = 0
