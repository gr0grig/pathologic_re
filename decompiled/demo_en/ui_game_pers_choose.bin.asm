GlobalVarCount = 0

Strings:
	danko_button
	klara_button
	burah_button

Import:
	SetOwnerDraw (1 args)
	SetModal (1 args)
	ProcessEvents (0 args)
	SendToParent (1 args)
	DestroyWindow (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_200 Op = 0x9 Vars = (int, string, object)


0x0: Push((bool) 0)
0x1: @ SetOwnerDraw(Stack[-1])
0x2: Pop(1)
0x3: Push((bool) 1)
0x4: @ SetModal(Stack[-1])
0x5: Pop(1)
0x6: @ ProcessEvents()
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: Push("danko_button")
0xb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xd: Push((int) 0)
0xe: @ SendToParent(Stack[-1])
0xf: Pop(1)
0x10: @ DestroyWindow()
0x11: Pop(0)
0x12: Push("klara_button")
0x13: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x15: Push((int) 1)
0x16: @ SendToParent(Stack[-1])
0x17: Pop(1)
0x18: Push("burah_button")
0x19: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1b: Push((int) 2)
0x1c: @ SendToParent(Stack[-1])
0x1d: Pop(1)
0x1e: Return(); Pop(0)

