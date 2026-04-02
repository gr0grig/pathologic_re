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
	W:quest_d6_03
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
	W:head
	W:fire
	W:bullet
	W:phys
	W:HasProperty
	A:HasProperty
	W:health
	W:armor
	A:GetProperty
	W:armor_
	A:SetProperty
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
	W:voice_common
	W:c
	W:m
	W:d6q03
	W:ood6Albinos1
	W:branch
	W:ui/NPC_Black.png
	W:ui/NPC_Black_b.png
	W:albinos_dead
	W:player
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000710075006500730074005f00640036005f0030003300000061006c00620069006e006f0073005f007200650074007200650061007400650064000000476574506f736974696f6e00430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a00200000006600640069006500000062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f70657274790040004700650074004500790065007300480065006900670068007400000047657445796573486569676874006800650061006400000066006900720065000000620075006c006c0065007400000070006800790073000000480061007300500072006f0070006500720074007900000048617350726f7065727479006800650061006c00740068000000610072006d006f007200000047657450726f706572747900610072006d006f0072005f00000053657450726f70657274790066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c00000076006f006900630065005f0063006f006d006d006f006e000000630000006d0000006400360071003000330000006f006f006400360041006c00620069006e006f007300310000006200720061006e00630068000000750069002f004e00500043005f0042006c00610063006b002e0070006e0067000000750069002f004e00500043005f0042006c00610063006b005f0062002e0070006e006700000061006c00620069006e006f0073005f006400650061006400000070006c0061007900650072000000
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
	SetTimer (2 args)
	Sleep (1 args)
	IsPlayerActor (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	Stop (0 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	GetScene (1 args)
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
	GetVariable (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	ReportHit (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x166
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_17 Op = 0x172 Vars = (object)
		EVENT_0 Op = 0x17e Vars = (object)
		EVENT_7 Op = 0x189 Vars = (int)
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x1e7 Vars = ()
		EVENT_7 Op = 0x1ef Vars = (int)
		EVENT_41 Op = 0x29e Vars = (object)
	GTASK_4  Params = 1
		EVENT_22 Op = 0x335 Vars = (object, int, float, float)
		EVENT_16 Op = 0x337 Vars = (object, string)
		EVENT_41 Op = 0x339 Vars = (object)

Events:
EVENT_22 Op = 0x628 Vars = (object, int, float, float)
EVENT_43 Op = 0x630 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x63a Vars = (object, string)
EVENT_41 Op = 0x647 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: PushEmpty(object)
0x4: Call2 0x565

0x5: Stack[-1] = Stack[-2]
0x6: Pop(1)
0x7: Call2 0x48f

0x8: Pop(2)
0x9: PushEmpty(bool, object, float)
0xa: Stack[-12] = Stack[-2]
0xb: Stack[-1] = (float) 70.0
0xc: Call2 0x43a

0xd: Pop(2)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-10] = (int) -2
0x11: Return(); Pop(8)

0x12: @ CreateDialog(Stack[-4])
0x13: Pop(0)
0x14: PushEmpty(int)
0x15: Call2 0x5f6

0x16: Pop(0)
0x17: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x18: Pop(1)
0x19: PushEmpty(int)
0x1a: Call2 0x5f4

0x1b: Pop(0)
0x1c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1d: Pop(1)
0x1e: PushEmpty(string)
0x1f: Call2 0x5f8

0x20: Pop(0)
0x21: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22: Pop(1)
0x23: PushEmpty(string)
0x24: Call2 0x5fa

0x25: Pop(0)
0x26: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x27: Pop(1)
0x28: PushEmpty(int)
0x29: Call2 0x5e3

0x2a: Pop(0)
0x2b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x2c: Pop(1)
0x2d: Stack[-2] = (int) -1
0x2e: @ IsOverrideActive(Stack[-3])
0x2f: Pop(0)
0x30: Push(Stack[-3])
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[-10] = (int) -2
0x33: Return(); Pop(8)

0x34: @ DoDialog(Stack[-4])
0x35: Pop(0)
0x36: PushEmpty(object, object)
0x37: Stack[-11] = Stack[-2]
0x38: Stack[-6] = Stack[-1]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-10] = Stack[-1]
0x48: Call2 0x47e

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x4d: Pop(0)
0x4e: Stack[-2] = Stack[-10]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x5d7

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral" // @poff=89
0x5e: Call2 0xa4

0x5f: Pop(1)
0x60: Push((int) 512071)
0x61: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x62: Pop(1)
0x63: @@@ ClearReplies(); Obj=0 // @poff=116
0x64: Pop(0)
0x65: Push((int) 512072)
0x66: Push((int) 13294)
0x67: Push((int) 13293)
0x68: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x69: Pop(3)
0x6a: Push((int) 512083)
0x6b: Push((int) 13294)
0x6c: Push((int) 13306)
0x6d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6e: Pop(3)
0x6f: GOTO 0x86

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral" // @poff=89
0x72: Call2 0xa4

0x73: Pop(1)
0x74: Push((int) 513029)
0x75: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x76: Pop(1)
0x77: @@@ ClearReplies(); Obj=0 // @poff=116
0x78: Pop(0)
0x79: Push((int) 513030)
0x7a: Push((int) -1)
0x7b: Push((int) 14237)
0x7c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7d: Pop(3)
0x7e: Push((int) 536131)
0x7f: Push((int) -1)
0x80: Push((int) 37890)
0x81: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x5fc

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x519

0x92: Pop(1)
0x93: GOTO 0x8a

0x94: GOTO 0xa3

0x95: Push("all") // @poff=138
0x96: Push("idle") // @poff=146
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: @ WaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: Push("all") // @poff=138
0x9f: Push("idle") // @poff=146
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: GOTO 0x99

0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool)
0xa6: Call2 0x5fc

0xa7: Pop(0)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: PushEmpty(string, bool)
0xaf: Stack[-3] = Stack[-2]
0xb0: Push("") // @poff=102
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-1] = (bool) 0
0xb4: GOTO 0xb6

0xb5: Stack[-1] = (bool) 1
0xb6: Call2 0x520

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x535

0xbf: Pop(0)
0xc0: Push((int) 13311)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x5cb

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x5d1

0xcc: Pop(2)
0xcd: Push((int) 13292)
0xce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Call2 0x5d7

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xd5: PushEmpty(string)
0xd6: Stack[-1] = "Neutral" // @poff=89
0xd7: Call2 0xa4

0xd8: Pop(1)
0xd9: Push((int) 512071)
0xda: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xdb: Pop(1)
0xdc: @@@ ClearReplies(); Obj=0 // @poff=116
0xdd: Pop(0)
0xde: Push((int) 512072)
0xdf: Push((int) 13294)
0xe0: Push((int) 13293)
0xe1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe2: Pop(3)
0xe3: Push((int) 512083)
0xe4: Push((int) 13294)
0xe5: Push((int) 13306)
0xe6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Neutral" // @poff=89
0xeb: Call2 0xa4

0xec: Pop(1)
0xed: Push((int) 513029)
0xee: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xef: Pop(1)
0xf0: @@@ ClearReplies(); Obj=0 // @poff=116
0xf1: Pop(0)
0xf2: Push((int) 513030)
0xf3: Push((int) -1)
0xf4: Push((int) 14237)
0xf5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf6: Pop(3)
0xf7: Push((int) 536131)
0xf8: Push((int) -1)
0xf9: Push((int) 37890)
0xfa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 13294)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral" // @poff=89
0x102: Call2 0xa4

0x103: Pop(1)
0x104: Push((int) 512073)
0x105: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x106: Pop(1)
0x107: @@@ ClearReplies(); Obj=0 // @poff=116
0x108: Pop(0)
0x109: Push((int) 512074)
0x10a: Push((int) 13298)
0x10b: Push((int) 13295)
0x10c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10d: Pop(3)
0x10e: Push((int) 512075)
0x10f: Push((int) 13298)
0x110: Push((int) 13296)
0x111: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x112: Pop(3)
0x113: Push((int) 512076)
0x114: Push((int) 13298)
0x115: Push((int) 13297)
0x116: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Push((int) 13298)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral" // @poff=89
0x11e: Call2 0xa4

0x11f: Pop(1)
0x120: Push((int) 512077)
0x121: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x122: Pop(1)
0x123: @@@ ClearReplies(); Obj=0 // @poff=116
0x124: Pop(0)
0x125: Push((int) 512078)
0x126: Push((int) 13302)
0x127: Push((int) 13301)
0x128: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x129: Pop(3)
0x12a: Push((int) 512082)
0x12b: Push((int) 13302)
0x12c: Push((int) 13305)
0x12d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12e: Pop(3)
0x12f: Return(); Pop(0)

0x130: Push((int) 13302)
0x131: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x133: PushEmpty(string)
0x134: Stack[-1] = "Neutral" // @poff=89
0x135: Call2 0xa4

0x136: Pop(1)
0x137: Push((int) 512079)
0x138: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x139: Pop(1)
0x13a: @@@ ClearReplies(); Obj=0 // @poff=116
0x13b: Pop(0)
0x13c: Push((int) 512080)
0x13d: Push((int) 13304)
0x13e: Push((int) 13303)
0x13f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x140: Pop(3)
0x141: Push((int) 512084)
0x142: Push((int) 13304)
0x143: Push((int) 13309)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 13304)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral" // @poff=89
0x14c: Call2 0xa4

0x14d: Pop(1)
0x14e: Push((int) 512081)
0x14f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x150: Pop(1)
0x151: @@@ ClearReplies(); Obj=0 // @poff=116
0x152: Pop(0)
0x153: Push((int) 512085)
0x154: Push((int) -1)
0x155: Push((int) 13311)
0x156: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x15a: PushEmpty(bool)
0x15b: Call2 0x5fc

0x15c: Pop(0)
0x15d: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15e: @ lshStopAnimation()
0x15f: Pop(0)
0x160: GOTO 0x163

0x161: @ StopAnimation()
0x162: Pop(0)
0x163: Return(); Pop(0)

0x164: GOTO 0xbb

0x165: Return(); Pop(0)

0x166: Push((int) 100)
0x167: Push((float)1.0)
0x168: @ SetTimer(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: Push((int) 3)
0x16b: @ Sleep(Stack[-1])
0x16c: Pop(1)
0x16d: PushEmpty()
0x16e: Call2 0x191

0x16f: Pop(0)
0x170: GOTO 0x16a

0x171: Return(); Pop(0)

0x172: PushEmpty(bool, bool)
0x173: @ IsPlayerActor(Stack[-3], Stack[-1])
0x174: Pop(0)
0x175: Push(Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x177: PushEmpty(object)
0x178: Stack[-4] = Stack[-1]
0x179: Push(-1, 3); TaskCall(3)
0x17a: Call2 0x21a

0x17b: Pop(-1, 3); TaskReturn
0x17c: Pop(1)
0x17d: Return(); Pop(2)

0x17e: PushEmpty()
0x17f: PushEmpty()
0x180: Call2 0x1e2

0x181: Pop(0)
0x182: PushEmpty(int, object)
0x183: Stack[-3] = Stack[-1]
0x184: Push(-2, 1); TaskCall(0)
0x185: Call2 0x0

0x186: Pop(-2, 1); TaskReturn
0x187: Pop(2)
0x188: Return(); Pop(0)

0x189: PushEmpty()
0x18a: Push((int) 100)
0x18b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18d: PushEmpty()
0x18e: Call2 0x60e

0x18f: Pop(0)
0x190: Return(); Pop(0)

0x191: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x192: @ WaitForAnimEnd()
0x193: Pop(0)
0x194: PushEmpty(bool)
0x195: Call2 0x435

0x196: Pop(0)
0x197: Pop(1); Push((bool) Stack[-1] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: Return(); Pop(14)

0x19a: PushEmpty(int)
0x19b: Call2 0x5ba

0x19c: Stack[-1] = Stack[-8]
0x19d: Pop(1)
0x19e: Stack[-6] = (int) 0
0x19f: PushEmpty(bool)
0x1a0: Stack[-1] = (bool) 0
0x1a1: Push((int) 5)
0x1a2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a4: PushEmpty(bool)
0x1a5: Call2 0x435

0x1a6: Pop(0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Stack[-1] = (bool) 1
0x1a9: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1aa: Push((int) 3)
0x1ab: @ irand(Stack[-6], Stack[-1])
0x1ac: Pop(1)
0x1ad: Push((int) 0)
0x1ae: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b0: Push(Stack[-7])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b2: @ irand(Stack[-4], Stack[-7])
0x1b3: Pop(0)
0x1b4: Push("all") // @poff=138
0x1b5: PushEmpty(string, int)
0x1b6: Stack[-7] = Stack[-1]
0x1b7: Call2 0x5b3

0x1b8: Pop(1)
0x1b9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ba: Pop(2)
0x1bb: @ WaitForAnimEnd(Stack[-3])
0x1bc: Pop(0)
0x1bd: Pop(0); Push((bool) Stack[-3] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: GOTO 0x1dd

0x1c0: GOTO 0x1d2

0x1c1: Push((int) 1)
0x1c2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c4: Push((int) 4)
0x1c5: @ rand(Stack[-3], Stack[-1])
0x1c6: Pop(1)
0x1c7: Push((int) 1)
0x1c8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1c9: @ Sleep(Stack[-1], Stack[-2])
0x1ca: Pop(1)
0x1cb: Pop(0); Push((bool) Stack[-1] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: GOTO 0x1dd

0x1ce: GOTO 0x1d2

0x1cf: Push(Stack[-6])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: GOTO 0x1dd

0x1d2: PushEmpty(bool)
0x1d3: Call2 0x1e0

0x1d4: Pop(0)
0x1d5: Pop(1); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: GOTO 0x1dd

0x1d8: @ ResetAAS()
0x1d9: Pop(0)
0x1da: Push((int) 1)
0x1db: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1dc: GOTO 0x19f

0x1dd: @ ResetAAS()
0x1de: Pop(0)
0x1df: Return(); Pop(14)

0x1e0: Stack[-1] = (bool) 1
0x1e1: Return(); Pop(0)

0x1e2: @ StopAnimation()
0x1e3: Pop(0)
0x1e4: @ StopGroup0()
0x1e5: Pop(0)
0x1e6: Return(); Pop(0)

0x1e7: PushEmpty(bool, string, string)
0x1e8: Stack[-2] = "quest_d6_03" // @poff=156
0x1e9: Stack[-1] = "albinos_retreated" // @poff=180
0x1ea: Call2 0x59e

0x1eb: Pop(3)
0x1ec: @ Hold()
0x1ed: Pop(0)
0x1ee: Return(); Pop(0)

0x1ef: PushEmpty()
0x1f0: Push((int) 100)
0x1f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f3: PushEmpty()
0x1f4: Call2 0x60e

0x1f5: Pop(0)
0x1f6: GOTO 0x1fb

0x1f7: PushEmpty(int)
0x1f8: Stack[-2] = Stack[-1]
0x1f9: Call2 0x263

0x1fa: Pop(1)
0x1fb: Return(); Pop(0)

0x1fc: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x1fd: @ GetPosition(Stack[-6])
0x1fe: Pop(0)
0x1ff: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=216
0x200: Pop(0)
0x201: @ GetDirection(Stack[-4])
0x202: Pop(0)
0x203: PushEmpty(cvector, cvector)
0x204: PushEmpty(cvector, cvector)
0x205: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x206: Call2 0x56b

0x207: Pop(1)
0x208: Push((float)0.75)
0x209: Pop(1); Push(Stack[-8] * Stack[-1]);
0x20a: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x20b: Call2 0x56b

0x20c: Stack[-2] = Stack[-5]
0x20d: Pop(2)
0x20e: Push((int) 32)
0x20f: Push((float)7000.0)
0x210: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x211: Pop(2)
0x212: Push((int) 100)
0x213: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x214: Push((int) 0)
0x215: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: Stack[-1] = (int) 0
0x218: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x219: Return(); Pop(12)

0x21a: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x21b: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x21c: PushEmpty(cvector, float)
0x21d: Stack[-1] = (float) 1.7453293800354004
0x21e: Call2 0x1fc

0x21f: Stack[-2] = Stack[-7]
0x220: Pop(2)
0x221: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x222: Push((float)2500.0)
0x223: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x225: PushEmpty(cvector, float)
0x226: Stack[-1] = (float) 2.6179938316345215
0x227: Call2 0x1fc

0x228: Stack[-2] = Stack[-7]
0x229: Pop(2)
0x22a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x22b: Push((float)2500.0)
0x22c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x22e: Push("Can't retreat, distance: ") // @poff=228
0x22f: Pop(0); Push(Sqrt(Stack[-5]))
0x230: Pop(2); Push(Stack[-2] + Stack[-1]);
0x231: @ Trace(Stack[-1])
0x232: Pop(1)
0x233: Push((float)0.5)
0x234: @ Sleep(Stack[-1])
0x235: Pop(1)
0x236: Return(); Pop(10)

0x237: Push(CvectorIndex(Stack[-5], 0))
0x238: Push(CvectorIndex(Stack[-6], 2))
0x239: @ Rotate(Stack[-2], Stack[-1])
0x23a: Pop(2)
0x23b: PushEmpty(cvector)
0x23c: Call2 0x349

0x23d: Pop(0)
0x23e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x23f: Push((int) 120)
0x240: Push((float)0.5)
0x241: @ SetTimer(Stack[-2], Stack[-1])
0x242: Pop(2)
0x243: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x244: Push((int) 1)
0x245: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x246: Pop(1)
0x247: Push(Stack[-3])
0x248: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x249: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24b: GOTO 0x262

0x24c: GOTO 0x260

0x24d: PushEmpty(cvector, float)
0x24e: Stack[-1] = (float) 2.6179938316345215
0x24f: Call2 0x1fc

0x250: Stack[-2] = Stack[-4]
0x251: Pop(2)
0x252: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x253: Push((float)2500.0)
0x254: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x256: PushEmpty(cvector)
0x257: Call2 0x349

0x258: Pop(0)
0x259: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x25a: Push((int) 120)
0x25b: Push((float)0.5)
0x25c: @ SetTimer(Stack[-2], Stack[-1])
0x25d: Pop(2)
0x25e: GOTO 0x260

0x25f: GOTO 0x262

0x260: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x261: IF (Stack[-1] == 1) GOTO 0x244; Pop(1)

0x262: Return(); Pop(10)

0x263: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x264: Push((int) 120)
0x265: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: Return(); Pop(8)

0x268: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26a: @ Stop()
0x26b: Pop(0)
0x26c: Push((int) 1)
0x26d: @ KillTimer(Stack[-1])
0x26e: Pop(1)
0x26f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x270: GOTO 0x296

0x271: @ GetDirection(Stack[-4])
0x272: Pop(0)
0x273: Push((float)7000.0)
0x274: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x275: Pop(1)
0x276: PushEmpty(cvector, float)
0x277: Stack[-1] = (float) 1.7453293800354004
0x278: Call2 0x1fc

0x279: Stack[-2] = Stack[-4]
0x27a: Pop(2)
0x27b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x27c: PushEmpty(bool)
0x27d: Stack[-1] = (bool) 0
0x27e: Push((float)2500.0)
0x27f: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x281: PushEmpty(bool)
0x282: Stack[-1] = (bool) 1
0x283: Pop(0); Push(Stack[-5] * Stack[-5]);
0x284: Push((float)2.25)
0x285: Pop(2); Push(Stack[-2] * Stack[-1]);
0x286: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x287: IF (Stack[-1] == 1) GOTO 0x28d; Pop(1)

0x288: PushEmpty(bool)
0x289: Call2 0x2a7

0x28a: Pop(0)
0x28b: IF (Stack[-1] == 1) GOTO 0x28d; Pop(1)

0x28c: Stack[-1] = (bool) 0
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: Stack[-1] = (bool) 1
0x28f: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x290: @ Stop()
0x291: Pop(0)
0x292: PushEmpty(cvector)
0x293: Call2 0x349

0x294: Pop(0)
0x295: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x296: Return(); Pop(8)

0x297: @ Stop()
0x298: Pop(0)
0x299: Push((int) 120)
0x29a: @ KillTimer(Stack[-1])
0x29b: Pop(1)
0x29c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x29d: Return(); Pop(0)

0x29e: PushEmpty()
0x29f: PushEmpty()
0x2a0: Call2 0x297

0x2a1: Pop(0)
0x2a2: PushEmpty(object)
0x2a3: Stack[-2] = Stack[-1]
0x2a4: Call2 0x647

0x2a5: Pop(1)
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty(cvector, cvector, cvector, cvector)
0x2a8: @ GetDirection(Stack[-2])
0x2a9: Pop(0)
0x2aa: PushEmpty(cvector, object)
0x2ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ac: Call2 0x34e

0x2ad: Stack[-2] = Stack[-3]
0x2ae: Pop(2)
0x2af: PushEmpty(float, cvector, cvector)
0x2b0: Stack[-5] = Stack[-2]
0x2b1: Stack[-4] = Stack[-1]
0x2b2: Call2 0x587

0x2b3: Pop(2)
0x2b4: Push((float)-0.3420201241970062)
0x2b5: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x2b6: Return(); Pop(4)

0x2b7: PushEmpty()
0x2b8: PushEmpty(object)
0x2b9: Stack[-2] = Stack[-1]
0x2ba: Call2 0x2c0

0x2bb: Pop(1)
0x2bc: @ Hold()
0x2bd: Pop(0)
0x2be: GOTO 0x2bc

0x2bf: Return(); Pop(0)

0x2c0: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x2c1: Pop(0); PushNull((bool) Stack[-21] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c3: PushEmpty(string)
0x2c4: Stack[-1] = "fdie" // @poff=280
0x2c5: Call2 0x31b

0x2c6: Pop(1)
0x2c7: GOTO 0x31a

0x2c8: @@ GetPosition(Stack[-10]); Obj=21 // @poff=216
0x2c9: Pop(0)
0x2ca: @ GetPosition(Stack[-9])
0x2cb: Pop(0)
0x2cc: @ GetDirection(Stack[-8])
0x2cd: Pop(0)
0x2ce: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2cf: Push(CvectorIndex(Stack[-7], 0))
0x2d0: Push(CvectorIndex(Stack[-9], 0))
0x2d1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d2: Push(CvectorIndex(Stack[-8], 2))
0x2d3: Push(CvectorIndex(Stack[-10], 2))
0x2d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d6: Push((int) 0)
0x2d7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d9: Stack[-6] = "fdie" // @poff=280
0x2da: GOTO 0x2dc

0x2db: Stack[-6] = "bdie" // @poff=290
0x2dc: @ RemoveRTEnvelope()
0x2dd: Pop(0)
0x2de: @ SetDeathState()
0x2df: Pop(0)
0x2e0: @ Stop()
0x2e1: Pop(0)
0x2e2: @ StopAsync()
0x2e3: Pop(0)
0x2e4: Stack[-21] = Stack[-5]
0x2e5: Push("GetScriptProperty") // @poff=300
0x2e6: Push((int) 2)
0x2e7: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2e8: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2e9: Push("Owner") // @poff=336
0x2ea: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=348
0x2eb: Pop(1)
0x2ec: Push(Stack[-4])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2ee: Push("Owner") // @poff=336
0x2ef: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=366
0x2f0: Pop(1)
0x2f1: Pop(0); PushNull((bool) Stack[-5] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: Stack[-21] = Stack[-5]
0x2f4: Push("@GetEyesHeight") // @poff=384
0x2f5: Push((int) 1)
0x2f6: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2f7: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2f8: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=414
0x2f9: Pop(0)
0x2fa: Stack[-1] = [0.0, 0.0, 0.0]
0x2fb: Push(CvectorIndex(Stack[-1], 1))
0x2fc: Stack[-3] = Stack[-1]
0x2fd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2fe: Push("head") // @poff=428
0x2ff: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x300: Pop(1)
0x301: Stack[-3] = (bool) 1
0x302: GOTO 0x304

0x303: Stack[-3] = (bool) 0
0x304: PushEmpty(string)
0x305: Stack[-7] = Stack[-1]
0x306: Call2 0x53c

0x307: Pop(1)
0x308: Push("all") // @poff=138
0x309: @ PlayAnimation(Stack[-1], Stack[-7])
0x30a: Pop(1)
0x30b: @ WaitForAnimEnd()
0x30c: Pop(0)
0x30d: Push(Stack[-3])
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: @ StopAsync()
0x310: Pop(0)
0x311: Push("head") // @poff=428
0x312: @ UnlookAsync(Stack[-1])
0x313: Pop(1)
0x314: Push("all") // @poff=138
0x315: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x316: Pop(1)
0x317: @ RemoveEnvelope()
0x318: Pop(0)
0x319: Stack[-5] = 0
0x31a: Return(); Pop(20)

0x31b: PushEmpty()
0x31c: @ RemoveRTEnvelope()
0x31d: Pop(0)
0x31e: @ SetDeathState()
0x31f: Pop(0)
0x320: @ Stop()
0x321: Pop(0)
0x322: @ StopAsync()
0x323: Pop(0)
0x324: @ StopSecondaryAnimation()
0x325: Pop(0)
0x326: PushEmpty(string)
0x327: Stack[-2] = Stack[-1]
0x328: Call2 0x53c

0x329: Pop(1)
0x32a: Push("all") // @poff=138
0x32b: @ PlayAnimation(Stack[-1], Stack[-2])
0x32c: Pop(1)
0x32d: @ WaitForAnimEnd()
0x32e: Pop(0)
0x32f: Push("all") // @poff=138
0x330: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x331: Pop(1)
0x332: @ RemoveEnvelope()
0x333: Pop(0)
0x334: Return(); Pop(0)

0x335: PushEmpty()
0x336: Return(); Pop(0)

0x337: PushEmpty()
0x338: Return(); Pop(0)

0x339: PushEmpty()
0x33a: Return(); Pop(0)

0x33b: PushEmpty()
0x33c: Push((int) 2)
0x33d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33f: Stack[-2] = "fire" // @poff=438
0x340: Return(); Pop(0)

0x341: GOTO 0x347

0x342: Push((int) 1)
0x343: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-2] = "bullet" // @poff=448
0x346: Return(); Pop(0)

0x347: Stack[-2] = "phys" // @poff=462
0x348: Return(); Pop(0)

0x349: PushEmpty(cvector, cvector)
0x34a: @ GetPosition(Stack[-1])
0x34b: Pop(0)
0x34c: Stack[-1] = Stack[-3]
0x34d: Return(); Pop(2)

0x34e: PushEmpty(cvector, cvector, cvector, cvector)
0x34f: @ GetPosition(Stack[-2])
0x350: Pop(0)
0x351: @@ GetPosition(Stack[-1]); Obj=5 // @poff=216
0x352: Pop(0)
0x353: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x354: Return(); Pop(4)

0x355: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x356: @ GetPosition(Stack[-3])
0x357: Pop(0)
0x358: @@ GetPosition(Stack[-2]); Obj=7 // @poff=216
0x359: Pop(0)
0x35a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x35b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x35c: Return(); Pop(6)

0x35d: PushEmpty(bool, bool)
0x35e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x35f: Pop(0)
0x360: Stack[-1] = Stack[-4]
0x361: Return(); Pop(2)

0x362: PushEmpty(bool, bool)
0x363: Push("HasProperty") // @poff=472
0x364: Push((int) 2)
0x365: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x366: Pop(1); Push((bool) Stack[-1] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-5] = (bool) 0
0x369: Return(); Pop(2)

0x36a: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=496
0x36b: Pop(0)
0x36c: Stack[-1] = Stack[-5]
0x36d: Return(); Pop(2)

0x36e: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x36f: PushEmpty(bool, object, string)
0x370: Stack[-18] = Stack[-2]
0x371: Stack[-1] = "health" // @poff=508
0x372: Call2 0x362

0x373: Pop(2)
0x374: Pop(1); Push((bool) Stack[-1] == 0)
0x375: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x376: Stack[-16] = (float) 0.0
0x377: Return(); Pop(12)

0x378: PushEmpty(bool, object, string)
0x379: Stack[-18] = Stack[-2]
0x37a: Stack[-1] = "armor" // @poff=522
0x37b: Call2 0x362

0x37c: Pop(2)
0x37d: Pop(1); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-6] = (int) 0
0x380: GOTO 0x384

0x381: Push("armor") // @poff=522
0x382: @@ GetProperty(Stack[-1], Stack[-7]); Obj=16 // @poff=534
0x383: Pop(1)
0x384: Push("armor_") // @poff=546
0x385: PushEmpty(string, int)
0x386: Stack[-16] = Stack[-1]
0x387: Call2 0x33b

0x388: Pop(1)
0x389: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x38a: PushEmpty(bool, object, string)
0x38b: Stack[-18] = Stack[-2]
0x38c: Stack[-8] = Stack[-1]
0x38d: Call2 0x362

0x38e: Pop(2)
0x38f: Pop(1); Push((bool) Stack[-1] == 0)
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-4] = (int) 0
0x392: GOTO 0x395

0x393: @@ GetProperty(Stack[-5], Stack[-4]); Obj=15 // @poff=534
0x394: Pop(0)
0x395: PushEmpty(float, float, float)
0x396: Pop(0); Push(Stack[-9] + Stack[-7]);
0x397: Push((float)100.0)
0x398: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x399: Stack[-1] = (int) 1
0x39a: Call2 0x575

0x39b: Stack[-3] = Stack[-6]
0x39c: Pop(3)
0x39d: Push("health") // @poff=508
0x39e: @@ GetProperty(Stack[-1], Stack[-3]); Obj=16 // @poff=534
0x39f: Pop(1)
0x3a0: Push((int) 1)
0x3a1: Pop(1); Push(Stack[-1] - Stack[-4]);
0x3a2: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x3a3: Push("health") // @poff=508
0x3a4: PushEmpty(float, float, float, float)
0x3a5: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3a6: Stack[-2] = (int) 0
0x3a7: Stack[-1] = (int) 1
0x3a8: Call2 0x57c

0x3a9: Pop(3)
0x3aa: @@ SetProperty(Stack[-2], Stack[-1]); Obj=17 // @poff=560
0x3ab: Pop(2)
0x3ac: PushEmpty(bool, object)
0x3ad: Stack[-17] = Stack[-1]
0x3ae: Call2 0x35d

0x3af: Pop(1)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b1: PushEmpty(float)
0x3b2: Stack[-1] = -Stack[-2]; Pop(0);
0x3b3: Call2 0x594

0x3b4: Pop(1)
0x3b5: Stack[-1] = Stack[-16]
0x3b6: Return(); Pop(12)

0x3b7: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x3b8: Pop(0); PushNull((bool) Stack[-15] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ba: Return(); Pop(14)

0x3bb: @ IsDead(Stack[-7])
0x3bc: Pop(0)
0x3bd: Push(Stack[-7])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: Return(); Pop(14)

0x3c0: @ GetSecondaryAnimationType(Stack[-6])
0x3c1: Pop(0)
0x3c2: Push((int) 0)
0x3c3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c5: Return(); Pop(14)

0x3c6: @@ GetPosition(Stack[-5]); Obj=15 // @poff=216
0x3c7: Pop(0)
0x3c8: @ GetPosition(Stack[-4])
0x3c9: Pop(0)
0x3ca: @ GetDirection(Stack[-3])
0x3cb: Pop(0)
0x3cc: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x3cd: Push(CvectorIndex(Stack[-2], 0))
0x3ce: Push(CvectorIndex(Stack[-4], 0))
0x3cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3d0: Push(CvectorIndex(Stack[-3], 2))
0x3d1: Push(CvectorIndex(Stack[-5], 2))
0x3d2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3d3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d4: Push((int) 0)
0x3d5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d7: Stack[-1] = "fhit" // @poff=572
0x3d8: GOTO 0x3da

0x3d9: Stack[-1] = "bhit" // @poff=582
0x3da: Push("hit_react") // @poff=592
0x3db: Push("1") // @poff=612
0x3dc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3dd: Push("2") // @poff=616
0x3de: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3df: Push((int) -10)
0x3e0: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3e1: Pop(4)
0x3e2: Return(); Pop(14)

0x3e3: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x3e4: PushEmpty(bool)
0x3e5: Stack[-1] = (bool) 0
0x3e6: PushEmpty(bool)
0x3e7: Stack[-1] = (bool) 0
0x3e8: Push(Stack[-23])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ea: Push((int) 4)
0x3eb: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ed: Stack[-1] = (bool) 1
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ef: Push((int) 5)
0x3f0: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f2: Stack[-1] = (bool) 1
0x3f3: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x3f4: PushEmpty(cvector, cvector)
0x3f5: PushEmpty(cvector, object)
0x3f6: Stack[-25] = Stack[-1]
0x3f7: Call2 0x34e

0x3f8: Stack[-2] = Stack[-3]
0x3f9: Pop(2)
0x3fa: Call2 0x56b

0x3fb: Stack[-2] = Stack[-11]
0x3fc: Pop(2)
0x3fd: @ CreateVectorVector(Stack[-8])
0x3fe: Pop(0)
0x3ff: Stack[-7] = (int) 1
0x400: Push("hit") // @poff=574
0x401: Pop(1); Push(Stack[-1] + Stack[-8]);
0x402: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x403: Pop(1)
0x404: Pop(0); Push((bool) Stack[-6] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x406: GOTO 0x410

0x407: Pop(0); Push(Stack[-4] | Stack[-9]);
0x408: Push((float)0.7071067690849304)
0x409: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: @@ add(Stack[-5]); Obj=8 // @poff=620
0x40c: Pop(0)
0x40d: Push((int) 1)
0x40e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x40f: GOTO 0x400

0x410: @@ size(Stack[-3]); Obj=8 // @poff=624
0x411: Pop(0)
0x412: Push(Stack[-3])
0x413: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x414: @ irand(Stack[-2], Stack[-3])
0x415: Pop(0)
0x416: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=629
0x417: Pop(0)
0x418: PushEmpty(object, int, float, cvector, cvector)
0x419: Stack[-26] = Stack[-5]
0x41a: Stack[-25] = Stack[-4]
0x41b: Stack[-24] = Stack[-3]
0x41c: Stack[-6] = Stack[-2]
0x41d: Stack[-1] = -Stack[-14]; Pop(0);
0x41e: Call2 0x427

0x41f: Pop(5)
0x420: Return(); Pop(18)

0x421: Stack[-8] = 0
0x422: PushEmpty(object)
0x423: Stack[-22] = Stack[-1]
0x424: Call2 0x3b7

0x425: Pop(1)
0x426: Return(); Pop(18)

0x427: PushEmpty(object, object, object, object)
0x428: @ GetScene(Stack[-2])
0x429: Pop(0)
0x42a: Push("scripted") // @poff=633
0x42b: Push("blood_dir.xml") // @poff=651
0x42c: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x42d: Pop(2)
0x42e: PushEmpty(object)
0x42f: Stack[-10] = Stack[-1]
0x430: Call2 0x3b7

0x431: Pop(1)
0x432: Return(); Pop(4)

0x433: Stack[-1] = 0
0x434: Stack[-2] = 0
0x435: PushEmpty(bool, bool)
0x436: @ IsLoaded(Stack[-1])
0x437: Pop(0)
0x438: Stack[-1] = Stack[-3]
0x439: Return(); Pop(2)

0x43a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x43b: @@ GetPosition(Stack[-8]); Obj=20 // @poff=216
0x43c: Pop(0)
0x43d: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=414
0x43e: Pop(0)
0x43f: Push(CvectorIndex(Stack[-8], 1))
0x440: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x441: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x442: @ GetPosition(Stack[-7])
0x443: Pop(0)
0x444: @ GetEyesHeight(Stack[-9])
0x445: Pop(0)
0x446: Push(CvectorIndex(Stack[-7], 1))
0x447: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x448: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x449: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x44a: Push(CvectorIndex(Stack[-6], 1))
0x44b: Stack[-1] = (int) 0
0x44c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x44d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x44e: Pop(1); Push(Sqrt(Stack[-1]))
0x44f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x450: Stack[-5] = -Stack[-6]; Pop(0);
0x451: Pop(0); Push(Stack[-6] * Stack[-19]);
0x452: PushEmpty(cvector, cvector)
0x453: Push([0.0, 1.0, 0.0])
0x454: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x455: Call2 0x56b

0x456: Pop(1)
0x457: Push((int) 25)
0x458: Pop(2); Push(Stack[-2] * Stack[-1]);
0x459: Pop(2); Push(Stack[-2] + Stack[-1]);
0x45a: Push([0.0, 10.0, 0.0])
0x45b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x45c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x45d: @ IsOverrideActive(Stack[-2])
0x45e: Pop(0)
0x45f: Push(Stack[-2])
0x460: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x461: Stack[-21] = (bool) 0
0x462: Return(); Pop(18)

0x463: @ StopWorld()
0x464: Pop(0)
0x465: @ CameraTransit(Stack[-3], Stack[-5])
0x466: Pop(0)
0x467: Push(CvectorIndex(Stack[-4], 0))
0x468: Push(CvectorIndex(Stack[-5], 2))
0x469: @ Rotate(Stack[-2], Stack[-1])
0x46a: Pop(2)
0x46b: PushEmpty(bool)
0x46c: Call2 0x5fc

0x46d: Pop(0)
0x46e: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46f: GOTO 0x478

0x470: Push("head") // @poff=428
0x471: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x472: Pop(1)
0x473: Push(Stack[-1])
0x474: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x475: Push("head") // @poff=428
0x476: @ LookAsyncCamera(Stack[-1])
0x477: Pop(1)
0x478: @ CameraWaitForPlayFinish()
0x479: Pop(0)
0x47a: @ ResumeWorld()
0x47b: Pop(0)
0x47c: Stack[-21] = (bool) 1
0x47d: Return(); Pop(18)

0x47e: PushEmpty(bool, bool)
0x47f: @ CameraSwitchToNormal()
0x480: Pop(0)
0x481: PushEmpty(bool)
0x482: Call2 0x5fc

0x483: Pop(0)
0x484: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x485: GOTO 0x48e

0x486: Push("head") // @poff=428
0x487: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x488: Pop(1)
0x489: Push(Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48b: Push("head") // @poff=428
0x48c: @ UnlookAsync(Stack[-1])
0x48d: Pop(1)
0x48e: Return(); Pop(2)

0x48f: PushEmpty(int, int, int, int)
0x490: Push("voice_common") // @poff=679
0x491: @ GetVariable(Stack[-1], Stack[-3])
0x492: Pop(1)
0x493: Push(Stack[-2])
0x494: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x495: PushEmpty(bool, object)
0x496: Stack[-7] = Stack[-1]
0x497: Call2 0x4c9

0x498: Pop(1)
0x499: Pop(1); Push((bool) Stack[-1] == 0)
0x49a: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49b: PushEmpty(bool, object)
0x49c: Stack[-7] = Stack[-1]
0x49d: Call2 0x4ee

0x49e: Pop(1)
0x49f: Pop(1); Push((bool) Stack[-1] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a1: Stack[-6] = (bool) 0
0x4a2: Return(); Pop(4)

0x4a3: Push((int) 2)
0x4a4: @ irand(Stack[-2], Stack[-1])
0x4a5: Pop(1)
0x4a6: Push(Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a8: Push("voice_common") // @poff=679
0x4a9: Push((int) 1)
0x4aa: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4ab: Push((int) 3)
0x4ac: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4ad: @ SetVariable(Stack[-2], Stack[-1])
0x4ae: Pop(2)
0x4af: GOTO 0x4b4

0x4b0: Push("voice_common") // @poff=679
0x4b1: Push((int) 0)
0x4b2: @ SetVariable(Stack[-2], Stack[-1])
0x4b3: Pop(2)
0x4b4: GOTO 0x4c7

0x4b5: PushEmpty(bool, object)
0x4b6: Stack[-7] = Stack[-1]
0x4b7: Call2 0x4ee

0x4b8: Pop(1)
0x4b9: Pop(1); Push((bool) Stack[-1] == 0)
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4bb: PushEmpty(bool, object)
0x4bc: Stack[-7] = Stack[-1]
0x4bd: Call2 0x4c9

0x4be: Pop(1)
0x4bf: Pop(1); Push((bool) Stack[-1] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c1: Stack[-6] = (bool) 0
0x4c2: Return(); Pop(4)

0x4c3: Push("voice_common") // @poff=679
0x4c4: Push((int) 1)
0x4c5: @ SetVariable(Stack[-2], Stack[-1])
0x4c6: Pop(2)
0x4c7: Stack[-6] = (bool) 1
0x4c8: Return(); Pop(4)

0x4c9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4ca: Stack[-5] = "c" // @poff=705
0x4cb: Stack[-4] = (int) 0
0x4cc: Push((int) 1)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4ce: Push((int) 1)
0x4cf: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4d0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4d1: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=496
0x4d2: Pop(1)
0x4d3: Pop(0); Push((bool) Stack[-3] == 0)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d5: GOTO 0x4d9

0x4d6: Push((int) 1)
0x4d7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4d8: GOTO 0x4cc

0x4d9: Pop(0); Push((bool) Stack[-4] == 0)
0x4da: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4db: Stack[-12] = (bool) 0
0x4dc: Return(); Pop(10)

0x4dd: Stack[-2] = (int) 0
0x4de: Push((int) 1)
0x4df: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e1: @ irand(Stack[-2], Stack[-4])
0x4e2: Pop(0)
0x4e3: Push((int) 1)
0x4e4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4e5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4e6: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=534
0x4e7: Pop(1)
0x4e8: PushEmpty(bool, string)
0x4e9: Stack[-3] = Stack[-1]
0x4ea: Call2 0x526

0x4eb: Stack[-2] = Stack[-14]
0x4ec: Pop(2)
0x4ed: Return(); Pop(10)

0x4ee: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4ef: Push("d") // @poff=212
0x4f0: PushEmpty(int)
0x4f1: Call2 0x5aa

0x4f2: Pop(0)
0x4f3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4f4: Push("m") // @poff=709
0x4f5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4f6: Stack[-4] = (int) 0
0x4f7: Push((int) 1)
0x4f8: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4f9: Push((int) 1)
0x4fa: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4fb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4fc: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=496
0x4fd: Pop(1)
0x4fe: Pop(0); Push((bool) Stack[-3] == 0)
0x4ff: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x500: GOTO 0x504

0x501: Push((int) 1)
0x502: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x503: GOTO 0x4f7

0x504: Pop(0); Push((bool) Stack[-4] == 0)
0x505: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x506: Stack[-12] = (bool) 0
0x507: Return(); Pop(10)

0x508: Stack[-2] = (int) 0
0x509: Push((int) 1)
0x50a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x50b: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50c: @ irand(Stack[-2], Stack[-4])
0x50d: Pop(0)
0x50e: Push((int) 1)
0x50f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x510: Pop(1); Push(Stack[-6] + Stack[-1]);
0x511: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=534
0x512: Pop(1)
0x513: PushEmpty(bool, string)
0x514: Stack[-3] = Stack[-1]
0x515: Call2 0x526

0x516: Stack[-2] = Stack[-14]
0x517: Pop(2)
0x518: Return(); Pop(10)

0x519: PushEmpty(float, float, float, float)
0x51a: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x51b: Pop(0)
0x51c: Push((bool) 0)
0x51d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x51e: Pop(1)
0x51f: Return(); Pop(4)

0x520: PushEmpty(float, float, float, float)
0x521: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x522: Pop(0)
0x523: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x524: Pop(0)
0x525: Return(); Pop(4)

0x526: PushEmpty(bool, bool)
0x527: PushEmpty(bool)
0x528: Call2 0x5fc

0x529: Pop(0)
0x52a: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x52b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x52c: Pop(0)
0x52d: Push(Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x52f: @ lshPlaySpeech(Stack[-3])
0x530: Pop(0)
0x531: Stack[-4] = (bool) 1
0x532: Return(); Pop(2)

0x533: Stack[-4] = (bool) 0
0x534: Return(); Pop(2)

0x535: PushEmpty(bool)
0x536: Call2 0x5fc

0x537: Pop(0)
0x538: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x539: @ lshStopSpeech()
0x53a: Pop(0)
0x53b: Return(); Pop(0)

0x53c: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x53d: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x53e: Pop(0)
0x53f: Pop(0); Push((bool) Stack[-8] == 0)
0x540: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x541: Stack[-7] = (int) 0
0x542: Push((int) 1)
0x543: Pop(1); Push(Stack[-8] + Stack[-1]);
0x544: Pop(1); Push(Stack[-18] + Stack[-1]);
0x545: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x546: Pop(1)
0x547: Pop(0); Push((bool) Stack[-6] == 0)
0x548: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x549: GOTO 0x54d

0x54a: Push((int) 1)
0x54b: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x54c: GOTO 0x542

0x54d: Pop(0); Push((bool) Stack[-7] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: Return(); Pop(16)

0x550: @ irand(Stack[-5], Stack[-7])
0x551: Pop(0)
0x552: Push((int) 1)
0x553: Pop(1); Push(Stack[-6] + Stack[-1]);
0x554: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x555: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x556: Pop(0)
0x557: Push(Stack[-4])
0x558: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x559: @ GetEyesHeight(Stack[-3])
0x55a: Pop(0)
0x55b: @ GetDirection(Stack[-2])
0x55c: Pop(0)
0x55d: Push((int) 50)
0x55e: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x55f: Push(CvectorIndex(Stack[-1], 1))
0x560: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x561: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x562: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x563: Pop(0)
0x564: Return(); Pop(16)

0x565: PushEmpty(object, object)
0x566: @ self(Stack[-1])
0x567: Pop(0)
0x568: Stack[-1] = Stack[-3]
0x569: Return(); Pop(2)

0x56a: Stack[-1] = 0
0x56b: PushEmpty(float, float)
0x56c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x56d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x56e: Push((float)9.999999974752427e-07)
0x56f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x571: Stack[-4] = [0.0, 0.0, 0.0]
0x572: Return(); Pop(2)

0x573: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x574: Return(); Pop(2)

0x575: PushEmpty()
0x576: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x578: Stack[-2] = Stack[-3]
0x579: GOTO 0x57b

0x57a: Stack[-1] = Stack[-3]
0x57b: Return(); Pop(0)

0x57c: PushEmpty()
0x57d: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x57e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x57f: Stack[-2] = Stack[-4]
0x580: Return(); Pop(0)

0x581: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x583: Stack[-1] = Stack[-4]
0x584: Return(); Pop(0)

0x585: Stack[-3] = Stack[-4]
0x586: Return(); Pop(0)

0x587: PushEmpty()
0x588: Pop(0); Push(Stack[-2] | Stack[-1]);
0x589: Pop(0); Push(Stack[-3] | Stack[-3]);
0x58a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x58b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x58c: Pop(1); Push(Sqrt(Stack[-1]))
0x58d: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x58e: Return(); Pop(0)

0x58f: PushEmpty(int, int)
0x590: @ GetVariable(Stack[-3], Stack[-1])
0x591: Pop(0)
0x592: Stack[-1] = Stack[-4]
0x593: Return(); Pop(2)

0x594: PushEmpty(object, object)
0x595: @ CreateFloatVector(Stack[-1])
0x596: Pop(0)
0x597: @@ add(Stack[-3]); Obj=1 // @poff=620
0x598: Pop(0)
0x599: Push((int) 15)
0x59a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x59b: Pop(1)
0x59c: Return(); Pop(2)

0x59d: Stack[-1] = 0
0x59e: PushEmpty(object, object)
0x59f: @ FindActor(Stack[-1], Stack[-4])
0x5a0: Pop(0)
0x5a1: Pop(0); PushNull((bool) Stack[-1] == 0)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a3: Stack[-5] = (bool) 0
0x5a4: Return(); Pop(2)

0x5a5: @ Trigger(Stack[-1], Stack[-3])
0x5a6: Pop(0)
0x5a7: Stack[-5] = (bool) 1
0x5a8: Return(); Pop(2)

0x5a9: Stack[-1] = 0
0x5aa: PushEmpty(float, float)
0x5ab: @ GetGameTime(Stack[-1])
0x5ac: Pop(0)
0x5ad: Push((int) 1)
0x5ae: PushEmpty(int)
0x5af: Push((int) 24)
0x5b0: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5b1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5b2: Return(); Pop(2)

0x5b3: PushEmpty(string, string)
0x5b4: Stack[-1] = "idle" // @poff=146
0x5b5: Push(Stack[-3])
0x5b6: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b7: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5b8: Stack[-1] = Stack[-4]
0x5b9: Return(); Pop(2)

0x5ba: PushEmpty(int, bool, int, bool)
0x5bb: Stack[-2] = (int) 0
0x5bc: Push("all") // @poff=138
0x5bd: PushEmpty(string, int)
0x5be: Stack[-5] = Stack[-1]
0x5bf: Call2 0x5b3

0x5c0: Pop(1)
0x5c1: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5c2: Pop(2)
0x5c3: Pop(0); Push((bool) Stack[-1] == 0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c5: GOTO 0x5c9

0x5c6: Push((int) 1)
0x5c7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5c8: GOTO 0x5bc

0x5c9: Stack[-2] = Stack[-5]
0x5ca: Return(); Pop(4)

0x5cb: PushEmpty()
0x5cc: Push("d6q03") // @poff=713
0x5cd: Push((int) 2)
0x5ce: @ SetVariable(Stack[-2], Stack[-1])
0x5cf: Pop(2)
0x5d0: Return(); Pop(0)

0x5d1: PushEmpty()
0x5d2: Push("ood6Albinos1") // @poff=725
0x5d3: Push((int) 1)
0x5d4: @ SetVariable(Stack[-2], Stack[-1])
0x5d5: Pop(2)
0x5d6: Return(); Pop(0)

0x5d7: PushEmpty()
0x5d8: PushEmpty(int, string)
0x5d9: Stack[-1] = "ood6Albinos1" // @poff=725
0x5da: Call2 0x58f

0x5db: Pop(1)
0x5dc: Push((int) 0)
0x5dd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5df: Stack[-2] = (bool) 1
0x5e0: Return(); Pop(0)

0x5e1: Stack[-2] = (bool) 0
0x5e2: Return(); Pop(0)

0x5e3: PushEmpty(int, int)
0x5e4: Push("branch") // @poff=751
0x5e5: @ GetVariable(Stack[-1], Stack[-2])
0x5e6: Pop(1)
0x5e7: Push((int) 0)
0x5e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5ea: Stack[-3] = (int) 1
0x5eb: Return(); Pop(2)

0x5ec: GOTO 0x5f2

0x5ed: Push((int) 1)
0x5ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f0: Stack[-3] = (int) 2
0x5f1: Return(); Pop(2)

0x5f2: Stack[-3] = (int) 3
0x5f3: Return(); Pop(2)

0x5f4: Stack[-1] = (int) 515595
0x5f5: Return(); Pop(0)

0x5f6: Stack[-1] = (int) 512611
0x5f7: Return(); Pop(0)

0x5f8: Stack[-1] = "ui/NPC_Black.png" // @poff=765
0x5f9: Return(); Pop(0)

0x5fa: Stack[-1] = "ui/NPC_Black_b.png" // @poff=799
0x5fb: Return(); Pop(0)

0x5fc: Stack[-1] = (bool) 0
0x5fd: Return(); Pop(0)

0x5fe: PushEmpty()
0x5ff: Push((int) 100)
0x600: @ KillTimer(Stack[-1])
0x601: Pop(1)
0x602: PushEmpty(bool, string, string)
0x603: Stack[-2] = "quest_d6_03" // @poff=156
0x604: Stack[-1] = "albinos_dead" // @poff=837
0x605: Call2 0x59e

0x606: Pop(3)
0x607: PushEmpty(object)
0x608: Stack[-2] = Stack[-1]
0x609: Push(-1, 0); TaskCall(4)
0x60a: Call2 0x2b7

0x60b: Pop(-1, 0); TaskReturn
0x60c: Pop(1)
0x60d: Return(); Pop(0)

0x60e: PushEmpty(object, float, object, float)
0x60f: Push("player") // @poff=863
0x610: @ FindActor(Stack[-3], Stack[-1])
0x611: Pop(1)
0x612: Push(Stack[-2])
0x613: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x614: PushEmpty(float, object)
0x615: Stack[-4] = Stack[-1]
0x616: Call2 0x355

0x617: Pop(1)
0x618: Push((float)640000.0)
0x619: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x61b: PushEmpty(float, object, float, int)
0x61c: Stack[-6] = Stack[-3]
0x61d: Stack[-2] = (float) 0.05000000074505806
0x61e: Stack[-1] = (int) 0
0x61f: Call2 0x36e

0x620: Stack[-4] = Stack[-5]
0x621: Pop(4)
0x622: Push((int) 6)
0x623: Push((float)0.05000000074505806)
0x624: @ ReportHit(Stack[-4], Stack[-2], Stack[-3], Stack[-1])
0x625: Pop(2)
0x626: Return(); Pop(4)

0x627: Stack[-2] = 0
0x628: PushEmpty()
0x629: PushEmpty(object, int, float)
0x62a: Stack[-7] = Stack[-3]
0x62b: Stack[-6] = Stack[-2]
0x62c: Stack[-5] = Stack[-1]
0x62d: Call2 0x3e3

0x62e: Pop(3)
0x62f: Return(); Pop(0)

0x630: PushEmpty()
0x631: PushEmpty(object, int, float, cvector, cvector)
0x632: Stack[-11] = Stack[-5]
0x633: Stack[-10] = Stack[-4]
0x634: Stack[-9] = Stack[-3]
0x635: Stack[-7] = Stack[-2]
0x636: Stack[-6] = Stack[-1]
0x637: Call2 0x427

0x638: Pop(5)
0x639: Return(); Pop(0)

0x63a: PushEmpty(float, float)
0x63b: Push("health") // @poff=508
0x63c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x63e: Push("health") // @poff=508
0x63f: @ GetProperty(Stack[-1], Stack[-2])
0x640: Pop(1)
0x641: Push((int) 0)
0x642: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x644: @ SignalDeath(Stack[-4])
0x645: Pop(0)
0x646: Return(); Pop(2)

0x647: PushEmpty()
0x648: PushEmpty(object)
0x649: Stack[-2] = Stack[-1]
0x64a: Call2 0x5fe

0x64b: Pop(1)
0x64c: Return(); Pop(0)

