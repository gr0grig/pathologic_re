GlobalVarCount = 0

Strings:
	New fog at 
	fog
	horror_fog.xml

Import:
	Hold (0 args)
	Sleep (2 args)
	GetRandomPFPoint (3 args)
	StopGroup0 (0 args)
	Trace (1 args)
	AddActorByType (6 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x4 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x21 Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty()
0x5: Push(-0, 0); TaskCall(1)
0x6: Call 0xa

0x7: Pop(-0, 0); TaskReturn
0x8: Pop(0)
0x9: Return(); Pop(0)

0xa: PushEmpty(bool, cvector, bool, cvector)
0xb: Push((int) 3)
0xc: @ Sleep(Stack[-1], Stack[-3])
0xd: Pop(1)
0xe: Pop(0); Push((bool) Stack[-2] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x10: Return(); Pop(4)

0x11: Push((int) 0)
0x12: Push((int) 0)
0x13: @ GetRandomPFPoint(Stack[-3], Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: PushEmpty(cvector)
0x16: Stack[-1] = Stack[-2]
0x17: Call 0x24

0x18: Pop(1)
0x19: Push((int) 30)
0x1a: @ Sleep(Stack[-1], Stack[-3])
0x1b: Pop(1)
0x1c: Pop(0); Push((bool) Stack[-2] == 0)
0x1d: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1e: GOTO 0x20

0x1f: GOTO 0x11

0x20: Return(); Pop(4)

0x21: @ StopGroup0()
0x22: Pop(0)
0x23: Return(); Pop(0)

0x24: PushEmpty(object, object)
0x25: Push("New fog at ")
0x26: Pop(1); Push(Stack[-1] + Stack[-4]);
0x27: @ Trace(Stack[-1])
0x28: Pop(1)
0x29: Push("fog")
0x2a: PushEmpty(object)
0x2b: Call 0x33

0x2c: Pop(0)
0x2d: Push(CVector(0.0, 0.0, 1.0))
0x2e: Push("horror_fog.xml")
0x2f: @ AddActorByType(Stack[-5], Stack[-4], Stack[-3], Stack[-7], Stack[-2], Stack[-1])
0x30: Pop(4)
0x31: Return(); Pop(2)

0x32: Stack[-1] = 0
0x33: PushEmpty(object, object)
0x34: @ self(Stack[-1])
0x35: Pop(0)
0x36: Stack[-3] = Stack[-1]
0x37: Return(); Pop(2)

0x38: Stack[-1] = 0
