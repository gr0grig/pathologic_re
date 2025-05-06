GlobalVarCount = 0

Strings:

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	GetColor (1 args)
	rand (3 args)
	SetColor (1 args)
	Sleep (1 args)
	IsLoaded (1 args)

RunOp = 0xd
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (float, float) Params = 0
		EVENT_6 Op = 0x24 Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2c

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(cvector, float, float, cvector, float, float)
0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(0)
0x10: Call2 0x0

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: @ GetColor(Stack[-3])
0x14: Pop(0)
0x15: Push((float)0.92)
0x16: Push((float)1.0)
0x17: @ rand(Stack[-4], Stack[-2], Stack[-1])
0x18: Pop(2)
0x19: Pop(0); Push(Stack[-3] * Stack[-2]);
0x1a: @ SetColor(Stack[-1])
0x1b: Pop(1)
0x1c: Push((float)0.075)
0x1d: Push((float)0.1)
0x1e: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1f: Pop(2)
0x20: @ Sleep(Stack[-1])
0x21: Pop(0)
0x22: GOTO 0x15

0x23: Return(); Pop(6)

0x24: @ sync()
0x25: Pop(0)
0x26: PushEmpty()
0x27: Push(-0, 0); TaskCall(0)
0x28: Call2 0x0

0x29: Pop(-0, 0); TaskReturn
0x2a: Pop(0)
0x2b: Return(); Pop(0)

0x2c: PushEmpty(bool, bool)
0x2d: @ IsLoaded(Stack[-1])
0x2e: Pop(0)
0x2f: Stack[-3] = Stack[-1]
0x30: Return(); Pop(2)

