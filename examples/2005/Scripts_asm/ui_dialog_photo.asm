GlobalVarCount = 0

Strings:
	W:null conversation
	A:GetPhoto
	W:dialog_photo.xml
	A:DestroyWindow
// @pool_raw:6e0075006c006c00200063006f006e0076006500720073006100740069006f006e00000047657450686f746f006400690061006c006f0067005f00700068006f0074006f002e0078006d006c00000044657374726f7957696e646f7700

Import:
	GetConversation (1 args)
	UITrace (1 args)
	LoadImage (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Blit (3 args)
	CreateWindow (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, object) Params = 0
		EVENT_0 Op = 0x14 Vars = ()
		EVENT_2 Op = 0x19 Vars = (int, int)


0x0: PushEmpty(object, object)
0x1: @ GetConversation(Stack[-1])
0x2: Pop(0)
0x3: Pop(0); PushNull((bool) Stack[-1] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x5: Push("null conversation") // @poff=0
0x6: @ UITrace(Stack[-1])
0x7: Pop(1)
0x8: Return(); Pop(2)

0x9: @@ GetPhoto(Stack[-0]T); Obj=1 // @poff=36
0xa: Pop(0)
0xb: @ LoadImage(Stack[-0]T)
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
0x16: @ Blit(Stack[-0]T, Stack[-2], Stack[-1])
0x17: Pop(2)
0x18: Return(); Pop(0)

0x19: PushEmpty()
0x1a: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1b: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1c: Push("dialog_photo.xml") // @poff=45
0x1d: Push((bool) 1)
0x1e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1]T)
0x1f: Pop(2)
0x20: GOTO 0x23

0x21: @@@ DestroyWindow(); Obj=1 // @poff=79
0x22: Pop(0)
0x23: Return(); Pop(0)

