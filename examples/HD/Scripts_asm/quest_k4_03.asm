GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:burah_home@door1
	W:k4q03
	W:place_burah
	W:house5_08
	W:pt_k4q03_burah
	W:NPC_Burah
	W:k4q03_burah.xml
	W:completed
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
// @pool_raw:620075007200610068005f0068006f006d006500400064006f006f007200310000006b003400710030003300000070006c006100630065005f0062007500720061006800000068006f0075007300650035005f00300038000000700074005f006b0034007100300033005f006200750072006100680000004e00500043005f004200750072006100680000006b0034007100300033005f00620075007200610068002e0078006d006c00000063006f006d0070006c006500740065006400000063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900

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
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0xe Vars = (string)
		EVENT_9 Op = 0x66 Vars = (int, float)


0x0: PushEmpty(string, bool)
0x1: Stack[-2] = "burah_home@door1" // @poff=0
0x2: Stack[-1] = (bool) 1
0x3: Call2 0x83

0x4: Pop(2)
0x5: Push("k4q03") // @poff=34
0x6: Push((int) 1)
0x7: @ SetVariable(Stack[-2], Stack[-1])
0x8: Pop(2)
0x9: PushEmpty(int)
0xa: Stack[-1] = (int) 4
0xb: Call2 0x53

0xc: Pop(1)
0xd: Return(); Pop(0)

0xe: PushEmpty(object, object)
0xf: @ Trace(Stack[-3])
0x10: Pop(0)
0x11: Push("place_burah") // @poff=46
0x12: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x14: Push("house5_08") // @poff=70
0x15: @ GetSceneByName(Stack[-2], Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(object, object, string, string, string)
0x18: Stack[-6] = Stack[-4]
0x19: Stack[-3] = "pt_k4q03_burah" // @poff=90
0x1a: Stack[-2] = "NPC_Burah" // @poff=120
0x1b: Stack[-1] = "k4q03_burah.xml" // @poff=140
0x1c: Call2 0x71

0x1d: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1e: Pop(5)
0x1f: Stack[-1] = 0
0x20: Push("completed") // @poff=172
0x21: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x23: PushEmpty()
0x24: Call2 0x3a

0x25: Pop(0)
0x26: Return(); Pop(2)

0x27: PushEmpty(int, int)
0x28: Push("k4q03") // @poff=34
0x29: @ GetVariable(Stack[-1], Stack[-2])
0x2a: Pop(1)
0x2b: Push((int) 1000)
0x2c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2e: PushEmpty()
0x2f: Call2 0x32

0x30: Pop(0)
0x31: Return(); Pop(2)

0x32: Push("k4q03") // @poff=34
0x33: Push((int) -1)
0x34: @ SetVariable(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: PushEmpty()
0x37: Call2 0x42

0x38: Pop(0)
0x39: Return(); Pop(0)

0x3a: Push("k4q03") // @poff=34
0x3b: Push((int) 1000)
0x3c: @ SetVariable(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: PushEmpty()
0x3f: Call2 0x42

0x40: Pop(0)
0x41: Return(); Pop(0)

0x42: EventDisable(26)
0x43: PushEmpty(string, bool)
0x44: Stack[-2] = "burah_home@door1" // @poff=0
0x45: Stack[-1] = (bool) 0
0x46: Call2 0x83

0x47: Pop(2)
0x48: Push( Stack[0 + Tasks[-1].StackPointer] )
0x49: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4a: Push("cleanup") // @poff=192
0x4b: @ Trigger(Stack[-0]T, Stack[-1])
0x4c: Pop(1)
0x4d: PushEmpty(object)
0x4e: Call2 0x6b

0x4f: Pop(0)
0x50: @ RemoveActor(Stack[-1])
0x51: Pop(1)
0x52: Return(); Pop(0)

0x53: PushEmpty(float, float)
0x54: @ GetGameTime(Stack[-1])
0x55: Pop(0)
0x56: Push((int) 24)
0x57: Pop(1); Push(Stack[-4] * Stack[-1]);
0x58: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5a: PushEmpty()
0x5b: Call2 0x42

0x5c: Pop(0)
0x5d: GOTO 0x65

0x5e: Push((int) 0)
0x5f: Push((int) 24)
0x60: Pop(1); Push(Stack[-5] * Stack[-1]);
0x61: @ SetTimeEvent(Stack[-2], Stack[-1])
0x62: Pop(2)
0x63: @ Hold()
0x64: Pop(0)
0x65: Return(); Pop(2)

0x66: PushEmpty()
0x67: PushEmpty()
0x68: Call2 0x27

0x69: Pop(0)
0x6a: Return(); Pop(0)

0x6b: PushEmpty(object, object)
0x6c: @ self(Stack[-1])
0x6d: Pop(0)
0x6e: Stack[-1] = Stack[-3]
0x6f: Return(); Pop(2)

0x70: Stack[-1] = 0
0x71: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x72: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=208
0x73: Pop(0)
0x74: Pop(0); Push((bool) Stack[-4] == 0)
0x75: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x76: Push("Locator ") // @poff=219
0x77: Pop(1); Push(Stack[-1] + Stack[-12]);
0x78: Push(" doesn't exist") // @poff=237
0x79: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7a: @ Trace(Stack[-1])
0x7b: Pop(1)
0x7c: Stack[-1] = 0
0x7d: GOTO 0x80

0x7e: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x7f: Pop(0)
0x80: Stack[-1] = Stack[-13]
0x81: Return(); Pop(8)

0x82: Stack[-1] = 0
0x83: PushEmpty(object, object)
0x84: @ FindActor(Stack[-1], Stack[-4])
0x85: Pop(0)
0x86: Pop(0); Push((bool) Stack[-1] == 0)
0x87: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x88: Push("Door ") // @poff=267
0x89: Pop(1); Push(Stack[-1] + Stack[-5]);
0x8a: Push(" not found") // @poff=279
0x8b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8c: @ Trace(Stack[-1])
0x8d: Pop(1)
0x8e: GOTO 0x92

0x8f: Push("locked") // @poff=301
0x90: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=315
0x91: Pop(1)
0x92: Return(); Pop(2)

0x93: Stack[-1] = 0
