GlobalVarCount = 0

Strings:
	intro
	player
	intro_theater
	Intro scene not found
	birth
	GetLocator
	exit
	exiting
	choose_pers.xml
	GetGroupActors
	Next
	off

Import:
	SetSaveProperty (2 args)
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
		EVENT_26 Op = 0x2c Vars = (string)


0x0: Push((int) 0)
0x1: Push((int) 3)
0x2: @ SetSaveProperty(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty()
0x5: Call2 0x16

0x6: Pop(0)
0x7: @ sync()
0x8: Pop(0)
0x9: Push("intro")
0xa: @ PlaySharedSound(Stack[-1])
0xb: Pop(1)
0xc: Push((float)188.0)
0xd: @ Sleep(Stack[-1])
0xe: Pop(1)
0xf: PushEmpty()
0x10: Call2 0x3d

0x11: Pop(0)
0x12: @ Hold()
0x13: Pop(0)
0x14: GOTO 0x12

0x15: Return(); Pop(0)

0x16: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x17: Push("player")
0x18: @ FindActor(Stack[-5], Stack[-1])
0x19: Pop(1)
0x1a: Push("intro_theater")
0x1b: @ GetSceneByName(Stack[-0], Stack[-1])
0x1c: Pop(1)
0x1d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1e: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1f: Push("Intro scene not found")
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
0x2d: Push("exit")
0x2e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x30: PushEmpty()
0x31: Call2 0x34

0x32: Pop(0)
0x33: Return(); Pop(0)

0x34: Push("exiting")
0x35: @ Trace(Stack[-1])
0x36: Pop(1)
0x37: @ RemoveWorld()
0x38: Pop(0)
0x39: Push("choose_pers.xml")
0x3a: @ ActivateInitGameOverride(Stack[-1])
0x3b: Pop(1)
0x3c: Return(); Pop(0)

0x3d: PushEmpty(object, object, bool, object, object, bool)
0x3e: Push((int) 0)
0x3f: @@ GetGroupActors(Stack[-4], Stack[-1])
0x40: Pop(1)
0x41: @@ Next(Stack[-1], Stack[-2])
0x42: Pop(0)
0x43: Push(Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x45: Push(Stack[-2])
0x46: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x47: Push("off")
0x48: @ Trigger(Stack[-3], Stack[-1])
0x49: Pop(1)
0x4a: GOTO 0x41

0x4b: Return(); Pop(6)

0x4c: Stack[-2] = 0
0x4d: Stack[-3] = 0
