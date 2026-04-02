GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	W:ui/NPC_Katerina.png
	W:ui/NPC_Katerina_b.png
	W:oob2Katerina1
	W:oob2Katerina2
	W:oob2Katerina3
	W:b8q03
	W:b8q03KaterinaGotoMat
	W:pt_map_mat
	A:AddMark
	W:b10q01TalkKaterina
	W:b10q01
	W:b2q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004b00610074006500720069006e0061002e0070006e0067000000750069002f004e00500043005f004b00610074006500720069006e0061005f0062002e0070006e00670000006f006f00620032004b00610074006500720069006e006100310000006f006f00620032004b00610074006500720069006e006100320000006f006f00620032004b00610074006500720069006e00610033000000620038007100300033000000620038007100300033004b00610074006500720069006e00610047006f0074006f004d00610074000000700074005f006d00610070005f006d006100740000004164644d61726b00620031003000710030003100540061006c006b004b00610074006500720069006e00610000006200310030007100300031000000620032007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170006200720061006e00630068000000
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x7c7
RunTask = 13

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b1 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2c2 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4bf Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x621 Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x79d Vars = (int, int)
	GTASK_13 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x819 Vars = (int)
		EVENT_6 Op = 0x83f Vars = ()
		EVENT_5 Op = 0x84e Vars = ()
		EVENT_45 Op = 0x85b Vars = (bool)
		EVENT_0 Op = 0x867 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x8eb

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
0x11: Call2 0x9f2

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x945

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x8f0

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0xa35

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0xa33

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0xa37

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0xa39

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0xb07

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
0x55: Call2 0x934

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
0x68: Push((int) 535294)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 535295)
0x6e: Push((int) 36973)
0x6f: Push((int) 36972)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 535302)
0x73: Push((int) -1)
0x74: Push((int) 36980)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 535303)
0x78: Push((int) -1)
0x79: Push((int) 36981)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0xa3b

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x9cf

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
0x9f: Call2 0xa3b

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
0xaf: Call2 0x9d6

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x9eb

0xb8: Pop(0)
0xb9: Push((int) 36971)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral" // @poff=89
0xbe: Call2 0x9d

0xbf: Pop(1)
0xc0: Push((int) 535294)
0xc1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc2: Pop(1)
0xc3: @@@ ClearReplies(); Obj=0 // @poff=116
0xc4: Pop(0)
0xc5: Push((int) 535295)
0xc6: Push((int) 36973)
0xc7: Push((int) 36972)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Push((int) 535302)
0xcb: Push((int) -1)
0xcc: Push((int) 36980)
0xcd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xce: Pop(3)
0xcf: Push((int) 535303)
0xd0: Push((int) -1)
0xd1: Push((int) 36981)
0xd2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 36973)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0x9d

0xdb: Pop(1)
0xdc: Push((int) 535296)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 535297)
0xe2: Push((int) 36975)
0xe3: Push((int) 36974)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 535301)
0xe7: Push((int) 36975)
0xe8: Push((int) 36978)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 36975)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral" // @poff=89
0xf1: Call2 0x9d

0xf2: Pop(1)
0xf3: Push((int) 535298)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=116
0xf7: Pop(0)
0xf8: Push((int) 535299)
0xf9: Push((int) -1)
0xfa: Push((int) 36976)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 535300)
0xfe: Push((int) -1)
0xff: Push((int) 36977)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104: PushEmpty(bool)
0x105: Call2 0xa3b

0x106: Pop(0)
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: @ lshStopAnimation()
0x109: Pop(0)
0x10a: GOTO 0x10d

0x10b: @ StopAnimation()
0x10c: Pop(0)
0x10d: Return(); Pop(0)

0x10e: GOTO 0xb4

0x10f: Return(); Pop(0)

0x110: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x111: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x112: PushEmpty(bool, object)
0x113: PushEmpty(object)
0x114: Call2 0x9f2

0x115: Stack[-1] = Stack[-2]
0x116: Pop(1)
0x117: Call2 0x945

0x118: Pop(2)
0x119: PushEmpty(bool, object, float)
0x11a: Stack[-12] = Stack[-2]
0x11b: Stack[-1] = (float) 70.0
0x11c: Call2 0x8f0

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-10] = (int) -2
0x121: Return(); Pop(8)

0x122: @ CreateDialog(Stack[-4])
0x123: Pop(0)
0x124: PushEmpty(int)
0x125: Call2 0xa35

0x126: Pop(0)
0x127: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x128: Pop(1)
0x129: PushEmpty(int)
0x12a: Call2 0xa33

0x12b: Pop(0)
0x12c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x12d: Pop(1)
0x12e: PushEmpty(string)
0x12f: Call2 0xa37

0x130: Pop(0)
0x131: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x132: Pop(1)
0x133: PushEmpty(string)
0x134: Call2 0xa39

0x135: Pop(0)
0x136: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x137: Pop(1)
0x138: PushEmpty(int)
0x139: Call2 0xb07

0x13a: Pop(0)
0x13b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x13c: Pop(1)
0x13d: Stack[-2] = (int) -1
0x13e: @ IsOverrideActive(Stack[-3])
0x13f: Pop(0)
0x140: Push(Stack[-3])
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Stack[-10] = (int) -2
0x143: Return(); Pop(8)

0x144: @ DoDialog(Stack[-4])
0x145: Pop(0)
0x146: PushEmpty(object, object)
0x147: Stack[-11] = Stack[-2]
0x148: Stack[-6] = Stack[-1]
0x149: Push(-2, 4); TaskCall(4)
0x14a: Call2 0x161

0x14b: Pop(-2, 4); TaskReturn
0x14c: Pop(2)
0x14d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x14e: Pop(0)
0x14f: Pop(0); Push((bool) Stack[-1] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: @ sync()
0x152: Pop(0)
0x153: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x154: Pop(0)
0x155: GOTO 0x14f

0x156: PushEmpty(object)
0x157: Stack[-10] = Stack[-1]
0x158: Call2 0x934

0x159: Pop(1)
0x15a: @ StopDialog(Stack[-4])
0x15b: Pop(0)
0x15c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x15d: Pop(0)
0x15e: Stack[-2] = Stack[-10]
0x15f: Return(); Pop(8)

0x160: Stack[-4] = 0
0x161: PushEmpty()
0x162: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x163: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x164: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x165: Push((int) 1)
0x166: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral" // @poff=89
0x169: Call2 0x19b

0x16a: Pop(1)
0x16b: Push((int) 518018)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 518019)
0x171: Push((int) -1)
0x172: Push((int) 19152)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 527797)
0x176: Push((int) -1)
0x177: Push((int) 29130)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: GOTO 0x17d

0x17b: Return(); Pop(0)

0x17c: GOTO 0x165

0x17d: PushEmpty(bool)
0x17e: Call2 0xa3b

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x181: @ lshWaitForAnimEnd()
0x182: Pop(0)
0x183: Push( Stack[3 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x18b

0x186: PushEmpty(string)
0x187: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x188: Call2 0x9cf

0x189: Pop(1)
0x18a: GOTO 0x181

0x18b: GOTO 0x19a

0x18c: Push("all") // @poff=138
0x18d: Push("idle") // @poff=146
0x18e: @ PlayAnimation(Stack[-2], Stack[-1])
0x18f: Pop(2)
0x190: @ WaitForAnimEnd()
0x191: Pop(0)
0x192: Push( Stack[3 + Tasks[-1].StackPointer] )
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: GOTO 0x19a

0x195: Push("all") // @poff=138
0x196: Push("idle") // @poff=146
0x197: @ PlayAnimation(Stack[-2], Stack[-1])
0x198: Pop(2)
0x199: GOTO 0x190

0x19a: Return(); Pop(0)

0x19b: PushEmpty()
0x19c: PushEmpty(bool)
0x19d: Call2 0xa3b

0x19e: Pop(0)
0x19f: Pop(1); Push((bool) Stack[-1] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Return(); Pop(0)

0x1a2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty(string, bool)
0x1a6: Stack[-3] = Stack[-2]
0x1a7: Push("") // @poff=102
0x1a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1aa: Stack[-1] = (bool) 0
0x1ab: GOTO 0x1ad

0x1ac: Stack[-1] = (bool) 1
0x1ad: Call2 0x9d6

0x1ae: Pop(2)
0x1af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Push((int) 1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x9eb

0x1b6: Pop(0)
0x1b7: Push((int) 19151)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral" // @poff=89
0x1bc: Call2 0x19b

0x1bd: Pop(1)
0x1be: Push((int) 518018)
0x1bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c0: Pop(1)
0x1c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c2: Pop(0)
0x1c3: Push((int) 518019)
0x1c4: Push((int) -1)
0x1c5: Push((int) 19152)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Push((int) 527797)
0x1c9: Push((int) -1)
0x1ca: Push((int) 29130)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1cf: PushEmpty(bool)
0x1d0: Call2 0xa3b

0x1d1: Pop(0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d3: @ lshStopAnimation()
0x1d4: Pop(0)
0x1d5: GOTO 0x1d8

0x1d6: @ StopAnimation()
0x1d7: Pop(0)
0x1d8: Return(); Pop(0)

0x1d9: GOTO 0x1b2

0x1da: Return(); Pop(0)

0x1db: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1dc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1dd: PushEmpty(bool, object)
0x1de: PushEmpty(object)
0x1df: Call2 0x9f2

0x1e0: Stack[-1] = Stack[-2]
0x1e1: Pop(1)
0x1e2: Call2 0x945

0x1e3: Pop(2)
0x1e4: PushEmpty(bool, object, float)
0x1e5: Stack[-12] = Stack[-2]
0x1e6: Stack[-1] = (float) 70.0
0x1e7: Call2 0x8f0

0x1e8: Pop(2)
0x1e9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1eb: Stack[-10] = (int) -2
0x1ec: Return(); Pop(8)

0x1ed: @ CreateDialog(Stack[-4])
0x1ee: Pop(0)
0x1ef: PushEmpty(int)
0x1f0: Call2 0xa35

0x1f1: Pop(0)
0x1f2: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x1f3: Pop(1)
0x1f4: PushEmpty(int)
0x1f5: Call2 0xa33

0x1f6: Pop(0)
0x1f7: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1f8: Pop(1)
0x1f9: PushEmpty(string)
0x1fa: Call2 0xa37

0x1fb: Pop(0)
0x1fc: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1fd: Pop(1)
0x1fe: PushEmpty(string)
0x1ff: Call2 0xa39

0x200: Pop(0)
0x201: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x202: Pop(1)
0x203: PushEmpty(int)
0x204: Call2 0xb07

0x205: Pop(0)
0x206: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x207: Pop(1)
0x208: Stack[-2] = (int) -1
0x209: @ IsOverrideActive(Stack[-3])
0x20a: Pop(0)
0x20b: Push(Stack[-3])
0x20c: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20d: Stack[-10] = (int) -2
0x20e: Return(); Pop(8)

0x20f: @ DoDialog(Stack[-4])
0x210: Pop(0)
0x211: PushEmpty(object, object)
0x212: Stack[-11] = Stack[-2]
0x213: Stack[-6] = Stack[-1]
0x214: Push(-2, 4); TaskCall(6)
0x215: Call2 0x22c

0x216: Pop(-2, 4); TaskReturn
0x217: Pop(2)
0x218: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x219: Pop(0)
0x21a: Pop(0); Push((bool) Stack[-1] == 0)
0x21b: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21c: @ sync()
0x21d: Pop(0)
0x21e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x21f: Pop(0)
0x220: GOTO 0x21a

0x221: PushEmpty(object)
0x222: Stack[-10] = Stack[-1]
0x223: Call2 0x934

0x224: Pop(1)
0x225: @ StopDialog(Stack[-4])
0x226: Pop(0)
0x227: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x228: Pop(0)
0x229: Stack[-2] = Stack[-10]
0x22a: Return(); Pop(8)

0x22b: Stack[-4] = 0
0x22c: PushEmpty()
0x22d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x22e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x22f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x230: Push((int) 1)
0x231: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x232: PushEmpty(bool)
0x233: Stack[-1] = (bool) 0
0x234: PushEmpty(bool, object)
0x235: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x236: Call2 0xa90

0x237: Pop(1)
0x238: Pop(1); Push((bool) Stack[-1] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23a: PushEmpty(bool, object)
0x23b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23c: Call2 0xa9c

0x23d: Pop(1)
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: Stack[-1] = (bool) 1
0x240: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x241: PushEmpty(object, object)
0x242: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x243: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x244: Call2 0xa3d

0x245: Pop(2)
0x246: PushEmpty(string)
0x247: Stack[-1] = "Neutral" // @poff=89
0x248: Call2 0x2ac

0x249: Pop(1)
0x24a: Push((int) 520248)
0x24b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24c: Pop(1)
0x24d: @@@ ClearReplies(); Obj=0 // @poff=116
0x24e: Pop(0)
0x24f: Push((int) 520249)
0x250: Push((int) 21442)
0x251: Push((int) 21441)
0x252: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x253: Pop(3)
0x254: GOTO 0x28e

0x255: PushEmpty(string)
0x256: Stack[-1] = "Neutral" // @poff=89
0x257: Call2 0x2ac

0x258: Pop(1)
0x259: Push((int) 520268)
0x25a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25b: Pop(1)
0x25c: @@@ ClearReplies(); Obj=0 // @poff=116
0x25d: Pop(0)
0x25e: PushEmpty(bool)
0x25f: Stack[-1] = (bool) 0
0x260: PushEmpty(bool, object)
0x261: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x262: Call2 0xa9c

0x263: Pop(1)
0x264: Pop(1); Push((bool) Stack[-1] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x266: PushEmpty(bool, object)
0x267: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x268: Call2 0xaa8

0x269: Pop(1)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: Stack[-1] = (bool) 1
0x26c: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26d: Push((int) 520269)
0x26e: Push((int) 21462)
0x26f: Push((int) 21461)
0x270: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x271: Pop(3)
0x272: PushEmpty(bool)
0x273: Stack[-1] = (bool) 0
0x274: PushEmpty(bool, object)
0x275: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x276: Call2 0xa9c

0x277: Pop(1)
0x278: Pop(1); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27a: PushEmpty(bool, object)
0x27b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27c: Call2 0xab4

0x27d: Pop(1)
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: Stack[-1] = (bool) 1
0x280: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x281: Push((int) 520272)
0x282: Push((int) 21465)
0x283: Push((int) 21464)
0x284: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x285: Pop(3)
0x286: Push((int) 520277)
0x287: Push((int) -1)
0x288: Push((int) 21469)
0x289: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28a: Pop(3)
0x28b: GOTO 0x28e

0x28c: Return(); Pop(0)

0x28d: GOTO 0x230

0x28e: PushEmpty(bool)
0x28f: Call2 0xa3b

0x290: Pop(0)
0x291: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x292: @ lshWaitForAnimEnd()
0x293: Pop(0)
0x294: Push( Stack[3 + Tasks[-1].StackPointer] )
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: GOTO 0x29c

0x297: PushEmpty(string)
0x298: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x299: Call2 0x9cf

0x29a: Pop(1)
0x29b: GOTO 0x292

0x29c: GOTO 0x2ab

0x29d: Push("all") // @poff=138
0x29e: Push("idle") // @poff=146
0x29f: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a0: Pop(2)
0x2a1: @ WaitForAnimEnd()
0x2a2: Pop(0)
0x2a3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: GOTO 0x2ab

0x2a6: Push("all") // @poff=138
0x2a7: Push("idle") // @poff=146
0x2a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a9: Pop(2)
0x2aa: GOTO 0x2a1

0x2ab: Return(); Pop(0)

0x2ac: PushEmpty()
0x2ad: PushEmpty(bool)
0x2ae: Call2 0xa3b

0x2af: Pop(0)
0x2b0: Pop(1); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: Return(); Pop(0)

0x2b3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: Return(); Pop(0)

0x2b6: PushEmpty(string, bool)
0x2b7: Stack[-3] = Stack[-2]
0x2b8: Push("") // @poff=102
0x2b9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bb: Stack[-1] = (bool) 0
0x2bc: GOTO 0x2be

0x2bd: Stack[-1] = (bool) 1
0x2be: Call2 0x9d6

0x2bf: Pop(2)
0x2c0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2c1: Return(); Pop(0)

0x2c2: PushEmpty()
0x2c3: Push((int) 1)
0x2c4: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x2c5: PushEmpty()
0x2c6: Call2 0x9eb

0x2c7: Pop(0)
0x2c8: Push((int) 21461)
0x2c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cb: PushEmpty(object, object)
0x2cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ce: Call2 0xa43

0x2cf: Pop(2)
0x2d0: Push((int) 21464)
0x2d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d3: PushEmpty(object, object)
0x2d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d6: Call2 0xa49

0x2d7: Pop(2)
0x2d8: Push((int) 21440)
0x2d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x2db: PushEmpty(bool)
0x2dc: Stack[-1] = (bool) 0
0x2dd: PushEmpty(bool, object)
0x2de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2df: Call2 0xa90

0x2e0: Pop(1)
0x2e1: Pop(1); Push((bool) Stack[-1] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e3: PushEmpty(bool, object)
0x2e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e5: Call2 0xa9c

0x2e6: Pop(1)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e8: Stack[-1] = (bool) 1
0x2e9: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2ea: PushEmpty(object, object)
0x2eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ed: Call2 0xa3d

0x2ee: Pop(2)
0x2ef: PushEmpty(string)
0x2f0: Stack[-1] = "Neutral" // @poff=89
0x2f1: Call2 0x2ac

0x2f2: Pop(1)
0x2f3: Push((int) 520248)
0x2f4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2f5: Pop(1)
0x2f6: @@@ ClearReplies(); Obj=0 // @poff=116
0x2f7: Pop(0)
0x2f8: Push((int) 520249)
0x2f9: Push((int) 21442)
0x2fa: Push((int) 21441)
0x2fb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2fc: Pop(3)
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty(string)
0x2ff: Stack[-1] = "Neutral" // @poff=89
0x300: Call2 0x2ac

0x301: Pop(1)
0x302: Push((int) 520268)
0x303: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x304: Pop(1)
0x305: @@@ ClearReplies(); Obj=0 // @poff=116
0x306: Pop(0)
0x307: PushEmpty(bool)
0x308: Stack[-1] = (bool) 0
0x309: PushEmpty(bool, object)
0x30a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30b: Call2 0xa9c

0x30c: Pop(1)
0x30d: Pop(1); Push((bool) Stack[-1] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x30f: PushEmpty(bool, object)
0x310: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x311: Call2 0xaa8

0x312: Pop(1)
0x313: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x314: Stack[-1] = (bool) 1
0x315: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x316: Push((int) 520269)
0x317: Push((int) 21462)
0x318: Push((int) 21461)
0x319: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31a: Pop(3)
0x31b: PushEmpty(bool)
0x31c: Stack[-1] = (bool) 0
0x31d: PushEmpty(bool, object)
0x31e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31f: Call2 0xa9c

0x320: Pop(1)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x323: PushEmpty(bool, object)
0x324: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x325: Call2 0xab4

0x326: Pop(1)
0x327: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x328: Stack[-1] = (bool) 1
0x329: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32a: Push((int) 520272)
0x32b: Push((int) 21465)
0x32c: Push((int) 21464)
0x32d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x32e: Pop(3)
0x32f: Push((int) 520277)
0x330: Push((int) -1)
0x331: Push((int) 21469)
0x332: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x333: Pop(3)
0x334: Return(); Pop(0)

0x335: Push((int) 21465)
0x336: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x338: PushEmpty(string)
0x339: Stack[-1] = "Neutral" // @poff=89
0x33a: Call2 0x2ac

0x33b: Pop(1)
0x33c: Push((int) 520273)
0x33d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x33e: Pop(1)
0x33f: @@@ ClearReplies(); Obj=0 // @poff=116
0x340: Pop(0)
0x341: Push((int) 520274)
0x342: Push((int) 21467)
0x343: Push((int) 21466)
0x344: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x345: Pop(3)
0x346: Return(); Pop(0)

0x347: Push((int) 21467)
0x348: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x34a: PushEmpty(string)
0x34b: Stack[-1] = "Neutral" // @poff=89
0x34c: Call2 0x2ac

0x34d: Pop(1)
0x34e: Push((int) 520275)
0x34f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x350: Pop(1)
0x351: @@@ ClearReplies(); Obj=0 // @poff=116
0x352: Pop(0)
0x353: Push((int) 520276)
0x354: Push((int) -1)
0x355: Push((int) 21468)
0x356: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x357: Pop(3)
0x358: Push((int) 527804)
0x359: Push((int) -1)
0x35a: Push((int) 29140)
0x35b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x35c: Pop(3)
0x35d: Return(); Pop(0)

0x35e: Push((int) 21462)
0x35f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x361: PushEmpty(string)
0x362: Stack[-1] = "Neutral" // @poff=89
0x363: Call2 0x2ac

0x364: Pop(1)
0x365: Push((int) 520270)
0x366: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x367: Pop(1)
0x368: @@@ ClearReplies(); Obj=0 // @poff=116
0x369: Pop(0)
0x36a: Push((int) 520271)
0x36b: Push((int) -1)
0x36c: Push((int) 21463)
0x36d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36e: Pop(3)
0x36f: Return(); Pop(0)

0x370: Push((int) 21442)
0x371: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x373: PushEmpty(string)
0x374: Stack[-1] = "Neutral" // @poff=89
0x375: Call2 0x2ac

0x376: Pop(1)
0x377: Push((int) 520250)
0x378: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x379: Pop(1)
0x37a: @@@ ClearReplies(); Obj=0 // @poff=116
0x37b: Pop(0)
0x37c: Push((int) 520251)
0x37d: Push((int) 21444)
0x37e: Push((int) 21443)
0x37f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x380: Pop(3)
0x381: Push((int) 520259)
0x382: Push((int) 21452)
0x383: Push((int) 21451)
0x384: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x385: Pop(3)
0x386: Push((int) 520265)
0x387: Push((int) 21458)
0x388: Push((int) 21457)
0x389: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x38a: Pop(3)
0x38b: Return(); Pop(0)

0x38c: Push((int) 21458)
0x38d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x38f: PushEmpty(string)
0x390: Stack[-1] = "Neutral" // @poff=89
0x391: Call2 0x2ac

0x392: Pop(1)
0x393: Push((int) 520266)
0x394: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x395: Pop(1)
0x396: @@@ ClearReplies(); Obj=0 // @poff=116
0x397: Pop(0)
0x398: Push((int) 527803)
0x399: Push((int) 21452)
0x39a: Push((int) 29136)
0x39b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39c: Pop(3)
0x39d: Push((int) 520267)
0x39e: Push((int) -1)
0x39f: Push((int) 21459)
0x3a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a1: Pop(3)
0x3a2: Return(); Pop(0)

0x3a3: Push((int) 21452)
0x3a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3a6: PushEmpty(string)
0x3a7: Stack[-1] = "Neutral" // @poff=89
0x3a8: Call2 0x2ac

0x3a9: Pop(1)
0x3aa: Push((int) 520260)
0x3ab: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ac: Pop(1)
0x3ad: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ae: Pop(0)
0x3af: Push((int) 520261)
0x3b0: Push((int) 21454)
0x3b1: Push((int) 21453)
0x3b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b3: Pop(3)
0x3b4: Push((int) 520264)
0x3b5: Push((int) 21454)
0x3b6: Push((int) 21456)
0x3b7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b8: Pop(3)
0x3b9: Return(); Pop(0)

0x3ba: Push((int) 21454)
0x3bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3bd: PushEmpty(string)
0x3be: Stack[-1] = "Neutral" // @poff=89
0x3bf: Call2 0x2ac

0x3c0: Pop(1)
0x3c1: Push((int) 520262)
0x3c2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c3: Pop(1)
0x3c4: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c5: Pop(0)
0x3c6: Push((int) 520263)
0x3c7: Push((int) -1)
0x3c8: Push((int) 21455)
0x3c9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ca: Pop(3)
0x3cb: Return(); Pop(0)

0x3cc: Push((int) 21444)
0x3cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3cf: PushEmpty(string)
0x3d0: Stack[-1] = "Neutral" // @poff=89
0x3d1: Call2 0x2ac

0x3d2: Pop(1)
0x3d3: Push((int) 520252)
0x3d4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d5: Pop(1)
0x3d6: @@@ ClearReplies(); Obj=0 // @poff=116
0x3d7: Pop(0)
0x3d8: Push((int) 520253)
0x3d9: Push((int) 21446)
0x3da: Push((int) 21445)
0x3db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3dc: Pop(3)
0x3dd: Push((int) 520256)
0x3de: Push((int) 21449)
0x3df: Push((int) 21448)
0x3e0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e1: Pop(3)
0x3e2: Return(); Pop(0)

0x3e3: Push((int) 21449)
0x3e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3e6: PushEmpty(string)
0x3e7: Stack[-1] = "Neutral" // @poff=89
0x3e8: Call2 0x2ac

0x3e9: Pop(1)
0x3ea: Push((int) 520257)
0x3eb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ec: Pop(1)
0x3ed: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ee: Pop(0)
0x3ef: Push((int) 520258)
0x3f0: Push((int) -1)
0x3f1: Push((int) 21450)
0x3f2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f3: Pop(3)
0x3f4: Return(); Pop(0)

0x3f5: Push((int) 21446)
0x3f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x3f8: PushEmpty(string)
0x3f9: Stack[-1] = "Neutral" // @poff=89
0x3fa: Call2 0x2ac

0x3fb: Pop(1)
0x3fc: Push((int) 520254)
0x3fd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3fe: Pop(1)
0x3ff: @@@ ClearReplies(); Obj=0 // @poff=116
0x400: Pop(0)
0x401: Push((int) 520255)
0x402: Push((int) -1)
0x403: Push((int) 21447)
0x404: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x405: Pop(3)
0x406: Return(); Pop(0)

0x407: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x408: PushEmpty(bool)
0x409: Call2 0xa3b

0x40a: Pop(0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40c: @ lshStopAnimation()
0x40d: Pop(0)
0x40e: GOTO 0x411

0x40f: @ StopAnimation()
0x410: Pop(0)
0x411: Return(); Pop(0)

0x412: GOTO 0x2c3

0x413: Return(); Pop(0)

0x414: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x415: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x416: PushEmpty(bool, object)
0x417: PushEmpty(object)
0x418: Call2 0x9f2

0x419: Stack[-1] = Stack[-2]
0x41a: Pop(1)
0x41b: Call2 0x945

0x41c: Pop(2)
0x41d: PushEmpty(bool, object, float)
0x41e: Stack[-12] = Stack[-2]
0x41f: Stack[-1] = (float) 70.0
0x420: Call2 0x8f0

0x421: Pop(2)
0x422: Pop(1); Push((bool) Stack[-1] == 0)
0x423: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x424: Stack[-10] = (int) -2
0x425: Return(); Pop(8)

0x426: @ CreateDialog(Stack[-4])
0x427: Pop(0)
0x428: PushEmpty(int)
0x429: Call2 0xa35

0x42a: Pop(0)
0x42b: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x42c: Pop(1)
0x42d: PushEmpty(int)
0x42e: Call2 0xa33

0x42f: Pop(0)
0x430: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x431: Pop(1)
0x432: PushEmpty(string)
0x433: Call2 0xa37

0x434: Pop(0)
0x435: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x436: Pop(1)
0x437: PushEmpty(string)
0x438: Call2 0xa39

0x439: Pop(0)
0x43a: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x43b: Pop(1)
0x43c: PushEmpty(int)
0x43d: Call2 0xb07

0x43e: Pop(0)
0x43f: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x440: Pop(1)
0x441: Stack[-2] = (int) -1
0x442: @ IsOverrideActive(Stack[-3])
0x443: Pop(0)
0x444: Push(Stack[-3])
0x445: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x446: Stack[-10] = (int) -2
0x447: Return(); Pop(8)

0x448: @ DoDialog(Stack[-4])
0x449: Pop(0)
0x44a: PushEmpty(object, object)
0x44b: Stack[-11] = Stack[-2]
0x44c: Stack[-6] = Stack[-1]
0x44d: Push(-2, 4); TaskCall(8)
0x44e: Call2 0x465

0x44f: Pop(-2, 4); TaskReturn
0x450: Pop(2)
0x451: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x452: Pop(0)
0x453: Pop(0); Push((bool) Stack[-1] == 0)
0x454: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x455: @ sync()
0x456: Pop(0)
0x457: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x458: Pop(0)
0x459: GOTO 0x453

0x45a: PushEmpty(object)
0x45b: Stack[-10] = Stack[-1]
0x45c: Call2 0x934

0x45d: Pop(1)
0x45e: @ StopDialog(Stack[-4])
0x45f: Pop(0)
0x460: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x461: Pop(0)
0x462: Stack[-2] = Stack[-10]
0x463: Return(); Pop(8)

0x464: Stack[-4] = 0
0x465: PushEmpty()
0x466: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x467: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x468: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x469: Push((int) 1)
0x46a: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x46b: PushEmpty(string)
0x46c: Stack[-1] = "Neutral" // @poff=89
0x46d: Call2 0x4a9

0x46e: Pop(1)
0x46f: Push((int) 521514)
0x470: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x471: Pop(1)
0x472: @@@ ClearReplies(); Obj=0 // @poff=116
0x473: Pop(0)
0x474: PushEmpty(bool, object)
0x475: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x476: Call2 0xa6c

0x477: Pop(1)
0x478: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x479: Push((int) 521515)
0x47a: Push((int) 22677)
0x47b: Push((int) 22676)
0x47c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x47d: Pop(3)
0x47e: Push((int) 521518)
0x47f: Push((int) -1)
0x480: Push((int) 22679)
0x481: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x482: Pop(3)
0x483: Push((int) 523976)
0x484: Push((int) -1)
0x485: Push((int) 25264)
0x486: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x487: Pop(3)
0x488: GOTO 0x48b

0x489: Return(); Pop(0)

0x48a: GOTO 0x469

0x48b: PushEmpty(bool)
0x48c: Call2 0xa3b

0x48d: Pop(0)
0x48e: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x48f: @ lshWaitForAnimEnd()
0x490: Pop(0)
0x491: Push( Stack[3 + Tasks[-1].StackPointer] )
0x492: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x493: GOTO 0x499

0x494: PushEmpty(string)
0x495: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x496: Call2 0x9cf

0x497: Pop(1)
0x498: GOTO 0x48f

0x499: GOTO 0x4a8

0x49a: Push("all") // @poff=138
0x49b: Push("idle") // @poff=146
0x49c: @ PlayAnimation(Stack[-2], Stack[-1])
0x49d: Pop(2)
0x49e: @ WaitForAnimEnd()
0x49f: Pop(0)
0x4a0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a2: GOTO 0x4a8

0x4a3: Push("all") // @poff=138
0x4a4: Push("idle") // @poff=146
0x4a5: @ PlayAnimation(Stack[-2], Stack[-1])
0x4a6: Pop(2)
0x4a7: GOTO 0x49e

0x4a8: Return(); Pop(0)

0x4a9: PushEmpty()
0x4aa: PushEmpty(bool)
0x4ab: Call2 0xa3b

0x4ac: Pop(0)
0x4ad: Pop(1); Push((bool) Stack[-1] == 0)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4af: Return(); Pop(0)

0x4b0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b2: Return(); Pop(0)

0x4b3: PushEmpty(string, bool)
0x4b4: Stack[-3] = Stack[-2]
0x4b5: Push("") // @poff=102
0x4b6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b8: Stack[-1] = (bool) 0
0x4b9: GOTO 0x4bb

0x4ba: Stack[-1] = (bool) 1
0x4bb: Call2 0x9d6

0x4bc: Pop(2)
0x4bd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4be: Return(); Pop(0)

0x4bf: PushEmpty()
0x4c0: Push((int) 1)
0x4c1: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x4c2: PushEmpty()
0x4c3: Call2 0x9eb

0x4c4: Pop(0)
0x4c5: Push((int) 22678)
0x4c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c8: PushEmpty(object, object)
0x4c9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cb: Call2 0xa4f

0x4cc: Pop(2)
0x4cd: Push((int) 22675)
0x4ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4d0: PushEmpty(string)
0x4d1: Stack[-1] = "Neutral" // @poff=89
0x4d2: Call2 0x4a9

0x4d3: Pop(1)
0x4d4: Push((int) 521514)
0x4d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4d6: Pop(1)
0x4d7: @@@ ClearReplies(); Obj=0 // @poff=116
0x4d8: Pop(0)
0x4d9: PushEmpty(bool, object)
0x4da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4db: Call2 0xa6c

0x4dc: Pop(1)
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4de: Push((int) 521515)
0x4df: Push((int) 22677)
0x4e0: Push((int) 22676)
0x4e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4e2: Pop(3)
0x4e3: Push((int) 521518)
0x4e4: Push((int) -1)
0x4e5: Push((int) 22679)
0x4e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4e7: Pop(3)
0x4e8: Push((int) 523976)
0x4e9: Push((int) -1)
0x4ea: Push((int) 25264)
0x4eb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ec: Pop(3)
0x4ed: Return(); Pop(0)

0x4ee: Push((int) 22677)
0x4ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f0: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4f1: PushEmpty(string)
0x4f2: Stack[-1] = "Neutral" // @poff=89
0x4f3: Call2 0x4a9

0x4f4: Pop(1)
0x4f5: Push((int) 521516)
0x4f6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4f7: Pop(1)
0x4f8: @@@ ClearReplies(); Obj=0 // @poff=116
0x4f9: Pop(0)
0x4fa: Push((int) 523977)
0x4fb: Push((int) 25266)
0x4fc: Push((int) 25265)
0x4fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4fe: Pop(3)
0x4ff: Push((int) 523981)
0x500: Push((int) 25270)
0x501: Push((int) 25269)
0x502: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x503: Pop(3)
0x504: Return(); Pop(0)

0x505: Push((int) 25270)
0x506: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x508: PushEmpty(string)
0x509: Stack[-1] = "Neutral" // @poff=89
0x50a: Call2 0x4a9

0x50b: Pop(1)
0x50c: Push((int) 523982)
0x50d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x50e: Pop(1)
0x50f: @@@ ClearReplies(); Obj=0 // @poff=116
0x510: Pop(0)
0x511: Push((int) 523983)
0x512: Push((int) 25266)
0x513: Push((int) 25271)
0x514: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x515: Pop(3)
0x516: Return(); Pop(0)

0x517: Push((int) 25266)
0x518: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x51a: PushEmpty(string)
0x51b: Stack[-1] = "Neutral" // @poff=89
0x51c: Call2 0x4a9

0x51d: Pop(1)
0x51e: Push((int) 523978)
0x51f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x520: Pop(1)
0x521: @@@ ClearReplies(); Obj=0 // @poff=116
0x522: Pop(0)
0x523: Push((int) 523979)
0x524: Push((int) 25268)
0x525: Push((int) 25267)
0x526: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x527: Pop(3)
0x528: Return(); Pop(0)

0x529: Push((int) 25268)
0x52a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x52c: PushEmpty(string)
0x52d: Stack[-1] = "Neutral" // @poff=89
0x52e: Call2 0x4a9

0x52f: Pop(1)
0x530: Push((int) 523980)
0x531: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x532: Pop(1)
0x533: @@@ ClearReplies(); Obj=0 // @poff=116
0x534: Pop(0)
0x535: Push((int) 523984)
0x536: Push((int) 25274)
0x537: Push((int) 25273)
0x538: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x539: Pop(3)
0x53a: Return(); Pop(0)

0x53b: Push((int) 25274)
0x53c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53d: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x53e: PushEmpty(string)
0x53f: Stack[-1] = "Neutral" // @poff=89
0x540: Call2 0x4a9

0x541: Pop(1)
0x542: Push((int) 523985)
0x543: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x544: Pop(1)
0x545: @@@ ClearReplies(); Obj=0 // @poff=116
0x546: Pop(0)
0x547: Push((int) 523986)
0x548: Push((int) 25276)
0x549: Push((int) 25275)
0x54a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x54b: Pop(3)
0x54c: Push((int) 523988)
0x54d: Push((int) 25276)
0x54e: Push((int) 25277)
0x54f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x550: Pop(3)
0x551: Return(); Pop(0)

0x552: Push((int) 25276)
0x553: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x555: PushEmpty(string)
0x556: Stack[-1] = "Neutral" // @poff=89
0x557: Call2 0x4a9

0x558: Pop(1)
0x559: Push((int) 523987)
0x55a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x55b: Pop(1)
0x55c: @@@ ClearReplies(); Obj=0 // @poff=116
0x55d: Pop(0)
0x55e: Push((int) 521517)
0x55f: Push((int) -1)
0x560: Push((int) 22678)
0x561: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x562: Pop(3)
0x563: Return(); Pop(0)

0x564: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x565: PushEmpty(bool)
0x566: Call2 0xa3b

0x567: Pop(0)
0x568: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x569: @ lshStopAnimation()
0x56a: Pop(0)
0x56b: GOTO 0x56e

0x56c: @ StopAnimation()
0x56d: Pop(0)
0x56e: Return(); Pop(0)

0x56f: GOTO 0x4c0

0x570: Return(); Pop(0)

0x571: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x572: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x573: PushEmpty(bool, object)
0x574: PushEmpty(object)
0x575: Call2 0x9f2

0x576: Stack[-1] = Stack[-2]
0x577: Pop(1)
0x578: Call2 0x945

0x579: Pop(2)
0x57a: PushEmpty(bool, object, float)
0x57b: Stack[-12] = Stack[-2]
0x57c: Stack[-1] = (float) 70.0
0x57d: Call2 0x8f0

0x57e: Pop(2)
0x57f: Pop(1); Push((bool) Stack[-1] == 0)
0x580: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x581: Stack[-10] = (int) -2
0x582: Return(); Pop(8)

0x583: @ CreateDialog(Stack[-4])
0x584: Pop(0)
0x585: PushEmpty(int)
0x586: Call2 0xa35

0x587: Pop(0)
0x588: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x589: Pop(1)
0x58a: PushEmpty(int)
0x58b: Call2 0xa33

0x58c: Pop(0)
0x58d: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x58e: Pop(1)
0x58f: PushEmpty(string)
0x590: Call2 0xa37

0x591: Pop(0)
0x592: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x593: Pop(1)
0x594: PushEmpty(string)
0x595: Call2 0xa39

0x596: Pop(0)
0x597: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x598: Pop(1)
0x599: PushEmpty(int)
0x59a: Call2 0xb07

0x59b: Pop(0)
0x59c: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x59d: Pop(1)
0x59e: Stack[-2] = (int) -1
0x59f: @ IsOverrideActive(Stack[-3])
0x5a0: Pop(0)
0x5a1: Push(Stack[-3])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a3: Stack[-10] = (int) -2
0x5a4: Return(); Pop(8)

0x5a5: @ DoDialog(Stack[-4])
0x5a6: Pop(0)
0x5a7: PushEmpty(object, object)
0x5a8: Stack[-11] = Stack[-2]
0x5a9: Stack[-6] = Stack[-1]
0x5aa: Push(-2, 4); TaskCall(10)
0x5ab: Call2 0x5c2

0x5ac: Pop(-2, 4); TaskReturn
0x5ad: Pop(2)
0x5ae: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5af: Pop(0)
0x5b0: Pop(0); Push((bool) Stack[-1] == 0)
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b2: @ sync()
0x5b3: Pop(0)
0x5b4: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5b5: Pop(0)
0x5b6: GOTO 0x5b0

0x5b7: PushEmpty(object)
0x5b8: Stack[-10] = Stack[-1]
0x5b9: Call2 0x934

0x5ba: Pop(1)
0x5bb: @ StopDialog(Stack[-4])
0x5bc: Pop(0)
0x5bd: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5be: Pop(0)
0x5bf: Stack[-2] = Stack[-10]
0x5c0: Return(); Pop(8)

0x5c1: Stack[-4] = 0
0x5c2: PushEmpty()
0x5c3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5c4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5c5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5c6: Push((int) 1)
0x5c7: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5c8: PushEmpty(string)
0x5c9: Stack[-1] = "Neutral" // @poff=89
0x5ca: Call2 0x60b

0x5cb: Pop(1)
0x5cc: Push((int) 521930)
0x5cd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5ce: Pop(1)
0x5cf: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d0: Pop(0)
0x5d1: PushEmpty(bool)
0x5d2: Stack[-1] = (bool) 0
0x5d3: PushEmpty(bool, object)
0x5d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d5: Call2 0xa78

0x5d6: Pop(1)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5d8: PushEmpty(bool, object)
0x5d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5da: Call2 0xa84

0x5db: Pop(1)
0x5dc: Pop(1); Push((bool) Stack[-1] == 0)
0x5dd: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5de: Stack[-1] = (bool) 1
0x5df: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e0: Push((int) 521931)
0x5e1: Push((int) 23673)
0x5e2: Push((int) 23105)
0x5e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5e4: Pop(3)
0x5e5: Push((int) 521932)
0x5e6: Push((int) -1)
0x5e7: Push((int) 23106)
0x5e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5e9: Pop(3)
0x5ea: GOTO 0x5ed

0x5eb: Return(); Pop(0)

0x5ec: GOTO 0x5c6

0x5ed: PushEmpty(bool)
0x5ee: Call2 0xa3b

0x5ef: Pop(0)
0x5f0: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5f1: @ lshWaitForAnimEnd()
0x5f2: Pop(0)
0x5f3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f5: GOTO 0x5fb

0x5f6: PushEmpty(string)
0x5f7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5f8: Call2 0x9cf

0x5f9: Pop(1)
0x5fa: GOTO 0x5f1

0x5fb: GOTO 0x60a

0x5fc: Push("all") // @poff=138
0x5fd: Push("idle") // @poff=146
0x5fe: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ff: Pop(2)
0x600: @ WaitForAnimEnd()
0x601: Pop(0)
0x602: Push( Stack[3 + Tasks[-1].StackPointer] )
0x603: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x604: GOTO 0x60a

0x605: Push("all") // @poff=138
0x606: Push("idle") // @poff=146
0x607: @ PlayAnimation(Stack[-2], Stack[-1])
0x608: Pop(2)
0x609: GOTO 0x600

0x60a: Return(); Pop(0)

0x60b: PushEmpty()
0x60c: PushEmpty(bool)
0x60d: Call2 0xa3b

0x60e: Pop(0)
0x60f: Pop(1); Push((bool) Stack[-1] == 0)
0x610: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x611: Return(); Pop(0)

0x612: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x613: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x614: Return(); Pop(0)

0x615: PushEmpty(string, bool)
0x616: Stack[-3] = Stack[-2]
0x617: Push("") // @poff=102
0x618: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61a: Stack[-1] = (bool) 0
0x61b: GOTO 0x61d

0x61c: Stack[-1] = (bool) 1
0x61d: Call2 0x9d6

0x61e: Pop(2)
0x61f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x620: Return(); Pop(0)

0x621: PushEmpty()
0x622: Push((int) 1)
0x623: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x624: PushEmpty()
0x625: Call2 0x9eb

0x626: Pop(0)
0x627: Push((int) 23108)
0x628: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x629: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62a: PushEmpty(object, object)
0x62b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x62c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62d: Call2 0xa66

0x62e: Pop(2)
0x62f: Push((int) 23687)
0x630: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x632: PushEmpty(object, object)
0x633: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x634: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x635: Call2 0xa66

0x636: Pop(2)
0x637: Push((int) 23104)
0x638: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x63a: PushEmpty(string)
0x63b: Stack[-1] = "Neutral" // @poff=89
0x63c: Call2 0x60b

0x63d: Pop(1)
0x63e: Push((int) 521930)
0x63f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x640: Pop(1)
0x641: @@@ ClearReplies(); Obj=0 // @poff=116
0x642: Pop(0)
0x643: PushEmpty(bool)
0x644: Stack[-1] = (bool) 0
0x645: PushEmpty(bool, object)
0x646: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x647: Call2 0xa78

0x648: Pop(1)
0x649: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x64a: PushEmpty(bool, object)
0x64b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64c: Call2 0xa84

0x64d: Pop(1)
0x64e: Pop(1); Push((bool) Stack[-1] == 0)
0x64f: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x650: Stack[-1] = (bool) 1
0x651: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x652: Push((int) 521931)
0x653: Push((int) 23673)
0x654: Push((int) 23105)
0x655: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x656: Pop(3)
0x657: Push((int) 521932)
0x658: Push((int) -1)
0x659: Push((int) 23106)
0x65a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x65b: Pop(3)
0x65c: Return(); Pop(0)

0x65d: Push((int) 23673)
0x65e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x660: PushEmpty(string)
0x661: Stack[-1] = "Neutral" // @poff=89
0x662: Call2 0x60b

0x663: Pop(1)
0x664: Push((int) 522498)
0x665: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x666: Pop(1)
0x667: @@@ ClearReplies(); Obj=0 // @poff=116
0x668: Pop(0)
0x669: Push((int) 522501)
0x66a: Push((int) 23677)
0x66b: Push((int) 23676)
0x66c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x66d: Pop(3)
0x66e: Push((int) 522499)
0x66f: Push((int) 23675)
0x670: Push((int) 23674)
0x671: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x672: Pop(3)
0x673: Return(); Pop(0)

0x674: Push((int) 23675)
0x675: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x677: PushEmpty(string)
0x678: Stack[-1] = "Neutral" // @poff=89
0x679: Call2 0x60b

0x67a: Pop(1)
0x67b: Push((int) 522500)
0x67c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x67d: Pop(1)
0x67e: @@@ ClearReplies(); Obj=0 // @poff=116
0x67f: Pop(0)
0x680: Push((int) 522506)
0x681: Push((int) 23679)
0x682: Push((int) 23681)
0x683: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x684: Pop(3)
0x685: Return(); Pop(0)

0x686: Push((int) 23679)
0x687: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x689: PushEmpty(string)
0x68a: Stack[-1] = "Neutral" // @poff=89
0x68b: Call2 0x60b

0x68c: Pop(1)
0x68d: Push((int) 522504)
0x68e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x68f: Pop(1)
0x690: @@@ ClearReplies(); Obj=0 // @poff=116
0x691: Pop(0)
0x692: Push((int) 522505)
0x693: Push((int) 23677)
0x694: Push((int) 23680)
0x695: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x696: Pop(3)
0x697: Return(); Pop(0)

0x698: Push((int) 23677)
0x699: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69a: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x69b: PushEmpty(string)
0x69c: Stack[-1] = "Neutral" // @poff=89
0x69d: Call2 0x60b

0x69e: Pop(1)
0x69f: Push((int) 522502)
0x6a0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a1: Pop(1)
0x6a2: @@@ ClearReplies(); Obj=0 // @poff=116
0x6a3: Pop(0)
0x6a4: Push((int) 522503)
0x6a5: Push((int) 23683)
0x6a6: Push((int) 23678)
0x6a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6a8: Pop(3)
0x6a9: Push((int) 531516)
0x6aa: Push((int) 32868)
0x6ab: Push((int) 32871)
0x6ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6ad: Pop(3)
0x6ae: Return(); Pop(0)

0x6af: Push((int) 23683)
0x6b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b1: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6b2: PushEmpty(string)
0x6b3: Stack[-1] = "Neutral" // @poff=89
0x6b4: Call2 0x60b

0x6b5: Pop(1)
0x6b6: Push((int) 522507)
0x6b7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6b8: Pop(1)
0x6b9: @@@ ClearReplies(); Obj=0 // @poff=116
0x6ba: Pop(0)
0x6bb: Push((int) 522508)
0x6bc: Push((int) 23685)
0x6bd: Push((int) 23684)
0x6be: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6bf: Pop(3)
0x6c0: Push((int) 531513)
0x6c1: Push((int) 32868)
0x6c2: Push((int) 32867)
0x6c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c4: Pop(3)
0x6c5: Return(); Pop(0)

0x6c6: Push((int) 32868)
0x6c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6c9: PushEmpty(string)
0x6ca: Stack[-1] = "Neutral" // @poff=89
0x6cb: Call2 0x60b

0x6cc: Pop(1)
0x6cd: Push((int) 531514)
0x6ce: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6cf: Pop(1)
0x6d0: @@@ ClearReplies(); Obj=0 // @poff=116
0x6d1: Pop(0)
0x6d2: Push((int) 531515)
0x6d3: Push((int) 23685)
0x6d4: Push((int) 32869)
0x6d5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6d6: Pop(3)
0x6d7: Return(); Pop(0)

0x6d8: Push((int) 23685)
0x6d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6da: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6db: PushEmpty(string)
0x6dc: Stack[-1] = "Neutral" // @poff=89
0x6dd: Call2 0x60b

0x6de: Pop(1)
0x6df: Push((int) 522509)
0x6e0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6e1: Pop(1)
0x6e2: @@@ ClearReplies(); Obj=0 // @poff=116
0x6e3: Pop(0)
0x6e4: Push((int) 521934)
0x6e5: Push((int) -1)
0x6e6: Push((int) 23108)
0x6e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e8: Pop(3)
0x6e9: Push((int) 522511)
0x6ea: Push((int) -1)
0x6eb: Push((int) 23687)
0x6ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6ed: Pop(3)
0x6ee: Return(); Pop(0)

0x6ef: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6f0: PushEmpty(bool)
0x6f1: Call2 0xa3b

0x6f2: Pop(0)
0x6f3: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f4: @ lshStopAnimation()
0x6f5: Pop(0)
0x6f6: GOTO 0x6f9

0x6f7: @ StopAnimation()
0x6f8: Pop(0)
0x6f9: Return(); Pop(0)

0x6fa: GOTO 0x622

0x6fb: Return(); Pop(0)

0x6fc: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6fd: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6fe: PushEmpty(bool, object)
0x6ff: PushEmpty(object)
0x700: Call2 0x9f2

0x701: Stack[-1] = Stack[-2]
0x702: Pop(1)
0x703: Call2 0x945

0x704: Pop(2)
0x705: PushEmpty(bool, object, float)
0x706: Stack[-12] = Stack[-2]
0x707: Stack[-1] = (float) 70.0
0x708: Call2 0x8f0

0x709: Pop(2)
0x70a: Pop(1); Push((bool) Stack[-1] == 0)
0x70b: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70c: Stack[-10] = (int) -2
0x70d: Return(); Pop(8)

0x70e: @ CreateDialog(Stack[-4])
0x70f: Pop(0)
0x710: PushEmpty(int)
0x711: Call2 0xa35

0x712: Pop(0)
0x713: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x714: Pop(1)
0x715: PushEmpty(int)
0x716: Call2 0xa33

0x717: Pop(0)
0x718: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x719: Pop(1)
0x71a: PushEmpty(string)
0x71b: Call2 0xa37

0x71c: Pop(0)
0x71d: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x71e: Pop(1)
0x71f: PushEmpty(string)
0x720: Call2 0xa39

0x721: Pop(0)
0x722: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x723: Pop(1)
0x724: PushEmpty(int)
0x725: Call2 0xb07

0x726: Pop(0)
0x727: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x728: Pop(1)
0x729: Stack[-2] = (int) -1
0x72a: @ IsOverrideActive(Stack[-3])
0x72b: Pop(0)
0x72c: Push(Stack[-3])
0x72d: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72e: Stack[-10] = (int) -2
0x72f: Return(); Pop(8)

0x730: @ DoDialog(Stack[-4])
0x731: Pop(0)
0x732: PushEmpty(object, object)
0x733: Stack[-11] = Stack[-2]
0x734: Stack[-6] = Stack[-1]
0x735: Push(-2, 4); TaskCall(12)
0x736: Call2 0x74d

0x737: Pop(-2, 4); TaskReturn
0x738: Pop(2)
0x739: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x73a: Pop(0)
0x73b: Pop(0); Push((bool) Stack[-1] == 0)
0x73c: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73d: @ sync()
0x73e: Pop(0)
0x73f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x740: Pop(0)
0x741: GOTO 0x73b

0x742: PushEmpty(object)
0x743: Stack[-10] = Stack[-1]
0x744: Call2 0x934

0x745: Pop(1)
0x746: @ StopDialog(Stack[-4])
0x747: Pop(0)
0x748: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x749: Pop(0)
0x74a: Stack[-2] = Stack[-10]
0x74b: Return(); Pop(8)

0x74c: Stack[-4] = 0
0x74d: PushEmpty()
0x74e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x74f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x750: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x751: Push((int) 1)
0x752: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x753: PushEmpty(string)
0x754: Stack[-1] = "Neutral" // @poff=89
0x755: Call2 0x787

0x756: Pop(1)
0x757: Push((int) 540551)
0x758: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x759: Pop(1)
0x75a: @@@ ClearReplies(); Obj=0 // @poff=116
0x75b: Pop(0)
0x75c: Push((int) 540552)
0x75d: Push((int) -1)
0x75e: Push((int) 42561)
0x75f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x760: Pop(3)
0x761: Push((int) 540795)
0x762: Push((int) -1)
0x763: Push((int) 42844)
0x764: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x765: Pop(3)
0x766: GOTO 0x769

0x767: Return(); Pop(0)

0x768: GOTO 0x751

0x769: PushEmpty(bool)
0x76a: Call2 0xa3b

0x76b: Pop(0)
0x76c: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x76d: @ lshWaitForAnimEnd()
0x76e: Pop(0)
0x76f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x770: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x771: GOTO 0x777

0x772: PushEmpty(string)
0x773: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x774: Call2 0x9cf

0x775: Pop(1)
0x776: GOTO 0x76d

0x777: GOTO 0x786

0x778: Push("all") // @poff=138
0x779: Push("idle") // @poff=146
0x77a: @ PlayAnimation(Stack[-2], Stack[-1])
0x77b: Pop(2)
0x77c: @ WaitForAnimEnd()
0x77d: Pop(0)
0x77e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77f: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x780: GOTO 0x786

0x781: Push("all") // @poff=138
0x782: Push("idle") // @poff=146
0x783: @ PlayAnimation(Stack[-2], Stack[-1])
0x784: Pop(2)
0x785: GOTO 0x77c

0x786: Return(); Pop(0)

0x787: PushEmpty()
0x788: PushEmpty(bool)
0x789: Call2 0xa3b

0x78a: Pop(0)
0x78b: Pop(1); Push((bool) Stack[-1] == 0)
0x78c: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78d: Return(); Pop(0)

0x78e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x78f: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x790: Return(); Pop(0)

0x791: PushEmpty(string, bool)
0x792: Stack[-3] = Stack[-2]
0x793: Push("") // @poff=102
0x794: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x796: Stack[-1] = (bool) 0
0x797: GOTO 0x799

0x798: Stack[-1] = (bool) 1
0x799: Call2 0x9d6

0x79a: Pop(2)
0x79b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x79c: Return(); Pop(0)

0x79d: PushEmpty()
0x79e: Push((int) 1)
0x79f: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7a0: PushEmpty()
0x7a1: Call2 0x9eb

0x7a2: Pop(0)
0x7a3: Push((int) 42560)
0x7a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7a6: PushEmpty(string)
0x7a7: Stack[-1] = "Neutral" // @poff=89
0x7a8: Call2 0x787

0x7a9: Pop(1)
0x7aa: Push((int) 540551)
0x7ab: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7ac: Pop(1)
0x7ad: @@@ ClearReplies(); Obj=0 // @poff=116
0x7ae: Pop(0)
0x7af: Push((int) 540552)
0x7b0: Push((int) -1)
0x7b1: Push((int) 42561)
0x7b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b3: Pop(3)
0x7b4: Push((int) 540795)
0x7b5: Push((int) -1)
0x7b6: Push((int) 42844)
0x7b7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b8: Pop(3)
0x7b9: Return(); Pop(0)

0x7ba: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7bb: PushEmpty(bool)
0x7bc: Call2 0xa3b

0x7bd: Pop(0)
0x7be: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7bf: @ lshStopAnimation()
0x7c0: Pop(0)
0x7c1: GOTO 0x7c4

0x7c2: @ StopAnimation()
0x7c3: Pop(0)
0x7c4: Return(); Pop(0)

0x7c5: GOTO 0x79e

0x7c6: Return(); Pop(0)

0x7c7: Push(GlobalVars[1])
0x7c8: Stack[-1] = (bool) 0
0x7c9: GlobalVars[1] = Stack[-1]; Pop(1)
0x7ca: PushEmpty()
0x7cb: Call2 0x7ce

0x7cc: Pop(0)
0x7cd: Return(); Pop(0)

0x7ce: PushEmpty(bool)
0x7cf: Call2 0x8eb

0x7d0: Pop(0)
0x7d1: Pop(1); Push((bool) Stack[-1] == 0)
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d3: PushEmpty()
0x7d4: Push(-0, 0); TaskCall(0)
0x7d5: Call2 0x0

0x7d6: Pop(-0, 0); TaskReturn
0x7d7: Pop(0)
0x7d8: PushEmpty()
0x7d9: Call2 0x84e

0x7da: Pop(0)
0x7db: @ GetDirection(Stack[-0]T)
0x7dc: Pop(0)
0x7dd: PushEmpty()
0x7de: Call2 0x884

0x7df: Pop(0)
0x7e0: GOTO 0x7dd

0x7e1: Return(); Pop(0)

0x7e2: PushEmpty(object, object)
0x7e3: Push("player") // @poff=156
0x7e4: @ FindActor(Stack[-2], Stack[-1])
0x7e5: Pop(1)
0x7e6: Pop(0); Push((bool) Stack[-1] == 0)
0x7e7: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e8: Stack[-3] = (bool) 0
0x7e9: Return(); Pop(2)

0x7ea: PushEmpty(bool, object)
0x7eb: Stack[-3] = Stack[-1]
0x7ec: Call2 0x8e2

0x7ed: Stack[-2] = Stack[-5]
0x7ee: Pop(2)
0x7ef: Return(); Pop(2)

0x7f0: Stack[-1] = 0
0x7f1: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x7f2: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x7f3: @ RotateAsync(Stack[-2], Stack[-1])
0x7f4: Pop(2)
0x7f5: Return(); Pop(0)

0x7f6: PushEmpty(object, bool, object, bool)
0x7f7: Push("player") // @poff=156
0x7f8: @ FindActor(Stack[-3], Stack[-1])
0x7f9: Pop(1)
0x7fa: Pop(0); Push((bool) Stack[-2] == 0)
0x7fb: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fc: Stack[-5] = (bool) 0
0x7fd: Return(); Pop(4)

0x7fe: PushEmpty(float, object)
0x7ff: Stack[-4] = Stack[-1]
0x800: Call2 0x8d0

0x801: Pop(1)
0x802: Push((float)90000.0)
0x803: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x804: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x805: Stack[-5] = (bool) 0
0x806: Return(); Pop(4)

0x807: @ CanSee(Stack[-1], Stack[-2])
0x808: Pop(0)
0x809: Stack[-1] = Stack[-5]
0x80a: Return(); Pop(4)

0x80b: Stack[-2] = 0
0x80c: PushEmpty(float, float)
0x80d: Push((int) 8)
0x80e: Push((int) 16)
0x80f: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x810: Pop(2)
0x811: Push((int) 10)
0x812: @ SetTimer(Stack[-1], Stack[-2])
0x813: Pop(1)
0x814: Return(); Pop(2)

0x815: Push((int) 10)
0x816: @ KillTimer(Stack[-1])
0x817: Pop(1)
0x818: Return(); Pop(0)

0x819: PushEmpty()
0x81a: Push((int) 10)
0x81b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x81c: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x81d: PushEmpty()
0x81e: Call2 0x815

0x81f: Pop(0)
0x820: PushEmpty(bool)
0x821: Stack[-1] = (bool) 0
0x822: PushEmpty(bool)
0x823: Call2 0x8eb

0x824: Pop(0)
0x825: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x826: PushEmpty(bool)
0x827: Call2 0x7f6

0x828: Pop(0)
0x829: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x82a: Stack[-1] = (bool) 1
0x82b: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x82c: PushEmpty(bool)
0x82d: Call2 0x7e2

0x82e: Pop(0)
0x82f: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x830: PushEmpty(bool, object)
0x831: PushEmpty(object)
0x832: Call2 0x9f2

0x833: Stack[-1] = Stack[-2]
0x834: Pop(1)
0x835: Call2 0x97f

0x836: Pop(2)
0x837: GOTO 0x83e

0x838: PushEmpty()
0x839: Call2 0x7f1

0x83a: Pop(0)
0x83b: PushEmpty()
0x83c: Call2 0x80c

0x83d: Pop(0)
0x83e: Return(); Pop(0)

0x83f: PushEmpty()
0x840: Call2 0x8cb

0x841: Pop(0)
0x842: PushEmpty()
0x843: Call2 0x815

0x844: Pop(0)
0x845: @ lshStopSpeech()
0x846: Pop(0)
0x847: @ lshStopAnimation()
0x848: Pop(0)
0x849: @ StopAsync()
0x84a: Pop(0)
0x84b: @ Hold()
0x84c: Pop(0)
0x84d: Return(); Pop(0)

0x84e: @ StopGroup0()
0x84f: Pop(0)
0x850: PushEmpty()
0x851: Call2 0x815

0x852: Pop(0)
0x853: PushEmpty(string)
0x854: Stack[-1] = "Neutral" // @poff=89
0x855: Call2 0x9cf

0x856: Pop(1)
0x857: PushEmpty()
0x858: Call2 0x80c

0x859: Pop(0)
0x85a: Return(); Pop(0)

0x85b: PushEmpty()
0x85c: Push(Stack[-1])
0x85d: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x85e: PushEmpty()
0x85f: Call2 0x80c

0x860: Pop(0)
0x861: GOTO 0x866

0x862: PushEmpty(string)
0x863: Stack[-1] = "Neutral" // @poff=89
0x864: Call2 0x9cf

0x865: Pop(1)
0x866: Return(); Pop(0)

0x867: PushEmpty(bool, bool)
0x868: @ IsOverrideActive(Stack[-1])
0x869: Pop(0)
0x86a: Pop(0); Push((bool) Stack[-1] == 0)
0x86b: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x86c: EventDisable(0)
0x86d: PushEmpty()
0x86e: Call2 0x8cb

0x86f: Pop(0)
0x870: PushEmpty(bool, object)
0x871: Stack[-5] = Stack[-1]
0x872: Call2 0x8e2

0x873: Pop(2)
0x874: EventEnable(0)
0x875: PushEmpty(object)
0x876: Stack[-4] = Stack[-1]
0x877: Call2 0xb18

0x878: Pop(1)
0x879: PushEmpty(string)
0x87a: Stack[-1] = "Neutral" // @poff=89
0x87b: Call2 0x9cf

0x87c: Pop(1)
0x87d: PushEmpty()
0x87e: Call2 0x815

0x87f: Pop(0)
0x880: PushEmpty()
0x881: Call2 0x80c

0x882: Pop(0)
0x883: Return(); Pop(2)

0x884: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x885: @ WaitForAnimEnd()
0x886: Pop(0)
0x887: PushEmpty(bool)
0x888: Call2 0x8eb

0x889: Pop(0)
0x88a: Pop(1); Push((bool) Stack[-1] == 0)
0x88b: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x88c: Return(); Pop(12)

0x88d: PushEmpty(int)
0x88e: Call2 0xa22

0x88f: Stack[-1] = Stack[-7]
0x890: Pop(1)
0x891: Stack[-5] = (int) 0
0x892: PushEmpty(bool)
0x893: Stack[-1] = (bool) 0
0x894: Push((int) 5)
0x895: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x896: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x897: PushEmpty(bool)
0x898: Call2 0x8eb

0x899: Pop(0)
0x89a: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x89b: Stack[-1] = (bool) 1
0x89c: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x89d: Pop(0); Push((bool) Stack[-6] == 0)
0x89e: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x89f: Push((int) 3)
0x8a0: @ Sleep(Stack[-1], Stack[-5])
0x8a1: Pop(1)
0x8a2: Pop(0); Push((bool) Stack[-4] == 0)
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x8a4: GOTO 0x8c6

0x8a5: GOTO 0x8bb

0x8a6: @ irand(Stack[-3], Stack[-6])
0x8a7: Pop(0)
0x8a8: Push((int) 5)
0x8a9: @ irand(Stack[-3], Stack[-1])
0x8aa: Pop(1)
0x8ab: Push((int) 0)
0x8ac: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x8ae: Stack[-3] = (int) 0
0x8af: Push("all") // @poff=138
0x8b0: PushEmpty(string, int)
0x8b1: Stack[-6] = Stack[-1]
0x8b2: Call2 0xa1b

0x8b3: Pop(1)
0x8b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b5: Pop(2)
0x8b6: @ WaitForAnimEnd(Stack[-1])
0x8b7: Pop(0)
0x8b8: Pop(0); Push((bool) Stack[-1] == 0)
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8ba: GOTO 0x8c6

0x8bb: PushEmpty(bool)
0x8bc: Call2 0x8c9

0x8bd: Pop(0)
0x8be: Pop(1); Push((bool) Stack[-1] == 0)
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8c0: GOTO 0x8c6

0x8c1: @ ResetAAS()
0x8c2: Pop(0)
0x8c3: Push((int) 1)
0x8c4: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x8c5: GOTO 0x892

0x8c6: @ ResetAAS()
0x8c7: Pop(0)
0x8c8: Return(); Pop(12)

0x8c9: Stack[-1] = (bool) 1
0x8ca: Return(); Pop(0)

0x8cb: @ StopAnimation()
0x8cc: Pop(0)
0x8cd: @ StopGroup0()
0x8ce: Pop(0)
0x8cf: Return(); Pop(0)

0x8d0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x8d1: @ GetPosition(Stack[-3])
0x8d2: Pop(0)
0x8d3: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x8d4: Pop(0)
0x8d5: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x8d6: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x8d7: Return(); Pop(6)

0x8d8: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x8d9: @ GetPosition(Stack[-3])
0x8da: Pop(0)
0x8db: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x8dc: Push(CvectorIndex(Stack[-2], 0))
0x8dd: Push(CvectorIndex(Stack[-3], 2))
0x8de: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x8df: Pop(2)
0x8e0: Stack[-1] = Stack[-8]
0x8e1: Return(); Pop(6)

0x8e2: PushEmpty(cvector, cvector)
0x8e3: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x8e4: Pop(0)
0x8e5: PushEmpty(bool, cvector)
0x8e6: Stack[-3] = Stack[-1]
0x8e7: Call2 0x8d8

0x8e8: Stack[-2] = Stack[-6]
0x8e9: Pop(2)
0x8ea: Return(); Pop(2)

0x8eb: PushEmpty(bool, bool)
0x8ec: @ IsLoaded(Stack[-1])
0x8ed: Pop(0)
0x8ee: Stack[-1] = Stack[-3]
0x8ef: Return(); Pop(2)

0x8f0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x8f1: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x8f2: Pop(0)
0x8f3: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x8f4: Pop(0)
0x8f5: Push(CvectorIndex(Stack[-8], 1))
0x8f6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8f7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x8f8: @ GetPosition(Stack[-7])
0x8f9: Pop(0)
0x8fa: @ GetEyesHeight(Stack[-9])
0x8fb: Pop(0)
0x8fc: Push(CvectorIndex(Stack[-7], 1))
0x8fd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8fe: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x8ff: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x900: Push(CvectorIndex(Stack[-6], 1))
0x901: Stack[-1] = (int) 0
0x902: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x903: Pop(0); Push(Stack[-6] | Stack[-6]);
0x904: Pop(1); Push(Sqrt(Stack[-1]))
0x905: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x906: Stack[-5] = -Stack[-6]; Pop(0);
0x907: Pop(0); Push(Stack[-6] * Stack[-19]);
0x908: PushEmpty(cvector, cvector)
0x909: Push([0.0, 1.0, 0.0])
0x90a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x90b: Call2 0x9f8

0x90c: Pop(1)
0x90d: Push((int) 25)
0x90e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x90f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x910: Push([0.0, 10.0, 0.0])
0x911: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x912: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x913: @ IsOverrideActive(Stack[-2])
0x914: Pop(0)
0x915: Push(Stack[-2])
0x916: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x917: Stack[-21] = (bool) 0
0x918: Return(); Pop(18)

0x919: @ StopWorld()
0x91a: Pop(0)
0x91b: @ CameraTransit(Stack[-3], Stack[-5])
0x91c: Pop(0)
0x91d: Push(CvectorIndex(Stack[-4], 0))
0x91e: Push(CvectorIndex(Stack[-5], 2))
0x91f: @ Rotate(Stack[-2], Stack[-1])
0x920: Pop(2)
0x921: PushEmpty(bool)
0x922: Call2 0xa3b

0x923: Pop(0)
0x924: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x925: GOTO 0x92e

0x926: Push("head") // @poff=196
0x927: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x928: Pop(1)
0x929: Push(Stack[-1])
0x92a: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x92b: Push("head") // @poff=196
0x92c: @ LookAsyncCamera(Stack[-1])
0x92d: Pop(1)
0x92e: @ CameraWaitForPlayFinish()
0x92f: Pop(0)
0x930: @ ResumeWorld()
0x931: Pop(0)
0x932: Stack[-21] = (bool) 1
0x933: Return(); Pop(18)

0x934: PushEmpty(bool, bool)
0x935: @ CameraSwitchToNormal()
0x936: Pop(0)
0x937: PushEmpty(bool)
0x938: Call2 0xa3b

0x939: Pop(0)
0x93a: IF (Stack[-1] == 0) GOTO 0x93c; Pop(1)

0x93b: GOTO 0x944

0x93c: Push("head") // @poff=196
0x93d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x93e: Pop(1)
0x93f: Push(Stack[-1])
0x940: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x941: Push("head") // @poff=196
0x942: @ UnlookAsync(Stack[-1])
0x943: Pop(1)
0x944: Return(); Pop(2)

0x945: PushEmpty(int, int, int, int)
0x946: Push("voice_common") // @poff=206
0x947: @ GetVariable(Stack[-1], Stack[-3])
0x948: Pop(1)
0x949: Push(Stack[-2])
0x94a: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x94b: PushEmpty(bool, object)
0x94c: Stack[-7] = Stack[-1]
0x94d: Call2 0x97f

0x94e: Pop(1)
0x94f: Pop(1); Push((bool) Stack[-1] == 0)
0x950: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x951: PushEmpty(bool, object)
0x952: Stack[-7] = Stack[-1]
0x953: Call2 0x9a4

0x954: Pop(1)
0x955: Pop(1); Push((bool) Stack[-1] == 0)
0x956: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x957: Stack[-6] = (bool) 0
0x958: Return(); Pop(4)

0x959: Push((int) 2)
0x95a: @ irand(Stack[-2], Stack[-1])
0x95b: Pop(1)
0x95c: Push(Stack[-1])
0x95d: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x95e: Push("voice_common") // @poff=206
0x95f: Push((int) 1)
0x960: Pop(1); Push(Stack[-4] + Stack[-1]);
0x961: Push((int) 3)
0x962: Pop(2); Push(Stack[-2] % Stack[-1]);
0x963: @ SetVariable(Stack[-2], Stack[-1])
0x964: Pop(2)
0x965: GOTO 0x96a

0x966: Push("voice_common") // @poff=206
0x967: Push((int) 0)
0x968: @ SetVariable(Stack[-2], Stack[-1])
0x969: Pop(2)
0x96a: GOTO 0x97d

0x96b: PushEmpty(bool, object)
0x96c: Stack[-7] = Stack[-1]
0x96d: Call2 0x9a4

0x96e: Pop(1)
0x96f: Pop(1); Push((bool) Stack[-1] == 0)
0x970: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x971: PushEmpty(bool, object)
0x972: Stack[-7] = Stack[-1]
0x973: Call2 0x97f

0x974: Pop(1)
0x975: Pop(1); Push((bool) Stack[-1] == 0)
0x976: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x977: Stack[-6] = (bool) 0
0x978: Return(); Pop(4)

0x979: Push("voice_common") // @poff=206
0x97a: Push((int) 1)
0x97b: @ SetVariable(Stack[-2], Stack[-1])
0x97c: Pop(2)
0x97d: Stack[-6] = (bool) 1
0x97e: Return(); Pop(4)

0x97f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x980: Stack[-5] = "c" // @poff=232
0x981: Stack[-4] = (int) 0
0x982: Push((int) 1)
0x983: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x984: Push((int) 1)
0x985: Pop(1); Push(Stack[-5] + Stack[-1]);
0x986: Pop(1); Push(Stack[-6] + Stack[-1]);
0x987: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x988: Pop(1)
0x989: Pop(0); Push((bool) Stack[-3] == 0)
0x98a: IF (Stack[-1] == 0) GOTO 0x98c; Pop(1)

0x98b: GOTO 0x98f

0x98c: Push((int) 1)
0x98d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x98e: GOTO 0x982

0x98f: Pop(0); Push((bool) Stack[-4] == 0)
0x990: IF (Stack[-1] == 0) GOTO 0x993; Pop(1)

0x991: Stack[-12] = (bool) 0
0x992: Return(); Pop(10)

0x993: Stack[-2] = (int) 0
0x994: Push((int) 1)
0x995: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x996: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x997: @ irand(Stack[-2], Stack[-4])
0x998: Pop(0)
0x999: Push((int) 1)
0x99a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x99b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x99c: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x99d: Pop(1)
0x99e: PushEmpty(bool, string)
0x99f: Stack[-3] = Stack[-1]
0x9a0: Call2 0x9dc

0x9a1: Stack[-2] = Stack[-14]
0x9a2: Pop(2)
0x9a3: Return(); Pop(10)

0x9a4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x9a5: Push("d") // @poff=202
0x9a6: PushEmpty(int)
0x9a7: Call2 0xa0c

0x9a8: Pop(0)
0x9a9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9aa: Push("m") // @poff=260
0x9ab: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x9ac: Stack[-4] = (int) 0
0x9ad: Push((int) 1)
0x9ae: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9af: Push((int) 1)
0x9b0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x9b1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9b2: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x9b3: Pop(1)
0x9b4: Pop(0); Push((bool) Stack[-3] == 0)
0x9b5: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b6: GOTO 0x9ba

0x9b7: Push((int) 1)
0x9b8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9b9: GOTO 0x9ad

0x9ba: Pop(0); Push((bool) Stack[-4] == 0)
0x9bb: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9bc: Stack[-12] = (bool) 0
0x9bd: Return(); Pop(10)

0x9be: Stack[-2] = (int) 0
0x9bf: Push((int) 1)
0x9c0: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x9c1: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9c2: @ irand(Stack[-2], Stack[-4])
0x9c3: Pop(0)
0x9c4: Push((int) 1)
0x9c5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x9c6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9c7: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x9c8: Pop(1)
0x9c9: PushEmpty(bool, string)
0x9ca: Stack[-3] = Stack[-1]
0x9cb: Call2 0x9dc

0x9cc: Stack[-2] = Stack[-14]
0x9cd: Pop(2)
0x9ce: Return(); Pop(10)

0x9cf: PushEmpty(float, float, float, float)
0x9d0: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x9d1: Pop(0)
0x9d2: Push((bool) 0)
0x9d3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9d4: Pop(1)
0x9d5: Return(); Pop(4)

0x9d6: PushEmpty(float, float, float, float)
0x9d7: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x9d8: Pop(0)
0x9d9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x9da: Pop(0)
0x9db: Return(); Pop(4)

0x9dc: PushEmpty(bool, bool)
0x9dd: PushEmpty(bool)
0x9de: Call2 0xa3b

0x9df: Pop(0)
0x9e0: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e1: @ lshHasSpeech(Stack[-1], Stack[-3])
0x9e2: Pop(0)
0x9e3: Push(Stack[-1])
0x9e4: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e5: @ lshPlaySpeech(Stack[-3])
0x9e6: Pop(0)
0x9e7: Stack[-4] = (bool) 1
0x9e8: Return(); Pop(2)

0x9e9: Stack[-4] = (bool) 0
0x9ea: Return(); Pop(2)

0x9eb: PushEmpty(bool)
0x9ec: Call2 0xa3b

0x9ed: Pop(0)
0x9ee: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9ef: @ lshStopSpeech()
0x9f0: Pop(0)
0x9f1: Return(); Pop(0)

0x9f2: PushEmpty(object, object)
0x9f3: @ self(Stack[-1])
0x9f4: Pop(0)
0x9f5: Stack[-1] = Stack[-3]
0x9f6: Return(); Pop(2)

0x9f7: Stack[-1] = 0
0x9f8: PushEmpty(float, float)
0x9f9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x9fa: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9fb: Push((float)9.999999974752427e-07)
0x9fc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9fd: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9fe: Stack[-4] = [0.0, 0.0, 0.0]
0x9ff: Return(); Pop(2)

0xa00: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa01: Return(); Pop(2)

0xa02: PushEmpty(int, int)
0xa03: @ GetVariable(Stack[-3], Stack[-1])
0xa04: Pop(0)
0xa05: Stack[-1] = Stack[-4]
0xa06: Return(); Pop(2)

0xa07: PushEmpty(float, float)
0xa08: @ GetGameTime(Stack[-1])
0xa09: Pop(0)
0xa0a: Stack[-1] = Stack[-3]
0xa0b: Return(); Pop(2)

0xa0c: PushEmpty(float, float)
0xa0d: @ GetGameTime(Stack[-1])
0xa0e: Pop(0)
0xa0f: Push((int) 1)
0xa10: PushEmpty(int)
0xa11: Push((int) 24)
0xa12: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa13: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa14: Return(); Pop(2)

0xa15: PushEmpty()
0xa16: PushEmpty(int)
0xa17: Call2 0xa0c

0xa18: Pop(0)
0xa19: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xa1a: Return(); Pop(0)

0xa1b: PushEmpty(string, string)
0xa1c: Stack[-1] = "idle" // @poff=146
0xa1d: Push(Stack[-3])
0xa1e: IF (Stack[-1] == 0) GOTO 0xa20; Pop(1)

0xa1f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa20: Stack[-1] = Stack[-4]
0xa21: Return(); Pop(2)

0xa22: PushEmpty(int, bool, int, bool)
0xa23: Stack[-2] = (int) 0
0xa24: Push("all") // @poff=138
0xa25: PushEmpty(string, int)
0xa26: Stack[-5] = Stack[-1]
0xa27: Call2 0xa1b

0xa28: Pop(1)
0xa29: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa2a: Pop(2)
0xa2b: Pop(0); Push((bool) Stack[-1] == 0)
0xa2c: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa2d: GOTO 0xa31

0xa2e: Push((int) 1)
0xa2f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa30: GOTO 0xa24

0xa31: Stack[-2] = Stack[-5]
0xa32: Return(); Pop(4)

0xa33: Stack[-1] = (int) 515539
0xa34: Return(); Pop(0)

0xa35: Stack[-1] = (int) 502864
0xa36: Return(); Pop(0)

0xa37: Stack[-1] = "ui/NPC_Katerina.png" // @poff=264
0xa38: Return(); Pop(0)

0xa39: Stack[-1] = "ui/NPC_Katerina_b.png" // @poff=304
0xa3a: Return(); Pop(0)

0xa3b: Stack[-1] = (bool) 1
0xa3c: Return(); Pop(0)

0xa3d: PushEmpty()
0xa3e: Push("oob2Katerina1") // @poff=348
0xa3f: Push((int) 1)
0xa40: @ SetVariable(Stack[-2], Stack[-1])
0xa41: Pop(2)
0xa42: Return(); Pop(0)

0xa43: PushEmpty()
0xa44: Push("oob2Katerina2") // @poff=376
0xa45: Push((int) 1)
0xa46: @ SetVariable(Stack[-2], Stack[-1])
0xa47: Pop(2)
0xa48: Return(); Pop(0)

0xa49: PushEmpty()
0xa4a: Push("oob2Katerina3") // @poff=404
0xa4b: Push((int) 1)
0xa4c: @ SetVariable(Stack[-2], Stack[-1])
0xa4d: Pop(2)
0xa4e: Return(); Pop(0)

0xa4f: PushEmpty(object, object)
0xa50: Push("b8q03") // @poff=432
0xa51: Push((int) 2)
0xa52: @ SetVariable(Stack[-2], Stack[-1])
0xa53: Pop(2)
0xa54: PushEmpty(object)
0xa55: Call2 0xaf6

0xa56: Stack[-1] = Stack[-2]
0xa57: Pop(1)
0xa58: Push("b8q03KaterinaGotoMat") // @poff=444
0xa59: Push("pt_map_mat") // @poff=486
0xa5a: Push((int) 0)
0xa5b: Push((int) 530664)
0xa5c: PushEmpty(float)
0xa5d: Call2 0xa07

0xa5e: Pop(0)
0xa5f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=508
0xa60: Pop(5)
0xa61: PushEmpty()
0xa62: Call2 0xac0

0xa63: Pop(0)
0xa64: Return(); Pop(2)

0xa65: Stack[-1] = 0
0xa66: PushEmpty()
0xa67: Push("b10q01TalkKaterina") // @poff=516
0xa68: Push((int) 1)
0xa69: @ SetVariable(Stack[-2], Stack[-1])
0xa6a: Pop(2)
0xa6b: Return(); Pop(0)

0xa6c: PushEmpty()
0xa6d: PushEmpty(int, string)
0xa6e: Stack[-1] = "b8q03" // @poff=432
0xa6f: Call2 0xa02

0xa70: Pop(1)
0xa71: Push((int) 1)
0xa72: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa73: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa74: Stack[-2] = (bool) 1
0xa75: Return(); Pop(0)

0xa76: Stack[-2] = (bool) 0
0xa77: Return(); Pop(0)

0xa78: PushEmpty()
0xa79: PushEmpty(int, string)
0xa7a: Stack[-1] = "b10q01" // @poff=554
0xa7b: Call2 0xa02

0xa7c: Pop(1)
0xa7d: Push((int) 4)
0xa7e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa7f: IF (Stack[-1] == 0) GOTO 0xa82; Pop(1)

0xa80: Stack[-2] = (bool) 1
0xa81: Return(); Pop(0)

0xa82: Stack[-2] = (bool) 0
0xa83: Return(); Pop(0)

0xa84: PushEmpty()
0xa85: PushEmpty(int, string)
0xa86: Stack[-1] = "b10q01TalkKaterina" // @poff=516
0xa87: Call2 0xa02

0xa88: Pop(1)
0xa89: Push((int) 1)
0xa8a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa8b: IF (Stack[-1] == 0) GOTO 0xa8e; Pop(1)

0xa8c: Stack[-2] = (bool) 1
0xa8d: Return(); Pop(0)

0xa8e: Stack[-2] = (bool) 0
0xa8f: Return(); Pop(0)

0xa90: PushEmpty()
0xa91: PushEmpty(int, string)
0xa92: Stack[-1] = "b2q01" // @poff=568
0xa93: Call2 0xa02

0xa94: Pop(1)
0xa95: Push((int) 0)
0xa96: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa97: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa98: Stack[-2] = (bool) 1
0xa99: Return(); Pop(0)

0xa9a: Stack[-2] = (bool) 0
0xa9b: Return(); Pop(0)

0xa9c: PushEmpty()
0xa9d: PushEmpty(int, string)
0xa9e: Stack[-1] = "oob2Katerina1" // @poff=348
0xa9f: Call2 0xa02

0xaa0: Pop(1)
0xaa1: Push((int) 0)
0xaa2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xaa3: IF (Stack[-1] == 0) GOTO 0xaa6; Pop(1)

0xaa4: Stack[-2] = (bool) 1
0xaa5: Return(); Pop(0)

0xaa6: Stack[-2] = (bool) 0
0xaa7: Return(); Pop(0)

0xaa8: PushEmpty()
0xaa9: PushEmpty(int, string)
0xaaa: Stack[-1] = "oob2Katerina2" // @poff=376
0xaab: Call2 0xa02

0xaac: Pop(1)
0xaad: Push((int) 0)
0xaae: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xaaf: IF (Stack[-1] == 0) GOTO 0xab2; Pop(1)

0xab0: Stack[-2] = (bool) 1
0xab1: Return(); Pop(0)

0xab2: Stack[-2] = (bool) 0
0xab3: Return(); Pop(0)

0xab4: PushEmpty()
0xab5: PushEmpty(int, string)
0xab6: Stack[-1] = "oob2Katerina3" // @poff=404
0xab7: Call2 0xa02

0xab8: Pop(1)
0xab9: Push((int) 0)
0xaba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xabb: IF (Stack[-1] == 0) GOTO 0xabe; Pop(1)

0xabc: Stack[-2] = (bool) 1
0xabd: Return(); Pop(0)

0xabe: Stack[-2] = (bool) 0
0xabf: Return(); Pop(0)

0xac0: PushEmpty(object, object)
0xac1: Push((int) 577)
0xac2: Push((int) 2)
0xac3: Push((int) 530657)
0xac4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xac5: Pop(3)
0xac6: PushEmpty(bool, object, int)
0xac7: Stack[-4] = Stack[-2]
0xac8: Stack[-1] = (int) 575
0xac9: Call2 0xada

0xaca: Pop(3)
0xacb: Return(); Pop(2)

0xacc: Stack[-1] = 0
0xacd: PushEmpty(object, object)
0xace: @ GetDiaryRoot(Stack[-1])
0xacf: Pop(0)
0xad0: Pop(0); Push((bool) Stack[-1] == 0)
0xad1: IF (Stack[-1] == 0) GOTO 0xad7; Pop(1)

0xad2: Push("Can't retrieve diary root") // @poff=580
0xad3: @ Trace(Stack[-1])
0xad4: Pop(1)
0xad5: Stack[-3] = (bool) 0
0xad6: Return(); Pop(2)

0xad7: Stack[-1] = Stack[-3]
0xad8: Return(); Pop(2)

0xad9: Stack[-1] = 0
0xada: PushEmpty(object, object, int, object, object, int)
0xadb: PushEmpty(object)
0xadc: Call2 0xacd

0xadd: Stack[-1] = Stack[-4]
0xade: Pop(1)
0xadf: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=632
0xae0: Pop(0)
0xae1: Pop(0); Push((bool) Stack[-2] == 0)
0xae2: IF (Stack[-1] == 0) GOTO 0xae9; Pop(1)

0xae3: Push("Can't find diary parent with id: ") // @poff=637
0xae4: Pop(1); Push(Stack[-1] + Stack[-8]);
0xae5: @ Trace(Stack[-1])
0xae6: Pop(1)
0xae7: Stack[-9] = (bool) 0
0xae8: Return(); Pop(6)

0xae9: @@ AddChild(Stack[-8]); Obj=2 // @poff=705
0xaea: Pop(0)
0xaeb: Push((int) 7)
0xaec: @ SendWorldWndMessage(Stack[-1])
0xaed: Pop(1)
0xaee: @@ GetCategory(Stack[-1]); Obj=8 // @poff=714
0xaef: Pop(0)
0xaf0: @ SetDiarySection(Stack[-1])
0xaf1: Pop(0)
0xaf2: Stack[-9] = (bool) 0
0xaf3: Return(); Pop(6)

0xaf4: Stack[-2] = 0
0xaf5: Stack[-3] = 0
0xaf6: PushEmpty(object, object, object, object)
0xaf7: @ GetMainOutdoorScene(Stack[-2])
0xaf8: Pop(0)
0xaf9: Pop(0); PushNull((bool) Stack[-2] == 0)
0xafa: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xafb: Push("Can't find main outdoor scene") // @poff=726
0xafc: @ Trace(Stack[-1])
0xafd: Pop(1)
0xafe: Stack[-1] = 0
0xaff: Stack[-1] = Stack[-5]
0xb00: Return(); Pop(4)

0xb01: @@ GetMap(Stack[-1]); Obj=2 // @poff=786
0xb02: Pop(0)
0xb03: Stack[-1] = Stack[-5]
0xb04: Return(); Pop(4)

0xb05: Stack[-1] = 0
0xb06: Stack[-2] = 0
0xb07: PushEmpty(int, int)
0xb08: Push("branch") // @poff=793
0xb09: @ GetVariable(Stack[-1], Stack[-2])
0xb0a: Pop(1)
0xb0b: Push((int) 0)
0xb0c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb0d: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0e: Stack[-3] = (int) 1
0xb0f: Return(); Pop(2)

0xb10: GOTO 0xb16

0xb11: Push((int) 1)
0xb12: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb13: IF (Stack[-1] == 0) GOTO 0xb16; Pop(1)

0xb14: Stack[-3] = (int) 2
0xb15: Return(); Pop(2)

0xb16: Stack[-3] = (int) 3
0xb17: Return(); Pop(2)

0xb18: PushEmpty()
0xb19: Push(GlobalVars[1])
0xb1a: Pop(1); Push((bool) Stack[-1] == 0)
0xb1b: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb1c: PushEmpty(int, object)
0xb1d: Stack[-3] = Stack[-1]
0xb1e: Push(-2, 1); TaskCall(3)
0xb1f: Call2 0x110

0xb20: Pop(-2, 1); TaskReturn
0xb21: Pop(2)
0xb22: Push(GlobalVars[1])
0xb23: Stack[-1] = (bool) 1
0xb24: GlobalVars[1] = Stack[-1]; Pop(1)
0xb25: PushEmpty(bool, int)
0xb26: Stack[-1] = (int) 2
0xb27: Call2 0xa15

0xb28: Pop(1)
0xb29: IF (Stack[-1] == 0) GOTO 0xb31; Pop(1)

0xb2a: PushEmpty(int, object)
0xb2b: Stack[-3] = Stack[-1]
0xb2c: Push(-2, 1); TaskCall(5)
0xb2d: Call2 0x1db

0xb2e: Pop(-2, 1); TaskReturn
0xb2f: Pop(2)
0xb30: Return(); Pop(0)

0xb31: PushEmpty(bool, int)
0xb32: Stack[-1] = (int) 8
0xb33: Call2 0xa15

0xb34: Pop(1)
0xb35: IF (Stack[-1] == 0) GOTO 0xb3d; Pop(1)

0xb36: PushEmpty(int, object)
0xb37: Stack[-3] = Stack[-1]
0xb38: Push(-2, 1); TaskCall(7)
0xb39: Call2 0x414

0xb3a: Pop(-2, 1); TaskReturn
0xb3b: Pop(2)
0xb3c: Return(); Pop(0)

0xb3d: PushEmpty(bool, int)
0xb3e: Stack[-1] = (int) 10
0xb3f: Call2 0xa15

0xb40: Pop(1)
0xb41: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb42: PushEmpty(int, object)
0xb43: Stack[-3] = Stack[-1]
0xb44: Push(-2, 1); TaskCall(9)
0xb45: Call2 0x571

0xb46: Pop(-2, 1); TaskReturn
0xb47: Pop(2)
0xb48: Return(); Pop(0)

0xb49: PushEmpty(bool)
0xb4a: Stack[-1] = (bool) 0
0xb4b: PushEmpty(bool, int)
0xb4c: Stack[-1] = (int) 12
0xb4d: Call2 0xa15

0xb4e: Pop(1)
0xb4f: IF (Stack[-1] == 0) GOTO 0xb54; Pop(1)

0xb50: Push(GlobalVars[2])
0xb51: Pop(1); Push((bool) Stack[-1] == 0)
0xb52: IF (Stack[-1] == 0) GOTO 0xb54; Pop(1)

0xb53: Stack[-1] = (bool) 1
0xb54: IF (Stack[-1] == 0) GOTO 0xb5f; Pop(1)

0xb55: PushEmpty(int, object)
0xb56: Stack[-3] = Stack[-1]
0xb57: Push(-2, 1); TaskCall(1)
0xb58: Call2 0xd

0xb59: Pop(-2, 1); TaskReturn
0xb5a: Pop(2)
0xb5b: Push(GlobalVars[2])
0xb5c: Stack[-1] = (bool) 1
0xb5d: GlobalVars[2] = Stack[-1]; Pop(1)
0xb5e: Return(); Pop(0)

0xb5f: PushEmpty(int, object)
0xb60: Stack[-3] = Stack[-1]
0xb61: Push(-2, 1); TaskCall(11)
0xb62: Call2 0x6fc

0xb63: Pop(-2, 1); TaskReturn
0xb64: Pop(2)
0xb65: Return(); Pop(0)

