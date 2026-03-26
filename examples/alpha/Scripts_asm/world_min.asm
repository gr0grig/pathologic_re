GlobalVarCount = 0

Strings:
	W:player
	W:test_scene
	W:birth
	A:GetLocator
// @pool_raw:70006c006100790065007200000074006500730074005f007300630065006e00650000006200690072007400680000004765744c6f6361746f7200

Import:
	FindActor (2 args)
	GetSceneByName (2 args)
	Teleport (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty()
0x1: Call 0x4

0x2: Pop(0)
0x3: Return(); Pop(0)

0x4: PushEmpty(object, object, bool, cvector, cvector, object, object, bool, cvector, cvector)
0x5: Push("player") // @poff=0
0x6: @ FindActor(Stack[-6], Stack[-1])
0x7: Pop(1)
0x8: Push("test_scene") // @poff=14
0x9: @ GetSceneByName(Stack[-5], Stack[-1])
0xa: Pop(1)
0xb: Push("birth") // @poff=36
0xc: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2]); Obj=5 // @poff=48
0xd: Pop(1)
0xe: Push(Stack[-3])
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: @ Teleport(Stack[-5], Stack[-4], Stack[-2], Stack[-1])
0x11: Pop(0)
0x12: Return(); Pop(10)

0x13: Stack[-4] = 0
0x14: Stack[-5] = 0
