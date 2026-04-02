GlobalVarCount = 1
	G_VAR_0 bool 

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
	A:SetReturnValue
	W:branch
	A:GetItemID
	W:Price
	W:BarterPrice
	W:player
	W:reputation
	W:GenerateMoney: iMin > iMax
	W:Money
	A:SetItemName
	W:Organ
	A:SetProperty
	W:liver
	W:kidney
	W:heart
	W:blood
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
	W:class
	W:rat
	W:rat_big
	W:dog
	A:GetSubContainerCount
	A:GetItemCount
	A:GetItem
	W:HasDurability
	W:durability
	W:repair.xml
	W:money
	A:SetItem
	W:Category
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000066006400690065000000476574506f736974696f6e0062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740068006500610064000000610074007400610063006b005f006f006e000000610074007400610063006b005f0073007400610079000000610074007400610063006b005f006f00660066000000430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a0020000000480061007300500072006f0070006500720074007900000048617350726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000047657450726f70657274790066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c00000053657452657475726e56616c7565006200720061006e006300680000004765744974656d49440050007200690063006500000042006100720074006500720050007200690063006500000070006c0061007900650072000000720065007000750074006100740069006f006e000000470065006e00650072006100740065004d006f006e00650079003a00200069004d0069006e0020003e00200069004d006100780000004d006f006e006500790000005365744974656d4e616d65004f007200670061006e00000053657450726f7065727479006c00690076006500720000006b00690064006e0065007900000068006500610072007400000062006c006f006f00640000006c0065006d006f006e0000007200750073006b00000068006f006f006b00000073007900720069006e00670065000000770061007400630068000000720061007a006f0072000000620065006100640073000000620072006100630065006c006500740000006500610072005f00720069006e006700000067006f006c0064005f00720069006e0067000000730069006c007600650072005f00720069006e006700000066006c006f0077006500720000006800650061006c0074006800000075006e0068006f006c007300740065007200000070006c0061007900650072005f00730068006f007400000062006100740074006c00650000004973576561706f6e486f6c737465726564006800650061006c00000063006c00610073007300000072006100740000007200610074005f00620069006700000064006f0067000000476574537562436f6e7461696e6572436f756e74004765744974656d436f756e74004765744974656d004800610073004400750072006100620069006c0069007400790000006400750072006100620069006c0069007400790000007200650070006100690072002e0078006d006c0000006d006f006e006500790000005365744974656d00430061007400650067006f00720079000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	SensePlayerOnly (1 args)
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	rand (2 args)
	Sleep (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	GetScene (1 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
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
	CreateObjectVector (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	FindActor (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	HasAnimation (3 args)
	CanSee (2 args)
	CreateIntVector (1 args)
	ChooseItem (4 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x302
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xef Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x275 Vars = (object)
		EVENT_6 Op = 0x283 Vars = ()
		EVENT_22 Op = 0x2fc Vars = (object, int, float, float)
		EVENT_16 Op = 0x2fe Vars = (object, string)
		EVENT_41 Op = 0x300 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x31a Vars = (object)
		EVENT_17 Op = 0x32e Vars = (object)
		EVENT_30 Op = 0x346 Vars = (object, object, bool)
		EVENT_40 Op = 0x362 Vars = (object)
		EVENT_42 Op = 0x376 Vars = (object, string)
		EVENT_26 Op = 0x39b Vars = (string)
		EVENT_1 Op = 0x3a9 Vars = (object)
		EVENT_3 Op = 0x3bc Vars = (object)
		EVENT_7 Op = 0x3c2 Vars = (int)
		EVENT_6 Op = 0x3ce Vars = ()
		EVENT_41 Op = 0x3e5 Vars = (object)
		EVENT_10 Op = 0x456 Vars = (object)
		EVENT_28 Op = 0x45a Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0x473 Vars = (object)
		EVENT_17 Op = 0x487 Vars = (object)
		EVENT_30 Op = 0x49f Vars = (object, object, bool)
		EVENT_40 Op = 0x4bb Vars = (object)
		EVENT_42 Op = 0x4cf Vars = (object, string)
		EVENT_26 Op = 0x4f4 Vars = (string)
		EVENT_6 Op = 0x502 Vars = ()
		EVENT_1 Op = 0x509 Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0x5a5 Vars = (object)
		EVENT_17 Op = 0x5b9 Vars = (object)
		EVENT_30 Op = 0x5d1 Vars = (object, object, bool)
		EVENT_40 Op = 0x5ed Vars = (object)
		EVENT_42 Op = 0x601 Vars = (object, string)
		EVENT_26 Op = 0x626 Vars = (string)
		EVENT_41 Op = 0x63f Vars = (object)
		EVENT_7 Op = 0x648 Vars = (int)
		EVENT_6 Op = 0x66b Vars = ()
		EVENT_1 Op = 0x672 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x69c Vars = ()
		EVENT_7 Op = 0x70a Vars = (int)
		EVENT_41 Op = 0x745 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x7c5 Vars = (int)
		EVENT_41 Op = 0x800 Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x819 Vars = ()
		EVENT_7 Op = 0x887 Vars = (int)
		EVENT_41 Op = 0x8c2 Vars = (object)
	GTASK_9 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x8db Vars = ()
		EVENT_7 Op = 0x949 Vars = (int)
		EVENT_41 Op = 0x984 Vars = (object)

Events:
EVENT_16 Op = 0xd55 Vars = (object, string)
EVENT_41 Op = 0xd62 Vars = (object)
EVENT_22 Op = 0xd68 Vars = (object, int, float, float)
EVENT_43 Op = 0xd70 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xa91

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xf87

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xf85

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xf89

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xf8b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xbda

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
0x41: Call2 0xad5

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
0x4f: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0xd9

0x53: Pop(1)
0x54: Push((int) 538167)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 538168)
0x5a: Push((int) -1)
0x5b: Push((int) 40043)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: PushEmpty(bool)
0x5f: Stack[-1] = (bool) 0
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0xba3

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x65: PushEmpty(bool, object)
0x66: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x67: Call2 0xb8b

0x68: Pop(1)
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Stack[-1] = (bool) 1
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: Push((int) 538169)
0x6d: Push((int) 40045)
0x6e: Push((int) 40044)
0x6f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x70: Pop(3)
0x71: PushEmpty(bool)
0x72: Stack[-1] = (bool) 0
0x73: PushEmpty(bool)
0x74: Stack[-1] = (bool) 0
0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77: Call2 0xba3

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0xbb7

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: Stack[-1] = (bool) 1
0x80: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x81: PushEmpty(bool, object)
0x82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83: Call2 0xb8b

0x84: Pop(1)
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: Stack[-1] = (bool) 1
0x87: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x88: Push((int) 538179)
0x89: Push((int) 40055)
0x8a: Push((int) 40054)
0x8b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x8c: Pop(3)
0x8d: PushEmpty(bool)
0x8e: Stack[-1] = (bool) 0
0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call2 0xbad

0x92: Pop(1)
0x93: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x94: PushEmpty(bool, object)
0x95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96: Call2 0xb8b

0x97: Pop(1)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Stack[-1] = (bool) 1
0x9a: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9b: Push((int) 538190)
0x9c: Push((int) 40067)
0x9d: Push((int) 40066)
0x9e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x9f: Pop(3)
0xa0: PushEmpty(bool)
0xa1: Stack[-1] = (bool) 1
0xa2: PushEmpty(bool, object)
0xa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Call2 0xb8b

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 1) GOTO 0xad; Pop(1)

0xa7: PushEmpty(bool, object)
0xa8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa9: Call2 0xb97

0xaa: Pop(1)
0xab: IF (Stack[-1] == 1) GOTO 0xad; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xae: Push((int) 538204)
0xaf: Push((int) -1)
0xb0: Push((int) 40081)
0xb1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb2: Pop(3)
0xb3: Push((int) 538205)
0xb4: Push((int) -1)
0xb5: Push((int) 40082)
0xb6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb7: Pop(3)
0xb8: GOTO 0xbb

0xb9: Return(); Pop(0)

0xba: GOTO 0x4e

0xbb: PushEmpty(bool)
0xbc: Call2 0xf8d

0xbd: Pop(0)
0xbe: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xbf: @ lshWaitForAnimEnd()
0xc0: Pop(0)
0xc1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: GOTO 0xc9

0xc4: PushEmpty(string)
0xc5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc6: Call2 0xae6

0xc7: Pop(1)
0xc8: GOTO 0xbf

0xc9: GOTO 0xd8

0xca: Push("all") // @poff=138
0xcb: Push("idle") // @poff=146
0xcc: @ PlayAnimation(Stack[-2], Stack[-1])
0xcd: Pop(2)
0xce: @ WaitForAnimEnd()
0xcf: Pop(0)
0xd0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: GOTO 0xd8

0xd3: Push("all") // @poff=138
0xd4: Push("idle") // @poff=146
0xd5: @ PlayAnimation(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: GOTO 0xce

0xd8: Return(); Pop(0)

0xd9: PushEmpty()
0xda: PushEmpty(bool)
0xdb: Call2 0xf8d

0xdc: Pop(0)
0xdd: Pop(1); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: Return(); Pop(0)

0xe0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: Return(); Pop(0)

0xe3: PushEmpty(string, bool)
0xe4: Stack[-3] = Stack[-2]
0xe5: Push("") // @poff=102
0xe6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe8: Stack[-1] = (bool) 0
0xe9: GOTO 0xeb

0xea: Stack[-1] = (bool) 1
0xeb: Call2 0xaed

0xec: Pop(2)
0xed: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: Push((int) 1)
0xf1: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0xf2: PushEmpty()
0xf3: Call2 0xafe

0xf4: Pop(0)
0xf5: Push((int) 40043)
0xf6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: PushEmpty(object, object)
0xf9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Call2 0xb86

0xfc: Pop(2)
0xfd: Push((int) 40042)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral" // @poff=89
0x102: Call2 0xd9

0x103: Pop(1)
0x104: Push((int) 538167)
0x105: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x106: Pop(1)
0x107: @@@ ClearReplies(); Obj=0 // @poff=116
0x108: Pop(0)
0x109: Push((int) 538168)
0x10a: Push((int) -1)
0x10b: Push((int) 40043)
0x10c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x10d: Pop(3)
0x10e: PushEmpty(bool)
0x10f: Stack[-1] = (bool) 0
0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x112: Call2 0xba3

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x117: Call2 0xb8b

0x118: Pop(1)
0x119: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x11a: Stack[-1] = (bool) 1
0x11b: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11c: Push((int) 538169)
0x11d: Push((int) 40045)
0x11e: Push((int) 40044)
0x11f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x120: Pop(3)
0x121: PushEmpty(bool)
0x122: Stack[-1] = (bool) 0
0x123: PushEmpty(bool)
0x124: Stack[-1] = (bool) 0
0x125: PushEmpty(bool, object)
0x126: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x127: Call2 0xba3

0x128: Pop(1)
0x129: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call2 0xbb7

0x12d: Pop(1)
0x12e: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12f: Stack[-1] = (bool) 1
0x130: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call2 0xb8b

0x134: Pop(1)
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Stack[-1] = (bool) 1
0x137: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x138: Push((int) 538179)
0x139: Push((int) 40055)
0x13a: Push((int) 40054)
0x13b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13c: Pop(3)
0x13d: PushEmpty(bool)
0x13e: Stack[-1] = (bool) 0
0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x141: Call2 0xbad

0x142: Pop(1)
0x143: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call2 0xb8b

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: Stack[-1] = (bool) 1
0x14a: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14b: Push((int) 538190)
0x14c: Push((int) 40067)
0x14d: Push((int) 40066)
0x14e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14f: Pop(3)
0x150: PushEmpty(bool)
0x151: Stack[-1] = (bool) 1
0x152: PushEmpty(bool, object)
0x153: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x154: Call2 0xb8b

0x155: Pop(1)
0x156: IF (Stack[-1] == 1) GOTO 0x15d; Pop(1)

0x157: PushEmpty(bool, object)
0x158: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x159: Call2 0xb97

0x15a: Pop(1)
0x15b: IF (Stack[-1] == 1) GOTO 0x15d; Pop(1)

0x15c: Stack[-1] = (bool) 0
0x15d: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15e: Push((int) 538204)
0x15f: Push((int) -1)
0x160: Push((int) 40081)
0x161: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x162: Pop(3)
0x163: Push((int) 538205)
0x164: Push((int) -1)
0x165: Push((int) 40082)
0x166: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 40067)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral" // @poff=89
0x16e: Call2 0xd9

0x16f: Pop(1)
0x170: Push((int) 538191)
0x171: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x172: Pop(1)
0x173: @@@ ClearReplies(); Obj=0 // @poff=116
0x174: Pop(0)
0x175: Push((int) 538192)
0x176: Push((int) 40069)
0x177: Push((int) 40068)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: Push((int) 538203)
0x17b: Push((int) 40069)
0x17c: Push((int) 40079)
0x17d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 40069)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral" // @poff=89
0x185: Call2 0xd9

0x186: Pop(1)
0x187: Push((int) 538193)
0x188: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x189: Pop(1)
0x18a: @@@ ClearReplies(); Obj=0 // @poff=116
0x18b: Pop(0)
0x18c: Push((int) 538194)
0x18d: Push((int) 40071)
0x18e: Push((int) 40070)
0x18f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x190: Pop(3)
0x191: Push((int) 538202)
0x192: Push((int) -1)
0x193: Push((int) 40078)
0x194: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: Push((int) 40071)
0x198: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19a: PushEmpty(string)
0x19b: Stack[-1] = "Neutral" // @poff=89
0x19c: Call2 0xd9

0x19d: Pop(1)
0x19e: Push((int) 538195)
0x19f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1a0: Pop(1)
0x1a1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1a2: Pop(0)
0x1a3: Push((int) 538196)
0x1a4: Push((int) 40073)
0x1a5: Push((int) 40072)
0x1a6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a7: Pop(3)
0x1a8: Push((int) 538201)
0x1a9: Push((int) -1)
0x1aa: Push((int) 40077)
0x1ab: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 40073)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Neutral" // @poff=89
0x1b3: Call2 0xd9

0x1b4: Pop(1)
0x1b5: Push((int) 538197)
0x1b6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b7: Pop(1)
0x1b8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b9: Pop(0)
0x1ba: Push((int) 538198)
0x1bb: Push((int) -1)
0x1bc: Push((int) 40074)
0x1bd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1be: Pop(3)
0x1bf: Push((int) 538199)
0x1c0: Push((int) -1)
0x1c1: Push((int) 40075)
0x1c2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c3: Pop(3)
0x1c4: Push((int) 538200)
0x1c5: Push((int) -1)
0x1c6: Push((int) 40076)
0x1c7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c8: Pop(3)
0x1c9: Return(); Pop(0)

0x1ca: Push((int) 40055)
0x1cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1cd: PushEmpty(string)
0x1ce: Stack[-1] = "Neutral" // @poff=89
0x1cf: Call2 0xd9

0x1d0: Pop(1)
0x1d1: Push((int) 538180)
0x1d2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d3: Pop(1)
0x1d4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d5: Pop(0)
0x1d6: Push((int) 538181)
0x1d7: Push((int) 40057)
0x1d8: Push((int) 40056)
0x1d9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1da: Pop(3)
0x1db: Push((int) 538188)
0x1dc: Push((int) 40057)
0x1dd: Push((int) 40063)
0x1de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1df: Pop(3)
0x1e0: Push((int) 538189)
0x1e1: Push((int) -1)
0x1e2: Push((int) 40065)
0x1e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e4: Pop(3)
0x1e5: Return(); Pop(0)

0x1e6: Push((int) 40057)
0x1e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1e9: PushEmpty(string)
0x1ea: Stack[-1] = "Neutral" // @poff=89
0x1eb: Call2 0xd9

0x1ec: Pop(1)
0x1ed: Push((int) 538182)
0x1ee: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ef: Pop(1)
0x1f0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f1: Pop(0)
0x1f2: Push((int) 538183)
0x1f3: Push((int) 40059)
0x1f4: Push((int) 40058)
0x1f5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f6: Pop(3)
0x1f7: Push((int) 538187)
0x1f8: Push((int) -1)
0x1f9: Push((int) 40062)
0x1fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fb: Pop(3)
0x1fc: Return(); Pop(0)

0x1fd: Push((int) 40059)
0x1fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x200: PushEmpty(string)
0x201: Stack[-1] = "Neutral" // @poff=89
0x202: Call2 0xd9

0x203: Pop(1)
0x204: Push((int) 538184)
0x205: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x206: Pop(1)
0x207: @@@ ClearReplies(); Obj=0 // @poff=116
0x208: Pop(0)
0x209: Push((int) 538185)
0x20a: Push((int) -1)
0x20b: Push((int) 40060)
0x20c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20d: Pop(3)
0x20e: Push((int) 538186)
0x20f: Push((int) -1)
0x210: Push((int) 40061)
0x211: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x212: Pop(3)
0x213: Return(); Pop(0)

0x214: Push((int) 40045)
0x215: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x217: PushEmpty(string)
0x218: Stack[-1] = "Neutral" // @poff=89
0x219: Call2 0xd9

0x21a: Pop(1)
0x21b: Push((int) 538170)
0x21c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x21d: Pop(1)
0x21e: @@@ ClearReplies(); Obj=0 // @poff=116
0x21f: Pop(0)
0x220: Push((int) 538171)
0x221: Push((int) 40047)
0x222: Push((int) 40046)
0x223: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x224: Pop(3)
0x225: Push((int) 538175)
0x226: Push((int) 40051)
0x227: Push((int) 40050)
0x228: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x229: Pop(3)
0x22a: Push((int) 538178)
0x22b: Push((int) -1)
0x22c: Push((int) 40053)
0x22d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22e: Pop(3)
0x22f: Return(); Pop(0)

0x230: Push((int) 40051)
0x231: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x233: PushEmpty(string)
0x234: Stack[-1] = "Neutral" // @poff=89
0x235: Call2 0xd9

0x236: Pop(1)
0x237: Push((int) 538176)
0x238: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x239: Pop(1)
0x23a: @@@ ClearReplies(); Obj=0 // @poff=116
0x23b: Pop(0)
0x23c: Push((int) 538177)
0x23d: Push((int) -1)
0x23e: Push((int) 40052)
0x23f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x240: Pop(3)
0x241: Return(); Pop(0)

0x242: Push((int) 40047)
0x243: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral" // @poff=89
0x247: Call2 0xd9

0x248: Pop(1)
0x249: Push((int) 538172)
0x24a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24b: Pop(1)
0x24c: @@@ ClearReplies(); Obj=0 // @poff=116
0x24d: Pop(0)
0x24e: Push((int) 538173)
0x24f: Push((int) -1)
0x250: Push((int) 40048)
0x251: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x252: Pop(3)
0x253: Push((int) 538174)
0x254: Push((int) -1)
0x255: Push((int) 40049)
0x256: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x257: Pop(3)
0x258: Return(); Pop(0)

0x259: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x25a: PushEmpty(bool)
0x25b: Call2 0xf8d

0x25c: Pop(0)
0x25d: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25e: @ lshStopAnimation()
0x25f: Pop(0)
0x260: GOTO 0x263

0x261: @ StopAnimation()
0x262: Pop(0)
0x263: Return(); Pop(0)

0x264: GOTO 0xf0

0x265: Return(); Pop(0)

0x266: PushEmpty()
0x267: EventDisable(0)
0x268: PushEmpty(object)
0x269: Stack[-2] = Stack[-1]
0x26a: Call2 0x287

0x26b: Pop(1)
0x26c: PushEmpty(object)
0x26d: Stack[-2] = Stack[-1]
0x26e: Call2 0xfb4

0x26f: Pop(1)
0x270: EventEnable(0)
0x271: @ Hold()
0x272: Pop(0)
0x273: GOTO 0x271

0x274: Return(); Pop(0)

0x275: PushEmpty(int, int)
0x276: PushEmpty(int, object)
0x277: Stack[-5] = Stack[-1]
0x278: Call2 0xe93

0x279: Stack[-2] = Stack[-3]
0x27a: Pop(2)
0x27b: Push((int) 0)
0x27c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x27e: PushEmpty(object)
0x27f: Stack[-4] = Stack[-1]
0x280: Call2 0xe96

0x281: Pop(1)
0x282: Return(); Pop(2)

0x283: PushEmpty()
0x284: Call2 0xe9c

0x285: Pop(0)
0x286: Return(); Pop(0)

0x287: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x288: Pop(0); PushNull((bool) Stack[-21] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28a: PushEmpty(string)
0x28b: Stack[-1] = "fdie" // @poff=156
0x28c: Call2 0x2e2

0x28d: Pop(1)
0x28e: GOTO 0x2e1

0x28f: @@ GetPosition(Stack[-10]); Obj=21 // @poff=166
0x290: Pop(0)
0x291: @ GetPosition(Stack[-9])
0x292: Pop(0)
0x293: @ GetDirection(Stack[-8])
0x294: Pop(0)
0x295: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x296: Push(CvectorIndex(Stack[-7], 0))
0x297: Push(CvectorIndex(Stack[-9], 0))
0x298: Pop(2); Push(Stack[-2] * Stack[-1]);
0x299: Push(CvectorIndex(Stack[-8], 2))
0x29a: Push(CvectorIndex(Stack[-10], 2))
0x29b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x29c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29d: Push((int) 0)
0x29e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a0: Stack[-6] = "fdie" // @poff=156
0x2a1: GOTO 0x2a3

0x2a2: Stack[-6] = "bdie" // @poff=178
0x2a3: @ RemoveRTEnvelope()
0x2a4: Pop(0)
0x2a5: @ SetDeathState()
0x2a6: Pop(0)
0x2a7: @ Stop()
0x2a8: Pop(0)
0x2a9: @ StopAsync()
0x2aa: Pop(0)
0x2ab: Stack[-21] = Stack[-5]
0x2ac: Push("GetScriptProperty") // @poff=188
0x2ad: Push((int) 2)
0x2ae: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2af: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b0: Push("Owner") // @poff=224
0x2b1: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=236
0x2b2: Pop(1)
0x2b3: Push(Stack[-4])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b5: Push("Owner") // @poff=224
0x2b6: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=254
0x2b7: Pop(1)
0x2b8: Pop(0); PushNull((bool) Stack[-5] == 0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: Stack[-21] = Stack[-5]
0x2bb: Push("@GetEyesHeight") // @poff=272
0x2bc: Push((int) 1)
0x2bd: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2be: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2bf: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=302
0x2c0: Pop(0)
0x2c1: Stack[-1] = [0.0, 0.0, 0.0]
0x2c2: Push(CvectorIndex(Stack[-1], 1))
0x2c3: Stack[-3] = Stack[-1]
0x2c4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2c5: Push("head") // @poff=316
0x2c6: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x2c7: Pop(1)
0x2c8: Stack[-3] = (bool) 1
0x2c9: GOTO 0x2cb

0x2ca: Stack[-3] = (bool) 0
0x2cb: PushEmpty(string)
0x2cc: Stack[-7] = Stack[-1]
0x2cd: Call2 0xb05

0x2ce: Pop(1)
0x2cf: Push("all") // @poff=138
0x2d0: @ PlayAnimation(Stack[-1], Stack[-7])
0x2d1: Pop(1)
0x2d2: @ WaitForAnimEnd()
0x2d3: Pop(0)
0x2d4: Push(Stack[-3])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d6: @ StopAsync()
0x2d7: Pop(0)
0x2d8: Push("head") // @poff=316
0x2d9: @ UnlookAsync(Stack[-1])
0x2da: Pop(1)
0x2db: Push("all") // @poff=138
0x2dc: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x2dd: Pop(1)
0x2de: @ RemoveEnvelope()
0x2df: Pop(0)
0x2e0: Stack[-5] = 0
0x2e1: Return(); Pop(20)

0x2e2: PushEmpty()
0x2e3: @ RemoveRTEnvelope()
0x2e4: Pop(0)
0x2e5: @ SetDeathState()
0x2e6: Pop(0)
0x2e7: @ Stop()
0x2e8: Pop(0)
0x2e9: @ StopAsync()
0x2ea: Pop(0)
0x2eb: @ StopSecondaryAnimation()
0x2ec: Pop(0)
0x2ed: PushEmpty(string)
0x2ee: Stack[-2] = Stack[-1]
0x2ef: Call2 0xb05

0x2f0: Pop(1)
0x2f1: Push("all") // @poff=138
0x2f2: @ PlayAnimation(Stack[-1], Stack[-2])
0x2f3: Pop(1)
0x2f4: @ WaitForAnimEnd()
0x2f5: Pop(0)
0x2f6: Push("all") // @poff=138
0x2f7: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x2f8: Pop(1)
0x2f9: @ RemoveEnvelope()
0x2fa: Pop(0)
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty()
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty()
0x2ff: Return(); Pop(0)

0x300: PushEmpty()
0x301: Return(); Pop(0)

0x302: Push((bool) 1)
0x303: @ SensePlayerOnly(Stack[-1])
0x304: Pop(1)
0x305: PushEmpty()
0x306: Call2 0xf8f

0x307: Pop(0)
0x308: PushEmpty()
0x309: Call2 0x311

0x30a: Pop(0)
0x30b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x30c: PushEmpty()
0x30d: Call2 0x416

0x30e: Pop(0)
0x30f: GOTO 0x30b

0x310: Return(); Pop(0)

0x311: PushEmpty(bool)
0x312: Call2 0xa8c

0x313: Pop(0)
0x314: Pop(1); Push((bool) Stack[-1] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x316: PushEmpty()
0x317: Call2 0xe9c

0x318: Pop(0)
0x319: Return(); Pop(0)

0x31a: PushEmpty(int, int)
0x31b: PushEmpty(int, object)
0x31c: Stack[-5] = Stack[-1]
0x31d: Call2 0xe93

0x31e: Stack[-2] = Stack[-3]
0x31f: Pop(2)
0x320: Push((int) 0)
0x321: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x323: Push((int) 1)
0x324: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x326: PushEmpty()
0x327: Call2 0x3d5

0x328: Pop(0)
0x329: PushEmpty(object)
0x32a: Stack[-4] = Stack[-1]
0x32b: Call2 0xe96

0x32c: Pop(1)
0x32d: Return(); Pop(2)

0x32e: PushEmpty(int, int)
0x32f: PushEmpty(object)
0x330: Stack[-4] = Stack[-1]
0x331: Call2 0xdd0

0x332: Pop(1)
0x333: PushEmpty(int, object)
0x334: Stack[-5] = Stack[-1]
0x335: Call2 0xe23

0x336: Stack[-2] = Stack[-3]
0x337: Pop(2)
0x338: Push((int) 0)
0x339: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x33b: Push((int) 1)
0x33c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33e: PushEmpty()
0x33f: Call2 0x3d5

0x340: Pop(0)
0x341: PushEmpty(object)
0x342: Stack[-4] = Stack[-1]
0x343: Call2 0xe2d

0x344: Pop(1)
0x345: Return(); Pop(2)

0x346: PushEmpty(int, int)
0x347: PushEmpty(bool, object, object, bool)
0x348: Stack[-9] = Stack[-3]
0x349: Stack[-8] = Stack[-2]
0x34a: Stack[-7] = Stack[-1]
0x34b: Call2 0xfab

0x34c: Pop(3)
0x34d: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x34e: PushEmpty(int, object, bool)
0x34f: Stack[-8] = Stack[-2]
0x350: Stack[-6] = Stack[-1]
0x351: Call2 0xe35

0x352: Stack[-3] = Stack[-4]
0x353: Pop(3)
0x354: Push((int) 0)
0x355: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x357: Push((int) 1)
0x358: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35a: PushEmpty()
0x35b: Call2 0x3d5

0x35c: Pop(0)
0x35d: PushEmpty(object)
0x35e: Stack[-6] = Stack[-1]
0x35f: Call2 0xe3f

0x360: Pop(1)
0x361: Return(); Pop(2)

0x362: PushEmpty(int, int)
0x363: PushEmpty(int, object)
0x364: Stack[-5] = Stack[-1]
0x365: Call2 0xe89

0x366: Stack[-2] = Stack[-3]
0x367: Pop(2)
0x368: Push((int) 0)
0x369: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x36b: Push((int) 1)
0x36c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36e: PushEmpty()
0x36f: Call2 0x3d5

0x370: Pop(0)
0x371: PushEmpty(object)
0x372: Stack[-4] = Stack[-1]
0x373: Call2 0xe8c

0x374: Pop(1)
0x375: Return(); Pop(2)

0x376: PushEmpty(int, int)
0x377: PushEmpty(bool, object, string)
0x378: Stack[-7] = Stack[-2]
0x379: Stack[-6] = Stack[-1]
0x37a: Call2 0xd7a

0x37b: Pop(2)
0x37c: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x37d: PushEmpty()
0x37e: Call2 0x3d5

0x37f: Pop(0)
0x380: PushEmpty(object, string)
0x381: Stack[-6] = Stack[-2]
0x382: Stack[-5] = Stack[-1]
0x383: Call2 0xd9a

0x384: Pop(2)
0x385: GOTO 0x39a

0x386: PushEmpty(int, string, object)
0x387: Stack[-6] = Stack[-2]
0x388: Stack[-7] = Stack[-1]
0x389: Call2 0xe8e

0x38a: Stack[-3] = Stack[-4]
0x38b: Pop(3)
0x38c: Push((int) 0)
0x38d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x38f: Push((int) 1)
0x390: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x392: PushEmpty()
0x393: Call2 0x3d5

0x394: Pop(0)
0x395: PushEmpty(string, object)
0x396: Stack[-5] = Stack[-2]
0x397: Stack[-6] = Stack[-1]
0x398: Call2 0xe91

0x399: Pop(2)
0x39a: Return(); Pop(2)

0x39b: PushEmpty()
0x39c: PushEmpty(bool, string)
0x39d: Stack[-3] = Stack[-1]
0x39e: Call2 0xddd

0x39f: Pop(1)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a1: PushEmpty()
0x3a2: Call2 0x3d5

0x3a3: Pop(0)
0x3a4: PushEmpty(string)
0x3a5: Stack[-2] = Stack[-1]
0x3a6: Call2 0xded

0x3a7: Pop(1)
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty()
0x3aa: PushEmpty(bool, object)
0x3ab: Stack[-3] = Stack[-1]
0x3ac: Call2 0xdb3

0x3ad: Pop(1)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3af: PushEmpty()
0x3b0: Call2 0x3d5

0x3b1: Pop(0)
0x3b2: PushEmpty(object)
0x3b3: Stack[-2] = Stack[-1]
0x3b4: Call2 0xdca

0x3b5: Pop(1)
0x3b6: GOTO 0x3bb

0x3b7: PushEmpty(object)
0x3b8: Stack[-2] = Stack[-1]
0x3b9: Call2 0x3ee

0x3ba: Pop(1)
0x3bb: Return(); Pop(0)

0x3bc: PushEmpty()
0x3bd: PushEmpty(object)
0x3be: Stack[-2] = Stack[-1]
0x3bf: Call2 0x3ee

0x3c0: Pop(1)
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty()
0x3c3: Push((int) 110)
0x3c4: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c6: Return(); Pop(0)

0x3c7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3c8: Push((int) 110)
0x3c9: @ KillTimer(Stack[-1])
0x3ca: Pop(1)
0x3cb: @ ResetAAS()
0x3cc: Pop(0)
0x3cd: Return(); Pop(0)

0x3ce: PushEmpty()
0x3cf: Call2 0x3d5

0x3d0: Pop(0)
0x3d1: PushEmpty()
0x3d2: Call2 0xe9c

0x3d3: Pop(0)
0x3d4: Return(); Pop(0)

0x3d5: Push((int) 110)
0x3d6: @ KillTimer(Stack[-1])
0x3d7: Pop(1)
0x3d8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3d9: PushEmpty()
0x3da: Call2 0x45d

0x3db: Pop(0)
0x3dc: Return(); Pop(0)

0x3dd: Push((int) 110)
0x3de: @ KillTimer(Stack[-1])
0x3df: Pop(1)
0x3e0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3e1: PushEmpty()
0x3e2: Call2 0x464

0x3e3: Pop(0)
0x3e4: Return(); Pop(0)

0x3e5: PushEmpty()
0x3e6: PushEmpty()
0x3e7: Call2 0x3d5

0x3e8: Pop(0)
0x3e9: PushEmpty(object)
0x3ea: Stack[-2] = Stack[-1]
0x3eb: Call2 0xd62

0x3ec: Pop(1)
0x3ed: Return(); Pop(0)

0x3ee: PushEmpty(bool, int, bool, int)
0x3ef: PushEmpty(bool, object)
0x3f0: Stack[-7] = Stack[-1]
0x3f1: Call2 0x9eb

0x3f2: Pop(1)
0x3f3: Pop(1); Push((bool) Stack[-1] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f5: Return(); Pop(4)

0x3f6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: Return(); Pop(4)

0x3f9: @ IsPlayerActor(Stack[-5], Stack[-2])
0x3fa: Pop(0)
0x3fb: Pop(0); Push((bool) Stack[-2] == 0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fd: Return(); Pop(4)

0x3fe: PushEmpty(int, object)
0x3ff: Stack[-7] = Stack[-1]
0x400: Call2 0xe12

0x401: Stack[-2] = Stack[-3]
0x402: Pop(2)
0x403: Push((int) 0)
0x404: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x406: Push((int) 1)
0x407: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x409: PushEmpty()
0x40a: Call2 0x3dd

0x40b: Pop(0)
0x40c: PushEmpty(object)
0x40d: Stack[-6] = Stack[-1]
0x40e: Call2 0xe1b

0x40f: Pop(1)
0x410: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x411: Push((int) 110)
0x412: Push((float)10.0)
0x413: @ SetTimer(Stack[-2], Stack[-1])
0x414: Pop(2)
0x415: Return(); Pop(4)

0x416: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x417: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x418: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x419: Push((float)0.5)
0x41a: @ rand(Stack[-7], Stack[-1])
0x41b: Pop(1)
0x41c: @ Sleep(Stack[-6])
0x41d: Pop(0)
0x41e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x41f: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x420: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x421: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x422: @ GetPosition(Stack[-4])
0x423: Pop(0)
0x424: PushEmpty(float)
0x425: Call2 0x451

0x426: Pop(0)
0x427: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x428: Pop(1)
0x429: Push(Stack[-3])
0x42a: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42b: GOTO 0x430

0x42c: Push((int) 1)
0x42d: @ Sleep(Stack[-1])
0x42e: Pop(1)
0x42f: GOTO 0x422

0x430: GOTO 0x432

0x431: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x432: PushEmpty(object, cvector)
0x433: Stack[-7] = Stack[-1]
0x434: Call2 0x46d

0x435: Stack[-2] = Stack[-4]
0x436: Pop(2)
0x437: Pop(0); Push(( Stack[-2] != 0 )
0x438: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x439: @ RotatePath(Stack[-2], Stack[-1])
0x43a: Pop(0)
0x43b: Push(Stack[-1])
0x43c: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x43d: PushEmpty(bool)
0x43e: Call2 0x46b

0x43f: Pop(0)
0x440: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x441: Pop(1)
0x442: Stack[-2] = 0
0x443: Push(Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x445: PushEmpty()
0x446: Push(-0, 0); TaskCall(4)
0x447: Call2 0x517

0x448: Pop(-0, 0); TaskReturn
0x449: Pop(0)
0x44a: GOTO 0x44e

0x44b: Push((int) 1)
0x44c: @ Sleep(Stack[-1])
0x44d: Pop(1)
0x44e: Stack[-2] = 0
0x44f: GOTO 0x41e

0x450: Return(); Pop(12)

0x451: PushEmpty(float, float)
0x452: @ GetCameraFarDistance(Stack[-1])
0x453: Pop(0)
0x454: Stack[-1] = Stack[-3]
0x455: Return(); Pop(2)

0x456: PushEmpty()
0x457: @ RequestClearPath(Stack[-1])
0x458: Pop(0)
0x459: Return(); Pop(0)

0x45a: @ Stop()
0x45b: Pop(0)
0x45c: Return(); Pop(0)

0x45d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x45e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x45f: @ Stop()
0x460: Pop(0)
0x461: @ StopGroup0()
0x462: Pop(0)
0x463: Return(); Pop(0)

0x464: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x465: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x466: @ Stop()
0x467: Pop(0)
0x468: @ StopGroup0()
0x469: Pop(0)
0x46a: Return(); Pop(0)

0x46b: Stack[-1] = (bool) 0
0x46c: Return(); Pop(0)

0x46d: PushEmpty(object, object)
0x46e: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x46f: Pop(0)
0x470: Stack[-1] = Stack[-4]
0x471: Return(); Pop(2)

0x472: Stack[-1] = 0
0x473: PushEmpty(int, int)
0x474: PushEmpty(int, object)
0x475: Stack[-5] = Stack[-1]
0x476: Call2 0xe93

0x477: Stack[-2] = Stack[-3]
0x478: Pop(2)
0x479: Push((int) 0)
0x47a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x47c: Push((int) 1)
0x47d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x47f: PushEmpty()
0x480: Call2 0x568

0x481: Pop(0)
0x482: PushEmpty(object)
0x483: Stack[-4] = Stack[-1]
0x484: Call2 0xe96

0x485: Pop(1)
0x486: Return(); Pop(2)

0x487: PushEmpty(int, int)
0x488: PushEmpty(object)
0x489: Stack[-4] = Stack[-1]
0x48a: Call2 0xdd0

0x48b: Pop(1)
0x48c: PushEmpty(int, object)
0x48d: Stack[-5] = Stack[-1]
0x48e: Call2 0xe23

0x48f: Stack[-2] = Stack[-3]
0x490: Pop(2)
0x491: Push((int) 0)
0x492: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x493: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x494: Push((int) 1)
0x495: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x497: PushEmpty()
0x498: Call2 0x568

0x499: Pop(0)
0x49a: PushEmpty(object)
0x49b: Stack[-4] = Stack[-1]
0x49c: Call2 0xe2d

0x49d: Pop(1)
0x49e: Return(); Pop(2)

0x49f: PushEmpty(int, int)
0x4a0: PushEmpty(bool, object, object, bool)
0x4a1: Stack[-9] = Stack[-3]
0x4a2: Stack[-8] = Stack[-2]
0x4a3: Stack[-7] = Stack[-1]
0x4a4: Call2 0xfab

0x4a5: Pop(3)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4a7: PushEmpty(int, object, bool)
0x4a8: Stack[-8] = Stack[-2]
0x4a9: Stack[-6] = Stack[-1]
0x4aa: Call2 0xe35

0x4ab: Stack[-3] = Stack[-4]
0x4ac: Pop(3)
0x4ad: Push((int) 0)
0x4ae: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b0: Push((int) 1)
0x4b1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b3: PushEmpty()
0x4b4: Call2 0x568

0x4b5: Pop(0)
0x4b6: PushEmpty(object)
0x4b7: Stack[-6] = Stack[-1]
0x4b8: Call2 0xe3f

0x4b9: Pop(1)
0x4ba: Return(); Pop(2)

0x4bb: PushEmpty(int, int)
0x4bc: PushEmpty(int, object)
0x4bd: Stack[-5] = Stack[-1]
0x4be: Call2 0xe89

0x4bf: Stack[-2] = Stack[-3]
0x4c0: Pop(2)
0x4c1: Push((int) 0)
0x4c2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4c4: Push((int) 1)
0x4c5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4c6: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c7: PushEmpty()
0x4c8: Call2 0x568

0x4c9: Pop(0)
0x4ca: PushEmpty(object)
0x4cb: Stack[-4] = Stack[-1]
0x4cc: Call2 0xe8c

0x4cd: Pop(1)
0x4ce: Return(); Pop(2)

0x4cf: PushEmpty(int, int)
0x4d0: PushEmpty(bool, object, string)
0x4d1: Stack[-7] = Stack[-2]
0x4d2: Stack[-6] = Stack[-1]
0x4d3: Call2 0xd7a

0x4d4: Pop(2)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4d6: PushEmpty()
0x4d7: Call2 0x568

0x4d8: Pop(0)
0x4d9: PushEmpty(object, string)
0x4da: Stack[-6] = Stack[-2]
0x4db: Stack[-5] = Stack[-1]
0x4dc: Call2 0xd9a

0x4dd: Pop(2)
0x4de: GOTO 0x4f3

0x4df: PushEmpty(int, string, object)
0x4e0: Stack[-6] = Stack[-2]
0x4e1: Stack[-7] = Stack[-1]
0x4e2: Call2 0xe8e

0x4e3: Stack[-3] = Stack[-4]
0x4e4: Pop(3)
0x4e5: Push((int) 0)
0x4e6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4e7: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4e8: Push((int) 1)
0x4e9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4eb: PushEmpty()
0x4ec: Call2 0x568

0x4ed: Pop(0)
0x4ee: PushEmpty(string, object)
0x4ef: Stack[-5] = Stack[-2]
0x4f0: Stack[-6] = Stack[-1]
0x4f1: Call2 0xe91

0x4f2: Pop(2)
0x4f3: Return(); Pop(2)

0x4f4: PushEmpty()
0x4f5: PushEmpty(bool, string)
0x4f6: Stack[-3] = Stack[-1]
0x4f7: Call2 0xddd

0x4f8: Pop(1)
0x4f9: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fa: PushEmpty()
0x4fb: Call2 0x568

0x4fc: Pop(0)
0x4fd: PushEmpty(string)
0x4fe: Stack[-2] = Stack[-1]
0x4ff: Call2 0xded

0x500: Pop(1)
0x501: Return(); Pop(0)

0x502: PushEmpty()
0x503: Call2 0x568

0x504: Pop(0)
0x505: PushEmpty()
0x506: Call2 0xe9c

0x507: Pop(0)
0x508: Return(); Pop(0)

0x509: PushEmpty()
0x50a: PushEmpty(bool, object)
0x50b: Stack[-3] = Stack[-1]
0x50c: Call2 0xdb3

0x50d: Pop(1)
0x50e: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x50f: PushEmpty()
0x510: Call2 0x568

0x511: Pop(0)
0x512: PushEmpty(object)
0x513: Stack[-2] = Stack[-1]
0x514: Call2 0xdca

0x515: Pop(1)
0x516: Return(); Pop(0)

0x517: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x518: @ WaitForAnimEnd()
0x519: Pop(0)
0x51a: PushEmpty(bool)
0x51b: Call2 0xa8c

0x51c: Pop(0)
0x51d: Pop(1); Push((bool) Stack[-1] == 0)
0x51e: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51f: Return(); Pop(14)

0x520: PushEmpty(int)
0x521: Call2 0xe01

0x522: Stack[-1] = Stack[-8]
0x523: Pop(1)
0x524: Stack[-6] = (int) 0
0x525: PushEmpty(bool)
0x526: Stack[-1] = (bool) 0
0x527: Push((int) 5)
0x528: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52a: PushEmpty(bool)
0x52b: Call2 0xa8c

0x52c: Pop(0)
0x52d: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52e: Stack[-1] = (bool) 1
0x52f: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x530: Push((int) 3)
0x531: @ irand(Stack[-6], Stack[-1])
0x532: Pop(1)
0x533: Push((int) 0)
0x534: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x536: Push(Stack[-7])
0x537: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x538: @ irand(Stack[-4], Stack[-7])
0x539: Pop(0)
0x53a: Push("all") // @poff=138
0x53b: PushEmpty(string, int)
0x53c: Stack[-7] = Stack[-1]
0x53d: Call2 0xdfa

0x53e: Pop(1)
0x53f: @ PlayAnimation(Stack[-2], Stack[-1])
0x540: Pop(2)
0x541: @ WaitForAnimEnd(Stack[-3])
0x542: Pop(0)
0x543: Pop(0); Push((bool) Stack[-3] == 0)
0x544: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x545: GOTO 0x563

0x546: GOTO 0x558

0x547: Push((int) 1)
0x548: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x54a: Push((int) 4)
0x54b: @ rand(Stack[-3], Stack[-1])
0x54c: Pop(1)
0x54d: Push((int) 1)
0x54e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x54f: @ Sleep(Stack[-1], Stack[-2])
0x550: Pop(1)
0x551: Pop(0); Push((bool) Stack[-1] == 0)
0x552: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x553: GOTO 0x563

0x554: GOTO 0x558

0x555: Push(Stack[-6])
0x556: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x557: GOTO 0x563

0x558: PushEmpty(bool)
0x559: Call2 0x566

0x55a: Pop(0)
0x55b: Pop(1); Push((bool) Stack[-1] == 0)
0x55c: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55d: GOTO 0x563

0x55e: @ ResetAAS()
0x55f: Pop(0)
0x560: Push((int) 1)
0x561: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x562: GOTO 0x525

0x563: @ ResetAAS()
0x564: Pop(0)
0x565: Return(); Pop(14)

0x566: Stack[-1] = (bool) 1
0x567: Return(); Pop(0)

0x568: @ StopAnimation()
0x569: Pop(0)
0x56a: @ StopGroup0()
0x56b: Pop(0)
0x56c: Return(); Pop(0)

0x56d: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x56e: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x56f: PushEmpty()
0x570: Call2 0x5a0

0x571: Pop(0)
0x572: @ GetDirection(Stack[-3])
0x573: Pop(0)
0x574: PushEmpty(cvector, object)
0x575: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x576: Call2 0x9a2

0x577: Stack[-2] = Stack[-4]
0x578: Pop(2)
0x579: PushEmpty(float, cvector, cvector)
0x57a: Stack[-6] = Stack[-2]
0x57b: Stack[-5] = Stack[-1]
0x57c: Call2 0xb5f

0x57d: Pop(2)
0x57e: Push((int) 0)
0x57f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x580: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x581: PushEmpty(object)
0x582: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x583: Call2 0xa81

0x584: Pop(1)
0x585: Stack[-1] = (bool) 1
0x586: GOTO 0x58a

0x587: Push((float)1.5)
0x588: @ Sleep(Stack[-1], Stack[-2])
0x589: Pop(1)
0x58a: Push(Stack[-1])
0x58b: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x58c: PushEmpty(object)
0x58d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58e: Call2 0xa81

0x58f: Pop(1)
0x590: Push((int) 111)
0x591: Push((float)0.5)
0x592: @ SetTimer(Stack[-2], Stack[-1])
0x593: Pop(2)
0x594: Push((float)5.0)
0x595: @ Sleep(Stack[-1])
0x596: Pop(1)
0x597: Push((int) 111)
0x598: @ KillTimer(Stack[-1])
0x599: Pop(1)
0x59a: @ StopAsync()
0x59b: Pop(0)
0x59c: Push("head") // @poff=316
0x59d: @ UnlookAsync(Stack[-1])
0x59e: Pop(1)
0x59f: Return(); Pop(6)

0x5a0: PushEmpty(object)
0x5a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a2: Call2 0xaf3

0x5a3: Pop(1)
0x5a4: Return(); Pop(0)

0x5a5: PushEmpty(int, int)
0x5a6: PushEmpty(int, object)
0x5a7: Stack[-5] = Stack[-1]
0x5a8: Call2 0xe93

0x5a9: Stack[-2] = Stack[-3]
0x5aa: Pop(2)
0x5ab: Push((int) 0)
0x5ac: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5ae: Push((int) 1)
0x5af: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b1: PushEmpty()
0x5b2: Call2 0x634

0x5b3: Pop(0)
0x5b4: PushEmpty(object)
0x5b5: Stack[-4] = Stack[-1]
0x5b6: Call2 0xe96

0x5b7: Pop(1)
0x5b8: Return(); Pop(2)

0x5b9: PushEmpty(int, int)
0x5ba: PushEmpty(object)
0x5bb: Stack[-4] = Stack[-1]
0x5bc: Call2 0xdd0

0x5bd: Pop(1)
0x5be: PushEmpty(int, object)
0x5bf: Stack[-5] = Stack[-1]
0x5c0: Call2 0xe23

0x5c1: Stack[-2] = Stack[-3]
0x5c2: Pop(2)
0x5c3: Push((int) 0)
0x5c4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5c6: Push((int) 1)
0x5c7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5c8: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5c9: PushEmpty()
0x5ca: Call2 0x634

0x5cb: Pop(0)
0x5cc: PushEmpty(object)
0x5cd: Stack[-4] = Stack[-1]
0x5ce: Call2 0xe2d

0x5cf: Pop(1)
0x5d0: Return(); Pop(2)

0x5d1: PushEmpty(int, int)
0x5d2: PushEmpty(bool, object, object, bool)
0x5d3: Stack[-9] = Stack[-3]
0x5d4: Stack[-8] = Stack[-2]
0x5d5: Stack[-7] = Stack[-1]
0x5d6: Call2 0xfab

0x5d7: Pop(3)
0x5d8: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5d9: PushEmpty(int, object, bool)
0x5da: Stack[-8] = Stack[-2]
0x5db: Stack[-6] = Stack[-1]
0x5dc: Call2 0xe35

0x5dd: Stack[-3] = Stack[-4]
0x5de: Pop(3)
0x5df: Push((int) 0)
0x5e0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5e1: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5e2: Push((int) 1)
0x5e3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e5: PushEmpty()
0x5e6: Call2 0x634

0x5e7: Pop(0)
0x5e8: PushEmpty(object)
0x5e9: Stack[-6] = Stack[-1]
0x5ea: Call2 0xe3f

0x5eb: Pop(1)
0x5ec: Return(); Pop(2)

0x5ed: PushEmpty(int, int)
0x5ee: PushEmpty(int, object)
0x5ef: Stack[-5] = Stack[-1]
0x5f0: Call2 0xe89

0x5f1: Stack[-2] = Stack[-3]
0x5f2: Pop(2)
0x5f3: Push((int) 0)
0x5f4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5f5: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5f6: Push((int) 1)
0x5f7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5f9: PushEmpty()
0x5fa: Call2 0x634

0x5fb: Pop(0)
0x5fc: PushEmpty(object)
0x5fd: Stack[-4] = Stack[-1]
0x5fe: Call2 0xe8c

0x5ff: Pop(1)
0x600: Return(); Pop(2)

0x601: PushEmpty(int, int)
0x602: PushEmpty(bool, object, string)
0x603: Stack[-7] = Stack[-2]
0x604: Stack[-6] = Stack[-1]
0x605: Call2 0xd7a

0x606: Pop(2)
0x607: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x608: PushEmpty()
0x609: Call2 0x634

0x60a: Pop(0)
0x60b: PushEmpty(object, string)
0x60c: Stack[-6] = Stack[-2]
0x60d: Stack[-5] = Stack[-1]
0x60e: Call2 0xd9a

0x60f: Pop(2)
0x610: GOTO 0x625

0x611: PushEmpty(int, string, object)
0x612: Stack[-6] = Stack[-2]
0x613: Stack[-7] = Stack[-1]
0x614: Call2 0xe8e

0x615: Stack[-3] = Stack[-4]
0x616: Pop(3)
0x617: Push((int) 0)
0x618: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x61a: Push((int) 1)
0x61b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x61c: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61d: PushEmpty()
0x61e: Call2 0x634

0x61f: Pop(0)
0x620: PushEmpty(string, object)
0x621: Stack[-5] = Stack[-2]
0x622: Stack[-6] = Stack[-1]
0x623: Call2 0xe91

0x624: Pop(2)
0x625: Return(); Pop(2)

0x626: PushEmpty()
0x627: PushEmpty(bool, string)
0x628: Stack[-3] = Stack[-1]
0x629: Call2 0xddd

0x62a: Pop(1)
0x62b: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x62c: PushEmpty()
0x62d: Call2 0x634

0x62e: Pop(0)
0x62f: PushEmpty(string)
0x630: Stack[-2] = Stack[-1]
0x631: Call2 0xded

0x632: Pop(1)
0x633: Return(); Pop(0)

0x634: @ StopGroup0()
0x635: Pop(0)
0x636: @ StopAsync()
0x637: Pop(0)
0x638: Push("head") // @poff=316
0x639: @ UnlookAsync(Stack[-1])
0x63a: Pop(1)
0x63b: Push((int) 111)
0x63c: @ KillTimer(Stack[-1])
0x63d: Pop(1)
0x63e: Return(); Pop(0)

0x63f: PushEmpty()
0x640: PushEmpty()
0x641: Call2 0x634

0x642: Pop(0)
0x643: PushEmpty(object)
0x644: Stack[-2] = Stack[-1]
0x645: Call2 0xd62

0x646: Pop(1)
0x647: Return(); Pop(0)

0x648: PushEmpty(cvector, cvector, cvector, cvector)
0x649: Push((int) 111)
0x64a: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x64b: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x64c: Return(); Pop(4)

0x64d: PushEmpty(bool, object)
0x64e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64f: Call2 0x9eb

0x650: Pop(1)
0x651: Pop(1); Push((bool) Stack[-1] == 0)
0x652: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x653: PushEmpty()
0x654: Call2 0x634

0x655: Pop(0)
0x656: Return(); Pop(4)

0x657: @ GetDirection(Stack[-2])
0x658: Pop(0)
0x659: PushEmpty(cvector, object)
0x65a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x65b: Call2 0x9a2

0x65c: Stack[-2] = Stack[-3]
0x65d: Pop(2)
0x65e: PushEmpty(float, cvector, cvector)
0x65f: Stack[-5] = Stack[-2]
0x660: Stack[-4] = Stack[-1]
0x661: Call2 0xb5f

0x662: Pop(2)
0x663: Push((float)0.4999999701976776)
0x664: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x666: PushEmpty(object)
0x667: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x668: Call2 0xa81

0x669: Pop(1)
0x66a: Return(); Pop(4)

0x66b: PushEmpty()
0x66c: Call2 0x634

0x66d: Pop(0)
0x66e: PushEmpty()
0x66f: Call2 0xe9c

0x670: Pop(0)
0x671: Return(); Pop(0)

0x672: PushEmpty()
0x673: PushEmpty(bool, object)
0x674: Stack[-3] = Stack[-1]
0x675: Call2 0xdb3

0x676: Pop(1)
0x677: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x678: PushEmpty()
0x679: Call2 0x634

0x67a: Pop(0)
0x67b: PushEmpty(object)
0x67c: Stack[-2] = Stack[-1]
0x67d: Call2 0xdca

0x67e: Pop(1)
0x67f: Return(); Pop(0)

0x680: PushEmpty()
0x681: @ Face(Stack[-1])
0x682: Pop(0)
0x683: Push("all") // @poff=138
0x684: Push("attack_on") // @poff=326
0x685: @ PlayAnimation(Stack[-2], Stack[-1])
0x686: Pop(2)
0x687: @ WaitForAnimEnd()
0x688: Pop(0)
0x689: Push("all") // @poff=138
0x68a: Push("attack_stay") // @poff=346
0x68b: @ PlayAnimation(Stack[-2], Stack[-1])
0x68c: Pop(2)
0x68d: @ WaitForAnimEnd()
0x68e: Pop(0)
0x68f: Push("all") // @poff=138
0x690: Push("attack_off") // @poff=370
0x691: @ PlayAnimation(Stack[-2], Stack[-1])
0x692: Pop(2)
0x693: @ WaitForAnimEnd()
0x694: Pop(0)
0x695: @ StopAsync()
0x696: Pop(0)
0x697: PushEmpty(object)
0x698: Stack[-2] = Stack[-1]
0x699: Call2 0x6c1

0x69a: Pop(1)
0x69b: Return(); Pop(0)

0x69c: PushEmpty()
0x69d: Call2 0x73e

0x69e: Pop(0)
0x69f: PushEmpty()
0x6a0: Call2 0xe9c

0x6a1: Pop(0)
0x6a2: Return(); Pop(0)

0x6a3: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x6a4: @ GetPosition(Stack[-6])
0x6a5: Pop(0)
0x6a6: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0x6a7: Pop(0)
0x6a8: @ GetDirection(Stack[-4])
0x6a9: Pop(0)
0x6aa: PushEmpty(cvector, cvector)
0x6ab: PushEmpty(cvector, cvector)
0x6ac: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x6ad: Call2 0xb34

0x6ae: Pop(1)
0x6af: Push((float)0.75)
0x6b0: Pop(1); Push(Stack[-8] * Stack[-1]);
0x6b1: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6b2: Call2 0xb34

0x6b3: Stack[-2] = Stack[-5]
0x6b4: Pop(2)
0x6b5: Push((int) 32)
0x6b6: Push((float)7000.0)
0x6b7: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x6b8: Pop(2)
0x6b9: Push((int) 100)
0x6ba: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x6bb: Push((int) 0)
0x6bc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6bd: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6be: Stack[-1] = (int) 0
0x6bf: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x6c0: Return(); Pop(12)

0x6c1: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x6c2: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x6c3: PushEmpty(cvector, float)
0x6c4: Stack[-1] = (float) 1.7453293800354004
0x6c5: Call2 0x6a3

0x6c6: Stack[-2] = Stack[-7]
0x6c7: Pop(2)
0x6c8: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x6c9: Push((float)2500.0)
0x6ca: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x6cb: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6cc: PushEmpty(cvector, float)
0x6cd: Stack[-1] = (float) 2.6179938316345215
0x6ce: Call2 0x6a3

0x6cf: Stack[-2] = Stack[-7]
0x6d0: Pop(2)
0x6d1: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x6d2: Push((float)2500.0)
0x6d3: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x6d4: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6d5: Push("Can't retreat, distance: ") // @poff=392
0x6d6: Pop(0); Push(Sqrt(Stack[-5]))
0x6d7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6d8: @ Trace(Stack[-1])
0x6d9: Pop(1)
0x6da: Push((float)0.5)
0x6db: @ Sleep(Stack[-1])
0x6dc: Pop(1)
0x6dd: Return(); Pop(10)

0x6de: Push(CvectorIndex(Stack[-5], 0))
0x6df: Push(CvectorIndex(Stack[-6], 2))
0x6e0: @ Rotate(Stack[-2], Stack[-1])
0x6e1: Pop(2)
0x6e2: PushEmpty(cvector)
0x6e3: Call2 0x99d

0x6e4: Pop(0)
0x6e5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x6e6: Push((int) 120)
0x6e7: Push((float)0.5)
0x6e8: @ SetTimer(Stack[-2], Stack[-1])
0x6e9: Pop(2)
0x6ea: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x6eb: Push((int) 1)
0x6ec: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x6ed: Pop(1)
0x6ee: Push(Stack[-3])
0x6ef: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x6f0: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f2: GOTO 0x709

0x6f3: GOTO 0x707

0x6f4: PushEmpty(cvector, float)
0x6f5: Stack[-1] = (float) 2.6179938316345215
0x6f6: Call2 0x6a3

0x6f7: Stack[-2] = Stack[-4]
0x6f8: Pop(2)
0x6f9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x6fa: Push((float)2500.0)
0x6fb: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x6fd: PushEmpty(cvector)
0x6fe: Call2 0x99d

0x6ff: Pop(0)
0x700: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x701: Push((int) 120)
0x702: Push((float)0.5)
0x703: @ SetTimer(Stack[-2], Stack[-1])
0x704: Pop(2)
0x705: GOTO 0x707

0x706: GOTO 0x709

0x707: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x708: IF (Stack[-1] == 1) GOTO 0x6eb; Pop(1)

0x709: Return(); Pop(10)

0x70a: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x70b: Push((int) 120)
0x70c: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x70d: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70e: Return(); Pop(8)

0x70f: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x710: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x711: @ Stop()
0x712: Pop(0)
0x713: Push((int) 1)
0x714: @ KillTimer(Stack[-1])
0x715: Pop(1)
0x716: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x717: GOTO 0x73d

0x718: @ GetDirection(Stack[-4])
0x719: Pop(0)
0x71a: Push((float)7000.0)
0x71b: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x71c: Pop(1)
0x71d: PushEmpty(cvector, float)
0x71e: Stack[-1] = (float) 1.7453293800354004
0x71f: Call2 0x6a3

0x720: Stack[-2] = Stack[-4]
0x721: Pop(2)
0x722: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x723: PushEmpty(bool)
0x724: Stack[-1] = (bool) 0
0x725: Push((float)2500.0)
0x726: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x728: PushEmpty(bool)
0x729: Stack[-1] = (bool) 1
0x72a: Pop(0); Push(Stack[-5] * Stack[-5]);
0x72b: Push((float)2.25)
0x72c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x72d: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x72e: IF (Stack[-1] == 1) GOTO 0x734; Pop(1)

0x72f: PushEmpty(bool)
0x730: Call2 0x74e

0x731: Pop(0)
0x732: IF (Stack[-1] == 1) GOTO 0x734; Pop(1)

0x733: Stack[-1] = (bool) 0
0x734: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x735: Stack[-1] = (bool) 1
0x736: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x737: @ Stop()
0x738: Pop(0)
0x739: PushEmpty(cvector)
0x73a: Call2 0x99d

0x73b: Pop(0)
0x73c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x73d: Return(); Pop(8)

0x73e: @ Stop()
0x73f: Pop(0)
0x740: Push((int) 120)
0x741: @ KillTimer(Stack[-1])
0x742: Pop(1)
0x743: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x744: Return(); Pop(0)

0x745: PushEmpty()
0x746: PushEmpty()
0x747: Call2 0x73e

0x748: Pop(0)
0x749: PushEmpty(object)
0x74a: Stack[-2] = Stack[-1]
0x74b: Call2 0xd62

0x74c: Pop(1)
0x74d: Return(); Pop(0)

0x74e: PushEmpty(cvector, cvector, cvector, cvector)
0x74f: @ GetDirection(Stack[-2])
0x750: Pop(0)
0x751: PushEmpty(cvector, object)
0x752: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x753: Call2 0x9a2

0x754: Stack[-2] = Stack[-3]
0x755: Pop(2)
0x756: PushEmpty(float, cvector, cvector)
0x757: Stack[-5] = Stack[-2]
0x758: Stack[-4] = Stack[-1]
0x759: Call2 0xb44

0x75a: Pop(2)
0x75b: Push((float)-0.3420201241970062)
0x75c: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x75d: Return(); Pop(4)

0x75e: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x75f: @ GetPosition(Stack[-6])
0x760: Pop(0)
0x761: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0x762: Pop(0)
0x763: @ GetDirection(Stack[-4])
0x764: Pop(0)
0x765: PushEmpty(cvector, cvector)
0x766: PushEmpty(cvector, cvector)
0x767: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x768: Call2 0xb34

0x769: Pop(1)
0x76a: Push((float)0.75)
0x76b: Pop(1); Push(Stack[-8] * Stack[-1]);
0x76c: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x76d: Call2 0xb34

0x76e: Stack[-2] = Stack[-5]
0x76f: Pop(2)
0x770: Push((int) 32)
0x771: Push((float)7000.0)
0x772: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x773: Pop(2)
0x774: Push((int) 100)
0x775: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x776: Push((int) 0)
0x777: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x778: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x779: Stack[-1] = (int) 0
0x77a: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x77b: Return(); Pop(12)

0x77c: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x77d: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x77e: PushEmpty(cvector, float)
0x77f: Stack[-1] = (float) 1.7453293800354004
0x780: Call2 0x75e

0x781: Stack[-2] = Stack[-7]
0x782: Pop(2)
0x783: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x784: Push((float)2500.0)
0x785: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x786: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x787: PushEmpty(cvector, float)
0x788: Stack[-1] = (float) 2.6179938316345215
0x789: Call2 0x75e

0x78a: Stack[-2] = Stack[-7]
0x78b: Pop(2)
0x78c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x78d: Push((float)2500.0)
0x78e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x78f: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x790: Push("Can't retreat, distance: ") // @poff=392
0x791: Pop(0); Push(Sqrt(Stack[-5]))
0x792: Pop(2); Push(Stack[-2] + Stack[-1]);
0x793: @ Trace(Stack[-1])
0x794: Pop(1)
0x795: Push((float)0.5)
0x796: @ Sleep(Stack[-1])
0x797: Pop(1)
0x798: Return(); Pop(10)

0x799: Push(CvectorIndex(Stack[-5], 0))
0x79a: Push(CvectorIndex(Stack[-6], 2))
0x79b: @ Rotate(Stack[-2], Stack[-1])
0x79c: Pop(2)
0x79d: PushEmpty(cvector)
0x79e: Call2 0x99d

0x79f: Pop(0)
0x7a0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x7a1: Push((int) 120)
0x7a2: Push((float)0.5)
0x7a3: @ SetTimer(Stack[-2], Stack[-1])
0x7a4: Pop(2)
0x7a5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7a6: Push((int) 1)
0x7a7: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x7a8: Pop(1)
0x7a9: Push(Stack[-3])
0x7aa: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7ab: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ad: GOTO 0x7c4

0x7ae: GOTO 0x7c2

0x7af: PushEmpty(cvector, float)
0x7b0: Stack[-1] = (float) 2.6179938316345215
0x7b1: Call2 0x75e

0x7b2: Stack[-2] = Stack[-4]
0x7b3: Pop(2)
0x7b4: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x7b5: Push((float)2500.0)
0x7b6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7b8: PushEmpty(cvector)
0x7b9: Call2 0x99d

0x7ba: Pop(0)
0x7bb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x7bc: Push((int) 120)
0x7bd: Push((float)0.5)
0x7be: @ SetTimer(Stack[-2], Stack[-1])
0x7bf: Pop(2)
0x7c0: GOTO 0x7c2

0x7c1: GOTO 0x7c4

0x7c2: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x7c3: IF (Stack[-1] == 1) GOTO 0x7a6; Pop(1)

0x7c4: Return(); Pop(10)

0x7c5: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x7c6: Push((int) 120)
0x7c7: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x7c8: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c9: Return(); Pop(8)

0x7ca: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7cb: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7cc: @ Stop()
0x7cd: Pop(0)
0x7ce: Push((int) 1)
0x7cf: @ KillTimer(Stack[-1])
0x7d0: Pop(1)
0x7d1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x7d2: GOTO 0x7f8

0x7d3: @ GetDirection(Stack[-4])
0x7d4: Pop(0)
0x7d5: Push((float)7000.0)
0x7d6: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x7d7: Pop(1)
0x7d8: PushEmpty(cvector, float)
0x7d9: Stack[-1] = (float) 1.7453293800354004
0x7da: Call2 0x75e

0x7db: Stack[-2] = Stack[-4]
0x7dc: Pop(2)
0x7dd: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x7de: PushEmpty(bool)
0x7df: Stack[-1] = (bool) 0
0x7e0: Push((float)2500.0)
0x7e1: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x7e2: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7e3: PushEmpty(bool)
0x7e4: Stack[-1] = (bool) 1
0x7e5: Pop(0); Push(Stack[-5] * Stack[-5]);
0x7e6: Push((float)2.25)
0x7e7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7e8: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x7e9: IF (Stack[-1] == 1) GOTO 0x7ef; Pop(1)

0x7ea: PushEmpty(bool)
0x7eb: Call2 0x809

0x7ec: Pop(0)
0x7ed: IF (Stack[-1] == 1) GOTO 0x7ef; Pop(1)

0x7ee: Stack[-1] = (bool) 0
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7f0: Stack[-1] = (bool) 1
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f2: @ Stop()
0x7f3: Pop(0)
0x7f4: PushEmpty(cvector)
0x7f5: Call2 0x99d

0x7f6: Pop(0)
0x7f7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x7f8: Return(); Pop(8)

0x7f9: @ Stop()
0x7fa: Pop(0)
0x7fb: Push((int) 120)
0x7fc: @ KillTimer(Stack[-1])
0x7fd: Pop(1)
0x7fe: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x7ff: Return(); Pop(0)

0x800: PushEmpty()
0x801: PushEmpty()
0x802: Call2 0x7f9

0x803: Pop(0)
0x804: PushEmpty(object)
0x805: Stack[-2] = Stack[-1]
0x806: Call2 0xd62

0x807: Pop(1)
0x808: Return(); Pop(0)

0x809: PushEmpty(cvector, cvector, cvector, cvector)
0x80a: @ GetDirection(Stack[-2])
0x80b: Pop(0)
0x80c: PushEmpty(cvector, object)
0x80d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x80e: Call2 0x9a2

0x80f: Stack[-2] = Stack[-3]
0x810: Pop(2)
0x811: PushEmpty(float, cvector, cvector)
0x812: Stack[-5] = Stack[-2]
0x813: Stack[-4] = Stack[-1]
0x814: Call2 0xb44

0x815: Pop(2)
0x816: Push((float)-0.3420201241970062)
0x817: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x818: Return(); Pop(4)

0x819: PushEmpty()
0x81a: Call2 0x8bb

0x81b: Pop(0)
0x81c: PushEmpty()
0x81d: Call2 0xe9c

0x81e: Pop(0)
0x81f: Return(); Pop(0)

0x820: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x821: @ GetPosition(Stack[-6])
0x822: Pop(0)
0x823: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0x824: Pop(0)
0x825: @ GetDirection(Stack[-4])
0x826: Pop(0)
0x827: PushEmpty(cvector, cvector)
0x828: PushEmpty(cvector, cvector)
0x829: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x82a: Call2 0xb34

0x82b: Pop(1)
0x82c: Push((float)0.75)
0x82d: Pop(1); Push(Stack[-8] * Stack[-1]);
0x82e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x82f: Call2 0xb34

0x830: Stack[-2] = Stack[-5]
0x831: Pop(2)
0x832: Push((int) 32)
0x833: Push((float)7000.0)
0x834: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x835: Pop(2)
0x836: Push((int) 100)
0x837: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x838: Push((int) 0)
0x839: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x83a: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x83b: Stack[-1] = (int) 0
0x83c: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x83d: Return(); Pop(12)

0x83e: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x83f: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x840: PushEmpty(cvector, float)
0x841: Stack[-1] = (float) 1.7453293800354004
0x842: Call2 0x820

0x843: Stack[-2] = Stack[-7]
0x844: Pop(2)
0x845: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x846: Push((float)2500.0)
0x847: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x848: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x849: PushEmpty(cvector, float)
0x84a: Stack[-1] = (float) 2.6179938316345215
0x84b: Call2 0x820

0x84c: Stack[-2] = Stack[-7]
0x84d: Pop(2)
0x84e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x84f: Push((float)2500.0)
0x850: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x851: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x852: Push("Can't retreat, distance: ") // @poff=392
0x853: Pop(0); Push(Sqrt(Stack[-5]))
0x854: Pop(2); Push(Stack[-2] + Stack[-1]);
0x855: @ Trace(Stack[-1])
0x856: Pop(1)
0x857: Push((float)0.5)
0x858: @ Sleep(Stack[-1])
0x859: Pop(1)
0x85a: Return(); Pop(10)

0x85b: Push(CvectorIndex(Stack[-5], 0))
0x85c: Push(CvectorIndex(Stack[-6], 2))
0x85d: @ Rotate(Stack[-2], Stack[-1])
0x85e: Pop(2)
0x85f: PushEmpty(cvector)
0x860: Call2 0x99d

0x861: Pop(0)
0x862: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x863: Push((int) 120)
0x864: Push((float)0.5)
0x865: @ SetTimer(Stack[-2], Stack[-1])
0x866: Pop(2)
0x867: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x868: Push((int) 1)
0x869: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x86a: Pop(1)
0x86b: Push(Stack[-3])
0x86c: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x86d: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x86e: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x86f: GOTO 0x886

0x870: GOTO 0x884

0x871: PushEmpty(cvector, float)
0x872: Stack[-1] = (float) 2.6179938316345215
0x873: Call2 0x820

0x874: Stack[-2] = Stack[-4]
0x875: Pop(2)
0x876: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x877: Push((float)2500.0)
0x878: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x879: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x87a: PushEmpty(cvector)
0x87b: Call2 0x99d

0x87c: Pop(0)
0x87d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x87e: Push((int) 120)
0x87f: Push((float)0.5)
0x880: @ SetTimer(Stack[-2], Stack[-1])
0x881: Pop(2)
0x882: GOTO 0x884

0x883: GOTO 0x886

0x884: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x885: IF (Stack[-1] == 1) GOTO 0x868; Pop(1)

0x886: Return(); Pop(10)

0x887: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x888: Push((int) 120)
0x889: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x88a: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x88b: Return(); Pop(8)

0x88c: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x88d: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x88e: @ Stop()
0x88f: Pop(0)
0x890: Push((int) 1)
0x891: @ KillTimer(Stack[-1])
0x892: Pop(1)
0x893: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x894: GOTO 0x8ba

0x895: @ GetDirection(Stack[-4])
0x896: Pop(0)
0x897: Push((float)7000.0)
0x898: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x899: Pop(1)
0x89a: PushEmpty(cvector, float)
0x89b: Stack[-1] = (float) 1.7453293800354004
0x89c: Call2 0x820

0x89d: Stack[-2] = Stack[-4]
0x89e: Pop(2)
0x89f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x8a0: PushEmpty(bool)
0x8a1: Stack[-1] = (bool) 0
0x8a2: Push((float)2500.0)
0x8a3: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x8a4: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8a5: PushEmpty(bool)
0x8a6: Stack[-1] = (bool) 1
0x8a7: Pop(0); Push(Stack[-5] * Stack[-5]);
0x8a8: Push((float)2.25)
0x8a9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8aa: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x8ab: IF (Stack[-1] == 1) GOTO 0x8b1; Pop(1)

0x8ac: PushEmpty(bool)
0x8ad: Call2 0x8cb

0x8ae: Pop(0)
0x8af: IF (Stack[-1] == 1) GOTO 0x8b1; Pop(1)

0x8b0: Stack[-1] = (bool) 0
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b2: Stack[-1] = (bool) 1
0x8b3: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8b4: @ Stop()
0x8b5: Pop(0)
0x8b6: PushEmpty(cvector)
0x8b7: Call2 0x99d

0x8b8: Pop(0)
0x8b9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x8ba: Return(); Pop(8)

0x8bb: @ Stop()
0x8bc: Pop(0)
0x8bd: Push((int) 120)
0x8be: @ KillTimer(Stack[-1])
0x8bf: Pop(1)
0x8c0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8c1: Return(); Pop(0)

0x8c2: PushEmpty()
0x8c3: PushEmpty()
0x8c4: Call2 0x8bb

0x8c5: Pop(0)
0x8c6: PushEmpty(object)
0x8c7: Stack[-2] = Stack[-1]
0x8c8: Call2 0xd62

0x8c9: Pop(1)
0x8ca: Return(); Pop(0)

0x8cb: PushEmpty(cvector, cvector, cvector, cvector)
0x8cc: @ GetDirection(Stack[-2])
0x8cd: Pop(0)
0x8ce: PushEmpty(cvector, object)
0x8cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8d0: Call2 0x9a2

0x8d1: Stack[-2] = Stack[-3]
0x8d2: Pop(2)
0x8d3: PushEmpty(float, cvector, cvector)
0x8d4: Stack[-5] = Stack[-2]
0x8d5: Stack[-4] = Stack[-1]
0x8d6: Call2 0xb44

0x8d7: Pop(2)
0x8d8: Push((float)-0.3420201241970062)
0x8d9: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x8da: Return(); Pop(4)

0x8db: PushEmpty()
0x8dc: Call2 0x97d

0x8dd: Pop(0)
0x8de: PushEmpty()
0x8df: Call2 0xe9c

0x8e0: Pop(0)
0x8e1: Return(); Pop(0)

0x8e2: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x8e3: @ GetPosition(Stack[-6])
0x8e4: Pop(0)
0x8e5: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0x8e6: Pop(0)
0x8e7: @ GetDirection(Stack[-4])
0x8e8: Pop(0)
0x8e9: PushEmpty(cvector, cvector)
0x8ea: PushEmpty(cvector, cvector)
0x8eb: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x8ec: Call2 0xb34

0x8ed: Pop(1)
0x8ee: Push((float)0.75)
0x8ef: Pop(1); Push(Stack[-8] * Stack[-1]);
0x8f0: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x8f1: Call2 0xb34

0x8f2: Stack[-2] = Stack[-5]
0x8f3: Pop(2)
0x8f4: Push((int) 32)
0x8f5: Push((float)7000.0)
0x8f6: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x8f7: Pop(2)
0x8f8: Push((int) 100)
0x8f9: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x8fa: Push((int) 0)
0x8fb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8fc: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8fd: Stack[-1] = (int) 0
0x8fe: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x8ff: Return(); Pop(12)

0x900: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x901: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x902: PushEmpty(cvector, float)
0x903: Stack[-1] = (float) 1.7453293800354004
0x904: Call2 0x8e2

0x905: Stack[-2] = Stack[-7]
0x906: Pop(2)
0x907: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x908: Push((float)2500.0)
0x909: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x91d; Pop(1)

0x90b: PushEmpty(cvector, float)
0x90c: Stack[-1] = (float) 2.6179938316345215
0x90d: Call2 0x8e2

0x90e: Stack[-2] = Stack[-7]
0x90f: Pop(2)
0x910: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x911: Push((float)2500.0)
0x912: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x913: IF (Stack[-1] == 0) GOTO 0x91d; Pop(1)

0x914: Push("Can't retreat, distance: ") // @poff=392
0x915: Pop(0); Push(Sqrt(Stack[-5]))
0x916: Pop(2); Push(Stack[-2] + Stack[-1]);
0x917: @ Trace(Stack[-1])
0x918: Pop(1)
0x919: Push((float)0.5)
0x91a: @ Sleep(Stack[-1])
0x91b: Pop(1)
0x91c: Return(); Pop(10)

0x91d: Push(CvectorIndex(Stack[-5], 0))
0x91e: Push(CvectorIndex(Stack[-6], 2))
0x91f: @ Rotate(Stack[-2], Stack[-1])
0x920: Pop(2)
0x921: PushEmpty(cvector)
0x922: Call2 0x99d

0x923: Pop(0)
0x924: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x925: Push((int) 120)
0x926: Push((float)0.5)
0x927: @ SetTimer(Stack[-2], Stack[-1])
0x928: Pop(2)
0x929: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x92a: Push((int) 1)
0x92b: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x92c: Pop(1)
0x92d: Push(Stack[-3])
0x92e: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x92f: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x930: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x931: GOTO 0x948

0x932: GOTO 0x946

0x933: PushEmpty(cvector, float)
0x934: Stack[-1] = (float) 2.6179938316345215
0x935: Call2 0x8e2

0x936: Stack[-2] = Stack[-4]
0x937: Pop(2)
0x938: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x939: Push((float)2500.0)
0x93a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x93b: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x93c: PushEmpty(cvector)
0x93d: Call2 0x99d

0x93e: Pop(0)
0x93f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x940: Push((int) 120)
0x941: Push((float)0.5)
0x942: @ SetTimer(Stack[-2], Stack[-1])
0x943: Pop(2)
0x944: GOTO 0x946

0x945: GOTO 0x948

0x946: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x947: IF (Stack[-1] == 1) GOTO 0x92a; Pop(1)

0x948: Return(); Pop(10)

0x949: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x94a: Push((int) 120)
0x94b: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x94c: IF (Stack[-1] == 0) GOTO 0x94e; Pop(1)

0x94d: Return(); Pop(8)

0x94e: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x94f: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x950: @ Stop()
0x951: Pop(0)
0x952: Push((int) 1)
0x953: @ KillTimer(Stack[-1])
0x954: Pop(1)
0x955: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x956: GOTO 0x97c

0x957: @ GetDirection(Stack[-4])
0x958: Pop(0)
0x959: Push((float)7000.0)
0x95a: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x95b: Pop(1)
0x95c: PushEmpty(cvector, float)
0x95d: Stack[-1] = (float) 1.7453293800354004
0x95e: Call2 0x8e2

0x95f: Stack[-2] = Stack[-4]
0x960: Pop(2)
0x961: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x962: PushEmpty(bool)
0x963: Stack[-1] = (bool) 0
0x964: Push((float)2500.0)
0x965: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x966: IF (Stack[-1] == 0) GOTO 0x975; Pop(1)

0x967: PushEmpty(bool)
0x968: Stack[-1] = (bool) 1
0x969: Pop(0); Push(Stack[-5] * Stack[-5]);
0x96a: Push((float)2.25)
0x96b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x96c: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x96d: IF (Stack[-1] == 1) GOTO 0x973; Pop(1)

0x96e: PushEmpty(bool)
0x96f: Call2 0x98d

0x970: Pop(0)
0x971: IF (Stack[-1] == 1) GOTO 0x973; Pop(1)

0x972: Stack[-1] = (bool) 0
0x973: IF (Stack[-1] == 0) GOTO 0x975; Pop(1)

0x974: Stack[-1] = (bool) 1
0x975: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x976: @ Stop()
0x977: Pop(0)
0x978: PushEmpty(cvector)
0x979: Call2 0x99d

0x97a: Pop(0)
0x97b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x97c: Return(); Pop(8)

0x97d: @ Stop()
0x97e: Pop(0)
0x97f: Push((int) 120)
0x980: @ KillTimer(Stack[-1])
0x981: Pop(1)
0x982: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x983: Return(); Pop(0)

0x984: PushEmpty()
0x985: PushEmpty()
0x986: Call2 0x97d

0x987: Pop(0)
0x988: PushEmpty(object)
0x989: Stack[-2] = Stack[-1]
0x98a: Call2 0xd62

0x98b: Pop(1)
0x98c: Return(); Pop(0)

0x98d: PushEmpty(cvector, cvector, cvector, cvector)
0x98e: @ GetDirection(Stack[-2])
0x98f: Pop(0)
0x990: PushEmpty(cvector, object)
0x991: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x992: Call2 0x9a2

0x993: Stack[-2] = Stack[-3]
0x994: Pop(2)
0x995: PushEmpty(float, cvector, cvector)
0x996: Stack[-5] = Stack[-2]
0x997: Stack[-4] = Stack[-1]
0x998: Call2 0xb44

0x999: Pop(2)
0x99a: Push((float)-0.3420201241970062)
0x99b: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x99c: Return(); Pop(4)

0x99d: PushEmpty(cvector, cvector)
0x99e: @ GetPosition(Stack[-1])
0x99f: Pop(0)
0x9a0: Stack[-1] = Stack[-3]
0x9a1: Return(); Pop(2)

0x9a2: PushEmpty(cvector, cvector, cvector, cvector)
0x9a3: @ GetPosition(Stack[-2])
0x9a4: Pop(0)
0x9a5: @@ GetPosition(Stack[-1]); Obj=5 // @poff=166
0x9a6: Pop(0)
0x9a7: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x9a8: Return(); Pop(4)

0x9a9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9aa: @ GetPosition(Stack[-3])
0x9ab: Pop(0)
0x9ac: @@ GetPosition(Stack[-2]); Obj=7 // @poff=166
0x9ad: Pop(0)
0x9ae: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x9af: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x9b0: Return(); Pop(6)

0x9b1: PushEmpty(bool, bool)
0x9b2: @ IsPlayerActor(Stack[-3], Stack[-1])
0x9b3: Pop(0)
0x9b4: Stack[-1] = Stack[-4]
0x9b5: Return(); Pop(2)

0x9b6: PushEmpty(bool, bool)
0x9b7: Push("HasProperty") // @poff=444
0x9b8: Push((int) 2)
0x9b9: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x9ba: Pop(1); Push((bool) Stack[-1] == 0)
0x9bb: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9bc: Stack[-5] = (bool) 0
0x9bd: Return(); Pop(2)

0x9be: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=468
0x9bf: Pop(0)
0x9c0: Stack[-1] = Stack[-5]
0x9c1: Return(); Pop(2)

0x9c2: PushEmpty(bool, bool)
0x9c3: @@ IsDead(Stack[-1]); Obj=3 // @poff=480
0x9c4: Pop(0)
0x9c5: Stack[-1] = Stack[-4]
0x9c6: Return(); Pop(2)

0x9c7: PushEmpty(object, object, object, object)
0x9c8: Pop(0); PushNull((bool) Stack[-5] == 0)
0x9c9: IF (Stack[-1] == 0) GOTO 0x9cc; Pop(1)

0x9ca: Stack[-6] = (bool) 0
0x9cb: Return(); Pop(4)

0x9cc: PushEmpty(bool)
0x9cd: Stack[-1] = (bool) 0
0x9ce: Push("IsDead") // @poff=487
0x9cf: Push((int) 1)
0x9d0: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x9d1: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d2: PushEmpty(bool, object)
0x9d3: Stack[-8] = Stack[-1]
0x9d4: Call2 0x9c2

0x9d5: Pop(1)
0x9d6: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d7: Stack[-1] = (bool) 1
0x9d8: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9d9: Stack[-6] = (bool) 0
0x9da: Return(); Pop(4)

0x9db: @ GetScene(Stack[-2])
0x9dc: Pop(0)
0x9dd: Pop(0); PushNull((bool) Stack[-2] == 0)
0x9de: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9df: Stack[-6] = (bool) 0
0x9e0: Return(); Pop(4)

0x9e1: @@ GetScene(Stack[-1]); Obj=5 // @poff=501
0x9e2: Pop(0)
0x9e3: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x9e4: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e5: Stack[-6] = (bool) 0
0x9e6: Return(); Pop(4)

0x9e7: Stack[-6] = (bool) 1
0x9e8: Return(); Pop(4)

0x9e9: Stack[-1] = 0
0x9ea: Stack[-2] = 0
0x9eb: PushEmpty(int, int)
0x9ec: PushEmpty(bool, object)
0x9ed: Stack[-5] = Stack[-1]
0x9ee: Call2 0x9c7

0x9ef: Pop(1)
0x9f0: Pop(1); Push((bool) Stack[-1] == 0)
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9f2: Stack[-4] = (bool) 0
0x9f3: Return(); Pop(2)

0x9f4: PushEmpty(bool, object, string)
0x9f5: Stack[-6] = Stack[-2]
0x9f6: Stack[-1] = "noaccess" // @poff=510
0x9f7: Call2 0x9b6

0x9f8: Pop(2)
0x9f9: Pop(1); Push((bool) Stack[-1] == 0)
0x9fa: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9fb: Stack[-4] = (bool) 1
0x9fc: Return(); Pop(2)

0x9fd: Push("noaccess") // @poff=510
0x9fe: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=528
0x9ff: Pop(1)
0xa00: Push((int) 0)
0xa01: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xa02: Return(); Pop(2)

0xa03: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xa04: Pop(0); PushNull((bool) Stack[-15] == 0)
0xa05: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa06: Return(); Pop(14)

0xa07: @ IsDead(Stack[-7])
0xa08: Pop(0)
0xa09: Push(Stack[-7])
0xa0a: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa0b: Return(); Pop(14)

0xa0c: @ GetSecondaryAnimationType(Stack[-6])
0xa0d: Pop(0)
0xa0e: Push((int) 0)
0xa0f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xa10: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa11: Return(); Pop(14)

0xa12: @@ GetPosition(Stack[-5]); Obj=15 // @poff=166
0xa13: Pop(0)
0xa14: @ GetPosition(Stack[-4])
0xa15: Pop(0)
0xa16: @ GetDirection(Stack[-3])
0xa17: Pop(0)
0xa18: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xa19: Push(CvectorIndex(Stack[-2], 0))
0xa1a: Push(CvectorIndex(Stack[-4], 0))
0xa1b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa1c: Push(CvectorIndex(Stack[-3], 2))
0xa1d: Push(CvectorIndex(Stack[-5], 2))
0xa1e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa1f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa20: Push((int) 0)
0xa21: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa22: IF (Stack[-1] == 0) GOTO 0xa25; Pop(1)

0xa23: Stack[-1] = "fhit" // @poff=540
0xa24: GOTO 0xa26

0xa25: Stack[-1] = "bhit" // @poff=550
0xa26: Push("hit_react") // @poff=560
0xa27: Push("1") // @poff=580
0xa28: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa29: Push("2") // @poff=584
0xa2a: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa2b: Push((int) -10)
0xa2c: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa2d: Pop(4)
0xa2e: Return(); Pop(14)

0xa2f: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xa30: PushEmpty(bool)
0xa31: Stack[-1] = (bool) 0
0xa32: PushEmpty(bool)
0xa33: Stack[-1] = (bool) 0
0xa34: Push(Stack[-23])
0xa35: IF (Stack[-1] == 0) GOTO 0xa3a; Pop(1)

0xa36: Push((int) 4)
0xa37: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xa38: IF (Stack[-1] == 0) GOTO 0xa3a; Pop(1)

0xa39: Stack[-1] = (bool) 1
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3f; Pop(1)

0xa3b: Push((int) 5)
0xa3c: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xa3d: IF (Stack[-1] == 0) GOTO 0xa3f; Pop(1)

0xa3e: Stack[-1] = (bool) 1
0xa3f: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa40: PushEmpty(cvector, cvector)
0xa41: PushEmpty(cvector, object)
0xa42: Stack[-25] = Stack[-1]
0xa43: Call2 0x9a2

0xa44: Stack[-2] = Stack[-3]
0xa45: Pop(2)
0xa46: Call2 0xb34

0xa47: Stack[-2] = Stack[-11]
0xa48: Pop(2)
0xa49: @ CreateVectorVector(Stack[-8])
0xa4a: Pop(0)
0xa4b: Stack[-7] = (int) 1
0xa4c: Push("hit") // @poff=542
0xa4d: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa4e: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xa4f: Pop(1)
0xa50: Pop(0); Push((bool) Stack[-6] == 0)
0xa51: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa52: GOTO 0xa5c

0xa53: Pop(0); Push(Stack[-4] | Stack[-9]);
0xa54: Push((float)0.7071067690849304)
0xa55: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa56: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa57: @@ add(Stack[-5]); Obj=8 // @poff=588
0xa58: Pop(0)
0xa59: Push((int) 1)
0xa5a: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xa5b: GOTO 0xa4c

0xa5c: @@ size(Stack[-3]); Obj=8 // @poff=592
0xa5d: Pop(0)
0xa5e: Push(Stack[-3])
0xa5f: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa60: @ irand(Stack[-2], Stack[-3])
0xa61: Pop(0)
0xa62: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=597
0xa63: Pop(0)
0xa64: PushEmpty(object, int, float, cvector, cvector)
0xa65: Stack[-26] = Stack[-5]
0xa66: Stack[-25] = Stack[-4]
0xa67: Stack[-24] = Stack[-3]
0xa68: Stack[-6] = Stack[-2]
0xa69: Stack[-1] = -Stack[-14]; Pop(0);
0xa6a: Call2 0xa73

0xa6b: Pop(5)
0xa6c: Return(); Pop(18)

0xa6d: Stack[-8] = 0
0xa6e: PushEmpty(object)
0xa6f: Stack[-22] = Stack[-1]
0xa70: Call2 0xa03

0xa71: Pop(1)
0xa72: Return(); Pop(18)

0xa73: PushEmpty(object, object, object, object)
0xa74: @ GetScene(Stack[-2])
0xa75: Pop(0)
0xa76: Push("scripted") // @poff=601
0xa77: Push("blood_dir.xml") // @poff=619
0xa78: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xa79: Pop(2)
0xa7a: PushEmpty(object)
0xa7b: Stack[-10] = Stack[-1]
0xa7c: Call2 0xa03

0xa7d: Pop(1)
0xa7e: Return(); Pop(4)

0xa7f: Stack[-1] = 0
0xa80: Stack[-2] = 0
0xa81: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xa82: @@ GetPosition(Stack[-3]); Obj=7 // @poff=166
0xa83: Pop(0)
0xa84: @ GetPosition(Stack[-2])
0xa85: Pop(0)
0xa86: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xa87: Push(CvectorIndex(Stack[-1], 0))
0xa88: Push(CvectorIndex(Stack[-2], 2))
0xa89: @ RotateAsync(Stack[-2], Stack[-1])
0xa8a: Pop(2)
0xa8b: Return(); Pop(6)

0xa8c: PushEmpty(bool, bool)
0xa8d: @ IsLoaded(Stack[-1])
0xa8e: Pop(0)
0xa8f: Stack[-1] = Stack[-3]
0xa90: Return(); Pop(2)

0xa91: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa92: @@ GetPosition(Stack[-8]); Obj=20 // @poff=166
0xa93: Pop(0)
0xa94: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=302
0xa95: Pop(0)
0xa96: Push(CvectorIndex(Stack[-8], 1))
0xa97: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa98: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa99: @ GetPosition(Stack[-7])
0xa9a: Pop(0)
0xa9b: @ GetEyesHeight(Stack[-9])
0xa9c: Pop(0)
0xa9d: Push(CvectorIndex(Stack[-7], 1))
0xa9e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa9f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xaa0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xaa1: Push(CvectorIndex(Stack[-6], 1))
0xaa2: Stack[-1] = (int) 0
0xaa3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xaa4: Pop(0); Push(Stack[-6] | Stack[-6]);
0xaa5: Pop(1); Push(Sqrt(Stack[-1]))
0xaa6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xaa7: Stack[-5] = -Stack[-6]; Pop(0);
0xaa8: Pop(0); Push(Stack[-6] * Stack[-19]);
0xaa9: PushEmpty(cvector, cvector)
0xaaa: Push([0.0, 1.0, 0.0])
0xaab: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xaac: Call2 0xb34

0xaad: Pop(1)
0xaae: Push((int) 25)
0xaaf: Pop(2); Push(Stack[-2] * Stack[-1]);
0xab0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xab1: Push([0.0, 10.0, 0.0])
0xab2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xab3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xab4: @ IsOverrideActive(Stack[-2])
0xab5: Pop(0)
0xab6: Push(Stack[-2])
0xab7: IF (Stack[-1] == 0) GOTO 0xaba; Pop(1)

0xab8: Stack[-21] = (bool) 0
0xab9: Return(); Pop(18)

0xaba: @ StopWorld()
0xabb: Pop(0)
0xabc: @ CameraTransit(Stack[-3], Stack[-5])
0xabd: Pop(0)
0xabe: Push(CvectorIndex(Stack[-4], 0))
0xabf: Push(CvectorIndex(Stack[-5], 2))
0xac0: @ Rotate(Stack[-2], Stack[-1])
0xac1: Pop(2)
0xac2: PushEmpty(bool)
0xac3: Call2 0xf8d

0xac4: Pop(0)
0xac5: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xac6: GOTO 0xacf

0xac7: Push("head") // @poff=316
0xac8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xac9: Pop(1)
0xaca: Push(Stack[-1])
0xacb: IF (Stack[-1] == 0) GOTO 0xacf; Pop(1)

0xacc: Push("head") // @poff=316
0xacd: @ LookAsyncCamera(Stack[-1])
0xace: Pop(1)
0xacf: @ CameraWaitForPlayFinish()
0xad0: Pop(0)
0xad1: @ ResumeWorld()
0xad2: Pop(0)
0xad3: Stack[-21] = (bool) 1
0xad4: Return(); Pop(18)

0xad5: PushEmpty(bool, bool)
0xad6: @ CameraSwitchToNormal()
0xad7: Pop(0)
0xad8: PushEmpty(bool)
0xad9: Call2 0xf8d

0xada: Pop(0)
0xadb: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xadc: GOTO 0xae5

0xadd: Push("head") // @poff=316
0xade: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xadf: Pop(1)
0xae0: Push(Stack[-1])
0xae1: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xae2: Push("head") // @poff=316
0xae3: @ UnlookAsync(Stack[-1])
0xae4: Pop(1)
0xae5: Return(); Pop(2)

0xae6: PushEmpty(float, float, float, float)
0xae7: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xae8: Pop(0)
0xae9: Push((bool) 0)
0xaea: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xaeb: Pop(1)
0xaec: Return(); Pop(4)

0xaed: PushEmpty(float, float, float, float)
0xaee: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0xaef: Pop(0)
0xaf0: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0xaf1: Pop(0)
0xaf2: Return(); Pop(4)

0xaf3: PushEmpty(float, cvector, float, cvector)
0xaf4: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=302
0xaf5: Pop(0)
0xaf6: Stack[-1] = [0.0, 0.0, 0.0]
0xaf7: Push(CvectorIndex(Stack[-1], 1))
0xaf8: Stack[-3] = Stack[-1]
0xaf9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xafa: Push("head") // @poff=316
0xafb: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xafc: Pop(1)
0xafd: Return(); Pop(4)

0xafe: PushEmpty(bool)
0xaff: Call2 0xf8d

0xb00: Pop(0)
0xb01: IF (Stack[-1] == 0) GOTO 0xb04; Pop(1)

0xb02: @ lshStopSpeech()
0xb03: Pop(0)
0xb04: Return(); Pop(0)

0xb05: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xb06: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xb07: Pop(0)
0xb08: Pop(0); Push((bool) Stack[-8] == 0)
0xb09: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb0a: Stack[-7] = (int) 0
0xb0b: Push((int) 1)
0xb0c: Pop(1); Push(Stack[-8] + Stack[-1]);
0xb0d: Pop(1); Push(Stack[-18] + Stack[-1]);
0xb0e: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xb0f: Pop(1)
0xb10: Pop(0); Push((bool) Stack[-6] == 0)
0xb11: IF (Stack[-1] == 0) GOTO 0xb13; Pop(1)

0xb12: GOTO 0xb16

0xb13: Push((int) 1)
0xb14: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xb15: GOTO 0xb0b

0xb16: Pop(0); Push((bool) Stack[-7] == 0)
0xb17: IF (Stack[-1] == 0) GOTO 0xb19; Pop(1)

0xb18: Return(); Pop(16)

0xb19: @ irand(Stack[-5], Stack[-7])
0xb1a: Pop(0)
0xb1b: Push((int) 1)
0xb1c: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb1d: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xb1e: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xb1f: Pop(0)
0xb20: Push(Stack[-4])
0xb21: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb22: @ GetEyesHeight(Stack[-3])
0xb23: Pop(0)
0xb24: @ GetDirection(Stack[-2])
0xb25: Pop(0)
0xb26: Push((int) 50)
0xb27: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xb28: Push(CvectorIndex(Stack[-1], 1))
0xb29: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xb2a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xb2b: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xb2c: Pop(0)
0xb2d: Return(); Pop(16)

0xb2e: PushEmpty(object, object)
0xb2f: @ self(Stack[-1])
0xb30: Pop(0)
0xb31: Stack[-1] = Stack[-3]
0xb32: Return(); Pop(2)

0xb33: Stack[-1] = 0
0xb34: PushEmpty(float, float)
0xb35: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb36: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb37: Push((float)9.999999974752427e-07)
0xb38: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb39: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb3a: Stack[-4] = [0.0, 0.0, 0.0]
0xb3b: Return(); Pop(2)

0xb3c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb3d: Return(); Pop(2)

0xb3e: PushEmpty(object, object)
0xb3f: @ CreateObjectVector(Stack[-1])
0xb40: Pop(0)
0xb41: Stack[-1] = Stack[-3]
0xb42: Return(); Pop(2)

0xb43: Stack[-1] = 0
0xb44: PushEmpty()
0xb45: Pop(0); Push(Stack[-2] | Stack[-1]);
0xb46: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb47: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb48: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb49: Pop(1); Push(Sqrt(Stack[-1]))
0xb4a: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xb4b: Return(); Pop(0)

0xb4c: PushEmpty()
0xb4d: Push(CvectorIndex(Stack[-2], 0))
0xb4e: Push(CvectorIndex(Stack[-2], 0))
0xb4f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb50: Push(CvectorIndex(Stack[-3], 2))
0xb51: Push(CvectorIndex(Stack[-3], 2))
0xb52: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb53: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb54: Return(); Pop(0)

0xb55: PushEmpty()
0xb56: Push(CvectorIndex(Stack[-1], 0))
0xb57: Push(CvectorIndex(Stack[-2], 0))
0xb58: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb59: Push(CvectorIndex(Stack[-2], 2))
0xb5a: Push(CvectorIndex(Stack[-3], 2))
0xb5b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb5c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb5d: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xb5e: Return(); Pop(0)

0xb5f: PushEmpty()
0xb60: PushEmpty(float, cvector, cvector)
0xb61: Stack[-5] = Stack[-2]
0xb62: Stack[-4] = Stack[-1]
0xb63: Call2 0xb4c

0xb64: Pop(2)
0xb65: PushEmpty(float, cvector)
0xb66: Stack[-5] = Stack[-1]
0xb67: Call2 0xb55

0xb68: Pop(1)
0xb69: PushEmpty(float, cvector)
0xb6a: Stack[-5] = Stack[-1]
0xb6b: Call2 0xb55

0xb6c: Pop(1)
0xb6d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb6e: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xb6f: Return(); Pop(0)

0xb70: PushEmpty(int, int)
0xb71: @ GetVariable(Stack[-3], Stack[-1])
0xb72: Pop(0)
0xb73: Stack[-1] = Stack[-4]
0xb74: Return(); Pop(2)

0xb75: PushEmpty(float, float)
0xb76: @ GetGameTime(Stack[-1])
0xb77: Pop(0)
0xb78: Push((int) 1)
0xb79: PushEmpty(int)
0xb7a: Push((int) 24)
0xb7b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb7c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb7d: Return(); Pop(2)

0xb7e: PushEmpty(float, float)
0xb7f: @ GetGameTime(Stack[-1])
0xb80: Pop(0)
0xb81: PushEmpty(int)
0xb82: Stack[-2] = Stack[-1]
0xb83: Push((int) 24)
0xb84: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xb85: Return(); Pop(2)

0xb86: PushEmpty()
0xb87: Push((int) 100)
0xb88: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=647
0xb89: Pop(1)
0xb8a: Return(); Pop(0)

0xb8b: PushEmpty()
0xb8c: PushEmpty(int, string)
0xb8d: Stack[-1] = "branch" // @poff=662
0xb8e: Call2 0xb70

0xb8f: Pop(1)
0xb90: Push((int) 0)
0xb91: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb92: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb93: Stack[-2] = (bool) 1
0xb94: Return(); Pop(0)

0xb95: Stack[-2] = (bool) 0
0xb96: Return(); Pop(0)

0xb97: PushEmpty()
0xb98: PushEmpty(int, string)
0xb99: Stack[-1] = "branch" // @poff=662
0xb9a: Call2 0xb70

0xb9b: Pop(1)
0xb9c: Push((int) 1)
0xb9d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb9e: IF (Stack[-1] == 0) GOTO 0xba1; Pop(1)

0xb9f: Stack[-2] = (bool) 1
0xba0: Return(); Pop(0)

0xba1: Stack[-2] = (bool) 0
0xba2: Return(); Pop(0)

0xba3: PushEmpty()
0xba4: PushEmpty(bool, object)
0xba5: Stack[-3] = Stack[-1]
0xba6: Call2 0xbc1

0xba7: Pop(1)
0xba8: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xba9: Stack[-2] = (bool) 1
0xbaa: Return(); Pop(0)

0xbab: Stack[-2] = (bool) 0
0xbac: Return(); Pop(0)

0xbad: PushEmpty()
0xbae: PushEmpty(bool, object)
0xbaf: Stack[-3] = Stack[-1]
0xbb0: Call2 0xbc8

0xbb1: Pop(1)
0xbb2: IF (Stack[-1] == 0) GOTO 0xbb5; Pop(1)

0xbb3: Stack[-2] = (bool) 1
0xbb4: Return(); Pop(0)

0xbb5: Stack[-2] = (bool) 0
0xbb6: Return(); Pop(0)

0xbb7: PushEmpty()
0xbb8: PushEmpty(bool, object)
0xbb9: Stack[-3] = Stack[-1]
0xbba: Call2 0xbcf

0xbbb: Pop(1)
0xbbc: IF (Stack[-1] == 0) GOTO 0xbbf; Pop(1)

0xbbd: Stack[-2] = (bool) 1
0xbbe: Return(); Pop(0)

0xbbf: Stack[-2] = (bool) 0
0xbc0: Return(); Pop(0)

0xbc1: PushEmpty()
0xbc2: PushEmpty(int)
0xbc3: Call2 0xb75

0xbc4: Pop(0)
0xbc5: Push((int) 1)
0xbc6: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xbc7: Return(); Pop(0)

0xbc8: PushEmpty()
0xbc9: PushEmpty(int)
0xbca: Call2 0xb75

0xbcb: Pop(0)
0xbcc: Push((int) 2)
0xbcd: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xbce: Return(); Pop(0)

0xbcf: PushEmpty()
0xbd0: PushEmpty(int)
0xbd1: Call2 0xb7e

0xbd2: Pop(0)
0xbd3: Push((int) 12)
0xbd4: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xbd5: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd6: Stack[-2] = (bool) 1
0xbd7: Return(); Pop(0)

0xbd8: Stack[-2] = (bool) 0
0xbd9: Return(); Pop(0)

0xbda: PushEmpty(int, int)
0xbdb: Push("branch") // @poff=662
0xbdc: @ GetVariable(Stack[-1], Stack[-2])
0xbdd: Pop(1)
0xbde: Push((int) 0)
0xbdf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe4; Pop(1)

0xbe1: Stack[-3] = (int) 1
0xbe2: Return(); Pop(2)

0xbe3: GOTO 0xbe9

0xbe4: Push((int) 1)
0xbe5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe6: IF (Stack[-1] == 0) GOTO 0xbe9; Pop(1)

0xbe7: Stack[-3] = (int) 2
0xbe8: Return(); Pop(2)

0xbe9: Stack[-3] = (int) 3
0xbea: Return(); Pop(2)

0xbeb: PushEmpty(int, int)
0xbec: Push("branch") // @poff=662
0xbed: @ GetVariable(Stack[-1], Stack[-2])
0xbee: Pop(1)
0xbef: Stack[-1] = Stack[-3]
0xbf0: Return(); Pop(2)

0xbf1: PushEmpty(int, int)
0xbf2: @@ GetItemID(Stack[-1]); Obj=3 // @poff=676
0xbf3: Pop(0)
0xbf4: Stack[-1] = Stack[-4]
0xbf5: Return(); Pop(2)

0xbf6: PushEmpty(int, int, int, string, bool, bool, int, int, int, int, string, bool, bool, int)
0xbf7: Push((int) 0)
0xbf8: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0xbf9: IF (Stack[-1] == 0) GOTO 0xc1b; Pop(1)

0xbfa: PushEmpty(int)
0xbfb: Call2 0xb75

0xbfc: Stack[-1] = Stack[-8]
0xbfd: Pop(1)
0xbfe: Stack[-6] = (int) 0
0xbff: Stack[-5] = (int) 1
0xc00: Pop(0); Push((bool) Stack[-5] <= Stack[-7])
0xc01: IF (Stack[-1] == 0) GOTO 0xc19; Pop(1)

0xc02: Stack[-4] = "Price" // @poff=686
0xc03: Push((int) 1)
0xc04: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xc05: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xc06: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0xc07: PushEmpty(int, object)
0xc08: Stack[-18] = Stack[-1]
0xc09: Call2 0xbf1

0xc0a: Pop(1)
0xc0b: @ HasInvItemProperty(Stack[-4], Stack[-1], Stack[-5])
0xc0c: Pop(1)
0xc0d: Pop(0); Push((bool) Stack[-3] == 0)
0xc0e: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc0f: GOTO 0xc16

0xc10: PushEmpty(int, object)
0xc11: Stack[-18] = Stack[-1]
0xc12: Call2 0xbf1

0xc13: Pop(1)
0xc14: @ GetInvItemProperty(Stack[-7], Stack[-1], Stack[-5])
0xc15: Pop(1)
0xc16: Push((int) 1)
0xc17: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xc18: GOTO 0xc00

0xc19: Stack[-6] = Stack[-17]
0xc1a: Return(); Pop(14)

0xc1b: PushEmpty(int, object)
0xc1c: Stack[-18] = Stack[-1]
0xc1d: Call2 0xbf1

0xc1e: Pop(1)
0xc1f: Push("BarterPrice") // @poff=698
0xc20: Pop(1); Push(Stack[-1] + Stack[-17]);
0xc21: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0xc22: Pop(2)
0xc23: Pop(0); Push((bool) Stack[-2] == 0)
0xc24: IF (Stack[-1] == 0) GOTO 0xc27; Pop(1)

0xc25: Stack[-17] = (int) 0
0xc26: Return(); Pop(14)

0xc27: PushEmpty(int, object)
0xc28: Stack[-18] = Stack[-1]
0xc29: Call2 0xbf1

0xc2a: Pop(1)
0xc2b: Push("BarterPrice") // @poff=698
0xc2c: Pop(1); Push(Stack[-1] + Stack[-17]);
0xc2d: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0xc2e: Pop(2)
0xc2f: Push((int) 0)
0xc30: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc31: IF (Stack[-1] == 0) GOTO 0xc34; Pop(1)

0xc32: Stack[-1] = Stack[-17]
0xc33: Return(); Pop(14)

0xc34: Stack[-17] = -Stack[-1]; Pop(0);
0xc35: Return(); Pop(14)

0xc36: PushEmpty(object, float, object, float)
0xc37: Push("player") // @poff=722
0xc38: @ FindActor(Stack[-3], Stack[-1])
0xc39: Pop(1)
0xc3a: Pop(0); Push((bool) Stack[-2] == 0)
0xc3b: IF (Stack[-1] == 0) GOTO 0xc3e; Pop(1)

0xc3c: Stack[-5] = (int) 0
0xc3d: Return(); Pop(4)

0xc3e: Push("reputation") // @poff=736
0xc3f: @@ GetProperty(Stack[-1], Stack[-2]); Obj=3 // @poff=528
0xc40: Pop(1)
0xc41: Stack[-1] = Stack[-5]
0xc42: Return(); Pop(4)

0xc43: Stack[-2] = 0
0xc44: PushEmpty()
0xc45: PushEmpty(int)
0xc46: Call2 0xbeb

0xc47: Pop(0)
0xc48: Push((int) 1)
0xc49: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc4a: IF (Stack[-1] == 0) GOTO 0xc4e; Pop(1)

0xc4b: @ WorkWithCorpse(Stack[-1])
0xc4c: Pop(0)
0xc4d: GOTO 0xc50

0xc4e: @ Barter(Stack[-1])
0xc4f: Pop(0)
0xc50: Return(); Pop(0)

0xc51: PushEmpty(int, bool, int, bool)
0xc52: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xc53: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc54: Push("GenerateMoney: iMin > iMax") // @poff=758
0xc55: @ Trace(Stack[-1])
0xc56: Pop(1)
0xc57: Return(); Pop(4)

0xc58: Stack[-2] = (int) 0
0xc59: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xc5a: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc5b: Pop(0); Push(Stack[-5] - Stack[-6]);
0xc5c: @ irand(Stack[-3], Stack[-1])
0xc5d: Pop(1)
0xc5e: GOTO 0xc63

0xc5f: Push((int) 0)
0xc60: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xc61: IF (Stack[-1] == 0) GOTO 0xc63; Pop(1)

0xc62: Return(); Pop(4)

0xc63: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xc64: Push((int) 0)
0xc65: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc66: IF (Stack[-1] == 0) GOTO 0xc68; Pop(1)

0xc67: Return(); Pop(4)

0xc68: PushEmpty(int, string)
0xc69: Stack[-1] = "Money" // @poff=812
0xc6a: Call2 0xd48

0xc6b: Pop(1)
0xc6c: Push((int) 0)
0xc6d: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xc6e: Pop(2)
0xc6f: Return(); Pop(4)

0xc70: PushEmpty(object, int, bool, object, int, bool)
0xc71: @ CreateInvItem(Stack[-3])
0xc72: Pop(0)
0xc73: @@ SetItemName(Stack[-7]); Obj=3 // @poff=824
0xc74: Pop(0)
0xc75: Push("Organ") // @poff=836
0xc76: Push((int) 1)
0xc77: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=848
0xc78: Pop(2)
0xc79: @@ GetItemID(Stack[-2]); Obj=3 // @poff=676
0xc7a: Pop(0)
0xc7b: Push((int) 0)
0xc7c: Push((int) 1)
0xc7d: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xc7e: Pop(2)
0xc7f: Return(); Pop(6)

0xc80: Stack[-3] = 0
0xc81: PushEmpty(int)
0xc82: Call2 0xbeb

0xc83: Pop(0)
0xc84: Push((int) 1)
0xc85: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xc86: IF (Stack[-1] == 0) GOTO 0xc88; Pop(1)

0xc87: Return(); Pop(0)

0xc88: PushEmpty(string)
0xc89: Stack[-1] = "liver" // @poff=860
0xc8a: Call2 0xc70

0xc8b: Pop(1)
0xc8c: PushEmpty(string)
0xc8d: Stack[-1] = "kidney" // @poff=872
0xc8e: Call2 0xc70

0xc8f: Pop(1)
0xc90: PushEmpty(string)
0xc91: Stack[-1] = "heart" // @poff=886
0xc92: Call2 0xc70

0xc93: Pop(1)
0xc94: PushEmpty(string)
0xc95: Stack[-1] = "blood" // @poff=898
0xc96: Call2 0xc70

0xc97: Pop(1)
0xc98: Return(); Pop(0)

0xc99: PushEmpty(int, bool, int, bool)
0xc9a: Push(Stack[-5])
0xc9b: IF (Stack[-1] == 0) GOTO 0xcf2; Pop(1)

0xc9c: PushEmpty(int, int)
0xc9d: Stack[-2] = (int) 0
0xc9e: Push((int) 100)
0xc9f: PushEmpty(int)
0xca0: Call2 0xb75

0xca1: Pop(0)
0xca2: Push((int) 100)
0xca3: Pop(2); Push(Stack[-2] * Stack[-1]);
0xca4: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xca5: Call2 0xc51

0xca6: Pop(2)
0xca7: Push((int) 8)
0xca8: @ irand(Stack[-3], Stack[-1])
0xca9: Pop(1)
0xcaa: Push((int) 0)
0xcab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcac: IF (Stack[-1] == 0) GOTO 0xcb6; Pop(1)

0xcad: PushEmpty(int, string)
0xcae: Stack[-1] = "lemon" // @poff=910
0xcaf: Call2 0xd48

0xcb0: Pop(1)
0xcb1: Push((int) 0)
0xcb2: Push((int) 1)
0xcb3: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcb4: Pop(3)
0xcb5: GOTO 0xcf1

0xcb6: Push((int) 1)
0xcb7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb8: IF (Stack[-1] == 0) GOTO 0xcc2; Pop(1)

0xcb9: PushEmpty(int, string)
0xcba: Stack[-1] = "rusk" // @poff=922
0xcbb: Call2 0xd48

0xcbc: Pop(1)
0xcbd: Push((int) 0)
0xcbe: Push((int) 1)
0xcbf: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcc0: Pop(3)
0xcc1: GOTO 0xcf1

0xcc2: Push((int) 2)
0xcc3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc4: IF (Stack[-1] == 0) GOTO 0xcce; Pop(1)

0xcc5: PushEmpty(int, string)
0xcc6: Stack[-1] = "hook" // @poff=932
0xcc7: Call2 0xd48

0xcc8: Pop(1)
0xcc9: Push((int) 0)
0xcca: Push((int) 1)
0xccb: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xccc: Pop(3)
0xccd: GOTO 0xcf1

0xcce: Push((int) 4)
0xccf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd0: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcd1: PushEmpty(int, string)
0xcd2: Stack[-1] = "syringe" // @poff=942
0xcd3: Call2 0xd48

0xcd4: Pop(1)
0xcd5: Push((int) 0)
0xcd6: Push((int) 1)
0xcd7: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcd8: Pop(3)
0xcd9: GOTO 0xcf1

0xcda: Push((int) 5)
0xcdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcdc: IF (Stack[-1] == 0) GOTO 0xce6; Pop(1)

0xcdd: PushEmpty(int, string)
0xcde: Stack[-1] = "watch" // @poff=958
0xcdf: Call2 0xd48

0xce0: Pop(1)
0xce1: Push((int) 0)
0xce2: Push((int) 1)
0xce3: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xce4: Pop(3)
0xce5: GOTO 0xcf1

0xce6: Push((int) 6)
0xce7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce8: IF (Stack[-1] == 0) GOTO 0xcf1; Pop(1)

0xce9: PushEmpty(int, string)
0xcea: Stack[-1] = "razor" // @poff=970
0xceb: Call2 0xd48

0xcec: Pop(1)
0xced: Push((int) 0)
0xcee: Push((int) 1)
0xcef: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcf0: Pop(3)
0xcf1: GOTO 0xd47

0xcf2: PushEmpty(int, int)
0xcf3: Stack[-2] = (int) 0
0xcf4: Push((int) 50)
0xcf5: PushEmpty(int)
0xcf6: Call2 0xb75

0xcf7: Pop(0)
0xcf8: Push((int) 50)
0xcf9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcfa: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xcfb: Call2 0xc51

0xcfc: Pop(2)
0xcfd: Push((int) 7)
0xcfe: @ irand(Stack[-3], Stack[-1])
0xcff: Pop(1)
0xd00: Push((int) 0)
0xd01: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd02: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd03: PushEmpty(int, string)
0xd04: Stack[-1] = "beads" // @poff=982
0xd05: Call2 0xd48

0xd06: Pop(1)
0xd07: Push((int) 0)
0xd08: Push((int) 1)
0xd09: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd0a: Pop(3)
0xd0b: GOTO 0xd47

0xd0c: Push((int) 1)
0xd0d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0e: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd0f: PushEmpty(int, string)
0xd10: Stack[-1] = "bracelet" // @poff=994
0xd11: Call2 0xd48

0xd12: Pop(1)
0xd13: Push((int) 0)
0xd14: Push((int) 1)
0xd15: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd16: Pop(3)
0xd17: GOTO 0xd47

0xd18: Push((int) 2)
0xd19: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1a: IF (Stack[-1] == 0) GOTO 0xd24; Pop(1)

0xd1b: PushEmpty(int, string)
0xd1c: Stack[-1] = "ear_ring" // @poff=1012
0xd1d: Call2 0xd48

0xd1e: Pop(1)
0xd1f: Push((int) 0)
0xd20: Push((int) 1)
0xd21: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd22: Pop(3)
0xd23: GOTO 0xd47

0xd24: Push((int) 3)
0xd25: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd26: IF (Stack[-1] == 0) GOTO 0xd30; Pop(1)

0xd27: PushEmpty(int, string)
0xd28: Stack[-1] = "gold_ring" // @poff=1030
0xd29: Call2 0xd48

0xd2a: Pop(1)
0xd2b: Push((int) 0)
0xd2c: Push((int) 1)
0xd2d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd2e: Pop(3)
0xd2f: GOTO 0xd47

0xd30: Push((int) 4)
0xd31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd32: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd33: PushEmpty(int, string)
0xd34: Stack[-1] = "silver_ring" // @poff=1050
0xd35: Call2 0xd48

0xd36: Pop(1)
0xd37: Push((int) 0)
0xd38: Push((int) 1)
0xd39: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd3a: Pop(3)
0xd3b: GOTO 0xd47

0xd3c: Push((int) 5)
0xd3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3e: IF (Stack[-1] == 0) GOTO 0xd47; Pop(1)

0xd3f: PushEmpty(int, string)
0xd40: Stack[-1] = "flower" // @poff=1074
0xd41: Call2 0xd48

0xd42: Pop(1)
0xd43: Push((int) 0)
0xd44: Push((int) 1)
0xd45: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd46: Pop(3)
0xd47: Return(); Pop(4)

0xd48: PushEmpty(int, int)
0xd49: @ GetInvItemByName(Stack[-1], Stack[-3])
0xd4a: Pop(0)
0xd4b: Stack[-1] = Stack[-4]
0xd4c: Return(); Pop(2)

0xd4d: PushEmpty()
0xd4e: PushEmpty(object)
0xd4f: Stack[-2] = Stack[-1]
0xd50: Push(-1, 0); TaskCall(2)
0xd51: Call2 0x266

0xd52: Pop(-1, 0); TaskReturn
0xd53: Pop(1)
0xd54: Return(); Pop(0)

0xd55: PushEmpty(float, float)
0xd56: Push("health") // @poff=1088
0xd57: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd58: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd59: Push("health") // @poff=1088
0xd5a: @ GetProperty(Stack[-1], Stack[-2])
0xd5b: Pop(1)
0xd5c: Push((int) 0)
0xd5d: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xd5e: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd5f: @ SignalDeath(Stack[-4])
0xd60: Pop(0)
0xd61: Return(); Pop(2)

0xd62: PushEmpty()
0xd63: PushEmpty(object)
0xd64: Stack[-2] = Stack[-1]
0xd65: Call2 0xd4d

0xd66: Pop(1)
0xd67: Return(); Pop(0)

0xd68: PushEmpty()
0xd69: PushEmpty(object, int, float)
0xd6a: Stack[-7] = Stack[-3]
0xd6b: Stack[-6] = Stack[-2]
0xd6c: Stack[-5] = Stack[-1]
0xd6d: Call2 0xa2f

0xd6e: Pop(3)
0xd6f: Return(); Pop(0)

0xd70: PushEmpty()
0xd71: PushEmpty(object, int, float, cvector, cvector)
0xd72: Stack[-11] = Stack[-5]
0xd73: Stack[-10] = Stack[-4]
0xd74: Stack[-9] = Stack[-3]
0xd75: Stack[-7] = Stack[-2]
0xd76: Stack[-6] = Stack[-1]
0xd77: Call2 0xa73

0xd78: Pop(5)
0xd79: Return(); Pop(0)

0xd7a: PushEmpty()
0xd7b: Push("unholster") // @poff=1102
0xd7c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7d: IF (Stack[-1] == 0) GOTO 0xd85; Pop(1)

0xd7e: PushEmpty(bool, object)
0xd7f: Stack[-4] = Stack[-1]
0xd80: Call2 0xe9d

0xd81: Stack[-2] = Stack[-5]
0xd82: Pop(2)
0xd83: Return(); Pop(0)

0xd84: GOTO 0xd98

0xd85: Push("player_shot") // @poff=1122
0xd86: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd87: IF (Stack[-1] == 0) GOTO 0xd8f; Pop(1)

0xd88: PushEmpty(bool, object)
0xd89: Stack[-4] = Stack[-1]
0xd8a: Call2 0xeaa

0xd8b: Stack[-2] = Stack[-5]
0xd8c: Pop(2)
0xd8d: Return(); Pop(0)

0xd8e: GOTO 0xd98

0xd8f: Push("battle") // @poff=1146
0xd90: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd91: IF (Stack[-1] == 0) GOTO 0xd98; Pop(1)

0xd92: PushEmpty(bool, object)
0xd93: Stack[-4] = Stack[-1]
0xd94: Call2 0xec1

0xd95: Stack[-2] = Stack[-5]
0xd96: Pop(2)
0xd97: Return(); Pop(0)

0xd98: Stack[-3] = (bool) 0
0xd99: Return(); Pop(0)

0xd9a: PushEmpty()
0xd9b: Push("unholster") // @poff=1102
0xd9c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd9d: IF (Stack[-1] == 0) GOTO 0xda3; Pop(1)

0xd9e: PushEmpty(object)
0xd9f: Stack[-3] = Stack[-1]
0xda0: Call2 0xea2

0xda1: Pop(1)
0xda2: GOTO 0xdb2

0xda3: Push("player_shot") // @poff=1122
0xda4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xda5: IF (Stack[-1] == 0) GOTO 0xdab; Pop(1)

0xda6: PushEmpty(object)
0xda7: Stack[-3] = Stack[-1]
0xda8: Call2 0xeb9

0xda9: Pop(1)
0xdaa: GOTO 0xdb2

0xdab: Push("battle") // @poff=1146
0xdac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdad: IF (Stack[-1] == 0) GOTO 0xdb2; Pop(1)

0xdae: PushEmpty(object)
0xdaf: Stack[-3] = Stack[-1]
0xdb0: Call2 0xec8

0xdb1: Pop(1)
0xdb2: Return(); Pop(0)

0xdb3: PushEmpty(bool, bool)
0xdb4: PushEmpty(bool)
0xdb5: Stack[-1] = (bool) 0
0xdb6: PushEmpty(bool, object)
0xdb7: Stack[-6] = Stack[-1]
0xdb8: Call2 0xe9d

0xdb9: Pop(1)
0xdba: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdbb: PushEmpty(bool, object)
0xdbc: Stack[-6] = Stack[-1]
0xdbd: Call2 0x9b1

0xdbe: Pop(1)
0xdbf: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdc0: Stack[-1] = (bool) 1
0xdc1: IF (Stack[-1] == 0) GOTO 0xdc8; Pop(1)

0xdc2: @@ IsWeaponHolstered(Stack[-1]); Obj=3 // @poff=1160
0xdc3: Pop(0)
0xdc4: Pop(0); Push((bool) Stack[-1] == 0)
0xdc5: IF (Stack[-1] == 0) GOTO 0xdc8; Pop(1)

0xdc6: Stack[-4] = (bool) 1
0xdc7: Return(); Pop(2)

0xdc8: Stack[-4] = (bool) 0
0xdc9: Return(); Pop(2)

0xdca: PushEmpty()
0xdcb: PushEmpty(object)
0xdcc: Stack[-2] = Stack[-1]
0xdcd: Call2 0xea2

0xdce: Pop(1)
0xdcf: Return(); Pop(0)

0xdd0: PushEmpty()
0xdd1: PushEmpty(bool, object)
0xdd2: Stack[-3] = Stack[-1]
0xdd3: Call2 0x9b1

0xdd4: Pop(1)
0xdd5: IF (Stack[-1] == 0) GOTO 0xddc; Pop(1)

0xdd6: PushEmpty(object)
0xdd7: Call2 0xb2e

0xdd8: Pop(0)
0xdd9: Push((float)-0.05000000074505806)
0xdda: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xddb: Pop(2)
0xddc: Return(); Pop(0)

0xddd: PushEmpty(object, object)
0xdde: Push("heal") // @poff=1178
0xddf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xde0: IF (Stack[-1] == 0) GOTO 0xdeb; Pop(1)

0xde1: Push("player") // @poff=722
0xde2: @ FindActor(Stack[-2], Stack[-1])
0xde3: Pop(1)
0xde4: PushEmpty(bool, object)
0xde5: Stack[-3] = Stack[-1]
0xde6: Call2 0xece

0xde7: Stack[-2] = Stack[-6]
0xde8: Pop(2)
0xde9: Return(); Pop(2)

0xdea: Stack[-1] = 0
0xdeb: Stack[-4] = (bool) 0
0xdec: Return(); Pop(2)

0xded: PushEmpty(object, object)
0xdee: Push("heal") // @poff=1178
0xdef: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdf0: IF (Stack[-1] == 0) GOTO 0xdf9; Pop(1)

0xdf1: Push("player") // @poff=722
0xdf2: @ FindActor(Stack[-2], Stack[-1])
0xdf3: Pop(1)
0xdf4: PushEmpty(object)
0xdf5: Stack[-2] = Stack[-1]
0xdf6: Call2 0xed1

0xdf7: Pop(1)
0xdf8: Stack[-1] = 0
0xdf9: Return(); Pop(2)

0xdfa: PushEmpty(string, string)
0xdfb: Stack[-1] = "idle" // @poff=146
0xdfc: Push(Stack[-3])
0xdfd: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdfe: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xdff: Stack[-1] = Stack[-4]
0xe00: Return(); Pop(2)

0xe01: PushEmpty(int, bool, int, bool)
0xe02: Stack[-2] = (int) 0
0xe03: Push("all") // @poff=138
0xe04: PushEmpty(string, int)
0xe05: Stack[-5] = Stack[-1]
0xe06: Call2 0xdfa

0xe07: Pop(1)
0xe08: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xe09: Pop(2)
0xe0a: Pop(0); Push((bool) Stack[-1] == 0)
0xe0b: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe0c: GOTO 0xe10

0xe0d: Push((int) 1)
0xe0e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xe0f: GOTO 0xe03

0xe10: Stack[-2] = Stack[-5]
0xe11: Return(); Pop(4)

0xe12: PushEmpty()
0xe13: PushEmpty(bool)
0xe14: Call2 0xfa5

0xe15: Pop(0)
0xe16: IF (Stack[-1] == 0) GOTO 0xe19; Pop(1)

0xe17: Stack[-2] = (int) 2
0xe18: GOTO 0xe1a

0xe19: Stack[-2] = (int) 0
0xe1a: Return(); Pop(0)

0xe1b: PushEmpty()
0xe1c: PushEmpty(object)
0xe1d: Stack[-2] = Stack[-1]
0xe1e: Push(-1, 1); TaskCall(5)
0xe1f: Call2 0x56d

0xe20: Pop(-1, 1); TaskReturn
0xe21: Pop(1)
0xe22: Return(); Pop(0)

0xe23: PushEmpty()
0xe24: PushEmpty(bool, object)
0xe25: Stack[-3] = Stack[-1]
0xe26: Call2 0x9eb

0xe27: Pop(1)
0xe28: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xe29: Stack[-2] = (int) 2
0xe2a: GOTO 0xe2c

0xe2b: Stack[-2] = (int) 0
0xe2c: Return(); Pop(0)

0xe2d: PushEmpty()
0xe2e: PushEmpty(object)
0xe2f: Stack[-2] = Stack[-1]
0xe30: Push(-1, 3); TaskCall(6)
0xe31: Call2 0x680

0xe32: Pop(-1, 3); TaskReturn
0xe33: Pop(1)
0xe34: Return(); Pop(0)

0xe35: PushEmpty()
0xe36: PushEmpty(bool, object)
0xe37: Stack[-4] = Stack[-1]
0xe38: Call2 0x9eb

0xe39: Pop(1)
0xe3a: IF (Stack[-1] == 0) GOTO 0xe3d; Pop(1)

0xe3b: Stack[-3] = (int) 2
0xe3c: GOTO 0xe3e

0xe3d: Stack[-3] = (int) 0
0xe3e: Return(); Pop(0)

0xe3f: PushEmpty()
0xe40: PushEmpty(object)
0xe41: Stack[-2] = Stack[-1]
0xe42: Push(-1, 3); TaskCall(7)
0xe43: Call2 0x77c

0xe44: Pop(-1, 3); TaskReturn
0xe45: Pop(1)
0xe46: Return(); Pop(0)

0xe47: PushEmpty(string, bool, string, bool)
0xe48: PushEmpty(bool, object, string)
0xe49: Stack[-9] = Stack[-2]
0xe4a: Stack[-1] = "class" // @poff=1188
0xe4b: Call2 0x9b6

0xe4c: Pop(2)
0xe4d: Pop(1); Push((bool) Stack[-1] == 0)
0xe4e: IF (Stack[-1] == 0) GOTO 0xe51; Pop(1)

0xe4f: Stack[-8] = (bool) 0
0xe50: Return(); Pop(4)

0xe51: Push("class") // @poff=1188
0xe52: @@ GetProperty(Stack[-1], Stack[-3]); Obj=7 // @poff=528
0xe53: Pop(1)
0xe54: Push("rat") // @poff=1200
0xe55: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe56: IF (Stack[-1] == 0) GOTO 0xe5a; Pop(1)

0xe57: Stack[-8] = (bool) 0
0xe58: Return(); Pop(4)

0xe59: GOTO 0xe65

0xe5a: Push("rat_big") // @poff=1208
0xe5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5c: IF (Stack[-1] == 0) GOTO 0xe60; Pop(1)

0xe5d: Stack[-8] = (bool) 0
0xe5e: Return(); Pop(4)

0xe5f: GOTO 0xe65

0xe60: Push("dog") // @poff=1224
0xe61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe62: IF (Stack[-1] == 0) GOTO 0xe65; Pop(1)

0xe63: Stack[-8] = (bool) 0
0xe64: Return(); Pop(4)

0xe65: @ CanSee(Stack[-1], Stack[-7])
0xe66: Pop(0)
0xe67: PushEmpty(bool)
0xe68: Stack[-1] = (bool) 1
0xe69: Push(Stack[-2])
0xe6a: IF (Stack[-1] == 1) GOTO 0xe73; Pop(1)

0xe6b: PushEmpty(float, object)
0xe6c: Stack[-10] = Stack[-1]
0xe6d: Call2 0x9a9

0xe6e: Pop(1)
0xe6f: Pop(0); Push(Stack[-7] * Stack[-7]);
0xe70: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xe71: IF (Stack[-1] == 1) GOTO 0xe73; Pop(1)

0xe72: Stack[-1] = (bool) 0
0xe73: IF (Stack[-1] == 0) GOTO 0xe76; Pop(1)

0xe74: Stack[-8] = (bool) 1
0xe75: Return(); Pop(4)

0xe76: @ CanSee(Stack[-1], Stack[-6])
0xe77: Pop(0)
0xe78: PushEmpty(bool)
0xe79: Stack[-1] = (bool) 1
0xe7a: Push(Stack[-2])
0xe7b: IF (Stack[-1] == 1) GOTO 0xe84; Pop(1)

0xe7c: PushEmpty(float, object)
0xe7d: Stack[-9] = Stack[-1]
0xe7e: Call2 0x9a9

0xe7f: Pop(1)
0xe80: Pop(0); Push(Stack[-7] * Stack[-7]);
0xe81: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xe82: IF (Stack[-1] == 1) GOTO 0xe84; Pop(1)

0xe83: Stack[-1] = (bool) 0
0xe84: IF (Stack[-1] == 0) GOTO 0xe87; Pop(1)

0xe85: Stack[-8] = (bool) 1
0xe86: Return(); Pop(4)

0xe87: Stack[-8] = (bool) 0
0xe88: Return(); Pop(4)

0xe89: PushEmpty()
0xe8a: Stack[-2] = (int) 0
0xe8b: Return(); Pop(0)

0xe8c: PushEmpty()
0xe8d: Return(); Pop(0)

0xe8e: PushEmpty()
0xe8f: Stack[-3] = (int) 0
0xe90: Return(); Pop(0)

0xe91: PushEmpty()
0xe92: Return(); Pop(0)

0xe93: PushEmpty()
0xe94: Stack[-2] = (int) 2
0xe95: Return(); Pop(0)

0xe96: PushEmpty()
0xe97: PushEmpty(object)
0xe98: Stack[-2] = Stack[-1]
0xe99: Call2 0xf93

0xe9a: Pop(1)
0xe9b: Return(); Pop(0)

0xe9c: Return(); Pop(0)

0xe9d: PushEmpty(bool, bool)
0xe9e: @ CanSee(Stack[-1], Stack[-3])
0xe9f: Pop(0)
0xea0: Stack[-1] = Stack[-4]
0xea1: Return(); Pop(2)

0xea2: PushEmpty()
0xea3: PushEmpty(object)
0xea4: Stack[-2] = Stack[-1]
0xea5: Push(-1, 3); TaskCall(8)
0xea6: Call2 0x83e

0xea7: Pop(-1, 3); TaskReturn
0xea8: Pop(1)
0xea9: Return(); Pop(0)

0xeaa: PushEmpty(bool, bool)
0xeab: @ CanSee(Stack[-1], Stack[-3])
0xeac: Pop(0)
0xead: Stack[-4] = (bool) 1
0xeae: Push(Stack[-1])
0xeaf: IF (Stack[-1] == 1) GOTO 0xeb8; Pop(1)

0xeb0: PushEmpty(float, object)
0xeb1: Stack[-5] = Stack[-1]
0xeb2: Call2 0x9a9

0xeb3: Pop(1)
0xeb4: Push((int) 4000000)
0xeb5: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xeb6: IF (Stack[-1] == 1) GOTO 0xeb8; Pop(1)

0xeb7: Stack[-4] = (bool) 0
0xeb8: Return(); Pop(2)

0xeb9: PushEmpty()
0xeba: PushEmpty(object)
0xebb: Stack[-2] = Stack[-1]
0xebc: Push(-1, 3); TaskCall(9)
0xebd: Call2 0x900

0xebe: Pop(-1, 3); TaskReturn
0xebf: Pop(1)
0xec0: Return(); Pop(0)

0xec1: PushEmpty()
0xec2: PushEmpty(bool, object)
0xec3: Stack[-3] = Stack[-1]
0xec4: Call2 0xeaa

0xec5: Stack[-2] = Stack[-4]
0xec6: Pop(2)
0xec7: Return(); Pop(0)

0xec8: PushEmpty()
0xec9: PushEmpty(object)
0xeca: Stack[-2] = Stack[-1]
0xecb: Call2 0xeb9

0xecc: Pop(1)
0xecd: Return(); Pop(0)

0xece: PushEmpty()
0xecf: Stack[-2] = (bool) 0
0xed0: Return(); Pop(0)

0xed1: PushEmpty()
0xed2: Return(); Pop(0)

0xed3: PushEmpty(object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object, object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object)
0xed4: PushEmpty(object)
0xed5: Call2 0xb3e

0xed6: Stack[-1] = Stack[-27]
0xed7: Pop(1)
0xed8: @ CreateIntVector(Stack[-25])
0xed9: Pop(0)
0xeda: @ CreateIntVector(Stack[-24])
0xedb: Pop(0)
0xedc: @ CreateIntVector(Stack[-23])
0xedd: Pop(0)
0xede: @@ GetSubContainerCount(Stack[-22]); Obj=53 // @poff=1232
0xedf: Pop(0)
0xee0: Stack[-21] = (int) 0
0xee1: Pop(0); Push((bool) Stack[-21] < Stack[-22])
0xee2: IF (Stack[-1] == 0) GOTO 0xf29; Pop(1)

0xee3: @@ GetItemCount(Stack[-20], Stack[-21]); Obj=53 // @poff=1253
0xee4: Pop(0)
0xee5: Stack[-19] = (int) 0
0xee6: Pop(0); Push((bool) Stack[-19] < Stack[-20])
0xee7: IF (Stack[-1] == 0) GOTO 0xf26; Pop(1)

0xee8: @@ GetItem(Stack[-18], Stack[-19], Stack[-21]); Obj=53 // @poff=1266
0xee9: Pop(0)
0xeea: @@ GetItemID(Stack[-17]); Obj=18 // @poff=676
0xeeb: Pop(0)
0xeec: Push("HasDurability") // @poff=1274
0xeed: @ HasInvItemProperty(Stack[-17], Stack[-18], Stack[-1])
0xeee: Pop(1)
0xeef: Push(Stack[-16])
0xef0: IF (Stack[-1] == 0) GOTO 0xf22; Pop(1)

0xef1: Push("durability") // @poff=1302
0xef2: @@ HasProperty(Stack[-17], Stack[-1]); Obj=19 // @poff=468
0xef3: Pop(1)
0xef4: Push(Stack[-16])
0xef5: IF (Stack[-1] == 0) GOTO 0xf22; Pop(1)

0xef6: Push("durability") // @poff=1302
0xef7: @@ GetProperty(Stack[-16], Stack[-1]); Obj=19 // @poff=528
0xef8: Pop(1)
0xef9: PushEmpty(bool)
0xefa: Stack[-1] = (bool) 0
0xefb: Push((int) 100)
0xefc: Pop(1); Push((bool) Stack[-17] < Stack[-1])
0xefd: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xefe: PushEmpty(bool, object)
0xeff: Stack[-21] = Stack[-1]
0xf00: Call2 0xf66

0xf01: Pop(1)
0xf02: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xf03: Stack[-1] = (bool) 1
0xf04: IF (Stack[-1] == 0) GOTO 0xf22; Pop(1)

0xf05: @@ add(Stack[-18]); Obj=26 // @poff=588
0xf06: Pop(0)
0xf07: @@ add(Stack[-21]); Obj=25 // @poff=588
0xf08: Pop(0)
0xf09: @@ add(Stack[-19]); Obj=24 // @poff=588
0xf0a: Pop(0)
0xf0b: PushEmpty(int, object, int)
0xf0c: Stack[-21] = Stack[-2]
0xf0d: Stack[-1] = (int) 0
0xf0e: Call2 0xbf6

0xf0f: Stack[-3] = Stack[-17]
0xf10: Pop(3)
0xf11: Push((float)1.0)
0xf12: Push((float)2.0)
0xf13: Pop(1); Push(Stack[-1] * Stack[-17]);
0xf14: Push((float)100.0)
0xf15: Pop(2); Push(Stack[-2] / Stack[-1]);
0xf16: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf17: Pop(1); Push(Stack[-15] * Stack[-1]);
0xf18: Push((int) 100)
0xf19: Pop(1); Push(Stack[-1] - Stack[-17]);
0xf1a: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf1b: Push((int) 300)
0xf1c: Stack[-15] = Stack[-2] / Stack[-1]; Pop(2);
0xf1d: Pop(0); Push((bool) Stack[-13] == 0)
0xf1e: IF (Stack[-1] == 0) GOTO 0xf20; Pop(1)

0xf1f: Stack[-13] = (int) 1
0xf20: @@ add(Stack[-13]); Obj=23 // @poff=588
0xf21: Pop(0)
0xf22: Stack[-18] = 0
0xf23: Push((int) 1)
0xf24: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0xf25: GOTO 0xee6

0xf26: Push((int) 1)
0xf27: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0xf28: GOTO 0xee1

0xf29: @ CreateIntVector(Stack[-12])
0xf2a: Pop(0)
0xf2b: Push("repair.xml") // @poff=1324
0xf2c: @ ChooseItem(Stack[-27], Stack[-13], Stack[-24], Stack[-1])
0xf2d: Pop(1)
0xf2e: @@ size(Stack[-11]); Obj=12 // @poff=592
0xf2f: Pop(0)
0xf30: Pop(0); Push((bool) Stack[-11] == 0)
0xf31: IF (Stack[-1] == 0) GOTO 0xf33; Pop(1)

0xf32: Return(); Pop(52)

0xf33: Stack[-10] = (int) 0
0xf34: Stack[-9] = (int) 0
0xf35: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0xf36: IF (Stack[-1] == 0) GOTO 0xf3f; Pop(1)

0xf37: @@ get(Stack[-8], Stack[-9]); Obj=12 // @poff=597
0xf38: Pop(0)
0xf39: @@ get(Stack[-7], Stack[-8]); Obj=23 // @poff=597
0xf3a: Pop(0)
0xf3b: Stack[-10] = Stack[-10] + Stack[-7]; Pop(0);
0xf3c: Push((int) 1)
0xf3d: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0xf3e: GOTO 0xf35

0xf3f: Push("money") // @poff=1346
0xf40: @@ GetProperty(Stack[-1], Stack[-7]); Obj=54 // @poff=528
0xf41: Pop(1)
0xf42: Stack[-6] = Stack[-6] - Stack[-10]; Pop(0);
0xf43: Push((int) 0)
0xf44: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xf45: IF (Stack[-1] == 0) GOTO 0xf47; Pop(1)

0xf46: Return(); Pop(52)

0xf47: Push("money") // @poff=1346
0xf48: @@ SetProperty(Stack[-1], Stack[-7]); Obj=54 // @poff=848
0xf49: Pop(1)
0xf4a: Stack[-5] = (int) 0
0xf4b: Pop(0); Push((bool) Stack[-5] < Stack[-11])
0xf4c: IF (Stack[-1] == 0) GOTO 0xf60; Pop(1)

0xf4d: @@ get(Stack[-4], Stack[-5]); Obj=12 // @poff=597
0xf4e: Pop(0)
0xf4f: @@ get(Stack[-3], Stack[-4]); Obj=25 // @poff=597
0xf50: Pop(0)
0xf51: @@ get(Stack[-2], Stack[-4]); Obj=24 // @poff=597
0xf52: Pop(0)
0xf53: @@ GetItem(Stack[-1], Stack[-2], Stack[-3]); Obj=53 // @poff=1266
0xf54: Pop(0)
0xf55: Push("durability") // @poff=1302
0xf56: Push((int) 100)
0xf57: @@ SetProperty(Stack[-2], Stack[-1]); Obj=3 // @poff=848
0xf58: Pop(2)
0xf59: Push((int) 1)
0xf5a: @@ SetItem(Stack[-2], Stack[-1], Stack[-3], Stack[-4]); Obj=54 // @poff=1358
0xf5b: Pop(1)
0xf5c: Stack[-1] = 0
0xf5d: Push((int) 1)
0xf5e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xf5f: GOTO 0xf4b

0xf60: Return(); Pop(52)

0xf61: Stack[-12] = 0
0xf62: Stack[-23] = 0
0xf63: Stack[-24] = 0
0xf64: Stack[-25] = 0
0xf65: Stack[-26] = 0
0xf66: PushEmpty(int, bool, int, int, bool, int)
0xf67: @@ GetItemID(Stack[-3]); Obj=7 // @poff=676
0xf68: Pop(0)
0xf69: Push("Category") // @poff=1366
0xf6a: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xf6b: Pop(1)
0xf6c: Pop(0); Push((bool) Stack[-2] == 0)
0xf6d: IF (Stack[-1] == 0) GOTO 0xf70; Pop(1)

0xf6e: Stack[-8] = (bool) 0
0xf6f: Return(); Pop(6)

0xf70: Push("Category") // @poff=1366
0xf71: @ GetInvItemProperty(Stack[-2], Stack[-4], Stack[-1])
0xf72: Pop(1)
0xf73: Push((int) 1)
0xf74: Stack[-9] = Stack[-2] == Stack[-1]; Pop(1);
0xf75: Return(); Pop(6)

0xf76: PushEmpty()
0xf77: PushEmpty(int, object)
0xf78: Stack[-3] = Stack[-1]
0xf79: Push(-2, 1); TaskCall(0)
0xf7a: Call2 0x0

0xf7b: Pop(-2, 1); TaskReturn
0xf7c: Pop(1)
0xf7d: Push((int) 100)
0xf7e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf7f: IF (Stack[-1] == 0) GOTO 0xf84; Pop(1)

0xf80: PushEmpty(object)
0xf81: Stack[-2] = Stack[-1]
0xf82: Call2 0xed3

0xf83: Pop(1)
0xf84: Return(); Pop(0)

0xf85: Stack[-1] = (int) 515567
0xf86: Return(); Pop(0)

0xf87: Stack[-1] = (int) 503352
0xf88: Return(); Pop(0)

0xf89: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=1384
0xf8a: Return(); Pop(0)

0xf8b: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=1424
0xf8c: Return(); Pop(0)

0xf8d: Stack[-1] = (bool) 0
0xf8e: Return(); Pop(0)

0xf8f: Push(GlobalVars[0])
0xf90: Stack[-1] = (bool) 0
0xf91: GlobalVars[0] = Stack[-1]; Pop(1)
0xf92: Return(); Pop(0)

0xf93: PushEmpty(bool, bool)
0xf94: Push(GlobalVars[0])
0xf95: IF (Stack[-1] == 0) GOTO 0xfa0; Pop(1)

0xf96: @ IsOverrideActive(Stack[-1])
0xf97: Pop(0)
0xf98: Pop(0); Push((bool) Stack[-1] == 0)
0xf99: IF (Stack[-1] == 0) GOTO 0xf9e; Pop(1)

0xf9a: PushEmpty(object)
0xf9b: Stack[-4] = Stack[-1]
0xf9c: Call2 0xc44

0xf9d: Pop(1)
0xf9e: Return(); Pop(2)

0xf9f: GOTO 0xfa4

0xfa0: PushEmpty(object)
0xfa1: Stack[-4] = Stack[-1]
0xfa2: Call2 0xf76

0xfa3: Pop(1)
0xfa4: Return(); Pop(2)

0xfa5: PushEmpty(float)
0xfa6: Call2 0xc36

0xfa7: Pop(0)
0xfa8: Push((float)0.699999988079071)
0xfa9: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0xfaa: Return(); Pop(0)

0xfab: PushEmpty()
0xfac: PushEmpty(bool, object, object, float)
0xfad: Stack[-7] = Stack[-3]
0xfae: Stack[-6] = Stack[-2]
0xfaf: Stack[-1] = (float) 700.0
0xfb0: Call2 0xe47

0xfb1: Stack[-4] = Stack[-8]
0xfb2: Pop(4)
0xfb3: Return(); Pop(0)

0xfb4: PushEmpty()
0xfb5: PushEmpty(bool, object)
0xfb6: Stack[-3] = Stack[-1]
0xfb7: Call2 0x9b1

0xfb8: Pop(1)
0xfb9: IF (Stack[-1] == 0) GOTO 0xfc5; Pop(1)

0xfba: PushEmpty(object)
0xfbb: Call2 0xb2e

0xfbc: Pop(0)
0xfbd: Push((float)-0.10000000149011612)
0xfbe: Push((bool) 1)
0xfbf: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfc0: Pop(3)
0xfc1: PushEmpty(bool)
0xfc2: Stack[-1] = (bool) 0
0xfc3: Call2 0xc99

0xfc4: Pop(1)
0xfc5: PushEmpty()
0xfc6: Call2 0xc81

0xfc7: Pop(0)
0xfc8: Push(GlobalVars[0])
0xfc9: Stack[-1] = (bool) 1
0xfca: GlobalVars[0] = Stack[-1]; Pop(1)
0xfcb: Push((int) 50)
0xfcc: Push((int) 40)
0xfcd: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xfce: Pop(2)
0xfcf: Return(); Pop(0)

