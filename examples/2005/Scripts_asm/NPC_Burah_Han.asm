GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	W:ui/NPC_Han.png
	W:ui/NPC_Han_b.png
	W:b11q02
	W:quest_b11_02
	W:fail
	W:oob12Han1
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f00480061006e002e0070006e0067000000750069002f004e00500043005f00480061006e005f0062002e0070006e00670000006200310031007100300032000000710075006500730074005f006200310031005f003000320000006600610069006c0000006f006f00620031003200480061006e0031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x4db
RunTask = 9

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc0 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x277 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3cf Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4b1 Vars = (int, int)
	GTASK_9 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x52d Vars = (int)
		EVENT_6 Op = 0x553 Vars = ()
		EVENT_5 Op = 0x562 Vars = ()
		EVENT_45 Op = 0x56f Vars = (bool)
		EVENT_0 Op = 0x57b Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x5ff

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
0xf: PushEmpty(bool, object, float)
0x10: Stack[-12] = Stack[-2]
0x11: Stack[-1] = (float) 70.0
0x12: Call2 0x604

0x13: Pop(2)
0x14: Pop(1); Push((bool) Stack[-1] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x16: Stack[-10] = (int) -2
0x17: Return(); Pop(8)

0x18: @ CreateDialog(Stack[-4])
0x19: Pop(0)
0x1a: PushEmpty(int)
0x1b: Call2 0x750

0x1c: Pop(0)
0x1d: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x1e: Pop(1)
0x1f: PushEmpty(int)
0x20: Call2 0x74e

0x21: Pop(0)
0x22: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x23: Pop(1)
0x24: PushEmpty(string)
0x25: Call2 0x752

0x26: Pop(0)
0x27: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x28: Pop(1)
0x29: PushEmpty(string)
0x2a: Call2 0x754

0x2b: Pop(0)
0x2c: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x2d: Pop(1)
0x2e: PushEmpty(int)
0x2f: Call2 0x7cc

0x30: Pop(0)
0x31: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x32: Pop(1)
0x33: Stack[-2] = (int) -1
0x34: @ IsOverrideActive(Stack[-3])
0x35: Pop(0)
0x36: Push(Stack[-3])
0x37: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x38: Stack[-10] = (int) -2
0x39: Return(); Pop(8)

0x3a: @ DoDialog(Stack[-4])
0x3b: Pop(0)
0x3c: PushEmpty(object, object)
0x3d: Stack[-11] = Stack[-2]
0x3e: Stack[-6] = Stack[-1]
0x3f: Push(-2, 4); TaskCall(2)
0x40: Call2 0x57

0x41: Pop(-2, 4); TaskReturn
0x42: Pop(2)
0x43: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x44: Pop(0)
0x45: Pop(0); Push((bool) Stack[-1] == 0)
0x46: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x47: @ sync()
0x48: Pop(0)
0x49: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4a: Pop(0)
0x4b: GOTO 0x45

0x4c: PushEmpty(object)
0x4d: Stack[-10] = Stack[-1]
0x4e: Call2 0x648

0x4f: Pop(1)
0x50: @ StopDialog(Stack[-4])
0x51: Pop(0)
0x52: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x53: Pop(0)
0x54: Stack[-2] = Stack[-10]
0x55: Return(); Pop(8)

0x56: Stack[-4] = 0
0x57: PushEmpty()
0x58: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x59: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5b: Push((int) 1)
0x5c: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x5d: PushEmpty(bool, object)
0x5e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5f: Call2 0x771

0x60: Pop(1)
0x61: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x62: PushEmpty(string)
0x63: Stack[-1] = "Neutral" // @poff=89
0x64: Call2 0xaa

0x65: Pop(1)
0x66: Push((int) 531123)
0x67: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x68: Pop(1)
0x69: @@@ ClearReplies(); Obj=0 // @poff=116
0x6a: Pop(0)
0x6b: Push((int) 531124)
0x6c: Push((int) 32443)
0x6d: Push((int) 32442)
0x6e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6f: Pop(3)
0x70: Push((int) 531403)
0x71: Push((int) 32745)
0x72: Push((int) 32744)
0x73: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x74: Pop(3)
0x75: GOTO 0x8c

0x76: PushEmpty(string)
0x77: Stack[-1] = "Neutral" // @poff=89
0x78: Call2 0xaa

0x79: Pop(1)
0x7a: Push((int) 531127)
0x7b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7c: Pop(1)
0x7d: @@@ ClearReplies(); Obj=0 // @poff=116
0x7e: Pop(0)
0x7f: Push((int) 531128)
0x80: Push((int) -1)
0x81: Push((int) 32446)
0x82: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x83: Pop(3)
0x84: Push((int) 531398)
0x85: Push((int) -1)
0x86: Push((int) 32739)
0x87: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x88: Pop(3)
0x89: GOTO 0x8c

0x8a: Return(); Pop(0)

0x8b: GOTO 0x5b

0x8c: PushEmpty(bool)
0x8d: Call2 0x756

0x8e: Pop(0)
0x8f: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x90: @ lshWaitForAnimEnd()
0x91: Pop(0)
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: GOTO 0x9a

0x95: PushEmpty(string)
0x96: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x97: Call2 0x6e3

0x98: Pop(1)
0x99: GOTO 0x90

0x9a: GOTO 0xa9

0x9b: Push("all") // @poff=138
0x9c: Push("idle") // @poff=146
0x9d: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: @ WaitForAnimEnd()
0xa0: Pop(0)
0xa1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: Push("all") // @poff=138
0xa5: Push("idle") // @poff=146
0xa6: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: GOTO 0x9f

0xa9: Return(); Pop(0)

0xaa: PushEmpty()
0xab: PushEmpty(bool)
0xac: Call2 0x756

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Return(); Pop(0)

0xb4: PushEmpty(string, bool)
0xb5: Stack[-3] = Stack[-2]
0xb6: Push("") // @poff=102
0xb7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb9: Stack[-1] = (bool) 0
0xba: GOTO 0xbc

0xbb: Stack[-1] = (bool) 1
0xbc: Call2 0x6ea

0xbd: Pop(2)
0xbe: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: Push((int) 1)
0xc2: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0xc3: PushEmpty()
0xc4: Call2 0x6ff

0xc5: Pop(0)
0xc6: Push((int) 32444)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x758

0xcd: Pop(2)
0xce: Push((int) 32756)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x758

0xd5: Pop(2)
0xd6: Push((int) 32750)
0xd7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call2 0x761

0xdd: Pop(2)
0xde: Push((int) 32441)
0xdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xe1: PushEmpty(bool, object)
0xe2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Call2 0x771

0xe4: Pop(1)
0xe5: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xe6: PushEmpty(string)
0xe7: Stack[-1] = "Neutral" // @poff=89
0xe8: Call2 0xaa

0xe9: Pop(1)
0xea: Push((int) 531123)
0xeb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xec: Pop(1)
0xed: @@@ ClearReplies(); Obj=0 // @poff=116
0xee: Pop(0)
0xef: Push((int) 531124)
0xf0: Push((int) 32443)
0xf1: Push((int) 32442)
0xf2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf3: Pop(3)
0xf4: Push((int) 531403)
0xf5: Push((int) 32745)
0xf6: Push((int) 32744)
0xf7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf8: Pop(3)
0xf9: Return(); Pop(0)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral" // @poff=89
0xfc: Call2 0xaa

0xfd: Pop(1)
0xfe: Push((int) 531127)
0xff: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x100: Pop(1)
0x101: @@@ ClearReplies(); Obj=0 // @poff=116
0x102: Pop(0)
0x103: Push((int) 531128)
0x104: Push((int) -1)
0x105: Push((int) 32446)
0x106: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x107: Pop(3)
0x108: Push((int) 531398)
0x109: Push((int) -1)
0x10a: Push((int) 32739)
0x10b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 32745)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x111: PushEmpty(string)
0x112: Stack[-1] = "Neutral" // @poff=89
0x113: Call2 0xaa

0x114: Pop(1)
0x115: Push((int) 531404)
0x116: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x117: Pop(1)
0x118: @@@ ClearReplies(); Obj=0 // @poff=116
0x119: Pop(0)
0x11a: Push((int) 531405)
0x11b: Push((int) 32749)
0x11c: Push((int) 32746)
0x11d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11e: Pop(3)
0x11f: Push((int) 531406)
0x120: Push((int) 32443)
0x121: Push((int) 32747)
0x122: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 32443)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral" // @poff=89
0x12a: Call2 0xaa

0x12b: Pop(1)
0x12c: Push((int) 531125)
0x12d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12e: Pop(1)
0x12f: @@@ ClearReplies(); Obj=0 // @poff=116
0x130: Pop(0)
0x131: Push((int) 531399)
0x132: Push((int) 32741)
0x133: Push((int) 32740)
0x134: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 32741)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral" // @poff=89
0x13c: Call2 0xaa

0x13d: Pop(1)
0x13e: Push((int) 531400)
0x13f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x140: Pop(1)
0x141: @@@ ClearReplies(); Obj=0 // @poff=116
0x142: Pop(0)
0x143: Push((int) 531401)
0x144: Push((int) 32757)
0x145: Push((int) 32742)
0x146: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x147: Pop(3)
0x148: Push((int) 531407)
0x149: Push((int) 32749)
0x14a: Push((int) 32748)
0x14b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 32749)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral" // @poff=89
0x153: Call2 0xaa

0x154: Pop(1)
0x155: Push((int) 531408)
0x156: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x157: Pop(1)
0x158: @@@ ClearReplies(); Obj=0 // @poff=116
0x159: Pop(0)
0x15a: Push((int) 531409)
0x15b: Push((int) -1)
0x15c: Push((int) 32750)
0x15d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Push((int) 32757)
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Neutral" // @poff=89
0x165: Call2 0xaa

0x166: Pop(1)
0x167: Push((int) 531415)
0x168: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x169: Pop(1)
0x16a: @@@ ClearReplies(); Obj=0 // @poff=116
0x16b: Pop(0)
0x16c: Push((int) 531417)
0x16d: Push((int) 32760)
0x16e: Push((int) 32759)
0x16f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x170: Pop(3)
0x171: Push((int) 531416)
0x172: Push((int) 32743)
0x173: Push((int) 32758)
0x174: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 32743)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral" // @poff=89
0x17c: Call2 0xaa

0x17d: Pop(1)
0x17e: Push((int) 531402)
0x17f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x180: Pop(1)
0x181: @@@ ClearReplies(); Obj=0 // @poff=116
0x182: Pop(0)
0x183: Push((int) 531126)
0x184: Push((int) -1)
0x185: Push((int) 32444)
0x186: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x187: Pop(3)
0x188: Push((int) 531410)
0x189: Push((int) 32753)
0x18a: Push((int) 32752)
0x18b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Push((int) 32753)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral" // @poff=89
0x193: Call2 0xaa

0x194: Pop(1)
0x195: Push((int) 531411)
0x196: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x197: Pop(1)
0x198: @@@ ClearReplies(); Obj=0 // @poff=116
0x199: Pop(0)
0x19a: Push((int) 531412)
0x19b: Push((int) 32755)
0x19c: Push((int) 32754)
0x19d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19e: Pop(3)
0x19f: Return(); Pop(0)

0x1a0: Push((int) 32755)
0x1a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1a3: PushEmpty(string)
0x1a4: Stack[-1] = "Neutral" // @poff=89
0x1a5: Call2 0xaa

0x1a6: Pop(1)
0x1a7: Push((int) 531413)
0x1a8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a9: Pop(1)
0x1aa: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ab: Pop(0)
0x1ac: Push((int) 531414)
0x1ad: Push((int) -1)
0x1ae: Push((int) 32756)
0x1af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 32760)
0x1b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Neutral" // @poff=89
0x1b7: Call2 0xaa

0x1b8: Pop(1)
0x1b9: Push((int) 531418)
0x1ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bb: Pop(1)
0x1bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bd: Pop(0)
0x1be: Push((int) 531419)
0x1bf: Push((int) 32743)
0x1c0: Push((int) 32761)
0x1c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c5: PushEmpty(bool)
0x1c6: Call2 0x756

0x1c7: Pop(0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c9: @ lshStopAnimation()
0x1ca: Pop(0)
0x1cb: GOTO 0x1ce

0x1cc: @ StopAnimation()
0x1cd: Pop(0)
0x1ce: Return(); Pop(0)

0x1cf: GOTO 0xc1

0x1d0: Return(); Pop(0)

0x1d1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1d2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1d3: PushEmpty(bool, object)
0x1d4: PushEmpty(object)
0x1d5: Call2 0x706

0x1d6: Stack[-1] = Stack[-2]
0x1d7: Pop(1)
0x1d8: Call2 0x659

0x1d9: Pop(2)
0x1da: PushEmpty(bool, object, float)
0x1db: Stack[-12] = Stack[-2]
0x1dc: Stack[-1] = (float) 70.0
0x1dd: Call2 0x604

0x1de: Pop(2)
0x1df: Pop(1); Push((bool) Stack[-1] == 0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e1: Stack[-10] = (int) -2
0x1e2: Return(); Pop(8)

0x1e3: @ CreateDialog(Stack[-4])
0x1e4: Pop(0)
0x1e5: PushEmpty(int)
0x1e6: Call2 0x750

0x1e7: Pop(0)
0x1e8: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x1e9: Pop(1)
0x1ea: PushEmpty(int)
0x1eb: Call2 0x74e

0x1ec: Pop(0)
0x1ed: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1ee: Pop(1)
0x1ef: PushEmpty(string)
0x1f0: Call2 0x752

0x1f1: Pop(0)
0x1f2: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1f3: Pop(1)
0x1f4: PushEmpty(string)
0x1f5: Call2 0x754

0x1f6: Pop(0)
0x1f7: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x1f8: Pop(1)
0x1f9: PushEmpty(int)
0x1fa: Call2 0x7cc

0x1fb: Pop(0)
0x1fc: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x1fd: Pop(1)
0x1fe: Stack[-2] = (int) -1
0x1ff: @ IsOverrideActive(Stack[-3])
0x200: Pop(0)
0x201: Push(Stack[-3])
0x202: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x203: Stack[-10] = (int) -2
0x204: Return(); Pop(8)

0x205: @ DoDialog(Stack[-4])
0x206: Pop(0)
0x207: PushEmpty(object, object)
0x208: Stack[-11] = Stack[-2]
0x209: Stack[-6] = Stack[-1]
0x20a: Push(-2, 4); TaskCall(4)
0x20b: Call2 0x222

0x20c: Pop(-2, 4); TaskReturn
0x20d: Pop(2)
0x20e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x20f: Pop(0)
0x210: Pop(0); Push((bool) Stack[-1] == 0)
0x211: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x212: @ sync()
0x213: Pop(0)
0x214: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x215: Pop(0)
0x216: GOTO 0x210

0x217: PushEmpty(object)
0x218: Stack[-10] = Stack[-1]
0x219: Call2 0x648

0x21a: Pop(1)
0x21b: @ StopDialog(Stack[-4])
0x21c: Pop(0)
0x21d: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x21e: Pop(0)
0x21f: Stack[-2] = Stack[-10]
0x220: Return(); Pop(8)

0x221: Stack[-4] = 0
0x222: PushEmpty()
0x223: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x224: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x225: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x226: Push((int) 1)
0x227: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x228: PushEmpty(string)
0x229: Stack[-1] = "Neutral" // @poff=89
0x22a: Call2 0x261

0x22b: Pop(1)
0x22c: Push((int) 535268)
0x22d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22e: Pop(1)
0x22f: @@@ ClearReplies(); Obj=0 // @poff=116
0x230: Pop(0)
0x231: PushEmpty(bool, object)
0x232: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x233: Call2 0x77d

0x234: Pop(1)
0x235: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x236: Push((int) 535269)
0x237: Push((int) 37004)
0x238: Push((int) 36944)
0x239: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23a: Pop(3)
0x23b: Push((int) 535322)
0x23c: Push((int) -1)
0x23d: Push((int) 37003)
0x23e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23f: Pop(3)
0x240: GOTO 0x243

0x241: Return(); Pop(0)

0x242: GOTO 0x226

0x243: PushEmpty(bool)
0x244: Call2 0x756

0x245: Pop(0)
0x246: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x247: @ lshWaitForAnimEnd()
0x248: Pop(0)
0x249: Push( Stack[3 + Tasks[-1].StackPointer] )
0x24a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24b: GOTO 0x251

0x24c: PushEmpty(string)
0x24d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x24e: Call2 0x6e3

0x24f: Pop(1)
0x250: GOTO 0x247

0x251: GOTO 0x260

0x252: Push("all") // @poff=138
0x253: Push("idle") // @poff=146
0x254: @ PlayAnimation(Stack[-2], Stack[-1])
0x255: Pop(2)
0x256: @ WaitForAnimEnd()
0x257: Pop(0)
0x258: Push( Stack[3 + Tasks[-1].StackPointer] )
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: GOTO 0x260

0x25b: Push("all") // @poff=138
0x25c: Push("idle") // @poff=146
0x25d: @ PlayAnimation(Stack[-2], Stack[-1])
0x25e: Pop(2)
0x25f: GOTO 0x256

0x260: Return(); Pop(0)

0x261: PushEmpty()
0x262: PushEmpty(bool)
0x263: Call2 0x756

0x264: Pop(0)
0x265: Pop(1); Push((bool) Stack[-1] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: Return(); Pop(0)

0x268: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: Return(); Pop(0)

0x26b: PushEmpty(string, bool)
0x26c: Stack[-3] = Stack[-2]
0x26d: Push("") // @poff=102
0x26e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x270: Stack[-1] = (bool) 0
0x271: GOTO 0x273

0x272: Stack[-1] = (bool) 1
0x273: Call2 0x6ea

0x274: Pop(2)
0x275: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x276: Return(); Pop(0)

0x277: PushEmpty()
0x278: Push((int) 1)
0x279: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x27a: PushEmpty()
0x27b: Call2 0x6ff

0x27c: Pop(0)
0x27d: Push((int) 36944)
0x27e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x280: PushEmpty(object, object)
0x281: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x282: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x283: Call2 0x76b

0x284: Pop(2)
0x285: Push((int) 36943)
0x286: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x288: PushEmpty(string)
0x289: Stack[-1] = "Neutral" // @poff=89
0x28a: Call2 0x261

0x28b: Pop(1)
0x28c: Push((int) 535268)
0x28d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x28e: Pop(1)
0x28f: @@@ ClearReplies(); Obj=0 // @poff=116
0x290: Pop(0)
0x291: PushEmpty(bool, object)
0x292: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x293: Call2 0x77d

0x294: Pop(1)
0x295: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x296: Push((int) 535269)
0x297: Push((int) 37004)
0x298: Push((int) 36944)
0x299: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x29a: Pop(3)
0x29b: Push((int) 535322)
0x29c: Push((int) -1)
0x29d: Push((int) 37003)
0x29e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x29f: Pop(3)
0x2a0: Return(); Pop(0)

0x2a1: Push((int) 37004)
0x2a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2a4: PushEmpty(string)
0x2a5: Stack[-1] = "Neutral" // @poff=89
0x2a6: Call2 0x261

0x2a7: Pop(1)
0x2a8: Push((int) 535323)
0x2a9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2aa: Pop(1)
0x2ab: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ac: Pop(0)
0x2ad: Push((int) 535325)
0x2ae: Push((int) 37007)
0x2af: Push((int) 37006)
0x2b0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b1: Pop(3)
0x2b2: Push((int) 535324)
0x2b3: Push((int) 37008)
0x2b4: Push((int) 37005)
0x2b5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b6: Pop(3)
0x2b7: Return(); Pop(0)

0x2b8: Push((int) 37008)
0x2b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2bb: PushEmpty(string)
0x2bc: Stack[-1] = "Neutral" // @poff=89
0x2bd: Call2 0x261

0x2be: Pop(1)
0x2bf: Push((int) 535327)
0x2c0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c1: Pop(1)
0x2c2: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c3: Pop(0)
0x2c4: Push((int) 535328)
0x2c5: Push((int) 37015)
0x2c6: Push((int) 37009)
0x2c7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c8: Pop(3)
0x2c9: Push((int) 535329)
0x2ca: Push((int) 37011)
0x2cb: Push((int) 37010)
0x2cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2cd: Pop(3)
0x2ce: Return(); Pop(0)

0x2cf: Push((int) 37011)
0x2d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2d2: PushEmpty(string)
0x2d3: Stack[-1] = "Neutral" // @poff=89
0x2d4: Call2 0x261

0x2d5: Pop(1)
0x2d6: Push((int) 535330)
0x2d7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d8: Pop(1)
0x2d9: @@@ ClearReplies(); Obj=0 // @poff=116
0x2da: Pop(0)
0x2db: Push((int) 535331)
0x2dc: Push((int) 37007)
0x2dd: Push((int) 37012)
0x2de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2df: Pop(3)
0x2e0: Return(); Pop(0)

0x2e1: Push((int) 37015)
0x2e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2e4: PushEmpty(string)
0x2e5: Stack[-1] = "Neutral" // @poff=89
0x2e6: Call2 0x261

0x2e7: Pop(1)
0x2e8: Push((int) 535334)
0x2e9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ea: Pop(1)
0x2eb: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ec: Pop(0)
0x2ed: Push((int) 535336)
0x2ee: Push((int) -1)
0x2ef: Push((int) 37017)
0x2f0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f1: Pop(3)
0x2f2: Push((int) 535335)
0x2f3: Push((int) -1)
0x2f4: Push((int) 37016)
0x2f5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f6: Pop(3)
0x2f7: Return(); Pop(0)

0x2f8: Push((int) 37007)
0x2f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2fb: PushEmpty(string)
0x2fc: Stack[-1] = "Neutral" // @poff=89
0x2fd: Call2 0x261

0x2fe: Pop(1)
0x2ff: Push((int) 535326)
0x300: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x301: Pop(1)
0x302: @@@ ClearReplies(); Obj=0 // @poff=116
0x303: Pop(0)
0x304: Push((int) 535332)
0x305: Push((int) 37014)
0x306: Push((int) 37013)
0x307: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x308: Pop(3)
0x309: Return(); Pop(0)

0x30a: Push((int) 37014)
0x30b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x30d: PushEmpty(string)
0x30e: Stack[-1] = "Neutral" // @poff=89
0x30f: Call2 0x261

0x310: Pop(1)
0x311: Push((int) 535333)
0x312: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x313: Pop(1)
0x314: @@@ ClearReplies(); Obj=0 // @poff=116
0x315: Pop(0)
0x316: Push((int) 535337)
0x317: Push((int) -1)
0x318: Push((int) 37019)
0x319: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31a: Pop(3)
0x31b: Push((int) 535338)
0x31c: Push((int) -1)
0x31d: Push((int) 37020)
0x31e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31f: Pop(3)
0x320: Return(); Pop(0)

0x321: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x322: PushEmpty(bool)
0x323: Call2 0x756

0x324: Pop(0)
0x325: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x326: @ lshStopAnimation()
0x327: Pop(0)
0x328: GOTO 0x32b

0x329: @ StopAnimation()
0x32a: Pop(0)
0x32b: Return(); Pop(0)

0x32c: GOTO 0x278

0x32d: Return(); Pop(0)

0x32e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x330: PushEmpty(bool, object)
0x331: PushEmpty(object)
0x332: Call2 0x706

0x333: Stack[-1] = Stack[-2]
0x334: Pop(1)
0x335: Call2 0x659

0x336: Pop(2)
0x337: PushEmpty(bool, object, float)
0x338: Stack[-12] = Stack[-2]
0x339: Stack[-1] = (float) 70.0
0x33a: Call2 0x604

0x33b: Pop(2)
0x33c: Pop(1); Push((bool) Stack[-1] == 0)
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: Stack[-10] = (int) -2
0x33f: Return(); Pop(8)

0x340: @ CreateDialog(Stack[-4])
0x341: Pop(0)
0x342: PushEmpty(int)
0x343: Call2 0x750

0x344: Pop(0)
0x345: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x346: Pop(1)
0x347: PushEmpty(int)
0x348: Call2 0x74e

0x349: Pop(0)
0x34a: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x34b: Pop(1)
0x34c: PushEmpty(string)
0x34d: Call2 0x752

0x34e: Pop(0)
0x34f: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x350: Pop(1)
0x351: PushEmpty(string)
0x352: Call2 0x754

0x353: Pop(0)
0x354: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x355: Pop(1)
0x356: PushEmpty(int)
0x357: Call2 0x7cc

0x358: Pop(0)
0x359: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x35a: Pop(1)
0x35b: Stack[-2] = (int) -1
0x35c: @ IsOverrideActive(Stack[-3])
0x35d: Pop(0)
0x35e: Push(Stack[-3])
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: Stack[-10] = (int) -2
0x361: Return(); Pop(8)

0x362: @ DoDialog(Stack[-4])
0x363: Pop(0)
0x364: PushEmpty(object, object)
0x365: Stack[-11] = Stack[-2]
0x366: Stack[-6] = Stack[-1]
0x367: Push(-2, 4); TaskCall(6)
0x368: Call2 0x37f

0x369: Pop(-2, 4); TaskReturn
0x36a: Pop(2)
0x36b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x36c: Pop(0)
0x36d: Pop(0); Push((bool) Stack[-1] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x36f: @ sync()
0x370: Pop(0)
0x371: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x372: Pop(0)
0x373: GOTO 0x36d

0x374: PushEmpty(object)
0x375: Stack[-10] = Stack[-1]
0x376: Call2 0x648

0x377: Pop(1)
0x378: @ StopDialog(Stack[-4])
0x379: Pop(0)
0x37a: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x37b: Pop(0)
0x37c: Stack[-2] = Stack[-10]
0x37d: Return(); Pop(8)

0x37e: Stack[-4] = 0
0x37f: PushEmpty()
0x380: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x381: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x382: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x383: Push((int) 1)
0x384: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral" // @poff=89
0x387: Call2 0x3b9

0x388: Pop(1)
0x389: Push((int) 518009)
0x38a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x38b: Pop(1)
0x38c: @@@ ClearReplies(); Obj=0 // @poff=116
0x38d: Pop(0)
0x38e: Push((int) 518010)
0x38f: Push((int) 32920)
0x390: Push((int) 19143)
0x391: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x392: Pop(3)
0x393: Push((int) 531560)
0x394: Push((int) -1)
0x395: Push((int) 32919)
0x396: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x397: Pop(3)
0x398: GOTO 0x39b

0x399: Return(); Pop(0)

0x39a: GOTO 0x383

0x39b: PushEmpty(bool)
0x39c: Call2 0x756

0x39d: Pop(0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x39f: @ lshWaitForAnimEnd()
0x3a0: Pop(0)
0x3a1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: GOTO 0x3a9

0x3a4: PushEmpty(string)
0x3a5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3a6: Call2 0x6e3

0x3a7: Pop(1)
0x3a8: GOTO 0x39f

0x3a9: GOTO 0x3b8

0x3aa: Push("all") // @poff=138
0x3ab: Push("idle") // @poff=146
0x3ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ad: Pop(2)
0x3ae: @ WaitForAnimEnd()
0x3af: Pop(0)
0x3b0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: GOTO 0x3b8

0x3b3: Push("all") // @poff=138
0x3b4: Push("idle") // @poff=146
0x3b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b6: Pop(2)
0x3b7: GOTO 0x3ae

0x3b8: Return(); Pop(0)

0x3b9: PushEmpty()
0x3ba: PushEmpty(bool)
0x3bb: Call2 0x756

0x3bc: Pop(0)
0x3bd: Pop(1); Push((bool) Stack[-1] == 0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: Return(); Pop(0)

0x3c0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c2: Return(); Pop(0)

0x3c3: PushEmpty(string, bool)
0x3c4: Stack[-3] = Stack[-2]
0x3c5: Push("") // @poff=102
0x3c6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: Stack[-1] = (bool) 0
0x3c9: GOTO 0x3cb

0x3ca: Stack[-1] = (bool) 1
0x3cb: Call2 0x6ea

0x3cc: Pop(2)
0x3cd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty()
0x3d0: Push((int) 1)
0x3d1: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x3d2: PushEmpty()
0x3d3: Call2 0x6ff

0x3d4: Pop(0)
0x3d5: Push((int) 19142)
0x3d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3d8: PushEmpty(string)
0x3d9: Stack[-1] = "Neutral" // @poff=89
0x3da: Call2 0x3b9

0x3db: Pop(1)
0x3dc: Push((int) 518009)
0x3dd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3de: Pop(1)
0x3df: @@@ ClearReplies(); Obj=0 // @poff=116
0x3e0: Pop(0)
0x3e1: Push((int) 518010)
0x3e2: Push((int) 32920)
0x3e3: Push((int) 19143)
0x3e4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e5: Pop(3)
0x3e6: Push((int) 531560)
0x3e7: Push((int) -1)
0x3e8: Push((int) 32919)
0x3e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ea: Pop(3)
0x3eb: Return(); Pop(0)

0x3ec: Push((int) 32920)
0x3ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3ef: PushEmpty(string)
0x3f0: Stack[-1] = "Neutral" // @poff=89
0x3f1: Call2 0x3b9

0x3f2: Pop(1)
0x3f3: Push((int) 531561)
0x3f4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3f5: Pop(1)
0x3f6: @@@ ClearReplies(); Obj=0 // @poff=116
0x3f7: Pop(0)
0x3f8: Push((int) 531562)
0x3f9: Push((int) -1)
0x3fa: Push((int) 32921)
0x3fb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3fc: Pop(3)
0x3fd: Push((int) 531563)
0x3fe: Push((int) -1)
0x3ff: Push((int) 32922)
0x400: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x401: Pop(3)
0x402: Return(); Pop(0)

0x403: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x404: PushEmpty(bool)
0x405: Call2 0x756

0x406: Pop(0)
0x407: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x408: @ lshStopAnimation()
0x409: Pop(0)
0x40a: GOTO 0x40d

0x40b: @ StopAnimation()
0x40c: Pop(0)
0x40d: Return(); Pop(0)

0x40e: GOTO 0x3d0

0x40f: Return(); Pop(0)

0x410: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x411: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x412: PushEmpty(bool, object)
0x413: PushEmpty(object)
0x414: Call2 0x706

0x415: Stack[-1] = Stack[-2]
0x416: Pop(1)
0x417: Call2 0x659

0x418: Pop(2)
0x419: PushEmpty(bool, object, float)
0x41a: Stack[-12] = Stack[-2]
0x41b: Stack[-1] = (float) 70.0
0x41c: Call2 0x604

0x41d: Pop(2)
0x41e: Pop(1); Push((bool) Stack[-1] == 0)
0x41f: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x420: Stack[-10] = (int) -2
0x421: Return(); Pop(8)

0x422: @ CreateDialog(Stack[-4])
0x423: Pop(0)
0x424: PushEmpty(int)
0x425: Call2 0x750

0x426: Pop(0)
0x427: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x428: Pop(1)
0x429: PushEmpty(int)
0x42a: Call2 0x74e

0x42b: Pop(0)
0x42c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x42d: Pop(1)
0x42e: PushEmpty(string)
0x42f: Call2 0x752

0x430: Pop(0)
0x431: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x432: Pop(1)
0x433: PushEmpty(string)
0x434: Call2 0x754

0x435: Pop(0)
0x436: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x437: Pop(1)
0x438: PushEmpty(int)
0x439: Call2 0x7cc

0x43a: Pop(0)
0x43b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x43c: Pop(1)
0x43d: Stack[-2] = (int) -1
0x43e: @ IsOverrideActive(Stack[-3])
0x43f: Pop(0)
0x440: Push(Stack[-3])
0x441: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x442: Stack[-10] = (int) -2
0x443: Return(); Pop(8)

0x444: @ DoDialog(Stack[-4])
0x445: Pop(0)
0x446: PushEmpty(object, object)
0x447: Stack[-11] = Stack[-2]
0x448: Stack[-6] = Stack[-1]
0x449: Push(-2, 4); TaskCall(8)
0x44a: Call2 0x461

0x44b: Pop(-2, 4); TaskReturn
0x44c: Pop(2)
0x44d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x44e: Pop(0)
0x44f: Pop(0); Push((bool) Stack[-1] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x451: @ sync()
0x452: Pop(0)
0x453: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x454: Pop(0)
0x455: GOTO 0x44f

0x456: PushEmpty(object)
0x457: Stack[-10] = Stack[-1]
0x458: Call2 0x648

0x459: Pop(1)
0x45a: @ StopDialog(Stack[-4])
0x45b: Pop(0)
0x45c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x45d: Pop(0)
0x45e: Stack[-2] = Stack[-10]
0x45f: Return(); Pop(8)

0x460: Stack[-4] = 0
0x461: PushEmpty()
0x462: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x463: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x464: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x465: Push((int) 1)
0x466: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x467: PushEmpty(string)
0x468: Stack[-1] = "Neutral" // @poff=89
0x469: Call2 0x49b

0x46a: Pop(1)
0x46b: Push((int) 540554)
0x46c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x46d: Pop(1)
0x46e: @@@ ClearReplies(); Obj=0 // @poff=116
0x46f: Pop(0)
0x470: Push((int) 540555)
0x471: Push((int) -1)
0x472: Push((int) 42564)
0x473: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x474: Pop(3)
0x475: Push((int) 540794)
0x476: Push((int) -1)
0x477: Push((int) 42843)
0x478: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x479: Pop(3)
0x47a: GOTO 0x47d

0x47b: Return(); Pop(0)

0x47c: GOTO 0x465

0x47d: PushEmpty(bool)
0x47e: Call2 0x756

0x47f: Pop(0)
0x480: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x481: @ lshWaitForAnimEnd()
0x482: Pop(0)
0x483: Push( Stack[3 + Tasks[-1].StackPointer] )
0x484: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x485: GOTO 0x48b

0x486: PushEmpty(string)
0x487: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x488: Call2 0x6e3

0x489: Pop(1)
0x48a: GOTO 0x481

0x48b: GOTO 0x49a

0x48c: Push("all") // @poff=138
0x48d: Push("idle") // @poff=146
0x48e: @ PlayAnimation(Stack[-2], Stack[-1])
0x48f: Pop(2)
0x490: @ WaitForAnimEnd()
0x491: Pop(0)
0x492: Push( Stack[3 + Tasks[-1].StackPointer] )
0x493: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x494: GOTO 0x49a

0x495: Push("all") // @poff=138
0x496: Push("idle") // @poff=146
0x497: @ PlayAnimation(Stack[-2], Stack[-1])
0x498: Pop(2)
0x499: GOTO 0x490

0x49a: Return(); Pop(0)

0x49b: PushEmpty()
0x49c: PushEmpty(bool)
0x49d: Call2 0x756

0x49e: Pop(0)
0x49f: Pop(1); Push((bool) Stack[-1] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a1: Return(); Pop(0)

0x4a2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a4: Return(); Pop(0)

0x4a5: PushEmpty(string, bool)
0x4a6: Stack[-3] = Stack[-2]
0x4a7: Push("") // @poff=102
0x4a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Stack[-1] = (bool) 0
0x4ab: GOTO 0x4ad

0x4ac: Stack[-1] = (bool) 1
0x4ad: Call2 0x6ea

0x4ae: Pop(2)
0x4af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4b0: Return(); Pop(0)

0x4b1: PushEmpty()
0x4b2: Push((int) 1)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4b4: PushEmpty()
0x4b5: Call2 0x6ff

0x4b6: Pop(0)
0x4b7: Push((int) 42563)
0x4b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4ba: PushEmpty(string)
0x4bb: Stack[-1] = "Neutral" // @poff=89
0x4bc: Call2 0x49b

0x4bd: Pop(1)
0x4be: Push((int) 540554)
0x4bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4c0: Pop(1)
0x4c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x4c2: Pop(0)
0x4c3: Push((int) 540555)
0x4c4: Push((int) -1)
0x4c5: Push((int) 42564)
0x4c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4c7: Pop(3)
0x4c8: Push((int) 540794)
0x4c9: Push((int) -1)
0x4ca: Push((int) 42843)
0x4cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4cc: Pop(3)
0x4cd: Return(); Pop(0)

0x4ce: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4cf: PushEmpty(bool)
0x4d0: Call2 0x756

0x4d1: Pop(0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d3: @ lshStopAnimation()
0x4d4: Pop(0)
0x4d5: GOTO 0x4d8

0x4d6: @ StopAnimation()
0x4d7: Pop(0)
0x4d8: Return(); Pop(0)

0x4d9: GOTO 0x4b2

0x4da: Return(); Pop(0)

0x4db: Push(GlobalVars[1])
0x4dc: Stack[-1] = (bool) 0
0x4dd: GlobalVars[1] = Stack[-1]; Pop(1)
0x4de: PushEmpty()
0x4df: Call2 0x4e2

0x4e0: Pop(0)
0x4e1: Return(); Pop(0)

0x4e2: PushEmpty(bool)
0x4e3: Call2 0x5ff

0x4e4: Pop(0)
0x4e5: Pop(1); Push((bool) Stack[-1] == 0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e7: PushEmpty()
0x4e8: Push(-0, 0); TaskCall(0)
0x4e9: Call2 0x0

0x4ea: Pop(-0, 0); TaskReturn
0x4eb: Pop(0)
0x4ec: PushEmpty()
0x4ed: Call2 0x562

0x4ee: Pop(0)
0x4ef: @ GetDirection(Stack[-0]T)
0x4f0: Pop(0)
0x4f1: PushEmpty()
0x4f2: Call2 0x598

0x4f3: Pop(0)
0x4f4: GOTO 0x4f1

0x4f5: Return(); Pop(0)

0x4f6: PushEmpty(object, object)
0x4f7: Push("player") // @poff=156
0x4f8: @ FindActor(Stack[-2], Stack[-1])
0x4f9: Pop(1)
0x4fa: Pop(0); Push((bool) Stack[-1] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fc: Stack[-3] = (bool) 0
0x4fd: Return(); Pop(2)

0x4fe: PushEmpty(bool, object)
0x4ff: Stack[-3] = Stack[-1]
0x500: Call2 0x5f6

0x501: Stack[-2] = Stack[-5]
0x502: Pop(2)
0x503: Return(); Pop(2)

0x504: Stack[-1] = 0
0x505: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x506: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x507: @ RotateAsync(Stack[-2], Stack[-1])
0x508: Pop(2)
0x509: Return(); Pop(0)

0x50a: PushEmpty(object, bool, object, bool)
0x50b: Push("player") // @poff=156
0x50c: @ FindActor(Stack[-3], Stack[-1])
0x50d: Pop(1)
0x50e: Pop(0); Push((bool) Stack[-2] == 0)
0x50f: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x510: Stack[-5] = (bool) 0
0x511: Return(); Pop(4)

0x512: PushEmpty(float, object)
0x513: Stack[-4] = Stack[-1]
0x514: Call2 0x5e4

0x515: Pop(1)
0x516: Push((float)90000.0)
0x517: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x518: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x519: Stack[-5] = (bool) 0
0x51a: Return(); Pop(4)

0x51b: @ CanSee(Stack[-1], Stack[-2])
0x51c: Pop(0)
0x51d: Stack[-1] = Stack[-5]
0x51e: Return(); Pop(4)

0x51f: Stack[-2] = 0
0x520: PushEmpty(float, float)
0x521: Push((int) 8)
0x522: Push((int) 16)
0x523: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(2)
0x525: Push((int) 10)
0x526: @ SetTimer(Stack[-1], Stack[-2])
0x527: Pop(1)
0x528: Return(); Pop(2)

0x529: Push((int) 10)
0x52a: @ KillTimer(Stack[-1])
0x52b: Pop(1)
0x52c: Return(); Pop(0)

0x52d: PushEmpty()
0x52e: Push((int) 10)
0x52f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x531: PushEmpty()
0x532: Call2 0x529

0x533: Pop(0)
0x534: PushEmpty(bool)
0x535: Stack[-1] = (bool) 0
0x536: PushEmpty(bool)
0x537: Call2 0x5ff

0x538: Pop(0)
0x539: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53a: PushEmpty(bool)
0x53b: Call2 0x50a

0x53c: Pop(0)
0x53d: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53e: Stack[-1] = (bool) 1
0x53f: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x540: PushEmpty(bool)
0x541: Call2 0x4f6

0x542: Pop(0)
0x543: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x544: PushEmpty(bool, object)
0x545: PushEmpty(object)
0x546: Call2 0x706

0x547: Stack[-1] = Stack[-2]
0x548: Pop(1)
0x549: Call2 0x693

0x54a: Pop(2)
0x54b: GOTO 0x552

0x54c: PushEmpty()
0x54d: Call2 0x505

0x54e: Pop(0)
0x54f: PushEmpty()
0x550: Call2 0x520

0x551: Pop(0)
0x552: Return(); Pop(0)

0x553: PushEmpty()
0x554: Call2 0x5df

0x555: Pop(0)
0x556: PushEmpty()
0x557: Call2 0x529

0x558: Pop(0)
0x559: @ lshStopSpeech()
0x55a: Pop(0)
0x55b: @ lshStopAnimation()
0x55c: Pop(0)
0x55d: @ StopAsync()
0x55e: Pop(0)
0x55f: @ Hold()
0x560: Pop(0)
0x561: Return(); Pop(0)

0x562: @ StopGroup0()
0x563: Pop(0)
0x564: PushEmpty()
0x565: Call2 0x529

0x566: Pop(0)
0x567: PushEmpty(string)
0x568: Stack[-1] = "Neutral" // @poff=89
0x569: Call2 0x6e3

0x56a: Pop(1)
0x56b: PushEmpty()
0x56c: Call2 0x520

0x56d: Pop(0)
0x56e: Return(); Pop(0)

0x56f: PushEmpty()
0x570: Push(Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x572: PushEmpty()
0x573: Call2 0x520

0x574: Pop(0)
0x575: GOTO 0x57a

0x576: PushEmpty(string)
0x577: Stack[-1] = "Neutral" // @poff=89
0x578: Call2 0x6e3

0x579: Pop(1)
0x57a: Return(); Pop(0)

0x57b: PushEmpty(bool, bool)
0x57c: @ IsOverrideActive(Stack[-1])
0x57d: Pop(0)
0x57e: Pop(0); Push((bool) Stack[-1] == 0)
0x57f: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x580: EventDisable(0)
0x581: PushEmpty()
0x582: Call2 0x5df

0x583: Pop(0)
0x584: PushEmpty(bool, object)
0x585: Stack[-5] = Stack[-1]
0x586: Call2 0x5f6

0x587: Pop(2)
0x588: EventEnable(0)
0x589: PushEmpty(object)
0x58a: Stack[-4] = Stack[-1]
0x58b: Call2 0x7dd

0x58c: Pop(1)
0x58d: PushEmpty(string)
0x58e: Stack[-1] = "Neutral" // @poff=89
0x58f: Call2 0x6e3

0x590: Pop(1)
0x591: PushEmpty()
0x592: Call2 0x529

0x593: Pop(0)
0x594: PushEmpty()
0x595: Call2 0x520

0x596: Pop(0)
0x597: Return(); Pop(2)

0x598: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x599: @ WaitForAnimEnd()
0x59a: Pop(0)
0x59b: PushEmpty(bool)
0x59c: Call2 0x5ff

0x59d: Pop(0)
0x59e: Pop(1); Push((bool) Stack[-1] == 0)
0x59f: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x5a0: Return(); Pop(12)

0x5a1: PushEmpty(int)
0x5a2: Call2 0x73d

0x5a3: Stack[-1] = Stack[-7]
0x5a4: Pop(1)
0x5a5: Stack[-5] = (int) 0
0x5a6: PushEmpty(bool)
0x5a7: Stack[-1] = (bool) 0
0x5a8: Push((int) 5)
0x5a9: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5ab: PushEmpty(bool)
0x5ac: Call2 0x5ff

0x5ad: Pop(0)
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5af: Stack[-1] = (bool) 1
0x5b0: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5b1: Pop(0); Push((bool) Stack[-6] == 0)
0x5b2: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b3: Push((int) 3)
0x5b4: @ Sleep(Stack[-1], Stack[-5])
0x5b5: Pop(1)
0x5b6: Pop(0); Push((bool) Stack[-4] == 0)
0x5b7: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b8: GOTO 0x5da

0x5b9: GOTO 0x5cf

0x5ba: @ irand(Stack[-3], Stack[-6])
0x5bb: Pop(0)
0x5bc: Push((int) 5)
0x5bd: @ irand(Stack[-3], Stack[-1])
0x5be: Pop(1)
0x5bf: Push((int) 0)
0x5c0: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c2: Stack[-3] = (int) 0
0x5c3: Push("all") // @poff=138
0x5c4: PushEmpty(string, int)
0x5c5: Stack[-6] = Stack[-1]
0x5c6: Call2 0x736

0x5c7: Pop(1)
0x5c8: @ PlayAnimation(Stack[-2], Stack[-1])
0x5c9: Pop(2)
0x5ca: @ WaitForAnimEnd(Stack[-1])
0x5cb: Pop(0)
0x5cc: Pop(0); Push((bool) Stack[-1] == 0)
0x5cd: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5ce: GOTO 0x5da

0x5cf: PushEmpty(bool)
0x5d0: Call2 0x5dd

0x5d1: Pop(0)
0x5d2: Pop(1); Push((bool) Stack[-1] == 0)
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d4: GOTO 0x5da

0x5d5: @ ResetAAS()
0x5d6: Pop(0)
0x5d7: Push((int) 1)
0x5d8: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x5d9: GOTO 0x5a6

0x5da: @ ResetAAS()
0x5db: Pop(0)
0x5dc: Return(); Pop(12)

0x5dd: Stack[-1] = (bool) 1
0x5de: Return(); Pop(0)

0x5df: @ StopAnimation()
0x5e0: Pop(0)
0x5e1: @ StopGroup0()
0x5e2: Pop(0)
0x5e3: Return(); Pop(0)

0x5e4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e5: @ GetPosition(Stack[-3])
0x5e6: Pop(0)
0x5e7: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x5e8: Pop(0)
0x5e9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5ea: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5eb: Return(); Pop(6)

0x5ec: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x5ed: @ GetPosition(Stack[-3])
0x5ee: Pop(0)
0x5ef: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x5f0: Push(CvectorIndex(Stack[-2], 0))
0x5f1: Push(CvectorIndex(Stack[-3], 2))
0x5f2: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x5f3: Pop(2)
0x5f4: Stack[-1] = Stack[-8]
0x5f5: Return(); Pop(6)

0x5f6: PushEmpty(cvector, cvector)
0x5f7: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x5f8: Pop(0)
0x5f9: PushEmpty(bool, cvector)
0x5fa: Stack[-3] = Stack[-1]
0x5fb: Call2 0x5ec

0x5fc: Stack[-2] = Stack[-6]
0x5fd: Pop(2)
0x5fe: Return(); Pop(2)

0x5ff: PushEmpty(bool, bool)
0x600: @ IsLoaded(Stack[-1])
0x601: Pop(0)
0x602: Stack[-1] = Stack[-3]
0x603: Return(); Pop(2)

0x604: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x605: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x606: Pop(0)
0x607: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x608: Pop(0)
0x609: Push(CvectorIndex(Stack[-8], 1))
0x60a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x60b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x60c: @ GetPosition(Stack[-7])
0x60d: Pop(0)
0x60e: @ GetEyesHeight(Stack[-9])
0x60f: Pop(0)
0x610: Push(CvectorIndex(Stack[-7], 1))
0x611: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x612: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x613: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x614: Push(CvectorIndex(Stack[-6], 1))
0x615: Stack[-1] = (int) 0
0x616: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x617: Pop(0); Push(Stack[-6] | Stack[-6]);
0x618: Pop(1); Push(Sqrt(Stack[-1]))
0x619: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x61a: Stack[-5] = -Stack[-6]; Pop(0);
0x61b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x61c: PushEmpty(cvector, cvector)
0x61d: Push([0.0, 1.0, 0.0])
0x61e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x61f: Call2 0x70c

0x620: Pop(1)
0x621: Push((int) 25)
0x622: Pop(2); Push(Stack[-2] * Stack[-1]);
0x623: Pop(2); Push(Stack[-2] + Stack[-1]);
0x624: Push([0.0, 10.0, 0.0])
0x625: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x626: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x627: @ IsOverrideActive(Stack[-2])
0x628: Pop(0)
0x629: Push(Stack[-2])
0x62a: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62b: Stack[-21] = (bool) 0
0x62c: Return(); Pop(18)

0x62d: @ StopWorld()
0x62e: Pop(0)
0x62f: @ CameraTransit(Stack[-3], Stack[-5])
0x630: Pop(0)
0x631: Push(CvectorIndex(Stack[-4], 0))
0x632: Push(CvectorIndex(Stack[-5], 2))
0x633: @ Rotate(Stack[-2], Stack[-1])
0x634: Pop(2)
0x635: PushEmpty(bool)
0x636: Call2 0x756

0x637: Pop(0)
0x638: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x639: GOTO 0x642

0x63a: Push("head") // @poff=196
0x63b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x63c: Pop(1)
0x63d: Push(Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x63f: Push("head") // @poff=196
0x640: @ LookAsyncCamera(Stack[-1])
0x641: Pop(1)
0x642: @ CameraWaitForPlayFinish()
0x643: Pop(0)
0x644: @ ResumeWorld()
0x645: Pop(0)
0x646: Stack[-21] = (bool) 1
0x647: Return(); Pop(18)

0x648: PushEmpty(bool, bool)
0x649: @ CameraSwitchToNormal()
0x64a: Pop(0)
0x64b: PushEmpty(bool)
0x64c: Call2 0x756

0x64d: Pop(0)
0x64e: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64f: GOTO 0x658

0x650: Push("head") // @poff=196
0x651: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x652: Pop(1)
0x653: Push(Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x655: Push("head") // @poff=196
0x656: @ UnlookAsync(Stack[-1])
0x657: Pop(1)
0x658: Return(); Pop(2)

0x659: PushEmpty(int, int, int, int)
0x65a: Push("voice_common") // @poff=206
0x65b: @ GetVariable(Stack[-1], Stack[-3])
0x65c: Pop(1)
0x65d: Push(Stack[-2])
0x65e: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x65f: PushEmpty(bool, object)
0x660: Stack[-7] = Stack[-1]
0x661: Call2 0x693

0x662: Pop(1)
0x663: Pop(1); Push((bool) Stack[-1] == 0)
0x664: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x665: PushEmpty(bool, object)
0x666: Stack[-7] = Stack[-1]
0x667: Call2 0x6b8

0x668: Pop(1)
0x669: Pop(1); Push((bool) Stack[-1] == 0)
0x66a: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x66b: Stack[-6] = (bool) 0
0x66c: Return(); Pop(4)

0x66d: Push((int) 2)
0x66e: @ irand(Stack[-2], Stack[-1])
0x66f: Pop(1)
0x670: Push(Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x672: Push("voice_common") // @poff=206
0x673: Push((int) 1)
0x674: Pop(1); Push(Stack[-4] + Stack[-1]);
0x675: Push((int) 3)
0x676: Pop(2); Push(Stack[-2] % Stack[-1]);
0x677: @ SetVariable(Stack[-2], Stack[-1])
0x678: Pop(2)
0x679: GOTO 0x67e

0x67a: Push("voice_common") // @poff=206
0x67b: Push((int) 0)
0x67c: @ SetVariable(Stack[-2], Stack[-1])
0x67d: Pop(2)
0x67e: GOTO 0x691

0x67f: PushEmpty(bool, object)
0x680: Stack[-7] = Stack[-1]
0x681: Call2 0x6b8

0x682: Pop(1)
0x683: Pop(1); Push((bool) Stack[-1] == 0)
0x684: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x685: PushEmpty(bool, object)
0x686: Stack[-7] = Stack[-1]
0x687: Call2 0x693

0x688: Pop(1)
0x689: Pop(1); Push((bool) Stack[-1] == 0)
0x68a: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68b: Stack[-6] = (bool) 0
0x68c: Return(); Pop(4)

0x68d: Push("voice_common") // @poff=206
0x68e: Push((int) 1)
0x68f: @ SetVariable(Stack[-2], Stack[-1])
0x690: Pop(2)
0x691: Stack[-6] = (bool) 1
0x692: Return(); Pop(4)

0x693: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x694: Stack[-5] = "c" // @poff=232
0x695: Stack[-4] = (int) 0
0x696: Push((int) 1)
0x697: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x698: Push((int) 1)
0x699: Pop(1); Push(Stack[-5] + Stack[-1]);
0x69a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x69b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x69c: Pop(1)
0x69d: Pop(0); Push((bool) Stack[-3] == 0)
0x69e: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69f: GOTO 0x6a3

0x6a0: Push((int) 1)
0x6a1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6a2: GOTO 0x696

0x6a3: Pop(0); Push((bool) Stack[-4] == 0)
0x6a4: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a5: Stack[-12] = (bool) 0
0x6a6: Return(); Pop(10)

0x6a7: Stack[-2] = (int) 0
0x6a8: Push((int) 1)
0x6a9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6ab: @ irand(Stack[-2], Stack[-4])
0x6ac: Pop(0)
0x6ad: Push((int) 1)
0x6ae: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6af: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6b0: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x6b1: Pop(1)
0x6b2: PushEmpty(bool, string)
0x6b3: Stack[-3] = Stack[-1]
0x6b4: Call2 0x6f0

0x6b5: Stack[-2] = Stack[-14]
0x6b6: Pop(2)
0x6b7: Return(); Pop(10)

0x6b8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6b9: Push("d") // @poff=202
0x6ba: PushEmpty(int)
0x6bb: Call2 0x727

0x6bc: Pop(0)
0x6bd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6be: Push("m") // @poff=260
0x6bf: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6c0: Stack[-4] = (int) 0
0x6c1: Push((int) 1)
0x6c2: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6c3: Push((int) 1)
0x6c4: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6c5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6c6: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x6c7: Pop(1)
0x6c8: Pop(0); Push((bool) Stack[-3] == 0)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6ca: GOTO 0x6ce

0x6cb: Push((int) 1)
0x6cc: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6cd: GOTO 0x6c1

0x6ce: Pop(0); Push((bool) Stack[-4] == 0)
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: Stack[-12] = (bool) 0
0x6d1: Return(); Pop(10)

0x6d2: Stack[-2] = (int) 0
0x6d3: Push((int) 1)
0x6d4: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d6: @ irand(Stack[-2], Stack[-4])
0x6d7: Pop(0)
0x6d8: Push((int) 1)
0x6d9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6da: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6db: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x6dc: Pop(1)
0x6dd: PushEmpty(bool, string)
0x6de: Stack[-3] = Stack[-1]
0x6df: Call2 0x6f0

0x6e0: Stack[-2] = Stack[-14]
0x6e1: Pop(2)
0x6e2: Return(); Pop(10)

0x6e3: PushEmpty(float, float, float, float)
0x6e4: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x6e5: Pop(0)
0x6e6: Push((bool) 0)
0x6e7: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6e8: Pop(1)
0x6e9: Return(); Pop(4)

0x6ea: PushEmpty(float, float, float, float)
0x6eb: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x6ec: Pop(0)
0x6ed: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x6ee: Pop(0)
0x6ef: Return(); Pop(4)

0x6f0: PushEmpty(bool, bool)
0x6f1: PushEmpty(bool)
0x6f2: Call2 0x756

0x6f3: Pop(0)
0x6f4: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6f5: @ lshHasSpeech(Stack[-1], Stack[-3])
0x6f6: Pop(0)
0x6f7: Push(Stack[-1])
0x6f8: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6f9: @ lshPlaySpeech(Stack[-3])
0x6fa: Pop(0)
0x6fb: Stack[-4] = (bool) 1
0x6fc: Return(); Pop(2)

0x6fd: Stack[-4] = (bool) 0
0x6fe: Return(); Pop(2)

0x6ff: PushEmpty(bool)
0x700: Call2 0x756

0x701: Pop(0)
0x702: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x703: @ lshStopSpeech()
0x704: Pop(0)
0x705: Return(); Pop(0)

0x706: PushEmpty(object, object)
0x707: @ self(Stack[-1])
0x708: Pop(0)
0x709: Stack[-1] = Stack[-3]
0x70a: Return(); Pop(2)

0x70b: Stack[-1] = 0
0x70c: PushEmpty(float, float)
0x70d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x70e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x70f: Push((float)9.999999974752427e-07)
0x710: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x711: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x712: Stack[-4] = [0.0, 0.0, 0.0]
0x713: Return(); Pop(2)

0x714: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x715: Return(); Pop(2)

0x716: PushEmpty(int, int)
0x717: @ GetVariable(Stack[-3], Stack[-1])
0x718: Pop(0)
0x719: Stack[-1] = Stack[-4]
0x71a: Return(); Pop(2)

0x71b: PushEmpty(object, object)
0x71c: @ FindActor(Stack[-1], Stack[-4])
0x71d: Pop(0)
0x71e: Pop(0); PushNull((bool) Stack[-1] == 0)
0x71f: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x720: Stack[-5] = (bool) 0
0x721: Return(); Pop(2)

0x722: @ Trigger(Stack[-1], Stack[-3])
0x723: Pop(0)
0x724: Stack[-5] = (bool) 1
0x725: Return(); Pop(2)

0x726: Stack[-1] = 0
0x727: PushEmpty(float, float)
0x728: @ GetGameTime(Stack[-1])
0x729: Pop(0)
0x72a: Push((int) 1)
0x72b: PushEmpty(int)
0x72c: Push((int) 24)
0x72d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x72e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x72f: Return(); Pop(2)

0x730: PushEmpty()
0x731: PushEmpty(int)
0x732: Call2 0x727

0x733: Pop(0)
0x734: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x735: Return(); Pop(0)

0x736: PushEmpty(string, string)
0x737: Stack[-1] = "idle" // @poff=146
0x738: Push(Stack[-3])
0x739: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x73a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x73b: Stack[-1] = Stack[-4]
0x73c: Return(); Pop(2)

0x73d: PushEmpty(int, bool, int, bool)
0x73e: Stack[-2] = (int) 0
0x73f: Push("all") // @poff=138
0x740: PushEmpty(string, int)
0x741: Stack[-5] = Stack[-1]
0x742: Call2 0x736

0x743: Pop(1)
0x744: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x745: Pop(2)
0x746: Pop(0); Push((bool) Stack[-1] == 0)
0x747: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x748: GOTO 0x74c

0x749: Push((int) 1)
0x74a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x74b: GOTO 0x73f

0x74c: Stack[-2] = Stack[-5]
0x74d: Return(); Pop(4)

0x74e: Stack[-1] = (int) 515536
0x74f: Return(); Pop(0)

0x750: Stack[-1] = (int) 502861
0x751: Return(); Pop(0)

0x752: Stack[-1] = "ui/NPC_Han.png" // @poff=264
0x753: Return(); Pop(0)

0x754: Stack[-1] = "ui/NPC_Han_b.png" // @poff=294
0x755: Return(); Pop(0)

0x756: Stack[-1] = (bool) 1
0x757: Return(); Pop(0)

0x758: PushEmpty()
0x759: Push("b11q02") // @poff=328
0x75a: Push((int) 4)
0x75b: @ SetVariable(Stack[-2], Stack[-1])
0x75c: Pop(2)
0x75d: PushEmpty()
0x75e: Call2 0x796

0x75f: Pop(0)
0x760: Return(); Pop(0)

0x761: PushEmpty()
0x762: PushEmpty()
0x763: Call2 0x789

0x764: Pop(0)
0x765: PushEmpty(bool, string, string)
0x766: Stack[-2] = "quest_b11_02" // @poff=342
0x767: Stack[-1] = "fail" // @poff=368
0x768: Call2 0x71b

0x769: Pop(3)
0x76a: Return(); Pop(0)

0x76b: PushEmpty()
0x76c: Push("oob12Han1") // @poff=378
0x76d: Push((int) 1)
0x76e: @ SetVariable(Stack[-2], Stack[-1])
0x76f: Pop(2)
0x770: Return(); Pop(0)

0x771: PushEmpty()
0x772: PushEmpty(int, string)
0x773: Stack[-1] = "b11q02" // @poff=328
0x774: Call2 0x716

0x775: Pop(1)
0x776: Push((int) 3)
0x777: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x778: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x779: Stack[-2] = (bool) 1
0x77a: Return(); Pop(0)

0x77b: Stack[-2] = (bool) 0
0x77c: Return(); Pop(0)

0x77d: PushEmpty()
0x77e: PushEmpty(int, string)
0x77f: Stack[-1] = "oob12Han1" // @poff=378
0x780: Call2 0x716

0x781: Pop(1)
0x782: Push((int) 0)
0x783: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x784: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x785: Stack[-2] = (bool) 1
0x786: Return(); Pop(0)

0x787: Stack[-2] = (bool) 0
0x788: Return(); Pop(0)

0x789: PushEmpty(object, object)
0x78a: Push((int) 611)
0x78b: Push((int) 2)
0x78c: Push((int) 531506)
0x78d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x78e: Pop(3)
0x78f: PushEmpty(bool, object, int)
0x790: Stack[-4] = Stack[-2]
0x791: Stack[-1] = (int) 598
0x792: Call2 0x7b0

0x793: Pop(3)
0x794: Return(); Pop(2)

0x795: Stack[-1] = 0
0x796: PushEmpty(object, object)
0x797: Push((int) 601)
0x798: Push((int) 2)
0x799: Push((int) 531152)
0x79a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x79b: Pop(3)
0x79c: PushEmpty(bool, object, int)
0x79d: Stack[-4] = Stack[-2]
0x79e: Stack[-1] = (int) 598
0x79f: Call2 0x7b0

0x7a0: Pop(3)
0x7a1: Return(); Pop(2)

0x7a2: Stack[-1] = 0
0x7a3: PushEmpty(object, object)
0x7a4: @ GetDiaryRoot(Stack[-1])
0x7a5: Pop(0)
0x7a6: Pop(0); Push((bool) Stack[-1] == 0)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7a8: Push("Can't retrieve diary root") // @poff=398
0x7a9: @ Trace(Stack[-1])
0x7aa: Pop(1)
0x7ab: Stack[-3] = (bool) 0
0x7ac: Return(); Pop(2)

0x7ad: Stack[-1] = Stack[-3]
0x7ae: Return(); Pop(2)

0x7af: Stack[-1] = 0
0x7b0: PushEmpty(object, object, int, object, object, int)
0x7b1: PushEmpty(object)
0x7b2: Call2 0x7a3

0x7b3: Stack[-1] = Stack[-4]
0x7b4: Pop(1)
0x7b5: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=450
0x7b6: Pop(0)
0x7b7: Pop(0); Push((bool) Stack[-2] == 0)
0x7b8: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7b9: Push("Can't find diary parent with id: ") // @poff=455
0x7ba: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7bb: @ Trace(Stack[-1])
0x7bc: Pop(1)
0x7bd: Stack[-9] = (bool) 0
0x7be: Return(); Pop(6)

0x7bf: @@ AddChild(Stack[-8]); Obj=2 // @poff=523
0x7c0: Pop(0)
0x7c1: Push((int) 7)
0x7c2: @ SendWorldWndMessage(Stack[-1])
0x7c3: Pop(1)
0x7c4: @@ GetCategory(Stack[-1]); Obj=8 // @poff=532
0x7c5: Pop(0)
0x7c6: @ SetDiarySection(Stack[-1])
0x7c7: Pop(0)
0x7c8: Stack[-9] = (bool) 0
0x7c9: Return(); Pop(6)

0x7ca: Stack[-2] = 0
0x7cb: Stack[-3] = 0
0x7cc: PushEmpty(int, int)
0x7cd: Push("branch") // @poff=544
0x7ce: @ GetVariable(Stack[-1], Stack[-2])
0x7cf: Pop(1)
0x7d0: Push((int) 0)
0x7d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d3: Stack[-3] = (int) 1
0x7d4: Return(); Pop(2)

0x7d5: GOTO 0x7db

0x7d6: Push((int) 1)
0x7d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7d9: Stack[-3] = (int) 2
0x7da: Return(); Pop(2)

0x7db: Stack[-3] = (int) 3
0x7dc: Return(); Pop(2)

0x7dd: PushEmpty()
0x7de: Push(GlobalVars[1])
0x7df: Pop(1); Push((bool) Stack[-1] == 0)
0x7e0: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e1: PushEmpty(int, object)
0x7e2: Stack[-3] = Stack[-1]
0x7e3: Push(-2, 1); TaskCall(5)
0x7e4: Call2 0x32e

0x7e5: Pop(-2, 1); TaskReturn
0x7e6: Pop(2)
0x7e7: Push(GlobalVars[1])
0x7e8: Stack[-1] = (bool) 1
0x7e9: GlobalVars[1] = Stack[-1]; Pop(1)
0x7ea: PushEmpty(bool, int)
0x7eb: Stack[-1] = (int) 11
0x7ec: Call2 0x730

0x7ed: Pop(1)
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7ef: PushEmpty(int, object)
0x7f0: Stack[-3] = Stack[-1]
0x7f1: Push(-2, 1); TaskCall(1)
0x7f2: Call2 0xd

0x7f3: Pop(-2, 1); TaskReturn
0x7f4: Pop(2)
0x7f5: Return(); Pop(0)

0x7f6: PushEmpty(bool, int)
0x7f7: Stack[-1] = (int) 12
0x7f8: Call2 0x730

0x7f9: Pop(1)
0x7fa: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7fb: PushEmpty(int, object)
0x7fc: Stack[-3] = Stack[-1]
0x7fd: Push(-2, 1); TaskCall(3)
0x7fe: Call2 0x1d1

0x7ff: Pop(-2, 1); TaskReturn
0x800: Pop(2)
0x801: Return(); Pop(0)

0x802: PushEmpty(int, object)
0x803: Stack[-3] = Stack[-1]
0x804: Push(-2, 1); TaskCall(7)
0x805: Call2 0x410

0x806: Pop(-2, 1); TaskReturn
0x807: Pop(2)
0x808: Return(); Pop(0)

