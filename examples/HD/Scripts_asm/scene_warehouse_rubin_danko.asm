GlobalVarCount = 0

Strings:
	W:pt_rubin
	W:NPC_Rubin
	W:NPC_Danko_Rubin.xml
	W:quest_k10_01
	W:warehouse_rubin_load
	W:norubin
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:700074005f0072007500620069006e0000004e00500043005f0052007500620069006e0000004e00500043005f00440061006e006b006f005f0052007500620069006e002e0078006d006c000000710075006500730074005f006b00310030005f00300031000000770061007200650068006f007500730065005f0072007500620069006e005f006c006f006100640000006e006f0072007500620069006e0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	Hold (0 args)
	RemoveActor (1 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object) Params = 0
		EVENT_5 Op = 0x5 Vars = ()
		EVENT_6 Op = 0x18 Vars = ()
		EVENT_26 Op = 0x1d Vars = (string)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x7: PushEmpty(object, object, string, string, string)
0x8: PushEmpty(object)
0x9: Call2 0x28

0xa: Stack[-1] = Stack[-5]
0xb: Pop(1)
0xc: Stack[-3] = "pt_rubin" // @poff=0
0xd: Stack[-2] = "NPC_Rubin" // @poff=18
0xe: Stack[-1] = "NPC_Danko_Rubin.xml" // @poff=38
0xf: Call2 0x2e

0x10: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x11: Pop(5)
0x12: PushEmpty(bool, string, string)
0x13: Stack[-2] = "quest_k10_01" // @poff=78
0x14: Stack[-1] = "warehouse_rubin_load" // @poff=104
0x15: Call2 0x40

0x16: Pop(3)
0x17: Return(); Pop(0)

0x18: Push( Stack[1 + Tasks[-1].StackPointer] )
0x19: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x1a: @ RemoveActor(Stack[-1]T)
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push("norubin") // @poff=146
0x1f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x21: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x22: GOTO 0x27

0x23: Push("rubin") // @poff=6
0x24: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: PushEmpty(object, object)
0x29: @ self(Stack[-1])
0x2a: Pop(0)
0x2b: Stack[-1] = Stack[-3]
0x2c: Return(); Pop(2)

0x2d: Stack[-1] = 0
0x2e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x2f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=162
0x30: Pop(0)
0x31: Pop(0); Push((bool) Stack[-4] == 0)
0x32: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x33: Push("Locator ") // @poff=173
0x34: Pop(1); Push(Stack[-1] + Stack[-12]);
0x35: Push(" doesn't exist") // @poff=191
0x36: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37: @ Trace(Stack[-1])
0x38: Pop(1)
0x39: Stack[-1] = 0
0x3a: GOTO 0x3d

0x3b: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x3c: Pop(0)
0x3d: Stack[-1] = Stack[-13]
0x3e: Return(); Pop(8)

0x3f: Stack[-1] = 0
0x40: PushEmpty(object, object)
0x41: @ FindActor(Stack[-1], Stack[-4])
0x42: Pop(0)
0x43: Pop(0); PushNull((bool) Stack[-1] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x45: Stack[-5] = (bool) 0
0x46: Return(); Pop(2)

0x47: @ Trigger(Stack[-1], Stack[-3])
0x48: Pop(0)
0x49: Stack[-5] = (bool) 1
0x4a: Return(); Pop(2)

0x4b: Stack[-1] = 0
