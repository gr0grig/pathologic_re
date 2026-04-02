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
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:oob1Spi4ka1
	W:b1q05Spi4kaGotoLaska
	W:pt_map_laska
	A:AddMark
	W:b1q05Spi4kaGotoMishka
	W:pt_map_mishka
	W:quest_b1_05
	W:completed
	A:ShowMap
	W:vagon_mishka@door1
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	A:GetLocator
	W:Warning: outdoor scene locator 
	W: doesnt exist
	W:Can't find map
	A:SetMapParams
	W:branch
	W:mt_spi4ka
	W:ui/NPC_Spi4ka.png
	W:ui/NPC_Spi4ka_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d00000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f7065727479006f006f006200310053007000690034006b006100310000006200310071003000350053007000690034006b00610047006f0074006f004c00610073006b0061000000700074005f006d00610070005f006c00610073006b00610000004164644d61726b006200310071003000350053007000690034006b00610047006f0074006f004d006900730068006b0061000000700074005f006d00610070005f006d006900730068006b0061000000710075006500730074005f00620031005f0030003500000063006f006d0070006c006500740065006400000053686f774d6170007600610067006f006e005f006d006900730068006b006100400064006f006f00720031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e006300680000006d0074005f0073007000690034006b0061000000750069002f004e00500043005f0053007000690034006b0061002e0070006e0067000000750069002f004e00500043005f0053007000690034006b0061005f0062002e0070006e0067000000
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
	FindActor (2 args)
	Trace (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x308
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb5 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2ae Vars = (int, int)
	GTASK_4 Vars = (bool) Params = 0
		EVENT_0 Op = 0x2fc Vars = (object)
		EVENT_26 Op = 0x30c Vars = (string)
		EVENT_6 Op = 0x328 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x43c

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x38f

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x33a

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x562

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x560

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x564

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x566

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x53e

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
0x48: Call2 0x37e

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
0x56: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x4ca

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x47c

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Neutral" // @poff=89
0x63: Call2 0x9f

0x64: Pop(1)
0x65: Push((int) 530928)
0x66: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x67: Pop(1)
0x68: @@@ ClearReplies(); Obj=0 // @poff=116
0x69: Pop(0)
0x6a: Push((int) 530929)
0x6b: Push((int) 32288)
0x6c: Push((int) 32256)
0x6d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e: Pop(3)
0x6f: GOTO 0x81

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral" // @poff=89
0x72: Call2 0x9f

0x73: Pop(1)
0x74: Push((int) 530936)
0x75: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x76: Pop(1)
0x77: @@@ ClearReplies(); Obj=0 // @poff=116
0x78: Pop(0)
0x79: Push((int) 530937)
0x7a: Push((int) -1)
0x7b: Push((int) 32264)
0x7c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7d: Pop(3)
0x7e: GOTO 0x81

0x7f: Return(); Pop(0)

0x80: GOTO 0x55

0x81: PushEmpty(bool)
0x82: Call2 0x568

0x83: Pop(0)
0x84: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x85: @ lshWaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: PushEmpty(string)
0x8b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8c: Call2 0x419

0x8d: Pop(1)
0x8e: GOTO 0x85

0x8f: GOTO 0x9e

0x90: Push("all") // @poff=138
0x91: Push("idle") // @poff=146
0x92: @ PlayAnimation(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: @ WaitForAnimEnd()
0x95: Pop(0)
0x96: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0x9e

0x99: Push("all") // @poff=138
0x9a: Push("idle") // @poff=146
0x9b: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c: Pop(2)
0x9d: GOTO 0x94

0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: PushEmpty(bool)
0xa1: Call2 0x568

0xa2: Pop(0)
0xa3: Pop(1); Push((bool) Stack[-1] == 0)
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: Return(); Pop(0)

0xa6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: PushEmpty(string, bool)
0xaa: Stack[-3] = Stack[-2]
0xab: Push("") // @poff=102
0xac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xae: Stack[-1] = (bool) 0
0xaf: GOTO 0xb1

0xb0: Stack[-1] = (bool) 1
0xb1: Call2 0x420

0xb2: Pop(2)
0xb3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb4: Return(); Pop(0)

0xb5: PushEmpty()
0xb6: Push((int) 1)
0xb7: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0xb8: PushEmpty()
0xb9: Call2 0x435

0xba: Pop(0)
0xbb: Push((int) 32262)
0xbc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xbe: PushEmpty(object, object)
0xbf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1: Call2 0x482

0xc2: Pop(2)
0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x4c3

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x4a3

0xcc: Pop(2)
0xcd: Push((int) 32312)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x482

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x4c3

0xd9: Pop(2)
0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x4b3

0xde: Pop(2)
0xdf: Push((int) 32255)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x4ca

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x47c

0xeb: Pop(2)
0xec: PushEmpty(string)
0xed: Stack[-1] = "Neutral" // @poff=89
0xee: Call2 0x9f

0xef: Pop(1)
0xf0: Push((int) 530928)
0xf1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf2: Pop(1)
0xf3: @@@ ClearReplies(); Obj=0 // @poff=116
0xf4: Pop(0)
0xf5: Push((int) 530929)
0xf6: Push((int) 32288)
0xf7: Push((int) 32256)
0xf8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral" // @poff=89
0xfd: Call2 0x9f

0xfe: Pop(1)
0xff: Push((int) 530936)
0x100: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x101: Pop(1)
0x102: @@@ ClearReplies(); Obj=0 // @poff=116
0x103: Pop(0)
0x104: Push((int) 530937)
0x105: Push((int) -1)
0x106: Push((int) 32264)
0x107: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 32288)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral" // @poff=89
0x10f: Call2 0x9f

0x110: Pop(1)
0x111: Push((int) 530967)
0x112: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x113: Pop(1)
0x114: @@@ ClearReplies(); Obj=0 // @poff=116
0x115: Pop(0)
0x116: Push((int) 530968)
0x117: Push((int) 32291)
0x118: Push((int) 32289)
0x119: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11a: Pop(3)
0x11b: Push((int) 530969)
0x11c: Push((int) 32294)
0x11d: Push((int) 32290)
0x11e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 32294)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral" // @poff=89
0x126: Call2 0x9f

0x127: Pop(1)
0x128: Push((int) 530973)
0x129: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12a: Pop(1)
0x12b: @@@ ClearReplies(); Obj=0 // @poff=116
0x12c: Pop(0)
0x12d: Push((int) 530974)
0x12e: Push((int) 32296)
0x12f: Push((int) 32295)
0x130: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x131: Pop(3)
0x132: Push((int) 530976)
0x133: Push((int) 32291)
0x134: Push((int) 32297)
0x135: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: Push((int) 32296)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral" // @poff=89
0x13d: Call2 0x9f

0x13e: Pop(1)
0x13f: Push((int) 530975)
0x140: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x141: Pop(1)
0x142: @@@ ClearReplies(); Obj=0 // @poff=116
0x143: Pop(0)
0x144: Push((int) 530977)
0x145: Push((int) 32291)
0x146: Push((int) 32298)
0x147: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 32291)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Neutral" // @poff=89
0x14f: Call2 0x9f

0x150: Pop(1)
0x151: Push((int) 530970)
0x152: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x153: Pop(1)
0x154: @@@ ClearReplies(); Obj=0 // @poff=116
0x155: Pop(0)
0x156: Push((int) 530971)
0x157: Push((int) 32293)
0x158: Push((int) 32292)
0x159: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15a: Pop(3)
0x15b: Push((int) 530989)
0x15c: Push((int) 32315)
0x15d: Push((int) 32314)
0x15e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: Push((int) 32315)
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Neutral" // @poff=89
0x166: Call2 0x9f

0x167: Pop(1)
0x168: Push((int) 530990)
0x169: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16a: Pop(1)
0x16b: @@@ ClearReplies(); Obj=0 // @poff=116
0x16c: Pop(0)
0x16d: Push((int) 530991)
0x16e: Push((int) 32293)
0x16f: Push((int) 32316)
0x170: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Push((int) 32293)
0x174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral" // @poff=89
0x178: Call2 0x9f

0x179: Pop(1)
0x17a: Push((int) 530972)
0x17b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17c: Pop(1)
0x17d: @@@ ClearReplies(); Obj=0 // @poff=116
0x17e: Pop(0)
0x17f: Push((int) 530978)
0x180: Push((int) 32302)
0x181: Push((int) 32300)
0x182: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 32302)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral" // @poff=89
0x18a: Call2 0x9f

0x18b: Pop(1)
0x18c: Push((int) 530980)
0x18d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18e: Pop(1)
0x18f: @@@ ClearReplies(); Obj=0 // @poff=116
0x190: Pop(0)
0x191: Push((int) 530981)
0x192: Push((int) 32301)
0x193: Push((int) 32303)
0x194: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x195: Pop(3)
0x196: Push((int) 530987)
0x197: Push((int) 32301)
0x198: Push((int) 32310)
0x199: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 32301)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral" // @poff=89
0x1a1: Call2 0x9f

0x1a2: Pop(1)
0x1a3: Push((int) 530979)
0x1a4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a5: Pop(1)
0x1a6: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a7: Pop(0)
0x1a8: Push((int) 530982)
0x1a9: Push((int) 32305)
0x1aa: Push((int) 32304)
0x1ab: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 32305)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Neutral" // @poff=89
0x1b3: Call2 0x9f

0x1b4: Pop(1)
0x1b5: Push((int) 530983)
0x1b6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b7: Pop(1)
0x1b8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b9: Pop(0)
0x1ba: Push((int) 530931)
0x1bb: Push((int) 32259)
0x1bc: Push((int) 32258)
0x1bd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1be: Pop(3)
0x1bf: Push((int) 530984)
0x1c0: Push((int) 32307)
0x1c1: Push((int) 32306)
0x1c2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c3: Pop(3)
0x1c4: Return(); Pop(0)

0x1c5: Push((int) 32307)
0x1c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c8: PushEmpty(string)
0x1c9: Stack[-1] = "Neutral" // @poff=89
0x1ca: Call2 0x9f

0x1cb: Pop(1)
0x1cc: Push((int) 530985)
0x1cd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ce: Pop(1)
0x1cf: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d0: Pop(0)
0x1d1: Push((int) 530986)
0x1d2: Push((int) 32259)
0x1d3: Push((int) 32308)
0x1d4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 32259)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Neutral" // @poff=89
0x1dc: Call2 0x9f

0x1dd: Pop(1)
0x1de: Push((int) 530932)
0x1df: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e0: Pop(1)
0x1e1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e2: Pop(0)
0x1e3: Push((int) 530933)
0x1e4: Push((int) 32261)
0x1e5: Push((int) 32260)
0x1e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e7: Pop(3)
0x1e8: Push((int) 530988)
0x1e9: Push((int) -1)
0x1ea: Push((int) 32312)
0x1eb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 32261)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Neutral" // @poff=89
0x1f3: Call2 0x9f

0x1f4: Pop(1)
0x1f5: Push((int) 530934)
0x1f6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f7: Pop(1)
0x1f8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f9: Pop(0)
0x1fa: Push((int) 530935)
0x1fb: Push((int) -1)
0x1fc: Push((int) 32262)
0x1fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x201: PushEmpty(bool)
0x202: Call2 0x568

0x203: Pop(0)
0x204: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x205: @ lshStopAnimation()
0x206: Pop(0)
0x207: GOTO 0x20a

0x208: @ StopAnimation()
0x209: Pop(0)
0x20a: Return(); Pop(0)

0x20b: GOTO 0xb6

0x20c: Return(); Pop(0)

0x20d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x20e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x20f: PushEmpty(bool, object)
0x210: PushEmpty(object)
0x211: Call2 0x43c

0x212: Stack[-1] = Stack[-2]
0x213: Pop(1)
0x214: Call2 0x38f

0x215: Pop(2)
0x216: PushEmpty(bool, object, float)
0x217: Stack[-12] = Stack[-2]
0x218: Stack[-1] = (float) 70.0
0x219: Call2 0x33a

0x21a: Pop(2)
0x21b: Pop(1); Push((bool) Stack[-1] == 0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21d: Stack[-10] = (int) -2
0x21e: Return(); Pop(8)

0x21f: @ CreateDialog(Stack[-4])
0x220: Pop(0)
0x221: PushEmpty(int)
0x222: Call2 0x562

0x223: Pop(0)
0x224: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x225: Pop(1)
0x226: PushEmpty(int)
0x227: Call2 0x560

0x228: Pop(0)
0x229: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x22a: Pop(1)
0x22b: PushEmpty(string)
0x22c: Call2 0x564

0x22d: Pop(0)
0x22e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22f: Pop(1)
0x230: PushEmpty(string)
0x231: Call2 0x566

0x232: Pop(0)
0x233: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x234: Pop(1)
0x235: PushEmpty(int)
0x236: Call2 0x53e

0x237: Pop(0)
0x238: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x239: Pop(1)
0x23a: Stack[-2] = (int) -1
0x23b: @ IsOverrideActive(Stack[-3])
0x23c: Pop(0)
0x23d: Push(Stack[-3])
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: Stack[-10] = (int) -2
0x240: Return(); Pop(8)

0x241: @ DoDialog(Stack[-4])
0x242: Pop(0)
0x243: PushEmpty(object, object)
0x244: Stack[-11] = Stack[-2]
0x245: Stack[-6] = Stack[-1]
0x246: Push(-2, 4); TaskCall(3)
0x247: Call2 0x25e

0x248: Pop(-2, 4); TaskReturn
0x249: Pop(2)
0x24a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x24b: Pop(0)
0x24c: Pop(0); Push((bool) Stack[-1] == 0)
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: @ sync()
0x24f: Pop(0)
0x250: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x251: Pop(0)
0x252: GOTO 0x24c

0x253: PushEmpty(object)
0x254: Stack[-10] = Stack[-1]
0x255: Call2 0x37e

0x256: Pop(1)
0x257: @ StopDialog(Stack[-4])
0x258: Pop(0)
0x259: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x25a: Pop(0)
0x25b: Stack[-2] = Stack[-10]
0x25c: Return(); Pop(8)

0x25d: Stack[-4] = 0
0x25e: PushEmpty()
0x25f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x260: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x261: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x262: Push((int) 1)
0x263: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x264: PushEmpty(string)
0x265: Stack[-1] = "Neutral" // @poff=89
0x266: Call2 0x298

0x267: Pop(1)
0x268: Push((int) 520803)
0x269: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x26a: Pop(1)
0x26b: @@@ ClearReplies(); Obj=0 // @poff=116
0x26c: Pop(0)
0x26d: Push((int) 520804)
0x26e: Push((int) 29221)
0x26f: Push((int) 22021)
0x270: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x271: Pop(3)
0x272: Push((int) 527876)
0x273: Push((int) 29224)
0x274: Push((int) 29223)
0x275: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x276: Pop(3)
0x277: GOTO 0x27a

0x278: Return(); Pop(0)

0x279: GOTO 0x262

0x27a: PushEmpty(bool)
0x27b: Call2 0x568

0x27c: Pop(0)
0x27d: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x27e: @ lshWaitForAnimEnd()
0x27f: Pop(0)
0x280: Push( Stack[3 + Tasks[-1].StackPointer] )
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: GOTO 0x288

0x283: PushEmpty(string)
0x284: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x285: Call2 0x419

0x286: Pop(1)
0x287: GOTO 0x27e

0x288: GOTO 0x297

0x289: Push("all") // @poff=138
0x28a: Push("idle") // @poff=146
0x28b: @ PlayAnimation(Stack[-2], Stack[-1])
0x28c: Pop(2)
0x28d: @ WaitForAnimEnd()
0x28e: Pop(0)
0x28f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x290: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x291: GOTO 0x297

0x292: Push("all") // @poff=138
0x293: Push("idle") // @poff=146
0x294: @ PlayAnimation(Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: GOTO 0x28d

0x297: Return(); Pop(0)

0x298: PushEmpty()
0x299: PushEmpty(bool)
0x29a: Call2 0x568

0x29b: Pop(0)
0x29c: Pop(1); Push((bool) Stack[-1] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: Return(); Pop(0)

0x29f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: Return(); Pop(0)

0x2a2: PushEmpty(string, bool)
0x2a3: Stack[-3] = Stack[-2]
0x2a4: Push("") // @poff=102
0x2a5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a7: Stack[-1] = (bool) 0
0x2a8: GOTO 0x2aa

0x2a9: Stack[-1] = (bool) 1
0x2aa: Call2 0x420

0x2ab: Pop(2)
0x2ac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2ad: Return(); Pop(0)

0x2ae: PushEmpty()
0x2af: Push((int) 1)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2b1: PushEmpty()
0x2b2: Call2 0x435

0x2b3: Pop(0)
0x2b4: Push((int) 22020)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Neutral" // @poff=89
0x2b9: Call2 0x298

0x2ba: Pop(1)
0x2bb: Push((int) 520803)
0x2bc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2bd: Pop(1)
0x2be: @@@ ClearReplies(); Obj=0 // @poff=116
0x2bf: Pop(0)
0x2c0: Push((int) 520804)
0x2c1: Push((int) 29221)
0x2c2: Push((int) 22021)
0x2c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c4: Pop(3)
0x2c5: Push((int) 527876)
0x2c6: Push((int) 29224)
0x2c7: Push((int) 29223)
0x2c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c9: Pop(3)
0x2ca: Return(); Pop(0)

0x2cb: Push((int) 29224)
0x2cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2ce: PushEmpty(string)
0x2cf: Stack[-1] = "Neutral" // @poff=89
0x2d0: Call2 0x298

0x2d1: Pop(1)
0x2d2: Push((int) 527877)
0x2d3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d4: Pop(1)
0x2d5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d6: Pop(0)
0x2d7: Push((int) 527878)
0x2d8: Push((int) -1)
0x2d9: Push((int) 29225)
0x2da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2db: Pop(3)
0x2dc: Return(); Pop(0)

0x2dd: Push((int) 29221)
0x2de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Neutral" // @poff=89
0x2e2: Call2 0x298

0x2e3: Pop(1)
0x2e4: Push((int) 527874)
0x2e5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e6: Pop(1)
0x2e7: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e8: Pop(0)
0x2e9: Push((int) 527875)
0x2ea: Push((int) -1)
0x2eb: Push((int) 29222)
0x2ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ed: Pop(3)
0x2ee: Return(); Pop(0)

0x2ef: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2f0: PushEmpty(bool)
0x2f1: Call2 0x568

0x2f2: Pop(0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f4: @ lshStopAnimation()
0x2f5: Pop(0)
0x2f6: GOTO 0x2f9

0x2f7: @ StopAnimation()
0x2f8: Pop(0)
0x2f9: Return(); Pop(0)

0x2fa: GOTO 0x2af

0x2fb: Return(); Pop(0)

0x2fc: PushEmpty()
0x2fd: PushEmpty(object)
0x2fe: Stack[-2] = Stack[-1]
0x2ff: Call2 0x54f

0x300: Pop(1)
0x301: PushEmpty(int, object)
0x302: Stack[-3] = Stack[-1]
0x303: Push(-2, 1); TaskCall(0)
0x304: Call2 0x0

0x305: Pop(-2, 1); TaskReturn
0x306: Pop(2)
0x307: Return(); Pop(0)

0x308: @ Hold()
0x309: Pop(0)
0x30a: GOTO 0x308

0x30b: Return(); Pop(0)

0x30c: PushEmpty(bool, bool)
0x30d: Push("cleanup") // @poff=156
0x30e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x310: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x311: @ IsLoaded(Stack[-1])
0x312: Pop(0)
0x313: PushEmpty(bool)
0x314: Stack[-1] = (bool) 0
0x315: Pop(0); Push((bool) Stack[-2] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x317: PushEmpty(bool)
0x318: Call2 0x338

0x319: Pop(0)
0x31a: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31b: Stack[-1] = (bool) 1
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: PushEmpty(object)
0x31e: Call2 0x43c

0x31f: Pop(0)
0x320: @ RemoveActor(Stack[-1])
0x321: Pop(1)
0x322: GOTO 0x327

0x323: Push("restore") // @poff=172
0x324: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x327: Return(); Pop(2)

0x328: PushEmpty(bool)
0x329: Stack[-1] = (bool) 0
0x32a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x32b: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32c: PushEmpty(bool)
0x32d: Call2 0x338

0x32e: Pop(0)
0x32f: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x330: Stack[-1] = (bool) 1
0x331: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x332: PushEmpty(object)
0x333: Call2 0x43c

0x334: Pop(0)
0x335: @ RemoveActor(Stack[-1])
0x336: Pop(1)
0x337: Return(); Pop(0)

0x338: Stack[-1] = (bool) 1
0x339: Return(); Pop(0)

0x33a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x33b: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x33c: Pop(0)
0x33d: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x33e: Pop(0)
0x33f: Push(CvectorIndex(Stack[-8], 1))
0x340: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x341: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x342: @ GetPosition(Stack[-7])
0x343: Pop(0)
0x344: @ GetEyesHeight(Stack[-9])
0x345: Pop(0)
0x346: Push(CvectorIndex(Stack[-7], 1))
0x347: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x348: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x349: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x34a: Push(CvectorIndex(Stack[-6], 1))
0x34b: Stack[-1] = (int) 0
0x34c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x34d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x34e: Pop(1); Push(Sqrt(Stack[-1]))
0x34f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x350: Stack[-5] = -Stack[-6]; Pop(0);
0x351: Pop(0); Push(Stack[-6] * Stack[-19]);
0x352: PushEmpty(cvector, cvector)
0x353: Push([0.0, 1.0, 0.0])
0x354: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x355: Call2 0x442

0x356: Pop(1)
0x357: Push((int) 25)
0x358: Pop(2); Push(Stack[-2] * Stack[-1]);
0x359: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35a: Push([0.0, 10.0, 0.0])
0x35b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x35c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x35d: @ IsOverrideActive(Stack[-2])
0x35e: Pop(0)
0x35f: Push(Stack[-2])
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-21] = (bool) 0
0x362: Return(); Pop(18)

0x363: @ StopWorld()
0x364: Pop(0)
0x365: @ CameraTransit(Stack[-3], Stack[-5])
0x366: Pop(0)
0x367: Push(CvectorIndex(Stack[-4], 0))
0x368: Push(CvectorIndex(Stack[-5], 2))
0x369: @ Rotate(Stack[-2], Stack[-1])
0x36a: Pop(2)
0x36b: PushEmpty(bool)
0x36c: Call2 0x568

0x36d: Pop(0)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: GOTO 0x378

0x370: Push("head") // @poff=214
0x371: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x372: Pop(1)
0x373: Push(Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x375: Push("head") // @poff=214
0x376: @ LookAsyncCamera(Stack[-1])
0x377: Pop(1)
0x378: @ CameraWaitForPlayFinish()
0x379: Pop(0)
0x37a: @ ResumeWorld()
0x37b: Pop(0)
0x37c: Stack[-21] = (bool) 1
0x37d: Return(); Pop(18)

0x37e: PushEmpty(bool, bool)
0x37f: @ CameraSwitchToNormal()
0x380: Pop(0)
0x381: PushEmpty(bool)
0x382: Call2 0x568

0x383: Pop(0)
0x384: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x385: GOTO 0x38e

0x386: Push("head") // @poff=214
0x387: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x388: Pop(1)
0x389: Push(Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38b: Push("head") // @poff=214
0x38c: @ UnlookAsync(Stack[-1])
0x38d: Pop(1)
0x38e: Return(); Pop(2)

0x38f: PushEmpty(int, int, int, int)
0x390: Push("voice_common") // @poff=224
0x391: @ GetVariable(Stack[-1], Stack[-3])
0x392: Pop(1)
0x393: Push(Stack[-2])
0x394: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x395: PushEmpty(bool, object)
0x396: Stack[-7] = Stack[-1]
0x397: Call2 0x3c9

0x398: Pop(1)
0x399: Pop(1); Push((bool) Stack[-1] == 0)
0x39a: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x39b: PushEmpty(bool, object)
0x39c: Stack[-7] = Stack[-1]
0x39d: Call2 0x3ee

0x39e: Pop(1)
0x39f: Pop(1); Push((bool) Stack[-1] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a1: Stack[-6] = (bool) 0
0x3a2: Return(); Pop(4)

0x3a3: Push((int) 2)
0x3a4: @ irand(Stack[-2], Stack[-1])
0x3a5: Pop(1)
0x3a6: Push(Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3a8: Push("voice_common") // @poff=224
0x3a9: Push((int) 1)
0x3aa: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3ab: Push((int) 3)
0x3ac: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3ad: @ SetVariable(Stack[-2], Stack[-1])
0x3ae: Pop(2)
0x3af: GOTO 0x3b4

0x3b0: Push("voice_common") // @poff=224
0x3b1: Push((int) 0)
0x3b2: @ SetVariable(Stack[-2], Stack[-1])
0x3b3: Pop(2)
0x3b4: GOTO 0x3c7

0x3b5: PushEmpty(bool, object)
0x3b6: Stack[-7] = Stack[-1]
0x3b7: Call2 0x3ee

0x3b8: Pop(1)
0x3b9: Pop(1); Push((bool) Stack[-1] == 0)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3bb: PushEmpty(bool, object)
0x3bc: Stack[-7] = Stack[-1]
0x3bd: Call2 0x3c9

0x3be: Pop(1)
0x3bf: Pop(1); Push((bool) Stack[-1] == 0)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c1: Stack[-6] = (bool) 0
0x3c2: Return(); Pop(4)

0x3c3: Push("voice_common") // @poff=224
0x3c4: Push((int) 1)
0x3c5: @ SetVariable(Stack[-2], Stack[-1])
0x3c6: Pop(2)
0x3c7: Stack[-6] = (bool) 1
0x3c8: Return(); Pop(4)

0x3c9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3ca: Stack[-5] = "c" // @poff=250
0x3cb: Stack[-4] = (int) 0
0x3cc: Push((int) 1)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3ce: Push((int) 1)
0x3cf: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3d0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3d1: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x3d2: Pop(1)
0x3d3: Pop(0); Push((bool) Stack[-3] == 0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d5: GOTO 0x3d9

0x3d6: Push((int) 1)
0x3d7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3d8: GOTO 0x3cc

0x3d9: Pop(0); Push((bool) Stack[-4] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3db: Stack[-12] = (bool) 0
0x3dc: Return(); Pop(10)

0x3dd: Stack[-2] = (int) 0
0x3de: Push((int) 1)
0x3df: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e1: @ irand(Stack[-2], Stack[-4])
0x3e2: Pop(0)
0x3e3: Push((int) 1)
0x3e4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3e5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e6: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x3e7: Pop(1)
0x3e8: PushEmpty(bool, string)
0x3e9: Stack[-3] = Stack[-1]
0x3ea: Call2 0x426

0x3eb: Stack[-2] = Stack[-14]
0x3ec: Pop(2)
0x3ed: Return(); Pop(10)

0x3ee: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3ef: Push("d") // @poff=220
0x3f0: PushEmpty(int)
0x3f1: Call2 0x473

0x3f2: Pop(0)
0x3f3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f4: Push("m") // @poff=278
0x3f5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3f6: Stack[-4] = (int) 0
0x3f7: Push((int) 1)
0x3f8: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f9: Push((int) 1)
0x3fa: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3fb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3fc: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x3fd: Pop(1)
0x3fe: Pop(0); Push((bool) Stack[-3] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x400: GOTO 0x404

0x401: Push((int) 1)
0x402: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x403: GOTO 0x3f7

0x404: Pop(0); Push((bool) Stack[-4] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: Stack[-12] = (bool) 0
0x407: Return(); Pop(10)

0x408: Stack[-2] = (int) 0
0x409: Push((int) 1)
0x40a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: @ irand(Stack[-2], Stack[-4])
0x40d: Pop(0)
0x40e: Push((int) 1)
0x40f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x410: Pop(1); Push(Stack[-6] + Stack[-1]);
0x411: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x412: Pop(1)
0x413: PushEmpty(bool, string)
0x414: Stack[-3] = Stack[-1]
0x415: Call2 0x426

0x416: Stack[-2] = Stack[-14]
0x417: Pop(2)
0x418: Return(); Pop(10)

0x419: PushEmpty(float, float, float, float)
0x41a: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x41b: Pop(0)
0x41c: Push((bool) 0)
0x41d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x41e: Pop(1)
0x41f: Return(); Pop(4)

0x420: PushEmpty(float, float, float, float)
0x421: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x422: Pop(0)
0x423: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x424: Pop(0)
0x425: Return(); Pop(4)

0x426: PushEmpty(bool, bool)
0x427: PushEmpty(bool)
0x428: Call2 0x568

0x429: Pop(0)
0x42a: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x42b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x42c: Pop(0)
0x42d: Push(Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x42f: @ lshPlaySpeech(Stack[-3])
0x430: Pop(0)
0x431: Stack[-4] = (bool) 1
0x432: Return(); Pop(2)

0x433: Stack[-4] = (bool) 0
0x434: Return(); Pop(2)

0x435: PushEmpty(bool)
0x436: Call2 0x568

0x437: Pop(0)
0x438: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x439: @ lshStopSpeech()
0x43a: Pop(0)
0x43b: Return(); Pop(0)

0x43c: PushEmpty(object, object)
0x43d: @ self(Stack[-1])
0x43e: Pop(0)
0x43f: Stack[-1] = Stack[-3]
0x440: Return(); Pop(2)

0x441: Stack[-1] = 0
0x442: PushEmpty(float, float)
0x443: Pop(0); Push(Stack[-3] | Stack[-3]);
0x444: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x445: Push((float)9.999999974752427e-07)
0x446: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x448: Stack[-4] = [0.0, 0.0, 0.0]
0x449: Return(); Pop(2)

0x44a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x44b: Return(); Pop(2)

0x44c: PushEmpty(int, int)
0x44d: @ GetVariable(Stack[-3], Stack[-1])
0x44e: Pop(0)
0x44f: Stack[-1] = Stack[-4]
0x450: Return(); Pop(2)

0x451: PushEmpty(object, object)
0x452: @ FindActor(Stack[-1], Stack[-4])
0x453: Pop(0)
0x454: Pop(0); Push((bool) Stack[-1] == 0)
0x455: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x456: Push("Door ") // @poff=282
0x457: Pop(1); Push(Stack[-1] + Stack[-5]);
0x458: Push(" not found") // @poff=294
0x459: Pop(2); Push(Stack[-2] + Stack[-1]);
0x45a: @ Trace(Stack[-1])
0x45b: Pop(1)
0x45c: GOTO 0x460

0x45d: Push("locked") // @poff=316
0x45e: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=330
0x45f: Pop(1)
0x460: Return(); Pop(2)

0x461: Stack[-1] = 0
0x462: PushEmpty(object, object)
0x463: @ FindActor(Stack[-1], Stack[-4])
0x464: Pop(0)
0x465: Pop(0); PushNull((bool) Stack[-1] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-5] = (bool) 0
0x468: Return(); Pop(2)

0x469: @ Trigger(Stack[-1], Stack[-3])
0x46a: Pop(0)
0x46b: Stack[-5] = (bool) 1
0x46c: Return(); Pop(2)

0x46d: Stack[-1] = 0
0x46e: PushEmpty(float, float)
0x46f: @ GetGameTime(Stack[-1])
0x470: Pop(0)
0x471: Stack[-1] = Stack[-3]
0x472: Return(); Pop(2)

0x473: PushEmpty(float, float)
0x474: @ GetGameTime(Stack[-1])
0x475: Pop(0)
0x476: Push((int) 1)
0x477: PushEmpty(int)
0x478: Push((int) 24)
0x479: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x47a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x47b: Return(); Pop(2)

0x47c: PushEmpty()
0x47d: Push("oob1Spi4ka1") // @poff=342
0x47e: Push((int) 1)
0x47f: @ SetVariable(Stack[-2], Stack[-1])
0x480: Pop(2)
0x481: Return(); Pop(0)

0x482: PushEmpty(object, object)
0x483: PushEmpty(object)
0x484: Call2 0x50c

0x485: Stack[-1] = Stack[-2]
0x486: Pop(1)
0x487: Push("b1q05Spi4kaGotoLaska") // @poff=366
0x488: Push("pt_map_laska") // @poff=408
0x489: Push((int) 3)
0x48a: Push((int) 530954)
0x48b: PushEmpty(float)
0x48c: Call2 0x46e

0x48d: Pop(0)
0x48e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=434
0x48f: Pop(5)
0x490: Push("b1q05Spi4kaGotoMishka") // @poff=442
0x491: Push("pt_map_mishka") // @poff=486
0x492: Push((int) 3)
0x493: Push((int) 530955)
0x494: PushEmpty(float)
0x495: Call2 0x46e

0x496: Pop(0)
0x497: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=434
0x498: Pop(5)
0x499: PushEmpty()
0x49a: Call2 0x4d6

0x49b: Pop(0)
0x49c: PushEmpty(bool, string, string)
0x49d: Stack[-2] = "quest_b1_05" // @poff=514
0x49e: Stack[-1] = "completed" // @poff=538
0x49f: Call2 0x462

0x4a0: Pop(3)
0x4a1: Return(); Pop(2)

0x4a2: Stack[-1] = 0
0x4a3: PushEmpty()
0x4a4: PushEmpty(object, string, float)
0x4a5: PushEmpty(object)
0x4a6: Call2 0x50c

0x4a7: Stack[-1] = Stack[-4]
0x4a8: Pop(1)
0x4a9: Stack[-2] = "pt_map_laska" // @poff=408
0x4aa: Stack[-1] = (int) 2
0x4ab: Call2 0x51d

0x4ac: Pop(3)
0x4ad: PushEmpty(object)
0x4ae: Call2 0x50c

0x4af: Pop(0)
0x4b0: @@ ShowMap(Stack[-1]); Obj=2 // @poff=558
0x4b1: Pop(1)
0x4b2: Return(); Pop(0)

0x4b3: PushEmpty()
0x4b4: PushEmpty(object, string, float)
0x4b5: PushEmpty(object)
0x4b6: Call2 0x50c

0x4b7: Stack[-1] = Stack[-4]
0x4b8: Pop(1)
0x4b9: Stack[-2] = "pt_map_mishka" // @poff=486
0x4ba: Stack[-1] = (int) 2
0x4bb: Call2 0x51d

0x4bc: Pop(3)
0x4bd: PushEmpty(object)
0x4be: Call2 0x50c

0x4bf: Pop(0)
0x4c0: @@ ShowMap(Stack[-1]); Obj=2 // @poff=558
0x4c1: Pop(1)
0x4c2: Return(); Pop(0)

0x4c3: PushEmpty()
0x4c4: PushEmpty(string, bool)
0x4c5: Stack[-2] = "vagon_mishka@door1" // @poff=566
0x4c6: Stack[-1] = (bool) 0
0x4c7: Call2 0x451

0x4c8: Pop(2)
0x4c9: Return(); Pop(0)

0x4ca: PushEmpty()
0x4cb: PushEmpty(int, string)
0x4cc: Stack[-1] = "oob1Spi4ka1" // @poff=342
0x4cd: Call2 0x44c

0x4ce: Pop(1)
0x4cf: Push((int) 0)
0x4d0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: Stack[-2] = (bool) 1
0x4d3: Return(); Pop(0)

0x4d4: Stack[-2] = (bool) 0
0x4d5: Return(); Pop(0)

0x4d6: PushEmpty(object, object)
0x4d7: Push((int) 584)
0x4d8: Push((int) 2)
0x4d9: Push((int) 530953)
0x4da: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4db: Pop(3)
0x4dc: PushEmpty(bool, object, int)
0x4dd: Stack[-4] = Stack[-2]
0x4de: Stack[-1] = (int) 582
0x4df: Call2 0x4f0

0x4e0: Pop(3)
0x4e1: Return(); Pop(2)

0x4e2: Stack[-1] = 0
0x4e3: PushEmpty(object, object)
0x4e4: @ GetDiaryRoot(Stack[-1])
0x4e5: Pop(0)
0x4e6: Pop(0); Push((bool) Stack[-1] == 0)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e8: Push("Can't retrieve diary root") // @poff=604
0x4e9: @ Trace(Stack[-1])
0x4ea: Pop(1)
0x4eb: Stack[-3] = (bool) 0
0x4ec: Return(); Pop(2)

0x4ed: Stack[-1] = Stack[-3]
0x4ee: Return(); Pop(2)

0x4ef: Stack[-1] = 0
0x4f0: PushEmpty(object, object, int, object, object, int)
0x4f1: PushEmpty(object)
0x4f2: Call2 0x4e3

0x4f3: Stack[-1] = Stack[-4]
0x4f4: Pop(1)
0x4f5: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=656
0x4f6: Pop(0)
0x4f7: Pop(0); Push((bool) Stack[-2] == 0)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4f9: Push("Can't find diary parent with id: ") // @poff=661
0x4fa: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4fb: @ Trace(Stack[-1])
0x4fc: Pop(1)
0x4fd: Stack[-9] = (bool) 0
0x4fe: Return(); Pop(6)

0x4ff: @@ AddChild(Stack[-8]); Obj=2 // @poff=729
0x500: Pop(0)
0x501: Push((int) 7)
0x502: @ SendWorldWndMessage(Stack[-1])
0x503: Pop(1)
0x504: @@ GetCategory(Stack[-1]); Obj=8 // @poff=738
0x505: Pop(0)
0x506: @ SetDiarySection(Stack[-1])
0x507: Pop(0)
0x508: Stack[-9] = (bool) 0
0x509: Return(); Pop(6)

0x50a: Stack[-2] = 0
0x50b: Stack[-3] = 0
0x50c: PushEmpty(object, object, object, object)
0x50d: @ GetMainOutdoorScene(Stack[-2])
0x50e: Pop(0)
0x50f: Pop(0); PushNull((bool) Stack[-2] == 0)
0x510: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x511: Push("Can't find main outdoor scene") // @poff=750
0x512: @ Trace(Stack[-1])
0x513: Pop(1)
0x514: Stack[-1] = 0
0x515: Stack[-1] = Stack[-5]
0x516: Return(); Pop(4)

0x517: @@ GetMap(Stack[-1]); Obj=2 // @poff=810
0x518: Pop(0)
0x519: Stack[-1] = Stack[-5]
0x51a: Return(); Pop(4)

0x51b: Stack[-1] = 0
0x51c: Stack[-2] = 0
0x51d: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x51e: @ GetMainOutdoorScene(Stack[-2])
0x51f: Pop(0)
0x520: Pop(0); PushNull((bool) Stack[-2] == 0)
0x521: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x522: Push("Can't find main outdoor scene") // @poff=750
0x523: @ Trace(Stack[-1])
0x524: Pop(1)
0x525: Return(); Pop(8)

0x526: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=817
0x527: Pop(0)
0x528: Pop(0); Push((bool) Stack[-1] == 0)
0x529: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52a: Push("Warning: outdoor scene locator ") // @poff=828
0x52b: Pop(1); Push(Stack[-1] + Stack[-11]);
0x52c: Push(" doesnt exist") // @poff=892
0x52d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x52e: @ Trace(Stack[-1])
0x52f: Pop(1)
0x530: @@ GetMap(Stack[-11]); Obj=2 // @poff=810
0x531: Pop(0)
0x532: Pop(0); PushNull((bool) Stack[-11] == 0)
0x533: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x534: Push("Can't find map") // @poff=920
0x535: @ Trace(Stack[-1])
0x536: Pop(1)
0x537: Return(); Pop(8)

0x538: Push(CvectorIndex(Stack[-4], 0))
0x539: Push(CvectorIndex(Stack[-5], 2))
0x53a: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=950
0x53b: Pop(2)
0x53c: Return(); Pop(8)

0x53d: Stack[-2] = 0
0x53e: PushEmpty(int, int)
0x53f: Push("branch") // @poff=963
0x540: @ GetVariable(Stack[-1], Stack[-2])
0x541: Pop(1)
0x542: Push((int) 0)
0x543: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x544: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x545: Stack[-3] = (int) 1
0x546: Return(); Pop(2)

0x547: GOTO 0x54d

0x548: Push((int) 1)
0x549: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54b: Stack[-3] = (int) 2
0x54c: Return(); Pop(2)

0x54d: Stack[-3] = (int) 3
0x54e: Return(); Pop(2)

0x54f: PushEmpty(int, int)
0x550: Push("mt_spi4ka") // @poff=977
0x551: @ GetVariable(Stack[-1], Stack[-2])
0x552: Pop(1)
0x553: Pop(0); Push((bool) Stack[-1] == 0)
0x554: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x555: PushEmpty(int, object)
0x556: Stack[-5] = Stack[-1]
0x557: Push(-2, 1); TaskCall(2)
0x558: Call2 0x20d

0x559: Pop(-2, 1); TaskReturn
0x55a: Pop(2)
0x55b: Push("mt_spi4ka") // @poff=977
0x55c: Push((int) 1)
0x55d: @ SetVariable(Stack[-2], Stack[-1])
0x55e: Pop(2)
0x55f: Return(); Pop(2)

0x560: Stack[-1] = (int) 515552
0x561: Return(); Pop(0)

0x562: Stack[-1] = (int) 502877
0x563: Return(); Pop(0)

0x564: Stack[-1] = "ui/NPC_Spi4ka.png" // @poff=997
0x565: Return(); Pop(0)

0x566: Stack[-1] = "ui/NPC_Spi4ka_b.png" // @poff=1033
0x567: Return(); Pop(0)

0x568: Stack[-1] = (bool) 1
0x569: Return(); Pop(0)

