GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	W:Neutral
	W:all
	W:idle
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	A:SetMessage
	A:ClearReplies
	A:AddReply
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
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:4e00650075007400720061006c00000061006c006c000000690064006c00650000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565005365744d65737361676500436c6561725265706c696573004164645265706c790066006400690065000000476574506f736974696f6e0062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740068006500610064000000610074007400610063006b005f006f006e000000610074007400610063006b005f0073007400610079000000610074007400610063006b005f006f00660066000000430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a0020000000480061007300500072006f0070006500720074007900000048617350726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000047657450726f70657274790066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c0000006200720061006e0063006800000070006c0061007900650072000000720065007000750074006100740069006f006e000000470065006e00650072006100740065004d006f006e00650079003a00200069004d0069006e0020003e00200069004d006100780000004d006f006e006500790000005365744974656d4e616d65004f007200670061006e00000053657450726f7065727479004765744974656d4944006c00690076006500720000006b00690064006e0065007900000068006500610072007400000062006c006f006f00640000006c0065006d006f006e0000007200750073006b00000068006f006f006b00000073007900720069006e00670065000000770061007400630068000000720061007a006f0072000000620065006100640073000000620072006100630065006c006500740000006500610072005f00720069006e006700000067006f006c0064005f00720069006e0067000000730069006c007600650072005f00720069006e006700000066006c006f0077006500720000006800650061006c0074006800000075006e0068006f006c007300740065007200000070006c0061007900650072005f00730068006f007400000062006100740074006c00650000004973576561706f6e486f6c737465726564006800650061006c00000063006c00610073007300000072006100740000007200610074005f00620069006700000064006f0067000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000

Import:
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
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

RunOp = 0x273
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd0 Vars = (int, int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x1e6 Vars = (object)
		EVENT_6 Op = 0x1f4 Vars = ()
		EVENT_22 Op = 0x26d Vars = (object, int, float, float)
		EVENT_16 Op = 0x26f Vars = (object, string)
		EVENT_41 Op = 0x271 Vars = (object)
	GTASK_4 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x28b Vars = (object)
		EVENT_17 Op = 0x29f Vars = (object)
		EVENT_30 Op = 0x2b7 Vars = (object, object, bool)
		EVENT_40 Op = 0x2d3 Vars = (object)
		EVENT_42 Op = 0x2e7 Vars = (object, string)
		EVENT_26 Op = 0x30c Vars = (string)
		EVENT_1 Op = 0x31a Vars = (object)
		EVENT_3 Op = 0x32d Vars = (object)
		EVENT_7 Op = 0x333 Vars = (int)
		EVENT_6 Op = 0x33f Vars = ()
		EVENT_41 Op = 0x356 Vars = (object)
		EVENT_10 Op = 0x3c7 Vars = (object)
		EVENT_28 Op = 0x3cb Vars = ()
	GTASK_5  Params = 0
		EVENT_0 Op = 0x3e4 Vars = (object)
		EVENT_17 Op = 0x3f8 Vars = (object)
		EVENT_30 Op = 0x410 Vars = (object, object, bool)
		EVENT_40 Op = 0x42c Vars = (object)
		EVENT_42 Op = 0x440 Vars = (object, string)
		EVENT_26 Op = 0x465 Vars = (string)
		EVENT_6 Op = 0x473 Vars = ()
		EVENT_1 Op = 0x47a Vars = (object)
	GTASK_6 Vars = (object) Params = 1
		EVENT_0 Op = 0x516 Vars = (object)
		EVENT_17 Op = 0x52a Vars = (object)
		EVENT_30 Op = 0x542 Vars = (object, object, bool)
		EVENT_40 Op = 0x55e Vars = (object)
		EVENT_42 Op = 0x572 Vars = (object, string)
		EVENT_26 Op = 0x597 Vars = (string)
		EVENT_41 Op = 0x5b0 Vars = (object)
		EVENT_7 Op = 0x5b9 Vars = (int)
		EVENT_6 Op = 0x5dc Vars = ()
		EVENT_1 Op = 0x5e3 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x60d Vars = ()
		EVENT_7 Op = 0x67b Vars = (int)
		EVENT_41 Op = 0x6b6 Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x736 Vars = (int)
		EVENT_41 Op = 0x771 Vars = (object)
	GTASK_9 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x78a Vars = ()
		EVENT_7 Op = 0x7f8 Vars = (int)
		EVENT_41 Op = 0x833 Vars = (object)
	GTASK_10 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x84c Vars = ()
		EVENT_7 Op = 0x8ba Vars = (int)
		EVENT_41 Op = 0x8f5 Vars = (object)

Events:
EVENT_16 Op = 0xc77 Vars = (object, string)
EVENT_41 Op = 0xc84 Vars = (object)
EVENT_22 Op = 0xc8a Vars = (object, int, float, float)
EVENT_43 Op = 0xc92 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0xdfd

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral" // @poff=0
0xa: Call2 0xa92

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all") // @poff=16
0x12: Push("idle") // @poff=24
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0xdfd

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: @ lshStopAnimation()
0x20: Pop(0)
0x21: GOTO 0x24

0x22: @ StopAnimation()
0x23: Pop(0)
0x24: @ StopTrade()
0x25: Pop(0)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x29: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2a: PushEmpty(bool, object, float)
0x2b: Stack[-12] = Stack[-2]
0x2c: Stack[-1] = (float) 70.0
0x2d: Call2 0xa02

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0xdf7

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0xdf5

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0xdf9

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0xdfb

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0xb41

0x4b: Pop(0)
0x4c: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x4d: Pop(1)
0x4e: Stack[-2] = (int) -1
0x4f: @ IsOverrideActive(Stack[-3])
0x50: Pop(0)
0x51: Push(Stack[-3])
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: Stack[-10] = (int) -2
0x54: Return(); Pop(8)

0x55: @ DoDialog(Stack[-4])
0x56: Pop(0)
0x57: PushEmpty(object, object)
0x58: Stack[-11] = Stack[-2]
0x59: Stack[-6] = Stack[-1]
0x5a: Push(-2, 4); TaskCall(2)
0x5b: Call2 0x72

0x5c: Pop(-2, 4); TaskReturn
0x5d: Pop(2)
0x5e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x5f: Pop(0)
0x60: Pop(0); Push((bool) Stack[-1] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x62: @ sync()
0x63: Pop(0)
0x64: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x65: Pop(0)
0x66: GOTO 0x60

0x67: PushEmpty(object)
0x68: Stack[-10] = Stack[-1]
0x69: Call2 0xa46

0x6a: Pop(1)
0x6b: @ StopDialog(Stack[-4])
0x6c: Pop(0)
0x6d: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x6e: Pop(0)
0x6f: Stack[-2] = Stack[-10]
0x70: Return(); Pop(8)

0x71: Stack[-4] = 0
0x72: PushEmpty()
0x73: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x74: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x75: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x76: Push((int) 1)
0x77: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral" // @poff=0
0x7a: Call2 0xba

0x7b: Pop(1)
0x7c: Push((int) 538136)
0x7d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x7e: Pop(1)
0x7f: @@@ ClearReplies(); Obj=0 // @poff=134
0x80: Pop(0)
0x81: PushEmpty(bool)
0x82: Stack[-1] = (bool) 0
0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call2 0xb24

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0xb30

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Stack[-1] = (bool) 1
0x8e: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8f: Push((int) 538137)
0x90: Push((int) 40009)
0x91: Push((int) 40008)
0x92: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x93: Pop(3)
0x94: Push((int) 538165)
0x95: Push((int) -1)
0x96: Push((int) 40040)
0x97: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x98: Pop(3)
0x99: GOTO 0x9c

0x9a: Return(); Pop(0)

0x9b: GOTO 0x76

0x9c: PushEmpty(bool)
0x9d: Call2 0xdfd

0x9e: Pop(0)
0x9f: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa0: @ lshWaitForAnimEnd()
0xa1: Pop(0)
0xa2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: GOTO 0xaa

0xa5: PushEmpty(string)
0xa6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa7: Call2 0xa92

0xa8: Pop(1)
0xa9: GOTO 0xa0

0xaa: GOTO 0xb9

0xab: Push("all") // @poff=16
0xac: Push("idle") // @poff=24
0xad: @ PlayAnimation(Stack[-2], Stack[-1])
0xae: Pop(2)
0xaf: @ WaitForAnimEnd()
0xb0: Pop(0)
0xb1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: GOTO 0xb9

0xb4: Push("all") // @poff=16
0xb5: Push("idle") // @poff=24
0xb6: @ PlayAnimation(Stack[-2], Stack[-1])
0xb7: Pop(2)
0xb8: GOTO 0xaf

0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: PushEmpty(bool)
0xbc: Call2 0xdfd

0xbd: Pop(0)
0xbe: Pop(1); Push((bool) Stack[-1] == 0)
0xbf: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xc0: Return(); Pop(0)

0xc1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: Return(); Pop(0)

0xc4: PushEmpty(string, bool)
0xc5: Stack[-3] = Stack[-2]
0xc6: Push("") // @poff=13
0xc7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc9: Stack[-1] = (bool) 0
0xca: GOTO 0xcc

0xcb: Stack[-1] = (bool) 1
0xcc: Call2 0xa99

0xcd: Pop(2)
0xce: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcf: Return(); Pop(0)

0xd0: PushEmpty()
0xd1: Push((int) 1)
0xd2: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0xd3: PushEmpty()
0xd4: Call2 0xaaa

0xd5: Pop(0)
0xd6: Push((int) 40007)
0xd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xd9: PushEmpty(string)
0xda: Stack[-1] = "Neutral" // @poff=0
0xdb: Call2 0xba

0xdc: Pop(1)
0xdd: Push((int) 538136)
0xde: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0xdf: Pop(1)
0xe0: @@@ ClearReplies(); Obj=0 // @poff=134
0xe1: Pop(0)
0xe2: PushEmpty(bool)
0xe3: Stack[-1] = (bool) 0
0xe4: PushEmpty(bool, object)
0xe5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Call2 0xb24

0xe7: Pop(1)
0xe8: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe9: PushEmpty(bool, object)
0xea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Call2 0xb30

0xec: Pop(1)
0xed: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xee: Stack[-1] = (bool) 1
0xef: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf0: Push((int) 538137)
0xf1: Push((int) 40009)
0xf2: Push((int) 40008)
0xf3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xf4: Pop(3)
0xf5: Push((int) 538165)
0xf6: Push((int) -1)
0xf7: Push((int) 40040)
0xf8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Push((int) 40009)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Neutral" // @poff=0
0x100: Call2 0xba

0x101: Pop(1)
0x102: Push((int) 538138)
0x103: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x104: Pop(1)
0x105: @@@ ClearReplies(); Obj=0 // @poff=134
0x106: Pop(0)
0x107: Push((int) 538139)
0x108: Push((int) 40011)
0x109: Push((int) 40010)
0x10a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x10b: Pop(3)
0x10c: Push((int) 538164)
0x10d: Push((int) 40019)
0x10e: Push((int) 40038)
0x10f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 40011)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Neutral" // @poff=0
0x117: Call2 0xba

0x118: Pop(1)
0x119: Push((int) 538140)
0x11a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x11b: Pop(1)
0x11c: @@@ ClearReplies(); Obj=0 // @poff=134
0x11d: Pop(0)
0x11e: Push((int) 538141)
0x11f: Push((int) 40013)
0x120: Push((int) 40012)
0x121: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x122: Pop(3)
0x123: Push((int) 538163)
0x124: Push((int) 40019)
0x125: Push((int) 40036)
0x126: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: Push((int) 40013)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Neutral" // @poff=0
0x12e: Call2 0xba

0x12f: Pop(1)
0x130: Push((int) 538142)
0x131: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x132: Pop(1)
0x133: @@@ ClearReplies(); Obj=0 // @poff=134
0x134: Pop(0)
0x135: Push((int) 538143)
0x136: Push((int) 40015)
0x137: Push((int) 40014)
0x138: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x139: Pop(3)
0x13a: Push((int) 538162)
0x13b: Push((int) 40015)
0x13c: Push((int) 40034)
0x13d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 40015)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral" // @poff=0
0x145: Call2 0xba

0x146: Pop(1)
0x147: Push((int) 538144)
0x148: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x149: Pop(1)
0x14a: @@@ ClearReplies(); Obj=0 // @poff=134
0x14b: Pop(0)
0x14c: Push((int) 538145)
0x14d: Push((int) 40017)
0x14e: Push((int) 40016)
0x14f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x150: Pop(3)
0x151: Push((int) 538157)
0x152: Push((int) 40017)
0x153: Push((int) 40028)
0x154: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x155: Pop(3)
0x156: Push((int) 538158)
0x157: Push((int) 40031)
0x158: Push((int) 40030)
0x159: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x15a: Pop(3)
0x15b: Return(); Pop(0)

0x15c: Push((int) 40031)
0x15d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral" // @poff=0
0x161: Call2 0xba

0x162: Pop(1)
0x163: Push((int) 538159)
0x164: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x165: Pop(1)
0x166: @@@ ClearReplies(); Obj=0 // @poff=134
0x167: Pop(0)
0x168: Push((int) 538160)
0x169: Push((int) -1)
0x16a: Push((int) 40032)
0x16b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x16c: Pop(3)
0x16d: Push((int) 538161)
0x16e: Push((int) -1)
0x16f: Push((int) 40033)
0x170: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Push((int) 40017)
0x174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral" // @poff=0
0x178: Call2 0xba

0x179: Pop(1)
0x17a: Push((int) 538146)
0x17b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x17c: Pop(1)
0x17d: @@@ ClearReplies(); Obj=0 // @poff=134
0x17e: Pop(0)
0x17f: Push((int) 538147)
0x180: Push((int) 40019)
0x181: Push((int) 40018)
0x182: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 40019)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral" // @poff=0
0x18a: Call2 0xba

0x18b: Pop(1)
0x18c: Push((int) 538148)
0x18d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x18e: Pop(1)
0x18f: @@@ ClearReplies(); Obj=0 // @poff=134
0x190: Pop(0)
0x191: Push((int) 538149)
0x192: Push((int) 40021)
0x193: Push((int) 40020)
0x194: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x195: Pop(3)
0x196: Push((int) 538156)
0x197: Push((int) -1)
0x198: Push((int) 40027)
0x199: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 40021)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral" // @poff=0
0x1a1: Call2 0xba

0x1a2: Pop(1)
0x1a3: Push((int) 538150)
0x1a4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x1a5: Pop(1)
0x1a6: @@@ ClearReplies(); Obj=0 // @poff=134
0x1a7: Pop(0)
0x1a8: Push((int) 538151)
0x1a9: Push((int) -1)
0x1aa: Push((int) 40022)
0x1ab: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x1ac: Pop(3)
0x1ad: Push((int) 538152)
0x1ae: Push((int) 40024)
0x1af: Push((int) 40023)
0x1b0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x1b1: Pop(3)
0x1b2: Return(); Pop(0)

0x1b3: Push((int) 40024)
0x1b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1b6: PushEmpty(string)
0x1b7: Stack[-1] = "Neutral" // @poff=0
0x1b8: Call2 0xba

0x1b9: Pop(1)
0x1ba: Push((int) 538153)
0x1bb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x1bc: Pop(1)
0x1bd: @@@ ClearReplies(); Obj=0 // @poff=134
0x1be: Pop(0)
0x1bf: Push((int) 538154)
0x1c0: Push((int) -1)
0x1c1: Push((int) 40025)
0x1c2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x1c3: Pop(3)
0x1c4: Push((int) 538155)
0x1c5: Push((int) -1)
0x1c6: Push((int) 40026)
0x1c7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x1c8: Pop(3)
0x1c9: Return(); Pop(0)

0x1ca: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1cb: PushEmpty(bool)
0x1cc: Call2 0xdfd

0x1cd: Pop(0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cf: @ lshStopAnimation()
0x1d0: Pop(0)
0x1d1: GOTO 0x1d4

0x1d2: @ StopAnimation()
0x1d3: Pop(0)
0x1d4: Return(); Pop(0)

0x1d5: GOTO 0xd1

0x1d6: Return(); Pop(0)

0x1d7: PushEmpty()
0x1d8: EventDisable(0)
0x1d9: PushEmpty(object)
0x1da: Stack[-2] = Stack[-1]
0x1db: Call2 0x1f8

0x1dc: Pop(1)
0x1dd: PushEmpty(object)
0x1de: Stack[-2] = Stack[-1]
0x1df: Call2 0xe3a

0x1e0: Pop(1)
0x1e1: EventEnable(0)
0x1e2: @ Hold()
0x1e3: Pop(0)
0x1e4: GOTO 0x1e2

0x1e5: Return(); Pop(0)

0x1e6: PushEmpty(int, int)
0x1e7: PushEmpty(int, object)
0x1e8: Stack[-5] = Stack[-1]
0x1e9: Call2 0xdb5

0x1ea: Stack[-2] = Stack[-3]
0x1eb: Pop(2)
0x1ec: Push((int) 0)
0x1ed: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ef: PushEmpty(object)
0x1f0: Stack[-4] = Stack[-1]
0x1f1: Call2 0xdb8

0x1f2: Pop(1)
0x1f3: Return(); Pop(2)

0x1f4: PushEmpty()
0x1f5: Call2 0xdbe

0x1f6: Pop(0)
0x1f7: Return(); Pop(0)

0x1f8: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x1f9: Pop(0); PushNull((bool) Stack[-21] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fb: PushEmpty(string)
0x1fc: Stack[-1] = "fdie" // @poff=156
0x1fd: Call2 0x253

0x1fe: Pop(1)
0x1ff: GOTO 0x252

0x200: @@ GetPosition(Stack[-10]); Obj=21 // @poff=166
0x201: Pop(0)
0x202: @ GetPosition(Stack[-9])
0x203: Pop(0)
0x204: @ GetDirection(Stack[-8])
0x205: Pop(0)
0x206: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x207: Push(CvectorIndex(Stack[-7], 0))
0x208: Push(CvectorIndex(Stack[-9], 0))
0x209: Pop(2); Push(Stack[-2] * Stack[-1]);
0x20a: Push(CvectorIndex(Stack[-8], 2))
0x20b: Push(CvectorIndex(Stack[-10], 2))
0x20c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x20d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x20e: Push((int) 0)
0x20f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x211: Stack[-6] = "fdie" // @poff=156
0x212: GOTO 0x214

0x213: Stack[-6] = "bdie" // @poff=178
0x214: @ RemoveRTEnvelope()
0x215: Pop(0)
0x216: @ SetDeathState()
0x217: Pop(0)
0x218: @ Stop()
0x219: Pop(0)
0x21a: @ StopAsync()
0x21b: Pop(0)
0x21c: Stack[-21] = Stack[-5]
0x21d: Push("GetScriptProperty") // @poff=188
0x21e: Push((int) 2)
0x21f: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x220: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x221: Push("Owner") // @poff=224
0x222: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=236
0x223: Pop(1)
0x224: Push(Stack[-4])
0x225: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x226: Push("Owner") // @poff=224
0x227: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=254
0x228: Pop(1)
0x229: Pop(0); PushNull((bool) Stack[-5] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Stack[-21] = Stack[-5]
0x22c: Push("@GetEyesHeight") // @poff=272
0x22d: Push((int) 1)
0x22e: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x22f: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x230: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=302
0x231: Pop(0)
0x232: Stack[-1] = [0.0, 0.0, 0.0]
0x233: Push(CvectorIndex(Stack[-1], 1))
0x234: Stack[-3] = Stack[-1]
0x235: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x236: Push("head") // @poff=316
0x237: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x238: Pop(1)
0x239: Stack[-3] = (bool) 1
0x23a: GOTO 0x23c

0x23b: Stack[-3] = (bool) 0
0x23c: PushEmpty(string)
0x23d: Stack[-7] = Stack[-1]
0x23e: Call2 0xab1

0x23f: Pop(1)
0x240: Push("all") // @poff=16
0x241: @ PlayAnimation(Stack[-1], Stack[-7])
0x242: Pop(1)
0x243: @ WaitForAnimEnd()
0x244: Pop(0)
0x245: Push(Stack[-3])
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: @ StopAsync()
0x248: Pop(0)
0x249: Push("head") // @poff=316
0x24a: @ UnlookAsync(Stack[-1])
0x24b: Pop(1)
0x24c: Push("all") // @poff=16
0x24d: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x24e: Pop(1)
0x24f: @ RemoveEnvelope()
0x250: Pop(0)
0x251: Stack[-5] = 0
0x252: Return(); Pop(20)

0x253: PushEmpty()
0x254: @ RemoveRTEnvelope()
0x255: Pop(0)
0x256: @ SetDeathState()
0x257: Pop(0)
0x258: @ Stop()
0x259: Pop(0)
0x25a: @ StopAsync()
0x25b: Pop(0)
0x25c: @ StopSecondaryAnimation()
0x25d: Pop(0)
0x25e: PushEmpty(string)
0x25f: Stack[-2] = Stack[-1]
0x260: Call2 0xab1

0x261: Pop(1)
0x262: Push("all") // @poff=16
0x263: @ PlayAnimation(Stack[-1], Stack[-2])
0x264: Pop(1)
0x265: @ WaitForAnimEnd()
0x266: Pop(0)
0x267: Push("all") // @poff=16
0x268: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x269: Pop(1)
0x26a: @ RemoveEnvelope()
0x26b: Pop(0)
0x26c: Return(); Pop(0)

0x26d: PushEmpty()
0x26e: Return(); Pop(0)

0x26f: PushEmpty()
0x270: Return(); Pop(0)

0x271: PushEmpty()
0x272: Return(); Pop(0)

0x273: Push((bool) 1)
0x274: @ SensePlayerOnly(Stack[-1])
0x275: Pop(1)
0x276: PushEmpty()
0x277: Call2 0xdff

0x278: Pop(0)
0x279: PushEmpty()
0x27a: Call2 0x282

0x27b: Pop(0)
0x27c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x27d: PushEmpty()
0x27e: Call2 0x387

0x27f: Pop(0)
0x280: GOTO 0x27c

0x281: Return(); Pop(0)

0x282: PushEmpty(bool)
0x283: Call2 0x9fd

0x284: Pop(0)
0x285: Pop(1); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x287: PushEmpty()
0x288: Call2 0xdbe

0x289: Pop(0)
0x28a: Return(); Pop(0)

0x28b: PushEmpty(int, int)
0x28c: PushEmpty(int, object)
0x28d: Stack[-5] = Stack[-1]
0x28e: Call2 0xdb5

0x28f: Stack[-2] = Stack[-3]
0x290: Pop(2)
0x291: Push((int) 0)
0x292: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x294: Push((int) 1)
0x295: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x297: PushEmpty()
0x298: Call2 0x346

0x299: Pop(0)
0x29a: PushEmpty(object)
0x29b: Stack[-4] = Stack[-1]
0x29c: Call2 0xdb8

0x29d: Pop(1)
0x29e: Return(); Pop(2)

0x29f: PushEmpty(int, int)
0x2a0: PushEmpty(object)
0x2a1: Stack[-4] = Stack[-1]
0x2a2: Call2 0xcf2

0x2a3: Pop(1)
0x2a4: PushEmpty(int, object)
0x2a5: Stack[-5] = Stack[-1]
0x2a6: Call2 0xd45

0x2a7: Stack[-2] = Stack[-3]
0x2a8: Pop(2)
0x2a9: Push((int) 0)
0x2aa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2ac: Push((int) 1)
0x2ad: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2af: PushEmpty()
0x2b0: Call2 0x346

0x2b1: Pop(0)
0x2b2: PushEmpty(object)
0x2b3: Stack[-4] = Stack[-1]
0x2b4: Call2 0xd4f

0x2b5: Pop(1)
0x2b6: Return(); Pop(2)

0x2b7: PushEmpty(int, int)
0x2b8: PushEmpty(bool, object, object, bool)
0x2b9: Stack[-9] = Stack[-3]
0x2ba: Stack[-8] = Stack[-2]
0x2bb: Stack[-7] = Stack[-1]
0x2bc: Call2 0xe31

0x2bd: Pop(3)
0x2be: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2bf: PushEmpty(int, object, bool)
0x2c0: Stack[-8] = Stack[-2]
0x2c1: Stack[-6] = Stack[-1]
0x2c2: Call2 0xd57

0x2c3: Stack[-3] = Stack[-4]
0x2c4: Pop(3)
0x2c5: Push((int) 0)
0x2c6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2c8: Push((int) 1)
0x2c9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cb: PushEmpty()
0x2cc: Call2 0x346

0x2cd: Pop(0)
0x2ce: PushEmpty(object)
0x2cf: Stack[-6] = Stack[-1]
0x2d0: Call2 0xd61

0x2d1: Pop(1)
0x2d2: Return(); Pop(2)

0x2d3: PushEmpty(int, int)
0x2d4: PushEmpty(int, object)
0x2d5: Stack[-5] = Stack[-1]
0x2d6: Call2 0xdab

0x2d7: Stack[-2] = Stack[-3]
0x2d8: Pop(2)
0x2d9: Push((int) 0)
0x2da: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2dc: Push((int) 1)
0x2dd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2df: PushEmpty()
0x2e0: Call2 0x346

0x2e1: Pop(0)
0x2e2: PushEmpty(object)
0x2e3: Stack[-4] = Stack[-1]
0x2e4: Call2 0xdae

0x2e5: Pop(1)
0x2e6: Return(); Pop(2)

0x2e7: PushEmpty(int, int)
0x2e8: PushEmpty(bool, object, string)
0x2e9: Stack[-7] = Stack[-2]
0x2ea: Stack[-6] = Stack[-1]
0x2eb: Call2 0xc9c

0x2ec: Pop(2)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2ee: PushEmpty()
0x2ef: Call2 0x346

0x2f0: Pop(0)
0x2f1: PushEmpty(object, string)
0x2f2: Stack[-6] = Stack[-2]
0x2f3: Stack[-5] = Stack[-1]
0x2f4: Call2 0xcbc

0x2f5: Pop(2)
0x2f6: GOTO 0x30b

0x2f7: PushEmpty(int, string, object)
0x2f8: Stack[-6] = Stack[-2]
0x2f9: Stack[-7] = Stack[-1]
0x2fa: Call2 0xdb0

0x2fb: Stack[-3] = Stack[-4]
0x2fc: Pop(3)
0x2fd: Push((int) 0)
0x2fe: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x300: Push((int) 1)
0x301: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x303: PushEmpty()
0x304: Call2 0x346

0x305: Pop(0)
0x306: PushEmpty(string, object)
0x307: Stack[-5] = Stack[-2]
0x308: Stack[-6] = Stack[-1]
0x309: Call2 0xdb3

0x30a: Pop(2)
0x30b: Return(); Pop(2)

0x30c: PushEmpty()
0x30d: PushEmpty(bool, string)
0x30e: Stack[-3] = Stack[-1]
0x30f: Call2 0xcff

0x310: Pop(1)
0x311: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x312: PushEmpty()
0x313: Call2 0x346

0x314: Pop(0)
0x315: PushEmpty(string)
0x316: Stack[-2] = Stack[-1]
0x317: Call2 0xd0f

0x318: Pop(1)
0x319: Return(); Pop(0)

0x31a: PushEmpty()
0x31b: PushEmpty(bool, object)
0x31c: Stack[-3] = Stack[-1]
0x31d: Call2 0xcd5

0x31e: Pop(1)
0x31f: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x320: PushEmpty()
0x321: Call2 0x346

0x322: Pop(0)
0x323: PushEmpty(object)
0x324: Stack[-2] = Stack[-1]
0x325: Call2 0xcec

0x326: Pop(1)
0x327: GOTO 0x32c

0x328: PushEmpty(object)
0x329: Stack[-2] = Stack[-1]
0x32a: Call2 0x35f

0x32b: Pop(1)
0x32c: Return(); Pop(0)

0x32d: PushEmpty()
0x32e: PushEmpty(object)
0x32f: Stack[-2] = Stack[-1]
0x330: Call2 0x35f

0x331: Pop(1)
0x332: Return(); Pop(0)

0x333: PushEmpty()
0x334: Push((int) 110)
0x335: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: Return(); Pop(0)

0x338: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x339: Push((int) 110)
0x33a: @ KillTimer(Stack[-1])
0x33b: Pop(1)
0x33c: @ ResetAAS()
0x33d: Pop(0)
0x33e: Return(); Pop(0)

0x33f: PushEmpty()
0x340: Call2 0x346

0x341: Pop(0)
0x342: PushEmpty()
0x343: Call2 0xdbe

0x344: Pop(0)
0x345: Return(); Pop(0)

0x346: Push((int) 110)
0x347: @ KillTimer(Stack[-1])
0x348: Pop(1)
0x349: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x34a: PushEmpty()
0x34b: Call2 0x3ce

0x34c: Pop(0)
0x34d: Return(); Pop(0)

0x34e: Push((int) 110)
0x34f: @ KillTimer(Stack[-1])
0x350: Pop(1)
0x351: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x352: PushEmpty()
0x353: Call2 0x3d5

0x354: Pop(0)
0x355: Return(); Pop(0)

0x356: PushEmpty()
0x357: PushEmpty()
0x358: Call2 0x346

0x359: Pop(0)
0x35a: PushEmpty(object)
0x35b: Stack[-2] = Stack[-1]
0x35c: Call2 0xc84

0x35d: Pop(1)
0x35e: Return(); Pop(0)

0x35f: PushEmpty(bool, int, bool, int)
0x360: PushEmpty(bool, object)
0x361: Stack[-7] = Stack[-1]
0x362: Call2 0x95c

0x363: Pop(1)
0x364: Pop(1); Push((bool) Stack[-1] == 0)
0x365: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x366: Return(); Pop(4)

0x367: Push( Stack[2 + Tasks[-1].StackPointer] )
0x368: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x369: Return(); Pop(4)

0x36a: @ IsPlayerActor(Stack[-5], Stack[-2])
0x36b: Pop(0)
0x36c: Pop(0); Push((bool) Stack[-2] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: Return(); Pop(4)

0x36f: PushEmpty(int, object)
0x370: Stack[-7] = Stack[-1]
0x371: Call2 0xd34

0x372: Stack[-2] = Stack[-3]
0x373: Pop(2)
0x374: Push((int) 0)
0x375: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x376: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x377: Push((int) 1)
0x378: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37a: PushEmpty()
0x37b: Call2 0x34e

0x37c: Pop(0)
0x37d: PushEmpty(object)
0x37e: Stack[-6] = Stack[-1]
0x37f: Call2 0xd3d

0x380: Pop(1)
0x381: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x382: Push((int) 110)
0x383: Push((float)10.0)
0x384: @ SetTimer(Stack[-2], Stack[-1])
0x385: Pop(2)
0x386: Return(); Pop(4)

0x387: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x388: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x389: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x38a: Push((float)0.5)
0x38b: @ rand(Stack[-7], Stack[-1])
0x38c: Pop(1)
0x38d: @ Sleep(Stack[-6])
0x38e: Pop(0)
0x38f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x390: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x391: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x393: @ GetPosition(Stack[-4])
0x394: Pop(0)
0x395: PushEmpty(float)
0x396: Call2 0x3c2

0x397: Pop(0)
0x398: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x399: Pop(1)
0x39a: Push(Stack[-3])
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: GOTO 0x3a1

0x39d: Push((int) 1)
0x39e: @ Sleep(Stack[-1])
0x39f: Pop(1)
0x3a0: GOTO 0x393

0x3a1: GOTO 0x3a3

0x3a2: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x3a3: PushEmpty(object, cvector)
0x3a4: Stack[-7] = Stack[-1]
0x3a5: Call2 0x3de

0x3a6: Stack[-2] = Stack[-4]
0x3a7: Pop(2)
0x3a8: Pop(0); Push(( Stack[-2] != 0 )
0x3a9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3aa: @ RotatePath(Stack[-2], Stack[-1])
0x3ab: Pop(0)
0x3ac: Push(Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ae: PushEmpty(bool)
0x3af: Call2 0x3dc

0x3b0: Pop(0)
0x3b1: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x3b2: Pop(1)
0x3b3: Stack[-2] = 0
0x3b4: Push(Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b6: PushEmpty()
0x3b7: Push(-0, 0); TaskCall(5)
0x3b8: Call2 0x488

0x3b9: Pop(-0, 0); TaskReturn
0x3ba: Pop(0)
0x3bb: GOTO 0x3bf

0x3bc: Push((int) 1)
0x3bd: @ Sleep(Stack[-1])
0x3be: Pop(1)
0x3bf: Stack[-2] = 0
0x3c0: GOTO 0x38f

0x3c1: Return(); Pop(12)

0x3c2: PushEmpty(float, float)
0x3c3: @ GetCameraFarDistance(Stack[-1])
0x3c4: Pop(0)
0x3c5: Stack[-1] = Stack[-3]
0x3c6: Return(); Pop(2)

0x3c7: PushEmpty()
0x3c8: @ RequestClearPath(Stack[-1])
0x3c9: Pop(0)
0x3ca: Return(); Pop(0)

0x3cb: @ Stop()
0x3cc: Pop(0)
0x3cd: Return(); Pop(0)

0x3ce: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3cf: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x3d0: @ Stop()
0x3d1: Pop(0)
0x3d2: @ StopGroup0()
0x3d3: Pop(0)
0x3d4: Return(); Pop(0)

0x3d5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3d6: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x3d7: @ Stop()
0x3d8: Pop(0)
0x3d9: @ StopGroup0()
0x3da: Pop(0)
0x3db: Return(); Pop(0)

0x3dc: Stack[-1] = (bool) 0
0x3dd: Return(); Pop(0)

0x3de: PushEmpty(object, object)
0x3df: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x3e0: Pop(0)
0x3e1: Stack[-1] = Stack[-4]
0x3e2: Return(); Pop(2)

0x3e3: Stack[-1] = 0
0x3e4: PushEmpty(int, int)
0x3e5: PushEmpty(int, object)
0x3e6: Stack[-5] = Stack[-1]
0x3e7: Call2 0xdb5

0x3e8: Stack[-2] = Stack[-3]
0x3e9: Pop(2)
0x3ea: Push((int) 0)
0x3eb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3ed: Push((int) 1)
0x3ee: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f0: PushEmpty()
0x3f1: Call2 0x4d9

0x3f2: Pop(0)
0x3f3: PushEmpty(object)
0x3f4: Stack[-4] = Stack[-1]
0x3f5: Call2 0xdb8

0x3f6: Pop(1)
0x3f7: Return(); Pop(2)

0x3f8: PushEmpty(int, int)
0x3f9: PushEmpty(object)
0x3fa: Stack[-4] = Stack[-1]
0x3fb: Call2 0xcf2

0x3fc: Pop(1)
0x3fd: PushEmpty(int, object)
0x3fe: Stack[-5] = Stack[-1]
0x3ff: Call2 0xd45

0x400: Stack[-2] = Stack[-3]
0x401: Pop(2)
0x402: Push((int) 0)
0x403: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x405: Push((int) 1)
0x406: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x408: PushEmpty()
0x409: Call2 0x4d9

0x40a: Pop(0)
0x40b: PushEmpty(object)
0x40c: Stack[-4] = Stack[-1]
0x40d: Call2 0xd4f

0x40e: Pop(1)
0x40f: Return(); Pop(2)

0x410: PushEmpty(int, int)
0x411: PushEmpty(bool, object, object, bool)
0x412: Stack[-9] = Stack[-3]
0x413: Stack[-8] = Stack[-2]
0x414: Stack[-7] = Stack[-1]
0x415: Call2 0xe31

0x416: Pop(3)
0x417: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x418: PushEmpty(int, object, bool)
0x419: Stack[-8] = Stack[-2]
0x41a: Stack[-6] = Stack[-1]
0x41b: Call2 0xd57

0x41c: Stack[-3] = Stack[-4]
0x41d: Pop(3)
0x41e: Push((int) 0)
0x41f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x421: Push((int) 1)
0x422: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x424: PushEmpty()
0x425: Call2 0x4d9

0x426: Pop(0)
0x427: PushEmpty(object)
0x428: Stack[-6] = Stack[-1]
0x429: Call2 0xd61

0x42a: Pop(1)
0x42b: Return(); Pop(2)

0x42c: PushEmpty(int, int)
0x42d: PushEmpty(int, object)
0x42e: Stack[-5] = Stack[-1]
0x42f: Call2 0xdab

0x430: Stack[-2] = Stack[-3]
0x431: Pop(2)
0x432: Push((int) 0)
0x433: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x435: Push((int) 1)
0x436: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x438: PushEmpty()
0x439: Call2 0x4d9

0x43a: Pop(0)
0x43b: PushEmpty(object)
0x43c: Stack[-4] = Stack[-1]
0x43d: Call2 0xdae

0x43e: Pop(1)
0x43f: Return(); Pop(2)

0x440: PushEmpty(int, int)
0x441: PushEmpty(bool, object, string)
0x442: Stack[-7] = Stack[-2]
0x443: Stack[-6] = Stack[-1]
0x444: Call2 0xc9c

0x445: Pop(2)
0x446: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x447: PushEmpty()
0x448: Call2 0x4d9

0x449: Pop(0)
0x44a: PushEmpty(object, string)
0x44b: Stack[-6] = Stack[-2]
0x44c: Stack[-5] = Stack[-1]
0x44d: Call2 0xcbc

0x44e: Pop(2)
0x44f: GOTO 0x464

0x450: PushEmpty(int, string, object)
0x451: Stack[-6] = Stack[-2]
0x452: Stack[-7] = Stack[-1]
0x453: Call2 0xdb0

0x454: Stack[-3] = Stack[-4]
0x455: Pop(3)
0x456: Push((int) 0)
0x457: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x459: Push((int) 1)
0x45a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45c: PushEmpty()
0x45d: Call2 0x4d9

0x45e: Pop(0)
0x45f: PushEmpty(string, object)
0x460: Stack[-5] = Stack[-2]
0x461: Stack[-6] = Stack[-1]
0x462: Call2 0xdb3

0x463: Pop(2)
0x464: Return(); Pop(2)

0x465: PushEmpty()
0x466: PushEmpty(bool, string)
0x467: Stack[-3] = Stack[-1]
0x468: Call2 0xcff

0x469: Pop(1)
0x46a: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46b: PushEmpty()
0x46c: Call2 0x4d9

0x46d: Pop(0)
0x46e: PushEmpty(string)
0x46f: Stack[-2] = Stack[-1]
0x470: Call2 0xd0f

0x471: Pop(1)
0x472: Return(); Pop(0)

0x473: PushEmpty()
0x474: Call2 0x4d9

0x475: Pop(0)
0x476: PushEmpty()
0x477: Call2 0xdbe

0x478: Pop(0)
0x479: Return(); Pop(0)

0x47a: PushEmpty()
0x47b: PushEmpty(bool, object)
0x47c: Stack[-3] = Stack[-1]
0x47d: Call2 0xcd5

0x47e: Pop(1)
0x47f: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x480: PushEmpty()
0x481: Call2 0x4d9

0x482: Pop(0)
0x483: PushEmpty(object)
0x484: Stack[-2] = Stack[-1]
0x485: Call2 0xcec

0x486: Pop(1)
0x487: Return(); Pop(0)

0x488: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x489: @ WaitForAnimEnd()
0x48a: Pop(0)
0x48b: PushEmpty(bool)
0x48c: Call2 0x9fd

0x48d: Pop(0)
0x48e: Pop(1); Push((bool) Stack[-1] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x490: Return(); Pop(14)

0x491: PushEmpty(int)
0x492: Call2 0xd23

0x493: Stack[-1] = Stack[-8]
0x494: Pop(1)
0x495: Stack[-6] = (int) 0
0x496: PushEmpty(bool)
0x497: Stack[-1] = (bool) 0
0x498: Push((int) 5)
0x499: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x49a: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49b: PushEmpty(bool)
0x49c: Call2 0x9fd

0x49d: Pop(0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: Stack[-1] = (bool) 1
0x4a0: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4a1: Push((int) 3)
0x4a2: @ irand(Stack[-6], Stack[-1])
0x4a3: Pop(1)
0x4a4: Push((int) 0)
0x4a5: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4a7: Push(Stack[-7])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4a9: @ irand(Stack[-4], Stack[-7])
0x4aa: Pop(0)
0x4ab: Push("all") // @poff=16
0x4ac: PushEmpty(string, int)
0x4ad: Stack[-7] = Stack[-1]
0x4ae: Call2 0xd1c

0x4af: Pop(1)
0x4b0: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b1: Pop(2)
0x4b2: @ WaitForAnimEnd(Stack[-3])
0x4b3: Pop(0)
0x4b4: Pop(0); Push((bool) Stack[-3] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b6: GOTO 0x4d4

0x4b7: GOTO 0x4c9

0x4b8: Push((int) 1)
0x4b9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4bb: Push((int) 4)
0x4bc: @ rand(Stack[-3], Stack[-1])
0x4bd: Pop(1)
0x4be: Push((int) 1)
0x4bf: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4c0: @ Sleep(Stack[-1], Stack[-2])
0x4c1: Pop(1)
0x4c2: Pop(0); Push((bool) Stack[-1] == 0)
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c4: GOTO 0x4d4

0x4c5: GOTO 0x4c9

0x4c6: Push(Stack[-6])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c8: GOTO 0x4d4

0x4c9: PushEmpty(bool)
0x4ca: Call2 0x4d7

0x4cb: Pop(0)
0x4cc: Pop(1); Push((bool) Stack[-1] == 0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: GOTO 0x4d4

0x4cf: @ ResetAAS()
0x4d0: Pop(0)
0x4d1: Push((int) 1)
0x4d2: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4d3: GOTO 0x496

0x4d4: @ ResetAAS()
0x4d5: Pop(0)
0x4d6: Return(); Pop(14)

0x4d7: Stack[-1] = (bool) 1
0x4d8: Return(); Pop(0)

0x4d9: @ StopAnimation()
0x4da: Pop(0)
0x4db: @ StopGroup0()
0x4dc: Pop(0)
0x4dd: Return(); Pop(0)

0x4de: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x4df: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x4e0: PushEmpty()
0x4e1: Call2 0x511

0x4e2: Pop(0)
0x4e3: @ GetDirection(Stack[-3])
0x4e4: Pop(0)
0x4e5: PushEmpty(cvector, object)
0x4e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e7: Call2 0x913

0x4e8: Stack[-2] = Stack[-4]
0x4e9: Pop(2)
0x4ea: PushEmpty(float, cvector, cvector)
0x4eb: Stack[-6] = Stack[-2]
0x4ec: Stack[-5] = Stack[-1]
0x4ed: Call2 0xb05

0x4ee: Pop(2)
0x4ef: Push((int) 0)
0x4f0: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f2: PushEmpty(object)
0x4f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f4: Call2 0x9f2

0x4f5: Pop(1)
0x4f6: Stack[-1] = (bool) 1
0x4f7: GOTO 0x4fb

0x4f8: Push((float)1.5)
0x4f9: @ Sleep(Stack[-1], Stack[-2])
0x4fa: Pop(1)
0x4fb: Push(Stack[-1])
0x4fc: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x4fd: PushEmpty(object)
0x4fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ff: Call2 0x9f2

0x500: Pop(1)
0x501: Push((int) 111)
0x502: Push((float)0.5)
0x503: @ SetTimer(Stack[-2], Stack[-1])
0x504: Pop(2)
0x505: Push((float)5.0)
0x506: @ Sleep(Stack[-1])
0x507: Pop(1)
0x508: Push((int) 111)
0x509: @ KillTimer(Stack[-1])
0x50a: Pop(1)
0x50b: @ StopAsync()
0x50c: Pop(0)
0x50d: Push("head") // @poff=316
0x50e: @ UnlookAsync(Stack[-1])
0x50f: Pop(1)
0x510: Return(); Pop(6)

0x511: PushEmpty(object)
0x512: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x513: Call2 0xa9f

0x514: Pop(1)
0x515: Return(); Pop(0)

0x516: PushEmpty(int, int)
0x517: PushEmpty(int, object)
0x518: Stack[-5] = Stack[-1]
0x519: Call2 0xdb5

0x51a: Stack[-2] = Stack[-3]
0x51b: Pop(2)
0x51c: Push((int) 0)
0x51d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x51f: Push((int) 1)
0x520: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x521: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x522: PushEmpty()
0x523: Call2 0x5a5

0x524: Pop(0)
0x525: PushEmpty(object)
0x526: Stack[-4] = Stack[-1]
0x527: Call2 0xdb8

0x528: Pop(1)
0x529: Return(); Pop(2)

0x52a: PushEmpty(int, int)
0x52b: PushEmpty(object)
0x52c: Stack[-4] = Stack[-1]
0x52d: Call2 0xcf2

0x52e: Pop(1)
0x52f: PushEmpty(int, object)
0x530: Stack[-5] = Stack[-1]
0x531: Call2 0xd45

0x532: Stack[-2] = Stack[-3]
0x533: Pop(2)
0x534: Push((int) 0)
0x535: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x536: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x537: Push((int) 1)
0x538: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x539: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53a: PushEmpty()
0x53b: Call2 0x5a5

0x53c: Pop(0)
0x53d: PushEmpty(object)
0x53e: Stack[-4] = Stack[-1]
0x53f: Call2 0xd4f

0x540: Pop(1)
0x541: Return(); Pop(2)

0x542: PushEmpty(int, int)
0x543: PushEmpty(bool, object, object, bool)
0x544: Stack[-9] = Stack[-3]
0x545: Stack[-8] = Stack[-2]
0x546: Stack[-7] = Stack[-1]
0x547: Call2 0xe31

0x548: Pop(3)
0x549: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x54a: PushEmpty(int, object, bool)
0x54b: Stack[-8] = Stack[-2]
0x54c: Stack[-6] = Stack[-1]
0x54d: Call2 0xd57

0x54e: Stack[-3] = Stack[-4]
0x54f: Pop(3)
0x550: Push((int) 0)
0x551: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x552: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x553: Push((int) 1)
0x554: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x555: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x556: PushEmpty()
0x557: Call2 0x5a5

0x558: Pop(0)
0x559: PushEmpty(object)
0x55a: Stack[-6] = Stack[-1]
0x55b: Call2 0xd61

0x55c: Pop(1)
0x55d: Return(); Pop(2)

0x55e: PushEmpty(int, int)
0x55f: PushEmpty(int, object)
0x560: Stack[-5] = Stack[-1]
0x561: Call2 0xdab

0x562: Stack[-2] = Stack[-3]
0x563: Pop(2)
0x564: Push((int) 0)
0x565: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x567: Push((int) 1)
0x568: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x569: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56a: PushEmpty()
0x56b: Call2 0x5a5

0x56c: Pop(0)
0x56d: PushEmpty(object)
0x56e: Stack[-4] = Stack[-1]
0x56f: Call2 0xdae

0x570: Pop(1)
0x571: Return(); Pop(2)

0x572: PushEmpty(int, int)
0x573: PushEmpty(bool, object, string)
0x574: Stack[-7] = Stack[-2]
0x575: Stack[-6] = Stack[-1]
0x576: Call2 0xc9c

0x577: Pop(2)
0x578: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x579: PushEmpty()
0x57a: Call2 0x5a5

0x57b: Pop(0)
0x57c: PushEmpty(object, string)
0x57d: Stack[-6] = Stack[-2]
0x57e: Stack[-5] = Stack[-1]
0x57f: Call2 0xcbc

0x580: Pop(2)
0x581: GOTO 0x596

0x582: PushEmpty(int, string, object)
0x583: Stack[-6] = Stack[-2]
0x584: Stack[-7] = Stack[-1]
0x585: Call2 0xdb0

0x586: Stack[-3] = Stack[-4]
0x587: Pop(3)
0x588: Push((int) 0)
0x589: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x58b: Push((int) 1)
0x58c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58e: PushEmpty()
0x58f: Call2 0x5a5

0x590: Pop(0)
0x591: PushEmpty(string, object)
0x592: Stack[-5] = Stack[-2]
0x593: Stack[-6] = Stack[-1]
0x594: Call2 0xdb3

0x595: Pop(2)
0x596: Return(); Pop(2)

0x597: PushEmpty()
0x598: PushEmpty(bool, string)
0x599: Stack[-3] = Stack[-1]
0x59a: Call2 0xcff

0x59b: Pop(1)
0x59c: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x59d: PushEmpty()
0x59e: Call2 0x5a5

0x59f: Pop(0)
0x5a0: PushEmpty(string)
0x5a1: Stack[-2] = Stack[-1]
0x5a2: Call2 0xd0f

0x5a3: Pop(1)
0x5a4: Return(); Pop(0)

0x5a5: @ StopGroup0()
0x5a6: Pop(0)
0x5a7: @ StopAsync()
0x5a8: Pop(0)
0x5a9: Push("head") // @poff=316
0x5aa: @ UnlookAsync(Stack[-1])
0x5ab: Pop(1)
0x5ac: Push((int) 111)
0x5ad: @ KillTimer(Stack[-1])
0x5ae: Pop(1)
0x5af: Return(); Pop(0)

0x5b0: PushEmpty()
0x5b1: PushEmpty()
0x5b2: Call2 0x5a5

0x5b3: Pop(0)
0x5b4: PushEmpty(object)
0x5b5: Stack[-2] = Stack[-1]
0x5b6: Call2 0xc84

0x5b7: Pop(1)
0x5b8: Return(); Pop(0)

0x5b9: PushEmpty(cvector, cvector, cvector, cvector)
0x5ba: Push((int) 111)
0x5bb: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5bd: Return(); Pop(4)

0x5be: PushEmpty(bool, object)
0x5bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c0: Call2 0x95c

0x5c1: Pop(1)
0x5c2: Pop(1); Push((bool) Stack[-1] == 0)
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c4: PushEmpty()
0x5c5: Call2 0x5a5

0x5c6: Pop(0)
0x5c7: Return(); Pop(4)

0x5c8: @ GetDirection(Stack[-2])
0x5c9: Pop(0)
0x5ca: PushEmpty(cvector, object)
0x5cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5cc: Call2 0x913

0x5cd: Stack[-2] = Stack[-3]
0x5ce: Pop(2)
0x5cf: PushEmpty(float, cvector, cvector)
0x5d0: Stack[-5] = Stack[-2]
0x5d1: Stack[-4] = Stack[-1]
0x5d2: Call2 0xb05

0x5d3: Pop(2)
0x5d4: Push((float)0.4999999701976776)
0x5d5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d7: PushEmpty(object)
0x5d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d9: Call2 0x9f2

0x5da: Pop(1)
0x5db: Return(); Pop(4)

0x5dc: PushEmpty()
0x5dd: Call2 0x5a5

0x5de: Pop(0)
0x5df: PushEmpty()
0x5e0: Call2 0xdbe

0x5e1: Pop(0)
0x5e2: Return(); Pop(0)

0x5e3: PushEmpty()
0x5e4: PushEmpty(bool, object)
0x5e5: Stack[-3] = Stack[-1]
0x5e6: Call2 0xcd5

0x5e7: Pop(1)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5e9: PushEmpty()
0x5ea: Call2 0x5a5

0x5eb: Pop(0)
0x5ec: PushEmpty(object)
0x5ed: Stack[-2] = Stack[-1]
0x5ee: Call2 0xcec

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty()
0x5f2: @ Face(Stack[-1])
0x5f3: Pop(0)
0x5f4: Push("all") // @poff=16
0x5f5: Push("attack_on") // @poff=326
0x5f6: @ PlayAnimation(Stack[-2], Stack[-1])
0x5f7: Pop(2)
0x5f8: @ WaitForAnimEnd()
0x5f9: Pop(0)
0x5fa: Push("all") // @poff=16
0x5fb: Push("attack_stay") // @poff=346
0x5fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x5fd: Pop(2)
0x5fe: @ WaitForAnimEnd()
0x5ff: Pop(0)
0x600: Push("all") // @poff=16
0x601: Push("attack_off") // @poff=370
0x602: @ PlayAnimation(Stack[-2], Stack[-1])
0x603: Pop(2)
0x604: @ WaitForAnimEnd()
0x605: Pop(0)
0x606: @ StopAsync()
0x607: Pop(0)
0x608: PushEmpty(object)
0x609: Stack[-2] = Stack[-1]
0x60a: Call2 0x632

0x60b: Pop(1)
0x60c: Return(); Pop(0)

0x60d: PushEmpty()
0x60e: Call2 0x6af

0x60f: Pop(0)
0x610: PushEmpty()
0x611: Call2 0xdbe

0x612: Pop(0)
0x613: Return(); Pop(0)

0x614: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x615: @ GetPosition(Stack[-6])
0x616: Pop(0)
0x617: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0x618: Pop(0)
0x619: @ GetDirection(Stack[-4])
0x61a: Pop(0)
0x61b: PushEmpty(cvector, cvector)
0x61c: PushEmpty(cvector, cvector)
0x61d: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x61e: Call2 0xae0

0x61f: Pop(1)
0x620: Push((float)0.75)
0x621: Pop(1); Push(Stack[-8] * Stack[-1]);
0x622: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x623: Call2 0xae0

0x624: Stack[-2] = Stack[-5]
0x625: Pop(2)
0x626: Push((int) 32)
0x627: Push((float)7000.0)
0x628: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x629: Pop(2)
0x62a: Push((int) 100)
0x62b: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x62c: Push((int) 0)
0x62d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62f: Stack[-1] = (int) 0
0x630: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x631: Return(); Pop(12)

0x632: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x633: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x634: PushEmpty(cvector, float)
0x635: Stack[-1] = (float) 1.7453293800354004
0x636: Call2 0x614

0x637: Stack[-2] = Stack[-7]
0x638: Pop(2)
0x639: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x63a: Push((float)2500.0)
0x63b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x63d: PushEmpty(cvector, float)
0x63e: Stack[-1] = (float) 2.6179938316345215
0x63f: Call2 0x614

0x640: Stack[-2] = Stack[-7]
0x641: Pop(2)
0x642: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x643: Push((float)2500.0)
0x644: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x646: Push("Can't retreat, distance: ") // @poff=392
0x647: Pop(0); Push(Sqrt(Stack[-5]))
0x648: Pop(2); Push(Stack[-2] + Stack[-1]);
0x649: @ Trace(Stack[-1])
0x64a: Pop(1)
0x64b: Push((float)0.5)
0x64c: @ Sleep(Stack[-1])
0x64d: Pop(1)
0x64e: Return(); Pop(10)

0x64f: Push(CvectorIndex(Stack[-5], 0))
0x650: Push(CvectorIndex(Stack[-6], 2))
0x651: @ Rotate(Stack[-2], Stack[-1])
0x652: Pop(2)
0x653: PushEmpty(cvector)
0x654: Call2 0x90e

0x655: Pop(0)
0x656: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x657: Push((int) 120)
0x658: Push((float)0.5)
0x659: @ SetTimer(Stack[-2], Stack[-1])
0x65a: Pop(2)
0x65b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x65c: Push((int) 1)
0x65d: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x65e: Pop(1)
0x65f: Push(Stack[-3])
0x660: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x661: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x662: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x663: GOTO 0x67a

0x664: GOTO 0x678

0x665: PushEmpty(cvector, float)
0x666: Stack[-1] = (float) 2.6179938316345215
0x667: Call2 0x614

0x668: Stack[-2] = Stack[-4]
0x669: Pop(2)
0x66a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x66b: Push((float)2500.0)
0x66c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x66d: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x66e: PushEmpty(cvector)
0x66f: Call2 0x90e

0x670: Pop(0)
0x671: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x672: Push((int) 120)
0x673: Push((float)0.5)
0x674: @ SetTimer(Stack[-2], Stack[-1])
0x675: Pop(2)
0x676: GOTO 0x678

0x677: GOTO 0x67a

0x678: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x679: IF (Stack[-1] == 1) GOTO 0x65c; Pop(1)

0x67a: Return(); Pop(10)

0x67b: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x67c: Push((int) 120)
0x67d: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x67e: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x67f: Return(); Pop(8)

0x680: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x681: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x682: @ Stop()
0x683: Pop(0)
0x684: Push((int) 1)
0x685: @ KillTimer(Stack[-1])
0x686: Pop(1)
0x687: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x688: GOTO 0x6ae

0x689: @ GetDirection(Stack[-4])
0x68a: Pop(0)
0x68b: Push((float)7000.0)
0x68c: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x68d: Pop(1)
0x68e: PushEmpty(cvector, float)
0x68f: Stack[-1] = (float) 1.7453293800354004
0x690: Call2 0x614

0x691: Stack[-2] = Stack[-4]
0x692: Pop(2)
0x693: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x694: PushEmpty(bool)
0x695: Stack[-1] = (bool) 0
0x696: Push((float)2500.0)
0x697: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x699: PushEmpty(bool)
0x69a: Stack[-1] = (bool) 1
0x69b: Pop(0); Push(Stack[-5] * Stack[-5]);
0x69c: Push((float)2.25)
0x69d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x69e: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x69f: IF (Stack[-1] == 1) GOTO 0x6a5; Pop(1)

0x6a0: PushEmpty(bool)
0x6a1: Call2 0x6bf

0x6a2: Pop(0)
0x6a3: IF (Stack[-1] == 1) GOTO 0x6a5; Pop(1)

0x6a4: Stack[-1] = (bool) 0
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a6: Stack[-1] = (bool) 1
0x6a7: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6a8: @ Stop()
0x6a9: Pop(0)
0x6aa: PushEmpty(cvector)
0x6ab: Call2 0x90e

0x6ac: Pop(0)
0x6ad: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x6ae: Return(); Pop(8)

0x6af: @ Stop()
0x6b0: Pop(0)
0x6b1: Push((int) 120)
0x6b2: @ KillTimer(Stack[-1])
0x6b3: Pop(1)
0x6b4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x6b5: Return(); Pop(0)

0x6b6: PushEmpty()
0x6b7: PushEmpty()
0x6b8: Call2 0x6af

0x6b9: Pop(0)
0x6ba: PushEmpty(object)
0x6bb: Stack[-2] = Stack[-1]
0x6bc: Call2 0xc84

0x6bd: Pop(1)
0x6be: Return(); Pop(0)

0x6bf: PushEmpty(cvector, cvector, cvector, cvector)
0x6c0: @ GetDirection(Stack[-2])
0x6c1: Pop(0)
0x6c2: PushEmpty(cvector, object)
0x6c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c4: Call2 0x913

0x6c5: Stack[-2] = Stack[-3]
0x6c6: Pop(2)
0x6c7: PushEmpty(float, cvector, cvector)
0x6c8: Stack[-5] = Stack[-2]
0x6c9: Stack[-4] = Stack[-1]
0x6ca: Call2 0xaea

0x6cb: Pop(2)
0x6cc: Push((float)-0.3420201241970062)
0x6cd: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6ce: Return(); Pop(4)

0x6cf: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x6d0: @ GetPosition(Stack[-6])
0x6d1: Pop(0)
0x6d2: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0x6d3: Pop(0)
0x6d4: @ GetDirection(Stack[-4])
0x6d5: Pop(0)
0x6d6: PushEmpty(cvector, cvector)
0x6d7: PushEmpty(cvector, cvector)
0x6d8: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x6d9: Call2 0xae0

0x6da: Pop(1)
0x6db: Push((float)0.75)
0x6dc: Pop(1); Push(Stack[-8] * Stack[-1]);
0x6dd: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6de: Call2 0xae0

0x6df: Stack[-2] = Stack[-5]
0x6e0: Pop(2)
0x6e1: Push((int) 32)
0x6e2: Push((float)7000.0)
0x6e3: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x6e4: Pop(2)
0x6e5: Push((int) 100)
0x6e6: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x6e7: Push((int) 0)
0x6e8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6e9: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6ea: Stack[-1] = (int) 0
0x6eb: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x6ec: Return(); Pop(12)

0x6ed: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x6ee: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x6ef: PushEmpty(cvector, float)
0x6f0: Stack[-1] = (float) 1.7453293800354004
0x6f1: Call2 0x6cf

0x6f2: Stack[-2] = Stack[-7]
0x6f3: Pop(2)
0x6f4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x6f5: Push((float)2500.0)
0x6f6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x6f7: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x6f8: PushEmpty(cvector, float)
0x6f9: Stack[-1] = (float) 2.6179938316345215
0x6fa: Call2 0x6cf

0x6fb: Stack[-2] = Stack[-7]
0x6fc: Pop(2)
0x6fd: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x6fe: Push((float)2500.0)
0x6ff: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x700: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x701: Push("Can't retreat, distance: ") // @poff=392
0x702: Pop(0); Push(Sqrt(Stack[-5]))
0x703: Pop(2); Push(Stack[-2] + Stack[-1]);
0x704: @ Trace(Stack[-1])
0x705: Pop(1)
0x706: Push((float)0.5)
0x707: @ Sleep(Stack[-1])
0x708: Pop(1)
0x709: Return(); Pop(10)

0x70a: Push(CvectorIndex(Stack[-5], 0))
0x70b: Push(CvectorIndex(Stack[-6], 2))
0x70c: @ Rotate(Stack[-2], Stack[-1])
0x70d: Pop(2)
0x70e: PushEmpty(cvector)
0x70f: Call2 0x90e

0x710: Pop(0)
0x711: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x712: Push((int) 120)
0x713: Push((float)0.5)
0x714: @ SetTimer(Stack[-2], Stack[-1])
0x715: Pop(2)
0x716: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x717: Push((int) 1)
0x718: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x719: Pop(1)
0x71a: Push(Stack[-3])
0x71b: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x71c: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x71d: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71e: GOTO 0x735

0x71f: GOTO 0x733

0x720: PushEmpty(cvector, float)
0x721: Stack[-1] = (float) 2.6179938316345215
0x722: Call2 0x6cf

0x723: Stack[-2] = Stack[-4]
0x724: Pop(2)
0x725: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x726: Push((float)2500.0)
0x727: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x728: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x729: PushEmpty(cvector)
0x72a: Call2 0x90e

0x72b: Pop(0)
0x72c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x72d: Push((int) 120)
0x72e: Push((float)0.5)
0x72f: @ SetTimer(Stack[-2], Stack[-1])
0x730: Pop(2)
0x731: GOTO 0x733

0x732: GOTO 0x735

0x733: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x734: IF (Stack[-1] == 1) GOTO 0x717; Pop(1)

0x735: Return(); Pop(10)

0x736: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x737: Push((int) 120)
0x738: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x739: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x73a: Return(); Pop(8)

0x73b: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x73c: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x73d: @ Stop()
0x73e: Pop(0)
0x73f: Push((int) 1)
0x740: @ KillTimer(Stack[-1])
0x741: Pop(1)
0x742: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x743: GOTO 0x769

0x744: @ GetDirection(Stack[-4])
0x745: Pop(0)
0x746: Push((float)7000.0)
0x747: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x748: Pop(1)
0x749: PushEmpty(cvector, float)
0x74a: Stack[-1] = (float) 1.7453293800354004
0x74b: Call2 0x6cf

0x74c: Stack[-2] = Stack[-4]
0x74d: Pop(2)
0x74e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x74f: PushEmpty(bool)
0x750: Stack[-1] = (bool) 0
0x751: Push((float)2500.0)
0x752: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x753: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x754: PushEmpty(bool)
0x755: Stack[-1] = (bool) 1
0x756: Pop(0); Push(Stack[-5] * Stack[-5]);
0x757: Push((float)2.25)
0x758: Pop(2); Push(Stack[-2] * Stack[-1]);
0x759: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x75a: IF (Stack[-1] == 1) GOTO 0x760; Pop(1)

0x75b: PushEmpty(bool)
0x75c: Call2 0x77a

0x75d: Pop(0)
0x75e: IF (Stack[-1] == 1) GOTO 0x760; Pop(1)

0x75f: Stack[-1] = (bool) 0
0x760: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x761: Stack[-1] = (bool) 1
0x762: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x763: @ Stop()
0x764: Pop(0)
0x765: PushEmpty(cvector)
0x766: Call2 0x90e

0x767: Pop(0)
0x768: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x769: Return(); Pop(8)

0x76a: @ Stop()
0x76b: Pop(0)
0x76c: Push((int) 120)
0x76d: @ KillTimer(Stack[-1])
0x76e: Pop(1)
0x76f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x770: Return(); Pop(0)

0x771: PushEmpty()
0x772: PushEmpty()
0x773: Call2 0x76a

0x774: Pop(0)
0x775: PushEmpty(object)
0x776: Stack[-2] = Stack[-1]
0x777: Call2 0xc84

0x778: Pop(1)
0x779: Return(); Pop(0)

0x77a: PushEmpty(cvector, cvector, cvector, cvector)
0x77b: @ GetDirection(Stack[-2])
0x77c: Pop(0)
0x77d: PushEmpty(cvector, object)
0x77e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x77f: Call2 0x913

0x780: Stack[-2] = Stack[-3]
0x781: Pop(2)
0x782: PushEmpty(float, cvector, cvector)
0x783: Stack[-5] = Stack[-2]
0x784: Stack[-4] = Stack[-1]
0x785: Call2 0xaea

0x786: Pop(2)
0x787: Push((float)-0.3420201241970062)
0x788: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x789: Return(); Pop(4)

0x78a: PushEmpty()
0x78b: Call2 0x82c

0x78c: Pop(0)
0x78d: PushEmpty()
0x78e: Call2 0xdbe

0x78f: Pop(0)
0x790: Return(); Pop(0)

0x791: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x792: @ GetPosition(Stack[-6])
0x793: Pop(0)
0x794: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0x795: Pop(0)
0x796: @ GetDirection(Stack[-4])
0x797: Pop(0)
0x798: PushEmpty(cvector, cvector)
0x799: PushEmpty(cvector, cvector)
0x79a: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x79b: Call2 0xae0

0x79c: Pop(1)
0x79d: Push((float)0.75)
0x79e: Pop(1); Push(Stack[-8] * Stack[-1]);
0x79f: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x7a0: Call2 0xae0

0x7a1: Stack[-2] = Stack[-5]
0x7a2: Pop(2)
0x7a3: Push((int) 32)
0x7a4: Push((float)7000.0)
0x7a5: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x7a6: Pop(2)
0x7a7: Push((int) 100)
0x7a8: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x7a9: Push((int) 0)
0x7aa: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ac: Stack[-1] = (int) 0
0x7ad: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x7ae: Return(); Pop(12)

0x7af: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x7b0: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x7b1: PushEmpty(cvector, float)
0x7b2: Stack[-1] = (float) 1.7453293800354004
0x7b3: Call2 0x791

0x7b4: Stack[-2] = Stack[-7]
0x7b5: Pop(2)
0x7b6: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x7b7: Push((float)2500.0)
0x7b8: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x7b9: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7ba: PushEmpty(cvector, float)
0x7bb: Stack[-1] = (float) 2.6179938316345215
0x7bc: Call2 0x791

0x7bd: Stack[-2] = Stack[-7]
0x7be: Pop(2)
0x7bf: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x7c0: Push((float)2500.0)
0x7c1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x7c2: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7c3: Push("Can't retreat, distance: ") // @poff=392
0x7c4: Pop(0); Push(Sqrt(Stack[-5]))
0x7c5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7c6: @ Trace(Stack[-1])
0x7c7: Pop(1)
0x7c8: Push((float)0.5)
0x7c9: @ Sleep(Stack[-1])
0x7ca: Pop(1)
0x7cb: Return(); Pop(10)

0x7cc: Push(CvectorIndex(Stack[-5], 0))
0x7cd: Push(CvectorIndex(Stack[-6], 2))
0x7ce: @ Rotate(Stack[-2], Stack[-1])
0x7cf: Pop(2)
0x7d0: PushEmpty(cvector)
0x7d1: Call2 0x90e

0x7d2: Pop(0)
0x7d3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x7d4: Push((int) 120)
0x7d5: Push((float)0.5)
0x7d6: @ SetTimer(Stack[-2], Stack[-1])
0x7d7: Pop(2)
0x7d8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7d9: Push((int) 1)
0x7da: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x7db: Pop(1)
0x7dc: Push(Stack[-3])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7de: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7df: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e0: GOTO 0x7f7

0x7e1: GOTO 0x7f5

0x7e2: PushEmpty(cvector, float)
0x7e3: Stack[-1] = (float) 2.6179938316345215
0x7e4: Call2 0x791

0x7e5: Stack[-2] = Stack[-4]
0x7e6: Pop(2)
0x7e7: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x7e8: Push((float)2500.0)
0x7e9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x7ea: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7eb: PushEmpty(cvector)
0x7ec: Call2 0x90e

0x7ed: Pop(0)
0x7ee: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x7ef: Push((int) 120)
0x7f0: Push((float)0.5)
0x7f1: @ SetTimer(Stack[-2], Stack[-1])
0x7f2: Pop(2)
0x7f3: GOTO 0x7f5

0x7f4: GOTO 0x7f7

0x7f5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x7f6: IF (Stack[-1] == 1) GOTO 0x7d9; Pop(1)

0x7f7: Return(); Pop(10)

0x7f8: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x7f9: Push((int) 120)
0x7fa: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x7fb: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7fc: Return(); Pop(8)

0x7fd: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7fe: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x7ff: @ Stop()
0x800: Pop(0)
0x801: Push((int) 1)
0x802: @ KillTimer(Stack[-1])
0x803: Pop(1)
0x804: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x805: GOTO 0x82b

0x806: @ GetDirection(Stack[-4])
0x807: Pop(0)
0x808: Push((float)7000.0)
0x809: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x80a: Pop(1)
0x80b: PushEmpty(cvector, float)
0x80c: Stack[-1] = (float) 1.7453293800354004
0x80d: Call2 0x791

0x80e: Stack[-2] = Stack[-4]
0x80f: Pop(2)
0x810: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x811: PushEmpty(bool)
0x812: Stack[-1] = (bool) 0
0x813: Push((float)2500.0)
0x814: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x815: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x816: PushEmpty(bool)
0x817: Stack[-1] = (bool) 1
0x818: Pop(0); Push(Stack[-5] * Stack[-5]);
0x819: Push((float)2.25)
0x81a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x81b: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x81c: IF (Stack[-1] == 1) GOTO 0x822; Pop(1)

0x81d: PushEmpty(bool)
0x81e: Call2 0x83c

0x81f: Pop(0)
0x820: IF (Stack[-1] == 1) GOTO 0x822; Pop(1)

0x821: Stack[-1] = (bool) 0
0x822: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x823: Stack[-1] = (bool) 1
0x824: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x825: @ Stop()
0x826: Pop(0)
0x827: PushEmpty(cvector)
0x828: Call2 0x90e

0x829: Pop(0)
0x82a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x82b: Return(); Pop(8)

0x82c: @ Stop()
0x82d: Pop(0)
0x82e: Push((int) 120)
0x82f: @ KillTimer(Stack[-1])
0x830: Pop(1)
0x831: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x832: Return(); Pop(0)

0x833: PushEmpty()
0x834: PushEmpty()
0x835: Call2 0x82c

0x836: Pop(0)
0x837: PushEmpty(object)
0x838: Stack[-2] = Stack[-1]
0x839: Call2 0xc84

0x83a: Pop(1)
0x83b: Return(); Pop(0)

0x83c: PushEmpty(cvector, cvector, cvector, cvector)
0x83d: @ GetDirection(Stack[-2])
0x83e: Pop(0)
0x83f: PushEmpty(cvector, object)
0x840: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x841: Call2 0x913

0x842: Stack[-2] = Stack[-3]
0x843: Pop(2)
0x844: PushEmpty(float, cvector, cvector)
0x845: Stack[-5] = Stack[-2]
0x846: Stack[-4] = Stack[-1]
0x847: Call2 0xaea

0x848: Pop(2)
0x849: Push((float)-0.3420201241970062)
0x84a: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x84b: Return(); Pop(4)

0x84c: PushEmpty()
0x84d: Call2 0x8ee

0x84e: Pop(0)
0x84f: PushEmpty()
0x850: Call2 0xdbe

0x851: Pop(0)
0x852: Return(); Pop(0)

0x853: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x854: @ GetPosition(Stack[-6])
0x855: Pop(0)
0x856: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=166
0x857: Pop(0)
0x858: @ GetDirection(Stack[-4])
0x859: Pop(0)
0x85a: PushEmpty(cvector, cvector)
0x85b: PushEmpty(cvector, cvector)
0x85c: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x85d: Call2 0xae0

0x85e: Pop(1)
0x85f: Push((float)0.75)
0x860: Pop(1); Push(Stack[-8] * Stack[-1]);
0x861: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x862: Call2 0xae0

0x863: Stack[-2] = Stack[-5]
0x864: Pop(2)
0x865: Push((int) 32)
0x866: Push((float)7000.0)
0x867: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x868: Pop(2)
0x869: Push((int) 100)
0x86a: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x86b: Push((int) 0)
0x86c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x86d: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86e: Stack[-1] = (int) 0
0x86f: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x870: Return(); Pop(12)

0x871: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x872: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x873: PushEmpty(cvector, float)
0x874: Stack[-1] = (float) 1.7453293800354004
0x875: Call2 0x853

0x876: Stack[-2] = Stack[-7]
0x877: Pop(2)
0x878: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x879: Push((float)2500.0)
0x87a: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x87b: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x87c: PushEmpty(cvector, float)
0x87d: Stack[-1] = (float) 2.6179938316345215
0x87e: Call2 0x853

0x87f: Stack[-2] = Stack[-7]
0x880: Pop(2)
0x881: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x882: Push((float)2500.0)
0x883: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x884: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x885: Push("Can't retreat, distance: ") // @poff=392
0x886: Pop(0); Push(Sqrt(Stack[-5]))
0x887: Pop(2); Push(Stack[-2] + Stack[-1]);
0x888: @ Trace(Stack[-1])
0x889: Pop(1)
0x88a: Push((float)0.5)
0x88b: @ Sleep(Stack[-1])
0x88c: Pop(1)
0x88d: Return(); Pop(10)

0x88e: Push(CvectorIndex(Stack[-5], 0))
0x88f: Push(CvectorIndex(Stack[-6], 2))
0x890: @ Rotate(Stack[-2], Stack[-1])
0x891: Pop(2)
0x892: PushEmpty(cvector)
0x893: Call2 0x90e

0x894: Pop(0)
0x895: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x896: Push((int) 120)
0x897: Push((float)0.5)
0x898: @ SetTimer(Stack[-2], Stack[-1])
0x899: Pop(2)
0x89a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x89b: Push((int) 1)
0x89c: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x89d: Pop(1)
0x89e: Push(Stack[-3])
0x89f: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8a0: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x8a1: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x8a2: GOTO 0x8b9

0x8a3: GOTO 0x8b7

0x8a4: PushEmpty(cvector, float)
0x8a5: Stack[-1] = (float) 2.6179938316345215
0x8a6: Call2 0x853

0x8a7: Stack[-2] = Stack[-4]
0x8a8: Pop(2)
0x8a9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x8aa: Push((float)2500.0)
0x8ab: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8ac: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8ad: PushEmpty(cvector)
0x8ae: Call2 0x90e

0x8af: Pop(0)
0x8b0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x8b1: Push((int) 120)
0x8b2: Push((float)0.5)
0x8b3: @ SetTimer(Stack[-2], Stack[-1])
0x8b4: Pop(2)
0x8b5: GOTO 0x8b7

0x8b6: GOTO 0x8b9

0x8b7: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x8b8: IF (Stack[-1] == 1) GOTO 0x89b; Pop(1)

0x8b9: Return(); Pop(10)

0x8ba: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x8bb: Push((int) 120)
0x8bc: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8be: Return(); Pop(8)

0x8bf: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x8c0: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8c1: @ Stop()
0x8c2: Pop(0)
0x8c3: Push((int) 1)
0x8c4: @ KillTimer(Stack[-1])
0x8c5: Pop(1)
0x8c6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8c7: GOTO 0x8ed

0x8c8: @ GetDirection(Stack[-4])
0x8c9: Pop(0)
0x8ca: Push((float)7000.0)
0x8cb: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x8cc: Pop(1)
0x8cd: PushEmpty(cvector, float)
0x8ce: Stack[-1] = (float) 1.7453293800354004
0x8cf: Call2 0x853

0x8d0: Stack[-2] = Stack[-4]
0x8d1: Pop(2)
0x8d2: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x8d3: PushEmpty(bool)
0x8d4: Stack[-1] = (bool) 0
0x8d5: Push((float)2500.0)
0x8d6: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x8d7: IF (Stack[-1] == 0) GOTO 0x8e6; Pop(1)

0x8d8: PushEmpty(bool)
0x8d9: Stack[-1] = (bool) 1
0x8da: Pop(0); Push(Stack[-5] * Stack[-5]);
0x8db: Push((float)2.25)
0x8dc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8dd: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x8de: IF (Stack[-1] == 1) GOTO 0x8e4; Pop(1)

0x8df: PushEmpty(bool)
0x8e0: Call2 0x8fe

0x8e1: Pop(0)
0x8e2: IF (Stack[-1] == 1) GOTO 0x8e4; Pop(1)

0x8e3: Stack[-1] = (bool) 0
0x8e4: IF (Stack[-1] == 0) GOTO 0x8e6; Pop(1)

0x8e5: Stack[-1] = (bool) 1
0x8e6: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8e7: @ Stop()
0x8e8: Pop(0)
0x8e9: PushEmpty(cvector)
0x8ea: Call2 0x90e

0x8eb: Pop(0)
0x8ec: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x8ed: Return(); Pop(8)

0x8ee: @ Stop()
0x8ef: Pop(0)
0x8f0: Push((int) 120)
0x8f1: @ KillTimer(Stack[-1])
0x8f2: Pop(1)
0x8f3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8f4: Return(); Pop(0)

0x8f5: PushEmpty()
0x8f6: PushEmpty()
0x8f7: Call2 0x8ee

0x8f8: Pop(0)
0x8f9: PushEmpty(object)
0x8fa: Stack[-2] = Stack[-1]
0x8fb: Call2 0xc84

0x8fc: Pop(1)
0x8fd: Return(); Pop(0)

0x8fe: PushEmpty(cvector, cvector, cvector, cvector)
0x8ff: @ GetDirection(Stack[-2])
0x900: Pop(0)
0x901: PushEmpty(cvector, object)
0x902: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x903: Call2 0x913

0x904: Stack[-2] = Stack[-3]
0x905: Pop(2)
0x906: PushEmpty(float, cvector, cvector)
0x907: Stack[-5] = Stack[-2]
0x908: Stack[-4] = Stack[-1]
0x909: Call2 0xaea

0x90a: Pop(2)
0x90b: Push((float)-0.3420201241970062)
0x90c: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x90d: Return(); Pop(4)

0x90e: PushEmpty(cvector, cvector)
0x90f: @ GetPosition(Stack[-1])
0x910: Pop(0)
0x911: Stack[-1] = Stack[-3]
0x912: Return(); Pop(2)

0x913: PushEmpty(cvector, cvector, cvector, cvector)
0x914: @ GetPosition(Stack[-2])
0x915: Pop(0)
0x916: @@ GetPosition(Stack[-1]); Obj=5 // @poff=166
0x917: Pop(0)
0x918: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x919: Return(); Pop(4)

0x91a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x91b: @ GetPosition(Stack[-3])
0x91c: Pop(0)
0x91d: @@ GetPosition(Stack[-2]); Obj=7 // @poff=166
0x91e: Pop(0)
0x91f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x920: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x921: Return(); Pop(6)

0x922: PushEmpty(bool, bool)
0x923: @ IsPlayerActor(Stack[-3], Stack[-1])
0x924: Pop(0)
0x925: Stack[-1] = Stack[-4]
0x926: Return(); Pop(2)

0x927: PushEmpty(bool, bool)
0x928: Push("HasProperty") // @poff=444
0x929: Push((int) 2)
0x92a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x92b: Pop(1); Push((bool) Stack[-1] == 0)
0x92c: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x92d: Stack[-5] = (bool) 0
0x92e: Return(); Pop(2)

0x92f: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=468
0x930: Pop(0)
0x931: Stack[-1] = Stack[-5]
0x932: Return(); Pop(2)

0x933: PushEmpty(bool, bool)
0x934: @@ IsDead(Stack[-1]); Obj=3 // @poff=480
0x935: Pop(0)
0x936: Stack[-1] = Stack[-4]
0x937: Return(); Pop(2)

0x938: PushEmpty(object, object, object, object)
0x939: Pop(0); PushNull((bool) Stack[-5] == 0)
0x93a: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93b: Stack[-6] = (bool) 0
0x93c: Return(); Pop(4)

0x93d: PushEmpty(bool)
0x93e: Stack[-1] = (bool) 0
0x93f: Push("IsDead") // @poff=487
0x940: Push((int) 1)
0x941: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x942: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x943: PushEmpty(bool, object)
0x944: Stack[-8] = Stack[-1]
0x945: Call2 0x933

0x946: Pop(1)
0x947: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x948: Stack[-1] = (bool) 1
0x949: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x94a: Stack[-6] = (bool) 0
0x94b: Return(); Pop(4)

0x94c: @ GetScene(Stack[-2])
0x94d: Pop(0)
0x94e: Pop(0); PushNull((bool) Stack[-2] == 0)
0x94f: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x950: Stack[-6] = (bool) 0
0x951: Return(); Pop(4)

0x952: @@ GetScene(Stack[-1]); Obj=5 // @poff=501
0x953: Pop(0)
0x954: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x955: IF (Stack[-1] == 0) GOTO 0x958; Pop(1)

0x956: Stack[-6] = (bool) 0
0x957: Return(); Pop(4)

0x958: Stack[-6] = (bool) 1
0x959: Return(); Pop(4)

0x95a: Stack[-1] = 0
0x95b: Stack[-2] = 0
0x95c: PushEmpty(int, int)
0x95d: PushEmpty(bool, object)
0x95e: Stack[-5] = Stack[-1]
0x95f: Call2 0x938

0x960: Pop(1)
0x961: Pop(1); Push((bool) Stack[-1] == 0)
0x962: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x963: Stack[-4] = (bool) 0
0x964: Return(); Pop(2)

0x965: PushEmpty(bool, object, string)
0x966: Stack[-6] = Stack[-2]
0x967: Stack[-1] = "noaccess" // @poff=510
0x968: Call2 0x927

0x969: Pop(2)
0x96a: Pop(1); Push((bool) Stack[-1] == 0)
0x96b: IF (Stack[-1] == 0) GOTO 0x96e; Pop(1)

0x96c: Stack[-4] = (bool) 1
0x96d: Return(); Pop(2)

0x96e: Push("noaccess") // @poff=510
0x96f: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=528
0x970: Pop(1)
0x971: Push((int) 0)
0x972: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x973: Return(); Pop(2)

0x974: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x975: Pop(0); PushNull((bool) Stack[-15] == 0)
0x976: IF (Stack[-1] == 0) GOTO 0x978; Pop(1)

0x977: Return(); Pop(14)

0x978: @ IsDead(Stack[-7])
0x979: Pop(0)
0x97a: Push(Stack[-7])
0x97b: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x97c: Return(); Pop(14)

0x97d: @ GetSecondaryAnimationType(Stack[-6])
0x97e: Pop(0)
0x97f: Push((int) 0)
0x980: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x981: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x982: Return(); Pop(14)

0x983: @@ GetPosition(Stack[-5]); Obj=15 // @poff=166
0x984: Pop(0)
0x985: @ GetPosition(Stack[-4])
0x986: Pop(0)
0x987: @ GetDirection(Stack[-3])
0x988: Pop(0)
0x989: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x98a: Push(CvectorIndex(Stack[-2], 0))
0x98b: Push(CvectorIndex(Stack[-4], 0))
0x98c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x98d: Push(CvectorIndex(Stack[-3], 2))
0x98e: Push(CvectorIndex(Stack[-5], 2))
0x98f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x990: Pop(2); Push(Stack[-2] + Stack[-1]);
0x991: Push((int) 0)
0x992: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x993: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x994: Stack[-1] = "fhit" // @poff=540
0x995: GOTO 0x997

0x996: Stack[-1] = "bhit" // @poff=550
0x997: Push("hit_react") // @poff=560
0x998: Push("1") // @poff=580
0x999: Pop(1); Push(Stack[-3] + Stack[-1]);
0x99a: Push("2") // @poff=584
0x99b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x99c: Push((int) -10)
0x99d: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x99e: Pop(4)
0x99f: Return(); Pop(14)

0x9a0: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x9a1: PushEmpty(bool)
0x9a2: Stack[-1] = (bool) 0
0x9a3: PushEmpty(bool)
0x9a4: Stack[-1] = (bool) 0
0x9a5: Push(Stack[-23])
0x9a6: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a7: Push((int) 4)
0x9a8: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x9a9: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9aa: Stack[-1] = (bool) 1
0x9ab: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9ac: Push((int) 5)
0x9ad: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x9ae: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9af: Stack[-1] = (bool) 1
0x9b0: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9b1: PushEmpty(cvector, cvector)
0x9b2: PushEmpty(cvector, object)
0x9b3: Stack[-25] = Stack[-1]
0x9b4: Call2 0x913

0x9b5: Stack[-2] = Stack[-3]
0x9b6: Pop(2)
0x9b7: Call2 0xae0

0x9b8: Stack[-2] = Stack[-11]
0x9b9: Pop(2)
0x9ba: @ CreateVectorVector(Stack[-8])
0x9bb: Pop(0)
0x9bc: Stack[-7] = (int) 1
0x9bd: Push("hit") // @poff=542
0x9be: Pop(1); Push(Stack[-1] + Stack[-8]);
0x9bf: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x9c0: Pop(1)
0x9c1: Pop(0); Push((bool) Stack[-6] == 0)
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9c3: GOTO 0x9cd

0x9c4: Pop(0); Push(Stack[-4] | Stack[-9]);
0x9c5: Push((float)0.7071067690849304)
0x9c6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x9c7: IF (Stack[-1] == 0) GOTO 0x9ca; Pop(1)

0x9c8: @@ add(Stack[-5]); Obj=8 // @poff=588
0x9c9: Pop(0)
0x9ca: Push((int) 1)
0x9cb: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x9cc: GOTO 0x9bd

0x9cd: @@ size(Stack[-3]); Obj=8 // @poff=592
0x9ce: Pop(0)
0x9cf: Push(Stack[-3])
0x9d0: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9d1: @ irand(Stack[-2], Stack[-3])
0x9d2: Pop(0)
0x9d3: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=597
0x9d4: Pop(0)
0x9d5: PushEmpty(object, int, float, cvector, cvector)
0x9d6: Stack[-26] = Stack[-5]
0x9d7: Stack[-25] = Stack[-4]
0x9d8: Stack[-24] = Stack[-3]
0x9d9: Stack[-6] = Stack[-2]
0x9da: Stack[-1] = -Stack[-14]; Pop(0);
0x9db: Call2 0x9e4

0x9dc: Pop(5)
0x9dd: Return(); Pop(18)

0x9de: Stack[-8] = 0
0x9df: PushEmpty(object)
0x9e0: Stack[-22] = Stack[-1]
0x9e1: Call2 0x974

0x9e2: Pop(1)
0x9e3: Return(); Pop(18)

0x9e4: PushEmpty(object, object, object, object)
0x9e5: @ GetScene(Stack[-2])
0x9e6: Pop(0)
0x9e7: Push("scripted") // @poff=601
0x9e8: Push("blood_dir.xml") // @poff=619
0x9e9: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x9ea: Pop(2)
0x9eb: PushEmpty(object)
0x9ec: Stack[-10] = Stack[-1]
0x9ed: Call2 0x974

0x9ee: Pop(1)
0x9ef: Return(); Pop(4)

0x9f0: Stack[-1] = 0
0x9f1: Stack[-2] = 0
0x9f2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9f3: @@ GetPosition(Stack[-3]); Obj=7 // @poff=166
0x9f4: Pop(0)
0x9f5: @ GetPosition(Stack[-2])
0x9f6: Pop(0)
0x9f7: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x9f8: Push(CvectorIndex(Stack[-1], 0))
0x9f9: Push(CvectorIndex(Stack[-2], 2))
0x9fa: @ RotateAsync(Stack[-2], Stack[-1])
0x9fb: Pop(2)
0x9fc: Return(); Pop(6)

0x9fd: PushEmpty(bool, bool)
0x9fe: @ IsLoaded(Stack[-1])
0x9ff: Pop(0)
0xa00: Stack[-1] = Stack[-3]
0xa01: Return(); Pop(2)

0xa02: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa03: @@ GetPosition(Stack[-8]); Obj=20 // @poff=166
0xa04: Pop(0)
0xa05: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=302
0xa06: Pop(0)
0xa07: Push(CvectorIndex(Stack[-8], 1))
0xa08: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa09: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa0a: @ GetPosition(Stack[-7])
0xa0b: Pop(0)
0xa0c: @ GetEyesHeight(Stack[-9])
0xa0d: Pop(0)
0xa0e: Push(CvectorIndex(Stack[-7], 1))
0xa0f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa10: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa11: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xa12: Push(CvectorIndex(Stack[-6], 1))
0xa13: Stack[-1] = (int) 0
0xa14: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa15: Pop(0); Push(Stack[-6] | Stack[-6]);
0xa16: Pop(1); Push(Sqrt(Stack[-1]))
0xa17: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xa18: Stack[-5] = -Stack[-6]; Pop(0);
0xa19: Pop(0); Push(Stack[-6] * Stack[-19]);
0xa1a: PushEmpty(cvector, cvector)
0xa1b: Push([0.0, 1.0, 0.0])
0xa1c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xa1d: Call2 0xae0

0xa1e: Pop(1)
0xa1f: Push((int) 25)
0xa20: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa21: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa22: Push([0.0, 10.0, 0.0])
0xa23: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa24: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xa25: @ IsOverrideActive(Stack[-2])
0xa26: Pop(0)
0xa27: Push(Stack[-2])
0xa28: IF (Stack[-1] == 0) GOTO 0xa2b; Pop(1)

0xa29: Stack[-21] = (bool) 0
0xa2a: Return(); Pop(18)

0xa2b: @ StopWorld()
0xa2c: Pop(0)
0xa2d: @ CameraTransit(Stack[-3], Stack[-5])
0xa2e: Pop(0)
0xa2f: Push(CvectorIndex(Stack[-4], 0))
0xa30: Push(CvectorIndex(Stack[-5], 2))
0xa31: @ Rotate(Stack[-2], Stack[-1])
0xa32: Pop(2)
0xa33: PushEmpty(bool)
0xa34: Call2 0xdfd

0xa35: Pop(0)
0xa36: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa37: GOTO 0xa40

0xa38: Push("head") // @poff=316
0xa39: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa3a: Pop(1)
0xa3b: Push(Stack[-1])
0xa3c: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa3d: Push("head") // @poff=316
0xa3e: @ LookAsyncCamera(Stack[-1])
0xa3f: Pop(1)
0xa40: @ CameraWaitForPlayFinish()
0xa41: Pop(0)
0xa42: @ ResumeWorld()
0xa43: Pop(0)
0xa44: Stack[-21] = (bool) 1
0xa45: Return(); Pop(18)

0xa46: PushEmpty(bool, bool)
0xa47: @ CameraSwitchToNormal()
0xa48: Pop(0)
0xa49: PushEmpty(bool)
0xa4a: Call2 0xdfd

0xa4b: Pop(0)
0xa4c: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4d: GOTO 0xa56

0xa4e: Push("head") // @poff=316
0xa4f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa50: Pop(1)
0xa51: Push(Stack[-1])
0xa52: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa53: Push("head") // @poff=316
0xa54: @ UnlookAsync(Stack[-1])
0xa55: Pop(1)
0xa56: Return(); Pop(2)

0xa57: PushEmpty()
0xa58: PushEmpty(bool, object, float)
0xa59: Stack[-4] = Stack[-2]
0xa5a: Stack[-1] = (int) 70
0xa5b: Call2 0xa5f

0xa5c: Stack[-3] = Stack[-5]
0xa5d: Pop(3)
0xa5e: Return(); Pop(0)

0xa5f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xa60: @@ GetPosition(Stack[-7]); Obj=18 // @poff=166
0xa61: Pop(0)
0xa62: @@ GetEyesHeight(Stack[-8]); Obj=18 // @poff=302
0xa63: Pop(0)
0xa64: Push(CvectorIndex(Stack[-7], 1))
0xa65: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xa66: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa67: @ GetPosition(Stack[-6])
0xa68: Pop(0)
0xa69: @ GetEyesHeight(Stack[-8])
0xa6a: Pop(0)
0xa6b: Push(CvectorIndex(Stack[-6], 1))
0xa6c: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xa6d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa6e: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xa6f: Push(CvectorIndex(Stack[-5], 1))
0xa70: Stack[-1] = (int) 0
0xa71: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xa72: Pop(0); Push(Stack[-5] | Stack[-5]);
0xa73: Pop(1); Push(Sqrt(Stack[-1]))
0xa74: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xa75: Stack[-4] = -Stack[-5]; Pop(0);
0xa76: Pop(0); Push(Stack[-5] * Stack[-17]);
0xa77: Push([0.0, 10.0, 0.0])
0xa78: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xa79: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xa7a: @ IsOverrideActive(Stack[-1])
0xa7b: Pop(0)
0xa7c: Push(Stack[-1])
0xa7d: IF (Stack[-1] == 0) GOTO 0xa80; Pop(1)

0xa7e: Stack[-19] = (bool) 0
0xa7f: Return(); Pop(16)

0xa80: @ StopWorld()
0xa81: Pop(0)
0xa82: @ CameraTransit(Stack[-2], Stack[-4])
0xa83: Pop(0)
0xa84: Push(CvectorIndex(Stack[-3], 0))
0xa85: Push(CvectorIndex(Stack[-4], 2))
0xa86: @ Rotate(Stack[-2], Stack[-1])
0xa87: Pop(2)
0xa88: @ CameraWaitForPlayFinish()
0xa89: Pop(0)
0xa8a: @ ResumeWorld()
0xa8b: Pop(0)
0xa8c: Stack[-19] = (bool) 1
0xa8d: Return(); Pop(16)

0xa8e: PushEmpty()
0xa8f: @ CameraSwitchToNormal()
0xa90: Pop(0)
0xa91: Return(); Pop(0)

0xa92: PushEmpty(float, float, float, float)
0xa93: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xa94: Pop(0)
0xa95: Push((bool) 0)
0xa96: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa97: Pop(1)
0xa98: Return(); Pop(4)

0xa99: PushEmpty(float, float, float, float)
0xa9a: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0xa9b: Pop(0)
0xa9c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0xa9d: Pop(0)
0xa9e: Return(); Pop(4)

0xa9f: PushEmpty(float, cvector, float, cvector)
0xaa0: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=302
0xaa1: Pop(0)
0xaa2: Stack[-1] = [0.0, 0.0, 0.0]
0xaa3: Push(CvectorIndex(Stack[-1], 1))
0xaa4: Stack[-3] = Stack[-1]
0xaa5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xaa6: Push("head") // @poff=316
0xaa7: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xaa8: Pop(1)
0xaa9: Return(); Pop(4)

0xaaa: PushEmpty(bool)
0xaab: Call2 0xdfd

0xaac: Pop(0)
0xaad: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaae: @ lshStopSpeech()
0xaaf: Pop(0)
0xab0: Return(); Pop(0)

0xab1: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xab2: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xab3: Pop(0)
0xab4: Pop(0); Push((bool) Stack[-8] == 0)
0xab5: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xab6: Stack[-7] = (int) 0
0xab7: Push((int) 1)
0xab8: Pop(1); Push(Stack[-8] + Stack[-1]);
0xab9: Pop(1); Push(Stack[-18] + Stack[-1]);
0xaba: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xabb: Pop(1)
0xabc: Pop(0); Push((bool) Stack[-6] == 0)
0xabd: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xabe: GOTO 0xac2

0xabf: Push((int) 1)
0xac0: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xac1: GOTO 0xab7

0xac2: Pop(0); Push((bool) Stack[-7] == 0)
0xac3: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xac4: Return(); Pop(16)

0xac5: @ irand(Stack[-5], Stack[-7])
0xac6: Pop(0)
0xac7: Push((int) 1)
0xac8: Pop(1); Push(Stack[-6] + Stack[-1]);
0xac9: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xaca: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xacb: Pop(0)
0xacc: Push(Stack[-4])
0xacd: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xace: @ GetEyesHeight(Stack[-3])
0xacf: Pop(0)
0xad0: @ GetDirection(Stack[-2])
0xad1: Pop(0)
0xad2: Push((int) 50)
0xad3: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xad4: Push(CvectorIndex(Stack[-1], 1))
0xad5: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xad6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xad7: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xad8: Pop(0)
0xad9: Return(); Pop(16)

0xada: PushEmpty(object, object)
0xadb: @ self(Stack[-1])
0xadc: Pop(0)
0xadd: Stack[-1] = Stack[-3]
0xade: Return(); Pop(2)

0xadf: Stack[-1] = 0
0xae0: PushEmpty(float, float)
0xae1: Pop(0); Push(Stack[-3] | Stack[-3]);
0xae2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xae3: Push((float)9.999999974752427e-07)
0xae4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xae5: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xae6: Stack[-4] = [0.0, 0.0, 0.0]
0xae7: Return(); Pop(2)

0xae8: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xae9: Return(); Pop(2)

0xaea: PushEmpty()
0xaeb: Pop(0); Push(Stack[-2] | Stack[-1]);
0xaec: Pop(0); Push(Stack[-3] | Stack[-3]);
0xaed: Pop(0); Push(Stack[-3] | Stack[-3]);
0xaee: Pop(2); Push(Stack[-2] * Stack[-1]);
0xaef: Pop(1); Push(Sqrt(Stack[-1]))
0xaf0: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xaf1: Return(); Pop(0)

0xaf2: PushEmpty()
0xaf3: Push(CvectorIndex(Stack[-2], 0))
0xaf4: Push(CvectorIndex(Stack[-2], 0))
0xaf5: Pop(2); Push(Stack[-2] * Stack[-1]);
0xaf6: Push(CvectorIndex(Stack[-3], 2))
0xaf7: Push(CvectorIndex(Stack[-3], 2))
0xaf8: Pop(2); Push(Stack[-2] * Stack[-1]);
0xaf9: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xafa: Return(); Pop(0)

0xafb: PushEmpty()
0xafc: Push(CvectorIndex(Stack[-1], 0))
0xafd: Push(CvectorIndex(Stack[-2], 0))
0xafe: Pop(2); Push(Stack[-2] * Stack[-1]);
0xaff: Push(CvectorIndex(Stack[-2], 2))
0xb00: Push(CvectorIndex(Stack[-3], 2))
0xb01: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb02: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb03: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xb04: Return(); Pop(0)

0xb05: PushEmpty()
0xb06: PushEmpty(float, cvector, cvector)
0xb07: Stack[-5] = Stack[-2]
0xb08: Stack[-4] = Stack[-1]
0xb09: Call2 0xaf2

0xb0a: Pop(2)
0xb0b: PushEmpty(float, cvector)
0xb0c: Stack[-5] = Stack[-1]
0xb0d: Call2 0xafb

0xb0e: Pop(1)
0xb0f: PushEmpty(float, cvector)
0xb10: Stack[-5] = Stack[-1]
0xb11: Call2 0xafb

0xb12: Pop(1)
0xb13: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb14: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xb15: Return(); Pop(0)

0xb16: PushEmpty(int, int)
0xb17: @ GetVariable(Stack[-3], Stack[-1])
0xb18: Pop(0)
0xb19: Stack[-1] = Stack[-4]
0xb1a: Return(); Pop(2)

0xb1b: PushEmpty(float, float)
0xb1c: @ GetGameTime(Stack[-1])
0xb1d: Pop(0)
0xb1e: Push((int) 1)
0xb1f: PushEmpty(int)
0xb20: Push((int) 24)
0xb21: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb22: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb23: Return(); Pop(2)

0xb24: PushEmpty()
0xb25: PushEmpty(int, string)
0xb26: Stack[-1] = "branch" // @poff=647
0xb27: Call2 0xb16

0xb28: Pop(1)
0xb29: Push((int) 0)
0xb2a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb2b: IF (Stack[-1] == 0) GOTO 0xb2e; Pop(1)

0xb2c: Stack[-2] = (bool) 1
0xb2d: Return(); Pop(0)

0xb2e: Stack[-2] = (bool) 0
0xb2f: Return(); Pop(0)

0xb30: PushEmpty()
0xb31: PushEmpty(bool, object)
0xb32: Stack[-3] = Stack[-1]
0xb33: Call2 0xb3a

0xb34: Pop(1)
0xb35: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb36: Stack[-2] = (bool) 1
0xb37: Return(); Pop(0)

0xb38: Stack[-2] = (bool) 0
0xb39: Return(); Pop(0)

0xb3a: PushEmpty()
0xb3b: PushEmpty(int)
0xb3c: Call2 0xb1b

0xb3d: Pop(0)
0xb3e: Push((int) 7)
0xb3f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xb40: Return(); Pop(0)

0xb41: PushEmpty(int, int)
0xb42: Push("branch") // @poff=647
0xb43: @ GetVariable(Stack[-1], Stack[-2])
0xb44: Pop(1)
0xb45: Push((int) 0)
0xb46: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb47: IF (Stack[-1] == 0) GOTO 0xb4b; Pop(1)

0xb48: Stack[-3] = (int) 1
0xb49: Return(); Pop(2)

0xb4a: GOTO 0xb50

0xb4b: Push((int) 1)
0xb4c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb4d: IF (Stack[-1] == 0) GOTO 0xb50; Pop(1)

0xb4e: Stack[-3] = (int) 2
0xb4f: Return(); Pop(2)

0xb50: Stack[-3] = (int) 3
0xb51: Return(); Pop(2)

0xb52: PushEmpty(int, int)
0xb53: Push("branch") // @poff=647
0xb54: @ GetVariable(Stack[-1], Stack[-2])
0xb55: Pop(1)
0xb56: Stack[-1] = Stack[-3]
0xb57: Return(); Pop(2)

0xb58: PushEmpty(object, float, object, float)
0xb59: Push("player") // @poff=661
0xb5a: @ FindActor(Stack[-3], Stack[-1])
0xb5b: Pop(1)
0xb5c: Pop(0); Push((bool) Stack[-2] == 0)
0xb5d: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb5e: Stack[-5] = (int) 0
0xb5f: Return(); Pop(4)

0xb60: Push("reputation") // @poff=675
0xb61: @@ GetProperty(Stack[-1], Stack[-2]); Obj=3 // @poff=528
0xb62: Pop(1)
0xb63: Stack[-1] = Stack[-5]
0xb64: Return(); Pop(4)

0xb65: Stack[-2] = 0
0xb66: PushEmpty()
0xb67: PushEmpty(int)
0xb68: Call2 0xb52

0xb69: Pop(0)
0xb6a: Push((int) 1)
0xb6b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb6c: IF (Stack[-1] == 0) GOTO 0xb70; Pop(1)

0xb6d: @ WorkWithCorpse(Stack[-1])
0xb6e: Pop(0)
0xb6f: GOTO 0xb72

0xb70: @ Barter(Stack[-1])
0xb71: Pop(0)
0xb72: Return(); Pop(0)

0xb73: PushEmpty(int, bool, int, bool)
0xb74: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xb75: IF (Stack[-1] == 0) GOTO 0xb7a; Pop(1)

0xb76: Push("GenerateMoney: iMin > iMax") // @poff=697
0xb77: @ Trace(Stack[-1])
0xb78: Pop(1)
0xb79: Return(); Pop(4)

0xb7a: Stack[-2] = (int) 0
0xb7b: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xb7c: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb7d: Pop(0); Push(Stack[-5] - Stack[-6]);
0xb7e: @ irand(Stack[-3], Stack[-1])
0xb7f: Pop(1)
0xb80: GOTO 0xb85

0xb81: Push((int) 0)
0xb82: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xb83: IF (Stack[-1] == 0) GOTO 0xb85; Pop(1)

0xb84: Return(); Pop(4)

0xb85: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xb86: Push((int) 0)
0xb87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb88: IF (Stack[-1] == 0) GOTO 0xb8a; Pop(1)

0xb89: Return(); Pop(4)

0xb8a: PushEmpty(int, string)
0xb8b: Stack[-1] = "Money" // @poff=751
0xb8c: Call2 0xc6a

0xb8d: Pop(1)
0xb8e: Push((int) 0)
0xb8f: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xb90: Pop(2)
0xb91: Return(); Pop(4)

0xb92: PushEmpty(object, int, bool, object, int, bool)
0xb93: @ CreateInvItem(Stack[-3])
0xb94: Pop(0)
0xb95: @@ SetItemName(Stack[-7]); Obj=3 // @poff=763
0xb96: Pop(0)
0xb97: Push("Organ") // @poff=775
0xb98: Push((int) 1)
0xb99: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=787
0xb9a: Pop(2)
0xb9b: @@ GetItemID(Stack[-2]); Obj=3 // @poff=799
0xb9c: Pop(0)
0xb9d: Push((int) 0)
0xb9e: Push((int) 1)
0xb9f: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xba0: Pop(2)
0xba1: Return(); Pop(6)

0xba2: Stack[-3] = 0
0xba3: PushEmpty(int)
0xba4: Call2 0xb52

0xba5: Pop(0)
0xba6: Push((int) 1)
0xba7: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xba8: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xba9: Return(); Pop(0)

0xbaa: PushEmpty(string)
0xbab: Stack[-1] = "liver" // @poff=809
0xbac: Call2 0xb92

0xbad: Pop(1)
0xbae: PushEmpty(string)
0xbaf: Stack[-1] = "kidney" // @poff=821
0xbb0: Call2 0xb92

0xbb1: Pop(1)
0xbb2: PushEmpty(string)
0xbb3: Stack[-1] = "heart" // @poff=835
0xbb4: Call2 0xb92

0xbb5: Pop(1)
0xbb6: PushEmpty(string)
0xbb7: Stack[-1] = "blood" // @poff=847
0xbb8: Call2 0xb92

0xbb9: Pop(1)
0xbba: Return(); Pop(0)

0xbbb: PushEmpty(int, bool, int, bool)
0xbbc: Push(Stack[-5])
0xbbd: IF (Stack[-1] == 0) GOTO 0xc14; Pop(1)

0xbbe: PushEmpty(int, int)
0xbbf: Stack[-2] = (int) 0
0xbc0: Push((int) 100)
0xbc1: PushEmpty(int)
0xbc2: Call2 0xb1b

0xbc3: Pop(0)
0xbc4: Push((int) 100)
0xbc5: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbc6: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xbc7: Call2 0xb73

0xbc8: Pop(2)
0xbc9: Push((int) 8)
0xbca: @ irand(Stack[-3], Stack[-1])
0xbcb: Pop(1)
0xbcc: Push((int) 0)
0xbcd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbce: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbcf: PushEmpty(int, string)
0xbd0: Stack[-1] = "lemon" // @poff=859
0xbd1: Call2 0xc6a

0xbd2: Pop(1)
0xbd3: Push((int) 0)
0xbd4: Push((int) 1)
0xbd5: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbd6: Pop(3)
0xbd7: GOTO 0xc13

0xbd8: Push((int) 1)
0xbd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbda: IF (Stack[-1] == 0) GOTO 0xbe4; Pop(1)

0xbdb: PushEmpty(int, string)
0xbdc: Stack[-1] = "rusk" // @poff=871
0xbdd: Call2 0xc6a

0xbde: Pop(1)
0xbdf: Push((int) 0)
0xbe0: Push((int) 1)
0xbe1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbe2: Pop(3)
0xbe3: GOTO 0xc13

0xbe4: Push((int) 2)
0xbe5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe6: IF (Stack[-1] == 0) GOTO 0xbf0; Pop(1)

0xbe7: PushEmpty(int, string)
0xbe8: Stack[-1] = "hook" // @poff=881
0xbe9: Call2 0xc6a

0xbea: Pop(1)
0xbeb: Push((int) 0)
0xbec: Push((int) 1)
0xbed: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbee: Pop(3)
0xbef: GOTO 0xc13

0xbf0: Push((int) 4)
0xbf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf2: IF (Stack[-1] == 0) GOTO 0xbfc; Pop(1)

0xbf3: PushEmpty(int, string)
0xbf4: Stack[-1] = "syringe" // @poff=891
0xbf5: Call2 0xc6a

0xbf6: Pop(1)
0xbf7: Push((int) 0)
0xbf8: Push((int) 1)
0xbf9: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbfa: Pop(3)
0xbfb: GOTO 0xc13

0xbfc: Push((int) 5)
0xbfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbfe: IF (Stack[-1] == 0) GOTO 0xc08; Pop(1)

0xbff: PushEmpty(int, string)
0xc00: Stack[-1] = "watch" // @poff=907
0xc01: Call2 0xc6a

0xc02: Pop(1)
0xc03: Push((int) 0)
0xc04: Push((int) 1)
0xc05: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc06: Pop(3)
0xc07: GOTO 0xc13

0xc08: Push((int) 6)
0xc09: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0a: IF (Stack[-1] == 0) GOTO 0xc13; Pop(1)

0xc0b: PushEmpty(int, string)
0xc0c: Stack[-1] = "razor" // @poff=919
0xc0d: Call2 0xc6a

0xc0e: Pop(1)
0xc0f: Push((int) 0)
0xc10: Push((int) 1)
0xc11: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc12: Pop(3)
0xc13: GOTO 0xc69

0xc14: PushEmpty(int, int)
0xc15: Stack[-2] = (int) 0
0xc16: Push((int) 50)
0xc17: PushEmpty(int)
0xc18: Call2 0xb1b

0xc19: Pop(0)
0xc1a: Push((int) 50)
0xc1b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc1c: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc1d: Call2 0xb73

0xc1e: Pop(2)
0xc1f: Push((int) 7)
0xc20: @ irand(Stack[-3], Stack[-1])
0xc21: Pop(1)
0xc22: Push((int) 0)
0xc23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc24: IF (Stack[-1] == 0) GOTO 0xc2e; Pop(1)

0xc25: PushEmpty(int, string)
0xc26: Stack[-1] = "beads" // @poff=931
0xc27: Call2 0xc6a

0xc28: Pop(1)
0xc29: Push((int) 0)
0xc2a: Push((int) 1)
0xc2b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc2c: Pop(3)
0xc2d: GOTO 0xc69

0xc2e: Push((int) 1)
0xc2f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc30: IF (Stack[-1] == 0) GOTO 0xc3a; Pop(1)

0xc31: PushEmpty(int, string)
0xc32: Stack[-1] = "bracelet" // @poff=943
0xc33: Call2 0xc6a

0xc34: Pop(1)
0xc35: Push((int) 0)
0xc36: Push((int) 1)
0xc37: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc38: Pop(3)
0xc39: GOTO 0xc69

0xc3a: Push((int) 2)
0xc3b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3c: IF (Stack[-1] == 0) GOTO 0xc46; Pop(1)

0xc3d: PushEmpty(int, string)
0xc3e: Stack[-1] = "ear_ring" // @poff=961
0xc3f: Call2 0xc6a

0xc40: Pop(1)
0xc41: Push((int) 0)
0xc42: Push((int) 1)
0xc43: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc44: Pop(3)
0xc45: GOTO 0xc69

0xc46: Push((int) 3)
0xc47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc48: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc49: PushEmpty(int, string)
0xc4a: Stack[-1] = "gold_ring" // @poff=979
0xc4b: Call2 0xc6a

0xc4c: Pop(1)
0xc4d: Push((int) 0)
0xc4e: Push((int) 1)
0xc4f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc50: Pop(3)
0xc51: GOTO 0xc69

0xc52: Push((int) 4)
0xc53: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc54: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc55: PushEmpty(int, string)
0xc56: Stack[-1] = "silver_ring" // @poff=999
0xc57: Call2 0xc6a

0xc58: Pop(1)
0xc59: Push((int) 0)
0xc5a: Push((int) 1)
0xc5b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc5c: Pop(3)
0xc5d: GOTO 0xc69

0xc5e: Push((int) 5)
0xc5f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc60: IF (Stack[-1] == 0) GOTO 0xc69; Pop(1)

0xc61: PushEmpty(int, string)
0xc62: Stack[-1] = "flower" // @poff=1023
0xc63: Call2 0xc6a

0xc64: Pop(1)
0xc65: Push((int) 0)
0xc66: Push((int) 1)
0xc67: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc68: Pop(3)
0xc69: Return(); Pop(4)

0xc6a: PushEmpty(int, int)
0xc6b: @ GetInvItemByName(Stack[-1], Stack[-3])
0xc6c: Pop(0)
0xc6d: Stack[-1] = Stack[-4]
0xc6e: Return(); Pop(2)

0xc6f: PushEmpty()
0xc70: PushEmpty(object)
0xc71: Stack[-2] = Stack[-1]
0xc72: Push(-1, 0); TaskCall(3)
0xc73: Call2 0x1d7

0xc74: Pop(-1, 0); TaskReturn
0xc75: Pop(1)
0xc76: Return(); Pop(0)

0xc77: PushEmpty(float, float)
0xc78: Push("health") // @poff=1037
0xc79: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc7a: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc7b: Push("health") // @poff=1037
0xc7c: @ GetProperty(Stack[-1], Stack[-2])
0xc7d: Pop(1)
0xc7e: Push((int) 0)
0xc7f: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xc80: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc81: @ SignalDeath(Stack[-4])
0xc82: Pop(0)
0xc83: Return(); Pop(2)

0xc84: PushEmpty()
0xc85: PushEmpty(object)
0xc86: Stack[-2] = Stack[-1]
0xc87: Call2 0xc6f

0xc88: Pop(1)
0xc89: Return(); Pop(0)

0xc8a: PushEmpty()
0xc8b: PushEmpty(object, int, float)
0xc8c: Stack[-7] = Stack[-3]
0xc8d: Stack[-6] = Stack[-2]
0xc8e: Stack[-5] = Stack[-1]
0xc8f: Call2 0x9a0

0xc90: Pop(3)
0xc91: Return(); Pop(0)

0xc92: PushEmpty()
0xc93: PushEmpty(object, int, float, cvector, cvector)
0xc94: Stack[-11] = Stack[-5]
0xc95: Stack[-10] = Stack[-4]
0xc96: Stack[-9] = Stack[-3]
0xc97: Stack[-7] = Stack[-2]
0xc98: Stack[-6] = Stack[-1]
0xc99: Call2 0x9e4

0xc9a: Pop(5)
0xc9b: Return(); Pop(0)

0xc9c: PushEmpty()
0xc9d: Push("unholster") // @poff=1051
0xc9e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc9f: IF (Stack[-1] == 0) GOTO 0xca7; Pop(1)

0xca0: PushEmpty(bool, object)
0xca1: Stack[-4] = Stack[-1]
0xca2: Call2 0xdbf

0xca3: Stack[-2] = Stack[-5]
0xca4: Pop(2)
0xca5: Return(); Pop(0)

0xca6: GOTO 0xcba

0xca7: Push("player_shot") // @poff=1071
0xca8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca9: IF (Stack[-1] == 0) GOTO 0xcb1; Pop(1)

0xcaa: PushEmpty(bool, object)
0xcab: Stack[-4] = Stack[-1]
0xcac: Call2 0xdcc

0xcad: Stack[-2] = Stack[-5]
0xcae: Pop(2)
0xcaf: Return(); Pop(0)

0xcb0: GOTO 0xcba

0xcb1: Push("battle") // @poff=1095
0xcb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb3: IF (Stack[-1] == 0) GOTO 0xcba; Pop(1)

0xcb4: PushEmpty(bool, object)
0xcb5: Stack[-4] = Stack[-1]
0xcb6: Call2 0xde3

0xcb7: Stack[-2] = Stack[-5]
0xcb8: Pop(2)
0xcb9: Return(); Pop(0)

0xcba: Stack[-3] = (bool) 0
0xcbb: Return(); Pop(0)

0xcbc: PushEmpty()
0xcbd: Push("unholster") // @poff=1051
0xcbe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcbf: IF (Stack[-1] == 0) GOTO 0xcc5; Pop(1)

0xcc0: PushEmpty(object)
0xcc1: Stack[-3] = Stack[-1]
0xcc2: Call2 0xdc4

0xcc3: Pop(1)
0xcc4: GOTO 0xcd4

0xcc5: Push("player_shot") // @poff=1071
0xcc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcc7: IF (Stack[-1] == 0) GOTO 0xccd; Pop(1)

0xcc8: PushEmpty(object)
0xcc9: Stack[-3] = Stack[-1]
0xcca: Call2 0xddb

0xccb: Pop(1)
0xccc: GOTO 0xcd4

0xccd: Push("battle") // @poff=1095
0xcce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xccf: IF (Stack[-1] == 0) GOTO 0xcd4; Pop(1)

0xcd0: PushEmpty(object)
0xcd1: Stack[-3] = Stack[-1]
0xcd2: Call2 0xdea

0xcd3: Pop(1)
0xcd4: Return(); Pop(0)

0xcd5: PushEmpty(bool, bool)
0xcd6: PushEmpty(bool)
0xcd7: Stack[-1] = (bool) 0
0xcd8: PushEmpty(bool, object)
0xcd9: Stack[-6] = Stack[-1]
0xcda: Call2 0xdbf

0xcdb: Pop(1)
0xcdc: IF (Stack[-1] == 0) GOTO 0xce3; Pop(1)

0xcdd: PushEmpty(bool, object)
0xcde: Stack[-6] = Stack[-1]
0xcdf: Call2 0x922

0xce0: Pop(1)
0xce1: IF (Stack[-1] == 0) GOTO 0xce3; Pop(1)

0xce2: Stack[-1] = (bool) 1
0xce3: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xce4: @@ IsWeaponHolstered(Stack[-1]); Obj=3 // @poff=1109
0xce5: Pop(0)
0xce6: Pop(0); Push((bool) Stack[-1] == 0)
0xce7: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xce8: Stack[-4] = (bool) 1
0xce9: Return(); Pop(2)

0xcea: Stack[-4] = (bool) 0
0xceb: Return(); Pop(2)

0xcec: PushEmpty()
0xced: PushEmpty(object)
0xcee: Stack[-2] = Stack[-1]
0xcef: Call2 0xdc4

0xcf0: Pop(1)
0xcf1: Return(); Pop(0)

0xcf2: PushEmpty()
0xcf3: PushEmpty(bool, object)
0xcf4: Stack[-3] = Stack[-1]
0xcf5: Call2 0x922

0xcf6: Pop(1)
0xcf7: IF (Stack[-1] == 0) GOTO 0xcfe; Pop(1)

0xcf8: PushEmpty(object)
0xcf9: Call2 0xada

0xcfa: Pop(0)
0xcfb: Push((float)-0.05000000074505806)
0xcfc: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xcfd: Pop(2)
0xcfe: Return(); Pop(0)

0xcff: PushEmpty(object, object)
0xd00: Push("heal") // @poff=1127
0xd01: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd02: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd03: Push("player") // @poff=661
0xd04: @ FindActor(Stack[-2], Stack[-1])
0xd05: Pop(1)
0xd06: PushEmpty(bool, object)
0xd07: Stack[-3] = Stack[-1]
0xd08: Call2 0xdf0

0xd09: Stack[-2] = Stack[-6]
0xd0a: Pop(2)
0xd0b: Return(); Pop(2)

0xd0c: Stack[-1] = 0
0xd0d: Stack[-4] = (bool) 0
0xd0e: Return(); Pop(2)

0xd0f: PushEmpty(object, object)
0xd10: Push("heal") // @poff=1127
0xd11: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd12: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd13: Push("player") // @poff=661
0xd14: @ FindActor(Stack[-2], Stack[-1])
0xd15: Pop(1)
0xd16: PushEmpty(object)
0xd17: Stack[-2] = Stack[-1]
0xd18: Call2 0xdf3

0xd19: Pop(1)
0xd1a: Stack[-1] = 0
0xd1b: Return(); Pop(2)

0xd1c: PushEmpty(string, string)
0xd1d: Stack[-1] = "idle" // @poff=24
0xd1e: Push(Stack[-3])
0xd1f: IF (Stack[-1] == 0) GOTO 0xd21; Pop(1)

0xd20: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xd21: Stack[-1] = Stack[-4]
0xd22: Return(); Pop(2)

0xd23: PushEmpty(int, bool, int, bool)
0xd24: Stack[-2] = (int) 0
0xd25: Push("all") // @poff=16
0xd26: PushEmpty(string, int)
0xd27: Stack[-5] = Stack[-1]
0xd28: Call2 0xd1c

0xd29: Pop(1)
0xd2a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd2b: Pop(2)
0xd2c: Pop(0); Push((bool) Stack[-1] == 0)
0xd2d: IF (Stack[-1] == 0) GOTO 0xd2f; Pop(1)

0xd2e: GOTO 0xd32

0xd2f: Push((int) 1)
0xd30: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd31: GOTO 0xd25

0xd32: Stack[-2] = Stack[-5]
0xd33: Return(); Pop(4)

0xd34: PushEmpty()
0xd35: PushEmpty(bool)
0xd36: Call2 0xe2b

0xd37: Pop(0)
0xd38: IF (Stack[-1] == 0) GOTO 0xd3b; Pop(1)

0xd39: Stack[-2] = (int) 2
0xd3a: GOTO 0xd3c

0xd3b: Stack[-2] = (int) 0
0xd3c: Return(); Pop(0)

0xd3d: PushEmpty()
0xd3e: PushEmpty(object)
0xd3f: Stack[-2] = Stack[-1]
0xd40: Push(-1, 1); TaskCall(6)
0xd41: Call2 0x4de

0xd42: Pop(-1, 1); TaskReturn
0xd43: Pop(1)
0xd44: Return(); Pop(0)

0xd45: PushEmpty()
0xd46: PushEmpty(bool, object)
0xd47: Stack[-3] = Stack[-1]
0xd48: Call2 0x95c

0xd49: Pop(1)
0xd4a: IF (Stack[-1] == 0) GOTO 0xd4d; Pop(1)

0xd4b: Stack[-2] = (int) 2
0xd4c: GOTO 0xd4e

0xd4d: Stack[-2] = (int) 0
0xd4e: Return(); Pop(0)

0xd4f: PushEmpty()
0xd50: PushEmpty(object)
0xd51: Stack[-2] = Stack[-1]
0xd52: Push(-1, 3); TaskCall(7)
0xd53: Call2 0x5f1

0xd54: Pop(-1, 3); TaskReturn
0xd55: Pop(1)
0xd56: Return(); Pop(0)

0xd57: PushEmpty()
0xd58: PushEmpty(bool, object)
0xd59: Stack[-4] = Stack[-1]
0xd5a: Call2 0x95c

0xd5b: Pop(1)
0xd5c: IF (Stack[-1] == 0) GOTO 0xd5f; Pop(1)

0xd5d: Stack[-3] = (int) 2
0xd5e: GOTO 0xd60

0xd5f: Stack[-3] = (int) 0
0xd60: Return(); Pop(0)

0xd61: PushEmpty()
0xd62: PushEmpty(object)
0xd63: Stack[-2] = Stack[-1]
0xd64: Push(-1, 3); TaskCall(8)
0xd65: Call2 0x6ed

0xd66: Pop(-1, 3); TaskReturn
0xd67: Pop(1)
0xd68: Return(); Pop(0)

0xd69: PushEmpty(string, bool, string, bool)
0xd6a: PushEmpty(bool, object, string)
0xd6b: Stack[-9] = Stack[-2]
0xd6c: Stack[-1] = "class" // @poff=1137
0xd6d: Call2 0x927

0xd6e: Pop(2)
0xd6f: Pop(1); Push((bool) Stack[-1] == 0)
0xd70: IF (Stack[-1] == 0) GOTO 0xd73; Pop(1)

0xd71: Stack[-8] = (bool) 0
0xd72: Return(); Pop(4)

0xd73: Push("class") // @poff=1137
0xd74: @@ GetProperty(Stack[-1], Stack[-3]); Obj=7 // @poff=528
0xd75: Pop(1)
0xd76: Push("rat") // @poff=1149
0xd77: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd78: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd79: Stack[-8] = (bool) 0
0xd7a: Return(); Pop(4)

0xd7b: GOTO 0xd87

0xd7c: Push("rat_big") // @poff=1157
0xd7d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7e: IF (Stack[-1] == 0) GOTO 0xd82; Pop(1)

0xd7f: Stack[-8] = (bool) 0
0xd80: Return(); Pop(4)

0xd81: GOTO 0xd87

0xd82: Push("dog") // @poff=1173
0xd83: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd84: IF (Stack[-1] == 0) GOTO 0xd87; Pop(1)

0xd85: Stack[-8] = (bool) 0
0xd86: Return(); Pop(4)

0xd87: @ CanSee(Stack[-1], Stack[-7])
0xd88: Pop(0)
0xd89: PushEmpty(bool)
0xd8a: Stack[-1] = (bool) 1
0xd8b: Push(Stack[-2])
0xd8c: IF (Stack[-1] == 1) GOTO 0xd95; Pop(1)

0xd8d: PushEmpty(float, object)
0xd8e: Stack[-10] = Stack[-1]
0xd8f: Call2 0x91a

0xd90: Pop(1)
0xd91: Pop(0); Push(Stack[-7] * Stack[-7]);
0xd92: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xd93: IF (Stack[-1] == 1) GOTO 0xd95; Pop(1)

0xd94: Stack[-1] = (bool) 0
0xd95: IF (Stack[-1] == 0) GOTO 0xd98; Pop(1)

0xd96: Stack[-8] = (bool) 1
0xd97: Return(); Pop(4)

0xd98: @ CanSee(Stack[-1], Stack[-6])
0xd99: Pop(0)
0xd9a: PushEmpty(bool)
0xd9b: Stack[-1] = (bool) 1
0xd9c: Push(Stack[-2])
0xd9d: IF (Stack[-1] == 1) GOTO 0xda6; Pop(1)

0xd9e: PushEmpty(float, object)
0xd9f: Stack[-9] = Stack[-1]
0xda0: Call2 0x91a

0xda1: Pop(1)
0xda2: Pop(0); Push(Stack[-7] * Stack[-7]);
0xda3: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xda4: IF (Stack[-1] == 1) GOTO 0xda6; Pop(1)

0xda5: Stack[-1] = (bool) 0
0xda6: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xda7: Stack[-8] = (bool) 1
0xda8: Return(); Pop(4)

0xda9: Stack[-8] = (bool) 0
0xdaa: Return(); Pop(4)

0xdab: PushEmpty()
0xdac: Stack[-2] = (int) 0
0xdad: Return(); Pop(0)

0xdae: PushEmpty()
0xdaf: Return(); Pop(0)

0xdb0: PushEmpty()
0xdb1: Stack[-3] = (int) 0
0xdb2: Return(); Pop(0)

0xdb3: PushEmpty()
0xdb4: Return(); Pop(0)

0xdb5: PushEmpty()
0xdb6: Stack[-2] = (int) 2
0xdb7: Return(); Pop(0)

0xdb8: PushEmpty()
0xdb9: PushEmpty(object)
0xdba: Stack[-2] = Stack[-1]
0xdbb: Call2 0xe03

0xdbc: Pop(1)
0xdbd: Return(); Pop(0)

0xdbe: Return(); Pop(0)

0xdbf: PushEmpty(bool, bool)
0xdc0: @ CanSee(Stack[-1], Stack[-3])
0xdc1: Pop(0)
0xdc2: Stack[-1] = Stack[-4]
0xdc3: Return(); Pop(2)

0xdc4: PushEmpty()
0xdc5: PushEmpty(object)
0xdc6: Stack[-2] = Stack[-1]
0xdc7: Push(-1, 3); TaskCall(9)
0xdc8: Call2 0x7af

0xdc9: Pop(-1, 3); TaskReturn
0xdca: Pop(1)
0xdcb: Return(); Pop(0)

0xdcc: PushEmpty(bool, bool)
0xdcd: @ CanSee(Stack[-1], Stack[-3])
0xdce: Pop(0)
0xdcf: Stack[-4] = (bool) 1
0xdd0: Push(Stack[-1])
0xdd1: IF (Stack[-1] == 1) GOTO 0xdda; Pop(1)

0xdd2: PushEmpty(float, object)
0xdd3: Stack[-5] = Stack[-1]
0xdd4: Call2 0x91a

0xdd5: Pop(1)
0xdd6: Push((int) 4000000)
0xdd7: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xdd8: IF (Stack[-1] == 1) GOTO 0xdda; Pop(1)

0xdd9: Stack[-4] = (bool) 0
0xdda: Return(); Pop(2)

0xddb: PushEmpty()
0xddc: PushEmpty(object)
0xddd: Stack[-2] = Stack[-1]
0xdde: Push(-1, 3); TaskCall(10)
0xddf: Call2 0x871

0xde0: Pop(-1, 3); TaskReturn
0xde1: Pop(1)
0xde2: Return(); Pop(0)

0xde3: PushEmpty()
0xde4: PushEmpty(bool, object)
0xde5: Stack[-3] = Stack[-1]
0xde6: Call2 0xdcc

0xde7: Stack[-2] = Stack[-4]
0xde8: Pop(2)
0xde9: Return(); Pop(0)

0xdea: PushEmpty()
0xdeb: PushEmpty(object)
0xdec: Stack[-2] = Stack[-1]
0xded: Call2 0xddb

0xdee: Pop(1)
0xdef: Return(); Pop(0)

0xdf0: PushEmpty()
0xdf1: Stack[-2] = (bool) 0
0xdf2: Return(); Pop(0)

0xdf3: PushEmpty()
0xdf4: Return(); Pop(0)

0xdf5: Stack[-1] = (int) 515555
0xdf6: Return(); Pop(0)

0xdf7: Stack[-1] = (int) 503340
0xdf8: Return(); Pop(0)

0xdf9: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=1181
0xdfa: Return(); Pop(0)

0xdfb: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=1221
0xdfc: Return(); Pop(0)

0xdfd: Stack[-1] = (bool) 0
0xdfe: Return(); Pop(0)

0xdff: Push(GlobalVars[0])
0xe00: Stack[-1] = (bool) 0
0xe01: GlobalVars[0] = Stack[-1]; Pop(1)
0xe02: Return(); Pop(0)

0xe03: PushEmpty(bool, bool)
0xe04: Push(GlobalVars[0])
0xe05: IF (Stack[-1] == 0) GOTO 0xe10; Pop(1)

0xe06: @ IsOverrideActive(Stack[-1])
0xe07: Pop(0)
0xe08: Pop(0); Push((bool) Stack[-1] == 0)
0xe09: IF (Stack[-1] == 0) GOTO 0xe0e; Pop(1)

0xe0a: PushEmpty(object)
0xe0b: Stack[-4] = Stack[-1]
0xe0c: Call2 0xb66

0xe0d: Pop(1)
0xe0e: Return(); Pop(2)

0xe0f: GOTO 0xe2a

0xe10: Push((int) 1000)
0xe11: PushEmpty(int, object)
0xe12: Stack[-6] = Stack[-1]
0xe13: Push(-2, 1); TaskCall(1)
0xe14: Call2 0x28

0xe15: Pop(-2, 1); TaskReturn
0xe16: Pop(1)
0xe17: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe18: IF (Stack[-1] == 0) GOTO 0xe2a; Pop(1)

0xe19: PushEmpty(bool, object)
0xe1a: Stack[-5] = Stack[-1]
0xe1b: Call2 0xa57

0xe1c: Pop(1)
0xe1d: Pop(1); Push((bool) Stack[-1] == 0)
0xe1e: IF (Stack[-1] == 0) GOTO 0xe20; Pop(1)

0xe1f: Return(); Pop(2)

0xe20: PushEmpty(object)
0xe21: Stack[-4] = Stack[-1]
0xe22: Push(-1, 1); TaskCall(0)
0xe23: Call2 0x0

0xe24: Pop(-1, 1); TaskReturn
0xe25: Pop(1)
0xe26: PushEmpty(object)
0xe27: Stack[-4] = Stack[-1]
0xe28: Call2 0xa8e

0xe29: Pop(1)
0xe2a: Return(); Pop(2)

0xe2b: PushEmpty(float)
0xe2c: Call2 0xb58

0xe2d: Pop(0)
0xe2e: Push((float)0.699999988079071)
0xe2f: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0xe30: Return(); Pop(0)

0xe31: PushEmpty()
0xe32: PushEmpty(bool, object, object, float)
0xe33: Stack[-7] = Stack[-3]
0xe34: Stack[-6] = Stack[-2]
0xe35: Stack[-1] = (float) 700.0
0xe36: Call2 0xd69

0xe37: Stack[-4] = Stack[-8]
0xe38: Pop(4)
0xe39: Return(); Pop(0)

0xe3a: PushEmpty()
0xe3b: PushEmpty(bool, object)
0xe3c: Stack[-3] = Stack[-1]
0xe3d: Call2 0x922

0xe3e: Pop(1)
0xe3f: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe40: PushEmpty(object)
0xe41: Call2 0xada

0xe42: Pop(0)
0xe43: Push((float)-0.10000000149011612)
0xe44: Push((bool) 1)
0xe45: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe46: Pop(3)
0xe47: PushEmpty(bool)
0xe48: Stack[-1] = (bool) 0
0xe49: Call2 0xbbb

0xe4a: Pop(1)
0xe4b: PushEmpty()
0xe4c: Call2 0xba3

0xe4d: Pop(0)
0xe4e: Push(GlobalVars[0])
0xe4f: Stack[-1] = (bool) 1
0xe50: GlobalVars[0] = Stack[-1]; Pop(1)
0xe51: Push((int) 50)
0xe52: Push((int) 40)
0xe53: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xe54: Pop(2)
0xe55: Return(); Pop(0)

