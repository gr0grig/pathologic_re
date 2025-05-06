GlobalVarCount = 0

Strings:
	default

Import:
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	DestroyWindow (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_100 Op = 0xd Vars = (int)
		EVENT_200 Op = 0x11 Vars = (int, string, object)


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
0xe: @ DestroyWindow()
0xf: Pop(0)
0x10: Return(); Pop(0)

0x11: PushEmpty()
0x12: Return(); Pop(0)

