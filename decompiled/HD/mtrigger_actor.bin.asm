GlobalVarCount = 1
	G_VAR_0 string Name

Strings:

Import:
	Hold (0 args)
	IsPlayerActor (2 args)
	GetActorName (1 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_23 Op = 0x4 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool, string, bool, string)
0x5: @ IsPlayerActor(Stack[-5], Stack[-2])
0x6: Pop(0)
0x7: Push(Stack[-2])
0x8: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x9: @ GetActorName(Stack[-1])
0xa: Pop(0)
0xb: PushEmpty(bool, string, string)
0xc: Push(GlobalVars[0])
0xd: Stack[-3] = Stack[-1]
0xe: Pop(1)
0xf: Stack[-1] = Stack[-4]
0x10: Call2 0x13

0x11: Pop(3)
0x12: Return(); Pop(4)

0x13: PushEmpty(object, object)
0x14: @ FindActor(Stack[-1], Stack[-4])
0x15: Pop(0)
0x16: Pop(0); Push((bool) Stack[-1] == 0)
0x17: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x18: Stack[-5] = (bool) 0
0x19: Return(); Pop(2)

0x1a: @ Trigger(Stack[-1], Stack[-3])
0x1b: Pop(0)
0x1c: Stack[-5] = (bool) 1
0x1d: Return(); Pop(2)

0x1e: Stack[-1] = 0
