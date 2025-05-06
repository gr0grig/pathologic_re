GlobalVarCount = 1
	G_VAR_0 string Name

Strings:
	Triggered actor: 

Import:
	Trace (1 args)
	Hold (0 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_23 Op = 0x9 Vars = (object)


0x0: Push("Triggered actor: ")
0x1: Push(GlobalVars[0])
0x2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3: @ Trace(Stack[-1])
0x4: Pop(1)
0x5: @ Hold()
0x6: Pop(0)
0x7: GOTO 0x5

0x8: Return(); Pop(0)

0x9: PushEmpty(bool, object, bool, object)
0xa: @ IsPlayerActor(Stack[-5], Stack[-2])
0xb: Pop(0)
0xc: Push(Stack[-2])
0xd: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0xe: @ GetScene(Stack[-1])
0xf: Pop(0)
0x10: Push(GlobalVars[0])
0x11: @ Trigger(Stack[-2], Stack[-1])
0x12: Pop(1)
0x13: Stack[-1] = 0
0x14: Return(); Pop(4)

