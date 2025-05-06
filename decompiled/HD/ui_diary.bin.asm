GlobalVarCount = 0

Strings:
	default
	text
	button_mission
	button_daytasks
	button_othertasks

Import:
	GetDiarySelectedSection (1 args)
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SetDiarySelectedSection (1 args)
	DestroyWindow (0 args)
	SendMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int) Params = 0
		EVENT_100 Op = 0x13 Vars = (int)
		EVENT_101 Op = 0x19 Vars = (int)
		EVENT_102 Op = 0x66 Vars = (int)
		EVENT_200 Op = 0x77 Vars = (int, string, object)


0x0: @ GetDiarySelectedSection(Stack[-0])
0x1: Pop(0)
0x2: Push("default")
0x3: @ SetCursor(Stack[-1])
0x4: Pop(1)
0x5: @ ShowCursor()
0x6: Pop(0)
0x7: PushEmpty(int)
0x8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9: Call2 0x93

0xa: Pop(1)
0xb: @ CaptureKeyboard()
0xc: Pop(0)
0xd: Push((bool) 0)
0xe: @ SetOwnerDraw(Stack[-1])
0xf: Pop(1)
0x10: @ ProcessEvents()
0x11: Pop(0)
0x12: Return(); Pop(0)

0x13: PushEmpty()
0x14: @ SetDiarySelectedSection(Stack[-0])
0x15: Pop(0)
0x16: @ DestroyWindow()
0x17: Pop(0)
0x18: Return(); Pop(0)

0x19: PushEmpty()
0x1a: Push((int) 266)
0x1b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x1d: Push((int) 0)
0x1e: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x20: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x21: PushEmpty(int)
0x22: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23: Call2 0x93

0x24: Pop(1)
0x25: GOTO 0x37

0x26: Push((int) 1)
0x27: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x29: Stack[0 + Tasks[-1].StackPointer] = (int)2
0x2a: PushEmpty(int)
0x2b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c: Call2 0x93

0x2d: Pop(1)
0x2e: GOTO 0x37

0x2f: Push((int) 2)
0x30: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x32: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x33: PushEmpty(int)
0x34: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35: Call2 0x93

0x36: Pop(1)
0x37: GOTO 0x65

0x38: Push((int) 265)
0x39: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x3b: Push((int) 0)
0x3c: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3e: Stack[0 + Tasks[-1].StackPointer] = (int)2
0x3f: PushEmpty(int)
0x40: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x41: Call2 0x93

0x42: Pop(1)
0x43: GOTO 0x55

0x44: Push((int) 1)
0x45: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x47: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x48: PushEmpty(int)
0x49: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a: Call2 0x93

0x4b: Pop(1)
0x4c: GOTO 0x55

0x4d: Push((int) 2)
0x4e: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x50: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x51: PushEmpty(int)
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x93

0x54: Pop(1)
0x55: GOTO 0x65

0x56: Push((int) 267)
0x57: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x59: Push((int) 1001)
0x5a: Push("text")
0x5b: @ SendMessage(Stack[-2], Stack[-1])
0x5c: Pop(2)
0x5d: GOTO 0x65

0x5e: Push((int) 268)
0x5f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x61: Push((int) 1000)
0x62: Push("text")
0x63: @ SendMessage(Stack[-2], Stack[-1])
0x64: Pop(2)
0x65: Return(); Pop(0)

0x66: PushEmpty()
0x67: Push((int) 272)
0x68: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6a: Push((int) 1001)
0x6b: Push("text")
0x6c: @ SendMessage(Stack[-2], Stack[-1])
0x6d: Pop(2)
0x6e: GOTO 0x76

0x6f: Push((int) 274)
0x70: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x72: Push((int) 1000)
0x73: Push("text")
0x74: @ SendMessage(Stack[-2], Stack[-1])
0x75: Pop(2)
0x76: Return(); Pop(0)

0x77: PushEmpty()
0x78: Push("button_mission")
0x79: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7b: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x7c: PushEmpty(int)
0x7d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e: Call2 0x93

0x7f: Pop(1)
0x80: GOTO 0x92

0x81: Push("button_daytasks")
0x82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x84: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x85: PushEmpty(int)
0x86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87: Call2 0x93

0x88: Pop(1)
0x89: GOTO 0x92

0x8a: Push("button_othertasks")
0x8b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8d: Stack[0 + Tasks[-1].StackPointer] = (int)2
0x8e: PushEmpty(int)
0x8f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x90: Call2 0x93

0x91: Pop(1)
0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: Push((int) 0)
0x95: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x97: Push((int) 0)
0x98: Push("button_mission")
0x99: @ SendMessage(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0xa0

0x9c: Push((int) 1)
0x9d: Push("button_mission")
0x9e: @ SendMessage(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: Push((int) 1)
0xa1: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: Push((int) 0)
0xa4: Push("button_daytasks")
0xa5: @ SendMessage(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: GOTO 0xac

0xa8: Push((int) 1)
0xa9: Push("button_daytasks")
0xaa: @ SendMessage(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: Push((int) 2)
0xad: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: Push((int) 0)
0xb0: Push("button_othertasks")
0xb1: @ SendMessage(Stack[-2], Stack[-1])
0xb2: Pop(2)
0xb3: GOTO 0xb8

0xb4: Push((int) 1)
0xb5: Push("button_othertasks")
0xb6: @ SendMessage(Stack[-2], Stack[-1])
0xb7: Pop(2)
0xb8: Push("text")
0xb9: @ SendMessage(Stack[-2], Stack[-1])
0xba: Pop(1)
0xbb: Return(); Pop(0)

