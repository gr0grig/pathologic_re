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
	W:player
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:map_chertez_state
	W:map_chertez_force
	W:pt_map_aglaja
	A:ShowMap
	W:ood11Burah1
	W:Can't find main outdoor scene
	A:GetMap
	A:GetLocator
	W:Warning: outdoor scene locator 
	W: doesnt exist
	W:Can't find map
	A:SetMapParams
	W:branch
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006d00610070005f006300680065007200740065007a005f007300740061007400650000006d00610070005f006300680065007200740065007a005f0066006f007200630065000000700074005f006d00610070005f00610067006c0061006a006100000053686f774d6170006f006f006400310031004200750072006100680031000000430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e0067000000
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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)

RunOp = 0x246
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc7 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x24a Vars = (string)
		EVENT_6 Op = 0x25e Vars = ()
		EVENT_5 Op = 0x26b Vars = ()
		EVENT_7 Op = 0x2ba Vars = (int)
		EVENT_45 Op = 0x2fc Vars = (bool)
		EVENT_0 Op = 0x308 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x38c

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
0x11: Call2 0x493

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x3e6

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x391

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x541

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x53f

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x543

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x545

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x52e

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
0x55: Call2 0x3d5

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
0x63: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x4f0

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x69: PushEmpty(object, object)
0x6a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c: Call2 0x4ea

0x6d: Pop(2)
0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral" // @poff=89
0x70: Call2 0xb1

0x71: Pop(1)
0x72: Push((int) 514326)
0x73: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x74: Pop(1)
0x75: @@@ ClearReplies(); Obj=0 // @poff=116
0x76: Pop(0)
0x77: Push((int) 514327)
0x78: Push((int) 15550)
0x79: Push((int) 15549)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x93

0x7d: PushEmpty(string)
0x7e: Stack[-1] = "Neutral" // @poff=89
0x7f: Call2 0xb1

0x80: Pop(1)
0x81: Push((int) 514532)
0x82: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x83: Pop(1)
0x84: @@@ ClearReplies(); Obj=0 // @poff=116
0x85: Pop(0)
0x86: Push((int) 514533)
0x87: Push((int) -1)
0x88: Push((int) 15764)
0x89: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8a: Pop(3)
0x8b: Push((int) 539713)
0x8c: Push((int) -1)
0x8d: Push((int) 41672)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: GOTO 0x93

0x91: Return(); Pop(0)

0x92: GOTO 0x62

0x93: PushEmpty(bool)
0x94: Call2 0x547

0x95: Pop(0)
0x96: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x97: @ lshWaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: PushEmpty(string)
0x9d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9e: Call2 0x470

0x9f: Pop(1)
0xa0: GOTO 0x97

0xa1: GOTO 0xb0

0xa2: Push("all") // @poff=138
0xa3: Push("idle") // @poff=146
0xa4: @ PlayAnimation(Stack[-2], Stack[-1])
0xa5: Pop(2)
0xa6: @ WaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: Push("all") // @poff=138
0xac: Push("idle") // @poff=146
0xad: @ PlayAnimation(Stack[-2], Stack[-1])
0xae: Pop(2)
0xaf: GOTO 0xa6

0xb0: Return(); Pop(0)

0xb1: PushEmpty()
0xb2: PushEmpty(bool)
0xb3: Call2 0x547

0xb4: Pop(0)
0xb5: Pop(1); Push((bool) Stack[-1] == 0)
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Return(); Pop(0)

0xb8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: PushEmpty(string, bool)
0xbc: Stack[-3] = Stack[-2]
0xbd: Push("") // @poff=102
0xbe: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc0: Stack[-1] = (bool) 0
0xc1: GOTO 0xc3

0xc2: Stack[-1] = (bool) 1
0xc3: Call2 0x477

0xc4: Pop(2)
0xc5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc6: Return(); Pop(0)

0xc7: PushEmpty()
0xc8: Push((int) 1)
0xc9: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0xca: PushEmpty()
0xcb: Call2 0x48c

0xcc: Pop(0)
0xcd: Push((int) 15565)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x4c9

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x4da

0xd9: Pop(2)
0xda: Push((int) 41689)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x4c9

0xe1: Pop(2)
0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x4da

0xe6: Pop(2)
0xe7: Push((int) 15548)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0xea: PushEmpty(bool, object)
0xeb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xec: Call2 0x4f0

0xed: Pop(1)
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x4ea

0xf3: Pop(2)
0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral" // @poff=89
0xf6: Call2 0xb1

0xf7: Pop(1)
0xf8: Push((int) 514326)
0xf9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfa: Pop(1)
0xfb: @@@ ClearReplies(); Obj=0 // @poff=116
0xfc: Pop(0)
0xfd: Push((int) 514327)
0xfe: Push((int) 15550)
0xff: Push((int) 15549)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: PushEmpty(string)
0x104: Stack[-1] = "Neutral" // @poff=89
0x105: Call2 0xb1

0x106: Pop(1)
0x107: Push((int) 514532)
0x108: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x109: Pop(1)
0x10a: @@@ ClearReplies(); Obj=0 // @poff=116
0x10b: Pop(0)
0x10c: Push((int) 514533)
0x10d: Push((int) -1)
0x10e: Push((int) 15764)
0x10f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x110: Pop(3)
0x111: Push((int) 539713)
0x112: Push((int) -1)
0x113: Push((int) 41672)
0x114: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x115: Pop(3)
0x116: Return(); Pop(0)

0x117: Push((int) 15550)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Neutral" // @poff=89
0x11c: Call2 0xb1

0x11d: Pop(1)
0x11e: Push((int) 514328)
0x11f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x120: Pop(1)
0x121: @@@ ClearReplies(); Obj=0 // @poff=116
0x122: Pop(0)
0x123: Push((int) 514329)
0x124: Push((int) 15552)
0x125: Push((int) 15551)
0x126: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x127: Pop(3)
0x128: Push((int) 539714)
0x129: Push((int) 41674)
0x12a: Push((int) 41673)
0x12b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: Push((int) 41674)
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral" // @poff=89
0x133: Call2 0xb1

0x134: Pop(1)
0x135: Push((int) 539715)
0x136: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x137: Pop(1)
0x138: @@@ ClearReplies(); Obj=0 // @poff=116
0x139: Pop(0)
0x13a: Push((int) 539716)
0x13b: Push((int) 15552)
0x13c: Push((int) 41675)
0x13d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 15552)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral" // @poff=89
0x145: Call2 0xb1

0x146: Pop(1)
0x147: Push((int) 514330)
0x148: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x149: Pop(1)
0x14a: @@@ ClearReplies(); Obj=0 // @poff=116
0x14b: Pop(0)
0x14c: Push((int) 514331)
0x14d: Push((int) 15554)
0x14e: Push((int) 15553)
0x14f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x150: Pop(3)
0x151: Push((int) 514344)
0x152: Push((int) 15567)
0x153: Push((int) 15566)
0x154: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: Push((int) 15567)
0x158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral" // @poff=89
0x15c: Call2 0xb1

0x15d: Pop(1)
0x15e: Push((int) 514345)
0x15f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x160: Pop(1)
0x161: @@@ ClearReplies(); Obj=0 // @poff=116
0x162: Pop(0)
0x163: Push((int) 514346)
0x164: Push((int) 15569)
0x165: Push((int) 15568)
0x166: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 15569)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral" // @poff=89
0x16e: Call2 0xb1

0x16f: Pop(1)
0x170: Push((int) 514347)
0x171: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x172: Pop(1)
0x173: @@@ ClearReplies(); Obj=0 // @poff=116
0x174: Pop(0)
0x175: Push((int) 514348)
0x176: Push((int) 15554)
0x177: Push((int) 15570)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: Push((int) 15554)
0x17c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Neutral" // @poff=89
0x180: Call2 0xb1

0x181: Pop(1)
0x182: Push((int) 514332)
0x183: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x184: Pop(1)
0x185: @@@ ClearReplies(); Obj=0 // @poff=116
0x186: Pop(0)
0x187: Push((int) 514333)
0x188: Push((int) 15556)
0x189: Push((int) 15555)
0x18a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18b: Pop(3)
0x18c: Push((int) 539717)
0x18d: Push((int) 41678)
0x18e: Push((int) 41677)
0x18f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 41678)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral" // @poff=89
0x197: Call2 0xb1

0x198: Pop(1)
0x199: Push((int) 539718)
0x19a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19b: Pop(1)
0x19c: @@@ ClearReplies(); Obj=0 // @poff=116
0x19d: Pop(0)
0x19e: Push((int) 539719)
0x19f: Push((int) 41680)
0x1a0: Push((int) 41679)
0x1a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 41680)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral" // @poff=89
0x1a9: Call2 0xb1

0x1aa: Pop(1)
0x1ab: Push((int) 539720)
0x1ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ad: Pop(1)
0x1ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x1af: Pop(0)
0x1b0: Push((int) 539721)
0x1b1: Push((int) 15560)
0x1b2: Push((int) 41681)
0x1b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Push((int) 15556)
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = "Neutral" // @poff=89
0x1bb: Call2 0xb1

0x1bc: Pop(1)
0x1bd: Push((int) 514334)
0x1be: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bf: Pop(1)
0x1c0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c1: Pop(0)
0x1c2: Push((int) 514335)
0x1c3: Push((int) 15558)
0x1c4: Push((int) 15557)
0x1c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 15558)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral" // @poff=89
0x1cd: Call2 0xb1

0x1ce: Pop(1)
0x1cf: Push((int) 514336)
0x1d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d1: Pop(1)
0x1d2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d3: Pop(0)
0x1d4: Push((int) 514337)
0x1d5: Push((int) 15560)
0x1d6: Push((int) 15559)
0x1d7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 15560)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Neutral" // @poff=89
0x1df: Call2 0xb1

0x1e0: Pop(1)
0x1e1: Push((int) 514338)
0x1e2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e3: Pop(1)
0x1e4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e5: Pop(0)
0x1e6: Push((int) 514339)
0x1e7: Push((int) 15562)
0x1e8: Push((int) 15561)
0x1e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ea: Pop(3)
0x1eb: Push((int) 539722)
0x1ec: Push((int) 41684)
0x1ed: Push((int) 41683)
0x1ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ef: Pop(3)
0x1f0: Return(); Pop(0)

0x1f1: Push((int) 41684)
0x1f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1f4: PushEmpty(string)
0x1f5: Stack[-1] = "Neutral" // @poff=89
0x1f6: Call2 0xb1

0x1f7: Pop(1)
0x1f8: Push((int) 539723)
0x1f9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fa: Pop(1)
0x1fb: @@@ ClearReplies(); Obj=0 // @poff=116
0x1fc: Pop(0)
0x1fd: Push((int) 539724)
0x1fe: Push((int) 15562)
0x1ff: Push((int) 41685)
0x200: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x201: Pop(3)
0x202: Return(); Pop(0)

0x203: Push((int) 15562)
0x204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral" // @poff=89
0x208: Call2 0xb1

0x209: Pop(1)
0x20a: Push((int) 514340)
0x20b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20c: Pop(1)
0x20d: @@@ ClearReplies(); Obj=0 // @poff=116
0x20e: Pop(0)
0x20f: Push((int) 514341)
0x210: Push((int) 15564)
0x211: Push((int) 15563)
0x212: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x213: Pop(3)
0x214: Push((int) 539725)
0x215: Push((int) 15564)
0x216: Push((int) 41687)
0x217: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x218: Pop(3)
0x219: Return(); Pop(0)

0x21a: Push((int) 15564)
0x21b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x21d: PushEmpty(string)
0x21e: Stack[-1] = "Neutral" // @poff=89
0x21f: Call2 0xb1

0x220: Pop(1)
0x221: Push((int) 514342)
0x222: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x223: Pop(1)
0x224: @@@ ClearReplies(); Obj=0 // @poff=116
0x225: Pop(0)
0x226: Push((int) 514343)
0x227: Push((int) -1)
0x228: Push((int) 15565)
0x229: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22a: Pop(3)
0x22b: Push((int) 539726)
0x22c: Push((int) -1)
0x22d: Push((int) 41689)
0x22e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22f: Pop(3)
0x230: Return(); Pop(0)

0x231: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x232: PushEmpty(bool)
0x233: Call2 0x547

0x234: Pop(0)
0x235: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x236: @ lshStopAnimation()
0x237: Pop(0)
0x238: GOTO 0x23b

0x239: @ StopAnimation()
0x23a: Pop(0)
0x23b: Return(); Pop(0)

0x23c: GOTO 0xc8

0x23d: Return(); Pop(0)

0x23e: PushEmpty()
0x23f: PushEmpty(int, object)
0x240: Stack[-3] = Stack[-1]
0x241: Push(-2, 1); TaskCall(1)
0x242: Call2 0xd

0x243: Pop(-2, 1); TaskReturn
0x244: Pop(2)
0x245: Return(); Pop(0)

0x246: PushEmpty()
0x247: Call2 0x26f

0x248: Pop(0)
0x249: Return(); Pop(0)

0x24a: PushEmpty(bool, bool)
0x24b: Push("cleanup") // @poff=156
0x24c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x24e: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x24f: @ IsLoaded(Stack[-1])
0x250: Pop(0)
0x251: Pop(0); Push((bool) Stack[-1] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x253: PushEmpty(object)
0x254: Call2 0x493

0x255: Pop(0)
0x256: @ RemoveActor(Stack[-1])
0x257: Pop(1)
0x258: GOTO 0x25d

0x259: Push("restore") // @poff=172
0x25a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x25d: Return(); Pop(2)

0x25e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x25f: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x260: PushEmpty(object)
0x261: Call2 0x493

0x262: Pop(0)
0x263: @ RemoveActor(Stack[-1])
0x264: Pop(1)
0x265: @ Hold()
0x266: Pop(0)
0x267: PushEmpty()
0x268: Call2 0x2e0

0x269: Pop(0)
0x26a: Return(); Pop(0)

0x26b: PushEmpty()
0x26c: Call2 0x2ef

0x26d: Pop(0)
0x26e: Return(); Pop(0)

0x26f: PushEmpty(bool)
0x270: Call2 0x38c

0x271: Pop(0)
0x272: Pop(1); Push((bool) Stack[-1] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: PushEmpty()
0x275: Push(-0, 0); TaskCall(0)
0x276: Call2 0x0

0x277: Pop(-0, 0); TaskReturn
0x278: Pop(0)
0x279: PushEmpty()
0x27a: Call2 0x26b

0x27b: Pop(0)
0x27c: @ GetDirection(Stack[-0]T)
0x27d: Pop(0)
0x27e: PushEmpty()
0x27f: Call2 0x325

0x280: Pop(0)
0x281: GOTO 0x27e

0x282: Return(); Pop(0)

0x283: PushEmpty(object, object)
0x284: Push("player") // @poff=188
0x285: @ FindActor(Stack[-2], Stack[-1])
0x286: Pop(1)
0x287: Pop(0); Push((bool) Stack[-1] == 0)
0x288: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x289: Stack[-3] = (bool) 0
0x28a: Return(); Pop(2)

0x28b: PushEmpty(bool, object)
0x28c: Stack[-3] = Stack[-1]
0x28d: Call2 0x383

0x28e: Stack[-2] = Stack[-5]
0x28f: Pop(2)
0x290: Return(); Pop(2)

0x291: Stack[-1] = 0
0x292: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x293: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x294: @ RotateAsync(Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: Return(); Pop(0)

0x297: PushEmpty(object, bool, object, bool)
0x298: Push("player") // @poff=188
0x299: @ FindActor(Stack[-3], Stack[-1])
0x29a: Pop(1)
0x29b: Pop(0); Push((bool) Stack[-2] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29d: Stack[-5] = (bool) 0
0x29e: Return(); Pop(4)

0x29f: PushEmpty(float, object)
0x2a0: Stack[-4] = Stack[-1]
0x2a1: Call2 0x371

0x2a2: Pop(1)
0x2a3: Push((float)90000.0)
0x2a4: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a6: Stack[-5] = (bool) 0
0x2a7: Return(); Pop(4)

0x2a8: @ CanSee(Stack[-1], Stack[-2])
0x2a9: Pop(0)
0x2aa: Stack[-1] = Stack[-5]
0x2ab: Return(); Pop(4)

0x2ac: Stack[-2] = 0
0x2ad: PushEmpty(float, float)
0x2ae: Push((int) 8)
0x2af: Push((int) 16)
0x2b0: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2b1: Pop(2)
0x2b2: Push((int) 10)
0x2b3: @ SetTimer(Stack[-1], Stack[-2])
0x2b4: Pop(1)
0x2b5: Return(); Pop(2)

0x2b6: Push((int) 10)
0x2b7: @ KillTimer(Stack[-1])
0x2b8: Pop(1)
0x2b9: Return(); Pop(0)

0x2ba: PushEmpty()
0x2bb: Push((int) 10)
0x2bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2be: PushEmpty()
0x2bf: Call2 0x2b6

0x2c0: Pop(0)
0x2c1: PushEmpty(bool)
0x2c2: Stack[-1] = (bool) 0
0x2c3: PushEmpty(bool)
0x2c4: Call2 0x38c

0x2c5: Pop(0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: PushEmpty(bool)
0x2c8: Call2 0x297

0x2c9: Pop(0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: Stack[-1] = (bool) 1
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2cd: PushEmpty(bool)
0x2ce: Call2 0x283

0x2cf: Pop(0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d1: PushEmpty(bool, object)
0x2d2: PushEmpty(object)
0x2d3: Call2 0x493

0x2d4: Stack[-1] = Stack[-2]
0x2d5: Pop(1)
0x2d6: Call2 0x420

0x2d7: Pop(2)
0x2d8: GOTO 0x2df

0x2d9: PushEmpty()
0x2da: Call2 0x292

0x2db: Pop(0)
0x2dc: PushEmpty()
0x2dd: Call2 0x2ad

0x2de: Pop(0)
0x2df: Return(); Pop(0)

0x2e0: PushEmpty()
0x2e1: Call2 0x36c

0x2e2: Pop(0)
0x2e3: PushEmpty()
0x2e4: Call2 0x2b6

0x2e5: Pop(0)
0x2e6: @ lshStopSpeech()
0x2e7: Pop(0)
0x2e8: @ lshStopAnimation()
0x2e9: Pop(0)
0x2ea: @ StopAsync()
0x2eb: Pop(0)
0x2ec: @ Hold()
0x2ed: Pop(0)
0x2ee: Return(); Pop(0)

0x2ef: @ StopGroup0()
0x2f0: Pop(0)
0x2f1: PushEmpty()
0x2f2: Call2 0x2b6

0x2f3: Pop(0)
0x2f4: PushEmpty(string)
0x2f5: Stack[-1] = "Neutral" // @poff=89
0x2f6: Call2 0x470

0x2f7: Pop(1)
0x2f8: PushEmpty()
0x2f9: Call2 0x2ad

0x2fa: Pop(0)
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty()
0x2fd: Push(Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2ff: PushEmpty()
0x300: Call2 0x2ad

0x301: Pop(0)
0x302: GOTO 0x307

0x303: PushEmpty(string)
0x304: Stack[-1] = "Neutral" // @poff=89
0x305: Call2 0x470

0x306: Pop(1)
0x307: Return(); Pop(0)

0x308: PushEmpty(bool, bool)
0x309: @ IsOverrideActive(Stack[-1])
0x30a: Pop(0)
0x30b: Pop(0); Push((bool) Stack[-1] == 0)
0x30c: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x30d: EventDisable(0)
0x30e: PushEmpty()
0x30f: Call2 0x36c

0x310: Pop(0)
0x311: PushEmpty(bool, object)
0x312: Stack[-5] = Stack[-1]
0x313: Call2 0x383

0x314: Pop(2)
0x315: EventEnable(0)
0x316: PushEmpty(object)
0x317: Stack[-4] = Stack[-1]
0x318: Call2 0x23e

0x319: Pop(1)
0x31a: PushEmpty(string)
0x31b: Stack[-1] = "Neutral" // @poff=89
0x31c: Call2 0x470

0x31d: Pop(1)
0x31e: PushEmpty()
0x31f: Call2 0x2b6

0x320: Pop(0)
0x321: PushEmpty()
0x322: Call2 0x2ad

0x323: Pop(0)
0x324: Return(); Pop(2)

0x325: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x326: @ WaitForAnimEnd()
0x327: Pop(0)
0x328: PushEmpty(bool)
0x329: Call2 0x38c

0x32a: Pop(0)
0x32b: Pop(1); Push((bool) Stack[-1] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32d: Return(); Pop(12)

0x32e: PushEmpty(int)
0x32f: Call2 0x4b8

0x330: Stack[-1] = Stack[-7]
0x331: Pop(1)
0x332: Stack[-5] = (int) 0
0x333: PushEmpty(bool)
0x334: Stack[-1] = (bool) 0
0x335: Push((int) 5)
0x336: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x338: PushEmpty(bool)
0x339: Call2 0x38c

0x33a: Pop(0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: Stack[-1] = (bool) 1
0x33d: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x33e: Pop(0); Push((bool) Stack[-6] == 0)
0x33f: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x340: Push((int) 3)
0x341: @ Sleep(Stack[-1], Stack[-5])
0x342: Pop(1)
0x343: Pop(0); Push((bool) Stack[-4] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: GOTO 0x367

0x346: GOTO 0x35c

0x347: @ irand(Stack[-3], Stack[-6])
0x348: Pop(0)
0x349: Push((int) 5)
0x34a: @ irand(Stack[-3], Stack[-1])
0x34b: Pop(1)
0x34c: Push((int) 0)
0x34d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: Stack[-3] = (int) 0
0x350: Push("all") // @poff=138
0x351: PushEmpty(string, int)
0x352: Stack[-6] = Stack[-1]
0x353: Call2 0x4b1

0x354: Pop(1)
0x355: @ PlayAnimation(Stack[-2], Stack[-1])
0x356: Pop(2)
0x357: @ WaitForAnimEnd(Stack[-1])
0x358: Pop(0)
0x359: Pop(0); Push((bool) Stack[-1] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: GOTO 0x367

0x35c: PushEmpty(bool)
0x35d: Call2 0x36a

0x35e: Pop(0)
0x35f: Pop(1); Push((bool) Stack[-1] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: GOTO 0x367

0x362: @ ResetAAS()
0x363: Pop(0)
0x364: Push((int) 1)
0x365: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x366: GOTO 0x333

0x367: @ ResetAAS()
0x368: Pop(0)
0x369: Return(); Pop(12)

0x36a: Stack[-1] = (bool) 1
0x36b: Return(); Pop(0)

0x36c: @ StopAnimation()
0x36d: Pop(0)
0x36e: @ StopGroup0()
0x36f: Pop(0)
0x370: Return(); Pop(0)

0x371: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x372: @ GetPosition(Stack[-3])
0x373: Pop(0)
0x374: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x375: Pop(0)
0x376: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x377: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x378: Return(); Pop(6)

0x379: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x37a: @ GetPosition(Stack[-3])
0x37b: Pop(0)
0x37c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x37d: Push(CvectorIndex(Stack[-2], 0))
0x37e: Push(CvectorIndex(Stack[-3], 2))
0x37f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x380: Pop(2)
0x381: Stack[-1] = Stack[-8]
0x382: Return(); Pop(6)

0x383: PushEmpty(cvector, cvector)
0x384: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x385: Pop(0)
0x386: PushEmpty(bool, cvector)
0x387: Stack[-3] = Stack[-1]
0x388: Call2 0x379

0x389: Stack[-2] = Stack[-6]
0x38a: Pop(2)
0x38b: Return(); Pop(2)

0x38c: PushEmpty(bool, bool)
0x38d: @ IsLoaded(Stack[-1])
0x38e: Pop(0)
0x38f: Stack[-1] = Stack[-3]
0x390: Return(); Pop(2)

0x391: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x392: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x393: Pop(0)
0x394: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x395: Pop(0)
0x396: Push(CvectorIndex(Stack[-8], 1))
0x397: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x398: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x399: @ GetPosition(Stack[-7])
0x39a: Pop(0)
0x39b: @ GetEyesHeight(Stack[-9])
0x39c: Pop(0)
0x39d: Push(CvectorIndex(Stack[-7], 1))
0x39e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x39f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3a0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3a1: Push(CvectorIndex(Stack[-6], 1))
0x3a2: Stack[-1] = (int) 0
0x3a3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3a4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3a5: Pop(1); Push(Sqrt(Stack[-1]))
0x3a6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3a7: Stack[-5] = -Stack[-6]; Pop(0);
0x3a8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3a9: PushEmpty(cvector, cvector)
0x3aa: Push([0.0, 1.0, 0.0])
0x3ab: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3ac: Call2 0x499

0x3ad: Pop(1)
0x3ae: Push((int) 25)
0x3af: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3b0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b1: Push([0.0, 10.0, 0.0])
0x3b2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3b3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3b4: @ IsOverrideActive(Stack[-2])
0x3b5: Pop(0)
0x3b6: Push(Stack[-2])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b8: Stack[-21] = (bool) 0
0x3b9: Return(); Pop(18)

0x3ba: @ StopWorld()
0x3bb: Pop(0)
0x3bc: @ CameraTransit(Stack[-3], Stack[-5])
0x3bd: Pop(0)
0x3be: Push(CvectorIndex(Stack[-4], 0))
0x3bf: Push(CvectorIndex(Stack[-5], 2))
0x3c0: @ Rotate(Stack[-2], Stack[-1])
0x3c1: Pop(2)
0x3c2: PushEmpty(bool)
0x3c3: Call2 0x547

0x3c4: Pop(0)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c6: GOTO 0x3cf

0x3c7: Push("head") // @poff=228
0x3c8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3c9: Pop(1)
0x3ca: Push(Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cc: Push("head") // @poff=228
0x3cd: @ LookAsyncCamera(Stack[-1])
0x3ce: Pop(1)
0x3cf: @ CameraWaitForPlayFinish()
0x3d0: Pop(0)
0x3d1: @ ResumeWorld()
0x3d2: Pop(0)
0x3d3: Stack[-21] = (bool) 1
0x3d4: Return(); Pop(18)

0x3d5: PushEmpty(bool, bool)
0x3d6: @ CameraSwitchToNormal()
0x3d7: Pop(0)
0x3d8: PushEmpty(bool)
0x3d9: Call2 0x547

0x3da: Pop(0)
0x3db: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3dc: GOTO 0x3e5

0x3dd: Push("head") // @poff=228
0x3de: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3df: Pop(1)
0x3e0: Push(Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e2: Push("head") // @poff=228
0x3e3: @ UnlookAsync(Stack[-1])
0x3e4: Pop(1)
0x3e5: Return(); Pop(2)

0x3e6: PushEmpty(int, int, int, int)
0x3e7: Push("voice_common") // @poff=238
0x3e8: @ GetVariable(Stack[-1], Stack[-3])
0x3e9: Pop(1)
0x3ea: Push(Stack[-2])
0x3eb: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x3ec: PushEmpty(bool, object)
0x3ed: Stack[-7] = Stack[-1]
0x3ee: Call2 0x420

0x3ef: Pop(1)
0x3f0: Pop(1); Push((bool) Stack[-1] == 0)
0x3f1: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f2: PushEmpty(bool, object)
0x3f3: Stack[-7] = Stack[-1]
0x3f4: Call2 0x445

0x3f5: Pop(1)
0x3f6: Pop(1); Push((bool) Stack[-1] == 0)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f8: Stack[-6] = (bool) 0
0x3f9: Return(); Pop(4)

0x3fa: Push((int) 2)
0x3fb: @ irand(Stack[-2], Stack[-1])
0x3fc: Pop(1)
0x3fd: Push(Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x3ff: Push("voice_common") // @poff=238
0x400: Push((int) 1)
0x401: Pop(1); Push(Stack[-4] + Stack[-1]);
0x402: Push((int) 3)
0x403: Pop(2); Push(Stack[-2] % Stack[-1]);
0x404: @ SetVariable(Stack[-2], Stack[-1])
0x405: Pop(2)
0x406: GOTO 0x40b

0x407: Push("voice_common") // @poff=238
0x408: Push((int) 0)
0x409: @ SetVariable(Stack[-2], Stack[-1])
0x40a: Pop(2)
0x40b: GOTO 0x41e

0x40c: PushEmpty(bool, object)
0x40d: Stack[-7] = Stack[-1]
0x40e: Call2 0x445

0x40f: Pop(1)
0x410: Pop(1); Push((bool) Stack[-1] == 0)
0x411: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x412: PushEmpty(bool, object)
0x413: Stack[-7] = Stack[-1]
0x414: Call2 0x420

0x415: Pop(1)
0x416: Pop(1); Push((bool) Stack[-1] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: Stack[-6] = (bool) 0
0x419: Return(); Pop(4)

0x41a: Push("voice_common") // @poff=238
0x41b: Push((int) 1)
0x41c: @ SetVariable(Stack[-2], Stack[-1])
0x41d: Pop(2)
0x41e: Stack[-6] = (bool) 1
0x41f: Return(); Pop(4)

0x420: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x421: Stack[-5] = "c" // @poff=264
0x422: Stack[-4] = (int) 0
0x423: Push((int) 1)
0x424: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x425: Push((int) 1)
0x426: Pop(1); Push(Stack[-5] + Stack[-1]);
0x427: Pop(1); Push(Stack[-6] + Stack[-1]);
0x428: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x429: Pop(1)
0x42a: Pop(0); Push((bool) Stack[-3] == 0)
0x42b: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42c: GOTO 0x430

0x42d: Push((int) 1)
0x42e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x42f: GOTO 0x423

0x430: Pop(0); Push((bool) Stack[-4] == 0)
0x431: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x432: Stack[-12] = (bool) 0
0x433: Return(); Pop(10)

0x434: Stack[-2] = (int) 0
0x435: Push((int) 1)
0x436: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x438: @ irand(Stack[-2], Stack[-4])
0x439: Pop(0)
0x43a: Push((int) 1)
0x43b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x43c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x43d: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x43e: Pop(1)
0x43f: PushEmpty(bool, string)
0x440: Stack[-3] = Stack[-1]
0x441: Call2 0x47d

0x442: Stack[-2] = Stack[-14]
0x443: Pop(2)
0x444: Return(); Pop(10)

0x445: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x446: Push("d") // @poff=234
0x447: PushEmpty(int)
0x448: Call2 0x4a8

0x449: Pop(0)
0x44a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x44b: Push("m") // @poff=292
0x44c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x44d: Stack[-4] = (int) 0
0x44e: Push((int) 1)
0x44f: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x450: Push((int) 1)
0x451: Pop(1); Push(Stack[-5] + Stack[-1]);
0x452: Pop(1); Push(Stack[-6] + Stack[-1]);
0x453: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x454: Pop(1)
0x455: Pop(0); Push((bool) Stack[-3] == 0)
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: GOTO 0x45b

0x458: Push((int) 1)
0x459: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x45a: GOTO 0x44e

0x45b: Pop(0); Push((bool) Stack[-4] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45d: Stack[-12] = (bool) 0
0x45e: Return(); Pop(10)

0x45f: Stack[-2] = (int) 0
0x460: Push((int) 1)
0x461: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x463: @ irand(Stack[-2], Stack[-4])
0x464: Pop(0)
0x465: Push((int) 1)
0x466: Pop(1); Push(Stack[-3] + Stack[-1]);
0x467: Pop(1); Push(Stack[-6] + Stack[-1]);
0x468: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x469: Pop(1)
0x46a: PushEmpty(bool, string)
0x46b: Stack[-3] = Stack[-1]
0x46c: Call2 0x47d

0x46d: Stack[-2] = Stack[-14]
0x46e: Pop(2)
0x46f: Return(); Pop(10)

0x470: PushEmpty(float, float, float, float)
0x471: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x472: Pop(0)
0x473: Push((bool) 0)
0x474: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x475: Pop(1)
0x476: Return(); Pop(4)

0x477: PushEmpty(float, float, float, float)
0x478: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x479: Pop(0)
0x47a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x47b: Pop(0)
0x47c: Return(); Pop(4)

0x47d: PushEmpty(bool, bool)
0x47e: PushEmpty(bool)
0x47f: Call2 0x547

0x480: Pop(0)
0x481: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x482: @ lshHasSpeech(Stack[-1], Stack[-3])
0x483: Pop(0)
0x484: Push(Stack[-1])
0x485: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x486: @ lshPlaySpeech(Stack[-3])
0x487: Pop(0)
0x488: Stack[-4] = (bool) 1
0x489: Return(); Pop(2)

0x48a: Stack[-4] = (bool) 0
0x48b: Return(); Pop(2)

0x48c: PushEmpty(bool)
0x48d: Call2 0x547

0x48e: Pop(0)
0x48f: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x490: @ lshStopSpeech()
0x491: Pop(0)
0x492: Return(); Pop(0)

0x493: PushEmpty(object, object)
0x494: @ self(Stack[-1])
0x495: Pop(0)
0x496: Stack[-1] = Stack[-3]
0x497: Return(); Pop(2)

0x498: Stack[-1] = 0
0x499: PushEmpty(float, float)
0x49a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x49b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x49c: Push((float)9.999999974752427e-07)
0x49d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49f: Stack[-4] = [0.0, 0.0, 0.0]
0x4a0: Return(); Pop(2)

0x4a1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4a2: Return(); Pop(2)

0x4a3: PushEmpty(int, int)
0x4a4: @ GetVariable(Stack[-3], Stack[-1])
0x4a5: Pop(0)
0x4a6: Stack[-1] = Stack[-4]
0x4a7: Return(); Pop(2)

0x4a8: PushEmpty(float, float)
0x4a9: @ GetGameTime(Stack[-1])
0x4aa: Pop(0)
0x4ab: Push((int) 1)
0x4ac: PushEmpty(int)
0x4ad: Push((int) 24)
0x4ae: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4af: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4b0: Return(); Pop(2)

0x4b1: PushEmpty(string, string)
0x4b2: Stack[-1] = "idle" // @poff=146
0x4b3: Push(Stack[-3])
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4b6: Stack[-1] = Stack[-4]
0x4b7: Return(); Pop(2)

0x4b8: PushEmpty(int, bool, int, bool)
0x4b9: Stack[-2] = (int) 0
0x4ba: Push("all") // @poff=138
0x4bb: PushEmpty(string, int)
0x4bc: Stack[-5] = Stack[-1]
0x4bd: Call2 0x4b1

0x4be: Pop(1)
0x4bf: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4c0: Pop(2)
0x4c1: Pop(0); Push((bool) Stack[-1] == 0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c3: GOTO 0x4c7

0x4c4: Push((int) 1)
0x4c5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4c6: GOTO 0x4ba

0x4c7: Stack[-2] = Stack[-5]
0x4c8: Return(); Pop(4)

0x4c9: PushEmpty()
0x4ca: PushEmpty(int, string)
0x4cb: Stack[-1] = "map_chertez_state" // @poff=296
0x4cc: Call2 0x4a3

0x4cd: Pop(1)
0x4ce: Push((int) 5)
0x4cf: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d1: Push("map_chertez_state") // @poff=296
0x4d2: Push((int) 5)
0x4d3: @ SetVariable(Stack[-2], Stack[-1])
0x4d4: Pop(2)
0x4d5: Push("map_chertez_force") // @poff=332
0x4d6: Push((int) 1)
0x4d7: @ SetVariable(Stack[-2], Stack[-1])
0x4d8: Pop(2)
0x4d9: Return(); Pop(0)

0x4da: PushEmpty()
0x4db: PushEmpty(object, string, float)
0x4dc: PushEmpty(object)
0x4dd: Call2 0x4fc

0x4de: Stack[-1] = Stack[-4]
0x4df: Pop(1)
0x4e0: Stack[-2] = "pt_map_aglaja" // @poff=368
0x4e1: Stack[-1] = (int) -1
0x4e2: Call2 0x50d

0x4e3: Pop(3)
0x4e4: PushEmpty(object)
0x4e5: Call2 0x4fc

0x4e6: Pop(0)
0x4e7: @@ ShowMap(Stack[-1]); Obj=2 // @poff=396
0x4e8: Pop(1)
0x4e9: Return(); Pop(0)

0x4ea: PushEmpty()
0x4eb: Push("ood11Burah1") // @poff=404
0x4ec: Push((int) 1)
0x4ed: @ SetVariable(Stack[-2], Stack[-1])
0x4ee: Pop(2)
0x4ef: Return(); Pop(0)

0x4f0: PushEmpty()
0x4f1: PushEmpty(int, string)
0x4f2: Stack[-1] = "ood11Burah1" // @poff=404
0x4f3: Call2 0x4a3

0x4f4: Pop(1)
0x4f5: Push((int) 0)
0x4f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f8: Stack[-2] = (bool) 1
0x4f9: Return(); Pop(0)

0x4fa: Stack[-2] = (bool) 0
0x4fb: Return(); Pop(0)

0x4fc: PushEmpty(object, object, object, object)
0x4fd: @ GetMainOutdoorScene(Stack[-2])
0x4fe: Pop(0)
0x4ff: Pop(0); PushNull((bool) Stack[-2] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x501: Push("Can't find main outdoor scene") // @poff=428
0x502: @ Trace(Stack[-1])
0x503: Pop(1)
0x504: Stack[-1] = 0
0x505: Stack[-1] = Stack[-5]
0x506: Return(); Pop(4)

0x507: @@ GetMap(Stack[-1]); Obj=2 // @poff=488
0x508: Pop(0)
0x509: Stack[-1] = Stack[-5]
0x50a: Return(); Pop(4)

0x50b: Stack[-1] = 0
0x50c: Stack[-2] = 0
0x50d: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x50e: @ GetMainOutdoorScene(Stack[-2])
0x50f: Pop(0)
0x510: Pop(0); PushNull((bool) Stack[-2] == 0)
0x511: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x512: Push("Can't find main outdoor scene") // @poff=428
0x513: @ Trace(Stack[-1])
0x514: Pop(1)
0x515: Return(); Pop(8)

0x516: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=495
0x517: Pop(0)
0x518: Pop(0); Push((bool) Stack[-1] == 0)
0x519: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51a: Push("Warning: outdoor scene locator ") // @poff=506
0x51b: Pop(1); Push(Stack[-1] + Stack[-11]);
0x51c: Push(" doesnt exist") // @poff=570
0x51d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x51e: @ Trace(Stack[-1])
0x51f: Pop(1)
0x520: @@ GetMap(Stack[-11]); Obj=2 // @poff=488
0x521: Pop(0)
0x522: Pop(0); PushNull((bool) Stack[-11] == 0)
0x523: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x524: Push("Can't find map") // @poff=598
0x525: @ Trace(Stack[-1])
0x526: Pop(1)
0x527: Return(); Pop(8)

0x528: Push(CvectorIndex(Stack[-4], 0))
0x529: Push(CvectorIndex(Stack[-5], 2))
0x52a: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=628
0x52b: Pop(2)
0x52c: Return(); Pop(8)

0x52d: Stack[-2] = 0
0x52e: PushEmpty(int, int)
0x52f: Push("branch") // @poff=641
0x530: @ GetVariable(Stack[-1], Stack[-2])
0x531: Pop(1)
0x532: Push((int) 0)
0x533: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x535: Stack[-3] = (int) 1
0x536: Return(); Pop(2)

0x537: GOTO 0x53d

0x538: Push((int) 1)
0x539: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53b: Stack[-3] = (int) 2
0x53c: Return(); Pop(2)

0x53d: Stack[-3] = (int) 3
0x53e: Return(); Pop(2)

0x53f: Stack[-1] = (int) 515592
0x540: Return(); Pop(0)

0x541: Stack[-1] = (int) 511961
0x542: Return(); Pop(0)

0x543: Stack[-1] = "ui/NPC_Burah.png" // @poff=655
0x544: Return(); Pop(0)

0x545: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=689
0x546: Return(); Pop(0)

0x547: Stack[-1] = (bool) 1
0x548: Return(); Pop(0)

