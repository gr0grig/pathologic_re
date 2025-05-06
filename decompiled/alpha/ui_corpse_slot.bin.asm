GlobalVarCount = 0

Strings:
	default
	GetItemID

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Blit (3 args)
	Print (4 args)
	SendMessageToParent (1 args)
	SetTooltip (2 args)
	GetInvItemSprite (2 args)
	LoadImage (1 args)
	GetInvItemMaxStackSize (2 args)
	SetTooltip (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, object, string) Params = 0
		EVENT_0 Op = 0xb Vars = ()
		EVENT_2 Op = 0x1b Vars = (int, int)
		EVENT_200 Op = 0x20 Vars = (int, string, object)


0x0: Stack[2 + Tasks[-1].StackPointer] = 0
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x2: Push("default")
0x3: @ SetBackground(Stack[-1])
0x4: Pop(1)
0x5: Push((bool) 1)
0x6: @ SetOwnerDraw(Stack[-1])
0x7: Pop(1)
0x8: @ ProcessEvents()
0x9: Pop(0)
0xa: Return(); Pop(0)

0xb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0xd: Return(); Pop(0)

0xe: Push((int) 1)
0xf: Push((int) 1)
0x10: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x11: Pop(2)
0x12: Push((int) 1)
0x13: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x14: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x15: Push("default")
0x16: Push((int) 2)
0x17: Push((int) 35)
0x18: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x19: Pop(3)
0x1a: Return(); Pop(0)

0x1b: PushEmpty()
0x1c: Push((int) 0)
0x1d: @ SendMessageToParent(Stack[-1])
0x1e: Pop(1)
0x1f: Return(); Pop(0)

0x20: PushEmpty(int, int)
0x21: Push((int) 65536)
0x22: Pop(1); Push(Stack[-6] & Stack[-1]);
0x23: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x24: Push((int) 16383)
0x25: Stack[0 + Tasks[-1].StackPointer] = Stack[-6] & Stack[-1]; Pop(1);
0x26: Return(); Pop(2)

0x27: Push((int) 32768)
0x28: Pop(1); Push(Stack[-6] & Stack[-1]);
0x29: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2a: Stack[2 + Tasks[-1].StackPointer] = 0
0x2b: Push((int) -1)
0x2c: Push("")
0x2d: @ SetTooltip(Stack[-2], Stack[-1])
0x2e: Pop(2)
0x2f: GOTO 0x44

0x30: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x31: Push( Stack[2 + Tasks[-1].StackPointer] )
0x32: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x33: @@ GetItemID(Stack[-1])
0x34: Pop(0)
0x35: @ GetInvItemSprite(Stack[-3], Stack[-1])
0x36: Pop(0)
0x37: @ LoadImage(Stack[-3])
0x38: Pop(0)
0x39: @ GetInvItemMaxStackSize(Stack[-1], Stack[-1])
0x3a: Pop(0)
0x3b: Push((int) 1)
0x3c: Push("")
0x3d: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0x3e: Pop(2)
0x3f: GOTO 0x44

0x40: Push((int) -1)
0x41: Push("")
0x42: @ SetTooltip(Stack[-2], Stack[-1])
0x43: Pop(2)
0x44: Return(); Pop(2)

