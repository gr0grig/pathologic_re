GlobalVarCount = 0

Strings:
	GetRegionByPt
	Invalid bonfire region
	_light
	light_fire.xml
	scripted
	Region
	State

Import:
	SetVisibility (1 args)
	Hold (0 args)
	GetPosition (1 args)
	GetScene (1 args)
	Trace (1 args)
	GetVariable (2 args)
	GetActorName (1 args)
	AddActor (6 args)
	AddActorByType (6 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_5 Op = 0x7 Vars = ()
		EVENT_6 Op = 0x37 Vars = ()


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty(cvector, object, int, int, string, cvector, object, int, int, string)
0x8: @ GetPosition(Stack[-5])
0x9: Pop(0)
0xa: @ GetScene(Stack[-4])
0xb: Pop(0)
0xc: @@ GetRegionByPt(Stack[-3], Stack[-5])
0xd: Pop(0)
0xe: Push((int) -1)
0xf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x11: Push("Invalid bonfire region")
0x12: @ Trace(Stack[-1])
0x13: Pop(1)
0x14: Return(); Pop(10)

0x15: PushEmpty(string, int)
0x16: Stack[-1] = Stack[-5]
0x17: Call2 0x40

0x18: Pop(1)
0x19: @ GetVariable(Stack[-1], Stack[-3])
0x1a: Pop(1)
0x1b: Push((int) 3)
0x1c: Stack[-3] = Stack[-3] & Stack[-1]; Pop(1);
0x1d: PushEmpty(bool)
0x1e: Stack[-1] = (bool) 1
0x1f: Push((int) 1)
0x20: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x22: Push((int) 2)
0x23: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x25: Stack[-1] = (bool) 0
0x26: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x27: @ GetActorName(Stack[-1])
0x28: Pop(0)
0x29: Push("_light")
0x2a: Pop(1); Push(Stack[-2] + Stack[-1]);
0x2b: Push(CVector(0.0, 0.0, 0.0))
0x2c: Push(CVector(0.0, 0.0, 1.0))
0x2d: Push("light_fire.xml")
0x2e: @ AddActor(Stack[-0], Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1])
0x2f: Pop(4)
0x30: Push("scripted")
0x31: Push(CVector(0.0, 0.0, 1.0))
0x32: Push("fire.xml")
0x33: @ AddActorByType(Stack[-1], Stack[-3], Stack[-7], Stack[-8], Stack[-2], Stack[-1])
0x34: Pop(3)
0x35: Return(); Pop(10)

0x36: Stack[-4] = 0
0x37: Push( Stack[0 + Tasks[-1].StackPointer] )
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: @ RemoveActor(Stack[-0])
0x3a: Pop(0)
0x3b: Push( Stack[1 + Tasks[-1].StackPointer] )
0x3c: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3d: @ RemoveActor(Stack[-1])
0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty()
0x41: Push("Region")
0x42: Pop(1); Push(Stack[-1] + Stack[-2]);
0x43: Push("State")
0x44: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x45: Return(); Pop(0)

