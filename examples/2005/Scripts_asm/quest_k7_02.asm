GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:k7q02
	W:gatherer3
	W:pt_gatherer3
	W:pers_morlok
	W:k7q02_gatherer.xml
	W:place_gatherer
	W:completed
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
// @pool_raw:6b00370071003000320000006700610074006800650072006500720033000000700074005f00670061007400680065007200650072003300000070006500720073005f006d006f0072006c006f006b0000006b0037007100300032005f00670061007400680065007200650072002e0078006d006c00000070006c006100630065005f0067006100740068006500720065007200000063006f006d0070006c006500740065006400000063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200

Import:
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	GetVariable (2 args)
	Trigger (2 args)
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
		EVENT_26 Op = 0x19 Vars = (string)
		EVENT_9 Op = 0x61 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("k7q02") // @poff=0
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: PushEmpty(bool, string)
0x6: Stack[-1] = "gatherer3" // @poff=12
0x7: Call2 0x7e

0x8: Pop(2)
0x9: @ GetMainOutdoorScene(Stack[-1])
0xa: Pop(0)
0xb: PushEmpty(object, object, string, string, string)
0xc: Stack[-6] = Stack[-4]
0xd: Stack[-3] = "pt_gatherer3" // @poff=32
0xe: Stack[-2] = "pers_morlok" // @poff=58
0xf: Stack[-1] = "k7q02_gatherer.xml" // @poff=82
0x10: Call2 0x6c

0x11: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x12: Pop(5)
0x13: PushEmpty(int)
0x14: Stack[-1] = (int) 7
0x15: Call2 0x4e

0x16: Pop(1)
0x17: Return(); Pop(2)

0x18: Stack[-1] = 0
0x19: PushEmpty()
0x1a: @ Trace(Stack[-1])
0x1b: Pop(0)
0x1c: Push("place_gatherer") // @poff=120
0x1d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1f: GOTO 0x26

0x20: Push("completed") // @poff=150
0x21: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x23: PushEmpty()
0x24: Call2 0x3a

0x25: Pop(0)
0x26: Return(); Pop(0)

0x27: PushEmpty(int, int)
0x28: Push("k7q02") // @poff=0
0x29: @ GetVariable(Stack[-1], Stack[-2])
0x2a: Pop(1)
0x2b: Push((int) 1000)
0x2c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2e: PushEmpty()
0x2f: Call2 0x32

0x30: Pop(0)
0x31: Return(); Pop(2)

0x32: Push("k7q02") // @poff=0
0x33: Push((int) -1)
0x34: @ SetVariable(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: PushEmpty()
0x37: Call2 0x42

0x38: Pop(0)
0x39: Return(); Pop(0)

0x3a: Push("k7q02") // @poff=0
0x3b: Push((int) 1000)
0x3c: @ SetVariable(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: PushEmpty()
0x3f: Call2 0x42

0x40: Pop(0)
0x41: Return(); Pop(0)

0x42: EventDisable(26)
0x43: Push( Stack[0 + Tasks[-1].StackPointer] )
0x44: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x45: Push("cleanup") // @poff=170
0x46: @ Trigger(Stack[-0]T, Stack[-1])
0x47: Pop(1)
0x48: PushEmpty(object)
0x49: Call2 0x66

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
0x56: Call2 0x42

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
0x63: Call2 0x27

0x64: Pop(0)
0x65: Return(); Pop(0)

0x66: PushEmpty(object, object)
0x67: @ self(Stack[-1])
0x68: Pop(0)
0x69: Stack[-1] = Stack[-3]
0x6a: Return(); Pop(2)

0x6b: Stack[-1] = 0
0x6c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x6d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=186
0x6e: Pop(0)
0x6f: Pop(0); Push((bool) Stack[-4] == 0)
0x70: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x71: Push("Locator ") // @poff=197
0x72: Pop(1); Push(Stack[-1] + Stack[-12]);
0x73: Push(" doesn't exist") // @poff=215
0x74: Pop(2); Push(Stack[-2] + Stack[-1]);
0x75: @ Trace(Stack[-1])
0x76: Pop(1)
0x77: Stack[-1] = 0
0x78: GOTO 0x7b

0x79: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=245
0x7a: Pop(0)
0x7b: Stack[-1] = Stack[-13]
0x7c: Return(); Pop(8)

0x7d: Stack[-1] = 0
0x7e: PushEmpty(object, object)
0x7f: @ FindActor(Stack[-1], Stack[-3])
0x80: Pop(0)
0x81: Pop(0); Push((bool) Stack[-1] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x83: Stack[-4] = (bool) 0
0x84: Return(); Pop(2)

0x85: @ RemoveActor(Stack[-1])
0x86: Pop(0)
0x87: Stack[-4] = (bool) 1
0x88: Return(); Pop(2)

0x89: Stack[-1] = 0
