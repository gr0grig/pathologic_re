GlobalVarCount = 0

Strings:
	default
	text

Import:
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	DestroyWindow (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_101 Op = 0xd Vars = (int)
		EVENT_102 Op = 0x1e Vars = (int)
		EVENT_100 Op = 0x2f Vars = (int)
		EVENT_200 Op = 0x33 Vars = (int, string, object)


0x0: Push("default")
0x1: @ SetCursor(Stack[-1])
0x2: Pop(1)
0x3: @ ShowCursor()
0x4: Pop(0)
0x5: @ CaptureKeyboard()
0x6: Pop(0)
0x7: Push((bool) 0)
0x8: @ SetOwnerDraw(Stack[-1])
0x9: Pop(1)
0xa: @ ProcessEvents()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty()
0xe: Push((int) 267)
0xf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x11: Push((int) 1001)
0x12: Push("text")
0x13: @ SendMessage(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: GOTO 0x1d

0x16: Push((int) 268)
0x17: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x19: Push((int) 1000)
0x1a: Push("text")
0x1b: @ SendMessage(Stack[-2], Stack[-1])
0x1c: Pop(2)
0x1d: Return(); Pop(0)

0x1e: PushEmpty()
0x1f: Push((int) 272)
0x20: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x22: Push((int) 1001)
0x23: Push("text")
0x24: @ SendMessage(Stack[-2], Stack[-1])
0x25: Pop(2)
0x26: GOTO 0x2e

0x27: Push((int) 274)
0x28: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2a: Push((int) 1000)
0x2b: Push("text")
0x2c: @ SendMessage(Stack[-2], Stack[-1])
0x2d: Pop(2)
0x2e: Return(); Pop(0)

0x2f: PushEmpty()
0x30: @ DestroyWindow()
0x31: Pop(0)
0x32: Return(); Pop(0)

0x33: PushEmpty()
0x34: Return(); Pop(0)

