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
	W:quest_k10_01
	W:completed
	W:k10q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Rubin.png
	W:ui/NPC_Rubin_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000710075006500730074005f006b00310030005f0030003100000063006f006d0070006c00650074006500640000006b00310030007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f0052007500620069006e002e0070006e0067000000750069002f004e00500043005f0052007500620069006e005f0062002e0070006e0067000000
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x193
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc2 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x197 Vars = (string)
		EVENT_6 Op = 0x1ab Vars = ()
		EVENT_5 Op = 0x1b8 Vars = ()
		EVENT_7 Op = 0x207 Vars = (int)
		EVENT_45 Op = 0x249 Vars = (bool)
		EVENT_0 Op = 0x255 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2d9

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
0x11: Call2 0x3e0

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x333

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2de

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x481

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x47f

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x483

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x485

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x46e

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
0x55: Call2 0x322

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
0x63: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x42c

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral" // @poff=89
0x6b: Call2 0xac

0x6c: Pop(1)
0x6d: Push((int) 526999)
0x6e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6f: Pop(1)
0x70: @@@ ClearReplies(); Obj=0 // @poff=116
0x71: Pop(0)
0x72: Push((int) 527000)
0x73: Push((int) 29484)
0x74: Push((int) 28292)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 528140)
0x78: Push((int) 29484)
0x79: Push((int) 29490)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x8e

0x7d: PushEmpty(string)
0x7e: Stack[-1] = "Neutral" // @poff=89
0x7f: Call2 0xac

0x80: Pop(1)
0x81: Push((int) 527003)
0x82: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x83: Pop(1)
0x84: @@@ ClearReplies(); Obj=0 // @poff=116
0x85: Pop(0)
0x86: Push((int) 527004)
0x87: Push((int) -1)
0x88: Push((int) 28296)
0x89: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8a: Pop(3)
0x8b: GOTO 0x8e

0x8c: Return(); Pop(0)

0x8d: GOTO 0x62

0x8e: PushEmpty(bool)
0x8f: Call2 0x487

0x90: Pop(0)
0x91: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x92: @ lshWaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: PushEmpty(string)
0x98: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x99: Call2 0x3bd

0x9a: Pop(1)
0x9b: GOTO 0x92

0x9c: GOTO 0xab

0x9d: Push("all") // @poff=138
0x9e: Push("idle") // @poff=146
0x9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: @ WaitForAnimEnd()
0xa2: Pop(0)
0xa3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: GOTO 0xab

0xa6: Push("all") // @poff=138
0xa7: Push("idle") // @poff=146
0xa8: @ PlayAnimation(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: GOTO 0xa1

0xab: Return(); Pop(0)

0xac: PushEmpty()
0xad: PushEmpty(bool)
0xae: Call2 0x487

0xaf: Pop(0)
0xb0: Pop(1); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: PushEmpty(string, bool)
0xb7: Stack[-3] = Stack[-2]
0xb8: Push("") // @poff=102
0xb9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbb: Stack[-1] = (bool) 0
0xbc: GOTO 0xbe

0xbd: Stack[-1] = (bool) 1
0xbe: Call2 0x3c4

0xbf: Pop(2)
0xc0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Push((int) 1)
0xc4: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0xc5: PushEmpty()
0xc6: Call2 0x3d9

0xc7: Pop(0)
0xc8: Push((int) 28294)
0xc9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x422

0xcf: Pop(2)
0xd0: Push((int) 28291)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Call2 0x42c

0xd6: Pop(1)
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0xac

0xdb: Pop(1)
0xdc: Push((int) 526999)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 527000)
0xe2: Push((int) 29484)
0xe3: Push((int) 28292)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 528140)
0xe7: Push((int) 29484)
0xe8: Push((int) 29490)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: PushEmpty(string)
0xed: Stack[-1] = "Neutral" // @poff=89
0xee: Call2 0xac

0xef: Pop(1)
0xf0: Push((int) 527003)
0xf1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf2: Pop(1)
0xf3: @@@ ClearReplies(); Obj=0 // @poff=116
0xf4: Pop(0)
0xf5: Push((int) 527004)
0xf6: Push((int) -1)
0xf7: Push((int) 28296)
0xf8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Push((int) 29484)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Neutral" // @poff=89
0x100: Call2 0xac

0x101: Pop(1)
0x102: Push((int) 528134)
0x103: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x104: Pop(1)
0x105: @@@ ClearReplies(); Obj=0 // @poff=116
0x106: Pop(0)
0x107: Push((int) 528135)
0x108: Push((int) 29486)
0x109: Push((int) 29485)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: Push((int) 528141)
0x10d: Push((int) 29486)
0x10e: Push((int) 29492)
0x10f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 29486)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Neutral" // @poff=89
0x117: Call2 0xac

0x118: Pop(1)
0x119: Push((int) 528136)
0x11a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11b: Pop(1)
0x11c: @@@ ClearReplies(); Obj=0 // @poff=116
0x11d: Pop(0)
0x11e: Push((int) 528137)
0x11f: Push((int) 29494)
0x120: Push((int) 29487)
0x121: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 29494)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral" // @poff=89
0x129: Call2 0xac

0x12a: Pop(1)
0x12b: Push((int) 528142)
0x12c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12d: Pop(1)
0x12e: @@@ ClearReplies(); Obj=0 // @poff=116
0x12f: Pop(0)
0x130: Push((int) 528143)
0x131: Push((int) 29496)
0x132: Push((int) 29495)
0x133: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 29496)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral" // @poff=89
0x13b: Call2 0xac

0x13c: Pop(1)
0x13d: Push((int) 528144)
0x13e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13f: Pop(1)
0x140: @@@ ClearReplies(); Obj=0 // @poff=116
0x141: Pop(0)
0x142: Push((int) 528145)
0x143: Push((int) 29488)
0x144: Push((int) 29497)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 29488)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral" // @poff=89
0x14d: Call2 0xac

0x14e: Pop(1)
0x14f: Push((int) 528138)
0x150: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x151: Pop(1)
0x152: @@@ ClearReplies(); Obj=0 // @poff=116
0x153: Pop(0)
0x154: Push((int) 528146)
0x155: Push((int) 29499)
0x156: Push((int) 29498)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 29499)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral" // @poff=89
0x15f: Call2 0xac

0x160: Pop(1)
0x161: Push((int) 528147)
0x162: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x163: Pop(1)
0x164: @@@ ClearReplies(); Obj=0 // @poff=116
0x165: Pop(0)
0x166: Push((int) 528139)
0x167: Push((int) 28293)
0x168: Push((int) 29489)
0x169: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16a: Pop(3)
0x16b: Return(); Pop(0)

0x16c: Push((int) 28293)
0x16d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Neutral" // @poff=89
0x171: Call2 0xac

0x172: Pop(1)
0x173: Push((int) 527001)
0x174: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x175: Pop(1)
0x176: @@@ ClearReplies(); Obj=0 // @poff=116
0x177: Pop(0)
0x178: Push((int) 527002)
0x179: Push((int) -1)
0x17a: Push((int) 28294)
0x17b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17c: Pop(3)
0x17d: Return(); Pop(0)

0x17e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17f: PushEmpty(bool)
0x180: Call2 0x487

0x181: Pop(0)
0x182: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x183: @ lshStopAnimation()
0x184: Pop(0)
0x185: GOTO 0x188

0x186: @ StopAnimation()
0x187: Pop(0)
0x188: Return(); Pop(0)

0x189: GOTO 0xc3

0x18a: Return(); Pop(0)

0x18b: PushEmpty()
0x18c: PushEmpty(int, object)
0x18d: Stack[-3] = Stack[-1]
0x18e: Push(-2, 1); TaskCall(1)
0x18f: Call2 0xd

0x190: Pop(-2, 1); TaskReturn
0x191: Pop(2)
0x192: Return(); Pop(0)

0x193: PushEmpty()
0x194: Call2 0x1bc

0x195: Pop(0)
0x196: Return(); Pop(0)

0x197: PushEmpty(bool, bool)
0x198: Push("cleanup") // @poff=156
0x199: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19b: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x19c: @ IsLoaded(Stack[-1])
0x19d: Pop(0)
0x19e: Pop(0); Push((bool) Stack[-1] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a0: PushEmpty(object)
0x1a1: Call2 0x3e0

0x1a2: Pop(0)
0x1a3: @ RemoveActor(Stack[-1])
0x1a4: Pop(1)
0x1a5: GOTO 0x1aa

0x1a6: Push("restore") // @poff=172
0x1a7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1aa: Return(); Pop(2)

0x1ab: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1ad: PushEmpty(object)
0x1ae: Call2 0x3e0

0x1af: Pop(0)
0x1b0: @ RemoveActor(Stack[-1])
0x1b1: Pop(1)
0x1b2: @ Hold()
0x1b3: Pop(0)
0x1b4: PushEmpty()
0x1b5: Call2 0x22d

0x1b6: Pop(0)
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty()
0x1b9: Call2 0x23c

0x1ba: Pop(0)
0x1bb: Return(); Pop(0)

0x1bc: PushEmpty(bool)
0x1bd: Call2 0x2d9

0x1be: Pop(0)
0x1bf: Pop(1); Push((bool) Stack[-1] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c1: PushEmpty()
0x1c2: Push(-0, 0); TaskCall(0)
0x1c3: Call2 0x0

0x1c4: Pop(-0, 0); TaskReturn
0x1c5: Pop(0)
0x1c6: PushEmpty()
0x1c7: Call2 0x1b8

0x1c8: Pop(0)
0x1c9: @ GetDirection(Stack[-0]T)
0x1ca: Pop(0)
0x1cb: PushEmpty()
0x1cc: Call2 0x272

0x1cd: Pop(0)
0x1ce: GOTO 0x1cb

0x1cf: Return(); Pop(0)

0x1d0: PushEmpty(object, object)
0x1d1: Push("player") // @poff=188
0x1d2: @ FindActor(Stack[-2], Stack[-1])
0x1d3: Pop(1)
0x1d4: Pop(0); Push((bool) Stack[-1] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d6: Stack[-3] = (bool) 0
0x1d7: Return(); Pop(2)

0x1d8: PushEmpty(bool, object)
0x1d9: Stack[-3] = Stack[-1]
0x1da: Call2 0x2d0

0x1db: Stack[-2] = Stack[-5]
0x1dc: Pop(2)
0x1dd: Return(); Pop(2)

0x1de: Stack[-1] = 0
0x1df: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x1e0: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x1e1: @ RotateAsync(Stack[-2], Stack[-1])
0x1e2: Pop(2)
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty(object, bool, object, bool)
0x1e5: Push("player") // @poff=188
0x1e6: @ FindActor(Stack[-3], Stack[-1])
0x1e7: Pop(1)
0x1e8: Pop(0); Push((bool) Stack[-2] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1ea: Stack[-5] = (bool) 0
0x1eb: Return(); Pop(4)

0x1ec: PushEmpty(float, object)
0x1ed: Stack[-4] = Stack[-1]
0x1ee: Call2 0x2be

0x1ef: Pop(1)
0x1f0: Push((float)90000.0)
0x1f1: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: Stack[-5] = (bool) 0
0x1f4: Return(); Pop(4)

0x1f5: @ CanSee(Stack[-1], Stack[-2])
0x1f6: Pop(0)
0x1f7: Stack[-1] = Stack[-5]
0x1f8: Return(); Pop(4)

0x1f9: Stack[-2] = 0
0x1fa: PushEmpty(float, float)
0x1fb: Push((int) 8)
0x1fc: Push((int) 16)
0x1fd: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(2)
0x1ff: Push((int) 10)
0x200: @ SetTimer(Stack[-1], Stack[-2])
0x201: Pop(1)
0x202: Return(); Pop(2)

0x203: Push((int) 10)
0x204: @ KillTimer(Stack[-1])
0x205: Pop(1)
0x206: Return(); Pop(0)

0x207: PushEmpty()
0x208: Push((int) 10)
0x209: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x20b: PushEmpty()
0x20c: Call2 0x203

0x20d: Pop(0)
0x20e: PushEmpty(bool)
0x20f: Stack[-1] = (bool) 0
0x210: PushEmpty(bool)
0x211: Call2 0x2d9

0x212: Pop(0)
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: PushEmpty(bool)
0x215: Call2 0x1e4

0x216: Pop(0)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: Stack[-1] = (bool) 1
0x219: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x21a: PushEmpty(bool)
0x21b: Call2 0x1d0

0x21c: Pop(0)
0x21d: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x21e: PushEmpty(bool, object)
0x21f: PushEmpty(object)
0x220: Call2 0x3e0

0x221: Stack[-1] = Stack[-2]
0x222: Pop(1)
0x223: Call2 0x36d

0x224: Pop(2)
0x225: GOTO 0x22c

0x226: PushEmpty()
0x227: Call2 0x1df

0x228: Pop(0)
0x229: PushEmpty()
0x22a: Call2 0x1fa

0x22b: Pop(0)
0x22c: Return(); Pop(0)

0x22d: PushEmpty()
0x22e: Call2 0x2b9

0x22f: Pop(0)
0x230: PushEmpty()
0x231: Call2 0x203

0x232: Pop(0)
0x233: @ lshStopSpeech()
0x234: Pop(0)
0x235: @ lshStopAnimation()
0x236: Pop(0)
0x237: @ StopAsync()
0x238: Pop(0)
0x239: @ Hold()
0x23a: Pop(0)
0x23b: Return(); Pop(0)

0x23c: @ StopGroup0()
0x23d: Pop(0)
0x23e: PushEmpty()
0x23f: Call2 0x203

0x240: Pop(0)
0x241: PushEmpty(string)
0x242: Stack[-1] = "Neutral" // @poff=89
0x243: Call2 0x3bd

0x244: Pop(1)
0x245: PushEmpty()
0x246: Call2 0x1fa

0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: PushEmpty()
0x24a: Push(Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24c: PushEmpty()
0x24d: Call2 0x1fa

0x24e: Pop(0)
0x24f: GOTO 0x254

0x250: PushEmpty(string)
0x251: Stack[-1] = "Neutral" // @poff=89
0x252: Call2 0x3bd

0x253: Pop(1)
0x254: Return(); Pop(0)

0x255: PushEmpty(bool, bool)
0x256: @ IsOverrideActive(Stack[-1])
0x257: Pop(0)
0x258: Pop(0); Push((bool) Stack[-1] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x25a: EventDisable(0)
0x25b: PushEmpty()
0x25c: Call2 0x2b9

0x25d: Pop(0)
0x25e: PushEmpty(bool, object)
0x25f: Stack[-5] = Stack[-1]
0x260: Call2 0x2d0

0x261: Pop(2)
0x262: EventEnable(0)
0x263: PushEmpty(object)
0x264: Stack[-4] = Stack[-1]
0x265: Call2 0x18b

0x266: Pop(1)
0x267: PushEmpty(string)
0x268: Stack[-1] = "Neutral" // @poff=89
0x269: Call2 0x3bd

0x26a: Pop(1)
0x26b: PushEmpty()
0x26c: Call2 0x203

0x26d: Pop(0)
0x26e: PushEmpty()
0x26f: Call2 0x1fa

0x270: Pop(0)
0x271: Return(); Pop(2)

0x272: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x273: @ WaitForAnimEnd()
0x274: Pop(0)
0x275: PushEmpty(bool)
0x276: Call2 0x2d9

0x277: Pop(0)
0x278: Pop(1); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: Return(); Pop(12)

0x27b: PushEmpty(int)
0x27c: Call2 0x411

0x27d: Stack[-1] = Stack[-7]
0x27e: Pop(1)
0x27f: Stack[-5] = (int) 0
0x280: PushEmpty(bool)
0x281: Stack[-1] = (bool) 0
0x282: Push((int) 5)
0x283: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x285: PushEmpty(bool)
0x286: Call2 0x2d9

0x287: Pop(0)
0x288: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x289: Stack[-1] = (bool) 1
0x28a: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x28b: Pop(0); Push((bool) Stack[-6] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28d: Push((int) 3)
0x28e: @ Sleep(Stack[-1], Stack[-5])
0x28f: Pop(1)
0x290: Pop(0); Push((bool) Stack[-4] == 0)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x2b4

0x293: GOTO 0x2a9

0x294: @ irand(Stack[-3], Stack[-6])
0x295: Pop(0)
0x296: Push((int) 5)
0x297: @ irand(Stack[-3], Stack[-1])
0x298: Pop(1)
0x299: Push((int) 0)
0x29a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: Stack[-3] = (int) 0
0x29d: Push("all") // @poff=138
0x29e: PushEmpty(string, int)
0x29f: Stack[-6] = Stack[-1]
0x2a0: Call2 0x40a

0x2a1: Pop(1)
0x2a2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: @ WaitForAnimEnd(Stack[-1])
0x2a5: Pop(0)
0x2a6: Pop(0); Push((bool) Stack[-1] == 0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: GOTO 0x2b4

0x2a9: PushEmpty(bool)
0x2aa: Call2 0x2b7

0x2ab: Pop(0)
0x2ac: Pop(1); Push((bool) Stack[-1] == 0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: GOTO 0x2b4

0x2af: @ ResetAAS()
0x2b0: Pop(0)
0x2b1: Push((int) 1)
0x2b2: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2b3: GOTO 0x280

0x2b4: @ ResetAAS()
0x2b5: Pop(0)
0x2b6: Return(); Pop(12)

0x2b7: Stack[-1] = (bool) 1
0x2b8: Return(); Pop(0)

0x2b9: @ StopAnimation()
0x2ba: Pop(0)
0x2bb: @ StopGroup0()
0x2bc: Pop(0)
0x2bd: Return(); Pop(0)

0x2be: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2bf: @ GetPosition(Stack[-3])
0x2c0: Pop(0)
0x2c1: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x2c2: Pop(0)
0x2c3: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2c4: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2c5: Return(); Pop(6)

0x2c6: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2c7: @ GetPosition(Stack[-3])
0x2c8: Pop(0)
0x2c9: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2ca: Push(CvectorIndex(Stack[-2], 0))
0x2cb: Push(CvectorIndex(Stack[-3], 2))
0x2cc: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2cd: Pop(2)
0x2ce: Stack[-1] = Stack[-8]
0x2cf: Return(); Pop(6)

0x2d0: PushEmpty(cvector, cvector)
0x2d1: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x2d2: Pop(0)
0x2d3: PushEmpty(bool, cvector)
0x2d4: Stack[-3] = Stack[-1]
0x2d5: Call2 0x2c6

0x2d6: Stack[-2] = Stack[-6]
0x2d7: Pop(2)
0x2d8: Return(); Pop(2)

0x2d9: PushEmpty(bool, bool)
0x2da: @ IsLoaded(Stack[-1])
0x2db: Pop(0)
0x2dc: Stack[-1] = Stack[-3]
0x2dd: Return(); Pop(2)

0x2de: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2df: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x2e0: Pop(0)
0x2e1: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x2e2: Pop(0)
0x2e3: Push(CvectorIndex(Stack[-8], 1))
0x2e4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2e5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2e6: @ GetPosition(Stack[-7])
0x2e7: Pop(0)
0x2e8: @ GetEyesHeight(Stack[-9])
0x2e9: Pop(0)
0x2ea: Push(CvectorIndex(Stack[-7], 1))
0x2eb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ec: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2ed: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2ee: Push(CvectorIndex(Stack[-6], 1))
0x2ef: Stack[-1] = (int) 0
0x2f0: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2f1: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2f2: Pop(1); Push(Sqrt(Stack[-1]))
0x2f3: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2f4: Stack[-5] = -Stack[-6]; Pop(0);
0x2f5: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2f6: PushEmpty(cvector, cvector)
0x2f7: Push([0.0, 1.0, 0.0])
0x2f8: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2f9: Call2 0x3e6

0x2fa: Pop(1)
0x2fb: Push((int) 25)
0x2fc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2fd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2fe: Push([0.0, 10.0, 0.0])
0x2ff: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x300: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x301: @ IsOverrideActive(Stack[-2])
0x302: Pop(0)
0x303: Push(Stack[-2])
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: Stack[-21] = (bool) 0
0x306: Return(); Pop(18)

0x307: @ StopWorld()
0x308: Pop(0)
0x309: @ CameraTransit(Stack[-3], Stack[-5])
0x30a: Pop(0)
0x30b: Push(CvectorIndex(Stack[-4], 0))
0x30c: Push(CvectorIndex(Stack[-5], 2))
0x30d: @ Rotate(Stack[-2], Stack[-1])
0x30e: Pop(2)
0x30f: PushEmpty(bool)
0x310: Call2 0x487

0x311: Pop(0)
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: GOTO 0x31c

0x314: Push("head") // @poff=228
0x315: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x316: Pop(1)
0x317: Push(Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x319: Push("head") // @poff=228
0x31a: @ LookAsyncCamera(Stack[-1])
0x31b: Pop(1)
0x31c: @ CameraWaitForPlayFinish()
0x31d: Pop(0)
0x31e: @ ResumeWorld()
0x31f: Pop(0)
0x320: Stack[-21] = (bool) 1
0x321: Return(); Pop(18)

0x322: PushEmpty(bool, bool)
0x323: @ CameraSwitchToNormal()
0x324: Pop(0)
0x325: PushEmpty(bool)
0x326: Call2 0x487

0x327: Pop(0)
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: GOTO 0x332

0x32a: Push("head") // @poff=228
0x32b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x32c: Pop(1)
0x32d: Push(Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32f: Push("head") // @poff=228
0x330: @ UnlookAsync(Stack[-1])
0x331: Pop(1)
0x332: Return(); Pop(2)

0x333: PushEmpty(int, int, int, int)
0x334: Push("voice_common") // @poff=238
0x335: @ GetVariable(Stack[-1], Stack[-3])
0x336: Pop(1)
0x337: Push(Stack[-2])
0x338: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x339: PushEmpty(bool, object)
0x33a: Stack[-7] = Stack[-1]
0x33b: Call2 0x36d

0x33c: Pop(1)
0x33d: Pop(1); Push((bool) Stack[-1] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x33f: PushEmpty(bool, object)
0x340: Stack[-7] = Stack[-1]
0x341: Call2 0x392

0x342: Pop(1)
0x343: Pop(1); Push((bool) Stack[-1] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-6] = (bool) 0
0x346: Return(); Pop(4)

0x347: Push((int) 2)
0x348: @ irand(Stack[-2], Stack[-1])
0x349: Pop(1)
0x34a: Push(Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x34c: Push("voice_common") // @poff=238
0x34d: Push((int) 1)
0x34e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x34f: Push((int) 3)
0x350: Pop(2); Push(Stack[-2] % Stack[-1]);
0x351: @ SetVariable(Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: GOTO 0x358

0x354: Push("voice_common") // @poff=238
0x355: Push((int) 0)
0x356: @ SetVariable(Stack[-2], Stack[-1])
0x357: Pop(2)
0x358: GOTO 0x36b

0x359: PushEmpty(bool, object)
0x35a: Stack[-7] = Stack[-1]
0x35b: Call2 0x392

0x35c: Pop(1)
0x35d: Pop(1); Push((bool) Stack[-1] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x35f: PushEmpty(bool, object)
0x360: Stack[-7] = Stack[-1]
0x361: Call2 0x36d

0x362: Pop(1)
0x363: Pop(1); Push((bool) Stack[-1] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x365: Stack[-6] = (bool) 0
0x366: Return(); Pop(4)

0x367: Push("voice_common") // @poff=238
0x368: Push((int) 1)
0x369: @ SetVariable(Stack[-2], Stack[-1])
0x36a: Pop(2)
0x36b: Stack[-6] = (bool) 1
0x36c: Return(); Pop(4)

0x36d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x36e: Stack[-5] = "c" // @poff=264
0x36f: Stack[-4] = (int) 0
0x370: Push((int) 1)
0x371: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x372: Push((int) 1)
0x373: Pop(1); Push(Stack[-5] + Stack[-1]);
0x374: Pop(1); Push(Stack[-6] + Stack[-1]);
0x375: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x376: Pop(1)
0x377: Pop(0); Push((bool) Stack[-3] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x379: GOTO 0x37d

0x37a: Push((int) 1)
0x37b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x37c: GOTO 0x370

0x37d: Pop(0); Push((bool) Stack[-4] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-12] = (bool) 0
0x380: Return(); Pop(10)

0x381: Stack[-2] = (int) 0
0x382: Push((int) 1)
0x383: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: @ irand(Stack[-2], Stack[-4])
0x386: Pop(0)
0x387: Push((int) 1)
0x388: Pop(1); Push(Stack[-3] + Stack[-1]);
0x389: Pop(1); Push(Stack[-6] + Stack[-1]);
0x38a: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x38b: Pop(1)
0x38c: PushEmpty(bool, string)
0x38d: Stack[-3] = Stack[-1]
0x38e: Call2 0x3ca

0x38f: Stack[-2] = Stack[-14]
0x390: Pop(2)
0x391: Return(); Pop(10)

0x392: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x393: Push("d") // @poff=234
0x394: PushEmpty(int)
0x395: Call2 0x401

0x396: Pop(0)
0x397: Pop(2); Push(Stack[-2] + Stack[-1]);
0x398: Push("m") // @poff=292
0x399: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x39a: Stack[-4] = (int) 0
0x39b: Push((int) 1)
0x39c: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x39d: Push((int) 1)
0x39e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x39f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3a0: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x3a1: Pop(1)
0x3a2: Pop(0); Push((bool) Stack[-3] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: GOTO 0x3a8

0x3a5: Push((int) 1)
0x3a6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3a7: GOTO 0x39b

0x3a8: Pop(0); Push((bool) Stack[-4] == 0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-12] = (bool) 0
0x3ab: Return(); Pop(10)

0x3ac: Stack[-2] = (int) 0
0x3ad: Push((int) 1)
0x3ae: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b0: @ irand(Stack[-2], Stack[-4])
0x3b1: Pop(0)
0x3b2: Push((int) 1)
0x3b3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3b4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b5: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3b6: Pop(1)
0x3b7: PushEmpty(bool, string)
0x3b8: Stack[-3] = Stack[-1]
0x3b9: Call2 0x3ca

0x3ba: Stack[-2] = Stack[-14]
0x3bb: Pop(2)
0x3bc: Return(); Pop(10)

0x3bd: PushEmpty(float, float, float, float)
0x3be: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3bf: Pop(0)
0x3c0: Push((bool) 0)
0x3c1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3c2: Pop(1)
0x3c3: Return(); Pop(4)

0x3c4: PushEmpty(float, float, float, float)
0x3c5: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3c6: Pop(0)
0x3c7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3c8: Pop(0)
0x3c9: Return(); Pop(4)

0x3ca: PushEmpty(bool, bool)
0x3cb: PushEmpty(bool)
0x3cc: Call2 0x487

0x3cd: Pop(0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3cf: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3d0: Pop(0)
0x3d1: Push(Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d3: @ lshPlaySpeech(Stack[-3])
0x3d4: Pop(0)
0x3d5: Stack[-4] = (bool) 1
0x3d6: Return(); Pop(2)

0x3d7: Stack[-4] = (bool) 0
0x3d8: Return(); Pop(2)

0x3d9: PushEmpty(bool)
0x3da: Call2 0x487

0x3db: Pop(0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dd: @ lshStopSpeech()
0x3de: Pop(0)
0x3df: Return(); Pop(0)

0x3e0: PushEmpty(object, object)
0x3e1: @ self(Stack[-1])
0x3e2: Pop(0)
0x3e3: Stack[-1] = Stack[-3]
0x3e4: Return(); Pop(2)

0x3e5: Stack[-1] = 0
0x3e6: PushEmpty(float, float)
0x3e7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3e8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3e9: Push((float)9.999999974752427e-07)
0x3ea: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ec: Stack[-4] = [0.0, 0.0, 0.0]
0x3ed: Return(); Pop(2)

0x3ee: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3ef: Return(); Pop(2)

0x3f0: PushEmpty(int, int)
0x3f1: @ GetVariable(Stack[-3], Stack[-1])
0x3f2: Pop(0)
0x3f3: Stack[-1] = Stack[-4]
0x3f4: Return(); Pop(2)

0x3f5: PushEmpty(object, object)
0x3f6: @ FindActor(Stack[-1], Stack[-4])
0x3f7: Pop(0)
0x3f8: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-5] = (bool) 0
0x3fb: Return(); Pop(2)

0x3fc: @ Trigger(Stack[-1], Stack[-3])
0x3fd: Pop(0)
0x3fe: Stack[-5] = (bool) 1
0x3ff: Return(); Pop(2)

0x400: Stack[-1] = 0
0x401: PushEmpty(float, float)
0x402: @ GetGameTime(Stack[-1])
0x403: Pop(0)
0x404: Push((int) 1)
0x405: PushEmpty(int)
0x406: Push((int) 24)
0x407: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x408: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x409: Return(); Pop(2)

0x40a: PushEmpty(string, string)
0x40b: Stack[-1] = "idle" // @poff=146
0x40c: Push(Stack[-3])
0x40d: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x40f: Stack[-1] = Stack[-4]
0x410: Return(); Pop(2)

0x411: PushEmpty(int, bool, int, bool)
0x412: Stack[-2] = (int) 0
0x413: Push("all") // @poff=138
0x414: PushEmpty(string, int)
0x415: Stack[-5] = Stack[-1]
0x416: Call2 0x40a

0x417: Pop(1)
0x418: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(2)
0x41a: Pop(0); Push((bool) Stack[-1] == 0)
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: GOTO 0x420

0x41d: Push((int) 1)
0x41e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x41f: GOTO 0x413

0x420: Stack[-2] = Stack[-5]
0x421: Return(); Pop(4)

0x422: PushEmpty()
0x423: PushEmpty()
0x424: Call2 0x438

0x425: Pop(0)
0x426: PushEmpty(bool, string, string)
0x427: Stack[-2] = "quest_k10_01" // @poff=296
0x428: Stack[-1] = "completed" // @poff=322
0x429: Call2 0x3f5

0x42a: Pop(3)
0x42b: Return(); Pop(0)

0x42c: PushEmpty()
0x42d: PushEmpty(int, string)
0x42e: Stack[-1] = "k10q01" // @poff=342
0x42f: Call2 0x3f0

0x430: Pop(1)
0x431: Push((int) 7)
0x432: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: Stack[-2] = (bool) 1
0x435: Return(); Pop(0)

0x436: Stack[-2] = (bool) 0
0x437: Return(); Pop(0)

0x438: PushEmpty(object, object)
0x439: Push((int) 455)
0x43a: Push((int) 1)
0x43b: Push((int) 527013)
0x43c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x43d: Pop(3)
0x43e: PushEmpty(bool, object, int)
0x43f: Stack[-4] = Stack[-2]
0x440: Stack[-1] = (int) 447
0x441: Call2 0x452

0x442: Pop(3)
0x443: Return(); Pop(2)

0x444: Stack[-1] = 0
0x445: PushEmpty(object, object)
0x446: @ GetDiaryRoot(Stack[-1])
0x447: Pop(0)
0x448: Pop(0); Push((bool) Stack[-1] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44a: Push("Can't retrieve diary root") // @poff=356
0x44b: @ Trace(Stack[-1])
0x44c: Pop(1)
0x44d: Stack[-3] = (bool) 0
0x44e: Return(); Pop(2)

0x44f: Stack[-1] = Stack[-3]
0x450: Return(); Pop(2)

0x451: Stack[-1] = 0
0x452: PushEmpty(object, object, int, object, object, int)
0x453: PushEmpty(object)
0x454: Call2 0x445

0x455: Stack[-1] = Stack[-4]
0x456: Pop(1)
0x457: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=408
0x458: Pop(0)
0x459: Pop(0); Push((bool) Stack[-2] == 0)
0x45a: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45b: Push("Can't find diary parent with id: ") // @poff=413
0x45c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x45d: @ Trace(Stack[-1])
0x45e: Pop(1)
0x45f: Stack[-9] = (bool) 0
0x460: Return(); Pop(6)

0x461: @@ AddChild(Stack[-8]); Obj=2 // @poff=481
0x462: Pop(0)
0x463: Push((int) 7)
0x464: @ SendWorldWndMessage(Stack[-1])
0x465: Pop(1)
0x466: @@ GetCategory(Stack[-1]); Obj=8 // @poff=490
0x467: Pop(0)
0x468: @ SetDiarySection(Stack[-1])
0x469: Pop(0)
0x46a: Stack[-9] = (bool) 0
0x46b: Return(); Pop(6)

0x46c: Stack[-2] = 0
0x46d: Stack[-3] = 0
0x46e: PushEmpty(int, int)
0x46f: Push("branch") // @poff=502
0x470: @ GetVariable(Stack[-1], Stack[-2])
0x471: Pop(1)
0x472: Push((int) 0)
0x473: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x474: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x475: Stack[-3] = (int) 1
0x476: Return(); Pop(2)

0x477: GOTO 0x47d

0x478: Push((int) 1)
0x479: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47b: Stack[-3] = (int) 2
0x47c: Return(); Pop(2)

0x47d: Stack[-3] = (int) 3
0x47e: Return(); Pop(2)

0x47f: Stack[-1] = (int) 515551
0x480: Return(); Pop(0)

0x481: Stack[-1] = (int) 502876
0x482: Return(); Pop(0)

0x483: Stack[-1] = "ui/NPC_Rubin.png" // @poff=516
0x484: Return(); Pop(0)

0x485: Stack[-1] = "ui/NPC_Rubin_b.png" // @poff=550
0x486: Return(); Pop(0)

0x487: Stack[-1] = (bool) 1
0x488: Return(); Pop(0)

