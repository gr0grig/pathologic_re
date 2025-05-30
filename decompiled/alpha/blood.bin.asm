GlobalVarCount = 0

Strings:
	blood
	Enable
	AddSource
	Fade

Import:
	SetDeathStateAndRemove (0 args)
	FindParticleSystem (2 args)
	Sleep (1 args)
	sync (0 args)
	IsLoaded (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_6 Op = 0x20 Vars = ()


0x0: PushEmpty(object, object)
0x1: PushEmpty(bool)
0x2: Call 0x25

0x3: Pop(0)
0x4: Pop(1); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x6: @ SetDeathStateAndRemove()
0x7: Pop(0)
0x8: Return(); Pop(2)

0x9: Push("blood")
0xa: @ FindParticleSystem(Stack[-1], Stack[-2])
0xb: Pop(1)
0xc: @@ Enable()
0xd: Pop(0)
0xe: Push(CVector(0.0, 0.0, 0.0))
0xf: Push(CVector(0.0, 400.0, 0.0))
0x10: Push((float)1.5)
0x11: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x12: Pop(3)
0x13: Push((float)0.5)
0x14: @ Sleep(Stack[-1])
0x15: Pop(1)
0x16: Push((bool) 1)
0x17: @@ Fade(Stack[-1])
0x18: Pop(1)
0x19: Push((float)1.0)
0x1a: @ Sleep(Stack[-1])
0x1b: Pop(1)
0x1c: @ SetDeathStateAndRemove()
0x1d: Pop(0)
0x1e: Return(); Pop(2)

0x1f: Stack[-1] = 0
0x20: @ SetDeathStateAndRemove()
0x21: Pop(0)
0x22: @ sync()
0x23: Pop(0)
0x24: Return(); Pop(0)

0x25: PushEmpty(bool, bool)
0x26: @ IsLoaded(Stack[-1])
0x27: Pop(0)
0x28: Stack[-3] = Stack[-1]
0x29: Return(); Pop(2)

