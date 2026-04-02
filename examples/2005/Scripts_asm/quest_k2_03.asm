GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:k2q03
	W:place_arfist
	W:r4_house_2_02
	W:pt_k2q03_arfist
	W:pers_wasted_male
	W:k2q03_arfist.xml
	W:place_danko
	W:icot_eva_door
	W:pt_k2q03_danko
	W:NPC_Bakalavr
	W:k2q03_danko.xml
	W:completed
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	A:Close
	W:locked
	A:SetProperty
// @pool_raw:6b003200710030003300000070006c006100630065005f006100720066006900730074000000720034005f0068006f007500730065005f0032005f00300032000000700074005f006b0032007100300033005f00610072006600690073007400000070006500720073005f007700610073007400650064005f006d0061006c00650000006b0032007100300033005f006100720066006900730074002e0078006d006c00000070006c006100630065005f00640061006e006b006f000000690063006f0074005f006500760061005f0064006f006f0072000000700074005f006b0032007100300033005f00640061006e006b006f0000004e00500043005f00420061006b0061006c0061007600720000006b0032007100300033005f00640061006e006b006f002e0078006d006c00000063006f006d0070006c006500740065006400000063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e0064000000436c6f7365006c006f0063006b0065006400000053657450726f706572747900

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
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x7c Vars = (int, float)


0x0: Push("k2q03") // @poff=0
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 2
0x6: Call2 0x69

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object, object, object)
0xa: @ Trace(Stack[-5])
0xb: Pop(0)
0xc: Push("place_arfist") // @poff=12
0xd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0xf: Push("r4_house_2_02") // @poff=38
0x10: @ GetSceneByName(Stack[-3], Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(object, object, string, string, string)
0x13: Stack[-7] = Stack[-4]
0x14: Stack[-3] = "pt_k2q03_arfist" // @poff=66
0x15: Stack[-2] = "pers_wasted_male" // @poff=98
0x16: Stack[-1] = "k2q03_arfist.xml" // @poff=132
0x17: Call2 0x87

0x18: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x19: Pop(5)
0x1a: Stack[-2] = 0
0x1b: GOTO 0x37

0x1c: Push("place_danko") // @poff=166
0x1d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x1f: PushEmpty(string, bool)
0x20: Stack[-2] = "icot_eva_door" // @poff=190
0x21: Stack[-1] = (bool) 1
0x22: Call2 0x99

0x23: Pop(2)
0x24: Push("r4_house_2_02") // @poff=38
0x25: @ GetSceneByName(Stack[-2], Stack[-1])
0x26: Pop(1)
0x27: PushEmpty(object, object, string, string, string)
0x28: Stack[-6] = Stack[-4]
0x29: Stack[-3] = "pt_k2q03_danko" // @poff=218
0x2a: Stack[-2] = "NPC_Bakalavr" // @poff=248
0x2b: Stack[-1] = "k2q03_danko.xml" // @poff=274
0x2c: Call2 0x87

0x2d: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x2e: Pop(5)
0x2f: Stack[-1] = 0
0x30: GOTO 0x37

0x31: Push("completed") // @poff=306
0x32: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x34: PushEmpty()
0x35: Call2 0x4b

0x36: Pop(0)
0x37: Return(); Pop(4)

0x38: PushEmpty(int, int)
0x39: Push("k2q03") // @poff=0
0x3a: @ GetVariable(Stack[-1], Stack[-2])
0x3b: Pop(1)
0x3c: Push((int) 1000)
0x3d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3f: PushEmpty()
0x40: Call2 0x43

0x41: Pop(0)
0x42: Return(); Pop(2)

0x43: Push("k2q03") // @poff=0
0x44: Push((int) -1)
0x45: @ SetVariable(Stack[-2], Stack[-1])
0x46: Pop(2)
0x47: PushEmpty()
0x48: Call2 0x53

0x49: Pop(0)
0x4a: Return(); Pop(0)

0x4b: Push("k2q03") // @poff=0
0x4c: Push((int) 1000)
0x4d: @ SetVariable(Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: PushEmpty()
0x50: Call2 0x53

0x51: Pop(0)
0x52: Return(); Pop(0)

0x53: EventDisable(26)
0x54: PushEmpty(string, bool)
0x55: Stack[-2] = "icot_eva_door" // @poff=190
0x56: Stack[-1] = (bool) 0
0x57: Call2 0x99

0x58: Pop(2)
0x59: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5a: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5b: Push("cleanup") // @poff=326
0x5c: @ Trigger(Stack[-0]T, Stack[-1])
0x5d: Pop(1)
0x5e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x5f: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x60: Push("cleanup") // @poff=326
0x61: @ Trigger(Stack[-1]T, Stack[-1])
0x62: Pop(1)
0x63: PushEmpty(object)
0x64: Call2 0x81

0x65: Pop(0)
0x66: @ RemoveActor(Stack[-1])
0x67: Pop(1)
0x68: Return(); Pop(0)

0x69: PushEmpty(float, float)
0x6a: @ GetGameTime(Stack[-1])
0x6b: Pop(0)
0x6c: Push((int) 24)
0x6d: Pop(1); Push(Stack[-4] * Stack[-1]);
0x6e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x70: PushEmpty()
0x71: Call2 0x53

0x72: Pop(0)
0x73: GOTO 0x7b

0x74: Push((int) 0)
0x75: Push((int) 24)
0x76: Pop(1); Push(Stack[-5] * Stack[-1]);
0x77: @ SetTimeEvent(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ Hold()
0x7a: Pop(0)
0x7b: Return(); Pop(2)

0x7c: PushEmpty()
0x7d: PushEmpty()
0x7e: Call2 0x38

0x7f: Pop(0)
0x80: Return(); Pop(0)

0x81: PushEmpty(object, object)
0x82: @ self(Stack[-1])
0x83: Pop(0)
0x84: Stack[-1] = Stack[-3]
0x85: Return(); Pop(2)

0x86: Stack[-1] = 0
0x87: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x88: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=342
0x89: Pop(0)
0x8a: Pop(0); Push((bool) Stack[-4] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8c: Push("Locator ") // @poff=353
0x8d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x8e: Push(" doesn't exist") // @poff=371
0x8f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x90: @ Trace(Stack[-1])
0x91: Pop(1)
0x92: Stack[-1] = 0
0x93: GOTO 0x96

0x94: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x95: Pop(0)
0x96: Stack[-1] = Stack[-13]
0x97: Return(); Pop(8)

0x98: Stack[-1] = 0
0x99: PushEmpty(object, object)
0x9a: @ FindActor(Stack[-1], Stack[-4])
0x9b: Pop(0)
0x9c: Pop(0); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9e: Push("Door ") // @poff=401
0x9f: Pop(1); Push(Stack[-1] + Stack[-5]);
0xa0: Push(" not found") // @poff=413
0xa1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa2: @ Trace(Stack[-1])
0xa3: Pop(1)
0xa4: GOTO 0xac

0xa5: Push(Stack[-3])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: @@ Close(); Obj=1 // @poff=435
0xa8: Pop(0)
0xa9: Push("locked") // @poff=441
0xaa: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=455
0xab: Pop(1)
0xac: Return(); Pop(2)

0xad: Stack[-1] = 0
