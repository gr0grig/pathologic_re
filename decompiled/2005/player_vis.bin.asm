GlobalVarCount = 0

Strings:

Import:
	GetGameTime (1 args)
	SetBaseVisibility (1 args)
	Sleep (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(float, float, float, float)
0x1: @ GetGameTime(Stack[-2])
0x2: Pop(0)
0x3: Push((int) 24)
0x4: Stack[-3] = Stack[-3] % Stack[-1]; Pop(1);
0x5: Push((float)6.0)
0x6: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-1] = (float) 0.15686
0x9: GOTO 0x2a

0xa: Push((float)8.0)
0xb: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0xd: PushEmpty(float, float, float, float, float, float)
0xe: Stack[-5] = Stack[-8]
0xf: Stack[-4] = (float) 6.0
0x10: Stack[-3] = (float) 8.0
0x11: Stack[-2] = (float) 0.15686
0x12: Stack[-1] = (float) 0.47059
0x13: Call2 0x31

0x14: Stack[-7] = Stack[-6]
0x15: Pop(6)
0x16: GOTO 0x2a

0x17: Push((float)20.0)
0x18: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x1a: Stack[-1] = (float) 0.47059
0x1b: GOTO 0x2a

0x1c: Push((float)21.0)
0x1d: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x1f: PushEmpty(float, float, float, float, float, float)
0x20: Stack[-5] = Stack[-8]
0x21: Stack[-4] = (float) 20.0
0x22: Stack[-3] = (float) 21.0
0x23: Stack[-2] = (float) 0.47059
0x24: Stack[-1] = (float) 0.15686
0x25: Call2 0x31

0x26: Stack[-7] = Stack[-6]
0x27: Pop(6)
0x28: GOTO 0x2a

0x29: Stack[-1] = (float) 0.15686
0x2a: @ SetBaseVisibility(Stack[-1])
0x2b: Pop(0)
0x2c: Push((int) 5)
0x2d: @ Sleep(Stack[-1])
0x2e: Pop(1)
0x2f: GOTO 0x1

0x30: Return(); Pop(4)

0x31: PushEmpty(float, float)
0x32: Pop(0); Push(Stack[-7] - Stack[-6]);
0x33: Pop(0); Push(Stack[-6] - Stack[-7]);
0x34: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x35: Push((int) 1)
0x36: Pop(1); Push(Stack[-1] - Stack[-2]);
0x37: Pop(1); Push(Stack[-5] * Stack[-1]);
0x38: Pop(0); Push(Stack[-4] * Stack[-2]);
0x39: Stack[-10] = Stack[-2] + Stack[-1]; Pop(2);
0x3a: Return(); Pop(2)

