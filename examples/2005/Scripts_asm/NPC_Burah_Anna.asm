GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	W:Fear
	W:Rage
	W:Dream
	W:Adoration
	W:player
	A:GetPosition
	A:GetProperty
	A:SetProperty
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:add
	W:money
	W:Money
	W:ui/NPC_Anna.png
	W:ui/NPC_Anna_b.png
	W:b5q01_1
	W:money10000 is given
	W:playsound
	W:givemoney
	W:oob6Anna1
	W:money3000 is given
	W:b5q01TalkToVera
	W:b5q01VeraDead
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000460065006100720000005200610067006500000044007200650061006d000000410064006f0072006100740069006f006e00000070006c0061007900650072000000476574506f736974696f6e0047657450726f70657274790053657450726f70657274790047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f706572747900616464006d006f006e006500790000004d006f006e00650079000000750069002f004e00500043005f0041006e006e0061002e0070006e0067000000750069002f004e00500043005f0041006e006e0061005f0062002e0070006e0067000000620035007100300031005f00310000006d006f006e006500790031003000300030003000200069007300200067006900760065006e00000070006c006100790073006f0075006e006400000067006900760065006d006f006e006500790000006f006f006200360041006e006e006100310000006d006f006e00650079003300300030003000200069007300200067006900760065006e00000062003500710030003100540061006c006b0054006f0056006500720061000000620035007100300031005600650072006100440065006100640000006200720061006e00630068000000
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	Trace (1 args)
	TriggerWorld (2 args)

RunOp = 0x61f
RunTask = 11

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1ec Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2ea Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3ed Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5f5 Vars = (int, int)
	GTASK_11 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x671 Vars = (int)
		EVENT_6 Op = 0x697 Vars = ()
		EVENT_5 Op = 0x6a6 Vars = ()
		EVENT_45 Op = 0x6b3 Vars = (bool)
		EVENT_0 Op = 0x6bf Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x74a

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
0x11: Call2 0x851

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x7a4

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x74f

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x8ae

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x8ac

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x8b0

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x8b2

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x91e

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
0x55: Call2 0x793

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
0x68: Push((int) 530857)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x8e2

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 530859)
0x73: Push((int) 32176)
0x74: Push((int) 32175)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 530858)
0x78: Push((int) -1)
0x79: Push((int) 32174)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0x8b4

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x82e

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
0x9f: Call2 0x8b4

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
0xaf: Call2 0x835

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x84a

0xb8: Pop(0)
0xb9: Push((int) 32175)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x8d2

0xc0: Pop(2)
0xc1: Push((int) 32173)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral" // @poff=89
0xc6: Call2 0x9d

0xc7: Pop(1)
0xc8: Push((int) 530857)
0xc9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xca: Pop(1)
0xcb: @@@ ClearReplies(); Obj=0 // @poff=116
0xcc: Pop(0)
0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0x8e2

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd2: Push((int) 530859)
0xd3: Push((int) 32176)
0xd4: Push((int) 32175)
0xd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd6: Pop(3)
0xd7: Push((int) 530858)
0xd8: Push((int) -1)
0xd9: Push((int) 32174)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Return(); Pop(0)

0xdd: Push((int) 32176)
0xde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral" // @poff=89
0xe2: Call2 0x9d

0xe3: Pop(1)
0xe4: Push((int) 530860)
0xe5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe6: Pop(1)
0xe7: @@@ ClearReplies(); Obj=0 // @poff=116
0xe8: Pop(0)
0xe9: Push((int) 530861)
0xea: Push((int) 32179)
0xeb: Push((int) 32177)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: Push((int) 530862)
0xef: Push((int) 32185)
0xf0: Push((int) 32178)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: Push((int) 32179)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral" // @poff=89
0xf9: Call2 0x9d

0xfa: Pop(1)
0xfb: Push((int) 530863)
0xfc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfd: Pop(1)
0xfe: @@@ ClearReplies(); Obj=0 // @poff=116
0xff: Pop(0)
0x100: Push((int) 530864)
0x101: Push((int) 32182)
0x102: Push((int) 32180)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Push((int) 530865)
0x106: Push((int) 32185)
0x107: Push((int) 32181)
0x108: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: Push((int) 32182)
0x10c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x10e: PushEmpty(string)
0x10f: Stack[-1] = "Neutral" // @poff=89
0x110: Call2 0x9d

0x111: Pop(1)
0x112: Push((int) 530866)
0x113: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x114: Pop(1)
0x115: @@@ ClearReplies(); Obj=0 // @poff=116
0x116: Pop(0)
0x117: Push((int) 530867)
0x118: Push((int) 32185)
0x119: Push((int) 32183)
0x11a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11b: Pop(3)
0x11c: Push((int) 530868)
0x11d: Push((int) 32185)
0x11e: Push((int) 32184)
0x11f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: Push((int) 32185)
0x123: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x125: PushEmpty(string)
0x126: Stack[-1] = "Neutral" // @poff=89
0x127: Call2 0x9d

0x128: Pop(1)
0x129: Push((int) 530870)
0x12a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12b: Pop(1)
0x12c: @@@ ClearReplies(); Obj=0 // @poff=116
0x12d: Pop(0)
0x12e: Push((int) 530871)
0x12f: Push((int) -1)
0x130: Push((int) 32189)
0x131: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x132: Pop(3)
0x133: Push((int) 530872)
0x134: Push((int) -1)
0x135: Push((int) 32190)
0x136: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x137: Pop(3)
0x138: Return(); Pop(0)

0x139: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x13a: PushEmpty(bool)
0x13b: Call2 0x8b4

0x13c: Pop(0)
0x13d: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13e: @ lshStopAnimation()
0x13f: Pop(0)
0x140: GOTO 0x143

0x141: @ StopAnimation()
0x142: Pop(0)
0x143: Return(); Pop(0)

0x144: GOTO 0xb4

0x145: Return(); Pop(0)

0x146: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x147: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x148: PushEmpty(bool, object)
0x149: PushEmpty(object)
0x14a: Call2 0x851

0x14b: Stack[-1] = Stack[-2]
0x14c: Pop(1)
0x14d: Call2 0x7a4

0x14e: Pop(2)
0x14f: PushEmpty(bool, object, float)
0x150: Stack[-12] = Stack[-2]
0x151: Stack[-1] = (float) 70.0
0x152: Call2 0x74f

0x153: Pop(2)
0x154: Pop(1); Push((bool) Stack[-1] == 0)
0x155: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x156: Stack[-10] = (int) -2
0x157: Return(); Pop(8)

0x158: @ CreateDialog(Stack[-4])
0x159: Pop(0)
0x15a: PushEmpty(int)
0x15b: Call2 0x8ae

0x15c: Pop(0)
0x15d: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x15e: Pop(1)
0x15f: PushEmpty(int)
0x160: Call2 0x8ac

0x161: Pop(0)
0x162: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x163: Pop(1)
0x164: PushEmpty(string)
0x165: Call2 0x8b0

0x166: Pop(0)
0x167: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x168: Pop(1)
0x169: PushEmpty(string)
0x16a: Call2 0x8b2

0x16b: Pop(0)
0x16c: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x16d: Pop(1)
0x16e: PushEmpty(int)
0x16f: Call2 0x91e

0x170: Pop(0)
0x171: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x172: Pop(1)
0x173: Stack[-2] = (int) -1
0x174: @ IsOverrideActive(Stack[-3])
0x175: Pop(0)
0x176: Push(Stack[-3])
0x177: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x178: Stack[-10] = (int) -2
0x179: Return(); Pop(8)

0x17a: @ DoDialog(Stack[-4])
0x17b: Pop(0)
0x17c: PushEmpty(object, object)
0x17d: Stack[-11] = Stack[-2]
0x17e: Stack[-6] = Stack[-1]
0x17f: Push(-2, 4); TaskCall(4)
0x180: Call2 0x197

0x181: Pop(-2, 4); TaskReturn
0x182: Pop(2)
0x183: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x184: Pop(0)
0x185: Pop(0); Push((bool) Stack[-1] == 0)
0x186: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x187: @ sync()
0x188: Pop(0)
0x189: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x18a: Pop(0)
0x18b: GOTO 0x185

0x18c: PushEmpty(object)
0x18d: Stack[-10] = Stack[-1]
0x18e: Call2 0x793

0x18f: Pop(1)
0x190: @ StopDialog(Stack[-4])
0x191: Pop(0)
0x192: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x193: Pop(0)
0x194: Stack[-2] = Stack[-10]
0x195: Return(); Pop(8)

0x196: Stack[-4] = 0
0x197: PushEmpty()
0x198: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x199: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x19a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19b: Push((int) 1)
0x19c: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x19d: PushEmpty(string)
0x19e: Stack[-1] = "Neutral" // @poff=89
0x19f: Call2 0x1d6

0x1a0: Pop(1)
0x1a1: Push((int) 535294)
0x1a2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a3: Pop(1)
0x1a4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a5: Pop(0)
0x1a6: Push((int) 535295)
0x1a7: Push((int) 36973)
0x1a8: Push((int) 36972)
0x1a9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1aa: Pop(3)
0x1ab: Push((int) 535302)
0x1ac: Push((int) -1)
0x1ad: Push((int) 36980)
0x1ae: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1af: Pop(3)
0x1b0: Push((int) 535303)
0x1b1: Push((int) -1)
0x1b2: Push((int) 36981)
0x1b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b4: Pop(3)
0x1b5: GOTO 0x1b8

0x1b6: Return(); Pop(0)

0x1b7: GOTO 0x19b

0x1b8: PushEmpty(bool)
0x1b9: Call2 0x8b4

0x1ba: Pop(0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1bc: @ lshWaitForAnimEnd()
0x1bd: Pop(0)
0x1be: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: GOTO 0x1c6

0x1c1: PushEmpty(string)
0x1c2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1c3: Call2 0x82e

0x1c4: Pop(1)
0x1c5: GOTO 0x1bc

0x1c6: GOTO 0x1d5

0x1c7: Push("all") // @poff=138
0x1c8: Push("idle") // @poff=146
0x1c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ca: Pop(2)
0x1cb: @ WaitForAnimEnd()
0x1cc: Pop(0)
0x1cd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: GOTO 0x1d5

0x1d0: Push("all") // @poff=138
0x1d1: Push("idle") // @poff=146
0x1d2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d3: Pop(2)
0x1d4: GOTO 0x1cb

0x1d5: Return(); Pop(0)

0x1d6: PushEmpty()
0x1d7: PushEmpty(bool)
0x1d8: Call2 0x8b4

0x1d9: Pop(0)
0x1da: Pop(1); Push((bool) Stack[-1] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Return(); Pop(0)

0x1dd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: Return(); Pop(0)

0x1e0: PushEmpty(string, bool)
0x1e1: Stack[-3] = Stack[-2]
0x1e2: Push("") // @poff=102
0x1e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e5: Stack[-1] = (bool) 0
0x1e6: GOTO 0x1e8

0x1e7: Stack[-1] = (bool) 1
0x1e8: Call2 0x835

0x1e9: Pop(2)
0x1ea: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1eb: Return(); Pop(0)

0x1ec: PushEmpty()
0x1ed: Push((int) 1)
0x1ee: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x1ef: PushEmpty()
0x1f0: Call2 0x84a

0x1f1: Pop(0)
0x1f2: Push((int) 36971)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Neutral" // @poff=89
0x1f7: Call2 0x1d6

0x1f8: Pop(1)
0x1f9: Push((int) 535294)
0x1fa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fb: Pop(1)
0x1fc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1fd: Pop(0)
0x1fe: Push((int) 535295)
0x1ff: Push((int) 36973)
0x200: Push((int) 36972)
0x201: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x202: Pop(3)
0x203: Push((int) 535302)
0x204: Push((int) -1)
0x205: Push((int) 36980)
0x206: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x207: Pop(3)
0x208: Push((int) 535303)
0x209: Push((int) -1)
0x20a: Push((int) 36981)
0x20b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20c: Pop(3)
0x20d: Return(); Pop(0)

0x20e: Push((int) 36973)
0x20f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x211: PushEmpty(string)
0x212: Stack[-1] = "Neutral" // @poff=89
0x213: Call2 0x1d6

0x214: Pop(1)
0x215: Push((int) 535296)
0x216: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x217: Pop(1)
0x218: @@@ ClearReplies(); Obj=0 // @poff=116
0x219: Pop(0)
0x21a: Push((int) 535297)
0x21b: Push((int) 36975)
0x21c: Push((int) 36974)
0x21d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21e: Pop(3)
0x21f: Push((int) 535301)
0x220: Push((int) 36975)
0x221: Push((int) 36978)
0x222: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x223: Pop(3)
0x224: Return(); Pop(0)

0x225: Push((int) 36975)
0x226: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x228: PushEmpty(string)
0x229: Stack[-1] = "Neutral" // @poff=89
0x22a: Call2 0x1d6

0x22b: Pop(1)
0x22c: Push((int) 535298)
0x22d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22e: Pop(1)
0x22f: @@@ ClearReplies(); Obj=0 // @poff=116
0x230: Pop(0)
0x231: Push((int) 535299)
0x232: Push((int) -1)
0x233: Push((int) 36976)
0x234: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x235: Pop(3)
0x236: Push((int) 535300)
0x237: Push((int) -1)
0x238: Push((int) 36977)
0x239: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23a: Pop(3)
0x23b: Return(); Pop(0)

0x23c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x23d: PushEmpty(bool)
0x23e: Call2 0x8b4

0x23f: Pop(0)
0x240: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x241: @ lshStopAnimation()
0x242: Pop(0)
0x243: GOTO 0x246

0x244: @ StopAnimation()
0x245: Pop(0)
0x246: Return(); Pop(0)

0x247: GOTO 0x1ed

0x248: Return(); Pop(0)

0x249: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x24a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x24b: PushEmpty(bool, object)
0x24c: PushEmpty(object)
0x24d: Call2 0x851

0x24e: Stack[-1] = Stack[-2]
0x24f: Pop(1)
0x250: Call2 0x7a4

0x251: Pop(2)
0x252: PushEmpty(bool, object, float)
0x253: Stack[-12] = Stack[-2]
0x254: Stack[-1] = (float) 70.0
0x255: Call2 0x74f

0x256: Pop(2)
0x257: Pop(1); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x259: Stack[-10] = (int) -2
0x25a: Return(); Pop(8)

0x25b: @ CreateDialog(Stack[-4])
0x25c: Pop(0)
0x25d: PushEmpty(int)
0x25e: Call2 0x8ae

0x25f: Pop(0)
0x260: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x261: Pop(1)
0x262: PushEmpty(int)
0x263: Call2 0x8ac

0x264: Pop(0)
0x265: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x266: Pop(1)
0x267: PushEmpty(string)
0x268: Call2 0x8b0

0x269: Pop(0)
0x26a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x26b: Pop(1)
0x26c: PushEmpty(string)
0x26d: Call2 0x8b2

0x26e: Pop(0)
0x26f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x270: Pop(1)
0x271: PushEmpty(int)
0x272: Call2 0x91e

0x273: Pop(0)
0x274: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x275: Pop(1)
0x276: Stack[-2] = (int) -1
0x277: @ IsOverrideActive(Stack[-3])
0x278: Pop(0)
0x279: Push(Stack[-3])
0x27a: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27b: Stack[-10] = (int) -2
0x27c: Return(); Pop(8)

0x27d: @ DoDialog(Stack[-4])
0x27e: Pop(0)
0x27f: PushEmpty(object, object)
0x280: Stack[-11] = Stack[-2]
0x281: Stack[-6] = Stack[-1]
0x282: Push(-2, 4); TaskCall(6)
0x283: Call2 0x29a

0x284: Pop(-2, 4); TaskReturn
0x285: Pop(2)
0x286: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x287: Pop(0)
0x288: Pop(0); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28a: @ sync()
0x28b: Pop(0)
0x28c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x28d: Pop(0)
0x28e: GOTO 0x288

0x28f: PushEmpty(object)
0x290: Stack[-10] = Stack[-1]
0x291: Call2 0x793

0x292: Pop(1)
0x293: @ StopDialog(Stack[-4])
0x294: Pop(0)
0x295: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x296: Pop(0)
0x297: Stack[-2] = Stack[-10]
0x298: Return(); Pop(8)

0x299: Stack[-4] = 0
0x29a: PushEmpty()
0x29b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x29c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x29d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x29e: Push((int) 1)
0x29f: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2a0: PushEmpty(string)
0x2a1: Stack[-1] = "Neutral" // @poff=89
0x2a2: Call2 0x2d4

0x2a3: Pop(1)
0x2a4: Push((int) 517997)
0x2a5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a6: Pop(1)
0x2a7: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a8: Pop(0)
0x2a9: Push((int) 517998)
0x2aa: Push((int) 29658)
0x2ab: Push((int) 19131)
0x2ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ad: Pop(3)
0x2ae: Push((int) 528292)
0x2af: Push((int) 29658)
0x2b0: Push((int) 29657)
0x2b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b2: Pop(3)
0x2b3: GOTO 0x2b6

0x2b4: Return(); Pop(0)

0x2b5: GOTO 0x29e

0x2b6: PushEmpty(bool)
0x2b7: Call2 0x8b4

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2ba: @ lshWaitForAnimEnd()
0x2bb: Pop(0)
0x2bc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: GOTO 0x2c4

0x2bf: PushEmpty(string)
0x2c0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2c1: Call2 0x82e

0x2c2: Pop(1)
0x2c3: GOTO 0x2ba

0x2c4: GOTO 0x2d3

0x2c5: Push("all") // @poff=138
0x2c6: Push("idle") // @poff=146
0x2c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c8: Pop(2)
0x2c9: @ WaitForAnimEnd()
0x2ca: Pop(0)
0x2cb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2d3

0x2ce: Push("all") // @poff=138
0x2cf: Push("idle") // @poff=146
0x2d0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d1: Pop(2)
0x2d2: GOTO 0x2c9

0x2d3: Return(); Pop(0)

0x2d4: PushEmpty()
0x2d5: PushEmpty(bool)
0x2d6: Call2 0x8b4

0x2d7: Pop(0)
0x2d8: Pop(1); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: Return(); Pop(0)

0x2db: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: Return(); Pop(0)

0x2de: PushEmpty(string, bool)
0x2df: Stack[-3] = Stack[-2]
0x2e0: Push("") // @poff=102
0x2e1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-1] = (bool) 0
0x2e4: GOTO 0x2e6

0x2e5: Stack[-1] = (bool) 1
0x2e6: Call2 0x835

0x2e7: Pop(2)
0x2e8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty()
0x2eb: Push((int) 1)
0x2ec: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x2ed: PushEmpty()
0x2ee: Call2 0x84a

0x2ef: Pop(0)
0x2f0: Push((int) 19130)
0x2f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2f3: PushEmpty(string)
0x2f4: Stack[-1] = "Neutral" // @poff=89
0x2f5: Call2 0x2d4

0x2f6: Pop(1)
0x2f7: Push((int) 517997)
0x2f8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2f9: Pop(1)
0x2fa: @@@ ClearReplies(); Obj=0 // @poff=116
0x2fb: Pop(0)
0x2fc: Push((int) 517998)
0x2fd: Push((int) 29658)
0x2fe: Push((int) 19131)
0x2ff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x300: Pop(3)
0x301: Push((int) 528292)
0x302: Push((int) 29658)
0x303: Push((int) 29657)
0x304: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x305: Pop(3)
0x306: Return(); Pop(0)

0x307: Push((int) 29658)
0x308: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x30a: PushEmpty(string)
0x30b: Stack[-1] = "Neutral" // @poff=89
0x30c: Call2 0x2d4

0x30d: Pop(1)
0x30e: Push((int) 528293)
0x30f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x310: Pop(1)
0x311: @@@ ClearReplies(); Obj=0 // @poff=116
0x312: Pop(0)
0x313: Push((int) 528294)
0x314: Push((int) -1)
0x315: Push((int) 29660)
0x316: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x317: Pop(3)
0x318: Push((int) 528295)
0x319: Push((int) -1)
0x31a: Push((int) 29661)
0x31b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31c: Pop(3)
0x31d: Return(); Pop(0)

0x31e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x31f: PushEmpty(bool)
0x320: Call2 0x8b4

0x321: Pop(0)
0x322: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x323: @ lshStopAnimation()
0x324: Pop(0)
0x325: GOTO 0x328

0x326: @ StopAnimation()
0x327: Pop(0)
0x328: Return(); Pop(0)

0x329: GOTO 0x2eb

0x32a: Return(); Pop(0)

0x32b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x32d: PushEmpty(bool, object)
0x32e: PushEmpty(object)
0x32f: Call2 0x851

0x330: Stack[-1] = Stack[-2]
0x331: Pop(1)
0x332: Call2 0x7a4

0x333: Pop(2)
0x334: PushEmpty(bool, object, float)
0x335: Stack[-12] = Stack[-2]
0x336: Stack[-1] = (float) 70.0
0x337: Call2 0x74f

0x338: Pop(2)
0x339: Pop(1); Push((bool) Stack[-1] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-10] = (int) -2
0x33c: Return(); Pop(8)

0x33d: @ CreateDialog(Stack[-4])
0x33e: Pop(0)
0x33f: PushEmpty(int)
0x340: Call2 0x8ae

0x341: Pop(0)
0x342: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x343: Pop(1)
0x344: PushEmpty(int)
0x345: Call2 0x8ac

0x346: Pop(0)
0x347: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x348: Pop(1)
0x349: PushEmpty(string)
0x34a: Call2 0x8b0

0x34b: Pop(0)
0x34c: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x34d: Pop(1)
0x34e: PushEmpty(string)
0x34f: Call2 0x8b2

0x350: Pop(0)
0x351: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x352: Pop(1)
0x353: PushEmpty(int)
0x354: Call2 0x91e

0x355: Pop(0)
0x356: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x357: Pop(1)
0x358: Stack[-2] = (int) -1
0x359: @ IsOverrideActive(Stack[-3])
0x35a: Pop(0)
0x35b: Push(Stack[-3])
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-10] = (int) -2
0x35e: Return(); Pop(8)

0x35f: @ DoDialog(Stack[-4])
0x360: Pop(0)
0x361: PushEmpty(object, object)
0x362: Stack[-11] = Stack[-2]
0x363: Stack[-6] = Stack[-1]
0x364: Push(-2, 4); TaskCall(8)
0x365: Call2 0x37c

0x366: Pop(-2, 4); TaskReturn
0x367: Pop(2)
0x368: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x369: Pop(0)
0x36a: Pop(0); Push((bool) Stack[-1] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36c: @ sync()
0x36d: Pop(0)
0x36e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x36f: Pop(0)
0x370: GOTO 0x36a

0x371: PushEmpty(object)
0x372: Stack[-10] = Stack[-1]
0x373: Call2 0x793

0x374: Pop(1)
0x375: @ StopDialog(Stack[-4])
0x376: Pop(0)
0x377: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x378: Pop(0)
0x379: Stack[-2] = Stack[-10]
0x37a: Return(); Pop(8)

0x37b: Stack[-4] = 0
0x37c: PushEmpty()
0x37d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x37e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x37f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x380: Push((int) 1)
0x381: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x382: PushEmpty(string)
0x383: Stack[-1] = "Fear" // @poff=156
0x384: Call2 0x3d7

0x385: Pop(1)
0x386: Push((int) 518646)
0x387: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x388: Pop(1)
0x389: @@@ ClearReplies(); Obj=0 // @poff=116
0x38a: Pop(0)
0x38b: PushEmpty(bool)
0x38c: Stack[-1] = (bool) 0
0x38d: PushEmpty(bool, object)
0x38e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38f: Call2 0x8ee

0x390: Pop(1)
0x391: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x392: PushEmpty(bool, object)
0x393: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x394: Call2 0x906

0x395: Pop(1)
0x396: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x397: Stack[-1] = (bool) 1
0x398: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x399: Push((int) 518647)
0x39a: Push((int) 19740)
0x39b: Push((int) 19739)
0x39c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39d: Pop(3)
0x39e: PushEmpty(bool)
0x39f: Stack[-1] = (bool) 0
0x3a0: PushEmpty(bool, object)
0x3a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a2: Call2 0x8fa

0x3a3: Pop(1)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a5: PushEmpty(bool, object)
0x3a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a7: Call2 0x912

0x3a8: Pop(1)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3aa: Stack[-1] = (bool) 1
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ac: Push((int) 518651)
0x3ad: Push((int) 19744)
0x3ae: Push((int) 19743)
0x3af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b0: Pop(3)
0x3b1: Push((int) 518654)
0x3b2: Push((int) -1)
0x3b3: Push((int) 19746)
0x3b4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b5: Pop(3)
0x3b6: GOTO 0x3b9

0x3b7: Return(); Pop(0)

0x3b8: GOTO 0x380

0x3b9: PushEmpty(bool)
0x3ba: Call2 0x8b4

0x3bb: Pop(0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3bd: @ lshWaitForAnimEnd()
0x3be: Pop(0)
0x3bf: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c1: GOTO 0x3c7

0x3c2: PushEmpty(string)
0x3c3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3c4: Call2 0x82e

0x3c5: Pop(1)
0x3c6: GOTO 0x3bd

0x3c7: GOTO 0x3d6

0x3c8: Push("all") // @poff=138
0x3c9: Push("idle") // @poff=146
0x3ca: @ PlayAnimation(Stack[-2], Stack[-1])
0x3cb: Pop(2)
0x3cc: @ WaitForAnimEnd()
0x3cd: Pop(0)
0x3ce: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3d0: GOTO 0x3d6

0x3d1: Push("all") // @poff=138
0x3d2: Push("idle") // @poff=146
0x3d3: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d4: Pop(2)
0x3d5: GOTO 0x3cc

0x3d6: Return(); Pop(0)

0x3d7: PushEmpty()
0x3d8: PushEmpty(bool)
0x3d9: Call2 0x8b4

0x3da: Pop(0)
0x3db: Pop(1); Push((bool) Stack[-1] == 0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dd: Return(); Pop(0)

0x3de: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3e0: Return(); Pop(0)

0x3e1: PushEmpty(string, bool)
0x3e2: Stack[-3] = Stack[-2]
0x3e3: Push("") // @poff=102
0x3e4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: Stack[-1] = (bool) 0
0x3e7: GOTO 0x3e9

0x3e8: Stack[-1] = (bool) 1
0x3e9: Call2 0x835

0x3ea: Pop(2)
0x3eb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3ec: Return(); Pop(0)

0x3ed: PushEmpty()
0x3ee: Push((int) 1)
0x3ef: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x3f0: PushEmpty()
0x3f1: Call2 0x84a

0x3f2: Pop(0)
0x3f3: Push((int) 19739)
0x3f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f6: PushEmpty(object, object)
0x3f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f9: Call2 0x8b6

0x3fa: Pop(2)
0x3fb: Push((int) 19745)
0x3fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3fe: PushEmpty(object, object)
0x3ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x400: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x401: Call2 0x8bc

0x402: Pop(2)
0x403: PushEmpty(object, object)
0x404: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x405: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x406: Call2 0x8c2

0x407: Pop(2)
0x408: PushEmpty(object, object)
0x409: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x40a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40b: Call2 0x8cc

0x40c: Pop(2)
0x40d: Push((int) 19824)
0x40e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x410: PushEmpty(object, object)
0x411: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x412: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x413: Call2 0x8bc

0x414: Pop(2)
0x415: PushEmpty(object, object)
0x416: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x417: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x418: Call2 0x8d8

0x419: Pop(2)
0x41a: PushEmpty(object, object)
0x41b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x41c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x41d: Call2 0x8cc

0x41e: Pop(2)
0x41f: Push((int) 19738)
0x420: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x422: PushEmpty(string)
0x423: Stack[-1] = "Fear" // @poff=156
0x424: Call2 0x3d7

0x425: Pop(1)
0x426: Push((int) 518646)
0x427: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x428: Pop(1)
0x429: @@@ ClearReplies(); Obj=0 // @poff=116
0x42a: Pop(0)
0x42b: PushEmpty(bool)
0x42c: Stack[-1] = (bool) 0
0x42d: PushEmpty(bool, object)
0x42e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42f: Call2 0x8ee

0x430: Pop(1)
0x431: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x432: PushEmpty(bool, object)
0x433: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x434: Call2 0x906

0x435: Pop(1)
0x436: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x437: Stack[-1] = (bool) 1
0x438: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x439: Push((int) 518647)
0x43a: Push((int) 19740)
0x43b: Push((int) 19739)
0x43c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x43d: Pop(3)
0x43e: PushEmpty(bool)
0x43f: Stack[-1] = (bool) 0
0x440: PushEmpty(bool, object)
0x441: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x442: Call2 0x8fa

0x443: Pop(1)
0x444: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x445: PushEmpty(bool, object)
0x446: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x447: Call2 0x912

0x448: Pop(1)
0x449: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x44a: Stack[-1] = (bool) 1
0x44b: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44c: Push((int) 518651)
0x44d: Push((int) 19744)
0x44e: Push((int) 19743)
0x44f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x450: Pop(3)
0x451: Push((int) 518654)
0x452: Push((int) -1)
0x453: Push((int) 19746)
0x454: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x455: Pop(3)
0x456: Return(); Pop(0)

0x457: Push((int) 19744)
0x458: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x45a: PushEmpty(string)
0x45b: Stack[-1] = "Rage" // @poff=166
0x45c: Call2 0x3d7

0x45d: Pop(1)
0x45e: Push((int) 518652)
0x45f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x460: Pop(1)
0x461: @@@ ClearReplies(); Obj=0 // @poff=116
0x462: Pop(0)
0x463: Push((int) 518720)
0x464: Push((int) 19815)
0x465: Push((int) 19811)
0x466: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x467: Pop(3)
0x468: Push((int) 518722)
0x469: Push((int) -1)
0x46a: Push((int) 19813)
0x46b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x46c: Pop(3)
0x46d: Push((int) 518732)
0x46e: Push((int) -1)
0x46f: Push((int) 19824)
0x470: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x471: Pop(3)
0x472: Return(); Pop(0)

0x473: Push((int) 19815)
0x474: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x476: PushEmpty(string)
0x477: Stack[-1] = "Neutral" // @poff=89
0x478: Call2 0x3d7

0x479: Pop(1)
0x47a: Push((int) 518724)
0x47b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x47c: Pop(1)
0x47d: @@@ ClearReplies(); Obj=0 // @poff=116
0x47e: Pop(0)
0x47f: Push((int) 518725)
0x480: Push((int) 19817)
0x481: Push((int) 19816)
0x482: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x483: Pop(3)
0x484: Push((int) 518727)
0x485: Push((int) 19819)
0x486: Push((int) 19818)
0x487: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x488: Pop(3)
0x489: Return(); Pop(0)

0x48a: Push((int) 19819)
0x48b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x48d: PushEmpty(string)
0x48e: Stack[-1] = "Dream" // @poff=176
0x48f: Call2 0x3d7

0x490: Pop(1)
0x491: Push((int) 518728)
0x492: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x493: Pop(1)
0x494: @@@ ClearReplies(); Obj=0 // @poff=116
0x495: Pop(0)
0x496: Push((int) 518729)
0x497: Push((int) 19817)
0x498: Push((int) 19820)
0x499: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x49a: Pop(3)
0x49b: Return(); Pop(0)

0x49c: Push((int) 19817)
0x49d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x49f: PushEmpty(string)
0x4a0: Stack[-1] = "Neutral" // @poff=89
0x4a1: Call2 0x3d7

0x4a2: Pop(1)
0x4a3: Push((int) 518726)
0x4a4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4a5: Pop(1)
0x4a6: @@@ ClearReplies(); Obj=0 // @poff=116
0x4a7: Pop(0)
0x4a8: Push((int) 518730)
0x4a9: Push((int) -1)
0x4aa: Push((int) 19822)
0x4ab: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ac: Pop(3)
0x4ad: Push((int) 518653)
0x4ae: Push((int) -1)
0x4af: Push((int) 19745)
0x4b0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4b1: Pop(3)
0x4b2: Return(); Pop(0)

0x4b3: Push((int) 19740)
0x4b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4b6: PushEmpty(string)
0x4b7: Stack[-1] = "Fear" // @poff=156
0x4b8: Call2 0x3d7

0x4b9: Pop(1)
0x4ba: Push((int) 518648)
0x4bb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4bc: Pop(1)
0x4bd: @@@ ClearReplies(); Obj=0 // @poff=116
0x4be: Pop(0)
0x4bf: Push((int) 518649)
0x4c0: Push((int) 19826)
0x4c1: Push((int) 19741)
0x4c2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4c3: Pop(3)
0x4c4: Return(); Pop(0)

0x4c5: Push((int) 19826)
0x4c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4c8: PushEmpty(string)
0x4c9: Stack[-1] = "Neutral" // @poff=89
0x4ca: Call2 0x3d7

0x4cb: Pop(1)
0x4cc: Push((int) 518734)
0x4cd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4ce: Pop(1)
0x4cf: @@@ ClearReplies(); Obj=0 // @poff=116
0x4d0: Pop(0)
0x4d1: Push((int) 518735)
0x4d2: Push((int) 19830)
0x4d3: Push((int) 19827)
0x4d4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4d5: Pop(3)
0x4d6: Push((int) 518736)
0x4d7: Push((int) 19829)
0x4d8: Push((int) 19828)
0x4d9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4da: Pop(3)
0x4db: PushEmpty(bool, object)
0x4dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4dd: Call2 0x8fa

0x4de: Pop(1)
0x4df: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e0: Push((int) 531552)
0x4e1: Push((int) 19744)
0x4e2: Push((int) 32915)
0x4e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4e4: Pop(3)
0x4e5: Return(); Pop(0)

0x4e6: Push((int) 19829)
0x4e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e8: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4e9: Push((int) 518737)
0x4ea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4eb: Pop(1)
0x4ec: @@@ ClearReplies(); Obj=0 // @poff=116
0x4ed: Pop(0)
0x4ee: Push((int) 528296)
0x4ef: Push((int) 29663)
0x4f0: Push((int) 29662)
0x4f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4f2: Pop(3)
0x4f3: Push((int) 518742)
0x4f4: Push((int) -1)
0x4f5: Push((int) 19834)
0x4f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4f7: Pop(3)
0x4f8: Return(); Pop(0)

0x4f9: Push((int) 29663)
0x4fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x4fc: PushEmpty(string)
0x4fd: Stack[-1] = "Dream" // @poff=176
0x4fe: Call2 0x3d7

0x4ff: Pop(1)
0x500: Push((int) 528297)
0x501: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x502: Pop(1)
0x503: @@@ ClearReplies(); Obj=0 // @poff=116
0x504: Pop(0)
0x505: Push((int) 518741)
0x506: Push((int) 19835)
0x507: Push((int) 19833)
0x508: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x509: Pop(3)
0x50a: Return(); Pop(0)

0x50b: Push((int) 19835)
0x50c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x50e: PushEmpty(string)
0x50f: Stack[-1] = "Adoration" // @poff=188
0x510: Call2 0x3d7

0x511: Pop(1)
0x512: Push((int) 518743)
0x513: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x514: Pop(1)
0x515: @@@ ClearReplies(); Obj=0 // @poff=116
0x516: Pop(0)
0x517: Push((int) 518744)
0x518: Push((int) 19837)
0x519: Push((int) 19836)
0x51a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x51b: Pop(3)
0x51c: Return(); Pop(0)

0x51d: Push((int) 19837)
0x51e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x520: Push((int) 518745)
0x521: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x522: Pop(1)
0x523: @@@ ClearReplies(); Obj=0 // @poff=116
0x524: Pop(0)
0x525: Push((int) 518746)
0x526: Push((int) -1)
0x527: Push((int) 19838)
0x528: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x529: Pop(3)
0x52a: Push((int) 518747)
0x52b: Push((int) -1)
0x52c: Push((int) 19839)
0x52d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x52e: Pop(3)
0x52f: Return(); Pop(0)

0x530: Push((int) 19830)
0x531: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x533: PushEmpty(string)
0x534: Stack[-1] = "Adoration" // @poff=188
0x535: Call2 0x3d7

0x536: Pop(1)
0x537: Push((int) 518738)
0x538: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x539: Pop(1)
0x53a: @@@ ClearReplies(); Obj=0 // @poff=116
0x53b: Pop(0)
0x53c: Push((int) 518739)
0x53d: Push((int) -1)
0x53e: Push((int) 19831)
0x53f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x540: Pop(3)
0x541: Push((int) 518740)
0x542: Push((int) -1)
0x543: Push((int) 19832)
0x544: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x545: Pop(3)
0x546: Return(); Pop(0)

0x547: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x548: PushEmpty(bool)
0x549: Call2 0x8b4

0x54a: Pop(0)
0x54b: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54c: @ lshStopAnimation()
0x54d: Pop(0)
0x54e: GOTO 0x551

0x54f: @ StopAnimation()
0x550: Pop(0)
0x551: Return(); Pop(0)

0x552: GOTO 0x3ee

0x553: Return(); Pop(0)

0x554: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x555: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x556: PushEmpty(bool, object)
0x557: PushEmpty(object)
0x558: Call2 0x851

0x559: Stack[-1] = Stack[-2]
0x55a: Pop(1)
0x55b: Call2 0x7a4

0x55c: Pop(2)
0x55d: PushEmpty(bool, object, float)
0x55e: Stack[-12] = Stack[-2]
0x55f: Stack[-1] = (float) 70.0
0x560: Call2 0x74f

0x561: Pop(2)
0x562: Pop(1); Push((bool) Stack[-1] == 0)
0x563: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x564: Stack[-10] = (int) -2
0x565: Return(); Pop(8)

0x566: @ CreateDialog(Stack[-4])
0x567: Pop(0)
0x568: PushEmpty(int)
0x569: Call2 0x8ae

0x56a: Pop(0)
0x56b: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x56c: Pop(1)
0x56d: PushEmpty(int)
0x56e: Call2 0x8ac

0x56f: Pop(0)
0x570: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x571: Pop(1)
0x572: PushEmpty(string)
0x573: Call2 0x8b0

0x574: Pop(0)
0x575: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x576: Pop(1)
0x577: PushEmpty(string)
0x578: Call2 0x8b2

0x579: Pop(0)
0x57a: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x57b: Pop(1)
0x57c: PushEmpty(int)
0x57d: Call2 0x91e

0x57e: Pop(0)
0x57f: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x580: Pop(1)
0x581: Stack[-2] = (int) -1
0x582: @ IsOverrideActive(Stack[-3])
0x583: Pop(0)
0x584: Push(Stack[-3])
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: Stack[-10] = (int) -2
0x587: Return(); Pop(8)

0x588: @ DoDialog(Stack[-4])
0x589: Pop(0)
0x58a: PushEmpty(object, object)
0x58b: Stack[-11] = Stack[-2]
0x58c: Stack[-6] = Stack[-1]
0x58d: Push(-2, 4); TaskCall(10)
0x58e: Call2 0x5a5

0x58f: Pop(-2, 4); TaskReturn
0x590: Pop(2)
0x591: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x592: Pop(0)
0x593: Pop(0); Push((bool) Stack[-1] == 0)
0x594: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x595: @ sync()
0x596: Pop(0)
0x597: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x598: Pop(0)
0x599: GOTO 0x593

0x59a: PushEmpty(object)
0x59b: Stack[-10] = Stack[-1]
0x59c: Call2 0x793

0x59d: Pop(1)
0x59e: @ StopDialog(Stack[-4])
0x59f: Pop(0)
0x5a0: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5a1: Pop(0)
0x5a2: Stack[-2] = Stack[-10]
0x5a3: Return(); Pop(8)

0x5a4: Stack[-4] = 0
0x5a5: PushEmpty()
0x5a6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5a7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5a8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5a9: Push((int) 1)
0x5aa: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5ab: PushEmpty(string)
0x5ac: Stack[-1] = "Neutral" // @poff=89
0x5ad: Call2 0x5df

0x5ae: Pop(1)
0x5af: Push((int) 540551)
0x5b0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b1: Pop(1)
0x5b2: @@@ ClearReplies(); Obj=0 // @poff=116
0x5b3: Pop(0)
0x5b4: Push((int) 540552)
0x5b5: Push((int) -1)
0x5b6: Push((int) 42561)
0x5b7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5b8: Pop(3)
0x5b9: Push((int) 540795)
0x5ba: Push((int) -1)
0x5bb: Push((int) 42844)
0x5bc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5bd: Pop(3)
0x5be: GOTO 0x5c1

0x5bf: Return(); Pop(0)

0x5c0: GOTO 0x5a9

0x5c1: PushEmpty(bool)
0x5c2: Call2 0x8b4

0x5c3: Pop(0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5c5: @ lshWaitForAnimEnd()
0x5c6: Pop(0)
0x5c7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5c8: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c9: GOTO 0x5cf

0x5ca: PushEmpty(string)
0x5cb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5cc: Call2 0x82e

0x5cd: Pop(1)
0x5ce: GOTO 0x5c5

0x5cf: GOTO 0x5de

0x5d0: Push("all") // @poff=138
0x5d1: Push("idle") // @poff=146
0x5d2: @ PlayAnimation(Stack[-2], Stack[-1])
0x5d3: Pop(2)
0x5d4: @ WaitForAnimEnd()
0x5d5: Pop(0)
0x5d6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: GOTO 0x5de

0x5d9: Push("all") // @poff=138
0x5da: Push("idle") // @poff=146
0x5db: @ PlayAnimation(Stack[-2], Stack[-1])
0x5dc: Pop(2)
0x5dd: GOTO 0x5d4

0x5de: Return(); Pop(0)

0x5df: PushEmpty()
0x5e0: PushEmpty(bool)
0x5e1: Call2 0x8b4

0x5e2: Pop(0)
0x5e3: Pop(1); Push((bool) Stack[-1] == 0)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e5: Return(); Pop(0)

0x5e6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e8: Return(); Pop(0)

0x5e9: PushEmpty(string, bool)
0x5ea: Stack[-3] = Stack[-2]
0x5eb: Push("") // @poff=102
0x5ec: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5ed: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ee: Stack[-1] = (bool) 0
0x5ef: GOTO 0x5f1

0x5f0: Stack[-1] = (bool) 1
0x5f1: Call2 0x835

0x5f2: Pop(2)
0x5f3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5f4: Return(); Pop(0)

0x5f5: PushEmpty()
0x5f6: Push((int) 1)
0x5f7: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x5f8: PushEmpty()
0x5f9: Call2 0x84a

0x5fa: Pop(0)
0x5fb: Push((int) 42560)
0x5fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x5fe: PushEmpty(string)
0x5ff: Stack[-1] = "Neutral" // @poff=89
0x600: Call2 0x5df

0x601: Pop(1)
0x602: Push((int) 540551)
0x603: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x604: Pop(1)
0x605: @@@ ClearReplies(); Obj=0 // @poff=116
0x606: Pop(0)
0x607: Push((int) 540552)
0x608: Push((int) -1)
0x609: Push((int) 42561)
0x60a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x60b: Pop(3)
0x60c: Push((int) 540795)
0x60d: Push((int) -1)
0x60e: Push((int) 42844)
0x60f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x610: Pop(3)
0x611: Return(); Pop(0)

0x612: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x613: PushEmpty(bool)
0x614: Call2 0x8b4

0x615: Pop(0)
0x616: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x617: @ lshStopAnimation()
0x618: Pop(0)
0x619: GOTO 0x61c

0x61a: @ StopAnimation()
0x61b: Pop(0)
0x61c: Return(); Pop(0)

0x61d: GOTO 0x5f6

0x61e: Return(); Pop(0)

0x61f: Push(GlobalVars[1])
0x620: Stack[-1] = (bool) 0
0x621: GlobalVars[1] = Stack[-1]; Pop(1)
0x622: PushEmpty()
0x623: Call2 0x626

0x624: Pop(0)
0x625: Return(); Pop(0)

0x626: PushEmpty(bool)
0x627: Call2 0x74a

0x628: Pop(0)
0x629: Pop(1); Push((bool) Stack[-1] == 0)
0x62a: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62b: PushEmpty()
0x62c: Push(-0, 0); TaskCall(0)
0x62d: Call2 0x0

0x62e: Pop(-0, 0); TaskReturn
0x62f: Pop(0)
0x630: PushEmpty()
0x631: Call2 0x6a6

0x632: Pop(0)
0x633: @ GetDirection(Stack[-0]T)
0x634: Pop(0)
0x635: PushEmpty()
0x636: Call2 0x6dc

0x637: Pop(0)
0x638: GOTO 0x635

0x639: Return(); Pop(0)

0x63a: PushEmpty(object, object)
0x63b: Push("player") // @poff=208
0x63c: @ FindActor(Stack[-2], Stack[-1])
0x63d: Pop(1)
0x63e: Pop(0); Push((bool) Stack[-1] == 0)
0x63f: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x640: Stack[-3] = (bool) 0
0x641: Return(); Pop(2)

0x642: PushEmpty(bool, object)
0x643: Stack[-3] = Stack[-1]
0x644: Call2 0x741

0x645: Stack[-2] = Stack[-5]
0x646: Pop(2)
0x647: Return(); Pop(2)

0x648: Stack[-1] = 0
0x649: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x64a: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x64b: @ RotateAsync(Stack[-2], Stack[-1])
0x64c: Pop(2)
0x64d: Return(); Pop(0)

0x64e: PushEmpty(object, bool, object, bool)
0x64f: Push("player") // @poff=208
0x650: @ FindActor(Stack[-3], Stack[-1])
0x651: Pop(1)
0x652: Pop(0); Push((bool) Stack[-2] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: Stack[-5] = (bool) 0
0x655: Return(); Pop(4)

0x656: PushEmpty(float, object)
0x657: Stack[-4] = Stack[-1]
0x658: Call2 0x728

0x659: Pop(1)
0x65a: Push((float)90000.0)
0x65b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x65c: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65d: Stack[-5] = (bool) 0
0x65e: Return(); Pop(4)

0x65f: @ CanSee(Stack[-1], Stack[-2])
0x660: Pop(0)
0x661: Stack[-1] = Stack[-5]
0x662: Return(); Pop(4)

0x663: Stack[-2] = 0
0x664: PushEmpty(float, float)
0x665: Push((int) 8)
0x666: Push((int) 16)
0x667: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x668: Pop(2)
0x669: Push((int) 10)
0x66a: @ SetTimer(Stack[-1], Stack[-2])
0x66b: Pop(1)
0x66c: Return(); Pop(2)

0x66d: Push((int) 10)
0x66e: @ KillTimer(Stack[-1])
0x66f: Pop(1)
0x670: Return(); Pop(0)

0x671: PushEmpty()
0x672: Push((int) 10)
0x673: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x675: PushEmpty()
0x676: Call2 0x66d

0x677: Pop(0)
0x678: PushEmpty(bool)
0x679: Stack[-1] = (bool) 0
0x67a: PushEmpty(bool)
0x67b: Call2 0x74a

0x67c: Pop(0)
0x67d: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x67e: PushEmpty(bool)
0x67f: Call2 0x64e

0x680: Pop(0)
0x681: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x682: Stack[-1] = (bool) 1
0x683: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x684: PushEmpty(bool)
0x685: Call2 0x63a

0x686: Pop(0)
0x687: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x688: PushEmpty(bool, object)
0x689: PushEmpty(object)
0x68a: Call2 0x851

0x68b: Stack[-1] = Stack[-2]
0x68c: Pop(1)
0x68d: Call2 0x7de

0x68e: Pop(2)
0x68f: GOTO 0x696

0x690: PushEmpty()
0x691: Call2 0x649

0x692: Pop(0)
0x693: PushEmpty()
0x694: Call2 0x664

0x695: Pop(0)
0x696: Return(); Pop(0)

0x697: PushEmpty()
0x698: Call2 0x723

0x699: Pop(0)
0x69a: PushEmpty()
0x69b: Call2 0x66d

0x69c: Pop(0)
0x69d: @ lshStopSpeech()
0x69e: Pop(0)
0x69f: @ lshStopAnimation()
0x6a0: Pop(0)
0x6a1: @ StopAsync()
0x6a2: Pop(0)
0x6a3: @ Hold()
0x6a4: Pop(0)
0x6a5: Return(); Pop(0)

0x6a6: @ StopGroup0()
0x6a7: Pop(0)
0x6a8: PushEmpty()
0x6a9: Call2 0x66d

0x6aa: Pop(0)
0x6ab: PushEmpty(string)
0x6ac: Stack[-1] = "Neutral" // @poff=89
0x6ad: Call2 0x82e

0x6ae: Pop(1)
0x6af: PushEmpty()
0x6b0: Call2 0x664

0x6b1: Pop(0)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty()
0x6b4: Push(Stack[-1])
0x6b5: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b6: PushEmpty()
0x6b7: Call2 0x664

0x6b8: Pop(0)
0x6b9: GOTO 0x6be

0x6ba: PushEmpty(string)
0x6bb: Stack[-1] = "Neutral" // @poff=89
0x6bc: Call2 0x82e

0x6bd: Pop(1)
0x6be: Return(); Pop(0)

0x6bf: PushEmpty(bool, bool)
0x6c0: @ IsOverrideActive(Stack[-1])
0x6c1: Pop(0)
0x6c2: Pop(0); Push((bool) Stack[-1] == 0)
0x6c3: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6c4: EventDisable(0)
0x6c5: PushEmpty()
0x6c6: Call2 0x723

0x6c7: Pop(0)
0x6c8: PushEmpty(bool, object)
0x6c9: Stack[-5] = Stack[-1]
0x6ca: Call2 0x741

0x6cb: Pop(2)
0x6cc: EventEnable(0)
0x6cd: PushEmpty(object)
0x6ce: Stack[-4] = Stack[-1]
0x6cf: Call2 0x92f

0x6d0: Pop(1)
0x6d1: PushEmpty(string)
0x6d2: Stack[-1] = "Neutral" // @poff=89
0x6d3: Call2 0x82e

0x6d4: Pop(1)
0x6d5: PushEmpty()
0x6d6: Call2 0x66d

0x6d7: Pop(0)
0x6d8: PushEmpty()
0x6d9: Call2 0x664

0x6da: Pop(0)
0x6db: Return(); Pop(2)

0x6dc: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x6dd: @ WaitForAnimEnd()
0x6de: Pop(0)
0x6df: PushEmpty(bool)
0x6e0: Call2 0x74a

0x6e1: Pop(0)
0x6e2: Pop(1); Push((bool) Stack[-1] == 0)
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e4: Return(); Pop(12)

0x6e5: PushEmpty(int)
0x6e6: Call2 0x89b

0x6e7: Stack[-1] = Stack[-7]
0x6e8: Pop(1)
0x6e9: Stack[-5] = (int) 0
0x6ea: PushEmpty(bool)
0x6eb: Stack[-1] = (bool) 0
0x6ec: Push((int) 5)
0x6ed: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6ef: PushEmpty(bool)
0x6f0: Call2 0x74a

0x6f1: Pop(0)
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f3: Stack[-1] = (bool) 1
0x6f4: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x6f5: Pop(0); Push((bool) Stack[-6] == 0)
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6f7: Push((int) 3)
0x6f8: @ Sleep(Stack[-1], Stack[-5])
0x6f9: Pop(1)
0x6fa: Pop(0); Push((bool) Stack[-4] == 0)
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fc: GOTO 0x71e

0x6fd: GOTO 0x713

0x6fe: @ irand(Stack[-3], Stack[-6])
0x6ff: Pop(0)
0x700: Push((int) 5)
0x701: @ irand(Stack[-3], Stack[-1])
0x702: Pop(1)
0x703: Push((int) 0)
0x704: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x705: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x706: Stack[-3] = (int) 0
0x707: Push("all") // @poff=138
0x708: PushEmpty(string, int)
0x709: Stack[-6] = Stack[-1]
0x70a: Call2 0x894

0x70b: Pop(1)
0x70c: @ PlayAnimation(Stack[-2], Stack[-1])
0x70d: Pop(2)
0x70e: @ WaitForAnimEnd(Stack[-1])
0x70f: Pop(0)
0x710: Pop(0); Push((bool) Stack[-1] == 0)
0x711: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x712: GOTO 0x71e

0x713: PushEmpty(bool)
0x714: Call2 0x721

0x715: Pop(0)
0x716: Pop(1); Push((bool) Stack[-1] == 0)
0x717: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x718: GOTO 0x71e

0x719: @ ResetAAS()
0x71a: Pop(0)
0x71b: Push((int) 1)
0x71c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x71d: GOTO 0x6ea

0x71e: @ ResetAAS()
0x71f: Pop(0)
0x720: Return(); Pop(12)

0x721: Stack[-1] = (bool) 1
0x722: Return(); Pop(0)

0x723: @ StopAnimation()
0x724: Pop(0)
0x725: @ StopGroup0()
0x726: Pop(0)
0x727: Return(); Pop(0)

0x728: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x729: @ GetPosition(Stack[-3])
0x72a: Pop(0)
0x72b: @@ GetPosition(Stack[-2]); Obj=7 // @poff=222
0x72c: Pop(0)
0x72d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x72e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x72f: Return(); Pop(6)

0x730: PushEmpty(int, int)
0x731: @@ GetProperty(Stack[-4], Stack[-1]); Obj=5 // @poff=234
0x732: Pop(0)
0x733: Pop(0); Push(Stack[-1] + Stack[-3]);
0x734: @@ SetProperty(Stack[-5], Stack[-1]); Obj=6 // @poff=246
0x735: Pop(1)
0x736: Return(); Pop(2)

0x737: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x738: @ GetPosition(Stack[-3])
0x739: Pop(0)
0x73a: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x73b: Push(CvectorIndex(Stack[-2], 0))
0x73c: Push(CvectorIndex(Stack[-3], 2))
0x73d: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x73e: Pop(2)
0x73f: Stack[-1] = Stack[-8]
0x740: Return(); Pop(6)

0x741: PushEmpty(cvector, cvector)
0x742: @@ GetPosition(Stack[-1]); Obj=3 // @poff=222
0x743: Pop(0)
0x744: PushEmpty(bool, cvector)
0x745: Stack[-3] = Stack[-1]
0x746: Call2 0x737

0x747: Stack[-2] = Stack[-6]
0x748: Pop(2)
0x749: Return(); Pop(2)

0x74a: PushEmpty(bool, bool)
0x74b: @ IsLoaded(Stack[-1])
0x74c: Pop(0)
0x74d: Stack[-1] = Stack[-3]
0x74e: Return(); Pop(2)

0x74f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x750: @@ GetPosition(Stack[-8]); Obj=20 // @poff=222
0x751: Pop(0)
0x752: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=258
0x753: Pop(0)
0x754: Push(CvectorIndex(Stack[-8], 1))
0x755: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x756: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x757: @ GetPosition(Stack[-7])
0x758: Pop(0)
0x759: @ GetEyesHeight(Stack[-9])
0x75a: Pop(0)
0x75b: Push(CvectorIndex(Stack[-7], 1))
0x75c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x75d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x75e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x75f: Push(CvectorIndex(Stack[-6], 1))
0x760: Stack[-1] = (int) 0
0x761: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x762: Pop(0); Push(Stack[-6] | Stack[-6]);
0x763: Pop(1); Push(Sqrt(Stack[-1]))
0x764: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x765: Stack[-5] = -Stack[-6]; Pop(0);
0x766: Pop(0); Push(Stack[-6] * Stack[-19]);
0x767: PushEmpty(cvector, cvector)
0x768: Push([0.0, 1.0, 0.0])
0x769: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x76a: Call2 0x857

0x76b: Pop(1)
0x76c: Push((int) 25)
0x76d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x76e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x76f: Push([0.0, 10.0, 0.0])
0x770: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x771: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x772: @ IsOverrideActive(Stack[-2])
0x773: Pop(0)
0x774: Push(Stack[-2])
0x775: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x776: Stack[-21] = (bool) 0
0x777: Return(); Pop(18)

0x778: @ StopWorld()
0x779: Pop(0)
0x77a: @ CameraTransit(Stack[-3], Stack[-5])
0x77b: Pop(0)
0x77c: Push(CvectorIndex(Stack[-4], 0))
0x77d: Push(CvectorIndex(Stack[-5], 2))
0x77e: @ Rotate(Stack[-2], Stack[-1])
0x77f: Pop(2)
0x780: PushEmpty(bool)
0x781: Call2 0x8b4

0x782: Pop(0)
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: GOTO 0x78d

0x785: Push("head") // @poff=272
0x786: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x787: Pop(1)
0x788: Push(Stack[-1])
0x789: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x78a: Push("head") // @poff=272
0x78b: @ LookAsyncCamera(Stack[-1])
0x78c: Pop(1)
0x78d: @ CameraWaitForPlayFinish()
0x78e: Pop(0)
0x78f: @ ResumeWorld()
0x790: Pop(0)
0x791: Stack[-21] = (bool) 1
0x792: Return(); Pop(18)

0x793: PushEmpty(bool, bool)
0x794: @ CameraSwitchToNormal()
0x795: Pop(0)
0x796: PushEmpty(bool)
0x797: Call2 0x8b4

0x798: Pop(0)
0x799: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x79a: GOTO 0x7a3

0x79b: Push("head") // @poff=272
0x79c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x79d: Pop(1)
0x79e: Push(Stack[-1])
0x79f: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a0: Push("head") // @poff=272
0x7a1: @ UnlookAsync(Stack[-1])
0x7a2: Pop(1)
0x7a3: Return(); Pop(2)

0x7a4: PushEmpty(int, int, int, int)
0x7a5: Push("voice_common") // @poff=282
0x7a6: @ GetVariable(Stack[-1], Stack[-3])
0x7a7: Pop(1)
0x7a8: Push(Stack[-2])
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7aa: PushEmpty(bool, object)
0x7ab: Stack[-7] = Stack[-1]
0x7ac: Call2 0x7de

0x7ad: Pop(1)
0x7ae: Pop(1); Push((bool) Stack[-1] == 0)
0x7af: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b0: PushEmpty(bool, object)
0x7b1: Stack[-7] = Stack[-1]
0x7b2: Call2 0x803

0x7b3: Pop(1)
0x7b4: Pop(1); Push((bool) Stack[-1] == 0)
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b6: Stack[-6] = (bool) 0
0x7b7: Return(); Pop(4)

0x7b8: Push((int) 2)
0x7b9: @ irand(Stack[-2], Stack[-1])
0x7ba: Pop(1)
0x7bb: Push(Stack[-1])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7bd: Push("voice_common") // @poff=282
0x7be: Push((int) 1)
0x7bf: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7c0: Push((int) 3)
0x7c1: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7c2: @ SetVariable(Stack[-2], Stack[-1])
0x7c3: Pop(2)
0x7c4: GOTO 0x7c9

0x7c5: Push("voice_common") // @poff=282
0x7c6: Push((int) 0)
0x7c7: @ SetVariable(Stack[-2], Stack[-1])
0x7c8: Pop(2)
0x7c9: GOTO 0x7dc

0x7ca: PushEmpty(bool, object)
0x7cb: Stack[-7] = Stack[-1]
0x7cc: Call2 0x803

0x7cd: Pop(1)
0x7ce: Pop(1); Push((bool) Stack[-1] == 0)
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d0: PushEmpty(bool, object)
0x7d1: Stack[-7] = Stack[-1]
0x7d2: Call2 0x7de

0x7d3: Pop(1)
0x7d4: Pop(1); Push((bool) Stack[-1] == 0)
0x7d5: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d6: Stack[-6] = (bool) 0
0x7d7: Return(); Pop(4)

0x7d8: Push("voice_common") // @poff=282
0x7d9: Push((int) 1)
0x7da: @ SetVariable(Stack[-2], Stack[-1])
0x7db: Pop(2)
0x7dc: Stack[-6] = (bool) 1
0x7dd: Return(); Pop(4)

0x7de: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7df: Stack[-5] = "c" // @poff=308
0x7e0: Stack[-4] = (int) 0
0x7e1: Push((int) 1)
0x7e2: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7e3: Push((int) 1)
0x7e4: Pop(1); Push(Stack[-5] + Stack[-1]);
0x7e5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7e6: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=312
0x7e7: Pop(1)
0x7e8: Pop(0); Push((bool) Stack[-3] == 0)
0x7e9: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7ea: GOTO 0x7ee

0x7eb: Push((int) 1)
0x7ec: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x7ed: GOTO 0x7e1

0x7ee: Pop(0); Push((bool) Stack[-4] == 0)
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7f0: Stack[-12] = (bool) 0
0x7f1: Return(); Pop(10)

0x7f2: Stack[-2] = (int) 0
0x7f3: Push((int) 1)
0x7f4: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x7f5: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f6: @ irand(Stack[-2], Stack[-4])
0x7f7: Pop(0)
0x7f8: Push((int) 1)
0x7f9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7fa: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7fb: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=234
0x7fc: Pop(1)
0x7fd: PushEmpty(bool, string)
0x7fe: Stack[-3] = Stack[-1]
0x7ff: Call2 0x83b

0x800: Stack[-2] = Stack[-14]
0x801: Pop(2)
0x802: Return(); Pop(10)

0x803: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x804: Push("d") // @poff=278
0x805: PushEmpty(int)
0x806: Call2 0x885

0x807: Pop(0)
0x808: Pop(2); Push(Stack[-2] + Stack[-1]);
0x809: Push("m") // @poff=184
0x80a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x80b: Stack[-4] = (int) 0
0x80c: Push((int) 1)
0x80d: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x80e: Push((int) 1)
0x80f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x810: Pop(1); Push(Stack[-6] + Stack[-1]);
0x811: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=312
0x812: Pop(1)
0x813: Pop(0); Push((bool) Stack[-3] == 0)
0x814: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x815: GOTO 0x819

0x816: Push((int) 1)
0x817: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x818: GOTO 0x80c

0x819: Pop(0); Push((bool) Stack[-4] == 0)
0x81a: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x81b: Stack[-12] = (bool) 0
0x81c: Return(); Pop(10)

0x81d: Stack[-2] = (int) 0
0x81e: Push((int) 1)
0x81f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x820: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x821: @ irand(Stack[-2], Stack[-4])
0x822: Pop(0)
0x823: Push((int) 1)
0x824: Pop(1); Push(Stack[-3] + Stack[-1]);
0x825: Pop(1); Push(Stack[-6] + Stack[-1]);
0x826: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=234
0x827: Pop(1)
0x828: PushEmpty(bool, string)
0x829: Stack[-3] = Stack[-1]
0x82a: Call2 0x83b

0x82b: Stack[-2] = Stack[-14]
0x82c: Pop(2)
0x82d: Return(); Pop(10)

0x82e: PushEmpty(float, float, float, float)
0x82f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x830: Pop(0)
0x831: Push((bool) 0)
0x832: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x833: Pop(1)
0x834: Return(); Pop(4)

0x835: PushEmpty(float, float, float, float)
0x836: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x837: Pop(0)
0x838: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x839: Pop(0)
0x83a: Return(); Pop(4)

0x83b: PushEmpty(bool, bool)
0x83c: PushEmpty(bool)
0x83d: Call2 0x8b4

0x83e: Pop(0)
0x83f: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x840: @ lshHasSpeech(Stack[-1], Stack[-3])
0x841: Pop(0)
0x842: Push(Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x844: @ lshPlaySpeech(Stack[-3])
0x845: Pop(0)
0x846: Stack[-4] = (bool) 1
0x847: Return(); Pop(2)

0x848: Stack[-4] = (bool) 0
0x849: Return(); Pop(2)

0x84a: PushEmpty(bool)
0x84b: Call2 0x8b4

0x84c: Pop(0)
0x84d: IF (Stack[-1] == 0) GOTO 0x850; Pop(1)

0x84e: @ lshStopSpeech()
0x84f: Pop(0)
0x850: Return(); Pop(0)

0x851: PushEmpty(object, object)
0x852: @ self(Stack[-1])
0x853: Pop(0)
0x854: Stack[-1] = Stack[-3]
0x855: Return(); Pop(2)

0x856: Stack[-1] = 0
0x857: PushEmpty(float, float)
0x858: Pop(0); Push(Stack[-3] | Stack[-3]);
0x859: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x85a: Push((float)9.999999974752427e-07)
0x85b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x85c: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85d: Stack[-4] = [0.0, 0.0, 0.0]
0x85e: Return(); Pop(2)

0x85f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x860: Return(); Pop(2)

0x861: PushEmpty(int, int)
0x862: @ GetVariable(Stack[-3], Stack[-1])
0x863: Pop(0)
0x864: Stack[-1] = Stack[-4]
0x865: Return(); Pop(2)

0x866: PushEmpty(object, object)
0x867: @ CreateIntVector(Stack[-1])
0x868: Pop(0)
0x869: @@ add(Stack[-4]); Obj=1 // @poff=324
0x86a: Pop(0)
0x86b: @@ add(Stack[-3]); Obj=1 // @poff=324
0x86c: Pop(0)
0x86d: Push((int) 3)
0x86e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x86f: Pop(1)
0x870: Return(); Pop(2)

0x871: Stack[-1] = 0
0x872: PushEmpty(int, int)
0x873: PushEmpty(object, string, int)
0x874: Stack[-7] = Stack[-3]
0x875: Stack[-2] = "money" // @poff=328
0x876: Stack[-6] = Stack[-1]
0x877: Call2 0x730

0x878: Pop(3)
0x879: Push((int) 0)
0x87a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x87b: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x87c: Push("Money") // @poff=340
0x87d: @ GetInvItemByName(Stack[-2], Stack[-1])
0x87e: Pop(1)
0x87f: PushEmpty(int, int)
0x880: Stack[-3] = Stack[-2]
0x881: Stack[-5] = Stack[-1]
0x882: Call2 0x866

0x883: Pop(2)
0x884: Return(); Pop(2)

0x885: PushEmpty(float, float)
0x886: @ GetGameTime(Stack[-1])
0x887: Pop(0)
0x888: Push((int) 1)
0x889: PushEmpty(int)
0x88a: Push((int) 24)
0x88b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x88c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x88d: Return(); Pop(2)

0x88e: PushEmpty()
0x88f: PushEmpty(int)
0x890: Call2 0x885

0x891: Pop(0)
0x892: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x893: Return(); Pop(0)

0x894: PushEmpty(string, string)
0x895: Stack[-1] = "idle" // @poff=146
0x896: Push(Stack[-3])
0x897: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x898: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x899: Stack[-1] = Stack[-4]
0x89a: Return(); Pop(2)

0x89b: PushEmpty(int, bool, int, bool)
0x89c: Stack[-2] = (int) 0
0x89d: Push("all") // @poff=138
0x89e: PushEmpty(string, int)
0x89f: Stack[-5] = Stack[-1]
0x8a0: Call2 0x894

0x8a1: Pop(1)
0x8a2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8a3: Pop(2)
0x8a4: Pop(0); Push((bool) Stack[-1] == 0)
0x8a5: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x8a6: GOTO 0x8aa

0x8a7: Push((int) 1)
0x8a8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8a9: GOTO 0x89d

0x8aa: Stack[-2] = Stack[-5]
0x8ab: Return(); Pop(4)

0x8ac: Stack[-1] = (int) 515530
0x8ad: Return(); Pop(0)

0x8ae: Stack[-1] = (int) 502856
0x8af: Return(); Pop(0)

0x8b0: Stack[-1] = "ui/NPC_Anna.png" // @poff=352
0x8b1: Return(); Pop(0)

0x8b2: Stack[-1] = "ui/NPC_Anna_b.png" // @poff=384
0x8b3: Return(); Pop(0)

0x8b4: Stack[-1] = (bool) 1
0x8b5: Return(); Pop(0)

0x8b6: PushEmpty()
0x8b7: Push("b5q01_1") // @poff=420
0x8b8: Push((int) 1)
0x8b9: @ SetVariable(Stack[-2], Stack[-1])
0x8ba: Pop(2)
0x8bb: Return(); Pop(0)

0x8bc: PushEmpty()
0x8bd: Push("b5q01_1") // @poff=420
0x8be: Push((int) 1000)
0x8bf: @ SetVariable(Stack[-2], Stack[-1])
0x8c0: Pop(2)
0x8c1: Return(); Pop(0)

0x8c2: PushEmpty()
0x8c3: Push("money10000 is given") // @poff=436
0x8c4: @ Trace(Stack[-1])
0x8c5: Pop(1)
0x8c6: PushEmpty(object, int)
0x8c7: Stack[-4] = Stack[-2]
0x8c8: Stack[-1] = (int) 10000
0x8c9: Call2 0x872

0x8ca: Pop(2)
0x8cb: Return(); Pop(0)

0x8cc: PushEmpty()
0x8cd: Push("playsound") // @poff=476
0x8ce: Push("givemoney") // @poff=496
0x8cf: @ TriggerWorld(Stack[-2], Stack[-1])
0x8d0: Pop(2)
0x8d1: Return(); Pop(0)

0x8d2: PushEmpty()
0x8d3: Push("oob6Anna1") // @poff=516
0x8d4: Push((int) 1)
0x8d5: @ SetVariable(Stack[-2], Stack[-1])
0x8d6: Pop(2)
0x8d7: Return(); Pop(0)

0x8d8: PushEmpty()
0x8d9: Push("money3000 is given") // @poff=536
0x8da: @ Trace(Stack[-1])
0x8db: Pop(1)
0x8dc: PushEmpty(object, int)
0x8dd: Stack[-4] = Stack[-2]
0x8de: Stack[-1] = (int) 3000
0x8df: Call2 0x872

0x8e0: Pop(2)
0x8e1: Return(); Pop(0)

0x8e2: PushEmpty()
0x8e3: PushEmpty(int, string)
0x8e4: Stack[-1] = "oob6Anna1" // @poff=516
0x8e5: Call2 0x861

0x8e6: Pop(1)
0x8e7: Push((int) 0)
0x8e8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8e9: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8ea: Stack[-2] = (bool) 1
0x8eb: Return(); Pop(0)

0x8ec: Stack[-2] = (bool) 0
0x8ed: Return(); Pop(0)

0x8ee: PushEmpty()
0x8ef: PushEmpty(int, string)
0x8f0: Stack[-1] = "b5q01TalkToVera" // @poff=574
0x8f1: Call2 0x861

0x8f2: Pop(1)
0x8f3: Push((int) 1)
0x8f4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8f5: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8f6: Stack[-2] = (bool) 1
0x8f7: Return(); Pop(0)

0x8f8: Stack[-2] = (bool) 0
0x8f9: Return(); Pop(0)

0x8fa: PushEmpty()
0x8fb: PushEmpty(int, string)
0x8fc: Stack[-1] = "b5q01VeraDead" // @poff=606
0x8fd: Call2 0x861

0x8fe: Pop(1)
0x8ff: Push((int) 0)
0x900: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x901: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x902: Stack[-2] = (bool) 1
0x903: Return(); Pop(0)

0x904: Stack[-2] = (bool) 0
0x905: Return(); Pop(0)

0x906: PushEmpty()
0x907: PushEmpty(int, string)
0x908: Stack[-1] = "b5q01_1" // @poff=420
0x909: Call2 0x861

0x90a: Pop(1)
0x90b: Push((int) 0)
0x90c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x90d: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x90e: Stack[-2] = (bool) 1
0x90f: Return(); Pop(0)

0x910: Stack[-2] = (bool) 0
0x911: Return(); Pop(0)

0x912: PushEmpty()
0x913: PushEmpty(int, string)
0x914: Stack[-1] = "b5q01_1" // @poff=420
0x915: Call2 0x861

0x916: Pop(1)
0x917: Push((int) 1)
0x918: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x919: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x91a: Stack[-2] = (bool) 1
0x91b: Return(); Pop(0)

0x91c: Stack[-2] = (bool) 0
0x91d: Return(); Pop(0)

0x91e: PushEmpty(int, int)
0x91f: Push("branch") // @poff=634
0x920: @ GetVariable(Stack[-1], Stack[-2])
0x921: Pop(1)
0x922: Push((int) 0)
0x923: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x924: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x925: Stack[-3] = (int) 1
0x926: Return(); Pop(2)

0x927: GOTO 0x92d

0x928: Push((int) 1)
0x929: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x92a: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x92b: Stack[-3] = (int) 2
0x92c: Return(); Pop(2)

0x92d: Stack[-3] = (int) 3
0x92e: Return(); Pop(2)

0x92f: PushEmpty()
0x930: Push(GlobalVars[1])
0x931: Pop(1); Push((bool) Stack[-1] == 0)
0x932: IF (Stack[-1] == 0) GOTO 0x93c; Pop(1)

0x933: PushEmpty(int, object)
0x934: Stack[-3] = Stack[-1]
0x935: Push(-2, 1); TaskCall(5)
0x936: Call2 0x249

0x937: Pop(-2, 1); TaskReturn
0x938: Pop(2)
0x939: Push(GlobalVars[1])
0x93a: Stack[-1] = (bool) 1
0x93b: GlobalVars[1] = Stack[-1]; Pop(1)
0x93c: PushEmpty(bool, int)
0x93d: Stack[-1] = (int) 5
0x93e: Call2 0x88e

0x93f: Pop(1)
0x940: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x941: PushEmpty(int, object)
0x942: Stack[-3] = Stack[-1]
0x943: Push(-2, 1); TaskCall(7)
0x944: Call2 0x32b

0x945: Pop(-2, 1); TaskReturn
0x946: Pop(2)
0x947: Return(); Pop(0)

0x948: PushEmpty(bool, int)
0x949: Stack[-1] = (int) 6
0x94a: Call2 0x88e

0x94b: Pop(1)
0x94c: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x94d: PushEmpty(int, object)
0x94e: Stack[-3] = Stack[-1]
0x94f: Push(-2, 1); TaskCall(1)
0x950: Call2 0xd

0x951: Pop(-2, 1); TaskReturn
0x952: Pop(2)
0x953: Return(); Pop(0)

0x954: PushEmpty(bool)
0x955: Stack[-1] = (bool) 0
0x956: PushEmpty(bool, int)
0x957: Stack[-1] = (int) 12
0x958: Call2 0x88e

0x959: Pop(1)
0x95a: IF (Stack[-1] == 0) GOTO 0x95f; Pop(1)

0x95b: Push(GlobalVars[2])
0x95c: Pop(1); Push((bool) Stack[-1] == 0)
0x95d: IF (Stack[-1] == 0) GOTO 0x95f; Pop(1)

0x95e: Stack[-1] = (bool) 1
0x95f: IF (Stack[-1] == 0) GOTO 0x96a; Pop(1)

0x960: PushEmpty(int, object)
0x961: Stack[-3] = Stack[-1]
0x962: Push(-2, 1); TaskCall(3)
0x963: Call2 0x146

0x964: Pop(-2, 1); TaskReturn
0x965: Pop(2)
0x966: Push(GlobalVars[2])
0x967: Stack[-1] = (bool) 1
0x968: GlobalVars[2] = Stack[-1]; Pop(1)
0x969: Return(); Pop(0)

0x96a: PushEmpty(int, object)
0x96b: Stack[-3] = Stack[-1]
0x96c: Push(-2, 1); TaskCall(9)
0x96d: Call2 0x554

0x96e: Pop(-2, 1); TaskReturn
0x96f: Pop(2)
0x970: Return(); Pop(0)

