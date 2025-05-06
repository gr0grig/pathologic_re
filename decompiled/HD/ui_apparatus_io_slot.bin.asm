GlobalVarCount = 0

Strings:
	default
	selected
	GetItemID

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Blit (3 args)
	SendMessageToParent (1 args)
	SetTooltip (2 args)
	GetInvItemSprite (2 args)
	LoadImage (1 args)
	GetInvItemMaxStackSize (2 args)
	SetTooltip (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object, string) Params = 0
		EVENT_0 Op = 0xa Vars = ()
		EVENT_2 Op = 0x12 Vars = (int, int)
		EVENT_6 Op = 0x17 Vars = (int, int)
		EVENT_3 Op = 0x1c Vars = (int, int)
		EVENT_200 Op = 0x1e Vars = (int, string, object)


0x0: Stack[1 + Tasks[-1].StackPointer] = 0
0x1: Push("default")
0x2: @ SetBackground(Stack[-1])
0x3: Pop(1)
0x4: Push((bool) 1)
0x5: @ SetOwnerDraw(Stack[-1])
0x6: Pop(1)
0x7: @ ProcessEvents()
0x8: Pop(0)
0x9: Return(); Pop(0)

0xa: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0xc: Return(); Pop(0)

0xd: Push((int) 1)
0xe: Push((int) 1)
0xf: @ Blit(Stack[-2], Stack[-2], Stack[-1])
0x10: Pop(2)
0x11: Return(); Pop(0)

0x12: PushEmpty()
0x13: Push((int) 0)
0x14: @ SendMessageToParent(Stack[-1])
0x15: Pop(1)
0x16: Return(); Pop(0)

0x17: PushEmpty()
0x18: Push((int) 1)
0x19: @ SendMessageToParent(Stack[-1])
0x1a: Pop(1)
0x1b: Return(); Pop(0)

0x1c: PushEmpty()
0x1d: Return(); Pop(0)

0x1e: PushEmpty(int, int)
0x1f: Push((int) 65536)
0x20: Pop(1); Push(Stack[-6] & Stack[-1]);
0x21: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x22: Return(); Pop(2)

0x23: Push((int) 16384)
0x24: Pop(1); Push(Stack[-6] & Stack[-1]);
0x25: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x26: Push("selected")
0x27: @ SetBackground(Stack[-1])
0x28: Pop(1)
0x29: GOTO 0x2d

0x2a: Push("default")
0x2b: @ SetBackground(Stack[-1])
0x2c: Pop(1)
0x2d: Push((int) 32768)
0x2e: Pop(1); Push(Stack[-6] & Stack[-1]);
0x2f: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x30: Stack[1 + Tasks[-1].StackPointer] = 0
0x31: Push((int) -1)
0x32: Push("")
0x33: @ SetTooltip(Stack[-2], Stack[-1])
0x34: Pop(2)
0x35: Return(); Pop(2)

0x36: Stack[1 + Tasks[-1].StackPointer] = Stack[-3]
0x37: Push( Stack[1 + Tasks[-1].StackPointer] )
0x38: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x39: @@ GetItemID(Stack[-1])
0x3a: Pop(0)
0x3b: @ GetInvItemSprite(Stack[-2], Stack[-1])
0x3c: Pop(0)
0x3d: @ LoadImage(Stack[-2])
0x3e: Pop(0)
0x3f: @ GetInvItemMaxStackSize(Stack[-0], Stack[-1])
0x40: Pop(0)
0x41: Push((int) 1)
0x42: Push("")
0x43: @ SetTooltip(Stack[-2], Stack[-1], Stack[-1])
0x44: Pop(2)
0x45: GOTO 0x4a

0x46: Push((int) -1)
0x47: Push("")
0x48: @ SetTooltip(Stack[-2], Stack[-1])
0x49: Pop(2)
0x4a: Return(); Pop(2)

