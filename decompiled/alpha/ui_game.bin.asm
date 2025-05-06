GlobalVarCount = 0

Strings:
	default
	menumusic
	start
	world_danko.xml
	player_danko.xml
	loadgame_button
	savegame_button
	danko_button

Import:
	ShowCursor (0 args)
	SetOwnerDraw (1 args)
	SetCursor (1 args)
	SetBackground (1 args)
	PlaySound (1 args)
	ProcessEvents (0 args)
	ShowCursor (1 args)
	NewGame (2 args)
	DestroyWindow (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x11 Vars = ()
		EVENT_200 Op = 0x12 Vars = (int, string, object)


0x0: @ ShowCursor()
0x1: Pop(0)
0x2: Push((bool) 0)
0x3: @ SetOwnerDraw(Stack[-1])
0x4: Pop(1)
0x5: Push("default")
0x6: @ SetCursor(Stack[-1])
0x7: Pop(1)
0x8: Push("default")
0x9: @ SetBackground(Stack[-1])
0xa: Pop(1)
0xb: Push("menumusic")
0xc: @ PlaySound(Stack[-1])
0xd: Pop(1)
0xe: @ ProcessEvents()
0xf: Pop(0)
0x10: Return(); Pop(0)

0x11: Return(); Pop(0)

0x12: PushEmpty()
0x13: Push("start")
0x14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x16: Push((bool) 0)
0x17: @ ShowCursor(Stack[-1])
0x18: Pop(1)
0x19: Push("world_danko.xml")
0x1a: Push("player_danko.xml")
0x1b: @ NewGame(Stack[-2], Stack[-1])
0x1c: Pop(2)
0x1d: @ DestroyWindow()
0x1e: Pop(0)
0x1f: Push("loadgame_button")
0x20: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: @ DestroyWindow()
0x23: Pop(0)
0x24: Push("savegame_button")
0x25: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x27: @ DestroyWindow()
0x28: Pop(0)
0x29: Push("danko_button")
0x2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x2c: Push((bool) 0)
0x2d: @ ShowCursor(Stack[-1])
0x2e: Pop(1)
0x2f: Push("world_danko.xml")
0x30: Push("player_danko.xml")
0x31: @ NewGame(Stack[-2], Stack[-1])
0x32: Pop(2)
0x33: @ DestroyWindow()
0x34: Pop(0)
0x35: Return(); Pop(0)

