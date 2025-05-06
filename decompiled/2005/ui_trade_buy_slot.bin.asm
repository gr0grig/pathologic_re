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
		EVENT_2 Op = 0x34 Vars = (int, int)
		EVENT_6 Op = 0x39 Vars = (int, int)
		EVENT_3 Op = 0x3e Vars = (int, int)
		EVENT_200 Op = 0x40 Vars = (int, string, object)


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

0x11: PushEmpty(string, string)
0x12: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x13: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x14: Return(); Pop(2)

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
0x21: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x22: Push("/")
0x23: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x24: Stack[-2] = Stack[-1] + Stack[1 + Tasks[-1].StackPointer]; Pop(1);
0x25: Push("default")
0x26: Push((int) 2)
0x27: Push((int) 35)
0x28: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x29: Pop(3)
0x2a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2c: Push("disabled")
0x2d: Push((int) 1)
0x2e: Push((int) 1)
0x2f: Push((int) 50)
0x30: Push((int) 50)
0x31: @ StretchBlit(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x32: Pop(5)
0x33: Return(); Pop(2)

0x34: PushEmpty()
0x35: Push((int) 0)
0x36: @ SendMessageToParent(Stack[-1])
0x37: Pop(1)
0x38: Return(); Pop(0)

0x39: PushEmpty()
0x3a: Push((int) 1)
0x3b: @ SendMessageToParent(Stack[-1])
0x3c: Pop(1)
0x3d: Return(); Pop(0)

0x3e: PushEmpty()
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: Push((int) 65536)
0x42: Pop(1); Push(Stack[-6] & Stack[-1]);
0x43: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x44: Push((int) 0)
0x45: @@ get(Stack[-0], Stack[-1])
0x46: Pop(1)
0x47: Push((int) 1)
0x48: @@ get(Stack[-1], Stack[-1])
0x49: Pop(1)
0x4a: Return(); Pop(2)

0x4b: Push((int) 16384)
0x4c: Pop(1); Push(Stack[-6] & Stack[-1]);
0x4d: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4e: Push("selected")
0x4f: @ SetBackground(Stack[-1])
0x50: Pop(1)
0x51: GOTO 0x55

0x52: Push("default")
0x53: @ SetBackground(Stack[-1])
0x54: Pop(1)
0x55: Push((int) 32768)
0x56: Pop(1); Push(Stack[-6] & Stack[-1]);
0x57: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x58: Stack[2 + Tasks[-1].StackPointer] = 0
0x59: Push((int) -1)
0x5a: Push("")
0x5b: @ SetTooltip(Stack[-2], Stack[-1])
0x5c: Pop(2)
0x5d: Return(); Pop(2)

0x5e: Push((int) 131072)
0x5f: Pop(1); Push(Stack[-6] & Stack[-1]);
0x60: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x61: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x62: GOTO 0x64

0x63: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x64: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x65: Push( Stack[2 + Tasks[-1].StackPointer] )
0x66: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x67: @@ GetItemID(Stack[-1])
0x68: Pop(0)
0x69: @ GetItemImage(Stack[-1], Stack[-4])
0x6a: Pop(0)
0x6b: @ LoadImage(Stack[-4])
0x6c: Pop(0)
0x6d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: Push((int) -1)
0x70: Push("")
0x71: @ SetTooltip(Stack[-2], Stack[-1])
0x72: Pop(2)
0x73: GOTO 0x78

0x74: Push((int) 4)
0x75: Push("")
0x76: @ SetTooltip(Stack[-2], Stack[-1], Stack[-2])
0x77: Pop(2)
0x78: GOTO 0x7d

0x79: Push((int) -1)
0x7a: Push("")
0x7b: @ SetTooltip(Stack[-2], Stack[-1])
0x7c: Pop(2)
0x7d: Return(); Pop(2)

