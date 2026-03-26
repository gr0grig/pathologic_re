GlobalVarCount = 0

Strings:
	W:d1q04
	W:r2_house_2_02
	W:pt_powder
	A:GetLocator
	W:Locator doesn't exist for qd1_04_powder
	W:scripted_container
	W:d1q04_item_powder.xml
	W:fail
	W:completed
// @pool_raw:640031007100300034000000720032005f0068006f007500730065005f0032005f00300032000000700074005f0070006f00770064006500720000004765744c6f6361746f72004c006f006300610074006f007200200064006f00650073006e0027007400200065007800690073007400200066006f00720020007100640031005f00300034005f0070006f0077006400650072000000730063007200690070007400650064005f0063006f006e007400610069006e00650072000000640031007100300034005f006900740065006d005f0070006f0077006400650072002e0078006d006c0000006600610069006c00000063006f006d0070006c0065007400650064000000

Import:
	SetVariable (2 args)
	GetSceneByName (2 args)
	Trace (1 args)
	AddActorByType (6 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x1b Vars = (string)
		EVENT_9 Op = 0x61 Vars = (int, float)


0x0: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x1: Push("d1q04") // @poff=0
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: Push("r2_house_2_02") // @poff=12
0x6: @ GetSceneByName(Stack[-5], Stack[-1])
0x7: Pop(1)
0x8: Push("pt_powder") // @poff=40
0x9: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2]); Obj=5 // @poff=60
0xa: Pop(1)
0xb: Pop(0); Push((bool) Stack[-3] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xd: Push("Locator doesn't exist for qd1_04_powder") // @poff=71
0xe: @ Trace(Stack[-1])
0xf: Pop(1)
0x10: GOTO 0x15

0x11: Push("scripted_container") // @poff=151
0x12: Push("d1q04_item_powder.xml") // @poff=189
0x13: @ AddActorByType(Stack[-0]T, Stack[-2], Stack[-6], Stack[-4], Stack[-3], Stack[-1])
0x14: Pop(2)
0x15: PushEmpty(int)
0x16: Stack[-1] = (int) 1
0x17: Call 0x4e

0x18: Pop(1)
0x19: Return(); Pop(8)

0x1a: Stack[-4] = 0
0x1b: PushEmpty()
0x1c: @ Trace(Stack[-1])
0x1d: Pop(0)
0x1e: Push("fail") // @poff=233
0x1f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x21: PushEmpty()
0x22: Call 0x34

0x23: Pop(0)
0x24: GOTO 0x2b

0x25: Push("completed") // @poff=243
0x26: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x28: PushEmpty()
0x29: Call 0x2c

0x2a: Pop(0)
0x2b: Return(); Pop(0)

0x2c: Push("d1q04") // @poff=0
0x2d: Push((int) 1000)
0x2e: @ SetVariable(Stack[-2], Stack[-1])
0x2f: Pop(2)
0x30: PushEmpty()
0x31: Call 0x47

0x32: Pop(0)
0x33: Return(); Pop(0)

0x34: Push("d1q04") // @poff=0
0x35: Push((int) -1)
0x36: @ SetVariable(Stack[-2], Stack[-1])
0x37: Pop(2)
0x38: PushEmpty()
0x39: Call 0x47

0x3a: Pop(0)
0x3b: Return(); Pop(0)

0x3c: PushEmpty(int, int)
0x3d: Push("d1q04") // @poff=0
0x3e: @ GetVariable(Stack[-1], Stack[-2])
0x3f: Pop(1)
0x40: Push((int) 1000)
0x41: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x43: PushEmpty()
0x44: Call 0x34

0x45: Pop(0)
0x46: Return(); Pop(2)

0x47: EventDisable(26)
0x48: PushEmpty(object)
0x49: Call 0x66

0x4a: Pop(0)
0x4b: @ RemoveActor(Stack[-1])
0x4c: Pop(1)
0x4d: Return(); Pop(0)

0x4e: PushEmpty(float, float)
0x4f: @ GetGameTime(Stack[-1])
0x50: Pop(0)
0x51: Push((int) 24)
0x52: Pop(1); Push(Stack[-4] * Stack[-1]);
0x53: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x55: PushEmpty()
0x56: Call 0x47

0x57: Pop(0)
0x58: GOTO 0x60

0x59: Push((int) 0)
0x5a: Push((int) 24)
0x5b: Pop(1); Push(Stack[-5] * Stack[-1]);
0x5c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x5d: Pop(2)
0x5e: @ Hold()
0x5f: Pop(0)
0x60: Return(); Pop(2)

0x61: PushEmpty()
0x62: PushEmpty()
0x63: Call 0x3c

0x64: Pop(0)
0x65: Return(); Pop(0)

0x66: PushEmpty(object, object)
0x67: @ self(Stack[-1])
0x68: Pop(0)
0x69: Stack[-1] = Stack[-3]
0x6a: Return(); Pop(2)

0x6b: Stack[-1] = 0
