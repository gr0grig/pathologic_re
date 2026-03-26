GlobalVarCount = 0

Strings:
	W:default
	W:menumusic
	W:start
	W:world_danko.xml
	W:player_danko.xml
	W:loadgame_button
	W:savegame_button
	W:danko_button
// @pool_raw:640065006600610075006c00740000006d0065006e0075006d007500730069006300000073007400610072007400000077006f0072006c0064005f00640061006e006b006f002e0078006d006c00000070006c0061007900650072005f00640061006e006b006f002e0078006d006c0000006c006f0061006400670061006d0065005f0062007500740074006f006e0000007300610076006500670061006d0065005f0062007500740074006f006e000000640061006e006b006f005f0062007500740074006f006e000000

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
0x5: Push("default") // @poff=0
0x6: @ SetCursor(Stack[-1])
0x7: Pop(1)
0x8: Push("default") // @poff=0
0x9: @ SetBackground(Stack[-1])
0xa: Pop(1)
0xb: Push("menumusic") // @poff=16
0xc: @ PlaySound(Stack[-1])
0xd: Pop(1)
0xe: @ ProcessEvents()
0xf: Pop(0)
0x10: Return(); Pop(0)

0x11: Return(); Pop(0)

0x12: PushEmpty()
0x13: Push("start") // @poff=36
0x14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x16: Push((bool) 0)
0x17: @ ShowCursor(Stack[-1])
0x18: Pop(1)
0x19: Push("world_danko.xml") // @poff=48
0x1a: Push("player_danko.xml") // @poff=80
0x1b: @ NewGame(Stack[-2], Stack[-1])
0x1c: Pop(2)
0x1d: @ DestroyWindow()
0x1e: Pop(0)
0x1f: Push("loadgame_button") // @poff=114
0x20: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: @ DestroyWindow()
0x23: Pop(0)
0x24: Push("savegame_button") // @poff=146
0x25: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x27: @ DestroyWindow()
0x28: Pop(0)
0x29: Push("danko_button") // @poff=178
0x2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x2c: Push((bool) 0)
0x2d: @ ShowCursor(Stack[-1])
0x2e: Pop(1)
0x2f: Push("world_danko.xml") // @poff=48
0x30: Push("player_danko.xml") // @poff=80
0x31: @ NewGame(Stack[-2], Stack[-1])
0x32: Pop(2)
0x33: @ DestroyWindow()
0x34: Pop(0)
0x35: Return(); Pop(0)

