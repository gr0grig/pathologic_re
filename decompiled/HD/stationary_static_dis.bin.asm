GlobalVarCount = 0

Strings:
	BlockPolygons
	UnblockPolygons

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	GetPFPolyID (1 args)
	GetScene (1 args)
	SetVisibility (1 args)
	IsLoaded (1 args)

RunOp = 0x1b
RunTask = 2

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x14 Vars = ()
	GTASK_2 Vars = (int) Params = 0


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x53

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: @ Hold()
0xe: Pop(0)
0xf: PushEmpty(bool)
0x10: Call2 0x53

0x11: Pop(0)
0x12: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0x13: Return(); Pop(0)

0x14: @ StopGroup0()
0x15: Pop(0)
0x16: @ sync()
0x17: Pop(0)
0x18: Return(); Pop(0)

0x19: Stack[-1] = (bool) 1
0x1a: Return(); Pop(0)

0x1b: PushEmpty(object, object)
0x1c: @ GetPFPolyID(Stack[-0])
0x1d: Pop(0)
0x1e: Push((int) -1)
0x1f: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] != Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x21: Push((int) 4)
0x22: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x23: Push((int) 256)
0x24: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] % Stack[-1]; Pop(2);
0x25: PushEmpty(bool)
0x26: Call2 0x53

0x27: Pop(0)
0x28: Pop(1); Push((bool) Stack[-1] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2a: PushEmpty()
0x2b: Push(-0, 0); TaskCall(0)
0x2c: Call2 0x0

0x2d: Pop(-0, 0); TaskReturn
0x2e: Pop(0)
0x2f: PushEmpty(bool)
0x30: Call2 0x19

0x31: Pop(0)
0x32: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x33: @ GetScene(Stack[-1])
0x34: Pop(0)
0x35: Push((int) 255)
0x36: @@ BlockPolygons(Stack[-0], Stack[-1])
0x37: Pop(1)
0x38: Push((bool) 1)
0x39: @ SetVisibility(Stack[-1])
0x3a: Pop(1)
0x3b: PushEmpty()
0x3c: Call2 0x52

0x3d: Pop(0)
0x3e: PushEmpty()
0x3f: Push(-0, 0); TaskCall(1)
0x40: Call2 0xd

0x41: Pop(-0, 0); TaskReturn
0x42: Pop(0)
0x43: Push((bool) 0)
0x44: @ SetVisibility(Stack[-1])
0x45: Pop(1)
0x46: Push((int) 255)
0x47: @@ UnblockPolygons(Stack[-0], Stack[-1])
0x48: Pop(1)
0x49: Stack[-1] = 0
0x4a: GOTO 0x50

0x4b: PushEmpty()
0x4c: Push(-0, 0); TaskCall(1)
0x4d: Call2 0xd

0x4e: Pop(-0, 0); TaskReturn
0x4f: Pop(0)
0x50: GOTO 0x25

0x51: Return(); Pop(2)

0x52: Return(); Pop(0)

0x53: PushEmpty(bool, bool)
0x54: @ IsLoaded(Stack[-1])
0x55: Pop(0)
0x56: Stack[-3] = Stack[-1]
0x57: Return(); Pop(2)

