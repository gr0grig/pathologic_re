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
	W:HasProperty
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	W:m
	W:reputation
	A:add
	W:ui/NPC_Julia.png
	W:ui/NPC_Julia_b.png
	W:k3q02
	W:k3q02JuliaGotoEva
	W:pt_map_eva
	A:AddMark
	W:k6q01
	W:quest_k6_01
	W:place_danko
	W:k11q01SoulCount
	W:ook11Julia1
	W:k11q01
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e00480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f70657274790047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e000000630000006d000000720065007000750074006100740069006f006e00000061646400750069002f004e00500043005f004a0075006c00690061002e0070006e0067000000750069002f004e00500043005f004a0075006c00690061005f0062002e0070006e00670000006b00330071003000320000006b0033007100300032004a0075006c006900610047006f0074006f004500760061000000700074005f006d00610070005f0065007600610000004164644d61726b006b0036007100300031000000710075006500730074005f006b0036005f0030003100000070006c006100630065005f00640061006e006b006f0000006b003100310071003000310053006f0075006c0043006f0075006e00740000006f006f006b00310031004a0075006c0069006100310000006b00310031007100300031000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170006200720061006e00630068000000
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x78e
RunTask = 13

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1ac Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x360 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x52a Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x69e Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x764 Vars = (int, int)
	GTASK_13 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x7e0 Vars = (int)
		EVENT_6 Op = 0x806 Vars = ()
		EVENT_5 Op = 0x815 Vars = ()
		EVENT_45 Op = 0x822 Vars = (bool)
		EVENT_0 Op = 0x82e Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x8d4

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
0x11: Call2 0x9db

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x92e

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x8d9

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0xa62

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0xa60

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0xa64

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0xa66

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0xbad

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
0x55: Call2 0x91d

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
0x68: Push((int) 525486)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 525487)
0x6e: Push((int) 30760)
0x6f: Push((int) 26843)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 540677)
0x73: Push((int) -1)
0x74: Push((int) 42710)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x62

0x7a: PushEmpty(bool)
0x7b: Call2 0xa68

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x9b8

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
0x9a: Call2 0xa68

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
0xaa: Call2 0x9bf

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x9d4

0xb3: Pop(0)
0xb4: Push((int) 26842)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral" // @poff=89
0xb9: Call2 0x98

0xba: Pop(1)
0xbb: Push((int) 525486)
0xbc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xbd: Pop(1)
0xbe: @@@ ClearReplies(); Obj=0 // @poff=116
0xbf: Pop(0)
0xc0: Push((int) 525487)
0xc1: Push((int) 30760)
0xc2: Push((int) 26843)
0xc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc4: Pop(3)
0xc5: Push((int) 540677)
0xc6: Push((int) -1)
0xc7: Push((int) 42710)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 30760)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral" // @poff=89
0xd0: Call2 0x98

0xd1: Pop(1)
0xd2: Push((int) 529306)
0xd3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd4: Pop(1)
0xd5: @@@ ClearReplies(); Obj=0 // @poff=116
0xd6: Pop(0)
0xd7: Push((int) 529307)
0xd8: Push((int) 30762)
0xd9: Push((int) 30761)
0xda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdb: Pop(3)
0xdc: Push((int) 540678)
0xdd: Push((int) -1)
0xde: Push((int) 42711)
0xdf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 30762)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral" // @poff=89
0xe7: Call2 0x98

0xe8: Pop(1)
0xe9: Push((int) 529308)
0xea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xeb: Pop(1)
0xec: @@@ ClearReplies(); Obj=0 // @poff=116
0xed: Pop(0)
0xee: Push((int) 529309)
0xef: Push((int) -1)
0xf0: Push((int) 30763)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: Push((int) 529310)
0xf4: Push((int) -1)
0xf5: Push((int) 30764)
0xf6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfa: PushEmpty(bool)
0xfb: Call2 0xa68

0xfc: Pop(0)
0xfd: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfe: @ lshStopAnimation()
0xff: Pop(0)
0x100: GOTO 0x103

0x101: @ StopAnimation()
0x102: Pop(0)
0x103: Return(); Pop(0)

0x104: GOTO 0xaf

0x105: Return(); Pop(0)

0x106: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x107: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x108: PushEmpty(bool, object)
0x109: PushEmpty(object)
0x10a: Call2 0x9db

0x10b: Stack[-1] = Stack[-2]
0x10c: Pop(1)
0x10d: Call2 0x92e

0x10e: Pop(2)
0x10f: PushEmpty(bool, object, float)
0x110: Stack[-12] = Stack[-2]
0x111: Stack[-1] = (float) 70.0
0x112: Call2 0x8d9

0x113: Pop(2)
0x114: Pop(1); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x116: Stack[-10] = (int) -2
0x117: Return(); Pop(8)

0x118: @ CreateDialog(Stack[-4])
0x119: Pop(0)
0x11a: PushEmpty(int)
0x11b: Call2 0xa62

0x11c: Pop(0)
0x11d: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11e: Pop(1)
0x11f: PushEmpty(int)
0x120: Call2 0xa60

0x121: Pop(0)
0x122: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x123: Pop(1)
0x124: PushEmpty(string)
0x125: Call2 0xa64

0x126: Pop(0)
0x127: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x128: Pop(1)
0x129: PushEmpty(string)
0x12a: Call2 0xa66

0x12b: Pop(0)
0x12c: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x12d: Pop(1)
0x12e: PushEmpty(int)
0x12f: Call2 0xbad

0x130: Pop(0)
0x131: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x132: Pop(1)
0x133: Stack[-2] = (int) -1
0x134: @ IsOverrideActive(Stack[-3])
0x135: Pop(0)
0x136: Push(Stack[-3])
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-10] = (int) -2
0x139: Return(); Pop(8)

0x13a: @ DoDialog(Stack[-4])
0x13b: Pop(0)
0x13c: PushEmpty(object, object)
0x13d: Stack[-11] = Stack[-2]
0x13e: Stack[-6] = Stack[-1]
0x13f: Push(-2, 4); TaskCall(4)
0x140: Call2 0x157

0x141: Pop(-2, 4); TaskReturn
0x142: Pop(2)
0x143: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x144: Pop(0)
0x145: Pop(0); Push((bool) Stack[-1] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: @ sync()
0x148: Pop(0)
0x149: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x14a: Pop(0)
0x14b: GOTO 0x145

0x14c: PushEmpty(object)
0x14d: Stack[-10] = Stack[-1]
0x14e: Call2 0x91d

0x14f: Pop(1)
0x150: @ StopDialog(Stack[-4])
0x151: Pop(0)
0x152: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x153: Pop(0)
0x154: Stack[-2] = Stack[-10]
0x155: Return(); Pop(8)

0x156: Stack[-4] = 0
0x157: PushEmpty()
0x158: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x159: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x15a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x15b: Push((int) 1)
0x15c: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral" // @poff=89
0x15f: Call2 0x196

0x160: Pop(1)
0x161: Push((int) 525534)
0x162: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x163: Pop(1)
0x164: @@@ ClearReplies(); Obj=0 // @poff=116
0x165: Pop(0)
0x166: PushEmpty(bool, object)
0x167: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x168: Call2 0xacf

0x169: Pop(1)
0x16a: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16b: Push((int) 525541)
0x16c: Push((int) 42712)
0x16d: Push((int) 26897)
0x16e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16f: Pop(3)
0x170: Push((int) 525546)
0x171: Push((int) -1)
0x172: Push((int) 26902)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: GOTO 0x178

0x176: Return(); Pop(0)

0x177: GOTO 0x15b

0x178: PushEmpty(bool)
0x179: Call2 0xa68

0x17a: Pop(0)
0x17b: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x17c: @ lshWaitForAnimEnd()
0x17d: Pop(0)
0x17e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: GOTO 0x186

0x181: PushEmpty(string)
0x182: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x183: Call2 0x9b8

0x184: Pop(1)
0x185: GOTO 0x17c

0x186: GOTO 0x195

0x187: Push("all") // @poff=138
0x188: Push("idle") // @poff=146
0x189: @ PlayAnimation(Stack[-2], Stack[-1])
0x18a: Pop(2)
0x18b: @ WaitForAnimEnd()
0x18c: Pop(0)
0x18d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18f: GOTO 0x195

0x190: Push("all") // @poff=138
0x191: Push("idle") // @poff=146
0x192: @ PlayAnimation(Stack[-2], Stack[-1])
0x193: Pop(2)
0x194: GOTO 0x18b

0x195: Return(); Pop(0)

0x196: PushEmpty()
0x197: PushEmpty(bool)
0x198: Call2 0xa68

0x199: Pop(0)
0x19a: Pop(1); Push((bool) Stack[-1] == 0)
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: Return(); Pop(0)

0x19d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Return(); Pop(0)

0x1a0: PushEmpty(string, bool)
0x1a1: Stack[-3] = Stack[-2]
0x1a2: Push("") // @poff=102
0x1a3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a5: Stack[-1] = (bool) 0
0x1a6: GOTO 0x1a8

0x1a7: Stack[-1] = (bool) 1
0x1a8: Call2 0x9bf

0x1a9: Pop(2)
0x1aa: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1ab: Return(); Pop(0)

0x1ac: PushEmpty()
0x1ad: Push((int) 1)
0x1ae: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x1af: PushEmpty()
0x1b0: Call2 0x9d4

0x1b1: Pop(0)
0x1b2: Push((int) 26901)
0x1b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b5: PushEmpty(object, object)
0x1b6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b8: Call2 0xa6a

0x1b9: Pop(2)
0x1ba: Push((int) 42726)
0x1bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: PushEmpty(object, object)
0x1be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c0: Call2 0xac8

0x1c1: Pop(2)
0x1c2: Push((int) 26890)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral" // @poff=89
0x1c7: Call2 0x196

0x1c8: Pop(1)
0x1c9: Push((int) 525534)
0x1ca: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1cb: Pop(1)
0x1cc: @@@ ClearReplies(); Obj=0 // @poff=116
0x1cd: Pop(0)
0x1ce: PushEmpty(bool, object)
0x1cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d0: Call2 0xacf

0x1d1: Pop(1)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d3: Push((int) 525541)
0x1d4: Push((int) 42712)
0x1d5: Push((int) 26897)
0x1d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d7: Pop(3)
0x1d8: Push((int) 525546)
0x1d9: Push((int) -1)
0x1da: Push((int) 26902)
0x1db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1dc: Pop(3)
0x1dd: Return(); Pop(0)

0x1de: Push((int) 42712)
0x1df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1e1: PushEmpty(string)
0x1e2: Stack[-1] = "Neutral" // @poff=89
0x1e3: Call2 0x196

0x1e4: Pop(1)
0x1e5: Push((int) 540679)
0x1e6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e7: Pop(1)
0x1e8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e9: Pop(0)
0x1ea: Push((int) 540680)
0x1eb: Push((int) 42715)
0x1ec: Push((int) 42713)
0x1ed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ee: Pop(3)
0x1ef: Push((int) 540681)
0x1f0: Push((int) 42718)
0x1f1: Push((int) 42714)
0x1f2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f3: Pop(3)
0x1f4: Return(); Pop(0)

0x1f5: Push((int) 42715)
0x1f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1f8: PushEmpty(string)
0x1f9: Stack[-1] = "Neutral" // @poff=89
0x1fa: Call2 0x196

0x1fb: Pop(1)
0x1fc: Push((int) 540682)
0x1fd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fe: Pop(1)
0x1ff: @@@ ClearReplies(); Obj=0 // @poff=116
0x200: Pop(0)
0x201: Push((int) 540683)
0x202: Push((int) 42722)
0x203: Push((int) 42716)
0x204: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x205: Pop(3)
0x206: Push((int) 540684)
0x207: Push((int) 42718)
0x208: Push((int) 42717)
0x209: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 42718)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Neutral" // @poff=89
0x211: Call2 0x196

0x212: Pop(1)
0x213: Push((int) 540685)
0x214: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x215: Pop(1)
0x216: @@@ ClearReplies(); Obj=0 // @poff=116
0x217: Pop(0)
0x218: Push((int) 540686)
0x219: Push((int) 42722)
0x21a: Push((int) 42720)
0x21b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x21c: Pop(3)
0x21d: Push((int) 540687)
0x21e: Push((int) 42722)
0x21f: Push((int) 42721)
0x220: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x221: Pop(3)
0x222: Return(); Pop(0)

0x223: Push((int) 42722)
0x224: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x226: PushEmpty(string)
0x227: Stack[-1] = "Neutral" // @poff=89
0x228: Call2 0x196

0x229: Pop(1)
0x22a: Push((int) 540688)
0x22b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x22c: Pop(1)
0x22d: @@@ ClearReplies(); Obj=0 // @poff=116
0x22e: Pop(0)
0x22f: Push((int) 540689)
0x230: Push((int) 42727)
0x231: Push((int) 42725)
0x232: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x233: Pop(3)
0x234: Push((int) 540690)
0x235: Push((int) -1)
0x236: Push((int) 42726)
0x237: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x238: Pop(3)
0x239: Return(); Pop(0)

0x23a: Push((int) 42727)
0x23b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x23d: PushEmpty(string)
0x23e: Stack[-1] = "Neutral" // @poff=89
0x23f: Call2 0x196

0x240: Pop(1)
0x241: Push((int) 540691)
0x242: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x243: Pop(1)
0x244: @@@ ClearReplies(); Obj=0 // @poff=116
0x245: Pop(0)
0x246: Push((int) 540692)
0x247: Push((int) 26898)
0x248: Push((int) 42728)
0x249: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x24a: Pop(3)
0x24b: Return(); Pop(0)

0x24c: Push((int) 26898)
0x24d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x24f: PushEmpty(string)
0x250: Stack[-1] = "Neutral" // @poff=89
0x251: Call2 0x196

0x252: Pop(1)
0x253: Push((int) 525542)
0x254: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x255: Pop(1)
0x256: @@@ ClearReplies(); Obj=0 // @poff=116
0x257: Pop(0)
0x258: Push((int) 525543)
0x259: Push((int) 26900)
0x25a: Push((int) 26899)
0x25b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25c: Pop(3)
0x25d: Push((int) 540693)
0x25e: Push((int) 42730)
0x25f: Push((int) 42729)
0x260: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x261: Pop(3)
0x262: Return(); Pop(0)

0x263: Push((int) 42730)
0x264: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x266: PushEmpty(string)
0x267: Stack[-1] = "Neutral" // @poff=89
0x268: Call2 0x196

0x269: Pop(1)
0x26a: Push((int) 540694)
0x26b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x26c: Pop(1)
0x26d: @@@ ClearReplies(); Obj=0 // @poff=116
0x26e: Pop(0)
0x26f: Push((int) 540695)
0x270: Push((int) -1)
0x271: Push((int) 42731)
0x272: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x273: Pop(3)
0x274: PushEmpty(bool, object)
0x275: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x276: Call2 0xadb

0x277: Pop(1)
0x278: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x279: Push((int) 540696)
0x27a: Push((int) -1)
0x27b: Push((int) 42732)
0x27c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27d: Pop(3)
0x27e: Return(); Pop(0)

0x27f: Push((int) 26900)
0x280: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x282: PushEmpty(string)
0x283: Stack[-1] = "Neutral" // @poff=89
0x284: Call2 0x196

0x285: Pop(1)
0x286: Push((int) 525544)
0x287: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x288: Pop(1)
0x289: @@@ ClearReplies(); Obj=0 // @poff=116
0x28a: Pop(0)
0x28b: Push((int) 540697)
0x28c: Push((int) 42734)
0x28d: Push((int) 42733)
0x28e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x28f: Pop(3)
0x290: Push((int) 540699)
0x291: Push((int) -1)
0x292: Push((int) 42735)
0x293: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x294: Pop(3)
0x295: Return(); Pop(0)

0x296: Push((int) 42734)
0x297: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x299: PushEmpty(string)
0x29a: Stack[-1] = "Neutral" // @poff=89
0x29b: Call2 0x196

0x29c: Pop(1)
0x29d: Push((int) 540698)
0x29e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x29f: Pop(1)
0x2a0: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a1: Pop(0)
0x2a2: Push((int) 525545)
0x2a3: Push((int) -1)
0x2a4: Push((int) 26901)
0x2a5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a6: Pop(3)
0x2a7: Return(); Pop(0)

0x2a8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2a9: PushEmpty(bool)
0x2aa: Call2 0xa68

0x2ab: Pop(0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ad: @ lshStopAnimation()
0x2ae: Pop(0)
0x2af: GOTO 0x2b2

0x2b0: @ StopAnimation()
0x2b1: Pop(0)
0x2b2: Return(); Pop(0)

0x2b3: GOTO 0x1ad

0x2b4: Return(); Pop(0)

0x2b5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2b6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2b7: PushEmpty(bool, object)
0x2b8: PushEmpty(object)
0x2b9: Call2 0x9db

0x2ba: Stack[-1] = Stack[-2]
0x2bb: Pop(1)
0x2bc: Call2 0x92e

0x2bd: Pop(2)
0x2be: PushEmpty(bool, object, float)
0x2bf: Stack[-12] = Stack[-2]
0x2c0: Stack[-1] = (float) 70.0
0x2c1: Call2 0x8d9

0x2c2: Pop(2)
0x2c3: Pop(1); Push((bool) Stack[-1] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c5: Stack[-10] = (int) -2
0x2c6: Return(); Pop(8)

0x2c7: @ CreateDialog(Stack[-4])
0x2c8: Pop(0)
0x2c9: PushEmpty(int)
0x2ca: Call2 0xa62

0x2cb: Pop(0)
0x2cc: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x2cd: Pop(1)
0x2ce: PushEmpty(int)
0x2cf: Call2 0xa60

0x2d0: Pop(0)
0x2d1: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2d2: Pop(1)
0x2d3: PushEmpty(string)
0x2d4: Call2 0xa64

0x2d5: Pop(0)
0x2d6: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2d7: Pop(1)
0x2d8: PushEmpty(string)
0x2d9: Call2 0xa66

0x2da: Pop(0)
0x2db: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x2dc: Pop(1)
0x2dd: PushEmpty(int)
0x2de: Call2 0xbad

0x2df: Pop(0)
0x2e0: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x2e1: Pop(1)
0x2e2: Stack[-2] = (int) -1
0x2e3: @ IsOverrideActive(Stack[-3])
0x2e4: Pop(0)
0x2e5: Push(Stack[-3])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e7: Stack[-10] = (int) -2
0x2e8: Return(); Pop(8)

0x2e9: @ DoDialog(Stack[-4])
0x2ea: Pop(0)
0x2eb: PushEmpty(object, object)
0x2ec: Stack[-11] = Stack[-2]
0x2ed: Stack[-6] = Stack[-1]
0x2ee: Push(-2, 4); TaskCall(6)
0x2ef: Call2 0x306

0x2f0: Pop(-2, 4); TaskReturn
0x2f1: Pop(2)
0x2f2: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2f3: Pop(0)
0x2f4: Pop(0); Push((bool) Stack[-1] == 0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f6: @ sync()
0x2f7: Pop(0)
0x2f8: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2f9: Pop(0)
0x2fa: GOTO 0x2f4

0x2fb: PushEmpty(object)
0x2fc: Stack[-10] = Stack[-1]
0x2fd: Call2 0x91d

0x2fe: Pop(1)
0x2ff: @ StopDialog(Stack[-4])
0x300: Pop(0)
0x301: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x302: Pop(0)
0x303: Stack[-2] = Stack[-10]
0x304: Return(); Pop(8)

0x305: Stack[-4] = 0
0x306: PushEmpty()
0x307: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x308: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x309: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x30a: Push((int) 1)
0x30b: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x30c: PushEmpty(string)
0x30d: Stack[-1] = "Neutral" // @poff=89
0x30e: Call2 0x34a

0x30f: Pop(1)
0x310: Push((int) 526045)
0x311: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x312: Pop(1)
0x313: @@@ ClearReplies(); Obj=0 // @poff=116
0x314: Pop(0)
0x315: PushEmpty(bool, object)
0x316: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x317: Call2 0xae7

0x318: Pop(1)
0x319: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31a: Push((int) 526046)
0x31b: Push((int) 27332)
0x31c: Push((int) 27331)
0x31d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31e: Pop(3)
0x31f: Push((int) 526063)
0x320: Push((int) -1)
0x321: Push((int) 27348)
0x322: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x323: Pop(3)
0x324: Push((int) 528877)
0x325: Push((int) -1)
0x326: Push((int) 30300)
0x327: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x328: Pop(3)
0x329: GOTO 0x32c

0x32a: Return(); Pop(0)

0x32b: GOTO 0x30a

0x32c: PushEmpty(bool)
0x32d: Call2 0xa68

0x32e: Pop(0)
0x32f: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x330: @ lshWaitForAnimEnd()
0x331: Pop(0)
0x332: Push( Stack[3 + Tasks[-1].StackPointer] )
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: GOTO 0x33a

0x335: PushEmpty(string)
0x336: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x337: Call2 0x9b8

0x338: Pop(1)
0x339: GOTO 0x330

0x33a: GOTO 0x349

0x33b: Push("all") // @poff=138
0x33c: Push("idle") // @poff=146
0x33d: @ PlayAnimation(Stack[-2], Stack[-1])
0x33e: Pop(2)
0x33f: @ WaitForAnimEnd()
0x340: Pop(0)
0x341: Push( Stack[3 + Tasks[-1].StackPointer] )
0x342: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x343: GOTO 0x349

0x344: Push("all") // @poff=138
0x345: Push("idle") // @poff=146
0x346: @ PlayAnimation(Stack[-2], Stack[-1])
0x347: Pop(2)
0x348: GOTO 0x33f

0x349: Return(); Pop(0)

0x34a: PushEmpty()
0x34b: PushEmpty(bool)
0x34c: Call2 0xa68

0x34d: Pop(0)
0x34e: Pop(1); Push((bool) Stack[-1] == 0)
0x34f: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x350: Return(); Pop(0)

0x351: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x352: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x353: Return(); Pop(0)

0x354: PushEmpty(string, bool)
0x355: Stack[-3] = Stack[-2]
0x356: Push("") // @poff=102
0x357: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x359: Stack[-1] = (bool) 0
0x35a: GOTO 0x35c

0x35b: Stack[-1] = (bool) 1
0x35c: Call2 0x9bf

0x35d: Pop(2)
0x35e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x35f: Return(); Pop(0)

0x360: PushEmpty()
0x361: Push((int) 1)
0x362: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x363: PushEmpty()
0x364: Call2 0x9d4

0x365: Pop(0)
0x366: Push((int) 27347)
0x367: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x369: PushEmpty(object, object)
0x36a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36c: Call2 0xa81

0x36d: Pop(2)
0x36e: Push((int) 27330)
0x36f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x371: PushEmpty(string)
0x372: Stack[-1] = "Neutral" // @poff=89
0x373: Call2 0x34a

0x374: Pop(1)
0x375: Push((int) 526045)
0x376: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x377: Pop(1)
0x378: @@@ ClearReplies(); Obj=0 // @poff=116
0x379: Pop(0)
0x37a: PushEmpty(bool, object)
0x37b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37c: Call2 0xae7

0x37d: Pop(1)
0x37e: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37f: Push((int) 526046)
0x380: Push((int) 27332)
0x381: Push((int) 27331)
0x382: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x383: Pop(3)
0x384: Push((int) 526063)
0x385: Push((int) -1)
0x386: Push((int) 27348)
0x387: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x388: Pop(3)
0x389: Push((int) 528877)
0x38a: Push((int) -1)
0x38b: Push((int) 30300)
0x38c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x38d: Pop(3)
0x38e: Return(); Pop(0)

0x38f: Push((int) 27332)
0x390: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x392: PushEmpty(string)
0x393: Stack[-1] = "Neutral" // @poff=89
0x394: Call2 0x34a

0x395: Pop(1)
0x396: Push((int) 526047)
0x397: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x398: Pop(1)
0x399: @@@ ClearReplies(); Obj=0 // @poff=116
0x39a: Pop(0)
0x39b: Push((int) 526048)
0x39c: Push((int) 27334)
0x39d: Push((int) 27333)
0x39e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39f: Pop(3)
0x3a0: Push((int) 528878)
0x3a1: Push((int) 27334)
0x3a2: Push((int) 30301)
0x3a3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a4: Pop(3)
0x3a5: Return(); Pop(0)

0x3a6: Push((int) 27334)
0x3a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3a9: PushEmpty(string)
0x3aa: Stack[-1] = "Neutral" // @poff=89
0x3ab: Call2 0x34a

0x3ac: Pop(1)
0x3ad: Push((int) 526049)
0x3ae: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3af: Pop(1)
0x3b0: @@@ ClearReplies(); Obj=0 // @poff=116
0x3b1: Pop(0)
0x3b2: Push((int) 526050)
0x3b3: Push((int) 27336)
0x3b4: Push((int) 27335)
0x3b5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b6: Pop(3)
0x3b7: Push((int) 528879)
0x3b8: Push((int) 27338)
0x3b9: Push((int) 30303)
0x3ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3bb: Pop(3)
0x3bc: Return(); Pop(0)

0x3bd: Push((int) 27336)
0x3be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = "Neutral" // @poff=89
0x3c2: Call2 0x34a

0x3c3: Pop(1)
0x3c4: Push((int) 526051)
0x3c5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c6: Pop(1)
0x3c7: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c8: Pop(0)
0x3c9: Push((int) 526052)
0x3ca: Push((int) 27338)
0x3cb: Push((int) 27337)
0x3cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3cd: Pop(3)
0x3ce: Return(); Pop(0)

0x3cf: Push((int) 27338)
0x3d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3d2: PushEmpty(string)
0x3d3: Stack[-1] = "Neutral" // @poff=89
0x3d4: Call2 0x34a

0x3d5: Pop(1)
0x3d6: Push((int) 526053)
0x3d7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d8: Pop(1)
0x3d9: @@@ ClearReplies(); Obj=0 // @poff=116
0x3da: Pop(0)
0x3db: Push((int) 528880)
0x3dc: Push((int) 30306)
0x3dd: Push((int) 30305)
0x3de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3df: Pop(3)
0x3e0: Push((int) 528882)
0x3e1: Push((int) 30306)
0x3e2: Push((int) 30307)
0x3e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e4: Pop(3)
0x3e5: Return(); Pop(0)

0x3e6: Push((int) 30306)
0x3e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3e9: PushEmpty(string)
0x3ea: Stack[-1] = "Neutral" // @poff=89
0x3eb: Call2 0x34a

0x3ec: Pop(1)
0x3ed: Push((int) 528881)
0x3ee: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ef: Pop(1)
0x3f0: @@@ ClearReplies(); Obj=0 // @poff=116
0x3f1: Pop(0)
0x3f2: Push((int) 526054)
0x3f3: Push((int) 27340)
0x3f4: Push((int) 27339)
0x3f5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f6: Pop(3)
0x3f7: Push((int) 526056)
0x3f8: Push((int) 27342)
0x3f9: Push((int) 27341)
0x3fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3fb: Pop(3)
0x3fc: Return(); Pop(0)

0x3fd: Push((int) 27342)
0x3fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x400: PushEmpty(string)
0x401: Stack[-1] = "Neutral" // @poff=89
0x402: Call2 0x34a

0x403: Pop(1)
0x404: Push((int) 526057)
0x405: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x406: Pop(1)
0x407: @@@ ClearReplies(); Obj=0 // @poff=116
0x408: Pop(0)
0x409: Push((int) 526058)
0x40a: Push((int) 27344)
0x40b: Push((int) 27343)
0x40c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40d: Pop(3)
0x40e: Return(); Pop(0)

0x40f: Push((int) 27340)
0x410: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x412: PushEmpty(string)
0x413: Stack[-1] = "Neutral" // @poff=89
0x414: Call2 0x34a

0x415: Pop(1)
0x416: Push((int) 526055)
0x417: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x418: Pop(1)
0x419: @@@ ClearReplies(); Obj=0 // @poff=116
0x41a: Pop(0)
0x41b: Push((int) 528883)
0x41c: Push((int) 27344)
0x41d: Push((int) 30309)
0x41e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x41f: Pop(3)
0x420: Return(); Pop(0)

0x421: Push((int) 27344)
0x422: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x424: PushEmpty(string)
0x425: Stack[-1] = "Neutral" // @poff=89
0x426: Call2 0x34a

0x427: Pop(1)
0x428: Push((int) 526059)
0x429: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x42a: Pop(1)
0x42b: @@@ ClearReplies(); Obj=0 // @poff=116
0x42c: Pop(0)
0x42d: Push((int) 528886)
0x42e: Push((int) 30314)
0x42f: Push((int) 30313)
0x430: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x431: Pop(3)
0x432: Push((int) 540972)
0x433: Push((int) 43062)
0x434: Push((int) 43061)
0x435: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x436: Pop(3)
0x437: Return(); Pop(0)

0x438: Push((int) 43062)
0x439: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43a: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x43b: PushEmpty(string)
0x43c: Stack[-1] = "Neutral" // @poff=89
0x43d: Call2 0x34a

0x43e: Pop(1)
0x43f: Push((int) 540973)
0x440: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x441: Pop(1)
0x442: @@@ ClearReplies(); Obj=0 // @poff=116
0x443: Pop(0)
0x444: Push((int) 540974)
0x445: Push((int) 30314)
0x446: Push((int) 43063)
0x447: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x448: Pop(3)
0x449: Return(); Pop(0)

0x44a: Push((int) 30314)
0x44b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x44d: PushEmpty(string)
0x44e: Stack[-1] = "Neutral" // @poff=89
0x44f: Call2 0x34a

0x450: Pop(1)
0x451: Push((int) 528887)
0x452: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x453: Pop(1)
0x454: @@@ ClearReplies(); Obj=0 // @poff=116
0x455: Pop(0)
0x456: Push((int) 526060)
0x457: Push((int) 27346)
0x458: Push((int) 27345)
0x459: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x45a: Pop(3)
0x45b: Return(); Pop(0)

0x45c: Push((int) 27346)
0x45d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x45f: PushEmpty(string)
0x460: Stack[-1] = "Neutral" // @poff=89
0x461: Call2 0x34a

0x462: Pop(1)
0x463: Push((int) 526061)
0x464: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x465: Pop(1)
0x466: @@@ ClearReplies(); Obj=0 // @poff=116
0x467: Pop(0)
0x468: Push((int) 526062)
0x469: Push((int) -1)
0x46a: Push((int) 27347)
0x46b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x46c: Pop(3)
0x46d: Return(); Pop(0)

0x46e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x46f: PushEmpty(bool)
0x470: Call2 0xa68

0x471: Pop(0)
0x472: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x473: @ lshStopAnimation()
0x474: Pop(0)
0x475: GOTO 0x478

0x476: @ StopAnimation()
0x477: Pop(0)
0x478: Return(); Pop(0)

0x479: GOTO 0x361

0x47a: Return(); Pop(0)

0x47b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x47c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x47d: PushEmpty(bool, object)
0x47e: PushEmpty(object)
0x47f: Call2 0x9db

0x480: Stack[-1] = Stack[-2]
0x481: Pop(1)
0x482: Call2 0x92e

0x483: Pop(2)
0x484: PushEmpty(bool, object, float)
0x485: Stack[-12] = Stack[-2]
0x486: Stack[-1] = (float) 70.0
0x487: Call2 0x8d9

0x488: Pop(2)
0x489: Pop(1); Push((bool) Stack[-1] == 0)
0x48a: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48b: Stack[-10] = (int) -2
0x48c: Return(); Pop(8)

0x48d: @ CreateDialog(Stack[-4])
0x48e: Pop(0)
0x48f: PushEmpty(int)
0x490: Call2 0xa62

0x491: Pop(0)
0x492: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x493: Pop(1)
0x494: PushEmpty(int)
0x495: Call2 0xa60

0x496: Pop(0)
0x497: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x498: Pop(1)
0x499: PushEmpty(string)
0x49a: Call2 0xa64

0x49b: Pop(0)
0x49c: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x49d: Pop(1)
0x49e: PushEmpty(string)
0x49f: Call2 0xa66

0x4a0: Pop(0)
0x4a1: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x4a2: Pop(1)
0x4a3: PushEmpty(int)
0x4a4: Call2 0xbad

0x4a5: Pop(0)
0x4a6: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x4a7: Pop(1)
0x4a8: Stack[-2] = (int) -1
0x4a9: @ IsOverrideActive(Stack[-3])
0x4aa: Pop(0)
0x4ab: Push(Stack[-3])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ad: Stack[-10] = (int) -2
0x4ae: Return(); Pop(8)

0x4af: @ DoDialog(Stack[-4])
0x4b0: Pop(0)
0x4b1: PushEmpty(object, object)
0x4b2: Stack[-11] = Stack[-2]
0x4b3: Stack[-6] = Stack[-1]
0x4b4: Push(-2, 4); TaskCall(8)
0x4b5: Call2 0x4cc

0x4b6: Pop(-2, 4); TaskReturn
0x4b7: Pop(2)
0x4b8: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4b9: Pop(0)
0x4ba: Pop(0); Push((bool) Stack[-1] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bc: @ sync()
0x4bd: Pop(0)
0x4be: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4bf: Pop(0)
0x4c0: GOTO 0x4ba

0x4c1: PushEmpty(object)
0x4c2: Stack[-10] = Stack[-1]
0x4c3: Call2 0x91d

0x4c4: Pop(1)
0x4c5: @ StopDialog(Stack[-4])
0x4c6: Pop(0)
0x4c7: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4c8: Pop(0)
0x4c9: Stack[-2] = Stack[-10]
0x4ca: Return(); Pop(8)

0x4cb: Stack[-4] = 0
0x4cc: PushEmpty()
0x4cd: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4ce: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4cf: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4d0: Push((int) 1)
0x4d1: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4d2: PushEmpty(string)
0x4d3: Stack[-1] = "Neutral" // @poff=89
0x4d4: Call2 0x514

0x4d5: Pop(1)
0x4d6: Push((int) 527568)
0x4d7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4d8: Pop(1)
0x4d9: @@@ ClearReplies(); Obj=0 // @poff=116
0x4da: Pop(0)
0x4db: PushEmpty(bool)
0x4dc: Stack[-1] = (bool) 0
0x4dd: PushEmpty(bool, object)
0x4de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4df: Call2 0xaff

0x4e0: Pop(1)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e2: PushEmpty(bool, object)
0x4e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e4: Call2 0xaf3

0x4e5: Pop(1)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: Stack[-1] = (bool) 1
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4e9: Push((int) 527570)
0x4ea: Push((int) 28913)
0x4eb: Push((int) 28912)
0x4ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ed: Pop(3)
0x4ee: Push((int) 527569)
0x4ef: Push((int) -1)
0x4f0: Push((int) 28911)
0x4f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4f2: Pop(3)
0x4f3: GOTO 0x4f6

0x4f4: Return(); Pop(0)

0x4f5: GOTO 0x4d0

0x4f6: PushEmpty(bool)
0x4f7: Call2 0xa68

0x4f8: Pop(0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4fa: @ lshWaitForAnimEnd()
0x4fb: Pop(0)
0x4fc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4fd: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fe: GOTO 0x504

0x4ff: PushEmpty(string)
0x500: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x501: Call2 0x9b8

0x502: Pop(1)
0x503: GOTO 0x4fa

0x504: GOTO 0x513

0x505: Push("all") // @poff=138
0x506: Push("idle") // @poff=146
0x507: @ PlayAnimation(Stack[-2], Stack[-1])
0x508: Pop(2)
0x509: @ WaitForAnimEnd()
0x50a: Pop(0)
0x50b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x50c: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50d: GOTO 0x513

0x50e: Push("all") // @poff=138
0x50f: Push("idle") // @poff=146
0x510: @ PlayAnimation(Stack[-2], Stack[-1])
0x511: Pop(2)
0x512: GOTO 0x509

0x513: Return(); Pop(0)

0x514: PushEmpty()
0x515: PushEmpty(bool)
0x516: Call2 0xa68

0x517: Pop(0)
0x518: Pop(1); Push((bool) Stack[-1] == 0)
0x519: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x51a: Return(); Pop(0)

0x51b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x51c: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51d: Return(); Pop(0)

0x51e: PushEmpty(string, bool)
0x51f: Stack[-3] = Stack[-2]
0x520: Push("") // @poff=102
0x521: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x523: Stack[-1] = (bool) 0
0x524: GOTO 0x526

0x525: Stack[-1] = (bool) 1
0x526: Call2 0x9bf

0x527: Pop(2)
0x528: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x529: Return(); Pop(0)

0x52a: PushEmpty()
0x52b: Push((int) 1)
0x52c: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x52d: PushEmpty()
0x52e: Call2 0x9d4

0x52f: Pop(0)
0x530: Push((int) 28912)
0x531: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x533: PushEmpty(object, object)
0x534: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x535: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x536: Call2 0xac2

0x537: Pop(2)
0x538: Push((int) 28924)
0x539: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53b: PushEmpty(object, object)
0x53c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x53d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53e: Call2 0xa8f

0x53f: Pop(2)
0x540: Push((int) 28929)
0x541: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x543: PushEmpty(object, object)
0x544: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x545: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x546: Call2 0xa8f

0x547: Pop(2)
0x548: Push((int) 28910)
0x549: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x54b: PushEmpty(string)
0x54c: Stack[-1] = "Neutral" // @poff=89
0x54d: Call2 0x514

0x54e: Pop(1)
0x54f: Push((int) 527568)
0x550: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x551: Pop(1)
0x552: @@@ ClearReplies(); Obj=0 // @poff=116
0x553: Pop(0)
0x554: PushEmpty(bool)
0x555: Stack[-1] = (bool) 0
0x556: PushEmpty(bool, object)
0x557: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x558: Call2 0xaff

0x559: Pop(1)
0x55a: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55b: PushEmpty(bool, object)
0x55c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x55d: Call2 0xaf3

0x55e: Pop(1)
0x55f: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x560: Stack[-1] = (bool) 1
0x561: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x562: Push((int) 527570)
0x563: Push((int) 28913)
0x564: Push((int) 28912)
0x565: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x566: Pop(3)
0x567: Push((int) 527569)
0x568: Push((int) -1)
0x569: Push((int) 28911)
0x56a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x56b: Pop(3)
0x56c: Return(); Pop(0)

0x56d: Push((int) 28913)
0x56e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x570: PushEmpty(string)
0x571: Stack[-1] = "Neutral" // @poff=89
0x572: Call2 0x514

0x573: Pop(1)
0x574: Push((int) 527571)
0x575: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x576: Pop(1)
0x577: @@@ ClearReplies(); Obj=0 // @poff=116
0x578: Pop(0)
0x579: Push((int) 527572)
0x57a: Push((int) 28915)
0x57b: Push((int) 28914)
0x57c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x57d: Pop(3)
0x57e: Push((int) 527583)
0x57f: Push((int) 28926)
0x580: Push((int) 28925)
0x581: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x582: Pop(3)
0x583: Return(); Pop(0)

0x584: Push((int) 28926)
0x585: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x586: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x587: PushEmpty(string)
0x588: Stack[-1] = "Neutral" // @poff=89
0x589: Call2 0x514

0x58a: Pop(1)
0x58b: Push((int) 527584)
0x58c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x58d: Pop(1)
0x58e: @@@ ClearReplies(); Obj=0 // @poff=116
0x58f: Pop(0)
0x590: Push((int) 527585)
0x591: Push((int) 28917)
0x592: Push((int) 28927)
0x593: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x594: Pop(3)
0x595: Return(); Pop(0)

0x596: Push((int) 28915)
0x597: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x598: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x599: PushEmpty(string)
0x59a: Stack[-1] = "Neutral" // @poff=89
0x59b: Call2 0x514

0x59c: Pop(1)
0x59d: Push((int) 527573)
0x59e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x59f: Pop(1)
0x5a0: @@@ ClearReplies(); Obj=0 // @poff=116
0x5a1: Pop(0)
0x5a2: Push((int) 527574)
0x5a3: Push((int) 28917)
0x5a4: Push((int) 28916)
0x5a5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5a6: Pop(3)
0x5a7: Return(); Pop(0)

0x5a8: Push((int) 28917)
0x5a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5ab: PushEmpty(string)
0x5ac: Stack[-1] = "Neutral" // @poff=89
0x5ad: Call2 0x514

0x5ae: Pop(1)
0x5af: Push((int) 527575)
0x5b0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b1: Pop(1)
0x5b2: @@@ ClearReplies(); Obj=0 // @poff=116
0x5b3: Pop(0)
0x5b4: Push((int) 527576)
0x5b5: Push((int) 28919)
0x5b6: Push((int) 28918)
0x5b7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5b8: Pop(3)
0x5b9: Return(); Pop(0)

0x5ba: Push((int) 28919)
0x5bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5bd: PushEmpty(string)
0x5be: Stack[-1] = "Neutral" // @poff=89
0x5bf: Call2 0x514

0x5c0: Pop(1)
0x5c1: Push((int) 527577)
0x5c2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5c3: Pop(1)
0x5c4: @@@ ClearReplies(); Obj=0 // @poff=116
0x5c5: Pop(0)
0x5c6: Push((int) 527578)
0x5c7: Push((int) 28921)
0x5c8: Push((int) 28920)
0x5c9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5ca: Pop(3)
0x5cb: Return(); Pop(0)

0x5cc: Push((int) 28921)
0x5cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5cf: PushEmpty(string)
0x5d0: Stack[-1] = "Neutral" // @poff=89
0x5d1: Call2 0x514

0x5d2: Pop(1)
0x5d3: Push((int) 527579)
0x5d4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d5: Pop(1)
0x5d6: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d7: Pop(0)
0x5d8: Push((int) 527580)
0x5d9: Push((int) 28923)
0x5da: Push((int) 28922)
0x5db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5dc: Pop(3)
0x5dd: Return(); Pop(0)

0x5de: Push((int) 28923)
0x5df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5e1: PushEmpty(string)
0x5e2: Stack[-1] = "Neutral" // @poff=89
0x5e3: Call2 0x514

0x5e4: Pop(1)
0x5e5: Push((int) 527581)
0x5e6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5e7: Pop(1)
0x5e8: @@@ ClearReplies(); Obj=0 // @poff=116
0x5e9: Pop(0)
0x5ea: Push((int) 527582)
0x5eb: Push((int) -1)
0x5ec: Push((int) 28924)
0x5ed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5ee: Pop(3)
0x5ef: Push((int) 527586)
0x5f0: Push((int) -1)
0x5f1: Push((int) 28929)
0x5f2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5f3: Pop(3)
0x5f4: Return(); Pop(0)

0x5f5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5f6: PushEmpty(bool)
0x5f7: Call2 0xa68

0x5f8: Pop(0)
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5fa: @ lshStopAnimation()
0x5fb: Pop(0)
0x5fc: GOTO 0x5ff

0x5fd: @ StopAnimation()
0x5fe: Pop(0)
0x5ff: Return(); Pop(0)

0x600: GOTO 0x52b

0x601: Return(); Pop(0)

0x602: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x603: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x604: PushEmpty(bool, object)
0x605: PushEmpty(object)
0x606: Call2 0x9db

0x607: Stack[-1] = Stack[-2]
0x608: Pop(1)
0x609: Call2 0x92e

0x60a: Pop(2)
0x60b: PushEmpty(bool, object, float)
0x60c: Stack[-12] = Stack[-2]
0x60d: Stack[-1] = (float) 70.0
0x60e: Call2 0x8d9

0x60f: Pop(2)
0x610: Pop(1); Push((bool) Stack[-1] == 0)
0x611: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x612: Stack[-10] = (int) -2
0x613: Return(); Pop(8)

0x614: @ CreateDialog(Stack[-4])
0x615: Pop(0)
0x616: PushEmpty(int)
0x617: Call2 0xa62

0x618: Pop(0)
0x619: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x61a: Pop(1)
0x61b: PushEmpty(int)
0x61c: Call2 0xa60

0x61d: Pop(0)
0x61e: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x61f: Pop(1)
0x620: PushEmpty(string)
0x621: Call2 0xa64

0x622: Pop(0)
0x623: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x624: Pop(1)
0x625: PushEmpty(string)
0x626: Call2 0xa66

0x627: Pop(0)
0x628: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x629: Pop(1)
0x62a: PushEmpty(int)
0x62b: Call2 0xbad

0x62c: Pop(0)
0x62d: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x62e: Pop(1)
0x62f: Stack[-2] = (int) -1
0x630: @ IsOverrideActive(Stack[-3])
0x631: Pop(0)
0x632: Push(Stack[-3])
0x633: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x634: Stack[-10] = (int) -2
0x635: Return(); Pop(8)

0x636: @ DoDialog(Stack[-4])
0x637: Pop(0)
0x638: PushEmpty(object, object)
0x639: Stack[-11] = Stack[-2]
0x63a: Stack[-6] = Stack[-1]
0x63b: Push(-2, 4); TaskCall(10)
0x63c: Call2 0x653

0x63d: Pop(-2, 4); TaskReturn
0x63e: Pop(2)
0x63f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x640: Pop(0)
0x641: Pop(0); Push((bool) Stack[-1] == 0)
0x642: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x643: @ sync()
0x644: Pop(0)
0x645: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x646: Pop(0)
0x647: GOTO 0x641

0x648: PushEmpty(object)
0x649: Stack[-10] = Stack[-1]
0x64a: Call2 0x91d

0x64b: Pop(1)
0x64c: @ StopDialog(Stack[-4])
0x64d: Pop(0)
0x64e: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x64f: Pop(0)
0x650: Stack[-2] = Stack[-10]
0x651: Return(); Pop(8)

0x652: Stack[-4] = 0
0x653: PushEmpty()
0x654: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x655: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x656: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x657: Push((int) 1)
0x658: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x659: PushEmpty(string)
0x65a: Stack[-1] = "Neutral" // @poff=89
0x65b: Call2 0x688

0x65c: Pop(1)
0x65d: Push((int) 539300)
0x65e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x65f: Pop(1)
0x660: @@@ ClearReplies(); Obj=0 // @poff=116
0x661: Pop(0)
0x662: Push((int) 539301)
0x663: Push((int) -1)
0x664: Push((int) 41244)
0x665: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x666: Pop(3)
0x667: GOTO 0x66a

0x668: Return(); Pop(0)

0x669: GOTO 0x657

0x66a: PushEmpty(bool)
0x66b: Call2 0xa68

0x66c: Pop(0)
0x66d: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x66e: @ lshWaitForAnimEnd()
0x66f: Pop(0)
0x670: Push( Stack[3 + Tasks[-1].StackPointer] )
0x671: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x672: GOTO 0x678

0x673: PushEmpty(string)
0x674: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x675: Call2 0x9b8

0x676: Pop(1)
0x677: GOTO 0x66e

0x678: GOTO 0x687

0x679: Push("all") // @poff=138
0x67a: Push("idle") // @poff=146
0x67b: @ PlayAnimation(Stack[-2], Stack[-1])
0x67c: Pop(2)
0x67d: @ WaitForAnimEnd()
0x67e: Pop(0)
0x67f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x680: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x681: GOTO 0x687

0x682: Push("all") // @poff=138
0x683: Push("idle") // @poff=146
0x684: @ PlayAnimation(Stack[-2], Stack[-1])
0x685: Pop(2)
0x686: GOTO 0x67d

0x687: Return(); Pop(0)

0x688: PushEmpty()
0x689: PushEmpty(bool)
0x68a: Call2 0xa68

0x68b: Pop(0)
0x68c: Pop(1); Push((bool) Stack[-1] == 0)
0x68d: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68e: Return(); Pop(0)

0x68f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x690: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x691: Return(); Pop(0)

0x692: PushEmpty(string, bool)
0x693: Stack[-3] = Stack[-2]
0x694: Push("") // @poff=102
0x695: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x696: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x697: Stack[-1] = (bool) 0
0x698: GOTO 0x69a

0x699: Stack[-1] = (bool) 1
0x69a: Call2 0x9bf

0x69b: Pop(2)
0x69c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x69d: Return(); Pop(0)

0x69e: PushEmpty()
0x69f: Push((int) 1)
0x6a0: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6a1: PushEmpty()
0x6a2: Call2 0x9d4

0x6a3: Pop(0)
0x6a4: Push((int) 41243)
0x6a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a6: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6a7: PushEmpty(string)
0x6a8: Stack[-1] = "Neutral" // @poff=89
0x6a9: Call2 0x688

0x6aa: Pop(1)
0x6ab: Push((int) 539300)
0x6ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6ad: Pop(1)
0x6ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x6af: Pop(0)
0x6b0: Push((int) 539301)
0x6b1: Push((int) -1)
0x6b2: Push((int) 41244)
0x6b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b4: Pop(3)
0x6b5: Return(); Pop(0)

0x6b6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6b7: PushEmpty(bool)
0x6b8: Call2 0xa68

0x6b9: Pop(0)
0x6ba: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bb: @ lshStopAnimation()
0x6bc: Pop(0)
0x6bd: GOTO 0x6c0

0x6be: @ StopAnimation()
0x6bf: Pop(0)
0x6c0: Return(); Pop(0)

0x6c1: GOTO 0x69f

0x6c2: Return(); Pop(0)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object)
0x6c6: PushEmpty(object)
0x6c7: Call2 0x9db

0x6c8: Stack[-1] = Stack[-2]
0x6c9: Pop(1)
0x6ca: Call2 0x92e

0x6cb: Pop(2)
0x6cc: PushEmpty(bool, object, float)
0x6cd: Stack[-12] = Stack[-2]
0x6ce: Stack[-1] = (float) 70.0
0x6cf: Call2 0x8d9

0x6d0: Pop(2)
0x6d1: Pop(1); Push((bool) Stack[-1] == 0)
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6d3: Stack[-10] = (int) -2
0x6d4: Return(); Pop(8)

0x6d5: @ CreateDialog(Stack[-4])
0x6d6: Pop(0)
0x6d7: PushEmpty(int)
0x6d8: Call2 0xa62

0x6d9: Pop(0)
0x6da: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x6db: Pop(1)
0x6dc: PushEmpty(int)
0x6dd: Call2 0xa60

0x6de: Pop(0)
0x6df: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x6e0: Pop(1)
0x6e1: PushEmpty(string)
0x6e2: Call2 0xa64

0x6e3: Pop(0)
0x6e4: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x6e5: Pop(1)
0x6e6: PushEmpty(string)
0x6e7: Call2 0xa66

0x6e8: Pop(0)
0x6e9: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x6ea: Pop(1)
0x6eb: PushEmpty(int)
0x6ec: Call2 0xbad

0x6ed: Pop(0)
0x6ee: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x6ef: Pop(1)
0x6f0: Stack[-2] = (int) -1
0x6f1: @ IsOverrideActive(Stack[-3])
0x6f2: Pop(0)
0x6f3: Push(Stack[-3])
0x6f4: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f5: Stack[-10] = (int) -2
0x6f6: Return(); Pop(8)

0x6f7: @ DoDialog(Stack[-4])
0x6f8: Pop(0)
0x6f9: PushEmpty(object, object)
0x6fa: Stack[-11] = Stack[-2]
0x6fb: Stack[-6] = Stack[-1]
0x6fc: Push(-2, 4); TaskCall(12)
0x6fd: Call2 0x714

0x6fe: Pop(-2, 4); TaskReturn
0x6ff: Pop(2)
0x700: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x701: Pop(0)
0x702: Pop(0); Push((bool) Stack[-1] == 0)
0x703: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x704: @ sync()
0x705: Pop(0)
0x706: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x707: Pop(0)
0x708: GOTO 0x702

0x709: PushEmpty(object)
0x70a: Stack[-10] = Stack[-1]
0x70b: Call2 0x91d

0x70c: Pop(1)
0x70d: @ StopDialog(Stack[-4])
0x70e: Pop(0)
0x70f: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x710: Pop(0)
0x711: Stack[-2] = Stack[-10]
0x712: Return(); Pop(8)

0x713: Stack[-4] = 0
0x714: PushEmpty()
0x715: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x716: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x717: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x718: Push((int) 1)
0x719: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x71a: PushEmpty(string)
0x71b: Stack[-1] = "Neutral" // @poff=89
0x71c: Call2 0x74e

0x71d: Pop(1)
0x71e: Push((int) 540539)
0x71f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x720: Pop(1)
0x721: @@@ ClearReplies(); Obj=0 // @poff=116
0x722: Pop(0)
0x723: Push((int) 540540)
0x724: Push((int) -1)
0x725: Push((int) 42549)
0x726: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x727: Pop(3)
0x728: Push((int) 540799)
0x729: Push((int) -1)
0x72a: Push((int) 42848)
0x72b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x72c: Pop(3)
0x72d: GOTO 0x730

0x72e: Return(); Pop(0)

0x72f: GOTO 0x718

0x730: PushEmpty(bool)
0x731: Call2 0xa68

0x732: Pop(0)
0x733: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x734: @ lshWaitForAnimEnd()
0x735: Pop(0)
0x736: Push( Stack[3 + Tasks[-1].StackPointer] )
0x737: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x738: GOTO 0x73e

0x739: PushEmpty(string)
0x73a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x73b: Call2 0x9b8

0x73c: Pop(1)
0x73d: GOTO 0x734

0x73e: GOTO 0x74d

0x73f: Push("all") // @poff=138
0x740: Push("idle") // @poff=146
0x741: @ PlayAnimation(Stack[-2], Stack[-1])
0x742: Pop(2)
0x743: @ WaitForAnimEnd()
0x744: Pop(0)
0x745: Push( Stack[3 + Tasks[-1].StackPointer] )
0x746: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x747: GOTO 0x74d

0x748: Push("all") // @poff=138
0x749: Push("idle") // @poff=146
0x74a: @ PlayAnimation(Stack[-2], Stack[-1])
0x74b: Pop(2)
0x74c: GOTO 0x743

0x74d: Return(); Pop(0)

0x74e: PushEmpty()
0x74f: PushEmpty(bool)
0x750: Call2 0xa68

0x751: Pop(0)
0x752: Pop(1); Push((bool) Stack[-1] == 0)
0x753: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x754: Return(); Pop(0)

0x755: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x756: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x757: Return(); Pop(0)

0x758: PushEmpty(string, bool)
0x759: Stack[-3] = Stack[-2]
0x75a: Push("") // @poff=102
0x75b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x75c: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75d: Stack[-1] = (bool) 0
0x75e: GOTO 0x760

0x75f: Stack[-1] = (bool) 1
0x760: Call2 0x9bf

0x761: Pop(2)
0x762: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x763: Return(); Pop(0)

0x764: PushEmpty()
0x765: Push((int) 1)
0x766: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x767: PushEmpty()
0x768: Call2 0x9d4

0x769: Pop(0)
0x76a: Push((int) 42548)
0x76b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76c: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x76d: PushEmpty(string)
0x76e: Stack[-1] = "Neutral" // @poff=89
0x76f: Call2 0x74e

0x770: Pop(1)
0x771: Push((int) 540539)
0x772: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x773: Pop(1)
0x774: @@@ ClearReplies(); Obj=0 // @poff=116
0x775: Pop(0)
0x776: Push((int) 540540)
0x777: Push((int) -1)
0x778: Push((int) 42549)
0x779: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x77a: Pop(3)
0x77b: Push((int) 540799)
0x77c: Push((int) -1)
0x77d: Push((int) 42848)
0x77e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x77f: Pop(3)
0x780: Return(); Pop(0)

0x781: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x782: PushEmpty(bool)
0x783: Call2 0xa68

0x784: Pop(0)
0x785: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x786: @ lshStopAnimation()
0x787: Pop(0)
0x788: GOTO 0x78b

0x789: @ StopAnimation()
0x78a: Pop(0)
0x78b: Return(); Pop(0)

0x78c: GOTO 0x765

0x78d: Return(); Pop(0)

0x78e: Push(GlobalVars[1])
0x78f: Stack[-1] = (bool) 0
0x790: GlobalVars[1] = Stack[-1]; Pop(1)
0x791: PushEmpty()
0x792: Call2 0x795

0x793: Pop(0)
0x794: Return(); Pop(0)

0x795: PushEmpty(bool)
0x796: Call2 0x8d4

0x797: Pop(0)
0x798: Pop(1); Push((bool) Stack[-1] == 0)
0x799: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x79a: PushEmpty()
0x79b: Push(-0, 0); TaskCall(0)
0x79c: Call2 0x0

0x79d: Pop(-0, 0); TaskReturn
0x79e: Pop(0)
0x79f: PushEmpty()
0x7a0: Call2 0x815

0x7a1: Pop(0)
0x7a2: @ GetDirection(Stack[-0]T)
0x7a3: Pop(0)
0x7a4: PushEmpty()
0x7a5: Call2 0x84b

0x7a6: Pop(0)
0x7a7: GOTO 0x7a4

0x7a8: Return(); Pop(0)

0x7a9: PushEmpty(object, object)
0x7aa: Push("player") // @poff=156
0x7ab: @ FindActor(Stack[-2], Stack[-1])
0x7ac: Pop(1)
0x7ad: Pop(0); Push((bool) Stack[-1] == 0)
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7af: Stack[-3] = (bool) 0
0x7b0: Return(); Pop(2)

0x7b1: PushEmpty(bool, object)
0x7b2: Stack[-3] = Stack[-1]
0x7b3: Call2 0x8cb

0x7b4: Stack[-2] = Stack[-5]
0x7b5: Pop(2)
0x7b6: Return(); Pop(2)

0x7b7: Stack[-1] = 0
0x7b8: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x7b9: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x7ba: @ RotateAsync(Stack[-2], Stack[-1])
0x7bb: Pop(2)
0x7bc: Return(); Pop(0)

0x7bd: PushEmpty(object, bool, object, bool)
0x7be: Push("player") // @poff=156
0x7bf: @ FindActor(Stack[-3], Stack[-1])
0x7c0: Pop(1)
0x7c1: Pop(0); Push((bool) Stack[-2] == 0)
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c3: Stack[-5] = (bool) 0
0x7c4: Return(); Pop(4)

0x7c5: PushEmpty(float, object)
0x7c6: Stack[-4] = Stack[-1]
0x7c7: Call2 0x897

0x7c8: Pop(1)
0x7c9: Push((float)90000.0)
0x7ca: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7cc: Stack[-5] = (bool) 0
0x7cd: Return(); Pop(4)

0x7ce: @ CanSee(Stack[-1], Stack[-2])
0x7cf: Pop(0)
0x7d0: Stack[-1] = Stack[-5]
0x7d1: Return(); Pop(4)

0x7d2: Stack[-2] = 0
0x7d3: PushEmpty(float, float)
0x7d4: Push((int) 8)
0x7d5: Push((int) 16)
0x7d6: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x7d7: Pop(2)
0x7d8: Push((int) 10)
0x7d9: @ SetTimer(Stack[-1], Stack[-2])
0x7da: Pop(1)
0x7db: Return(); Pop(2)

0x7dc: Push((int) 10)
0x7dd: @ KillTimer(Stack[-1])
0x7de: Pop(1)
0x7df: Return(); Pop(0)

0x7e0: PushEmpty()
0x7e1: Push((int) 10)
0x7e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x7e4: PushEmpty()
0x7e5: Call2 0x7dc

0x7e6: Pop(0)
0x7e7: PushEmpty(bool)
0x7e8: Stack[-1] = (bool) 0
0x7e9: PushEmpty(bool)
0x7ea: Call2 0x8d4

0x7eb: Pop(0)
0x7ec: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7ed: PushEmpty(bool)
0x7ee: Call2 0x7bd

0x7ef: Pop(0)
0x7f0: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7f1: Stack[-1] = (bool) 1
0x7f2: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7f3: PushEmpty(bool)
0x7f4: Call2 0x7a9

0x7f5: Pop(0)
0x7f6: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7f7: PushEmpty(bool, object)
0x7f8: PushEmpty(object)
0x7f9: Call2 0x9db

0x7fa: Stack[-1] = Stack[-2]
0x7fb: Pop(1)
0x7fc: Call2 0x968

0x7fd: Pop(2)
0x7fe: GOTO 0x805

0x7ff: PushEmpty()
0x800: Call2 0x7b8

0x801: Pop(0)
0x802: PushEmpty()
0x803: Call2 0x7d3

0x804: Pop(0)
0x805: Return(); Pop(0)

0x806: PushEmpty()
0x807: Call2 0x892

0x808: Pop(0)
0x809: PushEmpty()
0x80a: Call2 0x7dc

0x80b: Pop(0)
0x80c: @ lshStopSpeech()
0x80d: Pop(0)
0x80e: @ lshStopAnimation()
0x80f: Pop(0)
0x810: @ StopAsync()
0x811: Pop(0)
0x812: @ Hold()
0x813: Pop(0)
0x814: Return(); Pop(0)

0x815: @ StopGroup0()
0x816: Pop(0)
0x817: PushEmpty()
0x818: Call2 0x7dc

0x819: Pop(0)
0x81a: PushEmpty(string)
0x81b: Stack[-1] = "Neutral" // @poff=89
0x81c: Call2 0x9b8

0x81d: Pop(1)
0x81e: PushEmpty()
0x81f: Call2 0x7d3

0x820: Pop(0)
0x821: Return(); Pop(0)

0x822: PushEmpty()
0x823: Push(Stack[-1])
0x824: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x825: PushEmpty()
0x826: Call2 0x7d3

0x827: Pop(0)
0x828: GOTO 0x82d

0x829: PushEmpty(string)
0x82a: Stack[-1] = "Neutral" // @poff=89
0x82b: Call2 0x9b8

0x82c: Pop(1)
0x82d: Return(); Pop(0)

0x82e: PushEmpty(bool, bool)
0x82f: @ IsOverrideActive(Stack[-1])
0x830: Pop(0)
0x831: Pop(0); Push((bool) Stack[-1] == 0)
0x832: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x833: EventDisable(0)
0x834: PushEmpty()
0x835: Call2 0x892

0x836: Pop(0)
0x837: PushEmpty(bool, object)
0x838: Stack[-5] = Stack[-1]
0x839: Call2 0x8cb

0x83a: Pop(2)
0x83b: EventEnable(0)
0x83c: PushEmpty(object)
0x83d: Stack[-4] = Stack[-1]
0x83e: Call2 0xbbe

0x83f: Pop(1)
0x840: PushEmpty(string)
0x841: Stack[-1] = "Neutral" // @poff=89
0x842: Call2 0x9b8

0x843: Pop(1)
0x844: PushEmpty()
0x845: Call2 0x7dc

0x846: Pop(0)
0x847: PushEmpty()
0x848: Call2 0x7d3

0x849: Pop(0)
0x84a: Return(); Pop(2)

0x84b: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x84c: @ WaitForAnimEnd()
0x84d: Pop(0)
0x84e: PushEmpty(bool)
0x84f: Call2 0x8d4

0x850: Pop(0)
0x851: Pop(1); Push((bool) Stack[-1] == 0)
0x852: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x853: Return(); Pop(12)

0x854: PushEmpty(int)
0x855: Call2 0xa4f

0x856: Stack[-1] = Stack[-7]
0x857: Pop(1)
0x858: Stack[-5] = (int) 0
0x859: PushEmpty(bool)
0x85a: Stack[-1] = (bool) 0
0x85b: Push((int) 5)
0x85c: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x85d: IF (Stack[-1] == 0) GOTO 0x863; Pop(1)

0x85e: PushEmpty(bool)
0x85f: Call2 0x8d4

0x860: Pop(0)
0x861: IF (Stack[-1] == 0) GOTO 0x863; Pop(1)

0x862: Stack[-1] = (bool) 1
0x863: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x864: Pop(0); Push((bool) Stack[-6] == 0)
0x865: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x866: Push((int) 3)
0x867: @ Sleep(Stack[-1], Stack[-5])
0x868: Pop(1)
0x869: Pop(0); Push((bool) Stack[-4] == 0)
0x86a: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x86b: GOTO 0x88d

0x86c: GOTO 0x882

0x86d: @ irand(Stack[-3], Stack[-6])
0x86e: Pop(0)
0x86f: Push((int) 5)
0x870: @ irand(Stack[-3], Stack[-1])
0x871: Pop(1)
0x872: Push((int) 0)
0x873: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x875: Stack[-3] = (int) 0
0x876: Push("all") // @poff=138
0x877: PushEmpty(string, int)
0x878: Stack[-6] = Stack[-1]
0x879: Call2 0xa48

0x87a: Pop(1)
0x87b: @ PlayAnimation(Stack[-2], Stack[-1])
0x87c: Pop(2)
0x87d: @ WaitForAnimEnd(Stack[-1])
0x87e: Pop(0)
0x87f: Pop(0); Push((bool) Stack[-1] == 0)
0x880: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x881: GOTO 0x88d

0x882: PushEmpty(bool)
0x883: Call2 0x890

0x884: Pop(0)
0x885: Pop(1); Push((bool) Stack[-1] == 0)
0x886: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x887: GOTO 0x88d

0x888: @ ResetAAS()
0x889: Pop(0)
0x88a: Push((int) 1)
0x88b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x88c: GOTO 0x859

0x88d: @ ResetAAS()
0x88e: Pop(0)
0x88f: Return(); Pop(12)

0x890: Stack[-1] = (bool) 1
0x891: Return(); Pop(0)

0x892: @ StopAnimation()
0x893: Pop(0)
0x894: @ StopGroup0()
0x895: Pop(0)
0x896: Return(); Pop(0)

0x897: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x898: @ GetPosition(Stack[-3])
0x899: Pop(0)
0x89a: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x89b: Pop(0)
0x89c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x89d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x89e: Return(); Pop(6)

0x89f: PushEmpty(bool, bool)
0x8a0: Push("HasProperty") // @poff=182
0x8a1: Push((int) 2)
0x8a2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x8a3: Pop(1); Push((bool) Stack[-1] == 0)
0x8a4: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x8a5: Stack[-5] = (bool) 0
0x8a6: Return(); Pop(2)

0x8a7: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=206
0x8a8: Pop(0)
0x8a9: Stack[-1] = Stack[-5]
0x8aa: Return(); Pop(2)

0x8ab: PushEmpty(float, float)
0x8ac: PushEmpty(bool, object, string)
0x8ad: Stack[-10] = Stack[-2]
0x8ae: Stack[-9] = Stack[-1]
0x8af: Call2 0x89f

0x8b0: Pop(2)
0x8b1: Pop(1); Push((bool) Stack[-1] == 0)
0x8b2: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8b3: Stack[-8] = (bool) 0
0x8b4: Return(); Pop(2)

0x8b5: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=218
0x8b6: Pop(0)
0x8b7: PushEmpty(float, float, float, float)
0x8b8: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x8b9: Stack[-8] = Stack[-2]
0x8ba: Stack[-7] = Stack[-1]
0x8bb: Call2 0x9eb

0x8bc: Pop(3)
0x8bd: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=230
0x8be: Pop(1)
0x8bf: Stack[-8] = (bool) 1
0x8c0: Return(); Pop(2)

0x8c1: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x8c2: @ GetPosition(Stack[-3])
0x8c3: Pop(0)
0x8c4: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x8c5: Push(CvectorIndex(Stack[-2], 0))
0x8c6: Push(CvectorIndex(Stack[-3], 2))
0x8c7: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x8c8: Pop(2)
0x8c9: Stack[-1] = Stack[-8]
0x8ca: Return(); Pop(6)

0x8cb: PushEmpty(cvector, cvector)
0x8cc: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x8cd: Pop(0)
0x8ce: PushEmpty(bool, cvector)
0x8cf: Stack[-3] = Stack[-1]
0x8d0: Call2 0x8c1

0x8d1: Stack[-2] = Stack[-6]
0x8d2: Pop(2)
0x8d3: Return(); Pop(2)

0x8d4: PushEmpty(bool, bool)
0x8d5: @ IsLoaded(Stack[-1])
0x8d6: Pop(0)
0x8d7: Stack[-1] = Stack[-3]
0x8d8: Return(); Pop(2)

0x8d9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x8da: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x8db: Pop(0)
0x8dc: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=242
0x8dd: Pop(0)
0x8de: Push(CvectorIndex(Stack[-8], 1))
0x8df: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8e0: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x8e1: @ GetPosition(Stack[-7])
0x8e2: Pop(0)
0x8e3: @ GetEyesHeight(Stack[-9])
0x8e4: Pop(0)
0x8e5: Push(CvectorIndex(Stack[-7], 1))
0x8e6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8e7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x8e8: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x8e9: Push(CvectorIndex(Stack[-6], 1))
0x8ea: Stack[-1] = (int) 0
0x8eb: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x8ec: Pop(0); Push(Stack[-6] | Stack[-6]);
0x8ed: Pop(1); Push(Sqrt(Stack[-1]))
0x8ee: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x8ef: Stack[-5] = -Stack[-6]; Pop(0);
0x8f0: Pop(0); Push(Stack[-6] * Stack[-19]);
0x8f1: PushEmpty(cvector, cvector)
0x8f2: Push([0.0, 1.0, 0.0])
0x8f3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x8f4: Call2 0x9e1

0x8f5: Pop(1)
0x8f6: Push((int) 25)
0x8f7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8f8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8f9: Push([0.0, 10.0, 0.0])
0x8fa: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x8fb: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x8fc: @ IsOverrideActive(Stack[-2])
0x8fd: Pop(0)
0x8fe: Push(Stack[-2])
0x8ff: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x900: Stack[-21] = (bool) 0
0x901: Return(); Pop(18)

0x902: @ StopWorld()
0x903: Pop(0)
0x904: @ CameraTransit(Stack[-3], Stack[-5])
0x905: Pop(0)
0x906: Push(CvectorIndex(Stack[-4], 0))
0x907: Push(CvectorIndex(Stack[-5], 2))
0x908: @ Rotate(Stack[-2], Stack[-1])
0x909: Pop(2)
0x90a: PushEmpty(bool)
0x90b: Call2 0xa68

0x90c: Pop(0)
0x90d: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x90e: GOTO 0x917

0x90f: Push("head") // @poff=256
0x910: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x911: Pop(1)
0x912: Push(Stack[-1])
0x913: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x914: Push("head") // @poff=256
0x915: @ LookAsyncCamera(Stack[-1])
0x916: Pop(1)
0x917: @ CameraWaitForPlayFinish()
0x918: Pop(0)
0x919: @ ResumeWorld()
0x91a: Pop(0)
0x91b: Stack[-21] = (bool) 1
0x91c: Return(); Pop(18)

0x91d: PushEmpty(bool, bool)
0x91e: @ CameraSwitchToNormal()
0x91f: Pop(0)
0x920: PushEmpty(bool)
0x921: Call2 0xa68

0x922: Pop(0)
0x923: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x924: GOTO 0x92d

0x925: Push("head") // @poff=256
0x926: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x927: Pop(1)
0x928: Push(Stack[-1])
0x929: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x92a: Push("head") // @poff=256
0x92b: @ UnlookAsync(Stack[-1])
0x92c: Pop(1)
0x92d: Return(); Pop(2)

0x92e: PushEmpty(int, int, int, int)
0x92f: Push("voice_common") // @poff=266
0x930: @ GetVariable(Stack[-1], Stack[-3])
0x931: Pop(1)
0x932: Push(Stack[-2])
0x933: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x934: PushEmpty(bool, object)
0x935: Stack[-7] = Stack[-1]
0x936: Call2 0x968

0x937: Pop(1)
0x938: Pop(1); Push((bool) Stack[-1] == 0)
0x939: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x93a: PushEmpty(bool, object)
0x93b: Stack[-7] = Stack[-1]
0x93c: Call2 0x98d

0x93d: Pop(1)
0x93e: Pop(1); Push((bool) Stack[-1] == 0)
0x93f: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x940: Stack[-6] = (bool) 0
0x941: Return(); Pop(4)

0x942: Push((int) 2)
0x943: @ irand(Stack[-2], Stack[-1])
0x944: Pop(1)
0x945: Push(Stack[-1])
0x946: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x947: Push("voice_common") // @poff=266
0x948: Push((int) 1)
0x949: Pop(1); Push(Stack[-4] + Stack[-1]);
0x94a: Push((int) 3)
0x94b: Pop(2); Push(Stack[-2] % Stack[-1]);
0x94c: @ SetVariable(Stack[-2], Stack[-1])
0x94d: Pop(2)
0x94e: GOTO 0x953

0x94f: Push("voice_common") // @poff=266
0x950: Push((int) 0)
0x951: @ SetVariable(Stack[-2], Stack[-1])
0x952: Pop(2)
0x953: GOTO 0x966

0x954: PushEmpty(bool, object)
0x955: Stack[-7] = Stack[-1]
0x956: Call2 0x98d

0x957: Pop(1)
0x958: Pop(1); Push((bool) Stack[-1] == 0)
0x959: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x95a: PushEmpty(bool, object)
0x95b: Stack[-7] = Stack[-1]
0x95c: Call2 0x968

0x95d: Pop(1)
0x95e: Pop(1); Push((bool) Stack[-1] == 0)
0x95f: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x960: Stack[-6] = (bool) 0
0x961: Return(); Pop(4)

0x962: Push("voice_common") // @poff=266
0x963: Push((int) 1)
0x964: @ SetVariable(Stack[-2], Stack[-1])
0x965: Pop(2)
0x966: Stack[-6] = (bool) 1
0x967: Return(); Pop(4)

0x968: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x969: Stack[-5] = "c" // @poff=292
0x96a: Stack[-4] = (int) 0
0x96b: Push((int) 1)
0x96c: IF (Stack[-1] == 0) GOTO 0x978; Pop(1)

0x96d: Push((int) 1)
0x96e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x96f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x970: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=206
0x971: Pop(1)
0x972: Pop(0); Push((bool) Stack[-3] == 0)
0x973: IF (Stack[-1] == 0) GOTO 0x975; Pop(1)

0x974: GOTO 0x978

0x975: Push((int) 1)
0x976: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x977: GOTO 0x96b

0x978: Pop(0); Push((bool) Stack[-4] == 0)
0x979: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x97a: Stack[-12] = (bool) 0
0x97b: Return(); Pop(10)

0x97c: Stack[-2] = (int) 0
0x97d: Push((int) 1)
0x97e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x97f: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x980: @ irand(Stack[-2], Stack[-4])
0x981: Pop(0)
0x982: Push((int) 1)
0x983: Pop(1); Push(Stack[-3] + Stack[-1]);
0x984: Pop(1); Push(Stack[-6] + Stack[-1]);
0x985: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=218
0x986: Pop(1)
0x987: PushEmpty(bool, string)
0x988: Stack[-3] = Stack[-1]
0x989: Call2 0x9c5

0x98a: Stack[-2] = Stack[-14]
0x98b: Pop(2)
0x98c: Return(); Pop(10)

0x98d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x98e: Push("d") // @poff=262
0x98f: PushEmpty(int)
0x990: Call2 0xa39

0x991: Pop(0)
0x992: Pop(2); Push(Stack[-2] + Stack[-1]);
0x993: Push("m") // @poff=296
0x994: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x995: Stack[-4] = (int) 0
0x996: Push((int) 1)
0x997: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x998: Push((int) 1)
0x999: Pop(1); Push(Stack[-5] + Stack[-1]);
0x99a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x99b: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=206
0x99c: Pop(1)
0x99d: Pop(0); Push((bool) Stack[-3] == 0)
0x99e: IF (Stack[-1] == 0) GOTO 0x9a0; Pop(1)

0x99f: GOTO 0x9a3

0x9a0: Push((int) 1)
0x9a1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9a2: GOTO 0x996

0x9a3: Pop(0); Push((bool) Stack[-4] == 0)
0x9a4: IF (Stack[-1] == 0) GOTO 0x9a7; Pop(1)

0x9a5: Stack[-12] = (bool) 0
0x9a6: Return(); Pop(10)

0x9a7: Stack[-2] = (int) 0
0x9a8: Push((int) 1)
0x9a9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9ab: @ irand(Stack[-2], Stack[-4])
0x9ac: Pop(0)
0x9ad: Push((int) 1)
0x9ae: Pop(1); Push(Stack[-3] + Stack[-1]);
0x9af: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9b0: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=218
0x9b1: Pop(1)
0x9b2: PushEmpty(bool, string)
0x9b3: Stack[-3] = Stack[-1]
0x9b4: Call2 0x9c5

0x9b5: Stack[-2] = Stack[-14]
0x9b6: Pop(2)
0x9b7: Return(); Pop(10)

0x9b8: PushEmpty(float, float, float, float)
0x9b9: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x9ba: Pop(0)
0x9bb: Push((bool) 0)
0x9bc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9bd: Pop(1)
0x9be: Return(); Pop(4)

0x9bf: PushEmpty(float, float, float, float)
0x9c0: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x9c1: Pop(0)
0x9c2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x9c3: Pop(0)
0x9c4: Return(); Pop(4)

0x9c5: PushEmpty(bool, bool)
0x9c6: PushEmpty(bool)
0x9c7: Call2 0xa68

0x9c8: Pop(0)
0x9c9: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9ca: @ lshHasSpeech(Stack[-1], Stack[-3])
0x9cb: Pop(0)
0x9cc: Push(Stack[-1])
0x9cd: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9ce: @ lshPlaySpeech(Stack[-3])
0x9cf: Pop(0)
0x9d0: Stack[-4] = (bool) 1
0x9d1: Return(); Pop(2)

0x9d2: Stack[-4] = (bool) 0
0x9d3: Return(); Pop(2)

0x9d4: PushEmpty(bool)
0x9d5: Call2 0xa68

0x9d6: Pop(0)
0x9d7: IF (Stack[-1] == 0) GOTO 0x9da; Pop(1)

0x9d8: @ lshStopSpeech()
0x9d9: Pop(0)
0x9da: Return(); Pop(0)

0x9db: PushEmpty(object, object)
0x9dc: @ self(Stack[-1])
0x9dd: Pop(0)
0x9de: Stack[-1] = Stack[-3]
0x9df: Return(); Pop(2)

0x9e0: Stack[-1] = 0
0x9e1: PushEmpty(float, float)
0x9e2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x9e3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9e4: Push((float)9.999999974752427e-07)
0x9e5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9e6: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e7: Stack[-4] = [0.0, 0.0, 0.0]
0x9e8: Return(); Pop(2)

0x9e9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x9ea: Return(); Pop(2)

0x9eb: PushEmpty()
0x9ec: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x9ed: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9ee: Stack[-2] = Stack[-4]
0x9ef: Return(); Pop(0)

0x9f0: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9f2: Stack[-1] = Stack[-4]
0x9f3: Return(); Pop(0)

0x9f4: Stack[-3] = Stack[-4]
0x9f5: Return(); Pop(0)

0x9f6: PushEmpty(int, int)
0x9f7: @ GetVariable(Stack[-3], Stack[-1])
0x9f8: Pop(0)
0x9f9: Stack[-1] = Stack[-4]
0x9fa: Return(); Pop(2)

0x9fb: PushEmpty()
0x9fc: Pop(0); Push((bool) Stack[-2] == 0)
0x9fd: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9fe: Stack[-3] = (bool) 0
0x9ff: Return(); Pop(0)

0xa00: Push((int) 0)
0xa01: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa02: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa03: Push((int) 8)
0xa04: @ SendWorldWndMessage(Stack[-1])
0xa05: Pop(1)
0xa06: GOTO 0xa10

0xa07: Push((int) 0)
0xa08: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa09: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa0a: Push((int) 9)
0xa0b: @ SendWorldWndMessage(Stack[-1])
0xa0c: Pop(1)
0xa0d: GOTO 0xa10

0xa0e: Stack[-3] = (bool) 0
0xa0f: Return(); Pop(0)

0xa10: PushEmpty(float)
0xa11: Stack[-2] = Stack[-1]
0xa12: Call2 0xa1e

0xa13: Pop(1)
0xa14: PushEmpty(bool, object, string, float, float, float)
0xa15: Stack[-8] = Stack[-5]
0xa16: Stack[-4] = "reputation" // @poff=300
0xa17: Stack[-7] = Stack[-3]
0xa18: Stack[-2] = (int) 0
0xa19: Stack[-1] = (int) 1
0xa1a: Call2 0x8ab

0xa1b: Pop(6)
0xa1c: Stack[-3] = (bool) 1
0xa1d: Return(); Pop(0)

0xa1e: PushEmpty(object, object)
0xa1f: @ CreateFloatVector(Stack[-1])
0xa20: Pop(0)
0xa21: @@ add(Stack[-3]); Obj=1 // @poff=322
0xa22: Pop(0)
0xa23: Push((int) 16)
0xa24: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa25: Pop(1)
0xa26: Return(); Pop(2)

0xa27: Stack[-1] = 0
0xa28: PushEmpty(object, object)
0xa29: @ FindActor(Stack[-1], Stack[-4])
0xa2a: Pop(0)
0xa2b: Pop(0); PushNull((bool) Stack[-1] == 0)
0xa2c: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa2d: Stack[-5] = (bool) 0
0xa2e: Return(); Pop(2)

0xa2f: @ Trigger(Stack[-1], Stack[-3])
0xa30: Pop(0)
0xa31: Stack[-5] = (bool) 1
0xa32: Return(); Pop(2)

0xa33: Stack[-1] = 0
0xa34: PushEmpty(float, float)
0xa35: @ GetGameTime(Stack[-1])
0xa36: Pop(0)
0xa37: Stack[-1] = Stack[-3]
0xa38: Return(); Pop(2)

0xa39: PushEmpty(float, float)
0xa3a: @ GetGameTime(Stack[-1])
0xa3b: Pop(0)
0xa3c: Push((int) 1)
0xa3d: PushEmpty(int)
0xa3e: Push((int) 24)
0xa3f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa40: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa41: Return(); Pop(2)

0xa42: PushEmpty()
0xa43: PushEmpty(int)
0xa44: Call2 0xa39

0xa45: Pop(0)
0xa46: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xa47: Return(); Pop(0)

0xa48: PushEmpty(string, string)
0xa49: Stack[-1] = "idle" // @poff=146
0xa4a: Push(Stack[-3])
0xa4b: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa4c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa4d: Stack[-1] = Stack[-4]
0xa4e: Return(); Pop(2)

0xa4f: PushEmpty(int, bool, int, bool)
0xa50: Stack[-2] = (int) 0
0xa51: Push("all") // @poff=138
0xa52: PushEmpty(string, int)
0xa53: Stack[-5] = Stack[-1]
0xa54: Call2 0xa48

0xa55: Pop(1)
0xa56: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa57: Pop(2)
0xa58: Pop(0); Push((bool) Stack[-1] == 0)
0xa59: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa5a: GOTO 0xa5e

0xa5b: Push((int) 1)
0xa5c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa5d: GOTO 0xa51

0xa5e: Stack[-2] = Stack[-5]
0xa5f: Return(); Pop(4)

0xa60: Stack[-1] = (int) 515537
0xa61: Return(); Pop(0)

0xa62: Stack[-1] = (int) 502862
0xa63: Return(); Pop(0)

0xa64: Stack[-1] = "ui/NPC_Julia.png" // @poff=326
0xa65: Return(); Pop(0)

0xa66: Stack[-1] = "ui/NPC_Julia_b.png" // @poff=360
0xa67: Return(); Pop(0)

0xa68: Stack[-1] = (bool) 1
0xa69: Return(); Pop(0)

0xa6a: PushEmpty(object, object)
0xa6b: Push("k3q02") // @poff=398
0xa6c: Push((int) 2)
0xa6d: @ SetVariable(Stack[-2], Stack[-1])
0xa6e: Pop(2)
0xa6f: PushEmpty(object)
0xa70: Call2 0xb9c

0xa71: Stack[-1] = Stack[-2]
0xa72: Pop(1)
0xa73: Push("k3q02JuliaGotoEva") // @poff=410
0xa74: Push("pt_map_eva") // @poff=446
0xa75: Push((int) 0)
0xa76: Push((int) 525573)
0xa77: PushEmpty(float)
0xa78: Call2 0xa34

0xa79: Pop(0)
0xa7a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=468
0xa7b: Pop(5)
0xa7c: PushEmpty()
0xa7d: Call2 0xb59

0xa7e: Pop(0)
0xa7f: Return(); Pop(2)

0xa80: Stack[-1] = 0
0xa81: PushEmpty()
0xa82: Push("k6q01") // @poff=476
0xa83: Push((int) 2)
0xa84: @ SetVariable(Stack[-2], Stack[-1])
0xa85: Pop(2)
0xa86: PushEmpty()
0xa87: Call2 0xb66

0xa88: Pop(0)
0xa89: PushEmpty(bool, string, string)
0xa8a: Stack[-2] = "quest_k6_01" // @poff=488
0xa8b: Stack[-1] = "place_danko" // @poff=512
0xa8c: Call2 0xa28

0xa8d: Pop(3)
0xa8e: Return(); Pop(0)

0xa8f: PushEmpty(int, int)
0xa90: Push("k11q01SoulCount") // @poff=536
0xa91: @ GetVariable(Stack[-1], Stack[-2])
0xa92: Pop(1)
0xa93: Push("k11q01SoulCount") // @poff=536
0xa94: Push((int) 1)
0xa95: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa96: @ SetVariable(Stack[-2], Stack[-1])
0xa97: Pop(2)
0xa98: Push((int) 2)
0xa99: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa9a: IF (Stack[-1] == 0) GOTO 0xa9f; Pop(1)

0xa9b: PushEmpty()
0xa9c: Call2 0xb4c

0xa9d: Pop(0)
0xa9e: GOTO 0xac1

0xa9f: Push((int) 3)
0xaa0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa1: IF (Stack[-1] == 0) GOTO 0xaa6; Pop(1)

0xaa2: PushEmpty()
0xaa3: Call2 0xb3f

0xaa4: Pop(0)
0xaa5: GOTO 0xac1

0xaa6: Push((int) 4)
0xaa7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa8: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaa9: PushEmpty()
0xaaa: Call2 0xb32

0xaab: Pop(0)
0xaac: GOTO 0xac1

0xaad: Push((int) 5)
0xaae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaaf: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xab0: PushEmpty()
0xab1: Call2 0xb25

0xab2: Pop(0)
0xab3: GOTO 0xac1

0xab4: Push((int) 6)
0xab5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xab6: IF (Stack[-1] == 0) GOTO 0xabb; Pop(1)

0xab7: PushEmpty()
0xab8: Call2 0xb18

0xab9: Pop(0)
0xaba: GOTO 0xac1

0xabb: Push((int) 7)
0xabc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xabd: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xabe: PushEmpty()
0xabf: Call2 0xb0b

0xac0: Pop(0)
0xac1: Return(); Pop(2)

0xac2: PushEmpty()
0xac3: Push("ook11Julia1") // @poff=568
0xac4: Push((int) 1)
0xac5: @ SetVariable(Stack[-2], Stack[-1])
0xac6: Pop(2)
0xac7: Return(); Pop(0)

0xac8: PushEmpty()
0xac9: PushEmpty(bool, object, float)
0xaca: Stack[-5] = Stack[-2]
0xacb: Stack[-1] = (float) 0.30000001192092896
0xacc: Call2 0x9fb

0xacd: Pop(3)
0xace: Return(); Pop(0)

0xacf: PushEmpty()
0xad0: PushEmpty(int, string)
0xad1: Stack[-1] = "k3q02" // @poff=398
0xad2: Call2 0x9f6

0xad3: Pop(1)
0xad4: Push((int) 1)
0xad5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xad6: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad7: Stack[-2] = (bool) 1
0xad8: Return(); Pop(0)

0xad9: Stack[-2] = (bool) 0
0xada: Return(); Pop(0)

0xadb: PushEmpty()
0xadc: PushEmpty(int, string)
0xadd: Stack[-1] = "k3q02" // @poff=398
0xade: Call2 0x9f6

0xadf: Pop(1)
0xae0: Push((int) 2)
0xae1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xae2: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xae3: Stack[-2] = (bool) 1
0xae4: Return(); Pop(0)

0xae5: Stack[-2] = (bool) 0
0xae6: Return(); Pop(0)

0xae7: PushEmpty()
0xae8: PushEmpty(int, string)
0xae9: Stack[-1] = "k6q01" // @poff=476
0xaea: Call2 0x9f6

0xaeb: Pop(1)
0xaec: Push((int) 1)
0xaed: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xaee: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaef: Stack[-2] = (bool) 1
0xaf0: Return(); Pop(0)

0xaf1: Stack[-2] = (bool) 0
0xaf2: Return(); Pop(0)

0xaf3: PushEmpty()
0xaf4: PushEmpty(int, string)
0xaf5: Stack[-1] = "k11q01" // @poff=592
0xaf6: Call2 0x9f6

0xaf7: Pop(1)
0xaf8: Push((int) 9)
0xaf9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xafa: IF (Stack[-1] == 0) GOTO 0xafd; Pop(1)

0xafb: Stack[-2] = (bool) 1
0xafc: Return(); Pop(0)

0xafd: Stack[-2] = (bool) 0
0xafe: Return(); Pop(0)

0xaff: PushEmpty()
0xb00: PushEmpty(int, string)
0xb01: Stack[-1] = "ook11Julia1" // @poff=568
0xb02: Call2 0x9f6

0xb03: Pop(1)
0xb04: Push((int) 0)
0xb05: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb06: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xb07: Stack[-2] = (bool) 1
0xb08: Return(); Pop(0)

0xb09: Stack[-2] = (bool) 0
0xb0a: Return(); Pop(0)

0xb0b: PushEmpty(object, object)
0xb0c: Push((int) 498)
0xb0d: Push((int) 1)
0xb0e: Push((int) 528065)
0xb0f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb10: Pop(3)
0xb11: PushEmpty(bool, object, int)
0xb12: Stack[-4] = Stack[-2]
0xb13: Stack[-1] = (int) 480
0xb14: Call2 0xb80

0xb15: Pop(3)
0xb16: Return(); Pop(2)

0xb17: Stack[-1] = 0
0xb18: PushEmpty(object, object)
0xb19: Push((int) 497)
0xb1a: Push((int) 1)
0xb1b: Push((int) 528064)
0xb1c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb1d: Pop(3)
0xb1e: PushEmpty(bool, object, int)
0xb1f: Stack[-4] = Stack[-2]
0xb20: Stack[-1] = (int) 480
0xb21: Call2 0xb80

0xb22: Pop(3)
0xb23: Return(); Pop(2)

0xb24: Stack[-1] = 0
0xb25: PushEmpty(object, object)
0xb26: Push((int) 496)
0xb27: Push((int) 1)
0xb28: Push((int) 528063)
0xb29: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb2a: Pop(3)
0xb2b: PushEmpty(bool, object, int)
0xb2c: Stack[-4] = Stack[-2]
0xb2d: Stack[-1] = (int) 480
0xb2e: Call2 0xb80

0xb2f: Pop(3)
0xb30: Return(); Pop(2)

0xb31: Stack[-1] = 0
0xb32: PushEmpty(object, object)
0xb33: Push((int) 495)
0xb34: Push((int) 1)
0xb35: Push((int) 528062)
0xb36: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb37: Pop(3)
0xb38: PushEmpty(bool, object, int)
0xb39: Stack[-4] = Stack[-2]
0xb3a: Stack[-1] = (int) 480
0xb3b: Call2 0xb80

0xb3c: Pop(3)
0xb3d: Return(); Pop(2)

0xb3e: Stack[-1] = 0
0xb3f: PushEmpty(object, object)
0xb40: Push((int) 494)
0xb41: Push((int) 1)
0xb42: Push((int) 528061)
0xb43: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb44: Pop(3)
0xb45: PushEmpty(bool, object, int)
0xb46: Stack[-4] = Stack[-2]
0xb47: Stack[-1] = (int) 480
0xb48: Call2 0xb80

0xb49: Pop(3)
0xb4a: Return(); Pop(2)

0xb4b: Stack[-1] = 0
0xb4c: PushEmpty(object, object)
0xb4d: Push((int) 493)
0xb4e: Push((int) 1)
0xb4f: Push((int) 528060)
0xb50: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb51: Pop(3)
0xb52: PushEmpty(bool, object, int)
0xb53: Stack[-4] = Stack[-2]
0xb54: Stack[-1] = (int) 480
0xb55: Call2 0xb80

0xb56: Pop(3)
0xb57: Return(); Pop(2)

0xb58: Stack[-1] = 0
0xb59: PushEmpty(object, object)
0xb5a: Push((int) 346)
0xb5b: Push((int) 2)
0xb5c: Push((int) 525568)
0xb5d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb5e: Pop(3)
0xb5f: PushEmpty(bool, object, int)
0xb60: Stack[-4] = Stack[-2]
0xb61: Stack[-1] = (int) 344
0xb62: Call2 0xb80

0xb63: Pop(3)
0xb64: Return(); Pop(2)

0xb65: Stack[-1] = 0
0xb66: PushEmpty(object, object)
0xb67: Push((int) 411)
0xb68: Push((int) 1)
0xb69: Push((int) 526112)
0xb6a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb6b: Pop(3)
0xb6c: PushEmpty(bool, object, int)
0xb6d: Stack[-4] = Stack[-2]
0xb6e: Stack[-1] = (int) 408
0xb6f: Call2 0xb80

0xb70: Pop(3)
0xb71: Return(); Pop(2)

0xb72: Stack[-1] = 0
0xb73: PushEmpty(object, object)
0xb74: @ GetDiaryRoot(Stack[-1])
0xb75: Pop(0)
0xb76: Pop(0); Push((bool) Stack[-1] == 0)
0xb77: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb78: Push("Can't retrieve diary root") // @poff=606
0xb79: @ Trace(Stack[-1])
0xb7a: Pop(1)
0xb7b: Stack[-3] = (bool) 0
0xb7c: Return(); Pop(2)

0xb7d: Stack[-1] = Stack[-3]
0xb7e: Return(); Pop(2)

0xb7f: Stack[-1] = 0
0xb80: PushEmpty(object, object, int, object, object, int)
0xb81: PushEmpty(object)
0xb82: Call2 0xb73

0xb83: Stack[-1] = Stack[-4]
0xb84: Pop(1)
0xb85: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=658
0xb86: Pop(0)
0xb87: Pop(0); Push((bool) Stack[-2] == 0)
0xb88: IF (Stack[-1] == 0) GOTO 0xb8f; Pop(1)

0xb89: Push("Can't find diary parent with id: ") // @poff=663
0xb8a: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb8b: @ Trace(Stack[-1])
0xb8c: Pop(1)
0xb8d: Stack[-9] = (bool) 0
0xb8e: Return(); Pop(6)

0xb8f: @@ AddChild(Stack[-8]); Obj=2 // @poff=731
0xb90: Pop(0)
0xb91: Push((int) 7)
0xb92: @ SendWorldWndMessage(Stack[-1])
0xb93: Pop(1)
0xb94: @@ GetCategory(Stack[-1]); Obj=8 // @poff=740
0xb95: Pop(0)
0xb96: @ SetDiarySection(Stack[-1])
0xb97: Pop(0)
0xb98: Stack[-9] = (bool) 0
0xb99: Return(); Pop(6)

0xb9a: Stack[-2] = 0
0xb9b: Stack[-3] = 0
0xb9c: PushEmpty(object, object, object, object)
0xb9d: @ GetMainOutdoorScene(Stack[-2])
0xb9e: Pop(0)
0xb9f: Pop(0); PushNull((bool) Stack[-2] == 0)
0xba0: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xba1: Push("Can't find main outdoor scene") // @poff=752
0xba2: @ Trace(Stack[-1])
0xba3: Pop(1)
0xba4: Stack[-1] = 0
0xba5: Stack[-1] = Stack[-5]
0xba6: Return(); Pop(4)

0xba7: @@ GetMap(Stack[-1]); Obj=2 // @poff=812
0xba8: Pop(0)
0xba9: Stack[-1] = Stack[-5]
0xbaa: Return(); Pop(4)

0xbab: Stack[-1] = 0
0xbac: Stack[-2] = 0
0xbad: PushEmpty(int, int)
0xbae: Push("branch") // @poff=819
0xbaf: @ GetVariable(Stack[-1], Stack[-2])
0xbb0: Pop(1)
0xbb1: Push((int) 0)
0xbb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb3: IF (Stack[-1] == 0) GOTO 0xbb7; Pop(1)

0xbb4: Stack[-3] = (int) 1
0xbb5: Return(); Pop(2)

0xbb6: GOTO 0xbbc

0xbb7: Push((int) 1)
0xbb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb9: IF (Stack[-1] == 0) GOTO 0xbbc; Pop(1)

0xbba: Stack[-3] = (int) 2
0xbbb: Return(); Pop(2)

0xbbc: Stack[-3] = (int) 3
0xbbd: Return(); Pop(2)

0xbbe: PushEmpty()
0xbbf: Push(GlobalVars[1])
0xbc0: Pop(1); Push((bool) Stack[-1] == 0)
0xbc1: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbc2: PushEmpty(int, object)
0xbc3: Stack[-3] = Stack[-1]
0xbc4: Push(-2, 1); TaskCall(1)
0xbc5: Call2 0xd

0xbc6: Pop(-2, 1); TaskReturn
0xbc7: Pop(2)
0xbc8: Push(GlobalVars[1])
0xbc9: Stack[-1] = (bool) 1
0xbca: GlobalVars[1] = Stack[-1]; Pop(1)
0xbcb: PushEmpty(bool, int)
0xbcc: Stack[-1] = (int) 3
0xbcd: Call2 0xa42

0xbce: Pop(1)
0xbcf: IF (Stack[-1] == 0) GOTO 0xbd7; Pop(1)

0xbd0: PushEmpty(int, object)
0xbd1: Stack[-3] = Stack[-1]
0xbd2: Push(-2, 1); TaskCall(3)
0xbd3: Call2 0x106

0xbd4: Pop(-2, 1); TaskReturn
0xbd5: Pop(2)
0xbd6: Return(); Pop(0)

0xbd7: PushEmpty(bool, int)
0xbd8: Stack[-1] = (int) 6
0xbd9: Call2 0xa42

0xbda: Pop(1)
0xbdb: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbdc: PushEmpty(int, object)
0xbdd: Stack[-3] = Stack[-1]
0xbde: Push(-2, 1); TaskCall(5)
0xbdf: Call2 0x2b5

0xbe0: Pop(-2, 1); TaskReturn
0xbe1: Pop(2)
0xbe2: Return(); Pop(0)

0xbe3: PushEmpty(bool, int)
0xbe4: Stack[-1] = (int) 11
0xbe5: Call2 0xa42

0xbe6: Pop(1)
0xbe7: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbe8: PushEmpty(int, object)
0xbe9: Stack[-3] = Stack[-1]
0xbea: Push(-2, 1); TaskCall(7)
0xbeb: Call2 0x47b

0xbec: Pop(-2, 1); TaskReturn
0xbed: Pop(2)
0xbee: Return(); Pop(0)

0xbef: PushEmpty(bool, int)
0xbf0: Stack[-1] = (int) 12
0xbf1: Call2 0xa42

0xbf2: Pop(1)
0xbf3: IF (Stack[-1] == 0) GOTO 0xbfb; Pop(1)

0xbf4: PushEmpty(int, object)
0xbf5: Stack[-3] = Stack[-1]
0xbf6: Push(-2, 1); TaskCall(9)
0xbf7: Call2 0x602

0xbf8: Pop(-2, 1); TaskReturn
0xbf9: Pop(2)
0xbfa: Return(); Pop(0)

0xbfb: PushEmpty(int, object)
0xbfc: Stack[-3] = Stack[-1]
0xbfd: Push(-2, 1); TaskCall(11)
0xbfe: Call2 0x6c3

0xbff: Pop(-2, 1); TaskReturn
0xc00: Pop(2)
0xc01: Return(); Pop(0)

