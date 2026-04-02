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
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
	W:d9q05
	W:ood9Burah1
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e00670000006400390071003000350000006f006f00640039004200750072006100680031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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

RunOp = 0x1f5
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbd Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1f9 Vars = (string)
		EVENT_6 Op = 0x20d Vars = ()
		EVENT_5 Op = 0x21a Vars = ()
		EVENT_7 Op = 0x269 Vars = (int)
		EVENT_45 Op = 0x2ab Vars = (bool)
		EVENT_0 Op = 0x2b7 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x33b

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
0x11: Call2 0x442

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x395

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x340

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x47a

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x478

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x47c

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x47e

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x4df

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
0x55: Call2 0x384

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
0x63: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xa7

0x67: Pop(1)
0x68: Push((int) 513949)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x491

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 513950)
0x73: Push((int) 15186)
0x74: Push((int) 15185)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: PushEmpty(bool, object)
0x78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79: Call2 0x49d

0x7a: Pop(1)
0x7b: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7c: Push((int) 513977)
0x7d: Push((int) 15213)
0x7e: Push((int) 15212)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: Push((int) 513980)
0x82: Push((int) -1)
0x83: Push((int) 15215)
0x84: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x85: Pop(3)
0x86: GOTO 0x89

0x87: Return(); Pop(0)

0x88: GOTO 0x62

0x89: PushEmpty(bool)
0x8a: Call2 0x480

0x8b: Pop(0)
0x8c: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8d: @ lshWaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: PushEmpty(string)
0x93: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x94: Call2 0x41f

0x95: Pop(1)
0x96: GOTO 0x8d

0x97: GOTO 0xa6

0x98: Push("all") // @poff=138
0x99: Push("idle") // @poff=146
0x9a: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: @ WaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: Push("all") // @poff=138
0xa2: Push("idle") // @poff=146
0xa3: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: GOTO 0x9c

0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: PushEmpty(bool)
0xa9: Call2 0x480

0xaa: Pop(0)
0xab: Pop(1); Push((bool) Stack[-1] == 0)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: PushEmpty(string, bool)
0xb2: Stack[-3] = Stack[-2]
0xb3: Push("") // @poff=102
0xb4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb6: Stack[-1] = (bool) 0
0xb7: GOTO 0xb9

0xb8: Stack[-1] = (bool) 1
0xb9: Call2 0x426

0xba: Pop(2)
0xbb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: Push((int) 1)
0xbf: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x43b

0xc2: Pop(0)
0xc3: Push((int) 15199)
0xc4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x482

0xca: Pop(2)
0xcb: Push((int) 40555)
0xcc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0x482

0xd2: Pop(2)
0xd3: Push((int) 40548)
0xd4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x482

0xda: Pop(2)
0xdb: Push((int) 15212)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x48b

0xe2: Pop(2)
0xe3: Push((int) 15184)
0xe4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xe6: PushEmpty(string)
0xe7: Stack[-1] = "Neutral" // @poff=89
0xe8: Call2 0xa7

0xe9: Pop(1)
0xea: Push((int) 513949)
0xeb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xec: Pop(1)
0xed: @@@ ClearReplies(); Obj=0 // @poff=116
0xee: Pop(0)
0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Call2 0x491

0xf2: Pop(1)
0xf3: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf4: Push((int) 513950)
0xf5: Push((int) 15186)
0xf6: Push((int) 15185)
0xf7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf8: Pop(3)
0xf9: PushEmpty(bool, object)
0xfa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Call2 0x49d

0xfc: Pop(1)
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: Push((int) 513977)
0xff: Push((int) 15213)
0x100: Push((int) 15212)
0x101: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x102: Pop(3)
0x103: Push((int) 513980)
0x104: Push((int) -1)
0x105: Push((int) 15215)
0x106: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 15213)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral" // @poff=89
0x10e: Call2 0xa7

0x10f: Pop(1)
0x110: Push((int) 513978)
0x111: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x112: Pop(1)
0x113: @@@ ClearReplies(); Obj=0 // @poff=116
0x114: Pop(0)
0x115: Push((int) 513979)
0x116: Push((int) -1)
0x117: Push((int) 15214)
0x118: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x119: Pop(3)
0x11a: Push((int) 538655)
0x11b: Push((int) -1)
0x11c: Push((int) 40549)
0x11d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 15186)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral" // @poff=89
0x125: Call2 0xa7

0x126: Pop(1)
0x127: Push((int) 513951)
0x128: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x129: Pop(1)
0x12a: @@@ ClearReplies(); Obj=0 // @poff=116
0x12b: Pop(0)
0x12c: Push((int) 513952)
0x12d: Push((int) 15188)
0x12e: Push((int) 15187)
0x12f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x130: Pop(3)
0x131: Push((int) 538654)
0x132: Push((int) -1)
0x133: Push((int) 40548)
0x134: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 15188)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral" // @poff=89
0x13c: Call2 0xa7

0x13d: Pop(1)
0x13e: Push((int) 513953)
0x13f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x140: Pop(1)
0x141: @@@ ClearReplies(); Obj=0 // @poff=116
0x142: Pop(0)
0x143: Push((int) 513954)
0x144: Push((int) 15190)
0x145: Push((int) 15189)
0x146: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Push((int) 15190)
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral" // @poff=89
0x14e: Call2 0xa7

0x14f: Pop(1)
0x150: Push((int) 513955)
0x151: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x152: Pop(1)
0x153: @@@ ClearReplies(); Obj=0 // @poff=116
0x154: Pop(0)
0x155: Push((int) 538657)
0x156: Push((int) 40553)
0x157: Push((int) 40551)
0x158: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x159: Pop(3)
0x15a: Push((int) 538658)
0x15b: Push((int) 40554)
0x15c: Push((int) 40552)
0x15d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Push((int) 40554)
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Neutral" // @poff=89
0x165: Call2 0xa7

0x166: Pop(1)
0x167: Push((int) 538660)
0x168: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x169: Pop(1)
0x16a: @@@ ClearReplies(); Obj=0 // @poff=116
0x16b: Pop(0)
0x16c: Push((int) 538661)
0x16d: Push((int) -1)
0x16e: Push((int) 40555)
0x16f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x170: Pop(3)
0x171: Push((int) 538662)
0x172: Push((int) 40553)
0x173: Push((int) 40556)
0x174: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 40553)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral" // @poff=89
0x17c: Call2 0xa7

0x17d: Pop(1)
0x17e: Push((int) 538659)
0x17f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x180: Pop(1)
0x181: @@@ ClearReplies(); Obj=0 // @poff=116
0x182: Pop(0)
0x183: Push((int) 513956)
0x184: Push((int) 15192)
0x185: Push((int) 15191)
0x186: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x187: Pop(3)
0x188: Push((int) 538663)
0x189: Push((int) 15194)
0x18a: Push((int) 40558)
0x18b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Push((int) 15192)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral" // @poff=89
0x193: Call2 0xa7

0x194: Pop(1)
0x195: Push((int) 513957)
0x196: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x197: Pop(1)
0x198: @@@ ClearReplies(); Obj=0 // @poff=116
0x199: Pop(0)
0x19a: Push((int) 513958)
0x19b: Push((int) 15194)
0x19c: Push((int) 15193)
0x19d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19e: Pop(3)
0x19f: Push((int) 538664)
0x1a0: Push((int) 15196)
0x1a1: Push((int) 40560)
0x1a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a3: Pop(3)
0x1a4: Return(); Pop(0)

0x1a5: Push((int) 15194)
0x1a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral" // @poff=89
0x1aa: Call2 0xa7

0x1ab: Pop(1)
0x1ac: Push((int) 513959)
0x1ad: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ae: Pop(1)
0x1af: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b0: Pop(0)
0x1b1: Push((int) 513960)
0x1b2: Push((int) 15196)
0x1b3: Push((int) 15195)
0x1b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b5: Pop(3)
0x1b6: Return(); Pop(0)

0x1b7: Push((int) 15196)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral" // @poff=89
0x1bc: Call2 0xa7

0x1bd: Pop(1)
0x1be: Push((int) 513961)
0x1bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c0: Pop(1)
0x1c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c2: Pop(0)
0x1c3: Push((int) 513962)
0x1c4: Push((int) 15198)
0x1c5: Push((int) 15197)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Push((int) 538665)
0x1c9: Push((int) 15198)
0x1ca: Push((int) 40562)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 15198)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral" // @poff=89
0x1d3: Call2 0xa7

0x1d4: Pop(1)
0x1d5: Push((int) 513963)
0x1d6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d7: Pop(1)
0x1d8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d9: Pop(0)
0x1da: Push((int) 513964)
0x1db: Push((int) -1)
0x1dc: Push((int) 15199)
0x1dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e1: PushEmpty(bool)
0x1e2: Call2 0x480

0x1e3: Pop(0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e5: @ lshStopAnimation()
0x1e6: Pop(0)
0x1e7: GOTO 0x1ea

0x1e8: @ StopAnimation()
0x1e9: Pop(0)
0x1ea: Return(); Pop(0)

0x1eb: GOTO 0xbe

0x1ec: Return(); Pop(0)

0x1ed: PushEmpty()
0x1ee: PushEmpty(int, object)
0x1ef: Stack[-3] = Stack[-1]
0x1f0: Push(-2, 1); TaskCall(1)
0x1f1: Call2 0xd

0x1f2: Pop(-2, 1); TaskReturn
0x1f3: Pop(2)
0x1f4: Return(); Pop(0)

0x1f5: PushEmpty()
0x1f6: Call2 0x21e

0x1f7: Pop(0)
0x1f8: Return(); Pop(0)

0x1f9: PushEmpty(bool, bool)
0x1fa: Push("cleanup") // @poff=156
0x1fb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1fd: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1fe: @ IsLoaded(Stack[-1])
0x1ff: Pop(0)
0x200: Pop(0); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x202: PushEmpty(object)
0x203: Call2 0x442

0x204: Pop(0)
0x205: @ RemoveActor(Stack[-1])
0x206: Pop(1)
0x207: GOTO 0x20c

0x208: Push("restore") // @poff=172
0x209: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x20c: Return(); Pop(2)

0x20d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x20e: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x20f: PushEmpty(object)
0x210: Call2 0x442

0x211: Pop(0)
0x212: @ RemoveActor(Stack[-1])
0x213: Pop(1)
0x214: @ Hold()
0x215: Pop(0)
0x216: PushEmpty()
0x217: Call2 0x28f

0x218: Pop(0)
0x219: Return(); Pop(0)

0x21a: PushEmpty()
0x21b: Call2 0x29e

0x21c: Pop(0)
0x21d: Return(); Pop(0)

0x21e: PushEmpty(bool)
0x21f: Call2 0x33b

0x220: Pop(0)
0x221: Pop(1); Push((bool) Stack[-1] == 0)
0x222: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x223: PushEmpty()
0x224: Push(-0, 0); TaskCall(0)
0x225: Call2 0x0

0x226: Pop(-0, 0); TaskReturn
0x227: Pop(0)
0x228: PushEmpty()
0x229: Call2 0x21a

0x22a: Pop(0)
0x22b: @ GetDirection(Stack[-0]T)
0x22c: Pop(0)
0x22d: PushEmpty()
0x22e: Call2 0x2d4

0x22f: Pop(0)
0x230: GOTO 0x22d

0x231: Return(); Pop(0)

0x232: PushEmpty(object, object)
0x233: Push("player") // @poff=188
0x234: @ FindActor(Stack[-2], Stack[-1])
0x235: Pop(1)
0x236: Pop(0); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x238: Stack[-3] = (bool) 0
0x239: Return(); Pop(2)

0x23a: PushEmpty(bool, object)
0x23b: Stack[-3] = Stack[-1]
0x23c: Call2 0x332

0x23d: Stack[-2] = Stack[-5]
0x23e: Pop(2)
0x23f: Return(); Pop(2)

0x240: Stack[-1] = 0
0x241: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x242: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x243: @ RotateAsync(Stack[-2], Stack[-1])
0x244: Pop(2)
0x245: Return(); Pop(0)

0x246: PushEmpty(object, bool, object, bool)
0x247: Push("player") // @poff=188
0x248: @ FindActor(Stack[-3], Stack[-1])
0x249: Pop(1)
0x24a: Pop(0); Push((bool) Stack[-2] == 0)
0x24b: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24c: Stack[-5] = (bool) 0
0x24d: Return(); Pop(4)

0x24e: PushEmpty(float, object)
0x24f: Stack[-4] = Stack[-1]
0x250: Call2 0x320

0x251: Pop(1)
0x252: Push((float)90000.0)
0x253: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x255: Stack[-5] = (bool) 0
0x256: Return(); Pop(4)

0x257: @ CanSee(Stack[-1], Stack[-2])
0x258: Pop(0)
0x259: Stack[-1] = Stack[-5]
0x25a: Return(); Pop(4)

0x25b: Stack[-2] = 0
0x25c: PushEmpty(float, float)
0x25d: Push((int) 8)
0x25e: Push((int) 16)
0x25f: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(2)
0x261: Push((int) 10)
0x262: @ SetTimer(Stack[-1], Stack[-2])
0x263: Pop(1)
0x264: Return(); Pop(2)

0x265: Push((int) 10)
0x266: @ KillTimer(Stack[-1])
0x267: Pop(1)
0x268: Return(); Pop(0)

0x269: PushEmpty()
0x26a: Push((int) 10)
0x26b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x26d: PushEmpty()
0x26e: Call2 0x265

0x26f: Pop(0)
0x270: PushEmpty(bool)
0x271: Stack[-1] = (bool) 0
0x272: PushEmpty(bool)
0x273: Call2 0x33b

0x274: Pop(0)
0x275: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x276: PushEmpty(bool)
0x277: Call2 0x246

0x278: Pop(0)
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: Stack[-1] = (bool) 1
0x27b: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x27c: PushEmpty(bool)
0x27d: Call2 0x232

0x27e: Pop(0)
0x27f: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x280: PushEmpty(bool, object)
0x281: PushEmpty(object)
0x282: Call2 0x442

0x283: Stack[-1] = Stack[-2]
0x284: Pop(1)
0x285: Call2 0x3cf

0x286: Pop(2)
0x287: GOTO 0x28e

0x288: PushEmpty()
0x289: Call2 0x241

0x28a: Pop(0)
0x28b: PushEmpty()
0x28c: Call2 0x25c

0x28d: Pop(0)
0x28e: Return(); Pop(0)

0x28f: PushEmpty()
0x290: Call2 0x31b

0x291: Pop(0)
0x292: PushEmpty()
0x293: Call2 0x265

0x294: Pop(0)
0x295: @ lshStopSpeech()
0x296: Pop(0)
0x297: @ lshStopAnimation()
0x298: Pop(0)
0x299: @ StopAsync()
0x29a: Pop(0)
0x29b: @ Hold()
0x29c: Pop(0)
0x29d: Return(); Pop(0)

0x29e: @ StopGroup0()
0x29f: Pop(0)
0x2a0: PushEmpty()
0x2a1: Call2 0x265

0x2a2: Pop(0)
0x2a3: PushEmpty(string)
0x2a4: Stack[-1] = "Neutral" // @poff=89
0x2a5: Call2 0x41f

0x2a6: Pop(1)
0x2a7: PushEmpty()
0x2a8: Call2 0x25c

0x2a9: Pop(0)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty()
0x2ac: Push(Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2ae: PushEmpty()
0x2af: Call2 0x25c

0x2b0: Pop(0)
0x2b1: GOTO 0x2b6

0x2b2: PushEmpty(string)
0x2b3: Stack[-1] = "Neutral" // @poff=89
0x2b4: Call2 0x41f

0x2b5: Pop(1)
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty(bool, bool)
0x2b8: @ IsOverrideActive(Stack[-1])
0x2b9: Pop(0)
0x2ba: Pop(0); Push((bool) Stack[-1] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2bc: EventDisable(0)
0x2bd: PushEmpty()
0x2be: Call2 0x31b

0x2bf: Pop(0)
0x2c0: PushEmpty(bool, object)
0x2c1: Stack[-5] = Stack[-1]
0x2c2: Call2 0x332

0x2c3: Pop(2)
0x2c4: EventEnable(0)
0x2c5: PushEmpty(object)
0x2c6: Stack[-4] = Stack[-1]
0x2c7: Call2 0x1ed

0x2c8: Pop(1)
0x2c9: PushEmpty(string)
0x2ca: Stack[-1] = "Neutral" // @poff=89
0x2cb: Call2 0x41f

0x2cc: Pop(1)
0x2cd: PushEmpty()
0x2ce: Call2 0x265

0x2cf: Pop(0)
0x2d0: PushEmpty()
0x2d1: Call2 0x25c

0x2d2: Pop(0)
0x2d3: Return(); Pop(2)

0x2d4: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2d5: @ WaitForAnimEnd()
0x2d6: Pop(0)
0x2d7: PushEmpty(bool)
0x2d8: Call2 0x33b

0x2d9: Pop(0)
0x2da: Pop(1); Push((bool) Stack[-1] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: Return(); Pop(12)

0x2dd: PushEmpty(int)
0x2de: Call2 0x467

0x2df: Stack[-1] = Stack[-7]
0x2e0: Pop(1)
0x2e1: Stack[-5] = (int) 0
0x2e2: PushEmpty(bool)
0x2e3: Stack[-1] = (bool) 0
0x2e4: Push((int) 5)
0x2e5: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e7: PushEmpty(bool)
0x2e8: Call2 0x33b

0x2e9: Pop(0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: Stack[-1] = (bool) 1
0x2ec: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x2ed: Pop(0); Push((bool) Stack[-6] == 0)
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2ef: Push((int) 3)
0x2f0: @ Sleep(Stack[-1], Stack[-5])
0x2f1: Pop(1)
0x2f2: Pop(0); Push((bool) Stack[-4] == 0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: GOTO 0x316

0x2f5: GOTO 0x30b

0x2f6: @ irand(Stack[-3], Stack[-6])
0x2f7: Pop(0)
0x2f8: Push((int) 5)
0x2f9: @ irand(Stack[-3], Stack[-1])
0x2fa: Pop(1)
0x2fb: Push((int) 0)
0x2fc: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: Stack[-3] = (int) 0
0x2ff: Push("all") // @poff=138
0x300: PushEmpty(string, int)
0x301: Stack[-6] = Stack[-1]
0x302: Call2 0x460

0x303: Pop(1)
0x304: @ PlayAnimation(Stack[-2], Stack[-1])
0x305: Pop(2)
0x306: @ WaitForAnimEnd(Stack[-1])
0x307: Pop(0)
0x308: Pop(0); Push((bool) Stack[-1] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x30a: GOTO 0x316

0x30b: PushEmpty(bool)
0x30c: Call2 0x319

0x30d: Pop(0)
0x30e: Pop(1); Push((bool) Stack[-1] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: GOTO 0x316

0x311: @ ResetAAS()
0x312: Pop(0)
0x313: Push((int) 1)
0x314: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x315: GOTO 0x2e2

0x316: @ ResetAAS()
0x317: Pop(0)
0x318: Return(); Pop(12)

0x319: Stack[-1] = (bool) 1
0x31a: Return(); Pop(0)

0x31b: @ StopAnimation()
0x31c: Pop(0)
0x31d: @ StopGroup0()
0x31e: Pop(0)
0x31f: Return(); Pop(0)

0x320: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x321: @ GetPosition(Stack[-3])
0x322: Pop(0)
0x323: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x324: Pop(0)
0x325: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x326: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x327: Return(); Pop(6)

0x328: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x329: @ GetPosition(Stack[-3])
0x32a: Pop(0)
0x32b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x32c: Push(CvectorIndex(Stack[-2], 0))
0x32d: Push(CvectorIndex(Stack[-3], 2))
0x32e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x32f: Pop(2)
0x330: Stack[-1] = Stack[-8]
0x331: Return(); Pop(6)

0x332: PushEmpty(cvector, cvector)
0x333: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x334: Pop(0)
0x335: PushEmpty(bool, cvector)
0x336: Stack[-3] = Stack[-1]
0x337: Call2 0x328

0x338: Stack[-2] = Stack[-6]
0x339: Pop(2)
0x33a: Return(); Pop(2)

0x33b: PushEmpty(bool, bool)
0x33c: @ IsLoaded(Stack[-1])
0x33d: Pop(0)
0x33e: Stack[-1] = Stack[-3]
0x33f: Return(); Pop(2)

0x340: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x341: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x342: Pop(0)
0x343: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x344: Pop(0)
0x345: Push(CvectorIndex(Stack[-8], 1))
0x346: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x347: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x348: @ GetPosition(Stack[-7])
0x349: Pop(0)
0x34a: @ GetEyesHeight(Stack[-9])
0x34b: Pop(0)
0x34c: Push(CvectorIndex(Stack[-7], 1))
0x34d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x34e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x34f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x350: Push(CvectorIndex(Stack[-6], 1))
0x351: Stack[-1] = (int) 0
0x352: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x353: Pop(0); Push(Stack[-6] | Stack[-6]);
0x354: Pop(1); Push(Sqrt(Stack[-1]))
0x355: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x356: Stack[-5] = -Stack[-6]; Pop(0);
0x357: Pop(0); Push(Stack[-6] * Stack[-19]);
0x358: PushEmpty(cvector, cvector)
0x359: Push([0.0, 1.0, 0.0])
0x35a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x35b: Call2 0x448

0x35c: Pop(1)
0x35d: Push((int) 25)
0x35e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x35f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x360: Push([0.0, 10.0, 0.0])
0x361: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x362: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x363: @ IsOverrideActive(Stack[-2])
0x364: Pop(0)
0x365: Push(Stack[-2])
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: Stack[-21] = (bool) 0
0x368: Return(); Pop(18)

0x369: @ StopWorld()
0x36a: Pop(0)
0x36b: @ CameraTransit(Stack[-3], Stack[-5])
0x36c: Pop(0)
0x36d: Push(CvectorIndex(Stack[-4], 0))
0x36e: Push(CvectorIndex(Stack[-5], 2))
0x36f: @ Rotate(Stack[-2], Stack[-1])
0x370: Pop(2)
0x371: PushEmpty(bool)
0x372: Call2 0x480

0x373: Pop(0)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: GOTO 0x37e

0x376: Push("head") // @poff=228
0x377: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x378: Pop(1)
0x379: Push(Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37b: Push("head") // @poff=228
0x37c: @ LookAsyncCamera(Stack[-1])
0x37d: Pop(1)
0x37e: @ CameraWaitForPlayFinish()
0x37f: Pop(0)
0x380: @ ResumeWorld()
0x381: Pop(0)
0x382: Stack[-21] = (bool) 1
0x383: Return(); Pop(18)

0x384: PushEmpty(bool, bool)
0x385: @ CameraSwitchToNormal()
0x386: Pop(0)
0x387: PushEmpty(bool)
0x388: Call2 0x480

0x389: Pop(0)
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: GOTO 0x394

0x38c: Push("head") // @poff=228
0x38d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x38e: Pop(1)
0x38f: Push(Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x391: Push("head") // @poff=228
0x392: @ UnlookAsync(Stack[-1])
0x393: Pop(1)
0x394: Return(); Pop(2)

0x395: PushEmpty(int, int, int, int)
0x396: Push("voice_common") // @poff=238
0x397: @ GetVariable(Stack[-1], Stack[-3])
0x398: Pop(1)
0x399: Push(Stack[-2])
0x39a: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x39b: PushEmpty(bool, object)
0x39c: Stack[-7] = Stack[-1]
0x39d: Call2 0x3cf

0x39e: Pop(1)
0x39f: Pop(1); Push((bool) Stack[-1] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a1: PushEmpty(bool, object)
0x3a2: Stack[-7] = Stack[-1]
0x3a3: Call2 0x3f4

0x3a4: Pop(1)
0x3a5: Pop(1); Push((bool) Stack[-1] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a7: Stack[-6] = (bool) 0
0x3a8: Return(); Pop(4)

0x3a9: Push((int) 2)
0x3aa: @ irand(Stack[-2], Stack[-1])
0x3ab: Pop(1)
0x3ac: Push(Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3ae: Push("voice_common") // @poff=238
0x3af: Push((int) 1)
0x3b0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3b1: Push((int) 3)
0x3b2: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3b3: @ SetVariable(Stack[-2], Stack[-1])
0x3b4: Pop(2)
0x3b5: GOTO 0x3ba

0x3b6: Push("voice_common") // @poff=238
0x3b7: Push((int) 0)
0x3b8: @ SetVariable(Stack[-2], Stack[-1])
0x3b9: Pop(2)
0x3ba: GOTO 0x3cd

0x3bb: PushEmpty(bool, object)
0x3bc: Stack[-7] = Stack[-1]
0x3bd: Call2 0x3f4

0x3be: Pop(1)
0x3bf: Pop(1); Push((bool) Stack[-1] == 0)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c1: PushEmpty(bool, object)
0x3c2: Stack[-7] = Stack[-1]
0x3c3: Call2 0x3cf

0x3c4: Pop(1)
0x3c5: Pop(1); Push((bool) Stack[-1] == 0)
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c7: Stack[-6] = (bool) 0
0x3c8: Return(); Pop(4)

0x3c9: Push("voice_common") // @poff=238
0x3ca: Push((int) 1)
0x3cb: @ SetVariable(Stack[-2], Stack[-1])
0x3cc: Pop(2)
0x3cd: Stack[-6] = (bool) 1
0x3ce: Return(); Pop(4)

0x3cf: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3d0: Stack[-5] = "c" // @poff=264
0x3d1: Stack[-4] = (int) 0
0x3d2: Push((int) 1)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d4: Push((int) 1)
0x3d5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3d6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3d7: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x3d8: Pop(1)
0x3d9: Pop(0); Push((bool) Stack[-3] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: GOTO 0x3df

0x3dc: Push((int) 1)
0x3dd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3de: GOTO 0x3d2

0x3df: Pop(0); Push((bool) Stack[-4] == 0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e1: Stack[-12] = (bool) 0
0x3e2: Return(); Pop(10)

0x3e3: Stack[-2] = (int) 0
0x3e4: Push((int) 1)
0x3e5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: @ irand(Stack[-2], Stack[-4])
0x3e8: Pop(0)
0x3e9: Push((int) 1)
0x3ea: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3eb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ec: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3ed: Pop(1)
0x3ee: PushEmpty(bool, string)
0x3ef: Stack[-3] = Stack[-1]
0x3f0: Call2 0x42c

0x3f1: Stack[-2] = Stack[-14]
0x3f2: Pop(2)
0x3f3: Return(); Pop(10)

0x3f4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3f5: Push("d") // @poff=234
0x3f6: PushEmpty(int)
0x3f7: Call2 0x457

0x3f8: Pop(0)
0x3f9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3fa: Push("m") // @poff=292
0x3fb: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3fc: Stack[-4] = (int) 0
0x3fd: Push((int) 1)
0x3fe: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x3ff: Push((int) 1)
0x400: Pop(1); Push(Stack[-5] + Stack[-1]);
0x401: Pop(1); Push(Stack[-6] + Stack[-1]);
0x402: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x403: Pop(1)
0x404: Pop(0); Push((bool) Stack[-3] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x406: GOTO 0x40a

0x407: Push((int) 1)
0x408: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x409: GOTO 0x3fd

0x40a: Pop(0); Push((bool) Stack[-4] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: Stack[-12] = (bool) 0
0x40d: Return(); Pop(10)

0x40e: Stack[-2] = (int) 0
0x40f: Push((int) 1)
0x410: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x412: @ irand(Stack[-2], Stack[-4])
0x413: Pop(0)
0x414: Push((int) 1)
0x415: Pop(1); Push(Stack[-3] + Stack[-1]);
0x416: Pop(1); Push(Stack[-6] + Stack[-1]);
0x417: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x418: Pop(1)
0x419: PushEmpty(bool, string)
0x41a: Stack[-3] = Stack[-1]
0x41b: Call2 0x42c

0x41c: Stack[-2] = Stack[-14]
0x41d: Pop(2)
0x41e: Return(); Pop(10)

0x41f: PushEmpty(float, float, float, float)
0x420: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x421: Pop(0)
0x422: Push((bool) 0)
0x423: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(1)
0x425: Return(); Pop(4)

0x426: PushEmpty(float, float, float, float)
0x427: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x428: Pop(0)
0x429: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x42a: Pop(0)
0x42b: Return(); Pop(4)

0x42c: PushEmpty(bool, bool)
0x42d: PushEmpty(bool)
0x42e: Call2 0x480

0x42f: Pop(0)
0x430: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x431: @ lshHasSpeech(Stack[-1], Stack[-3])
0x432: Pop(0)
0x433: Push(Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x435: @ lshPlaySpeech(Stack[-3])
0x436: Pop(0)
0x437: Stack[-4] = (bool) 1
0x438: Return(); Pop(2)

0x439: Stack[-4] = (bool) 0
0x43a: Return(); Pop(2)

0x43b: PushEmpty(bool)
0x43c: Call2 0x480

0x43d: Pop(0)
0x43e: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43f: @ lshStopSpeech()
0x440: Pop(0)
0x441: Return(); Pop(0)

0x442: PushEmpty(object, object)
0x443: @ self(Stack[-1])
0x444: Pop(0)
0x445: Stack[-1] = Stack[-3]
0x446: Return(); Pop(2)

0x447: Stack[-1] = 0
0x448: PushEmpty(float, float)
0x449: Pop(0); Push(Stack[-3] | Stack[-3]);
0x44a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x44b: Push((float)9.999999974752427e-07)
0x44c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: Stack[-4] = [0.0, 0.0, 0.0]
0x44f: Return(); Pop(2)

0x450: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x451: Return(); Pop(2)

0x452: PushEmpty(int, int)
0x453: @ GetVariable(Stack[-3], Stack[-1])
0x454: Pop(0)
0x455: Stack[-1] = Stack[-4]
0x456: Return(); Pop(2)

0x457: PushEmpty(float, float)
0x458: @ GetGameTime(Stack[-1])
0x459: Pop(0)
0x45a: Push((int) 1)
0x45b: PushEmpty(int)
0x45c: Push((int) 24)
0x45d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x45e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x45f: Return(); Pop(2)

0x460: PushEmpty(string, string)
0x461: Stack[-1] = "idle" // @poff=146
0x462: Push(Stack[-3])
0x463: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x464: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x465: Stack[-1] = Stack[-4]
0x466: Return(); Pop(2)

0x467: PushEmpty(int, bool, int, bool)
0x468: Stack[-2] = (int) 0
0x469: Push("all") // @poff=138
0x46a: PushEmpty(string, int)
0x46b: Stack[-5] = Stack[-1]
0x46c: Call2 0x460

0x46d: Pop(1)
0x46e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(2)
0x470: Pop(0); Push((bool) Stack[-1] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x472: GOTO 0x476

0x473: Push((int) 1)
0x474: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x475: GOTO 0x469

0x476: Stack[-2] = Stack[-5]
0x477: Return(); Pop(4)

0x478: Stack[-1] = (int) 515592
0x479: Return(); Pop(0)

0x47a: Stack[-1] = (int) 511961
0x47b: Return(); Pop(0)

0x47c: Stack[-1] = "ui/NPC_Burah.png" // @poff=296
0x47d: Return(); Pop(0)

0x47e: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=330
0x47f: Return(); Pop(0)

0x480: Stack[-1] = (bool) 1
0x481: Return(); Pop(0)

0x482: PushEmpty()
0x483: Push("d9q05") // @poff=368
0x484: Push((int) 2)
0x485: @ SetVariable(Stack[-2], Stack[-1])
0x486: Pop(2)
0x487: PushEmpty()
0x488: Call2 0x4a9

0x489: Pop(0)
0x48a: Return(); Pop(0)

0x48b: PushEmpty()
0x48c: Push("ood9Burah1") // @poff=380
0x48d: Push((int) 1)
0x48e: @ SetVariable(Stack[-2], Stack[-1])
0x48f: Pop(2)
0x490: Return(); Pop(0)

0x491: PushEmpty()
0x492: PushEmpty(int, string)
0x493: Stack[-1] = "d9q05" // @poff=368
0x494: Call2 0x452

0x495: Pop(1)
0x496: Push((int) 1)
0x497: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x498: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x499: Stack[-2] = (bool) 1
0x49a: Return(); Pop(0)

0x49b: Stack[-2] = (bool) 0
0x49c: Return(); Pop(0)

0x49d: PushEmpty()
0x49e: PushEmpty(int, string)
0x49f: Stack[-1] = "ood9Burah1" // @poff=380
0x4a0: Call2 0x452

0x4a1: Pop(1)
0x4a2: Push((int) 0)
0x4a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: Stack[-2] = (bool) 1
0x4a6: Return(); Pop(0)

0x4a7: Stack[-2] = (bool) 0
0x4a8: Return(); Pop(0)

0x4a9: PushEmpty(object, object)
0x4aa: Push((int) 766)
0x4ab: Push((int) 2)
0x4ac: Push((int) 540063)
0x4ad: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4ae: Pop(3)
0x4af: PushEmpty(bool, object, int)
0x4b0: Stack[-4] = Stack[-2]
0x4b1: Stack[-1] = (int) 764
0x4b2: Call2 0x4c3

0x4b3: Pop(3)
0x4b4: Return(); Pop(2)

0x4b5: Stack[-1] = 0
0x4b6: PushEmpty(object, object)
0x4b7: @ GetDiaryRoot(Stack[-1])
0x4b8: Pop(0)
0x4b9: Pop(0); Push((bool) Stack[-1] == 0)
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4bb: Push("Can't retrieve diary root") // @poff=402
0x4bc: @ Trace(Stack[-1])
0x4bd: Pop(1)
0x4be: Stack[-3] = (bool) 0
0x4bf: Return(); Pop(2)

0x4c0: Stack[-1] = Stack[-3]
0x4c1: Return(); Pop(2)

0x4c2: Stack[-1] = 0
0x4c3: PushEmpty(object, object, int, object, object, int)
0x4c4: PushEmpty(object)
0x4c5: Call2 0x4b6

0x4c6: Stack[-1] = Stack[-4]
0x4c7: Pop(1)
0x4c8: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=454
0x4c9: Pop(0)
0x4ca: Pop(0); Push((bool) Stack[-2] == 0)
0x4cb: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4cc: Push("Can't find diary parent with id: ") // @poff=459
0x4cd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4ce: @ Trace(Stack[-1])
0x4cf: Pop(1)
0x4d0: Stack[-9] = (bool) 0
0x4d1: Return(); Pop(6)

0x4d2: @@ AddChild(Stack[-8]); Obj=2 // @poff=527
0x4d3: Pop(0)
0x4d4: Push((int) 7)
0x4d5: @ SendWorldWndMessage(Stack[-1])
0x4d6: Pop(1)
0x4d7: @@ GetCategory(Stack[-1]); Obj=8 // @poff=536
0x4d8: Pop(0)
0x4d9: @ SetDiarySection(Stack[-1])
0x4da: Pop(0)
0x4db: Stack[-9] = (bool) 0
0x4dc: Return(); Pop(6)

0x4dd: Stack[-2] = 0
0x4de: Stack[-3] = 0
0x4df: PushEmpty(int, int)
0x4e0: Push("branch") // @poff=548
0x4e1: @ GetVariable(Stack[-1], Stack[-2])
0x4e2: Pop(1)
0x4e3: Push((int) 0)
0x4e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e6: Stack[-3] = (int) 1
0x4e7: Return(); Pop(2)

0x4e8: GOTO 0x4ee

0x4e9: Push((int) 1)
0x4ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4ec: Stack[-3] = (int) 2
0x4ed: Return(); Pop(2)

0x4ee: Stack[-3] = (int) 3
0x4ef: Return(); Pop(2)

