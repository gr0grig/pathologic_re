GlobalVarCount = 0

Strings:
	hunger
	b10q01_stop
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
		EVENT_26 Op = 0x14 Vars = (string)


0x0: PushEmpty(float)
0x1: Stack[-1] = (int) 12
0x2: Call2 0x1c

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty()
0x6: PushEmpty(bool, string, float, float, float)
0x7: Stack[-4] = "hunger"
0x8: Stack[-3] = Stack[-6]
0x9: Stack[-2] = (int) 0
0xa: Stack[-1] = (int) 1
0xb: Call2 0x3e

0xc: Pop(5)
0xd: PushEmpty(float)
0xe: Push((int) 2)
0xf: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x10: Call2 0x5c

0x11: Pop(1)
0x12: Stack[-2] = (bool) 0
0x13: Return(); Pop(0)

0x14: PushEmpty()
0x15: Push("b10q01_stop")
0x16: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x18: PushEmpty()
0x19: Call2 0x3c

0x1a: Pop(0)
0x1b: Return(); Pop(0)

0x1c: PushEmpty(float, float, float, float, float, float, float, float)
0x1d: @ GetGameTime(Stack[-4])
0x1e: Pop(0)
0x1f: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x20: Stack[-2] = Stack[-4]
0x21: @ sync()
0x22: Pop(0)
0x23: Push( Stack[0 + Tasks[-1].StackPointer] )
0x24: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x25: GOTO 0x3b

0x26: @ GetGameTime(Stack[-1])
0x27: Pop(0)
0x28: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x29: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x2a: GOTO 0x3a

0x2b: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x2c: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2d: PushEmpty(bool, float)
0x2e: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x2f: Call2 0x5

0x30: Pop(2)
0x31: GOTO 0x3b

0x32: GOTO 0x3a

0x33: PushEmpty(bool, float)
0x34: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x35: Call2 0x5

0x36: Pop(1)
0x37: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x38: GOTO 0x3b

0x39: Stack[-2] = Stack[-1]
0x3a: GOTO 0x21

0x3b: Return(); Pop(8)

0x3c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3d: Return(); Pop(0)

0x3e: PushEmpty(bool, float, bool, float)
0x3f: @ HasProperty(Stack[-8], Stack[-2])
0x40: Pop(0)
0x41: Pop(0); Push((bool) Stack[-2] == 0)
0x42: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x43: Stack[-9] = (bool) 0
0x44: Return(); Pop(4)

0x45: @ GetProperty(Stack[-8], Stack[-1])
0x46: Pop(0)
0x47: PushEmpty(float, float, float, float)
0x48: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x49: Stack[-2] = Stack[-10]
0x4a: Stack[-1] = Stack[-9]
0x4b: Call2 0x51

0x4c: Pop(3)
0x4d: @ SetProperty(Stack[-9], Stack[-1])
0x4e: Pop(1)
0x4f: Stack[-9] = (bool) 1
0x50: Return(); Pop(4)

0x51: PushEmpty()
0x52: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x53: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x54: Stack[-4] = Stack[-2]
0x55: Return(); Pop(0)

0x56: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x58: Stack[-4] = Stack[-1]
0x59: Return(); Pop(0)

0x5a: Stack[-4] = Stack[-3]
0x5b: Return(); Pop(0)

0x5c: PushEmpty(object, object)
0x5d: @ CreateFloatVector(Stack[-1])
0x5e: Pop(0)
0x5f: @@ add(Stack[-3])
0x60: Pop(0)
0x61: Push((int) 12)
0x62: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x63: Pop(1)
0x64: Return(); Pop(2)

0x65: Stack[-1] = 0
