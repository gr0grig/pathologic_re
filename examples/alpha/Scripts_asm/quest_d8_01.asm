GlobalVarCount = 0

Strings:
	W:block_well
	W:house_vlad
	W:d8q01_well_block
	W:place_toy
	W:r4_house_2_02
	W:pt_d8q01_toy
	W:scripted_container
	W:d8q01_toy.xml
	W:boiny_load
	W:termitnik_load
	W:termitnik
	W:pt_d8q01_burah
	W:NPC_Burah
	W:d8q01_Burah.xml
	W:d8TermitnikLoad
	W:unlock_boiny
	W:fail
	W:completed
	W:Boiny unlocked
	W:boiny@door1
	W:d8q01
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	A:SetProperty
// @pool_raw:62006c006f0063006b005f00770065006c006c00000068006f007500730065005f0076006c00610064000000640038007100300031005f00770065006c006c005f0062006c006f0063006b00000070006c006100630065005f0074006f0079000000720034005f0068006f007500730065005f0032005f00300032000000700074005f00640038007100300031005f0074006f0079000000730063007200690070007400650064005f0063006f006e007400610069006e00650072000000640038007100300031005f0074006f0079002e0078006d006c00000062006f0069006e0079005f006c006f006100640000007400650072006d00690074006e0069006b005f006c006f006100640000007400650072006d00690074006e0069006b000000700074005f00640038007100300031005f006200750072006100680000004e00500043005f00420075007200610068000000640038007100300031005f00420075007200610068002e0078006d006c000000640038005400650072006d00690074006e0069006b004c006f0061006400000075006e006c006f0063006b005f0062006f0069006e00790000006600610069006c00000063006f006d0070006c006500740065006400000042006f0069006e007900200075006e006c006f0063006b0065006400000062006f0069006e007900400064006f006f0072003100000064003800710030003100000063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e006400000053657450726f706572747900

Import:
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	AddActor (4 args)
	SetVariable (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	ReleaseTimeEvent (1 args)
	Trigger (2 args)
	AddActor (6 args)
	AddActorByType (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, bool) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_9 Op = 0x5f Vars = (int, float)


0x0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: PushEmpty(object, object, object, object, float, object, object, object, object, float)
0x6: @ Trace(Stack[-11])
0x7: Pop(0)
0x8: Push("block_well") // @poff=0
0x9: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xb: Push("house_vlad") // @poff=22
0xc: @ GetSceneByName(Stack[-6], Stack[-1])
0xd: Pop(1)
0xe: Push("d8q01_well_block") // @poff=44
0xf: Push(CVector(0.0, 0.0, 0.0))
0x10: @ AddActor(Stack[-6], Stack[-2], Stack[-7], Stack[-1])
0x11: Pop(2)
0x12: Stack[-4] = 0
0x13: Stack[-5] = 0
0x14: GOTO 0x5e

0x15: Push("place_toy") // @poff=78
0x16: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x18: Push("r4_house_2_02") // @poff=98
0x19: @ GetSceneByName(Stack[-4], Stack[-1])
0x1a: Pop(1)
0x1b: PushEmpty(object, object, string, string, string)
0x1c: Stack[-8] = Stack[-4]
0x1d: Stack[-3] = "pt_d8q01_toy" // @poff=126
0x1e: Stack[-2] = "scripted_container" // @poff=152
0x1f: Stack[-1] = "d8q01_toy.xml" // @poff=190
0x20: Call 0xa7

0x21: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x22: Pop(5)
0x23: Stack[-3] = 0
0x24: GOTO 0x5e

0x25: Push("boiny_load") // @poff=218
0x26: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x28: GOTO 0x5e

0x29: Push("termitnik_load") // @poff=240
0x2a: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x2c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2d: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x2e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2f: Push("termitnik") // @poff=270
0x30: @ GetSceneByName(Stack[-3], Stack[-1])
0x31: Pop(1)
0x32: PushEmpty(object, object, string, string, string)
0x33: Stack[-7] = Stack[-4]
0x34: Stack[-3] = "pt_d8q01_burah" // @poff=290
0x35: Stack[-2] = "NPC_Burah" // @poff=320
0x36: Stack[-1] = "d8q01_Burah.xml" // @poff=340
0x37: Call 0x95

0x38: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x39: Pop(5)
0x3a: Push("d8TermitnikLoad") // @poff=372
0x3b: Push((int) 1)
0x3c: @ SetVariable(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: Stack[-2] = 0
0x3f: GOTO 0x5e

0x40: Push("unlock_boiny") // @poff=404
0x41: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x43: @ GetGameTime(Stack[-1])
0x44: Pop(0)
0x45: Push((float)193.0)
0x46: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x48: PushEmpty()
0x49: Call 0x67

0x4a: Pop(0)
0x4b: GOTO 0x50

0x4c: Push((int) 0)
0x4d: Push((float)193.0)
0x4e: @ SetTimeEvent(Stack[-2], Stack[-1])
0x4f: Pop(2)
0x50: GOTO 0x5e

0x51: Push("fail") // @poff=430
0x52: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x54: PushEmpty()
0x55: Call 0x70

0x56: Pop(0)
0x57: GOTO 0x5e

0x58: Push("completed") // @poff=440
0x59: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5b: PushEmpty()
0x5c: Call 0x78

0x5d: Pop(0)
0x5e: Return(); Pop(10)

0x5f: PushEmpty()
0x60: Push((int) 0)
0x61: @ ReleaseTimeEvent(Stack[-1])
0x62: Pop(1)
0x63: PushEmpty()
0x64: Call 0x67

0x65: Pop(0)
0x66: Return(); Pop(0)

0x67: Push("Boiny unlocked") // @poff=460
0x68: @ Trace(Stack[-1])
0x69: Pop(1)
0x6a: PushEmpty(string, bool)
0x6b: Stack[-2] = "boiny@door1" // @poff=490
0x6c: Stack[-1] = (bool) 0
0x6d: Call 0xb9

0x6e: Pop(2)
0x6f: Return(); Pop(0)

0x70: Push("d8q01") // @poff=514
0x71: Push((int) -1)
0x72: @ SetVariable(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: PushEmpty()
0x75: Call 0x80

0x76: Pop(0)
0x77: Return(); Pop(0)

0x78: Push("d8q01") // @poff=514
0x79: Push((int) 1000)
0x7a: @ SetVariable(Stack[-2], Stack[-1])
0x7b: Pop(2)
0x7c: PushEmpty()
0x7d: Call 0x80

0x7e: Pop(0)
0x7f: Return(); Pop(0)

0x80: EventDisable(26)
0x81: EventDisable(9)
0x82: Push((int) 0)
0x83: @ ReleaseTimeEvent(Stack[-1])
0x84: Pop(1)
0x85: Push( Stack[0 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x87: Push("cleanup") // @poff=526
0x88: @ Trigger(Stack[-0]T, Stack[-1])
0x89: Pop(1)
0x8a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8c: Push("cleanup") // @poff=526
0x8d: @ Trigger(Stack[-1]T, Stack[-1])
0x8e: Pop(1)
0x8f: PushEmpty(string, bool)
0x90: Stack[-2] = "boiny@door1" // @poff=490
0x91: Stack[-1] = (bool) 1
0x92: Call 0xb9

0x93: Pop(2)
0x94: Return(); Pop(0)

0x95: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x96: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=542
0x97: Pop(0)
0x98: Pop(0); Push((bool) Stack[-4] == 0)
0x99: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9a: Push("Locator ") // @poff=553
0x9b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x9c: Push(" doesn't exist") // @poff=571
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
0xa7: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xa8: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=542
0xa9: Pop(0)
0xaa: Pop(0); Push((bool) Stack[-4] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xac: Push("Locator ") // @poff=553
0xad: Pop(1); Push(Stack[-1] + Stack[-12]);
0xae: Push(" doesn't exist") // @poff=571
0xaf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb0: @ Trace(Stack[-1])
0xb1: Pop(1)
0xb2: Stack[-1] = 0
0xb3: GOTO 0xb6

0xb4: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xb5: Pop(0)
0xb6: Stack[-1] = Stack[-13]
0xb7: Return(); Pop(8)

0xb8: Stack[-1] = 0
0xb9: PushEmpty(object, object)
0xba: @ FindActor(Stack[-1], Stack[-4])
0xbb: Pop(0)
0xbc: Pop(0); Push((bool) Stack[-1] == 0)
0xbd: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbe: Push("Door ") // @poff=601
0xbf: Pop(1); Push(Stack[-1] + Stack[-5]);
0xc0: Push(" not found") // @poff=613
0xc1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc2: @ Trace(Stack[-1])
0xc3: Pop(1)
0xc4: Push("locked") // @poff=476
0xc5: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=635
0xc6: Pop(1)
0xc7: Return(); Pop(2)

0xc8: Stack[-1] = 0
