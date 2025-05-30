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
		EVENT_2 Op = 0x1f Vars = (int, int)
		EVENT_6 Op = 0x27 Vars = (int, int)
		EVENT_3 Op = 0x2c Vars = (int, int)
		EVENT_200 Op = 0x2e Vars = (int, string, object)


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
0x12: Push((int) 2)
0x13: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x14: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x15: Return(); Pop(0)

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
0x20: Push("selected")
0x21: @ SetBackground(Stack[-1])
0x22: Pop(1)
0x23: Push((int) 0)
0x24: @ SendMessageToParent(Stack[-1])
0x25: Pop(1)
0x26: Return(); Pop(0)

0x27: PushEmpty()
0x28: Push((int) 1)
0x29: @ SendMessageToParent(Stack[-1])
0x2a: Pop(1)
0x2b: Return(); Pop(0)

0x2c: PushEmpty()
0x2d: Return(); Pop(0)

0x2e: PushEmpty(int, int)
0x2f: Push((int) 65536)
0x30: Pop(1); Push(Stack[-6] & Stack[-1]);
0x31: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x32: Push((int) 16383)
0x33: Stack[0 + Tasks[-1].StackPointer] = Stack[-6] & Stack[-1]; Pop(1);
0x34: Return(); Pop(2)

0x35: Push((int) 16384)
0x36: Pop(1); Push(Stack[-6] & Stack[-1]);
0x37: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x38: Push("selected")
0x39: @ SetBackground(Stack[-1])
0x3a: Pop(1)
0x3b: GOTO 0x3f

0x3c: Push("default")
0x3d: @ SetBackground(Stack[-1])
0x3e: Pop(1)
0x3f: Push((int) 32768)
0x40: Pop(1); Push(Stack[-6] & Stack[-1]);
0x41: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x42: Stack[2 + Tasks[-1].StackPointer] = 0
0x43: Push((int) -1)
0x44: Push("")
0x45: @ SetTooltip(Stack[-2], Stack[-1])
0x46: Pop(2)
0x47: GOTO 0x5c

0x48: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x49: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4a: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x4b: @@ GetItemID(Stack[-1])
0x4c: Pop(0)
0x4d: @ GetInvItemSprite(Stack[-3], Stack[-1])
0x4e: Pop(0)
0x4f: @ LoadImage(Stack[-3])
0x50: Pop(0)
0x51: @ GetInvItemMaxStackSize(Stack[-1], Stack[-1])
0x52: Pop(0)
0x53: Push((int) 1)
0x54: Push("")
0x55: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0x56: Pop(2)
0x57: GOTO 0x5c

0x58: Push((int) -1)
0x59: Push("")
0x5a: @ SetTooltip(Stack[-2], Stack[-1])
0x5b: Pop(2)
0x5c: Return(); Pop(2)

