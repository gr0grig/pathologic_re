GlobalVarCount = 0

Strings:
	danko_death.mot

Import:
	ModBlurLevel (1 args)
	CameraPlayRel (2 args)
	Sleep (1 args)
	CameraWaitForPlayFinish (0 args)
	Hold (0 args)
	ModDarkenLevel (1 args)
	sync (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: Push((float)0.15)
0x1: @ ModBlurLevel(Stack[-1])
0x2: Pop(1)
0x3: Push("danko_death.mot")
0x4: Push((bool) 1)
0x5: @ CameraPlayRel(Stack[-2], Stack[-1])
0x6: Pop(2)
0x7: Push((float)1.5)
0x8: @ Sleep(Stack[-1])
0x9: Pop(1)
0xa: PushEmpty(float, float, float)
0xb: Stack[-3] = (int) 0
0xc: Stack[-2] = (int) 1
0xd: Stack[-1] = (float) 1.25
0xe: Call 0x15

0xf: Pop(3)
0x10: @ CameraWaitForPlayFinish()
0x11: Pop(0)
0x12: @ Hold()
0x13: Pop(0)
0x14: Return(); Pop(0)

0x15: PushEmpty(bool, float, float, bool, float, float)
0x16: Stack[-3] = Stack[-8] > Stack[-9]; Pop(0);
0x17: Pop(0); Push(Stack[-8] - Stack[-9]);
0x18: Stack[-3] = Stack[-1] / Stack[-8]; Pop(1);
0x19: Push(Stack[-3])
0x1a: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x1b: Pop(0); Push((bool) Stack[-9] < Stack[-8])
0x1c: GOTO 0x1e

0x1d: Pop(0); Push((bool) Stack[-8] < Stack[-9])
0x1e: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x1f: @ ModDarkenLevel(Stack[-9])
0x20: Pop(0)
0x21: @ sync(Stack[-1])
0x22: Pop(0)
0x23: Pop(0); Push(Stack[-1] * Stack[-2]);
0x24: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x25: GOTO 0x19

0x26: @ ModDarkenLevel(Stack[-8])
0x27: Pop(0)
0x28: Return(); Pop(6)

