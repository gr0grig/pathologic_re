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
	W:fdie
	A:GetPosition
	W:bdie
	W:GetScriptProperty
	W:Owner
	A:HasScriptProperty
	A:GetScriptProperty
	W:@GetEyesHeight
	A:GetEyesHeight
	W:head
	W:attack_on
	W:attack_stay
	W:attack_off
	W:Can't retreat, distance: 
	W:HasProperty
	A:HasProperty
	A:IsDead
	W:IsDead
	A:GetScene
	W:noaccess
	A:GetProperty
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
	W:branch
	W:GenerateMoney: iMin > iMax
	W:Money
	W:lemon
	W:rusk
	W:hook
	W:syringe
	W:watch
	W:razor
	W:beads
	W:bracelet
	W:ear_ring
	W:gold_ring
	W:silver_ring
	W:flower
	W:health
	W:unholster
	W:player_shot
	W:battle
	A:IsWeaponHolstered
	W:heal
	W:player
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000066006400690065000000476574506f736974696f6e0062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740068006500610064000000610074007400610063006b005f006f006e000000610074007400610063006b005f0073007400610079000000610074007400610063006b005f006f00660066000000430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a0020000000480061007300500072006f0070006500720074007900000048617350726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000047657450726f70657274790066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c0000006200720061006e00630068000000470065006e00650072006100740065004d006f006e00650079003a00200069004d0069006e0020003e00200069004d006100780000004d006f006e006500790000006c0065006d006f006e0000007200750073006b00000068006f006f006b00000073007900720069006e00670065000000770061007400630068000000720061007a006f0072000000620065006100640073000000620072006100630065006c006500740000006500610072005f00720069006e006700000067006f006c0064005f00720069006e0067000000730069006c007600650072005f00720069006e006700000066006c006f0077006500720000006800650061006c0074006800000075006e0068006f006c007300740065007200000070006c0061007900650072005f00730068006f007400000062006100740074006c00650000004973576561706f6e486f6c737465726564006800650061006c00000070006c0061007900650072000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	SensePlayerOnly (1 args)
	Sleep (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	FindShiftedPathTo (2 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
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
	GetGameTime (1 args)
	GetVariable (2 args)
	AddItem (4 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	HasAnimation (3 args)
	RemoveActor (1 args)

RunOp = 0x25a
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0xd3 Vars = (object)
		EVENT_6 Op = 0xe1 Vars = ()
		EVENT_22 Op = 0x15a Vars = (object, int, float, float)
		EVENT_16 Op = 0x15c Vars = (object, string)
		EVENT_41 Op = 0x15e Vars = (object)
	GTASK_3  Params = 0
		EVENT_0 Op = 0x160 Vars = (object)
		EVENT_17 Op = 0x174 Vars = (object)
		EVENT_30 Op = 0x18c Vars = (object, object, bool)
		EVENT_40 Op = 0x1a8 Vars = (object)
		EVENT_42 Op = 0x1bc Vars = (object, string)
		EVENT_26 Op = 0x1e1 Vars = (string)
		EVENT_6 Op = 0x1ef Vars = ()
		EVENT_1 Op = 0x1f6 Vars = (object)
	GTASK_4 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x271 Vars = (object)
		EVENT_17 Op = 0x285 Vars = (object)
		EVENT_30 Op = 0x29d Vars = (object, object, bool)
		EVENT_40 Op = 0x2b9 Vars = (object)
		EVENT_42 Op = 0x2cd Vars = (object, string)
		EVENT_26 Op = 0x2f2 Vars = (string)
		EVENT_1 Op = 0x300 Vars = (object)
		EVENT_6 Op = 0x30e Vars = ()
		EVENT_10 Op = 0x355 Vars = (object)
		EVENT_28 Op = 0x359 Vars = ()
		EVENT_41 Op = 0x363 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x390 Vars = ()
		EVENT_7 Op = 0x3fe Vars = (int)
		EVENT_41 Op = 0x439 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x4b9 Vars = (int)
		EVENT_41 Op = 0x4f4 Vars = (object)

Events:
EVENT_16 Op = 0x78d Vars = (object, string)
EVENT_41 Op = 0x79a Vars = (object)
EVENT_22 Op = 0x7a0 Vars = (object, int, float, float)
EVENT_43 Op = 0x7a8 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x5ee

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x897

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x895

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x899

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x89b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6a1

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
0x41: Call2 0x632

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

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 518110)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 518111)
0x5a: Push((int) -1)
0x5b: Push((int) 19230)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: Push((int) 534585)
0x5f: Push((int) -1)
0x60: Push((int) 36223)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x89d

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x643

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
0x86: Call2 0x89d

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
0x96: Call2 0x64a

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x650

0x9f: Pop(0)
0xa0: Push((int) 19229)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral" // @poff=89
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 518110)
0xa8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xa9: Pop(1)
0xaa: @@@ ClearReplies(); Obj=0 // @poff=116
0xab: Pop(0)
0xac: Push((int) 518111)
0xad: Push((int) -1)
0xae: Push((int) 19230)
0xaf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb0: Pop(3)
0xb1: Push((int) 534585)
0xb2: Push((int) -1)
0xb3: Push((int) 36223)
0xb4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x89d

0xba: Pop(0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbc: @ lshStopAnimation()
0xbd: Pop(0)
0xbe: GOTO 0xc1

0xbf: @ StopAnimation()
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: GOTO 0x9b

0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: EventDisable(0)
0xc6: PushEmpty(object)
0xc7: Stack[-2] = Stack[-1]
0xc8: Call2 0xe5

0xc9: Pop(1)
0xca: PushEmpty(object)
0xcb: Stack[-2] = Stack[-1]
0xcc: Call2 0x8b7

0xcd: Pop(1)
0xce: EventEnable(0)
0xcf: @ Hold()
0xd0: Pop(0)
0xd1: GOTO 0xcf

0xd2: Return(); Pop(0)

0xd3: PushEmpty(int, int)
0xd4: PushEmpty(int, object)
0xd5: Stack[-5] = Stack[-1]
0xd6: Call2 0x878

0xd7: Stack[-2] = Stack[-3]
0xd8: Pop(2)
0xd9: Push((int) 0)
0xda: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdc: PushEmpty(object)
0xdd: Stack[-4] = Stack[-1]
0xde: Call2 0x87b

0xdf: Pop(1)
0xe0: Return(); Pop(2)

0xe1: PushEmpty()
0xe2: Call2 0x8af

0xe3: Pop(0)
0xe4: Return(); Pop(0)

0xe5: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xe6: Pop(0); PushNull((bool) Stack[-21] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "fdie" // @poff=156
0xea: Call2 0x140

0xeb: Pop(1)
0xec: GOTO 0x13f

0xed: @@ GetPosition(Stack[-10]); Obj=21 // @poff=166
0xee: Pop(0)
0xef: @ GetPosition(Stack[-9])
0xf0: Pop(0)
0xf1: @ GetDirection(Stack[-8])
0xf2: Pop(0)
0xf3: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xf4: Push(CvectorIndex(Stack[-7], 0))
0xf5: Push(CvectorIndex(Stack[-9], 0))
0xf6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf7: Push(CvectorIndex(Stack[-8], 2))
0xf8: Push(CvectorIndex(Stack[-10], 2))
0xf9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfa: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfb: Push((int) 0)
0xfc: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfe: Stack[-6] = "fdie" // @poff=156
0xff: GOTO 0x101

0x100: Stack[-6] = "bdie" // @poff=178
0x101: @ RemoveRTEnvelope()
0x102: Pop(0)
0x103: @ SetDeathState()
0x104: Pop(0)
0x105: @ Stop()
0x106: Pop(0)
0x107: @ StopAsync()
0x108: Pop(0)
0x109: Stack[-21] = Stack[-5]
0x10a: Push("GetScriptProperty") // @poff=188
0x10b: Push((int) 2)
0x10c: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x10d: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10e: Push("Owner") // @poff=224
0x10f: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=236
0x110: Pop(1)
0x111: Push(Stack[-4])
0x112: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x113: Push("Owner") // @poff=224
0x114: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=254
0x115: Pop(1)
0x116: Pop(0); PushNull((bool) Stack[-5] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x118: Stack[-21] = Stack[-5]
0x119: Push("@GetEyesHeight") // @poff=272
0x11a: Push((int) 1)
0x11b: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x11c: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x11d: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=302
0x11e: Pop(0)
0x11f: Stack[-1] = [0.0, 0.0, 0.0]
0x120: Push(CvectorIndex(Stack[-1], 1))
0x121: Stack[-3] = Stack[-1]
0x122: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x123: Push("head") // @poff=316
0x124: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x125: Pop(1)
0x126: Stack[-3] = (bool) 1
0x127: GOTO 0x129

0x128: Stack[-3] = (bool) 0
0x129: PushEmpty(string)
0x12a: Stack[-7] = Stack[-1]
0x12b: Call2 0x657

0x12c: Pop(1)
0x12d: Push("all") // @poff=138
0x12e: @ PlayAnimation(Stack[-1], Stack[-7])
0x12f: Pop(1)
0x130: @ WaitForAnimEnd()
0x131: Pop(0)
0x132: Push(Stack[-3])
0x133: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x134: @ StopAsync()
0x135: Pop(0)
0x136: Push("head") // @poff=316
0x137: @ UnlookAsync(Stack[-1])
0x138: Pop(1)
0x139: Push("all") // @poff=138
0x13a: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x13b: Pop(1)
0x13c: @ RemoveEnvelope()
0x13d: Pop(0)
0x13e: Stack[-5] = 0
0x13f: Return(); Pop(20)

0x140: PushEmpty()
0x141: @ RemoveRTEnvelope()
0x142: Pop(0)
0x143: @ SetDeathState()
0x144: Pop(0)
0x145: @ Stop()
0x146: Pop(0)
0x147: @ StopAsync()
0x148: Pop(0)
0x149: @ StopSecondaryAnimation()
0x14a: Pop(0)
0x14b: PushEmpty(string)
0x14c: Stack[-2] = Stack[-1]
0x14d: Call2 0x657

0x14e: Pop(1)
0x14f: Push("all") // @poff=138
0x150: @ PlayAnimation(Stack[-1], Stack[-2])
0x151: Pop(1)
0x152: @ WaitForAnimEnd()
0x153: Pop(0)
0x154: Push("all") // @poff=138
0x155: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x156: Pop(1)
0x157: @ RemoveEnvelope()
0x158: Pop(0)
0x159: Return(); Pop(0)

0x15a: PushEmpty()
0x15b: Return(); Pop(0)

0x15c: PushEmpty()
0x15d: Return(); Pop(0)

0x15e: PushEmpty()
0x15f: Return(); Pop(0)

0x160: PushEmpty(int, int)
0x161: PushEmpty(int, object)
0x162: Stack[-5] = Stack[-1]
0x163: Call2 0x878

0x164: Stack[-2] = Stack[-3]
0x165: Pop(2)
0x166: Push((int) 0)
0x167: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x169: Push((int) 1)
0x16a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16c: PushEmpty()
0x16d: Call2 0x255

0x16e: Pop(0)
0x16f: PushEmpty(object)
0x170: Stack[-4] = Stack[-1]
0x171: Call2 0x87b

0x172: Pop(1)
0x173: Return(); Pop(2)

0x174: PushEmpty(int, int)
0x175: PushEmpty(object)
0x176: Stack[-4] = Stack[-1]
0x177: Call2 0x808

0x178: Pop(1)
0x179: PushEmpty(int, object)
0x17a: Stack[-5] = Stack[-1]
0x17b: Call2 0x84a

0x17c: Stack[-2] = Stack[-3]
0x17d: Pop(2)
0x17e: Push((int) 0)
0x17f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x181: Push((int) 1)
0x182: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x184: PushEmpty()
0x185: Call2 0x255

0x186: Pop(0)
0x187: PushEmpty(object)
0x188: Stack[-4] = Stack[-1]
0x189: Call2 0x854

0x18a: Pop(1)
0x18b: Return(); Pop(2)

0x18c: PushEmpty(int, int)
0x18d: PushEmpty(bool, object, object, bool)
0x18e: Stack[-9] = Stack[-3]
0x18f: Stack[-8] = Stack[-2]
0x190: Stack[-7] = Stack[-1]
0x191: Call2 0x8ac

0x192: Pop(3)
0x193: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x194: PushEmpty(int, object, bool)
0x195: Stack[-8] = Stack[-2]
0x196: Stack[-6] = Stack[-1]
0x197: Call2 0x85c

0x198: Stack[-3] = Stack[-4]
0x199: Pop(3)
0x19a: Push((int) 0)
0x19b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x19d: Push((int) 1)
0x19e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a0: PushEmpty()
0x1a1: Call2 0x255

0x1a2: Pop(0)
0x1a3: PushEmpty(object)
0x1a4: Stack[-6] = Stack[-1]
0x1a5: Call2 0x866

0x1a6: Pop(1)
0x1a7: Return(); Pop(2)

0x1a8: PushEmpty(int, int)
0x1a9: PushEmpty(int, object)
0x1aa: Stack[-5] = Stack[-1]
0x1ab: Call2 0x86e

0x1ac: Stack[-2] = Stack[-3]
0x1ad: Pop(2)
0x1ae: Push((int) 0)
0x1af: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b1: Push((int) 1)
0x1b2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x255

0x1b6: Pop(0)
0x1b7: PushEmpty(object)
0x1b8: Stack[-4] = Stack[-1]
0x1b9: Call2 0x871

0x1ba: Pop(1)
0x1bb: Return(); Pop(2)

0x1bc: PushEmpty(int, int)
0x1bd: PushEmpty(bool, object, string)
0x1be: Stack[-7] = Stack[-2]
0x1bf: Stack[-6] = Stack[-1]
0x1c0: Call2 0x7b2

0x1c1: Pop(2)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c3: PushEmpty()
0x1c4: Call2 0x255

0x1c5: Pop(0)
0x1c6: PushEmpty(object, string)
0x1c7: Stack[-6] = Stack[-2]
0x1c8: Stack[-5] = Stack[-1]
0x1c9: Call2 0x7d2

0x1ca: Pop(2)
0x1cb: GOTO 0x1e0

0x1cc: PushEmpty(int, string, object)
0x1cd: Stack[-6] = Stack[-2]
0x1ce: Stack[-7] = Stack[-1]
0x1cf: Call2 0x873

0x1d0: Stack[-3] = Stack[-4]
0x1d1: Pop(3)
0x1d2: Push((int) 0)
0x1d3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d5: Push((int) 1)
0x1d6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d8: PushEmpty()
0x1d9: Call2 0x255

0x1da: Pop(0)
0x1db: PushEmpty(string, object)
0x1dc: Stack[-5] = Stack[-2]
0x1dd: Stack[-6] = Stack[-1]
0x1de: Call2 0x876

0x1df: Pop(2)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty()
0x1e2: PushEmpty(bool, string)
0x1e3: Stack[-3] = Stack[-1]
0x1e4: Call2 0x815

0x1e5: Pop(1)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e7: PushEmpty()
0x1e8: Call2 0x255

0x1e9: Pop(0)
0x1ea: PushEmpty(string)
0x1eb: Stack[-2] = Stack[-1]
0x1ec: Call2 0x825

0x1ed: Pop(1)
0x1ee: Return(); Pop(0)

0x1ef: PushEmpty()
0x1f0: Call2 0x255

0x1f1: Pop(0)
0x1f2: PushEmpty()
0x1f3: Call2 0x8af

0x1f4: Pop(0)
0x1f5: Return(); Pop(0)

0x1f6: PushEmpty()
0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-3] = Stack[-1]
0x1f9: Call2 0x7eb

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x255

0x1fe: Pop(0)
0x1ff: PushEmpty(object)
0x200: Stack[-2] = Stack[-1]
0x201: Call2 0x802

0x202: Pop(1)
0x203: Return(); Pop(0)

0x204: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x205: @ WaitForAnimEnd()
0x206: Pop(0)
0x207: PushEmpty(bool)
0x208: Call2 0x5e9

0x209: Pop(0)
0x20a: Pop(1); Push((bool) Stack[-1] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: Return(); Pop(14)

0x20d: PushEmpty(int)
0x20e: Call2 0x839

0x20f: Stack[-1] = Stack[-8]
0x210: Pop(1)
0x211: Stack[-6] = (int) 0
0x212: PushEmpty(bool)
0x213: Stack[-1] = (bool) 0
0x214: Push((int) 5)
0x215: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x217: PushEmpty(bool)
0x218: Call2 0x5e9

0x219: Pop(0)
0x21a: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21b: Stack[-1] = (bool) 1
0x21c: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x21d: Push((int) 3)
0x21e: @ irand(Stack[-6], Stack[-1])
0x21f: Pop(1)
0x220: Push((int) 0)
0x221: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x223: Push(Stack[-7])
0x224: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x225: @ irand(Stack[-4], Stack[-7])
0x226: Pop(0)
0x227: Push("all") // @poff=138
0x228: PushEmpty(string, int)
0x229: Stack[-7] = Stack[-1]
0x22a: Call2 0x832

0x22b: Pop(1)
0x22c: @ PlayAnimation(Stack[-2], Stack[-1])
0x22d: Pop(2)
0x22e: @ WaitForAnimEnd(Stack[-3])
0x22f: Pop(0)
0x230: Pop(0); Push((bool) Stack[-3] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: GOTO 0x250

0x233: GOTO 0x245

0x234: Push((int) 1)
0x235: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x237: Push((int) 4)
0x238: @ rand(Stack[-3], Stack[-1])
0x239: Pop(1)
0x23a: Push((int) 1)
0x23b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x23c: @ Sleep(Stack[-1], Stack[-2])
0x23d: Pop(1)
0x23e: Pop(0); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: GOTO 0x250

0x241: GOTO 0x245

0x242: Push(Stack[-6])
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: GOTO 0x250

0x245: PushEmpty(bool)
0x246: Call2 0x253

0x247: Pop(0)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: GOTO 0x250

0x24b: @ ResetAAS()
0x24c: Pop(0)
0x24d: Push((int) 1)
0x24e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x24f: GOTO 0x212

0x250: @ ResetAAS()
0x251: Pop(0)
0x252: Return(); Pop(14)

0x253: Stack[-1] = (bool) 1
0x254: Return(); Pop(0)

0x255: @ StopAnimation()
0x256: Pop(0)
0x257: @ StopGroup0()
0x258: Pop(0)
0x259: Return(); Pop(0)

0x25a: Push((bool) 1)
0x25b: @ SensePlayerOnly(Stack[-1])
0x25c: Pop(1)
0x25d: PushEmpty()
0x25e: Call2 0x89f

0x25f: Pop(0)
0x260: PushEmpty()
0x261: Call2 0x268

0x262: Pop(0)
0x263: PushEmpty()
0x264: Call2 0x315

0x265: Pop(0)
0x266: GOTO 0x263

0x267: Return(); Pop(0)

0x268: PushEmpty(bool)
0x269: Call2 0x5e9

0x26a: Pop(0)
0x26b: Pop(1); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26d: PushEmpty()
0x26e: Call2 0x8af

0x26f: Pop(0)
0x270: Return(); Pop(0)

0x271: PushEmpty(int, int)
0x272: PushEmpty(int, object)
0x273: Stack[-5] = Stack[-1]
0x274: Call2 0x878

0x275: Stack[-2] = Stack[-3]
0x276: Pop(2)
0x277: Push((int) 0)
0x278: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27a: Push((int) 1)
0x27b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27d: PushEmpty()
0x27e: Call2 0x35c

0x27f: Pop(0)
0x280: PushEmpty(object)
0x281: Stack[-4] = Stack[-1]
0x282: Call2 0x87b

0x283: Pop(1)
0x284: Return(); Pop(2)

0x285: PushEmpty(int, int)
0x286: PushEmpty(object)
0x287: Stack[-4] = Stack[-1]
0x288: Call2 0x808

0x289: Pop(1)
0x28a: PushEmpty(int, object)
0x28b: Stack[-5] = Stack[-1]
0x28c: Call2 0x84a

0x28d: Stack[-2] = Stack[-3]
0x28e: Pop(2)
0x28f: Push((int) 0)
0x290: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x292: Push((int) 1)
0x293: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x295: PushEmpty()
0x296: Call2 0x35c

0x297: Pop(0)
0x298: PushEmpty(object)
0x299: Stack[-4] = Stack[-1]
0x29a: Call2 0x854

0x29b: Pop(1)
0x29c: Return(); Pop(2)

0x29d: PushEmpty(int, int)
0x29e: PushEmpty(bool, object, object, bool)
0x29f: Stack[-9] = Stack[-3]
0x2a0: Stack[-8] = Stack[-2]
0x2a1: Stack[-7] = Stack[-1]
0x2a2: Call2 0x8ac

0x2a3: Pop(3)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2a5: PushEmpty(int, object, bool)
0x2a6: Stack[-8] = Stack[-2]
0x2a7: Stack[-6] = Stack[-1]
0x2a8: Call2 0x85c

0x2a9: Stack[-3] = Stack[-4]
0x2aa: Pop(3)
0x2ab: Push((int) 0)
0x2ac: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2ae: Push((int) 1)
0x2af: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b1: PushEmpty()
0x2b2: Call2 0x35c

0x2b3: Pop(0)
0x2b4: PushEmpty(object)
0x2b5: Stack[-6] = Stack[-1]
0x2b6: Call2 0x866

0x2b7: Pop(1)
0x2b8: Return(); Pop(2)

0x2b9: PushEmpty(int, int)
0x2ba: PushEmpty(int, object)
0x2bb: Stack[-5] = Stack[-1]
0x2bc: Call2 0x86e

0x2bd: Stack[-2] = Stack[-3]
0x2be: Pop(2)
0x2bf: Push((int) 0)
0x2c0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c2: Push((int) 1)
0x2c3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c5: PushEmpty()
0x2c6: Call2 0x35c

0x2c7: Pop(0)
0x2c8: PushEmpty(object)
0x2c9: Stack[-4] = Stack[-1]
0x2ca: Call2 0x871

0x2cb: Pop(1)
0x2cc: Return(); Pop(2)

0x2cd: PushEmpty(int, int)
0x2ce: PushEmpty(bool, object, string)
0x2cf: Stack[-7] = Stack[-2]
0x2d0: Stack[-6] = Stack[-1]
0x2d1: Call2 0x7b2

0x2d2: Pop(2)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d4: PushEmpty()
0x2d5: Call2 0x35c

0x2d6: Pop(0)
0x2d7: PushEmpty(object, string)
0x2d8: Stack[-6] = Stack[-2]
0x2d9: Stack[-5] = Stack[-1]
0x2da: Call2 0x7d2

0x2db: Pop(2)
0x2dc: GOTO 0x2f1

0x2dd: PushEmpty(int, string, object)
0x2de: Stack[-6] = Stack[-2]
0x2df: Stack[-7] = Stack[-1]
0x2e0: Call2 0x873

0x2e1: Stack[-3] = Stack[-4]
0x2e2: Pop(3)
0x2e3: Push((int) 0)
0x2e4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2e6: Push((int) 1)
0x2e7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e9: PushEmpty()
0x2ea: Call2 0x35c

0x2eb: Pop(0)
0x2ec: PushEmpty(string, object)
0x2ed: Stack[-5] = Stack[-2]
0x2ee: Stack[-6] = Stack[-1]
0x2ef: Call2 0x876

0x2f0: Pop(2)
0x2f1: Return(); Pop(2)

0x2f2: PushEmpty()
0x2f3: PushEmpty(bool, string)
0x2f4: Stack[-3] = Stack[-1]
0x2f5: Call2 0x815

0x2f6: Pop(1)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f8: PushEmpty()
0x2f9: Call2 0x35c

0x2fa: Pop(0)
0x2fb: PushEmpty(string)
0x2fc: Stack[-2] = Stack[-1]
0x2fd: Call2 0x825

0x2fe: Pop(1)
0x2ff: Return(); Pop(0)

0x300: PushEmpty()
0x301: PushEmpty(bool, object)
0x302: Stack[-3] = Stack[-1]
0x303: Call2 0x7eb

0x304: Pop(1)
0x305: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x306: PushEmpty()
0x307: Call2 0x35c

0x308: Pop(0)
0x309: PushEmpty(object)
0x30a: Stack[-2] = Stack[-1]
0x30b: Call2 0x802

0x30c: Pop(1)
0x30d: Return(); Pop(0)

0x30e: PushEmpty()
0x30f: Call2 0x35c

0x310: Pop(0)
0x311: PushEmpty()
0x312: Call2 0x8af

0x313: Pop(0)
0x314: Return(); Pop(0)

0x315: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x316: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x317: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x318: Push((float)0.5)
0x319: @ rand(Stack[-7], Stack[-1])
0x31a: Pop(1)
0x31b: @ Sleep(Stack[-6])
0x31c: Pop(0)
0x31d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x31f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x321: @ GetPosition(Stack[-4])
0x322: Pop(0)
0x323: PushEmpty(float)
0x324: Call2 0x350

0x325: Pop(0)
0x326: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x327: Pop(1)
0x328: Push(Stack[-3])
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: GOTO 0x32f

0x32b: Push((int) 1)
0x32c: @ Sleep(Stack[-1])
0x32d: Pop(1)
0x32e: GOTO 0x321

0x32f: GOTO 0x331

0x330: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x331: PushEmpty(object, cvector)
0x332: Stack[-7] = Stack[-1]
0x333: Call2 0x36e

0x334: Stack[-2] = Stack[-4]
0x335: Pop(2)
0x336: Pop(0); Push(( Stack[-2] != 0 )
0x337: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x338: @ RotatePath(Stack[-2], Stack[-1])
0x339: Pop(0)
0x33a: Push(Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x33c: PushEmpty(bool)
0x33d: Call2 0x36c

0x33e: Pop(0)
0x33f: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x340: Pop(1)
0x341: Stack[-2] = 0
0x342: Push(Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x344: PushEmpty()
0x345: Push(-0, 0); TaskCall(3)
0x346: Call2 0x204

0x347: Pop(-0, 0); TaskReturn
0x348: Pop(0)
0x349: GOTO 0x34d

0x34a: Push((int) 1)
0x34b: @ Sleep(Stack[-1])
0x34c: Pop(1)
0x34d: Stack[-2] = 0
0x34e: GOTO 0x31d

0x34f: Return(); Pop(12)

0x350: PushEmpty(float, float)
0x351: @ GetCameraFarDistance(Stack[-1])
0x352: Pop(0)
0x353: Stack[-1] = Stack[-3]
0x354: Return(); Pop(2)

0x355: PushEmpty()
0x356: @ RequestClearPath(Stack[-1])
0x357: Pop(0)
0x358: Return(); Pop(0)

0x359: @ Stop()
0x35a: Pop(0)
0x35b: Return(); Pop(0)

0x35c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x35d: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x35e: @ Stop()
0x35f: Pop(0)
0x360: @ StopGroup0()
0x361: Pop(0)
0x362: Return(); Pop(0)

0x363: PushEmpty()
0x364: PushEmpty()
0x365: Call2 0x35c

0x366: Pop(0)
0x367: PushEmpty(object)
0x368: Stack[-2] = Stack[-1]
0x369: Call2 0x79a

0x36a: Pop(1)
0x36b: Return(); Pop(0)

0x36c: Stack[-1] = (bool) 0
0x36d: Return(); Pop(0)

0x36e: PushEmpty(object, object)
0x36f: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x370: Pop(0)
0x371: Stack[-1] = Stack[-4]
0x372: Return(); Pop(2)

0x373: Stack[-1] = 0
0x374: PushEmpty()
0x375: @ Face(Stack[-1])
0x376: Pop(0)
0x377: Push("all") // @poff=138
0x378: Push("attack_on") // @poff=326
0x379: @ PlayAnimation(Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: @ WaitForAnimEnd()
0x37c: Pop(0)
0x37d: Push("all") // @poff=138
0x37e: Push("attack_stay") // @poff=346
0x37f: @ PlayAnimation(Stack[-2], Stack[-1])
0x380: Pop(2)
0x381: @ WaitForAnimEnd()
0x382: Pop(0)
0x383: Push("all") // @poff=138
0x384: Push("attack_off") // @poff=370
0x385: @ PlayAnimation(Stack[-2], Stack[-1])
0x386: Pop(2)
0x387: @ WaitForAnimEnd()
0x388: Pop(0)
0x389: @ StopAsync()
0x38a: Pop(0)
0x38b: PushEmpty(object)
0x38c: Stack[-2] = Stack[-1]
0x38d: Call2 0x3b5

0x38e: Pop(1)
0x38f: Return(); Pop(0)

0x390: PushEmpty()
0x391: Call2 0x432

0x392: Pop(0)
0x393: PushEmpty()
0x394: Call2 0x8af

0x395: Pop(0)
0x396: Return(); Pop(0)

0x397: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x398: @ GetPosition(Stack[-6])
0x399: Pop(0)
0x39a: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0x39b: Pop(0)
0x39c: @ GetDirection(Stack[-4])
0x39d: Pop(0)
0x39e: PushEmpty(cvector, cvector)
0x39f: PushEmpty(cvector, cvector)
0x3a0: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3a1: Call2 0x686

0x3a2: Pop(1)
0x3a3: Push((float)0.75)
0x3a4: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3a5: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3a6: Call2 0x686

0x3a7: Stack[-2] = Stack[-5]
0x3a8: Pop(2)
0x3a9: Push((int) 32)
0x3aa: Push((float)7000.0)
0x3ab: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: Push((int) 100)
0x3ae: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x3af: Push((int) 0)
0x3b0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: Stack[-1] = (int) 0
0x3b3: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x3b4: Return(); Pop(12)

0x3b5: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x3b6: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x3b7: PushEmpty(cvector, float)
0x3b8: Stack[-1] = (float) 1.7453293800354004
0x3b9: Call2 0x397

0x3ba: Stack[-2] = Stack[-7]
0x3bb: Pop(2)
0x3bc: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3bd: Push((float)2500.0)
0x3be: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3c0: PushEmpty(cvector, float)
0x3c1: Stack[-1] = (float) 2.6179938316345215
0x3c2: Call2 0x397

0x3c3: Stack[-2] = Stack[-7]
0x3c4: Pop(2)
0x3c5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3c6: Push((float)2500.0)
0x3c7: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3c9: Push("Can't retreat, distance: ") // @poff=392
0x3ca: Pop(0); Push(Sqrt(Stack[-5]))
0x3cb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3cc: @ Trace(Stack[-1])
0x3cd: Pop(1)
0x3ce: Push((float)0.5)
0x3cf: @ Sleep(Stack[-1])
0x3d0: Pop(1)
0x3d1: Return(); Pop(10)

0x3d2: Push(CvectorIndex(Stack[-5], 0))
0x3d3: Push(CvectorIndex(Stack[-6], 2))
0x3d4: @ Rotate(Stack[-2], Stack[-1])
0x3d5: Pop(2)
0x3d6: PushEmpty(cvector)
0x3d7: Call2 0x50d

0x3d8: Pop(0)
0x3d9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x3da: Push((int) 120)
0x3db: Push((float)0.5)
0x3dc: @ SetTimer(Stack[-2], Stack[-1])
0x3dd: Pop(2)
0x3de: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3df: Push((int) 1)
0x3e0: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x3e1: Pop(1)
0x3e2: Push(Stack[-3])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3e4: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: GOTO 0x3fd

0x3e7: GOTO 0x3fb

0x3e8: PushEmpty(cvector, float)
0x3e9: Stack[-1] = (float) 2.6179938316345215
0x3ea: Call2 0x397

0x3eb: Stack[-2] = Stack[-4]
0x3ec: Pop(2)
0x3ed: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3ee: Push((float)2500.0)
0x3ef: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f1: PushEmpty(cvector)
0x3f2: Call2 0x50d

0x3f3: Pop(0)
0x3f4: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x3f5: Push((int) 120)
0x3f6: Push((float)0.5)
0x3f7: @ SetTimer(Stack[-2], Stack[-1])
0x3f8: Pop(2)
0x3f9: GOTO 0x3fb

0x3fa: GOTO 0x3fd

0x3fb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3fc: IF (Stack[-1] == 1) GOTO 0x3df; Pop(1)

0x3fd: Return(); Pop(10)

0x3fe: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x3ff: Push((int) 120)
0x400: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: Return(); Pop(8)

0x403: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x405: @ Stop()
0x406: Pop(0)
0x407: Push((int) 1)
0x408: @ KillTimer(Stack[-1])
0x409: Pop(1)
0x40a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x40b: GOTO 0x431

0x40c: @ GetDirection(Stack[-4])
0x40d: Pop(0)
0x40e: Push((float)7000.0)
0x40f: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x410: Pop(1)
0x411: PushEmpty(cvector, float)
0x412: Stack[-1] = (float) 1.7453293800354004
0x413: Call2 0x397

0x414: Stack[-2] = Stack[-4]
0x415: Pop(2)
0x416: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x417: PushEmpty(bool)
0x418: Stack[-1] = (bool) 0
0x419: Push((float)2500.0)
0x41a: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x41c: PushEmpty(bool)
0x41d: Stack[-1] = (bool) 1
0x41e: Pop(0); Push(Stack[-5] * Stack[-5]);
0x41f: Push((float)2.25)
0x420: Pop(2); Push(Stack[-2] * Stack[-1]);
0x421: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x422: IF (Stack[-1] == 1) GOTO 0x428; Pop(1)

0x423: PushEmpty(bool)
0x424: Call2 0x442

0x425: Pop(0)
0x426: IF (Stack[-1] == 1) GOTO 0x428; Pop(1)

0x427: Stack[-1] = (bool) 0
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: Stack[-1] = (bool) 1
0x42a: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42b: @ Stop()
0x42c: Pop(0)
0x42d: PushEmpty(cvector)
0x42e: Call2 0x50d

0x42f: Pop(0)
0x430: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x431: Return(); Pop(8)

0x432: @ Stop()
0x433: Pop(0)
0x434: Push((int) 120)
0x435: @ KillTimer(Stack[-1])
0x436: Pop(1)
0x437: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x438: Return(); Pop(0)

0x439: PushEmpty()
0x43a: PushEmpty()
0x43b: Call2 0x432

0x43c: Pop(0)
0x43d: PushEmpty(object)
0x43e: Stack[-2] = Stack[-1]
0x43f: Call2 0x79a

0x440: Pop(1)
0x441: Return(); Pop(0)

0x442: PushEmpty(cvector, cvector, cvector, cvector)
0x443: @ GetDirection(Stack[-2])
0x444: Pop(0)
0x445: PushEmpty(cvector, object)
0x446: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x447: Call2 0x512

0x448: Stack[-2] = Stack[-3]
0x449: Pop(2)
0x44a: PushEmpty(float, cvector, cvector)
0x44b: Stack[-5] = Stack[-2]
0x44c: Stack[-4] = Stack[-1]
0x44d: Call2 0x690

0x44e: Pop(2)
0x44f: Push((float)-0.3420201241970062)
0x450: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x451: Return(); Pop(4)

0x452: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x453: @ GetPosition(Stack[-6])
0x454: Pop(0)
0x455: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0x456: Pop(0)
0x457: @ GetDirection(Stack[-4])
0x458: Pop(0)
0x459: PushEmpty(cvector, cvector)
0x45a: PushEmpty(cvector, cvector)
0x45b: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x45c: Call2 0x686

0x45d: Pop(1)
0x45e: Push((float)0.75)
0x45f: Pop(1); Push(Stack[-8] * Stack[-1]);
0x460: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x461: Call2 0x686

0x462: Stack[-2] = Stack[-5]
0x463: Pop(2)
0x464: Push((int) 32)
0x465: Push((float)7000.0)
0x466: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x467: Pop(2)
0x468: Push((int) 100)
0x469: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x46a: Push((int) 0)
0x46b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: Stack[-1] = (int) 0
0x46e: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x46f: Return(); Pop(12)

0x470: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x471: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x472: PushEmpty(cvector, float)
0x473: Stack[-1] = (float) 1.7453293800354004
0x474: Call2 0x452

0x475: Stack[-2] = Stack[-7]
0x476: Pop(2)
0x477: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x478: Push((float)2500.0)
0x479: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x47b: PushEmpty(cvector, float)
0x47c: Stack[-1] = (float) 2.6179938316345215
0x47d: Call2 0x452

0x47e: Stack[-2] = Stack[-7]
0x47f: Pop(2)
0x480: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x481: Push((float)2500.0)
0x482: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x484: Push("Can't retreat, distance: ") // @poff=392
0x485: Pop(0); Push(Sqrt(Stack[-5]))
0x486: Pop(2); Push(Stack[-2] + Stack[-1]);
0x487: @ Trace(Stack[-1])
0x488: Pop(1)
0x489: Push((float)0.5)
0x48a: @ Sleep(Stack[-1])
0x48b: Pop(1)
0x48c: Return(); Pop(10)

0x48d: Push(CvectorIndex(Stack[-5], 0))
0x48e: Push(CvectorIndex(Stack[-6], 2))
0x48f: @ Rotate(Stack[-2], Stack[-1])
0x490: Pop(2)
0x491: PushEmpty(cvector)
0x492: Call2 0x50d

0x493: Pop(0)
0x494: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x495: Push((int) 120)
0x496: Push((float)0.5)
0x497: @ SetTimer(Stack[-2], Stack[-1])
0x498: Pop(2)
0x499: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x49a: Push((int) 1)
0x49b: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x49c: Pop(1)
0x49d: Push(Stack[-3])
0x49e: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x49f: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a1: GOTO 0x4b8

0x4a2: GOTO 0x4b6

0x4a3: PushEmpty(cvector, float)
0x4a4: Stack[-1] = (float) 2.6179938316345215
0x4a5: Call2 0x452

0x4a6: Stack[-2] = Stack[-4]
0x4a7: Pop(2)
0x4a8: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4a9: Push((float)2500.0)
0x4aa: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4ac: PushEmpty(cvector)
0x4ad: Call2 0x50d

0x4ae: Pop(0)
0x4af: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4b0: Push((int) 120)
0x4b1: Push((float)0.5)
0x4b2: @ SetTimer(Stack[-2], Stack[-1])
0x4b3: Pop(2)
0x4b4: GOTO 0x4b6

0x4b5: GOTO 0x4b8

0x4b6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4b7: IF (Stack[-1] == 1) GOTO 0x49a; Pop(1)

0x4b8: Return(); Pop(10)

0x4b9: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4ba: Push((int) 120)
0x4bb: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4bc: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bd: Return(); Pop(8)

0x4be: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c0: @ Stop()
0x4c1: Pop(0)
0x4c2: Push((int) 1)
0x4c3: @ KillTimer(Stack[-1])
0x4c4: Pop(1)
0x4c5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4c6: GOTO 0x4ec

0x4c7: @ GetDirection(Stack[-4])
0x4c8: Pop(0)
0x4c9: Push((float)7000.0)
0x4ca: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4cb: Pop(1)
0x4cc: PushEmpty(cvector, float)
0x4cd: Stack[-1] = (float) 1.7453293800354004
0x4ce: Call2 0x452

0x4cf: Stack[-2] = Stack[-4]
0x4d0: Pop(2)
0x4d1: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4d2: PushEmpty(bool)
0x4d3: Stack[-1] = (bool) 0
0x4d4: Push((float)2500.0)
0x4d5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4d7: PushEmpty(bool)
0x4d8: Stack[-1] = (bool) 1
0x4d9: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4da: Push((float)2.25)
0x4db: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4dc: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4dd: IF (Stack[-1] == 1) GOTO 0x4e3; Pop(1)

0x4de: PushEmpty(bool)
0x4df: Call2 0x4fd

0x4e0: Pop(0)
0x4e1: IF (Stack[-1] == 1) GOTO 0x4e3; Pop(1)

0x4e2: Stack[-1] = (bool) 0
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e4: Stack[-1] = (bool) 1
0x4e5: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e6: @ Stop()
0x4e7: Pop(0)
0x4e8: PushEmpty(cvector)
0x4e9: Call2 0x50d

0x4ea: Pop(0)
0x4eb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4ec: Return(); Pop(8)

0x4ed: @ Stop()
0x4ee: Pop(0)
0x4ef: Push((int) 120)
0x4f0: @ KillTimer(Stack[-1])
0x4f1: Pop(1)
0x4f2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4f3: Return(); Pop(0)

0x4f4: PushEmpty()
0x4f5: PushEmpty()
0x4f6: Call2 0x4ed

0x4f7: Pop(0)
0x4f8: PushEmpty(object)
0x4f9: Stack[-2] = Stack[-1]
0x4fa: Call2 0x79a

0x4fb: Pop(1)
0x4fc: Return(); Pop(0)

0x4fd: PushEmpty(cvector, cvector, cvector, cvector)
0x4fe: @ GetDirection(Stack[-2])
0x4ff: Pop(0)
0x500: PushEmpty(cvector, object)
0x501: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x502: Call2 0x512

0x503: Stack[-2] = Stack[-3]
0x504: Pop(2)
0x505: PushEmpty(float, cvector, cvector)
0x506: Stack[-5] = Stack[-2]
0x507: Stack[-4] = Stack[-1]
0x508: Call2 0x690

0x509: Pop(2)
0x50a: Push((float)-0.3420201241970062)
0x50b: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x50c: Return(); Pop(4)

0x50d: PushEmpty(cvector, cvector)
0x50e: @ GetPosition(Stack[-1])
0x50f: Pop(0)
0x510: Stack[-1] = Stack[-3]
0x511: Return(); Pop(2)

0x512: PushEmpty(cvector, cvector, cvector, cvector)
0x513: @ GetPosition(Stack[-2])
0x514: Pop(0)
0x515: @@ GetPosition(Stack[-1]); Obj=5 // @poff=166
0x516: Pop(0)
0x517: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x518: Return(); Pop(4)

0x519: PushEmpty(bool, bool)
0x51a: @ IsPlayerActor(Stack[-3], Stack[-1])
0x51b: Pop(0)
0x51c: Stack[-1] = Stack[-4]
0x51d: Return(); Pop(2)

0x51e: PushEmpty(bool, bool)
0x51f: Push("HasProperty") // @poff=444
0x520: Push((int) 2)
0x521: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x522: Pop(1); Push((bool) Stack[-1] == 0)
0x523: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x524: Stack[-5] = (bool) 0
0x525: Return(); Pop(2)

0x526: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=468
0x527: Pop(0)
0x528: Stack[-1] = Stack[-5]
0x529: Return(); Pop(2)

0x52a: PushEmpty(bool, bool)
0x52b: @@ IsDead(Stack[-1]); Obj=3 // @poff=480
0x52c: Pop(0)
0x52d: Stack[-1] = Stack[-4]
0x52e: Return(); Pop(2)

0x52f: PushEmpty(object, object, object, object)
0x530: Pop(0); PushNull((bool) Stack[-5] == 0)
0x531: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x532: Stack[-6] = (bool) 0
0x533: Return(); Pop(4)

0x534: PushEmpty(bool)
0x535: Stack[-1] = (bool) 0
0x536: Push("IsDead") // @poff=487
0x537: Push((int) 1)
0x538: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x539: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53a: PushEmpty(bool, object)
0x53b: Stack[-8] = Stack[-1]
0x53c: Call2 0x52a

0x53d: Pop(1)
0x53e: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53f: Stack[-1] = (bool) 1
0x540: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x541: Stack[-6] = (bool) 0
0x542: Return(); Pop(4)

0x543: @ GetScene(Stack[-2])
0x544: Pop(0)
0x545: Pop(0); PushNull((bool) Stack[-2] == 0)
0x546: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x547: Stack[-6] = (bool) 0
0x548: Return(); Pop(4)

0x549: @@ GetScene(Stack[-1]); Obj=5 // @poff=501
0x54a: Pop(0)
0x54b: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54d: Stack[-6] = (bool) 0
0x54e: Return(); Pop(4)

0x54f: Stack[-6] = (bool) 1
0x550: Return(); Pop(4)

0x551: Stack[-1] = 0
0x552: Stack[-2] = 0
0x553: PushEmpty(int, int)
0x554: PushEmpty(bool, object)
0x555: Stack[-5] = Stack[-1]
0x556: Call2 0x52f

0x557: Pop(1)
0x558: Pop(1); Push((bool) Stack[-1] == 0)
0x559: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55a: Stack[-4] = (bool) 0
0x55b: Return(); Pop(2)

0x55c: PushEmpty(bool, object, string)
0x55d: Stack[-6] = Stack[-2]
0x55e: Stack[-1] = "noaccess" // @poff=510
0x55f: Call2 0x51e

0x560: Pop(2)
0x561: Pop(1); Push((bool) Stack[-1] == 0)
0x562: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x563: Stack[-4] = (bool) 1
0x564: Return(); Pop(2)

0x565: Push("noaccess") // @poff=510
0x566: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=528
0x567: Pop(1)
0x568: Push((int) 0)
0x569: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x56a: Return(); Pop(2)

0x56b: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x56c: Pop(0); PushNull((bool) Stack[-15] == 0)
0x56d: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56e: Return(); Pop(14)

0x56f: @ IsDead(Stack[-7])
0x570: Pop(0)
0x571: Push(Stack[-7])
0x572: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x573: Return(); Pop(14)

0x574: @ GetSecondaryAnimationType(Stack[-6])
0x575: Pop(0)
0x576: Push((int) 0)
0x577: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x579: Return(); Pop(14)

0x57a: @@ GetPosition(Stack[-5]); Obj=15 // @poff=166
0x57b: Pop(0)
0x57c: @ GetPosition(Stack[-4])
0x57d: Pop(0)
0x57e: @ GetDirection(Stack[-3])
0x57f: Pop(0)
0x580: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x581: Push(CvectorIndex(Stack[-2], 0))
0x582: Push(CvectorIndex(Stack[-4], 0))
0x583: Pop(2); Push(Stack[-2] * Stack[-1]);
0x584: Push(CvectorIndex(Stack[-3], 2))
0x585: Push(CvectorIndex(Stack[-5], 2))
0x586: Pop(2); Push(Stack[-2] * Stack[-1]);
0x587: Pop(2); Push(Stack[-2] + Stack[-1]);
0x588: Push((int) 0)
0x589: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58b: Stack[-1] = "fhit" // @poff=540
0x58c: GOTO 0x58e

0x58d: Stack[-1] = "bhit" // @poff=550
0x58e: Push("hit_react") // @poff=560
0x58f: Push("1") // @poff=580
0x590: Pop(1); Push(Stack[-3] + Stack[-1]);
0x591: Push("2") // @poff=584
0x592: Pop(1); Push(Stack[-4] + Stack[-1]);
0x593: Push((int) -10)
0x594: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x595: Pop(4)
0x596: Return(); Pop(14)

0x597: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x598: PushEmpty(bool)
0x599: Stack[-1] = (bool) 0
0x59a: PushEmpty(bool)
0x59b: Stack[-1] = (bool) 0
0x59c: Push(Stack[-23])
0x59d: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x59e: Push((int) 4)
0x59f: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x5a1: Stack[-1] = (bool) 1
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a3: Push((int) 5)
0x5a4: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a6: Stack[-1] = (bool) 1
0x5a7: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5a8: PushEmpty(cvector, cvector)
0x5a9: PushEmpty(cvector, object)
0x5aa: Stack[-25] = Stack[-1]
0x5ab: Call2 0x512

0x5ac: Stack[-2] = Stack[-3]
0x5ad: Pop(2)
0x5ae: Call2 0x686

0x5af: Stack[-2] = Stack[-11]
0x5b0: Pop(2)
0x5b1: @ CreateVectorVector(Stack[-8])
0x5b2: Pop(0)
0x5b3: Stack[-7] = (int) 1
0x5b4: Push("hit") // @poff=542
0x5b5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5b6: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x5b7: Pop(1)
0x5b8: Pop(0); Push((bool) Stack[-6] == 0)
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5ba: GOTO 0x5c4

0x5bb: Pop(0); Push(Stack[-4] | Stack[-9]);
0x5bc: Push((float)0.7071067690849304)
0x5bd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: @@ add(Stack[-5]); Obj=8 // @poff=588
0x5c0: Pop(0)
0x5c1: Push((int) 1)
0x5c2: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5c3: GOTO 0x5b4

0x5c4: @@ size(Stack[-3]); Obj=8 // @poff=592
0x5c5: Pop(0)
0x5c6: Push(Stack[-3])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5c8: @ irand(Stack[-2], Stack[-3])
0x5c9: Pop(0)
0x5ca: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=597
0x5cb: Pop(0)
0x5cc: PushEmpty(object, int, float, cvector, cvector)
0x5cd: Stack[-26] = Stack[-5]
0x5ce: Stack[-25] = Stack[-4]
0x5cf: Stack[-24] = Stack[-3]
0x5d0: Stack[-6] = Stack[-2]
0x5d1: Stack[-1] = -Stack[-14]; Pop(0);
0x5d2: Call2 0x5db

0x5d3: Pop(5)
0x5d4: Return(); Pop(18)

0x5d5: Stack[-8] = 0
0x5d6: PushEmpty(object)
0x5d7: Stack[-22] = Stack[-1]
0x5d8: Call2 0x56b

0x5d9: Pop(1)
0x5da: Return(); Pop(18)

0x5db: PushEmpty(object, object, object, object)
0x5dc: @ GetScene(Stack[-2])
0x5dd: Pop(0)
0x5de: Push("scripted") // @poff=601
0x5df: Push("blood_dir.xml") // @poff=619
0x5e0: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x5e1: Pop(2)
0x5e2: PushEmpty(object)
0x5e3: Stack[-10] = Stack[-1]
0x5e4: Call2 0x56b

0x5e5: Pop(1)
0x5e6: Return(); Pop(4)

0x5e7: Stack[-1] = 0
0x5e8: Stack[-2] = 0
0x5e9: PushEmpty(bool, bool)
0x5ea: @ IsLoaded(Stack[-1])
0x5eb: Pop(0)
0x5ec: Stack[-1] = Stack[-3]
0x5ed: Return(); Pop(2)

0x5ee: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x5ef: @@ GetPosition(Stack[-8]); Obj=20 // @poff=166
0x5f0: Pop(0)
0x5f1: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=302
0x5f2: Pop(0)
0x5f3: Push(CvectorIndex(Stack[-8], 1))
0x5f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5f5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5f6: @ GetPosition(Stack[-7])
0x5f7: Pop(0)
0x5f8: @ GetEyesHeight(Stack[-9])
0x5f9: Pop(0)
0x5fa: Push(CvectorIndex(Stack[-7], 1))
0x5fb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5fc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x5fd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x5fe: Push(CvectorIndex(Stack[-6], 1))
0x5ff: Stack[-1] = (int) 0
0x600: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x601: Pop(0); Push(Stack[-6] | Stack[-6]);
0x602: Pop(1); Push(Sqrt(Stack[-1]))
0x603: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x604: Stack[-5] = -Stack[-6]; Pop(0);
0x605: Pop(0); Push(Stack[-6] * Stack[-19]);
0x606: PushEmpty(cvector, cvector)
0x607: Push([0.0, 1.0, 0.0])
0x608: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x609: Call2 0x686

0x60a: Pop(1)
0x60b: Push((int) 25)
0x60c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x60d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x60e: Push([0.0, 10.0, 0.0])
0x60f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x610: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x611: @ IsOverrideActive(Stack[-2])
0x612: Pop(0)
0x613: Push(Stack[-2])
0x614: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x615: Stack[-21] = (bool) 0
0x616: Return(); Pop(18)

0x617: @ StopWorld()
0x618: Pop(0)
0x619: @ CameraTransit(Stack[-3], Stack[-5])
0x61a: Pop(0)
0x61b: Push(CvectorIndex(Stack[-4], 0))
0x61c: Push(CvectorIndex(Stack[-5], 2))
0x61d: @ Rotate(Stack[-2], Stack[-1])
0x61e: Pop(2)
0x61f: PushEmpty(bool)
0x620: Call2 0x89d

0x621: Pop(0)
0x622: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x623: GOTO 0x62c

0x624: Push("head") // @poff=316
0x625: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x626: Pop(1)
0x627: Push(Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x629: Push("head") // @poff=316
0x62a: @ LookAsyncCamera(Stack[-1])
0x62b: Pop(1)
0x62c: @ CameraWaitForPlayFinish()
0x62d: Pop(0)
0x62e: @ ResumeWorld()
0x62f: Pop(0)
0x630: Stack[-21] = (bool) 1
0x631: Return(); Pop(18)

0x632: PushEmpty(bool, bool)
0x633: @ CameraSwitchToNormal()
0x634: Pop(0)
0x635: PushEmpty(bool)
0x636: Call2 0x89d

0x637: Pop(0)
0x638: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x639: GOTO 0x642

0x63a: Push("head") // @poff=316
0x63b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x63c: Pop(1)
0x63d: Push(Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x63f: Push("head") // @poff=316
0x640: @ UnlookAsync(Stack[-1])
0x641: Pop(1)
0x642: Return(); Pop(2)

0x643: PushEmpty(float, float, float, float)
0x644: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x645: Pop(0)
0x646: Push((bool) 0)
0x647: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x648: Pop(1)
0x649: Return(); Pop(4)

0x64a: PushEmpty(float, float, float, float)
0x64b: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x64c: Pop(0)
0x64d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x64e: Pop(0)
0x64f: Return(); Pop(4)

0x650: PushEmpty(bool)
0x651: Call2 0x89d

0x652: Pop(0)
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: @ lshStopSpeech()
0x655: Pop(0)
0x656: Return(); Pop(0)

0x657: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x658: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x659: Pop(0)
0x65a: Pop(0); Push((bool) Stack[-8] == 0)
0x65b: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x65c: Stack[-7] = (int) 0
0x65d: Push((int) 1)
0x65e: Pop(1); Push(Stack[-8] + Stack[-1]);
0x65f: Pop(1); Push(Stack[-18] + Stack[-1]);
0x660: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x661: Pop(1)
0x662: Pop(0); Push((bool) Stack[-6] == 0)
0x663: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x664: GOTO 0x668

0x665: Push((int) 1)
0x666: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x667: GOTO 0x65d

0x668: Pop(0); Push((bool) Stack[-7] == 0)
0x669: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x66a: Return(); Pop(16)

0x66b: @ irand(Stack[-5], Stack[-7])
0x66c: Pop(0)
0x66d: Push((int) 1)
0x66e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x66f: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x670: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x671: Pop(0)
0x672: Push(Stack[-4])
0x673: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x674: @ GetEyesHeight(Stack[-3])
0x675: Pop(0)
0x676: @ GetDirection(Stack[-2])
0x677: Pop(0)
0x678: Push((int) 50)
0x679: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x67a: Push(CvectorIndex(Stack[-1], 1))
0x67b: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x67c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x67d: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x67e: Pop(0)
0x67f: Return(); Pop(16)

0x680: PushEmpty(object, object)
0x681: @ self(Stack[-1])
0x682: Pop(0)
0x683: Stack[-1] = Stack[-3]
0x684: Return(); Pop(2)

0x685: Stack[-1] = 0
0x686: PushEmpty(float, float)
0x687: Pop(0); Push(Stack[-3] | Stack[-3]);
0x688: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x689: Push((float)9.999999974752427e-07)
0x68a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x68b: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68c: Stack[-4] = [0.0, 0.0, 0.0]
0x68d: Return(); Pop(2)

0x68e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x68f: Return(); Pop(2)

0x690: PushEmpty()
0x691: Pop(0); Push(Stack[-2] | Stack[-1]);
0x692: Pop(0); Push(Stack[-3] | Stack[-3]);
0x693: Pop(0); Push(Stack[-3] | Stack[-3]);
0x694: Pop(2); Push(Stack[-2] * Stack[-1]);
0x695: Pop(1); Push(Sqrt(Stack[-1]))
0x696: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x697: Return(); Pop(0)

0x698: PushEmpty(float, float)
0x699: @ GetGameTime(Stack[-1])
0x69a: Pop(0)
0x69b: Push((int) 1)
0x69c: PushEmpty(int)
0x69d: Push((int) 24)
0x69e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x69f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6a0: Return(); Pop(2)

0x6a1: PushEmpty(int, int)
0x6a2: Push("branch") // @poff=647
0x6a3: @ GetVariable(Stack[-1], Stack[-2])
0x6a4: Pop(1)
0x6a5: Push((int) 0)
0x6a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a8: Stack[-3] = (int) 1
0x6a9: Return(); Pop(2)

0x6aa: GOTO 0x6b0

0x6ab: Push((int) 1)
0x6ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6ae: Stack[-3] = (int) 2
0x6af: Return(); Pop(2)

0x6b0: Stack[-3] = (int) 3
0x6b1: Return(); Pop(2)

0x6b2: PushEmpty(int, bool, int, bool)
0x6b3: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x6b4: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b5: Push("GenerateMoney: iMin > iMax") // @poff=661
0x6b6: @ Trace(Stack[-1])
0x6b7: Pop(1)
0x6b8: Return(); Pop(4)

0x6b9: Stack[-2] = (int) 0
0x6ba: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bc: Pop(0); Push(Stack[-5] - Stack[-6]);
0x6bd: @ irand(Stack[-3], Stack[-1])
0x6be: Pop(1)
0x6bf: GOTO 0x6c4

0x6c0: Push((int) 0)
0x6c1: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6c3: Return(); Pop(4)

0x6c4: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x6c5: Push((int) 0)
0x6c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c7: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c8: Return(); Pop(4)

0x6c9: PushEmpty(int, string)
0x6ca: Stack[-1] = "Money" // @poff=715
0x6cb: Call2 0x780

0x6cc: Pop(1)
0x6cd: Push((int) 0)
0x6ce: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x6cf: Pop(2)
0x6d0: Return(); Pop(4)

0x6d1: PushEmpty(int, bool, int, bool)
0x6d2: Push(Stack[-5])
0x6d3: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x6d4: PushEmpty(int, int)
0x6d5: Stack[-2] = (int) 0
0x6d6: Push((int) 100)
0x6d7: PushEmpty(int)
0x6d8: Call2 0x698

0x6d9: Pop(0)
0x6da: Push((int) 100)
0x6db: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6dc: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6dd: Call2 0x6b2

0x6de: Pop(2)
0x6df: Push((int) 8)
0x6e0: @ irand(Stack[-3], Stack[-1])
0x6e1: Pop(1)
0x6e2: Push((int) 0)
0x6e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6e5: PushEmpty(int, string)
0x6e6: Stack[-1] = "lemon" // @poff=727
0x6e7: Call2 0x780

0x6e8: Pop(1)
0x6e9: Push((int) 0)
0x6ea: Push((int) 1)
0x6eb: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6ec: Pop(3)
0x6ed: GOTO 0x729

0x6ee: Push((int) 1)
0x6ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f0: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f1: PushEmpty(int, string)
0x6f2: Stack[-1] = "rusk" // @poff=739
0x6f3: Call2 0x780

0x6f4: Pop(1)
0x6f5: Push((int) 0)
0x6f6: Push((int) 1)
0x6f7: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6f8: Pop(3)
0x6f9: GOTO 0x729

0x6fa: Push((int) 2)
0x6fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x6fd: PushEmpty(int, string)
0x6fe: Stack[-1] = "hook" // @poff=749
0x6ff: Call2 0x780

0x700: Pop(1)
0x701: Push((int) 0)
0x702: Push((int) 1)
0x703: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x704: Pop(3)
0x705: GOTO 0x729

0x706: Push((int) 4)
0x707: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x708: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x709: PushEmpty(int, string)
0x70a: Stack[-1] = "syringe" // @poff=759
0x70b: Call2 0x780

0x70c: Pop(1)
0x70d: Push((int) 0)
0x70e: Push((int) 1)
0x70f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x710: Pop(3)
0x711: GOTO 0x729

0x712: Push((int) 5)
0x713: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x714: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x715: PushEmpty(int, string)
0x716: Stack[-1] = "watch" // @poff=775
0x717: Call2 0x780

0x718: Pop(1)
0x719: Push((int) 0)
0x71a: Push((int) 1)
0x71b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x71c: Pop(3)
0x71d: GOTO 0x729

0x71e: Push((int) 6)
0x71f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x720: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x721: PushEmpty(int, string)
0x722: Stack[-1] = "razor" // @poff=787
0x723: Call2 0x780

0x724: Pop(1)
0x725: Push((int) 0)
0x726: Push((int) 1)
0x727: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x728: Pop(3)
0x729: GOTO 0x77f

0x72a: PushEmpty(int, int)
0x72b: Stack[-2] = (int) 0
0x72c: Push((int) 50)
0x72d: PushEmpty(int)
0x72e: Call2 0x698

0x72f: Pop(0)
0x730: Push((int) 50)
0x731: Pop(2); Push(Stack[-2] * Stack[-1]);
0x732: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x733: Call2 0x6b2

0x734: Pop(2)
0x735: Push((int) 7)
0x736: @ irand(Stack[-3], Stack[-1])
0x737: Pop(1)
0x738: Push((int) 0)
0x739: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73a: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x73b: PushEmpty(int, string)
0x73c: Stack[-1] = "beads" // @poff=799
0x73d: Call2 0x780

0x73e: Pop(1)
0x73f: Push((int) 0)
0x740: Push((int) 1)
0x741: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x742: Pop(3)
0x743: GOTO 0x77f

0x744: Push((int) 1)
0x745: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x746: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x747: PushEmpty(int, string)
0x748: Stack[-1] = "bracelet" // @poff=811
0x749: Call2 0x780

0x74a: Pop(1)
0x74b: Push((int) 0)
0x74c: Push((int) 1)
0x74d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x74e: Pop(3)
0x74f: GOTO 0x77f

0x750: Push((int) 2)
0x751: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x752: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x753: PushEmpty(int, string)
0x754: Stack[-1] = "ear_ring" // @poff=829
0x755: Call2 0x780

0x756: Pop(1)
0x757: Push((int) 0)
0x758: Push((int) 1)
0x759: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x75a: Pop(3)
0x75b: GOTO 0x77f

0x75c: Push((int) 3)
0x75d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x75f: PushEmpty(int, string)
0x760: Stack[-1] = "gold_ring" // @poff=847
0x761: Call2 0x780

0x762: Pop(1)
0x763: Push((int) 0)
0x764: Push((int) 1)
0x765: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x766: Pop(3)
0x767: GOTO 0x77f

0x768: Push((int) 4)
0x769: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x76b: PushEmpty(int, string)
0x76c: Stack[-1] = "silver_ring" // @poff=867
0x76d: Call2 0x780

0x76e: Pop(1)
0x76f: Push((int) 0)
0x770: Push((int) 1)
0x771: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x772: Pop(3)
0x773: GOTO 0x77f

0x774: Push((int) 5)
0x775: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x776: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x777: PushEmpty(int, string)
0x778: Stack[-1] = "flower" // @poff=891
0x779: Call2 0x780

0x77a: Pop(1)
0x77b: Push((int) 0)
0x77c: Push((int) 1)
0x77d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x77e: Pop(3)
0x77f: Return(); Pop(4)

0x780: PushEmpty(int, int)
0x781: @ GetInvItemByName(Stack[-1], Stack[-3])
0x782: Pop(0)
0x783: Stack[-1] = Stack[-4]
0x784: Return(); Pop(2)

0x785: PushEmpty()
0x786: PushEmpty(object)
0x787: Stack[-2] = Stack[-1]
0x788: Push(-1, 0); TaskCall(2)
0x789: Call2 0xc4

0x78a: Pop(-1, 0); TaskReturn
0x78b: Pop(1)
0x78c: Return(); Pop(0)

0x78d: PushEmpty(float, float)
0x78e: Push("health") // @poff=905
0x78f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x791: Push("health") // @poff=905
0x792: @ GetProperty(Stack[-1], Stack[-2])
0x793: Pop(1)
0x794: Push((int) 0)
0x795: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x796: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x797: @ SignalDeath(Stack[-4])
0x798: Pop(0)
0x799: Return(); Pop(2)

0x79a: PushEmpty()
0x79b: PushEmpty(object)
0x79c: Stack[-2] = Stack[-1]
0x79d: Call2 0x785

0x79e: Pop(1)
0x79f: Return(); Pop(0)

0x7a0: PushEmpty()
0x7a1: PushEmpty(object, int, float)
0x7a2: Stack[-7] = Stack[-3]
0x7a3: Stack[-6] = Stack[-2]
0x7a4: Stack[-5] = Stack[-1]
0x7a5: Call2 0x597

0x7a6: Pop(3)
0x7a7: Return(); Pop(0)

0x7a8: PushEmpty()
0x7a9: PushEmpty(object, int, float, cvector, cvector)
0x7aa: Stack[-11] = Stack[-5]
0x7ab: Stack[-10] = Stack[-4]
0x7ac: Stack[-9] = Stack[-3]
0x7ad: Stack[-7] = Stack[-2]
0x7ae: Stack[-6] = Stack[-1]
0x7af: Call2 0x5db

0x7b0: Pop(5)
0x7b1: Return(); Pop(0)

0x7b2: PushEmpty()
0x7b3: Push("unholster") // @poff=919
0x7b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b6: PushEmpty(bool, object)
0x7b7: Stack[-4] = Stack[-1]
0x7b8: Call2 0x881

0x7b9: Stack[-2] = Stack[-5]
0x7ba: Pop(2)
0x7bb: Return(); Pop(0)

0x7bc: GOTO 0x7d0

0x7bd: Push("player_shot") // @poff=939
0x7be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c0: PushEmpty(bool, object)
0x7c1: Stack[-4] = Stack[-1]
0x7c2: Call2 0x886

0x7c3: Stack[-2] = Stack[-5]
0x7c4: Pop(2)
0x7c5: Return(); Pop(0)

0x7c6: GOTO 0x7d0

0x7c7: Push("battle") // @poff=963
0x7c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7ca: PushEmpty(bool, object)
0x7cb: Stack[-4] = Stack[-1]
0x7cc: Call2 0x88b

0x7cd: Stack[-2] = Stack[-5]
0x7ce: Pop(2)
0x7cf: Return(); Pop(0)

0x7d0: Stack[-3] = (bool) 0
0x7d1: Return(); Pop(0)

0x7d2: PushEmpty()
0x7d3: Push("unholster") // @poff=919
0x7d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d5: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7d6: PushEmpty(object)
0x7d7: Stack[-3] = Stack[-1]
0x7d8: Call2 0x884

0x7d9: Pop(1)
0x7da: GOTO 0x7ea

0x7db: Push("player_shot") // @poff=939
0x7dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7de: PushEmpty(object)
0x7df: Stack[-3] = Stack[-1]
0x7e0: Call2 0x889

0x7e1: Pop(1)
0x7e2: GOTO 0x7ea

0x7e3: Push("battle") // @poff=963
0x7e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e6: PushEmpty(object)
0x7e7: Stack[-3] = Stack[-1]
0x7e8: Call2 0x88e

0x7e9: Pop(1)
0x7ea: Return(); Pop(0)

0x7eb: PushEmpty(bool, bool)
0x7ec: PushEmpty(bool)
0x7ed: Stack[-1] = (bool) 0
0x7ee: PushEmpty(bool, object)
0x7ef: Stack[-6] = Stack[-1]
0x7f0: Call2 0x881

0x7f1: Pop(1)
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f3: PushEmpty(bool, object)
0x7f4: Stack[-6] = Stack[-1]
0x7f5: Call2 0x519

0x7f6: Pop(1)
0x7f7: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f8: Stack[-1] = (bool) 1
0x7f9: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7fa: @@ IsWeaponHolstered(Stack[-1]); Obj=3 // @poff=977
0x7fb: Pop(0)
0x7fc: Pop(0); Push((bool) Stack[-1] == 0)
0x7fd: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7fe: Stack[-4] = (bool) 1
0x7ff: Return(); Pop(2)

0x800: Stack[-4] = (bool) 0
0x801: Return(); Pop(2)

0x802: PushEmpty()
0x803: PushEmpty(object)
0x804: Stack[-2] = Stack[-1]
0x805: Call2 0x884

0x806: Pop(1)
0x807: Return(); Pop(0)

0x808: PushEmpty()
0x809: PushEmpty(bool, object)
0x80a: Stack[-3] = Stack[-1]
0x80b: Call2 0x519

0x80c: Pop(1)
0x80d: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x80e: PushEmpty(object)
0x80f: Call2 0x680

0x810: Pop(0)
0x811: Push((float)-0.05000000074505806)
0x812: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x813: Pop(2)
0x814: Return(); Pop(0)

0x815: PushEmpty(object, object)
0x816: Push("heal") // @poff=995
0x817: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x818: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x819: Push("player") // @poff=1005
0x81a: @ FindActor(Stack[-2], Stack[-1])
0x81b: Pop(1)
0x81c: PushEmpty(bool, object)
0x81d: Stack[-3] = Stack[-1]
0x81e: Call2 0x890

0x81f: Stack[-2] = Stack[-6]
0x820: Pop(2)
0x821: Return(); Pop(2)

0x822: Stack[-1] = 0
0x823: Stack[-4] = (bool) 0
0x824: Return(); Pop(2)

0x825: PushEmpty(object, object)
0x826: Push("heal") // @poff=995
0x827: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x828: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x829: Push("player") // @poff=1005
0x82a: @ FindActor(Stack[-2], Stack[-1])
0x82b: Pop(1)
0x82c: PushEmpty(object)
0x82d: Stack[-2] = Stack[-1]
0x82e: Call2 0x893

0x82f: Pop(1)
0x830: Stack[-1] = 0
0x831: Return(); Pop(2)

0x832: PushEmpty(string, string)
0x833: Stack[-1] = "idle" // @poff=146
0x834: Push(Stack[-3])
0x835: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x836: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x837: Stack[-1] = Stack[-4]
0x838: Return(); Pop(2)

0x839: PushEmpty(int, bool, int, bool)
0x83a: Stack[-2] = (int) 0
0x83b: Push("all") // @poff=138
0x83c: PushEmpty(string, int)
0x83d: Stack[-5] = Stack[-1]
0x83e: Call2 0x832

0x83f: Pop(1)
0x840: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x841: Pop(2)
0x842: Pop(0); Push((bool) Stack[-1] == 0)
0x843: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x844: GOTO 0x848

0x845: Push((int) 1)
0x846: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x847: GOTO 0x83b

0x848: Stack[-2] = Stack[-5]
0x849: Return(); Pop(4)

0x84a: PushEmpty()
0x84b: PushEmpty(bool, object)
0x84c: Stack[-3] = Stack[-1]
0x84d: Call2 0x553

0x84e: Pop(1)
0x84f: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x850: Stack[-2] = (int) 2
0x851: GOTO 0x853

0x852: Stack[-2] = (int) 0
0x853: Return(); Pop(0)

0x854: PushEmpty()
0x855: PushEmpty(object)
0x856: Stack[-2] = Stack[-1]
0x857: Push(-1, 3); TaskCall(5)
0x858: Call2 0x374

0x859: Pop(-1, 3); TaskReturn
0x85a: Pop(1)
0x85b: Return(); Pop(0)

0x85c: PushEmpty()
0x85d: PushEmpty(bool, object)
0x85e: Stack[-4] = Stack[-1]
0x85f: Call2 0x553

0x860: Pop(1)
0x861: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x862: Stack[-3] = (int) 2
0x863: GOTO 0x865

0x864: Stack[-3] = (int) 0
0x865: Return(); Pop(0)

0x866: PushEmpty()
0x867: PushEmpty(object)
0x868: Stack[-2] = Stack[-1]
0x869: Push(-1, 3); TaskCall(6)
0x86a: Call2 0x470

0x86b: Pop(-1, 3); TaskReturn
0x86c: Pop(1)
0x86d: Return(); Pop(0)

0x86e: PushEmpty()
0x86f: Stack[-2] = (int) 0
0x870: Return(); Pop(0)

0x871: PushEmpty()
0x872: Return(); Pop(0)

0x873: PushEmpty()
0x874: Stack[-3] = (int) 0
0x875: Return(); Pop(0)

0x876: PushEmpty()
0x877: Return(); Pop(0)

0x878: PushEmpty()
0x879: Stack[-2] = (int) 2
0x87a: Return(); Pop(0)

0x87b: PushEmpty()
0x87c: PushEmpty(object)
0x87d: Stack[-2] = Stack[-1]
0x87e: Call2 0x8a4

0x87f: Pop(1)
0x880: Return(); Pop(0)

0x881: PushEmpty()
0x882: Stack[-2] = (bool) 0
0x883: Return(); Pop(0)

0x884: PushEmpty()
0x885: Return(); Pop(0)

0x886: PushEmpty()
0x887: Stack[-2] = (bool) 0
0x888: Return(); Pop(0)

0x889: PushEmpty()
0x88a: Return(); Pop(0)

0x88b: PushEmpty()
0x88c: Stack[-2] = (bool) 0
0x88d: Return(); Pop(0)

0x88e: PushEmpty()
0x88f: Return(); Pop(0)

0x890: PushEmpty()
0x891: Stack[-2] = (bool) 0
0x892: Return(); Pop(0)

0x893: PushEmpty()
0x894: Return(); Pop(0)

0x895: Stack[-1] = (int) 515567
0x896: Return(); Pop(0)

0x897: Stack[-1] = (int) 503352
0x898: Return(); Pop(0)

0x899: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=1019
0x89a: Return(); Pop(0)

0x89b: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=1059
0x89c: Return(); Pop(0)

0x89d: Stack[-1] = (bool) 0
0x89e: Return(); Pop(0)

0x89f: PushEmpty(bool)
0x8a0: Stack[-1] = (bool) 1
0x8a1: Call2 0x6d1

0x8a2: Pop(1)
0x8a3: Return(); Pop(0)

0x8a4: PushEmpty()
0x8a5: PushEmpty(int, object)
0x8a6: Stack[-3] = Stack[-1]
0x8a7: Push(-2, 1); TaskCall(0)
0x8a8: Call2 0x0

0x8a9: Pop(-2, 1); TaskReturn
0x8aa: Pop(2)
0x8ab: Return(); Pop(0)

0x8ac: PushEmpty()
0x8ad: Stack[-4] = (bool) 1
0x8ae: Return(); Pop(0)

0x8af: PushEmpty(object)
0x8b0: Call2 0x680

0x8b1: Pop(0)
0x8b2: @ RemoveActor(Stack[-1])
0x8b3: Pop(1)
0x8b4: @ Hold()
0x8b5: Pop(0)
0x8b6: Return(); Pop(0)

0x8b7: PushEmpty()
0x8b8: Return(); Pop(0)

