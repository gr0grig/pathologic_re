GlobalVarCount = 0

Strings:
	StretchBlit
	ocular
	Stop
	ui_no_blood.wmv
	Play
	ui_good_blood.wmv
	ui_bad_blood.wmv

Import:
	ClientToScreen (2 args)
	GetWindowSize (2 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Blit (3 args)
	LoadImage (2 args)
	FindVideo (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, int, int, int) Params = 0
		EVENT_0 Op = 0x10 Vars = ()
		EVENT_200 Op = 0x18 Vars = (int, string, object)


0x0: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x2: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x3: @ ClientToScreen(Stack[-1], Stack[-2])
0x4: Pop(0)
0x5: @ GetWindowSize(Stack[-3], Stack[-4])
0x6: Pop(0)
0x7: PushEmpty()
0x8: Call 0x25

0x9: Pop(0)
0xa: Push((bool) 1)
0xb: @ SetOwnerDraw(Stack[-1])
0xc: Pop(1)
0xd: @ ProcessEvents()
0xe: Pop(0)
0xf: Return(); Pop(0)

0x10: @@ StretchBlit(Stack[-1], Stack[-2], Stack[-3], Stack[-4])
0x11: Pop(0)
0x12: Push("ocular")
0x13: Push((int) 0)
0x14: Push((int) 0)
0x15: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x16: Pop(3)
0x17: Return(); Pop(0)

0x18: PushEmpty()
0x19: Pop(0); Push((bool) Stack[-3] == Stack[5 + Tasks[-1].StackPointer])
0x1a: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x1b: Return(); Pop(0)

0x1c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1d: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1e: @@ Stop()
0x1f: Pop(0)
0x20: Stack[5 + Tasks[-1].StackPointer] = Stack[-3]
0x21: PushEmpty()
0x22: Call 0x25

0x23: Pop(0)
0x24: Return(); Pop(0)

0x25: Push((int) 0)
0x26: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x28: Push("ui_no_blood.wmv")
0x29: Push((bool) 1)
0x2a: @ LoadImage(Stack[-2], Stack[-1])
0x2b: Pop(2)
0x2c: Push("ui_no_blood.wmv")
0x2d: @ FindVideo(Stack[-0], Stack[-1])
0x2e: Pop(1)
0x2f: Push((bool) 1)
0x30: @@ Play(Stack[-1])
0x31: Pop(1)
0x32: GOTO 0x4e

0x33: Push((int) 1)
0x34: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x36: Push("ui_good_blood.wmv")
0x37: Push((bool) 1)
0x38: @ LoadImage(Stack[-2], Stack[-1])
0x39: Pop(2)
0x3a: Push("ui_good_blood.wmv")
0x3b: @ FindVideo(Stack[-0], Stack[-1])
0x3c: Pop(1)
0x3d: Push((bool) 1)
0x3e: @@ Play(Stack[-1])
0x3f: Pop(1)
0x40: GOTO 0x4e

0x41: Push((int) 2)
0x42: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] == Stack[-1])
0x43: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x44: Push("ui_bad_blood.wmv")
0x45: Push((bool) 1)
0x46: @ LoadImage(Stack[-2], Stack[-1])
0x47: Pop(2)
0x48: Push("ui_bad_blood.wmv")
0x49: @ FindVideo(Stack[-0], Stack[-1])
0x4a: Pop(1)
0x4b: Push((bool) 1)
0x4c: @@ Play(Stack[-1])
0x4d: Pop(1)
0x4e: Return(); Pop(0)

