GlobalVarCount = 0

Strings:
	W:dapparatus.xml
// @pool_raw:64006100700070006100720061007400750073002e0078006d006c000000

Import:
	SetVisibility (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	ShowWindow (4 args)
	self (1 args)

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
0x8: EventDisable(0)
0x9: @ IsOverrideActive(Stack[-1])
0xa: Pop(0)
0xb: Pop(0); Push((bool) Stack[-1] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0xd: Push("dapparatus.xml") // @poff=0
0xe: Push((bool) 0)
0xf: Push((bool) 0)
0x10: PushEmpty(object)
0x11: Call2 0x17

0x12: Pop(0)
0x13: @ ShowWindow(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14: Pop(4)
0x15: EventEnable(0)
0x16: Return(); Pop(2)

0x17: PushEmpty(object, object)
0x18: @ self(Stack[-1])
0x19: Pop(0)
0x1a: Stack[-1] = Stack[-3]
0x1b: Return(); Pop(2)

0x1c: Stack[-1] = 0
