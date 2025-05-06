GlobalVarCount = 0

Strings:
	null conversation
	GetPhoto
	dialog_photo.xml
	DestroyWindow

Import:
	GetConversation (1 args)
	UITrace (1 args)
	LoadImage (1 args)
	SetOwnerDraw (1 args)
	GetWindowSize (2 args)
	ProcessEvents (0 args)
	StretchBlit (5 args)
	CreateWindow (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, object, int, int) Params = 0
		EVENT_0 Op = 0x16 Vars = ()
		EVENT_2 Op = 0x1b Vars = (int, int)


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
0x10: @ GetWindowSize(Stack[-2], Stack[-3])
0x11: Pop(0)
0x12: @ ProcessEvents()
0x13: Pop(0)
0x14: Return(); Pop(2)

0x15: Stack[-1] = 0
0x16: Push((int) 0)
0x17: Push((int) 0)
0x18: @ StretchBlit(Stack[-0], Stack[-2], Stack[-1], Stack[-2], Stack[-3])
0x19: Pop(2)
0x1a: Return(); Pop(0)

0x1b: PushEmpty()
0x1c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1d: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1e: Push("dialog_photo.xml")
0x1f: Push((bool) 1)
0x20: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x21: Pop(2)
0x22: GOTO 0x25

0x23: @@ DestroyWindow()
0x24: Pop(0)
0x25: Return(); Pop(0)

