GlobalVarCount = 0

Strings:
	 : 
	0
	default

Import:
	GetStringByID (2 args)
	GetWindowSize (2 args)
	GetFontHeight (2 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Print (7 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, int, int) Params = 0
		EVENT_0 Op = 0x32 Vars = ()


0x0: PushEmpty(string, int, int, int, string, int, int, int)
0x1: PushEmpty(int)
0x2: Call2 0x42

0x3: Pop(0)
0x4: Push(" : ")
0x5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x7: PushEmpty(int)
0x8: Call2 0x4a

0x9: Pop(0)
0xa: Push((int) 10)
0xb: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xd: Push("0")
0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xf: PushEmpty(int)
0x10: Call2 0x4a

0x11: Pop(0)
0x12: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x13: Push((int) 4)
0x14: @ GetStringByID(Stack[-5], Stack[-1])
0x15: Pop(1)
0x16: Push(" ")
0x17: Pop(1); Push(Stack[-1] + Stack[-5]);
0x18: Push(" ")
0x19: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a: PushEmpty(int)
0x1b: Call2 0x39

0x1c: Pop(0)
0x1d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1f: @ GetWindowSize(Stack[-3], Stack[-2])
0x20: Pop(0)
0x21: Stack[1 + Tasks[-1].StackPointer] = (int)20
0x22: Push("default")
0x23: @ GetFontHeight(Stack[-2], Stack[-1])
0x24: Pop(1)
0x25: Pop(0); Push(Stack[-2] - Stack[-1]);
0x26: Push((int) 2)
0x27: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x28: Push((int) 0)
0x29: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x2b: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x2c: Push((bool) 1)
0x2d: @ SetOwnerDraw(Stack[-1])
0x2e: Pop(1)
0x2f: @ ProcessEvents()
0x30: Pop(0)
0x31: Return(); Pop(8)

0x32: Push("default")
0x33: Push((float)1.0)
0x34: Push((float)1.0)
0x35: Push((float)1.0)
0x36: @ Print(Stack[-4], Stack[-1], Stack[-2], Stack[-0], Stack[-3], Stack[-2], Stack[-1])
0x37: Pop(4)
0x38: Return(); Pop(0)

0x39: PushEmpty(float, float)
0x3a: @ GetGameTime(Stack[-1])
0x3b: Pop(0)
0x3c: Push((int) 1)
0x3d: PushEmpty(int)
0x3e: Push((int) 24)
0x3f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x40: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x41: Return(); Pop(2)

0x42: PushEmpty(float, float)
0x43: @ GetGameTime(Stack[-1])
0x44: Pop(0)
0x45: PushEmpty(int)
0x46: Stack[-1] = Stack[-2]
0x47: Push((int) 24)
0x48: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x49: Return(); Pop(2)

0x4a: PushEmpty(float, float)
0x4b: @ GetGameTime(Stack[-1])
0x4c: Pop(0)
0x4d: PushEmpty(int)
0x4e: Stack[-1] = Stack[-2]
0x4f: Pop(1); Push(Stack[-2] - Stack[-1]);
0x50: Push((int) 60)
0x51: Stack[-5] = Stack[-2] * Stack[-1]; Pop(2);
0x52: Return(); Pop(2)

