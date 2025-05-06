GlobalVarCount = 0

Strings:
	default
	 : 
	0
	, 

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	GetStringByID (2 args)
	GetWindowSize (2 args)
	GetFontHeight (2 args)
	GetTextWidth (3 args)
	Print (7 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, int, int) Params = 0
		EVENT_0 Op = 0x9 Vars = ()


0x0: Push("default")
0x1: @ SetBackground(Stack[-1])
0x2: Pop(1)
0x3: Push((bool) 1)
0x4: @ SetOwnerDraw(Stack[-1])
0x5: Pop(1)
0x6: @ ProcessEvents()
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty(string, int, int, int, int, string, int, int, int, int)
0xa: PushEmpty(int)
0xb: Call2 0x45

0xc: Pop(0)
0xd: Push(" : ")
0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xf: PushEmpty(int)
0x10: Call2 0x4d

0x11: Pop(0)
0x12: Push((int) 10)
0x13: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x14: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x15: Push("0")
0x16: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x17: PushEmpty(int)
0x18: Call2 0x4d

0x19: Pop(0)
0x1a: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1b: Push((int) 4)
0x1c: @ GetStringByID(Stack[-6], Stack[-1])
0x1d: Pop(1)
0x1e: Push(", ")
0x1f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x20: Push(" ")
0x21: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22: PushEmpty(int)
0x23: Call2 0x3c

0x24: Pop(0)
0x25: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x27: @ GetWindowSize(Stack[-4], Stack[-3])
0x28: Pop(0)
0x29: Push("default")
0x2a: @ GetFontHeight(Stack[-3], Stack[-1])
0x2b: Pop(1)
0x2c: Pop(0); Push(Stack[-3] - Stack[-2]);
0x2d: Push((int) 2)
0x2e: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x2f: Push("default")
0x30: @ GetTextWidth(Stack[-2], Stack[-1], Stack[-0])
0x31: Pop(1)
0x32: Pop(0); Push(Stack[-4] - Stack[-1]);
0x33: Push((int) 2)
0x34: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x35: Push("default")
0x36: Push((float)1.0)
0x37: Push((float)1.0)
0x38: Push((float)1.0)
0x39: @ Print(Stack[-4], Stack[-1], Stack[-2], Stack[-0], Stack[-3], Stack[-2], Stack[-1])
0x3a: Pop(4)
0x3b: Return(); Pop(10)

0x3c: PushEmpty(float, float)
0x3d: @ GetGameTime(Stack[-1])
0x3e: Pop(0)
0x3f: Push((int) 1)
0x40: PushEmpty(int)
0x41: Push((int) 24)
0x42: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x43: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x44: Return(); Pop(2)

0x45: PushEmpty(float, float)
0x46: @ GetGameTime(Stack[-1])
0x47: Pop(0)
0x48: PushEmpty(int)
0x49: Stack[-1] = Stack[-2]
0x4a: Push((int) 24)
0x4b: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x4c: Return(); Pop(2)

0x4d: PushEmpty(float, float)
0x4e: @ GetGameTime(Stack[-1])
0x4f: Pop(0)
0x50: PushEmpty(int)
0x51: Stack[-1] = Stack[-2]
0x52: Pop(1); Push(Stack[-2] - Stack[-1]);
0x53: Push((int) 60)
0x54: Stack[-5] = Stack[-2] * Stack[-1]; Pop(2);
0x55: Return(); Pop(2)

