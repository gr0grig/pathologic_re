GlobalVarCount = 0

Strings:
	world_min.xml
	player.xml

Import:
	NewGame (2 args)
	DestroyWindow (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: Push("world_min.xml")
0x1: Push("player.xml")
0x2: @ NewGame(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: @ DestroyWindow()
0x5: Pop(0)
0x6: Return(); Pop(0)

