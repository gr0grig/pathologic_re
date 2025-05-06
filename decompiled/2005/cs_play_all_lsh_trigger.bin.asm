GlobalVarCount = 0

Strings:
	play

Import:
	Hold (0 args)
	PlayAnimation (0 args)
	lshPlayAnimation (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty()
0x5: Push("play")
0x6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0x8: EventDisable(26)
0x9: @ PlayAnimation()
0xa: Pop(0)
0xb: @ lshPlayAnimation()
0xc: Pop(0)
0xd: @ Hold()
0xe: Pop(0)
0xf: EventEnable(26)
0x10: Return(); Pop(0)

