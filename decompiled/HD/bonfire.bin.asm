GlobalVarCount = 0

Strings:
	bonfire
	Can't find fire particle system
	AddSource
	Enable
	fire_loop

Import:
	Hold (0 args)
	FindParticleSystem (2 args)
	Trace (1 args)
	PlayLoopedGlobalSound (3 args)
	StopGroup0 (0 args)
	IsLoaded (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x4c Vars = ()


0x0: PushEmpty(object, object, object, object)
0x1: PushEmpty(bool)
0x2: Call2 0x4f

0x3: Pop(0)
0x4: Pop(1); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x6: @ Hold()
0x7: Pop(0)
0x8: Push("bonfire")
0x9: @ FindParticleSystem(Stack[-1], Stack[-3])
0xa: Pop(1)
0xb: Pop(0); Push((bool) Stack[-2] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xd: Push("Can't find fire particle system")
0xe: @ Trace(Stack[-1])
0xf: Pop(1)
0x10: Return(); Pop(4)

0x11: Push(CVector(0.0, 0.0, 0.0))
0x12: Push(CVector(0.0, 1.0, 0.0))
0x13: Push((float)0.0)
0x14: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x15: Pop(3)
0x16: Push(CVector(10.0, 0.0, 0.0))
0x17: Push(CVector(0.0, 1.0, 0.0))
0x18: Push((float)0.0)
0x19: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x1a: Pop(3)
0x1b: Push(CVector(0.0, 0.0, 10.0))
0x1c: Push(CVector(0.0, 1.0, 0.0))
0x1d: Push((float)0.0)
0x1e: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x1f: Pop(3)
0x20: Push(CVector(-10.0, 0.0, 0.0))
0x21: Push(CVector(0.0, 1.0, 0.0))
0x22: Push((float)0.0)
0x23: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x24: Pop(3)
0x25: Push(CVector(0.0, 0.0, -10.0))
0x26: Push(CVector(0.0, 1.0, 0.0))
0x27: Push((float)0.0)
0x28: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x29: Pop(3)
0x2a: Push(CVector(10.0, 0.0, 10.0))
0x2b: Push(CVector(0.0, 1.0, 0.0))
0x2c: Push((float)0.0)
0x2d: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x2e: Pop(3)
0x2f: Push(CVector(-10.0, 0.0, -10.0))
0x30: Push(CVector(0.0, 1.0, 0.0))
0x31: Push((float)0.0)
0x32: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x33: Pop(3)
0x34: Push(CVector(-10.0, 0.0, 10.0))
0x35: Push(CVector(0.0, 1.0, 0.0))
0x36: Push((float)0.0)
0x37: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x38: Pop(3)
0x39: Push(CVector(10.0, 0.0, -10.0))
0x3a: Push(CVector(0.0, 1.0, 0.0))
0x3b: Push((float)0.0)
0x3c: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x3d: Pop(3)
0x3e: @@ Enable()
0x3f: Pop(0)
0x40: Push((bool) 1)
0x41: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x42: Push("fire_loop")
0x43: Push(CVector(0.0, 10.0, 0.0))
0x44: @ PlayLoopedGlobalSound(Stack[-3], Stack[-2], Stack[-1])
0x45: Pop(2)
0x46: @ Hold()
0x47: Pop(0)
0x48: Stack[-1] = 0
0x49: GOTO 0x40

0x4a: Return(); Pop(4)

0x4b: Stack[-2] = 0
0x4c: @ StopGroup0()
0x4d: Pop(0)
0x4e: Return(); Pop(0)

0x4f: PushEmpty(bool, bool)
0x50: @ IsLoaded(Stack[-1])
0x51: Pop(0)
0x52: Stack[-3] = Stack[-1]
0x53: Return(); Pop(2)

