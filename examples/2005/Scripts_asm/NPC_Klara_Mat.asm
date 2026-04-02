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
	W:ui/NPC_Mat.png
	W:ui/NPC_Mat_b.png
	W:k8q01
	W:quest_k8_01
	W:unlock_boiny
	W:fail
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f004d00610074002e0070006e0067000000750069002f004e00500043005f004d00610074005f0062002e0070006e00670000006b0038007100300031000000710075006500730074005f006b0038005f0030003100000075006e006c006f0063006b005f0062006f0069006e00790000006600610069006c000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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

RunOp = 0x4d9
RunTask = 9

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x19a Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3b1 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4af Vars = (int, int)
	GTASK_9 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x52b Vars = (int)
		EVENT_6 Op = 0x551 Vars = ()
		EVENT_5 Op = 0x560 Vars = ()
		EVENT_45 Op = 0x56d Vars = (bool)
		EVENT_0 Op = 0x579 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x5fd

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
0x11: Call2 0x704

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x657

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x602

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x74e

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x74c

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x750

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x752

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x7df

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
0x55: Call2 0x646

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
0x68: Push((int) 525507)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 525508)
0x6e: Push((int) 30772)
0x6f: Push((int) 26864)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x62

0x75: PushEmpty(bool)
0x76: Call2 0x754

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x6e1

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
0x95: Call2 0x754

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
0xa5: Call2 0x6e8

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x6fd

0xae: Pop(0)
0xaf: Push((int) 26863)
0xb0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb2: PushEmpty(string)
0xb3: Stack[-1] = "Neutral" // @poff=89
0xb4: Call2 0x93

0xb5: Pop(1)
0xb6: Push((int) 525507)
0xb7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb8: Pop(1)
0xb9: @@@ ClearReplies(); Obj=0 // @poff=116
0xba: Pop(0)
0xbb: Push((int) 525508)
0xbc: Push((int) 30772)
0xbd: Push((int) 26864)
0xbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Push((int) 30772)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral" // @poff=89
0xc6: Call2 0x93

0xc7: Pop(1)
0xc8: Push((int) 529318)
0xc9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xca: Pop(1)
0xcb: @@@ ClearReplies(); Obj=0 // @poff=116
0xcc: Pop(0)
0xcd: Push((int) 529319)
0xce: Push((int) -1)
0xcf: Push((int) 30773)
0xd0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd1: Pop(3)
0xd2: Push((int) 529320)
0xd3: Push((int) -1)
0xd4: Push((int) 30774)
0xd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd9: PushEmpty(bool)
0xda: Call2 0x754

0xdb: Pop(0)
0xdc: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdd: @ lshStopAnimation()
0xde: Pop(0)
0xdf: GOTO 0xe2

0xe0: @ StopAnimation()
0xe1: Pop(0)
0xe2: Return(); Pop(0)

0xe3: GOTO 0xaa

0xe4: Return(); Pop(0)

0xe5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe7: PushEmpty(bool, object)
0xe8: PushEmpty(object)
0xe9: Call2 0x704

0xea: Stack[-1] = Stack[-2]
0xeb: Pop(1)
0xec: Call2 0x657

0xed: Pop(2)
0xee: PushEmpty(bool, object, float)
0xef: Stack[-12] = Stack[-2]
0xf0: Stack[-1] = (float) 70.0
0xf1: Call2 0x602

0xf2: Pop(2)
0xf3: Pop(1); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf5: Stack[-10] = (int) -2
0xf6: Return(); Pop(8)

0xf7: @ CreateDialog(Stack[-4])
0xf8: Pop(0)
0xf9: PushEmpty(int)
0xfa: Call2 0x74e

0xfb: Pop(0)
0xfc: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0xfd: Pop(1)
0xfe: PushEmpty(int)
0xff: Call2 0x74c

0x100: Pop(0)
0x101: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x102: Pop(1)
0x103: PushEmpty(string)
0x104: Call2 0x750

0x105: Pop(0)
0x106: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x107: Pop(1)
0x108: PushEmpty(string)
0x109: Call2 0x752

0x10a: Pop(0)
0x10b: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x10c: Pop(1)
0x10d: PushEmpty(int)
0x10e: Call2 0x7df

0x10f: Pop(0)
0x110: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x111: Pop(1)
0x112: Stack[-2] = (int) -1
0x113: @ IsOverrideActive(Stack[-3])
0x114: Pop(0)
0x115: Push(Stack[-3])
0x116: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x117: Stack[-10] = (int) -2
0x118: Return(); Pop(8)

0x119: @ DoDialog(Stack[-4])
0x11a: Pop(0)
0x11b: PushEmpty(object, object)
0x11c: Stack[-11] = Stack[-2]
0x11d: Stack[-6] = Stack[-1]
0x11e: Push(-2, 4); TaskCall(4)
0x11f: Call2 0x136

0x120: Pop(-2, 4); TaskReturn
0x121: Pop(2)
0x122: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x123: Pop(0)
0x124: Pop(0); Push((bool) Stack[-1] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x126: @ sync()
0x127: Pop(0)
0x128: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x129: Pop(0)
0x12a: GOTO 0x124

0x12b: PushEmpty(object)
0x12c: Stack[-10] = Stack[-1]
0x12d: Call2 0x646

0x12e: Pop(1)
0x12f: @ StopDialog(Stack[-4])
0x130: Pop(0)
0x131: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x132: Pop(0)
0x133: Stack[-2] = Stack[-10]
0x134: Return(); Pop(8)

0x135: Stack[-4] = 0
0x136: PushEmpty()
0x137: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x138: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x139: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x13a: Push((int) 1)
0x13b: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Neutral" // @poff=89
0x13e: Call2 0x184

0x13f: Pop(1)
0x140: Push((int) 526405)
0x141: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x142: Pop(1)
0x143: @@@ ClearReplies(); Obj=0 // @poff=116
0x144: Pop(0)
0x145: PushEmpty(bool, object)
0x146: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x147: Call2 0x777

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14a: Push((int) 526406)
0x14b: Push((int) 27682)
0x14c: Push((int) 27681)
0x14d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14e: Pop(3)
0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x151: Call2 0x783

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: Push((int) 526420)
0x155: Push((int) 27696)
0x156: Push((int) 27695)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x158: Pop(3)
0x159: Push((int) 526411)
0x15a: Push((int) -1)
0x15b: Push((int) 27686)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15d: Pop(3)
0x15e: Push((int) 529012)
0x15f: Push((int) -1)
0x160: Push((int) 30452)
0x161: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x162: Pop(3)
0x163: GOTO 0x166

0x164: Return(); Pop(0)

0x165: GOTO 0x13a

0x166: PushEmpty(bool)
0x167: Call2 0x754

0x168: Pop(0)
0x169: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x16a: @ lshWaitForAnimEnd()
0x16b: Pop(0)
0x16c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: GOTO 0x174

0x16f: PushEmpty(string)
0x170: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x171: Call2 0x6e1

0x172: Pop(1)
0x173: GOTO 0x16a

0x174: GOTO 0x183

0x175: Push("all") // @poff=138
0x176: Push("idle") // @poff=146
0x177: @ PlayAnimation(Stack[-2], Stack[-1])
0x178: Pop(2)
0x179: @ WaitForAnimEnd()
0x17a: Pop(0)
0x17b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: GOTO 0x183

0x17e: Push("all") // @poff=138
0x17f: Push("idle") // @poff=146
0x180: @ PlayAnimation(Stack[-2], Stack[-1])
0x181: Pop(2)
0x182: GOTO 0x179

0x183: Return(); Pop(0)

0x184: PushEmpty()
0x185: PushEmpty(bool)
0x186: Call2 0x754

0x187: Pop(0)
0x188: Pop(1); Push((bool) Stack[-1] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: Return(); Pop(0)

0x18b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Return(); Pop(0)

0x18e: PushEmpty(string, bool)
0x18f: Stack[-3] = Stack[-2]
0x190: Push("") // @poff=102
0x191: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x193: Stack[-1] = (bool) 0
0x194: GOTO 0x196

0x195: Stack[-1] = (bool) 1
0x196: Call2 0x6e8

0x197: Pop(2)
0x198: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x199: Return(); Pop(0)

0x19a: PushEmpty()
0x19b: Push((int) 1)
0x19c: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x19d: PushEmpty()
0x19e: Call2 0x6fd

0x19f: Pop(0)
0x1a0: Push((int) 27685)
0x1a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: PushEmpty(object, object)
0x1a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a6: Call2 0x756

0x1a7: Pop(2)
0x1a8: Push((int) 30467)
0x1a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ab: PushEmpty(object, object)
0x1ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ae: Call2 0x76d

0x1af: Pop(2)
0x1b0: Push((int) 30471)
0x1b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b3: PushEmpty(object, object)
0x1b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b6: Call2 0x76d

0x1b7: Pop(2)
0x1b8: Push((int) 27703)
0x1b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bb: PushEmpty(object, object)
0x1bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1be: Call2 0x75f

0x1bf: Pop(2)
0x1c0: Push((int) 30462)
0x1c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c3: PushEmpty(object, object)
0x1c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c6: Call2 0x76d

0x1c7: Pop(2)
0x1c8: Push((int) 27680)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral" // @poff=89
0x1cd: Call2 0x184

0x1ce: Pop(1)
0x1cf: Push((int) 526405)
0x1d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d1: Pop(1)
0x1d2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d3: Pop(0)
0x1d4: PushEmpty(bool, object)
0x1d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d6: Call2 0x777

0x1d7: Pop(1)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d9: Push((int) 526406)
0x1da: Push((int) 27682)
0x1db: Push((int) 27681)
0x1dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1dd: Pop(3)
0x1de: PushEmpty(bool, object)
0x1df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Call2 0x783

0x1e1: Pop(1)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e3: Push((int) 526420)
0x1e4: Push((int) 27696)
0x1e5: Push((int) 27695)
0x1e6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e7: Pop(3)
0x1e8: Push((int) 526411)
0x1e9: Push((int) -1)
0x1ea: Push((int) 27686)
0x1eb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ec: Pop(3)
0x1ed: Push((int) 529012)
0x1ee: Push((int) -1)
0x1ef: Push((int) 30452)
0x1f0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f1: Pop(3)
0x1f2: Return(); Pop(0)

0x1f3: Push((int) 27696)
0x1f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f6: PushEmpty(string)
0x1f7: Stack[-1] = "Neutral" // @poff=89
0x1f8: Call2 0x184

0x1f9: Pop(1)
0x1fa: Push((int) 526421)
0x1fb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1fc: Pop(1)
0x1fd: @@@ ClearReplies(); Obj=0 // @poff=116
0x1fe: Pop(0)
0x1ff: Push((int) 526422)
0x200: Push((int) 30457)
0x201: Push((int) 27697)
0x202: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x203: Pop(3)
0x204: Return(); Pop(0)

0x205: Push((int) 30457)
0x206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Neutral" // @poff=89
0x20a: Call2 0x184

0x20b: Pop(1)
0x20c: Push((int) 529017)
0x20d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20e: Pop(1)
0x20f: @@@ ClearReplies(); Obj=0 // @poff=116
0x210: Pop(0)
0x211: Push((int) 529018)
0x212: Push((int) 27698)
0x213: Push((int) 30458)
0x214: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x215: Pop(3)
0x216: Return(); Pop(0)

0x217: Push((int) 27698)
0x218: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x21a: PushEmpty(string)
0x21b: Stack[-1] = "Neutral" // @poff=89
0x21c: Call2 0x184

0x21d: Pop(1)
0x21e: Push((int) 526423)
0x21f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x220: Pop(1)
0x221: @@@ ClearReplies(); Obj=0 // @poff=116
0x222: Pop(0)
0x223: Push((int) 529019)
0x224: Push((int) 30464)
0x225: Push((int) 30459)
0x226: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x227: Pop(3)
0x228: Push((int) 529020)
0x229: Push((int) 30468)
0x22a: Push((int) 30460)
0x22b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22c: Pop(3)
0x22d: Push((int) 526424)
0x22e: Push((int) 30461)
0x22f: Push((int) 27699)
0x230: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x231: Pop(3)
0x232: Return(); Pop(0)

0x233: Push((int) 30461)
0x234: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x236: PushEmpty(string)
0x237: Stack[-1] = "Neutral" // @poff=89
0x238: Call2 0x184

0x239: Pop(1)
0x23a: Push((int) 529021)
0x23b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x23c: Pop(1)
0x23d: @@@ ClearReplies(); Obj=0 // @poff=116
0x23e: Pop(0)
0x23f: Push((int) 529023)
0x240: Push((int) 30472)
0x241: Push((int) 30463)
0x242: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x243: Pop(3)
0x244: Push((int) 529022)
0x245: Push((int) -1)
0x246: Push((int) 30462)
0x247: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x248: Pop(3)
0x249: Return(); Pop(0)

0x24a: Push((int) 30472)
0x24b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x24d: PushEmpty(string)
0x24e: Stack[-1] = "Neutral" // @poff=89
0x24f: Call2 0x184

0x250: Pop(1)
0x251: Push((int) 529032)
0x252: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x253: Pop(1)
0x254: @@@ ClearReplies(); Obj=0 // @poff=116
0x255: Pop(0)
0x256: Push((int) 529033)
0x257: Push((int) 27700)
0x258: Push((int) 30473)
0x259: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25a: Pop(3)
0x25b: Return(); Pop(0)

0x25c: Push((int) 27700)
0x25d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x25f: PushEmpty(string)
0x260: Stack[-1] = "Neutral" // @poff=89
0x261: Call2 0x184

0x262: Pop(1)
0x263: Push((int) 526425)
0x264: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x265: Pop(1)
0x266: @@@ ClearReplies(); Obj=0 // @poff=116
0x267: Pop(0)
0x268: Push((int) 526426)
0x269: Push((int) 27702)
0x26a: Push((int) 27701)
0x26b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26c: Pop(3)
0x26d: Return(); Pop(0)

0x26e: Push((int) 27702)
0x26f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x271: PushEmpty(string)
0x272: Stack[-1] = "Neutral" // @poff=89
0x273: Call2 0x184

0x274: Pop(1)
0x275: Push((int) 526427)
0x276: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x277: Pop(1)
0x278: @@@ ClearReplies(); Obj=0 // @poff=116
0x279: Pop(0)
0x27a: Push((int) 526428)
0x27b: Push((int) -1)
0x27c: Push((int) 27703)
0x27d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27e: Pop(3)
0x27f: Return(); Pop(0)

0x280: Push((int) 30468)
0x281: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x283: PushEmpty(string)
0x284: Stack[-1] = "Neutral" // @poff=89
0x285: Call2 0x184

0x286: Pop(1)
0x287: Push((int) 529028)
0x288: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x289: Pop(1)
0x28a: @@@ ClearReplies(); Obj=0 // @poff=116
0x28b: Pop(0)
0x28c: Push((int) 529029)
0x28d: Push((int) 30470)
0x28e: Push((int) 30469)
0x28f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x290: Pop(3)
0x291: Return(); Pop(0)

0x292: Push((int) 30470)
0x293: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x295: PushEmpty(string)
0x296: Stack[-1] = "Neutral" // @poff=89
0x297: Call2 0x184

0x298: Pop(1)
0x299: Push((int) 529030)
0x29a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x29b: Pop(1)
0x29c: @@@ ClearReplies(); Obj=0 // @poff=116
0x29d: Pop(0)
0x29e: Push((int) 529031)
0x29f: Push((int) -1)
0x2a0: Push((int) 30471)
0x2a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a2: Pop(3)
0x2a3: Return(); Pop(0)

0x2a4: Push((int) 30464)
0x2a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2a7: PushEmpty(string)
0x2a8: Stack[-1] = "Neutral" // @poff=89
0x2a9: Call2 0x184

0x2aa: Pop(1)
0x2ab: Push((int) 529024)
0x2ac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ad: Pop(1)
0x2ae: @@@ ClearReplies(); Obj=0 // @poff=116
0x2af: Pop(0)
0x2b0: Push((int) 529025)
0x2b1: Push((int) 30466)
0x2b2: Push((int) 30465)
0x2b3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b4: Pop(3)
0x2b5: Return(); Pop(0)

0x2b6: Push((int) 30466)
0x2b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2b9: PushEmpty(string)
0x2ba: Stack[-1] = "Neutral" // @poff=89
0x2bb: Call2 0x184

0x2bc: Pop(1)
0x2bd: Push((int) 529026)
0x2be: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2bf: Pop(1)
0x2c0: @@@ ClearReplies(); Obj=0 // @poff=116
0x2c1: Pop(0)
0x2c2: Push((int) 529027)
0x2c3: Push((int) -1)
0x2c4: Push((int) 30467)
0x2c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c6: Pop(3)
0x2c7: Return(); Pop(0)

0x2c8: Push((int) 27682)
0x2c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2cb: PushEmpty(string)
0x2cc: Stack[-1] = "Neutral" // @poff=89
0x2cd: Call2 0x184

0x2ce: Pop(1)
0x2cf: Push((int) 526407)
0x2d0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d1: Pop(1)
0x2d2: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d3: Pop(0)
0x2d4: Push((int) 526408)
0x2d5: Push((int) 30453)
0x2d6: Push((int) 27683)
0x2d7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d8: Pop(3)
0x2d9: Return(); Pop(0)

0x2da: Push((int) 30453)
0x2db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2dd: PushEmpty(string)
0x2de: Stack[-1] = "Neutral" // @poff=89
0x2df: Call2 0x184

0x2e0: Pop(1)
0x2e1: Push((int) 529013)
0x2e2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e3: Pop(1)
0x2e4: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e5: Pop(0)
0x2e6: Push((int) 529014)
0x2e7: Push((int) 27684)
0x2e8: Push((int) 30454)
0x2e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ea: Pop(3)
0x2eb: Return(); Pop(0)

0x2ec: Push((int) 27684)
0x2ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2ef: PushEmpty(string)
0x2f0: Stack[-1] = "Neutral" // @poff=89
0x2f1: Call2 0x184

0x2f2: Pop(1)
0x2f3: Push((int) 526409)
0x2f4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2f5: Pop(1)
0x2f6: @@@ ClearReplies(); Obj=0 // @poff=116
0x2f7: Pop(0)
0x2f8: Push((int) 526410)
0x2f9: Push((int) -1)
0x2fa: Push((int) 27685)
0x2fb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2fc: Pop(3)
0x2fd: Return(); Pop(0)

0x2fe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ff: PushEmpty(bool)
0x300: Call2 0x754

0x301: Pop(0)
0x302: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x303: @ lshStopAnimation()
0x304: Pop(0)
0x305: GOTO 0x308

0x306: @ StopAnimation()
0x307: Pop(0)
0x308: Return(); Pop(0)

0x309: GOTO 0x19b

0x30a: Return(); Pop(0)

0x30b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x30c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x30d: PushEmpty(bool, object)
0x30e: PushEmpty(object)
0x30f: Call2 0x704

0x310: Stack[-1] = Stack[-2]
0x311: Pop(1)
0x312: Call2 0x657

0x313: Pop(2)
0x314: PushEmpty(bool, object, float)
0x315: Stack[-12] = Stack[-2]
0x316: Stack[-1] = (float) 70.0
0x317: Call2 0x602

0x318: Pop(2)
0x319: Pop(1); Push((bool) Stack[-1] == 0)
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-10] = (int) -2
0x31c: Return(); Pop(8)

0x31d: @ CreateDialog(Stack[-4])
0x31e: Pop(0)
0x31f: PushEmpty(int)
0x320: Call2 0x74e

0x321: Pop(0)
0x322: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x323: Pop(1)
0x324: PushEmpty(int)
0x325: Call2 0x74c

0x326: Pop(0)
0x327: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x328: Pop(1)
0x329: PushEmpty(string)
0x32a: Call2 0x750

0x32b: Pop(0)
0x32c: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x32d: Pop(1)
0x32e: PushEmpty(string)
0x32f: Call2 0x752

0x330: Pop(0)
0x331: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x332: Pop(1)
0x333: PushEmpty(int)
0x334: Call2 0x7df

0x335: Pop(0)
0x336: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x337: Pop(1)
0x338: Stack[-2] = (int) -1
0x339: @ IsOverrideActive(Stack[-3])
0x33a: Pop(0)
0x33b: Push(Stack[-3])
0x33c: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33d: Stack[-10] = (int) -2
0x33e: Return(); Pop(8)

0x33f: @ DoDialog(Stack[-4])
0x340: Pop(0)
0x341: PushEmpty(object, object)
0x342: Stack[-11] = Stack[-2]
0x343: Stack[-6] = Stack[-1]
0x344: Push(-2, 4); TaskCall(6)
0x345: Call2 0x35c

0x346: Pop(-2, 4); TaskReturn
0x347: Pop(2)
0x348: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x349: Pop(0)
0x34a: Pop(0); Push((bool) Stack[-1] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34c: @ sync()
0x34d: Pop(0)
0x34e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x34f: Pop(0)
0x350: GOTO 0x34a

0x351: PushEmpty(object)
0x352: Stack[-10] = Stack[-1]
0x353: Call2 0x646

0x354: Pop(1)
0x355: @ StopDialog(Stack[-4])
0x356: Pop(0)
0x357: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x358: Pop(0)
0x359: Stack[-2] = Stack[-10]
0x35a: Return(); Pop(8)

0x35b: Stack[-4] = 0
0x35c: PushEmpty()
0x35d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x35e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x35f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x360: Push((int) 1)
0x361: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x362: PushEmpty(string)
0x363: Stack[-1] = "Neutral" // @poff=89
0x364: Call2 0x39b

0x365: Pop(1)
0x366: Push((int) 535284)
0x367: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x368: Pop(1)
0x369: @@@ ClearReplies(); Obj=0 // @poff=116
0x36a: Pop(0)
0x36b: Push((int) 535285)
0x36c: Push((int) 36962)
0x36d: Push((int) 36961)
0x36e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36f: Pop(3)
0x370: Push((int) 535292)
0x371: Push((int) -1)
0x372: Push((int) 36968)
0x373: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x374: Pop(3)
0x375: Push((int) 535293)
0x376: Push((int) -1)
0x377: Push((int) 36969)
0x378: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x379: Pop(3)
0x37a: GOTO 0x37d

0x37b: Return(); Pop(0)

0x37c: GOTO 0x360

0x37d: PushEmpty(bool)
0x37e: Call2 0x754

0x37f: Pop(0)
0x380: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x381: @ lshWaitForAnimEnd()
0x382: Pop(0)
0x383: Push( Stack[3 + Tasks[-1].StackPointer] )
0x384: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x385: GOTO 0x38b

0x386: PushEmpty(string)
0x387: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x388: Call2 0x6e1

0x389: Pop(1)
0x38a: GOTO 0x381

0x38b: GOTO 0x39a

0x38c: Push("all") // @poff=138
0x38d: Push("idle") // @poff=146
0x38e: @ PlayAnimation(Stack[-2], Stack[-1])
0x38f: Pop(2)
0x390: @ WaitForAnimEnd()
0x391: Pop(0)
0x392: Push( Stack[3 + Tasks[-1].StackPointer] )
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: GOTO 0x39a

0x395: Push("all") // @poff=138
0x396: Push("idle") // @poff=146
0x397: @ PlayAnimation(Stack[-2], Stack[-1])
0x398: Pop(2)
0x399: GOTO 0x390

0x39a: Return(); Pop(0)

0x39b: PushEmpty()
0x39c: PushEmpty(bool)
0x39d: Call2 0x754

0x39e: Pop(0)
0x39f: Pop(1); Push((bool) Stack[-1] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: Return(); Pop(0)

0x3a2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: Return(); Pop(0)

0x3a5: PushEmpty(string, bool)
0x3a6: Stack[-3] = Stack[-2]
0x3a7: Push("") // @poff=102
0x3a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-1] = (bool) 0
0x3ab: GOTO 0x3ad

0x3ac: Stack[-1] = (bool) 1
0x3ad: Call2 0x6e8

0x3ae: Pop(2)
0x3af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3b0: Return(); Pop(0)

0x3b1: PushEmpty()
0x3b2: Push((int) 1)
0x3b3: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3b4: PushEmpty()
0x3b5: Call2 0x6fd

0x3b6: Pop(0)
0x3b7: Push((int) 36960)
0x3b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3ba: PushEmpty(string)
0x3bb: Stack[-1] = "Neutral" // @poff=89
0x3bc: Call2 0x39b

0x3bd: Pop(1)
0x3be: Push((int) 535284)
0x3bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c0: Pop(1)
0x3c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c2: Pop(0)
0x3c3: Push((int) 535285)
0x3c4: Push((int) 36962)
0x3c5: Push((int) 36961)
0x3c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c7: Pop(3)
0x3c8: Push((int) 535292)
0x3c9: Push((int) -1)
0x3ca: Push((int) 36968)
0x3cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3cc: Pop(3)
0x3cd: Push((int) 535293)
0x3ce: Push((int) -1)
0x3cf: Push((int) 36969)
0x3d0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3d1: Pop(3)
0x3d2: Return(); Pop(0)

0x3d3: Push((int) 36962)
0x3d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3d6: PushEmpty(string)
0x3d7: Stack[-1] = "Neutral" // @poff=89
0x3d8: Call2 0x39b

0x3d9: Pop(1)
0x3da: Push((int) 535286)
0x3db: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3dc: Pop(1)
0x3dd: @@@ ClearReplies(); Obj=0 // @poff=116
0x3de: Pop(0)
0x3df: Push((int) 535287)
0x3e0: Push((int) 36964)
0x3e1: Push((int) 36963)
0x3e2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e3: Pop(3)
0x3e4: Push((int) 535291)
0x3e5: Push((int) -1)
0x3e6: Push((int) 36967)
0x3e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e8: Pop(3)
0x3e9: Return(); Pop(0)

0x3ea: Push((int) 36964)
0x3eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ed: PushEmpty(string)
0x3ee: Stack[-1] = "Neutral" // @poff=89
0x3ef: Call2 0x39b

0x3f0: Pop(1)
0x3f1: Push((int) 535288)
0x3f2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3f3: Pop(1)
0x3f4: @@@ ClearReplies(); Obj=0 // @poff=116
0x3f5: Pop(0)
0x3f6: Push((int) 535289)
0x3f7: Push((int) -1)
0x3f8: Push((int) 36965)
0x3f9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3fa: Pop(3)
0x3fb: Push((int) 535290)
0x3fc: Push((int) -1)
0x3fd: Push((int) 36966)
0x3fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ff: Pop(3)
0x400: Return(); Pop(0)

0x401: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x402: PushEmpty(bool)
0x403: Call2 0x754

0x404: Pop(0)
0x405: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x406: @ lshStopAnimation()
0x407: Pop(0)
0x408: GOTO 0x40b

0x409: @ StopAnimation()
0x40a: Pop(0)
0x40b: Return(); Pop(0)

0x40c: GOTO 0x3b2

0x40d: Return(); Pop(0)

0x40e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x40f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x410: PushEmpty(bool, object)
0x411: PushEmpty(object)
0x412: Call2 0x704

0x413: Stack[-1] = Stack[-2]
0x414: Pop(1)
0x415: Call2 0x657

0x416: Pop(2)
0x417: PushEmpty(bool, object, float)
0x418: Stack[-12] = Stack[-2]
0x419: Stack[-1] = (float) 70.0
0x41a: Call2 0x602

0x41b: Pop(2)
0x41c: Pop(1); Push((bool) Stack[-1] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: Stack[-10] = (int) -2
0x41f: Return(); Pop(8)

0x420: @ CreateDialog(Stack[-4])
0x421: Pop(0)
0x422: PushEmpty(int)
0x423: Call2 0x74e

0x424: Pop(0)
0x425: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x426: Pop(1)
0x427: PushEmpty(int)
0x428: Call2 0x74c

0x429: Pop(0)
0x42a: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x42b: Pop(1)
0x42c: PushEmpty(string)
0x42d: Call2 0x750

0x42e: Pop(0)
0x42f: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x430: Pop(1)
0x431: PushEmpty(string)
0x432: Call2 0x752

0x433: Pop(0)
0x434: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x435: Pop(1)
0x436: PushEmpty(int)
0x437: Call2 0x7df

0x438: Pop(0)
0x439: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x43a: Pop(1)
0x43b: Stack[-2] = (int) -1
0x43c: @ IsOverrideActive(Stack[-3])
0x43d: Pop(0)
0x43e: Push(Stack[-3])
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: Stack[-10] = (int) -2
0x441: Return(); Pop(8)

0x442: @ DoDialog(Stack[-4])
0x443: Pop(0)
0x444: PushEmpty(object, object)
0x445: Stack[-11] = Stack[-2]
0x446: Stack[-6] = Stack[-1]
0x447: Push(-2, 4); TaskCall(8)
0x448: Call2 0x45f

0x449: Pop(-2, 4); TaskReturn
0x44a: Pop(2)
0x44b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x44c: Pop(0)
0x44d: Pop(0); Push((bool) Stack[-1] == 0)
0x44e: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44f: @ sync()
0x450: Pop(0)
0x451: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x452: Pop(0)
0x453: GOTO 0x44d

0x454: PushEmpty(object)
0x455: Stack[-10] = Stack[-1]
0x456: Call2 0x646

0x457: Pop(1)
0x458: @ StopDialog(Stack[-4])
0x459: Pop(0)
0x45a: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x45b: Pop(0)
0x45c: Stack[-2] = Stack[-10]
0x45d: Return(); Pop(8)

0x45e: Stack[-4] = 0
0x45f: PushEmpty()
0x460: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x461: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x462: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x463: Push((int) 1)
0x464: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x465: PushEmpty(string)
0x466: Stack[-1] = "Neutral" // @poff=89
0x467: Call2 0x499

0x468: Pop(1)
0x469: Push((int) 540539)
0x46a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x46b: Pop(1)
0x46c: @@@ ClearReplies(); Obj=0 // @poff=116
0x46d: Pop(0)
0x46e: Push((int) 540540)
0x46f: Push((int) -1)
0x470: Push((int) 42549)
0x471: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x472: Pop(3)
0x473: Push((int) 540799)
0x474: Push((int) -1)
0x475: Push((int) 42848)
0x476: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x477: Pop(3)
0x478: GOTO 0x47b

0x479: Return(); Pop(0)

0x47a: GOTO 0x463

0x47b: PushEmpty(bool)
0x47c: Call2 0x754

0x47d: Pop(0)
0x47e: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x47f: @ lshWaitForAnimEnd()
0x480: Pop(0)
0x481: Push( Stack[3 + Tasks[-1].StackPointer] )
0x482: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x483: GOTO 0x489

0x484: PushEmpty(string)
0x485: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x486: Call2 0x6e1

0x487: Pop(1)
0x488: GOTO 0x47f

0x489: GOTO 0x498

0x48a: Push("all") // @poff=138
0x48b: Push("idle") // @poff=146
0x48c: @ PlayAnimation(Stack[-2], Stack[-1])
0x48d: Pop(2)
0x48e: @ WaitForAnimEnd()
0x48f: Pop(0)
0x490: Push( Stack[3 + Tasks[-1].StackPointer] )
0x491: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x492: GOTO 0x498

0x493: Push("all") // @poff=138
0x494: Push("idle") // @poff=146
0x495: @ PlayAnimation(Stack[-2], Stack[-1])
0x496: Pop(2)
0x497: GOTO 0x48e

0x498: Return(); Pop(0)

0x499: PushEmpty()
0x49a: PushEmpty(bool)
0x49b: Call2 0x754

0x49c: Pop(0)
0x49d: Pop(1); Push((bool) Stack[-1] == 0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: Return(); Pop(0)

0x4a0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a2: Return(); Pop(0)

0x4a3: PushEmpty(string, bool)
0x4a4: Stack[-3] = Stack[-2]
0x4a5: Push("") // @poff=102
0x4a6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a8: Stack[-1] = (bool) 0
0x4a9: GOTO 0x4ab

0x4aa: Stack[-1] = (bool) 1
0x4ab: Call2 0x6e8

0x4ac: Pop(2)
0x4ad: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4ae: Return(); Pop(0)

0x4af: PushEmpty()
0x4b0: Push((int) 1)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4b2: PushEmpty()
0x4b3: Call2 0x6fd

0x4b4: Pop(0)
0x4b5: Push((int) 42548)
0x4b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4b8: PushEmpty(string)
0x4b9: Stack[-1] = "Neutral" // @poff=89
0x4ba: Call2 0x499

0x4bb: Pop(1)
0x4bc: Push((int) 540539)
0x4bd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4be: Pop(1)
0x4bf: @@@ ClearReplies(); Obj=0 // @poff=116
0x4c0: Pop(0)
0x4c1: Push((int) 540540)
0x4c2: Push((int) -1)
0x4c3: Push((int) 42549)
0x4c4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4c5: Pop(3)
0x4c6: Push((int) 540799)
0x4c7: Push((int) -1)
0x4c8: Push((int) 42848)
0x4c9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ca: Pop(3)
0x4cb: Return(); Pop(0)

0x4cc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4cd: PushEmpty(bool)
0x4ce: Call2 0x754

0x4cf: Pop(0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d1: @ lshStopAnimation()
0x4d2: Pop(0)
0x4d3: GOTO 0x4d6

0x4d4: @ StopAnimation()
0x4d5: Pop(0)
0x4d6: Return(); Pop(0)

0x4d7: GOTO 0x4b0

0x4d8: Return(); Pop(0)

0x4d9: Push(GlobalVars[1])
0x4da: Stack[-1] = (bool) 0
0x4db: GlobalVars[1] = Stack[-1]; Pop(1)
0x4dc: PushEmpty()
0x4dd: Call2 0x4e0

0x4de: Pop(0)
0x4df: Return(); Pop(0)

0x4e0: PushEmpty(bool)
0x4e1: Call2 0x5fd

0x4e2: Pop(0)
0x4e3: Pop(1); Push((bool) Stack[-1] == 0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e5: PushEmpty()
0x4e6: Push(-0, 0); TaskCall(0)
0x4e7: Call2 0x0

0x4e8: Pop(-0, 0); TaskReturn
0x4e9: Pop(0)
0x4ea: PushEmpty()
0x4eb: Call2 0x560

0x4ec: Pop(0)
0x4ed: @ GetDirection(Stack[-0]T)
0x4ee: Pop(0)
0x4ef: PushEmpty()
0x4f0: Call2 0x596

0x4f1: Pop(0)
0x4f2: GOTO 0x4ef

0x4f3: Return(); Pop(0)

0x4f4: PushEmpty(object, object)
0x4f5: Push("player") // @poff=156
0x4f6: @ FindActor(Stack[-2], Stack[-1])
0x4f7: Pop(1)
0x4f8: Pop(0); Push((bool) Stack[-1] == 0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fa: Stack[-3] = (bool) 0
0x4fb: Return(); Pop(2)

0x4fc: PushEmpty(bool, object)
0x4fd: Stack[-3] = Stack[-1]
0x4fe: Call2 0x5f4

0x4ff: Stack[-2] = Stack[-5]
0x500: Pop(2)
0x501: Return(); Pop(2)

0x502: Stack[-1] = 0
0x503: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x504: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x505: @ RotateAsync(Stack[-2], Stack[-1])
0x506: Pop(2)
0x507: Return(); Pop(0)

0x508: PushEmpty(object, bool, object, bool)
0x509: Push("player") // @poff=156
0x50a: @ FindActor(Stack[-3], Stack[-1])
0x50b: Pop(1)
0x50c: Pop(0); Push((bool) Stack[-2] == 0)
0x50d: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50e: Stack[-5] = (bool) 0
0x50f: Return(); Pop(4)

0x510: PushEmpty(float, object)
0x511: Stack[-4] = Stack[-1]
0x512: Call2 0x5e2

0x513: Pop(1)
0x514: Push((float)90000.0)
0x515: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x517: Stack[-5] = (bool) 0
0x518: Return(); Pop(4)

0x519: @ CanSee(Stack[-1], Stack[-2])
0x51a: Pop(0)
0x51b: Stack[-1] = Stack[-5]
0x51c: Return(); Pop(4)

0x51d: Stack[-2] = 0
0x51e: PushEmpty(float, float)
0x51f: Push((int) 8)
0x520: Push((int) 16)
0x521: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x522: Pop(2)
0x523: Push((int) 10)
0x524: @ SetTimer(Stack[-1], Stack[-2])
0x525: Pop(1)
0x526: Return(); Pop(2)

0x527: Push((int) 10)
0x528: @ KillTimer(Stack[-1])
0x529: Pop(1)
0x52a: Return(); Pop(0)

0x52b: PushEmpty()
0x52c: Push((int) 10)
0x52d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x52f: PushEmpty()
0x530: Call2 0x527

0x531: Pop(0)
0x532: PushEmpty(bool)
0x533: Stack[-1] = (bool) 0
0x534: PushEmpty(bool)
0x535: Call2 0x5fd

0x536: Pop(0)
0x537: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x538: PushEmpty(bool)
0x539: Call2 0x508

0x53a: Pop(0)
0x53b: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53c: Stack[-1] = (bool) 1
0x53d: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x53e: PushEmpty(bool)
0x53f: Call2 0x4f4

0x540: Pop(0)
0x541: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x542: PushEmpty(bool, object)
0x543: PushEmpty(object)
0x544: Call2 0x704

0x545: Stack[-1] = Stack[-2]
0x546: Pop(1)
0x547: Call2 0x691

0x548: Pop(2)
0x549: GOTO 0x550

0x54a: PushEmpty()
0x54b: Call2 0x503

0x54c: Pop(0)
0x54d: PushEmpty()
0x54e: Call2 0x51e

0x54f: Pop(0)
0x550: Return(); Pop(0)

0x551: PushEmpty()
0x552: Call2 0x5dd

0x553: Pop(0)
0x554: PushEmpty()
0x555: Call2 0x527

0x556: Pop(0)
0x557: @ lshStopSpeech()
0x558: Pop(0)
0x559: @ lshStopAnimation()
0x55a: Pop(0)
0x55b: @ StopAsync()
0x55c: Pop(0)
0x55d: @ Hold()
0x55e: Pop(0)
0x55f: Return(); Pop(0)

0x560: @ StopGroup0()
0x561: Pop(0)
0x562: PushEmpty()
0x563: Call2 0x527

0x564: Pop(0)
0x565: PushEmpty(string)
0x566: Stack[-1] = "Neutral" // @poff=89
0x567: Call2 0x6e1

0x568: Pop(1)
0x569: PushEmpty()
0x56a: Call2 0x51e

0x56b: Pop(0)
0x56c: Return(); Pop(0)

0x56d: PushEmpty()
0x56e: Push(Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x570: PushEmpty()
0x571: Call2 0x51e

0x572: Pop(0)
0x573: GOTO 0x578

0x574: PushEmpty(string)
0x575: Stack[-1] = "Neutral" // @poff=89
0x576: Call2 0x6e1

0x577: Pop(1)
0x578: Return(); Pop(0)

0x579: PushEmpty(bool, bool)
0x57a: @ IsOverrideActive(Stack[-1])
0x57b: Pop(0)
0x57c: Pop(0); Push((bool) Stack[-1] == 0)
0x57d: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x57e: EventDisable(0)
0x57f: PushEmpty()
0x580: Call2 0x5dd

0x581: Pop(0)
0x582: PushEmpty(bool, object)
0x583: Stack[-5] = Stack[-1]
0x584: Call2 0x5f4

0x585: Pop(2)
0x586: EventEnable(0)
0x587: PushEmpty(object)
0x588: Stack[-4] = Stack[-1]
0x589: Call2 0x7f0

0x58a: Pop(1)
0x58b: PushEmpty(string)
0x58c: Stack[-1] = "Neutral" // @poff=89
0x58d: Call2 0x6e1

0x58e: Pop(1)
0x58f: PushEmpty()
0x590: Call2 0x527

0x591: Pop(0)
0x592: PushEmpty()
0x593: Call2 0x51e

0x594: Pop(0)
0x595: Return(); Pop(2)

0x596: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x597: @ WaitForAnimEnd()
0x598: Pop(0)
0x599: PushEmpty(bool)
0x59a: Call2 0x5fd

0x59b: Pop(0)
0x59c: Pop(1); Push((bool) Stack[-1] == 0)
0x59d: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59e: Return(); Pop(12)

0x59f: PushEmpty(int)
0x5a0: Call2 0x73b

0x5a1: Stack[-1] = Stack[-7]
0x5a2: Pop(1)
0x5a3: Stack[-5] = (int) 0
0x5a4: PushEmpty(bool)
0x5a5: Stack[-1] = (bool) 0
0x5a6: Push((int) 5)
0x5a7: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5a9: PushEmpty(bool)
0x5aa: Call2 0x5fd

0x5ab: Pop(0)
0x5ac: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ad: Stack[-1] = (bool) 1
0x5ae: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5af: Pop(0); Push((bool) Stack[-6] == 0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b1: Push((int) 3)
0x5b2: @ Sleep(Stack[-1], Stack[-5])
0x5b3: Pop(1)
0x5b4: Pop(0); Push((bool) Stack[-4] == 0)
0x5b5: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b6: GOTO 0x5d8

0x5b7: GOTO 0x5cd

0x5b8: @ irand(Stack[-3], Stack[-6])
0x5b9: Pop(0)
0x5ba: Push((int) 5)
0x5bb: @ irand(Stack[-3], Stack[-1])
0x5bc: Pop(1)
0x5bd: Push((int) 0)
0x5be: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5c0: Stack[-3] = (int) 0
0x5c1: Push("all") // @poff=138
0x5c2: PushEmpty(string, int)
0x5c3: Stack[-6] = Stack[-1]
0x5c4: Call2 0x734

0x5c5: Pop(1)
0x5c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x5c7: Pop(2)
0x5c8: @ WaitForAnimEnd(Stack[-1])
0x5c9: Pop(0)
0x5ca: Pop(0); Push((bool) Stack[-1] == 0)
0x5cb: IF (Stack[-1] == 0) GOTO 0x5cd; Pop(1)

0x5cc: GOTO 0x5d8

0x5cd: PushEmpty(bool)
0x5ce: Call2 0x5db

0x5cf: Pop(0)
0x5d0: Pop(1); Push((bool) Stack[-1] == 0)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d2: GOTO 0x5d8

0x5d3: @ ResetAAS()
0x5d4: Pop(0)
0x5d5: Push((int) 1)
0x5d6: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x5d7: GOTO 0x5a4

0x5d8: @ ResetAAS()
0x5d9: Pop(0)
0x5da: Return(); Pop(12)

0x5db: Stack[-1] = (bool) 1
0x5dc: Return(); Pop(0)

0x5dd: @ StopAnimation()
0x5de: Pop(0)
0x5df: @ StopGroup0()
0x5e0: Pop(0)
0x5e1: Return(); Pop(0)

0x5e2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e3: @ GetPosition(Stack[-3])
0x5e4: Pop(0)
0x5e5: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0x5e6: Pop(0)
0x5e7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5e8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5e9: Return(); Pop(6)

0x5ea: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x5eb: @ GetPosition(Stack[-3])
0x5ec: Pop(0)
0x5ed: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x5ee: Push(CvectorIndex(Stack[-2], 0))
0x5ef: Push(CvectorIndex(Stack[-3], 2))
0x5f0: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x5f1: Pop(2)
0x5f2: Stack[-1] = Stack[-8]
0x5f3: Return(); Pop(6)

0x5f4: PushEmpty(cvector, cvector)
0x5f5: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0x5f6: Pop(0)
0x5f7: PushEmpty(bool, cvector)
0x5f8: Stack[-3] = Stack[-1]
0x5f9: Call2 0x5ea

0x5fa: Stack[-2] = Stack[-6]
0x5fb: Pop(2)
0x5fc: Return(); Pop(2)

0x5fd: PushEmpty(bool, bool)
0x5fe: @ IsLoaded(Stack[-1])
0x5ff: Pop(0)
0x600: Stack[-1] = Stack[-3]
0x601: Return(); Pop(2)

0x602: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x603: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0x604: Pop(0)
0x605: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0x606: Pop(0)
0x607: Push(CvectorIndex(Stack[-8], 1))
0x608: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x609: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x60a: @ GetPosition(Stack[-7])
0x60b: Pop(0)
0x60c: @ GetEyesHeight(Stack[-9])
0x60d: Pop(0)
0x60e: Push(CvectorIndex(Stack[-7], 1))
0x60f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x610: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x611: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x612: Push(CvectorIndex(Stack[-6], 1))
0x613: Stack[-1] = (int) 0
0x614: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x615: Pop(0); Push(Stack[-6] | Stack[-6]);
0x616: Pop(1); Push(Sqrt(Stack[-1]))
0x617: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x618: Stack[-5] = -Stack[-6]; Pop(0);
0x619: Pop(0); Push(Stack[-6] * Stack[-19]);
0x61a: PushEmpty(cvector, cvector)
0x61b: Push([0.0, 1.0, 0.0])
0x61c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x61d: Call2 0x70a

0x61e: Pop(1)
0x61f: Push((int) 25)
0x620: Pop(2); Push(Stack[-2] * Stack[-1]);
0x621: Pop(2); Push(Stack[-2] + Stack[-1]);
0x622: Push([0.0, 10.0, 0.0])
0x623: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x624: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x625: @ IsOverrideActive(Stack[-2])
0x626: Pop(0)
0x627: Push(Stack[-2])
0x628: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x629: Stack[-21] = (bool) 0
0x62a: Return(); Pop(18)

0x62b: @ StopWorld()
0x62c: Pop(0)
0x62d: @ CameraTransit(Stack[-3], Stack[-5])
0x62e: Pop(0)
0x62f: Push(CvectorIndex(Stack[-4], 0))
0x630: Push(CvectorIndex(Stack[-5], 2))
0x631: @ Rotate(Stack[-2], Stack[-1])
0x632: Pop(2)
0x633: PushEmpty(bool)
0x634: Call2 0x754

0x635: Pop(0)
0x636: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x637: GOTO 0x640

0x638: Push("head") // @poff=196
0x639: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x63a: Pop(1)
0x63b: Push(Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63d: Push("head") // @poff=196
0x63e: @ LookAsyncCamera(Stack[-1])
0x63f: Pop(1)
0x640: @ CameraWaitForPlayFinish()
0x641: Pop(0)
0x642: @ ResumeWorld()
0x643: Pop(0)
0x644: Stack[-21] = (bool) 1
0x645: Return(); Pop(18)

0x646: PushEmpty(bool, bool)
0x647: @ CameraSwitchToNormal()
0x648: Pop(0)
0x649: PushEmpty(bool)
0x64a: Call2 0x754

0x64b: Pop(0)
0x64c: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64d: GOTO 0x656

0x64e: Push("head") // @poff=196
0x64f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x650: Pop(1)
0x651: Push(Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x653: Push("head") // @poff=196
0x654: @ UnlookAsync(Stack[-1])
0x655: Pop(1)
0x656: Return(); Pop(2)

0x657: PushEmpty(int, int, int, int)
0x658: Push("voice_common") // @poff=206
0x659: @ GetVariable(Stack[-1], Stack[-3])
0x65a: Pop(1)
0x65b: Push(Stack[-2])
0x65c: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x65d: PushEmpty(bool, object)
0x65e: Stack[-7] = Stack[-1]
0x65f: Call2 0x691

0x660: Pop(1)
0x661: Pop(1); Push((bool) Stack[-1] == 0)
0x662: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x663: PushEmpty(bool, object)
0x664: Stack[-7] = Stack[-1]
0x665: Call2 0x6b6

0x666: Pop(1)
0x667: Pop(1); Push((bool) Stack[-1] == 0)
0x668: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x669: Stack[-6] = (bool) 0
0x66a: Return(); Pop(4)

0x66b: Push((int) 2)
0x66c: @ irand(Stack[-2], Stack[-1])
0x66d: Pop(1)
0x66e: Push(Stack[-1])
0x66f: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x670: Push("voice_common") // @poff=206
0x671: Push((int) 1)
0x672: Pop(1); Push(Stack[-4] + Stack[-1]);
0x673: Push((int) 3)
0x674: Pop(2); Push(Stack[-2] % Stack[-1]);
0x675: @ SetVariable(Stack[-2], Stack[-1])
0x676: Pop(2)
0x677: GOTO 0x67c

0x678: Push("voice_common") // @poff=206
0x679: Push((int) 0)
0x67a: @ SetVariable(Stack[-2], Stack[-1])
0x67b: Pop(2)
0x67c: GOTO 0x68f

0x67d: PushEmpty(bool, object)
0x67e: Stack[-7] = Stack[-1]
0x67f: Call2 0x6b6

0x680: Pop(1)
0x681: Pop(1); Push((bool) Stack[-1] == 0)
0x682: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x683: PushEmpty(bool, object)
0x684: Stack[-7] = Stack[-1]
0x685: Call2 0x691

0x686: Pop(1)
0x687: Pop(1); Push((bool) Stack[-1] == 0)
0x688: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x689: Stack[-6] = (bool) 0
0x68a: Return(); Pop(4)

0x68b: Push("voice_common") // @poff=206
0x68c: Push((int) 1)
0x68d: @ SetVariable(Stack[-2], Stack[-1])
0x68e: Pop(2)
0x68f: Stack[-6] = (bool) 1
0x690: Return(); Pop(4)

0x691: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x692: Stack[-5] = "c" // @poff=232
0x693: Stack[-4] = (int) 0
0x694: Push((int) 1)
0x695: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x696: Push((int) 1)
0x697: Pop(1); Push(Stack[-5] + Stack[-1]);
0x698: Pop(1); Push(Stack[-6] + Stack[-1]);
0x699: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x69a: Pop(1)
0x69b: Pop(0); Push((bool) Stack[-3] == 0)
0x69c: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69d: GOTO 0x6a1

0x69e: Push((int) 1)
0x69f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6a0: GOTO 0x694

0x6a1: Pop(0); Push((bool) Stack[-4] == 0)
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a3: Stack[-12] = (bool) 0
0x6a4: Return(); Pop(10)

0x6a5: Stack[-2] = (int) 0
0x6a6: Push((int) 1)
0x6a7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a9: @ irand(Stack[-2], Stack[-4])
0x6aa: Pop(0)
0x6ab: Push((int) 1)
0x6ac: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6ad: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6ae: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x6af: Pop(1)
0x6b0: PushEmpty(bool, string)
0x6b1: Stack[-3] = Stack[-1]
0x6b2: Call2 0x6ee

0x6b3: Stack[-2] = Stack[-14]
0x6b4: Pop(2)
0x6b5: Return(); Pop(10)

0x6b6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6b7: Push("d") // @poff=202
0x6b8: PushEmpty(int)
0x6b9: Call2 0x725

0x6ba: Pop(0)
0x6bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6bc: Push("m") // @poff=260
0x6bd: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6be: Stack[-4] = (int) 0
0x6bf: Push((int) 1)
0x6c0: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c1: Push((int) 1)
0x6c2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6c3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6c4: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0x6c5: Pop(1)
0x6c6: Pop(0); Push((bool) Stack[-3] == 0)
0x6c7: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c8: GOTO 0x6cc

0x6c9: Push((int) 1)
0x6ca: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6cb: GOTO 0x6bf

0x6cc: Pop(0); Push((bool) Stack[-4] == 0)
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6ce: Stack[-12] = (bool) 0
0x6cf: Return(); Pop(10)

0x6d0: Stack[-2] = (int) 0
0x6d1: Push((int) 1)
0x6d2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d4: @ irand(Stack[-2], Stack[-4])
0x6d5: Pop(0)
0x6d6: Push((int) 1)
0x6d7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6d8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6d9: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0x6da: Pop(1)
0x6db: PushEmpty(bool, string)
0x6dc: Stack[-3] = Stack[-1]
0x6dd: Call2 0x6ee

0x6de: Stack[-2] = Stack[-14]
0x6df: Pop(2)
0x6e0: Return(); Pop(10)

0x6e1: PushEmpty(float, float, float, float)
0x6e2: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x6e3: Pop(0)
0x6e4: Push((bool) 0)
0x6e5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6e6: Pop(1)
0x6e7: Return(); Pop(4)

0x6e8: PushEmpty(float, float, float, float)
0x6e9: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x6ea: Pop(0)
0x6eb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x6ec: Pop(0)
0x6ed: Return(); Pop(4)

0x6ee: PushEmpty(bool, bool)
0x6ef: PushEmpty(bool)
0x6f0: Call2 0x754

0x6f1: Pop(0)
0x6f2: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6f3: @ lshHasSpeech(Stack[-1], Stack[-3])
0x6f4: Pop(0)
0x6f5: Push(Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6f7: @ lshPlaySpeech(Stack[-3])
0x6f8: Pop(0)
0x6f9: Stack[-4] = (bool) 1
0x6fa: Return(); Pop(2)

0x6fb: Stack[-4] = (bool) 0
0x6fc: Return(); Pop(2)

0x6fd: PushEmpty(bool)
0x6fe: Call2 0x754

0x6ff: Pop(0)
0x700: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x701: @ lshStopSpeech()
0x702: Pop(0)
0x703: Return(); Pop(0)

0x704: PushEmpty(object, object)
0x705: @ self(Stack[-1])
0x706: Pop(0)
0x707: Stack[-1] = Stack[-3]
0x708: Return(); Pop(2)

0x709: Stack[-1] = 0
0x70a: PushEmpty(float, float)
0x70b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x70c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x70d: Push((float)9.999999974752427e-07)
0x70e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x70f: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x710: Stack[-4] = [0.0, 0.0, 0.0]
0x711: Return(); Pop(2)

0x712: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x713: Return(); Pop(2)

0x714: PushEmpty(int, int)
0x715: @ GetVariable(Stack[-3], Stack[-1])
0x716: Pop(0)
0x717: Stack[-1] = Stack[-4]
0x718: Return(); Pop(2)

0x719: PushEmpty(object, object)
0x71a: @ FindActor(Stack[-1], Stack[-4])
0x71b: Pop(0)
0x71c: Pop(0); PushNull((bool) Stack[-1] == 0)
0x71d: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71e: Stack[-5] = (bool) 0
0x71f: Return(); Pop(2)

0x720: @ Trigger(Stack[-1], Stack[-3])
0x721: Pop(0)
0x722: Stack[-5] = (bool) 1
0x723: Return(); Pop(2)

0x724: Stack[-1] = 0
0x725: PushEmpty(float, float)
0x726: @ GetGameTime(Stack[-1])
0x727: Pop(0)
0x728: Push((int) 1)
0x729: PushEmpty(int)
0x72a: Push((int) 24)
0x72b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x72c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x72d: Return(); Pop(2)

0x72e: PushEmpty()
0x72f: PushEmpty(int)
0x730: Call2 0x725

0x731: Pop(0)
0x732: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x733: Return(); Pop(0)

0x734: PushEmpty(string, string)
0x735: Stack[-1] = "idle" // @poff=146
0x736: Push(Stack[-3])
0x737: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x738: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x739: Stack[-1] = Stack[-4]
0x73a: Return(); Pop(2)

0x73b: PushEmpty(int, bool, int, bool)
0x73c: Stack[-2] = (int) 0
0x73d: Push("all") // @poff=138
0x73e: PushEmpty(string, int)
0x73f: Stack[-5] = Stack[-1]
0x740: Call2 0x734

0x741: Pop(1)
0x742: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x743: Pop(2)
0x744: Pop(0); Push((bool) Stack[-1] == 0)
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: GOTO 0x74a

0x747: Push((int) 1)
0x748: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x749: GOTO 0x73d

0x74a: Stack[-2] = Stack[-5]
0x74b: Return(); Pop(4)

0x74c: Stack[-1] = (int) 515545
0x74d: Return(); Pop(0)

0x74e: Stack[-1] = (int) 502870
0x74f: Return(); Pop(0)

0x750: Stack[-1] = "ui/NPC_Mat.png" // @poff=264
0x751: Return(); Pop(0)

0x752: Stack[-1] = "ui/NPC_Mat_b.png" // @poff=294
0x753: Return(); Pop(0)

0x754: Stack[-1] = (bool) 1
0x755: Return(); Pop(0)

0x756: PushEmpty()
0x757: Push("k8q01") // @poff=328
0x758: Push((int) 2)
0x759: @ SetVariable(Stack[-2], Stack[-1])
0x75a: Pop(2)
0x75b: PushEmpty()
0x75c: Call2 0x79c

0x75d: Pop(0)
0x75e: Return(); Pop(0)

0x75f: PushEmpty()
0x760: Push("k8q01") // @poff=328
0x761: Push((int) 4)
0x762: @ SetVariable(Stack[-2], Stack[-1])
0x763: Pop(2)
0x764: PushEmpty()
0x765: Call2 0x7a9

0x766: Pop(0)
0x767: PushEmpty(bool, string, string)
0x768: Stack[-2] = "quest_k8_01" // @poff=340
0x769: Stack[-1] = "unlock_boiny" // @poff=364
0x76a: Call2 0x719

0x76b: Pop(3)
0x76c: Return(); Pop(0)

0x76d: PushEmpty()
0x76e: PushEmpty()
0x76f: Call2 0x78f

0x770: Pop(0)
0x771: PushEmpty(bool, string, string)
0x772: Stack[-2] = "quest_k8_01" // @poff=340
0x773: Stack[-1] = "fail" // @poff=390
0x774: Call2 0x719

0x775: Pop(3)
0x776: Return(); Pop(0)

0x777: PushEmpty()
0x778: PushEmpty(int, string)
0x779: Stack[-1] = "k8q01" // @poff=328
0x77a: Call2 0x714

0x77b: Pop(1)
0x77c: Push((int) 1)
0x77d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x77f: Stack[-2] = (bool) 1
0x780: Return(); Pop(0)

0x781: Stack[-2] = (bool) 0
0x782: Return(); Pop(0)

0x783: PushEmpty()
0x784: PushEmpty(int, string)
0x785: Stack[-1] = "k8q01" // @poff=328
0x786: Call2 0x714

0x787: Pop(1)
0x788: Push((int) 3)
0x789: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x78a: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x78b: Stack[-2] = (bool) 1
0x78c: Return(); Pop(0)

0x78d: Stack[-2] = (bool) 0
0x78e: Return(); Pop(0)

0x78f: PushEmpty(object, object)
0x790: Push((int) 530)
0x791: Push((int) 1)
0x792: Push((int) 530194)
0x793: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x794: Pop(3)
0x795: PushEmpty(bool, object, int)
0x796: Stack[-4] = Stack[-2]
0x797: Stack[-1] = (int) 438
0x798: Call2 0x7c3

0x799: Pop(3)
0x79a: Return(); Pop(2)

0x79b: Stack[-1] = 0
0x79c: PushEmpty(object, object)
0x79d: Push((int) 440)
0x79e: Push((int) 1)
0x79f: Push((int) 526465)
0x7a0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7a1: Pop(3)
0x7a2: PushEmpty(bool, object, int)
0x7a3: Stack[-4] = Stack[-2]
0x7a4: Stack[-1] = (int) 438
0x7a5: Call2 0x7c3

0x7a6: Pop(3)
0x7a7: Return(); Pop(2)

0x7a8: Stack[-1] = 0
0x7a9: PushEmpty(object, object)
0x7aa: Push((int) 442)
0x7ab: Push((int) 1)
0x7ac: Push((int) 526467)
0x7ad: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7ae: Pop(3)
0x7af: PushEmpty(bool, object, int)
0x7b0: Stack[-4] = Stack[-2]
0x7b1: Stack[-1] = (int) 438
0x7b2: Call2 0x7c3

0x7b3: Pop(3)
0x7b4: Return(); Pop(2)

0x7b5: Stack[-1] = 0
0x7b6: PushEmpty(object, object)
0x7b7: @ GetDiaryRoot(Stack[-1])
0x7b8: Pop(0)
0x7b9: Pop(0); Push((bool) Stack[-1] == 0)
0x7ba: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7bb: Push("Can't retrieve diary root") // @poff=400
0x7bc: @ Trace(Stack[-1])
0x7bd: Pop(1)
0x7be: Stack[-3] = (bool) 0
0x7bf: Return(); Pop(2)

0x7c0: Stack[-1] = Stack[-3]
0x7c1: Return(); Pop(2)

0x7c2: Stack[-1] = 0
0x7c3: PushEmpty(object, object, int, object, object, int)
0x7c4: PushEmpty(object)
0x7c5: Call2 0x7b6

0x7c6: Stack[-1] = Stack[-4]
0x7c7: Pop(1)
0x7c8: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=452
0x7c9: Pop(0)
0x7ca: Pop(0); Push((bool) Stack[-2] == 0)
0x7cb: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7cc: Push("Can't find diary parent with id: ") // @poff=457
0x7cd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7ce: @ Trace(Stack[-1])
0x7cf: Pop(1)
0x7d0: Stack[-9] = (bool) 0
0x7d1: Return(); Pop(6)

0x7d2: @@ AddChild(Stack[-8]); Obj=2 // @poff=525
0x7d3: Pop(0)
0x7d4: Push((int) 7)
0x7d5: @ SendWorldWndMessage(Stack[-1])
0x7d6: Pop(1)
0x7d7: @@ GetCategory(Stack[-1]); Obj=8 // @poff=534
0x7d8: Pop(0)
0x7d9: @ SetDiarySection(Stack[-1])
0x7da: Pop(0)
0x7db: Stack[-9] = (bool) 0
0x7dc: Return(); Pop(6)

0x7dd: Stack[-2] = 0
0x7de: Stack[-3] = 0
0x7df: PushEmpty(int, int)
0x7e0: Push("branch") // @poff=546
0x7e1: @ GetVariable(Stack[-1], Stack[-2])
0x7e2: Pop(1)
0x7e3: Push((int) 0)
0x7e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e6: Stack[-3] = (int) 1
0x7e7: Return(); Pop(2)

0x7e8: GOTO 0x7ee

0x7e9: Push((int) 1)
0x7ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7ec: Stack[-3] = (int) 2
0x7ed: Return(); Pop(2)

0x7ee: Stack[-3] = (int) 3
0x7ef: Return(); Pop(2)

0x7f0: PushEmpty()
0x7f1: Push(GlobalVars[1])
0x7f2: Pop(1); Push((bool) Stack[-1] == 0)
0x7f3: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7f4: PushEmpty(int, object)
0x7f5: Stack[-3] = Stack[-1]
0x7f6: Push(-2, 1); TaskCall(1)
0x7f7: Call2 0xd

0x7f8: Pop(-2, 1); TaskReturn
0x7f9: Pop(2)
0x7fa: Push(GlobalVars[1])
0x7fb: Stack[-1] = (bool) 1
0x7fc: GlobalVars[1] = Stack[-1]; Pop(1)
0x7fd: PushEmpty(bool, int)
0x7fe: Stack[-1] = (int) 8
0x7ff: Call2 0x72e

0x800: Pop(1)
0x801: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x802: PushEmpty(int, object)
0x803: Stack[-3] = Stack[-1]
0x804: Push(-2, 1); TaskCall(3)
0x805: Call2 0xe5

0x806: Pop(-2, 1); TaskReturn
0x807: Pop(2)
0x808: Return(); Pop(0)

0x809: PushEmpty(bool, int)
0x80a: Stack[-1] = (int) 12
0x80b: Call2 0x72e

0x80c: Pop(1)
0x80d: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x80e: PushEmpty(int, object)
0x80f: Stack[-3] = Stack[-1]
0x810: Push(-2, 1); TaskCall(5)
0x811: Call2 0x30b

0x812: Pop(-2, 1); TaskReturn
0x813: Pop(2)
0x814: Return(); Pop(0)

0x815: PushEmpty(int, object)
0x816: Stack[-3] = Stack[-1]
0x817: Push(-2, 1); TaskCall(7)
0x818: Call2 0x40e

0x819: Pop(-2, 1); TaskReturn
0x81a: Pop(2)
0x81b: Return(); Pop(0)

