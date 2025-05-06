GlobalVarCount = 0

Strings:

Import:
	GetAnimationLength (1 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(float, float)
0x1: @ GetAnimationLength(Stack[-1])
0x2: Pop(0)
0x3: Push((int) 0)
0x4: @ PlayAnimation(Stack[-1], Stack[-2])
0x5: Pop(1)
0x6: @ WaitForAnimEnd()
0x7: Pop(0)
0x8: GOTO 0x3

0x9: Return(); Pop(2)

