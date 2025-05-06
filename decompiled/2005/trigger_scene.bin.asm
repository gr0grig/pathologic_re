GlobalVarCount = 2
	G_VAR_0 string Name
	G_VAR_1 bool 

Strings:

Import:
	Hold (0 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_23 Op = 0x7 Vars = (object)


0x0: Push(GlobalVars[1])
0x1: Stack[-1] = (bool) 1
0x2: GlobalVars[1] = Stack[-1]; Pop(1)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty(bool, object, bool, object)
0x8: Push(GlobalVars[1])
0x9: Pop(1); Push((bool) Stack[-1] == 0)
0xa: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0xb: Return(); Pop(4)

0xc: @ IsPlayerActor(Stack[-5], Stack[-2])
0xd: Pop(0)
0xe: Push(Stack[-2])
0xf: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x10: Push(GlobalVars[1])
0x11: Stack[-1] = (bool) 0
0x12: GlobalVars[1] = Stack[-1]; Pop(1)
0x13: @ GetScene(Stack[-1])
0x14: Pop(0)
0x15: Push(GlobalVars[0])
0x16: @ Trigger(Stack[-2], Stack[-1])
0x17: Pop(1)
0x18: Stack[-1] = 0
0x19: Return(); Pop(4)

