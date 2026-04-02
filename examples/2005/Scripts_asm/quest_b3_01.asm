GlobalVarCount = 0

Strings:
	W:place_butcher
	W:house5_07
	W:pt_b3q01_butcher
	W:pers_butcher
	W:b3q01_butcher.xml
	W:cleanup
	W:b3q01
	W:fail
	W:completed
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:70006c006100630065005f006200750074006300680065007200000068006f0075007300650035005f00300037000000700074005f00620033007100300031005f006200750074006300680065007200000070006500720073005f0062007500740063006800650072000000620033007100300031005f0062007500740063006800650072002e0078006d006c00000063006c00650061006e007500700000006200330071003000310000006600610069006c00000063006f006d0070006c00650074006500640000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(object, int, object, int)
0x5: @ Trace(Stack[-5])
0x6: Pop(0)
0x7: Push("place_butcher") // @poff=0
0x8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0xa: Push("house5_07") // @poff=28
0xb: @ GetSceneByName(Stack[-3], Stack[-1])
0xc: Pop(1)
0xd: PushEmpty(object, object, string, string, string)
0xe: Stack[-7] = Stack[-4]
0xf: Stack[-3] = "pt_b3q01_butcher" // @poff=48
0x10: Stack[-2] = "pers_butcher" // @poff=82
0x11: Stack[-1] = "b3q01_butcher.xml" // @poff=108
0x12: Call2 0x58

0x13: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x14: Pop(5)
0x15: Stack[-2] = 0
0x16: GOTO 0x35

0x17: Push("cleanup") // @poff=144
0x18: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x1a: Push("b3q01") // @poff=160
0x1b: @ GetVariable(Stack[-1], Stack[-2])
0x1c: Pop(1)
0x1d: Push((int) 1000)
0x1e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x20: PushEmpty()
0x21: Call2 0x36

0x22: Pop(0)
0x23: GOTO 0x27

0x24: PushEmpty()
0x25: Call2 0x46

0x26: Pop(0)
0x27: GOTO 0x35

0x28: Push("fail") // @poff=172
0x29: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2b: PushEmpty()
0x2c: Call2 0x36

0x2d: Pop(0)
0x2e: GOTO 0x35

0x2f: Push("completed") // @poff=182
0x30: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x32: PushEmpty()
0x33: Call2 0x3e

0x34: Pop(0)
0x35: Return(); Pop(4)

0x36: Push("b3q01") // @poff=160
0x37: Push((int) -1)
0x38: @ SetVariable(Stack[-2], Stack[-1])
0x39: Pop(2)
0x3a: PushEmpty()
0x3b: Call2 0x46

0x3c: Pop(0)
0x3d: Return(); Pop(0)

0x3e: Push("b3q01") // @poff=160
0x3f: Push((int) 1000)
0x40: @ SetVariable(Stack[-2], Stack[-1])
0x41: Pop(2)
0x42: PushEmpty()
0x43: Call2 0x46

0x44: Pop(0)
0x45: Return(); Pop(0)

0x46: EventDisable(26)
0x47: Push( Stack[0 + Tasks[-1].StackPointer] )
0x48: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x49: Push("cleanup") // @poff=144
0x4a: @ Trigger(Stack[-0]T, Stack[-1])
0x4b: Pop(1)
0x4c: PushEmpty(object)
0x4d: Call2 0x52

0x4e: Pop(0)
0x4f: @ RemoveActor(Stack[-1])
0x50: Pop(1)
0x51: Return(); Pop(0)

0x52: PushEmpty(object, object)
0x53: @ self(Stack[-1])
0x54: Pop(0)
0x55: Stack[-1] = Stack[-3]
0x56: Return(); Pop(2)

0x57: Stack[-1] = 0
0x58: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x59: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=202
0x5a: Pop(0)
0x5b: Pop(0); Push((bool) Stack[-4] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5d: Push("Locator ") // @poff=213
0x5e: Pop(1); Push(Stack[-1] + Stack[-12]);
0x5f: Push(" doesn't exist") // @poff=231
0x60: Pop(2); Push(Stack[-2] + Stack[-1]);
0x61: @ Trace(Stack[-1])
0x62: Pop(1)
0x63: Stack[-1] = 0
0x64: GOTO 0x67

0x65: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x66: Pop(0)
0x67: Stack[-1] = Stack[-13]
0x68: Return(); Pop(8)

0x69: Stack[-1] = 0
