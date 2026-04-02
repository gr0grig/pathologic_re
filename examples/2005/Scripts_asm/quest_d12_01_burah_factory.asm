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
	W:ood12BurahFactory1
	W:d12q01BurahInSobor
	W:d12q01_Burah
	W:d12q01BurahVisit
	W:ood12BurahFactory2
	W:b12q01ChildsAreVisited
	W:game_final
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
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f006400310032004200750072006100680046006100630074006f0072007900310000006400310032007100300031004200750072006100680049006e0053006f0062006f00720000006400310032007100300031005f00420075007200610068000000640031003200710030003100420075007200610068005600690073006900740000006f006f006400310032004200750072006100680046006100630074006f0072007900320000006200310032007100300031004300680069006c006400730041007200650056006900730069007400650064000000670061006d0065005f00660069006e0061006c000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e006300680000006164640076006f006c005f00000073697a650067657400750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e0067000000
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

RunOp = 0x2e0
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xff Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x2e4 Vars = (object)
		EVENT_26 Op = 0x2f0 Vars = (string)
		EVENT_6 Op = 0x30c Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x420

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x373

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x31e

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x566

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x564

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x568

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x56a

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x4f8

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
0x48: Call2 0x362

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
0x56: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x497

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x47f

0x61: Pop(1)
0x62: Pop(1); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x43e

0x6a: Pop(2)
0x6b: PushEmpty(object, object)
0x6c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e: Call2 0x45d

0x6f: Pop(2)
0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral" // @poff=89
0x72: Call2 0xe9

0x73: Pop(1)
0x74: Push((int) 535567)
0x75: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x76: Pop(1)
0x77: @@@ ClearReplies(); Obj=0 // @poff=116
0x78: Pop(0)
0x79: Push((int) 535568)
0x7a: Push((int) 37252)
0x7b: Push((int) 37251)
0x7c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7d: Pop(3)
0x7e: Push((int) 535587)
0x7f: Push((int) 42035)
0x80: Push((int) 37272)
0x81: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x82: Pop(3)
0x83: GOTO 0xcb

0x84: PushEmpty(object, object)
0x85: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87: Call2 0x45d

0x88: Pop(2)
0x89: PushEmpty(string)
0x8a: Stack[-1] = "Neutral" // @poff=89
0x8b: Call2 0xe9

0x8c: Pop(1)
0x8d: Push((int) 535630)
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
0x98: Call2 0x48b

0x99: Pop(1)
0x9a: Pop(1); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9c: PushEmpty(bool, object)
0x9d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e: Call2 0x469

0x9f: Pop(1)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = (bool) 1
0xa2: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa3: PushEmpty(bool, object)
0xa4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Call2 0x47f

0xa6: Pop(1)
0xa7: Pop(1); Push((bool) Stack[-1] == 0)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 1
0xaa: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xab: Push((int) 535631)
0xac: Push((int) 37319)
0xad: Push((int) 37317)
0xae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xaf: Pop(3)
0xb0: PushEmpty(bool)
0xb1: Stack[-1] = (bool) 0
0xb2: PushEmpty(bool, object)
0xb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Call2 0x473

0xb5: Pop(1)
0xb6: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb7: PushEmpty(bool, object)
0xb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Call2 0x4a3

0xba: Pop(1)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Stack[-1] = (bool) 1
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 540355)
0xbf: Push((int) 42339)
0xc0: Push((int) 42338)
0xc1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc2: Pop(3)
0xc3: Push((int) 535632)
0xc4: Push((int) -1)
0xc5: Push((int) 37318)
0xc6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc7: Pop(3)
0xc8: GOTO 0xcb

0xc9: Return(); Pop(0)

0xca: GOTO 0x55

0xcb: PushEmpty(bool)
0xcc: Call2 0x56c

0xcd: Pop(0)
0xce: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xcf: @ lshWaitForAnimEnd()
0xd0: Pop(0)
0xd1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: GOTO 0xd9

0xd4: PushEmpty(string)
0xd5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd6: Call2 0x3fd

0xd7: Pop(1)
0xd8: GOTO 0xcf

0xd9: GOTO 0xe8

0xda: Push("all") // @poff=138
0xdb: Push("idle") // @poff=146
0xdc: @ PlayAnimation(Stack[-2], Stack[-1])
0xdd: Pop(2)
0xde: @ WaitForAnimEnd()
0xdf: Pop(0)
0xe0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: GOTO 0xe8

0xe3: Push("all") // @poff=138
0xe4: Push("idle") // @poff=146
0xe5: @ PlayAnimation(Stack[-2], Stack[-1])
0xe6: Pop(2)
0xe7: GOTO 0xde

0xe8: Return(); Pop(0)

0xe9: PushEmpty()
0xea: PushEmpty(bool)
0xeb: Call2 0x56c

0xec: Pop(0)
0xed: Pop(1); Push((bool) Stack[-1] == 0)
0xee: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xef: Return(); Pop(0)

0xf0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf2: Return(); Pop(0)

0xf3: PushEmpty(string, bool)
0xf4: Stack[-3] = Stack[-2]
0xf5: Push("") // @poff=102
0xf6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf8: Stack[-1] = (bool) 0
0xf9: GOTO 0xfb

0xfa: Stack[-1] = (bool) 1
0xfb: Call2 0x404

0xfc: Pop(2)
0xfd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfe: Return(); Pop(0)

0xff: PushEmpty()
0x100: Push((int) 1)
0x101: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x102: PushEmpty()
0x103: Call2 0x419

0x104: Pop(0)
0x105: Push((int) 37261)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x44d

0x10c: Pop(2)
0x10d: Push((int) 37264)
0x10e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0x444

0x114: Pop(2)
0x115: Push((int) 37320)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x444

0x11c: Pop(2)
0x11d: Push((int) 42338)
0x11e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x120: PushEmpty(object, object)
0x121: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x463

0x124: Pop(2)
0x125: Push((int) 37250)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x128: PushEmpty(bool)
0x129: Stack[-1] = (bool) 0
0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call2 0x497

0x12d: Pop(1)
0x12e: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x47f

0x132: Pop(1)
0x133: Pop(1); Push((bool) Stack[-1] == 0)
0x134: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x135: Stack[-1] = (bool) 1
0x136: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x137: PushEmpty(object, object)
0x138: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x139: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13a: Call2 0x43e

0x13b: Pop(2)
0x13c: PushEmpty(object, object)
0x13d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13f: Call2 0x45d

0x140: Pop(2)
0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral" // @poff=89
0x143: Call2 0xe9

0x144: Pop(1)
0x145: Push((int) 535567)
0x146: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x147: Pop(1)
0x148: @@@ ClearReplies(); Obj=0 // @poff=116
0x149: Pop(0)
0x14a: Push((int) 535568)
0x14b: Push((int) 37252)
0x14c: Push((int) 37251)
0x14d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14e: Pop(3)
0x14f: Push((int) 535587)
0x150: Push((int) 42035)
0x151: Push((int) 37272)
0x152: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: PushEmpty(object, object)
0x156: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x157: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x158: Call2 0x45d

0x159: Pop(2)
0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral" // @poff=89
0x15c: Call2 0xe9

0x15d: Pop(1)
0x15e: Push((int) 535630)
0x15f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x160: Pop(1)
0x161: @@@ ClearReplies(); Obj=0 // @poff=116
0x162: Pop(0)
0x163: PushEmpty(bool)
0x164: Stack[-1] = (bool) 0
0x165: PushEmpty(bool)
0x166: Stack[-1] = (bool) 0
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x48b

0x16a: Pop(1)
0x16b: Pop(1); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Call2 0x469

0x170: Pop(1)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: Stack[-1] = (bool) 1
0x173: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x174: PushEmpty(bool, object)
0x175: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x176: Call2 0x47f

0x177: Pop(1)
0x178: Pop(1); Push((bool) Stack[-1] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 1
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: Push((int) 535631)
0x17d: Push((int) 37319)
0x17e: Push((int) 37317)
0x17f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x180: Pop(3)
0x181: PushEmpty(bool)
0x182: Stack[-1] = (bool) 0
0x183: PushEmpty(bool, object)
0x184: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x185: Call2 0x473

0x186: Pop(1)
0x187: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x188: PushEmpty(bool, object)
0x189: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18a: Call2 0x4a3

0x18b: Pop(1)
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Stack[-1] = (bool) 1
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: Push((int) 540355)
0x190: Push((int) 42339)
0x191: Push((int) 42338)
0x192: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x193: Pop(3)
0x194: Push((int) 535632)
0x195: Push((int) -1)
0x196: Push((int) 37318)
0x197: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x198: Pop(3)
0x199: Return(); Pop(0)

0x19a: Push((int) 42339)
0x19b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x19d: PushEmpty(string)
0x19e: Stack[-1] = "Neutral" // @poff=89
0x19f: Call2 0xe9

0x1a0: Pop(1)
0x1a1: Push((int) 540356)
0x1a2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a3: Pop(1)
0x1a4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a5: Pop(0)
0x1a6: Push((int) 540357)
0x1a7: Push((int) 42341)
0x1a8: Push((int) 42340)
0x1a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1aa: Pop(3)
0x1ab: Return(); Pop(0)

0x1ac: Push((int) 42341)
0x1ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1af: PushEmpty(string)
0x1b0: Stack[-1] = "Neutral" // @poff=89
0x1b1: Call2 0xe9

0x1b2: Pop(1)
0x1b3: Push((int) 540358)
0x1b4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b5: Pop(1)
0x1b6: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b7: Pop(0)
0x1b8: Push((int) 540359)
0x1b9: Push((int) 42343)
0x1ba: Push((int) 42342)
0x1bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bc: Pop(3)
0x1bd: Return(); Pop(0)

0x1be: Push((int) 42343)
0x1bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c1: PushEmpty(string)
0x1c2: Stack[-1] = "Neutral" // @poff=89
0x1c3: Call2 0xe9

0x1c4: Pop(1)
0x1c5: Push((int) 540360)
0x1c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c7: Pop(1)
0x1c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c9: Pop(0)
0x1ca: Push((int) 540361)
0x1cb: Push((int) 42345)
0x1cc: Push((int) 42344)
0x1cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ce: Pop(3)
0x1cf: Return(); Pop(0)

0x1d0: Push((int) 42345)
0x1d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1d3: PushEmpty(string)
0x1d4: Stack[-1] = "Neutral" // @poff=89
0x1d5: Call2 0xe9

0x1d6: Pop(1)
0x1d7: Push((int) 540362)
0x1d8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d9: Pop(1)
0x1da: @@@ ClearReplies(); Obj=0 // @poff=116
0x1db: Pop(0)
0x1dc: Push((int) 540363)
0x1dd: Push((int) 42347)
0x1de: Push((int) 42346)
0x1df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e0: Pop(3)
0x1e1: Push((int) 540366)
0x1e2: Push((int) -1)
0x1e3: Push((int) 42349)
0x1e4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e5: Pop(3)
0x1e6: Return(); Pop(0)

0x1e7: Push((int) 42347)
0x1e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1ea: PushEmpty(string)
0x1eb: Stack[-1] = "Neutral" // @poff=89
0x1ec: Call2 0xe9

0x1ed: Pop(1)
0x1ee: Push((int) 540364)
0x1ef: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f0: Pop(1)
0x1f1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f2: Pop(0)
0x1f3: Push((int) 540365)
0x1f4: Push((int) -1)
0x1f5: Push((int) 42348)
0x1f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f7: Pop(3)
0x1f8: Push((int) 540367)
0x1f9: Push((int) -1)
0x1fa: Push((int) 42350)
0x1fb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fc: Pop(3)
0x1fd: Return(); Pop(0)

0x1fe: Push((int) 37319)
0x1ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x201: PushEmpty(string)
0x202: Stack[-1] = "Neutral" // @poff=89
0x203: Call2 0xe9

0x204: Pop(1)
0x205: Push((int) 535633)
0x206: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x207: Pop(1)
0x208: @@@ ClearReplies(); Obj=0 // @poff=116
0x209: Pop(0)
0x20a: Push((int) 535634)
0x20b: Push((int) -1)
0x20c: Push((int) 37320)
0x20d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20e: Pop(3)
0x20f: Return(); Pop(0)

0x210: Push((int) 37252)
0x211: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x213: PushEmpty(string)
0x214: Stack[-1] = "Neutral" // @poff=89
0x215: Call2 0xe9

0x216: Pop(1)
0x217: Push((int) 535569)
0x218: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x219: Pop(1)
0x21a: @@@ ClearReplies(); Obj=0 // @poff=116
0x21b: Pop(0)
0x21c: Push((int) 535570)
0x21d: Push((int) 42035)
0x21e: Push((int) 37253)
0x21f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x220: Pop(3)
0x221: Push((int) 540085)
0x222: Push((int) 42050)
0x223: Push((int) 42049)
0x224: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x225: Pop(3)
0x226: Return(); Pop(0)

0x227: Push((int) 42050)
0x228: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x22a: PushEmpty(string)
0x22b: Stack[-1] = "Neutral" // @poff=89
0x22c: Call2 0xe9

0x22d: Pop(1)
0x22e: Push((int) 540086)
0x22f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x230: Pop(1)
0x231: @@@ ClearReplies(); Obj=0 // @poff=116
0x232: Pop(0)
0x233: Push((int) 540087)
0x234: Push((int) 42035)
0x235: Push((int) 42051)
0x236: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x237: Pop(3)
0x238: Push((int) 540090)
0x239: Push((int) 42055)
0x23a: Push((int) 42056)
0x23b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23c: Pop(3)
0x23d: Return(); Pop(0)

0x23e: Push((int) 42035)
0x23f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x241: PushEmpty(string)
0x242: Stack[-1] = "Neutral" // @poff=89
0x243: Call2 0xe9

0x244: Pop(1)
0x245: Push((int) 540072)
0x246: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x247: Pop(1)
0x248: @@@ ClearReplies(); Obj=0 // @poff=116
0x249: Pop(0)
0x24a: Push((int) 540073)
0x24b: Push((int) 42037)
0x24c: Push((int) 42036)
0x24d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24e: Pop(3)
0x24f: Push((int) 540084)
0x250: Push((int) 42039)
0x251: Push((int) 42047)
0x252: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: Push((int) 42037)
0x256: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x258: PushEmpty(string)
0x259: Stack[-1] = "Neutral" // @poff=89
0x25a: Call2 0xe9

0x25b: Pop(1)
0x25c: Push((int) 540074)
0x25d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25e: Pop(1)
0x25f: @@@ ClearReplies(); Obj=0 // @poff=116
0x260: Pop(0)
0x261: Push((int) 540088)
0x262: Push((int) 42055)
0x263: Push((int) 42054)
0x264: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x265: Pop(3)
0x266: Return(); Pop(0)

0x267: Push((int) 42055)
0x268: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Neutral" // @poff=89
0x26c: Call2 0xe9

0x26d: Pop(1)
0x26e: Push((int) 540089)
0x26f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x270: Pop(1)
0x271: @@@ ClearReplies(); Obj=0 // @poff=116
0x272: Pop(0)
0x273: Push((int) 540075)
0x274: Push((int) 42039)
0x275: Push((int) 42038)
0x276: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x277: Pop(3)
0x278: Return(); Pop(0)

0x279: Push((int) 42039)
0x27a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x27c: PushEmpty(string)
0x27d: Stack[-1] = "Neutral" // @poff=89
0x27e: Call2 0xe9

0x27f: Pop(1)
0x280: Push((int) 540076)
0x281: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x282: Pop(1)
0x283: @@@ ClearReplies(); Obj=0 // @poff=116
0x284: Pop(0)
0x285: Push((int) 540077)
0x286: Push((int) 37260)
0x287: Push((int) 42040)
0x288: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x289: Pop(3)
0x28a: Return(); Pop(0)

0x28b: Push((int) 37260)
0x28c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x28e: PushEmpty(bool, object)
0x28f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x290: Call2 0x469

0x291: Pop(1)
0x292: Pop(1); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x294: PushEmpty(string)
0x295: Stack[-1] = "Neutral" // @poff=89
0x296: Call2 0xe9

0x297: Pop(1)
0x298: Push((int) 535577)
0x299: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x29a: Pop(1)
0x29b: @@@ ClearReplies(); Obj=0 // @poff=116
0x29c: Pop(0)
0x29d: Push((int) 540353)
0x29e: Push((int) 42337)
0x29f: Push((int) 42336)
0x2a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a1: Pop(3)
0x2a2: Push((int) 535579)
0x2a3: Push((int) -1)
0x2a4: Push((int) 37262)
0x2a5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a6: Pop(3)
0x2a7: Return(); Pop(0)

0x2a8: PushEmpty(bool, object)
0x2a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2aa: Call2 0x469

0x2ab: Pop(1)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2ad: PushEmpty(string)
0x2ae: Stack[-1] = "Neutral" // @poff=89
0x2af: Call2 0xe9

0x2b0: Pop(1)
0x2b1: Push((int) 535580)
0x2b2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b3: Pop(1)
0x2b4: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b5: Pop(0)
0x2b6: Push((int) 535581)
0x2b7: Push((int) -1)
0x2b8: Push((int) 37264)
0x2b9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ba: Pop(3)
0x2bb: Push((int) 535582)
0x2bc: Push((int) -1)
0x2bd: Push((int) 37265)
0x2be: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2bf: Pop(3)
0x2c0: Return(); Pop(0)

0x2c1: Push((int) 42337)
0x2c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2c4: PushEmpty(string)
0x2c5: Stack[-1] = "Neutral" // @poff=89
0x2c6: Call2 0xe9

0x2c7: Pop(1)
0x2c8: Push((int) 540354)
0x2c9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ca: Pop(1)
0x2cb: @@@ ClearReplies(); Obj=0 // @poff=116
0x2cc: Pop(0)
0x2cd: Push((int) 535578)
0x2ce: Push((int) -1)
0x2cf: Push((int) 37261)
0x2d0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d1: Pop(3)
0x2d2: Return(); Pop(0)

0x2d3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2d4: PushEmpty(bool)
0x2d5: Call2 0x56c

0x2d6: Pop(0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d8: @ lshStopAnimation()
0x2d9: Pop(0)
0x2da: GOTO 0x2dd

0x2db: @ StopAnimation()
0x2dc: Pop(0)
0x2dd: Return(); Pop(0)

0x2de: GOTO 0x100

0x2df: Return(); Pop(0)

0x2e0: PushEmpty()
0x2e1: Call2 0x2ec

0x2e2: Pop(0)
0x2e3: Return(); Pop(0)

0x2e4: PushEmpty()
0x2e5: PushEmpty(int, object)
0x2e6: Stack[-3] = Stack[-1]
0x2e7: Push(-2, 1); TaskCall(0)
0x2e8: Call2 0x0

0x2e9: Pop(-2, 1); TaskReturn
0x2ea: Pop(2)
0x2eb: Return(); Pop(0)

0x2ec: @ Hold()
0x2ed: Pop(0)
0x2ee: GOTO 0x2ec

0x2ef: Return(); Pop(0)

0x2f0: PushEmpty(bool, bool)
0x2f1: Push("cleanup") // @poff=156
0x2f2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2f4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2f5: @ IsLoaded(Stack[-1])
0x2f6: Pop(0)
0x2f7: PushEmpty(bool)
0x2f8: Stack[-1] = (bool) 0
0x2f9: Pop(0); Push((bool) Stack[-2] == 0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fb: PushEmpty(bool)
0x2fc: Call2 0x31c

0x2fd: Pop(0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2ff: Stack[-1] = (bool) 1
0x300: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x301: PushEmpty(object)
0x302: Call2 0x420

0x303: Pop(0)
0x304: @ RemoveActor(Stack[-1])
0x305: Pop(1)
0x306: GOTO 0x30b

0x307: Push("restore") // @poff=172
0x308: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x30a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x30b: Return(); Pop(2)

0x30c: PushEmpty(bool)
0x30d: Stack[-1] = (bool) 0
0x30e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x30f: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x310: PushEmpty(bool)
0x311: Call2 0x31c

0x312: Pop(0)
0x313: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x314: Stack[-1] = (bool) 1
0x315: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x316: PushEmpty(object)
0x317: Call2 0x420

0x318: Pop(0)
0x319: @ RemoveActor(Stack[-1])
0x31a: Pop(1)
0x31b: Return(); Pop(0)

0x31c: Stack[-1] = (bool) 1
0x31d: Return(); Pop(0)

0x31e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x31f: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x320: Pop(0)
0x321: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x322: Pop(0)
0x323: Push(CvectorIndex(Stack[-8], 1))
0x324: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x325: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x326: @ GetPosition(Stack[-7])
0x327: Pop(0)
0x328: @ GetEyesHeight(Stack[-9])
0x329: Pop(0)
0x32a: Push(CvectorIndex(Stack[-7], 1))
0x32b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x32c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x32d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x32e: Push(CvectorIndex(Stack[-6], 1))
0x32f: Stack[-1] = (int) 0
0x330: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x331: Pop(0); Push(Stack[-6] | Stack[-6]);
0x332: Pop(1); Push(Sqrt(Stack[-1]))
0x333: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x334: Stack[-5] = -Stack[-6]; Pop(0);
0x335: Pop(0); Push(Stack[-6] * Stack[-19]);
0x336: PushEmpty(cvector, cvector)
0x337: Push([0.0, 1.0, 0.0])
0x338: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x339: Call2 0x426

0x33a: Pop(1)
0x33b: Push((int) 25)
0x33c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x33d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x33e: Push([0.0, 10.0, 0.0])
0x33f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x340: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x341: @ IsOverrideActive(Stack[-2])
0x342: Pop(0)
0x343: Push(Stack[-2])
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-21] = (bool) 0
0x346: Return(); Pop(18)

0x347: @ StopWorld()
0x348: Pop(0)
0x349: @ CameraTransit(Stack[-3], Stack[-5])
0x34a: Pop(0)
0x34b: Push(CvectorIndex(Stack[-4], 0))
0x34c: Push(CvectorIndex(Stack[-5], 2))
0x34d: @ Rotate(Stack[-2], Stack[-1])
0x34e: Pop(2)
0x34f: PushEmpty(bool)
0x350: Call2 0x56c

0x351: Pop(0)
0x352: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x353: GOTO 0x35c

0x354: Push("head") // @poff=214
0x355: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x356: Pop(1)
0x357: Push(Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x359: Push("head") // @poff=214
0x35a: @ LookAsyncCamera(Stack[-1])
0x35b: Pop(1)
0x35c: @ CameraWaitForPlayFinish()
0x35d: Pop(0)
0x35e: @ ResumeWorld()
0x35f: Pop(0)
0x360: Stack[-21] = (bool) 1
0x361: Return(); Pop(18)

0x362: PushEmpty(bool, bool)
0x363: @ CameraSwitchToNormal()
0x364: Pop(0)
0x365: PushEmpty(bool)
0x366: Call2 0x56c

0x367: Pop(0)
0x368: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x369: GOTO 0x372

0x36a: Push("head") // @poff=214
0x36b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x36c: Pop(1)
0x36d: Push(Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36f: Push("head") // @poff=214
0x370: @ UnlookAsync(Stack[-1])
0x371: Pop(1)
0x372: Return(); Pop(2)

0x373: PushEmpty(int, int, int, int)
0x374: Push("voice_common") // @poff=224
0x375: @ GetVariable(Stack[-1], Stack[-3])
0x376: Pop(1)
0x377: Push(Stack[-2])
0x378: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x379: PushEmpty(bool, object)
0x37a: Stack[-7] = Stack[-1]
0x37b: Call2 0x3ad

0x37c: Pop(1)
0x37d: Pop(1); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x37f: PushEmpty(bool, object)
0x380: Stack[-7] = Stack[-1]
0x381: Call2 0x3d2

0x382: Pop(1)
0x383: Pop(1); Push((bool) Stack[-1] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-6] = (bool) 0
0x386: Return(); Pop(4)

0x387: Push((int) 2)
0x388: @ irand(Stack[-2], Stack[-1])
0x389: Pop(1)
0x38a: Push(Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x38c: Push("voice_common") // @poff=224
0x38d: Push((int) 1)
0x38e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x38f: Push((int) 3)
0x390: Pop(2); Push(Stack[-2] % Stack[-1]);
0x391: @ SetVariable(Stack[-2], Stack[-1])
0x392: Pop(2)
0x393: GOTO 0x398

0x394: Push("voice_common") // @poff=224
0x395: Push((int) 0)
0x396: @ SetVariable(Stack[-2], Stack[-1])
0x397: Pop(2)
0x398: GOTO 0x3ab

0x399: PushEmpty(bool, object)
0x39a: Stack[-7] = Stack[-1]
0x39b: Call2 0x3d2

0x39c: Pop(1)
0x39d: Pop(1); Push((bool) Stack[-1] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x39f: PushEmpty(bool, object)
0x3a0: Stack[-7] = Stack[-1]
0x3a1: Call2 0x3ad

0x3a2: Pop(1)
0x3a3: Pop(1); Push((bool) Stack[-1] == 0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a5: Stack[-6] = (bool) 0
0x3a6: Return(); Pop(4)

0x3a7: Push("voice_common") // @poff=224
0x3a8: Push((int) 1)
0x3a9: @ SetVariable(Stack[-2], Stack[-1])
0x3aa: Pop(2)
0x3ab: Stack[-6] = (bool) 1
0x3ac: Return(); Pop(4)

0x3ad: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3ae: Stack[-5] = "c" // @poff=250
0x3af: Stack[-4] = (int) 0
0x3b0: Push((int) 1)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b2: Push((int) 1)
0x3b3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3b4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b5: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x3b6: Pop(1)
0x3b7: Pop(0); Push((bool) Stack[-3] == 0)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b9: GOTO 0x3bd

0x3ba: Push((int) 1)
0x3bb: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3bc: GOTO 0x3b0

0x3bd: Pop(0); Push((bool) Stack[-4] == 0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3bf: Stack[-12] = (bool) 0
0x3c0: Return(); Pop(10)

0x3c1: Stack[-2] = (int) 0
0x3c2: Push((int) 1)
0x3c3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c5: @ irand(Stack[-2], Stack[-4])
0x3c6: Pop(0)
0x3c7: Push((int) 1)
0x3c8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3c9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ca: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x3cb: Pop(1)
0x3cc: PushEmpty(bool, string)
0x3cd: Stack[-3] = Stack[-1]
0x3ce: Call2 0x40a

0x3cf: Stack[-2] = Stack[-14]
0x3d0: Pop(2)
0x3d1: Return(); Pop(10)

0x3d2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3d3: Push("d") // @poff=220
0x3d4: PushEmpty(int)
0x3d5: Call2 0x435

0x3d6: Pop(0)
0x3d7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d8: Push("m") // @poff=278
0x3d9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3da: Stack[-4] = (int) 0
0x3db: Push((int) 1)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3dd: Push((int) 1)
0x3de: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3df: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e0: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x3e1: Pop(1)
0x3e2: Pop(0); Push((bool) Stack[-3] == 0)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e4: GOTO 0x3e8

0x3e5: Push((int) 1)
0x3e6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3e7: GOTO 0x3db

0x3e8: Pop(0); Push((bool) Stack[-4] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: Stack[-12] = (bool) 0
0x3eb: Return(); Pop(10)

0x3ec: Stack[-2] = (int) 0
0x3ed: Push((int) 1)
0x3ee: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f0: @ irand(Stack[-2], Stack[-4])
0x3f1: Pop(0)
0x3f2: Push((int) 1)
0x3f3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3f4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f5: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x3f6: Pop(1)
0x3f7: PushEmpty(bool, string)
0x3f8: Stack[-3] = Stack[-1]
0x3f9: Call2 0x40a

0x3fa: Stack[-2] = Stack[-14]
0x3fb: Pop(2)
0x3fc: Return(); Pop(10)

0x3fd: PushEmpty(float, float, float, float)
0x3fe: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3ff: Pop(0)
0x400: Push((bool) 0)
0x401: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(1)
0x403: Return(); Pop(4)

0x404: PushEmpty(float, float, float, float)
0x405: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x406: Pop(0)
0x407: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x408: Pop(0)
0x409: Return(); Pop(4)

0x40a: PushEmpty(bool, bool)
0x40b: PushEmpty(bool)
0x40c: Call2 0x56c

0x40d: Pop(0)
0x40e: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x40f: @ lshHasSpeech(Stack[-1], Stack[-3])
0x410: Pop(0)
0x411: Push(Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x413: @ lshPlaySpeech(Stack[-3])
0x414: Pop(0)
0x415: Stack[-4] = (bool) 1
0x416: Return(); Pop(2)

0x417: Stack[-4] = (bool) 0
0x418: Return(); Pop(2)

0x419: PushEmpty(bool)
0x41a: Call2 0x56c

0x41b: Pop(0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41d: @ lshStopSpeech()
0x41e: Pop(0)
0x41f: Return(); Pop(0)

0x420: PushEmpty(object, object)
0x421: @ self(Stack[-1])
0x422: Pop(0)
0x423: Stack[-1] = Stack[-3]
0x424: Return(); Pop(2)

0x425: Stack[-1] = 0
0x426: PushEmpty(float, float)
0x427: Pop(0); Push(Stack[-3] | Stack[-3]);
0x428: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x429: Push((float)9.999999974752427e-07)
0x42a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42c: Stack[-4] = [0.0, 0.0, 0.0]
0x42d: Return(); Pop(2)

0x42e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x42f: Return(); Pop(2)

0x430: PushEmpty(int, int)
0x431: @ GetVariable(Stack[-3], Stack[-1])
0x432: Pop(0)
0x433: Stack[-1] = Stack[-4]
0x434: Return(); Pop(2)

0x435: PushEmpty(float, float)
0x436: @ GetGameTime(Stack[-1])
0x437: Pop(0)
0x438: Push((int) 1)
0x439: PushEmpty(int)
0x43a: Push((int) 24)
0x43b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x43c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x43d: Return(); Pop(2)

0x43e: PushEmpty()
0x43f: Push("ood12BurahFactory1") // @poff=282
0x440: Push((int) 1)
0x441: @ SetVariable(Stack[-2], Stack[-1])
0x442: Pop(2)
0x443: Return(); Pop(0)

0x444: PushEmpty()
0x445: Push("d12q01BurahInSobor") // @poff=320
0x446: Push((int) 1)
0x447: @ SetVariable(Stack[-2], Stack[-1])
0x448: Pop(2)
0x449: PushEmpty()
0x44a: Call2 0x4b5

0x44b: Pop(0)
0x44c: Return(); Pop(0)

0x44d: PushEmpty()
0x44e: PushEmpty(int, string)
0x44f: Stack[-1] = "d12q01_Burah" // @poff=358
0x450: Call2 0x430

0x451: Pop(1)
0x452: Push((int) 0)
0x453: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x455: Push("d12q01_Burah") // @poff=358
0x456: Push((int) 1)
0x457: @ SetVariable(Stack[-2], Stack[-1])
0x458: Pop(2)
0x459: PushEmpty()
0x45a: Call2 0x4c2

0x45b: Pop(0)
0x45c: Return(); Pop(0)

0x45d: PushEmpty()
0x45e: Push("d12q01BurahVisit") // @poff=384
0x45f: Push((int) 1)
0x460: @ SetVariable(Stack[-2], Stack[-1])
0x461: Pop(2)
0x462: Return(); Pop(0)

0x463: PushEmpty()
0x464: Push("ood12BurahFactory2") // @poff=418
0x465: Push((int) 1)
0x466: @ SetVariable(Stack[-2], Stack[-1])
0x467: Pop(2)
0x468: Return(); Pop(0)

0x469: PushEmpty()
0x46a: PushEmpty(bool, object)
0x46b: Stack[-3] = Stack[-1]
0x46c: Call2 0x4af

0x46d: Pop(1)
0x46e: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46f: Stack[-2] = (bool) 1
0x470: Return(); Pop(0)

0x471: Stack[-2] = (bool) 0
0x472: Return(); Pop(0)

0x473: PushEmpty()
0x474: PushEmpty(int, string)
0x475: Stack[-1] = "b12q01ChildsAreVisited" // @poff=456
0x476: Call2 0x430

0x477: Pop(1)
0x478: Push((int) 0)
0x479: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47b: Stack[-2] = (bool) 1
0x47c: Return(); Pop(0)

0x47d: Stack[-2] = (bool) 0
0x47e: Return(); Pop(0)

0x47f: PushEmpty()
0x480: PushEmpty(int, string)
0x481: Stack[-1] = "game_final" // @poff=502
0x482: Call2 0x430

0x483: Pop(1)
0x484: Push((int) 0)
0x485: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-2] = (bool) 1
0x488: Return(); Pop(0)

0x489: Stack[-2] = (bool) 0
0x48a: Return(); Pop(0)

0x48b: PushEmpty()
0x48c: PushEmpty(int, string)
0x48d: Stack[-1] = "d12q01BurahInSobor" // @poff=320
0x48e: Call2 0x430

0x48f: Pop(1)
0x490: Push((int) 0)
0x491: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x493: Stack[-2] = (bool) 1
0x494: Return(); Pop(0)

0x495: Stack[-2] = (bool) 0
0x496: Return(); Pop(0)

0x497: PushEmpty()
0x498: PushEmpty(int, string)
0x499: Stack[-1] = "ood12BurahFactory1" // @poff=282
0x49a: Call2 0x430

0x49b: Pop(1)
0x49c: Push((int) 0)
0x49d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49f: Stack[-2] = (bool) 1
0x4a0: Return(); Pop(0)

0x4a1: Stack[-2] = (bool) 0
0x4a2: Return(); Pop(0)

0x4a3: PushEmpty()
0x4a4: PushEmpty(int, string)
0x4a5: Stack[-1] = "ood12BurahFactory2" // @poff=418
0x4a6: Call2 0x430

0x4a7: Pop(1)
0x4a8: Push((int) 0)
0x4a9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ab: Stack[-2] = (bool) 1
0x4ac: Return(); Pop(0)

0x4ad: Stack[-2] = (bool) 0
0x4ae: Return(); Pop(0)

0x4af: PushEmpty()
0x4b0: PushEmpty(bool)
0x4b1: Call2 0x53e

0x4b2: Stack[-1] = Stack[-3]
0x4b3: Pop(1)
0x4b4: Return(); Pop(0)

0x4b5: PushEmpty(object, object)
0x4b6: Push((int) 700)
0x4b7: Push((int) 1)
0x4b8: Push((int) 535683)
0x4b9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4ba: Pop(3)
0x4bb: PushEmpty(bool, object, int)
0x4bc: Stack[-4] = Stack[-2]
0x4bd: Stack[-1] = (int) 699
0x4be: Call2 0x4dc

0x4bf: Pop(3)
0x4c0: Return(); Pop(2)

0x4c1: Stack[-1] = 0
0x4c2: PushEmpty(object, object)
0x4c3: Push((int) 706)
0x4c4: Push((int) 1)
0x4c5: Push((int) 535689)
0x4c6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4c7: Pop(3)
0x4c8: PushEmpty(bool, object, int)
0x4c9: Stack[-4] = Stack[-2]
0x4ca: Stack[-1] = (int) 699
0x4cb: Call2 0x4dc

0x4cc: Pop(3)
0x4cd: Return(); Pop(2)

0x4ce: Stack[-1] = 0
0x4cf: PushEmpty(object, object)
0x4d0: @ GetDiaryRoot(Stack[-1])
0x4d1: Pop(0)
0x4d2: Pop(0); Push((bool) Stack[-1] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d4: Push("Can't retrieve diary root") // @poff=524
0x4d5: @ Trace(Stack[-1])
0x4d6: Pop(1)
0x4d7: Stack[-3] = (bool) 0
0x4d8: Return(); Pop(2)

0x4d9: Stack[-1] = Stack[-3]
0x4da: Return(); Pop(2)

0x4db: Stack[-1] = 0
0x4dc: PushEmpty(object, object, int, object, object, int)
0x4dd: PushEmpty(object)
0x4de: Call2 0x4cf

0x4df: Stack[-1] = Stack[-4]
0x4e0: Pop(1)
0x4e1: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=576
0x4e2: Pop(0)
0x4e3: Pop(0); Push((bool) Stack[-2] == 0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e5: Push("Can't find diary parent with id: ") // @poff=581
0x4e6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4e7: @ Trace(Stack[-1])
0x4e8: Pop(1)
0x4e9: Stack[-9] = (bool) 0
0x4ea: Return(); Pop(6)

0x4eb: @@ AddChild(Stack[-8]); Obj=2 // @poff=649
0x4ec: Pop(0)
0x4ed: Push((int) 7)
0x4ee: @ SendWorldWndMessage(Stack[-1])
0x4ef: Pop(1)
0x4f0: @@ GetCategory(Stack[-1]); Obj=8 // @poff=658
0x4f1: Pop(0)
0x4f2: @ SetDiarySection(Stack[-1])
0x4f3: Pop(0)
0x4f4: Stack[-9] = (bool) 0
0x4f5: Return(); Pop(6)

0x4f6: Stack[-2] = 0
0x4f7: Stack[-3] = 0
0x4f8: PushEmpty(int, int)
0x4f9: Push("branch") // @poff=670
0x4fa: @ GetVariable(Stack[-1], Stack[-2])
0x4fb: Pop(1)
0x4fc: Push((int) 0)
0x4fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4ff: Stack[-3] = (int) 1
0x500: Return(); Pop(2)

0x501: GOTO 0x507

0x502: Push((int) 1)
0x503: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x505: Stack[-3] = (int) 2
0x506: Return(); Pop(2)

0x507: Stack[-3] = (int) 3
0x508: Return(); Pop(2)

0x509: PushEmpty()
0x50a: Push((int) 18)
0x50b: @@ add(Stack[-1]); Obj=4 // @poff=684
0x50c: Pop(1)
0x50d: Push((int) 24)
0x50e: @@ add(Stack[-1]); Obj=4 // @poff=684
0x50f: Pop(1)
0x510: Push((int) 20)
0x511: @@ add(Stack[-1]); Obj=4 // @poff=684
0x512: Pop(1)
0x513: Push((int) 14)
0x514: @@ add(Stack[-1]); Obj=4 // @poff=684
0x515: Pop(1)
0x516: Push((bool) 0)
0x517: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x518: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x519: Push((int) 10)
0x51a: @@ add(Stack[-1]); Obj=4 // @poff=684
0x51b: Pop(1)
0x51c: Push((int) 17)
0x51d: @@ add(Stack[-1]); Obj=4 // @poff=684
0x51e: Pop(1)
0x51f: Push((int) 8)
0x520: @@ add(Stack[-1]); Obj=4 // @poff=684
0x521: Pop(1)
0x522: GOTO 0x529

0x523: Push((int) 1)
0x524: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x525: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x526: Push((int) 10)
0x527: @@ add(Stack[-1]); Obj=4 // @poff=684
0x528: Pop(1)
0x529: Return(); Pop(0)

0x52a: PushEmpty(int, int)
0x52b: Push("vol_") // @poff=688
0x52c: Pop(1); Push(Stack[-1] + Stack[-4]);
0x52d: @ GetVariable(Stack[-1], Stack[-2])
0x52e: Pop(1)
0x52f: Push((int) 4)
0x530: Pop(1); Push(Stack[-2] & Stack[-1]);
0x531: Push((int) 0)
0x532: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x533: Return(); Pop(2)

0x534: PushEmpty(int, int)
0x535: Push("vol_") // @poff=688
0x536: Pop(1); Push(Stack[-1] + Stack[-4]);
0x537: @ GetVariable(Stack[-1], Stack[-2])
0x538: Pop(1)
0x539: Push((int) 16)
0x53a: Pop(1); Push(Stack[-2] & Stack[-1]);
0x53b: Push((int) 0)
0x53c: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x53d: Return(); Pop(2)

0x53e: PushEmpty(object, int, int, int, object, int, int, int)
0x53f: @ CreateIntVector(Stack[-4])
0x540: Pop(0)
0x541: PushEmpty(object, bool, int)
0x542: Stack[-7] = Stack[-3]
0x543: Stack[-2] = (bool) 0
0x544: Stack[-1] = (int) -1
0x545: Call2 0x509

0x546: Pop(3)
0x547: @@ size(Stack[-3]); Obj=4 // @poff=698
0x548: Pop(0)
0x549: Stack[-2] = (int) 0
0x54a: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x54b: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x54c: @@ get(Stack[-1], Stack[-2]); Obj=4 // @poff=703
0x54d: Pop(0)
0x54e: PushEmpty(bool)
0x54f: Stack[-1] = (bool) 1
0x550: PushEmpty(bool, int)
0x551: Stack[-4] = Stack[-1]
0x552: Call2 0x534

0x553: Pop(1)
0x554: IF (Stack[-1] == 1) GOTO 0x55b; Pop(1)

0x555: PushEmpty(bool, int)
0x556: Stack[-4] = Stack[-1]
0x557: Call2 0x52a

0x558: Pop(1)
0x559: IF (Stack[-1] == 1) GOTO 0x55b; Pop(1)

0x55a: Stack[-1] = (bool) 0
0x55b: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55c: Stack[-9] = (bool) 0
0x55d: Return(); Pop(8)

0x55e: Push((int) 1)
0x55f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x560: GOTO 0x54a

0x561: Stack[-9] = (bool) 1
0x562: Return(); Pop(8)

0x563: Stack[-4] = 0
0x564: Stack[-1] = (int) 515592
0x565: Return(); Pop(0)

0x566: Stack[-1] = (int) 511961
0x567: Return(); Pop(0)

0x568: Stack[-1] = "ui/NPC_Burah.png" // @poff=707
0x569: Return(); Pop(0)

0x56a: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=741
0x56b: Return(); Pop(0)

0x56c: Stack[-1] = (bool) 1
0x56d: Return(); Pop(0)

