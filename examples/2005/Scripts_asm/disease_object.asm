GlobalVarCount = 0

Strings:
	W:cleanup
	W:restore
	W:Blocking polygons: 
	A:BlockPolygons
	A:UnblockPolygons
	W:ERROR: Can't find PF polygon to block
// @pool_raw:63006c00650061006e0075007000000072006500730074006f0072006500000042006c006f0063006b0069006e006700200070006f006c00790067006f006e0073003a0020000000426c6f636b506f6c79676f6e7300556e626c6f636b506f6c79676f6e73004500520052004f0052003a002000430061006e00270074002000660069006e006400200050004600200070006f006c00790067006f006e00200074006f00200062006c006f0063006b000000

Import:
	Hold (0 args)
	SetVisibility (1 args)
	RemoveActor (1 args)
	GetPFPolyID (1 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_5 Op = 0x10 Vars = ()
		EVENT_6 Op = 0x1a Vars = ()


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: PushEmpty()
0x6: Push("cleanup") // @poff=0
0x7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa: GOTO 0xf

0xb: Push("restore") // @poff=16
0xc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xe: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xf: Return(); Pop(0)

0x10: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x12: Push((bool) 1)
0x13: @ SetVisibility(Stack[-1])
0x14: Pop(1)
0x15: PushEmpty(bool)
0x16: Stack[-1] = (bool) 1
0x17: Call2 0x26

0x18: Pop(1)
0x19: Return(); Pop(0)

0x1a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1b: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x1c: PushEmpty(bool)
0x1d: Stack[-1] = (bool) 0
0x1e: Call2 0x26

0x1f: Pop(1)
0x20: PushEmpty(object)
0x21: Call2 0x43

0x22: Pop(0)
0x23: @ RemoveActor(Stack[-1])
0x24: Pop(1)
0x25: Return(); Pop(0)

0x26: PushEmpty(int, object, int, object)
0x27: @ GetPFPolyID(Stack[-2])
0x28: Pop(0)
0x29: Push((int) -1)
0x2a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x2c: @ GetMainOutdoorScene(Stack[-1])
0x2d: Pop(0)
0x2e: Push(Stack[-5])
0x2f: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x30: Push("Blocking polygons: ") // @poff=32
0x31: Push((int) 1016)
0x32: Pop(1); Push(Stack[-4] & Stack[-1]);
0x33: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34: @ Trace(Stack[-1])
0x35: Pop(1)
0x36: Push((int) 1016)
0x37: @@ BlockPolygons(Stack[-3], Stack[-1]); Obj=2 // @poff=72
0x38: Pop(1)
0x39: GOTO 0x3d

0x3a: Push((int) 1016)
0x3b: @@ UnblockPolygons(Stack[-3], Stack[-1]); Obj=2 // @poff=86
0x3c: Pop(1)
0x3d: Stack[-1] = 0
0x3e: GOTO 0x42

0x3f: Push("ERROR: Can't find PF polygon to block") // @poff=102
0x40: @ Trace(Stack[-1])
0x41: Pop(1)
0x42: Return(); Pop(4)

0x43: PushEmpty(object, object)
0x44: @ self(Stack[-1])
0x45: Pop(0)
0x46: Stack[-1] = Stack[-3]
0x47: Return(); Pop(2)

0x48: Stack[-1] = 0
