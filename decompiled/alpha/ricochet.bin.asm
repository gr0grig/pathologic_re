GlobalVarCount = 1
	G_VAR_0 int Material

Strings:
	richochet
	Enable
	AddSource
	Fade
	wood
	metal
	ground
	stone

Import:
	SetDeathStateAndRemove (0 args)
	PlayGlobalSound (3 args)
	FindParticleSystem (2 args)
	Sleep (1 args)
	sync (0 args)
	IsLoaded (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_6 Op = 0x2a Vars = ()


0x0: PushEmpty(object, object)
0x1: PushEmpty(bool)
0x2: Call 0x43

0x3: Pop(0)
0x4: Pop(1); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x6: @ SetDeathStateAndRemove()
0x7: Pop(0)
0x8: Return(); Pop(2)

0x9: PushEmpty(string, int)
0xa: Push(GlobalVars[0])
0xb: Stack[-2] = Stack[-1]
0xc: Pop(1)
0xd: Call 0x2f

0xe: Pop(1)
0xf: Push(CVector(0.0, 0.0, 0.0))
0x10: Push((int) 500)
0x11: @ PlayGlobalSound(Stack[-3], Stack[-2], Stack[-1])
0x12: Pop(3)
0x13: Push("richochet")
0x14: @ FindParticleSystem(Stack[-1], Stack[-2])
0x15: Pop(1)
0x16: @@ Enable()
0x17: Pop(0)
0x18: Push(CVector(0.0, 0.0, 0.0))
0x19: Push(CVector(0.0, 400.0, 0.0))
0x1a: Push((float)1.5)
0x1b: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x1c: Pop(3)
0x1d: Push((float)0.5)
0x1e: @ Sleep(Stack[-1])
0x1f: Pop(1)
0x20: Push((bool) 1)
0x21: @@ Fade(Stack[-1])
0x22: Pop(1)
0x23: Push((float)0.5)
0x24: @ Sleep(Stack[-1])
0x25: Pop(1)
0x26: @ SetDeathStateAndRemove()
0x27: Pop(0)
0x28: Return(); Pop(2)

0x29: Stack[-1] = 0
0x2a: @ SetDeathStateAndRemove()
0x2b: Pop(0)
0x2c: @ sync()
0x2d: Pop(0)
0x2e: Return(); Pop(0)

0x2f: PushEmpty()
0x30: Push((int) 1)
0x31: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x33: Stack[-2] = "wood"
0x34: Return(); Pop(0)

0x35: GOTO 0x41

0x36: Push((int) 2)
0x37: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x39: Stack[-2] = "metal"
0x3a: Return(); Pop(0)

0x3b: GOTO 0x41

0x3c: Push((int) 3)
0x3d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: Stack[-2] = "ground"
0x40: Return(); Pop(0)

0x41: Stack[-2] = "stone"
0x42: Return(); Pop(0)

0x43: PushEmpty(bool, bool)
0x44: @ IsLoaded(Stack[-1])
0x45: Pop(0)
0x46: Stack[-3] = Stack[-1]
0x47: Return(); Pop(2)

