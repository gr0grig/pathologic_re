GlobalVarCount = 0

Strings:
	escape
	intro
	exit
	player
	intro_theater
	Intro scene not found
	birth
	GetLocator
	exiting
	choose_pers.xml
	GetGroupActors
	Next
	off

Import:
	SetSaveProperty (2 args)
	RegisterKeyCallback (1 args)
	sync (0 args)
	PlaySharedSound (1 args)
	Sleep (1 args)
	Hold (0 args)
	FindActor (2 args)
	GetSceneByName (2 args)
	Trace (1 args)
	Teleport (4 args)
	RemoveWorld (0 args)
	ActivateInitGameOverride (1 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_24 Op = 0x20 Vars = (int)
		EVENT_26 Op = 0x3c Vars = (string)


0x0: Push((int) 0)
0x1: Push((int) 3)
0x2: @ SetSaveProperty(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: Push("escape")
0x5: @ RegisterKeyCallback(Stack[-1])
0x6: Pop(1)
0x7: PushEmpty()
0x8: Call2 0x26

0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Push("intro")
0xd: @ PlaySharedSound(Stack[-1])
0xe: Pop(1)
0xf: Push((float)188.0)
0x10: @ Sleep(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty()
0x13: Call2 0x4d

0x14: Pop(0)
0x15: Push((int) 2)
0x16: @ Sleep(Stack[-1])
0x17: Pop(1)
0x18: PushEmpty(string)
0x19: Stack[-1] = "exit"
0x1a: Call2 0x3c

0x1b: Pop(1)
0x1c: @ Hold()
0x1d: Pop(0)
0x1e: GOTO 0x1c

0x1f: Return(); Pop(0)

0x20: PushEmpty()
0x21: PushEmpty(string)
0x22: Stack[-1] = "exit"
0x23: Call2 0x3c

0x24: Pop(1)
0x25: Return(); Pop(0)

0x26: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x27: Push("player")
0x28: @ FindActor(Stack[-5], Stack[-1])
0x29: Pop(1)
0x2a: Push("intro_theater")
0x2b: @ GetSceneByName(Stack[-0], Stack[-1])
0x2c: Pop(1)
0x2d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2f: Push("Intro scene not found")
0x30: @ Trace(Stack[-1])
0x31: Pop(1)
0x32: Return(); Pop(8)

0x33: Push("birth")
0x34: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x35: Pop(1)
0x36: Push(Stack[-3])
0x37: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x38: @ Teleport(Stack[-4], Stack[-0], Stack[-2], Stack[-1])
0x39: Pop(0)
0x3a: Return(); Pop(8)

0x3b: Stack[-4] = 0
0x3c: PushEmpty()
0x3d: Push("exit")
0x3e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x40: PushEmpty()
0x41: Call2 0x44

0x42: Pop(0)
0x43: Return(); Pop(0)

0x44: Push("exiting")
0x45: @ Trace(Stack[-1])
0x46: Pop(1)
0x47: @ RemoveWorld()
0x48: Pop(0)
0x49: Push("choose_pers.xml")
0x4a: @ ActivateInitGameOverride(Stack[-1])
0x4b: Pop(1)
0x4c: Return(); Pop(0)

0x4d: PushEmpty(object, object, bool, object, object, bool)
0x4e: Push((int) 0)
0x4f: @@ GetGroupActors(Stack[-4], Stack[-1])
0x50: Pop(1)
0x51: @@ Next(Stack[-1], Stack[-2])
0x52: Pop(0)
0x53: Push(Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x55: Push(Stack[-2])
0x56: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x57: Push("off")
0x58: @ Trigger(Stack[-3], Stack[-1])
0x59: Pop(1)
0x5a: GOTO 0x51

0x5b: Return(); Pop(6)

0x5c: Stack[-2] = 0
0x5d: Stack[-3] = 0
