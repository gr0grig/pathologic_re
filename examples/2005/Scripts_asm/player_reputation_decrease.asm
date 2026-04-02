GlobalVarCount = 0

Strings:
	W:reputation
	W:sleeping
	A:add
// @pool_raw:720065007000750074006100740069006f006e00000073006c0065006500700069006e006700000061646400

Import:
	GetGameTime (1 args)
	sync (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	SetProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0


0x0: PushEmpty(float)
0x1: Stack[-1] = (int) 288
0x2: Call2 0x1b

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty(float, float)
0x6: PushEmpty(bool)
0x7: Call2 0x4e

0x8: Pop(0)
0x9: Pop(1); Push((bool) Stack[-1] == 0)
0xa: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0xb: Pop(0); Push(( -Stack[-3])
0xc: Push((float)36.0)
0xd: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0xe: PushEmpty(bool, string, float, float, float)
0xf: Stack[-4] = "reputation" // @poff=0
0x10: Stack[-6] = Stack[-3]
0x11: Stack[-2] = (int) 0
0x12: Stack[-1] = (int) 1
0x13: Call2 0x3b

0x14: Pop(5)
0x15: PushEmpty(float)
0x16: Stack[-2] = Stack[-1]
0x17: Call2 0x66

0x18: Pop(1)
0x19: Stack[-4] = (bool) 0
0x1a: Return(); Pop(2)

0x1b: PushEmpty(float, float, float, float, float, float, float, float)
0x1c: @ GetGameTime(Stack[-4])
0x1d: Pop(0)
0x1e: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x1f: Stack[-4] = Stack[-2]
0x20: @ sync()
0x21: Pop(0)
0x22: Push( Stack[0 + Tasks[-1].StackPointer] )
0x23: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x24: GOTO 0x3a

0x25: @ GetGameTime(Stack[-1])
0x26: Pop(0)
0x27: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x28: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x29: GOTO 0x39

0x2a: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x2b: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2c: PushEmpty(bool, float)
0x2d: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x2e: Call2 0x5

0x2f: Pop(2)
0x30: GOTO 0x3a

0x31: GOTO 0x39

0x32: PushEmpty(bool, float)
0x33: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x34: Call2 0x5

0x35: Pop(1)
0x36: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x37: GOTO 0x3a

0x38: Stack[-1] = Stack[-2]
0x39: GOTO 0x20

0x3a: Return(); Pop(8)

0x3b: PushEmpty(bool, float, bool, float)
0x3c: @ HasProperty(Stack[-8], Stack[-2])
0x3d: Pop(0)
0x3e: Pop(0); Push((bool) Stack[-2] == 0)
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: Stack[-9] = (bool) 0
0x41: Return(); Pop(4)

0x42: @ GetProperty(Stack[-8], Stack[-1])
0x43: Pop(0)
0x44: PushEmpty(float, float, float, float)
0x45: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x46: Stack[-10] = Stack[-2]
0x47: Stack[-9] = Stack[-1]
0x48: Call2 0x5b

0x49: Pop(3)
0x4a: @ SetProperty(Stack[-9], Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-9] = (bool) 1
0x4d: Return(); Pop(4)

0x4e: PushEmpty(bool, bool, bool, bool)
0x4f: Push("sleeping") // @poff=22
0x50: @ HasProperty(Stack[-1], Stack[-3])
0x51: Pop(1)
0x52: Pop(0); Push((bool) Stack[-2] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x54: Stack[-5] = (bool) 0
0x55: Return(); Pop(4)

0x56: Push("sleeping") // @poff=22
0x57: @ GetProperty(Stack[-1], Stack[-2])
0x58: Pop(1)
0x59: Stack[-1] = Stack[-5]
0x5a: Return(); Pop(4)

0x5b: PushEmpty()
0x5c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5d: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5e: Stack[-2] = Stack[-4]
0x5f: Return(); Pop(0)

0x60: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x61: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x62: Stack[-1] = Stack[-4]
0x63: Return(); Pop(0)

0x64: Stack[-3] = Stack[-4]
0x65: Return(); Pop(0)

0x66: PushEmpty(object, object)
0x67: @ CreateFloatVector(Stack[-1])
0x68: Pop(0)
0x69: @@ add(Stack[-3]); Obj=1 // @poff=40
0x6a: Pop(0)
0x6b: Push((int) 16)
0x6c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6d: Pop(1)
0x6e: Return(); Pop(2)

0x6f: Stack[-1] = 0
