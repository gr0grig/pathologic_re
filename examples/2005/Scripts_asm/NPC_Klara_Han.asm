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
	W:ui/NPC_Han.png
	W:ui/NPC_Han_b.png
	W:k9q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f00480061006e002e0070006e0067000000750069002f004e00500043005f00480061006e005f0062002e0070006e00670000006b0039007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x413
RunTask = 9

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x220 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2eb Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3e9 Vars = (int, int)
	GTASK_9 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x465 Vars = (int)
		EVENT_6 Op = 0x48b Vars = ()
		EVENT_5 Op = 0x49a Vars = ()
		EVENT_45 Op = 0x4a7 Vars = (bool)
		EVENT_0 Op = 0x4b3 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x537

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
0x11: Call2 0x63e

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x591

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x53c

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x67c

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x67a

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x67e

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x680

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x6cf

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
0x55: Call2 0x580

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
0x68: Push((int) 526521)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x68d

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 526522)
0x73: Push((int) 27789)
0x74: Push((int) 27788)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 526525)
0x78: Push((int) -1)
0x79: Push((int) 27791)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0x682

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x61b

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
0x9f: Call2 0x682

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
0xaf: Call2 0x622

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x637

0xb8: Pop(0)
0xb9: Push((int) 30413)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x684

0xc0: Pop(2)
0xc1: Push((int) 27787)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral" // @poff=89
0xc6: Call2 0x9d

0xc7: Pop(1)
0xc8: Push((int) 526521)
0xc9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xca: Pop(1)
0xcb: @@@ ClearReplies(); Obj=0 // @poff=116
0xcc: Pop(0)
0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0x68d

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd2: Push((int) 526522)
0xd3: Push((int) 27789)
0xd4: Push((int) 27788)
0xd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd6: Pop(3)
0xd7: Push((int) 526525)
0xd8: Push((int) -1)
0xd9: Push((int) 27791)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Return(); Pop(0)

0xdd: Push((int) 27789)
0xde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral" // @poff=89
0xe2: Call2 0x9d

0xe3: Pop(1)
0xe4: Push((int) 526523)
0xe5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe6: Pop(1)
0xe7: @@@ ClearReplies(); Obj=0 // @poff=116
0xe8: Pop(0)
0xe9: Push((int) 526524)
0xea: Push((int) 30396)
0xeb: Push((int) 27790)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: Push((int) 528967)
0xef: Push((int) 30396)
0xf0: Push((int) 30402)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: Push((int) 30396)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral" // @poff=89
0xf9: Call2 0x9d

0xfa: Pop(1)
0xfb: Push((int) 528961)
0xfc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfd: Pop(1)
0xfe: @@@ ClearReplies(); Obj=0 // @poff=116
0xff: Pop(0)
0x100: Push((int) 528962)
0x101: Push((int) 30398)
0x102: Push((int) 30397)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 30398)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral" // @poff=89
0x10b: Call2 0x9d

0x10c: Pop(1)
0x10d: Push((int) 528963)
0x10e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10f: Pop(1)
0x110: @@@ ClearReplies(); Obj=0 // @poff=116
0x111: Pop(0)
0x112: Push((int) 528964)
0x113: Push((int) 30400)
0x114: Push((int) 30399)
0x115: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 30400)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral" // @poff=89
0x11d: Call2 0x9d

0x11e: Pop(1)
0x11f: Push((int) 528965)
0x120: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x121: Pop(1)
0x122: @@@ ClearReplies(); Obj=0 // @poff=116
0x123: Pop(0)
0x124: Push((int) 528968)
0x125: Push((int) 30405)
0x126: Push((int) 30404)
0x127: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 30405)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Neutral" // @poff=89
0x12f: Call2 0x9d

0x130: Pop(1)
0x131: Push((int) 528969)
0x132: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x133: Pop(1)
0x134: @@@ ClearReplies(); Obj=0 // @poff=116
0x135: Pop(0)
0x136: Push((int) 528970)
0x137: Push((int) 30407)
0x138: Push((int) 30406)
0x139: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 30407)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral" // @poff=89
0x141: Call2 0x9d

0x142: Pop(1)
0x143: Push((int) 528971)
0x144: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x145: Pop(1)
0x146: @@@ ClearReplies(); Obj=0 // @poff=116
0x147: Pop(0)
0x148: Push((int) 528966)
0x149: Push((int) 30411)
0x14a: Push((int) 30401)
0x14b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14c: Pop(3)
0x14d: Push((int) 528972)
0x14e: Push((int) 30409)
0x14f: Push((int) 30408)
0x150: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 30409)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral" // @poff=89
0x158: Call2 0x9d

0x159: Pop(1)
0x15a: Push((int) 528973)
0x15b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x15c: Pop(1)
0x15d: @@@ ClearReplies(); Obj=0 // @poff=116
0x15e: Pop(0)
0x15f: Push((int) 528974)
0x160: Push((int) 30411)
0x161: Push((int) 30410)
0x162: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 30411)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Neutral" // @poff=89
0x16a: Call2 0x9d

0x16b: Pop(1)
0x16c: Push((int) 528975)
0x16d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16e: Pop(1)
0x16f: @@@ ClearReplies(); Obj=0 // @poff=116
0x170: Pop(0)
0x171: Push((int) 528976)
0x172: Push((int) -1)
0x173: Push((int) 30413)
0x174: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x178: PushEmpty(bool)
0x179: Call2 0x682

0x17a: Pop(0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17c: @ lshStopAnimation()
0x17d: Pop(0)
0x17e: GOTO 0x181

0x17f: @ StopAnimation()
0x180: Pop(0)
0x181: Return(); Pop(0)

0x182: GOTO 0xb4

0x183: Return(); Pop(0)

0x184: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x185: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x186: PushEmpty(bool, object)
0x187: PushEmpty(object)
0x188: Call2 0x63e

0x189: Stack[-1] = Stack[-2]
0x18a: Pop(1)
0x18b: Call2 0x591

0x18c: Pop(2)
0x18d: PushEmpty(bool, object, float)
0x18e: Stack[-12] = Stack[-2]
0x18f: Stack[-1] = (float) 70.0
0x190: Call2 0x53c

0x191: Pop(2)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x194: Stack[-10] = (int) -2
0x195: Return(); Pop(8)

0x196: @ CreateDialog(Stack[-4])
0x197: Pop(0)
0x198: PushEmpty(int)
0x199: Call2 0x67c

0x19a: Pop(0)
0x19b: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x19c: Pop(1)
0x19d: PushEmpty(int)
0x19e: Call2 0x67a

0x19f: Pop(0)
0x1a0: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1a1: Pop(1)
0x1a2: PushEmpty(string)
0x1a3: Call2 0x67e

0x1a4: Pop(0)
0x1a5: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1a6: Pop(1)
0x1a7: PushEmpty(string)
0x1a8: Call2 0x680

0x1a9: Pop(0)
0x1aa: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x1ab: Pop(1)
0x1ac: PushEmpty(int)
0x1ad: Call2 0x6cf

0x1ae: Pop(0)
0x1af: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x1b0: Pop(1)
0x1b1: Stack[-2] = (int) -1
0x1b2: @ IsOverrideActive(Stack[-3])
0x1b3: Pop(0)
0x1b4: Push(Stack[-3])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b6: Stack[-10] = (int) -2
0x1b7: Return(); Pop(8)

0x1b8: @ DoDialog(Stack[-4])
0x1b9: Pop(0)
0x1ba: PushEmpty(object, object)
0x1bb: Stack[-11] = Stack[-2]
0x1bc: Stack[-6] = Stack[-1]
0x1bd: Push(-2, 4); TaskCall(4)
0x1be: Call2 0x1d5

0x1bf: Pop(-2, 4); TaskReturn
0x1c0: Pop(2)
0x1c1: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x1c2: Pop(0)
0x1c3: Pop(0); Push((bool) Stack[-1] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c5: @ sync()
0x1c6: Pop(0)
0x1c7: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x1c8: Pop(0)
0x1c9: GOTO 0x1c3

0x1ca: PushEmpty(object)
0x1cb: Stack[-10] = Stack[-1]
0x1cc: Call2 0x580

0x1cd: Pop(1)
0x1ce: @ StopDialog(Stack[-4])
0x1cf: Pop(0)
0x1d0: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x1d1: Pop(0)
0x1d2: Stack[-2] = Stack[-10]
0x1d3: Return(); Pop(8)

0x1d4: Stack[-4] = 0
0x1d5: PushEmpty()
0x1d6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1d7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1d8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1d9: Push((int) 1)
0x1da: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1db: PushEmpty(string)
0x1dc: Stack[-1] = "Neutral" // @poff=89
0x1dd: Call2 0x20a

0x1de: Pop(1)
0x1df: Push((int) 529675)
0x1e0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e1: Pop(1)
0x1e2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e3: Pop(0)
0x1e4: Push((int) 529676)
0x1e5: Push((int) -1)
0x1e6: Push((int) 31139)
0x1e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e8: Pop(3)
0x1e9: GOTO 0x1ec

0x1ea: Return(); Pop(0)

0x1eb: GOTO 0x1d9

0x1ec: PushEmpty(bool)
0x1ed: Call2 0x682

0x1ee: Pop(0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f0: @ lshWaitForAnimEnd()
0x1f1: Pop(0)
0x1f2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f4: GOTO 0x1fa

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1f7: Call2 0x61b

0x1f8: Pop(1)
0x1f9: GOTO 0x1f0

0x1fa: GOTO 0x209

0x1fb: Push("all") // @poff=138
0x1fc: Push("idle") // @poff=146
0x1fd: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fe: Pop(2)
0x1ff: @ WaitForAnimEnd()
0x200: Pop(0)
0x201: Push( Stack[3 + Tasks[-1].StackPointer] )
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: GOTO 0x209

0x204: Push("all") // @poff=138
0x205: Push("idle") // @poff=146
0x206: @ PlayAnimation(Stack[-2], Stack[-1])
0x207: Pop(2)
0x208: GOTO 0x1ff

0x209: Return(); Pop(0)

0x20a: PushEmpty()
0x20b: PushEmpty(bool)
0x20c: Call2 0x682

0x20d: Pop(0)
0x20e: Pop(1); Push((bool) Stack[-1] == 0)
0x20f: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x210: Return(); Pop(0)

0x211: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x212: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x213: Return(); Pop(0)

0x214: PushEmpty(string, bool)
0x215: Stack[-3] = Stack[-2]
0x216: Push("") // @poff=102
0x217: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x219: Stack[-1] = (bool) 0
0x21a: GOTO 0x21c

0x21b: Stack[-1] = (bool) 1
0x21c: Call2 0x622

0x21d: Pop(2)
0x21e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x21f: Return(); Pop(0)

0x220: PushEmpty()
0x221: Push((int) 1)
0x222: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x223: PushEmpty()
0x224: Call2 0x637

0x225: Pop(0)
0x226: Push((int) 31138)
0x227: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x229: PushEmpty(string)
0x22a: Stack[-1] = "Neutral" // @poff=89
0x22b: Call2 0x20a

0x22c: Pop(1)
0x22d: Push((int) 529675)
0x22e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22f: Pop(1)
0x230: @@@ ClearReplies(); Obj=0 // @poff=116
0x231: Pop(0)
0x232: Push((int) 529676)
0x233: Push((int) -1)
0x234: Push((int) 31139)
0x235: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x239: PushEmpty(bool)
0x23a: Call2 0x682

0x23b: Pop(0)
0x23c: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23d: @ lshStopAnimation()
0x23e: Pop(0)
0x23f: GOTO 0x242

0x240: @ StopAnimation()
0x241: Pop(0)
0x242: Return(); Pop(0)

0x243: GOTO 0x221

0x244: Return(); Pop(0)

0x245: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x246: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x247: PushEmpty(bool, object)
0x248: PushEmpty(object)
0x249: Call2 0x63e

0x24a: Stack[-1] = Stack[-2]
0x24b: Pop(1)
0x24c: Call2 0x591

0x24d: Pop(2)
0x24e: PushEmpty(bool, object, float)
0x24f: Stack[-12] = Stack[-2]
0x250: Stack[-1] = (float) 70.0
0x251: Call2 0x53c

0x252: Pop(2)
0x253: Pop(1); Push((bool) Stack[-1] == 0)
0x254: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x255: Stack[-10] = (int) -2
0x256: Return(); Pop(8)

0x257: @ CreateDialog(Stack[-4])
0x258: Pop(0)
0x259: PushEmpty(int)
0x25a: Call2 0x67c

0x25b: Pop(0)
0x25c: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25d: Pop(1)
0x25e: PushEmpty(int)
0x25f: Call2 0x67a

0x260: Pop(0)
0x261: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x262: Pop(1)
0x263: PushEmpty(string)
0x264: Call2 0x67e

0x265: Pop(0)
0x266: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x267: Pop(1)
0x268: PushEmpty(string)
0x269: Call2 0x680

0x26a: Pop(0)
0x26b: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x26c: Pop(1)
0x26d: PushEmpty(int)
0x26e: Call2 0x6cf

0x26f: Pop(0)
0x270: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x271: Pop(1)
0x272: Stack[-2] = (int) -1
0x273: @ IsOverrideActive(Stack[-3])
0x274: Pop(0)
0x275: Push(Stack[-3])
0x276: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x277: Stack[-10] = (int) -2
0x278: Return(); Pop(8)

0x279: @ DoDialog(Stack[-4])
0x27a: Pop(0)
0x27b: PushEmpty(object, object)
0x27c: Stack[-11] = Stack[-2]
0x27d: Stack[-6] = Stack[-1]
0x27e: Push(-2, 4); TaskCall(6)
0x27f: Call2 0x296

0x280: Pop(-2, 4); TaskReturn
0x281: Pop(2)
0x282: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x283: Pop(0)
0x284: Pop(0); Push((bool) Stack[-1] == 0)
0x285: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x286: @ sync()
0x287: Pop(0)
0x288: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x289: Pop(0)
0x28a: GOTO 0x284

0x28b: PushEmpty(object)
0x28c: Stack[-10] = Stack[-1]
0x28d: Call2 0x580

0x28e: Pop(1)
0x28f: @ StopDialog(Stack[-4])
0x290: Pop(0)
0x291: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x292: Pop(0)
0x293: Stack[-2] = Stack[-10]
0x294: Return(); Pop(8)

0x295: Stack[-4] = 0
0x296: PushEmpty()
0x297: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x298: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x299: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x29a: Push((int) 1)
0x29b: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x29c: PushEmpty(string)
0x29d: Stack[-1] = "Neutral" // @poff=89
0x29e: Call2 0x2d5

0x29f: Pop(1)
0x2a0: Push((int) 535284)
0x2a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a2: Pop(1)
0x2a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a4: Pop(0)
0x2a5: Push((int) 535285)
0x2a6: Push((int) 36962)
0x2a7: Push((int) 36961)
0x2a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a9: Pop(3)
0x2aa: Push((int) 535292)
0x2ab: Push((int) -1)
0x2ac: Push((int) 36968)
0x2ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ae: Pop(3)
0x2af: Push((int) 535293)
0x2b0: Push((int) -1)
0x2b1: Push((int) 36969)
0x2b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b3: Pop(3)
0x2b4: GOTO 0x2b7

0x2b5: Return(); Pop(0)

0x2b6: GOTO 0x29a

0x2b7: PushEmpty(bool)
0x2b8: Call2 0x682

0x2b9: Pop(0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2bb: @ lshWaitForAnimEnd()
0x2bc: Pop(0)
0x2bd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: GOTO 0x2c5

0x2c0: PushEmpty(string)
0x2c1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2c2: Call2 0x61b

0x2c3: Pop(1)
0x2c4: GOTO 0x2bb

0x2c5: GOTO 0x2d4

0x2c6: Push("all") // @poff=138
0x2c7: Push("idle") // @poff=146
0x2c8: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c9: Pop(2)
0x2ca: @ WaitForAnimEnd()
0x2cb: Pop(0)
0x2cc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: GOTO 0x2d4

0x2cf: Push("all") // @poff=138
0x2d0: Push("idle") // @poff=146
0x2d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d2: Pop(2)
0x2d3: GOTO 0x2ca

0x2d4: Return(); Pop(0)

0x2d5: PushEmpty()
0x2d6: PushEmpty(bool)
0x2d7: Call2 0x682

0x2d8: Pop(0)
0x2d9: Pop(1); Push((bool) Stack[-1] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: Return(); Pop(0)

0x2dc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2de: Return(); Pop(0)

0x2df: PushEmpty(string, bool)
0x2e0: Stack[-3] = Stack[-2]
0x2e1: Push("") // @poff=102
0x2e2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e4: Stack[-1] = (bool) 0
0x2e5: GOTO 0x2e7

0x2e6: Stack[-1] = (bool) 1
0x2e7: Call2 0x622

0x2e8: Pop(2)
0x2e9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2ea: Return(); Pop(0)

0x2eb: PushEmpty()
0x2ec: Push((int) 1)
0x2ed: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x2ee: PushEmpty()
0x2ef: Call2 0x637

0x2f0: Pop(0)
0x2f1: Push((int) 36960)
0x2f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x2f4: PushEmpty(string)
0x2f5: Stack[-1] = "Neutral" // @poff=89
0x2f6: Call2 0x2d5

0x2f7: Pop(1)
0x2f8: Push((int) 535284)
0x2f9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2fa: Pop(1)
0x2fb: @@@ ClearReplies(); Obj=0 // @poff=116
0x2fc: Pop(0)
0x2fd: Push((int) 535285)
0x2fe: Push((int) 36962)
0x2ff: Push((int) 36961)
0x300: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x301: Pop(3)
0x302: Push((int) 535292)
0x303: Push((int) -1)
0x304: Push((int) 36968)
0x305: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x306: Pop(3)
0x307: Push((int) 535293)
0x308: Push((int) -1)
0x309: Push((int) 36969)
0x30a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x30b: Pop(3)
0x30c: Return(); Pop(0)

0x30d: Push((int) 36962)
0x30e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x310: PushEmpty(string)
0x311: Stack[-1] = "Neutral" // @poff=89
0x312: Call2 0x2d5

0x313: Pop(1)
0x314: Push((int) 535286)
0x315: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x316: Pop(1)
0x317: @@@ ClearReplies(); Obj=0 // @poff=116
0x318: Pop(0)
0x319: Push((int) 535287)
0x31a: Push((int) 36964)
0x31b: Push((int) 36963)
0x31c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31d: Pop(3)
0x31e: Push((int) 535291)
0x31f: Push((int) -1)
0x320: Push((int) 36967)
0x321: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x322: Pop(3)
0x323: Return(); Pop(0)

0x324: Push((int) 36964)
0x325: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x327: PushEmpty(string)
0x328: Stack[-1] = "Neutral" // @poff=89
0x329: Call2 0x2d5

0x32a: Pop(1)
0x32b: Push((int) 535288)
0x32c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x32d: Pop(1)
0x32e: @@@ ClearReplies(); Obj=0 // @poff=116
0x32f: Pop(0)
0x330: Push((int) 535289)
0x331: Push((int) -1)
0x332: Push((int) 36965)
0x333: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x334: Pop(3)
0x335: Push((int) 535290)
0x336: Push((int) -1)
0x337: Push((int) 36966)
0x338: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x339: Pop(3)
0x33a: Return(); Pop(0)

0x33b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x33c: PushEmpty(bool)
0x33d: Call2 0x682

0x33e: Pop(0)
0x33f: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x340: @ lshStopAnimation()
0x341: Pop(0)
0x342: GOTO 0x345

0x343: @ StopAnimation()
0x344: Pop(0)
0x345: Return(); Pop(0)

0x346: GOTO 0x2ec

0x347: Return(); Pop(0)

0x348: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x349: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x34a: PushEmpty(bool, object)
0x34b: PushEmpty(object)
0x34c: Call2 0x63e

0x34d: Stack[-1] = Stack[-2]
0x34e: Pop(1)
0x34f: Call2 0x591

0x350: Pop(2)
0x351: PushEmpty(bool, object, float)
0x352: Stack[-12] = Stack[-2]
0x353: Stack[-1] = (float) 70.0
0x354: Call2 0x53c

0x355: Pop(2)
0x356: Pop(1); Push((bool) Stack[-1] == 0)
0x357: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x358: Stack[-10] = (int) -2
0x359: Return(); Pop(8)

0x35a: @ CreateDialog(Stack[-4])
0x35b: Pop(0)
0x35c: PushEmpty(int)
0x35d: Call2 0x67c

0x35e: Pop(0)
0x35f: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x360: Pop(1)
0x361: PushEmpty(int)
0x362: Call2 0x67a

0x363: Pop(0)
0x364: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x365: Pop(1)
0x366: PushEmpty(string)
0x367: Call2 0x67e

0x368: Pop(0)
0x369: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x36a: Pop(1)
0x36b: PushEmpty(string)
0x36c: Call2 0x680

0x36d: Pop(0)
0x36e: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x36f: Pop(1)
0x370: PushEmpty(int)
0x371: Call2 0x6cf

0x372: Pop(0)
0x373: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x374: Pop(1)
0x375: Stack[-2] = (int) -1
0x376: @ IsOverrideActive(Stack[-3])
0x377: Pop(0)
0x378: Push(Stack[-3])
0x379: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37a: Stack[-10] = (int) -2
0x37b: Return(); Pop(8)

0x37c: @ DoDialog(Stack[-4])
0x37d: Pop(0)
0x37e: PushEmpty(object, object)
0x37f: Stack[-11] = Stack[-2]
0x380: Stack[-6] = Stack[-1]
0x381: Push(-2, 4); TaskCall(8)
0x382: Call2 0x399

0x383: Pop(-2, 4); TaskReturn
0x384: Pop(2)
0x385: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x386: Pop(0)
0x387: Pop(0); Push((bool) Stack[-1] == 0)
0x388: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x389: @ sync()
0x38a: Pop(0)
0x38b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x38c: Pop(0)
0x38d: GOTO 0x387

0x38e: PushEmpty(object)
0x38f: Stack[-10] = Stack[-1]
0x390: Call2 0x580

0x391: Pop(1)
0x392: @ StopDialog(Stack[-4])
0x393: Pop(0)
0x394: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x395: Pop(0)
0x396: Stack[-2] = Stack[-10]
0x397: Return(); Pop(8)

0x398: Stack[-4] = 0
0x399: PushEmpty()
0x39a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x39b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x39c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x39d: Push((int) 1)
0x39e: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x39f: PushEmpty(string)
0x3a0: Stack[-1] = "Neutral" // @poff=89
0x3a1: Call2 0x3d3

0x3a2: Pop(1)
0x3a3: Push((int) 540545)
0x3a4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3a5: Pop(1)
0x3a6: @@@ ClearReplies(); Obj=0 // @poff=116
0x3a7: Pop(0)
0x3a8: Push((int) 540546)
0x3a9: Push((int) -1)
0x3aa: Push((int) 42555)
0x3ab: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ac: Pop(3)
0x3ad: Push((int) 540798)
0x3ae: Push((int) -1)
0x3af: Push((int) 42847)
0x3b0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b1: Pop(3)
0x3b2: GOTO 0x3b5

0x3b3: Return(); Pop(0)

0x3b4: GOTO 0x39d

0x3b5: PushEmpty(bool)
0x3b6: Call2 0x682

0x3b7: Pop(0)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3b9: @ lshWaitForAnimEnd()
0x3ba: Pop(0)
0x3bb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: GOTO 0x3c3

0x3be: PushEmpty(string)
0x3bf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3c0: Call2 0x61b

0x3c1: Pop(1)
0x3c2: GOTO 0x3b9

0x3c3: GOTO 0x3d2

0x3c4: Push("all") // @poff=138
0x3c5: Push("idle") // @poff=146
0x3c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c7: Pop(2)
0x3c8: @ WaitForAnimEnd()
0x3c9: Pop(0)
0x3ca: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cc: GOTO 0x3d2

0x3cd: Push("all") // @poff=138
0x3ce: Push("idle") // @poff=146
0x3cf: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d0: Pop(2)
0x3d1: GOTO 0x3c8

0x3d2: Return(); Pop(0)

0x3d3: PushEmpty()
0x3d4: PushEmpty(bool)
0x3d5: Call2 0x682

0x3d6: Pop(0)
0x3d7: Pop(1); Push((bool) Stack[-1] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: Return(); Pop(0)

0x3da: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3db: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3dc: Return(); Pop(0)

0x3dd: PushEmpty(string, bool)
0x3de: Stack[-3] = Stack[-2]
0x3df: Push("") // @poff=102
0x3e0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e2: Stack[-1] = (bool) 0
0x3e3: GOTO 0x3e5

0x3e4: Stack[-1] = (bool) 1
0x3e5: Call2 0x622

0x3e6: Pop(2)
0x3e7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3e8: Return(); Pop(0)

0x3e9: PushEmpty()
0x3ea: Push((int) 1)
0x3eb: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x3ec: PushEmpty()
0x3ed: Call2 0x637

0x3ee: Pop(0)
0x3ef: Push((int) 42554)
0x3f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3f2: PushEmpty(string)
0x3f3: Stack[-1] = "Neutral" // @poff=89
0x3f4: Call2 0x3d3

0x3f5: Pop(1)
0x3f6: Push((int) 540545)
0x3f7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3f8: Pop(1)
0x3f9: @@@ ClearReplies(); Obj=0 // @poff=116
0x3fa: Pop(0)
0x3fb: Push((int) 540546)
0x3fc: Push((int) -1)
0x3fd: Push((int) 42555)
0x3fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ff: Pop(3)
0x400: Push((int) 540798)
0x401: Push((int) -1)
0x402: Push((int) 42847)
0x403: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x404: Pop(3)
0x405: Return(); Pop(0)

0x406: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x407: PushEmpty(bool)
0x408: Call2 0x682

0x409: Pop(0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40b: @ lshStopAnimation()
0x40c: Pop(0)
0x40d: GOTO 0x410

0x40e: @ StopAnimation()
0x40f: Pop(0)
0x410: Return(); Pop(0)

0x411: GOTO 0x3ea

0x412: Return(); Pop(0)

0x413: Push(GlobalVars[1])
0x414: Stack[-1] = (bool) 0
0x415: GlobalVars[1] = Stack[-1]; Pop(1)
0x416: PushEmpty()
0x417: Call2 0x41a

0x418: Pop(0)
0x419: Return(); Pop(0)

0x41a: PushEmpty(bool)
0x41b: Call2 0x537

0x41c: Pop(0)
0x41d: Pop(1); Push((bool) Stack[-1] == 0)
0x41e: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x41f: PushEmpty()
0x420: Push(-0, 0); TaskCall(0)
0x421: Call2 0x0

0x422: Pop(-0, 0); TaskReturn
0x423: Pop(0)
0x424: PushEmpty()
0x425: Call2 0x49a

0x426: Pop(0)
0x427: @ GetDirection(Stack[-0]T)
0x428: Pop(0)
0x429: PushEmpty()
0x42a: Call2 0x4d0

0x42b: Pop(0)
0x42c: GOTO 0x429

0x42d: Return(); Pop(0)

0x42e: PushEmpty(object, object)
0x42f: Push("player") // @poff=156
0x430: @ FindActor(Stack[-2], Stack[-1])
0x431: Pop(1)
0x432: Pop(0); Push((bool) Stack[-1] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: Stack[-3] = (bool) 0
0x435: Return(); Pop(2)

0x436: PushEmpty(bool, object)
0x437: Stack[-3] = Stack[-1]
0x438: Call2 0x52e

0x439: Stack[-2] = Stack[-5]
0x43a: Pop(2)
0x43b: Return(); Pop(2)

0x43c: Stack[-1] = 0
0x43d: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x43e: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x43f: @ RotateAsync(Stack[-2], Stack[-1])
0x440: Pop(2)
0x441: Return(); Pop(0)

0x442: PushEmpty(object, bool, object, bool)
0x443: Push("player") // @poff=156
0x444: @ FindActor(Stack[-3], Stack[-1])
0x445: Pop(1)
0x446: Pop(0); Push((bool) Stack[-2] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x448: Stack[-5] = (bool) 0
0x449: Return(); Pop(4)

0x44a: PushEmpty(float, object)
0x44b: Stack[-4] = Stack[-1]
0x44c: Call2 0x51c

0x44d: Pop(1)
0x44e: Push((float)90000.0)
0x44f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x451: Stack[-5] = (bool) 0
0x452: Return(); Pop(4)

0x453: @ CanSee(Stack[-1], Stack[-2])
0x454: Pop(0)
0x455: Stack[-1] = Stack[-5]
0x456: Return(); Pop(4)

0x457: Stack[-2] = 0
0x458: PushEmpty(float, float)
0x459: Push((int) 8)
0x45a: Push((int) 16)
0x45b: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x45c: Pop(2)
0x45d: Push((int) 10)
0x45e: @ SetTimer(Stack[-1], Stack[-2])
0x45f: Pop(1)
0x460: Return(); Pop(2)

0x461: Push((int) 10)
0x462: @ KillTimer(Stack[-1])
0x463: Pop(1)
0x464: Return(); Pop(0)

0x465: PushEmpty()
0x466: Push((int) 10)
0x467: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x469: PushEmpty()
0x46a: Call2 0x461

0x46b: Pop(0)
0x46c: PushEmpty(bool)
0x46d: Stack[-1] = (bool) 0
0x46e: PushEmpty(bool)
0x46f: Call2 0x537

0x470: Pop(0)
0x471: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x472: PushEmpty(bool)
0x473: Call2 0x442

0x474: Pop(0)
0x475: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x476: Stack[-1] = (bool) 1
0x477: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x478: PushEmpty(bool)
0x479: Call2 0x42e

0x47a: Pop(0)
0x47b: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47c: PushEmpty(bool, object)
0x47d: PushEmpty(object)
0x47e: Call2 0x63e

0x47f: Stack[-1] = Stack[-2]
0x480: Pop(1)
0x481: Call2 0x5cb

0x482: Pop(2)
0x483: GOTO 0x48a

0x484: PushEmpty()
0x485: Call2 0x43d

0x486: Pop(0)
0x487: PushEmpty()
0x488: Call2 0x458

0x489: Pop(0)
0x48a: Return(); Pop(0)

0x48b: PushEmpty()
0x48c: Call2 0x517

0x48d: Pop(0)
0x48e: PushEmpty()
0x48f: Call2 0x461

0x490: Pop(0)
0x491: @ lshStopSpeech()
0x492: Pop(0)
0x493: @ lshStopAnimation()
0x494: Pop(0)
0x495: @ StopAsync()
0x496: Pop(0)
0x497: @ Hold()
0x498: Pop(0)
0x499: Return(); Pop(0)

0x49a: @ StopGroup0()
0x49b: Pop(0)
0x49c: PushEmpty()
0x49d: Call2 0x461

0x49e: Pop(0)
0x49f: PushEmpty(string)
0x4a0: Stack[-1] = "Neutral" // @poff=89
0x4a1: Call2 0x61b

0x4a2: Pop(1)
0x4a3: PushEmpty()
0x4a4: Call2 0x458

0x4a5: Pop(0)
0x4a6: Return(); Pop(0)

0x4a7: PushEmpty()
0x4a8: Push(Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4aa: PushEmpty()
0x4ab: Call2 0x458

0x4ac: Pop(0)
0x4ad: GOTO 0x4b2

0x4ae: PushEmpty(string)
0x4af: Stack[-1] = "Neutral" // @poff=89
0x4b0: Call2 0x61b

0x4b1: Pop(1)
0x4b2: Return(); Pop(0)

0x4b3: PushEmpty(bool, bool)
0x4b4: @ IsOverrideActive(Stack[-1])
0x4b5: Pop(0)
0x4b6: Pop(0); Push((bool) Stack[-1] == 0)
0x4b7: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4b8: EventDisable(0)
0x4b9: PushEmpty()
0x4ba: Call2 0x517

0x4bb: Pop(0)
0x4bc: PushEmpty(bool, object)
0x4bd: Stack[-5] = Stack[-1]
0x4be: Call2 0x52e

0x4bf: Pop(2)
0x4c0: EventEnable(0)
0x4c1: PushEmpty(object)
0x4c2: Stack[-4] = Stack[-1]
0x4c3: Call2 0x6e0

0x4c4: Pop(1)
0x4c5: PushEmpty(string)
0x4c6: Stack[-1] = "Neutral" // @poff=89
0x4c7: Call2 0x61b

0x4c8: Pop(1)
0x4c9: PushEmpty()
0x4ca: Call2 0x461

0x4cb: Pop(0)
0x4cc: PushEmpty()
0x4cd: Call2 0x458

0x4ce: Pop(0)
0x4cf: Return(); Pop(2)

0x4d0: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x4d1: @ WaitForAnimEnd()
0x4d2: Pop(0)
0x4d3: PushEmpty(bool)
0x4d4: Call2 0x537

0x4d5: Pop(0)
0x4d6: Pop(1); Push((bool) Stack[-1] == 0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d8: Return(); Pop(12)

0x4d9: PushEmpty(int)
0x4da: Call2 0x669

0x4db: Stack[-1] = Stack[-7]
0x4dc: Pop(1)
0x4dd: Stack[-5] = (int) 0
0x4de: PushEmpty(bool)
0x4df: Stack[-1] = (bool) 0
0x4e0: Push((int) 5)
0x4e1: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e3: PushEmpty(bool)
0x4e4: Call2 0x537

0x4e5: Pop(0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: Stack[-1] = (bool) 1
0x4e8: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x4e9: Pop(0); Push((bool) Stack[-6] == 0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4eb: Push((int) 3)
0x4ec: @ Sleep(Stack[-1], Stack[-5])
0x4ed: Pop(1)
0x4ee: Pop(0); Push((bool) Stack[-4] == 0)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4f0: GOTO 0x512

0x4f1: GOTO 0x507

0x4f2: @ irand(Stack[-3], Stack[-6])
0x4f3: Pop(0)
0x4f4: Push((int) 5)
0x4f5: @ irand(Stack[-3], Stack[-1])
0x4f6: Pop(1)
0x4f7: Push((int) 0)
0x4f8: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4fa: Stack[-3] = (int) 0
0x4fb: Push("all") // @poff=138
0x4fc: PushEmpty(string, int)
0x4fd: Stack[-6] = Stack[-1]
0x4fe: Call2 0x662

0x4ff: Pop(1)
0x500: @ PlayAnimation(Stack[-2], Stack[-1])
0x501: Pop(2)
0x502: @ WaitForAnimEnd(Stack[-1])
0x503: Pop(0)
0x504: Pop(0); Push((bool) Stack[-1] == 0)
0x505: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x506: GOTO 0x512

0x507: PushEmpty(bool)
0x508: Call2 0x515

0x509: Pop(0)
0x50a: Pop(1); Push((bool) Stack[-1] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: GOTO 0x512

0x50d: @ ResetAAS()
0x50e: Pop(0)
0x50f: Push((int) 1)
0x510: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x511: GOTO 0x4de

0x512: @ ResetAAS()
0x513: Pop(0)
0x514: Return(); Pop(12)

0x515: Stack[-1] = (bool) 1
0x516: Return(); Pop(0)

0x517: @ StopAnimation()
0x518: Pop(0)
0x519: @ StopGroup0()
0x51a: Pop(0)
0x51b: Return(); Pop(0)

0x51c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x51d: @ GetPosition(Stack[-3])
0x51e: Pop(0)
0x51f: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x520: Pop(0)
0x521: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x522: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x523: Return(); Pop(6)

0x524: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x525: @ GetPosition(Stack[-3])
0x526: Pop(0)
0x527: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x528: Push(CvectorIndex(Stack[-2], 0))
0x529: Push(CvectorIndex(Stack[-3], 2))
0x52a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x52b: Pop(2)
0x52c: Stack[-1] = Stack[-8]
0x52d: Return(); Pop(6)

0x52e: PushEmpty(cvector, cvector)
0x52f: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x530: Pop(0)
0x531: PushEmpty(bool, cvector)
0x532: Stack[-3] = Stack[-1]
0x533: Call2 0x524

0x534: Stack[-2] = Stack[-6]
0x535: Pop(2)
0x536: Return(); Pop(2)

0x537: PushEmpty(bool, bool)
0x538: @ IsLoaded(Stack[-1])
0x539: Pop(0)
0x53a: Stack[-1] = Stack[-3]
0x53b: Return(); Pop(2)

0x53c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x53d: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x53e: Pop(0)
0x53f: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x540: Pop(0)
0x541: Push(CvectorIndex(Stack[-8], 1))
0x542: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x543: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x544: @ GetPosition(Stack[-7])
0x545: Pop(0)
0x546: @ GetEyesHeight(Stack[-9])
0x547: Pop(0)
0x548: Push(CvectorIndex(Stack[-7], 1))
0x549: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x54a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x54b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x54c: Push(CvectorIndex(Stack[-6], 1))
0x54d: Stack[-1] = (int) 0
0x54e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x54f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x550: Pop(1); Push(Sqrt(Stack[-1]))
0x551: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x552: Stack[-5] = -Stack[-6]; Pop(0);
0x553: Pop(0); Push(Stack[-6] * Stack[-19]);
0x554: PushEmpty(cvector, cvector)
0x555: Push([0.0, 1.0, 0.0])
0x556: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x557: Call2 0x644

0x558: Pop(1)
0x559: Push((int) 25)
0x55a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x55b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x55c: Push([0.0, 10.0, 0.0])
0x55d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x55e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x55f: @ IsOverrideActive(Stack[-2])
0x560: Pop(0)
0x561: Push(Stack[-2])
0x562: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x563: Stack[-21] = (bool) 0
0x564: Return(); Pop(18)

0x565: @ StopWorld()
0x566: Pop(0)
0x567: @ CameraTransit(Stack[-3], Stack[-5])
0x568: Pop(0)
0x569: Push(CvectorIndex(Stack[-4], 0))
0x56a: Push(CvectorIndex(Stack[-5], 2))
0x56b: @ Rotate(Stack[-2], Stack[-1])
0x56c: Pop(2)
0x56d: PushEmpty(bool)
0x56e: Call2 0x682

0x56f: Pop(0)
0x570: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x571: GOTO 0x57a

0x572: Push("head") // @poff=196
0x573: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x574: Pop(1)
0x575: Push(Stack[-1])
0x576: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x577: Push("head") // @poff=196
0x578: @ LookAsyncCamera(Stack[-1])
0x579: Pop(1)
0x57a: @ CameraWaitForPlayFinish()
0x57b: Pop(0)
0x57c: @ ResumeWorld()
0x57d: Pop(0)
0x57e: Stack[-21] = (bool) 1
0x57f: Return(); Pop(18)

0x580: PushEmpty(bool, bool)
0x581: @ CameraSwitchToNormal()
0x582: Pop(0)
0x583: PushEmpty(bool)
0x584: Call2 0x682

0x585: Pop(0)
0x586: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x587: GOTO 0x590

0x588: Push("head") // @poff=196
0x589: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x58a: Pop(1)
0x58b: Push(Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58d: Push("head") // @poff=196
0x58e: @ UnlookAsync(Stack[-1])
0x58f: Pop(1)
0x590: Return(); Pop(2)

0x591: PushEmpty(int, int, int, int)
0x592: Push("voice_common") // @poff=206
0x593: @ GetVariable(Stack[-1], Stack[-3])
0x594: Pop(1)
0x595: Push(Stack[-2])
0x596: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x597: PushEmpty(bool, object)
0x598: Stack[-7] = Stack[-1]
0x599: Call2 0x5cb

0x59a: Pop(1)
0x59b: Pop(1); Push((bool) Stack[-1] == 0)
0x59c: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x59d: PushEmpty(bool, object)
0x59e: Stack[-7] = Stack[-1]
0x59f: Call2 0x5f0

0x5a0: Pop(1)
0x5a1: Pop(1); Push((bool) Stack[-1] == 0)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a3: Stack[-6] = (bool) 0
0x5a4: Return(); Pop(4)

0x5a5: Push((int) 2)
0x5a6: @ irand(Stack[-2], Stack[-1])
0x5a7: Pop(1)
0x5a8: Push(Stack[-1])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5aa: Push("voice_common") // @poff=206
0x5ab: Push((int) 1)
0x5ac: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5ad: Push((int) 3)
0x5ae: Pop(2); Push(Stack[-2] % Stack[-1]);
0x5af: @ SetVariable(Stack[-2], Stack[-1])
0x5b0: Pop(2)
0x5b1: GOTO 0x5b6

0x5b2: Push("voice_common") // @poff=206
0x5b3: Push((int) 0)
0x5b4: @ SetVariable(Stack[-2], Stack[-1])
0x5b5: Pop(2)
0x5b6: GOTO 0x5c9

0x5b7: PushEmpty(bool, object)
0x5b8: Stack[-7] = Stack[-1]
0x5b9: Call2 0x5f0

0x5ba: Pop(1)
0x5bb: Pop(1); Push((bool) Stack[-1] == 0)
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5bd: PushEmpty(bool, object)
0x5be: Stack[-7] = Stack[-1]
0x5bf: Call2 0x5cb

0x5c0: Pop(1)
0x5c1: Pop(1); Push((bool) Stack[-1] == 0)
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c3: Stack[-6] = (bool) 0
0x5c4: Return(); Pop(4)

0x5c5: Push("voice_common") // @poff=206
0x5c6: Push((int) 1)
0x5c7: @ SetVariable(Stack[-2], Stack[-1])
0x5c8: Pop(2)
0x5c9: Stack[-6] = (bool) 1
0x5ca: Return(); Pop(4)

0x5cb: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5cc: Stack[-5] = "c" // @poff=232
0x5cd: Stack[-4] = (int) 0
0x5ce: Push((int) 1)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d0: Push((int) 1)
0x5d1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5d2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5d3: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x5d4: Pop(1)
0x5d5: Pop(0); Push((bool) Stack[-3] == 0)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5d7: GOTO 0x5db

0x5d8: Push((int) 1)
0x5d9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5da: GOTO 0x5ce

0x5db: Pop(0); Push((bool) Stack[-4] == 0)
0x5dc: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5dd: Stack[-12] = (bool) 0
0x5de: Return(); Pop(10)

0x5df: Stack[-2] = (int) 0
0x5e0: Push((int) 1)
0x5e1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e3: @ irand(Stack[-2], Stack[-4])
0x5e4: Pop(0)
0x5e5: Push((int) 1)
0x5e6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5e7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5e8: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x5e9: Pop(1)
0x5ea: PushEmpty(bool, string)
0x5eb: Stack[-3] = Stack[-1]
0x5ec: Call2 0x628

0x5ed: Stack[-2] = Stack[-14]
0x5ee: Pop(2)
0x5ef: Return(); Pop(10)

0x5f0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5f1: Push("d") // @poff=202
0x5f2: PushEmpty(int)
0x5f3: Call2 0x653

0x5f4: Pop(0)
0x5f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5f6: Push("m") // @poff=260
0x5f7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5f8: Stack[-4] = (int) 0
0x5f9: Push((int) 1)
0x5fa: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x5fb: Push((int) 1)
0x5fc: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5fd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5fe: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x5ff: Pop(1)
0x600: Pop(0); Push((bool) Stack[-3] == 0)
0x601: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x602: GOTO 0x606

0x603: Push((int) 1)
0x604: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x605: GOTO 0x5f9

0x606: Pop(0); Push((bool) Stack[-4] == 0)
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: Stack[-12] = (bool) 0
0x609: Return(); Pop(10)

0x60a: Stack[-2] = (int) 0
0x60b: Push((int) 1)
0x60c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x60d: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60e: @ irand(Stack[-2], Stack[-4])
0x60f: Pop(0)
0x610: Push((int) 1)
0x611: Pop(1); Push(Stack[-3] + Stack[-1]);
0x612: Pop(1); Push(Stack[-6] + Stack[-1]);
0x613: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x614: Pop(1)
0x615: PushEmpty(bool, string)
0x616: Stack[-3] = Stack[-1]
0x617: Call2 0x628

0x618: Stack[-2] = Stack[-14]
0x619: Pop(2)
0x61a: Return(); Pop(10)

0x61b: PushEmpty(float, float, float, float)
0x61c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x61d: Pop(0)
0x61e: Push((bool) 0)
0x61f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x620: Pop(1)
0x621: Return(); Pop(4)

0x622: PushEmpty(float, float, float, float)
0x623: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x624: Pop(0)
0x625: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x626: Pop(0)
0x627: Return(); Pop(4)

0x628: PushEmpty(bool, bool)
0x629: PushEmpty(bool)
0x62a: Call2 0x682

0x62b: Pop(0)
0x62c: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x62d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x62e: Pop(0)
0x62f: Push(Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x631: @ lshPlaySpeech(Stack[-3])
0x632: Pop(0)
0x633: Stack[-4] = (bool) 1
0x634: Return(); Pop(2)

0x635: Stack[-4] = (bool) 0
0x636: Return(); Pop(2)

0x637: PushEmpty(bool)
0x638: Call2 0x682

0x639: Pop(0)
0x63a: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63b: @ lshStopSpeech()
0x63c: Pop(0)
0x63d: Return(); Pop(0)

0x63e: PushEmpty(object, object)
0x63f: @ self(Stack[-1])
0x640: Pop(0)
0x641: Stack[-1] = Stack[-3]
0x642: Return(); Pop(2)

0x643: Stack[-1] = 0
0x644: PushEmpty(float, float)
0x645: Pop(0); Push(Stack[-3] | Stack[-3]);
0x646: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x647: Push((float)9.999999974752427e-07)
0x648: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64a: Stack[-4] = [0.0, 0.0, 0.0]
0x64b: Return(); Pop(2)

0x64c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x64d: Return(); Pop(2)

0x64e: PushEmpty(int, int)
0x64f: @ GetVariable(Stack[-3], Stack[-1])
0x650: Pop(0)
0x651: Stack[-1] = Stack[-4]
0x652: Return(); Pop(2)

0x653: PushEmpty(float, float)
0x654: @ GetGameTime(Stack[-1])
0x655: Pop(0)
0x656: Push((int) 1)
0x657: PushEmpty(int)
0x658: Push((int) 24)
0x659: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x65a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x65b: Return(); Pop(2)

0x65c: PushEmpty()
0x65d: PushEmpty(int)
0x65e: Call2 0x653

0x65f: Pop(0)
0x660: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x661: Return(); Pop(0)

0x662: PushEmpty(string, string)
0x663: Stack[-1] = "idle" // @poff=146
0x664: Push(Stack[-3])
0x665: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x666: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x667: Stack[-1] = Stack[-4]
0x668: Return(); Pop(2)

0x669: PushEmpty(int, bool, int, bool)
0x66a: Stack[-2] = (int) 0
0x66b: Push("all") // @poff=138
0x66c: PushEmpty(string, int)
0x66d: Stack[-5] = Stack[-1]
0x66e: Call2 0x662

0x66f: Pop(1)
0x670: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x671: Pop(2)
0x672: Pop(0); Push((bool) Stack[-1] == 0)
0x673: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x674: GOTO 0x678

0x675: Push((int) 1)
0x676: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x677: GOTO 0x66b

0x678: Stack[-2] = Stack[-5]
0x679: Return(); Pop(4)

0x67a: Stack[-1] = (int) 515536
0x67b: Return(); Pop(0)

0x67c: Stack[-1] = (int) 502861
0x67d: Return(); Pop(0)

0x67e: Stack[-1] = "ui/NPC_Han.png" // @poff=264
0x67f: Return(); Pop(0)

0x680: Stack[-1] = "ui/NPC_Han_b.png" // @poff=294
0x681: Return(); Pop(0)

0x682: Stack[-1] = (bool) 1
0x683: Return(); Pop(0)

0x684: PushEmpty()
0x685: Push("k9q01") // @poff=328
0x686: Push((int) 6)
0x687: @ SetVariable(Stack[-2], Stack[-1])
0x688: Pop(2)
0x689: PushEmpty()
0x68a: Call2 0x699

0x68b: Pop(0)
0x68c: Return(); Pop(0)

0x68d: PushEmpty()
0x68e: PushEmpty(int, string)
0x68f: Stack[-1] = "k9q01" // @poff=328
0x690: Call2 0x64e

0x691: Pop(1)
0x692: Push((int) 5)
0x693: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x694: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x695: Stack[-2] = (bool) 1
0x696: Return(); Pop(0)

0x697: Stack[-2] = (bool) 0
0x698: Return(); Pop(0)

0x699: PushEmpty(object, object)
0x69a: Push((int) 523)
0x69b: Push((int) 1)
0x69c: Push((int) 529815)
0x69d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x69e: Pop(3)
0x69f: PushEmpty(bool, object, int)
0x6a0: Stack[-4] = Stack[-2]
0x6a1: Stack[-1] = (int) 517
0x6a2: Call2 0x6b3

0x6a3: Pop(3)
0x6a4: Return(); Pop(2)

0x6a5: Stack[-1] = 0
0x6a6: PushEmpty(object, object)
0x6a7: @ GetDiaryRoot(Stack[-1])
0x6a8: Pop(0)
0x6a9: Pop(0); Push((bool) Stack[-1] == 0)
0x6aa: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6ab: Push("Can't retrieve diary root") // @poff=340
0x6ac: @ Trace(Stack[-1])
0x6ad: Pop(1)
0x6ae: Stack[-3] = (bool) 0
0x6af: Return(); Pop(2)

0x6b0: Stack[-1] = Stack[-3]
0x6b1: Return(); Pop(2)

0x6b2: Stack[-1] = 0
0x6b3: PushEmpty(object, object, int, object, object, int)
0x6b4: PushEmpty(object)
0x6b5: Call2 0x6a6

0x6b6: Stack[-1] = Stack[-4]
0x6b7: Pop(1)
0x6b8: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=392
0x6b9: Pop(0)
0x6ba: Pop(0); Push((bool) Stack[-2] == 0)
0x6bb: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6bc: Push("Can't find diary parent with id: ") // @poff=397
0x6bd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6be: @ Trace(Stack[-1])
0x6bf: Pop(1)
0x6c0: Stack[-9] = (bool) 0
0x6c1: Return(); Pop(6)

0x6c2: @@ AddChild(Stack[-8]); Obj=2 // @poff=465
0x6c3: Pop(0)
0x6c4: Push((int) 7)
0x6c5: @ SendWorldWndMessage(Stack[-1])
0x6c6: Pop(1)
0x6c7: @@ GetCategory(Stack[-1]); Obj=8 // @poff=474
0x6c8: Pop(0)
0x6c9: @ SetDiarySection(Stack[-1])
0x6ca: Pop(0)
0x6cb: Stack[-9] = (bool) 0
0x6cc: Return(); Pop(6)

0x6cd: Stack[-2] = 0
0x6ce: Stack[-3] = 0
0x6cf: PushEmpty(int, int)
0x6d0: Push("branch") // @poff=486
0x6d1: @ GetVariable(Stack[-1], Stack[-2])
0x6d2: Pop(1)
0x6d3: Push((int) 0)
0x6d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d6: Stack[-3] = (int) 1
0x6d7: Return(); Pop(2)

0x6d8: GOTO 0x6de

0x6d9: Push((int) 1)
0x6da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6db: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6dc: Stack[-3] = (int) 2
0x6dd: Return(); Pop(2)

0x6de: Stack[-3] = (int) 3
0x6df: Return(); Pop(2)

0x6e0: PushEmpty()
0x6e1: Push(GlobalVars[1])
0x6e2: Pop(1); Push((bool) Stack[-1] == 0)
0x6e3: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6e4: PushEmpty(int, object)
0x6e5: Stack[-3] = Stack[-1]
0x6e6: Push(-2, 1); TaskCall(3)
0x6e7: Call2 0x184

0x6e8: Pop(-2, 1); TaskReturn
0x6e9: Pop(2)
0x6ea: Push(GlobalVars[1])
0x6eb: Stack[-1] = (bool) 1
0x6ec: GlobalVars[1] = Stack[-1]; Pop(1)
0x6ed: PushEmpty(bool, int)
0x6ee: Stack[-1] = (int) 9
0x6ef: Call2 0x65c

0x6f0: Pop(1)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f2: PushEmpty(int, object)
0x6f3: Stack[-3] = Stack[-1]
0x6f4: Push(-2, 1); TaskCall(1)
0x6f5: Call2 0xd

0x6f6: Pop(-2, 1); TaskReturn
0x6f7: Pop(2)
0x6f8: Return(); Pop(0)

0x6f9: PushEmpty(bool, int)
0x6fa: Stack[-1] = (int) 12
0x6fb: Call2 0x65c

0x6fc: Pop(1)
0x6fd: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x6fe: PushEmpty(int, object)
0x6ff: Stack[-3] = Stack[-1]
0x700: Push(-2, 1); TaskCall(5)
0x701: Call2 0x245

0x702: Pop(-2, 1); TaskReturn
0x703: Pop(2)
0x704: Return(); Pop(0)

0x705: PushEmpty(int, object)
0x706: Stack[-3] = Stack[-1]
0x707: Push(-2, 1); TaskCall(7)
0x708: Call2 0x348

0x709: Pop(-2, 1); TaskReturn
0x70a: Pop(2)
0x70b: Return(); Pop(0)

