GlobalVarCount = 0

Strings:
	c_iWM_RealDayChange
	d
	q01
	b
	k
	alive
	dead
	default
	branch

Import:
	GetVariable (2 args)
	GetWindowSize (2 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	PlaySound (1 args)
	DestroyWindow (0 args)
	GetStringByID (2 args)
	PrintInWidth (10 args)
	IsSoundPlaying (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, bool, bool, float, int, int, int, int) Params = 0
		EVENT_1 Op = 0x36 Vars = (float)
		EVENT_0 Op = 0x4a Vars = ()


0x0: PushEmpty(int, int, int, string, int, int, int, int, string, int)
0x1: PushEmpty(int)
0x2: Call2 0x68

0x3: Stack[-5] = Stack[-1]
0x4: Pop(1)
0x5: Push("c_iWM_RealDayChange")
0x6: @ GetVariable(Stack[-1], Stack[-4])
0x7: Pop(1)
0x8: Push((int) -1)
0x9: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xa: Stack[3 + Tasks[-1].StackPointer] = (float)1.0
0xb: Push((int) 0)
0xc: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: Push("d")
0xf: Pop(1); Push(Stack[-1] + Stack[-4]);
0x10: Push("q01")
0x11: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x12: GOTO 0x1f

0x13: Push((int) 1)
0x14: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x16: Push("b")
0x17: Pop(1); Push(Stack[-1] + Stack[-4]);
0x18: Push("q01")
0x19: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1a: GOTO 0x1f

0x1b: Push("k")
0x1c: Pop(1); Push(Stack[-1] + Stack[-4]);
0x1d: Push("q01")
0x1e: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1f: @ GetVariable(Stack[-2], Stack[-1])
0x20: Pop(0)
0x21: Push((int) 1000)
0x22: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x24: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x25: Stack[0 + Tasks[-1].StackPointer] = "alive"
0x26: Stack[7 + Tasks[-1].StackPointer] = (int)351
0x27: GOTO 0x2b

0x28: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x29: Stack[0 + Tasks[-1].StackPointer] = "dead"
0x2a: Stack[7 + Tasks[-1].StackPointer] = (int)350
0x2b: @ GetWindowSize(Stack[-4], Stack[-5])
0x2c: Pop(0)
0x2d: Push((bool) 1)
0x2e: @ SetOwnerDraw(Stack[-1])
0x2f: Pop(1)
0x30: Push((bool) 1)
0x31: @ SetNeedUpdate(Stack[-1])
0x32: Pop(1)
0x33: @ ProcessEvents()
0x34: Pop(0)
0x35: Return(); Pop(10)

0x36: PushEmpty()
0x37: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x39: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3a: @ PlaySound(Stack[-0])
0x3b: Pop(0)
0x3c: Return(); Pop(0)

0x3d: GOTO 0x43

0x3e: PushEmpty(bool)
0x3f: Call2 0x5c

0x40: Pop(0)
0x41: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x42: Return(); Pop(0)

0x43: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x44: Push((int) 0)
0x45: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] <= Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x47: @ DestroyWindow()
0x48: Pop(0)
0x49: Return(); Pop(0)

0x4a: PushEmpty(string, float, int, string, float, int)
0x4b: Push((int) 0)
0x4c: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] <= Stack[-1])
0x4d: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4e: Return(); Pop(6)

0x4f: @ GetStringByID(Stack[-3], Stack[-7])
0x50: Pop(0)
0x51: Push((float)1.0)
0x52: Stack[-3] = Stack[3 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0x53: Push("default")
0x54: Push((int) 0)
0x55: Push((int) 0)
0x56: Push((float)1.0)
0x57: Push((float)1.0)
0x58: Push((float)1.0)
0x59: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1], Stack[-8])
0x5a: Pop(6)
0x5b: Return(); Pop(6)

0x5c: PushEmpty(bool, bool)
0x5d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x5e: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5f: Push("alive")
0x60: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x61: Pop(1)
0x62: GOTO 0x66

0x63: Push("dead")
0x64: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x65: Pop(1)
0x66: Stack[-3] = Stack[-1]
0x67: Return(); Pop(2)

0x68: PushEmpty(int, int)
0x69: Push("branch")
0x6a: @ GetVariable(Stack[-1], Stack[-2])
0x6b: Pop(1)
0x6c: Stack[-3] = Stack[-1]
0x6d: Return(); Pop(2)

