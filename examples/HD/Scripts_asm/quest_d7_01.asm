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
	GetGameTime (1 args)
	SetTimeEvent (2 args)
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
		EVENT_9 Op = 0x20 Vars = (int, float)
		EVENT_26 Op = 0x27 Vars = (string)
		EVENT_24 Op = 0xb2 Vars = (int)


0x0: PushEmpty(object, float, object, float)
0x1: Push("warehouse_rubin") // @poff=0
0x2: @ GetSceneByName(Stack[-3], Stack[-1])
0x3: Pop(1)
0x4: Push("norubin") // @poff=32
0x5: @ Trigger(Stack[-3], Stack[-1])
0x6: Pop(1)
0x7: @ GetGameTime(Stack[-1])
0x8: Pop(0)
0x9: Push((float)151.0)
0xa: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xb: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xc: PushEmpty(string, bool)
0xd: Stack[-2] = "sobor@door1" // @poff=48
0xe: Stack[-1] = (bool) 0
0xf: Call2 0xe0

0x10: Pop(2)
0x11: GOTO 0x1b

0x12: PushEmpty(string, bool)
0x13: Stack[-2] = "sobor@door1" // @poff=48
0x14: Stack[-1] = (bool) 1
0x15: Call2 0xe0

0x16: Pop(2)
0x17: Push((int) 0)
0x18: Push((float)151.0)
0x19: @ SetTimeEvent(Stack[-2], Stack[-1])
0x1a: Pop(2)
0x1b: @ Hold()
0x1c: Pop(0)
0x1d: GOTO 0x1b

0x1e: Return(); Pop(4)

0x1f: Stack[-2] = 0
0x20: PushEmpty()
0x21: PushEmpty(string, bool)
0x22: Stack[-2] = "sobor@door1" // @poff=48
0x23: Stack[-1] = (bool) 0
0x24: Call2 0xe0

0x25: Pop(2)
0x26: Return(); Pop(0)

0x27: PushEmpty(object, int, object, int)
0x28: @ Trace(Stack[-5])
0x29: Pop(0)
0x2a: Push("place_birdmasks") // @poff=72
0x2b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x2d: @ GetMainOutdoorScene(Stack[-2])
0x2e: Pop(0)
0x2f: PushEmpty(object, object, string, string, string)
0x30: Stack[-7] = Stack[-4]
0x31: Stack[-3] = "pt_d7q01_ubirdmask" // @poff=104
0x32: Stack[-2] = "pers_birdmask" // @poff=142
0x33: Stack[-1] = "d7q01_birdmask1.xml" // @poff=170
0x34: Call2 0xce

0x35: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x36: Pop(5)
0x37: PushEmpty(object, object, string, string, string)
0x38: Stack[-7] = Stack[-4]
0x39: Stack[-3] = "pt_d7q01_dbirdmask" // @poff=210
0x3a: Stack[-2] = "pers_birdmask" // @poff=142
0x3b: Stack[-1] = "d7q01_birdmask2.xml" // @poff=248
0x3c: Call2 0xce

0x3d: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x3e: Pop(5)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-7] = Stack[-4]
0x41: Stack[-3] = "pt_d7q01_mbirdmask" // @poff=288
0x42: Stack[-2] = "pers_birdmask" // @poff=142
0x43: Stack[-1] = "d7q01_birdmask3.xml" // @poff=326
0x44: Call2 0xce

0x45: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x46: Pop(5)
0x47: Stack[-2] = 0
0x48: GOTO 0x8a

0x49: Push("remove_birdmasks") // @poff=366
0x4a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4c: PushEmpty()
0x4d: Call2 0x9b

0x4e: Pop(0)
0x4f: GOTO 0x8a

0x50: Push("kill_player") // @poff=400
0x51: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x53: PushEmpty(bool, string, string)
0x54: Stack[-2] = "player" // @poff=410
0x55: Stack[-1] = "die" // @poff=424
0x56: Call2 0xf1

0x57: Pop(3)
0x58: GOTO 0x8a

0x59: Push("sobor_teleport") // @poff=432
0x5a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5c: PushEmpty(object, string, string)
0x5d: PushEmpty(object)
0x5e: Call2 0xb6

0x5f: Stack[-1] = Stack[-4]
0x60: Pop(1)
0x61: Stack[-2] = "sobor" // @poff=462
0x62: Stack[-1] = "pt_d7q01_birth" // @poff=474
0x63: Call2 0xfd

0x64: Pop(3)
0x65: @ sync()
0x66: Pop(0)
0x67: PushEmpty(object, string)
0x68: Stack[-1] = "quest_d7_01_cutscene" // @poff=504
0x69: Call2 0xc3

0x6a: Pop(2)
0x6b: GOTO 0x8a

0x6c: Push("cleanup") // @poff=546
0x6d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x6f: Push("d7q01") // @poff=562
0x70: @ GetVariable(Stack[-1], Stack[-2])
0x71: Pop(1)
0x72: Push((int) 1000)
0x73: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x75: PushEmpty()
0x76: Call2 0x8b

0x77: Pop(0)
0x78: GOTO 0x7c

0x79: PushEmpty()
0x7a: Call2 0xa8

0x7b: Pop(0)
0x7c: GOTO 0x8a

0x7d: Push("fail") // @poff=574
0x7e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x80: PushEmpty()
0x81: Call2 0x8b

0x82: Pop(0)
0x83: GOTO 0x8a

0x84: Push("completed") // @poff=584
0x85: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x87: PushEmpty()
0x88: Call2 0x93

0x89: Pop(0)
0x8a: Return(); Pop(4)

0x8b: Push("d7q01") // @poff=562
0x8c: Push((int) -1)
0x8d: @ SetVariable(Stack[-2], Stack[-1])
0x8e: Pop(2)
0x8f: PushEmpty()
0x90: Call2 0xa8

0x91: Pop(0)
0x92: Return(); Pop(0)

0x93: Push("d7q01") // @poff=562
0x94: Push((int) 1000)
0x95: @ SetVariable(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: PushEmpty()
0x98: Call2 0xa8

0x99: Pop(0)
0x9a: Return(); Pop(0)

0x9b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: @@@ Remove(); Obj=0 // @poff=604
0x9e: Pop(0)
0x9f: Push( Stack[1 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa1: @@@ Remove(); Obj=1 // @poff=604
0xa2: Pop(0)
0xa3: Push( Stack[2 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa5: @@@ Remove(); Obj=2 // @poff=604
0xa6: Pop(0)
0xa7: Return(); Pop(0)

0xa8: EventDisable(26)
0xa9: PushEmpty()
0xaa: Call2 0x9b

0xab: Pop(0)
0xac: PushEmpty(object)
0xad: Call2 0xbd

0xae: Pop(0)
0xaf: @ RemoveActor(Stack[-1])
0xb0: Pop(1)
0xb1: Return(); Pop(0)

0xb2: PushEmpty()
0xb3: @ CameraSwitchToNormal()
0xb4: Pop(0)
0xb5: Return(); Pop(0)

0xb6: PushEmpty(object, object)
0xb7: Push("player") // @poff=410
0xb8: @ FindActor(Stack[-2], Stack[-1])
0xb9: Pop(1)
0xba: Stack[-1] = Stack[-3]
0xbb: Return(); Pop(2)

0xbc: Stack[-1] = 0
0xbd: PushEmpty(object, object)
0xbe: @ self(Stack[-1])
0xbf: Pop(0)
0xc0: Stack[-1] = Stack[-3]
0xc1: Return(); Pop(2)

0xc2: Stack[-1] = 0
0xc3: PushEmpty(object, object, object, object)
0xc4: @ GetMainOutdoorScene(Stack[-2])
0xc5: Pop(0)
0xc6: Push(".bin") // @poff=611
0xc7: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc8: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xc9: Pop(1)
0xca: Stack[-1] = Stack[-6]
0xcb: Return(); Pop(4)

0xcc: Stack[-1] = 0
0xcd: Stack[-2] = 0
0xce: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xcf: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=621
0xd0: Pop(0)
0xd1: Pop(0); Push((bool) Stack[-4] == 0)
0xd2: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd3: Push("Locator ") // @poff=632
0xd4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xd5: Push(" doesn't exist") // @poff=650
0xd6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd7: @ Trace(Stack[-1])
0xd8: Pop(1)
0xd9: Stack[-1] = 0
0xda: GOTO 0xdd

0xdb: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=680
0xdc: Pop(0)
0xdd: Stack[-1] = Stack[-13]
0xde: Return(); Pop(8)

0xdf: Stack[-1] = 0
0xe0: PushEmpty(object, object)
0xe1: @ FindActor(Stack[-1], Stack[-4])
0xe2: Pop(0)
0xe3: Pop(0); Push((bool) Stack[-1] == 0)
0xe4: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe5: Push("Door ") // @poff=699
0xe6: Pop(1); Push(Stack[-1] + Stack[-5]);
0xe7: Push(" not found") // @poff=711
0xe8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe9: @ Trace(Stack[-1])
0xea: Pop(1)
0xeb: GOTO 0xef

0xec: Push("locked") // @poff=733
0xed: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=747
0xee: Pop(1)
0xef: Return(); Pop(2)

0xf0: Stack[-1] = 0
0xf1: PushEmpty(object, object)
0xf2: @ FindActor(Stack[-1], Stack[-4])
0xf3: Pop(0)
0xf4: Pop(0); PushNull((bool) Stack[-1] == 0)
0xf5: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf6: Stack[-5] = (bool) 0
0xf7: Return(); Pop(2)

0xf8: @ Trigger(Stack[-1], Stack[-3])
0xf9: Pop(0)
0xfa: Stack[-5] = (bool) 1
0xfb: Return(); Pop(2)

0xfc: Stack[-1] = 0
0xfd: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0xfe: Pop(0); Push((bool) Stack[-11] == 0)
0xff: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0x100: Return(); Pop(8)

0x101: @ GetSceneByName(Stack[-4], Stack[-10])
0x102: Pop(0)
0x103: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=621
0x104: Pop(0)
0x105: Pop(0); Push((bool) Stack[-3] == 0)
0x106: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x107: Push("Teleport location '") // @poff=759
0x108: Pop(1); Push(Stack[-1] + Stack[-10]);
0x109: Push("' not found in scene '") // @poff=799
0x10a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10b: Pop(1); Push(Stack[-1] + Stack[-11]);
0x10c: Push("'") // @poff=795
0x10d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10e: @ Trace(Stack[-1])
0x10f: Pop(1)
0x110: GOTO 0x113

0x111: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0x112: Pop(0)
0x113: Return(); Pop(8)

0x114: Stack[-4] = 0
