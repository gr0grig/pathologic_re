GlobalVarCount = 3
	G_VAR_0 int ItemID1
	G_VAR_1 int ItemID2
	G_VAR_2 int Container

Strings:
	visir

Import:
	GetProperty (2 args)
	SetProperty (2 args)
	GetItemPosByID (4 args)
	RemoveItem (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(int, int, int, int)
0x1: Push("visir")
0x2: @ GetProperty(Stack[-1], Stack[-3])
0x3: Pop(1)
0x4: PushEmpty(bool)
0x5: Stack[-1] = (bool) 0
0x6: Push(Stack[-3])
0x7: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x8: Push((int) 4)
0x9: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0xb: Stack[-1] = (bool) 1
0xc: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0xd: Push("visir")
0xe: Push((int) 1)
0xf: Pop(1); Push(Stack[-4] + Stack[-1]);
0x10: @ SetProperty(Stack[-2], Stack[-1])
0x11: Pop(2)
0x12: Push(GlobalVars[0])
0x13: Push(GlobalVars[1])
0x14: Push(GlobalVars[2])
0x15: @ GetItemPosByID(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16: Pop(3)
0x17: Push((int) 1)
0x18: Push(GlobalVars[2])
0x19: @ RemoveItem(Stack[-3], Stack[-2], Stack[-1])
0x1a: Pop(2)
0x1b: Return(); Pop(4)

