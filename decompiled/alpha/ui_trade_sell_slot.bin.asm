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
	GetItemImage (2 args)
	LoadImage (1 args)
	GetItemMaxStackSize (2 args)
	SetTooltip (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, object, bool, string) Params = 0
		EVENT_0 Op = 0xc Vars = ()
		EVENT_2 Op = 0x25 Vars = (int, int)
		EVENT_6 Op = 0x2a Vars = (int, int)
		EVENT_3 Op = 0x2f Vars = (int, int)
		EVENT_200 Op = 0x31 Vars = (int, string, object)


0x0: Stack[2 + Tasks[-1].StackPointer] = 0
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
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
0x11: @ Blit(Stack[-4], Stack[-2], Stack[-1])
0x12: Pop(2)
0x13: Push((int) 1)
0x14: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x16: Push("default")
0x17: Push((int) 2)
0x18: Push((int) 35)
0x19: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x1a: Pop(3)
0x1b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1c: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x1d: Push("disabled")
0x1e: Push((int) 0)
0x1f: Push((int) 0)
0x20: Push((int) 50)
0x21: Push((int) 50)
0x22: @ StretchBlit(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x23: Pop(5)
0x24: Return(); Pop(0)

0x25: PushEmpty()
0x26: Push((int) 0)
0x27: @ SendMessageToParent(Stack[-1])
0x28: Pop(1)
0x29: Return(); Pop(0)

0x2a: PushEmpty()
0x2b: Push((int) 1)
0x2c: @ SendMessageToParent(Stack[-1])
0x2d: Pop(1)
0x2e: Return(); Pop(0)

0x2f: PushEmpty()
0x30: Return(); Pop(0)

0x31: PushEmpty(int, int)
0x32: Push((int) 65536)
0x33: Pop(1); Push(Stack[-6] & Stack[-1]);
0x34: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x35: Push((int) 16383)
0x36: Stack[0 + Tasks[-1].StackPointer] = Stack[-6] & Stack[-1]; Pop(1);
0x37: Return(); Pop(2)

0x38: Push((int) 16384)
0x39: Pop(1); Push(Stack[-6] & Stack[-1]);
0x3a: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3b: Push("selected")
0x3c: @ SetBackground(Stack[-1])
0x3d: Pop(1)
0x3e: GOTO 0x42

0x3f: Push("default")
0x40: @ SetBackground(Stack[-1])
0x41: Pop(1)
0x42: Push((int) 32768)
0x43: Pop(1); Push(Stack[-6] & Stack[-1]);
0x44: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x45: Stack[2 + Tasks[-1].StackPointer] = 0
0x46: Push((int) -1)
0x47: Push("")
0x48: @ SetTooltip(Stack[-2], Stack[-1])
0x49: Pop(2)
0x4a: Return(); Pop(2)

0x4b: Push((int) 131072)
0x4c: Pop(1); Push(Stack[-6] & Stack[-1]);
0x4d: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4f: GOTO 0x51

0x50: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x51: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x52: Push( Stack[2 + Tasks[-1].StackPointer] )
0x53: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x54: @@ GetItemID(Stack[-1])
0x55: Pop(0)
0x56: @ GetItemImage(Stack[-1], Stack[-4])
0x57: Pop(0)
0x58: @ LoadImage(Stack[-4])
0x59: Pop(0)
0x5a: @ GetItemMaxStackSize(Stack[-1], Stack[-1])
0x5b: Pop(0)
0x5c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) -1)
0x5f: Push("")
0x60: @ SetTooltip(Stack[-2], Stack[-1])
0x61: Pop(2)
0x62: GOTO 0x67

0x63: Push((int) 3)
0x64: Push("")
0x65: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0x66: Pop(2)
0x67: GOTO 0x6c

0x68: Push((int) -1)
0x69: Push("")
0x6a: @ SetTooltip(Stack[-2], Stack[-1])
0x6b: Pop(2)
0x6c: Return(); Pop(2)

