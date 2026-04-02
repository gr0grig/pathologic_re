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
	W:k4q02
	W:k4q02MarkGotoTheater
	W:pt_map_theater
	A:AddMark
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
	W:ui/NPC_Mark.png
	W:ui/NPC_Mark_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006b00340071003000320000006b0034007100300032004d00610072006b0047006f0074006f0054006800650061007400650072000000700074005f006d00610070005f00740068006500610074006500720000004164644d61726b0053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000750069002f004e00500043005f004d00610072006b002e0070006e0067000000750069002f004e00500043005f004d00610072006b005f0062002e0070006e0067000000
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
	GetMainOutdoorScene (1 args)

RunOp = 0x1da
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1d2 Vars = (object)
		EVENT_26 Op = 0x1de Vars = (string)
		EVENT_6 Op = 0x1fa Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x30e

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x261

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x20c

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x3df

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x3dd

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x3e1

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x3e3

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x3cc

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
0x48: Call2 0x250

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
0x56: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x358

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral" // @poff=89
0x5e: Call2 0xa4

0x5f: Pop(1)
0x60: Push((int) 525762)
0x61: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x62: Pop(1)
0x63: @@@ ClearReplies(); Obj=0 // @poff=116
0x64: Pop(0)
0x65: Push((int) 529224)
0x66: Push((int) 43014)
0x67: Push((int) 30677)
0x68: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x69: Pop(3)
0x6a: Push((int) 529229)
0x6b: Push((int) 30678)
0x6c: Push((int) 30682)
0x6d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e: Pop(3)
0x6f: GOTO 0x86

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral" // @poff=89
0x72: Call2 0xa4

0x73: Pop(1)
0x74: Push((int) 525766)
0x75: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x76: Pop(1)
0x77: @@@ ClearReplies(); Obj=0 // @poff=116
0x78: Pop(0)
0x79: Push((int) 525767)
0x7a: Push((int) -1)
0x7b: Push((int) 27079)
0x7c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7d: Pop(3)
0x7e: Push((int) 529227)
0x7f: Push((int) -1)
0x80: Push((int) 30680)
0x81: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x3e5

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x2eb

0x92: Pop(1)
0x93: GOTO 0x8a

0x94: GOTO 0xa3

0x95: Push("all") // @poff=138
0x96: Push("idle") // @poff=146
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: @ WaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: Push("all") // @poff=138
0x9f: Push("idle") // @poff=146
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: GOTO 0x99

0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool)
0xa6: Call2 0x3e5

0xa7: Pop(0)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: PushEmpty(string, bool)
0xaf: Stack[-3] = Stack[-2]
0xb0: Push("") // @poff=102
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-1] = (bool) 0
0xb4: GOTO 0xb6

0xb5: Stack[-1] = (bool) 1
0xb6: Call2 0x2f2

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x307

0xbf: Pop(0)
0xc0: Push((int) 27077)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x331

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x348

0xcc: Pop(2)
0xcd: Push((int) 43034)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x331

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x348

0xd9: Pop(2)
0xda: Push((int) 27074)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Call2 0x358

0xe0: Pop(1)
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral" // @poff=89
0xe4: Call2 0xa4

0xe5: Pop(1)
0xe6: Push((int) 525762)
0xe7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe8: Pop(1)
0xe9: @@@ ClearReplies(); Obj=0 // @poff=116
0xea: Pop(0)
0xeb: Push((int) 529224)
0xec: Push((int) 43014)
0xed: Push((int) 30677)
0xee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xef: Pop(3)
0xf0: Push((int) 529229)
0xf1: Push((int) 30678)
0xf2: Push((int) 30682)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral" // @poff=89
0xf8: Call2 0xa4

0xf9: Pop(1)
0xfa: Push((int) 525766)
0xfb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfc: Pop(1)
0xfd: @@@ ClearReplies(); Obj=0 // @poff=116
0xfe: Pop(0)
0xff: Push((int) 525767)
0x100: Push((int) -1)
0x101: Push((int) 27079)
0x102: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x103: Pop(3)
0x104: Push((int) 529227)
0x105: Push((int) -1)
0x106: Push((int) 30680)
0x107: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 43014)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral" // @poff=89
0x10f: Call2 0xa4

0x110: Pop(1)
0x111: Push((int) 540934)
0x112: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x113: Pop(1)
0x114: @@@ ClearReplies(); Obj=0 // @poff=116
0x115: Pop(0)
0x116: Push((int) 540935)
0x117: Push((int) 43016)
0x118: Push((int) 43015)
0x119: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11a: Pop(3)
0x11b: Push((int) 540938)
0x11c: Push((int) 43019)
0x11d: Push((int) 43018)
0x11e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 43019)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral" // @poff=89
0x126: Call2 0xa4

0x127: Pop(1)
0x128: Push((int) 540939)
0x129: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12a: Pop(1)
0x12b: @@@ ClearReplies(); Obj=0 // @poff=116
0x12c: Pop(0)
0x12d: Push((int) 540940)
0x12e: Push((int) 43016)
0x12f: Push((int) 43020)
0x130: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 43016)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral" // @poff=89
0x138: Call2 0xa4

0x139: Pop(1)
0x13a: Push((int) 540936)
0x13b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13c: Pop(1)
0x13d: @@@ ClearReplies(); Obj=0 // @poff=116
0x13e: Pop(0)
0x13f: Push((int) 540937)
0x140: Push((int) 43022)
0x141: Push((int) 43017)
0x142: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x143: Pop(3)
0x144: Push((int) 540943)
0x145: Push((int) 43022)
0x146: Push((int) 43024)
0x147: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 43022)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Neutral" // @poff=89
0x14f: Call2 0xa4

0x150: Pop(1)
0x151: Push((int) 540941)
0x152: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x153: Pop(1)
0x154: @@@ ClearReplies(); Obj=0 // @poff=116
0x155: Pop(0)
0x156: Push((int) 540942)
0x157: Push((int) 30678)
0x158: Push((int) 43023)
0x159: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15a: Pop(3)
0x15b: Push((int) 540944)
0x15c: Push((int) 43027)
0x15d: Push((int) 43026)
0x15e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: Push((int) 43027)
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Neutral" // @poff=89
0x166: Call2 0xa4

0x167: Pop(1)
0x168: Push((int) 540945)
0x169: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16a: Pop(1)
0x16b: @@@ ClearReplies(); Obj=0 // @poff=116
0x16c: Pop(0)
0x16d: Push((int) 540946)
0x16e: Push((int) 43029)
0x16f: Push((int) 43028)
0x170: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Push((int) 43029)
0x174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral" // @poff=89
0x178: Call2 0xa4

0x179: Pop(1)
0x17a: Push((int) 540947)
0x17b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17c: Pop(1)
0x17d: @@@ ClearReplies(); Obj=0 // @poff=116
0x17e: Pop(0)
0x17f: Push((int) 540948)
0x180: Push((int) 30678)
0x181: Push((int) 43030)
0x182: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 30678)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral" // @poff=89
0x18a: Call2 0xa4

0x18b: Pop(1)
0x18c: Push((int) 529225)
0x18d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18e: Pop(1)
0x18f: @@@ ClearReplies(); Obj=0 // @poff=116
0x190: Pop(0)
0x191: Push((int) 529226)
0x192: Push((int) 30681)
0x193: Push((int) 30679)
0x194: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x195: Pop(3)
0x196: Push((int) 540949)
0x197: Push((int) 30681)
0x198: Push((int) 43032)
0x199: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 30681)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral" // @poff=89
0x1a1: Call2 0xa4

0x1a2: Pop(1)
0x1a3: Push((int) 529228)
0x1a4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a5: Pop(1)
0x1a6: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a7: Pop(0)
0x1a8: Push((int) 525763)
0x1a9: Push((int) 27076)
0x1aa: Push((int) 27075)
0x1ab: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 27076)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Neutral" // @poff=89
0x1b3: Call2 0xa4

0x1b4: Pop(1)
0x1b5: Push((int) 525764)
0x1b6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b7: Pop(1)
0x1b8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b9: Pop(0)
0x1ba: Push((int) 525765)
0x1bb: Push((int) -1)
0x1bc: Push((int) 27077)
0x1bd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1be: Pop(3)
0x1bf: Push((int) 540950)
0x1c0: Push((int) -1)
0x1c1: Push((int) 43034)
0x1c2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c3: Pop(3)
0x1c4: Return(); Pop(0)

0x1c5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c6: PushEmpty(bool)
0x1c7: Call2 0x3e5

0x1c8: Pop(0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1ca: @ lshStopAnimation()
0x1cb: Pop(0)
0x1cc: GOTO 0x1cf

0x1cd: @ StopAnimation()
0x1ce: Pop(0)
0x1cf: Return(); Pop(0)

0x1d0: GOTO 0xbb

0x1d1: Return(); Pop(0)

0x1d2: PushEmpty()
0x1d3: PushEmpty(int, object)
0x1d4: Stack[-3] = Stack[-1]
0x1d5: Push(-2, 1); TaskCall(0)
0x1d6: Call2 0x0

0x1d7: Pop(-2, 1); TaskReturn
0x1d8: Pop(2)
0x1d9: Return(); Pop(0)

0x1da: @ Hold()
0x1db: Pop(0)
0x1dc: GOTO 0x1da

0x1dd: Return(); Pop(0)

0x1de: PushEmpty(bool, bool)
0x1df: Push("cleanup") // @poff=156
0x1e0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1e2: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1e3: @ IsLoaded(Stack[-1])
0x1e4: Pop(0)
0x1e5: PushEmpty(bool)
0x1e6: Stack[-1] = (bool) 0
0x1e7: Pop(0); Push((bool) Stack[-2] == 0)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e9: PushEmpty(bool)
0x1ea: Call2 0x20a

0x1eb: Pop(0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: Stack[-1] = (bool) 1
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ef: PushEmpty(object)
0x1f0: Call2 0x30e

0x1f1: Pop(0)
0x1f2: @ RemoveActor(Stack[-1])
0x1f3: Pop(1)
0x1f4: GOTO 0x1f9

0x1f5: Push("restore") // @poff=172
0x1f6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1f9: Return(); Pop(2)

0x1fa: PushEmpty(bool)
0x1fb: Stack[-1] = (bool) 0
0x1fc: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1fd: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fe: PushEmpty(bool)
0x1ff: Call2 0x20a

0x200: Pop(0)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: Stack[-1] = (bool) 1
0x203: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x204: PushEmpty(object)
0x205: Call2 0x30e

0x206: Pop(0)
0x207: @ RemoveActor(Stack[-1])
0x208: Pop(1)
0x209: Return(); Pop(0)

0x20a: Stack[-1] = (bool) 1
0x20b: Return(); Pop(0)

0x20c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x20d: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x20e: Pop(0)
0x20f: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x210: Pop(0)
0x211: Push(CvectorIndex(Stack[-8], 1))
0x212: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x213: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x214: @ GetPosition(Stack[-7])
0x215: Pop(0)
0x216: @ GetEyesHeight(Stack[-9])
0x217: Pop(0)
0x218: Push(CvectorIndex(Stack[-7], 1))
0x219: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x21b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x21c: Push(CvectorIndex(Stack[-6], 1))
0x21d: Stack[-1] = (int) 0
0x21e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x21f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x220: Pop(1); Push(Sqrt(Stack[-1]))
0x221: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x222: Stack[-5] = -Stack[-6]; Pop(0);
0x223: Pop(0); Push(Stack[-6] * Stack[-19]);
0x224: PushEmpty(cvector, cvector)
0x225: Push([0.0, 1.0, 0.0])
0x226: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x227: Call2 0x314

0x228: Pop(1)
0x229: Push((int) 25)
0x22a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x22b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22c: Push([0.0, 10.0, 0.0])
0x22d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x22e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x22f: @ IsOverrideActive(Stack[-2])
0x230: Pop(0)
0x231: Push(Stack[-2])
0x232: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x233: Stack[-21] = (bool) 0
0x234: Return(); Pop(18)

0x235: @ StopWorld()
0x236: Pop(0)
0x237: @ CameraTransit(Stack[-3], Stack[-5])
0x238: Pop(0)
0x239: Push(CvectorIndex(Stack[-4], 0))
0x23a: Push(CvectorIndex(Stack[-5], 2))
0x23b: @ Rotate(Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: PushEmpty(bool)
0x23e: Call2 0x3e5

0x23f: Pop(0)
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: GOTO 0x24a

0x242: Push("head") // @poff=214
0x243: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x244: Pop(1)
0x245: Push(Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x247: Push("head") // @poff=214
0x248: @ LookAsyncCamera(Stack[-1])
0x249: Pop(1)
0x24a: @ CameraWaitForPlayFinish()
0x24b: Pop(0)
0x24c: @ ResumeWorld()
0x24d: Pop(0)
0x24e: Stack[-21] = (bool) 1
0x24f: Return(); Pop(18)

0x250: PushEmpty(bool, bool)
0x251: @ CameraSwitchToNormal()
0x252: Pop(0)
0x253: PushEmpty(bool)
0x254: Call2 0x3e5

0x255: Pop(0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: GOTO 0x260

0x258: Push("head") // @poff=214
0x259: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x25a: Pop(1)
0x25b: Push(Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25d: Push("head") // @poff=214
0x25e: @ UnlookAsync(Stack[-1])
0x25f: Pop(1)
0x260: Return(); Pop(2)

0x261: PushEmpty(int, int, int, int)
0x262: Push("voice_common") // @poff=224
0x263: @ GetVariable(Stack[-1], Stack[-3])
0x264: Pop(1)
0x265: Push(Stack[-2])
0x266: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x267: PushEmpty(bool, object)
0x268: Stack[-7] = Stack[-1]
0x269: Call2 0x29b

0x26a: Pop(1)
0x26b: Pop(1); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x26d: PushEmpty(bool, object)
0x26e: Stack[-7] = Stack[-1]
0x26f: Call2 0x2c0

0x270: Pop(1)
0x271: Pop(1); Push((bool) Stack[-1] == 0)
0x272: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x273: Stack[-6] = (bool) 0
0x274: Return(); Pop(4)

0x275: Push((int) 2)
0x276: @ irand(Stack[-2], Stack[-1])
0x277: Pop(1)
0x278: Push(Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x27a: Push("voice_common") // @poff=224
0x27b: Push((int) 1)
0x27c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x27d: Push((int) 3)
0x27e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x27f: @ SetVariable(Stack[-2], Stack[-1])
0x280: Pop(2)
0x281: GOTO 0x286

0x282: Push("voice_common") // @poff=224
0x283: Push((int) 0)
0x284: @ SetVariable(Stack[-2], Stack[-1])
0x285: Pop(2)
0x286: GOTO 0x299

0x287: PushEmpty(bool, object)
0x288: Stack[-7] = Stack[-1]
0x289: Call2 0x2c0

0x28a: Pop(1)
0x28b: Pop(1); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x28d: PushEmpty(bool, object)
0x28e: Stack[-7] = Stack[-1]
0x28f: Call2 0x29b

0x290: Pop(1)
0x291: Pop(1); Push((bool) Stack[-1] == 0)
0x292: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x293: Stack[-6] = (bool) 0
0x294: Return(); Pop(4)

0x295: Push("voice_common") // @poff=224
0x296: Push((int) 1)
0x297: @ SetVariable(Stack[-2], Stack[-1])
0x298: Pop(2)
0x299: Stack[-6] = (bool) 1
0x29a: Return(); Pop(4)

0x29b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x29c: Stack[-5] = "c" // @poff=250
0x29d: Stack[-4] = (int) 0
0x29e: Push((int) 1)
0x29f: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a0: Push((int) 1)
0x2a1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2a2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2a3: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x2a4: Pop(1)
0x2a5: Pop(0); Push((bool) Stack[-3] == 0)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: GOTO 0x2ab

0x2a8: Push((int) 1)
0x2a9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2aa: GOTO 0x29e

0x2ab: Pop(0); Push((bool) Stack[-4] == 0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ad: Stack[-12] = (bool) 0
0x2ae: Return(); Pop(10)

0x2af: Stack[-2] = (int) 0
0x2b0: Push((int) 1)
0x2b1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b3: @ irand(Stack[-2], Stack[-4])
0x2b4: Pop(0)
0x2b5: Push((int) 1)
0x2b6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2b7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2b8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x2b9: Pop(1)
0x2ba: PushEmpty(bool, string)
0x2bb: Stack[-3] = Stack[-1]
0x2bc: Call2 0x2f8

0x2bd: Stack[-2] = Stack[-14]
0x2be: Pop(2)
0x2bf: Return(); Pop(10)

0x2c0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2c1: Push("d") // @poff=220
0x2c2: PushEmpty(int)
0x2c3: Call2 0x328

0x2c4: Pop(0)
0x2c5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c6: Push("m") // @poff=278
0x2c7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2c8: Stack[-4] = (int) 0
0x2c9: Push((int) 1)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2cb: Push((int) 1)
0x2cc: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2cd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2ce: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x2cf: Pop(1)
0x2d0: Pop(0); Push((bool) Stack[-3] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: GOTO 0x2d6

0x2d3: Push((int) 1)
0x2d4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2d5: GOTO 0x2c9

0x2d6: Pop(0); Push((bool) Stack[-4] == 0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d8: Stack[-12] = (bool) 0
0x2d9: Return(); Pop(10)

0x2da: Stack[-2] = (int) 0
0x2db: Push((int) 1)
0x2dc: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2de: @ irand(Stack[-2], Stack[-4])
0x2df: Pop(0)
0x2e0: Push((int) 1)
0x2e1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e3: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x2e4: Pop(1)
0x2e5: PushEmpty(bool, string)
0x2e6: Stack[-3] = Stack[-1]
0x2e7: Call2 0x2f8

0x2e8: Stack[-2] = Stack[-14]
0x2e9: Pop(2)
0x2ea: Return(); Pop(10)

0x2eb: PushEmpty(float, float, float, float)
0x2ec: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2ed: Pop(0)
0x2ee: Push((bool) 0)
0x2ef: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f0: Pop(1)
0x2f1: Return(); Pop(4)

0x2f2: PushEmpty(float, float, float, float)
0x2f3: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2f4: Pop(0)
0x2f5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2f6: Pop(0)
0x2f7: Return(); Pop(4)

0x2f8: PushEmpty(bool, bool)
0x2f9: PushEmpty(bool)
0x2fa: Call2 0x3e5

0x2fb: Pop(0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2fd: @ lshHasSpeech(Stack[-1], Stack[-3])
0x2fe: Pop(0)
0x2ff: Push(Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x301: @ lshPlaySpeech(Stack[-3])
0x302: Pop(0)
0x303: Stack[-4] = (bool) 1
0x304: Return(); Pop(2)

0x305: Stack[-4] = (bool) 0
0x306: Return(); Pop(2)

0x307: PushEmpty(bool)
0x308: Call2 0x3e5

0x309: Pop(0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30b: @ lshStopSpeech()
0x30c: Pop(0)
0x30d: Return(); Pop(0)

0x30e: PushEmpty(object, object)
0x30f: @ self(Stack[-1])
0x310: Pop(0)
0x311: Stack[-1] = Stack[-3]
0x312: Return(); Pop(2)

0x313: Stack[-1] = 0
0x314: PushEmpty(float, float)
0x315: Pop(0); Push(Stack[-3] | Stack[-3]);
0x316: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x317: Push((float)9.999999974752427e-07)
0x318: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31a: Stack[-4] = [0.0, 0.0, 0.0]
0x31b: Return(); Pop(2)

0x31c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x31d: Return(); Pop(2)

0x31e: PushEmpty(int, int)
0x31f: @ GetVariable(Stack[-3], Stack[-1])
0x320: Pop(0)
0x321: Stack[-1] = Stack[-4]
0x322: Return(); Pop(2)

0x323: PushEmpty(float, float)
0x324: @ GetGameTime(Stack[-1])
0x325: Pop(0)
0x326: Stack[-1] = Stack[-3]
0x327: Return(); Pop(2)

0x328: PushEmpty(float, float)
0x329: @ GetGameTime(Stack[-1])
0x32a: Pop(0)
0x32b: Push((int) 1)
0x32c: PushEmpty(int)
0x32d: Push((int) 24)
0x32e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x32f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x330: Return(); Pop(2)

0x331: PushEmpty(object, object)
0x332: Push("k4q02") // @poff=282
0x333: Push((int) 2)
0x334: @ SetVariable(Stack[-2], Stack[-1])
0x335: Pop(2)
0x336: PushEmpty(object)
0x337: Call2 0x39a

0x338: Stack[-1] = Stack[-2]
0x339: Pop(1)
0x33a: Push("k4q02MarkGotoTheater") // @poff=294
0x33b: Push("pt_map_theater") // @poff=336
0x33c: Push((int) 0)
0x33d: Push((int) 539602)
0x33e: PushEmpty(float)
0x33f: Call2 0x323

0x340: Pop(0)
0x341: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=366
0x342: Pop(5)
0x343: PushEmpty()
0x344: Call2 0x364

0x345: Pop(0)
0x346: Return(); Pop(2)

0x347: Stack[-1] = 0
0x348: PushEmpty()
0x349: PushEmpty(object, string, float)
0x34a: PushEmpty(object)
0x34b: Call2 0x39a

0x34c: Stack[-1] = Stack[-4]
0x34d: Pop(1)
0x34e: Stack[-2] = "pt_map_theater" // @poff=336
0x34f: Stack[-1] = (int) 2
0x350: Call2 0x3ab

0x351: Pop(3)
0x352: PushEmpty(object)
0x353: Call2 0x39a

0x354: Pop(0)
0x355: @@ ShowMap(Stack[-1]); Obj=2 // @poff=374
0x356: Pop(1)
0x357: Return(); Pop(0)

0x358: PushEmpty()
0x359: PushEmpty(int, string)
0x35a: Stack[-1] = "k4q02" // @poff=282
0x35b: Call2 0x31e

0x35c: Pop(1)
0x35d: Push((int) 1)
0x35e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: Stack[-2] = (bool) 1
0x361: Return(); Pop(0)

0x362: Stack[-2] = (bool) 0
0x363: Return(); Pop(0)

0x364: PushEmpty(object, object)
0x365: Push((int) 381)
0x366: Push((int) 2)
0x367: Push((int) 525787)
0x368: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: PushEmpty(bool, object, int)
0x36b: Stack[-4] = Stack[-2]
0x36c: Stack[-1] = (int) 378
0x36d: Call2 0x37e

0x36e: Pop(3)
0x36f: Return(); Pop(2)

0x370: Stack[-1] = 0
0x371: PushEmpty(object, object)
0x372: @ GetDiaryRoot(Stack[-1])
0x373: Pop(0)
0x374: Pop(0); Push((bool) Stack[-1] == 0)
0x375: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x376: Push("Can't retrieve diary root") // @poff=382
0x377: @ Trace(Stack[-1])
0x378: Pop(1)
0x379: Stack[-3] = (bool) 0
0x37a: Return(); Pop(2)

0x37b: Stack[-1] = Stack[-3]
0x37c: Return(); Pop(2)

0x37d: Stack[-1] = 0
0x37e: PushEmpty(object, object, int, object, object, int)
0x37f: PushEmpty(object)
0x380: Call2 0x371

0x381: Stack[-1] = Stack[-4]
0x382: Pop(1)
0x383: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=434
0x384: Pop(0)
0x385: Pop(0); Push((bool) Stack[-2] == 0)
0x386: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x387: Push("Can't find diary parent with id: ") // @poff=439
0x388: Pop(1); Push(Stack[-1] + Stack[-8]);
0x389: @ Trace(Stack[-1])
0x38a: Pop(1)
0x38b: Stack[-9] = (bool) 0
0x38c: Return(); Pop(6)

0x38d: @@ AddChild(Stack[-8]); Obj=2 // @poff=507
0x38e: Pop(0)
0x38f: Push((int) 7)
0x390: @ SendWorldWndMessage(Stack[-1])
0x391: Pop(1)
0x392: @@ GetCategory(Stack[-1]); Obj=8 // @poff=516
0x393: Pop(0)
0x394: @ SetDiarySection(Stack[-1])
0x395: Pop(0)
0x396: Stack[-9] = (bool) 0
0x397: Return(); Pop(6)

0x398: Stack[-2] = 0
0x399: Stack[-3] = 0
0x39a: PushEmpty(object, object, object, object)
0x39b: @ GetMainOutdoorScene(Stack[-2])
0x39c: Pop(0)
0x39d: Pop(0); PushNull((bool) Stack[-2] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39f: Push("Can't find main outdoor scene") // @poff=528
0x3a0: @ Trace(Stack[-1])
0x3a1: Pop(1)
0x3a2: Stack[-1] = 0
0x3a3: Stack[-1] = Stack[-5]
0x3a4: Return(); Pop(4)

0x3a5: @@ GetMap(Stack[-1]); Obj=2 // @poff=588
0x3a6: Pop(0)
0x3a7: Stack[-1] = Stack[-5]
0x3a8: Return(); Pop(4)

0x3a9: Stack[-1] = 0
0x3aa: Stack[-2] = 0
0x3ab: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3ac: @ GetMainOutdoorScene(Stack[-2])
0x3ad: Pop(0)
0x3ae: Pop(0); PushNull((bool) Stack[-2] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b0: Push("Can't find main outdoor scene") // @poff=528
0x3b1: @ Trace(Stack[-1])
0x3b2: Pop(1)
0x3b3: Return(); Pop(8)

0x3b4: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=595
0x3b5: Pop(0)
0x3b6: Pop(0); Push((bool) Stack[-1] == 0)
0x3b7: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b8: Push("Warning: outdoor scene locator ") // @poff=606
0x3b9: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3ba: Push(" doesnt exist") // @poff=670
0x3bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3bc: @ Trace(Stack[-1])
0x3bd: Pop(1)
0x3be: @@ GetMap(Stack[-11]); Obj=2 // @poff=588
0x3bf: Pop(0)
0x3c0: Pop(0); PushNull((bool) Stack[-11] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c2: Push("Can't find map") // @poff=698
0x3c3: @ Trace(Stack[-1])
0x3c4: Pop(1)
0x3c5: Return(); Pop(8)

0x3c6: Push(CvectorIndex(Stack[-4], 0))
0x3c7: Push(CvectorIndex(Stack[-5], 2))
0x3c8: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=728
0x3c9: Pop(2)
0x3ca: Return(); Pop(8)

0x3cb: Stack[-2] = 0
0x3cc: PushEmpty(int, int)
0x3cd: Push("branch") // @poff=741
0x3ce: @ GetVariable(Stack[-1], Stack[-2])
0x3cf: Pop(1)
0x3d0: Push((int) 0)
0x3d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d3: Stack[-3] = (int) 1
0x3d4: Return(); Pop(2)

0x3d5: GOTO 0x3db

0x3d6: Push((int) 1)
0x3d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d9: Stack[-3] = (int) 2
0x3da: Return(); Pop(2)

0x3db: Stack[-3] = (int) 3
0x3dc: Return(); Pop(2)

0x3dd: Stack[-1] = (int) 515544
0x3de: Return(); Pop(0)

0x3df: Stack[-1] = (int) 502869
0x3e0: Return(); Pop(0)

0x3e1: Stack[-1] = "ui/NPC_Mark.png" // @poff=755
0x3e2: Return(); Pop(0)

0x3e3: Stack[-1] = "ui/NPC_Mark_b.png" // @poff=787
0x3e4: Return(); Pop(0)

0x3e5: Stack[-1] = (bool) 1
0x3e6: Return(); Pop(0)

