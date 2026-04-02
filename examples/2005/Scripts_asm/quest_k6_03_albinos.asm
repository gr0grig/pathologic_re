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
	W:quest_k6_03
	W:abinos_unload
	W:player
	W:head
	A:RemoveStationaryActor
	W:pt_k6q03_albinos_path
	A:GetLocator
	W:albinos_retreated
	A:GetPosition
	W:Can't retreat, distance: 
	W:fdie
	W:bdie
	W:GetScriptProperty
	W:Owner
	A:HasScriptProperty
	A:GetScriptProperty
	W:@GetEyesHeight
	A:GetEyesHeight
	W:fire
	W:bullet
	W:phys
	W:HasProperty
	A:HasProperty
	A:GetProperty
	A:SetProperty
	W:health
	W:armor
	W:armor_
	W:fhit
	W:bhit
	W:hit_react
	W:1
	W:2
	A:add
	A:size
	A:get
	W:scripted
	W:blood_dir.xml
	W:reputation
	W:ui/NPC_Black.png
	W:ui/NPC_Black_b.png
	W:completed
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000710075006500730074005f006b0036005f003000330000006100620069006e006f0073005f0075006e006c006f0061006400000070006c00610079006500720000006800650061006400000052656d6f766553746174696f6e6172794163746f7200700074005f006b0036007100300033005f0061006c00620069006e006f0073005f00700061007400680000004765744c6f6361746f720061006c00620069006e006f0073005f007200650074007200650061007400650064000000476574506f736974696f6e00430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a00200000006600640069006500000062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740066006900720065000000620075006c006c0065007400000070006800790073000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f7065727479006800650061006c00740068000000610072006d006f0072000000610072006d006f0072005f00000066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c000000720065007000750074006100740069006f006e000000750069002f004e00500043005f0042006c00610063006b002e0070006e0067000000750069002f004e00500043005f0042006c00610063006b005f0062002e0070006e006700000063006f006d0070006c0065007400650064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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
	Sleep (1 args)
	Hold (0 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetScene (1 args)
	GetVariable (2 args)
	MovePoint (3 args)
	Rotate (3 args)
	Stop (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	FindDirLength (3 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsPlayerActor (2 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	ReportHit (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x250
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x186 Vars = (object)
		EVENT_17 Op = 0x198 Vars = (object)
		EVENT_41 Op = 0x19a Vars = (object)
		EVENT_6 Op = 0x1a3 Vars = ()
		EVENT_7 Op = 0x1d5 Vars = (int)
	GTASK_3 Vars = (bool, int) Params = 0
		EVENT_17 Op = 0x26b Vars = (object)
		EVENT_41 Op = 0x26d Vars = (object)
		EVENT_6 Op = 0x276 Vars = ()
	GTASK_4 Vars = (object, cvector, bool) Params = 2
		EVENT_6 Op = 0x2c7 Vars = ()
		EVENT_7 Op = 0x2cf Vars = (int)
		EVENT_41 Op = 0x37e Vars = (object)
	GTASK_5  Params = 1
		EVENT_22 Op = 0x415 Vars = (object, int, float, float)
		EVENT_16 Op = 0x417 Vars = (object, string)
		EVENT_41 Op = 0x419 Vars = (object)

Events:
EVENT_22 Op = 0x6cf Vars = (object, int, float, float)
EVENT_43 Op = 0x6d7 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x6e1 Vars = (object, string)
EVENT_41 Op = 0x6ee Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x530

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x63c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x63a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x63e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x640

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x69c

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
0x41: Call2 0x574

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
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x65c

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x89

0x58: Pop(1)
0x59: Push((int) 526744)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 528787)
0x5f: Push((int) 30200)
0x60: Push((int) 30199)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: Push((int) 528791)
0x64: Push((int) 30200)
0x65: Push((int) 30203)
0x66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x642

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x585

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all") // @poff=138
0x7b: Push("idle") // @poff=146
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all") // @poff=138
0x84: Push("idle") // @poff=146
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x642

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-3] = Stack[-2]
0x95: Push("") // @poff=102
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x58c

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x59d

0xa4: Pop(0)
0xa5: Push((int) 28021)
0xa6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x65c

0xac: Pop(2)
0xad: PushEmpty(string)
0xae: Stack[-1] = "Neutral" // @poff=89
0xaf: Call2 0x89

0xb0: Pop(1)
0xb1: Push((int) 526744)
0xb2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb3: Pop(1)
0xb4: @@@ ClearReplies(); Obj=0 // @poff=116
0xb5: Pop(0)
0xb6: Push((int) 528787)
0xb7: Push((int) 30200)
0xb8: Push((int) 30199)
0xb9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xba: Pop(3)
0xbb: Push((int) 528791)
0xbc: Push((int) 30200)
0xbd: Push((int) 30203)
0xbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Push((int) 30200)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral" // @poff=89
0xc6: Call2 0x89

0xc7: Pop(1)
0xc8: Push((int) 528788)
0xc9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xca: Pop(1)
0xcb: @@@ ClearReplies(); Obj=0 // @poff=116
0xcc: Pop(0)
0xcd: Push((int) 528789)
0xce: Push((int) 30202)
0xcf: Push((int) 30201)
0xd0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd1: Pop(3)
0xd2: Push((int) 541036)
0xd3: Push((int) 30202)
0xd4: Push((int) 43130)
0xd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: Push((int) 30202)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral" // @poff=89
0xdd: Call2 0x89

0xde: Pop(1)
0xdf: Push((int) 528790)
0xe0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe1: Pop(1)
0xe2: @@@ ClearReplies(); Obj=0 // @poff=116
0xe3: Pop(0)
0xe4: Push((int) 526745)
0xe5: Push((int) 28023)
0xe6: Push((int) 28022)
0xe7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe8: Pop(3)
0xe9: Push((int) 526752)
0xea: Push((int) 28030)
0xeb: Push((int) 28029)
0xec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 28030)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral" // @poff=89
0xf4: Call2 0x89

0xf5: Pop(1)
0xf6: Push((int) 526753)
0xf7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf8: Pop(1)
0xf9: @@@ ClearReplies(); Obj=0 // @poff=116
0xfa: Pop(0)
0xfb: Push((int) 526754)
0xfc: Push((int) -1)
0xfd: Push((int) 28031)
0xfe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xff: Pop(3)
0x100: Push((int) 528786)
0x101: Push((int) -1)
0x102: Push((int) 30198)
0x103: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 28023)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral" // @poff=89
0x10b: Call2 0x89

0x10c: Pop(1)
0x10d: Push((int) 526746)
0x10e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10f: Pop(1)
0x110: @@@ ClearReplies(); Obj=0 // @poff=116
0x111: Pop(0)
0x112: Push((int) 528792)
0x113: Push((int) 30206)
0x114: Push((int) 30205)
0x115: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x116: Pop(3)
0x117: Push((int) 541037)
0x118: Push((int) 43133)
0x119: Push((int) 43132)
0x11a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Push((int) 43133)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral" // @poff=89
0x122: Call2 0x89

0x123: Pop(1)
0x124: Push((int) 541038)
0x125: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x126: Pop(1)
0x127: @@@ ClearReplies(); Obj=0 // @poff=116
0x128: Pop(0)
0x129: Push((int) 541039)
0x12a: Push((int) 30206)
0x12b: Push((int) 43134)
0x12c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12d: Pop(3)
0x12e: Push((int) 541040)
0x12f: Push((int) 30206)
0x130: Push((int) 43135)
0x131: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x132: Pop(3)
0x133: Return(); Pop(0)

0x134: Push((int) 30206)
0x135: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x137: PushEmpty(string)
0x138: Stack[-1] = "Neutral" // @poff=89
0x139: Call2 0x89

0x13a: Pop(1)
0x13b: Push((int) 528793)
0x13c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x13d: Pop(1)
0x13e: @@@ ClearReplies(); Obj=0 // @poff=116
0x13f: Pop(0)
0x140: Push((int) 526747)
0x141: Push((int) 28025)
0x142: Push((int) 28024)
0x143: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x144: Pop(3)
0x145: Return(); Pop(0)

0x146: Push((int) 28025)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral" // @poff=89
0x14b: Call2 0x89

0x14c: Pop(1)
0x14d: Push((int) 526748)
0x14e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14f: Pop(1)
0x150: @@@ ClearReplies(); Obj=0 // @poff=116
0x151: Pop(0)
0x152: Push((int) 526749)
0x153: Push((int) 28027)
0x154: Push((int) 28026)
0x155: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 28027)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Neutral" // @poff=89
0x15d: Call2 0x89

0x15e: Pop(1)
0x15f: Push((int) 526750)
0x160: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x161: Pop(1)
0x162: @@@ ClearReplies(); Obj=0 // @poff=116
0x163: Pop(0)
0x164: Push((int) 526751)
0x165: Push((int) -1)
0x166: Push((int) 28028)
0x167: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x168: Pop(3)
0x169: Push((int) 528794)
0x16a: Push((int) -1)
0x16b: Push((int) 30207)
0x16c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x170: PushEmpty(bool)
0x171: Call2 0x642

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x174: @ lshStopAnimation()
0x175: Pop(0)
0x176: GOTO 0x179

0x177: @ StopAnimation()
0x178: Pop(0)
0x179: Return(); Pop(0)

0x17a: GOTO 0xa0

0x17b: Return(); Pop(0)

0x17c: PushEmpty(float, float)
0x17d: Stack[-2] = (int) 300
0x17e: Stack[-1] = (int) 100
0x17f: Call2 0x1ab

0x180: Pop(2)
0x181: Push((int) 3)
0x182: @ Sleep(Stack[-1])
0x183: Pop(1)
0x184: GOTO 0x17c

0x185: Return(); Pop(0)

0x186: PushEmpty()
0x187: PushEmpty()
0x188: Call2 0x1ec

0x189: Pop(0)
0x18a: PushEmpty(int, object)
0x18b: Stack[-3] = Stack[-1]
0x18c: Push(-2, 1); TaskCall(0)
0x18d: Call2 0x0

0x18e: Pop(-2, 1); TaskReturn
0x18f: Pop(2)
0x190: PushEmpty(object, bool)
0x191: Stack[-3] = Stack[-2]
0x192: Stack[-1] = (bool) 0
0x193: Push(-2, 3); TaskCall(4)
0x194: Call2 0x2bb

0x195: Pop(-2, 3); TaskReturn
0x196: Pop(2)
0x197: Return(); Pop(0)

0x198: PushEmpty()
0x199: Return(); Pop(0)

0x19a: PushEmpty()
0x19b: PushEmpty()
0x19c: Call2 0x1ec

0x19d: Pop(0)
0x19e: PushEmpty(object)
0x19f: Stack[-2] = Stack[-1]
0x1a0: Call2 0x6ee

0x1a1: Pop(1)
0x1a2: Return(); Pop(0)

0x1a3: PushEmpty(bool, string, string)
0x1a4: Stack[-2] = "quest_k6_03" // @poff=156
0x1a5: Stack[-1] = "abinos_unload" // @poff=180
0x1a6: Call2 0x62e

0x1a7: Pop(3)
0x1a8: @ Hold()
0x1a9: Pop(0)
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty()
0x1ac: PushEmpty(bool)
0x1ad: Call2 0x52b

0x1ae: Pop(0)
0x1af: Pop(1); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Return(); Pop(0)

0x1b2: Push("player") // @poff=208
0x1b3: @ FindActor(Stack[-4]T, Stack[-1])
0x1b4: Pop(1)
0x1b5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1b7: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1b8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1b9: Push((int) 10)
0x1ba: Push((float)1.0)
0x1bb: @ SetTimer(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: PushEmpty()
0x1be: Call2 0x1fa

0x1bf: Pop(0)
0x1c0: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c2: Push((int) 10)
0x1c3: @ KillTimer(Stack[-1])
0x1c4: Pop(1)
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty(float, float)
0x1c7: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c9: Stack[-3] = (bool) 0
0x1ca: Return(); Pop(2)

0x1cb: PushEmpty(float, object)
0x1cc: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1cd: Call2 0x435

0x1ce: Pop(1)
0x1cf: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1d0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d2: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1d3: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1d4: Return(); Pop(2)

0x1d5: PushEmpty()
0x1d6: Push((int) 10)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d9: PushEmpty(bool)
0x1da: Call2 0x1c6

0x1db: Pop(0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1dd: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: PushEmpty(object)
0x1e0: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e1: Call2 0x592

0x1e2: Pop(1)
0x1e3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1e4: GOTO 0x1eb

0x1e5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e7: Push("head") // @poff=222
0x1e8: @ UnlookAsync(Stack[-1])
0x1e9: Pop(1)
0x1ea: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1eb: Return(); Pop(0)

0x1ec: PushEmpty()
0x1ed: Call2 0x24b

0x1ee: Pop(0)
0x1ef: Push((int) 10)
0x1f0: @ KillTimer(Stack[-1])
0x1f1: Pop(1)
0x1f2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f4: Push("head") // @poff=222
0x1f5: @ UnlookAsync(Stack[-1])
0x1f6: Pop(1)
0x1f7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1fb: @ WaitForAnimEnd()
0x1fc: Pop(0)
0x1fd: PushEmpty(bool)
0x1fe: Call2 0x52b

0x1ff: Pop(0)
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: Return(); Pop(14)

0x203: PushEmpty(int)
0x204: Call2 0x64b

0x205: Stack[-1] = Stack[-8]
0x206: Pop(1)
0x207: Stack[-6] = (int) 0
0x208: PushEmpty(bool)
0x209: Stack[-1] = (bool) 0
0x20a: Push((int) 5)
0x20b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20d: PushEmpty(bool)
0x20e: Call2 0x52b

0x20f: Pop(0)
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Stack[-1] = (bool) 1
0x212: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x213: Push((int) 3)
0x214: @ irand(Stack[-6], Stack[-1])
0x215: Pop(1)
0x216: Push((int) 0)
0x217: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x219: Push(Stack[-7])
0x21a: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x21b: @ irand(Stack[-4], Stack[-7])
0x21c: Pop(0)
0x21d: Push("all") // @poff=138
0x21e: PushEmpty(string, int)
0x21f: Stack[-7] = Stack[-1]
0x220: Call2 0x644

0x221: Pop(1)
0x222: @ PlayAnimation(Stack[-2], Stack[-1])
0x223: Pop(2)
0x224: @ WaitForAnimEnd(Stack[-3])
0x225: Pop(0)
0x226: Pop(0); Push((bool) Stack[-3] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: GOTO 0x246

0x229: GOTO 0x23b

0x22a: Push((int) 1)
0x22b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x22d: Push((int) 4)
0x22e: @ rand(Stack[-3], Stack[-1])
0x22f: Pop(1)
0x230: Push((int) 1)
0x231: Pop(1); Push(Stack[-3] + Stack[-1]);
0x232: @ Sleep(Stack[-1], Stack[-2])
0x233: Pop(1)
0x234: Pop(0); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: GOTO 0x246

0x237: GOTO 0x23b

0x238: Push(Stack[-6])
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: GOTO 0x246

0x23b: PushEmpty(bool)
0x23c: Call2 0x249

0x23d: Pop(0)
0x23e: Pop(1); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: GOTO 0x246

0x241: @ ResetAAS()
0x242: Pop(0)
0x243: Push((int) 1)
0x244: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x245: GOTO 0x208

0x246: @ ResetAAS()
0x247: Pop(0)
0x248: Return(); Pop(14)

0x249: Stack[-1] = (bool) 1
0x24a: Return(); Pop(0)

0x24b: @ StopAnimation()
0x24c: Pop(0)
0x24d: @ StopGroup0()
0x24e: Pop(0)
0x24f: Return(); Pop(0)

0x250: PushEmpty(object, object)
0x251: @ GetScene(Stack[-1])
0x252: Pop(0)
0x253: PushEmpty(object)
0x254: Call2 0x5cd

0x255: Pop(0)
0x256: @@ RemoveStationaryActor(Stack[-1]); Obj=2 // @poff=232
0x257: Pop(1)
0x258: Push("pt_k6q03_albinos_path") // @poff=254
0x259: @ GetVariable(Stack[-1], Stack[-1]T)
0x25a: Pop(1)
0x25b: Push((int) -1)
0x25c: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] != Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25e: PushEmpty(bool, string, int, bool)
0x25f: Stack[-3] = "pt_k6q03_albinos_path" // @poff=254
0x260: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x261: Stack[-1] = (bool) 1
0x262: Call2 0x27e

0x263: Pop(4)
0x264: PushEmpty()
0x265: Push(-0, 5); TaskCall(2)
0x266: Call2 0x17c

0x267: Pop(-0, 5); TaskReturn
0x268: Pop(0)
0x269: Return(); Pop(2)

0x26a: Stack[-1] = 0
0x26b: PushEmpty()
0x26c: Return(); Pop(0)

0x26d: PushEmpty()
0x26e: PushEmpty()
0x26f: Call2 0x2b3

0x270: Pop(0)
0x271: PushEmpty(object)
0x272: Stack[-2] = Stack[-1]
0x273: Call2 0x6ee

0x274: Pop(1)
0x275: Return(); Pop(0)

0x276: PushEmpty(bool, string, string)
0x277: Stack[-2] = "quest_k6_03" // @poff=156
0x278: Stack[-1] = "abinos_unload" // @poff=180
0x279: Call2 0x62e

0x27a: Pop(3)
0x27b: @ Hold()
0x27c: Pop(0)
0x27d: Return(); Pop(0)

0x27e: PushEmpty(object, cvector, bool, bool, cvector, cvector, bool, object, cvector, bool, bool, cvector, cvector, bool)
0x27f: @ GetScene(Stack[-7])
0x280: Pop(0)
0x281: Push((int) 1)
0x282: Pop(1); Push(Stack[-17] + Stack[-1]);
0x283: Pop(1); Push(Stack[-18] + Stack[-1]);
0x284: @@ GetLocator(Stack[-1], Stack[-5], Stack[-4], Stack[-3]); Obj=8 // @poff=298
0x285: Pop(1)
0x286: Pop(0); Push((bool) Stack[-4] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: GOTO 0x29c

0x289: Stack[-2] = Stack[-6]
0x28a: @ MovePoint(Stack[-3], Stack[-15], Stack[-5])
0x28b: Pop(0)
0x28c: Push(Stack[-5])
0x28d: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x28e: PushEmpty(int, cvector, cvector)
0x28f: Stack[-19] = Stack[-3]
0x290: Stack[-6] = Stack[-2]
0x291: Stack[-5] = Stack[-1]
0x292: Call2 0x2b9

0x293: Pop(3)
0x294: Push((int) 1)
0x295: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x296: GOTO 0x29b

0x297: Push( Stack[0 + Tasks[-1].StackPointer] )
0x298: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x299: Stack[-18] = (bool) 0
0x29a: Return(); Pop(14)

0x29b: GOTO 0x281

0x29c: @ WaitForAnimEnd(Stack[-5])
0x29d: Pop(0)
0x29e: Pop(0); Push((bool) Stack[-5] == 0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a2: Stack[-18] = (bool) 0
0x2a3: Return(); Pop(14)

0x2a4: Push(CvectorIndex(Stack[-6], 0))
0x2a5: Push(CvectorIndex(Stack[-7], 2))
0x2a6: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2a7: Pop(2)
0x2a8: Push(Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: GOTO 0x2b0

0x2ab: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2ac: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ad: Stack[-18] = (bool) 0
0x2ae: Return(); Pop(14)

0x2af: GOTO 0x2a4

0x2b0: Stack[-18] = (bool) 1
0x2b1: Return(); Pop(14)

0x2b2: Stack[-7] = 0
0x2b3: @ Stop()
0x2b4: Pop(0)
0x2b5: @ StopAnimation()
0x2b6: Pop(0)
0x2b7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty()
0x2ba: Return(); Pop(0)

0x2bb: PushEmpty()
0x2bc: Push(Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2be: Push((int) 100)
0x2bf: Push((float)1.0)
0x2c0: @ SetTimer(Stack[-2], Stack[-1])
0x2c1: Pop(2)
0x2c2: PushEmpty(object)
0x2c3: Stack[-3] = Stack[-1]
0x2c4: Call2 0x2fa

0x2c5: Pop(1)
0x2c6: Return(); Pop(0)

0x2c7: PushEmpty(bool, string, string)
0x2c8: Stack[-2] = "quest_k6_03" // @poff=156
0x2c9: Stack[-1] = "albinos_retreated" // @poff=309
0x2ca: Call2 0x62e

0x2cb: Pop(3)
0x2cc: @ Hold()
0x2cd: Pop(0)
0x2ce: Return(); Pop(0)

0x2cf: PushEmpty()
0x2d0: Push((int) 100)
0x2d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d3: PushEmpty()
0x2d4: Call2 0x6ad

0x2d5: Pop(0)
0x2d6: GOTO 0x2db

0x2d7: PushEmpty(int)
0x2d8: Stack[-2] = Stack[-1]
0x2d9: Call2 0x343

0x2da: Pop(1)
0x2db: Return(); Pop(0)

0x2dc: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x2dd: @ GetPosition(Stack[-6])
0x2de: Pop(0)
0x2df: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=345
0x2e0: Pop(0)
0x2e1: @ GetDirection(Stack[-4])
0x2e2: Pop(0)
0x2e3: PushEmpty(cvector, cvector)
0x2e4: PushEmpty(cvector, cvector)
0x2e5: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x2e6: Call2 0x5d3

0x2e7: Pop(1)
0x2e8: Push((float)0.75)
0x2e9: Pop(1); Push(Stack[-8] * Stack[-1]);
0x2ea: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x2eb: Call2 0x5d3

0x2ec: Stack[-2] = Stack[-5]
0x2ed: Pop(2)
0x2ee: Push((int) 32)
0x2ef: Push((float)7000.0)
0x2f0: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x2f1: Pop(2)
0x2f2: Push((int) 100)
0x2f3: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x2f4: Push((int) 0)
0x2f5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: Stack[-1] = (int) 0
0x2f8: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x2f9: Return(); Pop(12)

0x2fa: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x2fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x2fc: PushEmpty(cvector, float)
0x2fd: Stack[-1] = (float) 1.7453293800354004
0x2fe: Call2 0x2dc

0x2ff: Stack[-2] = Stack[-7]
0x300: Pop(2)
0x301: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x302: Push((float)2500.0)
0x303: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x305: PushEmpty(cvector, float)
0x306: Stack[-1] = (float) 2.6179938316345215
0x307: Call2 0x2dc

0x308: Stack[-2] = Stack[-7]
0x309: Pop(2)
0x30a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x30b: Push((float)2500.0)
0x30c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x30e: Push("Can't retreat, distance: ") // @poff=357
0x30f: Pop(0); Push(Sqrt(Stack[-5]))
0x310: Pop(2); Push(Stack[-2] + Stack[-1]);
0x311: @ Trace(Stack[-1])
0x312: Pop(1)
0x313: Push((float)0.5)
0x314: @ Sleep(Stack[-1])
0x315: Pop(1)
0x316: Return(); Pop(10)

0x317: Push(CvectorIndex(Stack[-5], 0))
0x318: Push(CvectorIndex(Stack[-6], 2))
0x319: @ Rotate(Stack[-2], Stack[-1])
0x31a: Pop(2)
0x31b: PushEmpty(cvector)
0x31c: Call2 0x429

0x31d: Pop(0)
0x31e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x31f: Push((int) 120)
0x320: Push((float)0.5)
0x321: @ SetTimer(Stack[-2], Stack[-1])
0x322: Pop(2)
0x323: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x324: Push((int) 1)
0x325: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x326: Pop(1)
0x327: Push(Stack[-3])
0x328: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x329: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: GOTO 0x342

0x32c: GOTO 0x340

0x32d: PushEmpty(cvector, float)
0x32e: Stack[-1] = (float) 2.6179938316345215
0x32f: Call2 0x2dc

0x330: Stack[-2] = Stack[-4]
0x331: Pop(2)
0x332: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x333: Push((float)2500.0)
0x334: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x336: PushEmpty(cvector)
0x337: Call2 0x429

0x338: Pop(0)
0x339: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x33a: Push((int) 120)
0x33b: Push((float)0.5)
0x33c: @ SetTimer(Stack[-2], Stack[-1])
0x33d: Pop(2)
0x33e: GOTO 0x340

0x33f: GOTO 0x342

0x340: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x341: IF (Stack[-1] == 1) GOTO 0x324; Pop(1)

0x342: Return(); Pop(10)

0x343: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x344: Push((int) 120)
0x345: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: Return(); Pop(8)

0x348: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34a: @ Stop()
0x34b: Pop(0)
0x34c: Push((int) 1)
0x34d: @ KillTimer(Stack[-1])
0x34e: Pop(1)
0x34f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x350: GOTO 0x376

0x351: @ GetDirection(Stack[-4])
0x352: Pop(0)
0x353: Push((float)7000.0)
0x354: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x355: Pop(1)
0x356: PushEmpty(cvector, float)
0x357: Stack[-1] = (float) 1.7453293800354004
0x358: Call2 0x2dc

0x359: Stack[-2] = Stack[-4]
0x35a: Pop(2)
0x35b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x35c: PushEmpty(bool)
0x35d: Stack[-1] = (bool) 0
0x35e: Push((float)2500.0)
0x35f: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x361: PushEmpty(bool)
0x362: Stack[-1] = (bool) 1
0x363: Pop(0); Push(Stack[-5] * Stack[-5]);
0x364: Push((float)2.25)
0x365: Pop(2); Push(Stack[-2] * Stack[-1]);
0x366: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x367: IF (Stack[-1] == 1) GOTO 0x36d; Pop(1)

0x368: PushEmpty(bool)
0x369: Call2 0x387

0x36a: Pop(0)
0x36b: IF (Stack[-1] == 1) GOTO 0x36d; Pop(1)

0x36c: Stack[-1] = (bool) 0
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: Stack[-1] = (bool) 1
0x36f: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x370: @ Stop()
0x371: Pop(0)
0x372: PushEmpty(cvector)
0x373: Call2 0x429

0x374: Pop(0)
0x375: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x376: Return(); Pop(8)

0x377: @ Stop()
0x378: Pop(0)
0x379: Push((int) 120)
0x37a: @ KillTimer(Stack[-1])
0x37b: Pop(1)
0x37c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x37d: Return(); Pop(0)

0x37e: PushEmpty()
0x37f: PushEmpty()
0x380: Call2 0x377

0x381: Pop(0)
0x382: PushEmpty(object)
0x383: Stack[-2] = Stack[-1]
0x384: Call2 0x6ee

0x385: Pop(1)
0x386: Return(); Pop(0)

0x387: PushEmpty(cvector, cvector, cvector, cvector)
0x388: @ GetDirection(Stack[-2])
0x389: Pop(0)
0x38a: PushEmpty(cvector, object)
0x38b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38c: Call2 0x42e

0x38d: Stack[-2] = Stack[-3]
0x38e: Pop(2)
0x38f: PushEmpty(float, cvector, cvector)
0x390: Stack[-5] = Stack[-2]
0x391: Stack[-4] = Stack[-1]
0x392: Call2 0x5ef

0x393: Pop(2)
0x394: Push((float)-0.3420201241970062)
0x395: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x396: Return(); Pop(4)

0x397: PushEmpty()
0x398: PushEmpty(object)
0x399: Stack[-2] = Stack[-1]
0x39a: Call2 0x3a0

0x39b: Pop(1)
0x39c: @ Hold()
0x39d: Pop(0)
0x39e: GOTO 0x39c

0x39f: Return(); Pop(0)

0x3a0: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x3a1: Pop(0); PushNull((bool) Stack[-21] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a3: PushEmpty(string)
0x3a4: Stack[-1] = "fdie" // @poff=409
0x3a5: Call2 0x3fb

0x3a6: Pop(1)
0x3a7: GOTO 0x3fa

0x3a8: @@ GetPosition(Stack[-10]); Obj=21 // @poff=345
0x3a9: Pop(0)
0x3aa: @ GetPosition(Stack[-9])
0x3ab: Pop(0)
0x3ac: @ GetDirection(Stack[-8])
0x3ad: Pop(0)
0x3ae: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3af: Push(CvectorIndex(Stack[-7], 0))
0x3b0: Push(CvectorIndex(Stack[-9], 0))
0x3b1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3b2: Push(CvectorIndex(Stack[-8], 2))
0x3b3: Push(CvectorIndex(Stack[-10], 2))
0x3b4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3b5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b6: Push((int) 0)
0x3b7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b9: Stack[-6] = "fdie" // @poff=409
0x3ba: GOTO 0x3bc

0x3bb: Stack[-6] = "bdie" // @poff=419
0x3bc: @ RemoveRTEnvelope()
0x3bd: Pop(0)
0x3be: @ SetDeathState()
0x3bf: Pop(0)
0x3c0: @ Stop()
0x3c1: Pop(0)
0x3c2: @ StopAsync()
0x3c3: Pop(0)
0x3c4: Stack[-21] = Stack[-5]
0x3c5: Push("GetScriptProperty") // @poff=429
0x3c6: Push((int) 2)
0x3c7: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3c9: Push("Owner") // @poff=465
0x3ca: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=477
0x3cb: Pop(1)
0x3cc: Push(Stack[-4])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3ce: Push("Owner") // @poff=465
0x3cf: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=495
0x3d0: Pop(1)
0x3d1: Pop(0); PushNull((bool) Stack[-5] == 0)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: Stack[-21] = Stack[-5]
0x3d4: Push("@GetEyesHeight") // @poff=513
0x3d5: Push((int) 1)
0x3d6: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x3d7: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3d8: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=543
0x3d9: Pop(0)
0x3da: Stack[-1] = [0.0, 0.0, 0.0]
0x3db: Push(CvectorIndex(Stack[-1], 1))
0x3dc: Stack[-3] = Stack[-1]
0x3dd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3de: Push("head") // @poff=222
0x3df: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x3e0: Pop(1)
0x3e1: Stack[-3] = (bool) 1
0x3e2: GOTO 0x3e4

0x3e3: Stack[-3] = (bool) 0
0x3e4: PushEmpty(string)
0x3e5: Stack[-7] = Stack[-1]
0x3e6: Call2 0x5a4

0x3e7: Pop(1)
0x3e8: Push("all") // @poff=138
0x3e9: @ PlayAnimation(Stack[-1], Stack[-7])
0x3ea: Pop(1)
0x3eb: @ WaitForAnimEnd()
0x3ec: Pop(0)
0x3ed: Push(Stack[-3])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ef: @ StopAsync()
0x3f0: Pop(0)
0x3f1: Push("head") // @poff=222
0x3f2: @ UnlookAsync(Stack[-1])
0x3f3: Pop(1)
0x3f4: Push("all") // @poff=138
0x3f5: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x3f6: Pop(1)
0x3f7: @ RemoveEnvelope()
0x3f8: Pop(0)
0x3f9: Stack[-5] = 0
0x3fa: Return(); Pop(20)

0x3fb: PushEmpty()
0x3fc: @ RemoveRTEnvelope()
0x3fd: Pop(0)
0x3fe: @ SetDeathState()
0x3ff: Pop(0)
0x400: @ Stop()
0x401: Pop(0)
0x402: @ StopAsync()
0x403: Pop(0)
0x404: @ StopSecondaryAnimation()
0x405: Pop(0)
0x406: PushEmpty(string)
0x407: Stack[-2] = Stack[-1]
0x408: Call2 0x5a4

0x409: Pop(1)
0x40a: Push("all") // @poff=138
0x40b: @ PlayAnimation(Stack[-1], Stack[-2])
0x40c: Pop(1)
0x40d: @ WaitForAnimEnd()
0x40e: Pop(0)
0x40f: Push("all") // @poff=138
0x410: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x411: Pop(1)
0x412: @ RemoveEnvelope()
0x413: Pop(0)
0x414: Return(); Pop(0)

0x415: PushEmpty()
0x416: Return(); Pop(0)

0x417: PushEmpty()
0x418: Return(); Pop(0)

0x419: PushEmpty()
0x41a: Return(); Pop(0)

0x41b: PushEmpty()
0x41c: Push((int) 2)
0x41d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41f: Stack[-2] = "fire" // @poff=557
0x420: Return(); Pop(0)

0x421: GOTO 0x427

0x422: Push((int) 1)
0x423: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: Stack[-2] = "bullet" // @poff=567
0x426: Return(); Pop(0)

0x427: Stack[-2] = "phys" // @poff=581
0x428: Return(); Pop(0)

0x429: PushEmpty(cvector, cvector)
0x42a: @ GetPosition(Stack[-1])
0x42b: Pop(0)
0x42c: Stack[-1] = Stack[-3]
0x42d: Return(); Pop(2)

0x42e: PushEmpty(cvector, cvector, cvector, cvector)
0x42f: @ GetPosition(Stack[-2])
0x430: Pop(0)
0x431: @@ GetPosition(Stack[-1]); Obj=5 // @poff=345
0x432: Pop(0)
0x433: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x434: Return(); Pop(4)

0x435: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x436: @ GetPosition(Stack[-3])
0x437: Pop(0)
0x438: @@ GetPosition(Stack[-2]); Obj=7 // @poff=345
0x439: Pop(0)
0x43a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x43b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x43c: Return(); Pop(6)

0x43d: PushEmpty(bool, bool)
0x43e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x43f: Pop(0)
0x440: Stack[-1] = Stack[-4]
0x441: Return(); Pop(2)

0x442: PushEmpty(bool, bool)
0x443: Push("HasProperty") // @poff=591
0x444: Push((int) 2)
0x445: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x446: Pop(1); Push((bool) Stack[-1] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x448: Stack[-5] = (bool) 0
0x449: Return(); Pop(2)

0x44a: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=615
0x44b: Pop(0)
0x44c: Stack[-1] = Stack[-5]
0x44d: Return(); Pop(2)

0x44e: PushEmpty(float, float)
0x44f: PushEmpty(bool, object, string)
0x450: Stack[-10] = Stack[-2]
0x451: Stack[-9] = Stack[-1]
0x452: Call2 0x442

0x453: Pop(2)
0x454: Pop(1); Push((bool) Stack[-1] == 0)
0x455: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x456: Stack[-8] = (bool) 0
0x457: Return(); Pop(2)

0x458: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=627
0x459: Pop(0)
0x45a: PushEmpty(float, float, float, float)
0x45b: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x45c: Stack[-8] = Stack[-2]
0x45d: Stack[-7] = Stack[-1]
0x45e: Call2 0x5e4

0x45f: Pop(3)
0x460: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=639
0x461: Pop(1)
0x462: Stack[-8] = (bool) 1
0x463: Return(); Pop(2)

0x464: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x465: PushEmpty(bool, object, string)
0x466: Stack[-18] = Stack[-2]
0x467: Stack[-1] = "health" // @poff=651
0x468: Call2 0x442

0x469: Pop(2)
0x46a: Pop(1); Push((bool) Stack[-1] == 0)
0x46b: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46c: Stack[-16] = (float) 0.0
0x46d: Return(); Pop(12)

0x46e: PushEmpty(bool, object, string)
0x46f: Stack[-18] = Stack[-2]
0x470: Stack[-1] = "armor" // @poff=665
0x471: Call2 0x442

0x472: Pop(2)
0x473: Pop(1); Push((bool) Stack[-1] == 0)
0x474: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x475: Stack[-6] = (int) 0
0x476: GOTO 0x47a

0x477: Push("armor") // @poff=665
0x478: @@ GetProperty(Stack[-1], Stack[-7]); Obj=16 // @poff=627
0x479: Pop(1)
0x47a: Push("armor_") // @poff=677
0x47b: PushEmpty(string, int)
0x47c: Stack[-16] = Stack[-1]
0x47d: Call2 0x41b

0x47e: Pop(1)
0x47f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x480: PushEmpty(bool, object, string)
0x481: Stack[-18] = Stack[-2]
0x482: Stack[-8] = Stack[-1]
0x483: Call2 0x442

0x484: Pop(2)
0x485: Pop(1); Push((bool) Stack[-1] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-4] = (int) 0
0x488: GOTO 0x48b

0x489: @@ GetProperty(Stack[-5], Stack[-4]); Obj=15 // @poff=627
0x48a: Pop(0)
0x48b: PushEmpty(float, float, float)
0x48c: Pop(0); Push(Stack[-9] + Stack[-7]);
0x48d: Push((float)100.0)
0x48e: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x48f: Stack[-1] = (int) 1
0x490: Call2 0x5dd

0x491: Stack[-3] = Stack[-6]
0x492: Pop(3)
0x493: Push("health") // @poff=651
0x494: @@ GetProperty(Stack[-1], Stack[-3]); Obj=16 // @poff=627
0x495: Pop(1)
0x496: Push((int) 1)
0x497: Pop(1); Push(Stack[-1] - Stack[-4]);
0x498: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x499: Push("health") // @poff=651
0x49a: PushEmpty(float, float, float, float)
0x49b: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x49c: Stack[-2] = (int) 0
0x49d: Stack[-1] = (int) 1
0x49e: Call2 0x5e4

0x49f: Pop(3)
0x4a0: @@ SetProperty(Stack[-2], Stack[-1]); Obj=17 // @poff=639
0x4a1: Pop(2)
0x4a2: PushEmpty(bool, object)
0x4a3: Stack[-17] = Stack[-1]
0x4a4: Call2 0x43d

0x4a5: Pop(1)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a7: PushEmpty(float)
0x4a8: Stack[-1] = -Stack[-2]; Pop(0);
0x4a9: Call2 0x61a

0x4aa: Pop(1)
0x4ab: Stack[-1] = Stack[-16]
0x4ac: Return(); Pop(12)

0x4ad: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x4ae: Pop(0); PushNull((bool) Stack[-15] == 0)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4b0: Return(); Pop(14)

0x4b1: @ IsDead(Stack[-7])
0x4b2: Pop(0)
0x4b3: Push(Stack[-7])
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b5: Return(); Pop(14)

0x4b6: @ GetSecondaryAnimationType(Stack[-6])
0x4b7: Pop(0)
0x4b8: Push((int) 0)
0x4b9: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4bb: Return(); Pop(14)

0x4bc: @@ GetPosition(Stack[-5]); Obj=15 // @poff=345
0x4bd: Pop(0)
0x4be: @ GetPosition(Stack[-4])
0x4bf: Pop(0)
0x4c0: @ GetDirection(Stack[-3])
0x4c1: Pop(0)
0x4c2: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x4c3: Push(CvectorIndex(Stack[-2], 0))
0x4c4: Push(CvectorIndex(Stack[-4], 0))
0x4c5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c6: Push(CvectorIndex(Stack[-3], 2))
0x4c7: Push(CvectorIndex(Stack[-5], 2))
0x4c8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4ca: Push((int) 0)
0x4cb: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cd: Stack[-1] = "fhit" // @poff=691
0x4ce: GOTO 0x4d0

0x4cf: Stack[-1] = "bhit" // @poff=701
0x4d0: Push("hit_react") // @poff=711
0x4d1: Push("1") // @poff=731
0x4d2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4d3: Push("2") // @poff=735
0x4d4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4d5: Push((int) -10)
0x4d6: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(4)
0x4d8: Return(); Pop(14)

0x4d9: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x4da: PushEmpty(bool)
0x4db: Stack[-1] = (bool) 0
0x4dc: PushEmpty(bool)
0x4dd: Stack[-1] = (bool) 0
0x4de: Push(Stack[-23])
0x4df: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e0: Push((int) 4)
0x4e1: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e3: Stack[-1] = (bool) 1
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e5: Push((int) 5)
0x4e6: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x4e7: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e8: Stack[-1] = (bool) 1
0x4e9: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x4ea: PushEmpty(cvector, cvector)
0x4eb: PushEmpty(cvector, object)
0x4ec: Stack[-25] = Stack[-1]
0x4ed: Call2 0x42e

0x4ee: Stack[-2] = Stack[-3]
0x4ef: Pop(2)
0x4f0: Call2 0x5d3

0x4f1: Stack[-2] = Stack[-11]
0x4f2: Pop(2)
0x4f3: @ CreateVectorVector(Stack[-8])
0x4f4: Pop(0)
0x4f5: Stack[-7] = (int) 1
0x4f6: Push("hit") // @poff=693
0x4f7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4f8: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x4f9: Pop(1)
0x4fa: Pop(0); Push((bool) Stack[-6] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fc: GOTO 0x506

0x4fd: Pop(0); Push(Stack[-4] | Stack[-9]);
0x4fe: Push((float)0.7071067690849304)
0x4ff: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: @@ add(Stack[-5]); Obj=8 // @poff=739
0x502: Pop(0)
0x503: Push((int) 1)
0x504: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x505: GOTO 0x4f6

0x506: @@ size(Stack[-3]); Obj=8 // @poff=743
0x507: Pop(0)
0x508: Push(Stack[-3])
0x509: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x50a: @ irand(Stack[-2], Stack[-3])
0x50b: Pop(0)
0x50c: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=748
0x50d: Pop(0)
0x50e: PushEmpty(object, int, float, cvector, cvector)
0x50f: Stack[-26] = Stack[-5]
0x510: Stack[-25] = Stack[-4]
0x511: Stack[-24] = Stack[-3]
0x512: Stack[-6] = Stack[-2]
0x513: Stack[-1] = -Stack[-14]; Pop(0);
0x514: Call2 0x51d

0x515: Pop(5)
0x516: Return(); Pop(18)

0x517: Stack[-8] = 0
0x518: PushEmpty(object)
0x519: Stack[-22] = Stack[-1]
0x51a: Call2 0x4ad

0x51b: Pop(1)
0x51c: Return(); Pop(18)

0x51d: PushEmpty(object, object, object, object)
0x51e: @ GetScene(Stack[-2])
0x51f: Pop(0)
0x520: Push("scripted") // @poff=752
0x521: Push("blood_dir.xml") // @poff=770
0x522: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x523: Pop(2)
0x524: PushEmpty(object)
0x525: Stack[-10] = Stack[-1]
0x526: Call2 0x4ad

0x527: Pop(1)
0x528: Return(); Pop(4)

0x529: Stack[-1] = 0
0x52a: Stack[-2] = 0
0x52b: PushEmpty(bool, bool)
0x52c: @ IsLoaded(Stack[-1])
0x52d: Pop(0)
0x52e: Stack[-1] = Stack[-3]
0x52f: Return(); Pop(2)

0x530: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x531: @@ GetPosition(Stack[-8]); Obj=20 // @poff=345
0x532: Pop(0)
0x533: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=543
0x534: Pop(0)
0x535: Push(CvectorIndex(Stack[-8], 1))
0x536: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x537: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x538: @ GetPosition(Stack[-7])
0x539: Pop(0)
0x53a: @ GetEyesHeight(Stack[-9])
0x53b: Pop(0)
0x53c: Push(CvectorIndex(Stack[-7], 1))
0x53d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x53e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x53f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x540: Push(CvectorIndex(Stack[-6], 1))
0x541: Stack[-1] = (int) 0
0x542: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x543: Pop(0); Push(Stack[-6] | Stack[-6]);
0x544: Pop(1); Push(Sqrt(Stack[-1]))
0x545: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x546: Stack[-5] = -Stack[-6]; Pop(0);
0x547: Pop(0); Push(Stack[-6] * Stack[-19]);
0x548: PushEmpty(cvector, cvector)
0x549: Push([0.0, 1.0, 0.0])
0x54a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x54b: Call2 0x5d3

0x54c: Pop(1)
0x54d: Push((int) 25)
0x54e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x54f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x550: Push([0.0, 10.0, 0.0])
0x551: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x552: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x553: @ IsOverrideActive(Stack[-2])
0x554: Pop(0)
0x555: Push(Stack[-2])
0x556: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x557: Stack[-21] = (bool) 0
0x558: Return(); Pop(18)

0x559: @ StopWorld()
0x55a: Pop(0)
0x55b: @ CameraTransit(Stack[-3], Stack[-5])
0x55c: Pop(0)
0x55d: Push(CvectorIndex(Stack[-4], 0))
0x55e: Push(CvectorIndex(Stack[-5], 2))
0x55f: @ Rotate(Stack[-2], Stack[-1])
0x560: Pop(2)
0x561: PushEmpty(bool)
0x562: Call2 0x642

0x563: Pop(0)
0x564: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x565: GOTO 0x56e

0x566: Push("head") // @poff=222
0x567: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x568: Pop(1)
0x569: Push(Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56b: Push("head") // @poff=222
0x56c: @ LookAsyncCamera(Stack[-1])
0x56d: Pop(1)
0x56e: @ CameraWaitForPlayFinish()
0x56f: Pop(0)
0x570: @ ResumeWorld()
0x571: Pop(0)
0x572: Stack[-21] = (bool) 1
0x573: Return(); Pop(18)

0x574: PushEmpty(bool, bool)
0x575: @ CameraSwitchToNormal()
0x576: Pop(0)
0x577: PushEmpty(bool)
0x578: Call2 0x642

0x579: Pop(0)
0x57a: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57b: GOTO 0x584

0x57c: Push("head") // @poff=222
0x57d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x57e: Pop(1)
0x57f: Push(Stack[-1])
0x580: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x581: Push("head") // @poff=222
0x582: @ UnlookAsync(Stack[-1])
0x583: Pop(1)
0x584: Return(); Pop(2)

0x585: PushEmpty(float, float, float, float)
0x586: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x587: Pop(0)
0x588: Push((bool) 0)
0x589: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x58a: Pop(1)
0x58b: Return(); Pop(4)

0x58c: PushEmpty(float, float, float, float)
0x58d: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x58e: Pop(0)
0x58f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x590: Pop(0)
0x591: Return(); Pop(4)

0x592: PushEmpty(float, cvector, float, cvector)
0x593: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=543
0x594: Pop(0)
0x595: Stack[-1] = [0.0, 0.0, 0.0]
0x596: Push(CvectorIndex(Stack[-1], 1))
0x597: Stack[-3] = Stack[-1]
0x598: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x599: Push("head") // @poff=222
0x59a: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x59b: Pop(1)
0x59c: Return(); Pop(4)

0x59d: PushEmpty(bool)
0x59e: Call2 0x642

0x59f: Pop(0)
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a1: @ lshStopSpeech()
0x5a2: Pop(0)
0x5a3: Return(); Pop(0)

0x5a4: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x5a5: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x5a6: Pop(0)
0x5a7: Pop(0); Push((bool) Stack[-8] == 0)
0x5a8: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5a9: Stack[-7] = (int) 0
0x5aa: Push((int) 1)
0x5ab: Pop(1); Push(Stack[-8] + Stack[-1]);
0x5ac: Pop(1); Push(Stack[-18] + Stack[-1]);
0x5ad: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x5ae: Pop(1)
0x5af: Pop(0); Push((bool) Stack[-6] == 0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b1: GOTO 0x5b5

0x5b2: Push((int) 1)
0x5b3: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5b4: GOTO 0x5aa

0x5b5: Pop(0); Push((bool) Stack[-7] == 0)
0x5b6: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b7: Return(); Pop(16)

0x5b8: @ irand(Stack[-5], Stack[-7])
0x5b9: Pop(0)
0x5ba: Push((int) 1)
0x5bb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5bc: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x5bd: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x5be: Pop(0)
0x5bf: Push(Stack[-4])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5c1: @ GetEyesHeight(Stack[-3])
0x5c2: Pop(0)
0x5c3: @ GetDirection(Stack[-2])
0x5c4: Pop(0)
0x5c5: Push((int) 50)
0x5c6: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x5c7: Push(CvectorIndex(Stack[-1], 1))
0x5c8: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x5c9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5ca: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x5cb: Pop(0)
0x5cc: Return(); Pop(16)

0x5cd: PushEmpty(object, object)
0x5ce: @ self(Stack[-1])
0x5cf: Pop(0)
0x5d0: Stack[-1] = Stack[-3]
0x5d1: Return(); Pop(2)

0x5d2: Stack[-1] = 0
0x5d3: PushEmpty(float, float)
0x5d4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5d5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5d6: Push((float)9.999999974752427e-07)
0x5d7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d9: Stack[-4] = [0.0, 0.0, 0.0]
0x5da: Return(); Pop(2)

0x5db: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5dc: Return(); Pop(2)

0x5dd: PushEmpty()
0x5de: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5df: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e0: Stack[-2] = Stack[-3]
0x5e1: GOTO 0x5e3

0x5e2: Stack[-1] = Stack[-3]
0x5e3: Return(); Pop(0)

0x5e4: PushEmpty()
0x5e5: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e7: Stack[-2] = Stack[-4]
0x5e8: Return(); Pop(0)

0x5e9: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5ea: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5eb: Stack[-1] = Stack[-4]
0x5ec: Return(); Pop(0)

0x5ed: Stack[-3] = Stack[-4]
0x5ee: Return(); Pop(0)

0x5ef: PushEmpty()
0x5f0: Pop(0); Push(Stack[-2] | Stack[-1]);
0x5f1: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5f2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5f3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5f4: Pop(1); Push(Sqrt(Stack[-1]))
0x5f5: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x5f6: Return(); Pop(0)

0x5f7: PushEmpty()
0x5f8: Pop(0); Push((bool) Stack[-2] == 0)
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fa: Stack[-3] = (bool) 0
0x5fb: Return(); Pop(0)

0x5fc: Push((int) 0)
0x5fd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5fe: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x5ff: Push((int) 8)
0x600: @ SendWorldWndMessage(Stack[-1])
0x601: Pop(1)
0x602: GOTO 0x60c

0x603: Push((int) 0)
0x604: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x605: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x606: Push((int) 9)
0x607: @ SendWorldWndMessage(Stack[-1])
0x608: Pop(1)
0x609: GOTO 0x60c

0x60a: Stack[-3] = (bool) 0
0x60b: Return(); Pop(0)

0x60c: PushEmpty(float)
0x60d: Stack[-2] = Stack[-1]
0x60e: Call2 0x624

0x60f: Pop(1)
0x610: PushEmpty(bool, object, string, float, float, float)
0x611: Stack[-8] = Stack[-5]
0x612: Stack[-4] = "reputation" // @poff=798
0x613: Stack[-7] = Stack[-3]
0x614: Stack[-2] = (int) 0
0x615: Stack[-1] = (int) 1
0x616: Call2 0x44e

0x617: Pop(6)
0x618: Stack[-3] = (bool) 1
0x619: Return(); Pop(0)

0x61a: PushEmpty(object, object)
0x61b: @ CreateFloatVector(Stack[-1])
0x61c: Pop(0)
0x61d: @@ add(Stack[-3]); Obj=1 // @poff=739
0x61e: Pop(0)
0x61f: Push((int) 15)
0x620: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x621: Pop(1)
0x622: Return(); Pop(2)

0x623: Stack[-1] = 0
0x624: PushEmpty(object, object)
0x625: @ CreateFloatVector(Stack[-1])
0x626: Pop(0)
0x627: @@ add(Stack[-3]); Obj=1 // @poff=739
0x628: Pop(0)
0x629: Push((int) 16)
0x62a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x62b: Pop(1)
0x62c: Return(); Pop(2)

0x62d: Stack[-1] = 0
0x62e: PushEmpty(object, object)
0x62f: @ FindActor(Stack[-1], Stack[-4])
0x630: Pop(0)
0x631: Pop(0); PushNull((bool) Stack[-1] == 0)
0x632: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x633: Stack[-5] = (bool) 0
0x634: Return(); Pop(2)

0x635: @ Trigger(Stack[-1], Stack[-3])
0x636: Pop(0)
0x637: Stack[-5] = (bool) 1
0x638: Return(); Pop(2)

0x639: Stack[-1] = 0
0x63a: Stack[-1] = (int) 515595
0x63b: Return(); Pop(0)

0x63c: Stack[-1] = (int) 512611
0x63d: Return(); Pop(0)

0x63e: Stack[-1] = "ui/NPC_Black.png" // @poff=820
0x63f: Return(); Pop(0)

0x640: Stack[-1] = "ui/NPC_Black_b.png" // @poff=854
0x641: Return(); Pop(0)

0x642: Stack[-1] = (bool) 0
0x643: Return(); Pop(0)

0x644: PushEmpty(string, string)
0x645: Stack[-1] = "idle" // @poff=146
0x646: Push(Stack[-3])
0x647: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x648: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x649: Stack[-1] = Stack[-4]
0x64a: Return(); Pop(2)

0x64b: PushEmpty(int, bool, int, bool)
0x64c: Stack[-2] = (int) 0
0x64d: Push("all") // @poff=138
0x64e: PushEmpty(string, int)
0x64f: Stack[-5] = Stack[-1]
0x650: Call2 0x644

0x651: Pop(1)
0x652: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x653: Pop(2)
0x654: Pop(0); Push((bool) Stack[-1] == 0)
0x655: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x656: GOTO 0x65a

0x657: Push((int) 1)
0x658: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x659: GOTO 0x64d

0x65a: Stack[-2] = Stack[-5]
0x65b: Return(); Pop(4)

0x65c: PushEmpty()
0x65d: PushEmpty()
0x65e: Call2 0x666

0x65f: Pop(0)
0x660: PushEmpty(bool, string, string)
0x661: Stack[-2] = "quest_k6_03" // @poff=156
0x662: Stack[-1] = "completed" // @poff=892
0x663: Call2 0x62e

0x664: Pop(3)
0x665: Return(); Pop(0)

0x666: PushEmpty(object, object)
0x667: Push((int) 750)
0x668: Push((int) 2)
0x669: Push((int) 539629)
0x66a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x66b: Pop(3)
0x66c: PushEmpty(bool, object, int)
0x66d: Stack[-4] = Stack[-2]
0x66e: Stack[-1] = (int) 748
0x66f: Call2 0x680

0x670: Pop(3)
0x671: Return(); Pop(2)

0x672: Stack[-1] = 0
0x673: PushEmpty(object, object)
0x674: @ GetDiaryRoot(Stack[-1])
0x675: Pop(0)
0x676: Pop(0); Push((bool) Stack[-1] == 0)
0x677: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x678: Push("Can't retrieve diary root") // @poff=912
0x679: @ Trace(Stack[-1])
0x67a: Pop(1)
0x67b: Stack[-3] = (bool) 0
0x67c: Return(); Pop(2)

0x67d: Stack[-1] = Stack[-3]
0x67e: Return(); Pop(2)

0x67f: Stack[-1] = 0
0x680: PushEmpty(object, object, int, object, object, int)
0x681: PushEmpty(object)
0x682: Call2 0x673

0x683: Stack[-1] = Stack[-4]
0x684: Pop(1)
0x685: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=964
0x686: Pop(0)
0x687: Pop(0); Push((bool) Stack[-2] == 0)
0x688: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x689: Push("Can't find diary parent with id: ") // @poff=969
0x68a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x68b: @ Trace(Stack[-1])
0x68c: Pop(1)
0x68d: Stack[-9] = (bool) 0
0x68e: Return(); Pop(6)

0x68f: @@ AddChild(Stack[-8]); Obj=2 // @poff=1037
0x690: Pop(0)
0x691: Push((int) 7)
0x692: @ SendWorldWndMessage(Stack[-1])
0x693: Pop(1)
0x694: @@ GetCategory(Stack[-1]); Obj=8 // @poff=1046
0x695: Pop(0)
0x696: @ SetDiarySection(Stack[-1])
0x697: Pop(0)
0x698: Stack[-9] = (bool) 0
0x699: Return(); Pop(6)

0x69a: Stack[-2] = 0
0x69b: Stack[-3] = 0
0x69c: PushEmpty(int, int)
0x69d: Push("branch") // @poff=1058
0x69e: @ GetVariable(Stack[-1], Stack[-2])
0x69f: Pop(1)
0x6a0: Push((int) 0)
0x6a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x6a3: Stack[-3] = (int) 1
0x6a4: Return(); Pop(2)

0x6a5: GOTO 0x6ab

0x6a6: Push((int) 1)
0x6a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a9: Stack[-3] = (int) 2
0x6aa: Return(); Pop(2)

0x6ab: Stack[-3] = (int) 3
0x6ac: Return(); Pop(2)

0x6ad: PushEmpty(object, float, object, float)
0x6ae: Push("player") // @poff=208
0x6af: @ FindActor(Stack[-3], Stack[-1])
0x6b0: Pop(1)
0x6b1: Push(Stack[-2])
0x6b2: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6b3: PushEmpty(float, object)
0x6b4: Stack[-4] = Stack[-1]
0x6b5: Call2 0x435

0x6b6: Pop(1)
0x6b7: Push((float)640000.0)
0x6b8: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6ba: PushEmpty(float, object, float, int)
0x6bb: Stack[-6] = Stack[-3]
0x6bc: Stack[-2] = (float) 0.05000000074505806
0x6bd: Stack[-1] = (int) 0
0x6be: Call2 0x464

0x6bf: Stack[-4] = Stack[-5]
0x6c0: Pop(4)
0x6c1: Push((int) 6)
0x6c2: Push((float)0.05000000074505806)
0x6c3: @ ReportHit(Stack[-4], Stack[-2], Stack[-3], Stack[-1])
0x6c4: Pop(2)
0x6c5: Return(); Pop(4)

0x6c6: Stack[-2] = 0
0x6c7: PushEmpty()
0x6c8: PushEmpty(object)
0x6c9: Stack[-2] = Stack[-1]
0x6ca: Push(-1, 0); TaskCall(5)
0x6cb: Call2 0x397

0x6cc: Pop(-1, 0); TaskReturn
0x6cd: Pop(1)
0x6ce: Return(); Pop(0)

0x6cf: PushEmpty()
0x6d0: PushEmpty(object, int, float)
0x6d1: Stack[-7] = Stack[-3]
0x6d2: Stack[-6] = Stack[-2]
0x6d3: Stack[-5] = Stack[-1]
0x6d4: Call2 0x4d9

0x6d5: Pop(3)
0x6d6: Return(); Pop(0)

0x6d7: PushEmpty()
0x6d8: PushEmpty(object, int, float, cvector, cvector)
0x6d9: Stack[-11] = Stack[-5]
0x6da: Stack[-10] = Stack[-4]
0x6db: Stack[-9] = Stack[-3]
0x6dc: Stack[-7] = Stack[-2]
0x6dd: Stack[-6] = Stack[-1]
0x6de: Call2 0x51d

0x6df: Pop(5)
0x6e0: Return(); Pop(0)

0x6e1: PushEmpty(float, float)
0x6e2: Push("health") // @poff=651
0x6e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6e5: Push("health") // @poff=651
0x6e6: @ GetProperty(Stack[-1], Stack[-2])
0x6e7: Pop(1)
0x6e8: Push((int) 0)
0x6e9: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6eb: @ SignalDeath(Stack[-4])
0x6ec: Pop(0)
0x6ed: Return(); Pop(2)

0x6ee: PushEmpty()
0x6ef: PushEmpty(bool, object)
0x6f0: Stack[-3] = Stack[-1]
0x6f1: Call2 0x43d

0x6f2: Pop(1)
0x6f3: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f4: PushEmpty(bool, object, float)
0x6f5: Stack[-4] = Stack[-2]
0x6f6: Stack[-1] = (float) -0.10000000149011612
0x6f7: Call2 0x5f7

0x6f8: Pop(3)
0x6f9: PushEmpty(object)
0x6fa: Stack[-2] = Stack[-1]
0x6fb: Call2 0x6c7

0x6fc: Pop(1)
0x6fd: Return(); Pop(0)

