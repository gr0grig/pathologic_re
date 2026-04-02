GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	W:ood3Notkin2
	W:ood3Notkin3
	W:ood4Notkin2
	W:ood4Notkin3
	W:KnowTwoSouls
	W:KnowNotkin
	W:ood3Notkin1
	W:ood4Notkin1
	W:d4q03
	W:d4q03_alldead
	W:branch
	W:ui/NPC_Notkin.png
	W:ui/NPC_Notkin_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f00640033004e006f0074006b0069006e00320000006f006f00640033004e006f0074006b0069006e00330000006f006f00640034004e006f0074006b0069006e00320000006f006f00640034004e006f0074006b0069006e00330000004b006e006f007700540077006f0053006f0075006c00730000004b006e006f0077004e006f0074006b0069006e0000006f006f00640033004e006f0074006b0069006e00310000006f006f00640034004e006f0074006b0069006e0031000000640034007100300033000000640034007100300033005f0061006c006c00640065006100640000006200720061006e00630068000000750069002f004e00500043005f004e006f0074006b0069006e002e0070006e0067000000750069002f004e00500043005f004e006f0074006b0069006e005f0062002e0070006e0067000000
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

RunOp = 0x84c
RunTask = 11

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b6 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x30d Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5e0 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x822 Vars = (int, int)
	GTASK_11 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x89e Vars = (int)
		EVENT_6 Op = 0x8c4 Vars = ()
		EVENT_5 Op = 0x8d3 Vars = ()
		EVENT_45 Op = 0x8e0 Vars = (bool)
		EVENT_0 Op = 0x8ec Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x970

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
0x11: Call2 0xa77

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x9ca

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x975

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0xb62

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0xb60

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0xb64

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0xb66

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0xb4f

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
0x55: Call2 0x9b9

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
0x68: Push((int) 535284)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 535285)
0x6e: Push((int) 36962)
0x6f: Push((int) 36961)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 535292)
0x73: Push((int) -1)
0x74: Push((int) 36968)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 535293)
0x78: Push((int) -1)
0x79: Push((int) 36969)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0xb68

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0xa54

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
0x9f: Call2 0xb68

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
0xaf: Call2 0xa5b

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0xa70

0xb8: Pop(0)
0xb9: Push((int) 36960)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral" // @poff=89
0xbe: Call2 0x9d

0xbf: Pop(1)
0xc0: Push((int) 535284)
0xc1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc2: Pop(1)
0xc3: @@@ ClearReplies(); Obj=0 // @poff=116
0xc4: Pop(0)
0xc5: Push((int) 535285)
0xc6: Push((int) 36962)
0xc7: Push((int) 36961)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Push((int) 535292)
0xcb: Push((int) -1)
0xcc: Push((int) 36968)
0xcd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xce: Pop(3)
0xcf: Push((int) 535293)
0xd0: Push((int) -1)
0xd1: Push((int) 36969)
0xd2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 36962)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0x9d

0xdb: Pop(1)
0xdc: Push((int) 535286)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 535287)
0xe2: Push((int) 36964)
0xe3: Push((int) 36963)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 535291)
0xe7: Push((int) -1)
0xe8: Push((int) 36967)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 36964)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral" // @poff=89
0xf1: Call2 0x9d

0xf2: Pop(1)
0xf3: Push((int) 535288)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=116
0xf7: Pop(0)
0xf8: Push((int) 535289)
0xf9: Push((int) -1)
0xfa: Push((int) 36965)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 535290)
0xfe: Push((int) -1)
0xff: Push((int) 36966)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104: PushEmpty(bool)
0x105: Call2 0xb68

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
0x114: Call2 0xa77

0x115: Stack[-1] = Stack[-2]
0x116: Pop(1)
0x117: Call2 0x9ca

0x118: Pop(2)
0x119: PushEmpty(bool, object, float)
0x11a: Stack[-12] = Stack[-2]
0x11b: Stack[-1] = (float) 70.0
0x11c: Call2 0x975

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-10] = (int) -2
0x121: Return(); Pop(8)

0x122: @ CreateDialog(Stack[-4])
0x123: Pop(0)
0x124: PushEmpty(int)
0x125: Call2 0xb62

0x126: Pop(0)
0x127: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x128: Pop(1)
0x129: PushEmpty(int)
0x12a: Call2 0xb60

0x12b: Pop(0)
0x12c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x12d: Pop(1)
0x12e: PushEmpty(string)
0x12f: Call2 0xb64

0x130: Pop(0)
0x131: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x132: Pop(1)
0x133: PushEmpty(string)
0x134: Call2 0xb66

0x135: Pop(0)
0x136: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x137: Pop(1)
0x138: PushEmpty(int)
0x139: Call2 0xb4f

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
0x158: Call2 0x9b9

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
0x166: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x167: PushEmpty(object, object)
0x168: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0xad1

0x16b: Pop(2)
0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral" // @poff=89
0x16e: Call2 0x1a0

0x16f: Pop(1)
0x170: Push((int) 500205)
0x171: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x172: Pop(1)
0x173: @@@ ClearReplies(); Obj=0 // @poff=116
0x174: Pop(0)
0x175: Push((int) 500207)
0x176: Push((int) 256)
0x177: Push((int) 245)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Push((int) 500206)
0x17b: Push((int) 246)
0x17c: Push((int) 244)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: GOTO 0x182

0x180: Return(); Pop(0)

0x181: GOTO 0x165

0x182: PushEmpty(bool)
0x183: Call2 0xb68

0x184: Pop(0)
0x185: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x186: @ lshWaitForAnimEnd()
0x187: Pop(0)
0x188: Push( Stack[3 + Tasks[-1].StackPointer] )
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: GOTO 0x190

0x18b: PushEmpty(string)
0x18c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x18d: Call2 0xa54

0x18e: Pop(1)
0x18f: GOTO 0x186

0x190: GOTO 0x19f

0x191: Push("all") // @poff=138
0x192: Push("idle") // @poff=146
0x193: @ PlayAnimation(Stack[-2], Stack[-1])
0x194: Pop(2)
0x195: @ WaitForAnimEnd()
0x196: Pop(0)
0x197: Push( Stack[3 + Tasks[-1].StackPointer] )
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: GOTO 0x19f

0x19a: Push("all") // @poff=138
0x19b: Push("idle") // @poff=146
0x19c: @ PlayAnimation(Stack[-2], Stack[-1])
0x19d: Pop(2)
0x19e: GOTO 0x195

0x19f: Return(); Pop(0)

0x1a0: PushEmpty()
0x1a1: PushEmpty(bool)
0x1a2: Call2 0xb68

0x1a3: Pop(0)
0x1a4: Pop(1); Push((bool) Stack[-1] == 0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: Return(); Pop(0)

0x1a7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Return(); Pop(0)

0x1aa: PushEmpty(string, bool)
0x1ab: Stack[-3] = Stack[-2]
0x1ac: Push("") // @poff=102
0x1ad: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1af: Stack[-1] = (bool) 0
0x1b0: GOTO 0x1b2

0x1b1: Stack[-1] = (bool) 1
0x1b2: Call2 0xa5b

0x1b3: Pop(2)
0x1b4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b5: Return(); Pop(0)

0x1b6: PushEmpty()
0x1b7: Push((int) 1)
0x1b8: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x1b9: PushEmpty()
0x1ba: Call2 0xa70

0x1bb: Pop(0)
0x1bc: Push((int) 243)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1bf: PushEmpty(object, object)
0x1c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c2: Call2 0xad1

0x1c3: Pop(2)
0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Neutral" // @poff=89
0x1c6: Call2 0x1a0

0x1c7: Pop(1)
0x1c8: Push((int) 500205)
0x1c9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ca: Pop(1)
0x1cb: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cc: Pop(0)
0x1cd: Push((int) 500207)
0x1ce: Push((int) 256)
0x1cf: Push((int) 245)
0x1d0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d1: Pop(3)
0x1d2: Push((int) 500206)
0x1d3: Push((int) 246)
0x1d4: Push((int) 244)
0x1d5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d6: Pop(3)
0x1d7: Return(); Pop(0)

0x1d8: Push((int) 246)
0x1d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1db: PushEmpty(string)
0x1dc: Stack[-1] = "Neutral" // @poff=89
0x1dd: Call2 0x1a0

0x1de: Pop(1)
0x1df: Push((int) 500208)
0x1e0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e1: Pop(1)
0x1e2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e3: Pop(0)
0x1e4: Push((int) 500209)
0x1e5: Push((int) 249)
0x1e6: Push((int) 247)
0x1e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e8: Pop(3)
0x1e9: Push((int) 500210)
0x1ea: Push((int) 250)
0x1eb: Push((int) 248)
0x1ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ed: Pop(3)
0x1ee: Return(); Pop(0)

0x1ef: Push((int) 250)
0x1f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f2: PushEmpty(string)
0x1f3: Stack[-1] = "Neutral" // @poff=89
0x1f4: Call2 0x1a0

0x1f5: Pop(1)
0x1f6: Push((int) 500212)
0x1f7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f8: Pop(1)
0x1f9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1fa: Pop(0)
0x1fb: Push((int) 500215)
0x1fc: Push((int) 249)
0x1fd: Push((int) 253)
0x1fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ff: Pop(3)
0x200: Return(); Pop(0)

0x201: Push((int) 249)
0x202: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x204: PushEmpty(object, object)
0x205: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x206: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x207: Call2 0xacb

0x208: Pop(2)
0x209: PushEmpty(string)
0x20a: Stack[-1] = "Neutral" // @poff=89
0x20b: Call2 0x1a0

0x20c: Pop(1)
0x20d: Push((int) 500211)
0x20e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20f: Pop(1)
0x210: @@@ ClearReplies(); Obj=0 // @poff=116
0x211: Pop(0)
0x212: Push((int) 500213)
0x213: Push((int) 252)
0x214: Push((int) 251)
0x215: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x216: Pop(3)
0x217: Return(); Pop(0)

0x218: Push((int) 252)
0x219: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x21b: PushEmpty(string)
0x21c: Stack[-1] = "Neutral" // @poff=89
0x21d: Call2 0x1a0

0x21e: Pop(1)
0x21f: Push((int) 500214)
0x220: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x221: Pop(1)
0x222: @@@ ClearReplies(); Obj=0 // @poff=116
0x223: Pop(0)
0x224: Push((int) 500216)
0x225: Push((int) -1)
0x226: Push((int) 255)
0x227: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x228: Pop(3)
0x229: Return(); Pop(0)

0x22a: Push((int) 256)
0x22b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x22d: PushEmpty(string)
0x22e: Stack[-1] = "Neutral" // @poff=89
0x22f: Call2 0x1a0

0x230: Pop(1)
0x231: Push((int) 500217)
0x232: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x233: Pop(1)
0x234: @@@ ClearReplies(); Obj=0 // @poff=116
0x235: Pop(0)
0x236: Push((int) 500218)
0x237: Push((int) -1)
0x238: Push((int) 257)
0x239: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23a: Pop(3)
0x23b: Push((int) 500219)
0x23c: Push((int) -1)
0x23d: Push((int) 258)
0x23e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23f: Pop(3)
0x240: Return(); Pop(0)

0x241: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x242: PushEmpty(bool)
0x243: Call2 0xb68

0x244: Pop(0)
0x245: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x246: @ lshStopAnimation()
0x247: Pop(0)
0x248: GOTO 0x24b

0x249: @ StopAnimation()
0x24a: Pop(0)
0x24b: Return(); Pop(0)

0x24c: GOTO 0x1b7

0x24d: Return(); Pop(0)

0x24e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x24f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x250: PushEmpty(bool, object)
0x251: PushEmpty(object)
0x252: Call2 0xa77

0x253: Stack[-1] = Stack[-2]
0x254: Pop(1)
0x255: Call2 0x9ca

0x256: Pop(2)
0x257: PushEmpty(bool, object, float)
0x258: Stack[-12] = Stack[-2]
0x259: Stack[-1] = (float) 70.0
0x25a: Call2 0x975

0x25b: Pop(2)
0x25c: Pop(1); Push((bool) Stack[-1] == 0)
0x25d: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25e: Stack[-10] = (int) -2
0x25f: Return(); Pop(8)

0x260: @ CreateDialog(Stack[-4])
0x261: Pop(0)
0x262: PushEmpty(int)
0x263: Call2 0xb62

0x264: Pop(0)
0x265: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x266: Pop(1)
0x267: PushEmpty(int)
0x268: Call2 0xb60

0x269: Pop(0)
0x26a: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x26b: Pop(1)
0x26c: PushEmpty(string)
0x26d: Call2 0xb64

0x26e: Pop(0)
0x26f: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x270: Pop(1)
0x271: PushEmpty(string)
0x272: Call2 0xb66

0x273: Pop(0)
0x274: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x275: Pop(1)
0x276: PushEmpty(int)
0x277: Call2 0xb4f

0x278: Pop(0)
0x279: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x27a: Pop(1)
0x27b: Stack[-2] = (int) -1
0x27c: @ IsOverrideActive(Stack[-3])
0x27d: Pop(0)
0x27e: Push(Stack[-3])
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: Stack[-10] = (int) -2
0x281: Return(); Pop(8)

0x282: @ DoDialog(Stack[-4])
0x283: Pop(0)
0x284: PushEmpty(object, object)
0x285: Stack[-11] = Stack[-2]
0x286: Stack[-6] = Stack[-1]
0x287: Push(-2, 4); TaskCall(6)
0x288: Call2 0x29f

0x289: Pop(-2, 4); TaskReturn
0x28a: Pop(2)
0x28b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x28c: Pop(0)
0x28d: Pop(0); Push((bool) Stack[-1] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28f: @ sync()
0x290: Pop(0)
0x291: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x292: Pop(0)
0x293: GOTO 0x28d

0x294: PushEmpty(object)
0x295: Stack[-10] = Stack[-1]
0x296: Call2 0x9b9

0x297: Pop(1)
0x298: @ StopDialog(Stack[-4])
0x299: Pop(0)
0x29a: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x29b: Pop(0)
0x29c: Stack[-2] = Stack[-10]
0x29d: Return(); Pop(8)

0x29e: Stack[-4] = 0
0x29f: PushEmpty()
0x2a0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2a1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2a2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2a3: Push((int) 1)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Neutral" // @poff=89
0x2a7: Call2 0x2f7

0x2a8: Pop(1)
0x2a9: Push((int) 509978)
0x2aa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ab: Pop(1)
0x2ac: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ad: Pop(0)
0x2ae: PushEmpty(bool, object)
0x2af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b0: Call2 0xb2b

0x2b1: Pop(1)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b3: Push((int) 509979)
0x2b4: Push((int) 35759)
0x2b5: Push((int) 10997)
0x2b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b7: Pop(3)
0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ba: Call2 0xae3

0x2bb: Pop(1)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bd: Push((int) 534183)
0x2be: Push((int) 35767)
0x2bf: Push((int) 35766)
0x2c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c1: Pop(3)
0x2c2: PushEmpty(bool, object)
0x2c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c4: Call2 0xaef

0x2c5: Pop(1)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: Push((int) 534202)
0x2c8: Push((int) 35786)
0x2c9: Push((int) 35785)
0x2ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2cb: Pop(3)
0x2cc: Push((int) 509990)
0x2cd: Push((int) -1)
0x2ce: Push((int) 11009)
0x2cf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d0: Pop(3)
0x2d1: Push((int) 509991)
0x2d2: Push((int) -1)
0x2d3: Push((int) 11011)
0x2d4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d5: Pop(3)
0x2d6: GOTO 0x2d9

0x2d7: Return(); Pop(0)

0x2d8: GOTO 0x2a3

0x2d9: PushEmpty(bool)
0x2da: Call2 0xb68

0x2db: Pop(0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2dd: @ lshWaitForAnimEnd()
0x2de: Pop(0)
0x2df: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: GOTO 0x2e7

0x2e2: PushEmpty(string)
0x2e3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2e4: Call2 0xa54

0x2e5: Pop(1)
0x2e6: GOTO 0x2dd

0x2e7: GOTO 0x2f6

0x2e8: Push("all") // @poff=138
0x2e9: Push("idle") // @poff=146
0x2ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x2eb: Pop(2)
0x2ec: @ WaitForAnimEnd()
0x2ed: Pop(0)
0x2ee: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2f0: GOTO 0x2f6

0x2f1: Push("all") // @poff=138
0x2f2: Push("idle") // @poff=146
0x2f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f4: Pop(2)
0x2f5: GOTO 0x2ec

0x2f6: Return(); Pop(0)

0x2f7: PushEmpty()
0x2f8: PushEmpty(bool)
0x2f9: Call2 0xb68

0x2fa: Pop(0)
0x2fb: Pop(1); Push((bool) Stack[-1] == 0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: Return(); Pop(0)

0x2fe: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2ff: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x300: Return(); Pop(0)

0x301: PushEmpty(string, bool)
0x302: Stack[-3] = Stack[-2]
0x303: Push("") // @poff=102
0x304: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x306: Stack[-1] = (bool) 0
0x307: GOTO 0x309

0x308: Stack[-1] = (bool) 1
0x309: Call2 0xa5b

0x30a: Pop(2)
0x30b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x30c: Return(); Pop(0)

0x30d: PushEmpty()
0x30e: Push((int) 1)
0x30f: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x310: PushEmpty()
0x311: Call2 0xa70

0x312: Pop(0)
0x313: Push((int) 10997)
0x314: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x315: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x316: PushEmpty(object, object)
0x317: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x318: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x319: Call2 0xad7

0x31a: Pop(2)
0x31b: Push((int) 35766)
0x31c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x31e: PushEmpty(object, object)
0x31f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x320: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x321: Call2 0xab3

0x322: Pop(2)
0x323: Push((int) 35785)
0x324: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x326: PushEmpty(object, object)
0x327: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x328: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x329: Call2 0xab9

0x32a: Pop(2)
0x32b: Push((int) 10996)
0x32c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x32e: PushEmpty(string)
0x32f: Stack[-1] = "Neutral" // @poff=89
0x330: Call2 0x2f7

0x331: Pop(1)
0x332: Push((int) 509978)
0x333: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x334: Pop(1)
0x335: @@@ ClearReplies(); Obj=0 // @poff=116
0x336: Pop(0)
0x337: PushEmpty(bool, object)
0x338: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x339: Call2 0xb2b

0x33a: Pop(1)
0x33b: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33c: Push((int) 509979)
0x33d: Push((int) 35759)
0x33e: Push((int) 10997)
0x33f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x340: Pop(3)
0x341: PushEmpty(bool, object)
0x342: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x343: Call2 0xae3

0x344: Pop(1)
0x345: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x346: Push((int) 534183)
0x347: Push((int) 35767)
0x348: Push((int) 35766)
0x349: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x34a: Pop(3)
0x34b: PushEmpty(bool, object)
0x34c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34d: Call2 0xaef

0x34e: Pop(1)
0x34f: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x350: Push((int) 534202)
0x351: Push((int) 35786)
0x352: Push((int) 35785)
0x353: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x354: Pop(3)
0x355: Push((int) 509990)
0x356: Push((int) -1)
0x357: Push((int) 11009)
0x358: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x359: Pop(3)
0x35a: Push((int) 509991)
0x35b: Push((int) -1)
0x35c: Push((int) 11011)
0x35d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x35e: Pop(3)
0x35f: Return(); Pop(0)

0x360: Push((int) 35786)
0x361: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x363: PushEmpty(string)
0x364: Stack[-1] = "Neutral" // @poff=89
0x365: Call2 0x2f7

0x366: Pop(1)
0x367: Push((int) 534203)
0x368: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x369: Pop(1)
0x36a: @@@ ClearReplies(); Obj=0 // @poff=116
0x36b: Pop(0)
0x36c: Push((int) 534204)
0x36d: Push((int) 35788)
0x36e: Push((int) 35787)
0x36f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x370: Pop(3)
0x371: Push((int) 534215)
0x372: Push((int) -1)
0x373: Push((int) 35798)
0x374: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x375: Pop(3)
0x376: Return(); Pop(0)

0x377: Push((int) 35788)
0x378: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x37a: PushEmpty(string)
0x37b: Stack[-1] = "Neutral" // @poff=89
0x37c: Call2 0x2f7

0x37d: Pop(1)
0x37e: Push((int) 534205)
0x37f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x380: Pop(1)
0x381: @@@ ClearReplies(); Obj=0 // @poff=116
0x382: Pop(0)
0x383: Push((int) 534206)
0x384: Push((int) 35790)
0x385: Push((int) 35789)
0x386: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x387: Pop(3)
0x388: Push((int) 534214)
0x389: Push((int) -1)
0x38a: Push((int) 35797)
0x38b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x38c: Pop(3)
0x38d: Return(); Pop(0)

0x38e: Push((int) 35790)
0x38f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x391: PushEmpty(string)
0x392: Stack[-1] = "Neutral" // @poff=89
0x393: Call2 0x2f7

0x394: Pop(1)
0x395: Push((int) 534207)
0x396: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x397: Pop(1)
0x398: @@@ ClearReplies(); Obj=0 // @poff=116
0x399: Pop(0)
0x39a: Push((int) 534208)
0x39b: Push((int) 35792)
0x39c: Push((int) 35791)
0x39d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39e: Pop(3)
0x39f: Push((int) 534211)
0x3a0: Push((int) 35795)
0x3a1: Push((int) 35794)
0x3a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a3: Pop(3)
0x3a4: Return(); Pop(0)

0x3a5: Push((int) 35795)
0x3a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3a8: PushEmpty(string)
0x3a9: Stack[-1] = "Neutral" // @poff=89
0x3aa: Call2 0x2f7

0x3ab: Pop(1)
0x3ac: Push((int) 534212)
0x3ad: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ae: Pop(1)
0x3af: @@@ ClearReplies(); Obj=0 // @poff=116
0x3b0: Pop(0)
0x3b1: Push((int) 534213)
0x3b2: Push((int) -1)
0x3b3: Push((int) 35796)
0x3b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b5: Pop(3)
0x3b6: Return(); Pop(0)

0x3b7: Push((int) 35792)
0x3b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3ba: PushEmpty(string)
0x3bb: Stack[-1] = "Neutral" // @poff=89
0x3bc: Call2 0x2f7

0x3bd: Pop(1)
0x3be: Push((int) 534209)
0x3bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c0: Pop(1)
0x3c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c2: Pop(0)
0x3c3: Push((int) 534210)
0x3c4: Push((int) -1)
0x3c5: Push((int) 35793)
0x3c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c7: Pop(3)
0x3c8: Return(); Pop(0)

0x3c9: Push((int) 35767)
0x3ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3cc: PushEmpty(string)
0x3cd: Stack[-1] = "Neutral" // @poff=89
0x3ce: Call2 0x2f7

0x3cf: Pop(1)
0x3d0: Push((int) 534184)
0x3d1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d2: Pop(1)
0x3d3: @@@ ClearReplies(); Obj=0 // @poff=116
0x3d4: Pop(0)
0x3d5: Push((int) 534185)
0x3d6: Push((int) 35769)
0x3d7: Push((int) 35768)
0x3d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3d9: Pop(3)
0x3da: Push((int) 534198)
0x3db: Push((int) 35782)
0x3dc: Push((int) 35781)
0x3dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3de: Pop(3)
0x3df: Return(); Pop(0)

0x3e0: Push((int) 35782)
0x3e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3e3: PushEmpty(string)
0x3e4: Stack[-1] = "Neutral" // @poff=89
0x3e5: Call2 0x2f7

0x3e6: Pop(1)
0x3e7: Push((int) 534199)
0x3e8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3e9: Pop(1)
0x3ea: @@@ ClearReplies(); Obj=0 // @poff=116
0x3eb: Pop(0)
0x3ec: Push((int) 534200)
0x3ed: Push((int) -1)
0x3ee: Push((int) 35783)
0x3ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f0: Pop(3)
0x3f1: Push((int) 534201)
0x3f2: Push((int) -1)
0x3f3: Push((int) 35784)
0x3f4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f5: Pop(3)
0x3f6: Return(); Pop(0)

0x3f7: Push((int) 35769)
0x3f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x3fa: PushEmpty(string)
0x3fb: Stack[-1] = "Neutral" // @poff=89
0x3fc: Call2 0x2f7

0x3fd: Pop(1)
0x3fe: Push((int) 534186)
0x3ff: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x400: Pop(1)
0x401: @@@ ClearReplies(); Obj=0 // @poff=116
0x402: Pop(0)
0x403: Push((int) 534187)
0x404: Push((int) 35771)
0x405: Push((int) 35770)
0x406: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x407: Pop(3)
0x408: Push((int) 534195)
0x409: Push((int) 35779)
0x40a: Push((int) 35778)
0x40b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40c: Pop(3)
0x40d: Return(); Pop(0)

0x40e: Push((int) 35779)
0x40f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x411: PushEmpty(string)
0x412: Stack[-1] = "Neutral" // @poff=89
0x413: Call2 0x2f7

0x414: Pop(1)
0x415: Push((int) 534196)
0x416: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x417: Pop(1)
0x418: @@@ ClearReplies(); Obj=0 // @poff=116
0x419: Pop(0)
0x41a: Push((int) 534197)
0x41b: Push((int) -1)
0x41c: Push((int) 35780)
0x41d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x41e: Pop(3)
0x41f: Return(); Pop(0)

0x420: Push((int) 35771)
0x421: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x423: PushEmpty(string)
0x424: Stack[-1] = "Neutral" // @poff=89
0x425: Call2 0x2f7

0x426: Pop(1)
0x427: Push((int) 534188)
0x428: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x429: Pop(1)
0x42a: @@@ ClearReplies(); Obj=0 // @poff=116
0x42b: Pop(0)
0x42c: Push((int) 534189)
0x42d: Push((int) 35773)
0x42e: Push((int) 35772)
0x42f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x430: Pop(3)
0x431: Return(); Pop(0)

0x432: Push((int) 35773)
0x433: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x435: PushEmpty(string)
0x436: Stack[-1] = "Neutral" // @poff=89
0x437: Call2 0x2f7

0x438: Pop(1)
0x439: Push((int) 534190)
0x43a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x43b: Pop(1)
0x43c: @@@ ClearReplies(); Obj=0 // @poff=116
0x43d: Pop(0)
0x43e: Push((int) 534191)
0x43f: Push((int) -1)
0x440: Push((int) 35774)
0x441: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x442: Pop(3)
0x443: Push((int) 534192)
0x444: Push((int) 35776)
0x445: Push((int) 35775)
0x446: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x447: Pop(3)
0x448: Return(); Pop(0)

0x449: Push((int) 35776)
0x44a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x44c: PushEmpty(string)
0x44d: Stack[-1] = "Neutral" // @poff=89
0x44e: Call2 0x2f7

0x44f: Pop(1)
0x450: Push((int) 534193)
0x451: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x452: Pop(1)
0x453: @@@ ClearReplies(); Obj=0 // @poff=116
0x454: Pop(0)
0x455: Push((int) 534194)
0x456: Push((int) -1)
0x457: Push((int) 35777)
0x458: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x459: Pop(3)
0x45a: Return(); Pop(0)

0x45b: Push((int) 35759)
0x45c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x45e: PushEmpty(string)
0x45f: Stack[-1] = "Neutral" // @poff=89
0x460: Call2 0x2f7

0x461: Pop(1)
0x462: Push((int) 534176)
0x463: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x464: Pop(1)
0x465: @@@ ClearReplies(); Obj=0 // @poff=116
0x466: Pop(0)
0x467: Push((int) 534177)
0x468: Push((int) 10998)
0x469: Push((int) 35760)
0x46a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x46b: Pop(3)
0x46c: Push((int) 534178)
0x46d: Push((int) 35800)
0x46e: Push((int) 35761)
0x46f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x470: Pop(3)
0x471: Return(); Pop(0)

0x472: Push((int) 35800)
0x473: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x474: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x475: PushEmpty(string)
0x476: Stack[-1] = "Neutral" // @poff=89
0x477: Call2 0x2f7

0x478: Pop(1)
0x479: Push((int) 534217)
0x47a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x47b: Pop(1)
0x47c: @@@ ClearReplies(); Obj=0 // @poff=116
0x47d: Pop(0)
0x47e: Push((int) 534218)
0x47f: Push((int) 35802)
0x480: Push((int) 35801)
0x481: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x482: Pop(3)
0x483: Push((int) 534223)
0x484: Push((int) 35802)
0x485: Push((int) 35806)
0x486: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x487: Pop(3)
0x488: Return(); Pop(0)

0x489: Push((int) 35802)
0x48a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x48c: PushEmpty(string)
0x48d: Stack[-1] = "Neutral" // @poff=89
0x48e: Call2 0x2f7

0x48f: Pop(1)
0x490: Push((int) 534219)
0x491: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x492: Pop(1)
0x493: @@@ ClearReplies(); Obj=0 // @poff=116
0x494: Pop(0)
0x495: Push((int) 534220)
0x496: Push((int) -1)
0x497: Push((int) 35803)
0x498: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x499: Pop(3)
0x49a: Push((int) 534221)
0x49b: Push((int) -1)
0x49c: Push((int) 35804)
0x49d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x49e: Pop(3)
0x49f: Return(); Pop(0)

0x4a0: Push((int) 10998)
0x4a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4a3: PushEmpty(string)
0x4a4: Stack[-1] = "Neutral" // @poff=89
0x4a5: Call2 0x2f7

0x4a6: Pop(1)
0x4a7: Push((int) 509980)
0x4a8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4a9: Pop(1)
0x4aa: @@@ ClearReplies(); Obj=0 // @poff=116
0x4ab: Pop(0)
0x4ac: Push((int) 509981)
0x4ad: Push((int) 11000)
0x4ae: Push((int) 10999)
0x4af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4b0: Pop(3)
0x4b1: Push((int) 509988)
0x4b2: Push((int) 11000)
0x4b3: Push((int) 11006)
0x4b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4b5: Pop(3)
0x4b6: Push((int) 509989)
0x4b7: Push((int) -1)
0x4b8: Push((int) 11008)
0x4b9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ba: Pop(3)
0x4bb: Return(); Pop(0)

0x4bc: Push((int) 11000)
0x4bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4be: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4bf: PushEmpty(string)
0x4c0: Stack[-1] = "Neutral" // @poff=89
0x4c1: Call2 0x2f7

0x4c2: Pop(1)
0x4c3: Push((int) 509982)
0x4c4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4c5: Pop(1)
0x4c6: @@@ ClearReplies(); Obj=0 // @poff=116
0x4c7: Pop(0)
0x4c8: Push((int) 509983)
0x4c9: Push((int) -1)
0x4ca: Push((int) 11001)
0x4cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4cc: Pop(3)
0x4cd: Push((int) 509984)
0x4ce: Push((int) 11003)
0x4cf: Push((int) 11002)
0x4d0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4d1: Pop(3)
0x4d2: Return(); Pop(0)

0x4d3: Push((int) 11003)
0x4d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4d6: PushEmpty(string)
0x4d7: Stack[-1] = "Neutral" // @poff=89
0x4d8: Call2 0x2f7

0x4d9: Pop(1)
0x4da: Push((int) 509985)
0x4db: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4dc: Pop(1)
0x4dd: @@@ ClearReplies(); Obj=0 // @poff=116
0x4de: Pop(0)
0x4df: Push((int) 509986)
0x4e0: Push((int) -1)
0x4e1: Push((int) 11004)
0x4e2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4e3: Pop(3)
0x4e4: Push((int) 509987)
0x4e5: Push((int) -1)
0x4e6: Push((int) 11005)
0x4e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4e8: Pop(3)
0x4e9: Return(); Pop(0)

0x4ea: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4eb: PushEmpty(bool)
0x4ec: Call2 0xb68

0x4ed: Pop(0)
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ef: @ lshStopAnimation()
0x4f0: Pop(0)
0x4f1: GOTO 0x4f4

0x4f2: @ StopAnimation()
0x4f3: Pop(0)
0x4f4: Return(); Pop(0)

0x4f5: GOTO 0x30e

0x4f6: Return(); Pop(0)

0x4f7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4f8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4f9: PushEmpty(bool, object)
0x4fa: PushEmpty(object)
0x4fb: Call2 0xa77

0x4fc: Stack[-1] = Stack[-2]
0x4fd: Pop(1)
0x4fe: Call2 0x9ca

0x4ff: Pop(2)
0x500: PushEmpty(bool, object, float)
0x501: Stack[-12] = Stack[-2]
0x502: Stack[-1] = (float) 70.0
0x503: Call2 0x975

0x504: Pop(2)
0x505: Pop(1); Push((bool) Stack[-1] == 0)
0x506: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x507: Stack[-10] = (int) -2
0x508: Return(); Pop(8)

0x509: @ CreateDialog(Stack[-4])
0x50a: Pop(0)
0x50b: PushEmpty(int)
0x50c: Call2 0xb62

0x50d: Pop(0)
0x50e: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x50f: Pop(1)
0x510: PushEmpty(int)
0x511: Call2 0xb60

0x512: Pop(0)
0x513: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x514: Pop(1)
0x515: PushEmpty(string)
0x516: Call2 0xb64

0x517: Pop(0)
0x518: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x519: Pop(1)
0x51a: PushEmpty(string)
0x51b: Call2 0xb66

0x51c: Pop(0)
0x51d: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x51e: Pop(1)
0x51f: PushEmpty(int)
0x520: Call2 0xb4f

0x521: Pop(0)
0x522: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x523: Pop(1)
0x524: Stack[-2] = (int) -1
0x525: @ IsOverrideActive(Stack[-3])
0x526: Pop(0)
0x527: Push(Stack[-3])
0x528: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x529: Stack[-10] = (int) -2
0x52a: Return(); Pop(8)

0x52b: @ DoDialog(Stack[-4])
0x52c: Pop(0)
0x52d: PushEmpty(object, object)
0x52e: Stack[-11] = Stack[-2]
0x52f: Stack[-6] = Stack[-1]
0x530: Push(-2, 4); TaskCall(8)
0x531: Call2 0x548

0x532: Pop(-2, 4); TaskReturn
0x533: Pop(2)
0x534: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x535: Pop(0)
0x536: Pop(0); Push((bool) Stack[-1] == 0)
0x537: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x538: @ sync()
0x539: Pop(0)
0x53a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x53b: Pop(0)
0x53c: GOTO 0x536

0x53d: PushEmpty(object)
0x53e: Stack[-10] = Stack[-1]
0x53f: Call2 0x9b9

0x540: Pop(1)
0x541: @ StopDialog(Stack[-4])
0x542: Pop(0)
0x543: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x544: Pop(0)
0x545: Stack[-2] = Stack[-10]
0x546: Return(); Pop(8)

0x547: Stack[-4] = 0
0x548: PushEmpty()
0x549: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x54a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x54c: Push((int) 1)
0x54d: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x54e: PushEmpty(string)
0x54f: Stack[-1] = "Neutral" // @poff=89
0x550: Call2 0x5ca

0x551: Pop(1)
0x552: Push((int) 511211)
0x553: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x554: Pop(1)
0x555: @@@ ClearReplies(); Obj=0 // @poff=116
0x556: Pop(0)
0x557: PushEmpty(bool)
0x558: Stack[-1] = (bool) 1
0x559: PushEmpty(bool)
0x55a: Stack[-1] = (bool) 0
0x55b: PushEmpty(bool)
0x55c: Stack[-1] = (bool) 0
0x55d: PushEmpty(bool, object)
0x55e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x55f: Call2 0xb13

0x560: Pop(1)
0x561: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x562: PushEmpty(bool, object)
0x563: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x564: Call2 0xb43

0x565: Pop(1)
0x566: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x567: Stack[-1] = (bool) 1
0x568: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x569: PushEmpty(bool, object)
0x56a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x56b: Call2 0xb1f

0x56c: Pop(1)
0x56d: Pop(1); Push((bool) Stack[-1] == 0)
0x56e: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56f: Stack[-1] = (bool) 1
0x570: IF (Stack[-1] == 1) GOTO 0x58a; Pop(1)

0x571: PushEmpty(bool)
0x572: Stack[-1] = (bool) 0
0x573: PushEmpty(bool)
0x574: Stack[-1] = (bool) 0
0x575: PushEmpty(bool, object)
0x576: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x577: Call2 0xb37

0x578: Pop(1)
0x579: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57a: PushEmpty(bool, object)
0x57b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57c: Call2 0xb43

0x57d: Pop(1)
0x57e: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57f: Stack[-1] = (bool) 1
0x580: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x581: PushEmpty(bool, object)
0x582: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x583: Call2 0xb1f

0x584: Pop(1)
0x585: Pop(1); Push((bool) Stack[-1] == 0)
0x586: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x587: Stack[-1] = (bool) 1
0x588: IF (Stack[-1] == 1) GOTO 0x58a; Pop(1)

0x589: Stack[-1] = (bool) 0
0x58a: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58b: Push((int) 511212)
0x58c: Push((int) 12401)
0x58d: Push((int) 12400)
0x58e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x58f: Pop(3)
0x590: PushEmpty(bool, object)
0x591: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x592: Call2 0xafb

0x593: Pop(1)
0x594: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x595: Push((int) 534224)
0x596: Push((int) 35809)
0x597: Push((int) 35808)
0x598: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x599: Pop(3)
0x59a: PushEmpty(bool, object)
0x59b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59c: Call2 0xb07

0x59d: Pop(1)
0x59e: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x59f: Push((int) 534252)
0x5a0: Push((int) 35840)
0x5a1: Push((int) 35839)
0x5a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5a3: Pop(3)
0x5a4: Push((int) 515335)
0x5a5: Push((int) -1)
0x5a6: Push((int) 16558)
0x5a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5a8: Pop(3)
0x5a9: GOTO 0x5ac

0x5aa: Return(); Pop(0)

0x5ab: GOTO 0x54c

0x5ac: PushEmpty(bool)
0x5ad: Call2 0xb68

0x5ae: Pop(0)
0x5af: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b0: @ lshWaitForAnimEnd()
0x5b1: Pop(0)
0x5b2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b4: GOTO 0x5ba

0x5b5: PushEmpty(string)
0x5b6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5b7: Call2 0xa54

0x5b8: Pop(1)
0x5b9: GOTO 0x5b0

0x5ba: GOTO 0x5c9

0x5bb: Push("all") // @poff=138
0x5bc: Push("idle") // @poff=146
0x5bd: @ PlayAnimation(Stack[-2], Stack[-1])
0x5be: Pop(2)
0x5bf: @ WaitForAnimEnd()
0x5c0: Pop(0)
0x5c1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c3: GOTO 0x5c9

0x5c4: Push("all") // @poff=138
0x5c5: Push("idle") // @poff=146
0x5c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x5c7: Pop(2)
0x5c8: GOTO 0x5bf

0x5c9: Return(); Pop(0)

0x5ca: PushEmpty()
0x5cb: PushEmpty(bool)
0x5cc: Call2 0xb68

0x5cd: Pop(0)
0x5ce: Pop(1); Push((bool) Stack[-1] == 0)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5d0: Return(); Pop(0)

0x5d1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d3: Return(); Pop(0)

0x5d4: PushEmpty(string, bool)
0x5d5: Stack[-3] = Stack[-2]
0x5d6: Push("") // @poff=102
0x5d7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d9: Stack[-1] = (bool) 0
0x5da: GOTO 0x5dc

0x5db: Stack[-1] = (bool) 1
0x5dc: Call2 0xa5b

0x5dd: Pop(2)
0x5de: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5df: Return(); Pop(0)

0x5e0: PushEmpty()
0x5e1: Push((int) 1)
0x5e2: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x5e3: PushEmpty()
0x5e4: Call2 0xa70

0x5e5: Pop(0)
0x5e6: Push((int) 12400)
0x5e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e8: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5e9: PushEmpty(object, object)
0x5ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ec: Call2 0xadd

0x5ed: Pop(2)
0x5ee: Push((int) 35808)
0x5ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f1: PushEmpty(object, object)
0x5f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f4: Call2 0xabf

0x5f5: Pop(2)
0x5f6: Push((int) 35839)
0x5f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5f9: PushEmpty(object, object)
0x5fa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5fc: Call2 0xac5

0x5fd: Pop(2)
0x5fe: Push((int) 12399)
0x5ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x600: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x601: PushEmpty(string)
0x602: Stack[-1] = "Neutral" // @poff=89
0x603: Call2 0x5ca

0x604: Pop(1)
0x605: Push((int) 511211)
0x606: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x607: Pop(1)
0x608: @@@ ClearReplies(); Obj=0 // @poff=116
0x609: Pop(0)
0x60a: PushEmpty(bool)
0x60b: Stack[-1] = (bool) 1
0x60c: PushEmpty(bool)
0x60d: Stack[-1] = (bool) 0
0x60e: PushEmpty(bool)
0x60f: Stack[-1] = (bool) 0
0x610: PushEmpty(bool, object)
0x611: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x612: Call2 0xb13

0x613: Pop(1)
0x614: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x615: PushEmpty(bool, object)
0x616: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x617: Call2 0xb43

0x618: Pop(1)
0x619: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x61a: Stack[-1] = (bool) 1
0x61b: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x61c: PushEmpty(bool, object)
0x61d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61e: Call2 0xb1f

0x61f: Pop(1)
0x620: Pop(1); Push((bool) Stack[-1] == 0)
0x621: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x622: Stack[-1] = (bool) 1
0x623: IF (Stack[-1] == 1) GOTO 0x63d; Pop(1)

0x624: PushEmpty(bool)
0x625: Stack[-1] = (bool) 0
0x626: PushEmpty(bool)
0x627: Stack[-1] = (bool) 0
0x628: PushEmpty(bool, object)
0x629: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62a: Call2 0xb37

0x62b: Pop(1)
0x62c: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x62d: PushEmpty(bool, object)
0x62e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62f: Call2 0xb43

0x630: Pop(1)
0x631: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x632: Stack[-1] = (bool) 1
0x633: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x634: PushEmpty(bool, object)
0x635: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x636: Call2 0xb1f

0x637: Pop(1)
0x638: Pop(1); Push((bool) Stack[-1] == 0)
0x639: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x63a: Stack[-1] = (bool) 1
0x63b: IF (Stack[-1] == 1) GOTO 0x63d; Pop(1)

0x63c: Stack[-1] = (bool) 0
0x63d: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63e: Push((int) 511212)
0x63f: Push((int) 12401)
0x640: Push((int) 12400)
0x641: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x642: Pop(3)
0x643: PushEmpty(bool, object)
0x644: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x645: Call2 0xafb

0x646: Pop(1)
0x647: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x648: Push((int) 534224)
0x649: Push((int) 35809)
0x64a: Push((int) 35808)
0x64b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x64c: Pop(3)
0x64d: PushEmpty(bool, object)
0x64e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64f: Call2 0xb07

0x650: Pop(1)
0x651: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x652: Push((int) 534252)
0x653: Push((int) 35840)
0x654: Push((int) 35839)
0x655: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x656: Pop(3)
0x657: Push((int) 515335)
0x658: Push((int) -1)
0x659: Push((int) 16558)
0x65a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x65b: Pop(3)
0x65c: Return(); Pop(0)

0x65d: Push((int) 35840)
0x65e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x660: PushEmpty(string)
0x661: Stack[-1] = "Neutral" // @poff=89
0x662: Call2 0x5ca

0x663: Pop(1)
0x664: Push((int) 534253)
0x665: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x666: Pop(1)
0x667: @@@ ClearReplies(); Obj=0 // @poff=116
0x668: Pop(0)
0x669: Push((int) 534254)
0x66a: Push((int) 35842)
0x66b: Push((int) 35841)
0x66c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x66d: Pop(3)
0x66e: Push((int) 534266)
0x66f: Push((int) 35842)
0x670: Push((int) 35853)
0x671: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x672: Pop(3)
0x673: Return(); Pop(0)

0x674: Push((int) 35842)
0x675: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x677: PushEmpty(string)
0x678: Stack[-1] = "Neutral" // @poff=89
0x679: Call2 0x5ca

0x67a: Pop(1)
0x67b: Push((int) 534255)
0x67c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x67d: Pop(1)
0x67e: @@@ ClearReplies(); Obj=0 // @poff=116
0x67f: Pop(0)
0x680: Push((int) 534256)
0x681: Push((int) 35844)
0x682: Push((int) 35843)
0x683: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x684: Pop(3)
0x685: Push((int) 534263)
0x686: Push((int) 35851)
0x687: Push((int) 35850)
0x688: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x689: Pop(3)
0x68a: Return(); Pop(0)

0x68b: Push((int) 35851)
0x68c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68d: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x68e: PushEmpty(string)
0x68f: Stack[-1] = "Neutral" // @poff=89
0x690: Call2 0x5ca

0x691: Pop(1)
0x692: Push((int) 534264)
0x693: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x694: Pop(1)
0x695: @@@ ClearReplies(); Obj=0 // @poff=116
0x696: Pop(0)
0x697: Push((int) 534265)
0x698: Push((int) -1)
0x699: Push((int) 35852)
0x69a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x69b: Pop(3)
0x69c: Return(); Pop(0)

0x69d: Push((int) 35844)
0x69e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69f: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6a0: PushEmpty(string)
0x6a1: Stack[-1] = "Neutral" // @poff=89
0x6a2: Call2 0x5ca

0x6a3: Pop(1)
0x6a4: Push((int) 534257)
0x6a5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a6: Pop(1)
0x6a7: @@@ ClearReplies(); Obj=0 // @poff=116
0x6a8: Pop(0)
0x6a9: Push((int) 534258)
0x6aa: Push((int) 35846)
0x6ab: Push((int) 35845)
0x6ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6ad: Pop(3)
0x6ae: Push((int) 534262)
0x6af: Push((int) -1)
0x6b0: Push((int) 35849)
0x6b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b2: Pop(3)
0x6b3: Return(); Pop(0)

0x6b4: Push((int) 35846)
0x6b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6b7: PushEmpty(string)
0x6b8: Stack[-1] = "Neutral" // @poff=89
0x6b9: Call2 0x5ca

0x6ba: Pop(1)
0x6bb: Push((int) 534259)
0x6bc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6bd: Pop(1)
0x6be: @@@ ClearReplies(); Obj=0 // @poff=116
0x6bf: Pop(0)
0x6c0: Push((int) 534260)
0x6c1: Push((int) -1)
0x6c2: Push((int) 35847)
0x6c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c4: Pop(3)
0x6c5: Push((int) 534261)
0x6c6: Push((int) -1)
0x6c7: Push((int) 35848)
0x6c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c9: Pop(3)
0x6ca: Return(); Pop(0)

0x6cb: Push((int) 35809)
0x6cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6ce: PushEmpty(string)
0x6cf: Stack[-1] = "Neutral" // @poff=89
0x6d0: Call2 0x5ca

0x6d1: Pop(1)
0x6d2: Push((int) 534225)
0x6d3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6d4: Pop(1)
0x6d5: @@@ ClearReplies(); Obj=0 // @poff=116
0x6d6: Pop(0)
0x6d7: Push((int) 534226)
0x6d8: Push((int) 35811)
0x6d9: Push((int) 35810)
0x6da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6db: Pop(3)
0x6dc: Return(); Pop(0)

0x6dd: Push((int) 35811)
0x6de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6df: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6e0: PushEmpty(string)
0x6e1: Stack[-1] = "Neutral" // @poff=89
0x6e2: Call2 0x5ca

0x6e3: Pop(1)
0x6e4: Push((int) 534227)
0x6e5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6e6: Pop(1)
0x6e7: @@@ ClearReplies(); Obj=0 // @poff=116
0x6e8: Pop(0)
0x6e9: Push((int) 534228)
0x6ea: Push((int) 35813)
0x6eb: Push((int) 35812)
0x6ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6ed: Pop(3)
0x6ee: Push((int) 534234)
0x6ef: Push((int) 35813)
0x6f0: Push((int) 35818)
0x6f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6f2: Pop(3)
0x6f3: Return(); Pop(0)

0x6f4: Push((int) 35813)
0x6f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x6f7: PushEmpty(string)
0x6f8: Stack[-1] = "Neutral" // @poff=89
0x6f9: Call2 0x5ca

0x6fa: Pop(1)
0x6fb: Push((int) 534229)
0x6fc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6fd: Pop(1)
0x6fe: @@@ ClearReplies(); Obj=0 // @poff=116
0x6ff: Pop(0)
0x700: Push((int) 534230)
0x701: Push((int) -1)
0x702: Push((int) 35814)
0x703: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x704: Pop(3)
0x705: Push((int) 534233)
0x706: Push((int) -1)
0x707: Push((int) 35817)
0x708: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x709: Pop(3)
0x70a: Return(); Pop(0)

0x70b: Push((int) 12401)
0x70c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70d: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x70e: PushEmpty(string)
0x70f: Stack[-1] = "Neutral" // @poff=89
0x710: Call2 0x5ca

0x711: Pop(1)
0x712: Push((int) 511213)
0x713: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x714: Pop(1)
0x715: @@@ ClearReplies(); Obj=0 // @poff=116
0x716: Pop(0)
0x717: Push((int) 511214)
0x718: Push((int) 12403)
0x719: Push((int) 12402)
0x71a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71b: Pop(3)
0x71c: Push((int) 511223)
0x71d: Push((int) 12413)
0x71e: Push((int) 12412)
0x71f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x720: Pop(3)
0x721: Return(); Pop(0)

0x722: Push((int) 12413)
0x723: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x724: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x725: PushEmpty(string)
0x726: Stack[-1] = "Neutral" // @poff=89
0x727: Call2 0x5ca

0x728: Pop(1)
0x729: Push((int) 511224)
0x72a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x72b: Pop(1)
0x72c: @@@ ClearReplies(); Obj=0 // @poff=116
0x72d: Pop(0)
0x72e: Push((int) 511225)
0x72f: Push((int) 12405)
0x730: Push((int) 12414)
0x731: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x732: Pop(3)
0x733: Return(); Pop(0)

0x734: Push((int) 12403)
0x735: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x736: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x737: PushEmpty(string)
0x738: Stack[-1] = "Neutral" // @poff=89
0x739: Call2 0x5ca

0x73a: Pop(1)
0x73b: Push((int) 511215)
0x73c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x73d: Pop(1)
0x73e: @@@ ClearReplies(); Obj=0 // @poff=116
0x73f: Pop(0)
0x740: Push((int) 511220)
0x741: Push((int) 12409)
0x742: Push((int) 12408)
0x743: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x744: Pop(3)
0x745: Push((int) 511216)
0x746: Push((int) 12405)
0x747: Push((int) 12404)
0x748: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x749: Pop(3)
0x74a: Return(); Pop(0)

0x74b: Push((int) 12405)
0x74c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74d: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x74e: PushEmpty(string)
0x74f: Stack[-1] = "Neutral" // @poff=89
0x750: Call2 0x5ca

0x751: Pop(1)
0x752: Push((int) 511217)
0x753: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x754: Pop(1)
0x755: @@@ ClearReplies(); Obj=0 // @poff=116
0x756: Pop(0)
0x757: Push((int) 511218)
0x758: Push((int) -1)
0x759: Push((int) 12406)
0x75a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x75b: Pop(3)
0x75c: Push((int) 511219)
0x75d: Push((int) -1)
0x75e: Push((int) 12407)
0x75f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x760: Pop(3)
0x761: Return(); Pop(0)

0x762: Push((int) 12409)
0x763: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x764: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x765: PushEmpty(string)
0x766: Stack[-1] = "Neutral" // @poff=89
0x767: Call2 0x5ca

0x768: Pop(1)
0x769: Push((int) 511221)
0x76a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x76b: Pop(1)
0x76c: @@@ ClearReplies(); Obj=0 // @poff=116
0x76d: Pop(0)
0x76e: Push((int) 511222)
0x76f: Push((int) 12405)
0x770: Push((int) 12410)
0x771: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x772: Pop(3)
0x773: Return(); Pop(0)

0x774: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x775: PushEmpty(bool)
0x776: Call2 0xb68

0x777: Pop(0)
0x778: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x779: @ lshStopAnimation()
0x77a: Pop(0)
0x77b: GOTO 0x77e

0x77c: @ StopAnimation()
0x77d: Pop(0)
0x77e: Return(); Pop(0)

0x77f: GOTO 0x5e1

0x780: Return(); Pop(0)

0x781: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x782: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x783: PushEmpty(bool, object)
0x784: PushEmpty(object)
0x785: Call2 0xa77

0x786: Stack[-1] = Stack[-2]
0x787: Pop(1)
0x788: Call2 0x9ca

0x789: Pop(2)
0x78a: PushEmpty(bool, object, float)
0x78b: Stack[-12] = Stack[-2]
0x78c: Stack[-1] = (float) 70.0
0x78d: Call2 0x975

0x78e: Pop(2)
0x78f: Pop(1); Push((bool) Stack[-1] == 0)
0x790: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x791: Stack[-10] = (int) -2
0x792: Return(); Pop(8)

0x793: @ CreateDialog(Stack[-4])
0x794: Pop(0)
0x795: PushEmpty(int)
0x796: Call2 0xb62

0x797: Pop(0)
0x798: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x799: Pop(1)
0x79a: PushEmpty(int)
0x79b: Call2 0xb60

0x79c: Pop(0)
0x79d: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x79e: Pop(1)
0x79f: PushEmpty(string)
0x7a0: Call2 0xb64

0x7a1: Pop(0)
0x7a2: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x7a3: Pop(1)
0x7a4: PushEmpty(string)
0x7a5: Call2 0xb66

0x7a6: Pop(0)
0x7a7: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x7a8: Pop(1)
0x7a9: PushEmpty(int)
0x7aa: Call2 0xb4f

0x7ab: Pop(0)
0x7ac: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x7ad: Pop(1)
0x7ae: Stack[-2] = (int) -1
0x7af: @ IsOverrideActive(Stack[-3])
0x7b0: Pop(0)
0x7b1: Push(Stack[-3])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7b3: Stack[-10] = (int) -2
0x7b4: Return(); Pop(8)

0x7b5: @ DoDialog(Stack[-4])
0x7b6: Pop(0)
0x7b7: PushEmpty(object, object)
0x7b8: Stack[-11] = Stack[-2]
0x7b9: Stack[-6] = Stack[-1]
0x7ba: Push(-2, 4); TaskCall(10)
0x7bb: Call2 0x7d2

0x7bc: Pop(-2, 4); TaskReturn
0x7bd: Pop(2)
0x7be: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x7bf: Pop(0)
0x7c0: Pop(0); Push((bool) Stack[-1] == 0)
0x7c1: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c2: @ sync()
0x7c3: Pop(0)
0x7c4: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x7c5: Pop(0)
0x7c6: GOTO 0x7c0

0x7c7: PushEmpty(object)
0x7c8: Stack[-10] = Stack[-1]
0x7c9: Call2 0x9b9

0x7ca: Pop(1)
0x7cb: @ StopDialog(Stack[-4])
0x7cc: Pop(0)
0x7cd: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x7ce: Pop(0)
0x7cf: Stack[-2] = Stack[-10]
0x7d0: Return(); Pop(8)

0x7d1: Stack[-4] = 0
0x7d2: PushEmpty()
0x7d3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7d4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7d5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7d6: Push((int) 1)
0x7d7: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7d8: PushEmpty(string)
0x7d9: Stack[-1] = "Neutral" // @poff=89
0x7da: Call2 0x80c

0x7db: Pop(1)
0x7dc: Push((int) 540542)
0x7dd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7de: Pop(1)
0x7df: @@@ ClearReplies(); Obj=0 // @poff=116
0x7e0: Pop(0)
0x7e1: Push((int) 540543)
0x7e2: Push((int) -1)
0x7e3: Push((int) 42552)
0x7e4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7e5: Pop(3)
0x7e6: Push((int) 540796)
0x7e7: Push((int) -1)
0x7e8: Push((int) 42845)
0x7e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7ea: Pop(3)
0x7eb: GOTO 0x7ee

0x7ec: Return(); Pop(0)

0x7ed: GOTO 0x7d6

0x7ee: PushEmpty(bool)
0x7ef: Call2 0xb68

0x7f0: Pop(0)
0x7f1: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7f2: @ lshWaitForAnimEnd()
0x7f3: Pop(0)
0x7f4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7f5: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f6: GOTO 0x7fc

0x7f7: PushEmpty(string)
0x7f8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7f9: Call2 0xa54

0x7fa: Pop(1)
0x7fb: GOTO 0x7f2

0x7fc: GOTO 0x80b

0x7fd: Push("all") // @poff=138
0x7fe: Push("idle") // @poff=146
0x7ff: @ PlayAnimation(Stack[-2], Stack[-1])
0x800: Pop(2)
0x801: @ WaitForAnimEnd()
0x802: Pop(0)
0x803: Push( Stack[3 + Tasks[-1].StackPointer] )
0x804: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x805: GOTO 0x80b

0x806: Push("all") // @poff=138
0x807: Push("idle") // @poff=146
0x808: @ PlayAnimation(Stack[-2], Stack[-1])
0x809: Pop(2)
0x80a: GOTO 0x801

0x80b: Return(); Pop(0)

0x80c: PushEmpty()
0x80d: PushEmpty(bool)
0x80e: Call2 0xb68

0x80f: Pop(0)
0x810: Pop(1); Push((bool) Stack[-1] == 0)
0x811: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x812: Return(); Pop(0)

0x813: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x814: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x815: Return(); Pop(0)

0x816: PushEmpty(string, bool)
0x817: Stack[-3] = Stack[-2]
0x818: Push("") // @poff=102
0x819: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x81a: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x81b: Stack[-1] = (bool) 0
0x81c: GOTO 0x81e

0x81d: Stack[-1] = (bool) 1
0x81e: Call2 0xa5b

0x81f: Pop(2)
0x820: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x821: Return(); Pop(0)

0x822: PushEmpty()
0x823: Push((int) 1)
0x824: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x825: PushEmpty()
0x826: Call2 0xa70

0x827: Pop(0)
0x828: Push((int) 42551)
0x829: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x82b: PushEmpty(string)
0x82c: Stack[-1] = "Neutral" // @poff=89
0x82d: Call2 0x80c

0x82e: Pop(1)
0x82f: Push((int) 540542)
0x830: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x831: Pop(1)
0x832: @@@ ClearReplies(); Obj=0 // @poff=116
0x833: Pop(0)
0x834: Push((int) 540543)
0x835: Push((int) -1)
0x836: Push((int) 42552)
0x837: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x838: Pop(3)
0x839: Push((int) 540796)
0x83a: Push((int) -1)
0x83b: Push((int) 42845)
0x83c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x83d: Pop(3)
0x83e: Return(); Pop(0)

0x83f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x840: PushEmpty(bool)
0x841: Call2 0xb68

0x842: Pop(0)
0x843: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x844: @ lshStopAnimation()
0x845: Pop(0)
0x846: GOTO 0x849

0x847: @ StopAnimation()
0x848: Pop(0)
0x849: Return(); Pop(0)

0x84a: GOTO 0x823

0x84b: Return(); Pop(0)

0x84c: Push(GlobalVars[1])
0x84d: Stack[-1] = (bool) 0
0x84e: GlobalVars[1] = Stack[-1]; Pop(1)
0x84f: PushEmpty()
0x850: Call2 0x853

0x851: Pop(0)
0x852: Return(); Pop(0)

0x853: PushEmpty(bool)
0x854: Call2 0x970

0x855: Pop(0)
0x856: Pop(1); Push((bool) Stack[-1] == 0)
0x857: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x858: PushEmpty()
0x859: Push(-0, 0); TaskCall(0)
0x85a: Call2 0x0

0x85b: Pop(-0, 0); TaskReturn
0x85c: Pop(0)
0x85d: PushEmpty()
0x85e: Call2 0x8d3

0x85f: Pop(0)
0x860: @ GetDirection(Stack[-0]T)
0x861: Pop(0)
0x862: PushEmpty()
0x863: Call2 0x909

0x864: Pop(0)
0x865: GOTO 0x862

0x866: Return(); Pop(0)

0x867: PushEmpty(object, object)
0x868: Push("player") // @poff=156
0x869: @ FindActor(Stack[-2], Stack[-1])
0x86a: Pop(1)
0x86b: Pop(0); Push((bool) Stack[-1] == 0)
0x86c: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86d: Stack[-3] = (bool) 0
0x86e: Return(); Pop(2)

0x86f: PushEmpty(bool, object)
0x870: Stack[-3] = Stack[-1]
0x871: Call2 0x967

0x872: Stack[-2] = Stack[-5]
0x873: Pop(2)
0x874: Return(); Pop(2)

0x875: Stack[-1] = 0
0x876: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x877: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x878: @ RotateAsync(Stack[-2], Stack[-1])
0x879: Pop(2)
0x87a: Return(); Pop(0)

0x87b: PushEmpty(object, bool, object, bool)
0x87c: Push("player") // @poff=156
0x87d: @ FindActor(Stack[-3], Stack[-1])
0x87e: Pop(1)
0x87f: Pop(0); Push((bool) Stack[-2] == 0)
0x880: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x881: Stack[-5] = (bool) 0
0x882: Return(); Pop(4)

0x883: PushEmpty(float, object)
0x884: Stack[-4] = Stack[-1]
0x885: Call2 0x955

0x886: Pop(1)
0x887: Push((float)90000.0)
0x888: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x889: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x88a: Stack[-5] = (bool) 0
0x88b: Return(); Pop(4)

0x88c: @ CanSee(Stack[-1], Stack[-2])
0x88d: Pop(0)
0x88e: Stack[-1] = Stack[-5]
0x88f: Return(); Pop(4)

0x890: Stack[-2] = 0
0x891: PushEmpty(float, float)
0x892: Push((int) 8)
0x893: Push((int) 16)
0x894: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x895: Pop(2)
0x896: Push((int) 10)
0x897: @ SetTimer(Stack[-1], Stack[-2])
0x898: Pop(1)
0x899: Return(); Pop(2)

0x89a: Push((int) 10)
0x89b: @ KillTimer(Stack[-1])
0x89c: Pop(1)
0x89d: Return(); Pop(0)

0x89e: PushEmpty()
0x89f: Push((int) 10)
0x8a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a1: IF (Stack[-1] == 0) GOTO 0x8c3; Pop(1)

0x8a2: PushEmpty()
0x8a3: Call2 0x89a

0x8a4: Pop(0)
0x8a5: PushEmpty(bool)
0x8a6: Stack[-1] = (bool) 0
0x8a7: PushEmpty(bool)
0x8a8: Call2 0x970

0x8a9: Pop(0)
0x8aa: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8ab: PushEmpty(bool)
0x8ac: Call2 0x87b

0x8ad: Pop(0)
0x8ae: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8af: Stack[-1] = (bool) 1
0x8b0: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8b1: PushEmpty(bool)
0x8b2: Call2 0x867

0x8b3: Pop(0)
0x8b4: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8b5: PushEmpty(bool, object)
0x8b6: PushEmpty(object)
0x8b7: Call2 0xa77

0x8b8: Stack[-1] = Stack[-2]
0x8b9: Pop(1)
0x8ba: Call2 0xa04

0x8bb: Pop(2)
0x8bc: GOTO 0x8c3

0x8bd: PushEmpty()
0x8be: Call2 0x876

0x8bf: Pop(0)
0x8c0: PushEmpty()
0x8c1: Call2 0x891

0x8c2: Pop(0)
0x8c3: Return(); Pop(0)

0x8c4: PushEmpty()
0x8c5: Call2 0x950

0x8c6: Pop(0)
0x8c7: PushEmpty()
0x8c8: Call2 0x89a

0x8c9: Pop(0)
0x8ca: @ lshStopSpeech()
0x8cb: Pop(0)
0x8cc: @ lshStopAnimation()
0x8cd: Pop(0)
0x8ce: @ StopAsync()
0x8cf: Pop(0)
0x8d0: @ Hold()
0x8d1: Pop(0)
0x8d2: Return(); Pop(0)

0x8d3: @ StopGroup0()
0x8d4: Pop(0)
0x8d5: PushEmpty()
0x8d6: Call2 0x89a

0x8d7: Pop(0)
0x8d8: PushEmpty(string)
0x8d9: Stack[-1] = "Neutral" // @poff=89
0x8da: Call2 0xa54

0x8db: Pop(1)
0x8dc: PushEmpty()
0x8dd: Call2 0x891

0x8de: Pop(0)
0x8df: Return(); Pop(0)

0x8e0: PushEmpty()
0x8e1: Push(Stack[-1])
0x8e2: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8e3: PushEmpty()
0x8e4: Call2 0x891

0x8e5: Pop(0)
0x8e6: GOTO 0x8eb

0x8e7: PushEmpty(string)
0x8e8: Stack[-1] = "Neutral" // @poff=89
0x8e9: Call2 0xa54

0x8ea: Pop(1)
0x8eb: Return(); Pop(0)

0x8ec: PushEmpty(bool, bool)
0x8ed: @ IsOverrideActive(Stack[-1])
0x8ee: Pop(0)
0x8ef: Pop(0); Push((bool) Stack[-1] == 0)
0x8f0: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x8f1: EventDisable(0)
0x8f2: PushEmpty()
0x8f3: Call2 0x950

0x8f4: Pop(0)
0x8f5: PushEmpty(bool, object)
0x8f6: Stack[-5] = Stack[-1]
0x8f7: Call2 0x967

0x8f8: Pop(2)
0x8f9: EventEnable(0)
0x8fa: PushEmpty(object)
0x8fb: Stack[-4] = Stack[-1]
0x8fc: Call2 0xb6a

0x8fd: Pop(1)
0x8fe: PushEmpty(string)
0x8ff: Stack[-1] = "Neutral" // @poff=89
0x900: Call2 0xa54

0x901: Pop(1)
0x902: PushEmpty()
0x903: Call2 0x89a

0x904: Pop(0)
0x905: PushEmpty()
0x906: Call2 0x891

0x907: Pop(0)
0x908: Return(); Pop(2)

0x909: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x90a: @ WaitForAnimEnd()
0x90b: Pop(0)
0x90c: PushEmpty(bool)
0x90d: Call2 0x970

0x90e: Pop(0)
0x90f: Pop(1); Push((bool) Stack[-1] == 0)
0x910: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x911: Return(); Pop(12)

0x912: PushEmpty(int)
0x913: Call2 0xaa2

0x914: Stack[-1] = Stack[-7]
0x915: Pop(1)
0x916: Stack[-5] = (int) 0
0x917: PushEmpty(bool)
0x918: Stack[-1] = (bool) 0
0x919: Push((int) 5)
0x91a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x91b: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x91c: PushEmpty(bool)
0x91d: Call2 0x970

0x91e: Pop(0)
0x91f: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x920: Stack[-1] = (bool) 1
0x921: IF (Stack[-1] == 0) GOTO 0x94b; Pop(1)

0x922: Pop(0); Push((bool) Stack[-6] == 0)
0x923: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x924: Push((int) 3)
0x925: @ Sleep(Stack[-1], Stack[-5])
0x926: Pop(1)
0x927: Pop(0); Push((bool) Stack[-4] == 0)
0x928: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x929: GOTO 0x94b

0x92a: GOTO 0x940

0x92b: @ irand(Stack[-3], Stack[-6])
0x92c: Pop(0)
0x92d: Push((int) 5)
0x92e: @ irand(Stack[-3], Stack[-1])
0x92f: Pop(1)
0x930: Push((int) 0)
0x931: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x932: IF (Stack[-1] == 0) GOTO 0x934; Pop(1)

0x933: Stack[-3] = (int) 0
0x934: Push("all") // @poff=138
0x935: PushEmpty(string, int)
0x936: Stack[-6] = Stack[-1]
0x937: Call2 0xa9b

0x938: Pop(1)
0x939: @ PlayAnimation(Stack[-2], Stack[-1])
0x93a: Pop(2)
0x93b: @ WaitForAnimEnd(Stack[-1])
0x93c: Pop(0)
0x93d: Pop(0); Push((bool) Stack[-1] == 0)
0x93e: IF (Stack[-1] == 0) GOTO 0x940; Pop(1)

0x93f: GOTO 0x94b

0x940: PushEmpty(bool)
0x941: Call2 0x94e

0x942: Pop(0)
0x943: Pop(1); Push((bool) Stack[-1] == 0)
0x944: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x945: GOTO 0x94b

0x946: @ ResetAAS()
0x947: Pop(0)
0x948: Push((int) 1)
0x949: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x94a: GOTO 0x917

0x94b: @ ResetAAS()
0x94c: Pop(0)
0x94d: Return(); Pop(12)

0x94e: Stack[-1] = (bool) 1
0x94f: Return(); Pop(0)

0x950: @ StopAnimation()
0x951: Pop(0)
0x952: @ StopGroup0()
0x953: Pop(0)
0x954: Return(); Pop(0)

0x955: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x956: @ GetPosition(Stack[-3])
0x957: Pop(0)
0x958: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x959: Pop(0)
0x95a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x95b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x95c: Return(); Pop(6)

0x95d: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x95e: @ GetPosition(Stack[-3])
0x95f: Pop(0)
0x960: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x961: Push(CvectorIndex(Stack[-2], 0))
0x962: Push(CvectorIndex(Stack[-3], 2))
0x963: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x964: Pop(2)
0x965: Stack[-1] = Stack[-8]
0x966: Return(); Pop(6)

0x967: PushEmpty(cvector, cvector)
0x968: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x969: Pop(0)
0x96a: PushEmpty(bool, cvector)
0x96b: Stack[-3] = Stack[-1]
0x96c: Call2 0x95d

0x96d: Stack[-2] = Stack[-6]
0x96e: Pop(2)
0x96f: Return(); Pop(2)

0x970: PushEmpty(bool, bool)
0x971: @ IsLoaded(Stack[-1])
0x972: Pop(0)
0x973: Stack[-1] = Stack[-3]
0x974: Return(); Pop(2)

0x975: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x976: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x977: Pop(0)
0x978: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x979: Pop(0)
0x97a: Push(CvectorIndex(Stack[-8], 1))
0x97b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x97c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x97d: @ GetPosition(Stack[-7])
0x97e: Pop(0)
0x97f: @ GetEyesHeight(Stack[-9])
0x980: Pop(0)
0x981: Push(CvectorIndex(Stack[-7], 1))
0x982: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x983: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x984: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x985: Push(CvectorIndex(Stack[-6], 1))
0x986: Stack[-1] = (int) 0
0x987: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x988: Pop(0); Push(Stack[-6] | Stack[-6]);
0x989: Pop(1); Push(Sqrt(Stack[-1]))
0x98a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x98b: Stack[-5] = -Stack[-6]; Pop(0);
0x98c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x98d: PushEmpty(cvector, cvector)
0x98e: Push([0.0, 1.0, 0.0])
0x98f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x990: Call2 0xa7d

0x991: Pop(1)
0x992: Push((int) 25)
0x993: Pop(2); Push(Stack[-2] * Stack[-1]);
0x994: Pop(2); Push(Stack[-2] + Stack[-1]);
0x995: Push([0.0, 10.0, 0.0])
0x996: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x997: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x998: @ IsOverrideActive(Stack[-2])
0x999: Pop(0)
0x99a: Push(Stack[-2])
0x99b: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x99c: Stack[-21] = (bool) 0
0x99d: Return(); Pop(18)

0x99e: @ StopWorld()
0x99f: Pop(0)
0x9a0: @ CameraTransit(Stack[-3], Stack[-5])
0x9a1: Pop(0)
0x9a2: Push(CvectorIndex(Stack[-4], 0))
0x9a3: Push(CvectorIndex(Stack[-5], 2))
0x9a4: @ Rotate(Stack[-2], Stack[-1])
0x9a5: Pop(2)
0x9a6: PushEmpty(bool)
0x9a7: Call2 0xb68

0x9a8: Pop(0)
0x9a9: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9aa: GOTO 0x9b3

0x9ab: Push("head") // @poff=196
0x9ac: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9ad: Pop(1)
0x9ae: Push(Stack[-1])
0x9af: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9b0: Push("head") // @poff=196
0x9b1: @ LookAsyncCamera(Stack[-1])
0x9b2: Pop(1)
0x9b3: @ CameraWaitForPlayFinish()
0x9b4: Pop(0)
0x9b5: @ ResumeWorld()
0x9b6: Pop(0)
0x9b7: Stack[-21] = (bool) 1
0x9b8: Return(); Pop(18)

0x9b9: PushEmpty(bool, bool)
0x9ba: @ CameraSwitchToNormal()
0x9bb: Pop(0)
0x9bc: PushEmpty(bool)
0x9bd: Call2 0xb68

0x9be: Pop(0)
0x9bf: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9c0: GOTO 0x9c9

0x9c1: Push("head") // @poff=196
0x9c2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9c3: Pop(1)
0x9c4: Push(Stack[-1])
0x9c5: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c6: Push("head") // @poff=196
0x9c7: @ UnlookAsync(Stack[-1])
0x9c8: Pop(1)
0x9c9: Return(); Pop(2)

0x9ca: PushEmpty(int, int, int, int)
0x9cb: Push("voice_common") // @poff=206
0x9cc: @ GetVariable(Stack[-1], Stack[-3])
0x9cd: Pop(1)
0x9ce: Push(Stack[-2])
0x9cf: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9d0: PushEmpty(bool, object)
0x9d1: Stack[-7] = Stack[-1]
0x9d2: Call2 0xa04

0x9d3: Pop(1)
0x9d4: Pop(1); Push((bool) Stack[-1] == 0)
0x9d5: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9d6: PushEmpty(bool, object)
0x9d7: Stack[-7] = Stack[-1]
0x9d8: Call2 0xa29

0x9d9: Pop(1)
0x9da: Pop(1); Push((bool) Stack[-1] == 0)
0x9db: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9dc: Stack[-6] = (bool) 0
0x9dd: Return(); Pop(4)

0x9de: Push((int) 2)
0x9df: @ irand(Stack[-2], Stack[-1])
0x9e0: Pop(1)
0x9e1: Push(Stack[-1])
0x9e2: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9e3: Push("voice_common") // @poff=206
0x9e4: Push((int) 1)
0x9e5: Pop(1); Push(Stack[-4] + Stack[-1]);
0x9e6: Push((int) 3)
0x9e7: Pop(2); Push(Stack[-2] % Stack[-1]);
0x9e8: @ SetVariable(Stack[-2], Stack[-1])
0x9e9: Pop(2)
0x9ea: GOTO 0x9ef

0x9eb: Push("voice_common") // @poff=206
0x9ec: Push((int) 0)
0x9ed: @ SetVariable(Stack[-2], Stack[-1])
0x9ee: Pop(2)
0x9ef: GOTO 0xa02

0x9f0: PushEmpty(bool, object)
0x9f1: Stack[-7] = Stack[-1]
0x9f2: Call2 0xa29

0x9f3: Pop(1)
0x9f4: Pop(1); Push((bool) Stack[-1] == 0)
0x9f5: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9f6: PushEmpty(bool, object)
0x9f7: Stack[-7] = Stack[-1]
0x9f8: Call2 0xa04

0x9f9: Pop(1)
0x9fa: Pop(1); Push((bool) Stack[-1] == 0)
0x9fb: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9fc: Stack[-6] = (bool) 0
0x9fd: Return(); Pop(4)

0x9fe: Push("voice_common") // @poff=206
0x9ff: Push((int) 1)
0xa00: @ SetVariable(Stack[-2], Stack[-1])
0xa01: Pop(2)
0xa02: Stack[-6] = (bool) 1
0xa03: Return(); Pop(4)

0xa04: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa05: Stack[-5] = "c" // @poff=232
0xa06: Stack[-4] = (int) 0
0xa07: Push((int) 1)
0xa08: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa09: Push((int) 1)
0xa0a: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa0b: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa0c: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0xa0d: Pop(1)
0xa0e: Pop(0); Push((bool) Stack[-3] == 0)
0xa0f: IF (Stack[-1] == 0) GOTO 0xa11; Pop(1)

0xa10: GOTO 0xa14

0xa11: Push((int) 1)
0xa12: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa13: GOTO 0xa07

0xa14: Pop(0); Push((bool) Stack[-4] == 0)
0xa15: IF (Stack[-1] == 0) GOTO 0xa18; Pop(1)

0xa16: Stack[-12] = (bool) 0
0xa17: Return(); Pop(10)

0xa18: Stack[-2] = (int) 0
0xa19: Push((int) 1)
0xa1a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa1b: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa1c: @ irand(Stack[-2], Stack[-4])
0xa1d: Pop(0)
0xa1e: Push((int) 1)
0xa1f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa20: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa21: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0xa22: Pop(1)
0xa23: PushEmpty(bool, string)
0xa24: Stack[-3] = Stack[-1]
0xa25: Call2 0xa61

0xa26: Stack[-2] = Stack[-14]
0xa27: Pop(2)
0xa28: Return(); Pop(10)

0xa29: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa2a: Push("d") // @poff=202
0xa2b: PushEmpty(int)
0xa2c: Call2 0xa8c

0xa2d: Pop(0)
0xa2e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa2f: Push("m") // @poff=260
0xa30: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xa31: Stack[-4] = (int) 0
0xa32: Push((int) 1)
0xa33: IF (Stack[-1] == 0) GOTO 0xa3f; Pop(1)

0xa34: Push((int) 1)
0xa35: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa36: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa37: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0xa38: Pop(1)
0xa39: Pop(0); Push((bool) Stack[-3] == 0)
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa3b: GOTO 0xa3f

0xa3c: Push((int) 1)
0xa3d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa3e: GOTO 0xa32

0xa3f: Pop(0); Push((bool) Stack[-4] == 0)
0xa40: IF (Stack[-1] == 0) GOTO 0xa43; Pop(1)

0xa41: Stack[-12] = (bool) 0
0xa42: Return(); Pop(10)

0xa43: Stack[-2] = (int) 0
0xa44: Push((int) 1)
0xa45: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa46: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa47: @ irand(Stack[-2], Stack[-4])
0xa48: Pop(0)
0xa49: Push((int) 1)
0xa4a: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa4b: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa4c: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0xa4d: Pop(1)
0xa4e: PushEmpty(bool, string)
0xa4f: Stack[-3] = Stack[-1]
0xa50: Call2 0xa61

0xa51: Stack[-2] = Stack[-14]
0xa52: Pop(2)
0xa53: Return(); Pop(10)

0xa54: PushEmpty(float, float, float, float)
0xa55: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xa56: Pop(0)
0xa57: Push((bool) 0)
0xa58: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa59: Pop(1)
0xa5a: Return(); Pop(4)

0xa5b: PushEmpty(float, float, float, float)
0xa5c: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0xa5d: Pop(0)
0xa5e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0xa5f: Pop(0)
0xa60: Return(); Pop(4)

0xa61: PushEmpty(bool, bool)
0xa62: PushEmpty(bool)
0xa63: Call2 0xb68

0xa64: Pop(0)
0xa65: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa66: @ lshHasSpeech(Stack[-1], Stack[-3])
0xa67: Pop(0)
0xa68: Push(Stack[-1])
0xa69: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa6a: @ lshPlaySpeech(Stack[-3])
0xa6b: Pop(0)
0xa6c: Stack[-4] = (bool) 1
0xa6d: Return(); Pop(2)

0xa6e: Stack[-4] = (bool) 0
0xa6f: Return(); Pop(2)

0xa70: PushEmpty(bool)
0xa71: Call2 0xb68

0xa72: Pop(0)
0xa73: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa74: @ lshStopSpeech()
0xa75: Pop(0)
0xa76: Return(); Pop(0)

0xa77: PushEmpty(object, object)
0xa78: @ self(Stack[-1])
0xa79: Pop(0)
0xa7a: Stack[-1] = Stack[-3]
0xa7b: Return(); Pop(2)

0xa7c: Stack[-1] = 0
0xa7d: PushEmpty(float, float)
0xa7e: Pop(0); Push(Stack[-3] | Stack[-3]);
0xa7f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xa80: Push((float)9.999999974752427e-07)
0xa81: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa82: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa83: Stack[-4] = [0.0, 0.0, 0.0]
0xa84: Return(); Pop(2)

0xa85: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa86: Return(); Pop(2)

0xa87: PushEmpty(int, int)
0xa88: @ GetVariable(Stack[-3], Stack[-1])
0xa89: Pop(0)
0xa8a: Stack[-1] = Stack[-4]
0xa8b: Return(); Pop(2)

0xa8c: PushEmpty(float, float)
0xa8d: @ GetGameTime(Stack[-1])
0xa8e: Pop(0)
0xa8f: Push((int) 1)
0xa90: PushEmpty(int)
0xa91: Push((int) 24)
0xa92: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa93: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa94: Return(); Pop(2)

0xa95: PushEmpty()
0xa96: PushEmpty(int)
0xa97: Call2 0xa8c

0xa98: Pop(0)
0xa99: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xa9a: Return(); Pop(0)

0xa9b: PushEmpty(string, string)
0xa9c: Stack[-1] = "idle" // @poff=146
0xa9d: Push(Stack[-3])
0xa9e: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa9f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xaa0: Stack[-1] = Stack[-4]
0xaa1: Return(); Pop(2)

0xaa2: PushEmpty(int, bool, int, bool)
0xaa3: Stack[-2] = (int) 0
0xaa4: Push("all") // @poff=138
0xaa5: PushEmpty(string, int)
0xaa6: Stack[-5] = Stack[-1]
0xaa7: Call2 0xa9b

0xaa8: Pop(1)
0xaa9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xaaa: Pop(2)
0xaab: Pop(0); Push((bool) Stack[-1] == 0)
0xaac: IF (Stack[-1] == 0) GOTO 0xaae; Pop(1)

0xaad: GOTO 0xab1

0xaae: Push((int) 1)
0xaaf: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xab0: GOTO 0xaa4

0xab1: Stack[-2] = Stack[-5]
0xab2: Return(); Pop(4)

0xab3: PushEmpty()
0xab4: Push("ood3Notkin2") // @poff=264
0xab5: Push((int) 1)
0xab6: @ SetVariable(Stack[-2], Stack[-1])
0xab7: Pop(2)
0xab8: Return(); Pop(0)

0xab9: PushEmpty()
0xaba: Push("ood3Notkin3") // @poff=288
0xabb: Push((int) 1)
0xabc: @ SetVariable(Stack[-2], Stack[-1])
0xabd: Pop(2)
0xabe: Return(); Pop(0)

0xabf: PushEmpty()
0xac0: Push("ood4Notkin2") // @poff=312
0xac1: Push((int) 1)
0xac2: @ SetVariable(Stack[-2], Stack[-1])
0xac3: Pop(2)
0xac4: Return(); Pop(0)

0xac5: PushEmpty()
0xac6: Push("ood4Notkin3") // @poff=336
0xac7: Push((int) 1)
0xac8: @ SetVariable(Stack[-2], Stack[-1])
0xac9: Pop(2)
0xaca: Return(); Pop(0)

0xacb: PushEmpty()
0xacc: Push("KnowTwoSouls") // @poff=360
0xacd: Push((int) 1)
0xace: @ SetVariable(Stack[-2], Stack[-1])
0xacf: Pop(2)
0xad0: Return(); Pop(0)

0xad1: PushEmpty()
0xad2: Push("KnowNotkin") // @poff=386
0xad3: Push((int) 1)
0xad4: @ SetVariable(Stack[-2], Stack[-1])
0xad5: Pop(2)
0xad6: Return(); Pop(0)

0xad7: PushEmpty()
0xad8: Push("ood3Notkin1") // @poff=408
0xad9: Push((int) 1)
0xada: @ SetVariable(Stack[-2], Stack[-1])
0xadb: Pop(2)
0xadc: Return(); Pop(0)

0xadd: PushEmpty()
0xade: Push("ood4Notkin1") // @poff=432
0xadf: Push((int) 1)
0xae0: @ SetVariable(Stack[-2], Stack[-1])
0xae1: Pop(2)
0xae2: Return(); Pop(0)

0xae3: PushEmpty()
0xae4: PushEmpty(int, string)
0xae5: Stack[-1] = "ood3Notkin2" // @poff=264
0xae6: Call2 0xa87

0xae7: Pop(1)
0xae8: Push((int) 0)
0xae9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xaea: IF (Stack[-1] == 0) GOTO 0xaed; Pop(1)

0xaeb: Stack[-2] = (bool) 1
0xaec: Return(); Pop(0)

0xaed: Stack[-2] = (bool) 0
0xaee: Return(); Pop(0)

0xaef: PushEmpty()
0xaf0: PushEmpty(int, string)
0xaf1: Stack[-1] = "ood3Notkin3" // @poff=288
0xaf2: Call2 0xa87

0xaf3: Pop(1)
0xaf4: Push((int) 0)
0xaf5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xaf6: IF (Stack[-1] == 0) GOTO 0xaf9; Pop(1)

0xaf7: Stack[-2] = (bool) 1
0xaf8: Return(); Pop(0)

0xaf9: Stack[-2] = (bool) 0
0xafa: Return(); Pop(0)

0xafb: PushEmpty()
0xafc: PushEmpty(int, string)
0xafd: Stack[-1] = "ood4Notkin2" // @poff=312
0xafe: Call2 0xa87

0xaff: Pop(1)
0xb00: Push((int) 0)
0xb01: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb02: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xb03: Stack[-2] = (bool) 1
0xb04: Return(); Pop(0)

0xb05: Stack[-2] = (bool) 0
0xb06: Return(); Pop(0)

0xb07: PushEmpty()
0xb08: PushEmpty(int, string)
0xb09: Stack[-1] = "ood4Notkin3" // @poff=336
0xb0a: Call2 0xa87

0xb0b: Pop(1)
0xb0c: Push((int) 0)
0xb0d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb0e: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0f: Stack[-2] = (bool) 1
0xb10: Return(); Pop(0)

0xb11: Stack[-2] = (bool) 0
0xb12: Return(); Pop(0)

0xb13: PushEmpty()
0xb14: PushEmpty(int, string)
0xb15: Stack[-1] = "d4q03" // @poff=456
0xb16: Call2 0xa87

0xb17: Pop(1)
0xb18: Push((int) 2)
0xb19: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb1a: IF (Stack[-1] == 0) GOTO 0xb1d; Pop(1)

0xb1b: Stack[-2] = (bool) 1
0xb1c: Return(); Pop(0)

0xb1d: Stack[-2] = (bool) 0
0xb1e: Return(); Pop(0)

0xb1f: PushEmpty()
0xb20: PushEmpty(int, string)
0xb21: Stack[-1] = "d4q03_alldead" // @poff=468
0xb22: Call2 0xa87

0xb23: Pop(1)
0xb24: Push((int) 1)
0xb25: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb26: IF (Stack[-1] == 0) GOTO 0xb29; Pop(1)

0xb27: Stack[-2] = (bool) 1
0xb28: Return(); Pop(0)

0xb29: Stack[-2] = (bool) 0
0xb2a: Return(); Pop(0)

0xb2b: PushEmpty()
0xb2c: PushEmpty(int, string)
0xb2d: Stack[-1] = "ood3Notkin1" // @poff=408
0xb2e: Call2 0xa87

0xb2f: Pop(1)
0xb30: Push((int) 0)
0xb31: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb32: IF (Stack[-1] == 0) GOTO 0xb35; Pop(1)

0xb33: Stack[-2] = (bool) 1
0xb34: Return(); Pop(0)

0xb35: Stack[-2] = (bool) 0
0xb36: Return(); Pop(0)

0xb37: PushEmpty()
0xb38: PushEmpty(int, string)
0xb39: Stack[-1] = "d4q03" // @poff=456
0xb3a: Call2 0xa87

0xb3b: Pop(1)
0xb3c: Push((int) 3)
0xb3d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb3e: IF (Stack[-1] == 0) GOTO 0xb41; Pop(1)

0xb3f: Stack[-2] = (bool) 1
0xb40: Return(); Pop(0)

0xb41: Stack[-2] = (bool) 0
0xb42: Return(); Pop(0)

0xb43: PushEmpty()
0xb44: PushEmpty(int, string)
0xb45: Stack[-1] = "ood4Notkin1" // @poff=432
0xb46: Call2 0xa87

0xb47: Pop(1)
0xb48: Push((int) 0)
0xb49: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb4a: IF (Stack[-1] == 0) GOTO 0xb4d; Pop(1)

0xb4b: Stack[-2] = (bool) 1
0xb4c: Return(); Pop(0)

0xb4d: Stack[-2] = (bool) 0
0xb4e: Return(); Pop(0)

0xb4f: PushEmpty(int, int)
0xb50: Push("branch") // @poff=496
0xb51: @ GetVariable(Stack[-1], Stack[-2])
0xb52: Pop(1)
0xb53: Push((int) 0)
0xb54: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb55: IF (Stack[-1] == 0) GOTO 0xb59; Pop(1)

0xb56: Stack[-3] = (int) 1
0xb57: Return(); Pop(2)

0xb58: GOTO 0xb5e

0xb59: Push((int) 1)
0xb5a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5b: IF (Stack[-1] == 0) GOTO 0xb5e; Pop(1)

0xb5c: Stack[-3] = (int) 2
0xb5d: Return(); Pop(2)

0xb5e: Stack[-3] = (int) 3
0xb5f: Return(); Pop(2)

0xb60: Stack[-1] = (int) 515548
0xb61: Return(); Pop(0)

0xb62: Stack[-1] = (int) 502873
0xb63: Return(); Pop(0)

0xb64: Stack[-1] = "ui/NPC_Notkin.png" // @poff=510
0xb65: Return(); Pop(0)

0xb66: Stack[-1] = "ui/NPC_Notkin_b.png" // @poff=546
0xb67: Return(); Pop(0)

0xb68: Stack[-1] = (bool) 1
0xb69: Return(); Pop(0)

0xb6a: PushEmpty()
0xb6b: Push(GlobalVars[1])
0xb6c: Pop(1); Push((bool) Stack[-1] == 0)
0xb6d: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0xb6e: PushEmpty(int, object)
0xb6f: Stack[-3] = Stack[-1]
0xb70: Push(-2, 1); TaskCall(3)
0xb71: Call2 0x110

0xb72: Pop(-2, 1); TaskReturn
0xb73: Pop(2)
0xb74: Push(GlobalVars[1])
0xb75: Stack[-1] = (bool) 1
0xb76: GlobalVars[1] = Stack[-1]; Pop(1)
0xb77: PushEmpty(bool, int)
0xb78: Stack[-1] = (int) 1
0xb79: Call2 0xa95

0xb7a: Pop(1)
0xb7b: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb7c: Return(); Pop(0)

0xb7d: PushEmpty(bool, int)
0xb7e: Stack[-1] = (int) 3
0xb7f: Call2 0xa95

0xb80: Pop(1)
0xb81: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb82: PushEmpty(int, object)
0xb83: Stack[-3] = Stack[-1]
0xb84: Push(-2, 1); TaskCall(5)
0xb85: Call2 0x24e

0xb86: Pop(-2, 1); TaskReturn
0xb87: Pop(2)
0xb88: Return(); Pop(0)

0xb89: PushEmpty(bool, int)
0xb8a: Stack[-1] = (int) 4
0xb8b: Call2 0xa95

0xb8c: Pop(1)
0xb8d: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb8e: PushEmpty(int, object)
0xb8f: Stack[-3] = Stack[-1]
0xb90: Push(-2, 1); TaskCall(7)
0xb91: Call2 0x4f7

0xb92: Pop(-2, 1); TaskReturn
0xb93: Pop(2)
0xb94: Return(); Pop(0)

0xb95: PushEmpty(bool, int)
0xb96: Stack[-1] = (int) 12
0xb97: Call2 0xa95

0xb98: Pop(1)
0xb99: IF (Stack[-1] == 0) GOTO 0xba1; Pop(1)

0xb9a: PushEmpty(int, object)
0xb9b: Stack[-3] = Stack[-1]
0xb9c: Push(-2, 1); TaskCall(1)
0xb9d: Call2 0xd

0xb9e: Pop(-2, 1); TaskReturn
0xb9f: Pop(2)
0xba0: Return(); Pop(0)

0xba1: PushEmpty(int, object)
0xba2: Stack[-3] = Stack[-1]
0xba3: Push(-2, 1); TaskCall(9)
0xba4: Call2 0x781

0xba5: Pop(-2, 1); TaskReturn
0xba6: Pop(2)
0xba7: Return(); Pop(0)

