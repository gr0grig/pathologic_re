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
	W:ui/NPC_BigVlad.png
	W:ui/NPC_BigVlad_b.png
	W:k2q01
	W:k2q01BigVladGotoOspina
	W:pt_map_ospina
	A:AddMark
	A:ShowMap
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	A:GetLocator
	W:Warning: outdoor scene locator 
	W: doesnt exist
	W:Can't find map
	A:SetMapParams
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f0042006900670056006c00610064002e0070006e0067000000750069002f004e00500043005f0042006900670056006c00610064005f0062002e0070006e00670000006b00320071003000310000006b00320071003000310042006900670056006c006100640047006f0074006f004f007300700069006e0061000000700074005f006d00610070005f006f007300700069006e00610000004164644d61726b0053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000
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
	GetMainOutdoorScene (1 args)

RunOp = 0x3df
RunTask = 9

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d5 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2b7 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3b5 Vars = (int, int)
	GTASK_9 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x431 Vars = (int)
		EVENT_6 Op = 0x457 Vars = ()
		EVENT_5 Op = 0x466 Vars = ()
		EVENT_45 Op = 0x473 Vars = (bool)
		EVENT_0 Op = 0x47f Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x503

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
0x11: Call2 0x60a

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x55d

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x508

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x64d

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x64b

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x64f

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x651

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x6f0

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
0x55: Call2 0x54c

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
0x63: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0xa2

0x67: Pop(1)
0x68: Push((int) 525245)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x67c

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 525246)
0x73: Push((int) 30599)
0x74: Push((int) 26614)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 525249)
0x78: Push((int) -1)
0x79: Push((int) 26617)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 529151)
0x7d: Push((int) -1)
0x7e: Push((int) 30598)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x62

0x84: PushEmpty(bool)
0x85: Call2 0x653

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x5e7

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all") // @poff=138
0x94: Push("idle") // @poff=146
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all") // @poff=138
0x9d: Push("idle") // @poff=146
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x653

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-3] = Stack[-2]
0xae: Push("") // @poff=102
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x5ee

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x603

0xbd: Pop(0)
0xbe: Push((int) 26616)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x655

0xc5: Pop(2)
0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x66c

0xca: Pop(2)
0xcb: Push((int) 26613)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0xa2

0xd1: Pop(1)
0xd2: Push((int) 525245)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: PushEmpty(bool, object)
0xd8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Call2 0x67c

0xda: Pop(1)
0xdb: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdc: Push((int) 525246)
0xdd: Push((int) 30599)
0xde: Push((int) 26614)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Push((int) 525249)
0xe2: Push((int) -1)
0xe3: Push((int) 26617)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 529151)
0xe7: Push((int) -1)
0xe8: Push((int) 30598)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 30599)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral" // @poff=89
0xf1: Call2 0xa2

0xf2: Pop(1)
0xf3: Push((int) 529152)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=116
0xf7: Pop(0)
0xf8: Push((int) 529153)
0xf9: Push((int) 30601)
0xfa: Push((int) 30600)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 529155)
0xfe: Push((int) 30601)
0xff: Push((int) 30602)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 30601)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral" // @poff=89
0x108: Call2 0xa2

0x109: Pop(1)
0x10a: Push((int) 529154)
0x10b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10c: Pop(1)
0x10d: @@@ ClearReplies(); Obj=0 // @poff=116
0x10e: Pop(0)
0x10f: Push((int) 529156)
0x110: Push((int) 26615)
0x111: Push((int) 30604)
0x112: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x113: Pop(3)
0x114: Push((int) 529157)
0x115: Push((int) 26615)
0x116: Push((int) 30605)
0x117: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 26615)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral" // @poff=89
0x11f: Call2 0xa2

0x120: Pop(1)
0x121: Push((int) 525247)
0x122: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x123: Pop(1)
0x124: @@@ ClearReplies(); Obj=0 // @poff=116
0x125: Pop(0)
0x126: Push((int) 525248)
0x127: Push((int) -1)
0x128: Push((int) 26616)
0x129: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12d: PushEmpty(bool)
0x12e: Call2 0x653

0x12f: Pop(0)
0x130: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x131: @ lshStopAnimation()
0x132: Pop(0)
0x133: GOTO 0x136

0x134: @ StopAnimation()
0x135: Pop(0)
0x136: Return(); Pop(0)

0x137: GOTO 0xb9

0x138: Return(); Pop(0)

0x139: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x13a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x13b: PushEmpty(bool, object)
0x13c: PushEmpty(object)
0x13d: Call2 0x60a

0x13e: Stack[-1] = Stack[-2]
0x13f: Pop(1)
0x140: Call2 0x55d

0x141: Pop(2)
0x142: PushEmpty(bool, object, float)
0x143: Stack[-12] = Stack[-2]
0x144: Stack[-1] = (float) 70.0
0x145: Call2 0x508

0x146: Pop(2)
0x147: Pop(1); Push((bool) Stack[-1] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x149: Stack[-10] = (int) -2
0x14a: Return(); Pop(8)

0x14b: @ CreateDialog(Stack[-4])
0x14c: Pop(0)
0x14d: PushEmpty(int)
0x14e: Call2 0x64d

0x14f: Pop(0)
0x150: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x151: Pop(1)
0x152: PushEmpty(int)
0x153: Call2 0x64b

0x154: Pop(0)
0x155: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x156: Pop(1)
0x157: PushEmpty(string)
0x158: Call2 0x64f

0x159: Pop(0)
0x15a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x15b: Pop(1)
0x15c: PushEmpty(string)
0x15d: Call2 0x651

0x15e: Pop(0)
0x15f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x160: Pop(1)
0x161: PushEmpty(int)
0x162: Call2 0x6f0

0x163: Pop(0)
0x164: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x165: Pop(1)
0x166: Stack[-2] = (int) -1
0x167: @ IsOverrideActive(Stack[-3])
0x168: Pop(0)
0x169: Push(Stack[-3])
0x16a: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16b: Stack[-10] = (int) -2
0x16c: Return(); Pop(8)

0x16d: @ DoDialog(Stack[-4])
0x16e: Pop(0)
0x16f: PushEmpty(object, object)
0x170: Stack[-11] = Stack[-2]
0x171: Stack[-6] = Stack[-1]
0x172: Push(-2, 4); TaskCall(4)
0x173: Call2 0x18a

0x174: Pop(-2, 4); TaskReturn
0x175: Pop(2)
0x176: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x177: Pop(0)
0x178: Pop(0); Push((bool) Stack[-1] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: @ sync()
0x17b: Pop(0)
0x17c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x17d: Pop(0)
0x17e: GOTO 0x178

0x17f: PushEmpty(object)
0x180: Stack[-10] = Stack[-1]
0x181: Call2 0x54c

0x182: Pop(1)
0x183: @ StopDialog(Stack[-4])
0x184: Pop(0)
0x185: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x186: Pop(0)
0x187: Stack[-2] = Stack[-10]
0x188: Return(); Pop(8)

0x189: Stack[-4] = 0
0x18a: PushEmpty()
0x18b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x18c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x18d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x18e: Push((int) 1)
0x18f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral" // @poff=89
0x192: Call2 0x1bf

0x193: Pop(1)
0x194: Push((int) 525468)
0x195: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x196: Pop(1)
0x197: @@@ ClearReplies(); Obj=0 // @poff=116
0x198: Pop(0)
0x199: Push((int) 525469)
0x19a: Push((int) 30746)
0x19b: Push((int) 26825)
0x19c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19d: Pop(3)
0x19e: GOTO 0x1a1

0x19f: Return(); Pop(0)

0x1a0: GOTO 0x18e

0x1a1: PushEmpty(bool)
0x1a2: Call2 0x653

0x1a3: Pop(0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1a5: @ lshWaitForAnimEnd()
0x1a6: Pop(0)
0x1a7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: GOTO 0x1af

0x1aa: PushEmpty(string)
0x1ab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1ac: Call2 0x5e7

0x1ad: Pop(1)
0x1ae: GOTO 0x1a5

0x1af: GOTO 0x1be

0x1b0: Push("all") // @poff=138
0x1b1: Push("idle") // @poff=146
0x1b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b3: Pop(2)
0x1b4: @ WaitForAnimEnd()
0x1b5: Pop(0)
0x1b6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: GOTO 0x1be

0x1b9: Push("all") // @poff=138
0x1ba: Push("idle") // @poff=146
0x1bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: GOTO 0x1b4

0x1be: Return(); Pop(0)

0x1bf: PushEmpty()
0x1c0: PushEmpty(bool)
0x1c1: Call2 0x653

0x1c2: Pop(0)
0x1c3: Pop(1); Push((bool) Stack[-1] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Return(); Pop(0)

0x1c6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: Return(); Pop(0)

0x1c9: PushEmpty(string, bool)
0x1ca: Stack[-3] = Stack[-2]
0x1cb: Push("") // @poff=102
0x1cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1ce: Stack[-1] = (bool) 0
0x1cf: GOTO 0x1d1

0x1d0: Stack[-1] = (bool) 1
0x1d1: Call2 0x5ee

0x1d2: Pop(2)
0x1d3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: Push((int) 1)
0x1d7: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1d8: PushEmpty()
0x1d9: Call2 0x603

0x1da: Pop(0)
0x1db: Push((int) 26824)
0x1dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1de: PushEmpty(string)
0x1df: Stack[-1] = "Neutral" // @poff=89
0x1e0: Call2 0x1bf

0x1e1: Pop(1)
0x1e2: Push((int) 525468)
0x1e3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e4: Pop(1)
0x1e5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e6: Pop(0)
0x1e7: Push((int) 525469)
0x1e8: Push((int) 30746)
0x1e9: Push((int) 26825)
0x1ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1eb: Pop(3)
0x1ec: Return(); Pop(0)

0x1ed: Push((int) 30746)
0x1ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Neutral" // @poff=89
0x1f2: Call2 0x1bf

0x1f3: Pop(1)
0x1f4: Push((int) 529292)
0x1f5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f6: Pop(1)
0x1f7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f8: Pop(0)
0x1f9: Push((int) 529293)
0x1fa: Push((int) -1)
0x1fb: Push((int) 30747)
0x1fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fd: Pop(3)
0x1fe: Push((int) 529294)
0x1ff: Push((int) -1)
0x200: Push((int) 30748)
0x201: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x205: PushEmpty(bool)
0x206: Call2 0x653

0x207: Pop(0)
0x208: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x209: @ lshStopAnimation()
0x20a: Pop(0)
0x20b: GOTO 0x20e

0x20c: @ StopAnimation()
0x20d: Pop(0)
0x20e: Return(); Pop(0)

0x20f: GOTO 0x1d6

0x210: Return(); Pop(0)

0x211: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x212: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x213: PushEmpty(bool, object)
0x214: PushEmpty(object)
0x215: Call2 0x60a

0x216: Stack[-1] = Stack[-2]
0x217: Pop(1)
0x218: Call2 0x55d

0x219: Pop(2)
0x21a: PushEmpty(bool, object, float)
0x21b: Stack[-12] = Stack[-2]
0x21c: Stack[-1] = (float) 70.0
0x21d: Call2 0x508

0x21e: Pop(2)
0x21f: Pop(1); Push((bool) Stack[-1] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x221: Stack[-10] = (int) -2
0x222: Return(); Pop(8)

0x223: @ CreateDialog(Stack[-4])
0x224: Pop(0)
0x225: PushEmpty(int)
0x226: Call2 0x64d

0x227: Pop(0)
0x228: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x229: Pop(1)
0x22a: PushEmpty(int)
0x22b: Call2 0x64b

0x22c: Pop(0)
0x22d: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x22e: Pop(1)
0x22f: PushEmpty(string)
0x230: Call2 0x64f

0x231: Pop(0)
0x232: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x233: Pop(1)
0x234: PushEmpty(string)
0x235: Call2 0x651

0x236: Pop(0)
0x237: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x238: Pop(1)
0x239: PushEmpty(int)
0x23a: Call2 0x6f0

0x23b: Pop(0)
0x23c: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x23d: Pop(1)
0x23e: Stack[-2] = (int) -1
0x23f: @ IsOverrideActive(Stack[-3])
0x240: Pop(0)
0x241: Push(Stack[-3])
0x242: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x243: Stack[-10] = (int) -2
0x244: Return(); Pop(8)

0x245: @ DoDialog(Stack[-4])
0x246: Pop(0)
0x247: PushEmpty(object, object)
0x248: Stack[-11] = Stack[-2]
0x249: Stack[-6] = Stack[-1]
0x24a: Push(-2, 4); TaskCall(6)
0x24b: Call2 0x262

0x24c: Pop(-2, 4); TaskReturn
0x24d: Pop(2)
0x24e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x24f: Pop(0)
0x250: Pop(0); Push((bool) Stack[-1] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x252: @ sync()
0x253: Pop(0)
0x254: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x255: Pop(0)
0x256: GOTO 0x250

0x257: PushEmpty(object)
0x258: Stack[-10] = Stack[-1]
0x259: Call2 0x54c

0x25a: Pop(1)
0x25b: @ StopDialog(Stack[-4])
0x25c: Pop(0)
0x25d: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x25e: Pop(0)
0x25f: Stack[-2] = Stack[-10]
0x260: Return(); Pop(8)

0x261: Stack[-4] = 0
0x262: PushEmpty()
0x263: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x264: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x265: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x266: Push((int) 1)
0x267: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x268: PushEmpty(string)
0x269: Stack[-1] = "Neutral" // @poff=89
0x26a: Call2 0x2a1

0x26b: Pop(1)
0x26c: Push((int) 535284)
0x26d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x26e: Pop(1)
0x26f: @@@ ClearReplies(); Obj=0 // @poff=116
0x270: Pop(0)
0x271: Push((int) 535285)
0x272: Push((int) 36962)
0x273: Push((int) 36961)
0x274: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x275: Pop(3)
0x276: Push((int) 535292)
0x277: Push((int) -1)
0x278: Push((int) 36968)
0x279: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27a: Pop(3)
0x27b: Push((int) 535293)
0x27c: Push((int) -1)
0x27d: Push((int) 36969)
0x27e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27f: Pop(3)
0x280: GOTO 0x283

0x281: Return(); Pop(0)

0x282: GOTO 0x266

0x283: PushEmpty(bool)
0x284: Call2 0x653

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x287: @ lshWaitForAnimEnd()
0x288: Pop(0)
0x289: Push( Stack[3 + Tasks[-1].StackPointer] )
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x291

0x28c: PushEmpty(string)
0x28d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x28e: Call2 0x5e7

0x28f: Pop(1)
0x290: GOTO 0x287

0x291: GOTO 0x2a0

0x292: Push("all") // @poff=138
0x293: Push("idle") // @poff=146
0x294: @ PlayAnimation(Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: @ WaitForAnimEnd()
0x297: Pop(0)
0x298: Push( Stack[3 + Tasks[-1].StackPointer] )
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: GOTO 0x2a0

0x29b: Push("all") // @poff=138
0x29c: Push("idle") // @poff=146
0x29d: @ PlayAnimation(Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: GOTO 0x296

0x2a0: Return(); Pop(0)

0x2a1: PushEmpty()
0x2a2: PushEmpty(bool)
0x2a3: Call2 0x653

0x2a4: Pop(0)
0x2a5: Pop(1); Push((bool) Stack[-1] == 0)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Return(); Pop(0)

0x2a8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(string, bool)
0x2ac: Stack[-3] = Stack[-2]
0x2ad: Push("") // @poff=102
0x2ae: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b0: Stack[-1] = (bool) 0
0x2b1: GOTO 0x2b3

0x2b2: Stack[-1] = (bool) 1
0x2b3: Call2 0x5ee

0x2b4: Pop(2)
0x2b5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty()
0x2b8: Push((int) 1)
0x2b9: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x2ba: PushEmpty()
0x2bb: Call2 0x603

0x2bc: Pop(0)
0x2bd: Push((int) 36960)
0x2be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2c0: PushEmpty(string)
0x2c1: Stack[-1] = "Neutral" // @poff=89
0x2c2: Call2 0x2a1

0x2c3: Pop(1)
0x2c4: Push((int) 535284)
0x2c5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2c6: Pop(1)
0x2c7: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c8: Pop(0)
0x2c9: Push((int) 535285)
0x2ca: Push((int) 36962)
0x2cb: Push((int) 36961)
0x2cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2cd: Pop(3)
0x2ce: Push((int) 535292)
0x2cf: Push((int) -1)
0x2d0: Push((int) 36968)
0x2d1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d2: Pop(3)
0x2d3: Push((int) 535293)
0x2d4: Push((int) -1)
0x2d5: Push((int) 36969)
0x2d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d7: Pop(3)
0x2d8: Return(); Pop(0)

0x2d9: Push((int) 36962)
0x2da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2dc: PushEmpty(string)
0x2dd: Stack[-1] = "Neutral" // @poff=89
0x2de: Call2 0x2a1

0x2df: Pop(1)
0x2e0: Push((int) 535286)
0x2e1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e2: Pop(1)
0x2e3: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e4: Pop(0)
0x2e5: Push((int) 535287)
0x2e6: Push((int) 36964)
0x2e7: Push((int) 36963)
0x2e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e9: Pop(3)
0x2ea: Push((int) 535291)
0x2eb: Push((int) -1)
0x2ec: Push((int) 36967)
0x2ed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ee: Pop(3)
0x2ef: Return(); Pop(0)

0x2f0: Push((int) 36964)
0x2f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2f3: PushEmpty(string)
0x2f4: Stack[-1] = "Neutral" // @poff=89
0x2f5: Call2 0x2a1

0x2f6: Pop(1)
0x2f7: Push((int) 535288)
0x2f8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2f9: Pop(1)
0x2fa: @@@ ClearReplies(); Obj=0 // @poff=116
0x2fb: Pop(0)
0x2fc: Push((int) 535289)
0x2fd: Push((int) -1)
0x2fe: Push((int) 36965)
0x2ff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x300: Pop(3)
0x301: Push((int) 535290)
0x302: Push((int) -1)
0x303: Push((int) 36966)
0x304: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x305: Pop(3)
0x306: Return(); Pop(0)

0x307: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x308: PushEmpty(bool)
0x309: Call2 0x653

0x30a: Pop(0)
0x30b: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30c: @ lshStopAnimation()
0x30d: Pop(0)
0x30e: GOTO 0x311

0x30f: @ StopAnimation()
0x310: Pop(0)
0x311: Return(); Pop(0)

0x312: GOTO 0x2b8

0x313: Return(); Pop(0)

0x314: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x315: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x316: PushEmpty(bool, object)
0x317: PushEmpty(object)
0x318: Call2 0x60a

0x319: Stack[-1] = Stack[-2]
0x31a: Pop(1)
0x31b: Call2 0x55d

0x31c: Pop(2)
0x31d: PushEmpty(bool, object, float)
0x31e: Stack[-12] = Stack[-2]
0x31f: Stack[-1] = (float) 70.0
0x320: Call2 0x508

0x321: Pop(2)
0x322: Pop(1); Push((bool) Stack[-1] == 0)
0x323: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x324: Stack[-10] = (int) -2
0x325: Return(); Pop(8)

0x326: @ CreateDialog(Stack[-4])
0x327: Pop(0)
0x328: PushEmpty(int)
0x329: Call2 0x64d

0x32a: Pop(0)
0x32b: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x32c: Pop(1)
0x32d: PushEmpty(int)
0x32e: Call2 0x64b

0x32f: Pop(0)
0x330: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x331: Pop(1)
0x332: PushEmpty(string)
0x333: Call2 0x64f

0x334: Pop(0)
0x335: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x336: Pop(1)
0x337: PushEmpty(string)
0x338: Call2 0x651

0x339: Pop(0)
0x33a: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x33b: Pop(1)
0x33c: PushEmpty(int)
0x33d: Call2 0x6f0

0x33e: Pop(0)
0x33f: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x340: Pop(1)
0x341: Stack[-2] = (int) -1
0x342: @ IsOverrideActive(Stack[-3])
0x343: Pop(0)
0x344: Push(Stack[-3])
0x345: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x346: Stack[-10] = (int) -2
0x347: Return(); Pop(8)

0x348: @ DoDialog(Stack[-4])
0x349: Pop(0)
0x34a: PushEmpty(object, object)
0x34b: Stack[-11] = Stack[-2]
0x34c: Stack[-6] = Stack[-1]
0x34d: Push(-2, 4); TaskCall(8)
0x34e: Call2 0x365

0x34f: Pop(-2, 4); TaskReturn
0x350: Pop(2)
0x351: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x352: Pop(0)
0x353: Pop(0); Push((bool) Stack[-1] == 0)
0x354: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x355: @ sync()
0x356: Pop(0)
0x357: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x358: Pop(0)
0x359: GOTO 0x353

0x35a: PushEmpty(object)
0x35b: Stack[-10] = Stack[-1]
0x35c: Call2 0x54c

0x35d: Pop(1)
0x35e: @ StopDialog(Stack[-4])
0x35f: Pop(0)
0x360: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x361: Pop(0)
0x362: Stack[-2] = Stack[-10]
0x363: Return(); Pop(8)

0x364: Stack[-4] = 0
0x365: PushEmpty()
0x366: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x367: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x368: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x369: Push((int) 1)
0x36a: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x36b: PushEmpty(string)
0x36c: Stack[-1] = "Neutral" // @poff=89
0x36d: Call2 0x39f

0x36e: Pop(1)
0x36f: Push((int) 540545)
0x370: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x371: Pop(1)
0x372: @@@ ClearReplies(); Obj=0 // @poff=116
0x373: Pop(0)
0x374: Push((int) 540546)
0x375: Push((int) -1)
0x376: Push((int) 42555)
0x377: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x378: Pop(3)
0x379: Push((int) 540798)
0x37a: Push((int) -1)
0x37b: Push((int) 42847)
0x37c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x37d: Pop(3)
0x37e: GOTO 0x381

0x37f: Return(); Pop(0)

0x380: GOTO 0x369

0x381: PushEmpty(bool)
0x382: Call2 0x653

0x383: Pop(0)
0x384: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x385: @ lshWaitForAnimEnd()
0x386: Pop(0)
0x387: Push( Stack[3 + Tasks[-1].StackPointer] )
0x388: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x389: GOTO 0x38f

0x38a: PushEmpty(string)
0x38b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x38c: Call2 0x5e7

0x38d: Pop(1)
0x38e: GOTO 0x385

0x38f: GOTO 0x39e

0x390: Push("all") // @poff=138
0x391: Push("idle") // @poff=146
0x392: @ PlayAnimation(Stack[-2], Stack[-1])
0x393: Pop(2)
0x394: @ WaitForAnimEnd()
0x395: Pop(0)
0x396: Push( Stack[3 + Tasks[-1].StackPointer] )
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: GOTO 0x39e

0x399: Push("all") // @poff=138
0x39a: Push("idle") // @poff=146
0x39b: @ PlayAnimation(Stack[-2], Stack[-1])
0x39c: Pop(2)
0x39d: GOTO 0x394

0x39e: Return(); Pop(0)

0x39f: PushEmpty()
0x3a0: PushEmpty(bool)
0x3a1: Call2 0x653

0x3a2: Pop(0)
0x3a3: Pop(1); Push((bool) Stack[-1] == 0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: Return(); Pop(0)

0x3a6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a8: Return(); Pop(0)

0x3a9: PushEmpty(string, bool)
0x3aa: Stack[-3] = Stack[-2]
0x3ab: Push("") // @poff=102
0x3ac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ae: Stack[-1] = (bool) 0
0x3af: GOTO 0x3b1

0x3b0: Stack[-1] = (bool) 1
0x3b1: Call2 0x5ee

0x3b2: Pop(2)
0x3b3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3b4: Return(); Pop(0)

0x3b5: PushEmpty()
0x3b6: Push((int) 1)
0x3b7: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3b8: PushEmpty()
0x3b9: Call2 0x603

0x3ba: Pop(0)
0x3bb: Push((int) 42554)
0x3bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3be: PushEmpty(string)
0x3bf: Stack[-1] = "Neutral" // @poff=89
0x3c0: Call2 0x39f

0x3c1: Pop(1)
0x3c2: Push((int) 540545)
0x3c3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c4: Pop(1)
0x3c5: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c6: Pop(0)
0x3c7: Push((int) 540546)
0x3c8: Push((int) -1)
0x3c9: Push((int) 42555)
0x3ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3cb: Pop(3)
0x3cc: Push((int) 540798)
0x3cd: Push((int) -1)
0x3ce: Push((int) 42847)
0x3cf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3d0: Pop(3)
0x3d1: Return(); Pop(0)

0x3d2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3d3: PushEmpty(bool)
0x3d4: Call2 0x653

0x3d5: Pop(0)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d7: @ lshStopAnimation()
0x3d8: Pop(0)
0x3d9: GOTO 0x3dc

0x3da: @ StopAnimation()
0x3db: Pop(0)
0x3dc: Return(); Pop(0)

0x3dd: GOTO 0x3b6

0x3de: Return(); Pop(0)

0x3df: Push(GlobalVars[1])
0x3e0: Stack[-1] = (bool) 0
0x3e1: GlobalVars[1] = Stack[-1]; Pop(1)
0x3e2: PushEmpty()
0x3e3: Call2 0x3e6

0x3e4: Pop(0)
0x3e5: Return(); Pop(0)

0x3e6: PushEmpty(bool)
0x3e7: Call2 0x503

0x3e8: Pop(0)
0x3e9: Pop(1); Push((bool) Stack[-1] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3eb: PushEmpty()
0x3ec: Push(-0, 0); TaskCall(0)
0x3ed: Call2 0x0

0x3ee: Pop(-0, 0); TaskReturn
0x3ef: Pop(0)
0x3f0: PushEmpty()
0x3f1: Call2 0x466

0x3f2: Pop(0)
0x3f3: @ GetDirection(Stack[-0]T)
0x3f4: Pop(0)
0x3f5: PushEmpty()
0x3f6: Call2 0x49c

0x3f7: Pop(0)
0x3f8: GOTO 0x3f5

0x3f9: Return(); Pop(0)

0x3fa: PushEmpty(object, object)
0x3fb: Push("player") // @poff=156
0x3fc: @ FindActor(Stack[-2], Stack[-1])
0x3fd: Pop(1)
0x3fe: Pop(0); Push((bool) Stack[-1] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: Stack[-3] = (bool) 0
0x401: Return(); Pop(2)

0x402: PushEmpty(bool, object)
0x403: Stack[-3] = Stack[-1]
0x404: Call2 0x4fa

0x405: Stack[-2] = Stack[-5]
0x406: Pop(2)
0x407: Return(); Pop(2)

0x408: Stack[-1] = 0
0x409: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x40a: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x40b: @ RotateAsync(Stack[-2], Stack[-1])
0x40c: Pop(2)
0x40d: Return(); Pop(0)

0x40e: PushEmpty(object, bool, object, bool)
0x40f: Push("player") // @poff=156
0x410: @ FindActor(Stack[-3], Stack[-1])
0x411: Pop(1)
0x412: Pop(0); Push((bool) Stack[-2] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: Stack[-5] = (bool) 0
0x415: Return(); Pop(4)

0x416: PushEmpty(float, object)
0x417: Stack[-4] = Stack[-1]
0x418: Call2 0x4e8

0x419: Pop(1)
0x41a: Push((float)90000.0)
0x41b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41d: Stack[-5] = (bool) 0
0x41e: Return(); Pop(4)

0x41f: @ CanSee(Stack[-1], Stack[-2])
0x420: Pop(0)
0x421: Stack[-1] = Stack[-5]
0x422: Return(); Pop(4)

0x423: Stack[-2] = 0
0x424: PushEmpty(float, float)
0x425: Push((int) 8)
0x426: Push((int) 16)
0x427: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x428: Pop(2)
0x429: Push((int) 10)
0x42a: @ SetTimer(Stack[-1], Stack[-2])
0x42b: Pop(1)
0x42c: Return(); Pop(2)

0x42d: Push((int) 10)
0x42e: @ KillTimer(Stack[-1])
0x42f: Pop(1)
0x430: Return(); Pop(0)

0x431: PushEmpty()
0x432: Push((int) 10)
0x433: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x435: PushEmpty()
0x436: Call2 0x42d

0x437: Pop(0)
0x438: PushEmpty(bool)
0x439: Stack[-1] = (bool) 0
0x43a: PushEmpty(bool)
0x43b: Call2 0x503

0x43c: Pop(0)
0x43d: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43e: PushEmpty(bool)
0x43f: Call2 0x40e

0x440: Pop(0)
0x441: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x442: Stack[-1] = (bool) 1
0x443: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x444: PushEmpty(bool)
0x445: Call2 0x3fa

0x446: Pop(0)
0x447: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x448: PushEmpty(bool, object)
0x449: PushEmpty(object)
0x44a: Call2 0x60a

0x44b: Stack[-1] = Stack[-2]
0x44c: Pop(1)
0x44d: Call2 0x597

0x44e: Pop(2)
0x44f: GOTO 0x456

0x450: PushEmpty()
0x451: Call2 0x409

0x452: Pop(0)
0x453: PushEmpty()
0x454: Call2 0x424

0x455: Pop(0)
0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: Call2 0x4e3

0x459: Pop(0)
0x45a: PushEmpty()
0x45b: Call2 0x42d

0x45c: Pop(0)
0x45d: @ lshStopSpeech()
0x45e: Pop(0)
0x45f: @ lshStopAnimation()
0x460: Pop(0)
0x461: @ StopAsync()
0x462: Pop(0)
0x463: @ Hold()
0x464: Pop(0)
0x465: Return(); Pop(0)

0x466: @ StopGroup0()
0x467: Pop(0)
0x468: PushEmpty()
0x469: Call2 0x42d

0x46a: Pop(0)
0x46b: PushEmpty(string)
0x46c: Stack[-1] = "Neutral" // @poff=89
0x46d: Call2 0x5e7

0x46e: Pop(1)
0x46f: PushEmpty()
0x470: Call2 0x424

0x471: Pop(0)
0x472: Return(); Pop(0)

0x473: PushEmpty()
0x474: Push(Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x476: PushEmpty()
0x477: Call2 0x424

0x478: Pop(0)
0x479: GOTO 0x47e

0x47a: PushEmpty(string)
0x47b: Stack[-1] = "Neutral" // @poff=89
0x47c: Call2 0x5e7

0x47d: Pop(1)
0x47e: Return(); Pop(0)

0x47f: PushEmpty(bool, bool)
0x480: @ IsOverrideActive(Stack[-1])
0x481: Pop(0)
0x482: Pop(0); Push((bool) Stack[-1] == 0)
0x483: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x484: EventDisable(0)
0x485: PushEmpty()
0x486: Call2 0x4e3

0x487: Pop(0)
0x488: PushEmpty(bool, object)
0x489: Stack[-5] = Stack[-1]
0x48a: Call2 0x4fa

0x48b: Pop(2)
0x48c: EventEnable(0)
0x48d: PushEmpty(object)
0x48e: Stack[-4] = Stack[-1]
0x48f: Call2 0x701

0x490: Pop(1)
0x491: PushEmpty(string)
0x492: Stack[-1] = "Neutral" // @poff=89
0x493: Call2 0x5e7

0x494: Pop(1)
0x495: PushEmpty()
0x496: Call2 0x42d

0x497: Pop(0)
0x498: PushEmpty()
0x499: Call2 0x424

0x49a: Pop(0)
0x49b: Return(); Pop(2)

0x49c: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x49d: @ WaitForAnimEnd()
0x49e: Pop(0)
0x49f: PushEmpty(bool)
0x4a0: Call2 0x503

0x4a1: Pop(0)
0x4a2: Pop(1); Push((bool) Stack[-1] == 0)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a4: Return(); Pop(12)

0x4a5: PushEmpty(int)
0x4a6: Call2 0x63a

0x4a7: Stack[-1] = Stack[-7]
0x4a8: Pop(1)
0x4a9: Stack[-5] = (int) 0
0x4aa: PushEmpty(bool)
0x4ab: Stack[-1] = (bool) 0
0x4ac: Push((int) 5)
0x4ad: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4af: PushEmpty(bool)
0x4b0: Call2 0x503

0x4b1: Pop(0)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b3: Stack[-1] = (bool) 1
0x4b4: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4b5: Pop(0); Push((bool) Stack[-6] == 0)
0x4b6: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b7: Push((int) 3)
0x4b8: @ Sleep(Stack[-1], Stack[-5])
0x4b9: Pop(1)
0x4ba: Pop(0); Push((bool) Stack[-4] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bc: GOTO 0x4de

0x4bd: GOTO 0x4d3

0x4be: @ irand(Stack[-3], Stack[-6])
0x4bf: Pop(0)
0x4c0: Push((int) 5)
0x4c1: @ irand(Stack[-3], Stack[-1])
0x4c2: Pop(1)
0x4c3: Push((int) 0)
0x4c4: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c6: Stack[-3] = (int) 0
0x4c7: Push("all") // @poff=138
0x4c8: PushEmpty(string, int)
0x4c9: Stack[-6] = Stack[-1]
0x4ca: Call2 0x633

0x4cb: Pop(1)
0x4cc: @ PlayAnimation(Stack[-2], Stack[-1])
0x4cd: Pop(2)
0x4ce: @ WaitForAnimEnd(Stack[-1])
0x4cf: Pop(0)
0x4d0: Pop(0); Push((bool) Stack[-1] == 0)
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d2: GOTO 0x4de

0x4d3: PushEmpty(bool)
0x4d4: Call2 0x4e1

0x4d5: Pop(0)
0x4d6: Pop(1); Push((bool) Stack[-1] == 0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d8: GOTO 0x4de

0x4d9: @ ResetAAS()
0x4da: Pop(0)
0x4db: Push((int) 1)
0x4dc: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x4dd: GOTO 0x4aa

0x4de: @ ResetAAS()
0x4df: Pop(0)
0x4e0: Return(); Pop(12)

0x4e1: Stack[-1] = (bool) 1
0x4e2: Return(); Pop(0)

0x4e3: @ StopAnimation()
0x4e4: Pop(0)
0x4e5: @ StopGroup0()
0x4e6: Pop(0)
0x4e7: Return(); Pop(0)

0x4e8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4e9: @ GetPosition(Stack[-3])
0x4ea: Pop(0)
0x4eb: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x4ec: Pop(0)
0x4ed: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4ee: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4ef: Return(); Pop(6)

0x4f0: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x4f1: @ GetPosition(Stack[-3])
0x4f2: Pop(0)
0x4f3: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x4f4: Push(CvectorIndex(Stack[-2], 0))
0x4f5: Push(CvectorIndex(Stack[-3], 2))
0x4f6: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x4f7: Pop(2)
0x4f8: Stack[-1] = Stack[-8]
0x4f9: Return(); Pop(6)

0x4fa: PushEmpty(cvector, cvector)
0x4fb: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x4fc: Pop(0)
0x4fd: PushEmpty(bool, cvector)
0x4fe: Stack[-3] = Stack[-1]
0x4ff: Call2 0x4f0

0x500: Stack[-2] = Stack[-6]
0x501: Pop(2)
0x502: Return(); Pop(2)

0x503: PushEmpty(bool, bool)
0x504: @ IsLoaded(Stack[-1])
0x505: Pop(0)
0x506: Stack[-1] = Stack[-3]
0x507: Return(); Pop(2)

0x508: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x509: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x50a: Pop(0)
0x50b: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x50c: Pop(0)
0x50d: Push(CvectorIndex(Stack[-8], 1))
0x50e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x50f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x510: @ GetPosition(Stack[-7])
0x511: Pop(0)
0x512: @ GetEyesHeight(Stack[-9])
0x513: Pop(0)
0x514: Push(CvectorIndex(Stack[-7], 1))
0x515: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x516: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x517: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x518: Push(CvectorIndex(Stack[-6], 1))
0x519: Stack[-1] = (int) 0
0x51a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x51b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x51c: Pop(1); Push(Sqrt(Stack[-1]))
0x51d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x51e: Stack[-5] = -Stack[-6]; Pop(0);
0x51f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x520: PushEmpty(cvector, cvector)
0x521: Push([0.0, 1.0, 0.0])
0x522: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x523: Call2 0x610

0x524: Pop(1)
0x525: Push((int) 25)
0x526: Pop(2); Push(Stack[-2] * Stack[-1]);
0x527: Pop(2); Push(Stack[-2] + Stack[-1]);
0x528: Push([0.0, 10.0, 0.0])
0x529: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x52a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x52b: @ IsOverrideActive(Stack[-2])
0x52c: Pop(0)
0x52d: Push(Stack[-2])
0x52e: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52f: Stack[-21] = (bool) 0
0x530: Return(); Pop(18)

0x531: @ StopWorld()
0x532: Pop(0)
0x533: @ CameraTransit(Stack[-3], Stack[-5])
0x534: Pop(0)
0x535: Push(CvectorIndex(Stack[-4], 0))
0x536: Push(CvectorIndex(Stack[-5], 2))
0x537: @ Rotate(Stack[-2], Stack[-1])
0x538: Pop(2)
0x539: PushEmpty(bool)
0x53a: Call2 0x653

0x53b: Pop(0)
0x53c: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53d: GOTO 0x546

0x53e: Push("head") // @poff=196
0x53f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x540: Pop(1)
0x541: Push(Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x543: Push("head") // @poff=196
0x544: @ LookAsyncCamera(Stack[-1])
0x545: Pop(1)
0x546: @ CameraWaitForPlayFinish()
0x547: Pop(0)
0x548: @ ResumeWorld()
0x549: Pop(0)
0x54a: Stack[-21] = (bool) 1
0x54b: Return(); Pop(18)

0x54c: PushEmpty(bool, bool)
0x54d: @ CameraSwitchToNormal()
0x54e: Pop(0)
0x54f: PushEmpty(bool)
0x550: Call2 0x653

0x551: Pop(0)
0x552: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x553: GOTO 0x55c

0x554: Push("head") // @poff=196
0x555: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x556: Pop(1)
0x557: Push(Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x559: Push("head") // @poff=196
0x55a: @ UnlookAsync(Stack[-1])
0x55b: Pop(1)
0x55c: Return(); Pop(2)

0x55d: PushEmpty(int, int, int, int)
0x55e: Push("voice_common") // @poff=206
0x55f: @ GetVariable(Stack[-1], Stack[-3])
0x560: Pop(1)
0x561: Push(Stack[-2])
0x562: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x563: PushEmpty(bool, object)
0x564: Stack[-7] = Stack[-1]
0x565: Call2 0x597

0x566: Pop(1)
0x567: Pop(1); Push((bool) Stack[-1] == 0)
0x568: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x569: PushEmpty(bool, object)
0x56a: Stack[-7] = Stack[-1]
0x56b: Call2 0x5bc

0x56c: Pop(1)
0x56d: Pop(1); Push((bool) Stack[-1] == 0)
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: Stack[-6] = (bool) 0
0x570: Return(); Pop(4)

0x571: Push((int) 2)
0x572: @ irand(Stack[-2], Stack[-1])
0x573: Pop(1)
0x574: Push(Stack[-1])
0x575: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x576: Push("voice_common") // @poff=206
0x577: Push((int) 1)
0x578: Pop(1); Push(Stack[-4] + Stack[-1]);
0x579: Push((int) 3)
0x57a: Pop(2); Push(Stack[-2] % Stack[-1]);
0x57b: @ SetVariable(Stack[-2], Stack[-1])
0x57c: Pop(2)
0x57d: GOTO 0x582

0x57e: Push("voice_common") // @poff=206
0x57f: Push((int) 0)
0x580: @ SetVariable(Stack[-2], Stack[-1])
0x581: Pop(2)
0x582: GOTO 0x595

0x583: PushEmpty(bool, object)
0x584: Stack[-7] = Stack[-1]
0x585: Call2 0x5bc

0x586: Pop(1)
0x587: Pop(1); Push((bool) Stack[-1] == 0)
0x588: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x589: PushEmpty(bool, object)
0x58a: Stack[-7] = Stack[-1]
0x58b: Call2 0x597

0x58c: Pop(1)
0x58d: Pop(1); Push((bool) Stack[-1] == 0)
0x58e: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58f: Stack[-6] = (bool) 0
0x590: Return(); Pop(4)

0x591: Push("voice_common") // @poff=206
0x592: Push((int) 1)
0x593: @ SetVariable(Stack[-2], Stack[-1])
0x594: Pop(2)
0x595: Stack[-6] = (bool) 1
0x596: Return(); Pop(4)

0x597: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x598: Stack[-5] = "c" // @poff=232
0x599: Stack[-4] = (int) 0
0x59a: Push((int) 1)
0x59b: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x59c: Push((int) 1)
0x59d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x59e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x59f: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x5a0: Pop(1)
0x5a1: Pop(0); Push((bool) Stack[-3] == 0)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x5a3: GOTO 0x5a7

0x5a4: Push((int) 1)
0x5a5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5a6: GOTO 0x59a

0x5a7: Pop(0); Push((bool) Stack[-4] == 0)
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a9: Stack[-12] = (bool) 0
0x5aa: Return(); Pop(10)

0x5ab: Stack[-2] = (int) 0
0x5ac: Push((int) 1)
0x5ad: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5af: @ irand(Stack[-2], Stack[-4])
0x5b0: Pop(0)
0x5b1: Push((int) 1)
0x5b2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5b3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5b4: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x5b5: Pop(1)
0x5b6: PushEmpty(bool, string)
0x5b7: Stack[-3] = Stack[-1]
0x5b8: Call2 0x5f4

0x5b9: Stack[-2] = Stack[-14]
0x5ba: Pop(2)
0x5bb: Return(); Pop(10)

0x5bc: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5bd: Push("d") // @poff=202
0x5be: PushEmpty(int)
0x5bf: Call2 0x624

0x5c0: Pop(0)
0x5c1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5c2: Push("m") // @poff=260
0x5c3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5c4: Stack[-4] = (int) 0
0x5c5: Push((int) 1)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5c7: Push((int) 1)
0x5c8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5c9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5ca: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x5cb: Pop(1)
0x5cc: Pop(0); Push((bool) Stack[-3] == 0)
0x5cd: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5ce: GOTO 0x5d2

0x5cf: Push((int) 1)
0x5d0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5d1: GOTO 0x5c5

0x5d2: Pop(0); Push((bool) Stack[-4] == 0)
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d4: Stack[-12] = (bool) 0
0x5d5: Return(); Pop(10)

0x5d6: Stack[-2] = (int) 0
0x5d7: Push((int) 1)
0x5d8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5da: @ irand(Stack[-2], Stack[-4])
0x5db: Pop(0)
0x5dc: Push((int) 1)
0x5dd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5de: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5df: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x5e0: Pop(1)
0x5e1: PushEmpty(bool, string)
0x5e2: Stack[-3] = Stack[-1]
0x5e3: Call2 0x5f4

0x5e4: Stack[-2] = Stack[-14]
0x5e5: Pop(2)
0x5e6: Return(); Pop(10)

0x5e7: PushEmpty(float, float, float, float)
0x5e8: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x5e9: Pop(0)
0x5ea: Push((bool) 0)
0x5eb: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5ec: Pop(1)
0x5ed: Return(); Pop(4)

0x5ee: PushEmpty(float, float, float, float)
0x5ef: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x5f0: Pop(0)
0x5f1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x5f2: Pop(0)
0x5f3: Return(); Pop(4)

0x5f4: PushEmpty(bool, bool)
0x5f5: PushEmpty(bool)
0x5f6: Call2 0x653

0x5f7: Pop(0)
0x5f8: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5f9: @ lshHasSpeech(Stack[-1], Stack[-3])
0x5fa: Pop(0)
0x5fb: Push(Stack[-1])
0x5fc: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5fd: @ lshPlaySpeech(Stack[-3])
0x5fe: Pop(0)
0x5ff: Stack[-4] = (bool) 1
0x600: Return(); Pop(2)

0x601: Stack[-4] = (bool) 0
0x602: Return(); Pop(2)

0x603: PushEmpty(bool)
0x604: Call2 0x653

0x605: Pop(0)
0x606: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x607: @ lshStopSpeech()
0x608: Pop(0)
0x609: Return(); Pop(0)

0x60a: PushEmpty(object, object)
0x60b: @ self(Stack[-1])
0x60c: Pop(0)
0x60d: Stack[-1] = Stack[-3]
0x60e: Return(); Pop(2)

0x60f: Stack[-1] = 0
0x610: PushEmpty(float, float)
0x611: Pop(0); Push(Stack[-3] | Stack[-3]);
0x612: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x613: Push((float)9.999999974752427e-07)
0x614: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x615: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x616: Stack[-4] = [0.0, 0.0, 0.0]
0x617: Return(); Pop(2)

0x618: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x619: Return(); Pop(2)

0x61a: PushEmpty(int, int)
0x61b: @ GetVariable(Stack[-3], Stack[-1])
0x61c: Pop(0)
0x61d: Stack[-1] = Stack[-4]
0x61e: Return(); Pop(2)

0x61f: PushEmpty(float, float)
0x620: @ GetGameTime(Stack[-1])
0x621: Pop(0)
0x622: Stack[-1] = Stack[-3]
0x623: Return(); Pop(2)

0x624: PushEmpty(float, float)
0x625: @ GetGameTime(Stack[-1])
0x626: Pop(0)
0x627: Push((int) 1)
0x628: PushEmpty(int)
0x629: Push((int) 24)
0x62a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x62b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x62c: Return(); Pop(2)

0x62d: PushEmpty()
0x62e: PushEmpty(int)
0x62f: Call2 0x624

0x630: Pop(0)
0x631: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x632: Return(); Pop(0)

0x633: PushEmpty(string, string)
0x634: Stack[-1] = "idle" // @poff=146
0x635: Push(Stack[-3])
0x636: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x637: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x638: Stack[-1] = Stack[-4]
0x639: Return(); Pop(2)

0x63a: PushEmpty(int, bool, int, bool)
0x63b: Stack[-2] = (int) 0
0x63c: Push("all") // @poff=138
0x63d: PushEmpty(string, int)
0x63e: Stack[-5] = Stack[-1]
0x63f: Call2 0x633

0x640: Pop(1)
0x641: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x642: Pop(2)
0x643: Pop(0); Push((bool) Stack[-1] == 0)
0x644: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x645: GOTO 0x649

0x646: Push((int) 1)
0x647: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x648: GOTO 0x63c

0x649: Stack[-2] = Stack[-5]
0x64a: Return(); Pop(4)

0x64b: Stack[-1] = (int) 515531
0x64c: Return(); Pop(0)

0x64d: Stack[-1] = (int) 502857
0x64e: Return(); Pop(0)

0x64f: Stack[-1] = "ui/NPC_BigVlad.png" // @poff=264
0x650: Return(); Pop(0)

0x651: Stack[-1] = "ui/NPC_BigVlad_b.png" // @poff=302
0x652: Return(); Pop(0)

0x653: Stack[-1] = (bool) 1
0x654: Return(); Pop(0)

0x655: PushEmpty(object, object)
0x656: Push("k2q01") // @poff=344
0x657: Push((int) 3)
0x658: @ SetVariable(Stack[-2], Stack[-1])
0x659: Pop(2)
0x65a: PushEmpty(object)
0x65b: Call2 0x6be

0x65c: Stack[-1] = Stack[-2]
0x65d: Pop(1)
0x65e: Push("k2q01BigVladGotoOspina") // @poff=356
0x65f: Push("pt_map_ospina") // @poff=402
0x660: Push((int) 1)
0x661: Push((int) 508649)
0x662: PushEmpty(float)
0x663: Call2 0x61f

0x664: Pop(0)
0x665: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=430
0x666: Pop(5)
0x667: PushEmpty()
0x668: Call2 0x688

0x669: Pop(0)
0x66a: Return(); Pop(2)

0x66b: Stack[-1] = 0
0x66c: PushEmpty()
0x66d: PushEmpty(object, string, float)
0x66e: PushEmpty(object)
0x66f: Call2 0x6be

0x670: Stack[-1] = Stack[-4]
0x671: Pop(1)
0x672: Stack[-2] = "pt_map_ospina" // @poff=402
0x673: Stack[-1] = (int) 2
0x674: Call2 0x6cf

0x675: Pop(3)
0x676: PushEmpty(object)
0x677: Call2 0x6be

0x678: Pop(0)
0x679: @@ ShowMap(Stack[-1]); Obj=2 // @poff=438
0x67a: Pop(1)
0x67b: Return(); Pop(0)

0x67c: PushEmpty()
0x67d: PushEmpty(int, string)
0x67e: Stack[-1] = "k2q01" // @poff=344
0x67f: Call2 0x61a

0x680: Pop(1)
0x681: Push((int) 2)
0x682: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x683: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x684: Stack[-2] = (bool) 1
0x685: Return(); Pop(0)

0x686: Stack[-2] = (bool) 0
0x687: Return(); Pop(0)

0x688: PushEmpty(object, object)
0x689: Push((int) 464)
0x68a: Push((int) 1)
0x68b: Push((int) 527780)
0x68c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x68d: Pop(3)
0x68e: PushEmpty(bool, object, int)
0x68f: Stack[-4] = Stack[-2]
0x690: Stack[-1] = (int) 461
0x691: Call2 0x6a2

0x692: Pop(3)
0x693: Return(); Pop(2)

0x694: Stack[-1] = 0
0x695: PushEmpty(object, object)
0x696: @ GetDiaryRoot(Stack[-1])
0x697: Pop(0)
0x698: Pop(0); Push((bool) Stack[-1] == 0)
0x699: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69a: Push("Can't retrieve diary root") // @poff=446
0x69b: @ Trace(Stack[-1])
0x69c: Pop(1)
0x69d: Stack[-3] = (bool) 0
0x69e: Return(); Pop(2)

0x69f: Stack[-1] = Stack[-3]
0x6a0: Return(); Pop(2)

0x6a1: Stack[-1] = 0
0x6a2: PushEmpty(object, object, int, object, object, int)
0x6a3: PushEmpty(object)
0x6a4: Call2 0x695

0x6a5: Stack[-1] = Stack[-4]
0x6a6: Pop(1)
0x6a7: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=498
0x6a8: Pop(0)
0x6a9: Pop(0); Push((bool) Stack[-2] == 0)
0x6aa: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6ab: Push("Can't find diary parent with id: ") // @poff=503
0x6ac: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6ad: @ Trace(Stack[-1])
0x6ae: Pop(1)
0x6af: Stack[-9] = (bool) 0
0x6b0: Return(); Pop(6)

0x6b1: @@ AddChild(Stack[-8]); Obj=2 // @poff=571
0x6b2: Pop(0)
0x6b3: Push((int) 7)
0x6b4: @ SendWorldWndMessage(Stack[-1])
0x6b5: Pop(1)
0x6b6: @@ GetCategory(Stack[-1]); Obj=8 // @poff=580
0x6b7: Pop(0)
0x6b8: @ SetDiarySection(Stack[-1])
0x6b9: Pop(0)
0x6ba: Stack[-9] = (bool) 0
0x6bb: Return(); Pop(6)

0x6bc: Stack[-2] = 0
0x6bd: Stack[-3] = 0
0x6be: PushEmpty(object, object, object, object)
0x6bf: @ GetMainOutdoorScene(Stack[-2])
0x6c0: Pop(0)
0x6c1: Pop(0); PushNull((bool) Stack[-2] == 0)
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c3: Push("Can't find main outdoor scene") // @poff=592
0x6c4: @ Trace(Stack[-1])
0x6c5: Pop(1)
0x6c6: Stack[-1] = 0
0x6c7: Stack[-1] = Stack[-5]
0x6c8: Return(); Pop(4)

0x6c9: @@ GetMap(Stack[-1]); Obj=2 // @poff=652
0x6ca: Pop(0)
0x6cb: Stack[-1] = Stack[-5]
0x6cc: Return(); Pop(4)

0x6cd: Stack[-1] = 0
0x6ce: Stack[-2] = 0
0x6cf: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x6d0: @ GetMainOutdoorScene(Stack[-2])
0x6d1: Pop(0)
0x6d2: Pop(0); PushNull((bool) Stack[-2] == 0)
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d4: Push("Can't find main outdoor scene") // @poff=592
0x6d5: @ Trace(Stack[-1])
0x6d6: Pop(1)
0x6d7: Return(); Pop(8)

0x6d8: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=659
0x6d9: Pop(0)
0x6da: Pop(0); Push((bool) Stack[-1] == 0)
0x6db: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6dc: Push("Warning: outdoor scene locator ") // @poff=670
0x6dd: Pop(1); Push(Stack[-1] + Stack[-11]);
0x6de: Push(" doesnt exist") // @poff=734
0x6df: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6e0: @ Trace(Stack[-1])
0x6e1: Pop(1)
0x6e2: @@ GetMap(Stack[-11]); Obj=2 // @poff=652
0x6e3: Pop(0)
0x6e4: Pop(0); PushNull((bool) Stack[-11] == 0)
0x6e5: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e6: Push("Can't find map") // @poff=762
0x6e7: @ Trace(Stack[-1])
0x6e8: Pop(1)
0x6e9: Return(); Pop(8)

0x6ea: Push(CvectorIndex(Stack[-4], 0))
0x6eb: Push(CvectorIndex(Stack[-5], 2))
0x6ec: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=792
0x6ed: Pop(2)
0x6ee: Return(); Pop(8)

0x6ef: Stack[-2] = 0
0x6f0: PushEmpty(int, int)
0x6f1: Push("branch") // @poff=805
0x6f2: @ GetVariable(Stack[-1], Stack[-2])
0x6f3: Pop(1)
0x6f4: Push((int) 0)
0x6f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f7: Stack[-3] = (int) 1
0x6f8: Return(); Pop(2)

0x6f9: GOTO 0x6ff

0x6fa: Push((int) 1)
0x6fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fd: Stack[-3] = (int) 2
0x6fe: Return(); Pop(2)

0x6ff: Stack[-3] = (int) 3
0x700: Return(); Pop(2)

0x701: PushEmpty()
0x702: Push(GlobalVars[1])
0x703: Pop(1); Push((bool) Stack[-1] == 0)
0x704: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x705: PushEmpty(int, object)
0x706: Stack[-3] = Stack[-1]
0x707: Push(-2, 1); TaskCall(3)
0x708: Call2 0x139

0x709: Pop(-2, 1); TaskReturn
0x70a: Pop(2)
0x70b: Push(GlobalVars[1])
0x70c: Stack[-1] = (bool) 1
0x70d: GlobalVars[1] = Stack[-1]; Pop(1)
0x70e: PushEmpty(bool, int)
0x70f: Stack[-1] = (int) 2
0x710: Call2 0x62d

0x711: Pop(1)
0x712: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x713: PushEmpty(int, object)
0x714: Stack[-3] = Stack[-1]
0x715: Push(-2, 1); TaskCall(1)
0x716: Call2 0xd

0x717: Pop(-2, 1); TaskReturn
0x718: Pop(2)
0x719: Return(); Pop(0)

0x71a: PushEmpty(bool, int)
0x71b: Stack[-1] = (int) 12
0x71c: Call2 0x62d

0x71d: Pop(1)
0x71e: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x71f: PushEmpty(int, object)
0x720: Stack[-3] = Stack[-1]
0x721: Push(-2, 1); TaskCall(5)
0x722: Call2 0x211

0x723: Pop(-2, 1); TaskReturn
0x724: Pop(2)
0x725: Return(); Pop(0)

0x726: PushEmpty(int, object)
0x727: Stack[-3] = Stack[-1]
0x728: Push(-2, 1); TaskCall(7)
0x729: Call2 0x314

0x72a: Pop(-2, 1); TaskReturn
0x72b: Pop(2)
0x72c: Return(); Pop(0)

