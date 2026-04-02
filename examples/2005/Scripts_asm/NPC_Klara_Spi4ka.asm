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
	W:ui/NPC_Spi4ka.png
	W:ui/NPC_Spi4ka_b.png
	W:k8q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:mt_spi4ka
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f0053007000690034006b0061002e0070006e0067000000750069002f004e00500043005f0053007000690034006b0061005f0062002e0070006e00670000006b0038007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e006300680000006d0074005f0073007000690034006b0061000000
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

RunOp = 0x406
RunTask = 9

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b4 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2de Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3dc Vars = (int, int)
	GTASK_9 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x455 Vars = (int)
		EVENT_6 Op = 0x47b Vars = ()
		EVENT_5 Op = 0x48a Vars = ()
		EVENT_45 Op = 0x497 Vars = (bool)
		EVENT_0 Op = 0x4a3 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x527

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
0x11: Call2 0x62e

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x581

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x52c

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x66c

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x66a

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x66e

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x670

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x6bf

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
0x55: Call2 0x570

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
0x63: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x93

0x67: Pop(1)
0x68: Push((int) 525525)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 525526)
0x6e: Push((int) 30726)
0x6f: Push((int) 26882)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x62

0x75: PushEmpty(bool)
0x76: Call2 0x672

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x60b

0x81: Pop(1)
0x82: GOTO 0x79

0x83: GOTO 0x92

0x84: Push("all") // @poff=138
0x85: Push("idle") // @poff=146
0x86: @ PlayAnimation(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: @ WaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: Push("all") // @poff=138
0x8e: Push("idle") // @poff=146
0x8f: @ PlayAnimation(Stack[-2], Stack[-1])
0x90: Pop(2)
0x91: GOTO 0x88

0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: PushEmpty(bool)
0x95: Call2 0x672

0x96: Pop(0)
0x97: Pop(1); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Return(); Pop(0)

0x9d: PushEmpty(string, bool)
0x9e: Stack[-3] = Stack[-2]
0x9f: Push("") // @poff=102
0xa0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa2: Stack[-1] = (bool) 0
0xa3: GOTO 0xa5

0xa4: Stack[-1] = (bool) 1
0xa5: Call2 0x612

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x627

0xae: Pop(0)
0xaf: Push((int) 26881)
0xb0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb2: PushEmpty(string)
0xb3: Stack[-1] = "Neutral" // @poff=89
0xb4: Call2 0x93

0xb5: Pop(1)
0xb6: Push((int) 525525)
0xb7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb8: Pop(1)
0xb9: @@@ ClearReplies(); Obj=0 // @poff=116
0xba: Pop(0)
0xbb: Push((int) 525526)
0xbc: Push((int) 30726)
0xbd: Push((int) 26882)
0xbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Push((int) 30726)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral" // @poff=89
0xc6: Call2 0x93

0xc7: Pop(1)
0xc8: Push((int) 529273)
0xc9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xca: Pop(1)
0xcb: @@@ ClearReplies(); Obj=0 // @poff=116
0xcc: Pop(0)
0xcd: Push((int) 529272)
0xce: Push((int) 30728)
0xcf: Push((int) 30725)
0xd0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd1: Pop(3)
0xd2: Push((int) 529274)
0xd3: Push((int) 30729)
0xd4: Push((int) 30727)
0xd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: Push((int) 30729)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral" // @poff=89
0xdd: Call2 0x93

0xde: Pop(1)
0xdf: Push((int) 529276)
0xe0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe1: Pop(1)
0xe2: @@@ ClearReplies(); Obj=0 // @poff=116
0xe3: Pop(0)
0xe4: Push((int) 529278)
0xe5: Push((int) -1)
0xe6: Push((int) 30731)
0xe7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 30728)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral" // @poff=89
0xef: Call2 0x93

0xf0: Pop(1)
0xf1: Push((int) 529275)
0xf2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf3: Pop(1)
0xf4: @@@ ClearReplies(); Obj=0 // @poff=116
0xf5: Pop(0)
0xf6: Push((int) 529277)
0xf7: Push((int) -1)
0xf8: Push((int) 30730)
0xf9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfd: PushEmpty(bool)
0xfe: Call2 0x672

0xff: Pop(0)
0x100: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x101: @ lshStopAnimation()
0x102: Pop(0)
0x103: GOTO 0x106

0x104: @ StopAnimation()
0x105: Pop(0)
0x106: Return(); Pop(0)

0x107: GOTO 0xaa

0x108: Return(); Pop(0)

0x109: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x10a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x10b: PushEmpty(bool, object)
0x10c: PushEmpty(object)
0x10d: Call2 0x62e

0x10e: Stack[-1] = Stack[-2]
0x10f: Pop(1)
0x110: Call2 0x581

0x111: Pop(2)
0x112: PushEmpty(bool, object, float)
0x113: Stack[-12] = Stack[-2]
0x114: Stack[-1] = (float) 70.0
0x115: Call2 0x52c

0x116: Pop(2)
0x117: Pop(1); Push((bool) Stack[-1] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x119: Stack[-10] = (int) -2
0x11a: Return(); Pop(8)

0x11b: @ CreateDialog(Stack[-4])
0x11c: Pop(0)
0x11d: PushEmpty(int)
0x11e: Call2 0x66c

0x11f: Pop(0)
0x120: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x121: Pop(1)
0x122: PushEmpty(int)
0x123: Call2 0x66a

0x124: Pop(0)
0x125: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x126: Pop(1)
0x127: PushEmpty(string)
0x128: Call2 0x66e

0x129: Pop(0)
0x12a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x12b: Pop(1)
0x12c: PushEmpty(string)
0x12d: Call2 0x670

0x12e: Pop(0)
0x12f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x130: Pop(1)
0x131: PushEmpty(int)
0x132: Call2 0x6bf

0x133: Pop(0)
0x134: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x135: Pop(1)
0x136: Stack[-2] = (int) -1
0x137: @ IsOverrideActive(Stack[-3])
0x138: Pop(0)
0x139: Push(Stack[-3])
0x13a: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13b: Stack[-10] = (int) -2
0x13c: Return(); Pop(8)

0x13d: @ DoDialog(Stack[-4])
0x13e: Pop(0)
0x13f: PushEmpty(object, object)
0x140: Stack[-11] = Stack[-2]
0x141: Stack[-6] = Stack[-1]
0x142: Push(-2, 4); TaskCall(4)
0x143: Call2 0x15a

0x144: Pop(-2, 4); TaskReturn
0x145: Pop(2)
0x146: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x147: Pop(0)
0x148: Pop(0); Push((bool) Stack[-1] == 0)
0x149: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14a: @ sync()
0x14b: Pop(0)
0x14c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x14d: Pop(0)
0x14e: GOTO 0x148

0x14f: PushEmpty(object)
0x150: Stack[-10] = Stack[-1]
0x151: Call2 0x570

0x152: Pop(1)
0x153: @ StopDialog(Stack[-4])
0x154: Pop(0)
0x155: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x156: Pop(0)
0x157: Stack[-2] = Stack[-10]
0x158: Return(); Pop(8)

0x159: Stack[-4] = 0
0x15a: PushEmpty()
0x15b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x15c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x15d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x15e: Push((int) 1)
0x15f: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Neutral" // @poff=89
0x162: Call2 0x19e

0x163: Pop(1)
0x164: Push((int) 526413)
0x165: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x166: Pop(1)
0x167: @@@ ClearReplies(); Obj=0 // @poff=116
0x168: Pop(0)
0x169: PushEmpty(bool, object)
0x16a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Call2 0x67d

0x16c: Pop(1)
0x16d: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16e: Push((int) 526414)
0x16f: Push((int) 30415)
0x170: Push((int) 27689)
0x171: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x172: Pop(3)
0x173: Push((int) 526419)
0x174: Push((int) -1)
0x175: Push((int) 27694)
0x176: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x177: Pop(3)
0x178: Push((int) 528977)
0x179: Push((int) -1)
0x17a: Push((int) 30414)
0x17b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17c: Pop(3)
0x17d: GOTO 0x180

0x17e: Return(); Pop(0)

0x17f: GOTO 0x15e

0x180: PushEmpty(bool)
0x181: Call2 0x672

0x182: Pop(0)
0x183: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x184: @ lshWaitForAnimEnd()
0x185: Pop(0)
0x186: Push( Stack[3 + Tasks[-1].StackPointer] )
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: GOTO 0x18e

0x189: PushEmpty(string)
0x18a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x18b: Call2 0x60b

0x18c: Pop(1)
0x18d: GOTO 0x184

0x18e: GOTO 0x19d

0x18f: Push("all") // @poff=138
0x190: Push("idle") // @poff=146
0x191: @ PlayAnimation(Stack[-2], Stack[-1])
0x192: Pop(2)
0x193: @ WaitForAnimEnd()
0x194: Pop(0)
0x195: Push( Stack[3 + Tasks[-1].StackPointer] )
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: GOTO 0x19d

0x198: Push("all") // @poff=138
0x199: Push("idle") // @poff=146
0x19a: @ PlayAnimation(Stack[-2], Stack[-1])
0x19b: Pop(2)
0x19c: GOTO 0x193

0x19d: Return(); Pop(0)

0x19e: PushEmpty()
0x19f: PushEmpty(bool)
0x1a0: Call2 0x672

0x1a1: Pop(0)
0x1a2: Pop(1); Push((bool) Stack[-1] == 0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: Return(); Pop(0)

0x1a5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Return(); Pop(0)

0x1a8: PushEmpty(string, bool)
0x1a9: Stack[-3] = Stack[-2]
0x1aa: Push("") // @poff=102
0x1ab: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ad: Stack[-1] = (bool) 0
0x1ae: GOTO 0x1b0

0x1af: Stack[-1] = (bool) 1
0x1b0: Call2 0x612

0x1b1: Pop(2)
0x1b2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b3: Return(); Pop(0)

0x1b4: PushEmpty()
0x1b5: Push((int) 1)
0x1b6: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x1b7: PushEmpty()
0x1b8: Call2 0x627

0x1b9: Pop(0)
0x1ba: Push((int) 27693)
0x1bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: PushEmpty(object, object)
0x1be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c0: Call2 0x674

0x1c1: Pop(2)
0x1c2: Push((int) 27688)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral" // @poff=89
0x1c7: Call2 0x19e

0x1c8: Pop(1)
0x1c9: Push((int) 526413)
0x1ca: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cb: Pop(1)
0x1cc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cd: Pop(0)
0x1ce: PushEmpty(bool, object)
0x1cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d0: Call2 0x67d

0x1d1: Pop(1)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d3: Push((int) 526414)
0x1d4: Push((int) 30415)
0x1d5: Push((int) 27689)
0x1d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d7: Pop(3)
0x1d8: Push((int) 526419)
0x1d9: Push((int) -1)
0x1da: Push((int) 27694)
0x1db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1dc: Pop(3)
0x1dd: Push((int) 528977)
0x1de: Push((int) -1)
0x1df: Push((int) 30414)
0x1e0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e1: Pop(3)
0x1e2: Return(); Pop(0)

0x1e3: Push((int) 30415)
0x1e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = "Neutral" // @poff=89
0x1e8: Call2 0x19e

0x1e9: Pop(1)
0x1ea: Push((int) 528978)
0x1eb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ec: Pop(1)
0x1ed: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ee: Pop(0)
0x1ef: Push((int) 528980)
0x1f0: Push((int) 30418)
0x1f1: Push((int) 30417)
0x1f2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f3: Pop(3)
0x1f4: Return(); Pop(0)

0x1f5: Push((int) 30418)
0x1f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f8: PushEmpty(string)
0x1f9: Stack[-1] = "Neutral" // @poff=89
0x1fa: Call2 0x19e

0x1fb: Pop(1)
0x1fc: Push((int) 528981)
0x1fd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fe: Pop(1)
0x1ff: @@@ ClearReplies(); Obj=0 // @poff=116
0x200: Pop(0)
0x201: Push((int) 528979)
0x202: Push((int) 27690)
0x203: Push((int) 30416)
0x204: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x205: Pop(3)
0x206: Return(); Pop(0)

0x207: Push((int) 27690)
0x208: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x20a: PushEmpty(string)
0x20b: Stack[-1] = "Neutral" // @poff=89
0x20c: Call2 0x19e

0x20d: Pop(1)
0x20e: Push((int) 526415)
0x20f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x210: Pop(1)
0x211: @@@ ClearReplies(); Obj=0 // @poff=116
0x212: Pop(0)
0x213: Push((int) 526416)
0x214: Push((int) 27692)
0x215: Push((int) 27691)
0x216: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Push((int) 27692)
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Neutral" // @poff=89
0x21e: Call2 0x19e

0x21f: Pop(1)
0x220: Push((int) 526417)
0x221: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x222: Pop(1)
0x223: @@@ ClearReplies(); Obj=0 // @poff=116
0x224: Pop(0)
0x225: Push((int) 526418)
0x226: Push((int) -1)
0x227: Push((int) 27693)
0x228: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x229: Pop(3)
0x22a: Return(); Pop(0)

0x22b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x22c: PushEmpty(bool)
0x22d: Call2 0x672

0x22e: Pop(0)
0x22f: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x230: @ lshStopAnimation()
0x231: Pop(0)
0x232: GOTO 0x235

0x233: @ StopAnimation()
0x234: Pop(0)
0x235: Return(); Pop(0)

0x236: GOTO 0x1b5

0x237: Return(); Pop(0)

0x238: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x239: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x23a: PushEmpty(bool, object)
0x23b: PushEmpty(object)
0x23c: Call2 0x62e

0x23d: Stack[-1] = Stack[-2]
0x23e: Pop(1)
0x23f: Call2 0x581

0x240: Pop(2)
0x241: PushEmpty(bool, object, float)
0x242: Stack[-12] = Stack[-2]
0x243: Stack[-1] = (float) 70.0
0x244: Call2 0x52c

0x245: Pop(2)
0x246: Pop(1); Push((bool) Stack[-1] == 0)
0x247: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x248: Stack[-10] = (int) -2
0x249: Return(); Pop(8)

0x24a: @ CreateDialog(Stack[-4])
0x24b: Pop(0)
0x24c: PushEmpty(int)
0x24d: Call2 0x66c

0x24e: Pop(0)
0x24f: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x250: Pop(1)
0x251: PushEmpty(int)
0x252: Call2 0x66a

0x253: Pop(0)
0x254: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x255: Pop(1)
0x256: PushEmpty(string)
0x257: Call2 0x66e

0x258: Pop(0)
0x259: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x25a: Pop(1)
0x25b: PushEmpty(string)
0x25c: Call2 0x670

0x25d: Pop(0)
0x25e: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x25f: Pop(1)
0x260: PushEmpty(int)
0x261: Call2 0x6bf

0x262: Pop(0)
0x263: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x264: Pop(1)
0x265: Stack[-2] = (int) -1
0x266: @ IsOverrideActive(Stack[-3])
0x267: Pop(0)
0x268: Push(Stack[-3])
0x269: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26a: Stack[-10] = (int) -2
0x26b: Return(); Pop(8)

0x26c: @ DoDialog(Stack[-4])
0x26d: Pop(0)
0x26e: PushEmpty(object, object)
0x26f: Stack[-11] = Stack[-2]
0x270: Stack[-6] = Stack[-1]
0x271: Push(-2, 4); TaskCall(6)
0x272: Call2 0x289

0x273: Pop(-2, 4); TaskReturn
0x274: Pop(2)
0x275: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x276: Pop(0)
0x277: Pop(0); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x279: @ sync()
0x27a: Pop(0)
0x27b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x27c: Pop(0)
0x27d: GOTO 0x277

0x27e: PushEmpty(object)
0x27f: Stack[-10] = Stack[-1]
0x280: Call2 0x570

0x281: Pop(1)
0x282: @ StopDialog(Stack[-4])
0x283: Pop(0)
0x284: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x285: Pop(0)
0x286: Stack[-2] = Stack[-10]
0x287: Return(); Pop(8)

0x288: Stack[-4] = 0
0x289: PushEmpty()
0x28a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x28b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x28c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x28d: Push((int) 1)
0x28e: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x28f: PushEmpty(string)
0x290: Stack[-1] = "Neutral" // @poff=89
0x291: Call2 0x2c8

0x292: Pop(1)
0x293: Push((int) 535284)
0x294: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x295: Pop(1)
0x296: @@@ ClearReplies(); Obj=0 // @poff=116
0x297: Pop(0)
0x298: Push((int) 535285)
0x299: Push((int) 36962)
0x29a: Push((int) 36961)
0x29b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x29c: Pop(3)
0x29d: Push((int) 535292)
0x29e: Push((int) -1)
0x29f: Push((int) 36968)
0x2a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a1: Pop(3)
0x2a2: Push((int) 535293)
0x2a3: Push((int) -1)
0x2a4: Push((int) 36969)
0x2a5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a6: Pop(3)
0x2a7: GOTO 0x2aa

0x2a8: Return(); Pop(0)

0x2a9: GOTO 0x28d

0x2aa: PushEmpty(bool)
0x2ab: Call2 0x672

0x2ac: Pop(0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2ae: @ lshWaitForAnimEnd()
0x2af: Pop(0)
0x2b0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: GOTO 0x2b8

0x2b3: PushEmpty(string)
0x2b4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2b5: Call2 0x60b

0x2b6: Pop(1)
0x2b7: GOTO 0x2ae

0x2b8: GOTO 0x2c7

0x2b9: Push("all") // @poff=138
0x2ba: Push("idle") // @poff=146
0x2bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bc: Pop(2)
0x2bd: @ WaitForAnimEnd()
0x2be: Pop(0)
0x2bf: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: GOTO 0x2c7

0x2c2: Push("all") // @poff=138
0x2c3: Push("idle") // @poff=146
0x2c4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c5: Pop(2)
0x2c6: GOTO 0x2bd

0x2c7: Return(); Pop(0)

0x2c8: PushEmpty()
0x2c9: PushEmpty(bool)
0x2ca: Call2 0x672

0x2cb: Pop(0)
0x2cc: Pop(1); Push((bool) Stack[-1] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: Return(); Pop(0)

0x2cf: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: Return(); Pop(0)

0x2d2: PushEmpty(string, bool)
0x2d3: Stack[-3] = Stack[-2]
0x2d4: Push("") // @poff=102
0x2d5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d7: Stack[-1] = (bool) 0
0x2d8: GOTO 0x2da

0x2d9: Stack[-1] = (bool) 1
0x2da: Call2 0x612

0x2db: Pop(2)
0x2dc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2dd: Return(); Pop(0)

0x2de: PushEmpty()
0x2df: Push((int) 1)
0x2e0: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x2e1: PushEmpty()
0x2e2: Call2 0x627

0x2e3: Pop(0)
0x2e4: Push((int) 36960)
0x2e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2e7: PushEmpty(string)
0x2e8: Stack[-1] = "Neutral" // @poff=89
0x2e9: Call2 0x2c8

0x2ea: Pop(1)
0x2eb: Push((int) 535284)
0x2ec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ed: Pop(1)
0x2ee: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ef: Pop(0)
0x2f0: Push((int) 535285)
0x2f1: Push((int) 36962)
0x2f2: Push((int) 36961)
0x2f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f4: Pop(3)
0x2f5: Push((int) 535292)
0x2f6: Push((int) -1)
0x2f7: Push((int) 36968)
0x2f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f9: Pop(3)
0x2fa: Push((int) 535293)
0x2fb: Push((int) -1)
0x2fc: Push((int) 36969)
0x2fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2fe: Pop(3)
0x2ff: Return(); Pop(0)

0x300: Push((int) 36962)
0x301: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x303: PushEmpty(string)
0x304: Stack[-1] = "Neutral" // @poff=89
0x305: Call2 0x2c8

0x306: Pop(1)
0x307: Push((int) 535286)
0x308: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x309: Pop(1)
0x30a: @@@ ClearReplies(); Obj=0 // @poff=116
0x30b: Pop(0)
0x30c: Push((int) 535287)
0x30d: Push((int) 36964)
0x30e: Push((int) 36963)
0x30f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x310: Pop(3)
0x311: Push((int) 535291)
0x312: Push((int) -1)
0x313: Push((int) 36967)
0x314: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x315: Pop(3)
0x316: Return(); Pop(0)

0x317: Push((int) 36964)
0x318: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x31a: PushEmpty(string)
0x31b: Stack[-1] = "Neutral" // @poff=89
0x31c: Call2 0x2c8

0x31d: Pop(1)
0x31e: Push((int) 535288)
0x31f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x320: Pop(1)
0x321: @@@ ClearReplies(); Obj=0 // @poff=116
0x322: Pop(0)
0x323: Push((int) 535289)
0x324: Push((int) -1)
0x325: Push((int) 36965)
0x326: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x327: Pop(3)
0x328: Push((int) 535290)
0x329: Push((int) -1)
0x32a: Push((int) 36966)
0x32b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x32c: Pop(3)
0x32d: Return(); Pop(0)

0x32e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x32f: PushEmpty(bool)
0x330: Call2 0x672

0x331: Pop(0)
0x332: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x333: @ lshStopAnimation()
0x334: Pop(0)
0x335: GOTO 0x338

0x336: @ StopAnimation()
0x337: Pop(0)
0x338: Return(); Pop(0)

0x339: GOTO 0x2df

0x33a: Return(); Pop(0)

0x33b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x33c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33d: PushEmpty(bool, object)
0x33e: PushEmpty(object)
0x33f: Call2 0x62e

0x340: Stack[-1] = Stack[-2]
0x341: Pop(1)
0x342: Call2 0x581

0x343: Pop(2)
0x344: PushEmpty(bool, object, float)
0x345: Stack[-12] = Stack[-2]
0x346: Stack[-1] = (float) 70.0
0x347: Call2 0x52c

0x348: Pop(2)
0x349: Pop(1); Push((bool) Stack[-1] == 0)
0x34a: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34b: Stack[-10] = (int) -2
0x34c: Return(); Pop(8)

0x34d: @ CreateDialog(Stack[-4])
0x34e: Pop(0)
0x34f: PushEmpty(int)
0x350: Call2 0x66c

0x351: Pop(0)
0x352: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x353: Pop(1)
0x354: PushEmpty(int)
0x355: Call2 0x66a

0x356: Pop(0)
0x357: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x358: Pop(1)
0x359: PushEmpty(string)
0x35a: Call2 0x66e

0x35b: Pop(0)
0x35c: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x35d: Pop(1)
0x35e: PushEmpty(string)
0x35f: Call2 0x670

0x360: Pop(0)
0x361: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x362: Pop(1)
0x363: PushEmpty(int)
0x364: Call2 0x6bf

0x365: Pop(0)
0x366: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x367: Pop(1)
0x368: Stack[-2] = (int) -1
0x369: @ IsOverrideActive(Stack[-3])
0x36a: Pop(0)
0x36b: Push(Stack[-3])
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: Stack[-10] = (int) -2
0x36e: Return(); Pop(8)

0x36f: @ DoDialog(Stack[-4])
0x370: Pop(0)
0x371: PushEmpty(object, object)
0x372: Stack[-11] = Stack[-2]
0x373: Stack[-6] = Stack[-1]
0x374: Push(-2, 4); TaskCall(8)
0x375: Call2 0x38c

0x376: Pop(-2, 4); TaskReturn
0x377: Pop(2)
0x378: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x379: Pop(0)
0x37a: Pop(0); Push((bool) Stack[-1] == 0)
0x37b: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37c: @ sync()
0x37d: Pop(0)
0x37e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x37f: Pop(0)
0x380: GOTO 0x37a

0x381: PushEmpty(object)
0x382: Stack[-10] = Stack[-1]
0x383: Call2 0x570

0x384: Pop(1)
0x385: @ StopDialog(Stack[-4])
0x386: Pop(0)
0x387: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x388: Pop(0)
0x389: Stack[-2] = Stack[-10]
0x38a: Return(); Pop(8)

0x38b: Stack[-4] = 0
0x38c: PushEmpty()
0x38d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x38e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x38f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x390: Push((int) 1)
0x391: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x392: PushEmpty(string)
0x393: Stack[-1] = "Neutral" // @poff=89
0x394: Call2 0x3c6

0x395: Pop(1)
0x396: Push((int) 540545)
0x397: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x398: Pop(1)
0x399: @@@ ClearReplies(); Obj=0 // @poff=116
0x39a: Pop(0)
0x39b: Push((int) 540546)
0x39c: Push((int) -1)
0x39d: Push((int) 42555)
0x39e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39f: Pop(3)
0x3a0: Push((int) 540798)
0x3a1: Push((int) -1)
0x3a2: Push((int) 42847)
0x3a3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a4: Pop(3)
0x3a5: GOTO 0x3a8

0x3a6: Return(); Pop(0)

0x3a7: GOTO 0x390

0x3a8: PushEmpty(bool)
0x3a9: Call2 0x672

0x3aa: Pop(0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3ac: @ lshWaitForAnimEnd()
0x3ad: Pop(0)
0x3ae: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3af: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3b0: GOTO 0x3b6

0x3b1: PushEmpty(string)
0x3b2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3b3: Call2 0x60b

0x3b4: Pop(1)
0x3b5: GOTO 0x3ac

0x3b6: GOTO 0x3c5

0x3b7: Push("all") // @poff=138
0x3b8: Push("idle") // @poff=146
0x3b9: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ba: Pop(2)
0x3bb: @ WaitForAnimEnd()
0x3bc: Pop(0)
0x3bd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: GOTO 0x3c5

0x3c0: Push("all") // @poff=138
0x3c1: Push("idle") // @poff=146
0x3c2: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c3: Pop(2)
0x3c4: GOTO 0x3bb

0x3c5: Return(); Pop(0)

0x3c6: PushEmpty()
0x3c7: PushEmpty(bool)
0x3c8: Call2 0x672

0x3c9: Pop(0)
0x3ca: Pop(1); Push((bool) Stack[-1] == 0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cc: Return(); Pop(0)

0x3cd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cf: Return(); Pop(0)

0x3d0: PushEmpty(string, bool)
0x3d1: Stack[-3] = Stack[-2]
0x3d2: Push("") // @poff=102
0x3d3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d5: Stack[-1] = (bool) 0
0x3d6: GOTO 0x3d8

0x3d7: Stack[-1] = (bool) 1
0x3d8: Call2 0x612

0x3d9: Pop(2)
0x3da: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3db: Return(); Pop(0)

0x3dc: PushEmpty()
0x3dd: Push((int) 1)
0x3de: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x3df: PushEmpty()
0x3e0: Call2 0x627

0x3e1: Pop(0)
0x3e2: Push((int) 42554)
0x3e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3e5: PushEmpty(string)
0x3e6: Stack[-1] = "Neutral" // @poff=89
0x3e7: Call2 0x3c6

0x3e8: Pop(1)
0x3e9: Push((int) 540545)
0x3ea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3eb: Pop(1)
0x3ec: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ed: Pop(0)
0x3ee: Push((int) 540546)
0x3ef: Push((int) -1)
0x3f0: Push((int) 42555)
0x3f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f2: Pop(3)
0x3f3: Push((int) 540798)
0x3f4: Push((int) -1)
0x3f5: Push((int) 42847)
0x3f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f7: Pop(3)
0x3f8: Return(); Pop(0)

0x3f9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3fa: PushEmpty(bool)
0x3fb: Call2 0x672

0x3fc: Pop(0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3fe: @ lshStopAnimation()
0x3ff: Pop(0)
0x400: GOTO 0x403

0x401: @ StopAnimation()
0x402: Pop(0)
0x403: Return(); Pop(0)

0x404: GOTO 0x3dd

0x405: Return(); Pop(0)

0x406: PushEmpty()
0x407: Call2 0x40a

0x408: Pop(0)
0x409: Return(); Pop(0)

0x40a: PushEmpty(bool)
0x40b: Call2 0x527

0x40c: Pop(0)
0x40d: Pop(1); Push((bool) Stack[-1] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x40f: PushEmpty()
0x410: Push(-0, 0); TaskCall(0)
0x411: Call2 0x0

0x412: Pop(-0, 0); TaskReturn
0x413: Pop(0)
0x414: PushEmpty()
0x415: Call2 0x48a

0x416: Pop(0)
0x417: @ GetDirection(Stack[-0]T)
0x418: Pop(0)
0x419: PushEmpty()
0x41a: Call2 0x4c0

0x41b: Pop(0)
0x41c: GOTO 0x419

0x41d: Return(); Pop(0)

0x41e: PushEmpty(object, object)
0x41f: Push("player") // @poff=156
0x420: @ FindActor(Stack[-2], Stack[-1])
0x421: Pop(1)
0x422: Pop(0); Push((bool) Stack[-1] == 0)
0x423: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x424: Stack[-3] = (bool) 0
0x425: Return(); Pop(2)

0x426: PushEmpty(bool, object)
0x427: Stack[-3] = Stack[-1]
0x428: Call2 0x51e

0x429: Stack[-2] = Stack[-5]
0x42a: Pop(2)
0x42b: Return(); Pop(2)

0x42c: Stack[-1] = 0
0x42d: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x42e: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x42f: @ RotateAsync(Stack[-2], Stack[-1])
0x430: Pop(2)
0x431: Return(); Pop(0)

0x432: PushEmpty(object, bool, object, bool)
0x433: Push("player") // @poff=156
0x434: @ FindActor(Stack[-3], Stack[-1])
0x435: Pop(1)
0x436: Pop(0); Push((bool) Stack[-2] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x438: Stack[-5] = (bool) 0
0x439: Return(); Pop(4)

0x43a: PushEmpty(float, object)
0x43b: Stack[-4] = Stack[-1]
0x43c: Call2 0x50c

0x43d: Pop(1)
0x43e: Push((float)90000.0)
0x43f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x441: Stack[-5] = (bool) 0
0x442: Return(); Pop(4)

0x443: @ CanSee(Stack[-1], Stack[-2])
0x444: Pop(0)
0x445: Stack[-1] = Stack[-5]
0x446: Return(); Pop(4)

0x447: Stack[-2] = 0
0x448: PushEmpty(float, float)
0x449: Push((int) 8)
0x44a: Push((int) 16)
0x44b: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x44c: Pop(2)
0x44d: Push((int) 10)
0x44e: @ SetTimer(Stack[-1], Stack[-2])
0x44f: Pop(1)
0x450: Return(); Pop(2)

0x451: Push((int) 10)
0x452: @ KillTimer(Stack[-1])
0x453: Pop(1)
0x454: Return(); Pop(0)

0x455: PushEmpty()
0x456: Push((int) 10)
0x457: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x459: PushEmpty()
0x45a: Call2 0x451

0x45b: Pop(0)
0x45c: PushEmpty(bool)
0x45d: Stack[-1] = (bool) 0
0x45e: PushEmpty(bool)
0x45f: Call2 0x527

0x460: Pop(0)
0x461: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x462: PushEmpty(bool)
0x463: Call2 0x432

0x464: Pop(0)
0x465: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x466: Stack[-1] = (bool) 1
0x467: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x468: PushEmpty(bool)
0x469: Call2 0x41e

0x46a: Pop(0)
0x46b: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x46c: PushEmpty(bool, object)
0x46d: PushEmpty(object)
0x46e: Call2 0x62e

0x46f: Stack[-1] = Stack[-2]
0x470: Pop(1)
0x471: Call2 0x5bb

0x472: Pop(2)
0x473: GOTO 0x47a

0x474: PushEmpty()
0x475: Call2 0x42d

0x476: Pop(0)
0x477: PushEmpty()
0x478: Call2 0x448

0x479: Pop(0)
0x47a: Return(); Pop(0)

0x47b: PushEmpty()
0x47c: Call2 0x507

0x47d: Pop(0)
0x47e: PushEmpty()
0x47f: Call2 0x451

0x480: Pop(0)
0x481: @ lshStopSpeech()
0x482: Pop(0)
0x483: @ lshStopAnimation()
0x484: Pop(0)
0x485: @ StopAsync()
0x486: Pop(0)
0x487: @ Hold()
0x488: Pop(0)
0x489: Return(); Pop(0)

0x48a: @ StopGroup0()
0x48b: Pop(0)
0x48c: PushEmpty()
0x48d: Call2 0x451

0x48e: Pop(0)
0x48f: PushEmpty(string)
0x490: Stack[-1] = "Neutral" // @poff=89
0x491: Call2 0x60b

0x492: Pop(1)
0x493: PushEmpty()
0x494: Call2 0x448

0x495: Pop(0)
0x496: Return(); Pop(0)

0x497: PushEmpty()
0x498: Push(Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49a: PushEmpty()
0x49b: Call2 0x448

0x49c: Pop(0)
0x49d: GOTO 0x4a2

0x49e: PushEmpty(string)
0x49f: Stack[-1] = "Neutral" // @poff=89
0x4a0: Call2 0x60b

0x4a1: Pop(1)
0x4a2: Return(); Pop(0)

0x4a3: PushEmpty(bool, bool)
0x4a4: @ IsOverrideActive(Stack[-1])
0x4a5: Pop(0)
0x4a6: Pop(0); Push((bool) Stack[-1] == 0)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4a8: EventDisable(0)
0x4a9: PushEmpty()
0x4aa: Call2 0x507

0x4ab: Pop(0)
0x4ac: PushEmpty(bool, object)
0x4ad: Stack[-5] = Stack[-1]
0x4ae: Call2 0x51e

0x4af: Pop(2)
0x4b0: EventEnable(0)
0x4b1: PushEmpty(object)
0x4b2: Stack[-4] = Stack[-1]
0x4b3: Call2 0x6d0

0x4b4: Pop(1)
0x4b5: PushEmpty(string)
0x4b6: Stack[-1] = "Neutral" // @poff=89
0x4b7: Call2 0x60b

0x4b8: Pop(1)
0x4b9: PushEmpty()
0x4ba: Call2 0x451

0x4bb: Pop(0)
0x4bc: PushEmpty()
0x4bd: Call2 0x448

0x4be: Pop(0)
0x4bf: Return(); Pop(2)

0x4c0: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x4c1: @ WaitForAnimEnd()
0x4c2: Pop(0)
0x4c3: PushEmpty(bool)
0x4c4: Call2 0x527

0x4c5: Pop(0)
0x4c6: Pop(1); Push((bool) Stack[-1] == 0)
0x4c7: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c8: Return(); Pop(12)

0x4c9: PushEmpty(int)
0x4ca: Call2 0x659

0x4cb: Stack[-1] = Stack[-7]
0x4cc: Pop(1)
0x4cd: Stack[-5] = (int) 0
0x4ce: PushEmpty(bool)
0x4cf: Stack[-1] = (bool) 0
0x4d0: Push((int) 5)
0x4d1: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d3: PushEmpty(bool)
0x4d4: Call2 0x527

0x4d5: Pop(0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d7: Stack[-1] = (bool) 1
0x4d8: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4d9: Pop(0); Push((bool) Stack[-6] == 0)
0x4da: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4db: Push((int) 3)
0x4dc: @ Sleep(Stack[-1], Stack[-5])
0x4dd: Pop(1)
0x4de: Pop(0); Push((bool) Stack[-4] == 0)
0x4df: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4e0: GOTO 0x502

0x4e1: GOTO 0x4f7

0x4e2: @ irand(Stack[-3], Stack[-6])
0x4e3: Pop(0)
0x4e4: Push((int) 5)
0x4e5: @ irand(Stack[-3], Stack[-1])
0x4e6: Pop(1)
0x4e7: Push((int) 0)
0x4e8: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4ea: Stack[-3] = (int) 0
0x4eb: Push("all") // @poff=138
0x4ec: PushEmpty(string, int)
0x4ed: Stack[-6] = Stack[-1]
0x4ee: Call2 0x652

0x4ef: Pop(1)
0x4f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f1: Pop(2)
0x4f2: @ WaitForAnimEnd(Stack[-1])
0x4f3: Pop(0)
0x4f4: Pop(0); Push((bool) Stack[-1] == 0)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f6: GOTO 0x502

0x4f7: PushEmpty(bool)
0x4f8: Call2 0x505

0x4f9: Pop(0)
0x4fa: Pop(1); Push((bool) Stack[-1] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fc: GOTO 0x502

0x4fd: @ ResetAAS()
0x4fe: Pop(0)
0x4ff: Push((int) 1)
0x500: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x501: GOTO 0x4ce

0x502: @ ResetAAS()
0x503: Pop(0)
0x504: Return(); Pop(12)

0x505: Stack[-1] = (bool) 1
0x506: Return(); Pop(0)

0x507: @ StopAnimation()
0x508: Pop(0)
0x509: @ StopGroup0()
0x50a: Pop(0)
0x50b: Return(); Pop(0)

0x50c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x50d: @ GetPosition(Stack[-3])
0x50e: Pop(0)
0x50f: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x510: Pop(0)
0x511: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x512: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x513: Return(); Pop(6)

0x514: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x515: @ GetPosition(Stack[-3])
0x516: Pop(0)
0x517: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x518: Push(CvectorIndex(Stack[-2], 0))
0x519: Push(CvectorIndex(Stack[-3], 2))
0x51a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x51b: Pop(2)
0x51c: Stack[-1] = Stack[-8]
0x51d: Return(); Pop(6)

0x51e: PushEmpty(cvector, cvector)
0x51f: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x520: Pop(0)
0x521: PushEmpty(bool, cvector)
0x522: Stack[-3] = Stack[-1]
0x523: Call2 0x514

0x524: Stack[-2] = Stack[-6]
0x525: Pop(2)
0x526: Return(); Pop(2)

0x527: PushEmpty(bool, bool)
0x528: @ IsLoaded(Stack[-1])
0x529: Pop(0)
0x52a: Stack[-1] = Stack[-3]
0x52b: Return(); Pop(2)

0x52c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x52d: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x52e: Pop(0)
0x52f: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x530: Pop(0)
0x531: Push(CvectorIndex(Stack[-8], 1))
0x532: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x533: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x534: @ GetPosition(Stack[-7])
0x535: Pop(0)
0x536: @ GetEyesHeight(Stack[-9])
0x537: Pop(0)
0x538: Push(CvectorIndex(Stack[-7], 1))
0x539: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x53a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x53b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x53c: Push(CvectorIndex(Stack[-6], 1))
0x53d: Stack[-1] = (int) 0
0x53e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x53f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x540: Pop(1); Push(Sqrt(Stack[-1]))
0x541: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x542: Stack[-5] = -Stack[-6]; Pop(0);
0x543: Pop(0); Push(Stack[-6] * Stack[-19]);
0x544: PushEmpty(cvector, cvector)
0x545: Push([0.0, 1.0, 0.0])
0x546: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x547: Call2 0x634

0x548: Pop(1)
0x549: Push((int) 25)
0x54a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x54b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x54c: Push([0.0, 10.0, 0.0])
0x54d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x54e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x54f: @ IsOverrideActive(Stack[-2])
0x550: Pop(0)
0x551: Push(Stack[-2])
0x552: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x553: Stack[-21] = (bool) 0
0x554: Return(); Pop(18)

0x555: @ StopWorld()
0x556: Pop(0)
0x557: @ CameraTransit(Stack[-3], Stack[-5])
0x558: Pop(0)
0x559: Push(CvectorIndex(Stack[-4], 0))
0x55a: Push(CvectorIndex(Stack[-5], 2))
0x55b: @ Rotate(Stack[-2], Stack[-1])
0x55c: Pop(2)
0x55d: PushEmpty(bool)
0x55e: Call2 0x672

0x55f: Pop(0)
0x560: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x561: GOTO 0x56a

0x562: Push("head") // @poff=196
0x563: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x564: Pop(1)
0x565: Push(Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x567: Push("head") // @poff=196
0x568: @ LookAsyncCamera(Stack[-1])
0x569: Pop(1)
0x56a: @ CameraWaitForPlayFinish()
0x56b: Pop(0)
0x56c: @ ResumeWorld()
0x56d: Pop(0)
0x56e: Stack[-21] = (bool) 1
0x56f: Return(); Pop(18)

0x570: PushEmpty(bool, bool)
0x571: @ CameraSwitchToNormal()
0x572: Pop(0)
0x573: PushEmpty(bool)
0x574: Call2 0x672

0x575: Pop(0)
0x576: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x577: GOTO 0x580

0x578: Push("head") // @poff=196
0x579: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x57a: Pop(1)
0x57b: Push(Stack[-1])
0x57c: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57d: Push("head") // @poff=196
0x57e: @ UnlookAsync(Stack[-1])
0x57f: Pop(1)
0x580: Return(); Pop(2)

0x581: PushEmpty(int, int, int, int)
0x582: Push("voice_common") // @poff=206
0x583: @ GetVariable(Stack[-1], Stack[-3])
0x584: Pop(1)
0x585: Push(Stack[-2])
0x586: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x587: PushEmpty(bool, object)
0x588: Stack[-7] = Stack[-1]
0x589: Call2 0x5bb

0x58a: Pop(1)
0x58b: Pop(1); Push((bool) Stack[-1] == 0)
0x58c: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x58d: PushEmpty(bool, object)
0x58e: Stack[-7] = Stack[-1]
0x58f: Call2 0x5e0

0x590: Pop(1)
0x591: Pop(1); Push((bool) Stack[-1] == 0)
0x592: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x593: Stack[-6] = (bool) 0
0x594: Return(); Pop(4)

0x595: Push((int) 2)
0x596: @ irand(Stack[-2], Stack[-1])
0x597: Pop(1)
0x598: Push(Stack[-1])
0x599: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x59a: Push("voice_common") // @poff=206
0x59b: Push((int) 1)
0x59c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x59d: Push((int) 3)
0x59e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x59f: @ SetVariable(Stack[-2], Stack[-1])
0x5a0: Pop(2)
0x5a1: GOTO 0x5a6

0x5a2: Push("voice_common") // @poff=206
0x5a3: Push((int) 0)
0x5a4: @ SetVariable(Stack[-2], Stack[-1])
0x5a5: Pop(2)
0x5a6: GOTO 0x5b9

0x5a7: PushEmpty(bool, object)
0x5a8: Stack[-7] = Stack[-1]
0x5a9: Call2 0x5e0

0x5aa: Pop(1)
0x5ab: Pop(1); Push((bool) Stack[-1] == 0)
0x5ac: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5ad: PushEmpty(bool, object)
0x5ae: Stack[-7] = Stack[-1]
0x5af: Call2 0x5bb

0x5b0: Pop(1)
0x5b1: Pop(1); Push((bool) Stack[-1] == 0)
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b3: Stack[-6] = (bool) 0
0x5b4: Return(); Pop(4)

0x5b5: Push("voice_common") // @poff=206
0x5b6: Push((int) 1)
0x5b7: @ SetVariable(Stack[-2], Stack[-1])
0x5b8: Pop(2)
0x5b9: Stack[-6] = (bool) 1
0x5ba: Return(); Pop(4)

0x5bb: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5bc: Stack[-5] = "c" // @poff=232
0x5bd: Stack[-4] = (int) 0
0x5be: Push((int) 1)
0x5bf: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c0: Push((int) 1)
0x5c1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5c2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5c3: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x5c4: Pop(1)
0x5c5: Pop(0); Push((bool) Stack[-3] == 0)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c7: GOTO 0x5cb

0x5c8: Push((int) 1)
0x5c9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5ca: GOTO 0x5be

0x5cb: Pop(0); Push((bool) Stack[-4] == 0)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5cd: Stack[-12] = (bool) 0
0x5ce: Return(); Pop(10)

0x5cf: Stack[-2] = (int) 0
0x5d0: Push((int) 1)
0x5d1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: @ irand(Stack[-2], Stack[-4])
0x5d4: Pop(0)
0x5d5: Push((int) 1)
0x5d6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5d7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5d8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x5d9: Pop(1)
0x5da: PushEmpty(bool, string)
0x5db: Stack[-3] = Stack[-1]
0x5dc: Call2 0x618

0x5dd: Stack[-2] = Stack[-14]
0x5de: Pop(2)
0x5df: Return(); Pop(10)

0x5e0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5e1: Push("d") // @poff=202
0x5e2: PushEmpty(int)
0x5e3: Call2 0x643

0x5e4: Pop(0)
0x5e5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5e6: Push("m") // @poff=260
0x5e7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5e8: Stack[-4] = (int) 0
0x5e9: Push((int) 1)
0x5ea: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5eb: Push((int) 1)
0x5ec: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5ed: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5ee: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x5ef: Pop(1)
0x5f0: Pop(0); Push((bool) Stack[-3] == 0)
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5f2: GOTO 0x5f6

0x5f3: Push((int) 1)
0x5f4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5f5: GOTO 0x5e9

0x5f6: Pop(0); Push((bool) Stack[-4] == 0)
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-12] = (bool) 0
0x5f9: Return(); Pop(10)

0x5fa: Stack[-2] = (int) 0
0x5fb: Push((int) 1)
0x5fc: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fe: @ irand(Stack[-2], Stack[-4])
0x5ff: Pop(0)
0x600: Push((int) 1)
0x601: Pop(1); Push(Stack[-3] + Stack[-1]);
0x602: Pop(1); Push(Stack[-6] + Stack[-1]);
0x603: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x604: Pop(1)
0x605: PushEmpty(bool, string)
0x606: Stack[-3] = Stack[-1]
0x607: Call2 0x618

0x608: Stack[-2] = Stack[-14]
0x609: Pop(2)
0x60a: Return(); Pop(10)

0x60b: PushEmpty(float, float, float, float)
0x60c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x60d: Pop(0)
0x60e: Push((bool) 0)
0x60f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x610: Pop(1)
0x611: Return(); Pop(4)

0x612: PushEmpty(float, float, float, float)
0x613: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x614: Pop(0)
0x615: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x616: Pop(0)
0x617: Return(); Pop(4)

0x618: PushEmpty(bool, bool)
0x619: PushEmpty(bool)
0x61a: Call2 0x672

0x61b: Pop(0)
0x61c: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x61d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x61e: Pop(0)
0x61f: Push(Stack[-1])
0x620: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x621: @ lshPlaySpeech(Stack[-3])
0x622: Pop(0)
0x623: Stack[-4] = (bool) 1
0x624: Return(); Pop(2)

0x625: Stack[-4] = (bool) 0
0x626: Return(); Pop(2)

0x627: PushEmpty(bool)
0x628: Call2 0x672

0x629: Pop(0)
0x62a: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62b: @ lshStopSpeech()
0x62c: Pop(0)
0x62d: Return(); Pop(0)

0x62e: PushEmpty(object, object)
0x62f: @ self(Stack[-1])
0x630: Pop(0)
0x631: Stack[-1] = Stack[-3]
0x632: Return(); Pop(2)

0x633: Stack[-1] = 0
0x634: PushEmpty(float, float)
0x635: Pop(0); Push(Stack[-3] | Stack[-3]);
0x636: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x637: Push((float)9.999999974752427e-07)
0x638: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63a: Stack[-4] = [0.0, 0.0, 0.0]
0x63b: Return(); Pop(2)

0x63c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x63d: Return(); Pop(2)

0x63e: PushEmpty(int, int)
0x63f: @ GetVariable(Stack[-3], Stack[-1])
0x640: Pop(0)
0x641: Stack[-1] = Stack[-4]
0x642: Return(); Pop(2)

0x643: PushEmpty(float, float)
0x644: @ GetGameTime(Stack[-1])
0x645: Pop(0)
0x646: Push((int) 1)
0x647: PushEmpty(int)
0x648: Push((int) 24)
0x649: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x64a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x64b: Return(); Pop(2)

0x64c: PushEmpty()
0x64d: PushEmpty(int)
0x64e: Call2 0x643

0x64f: Pop(0)
0x650: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x651: Return(); Pop(0)

0x652: PushEmpty(string, string)
0x653: Stack[-1] = "idle" // @poff=146
0x654: Push(Stack[-3])
0x655: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x656: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x657: Stack[-1] = Stack[-4]
0x658: Return(); Pop(2)

0x659: PushEmpty(int, bool, int, bool)
0x65a: Stack[-2] = (int) 0
0x65b: Push("all") // @poff=138
0x65c: PushEmpty(string, int)
0x65d: Stack[-5] = Stack[-1]
0x65e: Call2 0x652

0x65f: Pop(1)
0x660: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x661: Pop(2)
0x662: Pop(0); Push((bool) Stack[-1] == 0)
0x663: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x664: GOTO 0x668

0x665: Push((int) 1)
0x666: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x667: GOTO 0x65b

0x668: Stack[-2] = Stack[-5]
0x669: Return(); Pop(4)

0x66a: Stack[-1] = (int) 515552
0x66b: Return(); Pop(0)

0x66c: Stack[-1] = (int) 502877
0x66d: Return(); Pop(0)

0x66e: Stack[-1] = "ui/NPC_Spi4ka.png" // @poff=264
0x66f: Return(); Pop(0)

0x670: Stack[-1] = "ui/NPC_Spi4ka_b.png" // @poff=300
0x671: Return(); Pop(0)

0x672: Stack[-1] = (bool) 1
0x673: Return(); Pop(0)

0x674: PushEmpty()
0x675: Push("k8q01") // @poff=340
0x676: Push((int) 3)
0x677: @ SetVariable(Stack[-2], Stack[-1])
0x678: Pop(2)
0x679: PushEmpty()
0x67a: Call2 0x689

0x67b: Pop(0)
0x67c: Return(); Pop(0)

0x67d: PushEmpty()
0x67e: PushEmpty(int, string)
0x67f: Stack[-1] = "k8q01" // @poff=340
0x680: Call2 0x63e

0x681: Pop(1)
0x682: Push((int) 2)
0x683: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x685: Stack[-2] = (bool) 1
0x686: Return(); Pop(0)

0x687: Stack[-2] = (bool) 0
0x688: Return(); Pop(0)

0x689: PushEmpty(object, object)
0x68a: Push((int) 441)
0x68b: Push((int) 1)
0x68c: Push((int) 526466)
0x68d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x68e: Pop(3)
0x68f: PushEmpty(bool, object, int)
0x690: Stack[-4] = Stack[-2]
0x691: Stack[-1] = (int) 438
0x692: Call2 0x6a3

0x693: Pop(3)
0x694: Return(); Pop(2)

0x695: Stack[-1] = 0
0x696: PushEmpty(object, object)
0x697: @ GetDiaryRoot(Stack[-1])
0x698: Pop(0)
0x699: Pop(0); Push((bool) Stack[-1] == 0)
0x69a: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69b: Push("Can't retrieve diary root") // @poff=352
0x69c: @ Trace(Stack[-1])
0x69d: Pop(1)
0x69e: Stack[-3] = (bool) 0
0x69f: Return(); Pop(2)

0x6a0: Stack[-1] = Stack[-3]
0x6a1: Return(); Pop(2)

0x6a2: Stack[-1] = 0
0x6a3: PushEmpty(object, object, int, object, object, int)
0x6a4: PushEmpty(object)
0x6a5: Call2 0x696

0x6a6: Stack[-1] = Stack[-4]
0x6a7: Pop(1)
0x6a8: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=404
0x6a9: Pop(0)
0x6aa: Pop(0); Push((bool) Stack[-2] == 0)
0x6ab: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6ac: Push("Can't find diary parent with id: ") // @poff=409
0x6ad: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6ae: @ Trace(Stack[-1])
0x6af: Pop(1)
0x6b0: Stack[-9] = (bool) 0
0x6b1: Return(); Pop(6)

0x6b2: @@ AddChild(Stack[-8]); Obj=2 // @poff=477
0x6b3: Pop(0)
0x6b4: Push((int) 7)
0x6b5: @ SendWorldWndMessage(Stack[-1])
0x6b6: Pop(1)
0x6b7: @@ GetCategory(Stack[-1]); Obj=8 // @poff=486
0x6b8: Pop(0)
0x6b9: @ SetDiarySection(Stack[-1])
0x6ba: Pop(0)
0x6bb: Stack[-9] = (bool) 0
0x6bc: Return(); Pop(6)

0x6bd: Stack[-2] = 0
0x6be: Stack[-3] = 0
0x6bf: PushEmpty(int, int)
0x6c0: Push("branch") // @poff=498
0x6c1: @ GetVariable(Stack[-1], Stack[-2])
0x6c2: Pop(1)
0x6c3: Push((int) 0)
0x6c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c6: Stack[-3] = (int) 1
0x6c7: Return(); Pop(2)

0x6c8: GOTO 0x6ce

0x6c9: Push((int) 1)
0x6ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-3] = (int) 2
0x6cd: Return(); Pop(2)

0x6ce: Stack[-3] = (int) 3
0x6cf: Return(); Pop(2)

0x6d0: PushEmpty(int, int)
0x6d1: Push("mt_spi4ka") // @poff=512
0x6d2: @ GetVariable(Stack[-1], Stack[-2])
0x6d3: Pop(1)
0x6d4: Pop(0); Push((bool) Stack[-1] == 0)
0x6d5: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6d6: PushEmpty(int, object)
0x6d7: Stack[-5] = Stack[-1]
0x6d8: Push(-2, 1); TaskCall(1)
0x6d9: Call2 0xd

0x6da: Pop(-2, 1); TaskReturn
0x6db: Pop(2)
0x6dc: Push("mt_spi4ka") // @poff=512
0x6dd: Push((int) 1)
0x6de: @ SetVariable(Stack[-2], Stack[-1])
0x6df: Pop(2)
0x6e0: PushEmpty(bool, int)
0x6e1: Stack[-1] = (int) 8
0x6e2: Call2 0x64c

0x6e3: Pop(1)
0x6e4: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e5: PushEmpty(int, object)
0x6e6: Stack[-5] = Stack[-1]
0x6e7: Push(-2, 1); TaskCall(3)
0x6e8: Call2 0x109

0x6e9: Pop(-2, 1); TaskReturn
0x6ea: Pop(2)
0x6eb: Return(); Pop(2)

0x6ec: PushEmpty(bool, int)
0x6ed: Stack[-1] = (int) 12
0x6ee: Call2 0x64c

0x6ef: Pop(1)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f1: PushEmpty(int, object)
0x6f2: Stack[-5] = Stack[-1]
0x6f3: Push(-2, 1); TaskCall(5)
0x6f4: Call2 0x238

0x6f5: Pop(-2, 1); TaskReturn
0x6f6: Pop(2)
0x6f7: Return(); Pop(2)

0x6f8: PushEmpty(int, object)
0x6f9: Stack[-5] = Stack[-1]
0x6fa: Push(-2, 1); TaskCall(7)
0x6fb: Call2 0x33b

0x6fc: Pop(-2, 1); TaskReturn
0x6fd: Pop(2)
0x6fe: Return(); Pop(2)

