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
	W:head
	A:GetPosition
	A:GetEyesHeight
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
	W:quest_k12_01
	W:init_sobor
	W:ook12BirdmaskS1
	W:sobor@door1
	W:branch
	A:add
	W:vol_
	A:size
	A:get
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e0067000000710075006500730074005f006b00310032005f0030003100000069006e00690074005f0073006f0062006f00720000006f006f006b003100320042006900720064006d00610073006b0053003100000073006f0062006f007200400064006f006f007200310000006200720061006e006300680000006164640076006f006c005f00000073697a650067657400
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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	Trace (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateIntVector (1 args)

RunOp = 0x14d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x159 Vars = (object)
		EVENT_7 Op = 0x18e Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x216

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2d8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2d6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2da

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2dc

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x325

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-11] = Stack[-2]
0x31: Stack[-6] = Stack[-1]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-10] = Stack[-1]
0x41: Call2 0x25a

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x46: Pop(0)
0x47: Stack[-2] = Stack[-10]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2f4

0x53: Pop(1)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x56: PushEmpty(string)
0x57: Stack[-1] = "Neutral" // @poff=89
0x58: Call2 0xc2

0x59: Pop(1)
0x5a: Push((int) 539221)
0x5b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5c: Pop(1)
0x5d: @@@ ClearReplies(); Obj=0 // @poff=116
0x5e: Pop(0)
0x5f: Push((int) 539222)
0x60: Push((int) -1)
0x61: Push((int) 41165)
0x62: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x63: Pop(3)
0x64: GOTO 0xa4

0x65: PushEmpty(bool, object)
0x66: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x67: Call2 0x2fe

0x68: Pop(1)
0x69: Pop(1); Push((bool) Stack[-1] == 0)
0x6a: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6b: PushEmpty(string)
0x6c: Stack[-1] = "Neutral" // @poff=89
0x6d: Call2 0xc2

0x6e: Pop(1)
0x6f: Push((int) 539219)
0x70: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x71: Pop(1)
0x72: @@@ ClearReplies(); Obj=0 // @poff=116
0x73: Pop(0)
0x74: Push((int) 539220)
0x75: Push((int) -1)
0x76: Push((int) 41163)
0x77: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x78: Pop(3)
0x79: GOTO 0xa4

0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x308

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x7f: PushEmpty(object, object)
0x80: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x81: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x82: Call2 0x2e7

0x83: Pop(2)
0x84: PushEmpty(string)
0x85: Stack[-1] = "Neutral" // @poff=89
0x86: Call2 0xc2

0x87: Pop(1)
0x88: Push((int) 539223)
0x89: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x8a: Pop(1)
0x8b: @@@ ClearReplies(); Obj=0 // @poff=116
0x8c: Pop(0)
0x8d: Push((int) 539224)
0x8e: Push((int) -1)
0x8f: Push((int) 41167)
0x90: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x91: Pop(3)
0x92: GOTO 0xa4

0x93: PushEmpty(string)
0x94: Stack[-1] = "Neutral" // @poff=89
0x95: Call2 0xc2

0x96: Pop(1)
0x97: Push((int) 539225)
0x98: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x99: Pop(1)
0x9a: @@@ ClearReplies(); Obj=0 // @poff=116
0x9b: Pop(0)
0x9c: Push((int) 539226)
0x9d: Push((int) -1)
0x9e: Push((int) 41169)
0x9f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa0: Pop(3)
0xa1: GOTO 0xa4

0xa2: Return(); Pop(0)

0xa3: GOTO 0x4e

0xa4: PushEmpty(bool)
0xa5: Call2 0x2de

0xa6: Pop(0)
0xa7: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xa8: @ lshWaitForAnimEnd()
0xa9: Pop(0)
0xaa: Push( Stack[3 + Tasks[-1].StackPointer] )
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: GOTO 0xb2

0xad: PushEmpty(string)
0xae: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xaf: Call2 0x26b

0xb0: Pop(1)
0xb1: GOTO 0xa8

0xb2: GOTO 0xc1

0xb3: Push("all") // @poff=138
0xb4: Push("idle") // @poff=146
0xb5: @ PlayAnimation(Stack[-2], Stack[-1])
0xb6: Pop(2)
0xb7: @ WaitForAnimEnd()
0xb8: Pop(0)
0xb9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: GOTO 0xc1

0xbc: Push("all") // @poff=138
0xbd: Push("idle") // @poff=146
0xbe: @ PlayAnimation(Stack[-2], Stack[-1])
0xbf: Pop(2)
0xc0: GOTO 0xb7

0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: PushEmpty(bool)
0xc4: Call2 0x2de

0xc5: Pop(0)
0xc6: Pop(1); Push((bool) Stack[-1] == 0)
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: Return(); Pop(0)

0xc9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: Return(); Pop(0)

0xcc: PushEmpty(string, bool)
0xcd: Stack[-3] = Stack[-2]
0xce: Push("") // @poff=102
0xcf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd1: Stack[-1] = (bool) 0
0xd2: GOTO 0xd4

0xd3: Stack[-1] = (bool) 1
0xd4: Call2 0x272

0xd5: Pop(2)
0xd6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd7: Return(); Pop(0)

0xd8: PushEmpty()
0xd9: Push((int) 1)
0xda: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0xdb: PushEmpty()
0xdc: Call2 0x283

0xdd: Pop(0)
0xde: Push((int) 41167)
0xdf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x2ed

0xe5: Pop(2)
0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call2 0x2e0

0xea: Pop(2)
0xeb: Push((int) 41164)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0xee: PushEmpty(bool, object)
0xef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Call2 0x2f4

0xf1: Pop(1)
0xf2: Pop(1); Push((bool) Stack[-1] == 0)
0xf3: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral" // @poff=89
0xf6: Call2 0xc2

0xf7: Pop(1)
0xf8: Push((int) 539221)
0xf9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfa: Pop(1)
0xfb: @@@ ClearReplies(); Obj=0 // @poff=116
0xfc: Pop(0)
0xfd: Push((int) 539222)
0xfe: Push((int) -1)
0xff: Push((int) 41165)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: PushEmpty(bool, object)
0x104: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x105: Call2 0x2fe

0x106: Pop(1)
0x107: Pop(1); Push((bool) Stack[-1] == 0)
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral" // @poff=89
0x10b: Call2 0xc2

0x10c: Pop(1)
0x10d: Push((int) 539219)
0x10e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10f: Pop(1)
0x110: @@@ ClearReplies(); Obj=0 // @poff=116
0x111: Pop(0)
0x112: Push((int) 539220)
0x113: Push((int) -1)
0x114: Push((int) 41163)
0x115: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: PushEmpty(bool, object)
0x119: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Call2 0x308

0x11b: Pop(1)
0x11c: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x11d: PushEmpty(object, object)
0x11e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x120: Call2 0x2e7

0x121: Pop(2)
0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral" // @poff=89
0x124: Call2 0xc2

0x125: Pop(1)
0x126: Push((int) 539223)
0x127: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x128: Pop(1)
0x129: @@@ ClearReplies(); Obj=0 // @poff=116
0x12a: Pop(0)
0x12b: Push((int) 539224)
0x12c: Push((int) -1)
0x12d: Push((int) 41167)
0x12e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral" // @poff=89
0x133: Call2 0xc2

0x134: Pop(1)
0x135: Push((int) 539225)
0x136: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x137: Pop(1)
0x138: @@@ ClearReplies(); Obj=0 // @poff=116
0x139: Pop(0)
0x13a: Push((int) 539226)
0x13b: Push((int) -1)
0x13c: Push((int) 41169)
0x13d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x141: PushEmpty(bool)
0x142: Call2 0x2de

0x143: Pop(0)
0x144: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x145: @ lshStopAnimation()
0x146: Pop(0)
0x147: GOTO 0x14a

0x148: @ StopAnimation()
0x149: Pop(0)
0x14a: Return(); Pop(0)

0x14b: GOTO 0xd9

0x14c: Return(); Pop(0)

0x14d: Push((bool) 1)
0x14e: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x14f: PushEmpty(float, float)
0x150: Stack[-2] = (int) 300
0x151: Stack[-1] = (int) 100
0x152: Call2 0x164

0x153: Pop(2)
0x154: Push((int) 1)
0x155: @ Sleep(Stack[-1])
0x156: Pop(1)
0x157: GOTO 0x14d

0x158: Return(); Pop(0)

0x159: PushEmpty()
0x15a: PushEmpty()
0x15b: Call2 0x1a5

0x15c: Pop(0)
0x15d: PushEmpty(int, object)
0x15e: Stack[-3] = Stack[-1]
0x15f: Push(-2, 1); TaskCall(0)
0x160: Call2 0x0

0x161: Pop(-2, 1); TaskReturn
0x162: Pop(2)
0x163: Return(); Pop(0)

0x164: PushEmpty()
0x165: PushEmpty(bool)
0x166: Call2 0x211

0x167: Pop(0)
0x168: Pop(1); Push((bool) Stack[-1] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x16a: Return(); Pop(0)

0x16b: Push("player") // @poff=156
0x16c: @ FindActor(Stack[-4]T, Stack[-1])
0x16d: Pop(1)
0x16e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x16f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x170: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x171: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x172: Push((int) 10)
0x173: Push((float)1.0)
0x174: @ SetTimer(Stack[-2], Stack[-1])
0x175: Pop(2)
0x176: PushEmpty()
0x177: Call2 0x1b3

0x178: Pop(0)
0x179: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17b: Push((int) 10)
0x17c: @ KillTimer(Stack[-1])
0x17d: Pop(1)
0x17e: Return(); Pop(0)

0x17f: PushEmpty(float, float)
0x180: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x181: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x182: Stack[-3] = (bool) 0
0x183: Return(); Pop(2)

0x184: PushEmpty(float, object)
0x185: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x186: Call2 0x209

0x187: Pop(1)
0x188: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x189: Push( Stack[2 + Tasks[-1].StackPointer] )
0x18a: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x18c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x18d: Return(); Pop(2)

0x18e: PushEmpty()
0x18f: Push((int) 10)
0x190: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x192: PushEmpty(bool)
0x193: Call2 0x17f

0x194: Pop(0)
0x195: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x196: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x197: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x198: PushEmpty(object)
0x199: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x19a: Call2 0x278

0x19b: Pop(1)
0x19c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x19d: GOTO 0x1a4

0x19e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x19f: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a0: Push("head") // @poff=170
0x1a1: @ UnlookAsync(Stack[-1])
0x1a2: Pop(1)
0x1a3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a4: Return(); Pop(0)

0x1a5: PushEmpty()
0x1a6: Call2 0x204

0x1a7: Pop(0)
0x1a8: Push((int) 10)
0x1a9: @ KillTimer(Stack[-1])
0x1aa: Pop(1)
0x1ab: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ad: Push("head") // @poff=170
0x1ae: @ UnlookAsync(Stack[-1])
0x1af: Pop(1)
0x1b0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1b2: Return(); Pop(0)

0x1b3: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1b4: @ WaitForAnimEnd()
0x1b5: Pop(0)
0x1b6: PushEmpty(bool)
0x1b7: Call2 0x211

0x1b8: Pop(0)
0x1b9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: Return(); Pop(14)

0x1bc: PushEmpty(int)
0x1bd: Call2 0x2c5

0x1be: Stack[-1] = Stack[-8]
0x1bf: Pop(1)
0x1c0: Stack[-6] = (int) 0
0x1c1: PushEmpty(bool)
0x1c2: Stack[-1] = (bool) 0
0x1c3: Push((int) 5)
0x1c4: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c6: PushEmpty(bool)
0x1c7: Call2 0x211

0x1c8: Pop(0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: Stack[-1] = (bool) 1
0x1cb: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1cc: Push((int) 3)
0x1cd: @ irand(Stack[-6], Stack[-1])
0x1ce: Pop(1)
0x1cf: Push((int) 0)
0x1d0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1d2: Push(Stack[-7])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1d4: @ irand(Stack[-4], Stack[-7])
0x1d5: Pop(0)
0x1d6: Push("all") // @poff=138
0x1d7: PushEmpty(string, int)
0x1d8: Stack[-7] = Stack[-1]
0x1d9: Call2 0x2be

0x1da: Pop(1)
0x1db: @ PlayAnimation(Stack[-2], Stack[-1])
0x1dc: Pop(2)
0x1dd: @ WaitForAnimEnd(Stack[-3])
0x1de: Pop(0)
0x1df: Pop(0); Push((bool) Stack[-3] == 0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e1: GOTO 0x1ff

0x1e2: GOTO 0x1f4

0x1e3: Push((int) 1)
0x1e4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e6: Push((int) 4)
0x1e7: @ rand(Stack[-3], Stack[-1])
0x1e8: Pop(1)
0x1e9: Push((int) 1)
0x1ea: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1eb: @ Sleep(Stack[-1], Stack[-2])
0x1ec: Pop(1)
0x1ed: Pop(0); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: GOTO 0x1ff

0x1f0: GOTO 0x1f4

0x1f1: Push(Stack[-6])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: GOTO 0x1ff

0x1f4: PushEmpty(bool)
0x1f5: Call2 0x202

0x1f6: Pop(0)
0x1f7: Pop(1); Push((bool) Stack[-1] == 0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: GOTO 0x1ff

0x1fa: @ ResetAAS()
0x1fb: Pop(0)
0x1fc: Push((int) 1)
0x1fd: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1fe: GOTO 0x1c1

0x1ff: @ ResetAAS()
0x200: Pop(0)
0x201: Return(); Pop(14)

0x202: Stack[-1] = (bool) 1
0x203: Return(); Pop(0)

0x204: @ StopAnimation()
0x205: Pop(0)
0x206: @ StopGroup0()
0x207: Pop(0)
0x208: Return(); Pop(0)

0x209: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x20a: @ GetPosition(Stack[-3])
0x20b: Pop(0)
0x20c: @@ GetPosition(Stack[-2]); Obj=7 // @poff=180
0x20d: Pop(0)
0x20e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x20f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x210: Return(); Pop(6)

0x211: PushEmpty(bool, bool)
0x212: @ IsLoaded(Stack[-1])
0x213: Pop(0)
0x214: Stack[-1] = Stack[-3]
0x215: Return(); Pop(2)

0x216: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x217: @@ GetPosition(Stack[-8]); Obj=20 // @poff=180
0x218: Pop(0)
0x219: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=192
0x21a: Pop(0)
0x21b: Push(CvectorIndex(Stack[-8], 1))
0x21c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x21e: @ GetPosition(Stack[-7])
0x21f: Pop(0)
0x220: @ GetEyesHeight(Stack[-9])
0x221: Pop(0)
0x222: Push(CvectorIndex(Stack[-7], 1))
0x223: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x224: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x225: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x226: Push(CvectorIndex(Stack[-6], 1))
0x227: Stack[-1] = (int) 0
0x228: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x229: Pop(0); Push(Stack[-6] | Stack[-6]);
0x22a: Pop(1); Push(Sqrt(Stack[-1]))
0x22b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x22c: Stack[-5] = -Stack[-6]; Pop(0);
0x22d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x22e: PushEmpty(cvector, cvector)
0x22f: Push([0.0, 1.0, 0.0])
0x230: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x231: Call2 0x28a

0x232: Pop(1)
0x233: Push((int) 25)
0x234: Pop(2); Push(Stack[-2] * Stack[-1]);
0x235: Pop(2); Push(Stack[-2] + Stack[-1]);
0x236: Push([0.0, 10.0, 0.0])
0x237: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x238: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x239: @ IsOverrideActive(Stack[-2])
0x23a: Pop(0)
0x23b: Push(Stack[-2])
0x23c: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23d: Stack[-21] = (bool) 0
0x23e: Return(); Pop(18)

0x23f: @ StopWorld()
0x240: Pop(0)
0x241: @ CameraTransit(Stack[-3], Stack[-5])
0x242: Pop(0)
0x243: Push(CvectorIndex(Stack[-4], 0))
0x244: Push(CvectorIndex(Stack[-5], 2))
0x245: @ Rotate(Stack[-2], Stack[-1])
0x246: Pop(2)
0x247: PushEmpty(bool)
0x248: Call2 0x2de

0x249: Pop(0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24b: GOTO 0x254

0x24c: Push("head") // @poff=170
0x24d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x24e: Pop(1)
0x24f: Push(Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x251: Push("head") // @poff=170
0x252: @ LookAsyncCamera(Stack[-1])
0x253: Pop(1)
0x254: @ CameraWaitForPlayFinish()
0x255: Pop(0)
0x256: @ ResumeWorld()
0x257: Pop(0)
0x258: Stack[-21] = (bool) 1
0x259: Return(); Pop(18)

0x25a: PushEmpty(bool, bool)
0x25b: @ CameraSwitchToNormal()
0x25c: Pop(0)
0x25d: PushEmpty(bool)
0x25e: Call2 0x2de

0x25f: Pop(0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: GOTO 0x26a

0x262: Push("head") // @poff=170
0x263: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x264: Pop(1)
0x265: Push(Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x267: Push("head") // @poff=170
0x268: @ UnlookAsync(Stack[-1])
0x269: Pop(1)
0x26a: Return(); Pop(2)

0x26b: PushEmpty(float, float, float, float)
0x26c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x26d: Pop(0)
0x26e: Push((bool) 0)
0x26f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(1)
0x271: Return(); Pop(4)

0x272: PushEmpty(float, float, float, float)
0x273: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x274: Pop(0)
0x275: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x276: Pop(0)
0x277: Return(); Pop(4)

0x278: PushEmpty(float, cvector, float, cvector)
0x279: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=192
0x27a: Pop(0)
0x27b: Stack[-1] = [0.0, 0.0, 0.0]
0x27c: Push(CvectorIndex(Stack[-1], 1))
0x27d: Stack[-3] = Stack[-1]
0x27e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x27f: Push("head") // @poff=170
0x280: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x281: Pop(1)
0x282: Return(); Pop(4)

0x283: PushEmpty(bool)
0x284: Call2 0x2de

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x287: @ lshStopSpeech()
0x288: Pop(0)
0x289: Return(); Pop(0)

0x28a: PushEmpty(float, float)
0x28b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x28c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x28d: Push((float)9.999999974752427e-07)
0x28e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x290: Stack[-4] = [0.0, 0.0, 0.0]
0x291: Return(); Pop(2)

0x292: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x293: Return(); Pop(2)

0x294: PushEmpty(int, int)
0x295: @ GetVariable(Stack[-3], Stack[-1])
0x296: Pop(0)
0x297: Stack[-1] = Stack[-4]
0x298: Return(); Pop(2)

0x299: PushEmpty(object, object)
0x29a: @ FindActor(Stack[-1], Stack[-4])
0x29b: Pop(0)
0x29c: Pop(0); Push((bool) Stack[-1] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x29e: Push("Door ") // @poff=206
0x29f: Pop(1); Push(Stack[-1] + Stack[-5]);
0x2a0: Push(" not found") // @poff=218
0x2a1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a2: @ Trace(Stack[-1])
0x2a3: Pop(1)
0x2a4: GOTO 0x2a8

0x2a5: Push("locked") // @poff=240
0x2a6: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=254
0x2a7: Pop(1)
0x2a8: Return(); Pop(2)

0x2a9: Stack[-1] = 0
0x2aa: PushEmpty(object, object)
0x2ab: @ FindActor(Stack[-1], Stack[-4])
0x2ac: Pop(0)
0x2ad: Pop(0); PushNull((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2af: Stack[-5] = (bool) 0
0x2b0: Return(); Pop(2)

0x2b1: @ Trigger(Stack[-1], Stack[-3])
0x2b2: Pop(0)
0x2b3: Stack[-5] = (bool) 1
0x2b4: Return(); Pop(2)

0x2b5: Stack[-1] = 0
0x2b6: PushEmpty(float, float)
0x2b7: @ GetGameTime(Stack[-1])
0x2b8: Pop(0)
0x2b9: PushEmpty(int)
0x2ba: Stack[-2] = Stack[-1]
0x2bb: Push((int) 24)
0x2bc: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x2bd: Return(); Pop(2)

0x2be: PushEmpty(string, string)
0x2bf: Stack[-1] = "idle" // @poff=146
0x2c0: Push(Stack[-3])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2c3: Stack[-1] = Stack[-4]
0x2c4: Return(); Pop(2)

0x2c5: PushEmpty(int, bool, int, bool)
0x2c6: Stack[-2] = (int) 0
0x2c7: Push("all") // @poff=138
0x2c8: PushEmpty(string, int)
0x2c9: Stack[-5] = Stack[-1]
0x2ca: Call2 0x2be

0x2cb: Pop(1)
0x2cc: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2cd: Pop(2)
0x2ce: Pop(0); Push((bool) Stack[-1] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: GOTO 0x2d4

0x2d1: Push((int) 1)
0x2d2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2d3: GOTO 0x2c7

0x2d4: Stack[-2] = Stack[-5]
0x2d5: Return(); Pop(4)

0x2d6: Stack[-1] = (int) 515571
0x2d7: Return(); Pop(0)

0x2d8: Stack[-1] = (int) 504029
0x2d9: Return(); Pop(0)

0x2da: Stack[-1] = "ui/NPC_bmask.png" // @poff=266
0x2db: Return(); Pop(0)

0x2dc: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=300
0x2dd: Return(); Pop(0)

0x2de: Stack[-1] = (bool) 0
0x2df: Return(); Pop(0)

0x2e0: PushEmpty()
0x2e1: PushEmpty(bool, string, string)
0x2e2: Stack[-2] = "quest_k12_01" // @poff=338
0x2e3: Stack[-1] = "init_sobor" // @poff=364
0x2e4: Call2 0x2aa

0x2e5: Pop(3)
0x2e6: Return(); Pop(0)

0x2e7: PushEmpty()
0x2e8: Push("ook12BirdmaskS1") // @poff=386
0x2e9: Push((int) 1)
0x2ea: @ SetVariable(Stack[-2], Stack[-1])
0x2eb: Pop(2)
0x2ec: Return(); Pop(0)

0x2ed: PushEmpty()
0x2ee: PushEmpty(string, bool)
0x2ef: Stack[-2] = "sobor@door1" // @poff=418
0x2f0: Stack[-1] = (bool) 0
0x2f1: Call2 0x299

0x2f2: Pop(2)
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty()
0x2f5: PushEmpty(bool, object)
0x2f6: Stack[-3] = Stack[-1]
0x2f7: Call2 0x314

0x2f8: Pop(1)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-2] = (bool) 1
0x2fb: Return(); Pop(0)

0x2fc: Stack[-2] = (bool) 0
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty()
0x2ff: PushEmpty(bool, object)
0x300: Stack[-3] = Stack[-1]
0x301: Call2 0x31a

0x302: Pop(1)
0x303: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x304: Stack[-2] = (bool) 1
0x305: Return(); Pop(0)

0x306: Stack[-2] = (bool) 0
0x307: Return(); Pop(0)

0x308: PushEmpty()
0x309: PushEmpty(int, string)
0x30a: Stack[-1] = "ook12BirdmaskS1" // @poff=386
0x30b: Call2 0x294

0x30c: Pop(1)
0x30d: Push((int) 0)
0x30e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x310: Stack[-2] = (bool) 1
0x311: Return(); Pop(0)

0x312: Stack[-2] = (bool) 0
0x313: Return(); Pop(0)

0x314: PushEmpty()
0x315: PushEmpty(bool)
0x316: Call2 0x36a

0x317: Stack[-1] = Stack[-3]
0x318: Pop(1)
0x319: Return(); Pop(0)

0x31a: PushEmpty()
0x31b: PushEmpty(int)
0x31c: Call2 0x2b6

0x31d: Pop(0)
0x31e: Push((int) 19)
0x31f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x321: Stack[-2] = (bool) 1
0x322: Return(); Pop(0)

0x323: Stack[-2] = (bool) 0
0x324: Return(); Pop(0)

0x325: PushEmpty(int, int)
0x326: Push("branch") // @poff=442
0x327: @ GetVariable(Stack[-1], Stack[-2])
0x328: Pop(1)
0x329: Push((int) 0)
0x32a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32c: Stack[-3] = (int) 1
0x32d: Return(); Pop(2)

0x32e: GOTO 0x334

0x32f: Push((int) 1)
0x330: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x332: Stack[-3] = (int) 2
0x333: Return(); Pop(2)

0x334: Stack[-3] = (int) 3
0x335: Return(); Pop(2)

0x336: PushEmpty()
0x337: Push((int) 7)
0x338: @@ add(Stack[-1]); Obj=4 // @poff=456
0x339: Pop(1)
0x33a: Push((int) 23)
0x33b: @@ add(Stack[-1]); Obj=4 // @poff=456
0x33c: Pop(1)
0x33d: Push((int) 21)
0x33e: @@ add(Stack[-1]); Obj=4 // @poff=456
0x33f: Pop(1)
0x340: Push((int) 9)
0x341: @@ add(Stack[-1]); Obj=4 // @poff=456
0x342: Pop(1)
0x343: Push((int) 3)
0x344: @@ add(Stack[-1]); Obj=4 // @poff=456
0x345: Pop(1)
0x346: Push((int) 1)
0x347: @@ add(Stack[-1]); Obj=4 // @poff=456
0x348: Pop(1)
0x349: Push((int) 11)
0x34a: @@ add(Stack[-1]); Obj=4 // @poff=456
0x34b: Pop(1)
0x34c: Push((int) 13)
0x34d: @@ add(Stack[-1]); Obj=4 // @poff=456
0x34e: Pop(1)
0x34f: Push((bool) 0)
0x350: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x352: Push((int) 25)
0x353: @@ add(Stack[-1]); Obj=4 // @poff=456
0x354: Pop(1)
0x355: Return(); Pop(0)

0x356: PushEmpty(int, int)
0x357: Push("vol_") // @poff=460
0x358: Pop(1); Push(Stack[-1] + Stack[-4]);
0x359: @ GetVariable(Stack[-1], Stack[-2])
0x35a: Pop(1)
0x35b: Push((int) 4)
0x35c: Pop(1); Push(Stack[-2] & Stack[-1]);
0x35d: Push((int) 0)
0x35e: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x35f: Return(); Pop(2)

0x360: PushEmpty(int, int)
0x361: Push("vol_") // @poff=460
0x362: Pop(1); Push(Stack[-1] + Stack[-4]);
0x363: @ GetVariable(Stack[-1], Stack[-2])
0x364: Pop(1)
0x365: Push((int) 16)
0x366: Pop(1); Push(Stack[-2] & Stack[-1]);
0x367: Push((int) 0)
0x368: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x369: Return(); Pop(2)

0x36a: PushEmpty(object, int, int, int, object, int, int, int)
0x36b: @ CreateIntVector(Stack[-4])
0x36c: Pop(0)
0x36d: PushEmpty(object, bool, int)
0x36e: Stack[-7] = Stack[-3]
0x36f: Stack[-2] = (bool) 0
0x370: Stack[-1] = (int) -1
0x371: Call2 0x336

0x372: Pop(3)
0x373: @@ size(Stack[-3]); Obj=4 // @poff=470
0x374: Pop(0)
0x375: Stack[-2] = (int) 0
0x376: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x377: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x378: @@ get(Stack[-1], Stack[-2]); Obj=4 // @poff=475
0x379: Pop(0)
0x37a: PushEmpty(bool)
0x37b: Stack[-1] = (bool) 1
0x37c: PushEmpty(bool, int)
0x37d: Stack[-4] = Stack[-1]
0x37e: Call2 0x360

0x37f: Pop(1)
0x380: IF (Stack[-1] == 1) GOTO 0x387; Pop(1)

0x381: PushEmpty(bool, int)
0x382: Stack[-4] = Stack[-1]
0x383: Call2 0x356

0x384: Pop(1)
0x385: IF (Stack[-1] == 1) GOTO 0x387; Pop(1)

0x386: Stack[-1] = (bool) 0
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-9] = (bool) 0
0x389: Return(); Pop(8)

0x38a: Push((int) 1)
0x38b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x38c: GOTO 0x376

0x38d: Stack[-9] = (bool) 1
0x38e: Return(); Pop(8)

0x38f: Stack[-4] = 0
