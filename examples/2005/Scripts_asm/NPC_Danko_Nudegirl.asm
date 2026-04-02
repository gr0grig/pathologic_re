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
	W:player
	W:head
	A:GetPosition
	A:GetEyesHeight
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:.bin
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
	W:ood7Nudegirl1
	W:d7q04
	W:d7q04NudeGotoAndrei
	W:pt_map_andrei
	A:AddMark
	W:quest_d7_04
	W:init_kabak
	W:ood7Nudegirl2
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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000063006c00650061006e0075007000000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d0000002e00620069006e000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e00670000006f006f00640037004e007500640065006700690072006c0031000000640037007100300034000000640037007100300034004e0075006400650047006f0074006f0041006e0064007200650069000000700074005f006d00610070005f0061006e00640072006500690000004164644d61726b00710075006500730074005f00640037005f0030003400000069006e00690074005f006b006100620061006b0000006f006f00640037004e007500640065006700690072006c003200000053686f774d617000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000
// @pool_encoding:utf8

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x2d2
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdf Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2a8 Vars = (int, int)
	GTASK_4 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x2d8 Vars = (object)
		EVENT_26 Op = 0x31c Vars = (string)
		EVENT_5 Op = 0x324 Vars = ()
		EVENT_6 Op = 0x329 Vars = ()
		EVENT_7 Op = 0x368 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3f0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x557

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x555

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x559

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x55b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x637

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-11] = Stack[-2]
0x31: Stack[-6] = Stack[-1]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-10] = Stack[-1]
0x41: Call2 0x434

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x46: Pop(0)
0x47: Stack[-2] = Stack[-10]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x59e

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x55f

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral" // @poff=89
0x5c: Call2 0xc9

0x5d: Pop(1)
0x5e: Push((int) 533196)
0x5f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x60: Pop(1)
0x61: @@@ ClearReplies(); Obj=0 // @poff=116
0x62: Pop(0)
0x63: Push((int) 535791)
0x64: Push((int) 37488)
0x65: Push((int) 37477)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: Push((int) 535798)
0x69: Push((int) 37488)
0x6a: Push((int) 37485)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: GOTO 0xab

0x6e: PushEmpty(bool)
0x6f: Stack[-1] = (bool) 0
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x5aa

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77: Call2 0x5b6

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Stack[-1] = (bool) 1
0x7b: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x7c: PushEmpty(object, object)
0x7d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7f: Call2 0x588

0x80: Pop(2)
0x81: PushEmpty(string)
0x82: Stack[-1] = "Neutral" // @poff=89
0x83: Call2 0xc9

0x84: Pop(1)
0x85: Push((int) 533221)
0x86: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x87: Pop(1)
0x88: @@@ ClearReplies(); Obj=0 // @poff=116
0x89: Pop(0)
0x8a: Push((int) 533222)
0x8b: Push((int) 37473)
0x8c: Push((int) 34742)
0x8d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8e: Pop(3)
0x8f: Push((int) 535790)
0x90: Push((int) -1)
0x91: Push((int) 37476)
0x92: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x93: Pop(3)
0x94: GOTO 0xab

0x95: PushEmpty(string)
0x96: Stack[-1] = "Neutral" // @poff=89
0x97: Call2 0xc9

0x98: Pop(1)
0x99: Push((int) 533200)
0x9a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x9b: Pop(1)
0x9c: @@@ ClearReplies(); Obj=0 // @poff=116
0x9d: Pop(0)
0x9e: Push((int) 533201)
0x9f: Push((int) -1)
0xa0: Push((int) 34721)
0xa1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa2: Pop(3)
0xa3: Push((int) 535786)
0xa4: Push((int) -1)
0xa5: Push((int) 37472)
0xa6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa7: Pop(3)
0xa8: GOTO 0xab

0xa9: Return(); Pop(0)

0xaa: GOTO 0x4e

0xab: PushEmpty(bool)
0xac: Call2 0x55d

0xad: Pop(0)
0xae: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xaf: @ lshWaitForAnimEnd()
0xb0: Pop(0)
0xb1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: GOTO 0xb9

0xb4: PushEmpty(string)
0xb5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb6: Call2 0x4cf

0xb7: Pop(1)
0xb8: GOTO 0xaf

0xb9: GOTO 0xc8

0xba: Push("all") // @poff=138
0xbb: Push("idle") // @poff=146
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: @ WaitForAnimEnd()
0xbf: Pop(0)
0xc0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: GOTO 0xc8

0xc3: Push("all") // @poff=138
0xc4: Push("idle") // @poff=146
0xc5: @ PlayAnimation(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: GOTO 0xbe

0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: PushEmpty(bool)
0xcb: Call2 0x55d

0xcc: Pop(0)
0xcd: Pop(1); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Return(); Pop(0)

0xd0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Return(); Pop(0)

0xd3: PushEmpty(string, bool)
0xd4: Stack[-3] = Stack[-2]
0xd5: Push("") // @poff=102
0xd6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd8: Stack[-1] = (bool) 0
0xd9: GOTO 0xdb

0xda: Stack[-1] = (bool) 1
0xdb: Call2 0x4d6

0xdc: Pop(2)
0xdd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xde: Return(); Pop(0)

0xdf: PushEmpty()
0xe0: Push((int) 1)
0xe1: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0xe2: PushEmpty()
0xe3: Call2 0x4f6

0xe4: Pop(0)
0xe5: Push((int) 34719)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x565

0xec: Pop(2)
0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x58e

0xf1: Pop(2)
0xf2: Push((int) 37504)
0xf3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call2 0x565

0xf9: Pop(2)
0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x58e

0xfe: Pop(2)
0xff: Push((int) 37503)
0x100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x565

0x106: Pop(2)
0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x58e

0x10b: Pop(2)
0x10c: Push((int) 34716)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x10f: PushEmpty(bool, object)
0x110: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x111: Call2 0x59e

0x112: Pop(1)
0x113: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x114: PushEmpty(object, object)
0x115: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call2 0x55f

0x118: Pop(2)
0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral" // @poff=89
0x11b: Call2 0xc9

0x11c: Pop(1)
0x11d: Push((int) 533196)
0x11e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11f: Pop(1)
0x120: @@@ ClearReplies(); Obj=0 // @poff=116
0x121: Pop(0)
0x122: Push((int) 535791)
0x123: Push((int) 37488)
0x124: Push((int) 37477)
0x125: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x126: Pop(3)
0x127: Push((int) 535798)
0x128: Push((int) 37488)
0x129: Push((int) 37485)
0x12a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12b: Pop(3)
0x12c: Return(); Pop(0)

0x12d: PushEmpty(bool)
0x12e: Stack[-1] = (bool) 0
0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x5aa

0x132: Pop(1)
0x133: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x134: PushEmpty(bool, object)
0x135: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136: Call2 0x5b6

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x139: Stack[-1] = (bool) 1
0x13a: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x588

0x13f: Pop(2)
0x140: PushEmpty(string)
0x141: Stack[-1] = "Neutral" // @poff=89
0x142: Call2 0xc9

0x143: Pop(1)
0x144: Push((int) 533221)
0x145: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x146: Pop(1)
0x147: @@@ ClearReplies(); Obj=0 // @poff=116
0x148: Pop(0)
0x149: Push((int) 533222)
0x14a: Push((int) 37473)
0x14b: Push((int) 34742)
0x14c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14d: Pop(3)
0x14e: Push((int) 535790)
0x14f: Push((int) -1)
0x150: Push((int) 37476)
0x151: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x152: Pop(3)
0x153: Return(); Pop(0)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Neutral" // @poff=89
0x156: Call2 0xc9

0x157: Pop(1)
0x158: Push((int) 533200)
0x159: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x15a: Pop(1)
0x15b: @@@ ClearReplies(); Obj=0 // @poff=116
0x15c: Pop(0)
0x15d: Push((int) 533201)
0x15e: Push((int) -1)
0x15f: Push((int) 34721)
0x160: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x161: Pop(3)
0x162: Push((int) 535786)
0x163: Push((int) -1)
0x164: Push((int) 37472)
0x165: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x166: Pop(3)
0x167: Return(); Pop(0)

0x168: Push((int) 37473)
0x169: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x16b: PushEmpty(string)
0x16c: Stack[-1] = "Neutral" // @poff=89
0x16d: Call2 0xc9

0x16e: Pop(1)
0x16f: Push((int) 535787)
0x170: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x171: Pop(1)
0x172: @@@ ClearReplies(); Obj=0 // @poff=116
0x173: Pop(0)
0x174: Push((int) 535788)
0x175: Push((int) -1)
0x176: Push((int) 37474)
0x177: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x178: Pop(3)
0x179: Push((int) 535789)
0x17a: Push((int) -1)
0x17b: Push((int) 37475)
0x17c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17d: Pop(3)
0x17e: Return(); Pop(0)

0x17f: Push((int) 37488)
0x180: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x182: PushEmpty(string)
0x183: Stack[-1] = "Neutral" // @poff=89
0x184: Call2 0xc9

0x185: Pop(1)
0x186: Push((int) 535799)
0x187: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x188: Pop(1)
0x189: @@@ ClearReplies(); Obj=0 // @poff=116
0x18a: Pop(0)
0x18b: Push((int) 535800)
0x18c: Push((int) 37491)
0x18d: Push((int) 37490)
0x18e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 37491)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral" // @poff=89
0x196: Call2 0xc9

0x197: Pop(1)
0x198: Push((int) 535801)
0x199: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19a: Pop(1)
0x19b: @@@ ClearReplies(); Obj=0 // @poff=116
0x19c: Pop(0)
0x19d: Push((int) 535802)
0x19e: Push((int) 37493)
0x19f: Push((int) 37492)
0x1a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a1: Pop(3)
0x1a2: Push((int) 535806)
0x1a3: Push((int) 37498)
0x1a4: Push((int) 37497)
0x1a5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 37498)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1ab: PushEmpty(string)
0x1ac: Stack[-1] = "Neutral" // @poff=89
0x1ad: Call2 0xc9

0x1ae: Pop(1)
0x1af: Push((int) 535807)
0x1b0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b1: Pop(1)
0x1b2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b3: Pop(0)
0x1b4: Push((int) 535808)
0x1b5: Push((int) 37500)
0x1b6: Push((int) 37499)
0x1b7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b8: Pop(3)
0x1b9: Return(); Pop(0)

0x1ba: Push((int) 37500)
0x1bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = "Neutral" // @poff=89
0x1bf: Call2 0xc9

0x1c0: Pop(1)
0x1c1: Push((int) 535809)
0x1c2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c3: Pop(1)
0x1c4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c5: Pop(0)
0x1c6: Push((int) 535810)
0x1c7: Push((int) 37493)
0x1c8: Push((int) 37501)
0x1c9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ca: Pop(3)
0x1cb: Push((int) 535811)
0x1cc: Push((int) -1)
0x1cd: Push((int) 37503)
0x1ce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 37493)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Neutral" // @poff=89
0x1d6: Call2 0xc9

0x1d7: Pop(1)
0x1d8: Push((int) 535803)
0x1d9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1da: Pop(1)
0x1db: @@@ ClearReplies(); Obj=0 // @poff=116
0x1dc: Pop(0)
0x1dd: Push((int) 535804)
0x1de: Push((int) 37495)
0x1df: Push((int) 37494)
0x1e0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e1: Pop(3)
0x1e2: Push((int) 535812)
0x1e3: Push((int) -1)
0x1e4: Push((int) 37504)
0x1e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 37495)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral" // @poff=89
0x1ed: Call2 0xc9

0x1ee: Pop(1)
0x1ef: Push((int) 535805)
0x1f0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f1: Pop(1)
0x1f2: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f3: Pop(0)
0x1f4: Push((int) 533199)
0x1f5: Push((int) -1)
0x1f6: Push((int) 34719)
0x1f7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1fb: PushEmpty(bool)
0x1fc: Call2 0x55d

0x1fd: Pop(0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ff: @ lshStopAnimation()
0x200: Pop(0)
0x201: GOTO 0x204

0x202: @ StopAnimation()
0x203: Pop(0)
0x204: Return(); Pop(0)

0x205: GOTO 0xe0

0x206: Return(); Pop(0)

0x207: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x208: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x209: PushEmpty(bool, object)
0x20a: PushEmpty(object)
0x20b: Call2 0x4fd

0x20c: Stack[-1] = Stack[-2]
0x20d: Pop(1)
0x20e: Call2 0x445

0x20f: Pop(2)
0x210: PushEmpty(bool, object, float)
0x211: Stack[-12] = Stack[-2]
0x212: Stack[-1] = (float) 70.0
0x213: Call2 0x3f0

0x214: Pop(2)
0x215: Pop(1); Push((bool) Stack[-1] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x217: Stack[-10] = (int) -2
0x218: Return(); Pop(8)

0x219: @ CreateDialog(Stack[-4])
0x21a: Pop(0)
0x21b: PushEmpty(int)
0x21c: Call2 0x557

0x21d: Pop(0)
0x21e: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x21f: Pop(1)
0x220: PushEmpty(int)
0x221: Call2 0x555

0x222: Pop(0)
0x223: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x224: Pop(1)
0x225: PushEmpty(string)
0x226: Call2 0x559

0x227: Pop(0)
0x228: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x229: Pop(1)
0x22a: PushEmpty(string)
0x22b: Call2 0x55b

0x22c: Pop(0)
0x22d: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x22e: Pop(1)
0x22f: PushEmpty(int)
0x230: Call2 0x637

0x231: Pop(0)
0x232: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x233: Pop(1)
0x234: Stack[-2] = (int) -1
0x235: @ IsOverrideActive(Stack[-3])
0x236: Pop(0)
0x237: Push(Stack[-3])
0x238: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x239: Stack[-10] = (int) -2
0x23a: Return(); Pop(8)

0x23b: @ DoDialog(Stack[-4])
0x23c: Pop(0)
0x23d: PushEmpty(object, object)
0x23e: Stack[-11] = Stack[-2]
0x23f: Stack[-6] = Stack[-1]
0x240: Push(-2, 4); TaskCall(3)
0x241: Call2 0x258

0x242: Pop(-2, 4); TaskReturn
0x243: Pop(2)
0x244: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x245: Pop(0)
0x246: Pop(0); Push((bool) Stack[-1] == 0)
0x247: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x248: @ sync()
0x249: Pop(0)
0x24a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x24b: Pop(0)
0x24c: GOTO 0x246

0x24d: PushEmpty(object)
0x24e: Stack[-10] = Stack[-1]
0x24f: Call2 0x434

0x250: Pop(1)
0x251: @ StopDialog(Stack[-4])
0x252: Pop(0)
0x253: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x254: Pop(0)
0x255: Stack[-2] = Stack[-10]
0x256: Return(); Pop(8)

0x257: Stack[-4] = 0
0x258: PushEmpty()
0x259: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x25a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x25b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x25c: Push((int) 1)
0x25d: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x25e: PushEmpty(string)
0x25f: Stack[-1] = "Neutral" // @poff=89
0x260: Call2 0x292

0x261: Pop(1)
0x262: Push((int) 540548)
0x263: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x264: Pop(1)
0x265: @@@ ClearReplies(); Obj=0 // @poff=116
0x266: Pop(0)
0x267: Push((int) 540549)
0x268: Push((int) -1)
0x269: Push((int) 42558)
0x26a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26b: Pop(3)
0x26c: Push((int) 540797)
0x26d: Push((int) -1)
0x26e: Push((int) 42846)
0x26f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x270: Pop(3)
0x271: GOTO 0x274

0x272: Return(); Pop(0)

0x273: GOTO 0x25c

0x274: PushEmpty(bool)
0x275: Call2 0x55d

0x276: Pop(0)
0x277: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x278: @ lshWaitForAnimEnd()
0x279: Pop(0)
0x27a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: GOTO 0x282

0x27d: PushEmpty(string)
0x27e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x27f: Call2 0x4cf

0x280: Pop(1)
0x281: GOTO 0x278

0x282: GOTO 0x291

0x283: Push("all") // @poff=138
0x284: Push("idle") // @poff=146
0x285: @ PlayAnimation(Stack[-2], Stack[-1])
0x286: Pop(2)
0x287: @ WaitForAnimEnd()
0x288: Pop(0)
0x289: Push( Stack[3 + Tasks[-1].StackPointer] )
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x291

0x28c: Push("all") // @poff=138
0x28d: Push("idle") // @poff=146
0x28e: @ PlayAnimation(Stack[-2], Stack[-1])
0x28f: Pop(2)
0x290: GOTO 0x287

0x291: Return(); Pop(0)

0x292: PushEmpty()
0x293: PushEmpty(bool)
0x294: Call2 0x55d

0x295: Pop(0)
0x296: Pop(1); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Return(); Pop(0)

0x299: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: Return(); Pop(0)

0x29c: PushEmpty(string, bool)
0x29d: Stack[-3] = Stack[-2]
0x29e: Push("") // @poff=102
0x29f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a1: Stack[-1] = (bool) 0
0x2a2: GOTO 0x2a4

0x2a3: Stack[-1] = (bool) 1
0x2a4: Call2 0x4d6

0x2a5: Pop(2)
0x2a6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2a7: Return(); Pop(0)

0x2a8: PushEmpty()
0x2a9: Push((int) 1)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2ab: PushEmpty()
0x2ac: Call2 0x4f6

0x2ad: Pop(0)
0x2ae: Push((int) 42557)
0x2af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2b1: PushEmpty(string)
0x2b2: Stack[-1] = "Neutral" // @poff=89
0x2b3: Call2 0x292

0x2b4: Pop(1)
0x2b5: Push((int) 540548)
0x2b6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2b7: Pop(1)
0x2b8: @@@ ClearReplies(); Obj=0 // @poff=116
0x2b9: Pop(0)
0x2ba: Push((int) 540549)
0x2bb: Push((int) -1)
0x2bc: Push((int) 42558)
0x2bd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2be: Pop(3)
0x2bf: Push((int) 540797)
0x2c0: Push((int) -1)
0x2c1: Push((int) 42846)
0x2c2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c3: Pop(3)
0x2c4: Return(); Pop(0)

0x2c5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2c6: PushEmpty(bool)
0x2c7: Call2 0x55d

0x2c8: Pop(0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2ca: @ lshStopAnimation()
0x2cb: Pop(0)
0x2cc: GOTO 0x2cf

0x2cd: @ StopAnimation()
0x2ce: Pop(0)
0x2cf: Return(); Pop(0)

0x2d0: GOTO 0x2a9

0x2d1: Return(); Pop(0)

0x2d2: PushEmpty(float, float)
0x2d3: Stack[-2] = (int) 300
0x2d4: Stack[-1] = (int) 100
0x2d5: Call2 0x2ef

0x2d6: Pop(2)
0x2d7: Return(); Pop(0)

0x2d8: PushEmpty()
0x2d9: PushEmpty()
0x2da: Call2 0x37f

0x2db: Pop(0)
0x2dc: PushEmpty(bool, int)
0x2dd: Stack[-1] = (int) 7
0x2de: Call2 0x537

0x2df: Pop(1)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e1: PushEmpty(int, object)
0x2e2: Stack[-3] = Stack[-1]
0x2e3: Push(-2, 1); TaskCall(0)
0x2e4: Call2 0x0

0x2e5: Pop(-2, 1); TaskReturn
0x2e6: Pop(2)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty(int, object)
0x2e9: Stack[-3] = Stack[-1]
0x2ea: Push(-2, 1); TaskCall(2)
0x2eb: Call2 0x207

0x2ec: Pop(-2, 1); TaskReturn
0x2ed: Pop(2)
0x2ee: Return(); Pop(0)

0x2ef: PushEmpty(float, float)
0x2f0: PushEmpty(bool)
0x2f1: Call2 0x3eb

0x2f2: Pop(0)
0x2f3: Pop(1); Push((bool) Stack[-1] == 0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f5: @ Hold()
0x2f6: Pop(0)
0x2f7: GOTO 0x2f0

0x2f8: Push((int) 3)
0x2f9: @ rand(Stack[-2], Stack[-1])
0x2fa: Pop(1)
0x2fb: Push((int) 3)
0x2fc: Pop(1); Push(Stack[-2] + Stack[-1]);
0x2fd: @ Sleep(Stack[-1])
0x2fe: Pop(1)
0x2ff: PushEmpty(float, float)
0x300: Stack[-6] = Stack[-2]
0x301: Stack[-5] = Stack[-1]
0x302: Call2 0x33e

0x303: Pop(2)
0x304: @ sync()
0x305: Pop(0)
0x306: GOTO 0x2f0

0x307: Return(); Pop(2)

0x308: PushEmpty(bool, bool)
0x309: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x30a: @ IsLoaded(Stack[-1])
0x30b: Pop(0)
0x30c: PushEmpty(bool)
0x30d: Stack[-1] = (bool) 0
0x30e: Pop(0); Push((bool) Stack[-2] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x310: PushEmpty(bool)
0x311: Call2 0x33c

0x312: Pop(0)
0x313: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x314: Stack[-1] = (bool) 1
0x315: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x316: PushEmpty(object)
0x317: Call2 0x4fd

0x318: Pop(0)
0x319: @ RemoveActor(Stack[-1])
0x31a: Pop(1)
0x31b: Return(); Pop(2)

0x31c: PushEmpty()
0x31d: Push("cleanup") // @poff=156
0x31e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x320: PushEmpty()
0x321: Call2 0x308

0x322: Pop(0)
0x323: Return(); Pop(0)

0x324: @ StopGroup0()
0x325: Pop(0)
0x326: @ sync()
0x327: Pop(0)
0x328: Return(); Pop(0)

0x329: PushEmpty()
0x32a: Call2 0x37f

0x32b: Pop(0)
0x32c: PushEmpty(bool)
0x32d: Stack[-1] = (bool) 0
0x32e: Push( Stack[5 + Tasks[-1].StackPointer] )
0x32f: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x330: PushEmpty(bool)
0x331: Call2 0x33c

0x332: Pop(0)
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: Stack[-1] = (bool) 1
0x335: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x336: PushEmpty(object)
0x337: Call2 0x4fd

0x338: Pop(0)
0x339: @ RemoveActor(Stack[-1])
0x33a: Pop(1)
0x33b: Return(); Pop(0)

0x33c: Stack[-1] = (bool) 1
0x33d: Return(); Pop(0)

0x33e: PushEmpty()
0x33f: PushEmpty(bool)
0x340: Call2 0x3eb

0x341: Pop(0)
0x342: Pop(1); Push((bool) Stack[-1] == 0)
0x343: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x344: Return(); Pop(0)

0x345: Push("player") // @poff=172
0x346: @ FindActor(Stack[-4]T, Stack[-1])
0x347: Pop(1)
0x348: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x349: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x34a: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x34b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x34c: Push((int) 10)
0x34d: Push((float)1.0)
0x34e: @ SetTimer(Stack[-2], Stack[-1])
0x34f: Pop(2)
0x350: PushEmpty()
0x351: Call2 0x38d

0x352: Pop(0)
0x353: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x354: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x355: Push((int) 10)
0x356: @ KillTimer(Stack[-1])
0x357: Pop(1)
0x358: Return(); Pop(0)

0x359: PushEmpty(float, float)
0x35a: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x35b: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35c: Stack[-3] = (bool) 0
0x35d: Return(); Pop(2)

0x35e: PushEmpty(float, object)
0x35f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x360: Call2 0x3e3

0x361: Pop(1)
0x362: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x363: Push( Stack[2 + Tasks[-1].StackPointer] )
0x364: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x365: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x366: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x367: Return(); Pop(2)

0x368: PushEmpty()
0x369: Push((int) 10)
0x36a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x36c: PushEmpty(bool)
0x36d: Call2 0x359

0x36e: Pop(0)
0x36f: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x370: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x372: PushEmpty(object)
0x373: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x374: Call2 0x4dc

0x375: Pop(1)
0x376: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x377: GOTO 0x37e

0x378: Push( Stack[2 + Tasks[-1].StackPointer] )
0x379: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37a: Push("head") // @poff=186
0x37b: @ UnlookAsync(Stack[-1])
0x37c: Pop(1)
0x37d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x37e: Return(); Pop(0)

0x37f: PushEmpty()
0x380: Call2 0x3de

0x381: Pop(0)
0x382: Push((int) 10)
0x383: @ KillTimer(Stack[-1])
0x384: Pop(1)
0x385: Push( Stack[2 + Tasks[-1].StackPointer] )
0x386: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x387: Push("head") // @poff=186
0x388: @ UnlookAsync(Stack[-1])
0x389: Pop(1)
0x38a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x38b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x38c: Return(); Pop(0)

0x38d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x38e: @ WaitForAnimEnd()
0x38f: Pop(0)
0x390: PushEmpty(bool)
0x391: Call2 0x3eb

0x392: Pop(0)
0x393: Pop(1); Push((bool) Stack[-1] == 0)
0x394: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x395: Return(); Pop(14)

0x396: PushEmpty(int)
0x397: Call2 0x544

0x398: Stack[-1] = Stack[-8]
0x399: Pop(1)
0x39a: Stack[-6] = (int) 0
0x39b: PushEmpty(bool)
0x39c: Stack[-1] = (bool) 0
0x39d: Push((int) 5)
0x39e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a0: PushEmpty(bool)
0x3a1: Call2 0x3eb

0x3a2: Pop(0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: Stack[-1] = (bool) 1
0x3a5: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3a6: Push((int) 3)
0x3a7: @ irand(Stack[-6], Stack[-1])
0x3a8: Pop(1)
0x3a9: Push((int) 0)
0x3aa: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3ac: Push(Stack[-7])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ae: @ irand(Stack[-4], Stack[-7])
0x3af: Pop(0)
0x3b0: Push("all") // @poff=138
0x3b1: PushEmpty(string, int)
0x3b2: Stack[-7] = Stack[-1]
0x3b3: Call2 0x53d

0x3b4: Pop(1)
0x3b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b6: Pop(2)
0x3b7: @ WaitForAnimEnd(Stack[-3])
0x3b8: Pop(0)
0x3b9: Pop(0); Push((bool) Stack[-3] == 0)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3bb: GOTO 0x3d9

0x3bc: GOTO 0x3ce

0x3bd: Push((int) 1)
0x3be: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c0: Push((int) 4)
0x3c1: @ rand(Stack[-3], Stack[-1])
0x3c2: Pop(1)
0x3c3: Push((int) 1)
0x3c4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3c5: @ Sleep(Stack[-1], Stack[-2])
0x3c6: Pop(1)
0x3c7: Pop(0); Push((bool) Stack[-1] == 0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c9: GOTO 0x3d9

0x3ca: GOTO 0x3ce

0x3cb: Push(Stack[-6])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: GOTO 0x3d9

0x3ce: PushEmpty(bool)
0x3cf: Call2 0x3dc

0x3d0: Pop(0)
0x3d1: Pop(1); Push((bool) Stack[-1] == 0)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: GOTO 0x3d9

0x3d4: @ ResetAAS()
0x3d5: Pop(0)
0x3d6: Push((int) 1)
0x3d7: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x3d8: GOTO 0x39b

0x3d9: @ ResetAAS()
0x3da: Pop(0)
0x3db: Return(); Pop(14)

0x3dc: Stack[-1] = (bool) 1
0x3dd: Return(); Pop(0)

0x3de: @ StopAnimation()
0x3df: Pop(0)
0x3e0: @ StopGroup0()
0x3e1: Pop(0)
0x3e2: Return(); Pop(0)

0x3e3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3e4: @ GetPosition(Stack[-3])
0x3e5: Pop(0)
0x3e6: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x3e7: Pop(0)
0x3e8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3e9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3ea: Return(); Pop(6)

0x3eb: PushEmpty(bool, bool)
0x3ec: @ IsLoaded(Stack[-1])
0x3ed: Pop(0)
0x3ee: Stack[-1] = Stack[-3]
0x3ef: Return(); Pop(2)

0x3f0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3f1: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x3f2: Pop(0)
0x3f3: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x3f4: Pop(0)
0x3f5: Push(CvectorIndex(Stack[-8], 1))
0x3f6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3f7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3f8: @ GetPosition(Stack[-7])
0x3f9: Pop(0)
0x3fa: @ GetEyesHeight(Stack[-9])
0x3fb: Pop(0)
0x3fc: Push(CvectorIndex(Stack[-7], 1))
0x3fd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3fe: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3ff: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x400: Push(CvectorIndex(Stack[-6], 1))
0x401: Stack[-1] = (int) 0
0x402: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x403: Pop(0); Push(Stack[-6] | Stack[-6]);
0x404: Pop(1); Push(Sqrt(Stack[-1]))
0x405: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x406: Stack[-5] = -Stack[-6]; Pop(0);
0x407: Pop(0); Push(Stack[-6] * Stack[-19]);
0x408: PushEmpty(cvector, cvector)
0x409: Push([0.0, 1.0, 0.0])
0x40a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x40b: Call2 0x503

0x40c: Pop(1)
0x40d: Push((int) 25)
0x40e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x40f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x410: Push([0.0, 10.0, 0.0])
0x411: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x412: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x413: @ IsOverrideActive(Stack[-2])
0x414: Pop(0)
0x415: Push(Stack[-2])
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-21] = (bool) 0
0x418: Return(); Pop(18)

0x419: @ StopWorld()
0x41a: Pop(0)
0x41b: @ CameraTransit(Stack[-3], Stack[-5])
0x41c: Pop(0)
0x41d: Push(CvectorIndex(Stack[-4], 0))
0x41e: Push(CvectorIndex(Stack[-5], 2))
0x41f: @ Rotate(Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: PushEmpty(bool)
0x422: Call2 0x55d

0x423: Pop(0)
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: GOTO 0x42e

0x426: Push("head") // @poff=186
0x427: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x428: Pop(1)
0x429: Push(Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42b: Push("head") // @poff=186
0x42c: @ LookAsyncCamera(Stack[-1])
0x42d: Pop(1)
0x42e: @ CameraWaitForPlayFinish()
0x42f: Pop(0)
0x430: @ ResumeWorld()
0x431: Pop(0)
0x432: Stack[-21] = (bool) 1
0x433: Return(); Pop(18)

0x434: PushEmpty(bool, bool)
0x435: @ CameraSwitchToNormal()
0x436: Pop(0)
0x437: PushEmpty(bool)
0x438: Call2 0x55d

0x439: Pop(0)
0x43a: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43b: GOTO 0x444

0x43c: Push("head") // @poff=186
0x43d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x43e: Pop(1)
0x43f: Push(Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x441: Push("head") // @poff=186
0x442: @ UnlookAsync(Stack[-1])
0x443: Pop(1)
0x444: Return(); Pop(2)

0x445: PushEmpty(int, int, int, int)
0x446: Push("voice_common") // @poff=222
0x447: @ GetVariable(Stack[-1], Stack[-3])
0x448: Pop(1)
0x449: Push(Stack[-2])
0x44a: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x44b: PushEmpty(bool, object)
0x44c: Stack[-7] = Stack[-1]
0x44d: Call2 0x47f

0x44e: Pop(1)
0x44f: Pop(1); Push((bool) Stack[-1] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x451: PushEmpty(bool, object)
0x452: Stack[-7] = Stack[-1]
0x453: Call2 0x4a4

0x454: Pop(1)
0x455: Pop(1); Push((bool) Stack[-1] == 0)
0x456: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x457: Stack[-6] = (bool) 0
0x458: Return(); Pop(4)

0x459: Push((int) 2)
0x45a: @ irand(Stack[-2], Stack[-1])
0x45b: Pop(1)
0x45c: Push(Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x45e: Push("voice_common") // @poff=222
0x45f: Push((int) 1)
0x460: Pop(1); Push(Stack[-4] + Stack[-1]);
0x461: Push((int) 3)
0x462: Pop(2); Push(Stack[-2] % Stack[-1]);
0x463: @ SetVariable(Stack[-2], Stack[-1])
0x464: Pop(2)
0x465: GOTO 0x46a

0x466: Push("voice_common") // @poff=222
0x467: Push((int) 0)
0x468: @ SetVariable(Stack[-2], Stack[-1])
0x469: Pop(2)
0x46a: GOTO 0x47d

0x46b: PushEmpty(bool, object)
0x46c: Stack[-7] = Stack[-1]
0x46d: Call2 0x4a4

0x46e: Pop(1)
0x46f: Pop(1); Push((bool) Stack[-1] == 0)
0x470: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x471: PushEmpty(bool, object)
0x472: Stack[-7] = Stack[-1]
0x473: Call2 0x47f

0x474: Pop(1)
0x475: Pop(1); Push((bool) Stack[-1] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x477: Stack[-6] = (bool) 0
0x478: Return(); Pop(4)

0x479: Push("voice_common") // @poff=222
0x47a: Push((int) 1)
0x47b: @ SetVariable(Stack[-2], Stack[-1])
0x47c: Pop(2)
0x47d: Stack[-6] = (bool) 1
0x47e: Return(); Pop(4)

0x47f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x480: Stack[-5] = "c" // @poff=248
0x481: Stack[-4] = (int) 0
0x482: Push((int) 1)
0x483: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x484: Push((int) 1)
0x485: Pop(1); Push(Stack[-5] + Stack[-1]);
0x486: Pop(1); Push(Stack[-6] + Stack[-1]);
0x487: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=252
0x488: Pop(1)
0x489: Pop(0); Push((bool) Stack[-3] == 0)
0x48a: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48b: GOTO 0x48f

0x48c: Push((int) 1)
0x48d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x48e: GOTO 0x482

0x48f: Pop(0); Push((bool) Stack[-4] == 0)
0x490: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x491: Stack[-12] = (bool) 0
0x492: Return(); Pop(10)

0x493: Stack[-2] = (int) 0
0x494: Push((int) 1)
0x495: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x497: @ irand(Stack[-2], Stack[-4])
0x498: Pop(0)
0x499: Push((int) 1)
0x49a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x49b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x49c: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=264
0x49d: Pop(1)
0x49e: PushEmpty(bool, string)
0x49f: Stack[-3] = Stack[-1]
0x4a0: Call2 0x4e7

0x4a1: Stack[-2] = Stack[-14]
0x4a2: Pop(2)
0x4a3: Return(); Pop(10)

0x4a4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4a5: Push("d") // @poff=192
0x4a6: PushEmpty(int)
0x4a7: Call2 0x52e

0x4a8: Pop(0)
0x4a9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4aa: Push("m") // @poff=276
0x4ab: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4ac: Stack[-4] = (int) 0
0x4ad: Push((int) 1)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4af: Push((int) 1)
0x4b0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4b1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4b2: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=252
0x4b3: Pop(1)
0x4b4: Pop(0); Push((bool) Stack[-3] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b6: GOTO 0x4ba

0x4b7: Push((int) 1)
0x4b8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4b9: GOTO 0x4ad

0x4ba: Pop(0); Push((bool) Stack[-4] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bc: Stack[-12] = (bool) 0
0x4bd: Return(); Pop(10)

0x4be: Stack[-2] = (int) 0
0x4bf: Push((int) 1)
0x4c0: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c2: @ irand(Stack[-2], Stack[-4])
0x4c3: Pop(0)
0x4c4: Push((int) 1)
0x4c5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4c6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4c7: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=264
0x4c8: Pop(1)
0x4c9: PushEmpty(bool, string)
0x4ca: Stack[-3] = Stack[-1]
0x4cb: Call2 0x4e7

0x4cc: Stack[-2] = Stack[-14]
0x4cd: Pop(2)
0x4ce: Return(); Pop(10)

0x4cf: PushEmpty(float, float, float, float)
0x4d0: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x4d1: Pop(0)
0x4d2: Push((bool) 0)
0x4d3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4d4: Pop(1)
0x4d5: Return(); Pop(4)

0x4d6: PushEmpty(float, float, float, float)
0x4d7: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x4d8: Pop(0)
0x4d9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x4da: Pop(0)
0x4db: Return(); Pop(4)

0x4dc: PushEmpty(float, cvector, float, cvector)
0x4dd: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x4de: Pop(0)
0x4df: Stack[-1] = [0.0, 0.0, 0.0]
0x4e0: Push(CvectorIndex(Stack[-1], 1))
0x4e1: Stack[-3] = Stack[-1]
0x4e2: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4e3: Push("head") // @poff=186
0x4e4: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x4e5: Pop(1)
0x4e6: Return(); Pop(4)

0x4e7: PushEmpty(bool, bool)
0x4e8: PushEmpty(bool)
0x4e9: Call2 0x55d

0x4ea: Pop(0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4ec: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4ed: Pop(0)
0x4ee: Push(Stack[-1])
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4f0: @ lshPlaySpeech(Stack[-3])
0x4f1: Pop(0)
0x4f2: Stack[-4] = (bool) 1
0x4f3: Return(); Pop(2)

0x4f4: Stack[-4] = (bool) 0
0x4f5: Return(); Pop(2)

0x4f6: PushEmpty(bool)
0x4f7: Call2 0x55d

0x4f8: Pop(0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fa: @ lshStopSpeech()
0x4fb: Pop(0)
0x4fc: Return(); Pop(0)

0x4fd: PushEmpty(object, object)
0x4fe: @ self(Stack[-1])
0x4ff: Pop(0)
0x500: Stack[-1] = Stack[-3]
0x501: Return(); Pop(2)

0x502: Stack[-1] = 0
0x503: PushEmpty(float, float)
0x504: Pop(0); Push(Stack[-3] | Stack[-3]);
0x505: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x506: Push((float)9.999999974752427e-07)
0x507: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x509: Stack[-4] = [0.0, 0.0, 0.0]
0x50a: Return(); Pop(2)

0x50b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x50c: Return(); Pop(2)

0x50d: PushEmpty(int, int)
0x50e: @ GetVariable(Stack[-3], Stack[-1])
0x50f: Pop(0)
0x510: Stack[-1] = Stack[-4]
0x511: Return(); Pop(2)

0x512: PushEmpty(object, object, object, object)
0x513: @ GetMainOutdoorScene(Stack[-2])
0x514: Pop(0)
0x515: Push(".bin") // @poff=280
0x516: Pop(1); Push(Stack[-6] + Stack[-1]);
0x517: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x518: Pop(1)
0x519: Stack[-1] = Stack[-6]
0x51a: Return(); Pop(4)

0x51b: Stack[-1] = 0
0x51c: Stack[-2] = 0
0x51d: PushEmpty(object, object)
0x51e: @ FindActor(Stack[-1], Stack[-4])
0x51f: Pop(0)
0x520: Pop(0); PushNull((bool) Stack[-1] == 0)
0x521: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x522: Stack[-5] = (bool) 0
0x523: Return(); Pop(2)

0x524: @ Trigger(Stack[-1], Stack[-3])
0x525: Pop(0)
0x526: Stack[-5] = (bool) 1
0x527: Return(); Pop(2)

0x528: Stack[-1] = 0
0x529: PushEmpty(float, float)
0x52a: @ GetGameTime(Stack[-1])
0x52b: Pop(0)
0x52c: Stack[-1] = Stack[-3]
0x52d: Return(); Pop(2)

0x52e: PushEmpty(float, float)
0x52f: @ GetGameTime(Stack[-1])
0x530: Pop(0)
0x531: Push((int) 1)
0x532: PushEmpty(int)
0x533: Push((int) 24)
0x534: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x535: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x536: Return(); Pop(2)

0x537: PushEmpty()
0x538: PushEmpty(int)
0x539: Call2 0x52e

0x53a: Pop(0)
0x53b: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x53c: Return(); Pop(0)

0x53d: PushEmpty(string, string)
0x53e: Stack[-1] = "idle" // @poff=146
0x53f: Push(Stack[-3])
0x540: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x541: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x542: Stack[-1] = Stack[-4]
0x543: Return(); Pop(2)

0x544: PushEmpty(int, bool, int, bool)
0x545: Stack[-2] = (int) 0
0x546: Push("all") // @poff=138
0x547: PushEmpty(string, int)
0x548: Stack[-5] = Stack[-1]
0x549: Call2 0x53d

0x54a: Pop(1)
0x54b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x54c: Pop(2)
0x54d: Pop(0); Push((bool) Stack[-1] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: GOTO 0x553

0x550: Push((int) 1)
0x551: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x552: GOTO 0x546

0x553: Stack[-2] = Stack[-5]
0x554: Return(); Pop(4)

0x555: Stack[-1] = (int) 533305
0x556: Return(); Pop(0)

0x557: Stack[-1] = (int) 533304
0x558: Return(); Pop(0)

0x559: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=290
0x55a: Return(); Pop(0)

0x55b: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=330
0x55c: Return(); Pop(0)

0x55d: Stack[-1] = (bool) 0
0x55e: Return(); Pop(0)

0x55f: PushEmpty()
0x560: Push("ood7Nudegirl1") // @poff=374
0x561: Push((int) 1)
0x562: @ SetVariable(Stack[-2], Stack[-1])
0x563: Pop(2)
0x564: Return(); Pop(0)

0x565: PushEmpty(object, object)
0x566: Push("d7q04") // @poff=402
0x567: Push((int) 1)
0x568: @ SetVariable(Stack[-2], Stack[-1])
0x569: Pop(2)
0x56a: PushEmpty(object)
0x56b: Call2 0x605

0x56c: Stack[-1] = Stack[-2]
0x56d: Pop(1)
0x56e: Push("d7q04NudeGotoAndrei") // @poff=414
0x56f: Push("pt_map_andrei") // @poff=454
0x570: Push((int) 0)
0x571: Push((int) 515352)
0x572: PushEmpty(float)
0x573: Call2 0x529

0x574: Pop(0)
0x575: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=482
0x576: Pop(5)
0x577: PushEmpty()
0x578: Call2 0x5c2

0x579: Pop(0)
0x57a: PushEmpty()
0x57b: Call2 0x5cf

0x57c: Pop(0)
0x57d: PushEmpty(object, string)
0x57e: Stack[-1] = "quest_d7_04" // @poff=490
0x57f: Call2 0x512

0x580: Pop(2)
0x581: PushEmpty(bool, string, string)
0x582: Stack[-2] = "quest_d7_04" // @poff=490
0x583: Stack[-1] = "init_kabak" // @poff=514
0x584: Call2 0x51d

0x585: Pop(3)
0x586: Return(); Pop(2)

0x587: Stack[-1] = 0
0x588: PushEmpty()
0x589: Push("ood7Nudegirl2") // @poff=536
0x58a: Push((int) 1)
0x58b: @ SetVariable(Stack[-2], Stack[-1])
0x58c: Pop(2)
0x58d: Return(); Pop(0)

0x58e: PushEmpty()
0x58f: PushEmpty(object, string, float)
0x590: PushEmpty(object)
0x591: Call2 0x605

0x592: Stack[-1] = Stack[-4]
0x593: Pop(1)
0x594: Stack[-2] = "pt_map_andrei" // @poff=454
0x595: Stack[-1] = (int) 2
0x596: Call2 0x616

0x597: Pop(3)
0x598: PushEmpty(object)
0x599: Call2 0x605

0x59a: Pop(0)
0x59b: @@ ShowMap(Stack[-1]); Obj=2 // @poff=564
0x59c: Pop(1)
0x59d: Return(); Pop(0)

0x59e: PushEmpty()
0x59f: PushEmpty(int, string)
0x5a0: Stack[-1] = "ood7Nudegirl1" // @poff=374
0x5a1: Call2 0x50d

0x5a2: Pop(1)
0x5a3: Push((int) 0)
0x5a4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a6: Stack[-2] = (bool) 1
0x5a7: Return(); Pop(0)

0x5a8: Stack[-2] = (bool) 0
0x5a9: Return(); Pop(0)

0x5aa: PushEmpty()
0x5ab: PushEmpty(int, string)
0x5ac: Stack[-1] = "d7q04" // @poff=402
0x5ad: Call2 0x50d

0x5ae: Pop(1)
0x5af: Push((int) 1000)
0x5b0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b2: Stack[-2] = (bool) 1
0x5b3: Return(); Pop(0)

0x5b4: Stack[-2] = (bool) 0
0x5b5: Return(); Pop(0)

0x5b6: PushEmpty()
0x5b7: PushEmpty(int, string)
0x5b8: Stack[-1] = "ood7Nudegirl2" // @poff=536
0x5b9: Call2 0x50d

0x5ba: Pop(1)
0x5bb: Push((int) 0)
0x5bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5be: Stack[-2] = (bool) 1
0x5bf: Return(); Pop(0)

0x5c0: Stack[-2] = (bool) 0
0x5c1: Return(); Pop(0)

0x5c2: PushEmpty(object, object)
0x5c3: Push((int) 637)
0x5c4: Push((int) 2)
0x5c5: Push((int) 533223)
0x5c6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5c7: Pop(3)
0x5c8: PushEmpty(bool, object, int)
0x5c9: Stack[-4] = Stack[-2]
0x5ca: Stack[-1] = (int) -1
0x5cb: Call2 0x5e9

0x5cc: Pop(3)
0x5cd: Return(); Pop(2)

0x5ce: Stack[-1] = 0
0x5cf: PushEmpty(object, object)
0x5d0: Push((int) 638)
0x5d1: Push((int) 2)
0x5d2: Push((int) 533224)
0x5d3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5d4: Pop(3)
0x5d5: PushEmpty(bool, object, int)
0x5d6: Stack[-4] = Stack[-2]
0x5d7: Stack[-1] = (int) 637
0x5d8: Call2 0x5e9

0x5d9: Pop(3)
0x5da: Return(); Pop(2)

0x5db: Stack[-1] = 0
0x5dc: PushEmpty(object, object)
0x5dd: @ GetDiaryRoot(Stack[-1])
0x5de: Pop(0)
0x5df: Pop(0); Push((bool) Stack[-1] == 0)
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e1: Push("Can't retrieve diary root") // @poff=572
0x5e2: @ Trace(Stack[-1])
0x5e3: Pop(1)
0x5e4: Stack[-3] = (bool) 0
0x5e5: Return(); Pop(2)

0x5e6: Stack[-1] = Stack[-3]
0x5e7: Return(); Pop(2)

0x5e8: Stack[-1] = 0
0x5e9: PushEmpty(object, object, int, object, object, int)
0x5ea: PushEmpty(object)
0x5eb: Call2 0x5dc

0x5ec: Stack[-1] = Stack[-4]
0x5ed: Pop(1)
0x5ee: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=624
0x5ef: Pop(0)
0x5f0: Pop(0); Push((bool) Stack[-2] == 0)
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f2: Push("Can't find diary parent with id: ") // @poff=629
0x5f3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5f4: @ Trace(Stack[-1])
0x5f5: Pop(1)
0x5f6: Stack[-9] = (bool) 0
0x5f7: Return(); Pop(6)

0x5f8: @@ AddChild(Stack[-8]); Obj=2 // @poff=697
0x5f9: Pop(0)
0x5fa: Push((int) 7)
0x5fb: @ SendWorldWndMessage(Stack[-1])
0x5fc: Pop(1)
0x5fd: @@ GetCategory(Stack[-1]); Obj=8 // @poff=706
0x5fe: Pop(0)
0x5ff: @ SetDiarySection(Stack[-1])
0x600: Pop(0)
0x601: Stack[-9] = (bool) 0
0x602: Return(); Pop(6)

0x603: Stack[-2] = 0
0x604: Stack[-3] = 0
0x605: PushEmpty(object, object, object, object)
0x606: @ GetMainOutdoorScene(Stack[-2])
0x607: Pop(0)
0x608: Pop(0); PushNull((bool) Stack[-2] == 0)
0x609: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60a: Push("Can't find main outdoor scene") // @poff=718
0x60b: @ Trace(Stack[-1])
0x60c: Pop(1)
0x60d: Stack[-1] = 0
0x60e: Stack[-1] = Stack[-5]
0x60f: Return(); Pop(4)

0x610: @@ GetMap(Stack[-1]); Obj=2 // @poff=778
0x611: Pop(0)
0x612: Stack[-1] = Stack[-5]
0x613: Return(); Pop(4)

0x614: Stack[-1] = 0
0x615: Stack[-2] = 0
0x616: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x617: @ GetMainOutdoorScene(Stack[-2])
0x618: Pop(0)
0x619: Pop(0); PushNull((bool) Stack[-2] == 0)
0x61a: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61b: Push("Can't find main outdoor scene") // @poff=718
0x61c: @ Trace(Stack[-1])
0x61d: Pop(1)
0x61e: Return(); Pop(8)

0x61f: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=785
0x620: Pop(0)
0x621: Pop(0); Push((bool) Stack[-1] == 0)
0x622: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x623: Push("Warning: outdoor scene locator ") // @poff=796
0x624: Pop(1); Push(Stack[-1] + Stack[-11]);
0x625: Push(" doesnt exist") // @poff=860
0x626: Pop(2); Push(Stack[-2] + Stack[-1]);
0x627: @ Trace(Stack[-1])
0x628: Pop(1)
0x629: @@ GetMap(Stack[-11]); Obj=2 // @poff=778
0x62a: Pop(0)
0x62b: Pop(0); PushNull((bool) Stack[-11] == 0)
0x62c: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62d: Push("Can't find map") // @poff=888
0x62e: @ Trace(Stack[-1])
0x62f: Pop(1)
0x630: Return(); Pop(8)

0x631: Push(CvectorIndex(Stack[-4], 0))
0x632: Push(CvectorIndex(Stack[-5], 2))
0x633: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=918
0x634: Pop(2)
0x635: Return(); Pop(8)

0x636: Stack[-2] = 0
0x637: PushEmpty(int, int)
0x638: Push("branch") // @poff=931
0x639: @ GetVariable(Stack[-1], Stack[-2])
0x63a: Pop(1)
0x63b: Push((int) 0)
0x63c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63e: Stack[-3] = (int) 1
0x63f: Return(); Pop(2)

0x640: GOTO 0x646

0x641: Push((int) 1)
0x642: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x644: Stack[-3] = (int) 2
0x645: Return(); Pop(2)

0x646: Stack[-3] = (int) 3
0x647: Return(); Pop(2)

