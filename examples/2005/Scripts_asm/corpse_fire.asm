GlobalVarCount = 0

Strings:
	W:fire
	W:Can't find fire particle system
	A:AddSource
	A:Enable
	A:Fade
	W:continue
// @pool_raw:66006900720065000000430061006e00270074002000660069006e0064002000660069007200650020007000610072007400690063006c0065002000730079007300740065006d000000416464536f7572636500456e61626c6500466164650063006f006e00740069006e00750065000000

Import:
	SetTimer (2 args)
	FindParticleSystem (2 args)
	Trace (1 args)
	Hold (0 args)
	KillTimer (1 args)
	Sleep (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_7 Op = 0x4f Vars = (int)
		EVENT_26 Op = 0x56 Vars = (string)


0x0: PushEmpty(object, object)
0x1: Push((int) 1)
0x2: Push((float)5.0)
0x3: @ SetTimer(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: Push("fire") // @poff=0
0x6: @ FindParticleSystem(Stack[-1], Stack[-2])
0x7: Pop(1)
0x8: Pop(0); PushNull((bool) Stack[-1] == 0)
0x9: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0xa: Push("Can't find fire particle system") // @poff=10
0xb: @ Trace(Stack[-1])
0xc: Pop(1)
0xd: Return(); Pop(2)

0xe: Push([0.0, 0.0, 0.0])
0xf: Push([0.0, 1.0, 0.0])
0x10: Push((float)0.0)
0x11: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=74
0x12: Pop(3)
0x13: Push([10.0, 0.0, 0.0])
0x14: Push([0.0, 1.0, 0.0])
0x15: Push((float)0.0)
0x16: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=74
0x17: Pop(3)
0x18: Push([0.0, 0.0, 10.0])
0x19: Push([0.0, 1.0, 0.0])
0x1a: Push((float)0.0)
0x1b: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=74
0x1c: Pop(3)
0x1d: Push([-10.0, 0.0, 0.0])
0x1e: Push([0.0, 1.0, 0.0])
0x1f: Push((float)0.0)
0x20: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=74
0x21: Pop(3)
0x22: Push([0.0, 0.0, -10.0])
0x23: Push([0.0, 1.0, 0.0])
0x24: Push((float)0.0)
0x25: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=74
0x26: Pop(3)
0x27: Push([10.0, 0.0, 10.0])
0x28: Push([0.0, 1.0, 0.0])
0x29: Push((float)0.0)
0x2a: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=74
0x2b: Pop(3)
0x2c: Push([-10.0, 0.0, -10.0])
0x2d: Push([0.0, 1.0, 0.0])
0x2e: Push((float)0.0)
0x2f: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=74
0x30: Pop(3)
0x31: Push([-10.0, 0.0, 10.0])
0x32: Push([0.0, 1.0, 0.0])
0x33: Push((float)0.0)
0x34: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=74
0x35: Pop(3)
0x36: Push([10.0, 0.0, -10.0])
0x37: Push([0.0, 1.0, 0.0])
0x38: Push((float)0.0)
0x39: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=74
0x3a: Pop(3)
0x3b: @@ Enable(); Obj=1 // @poff=84
0x3c: Pop(0)
0x3d: @ Hold()
0x3e: Pop(0)
0x3f: Push((int) 1)
0x40: @ KillTimer(Stack[-1])
0x41: Pop(1)
0x42: Push((bool) 1)
0x43: @@ Fade(Stack[-1]); Obj=2 // @poff=91
0x44: Pop(1)
0x45: Push((int) 2)
0x46: @ Sleep(Stack[-1])
0x47: Pop(1)
0x48: PushEmpty(object)
0x49: Call2 0x5f

0x4a: Pop(0)
0x4b: @ RemoveActor(Stack[-1])
0x4c: Pop(1)
0x4d: Return(); Pop(2)

0x4e: Stack[-1] = 0
0x4f: PushEmpty()
0x50: Push((int) 1)
0x51: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: @ StopGroup0()
0x54: Pop(0)
0x55: Return(); Pop(0)

0x56: PushEmpty()
0x57: Push("continue") // @poff=96
0x58: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5a: Push((int) 1)
0x5b: Push((float)5.0)
0x5c: @ SetTimer(Stack[-2], Stack[-1])
0x5d: Pop(2)
0x5e: Return(); Pop(0)

0x5f: PushEmpty(object, object)
0x60: @ self(Stack[-1])
0x61: Pop(0)
0x62: Stack[-1] = Stack[-3]
0x63: Return(); Pop(2)

0x64: Stack[-1] = 0
