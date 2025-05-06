GlobalVarCount = 0

Strings:
	null conversation
	GetPhoto

Import:
	GetConversation (1 args)
	UITrace (1 args)
	LoadImage (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Blit (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string) Params = 0
		EVENT_0 Op = 0x14 Vars = ()


0x0: PushEmpty(object, object)
0x1: @ GetConversation(Stack[-1])
0x2: Pop(0)
0x3: Pop(0); Push((bool) Stack[-1] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x5: Push("null conversation")
0x6: @ UITrace(Stack[-1])
0x7: Pop(1)
0x8: Return(); Pop(2)

0x9: @@ GetPhoto(Stack[-0])
0xa: Pop(0)
0xb: @ LoadImage(Stack[-0])
0xc: Pop(0)
0xd: Push((bool) 1)
0xe: @ SetOwnerDraw(Stack[-1])
0xf: Pop(1)
0x10: @ ProcessEvents()
0x11: Pop(0)
0x12: Return(); Pop(2)

0x13: Stack[-1] = 0
0x14: Push((int) 0)
0x15: Push((int) 0)
0x16: @ Blit(Stack[-0], Stack[-2], Stack[-1])
0x17: Pop(2)
0x18: Return(); Pop(0)

