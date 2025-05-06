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
	GetScene (1 args)
	AddScriptedActor (5 args)
	Hold (0 args)
	FindParticleSystem (2 args)
	Trace (1 args)
	StopGroup0 (0 args)
	sync (0 args)
	RemoveActor (1 args)
	IsLoaded (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object) Params = 0
		EVENT_6 Op = 0x43 Vars = ()
		EVENT_5 Op = 0x49 Vars = ()
		EVENT_32 Op = 0x4e Vars = ()
		EVENT_26 Op = 0x53 Vars = (string)


0x0: PushEmpty(object, object, float, float, float, cvector, object, object, float, float, float, cvector)
0x1: @ GetScene(Stack[-6])
0x2: Pop(0)
0x3: Push("trigger_d10q01_fire")
0x4: Push("trigger_fire_damage.bin")
0x5: Push(CVector(0.0, 0.0, 0.0))
0x6: @ AddScriptedActor(Stack[-1], Stack[-3], Stack[-2], Stack[-9], Stack[-1])
0x7: Pop(3)
0x8: PushEmpty(bool)
0x9: Call2 0x81

0xa: Pop(0)
0xb: Pop(1); Push((bool) Stack[-1] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xd: @ Hold()
0xe: Pop(0)
0xf: Push("fire")
0x10: @ FindParticleSystem(Stack[-1], Stack[-6])
0x11: Pop(1)
0x12: Pop(0); Push((bool) Stack[-5] == 0)
0x13: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x14: Push("Can't find fire particle system")
0x15: @ Trace(Stack[-1])
0x16: Pop(1)
0x17: Return(); Pop(12)

0x18: Stack[-4] = (float) 60.0
0x19: Stack[-3] = -Stack[-4]; Pop(0);
0x1a: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x1b: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x1c: Stack[-2] = -Stack[-4]; Pop(0);
0x1d: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x1e: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x1f: Pop(0); Push(Stack[-3] * Stack[-3]);
0x20: Pop(0); Push(Stack[-3] * Stack[-3]);
0x21: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22: Pop(0); Push(Stack[-5] * Stack[-5]);
0x23: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x25: GOTO 0x33

0x26: Push(CvectorIndex(Stack[-1], 0))
0x27: Stack[-1] = Stack[-4]
0x28: CvectorIndex(Stack[-2], 0) = Stack[-1];
0x29: Push(CvectorIndex(Stack[-1], 1))
0x2a: Stack[-1] = (int) 0
0x2b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2c: Push(CvectorIndex(Stack[-1], 2))
0x2d: Stack[-1] = Stack[-3]
0x2e: CvectorIndex(Stack[-2], 2) = Stack[-1];
0x2f: Push(CVector(0.0, 1.0, 0.0))
0x30: Push((float)0.0)
0x31: @@ AddSource(Stack[-3], Stack[-2], Stack[-1])
0x32: Pop(2)
0x33: Push((int) 10)
0x34: Pop(1); Push(Stack[-5] / Stack[-1]);
0x35: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x36: GOTO 0x1d

0x37: Push((int) 10)
0x38: Pop(1); Push(Stack[-5] / Stack[-1]);
0x39: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x3a: GOTO 0x1a

0x3b: @@ Enable()
0x3c: Pop(0)
0x3d: @ Hold()
0x3e: Pop(0)
0x3f: GOTO 0x3d

0x40: Return(); Pop(12)

0x41: Stack[-5] = 0
0x42: Stack[-6] = 0
0x43: PushEmpty()
0x44: Call2 0x6f

0x45: Pop(0)
0x46: @ Hold()
0x47: Pop(0)
0x48: Return(); Pop(0)

0x49: @ StopGroup0()
0x4a: Pop(0)
0x4b: @ sync()
0x4c: Pop(0)
0x4d: Return(); Pop(0)

0x4e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x4f: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x50: @ RemoveActor(Stack[-1])
0x51: Pop(0)
0x52: Return(); Pop(0)

0x53: PushEmpty(bool, bool)
0x54: Push("cleanup")
0x55: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x57: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x58: @ IsLoaded(Stack[-1])
0x59: Pop(0)
0x5a: PushEmpty(bool)
0x5b: Stack[-1] = (bool) 0
0x5c: Pop(0); Push((bool) Stack[-2] == 0)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: PushEmpty(bool)
0x5f: Call2 0x7f

0x60: Pop(0)
0x61: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x62: Stack[-1] = (bool) 1
0x63: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x64: PushEmpty(object)
0x65: Call2 0x86

0x66: Pop(0)
0x67: @ RemoveActor(Stack[-1])
0x68: Pop(1)
0x69: GOTO 0x6e

0x6a: Push("restore")
0x6b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x6e: Return(); Pop(2)

0x6f: PushEmpty(bool)
0x70: Stack[-1] = (bool) 0
0x71: Push( Stack[0 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x73: PushEmpty(bool)
0x74: Call2 0x7f

0x75: Pop(0)
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: Stack[-1] = (bool) 1
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: PushEmpty(object)
0x7a: Call2 0x86

0x7b: Pop(0)
0x7c: @ RemoveActor(Stack[-1])
0x7d: Pop(1)
0x7e: Return(); Pop(0)

0x7f: Stack[-1] = (bool) 1
0x80: Return(); Pop(0)

0x81: PushEmpty(bool, bool)
0x82: @ IsLoaded(Stack[-1])
0x83: Pop(0)
0x84: Stack[-3] = Stack[-1]
0x85: Return(); Pop(2)

0x86: PushEmpty(object, object)
0x87: @ self(Stack[-1])
0x88: Pop(0)
0x89: Stack[-3] = Stack[-1]
0x8a: Return(); Pop(2)

0x8b: Stack[-1] = 0
