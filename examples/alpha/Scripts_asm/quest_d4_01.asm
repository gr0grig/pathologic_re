GlobalVarCount = 0

Strings:
	W:key_actors
	W:pt_d4q01_key1
	W:pers_whitemask
	W:d4q01_key1.xml
	W:pt_d4q01_key2
	W:pers_wasted_male
	W:d4q01_key2.xml
	W:pers
	W:pt_d4q01_birdmask
	W:pers_birdmask
	W:d4q01_birdmask.xml
	W:pt_d4q01_wastedwoman
	W:pers_wasted_girl
	W:d4q01_wastedwoman.xml
	W:key1_done
	A:Remove
	W:key2_done
	W:birdmask_done
	W:wastedwoman_done
	W:fail
	W:completed
	W:d4q01
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
// @pool_raw:6b00650079005f006100630074006f00720073000000700074005f00640034007100300031005f006b00650079003100000070006500720073005f00770068006900740065006d00610073006b000000640034007100300031005f006b006500790031002e0078006d006c000000700074005f00640034007100300031005f006b00650079003200000070006500720073005f007700610073007400650064005f006d0061006c0065000000640034007100300031005f006b006500790032002e0078006d006c00000070006500720073000000700074005f00640034007100300031005f0062006900720064006d00610073006b00000070006500720073005f0062006900720064006d00610073006b000000640034007100300031005f0062006900720064006d00610073006b002e0078006d006c000000700074005f00640034007100300031005f0077006100730074006500640077006f006d0061006e00000070006500720073005f007700610073007400650064005f006700690072006c000000640034007100300031005f0077006100730074006500640077006f006d0061006e002e0078006d006c0000006b006500790031005f0064006f006e006500000052656d6f7665006b006500790032005f0064006f006e006500000062006900720064006d00610073006b005f0064006f006e006500000077006100730074006500640077006f006d0061006e005f0064006f006e00650000006600610069006c00000063006f006d0070006c00650074006500640000006400340071003000310000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200

Import:
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	SetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(object, object, object, object)
0x5: @ Trace(Stack[-5])
0x6: Pop(0)
0x7: Push("key_actors") // @poff=0
0x8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0xa: @ GetMainOutdoorScene(Stack[-2])
0xb: Pop(0)
0xc: PushEmpty(object, object, string, string, string)
0xd: Stack[-7] = Stack[-4]
0xe: Stack[-3] = "pt_d4q01_key1" // @poff=22
0xf: Stack[-2] = "pers_whitemask" // @poff=50
0x10: Stack[-1] = "d4q01_key1.xml" // @poff=80
0x11: Call 0x7d

0x12: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x13: Pop(5)
0x14: PushEmpty(object, object, string, string, string)
0x15: Stack[-7] = Stack[-4]
0x16: Stack[-3] = "pt_d4q01_key2" // @poff=110
0x17: Stack[-2] = "pers_wasted_male" // @poff=138
0x18: Stack[-1] = "d4q01_key2.xml" // @poff=172
0x19: Call 0x7d

0x1a: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1b: Pop(5)
0x1c: Stack[-2] = 0
0x1d: GOTO 0x5a

0x1e: Push("pers") // @poff=202
0x1f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x21: @ GetMainOutdoorScene(Stack[-1])
0x22: Pop(0)
0x23: PushEmpty(object, object, string, string, string)
0x24: Stack[-6] = Stack[-4]
0x25: Stack[-3] = "pt_d4q01_birdmask" // @poff=212
0x26: Stack[-2] = "pers_birdmask" // @poff=248
0x27: Stack[-1] = "d4q01_birdmask.xml" // @poff=276
0x28: Call 0x7d

0x29: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x2a: Pop(5)
0x2b: PushEmpty(object, object, string, string, string)
0x2c: Stack[-6] = Stack[-4]
0x2d: Stack[-3] = "pt_d4q01_wastedwoman" // @poff=314
0x2e: Stack[-2] = "pers_wasted_girl" // @poff=356
0x2f: Stack[-1] = "d4q01_wastedwoman.xml" // @poff=390
0x30: Call 0x7d

0x31: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x32: Pop(5)
0x33: Stack[-1] = 0
0x34: GOTO 0x5a

0x35: Push("key1_done") // @poff=434
0x36: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x38: @@@ Remove(); Obj=0 // @poff=454
0x39: Pop(0)
0x3a: GOTO 0x5a

0x3b: Push("key2_done") // @poff=461
0x3c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3e: @@@ Remove(); Obj=1 // @poff=454
0x3f: Pop(0)
0x40: GOTO 0x5a

0x41: Push("birdmask_done") // @poff=481
0x42: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x43: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x44: @@@ Remove(); Obj=2 // @poff=454
0x45: Pop(0)
0x46: GOTO 0x5a

0x47: Push("wastedwoman_done") // @poff=509
0x48: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4a: @@@ Remove(); Obj=3 // @poff=454
0x4b: Pop(0)
0x4c: GOTO 0x5a

0x4d: Push("fail") // @poff=543
0x4e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x50: PushEmpty()
0x51: Call 0x5b

0x52: Pop(0)
0x53: GOTO 0x5a

0x54: Push("completed") // @poff=553
0x55: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x57: PushEmpty()
0x58: Call 0x63

0x59: Pop(0)
0x5a: Return(); Pop(4)

0x5b: Push("d4q01") // @poff=573
0x5c: Push((int) -1)
0x5d: @ SetVariable(Stack[-2], Stack[-1])
0x5e: Pop(2)
0x5f: PushEmpty()
0x60: Call 0x6b

0x61: Pop(0)
0x62: Return(); Pop(0)

0x63: Push("d4q01") // @poff=573
0x64: Push((int) 1000)
0x65: @ SetVariable(Stack[-2], Stack[-1])
0x66: Pop(2)
0x67: PushEmpty()
0x68: Call 0x6b

0x69: Pop(0)
0x6a: Return(); Pop(0)

0x6b: EventDisable(26)
0x6c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: @@@ Remove(); Obj=0 // @poff=454
0x6f: Pop(0)
0x70: Push( Stack[1 + Tasks[-1].StackPointer] )
0x71: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x72: @@@ Remove(); Obj=1 // @poff=454
0x73: Pop(0)
0x74: Push( Stack[2 + Tasks[-1].StackPointer] )
0x75: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x76: @@@ Remove(); Obj=2 // @poff=454
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7a: @@@ Remove(); Obj=3 // @poff=454
0x7b: Pop(0)
0x7c: Return(); Pop(0)

0x7d: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x7e: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=585
0x7f: Pop(0)
0x80: Pop(0); Push((bool) Stack[-4] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x82: Push("Locator ") // @poff=596
0x83: Pop(1); Push(Stack[-1] + Stack[-12]);
0x84: Push(" doesn't exist") // @poff=614
0x85: Pop(2); Push(Stack[-2] + Stack[-1]);
0x86: @ Trace(Stack[-1])
0x87: Pop(1)
0x88: Stack[-1] = 0
0x89: GOTO 0x8c

0x8a: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=644
0x8b: Pop(0)
0x8c: Stack[-1] = Stack[-13]
0x8d: Return(); Pop(8)

0x8e: Stack[-1] = 0
