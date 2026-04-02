GlobalVarCount = 0

Strings:
	W:World inited
	W:final_quest_actor
	W:final_quest_actor.xml
	W:player
	W:final_theater
	W:Final scene not found
	W:birth
	A:GetLocator
	W:world trigger 
	W:open
	W:exit
	W:gameover_credits.xml
	A:GetGroupActors
	W:door begin
	A:Next
	W:door
	W:exiting from game
	W:whiten
// @pool_raw:57006f0072006c006400200069006e0069007400650064000000660069006e0061006c005f00710075006500730074005f006100630074006f0072000000660069006e0061006c005f00710075006500730074005f006100630074006f0072002e0078006d006c00000070006c0061007900650072000000660069006e0061006c005f0074006800650061007400650072000000460069006e0061006c0020007300630065006e00650020006e006f007400200066006f0075006e00640000006200690072007400680000004765744c6f6361746f720077006f0072006c00640020007400720069006700670065007200200000006f00700065006e00000065007800690074000000670061006d0065006f007600650072005f0063007200650064006900740073002e0078006d006c00000047657447726f75704163746f72730064006f006f007200200062006500670069006e0000004e6578740064006f006f0072000000650078006900740069006e0067002000660072006f006d002000670061006d0065000000770068006900740065006e000000

Import:
	Trace (1 args)
	SetSaveProperty (2 args)
	sync (0 args)
	AddBlankActorFromXml (4 args)
	Hold (0 args)
	FindActor (2 args)
	GetSceneByName (2 args)
	Teleport (4 args)
	RemoveWorld (0 args)
	GameOver (1 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x2c Vars = (string)


0x0: PushEmpty(object, object)
0x1: Push("World inited") // @poff=0
0x2: @ Trace(Stack[-1])
0x3: Pop(1)
0x4: Push((int) 0)
0x5: Push((int) 4)
0x6: @ SetSaveProperty(Stack[-2], Stack[-1])
0x7: Pop(2)
0x8: PushEmpty()
0x9: Call2 0x16

0xa: Pop(0)
0xb: @ sync()
0xc: Pop(0)
0xd: Push("final_quest_actor") // @poff=26
0xe: Push("final_quest_actor.xml") // @poff=62
0xf: @ AddBlankActorFromXml(Stack[-3], Stack[-0]T, Stack[-2], Stack[-1])
0x10: Pop(2)
0x11: @ Hold()
0x12: Pop(0)
0x13: GOTO 0x11

0x14: Return(); Pop(2)

0x15: Stack[-1] = 0
0x16: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x17: Push("player") // @poff=106
0x18: @ FindActor(Stack[-5], Stack[-1])
0x19: Pop(1)
0x1a: Push("final_theater") // @poff=120
0x1b: @ GetSceneByName(Stack[-0]T, Stack[-1])
0x1c: Pop(1)
0x1d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1e: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1f: Push("Final scene not found") // @poff=148
0x20: @ Trace(Stack[-1])
0x21: Pop(1)
0x22: Return(); Pop(8)

0x23: Push("birth") // @poff=192
0x24: @@@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2]); Obj=0 // @poff=204
0x25: Pop(1)
0x26: Push(Stack[-3])
0x27: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x28: @ Teleport(Stack[-4], Stack[-0]T, Stack[-2], Stack[-1])
0x29: Pop(0)
0x2a: Return(); Pop(8)

0x2b: Stack[-4] = 0
0x2c: PushEmpty()
0x2d: Push("world trigger ") // @poff=215
0x2e: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2f: @ Trace(Stack[-1])
0x30: Pop(1)
0x31: Push("open") // @poff=245
0x32: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x34: PushEmpty()
0x35: Call2 0x58

0x36: Pop(0)
0x37: GOTO 0x40

0x38: Push("exit") // @poff=255
0x39: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3b: @ RemoveWorld()
0x3c: Pop(0)
0x3d: Push("gameover_credits.xml") // @poff=265
0x3e: @ GameOver(Stack[-1])
0x3f: Pop(1)
0x40: Return(); Pop(0)

0x41: PushEmpty(object, object, bool, object, object, bool)
0x42: Push((int) 0)
0x43: @@@ GetGroupActors(Stack[-4], Stack[-1]); Obj=0 // @poff=307
0x44: Pop(1)
0x45: Push("door begin") // @poff=322
0x46: @ Trace(Stack[-1])
0x47: Pop(1)
0x48: @@ Next(Stack[-1], Stack[-2]); Obj=3 // @poff=344
0x49: Pop(0)
0x4a: Push(Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4c: Push(Stack[-3])
0x4d: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x4e: Push("door") // @poff=349
0x4f: @ Trace(Stack[-1])
0x50: Pop(1)
0x51: Push("open") // @poff=245
0x52: @ Trigger(Stack[-3], Stack[-1])
0x53: Pop(1)
0x54: GOTO 0x48

0x55: Return(); Pop(6)

0x56: Stack[-2] = 0
0x57: Stack[-3] = 0
0x58: Push("exiting from game") // @poff=359
0x59: @ Trace(Stack[-1])
0x5a: Pop(1)
0x5b: PushEmpty()
0x5c: Call2 0x41

0x5d: Pop(0)
0x5e: PushEmpty(bool, string, string)
0x5f: Stack[-2] = "final_quest_actor" // @poff=26
0x60: Stack[-1] = "whiten" // @poff=395
0x61: Call2 0x64

0x62: Pop(3)
0x63: Return(); Pop(0)

0x64: PushEmpty(object, object)
0x65: @ FindActor(Stack[-1], Stack[-4])
0x66: Pop(0)
0x67: Pop(0); PushNull((bool) Stack[-1] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x69: Stack[-5] = (bool) 0
0x6a: Return(); Pop(2)

0x6b: @ Trigger(Stack[-1], Stack[-3])
0x6c: Pop(0)
0x6d: Stack[-5] = (bool) 1
0x6e: Return(); Pop(2)

0x6f: Stack[-1] = 0
