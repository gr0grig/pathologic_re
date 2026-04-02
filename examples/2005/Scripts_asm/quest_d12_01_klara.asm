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
	W:ood12KlaraSobor1
	W:ood12KlaraSobor2
	W:branch
	W:ui/NPC_Klara.png
	W:ui/NPC_Klara_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f00720065000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f006400310032004b006c0061007200610053006f0062006f007200310000006f006f006400310032004b006c0061007200610053006f0062006f007200320000006200720061006e00630068000000750069002f004e00500043005f004b006c006100720061002e0070006e0067000000750069002f004e00500043005f004b006c006100720061005f0062002e0070006e0067000000
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

RunOp = 0x20d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb0 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x211 Vars = (object)
		EVENT_26 Op = 0x21d Vars = (string)
		EVENT_6 Op = 0x239 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x34d

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x2a0

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x24b

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x3a2

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x3a0

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x3a4

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x3a6

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x38f

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
0x48: Call2 0x28f

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
0x56: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral" // @poff=89
0x59: Call2 0x9a

0x5a: Pop(1)
0x5b: Push((int) 540282)
0x5c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d: Pop(1)
0x5e: @@@ ClearReplies(); Obj=0 // @poff=116
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x377

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 540283)
0x66: Push((int) 42264)
0x67: Push((int) 42263)
0x68: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x69: Pop(3)
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0x383

0x6d: Pop(1)
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: Push((int) 540296)
0x70: Push((int) 42278)
0x71: Push((int) 42277)
0x72: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x73: Pop(3)
0x74: Push((int) 540305)
0x75: Push((int) -1)
0x76: Push((int) 42286)
0x77: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x78: Pop(3)
0x79: GOTO 0x7c

0x7a: Return(); Pop(0)

0x7b: GOTO 0x55

0x7c: PushEmpty(bool)
0x7d: Call2 0x3a8

0x7e: Pop(0)
0x7f: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x80: @ lshWaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: PushEmpty(string)
0x86: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x87: Call2 0x32a

0x88: Pop(1)
0x89: GOTO 0x80

0x8a: GOTO 0x99

0x8b: Push("all") // @poff=138
0x8c: Push("idle") // @poff=146
0x8d: @ PlayAnimation(Stack[-2], Stack[-1])
0x8e: Pop(2)
0x8f: @ WaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: Push("all") // @poff=138
0x95: Push("idle") // @poff=146
0x96: @ PlayAnimation(Stack[-2], Stack[-1])
0x97: Pop(2)
0x98: GOTO 0x8f

0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: PushEmpty(bool)
0x9c: Call2 0x3a8

0x9d: Pop(0)
0x9e: Pop(1); Push((bool) Stack[-1] == 0)
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: Return(); Pop(0)

0xa1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: PushEmpty(string, bool)
0xa5: Stack[-3] = Stack[-2]
0xa6: Push("") // @poff=102
0xa7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa9: Stack[-1] = (bool) 0
0xaa: GOTO 0xac

0xab: Stack[-1] = (bool) 1
0xac: Call2 0x331

0xad: Pop(2)
0xae: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaf: Return(); Pop(0)

0xb0: PushEmpty()
0xb1: Push((int) 1)
0xb2: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0xb3: PushEmpty()
0xb4: Call2 0x346

0xb5: Pop(0)
0xb6: Push((int) 42263)
0xb7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb9: PushEmpty(object, object)
0xba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call2 0x36b

0xbd: Pop(2)
0xbe: Push((int) 42277)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x371

0xc5: Pop(2)
0xc6: Push((int) 42262)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xc9: PushEmpty(string)
0xca: Stack[-1] = "Neutral" // @poff=89
0xcb: Call2 0x9a

0xcc: Pop(1)
0xcd: Push((int) 540282)
0xce: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xcf: Pop(1)
0xd0: @@@ ClearReplies(); Obj=0 // @poff=116
0xd1: Pop(0)
0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Call2 0x377

0xd5: Pop(1)
0xd6: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd7: Push((int) 540283)
0xd8: Push((int) 42264)
0xd9: Push((int) 42263)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: PushEmpty(bool, object)
0xdd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xde: Call2 0x383

0xdf: Pop(1)
0xe0: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe1: Push((int) 540296)
0xe2: Push((int) 42278)
0xe3: Push((int) 42277)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 540305)
0xe7: Push((int) -1)
0xe8: Push((int) 42286)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 42278)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral" // @poff=89
0xf1: Call2 0x9a

0xf2: Pop(1)
0xf3: Push((int) 540297)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=116
0xf7: Pop(0)
0xf8: Push((int) 540298)
0xf9: Push((int) 42280)
0xfa: Push((int) 42279)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 540479)
0xfe: Push((int) 42283)
0xff: Push((int) 42474)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 42280)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral" // @poff=89
0x108: Call2 0x9a

0x109: Pop(1)
0x10a: Push((int) 540299)
0x10b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10c: Pop(1)
0x10d: @@@ ClearReplies(); Obj=0 // @poff=116
0x10e: Pop(0)
0x10f: Push((int) 540300)
0x110: Push((int) 42476)
0x111: Push((int) 42281)
0x112: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x113: Pop(3)
0x114: Push((int) 540301)
0x115: Push((int) 42283)
0x116: Push((int) 42282)
0x117: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 42283)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral" // @poff=89
0x11f: Call2 0x9a

0x120: Pop(1)
0x121: Push((int) 540302)
0x122: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x123: Pop(1)
0x124: @@@ ClearReplies(); Obj=0 // @poff=116
0x125: Pop(0)
0x126: Push((int) 540303)
0x127: Push((int) 42476)
0x128: Push((int) 42284)
0x129: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12a: Pop(3)
0x12b: Push((int) 540304)
0x12c: Push((int) 42478)
0x12d: Push((int) 42285)
0x12e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Push((int) 42478)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral" // @poff=89
0x136: Call2 0x9a

0x137: Pop(1)
0x138: Push((int) 540481)
0x139: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13a: Pop(1)
0x13b: @@@ ClearReplies(); Obj=0 // @poff=116
0x13c: Pop(0)
0x13d: Push((int) 540482)
0x13e: Push((int) -1)
0x13f: Push((int) 42479)
0x140: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x141: Pop(3)
0x142: Push((int) 540483)
0x143: Push((int) 42476)
0x144: Push((int) 42480)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 42476)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral" // @poff=89
0x14d: Call2 0x9a

0x14e: Pop(1)
0x14f: Push((int) 540480)
0x150: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x151: Pop(1)
0x152: @@@ ClearReplies(); Obj=0 // @poff=116
0x153: Pop(0)
0x154: Push((int) 540484)
0x155: Push((int) -1)
0x156: Push((int) 42482)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x158: Pop(3)
0x159: Push((int) 540485)
0x15a: Push((int) 42484)
0x15b: Push((int) 42483)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 42484)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral" // @poff=89
0x164: Call2 0x9a

0x165: Pop(1)
0x166: Push((int) 540486)
0x167: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x168: Pop(1)
0x169: @@@ ClearReplies(); Obj=0 // @poff=116
0x16a: Pop(0)
0x16b: Push((int) 540487)
0x16c: Push((int) -1)
0x16d: Push((int) 42485)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Push((int) 540488)
0x171: Push((int) -1)
0x172: Push((int) 42486)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 42264)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral" // @poff=89
0x17b: Call2 0x9a

0x17c: Pop(1)
0x17d: Push((int) 540284)
0x17e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17f: Pop(1)
0x180: @@@ ClearReplies(); Obj=0 // @poff=116
0x181: Pop(0)
0x182: Push((int) 540285)
0x183: Push((int) 42266)
0x184: Push((int) 42265)
0x185: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x186: Pop(3)
0x187: Push((int) 540489)
0x188: Push((int) 42266)
0x189: Push((int) 42487)
0x18a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 42266)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral" // @poff=89
0x192: Call2 0x9a

0x193: Pop(1)
0x194: Push((int) 540286)
0x195: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x196: Pop(1)
0x197: @@@ ClearReplies(); Obj=0 // @poff=116
0x198: Pop(0)
0x199: Push((int) 540287)
0x19a: Push((int) 42268)
0x19b: Push((int) 42267)
0x19c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19d: Pop(3)
0x19e: Push((int) 540295)
0x19f: Push((int) 42270)
0x1a0: Push((int) 42275)
0x1a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 42268)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral" // @poff=89
0x1a9: Call2 0x9a

0x1aa: Pop(1)
0x1ab: Push((int) 540288)
0x1ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ad: Pop(1)
0x1ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x1af: Pop(0)
0x1b0: Push((int) 540289)
0x1b1: Push((int) 42270)
0x1b2: Push((int) 42269)
0x1b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b4: Pop(3)
0x1b5: Push((int) 540490)
0x1b6: Push((int) 42490)
0x1b7: Push((int) 42489)
0x1b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 42490)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral" // @poff=89
0x1c0: Call2 0x9a

0x1c1: Pop(1)
0x1c2: Push((int) 540491)
0x1c3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c4: Pop(1)
0x1c5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c6: Pop(0)
0x1c7: Push((int) 540492)
0x1c8: Push((int) -1)
0x1c9: Push((int) 42491)
0x1ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cb: Pop(3)
0x1cc: Push((int) 540493)
0x1cd: Push((int) -1)
0x1ce: Push((int) 42492)
0x1cf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d0: Pop(3)
0x1d1: Return(); Pop(0)

0x1d2: Push((int) 42270)
0x1d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1d5: PushEmpty(string)
0x1d6: Stack[-1] = "Neutral" // @poff=89
0x1d7: Call2 0x9a

0x1d8: Pop(1)
0x1d9: Push((int) 540290)
0x1da: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1db: Pop(1)
0x1dc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1dd: Pop(0)
0x1de: Push((int) 540291)
0x1df: Push((int) 42272)
0x1e0: Push((int) 42271)
0x1e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e2: Pop(3)
0x1e3: Push((int) 540494)
0x1e4: Push((int) -1)
0x1e5: Push((int) 42493)
0x1e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 42272)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Neutral" // @poff=89
0x1ee: Call2 0x9a

0x1ef: Pop(1)
0x1f0: Push((int) 540292)
0x1f1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f2: Pop(1)
0x1f3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f4: Pop(0)
0x1f5: Push((int) 540293)
0x1f6: Push((int) -1)
0x1f7: Push((int) 42273)
0x1f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f9: Pop(3)
0x1fa: Push((int) 540294)
0x1fb: Push((int) -1)
0x1fc: Push((int) 42274)
0x1fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x201: PushEmpty(bool)
0x202: Call2 0x3a8

0x203: Pop(0)
0x204: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x205: @ lshStopAnimation()
0x206: Pop(0)
0x207: GOTO 0x20a

0x208: @ StopAnimation()
0x209: Pop(0)
0x20a: Return(); Pop(0)

0x20b: GOTO 0xb1

0x20c: Return(); Pop(0)

0x20d: PushEmpty()
0x20e: Call2 0x219

0x20f: Pop(0)
0x210: Return(); Pop(0)

0x211: PushEmpty()
0x212: PushEmpty(int, object)
0x213: Stack[-3] = Stack[-1]
0x214: Push(-2, 1); TaskCall(0)
0x215: Call2 0x0

0x216: Pop(-2, 1); TaskReturn
0x217: Pop(2)
0x218: Return(); Pop(0)

0x219: @ Hold()
0x21a: Pop(0)
0x21b: GOTO 0x219

0x21c: Return(); Pop(0)

0x21d: PushEmpty(bool, bool)
0x21e: Push("cleanup") // @poff=156
0x21f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x221: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x222: @ IsLoaded(Stack[-1])
0x223: Pop(0)
0x224: PushEmpty(bool)
0x225: Stack[-1] = (bool) 0
0x226: Pop(0); Push((bool) Stack[-2] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: PushEmpty(bool)
0x229: Call2 0x249

0x22a: Pop(0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Stack[-1] = (bool) 1
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: PushEmpty(object)
0x22f: Call2 0x34d

0x230: Pop(0)
0x231: @ RemoveActor(Stack[-1])
0x232: Pop(1)
0x233: GOTO 0x238

0x234: Push("restore") // @poff=172
0x235: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x238: Return(); Pop(2)

0x239: PushEmpty(bool)
0x23a: Stack[-1] = (bool) 0
0x23b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x23c: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23d: PushEmpty(bool)
0x23e: Call2 0x249

0x23f: Pop(0)
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: Stack[-1] = (bool) 1
0x242: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x243: PushEmpty(object)
0x244: Call2 0x34d

0x245: Pop(0)
0x246: @ RemoveActor(Stack[-1])
0x247: Pop(1)
0x248: Return(); Pop(0)

0x249: Stack[-1] = (bool) 1
0x24a: Return(); Pop(0)

0x24b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x24c: @@ GetPosition(Stack[-8]); Obj=20 // @poff=188
0x24d: Pop(0)
0x24e: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=200
0x24f: Pop(0)
0x250: Push(CvectorIndex(Stack[-8], 1))
0x251: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x252: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x253: @ GetPosition(Stack[-7])
0x254: Pop(0)
0x255: @ GetEyesHeight(Stack[-9])
0x256: Pop(0)
0x257: Push(CvectorIndex(Stack[-7], 1))
0x258: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x259: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x25a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x25b: Push(CvectorIndex(Stack[-6], 1))
0x25c: Stack[-1] = (int) 0
0x25d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x25e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x25f: Pop(1); Push(Sqrt(Stack[-1]))
0x260: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x261: Stack[-5] = -Stack[-6]; Pop(0);
0x262: Pop(0); Push(Stack[-6] * Stack[-19]);
0x263: PushEmpty(cvector, cvector)
0x264: Push([0.0, 1.0, 0.0])
0x265: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x266: Call2 0x353

0x267: Pop(1)
0x268: Push((int) 25)
0x269: Pop(2); Push(Stack[-2] * Stack[-1]);
0x26a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26b: Push([0.0, 10.0, 0.0])
0x26c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x26d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x26e: @ IsOverrideActive(Stack[-2])
0x26f: Pop(0)
0x270: Push(Stack[-2])
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-21] = (bool) 0
0x273: Return(); Pop(18)

0x274: @ StopWorld()
0x275: Pop(0)
0x276: @ CameraTransit(Stack[-3], Stack[-5])
0x277: Pop(0)
0x278: Push(CvectorIndex(Stack[-4], 0))
0x279: Push(CvectorIndex(Stack[-5], 2))
0x27a: @ Rotate(Stack[-2], Stack[-1])
0x27b: Pop(2)
0x27c: PushEmpty(bool)
0x27d: Call2 0x3a8

0x27e: Pop(0)
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: GOTO 0x289

0x281: Push("head") // @poff=214
0x282: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x283: Pop(1)
0x284: Push(Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x286: Push("head") // @poff=214
0x287: @ LookAsyncCamera(Stack[-1])
0x288: Pop(1)
0x289: @ CameraWaitForPlayFinish()
0x28a: Pop(0)
0x28b: @ ResumeWorld()
0x28c: Pop(0)
0x28d: Stack[-21] = (bool) 1
0x28e: Return(); Pop(18)

0x28f: PushEmpty(bool, bool)
0x290: @ CameraSwitchToNormal()
0x291: Pop(0)
0x292: PushEmpty(bool)
0x293: Call2 0x3a8

0x294: Pop(0)
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: GOTO 0x29f

0x297: Push("head") // @poff=214
0x298: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x299: Pop(1)
0x29a: Push(Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29c: Push("head") // @poff=214
0x29d: @ UnlookAsync(Stack[-1])
0x29e: Pop(1)
0x29f: Return(); Pop(2)

0x2a0: PushEmpty(int, int, int, int)
0x2a1: Push("voice_common") // @poff=224
0x2a2: @ GetVariable(Stack[-1], Stack[-3])
0x2a3: Pop(1)
0x2a4: Push(Stack[-2])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2a6: PushEmpty(bool, object)
0x2a7: Stack[-7] = Stack[-1]
0x2a8: Call2 0x2da

0x2a9: Pop(1)
0x2aa: Pop(1); Push((bool) Stack[-1] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-7] = Stack[-1]
0x2ae: Call2 0x2ff

0x2af: Pop(1)
0x2b0: Pop(1); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b2: Stack[-6] = (bool) 0
0x2b3: Return(); Pop(4)

0x2b4: Push((int) 2)
0x2b5: @ irand(Stack[-2], Stack[-1])
0x2b6: Pop(1)
0x2b7: Push(Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2b9: Push("voice_common") // @poff=224
0x2ba: Push((int) 1)
0x2bb: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2bc: Push((int) 3)
0x2bd: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2be: @ SetVariable(Stack[-2], Stack[-1])
0x2bf: Pop(2)
0x2c0: GOTO 0x2c5

0x2c1: Push("voice_common") // @poff=224
0x2c2: Push((int) 0)
0x2c3: @ SetVariable(Stack[-2], Stack[-1])
0x2c4: Pop(2)
0x2c5: GOTO 0x2d8

0x2c6: PushEmpty(bool, object)
0x2c7: Stack[-7] = Stack[-1]
0x2c8: Call2 0x2ff

0x2c9: Pop(1)
0x2ca: Pop(1); Push((bool) Stack[-1] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2cc: PushEmpty(bool, object)
0x2cd: Stack[-7] = Stack[-1]
0x2ce: Call2 0x2da

0x2cf: Pop(1)
0x2d0: Pop(1); Push((bool) Stack[-1] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: Stack[-6] = (bool) 0
0x2d3: Return(); Pop(4)

0x2d4: Push("voice_common") // @poff=224
0x2d5: Push((int) 1)
0x2d6: @ SetVariable(Stack[-2], Stack[-1])
0x2d7: Pop(2)
0x2d8: Stack[-6] = (bool) 1
0x2d9: Return(); Pop(4)

0x2da: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2db: Stack[-5] = "c" // @poff=250
0x2dc: Stack[-4] = (int) 0
0x2dd: Push((int) 1)
0x2de: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2df: Push((int) 1)
0x2e0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2e1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e2: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x2e3: Pop(1)
0x2e4: Pop(0); Push((bool) Stack[-3] == 0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e6: GOTO 0x2ea

0x2e7: Push((int) 1)
0x2e8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2e9: GOTO 0x2dd

0x2ea: Pop(0); Push((bool) Stack[-4] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ec: Stack[-12] = (bool) 0
0x2ed: Return(); Pop(10)

0x2ee: Stack[-2] = (int) 0
0x2ef: Push((int) 1)
0x2f0: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f2: @ irand(Stack[-2], Stack[-4])
0x2f3: Pop(0)
0x2f4: Push((int) 1)
0x2f5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2f6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f7: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x2f8: Pop(1)
0x2f9: PushEmpty(bool, string)
0x2fa: Stack[-3] = Stack[-1]
0x2fb: Call2 0x337

0x2fc: Stack[-2] = Stack[-14]
0x2fd: Pop(2)
0x2fe: Return(); Pop(10)

0x2ff: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x300: Push("d") // @poff=220
0x301: PushEmpty(int)
0x302: Call2 0x362

0x303: Pop(0)
0x304: Pop(2); Push(Stack[-2] + Stack[-1]);
0x305: Push("m") // @poff=278
0x306: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x307: Stack[-4] = (int) 0
0x308: Push((int) 1)
0x309: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x30a: Push((int) 1)
0x30b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x30c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x30d: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=254
0x30e: Pop(1)
0x30f: Pop(0); Push((bool) Stack[-3] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: GOTO 0x315

0x312: Push((int) 1)
0x313: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x314: GOTO 0x308

0x315: Pop(0); Push((bool) Stack[-4] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x317: Stack[-12] = (bool) 0
0x318: Return(); Pop(10)

0x319: Stack[-2] = (int) 0
0x31a: Push((int) 1)
0x31b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31d: @ irand(Stack[-2], Stack[-4])
0x31e: Pop(0)
0x31f: Push((int) 1)
0x320: Pop(1); Push(Stack[-3] + Stack[-1]);
0x321: Pop(1); Push(Stack[-6] + Stack[-1]);
0x322: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=266
0x323: Pop(1)
0x324: PushEmpty(bool, string)
0x325: Stack[-3] = Stack[-1]
0x326: Call2 0x337

0x327: Stack[-2] = Stack[-14]
0x328: Pop(2)
0x329: Return(); Pop(10)

0x32a: PushEmpty(float, float, float, float)
0x32b: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x32c: Pop(0)
0x32d: Push((bool) 0)
0x32e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x32f: Pop(1)
0x330: Return(); Pop(4)

0x331: PushEmpty(float, float, float, float)
0x332: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x333: Pop(0)
0x334: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x335: Pop(0)
0x336: Return(); Pop(4)

0x337: PushEmpty(bool, bool)
0x338: PushEmpty(bool)
0x339: Call2 0x3a8

0x33a: Pop(0)
0x33b: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33c: @ lshHasSpeech(Stack[-1], Stack[-3])
0x33d: Pop(0)
0x33e: Push(Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x340: @ lshPlaySpeech(Stack[-3])
0x341: Pop(0)
0x342: Stack[-4] = (bool) 1
0x343: Return(); Pop(2)

0x344: Stack[-4] = (bool) 0
0x345: Return(); Pop(2)

0x346: PushEmpty(bool)
0x347: Call2 0x3a8

0x348: Pop(0)
0x349: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34a: @ lshStopSpeech()
0x34b: Pop(0)
0x34c: Return(); Pop(0)

0x34d: PushEmpty(object, object)
0x34e: @ self(Stack[-1])
0x34f: Pop(0)
0x350: Stack[-1] = Stack[-3]
0x351: Return(); Pop(2)

0x352: Stack[-1] = 0
0x353: PushEmpty(float, float)
0x354: Pop(0); Push(Stack[-3] | Stack[-3]);
0x355: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x356: Push((float)9.999999974752427e-07)
0x357: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x359: Stack[-4] = [0.0, 0.0, 0.0]
0x35a: Return(); Pop(2)

0x35b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x35c: Return(); Pop(2)

0x35d: PushEmpty(int, int)
0x35e: @ GetVariable(Stack[-3], Stack[-1])
0x35f: Pop(0)
0x360: Stack[-1] = Stack[-4]
0x361: Return(); Pop(2)

0x362: PushEmpty(float, float)
0x363: @ GetGameTime(Stack[-1])
0x364: Pop(0)
0x365: Push((int) 1)
0x366: PushEmpty(int)
0x367: Push((int) 24)
0x368: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x369: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x36a: Return(); Pop(2)

0x36b: PushEmpty()
0x36c: Push("ood12KlaraSobor1") // @poff=282
0x36d: Push((int) 1)
0x36e: @ SetVariable(Stack[-2], Stack[-1])
0x36f: Pop(2)
0x370: Return(); Pop(0)

0x371: PushEmpty()
0x372: Push("ood12KlaraSobor2") // @poff=316
0x373: Push((int) 1)
0x374: @ SetVariable(Stack[-2], Stack[-1])
0x375: Pop(2)
0x376: Return(); Pop(0)

0x377: PushEmpty()
0x378: PushEmpty(int, string)
0x379: Stack[-1] = "ood12KlaraSobor1" // @poff=282
0x37a: Call2 0x35d

0x37b: Pop(1)
0x37c: Push((int) 0)
0x37d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-2] = (bool) 1
0x380: Return(); Pop(0)

0x381: Stack[-2] = (bool) 0
0x382: Return(); Pop(0)

0x383: PushEmpty()
0x384: PushEmpty(int, string)
0x385: Stack[-1] = "ood12KlaraSobor2" // @poff=316
0x386: Call2 0x35d

0x387: Pop(1)
0x388: Push((int) 0)
0x389: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38b: Stack[-2] = (bool) 1
0x38c: Return(); Pop(0)

0x38d: Stack[-2] = (bool) 0
0x38e: Return(); Pop(0)

0x38f: PushEmpty(int, int)
0x390: Push("branch") // @poff=350
0x391: @ GetVariable(Stack[-1], Stack[-2])
0x392: Pop(1)
0x393: Push((int) 0)
0x394: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x396: Stack[-3] = (int) 1
0x397: Return(); Pop(2)

0x398: GOTO 0x39e

0x399: Push((int) 1)
0x39a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39c: Stack[-3] = (int) 2
0x39d: Return(); Pop(2)

0x39e: Stack[-3] = (int) 3
0x39f: Return(); Pop(2)

0x3a0: Stack[-1] = (int) 515540
0x3a1: Return(); Pop(0)

0x3a2: Stack[-1] = (int) 502865
0x3a3: Return(); Pop(0)

0x3a4: Stack[-1] = "ui/NPC_Klara.png" // @poff=364
0x3a5: Return(); Pop(0)

0x3a6: Stack[-1] = "ui/NPC_Klara_b.png" // @poff=398
0x3a7: Return(); Pop(0)

0x3a8: Stack[-1] = (bool) 1
0x3a9: Return(); Pop(0)

