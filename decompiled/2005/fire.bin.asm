GlobalVarCount = 0

Strings:
	fire
	Can't find fire particle system
	AddSource
	Enable

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	FindParticleSystem (2 args)
	Trace (1 args)
	IsLoaded (1 args)

RunOp = 0xd
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x2d Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x33

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, object)
0xe: PushEmpty(bool)
0xf: Call2 0x33

0x10: Pop(0)
0x11: Pop(1); Push((bool) Stack[-1] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x13: PushEmpty()
0x14: Push(-0, 0); TaskCall(0)
0x15: Call2 0x0

0x16: Pop(-0, 0); TaskReturn
0x17: Pop(0)
0x18: Push("fire")
0x19: @ FindParticleSystem(Stack[-1], Stack[-2])
0x1a: Pop(1)
0x1b: Pop(0); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1d: Push("Can't find fire particle system")
0x1e: @ Trace(Stack[-1])
0x1f: Pop(1)
0x20: Return(); Pop(2)

0x21: Push(CVector(0.0, 0.0, 0.0))
0x22: Push(CVector(0.0, 1.0, 0.0))
0x23: Push((float)0.0)
0x24: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x25: Pop(3)
0x26: @@ Enable()
0x27: Pop(0)
0x28: @ Hold()
0x29: Pop(0)
0x2a: GOTO 0x28

0x2b: Return(); Pop(2)

0x2c: Stack[-1] = 0
0x2d: PushEmpty()
0x2e: Push(-0, 0); TaskCall(0)
0x2f: Call2 0x0

0x30: Pop(-0, 0); TaskReturn
0x31: Pop(0)
0x32: Return(); Pop(0)

0x33: PushEmpty(bool, bool)
0x34: @ IsLoaded(Stack[-1])
0x35: Pop(0)
0x36: Stack[-3] = Stack[-1]
0x37: Return(); Pop(2)

