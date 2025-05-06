GlobalVarCount = 0

Strings:
	c_iWM_RealDayChange
	d
	q01
	b
	k
	alive
	dead
	gameover.xml
	default
	branch

Import:
	GetVariable (2 args)
	GetWindowSize (2 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	PlaySound (1 args)
	GameOver (1 args)
	DestroyWindow (0 args)
	GetStringByID (2 args)
	PrintInWidth (10 args)
	IsSoundPlaying (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, bool, bool, bool, float, int, int, int, int) Params = 0
		EVENT_1 Op = 0x3e Vars = (float)
		EVENT_0 Op = 0x59 Vars = ()


0x0: PushEmpty(int, int, int, string, int, int, int, int, string, int)
0x1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2: PushEmpty(int)
0x3: Call2 0x7b

0x4: Stack[-5] = Stack[-1]
0x5: Pop(1)
0x6: Push("c_iWM_RealDayChange")
0x7: @ GetVariable(Stack[-1], Stack[-4])
0x8: Pop(1)
0x9: Push((int) -1)
0xa: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xb: Push((int) 5)
0xc: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xe: Stack[8 + Tasks[-1].StackPointer] = (int)2001
0xf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x10: Stack[4 + Tasks[-1].StackPointer] = (int)10
0x11: GOTO 0x33

0x12: Stack[4 + Tasks[-1].StackPointer] = (float)1.0
0x13: Push((int) 0)
0x14: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x16: Push("d")
0x17: Pop(1); Push(Stack[-1] + Stack[-4]);
0x18: Push("q01")
0x19: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1a: GOTO 0x27

0x1b: Push((int) 1)
0x1c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1e: Push("b")
0x1f: Pop(1); Push(Stack[-1] + Stack[-4]);
0x20: Push("q01")
0x21: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x22: GOTO 0x27

0x23: Push("k")
0x24: Pop(1); Push(Stack[-1] + Stack[-4]);
0x25: Push("q01")
0x26: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x27: @ GetVariable(Stack[-2], Stack[-1])
0x28: Pop(0)
0x29: Push((int) 1000)
0x2a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2c: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x2d: Stack[0 + Tasks[-1].StackPointer] = "alive"
0x2e: Stack[8 + Tasks[-1].StackPointer] = (int)351
0x2f: GOTO 0x33

0x30: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x31: Stack[0 + Tasks[-1].StackPointer] = "dead"
0x32: Stack[8 + Tasks[-1].StackPointer] = (int)350
0x33: @ GetWindowSize(Stack[-5], Stack[-6])
0x34: Pop(0)
0x35: Push((bool) 1)
0x36: @ SetOwnerDraw(Stack[-1])
0x37: Pop(1)
0x38: Push((bool) 1)
0x39: @ SetNeedUpdate(Stack[-1])
0x3a: Pop(1)
0x3b: @ ProcessEvents()
0x3c: Pop(0)
0x3d: Return(); Pop(10)

0x3e: PushEmpty()
0x3f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x41: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x42: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x43: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x44: @ PlaySound(Stack[-0])
0x45: Pop(0)
0x46: Return(); Pop(0)

0x47: GOTO 0x4d

0x48: PushEmpty(bool)
0x49: Call2 0x6f

0x4a: Pop(0)
0x4b: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4c: Return(); Pop(0)

0x4d: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x4e: Push((int) 0)
0x4f: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] <= Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x51: Push( Stack[3 + Tasks[-1].StackPointer] )
0x52: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x53: Push("gameover.xml")
0x54: @ GameOver(Stack[-1])
0x55: Pop(1)
0x56: @ DestroyWindow()
0x57: Pop(0)
0x58: Return(); Pop(0)

0x59: PushEmpty(string, float, int, string, float, int)
0x5a: Push((int) 0)
0x5b: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] <= Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Return(); Pop(6)

0x5e: @ GetStringByID(Stack[-3], Stack[-8])
0x5f: Pop(0)
0x60: Push((float)1.0)
0x61: Stack[-3] = Stack[4 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0x62: Push((int) 1)
0x63: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-2] = (int) 1
0x66: Push("default")
0x67: Push((int) 0)
0x68: Push((int) 0)
0x69: Push((float)1.0)
0x6a: Push((float)1.0)
0x6b: Push((float)1.0)
0x6c: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-5], Stack[-9], Stack[-3], Stack[-2], Stack[-1], Stack[-8])
0x6d: Pop(6)
0x6e: Return(); Pop(6)

0x6f: PushEmpty(bool, bool)
0x70: Push( Stack[1 + Tasks[-1].StackPointer] )
0x71: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x72: Push("alive")
0x73: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x74: Pop(1)
0x75: GOTO 0x79

0x76: Push("dead")
0x77: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x78: Pop(1)
0x79: Stack[-3] = Stack[-1]
0x7a: Return(); Pop(2)

0x7b: PushEmpty(int, int)
0x7c: Push("branch")
0x7d: @ GetVariable(Stack[-1], Stack[-2])
0x7e: Pop(1)
0x7f: Stack[-3] = Stack[-1]
0x80: Return(); Pop(2)

