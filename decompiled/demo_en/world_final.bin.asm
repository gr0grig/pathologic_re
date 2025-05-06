GlobalVarCount = 0

Strings:
	World inited
	final_quest_actor
	final_quest_actor.xml
	player
	final_theater
	Final scene not found
	birth
	GetLocator
	world trigger 
	open
	exit
	gameover_credits.xml
	GetGroupActors
	door begin
	Next
	door
	exiting from game
	whiten

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
0x1: Push("World inited")
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
0xd: Push("final_quest_actor")
0xe: Push("final_quest_actor.xml")
0xf: @ AddBlankActorFromXml(Stack[-3], Stack[-0], Stack[-2], Stack[-1])
0x10: Pop(2)
0x11: @ Hold()
0x12: Pop(0)
0x13: GOTO 0x11

0x14: Return(); Pop(2)

0x15: Stack[-1] = 0
0x16: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x17: Push("player")
0x18: @ FindActor(Stack[-5], Stack[-1])
0x19: Pop(1)
0x1a: Push("final_theater")
0x1b: @ GetSceneByName(Stack[-0], Stack[-1])
0x1c: Pop(1)
0x1d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1e: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1f: Push("Final scene not found")
0x20: @ Trace(Stack[-1])
0x21: Pop(1)
0x22: Return(); Pop(8)

0x23: Push("birth")
0x24: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x25: Pop(1)
0x26: Push(Stack[-3])
0x27: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x28: @ Teleport(Stack[-4], Stack[-0], Stack[-2], Stack[-1])
0x29: Pop(0)
0x2a: Return(); Pop(8)

0x2b: Stack[-4] = 0
0x2c: PushEmpty()
0x2d: Push("world trigger ")
0x2e: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2f: @ Trace(Stack[-1])
0x30: Pop(1)
0x31: Push("open")
0x32: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x34: PushEmpty()
0x35: Call2 0x58

0x36: Pop(0)
0x37: GOTO 0x40

0x38: Push("exit")
0x39: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3b: @ RemoveWorld()
0x3c: Pop(0)
0x3d: Push("gameover_credits.xml")
0x3e: @ GameOver(Stack[-1])
0x3f: Pop(1)
0x40: Return(); Pop(0)

0x41: PushEmpty(object, object, bool, object, object, bool)
0x42: Push((int) 0)
0x43: @@ GetGroupActors(Stack[-4], Stack[-1])
0x44: Pop(1)
0x45: Push("door begin")
0x46: @ Trace(Stack[-1])
0x47: Pop(1)
0x48: @@ Next(Stack[-1], Stack[-2])
0x49: Pop(0)
0x4a: Push(Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4c: Push(Stack[-3])
0x4d: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x4e: Push("door")
0x4f: @ Trace(Stack[-1])
0x50: Pop(1)
0x51: Push("open")
0x52: @ Trigger(Stack[-3], Stack[-1])
0x53: Pop(1)
0x54: GOTO 0x48

0x55: Return(); Pop(6)

0x56: Stack[-2] = 0
0x57: Stack[-3] = 0
0x58: Push("exiting from game")
0x59: @ Trace(Stack[-1])
0x5a: Pop(1)
0x5b: PushEmpty()
0x5c: Call2 0x41

0x5d: Pop(0)
0x5e: PushEmpty(bool, string, string)
0x5f: Stack[-2] = "final_quest_actor"
0x60: Stack[-1] = "whiten"
0x61: Call2 0x64

0x62: Pop(3)
0x63: Return(); Pop(0)

0x64: PushEmpty(object, object)
0x65: @ FindActor(Stack[-1], Stack[-4])
0x66: Pop(0)
0x67: Pop(0); Push((bool) Stack[-1] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x69: Stack[-5] = (bool) 0
0x6a: Return(); Pop(2)

0x6b: @ Trigger(Stack[-1], Stack[-3])
0x6c: Pop(0)
0x6d: Stack[-5] = (bool) 1
0x6e: Return(); Pop(2)

0x6f: Stack[-1] = 0
