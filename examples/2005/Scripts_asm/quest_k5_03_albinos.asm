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
	W:quest_k5_03
	W:abinos_unload
	W:player
	W:head
	A:RemoveStationaryActor
	W:pt_k5q03_albinos_path
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
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000710075006500730074005f006b0035005f003000330000006100620069006e006f0073005f0075006e006c006f0061006400000070006c00610079006500720000006800650061006400000052656d6f766553746174696f6e6172794163746f7200700074005f006b0035007100300033005f0061006c00620069006e006f0073005f00700061007400680000004765744c6f6361746f720061006c00620069006e006f0073005f007200650074007200650061007400650064000000476574506f736974696f6e00430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a00200000006600640069006500000062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740066006900720065000000620075006c006c0065007400000070006800790073000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f7065727479006800650061006c00740068000000610072006d006f0072000000610072006d006f0072005f00000066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c000000720065007000750074006100740069006f006e000000750069002f004e00500043005f0042006c00610063006b002e0070006e0067000000750069002f004e00500043005f0042006c00610063006b005f0062002e0070006e006700000063006f006d0070006c0065007400650064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000
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

RunOp = 0x21b
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x151 Vars = (object)
		EVENT_17 Op = 0x163 Vars = (object)
		EVENT_41 Op = 0x165 Vars = (object)
		EVENT_6 Op = 0x16e Vars = ()
		EVENT_7 Op = 0x1a0 Vars = (int)
	GTASK_3 Vars = (bool, int) Params = 0
		EVENT_17 Op = 0x236 Vars = (object)
		EVENT_41 Op = 0x238 Vars = (object)
		EVENT_6 Op = 0x241 Vars = ()
	GTASK_4 Vars = (object, cvector, bool) Params = 2
		EVENT_6 Op = 0x292 Vars = ()
		EVENT_7 Op = 0x29a Vars = (int)
		EVENT_41 Op = 0x349 Vars = (object)
	GTASK_5  Params = 1
		EVENT_22 Op = 0x3e0 Vars = (object, int, float, float)
		EVENT_16 Op = 0x3e2 Vars = (object, string)
		EVENT_41 Op = 0x3e4 Vars = (object)

Events:
EVENT_22 Op = 0x69a Vars = (object, int, float, float)
EVENT_43 Op = 0x6a2 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x6ac Vars = (object, string)
EVENT_41 Op = 0x6b9 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x4fb

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x607

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x605

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x609

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x60b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x667

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
0x41: Call2 0x53f

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x627

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral" // @poff=89
0x57: Call2 0x84

0x58: Pop(1)
0x59: Push((int) 525951)
0x5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b: Pop(1)
0x5c: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d: Pop(0)
0x5e: Push((int) 525952)
0x5f: Push((int) 27237)
0x60: Push((int) 27236)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x60d

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x550

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all") // @poff=138
0x76: Push("idle") // @poff=146
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all") // @poff=138
0x7f: Push("idle") // @poff=146
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x60d

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-3] = Stack[-2]
0x90: Push("") // @poff=102
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x557

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x568

0x9f: Pop(0)
0xa0: Push((int) 27235)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x627

0xa7: Pop(2)
0xa8: PushEmpty(string)
0xa9: Stack[-1] = "Neutral" // @poff=89
0xaa: Call2 0x84

0xab: Pop(1)
0xac: Push((int) 525951)
0xad: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xae: Pop(1)
0xaf: @@@ ClearReplies(); Obj=0 // @poff=116
0xb0: Pop(0)
0xb1: Push((int) 525952)
0xb2: Push((int) 27237)
0xb3: Push((int) 27236)
0xb4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 27237)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral" // @poff=89
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 525953)
0xbf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc0: Pop(1)
0xc1: @@@ ClearReplies(); Obj=0 // @poff=116
0xc2: Pop(0)
0xc3: Push((int) 525954)
0xc4: Push((int) 27239)
0xc5: Push((int) 27238)
0xc6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 27239)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral" // @poff=89
0xce: Call2 0x84

0xcf: Pop(1)
0xd0: Push((int) 525955)
0xd1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xd2: Pop(1)
0xd3: @@@ ClearReplies(); Obj=0 // @poff=116
0xd4: Pop(0)
0xd5: Push((int) 525956)
0xd6: Push((int) 27241)
0xd7: Push((int) 27240)
0xd8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd9: Pop(3)
0xda: Push((int) 529036)
0xdb: Push((int) 27241)
0xdc: Push((int) 30476)
0xdd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 27241)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral" // @poff=89
0xe5: Call2 0x84

0xe6: Pop(1)
0xe7: Push((int) 525957)
0xe8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xe9: Pop(1)
0xea: @@@ ClearReplies(); Obj=0 // @poff=116
0xeb: Pop(0)
0xec: Push((int) 525958)
0xed: Push((int) 27243)
0xee: Push((int) 27242)
0xef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: Push((int) 27243)
0xf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf5: PushEmpty(string)
0xf6: Stack[-1] = "Neutral" // @poff=89
0xf7: Call2 0x84

0xf8: Pop(1)
0xf9: Push((int) 525959)
0xfa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xfb: Pop(1)
0xfc: @@@ ClearReplies(); Obj=0 // @poff=116
0xfd: Pop(0)
0xfe: Push((int) 525960)
0xff: Push((int) 27245)
0x100: Push((int) 27244)
0x101: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x102: Pop(3)
0x103: Return(); Pop(0)

0x104: Push((int) 27245)
0x105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x107: PushEmpty(string)
0x108: Stack[-1] = "Neutral" // @poff=89
0x109: Call2 0x84

0x10a: Pop(1)
0x10b: Push((int) 525961)
0x10c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x10d: Pop(1)
0x10e: @@@ ClearReplies(); Obj=0 // @poff=116
0x10f: Pop(0)
0x110: Push((int) 525962)
0x111: Push((int) 27247)
0x112: Push((int) 27246)
0x113: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x114: Pop(3)
0x115: Return(); Pop(0)

0x116: Push((int) 27247)
0x117: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral" // @poff=89
0x11b: Call2 0x84

0x11c: Pop(1)
0x11d: Push((int) 525963)
0x11e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x11f: Pop(1)
0x120: @@@ ClearReplies(); Obj=0 // @poff=116
0x121: Pop(0)
0x122: Push((int) 525964)
0x123: Push((int) 27249)
0x124: Push((int) 27248)
0x125: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 27249)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral" // @poff=89
0x12d: Call2 0x84

0x12e: Pop(1)
0x12f: Push((int) 525965)
0x130: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x131: Pop(1)
0x132: @@@ ClearReplies(); Obj=0 // @poff=116
0x133: Pop(0)
0x134: Push((int) 525966)
0x135: Push((int) -1)
0x136: Push((int) 27250)
0x137: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x138: Pop(3)
0x139: Return(); Pop(0)

0x13a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x13b: PushEmpty(bool)
0x13c: Call2 0x60d

0x13d: Pop(0)
0x13e: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13f: @ lshStopAnimation()
0x140: Pop(0)
0x141: GOTO 0x144

0x142: @ StopAnimation()
0x143: Pop(0)
0x144: Return(); Pop(0)

0x145: GOTO 0x9b

0x146: Return(); Pop(0)

0x147: PushEmpty(float, float)
0x148: Stack[-2] = (int) 300
0x149: Stack[-1] = (int) 100
0x14a: Call2 0x176

0x14b: Pop(2)
0x14c: Push((int) 3)
0x14d: @ Sleep(Stack[-1])
0x14e: Pop(1)
0x14f: GOTO 0x147

0x150: Return(); Pop(0)

0x151: PushEmpty()
0x152: PushEmpty()
0x153: Call2 0x1b7

0x154: Pop(0)
0x155: PushEmpty(int, object)
0x156: Stack[-3] = Stack[-1]
0x157: Push(-2, 1); TaskCall(0)
0x158: Call2 0x0

0x159: Pop(-2, 1); TaskReturn
0x15a: Pop(2)
0x15b: PushEmpty(object, bool)
0x15c: Stack[-3] = Stack[-2]
0x15d: Stack[-1] = (bool) 0
0x15e: Push(-2, 3); TaskCall(4)
0x15f: Call2 0x286

0x160: Pop(-2, 3); TaskReturn
0x161: Pop(2)
0x162: Return(); Pop(0)

0x163: PushEmpty()
0x164: Return(); Pop(0)

0x165: PushEmpty()
0x166: PushEmpty()
0x167: Call2 0x1b7

0x168: Pop(0)
0x169: PushEmpty(object)
0x16a: Stack[-2] = Stack[-1]
0x16b: Call2 0x6b9

0x16c: Pop(1)
0x16d: Return(); Pop(0)

0x16e: PushEmpty(bool, string, string)
0x16f: Stack[-2] = "quest_k5_03" // @poff=156
0x170: Stack[-1] = "abinos_unload" // @poff=180
0x171: Call2 0x5f9

0x172: Pop(3)
0x173: @ Hold()
0x174: Pop(0)
0x175: Return(); Pop(0)

0x176: PushEmpty()
0x177: PushEmpty(bool)
0x178: Call2 0x4f6

0x179: Pop(0)
0x17a: Pop(1); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: Return(); Pop(0)

0x17d: Push("player") // @poff=208
0x17e: @ FindActor(Stack[-4]T, Stack[-1])
0x17f: Pop(1)
0x180: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x181: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x182: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x183: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x184: Push((int) 10)
0x185: Push((float)1.0)
0x186: @ SetTimer(Stack[-2], Stack[-1])
0x187: Pop(2)
0x188: PushEmpty()
0x189: Call2 0x1c5

0x18a: Pop(0)
0x18b: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x18c: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18d: Push((int) 10)
0x18e: @ KillTimer(Stack[-1])
0x18f: Pop(1)
0x190: Return(); Pop(0)

0x191: PushEmpty(float, float)
0x192: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x194: Stack[-3] = (bool) 0
0x195: Return(); Pop(2)

0x196: PushEmpty(float, object)
0x197: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x198: Call2 0x400

0x199: Pop(1)
0x19a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x19b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x19e: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x19f: Return(); Pop(2)

0x1a0: PushEmpty()
0x1a1: Push((int) 10)
0x1a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a4: PushEmpty(bool)
0x1a5: Call2 0x191

0x1a6: Pop(0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1a8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1aa: PushEmpty(object)
0x1ab: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1ac: Call2 0x55d

0x1ad: Pop(1)
0x1ae: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1af: GOTO 0x1b6

0x1b0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b2: Push("head") // @poff=222
0x1b3: @ UnlookAsync(Stack[-1])
0x1b4: Pop(1)
0x1b5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b6: Return(); Pop(0)

0x1b7: PushEmpty()
0x1b8: Call2 0x216

0x1b9: Pop(0)
0x1ba: Push((int) 10)
0x1bb: @ KillTimer(Stack[-1])
0x1bc: Pop(1)
0x1bd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1be: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1bf: Push("head") // @poff=222
0x1c0: @ UnlookAsync(Stack[-1])
0x1c1: Pop(1)
0x1c2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1c3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c4: Return(); Pop(0)

0x1c5: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1c6: @ WaitForAnimEnd()
0x1c7: Pop(0)
0x1c8: PushEmpty(bool)
0x1c9: Call2 0x4f6

0x1ca: Pop(0)
0x1cb: Pop(1); Push((bool) Stack[-1] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: Return(); Pop(14)

0x1ce: PushEmpty(int)
0x1cf: Call2 0x616

0x1d0: Stack[-1] = Stack[-8]
0x1d1: Pop(1)
0x1d2: Stack[-6] = (int) 0
0x1d3: PushEmpty(bool)
0x1d4: Stack[-1] = (bool) 0
0x1d5: Push((int) 5)
0x1d6: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: PushEmpty(bool)
0x1d9: Call2 0x4f6

0x1da: Pop(0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Stack[-1] = (bool) 1
0x1dd: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x1de: Push((int) 3)
0x1df: @ irand(Stack[-6], Stack[-1])
0x1e0: Pop(1)
0x1e1: Push((int) 0)
0x1e2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1e4: Push(Stack[-7])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e6: @ irand(Stack[-4], Stack[-7])
0x1e7: Pop(0)
0x1e8: Push("all") // @poff=138
0x1e9: PushEmpty(string, int)
0x1ea: Stack[-7] = Stack[-1]
0x1eb: Call2 0x60f

0x1ec: Pop(1)
0x1ed: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ee: Pop(2)
0x1ef: @ WaitForAnimEnd(Stack[-3])
0x1f0: Pop(0)
0x1f1: Pop(0); Push((bool) Stack[-3] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: GOTO 0x211

0x1f4: GOTO 0x206

0x1f5: Push((int) 1)
0x1f6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1f8: Push((int) 4)
0x1f9: @ rand(Stack[-3], Stack[-1])
0x1fa: Pop(1)
0x1fb: Push((int) 1)
0x1fc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1fd: @ Sleep(Stack[-1], Stack[-2])
0x1fe: Pop(1)
0x1ff: Pop(0); Push((bool) Stack[-1] == 0)
0x200: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x201: GOTO 0x211

0x202: GOTO 0x206

0x203: Push(Stack[-6])
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: GOTO 0x211

0x206: PushEmpty(bool)
0x207: Call2 0x214

0x208: Pop(0)
0x209: Pop(1); Push((bool) Stack[-1] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: GOTO 0x211

0x20c: @ ResetAAS()
0x20d: Pop(0)
0x20e: Push((int) 1)
0x20f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x210: GOTO 0x1d3

0x211: @ ResetAAS()
0x212: Pop(0)
0x213: Return(); Pop(14)

0x214: Stack[-1] = (bool) 1
0x215: Return(); Pop(0)

0x216: @ StopAnimation()
0x217: Pop(0)
0x218: @ StopGroup0()
0x219: Pop(0)
0x21a: Return(); Pop(0)

0x21b: PushEmpty(object, object)
0x21c: @ GetScene(Stack[-1])
0x21d: Pop(0)
0x21e: PushEmpty(object)
0x21f: Call2 0x598

0x220: Pop(0)
0x221: @@ RemoveStationaryActor(Stack[-1]); Obj=2 // @poff=232
0x222: Pop(1)
0x223: Push("pt_k5q03_albinos_path") // @poff=254
0x224: @ GetVariable(Stack[-1], Stack[-1]T)
0x225: Pop(1)
0x226: Push((int) -1)
0x227: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] != Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x229: PushEmpty(bool, string, int, bool)
0x22a: Stack[-3] = "pt_k5q03_albinos_path" // @poff=254
0x22b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22c: Stack[-1] = (bool) 1
0x22d: Call2 0x249

0x22e: Pop(4)
0x22f: PushEmpty()
0x230: Push(-0, 5); TaskCall(2)
0x231: Call2 0x147

0x232: Pop(-0, 5); TaskReturn
0x233: Pop(0)
0x234: Return(); Pop(2)

0x235: Stack[-1] = 0
0x236: PushEmpty()
0x237: Return(); Pop(0)

0x238: PushEmpty()
0x239: PushEmpty()
0x23a: Call2 0x27e

0x23b: Pop(0)
0x23c: PushEmpty(object)
0x23d: Stack[-2] = Stack[-1]
0x23e: Call2 0x6b9

0x23f: Pop(1)
0x240: Return(); Pop(0)

0x241: PushEmpty(bool, string, string)
0x242: Stack[-2] = "quest_k5_03" // @poff=156
0x243: Stack[-1] = "abinos_unload" // @poff=180
0x244: Call2 0x5f9

0x245: Pop(3)
0x246: @ Hold()
0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: PushEmpty(object, cvector, bool, bool, cvector, cvector, bool, object, cvector, bool, bool, cvector, cvector, bool)
0x24a: @ GetScene(Stack[-7])
0x24b: Pop(0)
0x24c: Push((int) 1)
0x24d: Pop(1); Push(Stack[-17] + Stack[-1]);
0x24e: Pop(1); Push(Stack[-18] + Stack[-1]);
0x24f: @@ GetLocator(Stack[-1], Stack[-5], Stack[-4], Stack[-3]); Obj=8 // @poff=298
0x250: Pop(1)
0x251: Pop(0); Push((bool) Stack[-4] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: GOTO 0x267

0x254: Stack[-2] = Stack[-6]
0x255: @ MovePoint(Stack[-3], Stack[-15], Stack[-5])
0x256: Pop(0)
0x257: Push(Stack[-5])
0x258: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x259: PushEmpty(int, cvector, cvector)
0x25a: Stack[-19] = Stack[-3]
0x25b: Stack[-6] = Stack[-2]
0x25c: Stack[-5] = Stack[-1]
0x25d: Call2 0x284

0x25e: Pop(3)
0x25f: Push((int) 1)
0x260: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x261: GOTO 0x266

0x262: Push( Stack[0 + Tasks[-1].StackPointer] )
0x263: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x264: Stack[-18] = (bool) 0
0x265: Return(); Pop(14)

0x266: GOTO 0x24c

0x267: @ WaitForAnimEnd(Stack[-5])
0x268: Pop(0)
0x269: Pop(0); Push((bool) Stack[-5] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x26c: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26d: Stack[-18] = (bool) 0
0x26e: Return(); Pop(14)

0x26f: Push(CvectorIndex(Stack[-6], 0))
0x270: Push(CvectorIndex(Stack[-7], 2))
0x271: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x272: Pop(2)
0x273: Push(Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: GOTO 0x27b

0x276: Push( Stack[0 + Tasks[-1].StackPointer] )
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-18] = (bool) 0
0x279: Return(); Pop(14)

0x27a: GOTO 0x26f

0x27b: Stack[-18] = (bool) 1
0x27c: Return(); Pop(14)

0x27d: Stack[-7] = 0
0x27e: @ Stop()
0x27f: Pop(0)
0x280: @ StopAnimation()
0x281: Pop(0)
0x282: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x283: Return(); Pop(0)

0x284: PushEmpty()
0x285: Return(); Pop(0)

0x286: PushEmpty()
0x287: Push(Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x289: Push((int) 100)
0x28a: Push((float)1.0)
0x28b: @ SetTimer(Stack[-2], Stack[-1])
0x28c: Pop(2)
0x28d: PushEmpty(object)
0x28e: Stack[-3] = Stack[-1]
0x28f: Call2 0x2c5

0x290: Pop(1)
0x291: Return(); Pop(0)

0x292: PushEmpty(bool, string, string)
0x293: Stack[-2] = "quest_k5_03" // @poff=156
0x294: Stack[-1] = "albinos_retreated" // @poff=309
0x295: Call2 0x5f9

0x296: Pop(3)
0x297: @ Hold()
0x298: Pop(0)
0x299: Return(); Pop(0)

0x29a: PushEmpty()
0x29b: Push((int) 100)
0x29c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29e: PushEmpty()
0x29f: Call2 0x678

0x2a0: Pop(0)
0x2a1: GOTO 0x2a6

0x2a2: PushEmpty(int)
0x2a3: Stack[-2] = Stack[-1]
0x2a4: Call2 0x30e

0x2a5: Pop(1)
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x2a8: @ GetPosition(Stack[-6])
0x2a9: Pop(0)
0x2aa: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=345
0x2ab: Pop(0)
0x2ac: @ GetDirection(Stack[-4])
0x2ad: Pop(0)
0x2ae: PushEmpty(cvector, cvector)
0x2af: PushEmpty(cvector, cvector)
0x2b0: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x2b1: Call2 0x59e

0x2b2: Pop(1)
0x2b3: Push((float)0.75)
0x2b4: Pop(1); Push(Stack[-8] * Stack[-1]);
0x2b5: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x2b6: Call2 0x59e

0x2b7: Stack[-2] = Stack[-5]
0x2b8: Pop(2)
0x2b9: Push((int) 32)
0x2ba: Push((float)7000.0)
0x2bb: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x2bc: Pop(2)
0x2bd: Push((int) 100)
0x2be: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x2bf: Push((int) 0)
0x2c0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: Stack[-1] = (int) 0
0x2c3: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x2c4: Return(); Pop(12)

0x2c5: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x2c6: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x2c7: PushEmpty(cvector, float)
0x2c8: Stack[-1] = (float) 1.7453293800354004
0x2c9: Call2 0x2a7

0x2ca: Stack[-2] = Stack[-7]
0x2cb: Pop(2)
0x2cc: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2cd: Push((float)2500.0)
0x2ce: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2d0: PushEmpty(cvector, float)
0x2d1: Stack[-1] = (float) 2.6179938316345215
0x2d2: Call2 0x2a7

0x2d3: Stack[-2] = Stack[-7]
0x2d4: Pop(2)
0x2d5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2d6: Push((float)2500.0)
0x2d7: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2d9: Push("Can't retreat, distance: ") // @poff=357
0x2da: Pop(0); Push(Sqrt(Stack[-5]))
0x2db: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2dc: @ Trace(Stack[-1])
0x2dd: Pop(1)
0x2de: Push((float)0.5)
0x2df: @ Sleep(Stack[-1])
0x2e0: Pop(1)
0x2e1: Return(); Pop(10)

0x2e2: Push(CvectorIndex(Stack[-5], 0))
0x2e3: Push(CvectorIndex(Stack[-6], 2))
0x2e4: @ Rotate(Stack[-2], Stack[-1])
0x2e5: Pop(2)
0x2e6: PushEmpty(cvector)
0x2e7: Call2 0x3f4

0x2e8: Pop(0)
0x2e9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x2ea: Push((int) 120)
0x2eb: Push((float)0.5)
0x2ec: @ SetTimer(Stack[-2], Stack[-1])
0x2ed: Pop(2)
0x2ee: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2ef: Push((int) 1)
0x2f0: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x2f1: Pop(1)
0x2f2: Push(Stack[-3])
0x2f3: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x2f4: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f6: GOTO 0x30d

0x2f7: GOTO 0x30b

0x2f8: PushEmpty(cvector, float)
0x2f9: Stack[-1] = (float) 2.6179938316345215
0x2fa: Call2 0x2a7

0x2fb: Stack[-2] = Stack[-4]
0x2fc: Pop(2)
0x2fd: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2fe: Push((float)2500.0)
0x2ff: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x301: PushEmpty(cvector)
0x302: Call2 0x3f4

0x303: Pop(0)
0x304: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x305: Push((int) 120)
0x306: Push((float)0.5)
0x307: @ SetTimer(Stack[-2], Stack[-1])
0x308: Pop(2)
0x309: GOTO 0x30b

0x30a: GOTO 0x30d

0x30b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x30c: IF (Stack[-1] == 1) GOTO 0x2ef; Pop(1)

0x30d: Return(); Pop(10)

0x30e: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x30f: Push((int) 120)
0x310: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x312: Return(); Pop(8)

0x313: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x314: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x315: @ Stop()
0x316: Pop(0)
0x317: Push((int) 1)
0x318: @ KillTimer(Stack[-1])
0x319: Pop(1)
0x31a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x31b: GOTO 0x341

0x31c: @ GetDirection(Stack[-4])
0x31d: Pop(0)
0x31e: Push((float)7000.0)
0x31f: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x320: Pop(1)
0x321: PushEmpty(cvector, float)
0x322: Stack[-1] = (float) 1.7453293800354004
0x323: Call2 0x2a7

0x324: Stack[-2] = Stack[-4]
0x325: Pop(2)
0x326: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x327: PushEmpty(bool)
0x328: Stack[-1] = (bool) 0
0x329: Push((float)2500.0)
0x32a: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x32c: PushEmpty(bool)
0x32d: Stack[-1] = (bool) 1
0x32e: Pop(0); Push(Stack[-5] * Stack[-5]);
0x32f: Push((float)2.25)
0x330: Pop(2); Push(Stack[-2] * Stack[-1]);
0x331: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x332: IF (Stack[-1] == 1) GOTO 0x338; Pop(1)

0x333: PushEmpty(bool)
0x334: Call2 0x352

0x335: Pop(0)
0x336: IF (Stack[-1] == 1) GOTO 0x338; Pop(1)

0x337: Stack[-1] = (bool) 0
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: Stack[-1] = (bool) 1
0x33a: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33b: @ Stop()
0x33c: Pop(0)
0x33d: PushEmpty(cvector)
0x33e: Call2 0x3f4

0x33f: Pop(0)
0x340: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x341: Return(); Pop(8)

0x342: @ Stop()
0x343: Pop(0)
0x344: Push((int) 120)
0x345: @ KillTimer(Stack[-1])
0x346: Pop(1)
0x347: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x348: Return(); Pop(0)

0x349: PushEmpty()
0x34a: PushEmpty()
0x34b: Call2 0x342

0x34c: Pop(0)
0x34d: PushEmpty(object)
0x34e: Stack[-2] = Stack[-1]
0x34f: Call2 0x6b9

0x350: Pop(1)
0x351: Return(); Pop(0)

0x352: PushEmpty(cvector, cvector, cvector, cvector)
0x353: @ GetDirection(Stack[-2])
0x354: Pop(0)
0x355: PushEmpty(cvector, object)
0x356: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x357: Call2 0x3f9

0x358: Stack[-2] = Stack[-3]
0x359: Pop(2)
0x35a: PushEmpty(float, cvector, cvector)
0x35b: Stack[-5] = Stack[-2]
0x35c: Stack[-4] = Stack[-1]
0x35d: Call2 0x5ba

0x35e: Pop(2)
0x35f: Push((float)-0.3420201241970062)
0x360: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x361: Return(); Pop(4)

0x362: PushEmpty()
0x363: PushEmpty(object)
0x364: Stack[-2] = Stack[-1]
0x365: Call2 0x36b

0x366: Pop(1)
0x367: @ Hold()
0x368: Pop(0)
0x369: GOTO 0x367

0x36a: Return(); Pop(0)

0x36b: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x36c: Pop(0); PushNull((bool) Stack[-21] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x36e: PushEmpty(string)
0x36f: Stack[-1] = "fdie" // @poff=409
0x370: Call2 0x3c6

0x371: Pop(1)
0x372: GOTO 0x3c5

0x373: @@ GetPosition(Stack[-10]); Obj=21 // @poff=345
0x374: Pop(0)
0x375: @ GetPosition(Stack[-9])
0x376: Pop(0)
0x377: @ GetDirection(Stack[-8])
0x378: Pop(0)
0x379: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x37a: Push(CvectorIndex(Stack[-7], 0))
0x37b: Push(CvectorIndex(Stack[-9], 0))
0x37c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x37d: Push(CvectorIndex(Stack[-8], 2))
0x37e: Push(CvectorIndex(Stack[-10], 2))
0x37f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x380: Pop(2); Push(Stack[-2] + Stack[-1]);
0x381: Push((int) 0)
0x382: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-6] = "fdie" // @poff=409
0x385: GOTO 0x387

0x386: Stack[-6] = "bdie" // @poff=419
0x387: @ RemoveRTEnvelope()
0x388: Pop(0)
0x389: @ SetDeathState()
0x38a: Pop(0)
0x38b: @ Stop()
0x38c: Pop(0)
0x38d: @ StopAsync()
0x38e: Pop(0)
0x38f: Stack[-21] = Stack[-5]
0x390: Push("GetScriptProperty") // @poff=429
0x391: Push((int) 2)
0x392: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x393: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x394: Push("Owner") // @poff=465
0x395: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=477
0x396: Pop(1)
0x397: Push(Stack[-4])
0x398: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x399: Push("Owner") // @poff=465
0x39a: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=495
0x39b: Pop(1)
0x39c: Pop(0); PushNull((bool) Stack[-5] == 0)
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: Stack[-21] = Stack[-5]
0x39f: Push("@GetEyesHeight") // @poff=513
0x3a0: Push((int) 1)
0x3a1: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x3a2: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a3: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=543
0x3a4: Pop(0)
0x3a5: Stack[-1] = [0.0, 0.0, 0.0]
0x3a6: Push(CvectorIndex(Stack[-1], 1))
0x3a7: Stack[-3] = Stack[-1]
0x3a8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3a9: Push("head") // @poff=222
0x3aa: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x3ab: Pop(1)
0x3ac: Stack[-3] = (bool) 1
0x3ad: GOTO 0x3af

0x3ae: Stack[-3] = (bool) 0
0x3af: PushEmpty(string)
0x3b0: Stack[-7] = Stack[-1]
0x3b1: Call2 0x56f

0x3b2: Pop(1)
0x3b3: Push("all") // @poff=138
0x3b4: @ PlayAnimation(Stack[-1], Stack[-7])
0x3b5: Pop(1)
0x3b6: @ WaitForAnimEnd()
0x3b7: Pop(0)
0x3b8: Push(Stack[-3])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3ba: @ StopAsync()
0x3bb: Pop(0)
0x3bc: Push("head") // @poff=222
0x3bd: @ UnlookAsync(Stack[-1])
0x3be: Pop(1)
0x3bf: Push("all") // @poff=138
0x3c0: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x3c1: Pop(1)
0x3c2: @ RemoveEnvelope()
0x3c3: Pop(0)
0x3c4: Stack[-5] = 0
0x3c5: Return(); Pop(20)

0x3c6: PushEmpty()
0x3c7: @ RemoveRTEnvelope()
0x3c8: Pop(0)
0x3c9: @ SetDeathState()
0x3ca: Pop(0)
0x3cb: @ Stop()
0x3cc: Pop(0)
0x3cd: @ StopAsync()
0x3ce: Pop(0)
0x3cf: @ StopSecondaryAnimation()
0x3d0: Pop(0)
0x3d1: PushEmpty(string)
0x3d2: Stack[-2] = Stack[-1]
0x3d3: Call2 0x56f

0x3d4: Pop(1)
0x3d5: Push("all") // @poff=138
0x3d6: @ PlayAnimation(Stack[-1], Stack[-2])
0x3d7: Pop(1)
0x3d8: @ WaitForAnimEnd()
0x3d9: Pop(0)
0x3da: Push("all") // @poff=138
0x3db: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x3dc: Pop(1)
0x3dd: @ RemoveEnvelope()
0x3de: Pop(0)
0x3df: Return(); Pop(0)

0x3e0: PushEmpty()
0x3e1: Return(); Pop(0)

0x3e2: PushEmpty()
0x3e3: Return(); Pop(0)

0x3e4: PushEmpty()
0x3e5: Return(); Pop(0)

0x3e6: PushEmpty()
0x3e7: Push((int) 2)
0x3e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ea: Stack[-2] = "fire" // @poff=557
0x3eb: Return(); Pop(0)

0x3ec: GOTO 0x3f2

0x3ed: Push((int) 1)
0x3ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f0: Stack[-2] = "bullet" // @poff=567
0x3f1: Return(); Pop(0)

0x3f2: Stack[-2] = "phys" // @poff=581
0x3f3: Return(); Pop(0)

0x3f4: PushEmpty(cvector, cvector)
0x3f5: @ GetPosition(Stack[-1])
0x3f6: Pop(0)
0x3f7: Stack[-1] = Stack[-3]
0x3f8: Return(); Pop(2)

0x3f9: PushEmpty(cvector, cvector, cvector, cvector)
0x3fa: @ GetPosition(Stack[-2])
0x3fb: Pop(0)
0x3fc: @@ GetPosition(Stack[-1]); Obj=5 // @poff=345
0x3fd: Pop(0)
0x3fe: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x3ff: Return(); Pop(4)

0x400: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x401: @ GetPosition(Stack[-3])
0x402: Pop(0)
0x403: @@ GetPosition(Stack[-2]); Obj=7 // @poff=345
0x404: Pop(0)
0x405: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x406: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x407: Return(); Pop(6)

0x408: PushEmpty(bool, bool)
0x409: @ IsPlayerActor(Stack[-3], Stack[-1])
0x40a: Pop(0)
0x40b: Stack[-1] = Stack[-4]
0x40c: Return(); Pop(2)

0x40d: PushEmpty(bool, bool)
0x40e: Push("HasProperty") // @poff=591
0x40f: Push((int) 2)
0x410: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x411: Pop(1); Push((bool) Stack[-1] == 0)
0x412: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x413: Stack[-5] = (bool) 0
0x414: Return(); Pop(2)

0x415: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=615
0x416: Pop(0)
0x417: Stack[-1] = Stack[-5]
0x418: Return(); Pop(2)

0x419: PushEmpty(float, float)
0x41a: PushEmpty(bool, object, string)
0x41b: Stack[-10] = Stack[-2]
0x41c: Stack[-9] = Stack[-1]
0x41d: Call2 0x40d

0x41e: Pop(2)
0x41f: Pop(1); Push((bool) Stack[-1] == 0)
0x420: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x421: Stack[-8] = (bool) 0
0x422: Return(); Pop(2)

0x423: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=627
0x424: Pop(0)
0x425: PushEmpty(float, float, float, float)
0x426: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x427: Stack[-8] = Stack[-2]
0x428: Stack[-7] = Stack[-1]
0x429: Call2 0x5af

0x42a: Pop(3)
0x42b: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=639
0x42c: Pop(1)
0x42d: Stack[-8] = (bool) 1
0x42e: Return(); Pop(2)

0x42f: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x430: PushEmpty(bool, object, string)
0x431: Stack[-18] = Stack[-2]
0x432: Stack[-1] = "health" // @poff=651
0x433: Call2 0x40d

0x434: Pop(2)
0x435: Pop(1); Push((bool) Stack[-1] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x437: Stack[-16] = (float) 0.0
0x438: Return(); Pop(12)

0x439: PushEmpty(bool, object, string)
0x43a: Stack[-18] = Stack[-2]
0x43b: Stack[-1] = "armor" // @poff=665
0x43c: Call2 0x40d

0x43d: Pop(2)
0x43e: Pop(1); Push((bool) Stack[-1] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: Stack[-6] = (int) 0
0x441: GOTO 0x445

0x442: Push("armor") // @poff=665
0x443: @@ GetProperty(Stack[-1], Stack[-7]); Obj=16 // @poff=627
0x444: Pop(1)
0x445: Push("armor_") // @poff=677
0x446: PushEmpty(string, int)
0x447: Stack[-16] = Stack[-1]
0x448: Call2 0x3e6

0x449: Pop(1)
0x44a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x44b: PushEmpty(bool, object, string)
0x44c: Stack[-18] = Stack[-2]
0x44d: Stack[-8] = Stack[-1]
0x44e: Call2 0x40d

0x44f: Pop(2)
0x450: Pop(1); Push((bool) Stack[-1] == 0)
0x451: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x452: Stack[-4] = (int) 0
0x453: GOTO 0x456

0x454: @@ GetProperty(Stack[-5], Stack[-4]); Obj=15 // @poff=627
0x455: Pop(0)
0x456: PushEmpty(float, float, float)
0x457: Pop(0); Push(Stack[-9] + Stack[-7]);
0x458: Push((float)100.0)
0x459: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x45a: Stack[-1] = (int) 1
0x45b: Call2 0x5a8

0x45c: Stack[-3] = Stack[-6]
0x45d: Pop(3)
0x45e: Push("health") // @poff=651
0x45f: @@ GetProperty(Stack[-1], Stack[-3]); Obj=16 // @poff=627
0x460: Pop(1)
0x461: Push((int) 1)
0x462: Pop(1); Push(Stack[-1] - Stack[-4]);
0x463: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x464: Push("health") // @poff=651
0x465: PushEmpty(float, float, float, float)
0x466: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x467: Stack[-2] = (int) 0
0x468: Stack[-1] = (int) 1
0x469: Call2 0x5af

0x46a: Pop(3)
0x46b: @@ SetProperty(Stack[-2], Stack[-1]); Obj=17 // @poff=639
0x46c: Pop(2)
0x46d: PushEmpty(bool, object)
0x46e: Stack[-17] = Stack[-1]
0x46f: Call2 0x408

0x470: Pop(1)
0x471: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x472: PushEmpty(float)
0x473: Stack[-1] = -Stack[-2]; Pop(0);
0x474: Call2 0x5e5

0x475: Pop(1)
0x476: Stack[-1] = Stack[-16]
0x477: Return(); Pop(12)

0x478: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x479: Pop(0); PushNull((bool) Stack[-15] == 0)
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: Return(); Pop(14)

0x47c: @ IsDead(Stack[-7])
0x47d: Pop(0)
0x47e: Push(Stack[-7])
0x47f: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x480: Return(); Pop(14)

0x481: @ GetSecondaryAnimationType(Stack[-6])
0x482: Pop(0)
0x483: Push((int) 0)
0x484: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: Return(); Pop(14)

0x487: @@ GetPosition(Stack[-5]); Obj=15 // @poff=345
0x488: Pop(0)
0x489: @ GetPosition(Stack[-4])
0x48a: Pop(0)
0x48b: @ GetDirection(Stack[-3])
0x48c: Pop(0)
0x48d: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x48e: Push(CvectorIndex(Stack[-2], 0))
0x48f: Push(CvectorIndex(Stack[-4], 0))
0x490: Pop(2); Push(Stack[-2] * Stack[-1]);
0x491: Push(CvectorIndex(Stack[-3], 2))
0x492: Push(CvectorIndex(Stack[-5], 2))
0x493: Pop(2); Push(Stack[-2] * Stack[-1]);
0x494: Pop(2); Push(Stack[-2] + Stack[-1]);
0x495: Push((int) 0)
0x496: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x498: Stack[-1] = "fhit" // @poff=691
0x499: GOTO 0x49b

0x49a: Stack[-1] = "bhit" // @poff=701
0x49b: Push("hit_react") // @poff=711
0x49c: Push("1") // @poff=731
0x49d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x49e: Push("2") // @poff=735
0x49f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4a0: Push((int) -10)
0x4a1: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4a2: Pop(4)
0x4a3: Return(); Pop(14)

0x4a4: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x4a5: PushEmpty(bool)
0x4a6: Stack[-1] = (bool) 0
0x4a7: PushEmpty(bool)
0x4a8: Stack[-1] = (bool) 0
0x4a9: Push(Stack[-23])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ab: Push((int) 4)
0x4ac: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ae: Stack[-1] = (bool) 1
0x4af: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b0: Push((int) 5)
0x4b1: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b3: Stack[-1] = (bool) 1
0x4b4: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4b5: PushEmpty(cvector, cvector)
0x4b6: PushEmpty(cvector, object)
0x4b7: Stack[-25] = Stack[-1]
0x4b8: Call2 0x3f9

0x4b9: Stack[-2] = Stack[-3]
0x4ba: Pop(2)
0x4bb: Call2 0x59e

0x4bc: Stack[-2] = Stack[-11]
0x4bd: Pop(2)
0x4be: @ CreateVectorVector(Stack[-8])
0x4bf: Pop(0)
0x4c0: Stack[-7] = (int) 1
0x4c1: Push("hit") // @poff=693
0x4c2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4c3: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x4c4: Pop(1)
0x4c5: Pop(0); Push((bool) Stack[-6] == 0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c7: GOTO 0x4d1

0x4c8: Pop(0); Push(Stack[-4] | Stack[-9]);
0x4c9: Push((float)0.7071067690849304)
0x4ca: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cc: @@ add(Stack[-5]); Obj=8 // @poff=739
0x4cd: Pop(0)
0x4ce: Push((int) 1)
0x4cf: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x4d0: GOTO 0x4c1

0x4d1: @@ size(Stack[-3]); Obj=8 // @poff=743
0x4d2: Pop(0)
0x4d3: Push(Stack[-3])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4d5: @ irand(Stack[-2], Stack[-3])
0x4d6: Pop(0)
0x4d7: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=748
0x4d8: Pop(0)
0x4d9: PushEmpty(object, int, float, cvector, cvector)
0x4da: Stack[-26] = Stack[-5]
0x4db: Stack[-25] = Stack[-4]
0x4dc: Stack[-24] = Stack[-3]
0x4dd: Stack[-6] = Stack[-2]
0x4de: Stack[-1] = -Stack[-14]; Pop(0);
0x4df: Call2 0x4e8

0x4e0: Pop(5)
0x4e1: Return(); Pop(18)

0x4e2: Stack[-8] = 0
0x4e3: PushEmpty(object)
0x4e4: Stack[-22] = Stack[-1]
0x4e5: Call2 0x478

0x4e6: Pop(1)
0x4e7: Return(); Pop(18)

0x4e8: PushEmpty(object, object, object, object)
0x4e9: @ GetScene(Stack[-2])
0x4ea: Pop(0)
0x4eb: Push("scripted") // @poff=752
0x4ec: Push("blood_dir.xml") // @poff=770
0x4ed: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x4ee: Pop(2)
0x4ef: PushEmpty(object)
0x4f0: Stack[-10] = Stack[-1]
0x4f1: Call2 0x478

0x4f2: Pop(1)
0x4f3: Return(); Pop(4)

0x4f4: Stack[-1] = 0
0x4f5: Stack[-2] = 0
0x4f6: PushEmpty(bool, bool)
0x4f7: @ IsLoaded(Stack[-1])
0x4f8: Pop(0)
0x4f9: Stack[-1] = Stack[-3]
0x4fa: Return(); Pop(2)

0x4fb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x4fc: @@ GetPosition(Stack[-8]); Obj=20 // @poff=345
0x4fd: Pop(0)
0x4fe: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=543
0x4ff: Pop(0)
0x500: Push(CvectorIndex(Stack[-8], 1))
0x501: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x502: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x503: @ GetPosition(Stack[-7])
0x504: Pop(0)
0x505: @ GetEyesHeight(Stack[-9])
0x506: Pop(0)
0x507: Push(CvectorIndex(Stack[-7], 1))
0x508: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x509: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x50a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x50b: Push(CvectorIndex(Stack[-6], 1))
0x50c: Stack[-1] = (int) 0
0x50d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x50e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x50f: Pop(1); Push(Sqrt(Stack[-1]))
0x510: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x511: Stack[-5] = -Stack[-6]; Pop(0);
0x512: Pop(0); Push(Stack[-6] * Stack[-19]);
0x513: PushEmpty(cvector, cvector)
0x514: Push([0.0, 1.0, 0.0])
0x515: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x516: Call2 0x59e

0x517: Pop(1)
0x518: Push((int) 25)
0x519: Pop(2); Push(Stack[-2] * Stack[-1]);
0x51a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x51b: Push([0.0, 10.0, 0.0])
0x51c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x51d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x51e: @ IsOverrideActive(Stack[-2])
0x51f: Pop(0)
0x520: Push(Stack[-2])
0x521: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x522: Stack[-21] = (bool) 0
0x523: Return(); Pop(18)

0x524: @ StopWorld()
0x525: Pop(0)
0x526: @ CameraTransit(Stack[-3], Stack[-5])
0x527: Pop(0)
0x528: Push(CvectorIndex(Stack[-4], 0))
0x529: Push(CvectorIndex(Stack[-5], 2))
0x52a: @ Rotate(Stack[-2], Stack[-1])
0x52b: Pop(2)
0x52c: PushEmpty(bool)
0x52d: Call2 0x60d

0x52e: Pop(0)
0x52f: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x530: GOTO 0x539

0x531: Push("head") // @poff=222
0x532: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x533: Pop(1)
0x534: Push(Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x536: Push("head") // @poff=222
0x537: @ LookAsyncCamera(Stack[-1])
0x538: Pop(1)
0x539: @ CameraWaitForPlayFinish()
0x53a: Pop(0)
0x53b: @ ResumeWorld()
0x53c: Pop(0)
0x53d: Stack[-21] = (bool) 1
0x53e: Return(); Pop(18)

0x53f: PushEmpty(bool, bool)
0x540: @ CameraSwitchToNormal()
0x541: Pop(0)
0x542: PushEmpty(bool)
0x543: Call2 0x60d

0x544: Pop(0)
0x545: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x546: GOTO 0x54f

0x547: Push("head") // @poff=222
0x548: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x549: Pop(1)
0x54a: Push(Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54c: Push("head") // @poff=222
0x54d: @ UnlookAsync(Stack[-1])
0x54e: Pop(1)
0x54f: Return(); Pop(2)

0x550: PushEmpty(float, float, float, float)
0x551: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x552: Pop(0)
0x553: Push((bool) 0)
0x554: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x555: Pop(1)
0x556: Return(); Pop(4)

0x557: PushEmpty(float, float, float, float)
0x558: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x559: Pop(0)
0x55a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x55b: Pop(0)
0x55c: Return(); Pop(4)

0x55d: PushEmpty(float, cvector, float, cvector)
0x55e: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=543
0x55f: Pop(0)
0x560: Stack[-1] = [0.0, 0.0, 0.0]
0x561: Push(CvectorIndex(Stack[-1], 1))
0x562: Stack[-3] = Stack[-1]
0x563: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x564: Push("head") // @poff=222
0x565: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x566: Pop(1)
0x567: Return(); Pop(4)

0x568: PushEmpty(bool)
0x569: Call2 0x60d

0x56a: Pop(0)
0x56b: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56c: @ lshStopSpeech()
0x56d: Pop(0)
0x56e: Return(); Pop(0)

0x56f: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x570: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x571: Pop(0)
0x572: Pop(0); Push((bool) Stack[-8] == 0)
0x573: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x574: Stack[-7] = (int) 0
0x575: Push((int) 1)
0x576: Pop(1); Push(Stack[-8] + Stack[-1]);
0x577: Pop(1); Push(Stack[-18] + Stack[-1]);
0x578: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x579: Pop(1)
0x57a: Pop(0); Push((bool) Stack[-6] == 0)
0x57b: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57c: GOTO 0x580

0x57d: Push((int) 1)
0x57e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x57f: GOTO 0x575

0x580: Pop(0); Push((bool) Stack[-7] == 0)
0x581: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x582: Return(); Pop(16)

0x583: @ irand(Stack[-5], Stack[-7])
0x584: Pop(0)
0x585: Push((int) 1)
0x586: Pop(1); Push(Stack[-6] + Stack[-1]);
0x587: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x588: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x589: Pop(0)
0x58a: Push(Stack[-4])
0x58b: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x58c: @ GetEyesHeight(Stack[-3])
0x58d: Pop(0)
0x58e: @ GetDirection(Stack[-2])
0x58f: Pop(0)
0x590: Push((int) 50)
0x591: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x592: Push(CvectorIndex(Stack[-1], 1))
0x593: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x594: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x595: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x596: Pop(0)
0x597: Return(); Pop(16)

0x598: PushEmpty(object, object)
0x599: @ self(Stack[-1])
0x59a: Pop(0)
0x59b: Stack[-1] = Stack[-3]
0x59c: Return(); Pop(2)

0x59d: Stack[-1] = 0
0x59e: PushEmpty(float, float)
0x59f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5a0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5a1: Push((float)9.999999974752427e-07)
0x5a2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a4: Stack[-4] = [0.0, 0.0, 0.0]
0x5a5: Return(); Pop(2)

0x5a6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5a7: Return(); Pop(2)

0x5a8: PushEmpty()
0x5a9: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ab: Stack[-2] = Stack[-3]
0x5ac: GOTO 0x5ae

0x5ad: Stack[-1] = Stack[-3]
0x5ae: Return(); Pop(0)

0x5af: PushEmpty()
0x5b0: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b2: Stack[-2] = Stack[-4]
0x5b3: Return(); Pop(0)

0x5b4: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5b5: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b6: Stack[-1] = Stack[-4]
0x5b7: Return(); Pop(0)

0x5b8: Stack[-3] = Stack[-4]
0x5b9: Return(); Pop(0)

0x5ba: PushEmpty()
0x5bb: Pop(0); Push(Stack[-2] | Stack[-1]);
0x5bc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5bd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5be: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5bf: Pop(1); Push(Sqrt(Stack[-1]))
0x5c0: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x5c1: Return(); Pop(0)

0x5c2: PushEmpty()
0x5c3: Pop(0); Push((bool) Stack[-2] == 0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c5: Stack[-3] = (bool) 0
0x5c6: Return(); Pop(0)

0x5c7: Push((int) 0)
0x5c8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5ca: Push((int) 8)
0x5cb: @ SendWorldWndMessage(Stack[-1])
0x5cc: Pop(1)
0x5cd: GOTO 0x5d7

0x5ce: Push((int) 0)
0x5cf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d1: Push((int) 9)
0x5d2: @ SendWorldWndMessage(Stack[-1])
0x5d3: Pop(1)
0x5d4: GOTO 0x5d7

0x5d5: Stack[-3] = (bool) 0
0x5d6: Return(); Pop(0)

0x5d7: PushEmpty(float)
0x5d8: Stack[-2] = Stack[-1]
0x5d9: Call2 0x5ef

0x5da: Pop(1)
0x5db: PushEmpty(bool, object, string, float, float, float)
0x5dc: Stack[-8] = Stack[-5]
0x5dd: Stack[-4] = "reputation" // @poff=798
0x5de: Stack[-7] = Stack[-3]
0x5df: Stack[-2] = (int) 0
0x5e0: Stack[-1] = (int) 1
0x5e1: Call2 0x419

0x5e2: Pop(6)
0x5e3: Stack[-3] = (bool) 1
0x5e4: Return(); Pop(0)

0x5e5: PushEmpty(object, object)
0x5e6: @ CreateFloatVector(Stack[-1])
0x5e7: Pop(0)
0x5e8: @@ add(Stack[-3]); Obj=1 // @poff=739
0x5e9: Pop(0)
0x5ea: Push((int) 15)
0x5eb: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5ec: Pop(1)
0x5ed: Return(); Pop(2)

0x5ee: Stack[-1] = 0
0x5ef: PushEmpty(object, object)
0x5f0: @ CreateFloatVector(Stack[-1])
0x5f1: Pop(0)
0x5f2: @@ add(Stack[-3]); Obj=1 // @poff=739
0x5f3: Pop(0)
0x5f4: Push((int) 16)
0x5f5: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5f6: Pop(1)
0x5f7: Return(); Pop(2)

0x5f8: Stack[-1] = 0
0x5f9: PushEmpty(object, object)
0x5fa: @ FindActor(Stack[-1], Stack[-4])
0x5fb: Pop(0)
0x5fc: Pop(0); PushNull((bool) Stack[-1] == 0)
0x5fd: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fe: Stack[-5] = (bool) 0
0x5ff: Return(); Pop(2)

0x600: @ Trigger(Stack[-1], Stack[-3])
0x601: Pop(0)
0x602: Stack[-5] = (bool) 1
0x603: Return(); Pop(2)

0x604: Stack[-1] = 0
0x605: Stack[-1] = (int) 515595
0x606: Return(); Pop(0)

0x607: Stack[-1] = (int) 512611
0x608: Return(); Pop(0)

0x609: Stack[-1] = "ui/NPC_Black.png" // @poff=820
0x60a: Return(); Pop(0)

0x60b: Stack[-1] = "ui/NPC_Black_b.png" // @poff=854
0x60c: Return(); Pop(0)

0x60d: Stack[-1] = (bool) 0
0x60e: Return(); Pop(0)

0x60f: PushEmpty(string, string)
0x610: Stack[-1] = "idle" // @poff=146
0x611: Push(Stack[-3])
0x612: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x613: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x614: Stack[-1] = Stack[-4]
0x615: Return(); Pop(2)

0x616: PushEmpty(int, bool, int, bool)
0x617: Stack[-2] = (int) 0
0x618: Push("all") // @poff=138
0x619: PushEmpty(string, int)
0x61a: Stack[-5] = Stack[-1]
0x61b: Call2 0x60f

0x61c: Pop(1)
0x61d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x61e: Pop(2)
0x61f: Pop(0); Push((bool) Stack[-1] == 0)
0x620: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x621: GOTO 0x625

0x622: Push((int) 1)
0x623: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x624: GOTO 0x618

0x625: Stack[-2] = Stack[-5]
0x626: Return(); Pop(4)

0x627: PushEmpty()
0x628: PushEmpty()
0x629: Call2 0x631

0x62a: Pop(0)
0x62b: PushEmpty(bool, string, string)
0x62c: Stack[-2] = "quest_k5_03" // @poff=156
0x62d: Stack[-1] = "completed" // @poff=892
0x62e: Call2 0x5f9

0x62f: Pop(3)
0x630: Return(); Pop(0)

0x631: PushEmpty(object, object)
0x632: Push((int) 407)
0x633: Push((int) 2)
0x634: Push((int) 526025)
0x635: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x636: Pop(3)
0x637: PushEmpty(bool, object, int)
0x638: Stack[-4] = Stack[-2]
0x639: Stack[-1] = (int) 405
0x63a: Call2 0x64b

0x63b: Pop(3)
0x63c: Return(); Pop(2)

0x63d: Stack[-1] = 0
0x63e: PushEmpty(object, object)
0x63f: @ GetDiaryRoot(Stack[-1])
0x640: Pop(0)
0x641: Pop(0); Push((bool) Stack[-1] == 0)
0x642: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x643: Push("Can't retrieve diary root") // @poff=912
0x644: @ Trace(Stack[-1])
0x645: Pop(1)
0x646: Stack[-3] = (bool) 0
0x647: Return(); Pop(2)

0x648: Stack[-1] = Stack[-3]
0x649: Return(); Pop(2)

0x64a: Stack[-1] = 0
0x64b: PushEmpty(object, object, int, object, object, int)
0x64c: PushEmpty(object)
0x64d: Call2 0x63e

0x64e: Stack[-1] = Stack[-4]
0x64f: Pop(1)
0x650: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=964
0x651: Pop(0)
0x652: Pop(0); Push((bool) Stack[-2] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x654: Push("Can't find diary parent with id: ") // @poff=969
0x655: Pop(1); Push(Stack[-1] + Stack[-8]);
0x656: @ Trace(Stack[-1])
0x657: Pop(1)
0x658: Stack[-9] = (bool) 0
0x659: Return(); Pop(6)

0x65a: @@ AddChild(Stack[-8]); Obj=2 // @poff=1037
0x65b: Pop(0)
0x65c: Push((int) 7)
0x65d: @ SendWorldWndMessage(Stack[-1])
0x65e: Pop(1)
0x65f: @@ GetCategory(Stack[-1]); Obj=8 // @poff=1046
0x660: Pop(0)
0x661: @ SetDiarySection(Stack[-1])
0x662: Pop(0)
0x663: Stack[-9] = (bool) 0
0x664: Return(); Pop(6)

0x665: Stack[-2] = 0
0x666: Stack[-3] = 0
0x667: PushEmpty(int, int)
0x668: Push("branch") // @poff=1058
0x669: @ GetVariable(Stack[-1], Stack[-2])
0x66a: Pop(1)
0x66b: Push((int) 0)
0x66c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x66d: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66e: Stack[-3] = (int) 1
0x66f: Return(); Pop(2)

0x670: GOTO 0x676

0x671: Push((int) 1)
0x672: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x673: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x674: Stack[-3] = (int) 2
0x675: Return(); Pop(2)

0x676: Stack[-3] = (int) 3
0x677: Return(); Pop(2)

0x678: PushEmpty(object, float, object, float)
0x679: Push("player") // @poff=208
0x67a: @ FindActor(Stack[-3], Stack[-1])
0x67b: Pop(1)
0x67c: Push(Stack[-2])
0x67d: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x67e: PushEmpty(float, object)
0x67f: Stack[-4] = Stack[-1]
0x680: Call2 0x400

0x681: Pop(1)
0x682: Push((float)640000.0)
0x683: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x685: PushEmpty(float, object, float, int)
0x686: Stack[-6] = Stack[-3]
0x687: Stack[-2] = (float) 0.05000000074505806
0x688: Stack[-1] = (int) 0
0x689: Call2 0x42f

0x68a: Stack[-4] = Stack[-5]
0x68b: Pop(4)
0x68c: Push((int) 6)
0x68d: Push((float)0.05000000074505806)
0x68e: @ ReportHit(Stack[-4], Stack[-2], Stack[-3], Stack[-1])
0x68f: Pop(2)
0x690: Return(); Pop(4)

0x691: Stack[-2] = 0
0x692: PushEmpty()
0x693: PushEmpty(object)
0x694: Stack[-2] = Stack[-1]
0x695: Push(-1, 0); TaskCall(5)
0x696: Call2 0x362

0x697: Pop(-1, 0); TaskReturn
0x698: Pop(1)
0x699: Return(); Pop(0)

0x69a: PushEmpty()
0x69b: PushEmpty(object, int, float)
0x69c: Stack[-7] = Stack[-3]
0x69d: Stack[-6] = Stack[-2]
0x69e: Stack[-5] = Stack[-1]
0x69f: Call2 0x4a4

0x6a0: Pop(3)
0x6a1: Return(); Pop(0)

0x6a2: PushEmpty()
0x6a3: PushEmpty(object, int, float, cvector, cvector)
0x6a4: Stack[-11] = Stack[-5]
0x6a5: Stack[-10] = Stack[-4]
0x6a6: Stack[-9] = Stack[-3]
0x6a7: Stack[-7] = Stack[-2]
0x6a8: Stack[-6] = Stack[-1]
0x6a9: Call2 0x4e8

0x6aa: Pop(5)
0x6ab: Return(); Pop(0)

0x6ac: PushEmpty(float, float)
0x6ad: Push("health") // @poff=651
0x6ae: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6af: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b0: Push("health") // @poff=651
0x6b1: @ GetProperty(Stack[-1], Stack[-2])
0x6b2: Pop(1)
0x6b3: Push((int) 0)
0x6b4: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x6b5: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b6: @ SignalDeath(Stack[-4])
0x6b7: Pop(0)
0x6b8: Return(); Pop(2)

0x6b9: PushEmpty()
0x6ba: PushEmpty(bool, object)
0x6bb: Stack[-3] = Stack[-1]
0x6bc: Call2 0x408

0x6bd: Pop(1)
0x6be: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6bf: PushEmpty(bool, object, float)
0x6c0: Stack[-4] = Stack[-2]
0x6c1: Stack[-1] = (float) -0.10000000149011612
0x6c2: Call2 0x5c2

0x6c3: Pop(3)
0x6c4: PushEmpty(object)
0x6c5: Stack[-2] = Stack[-1]
0x6c6: Call2 0x692

0x6c7: Pop(1)
0x6c8: Return(); Pop(0)

