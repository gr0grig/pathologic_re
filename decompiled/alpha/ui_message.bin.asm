GlobalVarCount = 0

Strings:
	text
	default
	button_day

Import:
	GetSelectedMessage (1 args)
	GetMessage (4 args)
	SendMessage (2 args)
	ShowCursor (0 args)
	SetCursor (1 args)
	CaptureKeyboard (0 args)
	ProcessEvents (0 args)
	DestroyWindow (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int) Params = 0
		EVENT_100 Op = 0x1e Vars = (int)
		EVENT_200 Op = 0x22 Vars = (int, string, object)


0x0: PushEmpty(int, float, string, string, int, float, string, string)
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2: @ GetSelectedMessage(Stack[-4])
0x3: Pop(0)
0x4: Push((int) -1)
0x5: Pop(1); Push((bool) Stack[-5] != Stack[-1])
0x6: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0x7: @ GetMessage(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x8: Pop(0)
0x9: Push((float)24.0)
0xa: Stack[0 + Tasks[-1].StackPointer] = Stack[-4] / Stack[-1]; Pop(1);
0xb: Push((int) 32768)
0xc: Pop(1); Push(Stack[-5] | Stack[-1]);
0xd: Push("text")
0xe: @ SendMessage(Stack[-2], Stack[-1])
0xf: Pop(2)
0x10: @ ShowCursor()
0x11: Pop(0)
0x12: Push("default")
0x13: @ SetCursor(Stack[-1])
0x14: Pop(1)
0x15: PushEmpty(int)
0x16: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17: Call 0x37

0x18: Pop(1)
0x19: @ CaptureKeyboard()
0x1a: Pop(0)
0x1b: @ ProcessEvents()
0x1c: Pop(0)
0x1d: Return(); Pop(8)

0x1e: PushEmpty()
0x1f: @ DestroyWindow()
0x20: Pop(0)
0x21: Return(); Pop(0)

0x22: PushEmpty(int, int)
0x23: Stack[-1] = (int) 0
0x24: Push((int) 12)
0x25: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x27: Push("button_day")
0x28: Push((int) 1)
0x29: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2e: GOTO 0x32

0x2f: Push((int) 1)
0x30: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x31: GOTO 0x24

0x32: PushEmpty(int)
0x33: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34: Call 0x37

0x35: Pop(1)
0x36: Return(); Pop(2)

0x37: PushEmpty(int, int)
0x38: Stack[-1] = (int) 0
0x39: Push((int) 12)
0x3a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x3c: Pop(0); Push((bool) Stack[-1] == Stack[-3])
0x3d: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x3e: Push((int) 1)
0x3f: Push("button_day")
0x40: Push((int) 1)
0x41: Pop(1); Push(Stack[-4] + Stack[-1]);
0x42: Pop(2); Push(Stack[-2] + Stack[-1]);
0x43: @ SendMessage(Stack[-2], Stack[-1])
0x44: Pop(2)
0x45: GOTO 0x4d

0x46: Push((int) 0)
0x47: Push("button_day")
0x48: Push((int) 1)
0x49: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4b: @ SendMessage(Stack[-2], Stack[-1])
0x4c: Pop(2)
0x4d: Push((int) 1)
0x4e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4f: GOTO 0x39

0x50: Push("text")
0x51: @ SendMessage(Stack[-4], Stack[-1])
0x52: Pop(1)
0x53: Return(); Pop(2)

