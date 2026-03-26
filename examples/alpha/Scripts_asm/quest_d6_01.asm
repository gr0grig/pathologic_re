GlobalVarCount = 0

Strings:
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
	W:fail
	W:completed
	W:d6q01
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:730061006200750072006f0076005f006b006c00610072006100000063006f0074005f006b00610074006500720069006e0061000000700074005f00640036007100300031005f006b006c0061007200610000004e00500043005f004b006c006100720061000000640036007100300031005f004b006c006100720061002e0078006d006c000000730061006200750072006f0076005f006b006c006100720061005f00720065006d006f0076006500000063006c00650061006e007500700000006500760061005f006b006c00610072006100000063006f0074005f0065007600610000006500760061005f006b006c006100720061005f00720065006d006f0076006500000061006c00620069006e006f0073005f006b006c006100720061000000700074005f00640036007100300033005f0061006c00620069006e006f007300000061006c00620069006e006f0073005f006b006c006100720061005f00720065006d006f007600650000006600610069006c00000063006f006d0070006c00650074006500640000006400360071003000310000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetMainOutdoorScene (1 args)
	SetVariable (2 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(object, object, object, object, object, object)
0x5: @ Trace(Stack[-7])
0x6: Pop(0)
0x7: Push("saburov_klara") // @poff=0
0x8: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0xa: Push("cot_katerina") // @poff=28
0xb: @ GetSceneByName(Stack[-4], Stack[-1])
0xc: Pop(1)
0xd: PushEmpty(object, object, string, string, string)
0xe: Stack[-8] = Stack[-4]
0xf: Stack[-3] = "pt_d6q01_klara" // @poff=54
0x10: Stack[-2] = "NPC_Klara" // @poff=84
0x11: Stack[-1] = "d6q01_Klara.xml" // @poff=104
0x12: Call 0x7a

0x13: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x14: Pop(5)
0x15: Stack[-3] = 0
0x16: GOTO 0x58

0x17: Push("saburov_klara_remove") // @poff=136
0x18: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1a: Push("cleanup") // @poff=178
0x1b: @ Trigger(Stack[-0]T, Stack[-1])
0x1c: Pop(1)
0x1d: GOTO 0x58

0x1e: Push("eva_klara") // @poff=194
0x1f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x21: Push("cot_eva") // @poff=214
0x22: @ GetSceneByName(Stack[-3], Stack[-1])
0x23: Pop(1)
0x24: PushEmpty(object, object, string, string, string)
0x25: Stack[-7] = Stack[-4]
0x26: Stack[-3] = "pt_d6q01_klara" // @poff=54
0x27: Stack[-2] = "NPC_Klara" // @poff=84
0x28: Stack[-1] = "d6q01_Klara.xml" // @poff=104
0x29: Call 0x7a

0x2a: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x2b: Pop(5)
0x2c: Stack[-2] = 0
0x2d: GOTO 0x58

0x2e: Push("eva_klara_remove") // @poff=230
0x2f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x31: Push("cleanup") // @poff=178
0x32: @ Trigger(Stack[-1]T, Stack[-1])
0x33: Pop(1)
0x34: GOTO 0x58

0x35: Push("albinos_klara") // @poff=264
0x36: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x38: @ GetMainOutdoorScene(Stack[-1])
0x39: Pop(0)
0x3a: PushEmpty(object, object, string, string, string)
0x3b: Stack[-6] = Stack[-4]
0x3c: Stack[-3] = "pt_d6q03_albinos" // @poff=292
0x3d: Stack[-2] = "NPC_Klara" // @poff=84
0x3e: Stack[-1] = "d6q01_Klara.xml" // @poff=104
0x3f: Call 0x7a

0x40: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x41: Pop(5)
0x42: Stack[-1] = 0
0x43: GOTO 0x58

0x44: Push("albinos_klara_remove") // @poff=326
0x45: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x47: Push("cleanup") // @poff=178
0x48: @ Trigger(Stack[-2]T, Stack[-1])
0x49: Pop(1)
0x4a: GOTO 0x58

0x4b: Push("fail") // @poff=368
0x4c: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x4d: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4e: PushEmpty()
0x4f: Call 0x59

0x50: Pop(0)
0x51: GOTO 0x58

0x52: Push("completed") // @poff=378
0x53: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x55: PushEmpty()
0x56: Call 0x61

0x57: Pop(0)
0x58: Return(); Pop(6)

0x59: Push("d6q01") // @poff=398
0x5a: Push((int) -1)
0x5b: @ SetVariable(Stack[-2], Stack[-1])
0x5c: Pop(2)
0x5d: PushEmpty()
0x5e: Call 0x69

0x5f: Pop(0)
0x60: Return(); Pop(0)

0x61: Push("d6q01") // @poff=398
0x62: Push((int) 1000)
0x63: @ SetVariable(Stack[-2], Stack[-1])
0x64: Pop(2)
0x65: PushEmpty()
0x66: Call 0x69

0x67: Pop(0)
0x68: Return(); Pop(0)

0x69: EventDisable(26)
0x6a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6b: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6c: Push("cleanup") // @poff=178
0x6d: @ Trigger(Stack[-0]T, Stack[-1])
0x6e: Pop(1)
0x6f: Push( Stack[1 + Tasks[-1].StackPointer] )
0x70: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x71: Push("cleanup") // @poff=178
0x72: @ Trigger(Stack[-1]T, Stack[-1])
0x73: Pop(1)
0x74: Push( Stack[2 + Tasks[-1].StackPointer] )
0x75: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x76: Push("cleanup") // @poff=178
0x77: @ Trigger(Stack[-2]T, Stack[-1])
0x78: Pop(1)
0x79: Return(); Pop(0)

0x7a: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x7b: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=410
0x7c: Pop(0)
0x7d: Pop(0); Push((bool) Stack[-4] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x7f: Push("Locator ") // @poff=421
0x80: Pop(1); Push(Stack[-1] + Stack[-12]);
0x81: Push(" doesn't exist") // @poff=439
0x82: Pop(2); Push(Stack[-2] + Stack[-1]);
0x83: @ Trace(Stack[-1])
0x84: Pop(1)
0x85: Stack[-1] = 0
0x86: GOTO 0x89

0x87: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x88: Pop(0)
0x89: Stack[-1] = Stack[-13]
0x8a: Return(); Pop(8)

0x8b: Stack[-1] = 0
