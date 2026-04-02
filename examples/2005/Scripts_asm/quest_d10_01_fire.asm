GlobalVarCount = 0

Strings:
	W:trigger_d10q01_fire
	W:trigger_fire_damage.bin
	W:Can't find fire particle system
	A:AddSource
	A:Enable
	W:cleanup
	W:restore
// @pool_raw:74007200690067006700650072005f006400310030007100300031005f006600690072006500000074007200690067006700650072005f0066006900720065005f00640061006d006100670065002e00620069006e000000430061006e00270074002000660069006e0064002000660069007200650020007000610072007400690063006c0065002000730079007300740065006d000000416464536f7572636500456e61626c650063006c00650061006e0075007000000072006500730074006f00720065000000

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	GetScene (1 args)
	AddScriptedActor (5 args)
	FindParticleSystem (2 args)
	Trace (1 args)
	RemoveActor (1 args)
	IsLoaded (1 args)
	self (1 args)

RunOp = 0xd
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (bool, object) Params = 0
		EVENT_6 Op = 0x53 Vars = ()
		EVENT_32 Op = 0x59 Vars = ()
		EVENT_26 Op = 0x5e Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x7c

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, object, float, float, float, cvector, object, object, float, float, float, cvector)
0xe: @ GetScene(Stack[-6])
0xf: Pop(0)
0x10: Push("trigger_d10q01_fire") // @poff=0
0x11: Push("trigger_fire_damage.bin") // @poff=40
0x12: Push([0.0, 0.0, 0.0])
0x13: @ AddScriptedActor(Stack[-1]T, Stack[-3], Stack[-2], Stack[-9], Stack[-1])
0x14: Pop(3)
0x15: PushEmpty(bool)
0x16: Call2 0x7c

0x17: Pop(0)
0x18: Pop(1); Push((bool) Stack[-1] == 0)
0x19: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1a: PushEmpty()
0x1b: Push(-0, 0); TaskCall(0)
0x1c: Call2 0x0

0x1d: Pop(-0, 0); TaskReturn
0x1e: Pop(0)
0x1f: Push("fire") // @poff=30
0x20: @ FindParticleSystem(Stack[-1], Stack[-6])
0x21: Pop(1)
0x22: Pop(0); PushNull((bool) Stack[-5] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x24: Push("Can't find fire particle system") // @poff=88
0x25: @ Trace(Stack[-1])
0x26: Pop(1)
0x27: Return(); Pop(12)

0x28: Stack[-4] = (float) 60.0
0x29: Stack[-3] = -Stack[-4]; Pop(0);
0x2a: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x2b: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x2c: Stack[-2] = -Stack[-4]; Pop(0);
0x2d: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x2e: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x2f: Pop(0); Push(Stack[-3] * Stack[-3]);
0x30: Pop(0); Push(Stack[-3] * Stack[-3]);
0x31: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32: Pop(0); Push(Stack[-5] * Stack[-5]);
0x33: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x35: GOTO 0x43

0x36: Push(CvectorIndex(Stack[-1], 0))
0x37: Stack[-4] = Stack[-1]
0x38: CvectorIndex(Stack[-2], 0) = Stack[-1];
0x39: Push(CvectorIndex(Stack[-1], 1))
0x3a: Stack[-1] = (int) 0
0x3b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3c: Push(CvectorIndex(Stack[-1], 2))
0x3d: Stack[-3] = Stack[-1]
0x3e: CvectorIndex(Stack[-2], 2) = Stack[-1];
0x3f: Push([0.0, 1.0, 0.0])
0x40: Push((float)0.0)
0x41: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=7 // @poff=152
0x42: Pop(2)
0x43: Push((int) 10)
0x44: Pop(1); Push(Stack[-5] / Stack[-1]);
0x45: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x46: GOTO 0x2d

0x47: Push((int) 10)
0x48: Pop(1); Push(Stack[-5] / Stack[-1]);
0x49: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x4a: GOTO 0x2a

0x4b: @@ Enable(); Obj=5 // @poff=162
0x4c: Pop(0)
0x4d: @ Hold()
0x4e: Pop(0)
0x4f: GOTO 0x4d

0x50: Return(); Pop(12)

0x51: Stack[-5] = 0
0x52: Stack[-6] = 0
0x53: PushEmpty()
0x54: Push(-0, 0); TaskCall(0)
0x55: Call2 0x0

0x56: Pop(-0, 0); TaskReturn
0x57: Pop(0)
0x58: Return(); Pop(0)

0x59: Push( Stack[1 + Tasks[-1].StackPointer] )
0x5a: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5b: @ RemoveActor(Stack[-1]T)
0x5c: Pop(0)
0x5d: Return(); Pop(0)

0x5e: PushEmpty(bool, bool)
0x5f: Push("cleanup") // @poff=169
0x60: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x61: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x62: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x63: @ IsLoaded(Stack[-1])
0x64: Pop(0)
0x65: PushEmpty(bool)
0x66: Stack[-1] = (bool) 0
0x67: Pop(0); Push((bool) Stack[-2] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x69: PushEmpty(bool)
0x6a: Call2 0x7a

0x6b: Pop(0)
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: Stack[-1] = (bool) 1
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: PushEmpty(object)
0x70: Call2 0x81

0x71: Pop(0)
0x72: @ RemoveActor(Stack[-1])
0x73: Pop(1)
0x74: GOTO 0x79

0x75: Push("restore") // @poff=185
0x76: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x79: Return(); Pop(2)

0x7a: Stack[-1] = (bool) 1
0x7b: Return(); Pop(0)

0x7c: PushEmpty(bool, bool)
0x7d: @ IsLoaded(Stack[-1])
0x7e: Pop(0)
0x7f: Stack[-1] = Stack[-3]
0x80: Return(); Pop(2)

0x81: PushEmpty(object, object)
0x82: @ self(Stack[-1])
0x83: Pop(0)
0x84: Stack[-1] = Stack[-3]
0x85: Return(); Pop(2)

0x86: Stack[-1] = 0
