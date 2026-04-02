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
	W:Azart
	W:Secret
	W:Serious
	W:player
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:.bin
	W:ui/NPC_Spi4ka.png
	W:ui/NPC_Spi4ka_b.png
	W:quest_b4_02
	W:place_boy
	W:oob4Spi4ka1
	W:oob4Spi4ka2
	W:b10q04Spi4kaTalk
	W:b4Spi4kaVisit
	W:oob12Spi4ka1
	W:b4q02
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:mt_spi4ka
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000041007a006100720074000000530065006300720065007400000053006500720069006f0075007300000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000002e00620069006e000000750069002f004e00500043005f0053007000690034006b0061002e0070006e0067000000750069002f004e00500043005f0053007000690034006b0061005f0062002e0070006e0067000000710075006500730074005f00620034005f0030003200000070006c006100630065005f0062006f00790000006f006f006200340053007000690034006b006100310000006f006f006200340053007000690034006b0061003200000062003100300071003000340053007000690034006b006100540061006c006b0000006200340053007000690034006b0061005600690073006900740000006f006f0062003100320053007000690034006b00610031000000620034007100300032000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e006300680000006d0074005f0073007000690034006b0061000000
// @pool_encoding:utf8

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
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
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x640
RunTask = 11

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d0 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x344 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x527 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x616 Vars = (int, int)
	GTASK_11 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x68f Vars = (int)
		EVENT_6 Op = 0x6b5 Vars = ()
		EVENT_5 Op = 0x6c4 Vars = ()
		EVENT_45 Op = 0x6d1 Vars = (bool)
		EVENT_0 Op = 0x6dd Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x761

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf: PushEmpty(bool, object)
0x10: PushEmpty(object)
0x11: Call2 0x868

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x7bb

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x766

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x8bd

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x8bb

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x8bf

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x8c1

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x98f

0x37: Pop(0)
0x38: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x39: Pop(1)
0x3a: Stack[-2] = (int) -1
0x3b: @ IsOverrideActive(Stack[-3])
0x3c: Pop(0)
0x3d: Push(Stack[-3])
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: Stack[-10] = (int) -2
0x40: Return(); Pop(8)

0x41: @ DoDialog(Stack[-4])
0x42: Pop(0)
0x43: PushEmpty(object, object)
0x44: Stack[-11] = Stack[-2]
0x45: Stack[-6] = Stack[-1]
0x46: Push(-2, 4); TaskCall(2)
0x47: Call2 0x5e

0x48: Pop(-2, 4); TaskReturn
0x49: Pop(2)
0x4a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4b: Pop(0)
0x4c: Pop(0); Push((bool) Stack[-1] == 0)
0x4d: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4e: @ sync()
0x4f: Pop(0)
0x50: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x51: Pop(0)
0x52: GOTO 0x4c

0x53: PushEmpty(object)
0x54: Stack[-10] = Stack[-1]
0x55: Call2 0x7aa

0x56: Pop(1)
0x57: @ StopDialog(Stack[-4])
0x58: Pop(0)
0x59: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5a: Pop(0)
0x5b: Stack[-2] = Stack[-10]
0x5c: Return(); Pop(8)

0x5d: Stack[-4] = 0
0x5e: PushEmpty()
0x5f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x60: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x61: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x62: Push((int) 1)
0x63: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x9d

0x67: Pop(1)
0x68: Push((int) 530479)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x8f7

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 530480)
0x73: Push((int) 32848)
0x74: Push((int) 31846)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 530481)
0x78: Push((int) -1)
0x79: Push((int) 31847)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0x8c3

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x845

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all") // @poff=138
0x8f: Push("idle") // @poff=146
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all") // @poff=138
0x98: Push("idle") // @poff=146
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x8c3

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-3] = Stack[-2]
0xa9: Push("") // @poff=102
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x84c

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x861

0xb8: Pop(0)
0xb9: Push((int) 31849)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x8e2

0xc0: Pop(2)
0xc1: Push((int) 31845)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral" // @poff=89
0xc6: Call2 0x9d

0xc7: Pop(1)
0xc8: Push((int) 530479)
0xc9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xca: Pop(1)
0xcb: @@@ ClearReplies(); Obj=0 // @poff=116
0xcc: Pop(0)
0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0x8f7

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd2: Push((int) 530480)
0xd3: Push((int) 32848)
0xd4: Push((int) 31846)
0xd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd6: Pop(3)
0xd7: Push((int) 530481)
0xd8: Push((int) -1)
0xd9: Push((int) 31847)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Return(); Pop(0)

0xdd: Push((int) 32848)
0xde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral" // @poff=89
0xe2: Call2 0x9d

0xe3: Pop(1)
0xe4: Push((int) 531491)
0xe5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe6: Pop(1)
0xe7: @@@ ClearReplies(); Obj=0 // @poff=116
0xe8: Pop(0)
0xe9: Push((int) 531493)
0xea: Push((int) 31848)
0xeb: Push((int) 32850)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: Push((int) 531492)
0xef: Push((int) 31848)
0xf0: Push((int) 32849)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: Push((int) 31848)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral" // @poff=89
0xf9: Call2 0x9d

0xfa: Pop(1)
0xfb: Push((int) 530482)
0xfc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfd: Pop(1)
0xfe: @@@ ClearReplies(); Obj=0 // @poff=116
0xff: Pop(0)
0x100: Push((int) 531494)
0x101: Push((int) 32853)
0x102: Push((int) 32852)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 32853)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral" // @poff=89
0x10b: Call2 0x9d

0x10c: Pop(1)
0x10d: Push((int) 531495)
0x10e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10f: Pop(1)
0x110: @@@ ClearReplies(); Obj=0 // @poff=116
0x111: Pop(0)
0x112: Push((int) 530483)
0x113: Push((int) -1)
0x114: Push((int) 31849)
0x115: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x119: PushEmpty(bool)
0x11a: Call2 0x8c3

0x11b: Pop(0)
0x11c: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11d: @ lshStopAnimation()
0x11e: Pop(0)
0x11f: GOTO 0x122

0x120: @ StopAnimation()
0x121: Pop(0)
0x122: Return(); Pop(0)

0x123: GOTO 0xb4

0x124: Return(); Pop(0)

0x125: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x126: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x127: PushEmpty(bool, object)
0x128: PushEmpty(object)
0x129: Call2 0x868

0x12a: Stack[-1] = Stack[-2]
0x12b: Pop(1)
0x12c: Call2 0x7bb

0x12d: Pop(2)
0x12e: PushEmpty(bool, object, float)
0x12f: Stack[-12] = Stack[-2]
0x130: Stack[-1] = (float) 70.0
0x131: Call2 0x766

0x132: Pop(2)
0x133: Pop(1); Push((bool) Stack[-1] == 0)
0x134: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x135: Stack[-10] = (int) -2
0x136: Return(); Pop(8)

0x137: @ CreateDialog(Stack[-4])
0x138: Pop(0)
0x139: PushEmpty(int)
0x13a: Call2 0x8bd

0x13b: Pop(0)
0x13c: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x13d: Pop(1)
0x13e: PushEmpty(int)
0x13f: Call2 0x8bb

0x140: Pop(0)
0x141: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x142: Pop(1)
0x143: PushEmpty(string)
0x144: Call2 0x8bf

0x145: Pop(0)
0x146: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x147: Pop(1)
0x148: PushEmpty(string)
0x149: Call2 0x8c1

0x14a: Pop(0)
0x14b: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x14c: Pop(1)
0x14d: PushEmpty(int)
0x14e: Call2 0x98f

0x14f: Pop(0)
0x150: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x151: Pop(1)
0x152: Stack[-2] = (int) -1
0x153: @ IsOverrideActive(Stack[-3])
0x154: Pop(0)
0x155: Push(Stack[-3])
0x156: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x157: Stack[-10] = (int) -2
0x158: Return(); Pop(8)

0x159: @ DoDialog(Stack[-4])
0x15a: Pop(0)
0x15b: PushEmpty(object, object)
0x15c: Stack[-11] = Stack[-2]
0x15d: Stack[-6] = Stack[-1]
0x15e: Push(-2, 4); TaskCall(4)
0x15f: Call2 0x176

0x160: Pop(-2, 4); TaskReturn
0x161: Pop(2)
0x162: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x163: Pop(0)
0x164: Pop(0); Push((bool) Stack[-1] == 0)
0x165: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x166: @ sync()
0x167: Pop(0)
0x168: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x169: Pop(0)
0x16a: GOTO 0x164

0x16b: PushEmpty(object)
0x16c: Stack[-10] = Stack[-1]
0x16d: Call2 0x7aa

0x16e: Pop(1)
0x16f: @ StopDialog(Stack[-4])
0x170: Pop(0)
0x171: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x172: Pop(0)
0x173: Stack[-2] = Stack[-10]
0x174: Return(); Pop(8)

0x175: Stack[-4] = 0
0x176: PushEmpty()
0x177: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x178: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x179: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x17a: Push((int) 1)
0x17b: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x17c: PushEmpty(string)
0x17d: Stack[-1] = "Neutral" // @poff=89
0x17e: Call2 0x1ba

0x17f: Pop(1)
0x180: Push((int) 535248)
0x181: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x182: Pop(1)
0x183: @@@ ClearReplies(); Obj=0 // @poff=116
0x184: Pop(0)
0x185: PushEmpty(bool, object)
0x186: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x187: Call2 0x903

0x188: Pop(1)
0x189: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18a: Push((int) 535249)
0x18b: Push((int) 37070)
0x18c: Push((int) 36924)
0x18d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18e: Pop(3)
0x18f: Push((int) 535387)
0x190: Push((int) -1)
0x191: Push((int) 37072)
0x192: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x193: Pop(3)
0x194: Push((int) 535388)
0x195: Push((int) -1)
0x196: Push((int) 37073)
0x197: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x198: Pop(3)
0x199: GOTO 0x19c

0x19a: Return(); Pop(0)

0x19b: GOTO 0x17a

0x19c: PushEmpty(bool)
0x19d: Call2 0x8c3

0x19e: Pop(0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a0: @ lshWaitForAnimEnd()
0x1a1: Pop(0)
0x1a2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: GOTO 0x1aa

0x1a5: PushEmpty(string)
0x1a6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1a7: Call2 0x845

0x1a8: Pop(1)
0x1a9: GOTO 0x1a0

0x1aa: GOTO 0x1b9

0x1ab: Push("all") // @poff=138
0x1ac: Push("idle") // @poff=146
0x1ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ae: Pop(2)
0x1af: @ WaitForAnimEnd()
0x1b0: Pop(0)
0x1b1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: GOTO 0x1b9

0x1b4: Push("all") // @poff=138
0x1b5: Push("idle") // @poff=146
0x1b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: GOTO 0x1af

0x1b9: Return(); Pop(0)

0x1ba: PushEmpty()
0x1bb: PushEmpty(bool)
0x1bc: Call2 0x8c3

0x1bd: Pop(0)
0x1be: Pop(1); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Return(); Pop(0)

0x1c1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Return(); Pop(0)

0x1c4: PushEmpty(string, bool)
0x1c5: Stack[-3] = Stack[-2]
0x1c6: Push("") // @poff=102
0x1c7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c9: Stack[-1] = (bool) 0
0x1ca: GOTO 0x1cc

0x1cb: Stack[-1] = (bool) 1
0x1cc: Call2 0x84c

0x1cd: Pop(2)
0x1ce: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty()
0x1d1: Push((int) 1)
0x1d2: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x1d3: PushEmpty()
0x1d4: Call2 0x861

0x1d5: Pop(0)
0x1d6: Push((int) 36924)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d9: PushEmpty(object, object)
0x1da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dc: Call2 0x8f1

0x1dd: Pop(2)
0x1de: Push((int) 36923)
0x1df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1e1: PushEmpty(string)
0x1e2: Stack[-1] = "Neutral" // @poff=89
0x1e3: Call2 0x1ba

0x1e4: Pop(1)
0x1e5: Push((int) 535248)
0x1e6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e7: Pop(1)
0x1e8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e9: Pop(0)
0x1ea: PushEmpty(bool, object)
0x1eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ec: Call2 0x903

0x1ed: Pop(1)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ef: Push((int) 535249)
0x1f0: Push((int) 37070)
0x1f1: Push((int) 36924)
0x1f2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f3: Pop(3)
0x1f4: Push((int) 535387)
0x1f5: Push((int) -1)
0x1f6: Push((int) 37072)
0x1f7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f8: Pop(3)
0x1f9: Push((int) 535388)
0x1fa: Push((int) -1)
0x1fb: Push((int) 37073)
0x1fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fd: Pop(3)
0x1fe: Return(); Pop(0)

0x1ff: Push((int) 37070)
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x202: PushEmpty(string)
0x203: Stack[-1] = "Neutral" // @poff=89
0x204: Call2 0x1ba

0x205: Pop(1)
0x206: Push((int) 535385)
0x207: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x208: Pop(1)
0x209: @@@ ClearReplies(); Obj=0 // @poff=116
0x20a: Pop(0)
0x20b: Push((int) 535386)
0x20c: Push((int) 37074)
0x20d: Push((int) 37071)
0x20e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20f: Pop(3)
0x210: Return(); Pop(0)

0x211: Push((int) 37074)
0x212: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x214: PushEmpty(string)
0x215: Stack[-1] = "Neutral" // @poff=89
0x216: Call2 0x1ba

0x217: Pop(1)
0x218: Push((int) 535389)
0x219: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21a: Pop(1)
0x21b: @@@ ClearReplies(); Obj=0 // @poff=116
0x21c: Pop(0)
0x21d: Push((int) 535390)
0x21e: Push((int) 37076)
0x21f: Push((int) 37075)
0x220: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x221: Pop(3)
0x222: Push((int) 535393)
0x223: Push((int) -1)
0x224: Push((int) 37078)
0x225: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x226: Pop(3)
0x227: Return(); Pop(0)

0x228: Push((int) 37076)
0x229: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Neutral" // @poff=89
0x22d: Call2 0x1ba

0x22e: Pop(1)
0x22f: Push((int) 535391)
0x230: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x231: Pop(1)
0x232: @@@ ClearReplies(); Obj=0 // @poff=116
0x233: Pop(0)
0x234: Push((int) 535392)
0x235: Push((int) 37079)
0x236: Push((int) 37077)
0x237: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x238: Pop(3)
0x239: Push((int) 535396)
0x23a: Push((int) -1)
0x23b: Push((int) 37081)
0x23c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23d: Pop(3)
0x23e: Push((int) 535397)
0x23f: Push((int) -1)
0x240: Push((int) 37082)
0x241: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x242: Pop(3)
0x243: Return(); Pop(0)

0x244: Push((int) 37079)
0x245: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x247: PushEmpty(string)
0x248: Stack[-1] = "Neutral" // @poff=89
0x249: Call2 0x1ba

0x24a: Pop(1)
0x24b: Push((int) 535394)
0x24c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24d: Pop(1)
0x24e: @@@ ClearReplies(); Obj=0 // @poff=116
0x24f: Pop(0)
0x250: Push((int) 535395)
0x251: Push((int) -1)
0x252: Push((int) 37080)
0x253: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x254: Pop(3)
0x255: Push((int) 535398)
0x256: Push((int) -1)
0x257: Push((int) 37083)
0x258: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x259: Pop(3)
0x25a: Return(); Pop(0)

0x25b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x25c: PushEmpty(bool)
0x25d: Call2 0x8c3

0x25e: Pop(0)
0x25f: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x260: @ lshStopAnimation()
0x261: Pop(0)
0x262: GOTO 0x265

0x263: @ StopAnimation()
0x264: Pop(0)
0x265: Return(); Pop(0)

0x266: GOTO 0x1d1

0x267: Return(); Pop(0)

0x268: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x269: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x26a: PushEmpty(bool, object)
0x26b: PushEmpty(object)
0x26c: Call2 0x868

0x26d: Stack[-1] = Stack[-2]
0x26e: Pop(1)
0x26f: Call2 0x7bb

0x270: Pop(2)
0x271: PushEmpty(bool, object, float)
0x272: Stack[-12] = Stack[-2]
0x273: Stack[-1] = (float) 70.0
0x274: Call2 0x766

0x275: Pop(2)
0x276: Pop(1); Push((bool) Stack[-1] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-10] = (int) -2
0x279: Return(); Pop(8)

0x27a: @ CreateDialog(Stack[-4])
0x27b: Pop(0)
0x27c: PushEmpty(int)
0x27d: Call2 0x8bd

0x27e: Pop(0)
0x27f: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x280: Pop(1)
0x281: PushEmpty(int)
0x282: Call2 0x8bb

0x283: Pop(0)
0x284: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x285: Pop(1)
0x286: PushEmpty(string)
0x287: Call2 0x8bf

0x288: Pop(0)
0x289: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x28a: Pop(1)
0x28b: PushEmpty(string)
0x28c: Call2 0x8c1

0x28d: Pop(0)
0x28e: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x28f: Pop(1)
0x290: PushEmpty(int)
0x291: Call2 0x98f

0x292: Pop(0)
0x293: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x294: Pop(1)
0x295: Stack[-2] = (int) -1
0x296: @ IsOverrideActive(Stack[-3])
0x297: Pop(0)
0x298: Push(Stack[-3])
0x299: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29a: Stack[-10] = (int) -2
0x29b: Return(); Pop(8)

0x29c: @ DoDialog(Stack[-4])
0x29d: Pop(0)
0x29e: PushEmpty(object, object)
0x29f: Stack[-11] = Stack[-2]
0x2a0: Stack[-6] = Stack[-1]
0x2a1: Push(-2, 4); TaskCall(6)
0x2a2: Call2 0x2b9

0x2a3: Pop(-2, 4); TaskReturn
0x2a4: Pop(2)
0x2a5: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2a6: Pop(0)
0x2a7: Pop(0); Push((bool) Stack[-1] == 0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a9: @ sync()
0x2aa: Pop(0)
0x2ab: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2ac: Pop(0)
0x2ad: GOTO 0x2a7

0x2ae: PushEmpty(object)
0x2af: Stack[-10] = Stack[-1]
0x2b0: Call2 0x7aa

0x2b1: Pop(1)
0x2b2: @ StopDialog(Stack[-4])
0x2b3: Pop(0)
0x2b4: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x2b5: Pop(0)
0x2b6: Stack[-2] = Stack[-10]
0x2b7: Return(); Pop(8)

0x2b8: Stack[-4] = 0
0x2b9: PushEmpty()
0x2ba: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2bb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2bc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2bd: Push((int) 1)
0x2be: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x2bf: PushEmpty(bool, object)
0x2c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c1: Call2 0x90f

0x2c2: Pop(1)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2c4: PushEmpty(object, object)
0x2c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c7: Call2 0x8d6

0x2c8: Pop(2)
0x2c9: PushEmpty(object, object)
0x2ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cc: Call2 0x8eb

0x2cd: Pop(2)
0x2ce: PushEmpty(string)
0x2cf: Stack[-1] = "Azart" // @poff=156
0x2d0: Call2 0x32e

0x2d1: Pop(1)
0x2d2: Push((int) 518568)
0x2d3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d4: Pop(1)
0x2d5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d6: Pop(0)
0x2d7: Push((int) 518572)
0x2d8: Push((int) 20064)
0x2d9: Push((int) 19682)
0x2da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2db: Pop(3)
0x2dc: Push((int) 518950)
0x2dd: Push((int) 20062)
0x2de: Push((int) 20061)
0x2df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e0: Pop(3)
0x2e1: GOTO 0x310

0x2e2: PushEmpty(string)
0x2e3: Stack[-1] = "Secret" // @poff=168
0x2e4: Call2 0x32e

0x2e5: Pop(1)
0x2e6: Push((int) 518573)
0x2e7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e8: Pop(1)
0x2e9: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ea: Pop(0)
0x2eb: PushEmpty(bool, object)
0x2ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ed: Call2 0x91b

0x2ee: Pop(1)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f0: Push((int) 518574)
0x2f1: Push((int) 19688)
0x2f2: Push((int) 19684)
0x2f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f4: Pop(3)
0x2f5: PushEmpty(bool)
0x2f6: Stack[-1] = (bool) 0
0x2f7: PushEmpty(bool, object)
0x2f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f9: Call2 0x927

0x2fa: Pop(1)
0x2fb: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2fc: PushEmpty(bool, object)
0x2fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fe: Call2 0x933

0x2ff: Pop(1)
0x300: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x301: Stack[-1] = (bool) 1
0x302: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x303: Push((int) 518586)
0x304: Push((int) 19694)
0x305: Push((int) 19693)
0x306: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x307: Pop(3)
0x308: Push((int) 518575)
0x309: Push((int) -1)
0x30a: Push((int) 19685)
0x30b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x30c: Pop(3)
0x30d: GOTO 0x310

0x30e: Return(); Pop(0)

0x30f: GOTO 0x2bd

0x310: PushEmpty(bool)
0x311: Call2 0x8c3

0x312: Pop(0)
0x313: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x314: @ lshWaitForAnimEnd()
0x315: Pop(0)
0x316: Push( Stack[3 + Tasks[-1].StackPointer] )
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: GOTO 0x31e

0x319: PushEmpty(string)
0x31a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x31b: Call2 0x845

0x31c: Pop(1)
0x31d: GOTO 0x314

0x31e: GOTO 0x32d

0x31f: Push("all") // @poff=138
0x320: Push("idle") // @poff=146
0x321: @ PlayAnimation(Stack[-2], Stack[-1])
0x322: Pop(2)
0x323: @ WaitForAnimEnd()
0x324: Pop(0)
0x325: Push( Stack[3 + Tasks[-1].StackPointer] )
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: GOTO 0x32d

0x328: Push("all") // @poff=138
0x329: Push("idle") // @poff=146
0x32a: @ PlayAnimation(Stack[-2], Stack[-1])
0x32b: Pop(2)
0x32c: GOTO 0x323

0x32d: Return(); Pop(0)

0x32e: PushEmpty()
0x32f: PushEmpty(bool)
0x330: Call2 0x8c3

0x331: Pop(0)
0x332: Pop(1); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: Return(); Pop(0)

0x335: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: Return(); Pop(0)

0x338: PushEmpty(string, bool)
0x339: Stack[-3] = Stack[-2]
0x33a: Push("") // @poff=102
0x33b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33d: Stack[-1] = (bool) 0
0x33e: GOTO 0x340

0x33f: Stack[-1] = (bool) 1
0x340: Call2 0x84c

0x341: Pop(2)
0x342: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x343: Return(); Pop(0)

0x344: PushEmpty()
0x345: Push((int) 1)
0x346: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x347: PushEmpty()
0x348: Call2 0x861

0x349: Pop(0)
0x34a: Push((int) 19687)
0x34b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34d: PushEmpty(object, object)
0x34e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x350: Call2 0x8c5

0x351: Pop(2)
0x352: Push((int) 19689)
0x353: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x355: PushEmpty(object, object)
0x356: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x357: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x358: Call2 0x8c5

0x359: Pop(2)
0x35a: Push((int) 19693)
0x35b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35d: PushEmpty(object, object)
0x35e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x35f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x360: Call2 0x8dc

0x361: Pop(2)
0x362: Push((int) 19678)
0x363: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x367: Call2 0x90f

0x368: Pop(1)
0x369: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x36a: PushEmpty(object, object)
0x36b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36d: Call2 0x8d6

0x36e: Pop(2)
0x36f: PushEmpty(object, object)
0x370: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x371: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x372: Call2 0x8eb

0x373: Pop(2)
0x374: PushEmpty(string)
0x375: Stack[-1] = "Azart" // @poff=156
0x376: Call2 0x32e

0x377: Pop(1)
0x378: Push((int) 518568)
0x379: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x37a: Pop(1)
0x37b: @@@ ClearReplies(); Obj=0 // @poff=116
0x37c: Pop(0)
0x37d: Push((int) 518572)
0x37e: Push((int) 20064)
0x37f: Push((int) 19682)
0x380: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x381: Pop(3)
0x382: Push((int) 518950)
0x383: Push((int) 20062)
0x384: Push((int) 20061)
0x385: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x386: Pop(3)
0x387: Return(); Pop(0)

0x388: PushEmpty(string)
0x389: Stack[-1] = "Secret" // @poff=168
0x38a: Call2 0x32e

0x38b: Pop(1)
0x38c: Push((int) 518573)
0x38d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x38e: Pop(1)
0x38f: @@@ ClearReplies(); Obj=0 // @poff=116
0x390: Pop(0)
0x391: PushEmpty(bool, object)
0x392: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x393: Call2 0x91b

0x394: Pop(1)
0x395: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x396: Push((int) 518574)
0x397: Push((int) 19688)
0x398: Push((int) 19684)
0x399: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39a: Pop(3)
0x39b: PushEmpty(bool)
0x39c: Stack[-1] = (bool) 0
0x39d: PushEmpty(bool, object)
0x39e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39f: Call2 0x927

0x3a0: Pop(1)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a2: PushEmpty(bool, object)
0x3a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a4: Call2 0x933

0x3a5: Pop(1)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a7: Stack[-1] = (bool) 1
0x3a8: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a9: Push((int) 518586)
0x3aa: Push((int) 19694)
0x3ab: Push((int) 19693)
0x3ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ad: Pop(3)
0x3ae: Push((int) 518575)
0x3af: Push((int) -1)
0x3b0: Push((int) 19685)
0x3b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b2: Pop(3)
0x3b3: Return(); Pop(0)

0x3b4: Push((int) 19694)
0x3b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3b7: PushEmpty(string)
0x3b8: Stack[-1] = "Azart" // @poff=156
0x3b9: Call2 0x32e

0x3ba: Pop(1)
0x3bb: Push((int) 518587)
0x3bc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3bd: Pop(1)
0x3be: @@@ ClearReplies(); Obj=0 // @poff=116
0x3bf: Pop(0)
0x3c0: Push((int) 518588)
0x3c1: Push((int) 20052)
0x3c2: Push((int) 19695)
0x3c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c4: Pop(3)
0x3c5: Push((int) 518942)
0x3c6: Push((int) 20054)
0x3c7: Push((int) 20053)
0x3c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c9: Pop(3)
0x3ca: Return(); Pop(0)

0x3cb: Push((int) 20054)
0x3cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3ce: Push((int) 518943)
0x3cf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d0: Pop(1)
0x3d1: @@@ ClearReplies(); Obj=0 // @poff=116
0x3d2: Pop(0)
0x3d3: Push((int) 518944)
0x3d4: Push((int) 20057)
0x3d5: Push((int) 20055)
0x3d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3d7: Pop(3)
0x3d8: Push((int) 518945)
0x3d9: Push((int) -1)
0x3da: Push((int) 20056)
0x3db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3dc: Pop(3)
0x3dd: Return(); Pop(0)

0x3de: Push((int) 20057)
0x3df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3e1: PushEmpty(string)
0x3e2: Stack[-1] = "Serious" // @poff=182
0x3e3: Call2 0x32e

0x3e4: Pop(1)
0x3e5: Push((int) 518946)
0x3e6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3e7: Pop(1)
0x3e8: @@@ ClearReplies(); Obj=0 // @poff=116
0x3e9: Pop(0)
0x3ea: Push((int) 518947)
0x3eb: Push((int) -1)
0x3ec: Push((int) 20058)
0x3ed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ee: Pop(3)
0x3ef: Push((int) 518948)
0x3f0: Push((int) -1)
0x3f1: Push((int) 20059)
0x3f2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f3: Pop(3)
0x3f4: Return(); Pop(0)

0x3f5: Push((int) 20052)
0x3f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x3f8: PushEmpty(string)
0x3f9: Stack[-1] = "Neutral" // @poff=89
0x3fa: Call2 0x32e

0x3fb: Pop(1)
0x3fc: Push((int) 518941)
0x3fd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3fe: Pop(1)
0x3ff: @@@ ClearReplies(); Obj=0 // @poff=116
0x400: Pop(0)
0x401: Push((int) 518949)
0x402: Push((int) -1)
0x403: Push((int) 20060)
0x404: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x405: Pop(3)
0x406: Return(); Pop(0)

0x407: Push((int) 19688)
0x408: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x40a: PushEmpty(string)
0x40b: Stack[-1] = "Neutral" // @poff=89
0x40c: Call2 0x32e

0x40d: Pop(1)
0x40e: Push((int) 518581)
0x40f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x410: Pop(1)
0x411: @@@ ClearReplies(); Obj=0 // @poff=116
0x412: Pop(0)
0x413: Push((int) 518582)
0x414: Push((int) -1)
0x415: Push((int) 19689)
0x416: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x417: Pop(3)
0x418: Return(); Pop(0)

0x419: Push((int) 20062)
0x41a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x41c: Push((int) 518951)
0x41d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x41e: Pop(1)
0x41f: @@@ ClearReplies(); Obj=0 // @poff=116
0x420: Pop(0)
0x421: Push((int) 518952)
0x422: Push((int) 20069)
0x423: Push((int) 20063)
0x424: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x425: Pop(3)
0x426: Return(); Pop(0)

0x427: Push((int) 20064)
0x428: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x42a: PushEmpty(string)
0x42b: Stack[-1] = "Neutral" // @poff=89
0x42c: Call2 0x32e

0x42d: Pop(1)
0x42e: Push((int) 518953)
0x42f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x430: Pop(1)
0x431: @@@ ClearReplies(); Obj=0 // @poff=116
0x432: Pop(0)
0x433: Push((int) 518954)
0x434: Push((int) 20066)
0x435: Push((int) 20065)
0x436: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x437: Pop(3)
0x438: Return(); Pop(0)

0x439: Push((int) 20066)
0x43a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x43c: PushEmpty(string)
0x43d: Stack[-1] = "Neutral" // @poff=89
0x43e: Call2 0x32e

0x43f: Pop(1)
0x440: Push((int) 518955)
0x441: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x442: Pop(1)
0x443: @@@ ClearReplies(); Obj=0 // @poff=116
0x444: Pop(0)
0x445: Push((int) 518956)
0x446: Push((int) 20069)
0x447: Push((int) 20067)
0x448: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x449: Pop(3)
0x44a: Push((int) 518957)
0x44b: Push((int) -1)
0x44c: Push((int) 20068)
0x44d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44e: Pop(3)
0x44f: Return(); Pop(0)

0x450: Push((int) 20069)
0x451: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x453: PushEmpty(string)
0x454: Stack[-1] = "Secret" // @poff=168
0x455: Call2 0x32e

0x456: Pop(1)
0x457: Push((int) 518958)
0x458: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x459: Pop(1)
0x45a: @@@ ClearReplies(); Obj=0 // @poff=116
0x45b: Pop(0)
0x45c: Push((int) 518959)
0x45d: Push((int) 19686)
0x45e: Push((int) 20071)
0x45f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x460: Pop(3)
0x461: Push((int) 518960)
0x462: Push((int) -1)
0x463: Push((int) 20072)
0x464: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x465: Pop(3)
0x466: Return(); Pop(0)

0x467: Push((int) 19686)
0x468: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x469: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x46a: PushEmpty(string)
0x46b: Stack[-1] = "Neutral" // @poff=89
0x46c: Call2 0x32e

0x46d: Pop(1)
0x46e: Push((int) 518579)
0x46f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x470: Pop(1)
0x471: @@@ ClearReplies(); Obj=0 // @poff=116
0x472: Pop(0)
0x473: Push((int) 518580)
0x474: Push((int) -1)
0x475: Push((int) 19687)
0x476: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x477: Pop(3)
0x478: Return(); Pop(0)

0x479: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x47a: PushEmpty(bool)
0x47b: Call2 0x8c3

0x47c: Pop(0)
0x47d: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47e: @ lshStopAnimation()
0x47f: Pop(0)
0x480: GOTO 0x483

0x481: @ StopAnimation()
0x482: Pop(0)
0x483: Return(); Pop(0)

0x484: GOTO 0x345

0x485: Return(); Pop(0)

0x486: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x487: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x488: PushEmpty(bool, object)
0x489: PushEmpty(object)
0x48a: Call2 0x868

0x48b: Stack[-1] = Stack[-2]
0x48c: Pop(1)
0x48d: Call2 0x7bb

0x48e: Pop(2)
0x48f: PushEmpty(bool, object, float)
0x490: Stack[-12] = Stack[-2]
0x491: Stack[-1] = (float) 70.0
0x492: Call2 0x766

0x493: Pop(2)
0x494: Pop(1); Push((bool) Stack[-1] == 0)
0x495: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x496: Stack[-10] = (int) -2
0x497: Return(); Pop(8)

0x498: @ CreateDialog(Stack[-4])
0x499: Pop(0)
0x49a: PushEmpty(int)
0x49b: Call2 0x8bd

0x49c: Pop(0)
0x49d: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x49e: Pop(1)
0x49f: PushEmpty(int)
0x4a0: Call2 0x8bb

0x4a1: Pop(0)
0x4a2: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x4a3: Pop(1)
0x4a4: PushEmpty(string)
0x4a5: Call2 0x8bf

0x4a6: Pop(0)
0x4a7: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x4a8: Pop(1)
0x4a9: PushEmpty(string)
0x4aa: Call2 0x8c1

0x4ab: Pop(0)
0x4ac: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x4ad: Pop(1)
0x4ae: PushEmpty(int)
0x4af: Call2 0x98f

0x4b0: Pop(0)
0x4b1: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x4b2: Pop(1)
0x4b3: Stack[-2] = (int) -1
0x4b4: @ IsOverrideActive(Stack[-3])
0x4b5: Pop(0)
0x4b6: Push(Stack[-3])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b8: Stack[-10] = (int) -2
0x4b9: Return(); Pop(8)

0x4ba: @ DoDialog(Stack[-4])
0x4bb: Pop(0)
0x4bc: PushEmpty(object, object)
0x4bd: Stack[-11] = Stack[-2]
0x4be: Stack[-6] = Stack[-1]
0x4bf: Push(-2, 4); TaskCall(8)
0x4c0: Call2 0x4d7

0x4c1: Pop(-2, 4); TaskReturn
0x4c2: Pop(2)
0x4c3: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4c4: Pop(0)
0x4c5: Pop(0); Push((bool) Stack[-1] == 0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c7: @ sync()
0x4c8: Pop(0)
0x4c9: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4ca: Pop(0)
0x4cb: GOTO 0x4c5

0x4cc: PushEmpty(object)
0x4cd: Stack[-10] = Stack[-1]
0x4ce: Call2 0x7aa

0x4cf: Pop(1)
0x4d0: @ StopDialog(Stack[-4])
0x4d1: Pop(0)
0x4d2: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4d3: Pop(0)
0x4d4: Stack[-2] = Stack[-10]
0x4d5: Return(); Pop(8)

0x4d6: Stack[-4] = 0
0x4d7: PushEmpty()
0x4d8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4d9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4da: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4db: Push((int) 1)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4dd: PushEmpty(string)
0x4de: Stack[-1] = "Neutral" // @poff=89
0x4df: Call2 0x511

0x4e0: Pop(1)
0x4e1: Push((int) 520803)
0x4e2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4e3: Pop(1)
0x4e4: @@@ ClearReplies(); Obj=0 // @poff=116
0x4e5: Pop(0)
0x4e6: Push((int) 520804)
0x4e7: Push((int) 29221)
0x4e8: Push((int) 22021)
0x4e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ea: Pop(3)
0x4eb: Push((int) 527876)
0x4ec: Push((int) 29224)
0x4ed: Push((int) 29223)
0x4ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ef: Pop(3)
0x4f0: GOTO 0x4f3

0x4f1: Return(); Pop(0)

0x4f2: GOTO 0x4db

0x4f3: PushEmpty(bool)
0x4f4: Call2 0x8c3

0x4f5: Pop(0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4f7: @ lshWaitForAnimEnd()
0x4f8: Pop(0)
0x4f9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fb: GOTO 0x501

0x4fc: PushEmpty(string)
0x4fd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4fe: Call2 0x845

0x4ff: Pop(1)
0x500: GOTO 0x4f7

0x501: GOTO 0x510

0x502: Push("all") // @poff=138
0x503: Push("idle") // @poff=146
0x504: @ PlayAnimation(Stack[-2], Stack[-1])
0x505: Pop(2)
0x506: @ WaitForAnimEnd()
0x507: Pop(0)
0x508: Push( Stack[3 + Tasks[-1].StackPointer] )
0x509: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x50a: GOTO 0x510

0x50b: Push("all") // @poff=138
0x50c: Push("idle") // @poff=146
0x50d: @ PlayAnimation(Stack[-2], Stack[-1])
0x50e: Pop(2)
0x50f: GOTO 0x506

0x510: Return(); Pop(0)

0x511: PushEmpty()
0x512: PushEmpty(bool)
0x513: Call2 0x8c3

0x514: Pop(0)
0x515: Pop(1); Push((bool) Stack[-1] == 0)
0x516: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x517: Return(); Pop(0)

0x518: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x519: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x51a: Return(); Pop(0)

0x51b: PushEmpty(string, bool)
0x51c: Stack[-3] = Stack[-2]
0x51d: Push("") // @poff=102
0x51e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x520: Stack[-1] = (bool) 0
0x521: GOTO 0x523

0x522: Stack[-1] = (bool) 1
0x523: Call2 0x84c

0x524: Pop(2)
0x525: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x526: Return(); Pop(0)

0x527: PushEmpty()
0x528: Push((int) 1)
0x529: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x52a: PushEmpty()
0x52b: Call2 0x861

0x52c: Pop(0)
0x52d: Push((int) 22020)
0x52e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x530: PushEmpty(string)
0x531: Stack[-1] = "Neutral" // @poff=89
0x532: Call2 0x511

0x533: Pop(1)
0x534: Push((int) 520803)
0x535: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x536: Pop(1)
0x537: @@@ ClearReplies(); Obj=0 // @poff=116
0x538: Pop(0)
0x539: Push((int) 520804)
0x53a: Push((int) 29221)
0x53b: Push((int) 22021)
0x53c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x53d: Pop(3)
0x53e: Push((int) 527876)
0x53f: Push((int) 29224)
0x540: Push((int) 29223)
0x541: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x542: Pop(3)
0x543: Return(); Pop(0)

0x544: Push((int) 29224)
0x545: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x547: PushEmpty(string)
0x548: Stack[-1] = "Neutral" // @poff=89
0x549: Call2 0x511

0x54a: Pop(1)
0x54b: Push((int) 527877)
0x54c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x54d: Pop(1)
0x54e: @@@ ClearReplies(); Obj=0 // @poff=116
0x54f: Pop(0)
0x550: Push((int) 527878)
0x551: Push((int) -1)
0x552: Push((int) 29225)
0x553: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x554: Pop(3)
0x555: Return(); Pop(0)

0x556: Push((int) 29221)
0x557: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x559: PushEmpty(string)
0x55a: Stack[-1] = "Neutral" // @poff=89
0x55b: Call2 0x511

0x55c: Pop(1)
0x55d: Push((int) 527874)
0x55e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x55f: Pop(1)
0x560: @@@ ClearReplies(); Obj=0 // @poff=116
0x561: Pop(0)
0x562: Push((int) 527875)
0x563: Push((int) -1)
0x564: Push((int) 29222)
0x565: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x566: Pop(3)
0x567: Return(); Pop(0)

0x568: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x569: PushEmpty(bool)
0x56a: Call2 0x8c3

0x56b: Pop(0)
0x56c: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56d: @ lshStopAnimation()
0x56e: Pop(0)
0x56f: GOTO 0x572

0x570: @ StopAnimation()
0x571: Pop(0)
0x572: Return(); Pop(0)

0x573: GOTO 0x528

0x574: Return(); Pop(0)

0x575: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x576: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x577: PushEmpty(bool, object)
0x578: PushEmpty(object)
0x579: Call2 0x868

0x57a: Stack[-1] = Stack[-2]
0x57b: Pop(1)
0x57c: Call2 0x7bb

0x57d: Pop(2)
0x57e: PushEmpty(bool, object, float)
0x57f: Stack[-12] = Stack[-2]
0x580: Stack[-1] = (float) 70.0
0x581: Call2 0x766

0x582: Pop(2)
0x583: Pop(1); Push((bool) Stack[-1] == 0)
0x584: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x585: Stack[-10] = (int) -2
0x586: Return(); Pop(8)

0x587: @ CreateDialog(Stack[-4])
0x588: Pop(0)
0x589: PushEmpty(int)
0x58a: Call2 0x8bd

0x58b: Pop(0)
0x58c: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x58d: Pop(1)
0x58e: PushEmpty(int)
0x58f: Call2 0x8bb

0x590: Pop(0)
0x591: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x592: Pop(1)
0x593: PushEmpty(string)
0x594: Call2 0x8bf

0x595: Pop(0)
0x596: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x597: Pop(1)
0x598: PushEmpty(string)
0x599: Call2 0x8c1

0x59a: Pop(0)
0x59b: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x59c: Pop(1)
0x59d: PushEmpty(int)
0x59e: Call2 0x98f

0x59f: Pop(0)
0x5a0: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x5a1: Pop(1)
0x5a2: Stack[-2] = (int) -1
0x5a3: @ IsOverrideActive(Stack[-3])
0x5a4: Pop(0)
0x5a5: Push(Stack[-3])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a7: Stack[-10] = (int) -2
0x5a8: Return(); Pop(8)

0x5a9: @ DoDialog(Stack[-4])
0x5aa: Pop(0)
0x5ab: PushEmpty(object, object)
0x5ac: Stack[-11] = Stack[-2]
0x5ad: Stack[-6] = Stack[-1]
0x5ae: Push(-2, 4); TaskCall(10)
0x5af: Call2 0x5c6

0x5b0: Pop(-2, 4); TaskReturn
0x5b1: Pop(2)
0x5b2: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5b3: Pop(0)
0x5b4: Pop(0); Push((bool) Stack[-1] == 0)
0x5b5: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b6: @ sync()
0x5b7: Pop(0)
0x5b8: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5b9: Pop(0)
0x5ba: GOTO 0x5b4

0x5bb: PushEmpty(object)
0x5bc: Stack[-10] = Stack[-1]
0x5bd: Call2 0x7aa

0x5be: Pop(1)
0x5bf: @ StopDialog(Stack[-4])
0x5c0: Pop(0)
0x5c1: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5c2: Pop(0)
0x5c3: Stack[-2] = Stack[-10]
0x5c4: Return(); Pop(8)

0x5c5: Stack[-4] = 0
0x5c6: PushEmpty()
0x5c7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5c8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5c9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5ca: Push((int) 1)
0x5cb: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5cc: PushEmpty(string)
0x5cd: Stack[-1] = "Neutral" // @poff=89
0x5ce: Call2 0x600

0x5cf: Pop(1)
0x5d0: Push((int) 540554)
0x5d1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d2: Pop(1)
0x5d3: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d4: Pop(0)
0x5d5: Push((int) 540555)
0x5d6: Push((int) -1)
0x5d7: Push((int) 42564)
0x5d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d9: Pop(3)
0x5da: Push((int) 540794)
0x5db: Push((int) -1)
0x5dc: Push((int) 42843)
0x5dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5de: Pop(3)
0x5df: GOTO 0x5e2

0x5e0: Return(); Pop(0)

0x5e1: GOTO 0x5ca

0x5e2: PushEmpty(bool)
0x5e3: Call2 0x8c3

0x5e4: Pop(0)
0x5e5: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5e6: @ lshWaitForAnimEnd()
0x5e7: Pop(0)
0x5e8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5e9: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5ea: GOTO 0x5f0

0x5eb: PushEmpty(string)
0x5ec: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5ed: Call2 0x845

0x5ee: Pop(1)
0x5ef: GOTO 0x5e6

0x5f0: GOTO 0x5ff

0x5f1: Push("all") // @poff=138
0x5f2: Push("idle") // @poff=146
0x5f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x5f4: Pop(2)
0x5f5: @ WaitForAnimEnd()
0x5f6: Pop(0)
0x5f7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f9: GOTO 0x5ff

0x5fa: Push("all") // @poff=138
0x5fb: Push("idle") // @poff=146
0x5fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x5fd: Pop(2)
0x5fe: GOTO 0x5f5

0x5ff: Return(); Pop(0)

0x600: PushEmpty()
0x601: PushEmpty(bool)
0x602: Call2 0x8c3

0x603: Pop(0)
0x604: Pop(1); Push((bool) Stack[-1] == 0)
0x605: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x606: Return(); Pop(0)

0x607: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x608: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x609: Return(); Pop(0)

0x60a: PushEmpty(string, bool)
0x60b: Stack[-3] = Stack[-2]
0x60c: Push("") // @poff=102
0x60d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x60f: Stack[-1] = (bool) 0
0x610: GOTO 0x612

0x611: Stack[-1] = (bool) 1
0x612: Call2 0x84c

0x613: Pop(2)
0x614: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x615: Return(); Pop(0)

0x616: PushEmpty()
0x617: Push((int) 1)
0x618: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x619: PushEmpty()
0x61a: Call2 0x861

0x61b: Pop(0)
0x61c: Push((int) 42563)
0x61d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61e: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x61f: PushEmpty(string)
0x620: Stack[-1] = "Neutral" // @poff=89
0x621: Call2 0x600

0x622: Pop(1)
0x623: Push((int) 540554)
0x624: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x625: Pop(1)
0x626: @@@ ClearReplies(); Obj=0 // @poff=116
0x627: Pop(0)
0x628: Push((int) 540555)
0x629: Push((int) -1)
0x62a: Push((int) 42564)
0x62b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62c: Pop(3)
0x62d: Push((int) 540794)
0x62e: Push((int) -1)
0x62f: Push((int) 42843)
0x630: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x631: Pop(3)
0x632: Return(); Pop(0)

0x633: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x634: PushEmpty(bool)
0x635: Call2 0x8c3

0x636: Pop(0)
0x637: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x638: @ lshStopAnimation()
0x639: Pop(0)
0x63a: GOTO 0x63d

0x63b: @ StopAnimation()
0x63c: Pop(0)
0x63d: Return(); Pop(0)

0x63e: GOTO 0x617

0x63f: Return(); Pop(0)

0x640: PushEmpty()
0x641: Call2 0x644

0x642: Pop(0)
0x643: Return(); Pop(0)

0x644: PushEmpty(bool)
0x645: Call2 0x761

0x646: Pop(0)
0x647: Pop(1); Push((bool) Stack[-1] == 0)
0x648: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x649: PushEmpty()
0x64a: Push(-0, 0); TaskCall(0)
0x64b: Call2 0x0

0x64c: Pop(-0, 0); TaskReturn
0x64d: Pop(0)
0x64e: PushEmpty()
0x64f: Call2 0x6c4

0x650: Pop(0)
0x651: @ GetDirection(Stack[-0]T)
0x652: Pop(0)
0x653: PushEmpty()
0x654: Call2 0x6fa

0x655: Pop(0)
0x656: GOTO 0x653

0x657: Return(); Pop(0)

0x658: PushEmpty(object, object)
0x659: Push("player") // @poff=198
0x65a: @ FindActor(Stack[-2], Stack[-1])
0x65b: Pop(1)
0x65c: Pop(0); Push((bool) Stack[-1] == 0)
0x65d: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x65e: Stack[-3] = (bool) 0
0x65f: Return(); Pop(2)

0x660: PushEmpty(bool, object)
0x661: Stack[-3] = Stack[-1]
0x662: Call2 0x758

0x663: Stack[-2] = Stack[-5]
0x664: Pop(2)
0x665: Return(); Pop(2)

0x666: Stack[-1] = 0
0x667: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x668: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x669: @ RotateAsync(Stack[-2], Stack[-1])
0x66a: Pop(2)
0x66b: Return(); Pop(0)

0x66c: PushEmpty(object, bool, object, bool)
0x66d: Push("player") // @poff=198
0x66e: @ FindActor(Stack[-3], Stack[-1])
0x66f: Pop(1)
0x670: Pop(0); Push((bool) Stack[-2] == 0)
0x671: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x672: Stack[-5] = (bool) 0
0x673: Return(); Pop(4)

0x674: PushEmpty(float, object)
0x675: Stack[-4] = Stack[-1]
0x676: Call2 0x746

0x677: Pop(1)
0x678: Push((float)90000.0)
0x679: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x67a: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67b: Stack[-5] = (bool) 0
0x67c: Return(); Pop(4)

0x67d: @ CanSee(Stack[-1], Stack[-2])
0x67e: Pop(0)
0x67f: Stack[-1] = Stack[-5]
0x680: Return(); Pop(4)

0x681: Stack[-2] = 0
0x682: PushEmpty(float, float)
0x683: Push((int) 8)
0x684: Push((int) 16)
0x685: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x686: Pop(2)
0x687: Push((int) 10)
0x688: @ SetTimer(Stack[-1], Stack[-2])
0x689: Pop(1)
0x68a: Return(); Pop(2)

0x68b: Push((int) 10)
0x68c: @ KillTimer(Stack[-1])
0x68d: Pop(1)
0x68e: Return(); Pop(0)

0x68f: PushEmpty()
0x690: Push((int) 10)
0x691: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x692: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x693: PushEmpty()
0x694: Call2 0x68b

0x695: Pop(0)
0x696: PushEmpty(bool)
0x697: Stack[-1] = (bool) 0
0x698: PushEmpty(bool)
0x699: Call2 0x761

0x69a: Pop(0)
0x69b: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69c: PushEmpty(bool)
0x69d: Call2 0x66c

0x69e: Pop(0)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x6a0: Stack[-1] = (bool) 1
0x6a1: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6a2: PushEmpty(bool)
0x6a3: Call2 0x658

0x6a4: Pop(0)
0x6a5: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6a6: PushEmpty(bool, object)
0x6a7: PushEmpty(object)
0x6a8: Call2 0x868

0x6a9: Stack[-1] = Stack[-2]
0x6aa: Pop(1)
0x6ab: Call2 0x7f5

0x6ac: Pop(2)
0x6ad: GOTO 0x6b4

0x6ae: PushEmpty()
0x6af: Call2 0x667

0x6b0: Pop(0)
0x6b1: PushEmpty()
0x6b2: Call2 0x682

0x6b3: Pop(0)
0x6b4: Return(); Pop(0)

0x6b5: PushEmpty()
0x6b6: Call2 0x741

0x6b7: Pop(0)
0x6b8: PushEmpty()
0x6b9: Call2 0x68b

0x6ba: Pop(0)
0x6bb: @ lshStopSpeech()
0x6bc: Pop(0)
0x6bd: @ lshStopAnimation()
0x6be: Pop(0)
0x6bf: @ StopAsync()
0x6c0: Pop(0)
0x6c1: @ Hold()
0x6c2: Pop(0)
0x6c3: Return(); Pop(0)

0x6c4: @ StopGroup0()
0x6c5: Pop(0)
0x6c6: PushEmpty()
0x6c7: Call2 0x68b

0x6c8: Pop(0)
0x6c9: PushEmpty(string)
0x6ca: Stack[-1] = "Neutral" // @poff=89
0x6cb: Call2 0x845

0x6cc: Pop(1)
0x6cd: PushEmpty()
0x6ce: Call2 0x682

0x6cf: Pop(0)
0x6d0: Return(); Pop(0)

0x6d1: PushEmpty()
0x6d2: Push(Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d4: PushEmpty()
0x6d5: Call2 0x682

0x6d6: Pop(0)
0x6d7: GOTO 0x6dc

0x6d8: PushEmpty(string)
0x6d9: Stack[-1] = "Neutral" // @poff=89
0x6da: Call2 0x845

0x6db: Pop(1)
0x6dc: Return(); Pop(0)

0x6dd: PushEmpty(bool, bool)
0x6de: @ IsOverrideActive(Stack[-1])
0x6df: Pop(0)
0x6e0: Pop(0); Push((bool) Stack[-1] == 0)
0x6e1: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6e2: EventDisable(0)
0x6e3: PushEmpty()
0x6e4: Call2 0x741

0x6e5: Pop(0)
0x6e6: PushEmpty(bool, object)
0x6e7: Stack[-5] = Stack[-1]
0x6e8: Call2 0x758

0x6e9: Pop(2)
0x6ea: EventEnable(0)
0x6eb: PushEmpty(object)
0x6ec: Stack[-4] = Stack[-1]
0x6ed: Call2 0x9b1

0x6ee: Pop(1)
0x6ef: PushEmpty(string)
0x6f0: Stack[-1] = "Neutral" // @poff=89
0x6f1: Call2 0x845

0x6f2: Pop(1)
0x6f3: PushEmpty()
0x6f4: Call2 0x68b

0x6f5: Pop(0)
0x6f6: PushEmpty()
0x6f7: Call2 0x682

0x6f8: Pop(0)
0x6f9: Return(); Pop(2)

0x6fa: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x6fb: @ WaitForAnimEnd()
0x6fc: Pop(0)
0x6fd: PushEmpty(bool)
0x6fe: Call2 0x761

0x6ff: Pop(0)
0x700: Pop(1); Push((bool) Stack[-1] == 0)
0x701: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x702: Return(); Pop(12)

0x703: PushEmpty(int)
0x704: Call2 0x8aa

0x705: Stack[-1] = Stack[-7]
0x706: Pop(1)
0x707: Stack[-5] = (int) 0
0x708: PushEmpty(bool)
0x709: Stack[-1] = (bool) 0
0x70a: Push((int) 5)
0x70b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x70d: PushEmpty(bool)
0x70e: Call2 0x761

0x70f: Pop(0)
0x710: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x711: Stack[-1] = (bool) 1
0x712: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x713: Pop(0); Push((bool) Stack[-6] == 0)
0x714: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x715: Push((int) 3)
0x716: @ Sleep(Stack[-1], Stack[-5])
0x717: Pop(1)
0x718: Pop(0); Push((bool) Stack[-4] == 0)
0x719: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x71a: GOTO 0x73c

0x71b: GOTO 0x731

0x71c: @ irand(Stack[-3], Stack[-6])
0x71d: Pop(0)
0x71e: Push((int) 5)
0x71f: @ irand(Stack[-3], Stack[-1])
0x720: Pop(1)
0x721: Push((int) 0)
0x722: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x723: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x724: Stack[-3] = (int) 0
0x725: Push("all") // @poff=138
0x726: PushEmpty(string, int)
0x727: Stack[-6] = Stack[-1]
0x728: Call2 0x8a3

0x729: Pop(1)
0x72a: @ PlayAnimation(Stack[-2], Stack[-1])
0x72b: Pop(2)
0x72c: @ WaitForAnimEnd(Stack[-1])
0x72d: Pop(0)
0x72e: Pop(0); Push((bool) Stack[-1] == 0)
0x72f: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x730: GOTO 0x73c

0x731: PushEmpty(bool)
0x732: Call2 0x73f

0x733: Pop(0)
0x734: Pop(1); Push((bool) Stack[-1] == 0)
0x735: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x736: GOTO 0x73c

0x737: @ ResetAAS()
0x738: Pop(0)
0x739: Push((int) 1)
0x73a: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x73b: GOTO 0x708

0x73c: @ ResetAAS()
0x73d: Pop(0)
0x73e: Return(); Pop(12)

0x73f: Stack[-1] = (bool) 1
0x740: Return(); Pop(0)

0x741: @ StopAnimation()
0x742: Pop(0)
0x743: @ StopGroup0()
0x744: Pop(0)
0x745: Return(); Pop(0)

0x746: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x747: @ GetPosition(Stack[-3])
0x748: Pop(0)
0x749: @@ GetPosition(Stack[-2]); Obj=7 // @poff=212
0x74a: Pop(0)
0x74b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x74c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x74d: Return(); Pop(6)

0x74e: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x74f: @ GetPosition(Stack[-3])
0x750: Pop(0)
0x751: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x752: Push(CvectorIndex(Stack[-2], 0))
0x753: Push(CvectorIndex(Stack[-3], 2))
0x754: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x755: Pop(2)
0x756: Stack[-1] = Stack[-8]
0x757: Return(); Pop(6)

0x758: PushEmpty(cvector, cvector)
0x759: @@ GetPosition(Stack[-1]); Obj=3 // @poff=212
0x75a: Pop(0)
0x75b: PushEmpty(bool, cvector)
0x75c: Stack[-3] = Stack[-1]
0x75d: Call2 0x74e

0x75e: Stack[-2] = Stack[-6]
0x75f: Pop(2)
0x760: Return(); Pop(2)

0x761: PushEmpty(bool, bool)
0x762: @ IsLoaded(Stack[-1])
0x763: Pop(0)
0x764: Stack[-1] = Stack[-3]
0x765: Return(); Pop(2)

0x766: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x767: @@ GetPosition(Stack[-8]); Obj=20 // @poff=212
0x768: Pop(0)
0x769: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=224
0x76a: Pop(0)
0x76b: Push(CvectorIndex(Stack[-8], 1))
0x76c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x76d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x76e: @ GetPosition(Stack[-7])
0x76f: Pop(0)
0x770: @ GetEyesHeight(Stack[-9])
0x771: Pop(0)
0x772: Push(CvectorIndex(Stack[-7], 1))
0x773: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x774: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x775: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x776: Push(CvectorIndex(Stack[-6], 1))
0x777: Stack[-1] = (int) 0
0x778: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x779: Pop(0); Push(Stack[-6] | Stack[-6]);
0x77a: Pop(1); Push(Sqrt(Stack[-1]))
0x77b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x77c: Stack[-5] = -Stack[-6]; Pop(0);
0x77d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x77e: PushEmpty(cvector, cvector)
0x77f: Push([0.0, 1.0, 0.0])
0x780: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x781: Call2 0x86e

0x782: Pop(1)
0x783: Push((int) 25)
0x784: Pop(2); Push(Stack[-2] * Stack[-1]);
0x785: Pop(2); Push(Stack[-2] + Stack[-1]);
0x786: Push([0.0, 10.0, 0.0])
0x787: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x788: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x789: @ IsOverrideActive(Stack[-2])
0x78a: Pop(0)
0x78b: Push(Stack[-2])
0x78c: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78d: Stack[-21] = (bool) 0
0x78e: Return(); Pop(18)

0x78f: @ StopWorld()
0x790: Pop(0)
0x791: @ CameraTransit(Stack[-3], Stack[-5])
0x792: Pop(0)
0x793: Push(CvectorIndex(Stack[-4], 0))
0x794: Push(CvectorIndex(Stack[-5], 2))
0x795: @ Rotate(Stack[-2], Stack[-1])
0x796: Pop(2)
0x797: PushEmpty(bool)
0x798: Call2 0x8c3

0x799: Pop(0)
0x79a: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x79b: GOTO 0x7a4

0x79c: Push("head") // @poff=238
0x79d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x79e: Pop(1)
0x79f: Push(Stack[-1])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a1: Push("head") // @poff=238
0x7a2: @ LookAsyncCamera(Stack[-1])
0x7a3: Pop(1)
0x7a4: @ CameraWaitForPlayFinish()
0x7a5: Pop(0)
0x7a6: @ ResumeWorld()
0x7a7: Pop(0)
0x7a8: Stack[-21] = (bool) 1
0x7a9: Return(); Pop(18)

0x7aa: PushEmpty(bool, bool)
0x7ab: @ CameraSwitchToNormal()
0x7ac: Pop(0)
0x7ad: PushEmpty(bool)
0x7ae: Call2 0x8c3

0x7af: Pop(0)
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7b1: GOTO 0x7ba

0x7b2: Push("head") // @poff=238
0x7b3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7b4: Pop(1)
0x7b5: Push(Stack[-1])
0x7b6: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b7: Push("head") // @poff=238
0x7b8: @ UnlookAsync(Stack[-1])
0x7b9: Pop(1)
0x7ba: Return(); Pop(2)

0x7bb: PushEmpty(int, int, int, int)
0x7bc: Push("voice_common") // @poff=248
0x7bd: @ GetVariable(Stack[-1], Stack[-3])
0x7be: Pop(1)
0x7bf: Push(Stack[-2])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7c1: PushEmpty(bool, object)
0x7c2: Stack[-7] = Stack[-1]
0x7c3: Call2 0x7f5

0x7c4: Pop(1)
0x7c5: Pop(1); Push((bool) Stack[-1] == 0)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7c7: PushEmpty(bool, object)
0x7c8: Stack[-7] = Stack[-1]
0x7c9: Call2 0x81a

0x7ca: Pop(1)
0x7cb: Pop(1); Push((bool) Stack[-1] == 0)
0x7cc: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cd: Stack[-6] = (bool) 0
0x7ce: Return(); Pop(4)

0x7cf: Push((int) 2)
0x7d0: @ irand(Stack[-2], Stack[-1])
0x7d1: Pop(1)
0x7d2: Push(Stack[-1])
0x7d3: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d4: Push("voice_common") // @poff=248
0x7d5: Push((int) 1)
0x7d6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7d7: Push((int) 3)
0x7d8: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7d9: @ SetVariable(Stack[-2], Stack[-1])
0x7da: Pop(2)
0x7db: GOTO 0x7e0

0x7dc: Push("voice_common") // @poff=248
0x7dd: Push((int) 0)
0x7de: @ SetVariable(Stack[-2], Stack[-1])
0x7df: Pop(2)
0x7e0: GOTO 0x7f3

0x7e1: PushEmpty(bool, object)
0x7e2: Stack[-7] = Stack[-1]
0x7e3: Call2 0x81a

0x7e4: Pop(1)
0x7e5: Pop(1); Push((bool) Stack[-1] == 0)
0x7e6: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7e7: PushEmpty(bool, object)
0x7e8: Stack[-7] = Stack[-1]
0x7e9: Call2 0x7f5

0x7ea: Pop(1)
0x7eb: Pop(1); Push((bool) Stack[-1] == 0)
0x7ec: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7ed: Stack[-6] = (bool) 0
0x7ee: Return(); Pop(4)

0x7ef: Push("voice_common") // @poff=248
0x7f0: Push((int) 1)
0x7f1: @ SetVariable(Stack[-2], Stack[-1])
0x7f2: Pop(2)
0x7f3: Stack[-6] = (bool) 1
0x7f4: Return(); Pop(4)

0x7f5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7f6: Stack[-5] = "c" // @poff=274
0x7f7: Stack[-4] = (int) 0
0x7f8: Push((int) 1)
0x7f9: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x7fa: Push((int) 1)
0x7fb: Pop(1); Push(Stack[-5] + Stack[-1]);
0x7fc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7fd: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=278
0x7fe: Pop(1)
0x7ff: Pop(0); Push((bool) Stack[-3] == 0)
0x800: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x801: GOTO 0x805

0x802: Push((int) 1)
0x803: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x804: GOTO 0x7f8

0x805: Pop(0); Push((bool) Stack[-4] == 0)
0x806: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x807: Stack[-12] = (bool) 0
0x808: Return(); Pop(10)

0x809: Stack[-2] = (int) 0
0x80a: Push((int) 1)
0x80b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x80c: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80d: @ irand(Stack[-2], Stack[-4])
0x80e: Pop(0)
0x80f: Push((int) 1)
0x810: Pop(1); Push(Stack[-3] + Stack[-1]);
0x811: Pop(1); Push(Stack[-6] + Stack[-1]);
0x812: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=290
0x813: Pop(1)
0x814: PushEmpty(bool, string)
0x815: Stack[-3] = Stack[-1]
0x816: Call2 0x852

0x817: Stack[-2] = Stack[-14]
0x818: Pop(2)
0x819: Return(); Pop(10)

0x81a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x81b: Push("d") // @poff=244
0x81c: PushEmpty(int)
0x81d: Call2 0x894

0x81e: Pop(0)
0x81f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x820: Push("m") // @poff=302
0x821: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x822: Stack[-4] = (int) 0
0x823: Push((int) 1)
0x824: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x825: Push((int) 1)
0x826: Pop(1); Push(Stack[-5] + Stack[-1]);
0x827: Pop(1); Push(Stack[-6] + Stack[-1]);
0x828: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=278
0x829: Pop(1)
0x82a: Pop(0); Push((bool) Stack[-3] == 0)
0x82b: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x82c: GOTO 0x830

0x82d: Push((int) 1)
0x82e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x82f: GOTO 0x823

0x830: Pop(0); Push((bool) Stack[-4] == 0)
0x831: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x832: Stack[-12] = (bool) 0
0x833: Return(); Pop(10)

0x834: Stack[-2] = (int) 0
0x835: Push((int) 1)
0x836: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x838: @ irand(Stack[-2], Stack[-4])
0x839: Pop(0)
0x83a: Push((int) 1)
0x83b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x83c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x83d: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=290
0x83e: Pop(1)
0x83f: PushEmpty(bool, string)
0x840: Stack[-3] = Stack[-1]
0x841: Call2 0x852

0x842: Stack[-2] = Stack[-14]
0x843: Pop(2)
0x844: Return(); Pop(10)

0x845: PushEmpty(float, float, float, float)
0x846: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x847: Pop(0)
0x848: Push((bool) 0)
0x849: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x84a: Pop(1)
0x84b: Return(); Pop(4)

0x84c: PushEmpty(float, float, float, float)
0x84d: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x84e: Pop(0)
0x84f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x850: Pop(0)
0x851: Return(); Pop(4)

0x852: PushEmpty(bool, bool)
0x853: PushEmpty(bool)
0x854: Call2 0x8c3

0x855: Pop(0)
0x856: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x857: @ lshHasSpeech(Stack[-1], Stack[-3])
0x858: Pop(0)
0x859: Push(Stack[-1])
0x85a: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85b: @ lshPlaySpeech(Stack[-3])
0x85c: Pop(0)
0x85d: Stack[-4] = (bool) 1
0x85e: Return(); Pop(2)

0x85f: Stack[-4] = (bool) 0
0x860: Return(); Pop(2)

0x861: PushEmpty(bool)
0x862: Call2 0x8c3

0x863: Pop(0)
0x864: IF (Stack[-1] == 0) GOTO 0x867; Pop(1)

0x865: @ lshStopSpeech()
0x866: Pop(0)
0x867: Return(); Pop(0)

0x868: PushEmpty(object, object)
0x869: @ self(Stack[-1])
0x86a: Pop(0)
0x86b: Stack[-1] = Stack[-3]
0x86c: Return(); Pop(2)

0x86d: Stack[-1] = 0
0x86e: PushEmpty(float, float)
0x86f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x870: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x871: Push((float)9.999999974752427e-07)
0x872: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x874: Stack[-4] = [0.0, 0.0, 0.0]
0x875: Return(); Pop(2)

0x876: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x877: Return(); Pop(2)

0x878: PushEmpty(int, int)
0x879: @ GetVariable(Stack[-3], Stack[-1])
0x87a: Pop(0)
0x87b: Stack[-1] = Stack[-4]
0x87c: Return(); Pop(2)

0x87d: PushEmpty(object, object, object, object)
0x87e: @ GetMainOutdoorScene(Stack[-2])
0x87f: Pop(0)
0x880: Push(".bin") // @poff=306
0x881: Pop(1); Push(Stack[-6] + Stack[-1]);
0x882: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x883: Pop(1)
0x884: Stack[-1] = Stack[-6]
0x885: Return(); Pop(4)

0x886: Stack[-1] = 0
0x887: Stack[-2] = 0
0x888: PushEmpty(object, object)
0x889: @ FindActor(Stack[-1], Stack[-4])
0x88a: Pop(0)
0x88b: Pop(0); PushNull((bool) Stack[-1] == 0)
0x88c: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x88d: Stack[-5] = (bool) 0
0x88e: Return(); Pop(2)

0x88f: @ Trigger(Stack[-1], Stack[-3])
0x890: Pop(0)
0x891: Stack[-5] = (bool) 1
0x892: Return(); Pop(2)

0x893: Stack[-1] = 0
0x894: PushEmpty(float, float)
0x895: @ GetGameTime(Stack[-1])
0x896: Pop(0)
0x897: Push((int) 1)
0x898: PushEmpty(int)
0x899: Push((int) 24)
0x89a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x89b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x89c: Return(); Pop(2)

0x89d: PushEmpty()
0x89e: PushEmpty(int)
0x89f: Call2 0x894

0x8a0: Pop(0)
0x8a1: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x8a2: Return(); Pop(0)

0x8a3: PushEmpty(string, string)
0x8a4: Stack[-1] = "idle" // @poff=146
0x8a5: Push(Stack[-3])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a7: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x8a8: Stack[-1] = Stack[-4]
0x8a9: Return(); Pop(2)

0x8aa: PushEmpty(int, bool, int, bool)
0x8ab: Stack[-2] = (int) 0
0x8ac: Push("all") // @poff=138
0x8ad: PushEmpty(string, int)
0x8ae: Stack[-5] = Stack[-1]
0x8af: Call2 0x8a3

0x8b0: Pop(1)
0x8b1: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8b2: Pop(2)
0x8b3: Pop(0); Push((bool) Stack[-1] == 0)
0x8b4: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b5: GOTO 0x8b9

0x8b6: Push((int) 1)
0x8b7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8b8: GOTO 0x8ac

0x8b9: Stack[-2] = Stack[-5]
0x8ba: Return(); Pop(4)

0x8bb: Stack[-1] = (int) 515552
0x8bc: Return(); Pop(0)

0x8bd: Stack[-1] = (int) 502877
0x8be: Return(); Pop(0)

0x8bf: Stack[-1] = "ui/NPC_Spi4ka.png" // @poff=316
0x8c0: Return(); Pop(0)

0x8c1: Stack[-1] = "ui/NPC_Spi4ka_b.png" // @poff=352
0x8c2: Return(); Pop(0)

0x8c3: Stack[-1] = (bool) 1
0x8c4: Return(); Pop(0)

0x8c5: PushEmpty()
0x8c6: PushEmpty()
0x8c7: Call2 0x94c

0x8c8: Pop(0)
0x8c9: PushEmpty()
0x8ca: Call2 0x959

0x8cb: Pop(0)
0x8cc: PushEmpty(object, string)
0x8cd: Stack[-1] = "quest_b4_02" // @poff=392
0x8ce: Call2 0x87d

0x8cf: Pop(2)
0x8d0: PushEmpty(bool, string, string)
0x8d1: Stack[-2] = "quest_b4_02" // @poff=392
0x8d2: Stack[-1] = "place_boy" // @poff=416
0x8d3: Call2 0x888

0x8d4: Pop(3)
0x8d5: Return(); Pop(0)

0x8d6: PushEmpty()
0x8d7: Push("oob4Spi4ka1") // @poff=436
0x8d8: Push((int) 1)
0x8d9: @ SetVariable(Stack[-2], Stack[-1])
0x8da: Pop(2)
0x8db: Return(); Pop(0)

0x8dc: PushEmpty()
0x8dd: Push("oob4Spi4ka2") // @poff=460
0x8de: Push((int) 1)
0x8df: @ SetVariable(Stack[-2], Stack[-1])
0x8e0: Pop(2)
0x8e1: Return(); Pop(0)

0x8e2: PushEmpty()
0x8e3: Push("b10q04Spi4kaTalk") // @poff=484
0x8e4: Push((int) 9)
0x8e5: @ SetVariable(Stack[-2], Stack[-1])
0x8e6: Pop(2)
0x8e7: PushEmpty()
0x8e8: Call2 0x93f

0x8e9: Pop(0)
0x8ea: Return(); Pop(0)

0x8eb: PushEmpty()
0x8ec: Push("b4Spi4kaVisit") // @poff=518
0x8ed: Push((int) 1)
0x8ee: @ SetVariable(Stack[-2], Stack[-1])
0x8ef: Pop(2)
0x8f0: Return(); Pop(0)

0x8f1: PushEmpty()
0x8f2: Push("oob12Spi4ka1") // @poff=546
0x8f3: Push((int) 1)
0x8f4: @ SetVariable(Stack[-2], Stack[-1])
0x8f5: Pop(2)
0x8f6: Return(); Pop(0)

0x8f7: PushEmpty()
0x8f8: PushEmpty(int, string)
0x8f9: Stack[-1] = "b10q04Spi4kaTalk" // @poff=484
0x8fa: Call2 0x878

0x8fb: Pop(1)
0x8fc: Push((int) 1)
0x8fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8fe: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8ff: Stack[-2] = (bool) 1
0x900: Return(); Pop(0)

0x901: Stack[-2] = (bool) 0
0x902: Return(); Pop(0)

0x903: PushEmpty()
0x904: PushEmpty(int, string)
0x905: Stack[-1] = "oob12Spi4ka1" // @poff=546
0x906: Call2 0x878

0x907: Pop(1)
0x908: Push((int) 0)
0x909: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x90b: Stack[-2] = (bool) 1
0x90c: Return(); Pop(0)

0x90d: Stack[-2] = (bool) 0
0x90e: Return(); Pop(0)

0x90f: PushEmpty()
0x910: PushEmpty(int, string)
0x911: Stack[-1] = "oob4Spi4ka1" // @poff=436
0x912: Call2 0x878

0x913: Pop(1)
0x914: Push((int) 0)
0x915: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x916: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x917: Stack[-2] = (bool) 1
0x918: Return(); Pop(0)

0x919: Stack[-2] = (bool) 0
0x91a: Return(); Pop(0)

0x91b: PushEmpty()
0x91c: PushEmpty(int, string)
0x91d: Stack[-1] = "b4q02" // @poff=572
0x91e: Call2 0x878

0x91f: Pop(1)
0x920: Push((int) 0)
0x921: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x922: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x923: Stack[-2] = (bool) 1
0x924: Return(); Pop(0)

0x925: Stack[-2] = (bool) 0
0x926: Return(); Pop(0)

0x927: PushEmpty()
0x928: PushEmpty(int, string)
0x929: Stack[-1] = "oob4Spi4ka2" // @poff=460
0x92a: Call2 0x878

0x92b: Pop(1)
0x92c: Push((int) 0)
0x92d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x92e: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x92f: Stack[-2] = (bool) 1
0x930: Return(); Pop(0)

0x931: Stack[-2] = (bool) 0
0x932: Return(); Pop(0)

0x933: PushEmpty()
0x934: PushEmpty(int, string)
0x935: Stack[-1] = "b4q02" // @poff=572
0x936: Call2 0x878

0x937: Pop(1)
0x938: Push((int) 1000)
0x939: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x93a: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93b: Stack[-2] = (bool) 1
0x93c: Return(); Pop(0)

0x93d: Stack[-2] = (bool) 0
0x93e: Return(); Pop(0)

0x93f: PushEmpty(object, object)
0x940: Push((int) 557)
0x941: Push((int) 2)
0x942: Push((int) 530536)
0x943: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x944: Pop(3)
0x945: PushEmpty(bool, object, int)
0x946: Stack[-4] = Stack[-2]
0x947: Stack[-1] = (int) 548
0x948: Call2 0x973

0x949: Pop(3)
0x94a: Return(); Pop(2)

0x94b: Stack[-1] = 0
0x94c: PushEmpty(object, object)
0x94d: Push((int) 213)
0x94e: Push((int) 2)
0x94f: Push((int) 518576)
0x950: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x951: Pop(3)
0x952: PushEmpty(bool, object, int)
0x953: Stack[-4] = Stack[-2]
0x954: Stack[-1] = (int) -1
0x955: Call2 0x973

0x956: Pop(3)
0x957: Return(); Pop(2)

0x958: Stack[-1] = 0
0x959: PushEmpty(object, object)
0x95a: Push((int) 214)
0x95b: Push((int) 2)
0x95c: Push((int) 518577)
0x95d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x95e: Pop(3)
0x95f: PushEmpty(bool, object, int)
0x960: Stack[-4] = Stack[-2]
0x961: Stack[-1] = (int) 213
0x962: Call2 0x973

0x963: Pop(3)
0x964: Return(); Pop(2)

0x965: Stack[-1] = 0
0x966: PushEmpty(object, object)
0x967: @ GetDiaryRoot(Stack[-1])
0x968: Pop(0)
0x969: Pop(0); Push((bool) Stack[-1] == 0)
0x96a: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96b: Push("Can't retrieve diary root") // @poff=584
0x96c: @ Trace(Stack[-1])
0x96d: Pop(1)
0x96e: Stack[-3] = (bool) 0
0x96f: Return(); Pop(2)

0x970: Stack[-1] = Stack[-3]
0x971: Return(); Pop(2)

0x972: Stack[-1] = 0
0x973: PushEmpty(object, object, int, object, object, int)
0x974: PushEmpty(object)
0x975: Call2 0x966

0x976: Stack[-1] = Stack[-4]
0x977: Pop(1)
0x978: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=636
0x979: Pop(0)
0x97a: Pop(0); Push((bool) Stack[-2] == 0)
0x97b: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x97c: Push("Can't find diary parent with id: ") // @poff=641
0x97d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x97e: @ Trace(Stack[-1])
0x97f: Pop(1)
0x980: Stack[-9] = (bool) 0
0x981: Return(); Pop(6)

0x982: @@ AddChild(Stack[-8]); Obj=2 // @poff=709
0x983: Pop(0)
0x984: Push((int) 7)
0x985: @ SendWorldWndMessage(Stack[-1])
0x986: Pop(1)
0x987: @@ GetCategory(Stack[-1]); Obj=8 // @poff=718
0x988: Pop(0)
0x989: @ SetDiarySection(Stack[-1])
0x98a: Pop(0)
0x98b: Stack[-9] = (bool) 0
0x98c: Return(); Pop(6)

0x98d: Stack[-2] = 0
0x98e: Stack[-3] = 0
0x98f: PushEmpty(int, int)
0x990: Push("branch") // @poff=730
0x991: @ GetVariable(Stack[-1], Stack[-2])
0x992: Pop(1)
0x993: Push((int) 0)
0x994: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x995: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x996: Stack[-3] = (int) 1
0x997: Return(); Pop(2)

0x998: GOTO 0x99e

0x999: Push((int) 1)
0x99a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x99b: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x99c: Stack[-3] = (int) 2
0x99d: Return(); Pop(2)

0x99e: Stack[-3] = (int) 3
0x99f: Return(); Pop(2)

0x9a0: PushEmpty(int, int)
0x9a1: Push("mt_spi4ka") // @poff=744
0x9a2: @ GetVariable(Stack[-1], Stack[-2])
0x9a3: Pop(1)
0x9a4: Pop(0); Push((bool) Stack[-1] == 0)
0x9a5: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9a6: PushEmpty(int, object)
0x9a7: Stack[-5] = Stack[-1]
0x9a8: Push(-2, 1); TaskCall(7)
0x9a9: Call2 0x486

0x9aa: Pop(-2, 1); TaskReturn
0x9ab: Pop(2)
0x9ac: Push("mt_spi4ka") // @poff=744
0x9ad: Push((int) 1)
0x9ae: @ SetVariable(Stack[-2], Stack[-1])
0x9af: Pop(2)
0x9b0: Return(); Pop(2)

0x9b1: PushEmpty()
0x9b2: PushEmpty(object)
0x9b3: Stack[-2] = Stack[-1]
0x9b4: Call2 0x9a0

0x9b5: Pop(1)
0x9b6: PushEmpty(bool, int)
0x9b7: Stack[-1] = (int) 4
0x9b8: Call2 0x89d

0x9b9: Pop(1)
0x9ba: IF (Stack[-1] == 0) GOTO 0x9c2; Pop(1)

0x9bb: PushEmpty(int, object)
0x9bc: Stack[-3] = Stack[-1]
0x9bd: Push(-2, 1); TaskCall(5)
0x9be: Call2 0x268

0x9bf: Pop(-2, 1); TaskReturn
0x9c0: Pop(2)
0x9c1: Return(); Pop(0)

0x9c2: PushEmpty(bool, int)
0x9c3: Stack[-1] = (int) 10
0x9c4: Call2 0x89d

0x9c5: Pop(1)
0x9c6: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9c7: PushEmpty(int, object)
0x9c8: Stack[-3] = Stack[-1]
0x9c9: Push(-2, 1); TaskCall(1)
0x9ca: Call2 0xd

0x9cb: Pop(-2, 1); TaskReturn
0x9cc: Pop(2)
0x9cd: Return(); Pop(0)

0x9ce: PushEmpty(bool, int)
0x9cf: Stack[-1] = (int) 12
0x9d0: Call2 0x89d

0x9d1: Pop(1)
0x9d2: IF (Stack[-1] == 0) GOTO 0x9da; Pop(1)

0x9d3: PushEmpty(int, object)
0x9d4: Stack[-3] = Stack[-1]
0x9d5: Push(-2, 1); TaskCall(3)
0x9d6: Call2 0x125

0x9d7: Pop(-2, 1); TaskReturn
0x9d8: Pop(2)
0x9d9: Return(); Pop(0)

0x9da: PushEmpty(int, object)
0x9db: Stack[-3] = Stack[-1]
0x9dc: Push(-2, 1); TaskCall(9)
0x9dd: Call2 0x575

0x9de: Pop(-2, 1); TaskReturn
0x9df: Pop(2)
0x9e0: Return(); Pop(0)

