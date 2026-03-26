GlobalVarCount = 0

Strings:
	W:pt_d11q03_Burah
	W:NPC_Burah
	W:d11q03_Burah.xml
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:700074005f006400310031007100300033005f004200750072006100680000004e00500043005f004200750072006100680000006400310031007100300033005f00420075007200610068002e0078006d006c0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	Hold (0 args)
	GetGameTime (1 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_5 Op = 0x5 Vars = ()


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: PushEmpty(float, float)
0x6: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x8: @ GetGameTime(Stack[-1])
0x9: Pop(0)
0xa: Push((int) 240)
0xb: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0xd: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xe: PushEmpty(object, object, string, string, string)
0xf: PushEmpty(object)
0x10: Call 0x19

0x11: Stack[-1] = Stack[-5]
0x12: Pop(1)
0x13: Stack[-3] = "pt_d11q03_Burah" // @poff=0
0x14: Stack[-2] = "NPC_Burah" // @poff=32
0x15: Stack[-1] = "d11q03_Burah.xml" // @poff=52
0x16: Call 0x1f

0x17: Pop(5)
0x18: Return(); Pop(2)

0x19: PushEmpty(object, object)
0x1a: @ self(Stack[-1])
0x1b: Pop(0)
0x1c: Stack[-1] = Stack[-3]
0x1d: Return(); Pop(2)

0x1e: Stack[-1] = 0
0x1f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x20: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=86
0x21: Pop(0)
0x22: Pop(0); Push((bool) Stack[-4] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x24: Push("Locator ") // @poff=97
0x25: Pop(1); Push(Stack[-1] + Stack[-12]);
0x26: Push(" doesn't exist") // @poff=115
0x27: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28: @ Trace(Stack[-1])
0x29: Pop(1)
0x2a: Stack[-1] = 0
0x2b: GOTO 0x2e

0x2c: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x2d: Pop(0)
0x2e: Stack[-1] = Stack[-13]
0x2f: Return(); Pop(8)

0x30: Stack[-1] = 0
