GlobalVarCount = 0

Strings:
	default
	button_mission
	button_daytasks
	button_othertasks
	text

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
		EVENT_200 Op = 0x19 Vars = (int, string, object)


0x0: @ GetDiarySelectedSection(Stack[-0])
0x1: Pop(0)
0x2: Push("default")
0x3: @ SetCursor(Stack[-1])
0x4: Pop(1)
0x5: @ ShowCursor()
0x6: Pop(0)
0x7: PushEmpty(int)
0x8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9: Call2 0x35

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
0x1a: Push("button_mission")
0x1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1d: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x1e: PushEmpty(int)
0x1f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20: Call2 0x35

0x21: Pop(1)
0x22: GOTO 0x34

0x23: Push("button_daytasks")
0x24: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x26: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x27: PushEmpty(int)
0x28: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29: Call2 0x35

0x2a: Pop(1)
0x2b: GOTO 0x34

0x2c: Push("button_othertasks")
0x2d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: Stack[0 + Tasks[-1].StackPointer] = (int)2
0x30: PushEmpty(int)
0x31: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32: Call2 0x35

0x33: Pop(1)
0x34: Return(); Pop(0)

0x35: PushEmpty()
0x36: Push((int) 0)
0x37: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x39: Push((int) 0)
0x3a: Push("button_mission")
0x3b: @ SendMessage(Stack[-2], Stack[-1])
0x3c: Pop(2)
0x3d: GOTO 0x42

0x3e: Push((int) 1)
0x3f: Push("button_mission")
0x40: @ SendMessage(Stack[-2], Stack[-1])
0x41: Pop(2)
0x42: Push((int) 1)
0x43: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x45: Push((int) 0)
0x46: Push("button_daytasks")
0x47: @ SendMessage(Stack[-2], Stack[-1])
0x48: Pop(2)
0x49: GOTO 0x4e

0x4a: Push((int) 1)
0x4b: Push("button_daytasks")
0x4c: @ SendMessage(Stack[-2], Stack[-1])
0x4d: Pop(2)
0x4e: Push((int) 2)
0x4f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x51: Push((int) 0)
0x52: Push("button_othertasks")
0x53: @ SendMessage(Stack[-2], Stack[-1])
0x54: Pop(2)
0x55: GOTO 0x5a

0x56: Push((int) 1)
0x57: Push("button_othertasks")
0x58: @ SendMessage(Stack[-2], Stack[-1])
0x59: Pop(2)
0x5a: Push("text")
0x5b: @ SendMessage(Stack[-2], Stack[-1])
0x5c: Pop(1)
0x5d: Return(); Pop(0)

