GlobalVarCount = 0

Strings:
	pt_laska
	NPC_Laska
	NPC_Klara_Laska.xml
	nolaska
	GetLocator
	Locator 
	 doesn't exist

Import:
	Hold (0 args)
	RemoveActor (1 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object) Params = 0
		EVENT_5 Op = 0x5 Vars = ()
		EVENT_6 Op = 0x13 Vars = ()
		EVENT_26 Op = 0x18 Vars = (string)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x7: PushEmpty(object, object, string, string, string)
0x8: PushEmpty(object)
0x9: Call2 0x23

0xa: Stack[-5] = Stack[-1]
0xb: Pop(1)
0xc: Stack[-3] = "pt_laska"
0xd: Stack[-2] = "NPC_Laska"
0xe: Stack[-1] = "NPC_Klara_Laska.xml"
0xf: Call2 0x29

0x10: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x11: Pop(5)
0x12: Return(); Pop(0)

0x13: Push( Stack[1 + Tasks[-1].StackPointer] )
0x14: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x15: @ RemoveActor(Stack[-1])
0x16: Pop(0)
0x17: Return(); Pop(0)

0x18: PushEmpty()
0x19: Push("nolaska")
0x1a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1d: GOTO 0x22

0x1e: Push("laska")
0x1f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x21: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x22: Return(); Pop(0)

0x23: PushEmpty(object, object)
0x24: @ self(Stack[-1])
0x25: Pop(0)
0x26: Stack[-3] = Stack[-1]
0x27: Return(); Pop(2)

0x28: Stack[-1] = 0
0x29: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x2a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x2b: Pop(0)
0x2c: Pop(0); Push((bool) Stack[-4] == 0)
0x2d: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x2e: Push("Locator ")
0x2f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x30: Push(" doesn't exist")
0x31: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32: @ Trace(Stack[-1])
0x33: Pop(1)
0x34: Stack[-1] = 0
0x35: GOTO 0x38

0x36: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x37: Pop(0)
0x38: Stack[-13] = Stack[-1]
0x39: Return(); Pop(8)

0x3a: Stack[-1] = 0
