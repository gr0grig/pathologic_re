GlobalVarCount = 0

Strings:
	boiny_well
	pt_b11q01_well_return
	GetLocator
	activate

Import:
	Hold (0 args)
	IsPlayerActor (2 args)
	GetSceneByName (2 args)
	RemoveScene (1 args)
	GetMainOutdoorScene (1 args)
	Teleport (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_23 Op = 0x4 Vars = (object)
		EVENT_26 Op = 0x1a Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool, object, bool, cvector, cvector, bool, object, bool, cvector, cvector)
0x5: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x7: Return(); Pop(10)

0x8: @ IsPlayerActor(Stack[-11], Stack[-5])
0x9: Pop(0)
0xa: Push(Stack[-5])
0xb: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0xc: Push("boiny_well")
0xd: @ GetSceneByName(Stack[-5], Stack[-1])
0xe: Pop(1)
0xf: @ RemoveScene(Stack[-4])
0x10: Pop(0)
0x11: @ GetMainOutdoorScene(Stack[-4])
0x12: Pop(0)
0x13: Push("pt_b11q01_well_return")
0x14: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x15: Pop(1)
0x16: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0x17: Pop(0)
0x18: Stack[-4] = 0
0x19: Return(); Pop(10)

0x1a: PushEmpty()
0x1b: Push("activate")
0x1c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1f: Return(); Pop(0)

