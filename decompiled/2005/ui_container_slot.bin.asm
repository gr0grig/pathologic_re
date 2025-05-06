GlobalVarCount = 0

Strings:
	default
	GetItemID

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendToParent (0 args)
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
		EVENT_15 Op = 0xb Vars = (int, int, float)
		EVENT_0 Op = 0xf Vars = ()
		EVENT_2 Op = 0x1f Vars = (int, int)
		EVENT_200 Op = 0x26 Vars = (int, string, object)


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

0xb: PushEmpty()
0xc: @ SendToParent()
0xd: Pop(0)
0xe: Return(); Pop(0)

0xf: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x10: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x11: Return(); Pop(0)

0x12: Push((int) 1)
0x13: Push((int) 1)
0x14: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x15: Pop(2)
0x16: Push((int) 1)
0x17: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x19: Push("default")
0x1a: Push((int) 2)
0x1b: Push((int) 35)
0x1c: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x1d: Pop(3)
0x1e: Return(); Pop(0)

0x1f: PushEmpty()
0x20: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x22: Push((int) 0)
0x23: @ SendMessageToParent(Stack[-1])
0x24: Pop(1)
0x25: Return(); Pop(0)

0x26: PushEmpty(int, int)
0x27: Push((int) 65536)
0x28: Pop(1); Push(Stack[-6] & Stack[-1]);
0x29: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2a: Push((int) 16383)
0x2b: Stack[0 + Tasks[-1].StackPointer] = Stack[-6] & Stack[-1]; Pop(1);
0x2c: Return(); Pop(2)

0x2d: Push((int) 32768)
0x2e: Pop(1); Push(Stack[-6] & Stack[-1]);
0x2f: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x30: Stack[2 + Tasks[-1].StackPointer] = 0
0x31: Push((int) -1)
0x32: Push("")
0x33: @ SetTooltip(Stack[-2], Stack[-1])
0x34: Pop(2)
0x35: GOTO 0x4a

0x36: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x37: Push( Stack[2 + Tasks[-1].StackPointer] )
0x38: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x39: @@ GetItemID(Stack[-1])
0x3a: Pop(0)
0x3b: @ GetInvItemSprite(Stack[-3], Stack[-1])
0x3c: Pop(0)
0x3d: @ LoadImage(Stack[-3])
0x3e: Pop(0)
0x3f: @ GetInvItemMaxStackSize(Stack[-1], Stack[-1])
0x40: Pop(0)
0x41: Push((int) 1)
0x42: Push("")
0x43: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0x44: Pop(2)
0x45: GOTO 0x4a

0x46: Push((int) -1)
0x47: Push("")
0x48: @ SetTooltip(Stack[-2], Stack[-1])
0x49: Pop(2)
0x4a: Return(); Pop(2)

