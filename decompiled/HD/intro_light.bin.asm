GlobalVarCount = 0

Strings:
	off

Import:
	Hold (0 args)
	GetColor (1 args)
	sync (1 args)
	SetColor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0x4 Vars = (string)
	GTASK_1  Params = 0


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty()
0x5: Push("off")
0x6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0x8: PushEmpty()
0x9: Push(-0, 0); TaskCall(1)
0xa: Call2 0xe

0xb: Pop(-0, 0); TaskReturn
0xc: Pop(0)
0xd: Return(); Pop(0)

0xe: PushEmpty(cvector, float, float, float, cvector, float, float, float)
0xf: @ GetColor(Stack[-4])
0x10: Pop(0)
0x11: Stack[-3] = (int) 1
0x12: Stack[-2] = (float) 0.9
0x13: @ sync(Stack[-1])
0x14: Pop(0)
0x15: Pop(0); Push(Stack[-1] * Stack[-2]);
0x16: Stack[-4] = Stack[-4] - Stack[-1]; Pop(1);
0x17: Push((float)0.01)
0x18: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x1a: GOTO 0x1f

0x1b: Pop(0); Push(Stack[-4] * Stack[-3]);
0x1c: @ SetColor(Stack[-1])
0x1d: Pop(1)
0x1e: GOTO 0x13

0x1f: Push((float)0.01)
0x20: Pop(1); Push(Stack[-5] * Stack[-1]);
0x21: @ SetColor(Stack[-1])
0x22: Pop(1)
0x23: Return(); Pop(8)

