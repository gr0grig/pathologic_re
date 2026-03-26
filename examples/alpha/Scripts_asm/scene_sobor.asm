GlobalVarCount = 0

Strings:
	W:pt_Aglaja
	W:NPC_Aglaja
	W:NPC_Danko_Aglaja.xml
	W:noaglaja
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:700074005f00410067006c0061006a00610000004e00500043005f00410067006c0061006a00610000004e00500043005f00440061006e006b006f005f00410067006c0061006a0061002e0078006d006c0000006e006f00610067006c0061006a00610000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

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
		EVENT_26 Op = 0x19 Vars = (string)


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
0xa: Push((int) 144)
0xb: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0xd: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xe: PushEmpty(object, object, string, string, string)
0xf: PushEmpty(object)
0x10: Call 0x1f

0x11: Stack[-1] = Stack[-5]
0x12: Pop(1)
0x13: Stack[-3] = "pt_Aglaja" // @poff=0
0x14: Stack[-2] = "NPC_Aglaja" // @poff=20
0x15: Stack[-1] = "NPC_Danko_Aglaja.xml" // @poff=42
0x16: Call 0x25

0x17: Pop(5)
0x18: Return(); Pop(2)

0x19: PushEmpty()
0x1a: Push("noaglaja") // @poff=84
0x1b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1e: Return(); Pop(0)

0x1f: PushEmpty(object, object)
0x20: @ self(Stack[-1])
0x21: Pop(0)
0x22: Stack[-1] = Stack[-3]
0x23: Return(); Pop(2)

0x24: Stack[-1] = 0
0x25: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x26: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=102
0x27: Pop(0)
0x28: Pop(0); Push((bool) Stack[-4] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2a: Push("Locator ") // @poff=113
0x2b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x2c: Push(" doesn't exist") // @poff=131
0x2d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e: @ Trace(Stack[-1])
0x2f: Pop(1)
0x30: Stack[-1] = 0
0x31: GOTO 0x34

0x32: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x33: Pop(0)
0x34: Stack[-1] = Stack[-13]
0x35: Return(); Pop(8)

0x36: Stack[-1] = 0
