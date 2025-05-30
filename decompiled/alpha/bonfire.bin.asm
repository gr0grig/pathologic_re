GlobalVarCount = 0

Strings:
	bonfire
	Can't find fire particle system
	AddSource
	Enable

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	FindParticleSystem (2 args)
	Trace (1 args)
	IsLoaded (1 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x4e Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty(object, object)
0x7: PushEmpty(bool)
0x8: Call 0x54

0x9: Pop(0)
0xa: Pop(1); Push((bool) Stack[-1] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xc: PushEmpty()
0xd: Push(-0, 0); TaskCall(0)
0xe: Call 0x0

0xf: Pop(-0, 0); TaskReturn
0x10: Pop(0)
0x11: Push("bonfire")
0x12: @ FindParticleSystem(Stack[-1], Stack[-2])
0x13: Pop(1)
0x14: Pop(0); Push((bool) Stack[-1] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x16: Push("Can't find fire particle system")
0x17: @ Trace(Stack[-1])
0x18: Pop(1)
0x19: Return(); Pop(2)

0x1a: Push(CVector(0.0, 0.0, 0.0))
0x1b: Push(CVector(0.0, 1.0, 0.0))
0x1c: Push((float)0.0)
0x1d: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x1e: Pop(3)
0x1f: Push(CVector(10.0, 0.0, 0.0))
0x20: Push(CVector(0.0, 1.0, 0.0))
0x21: Push((float)0.0)
0x22: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x23: Pop(3)
0x24: Push(CVector(0.0, 0.0, 10.0))
0x25: Push(CVector(0.0, 1.0, 0.0))
0x26: Push((float)0.0)
0x27: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x28: Pop(3)
0x29: Push(CVector(-10.0, 0.0, 0.0))
0x2a: Push(CVector(0.0, 1.0, 0.0))
0x2b: Push((float)0.0)
0x2c: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x2d: Pop(3)
0x2e: Push(CVector(0.0, 0.0, -10.0))
0x2f: Push(CVector(0.0, 1.0, 0.0))
0x30: Push((float)0.0)
0x31: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x32: Pop(3)
0x33: Push(CVector(10.0, 0.0, 10.0))
0x34: Push(CVector(0.0, 1.0, 0.0))
0x35: Push((float)0.0)
0x36: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x37: Pop(3)
0x38: Push(CVector(-10.0, 0.0, -10.0))
0x39: Push(CVector(0.0, 1.0, 0.0))
0x3a: Push((float)0.0)
0x3b: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x3c: Pop(3)
0x3d: Push(CVector(-10.0, 0.0, 10.0))
0x3e: Push(CVector(0.0, 1.0, 0.0))
0x3f: Push((float)0.0)
0x40: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x41: Pop(3)
0x42: Push(CVector(10.0, 0.0, -10.0))
0x43: Push(CVector(0.0, 1.0, 0.0))
0x44: Push((float)0.0)
0x45: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x46: Pop(3)
0x47: @@ Enable()
0x48: Pop(0)
0x49: @ Hold()
0x4a: Pop(0)
0x4b: GOTO 0x49

0x4c: Return(); Pop(2)

0x4d: Stack[-1] = 0
0x4e: PushEmpty()
0x4f: Push(-0, 0); TaskCall(0)
0x50: Call 0x0

0x51: Pop(-0, 0); TaskReturn
0x52: Pop(0)
0x53: Return(); Pop(0)

0x54: PushEmpty(bool, bool)
0x55: @ IsLoaded(Stack[-1])
0x56: Pop(0)
0x57: Stack[-3] = Stack[-1]
0x58: Return(); Pop(2)

