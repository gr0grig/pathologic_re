GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:init_house_petr
	W:pt_d7q03_maria
	W:NPC_Maria
	W:d7q03_maria.xml
	W:pt_d7q03_aglaja
	W:NPC_Aglaja
	W:d7q03_aglaja.xml
	W:remove_maria
	W:fail
	W:completed
	W:d7q03
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:69006e00690074005f0068006f007500730065005f0070006500740072000000700074005f00640037007100300033005f006d00610072006900610000004e00500043005f004d0061007200690061000000640037007100300033005f006d0061007200690061002e0078006d006c000000700074005f00640037007100300033005f00610067006c0061006a00610000004e00500043005f00410067006c0061006a0061000000640037007100300033005f00610067006c0061006a0061002e0078006d006c000000720065006d006f00760065005f006d00610072006900610000006600610069006c00000063006f006d0070006c006500740065006400000064003700710030003300000063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	Trace (1 args)
	GetSceneByName (2 args)
	RemoveActor (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_9 Op = 0x75 Vars = (int, float)


0x0: PushEmpty(int)
0x1: Stack[-1] = (int) 7
0x2: Call2 0x62

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty(object, object)
0x6: @ Trace(Stack[-3])
0x7: Pop(0)
0x8: Push("init_house_petr") // @poff=0
0x9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0xb: Push("house_petr") // @poff=10
0xc: @ GetSceneByName(Stack[-2], Stack[-1])
0xd: Pop(1)
0xe: PushEmpty(object, object, string, string, string)
0xf: Stack[-6] = Stack[-4]
0x10: Stack[-3] = "pt_d7q03_maria" // @poff=32
0x11: Stack[-2] = "NPC_Maria" // @poff=62
0x12: Stack[-1] = "d7q03_maria.xml" // @poff=82
0x13: Call2 0x80

0x14: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x15: Pop(5)
0x16: PushEmpty(object, object, string, string, string)
0x17: Stack[-6] = Stack[-4]
0x18: Stack[-3] = "pt_d7q03_aglaja" // @poff=114
0x19: Stack[-2] = "NPC_Aglaja" // @poff=146
0x1a: Stack[-1] = "d7q03_aglaja.xml" // @poff=168
0x1b: Call2 0x80

0x1c: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1d: Pop(5)
0x1e: Stack[-1] = 0
0x1f: GOTO 0x35

0x20: Push("remove_maria") // @poff=202
0x21: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: Push( Stack[0 + Tasks[-1].StackPointer] )
0x24: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x25: @ RemoveActor(Stack[-0]T)
0x26: Pop(0)
0x27: GOTO 0x35

0x28: Push("fail") // @poff=228
0x29: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2b: PushEmpty()
0x2c: Call2 0x41

0x2d: Pop(0)
0x2e: GOTO 0x35

0x2f: Push("completed") // @poff=238
0x30: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x32: PushEmpty()
0x33: Call2 0x49

0x34: Pop(0)
0x35: Return(); Pop(2)

0x36: PushEmpty(int, int)
0x37: Push("d7q03") // @poff=258
0x38: @ GetVariable(Stack[-1], Stack[-2])
0x39: Pop(1)
0x3a: Push((int) 1000)
0x3b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3d: PushEmpty()
0x3e: Call2 0x41

0x3f: Pop(0)
0x40: Return(); Pop(2)

0x41: Push("d7q03") // @poff=258
0x42: Push((int) -1)
0x43: @ SetVariable(Stack[-2], Stack[-1])
0x44: Pop(2)
0x45: PushEmpty()
0x46: Call2 0x51

0x47: Pop(0)
0x48: Return(); Pop(0)

0x49: Push("d7q03") // @poff=258
0x4a: Push((int) 1000)
0x4b: @ SetVariable(Stack[-2], Stack[-1])
0x4c: Pop(2)
0x4d: PushEmpty()
0x4e: Call2 0x51

0x4f: Pop(0)
0x50: Return(); Pop(0)

0x51: EventDisable(26)
0x52: Push( Stack[0 + Tasks[-1].StackPointer] )
0x53: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x54: Push("cleanup") // @poff=270
0x55: @ Trigger(Stack[-0]T, Stack[-1])
0x56: Pop(1)
0x57: Push( Stack[1 + Tasks[-1].StackPointer] )
0x58: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x59: Push("cleanup") // @poff=270
0x5a: @ Trigger(Stack[-1]T, Stack[-1])
0x5b: Pop(1)
0x5c: PushEmpty(object)
0x5d: Call2 0x7a

0x5e: Pop(0)
0x5f: @ RemoveActor(Stack[-1])
0x60: Pop(1)
0x61: Return(); Pop(0)

0x62: PushEmpty(float, float)
0x63: @ GetGameTime(Stack[-1])
0x64: Pop(0)
0x65: Push((int) 24)
0x66: Pop(1); Push(Stack[-4] * Stack[-1]);
0x67: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x69: PushEmpty()
0x6a: Call2 0x51

0x6b: Pop(0)
0x6c: GOTO 0x74

0x6d: Push((int) 0)
0x6e: Push((int) 24)
0x6f: Pop(1); Push(Stack[-5] * Stack[-1]);
0x70: @ SetTimeEvent(Stack[-2], Stack[-1])
0x71: Pop(2)
0x72: @ Hold()
0x73: Pop(0)
0x74: Return(); Pop(2)

0x75: PushEmpty()
0x76: PushEmpty()
0x77: Call2 0x36

0x78: Pop(0)
0x79: Return(); Pop(0)

0x7a: PushEmpty(object, object)
0x7b: @ self(Stack[-1])
0x7c: Pop(0)
0x7d: Stack[-1] = Stack[-3]
0x7e: Return(); Pop(2)

0x7f: Stack[-1] = 0
0x80: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x81: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=286
0x82: Pop(0)
0x83: Pop(0); Push((bool) Stack[-4] == 0)
0x84: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x85: Push("Locator ") // @poff=297
0x86: Pop(1); Push(Stack[-1] + Stack[-12]);
0x87: Push(" doesn't exist") // @poff=315
0x88: Pop(2); Push(Stack[-2] + Stack[-1]);
0x89: @ Trace(Stack[-1])
0x8a: Pop(1)
0x8b: Stack[-1] = 0
0x8c: GOTO 0x8f

0x8d: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x8e: Pop(0)
0x8f: Stack[-1] = Stack[-13]
0x90: Return(); Pop(8)

0x91: Stack[-1] = 0
