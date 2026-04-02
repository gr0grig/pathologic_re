GlobalVarCount = 0

Strings:
	W:sobor@door1
	W:saburov_klara
	W:cot_katerina
	W:pt_d6q01_klara
	W:NPC_Klara
	W:d6q01_Klara.xml
	W:saburov_klara_remove
	W:cleanup
	W:eva_klara
	W:cot_eva
	W:eva_klara_remove
	W:albinos_klara
	W:pt_d6q03_albinos
	W:albinos_klara_remove
	W:d6q01
	W:fail
	W:completed
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
// @pool_raw:73006f0062006f007200400064006f006f00720031000000730061006200750072006f0076005f006b006c00610072006100000063006f0074005f006b00610074006500720069006e0061000000700074005f00640036007100300031005f006b006c0061007200610000004e00500043005f004b006c006100720061000000640036007100300031005f004b006c006100720061002e0078006d006c000000730061006200750072006f0076005f006b006c006100720061005f00720065006d006f0076006500000063006c00650061006e007500700000006500760061005f006b006c00610072006100000063006f0074005f0065007600610000006500760061005f006b006c006100720061005f00720065006d006f0076006500000061006c00620069006e006f0073005f006b006c006100720061000000700074005f00640036007100300033005f0061006c00620069006e006f007300000061006c00620069006e006f0073005f006b006c006100720061005f00720065006d006f007600650000006400360071003000310000006600610069006c00000063006f006d0070006c00650074006500640000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900

Import:
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)


0x0: PushEmpty(string, bool)
0x1: Stack[-2] = "sobor@door1" // @poff=0
0x2: Stack[-1] = (bool) 0
0x3: Call2 0xb6

0x4: Pop(2)
0x5: @ Hold()
0x6: Pop(0)
0x7: GOTO 0x5

0x8: Return(); Pop(0)

0x9: PushEmpty(object, object, object, int, object, object, object, int)
0xa: @ Trace(Stack[-9])
0xb: Pop(0)
0xc: Push("saburov_klara") // @poff=24
0xd: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0xf: Push("cot_katerina") // @poff=52
0x10: @ GetSceneByName(Stack[-5], Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(object, object, string, string, string)
0x13: Stack[-9] = Stack[-4]
0x14: Stack[-3] = "pt_d6q01_klara" // @poff=78
0x15: Stack[-2] = "NPC_Klara" // @poff=108
0x16: Stack[-1] = "d6q01_Klara.xml" // @poff=128
0x17: Call2 0xa4

0x18: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x19: Pop(5)
0x1a: Stack[-4] = 0
0x1b: GOTO 0x71

0x1c: Push("saburov_klara_remove") // @poff=160
0x1d: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1f: Push("cleanup") // @poff=202
0x20: @ Trigger(Stack[-0]T, Stack[-1])
0x21: Pop(1)
0x22: GOTO 0x71

0x23: Push("eva_klara") // @poff=218
0x24: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x25: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x26: Push("cot_eva") // @poff=238
0x27: @ GetSceneByName(Stack[-4], Stack[-1])
0x28: Pop(1)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-8] = Stack[-4]
0x2b: Stack[-3] = "pt_d6q01_klara" // @poff=78
0x2c: Stack[-2] = "NPC_Klara" // @poff=108
0x2d: Stack[-1] = "d6q01_Klara.xml" // @poff=128
0x2e: Call2 0xa4

0x2f: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x30: Pop(5)
0x31: Stack[-3] = 0
0x32: GOTO 0x71

0x33: Push("eva_klara_remove") // @poff=254
0x34: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x36: Push("cleanup") // @poff=202
0x37: @ Trigger(Stack[-1]T, Stack[-1])
0x38: Pop(1)
0x39: GOTO 0x71

0x3a: Push("albinos_klara") // @poff=288
0x3b: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x3d: @ GetMainOutdoorScene(Stack[-2])
0x3e: Pop(0)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-7] = Stack[-4]
0x41: Stack[-3] = "pt_d6q03_albinos" // @poff=316
0x42: Stack[-2] = "NPC_Klara" // @poff=108
0x43: Stack[-1] = "d6q01_Klara.xml" // @poff=128
0x44: Call2 0xa4

0x45: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x46: Pop(5)
0x47: Stack[-2] = 0
0x48: GOTO 0x71

0x49: Push("albinos_klara_remove") // @poff=350
0x4a: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4c: Push("cleanup") // @poff=202
0x4d: @ Trigger(Stack[-2]T, Stack[-1])
0x4e: Pop(1)
0x4f: GOTO 0x71

0x50: Push("cleanup") // @poff=202
0x51: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x53: Push("d6q01") // @poff=392
0x54: @ GetVariable(Stack[-1], Stack[-2])
0x55: Pop(1)
0x56: Push((int) 1000)
0x57: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x59: PushEmpty()
0x5a: Call2 0x72

0x5b: Pop(0)
0x5c: GOTO 0x60

0x5d: PushEmpty()
0x5e: Call2 0x82

0x5f: Pop(0)
0x60: PushEmpty()
0x61: Call2 0x92

0x62: Pop(0)
0x63: GOTO 0x71

0x64: Push("fail") // @poff=404
0x65: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x67: PushEmpty()
0x68: Call2 0x72

0x69: Pop(0)
0x6a: GOTO 0x71

0x6b: Push("completed") // @poff=414
0x6c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6e: PushEmpty()
0x6f: Call2 0x7a

0x70: Pop(0)
0x71: Return(); Pop(8)

0x72: Push("d6q01") // @poff=392
0x73: Push((int) -1)
0x74: @ SetVariable(Stack[-2], Stack[-1])
0x75: Pop(2)
0x76: PushEmpty()
0x77: Call2 0x82

0x78: Pop(0)
0x79: Return(); Pop(0)

0x7a: Push("d6q01") // @poff=392
0x7b: Push((int) 1000)
0x7c: @ SetVariable(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: PushEmpty()
0x7f: Call2 0x82

0x80: Pop(0)
0x81: Return(); Pop(0)

0x82: Push( Stack[0 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x84: Push("cleanup") // @poff=202
0x85: @ Trigger(Stack[-0]T, Stack[-1])
0x86: Pop(1)
0x87: Push( Stack[1 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x89: Push("cleanup") // @poff=202
0x8a: @ Trigger(Stack[-1]T, Stack[-1])
0x8b: Pop(1)
0x8c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8e: Push("cleanup") // @poff=202
0x8f: @ Trigger(Stack[-2]T, Stack[-1])
0x90: Pop(1)
0x91: Return(); Pop(0)

0x92: EventDisable(26)
0x93: PushEmpty(string, bool)
0x94: Stack[-2] = "sobor@door1" // @poff=0
0x95: Stack[-1] = (bool) 1
0x96: Call2 0xb6

0x97: Pop(2)
0x98: PushEmpty(object)
0x99: Call2 0x9e

0x9a: Pop(0)
0x9b: @ RemoveActor(Stack[-1])
0x9c: Pop(1)
0x9d: Return(); Pop(0)

0x9e: PushEmpty(object, object)
0x9f: @ self(Stack[-1])
0xa0: Pop(0)
0xa1: Stack[-1] = Stack[-3]
0xa2: Return(); Pop(2)

0xa3: Stack[-1] = 0
0xa4: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xa5: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=434
0xa6: Pop(0)
0xa7: Pop(0); Push((bool) Stack[-4] == 0)
0xa8: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa9: Push("Locator ") // @poff=445
0xaa: Pop(1); Push(Stack[-1] + Stack[-12]);
0xab: Push(" doesn't exist") // @poff=463
0xac: Pop(2); Push(Stack[-2] + Stack[-1]);
0xad: @ Trace(Stack[-1])
0xae: Pop(1)
0xaf: Stack[-1] = 0
0xb0: GOTO 0xb3

0xb1: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xb2: Pop(0)
0xb3: Stack[-1] = Stack[-13]
0xb4: Return(); Pop(8)

0xb5: Stack[-1] = 0
0xb6: PushEmpty(object, object)
0xb7: @ FindActor(Stack[-1], Stack[-4])
0xb8: Pop(0)
0xb9: Pop(0); Push((bool) Stack[-1] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbb: Push("Door ") // @poff=493
0xbc: Pop(1); Push(Stack[-1] + Stack[-5]);
0xbd: Push(" not found") // @poff=505
0xbe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbf: @ Trace(Stack[-1])
0xc0: Pop(1)
0xc1: GOTO 0xc5

0xc2: Push("locked") // @poff=527
0xc3: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=541
0xc4: Pop(1)
0xc5: Return(); Pop(2)

0xc6: Stack[-1] = 0
