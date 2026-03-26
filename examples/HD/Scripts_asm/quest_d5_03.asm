GlobalVarCount = 0

Strings:
	W:d5q03
	W:completed
	W:quest_d5_03_cutscene
	W:fail
	W:place_prisoners
	W:uprava_prison@door1
	W:uprava_prison
	W:pt_guard
	W:pers_birdmask
	W:d5q03_birdmask.xml
	W:pt_prisoner1
	W:pers_unosha
	W:d5q03_unosha.xml
	A:add
	W:pt_prisoner2
	W:pers_worker
	W:d5q03_worker.xml
	W:pt_prisoner3
	W:pers_wasted_male
	W:d5q03_wastedmale.xml
	W:pt_prisoner4
	W:pers_alkash
	W:d5q03_alkash.xml
	W:pt_prisoner5
	W:pt_prisoner6
	W:cleanup
	W:.bin
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	A:size
	A:get
	A:clear
// @pool_raw:64003500710030003300000063006f006d0070006c0065007400650064000000710075006500730074005f00640035005f00300033005f006300750074007300630065006e00650000006600610069006c00000070006c006100630065005f0070007200690073006f006e0065007200730000007500700072006100760061005f0070007200690073006f006e00400064006f006f007200310000007500700072006100760061005f0070007200690073006f006e000000700074005f0067007500610072006400000070006500720073005f0062006900720064006d00610073006b000000640035007100300033005f0062006900720064006d00610073006b002e0078006d006c000000700074005f0070007200690073006f006e00650072003100000070006500720073005f0075006e006f007300680061000000640035007100300033005f0075006e006f007300680061002e0078006d006c00000061646400700074005f0070007200690073006f006e00650072003200000070006500720073005f0077006f0072006b00650072000000640035007100300033005f0077006f0072006b00650072002e0078006d006c000000700074005f0070007200690073006f006e00650072003300000070006500720073005f007700610073007400650064005f006d0061006c0065000000640035007100300033005f007700610073007400650064006d0061006c0065002e0078006d006c000000700074005f0070007200690073006f006e00650072003400000070006500720073005f0061006c006b006100730068000000640035007100300033005f0061006c006b006100730068002e0078006d006c000000700074005f0070007200690073006f006e006500720035000000700074005f0070007200690073006f006e00650072003600000063006c00650061006e007500700000002e00620069006e0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f70657274790073697a650067657400636c65617200

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	CameraSwitchToNormal (0 args)
	GetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_24 Op = 0x74 Vars = (int)
		EVENT_9 Op = 0xce Vars = (int, float)


0x0: Push("d5q03") // @poff=0
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(object)
0x5: Call2 0xd9

0x6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 5
0xa: Call2 0xbb

0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, object, object, object)
0xe: @ Trace(Stack[-5])
0xf: Pop(0)
0x10: Push("completed") // @poff=12
0x11: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x13: PushEmpty(object, string)
0x14: Stack[-1] = "quest_d5_03_cutscene" // @poff=32
0x15: Call2 0xdf

0x16: Pop(2)
0x17: PushEmpty()
0x18: Call2 0x90

0x19: Pop(0)
0x1a: GOTO 0x73

0x1b: Push("fail") // @poff=74
0x1c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1e: PushEmpty()
0x1f: Call2 0x83

0x20: Pop(0)
0x21: GOTO 0x73

0x22: Push("place_prisoners") // @poff=84
0x23: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x25: PushEmpty(string, bool)
0x26: Stack[-2] = "uprava_prison@door1" // @poff=116
0x27: Stack[-1] = (bool) 0
0x28: Call2 0xfc

0x29: Pop(2)
0x2a: Push("uprava_prison") // @poff=156
0x2b: @ GetSceneByName(Stack[-3], Stack[-1])
0x2c: Pop(1)
0x2d: PushEmpty(object, object, string, string, string)
0x2e: Stack[-7] = Stack[-4]
0x2f: Stack[-3] = "pt_guard" // @poff=184
0x30: Stack[-2] = "pers_birdmask" // @poff=202
0x31: Stack[-1] = "d5q03_birdmask.xml" // @poff=230
0x32: Call2 0xea

0x33: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x34: Pop(5)
0x35: PushEmpty(object, object, string, string, string)
0x36: Stack[-7] = Stack[-4]
0x37: Stack[-3] = "pt_prisoner1" // @poff=268
0x38: Stack[-2] = "pers_unosha" // @poff=294
0x39: Stack[-1] = "d5q03_unosha.xml" // @poff=318
0x3a: Call2 0xea

0x3b: Stack[-5] = Stack[-6]
0x3c: Pop(5)
0x3d: @@@ add(Stack[-1]); Obj=0 // @poff=352
0x3e: Pop(0)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-7] = Stack[-4]
0x41: Stack[-3] = "pt_prisoner2" // @poff=356
0x42: Stack[-2] = "pers_worker" // @poff=382
0x43: Stack[-1] = "d5q03_worker.xml" // @poff=406
0x44: Call2 0xea

0x45: Stack[-5] = Stack[-6]
0x46: Pop(5)
0x47: @@@ add(Stack[-1]); Obj=0 // @poff=352
0x48: Pop(0)
0x49: PushEmpty(object, object, string, string, string)
0x4a: Stack[-7] = Stack[-4]
0x4b: Stack[-3] = "pt_prisoner3" // @poff=440
0x4c: Stack[-2] = "pers_wasted_male" // @poff=466
0x4d: Stack[-1] = "d5q03_wastedmale.xml" // @poff=500
0x4e: Call2 0xea

0x4f: Stack[-5] = Stack[-6]
0x50: Pop(5)
0x51: @@@ add(Stack[-1]); Obj=0 // @poff=352
0x52: Pop(0)
0x53: PushEmpty(object, object, string, string, string)
0x54: Stack[-7] = Stack[-4]
0x55: Stack[-3] = "pt_prisoner4" // @poff=542
0x56: Stack[-2] = "pers_alkash" // @poff=568
0x57: Stack[-1] = "d5q03_alkash.xml" // @poff=592
0x58: Call2 0xea

0x59: Stack[-5] = Stack[-6]
0x5a: Pop(5)
0x5b: @@@ add(Stack[-1]); Obj=0 // @poff=352
0x5c: Pop(0)
0x5d: PushEmpty(object, object, string, string, string)
0x5e: Stack[-7] = Stack[-4]
0x5f: Stack[-3] = "pt_prisoner5" // @poff=626
0x60: Stack[-2] = "pers_worker" // @poff=382
0x61: Stack[-1] = "d5q03_worker.xml" // @poff=406
0x62: Call2 0xea

0x63: Stack[-5] = Stack[-6]
0x64: Pop(5)
0x65: @@@ add(Stack[-1]); Obj=0 // @poff=352
0x66: Pop(0)
0x67: PushEmpty(object, object, string, string, string)
0x68: Stack[-7] = Stack[-4]
0x69: Stack[-3] = "pt_prisoner6" // @poff=652
0x6a: Stack[-2] = "pers_unosha" // @poff=294
0x6b: Stack[-1] = "d5q03_unosha.xml" // @poff=318
0x6c: Call2 0xea

0x6d: Stack[-5] = Stack[-6]
0x6e: Pop(5)
0x6f: @@@ add(Stack[-1]); Obj=0 // @poff=352
0x70: Pop(0)
0x71: Stack[-1] = 0
0x72: Stack[-2] = 0
0x73: Return(); Pop(4)

0x74: PushEmpty()
0x75: @ CameraSwitchToNormal()
0x76: Pop(0)
0x77: Return(); Pop(0)

0x78: PushEmpty(int, int)
0x79: Push("d5q03") // @poff=0
0x7a: @ GetVariable(Stack[-1], Stack[-2])
0x7b: Pop(1)
0x7c: Push((int) 1000)
0x7d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7f: PushEmpty()
0x80: Call2 0x83

0x81: Pop(0)
0x82: Return(); Pop(2)

0x83: Push("d5q03") // @poff=0
0x84: Push((int) -1)
0x85: @ SetVariable(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: PushEmpty(string, bool)
0x88: Stack[-2] = "uprava_prison@door1" // @poff=116
0x89: Stack[-1] = (bool) 1
0x8a: Call2 0xfc

0x8b: Pop(2)
0x8c: PushEmpty()
0x8d: Call2 0xab

0x8e: Pop(0)
0x8f: Return(); Pop(0)

0x90: PushEmpty(int, int)
0x91: Push("d5q03") // @poff=0
0x92: @ GetVariable(Stack[-1], Stack[-2])
0x93: Pop(1)
0x94: PushEmpty(bool)
0x95: Stack[-1] = (bool) 0
0x96: Push((int) 1000)
0x97: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x98: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x99: Push((int) -1)
0x9a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Stack[-1] = (bool) 1
0x9d: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9e: Push("d5q03") // @poff=0
0x9f: Push((int) 1000)
0xa0: @ SetVariable(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: PushEmpty(string, bool)
0xa3: Stack[-2] = "uprava_prison@door1" // @poff=116
0xa4: Stack[-1] = (bool) 1
0xa5: Call2 0xfc

0xa6: Pop(2)
0xa7: PushEmpty()
0xa8: Call2 0xab

0xa9: Pop(0)
0xaa: Return(); Pop(2)

0xab: EventDisable(26)
0xac: PushEmpty(object)
0xad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae: Call2 0x10d

0xaf: Pop(1)
0xb0: Push( Stack[1 + Tasks[-1].StackPointer] )
0xb1: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb2: Push("cleanup") // @poff=678
0xb3: @ Trigger(Stack[-1]T, Stack[-1])
0xb4: Pop(1)
0xb5: PushEmpty(object)
0xb6: Call2 0xd3

0xb7: Pop(0)
0xb8: @ RemoveActor(Stack[-1])
0xb9: Pop(1)
0xba: Return(); Pop(0)

0xbb: PushEmpty(float, float)
0xbc: @ GetGameTime(Stack[-1])
0xbd: Pop(0)
0xbe: Push((int) 24)
0xbf: Pop(1); Push(Stack[-4] * Stack[-1]);
0xc0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0xab

0xc4: Pop(0)
0xc5: GOTO 0xcd

0xc6: Push((int) 0)
0xc7: Push((int) 24)
0xc8: Pop(1); Push(Stack[-5] * Stack[-1]);
0xc9: @ SetTimeEvent(Stack[-2], Stack[-1])
0xca: Pop(2)
0xcb: @ Hold()
0xcc: Pop(0)
0xcd: Return(); Pop(2)

0xce: PushEmpty()
0xcf: PushEmpty()
0xd0: Call2 0x78

0xd1: Pop(0)
0xd2: Return(); Pop(0)

0xd3: PushEmpty(object, object)
0xd4: @ self(Stack[-1])
0xd5: Pop(0)
0xd6: Stack[-1] = Stack[-3]
0xd7: Return(); Pop(2)

0xd8: Stack[-1] = 0
0xd9: PushEmpty(object, object)
0xda: @ CreateObjectVector(Stack[-1])
0xdb: Pop(0)
0xdc: Stack[-1] = Stack[-3]
0xdd: Return(); Pop(2)

0xde: Stack[-1] = 0
0xdf: PushEmpty(object, object, object, object)
0xe0: @ GetMainOutdoorScene(Stack[-2])
0xe1: Pop(0)
0xe2: Push(".bin") // @poff=694
0xe3: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe4: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xe5: Pop(1)
0xe6: Stack[-1] = Stack[-6]
0xe7: Return(); Pop(4)

0xe8: Stack[-1] = 0
0xe9: Stack[-2] = 0
0xea: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xeb: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=704
0xec: Pop(0)
0xed: Pop(0); Push((bool) Stack[-4] == 0)
0xee: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xef: Push("Locator ") // @poff=715
0xf0: Pop(1); Push(Stack[-1] + Stack[-12]);
0xf1: Push(" doesn't exist") // @poff=733
0xf2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf3: @ Trace(Stack[-1])
0xf4: Pop(1)
0xf5: Stack[-1] = 0
0xf6: GOTO 0xf9

0xf7: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xf8: Pop(0)
0xf9: Stack[-1] = Stack[-13]
0xfa: Return(); Pop(8)

0xfb: Stack[-1] = 0
0xfc: PushEmpty(object, object)
0xfd: @ FindActor(Stack[-1], Stack[-4])
0xfe: Pop(0)
0xff: Pop(0); Push((bool) Stack[-1] == 0)
0x100: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x101: Push("Door ") // @poff=763
0x102: Pop(1); Push(Stack[-1] + Stack[-5]);
0x103: Push(" not found") // @poff=775
0x104: Pop(2); Push(Stack[-2] + Stack[-1]);
0x105: @ Trace(Stack[-1])
0x106: Pop(1)
0x107: GOTO 0x10b

0x108: Push("locked") // @poff=797
0x109: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=811
0x10a: Pop(1)
0x10b: Return(); Pop(2)

0x10c: Stack[-1] = 0
0x10d: PushEmpty(int, int, object, int, int, object)
0x10e: Push(Stack[-7])
0x10f: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x110: @@ size(Stack[-3]); Obj=7 // @poff=823
0x111: Pop(0)
0x112: Stack[-2] = (int) 0
0x113: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x114: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x115: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=828
0x116: Pop(0)
0x117: Push(Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x119: @ RemoveActor(Stack[-1])
0x11a: Pop(0)
0x11b: Stack[-1] = 0
0x11c: Push((int) 1)
0x11d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x11e: GOTO 0x113

0x11f: @@ clear(); Obj=7 // @poff=832
0x120: Pop(0)
0x121: Return(); Pop(6)

