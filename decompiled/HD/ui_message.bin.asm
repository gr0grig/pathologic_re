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
		EVENT_101 Op = 0x29 Vars = (int)
		EVENT_102 Op = 0x58 Vars = (int)
		EVENT_200 Op = 0x69 Vars = (int, string, object)


0x0: PushEmpty(int)
0x1: Call2 0x9b

0x2: Pop(0)
0x3: Push((int) 1)
0x4: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(2);
0x5: PushEmpty(bool)
0x6: Stack[-1] = (bool) 0
0x7: PushEmpty(int)
0x8: Call2 0xa4

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
0x1e: Call2 0x7e

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

0x29: PushEmpty()
0x2a: Push((int) 266)
0x2b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x2d: Push((int) 11)
0x2e: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x30: Push((int) 1)
0x31: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x32: GOTO 0x34

0x33: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x34: PushEmpty(int)
0x35: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36: Call2 0x7e

0x37: Pop(1)
0x38: GOTO 0x57

0x39: Push((int) 265)
0x3a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x3c: Push((int) 0)
0x3d: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3f: Push((int) -1)
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x41: GOTO 0x43

0x42: Stack[0 + Tasks[-1].StackPointer] = (int)11
0x43: PushEmpty(int)
0x44: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45: Call2 0x7e

0x46: Pop(1)
0x47: GOTO 0x57

0x48: Push((int) 267)
0x49: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4b: Push((int) 1001)
0x4c: Push("text")
0x4d: @ SendMessage(Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: GOTO 0x57

0x50: Push((int) 268)
0x51: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x53: Push((int) 1000)
0x54: Push("text")
0x55: @ SendMessage(Stack[-2], Stack[-1])
0x56: Pop(2)
0x57: Return(); Pop(0)

0x58: PushEmpty()
0x59: Push((int) 272)
0x5a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5c: Push((int) 1001)
0x5d: Push("text")
0x5e: @ SendMessage(Stack[-2], Stack[-1])
0x5f: Pop(2)
0x60: GOTO 0x68

0x61: Push((int) 274)
0x62: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x64: Push((int) 1000)
0x65: Push("text")
0x66: @ SendMessage(Stack[-2], Stack[-1])
0x67: Pop(2)
0x68: Return(); Pop(0)

0x69: PushEmpty(int, int)
0x6a: Stack[-1] = (int) 0
0x6b: Push((int) 12)
0x6c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x6e: Push("button_day")
0x6f: Push((int) 1)
0x70: Pop(1); Push(Stack[-3] + Stack[-1]);
0x71: Pop(2); Push(Stack[-2] + Stack[-1]);
0x72: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x74: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x75: GOTO 0x79

0x76: Push((int) 1)
0x77: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x78: GOTO 0x6b

0x79: PushEmpty(int)
0x7a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b: Call2 0x7e

0x7c: Pop(1)
0x7d: Return(); Pop(2)

0x7e: PushEmpty(int, int)
0x7f: Stack[-1] = (int) 0
0x80: Push((int) 12)
0x81: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x82: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x83: Pop(0); Push((bool) Stack[-1] == Stack[-3])
0x84: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x85: Push((int) 1)
0x86: Push("button_day")
0x87: Push((int) 1)
0x88: Pop(1); Push(Stack[-4] + Stack[-1]);
0x89: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8a: @ SendMessage(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x94

0x8d: Push((int) 0)
0x8e: Push("button_day")
0x8f: Push((int) 1)
0x90: Pop(1); Push(Stack[-4] + Stack[-1]);
0x91: Pop(2); Push(Stack[-2] + Stack[-1]);
0x92: @ SendMessage(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: Push((int) 1)
0x95: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x96: GOTO 0x80

0x97: Push("text")
0x98: @ SendMessage(Stack[-4], Stack[-1])
0x99: Pop(1)
0x9a: Return(); Pop(2)

0x9b: PushEmpty(float, float)
0x9c: @ GetGameTime(Stack[-1])
0x9d: Pop(0)
0x9e: Push((int) 1)
0x9f: PushEmpty(int)
0xa0: Push((int) 24)
0xa1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa3: Return(); Pop(2)

0xa4: PushEmpty(float, float)
0xa5: @ GetGameTime(Stack[-1])
0xa6: Pop(0)
0xa7: PushEmpty(int)
0xa8: Stack[-1] = Stack[-2]
0xa9: Push((int) 24)
0xaa: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xab: Return(); Pop(2)

