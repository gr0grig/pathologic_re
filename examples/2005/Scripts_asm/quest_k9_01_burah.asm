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
	W:ook9BurahTermitnik2_1
	W:k9q01BurahTalk
	W:k9q01DankoTalk
	W:k9q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f006b003900420075007200610068005400650072006d00690074006e0069006b0032005f00310000006b00390071003000310042007500720061006800540061006c006b0000006b003900710030003100440061006e006b006f00540061006c006b0000006b0039007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e0067000000
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

RunOp = 0x1ad
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbc Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1b1 Vars = (string)
		EVENT_6 Op = 0x1c5 Vars = ()
		EVENT_5 Op = 0x1d2 Vars = ()
		EVENT_7 Op = 0x221 Vars = (int)
		EVENT_45 Op = 0x263 Vars = (bool)
		EVENT_0 Op = 0x26f Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2f3

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
0x11: Call2 0x3fa

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x34d

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2f8

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x4b8

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x4b6

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x4ba

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x4bc

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x4a5

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
0x55: Call2 0x33c

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
0x63: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xa6

0x67: Pop(1)
0x68: Push((int) 526499)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool)
0x6e: Stack[-1] = (bool) 0
0x6f: PushEmpty(bool, object)
0x70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71: Call2 0x457

0x72: Pop(1)
0x73: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x463

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 1
0x7a: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7b: Push((int) 526501)
0x7c: Push((int) 27768)
0x7d: Push((int) 27767)
0x7e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7f: Pop(3)
0x80: Push((int) 526500)
0x81: Push((int) -1)
0x82: Push((int) 27766)
0x83: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x84: Pop(3)
0x85: GOTO 0x88

0x86: Return(); Pop(0)

0x87: GOTO 0x62

0x88: PushEmpty(bool)
0x89: Call2 0x4be

0x8a: Pop(0)
0x8b: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x8c: @ lshWaitForAnimEnd()
0x8d: Pop(0)
0x8e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: GOTO 0x96

0x91: PushEmpty(string)
0x92: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x93: Call2 0x3d7

0x94: Pop(1)
0x95: GOTO 0x8c

0x96: GOTO 0xa5

0x97: Push("all") // @poff=138
0x98: Push("idle") // @poff=146
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: @ WaitForAnimEnd()
0x9c: Pop(0)
0x9d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: GOTO 0xa5

0xa0: Push("all") // @poff=138
0xa1: Push("idle") // @poff=146
0xa2: @ PlayAnimation(Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: GOTO 0x9b

0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: PushEmpty(bool)
0xa8: Call2 0x4be

0xa9: Pop(0)
0xaa: Pop(1); Push((bool) Stack[-1] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Return(); Pop(0)

0xad: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: PushEmpty(string, bool)
0xb1: Stack[-3] = Stack[-2]
0xb2: Push("") // @poff=102
0xb3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb5: Stack[-1] = (bool) 0
0xb6: GOTO 0xb8

0xb7: Stack[-1] = (bool) 1
0xb8: Call2 0x3de

0xb9: Pop(2)
0xba: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: Push((int) 1)
0xbe: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0xbf: PushEmpty()
0xc0: Call2 0x3f3

0xc1: Pop(0)
0xc2: Push((int) 27767)
0xc3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc5: PushEmpty(object, object)
0xc6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc8: Call2 0x430

0xc9: Pop(2)
0xca: PushEmpty(object, object)
0xcb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd: Call2 0x436

0xce: Pop(2)
0xcf: PushEmpty(object, object)
0xd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call2 0x43c

0xd3: Pop(2)
0xd4: Push((int) 27765)
0xd5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xd7: PushEmpty(string)
0xd8: Stack[-1] = "Neutral" // @poff=89
0xd9: Call2 0xa6

0xda: Pop(1)
0xdb: Push((int) 526499)
0xdc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xdd: Pop(1)
0xde: @@@ ClearReplies(); Obj=0 // @poff=116
0xdf: Pop(0)
0xe0: PushEmpty(bool)
0xe1: Stack[-1] = (bool) 0
0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x457

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe7: PushEmpty(bool, object)
0xe8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Call2 0x463

0xea: Pop(1)
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Stack[-1] = (bool) 1
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: Push((int) 526501)
0xef: Push((int) 27768)
0xf0: Push((int) 27767)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: Push((int) 526500)
0xf4: Push((int) -1)
0xf5: Push((int) 27766)
0xf6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 27768)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral" // @poff=89
0xfe: Call2 0xa6

0xff: Pop(1)
0x100: Push((int) 526502)
0x101: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x102: Pop(1)
0x103: @@@ ClearReplies(); Obj=0 // @poff=116
0x104: Pop(0)
0x105: Push((int) 526503)
0x106: Push((int) 30235)
0x107: Push((int) 27769)
0x108: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x109: Pop(3)
0x10a: Push((int) 528825)
0x10b: Push((int) 30242)
0x10c: Push((int) 30241)
0x10d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Push((int) 30242)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x113: PushEmpty(string)
0x114: Stack[-1] = "Neutral" // @poff=89
0x115: Call2 0xa6

0x116: Pop(1)
0x117: Push((int) 528826)
0x118: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x119: Pop(1)
0x11a: @@@ ClearReplies(); Obj=0 // @poff=116
0x11b: Pop(0)
0x11c: Push((int) 528827)
0x11d: Push((int) 30235)
0x11e: Push((int) 30243)
0x11f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: Push((int) 30235)
0x123: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x125: PushEmpty(string)
0x126: Stack[-1] = "Neutral" // @poff=89
0x127: Call2 0xa6

0x128: Pop(1)
0x129: Push((int) 528819)
0x12a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12b: Pop(1)
0x12c: @@@ ClearReplies(); Obj=0 // @poff=116
0x12d: Pop(0)
0x12e: Push((int) 528820)
0x12f: Push((int) 30246)
0x130: Push((int) 30236)
0x131: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x132: Pop(3)
0x133: Push((int) 528828)
0x134: Push((int) 30246)
0x135: Push((int) 30245)
0x136: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x137: Pop(3)
0x138: Return(); Pop(0)

0x139: Push((int) 30246)
0x13a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Neutral" // @poff=89
0x13e: Call2 0xa6

0x13f: Pop(1)
0x140: Push((int) 528829)
0x141: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x142: Pop(1)
0x143: @@@ ClearReplies(); Obj=0 // @poff=116
0x144: Pop(0)
0x145: Push((int) 528830)
0x146: Push((int) 30248)
0x147: Push((int) 30247)
0x148: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x149: Pop(3)
0x14a: Push((int) 528833)
0x14b: Push((int) 30252)
0x14c: Push((int) 30251)
0x14d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Push((int) 30252)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral" // @poff=89
0x155: Call2 0xa6

0x156: Pop(1)
0x157: Push((int) 528834)
0x158: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x159: Pop(1)
0x15a: @@@ ClearReplies(); Obj=0 // @poff=116
0x15b: Pop(0)
0x15c: Push((int) 528835)
0x15d: Push((int) -1)
0x15e: Push((int) 30253)
0x15f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 30248)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral" // @poff=89
0x167: Call2 0xa6

0x168: Pop(1)
0x169: Push((int) 528831)
0x16a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16b: Pop(1)
0x16c: @@@ ClearReplies(); Obj=0 // @poff=116
0x16d: Pop(0)
0x16e: Push((int) 528832)
0x16f: Push((int) 30237)
0x170: Push((int) 30249)
0x171: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 30237)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral" // @poff=89
0x179: Call2 0xa6

0x17a: Pop(1)
0x17b: Push((int) 528821)
0x17c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17d: Pop(1)
0x17e: @@@ ClearReplies(); Obj=0 // @poff=116
0x17f: Pop(0)
0x180: Push((int) 528822)
0x181: Push((int) 30239)
0x182: Push((int) 30238)
0x183: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 30239)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Neutral" // @poff=89
0x18b: Call2 0xa6

0x18c: Pop(1)
0x18d: Push((int) 528823)
0x18e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18f: Pop(1)
0x190: @@@ ClearReplies(); Obj=0 // @poff=116
0x191: Pop(0)
0x192: Push((int) 528824)
0x193: Push((int) -1)
0x194: Push((int) 30240)
0x195: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x199: PushEmpty(bool)
0x19a: Call2 0x4be

0x19b: Pop(0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19d: @ lshStopAnimation()
0x19e: Pop(0)
0x19f: GOTO 0x1a2

0x1a0: @ StopAnimation()
0x1a1: Pop(0)
0x1a2: Return(); Pop(0)

0x1a3: GOTO 0xbd

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty()
0x1a6: PushEmpty(int, object)
0x1a7: Stack[-3] = Stack[-1]
0x1a8: Push(-2, 1); TaskCall(1)
0x1a9: Call2 0xd

0x1aa: Pop(-2, 1); TaskReturn
0x1ab: Pop(2)
0x1ac: Return(); Pop(0)

0x1ad: PushEmpty()
0x1ae: Call2 0x1d6

0x1af: Pop(0)
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty(bool, bool)
0x1b2: Push("cleanup") // @poff=156
0x1b3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b5: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1b6: @ IsLoaded(Stack[-1])
0x1b7: Pop(0)
0x1b8: Pop(0); Push((bool) Stack[-1] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: PushEmpty(object)
0x1bb: Call2 0x3fa

0x1bc: Pop(0)
0x1bd: @ RemoveActor(Stack[-1])
0x1be: Pop(1)
0x1bf: GOTO 0x1c4

0x1c0: Push("restore") // @poff=172
0x1c1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1c4: Return(); Pop(2)

0x1c5: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1c6: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c7: PushEmpty(object)
0x1c8: Call2 0x3fa

0x1c9: Pop(0)
0x1ca: @ RemoveActor(Stack[-1])
0x1cb: Pop(1)
0x1cc: @ Hold()
0x1cd: Pop(0)
0x1ce: PushEmpty()
0x1cf: Call2 0x247

0x1d0: Pop(0)
0x1d1: Return(); Pop(0)

0x1d2: PushEmpty()
0x1d3: Call2 0x256

0x1d4: Pop(0)
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty(bool)
0x1d7: Call2 0x2f3

0x1d8: Pop(0)
0x1d9: Pop(1); Push((bool) Stack[-1] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1db: PushEmpty()
0x1dc: Push(-0, 0); TaskCall(0)
0x1dd: Call2 0x0

0x1de: Pop(-0, 0); TaskReturn
0x1df: Pop(0)
0x1e0: PushEmpty()
0x1e1: Call2 0x1d2

0x1e2: Pop(0)
0x1e3: @ GetDirection(Stack[-0]T)
0x1e4: Pop(0)
0x1e5: PushEmpty()
0x1e6: Call2 0x28c

0x1e7: Pop(0)
0x1e8: GOTO 0x1e5

0x1e9: Return(); Pop(0)

0x1ea: PushEmpty(object, object)
0x1eb: Push("player") // @poff=188
0x1ec: @ FindActor(Stack[-2], Stack[-1])
0x1ed: Pop(1)
0x1ee: Pop(0); Push((bool) Stack[-1] == 0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f0: Stack[-3] = (bool) 0
0x1f1: Return(); Pop(2)

0x1f2: PushEmpty(bool, object)
0x1f3: Stack[-3] = Stack[-1]
0x1f4: Call2 0x2ea

0x1f5: Stack[-2] = Stack[-5]
0x1f6: Pop(2)
0x1f7: Return(); Pop(2)

0x1f8: Stack[-1] = 0
0x1f9: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x1fa: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x1fb: @ RotateAsync(Stack[-2], Stack[-1])
0x1fc: Pop(2)
0x1fd: Return(); Pop(0)

0x1fe: PushEmpty(object, bool, object, bool)
0x1ff: Push("player") // @poff=188
0x200: @ FindActor(Stack[-3], Stack[-1])
0x201: Pop(1)
0x202: Pop(0); Push((bool) Stack[-2] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x204: Stack[-5] = (bool) 0
0x205: Return(); Pop(4)

0x206: PushEmpty(float, object)
0x207: Stack[-4] = Stack[-1]
0x208: Call2 0x2d8

0x209: Pop(1)
0x20a: Push((float)90000.0)
0x20b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20d: Stack[-5] = (bool) 0
0x20e: Return(); Pop(4)

0x20f: @ CanSee(Stack[-1], Stack[-2])
0x210: Pop(0)
0x211: Stack[-1] = Stack[-5]
0x212: Return(); Pop(4)

0x213: Stack[-2] = 0
0x214: PushEmpty(float, float)
0x215: Push((int) 8)
0x216: Push((int) 16)
0x217: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(2)
0x219: Push((int) 10)
0x21a: @ SetTimer(Stack[-1], Stack[-2])
0x21b: Pop(1)
0x21c: Return(); Pop(2)

0x21d: Push((int) 10)
0x21e: @ KillTimer(Stack[-1])
0x21f: Pop(1)
0x220: Return(); Pop(0)

0x221: PushEmpty()
0x222: Push((int) 10)
0x223: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x225: PushEmpty()
0x226: Call2 0x21d

0x227: Pop(0)
0x228: PushEmpty(bool)
0x229: Stack[-1] = (bool) 0
0x22a: PushEmpty(bool)
0x22b: Call2 0x2f3

0x22c: Pop(0)
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: PushEmpty(bool)
0x22f: Call2 0x1fe

0x230: Pop(0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Stack[-1] = (bool) 1
0x233: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x234: PushEmpty(bool)
0x235: Call2 0x1ea

0x236: Pop(0)
0x237: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x238: PushEmpty(bool, object)
0x239: PushEmpty(object)
0x23a: Call2 0x3fa

0x23b: Stack[-1] = Stack[-2]
0x23c: Pop(1)
0x23d: Call2 0x387

0x23e: Pop(2)
0x23f: GOTO 0x246

0x240: PushEmpty()
0x241: Call2 0x1f9

0x242: Pop(0)
0x243: PushEmpty()
0x244: Call2 0x214

0x245: Pop(0)
0x246: Return(); Pop(0)

0x247: PushEmpty()
0x248: Call2 0x2d3

0x249: Pop(0)
0x24a: PushEmpty()
0x24b: Call2 0x21d

0x24c: Pop(0)
0x24d: @ lshStopSpeech()
0x24e: Pop(0)
0x24f: @ lshStopAnimation()
0x250: Pop(0)
0x251: @ StopAsync()
0x252: Pop(0)
0x253: @ Hold()
0x254: Pop(0)
0x255: Return(); Pop(0)

0x256: @ StopGroup0()
0x257: Pop(0)
0x258: PushEmpty()
0x259: Call2 0x21d

0x25a: Pop(0)
0x25b: PushEmpty(string)
0x25c: Stack[-1] = "Neutral" // @poff=89
0x25d: Call2 0x3d7

0x25e: Pop(1)
0x25f: PushEmpty()
0x260: Call2 0x214

0x261: Pop(0)
0x262: Return(); Pop(0)

0x263: PushEmpty()
0x264: Push(Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x266: PushEmpty()
0x267: Call2 0x214

0x268: Pop(0)
0x269: GOTO 0x26e

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Neutral" // @poff=89
0x26c: Call2 0x3d7

0x26d: Pop(1)
0x26e: Return(); Pop(0)

0x26f: PushEmpty(bool, bool)
0x270: @ IsOverrideActive(Stack[-1])
0x271: Pop(0)
0x272: Pop(0); Push((bool) Stack[-1] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x274: EventDisable(0)
0x275: PushEmpty()
0x276: Call2 0x2d3

0x277: Pop(0)
0x278: PushEmpty(bool, object)
0x279: Stack[-5] = Stack[-1]
0x27a: Call2 0x2ea

0x27b: Pop(2)
0x27c: EventEnable(0)
0x27d: PushEmpty(object)
0x27e: Stack[-4] = Stack[-1]
0x27f: Call2 0x1a5

0x280: Pop(1)
0x281: PushEmpty(string)
0x282: Stack[-1] = "Neutral" // @poff=89
0x283: Call2 0x3d7

0x284: Pop(1)
0x285: PushEmpty()
0x286: Call2 0x21d

0x287: Pop(0)
0x288: PushEmpty()
0x289: Call2 0x214

0x28a: Pop(0)
0x28b: Return(); Pop(2)

0x28c: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x28d: @ WaitForAnimEnd()
0x28e: Pop(0)
0x28f: PushEmpty(bool)
0x290: Call2 0x2f3

0x291: Pop(0)
0x292: Pop(1); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: Return(); Pop(12)

0x295: PushEmpty(int)
0x296: Call2 0x41f

0x297: Stack[-1] = Stack[-7]
0x298: Pop(1)
0x299: Stack[-5] = (int) 0
0x29a: PushEmpty(bool)
0x29b: Stack[-1] = (bool) 0
0x29c: Push((int) 5)
0x29d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29f: PushEmpty(bool)
0x2a0: Call2 0x2f3

0x2a1: Pop(0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Stack[-1] = (bool) 1
0x2a4: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2a5: Pop(0); Push((bool) Stack[-6] == 0)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a7: Push((int) 3)
0x2a8: @ Sleep(Stack[-1], Stack[-5])
0x2a9: Pop(1)
0x2aa: Pop(0); Push((bool) Stack[-4] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2ce

0x2ad: GOTO 0x2c3

0x2ae: @ irand(Stack[-3], Stack[-6])
0x2af: Pop(0)
0x2b0: Push((int) 5)
0x2b1: @ irand(Stack[-3], Stack[-1])
0x2b2: Pop(1)
0x2b3: Push((int) 0)
0x2b4: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: Stack[-3] = (int) 0
0x2b7: Push("all") // @poff=138
0x2b8: PushEmpty(string, int)
0x2b9: Stack[-6] = Stack[-1]
0x2ba: Call2 0x418

0x2bb: Pop(1)
0x2bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bd: Pop(2)
0x2be: @ WaitForAnimEnd(Stack[-1])
0x2bf: Pop(0)
0x2c0: Pop(0); Push((bool) Stack[-1] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: GOTO 0x2ce

0x2c3: PushEmpty(bool)
0x2c4: Call2 0x2d1

0x2c5: Pop(0)
0x2c6: Pop(1); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: GOTO 0x2ce

0x2c9: @ ResetAAS()
0x2ca: Pop(0)
0x2cb: Push((int) 1)
0x2cc: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2cd: GOTO 0x29a

0x2ce: @ ResetAAS()
0x2cf: Pop(0)
0x2d0: Return(); Pop(12)

0x2d1: Stack[-1] = (bool) 1
0x2d2: Return(); Pop(0)

0x2d3: @ StopAnimation()
0x2d4: Pop(0)
0x2d5: @ StopGroup0()
0x2d6: Pop(0)
0x2d7: Return(); Pop(0)

0x2d8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2d9: @ GetPosition(Stack[-3])
0x2da: Pop(0)
0x2db: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x2dc: Pop(0)
0x2dd: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2de: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2df: Return(); Pop(6)

0x2e0: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2e1: @ GetPosition(Stack[-3])
0x2e2: Pop(0)
0x2e3: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2e4: Push(CvectorIndex(Stack[-2], 0))
0x2e5: Push(CvectorIndex(Stack[-3], 2))
0x2e6: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2e7: Pop(2)
0x2e8: Stack[-1] = Stack[-8]
0x2e9: Return(); Pop(6)

0x2ea: PushEmpty(cvector, cvector)
0x2eb: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x2ec: Pop(0)
0x2ed: PushEmpty(bool, cvector)
0x2ee: Stack[-3] = Stack[-1]
0x2ef: Call2 0x2e0

0x2f0: Stack[-2] = Stack[-6]
0x2f1: Pop(2)
0x2f2: Return(); Pop(2)

0x2f3: PushEmpty(bool, bool)
0x2f4: @ IsLoaded(Stack[-1])
0x2f5: Pop(0)
0x2f6: Stack[-1] = Stack[-3]
0x2f7: Return(); Pop(2)

0x2f8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2f9: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x2fa: Pop(0)
0x2fb: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x2fc: Pop(0)
0x2fd: Push(CvectorIndex(Stack[-8], 1))
0x2fe: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ff: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x300: @ GetPosition(Stack[-7])
0x301: Pop(0)
0x302: @ GetEyesHeight(Stack[-9])
0x303: Pop(0)
0x304: Push(CvectorIndex(Stack[-7], 1))
0x305: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x306: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x307: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x308: Push(CvectorIndex(Stack[-6], 1))
0x309: Stack[-1] = (int) 0
0x30a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x30b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x30c: Pop(1); Push(Sqrt(Stack[-1]))
0x30d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x30e: Stack[-5] = -Stack[-6]; Pop(0);
0x30f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x310: PushEmpty(cvector, cvector)
0x311: Push([0.0, 1.0, 0.0])
0x312: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x313: Call2 0x400

0x314: Pop(1)
0x315: Push((int) 25)
0x316: Pop(2); Push(Stack[-2] * Stack[-1]);
0x317: Pop(2); Push(Stack[-2] + Stack[-1]);
0x318: Push([0.0, 10.0, 0.0])
0x319: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x31a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x31b: @ IsOverrideActive(Stack[-2])
0x31c: Pop(0)
0x31d: Push(Stack[-2])
0x31e: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31f: Stack[-21] = (bool) 0
0x320: Return(); Pop(18)

0x321: @ StopWorld()
0x322: Pop(0)
0x323: @ CameraTransit(Stack[-3], Stack[-5])
0x324: Pop(0)
0x325: Push(CvectorIndex(Stack[-4], 0))
0x326: Push(CvectorIndex(Stack[-5], 2))
0x327: @ Rotate(Stack[-2], Stack[-1])
0x328: Pop(2)
0x329: PushEmpty(bool)
0x32a: Call2 0x4be

0x32b: Pop(0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32d: GOTO 0x336

0x32e: Push("head") // @poff=228
0x32f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x330: Pop(1)
0x331: Push(Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x333: Push("head") // @poff=228
0x334: @ LookAsyncCamera(Stack[-1])
0x335: Pop(1)
0x336: @ CameraWaitForPlayFinish()
0x337: Pop(0)
0x338: @ ResumeWorld()
0x339: Pop(0)
0x33a: Stack[-21] = (bool) 1
0x33b: Return(); Pop(18)

0x33c: PushEmpty(bool, bool)
0x33d: @ CameraSwitchToNormal()
0x33e: Pop(0)
0x33f: PushEmpty(bool)
0x340: Call2 0x4be

0x341: Pop(0)
0x342: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x343: GOTO 0x34c

0x344: Push("head") // @poff=228
0x345: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x346: Pop(1)
0x347: Push(Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x349: Push("head") // @poff=228
0x34a: @ UnlookAsync(Stack[-1])
0x34b: Pop(1)
0x34c: Return(); Pop(2)

0x34d: PushEmpty(int, int, int, int)
0x34e: Push("voice_common") // @poff=238
0x34f: @ GetVariable(Stack[-1], Stack[-3])
0x350: Pop(1)
0x351: Push(Stack[-2])
0x352: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x353: PushEmpty(bool, object)
0x354: Stack[-7] = Stack[-1]
0x355: Call2 0x387

0x356: Pop(1)
0x357: Pop(1); Push((bool) Stack[-1] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x359: PushEmpty(bool, object)
0x35a: Stack[-7] = Stack[-1]
0x35b: Call2 0x3ac

0x35c: Pop(1)
0x35d: Pop(1); Push((bool) Stack[-1] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: Stack[-6] = (bool) 0
0x360: Return(); Pop(4)

0x361: Push((int) 2)
0x362: @ irand(Stack[-2], Stack[-1])
0x363: Pop(1)
0x364: Push(Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x366: Push("voice_common") // @poff=238
0x367: Push((int) 1)
0x368: Pop(1); Push(Stack[-4] + Stack[-1]);
0x369: Push((int) 3)
0x36a: Pop(2); Push(Stack[-2] % Stack[-1]);
0x36b: @ SetVariable(Stack[-2], Stack[-1])
0x36c: Pop(2)
0x36d: GOTO 0x372

0x36e: Push("voice_common") // @poff=238
0x36f: Push((int) 0)
0x370: @ SetVariable(Stack[-2], Stack[-1])
0x371: Pop(2)
0x372: GOTO 0x385

0x373: PushEmpty(bool, object)
0x374: Stack[-7] = Stack[-1]
0x375: Call2 0x3ac

0x376: Pop(1)
0x377: Pop(1); Push((bool) Stack[-1] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x379: PushEmpty(bool, object)
0x37a: Stack[-7] = Stack[-1]
0x37b: Call2 0x387

0x37c: Pop(1)
0x37d: Pop(1); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-6] = (bool) 0
0x380: Return(); Pop(4)

0x381: Push("voice_common") // @poff=238
0x382: Push((int) 1)
0x383: @ SetVariable(Stack[-2], Stack[-1])
0x384: Pop(2)
0x385: Stack[-6] = (bool) 1
0x386: Return(); Pop(4)

0x387: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x388: Stack[-5] = "c" // @poff=264
0x389: Stack[-4] = (int) 0
0x38a: Push((int) 1)
0x38b: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x38c: Push((int) 1)
0x38d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x38e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x38f: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x390: Pop(1)
0x391: Pop(0); Push((bool) Stack[-3] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: GOTO 0x397

0x394: Push((int) 1)
0x395: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x396: GOTO 0x38a

0x397: Pop(0); Push((bool) Stack[-4] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: Stack[-12] = (bool) 0
0x39a: Return(); Pop(10)

0x39b: Stack[-2] = (int) 0
0x39c: Push((int) 1)
0x39d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: @ irand(Stack[-2], Stack[-4])
0x3a0: Pop(0)
0x3a1: Push((int) 1)
0x3a2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3a4: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3a5: Pop(1)
0x3a6: PushEmpty(bool, string)
0x3a7: Stack[-3] = Stack[-1]
0x3a8: Call2 0x3e4

0x3a9: Stack[-2] = Stack[-14]
0x3aa: Pop(2)
0x3ab: Return(); Pop(10)

0x3ac: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3ad: Push("d") // @poff=234
0x3ae: PushEmpty(int)
0x3af: Call2 0x40f

0x3b0: Pop(0)
0x3b1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b2: Push("m") // @poff=292
0x3b3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3b4: Stack[-4] = (int) 0
0x3b5: Push((int) 1)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3b7: Push((int) 1)
0x3b8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3b9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ba: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x3bb: Pop(1)
0x3bc: Pop(0); Push((bool) Stack[-3] == 0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3be: GOTO 0x3c2

0x3bf: Push((int) 1)
0x3c0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3c1: GOTO 0x3b5

0x3c2: Pop(0); Push((bool) Stack[-4] == 0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c4: Stack[-12] = (bool) 0
0x3c5: Return(); Pop(10)

0x3c6: Stack[-2] = (int) 0
0x3c7: Push((int) 1)
0x3c8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3ca: @ irand(Stack[-2], Stack[-4])
0x3cb: Pop(0)
0x3cc: Push((int) 1)
0x3cd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3ce: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3cf: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3d0: Pop(1)
0x3d1: PushEmpty(bool, string)
0x3d2: Stack[-3] = Stack[-1]
0x3d3: Call2 0x3e4

0x3d4: Stack[-2] = Stack[-14]
0x3d5: Pop(2)
0x3d6: Return(); Pop(10)

0x3d7: PushEmpty(float, float, float, float)
0x3d8: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3d9: Pop(0)
0x3da: Push((bool) 0)
0x3db: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3dc: Pop(1)
0x3dd: Return(); Pop(4)

0x3de: PushEmpty(float, float, float, float)
0x3df: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3e0: Pop(0)
0x3e1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3e2: Pop(0)
0x3e3: Return(); Pop(4)

0x3e4: PushEmpty(bool, bool)
0x3e5: PushEmpty(bool)
0x3e6: Call2 0x4be

0x3e7: Pop(0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3e9: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3ea: Pop(0)
0x3eb: Push(Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ed: @ lshPlaySpeech(Stack[-3])
0x3ee: Pop(0)
0x3ef: Stack[-4] = (bool) 1
0x3f0: Return(); Pop(2)

0x3f1: Stack[-4] = (bool) 0
0x3f2: Return(); Pop(2)

0x3f3: PushEmpty(bool)
0x3f4: Call2 0x4be

0x3f5: Pop(0)
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f7: @ lshStopSpeech()
0x3f8: Pop(0)
0x3f9: Return(); Pop(0)

0x3fa: PushEmpty(object, object)
0x3fb: @ self(Stack[-1])
0x3fc: Pop(0)
0x3fd: Stack[-1] = Stack[-3]
0x3fe: Return(); Pop(2)

0x3ff: Stack[-1] = 0
0x400: PushEmpty(float, float)
0x401: Pop(0); Push(Stack[-3] | Stack[-3]);
0x402: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x403: Push((float)9.999999974752427e-07)
0x404: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: Stack[-4] = [0.0, 0.0, 0.0]
0x407: Return(); Pop(2)

0x408: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x409: Return(); Pop(2)

0x40a: PushEmpty(int, int)
0x40b: @ GetVariable(Stack[-3], Stack[-1])
0x40c: Pop(0)
0x40d: Stack[-1] = Stack[-4]
0x40e: Return(); Pop(2)

0x40f: PushEmpty(float, float)
0x410: @ GetGameTime(Stack[-1])
0x411: Pop(0)
0x412: Push((int) 1)
0x413: PushEmpty(int)
0x414: Push((int) 24)
0x415: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x416: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x417: Return(); Pop(2)

0x418: PushEmpty(string, string)
0x419: Stack[-1] = "idle" // @poff=146
0x41a: Push(Stack[-3])
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x41d: Stack[-1] = Stack[-4]
0x41e: Return(); Pop(2)

0x41f: PushEmpty(int, bool, int, bool)
0x420: Stack[-2] = (int) 0
0x421: Push("all") // @poff=138
0x422: PushEmpty(string, int)
0x423: Stack[-5] = Stack[-1]
0x424: Call2 0x418

0x425: Pop(1)
0x426: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x427: Pop(2)
0x428: Pop(0); Push((bool) Stack[-1] == 0)
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: GOTO 0x42e

0x42b: Push((int) 1)
0x42c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x42d: GOTO 0x421

0x42e: Stack[-2] = Stack[-5]
0x42f: Return(); Pop(4)

0x430: PushEmpty()
0x431: Push("ook9BurahTermitnik2_1") // @poff=296
0x432: Push((int) 1)
0x433: @ SetVariable(Stack[-2], Stack[-1])
0x434: Pop(2)
0x435: Return(); Pop(0)

0x436: PushEmpty()
0x437: Push("k9q01BurahTalk") // @poff=340
0x438: Push((int) 1)
0x439: @ SetVariable(Stack[-2], Stack[-1])
0x43a: Pop(2)
0x43b: Return(); Pop(0)

0x43c: PushEmpty()
0x43d: PushEmpty(bool)
0x43e: Stack[-1] = (bool) 0
0x43f: PushEmpty(int, string)
0x440: Stack[-1] = "k9q01BurahTalk" // @poff=340
0x441: Call2 0x40a

0x442: Pop(1)
0x443: Push((int) 0)
0x444: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x446: PushEmpty(int, string)
0x447: Stack[-1] = "k9q01DankoTalk" // @poff=370
0x448: Call2 0x40a

0x449: Pop(1)
0x44a: Push((int) 0)
0x44b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: Stack[-1] = (bool) 1
0x44e: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x44f: Push("k9q01") // @poff=400
0x450: Push((int) 3)
0x451: @ SetVariable(Stack[-2], Stack[-1])
0x452: Pop(2)
0x453: PushEmpty()
0x454: Call2 0x46f

0x455: Pop(0)
0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: PushEmpty(int, string)
0x459: Stack[-1] = "k9q01" // @poff=400
0x45a: Call2 0x40a

0x45b: Pop(1)
0x45c: Push((int) 2)
0x45d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-2] = (bool) 1
0x460: Return(); Pop(0)

0x461: Stack[-2] = (bool) 0
0x462: Return(); Pop(0)

0x463: PushEmpty()
0x464: PushEmpty(int, string)
0x465: Stack[-1] = "ook9BurahTermitnik2_1" // @poff=296
0x466: Call2 0x40a

0x467: Pop(1)
0x468: Push((int) 0)
0x469: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: Stack[-2] = (bool) 1
0x46c: Return(); Pop(0)

0x46d: Stack[-2] = (bool) 0
0x46e: Return(); Pop(0)

0x46f: PushEmpty(object, object)
0x470: Push((int) 520)
0x471: Push((int) 1)
0x472: Push((int) 529812)
0x473: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x474: Pop(3)
0x475: PushEmpty(bool, object, int)
0x476: Stack[-4] = Stack[-2]
0x477: Stack[-1] = (int) 517
0x478: Call2 0x489

0x479: Pop(3)
0x47a: Return(); Pop(2)

0x47b: Stack[-1] = 0
0x47c: PushEmpty(object, object)
0x47d: @ GetDiaryRoot(Stack[-1])
0x47e: Pop(0)
0x47f: Pop(0); Push((bool) Stack[-1] == 0)
0x480: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x481: Push("Can't retrieve diary root") // @poff=412
0x482: @ Trace(Stack[-1])
0x483: Pop(1)
0x484: Stack[-3] = (bool) 0
0x485: Return(); Pop(2)

0x486: Stack[-1] = Stack[-3]
0x487: Return(); Pop(2)

0x488: Stack[-1] = 0
0x489: PushEmpty(object, object, int, object, object, int)
0x48a: PushEmpty(object)
0x48b: Call2 0x47c

0x48c: Stack[-1] = Stack[-4]
0x48d: Pop(1)
0x48e: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=464
0x48f: Pop(0)
0x490: Pop(0); Push((bool) Stack[-2] == 0)
0x491: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x492: Push("Can't find diary parent with id: ") // @poff=469
0x493: Pop(1); Push(Stack[-1] + Stack[-8]);
0x494: @ Trace(Stack[-1])
0x495: Pop(1)
0x496: Stack[-9] = (bool) 0
0x497: Return(); Pop(6)

0x498: @@ AddChild(Stack[-8]); Obj=2 // @poff=537
0x499: Pop(0)
0x49a: Push((int) 7)
0x49b: @ SendWorldWndMessage(Stack[-1])
0x49c: Pop(1)
0x49d: @@ GetCategory(Stack[-1]); Obj=8 // @poff=546
0x49e: Pop(0)
0x49f: @ SetDiarySection(Stack[-1])
0x4a0: Pop(0)
0x4a1: Stack[-9] = (bool) 0
0x4a2: Return(); Pop(6)

0x4a3: Stack[-2] = 0
0x4a4: Stack[-3] = 0
0x4a5: PushEmpty(int, int)
0x4a6: Push("branch") // @poff=558
0x4a7: @ GetVariable(Stack[-1], Stack[-2])
0x4a8: Pop(1)
0x4a9: Push((int) 0)
0x4aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ac: Stack[-3] = (int) 1
0x4ad: Return(); Pop(2)

0x4ae: GOTO 0x4b4

0x4af: Push((int) 1)
0x4b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b2: Stack[-3] = (int) 2
0x4b3: Return(); Pop(2)

0x4b4: Stack[-3] = (int) 3
0x4b5: Return(); Pop(2)

0x4b6: Stack[-1] = (int) 515592
0x4b7: Return(); Pop(0)

0x4b8: Stack[-1] = (int) 511961
0x4b9: Return(); Pop(0)

0x4ba: Stack[-1] = "ui/NPC_Burah.png" // @poff=572
0x4bb: Return(); Pop(0)

0x4bc: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=606
0x4bd: Return(); Pop(0)

0x4be: Stack[-1] = (bool) 1
0x4bf: Return(); Pop(0)

