GlobalVarCount = 0

Strings:

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	GetColor (1 args)
	rand (3 args)
	SetColor (1 args)
	Sleep (1 args)
	sync (0 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1 Vars = (float, float) Params = 0
		EVENT_6 Op = 0x1d Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty(cvector, float, float, cvector, float, float)
0x7: PushEmpty()
0x8: Push(-0, 0); TaskCall(0)
0x9: Call 0x0

0xa: Pop(-0, 0); TaskReturn
0xb: Pop(0)
0xc: @ GetColor(Stack[-3])
0xd: Pop(0)
0xe: Push((float)0.92)
0xf: Push((float)1.0)
0x10: @ rand(Stack[-4], Stack[-2], Stack[-1])
0x11: Pop(2)
0x12: Pop(0); Push(Stack[-3] * Stack[-2]);
0x13: @ SetColor(Stack[-1])
0x14: Pop(1)
0x15: Push((float)0.075)
0x16: Push((float)0.1)
0x17: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x18: Pop(2)
0x19: @ Sleep(Stack[-1])
0x1a: Pop(0)
0x1b: GOTO 0xe

0x1c: Return(); Pop(6)

0x1d: @ sync()
0x1e: Pop(0)
0x1f: PushEmpty()
0x20: Push(-0, 0); TaskCall(0)
0x21: Call 0x0

0x22: Pop(-0, 0); TaskReturn
0x23: Pop(0)
0x24: Return(); Pop(0)

