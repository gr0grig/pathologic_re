GlobalVarCount = 0

Strings:
	agony
	all

Import:
	RemoveEnvelope (0 args)
	RemoveRTEnvelope (0 args)
	Hold (0 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	StopGroup0 (0 args)
	IsLoaded (1 args)
	rand (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x27 Vars = ()


0x0: PushEmpty(bool, bool)
0x1: @ RemoveEnvelope()
0x2: Pop(0)
0x3: @ RemoveRTEnvelope()
0x4: Pop(0)
0x5: PushEmpty(bool)
0x6: Call2 0x2a

0x7: Pop(0)
0x8: Pop(1); Push((bool) Stack[-1] == 0)
0x9: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0xa: @ Hold()
0xb: Pop(0)
0xc: GOTO 0x5

0xd: Push("agony")
0xe: @ Is3DSoundLoaded(Stack[-2], Stack[-1])
0xf: Pop(1)
0x10: PushEmpty(bool)
0x11: Stack[-1] = (bool) 0
0x12: Push(Stack[-2])
0x13: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x14: PushEmpty(bool, float)
0x15: Stack[-1] = (float) 0.33333
0x16: Call2 0x2f

0x17: Pop(1)
0x18: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x19: Stack[-1] = (bool) 1
0x1a: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1b: Push("agony")
0x1c: Push(CVector(0.0, 40.0, 0.0))
0x1d: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x1e: Pop(2)
0x1f: Push("all")
0x20: Push("agony")
0x21: @ PlayAnimation(Stack[-2], Stack[-1])
0x22: Pop(2)
0x23: @ WaitForAnimEnd(Stack[-1])
0x24: Pop(0)
0x25: GOTO 0x5

0x26: Return(); Pop(2)

0x27: @ StopGroup0()
0x28: Pop(0)
0x29: Return(); Pop(0)

0x2a: PushEmpty(bool, bool)
0x2b: @ IsLoaded(Stack[-1])
0x2c: Pop(0)
0x2d: Stack[-3] = Stack[-1]
0x2e: Return(); Pop(2)

0x2f: PushEmpty(float, float)
0x30: @ rand(Stack[-1])
0x31: Pop(0)
0x32: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x33: Return(); Pop(2)

