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
	W:k10q01
	W:k10q01KnowAboutRubin
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Bakalavr.png
	W:ui/NPC_Bakalavr_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006b003100300071003000310000006b00310030007100300031004b006e006f007700410062006f007500740052007500620069006e000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f00420061006b0061006c006100760072002e0070006e0067000000750069002f004e00500043005f00420061006b0061006c006100760072005f0062002e0070006e0067000000
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

RunOp = 0x1f4
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcc Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1f8 Vars = (string)
		EVENT_6 Op = 0x20c Vars = ()
		EVENT_5 Op = 0x219 Vars = ()
		EVENT_7 Op = 0x268 Vars = (int)
		EVENT_45 Op = 0x2aa Vars = (bool)
		EVENT_0 Op = 0x2b6 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x33a

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
0x11: Call2 0x441

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x394

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x33f

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x4eb

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x4e9

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x4ed

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x4ef

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x4d8

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
0x55: Call2 0x383

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
0x66: Call2 0x489

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x69: PushEmpty(object, object)
0x6a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c: Call2 0x483

0x6d: Pop(2)
0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral" // @poff=89
0x70: Call2 0xb6

0x71: Pop(1)
0x72: Push((int) 526934)
0x73: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x74: Pop(1)
0x75: @@@ ClearReplies(); Obj=0 // @poff=116
0x76: Pop(0)
0x77: Push((int) 527936)
0x78: Push((int) 29290)
0x79: Push((int) 29289)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 527942)
0x7d: Push((int) 29297)
0x7e: Push((int) 29295)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0x98

0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral" // @poff=89
0x84: Call2 0xb6

0x85: Pop(1)
0x86: Push((int) 526936)
0x87: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x88: Pop(1)
0x89: @@@ ClearReplies(); Obj=0 // @poff=116
0x8a: Pop(0)
0x8b: Push((int) 527935)
0x8c: Push((int) -1)
0x8d: Push((int) 29288)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: Push((int) 526937)
0x91: Push((int) -1)
0x92: Push((int) 28229)
0x93: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x94: Pop(3)
0x95: GOTO 0x98

0x96: Return(); Pop(0)

0x97: GOTO 0x62

0x98: PushEmpty(bool)
0x99: Call2 0x4f1

0x9a: Pop(0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x9c: @ lshWaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: PushEmpty(string)
0xa2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa3: Call2 0x41e

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
0xb8: Call2 0x4f1

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
0xc8: Call2 0x425

0xc9: Pop(2)
0xca: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: Push((int) 1)
0xce: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0xcf: PushEmpty()
0xd0: Call2 0x43a

0xd1: Pop(0)
0xd2: Push((int) 28227)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x477

0xd9: Pop(2)
0xda: Push((int) 28226)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Call2 0x489

0xe0: Pop(1)
0xe1: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x483

0xe6: Pop(2)
0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral" // @poff=89
0xe9: Call2 0xb6

0xea: Pop(1)
0xeb: Push((int) 526934)
0xec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xed: Pop(1)
0xee: @@@ ClearReplies(); Obj=0 // @poff=116
0xef: Pop(0)
0xf0: Push((int) 527936)
0xf1: Push((int) 29290)
0xf2: Push((int) 29289)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf4: Pop(3)
0xf5: Push((int) 527942)
0xf6: Push((int) 29297)
0xf7: Push((int) 29295)
0xf8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral" // @poff=89
0xfd: Call2 0xb6

0xfe: Pop(1)
0xff: Push((int) 526936)
0x100: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x101: Pop(1)
0x102: @@@ ClearReplies(); Obj=0 // @poff=116
0x103: Pop(0)
0x104: Push((int) 527935)
0x105: Push((int) -1)
0x106: Push((int) 29288)
0x107: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x108: Pop(3)
0x109: Push((int) 526937)
0x10a: Push((int) -1)
0x10b: Push((int) 28229)
0x10c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10d: Pop(3)
0x10e: Return(); Pop(0)

0x10f: Push((int) 29297)
0x110: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral" // @poff=89
0x114: Call2 0xb6

0x115: Pop(1)
0x116: Push((int) 527943)
0x117: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x118: Pop(1)
0x119: @@@ ClearReplies(); Obj=0 // @poff=116
0x11a: Pop(0)
0x11b: Push((int) 527944)
0x11c: Push((int) 29292)
0x11d: Push((int) 29298)
0x11e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 29290)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral" // @poff=89
0x126: Call2 0xb6

0x127: Pop(1)
0x128: Push((int) 527937)
0x129: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12a: Pop(1)
0x12b: @@@ ClearReplies(); Obj=0 // @poff=116
0x12c: Pop(0)
0x12d: Push((int) 527945)
0x12e: Push((int) 29300)
0x12f: Push((int) 29299)
0x130: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 29300)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral" // @poff=89
0x138: Call2 0xb6

0x139: Pop(1)
0x13a: Push((int) 527946)
0x13b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13c: Pop(1)
0x13d: @@@ ClearReplies(); Obj=0 // @poff=116
0x13e: Pop(0)
0x13f: Push((int) 527947)
0x140: Push((int) 29292)
0x141: Push((int) 29301)
0x142: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x143: Pop(3)
0x144: Return(); Pop(0)

0x145: Push((int) 29292)
0x146: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x148: PushEmpty(string)
0x149: Stack[-1] = "Neutral" // @poff=89
0x14a: Call2 0xb6

0x14b: Pop(1)
0x14c: Push((int) 527939)
0x14d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14e: Pop(1)
0x14f: @@@ ClearReplies(); Obj=0 // @poff=116
0x150: Pop(0)
0x151: Push((int) 527948)
0x152: Push((int) 29304)
0x153: Push((int) 29303)
0x154: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x155: Pop(3)
0x156: Push((int) 527940)
0x157: Push((int) 29294)
0x158: Push((int) 29293)
0x159: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15a: Pop(3)
0x15b: Return(); Pop(0)

0x15c: Push((int) 29294)
0x15d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral" // @poff=89
0x161: Call2 0xb6

0x162: Pop(1)
0x163: Push((int) 527941)
0x164: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x165: Pop(1)
0x166: @@@ ClearReplies(); Obj=0 // @poff=116
0x167: Pop(0)
0x168: Push((int) 527953)
0x169: Push((int) 29309)
0x16a: Push((int) 29308)
0x16b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16c: Pop(3)
0x16d: Return(); Pop(0)

0x16e: Push((int) 29309)
0x16f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x171: PushEmpty(string)
0x172: Stack[-1] = "Neutral" // @poff=89
0x173: Call2 0xb6

0x174: Pop(1)
0x175: Push((int) 527954)
0x176: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x177: Pop(1)
0x178: @@@ ClearReplies(); Obj=0 // @poff=116
0x179: Pop(0)
0x17a: Push((int) 527956)
0x17b: Push((int) 29304)
0x17c: Push((int) 29311)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 29304)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral" // @poff=89
0x185: Call2 0xb6

0x186: Pop(1)
0x187: Push((int) 527949)
0x188: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x189: Pop(1)
0x18a: @@@ ClearReplies(); Obj=0 // @poff=116
0x18b: Pop(0)
0x18c: Push((int) 527950)
0x18d: Push((int) 29310)
0x18e: Push((int) 29305)
0x18f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 29310)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral" // @poff=89
0x197: Call2 0xb6

0x198: Pop(1)
0x199: Push((int) 527955)
0x19a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19b: Pop(1)
0x19c: @@@ ClearReplies(); Obj=0 // @poff=116
0x19d: Pop(0)
0x19e: Push((int) 527960)
0x19f: Push((int) 29317)
0x1a0: Push((int) 29316)
0x1a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a2: Pop(3)
0x1a3: Push((int) 527957)
0x1a4: Push((int) 29314)
0x1a5: Push((int) 29313)
0x1a6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 29314)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Neutral" // @poff=89
0x1ae: Call2 0xb6

0x1af: Pop(1)
0x1b0: Push((int) 527958)
0x1b1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b2: Pop(1)
0x1b3: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b4: Pop(0)
0x1b5: Push((int) 527959)
0x1b6: Push((int) 29319)
0x1b7: Push((int) 29315)
0x1b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 29317)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral" // @poff=89
0x1c0: Call2 0xb6

0x1c1: Pop(1)
0x1c2: Push((int) 527961)
0x1c3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c4: Pop(1)
0x1c5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c6: Pop(0)
0x1c7: Push((int) 527962)
0x1c8: Push((int) 29319)
0x1c9: Push((int) 29318)
0x1ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 29319)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Neutral" // @poff=89
0x1d2: Call2 0xb6

0x1d3: Pop(1)
0x1d4: Push((int) 527963)
0x1d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d6: Pop(1)
0x1d7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d8: Pop(0)
0x1d9: Push((int) 526935)
0x1da: Push((int) -1)
0x1db: Push((int) 28227)
0x1dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e0: PushEmpty(bool)
0x1e1: Call2 0x4f1

0x1e2: Pop(0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e4: @ lshStopAnimation()
0x1e5: Pop(0)
0x1e6: GOTO 0x1e9

0x1e7: @ StopAnimation()
0x1e8: Pop(0)
0x1e9: Return(); Pop(0)

0x1ea: GOTO 0xcd

0x1eb: Return(); Pop(0)

0x1ec: PushEmpty()
0x1ed: PushEmpty(int, object)
0x1ee: Stack[-3] = Stack[-1]
0x1ef: Push(-2, 1); TaskCall(1)
0x1f0: Call2 0xd

0x1f1: Pop(-2, 1); TaskReturn
0x1f2: Pop(2)
0x1f3: Return(); Pop(0)

0x1f4: PushEmpty()
0x1f5: Call2 0x21d

0x1f6: Pop(0)
0x1f7: Return(); Pop(0)

0x1f8: PushEmpty(bool, bool)
0x1f9: Push("cleanup") // @poff=156
0x1fa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1fc: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1fd: @ IsLoaded(Stack[-1])
0x1fe: Pop(0)
0x1ff: Pop(0); Push((bool) Stack[-1] == 0)
0x200: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x201: PushEmpty(object)
0x202: Call2 0x441

0x203: Pop(0)
0x204: @ RemoveActor(Stack[-1])
0x205: Pop(1)
0x206: GOTO 0x20b

0x207: Push("restore") // @poff=172
0x208: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x20b: Return(); Pop(2)

0x20c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x20d: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x20e: PushEmpty(object)
0x20f: Call2 0x441

0x210: Pop(0)
0x211: @ RemoveActor(Stack[-1])
0x212: Pop(1)
0x213: @ Hold()
0x214: Pop(0)
0x215: PushEmpty()
0x216: Call2 0x28e

0x217: Pop(0)
0x218: Return(); Pop(0)

0x219: PushEmpty()
0x21a: Call2 0x29d

0x21b: Pop(0)
0x21c: Return(); Pop(0)

0x21d: PushEmpty(bool)
0x21e: Call2 0x33a

0x21f: Pop(0)
0x220: Pop(1); Push((bool) Stack[-1] == 0)
0x221: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x222: PushEmpty()
0x223: Push(-0, 0); TaskCall(0)
0x224: Call2 0x0

0x225: Pop(-0, 0); TaskReturn
0x226: Pop(0)
0x227: PushEmpty()
0x228: Call2 0x219

0x229: Pop(0)
0x22a: @ GetDirection(Stack[-0]T)
0x22b: Pop(0)
0x22c: PushEmpty()
0x22d: Call2 0x2d3

0x22e: Pop(0)
0x22f: GOTO 0x22c

0x230: Return(); Pop(0)

0x231: PushEmpty(object, object)
0x232: Push("player") // @poff=188
0x233: @ FindActor(Stack[-2], Stack[-1])
0x234: Pop(1)
0x235: Pop(0); Push((bool) Stack[-1] == 0)
0x236: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x237: Stack[-3] = (bool) 0
0x238: Return(); Pop(2)

0x239: PushEmpty(bool, object)
0x23a: Stack[-3] = Stack[-1]
0x23b: Call2 0x331

0x23c: Stack[-2] = Stack[-5]
0x23d: Pop(2)
0x23e: Return(); Pop(2)

0x23f: Stack[-1] = 0
0x240: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x241: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x242: @ RotateAsync(Stack[-2], Stack[-1])
0x243: Pop(2)
0x244: Return(); Pop(0)

0x245: PushEmpty(object, bool, object, bool)
0x246: Push("player") // @poff=188
0x247: @ FindActor(Stack[-3], Stack[-1])
0x248: Pop(1)
0x249: Pop(0); Push((bool) Stack[-2] == 0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24b: Stack[-5] = (bool) 0
0x24c: Return(); Pop(4)

0x24d: PushEmpty(float, object)
0x24e: Stack[-4] = Stack[-1]
0x24f: Call2 0x31f

0x250: Pop(1)
0x251: Push((float)90000.0)
0x252: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x254: Stack[-5] = (bool) 0
0x255: Return(); Pop(4)

0x256: @ CanSee(Stack[-1], Stack[-2])
0x257: Pop(0)
0x258: Stack[-1] = Stack[-5]
0x259: Return(); Pop(4)

0x25a: Stack[-2] = 0
0x25b: PushEmpty(float, float)
0x25c: Push((int) 8)
0x25d: Push((int) 16)
0x25e: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(2)
0x260: Push((int) 10)
0x261: @ SetTimer(Stack[-1], Stack[-2])
0x262: Pop(1)
0x263: Return(); Pop(2)

0x264: Push((int) 10)
0x265: @ KillTimer(Stack[-1])
0x266: Pop(1)
0x267: Return(); Pop(0)

0x268: PushEmpty()
0x269: Push((int) 10)
0x26a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x26c: PushEmpty()
0x26d: Call2 0x264

0x26e: Pop(0)
0x26f: PushEmpty(bool)
0x270: Stack[-1] = (bool) 0
0x271: PushEmpty(bool)
0x272: Call2 0x33a

0x273: Pop(0)
0x274: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x275: PushEmpty(bool)
0x276: Call2 0x245

0x277: Pop(0)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: Stack[-1] = (bool) 1
0x27a: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x27b: PushEmpty(bool)
0x27c: Call2 0x231

0x27d: Pop(0)
0x27e: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x27f: PushEmpty(bool, object)
0x280: PushEmpty(object)
0x281: Call2 0x441

0x282: Stack[-1] = Stack[-2]
0x283: Pop(1)
0x284: Call2 0x3ce

0x285: Pop(2)
0x286: GOTO 0x28d

0x287: PushEmpty()
0x288: Call2 0x240

0x289: Pop(0)
0x28a: PushEmpty()
0x28b: Call2 0x25b

0x28c: Pop(0)
0x28d: Return(); Pop(0)

0x28e: PushEmpty()
0x28f: Call2 0x31a

0x290: Pop(0)
0x291: PushEmpty()
0x292: Call2 0x264

0x293: Pop(0)
0x294: @ lshStopSpeech()
0x295: Pop(0)
0x296: @ lshStopAnimation()
0x297: Pop(0)
0x298: @ StopAsync()
0x299: Pop(0)
0x29a: @ Hold()
0x29b: Pop(0)
0x29c: Return(); Pop(0)

0x29d: @ StopGroup0()
0x29e: Pop(0)
0x29f: PushEmpty()
0x2a0: Call2 0x264

0x2a1: Pop(0)
0x2a2: PushEmpty(string)
0x2a3: Stack[-1] = "Neutral" // @poff=89
0x2a4: Call2 0x41e

0x2a5: Pop(1)
0x2a6: PushEmpty()
0x2a7: Call2 0x25b

0x2a8: Pop(0)
0x2a9: Return(); Pop(0)

0x2aa: PushEmpty()
0x2ab: Push(Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ad: PushEmpty()
0x2ae: Call2 0x25b

0x2af: Pop(0)
0x2b0: GOTO 0x2b5

0x2b1: PushEmpty(string)
0x2b2: Stack[-1] = "Neutral" // @poff=89
0x2b3: Call2 0x41e

0x2b4: Pop(1)
0x2b5: Return(); Pop(0)

0x2b6: PushEmpty(bool, bool)
0x2b7: @ IsOverrideActive(Stack[-1])
0x2b8: Pop(0)
0x2b9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2bb: EventDisable(0)
0x2bc: PushEmpty()
0x2bd: Call2 0x31a

0x2be: Pop(0)
0x2bf: PushEmpty(bool, object)
0x2c0: Stack[-5] = Stack[-1]
0x2c1: Call2 0x331

0x2c2: Pop(2)
0x2c3: EventEnable(0)
0x2c4: PushEmpty(object)
0x2c5: Stack[-4] = Stack[-1]
0x2c6: Call2 0x1ec

0x2c7: Pop(1)
0x2c8: PushEmpty(string)
0x2c9: Stack[-1] = "Neutral" // @poff=89
0x2ca: Call2 0x41e

0x2cb: Pop(1)
0x2cc: PushEmpty()
0x2cd: Call2 0x264

0x2ce: Pop(0)
0x2cf: PushEmpty()
0x2d0: Call2 0x25b

0x2d1: Pop(0)
0x2d2: Return(); Pop(2)

0x2d3: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2d4: @ WaitForAnimEnd()
0x2d5: Pop(0)
0x2d6: PushEmpty(bool)
0x2d7: Call2 0x33a

0x2d8: Pop(0)
0x2d9: Pop(1); Push((bool) Stack[-1] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: Return(); Pop(12)

0x2dc: PushEmpty(int)
0x2dd: Call2 0x466

0x2de: Stack[-1] = Stack[-7]
0x2df: Pop(1)
0x2e0: Stack[-5] = (int) 0
0x2e1: PushEmpty(bool)
0x2e2: Stack[-1] = (bool) 0
0x2e3: Push((int) 5)
0x2e4: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e6: PushEmpty(bool)
0x2e7: Call2 0x33a

0x2e8: Pop(0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: Stack[-1] = (bool) 1
0x2eb: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x2ec: Pop(0); Push((bool) Stack[-6] == 0)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2ee: Push((int) 3)
0x2ef: @ Sleep(Stack[-1], Stack[-5])
0x2f0: Pop(1)
0x2f1: Pop(0); Push((bool) Stack[-4] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: GOTO 0x315

0x2f4: GOTO 0x30a

0x2f5: @ irand(Stack[-3], Stack[-6])
0x2f6: Pop(0)
0x2f7: Push((int) 5)
0x2f8: @ irand(Stack[-3], Stack[-1])
0x2f9: Pop(1)
0x2fa: Push((int) 0)
0x2fb: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: Stack[-3] = (int) 0
0x2fe: Push("all") // @poff=138
0x2ff: PushEmpty(string, int)
0x300: Stack[-6] = Stack[-1]
0x301: Call2 0x45f

0x302: Pop(1)
0x303: @ PlayAnimation(Stack[-2], Stack[-1])
0x304: Pop(2)
0x305: @ WaitForAnimEnd(Stack[-1])
0x306: Pop(0)
0x307: Pop(0); Push((bool) Stack[-1] == 0)
0x308: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x309: GOTO 0x315

0x30a: PushEmpty(bool)
0x30b: Call2 0x318

0x30c: Pop(0)
0x30d: Pop(1); Push((bool) Stack[-1] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: GOTO 0x315

0x310: @ ResetAAS()
0x311: Pop(0)
0x312: Push((int) 1)
0x313: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x314: GOTO 0x2e1

0x315: @ ResetAAS()
0x316: Pop(0)
0x317: Return(); Pop(12)

0x318: Stack[-1] = (bool) 1
0x319: Return(); Pop(0)

0x31a: @ StopAnimation()
0x31b: Pop(0)
0x31c: @ StopGroup0()
0x31d: Pop(0)
0x31e: Return(); Pop(0)

0x31f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x320: @ GetPosition(Stack[-3])
0x321: Pop(0)
0x322: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x323: Pop(0)
0x324: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x325: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x326: Return(); Pop(6)

0x327: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x328: @ GetPosition(Stack[-3])
0x329: Pop(0)
0x32a: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x32b: Push(CvectorIndex(Stack[-2], 0))
0x32c: Push(CvectorIndex(Stack[-3], 2))
0x32d: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x32e: Pop(2)
0x32f: Stack[-1] = Stack[-8]
0x330: Return(); Pop(6)

0x331: PushEmpty(cvector, cvector)
0x332: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x333: Pop(0)
0x334: PushEmpty(bool, cvector)
0x335: Stack[-3] = Stack[-1]
0x336: Call2 0x327

0x337: Stack[-2] = Stack[-6]
0x338: Pop(2)
0x339: Return(); Pop(2)

0x33a: PushEmpty(bool, bool)
0x33b: @ IsLoaded(Stack[-1])
0x33c: Pop(0)
0x33d: Stack[-1] = Stack[-3]
0x33e: Return(); Pop(2)

0x33f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x340: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x341: Pop(0)
0x342: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x343: Pop(0)
0x344: Push(CvectorIndex(Stack[-8], 1))
0x345: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x346: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x347: @ GetPosition(Stack[-7])
0x348: Pop(0)
0x349: @ GetEyesHeight(Stack[-9])
0x34a: Pop(0)
0x34b: Push(CvectorIndex(Stack[-7], 1))
0x34c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x34d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x34e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x34f: Push(CvectorIndex(Stack[-6], 1))
0x350: Stack[-1] = (int) 0
0x351: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x352: Pop(0); Push(Stack[-6] | Stack[-6]);
0x353: Pop(1); Push(Sqrt(Stack[-1]))
0x354: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x355: Stack[-5] = -Stack[-6]; Pop(0);
0x356: Pop(0); Push(Stack[-6] * Stack[-19]);
0x357: PushEmpty(cvector, cvector)
0x358: Push([0.0, 1.0, 0.0])
0x359: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x35a: Call2 0x447

0x35b: Pop(1)
0x35c: Push((int) 25)
0x35d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x35e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35f: Push([0.0, 10.0, 0.0])
0x360: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x361: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x362: @ IsOverrideActive(Stack[-2])
0x363: Pop(0)
0x364: Push(Stack[-2])
0x365: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x366: Stack[-21] = (bool) 0
0x367: Return(); Pop(18)

0x368: @ StopWorld()
0x369: Pop(0)
0x36a: @ CameraTransit(Stack[-3], Stack[-5])
0x36b: Pop(0)
0x36c: Push(CvectorIndex(Stack[-4], 0))
0x36d: Push(CvectorIndex(Stack[-5], 2))
0x36e: @ Rotate(Stack[-2], Stack[-1])
0x36f: Pop(2)
0x370: PushEmpty(bool)
0x371: Call2 0x4f1

0x372: Pop(0)
0x373: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x374: GOTO 0x37d

0x375: Push("head") // @poff=228
0x376: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x377: Pop(1)
0x378: Push(Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37a: Push("head") // @poff=228
0x37b: @ LookAsyncCamera(Stack[-1])
0x37c: Pop(1)
0x37d: @ CameraWaitForPlayFinish()
0x37e: Pop(0)
0x37f: @ ResumeWorld()
0x380: Pop(0)
0x381: Stack[-21] = (bool) 1
0x382: Return(); Pop(18)

0x383: PushEmpty(bool, bool)
0x384: @ CameraSwitchToNormal()
0x385: Pop(0)
0x386: PushEmpty(bool)
0x387: Call2 0x4f1

0x388: Pop(0)
0x389: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x38a: GOTO 0x393

0x38b: Push("head") // @poff=228
0x38c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x38d: Pop(1)
0x38e: Push(Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x390: Push("head") // @poff=228
0x391: @ UnlookAsync(Stack[-1])
0x392: Pop(1)
0x393: Return(); Pop(2)

0x394: PushEmpty(int, int, int, int)
0x395: Push("voice_common") // @poff=238
0x396: @ GetVariable(Stack[-1], Stack[-3])
0x397: Pop(1)
0x398: Push(Stack[-2])
0x399: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x39a: PushEmpty(bool, object)
0x39b: Stack[-7] = Stack[-1]
0x39c: Call2 0x3ce

0x39d: Pop(1)
0x39e: Pop(1); Push((bool) Stack[-1] == 0)
0x39f: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a0: PushEmpty(bool, object)
0x3a1: Stack[-7] = Stack[-1]
0x3a2: Call2 0x3f3

0x3a3: Pop(1)
0x3a4: Pop(1); Push((bool) Stack[-1] == 0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a6: Stack[-6] = (bool) 0
0x3a7: Return(); Pop(4)

0x3a8: Push((int) 2)
0x3a9: @ irand(Stack[-2], Stack[-1])
0x3aa: Pop(1)
0x3ab: Push(Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3ad: Push("voice_common") // @poff=238
0x3ae: Push((int) 1)
0x3af: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3b0: Push((int) 3)
0x3b1: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3b2: @ SetVariable(Stack[-2], Stack[-1])
0x3b3: Pop(2)
0x3b4: GOTO 0x3b9

0x3b5: Push("voice_common") // @poff=238
0x3b6: Push((int) 0)
0x3b7: @ SetVariable(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: GOTO 0x3cc

0x3ba: PushEmpty(bool, object)
0x3bb: Stack[-7] = Stack[-1]
0x3bc: Call2 0x3f3

0x3bd: Pop(1)
0x3be: Pop(1); Push((bool) Stack[-1] == 0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c0: PushEmpty(bool, object)
0x3c1: Stack[-7] = Stack[-1]
0x3c2: Call2 0x3ce

0x3c3: Pop(1)
0x3c4: Pop(1); Push((bool) Stack[-1] == 0)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-6] = (bool) 0
0x3c7: Return(); Pop(4)

0x3c8: Push("voice_common") // @poff=238
0x3c9: Push((int) 1)
0x3ca: @ SetVariable(Stack[-2], Stack[-1])
0x3cb: Pop(2)
0x3cc: Stack[-6] = (bool) 1
0x3cd: Return(); Pop(4)

0x3ce: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3cf: Stack[-5] = "c" // @poff=264
0x3d0: Stack[-4] = (int) 0
0x3d1: Push((int) 1)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3d3: Push((int) 1)
0x3d4: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3d5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3d6: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x3d7: Pop(1)
0x3d8: Pop(0); Push((bool) Stack[-3] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3da: GOTO 0x3de

0x3db: Push((int) 1)
0x3dc: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3dd: GOTO 0x3d1

0x3de: Pop(0); Push((bool) Stack[-4] == 0)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e0: Stack[-12] = (bool) 0
0x3e1: Return(); Pop(10)

0x3e2: Stack[-2] = (int) 0
0x3e3: Push((int) 1)
0x3e4: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: @ irand(Stack[-2], Stack[-4])
0x3e7: Pop(0)
0x3e8: Push((int) 1)
0x3e9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3ea: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3eb: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x3ec: Pop(1)
0x3ed: PushEmpty(bool, string)
0x3ee: Stack[-3] = Stack[-1]
0x3ef: Call2 0x42b

0x3f0: Stack[-2] = Stack[-14]
0x3f1: Pop(2)
0x3f2: Return(); Pop(10)

0x3f3: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3f4: Push("d") // @poff=234
0x3f5: PushEmpty(int)
0x3f6: Call2 0x456

0x3f7: Pop(0)
0x3f8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f9: Push("m") // @poff=292
0x3fa: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3fb: Stack[-4] = (int) 0
0x3fc: Push((int) 1)
0x3fd: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x3fe: Push((int) 1)
0x3ff: Pop(1); Push(Stack[-5] + Stack[-1]);
0x400: Pop(1); Push(Stack[-6] + Stack[-1]);
0x401: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x402: Pop(1)
0x403: Pop(0); Push((bool) Stack[-3] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: GOTO 0x409

0x406: Push((int) 1)
0x407: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x408: GOTO 0x3fc

0x409: Pop(0); Push((bool) Stack[-4] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-12] = (bool) 0
0x40c: Return(); Pop(10)

0x40d: Stack[-2] = (int) 0
0x40e: Push((int) 1)
0x40f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x411: @ irand(Stack[-2], Stack[-4])
0x412: Pop(0)
0x413: Push((int) 1)
0x414: Pop(1); Push(Stack[-3] + Stack[-1]);
0x415: Pop(1); Push(Stack[-6] + Stack[-1]);
0x416: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x417: Pop(1)
0x418: PushEmpty(bool, string)
0x419: Stack[-3] = Stack[-1]
0x41a: Call2 0x42b

0x41b: Stack[-2] = Stack[-14]
0x41c: Pop(2)
0x41d: Return(); Pop(10)

0x41e: PushEmpty(float, float, float, float)
0x41f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x420: Pop(0)
0x421: Push((bool) 0)
0x422: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x423: Pop(1)
0x424: Return(); Pop(4)

0x425: PushEmpty(float, float, float, float)
0x426: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x427: Pop(0)
0x428: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x429: Pop(0)
0x42a: Return(); Pop(4)

0x42b: PushEmpty(bool, bool)
0x42c: PushEmpty(bool)
0x42d: Call2 0x4f1

0x42e: Pop(0)
0x42f: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x430: @ lshHasSpeech(Stack[-1], Stack[-3])
0x431: Pop(0)
0x432: Push(Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x434: @ lshPlaySpeech(Stack[-3])
0x435: Pop(0)
0x436: Stack[-4] = (bool) 1
0x437: Return(); Pop(2)

0x438: Stack[-4] = (bool) 0
0x439: Return(); Pop(2)

0x43a: PushEmpty(bool)
0x43b: Call2 0x4f1

0x43c: Pop(0)
0x43d: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43e: @ lshStopSpeech()
0x43f: Pop(0)
0x440: Return(); Pop(0)

0x441: PushEmpty(object, object)
0x442: @ self(Stack[-1])
0x443: Pop(0)
0x444: Stack[-1] = Stack[-3]
0x445: Return(); Pop(2)

0x446: Stack[-1] = 0
0x447: PushEmpty(float, float)
0x448: Pop(0); Push(Stack[-3] | Stack[-3]);
0x449: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x44a: Push((float)9.999999974752427e-07)
0x44b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: Stack[-4] = [0.0, 0.0, 0.0]
0x44e: Return(); Pop(2)

0x44f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x450: Return(); Pop(2)

0x451: PushEmpty(int, int)
0x452: @ GetVariable(Stack[-3], Stack[-1])
0x453: Pop(0)
0x454: Stack[-1] = Stack[-4]
0x455: Return(); Pop(2)

0x456: PushEmpty(float, float)
0x457: @ GetGameTime(Stack[-1])
0x458: Pop(0)
0x459: Push((int) 1)
0x45a: PushEmpty(int)
0x45b: Push((int) 24)
0x45c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x45d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x45e: Return(); Pop(2)

0x45f: PushEmpty(string, string)
0x460: Stack[-1] = "idle" // @poff=146
0x461: Push(Stack[-3])
0x462: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x463: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x464: Stack[-1] = Stack[-4]
0x465: Return(); Pop(2)

0x466: PushEmpty(int, bool, int, bool)
0x467: Stack[-2] = (int) 0
0x468: Push("all") // @poff=138
0x469: PushEmpty(string, int)
0x46a: Stack[-5] = Stack[-1]
0x46b: Call2 0x45f

0x46c: Pop(1)
0x46d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x46e: Pop(2)
0x46f: Pop(0); Push((bool) Stack[-1] == 0)
0x470: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x471: GOTO 0x475

0x472: Push((int) 1)
0x473: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x474: GOTO 0x468

0x475: Stack[-2] = Stack[-5]
0x476: Return(); Pop(4)

0x477: PushEmpty()
0x478: Push("k10q01") // @poff=296
0x479: Push((int) 1)
0x47a: @ SetVariable(Stack[-2], Stack[-1])
0x47b: Pop(2)
0x47c: PushEmpty()
0x47d: Call2 0x495

0x47e: Pop(0)
0x47f: PushEmpty()
0x480: Call2 0x4a2

0x481: Pop(0)
0x482: Return(); Pop(0)

0x483: PushEmpty()
0x484: Push("k10q01KnowAboutRubin") // @poff=310
0x485: Push((int) 1)
0x486: @ SetVariable(Stack[-2], Stack[-1])
0x487: Pop(2)
0x488: Return(); Pop(0)

0x489: PushEmpty()
0x48a: PushEmpty(int, string)
0x48b: Stack[-1] = "k10q01" // @poff=296
0x48c: Call2 0x451

0x48d: Pop(1)
0x48e: Push((int) 0)
0x48f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x490: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x491: Stack[-2] = (bool) 1
0x492: Return(); Pop(0)

0x493: Stack[-2] = (bool) 0
0x494: Return(); Pop(0)

0x495: PushEmpty(object, object)
0x496: Push((int) 447)
0x497: Push((int) 1)
0x498: Push((int) 527005)
0x499: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x49a: Pop(3)
0x49b: PushEmpty(bool, object, int)
0x49c: Stack[-4] = Stack[-2]
0x49d: Stack[-1] = (int) -1
0x49e: Call2 0x4bc

0x49f: Pop(3)
0x4a0: Return(); Pop(2)

0x4a1: Stack[-1] = 0
0x4a2: PushEmpty(object, object)
0x4a3: Push((int) 448)
0x4a4: Push((int) 1)
0x4a5: Push((int) 527006)
0x4a6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4a7: Pop(3)
0x4a8: PushEmpty(bool, object, int)
0x4a9: Stack[-4] = Stack[-2]
0x4aa: Stack[-1] = (int) 447
0x4ab: Call2 0x4bc

0x4ac: Pop(3)
0x4ad: Return(); Pop(2)

0x4ae: Stack[-1] = 0
0x4af: PushEmpty(object, object)
0x4b0: @ GetDiaryRoot(Stack[-1])
0x4b1: Pop(0)
0x4b2: Pop(0); Push((bool) Stack[-1] == 0)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b4: Push("Can't retrieve diary root") // @poff=352
0x4b5: @ Trace(Stack[-1])
0x4b6: Pop(1)
0x4b7: Stack[-3] = (bool) 0
0x4b8: Return(); Pop(2)

0x4b9: Stack[-1] = Stack[-3]
0x4ba: Return(); Pop(2)

0x4bb: Stack[-1] = 0
0x4bc: PushEmpty(object, object, int, object, object, int)
0x4bd: PushEmpty(object)
0x4be: Call2 0x4af

0x4bf: Stack[-1] = Stack[-4]
0x4c0: Pop(1)
0x4c1: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=404
0x4c2: Pop(0)
0x4c3: Pop(0); Push((bool) Stack[-2] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c5: Push("Can't find diary parent with id: ") // @poff=409
0x4c6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4c7: @ Trace(Stack[-1])
0x4c8: Pop(1)
0x4c9: Stack[-9] = (bool) 0
0x4ca: Return(); Pop(6)

0x4cb: @@ AddChild(Stack[-8]); Obj=2 // @poff=477
0x4cc: Pop(0)
0x4cd: Push((int) 7)
0x4ce: @ SendWorldWndMessage(Stack[-1])
0x4cf: Pop(1)
0x4d0: @@ GetCategory(Stack[-1]); Obj=8 // @poff=486
0x4d1: Pop(0)
0x4d2: @ SetDiarySection(Stack[-1])
0x4d3: Pop(0)
0x4d4: Stack[-9] = (bool) 0
0x4d5: Return(); Pop(6)

0x4d6: Stack[-2] = 0
0x4d7: Stack[-3] = 0
0x4d8: PushEmpty(int, int)
0x4d9: Push("branch") // @poff=498
0x4da: @ GetVariable(Stack[-1], Stack[-2])
0x4db: Pop(1)
0x4dc: Push((int) 0)
0x4dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4de: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4df: Stack[-3] = (int) 1
0x4e0: Return(); Pop(2)

0x4e1: GOTO 0x4e7

0x4e2: Push((int) 1)
0x4e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: Stack[-3] = (int) 2
0x4e6: Return(); Pop(2)

0x4e7: Stack[-3] = (int) 3
0x4e8: Return(); Pop(2)

0x4e9: Stack[-1] = (int) 515573
0x4ea: Return(); Pop(0)

0x4eb: Stack[-1] = (int) 504032
0x4ec: Return(); Pop(0)

0x4ed: Stack[-1] = "ui/NPC_Bakalavr.png" // @poff=512
0x4ee: Return(); Pop(0)

0x4ef: Stack[-1] = "ui/NPC_Bakalavr_b.png" // @poff=552
0x4f0: Return(); Pop(0)

0x4f1: Stack[-1] = (bool) 1
0x4f2: Return(); Pop(0)

