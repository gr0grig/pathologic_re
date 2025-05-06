GlobalVarCount = 0

Strings:
	default

Import:
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Print (4 args)
	GetStringByID (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x6 Vars = ()


0x0: Push((bool) 1)
0x1: @ SetOwnerDraw(Stack[-1])
0x2: Pop(1)
0x3: @ ProcessEvents()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: Push("default")
0x7: Push((int) 15)
0x8: Push((int) 15)
0x9: PushEmpty(string, int)
0xa: Stack[-1] = (int) 104
0xb: Call2 0x2b

0xc: Pop(1)
0xd: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe: Pop(4)
0xf: Push("default")
0x10: Push((int) 15)
0x11: Push((int) 98)
0x12: PushEmpty(string, int)
0x13: Stack[-1] = (int) 105
0x14: Call2 0x2b

0x15: Pop(1)
0x16: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x17: Pop(4)
0x18: Push("default")
0x19: Push((int) 16)
0x1a: Push((int) 182)
0x1b: PushEmpty(string, int)
0x1c: Stack[-1] = (int) 106
0x1d: Call2 0x2b

0x1e: Pop(1)
0x1f: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x20: Pop(4)
0x21: Push("default")
0x22: Push((int) 16)
0x23: Push((int) 265)
0x24: PushEmpty(string, int)
0x25: Stack[-1] = (int) 107
0x26: Call2 0x2b

0x27: Pop(1)
0x28: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x29: Pop(4)
0x2a: Return(); Pop(0)

0x2b: PushEmpty(string, string)
0x2c: @ GetStringByID(Stack[-1], Stack[-3])
0x2d: Pop(0)
0x2e: Stack[-4] = Stack[-1]
0x2f: Return(); Pop(2)

