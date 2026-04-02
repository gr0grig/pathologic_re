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
	W:k11q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Bakalavr.png
	W:ui/NPC_Bakalavr_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006b00310031007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f00420061006b0061006c006100760072002e0070006e0067000000750069002f004e00500043005f00420061006b0061006c006100760072005f0062002e0070006e0067000000
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x259
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x25d Vars = (string)
		EVENT_6 Op = 0x271 Vars = ()
		EVENT_5 Op = 0x27e Vars = ()
		EVENT_7 Op = 0x2cd Vars = (int)
		EVENT_45 Op = 0x30f Vars = (bool)
		EVENT_0 Op = 0x31b Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x39f

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
0x11: Call2 0x4a6

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x3f9

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x3a4

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x53a

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x538

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x53c

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x53e

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x527

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
0x55: Call2 0x3e8

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
0x63: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xa2

0x67: Pop(1)
0x68: Push((int) 527198)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x4e5

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 527199)
0x73: Push((int) 28789)
0x74: Push((int) 28507)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 527202)
0x78: Push((int) -1)
0x79: Push((int) 28510)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 527506)
0x7d: Push((int) -1)
0x7e: Push((int) 28838)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x62

0x84: PushEmpty(bool)
0x85: Call2 0x540

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x483

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all") // @poff=138
0x94: Push("idle") // @poff=146
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all") // @poff=138
0x9d: Push("idle") // @poff=146
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x540

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-3] = Stack[-2]
0xae: Push("") // @poff=102
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x48a

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x49f

0xbd: Pop(0)
0xbe: Push((int) 28833)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x4dc

0xc5: Pop(2)
0xc6: Push((int) 28836)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x4dc

0xcd: Pop(2)
0xce: Push((int) 28837)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x4dc

0xd5: Pop(2)
0xd6: Push((int) 28506)
0xd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xd9: PushEmpty(string)
0xda: Stack[-1] = "Neutral" // @poff=89
0xdb: Call2 0xa2

0xdc: Pop(1)
0xdd: Push((int) 527198)
0xde: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xdf: Pop(1)
0xe0: @@@ ClearReplies(); Obj=0 // @poff=116
0xe1: Pop(0)
0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x4e5

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: Push((int) 527199)
0xe8: Push((int) 28789)
0xe9: Push((int) 28507)
0xea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xeb: Pop(3)
0xec: Push((int) 527202)
0xed: Push((int) -1)
0xee: Push((int) 28510)
0xef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf0: Pop(3)
0xf1: Push((int) 527506)
0xf2: Push((int) -1)
0xf3: Push((int) 28838)
0xf4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 28789)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral" // @poff=89
0xfc: Call2 0xa2

0xfd: Pop(1)
0xfe: Push((int) 527465)
0xff: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x100: Pop(1)
0x101: @@@ ClearReplies(); Obj=0 // @poff=116
0x102: Pop(0)
0x103: Push((int) 527466)
0x104: Push((int) 28792)
0x105: Push((int) 28791)
0x106: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x107: Pop(3)
0x108: Push((int) 527468)
0x109: Push((int) 28792)
0x10a: Push((int) 28793)
0x10b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 28792)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x111: PushEmpty(string)
0x112: Stack[-1] = "Neutral" // @poff=89
0x113: Call2 0xa2

0x114: Pop(1)
0x115: Push((int) 527467)
0x116: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x117: Pop(1)
0x118: @@@ ClearReplies(); Obj=0 // @poff=116
0x119: Pop(0)
0x11a: Push((int) 527469)
0x11b: Push((int) 28796)
0x11c: Push((int) 28795)
0x11d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 28796)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral" // @poff=89
0x125: Call2 0xa2

0x126: Pop(1)
0x127: Push((int) 527470)
0x128: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x129: Pop(1)
0x12a: @@@ ClearReplies(); Obj=0 // @poff=116
0x12b: Pop(0)
0x12c: Push((int) 527477)
0x12d: Push((int) 28804)
0x12e: Push((int) 28803)
0x12f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x130: Pop(3)
0x131: Push((int) 527471)
0x132: Push((int) 28798)
0x133: Push((int) 28797)
0x134: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 28798)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral" // @poff=89
0x13c: Call2 0xa2

0x13d: Pop(1)
0x13e: Push((int) 527472)
0x13f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x140: Pop(1)
0x141: @@@ ClearReplies(); Obj=0 // @poff=116
0x142: Pop(0)
0x143: Push((int) 527473)
0x144: Push((int) 28800)
0x145: Push((int) 28799)
0x146: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Push((int) 28800)
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral" // @poff=89
0x14e: Call2 0xa2

0x14f: Pop(1)
0x150: Push((int) 527474)
0x151: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x152: Pop(1)
0x153: @@@ ClearReplies(); Obj=0 // @poff=116
0x154: Pop(0)
0x155: Push((int) 527475)
0x156: Push((int) 28802)
0x157: Push((int) 28801)
0x158: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: Push((int) 28802)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Neutral" // @poff=89
0x160: Call2 0xa2

0x161: Pop(1)
0x162: Push((int) 527476)
0x163: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x164: Pop(1)
0x165: @@@ ClearReplies(); Obj=0 // @poff=116
0x166: Pop(0)
0x167: Push((int) 527491)
0x168: Push((int) 28804)
0x169: Push((int) 28818)
0x16a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Push((int) 28804)
0x16e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x170: PushEmpty(string)
0x171: Stack[-1] = "Neutral" // @poff=89
0x172: Call2 0xa2

0x173: Pop(1)
0x174: Push((int) 527478)
0x175: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x176: Pop(1)
0x177: @@@ ClearReplies(); Obj=0 // @poff=116
0x178: Pop(0)
0x179: Push((int) 527479)
0x17a: Push((int) 28806)
0x17b: Push((int) 28805)
0x17c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17d: Pop(3)
0x17e: Push((int) 527493)
0x17f: Push((int) 28806)
0x180: Push((int) 28822)
0x181: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x182: Pop(3)
0x183: Return(); Pop(0)

0x184: Push((int) 28806)
0x185: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x187: PushEmpty(string)
0x188: Stack[-1] = "Neutral" // @poff=89
0x189: Call2 0xa2

0x18a: Pop(1)
0x18b: Push((int) 527480)
0x18c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18d: Pop(1)
0x18e: @@@ ClearReplies(); Obj=0 // @poff=116
0x18f: Pop(0)
0x190: Push((int) 527481)
0x191: Push((int) 28808)
0x192: Push((int) 28807)
0x193: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x194: Pop(3)
0x195: Push((int) 527494)
0x196: Push((int) 28808)
0x197: Push((int) 28824)
0x198: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x199: Pop(3)
0x19a: Return(); Pop(0)

0x19b: Push((int) 28808)
0x19c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x19e: PushEmpty(string)
0x19f: Stack[-1] = "Neutral" // @poff=89
0x1a0: Call2 0xa2

0x1a1: Pop(1)
0x1a2: Push((int) 527482)
0x1a3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a4: Pop(1)
0x1a5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a6: Pop(0)
0x1a7: Push((int) 527483)
0x1a8: Push((int) 28810)
0x1a9: Push((int) 28809)
0x1aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ab: Pop(3)
0x1ac: Push((int) 527492)
0x1ad: Push((int) 28810)
0x1ae: Push((int) 28820)
0x1af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 28810)
0x1b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Neutral" // @poff=89
0x1b7: Call2 0xa2

0x1b8: Pop(1)
0x1b9: Push((int) 527484)
0x1ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1bb: Pop(1)
0x1bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bd: Pop(0)
0x1be: Push((int) 527485)
0x1bf: Push((int) 28813)
0x1c0: Push((int) 28811)
0x1c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c2: Pop(3)
0x1c3: Push((int) 527486)
0x1c4: Push((int) 28813)
0x1c5: Push((int) 28812)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Return(); Pop(0)

0x1c9: Push((int) 28813)
0x1ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1cc: PushEmpty(string)
0x1cd: Stack[-1] = "Neutral" // @poff=89
0x1ce: Call2 0xa2

0x1cf: Pop(1)
0x1d0: Push((int) 527487)
0x1d1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d2: Pop(1)
0x1d3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d4: Pop(0)
0x1d5: Push((int) 527488)
0x1d6: Push((int) 28816)
0x1d7: Push((int) 28815)
0x1d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d9: Pop(3)
0x1da: Return(); Pop(0)

0x1db: Push((int) 28816)
0x1dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1de: PushEmpty(string)
0x1df: Stack[-1] = "Neutral" // @poff=89
0x1e0: Call2 0xa2

0x1e1: Pop(1)
0x1e2: Push((int) 527489)
0x1e3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e4: Pop(1)
0x1e5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e6: Pop(0)
0x1e7: Push((int) 527490)
0x1e8: Push((int) 28827)
0x1e9: Push((int) 28817)
0x1ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1eb: Pop(3)
0x1ec: Push((int) 527495)
0x1ed: Push((int) 28827)
0x1ee: Push((int) 28826)
0x1ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: Push((int) 28827)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Neutral" // @poff=89
0x1f7: Call2 0xa2

0x1f8: Pop(1)
0x1f9: Push((int) 527496)
0x1fa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fb: Pop(1)
0x1fc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1fd: Pop(0)
0x1fe: Push((int) 527497)
0x1ff: Push((int) 28829)
0x200: Push((int) 28828)
0x201: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: Push((int) 28829)
0x205: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x207: PushEmpty(string)
0x208: Stack[-1] = "Neutral" // @poff=89
0x209: Call2 0xa2

0x20a: Pop(1)
0x20b: Push((int) 527498)
0x20c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20d: Pop(1)
0x20e: @@@ ClearReplies(); Obj=0 // @poff=116
0x20f: Pop(0)
0x210: Push((int) 527499)
0x211: Push((int) 28832)
0x212: Push((int) 28831)
0x213: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Push((int) 28832)
0x217: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x219: PushEmpty(string)
0x21a: Stack[-1] = "Neutral" // @poff=89
0x21b: Call2 0xa2

0x21c: Pop(1)
0x21d: Push((int) 527500)
0x21e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21f: Pop(1)
0x220: @@@ ClearReplies(); Obj=0 // @poff=116
0x221: Pop(0)
0x222: Push((int) 527501)
0x223: Push((int) -1)
0x224: Push((int) 28833)
0x225: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x226: Pop(3)
0x227: Push((int) 527502)
0x228: Push((int) 28835)
0x229: Push((int) 28834)
0x22a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22b: Pop(3)
0x22c: Return(); Pop(0)

0x22d: Push((int) 28835)
0x22e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x230: PushEmpty(string)
0x231: Stack[-1] = "Neutral" // @poff=89
0x232: Call2 0xa2

0x233: Pop(1)
0x234: Push((int) 527503)
0x235: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x236: Pop(1)
0x237: @@@ ClearReplies(); Obj=0 // @poff=116
0x238: Pop(0)
0x239: Push((int) 527504)
0x23a: Push((int) -1)
0x23b: Push((int) 28836)
0x23c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23d: Pop(3)
0x23e: Push((int) 527505)
0x23f: Push((int) -1)
0x240: Push((int) 28837)
0x241: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x242: Pop(3)
0x243: Return(); Pop(0)

0x244: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x245: PushEmpty(bool)
0x246: Call2 0x540

0x247: Pop(0)
0x248: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x249: @ lshStopAnimation()
0x24a: Pop(0)
0x24b: GOTO 0x24e

0x24c: @ StopAnimation()
0x24d: Pop(0)
0x24e: Return(); Pop(0)

0x24f: GOTO 0xb9

0x250: Return(); Pop(0)

0x251: PushEmpty()
0x252: PushEmpty(int, object)
0x253: Stack[-3] = Stack[-1]
0x254: Push(-2, 1); TaskCall(1)
0x255: Call2 0xd

0x256: Pop(-2, 1); TaskReturn
0x257: Pop(2)
0x258: Return(); Pop(0)

0x259: PushEmpty()
0x25a: Call2 0x282

0x25b: Pop(0)
0x25c: Return(); Pop(0)

0x25d: PushEmpty(bool, bool)
0x25e: Push("cleanup") // @poff=156
0x25f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x261: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x262: @ IsLoaded(Stack[-1])
0x263: Pop(0)
0x264: Pop(0); Push((bool) Stack[-1] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x266: PushEmpty(object)
0x267: Call2 0x4a6

0x268: Pop(0)
0x269: @ RemoveActor(Stack[-1])
0x26a: Pop(1)
0x26b: GOTO 0x270

0x26c: Push("restore") // @poff=172
0x26d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x270: Return(); Pop(2)

0x271: Push( Stack[1 + Tasks[-1].StackPointer] )
0x272: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x273: PushEmpty(object)
0x274: Call2 0x4a6

0x275: Pop(0)
0x276: @ RemoveActor(Stack[-1])
0x277: Pop(1)
0x278: @ Hold()
0x279: Pop(0)
0x27a: PushEmpty()
0x27b: Call2 0x2f3

0x27c: Pop(0)
0x27d: Return(); Pop(0)

0x27e: PushEmpty()
0x27f: Call2 0x302

0x280: Pop(0)
0x281: Return(); Pop(0)

0x282: PushEmpty(bool)
0x283: Call2 0x39f

0x284: Pop(0)
0x285: Pop(1); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: PushEmpty()
0x288: Push(-0, 0); TaskCall(0)
0x289: Call2 0x0

0x28a: Pop(-0, 0); TaskReturn
0x28b: Pop(0)
0x28c: PushEmpty()
0x28d: Call2 0x27e

0x28e: Pop(0)
0x28f: @ GetDirection(Stack[-0]T)
0x290: Pop(0)
0x291: PushEmpty()
0x292: Call2 0x338

0x293: Pop(0)
0x294: GOTO 0x291

0x295: Return(); Pop(0)

0x296: PushEmpty(object, object)
0x297: Push("player") // @poff=188
0x298: @ FindActor(Stack[-2], Stack[-1])
0x299: Pop(1)
0x29a: Pop(0); Push((bool) Stack[-1] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29c: Stack[-3] = (bool) 0
0x29d: Return(); Pop(2)

0x29e: PushEmpty(bool, object)
0x29f: Stack[-3] = Stack[-1]
0x2a0: Call2 0x396

0x2a1: Stack[-2] = Stack[-5]
0x2a2: Pop(2)
0x2a3: Return(); Pop(2)

0x2a4: Stack[-1] = 0
0x2a5: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x2a6: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x2a7: @ RotateAsync(Stack[-2], Stack[-1])
0x2a8: Pop(2)
0x2a9: Return(); Pop(0)

0x2aa: PushEmpty(object, bool, object, bool)
0x2ab: Push("player") // @poff=188
0x2ac: @ FindActor(Stack[-3], Stack[-1])
0x2ad: Pop(1)
0x2ae: Pop(0); Push((bool) Stack[-2] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b0: Stack[-5] = (bool) 0
0x2b1: Return(); Pop(4)

0x2b2: PushEmpty(float, object)
0x2b3: Stack[-4] = Stack[-1]
0x2b4: Call2 0x384

0x2b5: Pop(1)
0x2b6: Push((float)90000.0)
0x2b7: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: Stack[-5] = (bool) 0
0x2ba: Return(); Pop(4)

0x2bb: @ CanSee(Stack[-1], Stack[-2])
0x2bc: Pop(0)
0x2bd: Stack[-1] = Stack[-5]
0x2be: Return(); Pop(4)

0x2bf: Stack[-2] = 0
0x2c0: PushEmpty(float, float)
0x2c1: Push((int) 8)
0x2c2: Push((int) 16)
0x2c3: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2c4: Pop(2)
0x2c5: Push((int) 10)
0x2c6: @ SetTimer(Stack[-1], Stack[-2])
0x2c7: Pop(1)
0x2c8: Return(); Pop(2)

0x2c9: Push((int) 10)
0x2ca: @ KillTimer(Stack[-1])
0x2cb: Pop(1)
0x2cc: Return(); Pop(0)

0x2cd: PushEmpty()
0x2ce: Push((int) 10)
0x2cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2d1: PushEmpty()
0x2d2: Call2 0x2c9

0x2d3: Pop(0)
0x2d4: PushEmpty(bool)
0x2d5: Stack[-1] = (bool) 0
0x2d6: PushEmpty(bool)
0x2d7: Call2 0x39f

0x2d8: Pop(0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2da: PushEmpty(bool)
0x2db: Call2 0x2aa

0x2dc: Pop(0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2de: Stack[-1] = (bool) 1
0x2df: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e0: PushEmpty(bool)
0x2e1: Call2 0x296

0x2e2: Pop(0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e4: PushEmpty(bool, object)
0x2e5: PushEmpty(object)
0x2e6: Call2 0x4a6

0x2e7: Stack[-1] = Stack[-2]
0x2e8: Pop(1)
0x2e9: Call2 0x433

0x2ea: Pop(2)
0x2eb: GOTO 0x2f2

0x2ec: PushEmpty()
0x2ed: Call2 0x2a5

0x2ee: Pop(0)
0x2ef: PushEmpty()
0x2f0: Call2 0x2c0

0x2f1: Pop(0)
0x2f2: Return(); Pop(0)

0x2f3: PushEmpty()
0x2f4: Call2 0x37f

0x2f5: Pop(0)
0x2f6: PushEmpty()
0x2f7: Call2 0x2c9

0x2f8: Pop(0)
0x2f9: @ lshStopSpeech()
0x2fa: Pop(0)
0x2fb: @ lshStopAnimation()
0x2fc: Pop(0)
0x2fd: @ StopAsync()
0x2fe: Pop(0)
0x2ff: @ Hold()
0x300: Pop(0)
0x301: Return(); Pop(0)

0x302: @ StopGroup0()
0x303: Pop(0)
0x304: PushEmpty()
0x305: Call2 0x2c9

0x306: Pop(0)
0x307: PushEmpty(string)
0x308: Stack[-1] = "Neutral" // @poff=89
0x309: Call2 0x483

0x30a: Pop(1)
0x30b: PushEmpty()
0x30c: Call2 0x2c0

0x30d: Pop(0)
0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: Push(Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x312: PushEmpty()
0x313: Call2 0x2c0

0x314: Pop(0)
0x315: GOTO 0x31a

0x316: PushEmpty(string)
0x317: Stack[-1] = "Neutral" // @poff=89
0x318: Call2 0x483

0x319: Pop(1)
0x31a: Return(); Pop(0)

0x31b: PushEmpty(bool, bool)
0x31c: @ IsOverrideActive(Stack[-1])
0x31d: Pop(0)
0x31e: Pop(0); Push((bool) Stack[-1] == 0)
0x31f: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x320: EventDisable(0)
0x321: PushEmpty()
0x322: Call2 0x37f

0x323: Pop(0)
0x324: PushEmpty(bool, object)
0x325: Stack[-5] = Stack[-1]
0x326: Call2 0x396

0x327: Pop(2)
0x328: EventEnable(0)
0x329: PushEmpty(object)
0x32a: Stack[-4] = Stack[-1]
0x32b: Call2 0x251

0x32c: Pop(1)
0x32d: PushEmpty(string)
0x32e: Stack[-1] = "Neutral" // @poff=89
0x32f: Call2 0x483

0x330: Pop(1)
0x331: PushEmpty()
0x332: Call2 0x2c9

0x333: Pop(0)
0x334: PushEmpty()
0x335: Call2 0x2c0

0x336: Pop(0)
0x337: Return(); Pop(2)

0x338: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x339: @ WaitForAnimEnd()
0x33a: Pop(0)
0x33b: PushEmpty(bool)
0x33c: Call2 0x39f

0x33d: Pop(0)
0x33e: Pop(1); Push((bool) Stack[-1] == 0)
0x33f: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x340: Return(); Pop(12)

0x341: PushEmpty(int)
0x342: Call2 0x4cb

0x343: Stack[-1] = Stack[-7]
0x344: Pop(1)
0x345: Stack[-5] = (int) 0
0x346: PushEmpty(bool)
0x347: Stack[-1] = (bool) 0
0x348: Push((int) 5)
0x349: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34b: PushEmpty(bool)
0x34c: Call2 0x39f

0x34d: Pop(0)
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: Stack[-1] = (bool) 1
0x350: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x351: Pop(0); Push((bool) Stack[-6] == 0)
0x352: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x353: Push((int) 3)
0x354: @ Sleep(Stack[-1], Stack[-5])
0x355: Pop(1)
0x356: Pop(0); Push((bool) Stack[-4] == 0)
0x357: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x358: GOTO 0x37a

0x359: GOTO 0x36f

0x35a: @ irand(Stack[-3], Stack[-6])
0x35b: Pop(0)
0x35c: Push((int) 5)
0x35d: @ irand(Stack[-3], Stack[-1])
0x35e: Pop(1)
0x35f: Push((int) 0)
0x360: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x362: Stack[-3] = (int) 0
0x363: Push("all") // @poff=138
0x364: PushEmpty(string, int)
0x365: Stack[-6] = Stack[-1]
0x366: Call2 0x4c4

0x367: Pop(1)
0x368: @ PlayAnimation(Stack[-2], Stack[-1])
0x369: Pop(2)
0x36a: @ WaitForAnimEnd(Stack[-1])
0x36b: Pop(0)
0x36c: Pop(0); Push((bool) Stack[-1] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: GOTO 0x37a

0x36f: PushEmpty(bool)
0x370: Call2 0x37d

0x371: Pop(0)
0x372: Pop(1); Push((bool) Stack[-1] == 0)
0x373: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x374: GOTO 0x37a

0x375: @ ResetAAS()
0x376: Pop(0)
0x377: Push((int) 1)
0x378: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x379: GOTO 0x346

0x37a: @ ResetAAS()
0x37b: Pop(0)
0x37c: Return(); Pop(12)

0x37d: Stack[-1] = (bool) 1
0x37e: Return(); Pop(0)

0x37f: @ StopAnimation()
0x380: Pop(0)
0x381: @ StopGroup0()
0x382: Pop(0)
0x383: Return(); Pop(0)

0x384: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x385: @ GetPosition(Stack[-3])
0x386: Pop(0)
0x387: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x388: Pop(0)
0x389: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x38a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x38b: Return(); Pop(6)

0x38c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x38d: @ GetPosition(Stack[-3])
0x38e: Pop(0)
0x38f: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x390: Push(CvectorIndex(Stack[-2], 0))
0x391: Push(CvectorIndex(Stack[-3], 2))
0x392: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x393: Pop(2)
0x394: Stack[-1] = Stack[-8]
0x395: Return(); Pop(6)

0x396: PushEmpty(cvector, cvector)
0x397: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x398: Pop(0)
0x399: PushEmpty(bool, cvector)
0x39a: Stack[-3] = Stack[-1]
0x39b: Call2 0x38c

0x39c: Stack[-2] = Stack[-6]
0x39d: Pop(2)
0x39e: Return(); Pop(2)

0x39f: PushEmpty(bool, bool)
0x3a0: @ IsLoaded(Stack[-1])
0x3a1: Pop(0)
0x3a2: Stack[-1] = Stack[-3]
0x3a3: Return(); Pop(2)

0x3a4: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3a5: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x3a6: Pop(0)
0x3a7: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x3a8: Pop(0)
0x3a9: Push(CvectorIndex(Stack[-8], 1))
0x3aa: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ab: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3ac: @ GetPosition(Stack[-7])
0x3ad: Pop(0)
0x3ae: @ GetEyesHeight(Stack[-9])
0x3af: Pop(0)
0x3b0: Push(CvectorIndex(Stack[-7], 1))
0x3b1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3b2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3b3: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3b4: Push(CvectorIndex(Stack[-6], 1))
0x3b5: Stack[-1] = (int) 0
0x3b6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3b7: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3b8: Pop(1); Push(Sqrt(Stack[-1]))
0x3b9: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3ba: Stack[-5] = -Stack[-6]; Pop(0);
0x3bb: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3bc: PushEmpty(cvector, cvector)
0x3bd: Push([0.0, 1.0, 0.0])
0x3be: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3bf: Call2 0x4ac

0x3c0: Pop(1)
0x3c1: Push((int) 25)
0x3c2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c4: Push([0.0, 10.0, 0.0])
0x3c5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3c6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3c7: @ IsOverrideActive(Stack[-2])
0x3c8: Pop(0)
0x3c9: Push(Stack[-2])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cb: Stack[-21] = (bool) 0
0x3cc: Return(); Pop(18)

0x3cd: @ StopWorld()
0x3ce: Pop(0)
0x3cf: @ CameraTransit(Stack[-3], Stack[-5])
0x3d0: Pop(0)
0x3d1: Push(CvectorIndex(Stack[-4], 0))
0x3d2: Push(CvectorIndex(Stack[-5], 2))
0x3d3: @ Rotate(Stack[-2], Stack[-1])
0x3d4: Pop(2)
0x3d5: PushEmpty(bool)
0x3d6: Call2 0x540

0x3d7: Pop(0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: GOTO 0x3e2

0x3da: Push("head") // @poff=228
0x3db: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3dc: Pop(1)
0x3dd: Push(Stack[-1])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3df: Push("head") // @poff=228
0x3e0: @ LookAsyncCamera(Stack[-1])
0x3e1: Pop(1)
0x3e2: @ CameraWaitForPlayFinish()
0x3e3: Pop(0)
0x3e4: @ ResumeWorld()
0x3e5: Pop(0)
0x3e6: Stack[-21] = (bool) 1
0x3e7: Return(); Pop(18)

0x3e8: PushEmpty(bool, bool)
0x3e9: @ CameraSwitchToNormal()
0x3ea: Pop(0)
0x3eb: PushEmpty(bool)
0x3ec: Call2 0x540

0x3ed: Pop(0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ef: GOTO 0x3f8

0x3f0: Push("head") // @poff=228
0x3f1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3f2: Pop(1)
0x3f3: Push(Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f5: Push("head") // @poff=228
0x3f6: @ UnlookAsync(Stack[-1])
0x3f7: Pop(1)
0x3f8: Return(); Pop(2)

0x3f9: PushEmpty(int, int, int, int)
0x3fa: Push("voice_common") // @poff=238
0x3fb: @ GetVariable(Stack[-1], Stack[-3])
0x3fc: Pop(1)
0x3fd: Push(Stack[-2])
0x3fe: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x3ff: PushEmpty(bool, object)
0x400: Stack[-7] = Stack[-1]
0x401: Call2 0x433

0x402: Pop(1)
0x403: Pop(1); Push((bool) Stack[-1] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x405: PushEmpty(bool, object)
0x406: Stack[-7] = Stack[-1]
0x407: Call2 0x458

0x408: Pop(1)
0x409: Pop(1); Push((bool) Stack[-1] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-6] = (bool) 0
0x40c: Return(); Pop(4)

0x40d: Push((int) 2)
0x40e: @ irand(Stack[-2], Stack[-1])
0x40f: Pop(1)
0x410: Push(Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x412: Push("voice_common") // @poff=238
0x413: Push((int) 1)
0x414: Pop(1); Push(Stack[-4] + Stack[-1]);
0x415: Push((int) 3)
0x416: Pop(2); Push(Stack[-2] % Stack[-1]);
0x417: @ SetVariable(Stack[-2], Stack[-1])
0x418: Pop(2)
0x419: GOTO 0x41e

0x41a: Push("voice_common") // @poff=238
0x41b: Push((int) 0)
0x41c: @ SetVariable(Stack[-2], Stack[-1])
0x41d: Pop(2)
0x41e: GOTO 0x431

0x41f: PushEmpty(bool, object)
0x420: Stack[-7] = Stack[-1]
0x421: Call2 0x458

0x422: Pop(1)
0x423: Pop(1); Push((bool) Stack[-1] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x425: PushEmpty(bool, object)
0x426: Stack[-7] = Stack[-1]
0x427: Call2 0x433

0x428: Pop(1)
0x429: Pop(1); Push((bool) Stack[-1] == 0)
0x42a: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42b: Stack[-6] = (bool) 0
0x42c: Return(); Pop(4)

0x42d: Push("voice_common") // @poff=238
0x42e: Push((int) 1)
0x42f: @ SetVariable(Stack[-2], Stack[-1])
0x430: Pop(2)
0x431: Stack[-6] = (bool) 1
0x432: Return(); Pop(4)

0x433: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x434: Stack[-5] = "c" // @poff=264
0x435: Stack[-4] = (int) 0
0x436: Push((int) 1)
0x437: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x438: Push((int) 1)
0x439: Pop(1); Push(Stack[-5] + Stack[-1]);
0x43a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x43b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x43c: Pop(1)
0x43d: Pop(0); Push((bool) Stack[-3] == 0)
0x43e: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43f: GOTO 0x443

0x440: Push((int) 1)
0x441: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x442: GOTO 0x436

0x443: Pop(0); Push((bool) Stack[-4] == 0)
0x444: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x445: Stack[-12] = (bool) 0
0x446: Return(); Pop(10)

0x447: Stack[-2] = (int) 0
0x448: Push((int) 1)
0x449: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44b: @ irand(Stack[-2], Stack[-4])
0x44c: Pop(0)
0x44d: Push((int) 1)
0x44e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x44f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x450: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x451: Pop(1)
0x452: PushEmpty(bool, string)
0x453: Stack[-3] = Stack[-1]
0x454: Call2 0x490

0x455: Stack[-2] = Stack[-14]
0x456: Pop(2)
0x457: Return(); Pop(10)

0x458: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x459: Push("d") // @poff=234
0x45a: PushEmpty(int)
0x45b: Call2 0x4bb

0x45c: Pop(0)
0x45d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x45e: Push("m") // @poff=292
0x45f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x460: Stack[-4] = (int) 0
0x461: Push((int) 1)
0x462: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x463: Push((int) 1)
0x464: Pop(1); Push(Stack[-5] + Stack[-1]);
0x465: Pop(1); Push(Stack[-6] + Stack[-1]);
0x466: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x467: Pop(1)
0x468: Pop(0); Push((bool) Stack[-3] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x46a: GOTO 0x46e

0x46b: Push((int) 1)
0x46c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x46d: GOTO 0x461

0x46e: Pop(0); Push((bool) Stack[-4] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: Stack[-12] = (bool) 0
0x471: Return(); Pop(10)

0x472: Stack[-2] = (int) 0
0x473: Push((int) 1)
0x474: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x476: @ irand(Stack[-2], Stack[-4])
0x477: Pop(0)
0x478: Push((int) 1)
0x479: Pop(1); Push(Stack[-3] + Stack[-1]);
0x47a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x47b: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x47c: Pop(1)
0x47d: PushEmpty(bool, string)
0x47e: Stack[-3] = Stack[-1]
0x47f: Call2 0x490

0x480: Stack[-2] = Stack[-14]
0x481: Pop(2)
0x482: Return(); Pop(10)

0x483: PushEmpty(float, float, float, float)
0x484: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x485: Pop(0)
0x486: Push((bool) 0)
0x487: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(1)
0x489: Return(); Pop(4)

0x48a: PushEmpty(float, float, float, float)
0x48b: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x48c: Pop(0)
0x48d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x48e: Pop(0)
0x48f: Return(); Pop(4)

0x490: PushEmpty(bool, bool)
0x491: PushEmpty(bool)
0x492: Call2 0x540

0x493: Pop(0)
0x494: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x495: @ lshHasSpeech(Stack[-1], Stack[-3])
0x496: Pop(0)
0x497: Push(Stack[-1])
0x498: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x499: @ lshPlaySpeech(Stack[-3])
0x49a: Pop(0)
0x49b: Stack[-4] = (bool) 1
0x49c: Return(); Pop(2)

0x49d: Stack[-4] = (bool) 0
0x49e: Return(); Pop(2)

0x49f: PushEmpty(bool)
0x4a0: Call2 0x540

0x4a1: Pop(0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a3: @ lshStopSpeech()
0x4a4: Pop(0)
0x4a5: Return(); Pop(0)

0x4a6: PushEmpty(object, object)
0x4a7: @ self(Stack[-1])
0x4a8: Pop(0)
0x4a9: Stack[-1] = Stack[-3]
0x4aa: Return(); Pop(2)

0x4ab: Stack[-1] = 0
0x4ac: PushEmpty(float, float)
0x4ad: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4ae: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4af: Push((float)9.999999974752427e-07)
0x4b0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b2: Stack[-4] = [0.0, 0.0, 0.0]
0x4b3: Return(); Pop(2)

0x4b4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4b5: Return(); Pop(2)

0x4b6: PushEmpty(int, int)
0x4b7: @ GetVariable(Stack[-3], Stack[-1])
0x4b8: Pop(0)
0x4b9: Stack[-1] = Stack[-4]
0x4ba: Return(); Pop(2)

0x4bb: PushEmpty(float, float)
0x4bc: @ GetGameTime(Stack[-1])
0x4bd: Pop(0)
0x4be: Push((int) 1)
0x4bf: PushEmpty(int)
0x4c0: Push((int) 24)
0x4c1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4c2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4c3: Return(); Pop(2)

0x4c4: PushEmpty(string, string)
0x4c5: Stack[-1] = "idle" // @poff=146
0x4c6: Push(Stack[-3])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4c9: Stack[-1] = Stack[-4]
0x4ca: Return(); Pop(2)

0x4cb: PushEmpty(int, bool, int, bool)
0x4cc: Stack[-2] = (int) 0
0x4cd: Push("all") // @poff=138
0x4ce: PushEmpty(string, int)
0x4cf: Stack[-5] = Stack[-1]
0x4d0: Call2 0x4c4

0x4d1: Pop(1)
0x4d2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4d3: Pop(2)
0x4d4: Pop(0); Push((bool) Stack[-1] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: GOTO 0x4da

0x4d7: Push((int) 1)
0x4d8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4d9: GOTO 0x4cd

0x4da: Stack[-2] = Stack[-5]
0x4db: Return(); Pop(4)

0x4dc: PushEmpty()
0x4dd: Push("k11q01") // @poff=296
0x4de: Push((int) 4)
0x4df: @ SetVariable(Stack[-2], Stack[-1])
0x4e0: Pop(2)
0x4e1: PushEmpty()
0x4e2: Call2 0x4f1

0x4e3: Pop(0)
0x4e4: Return(); Pop(0)

0x4e5: PushEmpty()
0x4e6: PushEmpty(int, string)
0x4e7: Stack[-1] = "k11q01" // @poff=296
0x4e8: Call2 0x4b6

0x4e9: Pop(1)
0x4ea: Push((int) 3)
0x4eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ed: Stack[-2] = (bool) 1
0x4ee: Return(); Pop(0)

0x4ef: Stack[-2] = (bool) 0
0x4f0: Return(); Pop(0)

0x4f1: PushEmpty(object, object)
0x4f2: Push((int) 487)
0x4f3: Push((int) 1)
0x4f4: Push((int) 528054)
0x4f5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4f6: Pop(3)
0x4f7: PushEmpty(bool, object, int)
0x4f8: Stack[-4] = Stack[-2]
0x4f9: Stack[-1] = (int) 480
0x4fa: Call2 0x50b

0x4fb: Pop(3)
0x4fc: Return(); Pop(2)

0x4fd: Stack[-1] = 0
0x4fe: PushEmpty(object, object)
0x4ff: @ GetDiaryRoot(Stack[-1])
0x500: Pop(0)
0x501: Pop(0); Push((bool) Stack[-1] == 0)
0x502: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x503: Push("Can't retrieve diary root") // @poff=310
0x504: @ Trace(Stack[-1])
0x505: Pop(1)
0x506: Stack[-3] = (bool) 0
0x507: Return(); Pop(2)

0x508: Stack[-1] = Stack[-3]
0x509: Return(); Pop(2)

0x50a: Stack[-1] = 0
0x50b: PushEmpty(object, object, int, object, object, int)
0x50c: PushEmpty(object)
0x50d: Call2 0x4fe

0x50e: Stack[-1] = Stack[-4]
0x50f: Pop(1)
0x510: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=362
0x511: Pop(0)
0x512: Pop(0); Push((bool) Stack[-2] == 0)
0x513: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x514: Push("Can't find diary parent with id: ") // @poff=367
0x515: Pop(1); Push(Stack[-1] + Stack[-8]);
0x516: @ Trace(Stack[-1])
0x517: Pop(1)
0x518: Stack[-9] = (bool) 0
0x519: Return(); Pop(6)

0x51a: @@ AddChild(Stack[-8]); Obj=2 // @poff=435
0x51b: Pop(0)
0x51c: Push((int) 7)
0x51d: @ SendWorldWndMessage(Stack[-1])
0x51e: Pop(1)
0x51f: @@ GetCategory(Stack[-1]); Obj=8 // @poff=444
0x520: Pop(0)
0x521: @ SetDiarySection(Stack[-1])
0x522: Pop(0)
0x523: Stack[-9] = (bool) 0
0x524: Return(); Pop(6)

0x525: Stack[-2] = 0
0x526: Stack[-3] = 0
0x527: PushEmpty(int, int)
0x528: Push("branch") // @poff=456
0x529: @ GetVariable(Stack[-1], Stack[-2])
0x52a: Pop(1)
0x52b: Push((int) 0)
0x52c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52e: Stack[-3] = (int) 1
0x52f: Return(); Pop(2)

0x530: GOTO 0x536

0x531: Push((int) 1)
0x532: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x533: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x534: Stack[-3] = (int) 2
0x535: Return(); Pop(2)

0x536: Stack[-3] = (int) 3
0x537: Return(); Pop(2)

0x538: Stack[-1] = (int) 515573
0x539: Return(); Pop(0)

0x53a: Stack[-1] = (int) 504032
0x53b: Return(); Pop(0)

0x53c: Stack[-1] = "ui/NPC_Bakalavr.png" // @poff=470
0x53d: Return(); Pop(0)

0x53e: Stack[-1] = "ui/NPC_Bakalavr_b.png" // @poff=510
0x53f: Return(); Pop(0)

0x540: Stack[-1] = (bool) 1
0x541: Return(); Pop(0)

