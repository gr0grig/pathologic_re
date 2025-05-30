GlobalVarCount = 0

Strings:
	blood
	Enable
	AddSource
	Fade

Import:
	RemoveActor (1 args)
	FindParticleSystem (2 args)
	sync (1 args)
	sync (0 args)
	IsLoaded (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (cvector, cvector) Params = 0
		EVENT_6 Op = 0x40 Vars = ()


0x0: PushEmpty(object, float, float, float, object, float, float, float)
0x1: PushEmpty(bool)
0x2: Call2 0x48

0x3: Pop(0)
0x4: Pop(1); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x6: PushEmpty(object)
0x7: Call2 0x4d

0x8: Pop(0)
0x9: @ RemoveActor(Stack[-1])
0xa: Pop(1)
0xb: Return(); Pop(8)

0xc: Push("blood")
0xd: @ FindParticleSystem(Stack[-1], Stack[-5])
0xe: Pop(1)
0xf: @@ Enable()
0x10: Pop(0)
0x11: Stack[0 + Tasks[-1].StackPointer] = CVector(0.0, 0.0, 0.0)
0x12: Stack[1 + Tasks[-1].StackPointer] = CVector(-100.0, 100.0, 0.0)
0x13: Push((float)0.3)
0x14: @@ AddSource(Stack[-0], Stack[-1], Stack[-1])
0x15: Pop(1)
0x16: Stack[-3] = (float) 0.4
0x17: Push((int) 0)
0x18: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x1a: @ sync(Stack[-2])
0x1b: Pop(0)
0x1c: Stack[-3] = Stack[-3] - Stack[-2]; Pop(0);
0x1d: Push(CvectorIndex(Stack[-0], 1))
0x1e: Push((int) 150)
0x1f: Pop(1); Push(Stack[-1] * Stack[-4]);
0x20: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x21: CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 1) = Stack[-1];
0x22: Push((float)0.3)
0x23: @@ AddSource(Stack[-0], Stack[-1], Stack[-1])
0x24: Pop(1)
0x25: GOTO 0x17

0x26: Push((bool) 1)
0x27: @@ Fade(Stack[-1])
0x28: Pop(1)
0x29: Stack[-3] = (float) 0.4
0x2a: Push((int) 0)
0x2b: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x2d: @ sync(Stack[-1])
0x2e: Pop(0)
0x2f: Stack[-3] = Stack[-3] - Stack[-1]; Pop(0);
0x30: Push(CvectorIndex(Stack[-0], 1))
0x31: Push((int) 150)
0x32: Pop(1); Push(Stack[-1] * Stack[-3]);
0x33: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x34: CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 1) = Stack[-1];
0x35: Push((float)0.3)
0x36: @@ AddSource(Stack[-0], Stack[-1], Stack[-1])
0x37: Pop(1)
0x38: GOTO 0x2a

0x39: PushEmpty(object)
0x3a: Call2 0x4d

0x3b: Pop(0)
0x3c: @ RemoveActor(Stack[-1])
0x3d: Pop(1)
0x3e: Return(); Pop(8)

0x3f: Stack[-4] = 0
0x40: PushEmpty(object)
0x41: Call2 0x4d

0x42: Pop(0)
0x43: @ RemoveActor(Stack[-1])
0x44: Pop(1)
0x45: @ sync()
0x46: Pop(0)
0x47: Return(); Pop(0)

0x48: PushEmpty(bool, bool)
0x49: @ IsLoaded(Stack[-1])
0x4a: Pop(0)
0x4b: Stack[-3] = Stack[-1]
0x4c: Return(); Pop(2)

0x4d: PushEmpty(object, object)
0x4e: @ self(Stack[-1])
0x4f: Pop(0)
0x50: Stack[-3] = Stack[-1]
0x51: Return(); Pop(2)

0x52: Stack[-1] = 0
