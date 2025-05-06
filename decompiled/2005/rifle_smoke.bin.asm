GlobalVarCount = 0

Strings:
	player
	GetDirection
	smoke
	AddSource
	SetOpacity
	SetSpeed
	SetLifeTime
	Enable
	Fade

Import:
	FindActor (2 args)
	CreateSmoke (3 args)
	Sleep (1 args)
	RemoveActor (1 args)
	sync (0 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_6 Op = 0x30 Vars = ()


0x0: PushEmpty(object, cvector, object, object, cvector, object)
0x1: Push("player")
0x2: @ FindActor(Stack[-4], Stack[-1])
0x3: Pop(1)
0x4: Pop(0); Push((bool) Stack[-3] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0x7; Pop(1)

0x6: Return(); Pop(6)

0x7: @@ GetDirection(Stack[-2])
0x8: Pop(0)
0x9: Push("smoke")
0xa: Push((int) 20)
0xb: @ CreateSmoke(Stack[-3], Stack[-2], Stack[-1])
0xc: Pop(2)
0xd: Push((int) 100)
0xe: Pop(1); Push(Stack[-3] * Stack[-1]);
0xf: @@ AddSource(Stack[-1], Stack[-3])
0x10: Pop(1)
0x11: Push((float)0.8)
0x12: @@ SetOpacity(Stack[-1])
0x13: Pop(1)
0x14: Push((int) 500)
0x15: Push((int) 100)
0x16: @@ SetSpeed(Stack[-2], Stack[-1])
0x17: Pop(2)
0x18: Push((float)1.5)
0x19: @@ SetLifeTime(Stack[-1])
0x1a: Pop(1)
0x1b: @@ Enable()
0x1c: Pop(0)
0x1d: Push((bool) 0)
0x1e: @@ Fade(Stack[-1])
0x1f: Pop(1)
0x20: Push((float)1.5)
0x21: @ Sleep(Stack[-1])
0x22: Pop(1)
0x23: @@ Fade()
0x24: Pop(0)
0x25: Push((float)1.5)
0x26: @ Sleep(Stack[-1])
0x27: Pop(1)
0x28: PushEmpty(object)
0x29: Call2 0x38

0x2a: Pop(0)
0x2b: @ RemoveActor(Stack[-1])
0x2c: Pop(1)
0x2d: Return(); Pop(6)

0x2e: Stack[-1] = 0
0x2f: Stack[-3] = 0
0x30: PushEmpty(object)
0x31: Call2 0x38

0x32: Pop(0)
0x33: @ RemoveActor(Stack[-1])
0x34: Pop(1)
0x35: @ sync()
0x36: Pop(0)
0x37: Return(); Pop(0)

0x38: PushEmpty(object, object)
0x39: @ self(Stack[-1])
0x3a: Pop(0)
0x3b: Stack[-3] = Stack[-1]
0x3c: Return(); Pop(2)

0x3d: Stack[-1] = 0
