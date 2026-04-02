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
	W:player
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:ui/NPC_Block.png
	W:ui/NPC_Block_b.png
	W:pt_map_starshina
	A:ShowMap
	W:oob9Block1
	W:oob12Block1
	W:b12q01BlockVisit
	W:oob12Block2
	W:quest_b10_02
	W:completed
	W:oob10Block1
	W:oob9Block2
	W:oob9Block3
	W:oob10Block2
	W:pt_gmap_vagon_army
	W:b10q04BlockGotoOfficer
	A:AddMark
	W:b9BlockVisit
	W:b9q01BlockGotoBoiny
	W:b10q02
	W:b10q02Cutscene
	W:b10q04KapellaGotoBlock
	W:Can't find main outdoor scene
	A:GetMap
	A:GetLocator
	W:Warning: outdoor scene locator 
	W: doesnt exist
	W:Can't find map
	A:SetMapParams
	W:branch
	W:mt_block
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f0042006c006f0063006b002e0070006e0067000000750069002f004e00500043005f0042006c006f0063006b005f0062002e0070006e0067000000700074005f006d00610070005f0073007400610072007300680069006e006100000053686f774d6170006f006f006200390042006c006f0063006b00310000006f006f0062003100320042006c006f0063006b003100000062003100320071003000310042006c006f0063006b005600690073006900740000006f006f0062003100320042006c006f0063006b0032000000710075006500730074005f006200310030005f0030003200000063006f006d0070006c00650074006500640000006f006f0062003100300042006c006f0063006b00310000006f006f006200390042006c006f0063006b00320000006f006f006200390042006c006f0063006b00330000006f006f0062003100300042006c006f0063006b0032000000700074005f0067006d00610070005f007600610067006f006e005f00610072006d007900000062003100300071003000340042006c006f0063006b0047006f0074006f004f0066006600690063006500720000004164644d61726b006200390042006c006f0063006b005600690073006900740000006200390071003000310042006c006f0063006b0047006f0074006f0042006f0069006e007900000062003100300071003000320000006200310030007100300032004300750074007300630065006e00650000006200310030007100300034004b006100700065006c006c00610047006f0074006f0042006c006f0063006b000000430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e006300680000006d0074005f0062006c006f0063006b000000
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)

RunOp = 0xa5b
RunTask = 11

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d9 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5a0 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7c6 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa31 Vars = (int, int)
	GTASK_11 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xaaa Vars = (int)
		EVENT_6 Op = 0xad0 Vars = ()
		EVENT_5 Op = 0xadf Vars = ()
		EVENT_45 Op = 0xaec Vars = (bool)
		EVENT_0 Op = 0xaf8 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0xb7c

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
0x11: Call2 0xc83

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0xbd6

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0xb81

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0xcda

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0xcd8

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0xcdc

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0xcde

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0xe1e

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
0x55: Call2 0xbc5

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
0x63: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x98

0x67: Pop(1)
0x68: Push((int) 530875)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 530876)
0x6e: Push((int) 32199)
0x6f: Push((int) 32195)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 530877)
0x73: Push((int) 32197)
0x74: Push((int) 32196)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0xce0

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0xc60

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all") // @poff=138
0x8a: Push("idle") // @poff=146
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all") // @poff=138
0x93: Push("idle") // @poff=146
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0xce0

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-3] = Stack[-2]
0xa4: Push("") // @poff=102
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0xc67

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0xc7c

0xb3: Pop(0)
0xb4: Push((int) 32194)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral" // @poff=89
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 530875)
0xbc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbd: Pop(1)
0xbe: @@@ ClearReplies(); Obj=0 // @poff=116
0xbf: Pop(0)
0xc0: Push((int) 530876)
0xc1: Push((int) 32199)
0xc2: Push((int) 32195)
0xc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc4: Pop(3)
0xc5: Push((int) 530877)
0xc6: Push((int) 32197)
0xc7: Push((int) 32196)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 32197)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x98

0xd1: Pop(1)
0xd2: Push((int) 530878)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 530879)
0xd8: Push((int) 32199)
0xd9: Push((int) 32198)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 530881)
0xdd: Push((int) 32199)
0xde: Push((int) 32200)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 32199)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral" // @poff=89
0xe7: Call2 0x98

0xe8: Pop(1)
0xe9: Push((int) 530880)
0xea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xeb: Pop(1)
0xec: @@@ ClearReplies(); Obj=0 // @poff=116
0xed: Pop(0)
0xee: Push((int) 530882)
0xef: Push((int) -1)
0xf0: Push((int) 32203)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: Push((int) 530883)
0xf4: Push((int) -1)
0xf5: Push((int) 32204)
0xf6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfa: PushEmpty(bool)
0xfb: Call2 0xce0

0xfc: Pop(0)
0xfd: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfe: @ lshStopAnimation()
0xff: Pop(0)
0x100: GOTO 0x103

0x101: @ StopAnimation()
0x102: Pop(0)
0x103: Return(); Pop(0)

0x104: GOTO 0xaf

0x105: Return(); Pop(0)

0x106: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x107: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x108: PushEmpty(bool, object)
0x109: PushEmpty(object)
0x10a: Call2 0xc83

0x10b: Stack[-1] = Stack[-2]
0x10c: Pop(1)
0x10d: Call2 0xbd6

0x10e: Pop(2)
0x10f: PushEmpty(bool, object, float)
0x110: Stack[-12] = Stack[-2]
0x111: Stack[-1] = (float) 70.0
0x112: Call2 0xb81

0x113: Pop(2)
0x114: Pop(1); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x116: Stack[-10] = (int) -2
0x117: Return(); Pop(8)

0x118: @ CreateDialog(Stack[-4])
0x119: Pop(0)
0x11a: PushEmpty(int)
0x11b: Call2 0xcda

0x11c: Pop(0)
0x11d: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11e: Pop(1)
0x11f: PushEmpty(int)
0x120: Call2 0xcd8

0x121: Pop(0)
0x122: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x123: Pop(1)
0x124: PushEmpty(string)
0x125: Call2 0xcdc

0x126: Pop(0)
0x127: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x128: Pop(1)
0x129: PushEmpty(string)
0x12a: Call2 0xcde

0x12b: Pop(0)
0x12c: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x12d: Pop(1)
0x12e: PushEmpty(int)
0x12f: Call2 0xe1e

0x130: Pop(0)
0x131: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x132: Pop(1)
0x133: Stack[-2] = (int) -1
0x134: @ IsOverrideActive(Stack[-3])
0x135: Pop(0)
0x136: Push(Stack[-3])
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-10] = (int) -2
0x139: Return(); Pop(8)

0x13a: @ DoDialog(Stack[-4])
0x13b: Pop(0)
0x13c: PushEmpty(object, object)
0x13d: Stack[-11] = Stack[-2]
0x13e: Stack[-6] = Stack[-1]
0x13f: Push(-2, 4); TaskCall(4)
0x140: Call2 0x157

0x141: Pop(-2, 4); TaskReturn
0x142: Pop(2)
0x143: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x144: Pop(0)
0x145: Pop(0); Push((bool) Stack[-1] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: @ sync()
0x148: Pop(0)
0x149: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x14a: Pop(0)
0x14b: GOTO 0x145

0x14c: PushEmpty(object)
0x14d: Stack[-10] = Stack[-1]
0x14e: Call2 0xbc5

0x14f: Pop(1)
0x150: @ StopDialog(Stack[-4])
0x151: Pop(0)
0x152: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x153: Pop(0)
0x154: Stack[-2] = Stack[-10]
0x155: Return(); Pop(8)

0x156: Stack[-4] = 0
0x157: PushEmpty()
0x158: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x159: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x15a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x15b: Push((int) 1)
0x15c: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x15d: PushEmpty(bool, object)
0x15e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15f: Call2 0xd5f

0x160: Pop(1)
0x161: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x162: PushEmpty(object, object)
0x163: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x164: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x165: Call2 0xcf2

0x166: Pop(2)
0x167: PushEmpty(object, object)
0x168: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0xd49

0x16b: Pop(2)
0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral" // @poff=89
0x16e: Call2 0x1c3

0x16f: Pop(1)
0x170: Push((int) 521534)
0x171: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x172: Pop(1)
0x173: @@@ ClearReplies(); Obj=0 // @poff=116
0x174: Pop(0)
0x175: Push((int) 522289)
0x176: Push((int) 23470)
0x177: Push((int) 23444)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Push((int) 522291)
0x17b: Push((int) 23449)
0x17c: Push((int) 23446)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: GOTO 0x1a5

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral" // @poff=89
0x182: Call2 0x1c3

0x183: Pop(1)
0x184: Push((int) 521594)
0x185: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x186: Pop(1)
0x187: @@@ ClearReplies(); Obj=0 // @poff=116
0x188: Pop(0)
0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18b: Call2 0xdb1

0x18c: Pop(1)
0x18d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18e: Push((int) 522347)
0x18f: Push((int) 23514)
0x190: Push((int) 23510)
0x191: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x192: Pop(3)
0x193: PushEmpty(bool, object)
0x194: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x195: Call2 0xdbd

0x196: Pop(1)
0x197: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x198: Push((int) 521595)
0x199: Push((int) 23511)
0x19a: Push((int) 22758)
0x19b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19c: Pop(3)
0x19d: Push((int) 522350)
0x19e: Push((int) -1)
0x19f: Push((int) 23513)
0x1a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a1: Pop(3)
0x1a2: GOTO 0x1a5

0x1a3: Return(); Pop(0)

0x1a4: GOTO 0x15b

0x1a5: PushEmpty(bool)
0x1a6: Call2 0xce0

0x1a7: Pop(0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a9: @ lshWaitForAnimEnd()
0x1aa: Pop(0)
0x1ab: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: GOTO 0x1b3

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1b0: Call2 0xc60

0x1b1: Pop(1)
0x1b2: GOTO 0x1a9

0x1b3: GOTO 0x1c2

0x1b4: Push("all") // @poff=138
0x1b5: Push("idle") // @poff=146
0x1b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: @ WaitForAnimEnd()
0x1b9: Pop(0)
0x1ba: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: GOTO 0x1c2

0x1bd: Push("all") // @poff=138
0x1be: Push("idle") // @poff=146
0x1bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: GOTO 0x1b8

0x1c2: Return(); Pop(0)

0x1c3: PushEmpty()
0x1c4: PushEmpty(bool)
0x1c5: Call2 0xce0

0x1c6: Pop(0)
0x1c7: Pop(1); Push((bool) Stack[-1] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: Return(); Pop(0)

0x1ca: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Return(); Pop(0)

0x1cd: PushEmpty(string, bool)
0x1ce: Stack[-3] = Stack[-2]
0x1cf: Push("") // @poff=102
0x1d0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d2: Stack[-1] = (bool) 0
0x1d3: GOTO 0x1d5

0x1d4: Stack[-1] = (bool) 1
0x1d5: Call2 0xc67

0x1d6: Pop(2)
0x1d7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1d8: Return(); Pop(0)

0x1d9: PushEmpty()
0x1da: Push((int) 1)
0x1db: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x1dc: PushEmpty()
0x1dd: Call2 0xc7c

0x1de: Pop(0)
0x1df: Push((int) 23500)
0x1e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e2: PushEmpty(object, object)
0x1e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e5: Call2 0xd4f

0x1e6: Pop(2)
0x1e7: PushEmpty(object, object)
0x1e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ea: Call2 0xce2

0x1eb: Pop(2)
0x1ec: Push((int) 23501)
0x1ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1ef: PushEmpty(object, object)
0x1f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f2: Call2 0xd4f

0x1f3: Pop(2)
0x1f4: PushEmpty(object, object)
0x1f5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f7: Call2 0xce2

0x1f8: Pop(2)
0x1f9: Push((int) 23495)
0x1fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1fc: PushEmpty(object, object)
0x1fd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ff: Call2 0xd4f

0x200: Pop(2)
0x201: PushEmpty(object, object)
0x202: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x203: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x204: Call2 0xce2

0x205: Pop(2)
0x206: Push((int) 23496)
0x207: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x209: PushEmpty(object, object)
0x20a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x20b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20c: Call2 0xd4f

0x20d: Pop(2)
0x20e: PushEmpty(object, object)
0x20f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x210: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x211: Call2 0xce2

0x212: Pop(2)
0x213: Push((int) 23510)
0x214: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x216: PushEmpty(object, object)
0x217: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x218: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x219: Call2 0xd17

0x21a: Pop(2)
0x21b: Push((int) 22758)
0x21c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21e: PushEmpty(object, object)
0x21f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x220: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x221: Call2 0xd1d

0x222: Pop(2)
0x223: Push((int) 22695)
0x224: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x226: PushEmpty(bool, object)
0x227: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x228: Call2 0xd5f

0x229: Pop(1)
0x22a: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x22b: PushEmpty(object, object)
0x22c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22e: Call2 0xcf2

0x22f: Pop(2)
0x230: PushEmpty(object, object)
0x231: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x232: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x233: Call2 0xd49

0x234: Pop(2)
0x235: PushEmpty(string)
0x236: Stack[-1] = "Neutral" // @poff=89
0x237: Call2 0x1c3

0x238: Pop(1)
0x239: Push((int) 521534)
0x23a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x23b: Pop(1)
0x23c: @@@ ClearReplies(); Obj=0 // @poff=116
0x23d: Pop(0)
0x23e: Push((int) 522289)
0x23f: Push((int) 23470)
0x240: Push((int) 23444)
0x241: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x242: Pop(3)
0x243: Push((int) 522291)
0x244: Push((int) 23449)
0x245: Push((int) 23446)
0x246: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x247: Pop(3)
0x248: Return(); Pop(0)

0x249: PushEmpty(string)
0x24a: Stack[-1] = "Neutral" // @poff=89
0x24b: Call2 0x1c3

0x24c: Pop(1)
0x24d: Push((int) 521594)
0x24e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24f: Pop(1)
0x250: @@@ ClearReplies(); Obj=0 // @poff=116
0x251: Pop(0)
0x252: PushEmpty(bool, object)
0x253: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x254: Call2 0xdb1

0x255: Pop(1)
0x256: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x257: Push((int) 522347)
0x258: Push((int) 23514)
0x259: Push((int) 23510)
0x25a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25b: Pop(3)
0x25c: PushEmpty(bool, object)
0x25d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25e: Call2 0xdbd

0x25f: Pop(1)
0x260: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x261: Push((int) 521595)
0x262: Push((int) 23511)
0x263: Push((int) 22758)
0x264: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x265: Pop(3)
0x266: Push((int) 522350)
0x267: Push((int) -1)
0x268: Push((int) 23513)
0x269: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26a: Pop(3)
0x26b: Return(); Pop(0)

0x26c: Push((int) 23511)
0x26d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x26f: PushEmpty(string)
0x270: Stack[-1] = "Neutral" // @poff=89
0x271: Call2 0x1c3

0x272: Pop(1)
0x273: Push((int) 522348)
0x274: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x275: Pop(1)
0x276: @@@ ClearReplies(); Obj=0 // @poff=116
0x277: Pop(0)
0x278: Push((int) 522349)
0x279: Push((int) -1)
0x27a: Push((int) 23512)
0x27b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27c: Pop(3)
0x27d: Return(); Pop(0)

0x27e: Push((int) 23514)
0x27f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x281: PushEmpty(string)
0x282: Stack[-1] = "Neutral" // @poff=89
0x283: Call2 0x1c3

0x284: Pop(1)
0x285: Push((int) 522351)
0x286: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x287: Pop(1)
0x288: @@@ ClearReplies(); Obj=0 // @poff=116
0x289: Pop(0)
0x28a: Push((int) 522352)
0x28b: Push((int) 23516)
0x28c: Push((int) 23515)
0x28d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28e: Pop(3)
0x28f: Return(); Pop(0)

0x290: Push((int) 23516)
0x291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x293: PushEmpty(string)
0x294: Stack[-1] = "Neutral" // @poff=89
0x295: Call2 0x1c3

0x296: Pop(1)
0x297: Push((int) 522353)
0x298: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x299: Pop(1)
0x29a: @@@ ClearReplies(); Obj=0 // @poff=116
0x29b: Pop(0)
0x29c: Push((int) 522354)
0x29d: Push((int) 23518)
0x29e: Push((int) 23517)
0x29f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a0: Pop(3)
0x2a1: Return(); Pop(0)

0x2a2: Push((int) 23518)
0x2a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Neutral" // @poff=89
0x2a7: Call2 0x1c3

0x2a8: Pop(1)
0x2a9: Push((int) 522355)
0x2aa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ab: Pop(1)
0x2ac: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ad: Pop(0)
0x2ae: Push((int) 522356)
0x2af: Push((int) 23520)
0x2b0: Push((int) 23519)
0x2b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b2: Pop(3)
0x2b3: Return(); Pop(0)

0x2b4: Push((int) 23520)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Neutral" // @poff=89
0x2b9: Call2 0x1c3

0x2ba: Pop(1)
0x2bb: Push((int) 522357)
0x2bc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2bd: Pop(1)
0x2be: @@@ ClearReplies(); Obj=0 // @poff=116
0x2bf: Pop(0)
0x2c0: Push((int) 522358)
0x2c1: Push((int) 23522)
0x2c2: Push((int) 23521)
0x2c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c4: Pop(3)
0x2c5: Push((int) 522360)
0x2c6: Push((int) -1)
0x2c7: Push((int) 23523)
0x2c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c9: Pop(3)
0x2ca: Return(); Pop(0)

0x2cb: Push((int) 23522)
0x2cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2ce: PushEmpty(string)
0x2cf: Stack[-1] = "Neutral" // @poff=89
0x2d0: Call2 0x1c3

0x2d1: Pop(1)
0x2d2: Push((int) 522359)
0x2d3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d4: Pop(1)
0x2d5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d6: Pop(0)
0x2d7: Push((int) 522361)
0x2d8: Push((int) -1)
0x2d9: Push((int) 23524)
0x2da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2db: Pop(3)
0x2dc: Return(); Pop(0)

0x2dd: Push((int) 23449)
0x2de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Neutral" // @poff=89
0x2e2: Call2 0x1c3

0x2e3: Pop(1)
0x2e4: Push((int) 522294)
0x2e5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e6: Pop(1)
0x2e7: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e8: Pop(0)
0x2e9: Push((int) 522295)
0x2ea: Push((int) 23453)
0x2eb: Push((int) 23450)
0x2ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ed: Pop(3)
0x2ee: Push((int) 522297)
0x2ef: Push((int) 23447)
0x2f0: Push((int) 23452)
0x2f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f2: Pop(3)
0x2f3: Return(); Pop(0)

0x2f4: Push((int) 23447)
0x2f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x2f7: PushEmpty(string)
0x2f8: Stack[-1] = "Neutral" // @poff=89
0x2f9: Call2 0x1c3

0x2fa: Pop(1)
0x2fb: Push((int) 522292)
0x2fc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2fd: Pop(1)
0x2fe: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ff: Pop(0)
0x300: Push((int) 522296)
0x301: Push((int) -1)
0x302: Push((int) 23451)
0x303: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x304: Pop(3)
0x305: Push((int) 522293)
0x306: Push((int) -1)
0x307: Push((int) 23448)
0x308: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x309: Pop(3)
0x30a: Return(); Pop(0)

0x30b: Push((int) 23453)
0x30c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x30e: PushEmpty(string)
0x30f: Stack[-1] = "Neutral" // @poff=89
0x310: Call2 0x1c3

0x311: Pop(1)
0x312: Push((int) 522298)
0x313: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x314: Pop(1)
0x315: @@@ ClearReplies(); Obj=0 // @poff=116
0x316: Pop(0)
0x317: Push((int) 522299)
0x318: Push((int) 23457)
0x319: Push((int) 23454)
0x31a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31b: Pop(3)
0x31c: Push((int) 522300)
0x31d: Push((int) 23447)
0x31e: Push((int) 23455)
0x31f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x320: Pop(3)
0x321: Return(); Pop(0)

0x322: Push((int) 23457)
0x323: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x325: PushEmpty(string)
0x326: Stack[-1] = "Neutral" // @poff=89
0x327: Call2 0x1c3

0x328: Pop(1)
0x329: Push((int) 522301)
0x32a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x32b: Pop(1)
0x32c: @@@ ClearReplies(); Obj=0 // @poff=116
0x32d: Pop(0)
0x32e: Push((int) 522302)
0x32f: Push((int) 23464)
0x330: Push((int) 23458)
0x331: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x332: Pop(3)
0x333: Push((int) 522303)
0x334: Push((int) 23460)
0x335: Push((int) 23459)
0x336: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x337: Pop(3)
0x338: Return(); Pop(0)

0x339: Push((int) 23460)
0x33a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x33c: PushEmpty(string)
0x33d: Stack[-1] = "Neutral" // @poff=89
0x33e: Call2 0x1c3

0x33f: Pop(1)
0x340: Push((int) 522304)
0x341: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x342: Pop(1)
0x343: @@@ ClearReplies(); Obj=0 // @poff=116
0x344: Pop(0)
0x345: Push((int) 522305)
0x346: Push((int) -1)
0x347: Push((int) 23461)
0x348: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x349: Pop(3)
0x34a: Push((int) 522306)
0x34b: Push((int) 23447)
0x34c: Push((int) 23462)
0x34d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x34e: Pop(3)
0x34f: Return(); Pop(0)

0x350: Push((int) 23464)
0x351: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x353: PushEmpty(string)
0x354: Stack[-1] = "Neutral" // @poff=89
0x355: Call2 0x1c3

0x356: Pop(1)
0x357: Push((int) 522307)
0x358: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x359: Pop(1)
0x35a: @@@ ClearReplies(); Obj=0 // @poff=116
0x35b: Pop(0)
0x35c: Push((int) 522308)
0x35d: Push((int) 22697)
0x35e: Push((int) 23465)
0x35f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x360: Pop(3)
0x361: Push((int) 522309)
0x362: Push((int) 23467)
0x363: Push((int) 23466)
0x364: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x365: Pop(3)
0x366: Return(); Pop(0)

0x367: Push((int) 23467)
0x368: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x36a: PushEmpty(string)
0x36b: Stack[-1] = "Neutral" // @poff=89
0x36c: Call2 0x1c3

0x36d: Pop(1)
0x36e: Push((int) 522310)
0x36f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x370: Pop(1)
0x371: @@@ ClearReplies(); Obj=0 // @poff=116
0x372: Pop(0)
0x373: Push((int) 522311)
0x374: Push((int) 23447)
0x375: Push((int) 23468)
0x376: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x377: Pop(3)
0x378: Return(); Pop(0)

0x379: Push((int) 23470)
0x37a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x37c: PushEmpty(string)
0x37d: Stack[-1] = "Neutral" // @poff=89
0x37e: Call2 0x1c3

0x37f: Pop(1)
0x380: Push((int) 522312)
0x381: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x382: Pop(1)
0x383: @@@ ClearReplies(); Obj=0 // @poff=116
0x384: Pop(0)
0x385: Push((int) 522313)
0x386: Push((int) 23472)
0x387: Push((int) 23471)
0x388: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x389: Pop(3)
0x38a: Return(); Pop(0)

0x38b: Push((int) 23472)
0x38c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x38e: PushEmpty(string)
0x38f: Stack[-1] = "Neutral" // @poff=89
0x390: Call2 0x1c3

0x391: Pop(1)
0x392: Push((int) 522314)
0x393: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x394: Pop(1)
0x395: @@@ ClearReplies(); Obj=0 // @poff=116
0x396: Pop(0)
0x397: Push((int) 522316)
0x398: Push((int) 23445)
0x399: Push((int) 23474)
0x39a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39b: Pop(3)
0x39c: Push((int) 522315)
0x39d: Push((int) 23502)
0x39e: Push((int) 23473)
0x39f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a0: Pop(3)
0x3a1: Return(); Pop(0)

0x3a2: Push((int) 23502)
0x3a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3a5: PushEmpty(string)
0x3a6: Stack[-1] = "Neutral" // @poff=89
0x3a7: Call2 0x1c3

0x3a8: Pop(1)
0x3a9: Push((int) 522340)
0x3aa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ab: Pop(1)
0x3ac: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ad: Pop(0)
0x3ae: Push((int) 522342)
0x3af: Push((int) 23445)
0x3b0: Push((int) 23504)
0x3b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b2: Pop(3)
0x3b3: Push((int) 522341)
0x3b4: Push((int) 23507)
0x3b5: Push((int) 23503)
0x3b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b7: Pop(3)
0x3b8: Return(); Pop(0)

0x3b9: Push((int) 23507)
0x3ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3bc: PushEmpty(string)
0x3bd: Stack[-1] = "Neutral" // @poff=89
0x3be: Call2 0x1c3

0x3bf: Pop(1)
0x3c0: Push((int) 522345)
0x3c1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c2: Pop(1)
0x3c3: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c4: Pop(0)
0x3c5: Push((int) 522346)
0x3c6: Push((int) 23445)
0x3c7: Push((int) 23508)
0x3c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c9: Pop(3)
0x3ca: Return(); Pop(0)

0x3cb: Push((int) 23445)
0x3cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3ce: PushEmpty(string)
0x3cf: Stack[-1] = "Neutral" // @poff=89
0x3d0: Call2 0x1c3

0x3d1: Pop(1)
0x3d2: Push((int) 522290)
0x3d3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d4: Pop(1)
0x3d5: @@@ ClearReplies(); Obj=0 // @poff=116
0x3d6: Pop(0)
0x3d7: Push((int) 521535)
0x3d8: Push((int) 23481)
0x3d9: Push((int) 22696)
0x3da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3db: Pop(3)
0x3dc: Push((int) 522319)
0x3dd: Push((int) 23479)
0x3de: Push((int) 23478)
0x3df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e0: Pop(3)
0x3e1: Return(); Pop(0)

0x3e2: Push((int) 23479)
0x3e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3e5: PushEmpty(string)
0x3e6: Stack[-1] = "Neutral" // @poff=89
0x3e7: Call2 0x1c3

0x3e8: Pop(1)
0x3e9: Push((int) 522320)
0x3ea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3eb: Pop(1)
0x3ec: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ed: Pop(0)
0x3ee: Push((int) 522321)
0x3ef: Push((int) 23483)
0x3f0: Push((int) 23480)
0x3f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f2: Pop(3)
0x3f3: Return(); Pop(0)

0x3f4: Push((int) 23483)
0x3f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3f7: PushEmpty(string)
0x3f8: Stack[-1] = "Neutral" // @poff=89
0x3f9: Call2 0x1c3

0x3fa: Pop(1)
0x3fb: Push((int) 522324)
0x3fc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3fd: Pop(1)
0x3fe: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ff: Pop(0)
0x400: Push((int) 522325)
0x401: Push((int) 23457)
0x402: Push((int) 23484)
0x403: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x404: Pop(3)
0x405: Return(); Pop(0)

0x406: Push((int) 23481)
0x407: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x409: PushEmpty(string)
0x40a: Stack[-1] = "Neutral" // @poff=89
0x40b: Call2 0x1c3

0x40c: Pop(1)
0x40d: Push((int) 522322)
0x40e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x40f: Pop(1)
0x410: @@@ ClearReplies(); Obj=0 // @poff=116
0x411: Pop(0)
0x412: Push((int) 522323)
0x413: Push((int) 22697)
0x414: Push((int) 23482)
0x415: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x416: Pop(3)
0x417: Push((int) 522328)
0x418: Push((int) 22697)
0x419: Push((int) 23489)
0x41a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x41b: Pop(3)
0x41c: Return(); Pop(0)

0x41d: Push((int) 22697)
0x41e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x420: PushEmpty(string)
0x421: Stack[-1] = "Neutral" // @poff=89
0x422: Call2 0x1c3

0x423: Pop(1)
0x424: Push((int) 521536)
0x425: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x426: Pop(1)
0x427: @@@ ClearReplies(); Obj=0 // @poff=116
0x428: Pop(0)
0x429: Push((int) 522326)
0x42a: Push((int) 23488)
0x42b: Push((int) 23487)
0x42c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x42d: Pop(3)
0x42e: Return(); Pop(0)

0x42f: Push((int) 23488)
0x430: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x431: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x432: PushEmpty(string)
0x433: Stack[-1] = "Neutral" // @poff=89
0x434: Call2 0x1c3

0x435: Pop(1)
0x436: Push((int) 522327)
0x437: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x438: Pop(1)
0x439: @@@ ClearReplies(); Obj=0 // @poff=116
0x43a: Pop(0)
0x43b: Push((int) 522329)
0x43c: Push((int) 23497)
0x43d: Push((int) 23491)
0x43e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x43f: Pop(3)
0x440: Push((int) 521537)
0x441: Push((int) 23492)
0x442: Push((int) 22698)
0x443: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x444: Pop(3)
0x445: Return(); Pop(0)

0x446: Push((int) 23492)
0x447: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x448: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x449: PushEmpty(string)
0x44a: Stack[-1] = "Neutral" // @poff=89
0x44b: Call2 0x1c3

0x44c: Pop(1)
0x44d: Push((int) 522330)
0x44e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x44f: Pop(1)
0x450: @@@ ClearReplies(); Obj=0 // @poff=116
0x451: Pop(0)
0x452: Push((int) 522331)
0x453: Push((int) 23494)
0x454: Push((int) 23493)
0x455: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x456: Pop(3)
0x457: Return(); Pop(0)

0x458: Push((int) 23494)
0x459: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x45b: PushEmpty(string)
0x45c: Stack[-1] = "Neutral" // @poff=89
0x45d: Call2 0x1c3

0x45e: Pop(1)
0x45f: Push((int) 522332)
0x460: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x461: Pop(1)
0x462: @@@ ClearReplies(); Obj=0 // @poff=116
0x463: Pop(0)
0x464: Push((int) 522333)
0x465: Push((int) -1)
0x466: Push((int) 23495)
0x467: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x468: Pop(3)
0x469: Push((int) 522334)
0x46a: Push((int) -1)
0x46b: Push((int) 23496)
0x46c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x46d: Pop(3)
0x46e: Return(); Pop(0)

0x46f: Push((int) 23497)
0x470: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x471: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x472: PushEmpty(string)
0x473: Stack[-1] = "Neutral" // @poff=89
0x474: Call2 0x1c3

0x475: Pop(1)
0x476: Push((int) 522335)
0x477: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x478: Pop(1)
0x479: @@@ ClearReplies(); Obj=0 // @poff=116
0x47a: Pop(0)
0x47b: Push((int) 522336)
0x47c: Push((int) 23499)
0x47d: Push((int) 23498)
0x47e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x47f: Pop(3)
0x480: Push((int) 530873)
0x481: Push((int) 23499)
0x482: Push((int) 32191)
0x483: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x484: Pop(3)
0x485: Return(); Pop(0)

0x486: Push((int) 23499)
0x487: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x489: PushEmpty(string)
0x48a: Stack[-1] = "Neutral" // @poff=89
0x48b: Call2 0x1c3

0x48c: Pop(1)
0x48d: Push((int) 522337)
0x48e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x48f: Pop(1)
0x490: @@@ ClearReplies(); Obj=0 // @poff=116
0x491: Pop(0)
0x492: Push((int) 522338)
0x493: Push((int) -1)
0x494: Push((int) 23500)
0x495: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x496: Pop(3)
0x497: Push((int) 522339)
0x498: Push((int) -1)
0x499: Push((int) 23501)
0x49a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x49b: Pop(3)
0x49c: Return(); Pop(0)

0x49d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x49e: PushEmpty(bool)
0x49f: Call2 0xce0

0x4a0: Pop(0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a2: @ lshStopAnimation()
0x4a3: Pop(0)
0x4a4: GOTO 0x4a7

0x4a5: @ StopAnimation()
0x4a6: Pop(0)
0x4a7: Return(); Pop(0)

0x4a8: GOTO 0x1da

0x4a9: Return(); Pop(0)

0x4aa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4ab: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4ac: PushEmpty(bool, object)
0x4ad: PushEmpty(object)
0x4ae: Call2 0xc83

0x4af: Stack[-1] = Stack[-2]
0x4b0: Pop(1)
0x4b1: Call2 0xbd6

0x4b2: Pop(2)
0x4b3: PushEmpty(bool, object, float)
0x4b4: Stack[-12] = Stack[-2]
0x4b5: Stack[-1] = (float) 70.0
0x4b6: Call2 0xb81

0x4b7: Pop(2)
0x4b8: Pop(1); Push((bool) Stack[-1] == 0)
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4ba: Stack[-10] = (int) -2
0x4bb: Return(); Pop(8)

0x4bc: @ CreateDialog(Stack[-4])
0x4bd: Pop(0)
0x4be: PushEmpty(int)
0x4bf: Call2 0xcda

0x4c0: Pop(0)
0x4c1: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x4c2: Pop(1)
0x4c3: PushEmpty(int)
0x4c4: Call2 0xcd8

0x4c5: Pop(0)
0x4c6: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x4c7: Pop(1)
0x4c8: PushEmpty(string)
0x4c9: Call2 0xcdc

0x4ca: Pop(0)
0x4cb: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x4cc: Pop(1)
0x4cd: PushEmpty(string)
0x4ce: Call2 0xcde

0x4cf: Pop(0)
0x4d0: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x4d1: Pop(1)
0x4d2: PushEmpty(int)
0x4d3: Call2 0xe1e

0x4d4: Pop(0)
0x4d5: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x4d6: Pop(1)
0x4d7: Stack[-2] = (int) -1
0x4d8: @ IsOverrideActive(Stack[-3])
0x4d9: Pop(0)
0x4da: Push(Stack[-3])
0x4db: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dc: Stack[-10] = (int) -2
0x4dd: Return(); Pop(8)

0x4de: @ DoDialog(Stack[-4])
0x4df: Pop(0)
0x4e0: PushEmpty(object, object)
0x4e1: Stack[-11] = Stack[-2]
0x4e2: Stack[-6] = Stack[-1]
0x4e3: Push(-2, 4); TaskCall(6)
0x4e4: Call2 0x4fb

0x4e5: Pop(-2, 4); TaskReturn
0x4e6: Pop(2)
0x4e7: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4e8: Pop(0)
0x4e9: Pop(0); Push((bool) Stack[-1] == 0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4eb: @ sync()
0x4ec: Pop(0)
0x4ed: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4ee: Pop(0)
0x4ef: GOTO 0x4e9

0x4f0: PushEmpty(object)
0x4f1: Stack[-10] = Stack[-1]
0x4f2: Call2 0xbc5

0x4f3: Pop(1)
0x4f4: @ StopDialog(Stack[-4])
0x4f5: Pop(0)
0x4f6: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4f7: Pop(0)
0x4f8: Stack[-2] = Stack[-10]
0x4f9: Return(); Pop(8)

0x4fa: Stack[-4] = 0
0x4fb: PushEmpty()
0x4fc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4fd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4fe: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4ff: Push((int) 1)
0x500: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x501: PushEmpty(bool)
0x502: Stack[-1] = (bool) 0
0x503: PushEmpty(bool, object)
0x504: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x505: Call2 0xd6b

0x506: Pop(1)
0x507: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x508: PushEmpty(bool, object)
0x509: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50a: Call2 0xd83

0x50b: Pop(1)
0x50c: Pop(1); Push((bool) Stack[-1] == 0)
0x50d: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50e: Stack[-1] = (bool) 1
0x50f: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x510: PushEmpty(object, object)
0x511: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x512: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x513: Call2 0xcf8

0x514: Pop(2)
0x515: PushEmpty(object, object)
0x516: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x517: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x518: Call2 0xcfe

0x519: Pop(2)
0x51a: PushEmpty(string)
0x51b: Stack[-1] = "Neutral" // @poff=89
0x51c: Call2 0x58a

0x51d: Pop(1)
0x51e: Push((int) 522123)
0x51f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x520: Pop(1)
0x521: @@@ ClearReplies(); Obj=0 // @poff=116
0x522: Pop(0)
0x523: Push((int) 522124)
0x524: Push((int) 24011)
0x525: Push((int) 23291)
0x526: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x527: Pop(3)
0x528: Push((int) 540112)
0x529: Push((int) -1)
0x52a: Push((int) 42079)
0x52b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x52c: Pop(3)
0x52d: GOTO 0x56c

0x52e: PushEmpty(bool, object)
0x52f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x530: Call2 0xd83

0x531: Pop(1)
0x532: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x533: PushEmpty(object, object)
0x534: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x535: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x536: Call2 0xcfe

0x537: Pop(2)
0x538: PushEmpty(string)
0x539: Stack[-1] = "Neutral" // @poff=89
0x53a: Call2 0x58a

0x53b: Pop(1)
0x53c: Push((int) 522127)
0x53d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x53e: Pop(1)
0x53f: @@@ ClearReplies(); Obj=0 // @poff=116
0x540: Pop(0)
0x541: Push((int) 522128)
0x542: Push((int) -1)
0x543: Push((int) 23295)
0x544: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x545: Pop(3)
0x546: Push((int) 522844)
0x547: Push((int) -1)
0x548: Push((int) 24028)
0x549: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x54a: Pop(3)
0x54b: GOTO 0x56c

0x54c: PushEmpty(object, object)
0x54d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x54e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x54f: Call2 0xcfe

0x550: Pop(2)
0x551: PushEmpty(string)
0x552: Stack[-1] = "Neutral" // @poff=89
0x553: Call2 0x58a

0x554: Pop(1)
0x555: Push((int) 522125)
0x556: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x557: Pop(1)
0x558: @@@ ClearReplies(); Obj=0 // @poff=116
0x559: Pop(0)
0x55a: PushEmpty(bool, object)
0x55b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x55c: Call2 0xd77

0x55d: Pop(1)
0x55e: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x55f: Push((int) 522848)
0x560: Push((int) 24033)
0x561: Push((int) 24032)
0x562: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x563: Pop(3)
0x564: Push((int) 522126)
0x565: Push((int) -1)
0x566: Push((int) 23293)
0x567: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x568: Pop(3)
0x569: GOTO 0x56c

0x56a: Return(); Pop(0)

0x56b: GOTO 0x4ff

0x56c: PushEmpty(bool)
0x56d: Call2 0xce0

0x56e: Pop(0)
0x56f: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x570: @ lshWaitForAnimEnd()
0x571: Pop(0)
0x572: Push( Stack[3 + Tasks[-1].StackPointer] )
0x573: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x574: GOTO 0x57a

0x575: PushEmpty(string)
0x576: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x577: Call2 0xc60

0x578: Pop(1)
0x579: GOTO 0x570

0x57a: GOTO 0x589

0x57b: Push("all") // @poff=138
0x57c: Push("idle") // @poff=146
0x57d: @ PlayAnimation(Stack[-2], Stack[-1])
0x57e: Pop(2)
0x57f: @ WaitForAnimEnd()
0x580: Pop(0)
0x581: Push( Stack[3 + Tasks[-1].StackPointer] )
0x582: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x583: GOTO 0x589

0x584: Push("all") // @poff=138
0x585: Push("idle") // @poff=146
0x586: @ PlayAnimation(Stack[-2], Stack[-1])
0x587: Pop(2)
0x588: GOTO 0x57f

0x589: Return(); Pop(0)

0x58a: PushEmpty()
0x58b: PushEmpty(bool)
0x58c: Call2 0xce0

0x58d: Pop(0)
0x58e: Pop(1); Push((bool) Stack[-1] == 0)
0x58f: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x590: Return(); Pop(0)

0x591: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x592: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x593: Return(); Pop(0)

0x594: PushEmpty(string, bool)
0x595: Stack[-3] = Stack[-2]
0x596: Push("") // @poff=102
0x597: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x598: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x599: Stack[-1] = (bool) 0
0x59a: GOTO 0x59c

0x59b: Stack[-1] = (bool) 1
0x59c: Call2 0xc67

0x59d: Pop(2)
0x59e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x59f: Return(); Pop(0)

0x5a0: PushEmpty()
0x5a1: Push((int) 1)
0x5a2: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x5a3: PushEmpty()
0x5a4: Call2 0xc7c

0x5a5: Pop(0)
0x5a6: Push((int) 24032)
0x5a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5a9: PushEmpty(object, object)
0x5aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ac: Call2 0xd04

0x5ad: Pop(2)
0x5ae: Push((int) 23290)
0x5af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x5b1: PushEmpty(bool)
0x5b2: Stack[-1] = (bool) 0
0x5b3: PushEmpty(bool, object)
0x5b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b5: Call2 0xd6b

0x5b6: Pop(1)
0x5b7: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5b8: PushEmpty(bool, object)
0x5b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ba: Call2 0xd83

0x5bb: Pop(1)
0x5bc: Pop(1); Push((bool) Stack[-1] == 0)
0x5bd: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5be: Stack[-1] = (bool) 1
0x5bf: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5c0: PushEmpty(object, object)
0x5c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c3: Call2 0xcf8

0x5c4: Pop(2)
0x5c5: PushEmpty(object, object)
0x5c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c8: Call2 0xcfe

0x5c9: Pop(2)
0x5ca: PushEmpty(string)
0x5cb: Stack[-1] = "Neutral" // @poff=89
0x5cc: Call2 0x58a

0x5cd: Pop(1)
0x5ce: Push((int) 522123)
0x5cf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d0: Pop(1)
0x5d1: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d2: Pop(0)
0x5d3: Push((int) 522124)
0x5d4: Push((int) 24011)
0x5d5: Push((int) 23291)
0x5d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d7: Pop(3)
0x5d8: Push((int) 540112)
0x5d9: Push((int) -1)
0x5da: Push((int) 42079)
0x5db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5dc: Pop(3)
0x5dd: Return(); Pop(0)

0x5de: PushEmpty(bool, object)
0x5df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e0: Call2 0xd83

0x5e1: Pop(1)
0x5e2: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5e3: PushEmpty(object, object)
0x5e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e6: Call2 0xcfe

0x5e7: Pop(2)
0x5e8: PushEmpty(string)
0x5e9: Stack[-1] = "Neutral" // @poff=89
0x5ea: Call2 0x58a

0x5eb: Pop(1)
0x5ec: Push((int) 522127)
0x5ed: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5ee: Pop(1)
0x5ef: @@@ ClearReplies(); Obj=0 // @poff=116
0x5f0: Pop(0)
0x5f1: Push((int) 522128)
0x5f2: Push((int) -1)
0x5f3: Push((int) 23295)
0x5f4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5f5: Pop(3)
0x5f6: Push((int) 522844)
0x5f7: Push((int) -1)
0x5f8: Push((int) 24028)
0x5f9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5fa: Pop(3)
0x5fb: Return(); Pop(0)

0x5fc: PushEmpty(object, object)
0x5fd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ff: Call2 0xcfe

0x600: Pop(2)
0x601: PushEmpty(string)
0x602: Stack[-1] = "Neutral" // @poff=89
0x603: Call2 0x58a

0x604: Pop(1)
0x605: Push((int) 522125)
0x606: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x607: Pop(1)
0x608: @@@ ClearReplies(); Obj=0 // @poff=116
0x609: Pop(0)
0x60a: PushEmpty(bool, object)
0x60b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60c: Call2 0xd77

0x60d: Pop(1)
0x60e: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x60f: Push((int) 522848)
0x610: Push((int) 24033)
0x611: Push((int) 24032)
0x612: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x613: Pop(3)
0x614: Push((int) 522126)
0x615: Push((int) -1)
0x616: Push((int) 23293)
0x617: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x618: Pop(3)
0x619: Return(); Pop(0)

0x61a: Push((int) 24033)
0x61b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61c: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x61d: PushEmpty(string)
0x61e: Stack[-1] = "Neutral" // @poff=89
0x61f: Call2 0x58a

0x620: Pop(1)
0x621: Push((int) 522849)
0x622: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x623: Pop(1)
0x624: @@@ ClearReplies(); Obj=0 // @poff=116
0x625: Pop(0)
0x626: Push((int) 522850)
0x627: Push((int) 24035)
0x628: Push((int) 24034)
0x629: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62a: Pop(3)
0x62b: Return(); Pop(0)

0x62c: Push((int) 24035)
0x62d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x62f: PushEmpty(string)
0x630: Stack[-1] = "Neutral" // @poff=89
0x631: Call2 0x58a

0x632: Pop(1)
0x633: Push((int) 522851)
0x634: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x635: Pop(1)
0x636: @@@ ClearReplies(); Obj=0 // @poff=116
0x637: Pop(0)
0x638: Push((int) 522852)
0x639: Push((int) 24037)
0x63a: Push((int) 24036)
0x63b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x63c: Pop(3)
0x63d: Push((int) 540113)
0x63e: Push((int) -1)
0x63f: Push((int) 42080)
0x640: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x641: Pop(3)
0x642: Return(); Pop(0)

0x643: Push((int) 24037)
0x644: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x646: PushEmpty(string)
0x647: Stack[-1] = "Neutral" // @poff=89
0x648: Call2 0x58a

0x649: Pop(1)
0x64a: Push((int) 522853)
0x64b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x64c: Pop(1)
0x64d: @@@ ClearReplies(); Obj=0 // @poff=116
0x64e: Pop(0)
0x64f: Push((int) 522854)
0x650: Push((int) -1)
0x651: Push((int) 24038)
0x652: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x653: Pop(3)
0x654: Return(); Pop(0)

0x655: Push((int) 24011)
0x656: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x658: PushEmpty(string)
0x659: Stack[-1] = "Neutral" // @poff=89
0x65a: Call2 0x58a

0x65b: Pop(1)
0x65c: Push((int) 522828)
0x65d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x65e: Pop(1)
0x65f: @@@ ClearReplies(); Obj=0 // @poff=116
0x660: Pop(0)
0x661: Push((int) 522829)
0x662: Push((int) 24015)
0x663: Push((int) 24012)
0x664: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x665: Pop(3)
0x666: Push((int) 522830)
0x667: Push((int) 24014)
0x668: Push((int) 24013)
0x669: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x66a: Pop(3)
0x66b: Return(); Pop(0)

0x66c: Push((int) 24014)
0x66d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x66f: PushEmpty(string)
0x670: Stack[-1] = "Neutral" // @poff=89
0x671: Call2 0x58a

0x672: Pop(1)
0x673: Push((int) 522831)
0x674: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x675: Pop(1)
0x676: @@@ ClearReplies(); Obj=0 // @poff=116
0x677: Pop(0)
0x678: Push((int) 522839)
0x679: Push((int) 24019)
0x67a: Push((int) 24022)
0x67b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67c: Pop(3)
0x67d: Return(); Pop(0)

0x67e: Push((int) 24015)
0x67f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x680: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x681: PushEmpty(string)
0x682: Stack[-1] = "Neutral" // @poff=89
0x683: Call2 0x58a

0x684: Pop(1)
0x685: Push((int) 522832)
0x686: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x687: Pop(1)
0x688: @@@ ClearReplies(); Obj=0 // @poff=116
0x689: Pop(0)
0x68a: Push((int) 522833)
0x68b: Push((int) 24017)
0x68c: Push((int) 24016)
0x68d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x68e: Pop(3)
0x68f: Push((int) 522840)
0x690: Push((int) -1)
0x691: Push((int) 24024)
0x692: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x693: Pop(3)
0x694: Return(); Pop(0)

0x695: Push((int) 24017)
0x696: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x697: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x698: PushEmpty(string)
0x699: Stack[-1] = "Neutral" // @poff=89
0x69a: Call2 0x58a

0x69b: Pop(1)
0x69c: Push((int) 522834)
0x69d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x69e: Pop(1)
0x69f: @@@ ClearReplies(); Obj=0 // @poff=116
0x6a0: Pop(0)
0x6a1: Push((int) 522835)
0x6a2: Push((int) 24019)
0x6a3: Push((int) 24018)
0x6a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6a5: Pop(3)
0x6a6: Push((int) 522841)
0x6a7: Push((int) -1)
0x6a8: Push((int) 24025)
0x6a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6aa: Pop(3)
0x6ab: Return(); Pop(0)

0x6ac: Push((int) 24019)
0x6ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ae: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6af: PushEmpty(string)
0x6b0: Stack[-1] = "Neutral" // @poff=89
0x6b1: Call2 0x58a

0x6b2: Pop(1)
0x6b3: Push((int) 522836)
0x6b4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6b5: Pop(1)
0x6b6: @@@ ClearReplies(); Obj=0 // @poff=116
0x6b7: Pop(0)
0x6b8: Push((int) 522837)
0x6b9: Push((int) 24021)
0x6ba: Push((int) 24020)
0x6bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6bc: Pop(3)
0x6bd: Return(); Pop(0)

0x6be: Push((int) 24021)
0x6bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6c1: PushEmpty(string)
0x6c2: Stack[-1] = "Neutral" // @poff=89
0x6c3: Call2 0x58a

0x6c4: Pop(1)
0x6c5: Push((int) 522838)
0x6c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6c7: Pop(1)
0x6c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c9: Pop(0)
0x6ca: Push((int) 522843)
0x6cb: Push((int) -1)
0x6cc: Push((int) 24027)
0x6cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6ce: Pop(3)
0x6cf: Push((int) 522842)
0x6d0: Push((int) -1)
0x6d1: Push((int) 24026)
0x6d2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6d3: Pop(3)
0x6d4: Return(); Pop(0)

0x6d5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6d6: PushEmpty(bool)
0x6d7: Call2 0xce0

0x6d8: Pop(0)
0x6d9: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6da: @ lshStopAnimation()
0x6db: Pop(0)
0x6dc: GOTO 0x6df

0x6dd: @ StopAnimation()
0x6de: Pop(0)
0x6df: Return(); Pop(0)

0x6e0: GOTO 0x5a1

0x6e1: Return(); Pop(0)

0x6e2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6e3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6e4: PushEmpty(bool, object)
0x6e5: PushEmpty(object)
0x6e6: Call2 0xc83

0x6e7: Stack[-1] = Stack[-2]
0x6e8: Pop(1)
0x6e9: Call2 0xbd6

0x6ea: Pop(2)
0x6eb: PushEmpty(bool, object, float)
0x6ec: Stack[-12] = Stack[-2]
0x6ed: Stack[-1] = (float) 70.0
0x6ee: Call2 0xb81

0x6ef: Pop(2)
0x6f0: Pop(1); Push((bool) Stack[-1] == 0)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f2: Stack[-10] = (int) -2
0x6f3: Return(); Pop(8)

0x6f4: @ CreateDialog(Stack[-4])
0x6f5: Pop(0)
0x6f6: PushEmpty(int)
0x6f7: Call2 0xcda

0x6f8: Pop(0)
0x6f9: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x6fa: Pop(1)
0x6fb: PushEmpty(int)
0x6fc: Call2 0xcd8

0x6fd: Pop(0)
0x6fe: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x6ff: Pop(1)
0x700: PushEmpty(string)
0x701: Call2 0xcdc

0x702: Pop(0)
0x703: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x704: Pop(1)
0x705: PushEmpty(string)
0x706: Call2 0xcde

0x707: Pop(0)
0x708: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x709: Pop(1)
0x70a: PushEmpty(int)
0x70b: Call2 0xe1e

0x70c: Pop(0)
0x70d: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x70e: Pop(1)
0x70f: Stack[-2] = (int) -1
0x710: @ IsOverrideActive(Stack[-3])
0x711: Pop(0)
0x712: Push(Stack[-3])
0x713: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x714: Stack[-10] = (int) -2
0x715: Return(); Pop(8)

0x716: @ DoDialog(Stack[-4])
0x717: Pop(0)
0x718: PushEmpty(object, object)
0x719: Stack[-11] = Stack[-2]
0x71a: Stack[-6] = Stack[-1]
0x71b: Push(-2, 4); TaskCall(8)
0x71c: Call2 0x733

0x71d: Pop(-2, 4); TaskReturn
0x71e: Pop(2)
0x71f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x720: Pop(0)
0x721: Pop(0); Push((bool) Stack[-1] == 0)
0x722: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x723: @ sync()
0x724: Pop(0)
0x725: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x726: Pop(0)
0x727: GOTO 0x721

0x728: PushEmpty(object)
0x729: Stack[-10] = Stack[-1]
0x72a: Call2 0xbc5

0x72b: Pop(1)
0x72c: @ StopDialog(Stack[-4])
0x72d: Pop(0)
0x72e: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x72f: Pop(0)
0x730: Stack[-2] = Stack[-10]
0x731: Return(); Pop(8)

0x732: Stack[-4] = 0
0x733: PushEmpty()
0x734: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x735: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x736: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x737: Push((int) 1)
0x738: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x739: PushEmpty(string)
0x73a: Stack[-1] = "Neutral" // @poff=89
0x73b: Call2 0x7b0

0x73c: Pop(1)
0x73d: Push((int) 524719)
0x73e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x73f: Pop(1)
0x740: @@@ ClearReplies(); Obj=0 // @poff=116
0x741: Pop(0)
0x742: PushEmpty(bool)
0x743: Stack[-1] = (bool) 0
0x744: PushEmpty(bool)
0x745: Stack[-1] = (bool) 0
0x746: PushEmpty(bool, object)
0x747: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x748: Call2 0xd8d

0x749: Pop(1)
0x74a: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x74b: PushEmpty(bool, object)
0x74c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74d: Call2 0xd99

0x74e: Pop(1)
0x74f: Pop(1); Push((bool) Stack[-1] == 0)
0x750: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x751: Stack[-1] = (bool) 1
0x752: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x753: PushEmpty(bool, object)
0x754: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x755: Call2 0xda5

0x756: Pop(1)
0x757: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x758: Stack[-1] = (bool) 1
0x759: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75a: Push((int) 524720)
0x75b: Push((int) 32206)
0x75c: Push((int) 26059)
0x75d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x75e: Pop(3)
0x75f: PushEmpty(bool)
0x760: Stack[-1] = (bool) 0
0x761: PushEmpty(bool, object)
0x762: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x763: Call2 0xd99

0x764: Pop(1)
0x765: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x766: PushEmpty(bool, object)
0x767: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x768: Call2 0xd8d

0x769: Pop(1)
0x76a: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76b: Stack[-1] = (bool) 1
0x76c: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x76d: Push((int) 524724)
0x76e: Push((int) 32212)
0x76f: Push((int) 26063)
0x770: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x771: Pop(3)
0x772: PushEmpty(bool)
0x773: Stack[-1] = (bool) 0
0x774: PushEmpty(bool, object)
0x775: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x776: Call2 0xdc9

0x777: Pop(1)
0x778: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x779: PushEmpty(bool, object)
0x77a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77b: Call2 0xdd5

0x77c: Pop(1)
0x77d: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77e: Stack[-1] = (bool) 1
0x77f: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x780: Push((int) 530453)
0x781: Push((int) 32226)
0x782: Push((int) 31819)
0x783: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x784: Pop(3)
0x785: Push((int) 524721)
0x786: Push((int) -1)
0x787: Push((int) 26060)
0x788: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x789: Pop(3)
0x78a: Push((int) 530884)
0x78b: Push((int) -1)
0x78c: Push((int) 32205)
0x78d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x78e: Pop(3)
0x78f: GOTO 0x792

0x790: Return(); Pop(0)

0x791: GOTO 0x737

0x792: PushEmpty(bool)
0x793: Call2 0xce0

0x794: Pop(0)
0x795: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x796: @ lshWaitForAnimEnd()
0x797: Pop(0)
0x798: Push( Stack[3 + Tasks[-1].StackPointer] )
0x799: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x79a: GOTO 0x7a0

0x79b: PushEmpty(string)
0x79c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x79d: Call2 0xc60

0x79e: Pop(1)
0x79f: GOTO 0x796

0x7a0: GOTO 0x7af

0x7a1: Push("all") // @poff=138
0x7a2: Push("idle") // @poff=146
0x7a3: @ PlayAnimation(Stack[-2], Stack[-1])
0x7a4: Pop(2)
0x7a5: @ WaitForAnimEnd()
0x7a6: Pop(0)
0x7a7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7a8: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a9: GOTO 0x7af

0x7aa: Push("all") // @poff=138
0x7ab: Push("idle") // @poff=146
0x7ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x7ad: Pop(2)
0x7ae: GOTO 0x7a5

0x7af: Return(); Pop(0)

0x7b0: PushEmpty()
0x7b1: PushEmpty(bool)
0x7b2: Call2 0xce0

0x7b3: Pop(0)
0x7b4: Pop(1); Push((bool) Stack[-1] == 0)
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b6: Return(); Pop(0)

0x7b7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7b8: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b9: Return(); Pop(0)

0x7ba: PushEmpty(string, bool)
0x7bb: Stack[-3] = Stack[-2]
0x7bc: Push("") // @poff=102
0x7bd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7bf: Stack[-1] = (bool) 0
0x7c0: GOTO 0x7c2

0x7c1: Stack[-1] = (bool) 1
0x7c2: Call2 0xc67

0x7c3: Pop(2)
0x7c4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7c5: Return(); Pop(0)

0x7c6: PushEmpty()
0x7c7: Push((int) 1)
0x7c8: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x7c9: PushEmpty()
0x7ca: Call2 0xc7c

0x7cb: Pop(0)
0x7cc: Push((int) 26059)
0x7cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7cf: PushEmpty(object, object)
0x7d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7d2: Call2 0xd11

0x7d3: Pop(2)
0x7d4: Push((int) 26065)
0x7d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d6: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d7: PushEmpty(object, object)
0x7d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7da: Call2 0xd0a

0x7db: Pop(2)
0x7dc: Push((int) 31819)
0x7dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7df: PushEmpty(object, object)
0x7e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e2: Call2 0xd23

0x7e3: Pop(2)
0x7e4: Push((int) 31825)
0x7e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e6: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7e7: PushEmpty(object, object)
0x7e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ea: Call2 0xd39

0x7eb: Pop(2)
0x7ec: PushEmpty(object, object)
0x7ed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ef: Call2 0xd29

0x7f0: Pop(2)
0x7f1: Push((int) 26058)
0x7f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f3: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x7f4: PushEmpty(string)
0x7f5: Stack[-1] = "Neutral" // @poff=89
0x7f6: Call2 0x7b0

0x7f7: Pop(1)
0x7f8: Push((int) 524719)
0x7f9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7fa: Pop(1)
0x7fb: @@@ ClearReplies(); Obj=0 // @poff=116
0x7fc: Pop(0)
0x7fd: PushEmpty(bool)
0x7fe: Stack[-1] = (bool) 0
0x7ff: PushEmpty(bool)
0x800: Stack[-1] = (bool) 0
0x801: PushEmpty(bool, object)
0x802: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x803: Call2 0xd8d

0x804: Pop(1)
0x805: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x806: PushEmpty(bool, object)
0x807: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x808: Call2 0xd99

0x809: Pop(1)
0x80a: Pop(1); Push((bool) Stack[-1] == 0)
0x80b: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80c: Stack[-1] = (bool) 1
0x80d: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x80e: PushEmpty(bool, object)
0x80f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x810: Call2 0xda5

0x811: Pop(1)
0x812: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x813: Stack[-1] = (bool) 1
0x814: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x815: Push((int) 524720)
0x816: Push((int) 32206)
0x817: Push((int) 26059)
0x818: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x819: Pop(3)
0x81a: PushEmpty(bool)
0x81b: Stack[-1] = (bool) 0
0x81c: PushEmpty(bool, object)
0x81d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81e: Call2 0xd99

0x81f: Pop(1)
0x820: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x821: PushEmpty(bool, object)
0x822: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x823: Call2 0xd8d

0x824: Pop(1)
0x825: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x826: Stack[-1] = (bool) 1
0x827: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x828: Push((int) 524724)
0x829: Push((int) 32212)
0x82a: Push((int) 26063)
0x82b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x82c: Pop(3)
0x82d: PushEmpty(bool)
0x82e: Stack[-1] = (bool) 0
0x82f: PushEmpty(bool, object)
0x830: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x831: Call2 0xdc9

0x832: Pop(1)
0x833: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x834: PushEmpty(bool, object)
0x835: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x836: Call2 0xdd5

0x837: Pop(1)
0x838: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x839: Stack[-1] = (bool) 1
0x83a: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83b: Push((int) 530453)
0x83c: Push((int) 32226)
0x83d: Push((int) 31819)
0x83e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x83f: Pop(3)
0x840: Push((int) 524721)
0x841: Push((int) -1)
0x842: Push((int) 26060)
0x843: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x844: Pop(3)
0x845: Push((int) 530884)
0x846: Push((int) -1)
0x847: Push((int) 32205)
0x848: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x849: Pop(3)
0x84a: Return(); Pop(0)

0x84b: Push((int) 32226)
0x84c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84d: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x84e: PushEmpty(string)
0x84f: Stack[-1] = "Neutral" // @poff=89
0x850: Call2 0x7b0

0x851: Pop(1)
0x852: Push((int) 530902)
0x853: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x854: Pop(1)
0x855: @@@ ClearReplies(); Obj=0 // @poff=116
0x856: Pop(0)
0x857: Push((int) 530903)
0x858: Push((int) 32228)
0x859: Push((int) 32227)
0x85a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85b: Pop(3)
0x85c: Push((int) 530906)
0x85d: Push((int) 32228)
0x85e: Push((int) 32230)
0x85f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x860: Pop(3)
0x861: Return(); Pop(0)

0x862: Push((int) 32228)
0x863: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x864: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x865: PushEmpty(string)
0x866: Stack[-1] = "Neutral" // @poff=89
0x867: Call2 0x7b0

0x868: Pop(1)
0x869: Push((int) 530904)
0x86a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x86b: Pop(1)
0x86c: @@@ ClearReplies(); Obj=0 // @poff=116
0x86d: Pop(0)
0x86e: Push((int) 530905)
0x86f: Push((int) 31820)
0x870: Push((int) 32229)
0x871: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x872: Pop(3)
0x873: Push((int) 530907)
0x874: Push((int) 32233)
0x875: Push((int) 32232)
0x876: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x877: Pop(3)
0x878: Return(); Pop(0)

0x879: Push((int) 32233)
0x87a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x87b: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x87c: PushEmpty(string)
0x87d: Stack[-1] = "Neutral" // @poff=89
0x87e: Call2 0x7b0

0x87f: Pop(1)
0x880: Push((int) 530908)
0x881: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x882: Pop(1)
0x883: @@@ ClearReplies(); Obj=0 // @poff=116
0x884: Pop(0)
0x885: Push((int) 530909)
0x886: Push((int) -1)
0x887: Push((int) 32234)
0x888: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x889: Pop(3)
0x88a: Push((int) 530910)
0x88b: Push((int) -1)
0x88c: Push((int) 32235)
0x88d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x88e: Pop(3)
0x88f: Return(); Pop(0)

0x890: Push((int) 31820)
0x891: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x892: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x893: PushEmpty(string)
0x894: Stack[-1] = "Neutral" // @poff=89
0x895: Call2 0x7b0

0x896: Pop(1)
0x897: Push((int) 530454)
0x898: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x899: Pop(1)
0x89a: @@@ ClearReplies(); Obj=0 // @poff=116
0x89b: Pop(0)
0x89c: Push((int) 530455)
0x89d: Push((int) 31822)
0x89e: Push((int) 31821)
0x89f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8a0: Pop(3)
0x8a1: Push((int) 530911)
0x8a2: Push((int) 31822)
0x8a3: Push((int) 32236)
0x8a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8a5: Pop(3)
0x8a6: Return(); Pop(0)

0x8a7: Push((int) 31822)
0x8a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a9: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8aa: PushEmpty(string)
0x8ab: Stack[-1] = "Neutral" // @poff=89
0x8ac: Call2 0x7b0

0x8ad: Pop(1)
0x8ae: Push((int) 530456)
0x8af: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8b0: Pop(1)
0x8b1: @@@ ClearReplies(); Obj=0 // @poff=116
0x8b2: Pop(0)
0x8b3: Push((int) 530457)
0x8b4: Push((int) 31824)
0x8b5: Push((int) 31823)
0x8b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8b7: Pop(3)
0x8b8: Push((int) 530912)
0x8b9: Push((int) 32239)
0x8ba: Push((int) 32238)
0x8bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8bc: Pop(3)
0x8bd: Return(); Pop(0)

0x8be: Push((int) 32239)
0x8bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c0: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8c1: PushEmpty(string)
0x8c2: Stack[-1] = "Neutral" // @poff=89
0x8c3: Call2 0x7b0

0x8c4: Pop(1)
0x8c5: Push((int) 530913)
0x8c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8c7: Pop(1)
0x8c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x8c9: Pop(0)
0x8ca: Push((int) 530914)
0x8cb: Push((int) 31824)
0x8cc: Push((int) 32240)
0x8cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8ce: Pop(3)
0x8cf: Push((int) 530915)
0x8d0: Push((int) -1)
0x8d1: Push((int) 32241)
0x8d2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8d3: Pop(3)
0x8d4: Return(); Pop(0)

0x8d5: Push((int) 31824)
0x8d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d7: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8d8: PushEmpty(string)
0x8d9: Stack[-1] = "Neutral" // @poff=89
0x8da: Call2 0x7b0

0x8db: Pop(1)
0x8dc: Push((int) 530458)
0x8dd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8de: Pop(1)
0x8df: @@@ ClearReplies(); Obj=0 // @poff=116
0x8e0: Pop(0)
0x8e1: Push((int) 530459)
0x8e2: Push((int) -1)
0x8e3: Push((int) 31825)
0x8e4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8e5: Pop(3)
0x8e6: Return(); Pop(0)

0x8e7: Push((int) 32212)
0x8e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e9: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8ea: PushEmpty(string)
0x8eb: Stack[-1] = "Neutral" // @poff=89
0x8ec: Call2 0x7b0

0x8ed: Pop(1)
0x8ee: Push((int) 530891)
0x8ef: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8f0: Pop(1)
0x8f1: @@@ ClearReplies(); Obj=0 // @poff=116
0x8f2: Pop(0)
0x8f3: Push((int) 530892)
0x8f4: Push((int) 32215)
0x8f5: Push((int) 32213)
0x8f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f7: Pop(3)
0x8f8: Push((int) 530893)
0x8f9: Push((int) -1)
0x8fa: Push((int) 32214)
0x8fb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8fc: Pop(3)
0x8fd: Return(); Pop(0)

0x8fe: Push((int) 32215)
0x8ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x900: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x901: PushEmpty(string)
0x902: Stack[-1] = "Neutral" // @poff=89
0x903: Call2 0x7b0

0x904: Pop(1)
0x905: Push((int) 530894)
0x906: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x907: Pop(1)
0x908: @@@ ClearReplies(); Obj=0 // @poff=116
0x909: Pop(0)
0x90a: Push((int) 530896)
0x90b: Push((int) 32219)
0x90c: Push((int) 32217)
0x90d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x90e: Pop(3)
0x90f: Push((int) 530895)
0x910: Push((int) 32219)
0x911: Push((int) 32216)
0x912: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x913: Pop(3)
0x914: Push((int) 530897)
0x915: Push((int) 32219)
0x916: Push((int) 32218)
0x917: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x918: Pop(3)
0x919: Return(); Pop(0)

0x91a: Push((int) 32219)
0x91b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x91d: PushEmpty(string)
0x91e: Stack[-1] = "Neutral" // @poff=89
0x91f: Call2 0x7b0

0x920: Pop(1)
0x921: Push((int) 530898)
0x922: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x923: Pop(1)
0x924: @@@ ClearReplies(); Obj=0 // @poff=116
0x925: Pop(0)
0x926: Push((int) 530899)
0x927: Push((int) 26064)
0x928: Push((int) 32220)
0x929: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x92a: Pop(3)
0x92b: Push((int) 530901)
0x92c: Push((int) 26064)
0x92d: Push((int) 32224)
0x92e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x92f: Pop(3)
0x930: Return(); Pop(0)

0x931: Push((int) 26064)
0x932: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x933: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x934: PushEmpty(string)
0x935: Stack[-1] = "Neutral" // @poff=89
0x936: Call2 0x7b0

0x937: Pop(1)
0x938: Push((int) 524725)
0x939: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x93a: Pop(1)
0x93b: @@@ ClearReplies(); Obj=0 // @poff=116
0x93c: Pop(0)
0x93d: Push((int) 524726)
0x93e: Push((int) -1)
0x93f: Push((int) 26065)
0x940: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x941: Pop(3)
0x942: Return(); Pop(0)

0x943: Push((int) 32206)
0x944: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x945: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x946: PushEmpty(string)
0x947: Stack[-1] = "Neutral" // @poff=89
0x948: Call2 0x7b0

0x949: Pop(1)
0x94a: Push((int) 530885)
0x94b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x94c: Pop(1)
0x94d: @@@ ClearReplies(); Obj=0 // @poff=116
0x94e: Pop(0)
0x94f: Push((int) 530886)
0x950: Push((int) 32208)
0x951: Push((int) 32207)
0x952: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x953: Pop(3)
0x954: Return(); Pop(0)

0x955: Push((int) 32208)
0x956: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x957: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x958: PushEmpty(string)
0x959: Stack[-1] = "Neutral" // @poff=89
0x95a: Call2 0x7b0

0x95b: Pop(1)
0x95c: Push((int) 530887)
0x95d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x95e: Pop(1)
0x95f: @@@ ClearReplies(); Obj=0 // @poff=116
0x960: Pop(0)
0x961: Push((int) 530888)
0x962: Push((int) 26061)
0x963: Push((int) 32209)
0x964: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x965: Pop(3)
0x966: Push((int) 530889)
0x967: Push((int) -1)
0x968: Push((int) 32210)
0x969: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x96a: Pop(3)
0x96b: Return(); Pop(0)

0x96c: Push((int) 26061)
0x96d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96e: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x96f: PushEmpty(string)
0x970: Stack[-1] = "Neutral" // @poff=89
0x971: Call2 0x7b0

0x972: Pop(1)
0x973: Push((int) 524722)
0x974: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x975: Pop(1)
0x976: @@@ ClearReplies(); Obj=0 // @poff=116
0x977: Pop(0)
0x978: Push((int) 524723)
0x979: Push((int) -1)
0x97a: Push((int) 26062)
0x97b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x97c: Pop(3)
0x97d: Push((int) 530890)
0x97e: Push((int) -1)
0x97f: Push((int) 32211)
0x980: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x981: Pop(3)
0x982: Return(); Pop(0)

0x983: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x984: PushEmpty(bool)
0x985: Call2 0xce0

0x986: Pop(0)
0x987: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x988: @ lshStopAnimation()
0x989: Pop(0)
0x98a: GOTO 0x98d

0x98b: @ StopAnimation()
0x98c: Pop(0)
0x98d: Return(); Pop(0)

0x98e: GOTO 0x7c7

0x98f: Return(); Pop(0)

0x990: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x991: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x992: PushEmpty(bool, object)
0x993: PushEmpty(object)
0x994: Call2 0xc83

0x995: Stack[-1] = Stack[-2]
0x996: Pop(1)
0x997: Call2 0xbd6

0x998: Pop(2)
0x999: PushEmpty(bool, object, float)
0x99a: Stack[-12] = Stack[-2]
0x99b: Stack[-1] = (float) 70.0
0x99c: Call2 0xb81

0x99d: Pop(2)
0x99e: Pop(1); Push((bool) Stack[-1] == 0)
0x99f: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x9a0: Stack[-10] = (int) -2
0x9a1: Return(); Pop(8)

0x9a2: @ CreateDialog(Stack[-4])
0x9a3: Pop(0)
0x9a4: PushEmpty(int)
0x9a5: Call2 0xcda

0x9a6: Pop(0)
0x9a7: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x9a8: Pop(1)
0x9a9: PushEmpty(int)
0x9aa: Call2 0xcd8

0x9ab: Pop(0)
0x9ac: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x9ad: Pop(1)
0x9ae: PushEmpty(string)
0x9af: Call2 0xcdc

0x9b0: Pop(0)
0x9b1: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x9b2: Pop(1)
0x9b3: PushEmpty(string)
0x9b4: Call2 0xcde

0x9b5: Pop(0)
0x9b6: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x9b7: Pop(1)
0x9b8: PushEmpty(int)
0x9b9: Call2 0xe1e

0x9ba: Pop(0)
0x9bb: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x9bc: Pop(1)
0x9bd: Stack[-2] = (int) -1
0x9be: @ IsOverrideActive(Stack[-3])
0x9bf: Pop(0)
0x9c0: Push(Stack[-3])
0x9c1: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9c2: Stack[-10] = (int) -2
0x9c3: Return(); Pop(8)

0x9c4: @ DoDialog(Stack[-4])
0x9c5: Pop(0)
0x9c6: PushEmpty(object, object)
0x9c7: Stack[-11] = Stack[-2]
0x9c8: Stack[-6] = Stack[-1]
0x9c9: Push(-2, 4); TaskCall(10)
0x9ca: Call2 0x9e1

0x9cb: Pop(-2, 4); TaskReturn
0x9cc: Pop(2)
0x9cd: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x9ce: Pop(0)
0x9cf: Pop(0); Push((bool) Stack[-1] == 0)
0x9d0: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9d1: @ sync()
0x9d2: Pop(0)
0x9d3: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x9d4: Pop(0)
0x9d5: GOTO 0x9cf

0x9d6: PushEmpty(object)
0x9d7: Stack[-10] = Stack[-1]
0x9d8: Call2 0xbc5

0x9d9: Pop(1)
0x9da: @ StopDialog(Stack[-4])
0x9db: Pop(0)
0x9dc: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x9dd: Pop(0)
0x9de: Stack[-2] = Stack[-10]
0x9df: Return(); Pop(8)

0x9e0: Stack[-4] = 0
0x9e1: PushEmpty()
0x9e2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9e3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9e4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9e5: Push((int) 1)
0x9e6: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9e7: PushEmpty(string)
0x9e8: Stack[-1] = "Neutral" // @poff=89
0x9e9: Call2 0xa1b

0x9ea: Pop(1)
0x9eb: Push((int) 540554)
0x9ec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x9ed: Pop(1)
0x9ee: @@@ ClearReplies(); Obj=0 // @poff=116
0x9ef: Pop(0)
0x9f0: Push((int) 540555)
0x9f1: Push((int) -1)
0x9f2: Push((int) 42564)
0x9f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9f4: Pop(3)
0x9f5: Push((int) 540794)
0x9f6: Push((int) -1)
0x9f7: Push((int) 42843)
0x9f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9f9: Pop(3)
0x9fa: GOTO 0x9fd

0x9fb: Return(); Pop(0)

0x9fc: GOTO 0x9e5

0x9fd: PushEmpty(bool)
0x9fe: Call2 0xce0

0x9ff: Pop(0)
0xa00: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa01: @ lshWaitForAnimEnd()
0xa02: Pop(0)
0xa03: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa04: IF (Stack[-1] == 0) GOTO 0xa06; Pop(1)

0xa05: GOTO 0xa0b

0xa06: PushEmpty(string)
0xa07: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa08: Call2 0xc60

0xa09: Pop(1)
0xa0a: GOTO 0xa01

0xa0b: GOTO 0xa1a

0xa0c: Push("all") // @poff=138
0xa0d: Push("idle") // @poff=146
0xa0e: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0f: Pop(2)
0xa10: @ WaitForAnimEnd()
0xa11: Pop(0)
0xa12: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa13: IF (Stack[-1] == 0) GOTO 0xa15; Pop(1)

0xa14: GOTO 0xa1a

0xa15: Push("all") // @poff=138
0xa16: Push("idle") // @poff=146
0xa17: @ PlayAnimation(Stack[-2], Stack[-1])
0xa18: Pop(2)
0xa19: GOTO 0xa10

0xa1a: Return(); Pop(0)

0xa1b: PushEmpty()
0xa1c: PushEmpty(bool)
0xa1d: Call2 0xce0

0xa1e: Pop(0)
0xa1f: Pop(1); Push((bool) Stack[-1] == 0)
0xa20: IF (Stack[-1] == 0) GOTO 0xa22; Pop(1)

0xa21: Return(); Pop(0)

0xa22: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa23: IF (Stack[-1] == 0) GOTO 0xa25; Pop(1)

0xa24: Return(); Pop(0)

0xa25: PushEmpty(string, bool)
0xa26: Stack[-3] = Stack[-2]
0xa27: Push("") // @poff=102
0xa28: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa29: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa2a: Stack[-1] = (bool) 0
0xa2b: GOTO 0xa2d

0xa2c: Stack[-1] = (bool) 1
0xa2d: Call2 0xc67

0xa2e: Pop(2)
0xa2f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa30: Return(); Pop(0)

0xa31: PushEmpty()
0xa32: Push((int) 1)
0xa33: IF (Stack[-1] == 0) GOTO 0xa5a; Pop(1)

0xa34: PushEmpty()
0xa35: Call2 0xc7c

0xa36: Pop(0)
0xa37: Push((int) 42563)
0xa38: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa39: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa3a: PushEmpty(string)
0xa3b: Stack[-1] = "Neutral" // @poff=89
0xa3c: Call2 0xa1b

0xa3d: Pop(1)
0xa3e: Push((int) 540554)
0xa3f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa40: Pop(1)
0xa41: @@@ ClearReplies(); Obj=0 // @poff=116
0xa42: Pop(0)
0xa43: Push((int) 540555)
0xa44: Push((int) -1)
0xa45: Push((int) 42564)
0xa46: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa47: Pop(3)
0xa48: Push((int) 540794)
0xa49: Push((int) -1)
0xa4a: Push((int) 42843)
0xa4b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa4c: Pop(3)
0xa4d: Return(); Pop(0)

0xa4e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa4f: PushEmpty(bool)
0xa50: Call2 0xce0

0xa51: Pop(0)
0xa52: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa53: @ lshStopAnimation()
0xa54: Pop(0)
0xa55: GOTO 0xa58

0xa56: @ StopAnimation()
0xa57: Pop(0)
0xa58: Return(); Pop(0)

0xa59: GOTO 0xa32

0xa5a: Return(); Pop(0)

0xa5b: PushEmpty()
0xa5c: Call2 0xa5f

0xa5d: Pop(0)
0xa5e: Return(); Pop(0)

0xa5f: PushEmpty(bool)
0xa60: Call2 0xb7c

0xa61: Pop(0)
0xa62: Pop(1); Push((bool) Stack[-1] == 0)
0xa63: IF (Stack[-1] == 0) GOTO 0xa69; Pop(1)

0xa64: PushEmpty()
0xa65: Push(-0, 0); TaskCall(0)
0xa66: Call2 0x0

0xa67: Pop(-0, 0); TaskReturn
0xa68: Pop(0)
0xa69: PushEmpty()
0xa6a: Call2 0xadf

0xa6b: Pop(0)
0xa6c: @ GetDirection(Stack[-0]T)
0xa6d: Pop(0)
0xa6e: PushEmpty()
0xa6f: Call2 0xb15

0xa70: Pop(0)
0xa71: GOTO 0xa6e

0xa72: Return(); Pop(0)

0xa73: PushEmpty(object, object)
0xa74: Push("player") // @poff=156
0xa75: @ FindActor(Stack[-2], Stack[-1])
0xa76: Pop(1)
0xa77: Pop(0); Push((bool) Stack[-1] == 0)
0xa78: IF (Stack[-1] == 0) GOTO 0xa7b; Pop(1)

0xa79: Stack[-3] = (bool) 0
0xa7a: Return(); Pop(2)

0xa7b: PushEmpty(bool, object)
0xa7c: Stack[-3] = Stack[-1]
0xa7d: Call2 0xb73

0xa7e: Stack[-2] = Stack[-5]
0xa7f: Pop(2)
0xa80: Return(); Pop(2)

0xa81: Stack[-1] = 0
0xa82: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0xa83: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0xa84: @ RotateAsync(Stack[-2], Stack[-1])
0xa85: Pop(2)
0xa86: Return(); Pop(0)

0xa87: PushEmpty(object, bool, object, bool)
0xa88: Push("player") // @poff=156
0xa89: @ FindActor(Stack[-3], Stack[-1])
0xa8a: Pop(1)
0xa8b: Pop(0); Push((bool) Stack[-2] == 0)
0xa8c: IF (Stack[-1] == 0) GOTO 0xa8f; Pop(1)

0xa8d: Stack[-5] = (bool) 0
0xa8e: Return(); Pop(4)

0xa8f: PushEmpty(float, object)
0xa90: Stack[-4] = Stack[-1]
0xa91: Call2 0xb61

0xa92: Pop(1)
0xa93: Push((float)90000.0)
0xa94: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xa95: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa96: Stack[-5] = (bool) 0
0xa97: Return(); Pop(4)

0xa98: @ CanSee(Stack[-1], Stack[-2])
0xa99: Pop(0)
0xa9a: Stack[-1] = Stack[-5]
0xa9b: Return(); Pop(4)

0xa9c: Stack[-2] = 0
0xa9d: PushEmpty(float, float)
0xa9e: Push((int) 8)
0xa9f: Push((int) 16)
0xaa0: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xaa1: Pop(2)
0xaa2: Push((int) 10)
0xaa3: @ SetTimer(Stack[-1], Stack[-2])
0xaa4: Pop(1)
0xaa5: Return(); Pop(2)

0xaa6: Push((int) 10)
0xaa7: @ KillTimer(Stack[-1])
0xaa8: Pop(1)
0xaa9: Return(); Pop(0)

0xaaa: PushEmpty()
0xaab: Push((int) 10)
0xaac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaad: IF (Stack[-1] == 0) GOTO 0xacf; Pop(1)

0xaae: PushEmpty()
0xaaf: Call2 0xaa6

0xab0: Pop(0)
0xab1: PushEmpty(bool)
0xab2: Stack[-1] = (bool) 0
0xab3: PushEmpty(bool)
0xab4: Call2 0xb7c

0xab5: Pop(0)
0xab6: IF (Stack[-1] == 0) GOTO 0xabc; Pop(1)

0xab7: PushEmpty(bool)
0xab8: Call2 0xa87

0xab9: Pop(0)
0xaba: IF (Stack[-1] == 0) GOTO 0xabc; Pop(1)

0xabb: Stack[-1] = (bool) 1
0xabc: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xabd: PushEmpty(bool)
0xabe: Call2 0xa73

0xabf: Pop(0)
0xac0: IF (Stack[-1] == 0) GOTO 0xac8; Pop(1)

0xac1: PushEmpty(bool, object)
0xac2: PushEmpty(object)
0xac3: Call2 0xc83

0xac4: Stack[-1] = Stack[-2]
0xac5: Pop(1)
0xac6: Call2 0xc10

0xac7: Pop(2)
0xac8: GOTO 0xacf

0xac9: PushEmpty()
0xaca: Call2 0xa82

0xacb: Pop(0)
0xacc: PushEmpty()
0xacd: Call2 0xa9d

0xace: Pop(0)
0xacf: Return(); Pop(0)

0xad0: PushEmpty()
0xad1: Call2 0xb5c

0xad2: Pop(0)
0xad3: PushEmpty()
0xad4: Call2 0xaa6

0xad5: Pop(0)
0xad6: @ lshStopSpeech()
0xad7: Pop(0)
0xad8: @ lshStopAnimation()
0xad9: Pop(0)
0xada: @ StopAsync()
0xadb: Pop(0)
0xadc: @ Hold()
0xadd: Pop(0)
0xade: Return(); Pop(0)

0xadf: @ StopGroup0()
0xae0: Pop(0)
0xae1: PushEmpty()
0xae2: Call2 0xaa6

0xae3: Pop(0)
0xae4: PushEmpty(string)
0xae5: Stack[-1] = "Neutral" // @poff=89
0xae6: Call2 0xc60

0xae7: Pop(1)
0xae8: PushEmpty()
0xae9: Call2 0xa9d

0xaea: Pop(0)
0xaeb: Return(); Pop(0)

0xaec: PushEmpty()
0xaed: Push(Stack[-1])
0xaee: IF (Stack[-1] == 0) GOTO 0xaf3; Pop(1)

0xaef: PushEmpty()
0xaf0: Call2 0xa9d

0xaf1: Pop(0)
0xaf2: GOTO 0xaf7

0xaf3: PushEmpty(string)
0xaf4: Stack[-1] = "Neutral" // @poff=89
0xaf5: Call2 0xc60

0xaf6: Pop(1)
0xaf7: Return(); Pop(0)

0xaf8: PushEmpty(bool, bool)
0xaf9: @ IsOverrideActive(Stack[-1])
0xafa: Pop(0)
0xafb: Pop(0); Push((bool) Stack[-1] == 0)
0xafc: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xafd: EventDisable(0)
0xafe: PushEmpty()
0xaff: Call2 0xb5c

0xb00: Pop(0)
0xb01: PushEmpty(bool, object)
0xb02: Stack[-5] = Stack[-1]
0xb03: Call2 0xb73

0xb04: Pop(2)
0xb05: EventEnable(0)
0xb06: PushEmpty(object)
0xb07: Stack[-4] = Stack[-1]
0xb08: Call2 0xe2f

0xb09: Pop(1)
0xb0a: PushEmpty(string)
0xb0b: Stack[-1] = "Neutral" // @poff=89
0xb0c: Call2 0xc60

0xb0d: Pop(1)
0xb0e: PushEmpty()
0xb0f: Call2 0xaa6

0xb10: Pop(0)
0xb11: PushEmpty()
0xb12: Call2 0xa9d

0xb13: Pop(0)
0xb14: Return(); Pop(2)

0xb15: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xb16: @ WaitForAnimEnd()
0xb17: Pop(0)
0xb18: PushEmpty(bool)
0xb19: Call2 0xb7c

0xb1a: Pop(0)
0xb1b: Pop(1); Push((bool) Stack[-1] == 0)
0xb1c: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb1d: Return(); Pop(12)

0xb1e: PushEmpty(int)
0xb1f: Call2 0xcc7

0xb20: Stack[-1] = Stack[-7]
0xb21: Pop(1)
0xb22: Stack[-5] = (int) 0
0xb23: PushEmpty(bool)
0xb24: Stack[-1] = (bool) 0
0xb25: Push((int) 5)
0xb26: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xb27: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb28: PushEmpty(bool)
0xb29: Call2 0xb7c

0xb2a: Pop(0)
0xb2b: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb2c: Stack[-1] = (bool) 1
0xb2d: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb2e: Pop(0); Push((bool) Stack[-6] == 0)
0xb2f: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xb30: Push((int) 3)
0xb31: @ Sleep(Stack[-1], Stack[-5])
0xb32: Pop(1)
0xb33: Pop(0); Push((bool) Stack[-4] == 0)
0xb34: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb35: GOTO 0xb57

0xb36: GOTO 0xb4c

0xb37: @ irand(Stack[-3], Stack[-6])
0xb38: Pop(0)
0xb39: Push((int) 5)
0xb3a: @ irand(Stack[-3], Stack[-1])
0xb3b: Pop(1)
0xb3c: Push((int) 0)
0xb3d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xb3e: IF (Stack[-1] == 0) GOTO 0xb40; Pop(1)

0xb3f: Stack[-3] = (int) 0
0xb40: Push("all") // @poff=138
0xb41: PushEmpty(string, int)
0xb42: Stack[-6] = Stack[-1]
0xb43: Call2 0xcc0

0xb44: Pop(1)
0xb45: @ PlayAnimation(Stack[-2], Stack[-1])
0xb46: Pop(2)
0xb47: @ WaitForAnimEnd(Stack[-1])
0xb48: Pop(0)
0xb49: Pop(0); Push((bool) Stack[-1] == 0)
0xb4a: IF (Stack[-1] == 0) GOTO 0xb4c; Pop(1)

0xb4b: GOTO 0xb57

0xb4c: PushEmpty(bool)
0xb4d: Call2 0xb5a

0xb4e: Pop(0)
0xb4f: Pop(1); Push((bool) Stack[-1] == 0)
0xb50: IF (Stack[-1] == 0) GOTO 0xb52; Pop(1)

0xb51: GOTO 0xb57

0xb52: @ ResetAAS()
0xb53: Pop(0)
0xb54: Push((int) 1)
0xb55: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xb56: GOTO 0xb23

0xb57: @ ResetAAS()
0xb58: Pop(0)
0xb59: Return(); Pop(12)

0xb5a: Stack[-1] = (bool) 1
0xb5b: Return(); Pop(0)

0xb5c: @ StopAnimation()
0xb5d: Pop(0)
0xb5e: @ StopGroup0()
0xb5f: Pop(0)
0xb60: Return(); Pop(0)

0xb61: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xb62: @ GetPosition(Stack[-3])
0xb63: Pop(0)
0xb64: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0xb65: Pop(0)
0xb66: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xb67: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xb68: Return(); Pop(6)

0xb69: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xb6a: @ GetPosition(Stack[-3])
0xb6b: Pop(0)
0xb6c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xb6d: Push(CvectorIndex(Stack[-2], 0))
0xb6e: Push(CvectorIndex(Stack[-3], 2))
0xb6f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xb70: Pop(2)
0xb71: Stack[-1] = Stack[-8]
0xb72: Return(); Pop(6)

0xb73: PushEmpty(cvector, cvector)
0xb74: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0xb75: Pop(0)
0xb76: PushEmpty(bool, cvector)
0xb77: Stack[-3] = Stack[-1]
0xb78: Call2 0xb69

0xb79: Stack[-2] = Stack[-6]
0xb7a: Pop(2)
0xb7b: Return(); Pop(2)

0xb7c: PushEmpty(bool, bool)
0xb7d: @ IsLoaded(Stack[-1])
0xb7e: Pop(0)
0xb7f: Stack[-1] = Stack[-3]
0xb80: Return(); Pop(2)

0xb81: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xb82: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0xb83: Pop(0)
0xb84: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0xb85: Pop(0)
0xb86: Push(CvectorIndex(Stack[-8], 1))
0xb87: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb88: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xb89: @ GetPosition(Stack[-7])
0xb8a: Pop(0)
0xb8b: @ GetEyesHeight(Stack[-9])
0xb8c: Pop(0)
0xb8d: Push(CvectorIndex(Stack[-7], 1))
0xb8e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb8f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xb90: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xb91: Push(CvectorIndex(Stack[-6], 1))
0xb92: Stack[-1] = (int) 0
0xb93: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xb94: Pop(0); Push(Stack[-6] | Stack[-6]);
0xb95: Pop(1); Push(Sqrt(Stack[-1]))
0xb96: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xb97: Stack[-5] = -Stack[-6]; Pop(0);
0xb98: Pop(0); Push(Stack[-6] * Stack[-19]);
0xb99: PushEmpty(cvector, cvector)
0xb9a: Push([0.0, 1.0, 0.0])
0xb9b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xb9c: Call2 0xc89

0xb9d: Pop(1)
0xb9e: Push((int) 25)
0xb9f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xba0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xba1: Push([0.0, 10.0, 0.0])
0xba2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xba3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xba4: @ IsOverrideActive(Stack[-2])
0xba5: Pop(0)
0xba6: Push(Stack[-2])
0xba7: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xba8: Stack[-21] = (bool) 0
0xba9: Return(); Pop(18)

0xbaa: @ StopWorld()
0xbab: Pop(0)
0xbac: @ CameraTransit(Stack[-3], Stack[-5])
0xbad: Pop(0)
0xbae: Push(CvectorIndex(Stack[-4], 0))
0xbaf: Push(CvectorIndex(Stack[-5], 2))
0xbb0: @ Rotate(Stack[-2], Stack[-1])
0xbb1: Pop(2)
0xbb2: PushEmpty(bool)
0xbb3: Call2 0xce0

0xbb4: Pop(0)
0xbb5: IF (Stack[-1] == 0) GOTO 0xbb7; Pop(1)

0xbb6: GOTO 0xbbf

0xbb7: Push("head") // @poff=196
0xbb8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbb9: Pop(1)
0xbba: Push(Stack[-1])
0xbbb: IF (Stack[-1] == 0) GOTO 0xbbf; Pop(1)

0xbbc: Push("head") // @poff=196
0xbbd: @ LookAsyncCamera(Stack[-1])
0xbbe: Pop(1)
0xbbf: @ CameraWaitForPlayFinish()
0xbc0: Pop(0)
0xbc1: @ ResumeWorld()
0xbc2: Pop(0)
0xbc3: Stack[-21] = (bool) 1
0xbc4: Return(); Pop(18)

0xbc5: PushEmpty(bool, bool)
0xbc6: @ CameraSwitchToNormal()
0xbc7: Pop(0)
0xbc8: PushEmpty(bool)
0xbc9: Call2 0xce0

0xbca: Pop(0)
0xbcb: IF (Stack[-1] == 0) GOTO 0xbcd; Pop(1)

0xbcc: GOTO 0xbd5

0xbcd: Push("head") // @poff=196
0xbce: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbcf: Pop(1)
0xbd0: Push(Stack[-1])
0xbd1: IF (Stack[-1] == 0) GOTO 0xbd5; Pop(1)

0xbd2: Push("head") // @poff=196
0xbd3: @ UnlookAsync(Stack[-1])
0xbd4: Pop(1)
0xbd5: Return(); Pop(2)

0xbd6: PushEmpty(int, int, int, int)
0xbd7: Push("voice_common") // @poff=206
0xbd8: @ GetVariable(Stack[-1], Stack[-3])
0xbd9: Pop(1)
0xbda: Push(Stack[-2])
0xbdb: IF (Stack[-1] == 0) GOTO 0xbfc; Pop(1)

0xbdc: PushEmpty(bool, object)
0xbdd: Stack[-7] = Stack[-1]
0xbde: Call2 0xc10

0xbdf: Pop(1)
0xbe0: Pop(1); Push((bool) Stack[-1] == 0)
0xbe1: IF (Stack[-1] == 0) GOTO 0xbea; Pop(1)

0xbe2: PushEmpty(bool, object)
0xbe3: Stack[-7] = Stack[-1]
0xbe4: Call2 0xc35

0xbe5: Pop(1)
0xbe6: Pop(1); Push((bool) Stack[-1] == 0)
0xbe7: IF (Stack[-1] == 0) GOTO 0xbea; Pop(1)

0xbe8: Stack[-6] = (bool) 0
0xbe9: Return(); Pop(4)

0xbea: Push((int) 2)
0xbeb: @ irand(Stack[-2], Stack[-1])
0xbec: Pop(1)
0xbed: Push(Stack[-1])
0xbee: IF (Stack[-1] == 0) GOTO 0xbf7; Pop(1)

0xbef: Push("voice_common") // @poff=206
0xbf0: Push((int) 1)
0xbf1: Pop(1); Push(Stack[-4] + Stack[-1]);
0xbf2: Push((int) 3)
0xbf3: Pop(2); Push(Stack[-2] % Stack[-1]);
0xbf4: @ SetVariable(Stack[-2], Stack[-1])
0xbf5: Pop(2)
0xbf6: GOTO 0xbfb

0xbf7: Push("voice_common") // @poff=206
0xbf8: Push((int) 0)
0xbf9: @ SetVariable(Stack[-2], Stack[-1])
0xbfa: Pop(2)
0xbfb: GOTO 0xc0e

0xbfc: PushEmpty(bool, object)
0xbfd: Stack[-7] = Stack[-1]
0xbfe: Call2 0xc35

0xbff: Pop(1)
0xc00: Pop(1); Push((bool) Stack[-1] == 0)
0xc01: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc02: PushEmpty(bool, object)
0xc03: Stack[-7] = Stack[-1]
0xc04: Call2 0xc10

0xc05: Pop(1)
0xc06: Pop(1); Push((bool) Stack[-1] == 0)
0xc07: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc08: Stack[-6] = (bool) 0
0xc09: Return(); Pop(4)

0xc0a: Push("voice_common") // @poff=206
0xc0b: Push((int) 1)
0xc0c: @ SetVariable(Stack[-2], Stack[-1])
0xc0d: Pop(2)
0xc0e: Stack[-6] = (bool) 1
0xc0f: Return(); Pop(4)

0xc10: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc11: Stack[-5] = "c" // @poff=232
0xc12: Stack[-4] = (int) 0
0xc13: Push((int) 1)
0xc14: IF (Stack[-1] == 0) GOTO 0xc20; Pop(1)

0xc15: Push((int) 1)
0xc16: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc17: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc18: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0xc19: Pop(1)
0xc1a: Pop(0); Push((bool) Stack[-3] == 0)
0xc1b: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc1c: GOTO 0xc20

0xc1d: Push((int) 1)
0xc1e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc1f: GOTO 0xc13

0xc20: Pop(0); Push((bool) Stack[-4] == 0)
0xc21: IF (Stack[-1] == 0) GOTO 0xc24; Pop(1)

0xc22: Stack[-12] = (bool) 0
0xc23: Return(); Pop(10)

0xc24: Stack[-2] = (int) 0
0xc25: Push((int) 1)
0xc26: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc27: IF (Stack[-1] == 0) GOTO 0xc2a; Pop(1)

0xc28: @ irand(Stack[-2], Stack[-4])
0xc29: Pop(0)
0xc2a: Push((int) 1)
0xc2b: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc2c: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc2d: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0xc2e: Pop(1)
0xc2f: PushEmpty(bool, string)
0xc30: Stack[-3] = Stack[-1]
0xc31: Call2 0xc6d

0xc32: Stack[-2] = Stack[-14]
0xc33: Pop(2)
0xc34: Return(); Pop(10)

0xc35: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc36: Push("d") // @poff=202
0xc37: PushEmpty(int)
0xc38: Call2 0xca9

0xc39: Pop(0)
0xc3a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc3b: Push("m") // @poff=260
0xc3c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xc3d: Stack[-4] = (int) 0
0xc3e: Push((int) 1)
0xc3f: IF (Stack[-1] == 0) GOTO 0xc4b; Pop(1)

0xc40: Push((int) 1)
0xc41: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc42: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc43: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0xc44: Pop(1)
0xc45: Pop(0); Push((bool) Stack[-3] == 0)
0xc46: IF (Stack[-1] == 0) GOTO 0xc48; Pop(1)

0xc47: GOTO 0xc4b

0xc48: Push((int) 1)
0xc49: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc4a: GOTO 0xc3e

0xc4b: Pop(0); Push((bool) Stack[-4] == 0)
0xc4c: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc4d: Stack[-12] = (bool) 0
0xc4e: Return(); Pop(10)

0xc4f: Stack[-2] = (int) 0
0xc50: Push((int) 1)
0xc51: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc52: IF (Stack[-1] == 0) GOTO 0xc55; Pop(1)

0xc53: @ irand(Stack[-2], Stack[-4])
0xc54: Pop(0)
0xc55: Push((int) 1)
0xc56: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc57: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc58: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0xc59: Pop(1)
0xc5a: PushEmpty(bool, string)
0xc5b: Stack[-3] = Stack[-1]
0xc5c: Call2 0xc6d

0xc5d: Stack[-2] = Stack[-14]
0xc5e: Pop(2)
0xc5f: Return(); Pop(10)

0xc60: PushEmpty(float, float, float, float)
0xc61: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xc62: Pop(0)
0xc63: Push((bool) 0)
0xc64: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc65: Pop(1)
0xc66: Return(); Pop(4)

0xc67: PushEmpty(float, float, float, float)
0xc68: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0xc69: Pop(0)
0xc6a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0xc6b: Pop(0)
0xc6c: Return(); Pop(4)

0xc6d: PushEmpty(bool, bool)
0xc6e: PushEmpty(bool)
0xc6f: Call2 0xce0

0xc70: Pop(0)
0xc71: IF (Stack[-1] == 0) GOTO 0xc7a; Pop(1)

0xc72: @ lshHasSpeech(Stack[-1], Stack[-3])
0xc73: Pop(0)
0xc74: Push(Stack[-1])
0xc75: IF (Stack[-1] == 0) GOTO 0xc7a; Pop(1)

0xc76: @ lshPlaySpeech(Stack[-3])
0xc77: Pop(0)
0xc78: Stack[-4] = (bool) 1
0xc79: Return(); Pop(2)

0xc7a: Stack[-4] = (bool) 0
0xc7b: Return(); Pop(2)

0xc7c: PushEmpty(bool)
0xc7d: Call2 0xce0

0xc7e: Pop(0)
0xc7f: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc80: @ lshStopSpeech()
0xc81: Pop(0)
0xc82: Return(); Pop(0)

0xc83: PushEmpty(object, object)
0xc84: @ self(Stack[-1])
0xc85: Pop(0)
0xc86: Stack[-1] = Stack[-3]
0xc87: Return(); Pop(2)

0xc88: Stack[-1] = 0
0xc89: PushEmpty(float, float)
0xc8a: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc8b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xc8c: Push((float)9.999999974752427e-07)
0xc8d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc8e: IF (Stack[-1] == 0) GOTO 0xc91; Pop(1)

0xc8f: Stack[-4] = [0.0, 0.0, 0.0]
0xc90: Return(); Pop(2)

0xc91: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xc92: Return(); Pop(2)

0xc93: PushEmpty(int, int)
0xc94: @ GetVariable(Stack[-3], Stack[-1])
0xc95: Pop(0)
0xc96: Stack[-1] = Stack[-4]
0xc97: Return(); Pop(2)

0xc98: PushEmpty(object, object)
0xc99: @ FindActor(Stack[-1], Stack[-4])
0xc9a: Pop(0)
0xc9b: Pop(0); PushNull((bool) Stack[-1] == 0)
0xc9c: IF (Stack[-1] == 0) GOTO 0xc9f; Pop(1)

0xc9d: Stack[-5] = (bool) 0
0xc9e: Return(); Pop(2)

0xc9f: @ Trigger(Stack[-1], Stack[-3])
0xca0: Pop(0)
0xca1: Stack[-5] = (bool) 1
0xca2: Return(); Pop(2)

0xca3: Stack[-1] = 0
0xca4: PushEmpty(float, float)
0xca5: @ GetGameTime(Stack[-1])
0xca6: Pop(0)
0xca7: Stack[-1] = Stack[-3]
0xca8: Return(); Pop(2)

0xca9: PushEmpty(float, float)
0xcaa: @ GetGameTime(Stack[-1])
0xcab: Pop(0)
0xcac: Push((int) 1)
0xcad: PushEmpty(int)
0xcae: Push((int) 24)
0xcaf: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xcb0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xcb1: Return(); Pop(2)

0xcb2: PushEmpty(float, float)
0xcb3: @ GetGameTime(Stack[-1])
0xcb4: Pop(0)
0xcb5: PushEmpty(int)
0xcb6: Stack[-2] = Stack[-1]
0xcb7: Push((int) 24)
0xcb8: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xcb9: Return(); Pop(2)

0xcba: PushEmpty()
0xcbb: PushEmpty(int)
0xcbc: Call2 0xca9

0xcbd: Pop(0)
0xcbe: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xcbf: Return(); Pop(0)

0xcc0: PushEmpty(string, string)
0xcc1: Stack[-1] = "idle" // @poff=146
0xcc2: Push(Stack[-3])
0xcc3: IF (Stack[-1] == 0) GOTO 0xcc5; Pop(1)

0xcc4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xcc5: Stack[-1] = Stack[-4]
0xcc6: Return(); Pop(2)

0xcc7: PushEmpty(int, bool, int, bool)
0xcc8: Stack[-2] = (int) 0
0xcc9: Push("all") // @poff=138
0xcca: PushEmpty(string, int)
0xccb: Stack[-5] = Stack[-1]
0xccc: Call2 0xcc0

0xccd: Pop(1)
0xcce: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xccf: Pop(2)
0xcd0: Pop(0); Push((bool) Stack[-1] == 0)
0xcd1: IF (Stack[-1] == 0) GOTO 0xcd3; Pop(1)

0xcd2: GOTO 0xcd6

0xcd3: Push((int) 1)
0xcd4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xcd5: GOTO 0xcc9

0xcd6: Stack[-2] = Stack[-5]
0xcd7: Return(); Pop(4)

0xcd8: Stack[-1] = (int) 515532
0xcd9: Return(); Pop(0)

0xcda: Stack[-1] = (int) 514840
0xcdb: Return(); Pop(0)

0xcdc: Stack[-1] = "ui/NPC_Block.png" // @poff=264
0xcdd: Return(); Pop(0)

0xcde: Stack[-1] = "ui/NPC_Block_b.png" // @poff=298
0xcdf: Return(); Pop(0)

0xce0: Stack[-1] = (bool) 1
0xce1: Return(); Pop(0)

0xce2: PushEmpty()
0xce3: PushEmpty(object, string, float)
0xce4: PushEmpty(object)
0xce5: Call2 0xdec

0xce6: Stack[-1] = Stack[-4]
0xce7: Pop(1)
0xce8: Stack[-2] = "pt_map_starshina" // @poff=336
0xce9: Stack[-1] = (int) 2
0xcea: Call2 0xdfd

0xceb: Pop(3)
0xcec: PushEmpty(object)
0xced: Call2 0xdec

0xcee: Pop(0)
0xcef: @@ ShowMap(Stack[-1]); Obj=2 // @poff=370
0xcf0: Pop(1)
0xcf1: Return(); Pop(0)

0xcf2: PushEmpty()
0xcf3: Push("oob9Block1") // @poff=378
0xcf4: Push((int) 1)
0xcf5: @ SetVariable(Stack[-2], Stack[-1])
0xcf6: Pop(2)
0xcf7: Return(); Pop(0)

0xcf8: PushEmpty()
0xcf9: Push("oob12Block1") // @poff=400
0xcfa: Push((int) 1)
0xcfb: @ SetVariable(Stack[-2], Stack[-1])
0xcfc: Pop(2)
0xcfd: Return(); Pop(0)

0xcfe: PushEmpty()
0xcff: Push("b12q01BlockVisit") // @poff=424
0xd00: Push((int) 1)
0xd01: @ SetVariable(Stack[-2], Stack[-1])
0xd02: Pop(2)
0xd03: Return(); Pop(0)

0xd04: PushEmpty()
0xd05: Push("oob12Block2") // @poff=458
0xd06: Push((int) 1)
0xd07: @ SetVariable(Stack[-2], Stack[-1])
0xd08: Pop(2)
0xd09: Return(); Pop(0)

0xd0a: PushEmpty()
0xd0b: PushEmpty(bool, string, string)
0xd0c: Stack[-2] = "quest_b10_02" // @poff=482
0xd0d: Stack[-1] = "completed" // @poff=508
0xd0e: Call2 0xc98

0xd0f: Pop(3)
0xd10: Return(); Pop(0)

0xd11: PushEmpty()
0xd12: Push("oob10Block1") // @poff=528
0xd13: Push((int) 1)
0xd14: @ SetVariable(Stack[-2], Stack[-1])
0xd15: Pop(2)
0xd16: Return(); Pop(0)

0xd17: PushEmpty()
0xd18: Push("oob9Block2") // @poff=552
0xd19: Push((int) 1)
0xd1a: @ SetVariable(Stack[-2], Stack[-1])
0xd1b: Pop(2)
0xd1c: Return(); Pop(0)

0xd1d: PushEmpty()
0xd1e: Push("oob9Block3") // @poff=574
0xd1f: Push((int) 1)
0xd20: @ SetVariable(Stack[-2], Stack[-1])
0xd21: Pop(2)
0xd22: Return(); Pop(0)

0xd23: PushEmpty()
0xd24: Push("oob10Block2") // @poff=596
0xd25: Push((int) 1)
0xd26: @ SetVariable(Stack[-2], Stack[-1])
0xd27: Pop(2)
0xd28: Return(); Pop(0)

0xd29: PushEmpty()
0xd2a: PushEmpty(object, string, float)
0xd2b: PushEmpty(object)
0xd2c: Call2 0xdec

0xd2d: Stack[-1] = Stack[-4]
0xd2e: Pop(1)
0xd2f: Stack[-2] = "pt_gmap_vagon_army" // @poff=620
0xd30: Stack[-1] = (int) 2
0xd31: Call2 0xdfd

0xd32: Pop(3)
0xd33: PushEmpty(object)
0xd34: Call2 0xdec

0xd35: Pop(0)
0xd36: @@ ShowMap(Stack[-1]); Obj=2 // @poff=370
0xd37: Pop(1)
0xd38: Return(); Pop(0)

0xd39: PushEmpty(object, object)
0xd3a: PushEmpty(object)
0xd3b: Call2 0xdec

0xd3c: Stack[-1] = Stack[-2]
0xd3d: Pop(1)
0xd3e: Push("b10q04BlockGotoOfficer") // @poff=658
0xd3f: Push("pt_gmap_vagon_army") // @poff=620
0xd40: Push((int) 0)
0xd41: Push((int) 530547)
0xd42: PushEmpty(float)
0xd43: Call2 0xca4

0xd44: Pop(0)
0xd45: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=704
0xd46: Pop(5)
0xd47: Return(); Pop(2)

0xd48: Stack[-1] = 0
0xd49: PushEmpty()
0xd4a: Push("b9BlockVisit") // @poff=712
0xd4b: Push((int) 1)
0xd4c: @ SetVariable(Stack[-2], Stack[-1])
0xd4d: Pop(2)
0xd4e: Return(); Pop(0)

0xd4f: PushEmpty(object, object)
0xd50: PushEmpty(object)
0xd51: Call2 0xdec

0xd52: Stack[-1] = Stack[-2]
0xd53: Pop(1)
0xd54: Push("b9q01BlockGotoBoiny") // @poff=738
0xd55: Push("pt_map_starshina") // @poff=336
0xd56: Push((int) 3)
0xd57: Push((int) 531550)
0xd58: PushEmpty(float)
0xd59: Call2 0xca4

0xd5a: Pop(0)
0xd5b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=704
0xd5c: Pop(5)
0xd5d: Return(); Pop(2)

0xd5e: Stack[-1] = 0
0xd5f: PushEmpty()
0xd60: PushEmpty(int, string)
0xd61: Stack[-1] = "oob9Block1" // @poff=378
0xd62: Call2 0xc93

0xd63: Pop(1)
0xd64: Push((int) 0)
0xd65: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd66: IF (Stack[-1] == 0) GOTO 0xd69; Pop(1)

0xd67: Stack[-2] = (bool) 1
0xd68: Return(); Pop(0)

0xd69: Stack[-2] = (bool) 0
0xd6a: Return(); Pop(0)

0xd6b: PushEmpty()
0xd6c: PushEmpty(int, string)
0xd6d: Stack[-1] = "oob12Block1" // @poff=400
0xd6e: Call2 0xc93

0xd6f: Pop(1)
0xd70: Push((int) 0)
0xd71: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd72: IF (Stack[-1] == 0) GOTO 0xd75; Pop(1)

0xd73: Stack[-2] = (bool) 1
0xd74: Return(); Pop(0)

0xd75: Stack[-2] = (bool) 0
0xd76: Return(); Pop(0)

0xd77: PushEmpty()
0xd78: PushEmpty(int, string)
0xd79: Stack[-1] = "oob12Block2" // @poff=458
0xd7a: Call2 0xc93

0xd7b: Pop(1)
0xd7c: Push((int) 0)
0xd7d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd7e: IF (Stack[-1] == 0) GOTO 0xd81; Pop(1)

0xd7f: Stack[-2] = (bool) 1
0xd80: Return(); Pop(0)

0xd81: Stack[-2] = (bool) 0
0xd82: Return(); Pop(0)

0xd83: PushEmpty()
0xd84: PushEmpty(bool, object)
0xd85: Stack[-3] = Stack[-1]
0xd86: Call2 0xde1

0xd87: Pop(1)
0xd88: IF (Stack[-1] == 0) GOTO 0xd8b; Pop(1)

0xd89: Stack[-2] = (bool) 1
0xd8a: Return(); Pop(0)

0xd8b: Stack[-2] = (bool) 0
0xd8c: Return(); Pop(0)

0xd8d: PushEmpty()
0xd8e: PushEmpty(int, string)
0xd8f: Stack[-1] = "b10q02" // @poff=778
0xd90: Call2 0xc93

0xd91: Pop(1)
0xd92: Push((int) 3)
0xd93: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd94: IF (Stack[-1] == 0) GOTO 0xd97; Pop(1)

0xd95: Stack[-2] = (bool) 1
0xd96: Return(); Pop(0)

0xd97: Stack[-2] = (bool) 0
0xd98: Return(); Pop(0)

0xd99: PushEmpty()
0xd9a: PushEmpty(int, string)
0xd9b: Stack[-1] = "b10q02Cutscene" // @poff=792
0xd9c: Call2 0xc93

0xd9d: Pop(1)
0xd9e: Push((int) 0)
0xd9f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xda0: IF (Stack[-1] == 0) GOTO 0xda3; Pop(1)

0xda1: Stack[-2] = (bool) 1
0xda2: Return(); Pop(0)

0xda3: Stack[-2] = (bool) 0
0xda4: Return(); Pop(0)

0xda5: PushEmpty()
0xda6: PushEmpty(int, string)
0xda7: Stack[-1] = "oob10Block1" // @poff=528
0xda8: Call2 0xc93

0xda9: Pop(1)
0xdaa: Push((int) 0)
0xdab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdac: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xdad: Stack[-2] = (bool) 1
0xdae: Return(); Pop(0)

0xdaf: Stack[-2] = (bool) 0
0xdb0: Return(); Pop(0)

0xdb1: PushEmpty()
0xdb2: PushEmpty(int, string)
0xdb3: Stack[-1] = "oob9Block2" // @poff=552
0xdb4: Call2 0xc93

0xdb5: Pop(1)
0xdb6: Push((int) 0)
0xdb7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdb8: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdb9: Stack[-2] = (bool) 1
0xdba: Return(); Pop(0)

0xdbb: Stack[-2] = (bool) 0
0xdbc: Return(); Pop(0)

0xdbd: PushEmpty()
0xdbe: PushEmpty(int, string)
0xdbf: Stack[-1] = "oob9Block3" // @poff=574
0xdc0: Call2 0xc93

0xdc1: Pop(1)
0xdc2: Push((int) 0)
0xdc3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdc4: IF (Stack[-1] == 0) GOTO 0xdc7; Pop(1)

0xdc5: Stack[-2] = (bool) 1
0xdc6: Return(); Pop(0)

0xdc7: Stack[-2] = (bool) 0
0xdc8: Return(); Pop(0)

0xdc9: PushEmpty()
0xdca: PushEmpty(int, string)
0xdcb: Stack[-1] = "b10q04KapellaGotoBlock" // @poff=822
0xdcc: Call2 0xc93

0xdcd: Pop(1)
0xdce: Push((int) 0)
0xdcf: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xdd0: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdd1: Stack[-2] = (bool) 1
0xdd2: Return(); Pop(0)

0xdd3: Stack[-2] = (bool) 0
0xdd4: Return(); Pop(0)

0xdd5: PushEmpty()
0xdd6: PushEmpty(int, string)
0xdd7: Stack[-1] = "oob10Block2" // @poff=596
0xdd8: Call2 0xc93

0xdd9: Pop(1)
0xdda: Push((int) 0)
0xddb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xddc: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xddd: Stack[-2] = (bool) 1
0xdde: Return(); Pop(0)

0xddf: Stack[-2] = (bool) 0
0xde0: Return(); Pop(0)

0xde1: PushEmpty()
0xde2: PushEmpty(int)
0xde3: Call2 0xcb2

0xde4: Pop(0)
0xde5: Push((int) 19)
0xde6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xde7: IF (Stack[-1] == 0) GOTO 0xdea; Pop(1)

0xde8: Stack[-2] = (bool) 1
0xde9: Return(); Pop(0)

0xdea: Stack[-2] = (bool) 0
0xdeb: Return(); Pop(0)

0xdec: PushEmpty(object, object, object, object)
0xded: @ GetMainOutdoorScene(Stack[-2])
0xdee: Pop(0)
0xdef: Pop(0); PushNull((bool) Stack[-2] == 0)
0xdf0: IF (Stack[-1] == 0) GOTO 0xdf7; Pop(1)

0xdf1: Push("Can't find main outdoor scene") // @poff=868
0xdf2: @ Trace(Stack[-1])
0xdf3: Pop(1)
0xdf4: Stack[-1] = 0
0xdf5: Stack[-1] = Stack[-5]
0xdf6: Return(); Pop(4)

0xdf7: @@ GetMap(Stack[-1]); Obj=2 // @poff=928
0xdf8: Pop(0)
0xdf9: Stack[-1] = Stack[-5]
0xdfa: Return(); Pop(4)

0xdfb: Stack[-1] = 0
0xdfc: Stack[-2] = 0
0xdfd: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xdfe: @ GetMainOutdoorScene(Stack[-2])
0xdff: Pop(0)
0xe00: Pop(0); PushNull((bool) Stack[-2] == 0)
0xe01: IF (Stack[-1] == 0) GOTO 0xe06; Pop(1)

0xe02: Push("Can't find main outdoor scene") // @poff=868
0xe03: @ Trace(Stack[-1])
0xe04: Pop(1)
0xe05: Return(); Pop(8)

0xe06: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=935
0xe07: Pop(0)
0xe08: Pop(0); Push((bool) Stack[-1] == 0)
0xe09: IF (Stack[-1] == 0) GOTO 0xe10; Pop(1)

0xe0a: Push("Warning: outdoor scene locator ") // @poff=946
0xe0b: Pop(1); Push(Stack[-1] + Stack[-11]);
0xe0c: Push(" doesnt exist") // @poff=1010
0xe0d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe0e: @ Trace(Stack[-1])
0xe0f: Pop(1)
0xe10: @@ GetMap(Stack[-11]); Obj=2 // @poff=928
0xe11: Pop(0)
0xe12: Pop(0); PushNull((bool) Stack[-11] == 0)
0xe13: IF (Stack[-1] == 0) GOTO 0xe18; Pop(1)

0xe14: Push("Can't find map") // @poff=1038
0xe15: @ Trace(Stack[-1])
0xe16: Pop(1)
0xe17: Return(); Pop(8)

0xe18: Push(CvectorIndex(Stack[-4], 0))
0xe19: Push(CvectorIndex(Stack[-5], 2))
0xe1a: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=1068
0xe1b: Pop(2)
0xe1c: Return(); Pop(8)

0xe1d: Stack[-2] = 0
0xe1e: PushEmpty(int, int)
0xe1f: Push("branch") // @poff=1081
0xe20: @ GetVariable(Stack[-1], Stack[-2])
0xe21: Pop(1)
0xe22: Push((int) 0)
0xe23: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe24: IF (Stack[-1] == 0) GOTO 0xe28; Pop(1)

0xe25: Stack[-3] = (int) 1
0xe26: Return(); Pop(2)

0xe27: GOTO 0xe2d

0xe28: Push((int) 1)
0xe29: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe2a: IF (Stack[-1] == 0) GOTO 0xe2d; Pop(1)

0xe2b: Stack[-3] = (int) 2
0xe2c: Return(); Pop(2)

0xe2d: Stack[-3] = (int) 3
0xe2e: Return(); Pop(2)

0xe2f: PushEmpty(int, int)
0xe30: Push("mt_block") // @poff=1095
0xe31: @ GetVariable(Stack[-1], Stack[-2])
0xe32: Pop(1)
0xe33: Pop(0); Push((bool) Stack[-1] == 0)
0xe34: IF (Stack[-1] == 0) GOTO 0xe3f; Pop(1)

0xe35: PushEmpty(int, object)
0xe36: Stack[-5] = Stack[-1]
0xe37: Push(-2, 1); TaskCall(1)
0xe38: Call2 0xd

0xe39: Pop(-2, 1); TaskReturn
0xe3a: Pop(2)
0xe3b: Push("mt_block") // @poff=1095
0xe3c: Push((int) 1)
0xe3d: @ SetVariable(Stack[-2], Stack[-1])
0xe3e: Pop(2)
0xe3f: PushEmpty(bool, int)
0xe40: Stack[-1] = (int) 9
0xe41: Call2 0xcba

0xe42: Pop(1)
0xe43: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe44: PushEmpty(int, object)
0xe45: Stack[-5] = Stack[-1]
0xe46: Push(-2, 1); TaskCall(3)
0xe47: Call2 0x106

0xe48: Pop(-2, 1); TaskReturn
0xe49: Pop(2)
0xe4a: Return(); Pop(2)

0xe4b: PushEmpty(bool, int)
0xe4c: Stack[-1] = (int) 10
0xe4d: Call2 0xcba

0xe4e: Pop(1)
0xe4f: IF (Stack[-1] == 0) GOTO 0xe57; Pop(1)

0xe50: PushEmpty(int, object)
0xe51: Stack[-5] = Stack[-1]
0xe52: Push(-2, 1); TaskCall(7)
0xe53: Call2 0x6e2

0xe54: Pop(-2, 1); TaskReturn
0xe55: Pop(2)
0xe56: Return(); Pop(2)

0xe57: PushEmpty(bool, int)
0xe58: Stack[-1] = (int) 12
0xe59: Call2 0xcba

0xe5a: Pop(1)
0xe5b: IF (Stack[-1] == 0) GOTO 0xe63; Pop(1)

0xe5c: PushEmpty(int, object)
0xe5d: Stack[-5] = Stack[-1]
0xe5e: Push(-2, 1); TaskCall(5)
0xe5f: Call2 0x4aa

0xe60: Pop(-2, 1); TaskReturn
0xe61: Pop(2)
0xe62: Return(); Pop(2)

0xe63: PushEmpty(int, object)
0xe64: Stack[-5] = Stack[-1]
0xe65: Push(-2, 1); TaskCall(9)
0xe66: Call2 0x990

0xe67: Pop(-2, 1); TaskReturn
0xe68: Pop(2)
0xe69: Return(); Pop(2)

