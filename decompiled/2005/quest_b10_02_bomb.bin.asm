GlobalVarCount = 0

Strings:
	health
	SetProperty
	scripted
	fire.xml
	explode
	cleanup
	restore

Import:
	SetVisibility (1 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
	GetPosition (1 args)
	AddActorByType (6 args)
	PlaySound (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_10 Op = 0x7 Vars = (object)
		EVENT_26 Op = 0x23 Vars = (string)
		EVENT_6 Op = 0x3f Vars = ()


0x0: Push((bool) 1)
0x1: @ SetVisibility(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call2 0x1f

0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: PushEmpty(bool, object, cvector, object, bool, object, cvector, object)
0x8: @ IsPlayerActor(Stack[-9], Stack[-4])
0x9: Pop(0)
0xa: Push(Stack[-4])
0xb: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0xc: Push("health")
0xd: Push((int) 0)
0xe: @@ SetProperty(Stack[-2], Stack[-1])
0xf: Pop(2)
0x10: @ GetScene(Stack[-3])
0x11: Pop(0)
0x12: @ GetPosition(Stack[-2])
0x13: Pop(0)
0x14: Push("scripted")
0x15: Push(CVector(0.0, 0.0, 0.0))
0x16: Push("fire.xml")
0x17: @ AddActorByType(Stack[-4], Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x18: Pop(3)
0x19: Push("explode")
0x1a: @ PlaySound(Stack[-1])
0x1b: Pop(1)
0x1c: Stack[-1] = 0
0x1d: Stack[-3] = 0
0x1e: Return(); Pop(8)

0x1f: @ Hold()
0x20: Pop(0)
0x21: GOTO 0x1f

0x22: Return(); Pop(0)

0x23: PushEmpty(bool, bool)
0x24: Push("cleanup")
0x25: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x27: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x28: @ IsLoaded(Stack[-1])
0x29: Pop(0)
0x2a: PushEmpty(bool)
0x2b: Stack[-1] = (bool) 0
0x2c: Pop(0); Push((bool) Stack[-2] == 0)
0x2d: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2e: PushEmpty(bool)
0x2f: Call2 0x4f

0x30: Pop(0)
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: Stack[-1] = (bool) 1
0x33: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x34: PushEmpty(object)
0x35: Call2 0x51

0x36: Pop(0)
0x37: @ RemoveActor(Stack[-1])
0x38: Pop(1)
0x39: GOTO 0x3e

0x3a: Push("restore")
0x3b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3e: Return(); Pop(2)

0x3f: PushEmpty(bool)
0x40: Stack[-1] = (bool) 0
0x41: Push( Stack[0 + Tasks[-1].StackPointer] )
0x42: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x43: PushEmpty(bool)
0x44: Call2 0x4f

0x45: Pop(0)
0x46: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x47: Stack[-1] = (bool) 1
0x48: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x49: PushEmpty(object)
0x4a: Call2 0x51

0x4b: Pop(0)
0x4c: @ RemoveActor(Stack[-1])
0x4d: Pop(1)
0x4e: Return(); Pop(0)

0x4f: Stack[-1] = (bool) 1
0x50: Return(); Pop(0)

0x51: PushEmpty(object, object)
0x52: @ self(Stack[-1])
0x53: Pop(0)
0x54: Stack[-3] = Stack[-1]
0x55: Return(); Pop(2)

0x56: Stack[-1] = 0
