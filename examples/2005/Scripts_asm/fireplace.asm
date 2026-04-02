GlobalVarCount = 0

Strings:
	W:fire
	W:Can't find fire particle system
	W:fire_loop
	A:AddSource
	A:Enable
// @pool_raw:66006900720065000000430061006e00270074002000660069006e0064002000660069007200650020007000610072007400690063006c0065002000730079007300740065006d00000066006900720065005f006c006f006f0070000000416464536f7572636500456e61626c6500

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	FindParticleSystem (2 args)
	Trace (1 args)
	PlayLoopedGlobalSound (3 args)
	IsLoaded (1 args)

RunOp = 0xd
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x5a Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x60

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, object, object, object)
0xe: PushEmpty(bool)
0xf: Call2 0x60

0x10: Pop(0)
0x11: Pop(1); Push((bool) Stack[-1] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x13: PushEmpty()
0x14: Push(-0, 0); TaskCall(0)
0x15: Call2 0x0

0x16: Pop(-0, 0); TaskReturn
0x17: Pop(0)
0x18: Push("fire") // @poff=0
0x19: @ FindParticleSystem(Stack[-1], Stack[-3])
0x1a: Pop(1)
0x1b: Pop(0); PushNull((bool) Stack[-2] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1d: Push("Can't find fire particle system") // @poff=10
0x1e: @ Trace(Stack[-1])
0x1f: Pop(1)
0x20: Return(); Pop(4)

0x21: Push("fire_loop") // @poff=74
0x22: Push([0.0, 10.0, 0.0])
0x23: @ PlayLoopedGlobalSound(Stack[-3], Stack[-2], Stack[-1])
0x24: Pop(2)
0x25: Push([0.0, 0.0, 0.0])
0x26: Push([0.0, 1.0, 0.0])
0x27: Push((float)0.0)
0x28: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=5 // @poff=94
0x29: Pop(3)
0x2a: Push([10.0, 0.0, 0.0])
0x2b: Push([0.0, 1.0, 0.0])
0x2c: Push((float)0.0)
0x2d: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=5 // @poff=94
0x2e: Pop(3)
0x2f: Push([0.0, 0.0, 10.0])
0x30: Push([0.0, 1.0, 0.0])
0x31: Push((float)0.0)
0x32: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=5 // @poff=94
0x33: Pop(3)
0x34: Push([-10.0, 0.0, 0.0])
0x35: Push([0.0, 1.0, 0.0])
0x36: Push((float)0.0)
0x37: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=5 // @poff=94
0x38: Pop(3)
0x39: Push([0.0, 0.0, -10.0])
0x3a: Push([0.0, 1.0, 0.0])
0x3b: Push((float)0.0)
0x3c: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=5 // @poff=94
0x3d: Pop(3)
0x3e: Push([10.0, 0.0, 10.0])
0x3f: Push([0.0, 1.0, 0.0])
0x40: Push((float)0.0)
0x41: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=5 // @poff=94
0x42: Pop(3)
0x43: Push([-10.0, 0.0, -10.0])
0x44: Push([0.0, 1.0, 0.0])
0x45: Push((float)0.0)
0x46: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=5 // @poff=94
0x47: Pop(3)
0x48: Push([-10.0, 0.0, 10.0])
0x49: Push([0.0, 1.0, 0.0])
0x4a: Push((float)0.0)
0x4b: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=5 // @poff=94
0x4c: Pop(3)
0x4d: Push([10.0, 0.0, -10.0])
0x4e: Push([0.0, 1.0, 0.0])
0x4f: Push((float)0.0)
0x50: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=5 // @poff=94
0x51: Pop(3)
0x52: @@ Enable(); Obj=2 // @poff=104
0x53: Pop(0)
0x54: @ Hold()
0x55: Pop(0)
0x56: GOTO 0x54

0x57: Return(); Pop(4)

0x58: Stack[-1] = 0
0x59: Stack[-2] = 0
0x5a: PushEmpty()
0x5b: Push(-0, 0); TaskCall(0)
0x5c: Call2 0x0

0x5d: Pop(-0, 0); TaskReturn
0x5e: Pop(0)
0x5f: Return(); Pop(0)

0x60: PushEmpty(bool, bool)
0x61: @ IsLoaded(Stack[-1])
0x62: Pop(0)
0x63: Stack[-1] = Stack[-3]
0x64: Return(); Pop(2)

