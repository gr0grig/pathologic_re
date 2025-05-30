GlobalVarCount = 1
	G_VAR_0 int Material

Strings:
	smoke
	Enable
	AddSource

Import:
	RemoveActor (1 args)
	FindParticleSystem (2 args)
	Hold (0 args)
	sync (0 args)
	IsLoaded (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_6 Op = 0x2f Vars = ()


0x0: PushEmpty(object, object)
0x1: PushEmpty(bool)
0x2: Call2 0x37

0x3: Pop(0)
0x4: Pop(1); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x6: PushEmpty(object)
0x7: Call2 0x3c

0x8: Pop(0)
0x9: @ RemoveActor(Stack[-1])
0xa: Pop(1)
0xb: Return(); Pop(2)

0xc: Push("smoke")
0xd: @ FindParticleSystem(Stack[-1], Stack[-2])
0xe: Pop(1)
0xf: @@ Enable()
0x10: Pop(0)
0x11: Push(CVector(0.0, 0.0, 0.0))
0x12: Push(CVector(0.0, 0.0, 0.0))
0x13: Push((float)1.5)
0x14: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x15: Pop(3)
0x16: Push(CVector(150.0, 0.0, 150.0))
0x17: Push(CVector(0.0, 0.0, 0.0))
0x18: Push((float)1.5)
0x19: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x1a: Pop(3)
0x1b: Push(CVector(-150.0, 0.0, -150.0))
0x1c: Push(CVector(0.0, 0.0, 0.0))
0x1d: Push((float)1.5)
0x1e: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x1f: Pop(3)
0x20: Push(CVector(-150.0, 0.0, 150.0))
0x21: Push(CVector(0.0, 0.0, 0.0))
0x22: Push((float)1.5)
0x23: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x24: Pop(3)
0x25: Push(CVector(150.0, 0.0, -150.0))
0x26: Push(CVector(0.0, 0.0, 0.0))
0x27: Push((float)1.5)
0x28: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x29: Pop(3)
0x2a: @ Hold()
0x2b: Pop(0)
0x2c: GOTO 0x2a

0x2d: Return(); Pop(2)

0x2e: Stack[-1] = 0
0x2f: PushEmpty(object)
0x30: Call2 0x3c

0x31: Pop(0)
0x32: @ RemoveActor(Stack[-1])
0x33: Pop(1)
0x34: @ sync()
0x35: Pop(0)
0x36: Return(); Pop(0)

0x37: PushEmpty(bool, bool)
0x38: @ IsLoaded(Stack[-1])
0x39: Pop(0)
0x3a: Stack[-3] = Stack[-1]
0x3b: Return(); Pop(2)

0x3c: PushEmpty(object, object)
0x3d: @ self(Stack[-1])
0x3e: Pop(0)
0x3f: Stack[-3] = Stack[-1]
0x40: Return(); Pop(2)

0x41: Stack[-1] = 0
