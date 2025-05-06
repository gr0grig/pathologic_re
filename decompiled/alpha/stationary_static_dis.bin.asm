GlobalVarCount = 0

Strings:
	BlockPolygons
	UnblockPolygons

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	GetPFPolyID (1 args)
	GetScene (1 args)
	SetVisibility (1 args)
	IsLoaded (1 args)

RunOp = 0xe
RunTask = 2

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x9 Vars = ()
	GTASK_2 Vars = (int) Params = 0


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: @ Hold()
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: @ StopGroup0()
0xa: Pop(0)
0xb: Return(); Pop(0)

0xc: Stack[-1] = (bool) 1
0xd: Return(); Pop(0)

0xe: PushEmpty(object, object)
0xf: @ GetPFPolyID(Stack[-0])
0x10: Pop(0)
0x11: Push((int) -1)
0x12: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] != Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x14: Push((int) 4)
0x15: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x16: Push((int) 256)
0x17: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] % Stack[-1]; Pop(2);
0x18: PushEmpty(bool)
0x19: Call 0x46

0x1a: Pop(0)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: PushEmpty(bool)
0x23: Call 0xc

0x24: Pop(0)
0x25: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x26: @ GetScene(Stack[-1])
0x27: Pop(0)
0x28: Push((int) 255)
0x29: @@ BlockPolygons(Stack[-0], Stack[-1])
0x2a: Pop(1)
0x2b: Push((bool) 1)
0x2c: @ SetVisibility(Stack[-1])
0x2d: Pop(1)
0x2e: PushEmpty()
0x2f: Call 0x45

0x30: Pop(0)
0x31: PushEmpty()
0x32: Push(-0, 0); TaskCall(1)
0x33: Call 0x6

0x34: Pop(-0, 0); TaskReturn
0x35: Pop(0)
0x36: Push((bool) 0)
0x37: @ SetVisibility(Stack[-1])
0x38: Pop(1)
0x39: Push((int) 255)
0x3a: @@ UnblockPolygons(Stack[-0], Stack[-1])
0x3b: Pop(1)
0x3c: Stack[-1] = 0
0x3d: GOTO 0x43

0x3e: PushEmpty()
0x3f: Push(-0, 0); TaskCall(1)
0x40: Call 0x6

0x41: Pop(-0, 0); TaskReturn
0x42: Pop(0)
0x43: GOTO 0x18

0x44: Return(); Pop(2)

0x45: Return(); Pop(0)

0x46: PushEmpty(bool, bool)
0x47: @ IsLoaded(Stack[-1])
0x48: Pop(0)
0x49: Stack[-3] = Stack[-1]
0x4a: Return(); Pop(2)

