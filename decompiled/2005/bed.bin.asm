GlobalVarCount = 0

Strings:

Import:
	SetVisibility (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	ActivateSleepMode (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x7 Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty(bool, bool)
0x8: @ IsOverrideActive(Stack[-1])
0x9: Pop(0)
0xa: Pop(0); Push((bool) Stack[-1] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0xc: @ ActivateSleepMode(Stack[-3])
0xd: Pop(0)
0xe: Return(); Pop(2)

