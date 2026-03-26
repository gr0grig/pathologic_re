GlobalVarCount = 0

Strings:
	W:woman
	W:dt_house_1_07
	A:EnableSubset
	W:d2q01_house1
	W:pt_woman
	W:pers_woman
	W:d2q01_woman.xml
	W:cursed_women
	W:pt_enemy01
	W:d2q01_zombie_woman.xml
	W:pt_enemy02
	W:cleanup
	W:fail
	W:completed
	W:d2q01
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:77006f006d0061006e000000640074005f0068006f007500730065005f0031005f00300037000000456e61626c6553756273657400640032007100300031005f0068006f0075007300650031000000700074005f0077006f006d0061006e00000070006500720073005f0077006f006d0061006e000000640032007100300031005f0077006f006d0061006e002e0078006d006c0000006300750072007300650064005f0077006f006d0065006e000000700074005f0065006e0065006d007900300031000000640032007100300031005f007a006f006d006200690065005f0077006f006d0061006e002e0078006d006c000000700074005f0065006e0065006d00790030003200000063006c00650061006e007500700000006600610069006c00000063006f006d0070006c00650074006500640000006400320071003000310000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	Hold (0 args)
	Trace (1 args)
	FindActor (2 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	SetVariable (2 args)
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

0x4: PushEmpty(object, object, object, object, object, object)
0x5: @ Trace(Stack[-7])
0x6: Pop(0)
0x7: Push("woman") // @poff=0
0x8: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0xa: Push("dt_house_1_07") // @poff=12
0xb: @ FindActor(Stack[-4], Stack[-1])
0xc: Pop(1)
0xd: Push((int) 200)
0xe: Push((bool) 1)
0xf: @@ EnableSubset(Stack[-2], Stack[-1]); Obj=5 // @poff=40
0x10: Pop(2)
0x11: Push("d2q01_house1") // @poff=53
0x12: @ GetSceneByName(Stack[-3], Stack[-1])
0x13: Pop(1)
0x14: PushEmpty(object, object, string, string, string)
0x15: Stack[-7] = Stack[-4]
0x16: Stack[-3] = "pt_woman" // @poff=79
0x17: Stack[-2] = "pers_woman" // @poff=97
0x18: Stack[-1] = "d2q01_woman.xml" // @poff=119
0x19: Call 0x55

0x1a: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1b: Pop(5)
0x1c: Stack[-2] = 0
0x1d: Stack[-3] = 0
0x1e: GOTO 0x45

0x1f: Push("cursed_women") // @poff=151
0x20: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x22: Push("d2q01_house1") // @poff=53
0x23: @ GetSceneByName(Stack[-2], Stack[-1])
0x24: Pop(1)
0x25: PushEmpty(object, object, string, string, string)
0x26: Stack[-6] = Stack[-4]
0x27: Stack[-3] = "pt_enemy01" // @poff=177
0x28: Stack[-2] = "pers_woman" // @poff=97
0x29: Stack[-1] = "d2q01_zombie_woman.xml" // @poff=199
0x2a: Call 0x55

0x2b: Pop(5)
0x2c: PushEmpty(object, object, string, string, string)
0x2d: Stack[-6] = Stack[-4]
0x2e: Stack[-3] = "pt_enemy02" // @poff=245
0x2f: Stack[-2] = "pers_woman" // @poff=97
0x30: Stack[-1] = "d2q01_zombie_woman.xml" // @poff=199
0x31: Call 0x55

0x32: Pop(5)
0x33: Push("cleanup") // @poff=267
0x34: @ Trigger(Stack[-0]T, Stack[-1])
0x35: Pop(1)
0x36: Stack[-1] = 0
0x37: GOTO 0x45

0x38: Push("fail") // @poff=283
0x39: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3b: PushEmpty()
0x3c: Call 0x46

0x3d: Pop(0)
0x3e: GOTO 0x45

0x3f: Push("completed") // @poff=293
0x40: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x42: PushEmpty()
0x43: Call 0x46

0x44: Pop(0)
0x45: Return(); Pop(6)

0x46: Push("d2q01") // @poff=313
0x47: Push((int) 1000)
0x48: @ SetVariable(Stack[-2], Stack[-1])
0x49: Pop(2)
0x4a: PushEmpty()
0x4b: Call 0x4e

0x4c: Pop(0)
0x4d: Return(); Pop(0)

0x4e: EventDisable(26)
0x4f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x50: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x51: Push("cleanup") // @poff=267
0x52: @ Trigger(Stack[-0]T, Stack[-1])
0x53: Pop(1)
0x54: Return(); Pop(0)

0x55: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x56: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=325
0x57: Pop(0)
0x58: Pop(0); Push((bool) Stack[-4] == 0)
0x59: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5a: Push("Locator ") // @poff=336
0x5b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x5c: Push(" doesn't exist") // @poff=354
0x5d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5e: @ Trace(Stack[-1])
0x5f: Pop(1)
0x60: Stack[-1] = 0
0x61: GOTO 0x64

0x62: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x63: Pop(0)
0x64: Stack[-1] = Stack[-13]
0x65: Return(); Pop(8)

0x66: Stack[-1] = 0
