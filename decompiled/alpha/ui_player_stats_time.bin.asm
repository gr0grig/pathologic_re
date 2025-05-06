GlobalVarCount = 0

Strings:
	 : 
	0
	default

Import:
	GetStringByID (2 args)
	GetWindowSize (2 args)
	GetTextWidth (3 args)
	GetFontHeight (2 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Print (7 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, int, int) Params = 0
		EVENT_0 Op = 0x3a Vars = ()


0x0: PushEmpty(string, int, int, int, int, string, int, int, int, int)
0x1: PushEmpty(int)
0x2: Call 0x4a

0x3: Pop(0)
0x4: Push(" : ")
0x5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x7: PushEmpty(int)
0x8: Call 0x52

0x9: Pop(0)
0xa: Push((int) 10)
0xb: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xd: Push("0")
0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xf: PushEmpty(int)
0x10: Call 0x52

0x11: Pop(0)
0x12: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x13: Push((int) 200004)
0x14: @ GetStringByID(Stack[-6], Stack[-1])
0x15: Pop(1)
0x16: Push(" ")
0x17: Pop(1); Push(Stack[-1] + Stack[-6]);
0x18: Push(" ")
0x19: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a: PushEmpty(int)
0x1b: Call 0x41

0x1c: Pop(0)
0x1d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1f: @ GetWindowSize(Stack[-4], Stack[-3])
0x20: Pop(0)
0x21: Push("default")
0x22: @ GetTextWidth(Stack[-3], Stack[-1], Stack[-0])
0x23: Pop(1)
0x24: Stack[-4] = Stack[-4] - Stack[-2]; Pop(0);
0x25: Push((int) 0)
0x26: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x28: Stack[-4] = (int) 0
0x29: Stack[1 + Tasks[-1].StackPointer] = Stack[-4]
0x2a: Push("default")
0x2b: @ GetFontHeight(Stack[-2], Stack[-1])
0x2c: Pop(1)
0x2d: Pop(0); Push(Stack[-3] - Stack[-1]);
0x2e: Push((int) 2)
0x2f: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x30: Push((int) 0)
0x31: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x33: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x34: Push((bool) 1)
0x35: @ SetOwnerDraw(Stack[-1])
0x36: Pop(1)
0x37: @ ProcessEvents()
0x38: Pop(0)
0x39: Return(); Pop(10)

0x3a: Push("default")
0x3b: Push((float)1.0)
0x3c: Push((float)1.0)
0x3d: Push((float)1.0)
0x3e: @ Print(Stack[-4], Stack[-1], Stack[-2], Stack[-0], Stack[-3], Stack[-2], Stack[-1])
0x3f: Pop(4)
0x40: Return(); Pop(0)

0x41: PushEmpty(float, float)
0x42: @ GetGameTime(Stack[-1])
0x43: Pop(0)
0x44: Push((int) 1)
0x45: PushEmpty(int)
0x46: Push((int) 24)
0x47: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x48: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x49: Return(); Pop(2)

0x4a: PushEmpty(float, float)
0x4b: @ GetGameTime(Stack[-1])
0x4c: Pop(0)
0x4d: PushEmpty(int)
0x4e: Stack[-1] = Stack[-2]
0x4f: Push((int) 24)
0x50: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x51: Return(); Pop(2)

0x52: PushEmpty(float, float)
0x53: @ GetGameTime(Stack[-1])
0x54: Pop(0)
0x55: PushEmpty(int)
0x56: Stack[-1] = Stack[-2]
0x57: Pop(1); Push(Stack[-2] - Stack[-1]);
0x58: Push((int) 60)
0x59: Stack[-5] = Stack[-2] * Stack[-1]; Pop(2);
0x5a: Return(); Pop(2)

