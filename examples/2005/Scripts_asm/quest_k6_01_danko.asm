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
	W:ook6Danko1
	W:quest_k6_01
	W:teleport
	W:completed
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
	W:ui/NPC_Bakalavr.png
	W:ui/NPC_Bakalavr_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000072006500730074006f0072006500000070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000006f006f006b003600440061006e006b006f0031000000710075006500730074005f006b0036005f00300031000000740065006c00650070006f0072007400000063006f006d0070006c0065007400650064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000750069002f004e00500043005f00420061006b0061006c006100760072002e0070006e0067000000750069002f004e00500043005f00420061006b0061006c006100760072005f0062002e0070006e0067000000
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

RunOp = 0x171
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcc Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x175 Vars = (string)
		EVENT_6 Op = 0x189 Vars = ()
		EVENT_5 Op = 0x196 Vars = ()
		EVENT_7 Op = 0x1e5 Vars = (int)
		EVENT_45 Op = 0x227 Vars = (bool)
		EVENT_0 Op = 0x233 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x2b7

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
0x11: Call2 0x3be

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x311

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x2bc

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x46c

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x46a

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x46e

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x470

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x459

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
0x55: Call2 0x300

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
0x66: Call2 0x417

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x69: PushEmpty(object, object)
0x6a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c: Call2 0x400

0x6d: Pop(2)
0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral" // @poff=89
0x70: Call2 0xb6

0x71: Pop(1)
0x72: Push((int) 526097)
0x73: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x74: Pop(1)
0x75: @@@ ClearReplies(); Obj=0 // @poff=116
0x76: Pop(0)
0x77: Push((int) 526098)
0x78: Push((int) 27386)
0x79: Push((int) 27384)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: Push((int) 526099)
0x7d: Push((int) 27386)
0x7e: Push((int) 27385)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: GOTO 0x98

0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral" // @poff=89
0x84: Call2 0xb6

0x85: Pop(1)
0x86: Push((int) 526107)
0x87: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x88: Pop(1)
0x89: @@@ ClearReplies(); Obj=0 // @poff=116
0x8a: Pop(0)
0x8b: Push((int) 526108)
0x8c: Push((int) -1)
0x8d: Push((int) 27395)
0x8e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8f: Pop(3)
0x90: Push((int) 528917)
0x91: Push((int) -1)
0x92: Push((int) 30347)
0x93: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x94: Pop(3)
0x95: GOTO 0x98

0x96: Return(); Pop(0)

0x97: GOTO 0x62

0x98: PushEmpty(bool)
0x99: Call2 0x472

0x9a: Pop(0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x9c: @ lshWaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: PushEmpty(string)
0xa2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa3: Call2 0x39b

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
0xb8: Call2 0x472

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
0xc8: Call2 0x3a2

0xc9: Pop(2)
0xca: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: Push((int) 1)
0xce: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0xcf: PushEmpty()
0xd0: Call2 0x3b7

0xd1: Pop(0)
0xd2: Push((int) 27393)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x406

0xd9: Pop(2)
0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x40d

0xde: Pop(2)
0xdf: Push((int) 27390)
0xe0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x406

0xe6: Pop(2)
0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x40d

0xeb: Pop(2)
0xec: Push((int) 27383)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Call2 0x417

0xf2: Pop(1)
0xf3: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0x400

0xf8: Pop(2)
0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral" // @poff=89
0xfb: Call2 0xb6

0xfc: Pop(1)
0xfd: Push((int) 526097)
0xfe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xff: Pop(1)
0x100: @@@ ClearReplies(); Obj=0 // @poff=116
0x101: Pop(0)
0x102: Push((int) 526098)
0x103: Push((int) 27386)
0x104: Push((int) 27384)
0x105: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x106: Pop(3)
0x107: Push((int) 526099)
0x108: Push((int) 27386)
0x109: Push((int) 27385)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral" // @poff=89
0x10f: Call2 0xb6

0x110: Pop(1)
0x111: Push((int) 526107)
0x112: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x113: Pop(1)
0x114: @@@ ClearReplies(); Obj=0 // @poff=116
0x115: Pop(0)
0x116: Push((int) 526108)
0x117: Push((int) -1)
0x118: Push((int) 27395)
0x119: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11a: Pop(3)
0x11b: Push((int) 528917)
0x11c: Push((int) -1)
0x11d: Push((int) 30347)
0x11e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 27386)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral" // @poff=89
0x126: Call2 0xb6

0x127: Pop(1)
0x128: Push((int) 526100)
0x129: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x12a: Pop(1)
0x12b: @@@ ClearReplies(); Obj=0 // @poff=116
0x12c: Pop(0)
0x12d: Push((int) 526101)
0x12e: Push((int) 27388)
0x12f: Push((int) 27387)
0x130: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 27388)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral" // @poff=89
0x138: Call2 0xb6

0x139: Pop(1)
0x13a: Push((int) 526102)
0x13b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13c: Pop(1)
0x13d: @@@ ClearReplies(); Obj=0 // @poff=116
0x13e: Pop(0)
0x13f: Push((int) 526103)
0x140: Push((int) 27392)
0x141: Push((int) 27389)
0x142: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x143: Pop(3)
0x144: Push((int) 526104)
0x145: Push((int) -1)
0x146: Push((int) 27390)
0x147: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 27392)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Neutral" // @poff=89
0x14f: Call2 0xb6

0x150: Pop(1)
0x151: Push((int) 526105)
0x152: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x153: Pop(1)
0x154: @@@ ClearReplies(); Obj=0 // @poff=116
0x155: Pop(0)
0x156: Push((int) 526106)
0x157: Push((int) -1)
0x158: Push((int) 27393)
0x159: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x15a: Pop(3)
0x15b: Return(); Pop(0)

0x15c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x15d: PushEmpty(bool)
0x15e: Call2 0x472

0x15f: Pop(0)
0x160: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x161: @ lshStopAnimation()
0x162: Pop(0)
0x163: GOTO 0x166

0x164: @ StopAnimation()
0x165: Pop(0)
0x166: Return(); Pop(0)

0x167: GOTO 0xcd

0x168: Return(); Pop(0)

0x169: PushEmpty()
0x16a: PushEmpty(int, object)
0x16b: Stack[-3] = Stack[-1]
0x16c: Push(-2, 1); TaskCall(1)
0x16d: Call2 0xd

0x16e: Pop(-2, 1); TaskReturn
0x16f: Pop(2)
0x170: Return(); Pop(0)

0x171: PushEmpty()
0x172: Call2 0x19a

0x173: Pop(0)
0x174: Return(); Pop(0)

0x175: PushEmpty(bool, bool)
0x176: Push("cleanup") // @poff=156
0x177: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x179: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x17a: @ IsLoaded(Stack[-1])
0x17b: Pop(0)
0x17c: Pop(0); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17e: PushEmpty(object)
0x17f: Call2 0x3be

0x180: Pop(0)
0x181: @ RemoveActor(Stack[-1])
0x182: Pop(1)
0x183: GOTO 0x188

0x184: Push("restore") // @poff=172
0x185: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x188: Return(); Pop(2)

0x189: Push( Stack[1 + Tasks[-1].StackPointer] )
0x18a: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18b: PushEmpty(object)
0x18c: Call2 0x3be

0x18d: Pop(0)
0x18e: @ RemoveActor(Stack[-1])
0x18f: Pop(1)
0x190: @ Hold()
0x191: Pop(0)
0x192: PushEmpty()
0x193: Call2 0x20b

0x194: Pop(0)
0x195: Return(); Pop(0)

0x196: PushEmpty()
0x197: Call2 0x21a

0x198: Pop(0)
0x199: Return(); Pop(0)

0x19a: PushEmpty(bool)
0x19b: Call2 0x2b7

0x19c: Pop(0)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x19f: PushEmpty()
0x1a0: Push(-0, 0); TaskCall(0)
0x1a1: Call2 0x0

0x1a2: Pop(-0, 0); TaskReturn
0x1a3: Pop(0)
0x1a4: PushEmpty()
0x1a5: Call2 0x196

0x1a6: Pop(0)
0x1a7: @ GetDirection(Stack[-0]T)
0x1a8: Pop(0)
0x1a9: PushEmpty()
0x1aa: Call2 0x250

0x1ab: Pop(0)
0x1ac: GOTO 0x1a9

0x1ad: Return(); Pop(0)

0x1ae: PushEmpty(object, object)
0x1af: Push("player") // @poff=188
0x1b0: @ FindActor(Stack[-2], Stack[-1])
0x1b1: Pop(1)
0x1b2: Pop(0); Push((bool) Stack[-1] == 0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b4: Stack[-3] = (bool) 0
0x1b5: Return(); Pop(2)

0x1b6: PushEmpty(bool, object)
0x1b7: Stack[-3] = Stack[-1]
0x1b8: Call2 0x2ae

0x1b9: Stack[-2] = Stack[-5]
0x1ba: Pop(2)
0x1bb: Return(); Pop(2)

0x1bc: Stack[-1] = 0
0x1bd: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x1be: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x1bf: @ RotateAsync(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: Return(); Pop(0)

0x1c2: PushEmpty(object, bool, object, bool)
0x1c3: Push("player") // @poff=188
0x1c4: @ FindActor(Stack[-3], Stack[-1])
0x1c5: Pop(1)
0x1c6: Pop(0); Push((bool) Stack[-2] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c8: Stack[-5] = (bool) 0
0x1c9: Return(); Pop(4)

0x1ca: PushEmpty(float, object)
0x1cb: Stack[-4] = Stack[-1]
0x1cc: Call2 0x29c

0x1cd: Pop(1)
0x1ce: Push((float)90000.0)
0x1cf: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d1: Stack[-5] = (bool) 0
0x1d2: Return(); Pop(4)

0x1d3: @ CanSee(Stack[-1], Stack[-2])
0x1d4: Pop(0)
0x1d5: Stack[-1] = Stack[-5]
0x1d6: Return(); Pop(4)

0x1d7: Stack[-2] = 0
0x1d8: PushEmpty(float, float)
0x1d9: Push((int) 8)
0x1da: Push((int) 16)
0x1db: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(2)
0x1dd: Push((int) 10)
0x1de: @ SetTimer(Stack[-1], Stack[-2])
0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: Push((int) 10)
0x1e2: @ KillTimer(Stack[-1])
0x1e3: Pop(1)
0x1e4: Return(); Pop(0)

0x1e5: PushEmpty()
0x1e6: Push((int) 10)
0x1e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1e9: PushEmpty()
0x1ea: Call2 0x1e1

0x1eb: Pop(0)
0x1ec: PushEmpty(bool)
0x1ed: Stack[-1] = (bool) 0
0x1ee: PushEmpty(bool)
0x1ef: Call2 0x2b7

0x1f0: Pop(0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f2: PushEmpty(bool)
0x1f3: Call2 0x1c2

0x1f4: Pop(0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Stack[-1] = (bool) 1
0x1f7: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f8: PushEmpty(bool)
0x1f9: Call2 0x1ae

0x1fa: Pop(0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fc: PushEmpty(bool, object)
0x1fd: PushEmpty(object)
0x1fe: Call2 0x3be

0x1ff: Stack[-1] = Stack[-2]
0x200: Pop(1)
0x201: Call2 0x34b

0x202: Pop(2)
0x203: GOTO 0x20a

0x204: PushEmpty()
0x205: Call2 0x1bd

0x206: Pop(0)
0x207: PushEmpty()
0x208: Call2 0x1d8

0x209: Pop(0)
0x20a: Return(); Pop(0)

0x20b: PushEmpty()
0x20c: Call2 0x297

0x20d: Pop(0)
0x20e: PushEmpty()
0x20f: Call2 0x1e1

0x210: Pop(0)
0x211: @ lshStopSpeech()
0x212: Pop(0)
0x213: @ lshStopAnimation()
0x214: Pop(0)
0x215: @ StopAsync()
0x216: Pop(0)
0x217: @ Hold()
0x218: Pop(0)
0x219: Return(); Pop(0)

0x21a: @ StopGroup0()
0x21b: Pop(0)
0x21c: PushEmpty()
0x21d: Call2 0x1e1

0x21e: Pop(0)
0x21f: PushEmpty(string)
0x220: Stack[-1] = "Neutral" // @poff=89
0x221: Call2 0x39b

0x222: Pop(1)
0x223: PushEmpty()
0x224: Call2 0x1d8

0x225: Pop(0)
0x226: Return(); Pop(0)

0x227: PushEmpty()
0x228: Push(Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22a: PushEmpty()
0x22b: Call2 0x1d8

0x22c: Pop(0)
0x22d: GOTO 0x232

0x22e: PushEmpty(string)
0x22f: Stack[-1] = "Neutral" // @poff=89
0x230: Call2 0x39b

0x231: Pop(1)
0x232: Return(); Pop(0)

0x233: PushEmpty(bool, bool)
0x234: @ IsOverrideActive(Stack[-1])
0x235: Pop(0)
0x236: Pop(0); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x238: EventDisable(0)
0x239: PushEmpty()
0x23a: Call2 0x297

0x23b: Pop(0)
0x23c: PushEmpty(bool, object)
0x23d: Stack[-5] = Stack[-1]
0x23e: Call2 0x2ae

0x23f: Pop(2)
0x240: EventEnable(0)
0x241: PushEmpty(object)
0x242: Stack[-4] = Stack[-1]
0x243: Call2 0x169

0x244: Pop(1)
0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral" // @poff=89
0x247: Call2 0x39b

0x248: Pop(1)
0x249: PushEmpty()
0x24a: Call2 0x1e1

0x24b: Pop(0)
0x24c: PushEmpty()
0x24d: Call2 0x1d8

0x24e: Pop(0)
0x24f: Return(); Pop(2)

0x250: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x251: @ WaitForAnimEnd()
0x252: Pop(0)
0x253: PushEmpty(bool)
0x254: Call2 0x2b7

0x255: Pop(0)
0x256: Pop(1); Push((bool) Stack[-1] == 0)
0x257: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x258: Return(); Pop(12)

0x259: PushEmpty(int)
0x25a: Call2 0x3ef

0x25b: Stack[-1] = Stack[-7]
0x25c: Pop(1)
0x25d: Stack[-5] = (int) 0
0x25e: PushEmpty(bool)
0x25f: Stack[-1] = (bool) 0
0x260: Push((int) 5)
0x261: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x263: PushEmpty(bool)
0x264: Call2 0x2b7

0x265: Pop(0)
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: Stack[-1] = (bool) 1
0x268: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x269: Pop(0); Push((bool) Stack[-6] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26b: Push((int) 3)
0x26c: @ Sleep(Stack[-1], Stack[-5])
0x26d: Pop(1)
0x26e: Pop(0); Push((bool) Stack[-4] == 0)
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: GOTO 0x292

0x271: GOTO 0x287

0x272: @ irand(Stack[-3], Stack[-6])
0x273: Pop(0)
0x274: Push((int) 5)
0x275: @ irand(Stack[-3], Stack[-1])
0x276: Pop(1)
0x277: Push((int) 0)
0x278: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: Stack[-3] = (int) 0
0x27b: Push("all") // @poff=138
0x27c: PushEmpty(string, int)
0x27d: Stack[-6] = Stack[-1]
0x27e: Call2 0x3e8

0x27f: Pop(1)
0x280: @ PlayAnimation(Stack[-2], Stack[-1])
0x281: Pop(2)
0x282: @ WaitForAnimEnd(Stack[-1])
0x283: Pop(0)
0x284: Pop(0); Push((bool) Stack[-1] == 0)
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: GOTO 0x292

0x287: PushEmpty(bool)
0x288: Call2 0x295

0x289: Pop(0)
0x28a: Pop(1); Push((bool) Stack[-1] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28c: GOTO 0x292

0x28d: @ ResetAAS()
0x28e: Pop(0)
0x28f: Push((int) 1)
0x290: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x291: GOTO 0x25e

0x292: @ ResetAAS()
0x293: Pop(0)
0x294: Return(); Pop(12)

0x295: Stack[-1] = (bool) 1
0x296: Return(); Pop(0)

0x297: @ StopAnimation()
0x298: Pop(0)
0x299: @ StopGroup0()
0x29a: Pop(0)
0x29b: Return(); Pop(0)

0x29c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x29d: @ GetPosition(Stack[-3])
0x29e: Pop(0)
0x29f: @@ GetPosition(Stack[-2]); Obj=7 // @poff=202
0x2a0: Pop(0)
0x2a1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2a2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2a3: Return(); Pop(6)

0x2a4: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2a5: @ GetPosition(Stack[-3])
0x2a6: Pop(0)
0x2a7: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2a8: Push(CvectorIndex(Stack[-2], 0))
0x2a9: Push(CvectorIndex(Stack[-3], 2))
0x2aa: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2ab: Pop(2)
0x2ac: Stack[-1] = Stack[-8]
0x2ad: Return(); Pop(6)

0x2ae: PushEmpty(cvector, cvector)
0x2af: @@ GetPosition(Stack[-1]); Obj=3 // @poff=202
0x2b0: Pop(0)
0x2b1: PushEmpty(bool, cvector)
0x2b2: Stack[-3] = Stack[-1]
0x2b3: Call2 0x2a4

0x2b4: Stack[-2] = Stack[-6]
0x2b5: Pop(2)
0x2b6: Return(); Pop(2)

0x2b7: PushEmpty(bool, bool)
0x2b8: @ IsLoaded(Stack[-1])
0x2b9: Pop(0)
0x2ba: Stack[-1] = Stack[-3]
0x2bb: Return(); Pop(2)

0x2bc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2bd: @@ GetPosition(Stack[-8]); Obj=20 // @poff=202
0x2be: Pop(0)
0x2bf: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=214
0x2c0: Pop(0)
0x2c1: Push(CvectorIndex(Stack[-8], 1))
0x2c2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2c4: @ GetPosition(Stack[-7])
0x2c5: Pop(0)
0x2c6: @ GetEyesHeight(Stack[-9])
0x2c7: Pop(0)
0x2c8: Push(CvectorIndex(Stack[-7], 1))
0x2c9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ca: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2cb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2cc: Push(CvectorIndex(Stack[-6], 1))
0x2cd: Stack[-1] = (int) 0
0x2ce: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2cf: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d0: Pop(1); Push(Sqrt(Stack[-1]))
0x2d1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2d2: Stack[-5] = -Stack[-6]; Pop(0);
0x2d3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2d4: PushEmpty(cvector, cvector)
0x2d5: Push([0.0, 1.0, 0.0])
0x2d6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2d7: Call2 0x3c4

0x2d8: Pop(1)
0x2d9: Push((int) 25)
0x2da: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2db: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2dc: Push([0.0, 10.0, 0.0])
0x2dd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2de: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2df: @ IsOverrideActive(Stack[-2])
0x2e0: Pop(0)
0x2e1: Push(Stack[-2])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-21] = (bool) 0
0x2e4: Return(); Pop(18)

0x2e5: @ StopWorld()
0x2e6: Pop(0)
0x2e7: @ CameraTransit(Stack[-3], Stack[-5])
0x2e8: Pop(0)
0x2e9: Push(CvectorIndex(Stack[-4], 0))
0x2ea: Push(CvectorIndex(Stack[-5], 2))
0x2eb: @ Rotate(Stack[-2], Stack[-1])
0x2ec: Pop(2)
0x2ed: PushEmpty(bool)
0x2ee: Call2 0x472

0x2ef: Pop(0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: GOTO 0x2fa

0x2f2: Push("head") // @poff=228
0x2f3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f4: Pop(1)
0x2f5: Push(Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f7: Push("head") // @poff=228
0x2f8: @ LookAsyncCamera(Stack[-1])
0x2f9: Pop(1)
0x2fa: @ CameraWaitForPlayFinish()
0x2fb: Pop(0)
0x2fc: @ ResumeWorld()
0x2fd: Pop(0)
0x2fe: Stack[-21] = (bool) 1
0x2ff: Return(); Pop(18)

0x300: PushEmpty(bool, bool)
0x301: @ CameraSwitchToNormal()
0x302: Pop(0)
0x303: PushEmpty(bool)
0x304: Call2 0x472

0x305: Pop(0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: GOTO 0x310

0x308: Push("head") // @poff=228
0x309: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x30a: Pop(1)
0x30b: Push(Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30d: Push("head") // @poff=228
0x30e: @ UnlookAsync(Stack[-1])
0x30f: Pop(1)
0x310: Return(); Pop(2)

0x311: PushEmpty(int, int, int, int)
0x312: Push("voice_common") // @poff=238
0x313: @ GetVariable(Stack[-1], Stack[-3])
0x314: Pop(1)
0x315: Push(Stack[-2])
0x316: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x317: PushEmpty(bool, object)
0x318: Stack[-7] = Stack[-1]
0x319: Call2 0x34b

0x31a: Pop(1)
0x31b: Pop(1); Push((bool) Stack[-1] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x31d: PushEmpty(bool, object)
0x31e: Stack[-7] = Stack[-1]
0x31f: Call2 0x370

0x320: Pop(1)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x323: Stack[-6] = (bool) 0
0x324: Return(); Pop(4)

0x325: Push((int) 2)
0x326: @ irand(Stack[-2], Stack[-1])
0x327: Pop(1)
0x328: Push(Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32a: Push("voice_common") // @poff=238
0x32b: Push((int) 1)
0x32c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x32d: Push((int) 3)
0x32e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x32f: @ SetVariable(Stack[-2], Stack[-1])
0x330: Pop(2)
0x331: GOTO 0x336

0x332: Push("voice_common") // @poff=238
0x333: Push((int) 0)
0x334: @ SetVariable(Stack[-2], Stack[-1])
0x335: Pop(2)
0x336: GOTO 0x349

0x337: PushEmpty(bool, object)
0x338: Stack[-7] = Stack[-1]
0x339: Call2 0x370

0x33a: Pop(1)
0x33b: Pop(1); Push((bool) Stack[-1] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x33d: PushEmpty(bool, object)
0x33e: Stack[-7] = Stack[-1]
0x33f: Call2 0x34b

0x340: Pop(1)
0x341: Pop(1); Push((bool) Stack[-1] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-6] = (bool) 0
0x344: Return(); Pop(4)

0x345: Push("voice_common") // @poff=238
0x346: Push((int) 1)
0x347: @ SetVariable(Stack[-2], Stack[-1])
0x348: Pop(2)
0x349: Stack[-6] = (bool) 1
0x34a: Return(); Pop(4)

0x34b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x34c: Stack[-5] = "c" // @poff=264
0x34d: Stack[-4] = (int) 0
0x34e: Push((int) 1)
0x34f: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x350: Push((int) 1)
0x351: Pop(1); Push(Stack[-5] + Stack[-1]);
0x352: Pop(1); Push(Stack[-6] + Stack[-1]);
0x353: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x354: Pop(1)
0x355: Pop(0); Push((bool) Stack[-3] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: GOTO 0x35b

0x358: Push((int) 1)
0x359: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x35a: GOTO 0x34e

0x35b: Pop(0); Push((bool) Stack[-4] == 0)
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-12] = (bool) 0
0x35e: Return(); Pop(10)

0x35f: Stack[-2] = (int) 0
0x360: Push((int) 1)
0x361: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: @ irand(Stack[-2], Stack[-4])
0x364: Pop(0)
0x365: Push((int) 1)
0x366: Pop(1); Push(Stack[-3] + Stack[-1]);
0x367: Pop(1); Push(Stack[-6] + Stack[-1]);
0x368: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x369: Pop(1)
0x36a: PushEmpty(bool, string)
0x36b: Stack[-3] = Stack[-1]
0x36c: Call2 0x3a8

0x36d: Stack[-2] = Stack[-14]
0x36e: Pop(2)
0x36f: Return(); Pop(10)

0x370: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x371: Push("d") // @poff=234
0x372: PushEmpty(int)
0x373: Call2 0x3df

0x374: Pop(0)
0x375: Pop(2); Push(Stack[-2] + Stack[-1]);
0x376: Push("m") // @poff=292
0x377: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x378: Stack[-4] = (int) 0
0x379: Push((int) 1)
0x37a: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x37b: Push((int) 1)
0x37c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x37d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x37e: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=268
0x37f: Pop(1)
0x380: Pop(0); Push((bool) Stack[-3] == 0)
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: GOTO 0x386

0x383: Push((int) 1)
0x384: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x385: GOTO 0x379

0x386: Pop(0); Push((bool) Stack[-4] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-12] = (bool) 0
0x389: Return(); Pop(10)

0x38a: Stack[-2] = (int) 0
0x38b: Push((int) 1)
0x38c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: @ irand(Stack[-2], Stack[-4])
0x38f: Pop(0)
0x390: Push((int) 1)
0x391: Pop(1); Push(Stack[-3] + Stack[-1]);
0x392: Pop(1); Push(Stack[-6] + Stack[-1]);
0x393: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=280
0x394: Pop(1)
0x395: PushEmpty(bool, string)
0x396: Stack[-3] = Stack[-1]
0x397: Call2 0x3a8

0x398: Stack[-2] = Stack[-14]
0x399: Pop(2)
0x39a: Return(); Pop(10)

0x39b: PushEmpty(float, float, float, float)
0x39c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x39d: Pop(0)
0x39e: Push((bool) 0)
0x39f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3a0: Pop(1)
0x3a1: Return(); Pop(4)

0x3a2: PushEmpty(float, float, float, float)
0x3a3: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3a4: Pop(0)
0x3a5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3a6: Pop(0)
0x3a7: Return(); Pop(4)

0x3a8: PushEmpty(bool, bool)
0x3a9: PushEmpty(bool)
0x3aa: Call2 0x472

0x3ab: Pop(0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3ad: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3ae: Pop(0)
0x3af: Push(Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b1: @ lshPlaySpeech(Stack[-3])
0x3b2: Pop(0)
0x3b3: Stack[-4] = (bool) 1
0x3b4: Return(); Pop(2)

0x3b5: Stack[-4] = (bool) 0
0x3b6: Return(); Pop(2)

0x3b7: PushEmpty(bool)
0x3b8: Call2 0x472

0x3b9: Pop(0)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bb: @ lshStopSpeech()
0x3bc: Pop(0)
0x3bd: Return(); Pop(0)

0x3be: PushEmpty(object, object)
0x3bf: @ self(Stack[-1])
0x3c0: Pop(0)
0x3c1: Stack[-1] = Stack[-3]
0x3c2: Return(); Pop(2)

0x3c3: Stack[-1] = 0
0x3c4: PushEmpty(float, float)
0x3c5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3c6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3c7: Push((float)9.999999974752427e-07)
0x3c8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3ca: Stack[-4] = [0.0, 0.0, 0.0]
0x3cb: Return(); Pop(2)

0x3cc: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3cd: Return(); Pop(2)

0x3ce: PushEmpty(int, int)
0x3cf: @ GetVariable(Stack[-3], Stack[-1])
0x3d0: Pop(0)
0x3d1: Stack[-1] = Stack[-4]
0x3d2: Return(); Pop(2)

0x3d3: PushEmpty(object, object)
0x3d4: @ FindActor(Stack[-1], Stack[-4])
0x3d5: Pop(0)
0x3d6: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3d7: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d8: Stack[-5] = (bool) 0
0x3d9: Return(); Pop(2)

0x3da: @ Trigger(Stack[-1], Stack[-3])
0x3db: Pop(0)
0x3dc: Stack[-5] = (bool) 1
0x3dd: Return(); Pop(2)

0x3de: Stack[-1] = 0
0x3df: PushEmpty(float, float)
0x3e0: @ GetGameTime(Stack[-1])
0x3e1: Pop(0)
0x3e2: Push((int) 1)
0x3e3: PushEmpty(int)
0x3e4: Push((int) 24)
0x3e5: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3e6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3e7: Return(); Pop(2)

0x3e8: PushEmpty(string, string)
0x3e9: Stack[-1] = "idle" // @poff=146
0x3ea: Push(Stack[-3])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ec: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3ed: Stack[-1] = Stack[-4]
0x3ee: Return(); Pop(2)

0x3ef: PushEmpty(int, bool, int, bool)
0x3f0: Stack[-2] = (int) 0
0x3f1: Push("all") // @poff=138
0x3f2: PushEmpty(string, int)
0x3f3: Stack[-5] = Stack[-1]
0x3f4: Call2 0x3e8

0x3f5: Pop(1)
0x3f6: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3f7: Pop(2)
0x3f8: Pop(0); Push((bool) Stack[-1] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3fa: GOTO 0x3fe

0x3fb: Push((int) 1)
0x3fc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3fd: GOTO 0x3f1

0x3fe: Stack[-2] = Stack[-5]
0x3ff: Return(); Pop(4)

0x400: PushEmpty()
0x401: Push("ook6Danko1") // @poff=296
0x402: Push((int) 1)
0x403: @ SetVariable(Stack[-2], Stack[-1])
0x404: Pop(2)
0x405: Return(); Pop(0)

0x406: PushEmpty()
0x407: PushEmpty(bool, string, string)
0x408: Stack[-2] = "quest_k6_01" // @poff=318
0x409: Stack[-1] = "teleport" // @poff=342
0x40a: Call2 0x3d3

0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: PushEmpty()
0x40e: PushEmpty()
0x40f: Call2 0x423

0x410: Pop(0)
0x411: PushEmpty(bool, string, string)
0x412: Stack[-2] = "quest_k6_01" // @poff=318
0x413: Stack[-1] = "completed" // @poff=360
0x414: Call2 0x3d3

0x415: Pop(3)
0x416: Return(); Pop(0)

0x417: PushEmpty()
0x418: PushEmpty(int, string)
0x419: Stack[-1] = "ook6Danko1" // @poff=296
0x41a: Call2 0x3ce

0x41b: Pop(1)
0x41c: Push((int) 0)
0x41d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41f: Stack[-2] = (bool) 1
0x420: Return(); Pop(0)

0x421: Stack[-2] = (bool) 0
0x422: Return(); Pop(0)

0x423: PushEmpty(object, object)
0x424: Push((int) 415)
0x425: Push((int) 1)
0x426: Push((int) 526116)
0x427: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x428: Pop(3)
0x429: PushEmpty(bool, object, int)
0x42a: Stack[-4] = Stack[-2]
0x42b: Stack[-1] = (int) 408
0x42c: Call2 0x43d

0x42d: Pop(3)
0x42e: Return(); Pop(2)

0x42f: Stack[-1] = 0
0x430: PushEmpty(object, object)
0x431: @ GetDiaryRoot(Stack[-1])
0x432: Pop(0)
0x433: Pop(0); Push((bool) Stack[-1] == 0)
0x434: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x435: Push("Can't retrieve diary root") // @poff=380
0x436: @ Trace(Stack[-1])
0x437: Pop(1)
0x438: Stack[-3] = (bool) 0
0x439: Return(); Pop(2)

0x43a: Stack[-1] = Stack[-3]
0x43b: Return(); Pop(2)

0x43c: Stack[-1] = 0
0x43d: PushEmpty(object, object, int, object, object, int)
0x43e: PushEmpty(object)
0x43f: Call2 0x430

0x440: Stack[-1] = Stack[-4]
0x441: Pop(1)
0x442: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=432
0x443: Pop(0)
0x444: Pop(0); Push((bool) Stack[-2] == 0)
0x445: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x446: Push("Can't find diary parent with id: ") // @poff=437
0x447: Pop(1); Push(Stack[-1] + Stack[-8]);
0x448: @ Trace(Stack[-1])
0x449: Pop(1)
0x44a: Stack[-9] = (bool) 0
0x44b: Return(); Pop(6)

0x44c: @@ AddChild(Stack[-8]); Obj=2 // @poff=505
0x44d: Pop(0)
0x44e: Push((int) 7)
0x44f: @ SendWorldWndMessage(Stack[-1])
0x450: Pop(1)
0x451: @@ GetCategory(Stack[-1]); Obj=8 // @poff=514
0x452: Pop(0)
0x453: @ SetDiarySection(Stack[-1])
0x454: Pop(0)
0x455: Stack[-9] = (bool) 0
0x456: Return(); Pop(6)

0x457: Stack[-2] = 0
0x458: Stack[-3] = 0
0x459: PushEmpty(int, int)
0x45a: Push("branch") // @poff=526
0x45b: @ GetVariable(Stack[-1], Stack[-2])
0x45c: Pop(1)
0x45d: Push((int) 0)
0x45e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x460: Stack[-3] = (int) 1
0x461: Return(); Pop(2)

0x462: GOTO 0x468

0x463: Push((int) 1)
0x464: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-3] = (int) 2
0x467: Return(); Pop(2)

0x468: Stack[-3] = (int) 3
0x469: Return(); Pop(2)

0x46a: Stack[-1] = (int) 515573
0x46b: Return(); Pop(0)

0x46c: Stack[-1] = (int) 504032
0x46d: Return(); Pop(0)

0x46e: Stack[-1] = "ui/NPC_Bakalavr.png" // @poff=540
0x46f: Return(); Pop(0)

0x470: Stack[-1] = "ui/NPC_Bakalavr_b.png" // @poff=580
0x471: Return(); Pop(0)

0x472: Stack[-1] = (bool) 1
0x473: Return(); Pop(0)

