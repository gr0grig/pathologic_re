GlobalVarCount = 0

Strings:
	microscope.xml

Import:
	SetVisibility (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	ShowWindow (2 args)

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
0xc: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xd: Push("microscope.xml")
0xe: Push((bool) 0)
0xf: @ ShowWindow(Stack[-2], Stack[-1])
0x10: Pop(2)
0x11: EventEnable(0)
0x12: Return(); Pop(2)

