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
	W:day
	W:klara2_svita_positioner
	W:wonder
	W:wrong_wonder
	W:player
	W:head
	A:GetPosition
	A:GetEyesHeight
	W:AlbinosLate1
	W:bad_wonder
	W:Albinos1
	W:BadKlara
	W:branch
	W:K2S_Klara2Svita
	W:ui/NPC_Black.png
	W:ui/NPC_Black_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000064006100790000006b006c0061007200610032005f00730076006900740061005f0070006f0073006900740069006f006e0065007200000077006f006e006400650072000000770072006f006e0067005f0077006f006e00640065007200000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740041006c00620069006e006f0073004c00610074006500310000006200610064005f0077006f006e00640065007200000041006c00620069006e006f007300310000004200610064004b006c0061007200610000006200720061006e006300680000004b00320053005f004b006c006100720061003200530076006900740061000000750069002f004e00500043005f0042006c00610063006b002e0070006e0067000000750069002f004e00500043005f0042006c00610063006b005f0062002e0070006e0067000000
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
	GetProperty (2 args)
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetVariable (2 args)
	SetVariable (2 args)

RunOp = 0x2e2
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1cd Vars = (int, int)
	GTASK_4 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x2ec Vars = (object)
		EVENT_7 Op = 0x342 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3ca

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4f2

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4f0

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4f4

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4f6

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4c8

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
0x41: Call2 0x40e

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
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x8e

0x53: Pop(1)
0x54: Push((int) 538595)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x495

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 538598)
0x5f: Push((int) 40487)
0x60: Push((int) 40486)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 538596)
0x64: Push((int) -1)
0x65: Push((int) 40484)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: Push((int) 538597)
0x69: Push((int) -1)
0x6a: Push((int) 40485)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x4f8

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x41f

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all") // @poff=138
0x80: Push("idle") // @poff=146
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all") // @poff=138
0x89: Push("idle") // @poff=146
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x4f8

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-3] = Stack[-2]
0x9a: Push("") // @poff=102
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x426

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x437

0xa9: Pop(0)
0xaa: Push((int) 40486)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x475

0xb1: Pop(2)
0xb2: Push((int) 40483)
0xb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xb5: PushEmpty(string)
0xb6: Stack[-1] = "Neutral" // @poff=89
0xb7: Call2 0x8e

0xb8: Pop(1)
0xb9: Push((int) 538595)
0xba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbb: Pop(1)
0xbc: @@@ ClearReplies(); Obj=0 // @poff=116
0xbd: Pop(0)
0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call2 0x495

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: Push((int) 538598)
0xc4: Push((int) 40487)
0xc5: Push((int) 40486)
0xc6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc7: Pop(3)
0xc8: Push((int) 538596)
0xc9: Push((int) -1)
0xca: Push((int) 40484)
0xcb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcc: Pop(3)
0xcd: Push((int) 538597)
0xce: Push((int) -1)
0xcf: Push((int) 40485)
0xd0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: Push((int) 40487)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral" // @poff=89
0xd8: Call2 0x8e

0xd9: Pop(1)
0xda: Push((int) 538599)
0xdb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xdc: Pop(1)
0xdd: @@@ ClearReplies(); Obj=0 // @poff=116
0xde: Pop(0)
0xdf: Push((int) 538600)
0xe0: Push((int) -1)
0xe1: Push((int) 40488)
0xe2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe3: Pop(3)
0xe4: Push((int) 538601)
0xe5: Push((int) -1)
0xe6: Push((int) 40489)
0xe7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xeb: PushEmpty(bool)
0xec: Call2 0x4f8

0xed: Pop(0)
0xee: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xef: @ lshStopAnimation()
0xf0: Pop(0)
0xf1: GOTO 0xf4

0xf2: @ StopAnimation()
0xf3: Pop(0)
0xf4: Return(); Pop(0)

0xf5: GOTO 0xa5

0xf6: Return(); Pop(0)

0xf7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf9: PushEmpty(bool, object, float)
0xfa: Stack[-12] = Stack[-2]
0xfb: Stack[-1] = (float) 70.0
0xfc: Call2 0x3ca

0xfd: Pop(2)
0xfe: Pop(1); Push((bool) Stack[-1] == 0)
0xff: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0x100: Stack[-10] = (int) -2
0x101: Return(); Pop(8)

0x102: @ CreateDialog(Stack[-4])
0x103: Pop(0)
0x104: PushEmpty(int)
0x105: Call2 0x4f2

0x106: Pop(0)
0x107: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x108: Pop(1)
0x109: PushEmpty(int)
0x10a: Call2 0x4f0

0x10b: Pop(0)
0x10c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x10d: Pop(1)
0x10e: PushEmpty(string)
0x10f: Call2 0x4f4

0x110: Pop(0)
0x111: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x112: Pop(1)
0x113: PushEmpty(string)
0x114: Call2 0x4f6

0x115: Pop(0)
0x116: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x117: Pop(1)
0x118: PushEmpty(int)
0x119: Call2 0x4c8

0x11a: Pop(0)
0x11b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x11c: Pop(1)
0x11d: Stack[-2] = (int) -1
0x11e: @ IsOverrideActive(Stack[-3])
0x11f: Pop(0)
0x120: Push(Stack[-3])
0x121: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x122: Stack[-10] = (int) -2
0x123: Return(); Pop(8)

0x124: @ DoDialog(Stack[-4])
0x125: Pop(0)
0x126: PushEmpty(object, object)
0x127: Stack[-11] = Stack[-2]
0x128: Stack[-6] = Stack[-1]
0x129: Push(-2, 4); TaskCall(3)
0x12a: Call2 0x141

0x12b: Pop(-2, 4); TaskReturn
0x12c: Pop(2)
0x12d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x12e: Pop(0)
0x12f: Pop(0); Push((bool) Stack[-1] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x131: @ sync()
0x132: Pop(0)
0x133: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x134: Pop(0)
0x135: GOTO 0x12f

0x136: PushEmpty(object)
0x137: Stack[-10] = Stack[-1]
0x138: Call2 0x40e

0x139: Pop(1)
0x13a: @ StopDialog(Stack[-4])
0x13b: Pop(0)
0x13c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x13d: Pop(0)
0x13e: Stack[-2] = Stack[-10]
0x13f: Return(); Pop(8)

0x140: Stack[-4] = 0
0x141: PushEmpty()
0x142: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x143: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x144: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x145: Push((int) 1)
0x146: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x147: PushEmpty(bool, object)
0x148: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x149: Call2 0x49f

0x14a: Pop(1)
0x14b: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x14c: PushEmpty(object, object)
0x14d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14f: Call2 0x489

0x150: Pop(2)
0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral" // @poff=89
0x153: Call2 0x1b7

0x154: Pop(1)
0x155: Push((int) 538603)
0x156: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x157: Pop(1)
0x158: @@@ ClearReplies(); Obj=0 // @poff=116
0x159: Pop(0)
0x15a: Push((int) 538604)
0x15b: Push((int) 40494)
0x15c: Push((int) 40492)
0x15d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15e: Pop(3)
0x15f: Push((int) 538605)
0x160: Push((int) 40496)
0x161: Push((int) 40493)
0x162: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x163: Pop(3)
0x164: Push((int) 538621)
0x165: Push((int) -1)
0x166: Push((int) 40512)
0x167: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x168: Pop(3)
0x169: GOTO 0x199

0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0x4a9

0x16d: Pop(1)
0x16e: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Neutral" // @poff=89
0x171: Call2 0x1b7

0x172: Pop(1)
0x173: Push((int) 538622)
0x174: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x175: Pop(1)
0x176: @@@ ClearReplies(); Obj=0 // @poff=116
0x177: Pop(0)
0x178: Push((int) 538623)
0x179: Push((int) -1)
0x17a: Push((int) 40514)
0x17b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17c: Pop(3)
0x17d: Push((int) 538624)
0x17e: Push((int) -1)
0x17f: Push((int) 40515)
0x180: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x181: Pop(3)
0x182: GOTO 0x199

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral" // @poff=89
0x185: Call2 0x1b7

0x186: Pop(1)
0x187: Push((int) 538625)
0x188: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x189: Pop(1)
0x18a: @@@ ClearReplies(); Obj=0 // @poff=116
0x18b: Pop(0)
0x18c: Push((int) 538626)
0x18d: Push((int) 40519)
0x18e: Push((int) 40517)
0x18f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x190: Pop(3)
0x191: Push((int) 538627)
0x192: Push((int) -1)
0x193: Push((int) 40518)
0x194: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x195: Pop(3)
0x196: GOTO 0x199

0x197: Return(); Pop(0)

0x198: GOTO 0x145

0x199: PushEmpty(bool)
0x19a: Call2 0x4f8

0x19b: Pop(0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x19d: @ lshWaitForAnimEnd()
0x19e: Pop(0)
0x19f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: GOTO 0x1a7

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1a4: Call2 0x41f

0x1a5: Pop(1)
0x1a6: GOTO 0x19d

0x1a7: GOTO 0x1b6

0x1a8: Push("all") // @poff=138
0x1a9: Push("idle") // @poff=146
0x1aa: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ab: Pop(2)
0x1ac: @ WaitForAnimEnd()
0x1ad: Pop(0)
0x1ae: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: GOTO 0x1b6

0x1b1: Push("all") // @poff=138
0x1b2: Push("idle") // @poff=146
0x1b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b4: Pop(2)
0x1b5: GOTO 0x1ac

0x1b6: Return(); Pop(0)

0x1b7: PushEmpty()
0x1b8: PushEmpty(bool)
0x1b9: Call2 0x4f8

0x1ba: Pop(0)
0x1bb: Pop(1); Push((bool) Stack[-1] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bd: Return(); Pop(0)

0x1be: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Return(); Pop(0)

0x1c1: PushEmpty(string, bool)
0x1c2: Stack[-3] = Stack[-2]
0x1c3: Push("") // @poff=102
0x1c4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c6: Stack[-1] = (bool) 0
0x1c7: GOTO 0x1c9

0x1c8: Stack[-1] = (bool) 1
0x1c9: Call2 0x426

0x1ca: Pop(2)
0x1cb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1cc: Return(); Pop(0)

0x1cd: PushEmpty()
0x1ce: Push((int) 1)
0x1cf: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x1d0: PushEmpty()
0x1d1: Call2 0x437

0x1d2: Pop(0)
0x1d3: Push((int) 40508)
0x1d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d6: PushEmpty(object, object)
0x1d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d9: Call2 0x482

0x1da: Pop(2)
0x1db: PushEmpty(object, object)
0x1dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1de: Call2 0x48f

0x1df: Pop(2)
0x1e0: Push((int) 40511)
0x1e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e3: PushEmpty(object, object)
0x1e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e6: Call2 0x48f

0x1e7: Pop(2)
0x1e8: Push((int) 40507)
0x1e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1eb: PushEmpty(object, object)
0x1ec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ee: Call2 0x47b

0x1ef: Pop(2)
0x1f0: Push((int) 40510)
0x1f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f3: PushEmpty(object, object)
0x1f4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f6: Call2 0x48f

0x1f7: Pop(2)
0x1f8: Push((int) 40491)
0x1f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x1fb: PushEmpty(bool, object)
0x1fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fd: Call2 0x49f

0x1fe: Pop(1)
0x1ff: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x200: PushEmpty(object, object)
0x201: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x202: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x203: Call2 0x489

0x204: Pop(2)
0x205: PushEmpty(string)
0x206: Stack[-1] = "Neutral" // @poff=89
0x207: Call2 0x1b7

0x208: Pop(1)
0x209: Push((int) 538603)
0x20a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20b: Pop(1)
0x20c: @@@ ClearReplies(); Obj=0 // @poff=116
0x20d: Pop(0)
0x20e: Push((int) 538604)
0x20f: Push((int) 40494)
0x210: Push((int) 40492)
0x211: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x212: Pop(3)
0x213: Push((int) 538605)
0x214: Push((int) 40496)
0x215: Push((int) 40493)
0x216: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x217: Pop(3)
0x218: Push((int) 538621)
0x219: Push((int) -1)
0x21a: Push((int) 40512)
0x21b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: PushEmpty(bool, object)
0x21f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x220: Call2 0x4a9

0x221: Pop(1)
0x222: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x223: PushEmpty(string)
0x224: Stack[-1] = "Neutral" // @poff=89
0x225: Call2 0x1b7

0x226: Pop(1)
0x227: Push((int) 538622)
0x228: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x229: Pop(1)
0x22a: @@@ ClearReplies(); Obj=0 // @poff=116
0x22b: Pop(0)
0x22c: Push((int) 538623)
0x22d: Push((int) -1)
0x22e: Push((int) 40514)
0x22f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x230: Pop(3)
0x231: Push((int) 538624)
0x232: Push((int) -1)
0x233: Push((int) 40515)
0x234: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x235: Pop(3)
0x236: Return(); Pop(0)

0x237: PushEmpty(string)
0x238: Stack[-1] = "Neutral" // @poff=89
0x239: Call2 0x1b7

0x23a: Pop(1)
0x23b: Push((int) 538625)
0x23c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x23d: Pop(1)
0x23e: @@@ ClearReplies(); Obj=0 // @poff=116
0x23f: Pop(0)
0x240: Push((int) 538626)
0x241: Push((int) 40519)
0x242: Push((int) 40517)
0x243: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x244: Pop(3)
0x245: Push((int) 538627)
0x246: Push((int) -1)
0x247: Push((int) 40518)
0x248: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x249: Pop(3)
0x24a: Return(); Pop(0)

0x24b: Push((int) 40519)
0x24c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Neutral" // @poff=89
0x250: Call2 0x1b7

0x251: Pop(1)
0x252: Push((int) 538628)
0x253: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x254: Pop(1)
0x255: @@@ ClearReplies(); Obj=0 // @poff=116
0x256: Pop(0)
0x257: Push((int) 538629)
0x258: Push((int) -1)
0x259: Push((int) 40520)
0x25a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25b: Pop(3)
0x25c: Push((int) 538630)
0x25d: Push((int) -1)
0x25e: Push((int) 40521)
0x25f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x260: Pop(3)
0x261: Return(); Pop(0)

0x262: Push((int) 40496)
0x263: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x265: PushEmpty(string)
0x266: Stack[-1] = "Neutral" // @poff=89
0x267: Call2 0x1b7

0x268: Pop(1)
0x269: Push((int) 538608)
0x26a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x26b: Pop(1)
0x26c: @@@ ClearReplies(); Obj=0 // @poff=116
0x26d: Pop(0)
0x26e: Push((int) 538609)
0x26f: Push((int) 40501)
0x270: Push((int) 40497)
0x271: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x272: Pop(3)
0x273: Push((int) 538611)
0x274: Push((int) 40500)
0x275: Push((int) 40499)
0x276: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x277: Pop(3)
0x278: Return(); Pop(0)

0x279: Push((int) 40500)
0x27a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x27c: PushEmpty(string)
0x27d: Stack[-1] = "Neutral" // @poff=89
0x27e: Call2 0x1b7

0x27f: Pop(1)
0x280: Push((int) 538612)
0x281: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x282: Pop(1)
0x283: @@@ ClearReplies(); Obj=0 // @poff=116
0x284: Pop(0)
0x285: Push((int) 538614)
0x286: Push((int) 40498)
0x287: Push((int) 40502)
0x288: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x289: Pop(3)
0x28a: Push((int) 538615)
0x28b: Push((int) 40501)
0x28c: Push((int) 40503)
0x28d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28e: Pop(3)
0x28f: Return(); Pop(0)

0x290: Push((int) 40501)
0x291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x293: PushEmpty(string)
0x294: Stack[-1] = "Neutral" // @poff=89
0x295: Call2 0x1b7

0x296: Pop(1)
0x297: Push((int) 538613)
0x298: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x299: Pop(1)
0x29a: @@@ ClearReplies(); Obj=0 // @poff=116
0x29b: Pop(0)
0x29c: Push((int) 538617)
0x29d: Push((int) -1)
0x29e: Push((int) 40507)
0x29f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a0: Pop(3)
0x2a1: Push((int) 538619)
0x2a2: Push((int) -1)
0x2a3: Push((int) 40510)
0x2a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a5: Pop(3)
0x2a6: Return(); Pop(0)

0x2a7: Push((int) 40494)
0x2a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2aa: PushEmpty(string)
0x2ab: Stack[-1] = "Neutral" // @poff=89
0x2ac: Call2 0x1b7

0x2ad: Pop(1)
0x2ae: Push((int) 538606)
0x2af: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b0: Pop(1)
0x2b1: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b2: Pop(0)
0x2b3: Push((int) 538607)
0x2b4: Push((int) 40498)
0x2b5: Push((int) 40495)
0x2b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b7: Pop(3)
0x2b8: Push((int) 538616)
0x2b9: Push((int) 40500)
0x2ba: Push((int) 40505)
0x2bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2bc: Pop(3)
0x2bd: Return(); Pop(0)

0x2be: Push((int) 40498)
0x2bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = "Neutral" // @poff=89
0x2c3: Call2 0x1b7

0x2c4: Pop(1)
0x2c5: Push((int) 538610)
0x2c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c7: Pop(1)
0x2c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c9: Pop(0)
0x2ca: Push((int) 538618)
0x2cb: Push((int) -1)
0x2cc: Push((int) 40508)
0x2cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ce: Pop(3)
0x2cf: Push((int) 538620)
0x2d0: Push((int) -1)
0x2d1: Push((int) 40511)
0x2d2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d3: Pop(3)
0x2d4: Return(); Pop(0)

0x2d5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2d6: PushEmpty(bool)
0x2d7: Call2 0x4f8

0x2d8: Pop(0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2da: @ lshStopAnimation()
0x2db: Pop(0)
0x2dc: GOTO 0x2df

0x2dd: @ StopAnimation()
0x2de: Pop(0)
0x2df: Return(); Pop(0)

0x2e0: GOTO 0x1ce

0x2e1: Return(); Pop(0)

0x2e2: Push((int) 1)
0x2e3: @ Sleep(Stack[-1])
0x2e4: Pop(1)
0x2e5: PushEmpty(float, float)
0x2e6: Stack[-2] = (int) 300
0x2e7: Stack[-1] = (int) 100
0x2e8: Call2 0x318

0x2e9: Pop(2)
0x2ea: GOTO 0x2e2

0x2eb: Return(); Pop(0)

0x2ec: PushEmpty(int, int, int, int)
0x2ed: PushEmpty()
0x2ee: Call2 0x359

0x2ef: Pop(0)
0x2f0: Push("day") // @poff=156
0x2f1: @ GetProperty(Stack[-1], Stack[-3])
0x2f2: Pop(1)
0x2f3: PushEmpty(int)
0x2f4: Call2 0x454

0x2f5: Pop(0)
0x2f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x2f8: PushEmpty(int, object)
0x2f9: Stack[-7] = Stack[-1]
0x2fa: Push(-2, 1); TaskCall(2)
0x2fb: Call2 0xf7

0x2fc: Pop(-2, 1); TaskReturn
0x2fd: Stack[-2] = Stack[-3]
0x2fe: Pop(2)
0x2ff: Push((int) 1)
0x300: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x302: PushEmpty(bool, string, string)
0x303: Stack[-2] = "klara2_svita_positioner" // @poff=164
0x304: Stack[-1] = "wonder" // @poff=212
0x305: Call2 0x448

0x306: Pop(3)
0x307: GOTO 0x310

0x308: Push((int) 2)
0x309: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30b: PushEmpty(bool, string, string)
0x30c: Stack[-2] = "klara2_svita_positioner" // @poff=164
0x30d: Stack[-1] = "wrong_wonder" // @poff=226
0x30e: Call2 0x448

0x30f: Pop(3)
0x310: GOTO 0x317

0x311: PushEmpty(int, object)
0x312: Stack[-7] = Stack[-1]
0x313: Push(-2, 1); TaskCall(0)
0x314: Call2 0x0

0x315: Pop(-2, 1); TaskReturn
0x316: Pop(2)
0x317: Return(); Pop(4)

0x318: PushEmpty()
0x319: PushEmpty(bool)
0x31a: Call2 0x3c5

0x31b: Pop(0)
0x31c: Pop(1); Push((bool) Stack[-1] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: Return(); Pop(0)

0x31f: Push("player") // @poff=252
0x320: @ FindActor(Stack[-4]T, Stack[-1])
0x321: Pop(1)
0x322: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x323: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x324: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x325: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x326: Push((int) 10)
0x327: Push((float)1.0)
0x328: @ SetTimer(Stack[-2], Stack[-1])
0x329: Pop(2)
0x32a: PushEmpty()
0x32b: Call2 0x367

0x32c: Pop(0)
0x32d: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32f: Push((int) 10)
0x330: @ KillTimer(Stack[-1])
0x331: Pop(1)
0x332: Return(); Pop(0)

0x333: PushEmpty(float, float)
0x334: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x336: Stack[-3] = (bool) 0
0x337: Return(); Pop(2)

0x338: PushEmpty(float, object)
0x339: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x33a: Call2 0x3bd

0x33b: Pop(1)
0x33c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x33d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x340: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x341: Return(); Pop(2)

0x342: PushEmpty()
0x343: Push((int) 10)
0x344: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x346: PushEmpty(bool)
0x347: Call2 0x333

0x348: Pop(0)
0x349: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34c: PushEmpty(object)
0x34d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x34e: Call2 0x42c

0x34f: Pop(1)
0x350: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x351: GOTO 0x358

0x352: Push( Stack[2 + Tasks[-1].StackPointer] )
0x353: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x354: Push("head") // @poff=266
0x355: @ UnlookAsync(Stack[-1])
0x356: Pop(1)
0x357: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x358: Return(); Pop(0)

0x359: PushEmpty()
0x35a: Call2 0x3b8

0x35b: Pop(0)
0x35c: Push((int) 10)
0x35d: @ KillTimer(Stack[-1])
0x35e: Pop(1)
0x35f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x360: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x361: Push("head") // @poff=266
0x362: @ UnlookAsync(Stack[-1])
0x363: Pop(1)
0x364: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x365: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x366: Return(); Pop(0)

0x367: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x368: @ WaitForAnimEnd()
0x369: Pop(0)
0x36a: PushEmpty(bool)
0x36b: Call2 0x3c5

0x36c: Pop(0)
0x36d: Pop(1); Push((bool) Stack[-1] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: Return(); Pop(14)

0x370: PushEmpty(int)
0x371: Call2 0x464

0x372: Stack[-1] = Stack[-8]
0x373: Pop(1)
0x374: Stack[-6] = (int) 0
0x375: PushEmpty(bool)
0x376: Stack[-1] = (bool) 0
0x377: Push((int) 5)
0x378: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37a: PushEmpty(bool)
0x37b: Call2 0x3c5

0x37c: Pop(0)
0x37d: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37e: Stack[-1] = (bool) 1
0x37f: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x380: Push((int) 3)
0x381: @ irand(Stack[-6], Stack[-1])
0x382: Pop(1)
0x383: Push((int) 0)
0x384: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x386: Push(Stack[-7])
0x387: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x388: @ irand(Stack[-4], Stack[-7])
0x389: Pop(0)
0x38a: Push("all") // @poff=138
0x38b: PushEmpty(string, int)
0x38c: Stack[-7] = Stack[-1]
0x38d: Call2 0x45d

0x38e: Pop(1)
0x38f: @ PlayAnimation(Stack[-2], Stack[-1])
0x390: Pop(2)
0x391: @ WaitForAnimEnd(Stack[-3])
0x392: Pop(0)
0x393: Pop(0); Push((bool) Stack[-3] == 0)
0x394: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x395: GOTO 0x3b3

0x396: GOTO 0x3a8

0x397: Push((int) 1)
0x398: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39a: Push((int) 4)
0x39b: @ rand(Stack[-3], Stack[-1])
0x39c: Pop(1)
0x39d: Push((int) 1)
0x39e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x39f: @ Sleep(Stack[-1], Stack[-2])
0x3a0: Pop(1)
0x3a1: Pop(0); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: GOTO 0x3b3

0x3a4: GOTO 0x3a8

0x3a5: Push(Stack[-6])
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a7: GOTO 0x3b3

0x3a8: PushEmpty(bool)
0x3a9: Call2 0x3b6

0x3aa: Pop(0)
0x3ab: Pop(1); Push((bool) Stack[-1] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ad: GOTO 0x3b3

0x3ae: @ ResetAAS()
0x3af: Pop(0)
0x3b0: Push((int) 1)
0x3b1: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x3b2: GOTO 0x375

0x3b3: @ ResetAAS()
0x3b4: Pop(0)
0x3b5: Return(); Pop(14)

0x3b6: Stack[-1] = (bool) 1
0x3b7: Return(); Pop(0)

0x3b8: @ StopAnimation()
0x3b9: Pop(0)
0x3ba: @ StopGroup0()
0x3bb: Pop(0)
0x3bc: Return(); Pop(0)

0x3bd: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3be: @ GetPosition(Stack[-3])
0x3bf: Pop(0)
0x3c0: @@ GetPosition(Stack[-2]); Obj=7 // @poff=276
0x3c1: Pop(0)
0x3c2: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3c3: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3c4: Return(); Pop(6)

0x3c5: PushEmpty(bool, bool)
0x3c6: @ IsLoaded(Stack[-1])
0x3c7: Pop(0)
0x3c8: Stack[-1] = Stack[-3]
0x3c9: Return(); Pop(2)

0x3ca: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3cb: @@ GetPosition(Stack[-8]); Obj=20 // @poff=276
0x3cc: Pop(0)
0x3cd: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=288
0x3ce: Pop(0)
0x3cf: Push(CvectorIndex(Stack[-8], 1))
0x3d0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3d1: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3d2: @ GetPosition(Stack[-7])
0x3d3: Pop(0)
0x3d4: @ GetEyesHeight(Stack[-9])
0x3d5: Pop(0)
0x3d6: Push(CvectorIndex(Stack[-7], 1))
0x3d7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3d8: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3d9: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3da: Push(CvectorIndex(Stack[-6], 1))
0x3db: Stack[-1] = (int) 0
0x3dc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3dd: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3de: Pop(1); Push(Sqrt(Stack[-1]))
0x3df: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3e0: Stack[-5] = -Stack[-6]; Pop(0);
0x3e1: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3e2: PushEmpty(cvector, cvector)
0x3e3: Push([0.0, 1.0, 0.0])
0x3e4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3e5: Call2 0x43e

0x3e6: Pop(1)
0x3e7: Push((int) 25)
0x3e8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3e9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ea: Push([0.0, 10.0, 0.0])
0x3eb: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3ec: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3ed: @ IsOverrideActive(Stack[-2])
0x3ee: Pop(0)
0x3ef: Push(Stack[-2])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: Stack[-21] = (bool) 0
0x3f2: Return(); Pop(18)

0x3f3: @ StopWorld()
0x3f4: Pop(0)
0x3f5: @ CameraTransit(Stack[-3], Stack[-5])
0x3f6: Pop(0)
0x3f7: Push(CvectorIndex(Stack[-4], 0))
0x3f8: Push(CvectorIndex(Stack[-5], 2))
0x3f9: @ Rotate(Stack[-2], Stack[-1])
0x3fa: Pop(2)
0x3fb: PushEmpty(bool)
0x3fc: Call2 0x4f8

0x3fd: Pop(0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ff: GOTO 0x408

0x400: Push("head") // @poff=266
0x401: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x402: Pop(1)
0x403: Push(Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x405: Push("head") // @poff=266
0x406: @ LookAsyncCamera(Stack[-1])
0x407: Pop(1)
0x408: @ CameraWaitForPlayFinish()
0x409: Pop(0)
0x40a: @ ResumeWorld()
0x40b: Pop(0)
0x40c: Stack[-21] = (bool) 1
0x40d: Return(); Pop(18)

0x40e: PushEmpty(bool, bool)
0x40f: @ CameraSwitchToNormal()
0x410: Pop(0)
0x411: PushEmpty(bool)
0x412: Call2 0x4f8

0x413: Pop(0)
0x414: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x415: GOTO 0x41e

0x416: Push("head") // @poff=266
0x417: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x418: Pop(1)
0x419: Push(Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41b: Push("head") // @poff=266
0x41c: @ UnlookAsync(Stack[-1])
0x41d: Pop(1)
0x41e: Return(); Pop(2)

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

0x42c: PushEmpty(float, cvector, float, cvector)
0x42d: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=288
0x42e: Pop(0)
0x42f: Stack[-1] = [0.0, 0.0, 0.0]
0x430: Push(CvectorIndex(Stack[-1], 1))
0x431: Stack[-3] = Stack[-1]
0x432: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x433: Push("head") // @poff=266
0x434: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x435: Pop(1)
0x436: Return(); Pop(4)

0x437: PushEmpty(bool)
0x438: Call2 0x4f8

0x439: Pop(0)
0x43a: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43b: @ lshStopSpeech()
0x43c: Pop(0)
0x43d: Return(); Pop(0)

0x43e: PushEmpty(float, float)
0x43f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x440: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x441: Push((float)9.999999974752427e-07)
0x442: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x444: Stack[-4] = [0.0, 0.0, 0.0]
0x445: Return(); Pop(2)

0x446: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x447: Return(); Pop(2)

0x448: PushEmpty(object, object)
0x449: @ FindActor(Stack[-1], Stack[-4])
0x44a: Pop(0)
0x44b: Pop(0); PushNull((bool) Stack[-1] == 0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: Stack[-5] = (bool) 0
0x44e: Return(); Pop(2)

0x44f: @ Trigger(Stack[-1], Stack[-3])
0x450: Pop(0)
0x451: Stack[-5] = (bool) 1
0x452: Return(); Pop(2)

0x453: Stack[-1] = 0
0x454: PushEmpty(float, float)
0x455: @ GetGameTime(Stack[-1])
0x456: Pop(0)
0x457: Push((int) 1)
0x458: PushEmpty(int)
0x459: Push((int) 24)
0x45a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x45b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x45c: Return(); Pop(2)

0x45d: PushEmpty(string, string)
0x45e: Stack[-1] = "idle" // @poff=146
0x45f: Push(Stack[-3])
0x460: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x461: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x462: Stack[-1] = Stack[-4]
0x463: Return(); Pop(2)

0x464: PushEmpty(int, bool, int, bool)
0x465: Stack[-2] = (int) 0
0x466: Push("all") // @poff=138
0x467: PushEmpty(string, int)
0x468: Stack[-5] = Stack[-1]
0x469: Call2 0x45d

0x46a: Pop(1)
0x46b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x46c: Pop(2)
0x46d: Pop(0); Push((bool) Stack[-1] == 0)
0x46e: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46f: GOTO 0x473

0x470: Push((int) 1)
0x471: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x472: GOTO 0x466

0x473: Stack[-2] = Stack[-5]
0x474: Return(); Pop(4)

0x475: PushEmpty()
0x476: PushEmpty(string)
0x477: Stack[-1] = "AlbinosLate1" // @poff=302
0x478: Call2 0x4d9

0x479: Pop(1)
0x47a: Return(); Pop(0)

0x47b: PushEmpty()
0x47c: PushEmpty(bool, string, string)
0x47d: Stack[-2] = "klara2_svita_positioner" // @poff=164
0x47e: Stack[-1] = "wonder" // @poff=212
0x47f: Call2 0x448

0x480: Pop(3)
0x481: Return(); Pop(0)

0x482: PushEmpty()
0x483: PushEmpty(bool, string, string)
0x484: Stack[-2] = "klara2_svita_positioner" // @poff=164
0x485: Stack[-1] = "bad_wonder" // @poff=328
0x486: Call2 0x448

0x487: Pop(3)
0x488: Return(); Pop(0)

0x489: PushEmpty()
0x48a: PushEmpty(string)
0x48b: Stack[-1] = "Albinos1" // @poff=350
0x48c: Call2 0x4d9

0x48d: Pop(1)
0x48e: Return(); Pop(0)

0x48f: PushEmpty()
0x490: PushEmpty(string)
0x491: Stack[-1] = "BadKlara" // @poff=368
0x492: Call2 0x4d9

0x493: Pop(1)
0x494: Return(); Pop(0)

0x495: PushEmpty()
0x496: PushEmpty(bool, object)
0x497: Stack[-3] = Stack[-1]
0x498: Call2 0x4b3

0x499: Pop(1)
0x49a: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49b: Stack[-2] = (bool) 1
0x49c: Return(); Pop(0)

0x49d: Stack[-2] = (bool) 0
0x49e: Return(); Pop(0)

0x49f: PushEmpty()
0x4a0: PushEmpty(bool, object)
0x4a1: Stack[-3] = Stack[-1]
0x4a2: Call2 0x4ba

0x4a3: Pop(1)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: Stack[-2] = (bool) 1
0x4a6: Return(); Pop(0)

0x4a7: Stack[-2] = (bool) 0
0x4a8: Return(); Pop(0)

0x4a9: PushEmpty()
0x4aa: PushEmpty(bool, object)
0x4ab: Stack[-3] = Stack[-1]
0x4ac: Call2 0x4c1

0x4ad: Pop(1)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4af: Stack[-2] = (bool) 1
0x4b0: Return(); Pop(0)

0x4b1: Stack[-2] = (bool) 0
0x4b2: Return(); Pop(0)

0x4b3: PushEmpty()
0x4b4: PushEmpty(bool, string)
0x4b5: Stack[-1] = "AlbinosLate1" // @poff=302
0x4b6: Call2 0x4e4

0x4b7: Stack[-2] = Stack[-4]
0x4b8: Pop(2)
0x4b9: Return(); Pop(0)

0x4ba: PushEmpty()
0x4bb: PushEmpty(bool, string)
0x4bc: Stack[-1] = "Albinos1" // @poff=350
0x4bd: Call2 0x4e4

0x4be: Stack[-2] = Stack[-4]
0x4bf: Pop(2)
0x4c0: Return(); Pop(0)

0x4c1: PushEmpty()
0x4c2: PushEmpty(bool, string)
0x4c3: Stack[-1] = "BadKlara" // @poff=368
0x4c4: Call2 0x4e4

0x4c5: Pop(1)
0x4c6: Stack[-3] = !Stack[-1]; Pop(1);
0x4c7: Return(); Pop(0)

0x4c8: PushEmpty(int, int)
0x4c9: Push("branch") // @poff=386
0x4ca: @ GetVariable(Stack[-1], Stack[-2])
0x4cb: Pop(1)
0x4cc: Push((int) 0)
0x4cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4cf: Stack[-3] = (int) 1
0x4d0: Return(); Pop(2)

0x4d1: GOTO 0x4d7

0x4d2: Push((int) 1)
0x4d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: Stack[-3] = (int) 2
0x4d6: Return(); Pop(2)

0x4d7: Stack[-3] = (int) 3
0x4d8: Return(); Pop(2)

0x4d9: PushEmpty(int, int)
0x4da: Push("day") // @poff=156
0x4db: @ GetProperty(Stack[-1], Stack[-2])
0x4dc: Pop(1)
0x4dd: Push("K2S_Klara2Svita") // @poff=400
0x4de: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4df: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4e0: Push((int) 1)
0x4e1: @ SetVariable(Stack[-2], Stack[-1])
0x4e2: Pop(2)
0x4e3: Return(); Pop(2)

0x4e4: PushEmpty(int, int, int, int)
0x4e5: Push("day") // @poff=156
0x4e6: @ GetProperty(Stack[-1], Stack[-3])
0x4e7: Pop(1)
0x4e8: Push("K2S_Klara2Svita") // @poff=400
0x4e9: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4ea: Pop(1); Push(Stack[-1] + Stack[-3]);
0x4eb: @ GetVariable(Stack[-1], Stack[-2])
0x4ec: Pop(1)
0x4ed: Push((int) 0)
0x4ee: Stack[-7] = Stack[-2] == Stack[-1]; Pop(1);
0x4ef: Return(); Pop(4)

0x4f0: Stack[-1] = (int) 515595
0x4f1: Return(); Pop(0)

0x4f2: Stack[-1] = (int) 512611
0x4f3: Return(); Pop(0)

0x4f4: Stack[-1] = "ui/NPC_Black.png" // @poff=432
0x4f5: Return(); Pop(0)

0x4f6: Stack[-1] = "ui/NPC_Black_b.png" // @poff=466
0x4f7: Return(); Pop(0)

0x4f8: Stack[-1] = (bool) 0
0x4f9: Return(); Pop(0)

