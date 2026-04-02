GlobalVarCount = 0

Strings:
	W:warehouse_rubin
	W:norubin
	W:sobor@door1
	W:place_birdmasks
	W:pt_d7q01_ubirdmask
	W:pers_birdmask
	W:d7q01_birdmask1.xml
	W:pt_d7q01_dbirdmask
	W:d7q01_birdmask2.xml
	W:pt_d7q01_mbirdmask
	W:d7q01_birdmask3.xml
	W:remove_birdmasks
	W:kill_player
	W:die
	W:sobor_teleport
	W:sobor
	W:pt_d7q01_birth
	W:quest_d7_01_cutscene
	W:cleanup
	W:d7q01
	W:fail
	W:completed
	A:Remove
	W:.bin
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:Teleport location '
	W:' not found in scene '
// @pool_raw:770061007200650068006f007500730065005f0072007500620069006e0000006e006f0072007500620069006e00000073006f0062006f007200400064006f006f0072003100000070006c006100630065005f0062006900720064006d00610073006b0073000000700074005f00640037007100300031005f00750062006900720064006d00610073006b00000070006500720073005f0062006900720064006d00610073006b000000640037007100300031005f0062006900720064006d00610073006b0031002e0078006d006c000000700074005f00640037007100300031005f00640062006900720064006d00610073006b000000640037007100300031005f0062006900720064006d00610073006b0032002e0078006d006c000000700074005f00640037007100300031005f006d0062006900720064006d00610073006b000000640037007100300031005f0062006900720064006d00610073006b0033002e0078006d006c000000720065006d006f00760065005f0062006900720064006d00610073006b00730000006b0069006c006c005f0070006c0061007900650072000000640069006500000073006f0062006f0072005f00740065006c00650070006f0072007400000073006f0062006f0072000000700074005f00640037007100300031005f00620069007200740068000000710075006500730074005f00640037005f00300031005f006300750074007300630065006e006500000063006c00650061006e007500700000006400370071003000310000006600610069006c00000063006f006d0070006c006500740065006400000052656d6f7665002e00620069006e0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900540065006c00650070006f007200740020006c006f0063006100740069006f006e00200027000000270020006e006f007400200066006f0075006e006400200069006e0020007300630065006e006500200027000000

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	sync (0 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	CameraSwitchToNormal (0 args)
	FindActor (2 args)
	self (1 args)
	AddBlankActor (4 args)
	Teleport (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x11 Vars = (string)
		EVENT_24 Op = 0x9c Vars = (int)


0x0: PushEmpty(object, object)
0x1: Push("warehouse_rubin") // @poff=0
0x2: @ GetSceneByName(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: Push("norubin") // @poff=32
0x5: @ Trigger(Stack[-2], Stack[-1])
0x6: Pop(1)
0x7: PushEmpty(string, bool)
0x8: Stack[-2] = "sobor@door1" // @poff=48
0x9: Stack[-1] = (bool) 0
0xa: Call2 0xca

0xb: Pop(2)
0xc: @ Hold()
0xd: Pop(0)
0xe: GOTO 0xc

0xf: Return(); Pop(2)

0x10: Stack[-1] = 0
0x11: PushEmpty(object, int, object, int)
0x12: @ Trace(Stack[-5])
0x13: Pop(0)
0x14: Push("place_birdmasks") // @poff=72
0x15: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x17: @ GetMainOutdoorScene(Stack[-2])
0x18: Pop(0)
0x19: PushEmpty(object, object, string, string, string)
0x1a: Stack[-7] = Stack[-4]
0x1b: Stack[-3] = "pt_d7q01_ubirdmask" // @poff=104
0x1c: Stack[-2] = "pers_birdmask" // @poff=142
0x1d: Stack[-1] = "d7q01_birdmask1.xml" // @poff=170
0x1e: Call2 0xb8

0x1f: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x20: Pop(5)
0x21: PushEmpty(object, object, string, string, string)
0x22: Stack[-7] = Stack[-4]
0x23: Stack[-3] = "pt_d7q01_dbirdmask" // @poff=210
0x24: Stack[-2] = "pers_birdmask" // @poff=142
0x25: Stack[-1] = "d7q01_birdmask2.xml" // @poff=248
0x26: Call2 0xb8

0x27: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x28: Pop(5)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-7] = Stack[-4]
0x2b: Stack[-3] = "pt_d7q01_mbirdmask" // @poff=288
0x2c: Stack[-2] = "pers_birdmask" // @poff=142
0x2d: Stack[-1] = "d7q01_birdmask3.xml" // @poff=326
0x2e: Call2 0xb8

0x2f: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x30: Pop(5)
0x31: Stack[-2] = 0
0x32: GOTO 0x74

0x33: Push("remove_birdmasks") // @poff=366
0x34: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x36: PushEmpty()
0x37: Call2 0x85

0x38: Pop(0)
0x39: GOTO 0x74

0x3a: Push("kill_player") // @poff=400
0x3b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x3d: PushEmpty(bool, string, string)
0x3e: Stack[-2] = "player" // @poff=410
0x3f: Stack[-1] = "die" // @poff=424
0x40: Call2 0xdb

0x41: Pop(3)
0x42: GOTO 0x74

0x43: Push("sobor_teleport") // @poff=432
0x44: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x46: PushEmpty(object, string, string)
0x47: PushEmpty(object)
0x48: Call2 0xa0

0x49: Stack[-1] = Stack[-4]
0x4a: Pop(1)
0x4b: Stack[-2] = "sobor" // @poff=462
0x4c: Stack[-1] = "pt_d7q01_birth" // @poff=474
0x4d: Call2 0xe7

0x4e: Pop(3)
0x4f: @ sync()
0x50: Pop(0)
0x51: PushEmpty(object, string)
0x52: Stack[-1] = "quest_d7_01_cutscene" // @poff=504
0x53: Call2 0xad

0x54: Pop(2)
0x55: GOTO 0x74

0x56: Push("cleanup") // @poff=546
0x57: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x59: Push("d7q01") // @poff=562
0x5a: @ GetVariable(Stack[-1], Stack[-2])
0x5b: Pop(1)
0x5c: Push((int) 1000)
0x5d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5f: PushEmpty()
0x60: Call2 0x75

0x61: Pop(0)
0x62: GOTO 0x66

0x63: PushEmpty()
0x64: Call2 0x92

0x65: Pop(0)
0x66: GOTO 0x74

0x67: Push("fail") // @poff=574
0x68: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6a: PushEmpty()
0x6b: Call2 0x75

0x6c: Pop(0)
0x6d: GOTO 0x74

0x6e: Push("completed") // @poff=584
0x6f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x71: PushEmpty()
0x72: Call2 0x7d

0x73: Pop(0)
0x74: Return(); Pop(4)

0x75: Push("d7q01") // @poff=562
0x76: Push((int) -1)
0x77: @ SetVariable(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: PushEmpty()
0x7a: Call2 0x92

0x7b: Pop(0)
0x7c: Return(); Pop(0)

0x7d: Push("d7q01") // @poff=562
0x7e: Push((int) 1000)
0x7f: @ SetVariable(Stack[-2], Stack[-1])
0x80: Pop(2)
0x81: PushEmpty()
0x82: Call2 0x92

0x83: Pop(0)
0x84: Return(); Pop(0)

0x85: Push( Stack[0 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x87: @@@ Remove(); Obj=0 // @poff=604
0x88: Pop(0)
0x89: Push( Stack[1 + Tasks[-1].StackPointer] )
0x8a: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8b: @@@ Remove(); Obj=1 // @poff=604
0x8c: Pop(0)
0x8d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8e: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8f: @@@ Remove(); Obj=2 // @poff=604
0x90: Pop(0)
0x91: Return(); Pop(0)

0x92: EventDisable(26)
0x93: PushEmpty()
0x94: Call2 0x85

0x95: Pop(0)
0x96: PushEmpty(object)
0x97: Call2 0xa7

0x98: Pop(0)
0x99: @ RemoveActor(Stack[-1])
0x9a: Pop(1)
0x9b: Return(); Pop(0)

0x9c: PushEmpty()
0x9d: @ CameraSwitchToNormal()
0x9e: Pop(0)
0x9f: Return(); Pop(0)

0xa0: PushEmpty(object, object)
0xa1: Push("player") // @poff=410
0xa2: @ FindActor(Stack[-2], Stack[-1])
0xa3: Pop(1)
0xa4: Stack[-1] = Stack[-3]
0xa5: Return(); Pop(2)

0xa6: Stack[-1] = 0
0xa7: PushEmpty(object, object)
0xa8: @ self(Stack[-1])
0xa9: Pop(0)
0xaa: Stack[-1] = Stack[-3]
0xab: Return(); Pop(2)

0xac: Stack[-1] = 0
0xad: PushEmpty(object, object, object, object)
0xae: @ GetMainOutdoorScene(Stack[-2])
0xaf: Pop(0)
0xb0: Push(".bin") // @poff=611
0xb1: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb2: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xb3: Pop(1)
0xb4: Stack[-1] = Stack[-6]
0xb5: Return(); Pop(4)

0xb6: Stack[-1] = 0
0xb7: Stack[-2] = 0
0xb8: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xb9: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=621
0xba: Pop(0)
0xbb: Pop(0); Push((bool) Stack[-4] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xbd: Push("Locator ") // @poff=632
0xbe: Pop(1); Push(Stack[-1] + Stack[-12]);
0xbf: Push(" doesn't exist") // @poff=650
0xc0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc1: @ Trace(Stack[-1])
0xc2: Pop(1)
0xc3: Stack[-1] = 0
0xc4: GOTO 0xc7

0xc5: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=680
0xc6: Pop(0)
0xc7: Stack[-1] = Stack[-13]
0xc8: Return(); Pop(8)

0xc9: Stack[-1] = 0
0xca: PushEmpty(object, object)
0xcb: @ FindActor(Stack[-1], Stack[-4])
0xcc: Pop(0)
0xcd: Pop(0); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xcf: Push("Door ") // @poff=699
0xd0: Pop(1); Push(Stack[-1] + Stack[-5]);
0xd1: Push(" not found") // @poff=711
0xd2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd3: @ Trace(Stack[-1])
0xd4: Pop(1)
0xd5: GOTO 0xd9

0xd6: Push("locked") // @poff=733
0xd7: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=747
0xd8: Pop(1)
0xd9: Return(); Pop(2)

0xda: Stack[-1] = 0
0xdb: PushEmpty(object, object)
0xdc: @ FindActor(Stack[-1], Stack[-4])
0xdd: Pop(0)
0xde: Pop(0); PushNull((bool) Stack[-1] == 0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe0: Stack[-5] = (bool) 0
0xe1: Return(); Pop(2)

0xe2: @ Trigger(Stack[-1], Stack[-3])
0xe3: Pop(0)
0xe4: Stack[-5] = (bool) 1
0xe5: Return(); Pop(2)

0xe6: Stack[-1] = 0
0xe7: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0xe8: Pop(0); Push((bool) Stack[-11] == 0)
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: Return(); Pop(8)

0xeb: @ GetSceneByName(Stack[-4], Stack[-10])
0xec: Pop(0)
0xed: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=621
0xee: Pop(0)
0xef: Pop(0); Push((bool) Stack[-3] == 0)
0xf0: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf1: Push("Teleport location '") // @poff=759
0xf2: Pop(1); Push(Stack[-1] + Stack[-10]);
0xf3: Push("' not found in scene '") // @poff=799
0xf4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf5: Pop(1); Push(Stack[-1] + Stack[-11]);
0xf6: Push("'") // @poff=795
0xf7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf8: @ Trace(Stack[-1])
0xf9: Pop(1)
0xfa: GOTO 0xfd

0xfb: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0xfc: Pop(0)
0xfd: Return(); Pop(8)

0xfe: Stack[-4] = 0
