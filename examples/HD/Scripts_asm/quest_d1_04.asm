GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:d1q04
	W:r2_house_2_02
	W:pt_powder
	A:GetLocator
	W:Locator doesn't exist for d1_04_powder
	W:scripted_container
	W:d1q04_item_powder.xml
	W:r2_house_2_02@door1
	W:r2_house_2_02@door2
	W:fail
	W:completed
	W:Door 
	W: not found
	W:locked
	A:SetProperty
// @pool_raw:640031007100300034000000720032005f0068006f007500730065005f0032005f00300032000000700074005f0070006f00770064006500720000004765744c6f6361746f72004c006f006300610074006f007200200064006f00650073006e0027007400200065007800690073007400200066006f0072002000640031005f00300034005f0070006f0077006400650072000000730063007200690070007400650064005f0063006f006e007400610069006e00650072000000640031007100300034005f006900740065006d005f0070006f0077006400650072002e0078006d006c000000720032005f0068006f007500730065005f0032005f0030003200400064006f006f00720031000000720032005f0068006f007500730065005f0032005f0030003200400064006f006f007200320000006600610069006c00000063006f006d0070006c006500740065006400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900

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
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x25 Vars = (string)
		EVENT_9 Op = 0x6b Vars = (int, float)


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

0xd: Push("Locator doesn't exist for d1_04_powder") // @poff=71
0xe: @ Trace(Stack[-1])
0xf: Pop(1)
0x10: GOTO 0x15

0x11: Push("scripted_container") // @poff=149
0x12: Push("d1q04_item_powder.xml") // @poff=187
0x13: @ AddActorByType(Stack[-0]T, Stack[-2], Stack[-6], Stack[-4], Stack[-3], Stack[-1])
0x14: Pop(2)
0x15: PushEmpty(string, bool)
0x16: Stack[-2] = "r2_house_2_02@door1" // @poff=231
0x17: Stack[-1] = (bool) 0
0x18: Call2 0x76

0x19: Pop(2)
0x1a: PushEmpty(string, bool)
0x1b: Stack[-2] = "r2_house_2_02@door2" // @poff=271
0x1c: Stack[-1] = (bool) 0
0x1d: Call2 0x76

0x1e: Pop(2)
0x1f: PushEmpty(int)
0x20: Stack[-1] = (int) 1
0x21: Call2 0x58

0x22: Pop(1)
0x23: Return(); Pop(8)

0x24: Stack[-4] = 0
0x25: PushEmpty()
0x26: @ Trace(Stack[-1])
0x27: Pop(0)
0x28: Push("fail") // @poff=311
0x29: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2b: PushEmpty()
0x2c: Call2 0x3e

0x2d: Pop(0)
0x2e: GOTO 0x35

0x2f: Push("completed") // @poff=321
0x30: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x32: PushEmpty()
0x33: Call2 0x36

0x34: Pop(0)
0x35: Return(); Pop(0)

0x36: Push("d1q04") // @poff=0
0x37: Push((int) 1000)
0x38: @ SetVariable(Stack[-2], Stack[-1])
0x39: Pop(2)
0x3a: PushEmpty()
0x3b: Call2 0x51

0x3c: Pop(0)
0x3d: Return(); Pop(0)

0x3e: Push("d1q04") // @poff=0
0x3f: Push((int) -1)
0x40: @ SetVariable(Stack[-2], Stack[-1])
0x41: Pop(2)
0x42: PushEmpty()
0x43: Call2 0x51

0x44: Pop(0)
0x45: Return(); Pop(0)

0x46: PushEmpty(int, int)
0x47: Push("d1q04") // @poff=0
0x48: @ GetVariable(Stack[-1], Stack[-2])
0x49: Pop(1)
0x4a: Push((int) 1000)
0x4b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4c: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4d: PushEmpty()
0x4e: Call2 0x3e

0x4f: Pop(0)
0x50: Return(); Pop(2)

0x51: EventDisable(26)
0x52: PushEmpty(object)
0x53: Call2 0x70

0x54: Pop(0)
0x55: @ RemoveActor(Stack[-1])
0x56: Pop(1)
0x57: Return(); Pop(0)

0x58: PushEmpty(float, float)
0x59: @ GetGameTime(Stack[-1])
0x5a: Pop(0)
0x5b: Push((int) 24)
0x5c: Pop(1); Push(Stack[-4] * Stack[-1]);
0x5d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5f: PushEmpty()
0x60: Call2 0x51

0x61: Pop(0)
0x62: GOTO 0x6a

0x63: Push((int) 0)
0x64: Push((int) 24)
0x65: Pop(1); Push(Stack[-5] * Stack[-1]);
0x66: @ SetTimeEvent(Stack[-2], Stack[-1])
0x67: Pop(2)
0x68: @ Hold()
0x69: Pop(0)
0x6a: Return(); Pop(2)

0x6b: PushEmpty()
0x6c: PushEmpty()
0x6d: Call2 0x46

0x6e: Pop(0)
0x6f: Return(); Pop(0)

0x70: PushEmpty(object, object)
0x71: @ self(Stack[-1])
0x72: Pop(0)
0x73: Stack[-1] = Stack[-3]
0x74: Return(); Pop(2)

0x75: Stack[-1] = 0
0x76: PushEmpty(object, object)
0x77: @ FindActor(Stack[-1], Stack[-4])
0x78: Pop(0)
0x79: Pop(0); Push((bool) Stack[-1] == 0)
0x7a: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7b: Push("Door ") // @poff=341
0x7c: Pop(1); Push(Stack[-1] + Stack[-5]);
0x7d: Push(" not found") // @poff=353
0x7e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7f: @ Trace(Stack[-1])
0x80: Pop(1)
0x81: GOTO 0x85

0x82: Push("locked") // @poff=375
0x83: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=389
0x84: Pop(1)
0x85: Return(); Pop(2)

0x86: Stack[-1] = 0
