GlobalVarCount = 0

Strings:
	default
	 : 
	0

Import:
	GetWindowSize (2 args)
	GetFontHeight (2 args)
	SetNeedUpdate (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	GetStringByID (2 args)
	Print (7 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, int, int) Params = 0
		EVENT_1 Op = 0x17 Vars = (float)
		EVENT_0 Op = 0x36 Vars = ()


0x0: PushEmpty(int, int, int, int, int, int)
0x1: @ GetWindowSize(Stack[-3], Stack[-2])
0x2: Pop(0)
0x3: Stack[1 + Tasks[-1].StackPointer] = (int)20
0x4: Push("default")
0x5: @ GetFontHeight(Stack[-2], Stack[-1])
0x6: Pop(1)
0x7: Pop(0); Push(Stack[-2] - Stack[-1]);
0x8: Push((int) 2)
0x9: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0xa: Push((int) 0)
0xb: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0xd: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xe: Push((bool) 1)
0xf: @ SetNeedUpdate(Stack[-1])
0x10: Pop(1)
0x11: Push((bool) 1)
0x12: @ SetOwnerDraw(Stack[-1])
0x13: Pop(1)
0x14: @ ProcessEvents()
0x15: Pop(0)
0x16: Return(); Pop(6)

0x17: PushEmpty(string, string)
0x18: PushEmpty(int)
0x19: Call2 0x46

0x1a: Pop(0)
0x1b: Push(" : ")
0x1c: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x1d: PushEmpty(int)
0x1e: Call2 0x4e

0x1f: Pop(0)
0x20: Push((int) 10)
0x21: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x23: Push("0")
0x24: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x25: PushEmpty(int)
0x26: Call2 0x4e

0x27: Pop(0)
0x28: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x29: Push((int) 4)
0x2a: @ GetStringByID(Stack[-2], Stack[-1])
0x2b: Pop(1)
0x2c: Push(" ")
0x2d: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2e: Push(" ")
0x2f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30: PushEmpty(int)
0x31: Call2 0x3d

0x32: Pop(0)
0x33: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x35: Return(); Pop(2)

0x36: Push("default")
0x37: Push((float)1.0)
0x38: Push((float)1.0)
0x39: Push((float)1.0)
0x3a: @ Print(Stack[-4], Stack[-1], Stack[-2], Stack[-0], Stack[-3], Stack[-2], Stack[-1])
0x3b: Pop(4)
0x3c: Return(); Pop(0)

0x3d: PushEmpty(float, float)
0x3e: @ GetGameTime(Stack[-1])
0x3f: Pop(0)
0x40: Push((int) 1)
0x41: PushEmpty(int)
0x42: Push((int) 24)
0x43: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x44: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x45: Return(); Pop(2)

0x46: PushEmpty(float, float)
0x47: @ GetGameTime(Stack[-1])
0x48: Pop(0)
0x49: PushEmpty(int)
0x4a: Stack[-1] = Stack[-2]
0x4b: Push((int) 24)
0x4c: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x4d: Return(); Pop(2)

0x4e: PushEmpty(float, float)
0x4f: @ GetGameTime(Stack[-1])
0x50: Pop(0)
0x51: PushEmpty(int)
0x52: Stack[-1] = Stack[-2]
0x53: Pop(1); Push(Stack[-2] - Stack[-1]);
0x54: Push((int) 60)
0x55: Stack[-5] = Stack[-2] * Stack[-1]; Pop(2);
0x56: Return(); Pop(2)

