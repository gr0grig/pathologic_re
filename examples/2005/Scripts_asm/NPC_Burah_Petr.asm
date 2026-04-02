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
	W:ui/NPC_Petr.png
	W:ui/NPC_Petr_b.png
	W:oob2Petr1
	W:branch
	W:mt_petr
	W:d12_petr
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f0050006500740072002e0070006e0067000000750069002f004e00500043005f0050006500740072005f0062002e0070006e00670000006f006f00620032005000650074007200310000006200720061006e006300680000006d0074005f00700065007400720000006400310032005f0070006500740072000000
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

RunOp = 0x41a
RunTask = 9

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
		EVENT_11 Op = 0x29d Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3f0 Vars = (int, int)
	GTASK_9 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x469 Vars = (int)
		EVENT_6 Op = 0x48f Vars = ()
		EVENT_5 Op = 0x49e Vars = ()
		EVENT_45 Op = 0x4ab Vars = (bool)
		EVENT_0 Op = 0x4b7 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x53b

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
0x11: Call2 0x642

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x595

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x540

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x680

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x67e

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x682

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x684

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x69a

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
0x55: Call2 0x584

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
0x80: Call2 0x686

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x61f

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
0x9f: Call2 0x686

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
0xaf: Call2 0x626

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x63b

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
0x105: Call2 0x686

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
0x114: Call2 0x642

0x115: Stack[-1] = Stack[-2]
0x116: Pop(1)
0x117: Call2 0x595

0x118: Pop(2)
0x119: PushEmpty(bool, object, float)
0x11a: Stack[-12] = Stack[-2]
0x11b: Stack[-1] = (float) 70.0
0x11c: Call2 0x540

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-10] = (int) -2
0x121: Return(); Pop(8)

0x122: @ CreateDialog(Stack[-4])
0x123: Pop(0)
0x124: PushEmpty(int)
0x125: Call2 0x680

0x126: Pop(0)
0x127: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x128: Pop(1)
0x129: PushEmpty(int)
0x12a: Call2 0x67e

0x12b: Pop(0)
0x12c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x12d: Pop(1)
0x12e: PushEmpty(string)
0x12f: Call2 0x682

0x130: Pop(0)
0x131: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x132: Pop(1)
0x133: PushEmpty(string)
0x134: Call2 0x684

0x135: Pop(0)
0x136: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x137: Pop(1)
0x138: PushEmpty(int)
0x139: Call2 0x69a

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
0x158: Call2 0x584

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
0x16b: Push((int) 518045)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 518046)
0x171: Push((int) 32123)
0x172: Push((int) 19179)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 530814)
0x176: Push((int) 32123)
0x177: Push((int) 32122)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: GOTO 0x17d

0x17b: Return(); Pop(0)

0x17c: GOTO 0x165

0x17d: PushEmpty(bool)
0x17e: Call2 0x686

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x181: @ lshWaitForAnimEnd()
0x182: Pop(0)
0x183: Push( Stack[3 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x18b

0x186: PushEmpty(string)
0x187: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x188: Call2 0x61f

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
0x19d: Call2 0x686

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
0x1ad: Call2 0x626

0x1ae: Pop(2)
0x1af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Push((int) 1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x63b

0x1b6: Pop(0)
0x1b7: Push((int) 19178)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral" // @poff=89
0x1bc: Call2 0x19b

0x1bd: Pop(1)
0x1be: Push((int) 518045)
0x1bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c0: Pop(1)
0x1c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c2: Pop(0)
0x1c3: Push((int) 518046)
0x1c4: Push((int) 32123)
0x1c5: Push((int) 19179)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Push((int) 530814)
0x1c9: Push((int) 32123)
0x1ca: Push((int) 32122)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 32123)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral" // @poff=89
0x1d3: Call2 0x19b

0x1d4: Pop(1)
0x1d5: Push((int) 530815)
0x1d6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d7: Pop(1)
0x1d8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d9: Pop(0)
0x1da: Push((int) 530816)
0x1db: Push((int) -1)
0x1dc: Push((int) 32125)
0x1dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1de: Pop(3)
0x1df: Push((int) 530817)
0x1e0: Push((int) -1)
0x1e1: Push((int) 32126)
0x1e2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e6: PushEmpty(bool)
0x1e7: Call2 0x686

0x1e8: Pop(0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ea: @ lshStopAnimation()
0x1eb: Pop(0)
0x1ec: GOTO 0x1ef

0x1ed: @ StopAnimation()
0x1ee: Pop(0)
0x1ef: Return(); Pop(0)

0x1f0: GOTO 0x1b2

0x1f1: Return(); Pop(0)

0x1f2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1f3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1f4: PushEmpty(bool, object)
0x1f5: PushEmpty(object)
0x1f6: Call2 0x642

0x1f7: Stack[-1] = Stack[-2]
0x1f8: Pop(1)
0x1f9: Call2 0x595

0x1fa: Pop(2)
0x1fb: PushEmpty(bool, object, float)
0x1fc: Stack[-12] = Stack[-2]
0x1fd: Stack[-1] = (float) 70.0
0x1fe: Call2 0x540

0x1ff: Pop(2)
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x202: Stack[-10] = (int) -2
0x203: Return(); Pop(8)

0x204: @ CreateDialog(Stack[-4])
0x205: Pop(0)
0x206: PushEmpty(int)
0x207: Call2 0x680

0x208: Pop(0)
0x209: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x20a: Pop(1)
0x20b: PushEmpty(int)
0x20c: Call2 0x67e

0x20d: Pop(0)
0x20e: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x20f: Pop(1)
0x210: PushEmpty(string)
0x211: Call2 0x682

0x212: Pop(0)
0x213: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x214: Pop(1)
0x215: PushEmpty(string)
0x216: Call2 0x684

0x217: Pop(0)
0x218: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x219: Pop(1)
0x21a: PushEmpty(int)
0x21b: Call2 0x69a

0x21c: Pop(0)
0x21d: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x21e: Pop(1)
0x21f: Stack[-2] = (int) -1
0x220: @ IsOverrideActive(Stack[-3])
0x221: Pop(0)
0x222: Push(Stack[-3])
0x223: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x224: Stack[-10] = (int) -2
0x225: Return(); Pop(8)

0x226: @ DoDialog(Stack[-4])
0x227: Pop(0)
0x228: PushEmpty(object, object)
0x229: Stack[-11] = Stack[-2]
0x22a: Stack[-6] = Stack[-1]
0x22b: Push(-2, 4); TaskCall(6)
0x22c: Call2 0x243

0x22d: Pop(-2, 4); TaskReturn
0x22e: Pop(2)
0x22f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x230: Pop(0)
0x231: Pop(0); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: @ sync()
0x234: Pop(0)
0x235: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x236: Pop(0)
0x237: GOTO 0x231

0x238: PushEmpty(object)
0x239: Stack[-10] = Stack[-1]
0x23a: Call2 0x584

0x23b: Pop(1)
0x23c: @ StopDialog(Stack[-4])
0x23d: Pop(0)
0x23e: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x23f: Pop(0)
0x240: Stack[-2] = Stack[-10]
0x241: Return(); Pop(8)

0x242: Stack[-4] = 0
0x243: PushEmpty()
0x244: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x245: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x246: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x247: Push((int) 1)
0x248: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x249: PushEmpty(string)
0x24a: Stack[-1] = "Neutral" // @poff=89
0x24b: Call2 0x287

0x24c: Pop(1)
0x24d: Push((int) 518209)
0x24e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24f: Pop(1)
0x250: @@@ ClearReplies(); Obj=0 // @poff=116
0x251: Pop(0)
0x252: PushEmpty(bool, object)
0x253: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x254: Call2 0x68e

0x255: Pop(1)
0x256: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x257: Push((int) 519429)
0x258: Push((int) 20597)
0x259: Push((int) 20596)
0x25a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25b: Pop(3)
0x25c: Push((int) 518210)
0x25d: Push((int) 20610)
0x25e: Push((int) 19323)
0x25f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x260: Pop(3)
0x261: Push((int) 518211)
0x262: Push((int) -1)
0x263: Push((int) 19324)
0x264: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x265: Pop(3)
0x266: GOTO 0x269

0x267: Return(); Pop(0)

0x268: GOTO 0x247

0x269: PushEmpty(bool)
0x26a: Call2 0x686

0x26b: Pop(0)
0x26c: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x26d: @ lshWaitForAnimEnd()
0x26e: Pop(0)
0x26f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: GOTO 0x277

0x272: PushEmpty(string)
0x273: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x274: Call2 0x61f

0x275: Pop(1)
0x276: GOTO 0x26d

0x277: GOTO 0x286

0x278: Push("all") // @poff=138
0x279: Push("idle") // @poff=146
0x27a: @ PlayAnimation(Stack[-2], Stack[-1])
0x27b: Pop(2)
0x27c: @ WaitForAnimEnd()
0x27d: Pop(0)
0x27e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: GOTO 0x286

0x281: Push("all") // @poff=138
0x282: Push("idle") // @poff=146
0x283: @ PlayAnimation(Stack[-2], Stack[-1])
0x284: Pop(2)
0x285: GOTO 0x27c

0x286: Return(); Pop(0)

0x287: PushEmpty()
0x288: PushEmpty(bool)
0x289: Call2 0x686

0x28a: Pop(0)
0x28b: Pop(1); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: Return(); Pop(0)

0x28e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: Return(); Pop(0)

0x291: PushEmpty(string, bool)
0x292: Stack[-3] = Stack[-2]
0x293: Push("") // @poff=102
0x294: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x296: Stack[-1] = (bool) 0
0x297: GOTO 0x299

0x298: Stack[-1] = (bool) 1
0x299: Call2 0x626

0x29a: Pop(2)
0x29b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x29c: Return(); Pop(0)

0x29d: PushEmpty()
0x29e: Push((int) 1)
0x29f: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x2a0: PushEmpty()
0x2a1: Call2 0x63b

0x2a2: Pop(0)
0x2a3: Push((int) 20596)
0x2a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a6: PushEmpty(object, object)
0x2a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0x688

0x2aa: Pop(2)
0x2ab: Push((int) 19322)
0x2ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2ae: PushEmpty(string)
0x2af: Stack[-1] = "Neutral" // @poff=89
0x2b0: Call2 0x287

0x2b1: Pop(1)
0x2b2: Push((int) 518209)
0x2b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b4: Pop(1)
0x2b5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b6: Pop(0)
0x2b7: PushEmpty(bool, object)
0x2b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b9: Call2 0x68e

0x2ba: Pop(1)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bc: Push((int) 519429)
0x2bd: Push((int) 20597)
0x2be: Push((int) 20596)
0x2bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c0: Pop(3)
0x2c1: Push((int) 518210)
0x2c2: Push((int) 20610)
0x2c3: Push((int) 19323)
0x2c4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c5: Pop(3)
0x2c6: Push((int) 518211)
0x2c7: Push((int) -1)
0x2c8: Push((int) 19324)
0x2c9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ca: Pop(3)
0x2cb: Return(); Pop(0)

0x2cc: Push((int) 20610)
0x2cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2cf: PushEmpty(string)
0x2d0: Stack[-1] = "Neutral" // @poff=89
0x2d1: Call2 0x287

0x2d2: Pop(1)
0x2d3: Push((int) 519442)
0x2d4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d5: Pop(1)
0x2d6: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d7: Pop(0)
0x2d8: Push((int) 519443)
0x2d9: Push((int) -1)
0x2da: Push((int) 20611)
0x2db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2dc: Pop(3)
0x2dd: Return(); Pop(0)

0x2de: Push((int) 20597)
0x2df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2e1: PushEmpty(string)
0x2e2: Stack[-1] = "Neutral" // @poff=89
0x2e3: Call2 0x287

0x2e4: Pop(1)
0x2e5: Push((int) 519430)
0x2e6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e7: Pop(1)
0x2e8: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e9: Pop(0)
0x2ea: Push((int) 519431)
0x2eb: Push((int) 20599)
0x2ec: Push((int) 20598)
0x2ed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ee: Pop(3)
0x2ef: Push((int) 519438)
0x2f0: Push((int) -1)
0x2f1: Push((int) 20605)
0x2f2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f3: Pop(3)
0x2f4: Return(); Pop(0)

0x2f5: Push((int) 20599)
0x2f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2f8: PushEmpty(string)
0x2f9: Stack[-1] = "Neutral" // @poff=89
0x2fa: Call2 0x287

0x2fb: Pop(1)
0x2fc: Push((int) 519432)
0x2fd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2fe: Pop(1)
0x2ff: @@@ ClearReplies(); Obj=0 // @poff=116
0x300: Pop(0)
0x301: Push((int) 519433)
0x302: Push((int) 20601)
0x303: Push((int) 20600)
0x304: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x305: Pop(3)
0x306: Push((int) 519439)
0x307: Push((int) 20607)
0x308: Push((int) 20606)
0x309: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x30a: Pop(3)
0x30b: Return(); Pop(0)

0x30c: Push((int) 20607)
0x30d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x30f: PushEmpty(string)
0x310: Stack[-1] = "Neutral" // @poff=89
0x311: Call2 0x287

0x312: Pop(1)
0x313: Push((int) 519440)
0x314: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x315: Pop(1)
0x316: @@@ ClearReplies(); Obj=0 // @poff=116
0x317: Pop(0)
0x318: Push((int) 519441)
0x319: Push((int) 20601)
0x31a: Push((int) 20608)
0x31b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31c: Pop(3)
0x31d: Return(); Pop(0)

0x31e: Push((int) 20601)
0x31f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x321: PushEmpty(string)
0x322: Stack[-1] = "Neutral" // @poff=89
0x323: Call2 0x287

0x324: Pop(1)
0x325: Push((int) 519434)
0x326: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x327: Pop(1)
0x328: @@@ ClearReplies(); Obj=0 // @poff=116
0x329: Pop(0)
0x32a: Push((int) 519435)
0x32b: Push((int) 20603)
0x32c: Push((int) 20602)
0x32d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x32e: Pop(3)
0x32f: Return(); Pop(0)

0x330: Push((int) 20603)
0x331: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x333: PushEmpty(string)
0x334: Stack[-1] = "Neutral" // @poff=89
0x335: Call2 0x287

0x336: Pop(1)
0x337: Push((int) 519436)
0x338: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x339: Pop(1)
0x33a: @@@ ClearReplies(); Obj=0 // @poff=116
0x33b: Pop(0)
0x33c: Push((int) 519437)
0x33d: Push((int) -1)
0x33e: Push((int) 20604)
0x33f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x340: Pop(3)
0x341: Return(); Pop(0)

0x342: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x343: PushEmpty(bool)
0x344: Call2 0x686

0x345: Pop(0)
0x346: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x347: @ lshStopAnimation()
0x348: Pop(0)
0x349: GOTO 0x34c

0x34a: @ StopAnimation()
0x34b: Pop(0)
0x34c: Return(); Pop(0)

0x34d: GOTO 0x29e

0x34e: Return(); Pop(0)

0x34f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x350: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x351: PushEmpty(bool, object)
0x352: PushEmpty(object)
0x353: Call2 0x642

0x354: Stack[-1] = Stack[-2]
0x355: Pop(1)
0x356: Call2 0x595

0x357: Pop(2)
0x358: PushEmpty(bool, object, float)
0x359: Stack[-12] = Stack[-2]
0x35a: Stack[-1] = (float) 70.0
0x35b: Call2 0x540

0x35c: Pop(2)
0x35d: Pop(1); Push((bool) Stack[-1] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: Stack[-10] = (int) -2
0x360: Return(); Pop(8)

0x361: @ CreateDialog(Stack[-4])
0x362: Pop(0)
0x363: PushEmpty(int)
0x364: Call2 0x680

0x365: Pop(0)
0x366: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x367: Pop(1)
0x368: PushEmpty(int)
0x369: Call2 0x67e

0x36a: Pop(0)
0x36b: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x36c: Pop(1)
0x36d: PushEmpty(string)
0x36e: Call2 0x682

0x36f: Pop(0)
0x370: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x371: Pop(1)
0x372: PushEmpty(string)
0x373: Call2 0x684

0x374: Pop(0)
0x375: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x376: Pop(1)
0x377: PushEmpty(int)
0x378: Call2 0x69a

0x379: Pop(0)
0x37a: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x37b: Pop(1)
0x37c: Stack[-2] = (int) -1
0x37d: @ IsOverrideActive(Stack[-3])
0x37e: Pop(0)
0x37f: Push(Stack[-3])
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-10] = (int) -2
0x382: Return(); Pop(8)

0x383: @ DoDialog(Stack[-4])
0x384: Pop(0)
0x385: PushEmpty(object, object)
0x386: Stack[-11] = Stack[-2]
0x387: Stack[-6] = Stack[-1]
0x388: Push(-2, 4); TaskCall(8)
0x389: Call2 0x3a0

0x38a: Pop(-2, 4); TaskReturn
0x38b: Pop(2)
0x38c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x38d: Pop(0)
0x38e: Pop(0); Push((bool) Stack[-1] == 0)
0x38f: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x390: @ sync()
0x391: Pop(0)
0x392: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x393: Pop(0)
0x394: GOTO 0x38e

0x395: PushEmpty(object)
0x396: Stack[-10] = Stack[-1]
0x397: Call2 0x584

0x398: Pop(1)
0x399: @ StopDialog(Stack[-4])
0x39a: Pop(0)
0x39b: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x39c: Pop(0)
0x39d: Stack[-2] = Stack[-10]
0x39e: Return(); Pop(8)

0x39f: Stack[-4] = 0
0x3a0: PushEmpty()
0x3a1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3a2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3a3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3a4: Push((int) 1)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3a6: PushEmpty(string)
0x3a7: Stack[-1] = "Neutral" // @poff=89
0x3a8: Call2 0x3da

0x3a9: Pop(1)
0x3aa: Push((int) 540554)
0x3ab: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ac: Pop(1)
0x3ad: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ae: Pop(0)
0x3af: Push((int) 540555)
0x3b0: Push((int) -1)
0x3b1: Push((int) 42564)
0x3b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b3: Pop(3)
0x3b4: Push((int) 540794)
0x3b5: Push((int) -1)
0x3b6: Push((int) 42843)
0x3b7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b8: Pop(3)
0x3b9: GOTO 0x3bc

0x3ba: Return(); Pop(0)

0x3bb: GOTO 0x3a4

0x3bc: PushEmpty(bool)
0x3bd: Call2 0x686

0x3be: Pop(0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c0: @ lshWaitForAnimEnd()
0x3c1: Pop(0)
0x3c2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c4: GOTO 0x3ca

0x3c5: PushEmpty(string)
0x3c6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3c7: Call2 0x61f

0x3c8: Pop(1)
0x3c9: GOTO 0x3c0

0x3ca: GOTO 0x3d9

0x3cb: Push("all") // @poff=138
0x3cc: Push("idle") // @poff=146
0x3cd: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ce: Pop(2)
0x3cf: @ WaitForAnimEnd()
0x3d0: Pop(0)
0x3d1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: GOTO 0x3d9

0x3d4: Push("all") // @poff=138
0x3d5: Push("idle") // @poff=146
0x3d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d7: Pop(2)
0x3d8: GOTO 0x3cf

0x3d9: Return(); Pop(0)

0x3da: PushEmpty()
0x3db: PushEmpty(bool)
0x3dc: Call2 0x686

0x3dd: Pop(0)
0x3de: Pop(1); Push((bool) Stack[-1] == 0)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3e0: Return(); Pop(0)

0x3e1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e3: Return(); Pop(0)

0x3e4: PushEmpty(string, bool)
0x3e5: Stack[-3] = Stack[-2]
0x3e6: Push("") // @poff=102
0x3e7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e9: Stack[-1] = (bool) 0
0x3ea: GOTO 0x3ec

0x3eb: Stack[-1] = (bool) 1
0x3ec: Call2 0x626

0x3ed: Pop(2)
0x3ee: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3ef: Return(); Pop(0)

0x3f0: PushEmpty()
0x3f1: Push((int) 1)
0x3f2: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x3f3: PushEmpty()
0x3f4: Call2 0x63b

0x3f5: Pop(0)
0x3f6: Push((int) 42563)
0x3f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3f9: PushEmpty(string)
0x3fa: Stack[-1] = "Neutral" // @poff=89
0x3fb: Call2 0x3da

0x3fc: Pop(1)
0x3fd: Push((int) 540554)
0x3fe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ff: Pop(1)
0x400: @@@ ClearReplies(); Obj=0 // @poff=116
0x401: Pop(0)
0x402: Push((int) 540555)
0x403: Push((int) -1)
0x404: Push((int) 42564)
0x405: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x406: Pop(3)
0x407: Push((int) 540794)
0x408: Push((int) -1)
0x409: Push((int) 42843)
0x40a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x40e: PushEmpty(bool)
0x40f: Call2 0x686

0x410: Pop(0)
0x411: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x412: @ lshStopAnimation()
0x413: Pop(0)
0x414: GOTO 0x417

0x415: @ StopAnimation()
0x416: Pop(0)
0x417: Return(); Pop(0)

0x418: GOTO 0x3f1

0x419: Return(); Pop(0)

0x41a: PushEmpty()
0x41b: Call2 0x41e

0x41c: Pop(0)
0x41d: Return(); Pop(0)

0x41e: PushEmpty(bool)
0x41f: Call2 0x53b

0x420: Pop(0)
0x421: Pop(1); Push((bool) Stack[-1] == 0)
0x422: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x423: PushEmpty()
0x424: Push(-0, 0); TaskCall(0)
0x425: Call2 0x0

0x426: Pop(-0, 0); TaskReturn
0x427: Pop(0)
0x428: PushEmpty()
0x429: Call2 0x49e

0x42a: Pop(0)
0x42b: @ GetDirection(Stack[-0]T)
0x42c: Pop(0)
0x42d: PushEmpty()
0x42e: Call2 0x4d4

0x42f: Pop(0)
0x430: GOTO 0x42d

0x431: Return(); Pop(0)

0x432: PushEmpty(object, object)
0x433: Push("player") // @poff=156
0x434: @ FindActor(Stack[-2], Stack[-1])
0x435: Pop(1)
0x436: Pop(0); Push((bool) Stack[-1] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x438: Stack[-3] = (bool) 0
0x439: Return(); Pop(2)

0x43a: PushEmpty(bool, object)
0x43b: Stack[-3] = Stack[-1]
0x43c: Call2 0x532

0x43d: Stack[-2] = Stack[-5]
0x43e: Pop(2)
0x43f: Return(); Pop(2)

0x440: Stack[-1] = 0
0x441: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x442: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x443: @ RotateAsync(Stack[-2], Stack[-1])
0x444: Pop(2)
0x445: Return(); Pop(0)

0x446: PushEmpty(object, bool, object, bool)
0x447: Push("player") // @poff=156
0x448: @ FindActor(Stack[-3], Stack[-1])
0x449: Pop(1)
0x44a: Pop(0); Push((bool) Stack[-2] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44c: Stack[-5] = (bool) 0
0x44d: Return(); Pop(4)

0x44e: PushEmpty(float, object)
0x44f: Stack[-4] = Stack[-1]
0x450: Call2 0x520

0x451: Pop(1)
0x452: Push((float)90000.0)
0x453: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x455: Stack[-5] = (bool) 0
0x456: Return(); Pop(4)

0x457: @ CanSee(Stack[-1], Stack[-2])
0x458: Pop(0)
0x459: Stack[-1] = Stack[-5]
0x45a: Return(); Pop(4)

0x45b: Stack[-2] = 0
0x45c: PushEmpty(float, float)
0x45d: Push((int) 8)
0x45e: Push((int) 16)
0x45f: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x460: Pop(2)
0x461: Push((int) 10)
0x462: @ SetTimer(Stack[-1], Stack[-2])
0x463: Pop(1)
0x464: Return(); Pop(2)

0x465: Push((int) 10)
0x466: @ KillTimer(Stack[-1])
0x467: Pop(1)
0x468: Return(); Pop(0)

0x469: PushEmpty()
0x46a: Push((int) 10)
0x46b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x46d: PushEmpty()
0x46e: Call2 0x465

0x46f: Pop(0)
0x470: PushEmpty(bool)
0x471: Stack[-1] = (bool) 0
0x472: PushEmpty(bool)
0x473: Call2 0x53b

0x474: Pop(0)
0x475: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x476: PushEmpty(bool)
0x477: Call2 0x446

0x478: Pop(0)
0x479: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x47a: Stack[-1] = (bool) 1
0x47b: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x47c: PushEmpty(bool)
0x47d: Call2 0x432

0x47e: Pop(0)
0x47f: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x480: PushEmpty(bool, object)
0x481: PushEmpty(object)
0x482: Call2 0x642

0x483: Stack[-1] = Stack[-2]
0x484: Pop(1)
0x485: Call2 0x5cf

0x486: Pop(2)
0x487: GOTO 0x48e

0x488: PushEmpty()
0x489: Call2 0x441

0x48a: Pop(0)
0x48b: PushEmpty()
0x48c: Call2 0x45c

0x48d: Pop(0)
0x48e: Return(); Pop(0)

0x48f: PushEmpty()
0x490: Call2 0x51b

0x491: Pop(0)
0x492: PushEmpty()
0x493: Call2 0x465

0x494: Pop(0)
0x495: @ lshStopSpeech()
0x496: Pop(0)
0x497: @ lshStopAnimation()
0x498: Pop(0)
0x499: @ StopAsync()
0x49a: Pop(0)
0x49b: @ Hold()
0x49c: Pop(0)
0x49d: Return(); Pop(0)

0x49e: @ StopGroup0()
0x49f: Pop(0)
0x4a0: PushEmpty()
0x4a1: Call2 0x465

0x4a2: Pop(0)
0x4a3: PushEmpty(string)
0x4a4: Stack[-1] = "Neutral" // @poff=89
0x4a5: Call2 0x61f

0x4a6: Pop(1)
0x4a7: PushEmpty()
0x4a8: Call2 0x45c

0x4a9: Pop(0)
0x4aa: Return(); Pop(0)

0x4ab: PushEmpty()
0x4ac: Push(Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4ae: PushEmpty()
0x4af: Call2 0x45c

0x4b0: Pop(0)
0x4b1: GOTO 0x4b6

0x4b2: PushEmpty(string)
0x4b3: Stack[-1] = "Neutral" // @poff=89
0x4b4: Call2 0x61f

0x4b5: Pop(1)
0x4b6: Return(); Pop(0)

0x4b7: PushEmpty(bool, bool)
0x4b8: @ IsOverrideActive(Stack[-1])
0x4b9: Pop(0)
0x4ba: Pop(0); Push((bool) Stack[-1] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4bc: EventDisable(0)
0x4bd: PushEmpty()
0x4be: Call2 0x51b

0x4bf: Pop(0)
0x4c0: PushEmpty(bool, object)
0x4c1: Stack[-5] = Stack[-1]
0x4c2: Call2 0x532

0x4c3: Pop(2)
0x4c4: EventEnable(0)
0x4c5: PushEmpty(object)
0x4c6: Stack[-4] = Stack[-1]
0x4c7: Call2 0x6ab

0x4c8: Pop(1)
0x4c9: PushEmpty(string)
0x4ca: Stack[-1] = "Neutral" // @poff=89
0x4cb: Call2 0x61f

0x4cc: Pop(1)
0x4cd: PushEmpty()
0x4ce: Call2 0x465

0x4cf: Pop(0)
0x4d0: PushEmpty()
0x4d1: Call2 0x45c

0x4d2: Pop(0)
0x4d3: Return(); Pop(2)

0x4d4: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x4d5: @ WaitForAnimEnd()
0x4d6: Pop(0)
0x4d7: PushEmpty(bool)
0x4d8: Call2 0x53b

0x4d9: Pop(0)
0x4da: Pop(1); Push((bool) Stack[-1] == 0)
0x4db: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4dc: Return(); Pop(12)

0x4dd: PushEmpty(int)
0x4de: Call2 0x66d

0x4df: Stack[-1] = Stack[-7]
0x4e0: Pop(1)
0x4e1: Stack[-5] = (int) 0
0x4e2: PushEmpty(bool)
0x4e3: Stack[-1] = (bool) 0
0x4e4: Push((int) 5)
0x4e5: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e7: PushEmpty(bool)
0x4e8: Call2 0x53b

0x4e9: Pop(0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4eb: Stack[-1] = (bool) 1
0x4ec: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x4ed: Pop(0); Push((bool) Stack[-6] == 0)
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4ef: Push((int) 3)
0x4f0: @ Sleep(Stack[-1], Stack[-5])
0x4f1: Pop(1)
0x4f2: Pop(0); Push((bool) Stack[-4] == 0)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f4: GOTO 0x516

0x4f5: GOTO 0x50b

0x4f6: @ irand(Stack[-3], Stack[-6])
0x4f7: Pop(0)
0x4f8: Push((int) 5)
0x4f9: @ irand(Stack[-3], Stack[-1])
0x4fa: Pop(1)
0x4fb: Push((int) 0)
0x4fc: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fe: Stack[-3] = (int) 0
0x4ff: Push("all") // @poff=138
0x500: PushEmpty(string, int)
0x501: Stack[-6] = Stack[-1]
0x502: Call2 0x666

0x503: Pop(1)
0x504: @ PlayAnimation(Stack[-2], Stack[-1])
0x505: Pop(2)
0x506: @ WaitForAnimEnd(Stack[-1])
0x507: Pop(0)
0x508: Pop(0); Push((bool) Stack[-1] == 0)
0x509: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x50a: GOTO 0x516

0x50b: PushEmpty(bool)
0x50c: Call2 0x519

0x50d: Pop(0)
0x50e: Pop(1); Push((bool) Stack[-1] == 0)
0x50f: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x510: GOTO 0x516

0x511: @ ResetAAS()
0x512: Pop(0)
0x513: Push((int) 1)
0x514: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x515: GOTO 0x4e2

0x516: @ ResetAAS()
0x517: Pop(0)
0x518: Return(); Pop(12)

0x519: Stack[-1] = (bool) 1
0x51a: Return(); Pop(0)

0x51b: @ StopAnimation()
0x51c: Pop(0)
0x51d: @ StopGroup0()
0x51e: Pop(0)
0x51f: Return(); Pop(0)

0x520: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x521: @ GetPosition(Stack[-3])
0x522: Pop(0)
0x523: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x524: Pop(0)
0x525: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x526: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x527: Return(); Pop(6)

0x528: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x529: @ GetPosition(Stack[-3])
0x52a: Pop(0)
0x52b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x52c: Push(CvectorIndex(Stack[-2], 0))
0x52d: Push(CvectorIndex(Stack[-3], 2))
0x52e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x52f: Pop(2)
0x530: Stack[-1] = Stack[-8]
0x531: Return(); Pop(6)

0x532: PushEmpty(cvector, cvector)
0x533: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x534: Pop(0)
0x535: PushEmpty(bool, cvector)
0x536: Stack[-3] = Stack[-1]
0x537: Call2 0x528

0x538: Stack[-2] = Stack[-6]
0x539: Pop(2)
0x53a: Return(); Pop(2)

0x53b: PushEmpty(bool, bool)
0x53c: @ IsLoaded(Stack[-1])
0x53d: Pop(0)
0x53e: Stack[-1] = Stack[-3]
0x53f: Return(); Pop(2)

0x540: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x541: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x542: Pop(0)
0x543: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x544: Pop(0)
0x545: Push(CvectorIndex(Stack[-8], 1))
0x546: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x547: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x548: @ GetPosition(Stack[-7])
0x549: Pop(0)
0x54a: @ GetEyesHeight(Stack[-9])
0x54b: Pop(0)
0x54c: Push(CvectorIndex(Stack[-7], 1))
0x54d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x54e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x54f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x550: Push(CvectorIndex(Stack[-6], 1))
0x551: Stack[-1] = (int) 0
0x552: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x553: Pop(0); Push(Stack[-6] | Stack[-6]);
0x554: Pop(1); Push(Sqrt(Stack[-1]))
0x555: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x556: Stack[-5] = -Stack[-6]; Pop(0);
0x557: Pop(0); Push(Stack[-6] * Stack[-19]);
0x558: PushEmpty(cvector, cvector)
0x559: Push([0.0, 1.0, 0.0])
0x55a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x55b: Call2 0x648

0x55c: Pop(1)
0x55d: Push((int) 25)
0x55e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x55f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x560: Push([0.0, 10.0, 0.0])
0x561: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x562: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x563: @ IsOverrideActive(Stack[-2])
0x564: Pop(0)
0x565: Push(Stack[-2])
0x566: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x567: Stack[-21] = (bool) 0
0x568: Return(); Pop(18)

0x569: @ StopWorld()
0x56a: Pop(0)
0x56b: @ CameraTransit(Stack[-3], Stack[-5])
0x56c: Pop(0)
0x56d: Push(CvectorIndex(Stack[-4], 0))
0x56e: Push(CvectorIndex(Stack[-5], 2))
0x56f: @ Rotate(Stack[-2], Stack[-1])
0x570: Pop(2)
0x571: PushEmpty(bool)
0x572: Call2 0x686

0x573: Pop(0)
0x574: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x575: GOTO 0x57e

0x576: Push("head") // @poff=196
0x577: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x578: Pop(1)
0x579: Push(Stack[-1])
0x57a: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x57b: Push("head") // @poff=196
0x57c: @ LookAsyncCamera(Stack[-1])
0x57d: Pop(1)
0x57e: @ CameraWaitForPlayFinish()
0x57f: Pop(0)
0x580: @ ResumeWorld()
0x581: Pop(0)
0x582: Stack[-21] = (bool) 1
0x583: Return(); Pop(18)

0x584: PushEmpty(bool, bool)
0x585: @ CameraSwitchToNormal()
0x586: Pop(0)
0x587: PushEmpty(bool)
0x588: Call2 0x686

0x589: Pop(0)
0x58a: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58b: GOTO 0x594

0x58c: Push("head") // @poff=196
0x58d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x58e: Pop(1)
0x58f: Push(Stack[-1])
0x590: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x591: Push("head") // @poff=196
0x592: @ UnlookAsync(Stack[-1])
0x593: Pop(1)
0x594: Return(); Pop(2)

0x595: PushEmpty(int, int, int, int)
0x596: Push("voice_common") // @poff=206
0x597: @ GetVariable(Stack[-1], Stack[-3])
0x598: Pop(1)
0x599: Push(Stack[-2])
0x59a: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x59b: PushEmpty(bool, object)
0x59c: Stack[-7] = Stack[-1]
0x59d: Call2 0x5cf

0x59e: Pop(1)
0x59f: Pop(1); Push((bool) Stack[-1] == 0)
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a1: PushEmpty(bool, object)
0x5a2: Stack[-7] = Stack[-1]
0x5a3: Call2 0x5f4

0x5a4: Pop(1)
0x5a5: Pop(1); Push((bool) Stack[-1] == 0)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a7: Stack[-6] = (bool) 0
0x5a8: Return(); Pop(4)

0x5a9: Push((int) 2)
0x5aa: @ irand(Stack[-2], Stack[-1])
0x5ab: Pop(1)
0x5ac: Push(Stack[-1])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5ae: Push("voice_common") // @poff=206
0x5af: Push((int) 1)
0x5b0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5b1: Push((int) 3)
0x5b2: Pop(2); Push(Stack[-2] % Stack[-1]);
0x5b3: @ SetVariable(Stack[-2], Stack[-1])
0x5b4: Pop(2)
0x5b5: GOTO 0x5ba

0x5b6: Push("voice_common") // @poff=206
0x5b7: Push((int) 0)
0x5b8: @ SetVariable(Stack[-2], Stack[-1])
0x5b9: Pop(2)
0x5ba: GOTO 0x5cd

0x5bb: PushEmpty(bool, object)
0x5bc: Stack[-7] = Stack[-1]
0x5bd: Call2 0x5f4

0x5be: Pop(1)
0x5bf: Pop(1); Push((bool) Stack[-1] == 0)
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c1: PushEmpty(bool, object)
0x5c2: Stack[-7] = Stack[-1]
0x5c3: Call2 0x5cf

0x5c4: Pop(1)
0x5c5: Pop(1); Push((bool) Stack[-1] == 0)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c7: Stack[-6] = (bool) 0
0x5c8: Return(); Pop(4)

0x5c9: Push("voice_common") // @poff=206
0x5ca: Push((int) 1)
0x5cb: @ SetVariable(Stack[-2], Stack[-1])
0x5cc: Pop(2)
0x5cd: Stack[-6] = (bool) 1
0x5ce: Return(); Pop(4)

0x5cf: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5d0: Stack[-5] = "c" // @poff=232
0x5d1: Stack[-4] = (int) 0
0x5d2: Push((int) 1)
0x5d3: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5d4: Push((int) 1)
0x5d5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5d6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5d7: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x5d8: Pop(1)
0x5d9: Pop(0); Push((bool) Stack[-3] == 0)
0x5da: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5db: GOTO 0x5df

0x5dc: Push((int) 1)
0x5dd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5de: GOTO 0x5d2

0x5df: Pop(0); Push((bool) Stack[-4] == 0)
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e1: Stack[-12] = (bool) 0
0x5e2: Return(); Pop(10)

0x5e3: Stack[-2] = (int) 0
0x5e4: Push((int) 1)
0x5e5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e7: @ irand(Stack[-2], Stack[-4])
0x5e8: Pop(0)
0x5e9: Push((int) 1)
0x5ea: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5eb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5ec: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x5ed: Pop(1)
0x5ee: PushEmpty(bool, string)
0x5ef: Stack[-3] = Stack[-1]
0x5f0: Call2 0x62c

0x5f1: Stack[-2] = Stack[-14]
0x5f2: Pop(2)
0x5f3: Return(); Pop(10)

0x5f4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5f5: Push("d") // @poff=202
0x5f6: PushEmpty(int)
0x5f7: Call2 0x657

0x5f8: Pop(0)
0x5f9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5fa: Push("m") // @poff=260
0x5fb: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5fc: Stack[-4] = (int) 0
0x5fd: Push((int) 1)
0x5fe: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x5ff: Push((int) 1)
0x600: Pop(1); Push(Stack[-5] + Stack[-1]);
0x601: Pop(1); Push(Stack[-6] + Stack[-1]);
0x602: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x603: Pop(1)
0x604: Pop(0); Push((bool) Stack[-3] == 0)
0x605: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x606: GOTO 0x60a

0x607: Push((int) 1)
0x608: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x609: GOTO 0x5fd

0x60a: Pop(0); Push((bool) Stack[-4] == 0)
0x60b: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x60c: Stack[-12] = (bool) 0
0x60d: Return(); Pop(10)

0x60e: Stack[-2] = (int) 0
0x60f: Push((int) 1)
0x610: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x611: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x612: @ irand(Stack[-2], Stack[-4])
0x613: Pop(0)
0x614: Push((int) 1)
0x615: Pop(1); Push(Stack[-3] + Stack[-1]);
0x616: Pop(1); Push(Stack[-6] + Stack[-1]);
0x617: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x618: Pop(1)
0x619: PushEmpty(bool, string)
0x61a: Stack[-3] = Stack[-1]
0x61b: Call2 0x62c

0x61c: Stack[-2] = Stack[-14]
0x61d: Pop(2)
0x61e: Return(); Pop(10)

0x61f: PushEmpty(float, float, float, float)
0x620: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x621: Pop(0)
0x622: Push((bool) 0)
0x623: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x624: Pop(1)
0x625: Return(); Pop(4)

0x626: PushEmpty(float, float, float, float)
0x627: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x628: Pop(0)
0x629: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x62a: Pop(0)
0x62b: Return(); Pop(4)

0x62c: PushEmpty(bool, bool)
0x62d: PushEmpty(bool)
0x62e: Call2 0x686

0x62f: Pop(0)
0x630: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x631: @ lshHasSpeech(Stack[-1], Stack[-3])
0x632: Pop(0)
0x633: Push(Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x635: @ lshPlaySpeech(Stack[-3])
0x636: Pop(0)
0x637: Stack[-4] = (bool) 1
0x638: Return(); Pop(2)

0x639: Stack[-4] = (bool) 0
0x63a: Return(); Pop(2)

0x63b: PushEmpty(bool)
0x63c: Call2 0x686

0x63d: Pop(0)
0x63e: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63f: @ lshStopSpeech()
0x640: Pop(0)
0x641: Return(); Pop(0)

0x642: PushEmpty(object, object)
0x643: @ self(Stack[-1])
0x644: Pop(0)
0x645: Stack[-1] = Stack[-3]
0x646: Return(); Pop(2)

0x647: Stack[-1] = 0
0x648: PushEmpty(float, float)
0x649: Pop(0); Push(Stack[-3] | Stack[-3]);
0x64a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x64b: Push((float)9.999999974752427e-07)
0x64c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x64d: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64e: Stack[-4] = [0.0, 0.0, 0.0]
0x64f: Return(); Pop(2)

0x650: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x651: Return(); Pop(2)

0x652: PushEmpty(int, int)
0x653: @ GetVariable(Stack[-3], Stack[-1])
0x654: Pop(0)
0x655: Stack[-1] = Stack[-4]
0x656: Return(); Pop(2)

0x657: PushEmpty(float, float)
0x658: @ GetGameTime(Stack[-1])
0x659: Pop(0)
0x65a: Push((int) 1)
0x65b: PushEmpty(int)
0x65c: Push((int) 24)
0x65d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x65e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x65f: Return(); Pop(2)

0x660: PushEmpty()
0x661: PushEmpty(int)
0x662: Call2 0x657

0x663: Pop(0)
0x664: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x665: Return(); Pop(0)

0x666: PushEmpty(string, string)
0x667: Stack[-1] = "idle" // @poff=146
0x668: Push(Stack[-3])
0x669: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x66a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x66b: Stack[-1] = Stack[-4]
0x66c: Return(); Pop(2)

0x66d: PushEmpty(int, bool, int, bool)
0x66e: Stack[-2] = (int) 0
0x66f: Push("all") // @poff=138
0x670: PushEmpty(string, int)
0x671: Stack[-5] = Stack[-1]
0x672: Call2 0x666

0x673: Pop(1)
0x674: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x675: Pop(2)
0x676: Pop(0); Push((bool) Stack[-1] == 0)
0x677: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x678: GOTO 0x67c

0x679: Push((int) 1)
0x67a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x67b: GOTO 0x66f

0x67c: Stack[-2] = Stack[-5]
0x67d: Return(); Pop(4)

0x67e: Stack[-1] = (int) 515550
0x67f: Return(); Pop(0)

0x680: Stack[-1] = (int) 502875
0x681: Return(); Pop(0)

0x682: Stack[-1] = "ui/NPC_Petr.png" // @poff=264
0x683: Return(); Pop(0)

0x684: Stack[-1] = "ui/NPC_Petr_b.png" // @poff=296
0x685: Return(); Pop(0)

0x686: Stack[-1] = (bool) 1
0x687: Return(); Pop(0)

0x688: PushEmpty()
0x689: Push("oob2Petr1") // @poff=332
0x68a: Push((int) 1)
0x68b: @ SetVariable(Stack[-2], Stack[-1])
0x68c: Pop(2)
0x68d: Return(); Pop(0)

0x68e: PushEmpty()
0x68f: PushEmpty(int, string)
0x690: Stack[-1] = "oob2Petr1" // @poff=332
0x691: Call2 0x652

0x692: Pop(1)
0x693: Push((int) 0)
0x694: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x695: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x696: Stack[-2] = (bool) 1
0x697: Return(); Pop(0)

0x698: Stack[-2] = (bool) 0
0x699: Return(); Pop(0)

0x69a: PushEmpty(int, int)
0x69b: Push("branch") // @poff=352
0x69c: @ GetVariable(Stack[-1], Stack[-2])
0x69d: Pop(1)
0x69e: Push((int) 0)
0x69f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a1: Stack[-3] = (int) 1
0x6a2: Return(); Pop(2)

0x6a3: GOTO 0x6a9

0x6a4: Push((int) 1)
0x6a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a6: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a7: Stack[-3] = (int) 2
0x6a8: Return(); Pop(2)

0x6a9: Stack[-3] = (int) 3
0x6aa: Return(); Pop(2)

0x6ab: PushEmpty(int, int, int, int)
0x6ac: Push("mt_petr") // @poff=366
0x6ad: @ GetVariable(Stack[-1], Stack[-3])
0x6ae: Pop(1)
0x6af: Pop(0); Push((bool) Stack[-2] == 0)
0x6b0: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b1: PushEmpty(int, object)
0x6b2: Stack[-7] = Stack[-1]
0x6b3: Push(-2, 1); TaskCall(3)
0x6b4: Call2 0x110

0x6b5: Pop(-2, 1); TaskReturn
0x6b6: Pop(2)
0x6b7: Push("mt_petr") // @poff=366
0x6b8: Push((int) 1)
0x6b9: @ SetVariable(Stack[-2], Stack[-1])
0x6ba: Pop(2)
0x6bb: PushEmpty(bool, int)
0x6bc: Stack[-1] = (int) 2
0x6bd: Call2 0x660

0x6be: Pop(1)
0x6bf: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c0: PushEmpty(int, object)
0x6c1: Stack[-7] = Stack[-1]
0x6c2: Push(-2, 1); TaskCall(5)
0x6c3: Call2 0x1f2

0x6c4: Pop(-2, 1); TaskReturn
0x6c5: Pop(2)
0x6c6: Return(); Pop(4)

0x6c7: Push("d12_petr") // @poff=382
0x6c8: @ GetVariable(Stack[-1], Stack[-2])
0x6c9: Pop(1)
0x6ca: PushEmpty(bool)
0x6cb: Stack[-1] = (bool) 0
0x6cc: PushEmpty(bool, int)
0x6cd: Stack[-1] = (int) 12
0x6ce: Call2 0x660

0x6cf: Pop(1)
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d1: Push(Stack[-2])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d3: Stack[-1] = (bool) 1
0x6d4: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6d5: PushEmpty(int, object)
0x6d6: Stack[-7] = Stack[-1]
0x6d7: Push(-2, 1); TaskCall(1)
0x6d8: Call2 0xd

0x6d9: Pop(-2, 1); TaskReturn
0x6da: Pop(2)
0x6db: Push("d12_petr") // @poff=382
0x6dc: Push((int) 1)
0x6dd: @ SetVariable(Stack[-2], Stack[-1])
0x6de: Pop(2)
0x6df: Return(); Pop(4)

0x6e0: PushEmpty(int, object)
0x6e1: Stack[-7] = Stack[-1]
0x6e2: Push(-2, 1); TaskCall(7)
0x6e3: Call2 0x34f

0x6e4: Pop(-2, 1); TaskReturn
0x6e5: Pop(2)
0x6e6: Return(); Pop(4)

