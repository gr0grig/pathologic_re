GlobalVarCount = 0

Strings:
	W:termitnik_load
	W:termitnik
	W:pt_d8q03_burah
	W:NPC_Burah
	W:d8q03_burah.xml
	W:fail
	W:completed
	W:d8q03
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:7400650072006d00690074006e0069006b005f006c006f006100640000007400650072006d00690074006e0069006b000000700074005f00640038007100300033005f006200750072006100680000004e00500043005f00420075007200610068000000640038007100300033005f00620075007200610068002e0078006d006c0000006600610069006c00000063006f006d0070006c006500740065006400000064003800710030003300000063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, bool) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_9 Op = 0x67 Vars = (int, float)


0x0: PushEmpty(int)
0x1: Stack[-1] = (int) 8
0x2: Call2 0x54

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty(object, object)
0x6: @ Trace(Stack[-3])
0x7: Pop(0)
0x8: PushEmpty(bool)
0x9: Stack[-1] = (bool) 0
0xa: Push("termitnik_load") // @poff=0
0xb: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xd: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xe: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xf: Stack[-1] = (bool) 1
0x10: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x11: Push("termitnik") // @poff=30
0x12: @ GetSceneByName(Stack[-2], Stack[-1])
0x13: Pop(1)
0x14: PushEmpty(object, object, string, string, string)
0x15: Stack[-6] = Stack[-4]
0x16: Stack[-3] = "pt_d8q03_burah" // @poff=50
0x17: Stack[-2] = "NPC_Burah" // @poff=80
0x18: Stack[-1] = "d8q03_burah.xml" // @poff=100
0x19: Call2 0x72

0x1a: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1b: Pop(5)
0x1c: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1d: Stack[-1] = 0
0x1e: GOTO 0x2c

0x1f: Push("fail") // @poff=132
0x20: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x22: PushEmpty()
0x23: Call2 0x38

0x24: Pop(0)
0x25: GOTO 0x2c

0x26: Push("completed") // @poff=142
0x27: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x29: PushEmpty()
0x2a: Call2 0x40

0x2b: Pop(0)
0x2c: Return(); Pop(2)

0x2d: PushEmpty(int, int)
0x2e: Push("d8q03") // @poff=162
0x2f: @ GetVariable(Stack[-1], Stack[-2])
0x30: Pop(1)
0x31: Push((int) 1000)
0x32: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x34: PushEmpty()
0x35: Call2 0x38

0x36: Pop(0)
0x37: Return(); Pop(2)

0x38: Push("d8q03") // @poff=162
0x39: Push((int) -1)
0x3a: @ SetVariable(Stack[-2], Stack[-1])
0x3b: Pop(2)
0x3c: PushEmpty()
0x3d: Call2 0x48

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: Push("d8q03") // @poff=162
0x41: Push((int) 1000)
0x42: @ SetVariable(Stack[-2], Stack[-1])
0x43: Pop(2)
0x44: PushEmpty()
0x45: Call2 0x48

0x46: Pop(0)
0x47: Return(); Pop(0)

0x48: EventDisable(26)
0x49: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4a: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4b: Push("cleanup") // @poff=174
0x4c: @ Trigger(Stack[-0]T, Stack[-1])
0x4d: Pop(1)
0x4e: PushEmpty(object)
0x4f: Call2 0x6c

0x50: Pop(0)
0x51: @ RemoveActor(Stack[-1])
0x52: Pop(1)
0x53: Return(); Pop(0)

0x54: PushEmpty(float, float)
0x55: @ GetGameTime(Stack[-1])
0x56: Pop(0)
0x57: Push((int) 24)
0x58: Pop(1); Push(Stack[-4] * Stack[-1]);
0x59: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5b: PushEmpty()
0x5c: Call2 0x48

0x5d: Pop(0)
0x5e: GOTO 0x66

0x5f: Push((int) 0)
0x60: Push((int) 24)
0x61: Pop(1); Push(Stack[-5] * Stack[-1]);
0x62: @ SetTimeEvent(Stack[-2], Stack[-1])
0x63: Pop(2)
0x64: @ Hold()
0x65: Pop(0)
0x66: Return(); Pop(2)

0x67: PushEmpty()
0x68: PushEmpty()
0x69: Call2 0x2d

0x6a: Pop(0)
0x6b: Return(); Pop(0)

0x6c: PushEmpty(object, object)
0x6d: @ self(Stack[-1])
0x6e: Pop(0)
0x6f: Stack[-1] = Stack[-3]
0x70: Return(); Pop(2)

0x71: Stack[-1] = 0
0x72: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x73: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=190
0x74: Pop(0)
0x75: Pop(0); Push((bool) Stack[-4] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x77: Push("Locator ") // @poff=201
0x78: Pop(1); Push(Stack[-1] + Stack[-12]);
0x79: Push(" doesn't exist") // @poff=219
0x7a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7b: @ Trace(Stack[-1])
0x7c: Pop(1)
0x7d: Stack[-1] = 0
0x7e: GOTO 0x81

0x7f: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x80: Pop(0)
0x81: Stack[-1] = Stack[-13]
0x82: Return(); Pop(8)

0x83: Stack[-1] = 0
