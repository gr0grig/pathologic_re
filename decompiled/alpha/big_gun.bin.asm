GlobalVarCount = 0

Strings:
	Gun blocking polygon: 
	BlockPolygons

Import:
	GetPFPolyID (1 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	Hold (0 args)
	SetVisibility (1 args)
	StopGroup0 (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x15 Vars = ()


0x0: PushEmpty(int, object, int, object)
0x1: @ GetPFPolyID(Stack[-2])
0x2: Pop(0)
0x3: Push((int) -1)
0x4: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x6: Push("Gun blocking polygon: ")
0x7: Push((int) 248)
0x8: Pop(1); Push(Stack[-4] & Stack[-1]);
0x9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa: @ Trace(Stack[-1])
0xb: Pop(1)
0xc: @ GetMainOutdoorScene(Stack[-1])
0xd: Pop(0)
0xe: Push((int) 248)
0xf: @@ BlockPolygons(Stack[-3], Stack[-1])
0x10: Pop(1)
0x11: Stack[-1] = 0
0x12: @ Hold()
0x13: Pop(0)
0x14: Return(); Pop(4)

0x15: Push((bool) 1)
0x16: @ SetVisibility(Stack[-1])
0x17: Pop(1)
0x18: @ StopGroup0()
0x19: Pop(0)
0x1a: Return(); Pop(0)

