GlobalVarCount = 0

Strings:
	drink
	hunger
	add

Import:
	PlaySound (1 args)
	HasProperty (2 args)
	GetProperty (2 args)
	SetProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: Push("drink")
0x1: @ PlaySound(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(bool, string, float, float, float)
0x4: Stack[-4] = "hunger"
0x5: Stack[-3] = (float) -0.07
0x6: Stack[-2] = (int) 0
0x7: Stack[-1] = (int) 1
0x8: Call2 0xf

0x9: Pop(5)
0xa: PushEmpty(float)
0xb: Stack[-1] = (float) -0.07
0xc: Call2 0x2d

0xd: Pop(1)
0xe: Return(); Pop(0)

0xf: PushEmpty(bool, float, bool, float)
0x10: @ HasProperty(Stack[-8], Stack[-2])
0x11: Pop(0)
0x12: Pop(0); Push((bool) Stack[-2] == 0)
0x13: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x14: Stack[-9] = (bool) 0
0x15: Return(); Pop(4)

0x16: @ GetProperty(Stack[-8], Stack[-1])
0x17: Pop(0)
0x18: PushEmpty(float, float, float, float)
0x19: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x1a: Stack[-2] = Stack[-10]
0x1b: Stack[-1] = Stack[-9]
0x1c: Call2 0x22

0x1d: Pop(3)
0x1e: @ SetProperty(Stack[-9], Stack[-1])
0x1f: Pop(1)
0x20: Stack[-9] = (bool) 1
0x21: Return(); Pop(4)

0x22: PushEmpty()
0x23: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x24: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x25: Stack[-4] = Stack[-2]
0x26: Return(); Pop(0)

0x27: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x29: Stack[-4] = Stack[-1]
0x2a: Return(); Pop(0)

0x2b: Stack[-4] = Stack[-3]
0x2c: Return(); Pop(0)

0x2d: PushEmpty(object, object)
0x2e: @ CreateFloatVector(Stack[-1])
0x2f: Pop(0)
0x30: @@ add(Stack[-3])
0x31: Pop(0)
0x32: Push((int) 12)
0x33: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x34: Pop(1)
0x35: Return(); Pop(2)

0x36: Stack[-1] = 0
