GlobalVarCount = 0

Strings:
	middle
	start
	end

Import:
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	GetWindowSize (2 args)
	StretchBlit (5 args)
	Blit (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int) Params = 0
		EVENT_200 Op = 0xa Vars = (int, string, object)
		EVENT_0 Op = 0xd Vars = ()


0x0: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x1: Push((bool) 1)
0x2: @ EnableClipping(Stack[-1])
0x3: Pop(1)
0x4: Push((bool) 1)
0x5: @ SetOwnerDraw(Stack[-1])
0x6: Pop(1)
0x7: @ ProcessEvents()
0x8: Pop(0)
0x9: Return(); Pop(0)

0xa: PushEmpty()
0xb: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0xc: Return(); Pop(0)

0xd: PushEmpty(int, int, int, int, int, int)
0xe: @ GetWindowSize(Stack[-3], Stack[-2])
0xf: Pop(0)
0x10: Pop(0); Push(Stack[-3] * Stack[0 + StackPtr]);
0x11: Push((int) 100)
0x12: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x13: Push((int) 4)
0x14: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x16: Return(); Pop(6)

0x17: Push((int) 4)
0x18: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x19: Push((int) 0)
0x1a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1c: Push("middle")
0x1d: Push((int) 2)
0x1e: Push((int) 0)
0x1f: Push((int) 7)
0x20: @ StretchBlit(Stack[-4], Stack[-3], Stack[-2], Stack[-5], Stack[-1])
0x21: Pop(4)
0x22: Push("start")
0x23: Push((int) 0)
0x24: Push((int) 0)
0x25: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x26: Pop(3)
0x27: Push("end")
0x28: Push((int) 2)
0x29: Pop(1); Push(Stack[-1] + Stack[-3]);
0x2a: Push((int) 0)
0x2b: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x2c: Pop(3)
0x2d: Return(); Pop(6)

