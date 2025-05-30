GlobalVarCount = 0

Strings:
	default
	text_cursor
	add

Import:
	GetWindowSize (2 args)
	SetBackground (1 args)
	SetNeedUpdate (1 args)
	SetOwnerDraw (1 args)
	EnableClipping (0 args)
	ProcessEvents (0 args)
	_strlen (2 args)
	_strsub (4 args)
	_strsub (3 args)
	GetTextWidth (4 args)
	Print (4 args)
	Blit (3 args)
	CreateStringVector (1 args)
	SendMessageToParent (2 args)
	CaptureKeyboard (0 args)
	FontHasCharacterGlyph (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, int, int, int, int, float, bool) Params = 0
		EVENT_0 Op = 0x4b Vars = ()
		EVENT_1 Op = 0x6d Vars = (float)
		EVENT_100 Op = 0x77 Vars = (int)
		EVENT_101 Op = 0x8d Vars = (int)
		EVENT_2 Op = 0xb1 Vars = (int, int)


0x0: @ GetWindowSize(Stack[-2], Stack[-3])
0x1: Pop(0)
0x2: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x3: PushEmpty()
0x4: Call2 0x14

0x5: Pop(0)
0x6: Push("default")
0x7: @ SetBackground(Stack[-1])
0x8: Pop(1)
0x9: Push((bool) 1)
0xa: @ SetNeedUpdate(Stack[-1])
0xb: Pop(1)
0xc: Push((bool) 1)
0xd: @ SetOwnerDraw(Stack[-1])
0xe: Pop(1)
0xf: @ EnableClipping()
0x10: Pop(0)
0x11: @ ProcessEvents()
0x12: Pop(0)
0x13: Return(); Pop(0)

0x14: @ _strlen(Stack[-1], Stack[-0])
0x15: Pop(0)
0x16: Return(); Pop(0)

0x17: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x18: Return(); Pop(0)

0x19: Push((int) -1)
0x1a: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1b: Push((int) 0)
0x1c: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1e: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1f: Return(); Pop(0)

0x20: PushEmpty(int, int)
0x21: Push((int) 1)
0x22: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x23: @ _strlen(Stack[-1], Stack[-0])
0x24: Pop(0)
0x25: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x28: Return(); Pop(2)

0x29: PushEmpty(string, string, string, string, string, string)
0x2a: PushEmpty(bool, int)
0x2b: Stack[-1] = Stack[-9]
0x2c: Call2 0xb8

0x2d: Pop(1)
0x2e: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2f: Return(); Pop(6)

0x30: Stack[-3] = NEW1(Stack[-7]); Pop(0)
0x31: Push((int) 0)
0x32: @ _strsub(Stack[-3], Stack[-0], Stack[-1], Stack[-1])
0x33: Pop(1)
0x34: @ _strsub(Stack[-1], Stack[-0], Stack[-1])
0x35: Pop(0)
0x36: Stack[-2] = Stack[-2] + Stack[-3]; Pop(0);
0x37: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(0);
0x38: Push((int) 1)
0x39: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3a: Return(); Pop(6)

0x3b: PushEmpty(string, string, string, string)
0x3c: Push((int) 0)
0x3d: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3f: Return(); Pop(4)

0x40: Push((int) 0)
0x41: Push((int) 1)
0x42: Pop(1); Push(Stack[1 + StackPtr] - Stack[-1]);
0x43: @ _strsub(Stack[-4], Stack[-0], Stack[-2], Stack[-1])
0x44: Pop(2)
0x45: @ _strsub(Stack[-1], Stack[-0], Stack[-1])
0x46: Pop(0)
0x47: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(0);
0x48: Push((int) -1)
0x49: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4a: Return(); Pop(4)

0x4b: PushEmpty(int, int, int, int)
0x4c: Push("default")
0x4d: @ GetTextWidth(Stack[-3], Stack[-1], Stack[-0], Stack[-1])
0x4e: Pop(1)
0x4f: Push((int) 1)
0x50: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x51: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x53: Pop(0); Push(Stack[-2] - Stack[2 + StackPtr]);
0x54: Push((int) 1)
0x55: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x56: GOTO 0x58

0x57: Stack[-1] = (int) 0
0x58: Push("default")
0x59: Pop(0); Push(( -Stack[-2])
0x5a: Push((int) 0)
0x5b: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x5c: Pop(3)
0x5d: PushEmpty(bool)
0x5e: Stack[-1] = (bool) 0
0x5f: Pop(0); Push(Sin(Stack[5 + Tasks[-1].StackPointer]))
0x60: Push((float)0.5)
0x61: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x63: Push( Stack[6 + Tasks[-1].StackPointer] )
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push("text_cursor")
0x68: Pop(0); Push(Stack[-3] - Stack[-2]);
0x69: Push((int) 0)
0x6a: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: Return(); Pop(4)

0x6d: PushEmpty()
0x6e: Push((float)3.1415)
0x6f: Pop(1); Push(Stack[-2] * Stack[-1]);
0x70: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x71: Push((float)3.1415)
0x72: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x74: Push((float)3.1415)
0x75: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x76: Return(); Pop(0)

0x77: PushEmpty(object, object)
0x78: Push((int) 8)
0x79: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: Return(); Pop(2)

0x7c: Push((int) 13)
0x7d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x7f: @ CreateStringVector(Stack[-1])
0x80: Pop(0)
0x81: @@ add(Stack[-0])
0x82: Pop(0)
0x83: Push((int) 0)
0x84: @ SendMessageToParent(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: Return(); Pop(2)

0x87: Stack[-1] = 0
0x88: PushEmpty(int)
0x89: Stack[-1] = Stack[-4]
0x8a: Call2 0x29

0x8b: Pop(1)
0x8c: Return(); Pop(2)

0x8d: PushEmpty()
0x8e: Push((int) 37)
0x8f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x91: PushEmpty()
0x92: Call2 0x19

0x93: Pop(0)
0x94: GOTO 0xb0

0x95: Push((int) 39)
0x96: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x98: PushEmpty()
0x99: Call2 0x20

0x9a: Pop(0)
0x9b: GOTO 0xb0

0x9c: Push((int) 35)
0x9d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9f: PushEmpty()
0xa0: Call2 0x14

0xa1: Pop(0)
0xa2: GOTO 0xb0

0xa3: Push((int) 36)
0xa4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa6: PushEmpty()
0xa7: Call2 0x17

0xa8: Pop(0)
0xa9: GOTO 0xb0

0xaa: Push((int) 8)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xad: PushEmpty()
0xae: Call2 0x3b

0xaf: Pop(0)
0xb0: Return(); Pop(0)

0xb1: PushEmpty()
0xb2: Pop(0); Push((bool) Stack[6 + Tasks[-1].StackPointer] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb4: @ CaptureKeyboard()
0xb5: Pop(0)
0xb6: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0xb7: Return(); Pop(0)

0xb8: PushEmpty(bool, bool)
0xb9: Push("default")
0xba: @ FontHasCharacterGlyph(Stack[-2], Stack[-1], Stack[-4])
0xbb: Pop(1)
0xbc: Stack[-4] = !Stack[-1]; Pop(0);
0xbd: Return(); Pop(2)

