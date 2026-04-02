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
	W:k1q01
	W:k1q01KaterinaGotoAlexandr
	W:pt_map_alexandr
	A:AddMark
	W:quest_k1_01
	W:remove_katerina
	A:ShowMap
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
	W:ui/NPC_Katerina.png
	W:ui/NPC_Katerina_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006b00310071003000310000006b0031007100300031004b00610074006500720069006e00610047006f0074006f0041006c006500780061006e00640072000000700074005f006d00610070005f0061006c006500780061006e006400720000004164644d61726b00710075006500730074005f006b0031005f00300031000000720065006d006f00760065005f006b00610074006500720069006e006100000053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f004b00610074006500720069006e0061002e0070006e0067000000750069002f004e00500043005f004b00610074006500720069006e0061005f0062002e0070006e0067000000
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x188
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcc Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x18c Vars = (string)
		EVENT_6 Op = 0x1a0 Vars = ()
		EVENT_5 Op = 0x1ad Vars = ()
		EVENT_7 Op = 0x1fc Vars = (int)
		EVENT_45 Op = 0x23e Vars = (bool)
		EVENT_0 Op = 0x24a Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2ce

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
0x11: Call2 0x3d5

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x328

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2d3

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x4df

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x4dd

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x4e1

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x4e3

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x4cc

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
0x55: Call2 0x317

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
0x63: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x44b

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0xb6

0x6c: Pop(1)
0x6d: Push((int) 524639)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: Push((int) 524640)
0x73: Push((int) 27569)
0x74: Push((int) 25979)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 526284)
0x78: Push((int) 27569)
0x79: Push((int) 27562)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x98

0x7d: PushEmpty(string)
0x7e: Stack[-1] = "Neutral" // @poff=89
0x7f: Call2 0xb6

0x80: Pop(1)
0x81: Push((int) 524641)
0x82: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x83: Pop(1)
0x84: @@@ ClearReplies(); Obj=0 // @poff=116
0x85: Pop(0)
0x86: Push((int) 524642)
0x87: Push((int) 27563)
0x88: Push((int) 25981)
0x89: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8a: Pop(3)
0x8b: Push((int) 526287)
0x8c: Push((int) 27567)
0x8d: Push((int) 27565)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: Push((int) 526288)
0x91: Push((int) -1)
0x92: Push((int) 27566)
0x93: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x94: Pop(3)
0x95: GOTO 0x98

0x96: Return(); Pop(0)

0x97: GOTO 0x62

0x98: PushEmpty(bool)
0x99: Call2 0x4e5

0x9a: Pop(0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x9c: @ lshWaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: PushEmpty(string)
0xa2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa3: Call2 0x3b2

0xa4: Pop(1)
0xa5: GOTO 0x9c

0xa6: GOTO 0xb5

0xa7: Push("all") // @poff=138
0xa8: Push("idle") // @poff=146
0xa9: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa: Pop(2)
0xab: @ WaitForAnimEnd()
0xac: Pop(0)
0xad: Push( Stack[3 + Tasks[-1].StackPointer] )
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: GOTO 0xb5

0xb0: Push("all") // @poff=138
0xb1: Push("idle") // @poff=146
0xb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: GOTO 0xab

0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: PushEmpty(bool)
0xb8: Call2 0x4e5

0xb9: Pop(0)
0xba: Pop(1); Push((bool) Stack[-1] == 0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Return(); Pop(0)

0xbd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Return(); Pop(0)

0xc0: PushEmpty(string, bool)
0xc1: Stack[-3] = Stack[-2]
0xc2: Push("") // @poff=102
0xc3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc5: Stack[-1] = (bool) 0
0xc6: GOTO 0xc8

0xc7: Stack[-1] = (bool) 1
0xc8: Call2 0x3b9

0xc9: Pop(2)
0xca: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: Push((int) 1)
0xce: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0xcf: PushEmpty()
0xd0: Call2 0x3ce

0xd1: Pop(0)
0xd2: Push((int) 25990)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x41c

0xd9: Pop(2)
0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x43b

0xde: Pop(2)
0xdf: Push((int) 25978)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x44b

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral" // @poff=89
0xe9: Call2 0xb6

0xea: Pop(1)
0xeb: Push((int) 524639)
0xec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xed: Pop(1)
0xee: @@@ ClearReplies(); Obj=0 // @poff=116
0xef: Pop(0)
0xf0: Push((int) 524640)
0xf1: Push((int) 27569)
0xf2: Push((int) 25979)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf4: Pop(3)
0xf5: Push((int) 526284)
0xf6: Push((int) 27569)
0xf7: Push((int) 27562)
0xf8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral" // @poff=89
0xfd: Call2 0xb6

0xfe: Pop(1)
0xff: Push((int) 524641)
0x100: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x101: Pop(1)
0x102: @@@ ClearReplies(); Obj=0 // @poff=116
0x103: Pop(0)
0x104: Push((int) 524642)
0x105: Push((int) 27563)
0x106: Push((int) 25981)
0x107: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x108: Pop(3)
0x109: Push((int) 526287)
0x10a: Push((int) 27567)
0x10b: Push((int) 27565)
0x10c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10d: Pop(3)
0x10e: Push((int) 526288)
0x10f: Push((int) -1)
0x110: Push((int) 27566)
0x111: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 27567)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Neutral" // @poff=89
0x119: Call2 0xb6

0x11a: Pop(1)
0x11b: Push((int) 526289)
0x11c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11d: Pop(1)
0x11e: @@@ ClearReplies(); Obj=0 // @poff=116
0x11f: Pop(0)
0x120: Push((int) 526290)
0x121: Push((int) -1)
0x122: Push((int) 27568)
0x123: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x124: Pop(3)
0x125: Return(); Pop(0)

0x126: Push((int) 27563)
0x127: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x129: PushEmpty(string)
0x12a: Stack[-1] = "Neutral" // @poff=89
0x12b: Call2 0xb6

0x12c: Pop(1)
0x12d: Push((int) 526285)
0x12e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12f: Pop(1)
0x130: @@@ ClearReplies(); Obj=0 // @poff=116
0x131: Pop(0)
0x132: Push((int) 526286)
0x133: Push((int) -1)
0x134: Push((int) 27564)
0x135: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: Push((int) 27569)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral" // @poff=89
0x13d: Call2 0xb6

0x13e: Pop(1)
0x13f: Push((int) 526291)
0x140: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x141: Pop(1)
0x142: @@@ ClearReplies(); Obj=0 // @poff=116
0x143: Pop(0)
0x144: Push((int) 526292)
0x145: Push((int) 25989)
0x146: Push((int) 27570)
0x147: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x148: Pop(3)
0x149: Push((int) 526293)
0x14a: Push((int) 25989)
0x14b: Push((int) 27572)
0x14c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: Push((int) 25989)
0x150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x152: PushEmpty(string)
0x153: Stack[-1] = "Neutral" // @poff=89
0x154: Call2 0xb6

0x155: Pop(1)
0x156: Push((int) 524650)
0x157: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x158: Pop(1)
0x159: @@@ ClearReplies(); Obj=0 // @poff=116
0x15a: Pop(0)
0x15b: Push((int) 526296)
0x15c: Push((int) 27577)
0x15d: Push((int) 27576)
0x15e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: Push((int) 27577)
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Neutral" // @poff=89
0x166: Call2 0xb6

0x167: Pop(1)
0x168: Push((int) 526297)
0x169: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16a: Pop(1)
0x16b: @@@ ClearReplies(); Obj=0 // @poff=116
0x16c: Pop(0)
0x16d: Push((int) 524651)
0x16e: Push((int) -1)
0x16f: Push((int) 25990)
0x170: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x174: PushEmpty(bool)
0x175: Call2 0x4e5

0x176: Pop(0)
0x177: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x178: @ lshStopAnimation()
0x179: Pop(0)
0x17a: GOTO 0x17d

0x17b: @ StopAnimation()
0x17c: Pop(0)
0x17d: Return(); Pop(0)

0x17e: GOTO 0xcd

0x17f: Return(); Pop(0)

0x180: PushEmpty()
0x181: PushEmpty(int, object)
0x182: Stack[-3] = Stack[-1]
0x183: Push(-2, 1); TaskCall(1)
0x184: Call2 0xd

0x185: Pop(-2, 1); TaskReturn
0x186: Pop(2)
0x187: Return(); Pop(0)

0x188: PushEmpty()
0x189: Call2 0x1b1

0x18a: Pop(0)
0x18b: Return(); Pop(0)

0x18c: PushEmpty(bool, bool)
0x18d: Push("cleanup") // @poff=156
0x18e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x190: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x191: @ IsLoaded(Stack[-1])
0x192: Pop(0)
0x193: Pop(0); Push((bool) Stack[-1] == 0)
0x194: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x195: PushEmpty(object)
0x196: Call2 0x3d5

0x197: Pop(0)
0x198: @ RemoveActor(Stack[-1])
0x199: Pop(1)
0x19a: GOTO 0x19f

0x19b: Push("restore") // @poff=172
0x19c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x19f: Return(); Pop(2)

0x1a0: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a2: PushEmpty(object)
0x1a3: Call2 0x3d5

0x1a4: Pop(0)
0x1a5: @ RemoveActor(Stack[-1])
0x1a6: Pop(1)
0x1a7: @ Hold()
0x1a8: Pop(0)
0x1a9: PushEmpty()
0x1aa: Call2 0x222

0x1ab: Pop(0)
0x1ac: Return(); Pop(0)

0x1ad: PushEmpty()
0x1ae: Call2 0x231

0x1af: Pop(0)
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty(bool)
0x1b2: Call2 0x2ce

0x1b3: Pop(0)
0x1b4: Pop(1); Push((bool) Stack[-1] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: PushEmpty()
0x1b7: Push(-0, 0); TaskCall(0)
0x1b8: Call2 0x0

0x1b9: Pop(-0, 0); TaskReturn
0x1ba: Pop(0)
0x1bb: PushEmpty()
0x1bc: Call2 0x1ad

0x1bd: Pop(0)
0x1be: @ GetDirection(Stack[-0]T)
0x1bf: Pop(0)
0x1c0: PushEmpty()
0x1c1: Call2 0x267

0x1c2: Pop(0)
0x1c3: GOTO 0x1c0

0x1c4: Return(); Pop(0)

0x1c5: PushEmpty(object, object)
0x1c6: Push("player") // @poff=188
0x1c7: @ FindActor(Stack[-2], Stack[-1])
0x1c8: Pop(1)
0x1c9: Pop(0); Push((bool) Stack[-1] == 0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cb: Stack[-3] = (bool) 0
0x1cc: Return(); Pop(2)

0x1cd: PushEmpty(bool, object)
0x1ce: Stack[-3] = Stack[-1]
0x1cf: Call2 0x2c5

0x1d0: Stack[-2] = Stack[-5]
0x1d1: Pop(2)
0x1d2: Return(); Pop(2)

0x1d3: Stack[-1] = 0
0x1d4: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x1d5: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x1d6: @ RotateAsync(Stack[-2], Stack[-1])
0x1d7: Pop(2)
0x1d8: Return(); Pop(0)

0x1d9: PushEmpty(object, bool, object, bool)
0x1da: Push("player") // @poff=188
0x1db: @ FindActor(Stack[-3], Stack[-1])
0x1dc: Pop(1)
0x1dd: Pop(0); Push((bool) Stack[-2] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1df: Stack[-5] = (bool) 0
0x1e0: Return(); Pop(4)

0x1e1: PushEmpty(float, object)
0x1e2: Stack[-4] = Stack[-1]
0x1e3: Call2 0x2b3

0x1e4: Pop(1)
0x1e5: Push((float)90000.0)
0x1e6: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e8: Stack[-5] = (bool) 0
0x1e9: Return(); Pop(4)

0x1ea: @ CanSee(Stack[-1], Stack[-2])
0x1eb: Pop(0)
0x1ec: Stack[-1] = Stack[-5]
0x1ed: Return(); Pop(4)

0x1ee: Stack[-2] = 0
0x1ef: PushEmpty(float, float)
0x1f0: Push((int) 8)
0x1f1: Push((int) 16)
0x1f2: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(2)
0x1f4: Push((int) 10)
0x1f5: @ SetTimer(Stack[-1], Stack[-2])
0x1f6: Pop(1)
0x1f7: Return(); Pop(2)

0x1f8: Push((int) 10)
0x1f9: @ KillTimer(Stack[-1])
0x1fa: Pop(1)
0x1fb: Return(); Pop(0)

0x1fc: PushEmpty()
0x1fd: Push((int) 10)
0x1fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x200: PushEmpty()
0x201: Call2 0x1f8

0x202: Pop(0)
0x203: PushEmpty(bool)
0x204: Stack[-1] = (bool) 0
0x205: PushEmpty(bool)
0x206: Call2 0x2ce

0x207: Pop(0)
0x208: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x209: PushEmpty(bool)
0x20a: Call2 0x1d9

0x20b: Pop(0)
0x20c: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20d: Stack[-1] = (bool) 1
0x20e: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x20f: PushEmpty(bool)
0x210: Call2 0x1c5

0x211: Pop(0)
0x212: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x213: PushEmpty(bool, object)
0x214: PushEmpty(object)
0x215: Call2 0x3d5

0x216: Stack[-1] = Stack[-2]
0x217: Pop(1)
0x218: Call2 0x362

0x219: Pop(2)
0x21a: GOTO 0x221

0x21b: PushEmpty()
0x21c: Call2 0x1d4

0x21d: Pop(0)
0x21e: PushEmpty()
0x21f: Call2 0x1ef

0x220: Pop(0)
0x221: Return(); Pop(0)

0x222: PushEmpty()
0x223: Call2 0x2ae

0x224: Pop(0)
0x225: PushEmpty()
0x226: Call2 0x1f8

0x227: Pop(0)
0x228: @ lshStopSpeech()
0x229: Pop(0)
0x22a: @ lshStopAnimation()
0x22b: Pop(0)
0x22c: @ StopAsync()
0x22d: Pop(0)
0x22e: @ Hold()
0x22f: Pop(0)
0x230: Return(); Pop(0)

0x231: @ StopGroup0()
0x232: Pop(0)
0x233: PushEmpty()
0x234: Call2 0x1f8

0x235: Pop(0)
0x236: PushEmpty(string)
0x237: Stack[-1] = "Neutral" // @poff=89
0x238: Call2 0x3b2

0x239: Pop(1)
0x23a: PushEmpty()
0x23b: Call2 0x1ef

0x23c: Pop(0)
0x23d: Return(); Pop(0)

0x23e: PushEmpty()
0x23f: Push(Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x241: PushEmpty()
0x242: Call2 0x1ef

0x243: Pop(0)
0x244: GOTO 0x249

0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral" // @poff=89
0x247: Call2 0x3b2

0x248: Pop(1)
0x249: Return(); Pop(0)

0x24a: PushEmpty(bool, bool)
0x24b: @ IsOverrideActive(Stack[-1])
0x24c: Pop(0)
0x24d: Pop(0); Push((bool) Stack[-1] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x24f: EventDisable(0)
0x250: PushEmpty()
0x251: Call2 0x2ae

0x252: Pop(0)
0x253: PushEmpty(bool, object)
0x254: Stack[-5] = Stack[-1]
0x255: Call2 0x2c5

0x256: Pop(2)
0x257: EventEnable(0)
0x258: PushEmpty(object)
0x259: Stack[-4] = Stack[-1]
0x25a: Call2 0x180

0x25b: Pop(1)
0x25c: PushEmpty(string)
0x25d: Stack[-1] = "Neutral" // @poff=89
0x25e: Call2 0x3b2

0x25f: Pop(1)
0x260: PushEmpty()
0x261: Call2 0x1f8

0x262: Pop(0)
0x263: PushEmpty()
0x264: Call2 0x1ef

0x265: Pop(0)
0x266: Return(); Pop(2)

0x267: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x268: @ WaitForAnimEnd()
0x269: Pop(0)
0x26a: PushEmpty(bool)
0x26b: Call2 0x2ce

0x26c: Pop(0)
0x26d: Pop(1); Push((bool) Stack[-1] == 0)
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: Return(); Pop(12)

0x270: PushEmpty(int)
0x271: Call2 0x40b

0x272: Stack[-1] = Stack[-7]
0x273: Pop(1)
0x274: Stack[-5] = (int) 0
0x275: PushEmpty(bool)
0x276: Stack[-1] = (bool) 0
0x277: Push((int) 5)
0x278: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27a: PushEmpty(bool)
0x27b: Call2 0x2ce

0x27c: Pop(0)
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: Stack[-1] = (bool) 1
0x27f: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x280: Pop(0); Push((bool) Stack[-6] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x282: Push((int) 3)
0x283: @ Sleep(Stack[-1], Stack[-5])
0x284: Pop(1)
0x285: Pop(0); Push((bool) Stack[-4] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x2a9

0x288: GOTO 0x29e

0x289: @ irand(Stack[-3], Stack[-6])
0x28a: Pop(0)
0x28b: Push((int) 5)
0x28c: @ irand(Stack[-3], Stack[-1])
0x28d: Pop(1)
0x28e: Push((int) 0)
0x28f: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x291: Stack[-3] = (int) 0
0x292: Push("all") // @poff=138
0x293: PushEmpty(string, int)
0x294: Stack[-6] = Stack[-1]
0x295: Call2 0x404

0x296: Pop(1)
0x297: @ PlayAnimation(Stack[-2], Stack[-1])
0x298: Pop(2)
0x299: @ WaitForAnimEnd(Stack[-1])
0x29a: Pop(0)
0x29b: Pop(0); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: GOTO 0x2a9

0x29e: PushEmpty(bool)
0x29f: Call2 0x2ac

0x2a0: Pop(0)
0x2a1: Pop(1); Push((bool) Stack[-1] == 0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: GOTO 0x2a9

0x2a4: @ ResetAAS()
0x2a5: Pop(0)
0x2a6: Push((int) 1)
0x2a7: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2a8: GOTO 0x275

0x2a9: @ ResetAAS()
0x2aa: Pop(0)
0x2ab: Return(); Pop(12)

0x2ac: Stack[-1] = (bool) 1
0x2ad: Return(); Pop(0)

0x2ae: @ StopAnimation()
0x2af: Pop(0)
0x2b0: @ StopGroup0()
0x2b1: Pop(0)
0x2b2: Return(); Pop(0)

0x2b3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2b4: @ GetPosition(Stack[-3])
0x2b5: Pop(0)
0x2b6: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x2b7: Pop(0)
0x2b8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2b9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2ba: Return(); Pop(6)

0x2bb: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2bc: @ GetPosition(Stack[-3])
0x2bd: Pop(0)
0x2be: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2bf: Push(CvectorIndex(Stack[-2], 0))
0x2c0: Push(CvectorIndex(Stack[-3], 2))
0x2c1: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2c2: Pop(2)
0x2c3: Stack[-1] = Stack[-8]
0x2c4: Return(); Pop(6)

0x2c5: PushEmpty(cvector, cvector)
0x2c6: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x2c7: Pop(0)
0x2c8: PushEmpty(bool, cvector)
0x2c9: Stack[-3] = Stack[-1]
0x2ca: Call2 0x2bb

0x2cb: Stack[-2] = Stack[-6]
0x2cc: Pop(2)
0x2cd: Return(); Pop(2)

0x2ce: PushEmpty(bool, bool)
0x2cf: @ IsLoaded(Stack[-1])
0x2d0: Pop(0)
0x2d1: Stack[-1] = Stack[-3]
0x2d2: Return(); Pop(2)

0x2d3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2d4: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x2d5: Pop(0)
0x2d6: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x2d7: Pop(0)
0x2d8: Push(CvectorIndex(Stack[-8], 1))
0x2d9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2da: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2db: @ GetPosition(Stack[-7])
0x2dc: Pop(0)
0x2dd: @ GetEyesHeight(Stack[-9])
0x2de: Pop(0)
0x2df: Push(CvectorIndex(Stack[-7], 1))
0x2e0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2e1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2e2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2e3: Push(CvectorIndex(Stack[-6], 1))
0x2e4: Stack[-1] = (int) 0
0x2e5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2e6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2e7: Pop(1); Push(Sqrt(Stack[-1]))
0x2e8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2e9: Stack[-5] = -Stack[-6]; Pop(0);
0x2ea: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2eb: PushEmpty(cvector, cvector)
0x2ec: Push([0.0, 1.0, 0.0])
0x2ed: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2ee: Call2 0x3db

0x2ef: Pop(1)
0x2f0: Push((int) 25)
0x2f1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2f2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f3: Push([0.0, 10.0, 0.0])
0x2f4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2f5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2f6: @ IsOverrideActive(Stack[-2])
0x2f7: Pop(0)
0x2f8: Push(Stack[-2])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-21] = (bool) 0
0x2fb: Return(); Pop(18)

0x2fc: @ StopWorld()
0x2fd: Pop(0)
0x2fe: @ CameraTransit(Stack[-3], Stack[-5])
0x2ff: Pop(0)
0x300: Push(CvectorIndex(Stack[-4], 0))
0x301: Push(CvectorIndex(Stack[-5], 2))
0x302: @ Rotate(Stack[-2], Stack[-1])
0x303: Pop(2)
0x304: PushEmpty(bool)
0x305: Call2 0x4e5

0x306: Pop(0)
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: GOTO 0x311

0x309: Push("head") // @poff=228
0x30a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x30b: Pop(1)
0x30c: Push(Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30e: Push("head") // @poff=228
0x30f: @ LookAsyncCamera(Stack[-1])
0x310: Pop(1)
0x311: @ CameraWaitForPlayFinish()
0x312: Pop(0)
0x313: @ ResumeWorld()
0x314: Pop(0)
0x315: Stack[-21] = (bool) 1
0x316: Return(); Pop(18)

0x317: PushEmpty(bool, bool)
0x318: @ CameraSwitchToNormal()
0x319: Pop(0)
0x31a: PushEmpty(bool)
0x31b: Call2 0x4e5

0x31c: Pop(0)
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: GOTO 0x327

0x31f: Push("head") // @poff=228
0x320: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x321: Pop(1)
0x322: Push(Stack[-1])
0x323: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x324: Push("head") // @poff=228
0x325: @ UnlookAsync(Stack[-1])
0x326: Pop(1)
0x327: Return(); Pop(2)

0x328: PushEmpty(int, int, int, int)
0x329: Push("voice_common") // @poff=238
0x32a: @ GetVariable(Stack[-1], Stack[-3])
0x32b: Pop(1)
0x32c: Push(Stack[-2])
0x32d: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x32e: PushEmpty(bool, object)
0x32f: Stack[-7] = Stack[-1]
0x330: Call2 0x362

0x331: Pop(1)
0x332: Pop(1); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x334: PushEmpty(bool, object)
0x335: Stack[-7] = Stack[-1]
0x336: Call2 0x387

0x337: Pop(1)
0x338: Pop(1); Push((bool) Stack[-1] == 0)
0x339: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33a: Stack[-6] = (bool) 0
0x33b: Return(); Pop(4)

0x33c: Push((int) 2)
0x33d: @ irand(Stack[-2], Stack[-1])
0x33e: Pop(1)
0x33f: Push(Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x341: Push("voice_common") // @poff=238
0x342: Push((int) 1)
0x343: Pop(1); Push(Stack[-4] + Stack[-1]);
0x344: Push((int) 3)
0x345: Pop(2); Push(Stack[-2] % Stack[-1]);
0x346: @ SetVariable(Stack[-2], Stack[-1])
0x347: Pop(2)
0x348: GOTO 0x34d

0x349: Push("voice_common") // @poff=238
0x34a: Push((int) 0)
0x34b: @ SetVariable(Stack[-2], Stack[-1])
0x34c: Pop(2)
0x34d: GOTO 0x360

0x34e: PushEmpty(bool, object)
0x34f: Stack[-7] = Stack[-1]
0x350: Call2 0x387

0x351: Pop(1)
0x352: Pop(1); Push((bool) Stack[-1] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x354: PushEmpty(bool, object)
0x355: Stack[-7] = Stack[-1]
0x356: Call2 0x362

0x357: Pop(1)
0x358: Pop(1); Push((bool) Stack[-1] == 0)
0x359: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35a: Stack[-6] = (bool) 0
0x35b: Return(); Pop(4)

0x35c: Push("voice_common") // @poff=238
0x35d: Push((int) 1)
0x35e: @ SetVariable(Stack[-2], Stack[-1])
0x35f: Pop(2)
0x360: Stack[-6] = (bool) 1
0x361: Return(); Pop(4)

0x362: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x363: Stack[-5] = "c" // @poff=264
0x364: Stack[-4] = (int) 0
0x365: Push((int) 1)
0x366: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x367: Push((int) 1)
0x368: Pop(1); Push(Stack[-5] + Stack[-1]);
0x369: Pop(1); Push(Stack[-6] + Stack[-1]);
0x36a: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x36b: Pop(1)
0x36c: Pop(0); Push((bool) Stack[-3] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: GOTO 0x372

0x36f: Push((int) 1)
0x370: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x371: GOTO 0x365

0x372: Pop(0); Push((bool) Stack[-4] == 0)
0x373: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x374: Stack[-12] = (bool) 0
0x375: Return(); Pop(10)

0x376: Stack[-2] = (int) 0
0x377: Push((int) 1)
0x378: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37a: @ irand(Stack[-2], Stack[-4])
0x37b: Pop(0)
0x37c: Push((int) 1)
0x37d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x37e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x37f: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x380: Pop(1)
0x381: PushEmpty(bool, string)
0x382: Stack[-3] = Stack[-1]
0x383: Call2 0x3bf

0x384: Stack[-2] = Stack[-14]
0x385: Pop(2)
0x386: Return(); Pop(10)

0x387: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x388: Push("d") // @poff=234
0x389: PushEmpty(int)
0x38a: Call2 0x3fb

0x38b: Pop(0)
0x38c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38d: Push("m") // @poff=292
0x38e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x38f: Stack[-4] = (int) 0
0x390: Push((int) 1)
0x391: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x392: Push((int) 1)
0x393: Pop(1); Push(Stack[-5] + Stack[-1]);
0x394: Pop(1); Push(Stack[-6] + Stack[-1]);
0x395: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x396: Pop(1)
0x397: Pop(0); Push((bool) Stack[-3] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: GOTO 0x39d

0x39a: Push((int) 1)
0x39b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x39c: GOTO 0x390

0x39d: Pop(0); Push((bool) Stack[-4] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: Stack[-12] = (bool) 0
0x3a0: Return(); Pop(10)

0x3a1: Stack[-2] = (int) 0
0x3a2: Push((int) 1)
0x3a3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a5: @ irand(Stack[-2], Stack[-4])
0x3a6: Pop(0)
0x3a7: Push((int) 1)
0x3a8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3aa: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3ab: Pop(1)
0x3ac: PushEmpty(bool, string)
0x3ad: Stack[-3] = Stack[-1]
0x3ae: Call2 0x3bf

0x3af: Stack[-2] = Stack[-14]
0x3b0: Pop(2)
0x3b1: Return(); Pop(10)

0x3b2: PushEmpty(float, float, float, float)
0x3b3: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3b4: Pop(0)
0x3b5: Push((bool) 0)
0x3b6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3b7: Pop(1)
0x3b8: Return(); Pop(4)

0x3b9: PushEmpty(float, float, float, float)
0x3ba: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3bb: Pop(0)
0x3bc: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3bd: Pop(0)
0x3be: Return(); Pop(4)

0x3bf: PushEmpty(bool, bool)
0x3c0: PushEmpty(bool)
0x3c1: Call2 0x4e5

0x3c2: Pop(0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c4: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3c5: Pop(0)
0x3c6: Push(Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c8: @ lshPlaySpeech(Stack[-3])
0x3c9: Pop(0)
0x3ca: Stack[-4] = (bool) 1
0x3cb: Return(); Pop(2)

0x3cc: Stack[-4] = (bool) 0
0x3cd: Return(); Pop(2)

0x3ce: PushEmpty(bool)
0x3cf: Call2 0x4e5

0x3d0: Pop(0)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d2: @ lshStopSpeech()
0x3d3: Pop(0)
0x3d4: Return(); Pop(0)

0x3d5: PushEmpty(object, object)
0x3d6: @ self(Stack[-1])
0x3d7: Pop(0)
0x3d8: Stack[-1] = Stack[-3]
0x3d9: Return(); Pop(2)

0x3da: Stack[-1] = 0
0x3db: PushEmpty(float, float)
0x3dc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3dd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3de: Push((float)9.999999974752427e-07)
0x3df: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e1: Stack[-4] = [0.0, 0.0, 0.0]
0x3e2: Return(); Pop(2)

0x3e3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3e4: Return(); Pop(2)

0x3e5: PushEmpty(int, int)
0x3e6: @ GetVariable(Stack[-3], Stack[-1])
0x3e7: Pop(0)
0x3e8: Stack[-1] = Stack[-4]
0x3e9: Return(); Pop(2)

0x3ea: PushEmpty(object, object)
0x3eb: @ FindActor(Stack[-1], Stack[-4])
0x3ec: Pop(0)
0x3ed: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ef: Stack[-5] = (bool) 0
0x3f0: Return(); Pop(2)

0x3f1: @ Trigger(Stack[-1], Stack[-3])
0x3f2: Pop(0)
0x3f3: Stack[-5] = (bool) 1
0x3f4: Return(); Pop(2)

0x3f5: Stack[-1] = 0
0x3f6: PushEmpty(float, float)
0x3f7: @ GetGameTime(Stack[-1])
0x3f8: Pop(0)
0x3f9: Stack[-1] = Stack[-3]
0x3fa: Return(); Pop(2)

0x3fb: PushEmpty(float, float)
0x3fc: @ GetGameTime(Stack[-1])
0x3fd: Pop(0)
0x3fe: Push((int) 1)
0x3ff: PushEmpty(int)
0x400: Push((int) 24)
0x401: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x402: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x403: Return(); Pop(2)

0x404: PushEmpty(string, string)
0x405: Stack[-1] = "idle" // @poff=146
0x406: Push(Stack[-3])
0x407: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x408: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x409: Stack[-1] = Stack[-4]
0x40a: Return(); Pop(2)

0x40b: PushEmpty(int, bool, int, bool)
0x40c: Stack[-2] = (int) 0
0x40d: Push("all") // @poff=138
0x40e: PushEmpty(string, int)
0x40f: Stack[-5] = Stack[-1]
0x410: Call2 0x404

0x411: Pop(1)
0x412: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x413: Pop(2)
0x414: Pop(0); Push((bool) Stack[-1] == 0)
0x415: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x416: GOTO 0x41a

0x417: Push((int) 1)
0x418: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x419: GOTO 0x40d

0x41a: Stack[-2] = Stack[-5]
0x41b: Return(); Pop(4)

0x41c: PushEmpty(object, object)
0x41d: Push("k1q01") // @poff=296
0x41e: Push((int) 1)
0x41f: @ SetVariable(Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: PushEmpty(object)
0x422: Call2 0x49a

0x423: Stack[-1] = Stack[-2]
0x424: Pop(1)
0x425: Push("k1q01KaterinaGotoAlexandr") // @poff=308
0x426: Push("pt_map_alexandr") // @poff=360
0x427: Push((int) 1)
0x428: Push((int) 524727)
0x429: PushEmpty(float)
0x42a: Call2 0x3f6

0x42b: Pop(0)
0x42c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=392
0x42d: Pop(5)
0x42e: PushEmpty()
0x42f: Call2 0x457

0x430: Pop(0)
0x431: PushEmpty()
0x432: Call2 0x464

0x433: Pop(0)
0x434: PushEmpty(bool, string, string)
0x435: Stack[-2] = "quest_k1_01" // @poff=400
0x436: Stack[-1] = "remove_katerina" // @poff=424
0x437: Call2 0x3ea

0x438: Pop(3)
0x439: Return(); Pop(2)

0x43a: Stack[-1] = 0
0x43b: PushEmpty()
0x43c: PushEmpty(object, string, float)
0x43d: PushEmpty(object)
0x43e: Call2 0x49a

0x43f: Stack[-1] = Stack[-4]
0x440: Pop(1)
0x441: Stack[-2] = "pt_map_alexandr" // @poff=360
0x442: Stack[-1] = (int) 2
0x443: Call2 0x4ab

0x444: Pop(3)
0x445: PushEmpty(object)
0x446: Call2 0x49a

0x447: Pop(0)
0x448: @@ ShowMap(Stack[-1]); Obj=2 // @poff=456
0x449: Pop(1)
0x44a: Return(); Pop(0)

0x44b: PushEmpty()
0x44c: PushEmpty(int, string)
0x44d: Stack[-1] = "k1q01" // @poff=296
0x44e: Call2 0x3e5

0x44f: Pop(1)
0x450: Push((int) 0)
0x451: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x453: Stack[-2] = (bool) 1
0x454: Return(); Pop(0)

0x455: Stack[-2] = (bool) 0
0x456: Return(); Pop(0)

0x457: PushEmpty(object, object)
0x458: Push((int) 318)
0x459: Push((int) 1)
0x45a: Push((int) 524734)
0x45b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x45c: Pop(3)
0x45d: PushEmpty(bool, object, int)
0x45e: Stack[-4] = Stack[-2]
0x45f: Stack[-1] = (int) -1
0x460: Call2 0x47e

0x461: Pop(3)
0x462: Return(); Pop(2)

0x463: Stack[-1] = 0
0x464: PushEmpty(object, object)
0x465: Push((int) 319)
0x466: Push((int) 1)
0x467: Push((int) 524735)
0x468: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x469: Pop(3)
0x46a: PushEmpty(bool, object, int)
0x46b: Stack[-4] = Stack[-2]
0x46c: Stack[-1] = (int) 318
0x46d: Call2 0x47e

0x46e: Pop(3)
0x46f: Return(); Pop(2)

0x470: Stack[-1] = 0
0x471: PushEmpty(object, object)
0x472: @ GetDiaryRoot(Stack[-1])
0x473: Pop(0)
0x474: Pop(0); Push((bool) Stack[-1] == 0)
0x475: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x476: Push("Can't retrieve diary root") // @poff=464
0x477: @ Trace(Stack[-1])
0x478: Pop(1)
0x479: Stack[-3] = (bool) 0
0x47a: Return(); Pop(2)

0x47b: Stack[-1] = Stack[-3]
0x47c: Return(); Pop(2)

0x47d: Stack[-1] = 0
0x47e: PushEmpty(object, object, int, object, object, int)
0x47f: PushEmpty(object)
0x480: Call2 0x471

0x481: Stack[-1] = Stack[-4]
0x482: Pop(1)
0x483: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=516
0x484: Pop(0)
0x485: Pop(0); Push((bool) Stack[-2] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x487: Push("Can't find diary parent with id: ") // @poff=521
0x488: Pop(1); Push(Stack[-1] + Stack[-8]);
0x489: @ Trace(Stack[-1])
0x48a: Pop(1)
0x48b: Stack[-9] = (bool) 0
0x48c: Return(); Pop(6)

0x48d: @@ AddChild(Stack[-8]); Obj=2 // @poff=589
0x48e: Pop(0)
0x48f: Push((int) 7)
0x490: @ SendWorldWndMessage(Stack[-1])
0x491: Pop(1)
0x492: @@ GetCategory(Stack[-1]); Obj=8 // @poff=598
0x493: Pop(0)
0x494: @ SetDiarySection(Stack[-1])
0x495: Pop(0)
0x496: Stack[-9] = (bool) 0
0x497: Return(); Pop(6)

0x498: Stack[-2] = 0
0x499: Stack[-3] = 0
0x49a: PushEmpty(object, object, object, object)
0x49b: @ GetMainOutdoorScene(Stack[-2])
0x49c: Pop(0)
0x49d: Pop(0); PushNull((bool) Stack[-2] == 0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x49f: Push("Can't find main outdoor scene") // @poff=610
0x4a0: @ Trace(Stack[-1])
0x4a1: Pop(1)
0x4a2: Stack[-1] = 0
0x4a3: Stack[-1] = Stack[-5]
0x4a4: Return(); Pop(4)

0x4a5: @@ GetMap(Stack[-1]); Obj=2 // @poff=670
0x4a6: Pop(0)
0x4a7: Stack[-1] = Stack[-5]
0x4a8: Return(); Pop(4)

0x4a9: Stack[-1] = 0
0x4aa: Stack[-2] = 0
0x4ab: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x4ac: @ GetMainOutdoorScene(Stack[-2])
0x4ad: Pop(0)
0x4ae: Pop(0); PushNull((bool) Stack[-2] == 0)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b0: Push("Can't find main outdoor scene") // @poff=610
0x4b1: @ Trace(Stack[-1])
0x4b2: Pop(1)
0x4b3: Return(); Pop(8)

0x4b4: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=677
0x4b5: Pop(0)
0x4b6: Pop(0); Push((bool) Stack[-1] == 0)
0x4b7: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b8: Push("Warning: outdoor scene locator ") // @poff=688
0x4b9: Pop(1); Push(Stack[-1] + Stack[-11]);
0x4ba: Push(" doesnt exist") // @poff=752
0x4bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4bc: @ Trace(Stack[-1])
0x4bd: Pop(1)
0x4be: @@ GetMap(Stack[-11]); Obj=2 // @poff=670
0x4bf: Pop(0)
0x4c0: Pop(0); PushNull((bool) Stack[-11] == 0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c2: Push("Can't find map") // @poff=780
0x4c3: @ Trace(Stack[-1])
0x4c4: Pop(1)
0x4c5: Return(); Pop(8)

0x4c6: Push(CvectorIndex(Stack[-4], 0))
0x4c7: Push(CvectorIndex(Stack[-5], 2))
0x4c8: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=810
0x4c9: Pop(2)
0x4ca: Return(); Pop(8)

0x4cb: Stack[-2] = 0
0x4cc: PushEmpty(int, int)
0x4cd: Push("branch") // @poff=823
0x4ce: @ GetVariable(Stack[-1], Stack[-2])
0x4cf: Pop(1)
0x4d0: Push((int) 0)
0x4d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d3: Stack[-3] = (int) 1
0x4d4: Return(); Pop(2)

0x4d5: GOTO 0x4db

0x4d6: Push((int) 1)
0x4d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d9: Stack[-3] = (int) 2
0x4da: Return(); Pop(2)

0x4db: Stack[-3] = (int) 3
0x4dc: Return(); Pop(2)

0x4dd: Stack[-1] = (int) 515539
0x4de: Return(); Pop(0)

0x4df: Stack[-1] = (int) 502864
0x4e0: Return(); Pop(0)

0x4e1: Stack[-1] = "ui/NPC_Katerina.png" // @poff=837
0x4e2: Return(); Pop(0)

0x4e3: Stack[-1] = "ui/NPC_Katerina_b.png" // @poff=877
0x4e4: Return(); Pop(0)

0x4e5: Stack[-1] = (bool) 1
0x4e6: Return(); Pop(0)

