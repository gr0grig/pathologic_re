GlobalVarCount = 0

Strings:
	player
	test_scene
	birth
	GetLocator

Import:
	FindActor (2 args)
	GetSceneByName (2 args)
	Teleport (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty()
0x1: Call2 0x4

0x2: Pop(0)
0x3: Return(); Pop(0)

0x4: PushEmpty(object, object, bool, cvector, cvector, object, object, bool, cvector, cvector)
0x5: Push("player")
0x6: @ FindActor(Stack[-6], Stack[-1])
0x7: Pop(1)
0x8: Push("test_scene")
0x9: @ GetSceneByName(Stack[-5], Stack[-1])
0xa: Pop(1)
0xb: Push("birth")
0xc: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0xd: Pop(1)
0xe: Push(Stack[-3])
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: @ Teleport(Stack[-5], Stack[-4], Stack[-2], Stack[-1])
0x11: Pop(0)
0x12: Return(); Pop(10)

0x13: Stack[-4] = 0
0x14: Stack[-5] = 0
