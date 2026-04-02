GlobalVarCount = 0

Strings:
	W:door_closed
	W:Door is locked
// @pool_raw:64006f006f0072005f0063006c006f00730065006400000044006f006f00720020006900730020006c006f0063006b00650064000000

Import:
	SetVisibility (1 args)
	Hold (0 args)
	PlaySound (1 args)
	Trace (1 args)

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
0x8: Push("door_closed") // @poff=0
0x9: @ PlaySound(Stack[-1])
0xa: Pop(1)
0xb: Push("Door is locked") // @poff=24
0xc: @ Trace(Stack[-1])
0xd: Pop(1)
0xe: Return(); Pop(0)

