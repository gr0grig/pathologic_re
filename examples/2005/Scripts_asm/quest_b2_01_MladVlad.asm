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
	W:oob2MladVladFactory1
	W:oob2MladVladFactory2
	W:oob2MladVladFactory3
	W:quest_b2_01
	W:remove_mladvlad
	W:branch
	W:ui/NPC_MladVlad.png
	W:ui/NPC_MladVlad_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f00620032004d006c006100640056006c006100640046006100630074006f0072007900310000006f006f00620032004d006c006100640056006c006100640046006100630074006f0072007900320000006f006f00620032004d006c006100640056006c006100640046006100630074006f007200790033000000710075006500730074005f00620032005f00300031000000720065006d006f00760065005f006d006c006100640076006c006100640000006200720061006e00630068000000750069002f004e00500043005f004d006c006100640056006c00610064002e0070006e0067000000750069002f004e00500043005f004d006c006100640056006c00610064005f0062002e0070006e0067000000
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

RunOp = 0x1ea
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc7 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1ee Vars = (string)
		EVENT_6 Op = 0x202 Vars = ()
		EVENT_5 Op = 0x20f Vars = ()
		EVENT_7 Op = 0x25e Vars = (int)
		EVENT_45 Op = 0x2a0 Vars = (bool)
		EVENT_0 Op = 0x2ac Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x330

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
0x11: Call2 0x437

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x38a

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x335

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x4e6

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x4e4

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x4e8

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x4ea

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x4d3

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
0x55: Call2 0x379

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

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xb1

0x67: Pop(1)
0x68: Push((int) 520225)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x4af

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 520226)
0x73: Push((int) 21419)
0x74: Push((int) 21418)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: PushEmpty(bool, object)
0x78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79: Call2 0x4bb

0x7a: Pop(1)
0x7b: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7c: Push((int) 520231)
0x7d: Push((int) 21424)
0x7e: Push((int) 21423)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: PushEmpty(bool, object)
0x82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83: Call2 0x4c7

0x84: Pop(1)
0x85: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x86: Push((int) 520239)
0x87: Push((int) 21432)
0x88: Push((int) 21431)
0x89: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8a: Pop(3)
0x8b: Push((int) 520246)
0x8c: Push((int) -1)
0x8d: Push((int) 21438)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: GOTO 0x93

0x91: Return(); Pop(0)

0x92: GOTO 0x62

0x93: PushEmpty(bool)
0x94: Call2 0x4ec

0x95: Pop(0)
0x96: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x97: @ lshWaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: PushEmpty(string)
0x9d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9e: Call2 0x414

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
0xb3: Call2 0x4ec

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
0xc3: Call2 0x41b

0xc4: Pop(2)
0xc5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc6: Return(); Pop(0)

0xc7: PushEmpty()
0xc8: Push((int) 1)
0xc9: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0xca: PushEmpty()
0xcb: Call2 0x430

0xcc: Pop(0)
0xcd: Push((int) 21418)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x479

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x48b

0xd9: Pop(2)
0xda: Push((int) 21423)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x47f

0xe1: Pop(2)
0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x48b

0xe6: Pop(2)
0xe7: Push((int) 21431)
0xe8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call2 0x485

0xee: Pop(2)
0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x48b

0xf3: Pop(2)
0xf4: Push((int) 21417)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral" // @poff=89
0xf9: Call2 0xb1

0xfa: Pop(1)
0xfb: Push((int) 520225)
0xfc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfd: Pop(1)
0xfe: @@@ ClearReplies(); Obj=0 // @poff=116
0xff: Pop(0)
0x100: PushEmpty(bool, object)
0x101: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x102: Call2 0x4af

0x103: Pop(1)
0x104: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x105: Push((int) 520226)
0x106: Push((int) 21419)
0x107: Push((int) 21418)
0x108: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x109: Pop(3)
0x10a: PushEmpty(bool, object)
0x10b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Call2 0x4bb

0x10d: Pop(1)
0x10e: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10f: Push((int) 520231)
0x110: Push((int) 21424)
0x111: Push((int) 21423)
0x112: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x113: Pop(3)
0x114: PushEmpty(bool, object)
0x115: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x116: Call2 0x4c7

0x117: Pop(1)
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: Push((int) 520239)
0x11a: Push((int) 21432)
0x11b: Push((int) 21431)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11d: Pop(3)
0x11e: Push((int) 520246)
0x11f: Push((int) -1)
0x120: Push((int) 21438)
0x121: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 21432)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral" // @poff=89
0x129: Call2 0xb1

0x12a: Pop(1)
0x12b: Push((int) 520240)
0x12c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12d: Pop(1)
0x12e: @@@ ClearReplies(); Obj=0 // @poff=116
0x12f: Pop(0)
0x130: Push((int) 520241)
0x131: Push((int) 21434)
0x132: Push((int) 21433)
0x133: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 21434)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral" // @poff=89
0x13b: Call2 0xb1

0x13c: Pop(1)
0x13d: Push((int) 520242)
0x13e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13f: Pop(1)
0x140: @@@ ClearReplies(); Obj=0 // @poff=116
0x141: Pop(0)
0x142: Push((int) 520243)
0x143: Push((int) 21436)
0x144: Push((int) 21435)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: Push((int) 530818)
0x148: Push((int) 32128)
0x149: Push((int) 32127)
0x14a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 32128)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0xb1

0x153: Pop(1)
0x154: Push((int) 530819)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: Push((int) 530820)
0x15a: Push((int) 21436)
0x15b: Push((int) 32129)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 21436)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral" // @poff=89
0x164: Call2 0xb1

0x165: Pop(1)
0x166: Push((int) 520244)
0x167: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x168: Pop(1)
0x169: @@@ ClearReplies(); Obj=0 // @poff=116
0x16a: Pop(0)
0x16b: Push((int) 520245)
0x16c: Push((int) -1)
0x16d: Push((int) 21437)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Push((int) 527839)
0x171: Push((int) -1)
0x172: Push((int) 29182)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 21424)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral" // @poff=89
0x17b: Call2 0xb1

0x17c: Pop(1)
0x17d: Push((int) 520232)
0x17e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17f: Pop(1)
0x180: @@@ ClearReplies(); Obj=0 // @poff=116
0x181: Pop(0)
0x182: Push((int) 520233)
0x183: Push((int) 21426)
0x184: Push((int) 21425)
0x185: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Push((int) 21426)
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Neutral" // @poff=89
0x18d: Call2 0xb1

0x18e: Pop(1)
0x18f: Push((int) 520234)
0x190: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x191: Pop(1)
0x192: @@@ ClearReplies(); Obj=0 // @poff=116
0x193: Pop(0)
0x194: Push((int) 520235)
0x195: Push((int) 21428)
0x196: Push((int) 21427)
0x197: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x198: Pop(3)
0x199: Push((int) 520238)
0x19a: Push((int) -1)
0x19b: Push((int) 21430)
0x19c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19d: Pop(3)
0x19e: Return(); Pop(0)

0x19f: Push((int) 21428)
0x1a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral" // @poff=89
0x1a4: Call2 0xb1

0x1a5: Pop(1)
0x1a6: Push((int) 520236)
0x1a7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a8: Pop(1)
0x1a9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1aa: Pop(0)
0x1ab: Push((int) 520237)
0x1ac: Push((int) -1)
0x1ad: Push((int) 21429)
0x1ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 21419)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral" // @poff=89
0x1b6: Call2 0xb1

0x1b7: Pop(1)
0x1b8: Push((int) 520227)
0x1b9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ba: Pop(1)
0x1bb: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bc: Pop(0)
0x1bd: Push((int) 520228)
0x1be: Push((int) 21421)
0x1bf: Push((int) 21420)
0x1c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c1: Pop(3)
0x1c2: Return(); Pop(0)

0x1c3: Push((int) 21421)
0x1c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1c6: PushEmpty(string)
0x1c7: Stack[-1] = "Neutral" // @poff=89
0x1c8: Call2 0xb1

0x1c9: Pop(1)
0x1ca: Push((int) 520229)
0x1cb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cc: Pop(1)
0x1cd: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ce: Pop(0)
0x1cf: Push((int) 520230)
0x1d0: Push((int) -1)
0x1d1: Push((int) 21422)
0x1d2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d3: Pop(3)
0x1d4: Return(); Pop(0)

0x1d5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d6: PushEmpty(bool)
0x1d7: Call2 0x4ec

0x1d8: Pop(0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1da: @ lshStopAnimation()
0x1db: Pop(0)
0x1dc: GOTO 0x1df

0x1dd: @ StopAnimation()
0x1de: Pop(0)
0x1df: Return(); Pop(0)

0x1e0: GOTO 0xc8

0x1e1: Return(); Pop(0)

0x1e2: PushEmpty()
0x1e3: PushEmpty(int, object)
0x1e4: Stack[-3] = Stack[-1]
0x1e5: Push(-2, 1); TaskCall(1)
0x1e6: Call2 0xd

0x1e7: Pop(-2, 1); TaskReturn
0x1e8: Pop(2)
0x1e9: Return(); Pop(0)

0x1ea: PushEmpty()
0x1eb: Call2 0x213

0x1ec: Pop(0)
0x1ed: Return(); Pop(0)

0x1ee: PushEmpty(bool, bool)
0x1ef: Push("cleanup") // @poff=156
0x1f0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f2: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1f3: @ IsLoaded(Stack[-1])
0x1f4: Pop(0)
0x1f5: Pop(0); Push((bool) Stack[-1] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f7: PushEmpty(object)
0x1f8: Call2 0x437

0x1f9: Pop(0)
0x1fa: @ RemoveActor(Stack[-1])
0x1fb: Pop(1)
0x1fc: GOTO 0x201

0x1fd: Push("restore") // @poff=172
0x1fe: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x201: Return(); Pop(2)

0x202: Push( Stack[1 + Tasks[-1].StackPointer] )
0x203: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x204: PushEmpty(object)
0x205: Call2 0x437

0x206: Pop(0)
0x207: @ RemoveActor(Stack[-1])
0x208: Pop(1)
0x209: @ Hold()
0x20a: Pop(0)
0x20b: PushEmpty()
0x20c: Call2 0x284

0x20d: Pop(0)
0x20e: Return(); Pop(0)

0x20f: PushEmpty()
0x210: Call2 0x293

0x211: Pop(0)
0x212: Return(); Pop(0)

0x213: PushEmpty(bool)
0x214: Call2 0x330

0x215: Pop(0)
0x216: Pop(1); Push((bool) Stack[-1] == 0)
0x217: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x218: PushEmpty()
0x219: Push(-0, 0); TaskCall(0)
0x21a: Call2 0x0

0x21b: Pop(-0, 0); TaskReturn
0x21c: Pop(0)
0x21d: PushEmpty()
0x21e: Call2 0x20f

0x21f: Pop(0)
0x220: @ GetDirection(Stack[-0]T)
0x221: Pop(0)
0x222: PushEmpty()
0x223: Call2 0x2c9

0x224: Pop(0)
0x225: GOTO 0x222

0x226: Return(); Pop(0)

0x227: PushEmpty(object, object)
0x228: Push("player") // @poff=188
0x229: @ FindActor(Stack[-2], Stack[-1])
0x22a: Pop(1)
0x22b: Pop(0); Push((bool) Stack[-1] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22d: Stack[-3] = (bool) 0
0x22e: Return(); Pop(2)

0x22f: PushEmpty(bool, object)
0x230: Stack[-3] = Stack[-1]
0x231: Call2 0x327

0x232: Stack[-2] = Stack[-5]
0x233: Pop(2)
0x234: Return(); Pop(2)

0x235: Stack[-1] = 0
0x236: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x237: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x238: @ RotateAsync(Stack[-2], Stack[-1])
0x239: Pop(2)
0x23a: Return(); Pop(0)

0x23b: PushEmpty(object, bool, object, bool)
0x23c: Push("player") // @poff=188
0x23d: @ FindActor(Stack[-3], Stack[-1])
0x23e: Pop(1)
0x23f: Pop(0); Push((bool) Stack[-2] == 0)
0x240: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x241: Stack[-5] = (bool) 0
0x242: Return(); Pop(4)

0x243: PushEmpty(float, object)
0x244: Stack[-4] = Stack[-1]
0x245: Call2 0x315

0x246: Pop(1)
0x247: Push((float)90000.0)
0x248: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24a: Stack[-5] = (bool) 0
0x24b: Return(); Pop(4)

0x24c: @ CanSee(Stack[-1], Stack[-2])
0x24d: Pop(0)
0x24e: Stack[-1] = Stack[-5]
0x24f: Return(); Pop(4)

0x250: Stack[-2] = 0
0x251: PushEmpty(float, float)
0x252: Push((int) 8)
0x253: Push((int) 16)
0x254: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(2)
0x256: Push((int) 10)
0x257: @ SetTimer(Stack[-1], Stack[-2])
0x258: Pop(1)
0x259: Return(); Pop(2)

0x25a: Push((int) 10)
0x25b: @ KillTimer(Stack[-1])
0x25c: Pop(1)
0x25d: Return(); Pop(0)

0x25e: PushEmpty()
0x25f: Push((int) 10)
0x260: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x262: PushEmpty()
0x263: Call2 0x25a

0x264: Pop(0)
0x265: PushEmpty(bool)
0x266: Stack[-1] = (bool) 0
0x267: PushEmpty(bool)
0x268: Call2 0x330

0x269: Pop(0)
0x26a: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26b: PushEmpty(bool)
0x26c: Call2 0x23b

0x26d: Pop(0)
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: Stack[-1] = (bool) 1
0x270: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x271: PushEmpty(bool)
0x272: Call2 0x227

0x273: Pop(0)
0x274: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x275: PushEmpty(bool, object)
0x276: PushEmpty(object)
0x277: Call2 0x437

0x278: Stack[-1] = Stack[-2]
0x279: Pop(1)
0x27a: Call2 0x3c4

0x27b: Pop(2)
0x27c: GOTO 0x283

0x27d: PushEmpty()
0x27e: Call2 0x236

0x27f: Pop(0)
0x280: PushEmpty()
0x281: Call2 0x251

0x282: Pop(0)
0x283: Return(); Pop(0)

0x284: PushEmpty()
0x285: Call2 0x310

0x286: Pop(0)
0x287: PushEmpty()
0x288: Call2 0x25a

0x289: Pop(0)
0x28a: @ lshStopSpeech()
0x28b: Pop(0)
0x28c: @ lshStopAnimation()
0x28d: Pop(0)
0x28e: @ StopAsync()
0x28f: Pop(0)
0x290: @ Hold()
0x291: Pop(0)
0x292: Return(); Pop(0)

0x293: @ StopGroup0()
0x294: Pop(0)
0x295: PushEmpty()
0x296: Call2 0x25a

0x297: Pop(0)
0x298: PushEmpty(string)
0x299: Stack[-1] = "Neutral" // @poff=89
0x29a: Call2 0x414

0x29b: Pop(1)
0x29c: PushEmpty()
0x29d: Call2 0x251

0x29e: Pop(0)
0x29f: Return(); Pop(0)

0x2a0: PushEmpty()
0x2a1: Push(Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a3: PushEmpty()
0x2a4: Call2 0x251

0x2a5: Pop(0)
0x2a6: GOTO 0x2ab

0x2a7: PushEmpty(string)
0x2a8: Stack[-1] = "Neutral" // @poff=89
0x2a9: Call2 0x414

0x2aa: Pop(1)
0x2ab: Return(); Pop(0)

0x2ac: PushEmpty(bool, bool)
0x2ad: @ IsOverrideActive(Stack[-1])
0x2ae: Pop(0)
0x2af: Pop(0); Push((bool) Stack[-1] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2b1: EventDisable(0)
0x2b2: PushEmpty()
0x2b3: Call2 0x310

0x2b4: Pop(0)
0x2b5: PushEmpty(bool, object)
0x2b6: Stack[-5] = Stack[-1]
0x2b7: Call2 0x327

0x2b8: Pop(2)
0x2b9: EventEnable(0)
0x2ba: PushEmpty(object)
0x2bb: Stack[-4] = Stack[-1]
0x2bc: Call2 0x1e2

0x2bd: Pop(1)
0x2be: PushEmpty(string)
0x2bf: Stack[-1] = "Neutral" // @poff=89
0x2c0: Call2 0x414

0x2c1: Pop(1)
0x2c2: PushEmpty()
0x2c3: Call2 0x25a

0x2c4: Pop(0)
0x2c5: PushEmpty()
0x2c6: Call2 0x251

0x2c7: Pop(0)
0x2c8: Return(); Pop(2)

0x2c9: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2ca: @ WaitForAnimEnd()
0x2cb: Pop(0)
0x2cc: PushEmpty(bool)
0x2cd: Call2 0x330

0x2ce: Pop(0)
0x2cf: Pop(1); Push((bool) Stack[-1] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: Return(); Pop(12)

0x2d2: PushEmpty(int)
0x2d3: Call2 0x468

0x2d4: Stack[-1] = Stack[-7]
0x2d5: Pop(1)
0x2d6: Stack[-5] = (int) 0
0x2d7: PushEmpty(bool)
0x2d8: Stack[-1] = (bool) 0
0x2d9: Push((int) 5)
0x2da: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2dc: PushEmpty(bool)
0x2dd: Call2 0x330

0x2de: Pop(0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2e0: Stack[-1] = (bool) 1
0x2e1: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x2e2: Pop(0); Push((bool) Stack[-6] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e4: Push((int) 3)
0x2e5: @ Sleep(Stack[-1], Stack[-5])
0x2e6: Pop(1)
0x2e7: Pop(0); Push((bool) Stack[-4] == 0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e9: GOTO 0x30b

0x2ea: GOTO 0x300

0x2eb: @ irand(Stack[-3], Stack[-6])
0x2ec: Pop(0)
0x2ed: Push((int) 5)
0x2ee: @ irand(Stack[-3], Stack[-1])
0x2ef: Pop(1)
0x2f0: Push((int) 0)
0x2f1: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: Stack[-3] = (int) 0
0x2f4: Push("all") // @poff=138
0x2f5: PushEmpty(string, int)
0x2f6: Stack[-6] = Stack[-1]
0x2f7: Call2 0x461

0x2f8: Pop(1)
0x2f9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2fa: Pop(2)
0x2fb: @ WaitForAnimEnd(Stack[-1])
0x2fc: Pop(0)
0x2fd: Pop(0); Push((bool) Stack[-1] == 0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2ff: GOTO 0x30b

0x300: PushEmpty(bool)
0x301: Call2 0x30e

0x302: Pop(0)
0x303: Pop(1); Push((bool) Stack[-1] == 0)
0x304: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x305: GOTO 0x30b

0x306: @ ResetAAS()
0x307: Pop(0)
0x308: Push((int) 1)
0x309: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x30a: GOTO 0x2d7

0x30b: @ ResetAAS()
0x30c: Pop(0)
0x30d: Return(); Pop(12)

0x30e: Stack[-1] = (bool) 1
0x30f: Return(); Pop(0)

0x310: @ StopAnimation()
0x311: Pop(0)
0x312: @ StopGroup0()
0x313: Pop(0)
0x314: Return(); Pop(0)

0x315: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x316: @ GetPosition(Stack[-3])
0x317: Pop(0)
0x318: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x319: Pop(0)
0x31a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x31b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x31c: Return(); Pop(6)

0x31d: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x31e: @ GetPosition(Stack[-3])
0x31f: Pop(0)
0x320: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x321: Push(CvectorIndex(Stack[-2], 0))
0x322: Push(CvectorIndex(Stack[-3], 2))
0x323: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x324: Pop(2)
0x325: Stack[-1] = Stack[-8]
0x326: Return(); Pop(6)

0x327: PushEmpty(cvector, cvector)
0x328: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x329: Pop(0)
0x32a: PushEmpty(bool, cvector)
0x32b: Stack[-3] = Stack[-1]
0x32c: Call2 0x31d

0x32d: Stack[-2] = Stack[-6]
0x32e: Pop(2)
0x32f: Return(); Pop(2)

0x330: PushEmpty(bool, bool)
0x331: @ IsLoaded(Stack[-1])
0x332: Pop(0)
0x333: Stack[-1] = Stack[-3]
0x334: Return(); Pop(2)

0x335: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x336: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x337: Pop(0)
0x338: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x339: Pop(0)
0x33a: Push(CvectorIndex(Stack[-8], 1))
0x33b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x33c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x33d: @ GetPosition(Stack[-7])
0x33e: Pop(0)
0x33f: @ GetEyesHeight(Stack[-9])
0x340: Pop(0)
0x341: Push(CvectorIndex(Stack[-7], 1))
0x342: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x343: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x344: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x345: Push(CvectorIndex(Stack[-6], 1))
0x346: Stack[-1] = (int) 0
0x347: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x348: Pop(0); Push(Stack[-6] | Stack[-6]);
0x349: Pop(1); Push(Sqrt(Stack[-1]))
0x34a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x34b: Stack[-5] = -Stack[-6]; Pop(0);
0x34c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x34d: PushEmpty(cvector, cvector)
0x34e: Push([0.0, 1.0, 0.0])
0x34f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x350: Call2 0x43d

0x351: Pop(1)
0x352: Push((int) 25)
0x353: Pop(2); Push(Stack[-2] * Stack[-1]);
0x354: Pop(2); Push(Stack[-2] + Stack[-1]);
0x355: Push([0.0, 10.0, 0.0])
0x356: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x357: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x358: @ IsOverrideActive(Stack[-2])
0x359: Pop(0)
0x35a: Push(Stack[-2])
0x35b: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35c: Stack[-21] = (bool) 0
0x35d: Return(); Pop(18)

0x35e: @ StopWorld()
0x35f: Pop(0)
0x360: @ CameraTransit(Stack[-3], Stack[-5])
0x361: Pop(0)
0x362: Push(CvectorIndex(Stack[-4], 0))
0x363: Push(CvectorIndex(Stack[-5], 2))
0x364: @ Rotate(Stack[-2], Stack[-1])
0x365: Pop(2)
0x366: PushEmpty(bool)
0x367: Call2 0x4ec

0x368: Pop(0)
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: GOTO 0x373

0x36b: Push("head") // @poff=228
0x36c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x36d: Pop(1)
0x36e: Push(Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x370: Push("head") // @poff=228
0x371: @ LookAsyncCamera(Stack[-1])
0x372: Pop(1)
0x373: @ CameraWaitForPlayFinish()
0x374: Pop(0)
0x375: @ ResumeWorld()
0x376: Pop(0)
0x377: Stack[-21] = (bool) 1
0x378: Return(); Pop(18)

0x379: PushEmpty(bool, bool)
0x37a: @ CameraSwitchToNormal()
0x37b: Pop(0)
0x37c: PushEmpty(bool)
0x37d: Call2 0x4ec

0x37e: Pop(0)
0x37f: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x380: GOTO 0x389

0x381: Push("head") // @poff=228
0x382: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x383: Pop(1)
0x384: Push(Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x386: Push("head") // @poff=228
0x387: @ UnlookAsync(Stack[-1])
0x388: Pop(1)
0x389: Return(); Pop(2)

0x38a: PushEmpty(int, int, int, int)
0x38b: Push("voice_common") // @poff=238
0x38c: @ GetVariable(Stack[-1], Stack[-3])
0x38d: Pop(1)
0x38e: Push(Stack[-2])
0x38f: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x390: PushEmpty(bool, object)
0x391: Stack[-7] = Stack[-1]
0x392: Call2 0x3c4

0x393: Pop(1)
0x394: Pop(1); Push((bool) Stack[-1] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x396: PushEmpty(bool, object)
0x397: Stack[-7] = Stack[-1]
0x398: Call2 0x3e9

0x399: Pop(1)
0x39a: Pop(1); Push((bool) Stack[-1] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39c: Stack[-6] = (bool) 0
0x39d: Return(); Pop(4)

0x39e: Push((int) 2)
0x39f: @ irand(Stack[-2], Stack[-1])
0x3a0: Pop(1)
0x3a1: Push(Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a3: Push("voice_common") // @poff=238
0x3a4: Push((int) 1)
0x3a5: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3a6: Push((int) 3)
0x3a7: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3a8: @ SetVariable(Stack[-2], Stack[-1])
0x3a9: Pop(2)
0x3aa: GOTO 0x3af

0x3ab: Push("voice_common") // @poff=238
0x3ac: Push((int) 0)
0x3ad: @ SetVariable(Stack[-2], Stack[-1])
0x3ae: Pop(2)
0x3af: GOTO 0x3c2

0x3b0: PushEmpty(bool, object)
0x3b1: Stack[-7] = Stack[-1]
0x3b2: Call2 0x3e9

0x3b3: Pop(1)
0x3b4: Pop(1); Push((bool) Stack[-1] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b6: PushEmpty(bool, object)
0x3b7: Stack[-7] = Stack[-1]
0x3b8: Call2 0x3c4

0x3b9: Pop(1)
0x3ba: Pop(1); Push((bool) Stack[-1] == 0)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: Stack[-6] = (bool) 0
0x3bd: Return(); Pop(4)

0x3be: Push("voice_common") // @poff=238
0x3bf: Push((int) 1)
0x3c0: @ SetVariable(Stack[-2], Stack[-1])
0x3c1: Pop(2)
0x3c2: Stack[-6] = (bool) 1
0x3c3: Return(); Pop(4)

0x3c4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3c5: Stack[-5] = "c" // @poff=264
0x3c6: Stack[-4] = (int) 0
0x3c7: Push((int) 1)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3c9: Push((int) 1)
0x3ca: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3cb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3cc: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x3cd: Pop(1)
0x3ce: Pop(0); Push((bool) Stack[-3] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3d0: GOTO 0x3d4

0x3d1: Push((int) 1)
0x3d2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3d3: GOTO 0x3c7

0x3d4: Pop(0); Push((bool) Stack[-4] == 0)
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: Stack[-12] = (bool) 0
0x3d7: Return(); Pop(10)

0x3d8: Stack[-2] = (int) 0
0x3d9: Push((int) 1)
0x3da: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dc: @ irand(Stack[-2], Stack[-4])
0x3dd: Pop(0)
0x3de: Push((int) 1)
0x3df: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3e0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e1: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3e2: Pop(1)
0x3e3: PushEmpty(bool, string)
0x3e4: Stack[-3] = Stack[-1]
0x3e5: Call2 0x421

0x3e6: Stack[-2] = Stack[-14]
0x3e7: Pop(2)
0x3e8: Return(); Pop(10)

0x3e9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3ea: Push("d") // @poff=234
0x3eb: PushEmpty(int)
0x3ec: Call2 0x458

0x3ed: Pop(0)
0x3ee: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ef: Push("m") // @poff=292
0x3f0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3f1: Stack[-4] = (int) 0
0x3f2: Push((int) 1)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3f4: Push((int) 1)
0x3f5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3f6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f7: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x3f8: Pop(1)
0x3f9: Pop(0); Push((bool) Stack[-3] == 0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fb: GOTO 0x3ff

0x3fc: Push((int) 1)
0x3fd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3fe: GOTO 0x3f2

0x3ff: Pop(0); Push((bool) Stack[-4] == 0)
0x400: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x401: Stack[-12] = (bool) 0
0x402: Return(); Pop(10)

0x403: Stack[-2] = (int) 0
0x404: Push((int) 1)
0x405: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x407: @ irand(Stack[-2], Stack[-4])
0x408: Pop(0)
0x409: Push((int) 1)
0x40a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x40b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x40c: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x40d: Pop(1)
0x40e: PushEmpty(bool, string)
0x40f: Stack[-3] = Stack[-1]
0x410: Call2 0x421

0x411: Stack[-2] = Stack[-14]
0x412: Pop(2)
0x413: Return(); Pop(10)

0x414: PushEmpty(float, float, float, float)
0x415: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x416: Pop(0)
0x417: Push((bool) 0)
0x418: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(1)
0x41a: Return(); Pop(4)

0x41b: PushEmpty(float, float, float, float)
0x41c: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x41d: Pop(0)
0x41e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x41f: Pop(0)
0x420: Return(); Pop(4)

0x421: PushEmpty(bool, bool)
0x422: PushEmpty(bool)
0x423: Call2 0x4ec

0x424: Pop(0)
0x425: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x426: @ lshHasSpeech(Stack[-1], Stack[-3])
0x427: Pop(0)
0x428: Push(Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42a: @ lshPlaySpeech(Stack[-3])
0x42b: Pop(0)
0x42c: Stack[-4] = (bool) 1
0x42d: Return(); Pop(2)

0x42e: Stack[-4] = (bool) 0
0x42f: Return(); Pop(2)

0x430: PushEmpty(bool)
0x431: Call2 0x4ec

0x432: Pop(0)
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: @ lshStopSpeech()
0x435: Pop(0)
0x436: Return(); Pop(0)

0x437: PushEmpty(object, object)
0x438: @ self(Stack[-1])
0x439: Pop(0)
0x43a: Stack[-1] = Stack[-3]
0x43b: Return(); Pop(2)

0x43c: Stack[-1] = 0
0x43d: PushEmpty(float, float)
0x43e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x43f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x440: Push((float)9.999999974752427e-07)
0x441: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-4] = [0.0, 0.0, 0.0]
0x444: Return(); Pop(2)

0x445: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x446: Return(); Pop(2)

0x447: PushEmpty(int, int)
0x448: @ GetVariable(Stack[-3], Stack[-1])
0x449: Pop(0)
0x44a: Stack[-1] = Stack[-4]
0x44b: Return(); Pop(2)

0x44c: PushEmpty(object, object)
0x44d: @ FindActor(Stack[-1], Stack[-4])
0x44e: Pop(0)
0x44f: Pop(0); PushNull((bool) Stack[-1] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x451: Stack[-5] = (bool) 0
0x452: Return(); Pop(2)

0x453: @ Trigger(Stack[-1], Stack[-3])
0x454: Pop(0)
0x455: Stack[-5] = (bool) 1
0x456: Return(); Pop(2)

0x457: Stack[-1] = 0
0x458: PushEmpty(float, float)
0x459: @ GetGameTime(Stack[-1])
0x45a: Pop(0)
0x45b: Push((int) 1)
0x45c: PushEmpty(int)
0x45d: Push((int) 24)
0x45e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x45f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x460: Return(); Pop(2)

0x461: PushEmpty(string, string)
0x462: Stack[-1] = "idle" // @poff=146
0x463: Push(Stack[-3])
0x464: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x465: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x466: Stack[-1] = Stack[-4]
0x467: Return(); Pop(2)

0x468: PushEmpty(int, bool, int, bool)
0x469: Stack[-2] = (int) 0
0x46a: Push("all") // @poff=138
0x46b: PushEmpty(string, int)
0x46c: Stack[-5] = Stack[-1]
0x46d: Call2 0x461

0x46e: Pop(1)
0x46f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(2)
0x471: Pop(0); Push((bool) Stack[-1] == 0)
0x472: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x473: GOTO 0x477

0x474: Push((int) 1)
0x475: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x476: GOTO 0x46a

0x477: Stack[-2] = Stack[-5]
0x478: Return(); Pop(4)

0x479: PushEmpty()
0x47a: Push("oob2MladVladFactory1") // @poff=296
0x47b: Push((int) 1)
0x47c: @ SetVariable(Stack[-2], Stack[-1])
0x47d: Pop(2)
0x47e: Return(); Pop(0)

0x47f: PushEmpty()
0x480: Push("oob2MladVladFactory2") // @poff=338
0x481: Push((int) 1)
0x482: @ SetVariable(Stack[-2], Stack[-1])
0x483: Pop(2)
0x484: Return(); Pop(0)

0x485: PushEmpty()
0x486: Push("oob2MladVladFactory3") // @poff=380
0x487: Push((int) 1)
0x488: @ SetVariable(Stack[-2], Stack[-1])
0x489: Pop(2)
0x48a: Return(); Pop(0)

0x48b: PushEmpty()
0x48c: PushEmpty(bool)
0x48d: Stack[-1] = (bool) 0
0x48e: PushEmpty(bool)
0x48f: Stack[-1] = (bool) 0
0x490: PushEmpty(int, string)
0x491: Stack[-1] = "oob2MladVladFactory1" // @poff=296
0x492: Call2 0x447

0x493: Pop(1)
0x494: Push((int) 0)
0x495: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x497: PushEmpty(int, string)
0x498: Stack[-1] = "oob2MladVladFactory2" // @poff=338
0x499: Call2 0x447

0x49a: Pop(1)
0x49b: Push((int) 0)
0x49c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49e: Stack[-1] = (bool) 1
0x49f: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a0: PushEmpty(int, string)
0x4a1: Stack[-1] = "oob2MladVladFactory3" // @poff=380
0x4a2: Call2 0x447

0x4a3: Pop(1)
0x4a4: Push((int) 0)
0x4a5: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a7: Stack[-1] = (bool) 1
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4a9: PushEmpty(bool, string, string)
0x4aa: Stack[-2] = "quest_b2_01" // @poff=422
0x4ab: Stack[-1] = "remove_mladvlad" // @poff=446
0x4ac: Call2 0x44c

0x4ad: Pop(3)
0x4ae: Return(); Pop(0)

0x4af: PushEmpty()
0x4b0: PushEmpty(int, string)
0x4b1: Stack[-1] = "oob2MladVladFactory1" // @poff=296
0x4b2: Call2 0x447

0x4b3: Pop(1)
0x4b4: Push((int) 0)
0x4b5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b7: Stack[-2] = (bool) 1
0x4b8: Return(); Pop(0)

0x4b9: Stack[-2] = (bool) 0
0x4ba: Return(); Pop(0)

0x4bb: PushEmpty()
0x4bc: PushEmpty(int, string)
0x4bd: Stack[-1] = "oob2MladVladFactory2" // @poff=338
0x4be: Call2 0x447

0x4bf: Pop(1)
0x4c0: Push((int) 0)
0x4c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c3: Stack[-2] = (bool) 1
0x4c4: Return(); Pop(0)

0x4c5: Stack[-2] = (bool) 0
0x4c6: Return(); Pop(0)

0x4c7: PushEmpty()
0x4c8: PushEmpty(int, string)
0x4c9: Stack[-1] = "oob2MladVladFactory3" // @poff=380
0x4ca: Call2 0x447

0x4cb: Pop(1)
0x4cc: Push((int) 0)
0x4cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cf: Stack[-2] = (bool) 1
0x4d0: Return(); Pop(0)

0x4d1: Stack[-2] = (bool) 0
0x4d2: Return(); Pop(0)

0x4d3: PushEmpty(int, int)
0x4d4: Push("branch") // @poff=478
0x4d5: @ GetVariable(Stack[-1], Stack[-2])
0x4d6: Pop(1)
0x4d7: Push((int) 0)
0x4d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4da: Stack[-3] = (int) 1
0x4db: Return(); Pop(2)

0x4dc: GOTO 0x4e2

0x4dd: Push((int) 1)
0x4de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e0: Stack[-3] = (int) 2
0x4e1: Return(); Pop(2)

0x4e2: Stack[-3] = (int) 3
0x4e3: Return(); Pop(2)

0x4e4: Stack[-1] = (int) 515547
0x4e5: Return(); Pop(0)

0x4e6: Stack[-1] = (int) 502872
0x4e7: Return(); Pop(0)

0x4e8: Stack[-1] = "ui/NPC_MladVlad.png" // @poff=492
0x4e9: Return(); Pop(0)

0x4ea: Stack[-1] = "ui/NPC_MladVlad_b.png" // @poff=532
0x4eb: Return(); Pop(0)

0x4ec: Stack[-1] = (bool) 1
0x4ed: Return(); Pop(0)

