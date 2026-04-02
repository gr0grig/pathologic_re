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
	W:branch
	W:ui/NPC_Bakalavr.png
	W:ui/NPC_Bakalavr_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006200720061006e00630068000000750069002f004e00500043005f00420061006b0061006c006100760072002e0070006e0067000000750069002f004e00500043005f00420061006b0061006c006100760072005f0062002e0070006e0067000000
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

RunOp = 0xd6
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0xda Vars = (string)
		EVENT_6 Op = 0xee Vars = ()
		EVENT_5 Op = 0xfb Vars = ()
		EVENT_7 Op = 0x14a Vars = (int)
		EVENT_45 Op = 0x18c Vars = (bool)
		EVENT_0 Op = 0x198 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x21c

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
0x11: Call2 0x323

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x276

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x221

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x367

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x365

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x369

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x36b

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x354

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
0x55: Call2 0x265

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
0x68: Push((int) 525332)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 525333)
0x6e: Push((int) -1)
0x6f: Push((int) 26701)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x62

0x75: PushEmpty(bool)
0x76: Call2 0x36d

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x300

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
0x95: Call2 0x36d

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
0xa5: Call2 0x307

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x31c

0xae: Pop(0)
0xaf: Push((int) 26700)
0xb0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb2: PushEmpty(string)
0xb3: Stack[-1] = "Neutral" // @poff=89
0xb4: Call2 0x93

0xb5: Pop(1)
0xb6: Push((int) 525332)
0xb7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb8: Pop(1)
0xb9: @@@ ClearReplies(); Obj=0 // @poff=116
0xba: Pop(0)
0xbb: Push((int) 525333)
0xbc: Push((int) -1)
0xbd: Push((int) 26701)
0xbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc2: PushEmpty(bool)
0xc3: Call2 0x36d

0xc4: Pop(0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc6: @ lshStopAnimation()
0xc7: Pop(0)
0xc8: GOTO 0xcb

0xc9: @ StopAnimation()
0xca: Pop(0)
0xcb: Return(); Pop(0)

0xcc: GOTO 0xaa

0xcd: Return(); Pop(0)

0xce: PushEmpty()
0xcf: PushEmpty(int, object)
0xd0: Stack[-3] = Stack[-1]
0xd1: Push(-2, 1); TaskCall(1)
0xd2: Call2 0xd

0xd3: Pop(-2, 1); TaskReturn
0xd4: Pop(2)
0xd5: Return(); Pop(0)

0xd6: PushEmpty()
0xd7: Call2 0xff

0xd8: Pop(0)
0xd9: Return(); Pop(0)

0xda: PushEmpty(bool, bool)
0xdb: Push("cleanup") // @poff=156
0xdc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xde: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xdf: @ IsLoaded(Stack[-1])
0xe0: Pop(0)
0xe1: Pop(0); Push((bool) Stack[-1] == 0)
0xe2: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe3: PushEmpty(object)
0xe4: Call2 0x323

0xe5: Pop(0)
0xe6: @ RemoveActor(Stack[-1])
0xe7: Pop(1)
0xe8: GOTO 0xed

0xe9: Push("restore") // @poff=172
0xea: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xed: Return(); Pop(2)

0xee: Push( Stack[1 + Tasks[-1].StackPointer] )
0xef: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf0: PushEmpty(object)
0xf1: Call2 0x323

0xf2: Pop(0)
0xf3: @ RemoveActor(Stack[-1])
0xf4: Pop(1)
0xf5: @ Hold()
0xf6: Pop(0)
0xf7: PushEmpty()
0xf8: Call2 0x170

0xf9: Pop(0)
0xfa: Return(); Pop(0)

0xfb: PushEmpty()
0xfc: Call2 0x17f

0xfd: Pop(0)
0xfe: Return(); Pop(0)

0xff: PushEmpty(bool)
0x100: Call2 0x21c

0x101: Pop(0)
0x102: Pop(1); Push((bool) Stack[-1] == 0)
0x103: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x104: PushEmpty()
0x105: Push(-0, 0); TaskCall(0)
0x106: Call2 0x0

0x107: Pop(-0, 0); TaskReturn
0x108: Pop(0)
0x109: PushEmpty()
0x10a: Call2 0xfb

0x10b: Pop(0)
0x10c: @ GetDirection(Stack[-0]T)
0x10d: Pop(0)
0x10e: PushEmpty()
0x10f: Call2 0x1b5

0x110: Pop(0)
0x111: GOTO 0x10e

0x112: Return(); Pop(0)

0x113: PushEmpty(object, object)
0x114: Push("player") // @poff=188
0x115: @ FindActor(Stack[-2], Stack[-1])
0x116: Pop(1)
0x117: Pop(0); Push((bool) Stack[-1] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x119: Stack[-3] = (bool) 0
0x11a: Return(); Pop(2)

0x11b: PushEmpty(bool, object)
0x11c: Stack[-3] = Stack[-1]
0x11d: Call2 0x213

0x11e: Stack[-2] = Stack[-5]
0x11f: Pop(2)
0x120: Return(); Pop(2)

0x121: Stack[-1] = 0
0x122: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x123: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x124: @ RotateAsync(Stack[-2], Stack[-1])
0x125: Pop(2)
0x126: Return(); Pop(0)

0x127: PushEmpty(object, bool, object, bool)
0x128: Push("player") // @poff=188
0x129: @ FindActor(Stack[-3], Stack[-1])
0x12a: Pop(1)
0x12b: Pop(0); Push((bool) Stack[-2] == 0)
0x12c: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12d: Stack[-5] = (bool) 0
0x12e: Return(); Pop(4)

0x12f: PushEmpty(float, object)
0x130: Stack[-4] = Stack[-1]
0x131: Call2 0x201

0x132: Pop(1)
0x133: Push((float)90000.0)
0x134: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x136: Stack[-5] = (bool) 0
0x137: Return(); Pop(4)

0x138: @ CanSee(Stack[-1], Stack[-2])
0x139: Pop(0)
0x13a: Stack[-1] = Stack[-5]
0x13b: Return(); Pop(4)

0x13c: Stack[-2] = 0
0x13d: PushEmpty(float, float)
0x13e: Push((int) 8)
0x13f: Push((int) 16)
0x140: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(2)
0x142: Push((int) 10)
0x143: @ SetTimer(Stack[-1], Stack[-2])
0x144: Pop(1)
0x145: Return(); Pop(2)

0x146: Push((int) 10)
0x147: @ KillTimer(Stack[-1])
0x148: Pop(1)
0x149: Return(); Pop(0)

0x14a: PushEmpty()
0x14b: Push((int) 10)
0x14c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x14e: PushEmpty()
0x14f: Call2 0x146

0x150: Pop(0)
0x151: PushEmpty(bool)
0x152: Stack[-1] = (bool) 0
0x153: PushEmpty(bool)
0x154: Call2 0x21c

0x155: Pop(0)
0x156: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x157: PushEmpty(bool)
0x158: Call2 0x127

0x159: Pop(0)
0x15a: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15b: Stack[-1] = (bool) 1
0x15c: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x15d: PushEmpty(bool)
0x15e: Call2 0x113

0x15f: Pop(0)
0x160: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x161: PushEmpty(bool, object)
0x162: PushEmpty(object)
0x163: Call2 0x323

0x164: Stack[-1] = Stack[-2]
0x165: Pop(1)
0x166: Call2 0x2b0

0x167: Pop(2)
0x168: GOTO 0x16f

0x169: PushEmpty()
0x16a: Call2 0x122

0x16b: Pop(0)
0x16c: PushEmpty()
0x16d: Call2 0x13d

0x16e: Pop(0)
0x16f: Return(); Pop(0)

0x170: PushEmpty()
0x171: Call2 0x1fc

0x172: Pop(0)
0x173: PushEmpty()
0x174: Call2 0x146

0x175: Pop(0)
0x176: @ lshStopSpeech()
0x177: Pop(0)
0x178: @ lshStopAnimation()
0x179: Pop(0)
0x17a: @ StopAsync()
0x17b: Pop(0)
0x17c: @ Hold()
0x17d: Pop(0)
0x17e: Return(); Pop(0)

0x17f: @ StopGroup0()
0x180: Pop(0)
0x181: PushEmpty()
0x182: Call2 0x146

0x183: Pop(0)
0x184: PushEmpty(string)
0x185: Stack[-1] = "Neutral" // @poff=89
0x186: Call2 0x300

0x187: Pop(1)
0x188: PushEmpty()
0x189: Call2 0x13d

0x18a: Pop(0)
0x18b: Return(); Pop(0)

0x18c: PushEmpty()
0x18d: Push(Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18f: PushEmpty()
0x190: Call2 0x13d

0x191: Pop(0)
0x192: GOTO 0x197

0x193: PushEmpty(string)
0x194: Stack[-1] = "Neutral" // @poff=89
0x195: Call2 0x300

0x196: Pop(1)
0x197: Return(); Pop(0)

0x198: PushEmpty(bool, bool)
0x199: @ IsOverrideActive(Stack[-1])
0x19a: Pop(0)
0x19b: Pop(0); Push((bool) Stack[-1] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x19d: EventDisable(0)
0x19e: PushEmpty()
0x19f: Call2 0x1fc

0x1a0: Pop(0)
0x1a1: PushEmpty(bool, object)
0x1a2: Stack[-5] = Stack[-1]
0x1a3: Call2 0x213

0x1a4: Pop(2)
0x1a5: EventEnable(0)
0x1a6: PushEmpty(object)
0x1a7: Stack[-4] = Stack[-1]
0x1a8: Call2 0xce

0x1a9: Pop(1)
0x1aa: PushEmpty(string)
0x1ab: Stack[-1] = "Neutral" // @poff=89
0x1ac: Call2 0x300

0x1ad: Pop(1)
0x1ae: PushEmpty()
0x1af: Call2 0x146

0x1b0: Pop(0)
0x1b1: PushEmpty()
0x1b2: Call2 0x13d

0x1b3: Pop(0)
0x1b4: Return(); Pop(2)

0x1b5: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x1b6: @ WaitForAnimEnd()
0x1b7: Pop(0)
0x1b8: PushEmpty(bool)
0x1b9: Call2 0x21c

0x1ba: Pop(0)
0x1bb: Pop(1); Push((bool) Stack[-1] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bd: Return(); Pop(12)

0x1be: PushEmpty(int)
0x1bf: Call2 0x343

0x1c0: Stack[-1] = Stack[-7]
0x1c1: Pop(1)
0x1c2: Stack[-5] = (int) 0
0x1c3: PushEmpty(bool)
0x1c4: Stack[-1] = (bool) 0
0x1c5: Push((int) 5)
0x1c6: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: PushEmpty(bool)
0x1c9: Call2 0x21c

0x1ca: Pop(0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Stack[-1] = (bool) 1
0x1cd: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1ce: Pop(0); Push((bool) Stack[-6] == 0)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d0: Push((int) 3)
0x1d1: @ Sleep(Stack[-1], Stack[-5])
0x1d2: Pop(1)
0x1d3: Pop(0); Push((bool) Stack[-4] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: GOTO 0x1f7

0x1d6: GOTO 0x1ec

0x1d7: @ irand(Stack[-3], Stack[-6])
0x1d8: Pop(0)
0x1d9: Push((int) 5)
0x1da: @ irand(Stack[-3], Stack[-1])
0x1db: Pop(1)
0x1dc: Push((int) 0)
0x1dd: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: Stack[-3] = (int) 0
0x1e0: Push("all") // @poff=138
0x1e1: PushEmpty(string, int)
0x1e2: Stack[-6] = Stack[-1]
0x1e3: Call2 0x33c

0x1e4: Pop(1)
0x1e5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e6: Pop(2)
0x1e7: @ WaitForAnimEnd(Stack[-1])
0x1e8: Pop(0)
0x1e9: Pop(0); Push((bool) Stack[-1] == 0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: GOTO 0x1f7

0x1ec: PushEmpty(bool)
0x1ed: Call2 0x1fa

0x1ee: Pop(0)
0x1ef: Pop(1); Push((bool) Stack[-1] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: GOTO 0x1f7

0x1f2: @ ResetAAS()
0x1f3: Pop(0)
0x1f4: Push((int) 1)
0x1f5: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1f6: GOTO 0x1c3

0x1f7: @ ResetAAS()
0x1f8: Pop(0)
0x1f9: Return(); Pop(12)

0x1fa: Stack[-1] = (bool) 1
0x1fb: Return(); Pop(0)

0x1fc: @ StopAnimation()
0x1fd: Pop(0)
0x1fe: @ StopGroup0()
0x1ff: Pop(0)
0x200: Return(); Pop(0)

0x201: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x202: @ GetPosition(Stack[-3])
0x203: Pop(0)
0x204: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x205: Pop(0)
0x206: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x207: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x208: Return(); Pop(6)

0x209: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x20a: @ GetPosition(Stack[-3])
0x20b: Pop(0)
0x20c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x20d: Push(CvectorIndex(Stack[-2], 0))
0x20e: Push(CvectorIndex(Stack[-3], 2))
0x20f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x210: Pop(2)
0x211: Stack[-1] = Stack[-8]
0x212: Return(); Pop(6)

0x213: PushEmpty(cvector, cvector)
0x214: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x215: Pop(0)
0x216: PushEmpty(bool, cvector)
0x217: Stack[-3] = Stack[-1]
0x218: Call2 0x209

0x219: Stack[-2] = Stack[-6]
0x21a: Pop(2)
0x21b: Return(); Pop(2)

0x21c: PushEmpty(bool, bool)
0x21d: @ IsLoaded(Stack[-1])
0x21e: Pop(0)
0x21f: Stack[-1] = Stack[-3]
0x220: Return(); Pop(2)

0x221: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x222: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x223: Pop(0)
0x224: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x225: Pop(0)
0x226: Push(CvectorIndex(Stack[-8], 1))
0x227: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x228: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x229: @ GetPosition(Stack[-7])
0x22a: Pop(0)
0x22b: @ GetEyesHeight(Stack[-9])
0x22c: Pop(0)
0x22d: Push(CvectorIndex(Stack[-7], 1))
0x22e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x22f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x230: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x231: Push(CvectorIndex(Stack[-6], 1))
0x232: Stack[-1] = (int) 0
0x233: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x234: Pop(0); Push(Stack[-6] | Stack[-6]);
0x235: Pop(1); Push(Sqrt(Stack[-1]))
0x236: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x237: Stack[-5] = -Stack[-6]; Pop(0);
0x238: Pop(0); Push(Stack[-6] * Stack[-19]);
0x239: PushEmpty(cvector, cvector)
0x23a: Push([0.0, 1.0, 0.0])
0x23b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x23c: Call2 0x329

0x23d: Pop(1)
0x23e: Push((int) 25)
0x23f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x240: Pop(2); Push(Stack[-2] + Stack[-1]);
0x241: Push([0.0, 10.0, 0.0])
0x242: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x243: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x244: @ IsOverrideActive(Stack[-2])
0x245: Pop(0)
0x246: Push(Stack[-2])
0x247: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x248: Stack[-21] = (bool) 0
0x249: Return(); Pop(18)

0x24a: @ StopWorld()
0x24b: Pop(0)
0x24c: @ CameraTransit(Stack[-3], Stack[-5])
0x24d: Pop(0)
0x24e: Push(CvectorIndex(Stack[-4], 0))
0x24f: Push(CvectorIndex(Stack[-5], 2))
0x250: @ Rotate(Stack[-2], Stack[-1])
0x251: Pop(2)
0x252: PushEmpty(bool)
0x253: Call2 0x36d

0x254: Pop(0)
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: GOTO 0x25f

0x257: Push("head") // @poff=228
0x258: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x259: Pop(1)
0x25a: Push(Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25c: Push("head") // @poff=228
0x25d: @ LookAsyncCamera(Stack[-1])
0x25e: Pop(1)
0x25f: @ CameraWaitForPlayFinish()
0x260: Pop(0)
0x261: @ ResumeWorld()
0x262: Pop(0)
0x263: Stack[-21] = (bool) 1
0x264: Return(); Pop(18)

0x265: PushEmpty(bool, bool)
0x266: @ CameraSwitchToNormal()
0x267: Pop(0)
0x268: PushEmpty(bool)
0x269: Call2 0x36d

0x26a: Pop(0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x275

0x26d: Push("head") // @poff=228
0x26e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x26f: Pop(1)
0x270: Push(Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x272: Push("head") // @poff=228
0x273: @ UnlookAsync(Stack[-1])
0x274: Pop(1)
0x275: Return(); Pop(2)

0x276: PushEmpty(int, int, int, int)
0x277: Push("voice_common") // @poff=238
0x278: @ GetVariable(Stack[-1], Stack[-3])
0x279: Pop(1)
0x27a: Push(Stack[-2])
0x27b: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x27c: PushEmpty(bool, object)
0x27d: Stack[-7] = Stack[-1]
0x27e: Call2 0x2b0

0x27f: Pop(1)
0x280: Pop(1); Push((bool) Stack[-1] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x282: PushEmpty(bool, object)
0x283: Stack[-7] = Stack[-1]
0x284: Call2 0x2d5

0x285: Pop(1)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x288: Stack[-6] = (bool) 0
0x289: Return(); Pop(4)

0x28a: Push((int) 2)
0x28b: @ irand(Stack[-2], Stack[-1])
0x28c: Pop(1)
0x28d: Push(Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x28f: Push("voice_common") // @poff=238
0x290: Push((int) 1)
0x291: Pop(1); Push(Stack[-4] + Stack[-1]);
0x292: Push((int) 3)
0x293: Pop(2); Push(Stack[-2] % Stack[-1]);
0x294: @ SetVariable(Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: GOTO 0x29b

0x297: Push("voice_common") // @poff=238
0x298: Push((int) 0)
0x299: @ SetVariable(Stack[-2], Stack[-1])
0x29a: Pop(2)
0x29b: GOTO 0x2ae

0x29c: PushEmpty(bool, object)
0x29d: Stack[-7] = Stack[-1]
0x29e: Call2 0x2d5

0x29f: Pop(1)
0x2a0: Pop(1); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-7] = Stack[-1]
0x2a4: Call2 0x2b0

0x2a5: Pop(1)
0x2a6: Pop(1); Push((bool) Stack[-1] == 0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a8: Stack[-6] = (bool) 0
0x2a9: Return(); Pop(4)

0x2aa: Push("voice_common") // @poff=238
0x2ab: Push((int) 1)
0x2ac: @ SetVariable(Stack[-2], Stack[-1])
0x2ad: Pop(2)
0x2ae: Stack[-6] = (bool) 1
0x2af: Return(); Pop(4)

0x2b0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2b1: Stack[-5] = "c" // @poff=264
0x2b2: Stack[-4] = (int) 0
0x2b3: Push((int) 1)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b5: Push((int) 1)
0x2b6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2b7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2b8: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x2b9: Pop(1)
0x2ba: Pop(0); Push((bool) Stack[-3] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bc: GOTO 0x2c0

0x2bd: Push((int) 1)
0x2be: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2bf: GOTO 0x2b3

0x2c0: Pop(0); Push((bool) Stack[-4] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c2: Stack[-12] = (bool) 0
0x2c3: Return(); Pop(10)

0x2c4: Stack[-2] = (int) 0
0x2c5: Push((int) 1)
0x2c6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c8: @ irand(Stack[-2], Stack[-4])
0x2c9: Pop(0)
0x2ca: Push((int) 1)
0x2cb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2cc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2cd: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x2ce: Pop(1)
0x2cf: PushEmpty(bool, string)
0x2d0: Stack[-3] = Stack[-1]
0x2d1: Call2 0x30d

0x2d2: Stack[-2] = Stack[-14]
0x2d3: Pop(2)
0x2d4: Return(); Pop(10)

0x2d5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2d6: Push("d") // @poff=234
0x2d7: PushEmpty(int)
0x2d8: Call2 0x333

0x2d9: Pop(0)
0x2da: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2db: Push("m") // @poff=292
0x2dc: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2dd: Stack[-4] = (int) 0
0x2de: Push((int) 1)
0x2df: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e0: Push((int) 1)
0x2e1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2e2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e3: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x2e4: Pop(1)
0x2e5: Pop(0); Push((bool) Stack[-3] == 0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e7: GOTO 0x2eb

0x2e8: Push((int) 1)
0x2e9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2ea: GOTO 0x2de

0x2eb: Pop(0); Push((bool) Stack[-4] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ed: Stack[-12] = (bool) 0
0x2ee: Return(); Pop(10)

0x2ef: Stack[-2] = (int) 0
0x2f0: Push((int) 1)
0x2f1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: @ irand(Stack[-2], Stack[-4])
0x2f4: Pop(0)
0x2f5: Push((int) 1)
0x2f6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2f7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x2f9: Pop(1)
0x2fa: PushEmpty(bool, string)
0x2fb: Stack[-3] = Stack[-1]
0x2fc: Call2 0x30d

0x2fd: Stack[-2] = Stack[-14]
0x2fe: Pop(2)
0x2ff: Return(); Pop(10)

0x300: PushEmpty(float, float, float, float)
0x301: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x302: Pop(0)
0x303: Push((bool) 0)
0x304: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(1)
0x306: Return(); Pop(4)

0x307: PushEmpty(float, float, float, float)
0x308: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x309: Pop(0)
0x30a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x30b: Pop(0)
0x30c: Return(); Pop(4)

0x30d: PushEmpty(bool, bool)
0x30e: PushEmpty(bool)
0x30f: Call2 0x36d

0x310: Pop(0)
0x311: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x312: @ lshHasSpeech(Stack[-1], Stack[-3])
0x313: Pop(0)
0x314: Push(Stack[-1])
0x315: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x316: @ lshPlaySpeech(Stack[-3])
0x317: Pop(0)
0x318: Stack[-4] = (bool) 1
0x319: Return(); Pop(2)

0x31a: Stack[-4] = (bool) 0
0x31b: Return(); Pop(2)

0x31c: PushEmpty(bool)
0x31d: Call2 0x36d

0x31e: Pop(0)
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: @ lshStopSpeech()
0x321: Pop(0)
0x322: Return(); Pop(0)

0x323: PushEmpty(object, object)
0x324: @ self(Stack[-1])
0x325: Pop(0)
0x326: Stack[-1] = Stack[-3]
0x327: Return(); Pop(2)

0x328: Stack[-1] = 0
0x329: PushEmpty(float, float)
0x32a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x32b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x32c: Push((float)9.999999974752427e-07)
0x32d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-4] = [0.0, 0.0, 0.0]
0x330: Return(); Pop(2)

0x331: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x332: Return(); Pop(2)

0x333: PushEmpty(float, float)
0x334: @ GetGameTime(Stack[-1])
0x335: Pop(0)
0x336: Push((int) 1)
0x337: PushEmpty(int)
0x338: Push((int) 24)
0x339: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x33a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x33b: Return(); Pop(2)

0x33c: PushEmpty(string, string)
0x33d: Stack[-1] = "idle" // @poff=146
0x33e: Push(Stack[-3])
0x33f: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x340: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x341: Stack[-1] = Stack[-4]
0x342: Return(); Pop(2)

0x343: PushEmpty(int, bool, int, bool)
0x344: Stack[-2] = (int) 0
0x345: Push("all") // @poff=138
0x346: PushEmpty(string, int)
0x347: Stack[-5] = Stack[-1]
0x348: Call2 0x33c

0x349: Pop(1)
0x34a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x34b: Pop(2)
0x34c: Pop(0); Push((bool) Stack[-1] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: GOTO 0x352

0x34f: Push((int) 1)
0x350: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x351: GOTO 0x345

0x352: Stack[-2] = Stack[-5]
0x353: Return(); Pop(4)

0x354: PushEmpty(int, int)
0x355: Push("branch") // @poff=296
0x356: @ GetVariable(Stack[-1], Stack[-2])
0x357: Pop(1)
0x358: Push((int) 0)
0x359: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35b: Stack[-3] = (int) 1
0x35c: Return(); Pop(2)

0x35d: GOTO 0x363

0x35e: Push((int) 1)
0x35f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-3] = (int) 2
0x362: Return(); Pop(2)

0x363: Stack[-3] = (int) 3
0x364: Return(); Pop(2)

0x365: Stack[-1] = (int) 515573
0x366: Return(); Pop(0)

0x367: Stack[-1] = (int) 504032
0x368: Return(); Pop(0)

0x369: Stack[-1] = "ui/NPC_Bakalavr.png" // @poff=310
0x36a: Return(); Pop(0)

0x36b: Stack[-1] = "ui/NPC_Bakalavr_b.png" // @poff=350
0x36c: Return(); Pop(0)

0x36d: Stack[-1] = (bool) 1
0x36e: Return(); Pop(0)

