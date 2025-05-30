GlobalVarCount = 1
	G_VAR_0 int Material

Strings:
	richochet
	Enable
	AddSource
	Fade

Import:
	RemoveActor (1 args)
	FindParticleSystem (2 args)
	Sleep (1 args)
	sync (0 args)
	IsLoaded (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_6 Op = 0x26 Vars = ()


0x0: PushEmpty(object, object)
0x1: PushEmpty(bool)
0x2: Call2 0x2e

0x3: Pop(0)
0x4: Pop(1); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x6: PushEmpty(object)
0x7: Call2 0x33

0x8: Pop(0)
0x9: @ RemoveActor(Stack[-1])
0xa: Pop(1)
0xb: Return(); Pop(2)

0xc: Push("richochet")
0xd: @ FindParticleSystem(Stack[-1], Stack[-2])
0xe: Pop(1)
0xf: @@ Enable()
0x10: Pop(0)
0x11: Push(CVector(0.0, 0.0, 0.0))
0x12: Push(CVector(0.0, 400.0, 0.0))
0x13: Push((float)1.5)
0x14: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x15: Pop(3)
0x16: Push((float)0.5)
0x17: @ Sleep(Stack[-1])
0x18: Pop(1)
0x19: Push((bool) 1)
0x1a: @@ Fade(Stack[-1])
0x1b: Pop(1)
0x1c: Push((float)0.5)
0x1d: @ Sleep(Stack[-1])
0x1e: Pop(1)
0x1f: PushEmpty(object)
0x20: Call2 0x33

0x21: Pop(0)
0x22: @ RemoveActor(Stack[-1])
0x23: Pop(1)
0x24: Return(); Pop(2)

0x25: Stack[-1] = 0
0x26: PushEmpty(object)
0x27: Call2 0x33

0x28: Pop(0)
0x29: @ RemoveActor(Stack[-1])
0x2a: Pop(1)
0x2b: @ sync()
0x2c: Pop(0)
0x2d: Return(); Pop(0)

0x2e: PushEmpty(bool, bool)
0x2f: @ IsLoaded(Stack[-1])
0x30: Pop(0)
0x31: Stack[-3] = Stack[-1]
0x32: Return(); Pop(2)

0x33: PushEmpty(object, object)
0x34: @ self(Stack[-1])
0x35: Pop(0)
0x36: Stack[-3] = Stack[-1]
0x37: Return(); Pop(2)

0x38: Stack[-1] = 0
