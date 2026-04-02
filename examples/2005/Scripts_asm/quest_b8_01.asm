GlobalVarCount = 0

Strings:
	W:kill the one
	W:b8q03MladVladIsVictim
	W:volonteers_burah
	W:kill
	W:mladvlad
	W:bigvlad
	W:boiny@door1
	W:vagon_mishka@door1
	W:place_klara
	W:vagon_mishka
	W:pt_b8q01_klara
	W:NPC_Klara
	W:b8q01_klara.xml
	W:remove_klara
	W:cleanup
	W:unlock_boiny
	W:b8q01
	W:fail
	W:completed
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
// @pool_raw:6b0069006c006c00200074006800650020006f006e0065000000620038007100300033004d006c006100640056006c006100640049007300560069006300740069006d00000076006f006c006f006e00740065006500720073005f006200750072006100680000006b0069006c006c0000006d006c006100640076006c0061006400000062006900670076006c0061006400000062006f0069006e007900400064006f006f007200310000007600610067006f006e005f006d006900730068006b006100400064006f006f0072003100000070006c006100630065005f006b006c0061007200610000007600610067006f006e005f006d006900730068006b0061000000700074005f00620038007100300031005f006b006c0061007200610000004e00500043005f004b006c006100720061000000620038007100300031005f006b006c006100720061002e0078006d006c000000720065006d006f00760065005f006b006c00610072006100000063006c00650061006e0075007000000075006e006c006f0063006b005f0062006f0069006e00790000006200380071003000310000006600610069006c00000063006f006d0070006c00650074006500640000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900

Import:
	Trace (1 args)
	GetVariable (2 args)
	Hold (0 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (3 args)

RunOp = 0x18
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x26 Vars = (string)


0x0: PushEmpty(int, int)
0x1: Push("kill the one") // @poff=0
0x2: @ Trace(Stack[-1])
0x3: Pop(1)
0x4: Push("b8q03MladVladIsVictim") // @poff=26
0x5: @ GetVariable(Stack[-1], Stack[-2])
0x6: Pop(1)
0x7: Push((int) 0)
0x8: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xa: PushEmpty(bool, string, string, string)
0xb: Stack[-3] = "volonteers_burah" // @poff=70
0xc: Stack[-2] = "kill" // @poff=104
0xd: Stack[-1] = "mladvlad" // @poff=114
0xe: Call2 0xb8

0xf: Pop(4)
0x10: GOTO 0x17

0x11: PushEmpty(bool, string, string, string)
0x12: Stack[-3] = "volonteers_burah" // @poff=70
0x13: Stack[-2] = "kill" // @poff=104
0x14: Stack[-1] = "bigvlad" // @poff=132
0x15: Call2 0xb8

0x16: Pop(4)
0x17: Return(); Pop(2)

0x18: PushEmpty(string, bool)
0x19: Stack[-2] = "boiny@door1" // @poff=148
0x1a: Stack[-1] = (bool) 1
0x1b: Call2 0xa7

0x1c: Pop(2)
0x1d: PushEmpty(string, bool)
0x1e: Stack[-2] = "vagon_mishka@door1" // @poff=172
0x1f: Stack[-1] = (bool) 0
0x20: Call2 0xa7

0x21: Pop(2)
0x22: @ Hold()
0x23: Pop(0)
0x24: GOTO 0x22

0x25: Return(); Pop(0)

0x26: PushEmpty(object, int, object, int)
0x27: @ Trace(Stack[-5])
0x28: Pop(0)
0x29: Push("place_klara") // @poff=210
0x2a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x2c: Push("vagon_mishka") // @poff=234
0x2d: @ GetSceneByName(Stack[-3], Stack[-1])
0x2e: Pop(1)
0x2f: PushEmpty(object, object, string, string, string)
0x30: Stack[-7] = Stack[-4]
0x31: Stack[-3] = "pt_b8q01_klara" // @poff=260
0x32: Stack[-2] = "NPC_Klara" // @poff=290
0x33: Stack[-1] = "b8q01_klara.xml" // @poff=310
0x34: Call2 0x95

0x35: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x36: Pop(5)
0x37: Stack[-2] = 0
0x38: GOTO 0x6a

0x39: Push("remove_klara") // @poff=342
0x3a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3c: Push("cleanup") // @poff=368
0x3d: @ Trigger(Stack[-0]T, Stack[-1])
0x3e: Pop(1)
0x3f: GOTO 0x6a

0x40: Push("unlock_boiny") // @poff=384
0x41: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x43: PushEmpty(string, bool)
0x44: Stack[-2] = "boiny@door1" // @poff=148
0x45: Stack[-1] = (bool) 0
0x46: Call2 0xa7

0x47: Pop(2)
0x48: GOTO 0x6a

0x49: Push("cleanup") // @poff=368
0x4a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x4c: Push("b8q01") // @poff=410
0x4d: @ GetVariable(Stack[-1], Stack[-2])
0x4e: Pop(1)
0x4f: Push((int) 1000)
0x50: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x52: PushEmpty()
0x53: Call2 0x6b

0x54: Pop(0)
0x55: GOTO 0x59

0x56: PushEmpty()
0x57: Call2 0x7b

0x58: Pop(0)
0x59: PushEmpty()
0x5a: Call2 0x81

0x5b: Pop(0)
0x5c: GOTO 0x6a

0x5d: Push("fail") // @poff=422
0x5e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x60: PushEmpty()
0x61: Call2 0x6b

0x62: Pop(0)
0x63: GOTO 0x6a

0x64: Push("completed") // @poff=432
0x65: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x67: PushEmpty()
0x68: Call2 0x73

0x69: Pop(0)
0x6a: Return(); Pop(4)

0x6b: Push("b8q01") // @poff=410
0x6c: Push((int) -1)
0x6d: @ SetVariable(Stack[-2], Stack[-1])
0x6e: Pop(2)
0x6f: PushEmpty()
0x70: Call2 0x7b

0x71: Pop(0)
0x72: Return(); Pop(0)

0x73: Push("b8q01") // @poff=410
0x74: Push((int) 1000)
0x75: @ SetVariable(Stack[-2], Stack[-1])
0x76: Pop(2)
0x77: PushEmpty()
0x78: Call2 0x7b

0x79: Pop(0)
0x7a: Return(); Pop(0)

0x7b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7d: Push("cleanup") // @poff=368
0x7e: @ Trigger(Stack[-0]T, Stack[-1])
0x7f: Pop(1)
0x80: Return(); Pop(0)

0x81: PushEmpty()
0x82: Call2 0x0

0x83: Pop(0)
0x84: PushEmpty(object)
0x85: Call2 0x8f

0x86: Pop(0)
0x87: @ RemoveActor(Stack[-1])
0x88: Pop(1)
0x89: PushEmpty(string, bool)
0x8a: Stack[-2] = "boiny@door1" // @poff=148
0x8b: Stack[-1] = (bool) 1
0x8c: Call2 0xa7

0x8d: Pop(2)
0x8e: Return(); Pop(0)

0x8f: PushEmpty(object, object)
0x90: @ self(Stack[-1])
0x91: Pop(0)
0x92: Stack[-1] = Stack[-3]
0x93: Return(); Pop(2)

0x94: Stack[-1] = 0
0x95: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x96: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=452
0x97: Pop(0)
0x98: Pop(0); Push((bool) Stack[-4] == 0)
0x99: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9a: Push("Locator ") // @poff=463
0x9b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x9c: Push(" doesn't exist") // @poff=481
0x9d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9e: @ Trace(Stack[-1])
0x9f: Pop(1)
0xa0: Stack[-1] = 0
0xa1: GOTO 0xa4

0xa2: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xa3: Pop(0)
0xa4: Stack[-1] = Stack[-13]
0xa5: Return(); Pop(8)

0xa6: Stack[-1] = 0
0xa7: PushEmpty(object, object)
0xa8: @ FindActor(Stack[-1], Stack[-4])
0xa9: Pop(0)
0xaa: Pop(0); Push((bool) Stack[-1] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xac: Push("Door ") // @poff=511
0xad: Pop(1); Push(Stack[-1] + Stack[-5]);
0xae: Push(" not found") // @poff=523
0xaf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb0: @ Trace(Stack[-1])
0xb1: Pop(1)
0xb2: GOTO 0xb6

0xb3: Push("locked") // @poff=545
0xb4: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=559
0xb5: Pop(1)
0xb6: Return(); Pop(2)

0xb7: Stack[-1] = 0
0xb8: PushEmpty(object, object)
0xb9: @ FindActor(Stack[-1], Stack[-5])
0xba: Pop(0)
0xbb: Pop(0); PushNull((bool) Stack[-1] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-6] = (bool) 0
0xbe: Return(); Pop(2)

0xbf: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0xc0: Pop(0)
0xc1: Stack[-6] = (bool) 1
0xc2: Return(); Pop(2)

0xc3: Stack[-1] = 0
