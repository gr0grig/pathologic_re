GlobalVarCount = 0

Strings:
	default
	/
	disabled
	get
	selected
	GetItemID

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendToParent (0 args)
	Blit (3 args)
	GetTextWidth (3 args)
	Print (4 args)
	StretchBlit (5 args)
	SendMessageToParent (1 args)
	SetTooltip (2 args)
	GetItemImage (2 args)
	LoadImage (1 args)
	SetTooltip (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, object, bool, string) Params = 0
		EVENT_15 Op = 0xd Vars = (int, int, float)
		EVENT_0 Op = 0x11 Vars = ()
		EVENT_2 Op = 0x3c Vars = (int, int)
		EVENT_6 Op = 0x41 Vars = (int, int)
		EVENT_3 Op = 0x46 Vars = (int, int)
		EVENT_200 Op = 0x48 Vars = (int, string, object)


0x0: Stack[2 + Tasks[-1].StackPointer] = 0
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2: Stack[1 + Tasks[-1].StackPointer] = (int)1
0x3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4: Push("default")
0x5: @ SetBackground(Stack[-1])
0x6: Pop(1)
0x7: Push((bool) 1)
0x8: @ SetOwnerDraw(Stack[-1])
0x9: Pop(1)
0xa: @ ProcessEvents()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty()
0xe: @ SendToParent()
0xf: Pop(0)
0x10: Return(); Pop(0)

0x11: PushEmpty(string, int, int, string, int, int)
0x12: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x13: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x14: Return(); Pop(6)

0x15: Push((int) 1)
0x16: Push((int) 1)
0x17: @ Blit(Stack[-4], Stack[-2], Stack[-1])
0x18: Pop(2)
0x19: PushEmpty(bool)
0x1a: Stack[-1] = (bool) 0
0x1b: Push((int) 1)
0x1c: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1e: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x20: Stack[-1] = (bool) 1
0x21: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x22: Push("/")
0x23: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x24: Stack[-4] = Stack[-1] + Stack[1 + Tasks[-1].StackPointer]; Pop(1);
0x25: Push("default")
0x26: @ GetTextWidth(Stack[-3], Stack[-1], Stack[-4])
0x27: Pop(1)
0x28: Push((int) 48)
0x29: Stack[-2] = Stack[-1] - Stack[-3]; Pop(1);
0x2a: Push((int) 2)
0x2b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2d: Stack[-1] = (int) 2
0x2e: Push("default")
0x2f: Push((int) 35)
0x30: @ Print(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x31: Pop(2)
0x32: Push( Stack[3 + Tasks[-1].StackPointer] )
0x33: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x34: Push("disabled")
0x35: Push((int) 1)
0x36: Push((int) 1)
0x37: Push((int) 50)
0x38: Push((int) 50)
0x39: @ StretchBlit(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3a: Pop(5)
0x3b: Return(); Pop(6)

0x3c: PushEmpty()
0x3d: Push((int) 0)
0x3e: @ SendMessageToParent(Stack[-1])
0x3f: Pop(1)
0x40: Return(); Pop(0)

0x41: PushEmpty()
0x42: Push((int) 1)
0x43: @ SendMessageToParent(Stack[-1])
0x44: Pop(1)
0x45: Return(); Pop(0)

0x46: PushEmpty()
0x47: Return(); Pop(0)

0x48: PushEmpty(int, int)
0x49: Push((int) 65536)
0x4a: Pop(1); Push(Stack[-6] & Stack[-1]);
0x4b: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4c: Push((int) 0)
0x4d: @@ get(Stack[-0], Stack[-1])
0x4e: Pop(1)
0x4f: Push((int) 1)
0x50: @@ get(Stack[-1], Stack[-1])
0x51: Pop(1)
0x52: Return(); Pop(2)

0x53: Push((int) 16384)
0x54: Pop(1); Push(Stack[-6] & Stack[-1]);
0x55: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x56: Push("selected")
0x57: @ SetBackground(Stack[-1])
0x58: Pop(1)
0x59: GOTO 0x5d

0x5a: Push("default")
0x5b: @ SetBackground(Stack[-1])
0x5c: Pop(1)
0x5d: Push((int) 32768)
0x5e: Pop(1); Push(Stack[-6] & Stack[-1]);
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: Stack[2 + Tasks[-1].StackPointer] = 0
0x61: Push((int) -1)
0x62: Push("")
0x63: @ SetTooltip(Stack[-2], Stack[-1])
0x64: Pop(2)
0x65: Return(); Pop(2)

0x66: Push((int) 131072)
0x67: Pop(1); Push(Stack[-6] & Stack[-1]);
0x68: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x69: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6a: GOTO 0x6c

0x6b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6c: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x6d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x6e: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x6f: @@ GetItemID(Stack[-1])
0x70: Pop(0)
0x71: @ GetItemImage(Stack[-1], Stack[-4])
0x72: Pop(0)
0x73: @ LoadImage(Stack[-4])
0x74: Pop(0)
0x75: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: Push((int) -1)
0x78: Push("")
0x79: @ SetTooltip(Stack[-2], Stack[-1])
0x7a: Pop(2)
0x7b: GOTO 0x80

0x7c: Push((int) 3)
0x7d: Push("")
0x7e: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0x7f: Pop(2)
0x80: GOTO 0x85

0x81: Push((int) -1)
0x82: Push("")
0x83: @ SetTooltip(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: Return(); Pop(2)

