GlobalVarCount = 0

Strings:
	fire
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
		EVENT_6 Op = 0x26 Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty(object, object)
0x7: PushEmpty(bool)
0x8: Call 0x2c

0x9: Pop(0)
0xa: Pop(1); Push((bool) Stack[-1] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xc: PushEmpty()
0xd: Push(-0, 0); TaskCall(0)
0xe: Call 0x0

0xf: Pop(-0, 0); TaskReturn
0x10: Pop(0)
0x11: Push("fire")
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
0x1f: @@ Enable()
0x20: Pop(0)
0x21: @ Hold()
0x22: Pop(0)
0x23: GOTO 0x21

0x24: Return(); Pop(2)

0x25: Stack[-1] = 0
0x26: PushEmpty()
0x27: Push(-0, 0); TaskCall(0)
0x28: Call 0x0

0x29: Pop(-0, 0); TaskReturn
0x2a: Pop(0)
0x2b: Return(); Pop(0)

0x2c: PushEmpty(bool, bool)
0x2d: @ IsLoaded(Stack[-1])
0x2e: Pop(0)
0x2f: Stack[-3] = Stack[-1]
0x30: Return(); Pop(2)

