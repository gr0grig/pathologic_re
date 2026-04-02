GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:k7q03
	W:place_family
	W:burah_home
	W:pt_k7q03_father
	W:pers_unosha
	W:k7q03_father.xml
	W:pt_k7q03_daughter
	W:pers_littlegirl
	W:k7q03_daughter.xml
	W:pt_k7q03_son
	W:pers_littleboy
	W:k7q03_son.xml
	W:completed
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:6b003700710030003300000070006c006100630065005f00660061006d0069006c0079000000620075007200610068005f0068006f006d0065000000700074005f006b0037007100300033005f00660061007400680065007200000070006500720073005f0075006e006f0073006800610000006b0037007100300033005f006600610074006800650072002e0078006d006c000000700074005f006b0037007100300033005f0064006100750067006800740065007200000070006500720073005f006c006900740074006c0065006700690072006c0000006b0037007100300033005f00640061007500670068007400650072002e0078006d006c000000700074005f006b0037007100300033005f0073006f006e00000070006500720073005f006c006900740074006c00650062006f00790000006b0037007100300033005f0073006f006e002e0078006d006c00000063006f006d0070006c006500740065006400000063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
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
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x77 Vars = (int, float)


0x0: Push("k7q03") // @poff=0
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 7
0x6: Call2 0x64

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object)
0xa: @ Trace(Stack[-3])
0xb: Pop(0)
0xc: Push("place_family") // @poff=12
0xd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0xf: Push("burah_home") // @poff=38
0x10: @ GetSceneByName(Stack[-2], Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(object, object, string, string, string)
0x13: Stack[-6] = Stack[-4]
0x14: Stack[-3] = "pt_k7q03_father" // @poff=60
0x15: Stack[-2] = "pers_unosha" // @poff=92
0x16: Stack[-1] = "k7q03_father.xml" // @poff=116
0x17: Call2 0x82

0x18: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x19: Pop(5)
0x1a: PushEmpty(object, object, string, string, string)
0x1b: Stack[-6] = Stack[-4]
0x1c: Stack[-3] = "pt_k7q03_daughter" // @poff=150
0x1d: Stack[-2] = "pers_littlegirl" // @poff=186
0x1e: Stack[-1] = "k7q03_daughter.xml" // @poff=218
0x1f: Call2 0x82

0x20: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x21: Pop(5)
0x22: PushEmpty(object, object, string, string, string)
0x23: Stack[-6] = Stack[-4]
0x24: Stack[-3] = "pt_k7q03_son" // @poff=256
0x25: Stack[-2] = "pers_littleboy" // @poff=282
0x26: Stack[-1] = "k7q03_son.xml" // @poff=312
0x27: Call2 0x82

0x28: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x29: Pop(5)
0x2a: Stack[-1] = 0
0x2b: GOTO 0x32

0x2c: Push("completed") // @poff=340
0x2d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2f: PushEmpty()
0x30: Call2 0x46

0x31: Pop(0)
0x32: Return(); Pop(2)

0x33: PushEmpty(int, int)
0x34: Push("k7q03") // @poff=0
0x35: @ GetVariable(Stack[-1], Stack[-2])
0x36: Pop(1)
0x37: Push((int) 1000)
0x38: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3a: PushEmpty()
0x3b: Call2 0x3e

0x3c: Pop(0)
0x3d: Return(); Pop(2)

0x3e: Push("k7q03") // @poff=0
0x3f: Push((int) -1)
0x40: @ SetVariable(Stack[-2], Stack[-1])
0x41: Pop(2)
0x42: PushEmpty()
0x43: Call2 0x4e

0x44: Pop(0)
0x45: Return(); Pop(0)

0x46: Push("k7q03") // @poff=0
0x47: Push((int) 1000)
0x48: @ SetVariable(Stack[-2], Stack[-1])
0x49: Pop(2)
0x4a: PushEmpty()
0x4b: Call2 0x4e

0x4c: Pop(0)
0x4d: Return(); Pop(0)

0x4e: EventDisable(26)
0x4f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x50: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x51: Push("cleanup") // @poff=360
0x52: @ Trigger(Stack[-0]T, Stack[-1])
0x53: Pop(1)
0x54: Push( Stack[1 + Tasks[-1].StackPointer] )
0x55: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x56: Push("cleanup") // @poff=360
0x57: @ Trigger(Stack[-1]T, Stack[-1])
0x58: Pop(1)
0x59: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5a: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5b: Push("cleanup") // @poff=360
0x5c: @ Trigger(Stack[-2]T, Stack[-1])
0x5d: Pop(1)
0x5e: PushEmpty(object)
0x5f: Call2 0x7c

0x60: Pop(0)
0x61: @ RemoveActor(Stack[-1])
0x62: Pop(1)
0x63: Return(); Pop(0)

0x64: PushEmpty(float, float)
0x65: @ GetGameTime(Stack[-1])
0x66: Pop(0)
0x67: Push((int) 24)
0x68: Pop(1); Push(Stack[-4] * Stack[-1]);
0x69: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6b: PushEmpty()
0x6c: Call2 0x4e

0x6d: Pop(0)
0x6e: GOTO 0x76

0x6f: Push((int) 0)
0x70: Push((int) 24)
0x71: Pop(1); Push(Stack[-5] * Stack[-1]);
0x72: @ SetTimeEvent(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: @ Hold()
0x75: Pop(0)
0x76: Return(); Pop(2)

0x77: PushEmpty()
0x78: PushEmpty()
0x79: Call2 0x33

0x7a: Pop(0)
0x7b: Return(); Pop(0)

0x7c: PushEmpty(object, object)
0x7d: @ self(Stack[-1])
0x7e: Pop(0)
0x7f: Stack[-1] = Stack[-3]
0x80: Return(); Pop(2)

0x81: Stack[-1] = 0
0x82: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x83: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=376
0x84: Pop(0)
0x85: Pop(0); Push((bool) Stack[-4] == 0)
0x86: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x87: Push("Locator ") // @poff=387
0x88: Pop(1); Push(Stack[-1] + Stack[-12]);
0x89: Push(" doesn't exist") // @poff=405
0x8a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8b: @ Trace(Stack[-1])
0x8c: Pop(1)
0x8d: Stack[-1] = 0
0x8e: GOTO 0x91

0x8f: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x90: Pop(0)
0x91: Stack[-1] = Stack[-13]
0x92: Return(); Pop(8)

0x93: Stack[-1] = 0
