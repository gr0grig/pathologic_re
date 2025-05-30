GlobalVarCount = 0

Strings:
	default
	disabled
	selected
	GetItemID

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Blit (3 args)
	Print (4 args)
	StretchBlit (5 args)
	SendMessageToParent (1 args)
	SetTooltip (2 args)
	GetInvItemSprite (2 args)
	LoadImage (1 args)
	GetInvItemMaxStackSize (2 args)
	SetTooltip (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, object, string, bool) Params = 0
		EVENT_0 Op = 0xc Vars = ()
		EVENT_2 Op = 0x25 Vars = (int, int)
		EVENT_6 Op = 0x2d Vars = (int, int)
		EVENT_3 Op = 0x32 Vars = (int, int)
		EVENT_200 Op = 0x34 Vars = (int, string, object)


0x0: Stack[2 + Tasks[-1].StackPointer] = 0
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x2: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x3: Push("default")
0x4: @ SetBackground(Stack[-1])
0x5: Pop(1)
0x6: Push((bool) 1)
0x7: @ SetOwnerDraw(Stack[-1])
0x8: Pop(1)
0x9: @ ProcessEvents()
0xa: Pop(0)
0xb: Return(); Pop(0)

0xc: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xe: Return(); Pop(0)

0xf: Push((int) 1)
0x10: Push((int) 1)
0x11: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x12: Pop(2)
0x13: Push((int) 1)
0x14: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x16: Push("default")
0x17: Push((int) 2)
0x18: Push((int) 35)
0x19: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x1a: Pop(3)
0x1b: Push( Stack[4 + Tasks[-1].StackPointer] )
0x1c: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x1d: Push("disabled")
0x1e: Push((int) 1)
0x1f: Push((int) 1)
0x20: Push((int) 50)
0x21: Push((int) 50)
0x22: @ StretchBlit(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x23: Pop(5)
0x24: Return(); Pop(0)

0x25: PushEmpty()
0x26: Push("selected")
0x27: @ SetBackground(Stack[-1])
0x28: Pop(1)
0x29: Push((int) 0)
0x2a: @ SendMessageToParent(Stack[-1])
0x2b: Pop(1)
0x2c: Return(); Pop(0)

0x2d: PushEmpty()
0x2e: Push((int) 1)
0x2f: @ SendMessageToParent(Stack[-1])
0x30: Pop(1)
0x31: Return(); Pop(0)

0x32: PushEmpty()
0x33: Return(); Pop(0)

0x34: PushEmpty(int, int)
0x35: Push((int) 65536)
0x36: Pop(1); Push(Stack[-6] & Stack[-1]);
0x37: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x38: Push((int) 16383)
0x39: Stack[0 + Tasks[-1].StackPointer] = Stack[-6] & Stack[-1]; Pop(1);
0x3a: Return(); Pop(2)

0x3b: Push((int) 16384)
0x3c: Pop(1); Push(Stack[-6] & Stack[-1]);
0x3d: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3e: Push("selected")
0x3f: @ SetBackground(Stack[-1])
0x40: Pop(1)
0x41: GOTO 0x45

0x42: Push("default")
0x43: @ SetBackground(Stack[-1])
0x44: Pop(1)
0x45: Push((int) 32768)
0x46: Pop(1); Push(Stack[-6] & Stack[-1]);
0x47: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x48: Stack[2 + Tasks[-1].StackPointer] = 0
0x49: Push((int) -1)
0x4a: Push("")
0x4b: @ SetTooltip(Stack[-2], Stack[-1])
0x4c: Pop(2)
0x4d: GOTO 0x6f

0x4e: Push((int) 131072)
0x4f: Pop(1); Push(Stack[-6] & Stack[-1]);
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x52: GOTO 0x54

0x53: Stack[4 + Tasks[-1].StackPointer] = (bool)0
0x54: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x55: Push( Stack[2 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x57: @@ GetItemID(Stack[-1])
0x58: Pop(0)
0x59: @ GetInvItemSprite(Stack[-3], Stack[-1])
0x5a: Pop(0)
0x5b: @ LoadImage(Stack[-3])
0x5c: Pop(0)
0x5d: @ GetInvItemMaxStackSize(Stack[-1], Stack[-1])
0x5e: Pop(0)
0x5f: Push( Stack[4 + Tasks[-1].StackPointer] )
0x60: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x61: Push((int) -1)
0x62: Push("")
0x63: @ SetTooltip(Stack[-2], Stack[-1])
0x64: Pop(2)
0x65: GOTO 0x6a

0x66: Push((int) 1)
0x67: Push("")
0x68: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0x69: Pop(2)
0x6a: GOTO 0x6f

0x6b: Push((int) -1)
0x6c: Push("")
0x6d: @ SetTooltip(Stack[-2], Stack[-1])
0x6e: Pop(2)
0x6f: Return(); Pop(2)

