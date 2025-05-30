GlobalVarCount = 0

Strings:
	d8q01_well_block
	size
	get
	clear

Import:
	GetGameTime (1 args)
	AddActor (4 args)
	Hold (0 args)
	sync (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	RemoveActor (1 args)

RunOp = 0x15
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, bool) Params = 0
		EVENT_5 Op = 0x0 Vars = ()
		EVENT_6 Op = 0x1c Vars = ()


0x0: PushEmpty(float, object, float, object)
0x1: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x2: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x3: @ GetGameTime(Stack[-2])
0x4: Pop(0)
0x5: Push((int) 168)
0x6: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x7: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x8: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x9: Push("d8q01_well_block")
0xa: PushEmpty(object)
0xb: Call2 0x2c

0xc: Pop(0)
0xd: Push(CVector(0.0, 0.0, 0.0))
0xe: @ AddActor(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf: Pop(3)
0x10: Stack[-1] = 0
0x11: PushEmpty()
0x12: Call2 0x15

0x13: Pop(0)
0x14: Return(); Pop(4)

0x15: PushEmpty()
0x16: Call2 0x22

0x17: Pop(0)
0x18: @ Hold()
0x19: Pop(0)
0x1a: GOTO 0x18

0x1b: Return(); Pop(0)

0x1c: PushEmpty()
0x1d: Call2 0x27

0x1e: Pop(0)
0x1f: @ sync()
0x20: Pop(0)
0x21: Return(); Pop(0)

0x22: PushEmpty(object)
0x23: Call2 0x32

0x24: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x25: Pop(1)
0x26: Return(); Pop(0)

0x27: PushEmpty(object)
0x28: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29: Call2 0x38

0x2a: Pop(1)
0x2b: Return(); Pop(0)

0x2c: PushEmpty(object, object)
0x2d: @ self(Stack[-1])
0x2e: Pop(0)
0x2f: Stack[-3] = Stack[-1]
0x30: Return(); Pop(2)

0x31: Stack[-1] = 0
0x32: PushEmpty(object, object)
0x33: @ CreateObjectVector(Stack[-1])
0x34: Pop(0)
0x35: Stack[-3] = Stack[-1]
0x36: Return(); Pop(2)

0x37: Stack[-1] = 0
0x38: PushEmpty(int, int, object, int, int, object)
0x39: Push(Stack[-7])
0x3a: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x3b: @@ size(Stack[-3])
0x3c: Pop(0)
0x3d: Stack[-2] = (int) 0
0x3e: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x3f: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x40: @@ get(Stack[-1], Stack[-2])
0x41: Pop(0)
0x42: Push(Stack[-1])
0x43: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x44: @ RemoveActor(Stack[-1])
0x45: Pop(0)
0x46: Stack[-1] = 0
0x47: Push((int) 1)
0x48: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x49: GOTO 0x3e

0x4a: @@ clear()
0x4b: Pop(0)
0x4c: Return(); Pop(6)

