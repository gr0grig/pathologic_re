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
	W:k10q01
	W:quest_k10_01
	W:place_prophet
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006b00310030007100300031000000710075006500730074005f006b00310030005f0030003100000070006c006100630065005f00700072006f0070006800650074000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e0067000000
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

RunOp = 0x191
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x195 Vars = (string)
		EVENT_6 Op = 0x1a9 Vars = ()
		EVENT_5 Op = 0x1b6 Vars = ()
		EVENT_7 Op = 0x205 Vars = (int)
		EVENT_45 Op = 0x247 Vars = (bool)
		EVENT_0 Op = 0x253 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2d7

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
0x11: Call2 0x3de

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x331

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2dc

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x483

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x481

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x485

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x487

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x470

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
0x55: Call2 0x320

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
0x68: Push((int) 526985)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x42e

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 526986)
0x73: Push((int) 29458)
0x74: Push((int) 28278)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 526991)
0x78: Push((int) -1)
0x79: Push((int) 28283)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0x489

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x3bb

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
0x9f: Call2 0x489

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
0xaf: Call2 0x3c2

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x3d7

0xb8: Pop(0)
0xb9: Push((int) 28282)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x420

0xc0: Pop(2)
0xc1: Push((int) 28277)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral" // @poff=89
0xc6: Call2 0x9d

0xc7: Pop(1)
0xc8: Push((int) 526985)
0xc9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xca: Pop(1)
0xcb: @@@ ClearReplies(); Obj=0 // @poff=116
0xcc: Pop(0)
0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0x42e

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd2: Push((int) 526986)
0xd3: Push((int) 29458)
0xd4: Push((int) 28278)
0xd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd6: Pop(3)
0xd7: Push((int) 526991)
0xd8: Push((int) -1)
0xd9: Push((int) 28283)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Return(); Pop(0)

0xdd: Push((int) 29458)
0xde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral" // @poff=89
0xe2: Call2 0x9d

0xe3: Pop(1)
0xe4: Push((int) 528112)
0xe5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe6: Pop(1)
0xe7: @@@ ClearReplies(); Obj=0 // @poff=116
0xe8: Pop(0)
0xe9: Push((int) 528113)
0xea: Push((int) 29460)
0xeb: Push((int) 29459)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 29460)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral" // @poff=89
0xf4: Call2 0x9d

0xf5: Pop(1)
0xf6: Push((int) 528114)
0xf7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf8: Pop(1)
0xf9: @@@ ClearReplies(); Obj=0 // @poff=116
0xfa: Pop(0)
0xfb: Push((int) 528115)
0xfc: Push((int) 28279)
0xfd: Push((int) 29461)
0xfe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xff: Pop(3)
0x100: Push((int) 528116)
0x101: Push((int) 29464)
0x102: Push((int) 29462)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Push((int) 528117)
0x106: Push((int) 29464)
0x107: Push((int) 29463)
0x108: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: Push((int) 29464)
0x10c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x10e: PushEmpty(string)
0x10f: Stack[-1] = "Neutral" // @poff=89
0x110: Call2 0x9d

0x111: Pop(1)
0x112: Push((int) 528118)
0x113: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x114: Pop(1)
0x115: @@@ ClearReplies(); Obj=0 // @poff=116
0x116: Pop(0)
0x117: Push((int) 528119)
0x118: Push((int) -1)
0x119: Push((int) 29466)
0x11a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Push((int) 28279)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral" // @poff=89
0x122: Call2 0x9d

0x123: Pop(1)
0x124: Push((int) 526987)
0x125: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x126: Pop(1)
0x127: @@@ ClearReplies(); Obj=0 // @poff=116
0x128: Pop(0)
0x129: Push((int) 528120)
0x12a: Push((int) 29468)
0x12b: Push((int) 29467)
0x12c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 29468)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral" // @poff=89
0x134: Call2 0x9d

0x135: Pop(1)
0x136: Push((int) 528121)
0x137: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x138: Pop(1)
0x139: @@@ ClearReplies(); Obj=0 // @poff=116
0x13a: Pop(0)
0x13b: Push((int) 528122)
0x13c: Push((int) 29470)
0x13d: Push((int) 29469)
0x13e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13f: Pop(3)
0x140: Push((int) 528124)
0x141: Push((int) 29472)
0x142: Push((int) 29471)
0x143: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x144: Pop(3)
0x145: Return(); Pop(0)

0x146: Push((int) 29472)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral" // @poff=89
0x14b: Call2 0x9d

0x14c: Pop(1)
0x14d: Push((int) 528125)
0x14e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14f: Pop(1)
0x150: @@@ ClearReplies(); Obj=0 // @poff=116
0x151: Pop(0)
0x152: Push((int) 528126)
0x153: Push((int) 28281)
0x154: Push((int) 29473)
0x155: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 29470)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Neutral" // @poff=89
0x15d: Call2 0x9d

0x15e: Pop(1)
0x15f: Push((int) 528123)
0x160: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x161: Pop(1)
0x162: @@@ ClearReplies(); Obj=0 // @poff=116
0x163: Pop(0)
0x164: Push((int) 526988)
0x165: Push((int) 28281)
0x166: Push((int) 28280)
0x167: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 28281)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral" // @poff=89
0x16f: Call2 0x9d

0x170: Pop(1)
0x171: Push((int) 526989)
0x172: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x173: Pop(1)
0x174: @@@ ClearReplies(); Obj=0 // @poff=116
0x175: Pop(0)
0x176: Push((int) 526990)
0x177: Push((int) -1)
0x178: Push((int) 28282)
0x179: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17d: PushEmpty(bool)
0x17e: Call2 0x489

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x181: @ lshStopAnimation()
0x182: Pop(0)
0x183: GOTO 0x186

0x184: @ StopAnimation()
0x185: Pop(0)
0x186: Return(); Pop(0)

0x187: GOTO 0xb4

0x188: Return(); Pop(0)

0x189: PushEmpty()
0x18a: PushEmpty(int, object)
0x18b: Stack[-3] = Stack[-1]
0x18c: Push(-2, 1); TaskCall(1)
0x18d: Call2 0xd

0x18e: Pop(-2, 1); TaskReturn
0x18f: Pop(2)
0x190: Return(); Pop(0)

0x191: PushEmpty()
0x192: Call2 0x1ba

0x193: Pop(0)
0x194: Return(); Pop(0)

0x195: PushEmpty(bool, bool)
0x196: Push("cleanup") // @poff=156
0x197: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x199: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x19a: @ IsLoaded(Stack[-1])
0x19b: Pop(0)
0x19c: Pop(0); Push((bool) Stack[-1] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19e: PushEmpty(object)
0x19f: Call2 0x3de

0x1a0: Pop(0)
0x1a1: @ RemoveActor(Stack[-1])
0x1a2: Pop(1)
0x1a3: GOTO 0x1a8

0x1a4: Push("restore") // @poff=172
0x1a5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1a8: Return(); Pop(2)

0x1a9: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ab: PushEmpty(object)
0x1ac: Call2 0x3de

0x1ad: Pop(0)
0x1ae: @ RemoveActor(Stack[-1])
0x1af: Pop(1)
0x1b0: @ Hold()
0x1b1: Pop(0)
0x1b2: PushEmpty()
0x1b3: Call2 0x22b

0x1b4: Pop(0)
0x1b5: Return(); Pop(0)

0x1b6: PushEmpty()
0x1b7: Call2 0x23a

0x1b8: Pop(0)
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty(bool)
0x1bb: Call2 0x2d7

0x1bc: Pop(0)
0x1bd: Pop(1); Push((bool) Stack[-1] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1bf: PushEmpty()
0x1c0: Push(-0, 0); TaskCall(0)
0x1c1: Call2 0x0

0x1c2: Pop(-0, 0); TaskReturn
0x1c3: Pop(0)
0x1c4: PushEmpty()
0x1c5: Call2 0x1b6

0x1c6: Pop(0)
0x1c7: @ GetDirection(Stack[-0]T)
0x1c8: Pop(0)
0x1c9: PushEmpty()
0x1ca: Call2 0x270

0x1cb: Pop(0)
0x1cc: GOTO 0x1c9

0x1cd: Return(); Pop(0)

0x1ce: PushEmpty(object, object)
0x1cf: Push("player") // @poff=188
0x1d0: @ FindActor(Stack[-2], Stack[-1])
0x1d1: Pop(1)
0x1d2: Pop(0); Push((bool) Stack[-1] == 0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d4: Stack[-3] = (bool) 0
0x1d5: Return(); Pop(2)

0x1d6: PushEmpty(bool, object)
0x1d7: Stack[-3] = Stack[-1]
0x1d8: Call2 0x2ce

0x1d9: Stack[-2] = Stack[-5]
0x1da: Pop(2)
0x1db: Return(); Pop(2)

0x1dc: Stack[-1] = 0
0x1dd: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x1de: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x1df: @ RotateAsync(Stack[-2], Stack[-1])
0x1e0: Pop(2)
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty(object, bool, object, bool)
0x1e3: Push("player") // @poff=188
0x1e4: @ FindActor(Stack[-3], Stack[-1])
0x1e5: Pop(1)
0x1e6: Pop(0); Push((bool) Stack[-2] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e8: Stack[-5] = (bool) 0
0x1e9: Return(); Pop(4)

0x1ea: PushEmpty(float, object)
0x1eb: Stack[-4] = Stack[-1]
0x1ec: Call2 0x2bc

0x1ed: Pop(1)
0x1ee: Push((float)90000.0)
0x1ef: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f1: Stack[-5] = (bool) 0
0x1f2: Return(); Pop(4)

0x1f3: @ CanSee(Stack[-1], Stack[-2])
0x1f4: Pop(0)
0x1f5: Stack[-1] = Stack[-5]
0x1f6: Return(); Pop(4)

0x1f7: Stack[-2] = 0
0x1f8: PushEmpty(float, float)
0x1f9: Push((int) 8)
0x1fa: Push((int) 16)
0x1fb: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(2)
0x1fd: Push((int) 10)
0x1fe: @ SetTimer(Stack[-1], Stack[-2])
0x1ff: Pop(1)
0x200: Return(); Pop(2)

0x201: Push((int) 10)
0x202: @ KillTimer(Stack[-1])
0x203: Pop(1)
0x204: Return(); Pop(0)

0x205: PushEmpty()
0x206: Push((int) 10)
0x207: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x209: PushEmpty()
0x20a: Call2 0x201

0x20b: Pop(0)
0x20c: PushEmpty(bool)
0x20d: Stack[-1] = (bool) 0
0x20e: PushEmpty(bool)
0x20f: Call2 0x2d7

0x210: Pop(0)
0x211: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x212: PushEmpty(bool)
0x213: Call2 0x1e2

0x214: Pop(0)
0x215: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x216: Stack[-1] = (bool) 1
0x217: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x218: PushEmpty(bool)
0x219: Call2 0x1ce

0x21a: Pop(0)
0x21b: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21c: PushEmpty(bool, object)
0x21d: PushEmpty(object)
0x21e: Call2 0x3de

0x21f: Stack[-1] = Stack[-2]
0x220: Pop(1)
0x221: Call2 0x36b

0x222: Pop(2)
0x223: GOTO 0x22a

0x224: PushEmpty()
0x225: Call2 0x1dd

0x226: Pop(0)
0x227: PushEmpty()
0x228: Call2 0x1f8

0x229: Pop(0)
0x22a: Return(); Pop(0)

0x22b: PushEmpty()
0x22c: Call2 0x2b7

0x22d: Pop(0)
0x22e: PushEmpty()
0x22f: Call2 0x201

0x230: Pop(0)
0x231: @ lshStopSpeech()
0x232: Pop(0)
0x233: @ lshStopAnimation()
0x234: Pop(0)
0x235: @ StopAsync()
0x236: Pop(0)
0x237: @ Hold()
0x238: Pop(0)
0x239: Return(); Pop(0)

0x23a: @ StopGroup0()
0x23b: Pop(0)
0x23c: PushEmpty()
0x23d: Call2 0x201

0x23e: Pop(0)
0x23f: PushEmpty(string)
0x240: Stack[-1] = "Neutral" // @poff=89
0x241: Call2 0x3bb

0x242: Pop(1)
0x243: PushEmpty()
0x244: Call2 0x1f8

0x245: Pop(0)
0x246: Return(); Pop(0)

0x247: PushEmpty()
0x248: Push(Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24a: PushEmpty()
0x24b: Call2 0x1f8

0x24c: Pop(0)
0x24d: GOTO 0x252

0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Neutral" // @poff=89
0x250: Call2 0x3bb

0x251: Pop(1)
0x252: Return(); Pop(0)

0x253: PushEmpty(bool, bool)
0x254: @ IsOverrideActive(Stack[-1])
0x255: Pop(0)
0x256: Pop(0); Push((bool) Stack[-1] == 0)
0x257: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x258: EventDisable(0)
0x259: PushEmpty()
0x25a: Call2 0x2b7

0x25b: Pop(0)
0x25c: PushEmpty(bool, object)
0x25d: Stack[-5] = Stack[-1]
0x25e: Call2 0x2ce

0x25f: Pop(2)
0x260: EventEnable(0)
0x261: PushEmpty(object)
0x262: Stack[-4] = Stack[-1]
0x263: Call2 0x189

0x264: Pop(1)
0x265: PushEmpty(string)
0x266: Stack[-1] = "Neutral" // @poff=89
0x267: Call2 0x3bb

0x268: Pop(1)
0x269: PushEmpty()
0x26a: Call2 0x201

0x26b: Pop(0)
0x26c: PushEmpty()
0x26d: Call2 0x1f8

0x26e: Pop(0)
0x26f: Return(); Pop(2)

0x270: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x271: @ WaitForAnimEnd()
0x272: Pop(0)
0x273: PushEmpty(bool)
0x274: Call2 0x2d7

0x275: Pop(0)
0x276: Pop(1); Push((bool) Stack[-1] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: Return(); Pop(12)

0x279: PushEmpty(int)
0x27a: Call2 0x40f

0x27b: Stack[-1] = Stack[-7]
0x27c: Pop(1)
0x27d: Stack[-5] = (int) 0
0x27e: PushEmpty(bool)
0x27f: Stack[-1] = (bool) 0
0x280: Push((int) 5)
0x281: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x283: PushEmpty(bool)
0x284: Call2 0x2d7

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: Stack[-1] = (bool) 1
0x288: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x289: Pop(0); Push((bool) Stack[-6] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x28b: Push((int) 3)
0x28c: @ Sleep(Stack[-1], Stack[-5])
0x28d: Pop(1)
0x28e: Pop(0); Push((bool) Stack[-4] == 0)
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: GOTO 0x2b2

0x291: GOTO 0x2a7

0x292: @ irand(Stack[-3], Stack[-6])
0x293: Pop(0)
0x294: Push((int) 5)
0x295: @ irand(Stack[-3], Stack[-1])
0x296: Pop(1)
0x297: Push((int) 0)
0x298: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: Stack[-3] = (int) 0
0x29b: Push("all") // @poff=138
0x29c: PushEmpty(string, int)
0x29d: Stack[-6] = Stack[-1]
0x29e: Call2 0x408

0x29f: Pop(1)
0x2a0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a1: Pop(2)
0x2a2: @ WaitForAnimEnd(Stack[-1])
0x2a3: Pop(0)
0x2a4: Pop(0); Push((bool) Stack[-1] == 0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a6: GOTO 0x2b2

0x2a7: PushEmpty(bool)
0x2a8: Call2 0x2b5

0x2a9: Pop(0)
0x2aa: Pop(1); Push((bool) Stack[-1] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2b2

0x2ad: @ ResetAAS()
0x2ae: Pop(0)
0x2af: Push((int) 1)
0x2b0: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2b1: GOTO 0x27e

0x2b2: @ ResetAAS()
0x2b3: Pop(0)
0x2b4: Return(); Pop(12)

0x2b5: Stack[-1] = (bool) 1
0x2b6: Return(); Pop(0)

0x2b7: @ StopAnimation()
0x2b8: Pop(0)
0x2b9: @ StopGroup0()
0x2ba: Pop(0)
0x2bb: Return(); Pop(0)

0x2bc: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2bd: @ GetPosition(Stack[-3])
0x2be: Pop(0)
0x2bf: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x2c0: Pop(0)
0x2c1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2c2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2c3: Return(); Pop(6)

0x2c4: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2c5: @ GetPosition(Stack[-3])
0x2c6: Pop(0)
0x2c7: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2c8: Push(CvectorIndex(Stack[-2], 0))
0x2c9: Push(CvectorIndex(Stack[-3], 2))
0x2ca: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2cb: Pop(2)
0x2cc: Stack[-1] = Stack[-8]
0x2cd: Return(); Pop(6)

0x2ce: PushEmpty(cvector, cvector)
0x2cf: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x2d0: Pop(0)
0x2d1: PushEmpty(bool, cvector)
0x2d2: Stack[-3] = Stack[-1]
0x2d3: Call2 0x2c4

0x2d4: Stack[-2] = Stack[-6]
0x2d5: Pop(2)
0x2d6: Return(); Pop(2)

0x2d7: PushEmpty(bool, bool)
0x2d8: @ IsLoaded(Stack[-1])
0x2d9: Pop(0)
0x2da: Stack[-1] = Stack[-3]
0x2db: Return(); Pop(2)

0x2dc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2dd: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x2de: Pop(0)
0x2df: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x2e0: Pop(0)
0x2e1: Push(CvectorIndex(Stack[-8], 1))
0x2e2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2e3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2e4: @ GetPosition(Stack[-7])
0x2e5: Pop(0)
0x2e6: @ GetEyesHeight(Stack[-9])
0x2e7: Pop(0)
0x2e8: Push(CvectorIndex(Stack[-7], 1))
0x2e9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ea: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2eb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2ec: Push(CvectorIndex(Stack[-6], 1))
0x2ed: Stack[-1] = (int) 0
0x2ee: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2ef: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2f0: Pop(1); Push(Sqrt(Stack[-1]))
0x2f1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2f2: Stack[-5] = -Stack[-6]; Pop(0);
0x2f3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2f4: PushEmpty(cvector, cvector)
0x2f5: Push([0.0, 1.0, 0.0])
0x2f6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2f7: Call2 0x3e4

0x2f8: Pop(1)
0x2f9: Push((int) 25)
0x2fa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2fb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2fc: Push([0.0, 10.0, 0.0])
0x2fd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2fe: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ff: @ IsOverrideActive(Stack[-2])
0x300: Pop(0)
0x301: Push(Stack[-2])
0x302: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x303: Stack[-21] = (bool) 0
0x304: Return(); Pop(18)

0x305: @ StopWorld()
0x306: Pop(0)
0x307: @ CameraTransit(Stack[-3], Stack[-5])
0x308: Pop(0)
0x309: Push(CvectorIndex(Stack[-4], 0))
0x30a: Push(CvectorIndex(Stack[-5], 2))
0x30b: @ Rotate(Stack[-2], Stack[-1])
0x30c: Pop(2)
0x30d: PushEmpty(bool)
0x30e: Call2 0x489

0x30f: Pop(0)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: GOTO 0x31a

0x312: Push("head") // @poff=228
0x313: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x314: Pop(1)
0x315: Push(Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x317: Push("head") // @poff=228
0x318: @ LookAsyncCamera(Stack[-1])
0x319: Pop(1)
0x31a: @ CameraWaitForPlayFinish()
0x31b: Pop(0)
0x31c: @ ResumeWorld()
0x31d: Pop(0)
0x31e: Stack[-21] = (bool) 1
0x31f: Return(); Pop(18)

0x320: PushEmpty(bool, bool)
0x321: @ CameraSwitchToNormal()
0x322: Pop(0)
0x323: PushEmpty(bool)
0x324: Call2 0x489

0x325: Pop(0)
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: GOTO 0x330

0x328: Push("head") // @poff=228
0x329: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x32a: Pop(1)
0x32b: Push(Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32d: Push("head") // @poff=228
0x32e: @ UnlookAsync(Stack[-1])
0x32f: Pop(1)
0x330: Return(); Pop(2)

0x331: PushEmpty(int, int, int, int)
0x332: Push("voice_common") // @poff=238
0x333: @ GetVariable(Stack[-1], Stack[-3])
0x334: Pop(1)
0x335: Push(Stack[-2])
0x336: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x337: PushEmpty(bool, object)
0x338: Stack[-7] = Stack[-1]
0x339: Call2 0x36b

0x33a: Pop(1)
0x33b: Pop(1); Push((bool) Stack[-1] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x33d: PushEmpty(bool, object)
0x33e: Stack[-7] = Stack[-1]
0x33f: Call2 0x390

0x340: Pop(1)
0x341: Pop(1); Push((bool) Stack[-1] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-6] = (bool) 0
0x344: Return(); Pop(4)

0x345: Push((int) 2)
0x346: @ irand(Stack[-2], Stack[-1])
0x347: Pop(1)
0x348: Push(Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34a: Push("voice_common") // @poff=238
0x34b: Push((int) 1)
0x34c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x34d: Push((int) 3)
0x34e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x34f: @ SetVariable(Stack[-2], Stack[-1])
0x350: Pop(2)
0x351: GOTO 0x356

0x352: Push("voice_common") // @poff=238
0x353: Push((int) 0)
0x354: @ SetVariable(Stack[-2], Stack[-1])
0x355: Pop(2)
0x356: GOTO 0x369

0x357: PushEmpty(bool, object)
0x358: Stack[-7] = Stack[-1]
0x359: Call2 0x390

0x35a: Pop(1)
0x35b: Pop(1); Push((bool) Stack[-1] == 0)
0x35c: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x35d: PushEmpty(bool, object)
0x35e: Stack[-7] = Stack[-1]
0x35f: Call2 0x36b

0x360: Pop(1)
0x361: Pop(1); Push((bool) Stack[-1] == 0)
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: Stack[-6] = (bool) 0
0x364: Return(); Pop(4)

0x365: Push("voice_common") // @poff=238
0x366: Push((int) 1)
0x367: @ SetVariable(Stack[-2], Stack[-1])
0x368: Pop(2)
0x369: Stack[-6] = (bool) 1
0x36a: Return(); Pop(4)

0x36b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x36c: Stack[-5] = "c" // @poff=264
0x36d: Stack[-4] = (int) 0
0x36e: Push((int) 1)
0x36f: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x370: Push((int) 1)
0x371: Pop(1); Push(Stack[-5] + Stack[-1]);
0x372: Pop(1); Push(Stack[-6] + Stack[-1]);
0x373: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x374: Pop(1)
0x375: Pop(0); Push((bool) Stack[-3] == 0)
0x376: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x377: GOTO 0x37b

0x378: Push((int) 1)
0x379: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x37a: GOTO 0x36e

0x37b: Pop(0); Push((bool) Stack[-4] == 0)
0x37c: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37d: Stack[-12] = (bool) 0
0x37e: Return(); Pop(10)

0x37f: Stack[-2] = (int) 0
0x380: Push((int) 1)
0x381: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x383: @ irand(Stack[-2], Stack[-4])
0x384: Pop(0)
0x385: Push((int) 1)
0x386: Pop(1); Push(Stack[-3] + Stack[-1]);
0x387: Pop(1); Push(Stack[-6] + Stack[-1]);
0x388: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x389: Pop(1)
0x38a: PushEmpty(bool, string)
0x38b: Stack[-3] = Stack[-1]
0x38c: Call2 0x3c8

0x38d: Stack[-2] = Stack[-14]
0x38e: Pop(2)
0x38f: Return(); Pop(10)

0x390: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x391: Push("d") // @poff=234
0x392: PushEmpty(int)
0x393: Call2 0x3ff

0x394: Pop(0)
0x395: Pop(2); Push(Stack[-2] + Stack[-1]);
0x396: Push("m") // @poff=292
0x397: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x398: Stack[-4] = (int) 0
0x399: Push((int) 1)
0x39a: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x39b: Push((int) 1)
0x39c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x39d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x39e: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x39f: Pop(1)
0x3a0: Pop(0); Push((bool) Stack[-3] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a2: GOTO 0x3a6

0x3a3: Push((int) 1)
0x3a4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3a5: GOTO 0x399

0x3a6: Pop(0); Push((bool) Stack[-4] == 0)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a8: Stack[-12] = (bool) 0
0x3a9: Return(); Pop(10)

0x3aa: Stack[-2] = (int) 0
0x3ab: Push((int) 1)
0x3ac: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ae: @ irand(Stack[-2], Stack[-4])
0x3af: Pop(0)
0x3b0: Push((int) 1)
0x3b1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3b2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b3: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3b4: Pop(1)
0x3b5: PushEmpty(bool, string)
0x3b6: Stack[-3] = Stack[-1]
0x3b7: Call2 0x3c8

0x3b8: Stack[-2] = Stack[-14]
0x3b9: Pop(2)
0x3ba: Return(); Pop(10)

0x3bb: PushEmpty(float, float, float, float)
0x3bc: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3bd: Pop(0)
0x3be: Push((bool) 0)
0x3bf: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(1)
0x3c1: Return(); Pop(4)

0x3c2: PushEmpty(float, float, float, float)
0x3c3: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3c4: Pop(0)
0x3c5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3c6: Pop(0)
0x3c7: Return(); Pop(4)

0x3c8: PushEmpty(bool, bool)
0x3c9: PushEmpty(bool)
0x3ca: Call2 0x489

0x3cb: Pop(0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3cd: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3ce: Pop(0)
0x3cf: Push(Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d1: @ lshPlaySpeech(Stack[-3])
0x3d2: Pop(0)
0x3d3: Stack[-4] = (bool) 1
0x3d4: Return(); Pop(2)

0x3d5: Stack[-4] = (bool) 0
0x3d6: Return(); Pop(2)

0x3d7: PushEmpty(bool)
0x3d8: Call2 0x489

0x3d9: Pop(0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3db: @ lshStopSpeech()
0x3dc: Pop(0)
0x3dd: Return(); Pop(0)

0x3de: PushEmpty(object, object)
0x3df: @ self(Stack[-1])
0x3e0: Pop(0)
0x3e1: Stack[-1] = Stack[-3]
0x3e2: Return(); Pop(2)

0x3e3: Stack[-1] = 0
0x3e4: PushEmpty(float, float)
0x3e5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3e6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3e7: Push((float)9.999999974752427e-07)
0x3e8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: Stack[-4] = [0.0, 0.0, 0.0]
0x3eb: Return(); Pop(2)

0x3ec: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3ed: Return(); Pop(2)

0x3ee: PushEmpty(int, int)
0x3ef: @ GetVariable(Stack[-3], Stack[-1])
0x3f0: Pop(0)
0x3f1: Stack[-1] = Stack[-4]
0x3f2: Return(); Pop(2)

0x3f3: PushEmpty(object, object)
0x3f4: @ FindActor(Stack[-1], Stack[-4])
0x3f5: Pop(0)
0x3f6: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f8: Stack[-5] = (bool) 0
0x3f9: Return(); Pop(2)

0x3fa: @ Trigger(Stack[-1], Stack[-3])
0x3fb: Pop(0)
0x3fc: Stack[-5] = (bool) 1
0x3fd: Return(); Pop(2)

0x3fe: Stack[-1] = 0
0x3ff: PushEmpty(float, float)
0x400: @ GetGameTime(Stack[-1])
0x401: Pop(0)
0x402: Push((int) 1)
0x403: PushEmpty(int)
0x404: Push((int) 24)
0x405: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x406: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x407: Return(); Pop(2)

0x408: PushEmpty(string, string)
0x409: Stack[-1] = "idle" // @poff=146
0x40a: Push(Stack[-3])
0x40b: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x40d: Stack[-1] = Stack[-4]
0x40e: Return(); Pop(2)

0x40f: PushEmpty(int, bool, int, bool)
0x410: Stack[-2] = (int) 0
0x411: Push("all") // @poff=138
0x412: PushEmpty(string, int)
0x413: Stack[-5] = Stack[-1]
0x414: Call2 0x408

0x415: Pop(1)
0x416: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x417: Pop(2)
0x418: Pop(0); Push((bool) Stack[-1] == 0)
0x419: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x41a: GOTO 0x41e

0x41b: Push((int) 1)
0x41c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x41d: GOTO 0x411

0x41e: Stack[-2] = Stack[-5]
0x41f: Return(); Pop(4)

0x420: PushEmpty()
0x421: Push("k10q01") // @poff=296
0x422: Push((int) 7)
0x423: @ SetVariable(Stack[-2], Stack[-1])
0x424: Pop(2)
0x425: PushEmpty()
0x426: Call2 0x43a

0x427: Pop(0)
0x428: PushEmpty(bool, string, string)
0x429: Stack[-2] = "quest_k10_01" // @poff=310
0x42a: Stack[-1] = "place_prophet" // @poff=336
0x42b: Call2 0x3f3

0x42c: Pop(3)
0x42d: Return(); Pop(0)

0x42e: PushEmpty()
0x42f: PushEmpty(int, string)
0x430: Stack[-1] = "k10q01" // @poff=296
0x431: Call2 0x3ee

0x432: Pop(1)
0x433: Push((int) 6)
0x434: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-2] = (bool) 1
0x437: Return(); Pop(0)

0x438: Stack[-2] = (bool) 0
0x439: Return(); Pop(0)

0x43a: PushEmpty(object, object)
0x43b: Push((int) 454)
0x43c: Push((int) 1)
0x43d: Push((int) 527012)
0x43e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x43f: Pop(3)
0x440: PushEmpty(bool, object, int)
0x441: Stack[-4] = Stack[-2]
0x442: Stack[-1] = (int) 447
0x443: Call2 0x454

0x444: Pop(3)
0x445: Return(); Pop(2)

0x446: Stack[-1] = 0
0x447: PushEmpty(object, object)
0x448: @ GetDiaryRoot(Stack[-1])
0x449: Pop(0)
0x44a: Pop(0); Push((bool) Stack[-1] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44c: Push("Can't retrieve diary root") // @poff=364
0x44d: @ Trace(Stack[-1])
0x44e: Pop(1)
0x44f: Stack[-3] = (bool) 0
0x450: Return(); Pop(2)

0x451: Stack[-1] = Stack[-3]
0x452: Return(); Pop(2)

0x453: Stack[-1] = 0
0x454: PushEmpty(object, object, int, object, object, int)
0x455: PushEmpty(object)
0x456: Call2 0x447

0x457: Stack[-1] = Stack[-4]
0x458: Pop(1)
0x459: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=416
0x45a: Pop(0)
0x45b: Pop(0); Push((bool) Stack[-2] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45d: Push("Can't find diary parent with id: ") // @poff=421
0x45e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x45f: @ Trace(Stack[-1])
0x460: Pop(1)
0x461: Stack[-9] = (bool) 0
0x462: Return(); Pop(6)

0x463: @@ AddChild(Stack[-8]); Obj=2 // @poff=489
0x464: Pop(0)
0x465: Push((int) 7)
0x466: @ SendWorldWndMessage(Stack[-1])
0x467: Pop(1)
0x468: @@ GetCategory(Stack[-1]); Obj=8 // @poff=498
0x469: Pop(0)
0x46a: @ SetDiarySection(Stack[-1])
0x46b: Pop(0)
0x46c: Stack[-9] = (bool) 0
0x46d: Return(); Pop(6)

0x46e: Stack[-2] = 0
0x46f: Stack[-3] = 0
0x470: PushEmpty(int, int)
0x471: Push("branch") // @poff=510
0x472: @ GetVariable(Stack[-1], Stack[-2])
0x473: Pop(1)
0x474: Push((int) 0)
0x475: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x477: Stack[-3] = (int) 1
0x478: Return(); Pop(2)

0x479: GOTO 0x47f

0x47a: Push((int) 1)
0x47b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47d: Stack[-3] = (int) 2
0x47e: Return(); Pop(2)

0x47f: Stack[-3] = (int) 3
0x480: Return(); Pop(2)

0x481: Stack[-1] = (int) 515592
0x482: Return(); Pop(0)

0x483: Stack[-1] = (int) 511961
0x484: Return(); Pop(0)

0x485: Stack[-1] = "ui/NPC_Burah.png" // @poff=524
0x486: Return(); Pop(0)

0x487: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=558
0x488: Return(); Pop(0)

0x489: Stack[-1] = (bool) 1
0x48a: Return(); Pop(0)

