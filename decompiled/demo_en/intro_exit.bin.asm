GlobalVarCount = 0

Strings:
	exit

Import:
	SetVisibility (1 args)
	Hold (0 args)
	TriggerWorld (1 args)

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

0x7: PushEmpty()
0x8: Push("exit")
0x9: @ TriggerWorld(Stack[-1])
0xa: Pop(1)
0xb: Return(); Pop(0)

