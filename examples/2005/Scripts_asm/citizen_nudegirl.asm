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
	W:branch
	W:player
	W:reputation
	W:GenerateMoney: iMin > iMax
	W:Money
	A:SetItemName
	W:Organ
	A:SetProperty
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
	W:class
	W:rat
	W:rat_big
	W:dog
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000066006400690065000000476574506f736974696f6e0062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740068006500610064000000610074007400610063006b005f006f006e000000610074007400610063006b005f0073007400610079000000610074007400610063006b005f006f00660066000000430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a0020000000480061007300500072006f0070006500720074007900000048617350726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000047657450726f70657274790066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c0000006200720061006e0063006800000070006c0061007900650072000000720065007000750074006100740069006f006e000000470065006e00650072006100740065004d006f006e00650079003a00200069004d0069006e0020003e00200069004d006100780000004d006f006e006500790000005365744974656d4e616d65004f007200670061006e00000053657450726f7065727479004765744974656d4944006c00690076006500720000006b00690064006e0065007900000068006500610072007400000062006c006f006f00640000006c0065006d006f006e0000007200750073006b00000068006f006f006b00000073007900720069006e00670065000000770061007400630068000000720061007a006f0072000000620065006100640073000000620072006100630065006c006500740000006500610072005f00720069006e006700000067006f006c0064005f00720069006e0067000000730069006c007600650072005f00720069006e006700000066006c006f0077006500720000006800650061006c0074006800000075006e0068006f006c007300740065007200000070006c0061007900650072005f00730068006f007400000062006100740074006c00650000004973576561706f6e486f6c737465726564006800650061006c00000063006c00610073007300000072006100740000007200610074005f00620069006700000064006f0067000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e0067000000
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
	GetGameTime (1 args)
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
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x6f9
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x16d Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x66c Vars = (object)
		EVENT_6 Op = 0x67a Vars = ()
		EVENT_22 Op = 0x6f3 Vars = (object, int, float, float)
		EVENT_16 Op = 0x6f5 Vars = (object, string)
		EVENT_41 Op = 0x6f7 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x711 Vars = (object)
		EVENT_17 Op = 0x725 Vars = (object)
		EVENT_30 Op = 0x73d Vars = (object, object, bool)
		EVENT_40 Op = 0x759 Vars = (object)
		EVENT_42 Op = 0x76d Vars = (object, string)
		EVENT_26 Op = 0x792 Vars = (string)
		EVENT_1 Op = 0x7a0 Vars = (object)
		EVENT_3 Op = 0x7b3 Vars = (object)
		EVENT_7 Op = 0x7b9 Vars = (int)
		EVENT_6 Op = 0x7c5 Vars = ()
		EVENT_41 Op = 0x7dc Vars = (object)
		EVENT_10 Op = 0x84d Vars = (object)
		EVENT_28 Op = 0x851 Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0x86a Vars = (object)
		EVENT_17 Op = 0x87e Vars = (object)
		EVENT_30 Op = 0x896 Vars = (object, object, bool)
		EVENT_40 Op = 0x8b2 Vars = (object)
		EVENT_42 Op = 0x8c6 Vars = (object, string)
		EVENT_26 Op = 0x8eb Vars = (string)
		EVENT_6 Op = 0x8f9 Vars = ()
		EVENT_1 Op = 0x900 Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0x99c Vars = (object)
		EVENT_17 Op = 0x9b0 Vars = (object)
		EVENT_30 Op = 0x9c8 Vars = (object, object, bool)
		EVENT_40 Op = 0x9e4 Vars = (object)
		EVENT_42 Op = 0x9f8 Vars = (object, string)
		EVENT_26 Op = 0xa1d Vars = (string)
		EVENT_41 Op = 0xa36 Vars = (object)
		EVENT_7 Op = 0xa3f Vars = (int)
		EVENT_6 Op = 0xa62 Vars = ()
		EVENT_1 Op = 0xa69 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xa93 Vars = ()
		EVENT_7 Op = 0xb01 Vars = (int)
		EVENT_41 Op = 0xb3c Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0xbbc Vars = (int)
		EVENT_41 Op = 0xbf7 Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xc10 Vars = ()
		EVENT_7 Op = 0xc7e Vars = (int)
		EVENT_41 Op = 0xcb9 Vars = (object)
	GTASK_9 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xcd2 Vars = ()
		EVENT_7 Op = 0xd40 Vars = (int)
		EVENT_41 Op = 0xd7b Vars = (object)

Events:
EVENT_16 Op = 0x1157 Vars = (object, string)
EVENT_41 Op = 0x1164 Vars = (object)
EVENT_22 Op = 0x116a Vars = (object, int, float, float)
EVENT_43 Op = 0x1172 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xe88

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x12d7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x12d5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x12d9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x12db

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1021

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
0x41: Call2 0xecc

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
0x4f: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x157

0x53: Pop(1)
0x54: Push((int) 537786)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0xf7b

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 537787)
0x5f: Push((int) -1)
0x60: Push((int) 39638)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: PushEmpty(bool, object)
0x64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65: Call2 0xf7b

0x66: Pop(1)
0x67: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x68: Push((int) 537788)
0x69: Push((int) -1)
0x6a: Push((int) 39639)
0x6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x6c: Pop(3)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0xf7b

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 537789)
0x73: Push((int) 39641)
0x74: Push((int) 39640)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: PushEmpty(bool, object)
0x78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79: Call2 0xf7b

0x7a: Pop(1)
0x7b: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7c: Push((int) 537792)
0x7d: Push((int) 39644)
0x7e: Push((int) 39643)
0x7f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x80: Pop(3)
0x81: PushEmpty(bool)
0x82: Stack[-1] = (bool) 0
0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call2 0xf6f

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0xf85

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Stack[-1] = (bool) 1
0x8e: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8f: Push((int) 537805)
0x90: Push((int) 39658)
0x91: Push((int) 39657)
0x92: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x93: Pop(3)
0x94: PushEmpty(bool)
0x95: Stack[-1] = (bool) 0
0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98: Call2 0xf6f

0x99: Pop(1)
0x9a: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9b: PushEmpty(bool, object)
0x9c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d: Call2 0xf8f

0x9e: Pop(1)
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: Stack[-1] = (bool) 1
0xa1: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa2: Push((int) 537826)
0xa3: Push((int) 39679)
0xa4: Push((int) 39678)
0xa5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa6: Pop(3)
0xa7: PushEmpty(bool)
0xa8: Stack[-1] = (bool) 0
0xa9: PushEmpty(bool, object)
0xaa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab: Call2 0xf6f

0xac: Pop(1)
0xad: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xae: PushEmpty(bool, object)
0xaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Call2 0xf99

0xb1: Pop(1)
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Stack[-1] = (bool) 1
0xb4: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb5: Push((int) 537846)
0xb6: Push((int) 39703)
0xb7: Push((int) 39702)
0xb8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb9: Pop(3)
0xba: PushEmpty(bool)
0xbb: Stack[-1] = (bool) 0
0xbc: PushEmpty(bool, object)
0xbd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Call2 0xf6f

0xbf: Pop(1)
0xc0: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0xfa3

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Stack[-1] = (bool) 1
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: Push((int) 537855)
0xc9: Push((int) 39713)
0xca: Push((int) 39712)
0xcb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcc: Pop(3)
0xcd: PushEmpty(bool)
0xce: Stack[-1] = (bool) 0
0xcf: PushEmpty(bool, object)
0xd0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Call2 0xf6f

0xd2: Pop(1)
0xd3: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd4: PushEmpty(bool, object)
0xd5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Call2 0xfad

0xd7: Pop(1)
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: Stack[-1] = (bool) 1
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: Push((int) 537867)
0xdc: Push((int) 39726)
0xdd: Push((int) 39725)
0xde: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xdf: Pop(3)
0xe0: PushEmpty(bool)
0xe1: Stack[-1] = (bool) 0
0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0xf6f

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe7: PushEmpty(bool, object)
0xe8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Call2 0xfb7

0xea: Pop(1)
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Stack[-1] = (bool) 1
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: Push((int) 537881)
0xef: Push((int) 39741)
0xf0: Push((int) 39740)
0xf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xf2: Pop(3)
0xf3: PushEmpty(bool)
0xf4: Stack[-1] = (bool) 0
0xf5: PushEmpty(bool, object)
0xf6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Call2 0xf6f

0xf8: Pop(1)
0xf9: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfa: PushEmpty(bool, object)
0xfb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Call2 0xfc1

0xfd: Pop(1)
0xfe: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xff: Stack[-1] = (bool) 1
0x100: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x101: Push((int) 537895)
0x102: Push((int) 39756)
0x103: Push((int) 39755)
0x104: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x105: Pop(3)
0x106: PushEmpty(bool)
0x107: Stack[-1] = (bool) 0
0x108: PushEmpty(bool, object)
0x109: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Call2 0xf6f

0x10b: Pop(1)
0x10c: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10d: PushEmpty(bool, object)
0x10e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Call2 0xfcb

0x110: Pop(1)
0x111: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x112: Stack[-1] = (bool) 1
0x113: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x114: Push((int) 537905)
0x115: Push((int) 39766)
0x116: Push((int) 39765)
0x117: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x118: Pop(3)
0x119: PushEmpty(bool)
0x11a: Stack[-1] = (bool) 0
0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Call2 0xf6f

0x11e: Pop(1)
0x11f: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0xfd5

0x123: Pop(1)
0x124: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x125: Stack[-1] = (bool) 1
0x126: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x127: Push((int) 537918)
0x128: Push((int) 39780)
0x129: Push((int) 39779)
0x12a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x12b: Pop(3)
0x12c: Push((int) 537927)
0x12d: Push((int) -1)
0x12e: Push((int) 39788)
0x12f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x130: Pop(3)
0x131: Push((int) 537928)
0x132: Push((int) -1)
0x133: Push((int) 39789)
0x134: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x135: Pop(3)
0x136: GOTO 0x139

0x137: Return(); Pop(0)

0x138: GOTO 0x4e

0x139: PushEmpty(bool)
0x13a: Call2 0x12dd

0x13b: Pop(0)
0x13c: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x13d: @ lshWaitForAnimEnd()
0x13e: Pop(0)
0x13f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: GOTO 0x147

0x142: PushEmpty(string)
0x143: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x144: Call2 0xedd

0x145: Pop(1)
0x146: GOTO 0x13d

0x147: GOTO 0x156

0x148: Push("all") // @poff=138
0x149: Push("idle") // @poff=146
0x14a: @ PlayAnimation(Stack[-2], Stack[-1])
0x14b: Pop(2)
0x14c: @ WaitForAnimEnd()
0x14d: Pop(0)
0x14e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x14f: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x150: GOTO 0x156

0x151: Push("all") // @poff=138
0x152: Push("idle") // @poff=146
0x153: @ PlayAnimation(Stack[-2], Stack[-1])
0x154: Pop(2)
0x155: GOTO 0x14c

0x156: Return(); Pop(0)

0x157: PushEmpty()
0x158: PushEmpty(bool)
0x159: Call2 0x12dd

0x15a: Pop(0)
0x15b: Pop(1); Push((bool) Stack[-1] == 0)
0x15c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15d: Return(); Pop(0)

0x15e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Return(); Pop(0)

0x161: PushEmpty(string, bool)
0x162: Stack[-3] = Stack[-2]
0x163: Push("") // @poff=102
0x164: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x166: Stack[-1] = (bool) 0
0x167: GOTO 0x169

0x168: Stack[-1] = (bool) 1
0x169: Call2 0xee4

0x16a: Pop(2)
0x16b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x16c: Return(); Pop(0)

0x16d: PushEmpty()
0x16e: Push((int) 1)
0x16f: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x170: PushEmpty()
0x171: Call2 0xef5

0x172: Pop(0)
0x173: Push((int) 39637)
0x174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral" // @poff=89
0x178: Call2 0x157

0x179: Pop(1)
0x17a: Push((int) 537786)
0x17b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x17c: Pop(1)
0x17d: @@@ ClearReplies(); Obj=0 // @poff=116
0x17e: Pop(0)
0x17f: PushEmpty(bool, object)
0x180: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x181: Call2 0xf7b

0x182: Pop(1)
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: Push((int) 537787)
0x185: Push((int) -1)
0x186: Push((int) 39638)
0x187: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x188: Pop(3)
0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18b: Call2 0xf7b

0x18c: Pop(1)
0x18d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18e: Push((int) 537788)
0x18f: Push((int) -1)
0x190: Push((int) 39639)
0x191: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x192: Pop(3)
0x193: PushEmpty(bool, object)
0x194: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x195: Call2 0xf7b

0x196: Pop(1)
0x197: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x198: Push((int) 537789)
0x199: Push((int) 39641)
0x19a: Push((int) 39640)
0x19b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19c: Pop(3)
0x19d: PushEmpty(bool, object)
0x19e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19f: Call2 0xf7b

0x1a0: Pop(1)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a2: Push((int) 537792)
0x1a3: Push((int) 39644)
0x1a4: Push((int) 39643)
0x1a5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a6: Pop(3)
0x1a7: PushEmpty(bool)
0x1a8: Stack[-1] = (bool) 0
0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Call2 0xf6f

0x1ac: Pop(1)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1ae: PushEmpty(bool, object)
0x1af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b0: Call2 0xf85

0x1b1: Pop(1)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: Stack[-1] = (bool) 1
0x1b4: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b5: Push((int) 537805)
0x1b6: Push((int) 39658)
0x1b7: Push((int) 39657)
0x1b8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b9: Pop(3)
0x1ba: PushEmpty(bool)
0x1bb: Stack[-1] = (bool) 0
0x1bc: PushEmpty(bool, object)
0x1bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1be: Call2 0xf6f

0x1bf: Pop(1)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c1: PushEmpty(bool, object)
0x1c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Call2 0xf8f

0x1c4: Pop(1)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c6: Stack[-1] = (bool) 1
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: Push((int) 537826)
0x1c9: Push((int) 39679)
0x1ca: Push((int) 39678)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: PushEmpty(bool)
0x1ce: Stack[-1] = (bool) 0
0x1cf: PushEmpty(bool, object)
0x1d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d1: Call2 0xf6f

0x1d2: Pop(1)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d4: PushEmpty(bool, object)
0x1d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d6: Call2 0xf99

0x1d7: Pop(1)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: Stack[-1] = (bool) 1
0x1da: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1db: Push((int) 537846)
0x1dc: Push((int) 39703)
0x1dd: Push((int) 39702)
0x1de: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1df: Pop(3)
0x1e0: PushEmpty(bool)
0x1e1: Stack[-1] = (bool) 0
0x1e2: PushEmpty(bool, object)
0x1e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Call2 0xf6f

0x1e5: Pop(1)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e7: PushEmpty(bool, object)
0x1e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Call2 0xfa3

0x1ea: Pop(1)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: Stack[-1] = (bool) 1
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ee: Push((int) 537855)
0x1ef: Push((int) 39713)
0x1f0: Push((int) 39712)
0x1f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f2: Pop(3)
0x1f3: PushEmpty(bool)
0x1f4: Stack[-1] = (bool) 0
0x1f5: PushEmpty(bool, object)
0x1f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f7: Call2 0xf6f

0x1f8: Pop(1)
0x1f9: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fa: PushEmpty(bool, object)
0x1fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fc: Call2 0xfad

0x1fd: Pop(1)
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: Stack[-1] = (bool) 1
0x200: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x201: Push((int) 537867)
0x202: Push((int) 39726)
0x203: Push((int) 39725)
0x204: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x205: Pop(3)
0x206: PushEmpty(bool)
0x207: Stack[-1] = (bool) 0
0x208: PushEmpty(bool, object)
0x209: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20a: Call2 0xf6f

0x20b: Pop(1)
0x20c: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20d: PushEmpty(bool, object)
0x20e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20f: Call2 0xfb7

0x210: Pop(1)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Stack[-1] = (bool) 1
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: Push((int) 537881)
0x215: Push((int) 39741)
0x216: Push((int) 39740)
0x217: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x218: Pop(3)
0x219: PushEmpty(bool)
0x21a: Stack[-1] = (bool) 0
0x21b: PushEmpty(bool, object)
0x21c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21d: Call2 0xf6f

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x220: PushEmpty(bool, object)
0x221: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x222: Call2 0xfc1

0x223: Pop(1)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: Stack[-1] = (bool) 1
0x226: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x227: Push((int) 537895)
0x228: Push((int) 39756)
0x229: Push((int) 39755)
0x22a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22b: Pop(3)
0x22c: PushEmpty(bool)
0x22d: Stack[-1] = (bool) 0
0x22e: PushEmpty(bool, object)
0x22f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x230: Call2 0xf6f

0x231: Pop(1)
0x232: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x233: PushEmpty(bool, object)
0x234: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x235: Call2 0xfcb

0x236: Pop(1)
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: Stack[-1] = (bool) 1
0x239: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23a: Push((int) 537905)
0x23b: Push((int) 39766)
0x23c: Push((int) 39765)
0x23d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x23e: Pop(3)
0x23f: PushEmpty(bool)
0x240: Stack[-1] = (bool) 0
0x241: PushEmpty(bool, object)
0x242: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x243: Call2 0xf6f

0x244: Pop(1)
0x245: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x246: PushEmpty(bool, object)
0x247: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x248: Call2 0xfd5

0x249: Pop(1)
0x24a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24b: Stack[-1] = (bool) 1
0x24c: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24d: Push((int) 537918)
0x24e: Push((int) 39780)
0x24f: Push((int) 39779)
0x250: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x251: Pop(3)
0x252: Push((int) 537927)
0x253: Push((int) -1)
0x254: Push((int) 39788)
0x255: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x256: Pop(3)
0x257: Push((int) 537928)
0x258: Push((int) -1)
0x259: Push((int) 39789)
0x25a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25b: Pop(3)
0x25c: Return(); Pop(0)

0x25d: Push((int) 39780)
0x25e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x260: PushEmpty(string)
0x261: Stack[-1] = "Neutral" // @poff=89
0x262: Call2 0x157

0x263: Pop(1)
0x264: Push((int) 537919)
0x265: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x266: Pop(1)
0x267: @@@ ClearReplies(); Obj=0 // @poff=116
0x268: Pop(0)
0x269: Push((int) 537920)
0x26a: Push((int) 39782)
0x26b: Push((int) 39781)
0x26c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x26d: Pop(3)
0x26e: Push((int) 537926)
0x26f: Push((int) -1)
0x270: Push((int) 39787)
0x271: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x272: Pop(3)
0x273: Return(); Pop(0)

0x274: Push((int) 39782)
0x275: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x277: PushEmpty(string)
0x278: Stack[-1] = "Neutral" // @poff=89
0x279: Call2 0x157

0x27a: Pop(1)
0x27b: Push((int) 537921)
0x27c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x27d: Pop(1)
0x27e: @@@ ClearReplies(); Obj=0 // @poff=116
0x27f: Pop(0)
0x280: Push((int) 537922)
0x281: Push((int) 39784)
0x282: Push((int) 39783)
0x283: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x284: Pop(3)
0x285: Return(); Pop(0)

0x286: Push((int) 39784)
0x287: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x289: PushEmpty(string)
0x28a: Stack[-1] = "Neutral" // @poff=89
0x28b: Call2 0x157

0x28c: Pop(1)
0x28d: Push((int) 537923)
0x28e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x28f: Pop(1)
0x290: @@@ ClearReplies(); Obj=0 // @poff=116
0x291: Pop(0)
0x292: Push((int) 537924)
0x293: Push((int) -1)
0x294: Push((int) 39785)
0x295: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x296: Pop(3)
0x297: Push((int) 537925)
0x298: Push((int) -1)
0x299: Push((int) 39786)
0x29a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x29b: Pop(3)
0x29c: Return(); Pop(0)

0x29d: Push((int) 39766)
0x29e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a0: PushEmpty(string)
0x2a1: Stack[-1] = "Neutral" // @poff=89
0x2a2: Call2 0x157

0x2a3: Pop(1)
0x2a4: Push((int) 537906)
0x2a5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2a6: Pop(1)
0x2a7: @@@ ClearReplies(); Obj=0 // @poff=116
0x2a8: Pop(0)
0x2a9: Push((int) 537907)
0x2aa: Push((int) 39768)
0x2ab: Push((int) 39767)
0x2ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ad: Pop(3)
0x2ae: Push((int) 537917)
0x2af: Push((int) -1)
0x2b0: Push((int) 39778)
0x2b1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2b2: Pop(3)
0x2b3: Return(); Pop(0)

0x2b4: Push((int) 39768)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Neutral" // @poff=89
0x2b9: Call2 0x157

0x2ba: Pop(1)
0x2bb: Push((int) 537908)
0x2bc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2bd: Pop(1)
0x2be: @@@ ClearReplies(); Obj=0 // @poff=116
0x2bf: Pop(0)
0x2c0: Push((int) 537909)
0x2c1: Push((int) 39770)
0x2c2: Push((int) 39769)
0x2c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c4: Pop(3)
0x2c5: Push((int) 537913)
0x2c6: Push((int) 39774)
0x2c7: Push((int) 39773)
0x2c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2c9: Pop(3)
0x2ca: Return(); Pop(0)

0x2cb: Push((int) 39774)
0x2cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2ce: PushEmpty(string)
0x2cf: Stack[-1] = "Neutral" // @poff=89
0x2d0: Call2 0x157

0x2d1: Pop(1)
0x2d2: Push((int) 537914)
0x2d3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d4: Pop(1)
0x2d5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d6: Pop(0)
0x2d7: Push((int) 537915)
0x2d8: Push((int) 39770)
0x2d9: Push((int) 39775)
0x2da: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2db: Pop(3)
0x2dc: Push((int) 537916)
0x2dd: Push((int) -1)
0x2de: Push((int) 39777)
0x2df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e0: Pop(3)
0x2e1: Return(); Pop(0)

0x2e2: Push((int) 39770)
0x2e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2e5: PushEmpty(string)
0x2e6: Stack[-1] = "Neutral" // @poff=89
0x2e7: Call2 0x157

0x2e8: Pop(1)
0x2e9: Push((int) 537910)
0x2ea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2eb: Pop(1)
0x2ec: @@@ ClearReplies(); Obj=0 // @poff=116
0x2ed: Pop(0)
0x2ee: Push((int) 537911)
0x2ef: Push((int) -1)
0x2f0: Push((int) 39771)
0x2f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f2: Pop(3)
0x2f3: Push((int) 537912)
0x2f4: Push((int) -1)
0x2f5: Push((int) 39772)
0x2f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f7: Pop(3)
0x2f8: Return(); Pop(0)

0x2f9: Push((int) 39756)
0x2fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x2fc: PushEmpty(string)
0x2fd: Stack[-1] = "Neutral" // @poff=89
0x2fe: Call2 0x157

0x2ff: Pop(1)
0x300: Push((int) 537896)
0x301: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x302: Pop(1)
0x303: @@@ ClearReplies(); Obj=0 // @poff=116
0x304: Pop(0)
0x305: Push((int) 537897)
0x306: Push((int) 39758)
0x307: Push((int) 39757)
0x308: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x309: Pop(3)
0x30a: Push((int) 537904)
0x30b: Push((int) -1)
0x30c: Push((int) 39764)
0x30d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x30e: Pop(3)
0x30f: Return(); Pop(0)

0x310: Push((int) 39758)
0x311: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x313: PushEmpty(string)
0x314: Stack[-1] = "Neutral" // @poff=89
0x315: Call2 0x157

0x316: Pop(1)
0x317: Push((int) 537898)
0x318: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x319: Pop(1)
0x31a: @@@ ClearReplies(); Obj=0 // @poff=116
0x31b: Pop(0)
0x31c: Push((int) 537899)
0x31d: Push((int) 39760)
0x31e: Push((int) 39759)
0x31f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x320: Pop(3)
0x321: Push((int) 537903)
0x322: Push((int) -1)
0x323: Push((int) 39763)
0x324: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x325: Pop(3)
0x326: Return(); Pop(0)

0x327: Push((int) 39760)
0x328: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x32a: PushEmpty(string)
0x32b: Stack[-1] = "Neutral" // @poff=89
0x32c: Call2 0x157

0x32d: Pop(1)
0x32e: Push((int) 537900)
0x32f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x330: Pop(1)
0x331: @@@ ClearReplies(); Obj=0 // @poff=116
0x332: Pop(0)
0x333: Push((int) 537901)
0x334: Push((int) -1)
0x335: Push((int) 39761)
0x336: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x337: Pop(3)
0x338: Push((int) 537902)
0x339: Push((int) -1)
0x33a: Push((int) 39762)
0x33b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x33c: Pop(3)
0x33d: Return(); Pop(0)

0x33e: Push((int) 39741)
0x33f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x341: PushEmpty(string)
0x342: Stack[-1] = "Neutral" // @poff=89
0x343: Call2 0x157

0x344: Pop(1)
0x345: Push((int) 537882)
0x346: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x347: Pop(1)
0x348: @@@ ClearReplies(); Obj=0 // @poff=116
0x349: Pop(0)
0x34a: Push((int) 537883)
0x34b: Push((int) 39743)
0x34c: Push((int) 39742)
0x34d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x34e: Pop(3)
0x34f: Push((int) 537891)
0x350: Push((int) 39751)
0x351: Push((int) 39750)
0x352: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x353: Pop(3)
0x354: Return(); Pop(0)

0x355: Push((int) 39751)
0x356: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x358: PushEmpty(string)
0x359: Stack[-1] = "Neutral" // @poff=89
0x35a: Call2 0x157

0x35b: Pop(1)
0x35c: Push((int) 537892)
0x35d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x35e: Pop(1)
0x35f: @@@ ClearReplies(); Obj=0 // @poff=116
0x360: Pop(0)
0x361: Push((int) 537893)
0x362: Push((int) 39745)
0x363: Push((int) 39752)
0x364: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x365: Pop(3)
0x366: Push((int) 537894)
0x367: Push((int) -1)
0x368: Push((int) 39754)
0x369: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x36a: Pop(3)
0x36b: Return(); Pop(0)

0x36c: Push((int) 39743)
0x36d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x36f: PushEmpty(string)
0x370: Stack[-1] = "Neutral" // @poff=89
0x371: Call2 0x157

0x372: Pop(1)
0x373: Push((int) 537884)
0x374: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x375: Pop(1)
0x376: @@@ ClearReplies(); Obj=0 // @poff=116
0x377: Pop(0)
0x378: Push((int) 537885)
0x379: Push((int) 39745)
0x37a: Push((int) 39744)
0x37b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x37c: Pop(3)
0x37d: Return(); Pop(0)

0x37e: Push((int) 39745)
0x37f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x381: PushEmpty(string)
0x382: Stack[-1] = "Neutral" // @poff=89
0x383: Call2 0x157

0x384: Pop(1)
0x385: Push((int) 537886)
0x386: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x387: Pop(1)
0x388: @@@ ClearReplies(); Obj=0 // @poff=116
0x389: Pop(0)
0x38a: Push((int) 537887)
0x38b: Push((int) 39747)
0x38c: Push((int) 39746)
0x38d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x38e: Pop(3)
0x38f: Push((int) 537890)
0x390: Push((int) -1)
0x391: Push((int) 39749)
0x392: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x393: Pop(3)
0x394: Return(); Pop(0)

0x395: Push((int) 39747)
0x396: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x398: PushEmpty(string)
0x399: Stack[-1] = "Neutral" // @poff=89
0x39a: Call2 0x157

0x39b: Pop(1)
0x39c: Push((int) 537888)
0x39d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x39e: Pop(1)
0x39f: @@@ ClearReplies(); Obj=0 // @poff=116
0x3a0: Pop(0)
0x3a1: Push((int) 537889)
0x3a2: Push((int) -1)
0x3a3: Push((int) 39748)
0x3a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a5: Pop(3)
0x3a6: Return(); Pop(0)

0x3a7: Push((int) 39726)
0x3a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3aa: PushEmpty(string)
0x3ab: Stack[-1] = "Neutral" // @poff=89
0x3ac: Call2 0x157

0x3ad: Pop(1)
0x3ae: Push((int) 537868)
0x3af: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3b0: Pop(1)
0x3b1: @@@ ClearReplies(); Obj=0 // @poff=116
0x3b2: Pop(0)
0x3b3: Push((int) 537869)
0x3b4: Push((int) 39728)
0x3b5: Push((int) 39727)
0x3b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b7: Pop(3)
0x3b8: Push((int) 537880)
0x3b9: Push((int) -1)
0x3ba: Push((int) 39739)
0x3bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3bc: Pop(3)
0x3bd: Return(); Pop(0)

0x3be: Push((int) 39728)
0x3bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3c1: PushEmpty(string)
0x3c2: Stack[-1] = "Neutral" // @poff=89
0x3c3: Call2 0x157

0x3c4: Pop(1)
0x3c5: Push((int) 537870)
0x3c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c7: Pop(1)
0x3c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c9: Pop(0)
0x3ca: Push((int) 537871)
0x3cb: Push((int) 39730)
0x3cc: Push((int) 39729)
0x3cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ce: Pop(3)
0x3cf: Push((int) 537877)
0x3d0: Push((int) 39736)
0x3d1: Push((int) 39735)
0x3d2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3d3: Pop(3)
0x3d4: Return(); Pop(0)

0x3d5: Push((int) 39736)
0x3d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3d8: PushEmpty(string)
0x3d9: Stack[-1] = "Neutral" // @poff=89
0x3da: Call2 0x157

0x3db: Pop(1)
0x3dc: Push((int) 537878)
0x3dd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3de: Pop(1)
0x3df: @@@ ClearReplies(); Obj=0 // @poff=116
0x3e0: Pop(0)
0x3e1: Push((int) 537879)
0x3e2: Push((int) 39730)
0x3e3: Push((int) 39737)
0x3e4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e5: Pop(3)
0x3e6: Return(); Pop(0)

0x3e7: Push((int) 39730)
0x3e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3ea: PushEmpty(string)
0x3eb: Stack[-1] = "Neutral" // @poff=89
0x3ec: Call2 0x157

0x3ed: Pop(1)
0x3ee: Push((int) 537872)
0x3ef: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3f0: Pop(1)
0x3f1: @@@ ClearReplies(); Obj=0 // @poff=116
0x3f2: Pop(0)
0x3f3: Push((int) 537873)
0x3f4: Push((int) 39732)
0x3f5: Push((int) 39731)
0x3f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3f7: Pop(3)
0x3f8: Return(); Pop(0)

0x3f9: Push((int) 39732)
0x3fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x3fc: PushEmpty(string)
0x3fd: Stack[-1] = "Neutral" // @poff=89
0x3fe: Call2 0x157

0x3ff: Pop(1)
0x400: Push((int) 537874)
0x401: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x402: Pop(1)
0x403: @@@ ClearReplies(); Obj=0 // @poff=116
0x404: Pop(0)
0x405: Push((int) 537875)
0x406: Push((int) -1)
0x407: Push((int) 39733)
0x408: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x409: Pop(3)
0x40a: Push((int) 537876)
0x40b: Push((int) -1)
0x40c: Push((int) 39734)
0x40d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40e: Pop(3)
0x40f: Return(); Pop(0)

0x410: Push((int) 39713)
0x411: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x413: PushEmpty(string)
0x414: Stack[-1] = "Neutral" // @poff=89
0x415: Call2 0x157

0x416: Pop(1)
0x417: Push((int) 537856)
0x418: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x419: Pop(1)
0x41a: @@@ ClearReplies(); Obj=0 // @poff=116
0x41b: Pop(0)
0x41c: Push((int) 537857)
0x41d: Push((int) 39715)
0x41e: Push((int) 39714)
0x41f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x420: Pop(3)
0x421: Push((int) 537864)
0x422: Push((int) 39722)
0x423: Push((int) 39721)
0x424: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x425: Pop(3)
0x426: Return(); Pop(0)

0x427: Push((int) 39722)
0x428: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x42a: PushEmpty(string)
0x42b: Stack[-1] = "Neutral" // @poff=89
0x42c: Call2 0x157

0x42d: Pop(1)
0x42e: Push((int) 537865)
0x42f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x430: Pop(1)
0x431: @@@ ClearReplies(); Obj=0 // @poff=116
0x432: Pop(0)
0x433: Push((int) 537866)
0x434: Push((int) 39717)
0x435: Push((int) 39723)
0x436: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x437: Pop(3)
0x438: Return(); Pop(0)

0x439: Push((int) 39715)
0x43a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x43c: PushEmpty(string)
0x43d: Stack[-1] = "Neutral" // @poff=89
0x43e: Call2 0x157

0x43f: Pop(1)
0x440: Push((int) 537858)
0x441: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x442: Pop(1)
0x443: @@@ ClearReplies(); Obj=0 // @poff=116
0x444: Pop(0)
0x445: Push((int) 537859)
0x446: Push((int) 39717)
0x447: Push((int) 39716)
0x448: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x449: Pop(3)
0x44a: Push((int) 537863)
0x44b: Push((int) -1)
0x44c: Push((int) 39720)
0x44d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x44e: Pop(3)
0x44f: Return(); Pop(0)

0x450: Push((int) 39717)
0x451: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x453: PushEmpty(string)
0x454: Stack[-1] = "Neutral" // @poff=89
0x455: Call2 0x157

0x456: Pop(1)
0x457: Push((int) 537860)
0x458: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x459: Pop(1)
0x45a: @@@ ClearReplies(); Obj=0 // @poff=116
0x45b: Pop(0)
0x45c: Push((int) 537861)
0x45d: Push((int) -1)
0x45e: Push((int) 39718)
0x45f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x460: Pop(3)
0x461: Push((int) 537862)
0x462: Push((int) -1)
0x463: Push((int) 39719)
0x464: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x465: Pop(3)
0x466: Return(); Pop(0)

0x467: Push((int) 39703)
0x468: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x469: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x46a: PushEmpty(string)
0x46b: Stack[-1] = "Neutral" // @poff=89
0x46c: Call2 0x157

0x46d: Pop(1)
0x46e: Push((int) 537847)
0x46f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x470: Pop(1)
0x471: @@@ ClearReplies(); Obj=0 // @poff=116
0x472: Pop(0)
0x473: Push((int) 537848)
0x474: Push((int) 39705)
0x475: Push((int) 39704)
0x476: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x477: Pop(3)
0x478: Push((int) 537854)
0x479: Push((int) 39707)
0x47a: Push((int) 39710)
0x47b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x47c: Pop(3)
0x47d: Return(); Pop(0)

0x47e: Push((int) 39705)
0x47f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x480: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x481: PushEmpty(string)
0x482: Stack[-1] = "Neutral" // @poff=89
0x483: Call2 0x157

0x484: Pop(1)
0x485: Push((int) 537849)
0x486: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x487: Pop(1)
0x488: @@@ ClearReplies(); Obj=0 // @poff=116
0x489: Pop(0)
0x48a: Push((int) 537850)
0x48b: Push((int) 39707)
0x48c: Push((int) 39706)
0x48d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x48e: Pop(3)
0x48f: Return(); Pop(0)

0x490: Push((int) 39707)
0x491: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x493: PushEmpty(string)
0x494: Stack[-1] = "Neutral" // @poff=89
0x495: Call2 0x157

0x496: Pop(1)
0x497: Push((int) 537851)
0x498: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x499: Pop(1)
0x49a: @@@ ClearReplies(); Obj=0 // @poff=116
0x49b: Pop(0)
0x49c: Push((int) 537852)
0x49d: Push((int) -1)
0x49e: Push((int) 39708)
0x49f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4a0: Pop(3)
0x4a1: Push((int) 537853)
0x4a2: Push((int) -1)
0x4a3: Push((int) 39709)
0x4a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4a5: Pop(3)
0x4a6: Return(); Pop(0)

0x4a7: Push((int) 39679)
0x4a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4aa: PushEmpty(string)
0x4ab: Stack[-1] = "Neutral" // @poff=89
0x4ac: Call2 0x157

0x4ad: Pop(1)
0x4ae: Push((int) 537827)
0x4af: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4b0: Pop(1)
0x4b1: @@@ ClearReplies(); Obj=0 // @poff=116
0x4b2: Pop(0)
0x4b3: Push((int) 537828)
0x4b4: Push((int) 39681)
0x4b5: Push((int) 39680)
0x4b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4b7: Pop(3)
0x4b8: Push((int) 537843)
0x4b9: Push((int) 39699)
0x4ba: Push((int) 39698)
0x4bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4bc: Pop(3)
0x4bd: Return(); Pop(0)

0x4be: Push((int) 39699)
0x4bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c1: PushEmpty(string)
0x4c2: Stack[-1] = "Neutral" // @poff=89
0x4c3: Call2 0x157

0x4c4: Pop(1)
0x4c5: Push((int) 537844)
0x4c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4c7: Pop(1)
0x4c8: @@@ ClearReplies(); Obj=0 // @poff=116
0x4c9: Pop(0)
0x4ca: Push((int) 537845)
0x4cb: Push((int) 39681)
0x4cc: Push((int) 39700)
0x4cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4ce: Pop(3)
0x4cf: Return(); Pop(0)

0x4d0: Push((int) 39681)
0x4d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4d3: PushEmpty(string)
0x4d4: Stack[-1] = "Neutral" // @poff=89
0x4d5: Call2 0x157

0x4d6: Pop(1)
0x4d7: Push((int) 537829)
0x4d8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4d9: Pop(1)
0x4da: @@@ ClearReplies(); Obj=0 // @poff=116
0x4db: Pop(0)
0x4dc: Push((int) 537830)
0x4dd: Push((int) 39683)
0x4de: Push((int) 39682)
0x4df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4e0: Pop(3)
0x4e1: Push((int) 537840)
0x4e2: Push((int) 39695)
0x4e3: Push((int) 39694)
0x4e4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4e5: Pop(3)
0x4e6: Return(); Pop(0)

0x4e7: Push((int) 39695)
0x4e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4ea: PushEmpty(string)
0x4eb: Stack[-1] = "Neutral" // @poff=89
0x4ec: Call2 0x157

0x4ed: Pop(1)
0x4ee: Push((int) 537841)
0x4ef: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4f0: Pop(1)
0x4f1: @@@ ClearReplies(); Obj=0 // @poff=116
0x4f2: Pop(0)
0x4f3: Push((int) 537842)
0x4f4: Push((int) 39685)
0x4f5: Push((int) 39696)
0x4f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4f7: Pop(3)
0x4f8: Return(); Pop(0)

0x4f9: Push((int) 39683)
0x4fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x4fc: PushEmpty(string)
0x4fd: Stack[-1] = "Neutral" // @poff=89
0x4fe: Call2 0x157

0x4ff: Pop(1)
0x500: Push((int) 537831)
0x501: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x502: Pop(1)
0x503: @@@ ClearReplies(); Obj=0 // @poff=116
0x504: Pop(0)
0x505: Push((int) 537832)
0x506: Push((int) 39685)
0x507: Push((int) 39684)
0x508: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x509: Pop(3)
0x50a: Return(); Pop(0)

0x50b: Push((int) 39685)
0x50c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x50e: PushEmpty(string)
0x50f: Stack[-1] = "Neutral" // @poff=89
0x510: Call2 0x157

0x511: Pop(1)
0x512: Push((int) 537833)
0x513: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x514: Pop(1)
0x515: @@@ ClearReplies(); Obj=0 // @poff=116
0x516: Pop(0)
0x517: Push((int) 537834)
0x518: Push((int) 39687)
0x519: Push((int) 39686)
0x51a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x51b: Pop(3)
0x51c: Push((int) 537838)
0x51d: Push((int) 39687)
0x51e: Push((int) 39690)
0x51f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x520: Pop(3)
0x521: Push((int) 537839)
0x522: Push((int) 39687)
0x523: Push((int) 39692)
0x524: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x525: Pop(3)
0x526: Return(); Pop(0)

0x527: Push((int) 39687)
0x528: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x52a: PushEmpty(string)
0x52b: Stack[-1] = "Neutral" // @poff=89
0x52c: Call2 0x157

0x52d: Pop(1)
0x52e: Push((int) 537835)
0x52f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x530: Pop(1)
0x531: @@@ ClearReplies(); Obj=0 // @poff=116
0x532: Pop(0)
0x533: Push((int) 537836)
0x534: Push((int) -1)
0x535: Push((int) 39688)
0x536: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x537: Pop(3)
0x538: Push((int) 537837)
0x539: Push((int) -1)
0x53a: Push((int) 39689)
0x53b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x53c: Pop(3)
0x53d: Return(); Pop(0)

0x53e: Push((int) 39658)
0x53f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x541: PushEmpty(string)
0x542: Stack[-1] = "Neutral" // @poff=89
0x543: Call2 0x157

0x544: Pop(1)
0x545: Push((int) 537806)
0x546: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x547: Pop(1)
0x548: @@@ ClearReplies(); Obj=0 // @poff=116
0x549: Pop(0)
0x54a: Push((int) 537807)
0x54b: Push((int) 39660)
0x54c: Push((int) 39659)
0x54d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x54e: Pop(3)
0x54f: Push((int) 537818)
0x550: Push((int) 39671)
0x551: Push((int) 39670)
0x552: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x553: Pop(3)
0x554: Return(); Pop(0)

0x555: Push((int) 39671)
0x556: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x558: PushEmpty(string)
0x559: Stack[-1] = "Neutral" // @poff=89
0x55a: Call2 0x157

0x55b: Pop(1)
0x55c: Push((int) 537819)
0x55d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x55e: Pop(1)
0x55f: @@@ ClearReplies(); Obj=0 // @poff=116
0x560: Pop(0)
0x561: Push((int) 537820)
0x562: Push((int) 39673)
0x563: Push((int) 39672)
0x564: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x565: Pop(3)
0x566: Return(); Pop(0)

0x567: Push((int) 39673)
0x568: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x569: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x56a: PushEmpty(string)
0x56b: Stack[-1] = "Neutral" // @poff=89
0x56c: Call2 0x157

0x56d: Pop(1)
0x56e: Push((int) 537821)
0x56f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x570: Pop(1)
0x571: @@@ ClearReplies(); Obj=0 // @poff=116
0x572: Pop(0)
0x573: Push((int) 537822)
0x574: Push((int) 39675)
0x575: Push((int) 39674)
0x576: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x577: Pop(3)
0x578: Return(); Pop(0)

0x579: Push((int) 39675)
0x57a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57b: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x57c: PushEmpty(string)
0x57d: Stack[-1] = "Neutral" // @poff=89
0x57e: Call2 0x157

0x57f: Pop(1)
0x580: Push((int) 537823)
0x581: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x582: Pop(1)
0x583: @@@ ClearReplies(); Obj=0 // @poff=116
0x584: Pop(0)
0x585: Push((int) 537824)
0x586: Push((int) -1)
0x587: Push((int) 39676)
0x588: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x589: Pop(3)
0x58a: Push((int) 537825)
0x58b: Push((int) -1)
0x58c: Push((int) 39677)
0x58d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x58e: Pop(3)
0x58f: Return(); Pop(0)

0x590: Push((int) 39660)
0x591: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x592: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x593: PushEmpty(string)
0x594: Stack[-1] = "Neutral" // @poff=89
0x595: Call2 0x157

0x596: Pop(1)
0x597: Push((int) 537808)
0x598: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x599: Pop(1)
0x59a: @@@ ClearReplies(); Obj=0 // @poff=116
0x59b: Pop(0)
0x59c: Push((int) 537809)
0x59d: Push((int) 39662)
0x59e: Push((int) 39661)
0x59f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5a0: Pop(3)
0x5a1: Push((int) 537815)
0x5a2: Push((int) 39668)
0x5a3: Push((int) 39667)
0x5a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5a5: Pop(3)
0x5a6: Return(); Pop(0)

0x5a7: Push((int) 39668)
0x5a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5aa: PushEmpty(string)
0x5ab: Stack[-1] = "Neutral" // @poff=89
0x5ac: Call2 0x157

0x5ad: Pop(1)
0x5ae: Push((int) 537816)
0x5af: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5b0: Pop(1)
0x5b1: @@@ ClearReplies(); Obj=0 // @poff=116
0x5b2: Pop(0)
0x5b3: Push((int) 537817)
0x5b4: Push((int) -1)
0x5b5: Push((int) 39669)
0x5b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5b7: Pop(3)
0x5b8: Return(); Pop(0)

0x5b9: Push((int) 39662)
0x5ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bb: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5bc: PushEmpty(string)
0x5bd: Stack[-1] = "Neutral" // @poff=89
0x5be: Call2 0x157

0x5bf: Pop(1)
0x5c0: Push((int) 537810)
0x5c1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5c2: Pop(1)
0x5c3: @@@ ClearReplies(); Obj=0 // @poff=116
0x5c4: Pop(0)
0x5c5: Push((int) 537811)
0x5c6: Push((int) 39664)
0x5c7: Push((int) 39663)
0x5c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5c9: Pop(3)
0x5ca: Push((int) 537814)
0x5cb: Push((int) -1)
0x5cc: Push((int) 39666)
0x5cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5ce: Pop(3)
0x5cf: Return(); Pop(0)

0x5d0: Push((int) 39664)
0x5d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5d3: PushEmpty(string)
0x5d4: Stack[-1] = "Neutral" // @poff=89
0x5d5: Call2 0x157

0x5d6: Pop(1)
0x5d7: Push((int) 537812)
0x5d8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5d9: Pop(1)
0x5da: @@@ ClearReplies(); Obj=0 // @poff=116
0x5db: Pop(0)
0x5dc: Push((int) 537813)
0x5dd: Push((int) -1)
0x5de: Push((int) 39665)
0x5df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5e0: Pop(3)
0x5e1: Return(); Pop(0)

0x5e2: Push((int) 39644)
0x5e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5e5: PushEmpty(string)
0x5e6: Stack[-1] = "Neutral" // @poff=89
0x5e7: Call2 0x157

0x5e8: Pop(1)
0x5e9: Push((int) 537793)
0x5ea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5eb: Pop(1)
0x5ec: @@@ ClearReplies(); Obj=0 // @poff=116
0x5ed: Pop(0)
0x5ee: Push((int) 537794)
0x5ef: Push((int) 39646)
0x5f0: Push((int) 39645)
0x5f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5f2: Pop(3)
0x5f3: Push((int) 537804)
0x5f4: Push((int) -1)
0x5f5: Push((int) 39656)
0x5f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5f7: Pop(3)
0x5f8: Return(); Pop(0)

0x5f9: Push((int) 39646)
0x5fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fb: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x5fc: PushEmpty(string)
0x5fd: Stack[-1] = "Neutral" // @poff=89
0x5fe: Call2 0x157

0x5ff: Pop(1)
0x600: Push((int) 537795)
0x601: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x602: Pop(1)
0x603: @@@ ClearReplies(); Obj=0 // @poff=116
0x604: Pop(0)
0x605: Push((int) 537796)
0x606: Push((int) 39648)
0x607: Push((int) 39647)
0x608: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x609: Pop(3)
0x60a: Push((int) 537803)
0x60b: Push((int) 39648)
0x60c: Push((int) 39654)
0x60d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x60e: Pop(3)
0x60f: Return(); Pop(0)

0x610: Push((int) 39648)
0x611: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x613: PushEmpty(string)
0x614: Stack[-1] = "Neutral" // @poff=89
0x615: Call2 0x157

0x616: Pop(1)
0x617: Push((int) 537797)
0x618: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x619: Pop(1)
0x61a: @@@ ClearReplies(); Obj=0 // @poff=116
0x61b: Pop(0)
0x61c: Push((int) 537798)
0x61d: Push((int) 39650)
0x61e: Push((int) 39649)
0x61f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x620: Pop(3)
0x621: Push((int) 537802)
0x622: Push((int) -1)
0x623: Push((int) 39653)
0x624: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x625: Pop(3)
0x626: Return(); Pop(0)

0x627: Push((int) 39650)
0x628: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x629: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x62a: PushEmpty(string)
0x62b: Stack[-1] = "Neutral" // @poff=89
0x62c: Call2 0x157

0x62d: Pop(1)
0x62e: Push((int) 537799)
0x62f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x630: Pop(1)
0x631: @@@ ClearReplies(); Obj=0 // @poff=116
0x632: Pop(0)
0x633: Push((int) 537800)
0x634: Push((int) -1)
0x635: Push((int) 39651)
0x636: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x637: Pop(3)
0x638: Push((int) 537801)
0x639: Push((int) -1)
0x63a: Push((int) 39652)
0x63b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x63c: Pop(3)
0x63d: Return(); Pop(0)

0x63e: Push((int) 39641)
0x63f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x640: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x641: PushEmpty(string)
0x642: Stack[-1] = "Neutral" // @poff=89
0x643: Call2 0x157

0x644: Pop(1)
0x645: Push((int) 537790)
0x646: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x647: Pop(1)
0x648: @@@ ClearReplies(); Obj=0 // @poff=116
0x649: Pop(0)
0x64a: Push((int) 537791)
0x64b: Push((int) -1)
0x64c: Push((int) 39642)
0x64d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x64e: Pop(3)
0x64f: Return(); Pop(0)

0x650: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x651: PushEmpty(bool)
0x652: Call2 0x12dd

0x653: Pop(0)
0x654: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x655: @ lshStopAnimation()
0x656: Pop(0)
0x657: GOTO 0x65a

0x658: @ StopAnimation()
0x659: Pop(0)
0x65a: Return(); Pop(0)

0x65b: GOTO 0x16e

0x65c: Return(); Pop(0)

0x65d: PushEmpty()
0x65e: EventDisable(0)
0x65f: PushEmpty(object)
0x660: Stack[-2] = Stack[-1]
0x661: Call2 0x67e

0x662: Pop(1)
0x663: PushEmpty(object)
0x664: Stack[-2] = Stack[-1]
0x665: Call2 0x1306

0x666: Pop(1)
0x667: EventEnable(0)
0x668: @ Hold()
0x669: Pop(0)
0x66a: GOTO 0x668

0x66b: Return(); Pop(0)

0x66c: PushEmpty(int, int)
0x66d: PushEmpty(int, object)
0x66e: Stack[-5] = Stack[-1]
0x66f: Call2 0x1295

0x670: Stack[-2] = Stack[-3]
0x671: Pop(2)
0x672: Push((int) 0)
0x673: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x675: PushEmpty(object)
0x676: Stack[-4] = Stack[-1]
0x677: Call2 0x1298

0x678: Pop(1)
0x679: Return(); Pop(2)

0x67a: PushEmpty()
0x67b: Call2 0x129e

0x67c: Pop(0)
0x67d: Return(); Pop(0)

0x67e: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x67f: Pop(0); PushNull((bool) Stack[-21] == 0)
0x680: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x681: PushEmpty(string)
0x682: Stack[-1] = "fdie" // @poff=156
0x683: Call2 0x6d9

0x684: Pop(1)
0x685: GOTO 0x6d8

0x686: @@ GetPosition(Stack[-10]); Obj=21 // @poff=166
0x687: Pop(0)
0x688: @ GetPosition(Stack[-9])
0x689: Pop(0)
0x68a: @ GetDirection(Stack[-8])
0x68b: Pop(0)
0x68c: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x68d: Push(CvectorIndex(Stack[-7], 0))
0x68e: Push(CvectorIndex(Stack[-9], 0))
0x68f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x690: Push(CvectorIndex(Stack[-8], 2))
0x691: Push(CvectorIndex(Stack[-10], 2))
0x692: Pop(2); Push(Stack[-2] * Stack[-1]);
0x693: Pop(2); Push(Stack[-2] + Stack[-1]);
0x694: Push((int) 0)
0x695: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x696: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x697: Stack[-6] = "fdie" // @poff=156
0x698: GOTO 0x69a

0x699: Stack[-6] = "bdie" // @poff=178
0x69a: @ RemoveRTEnvelope()
0x69b: Pop(0)
0x69c: @ SetDeathState()
0x69d: Pop(0)
0x69e: @ Stop()
0x69f: Pop(0)
0x6a0: @ StopAsync()
0x6a1: Pop(0)
0x6a2: Stack[-21] = Stack[-5]
0x6a3: Push("GetScriptProperty") // @poff=188
0x6a4: Push((int) 2)
0x6a5: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x6a6: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6a7: Push("Owner") // @poff=224
0x6a8: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=236
0x6a9: Pop(1)
0x6aa: Push(Stack[-4])
0x6ab: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6ac: Push("Owner") // @poff=224
0x6ad: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=254
0x6ae: Pop(1)
0x6af: Pop(0); PushNull((bool) Stack[-5] == 0)
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6b1: Stack[-21] = Stack[-5]
0x6b2: Push("@GetEyesHeight") // @poff=272
0x6b3: Push((int) 1)
0x6b4: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x6b5: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6b6: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=302
0x6b7: Pop(0)
0x6b8: Stack[-1] = [0.0, 0.0, 0.0]
0x6b9: Push(CvectorIndex(Stack[-1], 1))
0x6ba: Stack[-3] = Stack[-1]
0x6bb: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6bc: Push("head") // @poff=316
0x6bd: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x6be: Pop(1)
0x6bf: Stack[-3] = (bool) 1
0x6c0: GOTO 0x6c2

0x6c1: Stack[-3] = (bool) 0
0x6c2: PushEmpty(string)
0x6c3: Stack[-7] = Stack[-1]
0x6c4: Call2 0xefc

0x6c5: Pop(1)
0x6c6: Push("all") // @poff=138
0x6c7: @ PlayAnimation(Stack[-1], Stack[-7])
0x6c8: Pop(1)
0x6c9: @ WaitForAnimEnd()
0x6ca: Pop(0)
0x6cb: Push(Stack[-3])
0x6cc: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6cd: @ StopAsync()
0x6ce: Pop(0)
0x6cf: Push("head") // @poff=316
0x6d0: @ UnlookAsync(Stack[-1])
0x6d1: Pop(1)
0x6d2: Push("all") // @poff=138
0x6d3: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x6d4: Pop(1)
0x6d5: @ RemoveEnvelope()
0x6d6: Pop(0)
0x6d7: Stack[-5] = 0
0x6d8: Return(); Pop(20)

0x6d9: PushEmpty()
0x6da: @ RemoveRTEnvelope()
0x6db: Pop(0)
0x6dc: @ SetDeathState()
0x6dd: Pop(0)
0x6de: @ Stop()
0x6df: Pop(0)
0x6e0: @ StopAsync()
0x6e1: Pop(0)
0x6e2: @ StopSecondaryAnimation()
0x6e3: Pop(0)
0x6e4: PushEmpty(string)
0x6e5: Stack[-2] = Stack[-1]
0x6e6: Call2 0xefc

0x6e7: Pop(1)
0x6e8: Push("all") // @poff=138
0x6e9: @ PlayAnimation(Stack[-1], Stack[-2])
0x6ea: Pop(1)
0x6eb: @ WaitForAnimEnd()
0x6ec: Pop(0)
0x6ed: Push("all") // @poff=138
0x6ee: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x6ef: Pop(1)
0x6f0: @ RemoveEnvelope()
0x6f1: Pop(0)
0x6f2: Return(); Pop(0)

0x6f3: PushEmpty()
0x6f4: Return(); Pop(0)

0x6f5: PushEmpty()
0x6f6: Return(); Pop(0)

0x6f7: PushEmpty()
0x6f8: Return(); Pop(0)

0x6f9: Push((bool) 1)
0x6fa: @ SensePlayerOnly(Stack[-1])
0x6fb: Pop(1)
0x6fc: PushEmpty()
0x6fd: Call2 0x12df

0x6fe: Pop(0)
0x6ff: PushEmpty()
0x700: Call2 0x708

0x701: Pop(0)
0x702: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x703: PushEmpty()
0x704: Call2 0x80d

0x705: Pop(0)
0x706: GOTO 0x702

0x707: Return(); Pop(0)

0x708: PushEmpty(bool)
0x709: Call2 0xe83

0x70a: Pop(0)
0x70b: Pop(1); Push((bool) Stack[-1] == 0)
0x70c: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70d: PushEmpty()
0x70e: Call2 0x129e

0x70f: Pop(0)
0x710: Return(); Pop(0)

0x711: PushEmpty(int, int)
0x712: PushEmpty(int, object)
0x713: Stack[-5] = Stack[-1]
0x714: Call2 0x1295

0x715: Stack[-2] = Stack[-3]
0x716: Pop(2)
0x717: Push((int) 0)
0x718: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x719: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x71a: Push((int) 1)
0x71b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x71c: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71d: PushEmpty()
0x71e: Call2 0x7cc

0x71f: Pop(0)
0x720: PushEmpty(object)
0x721: Stack[-4] = Stack[-1]
0x722: Call2 0x1298

0x723: Pop(1)
0x724: Return(); Pop(2)

0x725: PushEmpty(int, int)
0x726: PushEmpty(object)
0x727: Stack[-4] = Stack[-1]
0x728: Call2 0x11d2

0x729: Pop(1)
0x72a: PushEmpty(int, object)
0x72b: Stack[-5] = Stack[-1]
0x72c: Call2 0x1225

0x72d: Stack[-2] = Stack[-3]
0x72e: Pop(2)
0x72f: Push((int) 0)
0x730: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x732: Push((int) 1)
0x733: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x734: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x735: PushEmpty()
0x736: Call2 0x7cc

0x737: Pop(0)
0x738: PushEmpty(object)
0x739: Stack[-4] = Stack[-1]
0x73a: Call2 0x122f

0x73b: Pop(1)
0x73c: Return(); Pop(2)

0x73d: PushEmpty(int, int)
0x73e: PushEmpty(bool, object, object, bool)
0x73f: Stack[-9] = Stack[-3]
0x740: Stack[-8] = Stack[-2]
0x741: Stack[-7] = Stack[-1]
0x742: Call2 0x12fd

0x743: Pop(3)
0x744: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x745: PushEmpty(int, object, bool)
0x746: Stack[-8] = Stack[-2]
0x747: Stack[-6] = Stack[-1]
0x748: Call2 0x1237

0x749: Stack[-3] = Stack[-4]
0x74a: Pop(3)
0x74b: Push((int) 0)
0x74c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x74d: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x74e: Push((int) 1)
0x74f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x751: PushEmpty()
0x752: Call2 0x7cc

0x753: Pop(0)
0x754: PushEmpty(object)
0x755: Stack[-6] = Stack[-1]
0x756: Call2 0x1241

0x757: Pop(1)
0x758: Return(); Pop(2)

0x759: PushEmpty(int, int)
0x75a: PushEmpty(int, object)
0x75b: Stack[-5] = Stack[-1]
0x75c: Call2 0x128b

0x75d: Stack[-2] = Stack[-3]
0x75e: Pop(2)
0x75f: Push((int) 0)
0x760: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x761: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x762: Push((int) 1)
0x763: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x764: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x765: PushEmpty()
0x766: Call2 0x7cc

0x767: Pop(0)
0x768: PushEmpty(object)
0x769: Stack[-4] = Stack[-1]
0x76a: Call2 0x128e

0x76b: Pop(1)
0x76c: Return(); Pop(2)

0x76d: PushEmpty(int, int)
0x76e: PushEmpty(bool, object, string)
0x76f: Stack[-7] = Stack[-2]
0x770: Stack[-6] = Stack[-1]
0x771: Call2 0x117c

0x772: Pop(2)
0x773: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x774: PushEmpty()
0x775: Call2 0x7cc

0x776: Pop(0)
0x777: PushEmpty(object, string)
0x778: Stack[-6] = Stack[-2]
0x779: Stack[-5] = Stack[-1]
0x77a: Call2 0x119c

0x77b: Pop(2)
0x77c: GOTO 0x791

0x77d: PushEmpty(int, string, object)
0x77e: Stack[-6] = Stack[-2]
0x77f: Stack[-7] = Stack[-1]
0x780: Call2 0x1290

0x781: Stack[-3] = Stack[-4]
0x782: Pop(3)
0x783: Push((int) 0)
0x784: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x785: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x786: Push((int) 1)
0x787: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x789: PushEmpty()
0x78a: Call2 0x7cc

0x78b: Pop(0)
0x78c: PushEmpty(string, object)
0x78d: Stack[-5] = Stack[-2]
0x78e: Stack[-6] = Stack[-1]
0x78f: Call2 0x1293

0x790: Pop(2)
0x791: Return(); Pop(2)

0x792: PushEmpty()
0x793: PushEmpty(bool, string)
0x794: Stack[-3] = Stack[-1]
0x795: Call2 0x11df

0x796: Pop(1)
0x797: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x798: PushEmpty()
0x799: Call2 0x7cc

0x79a: Pop(0)
0x79b: PushEmpty(string)
0x79c: Stack[-2] = Stack[-1]
0x79d: Call2 0x11ef

0x79e: Pop(1)
0x79f: Return(); Pop(0)

0x7a0: PushEmpty()
0x7a1: PushEmpty(bool, object)
0x7a2: Stack[-3] = Stack[-1]
0x7a3: Call2 0x11b5

0x7a4: Pop(1)
0x7a5: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7a6: PushEmpty()
0x7a7: Call2 0x7cc

0x7a8: Pop(0)
0x7a9: PushEmpty(object)
0x7aa: Stack[-2] = Stack[-1]
0x7ab: Call2 0x11cc

0x7ac: Pop(1)
0x7ad: GOTO 0x7b2

0x7ae: PushEmpty(object)
0x7af: Stack[-2] = Stack[-1]
0x7b0: Call2 0x7e5

0x7b1: Pop(1)
0x7b2: Return(); Pop(0)

0x7b3: PushEmpty()
0x7b4: PushEmpty(object)
0x7b5: Stack[-2] = Stack[-1]
0x7b6: Call2 0x7e5

0x7b7: Pop(1)
0x7b8: Return(); Pop(0)

0x7b9: PushEmpty()
0x7ba: Push((int) 110)
0x7bb: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7bd: Return(); Pop(0)

0x7be: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7bf: Push((int) 110)
0x7c0: @ KillTimer(Stack[-1])
0x7c1: Pop(1)
0x7c2: @ ResetAAS()
0x7c3: Pop(0)
0x7c4: Return(); Pop(0)

0x7c5: PushEmpty()
0x7c6: Call2 0x7cc

0x7c7: Pop(0)
0x7c8: PushEmpty()
0x7c9: Call2 0x129e

0x7ca: Pop(0)
0x7cb: Return(); Pop(0)

0x7cc: Push((int) 110)
0x7cd: @ KillTimer(Stack[-1])
0x7ce: Pop(1)
0x7cf: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7d0: PushEmpty()
0x7d1: Call2 0x854

0x7d2: Pop(0)
0x7d3: Return(); Pop(0)

0x7d4: Push((int) 110)
0x7d5: @ KillTimer(Stack[-1])
0x7d6: Pop(1)
0x7d7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7d8: PushEmpty()
0x7d9: Call2 0x85b

0x7da: Pop(0)
0x7db: Return(); Pop(0)

0x7dc: PushEmpty()
0x7dd: PushEmpty()
0x7de: Call2 0x7cc

0x7df: Pop(0)
0x7e0: PushEmpty(object)
0x7e1: Stack[-2] = Stack[-1]
0x7e2: Call2 0x1164

0x7e3: Pop(1)
0x7e4: Return(); Pop(0)

0x7e5: PushEmpty(bool, int, bool, int)
0x7e6: PushEmpty(bool, object)
0x7e7: Stack[-7] = Stack[-1]
0x7e8: Call2 0xde2

0x7e9: Pop(1)
0x7ea: Pop(1); Push((bool) Stack[-1] == 0)
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7ec: Return(); Pop(4)

0x7ed: Push( Stack[2 + Tasks[-1].StackPointer] )
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7ef: Return(); Pop(4)

0x7f0: @ IsPlayerActor(Stack[-5], Stack[-2])
0x7f1: Pop(0)
0x7f2: Pop(0); Push((bool) Stack[-2] == 0)
0x7f3: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f4: Return(); Pop(4)

0x7f5: PushEmpty(int, object)
0x7f6: Stack[-7] = Stack[-1]
0x7f7: Call2 0x1214

0x7f8: Stack[-2] = Stack[-3]
0x7f9: Pop(2)
0x7fa: Push((int) 0)
0x7fb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7fc: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x7fd: Push((int) 1)
0x7fe: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7ff: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x800: PushEmpty()
0x801: Call2 0x7d4

0x802: Pop(0)
0x803: PushEmpty(object)
0x804: Stack[-6] = Stack[-1]
0x805: Call2 0x121d

0x806: Pop(1)
0x807: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x808: Push((int) 110)
0x809: Push((float)10.0)
0x80a: @ SetTimer(Stack[-2], Stack[-1])
0x80b: Pop(2)
0x80c: Return(); Pop(4)

0x80d: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x80e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x80f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x810: Push((float)0.5)
0x811: @ rand(Stack[-7], Stack[-1])
0x812: Pop(1)
0x813: @ Sleep(Stack[-6])
0x814: Pop(0)
0x815: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x816: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x817: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x818: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x819: @ GetPosition(Stack[-4])
0x81a: Pop(0)
0x81b: PushEmpty(float)
0x81c: Call2 0x848

0x81d: Pop(0)
0x81e: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x81f: Pop(1)
0x820: Push(Stack[-3])
0x821: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x822: GOTO 0x827

0x823: Push((int) 1)
0x824: @ Sleep(Stack[-1])
0x825: Pop(1)
0x826: GOTO 0x819

0x827: GOTO 0x829

0x828: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x829: PushEmpty(object, cvector)
0x82a: Stack[-7] = Stack[-1]
0x82b: Call2 0x864

0x82c: Stack[-2] = Stack[-4]
0x82d: Pop(2)
0x82e: Pop(0); Push(( Stack[-2] != 0 )
0x82f: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x830: @ RotatePath(Stack[-2], Stack[-1])
0x831: Pop(0)
0x832: Push(Stack[-1])
0x833: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x834: PushEmpty(bool)
0x835: Call2 0x862

0x836: Pop(0)
0x837: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x838: Pop(1)
0x839: Stack[-2] = 0
0x83a: Push(Stack[-1])
0x83b: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83c: PushEmpty()
0x83d: Push(-0, 0); TaskCall(4)
0x83e: Call2 0x90e

0x83f: Pop(-0, 0); TaskReturn
0x840: Pop(0)
0x841: GOTO 0x845

0x842: Push((int) 1)
0x843: @ Sleep(Stack[-1])
0x844: Pop(1)
0x845: Stack[-2] = 0
0x846: GOTO 0x815

0x847: Return(); Pop(12)

0x848: PushEmpty(float, float)
0x849: @ GetCameraFarDistance(Stack[-1])
0x84a: Pop(0)
0x84b: Stack[-1] = Stack[-3]
0x84c: Return(); Pop(2)

0x84d: PushEmpty()
0x84e: @ RequestClearPath(Stack[-1])
0x84f: Pop(0)
0x850: Return(); Pop(0)

0x851: @ Stop()
0x852: Pop(0)
0x853: Return(); Pop(0)

0x854: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x855: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x856: @ Stop()
0x857: Pop(0)
0x858: @ StopGroup0()
0x859: Pop(0)
0x85a: Return(); Pop(0)

0x85b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x85c: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x85d: @ Stop()
0x85e: Pop(0)
0x85f: @ StopGroup0()
0x860: Pop(0)
0x861: Return(); Pop(0)

0x862: Stack[-1] = (bool) 0
0x863: Return(); Pop(0)

0x864: PushEmpty(object, object)
0x865: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x866: Pop(0)
0x867: Stack[-1] = Stack[-4]
0x868: Return(); Pop(2)

0x869: Stack[-1] = 0
0x86a: PushEmpty(int, int)
0x86b: PushEmpty(int, object)
0x86c: Stack[-5] = Stack[-1]
0x86d: Call2 0x1295

0x86e: Stack[-2] = Stack[-3]
0x86f: Pop(2)
0x870: Push((int) 0)
0x871: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x872: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x873: Push((int) 1)
0x874: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x875: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x876: PushEmpty()
0x877: Call2 0x95f

0x878: Pop(0)
0x879: PushEmpty(object)
0x87a: Stack[-4] = Stack[-1]
0x87b: Call2 0x1298

0x87c: Pop(1)
0x87d: Return(); Pop(2)

0x87e: PushEmpty(int, int)
0x87f: PushEmpty(object)
0x880: Stack[-4] = Stack[-1]
0x881: Call2 0x11d2

0x882: Pop(1)
0x883: PushEmpty(int, object)
0x884: Stack[-5] = Stack[-1]
0x885: Call2 0x1225

0x886: Stack[-2] = Stack[-3]
0x887: Pop(2)
0x888: Push((int) 0)
0x889: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x88a: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x88b: Push((int) 1)
0x88c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x88d: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x88e: PushEmpty()
0x88f: Call2 0x95f

0x890: Pop(0)
0x891: PushEmpty(object)
0x892: Stack[-4] = Stack[-1]
0x893: Call2 0x122f

0x894: Pop(1)
0x895: Return(); Pop(2)

0x896: PushEmpty(int, int)
0x897: PushEmpty(bool, object, object, bool)
0x898: Stack[-9] = Stack[-3]
0x899: Stack[-8] = Stack[-2]
0x89a: Stack[-7] = Stack[-1]
0x89b: Call2 0x12fd

0x89c: Pop(3)
0x89d: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x89e: PushEmpty(int, object, bool)
0x89f: Stack[-8] = Stack[-2]
0x8a0: Stack[-6] = Stack[-1]
0x8a1: Call2 0x1237

0x8a2: Stack[-3] = Stack[-4]
0x8a3: Pop(3)
0x8a4: Push((int) 0)
0x8a5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8a7: Push((int) 1)
0x8a8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8a9: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8aa: PushEmpty()
0x8ab: Call2 0x95f

0x8ac: Pop(0)
0x8ad: PushEmpty(object)
0x8ae: Stack[-6] = Stack[-1]
0x8af: Call2 0x1241

0x8b0: Pop(1)
0x8b1: Return(); Pop(2)

0x8b2: PushEmpty(int, int)
0x8b3: PushEmpty(int, object)
0x8b4: Stack[-5] = Stack[-1]
0x8b5: Call2 0x128b

0x8b6: Stack[-2] = Stack[-3]
0x8b7: Pop(2)
0x8b8: Push((int) 0)
0x8b9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8ba: IF (Stack[-1] == 0) GOTO 0x8c5; Pop(1)

0x8bb: Push((int) 1)
0x8bc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8be: PushEmpty()
0x8bf: Call2 0x95f

0x8c0: Pop(0)
0x8c1: PushEmpty(object)
0x8c2: Stack[-4] = Stack[-1]
0x8c3: Call2 0x128e

0x8c4: Pop(1)
0x8c5: Return(); Pop(2)

0x8c6: PushEmpty(int, int)
0x8c7: PushEmpty(bool, object, string)
0x8c8: Stack[-7] = Stack[-2]
0x8c9: Stack[-6] = Stack[-1]
0x8ca: Call2 0x117c

0x8cb: Pop(2)
0x8cc: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8cd: PushEmpty()
0x8ce: Call2 0x95f

0x8cf: Pop(0)
0x8d0: PushEmpty(object, string)
0x8d1: Stack[-6] = Stack[-2]
0x8d2: Stack[-5] = Stack[-1]
0x8d3: Call2 0x119c

0x8d4: Pop(2)
0x8d5: GOTO 0x8ea

0x8d6: PushEmpty(int, string, object)
0x8d7: Stack[-6] = Stack[-2]
0x8d8: Stack[-7] = Stack[-1]
0x8d9: Call2 0x1290

0x8da: Stack[-3] = Stack[-4]
0x8db: Pop(3)
0x8dc: Push((int) 0)
0x8dd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8df: Push((int) 1)
0x8e0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8e2: PushEmpty()
0x8e3: Call2 0x95f

0x8e4: Pop(0)
0x8e5: PushEmpty(string, object)
0x8e6: Stack[-5] = Stack[-2]
0x8e7: Stack[-6] = Stack[-1]
0x8e8: Call2 0x1293

0x8e9: Pop(2)
0x8ea: Return(); Pop(2)

0x8eb: PushEmpty()
0x8ec: PushEmpty(bool, string)
0x8ed: Stack[-3] = Stack[-1]
0x8ee: Call2 0x11df

0x8ef: Pop(1)
0x8f0: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8f1: PushEmpty()
0x8f2: Call2 0x95f

0x8f3: Pop(0)
0x8f4: PushEmpty(string)
0x8f5: Stack[-2] = Stack[-1]
0x8f6: Call2 0x11ef

0x8f7: Pop(1)
0x8f8: Return(); Pop(0)

0x8f9: PushEmpty()
0x8fa: Call2 0x95f

0x8fb: Pop(0)
0x8fc: PushEmpty()
0x8fd: Call2 0x129e

0x8fe: Pop(0)
0x8ff: Return(); Pop(0)

0x900: PushEmpty()
0x901: PushEmpty(bool, object)
0x902: Stack[-3] = Stack[-1]
0x903: Call2 0x11b5

0x904: Pop(1)
0x905: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x906: PushEmpty()
0x907: Call2 0x95f

0x908: Pop(0)
0x909: PushEmpty(object)
0x90a: Stack[-2] = Stack[-1]
0x90b: Call2 0x11cc

0x90c: Pop(1)
0x90d: Return(); Pop(0)

0x90e: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x90f: @ WaitForAnimEnd()
0x910: Pop(0)
0x911: PushEmpty(bool)
0x912: Call2 0xe83

0x913: Pop(0)
0x914: Pop(1); Push((bool) Stack[-1] == 0)
0x915: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x916: Return(); Pop(14)

0x917: PushEmpty(int)
0x918: Call2 0x1203

0x919: Stack[-1] = Stack[-8]
0x91a: Pop(1)
0x91b: Stack[-6] = (int) 0
0x91c: PushEmpty(bool)
0x91d: Stack[-1] = (bool) 0
0x91e: Push((int) 5)
0x91f: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x920: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x921: PushEmpty(bool)
0x922: Call2 0xe83

0x923: Pop(0)
0x924: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x925: Stack[-1] = (bool) 1
0x926: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x927: Push((int) 3)
0x928: @ irand(Stack[-6], Stack[-1])
0x929: Pop(1)
0x92a: Push((int) 0)
0x92b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x92c: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x92d: Push(Stack[-7])
0x92e: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x92f: @ irand(Stack[-4], Stack[-7])
0x930: Pop(0)
0x931: Push("all") // @poff=138
0x932: PushEmpty(string, int)
0x933: Stack[-7] = Stack[-1]
0x934: Call2 0x11fc

0x935: Pop(1)
0x936: @ PlayAnimation(Stack[-2], Stack[-1])
0x937: Pop(2)
0x938: @ WaitForAnimEnd(Stack[-3])
0x939: Pop(0)
0x93a: Pop(0); Push((bool) Stack[-3] == 0)
0x93b: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93c: GOTO 0x95a

0x93d: GOTO 0x94f

0x93e: Push((int) 1)
0x93f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x940: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x941: Push((int) 4)
0x942: @ rand(Stack[-3], Stack[-1])
0x943: Pop(1)
0x944: Push((int) 1)
0x945: Pop(1); Push(Stack[-3] + Stack[-1]);
0x946: @ Sleep(Stack[-1], Stack[-2])
0x947: Pop(1)
0x948: Pop(0); Push((bool) Stack[-1] == 0)
0x949: IF (Stack[-1] == 0) GOTO 0x94b; Pop(1)

0x94a: GOTO 0x95a

0x94b: GOTO 0x94f

0x94c: Push(Stack[-6])
0x94d: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x94e: GOTO 0x95a

0x94f: PushEmpty(bool)
0x950: Call2 0x95d

0x951: Pop(0)
0x952: Pop(1); Push((bool) Stack[-1] == 0)
0x953: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x954: GOTO 0x95a

0x955: @ ResetAAS()
0x956: Pop(0)
0x957: Push((int) 1)
0x958: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x959: GOTO 0x91c

0x95a: @ ResetAAS()
0x95b: Pop(0)
0x95c: Return(); Pop(14)

0x95d: Stack[-1] = (bool) 1
0x95e: Return(); Pop(0)

0x95f: @ StopAnimation()
0x960: Pop(0)
0x961: @ StopGroup0()
0x962: Pop(0)
0x963: Return(); Pop(0)

0x964: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x965: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x966: PushEmpty()
0x967: Call2 0x997

0x968: Pop(0)
0x969: @ GetDirection(Stack[-3])
0x96a: Pop(0)
0x96b: PushEmpty(cvector, object)
0x96c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x96d: Call2 0xd99

0x96e: Stack[-2] = Stack[-4]
0x96f: Pop(2)
0x970: PushEmpty(float, cvector, cvector)
0x971: Stack[-6] = Stack[-2]
0x972: Stack[-5] = Stack[-1]
0x973: Call2 0xf50

0x974: Pop(2)
0x975: Push((int) 0)
0x976: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x977: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x978: PushEmpty(object)
0x979: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x97a: Call2 0xe78

0x97b: Pop(1)
0x97c: Stack[-1] = (bool) 1
0x97d: GOTO 0x981

0x97e: Push((float)1.5)
0x97f: @ Sleep(Stack[-1], Stack[-2])
0x980: Pop(1)
0x981: Push(Stack[-1])
0x982: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x983: PushEmpty(object)
0x984: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x985: Call2 0xe78

0x986: Pop(1)
0x987: Push((int) 111)
0x988: Push((float)0.5)
0x989: @ SetTimer(Stack[-2], Stack[-1])
0x98a: Pop(2)
0x98b: Push((float)5.0)
0x98c: @ Sleep(Stack[-1])
0x98d: Pop(1)
0x98e: Push((int) 111)
0x98f: @ KillTimer(Stack[-1])
0x990: Pop(1)
0x991: @ StopAsync()
0x992: Pop(0)
0x993: Push("head") // @poff=316
0x994: @ UnlookAsync(Stack[-1])
0x995: Pop(1)
0x996: Return(); Pop(6)

0x997: PushEmpty(object)
0x998: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x999: Call2 0xeea

0x99a: Pop(1)
0x99b: Return(); Pop(0)

0x99c: PushEmpty(int, int)
0x99d: PushEmpty(int, object)
0x99e: Stack[-5] = Stack[-1]
0x99f: Call2 0x1295

0x9a0: Stack[-2] = Stack[-3]
0x9a1: Pop(2)
0x9a2: Push((int) 0)
0x9a3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9a4: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9a5: Push((int) 1)
0x9a6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9a7: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a8: PushEmpty()
0x9a9: Call2 0xa2b

0x9aa: Pop(0)
0x9ab: PushEmpty(object)
0x9ac: Stack[-4] = Stack[-1]
0x9ad: Call2 0x1298

0x9ae: Pop(1)
0x9af: Return(); Pop(2)

0x9b0: PushEmpty(int, int)
0x9b1: PushEmpty(object)
0x9b2: Stack[-4] = Stack[-1]
0x9b3: Call2 0x11d2

0x9b4: Pop(1)
0x9b5: PushEmpty(int, object)
0x9b6: Stack[-5] = Stack[-1]
0x9b7: Call2 0x1225

0x9b8: Stack[-2] = Stack[-3]
0x9b9: Pop(2)
0x9ba: Push((int) 0)
0x9bb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9bc: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9bd: Push((int) 1)
0x9be: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9bf: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9c0: PushEmpty()
0x9c1: Call2 0xa2b

0x9c2: Pop(0)
0x9c3: PushEmpty(object)
0x9c4: Stack[-4] = Stack[-1]
0x9c5: Call2 0x122f

0x9c6: Pop(1)
0x9c7: Return(); Pop(2)

0x9c8: PushEmpty(int, int)
0x9c9: PushEmpty(bool, object, object, bool)
0x9ca: Stack[-9] = Stack[-3]
0x9cb: Stack[-8] = Stack[-2]
0x9cc: Stack[-7] = Stack[-1]
0x9cd: Call2 0x12fd

0x9ce: Pop(3)
0x9cf: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9d0: PushEmpty(int, object, bool)
0x9d1: Stack[-8] = Stack[-2]
0x9d2: Stack[-6] = Stack[-1]
0x9d3: Call2 0x1237

0x9d4: Stack[-3] = Stack[-4]
0x9d5: Pop(3)
0x9d6: Push((int) 0)
0x9d7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9d8: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9d9: Push((int) 1)
0x9da: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9db: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9dc: PushEmpty()
0x9dd: Call2 0xa2b

0x9de: Pop(0)
0x9df: PushEmpty(object)
0x9e0: Stack[-6] = Stack[-1]
0x9e1: Call2 0x1241

0x9e2: Pop(1)
0x9e3: Return(); Pop(2)

0x9e4: PushEmpty(int, int)
0x9e5: PushEmpty(int, object)
0x9e6: Stack[-5] = Stack[-1]
0x9e7: Call2 0x128b

0x9e8: Stack[-2] = Stack[-3]
0x9e9: Pop(2)
0x9ea: Push((int) 0)
0x9eb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ec: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9ed: Push((int) 1)
0x9ee: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9f0: PushEmpty()
0x9f1: Call2 0xa2b

0x9f2: Pop(0)
0x9f3: PushEmpty(object)
0x9f4: Stack[-4] = Stack[-1]
0x9f5: Call2 0x128e

0x9f6: Pop(1)
0x9f7: Return(); Pop(2)

0x9f8: PushEmpty(int, int)
0x9f9: PushEmpty(bool, object, string)
0x9fa: Stack[-7] = Stack[-2]
0x9fb: Stack[-6] = Stack[-1]
0x9fc: Call2 0x117c

0x9fd: Pop(2)
0x9fe: IF (Stack[-1] == 0) GOTO 0xa08; Pop(1)

0x9ff: PushEmpty()
0xa00: Call2 0xa2b

0xa01: Pop(0)
0xa02: PushEmpty(object, string)
0xa03: Stack[-6] = Stack[-2]
0xa04: Stack[-5] = Stack[-1]
0xa05: Call2 0x119c

0xa06: Pop(2)
0xa07: GOTO 0xa1c

0xa08: PushEmpty(int, string, object)
0xa09: Stack[-6] = Stack[-2]
0xa0a: Stack[-7] = Stack[-1]
0xa0b: Call2 0x1290

0xa0c: Stack[-3] = Stack[-4]
0xa0d: Pop(3)
0xa0e: Push((int) 0)
0xa0f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa10: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa11: Push((int) 1)
0xa12: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa13: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa14: PushEmpty()
0xa15: Call2 0xa2b

0xa16: Pop(0)
0xa17: PushEmpty(string, object)
0xa18: Stack[-5] = Stack[-2]
0xa19: Stack[-6] = Stack[-1]
0xa1a: Call2 0x1293

0xa1b: Pop(2)
0xa1c: Return(); Pop(2)

0xa1d: PushEmpty()
0xa1e: PushEmpty(bool, string)
0xa1f: Stack[-3] = Stack[-1]
0xa20: Call2 0x11df

0xa21: Pop(1)
0xa22: IF (Stack[-1] == 0) GOTO 0xa2a; Pop(1)

0xa23: PushEmpty()
0xa24: Call2 0xa2b

0xa25: Pop(0)
0xa26: PushEmpty(string)
0xa27: Stack[-2] = Stack[-1]
0xa28: Call2 0x11ef

0xa29: Pop(1)
0xa2a: Return(); Pop(0)

0xa2b: @ StopGroup0()
0xa2c: Pop(0)
0xa2d: @ StopAsync()
0xa2e: Pop(0)
0xa2f: Push("head") // @poff=316
0xa30: @ UnlookAsync(Stack[-1])
0xa31: Pop(1)
0xa32: Push((int) 111)
0xa33: @ KillTimer(Stack[-1])
0xa34: Pop(1)
0xa35: Return(); Pop(0)

0xa36: PushEmpty()
0xa37: PushEmpty()
0xa38: Call2 0xa2b

0xa39: Pop(0)
0xa3a: PushEmpty(object)
0xa3b: Stack[-2] = Stack[-1]
0xa3c: Call2 0x1164

0xa3d: Pop(1)
0xa3e: Return(); Pop(0)

0xa3f: PushEmpty(cvector, cvector, cvector, cvector)
0xa40: Push((int) 111)
0xa41: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xa42: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa43: Return(); Pop(4)

0xa44: PushEmpty(bool, object)
0xa45: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa46: Call2 0xde2

0xa47: Pop(1)
0xa48: Pop(1); Push((bool) Stack[-1] == 0)
0xa49: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4a: PushEmpty()
0xa4b: Call2 0xa2b

0xa4c: Pop(0)
0xa4d: Return(); Pop(4)

0xa4e: @ GetDirection(Stack[-2])
0xa4f: Pop(0)
0xa50: PushEmpty(cvector, object)
0xa51: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa52: Call2 0xd99

0xa53: Stack[-2] = Stack[-3]
0xa54: Pop(2)
0xa55: PushEmpty(float, cvector, cvector)
0xa56: Stack[-5] = Stack[-2]
0xa57: Stack[-4] = Stack[-1]
0xa58: Call2 0xf50

0xa59: Pop(2)
0xa5a: Push((float)0.4999999701976776)
0xa5b: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xa5c: IF (Stack[-1] == 0) GOTO 0xa61; Pop(1)

0xa5d: PushEmpty(object)
0xa5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa5f: Call2 0xe78

0xa60: Pop(1)
0xa61: Return(); Pop(4)

0xa62: PushEmpty()
0xa63: Call2 0xa2b

0xa64: Pop(0)
0xa65: PushEmpty()
0xa66: Call2 0x129e

0xa67: Pop(0)
0xa68: Return(); Pop(0)

0xa69: PushEmpty()
0xa6a: PushEmpty(bool, object)
0xa6b: Stack[-3] = Stack[-1]
0xa6c: Call2 0x11b5

0xa6d: Pop(1)
0xa6e: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa6f: PushEmpty()
0xa70: Call2 0xa2b

0xa71: Pop(0)
0xa72: PushEmpty(object)
0xa73: Stack[-2] = Stack[-1]
0xa74: Call2 0x11cc

0xa75: Pop(1)
0xa76: Return(); Pop(0)

0xa77: PushEmpty()
0xa78: @ Face(Stack[-1])
0xa79: Pop(0)
0xa7a: Push("all") // @poff=138
0xa7b: Push("attack_on") // @poff=326
0xa7c: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7d: Pop(2)
0xa7e: @ WaitForAnimEnd()
0xa7f: Pop(0)
0xa80: Push("all") // @poff=138
0xa81: Push("attack_stay") // @poff=346
0xa82: @ PlayAnimation(Stack[-2], Stack[-1])
0xa83: Pop(2)
0xa84: @ WaitForAnimEnd()
0xa85: Pop(0)
0xa86: Push("all") // @poff=138
0xa87: Push("attack_off") // @poff=370
0xa88: @ PlayAnimation(Stack[-2], Stack[-1])
0xa89: Pop(2)
0xa8a: @ WaitForAnimEnd()
0xa8b: Pop(0)
0xa8c: @ StopAsync()
0xa8d: Pop(0)
0xa8e: PushEmpty(object)
0xa8f: Stack[-2] = Stack[-1]
0xa90: Call2 0xab8

0xa91: Pop(1)
0xa92: Return(); Pop(0)

0xa93: PushEmpty()
0xa94: Call2 0xb35

0xa95: Pop(0)
0xa96: PushEmpty()
0xa97: Call2 0x129e

0xa98: Pop(0)
0xa99: Return(); Pop(0)

0xa9a: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xa9b: @ GetPosition(Stack[-6])
0xa9c: Pop(0)
0xa9d: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0xa9e: Pop(0)
0xa9f: @ GetDirection(Stack[-4])
0xaa0: Pop(0)
0xaa1: PushEmpty(cvector, cvector)
0xaa2: PushEmpty(cvector, cvector)
0xaa3: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xaa4: Call2 0xf2b

0xaa5: Pop(1)
0xaa6: Push((float)0.75)
0xaa7: Pop(1); Push(Stack[-8] * Stack[-1]);
0xaa8: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xaa9: Call2 0xf2b

0xaaa: Stack[-2] = Stack[-5]
0xaab: Pop(2)
0xaac: Push((int) 32)
0xaad: Push((float)7000.0)
0xaae: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xaaf: Pop(2)
0xab0: Push((int) 100)
0xab1: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xab2: Push((int) 0)
0xab3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xab4: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xab5: Stack[-1] = (int) 0
0xab6: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xab7: Return(); Pop(12)

0xab8: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xab9: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xaba: PushEmpty(cvector, float)
0xabb: Stack[-1] = (float) 1.7453293800354004
0xabc: Call2 0xa9a

0xabd: Stack[-2] = Stack[-7]
0xabe: Pop(2)
0xabf: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xac0: Push((float)2500.0)
0xac1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xac2: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xac3: PushEmpty(cvector, float)
0xac4: Stack[-1] = (float) 2.6179938316345215
0xac5: Call2 0xa9a

0xac6: Stack[-2] = Stack[-7]
0xac7: Pop(2)
0xac8: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xac9: Push((float)2500.0)
0xaca: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xacb: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xacc: Push("Can't retreat, distance: ") // @poff=392
0xacd: Pop(0); Push(Sqrt(Stack[-5]))
0xace: Pop(2); Push(Stack[-2] + Stack[-1]);
0xacf: @ Trace(Stack[-1])
0xad0: Pop(1)
0xad1: Push((float)0.5)
0xad2: @ Sleep(Stack[-1])
0xad3: Pop(1)
0xad4: Return(); Pop(10)

0xad5: Push(CvectorIndex(Stack[-5], 0))
0xad6: Push(CvectorIndex(Stack[-6], 2))
0xad7: @ Rotate(Stack[-2], Stack[-1])
0xad8: Pop(2)
0xad9: PushEmpty(cvector)
0xada: Call2 0xd94

0xadb: Pop(0)
0xadc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xadd: Push((int) 120)
0xade: Push((float)0.5)
0xadf: @ SetTimer(Stack[-2], Stack[-1])
0xae0: Pop(2)
0xae1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xae2: Push((int) 1)
0xae3: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0xae4: Pop(1)
0xae5: Push(Stack[-3])
0xae6: IF (Stack[-1] == 0) GOTO 0xafe; Pop(1)

0xae7: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xae8: IF (Stack[-1] == 0) GOTO 0xaeb; Pop(1)

0xae9: GOTO 0xb00

0xaea: GOTO 0xafe

0xaeb: PushEmpty(cvector, float)
0xaec: Stack[-1] = (float) 2.6179938316345215
0xaed: Call2 0xa9a

0xaee: Stack[-2] = Stack[-4]
0xaef: Pop(2)
0xaf0: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xaf1: Push((float)2500.0)
0xaf2: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xaf3: IF (Stack[-1] == 0) GOTO 0xafd; Pop(1)

0xaf4: PushEmpty(cvector)
0xaf5: Call2 0xd94

0xaf6: Pop(0)
0xaf7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xaf8: Push((int) 120)
0xaf9: Push((float)0.5)
0xafa: @ SetTimer(Stack[-2], Stack[-1])
0xafb: Pop(2)
0xafc: GOTO 0xafe

0xafd: GOTO 0xb00

0xafe: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xaff: IF (Stack[-1] == 1) GOTO 0xae2; Pop(1)

0xb00: Return(); Pop(10)

0xb01: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xb02: Push((int) 120)
0xb03: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xb04: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xb05: Return(); Pop(8)

0xb06: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xb07: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb08: @ Stop()
0xb09: Pop(0)
0xb0a: Push((int) 1)
0xb0b: @ KillTimer(Stack[-1])
0xb0c: Pop(1)
0xb0d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb0e: GOTO 0xb34

0xb0f: @ GetDirection(Stack[-4])
0xb10: Pop(0)
0xb11: Push((float)7000.0)
0xb12: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xb13: Pop(1)
0xb14: PushEmpty(cvector, float)
0xb15: Stack[-1] = (float) 1.7453293800354004
0xb16: Call2 0xa9a

0xb17: Stack[-2] = Stack[-4]
0xb18: Pop(2)
0xb19: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xb1a: PushEmpty(bool)
0xb1b: Stack[-1] = (bool) 0
0xb1c: Push((float)2500.0)
0xb1d: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xb1e: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb1f: PushEmpty(bool)
0xb20: Stack[-1] = (bool) 1
0xb21: Pop(0); Push(Stack[-5] * Stack[-5]);
0xb22: Push((float)2.25)
0xb23: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb24: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xb25: IF (Stack[-1] == 1) GOTO 0xb2b; Pop(1)

0xb26: PushEmpty(bool)
0xb27: Call2 0xb45

0xb28: Pop(0)
0xb29: IF (Stack[-1] == 1) GOTO 0xb2b; Pop(1)

0xb2a: Stack[-1] = (bool) 0
0xb2b: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb2c: Stack[-1] = (bool) 1
0xb2d: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0xb2e: @ Stop()
0xb2f: Pop(0)
0xb30: PushEmpty(cvector)
0xb31: Call2 0xd94

0xb32: Pop(0)
0xb33: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xb34: Return(); Pop(8)

0xb35: @ Stop()
0xb36: Pop(0)
0xb37: Push((int) 120)
0xb38: @ KillTimer(Stack[-1])
0xb39: Pop(1)
0xb3a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb3b: Return(); Pop(0)

0xb3c: PushEmpty()
0xb3d: PushEmpty()
0xb3e: Call2 0xb35

0xb3f: Pop(0)
0xb40: PushEmpty(object)
0xb41: Stack[-2] = Stack[-1]
0xb42: Call2 0x1164

0xb43: Pop(1)
0xb44: Return(); Pop(0)

0xb45: PushEmpty(cvector, cvector, cvector, cvector)
0xb46: @ GetDirection(Stack[-2])
0xb47: Pop(0)
0xb48: PushEmpty(cvector, object)
0xb49: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb4a: Call2 0xd99

0xb4b: Stack[-2] = Stack[-3]
0xb4c: Pop(2)
0xb4d: PushEmpty(float, cvector, cvector)
0xb4e: Stack[-5] = Stack[-2]
0xb4f: Stack[-4] = Stack[-1]
0xb50: Call2 0xf35

0xb51: Pop(2)
0xb52: Push((float)-0.3420201241970062)
0xb53: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xb54: Return(); Pop(4)

0xb55: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xb56: @ GetPosition(Stack[-6])
0xb57: Pop(0)
0xb58: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0xb59: Pop(0)
0xb5a: @ GetDirection(Stack[-4])
0xb5b: Pop(0)
0xb5c: PushEmpty(cvector, cvector)
0xb5d: PushEmpty(cvector, cvector)
0xb5e: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xb5f: Call2 0xf2b

0xb60: Pop(1)
0xb61: Push((float)0.75)
0xb62: Pop(1); Push(Stack[-8] * Stack[-1]);
0xb63: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xb64: Call2 0xf2b

0xb65: Stack[-2] = Stack[-5]
0xb66: Pop(2)
0xb67: Push((int) 32)
0xb68: Push((float)7000.0)
0xb69: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xb6a: Pop(2)
0xb6b: Push((int) 100)
0xb6c: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xb6d: Push((int) 0)
0xb6e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb6f: IF (Stack[-1] == 0) GOTO 0xb71; Pop(1)

0xb70: Stack[-1] = (int) 0
0xb71: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xb72: Return(); Pop(12)

0xb73: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xb74: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xb75: PushEmpty(cvector, float)
0xb76: Stack[-1] = (float) 1.7453293800354004
0xb77: Call2 0xb55

0xb78: Stack[-2] = Stack[-7]
0xb79: Pop(2)
0xb7a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xb7b: Push((float)2500.0)
0xb7c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xb7d: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb7e: PushEmpty(cvector, float)
0xb7f: Stack[-1] = (float) 2.6179938316345215
0xb80: Call2 0xb55

0xb81: Stack[-2] = Stack[-7]
0xb82: Pop(2)
0xb83: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xb84: Push((float)2500.0)
0xb85: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xb86: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb87: Push("Can't retreat, distance: ") // @poff=392
0xb88: Pop(0); Push(Sqrt(Stack[-5]))
0xb89: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb8a: @ Trace(Stack[-1])
0xb8b: Pop(1)
0xb8c: Push((float)0.5)
0xb8d: @ Sleep(Stack[-1])
0xb8e: Pop(1)
0xb8f: Return(); Pop(10)

0xb90: Push(CvectorIndex(Stack[-5], 0))
0xb91: Push(CvectorIndex(Stack[-6], 2))
0xb92: @ Rotate(Stack[-2], Stack[-1])
0xb93: Pop(2)
0xb94: PushEmpty(cvector)
0xb95: Call2 0xd94

0xb96: Pop(0)
0xb97: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xb98: Push((int) 120)
0xb99: Push((float)0.5)
0xb9a: @ SetTimer(Stack[-2], Stack[-1])
0xb9b: Pop(2)
0xb9c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb9d: Push((int) 1)
0xb9e: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0xb9f: Pop(1)
0xba0: Push(Stack[-3])
0xba1: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xba2: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xba3: IF (Stack[-1] == 0) GOTO 0xba6; Pop(1)

0xba4: GOTO 0xbbb

0xba5: GOTO 0xbb9

0xba6: PushEmpty(cvector, float)
0xba7: Stack[-1] = (float) 2.6179938316345215
0xba8: Call2 0xb55

0xba9: Stack[-2] = Stack[-4]
0xbaa: Pop(2)
0xbab: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xbac: Push((float)2500.0)
0xbad: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xbae: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xbaf: PushEmpty(cvector)
0xbb0: Call2 0xd94

0xbb1: Pop(0)
0xbb2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xbb3: Push((int) 120)
0xbb4: Push((float)0.5)
0xbb5: @ SetTimer(Stack[-2], Stack[-1])
0xbb6: Pop(2)
0xbb7: GOTO 0xbb9

0xbb8: GOTO 0xbbb

0xbb9: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xbba: IF (Stack[-1] == 1) GOTO 0xb9d; Pop(1)

0xbbb: Return(); Pop(10)

0xbbc: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xbbd: Push((int) 120)
0xbbe: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xbbf: IF (Stack[-1] == 0) GOTO 0xbc1; Pop(1)

0xbc0: Return(); Pop(8)

0xbc1: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xbc2: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbc3: @ Stop()
0xbc4: Pop(0)
0xbc5: Push((int) 1)
0xbc6: @ KillTimer(Stack[-1])
0xbc7: Pop(1)
0xbc8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xbc9: GOTO 0xbef

0xbca: @ GetDirection(Stack[-4])
0xbcb: Pop(0)
0xbcc: Push((float)7000.0)
0xbcd: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xbce: Pop(1)
0xbcf: PushEmpty(cvector, float)
0xbd0: Stack[-1] = (float) 1.7453293800354004
0xbd1: Call2 0xb55

0xbd2: Stack[-2] = Stack[-4]
0xbd3: Pop(2)
0xbd4: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xbd5: PushEmpty(bool)
0xbd6: Stack[-1] = (bool) 0
0xbd7: Push((float)2500.0)
0xbd8: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xbd9: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbda: PushEmpty(bool)
0xbdb: Stack[-1] = (bool) 1
0xbdc: Pop(0); Push(Stack[-5] * Stack[-5]);
0xbdd: Push((float)2.25)
0xbde: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbdf: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xbe0: IF (Stack[-1] == 1) GOTO 0xbe6; Pop(1)

0xbe1: PushEmpty(bool)
0xbe2: Call2 0xc00

0xbe3: Pop(0)
0xbe4: IF (Stack[-1] == 1) GOTO 0xbe6; Pop(1)

0xbe5: Stack[-1] = (bool) 0
0xbe6: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbe7: Stack[-1] = (bool) 1
0xbe8: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbe9: @ Stop()
0xbea: Pop(0)
0xbeb: PushEmpty(cvector)
0xbec: Call2 0xd94

0xbed: Pop(0)
0xbee: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xbef: Return(); Pop(8)

0xbf0: @ Stop()
0xbf1: Pop(0)
0xbf2: Push((int) 120)
0xbf3: @ KillTimer(Stack[-1])
0xbf4: Pop(1)
0xbf5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xbf6: Return(); Pop(0)

0xbf7: PushEmpty()
0xbf8: PushEmpty()
0xbf9: Call2 0xbf0

0xbfa: Pop(0)
0xbfb: PushEmpty(object)
0xbfc: Stack[-2] = Stack[-1]
0xbfd: Call2 0x1164

0xbfe: Pop(1)
0xbff: Return(); Pop(0)

0xc00: PushEmpty(cvector, cvector, cvector, cvector)
0xc01: @ GetDirection(Stack[-2])
0xc02: Pop(0)
0xc03: PushEmpty(cvector, object)
0xc04: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc05: Call2 0xd99

0xc06: Stack[-2] = Stack[-3]
0xc07: Pop(2)
0xc08: PushEmpty(float, cvector, cvector)
0xc09: Stack[-5] = Stack[-2]
0xc0a: Stack[-4] = Stack[-1]
0xc0b: Call2 0xf35

0xc0c: Pop(2)
0xc0d: Push((float)-0.3420201241970062)
0xc0e: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xc0f: Return(); Pop(4)

0xc10: PushEmpty()
0xc11: Call2 0xcb2

0xc12: Pop(0)
0xc13: PushEmpty()
0xc14: Call2 0x129e

0xc15: Pop(0)
0xc16: Return(); Pop(0)

0xc17: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xc18: @ GetPosition(Stack[-6])
0xc19: Pop(0)
0xc1a: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0xc1b: Pop(0)
0xc1c: @ GetDirection(Stack[-4])
0xc1d: Pop(0)
0xc1e: PushEmpty(cvector, cvector)
0xc1f: PushEmpty(cvector, cvector)
0xc20: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xc21: Call2 0xf2b

0xc22: Pop(1)
0xc23: Push((float)0.75)
0xc24: Pop(1); Push(Stack[-8] * Stack[-1]);
0xc25: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc26: Call2 0xf2b

0xc27: Stack[-2] = Stack[-5]
0xc28: Pop(2)
0xc29: Push((int) 32)
0xc2a: Push((float)7000.0)
0xc2b: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xc2c: Pop(2)
0xc2d: Push((int) 100)
0xc2e: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xc2f: Push((int) 0)
0xc30: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc31: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc32: Stack[-1] = (int) 0
0xc33: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xc34: Return(); Pop(12)

0xc35: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xc36: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xc37: PushEmpty(cvector, float)
0xc38: Stack[-1] = (float) 1.7453293800354004
0xc39: Call2 0xc17

0xc3a: Stack[-2] = Stack[-7]
0xc3b: Pop(2)
0xc3c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xc3d: Push((float)2500.0)
0xc3e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xc3f: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc40: PushEmpty(cvector, float)
0xc41: Stack[-1] = (float) 2.6179938316345215
0xc42: Call2 0xc17

0xc43: Stack[-2] = Stack[-7]
0xc44: Pop(2)
0xc45: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xc46: Push((float)2500.0)
0xc47: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xc48: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc49: Push("Can't retreat, distance: ") // @poff=392
0xc4a: Pop(0); Push(Sqrt(Stack[-5]))
0xc4b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc4c: @ Trace(Stack[-1])
0xc4d: Pop(1)
0xc4e: Push((float)0.5)
0xc4f: @ Sleep(Stack[-1])
0xc50: Pop(1)
0xc51: Return(); Pop(10)

0xc52: Push(CvectorIndex(Stack[-5], 0))
0xc53: Push(CvectorIndex(Stack[-6], 2))
0xc54: @ Rotate(Stack[-2], Stack[-1])
0xc55: Pop(2)
0xc56: PushEmpty(cvector)
0xc57: Call2 0xd94

0xc58: Pop(0)
0xc59: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xc5a: Push((int) 120)
0xc5b: Push((float)0.5)
0xc5c: @ SetTimer(Stack[-2], Stack[-1])
0xc5d: Pop(2)
0xc5e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xc5f: Push((int) 1)
0xc60: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0xc61: Pop(1)
0xc62: Push(Stack[-3])
0xc63: IF (Stack[-1] == 0) GOTO 0xc7b; Pop(1)

0xc64: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc65: IF (Stack[-1] == 0) GOTO 0xc68; Pop(1)

0xc66: GOTO 0xc7d

0xc67: GOTO 0xc7b

0xc68: PushEmpty(cvector, float)
0xc69: Stack[-1] = (float) 2.6179938316345215
0xc6a: Call2 0xc17

0xc6b: Stack[-2] = Stack[-4]
0xc6c: Pop(2)
0xc6d: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xc6e: Push((float)2500.0)
0xc6f: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc70: IF (Stack[-1] == 0) GOTO 0xc7a; Pop(1)

0xc71: PushEmpty(cvector)
0xc72: Call2 0xd94

0xc73: Pop(0)
0xc74: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xc75: Push((int) 120)
0xc76: Push((float)0.5)
0xc77: @ SetTimer(Stack[-2], Stack[-1])
0xc78: Pop(2)
0xc79: GOTO 0xc7b

0xc7a: GOTO 0xc7d

0xc7b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xc7c: IF (Stack[-1] == 1) GOTO 0xc5f; Pop(1)

0xc7d: Return(); Pop(10)

0xc7e: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xc7f: Push((int) 120)
0xc80: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xc81: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc82: Return(); Pop(8)

0xc83: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc84: IF (Stack[-1] == 0) GOTO 0xc8c; Pop(1)

0xc85: @ Stop()
0xc86: Pop(0)
0xc87: Push((int) 1)
0xc88: @ KillTimer(Stack[-1])
0xc89: Pop(1)
0xc8a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc8b: GOTO 0xcb1

0xc8c: @ GetDirection(Stack[-4])
0xc8d: Pop(0)
0xc8e: Push((float)7000.0)
0xc8f: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xc90: Pop(1)
0xc91: PushEmpty(cvector, float)
0xc92: Stack[-1] = (float) 1.7453293800354004
0xc93: Call2 0xc17

0xc94: Stack[-2] = Stack[-4]
0xc95: Pop(2)
0xc96: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xc97: PushEmpty(bool)
0xc98: Stack[-1] = (bool) 0
0xc99: Push((float)2500.0)
0xc9a: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xc9b: IF (Stack[-1] == 0) GOTO 0xcaa; Pop(1)

0xc9c: PushEmpty(bool)
0xc9d: Stack[-1] = (bool) 1
0xc9e: Pop(0); Push(Stack[-5] * Stack[-5]);
0xc9f: Push((float)2.25)
0xca0: Pop(2); Push(Stack[-2] * Stack[-1]);
0xca1: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xca2: IF (Stack[-1] == 1) GOTO 0xca8; Pop(1)

0xca3: PushEmpty(bool)
0xca4: Call2 0xcc2

0xca5: Pop(0)
0xca6: IF (Stack[-1] == 1) GOTO 0xca8; Pop(1)

0xca7: Stack[-1] = (bool) 0
0xca8: IF (Stack[-1] == 0) GOTO 0xcaa; Pop(1)

0xca9: Stack[-1] = (bool) 1
0xcaa: IF (Stack[-1] == 0) GOTO 0xcb1; Pop(1)

0xcab: @ Stop()
0xcac: Pop(0)
0xcad: PushEmpty(cvector)
0xcae: Call2 0xd94

0xcaf: Pop(0)
0xcb0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xcb1: Return(); Pop(8)

0xcb2: @ Stop()
0xcb3: Pop(0)
0xcb4: Push((int) 120)
0xcb5: @ KillTimer(Stack[-1])
0xcb6: Pop(1)
0xcb7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xcb8: Return(); Pop(0)

0xcb9: PushEmpty()
0xcba: PushEmpty()
0xcbb: Call2 0xcb2

0xcbc: Pop(0)
0xcbd: PushEmpty(object)
0xcbe: Stack[-2] = Stack[-1]
0xcbf: Call2 0x1164

0xcc0: Pop(1)
0xcc1: Return(); Pop(0)

0xcc2: PushEmpty(cvector, cvector, cvector, cvector)
0xcc3: @ GetDirection(Stack[-2])
0xcc4: Pop(0)
0xcc5: PushEmpty(cvector, object)
0xcc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc7: Call2 0xd99

0xcc8: Stack[-2] = Stack[-3]
0xcc9: Pop(2)
0xcca: PushEmpty(float, cvector, cvector)
0xccb: Stack[-5] = Stack[-2]
0xccc: Stack[-4] = Stack[-1]
0xccd: Call2 0xf35

0xcce: Pop(2)
0xccf: Push((float)-0.3420201241970062)
0xcd0: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xcd1: Return(); Pop(4)

0xcd2: PushEmpty()
0xcd3: Call2 0xd74

0xcd4: Pop(0)
0xcd5: PushEmpty()
0xcd6: Call2 0x129e

0xcd7: Pop(0)
0xcd8: Return(); Pop(0)

0xcd9: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xcda: @ GetPosition(Stack[-6])
0xcdb: Pop(0)
0xcdc: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0xcdd: Pop(0)
0xcde: @ GetDirection(Stack[-4])
0xcdf: Pop(0)
0xce0: PushEmpty(cvector, cvector)
0xce1: PushEmpty(cvector, cvector)
0xce2: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xce3: Call2 0xf2b

0xce4: Pop(1)
0xce5: Push((float)0.75)
0xce6: Pop(1); Push(Stack[-8] * Stack[-1]);
0xce7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xce8: Call2 0xf2b

0xce9: Stack[-2] = Stack[-5]
0xcea: Pop(2)
0xceb: Push((int) 32)
0xcec: Push((float)7000.0)
0xced: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xcee: Pop(2)
0xcef: Push((int) 100)
0xcf0: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xcf1: Push((int) 0)
0xcf2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xcf3: IF (Stack[-1] == 0) GOTO 0xcf5; Pop(1)

0xcf4: Stack[-1] = (int) 0
0xcf5: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xcf6: Return(); Pop(12)

0xcf7: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xcf8: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xcf9: PushEmpty(cvector, float)
0xcfa: Stack[-1] = (float) 1.7453293800354004
0xcfb: Call2 0xcd9

0xcfc: Stack[-2] = Stack[-7]
0xcfd: Pop(2)
0xcfe: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xcff: Push((float)2500.0)
0xd00: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd01: IF (Stack[-1] == 0) GOTO 0xd14; Pop(1)

0xd02: PushEmpty(cvector, float)
0xd03: Stack[-1] = (float) 2.6179938316345215
0xd04: Call2 0xcd9

0xd05: Stack[-2] = Stack[-7]
0xd06: Pop(2)
0xd07: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd08: Push((float)2500.0)
0xd09: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd0a: IF (Stack[-1] == 0) GOTO 0xd14; Pop(1)

0xd0b: Push("Can't retreat, distance: ") // @poff=392
0xd0c: Pop(0); Push(Sqrt(Stack[-5]))
0xd0d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd0e: @ Trace(Stack[-1])
0xd0f: Pop(1)
0xd10: Push((float)0.5)
0xd11: @ Sleep(Stack[-1])
0xd12: Pop(1)
0xd13: Return(); Pop(10)

0xd14: Push(CvectorIndex(Stack[-5], 0))
0xd15: Push(CvectorIndex(Stack[-6], 2))
0xd16: @ Rotate(Stack[-2], Stack[-1])
0xd17: Pop(2)
0xd18: PushEmpty(cvector)
0xd19: Call2 0xd94

0xd1a: Pop(0)
0xd1b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xd1c: Push((int) 120)
0xd1d: Push((float)0.5)
0xd1e: @ SetTimer(Stack[-2], Stack[-1])
0xd1f: Pop(2)
0xd20: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd21: Push((int) 1)
0xd22: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0xd23: Pop(1)
0xd24: Push(Stack[-3])
0xd25: IF (Stack[-1] == 0) GOTO 0xd3d; Pop(1)

0xd26: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xd27: IF (Stack[-1] == 0) GOTO 0xd2a; Pop(1)

0xd28: GOTO 0xd3f

0xd29: GOTO 0xd3d

0xd2a: PushEmpty(cvector, float)
0xd2b: Stack[-1] = (float) 2.6179938316345215
0xd2c: Call2 0xcd9

0xd2d: Stack[-2] = Stack[-4]
0xd2e: Pop(2)
0xd2f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd30: Push((float)2500.0)
0xd31: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd32: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd33: PushEmpty(cvector)
0xd34: Call2 0xd94

0xd35: Pop(0)
0xd36: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xd37: Push((int) 120)
0xd38: Push((float)0.5)
0xd39: @ SetTimer(Stack[-2], Stack[-1])
0xd3a: Pop(2)
0xd3b: GOTO 0xd3d

0xd3c: GOTO 0xd3f

0xd3d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xd3e: IF (Stack[-1] == 1) GOTO 0xd21; Pop(1)

0xd3f: Return(); Pop(10)

0xd40: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xd41: Push((int) 120)
0xd42: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xd43: IF (Stack[-1] == 0) GOTO 0xd45; Pop(1)

0xd44: Return(); Pop(8)

0xd45: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xd46: IF (Stack[-1] == 0) GOTO 0xd4e; Pop(1)

0xd47: @ Stop()
0xd48: Pop(0)
0xd49: Push((int) 1)
0xd4a: @ KillTimer(Stack[-1])
0xd4b: Pop(1)
0xd4c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd4d: GOTO 0xd73

0xd4e: @ GetDirection(Stack[-4])
0xd4f: Pop(0)
0xd50: Push((float)7000.0)
0xd51: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xd52: Pop(1)
0xd53: PushEmpty(cvector, float)
0xd54: Stack[-1] = (float) 1.7453293800354004
0xd55: Call2 0xcd9

0xd56: Stack[-2] = Stack[-4]
0xd57: Pop(2)
0xd58: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd59: PushEmpty(bool)
0xd5a: Stack[-1] = (bool) 0
0xd5b: Push((float)2500.0)
0xd5c: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xd5d: IF (Stack[-1] == 0) GOTO 0xd6c; Pop(1)

0xd5e: PushEmpty(bool)
0xd5f: Stack[-1] = (bool) 1
0xd60: Pop(0); Push(Stack[-5] * Stack[-5]);
0xd61: Push((float)2.25)
0xd62: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd63: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xd64: IF (Stack[-1] == 1) GOTO 0xd6a; Pop(1)

0xd65: PushEmpty(bool)
0xd66: Call2 0xd84

0xd67: Pop(0)
0xd68: IF (Stack[-1] == 1) GOTO 0xd6a; Pop(1)

0xd69: Stack[-1] = (bool) 0
0xd6a: IF (Stack[-1] == 0) GOTO 0xd6c; Pop(1)

0xd6b: Stack[-1] = (bool) 1
0xd6c: IF (Stack[-1] == 0) GOTO 0xd73; Pop(1)

0xd6d: @ Stop()
0xd6e: Pop(0)
0xd6f: PushEmpty(cvector)
0xd70: Call2 0xd94

0xd71: Pop(0)
0xd72: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xd73: Return(); Pop(8)

0xd74: @ Stop()
0xd75: Pop(0)
0xd76: Push((int) 120)
0xd77: @ KillTimer(Stack[-1])
0xd78: Pop(1)
0xd79: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd7a: Return(); Pop(0)

0xd7b: PushEmpty()
0xd7c: PushEmpty()
0xd7d: Call2 0xd74

0xd7e: Pop(0)
0xd7f: PushEmpty(object)
0xd80: Stack[-2] = Stack[-1]
0xd81: Call2 0x1164

0xd82: Pop(1)
0xd83: Return(); Pop(0)

0xd84: PushEmpty(cvector, cvector, cvector, cvector)
0xd85: @ GetDirection(Stack[-2])
0xd86: Pop(0)
0xd87: PushEmpty(cvector, object)
0xd88: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd89: Call2 0xd99

0xd8a: Stack[-2] = Stack[-3]
0xd8b: Pop(2)
0xd8c: PushEmpty(float, cvector, cvector)
0xd8d: Stack[-5] = Stack[-2]
0xd8e: Stack[-4] = Stack[-1]
0xd8f: Call2 0xf35

0xd90: Pop(2)
0xd91: Push((float)-0.3420201241970062)
0xd92: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xd93: Return(); Pop(4)

0xd94: PushEmpty(cvector, cvector)
0xd95: @ GetPosition(Stack[-1])
0xd96: Pop(0)
0xd97: Stack[-1] = Stack[-3]
0xd98: Return(); Pop(2)

0xd99: PushEmpty(cvector, cvector, cvector, cvector)
0xd9a: @ GetPosition(Stack[-2])
0xd9b: Pop(0)
0xd9c: @@ GetPosition(Stack[-1]); Obj=5 // @poff=166
0xd9d: Pop(0)
0xd9e: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xd9f: Return(); Pop(4)

0xda0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xda1: @ GetPosition(Stack[-3])
0xda2: Pop(0)
0xda3: @@ GetPosition(Stack[-2]); Obj=7 // @poff=166
0xda4: Pop(0)
0xda5: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xda6: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xda7: Return(); Pop(6)

0xda8: PushEmpty(bool, bool)
0xda9: @ IsPlayerActor(Stack[-3], Stack[-1])
0xdaa: Pop(0)
0xdab: Stack[-1] = Stack[-4]
0xdac: Return(); Pop(2)

0xdad: PushEmpty(bool, bool)
0xdae: Push("HasProperty") // @poff=444
0xdaf: Push((int) 2)
0xdb0: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xdb1: Pop(1); Push((bool) Stack[-1] == 0)
0xdb2: IF (Stack[-1] == 0) GOTO 0xdb5; Pop(1)

0xdb3: Stack[-5] = (bool) 0
0xdb4: Return(); Pop(2)

0xdb5: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=468
0xdb6: Pop(0)
0xdb7: Stack[-1] = Stack[-5]
0xdb8: Return(); Pop(2)

0xdb9: PushEmpty(bool, bool)
0xdba: @@ IsDead(Stack[-1]); Obj=3 // @poff=480
0xdbb: Pop(0)
0xdbc: Stack[-1] = Stack[-4]
0xdbd: Return(); Pop(2)

0xdbe: PushEmpty(object, object, object, object)
0xdbf: Pop(0); PushNull((bool) Stack[-5] == 0)
0xdc0: IF (Stack[-1] == 0) GOTO 0xdc3; Pop(1)

0xdc1: Stack[-6] = (bool) 0
0xdc2: Return(); Pop(4)

0xdc3: PushEmpty(bool)
0xdc4: Stack[-1] = (bool) 0
0xdc5: Push("IsDead") // @poff=487
0xdc6: Push((int) 1)
0xdc7: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xdc8: IF (Stack[-1] == 0) GOTO 0xdcf; Pop(1)

0xdc9: PushEmpty(bool, object)
0xdca: Stack[-8] = Stack[-1]
0xdcb: Call2 0xdb9

0xdcc: Pop(1)
0xdcd: IF (Stack[-1] == 0) GOTO 0xdcf; Pop(1)

0xdce: Stack[-1] = (bool) 1
0xdcf: IF (Stack[-1] == 0) GOTO 0xdd2; Pop(1)

0xdd0: Stack[-6] = (bool) 0
0xdd1: Return(); Pop(4)

0xdd2: @ GetScene(Stack[-2])
0xdd3: Pop(0)
0xdd4: Pop(0); PushNull((bool) Stack[-2] == 0)
0xdd5: IF (Stack[-1] == 0) GOTO 0xdd8; Pop(1)

0xdd6: Stack[-6] = (bool) 0
0xdd7: Return(); Pop(4)

0xdd8: @@ GetScene(Stack[-1]); Obj=5 // @poff=501
0xdd9: Pop(0)
0xdda: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xddb: IF (Stack[-1] == 0) GOTO 0xdde; Pop(1)

0xddc: Stack[-6] = (bool) 0
0xddd: Return(); Pop(4)

0xdde: Stack[-6] = (bool) 1
0xddf: Return(); Pop(4)

0xde0: Stack[-1] = 0
0xde1: Stack[-2] = 0
0xde2: PushEmpty(int, int)
0xde3: PushEmpty(bool, object)
0xde4: Stack[-5] = Stack[-1]
0xde5: Call2 0xdbe

0xde6: Pop(1)
0xde7: Pop(1); Push((bool) Stack[-1] == 0)
0xde8: IF (Stack[-1] == 0) GOTO 0xdeb; Pop(1)

0xde9: Stack[-4] = (bool) 0
0xdea: Return(); Pop(2)

0xdeb: PushEmpty(bool, object, string)
0xdec: Stack[-6] = Stack[-2]
0xded: Stack[-1] = "noaccess" // @poff=510
0xdee: Call2 0xdad

0xdef: Pop(2)
0xdf0: Pop(1); Push((bool) Stack[-1] == 0)
0xdf1: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xdf2: Stack[-4] = (bool) 1
0xdf3: Return(); Pop(2)

0xdf4: Push("noaccess") // @poff=510
0xdf5: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=528
0xdf6: Pop(1)
0xdf7: Push((int) 0)
0xdf8: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xdf9: Return(); Pop(2)

0xdfa: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xdfb: Pop(0); PushNull((bool) Stack[-15] == 0)
0xdfc: IF (Stack[-1] == 0) GOTO 0xdfe; Pop(1)

0xdfd: Return(); Pop(14)

0xdfe: @ IsDead(Stack[-7])
0xdff: Pop(0)
0xe00: Push(Stack[-7])
0xe01: IF (Stack[-1] == 0) GOTO 0xe03; Pop(1)

0xe02: Return(); Pop(14)

0xe03: @ GetSecondaryAnimationType(Stack[-6])
0xe04: Pop(0)
0xe05: Push((int) 0)
0xe06: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xe07: IF (Stack[-1] == 0) GOTO 0xe09; Pop(1)

0xe08: Return(); Pop(14)

0xe09: @@ GetPosition(Stack[-5]); Obj=15 // @poff=166
0xe0a: Pop(0)
0xe0b: @ GetPosition(Stack[-4])
0xe0c: Pop(0)
0xe0d: @ GetDirection(Stack[-3])
0xe0e: Pop(0)
0xe0f: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xe10: Push(CvectorIndex(Stack[-2], 0))
0xe11: Push(CvectorIndex(Stack[-4], 0))
0xe12: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe13: Push(CvectorIndex(Stack[-3], 2))
0xe14: Push(CvectorIndex(Stack[-5], 2))
0xe15: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe16: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe17: Push((int) 0)
0xe18: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe19: IF (Stack[-1] == 0) GOTO 0xe1c; Pop(1)

0xe1a: Stack[-1] = "fhit" // @poff=540
0xe1b: GOTO 0xe1d

0xe1c: Stack[-1] = "bhit" // @poff=550
0xe1d: Push("hit_react") // @poff=560
0xe1e: Push("1") // @poff=580
0xe1f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe20: Push("2") // @poff=584
0xe21: Pop(1); Push(Stack[-4] + Stack[-1]);
0xe22: Push((int) -10)
0xe23: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe24: Pop(4)
0xe25: Return(); Pop(14)

0xe26: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xe27: PushEmpty(bool)
0xe28: Stack[-1] = (bool) 0
0xe29: PushEmpty(bool)
0xe2a: Stack[-1] = (bool) 0
0xe2b: Push(Stack[-23])
0xe2c: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe2d: Push((int) 4)
0xe2e: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xe2f: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe30: Stack[-1] = (bool) 1
0xe31: IF (Stack[-1] == 0) GOTO 0xe36; Pop(1)

0xe32: Push((int) 5)
0xe33: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xe34: IF (Stack[-1] == 0) GOTO 0xe36; Pop(1)

0xe35: Stack[-1] = (bool) 1
0xe36: IF (Stack[-1] == 0) GOTO 0xe65; Pop(1)

0xe37: PushEmpty(cvector, cvector)
0xe38: PushEmpty(cvector, object)
0xe39: Stack[-25] = Stack[-1]
0xe3a: Call2 0xd99

0xe3b: Stack[-2] = Stack[-3]
0xe3c: Pop(2)
0xe3d: Call2 0xf2b

0xe3e: Stack[-2] = Stack[-11]
0xe3f: Pop(2)
0xe40: @ CreateVectorVector(Stack[-8])
0xe41: Pop(0)
0xe42: Stack[-7] = (int) 1
0xe43: Push("hit") // @poff=542
0xe44: Pop(1); Push(Stack[-1] + Stack[-8]);
0xe45: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xe46: Pop(1)
0xe47: Pop(0); Push((bool) Stack[-6] == 0)
0xe48: IF (Stack[-1] == 0) GOTO 0xe4a; Pop(1)

0xe49: GOTO 0xe53

0xe4a: Pop(0); Push(Stack[-4] | Stack[-9]);
0xe4b: Push((float)0.7071067690849304)
0xe4c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe4d: IF (Stack[-1] == 0) GOTO 0xe50; Pop(1)

0xe4e: @@ add(Stack[-5]); Obj=8 // @poff=588
0xe4f: Pop(0)
0xe50: Push((int) 1)
0xe51: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xe52: GOTO 0xe43

0xe53: @@ size(Stack[-3]); Obj=8 // @poff=592
0xe54: Pop(0)
0xe55: Push(Stack[-3])
0xe56: IF (Stack[-1] == 0) GOTO 0xe64; Pop(1)

0xe57: @ irand(Stack[-2], Stack[-3])
0xe58: Pop(0)
0xe59: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=597
0xe5a: Pop(0)
0xe5b: PushEmpty(object, int, float, cvector, cvector)
0xe5c: Stack[-26] = Stack[-5]
0xe5d: Stack[-25] = Stack[-4]
0xe5e: Stack[-24] = Stack[-3]
0xe5f: Stack[-6] = Stack[-2]
0xe60: Stack[-1] = -Stack[-14]; Pop(0);
0xe61: Call2 0xe6a

0xe62: Pop(5)
0xe63: Return(); Pop(18)

0xe64: Stack[-8] = 0
0xe65: PushEmpty(object)
0xe66: Stack[-22] = Stack[-1]
0xe67: Call2 0xdfa

0xe68: Pop(1)
0xe69: Return(); Pop(18)

0xe6a: PushEmpty(object, object, object, object)
0xe6b: @ GetScene(Stack[-2])
0xe6c: Pop(0)
0xe6d: Push("scripted") // @poff=601
0xe6e: Push("blood_dir.xml") // @poff=619
0xe6f: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xe70: Pop(2)
0xe71: PushEmpty(object)
0xe72: Stack[-10] = Stack[-1]
0xe73: Call2 0xdfa

0xe74: Pop(1)
0xe75: Return(); Pop(4)

0xe76: Stack[-1] = 0
0xe77: Stack[-2] = 0
0xe78: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xe79: @@ GetPosition(Stack[-3]); Obj=7 // @poff=166
0xe7a: Pop(0)
0xe7b: @ GetPosition(Stack[-2])
0xe7c: Pop(0)
0xe7d: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xe7e: Push(CvectorIndex(Stack[-1], 0))
0xe7f: Push(CvectorIndex(Stack[-2], 2))
0xe80: @ RotateAsync(Stack[-2], Stack[-1])
0xe81: Pop(2)
0xe82: Return(); Pop(6)

0xe83: PushEmpty(bool, bool)
0xe84: @ IsLoaded(Stack[-1])
0xe85: Pop(0)
0xe86: Stack[-1] = Stack[-3]
0xe87: Return(); Pop(2)

0xe88: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xe89: @@ GetPosition(Stack[-8]); Obj=20 // @poff=166
0xe8a: Pop(0)
0xe8b: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=302
0xe8c: Pop(0)
0xe8d: Push(CvectorIndex(Stack[-8], 1))
0xe8e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xe8f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xe90: @ GetPosition(Stack[-7])
0xe91: Pop(0)
0xe92: @ GetEyesHeight(Stack[-9])
0xe93: Pop(0)
0xe94: Push(CvectorIndex(Stack[-7], 1))
0xe95: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xe96: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xe97: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xe98: Push(CvectorIndex(Stack[-6], 1))
0xe99: Stack[-1] = (int) 0
0xe9a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xe9b: Pop(0); Push(Stack[-6] | Stack[-6]);
0xe9c: Pop(1); Push(Sqrt(Stack[-1]))
0xe9d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xe9e: Stack[-5] = -Stack[-6]; Pop(0);
0xe9f: Pop(0); Push(Stack[-6] * Stack[-19]);
0xea0: PushEmpty(cvector, cvector)
0xea1: Push([0.0, 1.0, 0.0])
0xea2: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xea3: Call2 0xf2b

0xea4: Pop(1)
0xea5: Push((int) 25)
0xea6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xea7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xea8: Push([0.0, 10.0, 0.0])
0xea9: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xeaa: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xeab: @ IsOverrideActive(Stack[-2])
0xeac: Pop(0)
0xead: Push(Stack[-2])
0xeae: IF (Stack[-1] == 0) GOTO 0xeb1; Pop(1)

0xeaf: Stack[-21] = (bool) 0
0xeb0: Return(); Pop(18)

0xeb1: @ StopWorld()
0xeb2: Pop(0)
0xeb3: @ CameraTransit(Stack[-3], Stack[-5])
0xeb4: Pop(0)
0xeb5: Push(CvectorIndex(Stack[-4], 0))
0xeb6: Push(CvectorIndex(Stack[-5], 2))
0xeb7: @ Rotate(Stack[-2], Stack[-1])
0xeb8: Pop(2)
0xeb9: PushEmpty(bool)
0xeba: Call2 0x12dd

0xebb: Pop(0)
0xebc: IF (Stack[-1] == 0) GOTO 0xebe; Pop(1)

0xebd: GOTO 0xec6

0xebe: Push("head") // @poff=316
0xebf: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xec0: Pop(1)
0xec1: Push(Stack[-1])
0xec2: IF (Stack[-1] == 0) GOTO 0xec6; Pop(1)

0xec3: Push("head") // @poff=316
0xec4: @ LookAsyncCamera(Stack[-1])
0xec5: Pop(1)
0xec6: @ CameraWaitForPlayFinish()
0xec7: Pop(0)
0xec8: @ ResumeWorld()
0xec9: Pop(0)
0xeca: Stack[-21] = (bool) 1
0xecb: Return(); Pop(18)

0xecc: PushEmpty(bool, bool)
0xecd: @ CameraSwitchToNormal()
0xece: Pop(0)
0xecf: PushEmpty(bool)
0xed0: Call2 0x12dd

0xed1: Pop(0)
0xed2: IF (Stack[-1] == 0) GOTO 0xed4; Pop(1)

0xed3: GOTO 0xedc

0xed4: Push("head") // @poff=316
0xed5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xed6: Pop(1)
0xed7: Push(Stack[-1])
0xed8: IF (Stack[-1] == 0) GOTO 0xedc; Pop(1)

0xed9: Push("head") // @poff=316
0xeda: @ UnlookAsync(Stack[-1])
0xedb: Pop(1)
0xedc: Return(); Pop(2)

0xedd: PushEmpty(float, float, float, float)
0xede: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xedf: Pop(0)
0xee0: Push((bool) 0)
0xee1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xee2: Pop(1)
0xee3: Return(); Pop(4)

0xee4: PushEmpty(float, float, float, float)
0xee5: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0xee6: Pop(0)
0xee7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0xee8: Pop(0)
0xee9: Return(); Pop(4)

0xeea: PushEmpty(float, cvector, float, cvector)
0xeeb: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=302
0xeec: Pop(0)
0xeed: Stack[-1] = [0.0, 0.0, 0.0]
0xeee: Push(CvectorIndex(Stack[-1], 1))
0xeef: Stack[-3] = Stack[-1]
0xef0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xef1: Push("head") // @poff=316
0xef2: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xef3: Pop(1)
0xef4: Return(); Pop(4)

0xef5: PushEmpty(bool)
0xef6: Call2 0x12dd

0xef7: Pop(0)
0xef8: IF (Stack[-1] == 0) GOTO 0xefb; Pop(1)

0xef9: @ lshStopSpeech()
0xefa: Pop(0)
0xefb: Return(); Pop(0)

0xefc: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xefd: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xefe: Pop(0)
0xeff: Pop(0); Push((bool) Stack[-8] == 0)
0xf00: IF (Stack[-1] == 0) GOTO 0xf15; Pop(1)

0xf01: Stack[-7] = (int) 0
0xf02: Push((int) 1)
0xf03: Pop(1); Push(Stack[-8] + Stack[-1]);
0xf04: Pop(1); Push(Stack[-18] + Stack[-1]);
0xf05: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xf06: Pop(1)
0xf07: Pop(0); Push((bool) Stack[-6] == 0)
0xf08: IF (Stack[-1] == 0) GOTO 0xf0a; Pop(1)

0xf09: GOTO 0xf0d

0xf0a: Push((int) 1)
0xf0b: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xf0c: GOTO 0xf02

0xf0d: Pop(0); Push((bool) Stack[-7] == 0)
0xf0e: IF (Stack[-1] == 0) GOTO 0xf10; Pop(1)

0xf0f: Return(); Pop(16)

0xf10: @ irand(Stack[-5], Stack[-7])
0xf11: Pop(0)
0xf12: Push((int) 1)
0xf13: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf14: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xf15: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xf16: Pop(0)
0xf17: Push(Stack[-4])
0xf18: IF (Stack[-1] == 0) GOTO 0xf24; Pop(1)

0xf19: @ GetEyesHeight(Stack[-3])
0xf1a: Pop(0)
0xf1b: @ GetDirection(Stack[-2])
0xf1c: Pop(0)
0xf1d: Push((int) 50)
0xf1e: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xf1f: Push(CvectorIndex(Stack[-1], 1))
0xf20: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xf21: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xf22: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xf23: Pop(0)
0xf24: Return(); Pop(16)

0xf25: PushEmpty(object, object)
0xf26: @ self(Stack[-1])
0xf27: Pop(0)
0xf28: Stack[-1] = Stack[-3]
0xf29: Return(); Pop(2)

0xf2a: Stack[-1] = 0
0xf2b: PushEmpty(float, float)
0xf2c: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf2d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xf2e: Push((float)9.999999974752427e-07)
0xf2f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf30: IF (Stack[-1] == 0) GOTO 0xf33; Pop(1)

0xf31: Stack[-4] = [0.0, 0.0, 0.0]
0xf32: Return(); Pop(2)

0xf33: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xf34: Return(); Pop(2)

0xf35: PushEmpty()
0xf36: Pop(0); Push(Stack[-2] | Stack[-1]);
0xf37: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf38: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf39: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf3a: Pop(1); Push(Sqrt(Stack[-1]))
0xf3b: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xf3c: Return(); Pop(0)

0xf3d: PushEmpty()
0xf3e: Push(CvectorIndex(Stack[-2], 0))
0xf3f: Push(CvectorIndex(Stack[-2], 0))
0xf40: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf41: Push(CvectorIndex(Stack[-3], 2))
0xf42: Push(CvectorIndex(Stack[-3], 2))
0xf43: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf44: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf45: Return(); Pop(0)

0xf46: PushEmpty()
0xf47: Push(CvectorIndex(Stack[-1], 0))
0xf48: Push(CvectorIndex(Stack[-2], 0))
0xf49: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf4a: Push(CvectorIndex(Stack[-2], 2))
0xf4b: Push(CvectorIndex(Stack[-3], 2))
0xf4c: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf4d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf4e: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xf4f: Return(); Pop(0)

0xf50: PushEmpty()
0xf51: PushEmpty(float, cvector, cvector)
0xf52: Stack[-5] = Stack[-2]
0xf53: Stack[-4] = Stack[-1]
0xf54: Call2 0xf3d

0xf55: Pop(2)
0xf56: PushEmpty(float, cvector)
0xf57: Stack[-5] = Stack[-1]
0xf58: Call2 0xf46

0xf59: Pop(1)
0xf5a: PushEmpty(float, cvector)
0xf5b: Stack[-5] = Stack[-1]
0xf5c: Call2 0xf46

0xf5d: Pop(1)
0xf5e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf5f: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xf60: Return(); Pop(0)

0xf61: PushEmpty(int, int)
0xf62: @ GetVariable(Stack[-3], Stack[-1])
0xf63: Pop(0)
0xf64: Stack[-1] = Stack[-4]
0xf65: Return(); Pop(2)

0xf66: PushEmpty(float, float)
0xf67: @ GetGameTime(Stack[-1])
0xf68: Pop(0)
0xf69: Push((int) 1)
0xf6a: PushEmpty(int)
0xf6b: Push((int) 24)
0xf6c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xf6d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf6e: Return(); Pop(2)

0xf6f: PushEmpty()
0xf70: PushEmpty(int, string)
0xf71: Stack[-1] = "branch" // @poff=647
0xf72: Call2 0xf61

0xf73: Pop(1)
0xf74: Push((int) 0)
0xf75: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf76: IF (Stack[-1] == 0) GOTO 0xf79; Pop(1)

0xf77: Stack[-2] = (bool) 1
0xf78: Return(); Pop(0)

0xf79: Stack[-2] = (bool) 0
0xf7a: Return(); Pop(0)

0xf7b: PushEmpty()
0xf7c: PushEmpty(bool, object)
0xf7d: Stack[-3] = Stack[-1]
0xf7e: Call2 0xfdf

0xf7f: Pop(1)
0xf80: IF (Stack[-1] == 0) GOTO 0xf83; Pop(1)

0xf81: Stack[-2] = (bool) 1
0xf82: Return(); Pop(0)

0xf83: Stack[-2] = (bool) 0
0xf84: Return(); Pop(0)

0xf85: PushEmpty()
0xf86: PushEmpty(bool, object)
0xf87: Stack[-3] = Stack[-1]
0xf88: Call2 0xfe2

0xf89: Pop(1)
0xf8a: IF (Stack[-1] == 0) GOTO 0xf8d; Pop(1)

0xf8b: Stack[-2] = (bool) 1
0xf8c: Return(); Pop(0)

0xf8d: Stack[-2] = (bool) 0
0xf8e: Return(); Pop(0)

0xf8f: PushEmpty()
0xf90: PushEmpty(bool, object)
0xf91: Stack[-3] = Stack[-1]
0xf92: Call2 0xfe9

0xf93: Pop(1)
0xf94: IF (Stack[-1] == 0) GOTO 0xf97; Pop(1)

0xf95: Stack[-2] = (bool) 1
0xf96: Return(); Pop(0)

0xf97: Stack[-2] = (bool) 0
0xf98: Return(); Pop(0)

0xf99: PushEmpty()
0xf9a: PushEmpty(bool, object)
0xf9b: Stack[-3] = Stack[-1]
0xf9c: Call2 0xff0

0xf9d: Pop(1)
0xf9e: IF (Stack[-1] == 0) GOTO 0xfa1; Pop(1)

0xf9f: Stack[-2] = (bool) 1
0xfa0: Return(); Pop(0)

0xfa1: Stack[-2] = (bool) 0
0xfa2: Return(); Pop(0)

0xfa3: PushEmpty()
0xfa4: PushEmpty(bool, object)
0xfa5: Stack[-3] = Stack[-1]
0xfa6: Call2 0xff7

0xfa7: Pop(1)
0xfa8: IF (Stack[-1] == 0) GOTO 0xfab; Pop(1)

0xfa9: Stack[-2] = (bool) 1
0xfaa: Return(); Pop(0)

0xfab: Stack[-2] = (bool) 0
0xfac: Return(); Pop(0)

0xfad: PushEmpty()
0xfae: PushEmpty(bool, object)
0xfaf: Stack[-3] = Stack[-1]
0xfb0: Call2 0xffe

0xfb1: Pop(1)
0xfb2: IF (Stack[-1] == 0) GOTO 0xfb5; Pop(1)

0xfb3: Stack[-2] = (bool) 1
0xfb4: Return(); Pop(0)

0xfb5: Stack[-2] = (bool) 0
0xfb6: Return(); Pop(0)

0xfb7: PushEmpty()
0xfb8: PushEmpty(bool, object)
0xfb9: Stack[-3] = Stack[-1]
0xfba: Call2 0x1005

0xfbb: Pop(1)
0xfbc: IF (Stack[-1] == 0) GOTO 0xfbf; Pop(1)

0xfbd: Stack[-2] = (bool) 1
0xfbe: Return(); Pop(0)

0xfbf: Stack[-2] = (bool) 0
0xfc0: Return(); Pop(0)

0xfc1: PushEmpty()
0xfc2: PushEmpty(bool, object)
0xfc3: Stack[-3] = Stack[-1]
0xfc4: Call2 0x100c

0xfc5: Pop(1)
0xfc6: IF (Stack[-1] == 0) GOTO 0xfc9; Pop(1)

0xfc7: Stack[-2] = (bool) 1
0xfc8: Return(); Pop(0)

0xfc9: Stack[-2] = (bool) 0
0xfca: Return(); Pop(0)

0xfcb: PushEmpty()
0xfcc: PushEmpty(bool, object)
0xfcd: Stack[-3] = Stack[-1]
0xfce: Call2 0x1013

0xfcf: Pop(1)
0xfd0: IF (Stack[-1] == 0) GOTO 0xfd3; Pop(1)

0xfd1: Stack[-2] = (bool) 1
0xfd2: Return(); Pop(0)

0xfd3: Stack[-2] = (bool) 0
0xfd4: Return(); Pop(0)

0xfd5: PushEmpty()
0xfd6: PushEmpty(bool, object)
0xfd7: Stack[-3] = Stack[-1]
0xfd8: Call2 0x101a

0xfd9: Pop(1)
0xfda: IF (Stack[-1] == 0) GOTO 0xfdd; Pop(1)

0xfdb: Stack[-2] = (bool) 1
0xfdc: Return(); Pop(0)

0xfdd: Stack[-2] = (bool) 0
0xfde: Return(); Pop(0)

0xfdf: PushEmpty()
0xfe0: Stack[-2] = (bool) 0
0xfe1: Return(); Pop(0)

0xfe2: PushEmpty()
0xfe3: PushEmpty(int)
0xfe4: Call2 0xf66

0xfe5: Pop(0)
0xfe6: Push((int) 1)
0xfe7: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xfe8: Return(); Pop(0)

0xfe9: PushEmpty()
0xfea: PushEmpty(int)
0xfeb: Call2 0xf66

0xfec: Pop(0)
0xfed: Push((int) 2)
0xfee: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xfef: Return(); Pop(0)

0xff0: PushEmpty()
0xff1: PushEmpty(int)
0xff2: Call2 0xf66

0xff3: Pop(0)
0xff4: Push((int) 3)
0xff5: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xff6: Return(); Pop(0)

0xff7: PushEmpty()
0xff8: PushEmpty(int)
0xff9: Call2 0xf66

0xffa: Pop(0)
0xffb: Push((int) 4)
0xffc: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xffd: Return(); Pop(0)

0xffe: PushEmpty()
0xfff: PushEmpty(int)
0x1000: Call2 0xf66

0x1001: Pop(0)
0x1002: Push((int) 6)
0x1003: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1004: Return(); Pop(0)

0x1005: PushEmpty()
0x1006: PushEmpty(int)
0x1007: Call2 0xf66

0x1008: Pop(0)
0x1009: Push((int) 7)
0x100a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x100b: Return(); Pop(0)

0x100c: PushEmpty()
0x100d: PushEmpty(int)
0x100e: Call2 0xf66

0x100f: Pop(0)
0x1010: Push((int) 8)
0x1011: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1012: Return(); Pop(0)

0x1013: PushEmpty()
0x1014: PushEmpty(int)
0x1015: Call2 0xf66

0x1016: Pop(0)
0x1017: Push((int) 10)
0x1018: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1019: Return(); Pop(0)

0x101a: PushEmpty()
0x101b: PushEmpty(int)
0x101c: Call2 0xf66

0x101d: Pop(0)
0x101e: Push((int) 11)
0x101f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1020: Return(); Pop(0)

0x1021: PushEmpty(int, int)
0x1022: Push("branch") // @poff=647
0x1023: @ GetVariable(Stack[-1], Stack[-2])
0x1024: Pop(1)
0x1025: Push((int) 0)
0x1026: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1027: IF (Stack[-1] == 0) GOTO 0x102b; Pop(1)

0x1028: Stack[-3] = (int) 1
0x1029: Return(); Pop(2)

0x102a: GOTO 0x1030

0x102b: Push((int) 1)
0x102c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x102d: IF (Stack[-1] == 0) GOTO 0x1030; Pop(1)

0x102e: Stack[-3] = (int) 2
0x102f: Return(); Pop(2)

0x1030: Stack[-3] = (int) 3
0x1031: Return(); Pop(2)

0x1032: PushEmpty(int, int)
0x1033: Push("branch") // @poff=647
0x1034: @ GetVariable(Stack[-1], Stack[-2])
0x1035: Pop(1)
0x1036: Stack[-1] = Stack[-3]
0x1037: Return(); Pop(2)

0x1038: PushEmpty(object, float, object, float)
0x1039: Push("player") // @poff=661
0x103a: @ FindActor(Stack[-3], Stack[-1])
0x103b: Pop(1)
0x103c: Pop(0); Push((bool) Stack[-2] == 0)
0x103d: IF (Stack[-1] == 0) GOTO 0x1040; Pop(1)

0x103e: Stack[-5] = (int) 0
0x103f: Return(); Pop(4)

0x1040: Push("reputation") // @poff=675
0x1041: @@ GetProperty(Stack[-1], Stack[-2]); Obj=3 // @poff=528
0x1042: Pop(1)
0x1043: Stack[-1] = Stack[-5]
0x1044: Return(); Pop(4)

0x1045: Stack[-2] = 0
0x1046: PushEmpty()
0x1047: PushEmpty(int)
0x1048: Call2 0x1032

0x1049: Pop(0)
0x104a: Push((int) 1)
0x104b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x104c: IF (Stack[-1] == 0) GOTO 0x1050; Pop(1)

0x104d: @ WorkWithCorpse(Stack[-1])
0x104e: Pop(0)
0x104f: GOTO 0x1052

0x1050: @ Barter(Stack[-1])
0x1051: Pop(0)
0x1052: Return(); Pop(0)

0x1053: PushEmpty(int, bool, int, bool)
0x1054: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x1055: IF (Stack[-1] == 0) GOTO 0x105a; Pop(1)

0x1056: Push("GenerateMoney: iMin > iMax") // @poff=697
0x1057: @ Trace(Stack[-1])
0x1058: Pop(1)
0x1059: Return(); Pop(4)

0x105a: Stack[-2] = (int) 0
0x105b: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x105c: IF (Stack[-1] == 0) GOTO 0x1061; Pop(1)

0x105d: Pop(0); Push(Stack[-5] - Stack[-6]);
0x105e: @ irand(Stack[-3], Stack[-1])
0x105f: Pop(1)
0x1060: GOTO 0x1065

0x1061: Push((int) 0)
0x1062: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x1063: IF (Stack[-1] == 0) GOTO 0x1065; Pop(1)

0x1064: Return(); Pop(4)

0x1065: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x1066: Push((int) 0)
0x1067: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1068: IF (Stack[-1] == 0) GOTO 0x106a; Pop(1)

0x1069: Return(); Pop(4)

0x106a: PushEmpty(int, string)
0x106b: Stack[-1] = "Money" // @poff=751
0x106c: Call2 0x114a

0x106d: Pop(1)
0x106e: Push((int) 0)
0x106f: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x1070: Pop(2)
0x1071: Return(); Pop(4)

0x1072: PushEmpty(object, int, bool, object, int, bool)
0x1073: @ CreateInvItem(Stack[-3])
0x1074: Pop(0)
0x1075: @@ SetItemName(Stack[-7]); Obj=3 // @poff=763
0x1076: Pop(0)
0x1077: Push("Organ") // @poff=775
0x1078: Push((int) 1)
0x1079: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=787
0x107a: Pop(2)
0x107b: @@ GetItemID(Stack[-2]); Obj=3 // @poff=799
0x107c: Pop(0)
0x107d: Push((int) 0)
0x107e: Push((int) 1)
0x107f: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x1080: Pop(2)
0x1081: Return(); Pop(6)

0x1082: Stack[-3] = 0
0x1083: PushEmpty(int)
0x1084: Call2 0x1032

0x1085: Pop(0)
0x1086: Push((int) 1)
0x1087: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1088: IF (Stack[-1] == 0) GOTO 0x108a; Pop(1)

0x1089: Return(); Pop(0)

0x108a: PushEmpty(string)
0x108b: Stack[-1] = "liver" // @poff=809
0x108c: Call2 0x1072

0x108d: Pop(1)
0x108e: PushEmpty(string)
0x108f: Stack[-1] = "kidney" // @poff=821
0x1090: Call2 0x1072

0x1091: Pop(1)
0x1092: PushEmpty(string)
0x1093: Stack[-1] = "heart" // @poff=835
0x1094: Call2 0x1072

0x1095: Pop(1)
0x1096: PushEmpty(string)
0x1097: Stack[-1] = "blood" // @poff=847
0x1098: Call2 0x1072

0x1099: Pop(1)
0x109a: Return(); Pop(0)

0x109b: PushEmpty(int, bool, int, bool)
0x109c: Push(Stack[-5])
0x109d: IF (Stack[-1] == 0) GOTO 0x10f4; Pop(1)

0x109e: PushEmpty(int, int)
0x109f: Stack[-2] = (int) 0
0x10a0: Push((int) 100)
0x10a1: PushEmpty(int)
0x10a2: Call2 0xf66

0x10a3: Pop(0)
0x10a4: Push((int) 100)
0x10a5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10a6: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x10a7: Call2 0x1053

0x10a8: Pop(2)
0x10a9: Push((int) 8)
0x10aa: @ irand(Stack[-3], Stack[-1])
0x10ab: Pop(1)
0x10ac: Push((int) 0)
0x10ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ae: IF (Stack[-1] == 0) GOTO 0x10b8; Pop(1)

0x10af: PushEmpty(int, string)
0x10b0: Stack[-1] = "lemon" // @poff=859
0x10b1: Call2 0x114a

0x10b2: Pop(1)
0x10b3: Push((int) 0)
0x10b4: Push((int) 1)
0x10b5: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10b6: Pop(3)
0x10b7: GOTO 0x10f3

0x10b8: Push((int) 1)
0x10b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ba: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10bb: PushEmpty(int, string)
0x10bc: Stack[-1] = "rusk" // @poff=871
0x10bd: Call2 0x114a

0x10be: Pop(1)
0x10bf: Push((int) 0)
0x10c0: Push((int) 1)
0x10c1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10c2: Pop(3)
0x10c3: GOTO 0x10f3

0x10c4: Push((int) 2)
0x10c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c6: IF (Stack[-1] == 0) GOTO 0x10d0; Pop(1)

0x10c7: PushEmpty(int, string)
0x10c8: Stack[-1] = "hook" // @poff=881
0x10c9: Call2 0x114a

0x10ca: Pop(1)
0x10cb: Push((int) 0)
0x10cc: Push((int) 1)
0x10cd: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10ce: Pop(3)
0x10cf: GOTO 0x10f3

0x10d0: Push((int) 4)
0x10d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d2: IF (Stack[-1] == 0) GOTO 0x10dc; Pop(1)

0x10d3: PushEmpty(int, string)
0x10d4: Stack[-1] = "syringe" // @poff=891
0x10d5: Call2 0x114a

0x10d6: Pop(1)
0x10d7: Push((int) 0)
0x10d8: Push((int) 1)
0x10d9: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10da: Pop(3)
0x10db: GOTO 0x10f3

0x10dc: Push((int) 5)
0x10dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10de: IF (Stack[-1] == 0) GOTO 0x10e8; Pop(1)

0x10df: PushEmpty(int, string)
0x10e0: Stack[-1] = "watch" // @poff=907
0x10e1: Call2 0x114a

0x10e2: Pop(1)
0x10e3: Push((int) 0)
0x10e4: Push((int) 1)
0x10e5: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10e6: Pop(3)
0x10e7: GOTO 0x10f3

0x10e8: Push((int) 6)
0x10e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ea: IF (Stack[-1] == 0) GOTO 0x10f3; Pop(1)

0x10eb: PushEmpty(int, string)
0x10ec: Stack[-1] = "razor" // @poff=919
0x10ed: Call2 0x114a

0x10ee: Pop(1)
0x10ef: Push((int) 0)
0x10f0: Push((int) 1)
0x10f1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10f2: Pop(3)
0x10f3: GOTO 0x1149

0x10f4: PushEmpty(int, int)
0x10f5: Stack[-2] = (int) 0
0x10f6: Push((int) 50)
0x10f7: PushEmpty(int)
0x10f8: Call2 0xf66

0x10f9: Pop(0)
0x10fa: Push((int) 50)
0x10fb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10fc: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x10fd: Call2 0x1053

0x10fe: Pop(2)
0x10ff: Push((int) 7)
0x1100: @ irand(Stack[-3], Stack[-1])
0x1101: Pop(1)
0x1102: Push((int) 0)
0x1103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1104: IF (Stack[-1] == 0) GOTO 0x110e; Pop(1)

0x1105: PushEmpty(int, string)
0x1106: Stack[-1] = "beads" // @poff=931
0x1107: Call2 0x114a

0x1108: Pop(1)
0x1109: Push((int) 0)
0x110a: Push((int) 1)
0x110b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x110c: Pop(3)
0x110d: GOTO 0x1149

0x110e: Push((int) 1)
0x110f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1110: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x1111: PushEmpty(int, string)
0x1112: Stack[-1] = "bracelet" // @poff=943
0x1113: Call2 0x114a

0x1114: Pop(1)
0x1115: Push((int) 0)
0x1116: Push((int) 1)
0x1117: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1118: Pop(3)
0x1119: GOTO 0x1149

0x111a: Push((int) 2)
0x111b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111c: IF (Stack[-1] == 0) GOTO 0x1126; Pop(1)

0x111d: PushEmpty(int, string)
0x111e: Stack[-1] = "ear_ring" // @poff=961
0x111f: Call2 0x114a

0x1120: Pop(1)
0x1121: Push((int) 0)
0x1122: Push((int) 1)
0x1123: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1124: Pop(3)
0x1125: GOTO 0x1149

0x1126: Push((int) 3)
0x1127: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1128: IF (Stack[-1] == 0) GOTO 0x1132; Pop(1)

0x1129: PushEmpty(int, string)
0x112a: Stack[-1] = "gold_ring" // @poff=979
0x112b: Call2 0x114a

0x112c: Pop(1)
0x112d: Push((int) 0)
0x112e: Push((int) 1)
0x112f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1130: Pop(3)
0x1131: GOTO 0x1149

0x1132: Push((int) 4)
0x1133: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1134: IF (Stack[-1] == 0) GOTO 0x113e; Pop(1)

0x1135: PushEmpty(int, string)
0x1136: Stack[-1] = "silver_ring" // @poff=999
0x1137: Call2 0x114a

0x1138: Pop(1)
0x1139: Push((int) 0)
0x113a: Push((int) 1)
0x113b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x113c: Pop(3)
0x113d: GOTO 0x1149

0x113e: Push((int) 5)
0x113f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1140: IF (Stack[-1] == 0) GOTO 0x1149; Pop(1)

0x1141: PushEmpty(int, string)
0x1142: Stack[-1] = "flower" // @poff=1023
0x1143: Call2 0x114a

0x1144: Pop(1)
0x1145: Push((int) 0)
0x1146: Push((int) 1)
0x1147: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1148: Pop(3)
0x1149: Return(); Pop(4)

0x114a: PushEmpty(int, int)
0x114b: @ GetInvItemByName(Stack[-1], Stack[-3])
0x114c: Pop(0)
0x114d: Stack[-1] = Stack[-4]
0x114e: Return(); Pop(2)

0x114f: PushEmpty()
0x1150: PushEmpty(object)
0x1151: Stack[-2] = Stack[-1]
0x1152: Push(-1, 0); TaskCall(2)
0x1153: Call2 0x65d

0x1154: Pop(-1, 0); TaskReturn
0x1155: Pop(1)
0x1156: Return(); Pop(0)

0x1157: PushEmpty(float, float)
0x1158: Push("health") // @poff=1037
0x1159: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x115a: IF (Stack[-1] == 0) GOTO 0x1163; Pop(1)

0x115b: Push("health") // @poff=1037
0x115c: @ GetProperty(Stack[-1], Stack[-2])
0x115d: Pop(1)
0x115e: Push((int) 0)
0x115f: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x1160: IF (Stack[-1] == 0) GOTO 0x1163; Pop(1)

0x1161: @ SignalDeath(Stack[-4])
0x1162: Pop(0)
0x1163: Return(); Pop(2)

0x1164: PushEmpty()
0x1165: PushEmpty(object)
0x1166: Stack[-2] = Stack[-1]
0x1167: Call2 0x114f

0x1168: Pop(1)
0x1169: Return(); Pop(0)

0x116a: PushEmpty()
0x116b: PushEmpty(object, int, float)
0x116c: Stack[-7] = Stack[-3]
0x116d: Stack[-6] = Stack[-2]
0x116e: Stack[-5] = Stack[-1]
0x116f: Call2 0xe26

0x1170: Pop(3)
0x1171: Return(); Pop(0)

0x1172: PushEmpty()
0x1173: PushEmpty(object, int, float, cvector, cvector)
0x1174: Stack[-11] = Stack[-5]
0x1175: Stack[-10] = Stack[-4]
0x1176: Stack[-9] = Stack[-3]
0x1177: Stack[-7] = Stack[-2]
0x1178: Stack[-6] = Stack[-1]
0x1179: Call2 0xe6a

0x117a: Pop(5)
0x117b: Return(); Pop(0)

0x117c: PushEmpty()
0x117d: Push("unholster") // @poff=1051
0x117e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117f: IF (Stack[-1] == 0) GOTO 0x1187; Pop(1)

0x1180: PushEmpty(bool, object)
0x1181: Stack[-4] = Stack[-1]
0x1182: Call2 0x129f

0x1183: Stack[-2] = Stack[-5]
0x1184: Pop(2)
0x1185: Return(); Pop(0)

0x1186: GOTO 0x119a

0x1187: Push("player_shot") // @poff=1071
0x1188: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1189: IF (Stack[-1] == 0) GOTO 0x1191; Pop(1)

0x118a: PushEmpty(bool, object)
0x118b: Stack[-4] = Stack[-1]
0x118c: Call2 0x12ac

0x118d: Stack[-2] = Stack[-5]
0x118e: Pop(2)
0x118f: Return(); Pop(0)

0x1190: GOTO 0x119a

0x1191: Push("battle") // @poff=1095
0x1192: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1193: IF (Stack[-1] == 0) GOTO 0x119a; Pop(1)

0x1194: PushEmpty(bool, object)
0x1195: Stack[-4] = Stack[-1]
0x1196: Call2 0x12c3

0x1197: Stack[-2] = Stack[-5]
0x1198: Pop(2)
0x1199: Return(); Pop(0)

0x119a: Stack[-3] = (bool) 0
0x119b: Return(); Pop(0)

0x119c: PushEmpty()
0x119d: Push("unholster") // @poff=1051
0x119e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x119f: IF (Stack[-1] == 0) GOTO 0x11a5; Pop(1)

0x11a0: PushEmpty(object)
0x11a1: Stack[-3] = Stack[-1]
0x11a2: Call2 0x12a4

0x11a3: Pop(1)
0x11a4: GOTO 0x11b4

0x11a5: Push("player_shot") // @poff=1071
0x11a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11a7: IF (Stack[-1] == 0) GOTO 0x11ad; Pop(1)

0x11a8: PushEmpty(object)
0x11a9: Stack[-3] = Stack[-1]
0x11aa: Call2 0x12bb

0x11ab: Pop(1)
0x11ac: GOTO 0x11b4

0x11ad: Push("battle") // @poff=1095
0x11ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11af: IF (Stack[-1] == 0) GOTO 0x11b4; Pop(1)

0x11b0: PushEmpty(object)
0x11b1: Stack[-3] = Stack[-1]
0x11b2: Call2 0x12ca

0x11b3: Pop(1)
0x11b4: Return(); Pop(0)

0x11b5: PushEmpty(bool, bool)
0x11b6: PushEmpty(bool)
0x11b7: Stack[-1] = (bool) 0
0x11b8: PushEmpty(bool, object)
0x11b9: Stack[-6] = Stack[-1]
0x11ba: Call2 0x129f

0x11bb: Pop(1)
0x11bc: IF (Stack[-1] == 0) GOTO 0x11c3; Pop(1)

0x11bd: PushEmpty(bool, object)
0x11be: Stack[-6] = Stack[-1]
0x11bf: Call2 0xda8

0x11c0: Pop(1)
0x11c1: IF (Stack[-1] == 0) GOTO 0x11c3; Pop(1)

0x11c2: Stack[-1] = (bool) 1
0x11c3: IF (Stack[-1] == 0) GOTO 0x11ca; Pop(1)

0x11c4: @@ IsWeaponHolstered(Stack[-1]); Obj=3 // @poff=1109
0x11c5: Pop(0)
0x11c6: Pop(0); Push((bool) Stack[-1] == 0)
0x11c7: IF (Stack[-1] == 0) GOTO 0x11ca; Pop(1)

0x11c8: Stack[-4] = (bool) 1
0x11c9: Return(); Pop(2)

0x11ca: Stack[-4] = (bool) 0
0x11cb: Return(); Pop(2)

0x11cc: PushEmpty()
0x11cd: PushEmpty(object)
0x11ce: Stack[-2] = Stack[-1]
0x11cf: Call2 0x12a4

0x11d0: Pop(1)
0x11d1: Return(); Pop(0)

0x11d2: PushEmpty()
0x11d3: PushEmpty(bool, object)
0x11d4: Stack[-3] = Stack[-1]
0x11d5: Call2 0xda8

0x11d6: Pop(1)
0x11d7: IF (Stack[-1] == 0) GOTO 0x11de; Pop(1)

0x11d8: PushEmpty(object)
0x11d9: Call2 0xf25

0x11da: Pop(0)
0x11db: Push((float)-0.029999999329447746)
0x11dc: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x11dd: Pop(2)
0x11de: Return(); Pop(0)

0x11df: PushEmpty(object, object)
0x11e0: Push("heal") // @poff=1127
0x11e1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11e2: IF (Stack[-1] == 0) GOTO 0x11ed; Pop(1)

0x11e3: Push("player") // @poff=661
0x11e4: @ FindActor(Stack[-2], Stack[-1])
0x11e5: Pop(1)
0x11e6: PushEmpty(bool, object)
0x11e7: Stack[-3] = Stack[-1]
0x11e8: Call2 0x12d0

0x11e9: Stack[-2] = Stack[-6]
0x11ea: Pop(2)
0x11eb: Return(); Pop(2)

0x11ec: Stack[-1] = 0
0x11ed: Stack[-4] = (bool) 0
0x11ee: Return(); Pop(2)

0x11ef: PushEmpty(object, object)
0x11f0: Push("heal") // @poff=1127
0x11f1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11f2: IF (Stack[-1] == 0) GOTO 0x11fb; Pop(1)

0x11f3: Push("player") // @poff=661
0x11f4: @ FindActor(Stack[-2], Stack[-1])
0x11f5: Pop(1)
0x11f6: PushEmpty(object)
0x11f7: Stack[-2] = Stack[-1]
0x11f8: Call2 0x12d3

0x11f9: Pop(1)
0x11fa: Stack[-1] = 0
0x11fb: Return(); Pop(2)

0x11fc: PushEmpty(string, string)
0x11fd: Stack[-1] = "idle" // @poff=146
0x11fe: Push(Stack[-3])
0x11ff: IF (Stack[-1] == 0) GOTO 0x1201; Pop(1)

0x1200: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1201: Stack[-1] = Stack[-4]
0x1202: Return(); Pop(2)

0x1203: PushEmpty(int, bool, int, bool)
0x1204: Stack[-2] = (int) 0
0x1205: Push("all") // @poff=138
0x1206: PushEmpty(string, int)
0x1207: Stack[-5] = Stack[-1]
0x1208: Call2 0x11fc

0x1209: Pop(1)
0x120a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x120b: Pop(2)
0x120c: Pop(0); Push((bool) Stack[-1] == 0)
0x120d: IF (Stack[-1] == 0) GOTO 0x120f; Pop(1)

0x120e: GOTO 0x1212

0x120f: Push((int) 1)
0x1210: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1211: GOTO 0x1205

0x1212: Stack[-2] = Stack[-5]
0x1213: Return(); Pop(4)

0x1214: PushEmpty()
0x1215: PushEmpty(bool)
0x1216: Call2 0x12f7

0x1217: Pop(0)
0x1218: IF (Stack[-1] == 0) GOTO 0x121b; Pop(1)

0x1219: Stack[-2] = (int) 2
0x121a: GOTO 0x121c

0x121b: Stack[-2] = (int) 0
0x121c: Return(); Pop(0)

0x121d: PushEmpty()
0x121e: PushEmpty(object)
0x121f: Stack[-2] = Stack[-1]
0x1220: Push(-1, 1); TaskCall(5)
0x1221: Call2 0x964

0x1222: Pop(-1, 1); TaskReturn
0x1223: Pop(1)
0x1224: Return(); Pop(0)

0x1225: PushEmpty()
0x1226: PushEmpty(bool, object)
0x1227: Stack[-3] = Stack[-1]
0x1228: Call2 0xde2

0x1229: Pop(1)
0x122a: IF (Stack[-1] == 0) GOTO 0x122d; Pop(1)

0x122b: Stack[-2] = (int) 2
0x122c: GOTO 0x122e

0x122d: Stack[-2] = (int) 0
0x122e: Return(); Pop(0)

0x122f: PushEmpty()
0x1230: PushEmpty(object)
0x1231: Stack[-2] = Stack[-1]
0x1232: Push(-1, 3); TaskCall(6)
0x1233: Call2 0xa77

0x1234: Pop(-1, 3); TaskReturn
0x1235: Pop(1)
0x1236: Return(); Pop(0)

0x1237: PushEmpty()
0x1238: PushEmpty(bool, object)
0x1239: Stack[-4] = Stack[-1]
0x123a: Call2 0xde2

0x123b: Pop(1)
0x123c: IF (Stack[-1] == 0) GOTO 0x123f; Pop(1)

0x123d: Stack[-3] = (int) 2
0x123e: GOTO 0x1240

0x123f: Stack[-3] = (int) 0
0x1240: Return(); Pop(0)

0x1241: PushEmpty()
0x1242: PushEmpty(object)
0x1243: Stack[-2] = Stack[-1]
0x1244: Push(-1, 3); TaskCall(7)
0x1245: Call2 0xb73

0x1246: Pop(-1, 3); TaskReturn
0x1247: Pop(1)
0x1248: Return(); Pop(0)

0x1249: PushEmpty(string, bool, string, bool)
0x124a: PushEmpty(bool, object, string)
0x124b: Stack[-9] = Stack[-2]
0x124c: Stack[-1] = "class" // @poff=1137
0x124d: Call2 0xdad

0x124e: Pop(2)
0x124f: Pop(1); Push((bool) Stack[-1] == 0)
0x1250: IF (Stack[-1] == 0) GOTO 0x1253; Pop(1)

0x1251: Stack[-8] = (bool) 0
0x1252: Return(); Pop(4)

0x1253: Push("class") // @poff=1137
0x1254: @@ GetProperty(Stack[-1], Stack[-3]); Obj=7 // @poff=528
0x1255: Pop(1)
0x1256: Push("rat") // @poff=1149
0x1257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1258: IF (Stack[-1] == 0) GOTO 0x125c; Pop(1)

0x1259: Stack[-8] = (bool) 0
0x125a: Return(); Pop(4)

0x125b: GOTO 0x1267

0x125c: Push("rat_big") // @poff=1157
0x125d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125e: IF (Stack[-1] == 0) GOTO 0x1262; Pop(1)

0x125f: Stack[-8] = (bool) 0
0x1260: Return(); Pop(4)

0x1261: GOTO 0x1267

0x1262: Push("dog") // @poff=1173
0x1263: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1264: IF (Stack[-1] == 0) GOTO 0x1267; Pop(1)

0x1265: Stack[-8] = (bool) 0
0x1266: Return(); Pop(4)

0x1267: @ CanSee(Stack[-1], Stack[-7])
0x1268: Pop(0)
0x1269: PushEmpty(bool)
0x126a: Stack[-1] = (bool) 1
0x126b: Push(Stack[-2])
0x126c: IF (Stack[-1] == 1) GOTO 0x1275; Pop(1)

0x126d: PushEmpty(float, object)
0x126e: Stack[-10] = Stack[-1]
0x126f: Call2 0xda0

0x1270: Pop(1)
0x1271: Pop(0); Push(Stack[-7] * Stack[-7]);
0x1272: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1273: IF (Stack[-1] == 1) GOTO 0x1275; Pop(1)

0x1274: Stack[-1] = (bool) 0
0x1275: IF (Stack[-1] == 0) GOTO 0x1278; Pop(1)

0x1276: Stack[-8] = (bool) 1
0x1277: Return(); Pop(4)

0x1278: @ CanSee(Stack[-1], Stack[-6])
0x1279: Pop(0)
0x127a: PushEmpty(bool)
0x127b: Stack[-1] = (bool) 1
0x127c: Push(Stack[-2])
0x127d: IF (Stack[-1] == 1) GOTO 0x1286; Pop(1)

0x127e: PushEmpty(float, object)
0x127f: Stack[-9] = Stack[-1]
0x1280: Call2 0xda0

0x1281: Pop(1)
0x1282: Pop(0); Push(Stack[-7] * Stack[-7]);
0x1283: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1284: IF (Stack[-1] == 1) GOTO 0x1286; Pop(1)

0x1285: Stack[-1] = (bool) 0
0x1286: IF (Stack[-1] == 0) GOTO 0x1289; Pop(1)

0x1287: Stack[-8] = (bool) 1
0x1288: Return(); Pop(4)

0x1289: Stack[-8] = (bool) 0
0x128a: Return(); Pop(4)

0x128b: PushEmpty()
0x128c: Stack[-2] = (int) 0
0x128d: Return(); Pop(0)

0x128e: PushEmpty()
0x128f: Return(); Pop(0)

0x1290: PushEmpty()
0x1291: Stack[-3] = (int) 0
0x1292: Return(); Pop(0)

0x1293: PushEmpty()
0x1294: Return(); Pop(0)

0x1295: PushEmpty()
0x1296: Stack[-2] = (int) 2
0x1297: Return(); Pop(0)

0x1298: PushEmpty()
0x1299: PushEmpty(object)
0x129a: Stack[-2] = Stack[-1]
0x129b: Call2 0x12e3

0x129c: Pop(1)
0x129d: Return(); Pop(0)

0x129e: Return(); Pop(0)

0x129f: PushEmpty(bool, bool)
0x12a0: @ CanSee(Stack[-1], Stack[-3])
0x12a1: Pop(0)
0x12a2: Stack[-1] = Stack[-4]
0x12a3: Return(); Pop(2)

0x12a4: PushEmpty()
0x12a5: PushEmpty(object)
0x12a6: Stack[-2] = Stack[-1]
0x12a7: Push(-1, 3); TaskCall(8)
0x12a8: Call2 0xc35

0x12a9: Pop(-1, 3); TaskReturn
0x12aa: Pop(1)
0x12ab: Return(); Pop(0)

0x12ac: PushEmpty(bool, bool)
0x12ad: @ CanSee(Stack[-1], Stack[-3])
0x12ae: Pop(0)
0x12af: Stack[-4] = (bool) 1
0x12b0: Push(Stack[-1])
0x12b1: IF (Stack[-1] == 1) GOTO 0x12ba; Pop(1)

0x12b2: PushEmpty(float, object)
0x12b3: Stack[-5] = Stack[-1]
0x12b4: Call2 0xda0

0x12b5: Pop(1)
0x12b6: Push((int) 4000000)
0x12b7: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x12b8: IF (Stack[-1] == 1) GOTO 0x12ba; Pop(1)

0x12b9: Stack[-4] = (bool) 0
0x12ba: Return(); Pop(2)

0x12bb: PushEmpty()
0x12bc: PushEmpty(object)
0x12bd: Stack[-2] = Stack[-1]
0x12be: Push(-1, 3); TaskCall(9)
0x12bf: Call2 0xcf7

0x12c0: Pop(-1, 3); TaskReturn
0x12c1: Pop(1)
0x12c2: Return(); Pop(0)

0x12c3: PushEmpty()
0x12c4: PushEmpty(bool, object)
0x12c5: Stack[-3] = Stack[-1]
0x12c6: Call2 0x12ac

0x12c7: Stack[-2] = Stack[-4]
0x12c8: Pop(2)
0x12c9: Return(); Pop(0)

0x12ca: PushEmpty()
0x12cb: PushEmpty(object)
0x12cc: Stack[-2] = Stack[-1]
0x12cd: Call2 0x12bb

0x12ce: Pop(1)
0x12cf: Return(); Pop(0)

0x12d0: PushEmpty()
0x12d1: Stack[-2] = (bool) 0
0x12d2: Return(); Pop(0)

0x12d3: PushEmpty()
0x12d4: Return(); Pop(0)

0x12d5: Stack[-1] = (int) 515596
0x12d6: Return(); Pop(0)

0x12d7: Stack[-1] = (int) 514839
0x12d8: Return(); Pop(0)

0x12d9: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=1181
0x12da: Return(); Pop(0)

0x12db: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=1221
0x12dc: Return(); Pop(0)

0x12dd: Stack[-1] = (bool) 0
0x12de: Return(); Pop(0)

0x12df: Push(GlobalVars[0])
0x12e0: Stack[-1] = (bool) 0
0x12e1: GlobalVars[0] = Stack[-1]; Pop(1)
0x12e2: Return(); Pop(0)

0x12e3: PushEmpty(bool, bool)
0x12e4: Push(GlobalVars[0])
0x12e5: IF (Stack[-1] == 0) GOTO 0x12f0; Pop(1)

0x12e6: @ IsOverrideActive(Stack[-1])
0x12e7: Pop(0)
0x12e8: Pop(0); Push((bool) Stack[-1] == 0)
0x12e9: IF (Stack[-1] == 0) GOTO 0x12ee; Pop(1)

0x12ea: PushEmpty(object)
0x12eb: Stack[-4] = Stack[-1]
0x12ec: Call2 0x1046

0x12ed: Pop(1)
0x12ee: Return(); Pop(2)

0x12ef: GOTO 0x12f6

0x12f0: PushEmpty(int, object)
0x12f1: Stack[-5] = Stack[-1]
0x12f2: Push(-2, 1); TaskCall(0)
0x12f3: Call2 0x0

0x12f4: Pop(-2, 1); TaskReturn
0x12f5: Pop(2)
0x12f6: Return(); Pop(2)

0x12f7: PushEmpty(float)
0x12f8: Call2 0x1038

0x12f9: Pop(0)
0x12fa: Push((float)0.20000000298023224)
0x12fb: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x12fc: Return(); Pop(0)

0x12fd: PushEmpty()
0x12fe: PushEmpty(bool, object, object, float)
0x12ff: Stack[-7] = Stack[-3]
0x1300: Stack[-6] = Stack[-2]
0x1301: Stack[-1] = (float) 700.0
0x1302: Call2 0x1249

0x1303: Stack[-4] = Stack[-8]
0x1304: Pop(4)
0x1305: Return(); Pop(0)

0x1306: PushEmpty()
0x1307: PushEmpty(bool, object)
0x1308: Stack[-3] = Stack[-1]
0x1309: Call2 0xda8

0x130a: Pop(1)
0x130b: IF (Stack[-1] == 0) GOTO 0x1317; Pop(1)

0x130c: PushEmpty(object)
0x130d: Call2 0xf25

0x130e: Pop(0)
0x130f: Push((float)-0.07000000029802322)
0x1310: Push((bool) 1)
0x1311: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1312: Pop(3)
0x1313: PushEmpty(bool)
0x1314: Stack[-1] = (bool) 0
0x1315: Call2 0x109b

0x1316: Pop(1)
0x1317: PushEmpty()
0x1318: Call2 0x1083

0x1319: Pop(0)
0x131a: Push(GlobalVars[0])
0x131b: Stack[-1] = (bool) 1
0x131c: GlobalVars[0] = Stack[-1]; Pop(1)
0x131d: Push((int) 50)
0x131e: Push((int) 40)
0x131f: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1320: Pop(2)
0x1321: Return(); Pop(0)

