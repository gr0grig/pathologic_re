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
0x4: Call2 0x7

0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: @ Hold()
0x8: Pop(0)
0x9: GOTO 0x7

0xa: Return(); Pop(0)

0xb: PushEmpty(bool, bool, bool, bool)
0xc: PushEmpty(bool)
0xd: Stack[-1] = (bool) 1
0xe: Pop(0); Push((bool) Stack[-6] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x10: PushEmpty(bool)
0x11: Call2 0x25

0x12: Pop(0)
0x13: Pop(1); Push((bool) Stack[-1] == 0)
0x14: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x15: Stack[-1] = (bool) 0
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(4)

0x18: @@ IsOnGround(Stack[-2])
0x19: Pop(0)
0x1a: Push(Stack[-2])
0x1b: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x1c: EventDisable(0)
0x1d: @ IsOverrideActive(Stack[-1])
0x1e: Pop(0)
0x1f: Pop(0); Push((bool) Stack[-1] == 0)
0x20: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x21: @ Barter(Stack[-5])
0x22: Pop(0)
0x23: EventEnable(0)
0x24: Return(); Pop(4)

0x25: PushEmpty(int, int)
0x26: Push("nouse_container")
0x27: @ GetVariable(Stack[-1], Stack[-2])
0x28: Pop(1)
0x29: Stack[-3] = !Stack[-1]; Pop(0);
0x2a: Return(); Pop(2)

