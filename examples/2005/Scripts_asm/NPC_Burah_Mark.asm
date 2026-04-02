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
	W:ui/NPC_Mark.png
	W:ui/NPC_Mark_b.png
	W:branch
	W:mt_mark
	W:d12_mark
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004d00610072006b002e0070006e0067000000750069002f004e00500043005f004d00610072006b005f0062002e0070006e00670000006200720061006e006300680000006d0074005f006d00610072006b0000006400310032005f006d00610072006b000000
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

RunOp = 0x2cf
RunTask = 7

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
		EVENT_11 Op = 0x2a5 Vars = (int, int)
	GTASK_7 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x31e Vars = (int)
		EVENT_6 Op = 0x344 Vars = ()
		EVENT_5 Op = 0x353 Vars = ()
		EVENT_45 Op = 0x360 Vars = (bool)
		EVENT_0 Op = 0x36c Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x3f0

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
0x11: Call2 0x4f7

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x44a

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x3f5

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x530

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x52e

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x532

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x534

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x538

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
0x55: Call2 0x439

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
0x68: Push((int) 535231)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 535232)
0x6e: Push((int) 36953)
0x6f: Push((int) 36907)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 535233)
0x73: Push((int) -1)
0x74: Push((int) 36908)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 535280)
0x78: Push((int) -1)
0x79: Push((int) 36956)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0x536

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x4d4

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
0x9f: Call2 0x536

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
0xaf: Call2 0x4db

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x4f0

0xb8: Pop(0)
0xb9: Push((int) 36906)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral" // @poff=89
0xbe: Call2 0x9d

0xbf: Pop(1)
0xc0: Push((int) 535231)
0xc1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc2: Pop(1)
0xc3: @@@ ClearReplies(); Obj=0 // @poff=116
0xc4: Pop(0)
0xc5: Push((int) 535232)
0xc6: Push((int) 36953)
0xc7: Push((int) 36907)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Push((int) 535233)
0xcb: Push((int) -1)
0xcc: Push((int) 36908)
0xcd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xce: Pop(3)
0xcf: Push((int) 535280)
0xd0: Push((int) -1)
0xd1: Push((int) 36956)
0xd2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 36953)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0x9d

0xdb: Pop(1)
0xdc: Push((int) 535277)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 535278)
0xe2: Push((int) 36957)
0xe3: Push((int) 36954)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 535279)
0xe7: Push((int) 36957)
0xe8: Push((int) 36955)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 36957)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral" // @poff=89
0xf1: Call2 0x9d

0xf2: Pop(1)
0xf3: Push((int) 535281)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=116
0xf7: Pop(0)
0xf8: Push((int) 535282)
0xf9: Push((int) -1)
0xfa: Push((int) 36958)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 535283)
0xfe: Push((int) -1)
0xff: Push((int) 36959)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104: PushEmpty(bool)
0x105: Call2 0x536

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
0x114: Call2 0x4f7

0x115: Stack[-1] = Stack[-2]
0x116: Pop(1)
0x117: Call2 0x44a

0x118: Pop(2)
0x119: PushEmpty(bool, object, float)
0x11a: Stack[-12] = Stack[-2]
0x11b: Stack[-1] = (float) 70.0
0x11c: Call2 0x3f5

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-10] = (int) -2
0x121: Return(); Pop(8)

0x122: @ CreateDialog(Stack[-4])
0x123: Pop(0)
0x124: PushEmpty(int)
0x125: Call2 0x530

0x126: Pop(0)
0x127: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x128: Pop(1)
0x129: PushEmpty(int)
0x12a: Call2 0x52e

0x12b: Pop(0)
0x12c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x12d: Pop(1)
0x12e: PushEmpty(string)
0x12f: Call2 0x532

0x130: Pop(0)
0x131: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x132: Pop(1)
0x133: PushEmpty(string)
0x134: Call2 0x534

0x135: Pop(0)
0x136: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x137: Pop(1)
0x138: PushEmpty(int)
0x139: Call2 0x538

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
0x158: Call2 0x439

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
0x16b: Push((int) 520759)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 520760)
0x171: Push((int) 21974)
0x172: Push((int) 21973)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 520766)
0x176: Push((int) 21976)
0x177: Push((int) 21979)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: GOTO 0x17d

0x17b: Return(); Pop(0)

0x17c: GOTO 0x165

0x17d: PushEmpty(bool)
0x17e: Call2 0x536

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x181: @ lshWaitForAnimEnd()
0x182: Pop(0)
0x183: Push( Stack[3 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x18b

0x186: PushEmpty(string)
0x187: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x188: Call2 0x4d4

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
0x19d: Call2 0x536

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
0x1ad: Call2 0x4db

0x1ae: Pop(2)
0x1af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Push((int) 1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x4f0

0x1b6: Pop(0)
0x1b7: Push((int) 21972)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral" // @poff=89
0x1bc: Call2 0x19b

0x1bd: Pop(1)
0x1be: Push((int) 520759)
0x1bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c0: Pop(1)
0x1c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c2: Pop(0)
0x1c3: Push((int) 520760)
0x1c4: Push((int) 21974)
0x1c5: Push((int) 21973)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Push((int) 520766)
0x1c9: Push((int) 21976)
0x1ca: Push((int) 21979)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 21974)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral" // @poff=89
0x1d3: Call2 0x19b

0x1d4: Pop(1)
0x1d5: Push((int) 520761)
0x1d6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d7: Pop(1)
0x1d8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d9: Pop(0)
0x1da: Push((int) 520762)
0x1db: Push((int) 21976)
0x1dc: Push((int) 21975)
0x1dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 21976)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Neutral" // @poff=89
0x1e5: Call2 0x19b

0x1e6: Pop(1)
0x1e7: Push((int) 520763)
0x1e8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e9: Pop(1)
0x1ea: @@@ ClearReplies(); Obj=0 // @poff=116
0x1eb: Pop(0)
0x1ec: Push((int) 520764)
0x1ed: Push((int) -1)
0x1ee: Push((int) 21977)
0x1ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f0: Pop(3)
0x1f1: Push((int) 520765)
0x1f2: Push((int) -1)
0x1f3: Push((int) 21978)
0x1f4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f5: Pop(3)
0x1f6: Return(); Pop(0)

0x1f7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f8: PushEmpty(bool)
0x1f9: Call2 0x536

0x1fa: Pop(0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fc: @ lshStopAnimation()
0x1fd: Pop(0)
0x1fe: GOTO 0x201

0x1ff: @ StopAnimation()
0x200: Pop(0)
0x201: Return(); Pop(0)

0x202: GOTO 0x1b2

0x203: Return(); Pop(0)

0x204: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x205: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x206: PushEmpty(bool, object)
0x207: PushEmpty(object)
0x208: Call2 0x4f7

0x209: Stack[-1] = Stack[-2]
0x20a: Pop(1)
0x20b: Call2 0x44a

0x20c: Pop(2)
0x20d: PushEmpty(bool, object, float)
0x20e: Stack[-12] = Stack[-2]
0x20f: Stack[-1] = (float) 70.0
0x210: Call2 0x3f5

0x211: Pop(2)
0x212: Pop(1); Push((bool) Stack[-1] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x214: Stack[-10] = (int) -2
0x215: Return(); Pop(8)

0x216: @ CreateDialog(Stack[-4])
0x217: Pop(0)
0x218: PushEmpty(int)
0x219: Call2 0x530

0x21a: Pop(0)
0x21b: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x21c: Pop(1)
0x21d: PushEmpty(int)
0x21e: Call2 0x52e

0x21f: Pop(0)
0x220: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x221: Pop(1)
0x222: PushEmpty(string)
0x223: Call2 0x532

0x224: Pop(0)
0x225: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x226: Pop(1)
0x227: PushEmpty(string)
0x228: Call2 0x534

0x229: Pop(0)
0x22a: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x22b: Pop(1)
0x22c: PushEmpty(int)
0x22d: Call2 0x538

0x22e: Pop(0)
0x22f: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x230: Pop(1)
0x231: Stack[-2] = (int) -1
0x232: @ IsOverrideActive(Stack[-3])
0x233: Pop(0)
0x234: Push(Stack[-3])
0x235: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x236: Stack[-10] = (int) -2
0x237: Return(); Pop(8)

0x238: @ DoDialog(Stack[-4])
0x239: Pop(0)
0x23a: PushEmpty(object, object)
0x23b: Stack[-11] = Stack[-2]
0x23c: Stack[-6] = Stack[-1]
0x23d: Push(-2, 4); TaskCall(6)
0x23e: Call2 0x255

0x23f: Pop(-2, 4); TaskReturn
0x240: Pop(2)
0x241: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x242: Pop(0)
0x243: Pop(0); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: @ sync()
0x246: Pop(0)
0x247: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x248: Pop(0)
0x249: GOTO 0x243

0x24a: PushEmpty(object)
0x24b: Stack[-10] = Stack[-1]
0x24c: Call2 0x439

0x24d: Pop(1)
0x24e: @ StopDialog(Stack[-4])
0x24f: Pop(0)
0x250: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x251: Pop(0)
0x252: Stack[-2] = Stack[-10]
0x253: Return(); Pop(8)

0x254: Stack[-4] = 0
0x255: PushEmpty()
0x256: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x257: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x258: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x259: Push((int) 1)
0x25a: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x25b: PushEmpty(string)
0x25c: Stack[-1] = "Neutral" // @poff=89
0x25d: Call2 0x28f

0x25e: Pop(1)
0x25f: Push((int) 540554)
0x260: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x261: Pop(1)
0x262: @@@ ClearReplies(); Obj=0 // @poff=116
0x263: Pop(0)
0x264: Push((int) 540555)
0x265: Push((int) -1)
0x266: Push((int) 42564)
0x267: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x268: Pop(3)
0x269: Push((int) 540794)
0x26a: Push((int) -1)
0x26b: Push((int) 42843)
0x26c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26d: Pop(3)
0x26e: GOTO 0x271

0x26f: Return(); Pop(0)

0x270: GOTO 0x259

0x271: PushEmpty(bool)
0x272: Call2 0x536

0x273: Pop(0)
0x274: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x275: @ lshWaitForAnimEnd()
0x276: Pop(0)
0x277: Push( Stack[3 + Tasks[-1].StackPointer] )
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: GOTO 0x27f

0x27a: PushEmpty(string)
0x27b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x27c: Call2 0x4d4

0x27d: Pop(1)
0x27e: GOTO 0x275

0x27f: GOTO 0x28e

0x280: Push("all") // @poff=138
0x281: Push("idle") // @poff=146
0x282: @ PlayAnimation(Stack[-2], Stack[-1])
0x283: Pop(2)
0x284: @ WaitForAnimEnd()
0x285: Pop(0)
0x286: Push( Stack[3 + Tasks[-1].StackPointer] )
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: GOTO 0x28e

0x289: Push("all") // @poff=138
0x28a: Push("idle") // @poff=146
0x28b: @ PlayAnimation(Stack[-2], Stack[-1])
0x28c: Pop(2)
0x28d: GOTO 0x284

0x28e: Return(); Pop(0)

0x28f: PushEmpty()
0x290: PushEmpty(bool)
0x291: Call2 0x536

0x292: Pop(0)
0x293: Pop(1); Push((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: Return(); Pop(0)

0x296: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Return(); Pop(0)

0x299: PushEmpty(string, bool)
0x29a: Stack[-3] = Stack[-2]
0x29b: Push("") // @poff=102
0x29c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-1] = (bool) 0
0x29f: GOTO 0x2a1

0x2a0: Stack[-1] = (bool) 1
0x2a1: Call2 0x4db

0x2a2: Pop(2)
0x2a3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2a4: Return(); Pop(0)

0x2a5: PushEmpty()
0x2a6: Push((int) 1)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2a8: PushEmpty()
0x2a9: Call2 0x4f0

0x2aa: Pop(0)
0x2ab: Push((int) 42563)
0x2ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2ae: PushEmpty(string)
0x2af: Stack[-1] = "Neutral" // @poff=89
0x2b0: Call2 0x28f

0x2b1: Pop(1)
0x2b2: Push((int) 540554)
0x2b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b4: Pop(1)
0x2b5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b6: Pop(0)
0x2b7: Push((int) 540555)
0x2b8: Push((int) -1)
0x2b9: Push((int) 42564)
0x2ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2bb: Pop(3)
0x2bc: Push((int) 540794)
0x2bd: Push((int) -1)
0x2be: Push((int) 42843)
0x2bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c0: Pop(3)
0x2c1: Return(); Pop(0)

0x2c2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2c3: PushEmpty(bool)
0x2c4: Call2 0x536

0x2c5: Pop(0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c7: @ lshStopAnimation()
0x2c8: Pop(0)
0x2c9: GOTO 0x2cc

0x2ca: @ StopAnimation()
0x2cb: Pop(0)
0x2cc: Return(); Pop(0)

0x2cd: GOTO 0x2a6

0x2ce: Return(); Pop(0)

0x2cf: PushEmpty()
0x2d0: Call2 0x2d3

0x2d1: Pop(0)
0x2d2: Return(); Pop(0)

0x2d3: PushEmpty(bool)
0x2d4: Call2 0x3f0

0x2d5: Pop(0)
0x2d6: Pop(1); Push((bool) Stack[-1] == 0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d8: PushEmpty()
0x2d9: Push(-0, 0); TaskCall(0)
0x2da: Call2 0x0

0x2db: Pop(-0, 0); TaskReturn
0x2dc: Pop(0)
0x2dd: PushEmpty()
0x2de: Call2 0x353

0x2df: Pop(0)
0x2e0: @ GetDirection(Stack[-0]T)
0x2e1: Pop(0)
0x2e2: PushEmpty()
0x2e3: Call2 0x389

0x2e4: Pop(0)
0x2e5: GOTO 0x2e2

0x2e6: Return(); Pop(0)

0x2e7: PushEmpty(object, object)
0x2e8: Push("player") // @poff=156
0x2e9: @ FindActor(Stack[-2], Stack[-1])
0x2ea: Pop(1)
0x2eb: Pop(0); Push((bool) Stack[-1] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ed: Stack[-3] = (bool) 0
0x2ee: Return(); Pop(2)

0x2ef: PushEmpty(bool, object)
0x2f0: Stack[-3] = Stack[-1]
0x2f1: Call2 0x3e7

0x2f2: Stack[-2] = Stack[-5]
0x2f3: Pop(2)
0x2f4: Return(); Pop(2)

0x2f5: Stack[-1] = 0
0x2f6: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x2f7: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x2f8: @ RotateAsync(Stack[-2], Stack[-1])
0x2f9: Pop(2)
0x2fa: Return(); Pop(0)

0x2fb: PushEmpty(object, bool, object, bool)
0x2fc: Push("player") // @poff=156
0x2fd: @ FindActor(Stack[-3], Stack[-1])
0x2fe: Pop(1)
0x2ff: Pop(0); Push((bool) Stack[-2] == 0)
0x300: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x301: Stack[-5] = (bool) 0
0x302: Return(); Pop(4)

0x303: PushEmpty(float, object)
0x304: Stack[-4] = Stack[-1]
0x305: Call2 0x3d5

0x306: Pop(1)
0x307: Push((float)90000.0)
0x308: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30a: Stack[-5] = (bool) 0
0x30b: Return(); Pop(4)

0x30c: @ CanSee(Stack[-1], Stack[-2])
0x30d: Pop(0)
0x30e: Stack[-1] = Stack[-5]
0x30f: Return(); Pop(4)

0x310: Stack[-2] = 0
0x311: PushEmpty(float, float)
0x312: Push((int) 8)
0x313: Push((int) 16)
0x314: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x315: Pop(2)
0x316: Push((int) 10)
0x317: @ SetTimer(Stack[-1], Stack[-2])
0x318: Pop(1)
0x319: Return(); Pop(2)

0x31a: Push((int) 10)
0x31b: @ KillTimer(Stack[-1])
0x31c: Pop(1)
0x31d: Return(); Pop(0)

0x31e: PushEmpty()
0x31f: Push((int) 10)
0x320: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x322: PushEmpty()
0x323: Call2 0x31a

0x324: Pop(0)
0x325: PushEmpty(bool)
0x326: Stack[-1] = (bool) 0
0x327: PushEmpty(bool)
0x328: Call2 0x3f0

0x329: Pop(0)
0x32a: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32b: PushEmpty(bool)
0x32c: Call2 0x2fb

0x32d: Pop(0)
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: Stack[-1] = (bool) 1
0x330: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x331: PushEmpty(bool)
0x332: Call2 0x2e7

0x333: Pop(0)
0x334: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x335: PushEmpty(bool, object)
0x336: PushEmpty(object)
0x337: Call2 0x4f7

0x338: Stack[-1] = Stack[-2]
0x339: Pop(1)
0x33a: Call2 0x484

0x33b: Pop(2)
0x33c: GOTO 0x343

0x33d: PushEmpty()
0x33e: Call2 0x2f6

0x33f: Pop(0)
0x340: PushEmpty()
0x341: Call2 0x311

0x342: Pop(0)
0x343: Return(); Pop(0)

0x344: PushEmpty()
0x345: Call2 0x3d0

0x346: Pop(0)
0x347: PushEmpty()
0x348: Call2 0x31a

0x349: Pop(0)
0x34a: @ lshStopSpeech()
0x34b: Pop(0)
0x34c: @ lshStopAnimation()
0x34d: Pop(0)
0x34e: @ StopAsync()
0x34f: Pop(0)
0x350: @ Hold()
0x351: Pop(0)
0x352: Return(); Pop(0)

0x353: @ StopGroup0()
0x354: Pop(0)
0x355: PushEmpty()
0x356: Call2 0x31a

0x357: Pop(0)
0x358: PushEmpty(string)
0x359: Stack[-1] = "Neutral" // @poff=89
0x35a: Call2 0x4d4

0x35b: Pop(1)
0x35c: PushEmpty()
0x35d: Call2 0x311

0x35e: Pop(0)
0x35f: Return(); Pop(0)

0x360: PushEmpty()
0x361: Push(Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x363: PushEmpty()
0x364: Call2 0x311

0x365: Pop(0)
0x366: GOTO 0x36b

0x367: PushEmpty(string)
0x368: Stack[-1] = "Neutral" // @poff=89
0x369: Call2 0x4d4

0x36a: Pop(1)
0x36b: Return(); Pop(0)

0x36c: PushEmpty(bool, bool)
0x36d: @ IsOverrideActive(Stack[-1])
0x36e: Pop(0)
0x36f: Pop(0); Push((bool) Stack[-1] == 0)
0x370: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x371: EventDisable(0)
0x372: PushEmpty()
0x373: Call2 0x3d0

0x374: Pop(0)
0x375: PushEmpty(bool, object)
0x376: Stack[-5] = Stack[-1]
0x377: Call2 0x3e7

0x378: Pop(2)
0x379: EventEnable(0)
0x37a: PushEmpty(object)
0x37b: Stack[-4] = Stack[-1]
0x37c: Call2 0x549

0x37d: Pop(1)
0x37e: PushEmpty(string)
0x37f: Stack[-1] = "Neutral" // @poff=89
0x380: Call2 0x4d4

0x381: Pop(1)
0x382: PushEmpty()
0x383: Call2 0x31a

0x384: Pop(0)
0x385: PushEmpty()
0x386: Call2 0x311

0x387: Pop(0)
0x388: Return(); Pop(2)

0x389: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x38a: @ WaitForAnimEnd()
0x38b: Pop(0)
0x38c: PushEmpty(bool)
0x38d: Call2 0x3f0

0x38e: Pop(0)
0x38f: Pop(1); Push((bool) Stack[-1] == 0)
0x390: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x391: Return(); Pop(12)

0x392: PushEmpty(int)
0x393: Call2 0x51d

0x394: Stack[-1] = Stack[-7]
0x395: Pop(1)
0x396: Stack[-5] = (int) 0
0x397: PushEmpty(bool)
0x398: Stack[-1] = (bool) 0
0x399: Push((int) 5)
0x39a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39c: PushEmpty(bool)
0x39d: Call2 0x3f0

0x39e: Pop(0)
0x39f: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x3a0: Stack[-1] = (bool) 1
0x3a1: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3a2: Pop(0); Push((bool) Stack[-6] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a4: Push((int) 3)
0x3a5: @ Sleep(Stack[-1], Stack[-5])
0x3a6: Pop(1)
0x3a7: Pop(0); Push((bool) Stack[-4] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: GOTO 0x3cb

0x3aa: GOTO 0x3c0

0x3ab: @ irand(Stack[-3], Stack[-6])
0x3ac: Pop(0)
0x3ad: Push((int) 5)
0x3ae: @ irand(Stack[-3], Stack[-1])
0x3af: Pop(1)
0x3b0: Push((int) 0)
0x3b1: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: Stack[-3] = (int) 0
0x3b4: Push("all") // @poff=138
0x3b5: PushEmpty(string, int)
0x3b6: Stack[-6] = Stack[-1]
0x3b7: Call2 0x516

0x3b8: Pop(1)
0x3b9: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ba: Pop(2)
0x3bb: @ WaitForAnimEnd(Stack[-1])
0x3bc: Pop(0)
0x3bd: Pop(0); Push((bool) Stack[-1] == 0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: GOTO 0x3cb

0x3c0: PushEmpty(bool)
0x3c1: Call2 0x3ce

0x3c2: Pop(0)
0x3c3: Pop(1); Push((bool) Stack[-1] == 0)
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c5: GOTO 0x3cb

0x3c6: @ ResetAAS()
0x3c7: Pop(0)
0x3c8: Push((int) 1)
0x3c9: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3ca: GOTO 0x397

0x3cb: @ ResetAAS()
0x3cc: Pop(0)
0x3cd: Return(); Pop(12)

0x3ce: Stack[-1] = (bool) 1
0x3cf: Return(); Pop(0)

0x3d0: @ StopAnimation()
0x3d1: Pop(0)
0x3d2: @ StopGroup0()
0x3d3: Pop(0)
0x3d4: Return(); Pop(0)

0x3d5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3d6: @ GetPosition(Stack[-3])
0x3d7: Pop(0)
0x3d8: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x3d9: Pop(0)
0x3da: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3db: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3dc: Return(); Pop(6)

0x3dd: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3de: @ GetPosition(Stack[-3])
0x3df: Pop(0)
0x3e0: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3e1: Push(CvectorIndex(Stack[-2], 0))
0x3e2: Push(CvectorIndex(Stack[-3], 2))
0x3e3: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3e4: Pop(2)
0x3e5: Stack[-1] = Stack[-8]
0x3e6: Return(); Pop(6)

0x3e7: PushEmpty(cvector, cvector)
0x3e8: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x3e9: Pop(0)
0x3ea: PushEmpty(bool, cvector)
0x3eb: Stack[-3] = Stack[-1]
0x3ec: Call2 0x3dd

0x3ed: Stack[-2] = Stack[-6]
0x3ee: Pop(2)
0x3ef: Return(); Pop(2)

0x3f0: PushEmpty(bool, bool)
0x3f1: @ IsLoaded(Stack[-1])
0x3f2: Pop(0)
0x3f3: Stack[-1] = Stack[-3]
0x3f4: Return(); Pop(2)

0x3f5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3f6: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x3f7: Pop(0)
0x3f8: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x3f9: Pop(0)
0x3fa: Push(CvectorIndex(Stack[-8], 1))
0x3fb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3fc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3fd: @ GetPosition(Stack[-7])
0x3fe: Pop(0)
0x3ff: @ GetEyesHeight(Stack[-9])
0x400: Pop(0)
0x401: Push(CvectorIndex(Stack[-7], 1))
0x402: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x403: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x404: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x405: Push(CvectorIndex(Stack[-6], 1))
0x406: Stack[-1] = (int) 0
0x407: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x408: Pop(0); Push(Stack[-6] | Stack[-6]);
0x409: Pop(1); Push(Sqrt(Stack[-1]))
0x40a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x40b: Stack[-5] = -Stack[-6]; Pop(0);
0x40c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x40d: PushEmpty(cvector, cvector)
0x40e: Push([0.0, 1.0, 0.0])
0x40f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x410: Call2 0x4fd

0x411: Pop(1)
0x412: Push((int) 25)
0x413: Pop(2); Push(Stack[-2] * Stack[-1]);
0x414: Pop(2); Push(Stack[-2] + Stack[-1]);
0x415: Push([0.0, 10.0, 0.0])
0x416: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x417: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x418: @ IsOverrideActive(Stack[-2])
0x419: Pop(0)
0x41a: Push(Stack[-2])
0x41b: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41c: Stack[-21] = (bool) 0
0x41d: Return(); Pop(18)

0x41e: @ StopWorld()
0x41f: Pop(0)
0x420: @ CameraTransit(Stack[-3], Stack[-5])
0x421: Pop(0)
0x422: Push(CvectorIndex(Stack[-4], 0))
0x423: Push(CvectorIndex(Stack[-5], 2))
0x424: @ Rotate(Stack[-2], Stack[-1])
0x425: Pop(2)
0x426: PushEmpty(bool)
0x427: Call2 0x536

0x428: Pop(0)
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: GOTO 0x433

0x42b: Push("head") // @poff=196
0x42c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x42d: Pop(1)
0x42e: Push(Stack[-1])
0x42f: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x430: Push("head") // @poff=196
0x431: @ LookAsyncCamera(Stack[-1])
0x432: Pop(1)
0x433: @ CameraWaitForPlayFinish()
0x434: Pop(0)
0x435: @ ResumeWorld()
0x436: Pop(0)
0x437: Stack[-21] = (bool) 1
0x438: Return(); Pop(18)

0x439: PushEmpty(bool, bool)
0x43a: @ CameraSwitchToNormal()
0x43b: Pop(0)
0x43c: PushEmpty(bool)
0x43d: Call2 0x536

0x43e: Pop(0)
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: GOTO 0x449

0x441: Push("head") // @poff=196
0x442: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x443: Pop(1)
0x444: Push(Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x446: Push("head") // @poff=196
0x447: @ UnlookAsync(Stack[-1])
0x448: Pop(1)
0x449: Return(); Pop(2)

0x44a: PushEmpty(int, int, int, int)
0x44b: Push("voice_common") // @poff=206
0x44c: @ GetVariable(Stack[-1], Stack[-3])
0x44d: Pop(1)
0x44e: Push(Stack[-2])
0x44f: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x450: PushEmpty(bool, object)
0x451: Stack[-7] = Stack[-1]
0x452: Call2 0x484

0x453: Pop(1)
0x454: Pop(1); Push((bool) Stack[-1] == 0)
0x455: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x456: PushEmpty(bool, object)
0x457: Stack[-7] = Stack[-1]
0x458: Call2 0x4a9

0x459: Pop(1)
0x45a: Pop(1); Push((bool) Stack[-1] == 0)
0x45b: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45c: Stack[-6] = (bool) 0
0x45d: Return(); Pop(4)

0x45e: Push((int) 2)
0x45f: @ irand(Stack[-2], Stack[-1])
0x460: Pop(1)
0x461: Push(Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x463: Push("voice_common") // @poff=206
0x464: Push((int) 1)
0x465: Pop(1); Push(Stack[-4] + Stack[-1]);
0x466: Push((int) 3)
0x467: Pop(2); Push(Stack[-2] % Stack[-1]);
0x468: @ SetVariable(Stack[-2], Stack[-1])
0x469: Pop(2)
0x46a: GOTO 0x46f

0x46b: Push("voice_common") // @poff=206
0x46c: Push((int) 0)
0x46d: @ SetVariable(Stack[-2], Stack[-1])
0x46e: Pop(2)
0x46f: GOTO 0x482

0x470: PushEmpty(bool, object)
0x471: Stack[-7] = Stack[-1]
0x472: Call2 0x4a9

0x473: Pop(1)
0x474: Pop(1); Push((bool) Stack[-1] == 0)
0x475: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x476: PushEmpty(bool, object)
0x477: Stack[-7] = Stack[-1]
0x478: Call2 0x484

0x479: Pop(1)
0x47a: Pop(1); Push((bool) Stack[-1] == 0)
0x47b: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47c: Stack[-6] = (bool) 0
0x47d: Return(); Pop(4)

0x47e: Push("voice_common") // @poff=206
0x47f: Push((int) 1)
0x480: @ SetVariable(Stack[-2], Stack[-1])
0x481: Pop(2)
0x482: Stack[-6] = (bool) 1
0x483: Return(); Pop(4)

0x484: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x485: Stack[-5] = "c" // @poff=232
0x486: Stack[-4] = (int) 0
0x487: Push((int) 1)
0x488: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x489: Push((int) 1)
0x48a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x48b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x48c: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x48d: Pop(1)
0x48e: Pop(0); Push((bool) Stack[-3] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x490: GOTO 0x494

0x491: Push((int) 1)
0x492: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x493: GOTO 0x487

0x494: Pop(0); Push((bool) Stack[-4] == 0)
0x495: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x496: Stack[-12] = (bool) 0
0x497: Return(); Pop(10)

0x498: Stack[-2] = (int) 0
0x499: Push((int) 1)
0x49a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49c: @ irand(Stack[-2], Stack[-4])
0x49d: Pop(0)
0x49e: Push((int) 1)
0x49f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4a0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4a1: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x4a2: Pop(1)
0x4a3: PushEmpty(bool, string)
0x4a4: Stack[-3] = Stack[-1]
0x4a5: Call2 0x4e1

0x4a6: Stack[-2] = Stack[-14]
0x4a7: Pop(2)
0x4a8: Return(); Pop(10)

0x4a9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4aa: Push("d") // @poff=202
0x4ab: PushEmpty(int)
0x4ac: Call2 0x507

0x4ad: Pop(0)
0x4ae: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4af: Push("m") // @poff=260
0x4b0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4b1: Stack[-4] = (int) 0
0x4b2: Push((int) 1)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b4: Push((int) 1)
0x4b5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4b6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4b7: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x4b8: Pop(1)
0x4b9: Pop(0); Push((bool) Stack[-3] == 0)
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4bb: GOTO 0x4bf

0x4bc: Push((int) 1)
0x4bd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4be: GOTO 0x4b2

0x4bf: Pop(0); Push((bool) Stack[-4] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c1: Stack[-12] = (bool) 0
0x4c2: Return(); Pop(10)

0x4c3: Stack[-2] = (int) 0
0x4c4: Push((int) 1)
0x4c5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c7: @ irand(Stack[-2], Stack[-4])
0x4c8: Pop(0)
0x4c9: Push((int) 1)
0x4ca: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4cb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4cc: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x4cd: Pop(1)
0x4ce: PushEmpty(bool, string)
0x4cf: Stack[-3] = Stack[-1]
0x4d0: Call2 0x4e1

0x4d1: Stack[-2] = Stack[-14]
0x4d2: Pop(2)
0x4d3: Return(); Pop(10)

0x4d4: PushEmpty(float, float, float, float)
0x4d5: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x4d6: Pop(0)
0x4d7: Push((bool) 0)
0x4d8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4d9: Pop(1)
0x4da: Return(); Pop(4)

0x4db: PushEmpty(float, float, float, float)
0x4dc: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x4dd: Pop(0)
0x4de: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x4df: Pop(0)
0x4e0: Return(); Pop(4)

0x4e1: PushEmpty(bool, bool)
0x4e2: PushEmpty(bool)
0x4e3: Call2 0x536

0x4e4: Pop(0)
0x4e5: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4e6: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4e7: Pop(0)
0x4e8: Push(Stack[-1])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4ea: @ lshPlaySpeech(Stack[-3])
0x4eb: Pop(0)
0x4ec: Stack[-4] = (bool) 1
0x4ed: Return(); Pop(2)

0x4ee: Stack[-4] = (bool) 0
0x4ef: Return(); Pop(2)

0x4f0: PushEmpty(bool)
0x4f1: Call2 0x536

0x4f2: Pop(0)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f4: @ lshStopSpeech()
0x4f5: Pop(0)
0x4f6: Return(); Pop(0)

0x4f7: PushEmpty(object, object)
0x4f8: @ self(Stack[-1])
0x4f9: Pop(0)
0x4fa: Stack[-1] = Stack[-3]
0x4fb: Return(); Pop(2)

0x4fc: Stack[-1] = 0
0x4fd: PushEmpty(float, float)
0x4fe: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4ff: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x500: Push((float)9.999999974752427e-07)
0x501: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x502: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x503: Stack[-4] = [0.0, 0.0, 0.0]
0x504: Return(); Pop(2)

0x505: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x506: Return(); Pop(2)

0x507: PushEmpty(float, float)
0x508: @ GetGameTime(Stack[-1])
0x509: Pop(0)
0x50a: Push((int) 1)
0x50b: PushEmpty(int)
0x50c: Push((int) 24)
0x50d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x50e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x50f: Return(); Pop(2)

0x510: PushEmpty()
0x511: PushEmpty(int)
0x512: Call2 0x507

0x513: Pop(0)
0x514: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x515: Return(); Pop(0)

0x516: PushEmpty(string, string)
0x517: Stack[-1] = "idle" // @poff=146
0x518: Push(Stack[-3])
0x519: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x51a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x51b: Stack[-1] = Stack[-4]
0x51c: Return(); Pop(2)

0x51d: PushEmpty(int, bool, int, bool)
0x51e: Stack[-2] = (int) 0
0x51f: Push("all") // @poff=138
0x520: PushEmpty(string, int)
0x521: Stack[-5] = Stack[-1]
0x522: Call2 0x516

0x523: Pop(1)
0x524: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x525: Pop(2)
0x526: Pop(0); Push((bool) Stack[-1] == 0)
0x527: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x528: GOTO 0x52c

0x529: Push((int) 1)
0x52a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x52b: GOTO 0x51f

0x52c: Stack[-2] = Stack[-5]
0x52d: Return(); Pop(4)

0x52e: Stack[-1] = (int) 515544
0x52f: Return(); Pop(0)

0x530: Stack[-1] = (int) 502869
0x531: Return(); Pop(0)

0x532: Stack[-1] = "ui/NPC_Mark.png" // @poff=264
0x533: Return(); Pop(0)

0x534: Stack[-1] = "ui/NPC_Mark_b.png" // @poff=296
0x535: Return(); Pop(0)

0x536: Stack[-1] = (bool) 1
0x537: Return(); Pop(0)

0x538: PushEmpty(int, int)
0x539: Push("branch") // @poff=332
0x53a: @ GetVariable(Stack[-1], Stack[-2])
0x53b: Pop(1)
0x53c: Push((int) 0)
0x53d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53f: Stack[-3] = (int) 1
0x540: Return(); Pop(2)

0x541: GOTO 0x547

0x542: Push((int) 1)
0x543: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x544: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x545: Stack[-3] = (int) 2
0x546: Return(); Pop(2)

0x547: Stack[-3] = (int) 3
0x548: Return(); Pop(2)

0x549: PushEmpty(int, int, int, int)
0x54a: Push("mt_mark") // @poff=346
0x54b: @ GetVariable(Stack[-1], Stack[-3])
0x54c: Pop(1)
0x54d: Pop(0); Push((bool) Stack[-2] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x54f: PushEmpty(int, object)
0x550: Stack[-7] = Stack[-1]
0x551: Push(-2, 1); TaskCall(3)
0x552: Call2 0x110

0x553: Pop(-2, 1); TaskReturn
0x554: Pop(2)
0x555: Push("mt_mark") // @poff=346
0x556: Push((int) 1)
0x557: @ SetVariable(Stack[-2], Stack[-1])
0x558: Pop(2)
0x559: Push("d12_mark") // @poff=362
0x55a: @ GetVariable(Stack[-1], Stack[-2])
0x55b: Pop(1)
0x55c: PushEmpty(bool)
0x55d: Stack[-1] = (bool) 0
0x55e: PushEmpty(bool, int)
0x55f: Stack[-1] = (int) 12
0x560: Call2 0x510

0x561: Pop(1)
0x562: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x563: Pop(0); Push((bool) Stack[-2] == 0)
0x564: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x565: Stack[-1] = (bool) 1
0x566: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x567: PushEmpty(int, object)
0x568: Stack[-7] = Stack[-1]
0x569: Push(-2, 1); TaskCall(1)
0x56a: Call2 0xd

0x56b: Pop(-2, 1); TaskReturn
0x56c: Pop(2)
0x56d: Push("d12_mark") // @poff=362
0x56e: Push((int) 1)
0x56f: @ SetVariable(Stack[-2], Stack[-1])
0x570: Pop(2)
0x571: Return(); Pop(4)

0x572: PushEmpty(int, object)
0x573: Stack[-7] = Stack[-1]
0x574: Push(-2, 1); TaskCall(5)
0x575: Call2 0x204

0x576: Pop(-2, 1); TaskReturn
0x577: Pop(2)
0x578: Return(); Pop(4)

