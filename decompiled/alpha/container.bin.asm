GlobalVarCount = 0

Strings:
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0xb Vars = (object)


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call 0x7

0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: @ Hold()
0x8: Pop(0)
0x9: GOTO 0x7

0xa: Return(); Pop(0)

0xb: PushEmpty(bool, bool, bool, bool)
0xc: PushEmpty(bool)
0xd: Call 0x1f

0xe: Pop(0)
0xf: Pop(1); Push((bool) Stack[-1] == 0)
0x10: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x11: Return(); Pop(4)

0x12: @@ IsOnGround(Stack[-2])
0x13: Pop(0)
0x14: Push(Stack[-2])
0x15: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x16: EventDisable(0)
0x17: @ IsOverrideActive(Stack[-1])
0x18: Pop(0)
0x19: Pop(0); Push((bool) Stack[-1] == 0)
0x1a: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x1b: @ Barter(Stack[-5])
0x1c: Pop(0)
0x1d: EventEnable(0)
0x1e: Return(); Pop(4)

0x1f: PushEmpty(int, int)
0x20: Push("nouse_container")
0x21: @ GetVariable(Stack[-1], Stack[-2])
0x22: Pop(1)
0x23: Stack[-3] = !Stack[-1]; Pop(0);
0x24: Return(); Pop(2)

