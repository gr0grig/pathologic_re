GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:cot_eva
	W:nodanko
	W:cleanup
	W:k3q01
	W:fail
	W:completed
// @pool_raw:63006f0074005f0065007600610000006e006f00640061006e006b006f00000063006c00650061006e007500700000006b00330071003000310000006600610069006c00000063006f006d0070006c0065007400650064000000

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0xc Vars = (string)


0x0: PushEmpty(object, object)
0x1: Push("cot_eva") // @poff=0
0x2: @ GetSceneByName(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: Push("nodanko") // @poff=16
0x5: @ Trigger(Stack[-2], Stack[-1])
0x6: Pop(1)
0x7: @ Hold()
0x8: Pop(0)
0x9: GOTO 0x7

0xa: Return(); Pop(2)

0xb: Stack[-1] = 0
0xc: PushEmpty(int, int)
0xd: @ Trace(Stack[-3])
0xe: Pop(0)
0xf: Push("cleanup") // @poff=32
0x10: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x12: Push("k3q01") // @poff=48
0x13: @ GetVariable(Stack[-1], Stack[-2])
0x14: Pop(1)
0x15: Push((int) 1000)
0x16: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty()
0x19: Call2 0x2e

0x1a: Pop(0)
0x1b: GOTO 0x1f

0x1c: PushEmpty()
0x1d: Call2 0x3e

0x1e: Pop(0)
0x1f: GOTO 0x2d

0x20: Push("fail") // @poff=60
0x21: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: PushEmpty()
0x24: Call2 0x2e

0x25: Pop(0)
0x26: GOTO 0x2d

0x27: Push("completed") // @poff=70
0x28: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2a: PushEmpty()
0x2b: Call2 0x36

0x2c: Pop(0)
0x2d: Return(); Pop(2)

0x2e: Push("k3q01") // @poff=48
0x2f: Push((int) -1)
0x30: @ SetVariable(Stack[-2], Stack[-1])
0x31: Pop(2)
0x32: PushEmpty()
0x33: Call2 0x3e

0x34: Pop(0)
0x35: Return(); Pop(0)

0x36: Push("k3q01") // @poff=48
0x37: Push((int) 1000)
0x38: @ SetVariable(Stack[-2], Stack[-1])
0x39: Pop(2)
0x3a: PushEmpty()
0x3b: Call2 0x3e

0x3c: Pop(0)
0x3d: Return(); Pop(0)

0x3e: PushEmpty(object, object)
0x3f: EventDisable(26)
0x40: Push("cot_eva") // @poff=0
0x41: @ GetSceneByName(Stack[-2], Stack[-1])
0x42: Pop(1)
0x43: Push("danko") // @poff=20
0x44: @ Trigger(Stack[-2], Stack[-1])
0x45: Pop(1)
0x46: PushEmpty(object)
0x47: Call2 0x4d

0x48: Pop(0)
0x49: @ RemoveActor(Stack[-1])
0x4a: Pop(1)
0x4b: Return(); Pop(2)

0x4c: Stack[-1] = 0
0x4d: PushEmpty(object, object)
0x4e: @ self(Stack[-1])
0x4f: Pop(0)
0x50: Stack[-1] = Stack[-3]
0x51: Return(); Pop(2)

0x52: Stack[-1] = 0
