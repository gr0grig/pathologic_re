GlobalVarCount = 0

Strings:
	intro

Import:
	GetWindowSize (2 args)
	IsImageLoaded (2 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	StretchBlit (6 args)
	SendMessage (2 args)
	rand (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (float, float, float, int, int, int, int, bool) Params = 0
		EVENT_0 Op = 0x1b Vars = ()
		EVENT_200 Op = 0x24 Vars = (int, string, object)
		EVENT_1 Op = 0x2c Vars = (float)


0x0: PushEmpty(bool, bool)
0x1: @ GetWindowSize(Stack[-5], Stack[-6])
0x2: Pop(0)
0x3: Stack[7 + Tasks[-1].StackPointer] = (bool)1
0x4: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x5: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x6: Push((bool) 1)
0x7: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x8: Push((int) 1)
0x9: Pop(1); Push(Stack[4 + StackPtr] + Stack[-1]);
0xa: @ IsImageLoaded(Stack[-2], Stack[-1])
0xb: Pop(1)
0xc: Pop(0); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xe: GOTO 0x12

0xf: Push((int) 1)
0x10: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x11: GOTO 0x6

0x12: Push((bool) 1)
0x13: @ SetOwnerDraw(Stack[-1])
0x14: Pop(1)
0x15: Push((bool) 1)
0x16: @ SetNeedUpdate(Stack[-1])
0x17: Pop(1)
0x18: @ ProcessEvents()
0x19: Pop(0)
0x1a: Return(); Pop(2)

0x1b: Pop(0); Push((bool) Stack[7 + Tasks[-1].StackPointer] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1d: Push((int) 1)
0x1e: Pop(1); Push(Stack[3 + StackPtr] + Stack[-1]);
0x1f: Push((int) 0)
0x20: Push((int) 0)
0x21: @ StretchBlit(Stack[-3], Stack[-2], Stack[-1], Stack[-5], Stack[-6], Stack[-2])
0x22: Pop(3)
0x23: Return(); Pop(0)

0x24: PushEmpty()
0x25: Push("intro")
0x26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x28: PushEmpty()
0x29: Call2 0x4b

0x2a: Pop(0)
0x2b: Return(); Pop(0)

0x2c: PushEmpty()
0x2d: Push( Stack[7 + Tasks[-1].StackPointer] )
0x2e: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2f: Return(); Pop(0)

0x30: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x31: Push((int) 0)
0x32: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Return(); Pop(0)

0x35: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x36: Push((int) 0)
0x37: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x39: Push((int) 1)
0x3a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1] + Stack[1 + Tasks[-1].StackPointer]; Pop(1);
0x3b: Push((int) -1)
0x3c: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3e: Push((int) 0)
0x3f: Push("intro")
0x40: @ SendMessage(Stack[-2], Stack[-1])
0x41: Pop(2)
0x42: Stack[7 + Tasks[-1].StackPointer] = (bool)1
0x43: Return(); Pop(0)

0x44: GOTO 0x46

0x45: Stack[2 + Tasks[-1].StackPointer] = -Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x46: Push((int) 1)
0x47: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] > Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x49: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x4a: Return(); Pop(0)

0x4b: Stack[7 + Tasks[-1].StackPointer] = (bool)0
0x4c: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x4d: @ rand(Stack[-1])
0x4e: Pop(0)
0x4f: Push((int) 6)
0x50: Push((int) 3)
0x51: Pop(1); Push(Stack[1 + StackPtr] * Stack[-1]);
0x52: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x53: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x54: Push((int) 1)
0x55: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x56: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] % Stack[4 + Tasks[-1].StackPointer]; Pop(0);
0x57: Return(); Pop(0)

