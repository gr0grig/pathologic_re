GlobalVarCount = 0

Strings:
	W:pt_b1q01_whitemask
	W:pers_whitemask
	W:b1q01_whitemask.xml
	W:pt_b1q01_birdmask1
	W:pers_birdmask
	W:b1q01_birdmask1.xml
	W:pt_b1q01_birdmask2
	W:b1q01_birdmask2.xml
	W:b1q01_trigger
	W:b1q01_trigger.xml
	W:cleanup
	W:remove_whitemask
	A:Remove
	W:remove1
	W:remove2
	W:remove_cutscene
	W:b1q01
	W:fail
	W:completed
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
// @pool_raw:700074005f00620031007100300031005f00770068006900740065006d00610073006b00000070006500720073005f00770068006900740065006d00610073006b000000620031007100300031005f00770068006900740065006d00610073006b002e0078006d006c000000700074005f00620031007100300031005f0062006900720064006d00610073006b003100000070006500720073005f0062006900720064006d00610073006b000000620031007100300031005f0062006900720064006d00610073006b0031002e0078006d006c000000700074005f00620031007100300031005f0062006900720064006d00610073006b0032000000620031007100300031005f0062006900720064006d00610073006b0032002e0078006d006c000000620031007100300031005f0074007200690067006700650072000000620031007100300031005f0074007200690067006700650072002e0078006d006c00000063006c00650061006e00750070000000720065006d006f00760065005f00770068006900740065006d00610073006b00000052656d6f766500720065006d006f007600650031000000720065006d006f007600650032000000720065006d006f00760065005f006300750074007300630065006e00650000006200310071003000310000006600610069006c00000063006f006d0070006c00650074006500640000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200

Import:
	SetTimeEvent (2 args)
	GetMainOutdoorScene (1 args)
	Hold (0 args)
	Trigger (2 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_9 Op = 0x2b Vars = (int, float)
		EVENT_26 Op = 0x32 Vars = (string)


0x0: PushEmpty(object, object)
0x1: Push((int) 0)
0x2: Push((int) 11)
0x3: @ SetTimeEvent(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: @ GetMainOutdoorScene(Stack[-1])
0x6: Pop(0)
0x7: PushEmpty(object, object, string, string, string)
0x8: Stack[-6] = Stack[-4]
0x9: Stack[-3] = "pt_b1q01_whitemask" // @poff=0
0xa: Stack[-2] = "pers_whitemask" // @poff=38
0xb: Stack[-1] = "b1q01_whitemask.xml" // @poff=68
0xc: Call2 0xa7

0xd: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0xe: Pop(5)
0xf: PushEmpty(object, object, string, string, string)
0x10: Stack[-6] = Stack[-4]
0x11: Stack[-3] = "pt_b1q01_birdmask1" // @poff=108
0x12: Stack[-2] = "pers_birdmask" // @poff=146
0x13: Stack[-1] = "b1q01_birdmask1.xml" // @poff=174
0x14: Call2 0xa7

0x15: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x16: Pop(5)
0x17: PushEmpty(object, object, string, string, string)
0x18: Stack[-6] = Stack[-4]
0x19: Stack[-3] = "pt_b1q01_birdmask2" // @poff=214
0x1a: Stack[-2] = "pers_birdmask" // @poff=146
0x1b: Stack[-1] = "b1q01_birdmask2.xml" // @poff=252
0x1c: Call2 0xa7

0x1d: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x1e: Pop(5)
0x1f: PushEmpty(object, object, string, string)
0x20: Stack[-5] = Stack[-3]
0x21: Stack[-2] = "b1q01_trigger" // @poff=292
0x22: Stack[-1] = "b1q01_trigger.xml" // @poff=320
0x23: Call2 0x9f

0x24: Stack[3 + Tasks[-1].StackPointer] = Stack[-4]
0x25: Pop(4)
0x26: @ Hold()
0x27: Pop(0)
0x28: GOTO 0x26

0x29: Return(); Pop(2)

0x2a: Stack[-1] = 0
0x2b: PushEmpty()
0x2c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2d: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2e: Push("cleanup") // @poff=356
0x2f: @ Trigger(Stack[-3]T, Stack[-1])
0x30: Pop(1)
0x31: Return(); Pop(0)

0x32: PushEmpty(int, int)
0x33: @ Trace(Stack[-3])
0x34: Pop(0)
0x35: Push("remove_whitemask") // @poff=372
0x36: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x38: Push( Stack[0 + Tasks[-1].StackPointer] )
0x39: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3a: @@@ Remove(); Obj=0 // @poff=406
0x3b: Pop(0)
0x3c: GOTO 0x70

0x3d: Push("remove1") // @poff=413
0x3e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x40: @@@ Remove(); Obj=1 // @poff=406
0x41: Pop(0)
0x42: GOTO 0x70

0x43: Push("remove2") // @poff=429
0x44: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x46: @@@ Remove(); Obj=2 // @poff=406
0x47: Pop(0)
0x48: GOTO 0x70

0x49: Push("remove_cutscene") // @poff=445
0x4a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4d: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4e: Push("cleanup") // @poff=356
0x4f: @ Trigger(Stack[-3]T, Stack[-1])
0x50: Pop(1)
0x51: GOTO 0x70

0x52: Push("cleanup") // @poff=356
0x53: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x55: Push("b1q01") // @poff=477
0x56: @ GetVariable(Stack[-1], Stack[-2])
0x57: Pop(1)
0x58: Push((int) 1000)
0x59: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5b: PushEmpty()
0x5c: Call2 0x71

0x5d: Pop(0)
0x5e: GOTO 0x62

0x5f: PushEmpty()
0x60: Call2 0x81

0x61: Pop(0)
0x62: GOTO 0x70

0x63: Push("fail") // @poff=489
0x64: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x66: PushEmpty()
0x67: Call2 0x71

0x68: Pop(0)
0x69: GOTO 0x70

0x6a: Push("completed") // @poff=499
0x6b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6c: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6d: PushEmpty()
0x6e: Call2 0x79

0x6f: Pop(0)
0x70: Return(); Pop(2)

0x71: Push("b1q01") // @poff=477
0x72: Push((int) -1)
0x73: @ SetVariable(Stack[-2], Stack[-1])
0x74: Pop(2)
0x75: PushEmpty()
0x76: Call2 0x81

0x77: Pop(0)
0x78: Return(); Pop(0)

0x79: Push("b1q01") // @poff=477
0x7a: Push((int) 1000)
0x7b: @ SetVariable(Stack[-2], Stack[-1])
0x7c: Pop(2)
0x7d: PushEmpty()
0x7e: Call2 0x81

0x7f: Pop(0)
0x80: Return(); Pop(0)

0x81: EventDisable(26)
0x82: Push( Stack[0 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x84: @@@ Remove(); Obj=0 // @poff=406
0x85: Pop(0)
0x86: Push( Stack[1 + Tasks[-1].StackPointer] )
0x87: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x88: @@@ Remove(); Obj=1 // @poff=406
0x89: Pop(0)
0x8a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8c: @@@ Remove(); Obj=2 // @poff=406
0x8d: Pop(0)
0x8e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x90: Push("cleanup") // @poff=356
0x91: @ Trigger(Stack[-3]T, Stack[-1])
0x92: Pop(1)
0x93: PushEmpty(object)
0x94: Call2 0x99

0x95: Pop(0)
0x96: @ RemoveActor(Stack[-1])
0x97: Pop(1)
0x98: Return(); Pop(0)

0x99: PushEmpty(object, object)
0x9a: @ self(Stack[-1])
0x9b: Pop(0)
0x9c: Stack[-1] = Stack[-3]
0x9d: Return(); Pop(2)

0x9e: Stack[-1] = 0
0x9f: PushEmpty(object, object)
0xa0: Push(CVector(0.0, 0.0, 0.0))
0xa1: Push(CVector(0.0, 0.0, 1.0))
0xa2: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0xa3: Pop(2)
0xa4: Stack[-1] = Stack[-6]
0xa5: Return(); Pop(2)

0xa6: Stack[-1] = 0
0xa7: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xa8: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=519
0xa9: Pop(0)
0xaa: Pop(0); Push((bool) Stack[-4] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xac: Push("Locator ") // @poff=530
0xad: Pop(1); Push(Stack[-1] + Stack[-12]);
0xae: Push(" doesn't exist") // @poff=548
0xaf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb0: @ Trace(Stack[-1])
0xb1: Pop(1)
0xb2: Stack[-1] = 0
0xb3: GOTO 0xb7

0xb4: Push((bool) 1)
0xb5: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1]); Obj=13 // @poff=578
0xb6: Pop(1)
0xb7: Stack[-1] = Stack[-13]
0xb8: Return(); Pop(8)

0xb9: Stack[-1] = 0
