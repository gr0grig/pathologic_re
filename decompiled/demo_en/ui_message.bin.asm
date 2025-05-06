GlobalVarCount = 0

Strings:
	text
	default
	button_day

Import:
	SendMessage (2 args)
	ShowCursor (0 args)
	SetCursor (1 args)
	CaptureKeyboard (0 args)
	ProcessEvents (0 args)
	DestroyWindow (0 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int) Params = 0
		EVENT_100 Op = 0x25 Vars = (int)
		EVENT_200 Op = 0x29 Vars = (int, string, object)


0x0: PushEmpty(int)
0x1: Call2 0x5b

0x2: Pop(0)
0x3: Push((int) 1)
0x4: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0x5: PushEmpty(bool)
0x6: Stack[-1] = (bool) 0
0x7: PushEmpty(int)
0x8: Call2 0x64

0x9: Pop(0)
0xa: Push((int) 7)
0xb: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xd: Push((int) 0)
0xe: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0xf: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x10: Stack[-1] = (bool) 1
0x11: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x12: Push((int) -1)
0x13: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x14: Push("text")
0x15: @ SendMessage(Stack[-0], Stack[-1])
0x16: Pop(1)
0x17: @ ShowCursor()
0x18: Pop(0)
0x19: Push("default")
0x1a: @ SetCursor(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(int)
0x1d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e: Call2 0x3e

0x1f: Pop(1)
0x20: @ CaptureKeyboard()
0x21: Pop(0)
0x22: @ ProcessEvents()
0x23: Pop(0)
0x24: Return(); Pop(0)

0x25: PushEmpty()
0x26: @ DestroyWindow()
0x27: Pop(0)
0x28: Return(); Pop(0)

0x29: PushEmpty(int, int)
0x2a: Stack[-1] = (int) 0
0x2b: Push((int) 12)
0x2c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x2e: Push("button_day")
0x2f: Push((int) 1)
0x30: Pop(1); Push(Stack[-3] + Stack[-1]);
0x31: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x34: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x35: GOTO 0x39

0x36: Push((int) 1)
0x37: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x38: GOTO 0x2b

0x39: PushEmpty(int)
0x3a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b: Call2 0x3e

0x3c: Pop(1)
0x3d: Return(); Pop(2)

0x3e: PushEmpty(int, int)
0x3f: Stack[-1] = (int) 0
0x40: Push((int) 12)
0x41: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x43: Pop(0); Push((bool) Stack[-1] == Stack[-3])
0x44: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x45: Push((int) 1)
0x46: Push("button_day")
0x47: Push((int) 1)
0x48: Pop(1); Push(Stack[-4] + Stack[-1]);
0x49: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a: @ SendMessage(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: GOTO 0x54

0x4d: Push((int) 0)
0x4e: Push("button_day")
0x4f: Push((int) 1)
0x50: Pop(1); Push(Stack[-4] + Stack[-1]);
0x51: Pop(2); Push(Stack[-2] + Stack[-1]);
0x52: @ SendMessage(Stack[-2], Stack[-1])
0x53: Pop(2)
0x54: Push((int) 1)
0x55: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x56: GOTO 0x40

0x57: Push("text")
0x58: @ SendMessage(Stack[-4], Stack[-1])
0x59: Pop(1)
0x5a: Return(); Pop(2)

0x5b: PushEmpty(float, float)
0x5c: @ GetGameTime(Stack[-1])
0x5d: Pop(0)
0x5e: Push((int) 1)
0x5f: PushEmpty(int)
0x60: Push((int) 24)
0x61: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x62: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x63: Return(); Pop(2)

0x64: PushEmpty(float, float)
0x65: @ GetGameTime(Stack[-1])
0x66: Pop(0)
0x67: PushEmpty(int)
0x68: Stack[-1] = Stack[-2]
0x69: Push((int) 24)
0x6a: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x6b: Return(); Pop(2)

