GlobalVarCount = 0

Strings:

Import:
	Switch (1 args)
	rand (3 args)
	Sleep (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (float, float) Params = 0


0x0: PushEmpty(float, float)
0x1: Push((bool) 1)
0x2: @ Switch(Stack[-1])
0x3: Pop(1)
0x4: Push((float)0.05)
0x5: Push((float)1.0)
0x6: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x7: Pop(2)
0x8: @ Sleep(Stack[-1])
0x9: Pop(0)
0xa: Push((bool) 0)
0xb: @ Switch(Stack[-1])
0xc: Pop(1)
0xd: Push((float)0.05)
0xe: Push((float)1.0)
0xf: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x10: Pop(2)
0x11: @ Sleep(Stack[-1])
0x12: Pop(0)
0x13: GOTO 0x1

0x14: Return(); Pop(2)

