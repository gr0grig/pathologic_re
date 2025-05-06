GlobalVarCount = 0

Strings:
	cry
	all

Import:
	WaitForAnimEnd (0 args)
	HasAnimation (3 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	IsLoaded (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: Push((bool) 1)
0x1: IF (Stack[-1] == 0) GOTO 0x7; Pop(1)

0x2: PushEmpty(string)
0x3: Stack[-1] = "cry"
0x4: Call2 0x8

0x5: Pop(1)
0x6: GOTO 0x0

0x7: Return(); Pop(0)

0x8: PushEmpty(bool, bool, bool, bool)
0x9: @ WaitForAnimEnd()
0xa: Pop(0)
0xb: PushEmpty(bool)
0xc: Call2 0x1d

0xd: Pop(0)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x10: Return(); Pop(4)

0x11: Push("all")
0x12: @ HasAnimation(Stack[-3], Stack[-1], Stack[-6])
0x13: Pop(1)
0x14: Pop(0); Push((bool) Stack[-2] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x16: Return(); Pop(4)

0x17: Push("all")
0x18: @ PlayAnimation(Stack[-1], Stack[-6])
0x19: Pop(1)
0x1a: @ WaitForAnimEnd(Stack[-1])
0x1b: Pop(0)
0x1c: Return(); Pop(4)

0x1d: PushEmpty(bool, bool)
0x1e: @ IsLoaded(Stack[-1])
0x1f: Pop(0)
0x20: Stack[-3] = Stack[-1]
0x21: Return(); Pop(2)

