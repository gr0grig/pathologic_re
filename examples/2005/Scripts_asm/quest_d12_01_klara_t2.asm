GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	W:Neutral
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:all
	W:idle
	W:cleanup
	W:restore
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:d12q01KlaraInSobor
	W:ood12KlaraT2_1
	W:d12q01_Klara
	W:ood12KlaraT2_2
	W:ood12KlaraT2_3
	W:d12q01KlaraVisit
	W:b12q01TheaterIsVisited
	W:game_final
	W:d12q01ChildsAreVisited
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	A:add
	W:vol_
	A:size
	A:get
	W:ui/NPC_Klara.png
	W:ui/NPC_Klara_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006400310032007100300031004b006c0061007200610049006e0053006f0062006f00720000006f006f006400310032004b006c00610072006100540032005f00310000006400310032007100300031005f004b006c0061007200610000006f006f006400310032004b006c00610072006100540032005f00320000006f006f006400310032004b006c00610072006100540032005f00330000006400310032007100300031004b006c0061007200610056006900730069007400000062003100320071003000310054006800650061007400650072004900730056006900730069007400650064000000670061006d0065005f00660069006e0061006c0000006400310032007100300031004300680069006c006400730041007200650056006900730069007400650064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e006300680000006164640076006f006c005f00000073697a650067657400750069002f004e00500043005f004b006c006100720061002e0070006e0067000000750069002f004e00500043005f004b006c006100720061005f0062002e0070006e0067000000
// @pool_encoding:utf8

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	CreateIntVector (1 args)

RunOp = 0x482
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x112 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x486 Vars = (object)
		EVENT_26 Op = 0x492 Vars = (string)
		EVENT_6 Op = 0x4ae Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x5c2

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x515

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x4c0

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x725

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x723

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x727

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x729

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x6b8

0x2a: Pop(0)
0x2b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x2c: Pop(1)
0x2d: Stack[-2] = (int) -1
0x2e: @ IsOverrideActive(Stack[-3])
0x2f: Pop(0)
0x30: Push(Stack[-3])
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[-10] = (int) -2
0x33: Return(); Pop(8)

0x34: @ DoDialog(Stack[-4])
0x35: Pop(0)
0x36: PushEmpty(object, object)
0x37: Stack[-11] = Stack[-2]
0x38: Stack[-6] = Stack[-1]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-10] = Stack[-1]
0x48: Call2 0x504

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4d: Pop(0)
0x4e: Stack[-2] = Stack[-10]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x61d

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x63f

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x5e9

0x6a: Pop(2)
0x6b: PushEmpty(object, object)
0x6c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e: Call2 0x60b

0x6f: Pop(2)
0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral" // @poff=89
0x72: Call2 0xfc

0x73: Pop(1)
0x74: Push((int) 535645)
0x75: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x76: Pop(1)
0x77: @@@ ClearReplies(); Obj=0 // @poff=116
0x78: Pop(0)
0x79: Push((int) 540387)
0x7a: Push((int) 42374)
0x7b: Push((int) 42373)
0x7c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7d: Pop(3)
0x7e: Push((int) 540424)
0x7f: Push((int) 42403)
0x80: Push((int) 42411)
0x81: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x82: Pop(3)
0x83: GOTO 0xde

0x84: PushEmpty(object, object)
0x85: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87: Call2 0x60b

0x88: Pop(2)
0x89: PushEmpty(string)
0x8a: Stack[-1] = "Neutral" // @poff=89
0x8b: Call2 0xfc

0x8c: Pop(1)
0x8d: Push((int) 535653)
0x8e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8f: Pop(1)
0x90: @@@ ClearReplies(); Obj=0 // @poff=116
0x91: Pop(0)
0x92: PushEmpty(bool)
0x93: Stack[-1] = (bool) 0
0x94: PushEmpty(bool)
0x95: Stack[-1] = (bool) 0
0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98: Call2 0x629

0x99: Pop(1)
0x9a: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9b: PushEmpty(bool, object)
0x9c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d: Call2 0x633

0x9e: Pop(1)
0x9f: Pop(1); Push((bool) Stack[-1] == 0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = (bool) 1
0xa2: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa3: PushEmpty(bool, object)
0xa4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Call2 0x61d

0xa6: Pop(1)
0xa7: Pop(1); Push((bool) Stack[-1] == 0)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 1
0xaa: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xab: Push((int) 535654)
0xac: Push((int) 37341)
0xad: Push((int) 37340)
0xae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xaf: Pop(3)
0xb0: PushEmpty(bool)
0xb1: Stack[-1] = (bool) 0
0xb2: PushEmpty(bool, object)
0xb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Call2 0x663

0xb5: Pop(1)
0xb6: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb7: PushEmpty(bool, object)
0xb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Call2 0x64b

0xba: Pop(1)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Stack[-1] = (bool) 1
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 540429)
0xbf: Push((int) 42419)
0xc0: Push((int) 42418)
0xc1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc2: Pop(3)
0xc3: PushEmpty(bool)
0xc4: Stack[-1] = (bool) 0
0xc5: PushEmpty(bool, object)
0xc6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Call2 0x611

0xc8: Pop(1)
0xc9: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xca: PushEmpty(bool, object)
0xcb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Call2 0x657

0xcd: Pop(1)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Stack[-1] = (bool) 1
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: Push((int) 540447)
0xd2: Push((int) 42439)
0xd3: Push((int) 42438)
0xd4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd5: Pop(3)
0xd6: Push((int) 540478)
0xd7: Push((int) -1)
0xd8: Push((int) 42473)
0xd9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xda: Pop(3)
0xdb: GOTO 0xde

0xdc: Return(); Pop(0)

0xdd: GOTO 0x55

0xde: PushEmpty(bool)
0xdf: Call2 0x72b

0xe0: Pop(0)
0xe1: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe2: @ lshWaitForAnimEnd()
0xe3: Pop(0)
0xe4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe5: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe6: GOTO 0xec

0xe7: PushEmpty(string)
0xe8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe9: Call2 0x59f

0xea: Pop(1)
0xeb: GOTO 0xe2

0xec: GOTO 0xfb

0xed: Push("all") // @poff=138
0xee: Push("idle") // @poff=146
0xef: @ PlayAnimation(Stack[-2], Stack[-1])
0xf0: Pop(2)
0xf1: @ WaitForAnimEnd()
0xf2: Pop(0)
0xf3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf4: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf5: GOTO 0xfb

0xf6: Push("all") // @poff=138
0xf7: Push("idle") // @poff=146
0xf8: @ PlayAnimation(Stack[-2], Stack[-1])
0xf9: Pop(2)
0xfa: GOTO 0xf1

0xfb: Return(); Pop(0)

0xfc: PushEmpty()
0xfd: PushEmpty(bool)
0xfe: Call2 0x72b

0xff: Pop(0)
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x102: Return(); Pop(0)

0x103: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x104: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x105: Return(); Pop(0)

0x106: PushEmpty(string, bool)
0x107: Stack[-3] = Stack[-2]
0x108: Push("") // @poff=102
0x109: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x10b: Stack[-1] = (bool) 0
0x10c: GOTO 0x10e

0x10d: Stack[-1] = (bool) 1
0x10e: Call2 0x5a6

0x10f: Pop(2)
0x110: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x111: Return(); Pop(0)

0x112: PushEmpty()
0x113: Push((int) 1)
0x114: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x115: PushEmpty()
0x116: Call2 0x5bb

0x117: Pop(0)
0x118: Push((int) 37334)
0x119: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: PushEmpty(object, object)
0x11c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11e: Call2 0x5ef

0x11f: Pop(2)
0x120: Push((int) 37337)
0x121: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: PushEmpty(object, object)
0x124: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x125: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x126: Call2 0x5e0

0x127: Pop(2)
0x128: Push((int) 42406)
0x129: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: PushEmpty(object, object)
0x12c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12e: Call2 0x5ef

0x12f: Pop(2)
0x130: Push((int) 42408)
0x131: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0x5e0

0x137: Pop(2)
0x138: Push((int) 37342)
0x139: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x5e0

0x13f: Pop(2)
0x140: Push((int) 42418)
0x141: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x143: PushEmpty(object, object)
0x144: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x145: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x146: Call2 0x5ff

0x147: Pop(2)
0x148: Push((int) 42438)
0x149: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14b: PushEmpty(object, object)
0x14c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14e: Call2 0x605

0x14f: Pop(2)
0x150: Push((int) 37331)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x153: PushEmpty(bool)
0x154: Stack[-1] = (bool) 0
0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x61d

0x158: Pop(1)
0x159: Pop(1); Push((bool) Stack[-1] == 0)
0x15a: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x63f

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Stack[-1] = (bool) 1
0x161: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x162: PushEmpty(object, object)
0x163: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x164: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x165: Call2 0x5e9

0x166: Pop(2)
0x167: PushEmpty(object, object)
0x168: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0x60b

0x16b: Pop(2)
0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral" // @poff=89
0x16e: Call2 0xfc

0x16f: Pop(1)
0x170: Push((int) 535645)
0x171: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x172: Pop(1)
0x173: @@@ ClearReplies(); Obj=0 // @poff=116
0x174: Pop(0)
0x175: Push((int) 540387)
0x176: Push((int) 42374)
0x177: Push((int) 42373)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Push((int) 540424)
0x17b: Push((int) 42403)
0x17c: Push((int) 42411)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: PushEmpty(object, object)
0x181: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x182: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x183: Call2 0x60b

0x184: Pop(2)
0x185: PushEmpty(string)
0x186: Stack[-1] = "Neutral" // @poff=89
0x187: Call2 0xfc

0x188: Pop(1)
0x189: Push((int) 535653)
0x18a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18b: Pop(1)
0x18c: @@@ ClearReplies(); Obj=0 // @poff=116
0x18d: Pop(0)
0x18e: PushEmpty(bool)
0x18f: Stack[-1] = (bool) 0
0x190: PushEmpty(bool)
0x191: Stack[-1] = (bool) 0
0x192: PushEmpty(bool, object)
0x193: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x194: Call2 0x629

0x195: Pop(1)
0x196: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x197: PushEmpty(bool, object)
0x198: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x199: Call2 0x633

0x19a: Pop(1)
0x19b: Pop(1); Push((bool) Stack[-1] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: Stack[-1] = (bool) 1
0x19e: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19f: PushEmpty(bool, object)
0x1a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a1: Call2 0x61d

0x1a2: Pop(1)
0x1a3: Pop(1); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Stack[-1] = (bool) 1
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a7: Push((int) 535654)
0x1a8: Push((int) 37341)
0x1a9: Push((int) 37340)
0x1aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ab: Pop(3)
0x1ac: PushEmpty(bool)
0x1ad: Stack[-1] = (bool) 0
0x1ae: PushEmpty(bool, object)
0x1af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b0: Call2 0x663

0x1b1: Pop(1)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b3: PushEmpty(bool, object)
0x1b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Call2 0x64b

0x1b6: Pop(1)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = (bool) 1
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: Push((int) 540429)
0x1bb: Push((int) 42419)
0x1bc: Push((int) 42418)
0x1bd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1be: Pop(3)
0x1bf: PushEmpty(bool)
0x1c0: Stack[-1] = (bool) 0
0x1c1: PushEmpty(bool, object)
0x1c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Call2 0x611

0x1c4: Pop(1)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c6: PushEmpty(bool, object)
0x1c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Call2 0x657

0x1c9: Pop(1)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Stack[-1] = (bool) 1
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: Push((int) 540447)
0x1ce: Push((int) 42439)
0x1cf: Push((int) 42438)
0x1d0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d1: Pop(3)
0x1d2: Push((int) 540478)
0x1d3: Push((int) -1)
0x1d4: Push((int) 42473)
0x1d5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d6: Pop(3)
0x1d7: Return(); Pop(0)

0x1d8: Push((int) 42439)
0x1d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1db: PushEmpty(string)
0x1dc: Stack[-1] = "Neutral" // @poff=89
0x1dd: Call2 0xfc

0x1de: Pop(1)
0x1df: Push((int) 540448)
0x1e0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e1: Pop(1)
0x1e2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e3: Pop(0)
0x1e4: Push((int) 540449)
0x1e5: Push((int) 42441)
0x1e6: Push((int) 42440)
0x1e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e8: Pop(3)
0x1e9: Push((int) 540461)
0x1ea: Push((int) 42455)
0x1eb: Push((int) 42454)
0x1ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ed: Pop(3)
0x1ee: Return(); Pop(0)

0x1ef: Push((int) 42455)
0x1f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f2: PushEmpty(string)
0x1f3: Stack[-1] = "Neutral" // @poff=89
0x1f4: Call2 0xfc

0x1f5: Pop(1)
0x1f6: Push((int) 540462)
0x1f7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f8: Pop(1)
0x1f9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1fa: Pop(0)
0x1fb: Push((int) 540463)
0x1fc: Push((int) -1)
0x1fd: Push((int) 42456)
0x1fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ff: Pop(3)
0x200: Push((int) 540464)
0x201: Push((int) 42458)
0x202: Push((int) 42457)
0x203: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 42458)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Neutral" // @poff=89
0x20b: Call2 0xfc

0x20c: Pop(1)
0x20d: Push((int) 540465)
0x20e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20f: Pop(1)
0x210: @@@ ClearReplies(); Obj=0 // @poff=116
0x211: Pop(0)
0x212: Push((int) 540466)
0x213: Push((int) 42460)
0x214: Push((int) 42459)
0x215: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x216: Pop(3)
0x217: Push((int) 540473)
0x218: Push((int) 42460)
0x219: Push((int) 42466)
0x21a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21b: Pop(3)
0x21c: Push((int) 540474)
0x21d: Push((int) 42460)
0x21e: Push((int) 42468)
0x21f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x220: Pop(3)
0x221: Return(); Pop(0)

0x222: Push((int) 42460)
0x223: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x225: PushEmpty(string)
0x226: Stack[-1] = "Neutral" // @poff=89
0x227: Call2 0xfc

0x228: Pop(1)
0x229: Push((int) 540467)
0x22a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22b: Pop(1)
0x22c: @@@ ClearReplies(); Obj=0 // @poff=116
0x22d: Pop(0)
0x22e: Push((int) 540468)
0x22f: Push((int) -1)
0x230: Push((int) 42461)
0x231: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x232: Pop(3)
0x233: Push((int) 540469)
0x234: Push((int) 42463)
0x235: Push((int) 42462)
0x236: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x237: Pop(3)
0x238: Return(); Pop(0)

0x239: Push((int) 42463)
0x23a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x23c: PushEmpty(string)
0x23d: Stack[-1] = "Neutral" // @poff=89
0x23e: Call2 0xfc

0x23f: Pop(1)
0x240: Push((int) 540470)
0x241: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x242: Pop(1)
0x243: @@@ ClearReplies(); Obj=0 // @poff=116
0x244: Pop(0)
0x245: Push((int) 540471)
0x246: Push((int) -1)
0x247: Push((int) 42464)
0x248: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x249: Pop(3)
0x24a: Push((int) 540472)
0x24b: Push((int) -1)
0x24c: Push((int) 42465)
0x24d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24e: Pop(3)
0x24f: Return(); Pop(0)

0x250: Push((int) 42441)
0x251: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x253: PushEmpty(string)
0x254: Stack[-1] = "Neutral" // @poff=89
0x255: Call2 0xfc

0x256: Pop(1)
0x257: Push((int) 540450)
0x258: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x259: Pop(1)
0x25a: @@@ ClearReplies(); Obj=0 // @poff=116
0x25b: Pop(0)
0x25c: Push((int) 540451)
0x25d: Push((int) 42443)
0x25e: Push((int) 42442)
0x25f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x260: Pop(3)
0x261: Return(); Pop(0)

0x262: Push((int) 42443)
0x263: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x265: PushEmpty(string)
0x266: Stack[-1] = "Neutral" // @poff=89
0x267: Call2 0xfc

0x268: Pop(1)
0x269: Push((int) 540452)
0x26a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x26b: Pop(1)
0x26c: @@@ ClearReplies(); Obj=0 // @poff=116
0x26d: Pop(0)
0x26e: Push((int) 540453)
0x26f: Push((int) 42445)
0x270: Push((int) 42444)
0x271: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x272: Pop(3)
0x273: Return(); Pop(0)

0x274: Push((int) 42445)
0x275: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x277: PushEmpty(string)
0x278: Stack[-1] = "Neutral" // @poff=89
0x279: Call2 0xfc

0x27a: Pop(1)
0x27b: Push((int) 540454)
0x27c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x27d: Pop(1)
0x27e: @@@ ClearReplies(); Obj=0 // @poff=116
0x27f: Pop(0)
0x280: Push((int) 540455)
0x281: Push((int) 42447)
0x282: Push((int) 42446)
0x283: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x284: Pop(3)
0x285: Push((int) 540459)
0x286: Push((int) 42447)
0x287: Push((int) 42450)
0x288: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x289: Pop(3)
0x28a: Push((int) 540460)
0x28b: Push((int) 42447)
0x28c: Push((int) 42452)
0x28d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28e: Pop(3)
0x28f: Return(); Pop(0)

0x290: Push((int) 42447)
0x291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x293: PushEmpty(string)
0x294: Stack[-1] = "Neutral" // @poff=89
0x295: Call2 0xfc

0x296: Pop(1)
0x297: Push((int) 540456)
0x298: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x299: Pop(1)
0x29a: @@@ ClearReplies(); Obj=0 // @poff=116
0x29b: Pop(0)
0x29c: Push((int) 540457)
0x29d: Push((int) -1)
0x29e: Push((int) 42448)
0x29f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a0: Pop(3)
0x2a1: Push((int) 540458)
0x2a2: Push((int) -1)
0x2a3: Push((int) 42449)
0x2a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a5: Pop(3)
0x2a6: Return(); Pop(0)

0x2a7: Push((int) 42419)
0x2a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2aa: PushEmpty(string)
0x2ab: Stack[-1] = "Neutral" // @poff=89
0x2ac: Call2 0xfc

0x2ad: Pop(1)
0x2ae: Push((int) 540430)
0x2af: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b0: Pop(1)
0x2b1: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b2: Pop(0)
0x2b3: Push((int) 540431)
0x2b4: Push((int) 42421)
0x2b5: Push((int) 42420)
0x2b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b7: Pop(3)
0x2b8: Push((int) 540441)
0x2b9: Push((int) 42431)
0x2ba: Push((int) 42430)
0x2bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2bc: Pop(3)
0x2bd: Return(); Pop(0)

0x2be: Push((int) 42431)
0x2bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = "Neutral" // @poff=89
0x2c3: Call2 0xfc

0x2c4: Pop(1)
0x2c5: Push((int) 540442)
0x2c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c7: Pop(1)
0x2c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c9: Pop(0)
0x2ca: Push((int) 540443)
0x2cb: Push((int) 42433)
0x2cc: Push((int) 42432)
0x2cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ce: Pop(3)
0x2cf: Return(); Pop(0)

0x2d0: Push((int) 42433)
0x2d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2d3: PushEmpty(string)
0x2d4: Stack[-1] = "Neutral" // @poff=89
0x2d5: Call2 0xfc

0x2d6: Pop(1)
0x2d7: Push((int) 540444)
0x2d8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d9: Pop(1)
0x2da: @@@ ClearReplies(); Obj=0 // @poff=116
0x2db: Pop(0)
0x2dc: Push((int) 540445)
0x2dd: Push((int) 42421)
0x2de: Push((int) 42434)
0x2df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e0: Pop(3)
0x2e1: Push((int) 540446)
0x2e2: Push((int) 42421)
0x2e3: Push((int) 42436)
0x2e4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e5: Pop(3)
0x2e6: Return(); Pop(0)

0x2e7: Push((int) 42421)
0x2e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2ea: PushEmpty(string)
0x2eb: Stack[-1] = "Neutral" // @poff=89
0x2ec: Call2 0xfc

0x2ed: Pop(1)
0x2ee: Push((int) 540432)
0x2ef: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2f0: Pop(1)
0x2f1: @@@ ClearReplies(); Obj=0 // @poff=116
0x2f2: Pop(0)
0x2f3: Push((int) 540433)
0x2f4: Push((int) 42423)
0x2f5: Push((int) 42422)
0x2f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f7: Pop(3)
0x2f8: Return(); Pop(0)

0x2f9: Push((int) 42423)
0x2fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x2fc: PushEmpty(string)
0x2fd: Stack[-1] = "Neutral" // @poff=89
0x2fe: Call2 0xfc

0x2ff: Pop(1)
0x300: Push((int) 540434)
0x301: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x302: Pop(1)
0x303: @@@ ClearReplies(); Obj=0 // @poff=116
0x304: Pop(0)
0x305: Push((int) 540435)
0x306: Push((int) 42425)
0x307: Push((int) 42424)
0x308: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x309: Pop(3)
0x30a: Return(); Pop(0)

0x30b: Push((int) 42425)
0x30c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x30e: PushEmpty(string)
0x30f: Stack[-1] = "Neutral" // @poff=89
0x310: Call2 0xfc

0x311: Pop(1)
0x312: Push((int) 540436)
0x313: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x314: Pop(1)
0x315: @@@ ClearReplies(); Obj=0 // @poff=116
0x316: Pop(0)
0x317: Push((int) 540437)
0x318: Push((int) -1)
0x319: Push((int) 42426)
0x31a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31b: Pop(3)
0x31c: Push((int) 540438)
0x31d: Push((int) 42428)
0x31e: Push((int) 42427)
0x31f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x320: Pop(3)
0x321: Return(); Pop(0)

0x322: Push((int) 42428)
0x323: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x325: PushEmpty(string)
0x326: Stack[-1] = "Neutral" // @poff=89
0x327: Call2 0xfc

0x328: Pop(1)
0x329: Push((int) 540439)
0x32a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x32b: Pop(1)
0x32c: @@@ ClearReplies(); Obj=0 // @poff=116
0x32d: Pop(0)
0x32e: Push((int) 540440)
0x32f: Push((int) -1)
0x330: Push((int) 42429)
0x331: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x332: Pop(3)
0x333: Return(); Pop(0)

0x334: Push((int) 37341)
0x335: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x337: PushEmpty(string)
0x338: Stack[-1] = "Neutral" // @poff=89
0x339: Call2 0xfc

0x33a: Pop(1)
0x33b: Push((int) 535655)
0x33c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x33d: Pop(1)
0x33e: @@@ ClearReplies(); Obj=0 // @poff=116
0x33f: Pop(0)
0x340: Push((int) 535656)
0x341: Push((int) -1)
0x342: Push((int) 37342)
0x343: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x344: Pop(3)
0x345: Return(); Pop(0)

0x346: Push((int) 42374)
0x347: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x349: PushEmpty(string)
0x34a: Stack[-1] = "Neutral" // @poff=89
0x34b: Call2 0xfc

0x34c: Pop(1)
0x34d: Push((int) 540388)
0x34e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x34f: Pop(1)
0x350: @@@ ClearReplies(); Obj=0 // @poff=116
0x351: Pop(0)
0x352: Push((int) 540389)
0x353: Push((int) 42376)
0x354: Push((int) 42375)
0x355: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x356: Pop(3)
0x357: Return(); Pop(0)

0x358: Push((int) 42376)
0x359: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x35b: PushEmpty(string)
0x35c: Stack[-1] = "Neutral" // @poff=89
0x35d: Call2 0xfc

0x35e: Pop(1)
0x35f: Push((int) 540390)
0x360: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x361: Pop(1)
0x362: @@@ ClearReplies(); Obj=0 // @poff=116
0x363: Pop(0)
0x364: Push((int) 540391)
0x365: Push((int) 42378)
0x366: Push((int) 42377)
0x367: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x368: Pop(3)
0x369: Return(); Pop(0)

0x36a: Push((int) 42378)
0x36b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x36d: PushEmpty(string)
0x36e: Stack[-1] = "Neutral" // @poff=89
0x36f: Call2 0xfc

0x370: Pop(1)
0x371: Push((int) 540392)
0x372: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x373: Pop(1)
0x374: @@@ ClearReplies(); Obj=0 // @poff=116
0x375: Pop(0)
0x376: Push((int) 540393)
0x377: Push((int) 42380)
0x378: Push((int) 42379)
0x379: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x37a: Pop(3)
0x37b: Push((int) 540413)
0x37c: Push((int) 42401)
0x37d: Push((int) 42400)
0x37e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x37f: Pop(3)
0x380: Return(); Pop(0)

0x381: Push((int) 42401)
0x382: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x384: PushEmpty(string)
0x385: Stack[-1] = "Neutral" // @poff=89
0x386: Call2 0xfc

0x387: Pop(1)
0x388: Push((int) 540414)
0x389: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x38a: Pop(1)
0x38b: @@@ ClearReplies(); Obj=0 // @poff=116
0x38c: Pop(0)
0x38d: Push((int) 540415)
0x38e: Push((int) 42403)
0x38f: Push((int) 42402)
0x390: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x391: Pop(3)
0x392: Push((int) 540423)
0x393: Push((int) -1)
0x394: Push((int) 42410)
0x395: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x396: Pop(3)
0x397: Return(); Pop(0)

0x398: Push((int) 42403)
0x399: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x39b: PushEmpty(bool, object)
0x39c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39d: Call2 0x629

0x39e: Pop(1)
0x39f: Pop(1); Push((bool) Stack[-1] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3a1: PushEmpty(string)
0x3a2: Stack[-1] = "Neutral" // @poff=89
0x3a3: Call2 0xfc

0x3a4: Pop(1)
0x3a5: Push((int) 540416)
0x3a6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3a7: Pop(1)
0x3a8: @@@ ClearReplies(); Obj=0 // @poff=116
0x3a9: Pop(0)
0x3aa: Push((int) 540417)
0x3ab: Push((int) 42405)
0x3ac: Push((int) 42404)
0x3ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ae: Pop(3)
0x3af: Return(); Pop(0)

0x3b0: PushEmpty(bool, object)
0x3b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b2: Call2 0x629

0x3b3: Pop(1)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3b5: PushEmpty(string)
0x3b6: Stack[-1] = "Neutral" // @poff=89
0x3b7: Call2 0xfc

0x3b8: Pop(1)
0x3b9: Push((int) 540420)
0x3ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3bb: Pop(1)
0x3bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x3bd: Pop(0)
0x3be: Push((int) 540421)
0x3bf: Push((int) -1)
0x3c0: Push((int) 42408)
0x3c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c2: Pop(3)
0x3c3: Push((int) 540422)
0x3c4: Push((int) -1)
0x3c5: Push((int) 42409)
0x3c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c7: Pop(3)
0x3c8: Return(); Pop(0)

0x3c9: Push((int) 42405)
0x3ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3cc: PushEmpty(string)
0x3cd: Stack[-1] = "Neutral" // @poff=89
0x3ce: Call2 0xfc

0x3cf: Pop(1)
0x3d0: Push((int) 540418)
0x3d1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d2: Pop(1)
0x3d3: @@@ ClearReplies(); Obj=0 // @poff=116
0x3d4: Pop(0)
0x3d5: Push((int) 540419)
0x3d6: Push((int) -1)
0x3d7: Push((int) 42406)
0x3d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3d9: Pop(3)
0x3da: Return(); Pop(0)

0x3db: Push((int) 42380)
0x3dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3de: PushEmpty(string)
0x3df: Stack[-1] = "Neutral" // @poff=89
0x3e0: Call2 0xfc

0x3e1: Pop(1)
0x3e2: Push((int) 540394)
0x3e3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3e4: Pop(1)
0x3e5: @@@ ClearReplies(); Obj=0 // @poff=116
0x3e6: Pop(0)
0x3e7: Push((int) 540395)
0x3e8: Push((int) 42401)
0x3e9: Push((int) 42381)
0x3ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3eb: Pop(3)
0x3ec: Push((int) 540396)
0x3ed: Push((int) 37333)
0x3ee: Push((int) 42383)
0x3ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f0: Pop(3)
0x3f1: Return(); Pop(0)

0x3f2: Push((int) 37333)
0x3f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x3f5: PushEmpty(bool, object)
0x3f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f7: Call2 0x629

0x3f8: Pop(1)
0x3f9: Pop(1); Push((bool) Stack[-1] == 0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x3fb: PushEmpty(string)
0x3fc: Stack[-1] = "Neutral" // @poff=89
0x3fd: Call2 0xfc

0x3fe: Pop(1)
0x3ff: Push((int) 535647)
0x400: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x401: Pop(1)
0x402: @@@ ClearReplies(); Obj=0 // @poff=116
0x403: Pop(0)
0x404: Push((int) 540398)
0x405: Push((int) 42386)
0x406: Push((int) 42385)
0x407: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x408: Pop(3)
0x409: Return(); Pop(0)

0x40a: PushEmpty(bool, object)
0x40b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40c: Call2 0x629

0x40d: Pop(1)
0x40e: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x40f: PushEmpty(string)
0x410: Stack[-1] = "Neutral" // @poff=89
0x411: Call2 0xfc

0x412: Pop(1)
0x413: Push((int) 535650)
0x414: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x415: Pop(1)
0x416: @@@ ClearReplies(); Obj=0 // @poff=116
0x417: Pop(0)
0x418: Push((int) 535651)
0x419: Push((int) -1)
0x41a: Push((int) 37337)
0x41b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x41c: Pop(3)
0x41d: Push((int) 535652)
0x41e: Push((int) -1)
0x41f: Push((int) 37338)
0x420: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x421: Pop(3)
0x422: Return(); Pop(0)

0x423: Push((int) 42386)
0x424: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x426: PushEmpty(string)
0x427: Stack[-1] = "Neutral" // @poff=89
0x428: Call2 0xfc

0x429: Pop(1)
0x42a: Push((int) 540399)
0x42b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x42c: Pop(1)
0x42d: @@@ ClearReplies(); Obj=0 // @poff=116
0x42e: Pop(0)
0x42f: Push((int) 540400)
0x430: Push((int) 42388)
0x431: Push((int) 42387)
0x432: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x433: Pop(3)
0x434: Push((int) 540408)
0x435: Push((int) 42390)
0x436: Push((int) 42395)
0x437: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x438: Pop(3)
0x439: Return(); Pop(0)

0x43a: Push((int) 42388)
0x43b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43c: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x43d: PushEmpty(string)
0x43e: Stack[-1] = "Neutral" // @poff=89
0x43f: Call2 0xfc

0x440: Pop(1)
0x441: Push((int) 540401)
0x442: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x443: Pop(1)
0x444: @@@ ClearReplies(); Obj=0 // @poff=116
0x445: Pop(0)
0x446: Push((int) 540402)
0x447: Push((int) 42390)
0x448: Push((int) 42389)
0x449: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44a: Pop(3)
0x44b: Push((int) 540407)
0x44c: Push((int) -1)
0x44d: Push((int) 42394)
0x44e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44f: Pop(3)
0x450: Return(); Pop(0)

0x451: Push((int) 42390)
0x452: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x453: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x454: PushEmpty(string)
0x455: Stack[-1] = "Neutral" // @poff=89
0x456: Call2 0xfc

0x457: Pop(1)
0x458: Push((int) 540403)
0x459: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x45a: Pop(1)
0x45b: @@@ ClearReplies(); Obj=0 // @poff=116
0x45c: Pop(0)
0x45d: Push((int) 540404)
0x45e: Push((int) 42392)
0x45f: Push((int) 42391)
0x460: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x461: Pop(3)
0x462: Return(); Pop(0)

0x463: Push((int) 42392)
0x464: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x466: PushEmpty(string)
0x467: Stack[-1] = "Neutral" // @poff=89
0x468: Call2 0xfc

0x469: Pop(1)
0x46a: Push((int) 540405)
0x46b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x46c: Pop(1)
0x46d: @@@ ClearReplies(); Obj=0 // @poff=116
0x46e: Pop(0)
0x46f: Push((int) 535648)
0x470: Push((int) -1)
0x471: Push((int) 37334)
0x472: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x473: Pop(3)
0x474: Return(); Pop(0)

0x475: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x476: PushEmpty(bool)
0x477: Call2 0x72b

0x478: Pop(0)
0x479: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47a: @ lshStopAnimation()
0x47b: Pop(0)
0x47c: GOTO 0x47f

0x47d: @ StopAnimation()
0x47e: Pop(0)
0x47f: Return(); Pop(0)

0x480: GOTO 0x113

0x481: Return(); Pop(0)

0x482: PushEmpty()
0x483: Call2 0x48e

0x484: Pop(0)
0x485: Return(); Pop(0)

0x486: PushEmpty()
0x487: PushEmpty(int, object)
0x488: Stack[-3] = Stack[-1]
0x489: Push(-2, 1); TaskCall(0)
0x48a: Call2 0x0

0x48b: Pop(-2, 1); TaskReturn
0x48c: Pop(2)
0x48d: Return(); Pop(0)

0x48e: @ Hold()
0x48f: Pop(0)
0x490: GOTO 0x48e

0x491: Return(); Pop(0)

0x492: PushEmpty(bool, bool)
0x493: Push("cleanup") // @poff=156
0x494: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x496: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x497: @ IsLoaded(Stack[-1])
0x498: Pop(0)
0x499: PushEmpty(bool)
0x49a: Stack[-1] = (bool) 0
0x49b: Pop(0); Push((bool) Stack[-2] == 0)
0x49c: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x49d: PushEmpty(bool)
0x49e: Call2 0x4be

0x49f: Pop(0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a1: Stack[-1] = (bool) 1
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a3: PushEmpty(object)
0x4a4: Call2 0x5c2

0x4a5: Pop(0)
0x4a6: @ RemoveActor(Stack[-1])
0x4a7: Pop(1)
0x4a8: GOTO 0x4ad

0x4a9: Push("restore") // @poff=172
0x4aa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ac: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4ad: Return(); Pop(2)

0x4ae: PushEmpty(bool)
0x4af: Stack[-1] = (bool) 0
0x4b0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b2: PushEmpty(bool)
0x4b3: Call2 0x4be

0x4b4: Pop(0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b6: Stack[-1] = (bool) 1
0x4b7: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b8: PushEmpty(object)
0x4b9: Call2 0x5c2

0x4ba: Pop(0)
0x4bb: @ RemoveActor(Stack[-1])
0x4bc: Pop(1)
0x4bd: Return(); Pop(0)

0x4be: Stack[-1] = (bool) 1
0x4bf: Return(); Pop(0)

0x4c0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x4c1: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x4c2: Pop(0)
0x4c3: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x4c4: Pop(0)
0x4c5: Push(CvectorIndex(Stack[-8], 1))
0x4c6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4c7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4c8: @ GetPosition(Stack[-7])
0x4c9: Pop(0)
0x4ca: @ GetEyesHeight(Stack[-9])
0x4cb: Pop(0)
0x4cc: Push(CvectorIndex(Stack[-7], 1))
0x4cd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4ce: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4cf: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x4d0: Push(CvectorIndex(Stack[-6], 1))
0x4d1: Stack[-1] = (int) 0
0x4d2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4d3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x4d4: Pop(1); Push(Sqrt(Stack[-1]))
0x4d5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x4d6: Stack[-5] = -Stack[-6]; Pop(0);
0x4d7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x4d8: PushEmpty(cvector, cvector)
0x4d9: Push([0.0, 1.0, 0.0])
0x4da: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x4db: Call2 0x5c8

0x4dc: Pop(1)
0x4dd: Push((int) 25)
0x4de: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4df: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4e0: Push([0.0, 10.0, 0.0])
0x4e1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x4e2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x4e3: @ IsOverrideActive(Stack[-2])
0x4e4: Pop(0)
0x4e5: Push(Stack[-2])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e7: Stack[-21] = (bool) 0
0x4e8: Return(); Pop(18)

0x4e9: @ StopWorld()
0x4ea: Pop(0)
0x4eb: @ CameraTransit(Stack[-3], Stack[-5])
0x4ec: Pop(0)
0x4ed: Push(CvectorIndex(Stack[-4], 0))
0x4ee: Push(CvectorIndex(Stack[-5], 2))
0x4ef: @ Rotate(Stack[-2], Stack[-1])
0x4f0: Pop(2)
0x4f1: PushEmpty(bool)
0x4f2: Call2 0x72b

0x4f3: Pop(0)
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f5: GOTO 0x4fe

0x4f6: Push("head") // @poff=214
0x4f7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4f8: Pop(1)
0x4f9: Push(Stack[-1])
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fb: Push("head") // @poff=214
0x4fc: @ LookAsyncCamera(Stack[-1])
0x4fd: Pop(1)
0x4fe: @ CameraWaitForPlayFinish()
0x4ff: Pop(0)
0x500: @ ResumeWorld()
0x501: Pop(0)
0x502: Stack[-21] = (bool) 1
0x503: Return(); Pop(18)

0x504: PushEmpty(bool, bool)
0x505: @ CameraSwitchToNormal()
0x506: Pop(0)
0x507: PushEmpty(bool)
0x508: Call2 0x72b

0x509: Pop(0)
0x50a: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50b: GOTO 0x514

0x50c: Push("head") // @poff=214
0x50d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x50e: Pop(1)
0x50f: Push(Stack[-1])
0x510: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x511: Push("head") // @poff=214
0x512: @ UnlookAsync(Stack[-1])
0x513: Pop(1)
0x514: Return(); Pop(2)

0x515: PushEmpty(int, int, int, int)
0x516: Push("voice_common") // @poff=224
0x517: @ GetVariable(Stack[-1], Stack[-3])
0x518: Pop(1)
0x519: Push(Stack[-2])
0x51a: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x51b: PushEmpty(bool, object)
0x51c: Stack[-7] = Stack[-1]
0x51d: Call2 0x54f

0x51e: Pop(1)
0x51f: Pop(1); Push((bool) Stack[-1] == 0)
0x520: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x521: PushEmpty(bool, object)
0x522: Stack[-7] = Stack[-1]
0x523: Call2 0x574

0x524: Pop(1)
0x525: Pop(1); Push((bool) Stack[-1] == 0)
0x526: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x527: Stack[-6] = (bool) 0
0x528: Return(); Pop(4)

0x529: Push((int) 2)
0x52a: @ irand(Stack[-2], Stack[-1])
0x52b: Pop(1)
0x52c: Push(Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x52e: Push("voice_common") // @poff=224
0x52f: Push((int) 1)
0x530: Pop(1); Push(Stack[-4] + Stack[-1]);
0x531: Push((int) 3)
0x532: Pop(2); Push(Stack[-2] % Stack[-1]);
0x533: @ SetVariable(Stack[-2], Stack[-1])
0x534: Pop(2)
0x535: GOTO 0x53a

0x536: Push("voice_common") // @poff=224
0x537: Push((int) 0)
0x538: @ SetVariable(Stack[-2], Stack[-1])
0x539: Pop(2)
0x53a: GOTO 0x54d

0x53b: PushEmpty(bool, object)
0x53c: Stack[-7] = Stack[-1]
0x53d: Call2 0x574

0x53e: Pop(1)
0x53f: Pop(1); Push((bool) Stack[-1] == 0)
0x540: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x541: PushEmpty(bool, object)
0x542: Stack[-7] = Stack[-1]
0x543: Call2 0x54f

0x544: Pop(1)
0x545: Pop(1); Push((bool) Stack[-1] == 0)
0x546: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x547: Stack[-6] = (bool) 0
0x548: Return(); Pop(4)

0x549: Push("voice_common") // @poff=224
0x54a: Push((int) 1)
0x54b: @ SetVariable(Stack[-2], Stack[-1])
0x54c: Pop(2)
0x54d: Stack[-6] = (bool) 1
0x54e: Return(); Pop(4)

0x54f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x550: Stack[-5] = "c" // @poff=250
0x551: Stack[-4] = (int) 0
0x552: Push((int) 1)
0x553: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x554: Push((int) 1)
0x555: Pop(1); Push(Stack[-5] + Stack[-1]);
0x556: Pop(1); Push(Stack[-6] + Stack[-1]);
0x557: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x558: Pop(1)
0x559: Pop(0); Push((bool) Stack[-3] == 0)
0x55a: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55b: GOTO 0x55f

0x55c: Push((int) 1)
0x55d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x55e: GOTO 0x552

0x55f: Pop(0); Push((bool) Stack[-4] == 0)
0x560: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x561: Stack[-12] = (bool) 0
0x562: Return(); Pop(10)

0x563: Stack[-2] = (int) 0
0x564: Push((int) 1)
0x565: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x567: @ irand(Stack[-2], Stack[-4])
0x568: Pop(0)
0x569: Push((int) 1)
0x56a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x56b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x56c: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x56d: Pop(1)
0x56e: PushEmpty(bool, string)
0x56f: Stack[-3] = Stack[-1]
0x570: Call2 0x5ac

0x571: Stack[-2] = Stack[-14]
0x572: Pop(2)
0x573: Return(); Pop(10)

0x574: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x575: Push("d") // @poff=220
0x576: PushEmpty(int)
0x577: Call2 0x5d7

0x578: Pop(0)
0x579: Pop(2); Push(Stack[-2] + Stack[-1]);
0x57a: Push("m") // @poff=278
0x57b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x57c: Stack[-4] = (int) 0
0x57d: Push((int) 1)
0x57e: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x57f: Push((int) 1)
0x580: Pop(1); Push(Stack[-5] + Stack[-1]);
0x581: Pop(1); Push(Stack[-6] + Stack[-1]);
0x582: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x583: Pop(1)
0x584: Pop(0); Push((bool) Stack[-3] == 0)
0x585: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x586: GOTO 0x58a

0x587: Push((int) 1)
0x588: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x589: GOTO 0x57d

0x58a: Pop(0); Push((bool) Stack[-4] == 0)
0x58b: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58c: Stack[-12] = (bool) 0
0x58d: Return(); Pop(10)

0x58e: Stack[-2] = (int) 0
0x58f: Push((int) 1)
0x590: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x592: @ irand(Stack[-2], Stack[-4])
0x593: Pop(0)
0x594: Push((int) 1)
0x595: Pop(1); Push(Stack[-3] + Stack[-1]);
0x596: Pop(1); Push(Stack[-6] + Stack[-1]);
0x597: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x598: Pop(1)
0x599: PushEmpty(bool, string)
0x59a: Stack[-3] = Stack[-1]
0x59b: Call2 0x5ac

0x59c: Stack[-2] = Stack[-14]
0x59d: Pop(2)
0x59e: Return(); Pop(10)

0x59f: PushEmpty(float, float, float, float)
0x5a0: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x5a1: Pop(0)
0x5a2: Push((bool) 0)
0x5a3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(1)
0x5a5: Return(); Pop(4)

0x5a6: PushEmpty(float, float, float, float)
0x5a7: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x5a8: Pop(0)
0x5a9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x5aa: Pop(0)
0x5ab: Return(); Pop(4)

0x5ac: PushEmpty(bool, bool)
0x5ad: PushEmpty(bool)
0x5ae: Call2 0x72b

0x5af: Pop(0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b1: @ lshHasSpeech(Stack[-1], Stack[-3])
0x5b2: Pop(0)
0x5b3: Push(Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b5: @ lshPlaySpeech(Stack[-3])
0x5b6: Pop(0)
0x5b7: Stack[-4] = (bool) 1
0x5b8: Return(); Pop(2)

0x5b9: Stack[-4] = (bool) 0
0x5ba: Return(); Pop(2)

0x5bb: PushEmpty(bool)
0x5bc: Call2 0x72b

0x5bd: Pop(0)
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: @ lshStopSpeech()
0x5c0: Pop(0)
0x5c1: Return(); Pop(0)

0x5c2: PushEmpty(object, object)
0x5c3: @ self(Stack[-1])
0x5c4: Pop(0)
0x5c5: Stack[-1] = Stack[-3]
0x5c6: Return(); Pop(2)

0x5c7: Stack[-1] = 0
0x5c8: PushEmpty(float, float)
0x5c9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5ca: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5cb: Push((float)9.999999974752427e-07)
0x5cc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5cd: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5ce: Stack[-4] = [0.0, 0.0, 0.0]
0x5cf: Return(); Pop(2)

0x5d0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5d1: Return(); Pop(2)

0x5d2: PushEmpty(int, int)
0x5d3: @ GetVariable(Stack[-3], Stack[-1])
0x5d4: Pop(0)
0x5d5: Stack[-1] = Stack[-4]
0x5d6: Return(); Pop(2)

0x5d7: PushEmpty(float, float)
0x5d8: @ GetGameTime(Stack[-1])
0x5d9: Pop(0)
0x5da: Push((int) 1)
0x5db: PushEmpty(int)
0x5dc: Push((int) 24)
0x5dd: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5de: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5df: Return(); Pop(2)

0x5e0: PushEmpty()
0x5e1: Push("d12q01KlaraInSobor") // @poff=282
0x5e2: Push((int) 1)
0x5e3: @ SetVariable(Stack[-2], Stack[-1])
0x5e4: Pop(2)
0x5e5: PushEmpty()
0x5e6: Call2 0x675

0x5e7: Pop(0)
0x5e8: Return(); Pop(0)

0x5e9: PushEmpty()
0x5ea: Push("ood12KlaraT2_1") // @poff=320
0x5eb: Push((int) 1)
0x5ec: @ SetVariable(Stack[-2], Stack[-1])
0x5ed: Pop(2)
0x5ee: Return(); Pop(0)

0x5ef: PushEmpty()
0x5f0: PushEmpty(int, string)
0x5f1: Stack[-1] = "d12q01_Klara" // @poff=350
0x5f2: Call2 0x5d2

0x5f3: Pop(1)
0x5f4: Push((int) 0)
0x5f5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5f6: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5f7: Push("d12q01_Klara") // @poff=350
0x5f8: Push((int) 1)
0x5f9: @ SetVariable(Stack[-2], Stack[-1])
0x5fa: Pop(2)
0x5fb: PushEmpty()
0x5fc: Call2 0x682

0x5fd: Pop(0)
0x5fe: Return(); Pop(0)

0x5ff: PushEmpty()
0x600: Push("ood12KlaraT2_2") // @poff=376
0x601: Push((int) 1)
0x602: @ SetVariable(Stack[-2], Stack[-1])
0x603: Pop(2)
0x604: Return(); Pop(0)

0x605: PushEmpty()
0x606: Push("ood12KlaraT2_3") // @poff=406
0x607: Push((int) 1)
0x608: @ SetVariable(Stack[-2], Stack[-1])
0x609: Pop(2)
0x60a: Return(); Pop(0)

0x60b: PushEmpty()
0x60c: Push("d12q01KlaraVisit") // @poff=436
0x60d: Push((int) 1)
0x60e: @ SetVariable(Stack[-2], Stack[-1])
0x60f: Pop(2)
0x610: Return(); Pop(0)

0x611: PushEmpty()
0x612: PushEmpty(int, string)
0x613: Stack[-1] = "b12q01TheaterIsVisited" // @poff=470
0x614: Call2 0x5d2

0x615: Pop(1)
0x616: Push((int) 0)
0x617: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x619: Stack[-2] = (bool) 1
0x61a: Return(); Pop(0)

0x61b: Stack[-2] = (bool) 0
0x61c: Return(); Pop(0)

0x61d: PushEmpty()
0x61e: PushEmpty(int, string)
0x61f: Stack[-1] = "game_final" // @poff=516
0x620: Call2 0x5d2

0x621: Pop(1)
0x622: Push((int) 0)
0x623: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x624: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x625: Stack[-2] = (bool) 1
0x626: Return(); Pop(0)

0x627: Stack[-2] = (bool) 0
0x628: Return(); Pop(0)

0x629: PushEmpty()
0x62a: PushEmpty(bool, object)
0x62b: Stack[-3] = Stack[-1]
0x62c: Call2 0x66f

0x62d: Pop(1)
0x62e: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62f: Stack[-2] = (bool) 1
0x630: Return(); Pop(0)

0x631: Stack[-2] = (bool) 0
0x632: Return(); Pop(0)

0x633: PushEmpty()
0x634: PushEmpty(int, string)
0x635: Stack[-1] = "d12q01KlaraInSobor" // @poff=282
0x636: Call2 0x5d2

0x637: Pop(1)
0x638: Push((int) 0)
0x639: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63b: Stack[-2] = (bool) 1
0x63c: Return(); Pop(0)

0x63d: Stack[-2] = (bool) 0
0x63e: Return(); Pop(0)

0x63f: PushEmpty()
0x640: PushEmpty(int, string)
0x641: Stack[-1] = "ood12KlaraT2_1" // @poff=320
0x642: Call2 0x5d2

0x643: Pop(1)
0x644: Push((int) 0)
0x645: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x647: Stack[-2] = (bool) 1
0x648: Return(); Pop(0)

0x649: Stack[-2] = (bool) 0
0x64a: Return(); Pop(0)

0x64b: PushEmpty()
0x64c: PushEmpty(int, string)
0x64d: Stack[-1] = "ood12KlaraT2_2" // @poff=376
0x64e: Call2 0x5d2

0x64f: Pop(1)
0x650: Push((int) 0)
0x651: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x653: Stack[-2] = (bool) 1
0x654: Return(); Pop(0)

0x655: Stack[-2] = (bool) 0
0x656: Return(); Pop(0)

0x657: PushEmpty()
0x658: PushEmpty(int, string)
0x659: Stack[-1] = "ood12KlaraT2_3" // @poff=406
0x65a: Call2 0x5d2

0x65b: Pop(1)
0x65c: Push((int) 0)
0x65d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x65e: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x65f: Stack[-2] = (bool) 1
0x660: Return(); Pop(0)

0x661: Stack[-2] = (bool) 0
0x662: Return(); Pop(0)

0x663: PushEmpty()
0x664: PushEmpty(int, string)
0x665: Stack[-1] = "d12q01ChildsAreVisited" // @poff=538
0x666: Call2 0x5d2

0x667: Pop(1)
0x668: Push((int) 0)
0x669: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x66b: Stack[-2] = (bool) 1
0x66c: Return(); Pop(0)

0x66d: Stack[-2] = (bool) 0
0x66e: Return(); Pop(0)

0x66f: PushEmpty()
0x670: PushEmpty(bool)
0x671: Call2 0x6fd

0x672: Stack[-1] = Stack[-3]
0x673: Pop(1)
0x674: Return(); Pop(0)

0x675: PushEmpty(object, object)
0x676: Push((int) 701)
0x677: Push((int) 1)
0x678: Push((int) 535684)
0x679: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x67a: Pop(3)
0x67b: PushEmpty(bool, object, int)
0x67c: Stack[-4] = Stack[-2]
0x67d: Stack[-1] = (int) 699
0x67e: Call2 0x69c

0x67f: Pop(3)
0x680: Return(); Pop(2)

0x681: Stack[-1] = 0
0x682: PushEmpty(object, object)
0x683: Push((int) 707)
0x684: Push((int) 1)
0x685: Push((int) 535690)
0x686: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x687: Pop(3)
0x688: PushEmpty(bool, object, int)
0x689: Stack[-4] = Stack[-2]
0x68a: Stack[-1] = (int) 699
0x68b: Call2 0x69c

0x68c: Pop(3)
0x68d: Return(); Pop(2)

0x68e: Stack[-1] = 0
0x68f: PushEmpty(object, object)
0x690: @ GetDiaryRoot(Stack[-1])
0x691: Pop(0)
0x692: Pop(0); Push((bool) Stack[-1] == 0)
0x693: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x694: Push("Can't retrieve diary root") // @poff=584
0x695: @ Trace(Stack[-1])
0x696: Pop(1)
0x697: Stack[-3] = (bool) 0
0x698: Return(); Pop(2)

0x699: Stack[-1] = Stack[-3]
0x69a: Return(); Pop(2)

0x69b: Stack[-1] = 0
0x69c: PushEmpty(object, object, int, object, object, int)
0x69d: PushEmpty(object)
0x69e: Call2 0x68f

0x69f: Stack[-1] = Stack[-4]
0x6a0: Pop(1)
0x6a1: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=636
0x6a2: Pop(0)
0x6a3: Pop(0); Push((bool) Stack[-2] == 0)
0x6a4: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a5: Push("Can't find diary parent with id: ") // @poff=641
0x6a6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6a7: @ Trace(Stack[-1])
0x6a8: Pop(1)
0x6a9: Stack[-9] = (bool) 0
0x6aa: Return(); Pop(6)

0x6ab: @@ AddChild(Stack[-8]); Obj=2 // @poff=709
0x6ac: Pop(0)
0x6ad: Push((int) 7)
0x6ae: @ SendWorldWndMessage(Stack[-1])
0x6af: Pop(1)
0x6b0: @@ GetCategory(Stack[-1]); Obj=8 // @poff=718
0x6b1: Pop(0)
0x6b2: @ SetDiarySection(Stack[-1])
0x6b3: Pop(0)
0x6b4: Stack[-9] = (bool) 0
0x6b5: Return(); Pop(6)

0x6b6: Stack[-2] = 0
0x6b7: Stack[-3] = 0
0x6b8: PushEmpty(int, int)
0x6b9: Push("branch") // @poff=730
0x6ba: @ GetVariable(Stack[-1], Stack[-2])
0x6bb: Pop(1)
0x6bc: Push((int) 0)
0x6bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6bf: Stack[-3] = (int) 1
0x6c0: Return(); Pop(2)

0x6c1: GOTO 0x6c7

0x6c2: Push((int) 1)
0x6c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c5: Stack[-3] = (int) 2
0x6c6: Return(); Pop(2)

0x6c7: Stack[-3] = (int) 3
0x6c8: Return(); Pop(2)

0x6c9: PushEmpty()
0x6ca: Push((int) 7)
0x6cb: @@ add(Stack[-1]); Obj=4 // @poff=744
0x6cc: Pop(1)
0x6cd: Push((int) 23)
0x6ce: @@ add(Stack[-1]); Obj=4 // @poff=744
0x6cf: Pop(1)
0x6d0: Push((int) 21)
0x6d1: @@ add(Stack[-1]); Obj=4 // @poff=744
0x6d2: Pop(1)
0x6d3: Push((int) 9)
0x6d4: @@ add(Stack[-1]); Obj=4 // @poff=744
0x6d5: Pop(1)
0x6d6: Push((int) 3)
0x6d7: @@ add(Stack[-1]); Obj=4 // @poff=744
0x6d8: Pop(1)
0x6d9: Push((int) 1)
0x6da: @@ add(Stack[-1]); Obj=4 // @poff=744
0x6db: Pop(1)
0x6dc: Push((int) 11)
0x6dd: @@ add(Stack[-1]); Obj=4 // @poff=744
0x6de: Pop(1)
0x6df: Push((int) 13)
0x6e0: @@ add(Stack[-1]); Obj=4 // @poff=744
0x6e1: Pop(1)
0x6e2: Push((bool) 0)
0x6e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e5: Push((int) 25)
0x6e6: @@ add(Stack[-1]); Obj=4 // @poff=744
0x6e7: Pop(1)
0x6e8: Return(); Pop(0)

0x6e9: PushEmpty(int, int)
0x6ea: Push("vol_") // @poff=748
0x6eb: Pop(1); Push(Stack[-1] + Stack[-4]);
0x6ec: @ GetVariable(Stack[-1], Stack[-2])
0x6ed: Pop(1)
0x6ee: Push((int) 4)
0x6ef: Pop(1); Push(Stack[-2] & Stack[-1]);
0x6f0: Push((int) 0)
0x6f1: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x6f2: Return(); Pop(2)

0x6f3: PushEmpty(int, int)
0x6f4: Push("vol_") // @poff=748
0x6f5: Pop(1); Push(Stack[-1] + Stack[-4]);
0x6f6: @ GetVariable(Stack[-1], Stack[-2])
0x6f7: Pop(1)
0x6f8: Push((int) 16)
0x6f9: Pop(1); Push(Stack[-2] & Stack[-1]);
0x6fa: Push((int) 0)
0x6fb: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x6fc: Return(); Pop(2)

0x6fd: PushEmpty(object, int, int, int, object, int, int, int)
0x6fe: @ CreateIntVector(Stack[-4])
0x6ff: Pop(0)
0x700: PushEmpty(object, bool, int)
0x701: Stack[-7] = Stack[-3]
0x702: Stack[-2] = (bool) 0
0x703: Stack[-1] = (int) -1
0x704: Call2 0x6c9

0x705: Pop(3)
0x706: @@ size(Stack[-3]); Obj=4 // @poff=758
0x707: Pop(0)
0x708: Stack[-2] = (int) 0
0x709: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x70a: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x70b: @@ get(Stack[-1], Stack[-2]); Obj=4 // @poff=763
0x70c: Pop(0)
0x70d: PushEmpty(bool)
0x70e: Stack[-1] = (bool) 1
0x70f: PushEmpty(bool, int)
0x710: Stack[-4] = Stack[-1]
0x711: Call2 0x6f3

0x712: Pop(1)
0x713: IF (Stack[-1] == 1) GOTO 0x71a; Pop(1)

0x714: PushEmpty(bool, int)
0x715: Stack[-4] = Stack[-1]
0x716: Call2 0x6e9

0x717: Pop(1)
0x718: IF (Stack[-1] == 1) GOTO 0x71a; Pop(1)

0x719: Stack[-1] = (bool) 0
0x71a: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x71b: Stack[-9] = (bool) 0
0x71c: Return(); Pop(8)

0x71d: Push((int) 1)
0x71e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x71f: GOTO 0x709

0x720: Stack[-9] = (bool) 1
0x721: Return(); Pop(8)

0x722: Stack[-4] = 0
0x723: Stack[-1] = (int) 515540
0x724: Return(); Pop(0)

0x725: Stack[-1] = (int) 502865
0x726: Return(); Pop(0)

0x727: Stack[-1] = "ui/NPC_Klara.png" // @poff=767
0x728: Return(); Pop(0)

0x729: Stack[-1] = "ui/NPC_Klara_b.png" // @poff=801
0x72a: Return(); Pop(0)

0x72b: Stack[-1] = (bool) 1
0x72c: Return(); Pop(0)

