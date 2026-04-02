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
	W:ood12BurahSobor1
	W:ood12BurahSobor2
	W:ood12BurahSobor3
	W:branch
	W:ui/NPC_Burah.png
	W:ui/NPC_Burah_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f006400310032004200750072006100680053006f0062006f007200310000006f006f006400310032004200750072006100680053006f0062006f007200320000006f006f006400310032004200750072006100680053006f0062006f007200330000006200720061006e00630068000000750069002f004e00500043005f00420075007200610068002e0070006e0067000000750069002f004e00500043005f00420075007200610068005f0062002e0070006e0067000000
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

RunOp = 0x1fe
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x202 Vars = (object)
		EVENT_26 Op = 0x20e Vars = (string)
		EVENT_6 Op = 0x22a Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x33e

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x291

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x23c

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x3a5

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x3a3

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x3a7

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x3a9

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x392

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
0x48: Call2 0x280

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

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral" // @poff=89
0x59: Call2 0xa4

0x5a: Pop(1)
0x5b: Push((int) 540306)
0x5c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d: Pop(1)
0x5e: @@@ ClearReplies(); Obj=0 // @poff=116
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x36e

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 540307)
0x66: Push((int) 42289)
0x67: Push((int) 42288)
0x68: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x69: Pop(3)
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0x37a

0x6d: Pop(1)
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: Push((int) 540320)
0x70: Push((int) 42303)
0x71: Push((int) 42302)
0x72: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x73: Pop(3)
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x386

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: Push((int) 540323)
0x7a: Push((int) 42306)
0x7b: Push((int) 42305)
0x7c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7d: Pop(3)
0x7e: Push((int) 540333)
0x7f: Push((int) -1)
0x80: Push((int) 42315)
0x81: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x3ab

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x31b

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
0xa6: Call2 0x3ab

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
0xb6: Call2 0x322

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x337

0xbf: Pop(0)
0xc0: Push((int) 42288)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x35c

0xc7: Pop(2)
0xc8: Push((int) 42302)
0xc9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x362

0xcf: Pop(2)
0xd0: Push((int) 42305)
0xd1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd3: PushEmpty(object, object)
0xd4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6: Call2 0x368

0xd7: Pop(2)
0xd8: Push((int) 42287)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral" // @poff=89
0xdd: Call2 0xa4

0xde: Pop(1)
0xdf: Push((int) 540306)
0xe0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe1: Pop(1)
0xe2: @@@ ClearReplies(); Obj=0 // @poff=116
0xe3: Pop(0)
0xe4: PushEmpty(bool, object)
0xe5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Call2 0x36e

0xe7: Pop(1)
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: Push((int) 540307)
0xea: Push((int) 42289)
0xeb: Push((int) 42288)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: PushEmpty(bool, object)
0xef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Call2 0x37a

0xf1: Pop(1)
0xf2: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf3: Push((int) 540320)
0xf4: Push((int) 42303)
0xf5: Push((int) 42302)
0xf6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf7: Pop(3)
0xf8: PushEmpty(bool, object)
0xf9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Call2 0x386

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: Push((int) 540323)
0xfe: Push((int) 42306)
0xff: Push((int) 42305)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Push((int) 540333)
0x103: Push((int) -1)
0x104: Push((int) 42315)
0x105: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 42306)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral" // @poff=89
0x10d: Call2 0xa4

0x10e: Pop(1)
0x10f: Push((int) 540324)
0x110: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x111: Pop(1)
0x112: @@@ ClearReplies(); Obj=0 // @poff=116
0x113: Pop(0)
0x114: Push((int) 540325)
0x115: Push((int) 42308)
0x116: Push((int) 42307)
0x117: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x118: Pop(3)
0x119: Push((int) 540384)
0x11a: Push((int) -1)
0x11b: Push((int) 42370)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 42308)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral" // @poff=89
0x124: Call2 0xa4

0x125: Pop(1)
0x126: Push((int) 540326)
0x127: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x128: Pop(1)
0x129: @@@ ClearReplies(); Obj=0 // @poff=116
0x12a: Pop(0)
0x12b: Push((int) 540327)
0x12c: Push((int) 42310)
0x12d: Push((int) 42309)
0x12e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Push((int) 42310)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral" // @poff=89
0x136: Call2 0xa4

0x137: Pop(1)
0x138: Push((int) 540328)
0x139: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13a: Pop(1)
0x13b: @@@ ClearReplies(); Obj=0 // @poff=116
0x13c: Pop(0)
0x13d: Push((int) 540329)
0x13e: Push((int) -1)
0x13f: Push((int) 42311)
0x140: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x141: Pop(3)
0x142: Push((int) 540385)
0x143: Push((int) -1)
0x144: Push((int) 42371)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 42303)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral" // @poff=89
0x14d: Call2 0xa4

0x14e: Pop(1)
0x14f: Push((int) 540321)
0x150: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x151: Pop(1)
0x152: @@@ ClearReplies(); Obj=0 // @poff=116
0x153: Pop(0)
0x154: Push((int) 540322)
0x155: Push((int) -1)
0x156: Push((int) 42304)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x158: Pop(3)
0x159: Push((int) 540372)
0x15a: Push((int) -1)
0x15b: Push((int) 42355)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 42289)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral" // @poff=89
0x164: Call2 0xa4

0x165: Pop(1)
0x166: Push((int) 540308)
0x167: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x168: Pop(1)
0x169: @@@ ClearReplies(); Obj=0 // @poff=116
0x16a: Pop(0)
0x16b: Push((int) 540309)
0x16c: Push((int) 42356)
0x16d: Push((int) 42290)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Push((int) 540319)
0x171: Push((int) 42351)
0x172: Push((int) 42300)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 42351)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral" // @poff=89
0x17b: Call2 0xa4

0x17c: Pop(1)
0x17d: Push((int) 540368)
0x17e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17f: Pop(1)
0x180: @@@ ClearReplies(); Obj=0 // @poff=116
0x181: Pop(0)
0x182: Push((int) 540369)
0x183: Push((int) 42354)
0x184: Push((int) 42352)
0x185: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x186: Pop(3)
0x187: Push((int) 540370)
0x188: Push((int) 42356)
0x189: Push((int) 42353)
0x18a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 42354)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral" // @poff=89
0x192: Call2 0xa4

0x193: Pop(1)
0x194: Push((int) 540371)
0x195: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x196: Pop(1)
0x197: @@@ ClearReplies(); Obj=0 // @poff=116
0x198: Pop(0)
0x199: Push((int) 540375)
0x19a: Push((int) 42360)
0x19b: Push((int) 42359)
0x19c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19d: Pop(3)
0x19e: Return(); Pop(0)

0x19f: Push((int) 42356)
0x1a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral" // @poff=89
0x1a4: Call2 0xa4

0x1a5: Pop(1)
0x1a6: Push((int) 540373)
0x1a7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a8: Pop(1)
0x1a9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1aa: Pop(0)
0x1ab: Push((int) 540374)
0x1ac: Push((int) 42360)
0x1ad: Push((int) 42358)
0x1ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 42360)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral" // @poff=89
0x1b6: Call2 0xa4

0x1b7: Pop(1)
0x1b8: Push((int) 540376)
0x1b9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ba: Pop(1)
0x1bb: @@@ ClearReplies(); Obj=0 // @poff=116
0x1bc: Pop(0)
0x1bd: Push((int) 540377)
0x1be: Push((int) 42363)
0x1bf: Push((int) 42362)
0x1c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c1: Pop(3)
0x1c2: Push((int) 540379)
0x1c3: Push((int) 42365)
0x1c4: Push((int) 42364)
0x1c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 42365)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral" // @poff=89
0x1cd: Call2 0xa4

0x1ce: Pop(1)
0x1cf: Push((int) 540380)
0x1d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d1: Pop(1)
0x1d2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d3: Pop(0)
0x1d4: Push((int) 540381)
0x1d5: Push((int) 42363)
0x1d6: Push((int) 42366)
0x1d7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 42363)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Neutral" // @poff=89
0x1df: Call2 0xa4

0x1e0: Pop(1)
0x1e1: Push((int) 540378)
0x1e2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e3: Pop(1)
0x1e4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e5: Pop(0)
0x1e6: Push((int) 540382)
0x1e7: Push((int) -1)
0x1e8: Push((int) 42368)
0x1e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ea: Pop(3)
0x1eb: Push((int) 540383)
0x1ec: Push((int) -1)
0x1ed: Push((int) 42369)
0x1ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ef: Pop(3)
0x1f0: Return(); Pop(0)

0x1f1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f2: PushEmpty(bool)
0x1f3: Call2 0x3ab

0x1f4: Pop(0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f6: @ lshStopAnimation()
0x1f7: Pop(0)
0x1f8: GOTO 0x1fb

0x1f9: @ StopAnimation()
0x1fa: Pop(0)
0x1fb: Return(); Pop(0)

0x1fc: GOTO 0xbb

0x1fd: Return(); Pop(0)

0x1fe: PushEmpty()
0x1ff: Call2 0x20a

0x200: Pop(0)
0x201: Return(); Pop(0)

0x202: PushEmpty()
0x203: PushEmpty(int, object)
0x204: Stack[-3] = Stack[-1]
0x205: Push(-2, 1); TaskCall(0)
0x206: Call2 0x0

0x207: Pop(-2, 1); TaskReturn
0x208: Pop(2)
0x209: Return(); Pop(0)

0x20a: @ Hold()
0x20b: Pop(0)
0x20c: GOTO 0x20a

0x20d: Return(); Pop(0)

0x20e: PushEmpty(bool, bool)
0x20f: Push("cleanup") // @poff=156
0x210: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x212: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x213: @ IsLoaded(Stack[-1])
0x214: Pop(0)
0x215: PushEmpty(bool)
0x216: Stack[-1] = (bool) 0
0x217: Pop(0); Push((bool) Stack[-2] == 0)
0x218: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x219: PushEmpty(bool)
0x21a: Call2 0x23a

0x21b: Pop(0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: Stack[-1] = (bool) 1
0x21e: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21f: PushEmpty(object)
0x220: Call2 0x33e

0x221: Pop(0)
0x222: @ RemoveActor(Stack[-1])
0x223: Pop(1)
0x224: GOTO 0x229

0x225: Push("restore") // @poff=172
0x226: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x229: Return(); Pop(2)

0x22a: PushEmpty(bool)
0x22b: Stack[-1] = (bool) 0
0x22c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: PushEmpty(bool)
0x22f: Call2 0x23a

0x230: Pop(0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Stack[-1] = (bool) 1
0x233: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x234: PushEmpty(object)
0x235: Call2 0x33e

0x236: Pop(0)
0x237: @ RemoveActor(Stack[-1])
0x238: Pop(1)
0x239: Return(); Pop(0)

0x23a: Stack[-1] = (bool) 1
0x23b: Return(); Pop(0)

0x23c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x23d: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x23e: Pop(0)
0x23f: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x240: Pop(0)
0x241: Push(CvectorIndex(Stack[-8], 1))
0x242: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x243: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x244: @ GetPosition(Stack[-7])
0x245: Pop(0)
0x246: @ GetEyesHeight(Stack[-9])
0x247: Pop(0)
0x248: Push(CvectorIndex(Stack[-7], 1))
0x249: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x24a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x24b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x24c: Push(CvectorIndex(Stack[-6], 1))
0x24d: Stack[-1] = (int) 0
0x24e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x24f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x250: Pop(1); Push(Sqrt(Stack[-1]))
0x251: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x252: Stack[-5] = -Stack[-6]; Pop(0);
0x253: Pop(0); Push(Stack[-6] * Stack[-19]);
0x254: PushEmpty(cvector, cvector)
0x255: Push([0.0, 1.0, 0.0])
0x256: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x257: Call2 0x344

0x258: Pop(1)
0x259: Push((int) 25)
0x25a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x25b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x25c: Push([0.0, 10.0, 0.0])
0x25d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x25e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x25f: @ IsOverrideActive(Stack[-2])
0x260: Pop(0)
0x261: Push(Stack[-2])
0x262: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x263: Stack[-21] = (bool) 0
0x264: Return(); Pop(18)

0x265: @ StopWorld()
0x266: Pop(0)
0x267: @ CameraTransit(Stack[-3], Stack[-5])
0x268: Pop(0)
0x269: Push(CvectorIndex(Stack[-4], 0))
0x26a: Push(CvectorIndex(Stack[-5], 2))
0x26b: @ Rotate(Stack[-2], Stack[-1])
0x26c: Pop(2)
0x26d: PushEmpty(bool)
0x26e: Call2 0x3ab

0x26f: Pop(0)
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: GOTO 0x27a

0x272: Push("head") // @poff=214
0x273: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x274: Pop(1)
0x275: Push(Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x277: Push("head") // @poff=214
0x278: @ LookAsyncCamera(Stack[-1])
0x279: Pop(1)
0x27a: @ CameraWaitForPlayFinish()
0x27b: Pop(0)
0x27c: @ ResumeWorld()
0x27d: Pop(0)
0x27e: Stack[-21] = (bool) 1
0x27f: Return(); Pop(18)

0x280: PushEmpty(bool, bool)
0x281: @ CameraSwitchToNormal()
0x282: Pop(0)
0x283: PushEmpty(bool)
0x284: Call2 0x3ab

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x290

0x288: Push("head") // @poff=214
0x289: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28a: Pop(1)
0x28b: Push(Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28d: Push("head") // @poff=214
0x28e: @ UnlookAsync(Stack[-1])
0x28f: Pop(1)
0x290: Return(); Pop(2)

0x291: PushEmpty(int, int, int, int)
0x292: Push("voice_common") // @poff=224
0x293: @ GetVariable(Stack[-1], Stack[-3])
0x294: Pop(1)
0x295: Push(Stack[-2])
0x296: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x297: PushEmpty(bool, object)
0x298: Stack[-7] = Stack[-1]
0x299: Call2 0x2cb

0x29a: Pop(1)
0x29b: Pop(1); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x29d: PushEmpty(bool, object)
0x29e: Stack[-7] = Stack[-1]
0x29f: Call2 0x2f0

0x2a0: Pop(1)
0x2a1: Pop(1); Push((bool) Stack[-1] == 0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a3: Stack[-6] = (bool) 0
0x2a4: Return(); Pop(4)

0x2a5: Push((int) 2)
0x2a6: @ irand(Stack[-2], Stack[-1])
0x2a7: Pop(1)
0x2a8: Push(Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2aa: Push("voice_common") // @poff=224
0x2ab: Push((int) 1)
0x2ac: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2ad: Push((int) 3)
0x2ae: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2af: @ SetVariable(Stack[-2], Stack[-1])
0x2b0: Pop(2)
0x2b1: GOTO 0x2b6

0x2b2: Push("voice_common") // @poff=224
0x2b3: Push((int) 0)
0x2b4: @ SetVariable(Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: GOTO 0x2c9

0x2b7: PushEmpty(bool, object)
0x2b8: Stack[-7] = Stack[-1]
0x2b9: Call2 0x2f0

0x2ba: Pop(1)
0x2bb: Pop(1); Push((bool) Stack[-1] == 0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2bd: PushEmpty(bool, object)
0x2be: Stack[-7] = Stack[-1]
0x2bf: Call2 0x2cb

0x2c0: Pop(1)
0x2c1: Pop(1); Push((bool) Stack[-1] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c3: Stack[-6] = (bool) 0
0x2c4: Return(); Pop(4)

0x2c5: Push("voice_common") // @poff=224
0x2c6: Push((int) 1)
0x2c7: @ SetVariable(Stack[-2], Stack[-1])
0x2c8: Pop(2)
0x2c9: Stack[-6] = (bool) 1
0x2ca: Return(); Pop(4)

0x2cb: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2cc: Stack[-5] = "c" // @poff=250
0x2cd: Stack[-4] = (int) 0
0x2ce: Push((int) 1)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d0: Push((int) 1)
0x2d1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2d2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2d3: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x2d4: Pop(1)
0x2d5: Pop(0); Push((bool) Stack[-3] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2db

0x2d8: Push((int) 1)
0x2d9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2da: GOTO 0x2ce

0x2db: Pop(0); Push((bool) Stack[-4] == 0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dd: Stack[-12] = (bool) 0
0x2de: Return(); Pop(10)

0x2df: Stack[-2] = (int) 0
0x2e0: Push((int) 1)
0x2e1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: @ irand(Stack[-2], Stack[-4])
0x2e4: Pop(0)
0x2e5: Push((int) 1)
0x2e6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x2e9: Pop(1)
0x2ea: PushEmpty(bool, string)
0x2eb: Stack[-3] = Stack[-1]
0x2ec: Call2 0x328

0x2ed: Stack[-2] = Stack[-14]
0x2ee: Pop(2)
0x2ef: Return(); Pop(10)

0x2f0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2f1: Push("d") // @poff=220
0x2f2: PushEmpty(int)
0x2f3: Call2 0x353

0x2f4: Pop(0)
0x2f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f6: Push("m") // @poff=278
0x2f7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2f8: Stack[-4] = (int) 0
0x2f9: Push((int) 1)
0x2fa: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x2fb: Push((int) 1)
0x2fc: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2fd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2fe: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x2ff: Pop(1)
0x300: Pop(0); Push((bool) Stack[-3] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: GOTO 0x306

0x303: Push((int) 1)
0x304: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x305: GOTO 0x2f9

0x306: Pop(0); Push((bool) Stack[-4] == 0)
0x307: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x308: Stack[-12] = (bool) 0
0x309: Return(); Pop(10)

0x30a: Stack[-2] = (int) 0
0x30b: Push((int) 1)
0x30c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30e: @ irand(Stack[-2], Stack[-4])
0x30f: Pop(0)
0x310: Push((int) 1)
0x311: Pop(1); Push(Stack[-3] + Stack[-1]);
0x312: Pop(1); Push(Stack[-6] + Stack[-1]);
0x313: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x314: Pop(1)
0x315: PushEmpty(bool, string)
0x316: Stack[-3] = Stack[-1]
0x317: Call2 0x328

0x318: Stack[-2] = Stack[-14]
0x319: Pop(2)
0x31a: Return(); Pop(10)

0x31b: PushEmpty(float, float, float, float)
0x31c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x31d: Pop(0)
0x31e: Push((bool) 0)
0x31f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x320: Pop(1)
0x321: Return(); Pop(4)

0x322: PushEmpty(float, float, float, float)
0x323: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x324: Pop(0)
0x325: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x326: Pop(0)
0x327: Return(); Pop(4)

0x328: PushEmpty(bool, bool)
0x329: PushEmpty(bool)
0x32a: Call2 0x3ab

0x32b: Pop(0)
0x32c: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x32e: Pop(0)
0x32f: Push(Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x331: @ lshPlaySpeech(Stack[-3])
0x332: Pop(0)
0x333: Stack[-4] = (bool) 1
0x334: Return(); Pop(2)

0x335: Stack[-4] = (bool) 0
0x336: Return(); Pop(2)

0x337: PushEmpty(bool)
0x338: Call2 0x3ab

0x339: Pop(0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: @ lshStopSpeech()
0x33c: Pop(0)
0x33d: Return(); Pop(0)

0x33e: PushEmpty(object, object)
0x33f: @ self(Stack[-1])
0x340: Pop(0)
0x341: Stack[-1] = Stack[-3]
0x342: Return(); Pop(2)

0x343: Stack[-1] = 0
0x344: PushEmpty(float, float)
0x345: Pop(0); Push(Stack[-3] | Stack[-3]);
0x346: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x347: Push((float)9.999999974752427e-07)
0x348: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34a: Stack[-4] = [0.0, 0.0, 0.0]
0x34b: Return(); Pop(2)

0x34c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x34d: Return(); Pop(2)

0x34e: PushEmpty(int, int)
0x34f: @ GetVariable(Stack[-3], Stack[-1])
0x350: Pop(0)
0x351: Stack[-1] = Stack[-4]
0x352: Return(); Pop(2)

0x353: PushEmpty(float, float)
0x354: @ GetGameTime(Stack[-1])
0x355: Pop(0)
0x356: Push((int) 1)
0x357: PushEmpty(int)
0x358: Push((int) 24)
0x359: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x35a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x35b: Return(); Pop(2)

0x35c: PushEmpty()
0x35d: Push("ood12BurahSobor1") // @poff=282
0x35e: Push((int) 1)
0x35f: @ SetVariable(Stack[-2], Stack[-1])
0x360: Pop(2)
0x361: Return(); Pop(0)

0x362: PushEmpty()
0x363: Push("ood12BurahSobor2") // @poff=316
0x364: Push((int) 1)
0x365: @ SetVariable(Stack[-2], Stack[-1])
0x366: Pop(2)
0x367: Return(); Pop(0)

0x368: PushEmpty()
0x369: Push("ood12BurahSobor3") // @poff=350
0x36a: Push((int) 1)
0x36b: @ SetVariable(Stack[-2], Stack[-1])
0x36c: Pop(2)
0x36d: Return(); Pop(0)

0x36e: PushEmpty()
0x36f: PushEmpty(int, string)
0x370: Stack[-1] = "ood12BurahSobor1" // @poff=282
0x371: Call2 0x34e

0x372: Pop(1)
0x373: Push((int) 0)
0x374: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x376: Stack[-2] = (bool) 1
0x377: Return(); Pop(0)

0x378: Stack[-2] = (bool) 0
0x379: Return(); Pop(0)

0x37a: PushEmpty()
0x37b: PushEmpty(int, string)
0x37c: Stack[-1] = "ood12BurahSobor2" // @poff=316
0x37d: Call2 0x34e

0x37e: Pop(1)
0x37f: Push((int) 0)
0x380: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x382: Stack[-2] = (bool) 1
0x383: Return(); Pop(0)

0x384: Stack[-2] = (bool) 0
0x385: Return(); Pop(0)

0x386: PushEmpty()
0x387: PushEmpty(int, string)
0x388: Stack[-1] = "ood12BurahSobor3" // @poff=350
0x389: Call2 0x34e

0x38a: Pop(1)
0x38b: Push((int) 0)
0x38c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-2] = (bool) 1
0x38f: Return(); Pop(0)

0x390: Stack[-2] = (bool) 0
0x391: Return(); Pop(0)

0x392: PushEmpty(int, int)
0x393: Push("branch") // @poff=384
0x394: @ GetVariable(Stack[-1], Stack[-2])
0x395: Pop(1)
0x396: Push((int) 0)
0x397: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x399: Stack[-3] = (int) 1
0x39a: Return(); Pop(2)

0x39b: GOTO 0x3a1

0x39c: Push((int) 1)
0x39d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: Stack[-3] = (int) 2
0x3a0: Return(); Pop(2)

0x3a1: Stack[-3] = (int) 3
0x3a2: Return(); Pop(2)

0x3a3: Stack[-1] = (int) 515592
0x3a4: Return(); Pop(0)

0x3a5: Stack[-1] = (int) 511961
0x3a6: Return(); Pop(0)

0x3a7: Stack[-1] = "ui/NPC_Burah.png" // @poff=398
0x3a8: Return(); Pop(0)

0x3a9: Stack[-1] = "ui/NPC_Burah_b.png" // @poff=432
0x3aa: Return(); Pop(0)

0x3ab: Stack[-1] = (bool) 1
0x3ac: Return(); Pop(0)

