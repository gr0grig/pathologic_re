GlobalVarCount = 0

Strings:
	default
	scalpel
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
		EVENT_2 Op = 0x20 Vars = (int, int)
		EVENT_200 Op = 0x27 Vars = (int, string, object)


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
0xc: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xd: Push("scalpel")
0xe: Push((int) 1)
0xf: Push((int) 1)
0x10: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x11: Pop(3)
0x12: Return(); Pop(0)

0x13: Push((int) 1)
0x14: Push((int) 1)
0x15: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x16: Pop(2)
0x17: Push((int) 1)
0x18: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1a: Push("default")
0x1b: Push((int) 2)
0x1c: Push((int) 35)
0x1d: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x1e: Pop(3)
0x1f: Return(); Pop(0)

0x20: PushEmpty()
0x21: Push( Stack[2 + Tasks[-1].StackPointer] )
0x22: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x23: Push((int) 0)
0x24: @ SendMessageToParent(Stack[-1])
0x25: Pop(1)
0x26: Return(); Pop(0)

0x27: PushEmpty(int, int)
0x28: Push((int) 65536)
0x29: Pop(1); Push(Stack[-6] & Stack[-1]);
0x2a: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2b: Push((int) 16383)
0x2c: Stack[0 + Tasks[-1].StackPointer] = Stack[-6] & Stack[-1]; Pop(1);
0x2d: Return(); Pop(2)

0x2e: Push((int) 32768)
0x2f: Pop(1); Push(Stack[-6] & Stack[-1]);
0x30: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x31: Stack[2 + Tasks[-1].StackPointer] = 0
0x32: Push((int) -1)
0x33: Push("")
0x34: @ SetTooltip(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: GOTO 0x4b

0x37: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x38: Push( Stack[2 + Tasks[-1].StackPointer] )
0x39: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x3a: @@ GetItemID(Stack[-1])
0x3b: Pop(0)
0x3c: @ GetInvItemSprite(Stack[-3], Stack[-1])
0x3d: Pop(0)
0x3e: @ LoadImage(Stack[-3])
0x3f: Pop(0)
0x40: @ GetInvItemMaxStackSize(Stack[-1], Stack[-1])
0x41: Pop(0)
0x42: Push((int) 1)
0x43: Push("")
0x44: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0x45: Pop(2)
0x46: GOTO 0x4b

0x47: Push((int) -1)
0x48: Push("")
0x49: @ SetTooltip(Stack[-2], Stack[-1])
0x4a: Pop(2)
0x4b: Return(); Pop(2)

