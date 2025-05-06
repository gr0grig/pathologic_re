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
	GetStringByID (2 args)
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
		EVENT_6 Op = 0x26 Vars = (int, int)
		EVENT_3 Op = 0x2e Vars = (int, int)
		EVENT_200 Op = 0x30 Vars = (int, string, object)


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
0x13: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x14: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x15: Push("default")
0x16: Push((int) 2)
0x17: Push((int) 35)
0x18: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x19: Pop(3)
0x1a: Return(); Pop(0)

0x1b: PushEmpty()
0x1c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1d: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1e: Return(); Pop(0)

0x1f: Push("selected")
0x20: @ SetBackground(Stack[-1])
0x21: Pop(1)
0x22: Push((int) 0)
0x23: @ SendMessageToParent(Stack[-1])
0x24: Pop(1)
0x25: Return(); Pop(0)

0x26: PushEmpty()
0x27: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x28: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x29: Return(); Pop(0)

0x2a: Push((int) 1)
0x2b: @ SendMessageToParent(Stack[-1])
0x2c: Pop(1)
0x2d: Return(); Pop(0)

0x2e: PushEmpty()
0x2f: Return(); Pop(0)

0x30: PushEmpty(int, string, int, int, string, int)
0x31: Push((int) 65536)
0x32: Pop(1); Push(Stack[-10] & Stack[-1]);
0x33: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x34: Push((int) 16383)
0x35: Stack[0 + Tasks[-1].StackPointer] = Stack[-10] & Stack[-1]; Pop(1);
0x36: Return(); Pop(6)

0x37: Push((int) 16384)
0x38: Pop(1); Push(Stack[-10] & Stack[-1]);
0x39: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3a: Push("selected")
0x3b: @ SetBackground(Stack[-1])
0x3c: Pop(1)
0x3d: GOTO 0x41

0x3e: Push("default")
0x3f: @ SetBackground(Stack[-1])
0x40: Pop(1)
0x41: Push((int) 32768)
0x42: Pop(1); Push(Stack[-10] & Stack[-1]);
0x43: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x44: Stack[2 + Tasks[-1].StackPointer] = 0
0x45: Push((int) -1)
0x46: Push("")
0x47: @ SetTooltip(Stack[-2], Stack[-1])
0x48: Pop(2)
0x49: GOTO 0x63

0x4a: Push((int) 16383)
0x4b: Stack[-4] = Stack[-10] & Stack[-1]; Pop(1);
0x4c: Push((int) 1007)
0x4d: @ GetStringByID(Stack[-3], Stack[-1])
0x4e: Pop(1)
0x4f: Stack[-2] = Stack[-2] + Stack[-3]; Pop(0);
0x50: Stack[2 + Tasks[-1].StackPointer] = Stack[-7]
0x51: Push( Stack[2 + Tasks[-1].StackPointer] )
0x52: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x53: @@ GetItemID(Stack[-1])
0x54: Pop(0)
0x55: @ GetInvItemSprite(Stack[-3], Stack[-1])
0x56: Pop(0)
0x57: @ LoadImage(Stack[-3])
0x58: Pop(0)
0x59: @ GetInvItemMaxStackSize(Stack[-1], Stack[-1])
0x5a: Pop(0)
0x5b: Push((int) 1)
0x5c: @ SetTooltip(Stack[-1], Stack[-3], Stack[-2])
0x5d: Pop(1)
0x5e: GOTO 0x63

0x5f: Push((int) -1)
0x60: Push("")
0x61: @ SetTooltip(Stack[-2], Stack[-1])
0x62: Pop(2)
0x63: Return(); Pop(6)

