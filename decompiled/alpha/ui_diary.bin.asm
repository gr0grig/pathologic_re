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
0x9: Call 0x2d

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
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x1e: GOTO 0x28

0x1f: Push("button_daytasks")
0x20: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x23: GOTO 0x28

0x24: Push("button_othertasks")
0x25: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: Stack[0 + Tasks[-1].StackPointer] = (int)2
0x28: PushEmpty(int)
0x29: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a: Call 0x2d

0x2b: Pop(1)
0x2c: Return(); Pop(0)

0x2d: PushEmpty()
0x2e: Push((int) 0)
0x2f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x31: Push((int) 0)
0x32: Push("button_mission")
0x33: @ SendMessage(Stack[-2], Stack[-1])
0x34: Pop(2)
0x35: GOTO 0x3a

0x36: Push((int) 1)
0x37: Push("button_mission")
0x38: @ SendMessage(Stack[-2], Stack[-1])
0x39: Pop(2)
0x3a: Push((int) 1)
0x3b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3d: Push((int) 0)
0x3e: Push("button_daytasks")
0x3f: @ SendMessage(Stack[-2], Stack[-1])
0x40: Pop(2)
0x41: GOTO 0x46

0x42: Push((int) 1)
0x43: Push("button_daytasks")
0x44: @ SendMessage(Stack[-2], Stack[-1])
0x45: Pop(2)
0x46: Push((int) 2)
0x47: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x49: Push((int) 0)
0x4a: Push("button_othertasks")
0x4b: @ SendMessage(Stack[-2], Stack[-1])
0x4c: Pop(2)
0x4d: GOTO 0x52

0x4e: Push((int) 1)
0x4f: Push("button_othertasks")
0x50: @ SendMessage(Stack[-2], Stack[-1])
0x51: Pop(2)
0x52: Push("text")
0x53: @ SendMessage(Stack[-2], Stack[-1])
0x54: Pop(1)
0x55: Return(); Pop(0)

