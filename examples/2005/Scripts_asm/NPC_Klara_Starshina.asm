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
	W:ui/NPC_Starshina.png
	W:ui/NPC_Starshina_b.png
	W:k8q01
	W:ook11Starshina1
	W:k11q01
	W:quest_k11_01
	W:place_burah
	W:ook11Starshina2
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f0053007400610072007300680069006e0061002e0070006e0067000000750069002f004e00500043005f0053007400610072007300680069006e0061005f0062002e0070006e00670000006b00380071003000310000006f006f006b003100310053007400610072007300680069006e006100310000006b00310031007100300031000000710075006500730074005f006b00310031005f0030003100000070006c006100630065005f006200750072006100680000006f006f006b003100310053007400610072007300680069006e00610032000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x65b
RunTask = 9

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x197 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3d0 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x636 Vars = (int, int)
	GTASK_9 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x6ad Vars = (int)
		EVENT_6 Op = 0x6d3 Vars = ()
		EVENT_5 Op = 0x6e2 Vars = ()
		EVENT_45 Op = 0x6ef Vars = (bool)
		EVENT_0 Op = 0x6fb Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x77f

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
0x11: Call2 0x886

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x7d9

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 130.0
0x19: Call2 0x784

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x8d0

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x8ce

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x8d2

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x8d4

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x99c

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
0x55: Call2 0x7c8

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
0x63: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x98

0x67: Pop(1)
0x68: Push((int) 525528)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 525529)
0x6e: Push((int) -1)
0x6f: Push((int) 26885)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 529271)
0x73: Push((int) -1)
0x74: Push((int) 30724)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0x8d6

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x863

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all") // @poff=138
0x8a: Push("idle") // @poff=146
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all") // @poff=138
0x93: Push("idle") // @poff=146
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0x8d6

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-3] = Stack[-2]
0xa4: Push("") // @poff=102
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0x86a

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x87f

0xb3: Pop(0)
0xb4: Push((int) 26884)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral" // @poff=89
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 525528)
0xbc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbd: Pop(1)
0xbe: @@@ ClearReplies(); Obj=0 // @poff=116
0xbf: Pop(0)
0xc0: Push((int) 525529)
0xc1: Push((int) -1)
0xc2: Push((int) 26885)
0xc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc4: Pop(3)
0xc5: Push((int) 529271)
0xc6: Push((int) -1)
0xc7: Push((int) 30724)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xcc: PushEmpty(bool)
0xcd: Call2 0x8d6

0xce: Pop(0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd0: @ lshStopAnimation()
0xd1: Pop(0)
0xd2: GOTO 0xd5

0xd3: @ StopAnimation()
0xd4: Pop(0)
0xd5: Return(); Pop(0)

0xd6: GOTO 0xaf

0xd7: Return(); Pop(0)

0xd8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xda: PushEmpty(bool, object)
0xdb: PushEmpty(object)
0xdc: Call2 0x886

0xdd: Stack[-1] = Stack[-2]
0xde: Pop(1)
0xdf: Call2 0x7d9

0xe0: Pop(2)
0xe1: PushEmpty(bool, object, float)
0xe2: Stack[-12] = Stack[-2]
0xe3: Stack[-1] = (float) 130.0
0xe4: Call2 0x784

0xe5: Pop(2)
0xe6: Pop(1); Push((bool) Stack[-1] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe8: Stack[-10] = (int) -2
0xe9: Return(); Pop(8)

0xea: @ CreateDialog(Stack[-4])
0xeb: Pop(0)
0xec: PushEmpty(int)
0xed: Call2 0x8d0

0xee: Pop(0)
0xef: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0xf0: Pop(1)
0xf1: PushEmpty(int)
0xf2: Call2 0x8ce

0xf3: Pop(0)
0xf4: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0xf5: Pop(1)
0xf6: PushEmpty(string)
0xf7: Call2 0x8d2

0xf8: Pop(0)
0xf9: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0xfa: Pop(1)
0xfb: PushEmpty(string)
0xfc: Call2 0x8d4

0xfd: Pop(0)
0xfe: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0xff: Pop(1)
0x100: PushEmpty(int)
0x101: Call2 0x99c

0x102: Pop(0)
0x103: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x104: Pop(1)
0x105: Stack[-2] = (int) -1
0x106: @ IsOverrideActive(Stack[-3])
0x107: Pop(0)
0x108: Push(Stack[-3])
0x109: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10a: Stack[-10] = (int) -2
0x10b: Return(); Pop(8)

0x10c: @ DoDialog(Stack[-4])
0x10d: Pop(0)
0x10e: PushEmpty(object, object)
0x10f: Stack[-11] = Stack[-2]
0x110: Stack[-6] = Stack[-1]
0x111: Push(-2, 4); TaskCall(4)
0x112: Call2 0x129

0x113: Pop(-2, 4); TaskReturn
0x114: Pop(2)
0x115: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x116: Pop(0)
0x117: Pop(0); Push((bool) Stack[-1] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: @ sync()
0x11a: Pop(0)
0x11b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x11c: Pop(0)
0x11d: GOTO 0x117

0x11e: PushEmpty(object)
0x11f: Stack[-10] = Stack[-1]
0x120: Call2 0x7c8

0x121: Pop(1)
0x122: @ StopDialog(Stack[-4])
0x123: Pop(0)
0x124: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x125: Pop(0)
0x126: Stack[-2] = Stack[-10]
0x127: Return(); Pop(8)

0x128: Stack[-4] = 0
0x129: PushEmpty()
0x12a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x12b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x12c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x12d: Push((int) 1)
0x12e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x904

0x132: Pop(1)
0x133: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral" // @poff=89
0x136: Call2 0x181

0x137: Pop(1)
0x138: Push((int) 526430)
0x139: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13a: Pop(1)
0x13b: @@@ ClearReplies(); Obj=0 // @poff=116
0x13c: Pop(0)
0x13d: Push((int) 526431)
0x13e: Push((int) 27707)
0x13f: Push((int) 27706)
0x140: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x141: Pop(3)
0x142: Push((int) 529003)
0x143: Push((int) 30441)
0x144: Push((int) 30440)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x146: Pop(3)
0x147: GOTO 0x163

0x148: PushEmpty(string)
0x149: Stack[-1] = "Neutral" // @poff=89
0x14a: Call2 0x181

0x14b: Pop(1)
0x14c: Push((int) 526438)
0x14d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14e: Pop(1)
0x14f: @@@ ClearReplies(); Obj=0 // @poff=116
0x150: Pop(0)
0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x153: Call2 0x910

0x154: Pop(1)
0x155: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x156: Push((int) 526450)
0x157: Push((int) 27726)
0x158: Push((int) 27725)
0x159: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15a: Pop(3)
0x15b: Push((int) 526439)
0x15c: Push((int) -1)
0x15d: Push((int) 27714)
0x15e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15f: Pop(3)
0x160: GOTO 0x163

0x161: Return(); Pop(0)

0x162: GOTO 0x12d

0x163: PushEmpty(bool)
0x164: Call2 0x8d6

0x165: Pop(0)
0x166: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x167: @ lshWaitForAnimEnd()
0x168: Pop(0)
0x169: Push( Stack[3 + Tasks[-1].StackPointer] )
0x16a: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16b: GOTO 0x171

0x16c: PushEmpty(string)
0x16d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x16e: Call2 0x863

0x16f: Pop(1)
0x170: GOTO 0x167

0x171: GOTO 0x180

0x172: Push("all") // @poff=138
0x173: Push("idle") // @poff=146
0x174: @ PlayAnimation(Stack[-2], Stack[-1])
0x175: Pop(2)
0x176: @ WaitForAnimEnd()
0x177: Pop(0)
0x178: Push( Stack[3 + Tasks[-1].StackPointer] )
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: GOTO 0x180

0x17b: Push("all") // @poff=138
0x17c: Push("idle") // @poff=146
0x17d: @ PlayAnimation(Stack[-2], Stack[-1])
0x17e: Pop(2)
0x17f: GOTO 0x176

0x180: Return(); Pop(0)

0x181: PushEmpty()
0x182: PushEmpty(bool)
0x183: Call2 0x8d6

0x184: Pop(0)
0x185: Pop(1); Push((bool) Stack[-1] == 0)
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: Return(); Pop(0)

0x188: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: Return(); Pop(0)

0x18b: PushEmpty(string, bool)
0x18c: Stack[-3] = Stack[-2]
0x18d: Push("") // @poff=102
0x18e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x190: Stack[-1] = (bool) 0
0x191: GOTO 0x193

0x192: Stack[-1] = (bool) 1
0x193: Call2 0x86a

0x194: Pop(2)
0x195: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x196: Return(); Pop(0)

0x197: PushEmpty()
0x198: Push((int) 1)
0x199: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x19a: PushEmpty()
0x19b: Call2 0x87f

0x19c: Pop(0)
0x19d: Push((int) 27712)
0x19e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a0: PushEmpty(object, object)
0x1a1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a3: Call2 0x8d8

0x1a4: Pop(2)
0x1a5: Push((int) 27732)
0x1a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a8: PushEmpty(object, object)
0x1a9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ab: Call2 0x8e1

0x1ac: Pop(2)
0x1ad: Push((int) 27734)
0x1ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b0: PushEmpty(object, object)
0x1b1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b3: Call2 0x8e1

0x1b4: Pop(2)
0x1b5: Push((int) 27705)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1b8: PushEmpty(bool, object)
0x1b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ba: Call2 0x904

0x1bb: Pop(1)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = "Neutral" // @poff=89
0x1bf: Call2 0x181

0x1c0: Pop(1)
0x1c1: Push((int) 526430)
0x1c2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c3: Pop(1)
0x1c4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c5: Pop(0)
0x1c6: Push((int) 526431)
0x1c7: Push((int) 27707)
0x1c8: Push((int) 27706)
0x1c9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ca: Pop(3)
0x1cb: Push((int) 529003)
0x1cc: Push((int) 30441)
0x1cd: Push((int) 30440)
0x1ce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral" // @poff=89
0x1d3: Call2 0x181

0x1d4: Pop(1)
0x1d5: Push((int) 526438)
0x1d6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d7: Pop(1)
0x1d8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d9: Pop(0)
0x1da: PushEmpty(bool, object)
0x1db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1dc: Call2 0x910

0x1dd: Pop(1)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: Push((int) 526450)
0x1e0: Push((int) 27726)
0x1e1: Push((int) 27725)
0x1e2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e3: Pop(3)
0x1e4: Push((int) 526439)
0x1e5: Push((int) -1)
0x1e6: Push((int) 27714)
0x1e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e8: Pop(3)
0x1e9: Return(); Pop(0)

0x1ea: Push((int) 27726)
0x1eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1ed: PushEmpty(string)
0x1ee: Stack[-1] = "Neutral" // @poff=89
0x1ef: Call2 0x181

0x1f0: Pop(1)
0x1f1: Push((int) 526451)
0x1f2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f3: Pop(1)
0x1f4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f5: Pop(0)
0x1f6: Push((int) 526452)
0x1f7: Push((int) 30435)
0x1f8: Push((int) 27727)
0x1f9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fa: Pop(3)
0x1fb: Push((int) 528997)
0x1fc: Push((int) -1)
0x1fd: Push((int) 30434)
0x1fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ff: Pop(3)
0x200: Return(); Pop(0)

0x201: Push((int) 30435)
0x202: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x204: PushEmpty(string)
0x205: Stack[-1] = "Neutral" // @poff=89
0x206: Call2 0x181

0x207: Pop(1)
0x208: Push((int) 528998)
0x209: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20a: Pop(1)
0x20b: @@@ ClearReplies(); Obj=0 // @poff=116
0x20c: Pop(0)
0x20d: Push((int) 528999)
0x20e: Push((int) 27728)
0x20f: Push((int) 30436)
0x210: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x211: Pop(3)
0x212: Return(); Pop(0)

0x213: Push((int) 27728)
0x214: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x216: PushEmpty(string)
0x217: Stack[-1] = "Neutral" // @poff=89
0x218: Call2 0x181

0x219: Pop(1)
0x21a: Push((int) 526453)
0x21b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21c: Pop(1)
0x21d: @@@ ClearReplies(); Obj=0 // @poff=116
0x21e: Pop(0)
0x21f: Push((int) 526454)
0x220: Push((int) 27731)
0x221: Push((int) 27729)
0x222: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x223: Pop(3)
0x224: Push((int) 526455)
0x225: Push((int) 27733)
0x226: Push((int) 27730)
0x227: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x228: Pop(3)
0x229: Return(); Pop(0)

0x22a: Push((int) 27733)
0x22b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x22d: PushEmpty(string)
0x22e: Stack[-1] = "Neutral" // @poff=89
0x22f: Call2 0x181

0x230: Pop(1)
0x231: Push((int) 526458)
0x232: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x233: Pop(1)
0x234: @@@ ClearReplies(); Obj=0 // @poff=116
0x235: Pop(0)
0x236: Push((int) 526459)
0x237: Push((int) -1)
0x238: Push((int) 27734)
0x239: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23a: Pop(3)
0x23b: Return(); Pop(0)

0x23c: Push((int) 27731)
0x23d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x23f: PushEmpty(string)
0x240: Stack[-1] = "Neutral" // @poff=89
0x241: Call2 0x181

0x242: Pop(1)
0x243: Push((int) 526456)
0x244: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x245: Pop(1)
0x246: @@@ ClearReplies(); Obj=0 // @poff=116
0x247: Pop(0)
0x248: Push((int) 529001)
0x249: Push((int) 30439)
0x24a: Push((int) 30438)
0x24b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24c: Pop(3)
0x24d: Return(); Pop(0)

0x24e: Push((int) 30439)
0x24f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x251: PushEmpty(string)
0x252: Stack[-1] = "Neutral" // @poff=89
0x253: Call2 0x181

0x254: Pop(1)
0x255: Push((int) 529002)
0x256: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x257: Pop(1)
0x258: @@@ ClearReplies(); Obj=0 // @poff=116
0x259: Pop(0)
0x25a: Push((int) 526457)
0x25b: Push((int) -1)
0x25c: Push((int) 27732)
0x25d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25e: Pop(3)
0x25f: Return(); Pop(0)

0x260: Push((int) 30441)
0x261: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x263: PushEmpty(string)
0x264: Stack[-1] = "Neutral" // @poff=89
0x265: Call2 0x181

0x266: Pop(1)
0x267: Push((int) 529004)
0x268: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x269: Pop(1)
0x26a: @@@ ClearReplies(); Obj=0 // @poff=116
0x26b: Pop(0)
0x26c: Push((int) 529005)
0x26d: Push((int) 27707)
0x26e: Push((int) 30442)
0x26f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x270: Pop(3)
0x271: Push((int) 529006)
0x272: Push((int) 30445)
0x273: Push((int) 30444)
0x274: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x275: Pop(3)
0x276: Return(); Pop(0)

0x277: Push((int) 30445)
0x278: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x27a: PushEmpty(string)
0x27b: Stack[-1] = "Neutral" // @poff=89
0x27c: Call2 0x181

0x27d: Pop(1)
0x27e: Push((int) 529007)
0x27f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x280: Pop(1)
0x281: @@@ ClearReplies(); Obj=0 // @poff=116
0x282: Pop(0)
0x283: Push((int) 529008)
0x284: Push((int) 27707)
0x285: Push((int) 30446)
0x286: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x287: Pop(3)
0x288: Return(); Pop(0)

0x289: Push((int) 27707)
0x28a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x28c: PushEmpty(string)
0x28d: Stack[-1] = "Neutral" // @poff=89
0x28e: Call2 0x181

0x28f: Pop(1)
0x290: Push((int) 526432)
0x291: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x292: Pop(1)
0x293: @@@ ClearReplies(); Obj=0 // @poff=116
0x294: Pop(0)
0x295: Push((int) 526433)
0x296: Push((int) 27709)
0x297: Push((int) 27708)
0x298: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x299: Pop(3)
0x29a: Return(); Pop(0)

0x29b: Push((int) 27709)
0x29c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x29e: PushEmpty(string)
0x29f: Stack[-1] = "Neutral" // @poff=89
0x2a0: Call2 0x181

0x2a1: Pop(1)
0x2a2: Push((int) 526434)
0x2a3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a4: Pop(1)
0x2a5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a6: Pop(0)
0x2a7: Push((int) 526435)
0x2a8: Push((int) 27711)
0x2a9: Push((int) 27710)
0x2aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ab: Pop(3)
0x2ac: Push((int) 529009)
0x2ad: Push((int) 27711)
0x2ae: Push((int) 30448)
0x2af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b0: Pop(3)
0x2b1: Return(); Pop(0)

0x2b2: Push((int) 27711)
0x2b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Neutral" // @poff=89
0x2b7: Call2 0x181

0x2b8: Pop(1)
0x2b9: Push((int) 526436)
0x2ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2bb: Pop(1)
0x2bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x2bd: Pop(0)
0x2be: Push((int) 529010)
0x2bf: Push((int) 30450)
0x2c0: Push((int) 30449)
0x2c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 30450)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Neutral" // @poff=89
0x2c9: Call2 0x181

0x2ca: Pop(1)
0x2cb: Push((int) 529011)
0x2cc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2cd: Pop(1)
0x2ce: @@@ ClearReplies(); Obj=0 // @poff=116
0x2cf: Pop(0)
0x2d0: Push((int) 526437)
0x2d1: Push((int) -1)
0x2d2: Push((int) 27712)
0x2d3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2d7: PushEmpty(bool)
0x2d8: Call2 0x8d6

0x2d9: Pop(0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2db: @ lshStopAnimation()
0x2dc: Pop(0)
0x2dd: GOTO 0x2e0

0x2de: @ StopAnimation()
0x2df: Pop(0)
0x2e0: Return(); Pop(0)

0x2e1: GOTO 0x198

0x2e2: Return(); Pop(0)

0x2e3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2e4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2e5: PushEmpty(bool, object)
0x2e6: PushEmpty(object)
0x2e7: Call2 0x886

0x2e8: Stack[-1] = Stack[-2]
0x2e9: Pop(1)
0x2ea: Call2 0x7d9

0x2eb: Pop(2)
0x2ec: PushEmpty(bool, object, float)
0x2ed: Stack[-12] = Stack[-2]
0x2ee: Stack[-1] = (float) 130.0
0x2ef: Call2 0x784

0x2f0: Pop(2)
0x2f1: Pop(1); Push((bool) Stack[-1] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: Stack[-10] = (int) -2
0x2f4: Return(); Pop(8)

0x2f5: @ CreateDialog(Stack[-4])
0x2f6: Pop(0)
0x2f7: PushEmpty(int)
0x2f8: Call2 0x8d0

0x2f9: Pop(0)
0x2fa: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x2fb: Pop(1)
0x2fc: PushEmpty(int)
0x2fd: Call2 0x8ce

0x2fe: Pop(0)
0x2ff: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x300: Pop(1)
0x301: PushEmpty(string)
0x302: Call2 0x8d2

0x303: Pop(0)
0x304: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x305: Pop(1)
0x306: PushEmpty(string)
0x307: Call2 0x8d4

0x308: Pop(0)
0x309: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x30a: Pop(1)
0x30b: PushEmpty(int)
0x30c: Call2 0x99c

0x30d: Pop(0)
0x30e: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x30f: Pop(1)
0x310: Stack[-2] = (int) -1
0x311: @ IsOverrideActive(Stack[-3])
0x312: Pop(0)
0x313: Push(Stack[-3])
0x314: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x315: Stack[-10] = (int) -2
0x316: Return(); Pop(8)

0x317: @ DoDialog(Stack[-4])
0x318: Pop(0)
0x319: PushEmpty(object, object)
0x31a: Stack[-11] = Stack[-2]
0x31b: Stack[-6] = Stack[-1]
0x31c: Push(-2, 4); TaskCall(6)
0x31d: Call2 0x334

0x31e: Pop(-2, 4); TaskReturn
0x31f: Pop(2)
0x320: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x321: Pop(0)
0x322: Pop(0); Push((bool) Stack[-1] == 0)
0x323: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x324: @ sync()
0x325: Pop(0)
0x326: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x327: Pop(0)
0x328: GOTO 0x322

0x329: PushEmpty(object)
0x32a: Stack[-10] = Stack[-1]
0x32b: Call2 0x7c8

0x32c: Pop(1)
0x32d: @ StopDialog(Stack[-4])
0x32e: Pop(0)
0x32f: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x330: Pop(0)
0x331: Stack[-2] = Stack[-10]
0x332: Return(); Pop(8)

0x333: Stack[-4] = 0
0x334: PushEmpty()
0x335: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x336: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x337: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x338: Push((int) 1)
0x339: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x33a: PushEmpty(bool)
0x33b: Stack[-1] = (bool) 0
0x33c: PushEmpty(bool, object)
0x33d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33e: Call2 0x91c

0x33f: Pop(1)
0x340: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x341: PushEmpty(bool, object)
0x342: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x343: Call2 0x928

0x344: Pop(1)
0x345: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x346: Stack[-1] = (bool) 1
0x347: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x348: PushEmpty(object, object)
0x349: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34b: Call2 0x8ea

0x34c: Pop(2)
0x34d: PushEmpty(string)
0x34e: Stack[-1] = "Neutral" // @poff=89
0x34f: Call2 0x3ba

0x350: Pop(1)
0x351: Push((int) 527376)
0x352: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x353: Pop(1)
0x354: @@@ ClearReplies(); Obj=0 // @poff=116
0x355: Pop(0)
0x356: Push((int) 527379)
0x357: Push((int) 28703)
0x358: Push((int) 28702)
0x359: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x35a: Pop(3)
0x35b: GOTO 0x39c

0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Neutral" // @poff=89
0x35e: Call2 0x3ba

0x35f: Pop(1)
0x360: Push((int) 527212)
0x361: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x362: Pop(1)
0x363: @@@ ClearReplies(); Obj=0 // @poff=116
0x364: Pop(0)
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x367: Call2 0x91c

0x368: Pop(1)
0x369: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36a: Push((int) 527339)
0x36b: Push((int) 28658)
0x36c: Push((int) 28657)
0x36d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36e: Pop(3)
0x36f: PushEmpty(bool)
0x370: Stack[-1] = (bool) 1
0x371: PushEmpty(bool)
0x372: Stack[-1] = (bool) 0
0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x375: Call2 0x940

0x376: Pop(1)
0x377: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x378: PushEmpty(bool, object)
0x379: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37a: Call2 0x91c

0x37b: Pop(1)
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: Stack[-1] = (bool) 1
0x37e: IF (Stack[-1] == 1) GOTO 0x38e; Pop(1)

0x37f: PushEmpty(bool)
0x380: Stack[-1] = (bool) 0
0x381: PushEmpty(bool, object)
0x382: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x383: Call2 0x934

0x384: Pop(1)
0x385: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x386: PushEmpty(bool, object)
0x387: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x388: Call2 0x940

0x389: Pop(1)
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: Stack[-1] = (bool) 1
0x38c: IF (Stack[-1] == 1) GOTO 0x38e; Pop(1)

0x38d: Stack[-1] = (bool) 0
0x38e: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x38f: Push((int) 527373)
0x390: Push((int) 28707)
0x391: Push((int) 28696)
0x392: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x393: Pop(3)
0x394: Push((int) 527218)
0x395: Push((int) -1)
0x396: Push((int) 28526)
0x397: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x398: Pop(3)
0x399: GOTO 0x39c

0x39a: Return(); Pop(0)

0x39b: GOTO 0x338

0x39c: PushEmpty(bool)
0x39d: Call2 0x8d6

0x39e: Pop(0)
0x39f: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a0: @ lshWaitForAnimEnd()
0x3a1: Pop(0)
0x3a2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: GOTO 0x3aa

0x3a5: PushEmpty(string)
0x3a6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3a7: Call2 0x863

0x3a8: Pop(1)
0x3a9: GOTO 0x3a0

0x3aa: GOTO 0x3b9

0x3ab: Push("all") // @poff=138
0x3ac: Push("idle") // @poff=146
0x3ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ae: Pop(2)
0x3af: @ WaitForAnimEnd()
0x3b0: Pop(0)
0x3b1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: GOTO 0x3b9

0x3b4: Push("all") // @poff=138
0x3b5: Push("idle") // @poff=146
0x3b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b7: Pop(2)
0x3b8: GOTO 0x3af

0x3b9: Return(); Pop(0)

0x3ba: PushEmpty()
0x3bb: PushEmpty(bool)
0x3bc: Call2 0x8d6

0x3bd: Pop(0)
0x3be: Pop(1); Push((bool) Stack[-1] == 0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3c0: Return(); Pop(0)

0x3c1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: Return(); Pop(0)

0x3c4: PushEmpty(string, bool)
0x3c5: Stack[-3] = Stack[-2]
0x3c6: Push("") // @poff=102
0x3c7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c9: Stack[-1] = (bool) 0
0x3ca: GOTO 0x3cc

0x3cb: Stack[-1] = (bool) 1
0x3cc: Call2 0x86a

0x3cd: Pop(2)
0x3ce: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3cf: Return(); Pop(0)

0x3d0: PushEmpty()
0x3d1: Push((int) 1)
0x3d2: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x3d3: PushEmpty()
0x3d4: Call2 0x87f

0x3d5: Pop(0)
0x3d6: Push((int) 28709)
0x3d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3d9: PushEmpty(object, object)
0x3da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3dc: Call2 0x8f0

0x3dd: Pop(2)
0x3de: Push((int) 28669)
0x3df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e1: PushEmpty(object, object)
0x3e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e4: Call2 0x8f0

0x3e5: Pop(2)
0x3e6: Push((int) 28696)
0x3e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3e9: PushEmpty(object, object)
0x3ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ec: Call2 0x8fe

0x3ed: Pop(2)
0x3ee: Push((int) 28699)
0x3ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x3f1: PushEmpty(bool)
0x3f2: Stack[-1] = (bool) 0
0x3f3: PushEmpty(bool, object)
0x3f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f5: Call2 0x91c

0x3f6: Pop(1)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f8: PushEmpty(bool, object)
0x3f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fa: Call2 0x928

0x3fb: Pop(1)
0x3fc: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fd: Stack[-1] = (bool) 1
0x3fe: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x3ff: PushEmpty(object, object)
0x400: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x401: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x402: Call2 0x8ea

0x403: Pop(2)
0x404: PushEmpty(string)
0x405: Stack[-1] = "Neutral" // @poff=89
0x406: Call2 0x3ba

0x407: Pop(1)
0x408: Push((int) 527376)
0x409: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x40a: Pop(1)
0x40b: @@@ ClearReplies(); Obj=0 // @poff=116
0x40c: Pop(0)
0x40d: Push((int) 527379)
0x40e: Push((int) 28703)
0x40f: Push((int) 28702)
0x410: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x411: Pop(3)
0x412: Return(); Pop(0)

0x413: PushEmpty(string)
0x414: Stack[-1] = "Neutral" // @poff=89
0x415: Call2 0x3ba

0x416: Pop(1)
0x417: Push((int) 527212)
0x418: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x419: Pop(1)
0x41a: @@@ ClearReplies(); Obj=0 // @poff=116
0x41b: Pop(0)
0x41c: PushEmpty(bool, object)
0x41d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41e: Call2 0x91c

0x41f: Pop(1)
0x420: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x421: Push((int) 527339)
0x422: Push((int) 28658)
0x423: Push((int) 28657)
0x424: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x425: Pop(3)
0x426: PushEmpty(bool)
0x427: Stack[-1] = (bool) 1
0x428: PushEmpty(bool)
0x429: Stack[-1] = (bool) 0
0x42a: PushEmpty(bool, object)
0x42b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42c: Call2 0x940

0x42d: Pop(1)
0x42e: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x42f: PushEmpty(bool, object)
0x430: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x431: Call2 0x91c

0x432: Pop(1)
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: Stack[-1] = (bool) 1
0x435: IF (Stack[-1] == 1) GOTO 0x445; Pop(1)

0x436: PushEmpty(bool)
0x437: Stack[-1] = (bool) 0
0x438: PushEmpty(bool, object)
0x439: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43a: Call2 0x934

0x43b: Pop(1)
0x43c: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43d: PushEmpty(bool, object)
0x43e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43f: Call2 0x940

0x440: Pop(1)
0x441: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x442: Stack[-1] = (bool) 1
0x443: IF (Stack[-1] == 1) GOTO 0x445; Pop(1)

0x444: Stack[-1] = (bool) 0
0x445: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x446: Push((int) 527373)
0x447: Push((int) 28707)
0x448: Push((int) 28696)
0x449: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44a: Pop(3)
0x44b: Push((int) 527218)
0x44c: Push((int) -1)
0x44d: Push((int) 28526)
0x44e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44f: Pop(3)
0x450: Return(); Pop(0)

0x451: Push((int) 28707)
0x452: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x453: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x454: PushEmpty(string)
0x455: Stack[-1] = "Neutral" // @poff=89
0x456: Call2 0x3ba

0x457: Pop(1)
0x458: Push((int) 527383)
0x459: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x45a: Pop(1)
0x45b: @@@ ClearReplies(); Obj=0 // @poff=116
0x45c: Pop(0)
0x45d: Push((int) 527384)
0x45e: Push((int) 28697)
0x45f: Push((int) 28708)
0x460: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x461: Pop(3)
0x462: Return(); Pop(0)

0x463: Push((int) 28697)
0x464: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x466: PushEmpty(string)
0x467: Stack[-1] = "Neutral" // @poff=89
0x468: Call2 0x3ba

0x469: Pop(1)
0x46a: Push((int) 527374)
0x46b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x46c: Pop(1)
0x46d: @@@ ClearReplies(); Obj=0 // @poff=116
0x46e: Pop(0)
0x46f: Push((int) 527375)
0x470: Push((int) 28522)
0x471: Push((int) 28698)
0x472: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x473: Pop(3)
0x474: Return(); Pop(0)

0x475: Push((int) 28522)
0x476: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x478: PushEmpty(string)
0x479: Stack[-1] = "Neutral" // @poff=89
0x47a: Call2 0x3ba

0x47b: Pop(1)
0x47c: Push((int) 527214)
0x47d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x47e: Pop(1)
0x47f: @@@ ClearReplies(); Obj=0 // @poff=116
0x480: Pop(0)
0x481: Push((int) 527215)
0x482: Push((int) 28524)
0x483: Push((int) 28523)
0x484: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x485: Pop(3)
0x486: Return(); Pop(0)

0x487: Push((int) 28524)
0x488: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x48a: PushEmpty(string)
0x48b: Stack[-1] = "Neutral" // @poff=89
0x48c: Call2 0x3ba

0x48d: Pop(1)
0x48e: Push((int) 527216)
0x48f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x490: Pop(1)
0x491: @@@ ClearReplies(); Obj=0 // @poff=116
0x492: Pop(0)
0x493: Push((int) 527217)
0x494: Push((int) -1)
0x495: Push((int) 28525)
0x496: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x497: Pop(3)
0x498: Return(); Pop(0)

0x499: Push((int) 28658)
0x49a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x49c: PushEmpty(string)
0x49d: Stack[-1] = "Neutral" // @poff=89
0x49e: Call2 0x3ba

0x49f: Pop(1)
0x4a0: Push((int) 527340)
0x4a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4a2: Pop(1)
0x4a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x4a4: Pop(0)
0x4a5: Push((int) 527355)
0x4a6: Push((int) 28675)
0x4a7: Push((int) 28674)
0x4a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4a9: Pop(3)
0x4aa: Return(); Pop(0)

0x4ab: Push((int) 28675)
0x4ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4ae: PushEmpty(string)
0x4af: Stack[-1] = "Neutral" // @poff=89
0x4b0: Call2 0x3ba

0x4b1: Pop(1)
0x4b2: Push((int) 527356)
0x4b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4b4: Pop(1)
0x4b5: @@@ ClearReplies(); Obj=0 // @poff=116
0x4b6: Pop(0)
0x4b7: Push((int) 527341)
0x4b8: Push((int) 28660)
0x4b9: Push((int) 28659)
0x4ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4bb: Pop(3)
0x4bc: Push((int) 527352)
0x4bd: Push((int) 28671)
0x4be: Push((int) 28670)
0x4bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4c0: Pop(3)
0x4c1: Return(); Pop(0)

0x4c2: Push((int) 28671)
0x4c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4c5: PushEmpty(string)
0x4c6: Stack[-1] = "Neutral" // @poff=89
0x4c7: Call2 0x3ba

0x4c8: Pop(1)
0x4c9: Push((int) 527353)
0x4ca: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4cb: Pop(1)
0x4cc: @@@ ClearReplies(); Obj=0 // @poff=116
0x4cd: Pop(0)
0x4ce: Push((int) 527354)
0x4cf: Push((int) 28662)
0x4d0: Push((int) 28672)
0x4d1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4d2: Pop(3)
0x4d3: Return(); Pop(0)

0x4d4: Push((int) 28660)
0x4d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4d7: PushEmpty(string)
0x4d8: Stack[-1] = "Neutral" // @poff=89
0x4d9: Call2 0x3ba

0x4da: Pop(1)
0x4db: Push((int) 527342)
0x4dc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4dd: Pop(1)
0x4de: @@@ ClearReplies(); Obj=0 // @poff=116
0x4df: Pop(0)
0x4e0: Push((int) 527343)
0x4e1: Push((int) 28662)
0x4e2: Push((int) 28661)
0x4e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4e4: Pop(3)
0x4e5: Return(); Pop(0)

0x4e6: Push((int) 28662)
0x4e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e8: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4e9: PushEmpty(string)
0x4ea: Stack[-1] = "Neutral" // @poff=89
0x4eb: Call2 0x3ba

0x4ec: Pop(1)
0x4ed: Push((int) 527344)
0x4ee: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4ef: Pop(1)
0x4f0: @@@ ClearReplies(); Obj=0 // @poff=116
0x4f1: Pop(0)
0x4f2: Push((int) 527345)
0x4f3: Push((int) 28664)
0x4f4: Push((int) 28663)
0x4f5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4f6: Pop(3)
0x4f7: Return(); Pop(0)

0x4f8: Push((int) 28664)
0x4f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fa: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x4fb: PushEmpty(string)
0x4fc: Stack[-1] = "Neutral" // @poff=89
0x4fd: Call2 0x3ba

0x4fe: Pop(1)
0x4ff: Push((int) 527346)
0x500: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x501: Pop(1)
0x502: @@@ ClearReplies(); Obj=0 // @poff=116
0x503: Pop(0)
0x504: Push((int) 527347)
0x505: Push((int) 28666)
0x506: Push((int) 28665)
0x507: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x508: Pop(3)
0x509: Return(); Pop(0)

0x50a: Push((int) 28666)
0x50b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50c: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x50d: PushEmpty(string)
0x50e: Stack[-1] = "Neutral" // @poff=89
0x50f: Call2 0x3ba

0x510: Pop(1)
0x511: Push((int) 527348)
0x512: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x513: Pop(1)
0x514: @@@ ClearReplies(); Obj=0 // @poff=116
0x515: Pop(0)
0x516: Push((int) 527349)
0x517: Push((int) 28668)
0x518: Push((int) 28667)
0x519: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x51a: Pop(3)
0x51b: Return(); Pop(0)

0x51c: Push((int) 28668)
0x51d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x51f: PushEmpty(string)
0x520: Stack[-1] = "Neutral" // @poff=89
0x521: Call2 0x3ba

0x522: Pop(1)
0x523: Push((int) 527350)
0x524: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x525: Pop(1)
0x526: @@@ ClearReplies(); Obj=0 // @poff=116
0x527: Pop(0)
0x528: Push((int) 527351)
0x529: Push((int) -1)
0x52a: Push((int) 28669)
0x52b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x52c: Pop(3)
0x52d: Return(); Pop(0)

0x52e: Push((int) 28703)
0x52f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x531: PushEmpty(string)
0x532: Stack[-1] = "Neutral" // @poff=89
0x533: Call2 0x3ba

0x534: Pop(1)
0x535: Push((int) 527380)
0x536: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x537: Pop(1)
0x538: @@@ ClearReplies(); Obj=0 // @poff=116
0x539: Pop(0)
0x53a: Push((int) 527213)
0x53b: Push((int) 28693)
0x53c: Push((int) 28521)
0x53d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x53e: Pop(3)
0x53f: Return(); Pop(0)

0x540: Push((int) 28693)
0x541: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x543: PushEmpty(string)
0x544: Stack[-1] = "Neutral" // @poff=89
0x545: Call2 0x3ba

0x546: Pop(1)
0x547: Push((int) 527370)
0x548: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x549: Pop(1)
0x54a: @@@ ClearReplies(); Obj=0 // @poff=116
0x54b: Pop(0)
0x54c: Push((int) 527371)
0x54d: Push((int) 28700)
0x54e: Push((int) 28694)
0x54f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x550: Pop(3)
0x551: Return(); Pop(0)

0x552: Push((int) 28700)
0x553: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x555: PushEmpty(string)
0x556: Stack[-1] = "Neutral" // @poff=89
0x557: Call2 0x3ba

0x558: Pop(1)
0x559: Push((int) 527377)
0x55a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x55b: Pop(1)
0x55c: @@@ ClearReplies(); Obj=0 // @poff=116
0x55d: Pop(0)
0x55e: Push((int) 527378)
0x55f: Push((int) 28695)
0x560: Push((int) 28701)
0x561: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x562: Pop(3)
0x563: Return(); Pop(0)

0x564: Push((int) 28695)
0x565: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x567: PushEmpty(string)
0x568: Stack[-1] = "Neutral" // @poff=89
0x569: Call2 0x3ba

0x56a: Pop(1)
0x56b: Push((int) 527372)
0x56c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56d: Pop(1)
0x56e: @@@ ClearReplies(); Obj=0 // @poff=116
0x56f: Pop(0)
0x570: Push((int) 527381)
0x571: Push((int) 28706)
0x572: Push((int) 28704)
0x573: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x574: Pop(3)
0x575: Return(); Pop(0)

0x576: Push((int) 28706)
0x577: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x579: PushEmpty(string)
0x57a: Stack[-1] = "Neutral" // @poff=89
0x57b: Call2 0x3ba

0x57c: Pop(1)
0x57d: Push((int) 527382)
0x57e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x57f: Pop(1)
0x580: @@@ ClearReplies(); Obj=0 // @poff=116
0x581: Pop(0)
0x582: Push((int) 527385)
0x583: Push((int) -1)
0x584: Push((int) 28709)
0x585: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x586: Pop(3)
0x587: Push((int) 527387)
0x588: Push((int) -1)
0x589: Push((int) 28711)
0x58a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x58b: Pop(3)
0x58c: Return(); Pop(0)

0x58d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x58e: PushEmpty(bool)
0x58f: Call2 0x8d6

0x590: Pop(0)
0x591: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x592: @ lshStopAnimation()
0x593: Pop(0)
0x594: GOTO 0x597

0x595: @ StopAnimation()
0x596: Pop(0)
0x597: Return(); Pop(0)

0x598: GOTO 0x3d1

0x599: Return(); Pop(0)

0x59a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x59b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x59c: PushEmpty(bool, object)
0x59d: PushEmpty(object)
0x59e: Call2 0x886

0x59f: Stack[-1] = Stack[-2]
0x5a0: Pop(1)
0x5a1: Call2 0x7d9

0x5a2: Pop(2)
0x5a3: PushEmpty(bool, object, float)
0x5a4: Stack[-12] = Stack[-2]
0x5a5: Stack[-1] = (float) 130.0
0x5a6: Call2 0x784

0x5a7: Pop(2)
0x5a8: Pop(1); Push((bool) Stack[-1] == 0)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5aa: Stack[-10] = (int) -2
0x5ab: Return(); Pop(8)

0x5ac: @ CreateDialog(Stack[-4])
0x5ad: Pop(0)
0x5ae: PushEmpty(int)
0x5af: Call2 0x8d0

0x5b0: Pop(0)
0x5b1: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x5b2: Pop(1)
0x5b3: PushEmpty(int)
0x5b4: Call2 0x8ce

0x5b5: Pop(0)
0x5b6: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x5b7: Pop(1)
0x5b8: PushEmpty(string)
0x5b9: Call2 0x8d2

0x5ba: Pop(0)
0x5bb: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x5bc: Pop(1)
0x5bd: PushEmpty(string)
0x5be: Call2 0x8d4

0x5bf: Pop(0)
0x5c0: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x5c1: Pop(1)
0x5c2: PushEmpty(int)
0x5c3: Call2 0x99c

0x5c4: Pop(0)
0x5c5: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x5c6: Pop(1)
0x5c7: Stack[-2] = (int) -1
0x5c8: @ IsOverrideActive(Stack[-3])
0x5c9: Pop(0)
0x5ca: Push(Stack[-3])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5cc: Stack[-10] = (int) -2
0x5cd: Return(); Pop(8)

0x5ce: @ DoDialog(Stack[-4])
0x5cf: Pop(0)
0x5d0: PushEmpty(object, object)
0x5d1: Stack[-11] = Stack[-2]
0x5d2: Stack[-6] = Stack[-1]
0x5d3: Push(-2, 4); TaskCall(8)
0x5d4: Call2 0x5eb

0x5d5: Pop(-2, 4); TaskReturn
0x5d6: Pop(2)
0x5d7: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5d8: Pop(0)
0x5d9: Pop(0); Push((bool) Stack[-1] == 0)
0x5da: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5db: @ sync()
0x5dc: Pop(0)
0x5dd: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5de: Pop(0)
0x5df: GOTO 0x5d9

0x5e0: PushEmpty(object)
0x5e1: Stack[-10] = Stack[-1]
0x5e2: Call2 0x7c8

0x5e3: Pop(1)
0x5e4: @ StopDialog(Stack[-4])
0x5e5: Pop(0)
0x5e6: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5e7: Pop(0)
0x5e8: Stack[-2] = Stack[-10]
0x5e9: Return(); Pop(8)

0x5ea: Stack[-4] = 0
0x5eb: PushEmpty()
0x5ec: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5ed: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5ee: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5ef: Push((int) 1)
0x5f0: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x5f1: PushEmpty(string)
0x5f2: Stack[-1] = "Neutral" // @poff=89
0x5f3: Call2 0x620

0x5f4: Pop(1)
0x5f5: Push((int) 539315)
0x5f6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5f7: Pop(1)
0x5f8: @@@ ClearReplies(); Obj=0 // @poff=116
0x5f9: Pop(0)
0x5fa: Push((int) 539316)
0x5fb: Push((int) -1)
0x5fc: Push((int) 41259)
0x5fd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5fe: Pop(3)
0x5ff: GOTO 0x602

0x600: Return(); Pop(0)

0x601: GOTO 0x5ef

0x602: PushEmpty(bool)
0x603: Call2 0x8d6

0x604: Pop(0)
0x605: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x606: @ lshWaitForAnimEnd()
0x607: Pop(0)
0x608: Push( Stack[3 + Tasks[-1].StackPointer] )
0x609: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x60a: GOTO 0x610

0x60b: PushEmpty(string)
0x60c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x60d: Call2 0x863

0x60e: Pop(1)
0x60f: GOTO 0x606

0x610: GOTO 0x61f

0x611: Push("all") // @poff=138
0x612: Push("idle") // @poff=146
0x613: @ PlayAnimation(Stack[-2], Stack[-1])
0x614: Pop(2)
0x615: @ WaitForAnimEnd()
0x616: Pop(0)
0x617: Push( Stack[3 + Tasks[-1].StackPointer] )
0x618: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x619: GOTO 0x61f

0x61a: Push("all") // @poff=138
0x61b: Push("idle") // @poff=146
0x61c: @ PlayAnimation(Stack[-2], Stack[-1])
0x61d: Pop(2)
0x61e: GOTO 0x615

0x61f: Return(); Pop(0)

0x620: PushEmpty()
0x621: PushEmpty(bool)
0x622: Call2 0x8d6

0x623: Pop(0)
0x624: Pop(1); Push((bool) Stack[-1] == 0)
0x625: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x626: Return(); Pop(0)

0x627: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x628: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x629: Return(); Pop(0)

0x62a: PushEmpty(string, bool)
0x62b: Stack[-3] = Stack[-2]
0x62c: Push("") // @poff=102
0x62d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62f: Stack[-1] = (bool) 0
0x630: GOTO 0x632

0x631: Stack[-1] = (bool) 1
0x632: Call2 0x86a

0x633: Pop(2)
0x634: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x635: Return(); Pop(0)

0x636: PushEmpty()
0x637: Push((int) 1)
0x638: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x639: PushEmpty()
0x63a: Call2 0x87f

0x63b: Pop(0)
0x63c: Push((int) 41258)
0x63d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x63f: PushEmpty(string)
0x640: Stack[-1] = "Neutral" // @poff=89
0x641: Call2 0x620

0x642: Pop(1)
0x643: Push((int) 539315)
0x644: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x645: Pop(1)
0x646: @@@ ClearReplies(); Obj=0 // @poff=116
0x647: Pop(0)
0x648: Push((int) 539316)
0x649: Push((int) -1)
0x64a: Push((int) 41259)
0x64b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x64c: Pop(3)
0x64d: Return(); Pop(0)

0x64e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x64f: PushEmpty(bool)
0x650: Call2 0x8d6

0x651: Pop(0)
0x652: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x653: @ lshStopAnimation()
0x654: Pop(0)
0x655: GOTO 0x658

0x656: @ StopAnimation()
0x657: Pop(0)
0x658: Return(); Pop(0)

0x659: GOTO 0x637

0x65a: Return(); Pop(0)

0x65b: Push(GlobalVars[1])
0x65c: Stack[-1] = (bool) 0
0x65d: GlobalVars[1] = Stack[-1]; Pop(1)
0x65e: PushEmpty()
0x65f: Call2 0x662

0x660: Pop(0)
0x661: Return(); Pop(0)

0x662: PushEmpty(bool)
0x663: Call2 0x77f

0x664: Pop(0)
0x665: Pop(1); Push((bool) Stack[-1] == 0)
0x666: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x667: PushEmpty()
0x668: Push(-0, 0); TaskCall(0)
0x669: Call2 0x0

0x66a: Pop(-0, 0); TaskReturn
0x66b: Pop(0)
0x66c: PushEmpty()
0x66d: Call2 0x6e2

0x66e: Pop(0)
0x66f: @ GetDirection(Stack[-0]T)
0x670: Pop(0)
0x671: PushEmpty()
0x672: Call2 0x718

0x673: Pop(0)
0x674: GOTO 0x671

0x675: Return(); Pop(0)

0x676: PushEmpty(object, object)
0x677: Push("player") // @poff=156
0x678: @ FindActor(Stack[-2], Stack[-1])
0x679: Pop(1)
0x67a: Pop(0); Push((bool) Stack[-1] == 0)
0x67b: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67c: Stack[-3] = (bool) 0
0x67d: Return(); Pop(2)

0x67e: PushEmpty(bool, object)
0x67f: Stack[-3] = Stack[-1]
0x680: Call2 0x776

0x681: Stack[-2] = Stack[-5]
0x682: Pop(2)
0x683: Return(); Pop(2)

0x684: Stack[-1] = 0
0x685: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x686: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x687: @ RotateAsync(Stack[-2], Stack[-1])
0x688: Pop(2)
0x689: Return(); Pop(0)

0x68a: PushEmpty(object, bool, object, bool)
0x68b: Push("player") // @poff=156
0x68c: @ FindActor(Stack[-3], Stack[-1])
0x68d: Pop(1)
0x68e: Pop(0); Push((bool) Stack[-2] == 0)
0x68f: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x690: Stack[-5] = (bool) 0
0x691: Return(); Pop(4)

0x692: PushEmpty(float, object)
0x693: Stack[-4] = Stack[-1]
0x694: Call2 0x764

0x695: Pop(1)
0x696: Push((float)90000.0)
0x697: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x699: Stack[-5] = (bool) 0
0x69a: Return(); Pop(4)

0x69b: @ CanSee(Stack[-1], Stack[-2])
0x69c: Pop(0)
0x69d: Stack[-1] = Stack[-5]
0x69e: Return(); Pop(4)

0x69f: Stack[-2] = 0
0x6a0: PushEmpty(float, float)
0x6a1: Push((int) 8)
0x6a2: Push((int) 16)
0x6a3: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x6a4: Pop(2)
0x6a5: Push((int) 10)
0x6a6: @ SetTimer(Stack[-1], Stack[-2])
0x6a7: Pop(1)
0x6a8: Return(); Pop(2)

0x6a9: Push((int) 10)
0x6aa: @ KillTimer(Stack[-1])
0x6ab: Pop(1)
0x6ac: Return(); Pop(0)

0x6ad: PushEmpty()
0x6ae: Push((int) 10)
0x6af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b0: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6b1: PushEmpty()
0x6b2: Call2 0x6a9

0x6b3: Pop(0)
0x6b4: PushEmpty(bool)
0x6b5: Stack[-1] = (bool) 0
0x6b6: PushEmpty(bool)
0x6b7: Call2 0x77f

0x6b8: Pop(0)
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6ba: PushEmpty(bool)
0x6bb: Call2 0x68a

0x6bc: Pop(0)
0x6bd: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6be: Stack[-1] = (bool) 1
0x6bf: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c0: PushEmpty(bool)
0x6c1: Call2 0x676

0x6c2: Pop(0)
0x6c3: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6c4: PushEmpty(bool, object)
0x6c5: PushEmpty(object)
0x6c6: Call2 0x886

0x6c7: Stack[-1] = Stack[-2]
0x6c8: Pop(1)
0x6c9: Call2 0x813

0x6ca: Pop(2)
0x6cb: GOTO 0x6d2

0x6cc: PushEmpty()
0x6cd: Call2 0x685

0x6ce: Pop(0)
0x6cf: PushEmpty()
0x6d0: Call2 0x6a0

0x6d1: Pop(0)
0x6d2: Return(); Pop(0)

0x6d3: PushEmpty()
0x6d4: Call2 0x75f

0x6d5: Pop(0)
0x6d6: PushEmpty()
0x6d7: Call2 0x6a9

0x6d8: Pop(0)
0x6d9: @ lshStopSpeech()
0x6da: Pop(0)
0x6db: @ lshStopAnimation()
0x6dc: Pop(0)
0x6dd: @ StopAsync()
0x6de: Pop(0)
0x6df: @ Hold()
0x6e0: Pop(0)
0x6e1: Return(); Pop(0)

0x6e2: @ StopGroup0()
0x6e3: Pop(0)
0x6e4: PushEmpty()
0x6e5: Call2 0x6a9

0x6e6: Pop(0)
0x6e7: PushEmpty(string)
0x6e8: Stack[-1] = "Neutral" // @poff=89
0x6e9: Call2 0x863

0x6ea: Pop(1)
0x6eb: PushEmpty()
0x6ec: Call2 0x6a0

0x6ed: Pop(0)
0x6ee: Return(); Pop(0)

0x6ef: PushEmpty()
0x6f0: Push(Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f2: PushEmpty()
0x6f3: Call2 0x6a0

0x6f4: Pop(0)
0x6f5: GOTO 0x6fa

0x6f6: PushEmpty(string)
0x6f7: Stack[-1] = "Neutral" // @poff=89
0x6f8: Call2 0x863

0x6f9: Pop(1)
0x6fa: Return(); Pop(0)

0x6fb: PushEmpty(bool, bool)
0x6fc: @ IsOverrideActive(Stack[-1])
0x6fd: Pop(0)
0x6fe: Pop(0); Push((bool) Stack[-1] == 0)
0x6ff: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x700: EventDisable(0)
0x701: PushEmpty()
0x702: Call2 0x75f

0x703: Pop(0)
0x704: PushEmpty(bool, object)
0x705: Stack[-5] = Stack[-1]
0x706: Call2 0x776

0x707: Pop(2)
0x708: EventEnable(0)
0x709: PushEmpty(object)
0x70a: Stack[-4] = Stack[-1]
0x70b: Call2 0x9ad

0x70c: Pop(1)
0x70d: PushEmpty(string)
0x70e: Stack[-1] = "Neutral" // @poff=89
0x70f: Call2 0x863

0x710: Pop(1)
0x711: PushEmpty()
0x712: Call2 0x6a9

0x713: Pop(0)
0x714: PushEmpty()
0x715: Call2 0x6a0

0x716: Pop(0)
0x717: Return(); Pop(2)

0x718: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x719: @ WaitForAnimEnd()
0x71a: Pop(0)
0x71b: PushEmpty(bool)
0x71c: Call2 0x77f

0x71d: Pop(0)
0x71e: Pop(1); Push((bool) Stack[-1] == 0)
0x71f: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x720: Return(); Pop(12)

0x721: PushEmpty(int)
0x722: Call2 0x8bd

0x723: Stack[-1] = Stack[-7]
0x724: Pop(1)
0x725: Stack[-5] = (int) 0
0x726: PushEmpty(bool)
0x727: Stack[-1] = (bool) 0
0x728: Push((int) 5)
0x729: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x72a: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72b: PushEmpty(bool)
0x72c: Call2 0x77f

0x72d: Pop(0)
0x72e: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72f: Stack[-1] = (bool) 1
0x730: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x731: Pop(0); Push((bool) Stack[-6] == 0)
0x732: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x733: Push((int) 3)
0x734: @ Sleep(Stack[-1], Stack[-5])
0x735: Pop(1)
0x736: Pop(0); Push((bool) Stack[-4] == 0)
0x737: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x738: GOTO 0x75a

0x739: GOTO 0x74f

0x73a: @ irand(Stack[-3], Stack[-6])
0x73b: Pop(0)
0x73c: Push((int) 5)
0x73d: @ irand(Stack[-3], Stack[-1])
0x73e: Pop(1)
0x73f: Push((int) 0)
0x740: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x741: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x742: Stack[-3] = (int) 0
0x743: Push("all") // @poff=138
0x744: PushEmpty(string, int)
0x745: Stack[-6] = Stack[-1]
0x746: Call2 0x8b6

0x747: Pop(1)
0x748: @ PlayAnimation(Stack[-2], Stack[-1])
0x749: Pop(2)
0x74a: @ WaitForAnimEnd(Stack[-1])
0x74b: Pop(0)
0x74c: Pop(0); Push((bool) Stack[-1] == 0)
0x74d: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74e: GOTO 0x75a

0x74f: PushEmpty(bool)
0x750: Call2 0x75d

0x751: Pop(0)
0x752: Pop(1); Push((bool) Stack[-1] == 0)
0x753: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x754: GOTO 0x75a

0x755: @ ResetAAS()
0x756: Pop(0)
0x757: Push((int) 1)
0x758: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x759: GOTO 0x726

0x75a: @ ResetAAS()
0x75b: Pop(0)
0x75c: Return(); Pop(12)

0x75d: Stack[-1] = (bool) 1
0x75e: Return(); Pop(0)

0x75f: @ StopAnimation()
0x760: Pop(0)
0x761: @ StopGroup0()
0x762: Pop(0)
0x763: Return(); Pop(0)

0x764: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x765: @ GetPosition(Stack[-3])
0x766: Pop(0)
0x767: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x768: Pop(0)
0x769: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x76a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x76b: Return(); Pop(6)

0x76c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x76d: @ GetPosition(Stack[-3])
0x76e: Pop(0)
0x76f: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x770: Push(CvectorIndex(Stack[-2], 0))
0x771: Push(CvectorIndex(Stack[-3], 2))
0x772: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x773: Pop(2)
0x774: Stack[-1] = Stack[-8]
0x775: Return(); Pop(6)

0x776: PushEmpty(cvector, cvector)
0x777: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x778: Pop(0)
0x779: PushEmpty(bool, cvector)
0x77a: Stack[-3] = Stack[-1]
0x77b: Call2 0x76c

0x77c: Stack[-2] = Stack[-6]
0x77d: Pop(2)
0x77e: Return(); Pop(2)

0x77f: PushEmpty(bool, bool)
0x780: @ IsLoaded(Stack[-1])
0x781: Pop(0)
0x782: Stack[-1] = Stack[-3]
0x783: Return(); Pop(2)

0x784: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x785: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x786: Pop(0)
0x787: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x788: Pop(0)
0x789: Push(CvectorIndex(Stack[-8], 1))
0x78a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x78b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x78c: @ GetPosition(Stack[-7])
0x78d: Pop(0)
0x78e: @ GetEyesHeight(Stack[-9])
0x78f: Pop(0)
0x790: Push(CvectorIndex(Stack[-7], 1))
0x791: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x792: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x793: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x794: Push(CvectorIndex(Stack[-6], 1))
0x795: Stack[-1] = (int) 0
0x796: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x797: Pop(0); Push(Stack[-6] | Stack[-6]);
0x798: Pop(1); Push(Sqrt(Stack[-1]))
0x799: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x79a: Stack[-5] = -Stack[-6]; Pop(0);
0x79b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x79c: PushEmpty(cvector, cvector)
0x79d: Push([0.0, 1.0, 0.0])
0x79e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x79f: Call2 0x88c

0x7a0: Pop(1)
0x7a1: Push((int) 25)
0x7a2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7a3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7a4: Push([0.0, 10.0, 0.0])
0x7a5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7a6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x7a7: @ IsOverrideActive(Stack[-2])
0x7a8: Pop(0)
0x7a9: Push(Stack[-2])
0x7aa: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ab: Stack[-21] = (bool) 0
0x7ac: Return(); Pop(18)

0x7ad: @ StopWorld()
0x7ae: Pop(0)
0x7af: @ CameraTransit(Stack[-3], Stack[-5])
0x7b0: Pop(0)
0x7b1: Push(CvectorIndex(Stack[-4], 0))
0x7b2: Push(CvectorIndex(Stack[-5], 2))
0x7b3: @ Rotate(Stack[-2], Stack[-1])
0x7b4: Pop(2)
0x7b5: PushEmpty(bool)
0x7b6: Call2 0x8d6

0x7b7: Pop(0)
0x7b8: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b9: GOTO 0x7c2

0x7ba: Push("head") // @poff=196
0x7bb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7bc: Pop(1)
0x7bd: Push(Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7bf: Push("head") // @poff=196
0x7c0: @ LookAsyncCamera(Stack[-1])
0x7c1: Pop(1)
0x7c2: @ CameraWaitForPlayFinish()
0x7c3: Pop(0)
0x7c4: @ ResumeWorld()
0x7c5: Pop(0)
0x7c6: Stack[-21] = (bool) 1
0x7c7: Return(); Pop(18)

0x7c8: PushEmpty(bool, bool)
0x7c9: @ CameraSwitchToNormal()
0x7ca: Pop(0)
0x7cb: PushEmpty(bool)
0x7cc: Call2 0x8d6

0x7cd: Pop(0)
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cf: GOTO 0x7d8

0x7d0: Push("head") // @poff=196
0x7d1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7d2: Pop(1)
0x7d3: Push(Stack[-1])
0x7d4: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d5: Push("head") // @poff=196
0x7d6: @ UnlookAsync(Stack[-1])
0x7d7: Pop(1)
0x7d8: Return(); Pop(2)

0x7d9: PushEmpty(int, int, int, int)
0x7da: Push("voice_common") // @poff=206
0x7db: @ GetVariable(Stack[-1], Stack[-3])
0x7dc: Pop(1)
0x7dd: Push(Stack[-2])
0x7de: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7df: PushEmpty(bool, object)
0x7e0: Stack[-7] = Stack[-1]
0x7e1: Call2 0x813

0x7e2: Pop(1)
0x7e3: Pop(1); Push((bool) Stack[-1] == 0)
0x7e4: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7e5: PushEmpty(bool, object)
0x7e6: Stack[-7] = Stack[-1]
0x7e7: Call2 0x838

0x7e8: Pop(1)
0x7e9: Pop(1); Push((bool) Stack[-1] == 0)
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7eb: Stack[-6] = (bool) 0
0x7ec: Return(); Pop(4)

0x7ed: Push((int) 2)
0x7ee: @ irand(Stack[-2], Stack[-1])
0x7ef: Pop(1)
0x7f0: Push(Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f2: Push("voice_common") // @poff=206
0x7f3: Push((int) 1)
0x7f4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7f5: Push((int) 3)
0x7f6: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7f7: @ SetVariable(Stack[-2], Stack[-1])
0x7f8: Pop(2)
0x7f9: GOTO 0x7fe

0x7fa: Push("voice_common") // @poff=206
0x7fb: Push((int) 0)
0x7fc: @ SetVariable(Stack[-2], Stack[-1])
0x7fd: Pop(2)
0x7fe: GOTO 0x811

0x7ff: PushEmpty(bool, object)
0x800: Stack[-7] = Stack[-1]
0x801: Call2 0x838

0x802: Pop(1)
0x803: Pop(1); Push((bool) Stack[-1] == 0)
0x804: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x805: PushEmpty(bool, object)
0x806: Stack[-7] = Stack[-1]
0x807: Call2 0x813

0x808: Pop(1)
0x809: Pop(1); Push((bool) Stack[-1] == 0)
0x80a: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80b: Stack[-6] = (bool) 0
0x80c: Return(); Pop(4)

0x80d: Push("voice_common") // @poff=206
0x80e: Push((int) 1)
0x80f: @ SetVariable(Stack[-2], Stack[-1])
0x810: Pop(2)
0x811: Stack[-6] = (bool) 1
0x812: Return(); Pop(4)

0x813: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x814: Stack[-5] = "c" // @poff=232
0x815: Stack[-4] = (int) 0
0x816: Push((int) 1)
0x817: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x818: Push((int) 1)
0x819: Pop(1); Push(Stack[-5] + Stack[-1]);
0x81a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x81b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x81c: Pop(1)
0x81d: Pop(0); Push((bool) Stack[-3] == 0)
0x81e: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81f: GOTO 0x823

0x820: Push((int) 1)
0x821: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x822: GOTO 0x816

0x823: Pop(0); Push((bool) Stack[-4] == 0)
0x824: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x825: Stack[-12] = (bool) 0
0x826: Return(); Pop(10)

0x827: Stack[-2] = (int) 0
0x828: Push((int) 1)
0x829: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x82b: @ irand(Stack[-2], Stack[-4])
0x82c: Pop(0)
0x82d: Push((int) 1)
0x82e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x82f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x830: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x831: Pop(1)
0x832: PushEmpty(bool, string)
0x833: Stack[-3] = Stack[-1]
0x834: Call2 0x870

0x835: Stack[-2] = Stack[-14]
0x836: Pop(2)
0x837: Return(); Pop(10)

0x838: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x839: Push("d") // @poff=202
0x83a: PushEmpty(int)
0x83b: Call2 0x8a7

0x83c: Pop(0)
0x83d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x83e: Push("m") // @poff=260
0x83f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x840: Stack[-4] = (int) 0
0x841: Push((int) 1)
0x842: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x843: Push((int) 1)
0x844: Pop(1); Push(Stack[-5] + Stack[-1]);
0x845: Pop(1); Push(Stack[-6] + Stack[-1]);
0x846: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x847: Pop(1)
0x848: Pop(0); Push((bool) Stack[-3] == 0)
0x849: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x84a: GOTO 0x84e

0x84b: Push((int) 1)
0x84c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x84d: GOTO 0x841

0x84e: Pop(0); Push((bool) Stack[-4] == 0)
0x84f: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x850: Stack[-12] = (bool) 0
0x851: Return(); Pop(10)

0x852: Stack[-2] = (int) 0
0x853: Push((int) 1)
0x854: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x855: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x856: @ irand(Stack[-2], Stack[-4])
0x857: Pop(0)
0x858: Push((int) 1)
0x859: Pop(1); Push(Stack[-3] + Stack[-1]);
0x85a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x85b: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x85c: Pop(1)
0x85d: PushEmpty(bool, string)
0x85e: Stack[-3] = Stack[-1]
0x85f: Call2 0x870

0x860: Stack[-2] = Stack[-14]
0x861: Pop(2)
0x862: Return(); Pop(10)

0x863: PushEmpty(float, float, float, float)
0x864: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x865: Pop(0)
0x866: Push((bool) 0)
0x867: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x868: Pop(1)
0x869: Return(); Pop(4)

0x86a: PushEmpty(float, float, float, float)
0x86b: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x86c: Pop(0)
0x86d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x86e: Pop(0)
0x86f: Return(); Pop(4)

0x870: PushEmpty(bool, bool)
0x871: PushEmpty(bool)
0x872: Call2 0x8d6

0x873: Pop(0)
0x874: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x875: @ lshHasSpeech(Stack[-1], Stack[-3])
0x876: Pop(0)
0x877: Push(Stack[-1])
0x878: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x879: @ lshPlaySpeech(Stack[-3])
0x87a: Pop(0)
0x87b: Stack[-4] = (bool) 1
0x87c: Return(); Pop(2)

0x87d: Stack[-4] = (bool) 0
0x87e: Return(); Pop(2)

0x87f: PushEmpty(bool)
0x880: Call2 0x8d6

0x881: Pop(0)
0x882: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x883: @ lshStopSpeech()
0x884: Pop(0)
0x885: Return(); Pop(0)

0x886: PushEmpty(object, object)
0x887: @ self(Stack[-1])
0x888: Pop(0)
0x889: Stack[-1] = Stack[-3]
0x88a: Return(); Pop(2)

0x88b: Stack[-1] = 0
0x88c: PushEmpty(float, float)
0x88d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x88e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x88f: Push((float)9.999999974752427e-07)
0x890: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x891: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x892: Stack[-4] = [0.0, 0.0, 0.0]
0x893: Return(); Pop(2)

0x894: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x895: Return(); Pop(2)

0x896: PushEmpty(int, int)
0x897: @ GetVariable(Stack[-3], Stack[-1])
0x898: Pop(0)
0x899: Stack[-1] = Stack[-4]
0x89a: Return(); Pop(2)

0x89b: PushEmpty(object, object)
0x89c: @ FindActor(Stack[-1], Stack[-4])
0x89d: Pop(0)
0x89e: Pop(0); PushNull((bool) Stack[-1] == 0)
0x89f: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x8a0: Stack[-5] = (bool) 0
0x8a1: Return(); Pop(2)

0x8a2: @ Trigger(Stack[-1], Stack[-3])
0x8a3: Pop(0)
0x8a4: Stack[-5] = (bool) 1
0x8a5: Return(); Pop(2)

0x8a6: Stack[-1] = 0
0x8a7: PushEmpty(float, float)
0x8a8: @ GetGameTime(Stack[-1])
0x8a9: Pop(0)
0x8aa: Push((int) 1)
0x8ab: PushEmpty(int)
0x8ac: Push((int) 24)
0x8ad: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x8ae: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x8af: Return(); Pop(2)

0x8b0: PushEmpty()
0x8b1: PushEmpty(int)
0x8b2: Call2 0x8a7

0x8b3: Pop(0)
0x8b4: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x8b5: Return(); Pop(0)

0x8b6: PushEmpty(string, string)
0x8b7: Stack[-1] = "idle" // @poff=146
0x8b8: Push(Stack[-3])
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8ba: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x8bb: Stack[-1] = Stack[-4]
0x8bc: Return(); Pop(2)

0x8bd: PushEmpty(int, bool, int, bool)
0x8be: Stack[-2] = (int) 0
0x8bf: Push("all") // @poff=138
0x8c0: PushEmpty(string, int)
0x8c1: Stack[-5] = Stack[-1]
0x8c2: Call2 0x8b6

0x8c3: Pop(1)
0x8c4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8c5: Pop(2)
0x8c6: Pop(0); Push((bool) Stack[-1] == 0)
0x8c7: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c8: GOTO 0x8cc

0x8c9: Push((int) 1)
0x8ca: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8cb: GOTO 0x8bf

0x8cc: Stack[-2] = Stack[-5]
0x8cd: Return(); Pop(4)

0x8ce: Stack[-1] = (int) 515553
0x8cf: Return(); Pop(0)

0x8d0: Stack[-1] = (int) 502878
0x8d1: Return(); Pop(0)

0x8d2: Stack[-1] = "ui/NPC_Starshina.png" // @poff=264
0x8d3: Return(); Pop(0)

0x8d4: Stack[-1] = "ui/NPC_Starshina_b.png" // @poff=306
0x8d5: Return(); Pop(0)

0x8d6: Stack[-1] = (bool) 1
0x8d7: Return(); Pop(0)

0x8d8: PushEmpty()
0x8d9: Push("k8q01") // @poff=352
0x8da: Push((int) 5)
0x8db: @ SetVariable(Stack[-2], Stack[-1])
0x8dc: Pop(2)
0x8dd: PushEmpty()
0x8de: Call2 0x966

0x8df: Pop(0)
0x8e0: Return(); Pop(0)

0x8e1: PushEmpty()
0x8e2: Push("k8q01") // @poff=352
0x8e3: Push((int) 7)
0x8e4: @ SetVariable(Stack[-2], Stack[-1])
0x8e5: Pop(2)
0x8e6: PushEmpty()
0x8e7: Call2 0x959

0x8e8: Pop(0)
0x8e9: Return(); Pop(0)

0x8ea: PushEmpty()
0x8eb: Push("ook11Starshina1") // @poff=364
0x8ec: Push((int) 1)
0x8ed: @ SetVariable(Stack[-2], Stack[-1])
0x8ee: Pop(2)
0x8ef: Return(); Pop(0)

0x8f0: PushEmpty()
0x8f1: Push("k11q01") // @poff=396
0x8f2: Push((int) 6)
0x8f3: @ SetVariable(Stack[-2], Stack[-1])
0x8f4: Pop(2)
0x8f5: PushEmpty()
0x8f6: Call2 0x94c

0x8f7: Pop(0)
0x8f8: PushEmpty(bool, string, string)
0x8f9: Stack[-2] = "quest_k11_01" // @poff=410
0x8fa: Stack[-1] = "place_burah" // @poff=436
0x8fb: Call2 0x89b

0x8fc: Pop(3)
0x8fd: Return(); Pop(0)

0x8fe: PushEmpty()
0x8ff: Push("ook11Starshina2") // @poff=460
0x900: Push((int) 1)
0x901: @ SetVariable(Stack[-2], Stack[-1])
0x902: Pop(2)
0x903: Return(); Pop(0)

0x904: PushEmpty()
0x905: PushEmpty(int, string)
0x906: Stack[-1] = "k8q01" // @poff=352
0x907: Call2 0x896

0x908: Pop(1)
0x909: Push((int) 4)
0x90a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x90b: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x90c: Stack[-2] = (bool) 1
0x90d: Return(); Pop(0)

0x90e: Stack[-2] = (bool) 0
0x90f: Return(); Pop(0)

0x910: PushEmpty()
0x911: PushEmpty(int, string)
0x912: Stack[-1] = "k8q01" // @poff=352
0x913: Call2 0x896

0x914: Pop(1)
0x915: Push((int) 6)
0x916: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x917: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x918: Stack[-2] = (bool) 1
0x919: Return(); Pop(0)

0x91a: Stack[-2] = (bool) 0
0x91b: Return(); Pop(0)

0x91c: PushEmpty()
0x91d: PushEmpty(int, string)
0x91e: Stack[-1] = "k11q01" // @poff=396
0x91f: Call2 0x896

0x920: Pop(1)
0x921: Push((int) 5)
0x922: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x923: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x924: Stack[-2] = (bool) 1
0x925: Return(); Pop(0)

0x926: Stack[-2] = (bool) 0
0x927: Return(); Pop(0)

0x928: PushEmpty()
0x929: PushEmpty(int, string)
0x92a: Stack[-1] = "ook11Starshina1" // @poff=364
0x92b: Call2 0x896

0x92c: Pop(1)
0x92d: Push((int) 0)
0x92e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x92f: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x930: Stack[-2] = (bool) 1
0x931: Return(); Pop(0)

0x932: Stack[-2] = (bool) 0
0x933: Return(); Pop(0)

0x934: PushEmpty()
0x935: PushEmpty(int, string)
0x936: Stack[-1] = "k11q01" // @poff=396
0x937: Call2 0x896

0x938: Pop(1)
0x939: Push((int) 6)
0x93a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x93b: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x93c: Stack[-2] = (bool) 1
0x93d: Return(); Pop(0)

0x93e: Stack[-2] = (bool) 0
0x93f: Return(); Pop(0)

0x940: PushEmpty()
0x941: PushEmpty(int, string)
0x942: Stack[-1] = "ook11Starshina2" // @poff=460
0x943: Call2 0x896

0x944: Pop(1)
0x945: Push((int) 0)
0x946: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x947: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x948: Stack[-2] = (bool) 1
0x949: Return(); Pop(0)

0x94a: Stack[-2] = (bool) 0
0x94b: Return(); Pop(0)

0x94c: PushEmpty(object, object)
0x94d: Push((int) 489)
0x94e: Push((int) 1)
0x94f: Push((int) 528056)
0x950: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x951: Pop(3)
0x952: PushEmpty(bool, object, int)
0x953: Stack[-4] = Stack[-2]
0x954: Stack[-1] = (int) 480
0x955: Call2 0x980

0x956: Pop(3)
0x957: Return(); Pop(2)

0x958: Stack[-1] = 0
0x959: PushEmpty(object, object)
0x95a: Push((int) 445)
0x95b: Push((int) 1)
0x95c: Push((int) 526470)
0x95d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x95e: Pop(3)
0x95f: PushEmpty(bool, object, int)
0x960: Stack[-4] = Stack[-2]
0x961: Stack[-1] = (int) 438
0x962: Call2 0x980

0x963: Pop(3)
0x964: Return(); Pop(2)

0x965: Stack[-1] = 0
0x966: PushEmpty(object, object)
0x967: Push((int) 443)
0x968: Push((int) 1)
0x969: Push((int) 526468)
0x96a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x96b: Pop(3)
0x96c: PushEmpty(bool, object, int)
0x96d: Stack[-4] = Stack[-2]
0x96e: Stack[-1] = (int) 438
0x96f: Call2 0x980

0x970: Pop(3)
0x971: Return(); Pop(2)

0x972: Stack[-1] = 0
0x973: PushEmpty(object, object)
0x974: @ GetDiaryRoot(Stack[-1])
0x975: Pop(0)
0x976: Pop(0); Push((bool) Stack[-1] == 0)
0x977: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x978: Push("Can't retrieve diary root") // @poff=492
0x979: @ Trace(Stack[-1])
0x97a: Pop(1)
0x97b: Stack[-3] = (bool) 0
0x97c: Return(); Pop(2)

0x97d: Stack[-1] = Stack[-3]
0x97e: Return(); Pop(2)

0x97f: Stack[-1] = 0
0x980: PushEmpty(object, object, int, object, object, int)
0x981: PushEmpty(object)
0x982: Call2 0x973

0x983: Stack[-1] = Stack[-4]
0x984: Pop(1)
0x985: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=544
0x986: Pop(0)
0x987: Pop(0); Push((bool) Stack[-2] == 0)
0x988: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x989: Push("Can't find diary parent with id: ") // @poff=549
0x98a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x98b: @ Trace(Stack[-1])
0x98c: Pop(1)
0x98d: Stack[-9] = (bool) 0
0x98e: Return(); Pop(6)

0x98f: @@ AddChild(Stack[-8]); Obj=2 // @poff=617
0x990: Pop(0)
0x991: Push((int) 7)
0x992: @ SendWorldWndMessage(Stack[-1])
0x993: Pop(1)
0x994: @@ GetCategory(Stack[-1]); Obj=8 // @poff=626
0x995: Pop(0)
0x996: @ SetDiarySection(Stack[-1])
0x997: Pop(0)
0x998: Stack[-9] = (bool) 0
0x999: Return(); Pop(6)

0x99a: Stack[-2] = 0
0x99b: Stack[-3] = 0
0x99c: PushEmpty(int, int)
0x99d: Push("branch") // @poff=638
0x99e: @ GetVariable(Stack[-1], Stack[-2])
0x99f: Pop(1)
0x9a0: Push((int) 0)
0x9a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a2: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x9a3: Stack[-3] = (int) 1
0x9a4: Return(); Pop(2)

0x9a5: GOTO 0x9ab

0x9a6: Push((int) 1)
0x9a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a8: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a9: Stack[-3] = (int) 2
0x9aa: Return(); Pop(2)

0x9ab: Stack[-3] = (int) 3
0x9ac: Return(); Pop(2)

0x9ad: PushEmpty()
0x9ae: Push(GlobalVars[1])
0x9af: Pop(1); Push((bool) Stack[-1] == 0)
0x9b0: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9b1: PushEmpty(int, object)
0x9b2: Stack[-3] = Stack[-1]
0x9b3: Push(-2, 1); TaskCall(1)
0x9b4: Call2 0xd

0x9b5: Pop(-2, 1); TaskReturn
0x9b6: Pop(2)
0x9b7: Push(GlobalVars[1])
0x9b8: Stack[-1] = (bool) 1
0x9b9: GlobalVars[1] = Stack[-1]; Pop(1)
0x9ba: PushEmpty(bool, int)
0x9bb: Stack[-1] = (int) 8
0x9bc: Call2 0x8b0

0x9bd: Pop(1)
0x9be: IF (Stack[-1] == 0) GOTO 0x9c6; Pop(1)

0x9bf: PushEmpty(int, object)
0x9c0: Stack[-3] = Stack[-1]
0x9c1: Push(-2, 1); TaskCall(3)
0x9c2: Call2 0xd8

0x9c3: Pop(-2, 1); TaskReturn
0x9c4: Pop(2)
0x9c5: Return(); Pop(0)

0x9c6: PushEmpty(bool, int)
0x9c7: Stack[-1] = (int) 11
0x9c8: Call2 0x8b0

0x9c9: Pop(1)
0x9ca: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9cb: PushEmpty(int, object)
0x9cc: Stack[-3] = Stack[-1]
0x9cd: Push(-2, 1); TaskCall(5)
0x9ce: Call2 0x2e3

0x9cf: Pop(-2, 1); TaskReturn
0x9d0: Pop(2)
0x9d1: Return(); Pop(0)

0x9d2: PushEmpty(bool, int)
0x9d3: Stack[-1] = (int) 12
0x9d4: Call2 0x8b0

0x9d5: Pop(1)
0x9d6: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9d7: PushEmpty(int, object)
0x9d8: Stack[-3] = Stack[-1]
0x9d9: Push(-2, 1); TaskCall(7)
0x9da: Call2 0x59a

0x9db: Pop(-2, 1); TaskReturn
0x9dc: Pop(2)
0x9dd: Return(); Pop(0)

0x9de: Return(); Pop(0)

