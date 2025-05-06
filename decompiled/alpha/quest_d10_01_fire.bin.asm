GlobalVarCount = 0

Strings:
	trigger_d10q01_fire
	trigger_fire_damage.bin
	Can't find fire particle system
	AddSource
	Enable
	cleanup
	restore

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	GetScene (1 args)
	AddScriptedActor (5 args)
	FindParticleSystem (2 args)
	Trace (1 args)
	RemoveActor (1 args)
	IsLoaded (1 args)
	self (1 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1 Vars = (bool, object) Params = 0
		EVENT_6 Op = 0x4c Vars = ()
		EVENT_32 Op = 0x52 Vars = ()
		EVENT_26 Op = 0x55 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty(object, object, float, float, float, cvector, object, object, float, float, float, cvector)
0x7: @ GetScene(Stack[-6])
0x8: Pop(0)
0x9: Push("trigger_d10q01_fire")
0xa: Push("trigger_fire_damage.bin")
0xb: Push(CVector(0.0, 0.0, 0.0))
0xc: @ AddScriptedActor(Stack[-1], Stack[-3], Stack[-2], Stack[-9], Stack[-1])
0xd: Pop(3)
0xe: PushEmpty(bool)
0xf: Call 0x73

0x10: Pop(0)
0x11: Pop(1); Push((bool) Stack[-1] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x13: PushEmpty()
0x14: Push(-0, 0); TaskCall(0)
0x15: Call 0x0

0x16: Pop(-0, 0); TaskReturn
0x17: Pop(0)
0x18: Push("fire")
0x19: @ FindParticleSystem(Stack[-1], Stack[-6])
0x1a: Pop(1)
0x1b: Pop(0); Push((bool) Stack[-5] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1d: Push("Can't find fire particle system")
0x1e: @ Trace(Stack[-1])
0x1f: Pop(1)
0x20: Return(); Pop(12)

0x21: Stack[-4] = (float) 60.0
0x22: Stack[-3] = -Stack[-4]; Pop(0);
0x23: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x24: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x25: Stack[-2] = -Stack[-4]; Pop(0);
0x26: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x27: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x28: Pop(0); Push(Stack[-3] * Stack[-3]);
0x29: Pop(0); Push(Stack[-3] * Stack[-3]);
0x2a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b: Pop(0); Push(Stack[-5] * Stack[-5]);
0x2c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2e: GOTO 0x3c

0x2f: Push(CvectorIndex(Stack[-1], 0))
0x30: Stack[-1] = Stack[-4]
0x31: CvectorIndex(Stack[-2], 0) = Stack[-1];
0x32: Push(CvectorIndex(Stack[-1], 1))
0x33: Stack[-1] = (int) 0
0x34: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x35: Push(CvectorIndex(Stack[-1], 2))
0x36: Stack[-1] = Stack[-3]
0x37: CvectorIndex(Stack[-2], 2) = Stack[-1];
0x38: Push(CVector(0.0, 1.0, 0.0))
0x39: Push((float)0.0)
0x3a: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x3b: Pop(2)
0x3c: Push((int) 10)
0x3d: Pop(1); Push(Stack[-5] / Stack[-1]);
0x3e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3f: GOTO 0x26

0x40: Push((int) 10)
0x41: Pop(1); Push(Stack[-5] / Stack[-1]);
0x42: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x43: GOTO 0x23

0x44: @@ Enable()
0x45: Pop(0)
0x46: @ Hold()
0x47: Pop(0)
0x48: GOTO 0x46

0x49: Return(); Pop(12)

0x4a: Stack[-5] = 0
0x4b: Stack[-6] = 0
0x4c: PushEmpty()
0x4d: Push(-0, 0); TaskCall(0)
0x4e: Call 0x0

0x4f: Pop(-0, 0); TaskReturn
0x50: Pop(0)
0x51: Return(); Pop(0)

0x52: @ RemoveActor(Stack[-1])
0x53: Pop(0)
0x54: Return(); Pop(0)

0x55: PushEmpty(bool, bool)
0x56: Push("cleanup")
0x57: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x59: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5a: @ IsLoaded(Stack[-1])
0x5b: Pop(0)
0x5c: PushEmpty(bool)
0x5d: Stack[-1] = (bool) 0
0x5e: Pop(0); Push((bool) Stack[-2] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x60: PushEmpty(bool)
0x61: Call 0x71

0x62: Pop(0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x66: PushEmpty(object)
0x67: Call 0x78

0x68: Pop(0)
0x69: @ RemoveActor(Stack[-1])
0x6a: Pop(1)
0x6b: GOTO 0x70

0x6c: Push("restore")
0x6d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x70: Return(); Pop(2)

0x71: Stack[-1] = (bool) 1
0x72: Return(); Pop(0)

0x73: PushEmpty(bool, bool)
0x74: @ IsLoaded(Stack[-1])
0x75: Pop(0)
0x76: Stack[-3] = Stack[-1]
0x77: Return(); Pop(2)

0x78: PushEmpty(object, object)
0x79: @ self(Stack[-1])
0x7a: Pop(0)
0x7b: Stack[-3] = Stack[-1]
0x7c: Return(); Pop(2)

0x7d: Stack[-1] = 0
