GlobalVarCount = 2
	G_VAR_0 bool 
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
	A:GetProperty
	A:SetProperty
	A:IsDead
	W:IsDead
	A:GetScene
	W:noaccess
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
	W:money
	W:Money
	W:reputation
	A:SetReturnValue
	W:branch
	W:GenerateMoney: iMin > iMax
	A:SetItemName
	W:Organ
	A:GetItemID
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
	W:player
	W:class
	W:rat
	W:rat_big
	W:dog
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000066006400690065000000476574506f736974696f6e0062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740068006500610064000000610074007400610063006b005f006f006e000000610074007400610063006b005f0073007400610079000000610074007400610063006b005f006f00660066000000430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a0020000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c0000006d006f006e006500790000004d006f006e00650079000000720065007000750074006100740069006f006e00000053657452657475726e56616c7565006200720061006e00630068000000470065006e00650072006100740065004d006f006e00650079003a00200069004d0069006e0020003e00200069004d006100780000005365744974656d4e616d65004f007200670061006e0000004765744974656d4944006c00690076006500720000006b00690064006e0065007900000068006500610072007400000062006c006f006f00640000006c0065006d006f006e0000007200750073006b00000068006f006f006b00000073007900720069006e00670065000000770061007400630068000000720061007a006f0072000000620065006100640073000000620072006100630065006c006500740000006500610072005f00720069006e006700000067006f006c0064005f00720069006e0067000000730069006c007600650072005f00720069006e006700000066006c006f0077006500720000006800650061006c0074006800000075006e0068006f006c007300740065007200000070006c0061007900650072005f00730068006f007400000062006100740074006c00650000004973576561706f6e486f6c737465726564006800650061006c00000070006c006100790065007200000063006c00610073007300000072006100740000007200610074005f00620069006700000064006f0067000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	GetGameTime (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	HasAnimation (3 args)
	CanSee (2 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x8e4
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a4 Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x857 Vars = (object)
		EVENT_6 Op = 0x865 Vars = ()
		EVENT_22 Op = 0x8de Vars = (object, int, float, float)
		EVENT_16 Op = 0x8e0 Vars = (object, string)
		EVENT_41 Op = 0x8e2 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x8fc Vars = (object)
		EVENT_17 Op = 0x910 Vars = (object)
		EVENT_30 Op = 0x928 Vars = (object, object, bool)
		EVENT_40 Op = 0x944 Vars = (object)
		EVENT_42 Op = 0x958 Vars = (object, string)
		EVENT_26 Op = 0x97d Vars = (string)
		EVENT_1 Op = 0x98b Vars = (object)
		EVENT_3 Op = 0x99e Vars = (object)
		EVENT_7 Op = 0x9a4 Vars = (int)
		EVENT_6 Op = 0x9b0 Vars = ()
		EVENT_41 Op = 0x9c7 Vars = (object)
		EVENT_10 Op = 0xa38 Vars = (object)
		EVENT_28 Op = 0xa3c Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0xa55 Vars = (object)
		EVENT_17 Op = 0xa69 Vars = (object)
		EVENT_30 Op = 0xa81 Vars = (object, object, bool)
		EVENT_40 Op = 0xa9d Vars = (object)
		EVENT_42 Op = 0xab1 Vars = (object, string)
		EVENT_26 Op = 0xad6 Vars = (string)
		EVENT_6 Op = 0xae4 Vars = ()
		EVENT_1 Op = 0xaeb Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0xb87 Vars = (object)
		EVENT_17 Op = 0xb9b Vars = (object)
		EVENT_30 Op = 0xbb3 Vars = (object, object, bool)
		EVENT_40 Op = 0xbcf Vars = (object)
		EVENT_42 Op = 0xbe3 Vars = (object, string)
		EVENT_26 Op = 0xc08 Vars = (string)
		EVENT_41 Op = 0xc21 Vars = (object)
		EVENT_7 Op = 0xc2a Vars = (int)
		EVENT_6 Op = 0xc4d Vars = ()
		EVENT_1 Op = 0xc54 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xc7e Vars = ()
		EVENT_7 Op = 0xcec Vars = (int)
		EVENT_41 Op = 0xd27 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0xda7 Vars = (int)
		EVENT_41 Op = 0xde2 Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xdfb Vars = ()
		EVENT_7 Op = 0xe69 Vars = (int)
		EVENT_41 Op = 0xea4 Vars = (object)

Events:
EVENT_16 Op = 0x13a3 Vars = (object, string)
EVENT_41 Op = 0x13b0 Vars = (object)
EVENT_22 Op = 0x13b6 Vars = (object, int, float, float)
EVENT_43 Op = 0x13be Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xfce

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1513

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1511

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1515

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1517

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x127b

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
0x41: Call2 0x1012

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
0x4f: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x18e

0x53: Pop(1)
0x54: Push((int) 537052)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 537053)
0x5a: Push((int) 38893)
0x5b: Push((int) 38892)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: PushEmpty(bool)
0x5f: Stack[-1] = (bool) 0
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x112a

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x65: PushEmpty(bool, object)
0x66: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x67: Call2 0x117e

0x68: Pop(1)
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Stack[-1] = (bool) 1
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: Push((int) 537062)
0x6d: Push((int) 38902)
0x6e: Push((int) 38901)
0x6f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x70: Pop(3)
0x71: PushEmpty(bool)
0x72: Stack[-1] = (bool) 0
0x73: PushEmpty(bool, object)
0x74: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75: Call2 0x112a

0x76: Pop(1)
0x77: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x78: PushEmpty(bool, object)
0x79: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a: Call2 0x1192

0x7b: Pop(1)
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: Stack[-1] = (bool) 1
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: Push((int) 537065)
0x80: Push((int) 38905)
0x81: Push((int) 38904)
0x82: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x83: Pop(3)
0x84: PushEmpty(bool)
0x85: Stack[-1] = (bool) 0
0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88: Call2 0x112a

0x89: Pop(1)
0x8a: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8b: PushEmpty(bool, object)
0x8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d: Call2 0x1188

0x8e: Pop(1)
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: Stack[-1] = (bool) 1
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: Push((int) 537089)
0x93: Push((int) 38929)
0x94: Push((int) 38928)
0x95: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x96: Pop(3)
0x97: PushEmpty(bool)
0x98: Stack[-1] = (bool) 0
0x99: PushEmpty(bool, object)
0x9a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b: Call2 0x1188

0x9c: Pop(1)
0x9d: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call2 0x112a

0xa1: Pop(1)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Stack[-1] = (bool) 1
0xa4: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa5: Push((int) 537104)
0xa6: Push((int) 38945)
0xa7: Push((int) 38944)
0xa8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa9: Pop(3)
0xaa: PushEmpty(bool)
0xab: Stack[-1] = (bool) 0
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call2 0x112a

0xaf: Pop(1)
0xb0: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb1: PushEmpty(bool, object)
0xb2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Call2 0x1192

0xb4: Pop(1)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Stack[-1] = (bool) 1
0xb7: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb8: Push((int) 537124)
0xb9: Push((int) 38966)
0xba: Push((int) 38965)
0xbb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbc: Pop(3)
0xbd: PushEmpty(bool)
0xbe: Stack[-1] = (bool) 0
0xbf: PushEmpty(bool, object)
0xc0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Call2 0x112a

0xc2: Pop(1)
0xc3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc4: PushEmpty(bool, object)
0xc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Call2 0x119c

0xc7: Pop(1)
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Stack[-1] = (bool) 1
0xca: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcb: Push((int) 537140)
0xcc: Push((int) 38982)
0xcd: Push((int) 38981)
0xce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcf: Pop(3)
0xd0: PushEmpty(bool)
0xd1: Stack[-1] = (bool) 0
0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Call2 0x112a

0xd5: Pop(1)
0xd6: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd7: PushEmpty(bool, object)
0xd8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Call2 0x11a6

0xda: Pop(1)
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: Stack[-1] = (bool) 1
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: Push((int) 537157)
0xdf: Push((int) 38999)
0xe0: Push((int) 38998)
0xe1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe2: Pop(3)
0xe3: PushEmpty(bool)
0xe4: Stack[-1] = (bool) 0
0xe5: PushEmpty(bool, object)
0xe6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Call2 0x112a

0xe8: Pop(1)
0xe9: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xea: PushEmpty(bool, object)
0xeb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xec: Call2 0x11b0

0xed: Pop(1)
0xee: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xef: Stack[-1] = (bool) 1
0xf0: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf1: Push((int) 537175)
0xf2: Push((int) 39019)
0xf3: Push((int) 39018)
0xf4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf5: Pop(3)
0xf6: PushEmpty(bool)
0xf7: Stack[-1] = (bool) 0
0xf8: PushEmpty(bool, object)
0xf9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Call2 0x112a

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfd: PushEmpty(bool, object)
0xfe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xff: Call2 0x11ba

0x100: Pop(1)
0x101: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x102: Stack[-1] = (bool) 1
0x103: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x104: Push((int) 537187)
0x105: Push((int) 39031)
0x106: Push((int) 39030)
0x107: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x108: Pop(3)
0x109: PushEmpty(bool)
0x10a: Stack[-1] = (bool) 0
0x10b: PushEmpty(bool, object)
0x10c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Call2 0x112a

0x10e: Pop(1)
0x10f: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x112: Call2 0x11c4

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x115: Stack[-1] = (bool) 1
0x116: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x117: Push((int) 537199)
0x118: Push((int) 39043)
0x119: Push((int) 39042)
0x11a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x11b: Pop(3)
0x11c: PushEmpty(bool)
0x11d: Stack[-1] = (bool) 0
0x11e: PushEmpty(bool, object)
0x11f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x120: Call2 0x112a

0x121: Pop(1)
0x122: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x123: PushEmpty(bool, object)
0x124: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x125: Call2 0x11ce

0x126: Pop(1)
0x127: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x128: Stack[-1] = (bool) 1
0x129: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12a: Push((int) 537209)
0x12b: Push((int) 39053)
0x12c: Push((int) 39052)
0x12d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12e: Pop(3)
0x12f: PushEmpty(bool)
0x130: Stack[-1] = (bool) 0
0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call2 0x112a

0x134: Pop(1)
0x135: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138: Call2 0x11d8

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13b: Stack[-1] = (bool) 1
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: Push((int) 537219)
0x13e: Push((int) 39063)
0x13f: Push((int) 39062)
0x140: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x141: Pop(3)
0x142: PushEmpty(bool)
0x143: Stack[-1] = (bool) 0
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call2 0x112a

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0x11e2

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14e: Stack[-1] = (bool) 1
0x14f: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x150: Push((int) 537226)
0x151: Push((int) 39070)
0x152: Push((int) 39069)
0x153: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x154: Pop(3)
0x155: Push((int) 537237)
0x156: Push((int) -1)
0x157: Push((int) 39080)
0x158: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x159: Pop(3)
0x15a: PushEmpty(bool)
0x15b: Stack[-1] = (bool) 1
0x15c: PushEmpty(bool, object)
0x15d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Call2 0x1136

0x15f: Pop(1)
0x160: IF (Stack[-1] == 1) GOTO 0x167; Pop(1)

0x161: PushEmpty(bool, object)
0x162: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x163: Call2 0x112a

0x164: Pop(1)
0x165: IF (Stack[-1] == 1) GOTO 0x167; Pop(1)

0x166: Stack[-1] = (bool) 0
0x167: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x168: Push((int) 537238)
0x169: Push((int) -1)
0x16a: Push((int) 39081)
0x16b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16c: Pop(3)
0x16d: GOTO 0x170

0x16e: Return(); Pop(0)

0x16f: GOTO 0x4e

0x170: PushEmpty(bool)
0x171: Call2 0x1519

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x174: @ lshWaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: PushEmpty(string)
0x17a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b: Call2 0x1023

0x17c: Pop(1)
0x17d: GOTO 0x174

0x17e: GOTO 0x18d

0x17f: Push("all") // @poff=138
0x180: Push("idle") // @poff=146
0x181: @ PlayAnimation(Stack[-2], Stack[-1])
0x182: Pop(2)
0x183: @ WaitForAnimEnd()
0x184: Pop(0)
0x185: Push( Stack[3 + Tasks[-1].StackPointer] )
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: GOTO 0x18d

0x188: Push("all") // @poff=138
0x189: Push("idle") // @poff=146
0x18a: @ PlayAnimation(Stack[-2], Stack[-1])
0x18b: Pop(2)
0x18c: GOTO 0x183

0x18d: Return(); Pop(0)

0x18e: PushEmpty()
0x18f: PushEmpty(bool)
0x190: Call2 0x1519

0x191: Pop(0)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Return(); Pop(0)

0x195: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Return(); Pop(0)

0x198: PushEmpty(string, bool)
0x199: Stack[-3] = Stack[-2]
0x19a: Push("") // @poff=102
0x19b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19d: Stack[-1] = (bool) 0
0x19e: GOTO 0x1a0

0x19f: Stack[-1] = (bool) 1
0x1a0: Call2 0x102a

0x1a1: Pop(2)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push((int) 1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x103b

0x1a9: Pop(0)
0x1aa: Push((int) 38894)
0x1ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ad: PushEmpty(object, object)
0x1ae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b0: Call2 0x110c

0x1b1: Pop(2)
0x1b2: Push((int) 38895)
0x1b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b5: PushEmpty(object, object)
0x1b6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b8: Call2 0x1111

0x1b9: Pop(2)
0x1ba: Push((int) 38896)
0x1bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: PushEmpty(object, object)
0x1be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c0: Call2 0x1116

0x1c1: Pop(2)
0x1c2: Push((int) 38897)
0x1c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c5: PushEmpty(object, object)
0x1c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c8: Call2 0x111b

0x1c9: Pop(2)
0x1ca: Push((int) 38898)
0x1cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: PushEmpty(object, object)
0x1ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d0: Call2 0x1120

0x1d1: Pop(2)
0x1d2: Push((int) 38899)
0x1d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d5: PushEmpty(object, object)
0x1d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d8: Call2 0x1125

0x1d9: Pop(2)
0x1da: Push((int) 38891)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Neutral" // @poff=89
0x1df: Call2 0x18e

0x1e0: Pop(1)
0x1e1: Push((int) 537052)
0x1e2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1e3: Pop(1)
0x1e4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1e5: Pop(0)
0x1e6: Push((int) 537053)
0x1e7: Push((int) 38893)
0x1e8: Push((int) 38892)
0x1e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ea: Pop(3)
0x1eb: PushEmpty(bool)
0x1ec: Stack[-1] = (bool) 0
0x1ed: PushEmpty(bool, object)
0x1ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ef: Call2 0x112a

0x1f0: Pop(1)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f2: PushEmpty(bool, object)
0x1f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Call2 0x117e

0x1f5: Pop(1)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Stack[-1] = (bool) 1
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f9: Push((int) 537062)
0x1fa: Push((int) 38902)
0x1fb: Push((int) 38901)
0x1fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fd: Pop(3)
0x1fe: PushEmpty(bool)
0x1ff: Stack[-1] = (bool) 0
0x200: PushEmpty(bool, object)
0x201: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x202: Call2 0x112a

0x203: Pop(1)
0x204: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x205: PushEmpty(bool, object)
0x206: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x207: Call2 0x1192

0x208: Pop(1)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Stack[-1] = (bool) 1
0x20b: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20c: Push((int) 537065)
0x20d: Push((int) 38905)
0x20e: Push((int) 38904)
0x20f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x210: Pop(3)
0x211: PushEmpty(bool)
0x212: Stack[-1] = (bool) 0
0x213: PushEmpty(bool, object)
0x214: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x215: Call2 0x112a

0x216: Pop(1)
0x217: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x218: PushEmpty(bool, object)
0x219: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21a: Call2 0x1188

0x21b: Pop(1)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: Stack[-1] = (bool) 1
0x21e: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21f: Push((int) 537089)
0x220: Push((int) 38929)
0x221: Push((int) 38928)
0x222: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x223: Pop(3)
0x224: PushEmpty(bool)
0x225: Stack[-1] = (bool) 0
0x226: PushEmpty(bool, object)
0x227: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x228: Call2 0x1188

0x229: Pop(1)
0x22a: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22b: PushEmpty(bool, object)
0x22c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22d: Call2 0x112a

0x22e: Pop(1)
0x22f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x230: Stack[-1] = (bool) 1
0x231: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x232: Push((int) 537104)
0x233: Push((int) 38945)
0x234: Push((int) 38944)
0x235: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x236: Pop(3)
0x237: PushEmpty(bool)
0x238: Stack[-1] = (bool) 0
0x239: PushEmpty(bool, object)
0x23a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23b: Call2 0x112a

0x23c: Pop(1)
0x23d: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23e: PushEmpty(bool, object)
0x23f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x240: Call2 0x1192

0x241: Pop(1)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Stack[-1] = (bool) 1
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: Push((int) 537124)
0x246: Push((int) 38966)
0x247: Push((int) 38965)
0x248: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x249: Pop(3)
0x24a: PushEmpty(bool)
0x24b: Stack[-1] = (bool) 0
0x24c: PushEmpty(bool, object)
0x24d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24e: Call2 0x112a

0x24f: Pop(1)
0x250: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x251: PushEmpty(bool, object)
0x252: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x253: Call2 0x119c

0x254: Pop(1)
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: Stack[-1] = (bool) 1
0x257: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x258: Push((int) 537140)
0x259: Push((int) 38982)
0x25a: Push((int) 38981)
0x25b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25c: Pop(3)
0x25d: PushEmpty(bool)
0x25e: Stack[-1] = (bool) 0
0x25f: PushEmpty(bool, object)
0x260: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x261: Call2 0x112a

0x262: Pop(1)
0x263: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x264: PushEmpty(bool, object)
0x265: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x266: Call2 0x11a6

0x267: Pop(1)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (bool) 1
0x26a: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26b: Push((int) 537157)
0x26c: Push((int) 38999)
0x26d: Push((int) 38998)
0x26e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26f: Pop(3)
0x270: PushEmpty(bool)
0x271: Stack[-1] = (bool) 0
0x272: PushEmpty(bool, object)
0x273: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x274: Call2 0x112a

0x275: Pop(1)
0x276: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x277: PushEmpty(bool, object)
0x278: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x279: Call2 0x11b0

0x27a: Pop(1)
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: Stack[-1] = (bool) 1
0x27d: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27e: Push((int) 537175)
0x27f: Push((int) 39019)
0x280: Push((int) 39018)
0x281: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x282: Pop(3)
0x283: PushEmpty(bool)
0x284: Stack[-1] = (bool) 0
0x285: PushEmpty(bool, object)
0x286: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x287: Call2 0x112a

0x288: Pop(1)
0x289: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28a: PushEmpty(bool, object)
0x28b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28c: Call2 0x11ba

0x28d: Pop(1)
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: Stack[-1] = (bool) 1
0x290: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x291: Push((int) 537187)
0x292: Push((int) 39031)
0x293: Push((int) 39030)
0x294: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x295: Pop(3)
0x296: PushEmpty(bool)
0x297: Stack[-1] = (bool) 0
0x298: PushEmpty(bool, object)
0x299: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29a: Call2 0x112a

0x29b: Pop(1)
0x29c: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29d: PushEmpty(bool, object)
0x29e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29f: Call2 0x11c4

0x2a0: Pop(1)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: Stack[-1] = (bool) 1
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a4: Push((int) 537199)
0x2a5: Push((int) 39043)
0x2a6: Push((int) 39042)
0x2a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2a8: Pop(3)
0x2a9: PushEmpty(bool)
0x2aa: Stack[-1] = (bool) 0
0x2ab: PushEmpty(bool, object)
0x2ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ad: Call2 0x112a

0x2ae: Pop(1)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b0: PushEmpty(bool, object)
0x2b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b2: Call2 0x11ce

0x2b3: Pop(1)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: Stack[-1] = (bool) 1
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b7: Push((int) 537209)
0x2b8: Push((int) 39053)
0x2b9: Push((int) 39052)
0x2ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2bb: Pop(3)
0x2bc: PushEmpty(bool)
0x2bd: Stack[-1] = (bool) 0
0x2be: PushEmpty(bool, object)
0x2bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c0: Call2 0x112a

0x2c1: Pop(1)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c3: PushEmpty(bool, object)
0x2c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c5: Call2 0x11d8

0x2c6: Pop(1)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Stack[-1] = (bool) 1
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ca: Push((int) 537219)
0x2cb: Push((int) 39063)
0x2cc: Push((int) 39062)
0x2cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ce: Pop(3)
0x2cf: PushEmpty(bool)
0x2d0: Stack[-1] = (bool) 0
0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d3: Call2 0x112a

0x2d4: Pop(1)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d6: PushEmpty(bool, object)
0x2d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d8: Call2 0x11e2

0x2d9: Pop(1)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: Stack[-1] = (bool) 1
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2dd: Push((int) 537226)
0x2de: Push((int) 39070)
0x2df: Push((int) 39069)
0x2e0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e1: Pop(3)
0x2e2: Push((int) 537237)
0x2e3: Push((int) -1)
0x2e4: Push((int) 39080)
0x2e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e6: Pop(3)
0x2e7: PushEmpty(bool)
0x2e8: Stack[-1] = (bool) 1
0x2e9: PushEmpty(bool, object)
0x2ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2eb: Call2 0x1136

0x2ec: Pop(1)
0x2ed: IF (Stack[-1] == 1) GOTO 0x2f4; Pop(1)

0x2ee: PushEmpty(bool, object)
0x2ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f0: Call2 0x112a

0x2f1: Pop(1)
0x2f2: IF (Stack[-1] == 1) GOTO 0x2f4; Pop(1)

0x2f3: Stack[-1] = (bool) 0
0x2f4: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f5: Push((int) 537238)
0x2f6: Push((int) -1)
0x2f7: Push((int) 39081)
0x2f8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f9: Pop(3)
0x2fa: Return(); Pop(0)

0x2fb: Push((int) 39070)
0x2fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x2fe: PushEmpty(string)
0x2ff: Stack[-1] = "Neutral" // @poff=89
0x300: Call2 0x18e

0x301: Pop(1)
0x302: Push((int) 537227)
0x303: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x304: Pop(1)
0x305: @@@ ClearReplies(); Obj=0 // @poff=116
0x306: Pop(0)
0x307: Push((int) 537228)
0x308: Push((int) 39072)
0x309: Push((int) 39071)
0x30a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x30b: Pop(3)
0x30c: Push((int) 537235)
0x30d: Push((int) -1)
0x30e: Push((int) 39078)
0x30f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x310: Pop(3)
0x311: Push((int) 537236)
0x312: Push((int) -1)
0x313: Push((int) 39079)
0x314: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x315: Pop(3)
0x316: Return(); Pop(0)

0x317: Push((int) 39072)
0x318: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x31a: PushEmpty(string)
0x31b: Stack[-1] = "Neutral" // @poff=89
0x31c: Call2 0x18e

0x31d: Pop(1)
0x31e: Push((int) 537229)
0x31f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x320: Pop(1)
0x321: @@@ ClearReplies(); Obj=0 // @poff=116
0x322: Pop(0)
0x323: Push((int) 537230)
0x324: Push((int) 39074)
0x325: Push((int) 39073)
0x326: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x327: Pop(3)
0x328: Push((int) 537234)
0x329: Push((int) -1)
0x32a: Push((int) 39077)
0x32b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x32c: Pop(3)
0x32d: Return(); Pop(0)

0x32e: Push((int) 39074)
0x32f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x331: PushEmpty(string)
0x332: Stack[-1] = "Neutral" // @poff=89
0x333: Call2 0x18e

0x334: Pop(1)
0x335: Push((int) 537231)
0x336: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x337: Pop(1)
0x338: @@@ ClearReplies(); Obj=0 // @poff=116
0x339: Pop(0)
0x33a: Push((int) 537232)
0x33b: Push((int) -1)
0x33c: Push((int) 39075)
0x33d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x33e: Pop(3)
0x33f: Push((int) 537233)
0x340: Push((int) -1)
0x341: Push((int) 39076)
0x342: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x343: Pop(3)
0x344: Return(); Pop(0)

0x345: Push((int) 39063)
0x346: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x348: PushEmpty(string)
0x349: Stack[-1] = "Neutral" // @poff=89
0x34a: Call2 0x18e

0x34b: Pop(1)
0x34c: Push((int) 537220)
0x34d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x34e: Pop(1)
0x34f: @@@ ClearReplies(); Obj=0 // @poff=116
0x350: Pop(0)
0x351: Push((int) 537221)
0x352: Push((int) 39065)
0x353: Push((int) 39064)
0x354: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x355: Pop(3)
0x356: Push((int) 537225)
0x357: Push((int) -1)
0x358: Push((int) 39068)
0x359: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x35a: Pop(3)
0x35b: Return(); Pop(0)

0x35c: Push((int) 39065)
0x35d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x35f: PushEmpty(string)
0x360: Stack[-1] = "Neutral" // @poff=89
0x361: Call2 0x18e

0x362: Pop(1)
0x363: Push((int) 537222)
0x364: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x365: Pop(1)
0x366: @@@ ClearReplies(); Obj=0 // @poff=116
0x367: Pop(0)
0x368: Push((int) 537223)
0x369: Push((int) -1)
0x36a: Push((int) 39066)
0x36b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36c: Pop(3)
0x36d: Push((int) 537224)
0x36e: Push((int) -1)
0x36f: Push((int) 39067)
0x370: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x371: Pop(3)
0x372: Return(); Pop(0)

0x373: Push((int) 39053)
0x374: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x376: PushEmpty(string)
0x377: Stack[-1] = "Neutral" // @poff=89
0x378: Call2 0x18e

0x379: Pop(1)
0x37a: Push((int) 537210)
0x37b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x37c: Pop(1)
0x37d: @@@ ClearReplies(); Obj=0 // @poff=116
0x37e: Pop(0)
0x37f: Push((int) 537211)
0x380: Push((int) 39055)
0x381: Push((int) 39054)
0x382: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x383: Pop(3)
0x384: Push((int) 537218)
0x385: Push((int) -1)
0x386: Push((int) 39061)
0x387: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x388: Pop(3)
0x389: Return(); Pop(0)

0x38a: Push((int) 39055)
0x38b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x38d: PushEmpty(string)
0x38e: Stack[-1] = "Neutral" // @poff=89
0x38f: Call2 0x18e

0x390: Pop(1)
0x391: Push((int) 537212)
0x392: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x393: Pop(1)
0x394: @@@ ClearReplies(); Obj=0 // @poff=116
0x395: Pop(0)
0x396: Push((int) 537213)
0x397: Push((int) 39057)
0x398: Push((int) 39056)
0x399: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39a: Pop(3)
0x39b: Push((int) 537217)
0x39c: Push((int) -1)
0x39d: Push((int) 39060)
0x39e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x39f: Pop(3)
0x3a0: Return(); Pop(0)

0x3a1: Push((int) 39057)
0x3a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3a4: PushEmpty(string)
0x3a5: Stack[-1] = "Neutral" // @poff=89
0x3a6: Call2 0x18e

0x3a7: Pop(1)
0x3a8: Push((int) 537214)
0x3a9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3aa: Pop(1)
0x3ab: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ac: Pop(0)
0x3ad: Push((int) 537215)
0x3ae: Push((int) -1)
0x3af: Push((int) 39058)
0x3b0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b1: Pop(3)
0x3b2: Push((int) 537216)
0x3b3: Push((int) -1)
0x3b4: Push((int) 39059)
0x3b5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b6: Pop(3)
0x3b7: Return(); Pop(0)

0x3b8: Push((int) 39043)
0x3b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3bb: PushEmpty(string)
0x3bc: Stack[-1] = "Neutral" // @poff=89
0x3bd: Call2 0x18e

0x3be: Pop(1)
0x3bf: Push((int) 537200)
0x3c0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c1: Pop(1)
0x3c2: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c3: Pop(0)
0x3c4: Push((int) 537201)
0x3c5: Push((int) 39045)
0x3c6: Push((int) 39044)
0x3c7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c8: Pop(3)
0x3c9: Push((int) 537208)
0x3ca: Push((int) -1)
0x3cb: Push((int) 39051)
0x3cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3cd: Pop(3)
0x3ce: Return(); Pop(0)

0x3cf: Push((int) 39045)
0x3d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3d2: PushEmpty(string)
0x3d3: Stack[-1] = "Neutral" // @poff=89
0x3d4: Call2 0x18e

0x3d5: Pop(1)
0x3d6: Push((int) 537202)
0x3d7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3d8: Pop(1)
0x3d9: @@@ ClearReplies(); Obj=0 // @poff=116
0x3da: Pop(0)
0x3db: Push((int) 537203)
0x3dc: Push((int) 39047)
0x3dd: Push((int) 39046)
0x3de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3df: Pop(3)
0x3e0: Push((int) 537207)
0x3e1: Push((int) -1)
0x3e2: Push((int) 39050)
0x3e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e4: Pop(3)
0x3e5: Return(); Pop(0)

0x3e6: Push((int) 39047)
0x3e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3e9: PushEmpty(string)
0x3ea: Stack[-1] = "Neutral" // @poff=89
0x3eb: Call2 0x18e

0x3ec: Pop(1)
0x3ed: Push((int) 537204)
0x3ee: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ef: Pop(1)
0x3f0: @@@ ClearReplies(); Obj=0 // @poff=116
0x3f1: Pop(0)
0x3f2: Push((int) 537205)
0x3f3: Push((int) -1)
0x3f4: Push((int) 39048)
0x3f5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f6: Pop(3)
0x3f7: Push((int) 537206)
0x3f8: Push((int) -1)
0x3f9: Push((int) 39049)
0x3fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3fb: Pop(3)
0x3fc: Return(); Pop(0)

0x3fd: Push((int) 39031)
0x3fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x400: PushEmpty(string)
0x401: Stack[-1] = "Neutral" // @poff=89
0x402: Call2 0x18e

0x403: Pop(1)
0x404: Push((int) 537188)
0x405: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x406: Pop(1)
0x407: @@@ ClearReplies(); Obj=0 // @poff=116
0x408: Pop(0)
0x409: Push((int) 537189)
0x40a: Push((int) 39033)
0x40b: Push((int) 39032)
0x40c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40d: Pop(3)
0x40e: Push((int) 537193)
0x40f: Push((int) 39037)
0x410: Push((int) 39036)
0x411: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x412: Pop(3)
0x413: Return(); Pop(0)

0x414: Push((int) 39037)
0x415: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x417: PushEmpty(string)
0x418: Stack[-1] = "Neutral" // @poff=89
0x419: Call2 0x18e

0x41a: Pop(1)
0x41b: Push((int) 537194)
0x41c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x41d: Pop(1)
0x41e: @@@ ClearReplies(); Obj=0 // @poff=116
0x41f: Pop(0)
0x420: Push((int) 537195)
0x421: Push((int) 39039)
0x422: Push((int) 39038)
0x423: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x424: Pop(3)
0x425: Push((int) 537198)
0x426: Push((int) -1)
0x427: Push((int) 39041)
0x428: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x429: Pop(3)
0x42a: Return(); Pop(0)

0x42b: Push((int) 39039)
0x42c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x42e: PushEmpty(string)
0x42f: Stack[-1] = "Neutral" // @poff=89
0x430: Call2 0x18e

0x431: Pop(1)
0x432: Push((int) 537196)
0x433: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x434: Pop(1)
0x435: @@@ ClearReplies(); Obj=0 // @poff=116
0x436: Pop(0)
0x437: Push((int) 537197)
0x438: Push((int) -1)
0x439: Push((int) 39040)
0x43a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x43b: Pop(3)
0x43c: Return(); Pop(0)

0x43d: Push((int) 39033)
0x43e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x440: PushEmpty(string)
0x441: Stack[-1] = "Neutral" // @poff=89
0x442: Call2 0x18e

0x443: Pop(1)
0x444: Push((int) 537190)
0x445: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x446: Pop(1)
0x447: @@@ ClearReplies(); Obj=0 // @poff=116
0x448: Pop(0)
0x449: Push((int) 537191)
0x44a: Push((int) -1)
0x44b: Push((int) 39034)
0x44c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44d: Pop(3)
0x44e: Push((int) 537192)
0x44f: Push((int) -1)
0x450: Push((int) 39035)
0x451: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x452: Pop(3)
0x453: Return(); Pop(0)

0x454: Push((int) 39019)
0x455: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x457: PushEmpty(string)
0x458: Stack[-1] = "Neutral" // @poff=89
0x459: Call2 0x18e

0x45a: Pop(1)
0x45b: Push((int) 537176)
0x45c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x45d: Pop(1)
0x45e: @@@ ClearReplies(); Obj=0 // @poff=116
0x45f: Pop(0)
0x460: Push((int) 537177)
0x461: Push((int) 39021)
0x462: Push((int) 39020)
0x463: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x464: Pop(3)
0x465: Push((int) 537186)
0x466: Push((int) -1)
0x467: Push((int) 39029)
0x468: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x469: Pop(3)
0x46a: Return(); Pop(0)

0x46b: Push((int) 39021)
0x46c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x46e: PushEmpty(string)
0x46f: Stack[-1] = "Neutral" // @poff=89
0x470: Call2 0x18e

0x471: Pop(1)
0x472: Push((int) 537178)
0x473: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x474: Pop(1)
0x475: @@@ ClearReplies(); Obj=0 // @poff=116
0x476: Pop(0)
0x477: Push((int) 537179)
0x478: Push((int) 39023)
0x479: Push((int) 39022)
0x47a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x47b: Pop(3)
0x47c: Push((int) 537185)
0x47d: Push((int) -1)
0x47e: Push((int) 39028)
0x47f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x480: Pop(3)
0x481: Return(); Pop(0)

0x482: Push((int) 39023)
0x483: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x485: PushEmpty(string)
0x486: Stack[-1] = "Neutral" // @poff=89
0x487: Call2 0x18e

0x488: Pop(1)
0x489: Push((int) 537180)
0x48a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x48b: Pop(1)
0x48c: @@@ ClearReplies(); Obj=0 // @poff=116
0x48d: Pop(0)
0x48e: Push((int) 537181)
0x48f: Push((int) 39025)
0x490: Push((int) 39024)
0x491: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x492: Pop(3)
0x493: Push((int) 537184)
0x494: Push((int) -1)
0x495: Push((int) 39027)
0x496: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x497: Pop(3)
0x498: Return(); Pop(0)

0x499: Push((int) 39025)
0x49a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x49c: PushEmpty(string)
0x49d: Stack[-1] = "Neutral" // @poff=89
0x49e: Call2 0x18e

0x49f: Pop(1)
0x4a0: Push((int) 537182)
0x4a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4a2: Pop(1)
0x4a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x4a4: Pop(0)
0x4a5: Push((int) 537183)
0x4a6: Push((int) -1)
0x4a7: Push((int) 39026)
0x4a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4a9: Pop(3)
0x4aa: Return(); Pop(0)

0x4ab: Push((int) 38999)
0x4ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4ae: PushEmpty(string)
0x4af: Stack[-1] = "Neutral" // @poff=89
0x4b0: Call2 0x18e

0x4b1: Pop(1)
0x4b2: Push((int) 537158)
0x4b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4b4: Pop(1)
0x4b5: @@@ ClearReplies(); Obj=0 // @poff=116
0x4b6: Pop(0)
0x4b7: Push((int) 537159)
0x4b8: Push((int) 39001)
0x4b9: Push((int) 39000)
0x4ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4bb: Pop(3)
0x4bc: Push((int) 537170)
0x4bd: Push((int) 39012)
0x4be: Push((int) 39011)
0x4bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4c0: Pop(3)
0x4c1: Push((int) 537174)
0x4c2: Push((int) -1)
0x4c3: Push((int) 39017)
0x4c4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4c5: Pop(3)
0x4c6: Return(); Pop(0)

0x4c7: Push((int) 39012)
0x4c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4ca: PushEmpty(string)
0x4cb: Stack[-1] = "Neutral" // @poff=89
0x4cc: Call2 0x18e

0x4cd: Pop(1)
0x4ce: Push((int) 537171)
0x4cf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4d0: Pop(1)
0x4d1: @@@ ClearReplies(); Obj=0 // @poff=116
0x4d2: Pop(0)
0x4d3: Push((int) 537172)
0x4d4: Push((int) 39001)
0x4d5: Push((int) 39013)
0x4d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4d7: Pop(3)
0x4d8: Push((int) 537173)
0x4d9: Push((int) 39001)
0x4da: Push((int) 39015)
0x4db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4dc: Pop(3)
0x4dd: Return(); Pop(0)

0x4de: Push((int) 39001)
0x4df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4e1: PushEmpty(string)
0x4e2: Stack[-1] = "Neutral" // @poff=89
0x4e3: Call2 0x18e

0x4e4: Pop(1)
0x4e5: Push((int) 537160)
0x4e6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4e7: Pop(1)
0x4e8: @@@ ClearReplies(); Obj=0 // @poff=116
0x4e9: Pop(0)
0x4ea: Push((int) 537161)
0x4eb: Push((int) 39003)
0x4ec: Push((int) 39002)
0x4ed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ee: Pop(3)
0x4ef: Push((int) 537165)
0x4f0: Push((int) 39007)
0x4f1: Push((int) 39006)
0x4f2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4f3: Pop(3)
0x4f4: Return(); Pop(0)

0x4f5: Push((int) 39007)
0x4f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f7: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x4f8: PushEmpty(string)
0x4f9: Stack[-1] = "Neutral" // @poff=89
0x4fa: Call2 0x18e

0x4fb: Pop(1)
0x4fc: Push((int) 537166)
0x4fd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4fe: Pop(1)
0x4ff: @@@ ClearReplies(); Obj=0 // @poff=116
0x500: Pop(0)
0x501: Push((int) 537167)
0x502: Push((int) 39009)
0x503: Push((int) 39008)
0x504: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x505: Pop(3)
0x506: Return(); Pop(0)

0x507: Push((int) 39009)
0x508: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x50a: PushEmpty(string)
0x50b: Stack[-1] = "Neutral" // @poff=89
0x50c: Call2 0x18e

0x50d: Pop(1)
0x50e: Push((int) 537168)
0x50f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x510: Pop(1)
0x511: @@@ ClearReplies(); Obj=0 // @poff=116
0x512: Pop(0)
0x513: Push((int) 537169)
0x514: Push((int) -1)
0x515: Push((int) 39010)
0x516: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x517: Pop(3)
0x518: Return(); Pop(0)

0x519: Push((int) 39003)
0x51a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51b: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x51c: PushEmpty(string)
0x51d: Stack[-1] = "Neutral" // @poff=89
0x51e: Call2 0x18e

0x51f: Pop(1)
0x520: Push((int) 537162)
0x521: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x522: Pop(1)
0x523: @@@ ClearReplies(); Obj=0 // @poff=116
0x524: Pop(0)
0x525: Push((int) 537163)
0x526: Push((int) -1)
0x527: Push((int) 39004)
0x528: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x529: Pop(3)
0x52a: Push((int) 537164)
0x52b: Push((int) -1)
0x52c: Push((int) 39005)
0x52d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x52e: Pop(3)
0x52f: Return(); Pop(0)

0x530: Push((int) 38982)
0x531: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x533: PushEmpty(string)
0x534: Stack[-1] = "Neutral" // @poff=89
0x535: Call2 0x18e

0x536: Pop(1)
0x537: Push((int) 537141)
0x538: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x539: Pop(1)
0x53a: @@@ ClearReplies(); Obj=0 // @poff=116
0x53b: Pop(0)
0x53c: Push((int) 537142)
0x53d: Push((int) 38984)
0x53e: Push((int) 38983)
0x53f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x540: Pop(3)
0x541: Push((int) 537148)
0x542: Push((int) 38990)
0x543: Push((int) 38989)
0x544: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x545: Pop(3)
0x546: Push((int) 537156)
0x547: Push((int) -1)
0x548: Push((int) 38997)
0x549: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x54a: Pop(3)
0x54b: Return(); Pop(0)

0x54c: Push((int) 38990)
0x54d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54e: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x54f: PushEmpty(string)
0x550: Stack[-1] = "Neutral" // @poff=89
0x551: Call2 0x18e

0x552: Pop(1)
0x553: Push((int) 537149)
0x554: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x555: Pop(1)
0x556: @@@ ClearReplies(); Obj=0 // @poff=116
0x557: Pop(0)
0x558: Push((int) 537150)
0x559: Push((int) 38992)
0x55a: Push((int) 38991)
0x55b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x55c: Pop(3)
0x55d: Return(); Pop(0)

0x55e: Push((int) 38992)
0x55f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x561: PushEmpty(string)
0x562: Stack[-1] = "Neutral" // @poff=89
0x563: Call2 0x18e

0x564: Pop(1)
0x565: Push((int) 537151)
0x566: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x567: Pop(1)
0x568: @@@ ClearReplies(); Obj=0 // @poff=116
0x569: Pop(0)
0x56a: Push((int) 537152)
0x56b: Push((int) 38994)
0x56c: Push((int) 38993)
0x56d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x56e: Pop(3)
0x56f: Return(); Pop(0)

0x570: Push((int) 38994)
0x571: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x572: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x573: PushEmpty(string)
0x574: Stack[-1] = "Neutral" // @poff=89
0x575: Call2 0x18e

0x576: Pop(1)
0x577: Push((int) 537153)
0x578: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x579: Pop(1)
0x57a: @@@ ClearReplies(); Obj=0 // @poff=116
0x57b: Pop(0)
0x57c: Push((int) 537154)
0x57d: Push((int) -1)
0x57e: Push((int) 38995)
0x57f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x580: Pop(3)
0x581: Push((int) 537155)
0x582: Push((int) -1)
0x583: Push((int) 38996)
0x584: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x585: Pop(3)
0x586: Return(); Pop(0)

0x587: Push((int) 38984)
0x588: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x589: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x58a: PushEmpty(string)
0x58b: Stack[-1] = "Neutral" // @poff=89
0x58c: Call2 0x18e

0x58d: Pop(1)
0x58e: Push((int) 537143)
0x58f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x590: Pop(1)
0x591: @@@ ClearReplies(); Obj=0 // @poff=116
0x592: Pop(0)
0x593: Push((int) 537144)
0x594: Push((int) 38986)
0x595: Push((int) 38985)
0x596: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x597: Pop(3)
0x598: Return(); Pop(0)

0x599: Push((int) 38986)
0x59a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x59c: PushEmpty(string)
0x59d: Stack[-1] = "Neutral" // @poff=89
0x59e: Call2 0x18e

0x59f: Pop(1)
0x5a0: Push((int) 537145)
0x5a1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5a2: Pop(1)
0x5a3: @@@ ClearReplies(); Obj=0 // @poff=116
0x5a4: Pop(0)
0x5a5: Push((int) 537146)
0x5a6: Push((int) -1)
0x5a7: Push((int) 38987)
0x5a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5a9: Pop(3)
0x5aa: Push((int) 537147)
0x5ab: Push((int) -1)
0x5ac: Push((int) 38988)
0x5ad: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5ae: Pop(3)
0x5af: Return(); Pop(0)

0x5b0: Push((int) 38966)
0x5b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5b3: PushEmpty(string)
0x5b4: Stack[-1] = "Neutral" // @poff=89
0x5b5: Call2 0x18e

0x5b6: Pop(1)
0x5b7: Push((int) 537125)
0x5b8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b9: Pop(1)
0x5ba: @@@ ClearReplies(); Obj=0 // @poff=116
0x5bb: Pop(0)
0x5bc: Push((int) 537126)
0x5bd: Push((int) 38968)
0x5be: Push((int) 38967)
0x5bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5c0: Pop(3)
0x5c1: Push((int) 537130)
0x5c2: Push((int) 38972)
0x5c3: Push((int) 38971)
0x5c4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5c5: Pop(3)
0x5c6: Push((int) 537139)
0x5c7: Push((int) -1)
0x5c8: Push((int) 38980)
0x5c9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5ca: Pop(3)
0x5cb: Return(); Pop(0)

0x5cc: Push((int) 38972)
0x5cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5cf: PushEmpty(string)
0x5d0: Stack[-1] = "Neutral" // @poff=89
0x5d1: Call2 0x18e

0x5d2: Pop(1)
0x5d3: Push((int) 537131)
0x5d4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d5: Pop(1)
0x5d6: @@@ ClearReplies(); Obj=0 // @poff=116
0x5d7: Pop(0)
0x5d8: Push((int) 537132)
0x5d9: Push((int) 38974)
0x5da: Push((int) 38973)
0x5db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5dc: Pop(3)
0x5dd: Push((int) 537136)
0x5de: Push((int) 38978)
0x5df: Push((int) 38977)
0x5e0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5e1: Pop(3)
0x5e2: Return(); Pop(0)

0x5e3: Push((int) 38978)
0x5e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e5: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5e6: PushEmpty(string)
0x5e7: Stack[-1] = "Neutral" // @poff=89
0x5e8: Call2 0x18e

0x5e9: Pop(1)
0x5ea: Push((int) 537137)
0x5eb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5ec: Pop(1)
0x5ed: @@@ ClearReplies(); Obj=0 // @poff=116
0x5ee: Pop(0)
0x5ef: Push((int) 537138)
0x5f0: Push((int) -1)
0x5f1: Push((int) 38979)
0x5f2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5f3: Pop(3)
0x5f4: Return(); Pop(0)

0x5f5: Push((int) 38974)
0x5f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x5f8: PushEmpty(string)
0x5f9: Stack[-1] = "Neutral" // @poff=89
0x5fa: Call2 0x18e

0x5fb: Pop(1)
0x5fc: Push((int) 537133)
0x5fd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5fe: Pop(1)
0x5ff: @@@ ClearReplies(); Obj=0 // @poff=116
0x600: Pop(0)
0x601: Push((int) 537134)
0x602: Push((int) -1)
0x603: Push((int) 38975)
0x604: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x605: Pop(3)
0x606: Push((int) 537135)
0x607: Push((int) -1)
0x608: Push((int) 38976)
0x609: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x60a: Pop(3)
0x60b: Return(); Pop(0)

0x60c: Push((int) 38968)
0x60d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x60f: PushEmpty(string)
0x610: Stack[-1] = "Neutral" // @poff=89
0x611: Call2 0x18e

0x612: Pop(1)
0x613: Push((int) 537127)
0x614: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x615: Pop(1)
0x616: @@@ ClearReplies(); Obj=0 // @poff=116
0x617: Pop(0)
0x618: Push((int) 537128)
0x619: Push((int) -1)
0x61a: Push((int) 38969)
0x61b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x61c: Pop(3)
0x61d: Push((int) 537129)
0x61e: Push((int) -1)
0x61f: Push((int) 38970)
0x620: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x621: Pop(3)
0x622: Return(); Pop(0)

0x623: Push((int) 38945)
0x624: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x625: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x626: PushEmpty(string)
0x627: Stack[-1] = "Neutral" // @poff=89
0x628: Call2 0x18e

0x629: Pop(1)
0x62a: Push((int) 537105)
0x62b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x62c: Pop(1)
0x62d: @@@ ClearReplies(); Obj=0 // @poff=116
0x62e: Pop(0)
0x62f: Push((int) 537106)
0x630: Push((int) 38947)
0x631: Push((int) 38946)
0x632: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x633: Pop(3)
0x634: Push((int) 537123)
0x635: Push((int) -1)
0x636: Push((int) 38964)
0x637: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x638: Pop(3)
0x639: Return(); Pop(0)

0x63a: Push((int) 38947)
0x63b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x63d: PushEmpty(string)
0x63e: Stack[-1] = "Neutral" // @poff=89
0x63f: Call2 0x18e

0x640: Pop(1)
0x641: Push((int) 537107)
0x642: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x643: Pop(1)
0x644: @@@ ClearReplies(); Obj=0 // @poff=116
0x645: Pop(0)
0x646: Push((int) 537108)
0x647: Push((int) 38949)
0x648: Push((int) 38948)
0x649: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x64a: Pop(3)
0x64b: Push((int) 537116)
0x64c: Push((int) 38958)
0x64d: Push((int) 38957)
0x64e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x64f: Pop(3)
0x650: Return(); Pop(0)

0x651: Push((int) 38958)
0x652: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x653: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x654: PushEmpty(string)
0x655: Stack[-1] = "Neutral" // @poff=89
0x656: Call2 0x18e

0x657: Pop(1)
0x658: Push((int) 537117)
0x659: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x65a: Pop(1)
0x65b: @@@ ClearReplies(); Obj=0 // @poff=116
0x65c: Pop(0)
0x65d: Push((int) 537118)
0x65e: Push((int) 38960)
0x65f: Push((int) 38959)
0x660: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x661: Pop(3)
0x662: Push((int) 537122)
0x663: Push((int) -1)
0x664: Push((int) 38963)
0x665: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x666: Pop(3)
0x667: Return(); Pop(0)

0x668: Push((int) 38960)
0x669: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x66b: PushEmpty(string)
0x66c: Stack[-1] = "Neutral" // @poff=89
0x66d: Call2 0x18e

0x66e: Pop(1)
0x66f: Push((int) 537119)
0x670: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x671: Pop(1)
0x672: @@@ ClearReplies(); Obj=0 // @poff=116
0x673: Pop(0)
0x674: Push((int) 537120)
0x675: Push((int) -1)
0x676: Push((int) 38961)
0x677: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x678: Pop(3)
0x679: Push((int) 537121)
0x67a: Push((int) -1)
0x67b: Push((int) 38962)
0x67c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x67d: Pop(3)
0x67e: Return(); Pop(0)

0x67f: Push((int) 38949)
0x680: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x682: PushEmpty(string)
0x683: Stack[-1] = "Neutral" // @poff=89
0x684: Call2 0x18e

0x685: Pop(1)
0x686: Push((int) 537109)
0x687: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x688: Pop(1)
0x689: @@@ ClearReplies(); Obj=0 // @poff=116
0x68a: Pop(0)
0x68b: Push((int) 537110)
0x68c: Push((int) 38951)
0x68d: Push((int) 38950)
0x68e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x68f: Pop(3)
0x690: Push((int) 537115)
0x691: Push((int) 38951)
0x692: Push((int) 38955)
0x693: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x694: Pop(3)
0x695: Return(); Pop(0)

0x696: Push((int) 38951)
0x697: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x699: PushEmpty(string)
0x69a: Stack[-1] = "Neutral" // @poff=89
0x69b: Call2 0x18e

0x69c: Pop(1)
0x69d: Push((int) 537111)
0x69e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x69f: Pop(1)
0x6a0: @@@ ClearReplies(); Obj=0 // @poff=116
0x6a1: Pop(0)
0x6a2: Push((int) 537112)
0x6a3: Push((int) -1)
0x6a4: Push((int) 38952)
0x6a5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6a6: Pop(3)
0x6a7: Push((int) 537113)
0x6a8: Push((int) -1)
0x6a9: Push((int) 38953)
0x6aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6ab: Pop(3)
0x6ac: Push((int) 537114)
0x6ad: Push((int) -1)
0x6ae: Push((int) 38954)
0x6af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6b0: Pop(3)
0x6b1: Return(); Pop(0)

0x6b2: Push((int) 38929)
0x6b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b4: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6b5: PushEmpty(string)
0x6b6: Stack[-1] = "Neutral" // @poff=89
0x6b7: Call2 0x18e

0x6b8: Pop(1)
0x6b9: Push((int) 537090)
0x6ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6bb: Pop(1)
0x6bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x6bd: Pop(0)
0x6be: Push((int) 537091)
0x6bf: Push((int) 38931)
0x6c0: Push((int) 38930)
0x6c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c2: Pop(3)
0x6c3: Push((int) 537100)
0x6c4: Push((int) 38940)
0x6c5: Push((int) 38939)
0x6c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c7: Pop(3)
0x6c8: Push((int) 537103)
0x6c9: Push((int) -1)
0x6ca: Push((int) 38943)
0x6cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6cc: Pop(3)
0x6cd: Return(); Pop(0)

0x6ce: Push((int) 38940)
0x6cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6d1: PushEmpty(string)
0x6d2: Stack[-1] = "Neutral" // @poff=89
0x6d3: Call2 0x18e

0x6d4: Pop(1)
0x6d5: Push((int) 537101)
0x6d6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6d7: Pop(1)
0x6d8: @@@ ClearReplies(); Obj=0 // @poff=116
0x6d9: Pop(0)
0x6da: Push((int) 537102)
0x6db: Push((int) 38933)
0x6dc: Push((int) 38941)
0x6dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6de: Pop(3)
0x6df: Return(); Pop(0)

0x6e0: Push((int) 38931)
0x6e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6e3: PushEmpty(string)
0x6e4: Stack[-1] = "Neutral" // @poff=89
0x6e5: Call2 0x18e

0x6e6: Pop(1)
0x6e7: Push((int) 537092)
0x6e8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6e9: Pop(1)
0x6ea: @@@ ClearReplies(); Obj=0 // @poff=116
0x6eb: Pop(0)
0x6ec: Push((int) 537093)
0x6ed: Push((int) 38933)
0x6ee: Push((int) 38932)
0x6ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6f0: Pop(3)
0x6f1: Return(); Pop(0)

0x6f2: Push((int) 38933)
0x6f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f4: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x6f5: PushEmpty(string)
0x6f6: Stack[-1] = "Neutral" // @poff=89
0x6f7: Call2 0x18e

0x6f8: Pop(1)
0x6f9: Push((int) 537094)
0x6fa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6fb: Pop(1)
0x6fc: @@@ ClearReplies(); Obj=0 // @poff=116
0x6fd: Pop(0)
0x6fe: Push((int) 537095)
0x6ff: Push((int) 38935)
0x700: Push((int) 38934)
0x701: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x702: Pop(3)
0x703: Push((int) 537099)
0x704: Push((int) -1)
0x705: Push((int) 38938)
0x706: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x707: Pop(3)
0x708: Return(); Pop(0)

0x709: Push((int) 38935)
0x70a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x70c: PushEmpty(string)
0x70d: Stack[-1] = "Neutral" // @poff=89
0x70e: Call2 0x18e

0x70f: Pop(1)
0x710: Push((int) 537096)
0x711: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x712: Pop(1)
0x713: @@@ ClearReplies(); Obj=0 // @poff=116
0x714: Pop(0)
0x715: Push((int) 537097)
0x716: Push((int) -1)
0x717: Push((int) 38936)
0x718: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x719: Pop(3)
0x71a: Push((int) 537098)
0x71b: Push((int) -1)
0x71c: Push((int) 38937)
0x71d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71e: Pop(3)
0x71f: Return(); Pop(0)

0x720: Push((int) 38905)
0x721: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x722: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x723: PushEmpty(string)
0x724: Stack[-1] = "Neutral" // @poff=89
0x725: Call2 0x18e

0x726: Pop(1)
0x727: Push((int) 537066)
0x728: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x729: Pop(1)
0x72a: @@@ ClearReplies(); Obj=0 // @poff=116
0x72b: Pop(0)
0x72c: Push((int) 537067)
0x72d: Push((int) 38907)
0x72e: Push((int) 38906)
0x72f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x730: Pop(3)
0x731: Push((int) 537085)
0x732: Push((int) 38925)
0x733: Push((int) 38924)
0x734: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x735: Pop(3)
0x736: Return(); Pop(0)

0x737: Push((int) 38925)
0x738: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x739: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x73a: PushEmpty(string)
0x73b: Stack[-1] = "Neutral" // @poff=89
0x73c: Call2 0x18e

0x73d: Pop(1)
0x73e: Push((int) 537086)
0x73f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x740: Pop(1)
0x741: @@@ ClearReplies(); Obj=0 // @poff=116
0x742: Pop(0)
0x743: Push((int) 537087)
0x744: Push((int) -1)
0x745: Push((int) 38926)
0x746: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x747: Pop(3)
0x748: Push((int) 537088)
0x749: Push((int) -1)
0x74a: Push((int) 38927)
0x74b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x74c: Pop(3)
0x74d: Return(); Pop(0)

0x74e: Push((int) 38907)
0x74f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x751: PushEmpty(string)
0x752: Stack[-1] = "Neutral" // @poff=89
0x753: Call2 0x18e

0x754: Pop(1)
0x755: Push((int) 537068)
0x756: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x757: Pop(1)
0x758: @@@ ClearReplies(); Obj=0 // @poff=116
0x759: Pop(0)
0x75a: Push((int) 537069)
0x75b: Push((int) 38909)
0x75c: Push((int) 38908)
0x75d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x75e: Pop(3)
0x75f: Push((int) 537080)
0x760: Push((int) 38920)
0x761: Push((int) 38919)
0x762: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x763: Pop(3)
0x764: Return(); Pop(0)

0x765: Push((int) 38920)
0x766: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x768: PushEmpty(string)
0x769: Stack[-1] = "Neutral" // @poff=89
0x76a: Call2 0x18e

0x76b: Pop(1)
0x76c: Push((int) 537081)
0x76d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x76e: Pop(1)
0x76f: @@@ ClearReplies(); Obj=0 // @poff=116
0x770: Pop(0)
0x771: Push((int) 537082)
0x772: Push((int) 38922)
0x773: Push((int) 38921)
0x774: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x775: Pop(3)
0x776: Return(); Pop(0)

0x777: Push((int) 38922)
0x778: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x77a: PushEmpty(string)
0x77b: Stack[-1] = "Neutral" // @poff=89
0x77c: Call2 0x18e

0x77d: Pop(1)
0x77e: Push((int) 537083)
0x77f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x780: Pop(1)
0x781: @@@ ClearReplies(); Obj=0 // @poff=116
0x782: Pop(0)
0x783: Push((int) 537084)
0x784: Push((int) -1)
0x785: Push((int) 38923)
0x786: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x787: Pop(3)
0x788: Return(); Pop(0)

0x789: Push((int) 38909)
0x78a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78b: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x78c: PushEmpty(string)
0x78d: Stack[-1] = "Neutral" // @poff=89
0x78e: Call2 0x18e

0x78f: Pop(1)
0x790: Push((int) 537070)
0x791: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x792: Pop(1)
0x793: @@@ ClearReplies(); Obj=0 // @poff=116
0x794: Pop(0)
0x795: Push((int) 537071)
0x796: Push((int) 38911)
0x797: Push((int) 38910)
0x798: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x799: Pop(3)
0x79a: Push((int) 537077)
0x79b: Push((int) 38917)
0x79c: Push((int) 38916)
0x79d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x79e: Pop(3)
0x79f: Return(); Pop(0)

0x7a0: Push((int) 38917)
0x7a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a2: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7a3: PushEmpty(string)
0x7a4: Stack[-1] = "Neutral" // @poff=89
0x7a5: Call2 0x18e

0x7a6: Pop(1)
0x7a7: Push((int) 537078)
0x7a8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7a9: Pop(1)
0x7aa: @@@ ClearReplies(); Obj=0 // @poff=116
0x7ab: Pop(0)
0x7ac: Push((int) 537079)
0x7ad: Push((int) -1)
0x7ae: Push((int) 38918)
0x7af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b0: Pop(3)
0x7b1: Return(); Pop(0)

0x7b2: Push((int) 38911)
0x7b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b4: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7b5: PushEmpty(string)
0x7b6: Stack[-1] = "Neutral" // @poff=89
0x7b7: Call2 0x18e

0x7b8: Pop(1)
0x7b9: Push((int) 537072)
0x7ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7bb: Pop(1)
0x7bc: @@@ ClearReplies(); Obj=0 // @poff=116
0x7bd: Pop(0)
0x7be: Push((int) 537073)
0x7bf: Push((int) 38913)
0x7c0: Push((int) 38912)
0x7c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7c2: Pop(3)
0x7c3: Push((int) 537076)
0x7c4: Push((int) -1)
0x7c5: Push((int) 38915)
0x7c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7c7: Pop(3)
0x7c8: Return(); Pop(0)

0x7c9: Push((int) 38913)
0x7ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7cc: PushEmpty(string)
0x7cd: Stack[-1] = "Neutral" // @poff=89
0x7ce: Call2 0x18e

0x7cf: Pop(1)
0x7d0: Push((int) 537074)
0x7d1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7d2: Pop(1)
0x7d3: @@@ ClearReplies(); Obj=0 // @poff=116
0x7d4: Pop(0)
0x7d5: Push((int) 537075)
0x7d6: Push((int) -1)
0x7d7: Push((int) 38914)
0x7d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7d9: Pop(3)
0x7da: Return(); Pop(0)

0x7db: Push((int) 38902)
0x7dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7de: PushEmpty(string)
0x7df: Stack[-1] = "Neutral" // @poff=89
0x7e0: Call2 0x18e

0x7e1: Pop(1)
0x7e2: Push((int) 537063)
0x7e3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7e4: Pop(1)
0x7e5: @@@ ClearReplies(); Obj=0 // @poff=116
0x7e6: Pop(0)
0x7e7: Push((int) 537064)
0x7e8: Push((int) -1)
0x7e9: Push((int) 38903)
0x7ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7eb: Pop(3)
0x7ec: Return(); Pop(0)

0x7ed: Push((int) 38893)
0x7ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ef: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x7f0: PushEmpty(string)
0x7f1: Stack[-1] = "Neutral" // @poff=89
0x7f2: Call2 0x18e

0x7f3: Pop(1)
0x7f4: Push((int) 537054)
0x7f5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x7f6: Pop(1)
0x7f7: @@@ ClearReplies(); Obj=0 // @poff=116
0x7f8: Pop(0)
0x7f9: PushEmpty(bool, object)
0x7fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7fb: Call2 0x1142

0x7fc: Pop(1)
0x7fd: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7fe: Push((int) 537055)
0x7ff: Push((int) -1)
0x800: Push((int) 38894)
0x801: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x802: Pop(3)
0x803: PushEmpty(bool, object)
0x804: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x805: Call2 0x114c

0x806: Pop(1)
0x807: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x808: Push((int) 537056)
0x809: Push((int) -1)
0x80a: Push((int) 38895)
0x80b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80c: Pop(3)
0x80d: PushEmpty(bool, object)
0x80e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80f: Call2 0x1156

0x810: Pop(1)
0x811: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x812: Push((int) 537057)
0x813: Push((int) -1)
0x814: Push((int) 38896)
0x815: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x816: Pop(3)
0x817: PushEmpty(bool, object)
0x818: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x819: Call2 0x1160

0x81a: Pop(1)
0x81b: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x81c: Push((int) 537058)
0x81d: Push((int) -1)
0x81e: Push((int) 38897)
0x81f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x820: Pop(3)
0x821: PushEmpty(bool, object)
0x822: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x823: Call2 0x116a

0x824: Pop(1)
0x825: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x826: Push((int) 537059)
0x827: Push((int) -1)
0x828: Push((int) 38898)
0x829: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x82a: Pop(3)
0x82b: PushEmpty(bool, object)
0x82c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82d: Call2 0x1174

0x82e: Pop(1)
0x82f: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x830: Push((int) 537060)
0x831: Push((int) -1)
0x832: Push((int) 38899)
0x833: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x834: Pop(3)
0x835: Push((int) 537061)
0x836: Push((int) -1)
0x837: Push((int) 38900)
0x838: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x839: Pop(3)
0x83a: Return(); Pop(0)

0x83b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x83c: PushEmpty(bool)
0x83d: Call2 0x1519

0x83e: Pop(0)
0x83f: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x840: @ lshStopAnimation()
0x841: Pop(0)
0x842: GOTO 0x845

0x843: @ StopAnimation()
0x844: Pop(0)
0x845: Return(); Pop(0)

0x846: GOTO 0x1a5

0x847: Return(); Pop(0)

0x848: PushEmpty()
0x849: EventDisable(0)
0x84a: PushEmpty(object)
0x84b: Stack[-2] = Stack[-1]
0x84c: Call2 0x869

0x84d: Pop(1)
0x84e: PushEmpty(object)
0x84f: Stack[-2] = Stack[-1]
0x850: Call2 0x15a0

0x851: Pop(1)
0x852: EventEnable(0)
0x853: @ Hold()
0x854: Pop(0)
0x855: GOTO 0x853

0x856: Return(); Pop(0)

0x857: PushEmpty(int, int)
0x858: PushEmpty(int, object)
0x859: Stack[-5] = Stack[-1]
0x85a: Call2 0x14e1

0x85b: Stack[-2] = Stack[-3]
0x85c: Pop(2)
0x85d: Push((int) 0)
0x85e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x85f: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x860: PushEmpty(object)
0x861: Stack[-4] = Stack[-1]
0x862: Call2 0x14e4

0x863: Pop(1)
0x864: Return(); Pop(2)

0x865: PushEmpty()
0x866: Call2 0x14ea

0x867: Pop(0)
0x868: Return(); Pop(0)

0x869: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x86a: Pop(0); PushNull((bool) Stack[-21] == 0)
0x86b: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x86c: PushEmpty(string)
0x86d: Stack[-1] = "fdie" // @poff=156
0x86e: Call2 0x8c4

0x86f: Pop(1)
0x870: GOTO 0x8c3

0x871: @@ GetPosition(Stack[-10]); Obj=21 // @poff=166
0x872: Pop(0)
0x873: @ GetPosition(Stack[-9])
0x874: Pop(0)
0x875: @ GetDirection(Stack[-8])
0x876: Pop(0)
0x877: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x878: Push(CvectorIndex(Stack[-7], 0))
0x879: Push(CvectorIndex(Stack[-9], 0))
0x87a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x87b: Push(CvectorIndex(Stack[-8], 2))
0x87c: Push(CvectorIndex(Stack[-10], 2))
0x87d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x87e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x87f: Push((int) 0)
0x880: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x881: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x882: Stack[-6] = "fdie" // @poff=156
0x883: GOTO 0x885

0x884: Stack[-6] = "bdie" // @poff=178
0x885: @ RemoveRTEnvelope()
0x886: Pop(0)
0x887: @ SetDeathState()
0x888: Pop(0)
0x889: @ Stop()
0x88a: Pop(0)
0x88b: @ StopAsync()
0x88c: Pop(0)
0x88d: Stack[-21] = Stack[-5]
0x88e: Push("GetScriptProperty") // @poff=188
0x88f: Push((int) 2)
0x890: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x891: IF (Stack[-1] == 0) GOTO 0x89d; Pop(1)

0x892: Push("Owner") // @poff=224
0x893: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=236
0x894: Pop(1)
0x895: Push(Stack[-4])
0x896: IF (Stack[-1] == 0) GOTO 0x89d; Pop(1)

0x897: Push("Owner") // @poff=224
0x898: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=254
0x899: Pop(1)
0x89a: Pop(0); PushNull((bool) Stack[-5] == 0)
0x89b: IF (Stack[-1] == 0) GOTO 0x89d; Pop(1)

0x89c: Stack[-21] = Stack[-5]
0x89d: Push("@GetEyesHeight") // @poff=272
0x89e: Push((int) 1)
0x89f: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x8a0: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x8a1: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=302
0x8a2: Pop(0)
0x8a3: Stack[-1] = [0.0, 0.0, 0.0]
0x8a4: Push(CvectorIndex(Stack[-1], 1))
0x8a5: Stack[-3] = Stack[-1]
0x8a6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x8a7: Push("head") // @poff=316
0x8a8: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x8a9: Pop(1)
0x8aa: Stack[-3] = (bool) 1
0x8ab: GOTO 0x8ad

0x8ac: Stack[-3] = (bool) 0
0x8ad: PushEmpty(string)
0x8ae: Stack[-7] = Stack[-1]
0x8af: Call2 0x1042

0x8b0: Pop(1)
0x8b1: Push("all") // @poff=138
0x8b2: @ PlayAnimation(Stack[-1], Stack[-7])
0x8b3: Pop(1)
0x8b4: @ WaitForAnimEnd()
0x8b5: Pop(0)
0x8b6: Push(Stack[-3])
0x8b7: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8b8: @ StopAsync()
0x8b9: Pop(0)
0x8ba: Push("head") // @poff=316
0x8bb: @ UnlookAsync(Stack[-1])
0x8bc: Pop(1)
0x8bd: Push("all") // @poff=138
0x8be: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x8bf: Pop(1)
0x8c0: @ RemoveEnvelope()
0x8c1: Pop(0)
0x8c2: Stack[-5] = 0
0x8c3: Return(); Pop(20)

0x8c4: PushEmpty()
0x8c5: @ RemoveRTEnvelope()
0x8c6: Pop(0)
0x8c7: @ SetDeathState()
0x8c8: Pop(0)
0x8c9: @ Stop()
0x8ca: Pop(0)
0x8cb: @ StopAsync()
0x8cc: Pop(0)
0x8cd: @ StopSecondaryAnimation()
0x8ce: Pop(0)
0x8cf: PushEmpty(string)
0x8d0: Stack[-2] = Stack[-1]
0x8d1: Call2 0x1042

0x8d2: Pop(1)
0x8d3: Push("all") // @poff=138
0x8d4: @ PlayAnimation(Stack[-1], Stack[-2])
0x8d5: Pop(1)
0x8d6: @ WaitForAnimEnd()
0x8d7: Pop(0)
0x8d8: Push("all") // @poff=138
0x8d9: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x8da: Pop(1)
0x8db: @ RemoveEnvelope()
0x8dc: Pop(0)
0x8dd: Return(); Pop(0)

0x8de: PushEmpty()
0x8df: Return(); Pop(0)

0x8e0: PushEmpty()
0x8e1: Return(); Pop(0)

0x8e2: PushEmpty()
0x8e3: Return(); Pop(0)

0x8e4: Push((bool) 1)
0x8e5: @ SensePlayerOnly(Stack[-1])
0x8e6: Pop(1)
0x8e7: PushEmpty()
0x8e8: Call2 0x151b

0x8e9: Pop(0)
0x8ea: PushEmpty()
0x8eb: Call2 0x8f3

0x8ec: Pop(0)
0x8ed: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8ee: PushEmpty()
0x8ef: Call2 0x9f8

0x8f0: Pop(0)
0x8f1: GOTO 0x8ed

0x8f2: Return(); Pop(0)

0x8f3: PushEmpty(bool)
0x8f4: Call2 0xfc9

0x8f5: Pop(0)
0x8f6: Pop(1); Push((bool) Stack[-1] == 0)
0x8f7: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f8: PushEmpty()
0x8f9: Call2 0x14ea

0x8fa: Pop(0)
0x8fb: Return(); Pop(0)

0x8fc: PushEmpty(int, int)
0x8fd: PushEmpty(int, object)
0x8fe: Stack[-5] = Stack[-1]
0x8ff: Call2 0x14e1

0x900: Stack[-2] = Stack[-3]
0x901: Pop(2)
0x902: Push((int) 0)
0x903: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x904: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x905: Push((int) 1)
0x906: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x907: IF (Stack[-1] == 0) GOTO 0x90b; Pop(1)

0x908: PushEmpty()
0x909: Call2 0x9b7

0x90a: Pop(0)
0x90b: PushEmpty(object)
0x90c: Stack[-4] = Stack[-1]
0x90d: Call2 0x14e4

0x90e: Pop(1)
0x90f: Return(); Pop(2)

0x910: PushEmpty(int, int)
0x911: PushEmpty(object)
0x912: Stack[-4] = Stack[-1]
0x913: Call2 0x141e

0x914: Pop(1)
0x915: PushEmpty(int, object)
0x916: Stack[-5] = Stack[-1]
0x917: Call2 0x1471

0x918: Stack[-2] = Stack[-3]
0x919: Pop(2)
0x91a: Push((int) 0)
0x91b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x91d: Push((int) 1)
0x91e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x91f: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x920: PushEmpty()
0x921: Call2 0x9b7

0x922: Pop(0)
0x923: PushEmpty(object)
0x924: Stack[-4] = Stack[-1]
0x925: Call2 0x147b

0x926: Pop(1)
0x927: Return(); Pop(2)

0x928: PushEmpty(int, int)
0x929: PushEmpty(bool, object, object, bool)
0x92a: Stack[-9] = Stack[-3]
0x92b: Stack[-8] = Stack[-2]
0x92c: Stack[-7] = Stack[-1]
0x92d: Call2 0x1597

0x92e: Pop(3)
0x92f: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x930: PushEmpty(int, object, bool)
0x931: Stack[-8] = Stack[-2]
0x932: Stack[-6] = Stack[-1]
0x933: Call2 0x1483

0x934: Stack[-3] = Stack[-4]
0x935: Pop(3)
0x936: Push((int) 0)
0x937: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x938: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x939: Push((int) 1)
0x93a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x93b: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x93c: PushEmpty()
0x93d: Call2 0x9b7

0x93e: Pop(0)
0x93f: PushEmpty(object)
0x940: Stack[-6] = Stack[-1]
0x941: Call2 0x148d

0x942: Pop(1)
0x943: Return(); Pop(2)

0x944: PushEmpty(int, int)
0x945: PushEmpty(int, object)
0x946: Stack[-5] = Stack[-1]
0x947: Call2 0x14d7

0x948: Stack[-2] = Stack[-3]
0x949: Pop(2)
0x94a: Push((int) 0)
0x94b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x94c: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x94d: Push((int) 1)
0x94e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x94f: IF (Stack[-1] == 0) GOTO 0x953; Pop(1)

0x950: PushEmpty()
0x951: Call2 0x9b7

0x952: Pop(0)
0x953: PushEmpty(object)
0x954: Stack[-4] = Stack[-1]
0x955: Call2 0x14da

0x956: Pop(1)
0x957: Return(); Pop(2)

0x958: PushEmpty(int, int)
0x959: PushEmpty(bool, object, string)
0x95a: Stack[-7] = Stack[-2]
0x95b: Stack[-6] = Stack[-1]
0x95c: Call2 0x13c8

0x95d: Pop(2)
0x95e: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x95f: PushEmpty()
0x960: Call2 0x9b7

0x961: Pop(0)
0x962: PushEmpty(object, string)
0x963: Stack[-6] = Stack[-2]
0x964: Stack[-5] = Stack[-1]
0x965: Call2 0x13e8

0x966: Pop(2)
0x967: GOTO 0x97c

0x968: PushEmpty(int, string, object)
0x969: Stack[-6] = Stack[-2]
0x96a: Stack[-7] = Stack[-1]
0x96b: Call2 0x14dc

0x96c: Stack[-3] = Stack[-4]
0x96d: Pop(3)
0x96e: Push((int) 0)
0x96f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x970: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x971: Push((int) 1)
0x972: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x973: IF (Stack[-1] == 0) GOTO 0x977; Pop(1)

0x974: PushEmpty()
0x975: Call2 0x9b7

0x976: Pop(0)
0x977: PushEmpty(string, object)
0x978: Stack[-5] = Stack[-2]
0x979: Stack[-6] = Stack[-1]
0x97a: Call2 0x14df

0x97b: Pop(2)
0x97c: Return(); Pop(2)

0x97d: PushEmpty()
0x97e: PushEmpty(bool, string)
0x97f: Stack[-3] = Stack[-1]
0x980: Call2 0x142b

0x981: Pop(1)
0x982: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x983: PushEmpty()
0x984: Call2 0x9b7

0x985: Pop(0)
0x986: PushEmpty(string)
0x987: Stack[-2] = Stack[-1]
0x988: Call2 0x143b

0x989: Pop(1)
0x98a: Return(); Pop(0)

0x98b: PushEmpty()
0x98c: PushEmpty(bool, object)
0x98d: Stack[-3] = Stack[-1]
0x98e: Call2 0x1401

0x98f: Pop(1)
0x990: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x991: PushEmpty()
0x992: Call2 0x9b7

0x993: Pop(0)
0x994: PushEmpty(object)
0x995: Stack[-2] = Stack[-1]
0x996: Call2 0x1418

0x997: Pop(1)
0x998: GOTO 0x99d

0x999: PushEmpty(object)
0x99a: Stack[-2] = Stack[-1]
0x99b: Call2 0x9d0

0x99c: Pop(1)
0x99d: Return(); Pop(0)

0x99e: PushEmpty()
0x99f: PushEmpty(object)
0x9a0: Stack[-2] = Stack[-1]
0x9a1: Call2 0x9d0

0x9a2: Pop(1)
0x9a3: Return(); Pop(0)

0x9a4: PushEmpty()
0x9a5: Push((int) 110)
0x9a6: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x9a7: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x9a8: Return(); Pop(0)

0x9a9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x9aa: Push((int) 110)
0x9ab: @ KillTimer(Stack[-1])
0x9ac: Pop(1)
0x9ad: @ ResetAAS()
0x9ae: Pop(0)
0x9af: Return(); Pop(0)

0x9b0: PushEmpty()
0x9b1: Call2 0x9b7

0x9b2: Pop(0)
0x9b3: PushEmpty()
0x9b4: Call2 0x14ea

0x9b5: Pop(0)
0x9b6: Return(); Pop(0)

0x9b7: Push((int) 110)
0x9b8: @ KillTimer(Stack[-1])
0x9b9: Pop(1)
0x9ba: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x9bb: PushEmpty()
0x9bc: Call2 0xa3f

0x9bd: Pop(0)
0x9be: Return(); Pop(0)

0x9bf: Push((int) 110)
0x9c0: @ KillTimer(Stack[-1])
0x9c1: Pop(1)
0x9c2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x9c3: PushEmpty()
0x9c4: Call2 0xa46

0x9c5: Pop(0)
0x9c6: Return(); Pop(0)

0x9c7: PushEmpty()
0x9c8: PushEmpty()
0x9c9: Call2 0x9b7

0x9ca: Pop(0)
0x9cb: PushEmpty(object)
0x9cc: Stack[-2] = Stack[-1]
0x9cd: Call2 0x13b0

0x9ce: Pop(1)
0x9cf: Return(); Pop(0)

0x9d0: PushEmpty(bool, int, bool, int)
0x9d1: PushEmpty(bool, object)
0x9d2: Stack[-7] = Stack[-1]
0x9d3: Call2 0xf28

0x9d4: Pop(1)
0x9d5: Pop(1); Push((bool) Stack[-1] == 0)
0x9d6: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d7: Return(); Pop(4)

0x9d8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x9d9: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9da: Return(); Pop(4)

0x9db: @ IsPlayerActor(Stack[-5], Stack[-2])
0x9dc: Pop(0)
0x9dd: Pop(0); Push((bool) Stack[-2] == 0)
0x9de: IF (Stack[-1] == 0) GOTO 0x9e0; Pop(1)

0x9df: Return(); Pop(4)

0x9e0: PushEmpty(int, object)
0x9e1: Stack[-7] = Stack[-1]
0x9e2: Call2 0x1460

0x9e3: Stack[-2] = Stack[-3]
0x9e4: Pop(2)
0x9e5: Push((int) 0)
0x9e6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9e7: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9e8: Push((int) 1)
0x9e9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ea: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9eb: PushEmpty()
0x9ec: Call2 0x9bf

0x9ed: Pop(0)
0x9ee: PushEmpty(object)
0x9ef: Stack[-6] = Stack[-1]
0x9f0: Call2 0x1469

0x9f1: Pop(1)
0x9f2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x9f3: Push((int) 110)
0x9f4: Push((float)10.0)
0x9f5: @ SetTimer(Stack[-2], Stack[-1])
0x9f6: Pop(2)
0x9f7: Return(); Pop(4)

0x9f8: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x9f9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x9fa: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x9fb: Push((float)0.5)
0x9fc: @ rand(Stack[-7], Stack[-1])
0x9fd: Pop(1)
0x9fe: @ Sleep(Stack[-6])
0x9ff: Pop(0)
0xa00: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xa01: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa02: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xa03: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa04: @ GetPosition(Stack[-4])
0xa05: Pop(0)
0xa06: PushEmpty(float)
0xa07: Call2 0xa33

0xa08: Pop(0)
0xa09: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0xa0a: Pop(1)
0xa0b: Push(Stack[-3])
0xa0c: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa0d: GOTO 0xa12

0xa0e: Push((int) 1)
0xa0f: @ Sleep(Stack[-1])
0xa10: Pop(1)
0xa11: GOTO 0xa04

0xa12: GOTO 0xa14

0xa13: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xa14: PushEmpty(object, cvector)
0xa15: Stack[-7] = Stack[-1]
0xa16: Call2 0xa4f

0xa17: Stack[-2] = Stack[-4]
0xa18: Pop(2)
0xa19: Pop(0); Push(( Stack[-2] != 0 )
0xa1a: IF (Stack[-1] == 0) GOTO 0xa2d; Pop(1)

0xa1b: @ RotatePath(Stack[-2], Stack[-1])
0xa1c: Pop(0)
0xa1d: Push(Stack[-1])
0xa1e: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa1f: PushEmpty(bool)
0xa20: Call2 0xa4d

0xa21: Pop(0)
0xa22: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0xa23: Pop(1)
0xa24: Stack[-2] = 0
0xa25: Push(Stack[-1])
0xa26: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa27: PushEmpty()
0xa28: Push(-0, 0); TaskCall(4)
0xa29: Call2 0xaf9

0xa2a: Pop(-0, 0); TaskReturn
0xa2b: Pop(0)
0xa2c: GOTO 0xa30

0xa2d: Push((int) 1)
0xa2e: @ Sleep(Stack[-1])
0xa2f: Pop(1)
0xa30: Stack[-2] = 0
0xa31: GOTO 0xa00

0xa32: Return(); Pop(12)

0xa33: PushEmpty(float, float)
0xa34: @ GetCameraFarDistance(Stack[-1])
0xa35: Pop(0)
0xa36: Stack[-1] = Stack[-3]
0xa37: Return(); Pop(2)

0xa38: PushEmpty()
0xa39: @ RequestClearPath(Stack[-1])
0xa3a: Pop(0)
0xa3b: Return(); Pop(0)

0xa3c: @ Stop()
0xa3d: Pop(0)
0xa3e: Return(); Pop(0)

0xa3f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa40: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xa41: @ Stop()
0xa42: Pop(0)
0xa43: @ StopGroup0()
0xa44: Pop(0)
0xa45: Return(); Pop(0)

0xa46: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa47: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xa48: @ Stop()
0xa49: Pop(0)
0xa4a: @ StopGroup0()
0xa4b: Pop(0)
0xa4c: Return(); Pop(0)

0xa4d: Stack[-1] = (bool) 0
0xa4e: Return(); Pop(0)

0xa4f: PushEmpty(object, object)
0xa50: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0xa51: Pop(0)
0xa52: Stack[-1] = Stack[-4]
0xa53: Return(); Pop(2)

0xa54: Stack[-1] = 0
0xa55: PushEmpty(int, int)
0xa56: PushEmpty(int, object)
0xa57: Stack[-5] = Stack[-1]
0xa58: Call2 0x14e1

0xa59: Stack[-2] = Stack[-3]
0xa5a: Pop(2)
0xa5b: Push((int) 0)
0xa5c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa5d: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa5e: Push((int) 1)
0xa5f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa60: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa61: PushEmpty()
0xa62: Call2 0xb4a

0xa63: Pop(0)
0xa64: PushEmpty(object)
0xa65: Stack[-4] = Stack[-1]
0xa66: Call2 0x14e4

0xa67: Pop(1)
0xa68: Return(); Pop(2)

0xa69: PushEmpty(int, int)
0xa6a: PushEmpty(object)
0xa6b: Stack[-4] = Stack[-1]
0xa6c: Call2 0x141e

0xa6d: Pop(1)
0xa6e: PushEmpty(int, object)
0xa6f: Stack[-5] = Stack[-1]
0xa70: Call2 0x1471

0xa71: Stack[-2] = Stack[-3]
0xa72: Pop(2)
0xa73: Push((int) 0)
0xa74: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa75: IF (Stack[-1] == 0) GOTO 0xa80; Pop(1)

0xa76: Push((int) 1)
0xa77: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa78: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa79: PushEmpty()
0xa7a: Call2 0xb4a

0xa7b: Pop(0)
0xa7c: PushEmpty(object)
0xa7d: Stack[-4] = Stack[-1]
0xa7e: Call2 0x147b

0xa7f: Pop(1)
0xa80: Return(); Pop(2)

0xa81: PushEmpty(int, int)
0xa82: PushEmpty(bool, object, object, bool)
0xa83: Stack[-9] = Stack[-3]
0xa84: Stack[-8] = Stack[-2]
0xa85: Stack[-7] = Stack[-1]
0xa86: Call2 0x1597

0xa87: Pop(3)
0xa88: IF (Stack[-1] == 0) GOTO 0xa9c; Pop(1)

0xa89: PushEmpty(int, object, bool)
0xa8a: Stack[-8] = Stack[-2]
0xa8b: Stack[-6] = Stack[-1]
0xa8c: Call2 0x1483

0xa8d: Stack[-3] = Stack[-4]
0xa8e: Pop(3)
0xa8f: Push((int) 0)
0xa90: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa91: IF (Stack[-1] == 0) GOTO 0xa9c; Pop(1)

0xa92: Push((int) 1)
0xa93: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa94: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa95: PushEmpty()
0xa96: Call2 0xb4a

0xa97: Pop(0)
0xa98: PushEmpty(object)
0xa99: Stack[-6] = Stack[-1]
0xa9a: Call2 0x148d

0xa9b: Pop(1)
0xa9c: Return(); Pop(2)

0xa9d: PushEmpty(int, int)
0xa9e: PushEmpty(int, object)
0xa9f: Stack[-5] = Stack[-1]
0xaa0: Call2 0x14d7

0xaa1: Stack[-2] = Stack[-3]
0xaa2: Pop(2)
0xaa3: Push((int) 0)
0xaa4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xaa5: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaa6: Push((int) 1)
0xaa7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xaa8: IF (Stack[-1] == 0) GOTO 0xaac; Pop(1)

0xaa9: PushEmpty()
0xaaa: Call2 0xb4a

0xaab: Pop(0)
0xaac: PushEmpty(object)
0xaad: Stack[-4] = Stack[-1]
0xaae: Call2 0x14da

0xaaf: Pop(1)
0xab0: Return(); Pop(2)

0xab1: PushEmpty(int, int)
0xab2: PushEmpty(bool, object, string)
0xab3: Stack[-7] = Stack[-2]
0xab4: Stack[-6] = Stack[-1]
0xab5: Call2 0x13c8

0xab6: Pop(2)
0xab7: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xab8: PushEmpty()
0xab9: Call2 0xb4a

0xaba: Pop(0)
0xabb: PushEmpty(object, string)
0xabc: Stack[-6] = Stack[-2]
0xabd: Stack[-5] = Stack[-1]
0xabe: Call2 0x13e8

0xabf: Pop(2)
0xac0: GOTO 0xad5

0xac1: PushEmpty(int, string, object)
0xac2: Stack[-6] = Stack[-2]
0xac3: Stack[-7] = Stack[-1]
0xac4: Call2 0x14dc

0xac5: Stack[-3] = Stack[-4]
0xac6: Pop(3)
0xac7: Push((int) 0)
0xac8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xac9: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xaca: Push((int) 1)
0xacb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xacc: IF (Stack[-1] == 0) GOTO 0xad0; Pop(1)

0xacd: PushEmpty()
0xace: Call2 0xb4a

0xacf: Pop(0)
0xad0: PushEmpty(string, object)
0xad1: Stack[-5] = Stack[-2]
0xad2: Stack[-6] = Stack[-1]
0xad3: Call2 0x14df

0xad4: Pop(2)
0xad5: Return(); Pop(2)

0xad6: PushEmpty()
0xad7: PushEmpty(bool, string)
0xad8: Stack[-3] = Stack[-1]
0xad9: Call2 0x142b

0xada: Pop(1)
0xadb: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xadc: PushEmpty()
0xadd: Call2 0xb4a

0xade: Pop(0)
0xadf: PushEmpty(string)
0xae0: Stack[-2] = Stack[-1]
0xae1: Call2 0x143b

0xae2: Pop(1)
0xae3: Return(); Pop(0)

0xae4: PushEmpty()
0xae5: Call2 0xb4a

0xae6: Pop(0)
0xae7: PushEmpty()
0xae8: Call2 0x14ea

0xae9: Pop(0)
0xaea: Return(); Pop(0)

0xaeb: PushEmpty()
0xaec: PushEmpty(bool, object)
0xaed: Stack[-3] = Stack[-1]
0xaee: Call2 0x1401

0xaef: Pop(1)
0xaf0: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xaf1: PushEmpty()
0xaf2: Call2 0xb4a

0xaf3: Pop(0)
0xaf4: PushEmpty(object)
0xaf5: Stack[-2] = Stack[-1]
0xaf6: Call2 0x1418

0xaf7: Pop(1)
0xaf8: Return(); Pop(0)

0xaf9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xafa: @ WaitForAnimEnd()
0xafb: Pop(0)
0xafc: PushEmpty(bool)
0xafd: Call2 0xfc9

0xafe: Pop(0)
0xaff: Pop(1); Push((bool) Stack[-1] == 0)
0xb00: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xb01: Return(); Pop(14)

0xb02: PushEmpty(int)
0xb03: Call2 0x144f

0xb04: Stack[-1] = Stack[-8]
0xb05: Pop(1)
0xb06: Stack[-6] = (int) 0
0xb07: PushEmpty(bool)
0xb08: Stack[-1] = (bool) 0
0xb09: Push((int) 5)
0xb0a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xb0b: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0c: PushEmpty(bool)
0xb0d: Call2 0xfc9

0xb0e: Pop(0)
0xb0f: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb10: Stack[-1] = (bool) 1
0xb11: IF (Stack[-1] == 0) GOTO 0xb45; Pop(1)

0xb12: Push((int) 3)
0xb13: @ irand(Stack[-6], Stack[-1])
0xb14: Pop(1)
0xb15: Push((int) 0)
0xb16: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb17: IF (Stack[-1] == 0) GOTO 0xb29; Pop(1)

0xb18: Push(Stack[-7])
0xb19: IF (Stack[-1] == 0) GOTO 0xb28; Pop(1)

0xb1a: @ irand(Stack[-4], Stack[-7])
0xb1b: Pop(0)
0xb1c: Push("all") // @poff=138
0xb1d: PushEmpty(string, int)
0xb1e: Stack[-7] = Stack[-1]
0xb1f: Call2 0x1448

0xb20: Pop(1)
0xb21: @ PlayAnimation(Stack[-2], Stack[-1])
0xb22: Pop(2)
0xb23: @ WaitForAnimEnd(Stack[-3])
0xb24: Pop(0)
0xb25: Pop(0); Push((bool) Stack[-3] == 0)
0xb26: IF (Stack[-1] == 0) GOTO 0xb28; Pop(1)

0xb27: GOTO 0xb45

0xb28: GOTO 0xb3a

0xb29: Push((int) 1)
0xb2a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb2b: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xb2c: Push((int) 4)
0xb2d: @ rand(Stack[-3], Stack[-1])
0xb2e: Pop(1)
0xb2f: Push((int) 1)
0xb30: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb31: @ Sleep(Stack[-1], Stack[-2])
0xb32: Pop(1)
0xb33: Pop(0); Push((bool) Stack[-1] == 0)
0xb34: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb35: GOTO 0xb45

0xb36: GOTO 0xb3a

0xb37: Push(Stack[-6])
0xb38: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb39: GOTO 0xb45

0xb3a: PushEmpty(bool)
0xb3b: Call2 0xb48

0xb3c: Pop(0)
0xb3d: Pop(1); Push((bool) Stack[-1] == 0)
0xb3e: IF (Stack[-1] == 0) GOTO 0xb40; Pop(1)

0xb3f: GOTO 0xb45

0xb40: @ ResetAAS()
0xb41: Pop(0)
0xb42: Push((int) 1)
0xb43: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xb44: GOTO 0xb07

0xb45: @ ResetAAS()
0xb46: Pop(0)
0xb47: Return(); Pop(14)

0xb48: Stack[-1] = (bool) 1
0xb49: Return(); Pop(0)

0xb4a: @ StopAnimation()
0xb4b: Pop(0)
0xb4c: @ StopGroup0()
0xb4d: Pop(0)
0xb4e: Return(); Pop(0)

0xb4f: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xb50: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0xb51: PushEmpty()
0xb52: Call2 0xb82

0xb53: Pop(0)
0xb54: @ GetDirection(Stack[-3])
0xb55: Pop(0)
0xb56: PushEmpty(cvector, object)
0xb57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb58: Call2 0xec2

0xb59: Stack[-2] = Stack[-4]
0xb5a: Pop(2)
0xb5b: PushEmpty(float, cvector, cvector)
0xb5c: Stack[-6] = Stack[-2]
0xb5d: Stack[-5] = Stack[-1]
0xb5e: Call2 0x10a1

0xb5f: Pop(2)
0xb60: Push((int) 0)
0xb61: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xb62: IF (Stack[-1] == 0) GOTO 0xb69; Pop(1)

0xb63: PushEmpty(object)
0xb64: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb65: Call2 0xfbe

0xb66: Pop(1)
0xb67: Stack[-1] = (bool) 1
0xb68: GOTO 0xb6c

0xb69: Push((float)1.5)
0xb6a: @ Sleep(Stack[-1], Stack[-2])
0xb6b: Pop(1)
0xb6c: Push(Stack[-1])
0xb6d: IF (Stack[-1] == 0) GOTO 0xb7c; Pop(1)

0xb6e: PushEmpty(object)
0xb6f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb70: Call2 0xfbe

0xb71: Pop(1)
0xb72: Push((int) 111)
0xb73: Push((float)0.5)
0xb74: @ SetTimer(Stack[-2], Stack[-1])
0xb75: Pop(2)
0xb76: Push((float)5.0)
0xb77: @ Sleep(Stack[-1])
0xb78: Pop(1)
0xb79: Push((int) 111)
0xb7a: @ KillTimer(Stack[-1])
0xb7b: Pop(1)
0xb7c: @ StopAsync()
0xb7d: Pop(0)
0xb7e: Push("head") // @poff=316
0xb7f: @ UnlookAsync(Stack[-1])
0xb80: Pop(1)
0xb81: Return(); Pop(6)

0xb82: PushEmpty(object)
0xb83: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb84: Call2 0x1030

0xb85: Pop(1)
0xb86: Return(); Pop(0)

0xb87: PushEmpty(int, int)
0xb88: PushEmpty(int, object)
0xb89: Stack[-5] = Stack[-1]
0xb8a: Call2 0x14e1

0xb8b: Stack[-2] = Stack[-3]
0xb8c: Pop(2)
0xb8d: Push((int) 0)
0xb8e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb8f: IF (Stack[-1] == 0) GOTO 0xb9a; Pop(1)

0xb90: Push((int) 1)
0xb91: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb92: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xb93: PushEmpty()
0xb94: Call2 0xc16

0xb95: Pop(0)
0xb96: PushEmpty(object)
0xb97: Stack[-4] = Stack[-1]
0xb98: Call2 0x14e4

0xb99: Pop(1)
0xb9a: Return(); Pop(2)

0xb9b: PushEmpty(int, int)
0xb9c: PushEmpty(object)
0xb9d: Stack[-4] = Stack[-1]
0xb9e: Call2 0x141e

0xb9f: Pop(1)
0xba0: PushEmpty(int, object)
0xba1: Stack[-5] = Stack[-1]
0xba2: Call2 0x1471

0xba3: Stack[-2] = Stack[-3]
0xba4: Pop(2)
0xba5: Push((int) 0)
0xba6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xba7: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xba8: Push((int) 1)
0xba9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbaa: IF (Stack[-1] == 0) GOTO 0xbae; Pop(1)

0xbab: PushEmpty()
0xbac: Call2 0xc16

0xbad: Pop(0)
0xbae: PushEmpty(object)
0xbaf: Stack[-4] = Stack[-1]
0xbb0: Call2 0x147b

0xbb1: Pop(1)
0xbb2: Return(); Pop(2)

0xbb3: PushEmpty(int, int)
0xbb4: PushEmpty(bool, object, object, bool)
0xbb5: Stack[-9] = Stack[-3]
0xbb6: Stack[-8] = Stack[-2]
0xbb7: Stack[-7] = Stack[-1]
0xbb8: Call2 0x1597

0xbb9: Pop(3)
0xbba: IF (Stack[-1] == 0) GOTO 0xbce; Pop(1)

0xbbb: PushEmpty(int, object, bool)
0xbbc: Stack[-8] = Stack[-2]
0xbbd: Stack[-6] = Stack[-1]
0xbbe: Call2 0x1483

0xbbf: Stack[-3] = Stack[-4]
0xbc0: Pop(3)
0xbc1: Push((int) 0)
0xbc2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbc3: IF (Stack[-1] == 0) GOTO 0xbce; Pop(1)

0xbc4: Push((int) 1)
0xbc5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbc6: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbc7: PushEmpty()
0xbc8: Call2 0xc16

0xbc9: Pop(0)
0xbca: PushEmpty(object)
0xbcb: Stack[-6] = Stack[-1]
0xbcc: Call2 0x148d

0xbcd: Pop(1)
0xbce: Return(); Pop(2)

0xbcf: PushEmpty(int, int)
0xbd0: PushEmpty(int, object)
0xbd1: Stack[-5] = Stack[-1]
0xbd2: Call2 0x14d7

0xbd3: Stack[-2] = Stack[-3]
0xbd4: Pop(2)
0xbd5: Push((int) 0)
0xbd6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbd7: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbd8: Push((int) 1)
0xbd9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbda: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbdb: PushEmpty()
0xbdc: Call2 0xc16

0xbdd: Pop(0)
0xbde: PushEmpty(object)
0xbdf: Stack[-4] = Stack[-1]
0xbe0: Call2 0x14da

0xbe1: Pop(1)
0xbe2: Return(); Pop(2)

0xbe3: PushEmpty(int, int)
0xbe4: PushEmpty(bool, object, string)
0xbe5: Stack[-7] = Stack[-2]
0xbe6: Stack[-6] = Stack[-1]
0xbe7: Call2 0x13c8

0xbe8: Pop(2)
0xbe9: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbea: PushEmpty()
0xbeb: Call2 0xc16

0xbec: Pop(0)
0xbed: PushEmpty(object, string)
0xbee: Stack[-6] = Stack[-2]
0xbef: Stack[-5] = Stack[-1]
0xbf0: Call2 0x13e8

0xbf1: Pop(2)
0xbf2: GOTO 0xc07

0xbf3: PushEmpty(int, string, object)
0xbf4: Stack[-6] = Stack[-2]
0xbf5: Stack[-7] = Stack[-1]
0xbf6: Call2 0x14dc

0xbf7: Stack[-3] = Stack[-4]
0xbf8: Pop(3)
0xbf9: Push((int) 0)
0xbfa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbfb: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xbfc: Push((int) 1)
0xbfd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbfe: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0xbff: PushEmpty()
0xc00: Call2 0xc16

0xc01: Pop(0)
0xc02: PushEmpty(string, object)
0xc03: Stack[-5] = Stack[-2]
0xc04: Stack[-6] = Stack[-1]
0xc05: Call2 0x14df

0xc06: Pop(2)
0xc07: Return(); Pop(2)

0xc08: PushEmpty()
0xc09: PushEmpty(bool, string)
0xc0a: Stack[-3] = Stack[-1]
0xc0b: Call2 0x142b

0xc0c: Pop(1)
0xc0d: IF (Stack[-1] == 0) GOTO 0xc15; Pop(1)

0xc0e: PushEmpty()
0xc0f: Call2 0xc16

0xc10: Pop(0)
0xc11: PushEmpty(string)
0xc12: Stack[-2] = Stack[-1]
0xc13: Call2 0x143b

0xc14: Pop(1)
0xc15: Return(); Pop(0)

0xc16: @ StopGroup0()
0xc17: Pop(0)
0xc18: @ StopAsync()
0xc19: Pop(0)
0xc1a: Push("head") // @poff=316
0xc1b: @ UnlookAsync(Stack[-1])
0xc1c: Pop(1)
0xc1d: Push((int) 111)
0xc1e: @ KillTimer(Stack[-1])
0xc1f: Pop(1)
0xc20: Return(); Pop(0)

0xc21: PushEmpty()
0xc22: PushEmpty()
0xc23: Call2 0xc16

0xc24: Pop(0)
0xc25: PushEmpty(object)
0xc26: Stack[-2] = Stack[-1]
0xc27: Call2 0x13b0

0xc28: Pop(1)
0xc29: Return(); Pop(0)

0xc2a: PushEmpty(cvector, cvector, cvector, cvector)
0xc2b: Push((int) 111)
0xc2c: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xc2d: IF (Stack[-1] == 0) GOTO 0xc2f; Pop(1)

0xc2e: Return(); Pop(4)

0xc2f: PushEmpty(bool, object)
0xc30: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc31: Call2 0xf28

0xc32: Pop(1)
0xc33: Pop(1); Push((bool) Stack[-1] == 0)
0xc34: IF (Stack[-1] == 0) GOTO 0xc39; Pop(1)

0xc35: PushEmpty()
0xc36: Call2 0xc16

0xc37: Pop(0)
0xc38: Return(); Pop(4)

0xc39: @ GetDirection(Stack[-2])
0xc3a: Pop(0)
0xc3b: PushEmpty(cvector, object)
0xc3c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc3d: Call2 0xec2

0xc3e: Stack[-2] = Stack[-3]
0xc3f: Pop(2)
0xc40: PushEmpty(float, cvector, cvector)
0xc41: Stack[-5] = Stack[-2]
0xc42: Stack[-4] = Stack[-1]
0xc43: Call2 0x10a1

0xc44: Pop(2)
0xc45: Push((float)0.4999999701976776)
0xc46: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xc47: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc48: PushEmpty(object)
0xc49: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4a: Call2 0xfbe

0xc4b: Pop(1)
0xc4c: Return(); Pop(4)

0xc4d: PushEmpty()
0xc4e: Call2 0xc16

0xc4f: Pop(0)
0xc50: PushEmpty()
0xc51: Call2 0x14ea

0xc52: Pop(0)
0xc53: Return(); Pop(0)

0xc54: PushEmpty()
0xc55: PushEmpty(bool, object)
0xc56: Stack[-3] = Stack[-1]
0xc57: Call2 0x1401

0xc58: Pop(1)
0xc59: IF (Stack[-1] == 0) GOTO 0xc61; Pop(1)

0xc5a: PushEmpty()
0xc5b: Call2 0xc16

0xc5c: Pop(0)
0xc5d: PushEmpty(object)
0xc5e: Stack[-2] = Stack[-1]
0xc5f: Call2 0x1418

0xc60: Pop(1)
0xc61: Return(); Pop(0)

0xc62: PushEmpty()
0xc63: @ Face(Stack[-1])
0xc64: Pop(0)
0xc65: Push("all") // @poff=138
0xc66: Push("attack_on") // @poff=326
0xc67: @ PlayAnimation(Stack[-2], Stack[-1])
0xc68: Pop(2)
0xc69: @ WaitForAnimEnd()
0xc6a: Pop(0)
0xc6b: Push("all") // @poff=138
0xc6c: Push("attack_stay") // @poff=346
0xc6d: @ PlayAnimation(Stack[-2], Stack[-1])
0xc6e: Pop(2)
0xc6f: @ WaitForAnimEnd()
0xc70: Pop(0)
0xc71: Push("all") // @poff=138
0xc72: Push("attack_off") // @poff=370
0xc73: @ PlayAnimation(Stack[-2], Stack[-1])
0xc74: Pop(2)
0xc75: @ WaitForAnimEnd()
0xc76: Pop(0)
0xc77: @ StopAsync()
0xc78: Pop(0)
0xc79: PushEmpty(object)
0xc7a: Stack[-2] = Stack[-1]
0xc7b: Call2 0xca3

0xc7c: Pop(1)
0xc7d: Return(); Pop(0)

0xc7e: PushEmpty()
0xc7f: Call2 0xd20

0xc80: Pop(0)
0xc81: PushEmpty()
0xc82: Call2 0x14ea

0xc83: Pop(0)
0xc84: Return(); Pop(0)

0xc85: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xc86: @ GetPosition(Stack[-6])
0xc87: Pop(0)
0xc88: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0xc89: Pop(0)
0xc8a: @ GetDirection(Stack[-4])
0xc8b: Pop(0)
0xc8c: PushEmpty(cvector, cvector)
0xc8d: PushEmpty(cvector, cvector)
0xc8e: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xc8f: Call2 0x1071

0xc90: Pop(1)
0xc91: Push((float)0.75)
0xc92: Pop(1); Push(Stack[-8] * Stack[-1]);
0xc93: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc94: Call2 0x1071

0xc95: Stack[-2] = Stack[-5]
0xc96: Pop(2)
0xc97: Push((int) 32)
0xc98: Push((float)7000.0)
0xc99: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xc9a: Pop(2)
0xc9b: Push((int) 100)
0xc9c: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xc9d: Push((int) 0)
0xc9e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc9f: IF (Stack[-1] == 0) GOTO 0xca1; Pop(1)

0xca0: Stack[-1] = (int) 0
0xca1: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xca2: Return(); Pop(12)

0xca3: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xca4: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xca5: PushEmpty(cvector, float)
0xca6: Stack[-1] = (float) 1.7453293800354004
0xca7: Call2 0xc85

0xca8: Stack[-2] = Stack[-7]
0xca9: Pop(2)
0xcaa: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xcab: Push((float)2500.0)
0xcac: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xcad: IF (Stack[-1] == 0) GOTO 0xcc0; Pop(1)

0xcae: PushEmpty(cvector, float)
0xcaf: Stack[-1] = (float) 2.6179938316345215
0xcb0: Call2 0xc85

0xcb1: Stack[-2] = Stack[-7]
0xcb2: Pop(2)
0xcb3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xcb4: Push((float)2500.0)
0xcb5: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xcb6: IF (Stack[-1] == 0) GOTO 0xcc0; Pop(1)

0xcb7: Push("Can't retreat, distance: ") // @poff=392
0xcb8: Pop(0); Push(Sqrt(Stack[-5]))
0xcb9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcba: @ Trace(Stack[-1])
0xcbb: Pop(1)
0xcbc: Push((float)0.5)
0xcbd: @ Sleep(Stack[-1])
0xcbe: Pop(1)
0xcbf: Return(); Pop(10)

0xcc0: Push(CvectorIndex(Stack[-5], 0))
0xcc1: Push(CvectorIndex(Stack[-6], 2))
0xcc2: @ Rotate(Stack[-2], Stack[-1])
0xcc3: Pop(2)
0xcc4: PushEmpty(cvector)
0xcc5: Call2 0xebd

0xcc6: Pop(0)
0xcc7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xcc8: Push((int) 120)
0xcc9: Push((float)0.5)
0xcca: @ SetTimer(Stack[-2], Stack[-1])
0xccb: Pop(2)
0xccc: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xccd: Push((int) 1)
0xcce: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0xccf: Pop(1)
0xcd0: Push(Stack[-3])
0xcd1: IF (Stack[-1] == 0) GOTO 0xce9; Pop(1)

0xcd2: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xcd3: IF (Stack[-1] == 0) GOTO 0xcd6; Pop(1)

0xcd4: GOTO 0xceb

0xcd5: GOTO 0xce9

0xcd6: PushEmpty(cvector, float)
0xcd7: Stack[-1] = (float) 2.6179938316345215
0xcd8: Call2 0xc85

0xcd9: Stack[-2] = Stack[-4]
0xcda: Pop(2)
0xcdb: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xcdc: Push((float)2500.0)
0xcdd: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xcde: IF (Stack[-1] == 0) GOTO 0xce8; Pop(1)

0xcdf: PushEmpty(cvector)
0xce0: Call2 0xebd

0xce1: Pop(0)
0xce2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xce3: Push((int) 120)
0xce4: Push((float)0.5)
0xce5: @ SetTimer(Stack[-2], Stack[-1])
0xce6: Pop(2)
0xce7: GOTO 0xce9

0xce8: GOTO 0xceb

0xce9: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xcea: IF (Stack[-1] == 1) GOTO 0xccd; Pop(1)

0xceb: Return(); Pop(10)

0xcec: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xced: Push((int) 120)
0xcee: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xcef: IF (Stack[-1] == 0) GOTO 0xcf1; Pop(1)

0xcf0: Return(); Pop(8)

0xcf1: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xcf2: IF (Stack[-1] == 0) GOTO 0xcfa; Pop(1)

0xcf3: @ Stop()
0xcf4: Pop(0)
0xcf5: Push((int) 1)
0xcf6: @ KillTimer(Stack[-1])
0xcf7: Pop(1)
0xcf8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xcf9: GOTO 0xd1f

0xcfa: @ GetDirection(Stack[-4])
0xcfb: Pop(0)
0xcfc: Push((float)7000.0)
0xcfd: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xcfe: Pop(1)
0xcff: PushEmpty(cvector, float)
0xd00: Stack[-1] = (float) 1.7453293800354004
0xd01: Call2 0xc85

0xd02: Stack[-2] = Stack[-4]
0xd03: Pop(2)
0xd04: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd05: PushEmpty(bool)
0xd06: Stack[-1] = (bool) 0
0xd07: Push((float)2500.0)
0xd08: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xd09: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd0a: PushEmpty(bool)
0xd0b: Stack[-1] = (bool) 1
0xd0c: Pop(0); Push(Stack[-5] * Stack[-5]);
0xd0d: Push((float)2.25)
0xd0e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd0f: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xd10: IF (Stack[-1] == 1) GOTO 0xd16; Pop(1)

0xd11: PushEmpty(bool)
0xd12: Call2 0xd30

0xd13: Pop(0)
0xd14: IF (Stack[-1] == 1) GOTO 0xd16; Pop(1)

0xd15: Stack[-1] = (bool) 0
0xd16: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd17: Stack[-1] = (bool) 1
0xd18: IF (Stack[-1] == 0) GOTO 0xd1f; Pop(1)

0xd19: @ Stop()
0xd1a: Pop(0)
0xd1b: PushEmpty(cvector)
0xd1c: Call2 0xebd

0xd1d: Pop(0)
0xd1e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xd1f: Return(); Pop(8)

0xd20: @ Stop()
0xd21: Pop(0)
0xd22: Push((int) 120)
0xd23: @ KillTimer(Stack[-1])
0xd24: Pop(1)
0xd25: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd26: Return(); Pop(0)

0xd27: PushEmpty()
0xd28: PushEmpty()
0xd29: Call2 0xd20

0xd2a: Pop(0)
0xd2b: PushEmpty(object)
0xd2c: Stack[-2] = Stack[-1]
0xd2d: Call2 0x13b0

0xd2e: Pop(1)
0xd2f: Return(); Pop(0)

0xd30: PushEmpty(cvector, cvector, cvector, cvector)
0xd31: @ GetDirection(Stack[-2])
0xd32: Pop(0)
0xd33: PushEmpty(cvector, object)
0xd34: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd35: Call2 0xec2

0xd36: Stack[-2] = Stack[-3]
0xd37: Pop(2)
0xd38: PushEmpty(float, cvector, cvector)
0xd39: Stack[-5] = Stack[-2]
0xd3a: Stack[-4] = Stack[-1]
0xd3b: Call2 0x1086

0xd3c: Pop(2)
0xd3d: Push((float)-0.3420201241970062)
0xd3e: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xd3f: Return(); Pop(4)

0xd40: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xd41: @ GetPosition(Stack[-6])
0xd42: Pop(0)
0xd43: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0xd44: Pop(0)
0xd45: @ GetDirection(Stack[-4])
0xd46: Pop(0)
0xd47: PushEmpty(cvector, cvector)
0xd48: PushEmpty(cvector, cvector)
0xd49: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xd4a: Call2 0x1071

0xd4b: Pop(1)
0xd4c: Push((float)0.75)
0xd4d: Pop(1); Push(Stack[-8] * Stack[-1]);
0xd4e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xd4f: Call2 0x1071

0xd50: Stack[-2] = Stack[-5]
0xd51: Pop(2)
0xd52: Push((int) 32)
0xd53: Push((float)7000.0)
0xd54: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xd55: Pop(2)
0xd56: Push((int) 100)
0xd57: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xd58: Push((int) 0)
0xd59: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd5a: IF (Stack[-1] == 0) GOTO 0xd5c; Pop(1)

0xd5b: Stack[-1] = (int) 0
0xd5c: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xd5d: Return(); Pop(12)

0xd5e: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xd5f: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xd60: PushEmpty(cvector, float)
0xd61: Stack[-1] = (float) 1.7453293800354004
0xd62: Call2 0xd40

0xd63: Stack[-2] = Stack[-7]
0xd64: Pop(2)
0xd65: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd66: Push((float)2500.0)
0xd67: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd68: IF (Stack[-1] == 0) GOTO 0xd7b; Pop(1)

0xd69: PushEmpty(cvector, float)
0xd6a: Stack[-1] = (float) 2.6179938316345215
0xd6b: Call2 0xd40

0xd6c: Stack[-2] = Stack[-7]
0xd6d: Pop(2)
0xd6e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd6f: Push((float)2500.0)
0xd70: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd71: IF (Stack[-1] == 0) GOTO 0xd7b; Pop(1)

0xd72: Push("Can't retreat, distance: ") // @poff=392
0xd73: Pop(0); Push(Sqrt(Stack[-5]))
0xd74: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd75: @ Trace(Stack[-1])
0xd76: Pop(1)
0xd77: Push((float)0.5)
0xd78: @ Sleep(Stack[-1])
0xd79: Pop(1)
0xd7a: Return(); Pop(10)

0xd7b: Push(CvectorIndex(Stack[-5], 0))
0xd7c: Push(CvectorIndex(Stack[-6], 2))
0xd7d: @ Rotate(Stack[-2], Stack[-1])
0xd7e: Pop(2)
0xd7f: PushEmpty(cvector)
0xd80: Call2 0xebd

0xd81: Pop(0)
0xd82: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xd83: Push((int) 120)
0xd84: Push((float)0.5)
0xd85: @ SetTimer(Stack[-2], Stack[-1])
0xd86: Pop(2)
0xd87: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd88: Push((int) 1)
0xd89: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0xd8a: Pop(1)
0xd8b: Push(Stack[-3])
0xd8c: IF (Stack[-1] == 0) GOTO 0xda4; Pop(1)

0xd8d: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xd8e: IF (Stack[-1] == 0) GOTO 0xd91; Pop(1)

0xd8f: GOTO 0xda6

0xd90: GOTO 0xda4

0xd91: PushEmpty(cvector, float)
0xd92: Stack[-1] = (float) 2.6179938316345215
0xd93: Call2 0xd40

0xd94: Stack[-2] = Stack[-4]
0xd95: Pop(2)
0xd96: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd97: Push((float)2500.0)
0xd98: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd99: IF (Stack[-1] == 0) GOTO 0xda3; Pop(1)

0xd9a: PushEmpty(cvector)
0xd9b: Call2 0xebd

0xd9c: Pop(0)
0xd9d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xd9e: Push((int) 120)
0xd9f: Push((float)0.5)
0xda0: @ SetTimer(Stack[-2], Stack[-1])
0xda1: Pop(2)
0xda2: GOTO 0xda4

0xda3: GOTO 0xda6

0xda4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xda5: IF (Stack[-1] == 1) GOTO 0xd88; Pop(1)

0xda6: Return(); Pop(10)

0xda7: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xda8: Push((int) 120)
0xda9: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xdaa: IF (Stack[-1] == 0) GOTO 0xdac; Pop(1)

0xdab: Return(); Pop(8)

0xdac: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xdad: IF (Stack[-1] == 0) GOTO 0xdb5; Pop(1)

0xdae: @ Stop()
0xdaf: Pop(0)
0xdb0: Push((int) 1)
0xdb1: @ KillTimer(Stack[-1])
0xdb2: Pop(1)
0xdb3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xdb4: GOTO 0xdda

0xdb5: @ GetDirection(Stack[-4])
0xdb6: Pop(0)
0xdb7: Push((float)7000.0)
0xdb8: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xdb9: Pop(1)
0xdba: PushEmpty(cvector, float)
0xdbb: Stack[-1] = (float) 1.7453293800354004
0xdbc: Call2 0xd40

0xdbd: Stack[-2] = Stack[-4]
0xdbe: Pop(2)
0xdbf: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xdc0: PushEmpty(bool)
0xdc1: Stack[-1] = (bool) 0
0xdc2: Push((float)2500.0)
0xdc3: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xdc4: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdc5: PushEmpty(bool)
0xdc6: Stack[-1] = (bool) 1
0xdc7: Pop(0); Push(Stack[-5] * Stack[-5]);
0xdc8: Push((float)2.25)
0xdc9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xdca: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xdcb: IF (Stack[-1] == 1) GOTO 0xdd1; Pop(1)

0xdcc: PushEmpty(bool)
0xdcd: Call2 0xdeb

0xdce: Pop(0)
0xdcf: IF (Stack[-1] == 1) GOTO 0xdd1; Pop(1)

0xdd0: Stack[-1] = (bool) 0
0xdd1: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdd2: Stack[-1] = (bool) 1
0xdd3: IF (Stack[-1] == 0) GOTO 0xdda; Pop(1)

0xdd4: @ Stop()
0xdd5: Pop(0)
0xdd6: PushEmpty(cvector)
0xdd7: Call2 0xebd

0xdd8: Pop(0)
0xdd9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xdda: Return(); Pop(8)

0xddb: @ Stop()
0xddc: Pop(0)
0xddd: Push((int) 120)
0xdde: @ KillTimer(Stack[-1])
0xddf: Pop(1)
0xde0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xde1: Return(); Pop(0)

0xde2: PushEmpty()
0xde3: PushEmpty()
0xde4: Call2 0xddb

0xde5: Pop(0)
0xde6: PushEmpty(object)
0xde7: Stack[-2] = Stack[-1]
0xde8: Call2 0x13b0

0xde9: Pop(1)
0xdea: Return(); Pop(0)

0xdeb: PushEmpty(cvector, cvector, cvector, cvector)
0xdec: @ GetDirection(Stack[-2])
0xded: Pop(0)
0xdee: PushEmpty(cvector, object)
0xdef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf0: Call2 0xec2

0xdf1: Stack[-2] = Stack[-3]
0xdf2: Pop(2)
0xdf3: PushEmpty(float, cvector, cvector)
0xdf4: Stack[-5] = Stack[-2]
0xdf5: Stack[-4] = Stack[-1]
0xdf6: Call2 0x1086

0xdf7: Pop(2)
0xdf8: Push((float)-0.3420201241970062)
0xdf9: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xdfa: Return(); Pop(4)

0xdfb: PushEmpty()
0xdfc: Call2 0xe9d

0xdfd: Pop(0)
0xdfe: PushEmpty()
0xdff: Call2 0x14ea

0xe00: Pop(0)
0xe01: Return(); Pop(0)

0xe02: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xe03: @ GetPosition(Stack[-6])
0xe04: Pop(0)
0xe05: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0xe06: Pop(0)
0xe07: @ GetDirection(Stack[-4])
0xe08: Pop(0)
0xe09: PushEmpty(cvector, cvector)
0xe0a: PushEmpty(cvector, cvector)
0xe0b: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xe0c: Call2 0x1071

0xe0d: Pop(1)
0xe0e: Push((float)0.75)
0xe0f: Pop(1); Push(Stack[-8] * Stack[-1]);
0xe10: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xe11: Call2 0x1071

0xe12: Stack[-2] = Stack[-5]
0xe13: Pop(2)
0xe14: Push((int) 32)
0xe15: Push((float)7000.0)
0xe16: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xe17: Pop(2)
0xe18: Push((int) 100)
0xe19: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xe1a: Push((int) 0)
0xe1b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xe1c: IF (Stack[-1] == 0) GOTO 0xe1e; Pop(1)

0xe1d: Stack[-1] = (int) 0
0xe1e: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xe1f: Return(); Pop(12)

0xe20: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xe21: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xe22: PushEmpty(cvector, float)
0xe23: Stack[-1] = (float) 1.7453293800354004
0xe24: Call2 0xe02

0xe25: Stack[-2] = Stack[-7]
0xe26: Pop(2)
0xe27: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xe28: Push((float)2500.0)
0xe29: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xe2a: IF (Stack[-1] == 0) GOTO 0xe3d; Pop(1)

0xe2b: PushEmpty(cvector, float)
0xe2c: Stack[-1] = (float) 2.6179938316345215
0xe2d: Call2 0xe02

0xe2e: Stack[-2] = Stack[-7]
0xe2f: Pop(2)
0xe30: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xe31: Push((float)2500.0)
0xe32: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xe33: IF (Stack[-1] == 0) GOTO 0xe3d; Pop(1)

0xe34: Push("Can't retreat, distance: ") // @poff=392
0xe35: Pop(0); Push(Sqrt(Stack[-5]))
0xe36: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe37: @ Trace(Stack[-1])
0xe38: Pop(1)
0xe39: Push((float)0.5)
0xe3a: @ Sleep(Stack[-1])
0xe3b: Pop(1)
0xe3c: Return(); Pop(10)

0xe3d: Push(CvectorIndex(Stack[-5], 0))
0xe3e: Push(CvectorIndex(Stack[-6], 2))
0xe3f: @ Rotate(Stack[-2], Stack[-1])
0xe40: Pop(2)
0xe41: PushEmpty(cvector)
0xe42: Call2 0xebd

0xe43: Pop(0)
0xe44: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xe45: Push((int) 120)
0xe46: Push((float)0.5)
0xe47: @ SetTimer(Stack[-2], Stack[-1])
0xe48: Pop(2)
0xe49: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xe4a: Push((int) 1)
0xe4b: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0xe4c: Pop(1)
0xe4d: Push(Stack[-3])
0xe4e: IF (Stack[-1] == 0) GOTO 0xe66; Pop(1)

0xe4f: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xe50: IF (Stack[-1] == 0) GOTO 0xe53; Pop(1)

0xe51: GOTO 0xe68

0xe52: GOTO 0xe66

0xe53: PushEmpty(cvector, float)
0xe54: Stack[-1] = (float) 2.6179938316345215
0xe55: Call2 0xe02

0xe56: Stack[-2] = Stack[-4]
0xe57: Pop(2)
0xe58: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xe59: Push((float)2500.0)
0xe5a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xe5b: IF (Stack[-1] == 0) GOTO 0xe65; Pop(1)

0xe5c: PushEmpty(cvector)
0xe5d: Call2 0xebd

0xe5e: Pop(0)
0xe5f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xe60: Push((int) 120)
0xe61: Push((float)0.5)
0xe62: @ SetTimer(Stack[-2], Stack[-1])
0xe63: Pop(2)
0xe64: GOTO 0xe66

0xe65: GOTO 0xe68

0xe66: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xe67: IF (Stack[-1] == 1) GOTO 0xe4a; Pop(1)

0xe68: Return(); Pop(10)

0xe69: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xe6a: Push((int) 120)
0xe6b: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xe6c: IF (Stack[-1] == 0) GOTO 0xe6e; Pop(1)

0xe6d: Return(); Pop(8)

0xe6e: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xe6f: IF (Stack[-1] == 0) GOTO 0xe77; Pop(1)

0xe70: @ Stop()
0xe71: Pop(0)
0xe72: Push((int) 1)
0xe73: @ KillTimer(Stack[-1])
0xe74: Pop(1)
0xe75: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xe76: GOTO 0xe9c

0xe77: @ GetDirection(Stack[-4])
0xe78: Pop(0)
0xe79: Push((float)7000.0)
0xe7a: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xe7b: Pop(1)
0xe7c: PushEmpty(cvector, float)
0xe7d: Stack[-1] = (float) 1.7453293800354004
0xe7e: Call2 0xe02

0xe7f: Stack[-2] = Stack[-4]
0xe80: Pop(2)
0xe81: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xe82: PushEmpty(bool)
0xe83: Stack[-1] = (bool) 0
0xe84: Push((float)2500.0)
0xe85: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xe86: IF (Stack[-1] == 0) GOTO 0xe95; Pop(1)

0xe87: PushEmpty(bool)
0xe88: Stack[-1] = (bool) 1
0xe89: Pop(0); Push(Stack[-5] * Stack[-5]);
0xe8a: Push((float)2.25)
0xe8b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe8c: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xe8d: IF (Stack[-1] == 1) GOTO 0xe93; Pop(1)

0xe8e: PushEmpty(bool)
0xe8f: Call2 0xead

0xe90: Pop(0)
0xe91: IF (Stack[-1] == 1) GOTO 0xe93; Pop(1)

0xe92: Stack[-1] = (bool) 0
0xe93: IF (Stack[-1] == 0) GOTO 0xe95; Pop(1)

0xe94: Stack[-1] = (bool) 1
0xe95: IF (Stack[-1] == 0) GOTO 0xe9c; Pop(1)

0xe96: @ Stop()
0xe97: Pop(0)
0xe98: PushEmpty(cvector)
0xe99: Call2 0xebd

0xe9a: Pop(0)
0xe9b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xe9c: Return(); Pop(8)

0xe9d: @ Stop()
0xe9e: Pop(0)
0xe9f: Push((int) 120)
0xea0: @ KillTimer(Stack[-1])
0xea1: Pop(1)
0xea2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xea3: Return(); Pop(0)

0xea4: PushEmpty()
0xea5: PushEmpty()
0xea6: Call2 0xe9d

0xea7: Pop(0)
0xea8: PushEmpty(object)
0xea9: Stack[-2] = Stack[-1]
0xeaa: Call2 0x13b0

0xeab: Pop(1)
0xeac: Return(); Pop(0)

0xead: PushEmpty(cvector, cvector, cvector, cvector)
0xeae: @ GetDirection(Stack[-2])
0xeaf: Pop(0)
0xeb0: PushEmpty(cvector, object)
0xeb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb2: Call2 0xec2

0xeb3: Stack[-2] = Stack[-3]
0xeb4: Pop(2)
0xeb5: PushEmpty(float, cvector, cvector)
0xeb6: Stack[-5] = Stack[-2]
0xeb7: Stack[-4] = Stack[-1]
0xeb8: Call2 0x1086

0xeb9: Pop(2)
0xeba: Push((float)-0.3420201241970062)
0xebb: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xebc: Return(); Pop(4)

0xebd: PushEmpty(cvector, cvector)
0xebe: @ GetPosition(Stack[-1])
0xebf: Pop(0)
0xec0: Stack[-1] = Stack[-3]
0xec1: Return(); Pop(2)

0xec2: PushEmpty(cvector, cvector, cvector, cvector)
0xec3: @ GetPosition(Stack[-2])
0xec4: Pop(0)
0xec5: @@ GetPosition(Stack[-1]); Obj=5 // @poff=166
0xec6: Pop(0)
0xec7: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xec8: Return(); Pop(4)

0xec9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xeca: @ GetPosition(Stack[-3])
0xecb: Pop(0)
0xecc: @@ GetPosition(Stack[-2]); Obj=7 // @poff=166
0xecd: Pop(0)
0xece: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xecf: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xed0: Return(); Pop(6)

0xed1: PushEmpty(bool, bool)
0xed2: @ IsPlayerActor(Stack[-3], Stack[-1])
0xed3: Pop(0)
0xed4: Stack[-1] = Stack[-4]
0xed5: Return(); Pop(2)

0xed6: PushEmpty(bool, bool)
0xed7: Push("HasProperty") // @poff=444
0xed8: Push((int) 2)
0xed9: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xeda: Pop(1); Push((bool) Stack[-1] == 0)
0xedb: IF (Stack[-1] == 0) GOTO 0xede; Pop(1)

0xedc: Stack[-5] = (bool) 0
0xedd: Return(); Pop(2)

0xede: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=468
0xedf: Pop(0)
0xee0: Stack[-1] = Stack[-5]
0xee1: Return(); Pop(2)

0xee2: PushEmpty(float, float)
0xee3: PushEmpty(bool, object, string)
0xee4: Stack[-10] = Stack[-2]
0xee5: Stack[-9] = Stack[-1]
0xee6: Call2 0xed6

0xee7: Pop(2)
0xee8: Pop(1); Push((bool) Stack[-1] == 0)
0xee9: IF (Stack[-1] == 0) GOTO 0xeec; Pop(1)

0xeea: Stack[-8] = (bool) 0
0xeeb: Return(); Pop(2)

0xeec: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=480
0xeed: Pop(0)
0xeee: PushEmpty(float, float, float, float)
0xeef: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xef0: Stack[-8] = Stack[-2]
0xef1: Stack[-7] = Stack[-1]
0xef2: Call2 0x107b

0xef3: Pop(3)
0xef4: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=492
0xef5: Pop(1)
0xef6: Stack[-8] = (bool) 1
0xef7: Return(); Pop(2)

0xef8: PushEmpty(int, int)
0xef9: @@ GetProperty(Stack[-4], Stack[-1]); Obj=5 // @poff=480
0xefa: Pop(0)
0xefb: Pop(0); Push(Stack[-1] + Stack[-3]);
0xefc: @@ SetProperty(Stack[-5], Stack[-1]); Obj=6 // @poff=492
0xefd: Pop(1)
0xefe: Return(); Pop(2)

0xeff: PushEmpty(bool, bool)
0xf00: @@ IsDead(Stack[-1]); Obj=3 // @poff=504
0xf01: Pop(0)
0xf02: Stack[-1] = Stack[-4]
0xf03: Return(); Pop(2)

0xf04: PushEmpty(object, object, object, object)
0xf05: Pop(0); PushNull((bool) Stack[-5] == 0)
0xf06: IF (Stack[-1] == 0) GOTO 0xf09; Pop(1)

0xf07: Stack[-6] = (bool) 0
0xf08: Return(); Pop(4)

0xf09: PushEmpty(bool)
0xf0a: Stack[-1] = (bool) 0
0xf0b: Push("IsDead") // @poff=511
0xf0c: Push((int) 1)
0xf0d: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xf0e: IF (Stack[-1] == 0) GOTO 0xf15; Pop(1)

0xf0f: PushEmpty(bool, object)
0xf10: Stack[-8] = Stack[-1]
0xf11: Call2 0xeff

0xf12: Pop(1)
0xf13: IF (Stack[-1] == 0) GOTO 0xf15; Pop(1)

0xf14: Stack[-1] = (bool) 1
0xf15: IF (Stack[-1] == 0) GOTO 0xf18; Pop(1)

0xf16: Stack[-6] = (bool) 0
0xf17: Return(); Pop(4)

0xf18: @ GetScene(Stack[-2])
0xf19: Pop(0)
0xf1a: Pop(0); PushNull((bool) Stack[-2] == 0)
0xf1b: IF (Stack[-1] == 0) GOTO 0xf1e; Pop(1)

0xf1c: Stack[-6] = (bool) 0
0xf1d: Return(); Pop(4)

0xf1e: @@ GetScene(Stack[-1]); Obj=5 // @poff=525
0xf1f: Pop(0)
0xf20: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xf21: IF (Stack[-1] == 0) GOTO 0xf24; Pop(1)

0xf22: Stack[-6] = (bool) 0
0xf23: Return(); Pop(4)

0xf24: Stack[-6] = (bool) 1
0xf25: Return(); Pop(4)

0xf26: Stack[-1] = 0
0xf27: Stack[-2] = 0
0xf28: PushEmpty(int, int)
0xf29: PushEmpty(bool, object)
0xf2a: Stack[-5] = Stack[-1]
0xf2b: Call2 0xf04

0xf2c: Pop(1)
0xf2d: Pop(1); Push((bool) Stack[-1] == 0)
0xf2e: IF (Stack[-1] == 0) GOTO 0xf31; Pop(1)

0xf2f: Stack[-4] = (bool) 0
0xf30: Return(); Pop(2)

0xf31: PushEmpty(bool, object, string)
0xf32: Stack[-6] = Stack[-2]
0xf33: Stack[-1] = "noaccess" // @poff=534
0xf34: Call2 0xed6

0xf35: Pop(2)
0xf36: Pop(1); Push((bool) Stack[-1] == 0)
0xf37: IF (Stack[-1] == 0) GOTO 0xf3a; Pop(1)

0xf38: Stack[-4] = (bool) 1
0xf39: Return(); Pop(2)

0xf3a: Push("noaccess") // @poff=534
0xf3b: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=480
0xf3c: Pop(1)
0xf3d: Push((int) 0)
0xf3e: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xf3f: Return(); Pop(2)

0xf40: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xf41: Pop(0); PushNull((bool) Stack[-15] == 0)
0xf42: IF (Stack[-1] == 0) GOTO 0xf44; Pop(1)

0xf43: Return(); Pop(14)

0xf44: @ IsDead(Stack[-7])
0xf45: Pop(0)
0xf46: Push(Stack[-7])
0xf47: IF (Stack[-1] == 0) GOTO 0xf49; Pop(1)

0xf48: Return(); Pop(14)

0xf49: @ GetSecondaryAnimationType(Stack[-6])
0xf4a: Pop(0)
0xf4b: Push((int) 0)
0xf4c: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xf4d: IF (Stack[-1] == 0) GOTO 0xf4f; Pop(1)

0xf4e: Return(); Pop(14)

0xf4f: @@ GetPosition(Stack[-5]); Obj=15 // @poff=166
0xf50: Pop(0)
0xf51: @ GetPosition(Stack[-4])
0xf52: Pop(0)
0xf53: @ GetDirection(Stack[-3])
0xf54: Pop(0)
0xf55: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xf56: Push(CvectorIndex(Stack[-2], 0))
0xf57: Push(CvectorIndex(Stack[-4], 0))
0xf58: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf59: Push(CvectorIndex(Stack[-3], 2))
0xf5a: Push(CvectorIndex(Stack[-5], 2))
0xf5b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf5c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf5d: Push((int) 0)
0xf5e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf5f: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf60: Stack[-1] = "fhit" // @poff=552
0xf61: GOTO 0xf63

0xf62: Stack[-1] = "bhit" // @poff=562
0xf63: Push("hit_react") // @poff=572
0xf64: Push("1") // @poff=592
0xf65: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf66: Push("2") // @poff=596
0xf67: Pop(1); Push(Stack[-4] + Stack[-1]);
0xf68: Push((int) -10)
0xf69: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf6a: Pop(4)
0xf6b: Return(); Pop(14)

0xf6c: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xf6d: PushEmpty(bool)
0xf6e: Stack[-1] = (bool) 0
0xf6f: PushEmpty(bool)
0xf70: Stack[-1] = (bool) 0
0xf71: Push(Stack[-23])
0xf72: IF (Stack[-1] == 0) GOTO 0xf77; Pop(1)

0xf73: Push((int) 4)
0xf74: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xf75: IF (Stack[-1] == 0) GOTO 0xf77; Pop(1)

0xf76: Stack[-1] = (bool) 1
0xf77: IF (Stack[-1] == 0) GOTO 0xf7c; Pop(1)

0xf78: Push((int) 5)
0xf79: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xf7a: IF (Stack[-1] == 0) GOTO 0xf7c; Pop(1)

0xf7b: Stack[-1] = (bool) 1
0xf7c: IF (Stack[-1] == 0) GOTO 0xfab; Pop(1)

0xf7d: PushEmpty(cvector, cvector)
0xf7e: PushEmpty(cvector, object)
0xf7f: Stack[-25] = Stack[-1]
0xf80: Call2 0xec2

0xf81: Stack[-2] = Stack[-3]
0xf82: Pop(2)
0xf83: Call2 0x1071

0xf84: Stack[-2] = Stack[-11]
0xf85: Pop(2)
0xf86: @ CreateVectorVector(Stack[-8])
0xf87: Pop(0)
0xf88: Stack[-7] = (int) 1
0xf89: Push("hit") // @poff=554
0xf8a: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf8b: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xf8c: Pop(1)
0xf8d: Pop(0); Push((bool) Stack[-6] == 0)
0xf8e: IF (Stack[-1] == 0) GOTO 0xf90; Pop(1)

0xf8f: GOTO 0xf99

0xf90: Pop(0); Push(Stack[-4] | Stack[-9]);
0xf91: Push((float)0.7071067690849304)
0xf92: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf93: IF (Stack[-1] == 0) GOTO 0xf96; Pop(1)

0xf94: @@ add(Stack[-5]); Obj=8 // @poff=600
0xf95: Pop(0)
0xf96: Push((int) 1)
0xf97: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xf98: GOTO 0xf89

0xf99: @@ size(Stack[-3]); Obj=8 // @poff=604
0xf9a: Pop(0)
0xf9b: Push(Stack[-3])
0xf9c: IF (Stack[-1] == 0) GOTO 0xfaa; Pop(1)

0xf9d: @ irand(Stack[-2], Stack[-3])
0xf9e: Pop(0)
0xf9f: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=609
0xfa0: Pop(0)
0xfa1: PushEmpty(object, int, float, cvector, cvector)
0xfa2: Stack[-26] = Stack[-5]
0xfa3: Stack[-25] = Stack[-4]
0xfa4: Stack[-24] = Stack[-3]
0xfa5: Stack[-6] = Stack[-2]
0xfa6: Stack[-1] = -Stack[-14]; Pop(0);
0xfa7: Call2 0xfb0

0xfa8: Pop(5)
0xfa9: Return(); Pop(18)

0xfaa: Stack[-8] = 0
0xfab: PushEmpty(object)
0xfac: Stack[-22] = Stack[-1]
0xfad: Call2 0xf40

0xfae: Pop(1)
0xfaf: Return(); Pop(18)

0xfb0: PushEmpty(object, object, object, object)
0xfb1: @ GetScene(Stack[-2])
0xfb2: Pop(0)
0xfb3: Push("scripted") // @poff=613
0xfb4: Push("blood_dir.xml") // @poff=631
0xfb5: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xfb6: Pop(2)
0xfb7: PushEmpty(object)
0xfb8: Stack[-10] = Stack[-1]
0xfb9: Call2 0xf40

0xfba: Pop(1)
0xfbb: Return(); Pop(4)

0xfbc: Stack[-1] = 0
0xfbd: Stack[-2] = 0
0xfbe: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xfbf: @@ GetPosition(Stack[-3]); Obj=7 // @poff=166
0xfc0: Pop(0)
0xfc1: @ GetPosition(Stack[-2])
0xfc2: Pop(0)
0xfc3: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xfc4: Push(CvectorIndex(Stack[-1], 0))
0xfc5: Push(CvectorIndex(Stack[-2], 2))
0xfc6: @ RotateAsync(Stack[-2], Stack[-1])
0xfc7: Pop(2)
0xfc8: Return(); Pop(6)

0xfc9: PushEmpty(bool, bool)
0xfca: @ IsLoaded(Stack[-1])
0xfcb: Pop(0)
0xfcc: Stack[-1] = Stack[-3]
0xfcd: Return(); Pop(2)

0xfce: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xfcf: @@ GetPosition(Stack[-8]); Obj=20 // @poff=166
0xfd0: Pop(0)
0xfd1: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=302
0xfd2: Pop(0)
0xfd3: Push(CvectorIndex(Stack[-8], 1))
0xfd4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xfd5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xfd6: @ GetPosition(Stack[-7])
0xfd7: Pop(0)
0xfd8: @ GetEyesHeight(Stack[-9])
0xfd9: Pop(0)
0xfda: Push(CvectorIndex(Stack[-7], 1))
0xfdb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xfdc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xfdd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xfde: Push(CvectorIndex(Stack[-6], 1))
0xfdf: Stack[-1] = (int) 0
0xfe0: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xfe1: Pop(0); Push(Stack[-6] | Stack[-6]);
0xfe2: Pop(1); Push(Sqrt(Stack[-1]))
0xfe3: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xfe4: Stack[-5] = -Stack[-6]; Pop(0);
0xfe5: Pop(0); Push(Stack[-6] * Stack[-19]);
0xfe6: PushEmpty(cvector, cvector)
0xfe7: Push([0.0, 1.0, 0.0])
0xfe8: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xfe9: Call2 0x1071

0xfea: Pop(1)
0xfeb: Push((int) 25)
0xfec: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfed: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfee: Push([0.0, 10.0, 0.0])
0xfef: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xff0: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xff1: @ IsOverrideActive(Stack[-2])
0xff2: Pop(0)
0xff3: Push(Stack[-2])
0xff4: IF (Stack[-1] == 0) GOTO 0xff7; Pop(1)

0xff5: Stack[-21] = (bool) 0
0xff6: Return(); Pop(18)

0xff7: @ StopWorld()
0xff8: Pop(0)
0xff9: @ CameraTransit(Stack[-3], Stack[-5])
0xffa: Pop(0)
0xffb: Push(CvectorIndex(Stack[-4], 0))
0xffc: Push(CvectorIndex(Stack[-5], 2))
0xffd: @ Rotate(Stack[-2], Stack[-1])
0xffe: Pop(2)
0xfff: PushEmpty(bool)
0x1000: Call2 0x1519

0x1001: Pop(0)
0x1002: IF (Stack[-1] == 0) GOTO 0x1004; Pop(1)

0x1003: GOTO 0x100c

0x1004: Push("head") // @poff=316
0x1005: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1006: Pop(1)
0x1007: Push(Stack[-1])
0x1008: IF (Stack[-1] == 0) GOTO 0x100c; Pop(1)

0x1009: Push("head") // @poff=316
0x100a: @ LookAsyncCamera(Stack[-1])
0x100b: Pop(1)
0x100c: @ CameraWaitForPlayFinish()
0x100d: Pop(0)
0x100e: @ ResumeWorld()
0x100f: Pop(0)
0x1010: Stack[-21] = (bool) 1
0x1011: Return(); Pop(18)

0x1012: PushEmpty(bool, bool)
0x1013: @ CameraSwitchToNormal()
0x1014: Pop(0)
0x1015: PushEmpty(bool)
0x1016: Call2 0x1519

0x1017: Pop(0)
0x1018: IF (Stack[-1] == 0) GOTO 0x101a; Pop(1)

0x1019: GOTO 0x1022

0x101a: Push("head") // @poff=316
0x101b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x101c: Pop(1)
0x101d: Push(Stack[-1])
0x101e: IF (Stack[-1] == 0) GOTO 0x1022; Pop(1)

0x101f: Push("head") // @poff=316
0x1020: @ UnlookAsync(Stack[-1])
0x1021: Pop(1)
0x1022: Return(); Pop(2)

0x1023: PushEmpty(float, float, float, float)
0x1024: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1025: Pop(0)
0x1026: Push((bool) 0)
0x1027: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1028: Pop(1)
0x1029: Return(); Pop(4)

0x102a: PushEmpty(float, float, float, float)
0x102b: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x102c: Pop(0)
0x102d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x102e: Pop(0)
0x102f: Return(); Pop(4)

0x1030: PushEmpty(float, cvector, float, cvector)
0x1031: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=302
0x1032: Pop(0)
0x1033: Stack[-1] = [0.0, 0.0, 0.0]
0x1034: Push(CvectorIndex(Stack[-1], 1))
0x1035: Stack[-3] = Stack[-1]
0x1036: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1037: Push("head") // @poff=316
0x1038: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x1039: Pop(1)
0x103a: Return(); Pop(4)

0x103b: PushEmpty(bool)
0x103c: Call2 0x1519

0x103d: Pop(0)
0x103e: IF (Stack[-1] == 0) GOTO 0x1041; Pop(1)

0x103f: @ lshStopSpeech()
0x1040: Pop(0)
0x1041: Return(); Pop(0)

0x1042: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x1043: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x1044: Pop(0)
0x1045: Pop(0); Push((bool) Stack[-8] == 0)
0x1046: IF (Stack[-1] == 0) GOTO 0x105b; Pop(1)

0x1047: Stack[-7] = (int) 0
0x1048: Push((int) 1)
0x1049: Pop(1); Push(Stack[-8] + Stack[-1]);
0x104a: Pop(1); Push(Stack[-18] + Stack[-1]);
0x104b: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x104c: Pop(1)
0x104d: Pop(0); Push((bool) Stack[-6] == 0)
0x104e: IF (Stack[-1] == 0) GOTO 0x1050; Pop(1)

0x104f: GOTO 0x1053

0x1050: Push((int) 1)
0x1051: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x1052: GOTO 0x1048

0x1053: Pop(0); Push((bool) Stack[-7] == 0)
0x1054: IF (Stack[-1] == 0) GOTO 0x1056; Pop(1)

0x1055: Return(); Pop(16)

0x1056: @ irand(Stack[-5], Stack[-7])
0x1057: Pop(0)
0x1058: Push((int) 1)
0x1059: Pop(1); Push(Stack[-6] + Stack[-1]);
0x105a: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x105b: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x105c: Pop(0)
0x105d: Push(Stack[-4])
0x105e: IF (Stack[-1] == 0) GOTO 0x106a; Pop(1)

0x105f: @ GetEyesHeight(Stack[-3])
0x1060: Pop(0)
0x1061: @ GetDirection(Stack[-2])
0x1062: Pop(0)
0x1063: Push((int) 50)
0x1064: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x1065: Push(CvectorIndex(Stack[-1], 1))
0x1066: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x1067: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1068: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x1069: Pop(0)
0x106a: Return(); Pop(16)

0x106b: PushEmpty(object, object)
0x106c: @ self(Stack[-1])
0x106d: Pop(0)
0x106e: Stack[-1] = Stack[-3]
0x106f: Return(); Pop(2)

0x1070: Stack[-1] = 0
0x1071: PushEmpty(float, float)
0x1072: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1073: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1074: Push((float)9.999999974752427e-07)
0x1075: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1076: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1077: Stack[-4] = [0.0, 0.0, 0.0]
0x1078: Return(); Pop(2)

0x1079: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x107a: Return(); Pop(2)

0x107b: PushEmpty()
0x107c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x107d: IF (Stack[-1] == 0) GOTO 0x1080; Pop(1)

0x107e: Stack[-2] = Stack[-4]
0x107f: Return(); Pop(0)

0x1080: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x1081: IF (Stack[-1] == 0) GOTO 0x1084; Pop(1)

0x1082: Stack[-1] = Stack[-4]
0x1083: Return(); Pop(0)

0x1084: Stack[-3] = Stack[-4]
0x1085: Return(); Pop(0)

0x1086: PushEmpty()
0x1087: Pop(0); Push(Stack[-2] | Stack[-1]);
0x1088: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1089: Pop(0); Push(Stack[-3] | Stack[-3]);
0x108a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x108b: Pop(1); Push(Sqrt(Stack[-1]))
0x108c: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x108d: Return(); Pop(0)

0x108e: PushEmpty()
0x108f: Push(CvectorIndex(Stack[-2], 0))
0x1090: Push(CvectorIndex(Stack[-2], 0))
0x1091: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1092: Push(CvectorIndex(Stack[-3], 2))
0x1093: Push(CvectorIndex(Stack[-3], 2))
0x1094: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1095: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1096: Return(); Pop(0)

0x1097: PushEmpty()
0x1098: Push(CvectorIndex(Stack[-1], 0))
0x1099: Push(CvectorIndex(Stack[-2], 0))
0x109a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x109b: Push(CvectorIndex(Stack[-2], 2))
0x109c: Push(CvectorIndex(Stack[-3], 2))
0x109d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x109e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x109f: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x10a0: Return(); Pop(0)

0x10a1: PushEmpty()
0x10a2: PushEmpty(float, cvector, cvector)
0x10a3: Stack[-5] = Stack[-2]
0x10a4: Stack[-4] = Stack[-1]
0x10a5: Call2 0x108e

0x10a6: Pop(2)
0x10a7: PushEmpty(float, cvector)
0x10a8: Stack[-5] = Stack[-1]
0x10a9: Call2 0x1097

0x10aa: Pop(1)
0x10ab: PushEmpty(float, cvector)
0x10ac: Stack[-5] = Stack[-1]
0x10ad: Call2 0x1097

0x10ae: Pop(1)
0x10af: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10b0: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x10b1: Return(); Pop(0)

0x10b2: PushEmpty(int, int)
0x10b3: @ GetVariable(Stack[-3], Stack[-1])
0x10b4: Pop(0)
0x10b5: Stack[-1] = Stack[-4]
0x10b6: Return(); Pop(2)

0x10b7: PushEmpty(object, object)
0x10b8: @ CreateIntVector(Stack[-1])
0x10b9: Pop(0)
0x10ba: @@ add(Stack[-4]); Obj=1 // @poff=600
0x10bb: Pop(0)
0x10bc: @@ add(Stack[-3]); Obj=1 // @poff=600
0x10bd: Pop(0)
0x10be: Push((int) 3)
0x10bf: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x10c0: Pop(1)
0x10c1: Return(); Pop(2)

0x10c2: Stack[-1] = 0
0x10c3: PushEmpty(int, int)
0x10c4: PushEmpty(object, string, int)
0x10c5: Stack[-7] = Stack[-3]
0x10c6: Stack[-2] = "money" // @poff=659
0x10c7: Stack[-6] = Stack[-1]
0x10c8: Call2 0xef8

0x10c9: Pop(3)
0x10ca: Push((int) 0)
0x10cb: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x10cc: IF (Stack[-1] == 0) GOTO 0x10d5; Pop(1)

0x10cd: Push("Money") // @poff=671
0x10ce: @ GetInvItemByName(Stack[-2], Stack[-1])
0x10cf: Pop(1)
0x10d0: PushEmpty(int, int)
0x10d1: Stack[-3] = Stack[-2]
0x10d2: Stack[-5] = Stack[-1]
0x10d3: Call2 0x10b7

0x10d4: Pop(2)
0x10d5: Return(); Pop(2)

0x10d6: PushEmpty()
0x10d7: Pop(0); Push((bool) Stack[-2] == 0)
0x10d8: IF (Stack[-1] == 0) GOTO 0x10db; Pop(1)

0x10d9: Stack[-3] = (bool) 0
0x10da: Return(); Pop(0)

0x10db: Push((int) 0)
0x10dc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10dd: IF (Stack[-1] == 0) GOTO 0x10e2; Pop(1)

0x10de: Push((int) 8)
0x10df: @ SendWorldWndMessage(Stack[-1])
0x10e0: Pop(1)
0x10e1: GOTO 0x10eb

0x10e2: Push((int) 0)
0x10e3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x10e4: IF (Stack[-1] == 0) GOTO 0x10e9; Pop(1)

0x10e5: Push((int) 9)
0x10e6: @ SendWorldWndMessage(Stack[-1])
0x10e7: Pop(1)
0x10e8: GOTO 0x10eb

0x10e9: Stack[-3] = (bool) 0
0x10ea: Return(); Pop(0)

0x10eb: PushEmpty(float)
0x10ec: Stack[-2] = Stack[-1]
0x10ed: Call2 0x10f9

0x10ee: Pop(1)
0x10ef: PushEmpty(bool, object, string, float, float, float)
0x10f0: Stack[-8] = Stack[-5]
0x10f1: Stack[-4] = "reputation" // @poff=683
0x10f2: Stack[-7] = Stack[-3]
0x10f3: Stack[-2] = (int) 0
0x10f4: Stack[-1] = (int) 1
0x10f5: Call2 0xee2

0x10f6: Pop(6)
0x10f7: Stack[-3] = (bool) 1
0x10f8: Return(); Pop(0)

0x10f9: PushEmpty(object, object)
0x10fa: @ CreateFloatVector(Stack[-1])
0x10fb: Pop(0)
0x10fc: @@ add(Stack[-3]); Obj=1 // @poff=600
0x10fd: Pop(0)
0x10fe: Push((int) 16)
0x10ff: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1100: Pop(1)
0x1101: Return(); Pop(2)

0x1102: Stack[-1] = 0
0x1103: PushEmpty(float, float)
0x1104: @ GetGameTime(Stack[-1])
0x1105: Pop(0)
0x1106: Push((int) 1)
0x1107: PushEmpty(int)
0x1108: Push((int) 24)
0x1109: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x110a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x110b: Return(); Pop(2)

0x110c: PushEmpty()
0x110d: Push((int) 100)
0x110e: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=705
0x110f: Pop(1)
0x1110: Return(); Pop(0)

0x1111: PushEmpty()
0x1112: Push((int) 500)
0x1113: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=705
0x1114: Pop(1)
0x1115: Return(); Pop(0)

0x1116: PushEmpty()
0x1117: Push((int) 1000)
0x1118: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=705
0x1119: Pop(1)
0x111a: Return(); Pop(0)

0x111b: PushEmpty()
0x111c: Push((int) 2000)
0x111d: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=705
0x111e: Pop(1)
0x111f: Return(); Pop(0)

0x1120: PushEmpty()
0x1121: Push((int) 3000)
0x1122: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=705
0x1123: Pop(1)
0x1124: Return(); Pop(0)

0x1125: PushEmpty()
0x1126: Push((int) 4000)
0x1127: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=705
0x1128: Pop(1)
0x1129: Return(); Pop(0)

0x112a: PushEmpty()
0x112b: PushEmpty(int, string)
0x112c: Stack[-1] = "branch" // @poff=720
0x112d: Call2 0x10b2

0x112e: Pop(1)
0x112f: Push((int) 0)
0x1130: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1131: IF (Stack[-1] == 0) GOTO 0x1134; Pop(1)

0x1132: Stack[-2] = (bool) 1
0x1133: Return(); Pop(0)

0x1134: Stack[-2] = (bool) 0
0x1135: Return(); Pop(0)

0x1136: PushEmpty()
0x1137: PushEmpty(int, string)
0x1138: Stack[-1] = "branch" // @poff=720
0x1139: Call2 0x10b2

0x113a: Pop(1)
0x113b: Push((int) 1)
0x113c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x113d: IF (Stack[-1] == 0) GOTO 0x1140; Pop(1)

0x113e: Stack[-2] = (bool) 1
0x113f: Return(); Pop(0)

0x1140: Stack[-2] = (bool) 0
0x1141: Return(); Pop(0)

0x1142: PushEmpty()
0x1143: PushEmpty(bool, object)
0x1144: Stack[-3] = Stack[-1]
0x1145: Call2 0x11ec

0x1146: Pop(1)
0x1147: IF (Stack[-1] == 0) GOTO 0x114a; Pop(1)

0x1148: Stack[-2] = (bool) 1
0x1149: Return(); Pop(0)

0x114a: Stack[-2] = (bool) 0
0x114b: Return(); Pop(0)

0x114c: PushEmpty()
0x114d: PushEmpty(bool, object)
0x114e: Stack[-3] = Stack[-1]
0x114f: Call2 0x11f7

0x1150: Pop(1)
0x1151: IF (Stack[-1] == 0) GOTO 0x1154; Pop(1)

0x1152: Stack[-2] = (bool) 1
0x1153: Return(); Pop(0)

0x1154: Stack[-2] = (bool) 0
0x1155: Return(); Pop(0)

0x1156: PushEmpty()
0x1157: PushEmpty(bool, object)
0x1158: Stack[-3] = Stack[-1]
0x1159: Call2 0x1202

0x115a: Pop(1)
0x115b: IF (Stack[-1] == 0) GOTO 0x115e; Pop(1)

0x115c: Stack[-2] = (bool) 1
0x115d: Return(); Pop(0)

0x115e: Stack[-2] = (bool) 0
0x115f: Return(); Pop(0)

0x1160: PushEmpty()
0x1161: PushEmpty(bool, object)
0x1162: Stack[-3] = Stack[-1]
0x1163: Call2 0x120d

0x1164: Pop(1)
0x1165: IF (Stack[-1] == 0) GOTO 0x1168; Pop(1)

0x1166: Stack[-2] = (bool) 1
0x1167: Return(); Pop(0)

0x1168: Stack[-2] = (bool) 0
0x1169: Return(); Pop(0)

0x116a: PushEmpty()
0x116b: PushEmpty(bool, object)
0x116c: Stack[-3] = Stack[-1]
0x116d: Call2 0x1218

0x116e: Pop(1)
0x116f: IF (Stack[-1] == 0) GOTO 0x1172; Pop(1)

0x1170: Stack[-2] = (bool) 1
0x1171: Return(); Pop(0)

0x1172: Stack[-2] = (bool) 0
0x1173: Return(); Pop(0)

0x1174: PushEmpty()
0x1175: PushEmpty(bool, object)
0x1176: Stack[-3] = Stack[-1]
0x1177: Call2 0x1223

0x1178: Pop(1)
0x1179: IF (Stack[-1] == 0) GOTO 0x117c; Pop(1)

0x117a: Stack[-2] = (bool) 1
0x117b: Return(); Pop(0)

0x117c: Stack[-2] = (bool) 0
0x117d: Return(); Pop(0)

0x117e: PushEmpty()
0x117f: PushEmpty(bool, object)
0x1180: Stack[-3] = Stack[-1]
0x1181: Call2 0x122e

0x1182: Pop(1)
0x1183: IF (Stack[-1] == 0) GOTO 0x1186; Pop(1)

0x1184: Stack[-2] = (bool) 1
0x1185: Return(); Pop(0)

0x1186: Stack[-2] = (bool) 0
0x1187: Return(); Pop(0)

0x1188: PushEmpty()
0x1189: PushEmpty(bool, object)
0x118a: Stack[-3] = Stack[-1]
0x118b: Call2 0x1235

0x118c: Pop(1)
0x118d: IF (Stack[-1] == 0) GOTO 0x1190; Pop(1)

0x118e: Stack[-2] = (bool) 1
0x118f: Return(); Pop(0)

0x1190: Stack[-2] = (bool) 0
0x1191: Return(); Pop(0)

0x1192: PushEmpty()
0x1193: PushEmpty(bool, object)
0x1194: Stack[-3] = Stack[-1]
0x1195: Call2 0x123c

0x1196: Pop(1)
0x1197: IF (Stack[-1] == 0) GOTO 0x119a; Pop(1)

0x1198: Stack[-2] = (bool) 1
0x1199: Return(); Pop(0)

0x119a: Stack[-2] = (bool) 0
0x119b: Return(); Pop(0)

0x119c: PushEmpty()
0x119d: PushEmpty(bool, object)
0x119e: Stack[-3] = Stack[-1]
0x119f: Call2 0x1243

0x11a0: Pop(1)
0x11a1: IF (Stack[-1] == 0) GOTO 0x11a4; Pop(1)

0x11a2: Stack[-2] = (bool) 1
0x11a3: Return(); Pop(0)

0x11a4: Stack[-2] = (bool) 0
0x11a5: Return(); Pop(0)

0x11a6: PushEmpty()
0x11a7: PushEmpty(bool, object)
0x11a8: Stack[-3] = Stack[-1]
0x11a9: Call2 0x124a

0x11aa: Pop(1)
0x11ab: IF (Stack[-1] == 0) GOTO 0x11ae; Pop(1)

0x11ac: Stack[-2] = (bool) 1
0x11ad: Return(); Pop(0)

0x11ae: Stack[-2] = (bool) 0
0x11af: Return(); Pop(0)

0x11b0: PushEmpty()
0x11b1: PushEmpty(bool, object)
0x11b2: Stack[-3] = Stack[-1]
0x11b3: Call2 0x1251

0x11b4: Pop(1)
0x11b5: IF (Stack[-1] == 0) GOTO 0x11b8; Pop(1)

0x11b6: Stack[-2] = (bool) 1
0x11b7: Return(); Pop(0)

0x11b8: Stack[-2] = (bool) 0
0x11b9: Return(); Pop(0)

0x11ba: PushEmpty()
0x11bb: PushEmpty(bool, object)
0x11bc: Stack[-3] = Stack[-1]
0x11bd: Call2 0x1258

0x11be: Pop(1)
0x11bf: IF (Stack[-1] == 0) GOTO 0x11c2; Pop(1)

0x11c0: Stack[-2] = (bool) 1
0x11c1: Return(); Pop(0)

0x11c2: Stack[-2] = (bool) 0
0x11c3: Return(); Pop(0)

0x11c4: PushEmpty()
0x11c5: PushEmpty(bool, object)
0x11c6: Stack[-3] = Stack[-1]
0x11c7: Call2 0x125f

0x11c8: Pop(1)
0x11c9: IF (Stack[-1] == 0) GOTO 0x11cc; Pop(1)

0x11ca: Stack[-2] = (bool) 1
0x11cb: Return(); Pop(0)

0x11cc: Stack[-2] = (bool) 0
0x11cd: Return(); Pop(0)

0x11ce: PushEmpty()
0x11cf: PushEmpty(bool, object)
0x11d0: Stack[-3] = Stack[-1]
0x11d1: Call2 0x1266

0x11d2: Pop(1)
0x11d3: IF (Stack[-1] == 0) GOTO 0x11d6; Pop(1)

0x11d4: Stack[-2] = (bool) 1
0x11d5: Return(); Pop(0)

0x11d6: Stack[-2] = (bool) 0
0x11d7: Return(); Pop(0)

0x11d8: PushEmpty()
0x11d9: PushEmpty(bool, object)
0x11da: Stack[-3] = Stack[-1]
0x11db: Call2 0x126d

0x11dc: Pop(1)
0x11dd: IF (Stack[-1] == 0) GOTO 0x11e0; Pop(1)

0x11de: Stack[-2] = (bool) 1
0x11df: Return(); Pop(0)

0x11e0: Stack[-2] = (bool) 0
0x11e1: Return(); Pop(0)

0x11e2: PushEmpty()
0x11e3: PushEmpty(bool, object)
0x11e4: Stack[-3] = Stack[-1]
0x11e5: Call2 0x1274

0x11e6: Pop(1)
0x11e7: IF (Stack[-1] == 0) GOTO 0x11ea; Pop(1)

0x11e8: Stack[-2] = (bool) 1
0x11e9: Return(); Pop(0)

0x11ea: Stack[-2] = (bool) 0
0x11eb: Return(); Pop(0)

0x11ec: PushEmpty(float, float)
0x11ed: Push("money") // @poff=659
0x11ee: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=480
0x11ef: Pop(1)
0x11f0: Push((int) 100)
0x11f1: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x11f2: IF (Stack[-1] == 0) GOTO 0x11f5; Pop(1)

0x11f3: Stack[-4] = (bool) 1
0x11f4: Return(); Pop(2)

0x11f5: Stack[-4] = (bool) 0
0x11f6: Return(); Pop(2)

0x11f7: PushEmpty(float, float)
0x11f8: Push("money") // @poff=659
0x11f9: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=480
0x11fa: Pop(1)
0x11fb: Push((int) 500)
0x11fc: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x11fd: IF (Stack[-1] == 0) GOTO 0x1200; Pop(1)

0x11fe: Stack[-4] = (bool) 1
0x11ff: Return(); Pop(2)

0x1200: Stack[-4] = (bool) 0
0x1201: Return(); Pop(2)

0x1202: PushEmpty(float, float)
0x1203: Push("money") // @poff=659
0x1204: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=480
0x1205: Pop(1)
0x1206: Push((int) 1000)
0x1207: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1208: IF (Stack[-1] == 0) GOTO 0x120b; Pop(1)

0x1209: Stack[-4] = (bool) 1
0x120a: Return(); Pop(2)

0x120b: Stack[-4] = (bool) 0
0x120c: Return(); Pop(2)

0x120d: PushEmpty(float, float)
0x120e: Push("money") // @poff=659
0x120f: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=480
0x1210: Pop(1)
0x1211: Push((int) 2000)
0x1212: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1213: IF (Stack[-1] == 0) GOTO 0x1216; Pop(1)

0x1214: Stack[-4] = (bool) 1
0x1215: Return(); Pop(2)

0x1216: Stack[-4] = (bool) 0
0x1217: Return(); Pop(2)

0x1218: PushEmpty(float, float)
0x1219: Push("money") // @poff=659
0x121a: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=480
0x121b: Pop(1)
0x121c: Push((int) 3000)
0x121d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x121e: IF (Stack[-1] == 0) GOTO 0x1221; Pop(1)

0x121f: Stack[-4] = (bool) 1
0x1220: Return(); Pop(2)

0x1221: Stack[-4] = (bool) 0
0x1222: Return(); Pop(2)

0x1223: PushEmpty(float, float)
0x1224: Push("money") // @poff=659
0x1225: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=480
0x1226: Pop(1)
0x1227: Push((int) 4000)
0x1228: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1229: IF (Stack[-1] == 0) GOTO 0x122c; Pop(1)

0x122a: Stack[-4] = (bool) 1
0x122b: Return(); Pop(2)

0x122c: Stack[-4] = (bool) 0
0x122d: Return(); Pop(2)

0x122e: PushEmpty()
0x122f: PushEmpty(int)
0x1230: Call2 0x1103

0x1231: Pop(0)
0x1232: Push((int) 1)
0x1233: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1234: Return(); Pop(0)

0x1235: PushEmpty()
0x1236: PushEmpty(int)
0x1237: Call2 0x1103

0x1238: Pop(0)
0x1239: Push((int) 2)
0x123a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x123b: Return(); Pop(0)

0x123c: PushEmpty()
0x123d: PushEmpty(int)
0x123e: Call2 0x1103

0x123f: Pop(0)
0x1240: Push((int) 3)
0x1241: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1242: Return(); Pop(0)

0x1243: PushEmpty()
0x1244: PushEmpty(int)
0x1245: Call2 0x1103

0x1246: Pop(0)
0x1247: Push((int) 4)
0x1248: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1249: Return(); Pop(0)

0x124a: PushEmpty()
0x124b: PushEmpty(int)
0x124c: Call2 0x1103

0x124d: Pop(0)
0x124e: Push((int) 5)
0x124f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1250: Return(); Pop(0)

0x1251: PushEmpty()
0x1252: PushEmpty(int)
0x1253: Call2 0x1103

0x1254: Pop(0)
0x1255: Push((int) 6)
0x1256: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1257: Return(); Pop(0)

0x1258: PushEmpty()
0x1259: PushEmpty(int)
0x125a: Call2 0x1103

0x125b: Pop(0)
0x125c: Push((int) 7)
0x125d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x125e: Return(); Pop(0)

0x125f: PushEmpty()
0x1260: PushEmpty(int)
0x1261: Call2 0x1103

0x1262: Pop(0)
0x1263: Push((int) 8)
0x1264: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1265: Return(); Pop(0)

0x1266: PushEmpty()
0x1267: PushEmpty(int)
0x1268: Call2 0x1103

0x1269: Pop(0)
0x126a: Push((int) 9)
0x126b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x126c: Return(); Pop(0)

0x126d: PushEmpty()
0x126e: PushEmpty(int)
0x126f: Call2 0x1103

0x1270: Pop(0)
0x1271: Push((int) 10)
0x1272: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1273: Return(); Pop(0)

0x1274: PushEmpty()
0x1275: PushEmpty(int)
0x1276: Call2 0x1103

0x1277: Pop(0)
0x1278: Push((int) 11)
0x1279: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x127a: Return(); Pop(0)

0x127b: PushEmpty(int, int)
0x127c: Push("branch") // @poff=720
0x127d: @ GetVariable(Stack[-1], Stack[-2])
0x127e: Pop(1)
0x127f: Push((int) 0)
0x1280: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1281: IF (Stack[-1] == 0) GOTO 0x1285; Pop(1)

0x1282: Stack[-3] = (int) 1
0x1283: Return(); Pop(2)

0x1284: GOTO 0x128a

0x1285: Push((int) 1)
0x1286: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1287: IF (Stack[-1] == 0) GOTO 0x128a; Pop(1)

0x1288: Stack[-3] = (int) 2
0x1289: Return(); Pop(2)

0x128a: Stack[-3] = (int) 3
0x128b: Return(); Pop(2)

0x128c: PushEmpty(int, int)
0x128d: Push("branch") // @poff=720
0x128e: @ GetVariable(Stack[-1], Stack[-2])
0x128f: Pop(1)
0x1290: Stack[-1] = Stack[-3]
0x1291: Return(); Pop(2)

0x1292: PushEmpty()
0x1293: PushEmpty(int)
0x1294: Call2 0x128c

0x1295: Pop(0)
0x1296: Push((int) 1)
0x1297: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1298: IF (Stack[-1] == 0) GOTO 0x129c; Pop(1)

0x1299: @ WorkWithCorpse(Stack[-1])
0x129a: Pop(0)
0x129b: GOTO 0x129e

0x129c: @ Barter(Stack[-1])
0x129d: Pop(0)
0x129e: Return(); Pop(0)

0x129f: PushEmpty(int, bool, int, bool)
0x12a0: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x12a1: IF (Stack[-1] == 0) GOTO 0x12a6; Pop(1)

0x12a2: Push("GenerateMoney: iMin > iMax") // @poff=734
0x12a3: @ Trace(Stack[-1])
0x12a4: Pop(1)
0x12a5: Return(); Pop(4)

0x12a6: Stack[-2] = (int) 0
0x12a7: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x12a8: IF (Stack[-1] == 0) GOTO 0x12ad; Pop(1)

0x12a9: Pop(0); Push(Stack[-5] - Stack[-6]);
0x12aa: @ irand(Stack[-3], Stack[-1])
0x12ab: Pop(1)
0x12ac: GOTO 0x12b1

0x12ad: Push((int) 0)
0x12ae: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x12af: IF (Stack[-1] == 0) GOTO 0x12b1; Pop(1)

0x12b0: Return(); Pop(4)

0x12b1: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x12b2: Push((int) 0)
0x12b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b4: IF (Stack[-1] == 0) GOTO 0x12b6; Pop(1)

0x12b5: Return(); Pop(4)

0x12b6: PushEmpty(int, string)
0x12b7: Stack[-1] = "Money" // @poff=671
0x12b8: Call2 0x1396

0x12b9: Pop(1)
0x12ba: Push((int) 0)
0x12bb: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x12bc: Pop(2)
0x12bd: Return(); Pop(4)

0x12be: PushEmpty(object, int, bool, object, int, bool)
0x12bf: @ CreateInvItem(Stack[-3])
0x12c0: Pop(0)
0x12c1: @@ SetItemName(Stack[-7]); Obj=3 // @poff=788
0x12c2: Pop(0)
0x12c3: Push("Organ") // @poff=800
0x12c4: Push((int) 1)
0x12c5: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=492
0x12c6: Pop(2)
0x12c7: @@ GetItemID(Stack[-2]); Obj=3 // @poff=812
0x12c8: Pop(0)
0x12c9: Push((int) 0)
0x12ca: Push((int) 1)
0x12cb: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x12cc: Pop(2)
0x12cd: Return(); Pop(6)

0x12ce: Stack[-3] = 0
0x12cf: PushEmpty(int)
0x12d0: Call2 0x128c

0x12d1: Pop(0)
0x12d2: Push((int) 1)
0x12d3: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x12d4: IF (Stack[-1] == 0) GOTO 0x12d6; Pop(1)

0x12d5: Return(); Pop(0)

0x12d6: PushEmpty(string)
0x12d7: Stack[-1] = "liver" // @poff=822
0x12d8: Call2 0x12be

0x12d9: Pop(1)
0x12da: PushEmpty(string)
0x12db: Stack[-1] = "kidney" // @poff=834
0x12dc: Call2 0x12be

0x12dd: Pop(1)
0x12de: PushEmpty(string)
0x12df: Stack[-1] = "heart" // @poff=848
0x12e0: Call2 0x12be

0x12e1: Pop(1)
0x12e2: PushEmpty(string)
0x12e3: Stack[-1] = "blood" // @poff=860
0x12e4: Call2 0x12be

0x12e5: Pop(1)
0x12e6: Return(); Pop(0)

0x12e7: PushEmpty(int, bool, int, bool)
0x12e8: Push(Stack[-5])
0x12e9: IF (Stack[-1] == 0) GOTO 0x1340; Pop(1)

0x12ea: PushEmpty(int, int)
0x12eb: Stack[-2] = (int) 0
0x12ec: Push((int) 100)
0x12ed: PushEmpty(int)
0x12ee: Call2 0x1103

0x12ef: Pop(0)
0x12f0: Push((int) 100)
0x12f1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12f2: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x12f3: Call2 0x129f

0x12f4: Pop(2)
0x12f5: Push((int) 8)
0x12f6: @ irand(Stack[-3], Stack[-1])
0x12f7: Pop(1)
0x12f8: Push((int) 0)
0x12f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12fa: IF (Stack[-1] == 0) GOTO 0x1304; Pop(1)

0x12fb: PushEmpty(int, string)
0x12fc: Stack[-1] = "lemon" // @poff=872
0x12fd: Call2 0x1396

0x12fe: Pop(1)
0x12ff: Push((int) 0)
0x1300: Push((int) 1)
0x1301: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1302: Pop(3)
0x1303: GOTO 0x133f

0x1304: Push((int) 1)
0x1305: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1306: IF (Stack[-1] == 0) GOTO 0x1310; Pop(1)

0x1307: PushEmpty(int, string)
0x1308: Stack[-1] = "rusk" // @poff=884
0x1309: Call2 0x1396

0x130a: Pop(1)
0x130b: Push((int) 0)
0x130c: Push((int) 1)
0x130d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x130e: Pop(3)
0x130f: GOTO 0x133f

0x1310: Push((int) 2)
0x1311: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1312: IF (Stack[-1] == 0) GOTO 0x131c; Pop(1)

0x1313: PushEmpty(int, string)
0x1314: Stack[-1] = "hook" // @poff=894
0x1315: Call2 0x1396

0x1316: Pop(1)
0x1317: Push((int) 0)
0x1318: Push((int) 1)
0x1319: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x131a: Pop(3)
0x131b: GOTO 0x133f

0x131c: Push((int) 4)
0x131d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131e: IF (Stack[-1] == 0) GOTO 0x1328; Pop(1)

0x131f: PushEmpty(int, string)
0x1320: Stack[-1] = "syringe" // @poff=904
0x1321: Call2 0x1396

0x1322: Pop(1)
0x1323: Push((int) 0)
0x1324: Push((int) 1)
0x1325: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1326: Pop(3)
0x1327: GOTO 0x133f

0x1328: Push((int) 5)
0x1329: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132a: IF (Stack[-1] == 0) GOTO 0x1334; Pop(1)

0x132b: PushEmpty(int, string)
0x132c: Stack[-1] = "watch" // @poff=920
0x132d: Call2 0x1396

0x132e: Pop(1)
0x132f: Push((int) 0)
0x1330: Push((int) 1)
0x1331: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1332: Pop(3)
0x1333: GOTO 0x133f

0x1334: Push((int) 6)
0x1335: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1336: IF (Stack[-1] == 0) GOTO 0x133f; Pop(1)

0x1337: PushEmpty(int, string)
0x1338: Stack[-1] = "razor" // @poff=932
0x1339: Call2 0x1396

0x133a: Pop(1)
0x133b: Push((int) 0)
0x133c: Push((int) 1)
0x133d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x133e: Pop(3)
0x133f: GOTO 0x1395

0x1340: PushEmpty(int, int)
0x1341: Stack[-2] = (int) 0
0x1342: Push((int) 50)
0x1343: PushEmpty(int)
0x1344: Call2 0x1103

0x1345: Pop(0)
0x1346: Push((int) 50)
0x1347: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1348: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1349: Call2 0x129f

0x134a: Pop(2)
0x134b: Push((int) 7)
0x134c: @ irand(Stack[-3], Stack[-1])
0x134d: Pop(1)
0x134e: Push((int) 0)
0x134f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1350: IF (Stack[-1] == 0) GOTO 0x135a; Pop(1)

0x1351: PushEmpty(int, string)
0x1352: Stack[-1] = "beads" // @poff=944
0x1353: Call2 0x1396

0x1354: Pop(1)
0x1355: Push((int) 0)
0x1356: Push((int) 1)
0x1357: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1358: Pop(3)
0x1359: GOTO 0x1395

0x135a: Push((int) 1)
0x135b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135c: IF (Stack[-1] == 0) GOTO 0x1366; Pop(1)

0x135d: PushEmpty(int, string)
0x135e: Stack[-1] = "bracelet" // @poff=956
0x135f: Call2 0x1396

0x1360: Pop(1)
0x1361: Push((int) 0)
0x1362: Push((int) 1)
0x1363: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1364: Pop(3)
0x1365: GOTO 0x1395

0x1366: Push((int) 2)
0x1367: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1368: IF (Stack[-1] == 0) GOTO 0x1372; Pop(1)

0x1369: PushEmpty(int, string)
0x136a: Stack[-1] = "ear_ring" // @poff=974
0x136b: Call2 0x1396

0x136c: Pop(1)
0x136d: Push((int) 0)
0x136e: Push((int) 1)
0x136f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1370: Pop(3)
0x1371: GOTO 0x1395

0x1372: Push((int) 3)
0x1373: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1374: IF (Stack[-1] == 0) GOTO 0x137e; Pop(1)

0x1375: PushEmpty(int, string)
0x1376: Stack[-1] = "gold_ring" // @poff=992
0x1377: Call2 0x1396

0x1378: Pop(1)
0x1379: Push((int) 0)
0x137a: Push((int) 1)
0x137b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x137c: Pop(3)
0x137d: GOTO 0x1395

0x137e: Push((int) 4)
0x137f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1380: IF (Stack[-1] == 0) GOTO 0x138a; Pop(1)

0x1381: PushEmpty(int, string)
0x1382: Stack[-1] = "silver_ring" // @poff=1012
0x1383: Call2 0x1396

0x1384: Pop(1)
0x1385: Push((int) 0)
0x1386: Push((int) 1)
0x1387: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1388: Pop(3)
0x1389: GOTO 0x1395

0x138a: Push((int) 5)
0x138b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138c: IF (Stack[-1] == 0) GOTO 0x1395; Pop(1)

0x138d: PushEmpty(int, string)
0x138e: Stack[-1] = "flower" // @poff=1036
0x138f: Call2 0x1396

0x1390: Pop(1)
0x1391: Push((int) 0)
0x1392: Push((int) 1)
0x1393: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1394: Pop(3)
0x1395: Return(); Pop(4)

0x1396: PushEmpty(int, int)
0x1397: @ GetInvItemByName(Stack[-1], Stack[-3])
0x1398: Pop(0)
0x1399: Stack[-1] = Stack[-4]
0x139a: Return(); Pop(2)

0x139b: PushEmpty()
0x139c: PushEmpty(object)
0x139d: Stack[-2] = Stack[-1]
0x139e: Push(-1, 0); TaskCall(2)
0x139f: Call2 0x848

0x13a0: Pop(-1, 0); TaskReturn
0x13a1: Pop(1)
0x13a2: Return(); Pop(0)

0x13a3: PushEmpty(float, float)
0x13a4: Push("health") // @poff=1050
0x13a5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13a6: IF (Stack[-1] == 0) GOTO 0x13af; Pop(1)

0x13a7: Push("health") // @poff=1050
0x13a8: @ GetProperty(Stack[-1], Stack[-2])
0x13a9: Pop(1)
0x13aa: Push((int) 0)
0x13ab: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x13ac: IF (Stack[-1] == 0) GOTO 0x13af; Pop(1)

0x13ad: @ SignalDeath(Stack[-4])
0x13ae: Pop(0)
0x13af: Return(); Pop(2)

0x13b0: PushEmpty()
0x13b1: PushEmpty(object)
0x13b2: Stack[-2] = Stack[-1]
0x13b3: Call2 0x139b

0x13b4: Pop(1)
0x13b5: Return(); Pop(0)

0x13b6: PushEmpty()
0x13b7: PushEmpty(object, int, float)
0x13b8: Stack[-7] = Stack[-3]
0x13b9: Stack[-6] = Stack[-2]
0x13ba: Stack[-5] = Stack[-1]
0x13bb: Call2 0xf6c

0x13bc: Pop(3)
0x13bd: Return(); Pop(0)

0x13be: PushEmpty()
0x13bf: PushEmpty(object, int, float, cvector, cvector)
0x13c0: Stack[-11] = Stack[-5]
0x13c1: Stack[-10] = Stack[-4]
0x13c2: Stack[-9] = Stack[-3]
0x13c3: Stack[-7] = Stack[-2]
0x13c4: Stack[-6] = Stack[-1]
0x13c5: Call2 0xfb0

0x13c6: Pop(5)
0x13c7: Return(); Pop(0)

0x13c8: PushEmpty()
0x13c9: Push("unholster") // @poff=1064
0x13ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13cb: IF (Stack[-1] == 0) GOTO 0x13d3; Pop(1)

0x13cc: PushEmpty(bool, object)
0x13cd: Stack[-4] = Stack[-1]
0x13ce: Call2 0x14eb

0x13cf: Stack[-2] = Stack[-5]
0x13d0: Pop(2)
0x13d1: Return(); Pop(0)

0x13d2: GOTO 0x13e6

0x13d3: Push("player_shot") // @poff=1084
0x13d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13d5: IF (Stack[-1] == 0) GOTO 0x13dd; Pop(1)

0x13d6: PushEmpty(bool, object)
0x13d7: Stack[-4] = Stack[-1]
0x13d8: Call2 0x14f0

0x13d9: Stack[-2] = Stack[-5]
0x13da: Pop(2)
0x13db: Return(); Pop(0)

0x13dc: GOTO 0x13e6

0x13dd: Push("battle") // @poff=1108
0x13de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13df: IF (Stack[-1] == 0) GOTO 0x13e6; Pop(1)

0x13e0: PushEmpty(bool, object)
0x13e1: Stack[-4] = Stack[-1]
0x13e2: Call2 0x1507

0x13e3: Stack[-2] = Stack[-5]
0x13e4: Pop(2)
0x13e5: Return(); Pop(0)

0x13e6: Stack[-3] = (bool) 0
0x13e7: Return(); Pop(0)

0x13e8: PushEmpty()
0x13e9: Push("unholster") // @poff=1064
0x13ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13eb: IF (Stack[-1] == 0) GOTO 0x13f1; Pop(1)

0x13ec: PushEmpty(object)
0x13ed: Stack[-3] = Stack[-1]
0x13ee: Call2 0x14ee

0x13ef: Pop(1)
0x13f0: GOTO 0x1400

0x13f1: Push("player_shot") // @poff=1084
0x13f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13f3: IF (Stack[-1] == 0) GOTO 0x13f9; Pop(1)

0x13f4: PushEmpty(object)
0x13f5: Stack[-3] = Stack[-1]
0x13f6: Call2 0x14ff

0x13f7: Pop(1)
0x13f8: GOTO 0x1400

0x13f9: Push("battle") // @poff=1108
0x13fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13fb: IF (Stack[-1] == 0) GOTO 0x1400; Pop(1)

0x13fc: PushEmpty(object)
0x13fd: Stack[-3] = Stack[-1]
0x13fe: Call2 0x150a

0x13ff: Pop(1)
0x1400: Return(); Pop(0)

0x1401: PushEmpty(bool, bool)
0x1402: PushEmpty(bool)
0x1403: Stack[-1] = (bool) 0
0x1404: PushEmpty(bool, object)
0x1405: Stack[-6] = Stack[-1]
0x1406: Call2 0x14eb

0x1407: Pop(1)
0x1408: IF (Stack[-1] == 0) GOTO 0x140f; Pop(1)

0x1409: PushEmpty(bool, object)
0x140a: Stack[-6] = Stack[-1]
0x140b: Call2 0xed1

0x140c: Pop(1)
0x140d: IF (Stack[-1] == 0) GOTO 0x140f; Pop(1)

0x140e: Stack[-1] = (bool) 1
0x140f: IF (Stack[-1] == 0) GOTO 0x1416; Pop(1)

0x1410: @@ IsWeaponHolstered(Stack[-1]); Obj=3 // @poff=1122
0x1411: Pop(0)
0x1412: Pop(0); Push((bool) Stack[-1] == 0)
0x1413: IF (Stack[-1] == 0) GOTO 0x1416; Pop(1)

0x1414: Stack[-4] = (bool) 1
0x1415: Return(); Pop(2)

0x1416: Stack[-4] = (bool) 0
0x1417: Return(); Pop(2)

0x1418: PushEmpty()
0x1419: PushEmpty(object)
0x141a: Stack[-2] = Stack[-1]
0x141b: Call2 0x14ee

0x141c: Pop(1)
0x141d: Return(); Pop(0)

0x141e: PushEmpty()
0x141f: PushEmpty(bool, object)
0x1420: Stack[-3] = Stack[-1]
0x1421: Call2 0xed1

0x1422: Pop(1)
0x1423: IF (Stack[-1] == 0) GOTO 0x142a; Pop(1)

0x1424: PushEmpty(object)
0x1425: Call2 0x106b

0x1426: Pop(0)
0x1427: Push((float)-0.019999999552965164)
0x1428: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1429: Pop(2)
0x142a: Return(); Pop(0)

0x142b: PushEmpty(object, object)
0x142c: Push("heal") // @poff=1140
0x142d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x142e: IF (Stack[-1] == 0) GOTO 0x1439; Pop(1)

0x142f: Push("player") // @poff=1150
0x1430: @ FindActor(Stack[-2], Stack[-1])
0x1431: Pop(1)
0x1432: PushEmpty(bool, object)
0x1433: Stack[-3] = Stack[-1]
0x1434: Call2 0x150c

0x1435: Stack[-2] = Stack[-6]
0x1436: Pop(2)
0x1437: Return(); Pop(2)

0x1438: Stack[-1] = 0
0x1439: Stack[-4] = (bool) 0
0x143a: Return(); Pop(2)

0x143b: PushEmpty(object, object)
0x143c: Push("heal") // @poff=1140
0x143d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x143e: IF (Stack[-1] == 0) GOTO 0x1447; Pop(1)

0x143f: Push("player") // @poff=1150
0x1440: @ FindActor(Stack[-2], Stack[-1])
0x1441: Pop(1)
0x1442: PushEmpty(object)
0x1443: Stack[-2] = Stack[-1]
0x1444: Call2 0x150f

0x1445: Pop(1)
0x1446: Stack[-1] = 0
0x1447: Return(); Pop(2)

0x1448: PushEmpty(string, string)
0x1449: Stack[-1] = "idle" // @poff=146
0x144a: Push(Stack[-3])
0x144b: IF (Stack[-1] == 0) GOTO 0x144d; Pop(1)

0x144c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x144d: Stack[-1] = Stack[-4]
0x144e: Return(); Pop(2)

0x144f: PushEmpty(int, bool, int, bool)
0x1450: Stack[-2] = (int) 0
0x1451: Push("all") // @poff=138
0x1452: PushEmpty(string, int)
0x1453: Stack[-5] = Stack[-1]
0x1454: Call2 0x1448

0x1455: Pop(1)
0x1456: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1457: Pop(2)
0x1458: Pop(0); Push((bool) Stack[-1] == 0)
0x1459: IF (Stack[-1] == 0) GOTO 0x145b; Pop(1)

0x145a: GOTO 0x145e

0x145b: Push((int) 1)
0x145c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x145d: GOTO 0x1451

0x145e: Stack[-2] = Stack[-5]
0x145f: Return(); Pop(4)

0x1460: PushEmpty()
0x1461: PushEmpty(bool)
0x1462: Call2 0x1595

0x1463: Pop(0)
0x1464: IF (Stack[-1] == 0) GOTO 0x1467; Pop(1)

0x1465: Stack[-2] = (int) 2
0x1466: GOTO 0x1468

0x1467: Stack[-2] = (int) 0
0x1468: Return(); Pop(0)

0x1469: PushEmpty()
0x146a: PushEmpty(object)
0x146b: Stack[-2] = Stack[-1]
0x146c: Push(-1, 1); TaskCall(5)
0x146d: Call2 0xb4f

0x146e: Pop(-1, 1); TaskReturn
0x146f: Pop(1)
0x1470: Return(); Pop(0)

0x1471: PushEmpty()
0x1472: PushEmpty(bool, object)
0x1473: Stack[-3] = Stack[-1]
0x1474: Call2 0xf28

0x1475: Pop(1)
0x1476: IF (Stack[-1] == 0) GOTO 0x1479; Pop(1)

0x1477: Stack[-2] = (int) 2
0x1478: GOTO 0x147a

0x1479: Stack[-2] = (int) 0
0x147a: Return(); Pop(0)

0x147b: PushEmpty()
0x147c: PushEmpty(object)
0x147d: Stack[-2] = Stack[-1]
0x147e: Push(-1, 3); TaskCall(6)
0x147f: Call2 0xc62

0x1480: Pop(-1, 3); TaskReturn
0x1481: Pop(1)
0x1482: Return(); Pop(0)

0x1483: PushEmpty()
0x1484: PushEmpty(bool, object)
0x1485: Stack[-4] = Stack[-1]
0x1486: Call2 0xf28

0x1487: Pop(1)
0x1488: IF (Stack[-1] == 0) GOTO 0x148b; Pop(1)

0x1489: Stack[-3] = (int) 2
0x148a: GOTO 0x148c

0x148b: Stack[-3] = (int) 0
0x148c: Return(); Pop(0)

0x148d: PushEmpty()
0x148e: PushEmpty(object)
0x148f: Stack[-2] = Stack[-1]
0x1490: Push(-1, 3); TaskCall(7)
0x1491: Call2 0xd5e

0x1492: Pop(-1, 3); TaskReturn
0x1493: Pop(1)
0x1494: Return(); Pop(0)

0x1495: PushEmpty(string, bool, string, bool)
0x1496: PushEmpty(bool, object, string)
0x1497: Stack[-9] = Stack[-2]
0x1498: Stack[-1] = "class" // @poff=1164
0x1499: Call2 0xed6

0x149a: Pop(2)
0x149b: Pop(1); Push((bool) Stack[-1] == 0)
0x149c: IF (Stack[-1] == 0) GOTO 0x149f; Pop(1)

0x149d: Stack[-8] = (bool) 0
0x149e: Return(); Pop(4)

0x149f: Push("class") // @poff=1164
0x14a0: @@ GetProperty(Stack[-1], Stack[-3]); Obj=7 // @poff=480
0x14a1: Pop(1)
0x14a2: Push("rat") // @poff=1176
0x14a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a4: IF (Stack[-1] == 0) GOTO 0x14a8; Pop(1)

0x14a5: Stack[-8] = (bool) 0
0x14a6: Return(); Pop(4)

0x14a7: GOTO 0x14b3

0x14a8: Push("rat_big") // @poff=1184
0x14a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14aa: IF (Stack[-1] == 0) GOTO 0x14ae; Pop(1)

0x14ab: Stack[-8] = (bool) 0
0x14ac: Return(); Pop(4)

0x14ad: GOTO 0x14b3

0x14ae: Push("dog") // @poff=1200
0x14af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b0: IF (Stack[-1] == 0) GOTO 0x14b3; Pop(1)

0x14b1: Stack[-8] = (bool) 0
0x14b2: Return(); Pop(4)

0x14b3: @ CanSee(Stack[-1], Stack[-7])
0x14b4: Pop(0)
0x14b5: PushEmpty(bool)
0x14b6: Stack[-1] = (bool) 1
0x14b7: Push(Stack[-2])
0x14b8: IF (Stack[-1] == 1) GOTO 0x14c1; Pop(1)

0x14b9: PushEmpty(float, object)
0x14ba: Stack[-10] = Stack[-1]
0x14bb: Call2 0xec9

0x14bc: Pop(1)
0x14bd: Pop(0); Push(Stack[-7] * Stack[-7]);
0x14be: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x14bf: IF (Stack[-1] == 1) GOTO 0x14c1; Pop(1)

0x14c0: Stack[-1] = (bool) 0
0x14c1: IF (Stack[-1] == 0) GOTO 0x14c4; Pop(1)

0x14c2: Stack[-8] = (bool) 1
0x14c3: Return(); Pop(4)

0x14c4: @ CanSee(Stack[-1], Stack[-6])
0x14c5: Pop(0)
0x14c6: PushEmpty(bool)
0x14c7: Stack[-1] = (bool) 1
0x14c8: Push(Stack[-2])
0x14c9: IF (Stack[-1] == 1) GOTO 0x14d2; Pop(1)

0x14ca: PushEmpty(float, object)
0x14cb: Stack[-9] = Stack[-1]
0x14cc: Call2 0xec9

0x14cd: Pop(1)
0x14ce: Pop(0); Push(Stack[-7] * Stack[-7]);
0x14cf: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x14d0: IF (Stack[-1] == 1) GOTO 0x14d2; Pop(1)

0x14d1: Stack[-1] = (bool) 0
0x14d2: IF (Stack[-1] == 0) GOTO 0x14d5; Pop(1)

0x14d3: Stack[-8] = (bool) 1
0x14d4: Return(); Pop(4)

0x14d5: Stack[-8] = (bool) 0
0x14d6: Return(); Pop(4)

0x14d7: PushEmpty()
0x14d8: Stack[-2] = (int) 0
0x14d9: Return(); Pop(0)

0x14da: PushEmpty()
0x14db: Return(); Pop(0)

0x14dc: PushEmpty()
0x14dd: Stack[-3] = (int) 0
0x14de: Return(); Pop(0)

0x14df: PushEmpty()
0x14e0: Return(); Pop(0)

0x14e1: PushEmpty()
0x14e2: Stack[-2] = (int) 2
0x14e3: Return(); Pop(0)

0x14e4: PushEmpty()
0x14e5: PushEmpty(object)
0x14e6: Stack[-2] = Stack[-1]
0x14e7: Call2 0x151f

0x14e8: Pop(1)
0x14e9: Return(); Pop(0)

0x14ea: Return(); Pop(0)

0x14eb: PushEmpty()
0x14ec: Stack[-2] = (bool) 0
0x14ed: Return(); Pop(0)

0x14ee: PushEmpty()
0x14ef: Return(); Pop(0)

0x14f0: PushEmpty(bool, bool)
0x14f1: @ CanSee(Stack[-1], Stack[-3])
0x14f2: Pop(0)
0x14f3: Stack[-4] = (bool) 1
0x14f4: Push(Stack[-1])
0x14f5: IF (Stack[-1] == 1) GOTO 0x14fe; Pop(1)

0x14f6: PushEmpty(float, object)
0x14f7: Stack[-5] = Stack[-1]
0x14f8: Call2 0xec9

0x14f9: Pop(1)
0x14fa: Push((int) 4000000)
0x14fb: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x14fc: IF (Stack[-1] == 1) GOTO 0x14fe; Pop(1)

0x14fd: Stack[-4] = (bool) 0
0x14fe: Return(); Pop(2)

0x14ff: PushEmpty()
0x1500: PushEmpty(object)
0x1501: Stack[-2] = Stack[-1]
0x1502: Push(-1, 3); TaskCall(8)
0x1503: Call2 0xe20

0x1504: Pop(-1, 3); TaskReturn
0x1505: Pop(1)
0x1506: Return(); Pop(0)

0x1507: PushEmpty()
0x1508: Stack[-2] = (bool) 0
0x1509: Return(); Pop(0)

0x150a: PushEmpty()
0x150b: Return(); Pop(0)

0x150c: PushEmpty()
0x150d: Stack[-2] = (bool) 0
0x150e: Return(); Pop(0)

0x150f: PushEmpty()
0x1510: Return(); Pop(0)

0x1511: Stack[-1] = (int) 515563
0x1512: Return(); Pop(0)

0x1513: Stack[-1] = (int) 503348
0x1514: Return(); Pop(0)

0x1515: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=1208
0x1516: Return(); Pop(0)

0x1517: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=1248
0x1518: Return(); Pop(0)

0x1519: Stack[-1] = (bool) 0
0x151a: Return(); Pop(0)

0x151b: Push(GlobalVars[0])
0x151c: Stack[-1] = (bool) 0
0x151d: GlobalVars[0] = Stack[-1]; Pop(1)
0x151e: Return(); Pop(0)

0x151f: PushEmpty(bool, int, float, int, bool, int, float, int)
0x1520: Push(GlobalVars[0])
0x1521: IF (Stack[-1] == 0) GOTO 0x152c; Pop(1)

0x1522: @ IsOverrideActive(Stack[-4])
0x1523: Pop(0)
0x1524: Pop(0); Push((bool) Stack[-4] == 0)
0x1525: IF (Stack[-1] == 0) GOTO 0x152a; Pop(1)

0x1526: PushEmpty(object)
0x1527: Stack[-10] = Stack[-1]
0x1528: Call2 0x1292

0x1529: Pop(1)
0x152a: Return(); Pop(8)

0x152b: GOTO 0x1594

0x152c: Push(GlobalVars[1])
0x152d: IF (Stack[-1] == 0) GOTO 0x152f; Pop(1)

0x152e: Return(); Pop(8)

0x152f: PushEmpty(int, object)
0x1530: Stack[-11] = Stack[-1]
0x1531: Push(-2, 1); TaskCall(0)
0x1532: Call2 0x0

0x1533: Pop(-2, 1); TaskReturn
0x1534: Stack[-2] = Stack[-5]
0x1535: Pop(2)
0x1536: Push((int) -1)
0x1537: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1538: IF (Stack[-1] == 0) GOTO 0x153a; Pop(1)

0x1539: Return(); Pop(8)

0x153a: Push(GlobalVars[1])
0x153b: Stack[-1] = (bool) 1
0x153c: GlobalVars[1] = Stack[-1]; Pop(1)
0x153d: Push((float)10000.0)
0x153e: Stack[-3] = Stack[-4] / Stack[-1]; Pop(1);
0x153f: PushEmpty(int)
0x1540: Call2 0x1103

0x1541: Stack[-1] = Stack[-2]
0x1542: Pop(1)
0x1543: Push((int) 1)
0x1544: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1545: IF (Stack[-1] == 0) GOTO 0x1549; Pop(1)

0x1546: Push((int) 3)
0x1547: Stack[-4] = Stack[-4] * Stack[-1]; Pop(1);
0x1548: GOTO 0x158a

0x1549: Push((int) 2)
0x154a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x154b: IF (Stack[-1] == 0) GOTO 0x154f; Pop(1)

0x154c: Push((int) 0)
0x154d: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x154e: GOTO 0x158a

0x154f: Push((int) 3)
0x1550: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1551: IF (Stack[-1] == 0) GOTO 0x1555; Pop(1)

0x1552: Push((int) 0)
0x1553: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x1554: GOTO 0x158a

0x1555: Push((int) 4)
0x1556: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1557: IF (Stack[-1] == 0) GOTO 0x155b; Pop(1)

0x1558: Push((int) 1)
0x1559: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x155a: GOTO 0x158a

0x155b: Push((int) 5)
0x155c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x155d: IF (Stack[-1] == 0) GOTO 0x1561; Pop(1)

0x155e: Push((int) 0)
0x155f: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x1560: GOTO 0x158a

0x1561: Push((int) 6)
0x1562: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1563: IF (Stack[-1] == 0) GOTO 0x1567; Pop(1)

0x1564: Push((int) 0)
0x1565: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x1566: GOTO 0x158a

0x1567: Push((int) 7)
0x1568: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1569: IF (Stack[-1] == 0) GOTO 0x156d; Pop(1)

0x156a: Push((int) 1)
0x156b: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x156c: GOTO 0x158a

0x156d: Push((int) 8)
0x156e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x156f: IF (Stack[-1] == 0) GOTO 0x1573; Pop(1)

0x1570: Push((int) 0)
0x1571: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x1572: GOTO 0x158a

0x1573: Push((int) 9)
0x1574: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1575: IF (Stack[-1] == 0) GOTO 0x1579; Pop(1)

0x1576: Push((int) 0)
0x1577: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x1578: GOTO 0x158a

0x1579: Push((int) 10)
0x157a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x157b: IF (Stack[-1] == 0) GOTO 0x157f; Pop(1)

0x157c: Push((int) 0)
0x157d: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x157e: GOTO 0x158a

0x157f: Push((int) 11)
0x1580: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1581: IF (Stack[-1] == 0) GOTO 0x1585; Pop(1)

0x1582: Push((int) 0)
0x1583: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x1584: GOTO 0x158a

0x1585: Push((int) 12)
0x1586: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1587: IF (Stack[-1] == 0) GOTO 0x158a; Pop(1)

0x1588: Push((int) 0)
0x1589: Stack[-3] = Stack[-3] * Stack[-1]; Pop(1);
0x158a: PushEmpty(bool, object, float)
0x158b: Stack[-12] = Stack[-2]
0x158c: Stack[-5] = Stack[-1]
0x158d: Call2 0x10d6

0x158e: Pop(3)
0x158f: PushEmpty(object, int)
0x1590: Stack[-11] = Stack[-2]
0x1591: Stack[-1] = -Stack[-5]; Pop(0);
0x1592: Call2 0x10c3

0x1593: Pop(2)
0x1594: Return(); Pop(8)

0x1595: Stack[-1] = (bool) 0
0x1596: Return(); Pop(0)

0x1597: PushEmpty()
0x1598: PushEmpty(bool, object, object, float)
0x1599: Stack[-7] = Stack[-3]
0x159a: Stack[-6] = Stack[-2]
0x159b: Stack[-1] = (float) 700.0
0x159c: Call2 0x1495

0x159d: Stack[-4] = Stack[-8]
0x159e: Pop(4)
0x159f: Return(); Pop(0)

0x15a0: PushEmpty()
0x15a1: PushEmpty(bool, object)
0x15a2: Stack[-3] = Stack[-1]
0x15a3: Call2 0xed1

0x15a4: Pop(1)
0x15a5: IF (Stack[-1] == 0) GOTO 0x15b1; Pop(1)

0x15a6: PushEmpty(object)
0x15a7: Call2 0x106b

0x15a8: Pop(0)
0x15a9: Push((float)-0.029999999329447746)
0x15aa: Push((bool) 1)
0x15ab: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15ac: Pop(3)
0x15ad: PushEmpty(bool)
0x15ae: Stack[-1] = (bool) 1
0x15af: Call2 0x12e7

0x15b0: Pop(1)
0x15b1: PushEmpty()
0x15b2: Call2 0x12cf

0x15b3: Pop(0)
0x15b4: Push(GlobalVars[0])
0x15b5: Stack[-1] = (bool) 1
0x15b6: GlobalVars[0] = Stack[-1]; Pop(1)
0x15b7: Push((int) 50)
0x15b8: Push((int) 40)
0x15b9: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x15ba: Pop(2)
0x15bb: Return(); Pop(0)

