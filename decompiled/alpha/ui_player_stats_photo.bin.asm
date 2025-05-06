GlobalVarCount = 0

Strings:
	ui/stat_Danko0.png
	ui/stat_Danko1.png
	ui/stat_Danko2.png
	ui/stat_Burah0.png
	ui/stat_Burah1.png
	ui/stat_Burah2.png
	ui/stat_Klara0.png
	ui/stat_Klara1.png
	ui/stat_Klara2.png

Import:
	EnableClipping (1 args)
	LoadImage (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	GetPlayerHealth (1 args)
	Blit (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, string, string) Params = 0
		EVENT_0 Op = 0x26 Vars = ()


0x0: Push((bool) 1)
0x1: @ EnableClipping(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(int)
0x4: Call 0x3e

0x5: Pop(0)
0x6: Push((int) 0)
0x7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0x9: Stack[0 + Tasks[-1].StackPointer] = "ui/stat_Danko0.png"
0xa: Stack[1 + Tasks[-1].StackPointer] = "ui/stat_Danko1.png"
0xb: Stack[2 + Tasks[-1].StackPointer] = "ui/stat_Danko2.png"
0xc: GOTO 0x1a

0xd: PushEmpty(int)
0xe: Call 0x3e

0xf: Pop(0)
0x10: Push((int) 1)
0x11: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x13: Stack[0 + Tasks[-1].StackPointer] = "ui/stat_Burah0.png"
0x14: Stack[1 + Tasks[-1].StackPointer] = "ui/stat_Burah1.png"
0x15: Stack[2 + Tasks[-1].StackPointer] = "ui/stat_Burah2.png"
0x16: GOTO 0x1a

0x17: Stack[0 + Tasks[-1].StackPointer] = "ui/stat_Klara0.png"
0x18: Stack[1 + Tasks[-1].StackPointer] = "ui/stat_Klara1.png"
0x19: Stack[2 + Tasks[-1].StackPointer] = "ui/stat_Klara2.png"
0x1a: @ LoadImage(Stack[-0])
0x1b: Pop(0)
0x1c: @ LoadImage(Stack[-1])
0x1d: Pop(0)
0x1e: @ LoadImage(Stack[-2])
0x1f: Pop(0)
0x20: Push((bool) 1)
0x21: @ SetOwnerDraw(Stack[-1])
0x22: Pop(1)
0x23: @ ProcessEvents()
0x24: Pop(0)
0x25: Return(); Pop(0)

0x26: PushEmpty(float, float)
0x27: @ GetPlayerHealth(Stack[-1])
0x28: Pop(0)
0x29: Push((float)0.7)
0x2a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2c: Push((int) 0)
0x2d: Push((int) 0)
0x2e: @ Blit(Stack[-0], Stack[-2], Stack[-1])
0x2f: Pop(2)
0x30: GOTO 0x3d

0x31: Push((float)0.2)
0x32: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x34: Push((int) 0)
0x35: Push((int) 0)
0x36: @ Blit(Stack[-1], Stack[-2], Stack[-1])
0x37: Pop(2)
0x38: GOTO 0x3d

0x39: Push((int) 0)
0x3a: Push((int) 0)
0x3b: @ Blit(Stack[-2], Stack[-2], Stack[-1])
0x3c: Pop(2)
0x3d: Return(); Pop(2)

0x3e: Stack[-1] = (int) 0
0x3f: Return(); Pop(0)

