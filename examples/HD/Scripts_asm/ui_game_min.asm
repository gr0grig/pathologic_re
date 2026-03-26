GlobalVarCount = 0

Strings:
	W:world_min.xml
	W:player.xml
// @pool_raw:77006f0072006c0064005f006d0069006e002e0078006d006c00000070006c0061007900650072002e0078006d006c000000

Import:
	NewGame (2 args)
	DestroyWindow (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: Push("world_min.xml") // @poff=0
0x1: Push("player.xml") // @poff=28
0x2: @ NewGame(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: @ DestroyWindow()
0x5: Pop(0)
0x6: Return(); Pop(0)

