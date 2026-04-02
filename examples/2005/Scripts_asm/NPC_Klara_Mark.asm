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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004d00610072006b002e0070006e0067000000750069002f004e00500043005f004d00610072006b005f0062002e0070006e00670000006200720061006e006300680000006d0074005f006d00610072006b000000
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

RunOp = 0x2b3
RunTask = 7

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x18b Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x289 Vars = (int, int)
	GTASK_7 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x302 Vars = (int)
		EVENT_6 Op = 0x328 Vars = ()
		EVENT_5 Op = 0x337 Vars = ()
		EVENT_45 Op = 0x344 Vars = (bool)
		EVENT_0 Op = 0x350 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x3d4

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
0x11: Call2 0x4db

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x42e

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x3d9

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x514

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x512

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x516

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x518

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x51c

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
0x55: Call2 0x41d

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
0x68: Push((int) 525504)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 525505)
0x6e: Push((int) 30769)
0x6f: Push((int) 26861)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x62

0x75: PushEmpty(bool)
0x76: Call2 0x51a

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x4b8

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
0x95: Call2 0x51a

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
0xa5: Call2 0x4bf

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x4d4

0xae: Pop(0)
0xaf: Push((int) 26860)
0xb0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb2: PushEmpty(string)
0xb3: Stack[-1] = "Neutral" // @poff=89
0xb4: Call2 0x93

0xb5: Pop(1)
0xb6: Push((int) 525504)
0xb7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb8: Pop(1)
0xb9: @@@ ClearReplies(); Obj=0 // @poff=116
0xba: Pop(0)
0xbb: Push((int) 525505)
0xbc: Push((int) 30769)
0xbd: Push((int) 26861)
0xbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Push((int) 30769)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral" // @poff=89
0xc6: Call2 0x93

0xc7: Pop(1)
0xc8: Push((int) 529315)
0xc9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xca: Pop(1)
0xcb: @@@ ClearReplies(); Obj=0 // @poff=116
0xcc: Pop(0)
0xcd: Push((int) 529316)
0xce: Push((int) -1)
0xcf: Push((int) 30770)
0xd0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd1: Pop(3)
0xd2: Push((int) 529317)
0xd3: Push((int) -1)
0xd4: Push((int) 30771)
0xd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd9: PushEmpty(bool)
0xda: Call2 0x51a

0xdb: Pop(0)
0xdc: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdd: @ lshStopAnimation()
0xde: Pop(0)
0xdf: GOTO 0xe2

0xe0: @ StopAnimation()
0xe1: Pop(0)
0xe2: Return(); Pop(0)

0xe3: GOTO 0xaa

0xe4: Return(); Pop(0)

0xe5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe7: PushEmpty(bool, object)
0xe8: PushEmpty(object)
0xe9: Call2 0x4db

0xea: Stack[-1] = Stack[-2]
0xeb: Pop(1)
0xec: Call2 0x42e

0xed: Pop(2)
0xee: PushEmpty(bool, object, float)
0xef: Stack[-12] = Stack[-2]
0xf0: Stack[-1] = (float) 70.0
0xf1: Call2 0x3d9

0xf2: Pop(2)
0xf3: Pop(1); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf5: Stack[-10] = (int) -2
0xf6: Return(); Pop(8)

0xf7: @ CreateDialog(Stack[-4])
0xf8: Pop(0)
0xf9: PushEmpty(int)
0xfa: Call2 0x514

0xfb: Pop(0)
0xfc: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0xfd: Pop(1)
0xfe: PushEmpty(int)
0xff: Call2 0x512

0x100: Pop(0)
0x101: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x102: Pop(1)
0x103: PushEmpty(string)
0x104: Call2 0x516

0x105: Pop(0)
0x106: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x107: Pop(1)
0x108: PushEmpty(string)
0x109: Call2 0x518

0x10a: Pop(0)
0x10b: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x10c: Pop(1)
0x10d: PushEmpty(int)
0x10e: Call2 0x51c

0x10f: Pop(0)
0x110: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x111: Pop(1)
0x112: Stack[-2] = (int) -1
0x113: @ IsOverrideActive(Stack[-3])
0x114: Pop(0)
0x115: Push(Stack[-3])
0x116: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x117: Stack[-10] = (int) -2
0x118: Return(); Pop(8)

0x119: @ DoDialog(Stack[-4])
0x11a: Pop(0)
0x11b: PushEmpty(object, object)
0x11c: Stack[-11] = Stack[-2]
0x11d: Stack[-6] = Stack[-1]
0x11e: Push(-2, 4); TaskCall(4)
0x11f: Call2 0x136

0x120: Pop(-2, 4); TaskReturn
0x121: Pop(2)
0x122: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x123: Pop(0)
0x124: Pop(0); Push((bool) Stack[-1] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x126: @ sync()
0x127: Pop(0)
0x128: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x129: Pop(0)
0x12a: GOTO 0x124

0x12b: PushEmpty(object)
0x12c: Stack[-10] = Stack[-1]
0x12d: Call2 0x41d

0x12e: Pop(1)
0x12f: @ StopDialog(Stack[-4])
0x130: Pop(0)
0x131: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x132: Pop(0)
0x133: Stack[-2] = Stack[-10]
0x134: Return(); Pop(8)

0x135: Stack[-4] = 0
0x136: PushEmpty()
0x137: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x138: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x139: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x13a: Push((int) 1)
0x13b: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Neutral" // @poff=89
0x13e: Call2 0x175

0x13f: Pop(1)
0x140: Push((int) 535231)
0x141: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x142: Pop(1)
0x143: @@@ ClearReplies(); Obj=0 // @poff=116
0x144: Pop(0)
0x145: Push((int) 535232)
0x146: Push((int) 36953)
0x147: Push((int) 36907)
0x148: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x149: Pop(3)
0x14a: Push((int) 535233)
0x14b: Push((int) -1)
0x14c: Push((int) 36908)
0x14d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14e: Pop(3)
0x14f: Push((int) 535280)
0x150: Push((int) -1)
0x151: Push((int) 36956)
0x152: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x153: Pop(3)
0x154: GOTO 0x157

0x155: Return(); Pop(0)

0x156: GOTO 0x13a

0x157: PushEmpty(bool)
0x158: Call2 0x51a

0x159: Pop(0)
0x15a: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x15b: @ lshWaitForAnimEnd()
0x15c: Pop(0)
0x15d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: GOTO 0x165

0x160: PushEmpty(string)
0x161: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x162: Call2 0x4b8

0x163: Pop(1)
0x164: GOTO 0x15b

0x165: GOTO 0x174

0x166: Push("all") // @poff=138
0x167: Push("idle") // @poff=146
0x168: @ PlayAnimation(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: @ WaitForAnimEnd()
0x16b: Pop(0)
0x16c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: GOTO 0x174

0x16f: Push("all") // @poff=138
0x170: Push("idle") // @poff=146
0x171: @ PlayAnimation(Stack[-2], Stack[-1])
0x172: Pop(2)
0x173: GOTO 0x16a

0x174: Return(); Pop(0)

0x175: PushEmpty()
0x176: PushEmpty(bool)
0x177: Call2 0x51a

0x178: Pop(0)
0x179: Pop(1); Push((bool) Stack[-1] == 0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: Return(); Pop(0)

0x17c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: Return(); Pop(0)

0x17f: PushEmpty(string, bool)
0x180: Stack[-3] = Stack[-2]
0x181: Push("") // @poff=102
0x182: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x184: Stack[-1] = (bool) 0
0x185: GOTO 0x187

0x186: Stack[-1] = (bool) 1
0x187: Call2 0x4bf

0x188: Pop(2)
0x189: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x18a: Return(); Pop(0)

0x18b: PushEmpty()
0x18c: Push((int) 1)
0x18d: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x18e: PushEmpty()
0x18f: Call2 0x4d4

0x190: Pop(0)
0x191: Push((int) 36906)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral" // @poff=89
0x196: Call2 0x175

0x197: Pop(1)
0x198: Push((int) 535231)
0x199: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19a: Pop(1)
0x19b: @@@ ClearReplies(); Obj=0 // @poff=116
0x19c: Pop(0)
0x19d: Push((int) 535232)
0x19e: Push((int) 36953)
0x19f: Push((int) 36907)
0x1a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a1: Pop(3)
0x1a2: Push((int) 535233)
0x1a3: Push((int) -1)
0x1a4: Push((int) 36908)
0x1a5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a6: Pop(3)
0x1a7: Push((int) 535280)
0x1a8: Push((int) -1)
0x1a9: Push((int) 36956)
0x1aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ab: Pop(3)
0x1ac: Return(); Pop(0)

0x1ad: Push((int) 36953)
0x1ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b0: PushEmpty(string)
0x1b1: Stack[-1] = "Neutral" // @poff=89
0x1b2: Call2 0x175

0x1b3: Pop(1)
0x1b4: Push((int) 535277)
0x1b5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b6: Pop(1)
0x1b7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b8: Pop(0)
0x1b9: Push((int) 535278)
0x1ba: Push((int) 36957)
0x1bb: Push((int) 36954)
0x1bc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bd: Pop(3)
0x1be: Push((int) 535279)
0x1bf: Push((int) 36957)
0x1c0: Push((int) 36955)
0x1c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Push((int) 36957)
0x1c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1c7: PushEmpty(string)
0x1c8: Stack[-1] = "Neutral" // @poff=89
0x1c9: Call2 0x175

0x1ca: Pop(1)
0x1cb: Push((int) 535281)
0x1cc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cd: Pop(1)
0x1ce: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cf: Pop(0)
0x1d0: Push((int) 535282)
0x1d1: Push((int) -1)
0x1d2: Push((int) 36958)
0x1d3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d4: Pop(3)
0x1d5: Push((int) 535283)
0x1d6: Push((int) -1)
0x1d7: Push((int) 36959)
0x1d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d9: Pop(3)
0x1da: Return(); Pop(0)

0x1db: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1dc: PushEmpty(bool)
0x1dd: Call2 0x51a

0x1de: Pop(0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e0: @ lshStopAnimation()
0x1e1: Pop(0)
0x1e2: GOTO 0x1e5

0x1e3: @ StopAnimation()
0x1e4: Pop(0)
0x1e5: Return(); Pop(0)

0x1e6: GOTO 0x18c

0x1e7: Return(); Pop(0)

0x1e8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1e9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1ea: PushEmpty(bool, object)
0x1eb: PushEmpty(object)
0x1ec: Call2 0x4db

0x1ed: Stack[-1] = Stack[-2]
0x1ee: Pop(1)
0x1ef: Call2 0x42e

0x1f0: Pop(2)
0x1f1: PushEmpty(bool, object, float)
0x1f2: Stack[-12] = Stack[-2]
0x1f3: Stack[-1] = (float) 70.0
0x1f4: Call2 0x3d9

0x1f5: Pop(2)
0x1f6: Pop(1); Push((bool) Stack[-1] == 0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f8: Stack[-10] = (int) -2
0x1f9: Return(); Pop(8)

0x1fa: @ CreateDialog(Stack[-4])
0x1fb: Pop(0)
0x1fc: PushEmpty(int)
0x1fd: Call2 0x514

0x1fe: Pop(0)
0x1ff: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x200: Pop(1)
0x201: PushEmpty(int)
0x202: Call2 0x512

0x203: Pop(0)
0x204: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x205: Pop(1)
0x206: PushEmpty(string)
0x207: Call2 0x516

0x208: Pop(0)
0x209: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x20a: Pop(1)
0x20b: PushEmpty(string)
0x20c: Call2 0x518

0x20d: Pop(0)
0x20e: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20f: Pop(1)
0x210: PushEmpty(int)
0x211: Call2 0x51c

0x212: Pop(0)
0x213: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x214: Pop(1)
0x215: Stack[-2] = (int) -1
0x216: @ IsOverrideActive(Stack[-3])
0x217: Pop(0)
0x218: Push(Stack[-3])
0x219: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21a: Stack[-10] = (int) -2
0x21b: Return(); Pop(8)

0x21c: @ DoDialog(Stack[-4])
0x21d: Pop(0)
0x21e: PushEmpty(object, object)
0x21f: Stack[-11] = Stack[-2]
0x220: Stack[-6] = Stack[-1]
0x221: Push(-2, 4); TaskCall(6)
0x222: Call2 0x239

0x223: Pop(-2, 4); TaskReturn
0x224: Pop(2)
0x225: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x226: Pop(0)
0x227: Pop(0); Push((bool) Stack[-1] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x229: @ sync()
0x22a: Pop(0)
0x22b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x22c: Pop(0)
0x22d: GOTO 0x227

0x22e: PushEmpty(object)
0x22f: Stack[-10] = Stack[-1]
0x230: Call2 0x41d

0x231: Pop(1)
0x232: @ StopDialog(Stack[-4])
0x233: Pop(0)
0x234: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x235: Pop(0)
0x236: Stack[-2] = Stack[-10]
0x237: Return(); Pop(8)

0x238: Stack[-4] = 0
0x239: PushEmpty()
0x23a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x23b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x23c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x23d: Push((int) 1)
0x23e: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x23f: PushEmpty(string)
0x240: Stack[-1] = "Neutral" // @poff=89
0x241: Call2 0x273

0x242: Pop(1)
0x243: Push((int) 540545)
0x244: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x245: Pop(1)
0x246: @@@ ClearReplies(); Obj=0 // @poff=116
0x247: Pop(0)
0x248: Push((int) 540546)
0x249: Push((int) -1)
0x24a: Push((int) 42555)
0x24b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24c: Pop(3)
0x24d: Push((int) 540798)
0x24e: Push((int) -1)
0x24f: Push((int) 42847)
0x250: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x251: Pop(3)
0x252: GOTO 0x255

0x253: Return(); Pop(0)

0x254: GOTO 0x23d

0x255: PushEmpty(bool)
0x256: Call2 0x51a

0x257: Pop(0)
0x258: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x259: @ lshWaitForAnimEnd()
0x25a: Pop(0)
0x25b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: GOTO 0x263

0x25e: PushEmpty(string)
0x25f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x260: Call2 0x4b8

0x261: Pop(1)
0x262: GOTO 0x259

0x263: GOTO 0x272

0x264: Push("all") // @poff=138
0x265: Push("idle") // @poff=146
0x266: @ PlayAnimation(Stack[-2], Stack[-1])
0x267: Pop(2)
0x268: @ WaitForAnimEnd()
0x269: Pop(0)
0x26a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x272

0x26d: Push("all") // @poff=138
0x26e: Push("idle") // @poff=146
0x26f: @ PlayAnimation(Stack[-2], Stack[-1])
0x270: Pop(2)
0x271: GOTO 0x268

0x272: Return(); Pop(0)

0x273: PushEmpty()
0x274: PushEmpty(bool)
0x275: Call2 0x51a

0x276: Pop(0)
0x277: Pop(1); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: Return(); Pop(0)

0x27a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: Return(); Pop(0)

0x27d: PushEmpty(string, bool)
0x27e: Stack[-3] = Stack[-2]
0x27f: Push("") // @poff=102
0x280: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x282: Stack[-1] = (bool) 0
0x283: GOTO 0x285

0x284: Stack[-1] = (bool) 1
0x285: Call2 0x4bf

0x286: Pop(2)
0x287: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x288: Return(); Pop(0)

0x289: PushEmpty()
0x28a: Push((int) 1)
0x28b: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x28c: PushEmpty()
0x28d: Call2 0x4d4

0x28e: Pop(0)
0x28f: Push((int) 42554)
0x290: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x292: PushEmpty(string)
0x293: Stack[-1] = "Neutral" // @poff=89
0x294: Call2 0x273

0x295: Pop(1)
0x296: Push((int) 540545)
0x297: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x298: Pop(1)
0x299: @@@ ClearReplies(); Obj=0 // @poff=116
0x29a: Pop(0)
0x29b: Push((int) 540546)
0x29c: Push((int) -1)
0x29d: Push((int) 42555)
0x29e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x29f: Pop(3)
0x2a0: Push((int) 540798)
0x2a1: Push((int) -1)
0x2a2: Push((int) 42847)
0x2a3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a4: Pop(3)
0x2a5: Return(); Pop(0)

0x2a6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2a7: PushEmpty(bool)
0x2a8: Call2 0x51a

0x2a9: Pop(0)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ab: @ lshStopAnimation()
0x2ac: Pop(0)
0x2ad: GOTO 0x2b0

0x2ae: @ StopAnimation()
0x2af: Pop(0)
0x2b0: Return(); Pop(0)

0x2b1: GOTO 0x28a

0x2b2: Return(); Pop(0)

0x2b3: PushEmpty()
0x2b4: Call2 0x2b7

0x2b5: Pop(0)
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty(bool)
0x2b8: Call2 0x3d4

0x2b9: Pop(0)
0x2ba: Pop(1); Push((bool) Stack[-1] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bc: PushEmpty()
0x2bd: Push(-0, 0); TaskCall(0)
0x2be: Call2 0x0

0x2bf: Pop(-0, 0); TaskReturn
0x2c0: Pop(0)
0x2c1: PushEmpty()
0x2c2: Call2 0x337

0x2c3: Pop(0)
0x2c4: @ GetDirection(Stack[-0]T)
0x2c5: Pop(0)
0x2c6: PushEmpty()
0x2c7: Call2 0x36d

0x2c8: Pop(0)
0x2c9: GOTO 0x2c6

0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(object, object)
0x2cc: Push("player") // @poff=156
0x2cd: @ FindActor(Stack[-2], Stack[-1])
0x2ce: Pop(1)
0x2cf: Pop(0); Push((bool) Stack[-1] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: Stack[-3] = (bool) 0
0x2d2: Return(); Pop(2)

0x2d3: PushEmpty(bool, object)
0x2d4: Stack[-3] = Stack[-1]
0x2d5: Call2 0x3cb

0x2d6: Stack[-2] = Stack[-5]
0x2d7: Pop(2)
0x2d8: Return(); Pop(2)

0x2d9: Stack[-1] = 0
0x2da: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x2db: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x2dc: @ RotateAsync(Stack[-2], Stack[-1])
0x2dd: Pop(2)
0x2de: Return(); Pop(0)

0x2df: PushEmpty(object, bool, object, bool)
0x2e0: Push("player") // @poff=156
0x2e1: @ FindActor(Stack[-3], Stack[-1])
0x2e2: Pop(1)
0x2e3: Pop(0); Push((bool) Stack[-2] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e5: Stack[-5] = (bool) 0
0x2e6: Return(); Pop(4)

0x2e7: PushEmpty(float, object)
0x2e8: Stack[-4] = Stack[-1]
0x2e9: Call2 0x3b9

0x2ea: Pop(1)
0x2eb: Push((float)90000.0)
0x2ec: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ee: Stack[-5] = (bool) 0
0x2ef: Return(); Pop(4)

0x2f0: @ CanSee(Stack[-1], Stack[-2])
0x2f1: Pop(0)
0x2f2: Stack[-1] = Stack[-5]
0x2f3: Return(); Pop(4)

0x2f4: Stack[-2] = 0
0x2f5: PushEmpty(float, float)
0x2f6: Push((int) 8)
0x2f7: Push((int) 16)
0x2f8: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(2)
0x2fa: Push((int) 10)
0x2fb: @ SetTimer(Stack[-1], Stack[-2])
0x2fc: Pop(1)
0x2fd: Return(); Pop(2)

0x2fe: Push((int) 10)
0x2ff: @ KillTimer(Stack[-1])
0x300: Pop(1)
0x301: Return(); Pop(0)

0x302: PushEmpty()
0x303: Push((int) 10)
0x304: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x306: PushEmpty()
0x307: Call2 0x2fe

0x308: Pop(0)
0x309: PushEmpty(bool)
0x30a: Stack[-1] = (bool) 0
0x30b: PushEmpty(bool)
0x30c: Call2 0x3d4

0x30d: Pop(0)
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: PushEmpty(bool)
0x310: Call2 0x2df

0x311: Pop(0)
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: Stack[-1] = (bool) 1
0x314: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x315: PushEmpty(bool)
0x316: Call2 0x2cb

0x317: Pop(0)
0x318: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x319: PushEmpty(bool, object)
0x31a: PushEmpty(object)
0x31b: Call2 0x4db

0x31c: Stack[-1] = Stack[-2]
0x31d: Pop(1)
0x31e: Call2 0x468

0x31f: Pop(2)
0x320: GOTO 0x327

0x321: PushEmpty()
0x322: Call2 0x2da

0x323: Pop(0)
0x324: PushEmpty()
0x325: Call2 0x2f5

0x326: Pop(0)
0x327: Return(); Pop(0)

0x328: PushEmpty()
0x329: Call2 0x3b4

0x32a: Pop(0)
0x32b: PushEmpty()
0x32c: Call2 0x2fe

0x32d: Pop(0)
0x32e: @ lshStopSpeech()
0x32f: Pop(0)
0x330: @ lshStopAnimation()
0x331: Pop(0)
0x332: @ StopAsync()
0x333: Pop(0)
0x334: @ Hold()
0x335: Pop(0)
0x336: Return(); Pop(0)

0x337: @ StopGroup0()
0x338: Pop(0)
0x339: PushEmpty()
0x33a: Call2 0x2fe

0x33b: Pop(0)
0x33c: PushEmpty(string)
0x33d: Stack[-1] = "Neutral" // @poff=89
0x33e: Call2 0x4b8

0x33f: Pop(1)
0x340: PushEmpty()
0x341: Call2 0x2f5

0x342: Pop(0)
0x343: Return(); Pop(0)

0x344: PushEmpty()
0x345: Push(Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x347: PushEmpty()
0x348: Call2 0x2f5

0x349: Pop(0)
0x34a: GOTO 0x34f

0x34b: PushEmpty(string)
0x34c: Stack[-1] = "Neutral" // @poff=89
0x34d: Call2 0x4b8

0x34e: Pop(1)
0x34f: Return(); Pop(0)

0x350: PushEmpty(bool, bool)
0x351: @ IsOverrideActive(Stack[-1])
0x352: Pop(0)
0x353: Pop(0); Push((bool) Stack[-1] == 0)
0x354: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x355: EventDisable(0)
0x356: PushEmpty()
0x357: Call2 0x3b4

0x358: Pop(0)
0x359: PushEmpty(bool, object)
0x35a: Stack[-5] = Stack[-1]
0x35b: Call2 0x3cb

0x35c: Pop(2)
0x35d: EventEnable(0)
0x35e: PushEmpty(object)
0x35f: Stack[-4] = Stack[-1]
0x360: Call2 0x52d

0x361: Pop(1)
0x362: PushEmpty(string)
0x363: Stack[-1] = "Neutral" // @poff=89
0x364: Call2 0x4b8

0x365: Pop(1)
0x366: PushEmpty()
0x367: Call2 0x2fe

0x368: Pop(0)
0x369: PushEmpty()
0x36a: Call2 0x2f5

0x36b: Pop(0)
0x36c: Return(); Pop(2)

0x36d: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x36e: @ WaitForAnimEnd()
0x36f: Pop(0)
0x370: PushEmpty(bool)
0x371: Call2 0x3d4

0x372: Pop(0)
0x373: Pop(1); Push((bool) Stack[-1] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: Return(); Pop(12)

0x376: PushEmpty(int)
0x377: Call2 0x501

0x378: Stack[-1] = Stack[-7]
0x379: Pop(1)
0x37a: Stack[-5] = (int) 0
0x37b: PushEmpty(bool)
0x37c: Stack[-1] = (bool) 0
0x37d: Push((int) 5)
0x37e: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x380: PushEmpty(bool)
0x381: Call2 0x3d4

0x382: Pop(0)
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: Stack[-1] = (bool) 1
0x385: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x386: Pop(0); Push((bool) Stack[-6] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x388: Push((int) 3)
0x389: @ Sleep(Stack[-1], Stack[-5])
0x38a: Pop(1)
0x38b: Pop(0); Push((bool) Stack[-4] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: GOTO 0x3af

0x38e: GOTO 0x3a4

0x38f: @ irand(Stack[-3], Stack[-6])
0x390: Pop(0)
0x391: Push((int) 5)
0x392: @ irand(Stack[-3], Stack[-1])
0x393: Pop(1)
0x394: Push((int) 0)
0x395: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x396: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x397: Stack[-3] = (int) 0
0x398: Push("all") // @poff=138
0x399: PushEmpty(string, int)
0x39a: Stack[-6] = Stack[-1]
0x39b: Call2 0x4fa

0x39c: Pop(1)
0x39d: @ PlayAnimation(Stack[-2], Stack[-1])
0x39e: Pop(2)
0x39f: @ WaitForAnimEnd(Stack[-1])
0x3a0: Pop(0)
0x3a1: Pop(0); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: GOTO 0x3af

0x3a4: PushEmpty(bool)
0x3a5: Call2 0x3b2

0x3a6: Pop(0)
0x3a7: Pop(1); Push((bool) Stack[-1] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: GOTO 0x3af

0x3aa: @ ResetAAS()
0x3ab: Pop(0)
0x3ac: Push((int) 1)
0x3ad: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3ae: GOTO 0x37b

0x3af: @ ResetAAS()
0x3b0: Pop(0)
0x3b1: Return(); Pop(12)

0x3b2: Stack[-1] = (bool) 1
0x3b3: Return(); Pop(0)

0x3b4: @ StopAnimation()
0x3b5: Pop(0)
0x3b6: @ StopGroup0()
0x3b7: Pop(0)
0x3b8: Return(); Pop(0)

0x3b9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3ba: @ GetPosition(Stack[-3])
0x3bb: Pop(0)
0x3bc: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x3bd: Pop(0)
0x3be: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3bf: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3c0: Return(); Pop(6)

0x3c1: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3c2: @ GetPosition(Stack[-3])
0x3c3: Pop(0)
0x3c4: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3c5: Push(CvectorIndex(Stack[-2], 0))
0x3c6: Push(CvectorIndex(Stack[-3], 2))
0x3c7: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3c8: Pop(2)
0x3c9: Stack[-1] = Stack[-8]
0x3ca: Return(); Pop(6)

0x3cb: PushEmpty(cvector, cvector)
0x3cc: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x3cd: Pop(0)
0x3ce: PushEmpty(bool, cvector)
0x3cf: Stack[-3] = Stack[-1]
0x3d0: Call2 0x3c1

0x3d1: Stack[-2] = Stack[-6]
0x3d2: Pop(2)
0x3d3: Return(); Pop(2)

0x3d4: PushEmpty(bool, bool)
0x3d5: @ IsLoaded(Stack[-1])
0x3d6: Pop(0)
0x3d7: Stack[-1] = Stack[-3]
0x3d8: Return(); Pop(2)

0x3d9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3da: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x3db: Pop(0)
0x3dc: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x3dd: Pop(0)
0x3de: Push(CvectorIndex(Stack[-8], 1))
0x3df: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3e0: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3e1: @ GetPosition(Stack[-7])
0x3e2: Pop(0)
0x3e3: @ GetEyesHeight(Stack[-9])
0x3e4: Pop(0)
0x3e5: Push(CvectorIndex(Stack[-7], 1))
0x3e6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3e7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3e8: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3e9: Push(CvectorIndex(Stack[-6], 1))
0x3ea: Stack[-1] = (int) 0
0x3eb: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3ec: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3ed: Pop(1); Push(Sqrt(Stack[-1]))
0x3ee: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3ef: Stack[-5] = -Stack[-6]; Pop(0);
0x3f0: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3f1: PushEmpty(cvector, cvector)
0x3f2: Push([0.0, 1.0, 0.0])
0x3f3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3f4: Call2 0x4e1

0x3f5: Pop(1)
0x3f6: Push((int) 25)
0x3f7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3f8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f9: Push([0.0, 10.0, 0.0])
0x3fa: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3fb: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3fc: @ IsOverrideActive(Stack[-2])
0x3fd: Pop(0)
0x3fe: Push(Stack[-2])
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: Stack[-21] = (bool) 0
0x401: Return(); Pop(18)

0x402: @ StopWorld()
0x403: Pop(0)
0x404: @ CameraTransit(Stack[-3], Stack[-5])
0x405: Pop(0)
0x406: Push(CvectorIndex(Stack[-4], 0))
0x407: Push(CvectorIndex(Stack[-5], 2))
0x408: @ Rotate(Stack[-2], Stack[-1])
0x409: Pop(2)
0x40a: PushEmpty(bool)
0x40b: Call2 0x51a

0x40c: Pop(0)
0x40d: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40e: GOTO 0x417

0x40f: Push("head") // @poff=196
0x410: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x411: Pop(1)
0x412: Push(Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x414: Push("head") // @poff=196
0x415: @ LookAsyncCamera(Stack[-1])
0x416: Pop(1)
0x417: @ CameraWaitForPlayFinish()
0x418: Pop(0)
0x419: @ ResumeWorld()
0x41a: Pop(0)
0x41b: Stack[-21] = (bool) 1
0x41c: Return(); Pop(18)

0x41d: PushEmpty(bool, bool)
0x41e: @ CameraSwitchToNormal()
0x41f: Pop(0)
0x420: PushEmpty(bool)
0x421: Call2 0x51a

0x422: Pop(0)
0x423: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x424: GOTO 0x42d

0x425: Push("head") // @poff=196
0x426: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x427: Pop(1)
0x428: Push(Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42a: Push("head") // @poff=196
0x42b: @ UnlookAsync(Stack[-1])
0x42c: Pop(1)
0x42d: Return(); Pop(2)

0x42e: PushEmpty(int, int, int, int)
0x42f: Push("voice_common") // @poff=206
0x430: @ GetVariable(Stack[-1], Stack[-3])
0x431: Pop(1)
0x432: Push(Stack[-2])
0x433: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x434: PushEmpty(bool, object)
0x435: Stack[-7] = Stack[-1]
0x436: Call2 0x468

0x437: Pop(1)
0x438: Pop(1); Push((bool) Stack[-1] == 0)
0x439: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x43a: PushEmpty(bool, object)
0x43b: Stack[-7] = Stack[-1]
0x43c: Call2 0x48d

0x43d: Pop(1)
0x43e: Pop(1); Push((bool) Stack[-1] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: Stack[-6] = (bool) 0
0x441: Return(); Pop(4)

0x442: Push((int) 2)
0x443: @ irand(Stack[-2], Stack[-1])
0x444: Pop(1)
0x445: Push(Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x447: Push("voice_common") // @poff=206
0x448: Push((int) 1)
0x449: Pop(1); Push(Stack[-4] + Stack[-1]);
0x44a: Push((int) 3)
0x44b: Pop(2); Push(Stack[-2] % Stack[-1]);
0x44c: @ SetVariable(Stack[-2], Stack[-1])
0x44d: Pop(2)
0x44e: GOTO 0x453

0x44f: Push("voice_common") // @poff=206
0x450: Push((int) 0)
0x451: @ SetVariable(Stack[-2], Stack[-1])
0x452: Pop(2)
0x453: GOTO 0x466

0x454: PushEmpty(bool, object)
0x455: Stack[-7] = Stack[-1]
0x456: Call2 0x48d

0x457: Pop(1)
0x458: Pop(1); Push((bool) Stack[-1] == 0)
0x459: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x45a: PushEmpty(bool, object)
0x45b: Stack[-7] = Stack[-1]
0x45c: Call2 0x468

0x45d: Pop(1)
0x45e: Pop(1); Push((bool) Stack[-1] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Stack[-6] = (bool) 0
0x461: Return(); Pop(4)

0x462: Push("voice_common") // @poff=206
0x463: Push((int) 1)
0x464: @ SetVariable(Stack[-2], Stack[-1])
0x465: Pop(2)
0x466: Stack[-6] = (bool) 1
0x467: Return(); Pop(4)

0x468: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x469: Stack[-5] = "c" // @poff=232
0x46a: Stack[-4] = (int) 0
0x46b: Push((int) 1)
0x46c: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x46d: Push((int) 1)
0x46e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x46f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x470: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x471: Pop(1)
0x472: Pop(0); Push((bool) Stack[-3] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: GOTO 0x478

0x475: Push((int) 1)
0x476: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x477: GOTO 0x46b

0x478: Pop(0); Push((bool) Stack[-4] == 0)
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: Stack[-12] = (bool) 0
0x47b: Return(); Pop(10)

0x47c: Stack[-2] = (int) 0
0x47d: Push((int) 1)
0x47e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x47f: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x480: @ irand(Stack[-2], Stack[-4])
0x481: Pop(0)
0x482: Push((int) 1)
0x483: Pop(1); Push(Stack[-3] + Stack[-1]);
0x484: Pop(1); Push(Stack[-6] + Stack[-1]);
0x485: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x486: Pop(1)
0x487: PushEmpty(bool, string)
0x488: Stack[-3] = Stack[-1]
0x489: Call2 0x4c5

0x48a: Stack[-2] = Stack[-14]
0x48b: Pop(2)
0x48c: Return(); Pop(10)

0x48d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x48e: Push("d") // @poff=202
0x48f: PushEmpty(int)
0x490: Call2 0x4eb

0x491: Pop(0)
0x492: Pop(2); Push(Stack[-2] + Stack[-1]);
0x493: Push("m") // @poff=260
0x494: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x495: Stack[-4] = (int) 0
0x496: Push((int) 1)
0x497: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x498: Push((int) 1)
0x499: Pop(1); Push(Stack[-5] + Stack[-1]);
0x49a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x49b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x49c: Pop(1)
0x49d: Pop(0); Push((bool) Stack[-3] == 0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: GOTO 0x4a3

0x4a0: Push((int) 1)
0x4a1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4a2: GOTO 0x496

0x4a3: Pop(0); Push((bool) Stack[-4] == 0)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: Stack[-12] = (bool) 0
0x4a6: Return(); Pop(10)

0x4a7: Stack[-2] = (int) 0
0x4a8: Push((int) 1)
0x4a9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ab: @ irand(Stack[-2], Stack[-4])
0x4ac: Pop(0)
0x4ad: Push((int) 1)
0x4ae: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4af: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4b0: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x4b1: Pop(1)
0x4b2: PushEmpty(bool, string)
0x4b3: Stack[-3] = Stack[-1]
0x4b4: Call2 0x4c5

0x4b5: Stack[-2] = Stack[-14]
0x4b6: Pop(2)
0x4b7: Return(); Pop(10)

0x4b8: PushEmpty(float, float, float, float)
0x4b9: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x4ba: Pop(0)
0x4bb: Push((bool) 0)
0x4bc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4bd: Pop(1)
0x4be: Return(); Pop(4)

0x4bf: PushEmpty(float, float, float, float)
0x4c0: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x4c1: Pop(0)
0x4c2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x4c3: Pop(0)
0x4c4: Return(); Pop(4)

0x4c5: PushEmpty(bool, bool)
0x4c6: PushEmpty(bool)
0x4c7: Call2 0x51a

0x4c8: Pop(0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4ca: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4cb: Pop(0)
0x4cc: Push(Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4ce: @ lshPlaySpeech(Stack[-3])
0x4cf: Pop(0)
0x4d0: Stack[-4] = (bool) 1
0x4d1: Return(); Pop(2)

0x4d2: Stack[-4] = (bool) 0
0x4d3: Return(); Pop(2)

0x4d4: PushEmpty(bool)
0x4d5: Call2 0x51a

0x4d6: Pop(0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d8: @ lshStopSpeech()
0x4d9: Pop(0)
0x4da: Return(); Pop(0)

0x4db: PushEmpty(object, object)
0x4dc: @ self(Stack[-1])
0x4dd: Pop(0)
0x4de: Stack[-1] = Stack[-3]
0x4df: Return(); Pop(2)

0x4e0: Stack[-1] = 0
0x4e1: PushEmpty(float, float)
0x4e2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4e3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4e4: Push((float)9.999999974752427e-07)
0x4e5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e7: Stack[-4] = [0.0, 0.0, 0.0]
0x4e8: Return(); Pop(2)

0x4e9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4ea: Return(); Pop(2)

0x4eb: PushEmpty(float, float)
0x4ec: @ GetGameTime(Stack[-1])
0x4ed: Pop(0)
0x4ee: Push((int) 1)
0x4ef: PushEmpty(int)
0x4f0: Push((int) 24)
0x4f1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4f2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4f3: Return(); Pop(2)

0x4f4: PushEmpty()
0x4f5: PushEmpty(int)
0x4f6: Call2 0x4eb

0x4f7: Pop(0)
0x4f8: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x4f9: Return(); Pop(0)

0x4fa: PushEmpty(string, string)
0x4fb: Stack[-1] = "idle" // @poff=146
0x4fc: Push(Stack[-3])
0x4fd: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fe: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4ff: Stack[-1] = Stack[-4]
0x500: Return(); Pop(2)

0x501: PushEmpty(int, bool, int, bool)
0x502: Stack[-2] = (int) 0
0x503: Push("all") // @poff=138
0x504: PushEmpty(string, int)
0x505: Stack[-5] = Stack[-1]
0x506: Call2 0x4fa

0x507: Pop(1)
0x508: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x509: Pop(2)
0x50a: Pop(0); Push((bool) Stack[-1] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: GOTO 0x510

0x50d: Push((int) 1)
0x50e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x50f: GOTO 0x503

0x510: Stack[-2] = Stack[-5]
0x511: Return(); Pop(4)

0x512: Stack[-1] = (int) 515544
0x513: Return(); Pop(0)

0x514: Stack[-1] = (int) 502869
0x515: Return(); Pop(0)

0x516: Stack[-1] = "ui/NPC_Mark.png" // @poff=264
0x517: Return(); Pop(0)

0x518: Stack[-1] = "ui/NPC_Mark_b.png" // @poff=296
0x519: Return(); Pop(0)

0x51a: Stack[-1] = (bool) 1
0x51b: Return(); Pop(0)

0x51c: PushEmpty(int, int)
0x51d: Push("branch") // @poff=332
0x51e: @ GetVariable(Stack[-1], Stack[-2])
0x51f: Pop(1)
0x520: Push((int) 0)
0x521: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x523: Stack[-3] = (int) 1
0x524: Return(); Pop(2)

0x525: GOTO 0x52b

0x526: Push((int) 1)
0x527: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x529: Stack[-3] = (int) 2
0x52a: Return(); Pop(2)

0x52b: Stack[-3] = (int) 3
0x52c: Return(); Pop(2)

0x52d: PushEmpty(int, int)
0x52e: Push("mt_mark") // @poff=346
0x52f: @ GetVariable(Stack[-1], Stack[-2])
0x530: Pop(1)
0x531: Pop(0); Push((bool) Stack[-1] == 0)
0x532: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x533: PushEmpty(int, object)
0x534: Stack[-5] = Stack[-1]
0x535: Push(-2, 1); TaskCall(1)
0x536: Call2 0xd

0x537: Pop(-2, 1); TaskReturn
0x538: Pop(2)
0x539: Push("mt_mark") // @poff=346
0x53a: Push((int) 1)
0x53b: @ SetVariable(Stack[-2], Stack[-1])
0x53c: Pop(2)
0x53d: PushEmpty(bool, int)
0x53e: Stack[-1] = (int) 12
0x53f: Call2 0x4f4

0x540: Pop(1)
0x541: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x542: PushEmpty(int, object)
0x543: Stack[-5] = Stack[-1]
0x544: Push(-2, 1); TaskCall(3)
0x545: Call2 0xe5

0x546: Pop(-2, 1); TaskReturn
0x547: Pop(2)
0x548: Return(); Pop(2)

0x549: PushEmpty(int, object)
0x54a: Stack[-5] = Stack[-1]
0x54b: Push(-2, 1); TaskCall(5)
0x54c: Call2 0x1e8

0x54d: Pop(-2, 1); TaskReturn
0x54e: Pop(2)
0x54f: Return(); Pop(2)

