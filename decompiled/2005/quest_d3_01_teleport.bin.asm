GlobalVarCount = 0

Strings:
	player
	cot_alexandr
	pt_d3q01_teleport
	GetLocator
	d3q01

Import:
	Sleep (1 args)
	FindActor (2 args)
	GetSceneByName (2 args)
	Teleport (4 args)
	SetVariable (2 args)
	sync (0 args)
	RemoveActor (1 args)
	self (1 args)
	ModDarkenLevel (1 args)
	sync (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(object, object, cvector, cvector, bool, object, object, cvector, cvector, bool)
0x1: Push((float)5.0)
0x2: @ Sleep(Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(float, float, float)
0x5: Stack[-3] = (int) 0
0x6: Stack[-2] = (int) 1
0x7: Stack[-1] = (float) 3.0
0x8: Call2 0x31

0x9: Pop(3)
0xa: Push("player")
0xb: @ FindActor(Stack[-6], Stack[-1])
0xc: Pop(1)
0xd: Push(Stack[-5])
0xe: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0xf: Push("cot_alexandr")
0x10: @ GetSceneByName(Stack[-5], Stack[-1])
0x11: Pop(1)
0x12: Push("pt_d3q01_teleport")
0x13: @@ GetLocator(Stack[-1], Stack[-2], Stack[-4], Stack[-3])
0x14: Pop(1)
0x15: @ Teleport(Stack[-5], Stack[-4], Stack[-3], Stack[-2])
0x16: Pop(0)
0x17: Stack[-4] = 0
0x18: Push("d3q01")
0x19: Push((int) 8)
0x1a: @ SetVariable(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: @ sync()
0x1d: Pop(0)
0x1e: PushEmpty(float, float, float)
0x1f: Stack[-3] = (int) 1
0x20: Stack[-2] = (int) 0
0x21: Stack[-1] = (float) 1.0
0x22: Call2 0x31

0x23: Pop(3)
0x24: PushEmpty(object)
0x25: Call2 0x2b

0x26: Pop(0)
0x27: @ RemoveActor(Stack[-1])
0x28: Pop(1)
0x29: Return(); Pop(10)

0x2a: Stack[-5] = 0
0x2b: PushEmpty(object, object)
0x2c: @ self(Stack[-1])
0x2d: Pop(0)
0x2e: Stack[-3] = Stack[-1]
0x2f: Return(); Pop(2)

0x30: Stack[-1] = 0
0x31: PushEmpty(bool, float, float, bool, float, float)
0x32: Stack[-3] = Stack[-8] > Stack[-9]; Pop(0);
0x33: Pop(0); Push(Stack[-8] - Stack[-9]);
0x34: Stack[-3] = Stack[-1] / Stack[-8]; Pop(1);
0x35: Push(Stack[-3])
0x36: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x37: Pop(0); Push((bool) Stack[-9] < Stack[-8])
0x38: GOTO 0x3a

0x39: Pop(0); Push((bool) Stack[-8] < Stack[-9])
0x3a: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3b: @ ModDarkenLevel(Stack[-9])
0x3c: Pop(0)
0x3d: @ sync(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push(Stack[-1] * Stack[-2]);
0x40: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x41: GOTO 0x35

0x42: @ ModDarkenLevel(Stack[-8])
0x43: Pop(0)
0x44: Return(); Pop(6)

