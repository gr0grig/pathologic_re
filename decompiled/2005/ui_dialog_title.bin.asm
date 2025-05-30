GlobalVarCount = 0

Strings:
	null conversation
	GetNPCName
	default

Import:
	ShowCursor (0 args)
	SetOwnerDraw (1 args)
	GetWindowSize (2 args)
	GetConversation (1 args)
	UITrace (1 args)
	ProcessEvents (0 args)
	PrintInWidth (9 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, int, int) Params = 0
		EVENT_0 Op = 0x16 Vars = ()


0x0: PushEmpty(object, object)
0x1: @ ShowCursor()
0x2: Pop(0)
0x3: Push((bool) 1)
0x4: @ SetOwnerDraw(Stack[-1])
0x5: Pop(1)
0x6: @ GetWindowSize(Stack[-1], Stack[-2])
0x7: Pop(0)
0x8: @ GetConversation(Stack[-1])
0x9: Pop(0)
0xa: Pop(0); Push((bool) Stack[-1] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xc: Push("null conversation")
0xd: @ UITrace(Stack[-1])
0xe: Pop(1)
0xf: Return(); Pop(2)

0x10: @@ GetNPCName(Stack[-0])
0x11: Pop(0)
0x12: @ ProcessEvents()
0x13: Pop(0)
0x14: Return(); Pop(2)

0x15: Stack[-1] = 0
0x16: PushEmpty(int, int)
0x17: Push("default")
0x18: Push((int) 0)
0x19: Push((int) 0)
0x1a: Push((float)0.50196)
0x1b: Push((float)0.50196)
0x1c: Push((float)0.50196)
0x1d: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-1], Stack[-0], Stack[-3], Stack[-2], Stack[-1])
0x1e: Pop(6)
0x1f: Return(); Pop(2)

