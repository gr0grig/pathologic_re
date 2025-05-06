GlobalVarCount = 0

Strings:
	sobor_idle
	all

Import:
	HasAnimation (3 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	LockAnimationEnd (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: Push((bool) 1)
0x1: IF (Stack[-1] == 0) GOTO 0x7; Pop(1)

0x2: PushEmpty(string)
0x3: Stack[-1] = "sobor_idle"
0x4: Call2 0x8

0x5: Pop(1)
0x6: GOTO 0x0

0x7: Return(); Pop(0)

0x8: PushEmpty(bool, bool, bool, bool)
0x9: Push("all")
0xa: @ HasAnimation(Stack[-3], Stack[-1], Stack[-6])
0xb: Pop(1)
0xc: Pop(0); Push((bool) Stack[-2] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xe: Return(); Pop(4)

0xf: Push("all")
0x10: @ PlayAnimation(Stack[-1], Stack[-6])
0x11: Pop(1)
0x12: @ WaitForAnimEnd(Stack[-1])
0x13: Pop(0)
0x14: Push("all")
0x15: @ LockAnimationEnd(Stack[-1], Stack[-6])
0x16: Pop(1)
0x17: Return(); Pop(4)

