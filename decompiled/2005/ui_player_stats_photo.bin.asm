GlobalVarCount = 0

Strings:
	ui/stat_Danko.png
	ui/stat_Burah.png
	ui/stat_Klara.png
	branch

Import:
	EnableClipping (1 args)
	LoadImage (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Blit (3 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string) Params = 0
		EVENT_0 Op = 0x1c Vars = ()


0x0: Push((bool) 1)
0x1: @ EnableClipping(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(int)
0x4: Call2 0x21

0x5: Pop(0)
0x6: Push((int) 0)
0x7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[0 + Tasks[-1].StackPointer] = "ui/stat_Danko.png"
0xa: GOTO 0x14

0xb: PushEmpty(int)
0xc: Call2 0x21

0xd: Pop(0)
0xe: Push((int) 1)
0xf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x11: Stack[0 + Tasks[-1].StackPointer] = "ui/stat_Burah.png"
0x12: GOTO 0x14

0x13: Stack[0 + Tasks[-1].StackPointer] = "ui/stat_Klara.png"
0x14: @ LoadImage(Stack[-0])
0x15: Pop(0)
0x16: Push((bool) 1)
0x17: @ SetOwnerDraw(Stack[-1])
0x18: Pop(1)
0x19: @ ProcessEvents()
0x1a: Pop(0)
0x1b: Return(); Pop(0)

0x1c: Push((int) 0)
0x1d: Push((int) 0)
0x1e: @ Blit(Stack[-0], Stack[-2], Stack[-1])
0x1f: Pop(2)
0x20: Return(); Pop(0)

0x21: PushEmpty(int, int)
0x22: Push("branch")
0x23: @ GetVariable(Stack[-1], Stack[-2])
0x24: Pop(1)
0x25: Stack[-3] = Stack[-1]
0x26: Return(); Pop(2)

