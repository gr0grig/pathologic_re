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
	W:d1q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Rubin.png
	W:ui/NPC_Rubin_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000640031007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0052007500620069006e002e0070006e0067000000750069002f004e00500043005f0052007500620069006e005f0062002e0070006e0067000000
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x28b
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcc Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x28f Vars = (string)
		EVENT_6 Op = 0x2a3 Vars = ()
		EVENT_5 Op = 0x2b0 Vars = ()
		EVENT_7 Op = 0x2ff Vars = (int)
		EVENT_45 Op = 0x341 Vars = (bool)
		EVENT_0 Op = 0x34d Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x3d1

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
0x11: Call2 0x4d8

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x42b

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x3d6

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x56c

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x56a

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x56e

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x570

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x559

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
0x55: Call2 0x41a

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
0x63: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x517

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0xb6

0x6c: Pop(1)
0x6d: Push((int) 509170)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: Push((int) 509171)
0x73: Push((int) 10056)
0x74: Push((int) 10055)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 509175)
0x78: Push((int) 10062)
0x79: Push((int) 10061)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 509187)
0x7d: Push((int) 10077)
0x7e: Push((int) 10076)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0x98

0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral" // @poff=89
0x84: Call2 0xb6

0x85: Pop(1)
0x86: Push((int) 531961)
0x87: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x88: Pop(1)
0x89: @@@ ClearReplies(); Obj=0 // @poff=116
0x8a: Pop(0)
0x8b: Push((int) 532856)
0x8c: Push((int) -1)
0x8d: Push((int) 34341)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: Push((int) 531962)
0x91: Push((int) -1)
0x92: Push((int) 33366)
0x93: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x94: Pop(3)
0x95: GOTO 0x98

0x96: Return(); Pop(0)

0x97: GOTO 0x62

0x98: PushEmpty(bool)
0x99: Call2 0x572

0x9a: Pop(0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x9c: @ lshWaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: PushEmpty(string)
0xa2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa3: Call2 0x4b5

0xa4: Pop(1)
0xa5: GOTO 0x9c

0xa6: GOTO 0xb5

0xa7: Push("all") // @poff=138
0xa8: Push("idle") // @poff=146
0xa9: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa: Pop(2)
0xab: @ WaitForAnimEnd()
0xac: Pop(0)
0xad: Push( Stack[3 + Tasks[-1].StackPointer] )
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: GOTO 0xb5

0xb0: Push("all") // @poff=138
0xb1: Push("idle") // @poff=146
0xb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: GOTO 0xab

0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: PushEmpty(bool)
0xb8: Call2 0x572

0xb9: Pop(0)
0xba: Pop(1); Push((bool) Stack[-1] == 0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Return(); Pop(0)

0xbd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Return(); Pop(0)

0xc0: PushEmpty(string, bool)
0xc1: Stack[-3] = Stack[-2]
0xc2: Push("") // @poff=102
0xc3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc5: Stack[-1] = (bool) 0
0xc6: GOTO 0xc8

0xc7: Stack[-1] = (bool) 1
0xc8: Call2 0x4bc

0xc9: Pop(2)
0xca: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: Push((int) 1)
0xce: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0xcf: PushEmpty()
0xd0: Call2 0x4d1

0xd1: Pop(0)
0xd2: Push((int) 10088)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x50e

0xd9: Pop(2)
0xda: Push((int) 34358)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x50e

0xe1: Pop(2)
0xe2: Push((int) 10081)
0xe3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe5: PushEmpty(object, object)
0xe6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8: Call2 0x50e

0xe9: Pop(2)
0xea: Push((int) 10054)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0xed: PushEmpty(bool, object)
0xee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xef: Call2 0x517

0xf0: Pop(1)
0xf1: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral" // @poff=89
0xf4: Call2 0xb6

0xf5: Pop(1)
0xf6: Push((int) 509170)
0xf7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf8: Pop(1)
0xf9: @@@ ClearReplies(); Obj=0 // @poff=116
0xfa: Pop(0)
0xfb: Push((int) 509171)
0xfc: Push((int) 10056)
0xfd: Push((int) 10055)
0xfe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xff: Pop(3)
0x100: Push((int) 509175)
0x101: Push((int) 10062)
0x102: Push((int) 10061)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Push((int) 509187)
0x106: Push((int) 10077)
0x107: Push((int) 10076)
0x108: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral" // @poff=89
0x10d: Call2 0xb6

0x10e: Pop(1)
0x10f: Push((int) 531961)
0x110: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x111: Pop(1)
0x112: @@@ ClearReplies(); Obj=0 // @poff=116
0x113: Pop(0)
0x114: Push((int) 532856)
0x115: Push((int) -1)
0x116: Push((int) 34341)
0x117: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x118: Pop(3)
0x119: Push((int) 531962)
0x11a: Push((int) -1)
0x11b: Push((int) 33366)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 10077)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral" // @poff=89
0x124: Call2 0xb6

0x125: Pop(1)
0x126: Push((int) 509188)
0x127: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x128: Pop(1)
0x129: @@@ ClearReplies(); Obj=0 // @poff=116
0x12a: Pop(0)
0x12b: Push((int) 509190)
0x12c: Push((int) 10080)
0x12d: Push((int) 10079)
0x12e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12f: Pop(3)
0x130: Push((int) 509189)
0x131: Push((int) -1)
0x132: Push((int) 10078)
0x133: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 10080)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral" // @poff=89
0x13b: Call2 0xb6

0x13c: Pop(1)
0x13d: Push((int) 509191)
0x13e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13f: Pop(1)
0x140: @@@ ClearReplies(); Obj=0 // @poff=116
0x141: Pop(0)
0x142: Push((int) 509193)
0x143: Push((int) 10083)
0x144: Push((int) 10082)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: Push((int) 509192)
0x148: Push((int) -1)
0x149: Push((int) 10081)
0x14a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 10083)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral" // @poff=89
0x152: Call2 0xb6

0x153: Pop(1)
0x154: Push((int) 509194)
0x155: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x156: Pop(1)
0x157: @@@ ClearReplies(); Obj=0 // @poff=116
0x158: Pop(0)
0x159: Push((int) 509195)
0x15a: Push((int) 10085)
0x15b: Push((int) 10084)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Push((int) 509202)
0x15f: Push((int) 10085)
0x160: Push((int) 10093)
0x161: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: Push((int) 10085)
0x165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral" // @poff=89
0x169: Call2 0xb6

0x16a: Pop(1)
0x16b: Push((int) 509196)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 509197)
0x171: Push((int) 10087)
0x172: Push((int) 10086)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 509200)
0x176: Push((int) 34347)
0x177: Push((int) 10089)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Push((int) 509201)
0x17b: Push((int) 34339)
0x17c: Push((int) 10091)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 34339)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral" // @poff=89
0x185: Call2 0xb6

0x186: Pop(1)
0x187: Push((int) 532854)
0x188: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x189: Pop(1)
0x18a: @@@ ClearReplies(); Obj=0 // @poff=116
0x18b: Pop(0)
0x18c: Push((int) 532855)
0x18d: Push((int) 10087)
0x18e: Push((int) 34340)
0x18f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 34347)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral" // @poff=89
0x197: Call2 0xb6

0x198: Pop(1)
0x199: Push((int) 532861)
0x19a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19b: Pop(1)
0x19c: @@@ ClearReplies(); Obj=0 // @poff=116
0x19d: Pop(0)
0x19e: Push((int) 532862)
0x19f: Push((int) 34349)
0x1a0: Push((int) 34348)
0x1a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a2: Pop(3)
0x1a3: Push((int) 532865)
0x1a4: Push((int) 34352)
0x1a5: Push((int) 34351)
0x1a6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 34352)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Neutral" // @poff=89
0x1ae: Call2 0xb6

0x1af: Pop(1)
0x1b0: Push((int) 532866)
0x1b1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b2: Pop(1)
0x1b3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b4: Pop(0)
0x1b5: Push((int) 532867)
0x1b6: Push((int) 34354)
0x1b7: Push((int) 34353)
0x1b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 34349)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral" // @poff=89
0x1c0: Call2 0xb6

0x1c1: Pop(1)
0x1c2: Push((int) 532863)
0x1c3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c4: Pop(1)
0x1c5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c6: Pop(0)
0x1c7: Push((int) 532864)
0x1c8: Push((int) 34354)
0x1c9: Push((int) 34350)
0x1ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 34354)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Neutral" // @poff=89
0x1d2: Call2 0xb6

0x1d3: Pop(1)
0x1d4: Push((int) 532868)
0x1d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d6: Pop(1)
0x1d7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d8: Pop(0)
0x1d9: Push((int) 532869)
0x1da: Push((int) 10087)
0x1db: Push((int) 34356)
0x1dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: Push((int) 10087)
0x1e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral" // @poff=89
0x1e4: Call2 0xb6

0x1e5: Pop(1)
0x1e6: Push((int) 509198)
0x1e7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e8: Pop(1)
0x1e9: @@@ ClearReplies(); Obj=0 // @poff=116
0x1ea: Pop(0)
0x1eb: Push((int) 509199)
0x1ec: Push((int) -1)
0x1ed: Push((int) 10088)
0x1ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ef: Pop(3)
0x1f0: Push((int) 532870)
0x1f1: Push((int) -1)
0x1f2: Push((int) 34358)
0x1f3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f4: Pop(3)
0x1f5: Return(); Pop(0)

0x1f6: Push((int) 10062)
0x1f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Neutral" // @poff=89
0x1fb: Call2 0xb6

0x1fc: Pop(1)
0x1fd: Push((int) 509176)
0x1fe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ff: Pop(1)
0x200: @@@ ClearReplies(); Obj=0 // @poff=116
0x201: Pop(0)
0x202: Push((int) 509177)
0x203: Push((int) 10064)
0x204: Push((int) 10063)
0x205: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Push((int) 10064)
0x209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20b: PushEmpty(string)
0x20c: Stack[-1] = "Neutral" // @poff=89
0x20d: Call2 0xb6

0x20e: Pop(1)
0x20f: Push((int) 509178)
0x210: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x211: Pop(1)
0x212: @@@ ClearReplies(); Obj=0 // @poff=116
0x213: Pop(0)
0x214: Push((int) 509179)
0x215: Push((int) 10066)
0x216: Push((int) 10065)
0x217: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x218: Pop(3)
0x219: Push((int) 509185)
0x21a: Push((int) 10066)
0x21b: Push((int) 10073)
0x21c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21d: Pop(3)
0x21e: Return(); Pop(0)

0x21f: Push((int) 10066)
0x220: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x222: PushEmpty(string)
0x223: Stack[-1] = "Neutral" // @poff=89
0x224: Call2 0xb6

0x225: Pop(1)
0x226: Push((int) 509180)
0x227: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x228: Pop(1)
0x229: @@@ ClearReplies(); Obj=0 // @poff=116
0x22a: Pop(0)
0x22b: Push((int) 509181)
0x22c: Push((int) 10068)
0x22d: Push((int) 10067)
0x22e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22f: Pop(3)
0x230: Push((int) 509184)
0x231: Push((int) 10068)
0x232: Push((int) 10071)
0x233: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x234: Pop(3)
0x235: Return(); Pop(0)

0x236: Push((int) 10068)
0x237: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x239: PushEmpty(string)
0x23a: Stack[-1] = "Neutral" // @poff=89
0x23b: Call2 0xb6

0x23c: Pop(1)
0x23d: Push((int) 509182)
0x23e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x23f: Pop(1)
0x240: @@@ ClearReplies(); Obj=0 // @poff=116
0x241: Pop(0)
0x242: Push((int) 509183)
0x243: Push((int) 10085)
0x244: Push((int) 10069)
0x245: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x246: Pop(3)
0x247: Return(); Pop(0)

0x248: Push((int) 10056)
0x249: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x24b: PushEmpty(string)
0x24c: Stack[-1] = "Neutral" // @poff=89
0x24d: Call2 0xb6

0x24e: Pop(1)
0x24f: Push((int) 509172)
0x250: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x251: Pop(1)
0x252: @@@ ClearReplies(); Obj=0 // @poff=116
0x253: Pop(0)
0x254: Push((int) 509173)
0x255: Push((int) 34342)
0x256: Push((int) 10057)
0x257: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x258: Pop(3)
0x259: Push((int) 509174)
0x25a: Push((int) 34342)
0x25b: Push((int) 10059)
0x25c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25d: Pop(3)
0x25e: Return(); Pop(0)

0x25f: Push((int) 34342)
0x260: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x262: PushEmpty(string)
0x263: Stack[-1] = "Neutral" // @poff=89
0x264: Call2 0xb6

0x265: Pop(1)
0x266: Push((int) 532857)
0x267: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x268: Pop(1)
0x269: @@@ ClearReplies(); Obj=0 // @poff=116
0x26a: Pop(0)
0x26b: Push((int) 532858)
0x26c: Push((int) 10064)
0x26d: Push((int) 34343)
0x26e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26f: Pop(3)
0x270: Push((int) 532860)
0x271: Push((int) 10064)
0x272: Push((int) 34345)
0x273: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x274: Pop(3)
0x275: Return(); Pop(0)

0x276: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x277: PushEmpty(bool)
0x278: Call2 0x572

0x279: Pop(0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27b: @ lshStopAnimation()
0x27c: Pop(0)
0x27d: GOTO 0x280

0x27e: @ StopAnimation()
0x27f: Pop(0)
0x280: Return(); Pop(0)

0x281: GOTO 0xcd

0x282: Return(); Pop(0)

0x283: PushEmpty()
0x284: PushEmpty(int, object)
0x285: Stack[-3] = Stack[-1]
0x286: Push(-2, 1); TaskCall(1)
0x287: Call2 0xd

0x288: Pop(-2, 1); TaskReturn
0x289: Pop(2)
0x28a: Return(); Pop(0)

0x28b: PushEmpty()
0x28c: Call2 0x2b4

0x28d: Pop(0)
0x28e: Return(); Pop(0)

0x28f: PushEmpty(bool, bool)
0x290: Push("cleanup") // @poff=156
0x291: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x293: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x294: @ IsLoaded(Stack[-1])
0x295: Pop(0)
0x296: Pop(0); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x298: PushEmpty(object)
0x299: Call2 0x4d8

0x29a: Pop(0)
0x29b: @ RemoveActor(Stack[-1])
0x29c: Pop(1)
0x29d: GOTO 0x2a2

0x29e: Push("restore") // @poff=172
0x29f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2a2: Return(); Pop(2)

0x2a3: Push( Stack[1 + Tasks[-1].StackPointer] )
0x2a4: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a5: PushEmpty(object)
0x2a6: Call2 0x4d8

0x2a7: Pop(0)
0x2a8: @ RemoveActor(Stack[-1])
0x2a9: Pop(1)
0x2aa: @ Hold()
0x2ab: Pop(0)
0x2ac: PushEmpty()
0x2ad: Call2 0x325

0x2ae: Pop(0)
0x2af: Return(); Pop(0)

0x2b0: PushEmpty()
0x2b1: Call2 0x334

0x2b2: Pop(0)
0x2b3: Return(); Pop(0)

0x2b4: PushEmpty(bool)
0x2b5: Call2 0x3d1

0x2b6: Pop(0)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b9: PushEmpty()
0x2ba: Push(-0, 0); TaskCall(0)
0x2bb: Call2 0x0

0x2bc: Pop(-0, 0); TaskReturn
0x2bd: Pop(0)
0x2be: PushEmpty()
0x2bf: Call2 0x2b0

0x2c0: Pop(0)
0x2c1: @ GetDirection(Stack[-0]T)
0x2c2: Pop(0)
0x2c3: PushEmpty()
0x2c4: Call2 0x36a

0x2c5: Pop(0)
0x2c6: GOTO 0x2c3

0x2c7: Return(); Pop(0)

0x2c8: PushEmpty(object, object)
0x2c9: Push("player") // @poff=188
0x2ca: @ FindActor(Stack[-2], Stack[-1])
0x2cb: Pop(1)
0x2cc: Pop(0); Push((bool) Stack[-1] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-3] = (bool) 0
0x2cf: Return(); Pop(2)

0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-3] = Stack[-1]
0x2d2: Call2 0x3c8

0x2d3: Stack[-2] = Stack[-5]
0x2d4: Pop(2)
0x2d5: Return(); Pop(2)

0x2d6: Stack[-1] = 0
0x2d7: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x2d8: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x2d9: @ RotateAsync(Stack[-2], Stack[-1])
0x2da: Pop(2)
0x2db: Return(); Pop(0)

0x2dc: PushEmpty(object, bool, object, bool)
0x2dd: Push("player") // @poff=188
0x2de: @ FindActor(Stack[-3], Stack[-1])
0x2df: Pop(1)
0x2e0: Pop(0); Push((bool) Stack[-2] == 0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e2: Stack[-5] = (bool) 0
0x2e3: Return(); Pop(4)

0x2e4: PushEmpty(float, object)
0x2e5: Stack[-4] = Stack[-1]
0x2e6: Call2 0x3b6

0x2e7: Pop(1)
0x2e8: Push((float)90000.0)
0x2e9: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2eb: Stack[-5] = (bool) 0
0x2ec: Return(); Pop(4)

0x2ed: @ CanSee(Stack[-1], Stack[-2])
0x2ee: Pop(0)
0x2ef: Stack[-1] = Stack[-5]
0x2f0: Return(); Pop(4)

0x2f1: Stack[-2] = 0
0x2f2: PushEmpty(float, float)
0x2f3: Push((int) 8)
0x2f4: Push((int) 16)
0x2f5: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2f6: Pop(2)
0x2f7: Push((int) 10)
0x2f8: @ SetTimer(Stack[-1], Stack[-2])
0x2f9: Pop(1)
0x2fa: Return(); Pop(2)

0x2fb: Push((int) 10)
0x2fc: @ KillTimer(Stack[-1])
0x2fd: Pop(1)
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty()
0x300: Push((int) 10)
0x301: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x303: PushEmpty()
0x304: Call2 0x2fb

0x305: Pop(0)
0x306: PushEmpty(bool)
0x307: Stack[-1] = (bool) 0
0x308: PushEmpty(bool)
0x309: Call2 0x3d1

0x30a: Pop(0)
0x30b: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30c: PushEmpty(bool)
0x30d: Call2 0x2dc

0x30e: Pop(0)
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: Stack[-1] = (bool) 1
0x311: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x312: PushEmpty(bool)
0x313: Call2 0x2c8

0x314: Pop(0)
0x315: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x316: PushEmpty(bool, object)
0x317: PushEmpty(object)
0x318: Call2 0x4d8

0x319: Stack[-1] = Stack[-2]
0x31a: Pop(1)
0x31b: Call2 0x465

0x31c: Pop(2)
0x31d: GOTO 0x324

0x31e: PushEmpty()
0x31f: Call2 0x2d7

0x320: Pop(0)
0x321: PushEmpty()
0x322: Call2 0x2f2

0x323: Pop(0)
0x324: Return(); Pop(0)

0x325: PushEmpty()
0x326: Call2 0x3b1

0x327: Pop(0)
0x328: PushEmpty()
0x329: Call2 0x2fb

0x32a: Pop(0)
0x32b: @ lshStopSpeech()
0x32c: Pop(0)
0x32d: @ lshStopAnimation()
0x32e: Pop(0)
0x32f: @ StopAsync()
0x330: Pop(0)
0x331: @ Hold()
0x332: Pop(0)
0x333: Return(); Pop(0)

0x334: @ StopGroup0()
0x335: Pop(0)
0x336: PushEmpty()
0x337: Call2 0x2fb

0x338: Pop(0)
0x339: PushEmpty(string)
0x33a: Stack[-1] = "Neutral" // @poff=89
0x33b: Call2 0x4b5

0x33c: Pop(1)
0x33d: PushEmpty()
0x33e: Call2 0x2f2

0x33f: Pop(0)
0x340: Return(); Pop(0)

0x341: PushEmpty()
0x342: Push(Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x344: PushEmpty()
0x345: Call2 0x2f2

0x346: Pop(0)
0x347: GOTO 0x34c

0x348: PushEmpty(string)
0x349: Stack[-1] = "Neutral" // @poff=89
0x34a: Call2 0x4b5

0x34b: Pop(1)
0x34c: Return(); Pop(0)

0x34d: PushEmpty(bool, bool)
0x34e: @ IsOverrideActive(Stack[-1])
0x34f: Pop(0)
0x350: Pop(0); Push((bool) Stack[-1] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x352: EventDisable(0)
0x353: PushEmpty()
0x354: Call2 0x3b1

0x355: Pop(0)
0x356: PushEmpty(bool, object)
0x357: Stack[-5] = Stack[-1]
0x358: Call2 0x3c8

0x359: Pop(2)
0x35a: EventEnable(0)
0x35b: PushEmpty(object)
0x35c: Stack[-4] = Stack[-1]
0x35d: Call2 0x283

0x35e: Pop(1)
0x35f: PushEmpty(string)
0x360: Stack[-1] = "Neutral" // @poff=89
0x361: Call2 0x4b5

0x362: Pop(1)
0x363: PushEmpty()
0x364: Call2 0x2fb

0x365: Pop(0)
0x366: PushEmpty()
0x367: Call2 0x2f2

0x368: Pop(0)
0x369: Return(); Pop(2)

0x36a: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x36b: @ WaitForAnimEnd()
0x36c: Pop(0)
0x36d: PushEmpty(bool)
0x36e: Call2 0x3d1

0x36f: Pop(0)
0x370: Pop(1); Push((bool) Stack[-1] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(12)

0x373: PushEmpty(int)
0x374: Call2 0x4fd

0x375: Stack[-1] = Stack[-7]
0x376: Pop(1)
0x377: Stack[-5] = (int) 0
0x378: PushEmpty(bool)
0x379: Stack[-1] = (bool) 0
0x37a: Push((int) 5)
0x37b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37d: PushEmpty(bool)
0x37e: Call2 0x3d1

0x37f: Pop(0)
0x380: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x381: Stack[-1] = (bool) 1
0x382: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x383: Pop(0); Push((bool) Stack[-6] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x385: Push((int) 3)
0x386: @ Sleep(Stack[-1], Stack[-5])
0x387: Pop(1)
0x388: Pop(0); Push((bool) Stack[-4] == 0)
0x389: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x38a: GOTO 0x3ac

0x38b: GOTO 0x3a1

0x38c: @ irand(Stack[-3], Stack[-6])
0x38d: Pop(0)
0x38e: Push((int) 5)
0x38f: @ irand(Stack[-3], Stack[-1])
0x390: Pop(1)
0x391: Push((int) 0)
0x392: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: Stack[-3] = (int) 0
0x395: Push("all") // @poff=138
0x396: PushEmpty(string, int)
0x397: Stack[-6] = Stack[-1]
0x398: Call2 0x4f6

0x399: Pop(1)
0x39a: @ PlayAnimation(Stack[-2], Stack[-1])
0x39b: Pop(2)
0x39c: @ WaitForAnimEnd(Stack[-1])
0x39d: Pop(0)
0x39e: Pop(0); Push((bool) Stack[-1] == 0)
0x39f: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x3a0: GOTO 0x3ac

0x3a1: PushEmpty(bool)
0x3a2: Call2 0x3af

0x3a3: Pop(0)
0x3a4: Pop(1); Push((bool) Stack[-1] == 0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: GOTO 0x3ac

0x3a7: @ ResetAAS()
0x3a8: Pop(0)
0x3a9: Push((int) 1)
0x3aa: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3ab: GOTO 0x378

0x3ac: @ ResetAAS()
0x3ad: Pop(0)
0x3ae: Return(); Pop(12)

0x3af: Stack[-1] = (bool) 1
0x3b0: Return(); Pop(0)

0x3b1: @ StopAnimation()
0x3b2: Pop(0)
0x3b3: @ StopGroup0()
0x3b4: Pop(0)
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3b7: @ GetPosition(Stack[-3])
0x3b8: Pop(0)
0x3b9: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x3ba: Pop(0)
0x3bb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3bc: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3bd: Return(); Pop(6)

0x3be: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3bf: @ GetPosition(Stack[-3])
0x3c0: Pop(0)
0x3c1: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3c2: Push(CvectorIndex(Stack[-2], 0))
0x3c3: Push(CvectorIndex(Stack[-3], 2))
0x3c4: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3c5: Pop(2)
0x3c6: Stack[-1] = Stack[-8]
0x3c7: Return(); Pop(6)

0x3c8: PushEmpty(cvector, cvector)
0x3c9: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x3ca: Pop(0)
0x3cb: PushEmpty(bool, cvector)
0x3cc: Stack[-3] = Stack[-1]
0x3cd: Call2 0x3be

0x3ce: Stack[-2] = Stack[-6]
0x3cf: Pop(2)
0x3d0: Return(); Pop(2)

0x3d1: PushEmpty(bool, bool)
0x3d2: @ IsLoaded(Stack[-1])
0x3d3: Pop(0)
0x3d4: Stack[-1] = Stack[-3]
0x3d5: Return(); Pop(2)

0x3d6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3d7: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x3d8: Pop(0)
0x3d9: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x3da: Pop(0)
0x3db: Push(CvectorIndex(Stack[-8], 1))
0x3dc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3dd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3de: @ GetPosition(Stack[-7])
0x3df: Pop(0)
0x3e0: @ GetEyesHeight(Stack[-9])
0x3e1: Pop(0)
0x3e2: Push(CvectorIndex(Stack[-7], 1))
0x3e3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3e4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3e5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3e6: Push(CvectorIndex(Stack[-6], 1))
0x3e7: Stack[-1] = (int) 0
0x3e8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3e9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3ea: Pop(1); Push(Sqrt(Stack[-1]))
0x3eb: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3ec: Stack[-5] = -Stack[-6]; Pop(0);
0x3ed: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3ee: PushEmpty(cvector, cvector)
0x3ef: Push([0.0, 1.0, 0.0])
0x3f0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3f1: Call2 0x4de

0x3f2: Pop(1)
0x3f3: Push((int) 25)
0x3f4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f6: Push([0.0, 10.0, 0.0])
0x3f7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3f8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3f9: @ IsOverrideActive(Stack[-2])
0x3fa: Pop(0)
0x3fb: Push(Stack[-2])
0x3fc: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fd: Stack[-21] = (bool) 0
0x3fe: Return(); Pop(18)

0x3ff: @ StopWorld()
0x400: Pop(0)
0x401: @ CameraTransit(Stack[-3], Stack[-5])
0x402: Pop(0)
0x403: Push(CvectorIndex(Stack[-4], 0))
0x404: Push(CvectorIndex(Stack[-5], 2))
0x405: @ Rotate(Stack[-2], Stack[-1])
0x406: Pop(2)
0x407: PushEmpty(bool)
0x408: Call2 0x572

0x409: Pop(0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40b: GOTO 0x414

0x40c: Push("head") // @poff=228
0x40d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x40e: Pop(1)
0x40f: Push(Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x411: Push("head") // @poff=228
0x412: @ LookAsyncCamera(Stack[-1])
0x413: Pop(1)
0x414: @ CameraWaitForPlayFinish()
0x415: Pop(0)
0x416: @ ResumeWorld()
0x417: Pop(0)
0x418: Stack[-21] = (bool) 1
0x419: Return(); Pop(18)

0x41a: PushEmpty(bool, bool)
0x41b: @ CameraSwitchToNormal()
0x41c: Pop(0)
0x41d: PushEmpty(bool)
0x41e: Call2 0x572

0x41f: Pop(0)
0x420: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x421: GOTO 0x42a

0x422: Push("head") // @poff=228
0x423: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x424: Pop(1)
0x425: Push(Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x427: Push("head") // @poff=228
0x428: @ UnlookAsync(Stack[-1])
0x429: Pop(1)
0x42a: Return(); Pop(2)

0x42b: PushEmpty(int, int, int, int)
0x42c: Push("voice_common") // @poff=238
0x42d: @ GetVariable(Stack[-1], Stack[-3])
0x42e: Pop(1)
0x42f: Push(Stack[-2])
0x430: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x431: PushEmpty(bool, object)
0x432: Stack[-7] = Stack[-1]
0x433: Call2 0x465

0x434: Pop(1)
0x435: Pop(1); Push((bool) Stack[-1] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x437: PushEmpty(bool, object)
0x438: Stack[-7] = Stack[-1]
0x439: Call2 0x48a

0x43a: Pop(1)
0x43b: Pop(1); Push((bool) Stack[-1] == 0)
0x43c: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43d: Stack[-6] = (bool) 0
0x43e: Return(); Pop(4)

0x43f: Push((int) 2)
0x440: @ irand(Stack[-2], Stack[-1])
0x441: Pop(1)
0x442: Push(Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x444: Push("voice_common") // @poff=238
0x445: Push((int) 1)
0x446: Pop(1); Push(Stack[-4] + Stack[-1]);
0x447: Push((int) 3)
0x448: Pop(2); Push(Stack[-2] % Stack[-1]);
0x449: @ SetVariable(Stack[-2], Stack[-1])
0x44a: Pop(2)
0x44b: GOTO 0x450

0x44c: Push("voice_common") // @poff=238
0x44d: Push((int) 0)
0x44e: @ SetVariable(Stack[-2], Stack[-1])
0x44f: Pop(2)
0x450: GOTO 0x463

0x451: PushEmpty(bool, object)
0x452: Stack[-7] = Stack[-1]
0x453: Call2 0x48a

0x454: Pop(1)
0x455: Pop(1); Push((bool) Stack[-1] == 0)
0x456: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x457: PushEmpty(bool, object)
0x458: Stack[-7] = Stack[-1]
0x459: Call2 0x465

0x45a: Pop(1)
0x45b: Pop(1); Push((bool) Stack[-1] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45d: Stack[-6] = (bool) 0
0x45e: Return(); Pop(4)

0x45f: Push("voice_common") // @poff=238
0x460: Push((int) 1)
0x461: @ SetVariable(Stack[-2], Stack[-1])
0x462: Pop(2)
0x463: Stack[-6] = (bool) 1
0x464: Return(); Pop(4)

0x465: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x466: Stack[-5] = "c" // @poff=264
0x467: Stack[-4] = (int) 0
0x468: Push((int) 1)
0x469: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x46a: Push((int) 1)
0x46b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x46c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x46d: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x46e: Pop(1)
0x46f: Pop(0); Push((bool) Stack[-3] == 0)
0x470: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x471: GOTO 0x475

0x472: Push((int) 1)
0x473: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x474: GOTO 0x468

0x475: Pop(0); Push((bool) Stack[-4] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x477: Stack[-12] = (bool) 0
0x478: Return(); Pop(10)

0x479: Stack[-2] = (int) 0
0x47a: Push((int) 1)
0x47b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47d: @ irand(Stack[-2], Stack[-4])
0x47e: Pop(0)
0x47f: Push((int) 1)
0x480: Pop(1); Push(Stack[-3] + Stack[-1]);
0x481: Pop(1); Push(Stack[-6] + Stack[-1]);
0x482: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x483: Pop(1)
0x484: PushEmpty(bool, string)
0x485: Stack[-3] = Stack[-1]
0x486: Call2 0x4c2

0x487: Stack[-2] = Stack[-14]
0x488: Pop(2)
0x489: Return(); Pop(10)

0x48a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x48b: Push("d") // @poff=234
0x48c: PushEmpty(int)
0x48d: Call2 0x4ed

0x48e: Pop(0)
0x48f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x490: Push("m") // @poff=292
0x491: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x492: Stack[-4] = (int) 0
0x493: Push((int) 1)
0x494: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x495: Push((int) 1)
0x496: Pop(1); Push(Stack[-5] + Stack[-1]);
0x497: Pop(1); Push(Stack[-6] + Stack[-1]);
0x498: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x499: Pop(1)
0x49a: Pop(0); Push((bool) Stack[-3] == 0)
0x49b: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49c: GOTO 0x4a0

0x49d: Push((int) 1)
0x49e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x49f: GOTO 0x493

0x4a0: Pop(0); Push((bool) Stack[-4] == 0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a2: Stack[-12] = (bool) 0
0x4a3: Return(); Pop(10)

0x4a4: Stack[-2] = (int) 0
0x4a5: Push((int) 1)
0x4a6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a8: @ irand(Stack[-2], Stack[-4])
0x4a9: Pop(0)
0x4aa: Push((int) 1)
0x4ab: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4ac: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4ad: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x4ae: Pop(1)
0x4af: PushEmpty(bool, string)
0x4b0: Stack[-3] = Stack[-1]
0x4b1: Call2 0x4c2

0x4b2: Stack[-2] = Stack[-14]
0x4b3: Pop(2)
0x4b4: Return(); Pop(10)

0x4b5: PushEmpty(float, float, float, float)
0x4b6: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x4b7: Pop(0)
0x4b8: Push((bool) 0)
0x4b9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4ba: Pop(1)
0x4bb: Return(); Pop(4)

0x4bc: PushEmpty(float, float, float, float)
0x4bd: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x4be: Pop(0)
0x4bf: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x4c0: Pop(0)
0x4c1: Return(); Pop(4)

0x4c2: PushEmpty(bool, bool)
0x4c3: PushEmpty(bool)
0x4c4: Call2 0x572

0x4c5: Pop(0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4c7: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4c8: Pop(0)
0x4c9: Push(Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cb: @ lshPlaySpeech(Stack[-3])
0x4cc: Pop(0)
0x4cd: Stack[-4] = (bool) 1
0x4ce: Return(); Pop(2)

0x4cf: Stack[-4] = (bool) 0
0x4d0: Return(); Pop(2)

0x4d1: PushEmpty(bool)
0x4d2: Call2 0x572

0x4d3: Pop(0)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: @ lshStopSpeech()
0x4d6: Pop(0)
0x4d7: Return(); Pop(0)

0x4d8: PushEmpty(object, object)
0x4d9: @ self(Stack[-1])
0x4da: Pop(0)
0x4db: Stack[-1] = Stack[-3]
0x4dc: Return(); Pop(2)

0x4dd: Stack[-1] = 0
0x4de: PushEmpty(float, float)
0x4df: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4e0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4e1: Push((float)9.999999974752427e-07)
0x4e2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e4: Stack[-4] = [0.0, 0.0, 0.0]
0x4e5: Return(); Pop(2)

0x4e6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4e7: Return(); Pop(2)

0x4e8: PushEmpty(int, int)
0x4e9: @ GetVariable(Stack[-3], Stack[-1])
0x4ea: Pop(0)
0x4eb: Stack[-1] = Stack[-4]
0x4ec: Return(); Pop(2)

0x4ed: PushEmpty(float, float)
0x4ee: @ GetGameTime(Stack[-1])
0x4ef: Pop(0)
0x4f0: Push((int) 1)
0x4f1: PushEmpty(int)
0x4f2: Push((int) 24)
0x4f3: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4f4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4f5: Return(); Pop(2)

0x4f6: PushEmpty(string, string)
0x4f7: Stack[-1] = "idle" // @poff=146
0x4f8: Push(Stack[-3])
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4fa: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4fb: Stack[-1] = Stack[-4]
0x4fc: Return(); Pop(2)

0x4fd: PushEmpty(int, bool, int, bool)
0x4fe: Stack[-2] = (int) 0
0x4ff: Push("all") // @poff=138
0x500: PushEmpty(string, int)
0x501: Stack[-5] = Stack[-1]
0x502: Call2 0x4f6

0x503: Pop(1)
0x504: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x505: Pop(2)
0x506: Pop(0); Push((bool) Stack[-1] == 0)
0x507: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x508: GOTO 0x50c

0x509: Push((int) 1)
0x50a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x50b: GOTO 0x4ff

0x50c: Stack[-2] = Stack[-5]
0x50d: Return(); Pop(4)

0x50e: PushEmpty()
0x50f: Push("d1q01") // @poff=296
0x510: Push((int) 8)
0x511: @ SetVariable(Stack[-2], Stack[-1])
0x512: Pop(2)
0x513: PushEmpty()
0x514: Call2 0x523

0x515: Pop(0)
0x516: Return(); Pop(0)

0x517: PushEmpty()
0x518: PushEmpty(int, string)
0x519: Stack[-1] = "d1q01" // @poff=296
0x51a: Call2 0x4e8

0x51b: Pop(1)
0x51c: Push((int) 7)
0x51d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51f: Stack[-2] = (bool) 1
0x520: Return(); Pop(0)

0x521: Stack[-2] = (bool) 0
0x522: Return(); Pop(0)

0x523: PushEmpty(object, object)
0x524: Push((int) 621)
0x525: Push((int) 1)
0x526: Push((int) 532195)
0x527: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x528: Pop(3)
0x529: PushEmpty(bool, object, int)
0x52a: Stack[-4] = Stack[-2]
0x52b: Stack[-1] = (int) 2
0x52c: Call2 0x53d

0x52d: Pop(3)
0x52e: Return(); Pop(2)

0x52f: Stack[-1] = 0
0x530: PushEmpty(object, object)
0x531: @ GetDiaryRoot(Stack[-1])
0x532: Pop(0)
0x533: Pop(0); Push((bool) Stack[-1] == 0)
0x534: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x535: Push("Can't retrieve diary root") // @poff=308
0x536: @ Trace(Stack[-1])
0x537: Pop(1)
0x538: Stack[-3] = (bool) 0
0x539: Return(); Pop(2)

0x53a: Stack[-1] = Stack[-3]
0x53b: Return(); Pop(2)

0x53c: Stack[-1] = 0
0x53d: PushEmpty(object, object, int, object, object, int)
0x53e: PushEmpty(object)
0x53f: Call2 0x530

0x540: Stack[-1] = Stack[-4]
0x541: Pop(1)
0x542: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=360
0x543: Pop(0)
0x544: Pop(0); Push((bool) Stack[-2] == 0)
0x545: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x546: Push("Can't find diary parent with id: ") // @poff=365
0x547: Pop(1); Push(Stack[-1] + Stack[-8]);
0x548: @ Trace(Stack[-1])
0x549: Pop(1)
0x54a: Stack[-9] = (bool) 0
0x54b: Return(); Pop(6)

0x54c: @@ AddChild(Stack[-8]); Obj=2 // @poff=433
0x54d: Pop(0)
0x54e: Push((int) 7)
0x54f: @ SendWorldWndMessage(Stack[-1])
0x550: Pop(1)
0x551: @@ GetCategory(Stack[-1]); Obj=8 // @poff=442
0x552: Pop(0)
0x553: @ SetDiarySection(Stack[-1])
0x554: Pop(0)
0x555: Stack[-9] = (bool) 0
0x556: Return(); Pop(6)

0x557: Stack[-2] = 0
0x558: Stack[-3] = 0
0x559: PushEmpty(int, int)
0x55a: Push("branch") // @poff=454
0x55b: @ GetVariable(Stack[-1], Stack[-2])
0x55c: Pop(1)
0x55d: Push((int) 0)
0x55e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55f: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x560: Stack[-3] = (int) 1
0x561: Return(); Pop(2)

0x562: GOTO 0x568

0x563: Push((int) 1)
0x564: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x566: Stack[-3] = (int) 2
0x567: Return(); Pop(2)

0x568: Stack[-3] = (int) 3
0x569: Return(); Pop(2)

0x56a: Stack[-1] = (int) 515551
0x56b: Return(); Pop(0)

0x56c: Stack[-1] = (int) 502876
0x56d: Return(); Pop(0)

0x56e: Stack[-1] = "ui/NPC_Rubin.png" // @poff=468
0x56f: Return(); Pop(0)

0x570: Stack[-1] = "ui/NPC_Rubin_b.png" // @poff=502
0x571: Return(); Pop(0)

0x572: Stack[-1] = (bool) 1
0x573: Return(); Pop(0)

