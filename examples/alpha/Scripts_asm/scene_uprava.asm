GlobalVarCount = 0

Strings:
	W:quest_d11_02
	W:uprava_load
	W:pt_Block
	W:NPC_Block
	W:NPC_Danko_Block.xml
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:710075006500730074005f006400310031005f003000320000007500700072006100760061005f006c006f00610064000000700074005f0042006c006f0063006b0000004e00500043005f0042006c006f0063006b0000004e00500043005f00440061006e006b006f005f0042006c006f0063006b002e0078006d006c0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	Hold (0 args)
	GetGameTime (1 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (2 args)

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
0x6: PushEmpty(bool, string, string)
0x7: Stack[-2] = "quest_d11_02" // @poff=0
0x8: Stack[-1] = "uprava_load" // @poff=26
0x9: Call 0x36

0xa: Pop(3)
0xb: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0xd: @ GetGameTime(Stack[-1])
0xe: Pop(0)
0xf: Push((int) 192)
0x10: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x11: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x12: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x13: PushEmpty(object, object, string, string, string)
0x14: PushEmpty(object)
0x15: Call 0x1e

0x16: Stack[-1] = Stack[-5]
0x17: Pop(1)
0x18: Stack[-3] = "pt_Block" // @poff=50
0x19: Stack[-2] = "NPC_Block" // @poff=68
0x1a: Stack[-1] = "NPC_Danko_Block.xml" // @poff=88
0x1b: Call 0x24

0x1c: Pop(5)
0x1d: Return(); Pop(2)

0x1e: PushEmpty(object, object)
0x1f: @ self(Stack[-1])
0x20: Pop(0)
0x21: Stack[-1] = Stack[-3]
0x22: Return(); Pop(2)

0x23: Stack[-1] = 0
0x24: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x25: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=128
0x26: Pop(0)
0x27: Pop(0); Push((bool) Stack[-4] == 0)
0x28: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x29: Push("Locator ") // @poff=139
0x2a: Pop(1); Push(Stack[-1] + Stack[-12]);
0x2b: Push(" doesn't exist") // @poff=157
0x2c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d: @ Trace(Stack[-1])
0x2e: Pop(1)
0x2f: Stack[-1] = 0
0x30: GOTO 0x33

0x31: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x32: Pop(0)
0x33: Stack[-1] = Stack[-13]
0x34: Return(); Pop(8)

0x35: Stack[-1] = 0
0x36: PushEmpty(object, object)
0x37: @ FindActor(Stack[-1], Stack[-4])
0x38: Pop(0)
0x39: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3a: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3b: Stack[-5] = (bool) 0
0x3c: Return(); Pop(2)

0x3d: @ Trigger(Stack[-1], Stack[-3])
0x3e: Pop(0)
0x3f: Stack[-5] = (bool) 1
0x40: Return(); Pop(2)

0x41: Stack[-1] = 0
