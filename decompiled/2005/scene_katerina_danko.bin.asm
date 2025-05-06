GlobalVarCount = 0

Strings:
	pt_klara
	NPC_Klara
	d3_klara.xml
	GetLocator
	Locator 
	 doesn't exist

Import:
	Hold (0 args)
	RemoveActor (1 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_5 Op = 0x4 Vars = ()
		EVENT_6 Op = 0x15 Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool, int)
0x5: Stack[-1] = (int) 3
0x6: Call2 0x3b

0x7: Pop(1)
0x8: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x9: PushEmpty(object, object, string, string, string)
0xa: PushEmpty(object)
0xb: Call2 0x1a

0xc: Stack[-5] = Stack[-1]
0xd: Pop(1)
0xe: Stack[-3] = "pt_klara"
0xf: Stack[-2] = "NPC_Klara"
0x10: Stack[-1] = "d3_klara.xml"
0x11: Call2 0x20

0x12: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x13: Pop(5)
0x14: Return(); Pop(0)

0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x17: @ RemoveActor(Stack[-0])
0x18: Pop(0)
0x19: Return(); Pop(0)

0x1a: PushEmpty(object, object)
0x1b: @ self(Stack[-1])
0x1c: Pop(0)
0x1d: Stack[-3] = Stack[-1]
0x1e: Return(); Pop(2)

0x1f: Stack[-1] = 0
0x20: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x21: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x22: Pop(0)
0x23: Pop(0); Push((bool) Stack[-4] == 0)
0x24: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x25: Push("Locator ")
0x26: Pop(1); Push(Stack[-1] + Stack[-12]);
0x27: Push(" doesn't exist")
0x28: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29: @ Trace(Stack[-1])
0x2a: Pop(1)
0x2b: Stack[-1] = 0
0x2c: GOTO 0x2f

0x2d: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x2e: Pop(0)
0x2f: Stack[-13] = Stack[-1]
0x30: Return(); Pop(8)

0x31: Stack[-1] = 0
0x32: PushEmpty(float, float)
0x33: @ GetGameTime(Stack[-1])
0x34: Pop(0)
0x35: Push((int) 1)
0x36: PushEmpty(int)
0x37: Push((int) 24)
0x38: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x39: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3a: Return(); Pop(2)

0x3b: PushEmpty()
0x3c: PushEmpty(int)
0x3d: Call2 0x32

0x3e: Pop(0)
0x3f: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x40: Return(); Pop(0)

