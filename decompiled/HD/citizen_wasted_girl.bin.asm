GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	Neutral
	all
	idle
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	fdie
	GetPosition
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	attack_on
	attack_stay
	attack_off
	Can't retreat, distance: 
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	fhit
	bhit
	hit_react
	1
	2
	add
	size
	get
	scripted
	blood_dir.xml
	Can't find lsh animation : 
	branch
	player
	reputation
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
	SetProperty
	GetItemID
	liver
	kidney
	heart
	blood
	lemon
	rusk
	hook
	syringe
	watch
	razor
	beads
	bracelet
	ear_ring
	gold_ring
	silver_ring
	flower
	health
	unholster
	player_shot
	battle
	IsWeaponHolstered
	heal
	class
	rat
	rat_big
	dog
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	CameraTransit (3 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
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

RunOp = 0x42a
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x184 Vars = (int, int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x39d Vars = (object)
		EVENT_6 Op = 0x3ab Vars = ()
		EVENT_22 Op = 0x424 Vars = (object, int, float, float)
		EVENT_16 Op = 0x426 Vars = (object, string)
		EVENT_41 Op = 0x428 Vars = (object)
	GTASK_4 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x442 Vars = (object)
		EVENT_17 Op = 0x456 Vars = (object)
		EVENT_30 Op = 0x46e Vars = (object, object, bool)
		EVENT_40 Op = 0x48a Vars = (object)
		EVENT_42 Op = 0x49e Vars = (object, string)
		EVENT_26 Op = 0x4c3 Vars = (string)
		EVENT_1 Op = 0x4d1 Vars = (object)
		EVENT_3 Op = 0x4e4 Vars = (object)
		EVENT_7 Op = 0x4ea Vars = (int)
		EVENT_6 Op = 0x4f6 Vars = ()
		EVENT_41 Op = 0x50d Vars = (object)
		EVENT_10 Op = 0x57e Vars = (object)
		EVENT_28 Op = 0x582 Vars = ()
	GTASK_5  Params = 0
		EVENT_0 Op = 0x59b Vars = (object)
		EVENT_17 Op = 0x5af Vars = (object)
		EVENT_30 Op = 0x5c7 Vars = (object, object, bool)
		EVENT_40 Op = 0x5e3 Vars = (object)
		EVENT_42 Op = 0x5f7 Vars = (object, string)
		EVENT_26 Op = 0x61c Vars = (string)
		EVENT_6 Op = 0x62a Vars = ()
		EVENT_1 Op = 0x631 Vars = (object)
	GTASK_6 Vars = (object) Params = 1
		EVENT_0 Op = 0x6cd Vars = (object)
		EVENT_17 Op = 0x6e1 Vars = (object)
		EVENT_30 Op = 0x6f9 Vars = (object, object, bool)
		EVENT_40 Op = 0x715 Vars = (object)
		EVENT_42 Op = 0x729 Vars = (object, string)
		EVENT_26 Op = 0x74e Vars = (string)
		EVENT_41 Op = 0x767 Vars = (object)
		EVENT_7 Op = 0x770 Vars = (int)
		EVENT_6 Op = 0x793 Vars = ()
		EVENT_1 Op = 0x79a Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x7c4 Vars = ()
		EVENT_7 Op = 0x832 Vars = (int)
		EVENT_41 Op = 0x86d Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x8ed Vars = (int)
		EVENT_41 Op = 0x928 Vars = (object)
	GTASK_9 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x941 Vars = ()
		EVENT_7 Op = 0x9af Vars = (int)
		EVENT_41 Op = 0x9ea Vars = (object)
	GTASK_10 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xa03 Vars = ()
		EVENT_7 Op = 0xa71 Vars = (int)
		EVENT_41 Op = 0xaac Vars = (object)

Events:
EVENT_16 Op = 0xe94 Vars = (object, string)
EVENT_41 Op = 0xea1 Vars = (object)
EVENT_22 Op = 0xea7 Vars = (object, int, float, float)
EVENT_43 Op = 0xeaf Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x101a

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0xc4d

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all")
0x12: Push("idle")
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x101a

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
0x2b: Stack[-2] = Stack[-12]
0x2c: Stack[-1] = (float) 70.0
0x2d: Call2 0xbb9

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x1014

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x1012

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x1016

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x1018

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0xd5e

0x4b: Pop(0)
0x4c: @@ SetPlayerName(Stack[-1])
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
0x58: Stack[-2] = Stack[-11]
0x59: Stack[-1] = Stack[-6]
0x5a: Push(-2, 4); TaskCall(2)
0x5b: Call2 0x72

0x5c: Pop(-2, 4); TaskReturn
0x5d: Pop(2)
0x5e: @@ IsDialogEnd(Stack[-1])
0x5f: Pop(0)
0x60: Pop(0); Push((bool) Stack[-1] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x62: @ sync()
0x63: Pop(0)
0x64: @@ IsDialogEnd(Stack[-1])
0x65: Pop(0)
0x66: GOTO 0x60

0x67: PushEmpty(object)
0x68: Stack[-1] = Stack[-10]
0x69: Call2 0xbfe

0x6a: Pop(1)
0x6b: @ StopDialog(Stack[-4])
0x6c: Pop(0)
0x6d: @@ GetReturnValue(Stack[-2])
0x6e: Pop(0)
0x6f: Stack[-10] = Stack[-2]
0x70: Return(); Pop(8)

0x71: Stack[-4] = 0
0x72: PushEmpty()
0x73: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x74: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x75: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x76: Push((int) 1)
0x77: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x78: PushEmpty(bool)
0x79: Stack[-1] = (bool) 0
0x7a: PushEmpty(bool)
0x7b: Stack[-1] = (bool) 0
0x7c: PushEmpty(bool)
0x7d: Stack[-1] = (bool) 0
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0xcfd

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0xd09

0x88: Pop(1)
0x89: Pop(1); Push((bool) Stack[-1] == 0)
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: Stack[-1] = (bool) 1
0x8c: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0xd13

0x90: Pop(1)
0x91: Pop(1); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[-1] = (bool) 1
0x94: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0xd1d

0x98: Pop(1)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Stack[-1] = (bool) 1
0x9c: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9d: PushEmpty(bool, object)
0x9e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f: Call2 0xd27

0xa0: Pop(1)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Stack[-1] = (bool) 1
0xa4: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xa5: PushEmpty(string)
0xa6: Stack[-1] = "Neutral"
0xa7: Call2 0x16e

0xa8: Pop(1)
0xa9: Push((int) 543344)
0xaa: @@ SetMessage(Stack[-1])
0xab: Pop(1)
0xac: @@ ClearReplies()
0xad: Pop(0)
0xae: Push((int) 543362)
0xaf: Push((int) 45824)
0xb0: Push((int) 45822)
0xb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2: Pop(3)
0xb3: Push((int) 543361)
0xb4: Push((int) -1)
0xb5: Push((int) 45821)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: GOTO 0x150

0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0xcfd

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0xbe: PushEmpty(string)
0xbf: Stack[-1] = "Neutral"
0xc0: Call2 0x16e

0xc1: Pop(1)
0xc2: Push((int) 543343)
0xc3: @@ SetMessage(Stack[-1])
0xc4: Pop(1)
0xc5: @@ ClearReplies()
0xc6: Pop(0)
0xc7: PushEmpty(bool)
0xc8: Stack[-1] = (bool) 1
0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0xd09

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0xd13

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Stack[-1] = (bool) 0
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: Push((int) 543349)
0xd6: Push((int) 45804)
0xd7: Push((int) 45807)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: PushEmpty(bool)
0xdb: Stack[-1] = (bool) 1
0xdc: PushEmpty(bool, object)
0xdd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xde: Call2 0xd09

0xdf: Pop(1)
0xe0: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe1: PushEmpty(bool, object)
0xe2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Call2 0xd13

0xe4: Pop(1)
0xe5: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe6: Stack[-1] = (bool) 0
0xe7: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe8: Push((int) 543345)
0xe9: Push((int) 45804)
0xea: Push((int) 45803)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: PushEmpty(bool)
0xee: Stack[-1] = (bool) 1
0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Call2 0xd1d

0xf2: Pop(1)
0xf3: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf4: PushEmpty(bool, object)
0xf5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Call2 0xd27

0xf7: Pop(1)
0xf8: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf9: Stack[-1] = (bool) 0
0xfa: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfb: Push((int) 543347)
0xfc: Push((int) 45806)
0xfd: Push((int) 45805)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: PushEmpty(bool)
0x101: Stack[-1] = (bool) 1
0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x104: Call2 0xd1d

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x107: PushEmpty(bool, object)
0x108: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x109: Call2 0xd27

0x10a: Pop(1)
0x10b: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x10c: Stack[-1] = (bool) 0
0x10d: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10e: Push((int) 543357)
0x10f: Push((int) 45806)
0x110: Push((int) 45816)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: PushEmpty(bool)
0x114: Stack[-1] = (bool) 1
0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x117: Call2 0xd1d

0x118: Pop(1)
0x119: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11a: PushEmpty(bool, object)
0x11b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Call2 0xd27

0x11d: Pop(1)
0x11e: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11f: Stack[-1] = (bool) 0
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: Push((int) 543355)
0x122: Push((int) -1)
0x123: Push((int) 45814)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 543351)
0x127: Push((int) -1)
0x128: Push((int) 45809)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: GOTO 0x150

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Neutral"
0x12e: Call2 0x16e

0x12f: Pop(1)
0x130: Push((int) 538136)
0x131: @@ SetMessage(Stack[-1])
0x132: Pop(1)
0x133: @@ ClearReplies()
0x134: Pop(0)
0x135: PushEmpty(bool)
0x136: Stack[-1] = (bool) 0
0x137: PushEmpty(bool, object)
0x138: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x139: Call2 0xcf1

0x13a: Pop(1)
0x13b: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13c: PushEmpty(bool, object)
0x13d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Call2 0xd31

0x13f: Pop(1)
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: Stack[-1] = (bool) 1
0x142: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x143: Push((int) 538137)
0x144: Push((int) 40009)
0x145: Push((int) 40008)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Push((int) 538165)
0x149: Push((int) -1)
0x14a: Push((int) 40040)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: GOTO 0x150

0x14e: Return(); Pop(0)

0x14f: GOTO 0x76

0x150: PushEmpty(bool)
0x151: Call2 0x101a

0x152: Pop(0)
0x153: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x154: @ lshWaitForAnimEnd()
0x155: Pop(0)
0x156: Push( Stack[3 + Tasks[-1].StackPointer] )
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: GOTO 0x15e

0x159: PushEmpty(string)
0x15a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x15b: Call2 0xc4d

0x15c: Pop(1)
0x15d: GOTO 0x154

0x15e: GOTO 0x16d

0x15f: Push("all")
0x160: Push("idle")
0x161: @ PlayAnimation(Stack[-2], Stack[-1])
0x162: Pop(2)
0x163: @ WaitForAnimEnd()
0x164: Pop(0)
0x165: Push( Stack[3 + Tasks[-1].StackPointer] )
0x166: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x167: GOTO 0x16d

0x168: Push("all")
0x169: Push("idle")
0x16a: @ PlayAnimation(Stack[-2], Stack[-1])
0x16b: Pop(2)
0x16c: GOTO 0x163

0x16d: Return(); Pop(0)

0x16e: PushEmpty()
0x16f: PushEmpty(bool)
0x170: Call2 0x101a

0x171: Pop(0)
0x172: Pop(1); Push((bool) Stack[-1] == 0)
0x173: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x174: Return(); Pop(0)

0x175: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: Return(); Pop(0)

0x178: PushEmpty(string, bool)
0x179: Stack[-2] = Stack[-3]
0x17a: Push("")
0x17b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17d: Stack[-1] = (bool) 0
0x17e: GOTO 0x180

0x17f: Stack[-1] = (bool) 1
0x180: Call2 0xc5d

0x181: Pop(2)
0x182: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x183: Return(); Pop(0)

0x184: PushEmpty()
0x185: Push((int) 1)
0x186: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x187: PushEmpty()
0x188: Call2 0xc77

0x189: Pop(0)
0x18a: Push((int) 45802)
0x18b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x18d: PushEmpty(bool)
0x18e: Stack[-1] = (bool) 0
0x18f: PushEmpty(bool)
0x190: Stack[-1] = (bool) 0
0x191: PushEmpty(bool)
0x192: Stack[-1] = (bool) 0
0x193: PushEmpty(bool)
0x194: Stack[-1] = (bool) 0
0x195: PushEmpty(bool, object)
0x196: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x197: Call2 0xcfd

0x198: Pop(1)
0x199: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19a: PushEmpty(bool, object)
0x19b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Call2 0xd09

0x19d: Pop(1)
0x19e: Pop(1); Push((bool) Stack[-1] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Stack[-1] = (bool) 1
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0xd13

0x1a5: Pop(1)
0x1a6: Pop(1); Push((bool) Stack[-1] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Stack[-1] = (bool) 1
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1aa: PushEmpty(bool, object)
0x1ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ac: Call2 0xd1d

0x1ad: Pop(1)
0x1ae: Pop(1); Push((bool) Stack[-1] == 0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: Stack[-1] = (bool) 1
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b2: PushEmpty(bool, object)
0x1b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Call2 0xd27

0x1b5: Pop(1)
0x1b6: Pop(1); Push((bool) Stack[-1] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = (bool) 1
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral"
0x1bc: Call2 0x16e

0x1bd: Pop(1)
0x1be: Push((int) 543344)
0x1bf: @@ SetMessage(Stack[-1])
0x1c0: Pop(1)
0x1c1: @@ ClearReplies()
0x1c2: Pop(0)
0x1c3: Push((int) 543362)
0x1c4: Push((int) 45824)
0x1c5: Push((int) 45822)
0x1c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c7: Pop(3)
0x1c8: Push((int) 543361)
0x1c9: Push((int) -1)
0x1ca: Push((int) 45821)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: PushEmpty(bool, object)
0x1cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d0: Call2 0xcfd

0x1d1: Pop(1)
0x1d2: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x1d3: PushEmpty(string)
0x1d4: Stack[-1] = "Neutral"
0x1d5: Call2 0x16e

0x1d6: Pop(1)
0x1d7: Push((int) 543343)
0x1d8: @@ SetMessage(Stack[-1])
0x1d9: Pop(1)
0x1da: @@ ClearReplies()
0x1db: Pop(0)
0x1dc: PushEmpty(bool)
0x1dd: Stack[-1] = (bool) 1
0x1de: PushEmpty(bool, object)
0x1df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Call2 0xd09

0x1e1: Pop(1)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e3: PushEmpty(bool, object)
0x1e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e5: Call2 0xd13

0x1e6: Pop(1)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: Stack[-1] = (bool) 0
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ea: Push((int) 543349)
0x1eb: Push((int) 45804)
0x1ec: Push((int) 45807)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: PushEmpty(bool)
0x1f0: Stack[-1] = (bool) 1
0x1f1: PushEmpty(bool, object)
0x1f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f3: Call2 0xd09

0x1f4: Pop(1)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Call2 0xd13

0x1f9: Pop(1)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Stack[-1] = (bool) 0
0x1fc: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fd: Push((int) 543345)
0x1fe: Push((int) 45804)
0x1ff: Push((int) 45803)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: PushEmpty(bool)
0x203: Stack[-1] = (bool) 1
0x204: PushEmpty(bool, object)
0x205: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x206: Call2 0xd1d

0x207: Pop(1)
0x208: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x209: PushEmpty(bool, object)
0x20a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20b: Call2 0xd27

0x20c: Pop(1)
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: Stack[-1] = (bool) 0
0x20f: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x210: Push((int) 543347)
0x211: Push((int) 45806)
0x212: Push((int) 45805)
0x213: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x214: Pop(3)
0x215: PushEmpty(bool)
0x216: Stack[-1] = (bool) 1
0x217: PushEmpty(bool, object)
0x218: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x219: Call2 0xd1d

0x21a: Pop(1)
0x21b: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21c: PushEmpty(bool, object)
0x21d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21e: Call2 0xd27

0x21f: Pop(1)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: Stack[-1] = (bool) 0
0x222: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x223: Push((int) 543357)
0x224: Push((int) 45806)
0x225: Push((int) 45816)
0x226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(3)
0x228: PushEmpty(bool)
0x229: Stack[-1] = (bool) 1
0x22a: PushEmpty(bool, object)
0x22b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22c: Call2 0xd1d

0x22d: Pop(1)
0x22e: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22f: PushEmpty(bool, object)
0x230: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x231: Call2 0xd27

0x232: Pop(1)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: Stack[-1] = (bool) 0
0x235: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x236: Push((int) 543355)
0x237: Push((int) -1)
0x238: Push((int) 45814)
0x239: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23a: Pop(3)
0x23b: Push((int) 543351)
0x23c: Push((int) -1)
0x23d: Push((int) 45809)
0x23e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(3)
0x240: Return(); Pop(0)

0x241: PushEmpty(string)
0x242: Stack[-1] = "Neutral"
0x243: Call2 0x16e

0x244: Pop(1)
0x245: Push((int) 538136)
0x246: @@ SetMessage(Stack[-1])
0x247: Pop(1)
0x248: @@ ClearReplies()
0x249: Pop(0)
0x24a: PushEmpty(bool)
0x24b: Stack[-1] = (bool) 0
0x24c: PushEmpty(bool, object)
0x24d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24e: Call2 0xcf1

0x24f: Pop(1)
0x250: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x251: PushEmpty(bool, object)
0x252: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x253: Call2 0xd31

0x254: Pop(1)
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: Stack[-1] = (bool) 1
0x257: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x258: Push((int) 538137)
0x259: Push((int) 40009)
0x25a: Push((int) 40008)
0x25b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(3)
0x25d: Push((int) 538165)
0x25e: Push((int) -1)
0x25f: Push((int) 40040)
0x260: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x261: Pop(3)
0x262: Return(); Pop(0)

0x263: Push((int) 40009)
0x264: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x266: PushEmpty(string)
0x267: Stack[-1] = "Neutral"
0x268: Call2 0x16e

0x269: Pop(1)
0x26a: Push((int) 538138)
0x26b: @@ SetMessage(Stack[-1])
0x26c: Pop(1)
0x26d: @@ ClearReplies()
0x26e: Pop(0)
0x26f: Push((int) 538139)
0x270: Push((int) 40011)
0x271: Push((int) 40010)
0x272: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(3)
0x274: Push((int) 538164)
0x275: Push((int) 40019)
0x276: Push((int) 40038)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: Return(); Pop(0)

0x27a: Push((int) 40011)
0x27b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x27d: PushEmpty(string)
0x27e: Stack[-1] = "Neutral"
0x27f: Call2 0x16e

0x280: Pop(1)
0x281: Push((int) 538140)
0x282: @@ SetMessage(Stack[-1])
0x283: Pop(1)
0x284: @@ ClearReplies()
0x285: Pop(0)
0x286: Push((int) 538141)
0x287: Push((int) 40013)
0x288: Push((int) 40012)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: Push((int) 538163)
0x28c: Push((int) 40019)
0x28d: Push((int) 40036)
0x28e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28f: Pop(3)
0x290: Return(); Pop(0)

0x291: Push((int) 40013)
0x292: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x294: PushEmpty(string)
0x295: Stack[-1] = "Neutral"
0x296: Call2 0x16e

0x297: Pop(1)
0x298: Push((int) 538142)
0x299: @@ SetMessage(Stack[-1])
0x29a: Pop(1)
0x29b: @@ ClearReplies()
0x29c: Pop(0)
0x29d: Push((int) 538143)
0x29e: Push((int) 40015)
0x29f: Push((int) 40014)
0x2a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a1: Pop(3)
0x2a2: Push((int) 538162)
0x2a3: Push((int) 40015)
0x2a4: Push((int) 40034)
0x2a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a6: Pop(3)
0x2a7: Return(); Pop(0)

0x2a8: Push((int) 40015)
0x2a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2ab: PushEmpty(string)
0x2ac: Stack[-1] = "Neutral"
0x2ad: Call2 0x16e

0x2ae: Pop(1)
0x2af: Push((int) 538144)
0x2b0: @@ SetMessage(Stack[-1])
0x2b1: Pop(1)
0x2b2: @@ ClearReplies()
0x2b3: Pop(0)
0x2b4: Push((int) 538145)
0x2b5: Push((int) 40017)
0x2b6: Push((int) 40016)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: Push((int) 538157)
0x2ba: Push((int) 40017)
0x2bb: Push((int) 40028)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Push((int) 538158)
0x2bf: Push((int) 40031)
0x2c0: Push((int) 40030)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 40031)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Neutral"
0x2c9: Call2 0x16e

0x2ca: Pop(1)
0x2cb: Push((int) 538159)
0x2cc: @@ SetMessage(Stack[-1])
0x2cd: Pop(1)
0x2ce: @@ ClearReplies()
0x2cf: Pop(0)
0x2d0: Push((int) 538160)
0x2d1: Push((int) -1)
0x2d2: Push((int) 40032)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Push((int) 538161)
0x2d6: Push((int) -1)
0x2d7: Push((int) 40033)
0x2d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d9: Pop(3)
0x2da: Return(); Pop(0)

0x2db: Push((int) 40017)
0x2dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2de: PushEmpty(string)
0x2df: Stack[-1] = "Neutral"
0x2e0: Call2 0x16e

0x2e1: Pop(1)
0x2e2: Push((int) 538146)
0x2e3: @@ SetMessage(Stack[-1])
0x2e4: Pop(1)
0x2e5: @@ ClearReplies()
0x2e6: Pop(0)
0x2e7: Push((int) 538147)
0x2e8: Push((int) 40019)
0x2e9: Push((int) 40018)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: Return(); Pop(0)

0x2ed: Push((int) 40019)
0x2ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2f0: PushEmpty(string)
0x2f1: Stack[-1] = "Neutral"
0x2f2: Call2 0x16e

0x2f3: Pop(1)
0x2f4: Push((int) 538148)
0x2f5: @@ SetMessage(Stack[-1])
0x2f6: Pop(1)
0x2f7: @@ ClearReplies()
0x2f8: Pop(0)
0x2f9: Push((int) 538149)
0x2fa: Push((int) 40021)
0x2fb: Push((int) 40020)
0x2fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(3)
0x2fe: Push((int) 538156)
0x2ff: Push((int) -1)
0x300: Push((int) 40027)
0x301: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x302: Pop(3)
0x303: Return(); Pop(0)

0x304: Push((int) 40021)
0x305: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x307: PushEmpty(string)
0x308: Stack[-1] = "Neutral"
0x309: Call2 0x16e

0x30a: Pop(1)
0x30b: Push((int) 538150)
0x30c: @@ SetMessage(Stack[-1])
0x30d: Pop(1)
0x30e: @@ ClearReplies()
0x30f: Pop(0)
0x310: Push((int) 538151)
0x311: Push((int) -1)
0x312: Push((int) 40022)
0x313: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x314: Pop(3)
0x315: Push((int) 538152)
0x316: Push((int) 40024)
0x317: Push((int) 40023)
0x318: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x319: Pop(3)
0x31a: Return(); Pop(0)

0x31b: Push((int) 40024)
0x31c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x31e: PushEmpty(string)
0x31f: Stack[-1] = "Neutral"
0x320: Call2 0x16e

0x321: Pop(1)
0x322: Push((int) 538153)
0x323: @@ SetMessage(Stack[-1])
0x324: Pop(1)
0x325: @@ ClearReplies()
0x326: Pop(0)
0x327: Push((int) 538154)
0x328: Push((int) -1)
0x329: Push((int) 40025)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: Push((int) 538155)
0x32d: Push((int) -1)
0x32e: Push((int) 40026)
0x32f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x330: Pop(3)
0x331: Return(); Pop(0)

0x332: Push((int) 45806)
0x333: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x335: PushEmpty(string)
0x336: Stack[-1] = "Neutral"
0x337: Call2 0x16e

0x338: Pop(1)
0x339: Push((int) 543348)
0x33a: @@ SetMessage(Stack[-1])
0x33b: Pop(1)
0x33c: @@ ClearReplies()
0x33d: Pop(0)
0x33e: Push((int) 543358)
0x33f: Push((int) -1)
0x340: Push((int) 45818)
0x341: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x342: Pop(3)
0x343: Push((int) 543359)
0x344: Push((int) -1)
0x345: Push((int) 45819)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Push((int) 543360)
0x349: Push((int) -1)
0x34a: Push((int) 45820)
0x34b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34c: Pop(3)
0x34d: Return(); Pop(0)

0x34e: Push((int) 45804)
0x34f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x351: PushEmpty(string)
0x352: Stack[-1] = "Neutral"
0x353: Call2 0x16e

0x354: Pop(1)
0x355: Push((int) 543346)
0x356: @@ SetMessage(Stack[-1])
0x357: Pop(1)
0x358: @@ ClearReplies()
0x359: Pop(0)
0x35a: Push((int) 543352)
0x35b: Push((int) -1)
0x35c: Push((int) 45810)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: Push((int) 543353)
0x360: Push((int) -1)
0x361: Push((int) 45812)
0x362: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x363: Pop(3)
0x364: Push((int) 543354)
0x365: Push((int) -1)
0x366: Push((int) 45813)
0x367: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x368: Pop(3)
0x369: Return(); Pop(0)

0x36a: Push((int) 45824)
0x36b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x36d: PushEmpty(string)
0x36e: Stack[-1] = "Neutral"
0x36f: Call2 0x16e

0x370: Pop(1)
0x371: Push((int) 543364)
0x372: @@ SetMessage(Stack[-1])
0x373: Pop(1)
0x374: @@ ClearReplies()
0x375: Pop(0)
0x376: Push((int) 543365)
0x377: Push((int) -1)
0x378: Push((int) 45825)
0x379: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37a: Pop(3)
0x37b: Push((int) 543366)
0x37c: Push((int) -1)
0x37d: Push((int) 45826)
0x37e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37f: Pop(3)
0x380: Return(); Pop(0)

0x381: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x382: PushEmpty(bool)
0x383: Call2 0x101a

0x384: Pop(0)
0x385: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x386: @ lshStopAnimation()
0x387: Pop(0)
0x388: GOTO 0x38b

0x389: @ StopAnimation()
0x38a: Pop(0)
0x38b: Return(); Pop(0)

0x38c: GOTO 0x185

0x38d: Return(); Pop(0)

0x38e: PushEmpty()
0x38f: EventDisable(0)
0x390: PushEmpty(object)
0x391: Stack[-1] = Stack[-2]
0x392: Call2 0x3af

0x393: Pop(1)
0x394: PushEmpty(object)
0x395: Stack[-1] = Stack[-2]
0x396: Call2 0x1057

0x397: Pop(1)
0x398: EventEnable(0)
0x399: @ Hold()
0x39a: Pop(0)
0x39b: GOTO 0x399

0x39c: Return(); Pop(0)

0x39d: PushEmpty(int, int)
0x39e: PushEmpty(int, object)
0x39f: Stack[-1] = Stack[-5]
0x3a0: Call2 0xfd2

0x3a1: Stack[-3] = Stack[-2]
0x3a2: Pop(2)
0x3a3: Push((int) 0)
0x3a4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a6: PushEmpty(object)
0x3a7: Stack[-1] = Stack[-4]
0x3a8: Call2 0xfd5

0x3a9: Pop(1)
0x3aa: Return(); Pop(2)

0x3ab: PushEmpty()
0x3ac: Call2 0xfdb

0x3ad: Pop(0)
0x3ae: Return(); Pop(0)

0x3af: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x3b0: Pop(0); Push((bool) Stack[-21] == 0)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b2: PushEmpty(string)
0x3b3: Stack[-1] = "fdie"
0x3b4: Call2 0x40a

0x3b5: Pop(1)
0x3b6: GOTO 0x409

0x3b7: @@ GetPosition(Stack[-10])
0x3b8: Pop(0)
0x3b9: @ GetPosition(Stack[-9])
0x3ba: Pop(0)
0x3bb: @ GetDirection(Stack[-8])
0x3bc: Pop(0)
0x3bd: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3be: Push(CvectorIndex(Stack[-7], 0))
0x3bf: Push(CvectorIndex(Stack[-9], 0))
0x3c0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c1: Push(CvectorIndex(Stack[-8], 2))
0x3c2: Push(CvectorIndex(Stack[-10], 2))
0x3c3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c5: Push((int) 0)
0x3c6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: Stack[-6] = "fdie"
0x3c9: GOTO 0x3cb

0x3ca: Stack[-6] = "bdie"
0x3cb: @ RemoveRTEnvelope()
0x3cc: Pop(0)
0x3cd: @ SetDeathState()
0x3ce: Pop(0)
0x3cf: @ Stop()
0x3d0: Pop(0)
0x3d1: @ StopAsync()
0x3d2: Pop(0)
0x3d3: Stack[-5] = Stack[-21]
0x3d4: Push("GetScriptProperty")
0x3d5: Push((int) 2)
0x3d6: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x3d7: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3d8: Push("Owner")
0x3d9: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x3da: Pop(1)
0x3db: Push(Stack[-4])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3dd: Push("Owner")
0x3de: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x3df: Pop(1)
0x3e0: Pop(0); Push((bool) Stack[-5] == 0)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: Stack[-5] = Stack[-21]
0x3e3: Push("@GetEyesHeight")
0x3e4: Push((int) 1)
0x3e5: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x3e6: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3e7: @@ GetEyesHeight(Stack[-2])
0x3e8: Pop(0)
0x3e9: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3ea: Push(CvectorIndex(Stack[-1], 1))
0x3eb: Stack[-1] = Stack[-3]
0x3ec: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3ed: Push("head")
0x3ee: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x3ef: Pop(1)
0x3f0: Stack[-3] = (bool) 1
0x3f1: GOTO 0x3f3

0x3f2: Stack[-3] = (bool) 0
0x3f3: PushEmpty(string)
0x3f4: Stack[-1] = Stack[-7]
0x3f5: Call2 0xc7e

0x3f6: Pop(1)
0x3f7: Push("all")
0x3f8: @ PlayAnimation(Stack[-1], Stack[-7])
0x3f9: Pop(1)
0x3fa: @ WaitForAnimEnd()
0x3fb: Pop(0)
0x3fc: Push(Stack[-3])
0x3fd: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3fe: @ StopAsync()
0x3ff: Pop(0)
0x400: Push("head")
0x401: @ UnlookAsync(Stack[-1])
0x402: Pop(1)
0x403: Push("all")
0x404: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x405: Pop(1)
0x406: @ RemoveEnvelope()
0x407: Pop(0)
0x408: Stack[-5] = 0
0x409: Return(); Pop(20)

0x40a: PushEmpty()
0x40b: @ RemoveRTEnvelope()
0x40c: Pop(0)
0x40d: @ SetDeathState()
0x40e: Pop(0)
0x40f: @ Stop()
0x410: Pop(0)
0x411: @ StopAsync()
0x412: Pop(0)
0x413: @ StopSecondaryAnimation()
0x414: Pop(0)
0x415: PushEmpty(string)
0x416: Stack[-1] = Stack[-2]
0x417: Call2 0xc7e

0x418: Pop(1)
0x419: Push("all")
0x41a: @ PlayAnimation(Stack[-1], Stack[-2])
0x41b: Pop(1)
0x41c: @ WaitForAnimEnd()
0x41d: Pop(0)
0x41e: Push("all")
0x41f: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x420: Pop(1)
0x421: @ RemoveEnvelope()
0x422: Pop(0)
0x423: Return(); Pop(0)

0x424: PushEmpty()
0x425: Return(); Pop(0)

0x426: PushEmpty()
0x427: Return(); Pop(0)

0x428: PushEmpty()
0x429: Return(); Pop(0)

0x42a: Push((bool) 1)
0x42b: @ SensePlayerOnly(Stack[-1])
0x42c: Pop(1)
0x42d: PushEmpty()
0x42e: Call2 0x101c

0x42f: Pop(0)
0x430: PushEmpty()
0x431: Call2 0x439

0x432: Pop(0)
0x433: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x434: PushEmpty()
0x435: Call2 0x53e

0x436: Pop(0)
0x437: GOTO 0x433

0x438: Return(); Pop(0)

0x439: PushEmpty(bool)
0x43a: Call2 0xbb4

0x43b: Pop(0)
0x43c: Pop(1); Push((bool) Stack[-1] == 0)
0x43d: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43e: PushEmpty()
0x43f: Call2 0xfdb

0x440: Pop(0)
0x441: Return(); Pop(0)

0x442: PushEmpty(int, int)
0x443: PushEmpty(int, object)
0x444: Stack[-1] = Stack[-5]
0x445: Call2 0xfd2

0x446: Stack[-3] = Stack[-2]
0x447: Pop(2)
0x448: Push((int) 0)
0x449: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x44b: Push((int) 1)
0x44c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44e: PushEmpty()
0x44f: Call2 0x4fd

0x450: Pop(0)
0x451: PushEmpty(object)
0x452: Stack[-1] = Stack[-4]
0x453: Call2 0xfd5

0x454: Pop(1)
0x455: Return(); Pop(2)

0x456: PushEmpty(int, int)
0x457: PushEmpty(object)
0x458: Stack[-1] = Stack[-4]
0x459: Call2 0xf0f

0x45a: Pop(1)
0x45b: PushEmpty(int, object)
0x45c: Stack[-1] = Stack[-5]
0x45d: Call2 0xf62

0x45e: Stack[-3] = Stack[-2]
0x45f: Pop(2)
0x460: Push((int) 0)
0x461: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x463: Push((int) 1)
0x464: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x466: PushEmpty()
0x467: Call2 0x4fd

0x468: Pop(0)
0x469: PushEmpty(object)
0x46a: Stack[-1] = Stack[-4]
0x46b: Call2 0xf6c

0x46c: Pop(1)
0x46d: Return(); Pop(2)

0x46e: PushEmpty(int, int)
0x46f: PushEmpty(bool, object, object, bool)
0x470: Stack[-3] = Stack[-9]
0x471: Stack[-2] = Stack[-8]
0x472: Stack[-1] = Stack[-7]
0x473: Call2 0x104e

0x474: Pop(3)
0x475: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x476: PushEmpty(int, object, bool)
0x477: Stack[-2] = Stack[-8]
0x478: Stack[-1] = Stack[-6]
0x479: Call2 0xf74

0x47a: Stack[-4] = Stack[-3]
0x47b: Pop(3)
0x47c: Push((int) 0)
0x47d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x47f: Push((int) 1)
0x480: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x481: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x482: PushEmpty()
0x483: Call2 0x4fd

0x484: Pop(0)
0x485: PushEmpty(object)
0x486: Stack[-1] = Stack[-6]
0x487: Call2 0xf7e

0x488: Pop(1)
0x489: Return(); Pop(2)

0x48a: PushEmpty(int, int)
0x48b: PushEmpty(int, object)
0x48c: Stack[-1] = Stack[-5]
0x48d: Call2 0xfc8

0x48e: Stack[-3] = Stack[-2]
0x48f: Pop(2)
0x490: Push((int) 0)
0x491: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x493: Push((int) 1)
0x494: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x496: PushEmpty()
0x497: Call2 0x4fd

0x498: Pop(0)
0x499: PushEmpty(object)
0x49a: Stack[-1] = Stack[-4]
0x49b: Call2 0xfcb

0x49c: Pop(1)
0x49d: Return(); Pop(2)

0x49e: PushEmpty(int, int)
0x49f: PushEmpty(bool, object, string)
0x4a0: Stack[-2] = Stack[-7]
0x4a1: Stack[-1] = Stack[-6]
0x4a2: Call2 0xeb9

0x4a3: Pop(2)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4a5: PushEmpty()
0x4a6: Call2 0x4fd

0x4a7: Pop(0)
0x4a8: PushEmpty(object, string)
0x4a9: Stack[-2] = Stack[-6]
0x4aa: Stack[-1] = Stack[-5]
0x4ab: Call2 0xed9

0x4ac: Pop(2)
0x4ad: GOTO 0x4c2

0x4ae: PushEmpty(int, string, object)
0x4af: Stack[-2] = Stack[-6]
0x4b0: Stack[-1] = Stack[-7]
0x4b1: Call2 0xfcd

0x4b2: Stack[-4] = Stack[-3]
0x4b3: Pop(3)
0x4b4: Push((int) 0)
0x4b5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4b7: Push((int) 1)
0x4b8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4ba: PushEmpty()
0x4bb: Call2 0x4fd

0x4bc: Pop(0)
0x4bd: PushEmpty(string, object)
0x4be: Stack[-2] = Stack[-5]
0x4bf: Stack[-1] = Stack[-6]
0x4c0: Call2 0xfd0

0x4c1: Pop(2)
0x4c2: Return(); Pop(2)

0x4c3: PushEmpty()
0x4c4: PushEmpty(bool, string)
0x4c5: Stack[-1] = Stack[-3]
0x4c6: Call2 0xf1c

0x4c7: Pop(1)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c9: PushEmpty()
0x4ca: Call2 0x4fd

0x4cb: Pop(0)
0x4cc: PushEmpty(string)
0x4cd: Stack[-1] = Stack[-2]
0x4ce: Call2 0xf2c

0x4cf: Pop(1)
0x4d0: Return(); Pop(0)

0x4d1: PushEmpty()
0x4d2: PushEmpty(bool, object)
0x4d3: Stack[-1] = Stack[-3]
0x4d4: Call2 0xef2

0x4d5: Pop(1)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4d7: PushEmpty()
0x4d8: Call2 0x4fd

0x4d9: Pop(0)
0x4da: PushEmpty(object)
0x4db: Stack[-1] = Stack[-2]
0x4dc: Call2 0xf09

0x4dd: Pop(1)
0x4de: GOTO 0x4e3

0x4df: PushEmpty(object)
0x4e0: Stack[-1] = Stack[-2]
0x4e1: Call2 0x516

0x4e2: Pop(1)
0x4e3: Return(); Pop(0)

0x4e4: PushEmpty()
0x4e5: PushEmpty(object)
0x4e6: Stack[-1] = Stack[-2]
0x4e7: Call2 0x516

0x4e8: Pop(1)
0x4e9: Return(); Pop(0)

0x4ea: PushEmpty()
0x4eb: Push((int) 110)
0x4ec: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ee: Return(); Pop(0)

0x4ef: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4f0: Push((int) 110)
0x4f1: @ KillTimer(Stack[-1])
0x4f2: Pop(1)
0x4f3: @ ResetAAS()
0x4f4: Pop(0)
0x4f5: Return(); Pop(0)

0x4f6: PushEmpty()
0x4f7: Call2 0x4fd

0x4f8: Pop(0)
0x4f9: PushEmpty()
0x4fa: Call2 0xfdb

0x4fb: Pop(0)
0x4fc: Return(); Pop(0)

0x4fd: Push((int) 110)
0x4fe: @ KillTimer(Stack[-1])
0x4ff: Pop(1)
0x500: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x501: PushEmpty()
0x502: Call2 0x585

0x503: Pop(0)
0x504: Return(); Pop(0)

0x505: Push((int) 110)
0x506: @ KillTimer(Stack[-1])
0x507: Pop(1)
0x508: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x509: PushEmpty()
0x50a: Call2 0x58c

0x50b: Pop(0)
0x50c: Return(); Pop(0)

0x50d: PushEmpty()
0x50e: PushEmpty()
0x50f: Call2 0x4fd

0x510: Pop(0)
0x511: PushEmpty(object)
0x512: Stack[-1] = Stack[-2]
0x513: Call2 0xea1

0x514: Pop(1)
0x515: Return(); Pop(0)

0x516: PushEmpty(bool, int, bool, int)
0x517: PushEmpty(bool, object)
0x518: Stack[-1] = Stack[-7]
0x519: Call2 0xb13

0x51a: Pop(1)
0x51b: Pop(1); Push((bool) Stack[-1] == 0)
0x51c: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51d: Return(); Pop(4)

0x51e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x51f: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x520: Return(); Pop(4)

0x521: @ IsPlayerActor(Stack[-5], Stack[-2])
0x522: Pop(0)
0x523: Pop(0); Push((bool) Stack[-2] == 0)
0x524: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x525: Return(); Pop(4)

0x526: PushEmpty(int, object)
0x527: Stack[-1] = Stack[-7]
0x528: Call2 0xf51

0x529: Stack[-3] = Stack[-2]
0x52a: Pop(2)
0x52b: Push((int) 0)
0x52c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x52e: Push((int) 1)
0x52f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x531: PushEmpty()
0x532: Call2 0x505

0x533: Pop(0)
0x534: PushEmpty(object)
0x535: Stack[-1] = Stack[-6]
0x536: Call2 0xf5a

0x537: Pop(1)
0x538: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x539: Push((int) 110)
0x53a: Push((float)10.0)
0x53b: @ SetTimer(Stack[-2], Stack[-1])
0x53c: Pop(2)
0x53d: Return(); Pop(4)

0x53e: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x53f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x540: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x541: Push((float)0.5)
0x542: @ rand(Stack[-7], Stack[-1])
0x543: Pop(1)
0x544: @ Sleep(Stack[-6])
0x545: Pop(0)
0x546: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x548: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x549: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x54a: @ GetPosition(Stack[-4])
0x54b: Pop(0)
0x54c: PushEmpty(float)
0x54d: Call2 0x579

0x54e: Pop(0)
0x54f: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x550: Pop(1)
0x551: Push(Stack[-3])
0x552: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x553: GOTO 0x558

0x554: Push((int) 1)
0x555: @ Sleep(Stack[-1])
0x556: Pop(1)
0x557: GOTO 0x54a

0x558: GOTO 0x55a

0x559: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x55a: PushEmpty(object, cvector)
0x55b: Stack[-1] = Stack[-7]
0x55c: Call2 0x595

0x55d: Stack[-4] = Stack[-2]
0x55e: Pop(2)
0x55f: Pop(0); Push(( Stack[-2] != 0 )
0x560: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x561: @ RotatePath(Stack[-2], Stack[-1])
0x562: Pop(0)
0x563: Push(Stack[-1])
0x564: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x565: PushEmpty(bool)
0x566: Call2 0x593

0x567: Pop(0)
0x568: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x569: Pop(1)
0x56a: Stack[-2] = 0
0x56b: Push(Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x56d: PushEmpty()
0x56e: Push(-0, 0); TaskCall(5)
0x56f: Call2 0x63f

0x570: Pop(-0, 0); TaskReturn
0x571: Pop(0)
0x572: GOTO 0x576

0x573: Push((int) 1)
0x574: @ Sleep(Stack[-1])
0x575: Pop(1)
0x576: Stack[-2] = 0
0x577: GOTO 0x546

0x578: Return(); Pop(12)

0x579: PushEmpty(float, float)
0x57a: @ GetCameraFarDistance(Stack[-1])
0x57b: Pop(0)
0x57c: Stack[-3] = Stack[-1]
0x57d: Return(); Pop(2)

0x57e: PushEmpty()
0x57f: @ RequestClearPath(Stack[-1])
0x580: Pop(0)
0x581: Return(); Pop(0)

0x582: @ Stop()
0x583: Pop(0)
0x584: Return(); Pop(0)

0x585: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x586: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x587: @ Stop()
0x588: Pop(0)
0x589: @ StopGroup0()
0x58a: Pop(0)
0x58b: Return(); Pop(0)

0x58c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x58d: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x58e: @ Stop()
0x58f: Pop(0)
0x590: @ StopGroup0()
0x591: Pop(0)
0x592: Return(); Pop(0)

0x593: Stack[-1] = (bool) 0
0x594: Return(); Pop(0)

0x595: PushEmpty(object, object)
0x596: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x597: Pop(0)
0x598: Stack[-4] = Stack[-1]
0x599: Return(); Pop(2)

0x59a: Stack[-1] = 0
0x59b: PushEmpty(int, int)
0x59c: PushEmpty(int, object)
0x59d: Stack[-1] = Stack[-5]
0x59e: Call2 0xfd2

0x59f: Stack[-3] = Stack[-2]
0x5a0: Pop(2)
0x5a1: Push((int) 0)
0x5a2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5a4: Push((int) 1)
0x5a5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a7: PushEmpty()
0x5a8: Call2 0x690

0x5a9: Pop(0)
0x5aa: PushEmpty(object)
0x5ab: Stack[-1] = Stack[-4]
0x5ac: Call2 0xfd5

0x5ad: Pop(1)
0x5ae: Return(); Pop(2)

0x5af: PushEmpty(int, int)
0x5b0: PushEmpty(object)
0x5b1: Stack[-1] = Stack[-4]
0x5b2: Call2 0xf0f

0x5b3: Pop(1)
0x5b4: PushEmpty(int, object)
0x5b5: Stack[-1] = Stack[-5]
0x5b6: Call2 0xf62

0x5b7: Stack[-3] = Stack[-2]
0x5b8: Pop(2)
0x5b9: Push((int) 0)
0x5ba: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5bb: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5bc: Push((int) 1)
0x5bd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5bf: PushEmpty()
0x5c0: Call2 0x690

0x5c1: Pop(0)
0x5c2: PushEmpty(object)
0x5c3: Stack[-1] = Stack[-4]
0x5c4: Call2 0xf6c

0x5c5: Pop(1)
0x5c6: Return(); Pop(2)

0x5c7: PushEmpty(int, int)
0x5c8: PushEmpty(bool, object, object, bool)
0x5c9: Stack[-3] = Stack[-9]
0x5ca: Stack[-2] = Stack[-8]
0x5cb: Stack[-1] = Stack[-7]
0x5cc: Call2 0x104e

0x5cd: Pop(3)
0x5ce: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5cf: PushEmpty(int, object, bool)
0x5d0: Stack[-2] = Stack[-8]
0x5d1: Stack[-1] = Stack[-6]
0x5d2: Call2 0xf74

0x5d3: Stack[-4] = Stack[-3]
0x5d4: Pop(3)
0x5d5: Push((int) 0)
0x5d6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5d8: Push((int) 1)
0x5d9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5db: PushEmpty()
0x5dc: Call2 0x690

0x5dd: Pop(0)
0x5de: PushEmpty(object)
0x5df: Stack[-1] = Stack[-6]
0x5e0: Call2 0xf7e

0x5e1: Pop(1)
0x5e2: Return(); Pop(2)

0x5e3: PushEmpty(int, int)
0x5e4: PushEmpty(int, object)
0x5e5: Stack[-1] = Stack[-5]
0x5e6: Call2 0xfc8

0x5e7: Stack[-3] = Stack[-2]
0x5e8: Pop(2)
0x5e9: Push((int) 0)
0x5ea: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5eb: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5ec: Push((int) 1)
0x5ed: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5ef: PushEmpty()
0x5f0: Call2 0x690

0x5f1: Pop(0)
0x5f2: PushEmpty(object)
0x5f3: Stack[-1] = Stack[-4]
0x5f4: Call2 0xfcb

0x5f5: Pop(1)
0x5f6: Return(); Pop(2)

0x5f7: PushEmpty(int, int)
0x5f8: PushEmpty(bool, object, string)
0x5f9: Stack[-2] = Stack[-7]
0x5fa: Stack[-1] = Stack[-6]
0x5fb: Call2 0xeb9

0x5fc: Pop(2)
0x5fd: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x5fe: PushEmpty()
0x5ff: Call2 0x690

0x600: Pop(0)
0x601: PushEmpty(object, string)
0x602: Stack[-2] = Stack[-6]
0x603: Stack[-1] = Stack[-5]
0x604: Call2 0xed9

0x605: Pop(2)
0x606: GOTO 0x61b

0x607: PushEmpty(int, string, object)
0x608: Stack[-2] = Stack[-6]
0x609: Stack[-1] = Stack[-7]
0x60a: Call2 0xfcd

0x60b: Stack[-4] = Stack[-3]
0x60c: Pop(3)
0x60d: Push((int) 0)
0x60e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x610: Push((int) 1)
0x611: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x613: PushEmpty()
0x614: Call2 0x690

0x615: Pop(0)
0x616: PushEmpty(string, object)
0x617: Stack[-2] = Stack[-5]
0x618: Stack[-1] = Stack[-6]
0x619: Call2 0xfd0

0x61a: Pop(2)
0x61b: Return(); Pop(2)

0x61c: PushEmpty()
0x61d: PushEmpty(bool, string)
0x61e: Stack[-1] = Stack[-3]
0x61f: Call2 0xf1c

0x620: Pop(1)
0x621: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x622: PushEmpty()
0x623: Call2 0x690

0x624: Pop(0)
0x625: PushEmpty(string)
0x626: Stack[-1] = Stack[-2]
0x627: Call2 0xf2c

0x628: Pop(1)
0x629: Return(); Pop(0)

0x62a: PushEmpty()
0x62b: Call2 0x690

0x62c: Pop(0)
0x62d: PushEmpty()
0x62e: Call2 0xfdb

0x62f: Pop(0)
0x630: Return(); Pop(0)

0x631: PushEmpty()
0x632: PushEmpty(bool, object)
0x633: Stack[-1] = Stack[-3]
0x634: Call2 0xef2

0x635: Pop(1)
0x636: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x637: PushEmpty()
0x638: Call2 0x690

0x639: Pop(0)
0x63a: PushEmpty(object)
0x63b: Stack[-1] = Stack[-2]
0x63c: Call2 0xf09

0x63d: Pop(1)
0x63e: Return(); Pop(0)

0x63f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x640: @ WaitForAnimEnd()
0x641: Pop(0)
0x642: PushEmpty(bool)
0x643: Call2 0xbb4

0x644: Pop(0)
0x645: Pop(1); Push((bool) Stack[-1] == 0)
0x646: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x647: Return(); Pop(14)

0x648: PushEmpty(int)
0x649: Call2 0xf40

0x64a: Stack[-8] = Stack[-1]
0x64b: Pop(1)
0x64c: Stack[-6] = (int) 0
0x64d: PushEmpty(bool)
0x64e: Stack[-1] = (bool) 0
0x64f: Push((int) 5)
0x650: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x652: PushEmpty(bool)
0x653: Call2 0xbb4

0x654: Pop(0)
0x655: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x656: Stack[-1] = (bool) 1
0x657: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x658: Push((int) 3)
0x659: @ irand(Stack[-6], Stack[-1])
0x65a: Pop(1)
0x65b: Push((int) 0)
0x65c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x65d: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x65e: Push(Stack[-7])
0x65f: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x660: @ irand(Stack[-4], Stack[-7])
0x661: Pop(0)
0x662: Push("all")
0x663: PushEmpty(string, int)
0x664: Stack[-1] = Stack[-7]
0x665: Call2 0xf39

0x666: Pop(1)
0x667: @ PlayAnimation(Stack[-2], Stack[-1])
0x668: Pop(2)
0x669: @ WaitForAnimEnd(Stack[-3])
0x66a: Pop(0)
0x66b: Pop(0); Push((bool) Stack[-3] == 0)
0x66c: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66d: GOTO 0x68b

0x66e: GOTO 0x680

0x66f: Push((int) 1)
0x670: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x672: Push((int) 4)
0x673: @ rand(Stack[-3], Stack[-1])
0x674: Pop(1)
0x675: Push((int) 1)
0x676: Pop(1); Push(Stack[-3] + Stack[-1]);
0x677: @ Sleep(Stack[-1], Stack[-2])
0x678: Pop(1)
0x679: Pop(0); Push((bool) Stack[-1] == 0)
0x67a: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x67b: GOTO 0x68b

0x67c: GOTO 0x680

0x67d: Push(Stack[-6])
0x67e: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x67f: GOTO 0x68b

0x680: PushEmpty(bool)
0x681: Call2 0x68e

0x682: Pop(0)
0x683: Pop(1); Push((bool) Stack[-1] == 0)
0x684: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x685: GOTO 0x68b

0x686: @ ResetAAS()
0x687: Pop(0)
0x688: Push((int) 1)
0x689: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x68a: GOTO 0x64d

0x68b: @ ResetAAS()
0x68c: Pop(0)
0x68d: Return(); Pop(14)

0x68e: Stack[-1] = (bool) 1
0x68f: Return(); Pop(0)

0x690: @ StopAnimation()
0x691: Pop(0)
0x692: @ StopGroup0()
0x693: Pop(0)
0x694: Return(); Pop(0)

0x695: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x696: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x697: PushEmpty()
0x698: Call2 0x6c8

0x699: Pop(0)
0x69a: @ GetDirection(Stack[-3])
0x69b: Pop(0)
0x69c: PushEmpty(cvector, object)
0x69d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69e: Call2 0xaca

0x69f: Stack[-4] = Stack[-2]
0x6a0: Pop(2)
0x6a1: PushEmpty(float, cvector, cvector)
0x6a2: Stack[-2] = Stack[-6]
0x6a3: Stack[-1] = Stack[-5]
0x6a4: Call2 0xcd2

0x6a5: Pop(2)
0x6a6: Push((int) 0)
0x6a7: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6a9: PushEmpty(object)
0x6aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ab: Call2 0xba9

0x6ac: Pop(1)
0x6ad: Stack[-1] = (bool) 1
0x6ae: GOTO 0x6b2

0x6af: Push((float)1.5)
0x6b0: @ Sleep(Stack[-1], Stack[-2])
0x6b1: Pop(1)
0x6b2: Push(Stack[-1])
0x6b3: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6b4: PushEmpty(object)
0x6b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b6: Call2 0xba9

0x6b7: Pop(1)
0x6b8: Push((int) 111)
0x6b9: Push((float)0.5)
0x6ba: @ SetTimer(Stack[-2], Stack[-1])
0x6bb: Pop(2)
0x6bc: Push((float)5.0)
0x6bd: @ Sleep(Stack[-1])
0x6be: Pop(1)
0x6bf: Push((int) 111)
0x6c0: @ KillTimer(Stack[-1])
0x6c1: Pop(1)
0x6c2: @ StopAsync()
0x6c3: Pop(0)
0x6c4: Push("head")
0x6c5: @ UnlookAsync(Stack[-1])
0x6c6: Pop(1)
0x6c7: Return(); Pop(6)

0x6c8: PushEmpty(object)
0x6c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ca: Call2 0xc6c

0x6cb: Pop(1)
0x6cc: Return(); Pop(0)

0x6cd: PushEmpty(int, int)
0x6ce: PushEmpty(int, object)
0x6cf: Stack[-1] = Stack[-5]
0x6d0: Call2 0xfd2

0x6d1: Stack[-3] = Stack[-2]
0x6d2: Pop(2)
0x6d3: Push((int) 0)
0x6d4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6d6: Push((int) 1)
0x6d7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6d8: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6d9: PushEmpty()
0x6da: Call2 0x75c

0x6db: Pop(0)
0x6dc: PushEmpty(object)
0x6dd: Stack[-1] = Stack[-4]
0x6de: Call2 0xfd5

0x6df: Pop(1)
0x6e0: Return(); Pop(2)

0x6e1: PushEmpty(int, int)
0x6e2: PushEmpty(object)
0x6e3: Stack[-1] = Stack[-4]
0x6e4: Call2 0xf0f

0x6e5: Pop(1)
0x6e6: PushEmpty(int, object)
0x6e7: Stack[-1] = Stack[-5]
0x6e8: Call2 0xf62

0x6e9: Stack[-3] = Stack[-2]
0x6ea: Pop(2)
0x6eb: Push((int) 0)
0x6ec: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6ee: Push((int) 1)
0x6ef: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f1: PushEmpty()
0x6f2: Call2 0x75c

0x6f3: Pop(0)
0x6f4: PushEmpty(object)
0x6f5: Stack[-1] = Stack[-4]
0x6f6: Call2 0xf6c

0x6f7: Pop(1)
0x6f8: Return(); Pop(2)

0x6f9: PushEmpty(int, int)
0x6fa: PushEmpty(bool, object, object, bool)
0x6fb: Stack[-3] = Stack[-9]
0x6fc: Stack[-2] = Stack[-8]
0x6fd: Stack[-1] = Stack[-7]
0x6fe: Call2 0x104e

0x6ff: Pop(3)
0x700: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x701: PushEmpty(int, object, bool)
0x702: Stack[-2] = Stack[-8]
0x703: Stack[-1] = Stack[-6]
0x704: Call2 0xf74

0x705: Stack[-4] = Stack[-3]
0x706: Pop(3)
0x707: Push((int) 0)
0x708: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x709: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x70a: Push((int) 1)
0x70b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70d: PushEmpty()
0x70e: Call2 0x75c

0x70f: Pop(0)
0x710: PushEmpty(object)
0x711: Stack[-1] = Stack[-6]
0x712: Call2 0xf7e

0x713: Pop(1)
0x714: Return(); Pop(2)

0x715: PushEmpty(int, int)
0x716: PushEmpty(int, object)
0x717: Stack[-1] = Stack[-5]
0x718: Call2 0xfc8

0x719: Stack[-3] = Stack[-2]
0x71a: Pop(2)
0x71b: Push((int) 0)
0x71c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x71d: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x71e: Push((int) 1)
0x71f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x720: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x721: PushEmpty()
0x722: Call2 0x75c

0x723: Pop(0)
0x724: PushEmpty(object)
0x725: Stack[-1] = Stack[-4]
0x726: Call2 0xfcb

0x727: Pop(1)
0x728: Return(); Pop(2)

0x729: PushEmpty(int, int)
0x72a: PushEmpty(bool, object, string)
0x72b: Stack[-2] = Stack[-7]
0x72c: Stack[-1] = Stack[-6]
0x72d: Call2 0xeb9

0x72e: Pop(2)
0x72f: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x730: PushEmpty()
0x731: Call2 0x75c

0x732: Pop(0)
0x733: PushEmpty(object, string)
0x734: Stack[-2] = Stack[-6]
0x735: Stack[-1] = Stack[-5]
0x736: Call2 0xed9

0x737: Pop(2)
0x738: GOTO 0x74d

0x739: PushEmpty(int, string, object)
0x73a: Stack[-2] = Stack[-6]
0x73b: Stack[-1] = Stack[-7]
0x73c: Call2 0xfcd

0x73d: Stack[-4] = Stack[-3]
0x73e: Pop(3)
0x73f: Push((int) 0)
0x740: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x741: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x742: Push((int) 1)
0x743: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x744: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x745: PushEmpty()
0x746: Call2 0x75c

0x747: Pop(0)
0x748: PushEmpty(string, object)
0x749: Stack[-2] = Stack[-5]
0x74a: Stack[-1] = Stack[-6]
0x74b: Call2 0xfd0

0x74c: Pop(2)
0x74d: Return(); Pop(2)

0x74e: PushEmpty()
0x74f: PushEmpty(bool, string)
0x750: Stack[-1] = Stack[-3]
0x751: Call2 0xf1c

0x752: Pop(1)
0x753: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x754: PushEmpty()
0x755: Call2 0x75c

0x756: Pop(0)
0x757: PushEmpty(string)
0x758: Stack[-1] = Stack[-2]
0x759: Call2 0xf2c

0x75a: Pop(1)
0x75b: Return(); Pop(0)

0x75c: @ StopGroup0()
0x75d: Pop(0)
0x75e: @ StopAsync()
0x75f: Pop(0)
0x760: Push("head")
0x761: @ UnlookAsync(Stack[-1])
0x762: Pop(1)
0x763: Push((int) 111)
0x764: @ KillTimer(Stack[-1])
0x765: Pop(1)
0x766: Return(); Pop(0)

0x767: PushEmpty()
0x768: PushEmpty()
0x769: Call2 0x75c

0x76a: Pop(0)
0x76b: PushEmpty(object)
0x76c: Stack[-1] = Stack[-2]
0x76d: Call2 0xea1

0x76e: Pop(1)
0x76f: Return(); Pop(0)

0x770: PushEmpty(cvector, cvector, cvector, cvector)
0x771: Push((int) 111)
0x772: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x773: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x774: Return(); Pop(4)

0x775: PushEmpty(bool, object)
0x776: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x777: Call2 0xb13

0x778: Pop(1)
0x779: Pop(1); Push((bool) Stack[-1] == 0)
0x77a: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77b: PushEmpty()
0x77c: Call2 0x75c

0x77d: Pop(0)
0x77e: Return(); Pop(4)

0x77f: @ GetDirection(Stack[-2])
0x780: Pop(0)
0x781: PushEmpty(cvector, object)
0x782: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x783: Call2 0xaca

0x784: Stack[-3] = Stack[-2]
0x785: Pop(2)
0x786: PushEmpty(float, cvector, cvector)
0x787: Stack[-2] = Stack[-5]
0x788: Stack[-1] = Stack[-4]
0x789: Call2 0xcd2

0x78a: Pop(2)
0x78b: Push((float)0.5)
0x78c: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x78d: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x78e: PushEmpty(object)
0x78f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x790: Call2 0xba9

0x791: Pop(1)
0x792: Return(); Pop(4)

0x793: PushEmpty()
0x794: Call2 0x75c

0x795: Pop(0)
0x796: PushEmpty()
0x797: Call2 0xfdb

0x798: Pop(0)
0x799: Return(); Pop(0)

0x79a: PushEmpty()
0x79b: PushEmpty(bool, object)
0x79c: Stack[-1] = Stack[-3]
0x79d: Call2 0xef2

0x79e: Pop(1)
0x79f: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a0: PushEmpty()
0x7a1: Call2 0x75c

0x7a2: Pop(0)
0x7a3: PushEmpty(object)
0x7a4: Stack[-1] = Stack[-2]
0x7a5: Call2 0xf09

0x7a6: Pop(1)
0x7a7: Return(); Pop(0)

0x7a8: PushEmpty()
0x7a9: @ Face(Stack[-1])
0x7aa: Pop(0)
0x7ab: Push("all")
0x7ac: Push("attack_on")
0x7ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x7ae: Pop(2)
0x7af: @ WaitForAnimEnd()
0x7b0: Pop(0)
0x7b1: Push("all")
0x7b2: Push("attack_stay")
0x7b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x7b4: Pop(2)
0x7b5: @ WaitForAnimEnd()
0x7b6: Pop(0)
0x7b7: Push("all")
0x7b8: Push("attack_off")
0x7b9: @ PlayAnimation(Stack[-2], Stack[-1])
0x7ba: Pop(2)
0x7bb: @ WaitForAnimEnd()
0x7bc: Pop(0)
0x7bd: @ StopAsync()
0x7be: Pop(0)
0x7bf: PushEmpty(object)
0x7c0: Stack[-1] = Stack[-2]
0x7c1: Call2 0x7e9

0x7c2: Pop(1)
0x7c3: Return(); Pop(0)

0x7c4: PushEmpty()
0x7c5: Call2 0x866

0x7c6: Pop(0)
0x7c7: PushEmpty()
0x7c8: Call2 0xfdb

0x7c9: Pop(0)
0x7ca: Return(); Pop(0)

0x7cb: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x7cc: @ GetPosition(Stack[-6])
0x7cd: Pop(0)
0x7ce: @@ GetPosition(Stack[-5])
0x7cf: Pop(0)
0x7d0: @ GetDirection(Stack[-4])
0x7d1: Pop(0)
0x7d2: PushEmpty(cvector, cvector)
0x7d3: PushEmpty(cvector, cvector)
0x7d4: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x7d5: Call2 0xcad

0x7d6: Pop(1)
0x7d7: Push((float)0.75)
0x7d8: Pop(1); Push(Stack[-8] * Stack[-1]);
0x7d9: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x7da: Call2 0xcad

0x7db: Stack[-5] = Stack[-2]
0x7dc: Pop(2)
0x7dd: Push((int) 32)
0x7de: Push((float)7000.0)
0x7df: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x7e0: Pop(2)
0x7e1: Push((int) 100)
0x7e2: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x7e3: Push((int) 0)
0x7e4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e6: Stack[-1] = (int) 0
0x7e7: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x7e8: Return(); Pop(12)

0x7e9: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x7ea: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x7eb: PushEmpty(cvector, float)
0x7ec: Stack[-1] = (float) 1.74533
0x7ed: Call2 0x7cb

0x7ee: Stack[-7] = Stack[-2]
0x7ef: Pop(2)
0x7f0: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x7f1: Push((float)2500.0)
0x7f2: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x7f3: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x7f4: PushEmpty(cvector, float)
0x7f5: Stack[-1] = (float) 2.61799
0x7f6: Call2 0x7cb

0x7f7: Stack[-7] = Stack[-2]
0x7f8: Pop(2)
0x7f9: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x7fa: Push((float)2500.0)
0x7fb: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x7fc: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x7fd: Push("Can't retreat, distance: ")
0x7fe: Pop(0); Push(Sqrt(Stack[-5]))
0x7ff: Pop(2); Push(Stack[-2] + Stack[-1]);
0x800: @ Trace(Stack[-1])
0x801: Pop(1)
0x802: Push((float)0.5)
0x803: @ Sleep(Stack[-1])
0x804: Pop(1)
0x805: Return(); Pop(10)

0x806: Push(CvectorIndex(Stack[-5], 0))
0x807: Push(CvectorIndex(Stack[-6], 2))
0x808: @ Rotate(Stack[-2], Stack[-1])
0x809: Pop(2)
0x80a: PushEmpty(cvector)
0x80b: Call2 0xac5

0x80c: Pop(0)
0x80d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x80e: Push((int) 120)
0x80f: Push((float)0.5)
0x810: @ SetTimer(Stack[-2], Stack[-1])
0x811: Pop(2)
0x812: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x813: Push((int) 1)
0x814: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x815: Pop(1)
0x816: Push(Stack[-3])
0x817: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x818: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x819: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x81a: GOTO 0x831

0x81b: GOTO 0x82f

0x81c: PushEmpty(cvector, float)
0x81d: Stack[-1] = (float) 2.61799
0x81e: Call2 0x7cb

0x81f: Stack[-4] = Stack[-2]
0x820: Pop(2)
0x821: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x822: Push((float)2500.0)
0x823: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x824: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x825: PushEmpty(cvector)
0x826: Call2 0xac5

0x827: Pop(0)
0x828: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x829: Push((int) 120)
0x82a: Push((float)0.5)
0x82b: @ SetTimer(Stack[-2], Stack[-1])
0x82c: Pop(2)
0x82d: GOTO 0x82f

0x82e: GOTO 0x831

0x82f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x830: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x831: Return(); Pop(10)

0x832: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x833: Push((int) 120)
0x834: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x835: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x836: Return(); Pop(8)

0x837: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x838: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x839: @ Stop()
0x83a: Pop(0)
0x83b: Push((int) 1)
0x83c: @ KillTimer(Stack[-1])
0x83d: Pop(1)
0x83e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x83f: GOTO 0x865

0x840: @ GetDirection(Stack[-4])
0x841: Pop(0)
0x842: Push((float)7000.0)
0x843: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x844: Pop(1)
0x845: PushEmpty(cvector, float)
0x846: Stack[-1] = (float) 1.74533
0x847: Call2 0x7cb

0x848: Stack[-4] = Stack[-2]
0x849: Pop(2)
0x84a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x84b: PushEmpty(bool)
0x84c: Stack[-1] = (bool) 0
0x84d: Push((float)2500.0)
0x84e: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x84f: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x850: PushEmpty(bool)
0x851: Stack[-1] = (bool) 1
0x852: Pop(0); Push(Stack[-5] * Stack[-5]);
0x853: Push((float)2.25)
0x854: Pop(2); Push(Stack[-2] * Stack[-1]);
0x855: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x856: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x857: PushEmpty(bool)
0x858: Call2 0x876

0x859: Pop(0)
0x85a: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x85b: Stack[-1] = (bool) 0
0x85c: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x85d: Stack[-1] = (bool) 1
0x85e: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x85f: @ Stop()
0x860: Pop(0)
0x861: PushEmpty(cvector)
0x862: Call2 0xac5

0x863: Pop(0)
0x864: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x865: Return(); Pop(8)

0x866: @ Stop()
0x867: Pop(0)
0x868: Push((int) 120)
0x869: @ KillTimer(Stack[-1])
0x86a: Pop(1)
0x86b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x86c: Return(); Pop(0)

0x86d: PushEmpty()
0x86e: PushEmpty()
0x86f: Call2 0x866

0x870: Pop(0)
0x871: PushEmpty(object)
0x872: Stack[-1] = Stack[-2]
0x873: Call2 0xea1

0x874: Pop(1)
0x875: Return(); Pop(0)

0x876: PushEmpty(cvector, cvector, cvector, cvector)
0x877: @ GetDirection(Stack[-2])
0x878: Pop(0)
0x879: PushEmpty(cvector, object)
0x87a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87b: Call2 0xaca

0x87c: Stack[-3] = Stack[-2]
0x87d: Pop(2)
0x87e: PushEmpty(float, cvector, cvector)
0x87f: Stack[-2] = Stack[-5]
0x880: Stack[-1] = Stack[-4]
0x881: Call2 0xcb7

0x882: Pop(2)
0x883: Push((float)-0.34202)
0x884: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x885: Return(); Pop(4)

0x886: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x887: @ GetPosition(Stack[-6])
0x888: Pop(0)
0x889: @@ GetPosition(Stack[-5])
0x88a: Pop(0)
0x88b: @ GetDirection(Stack[-4])
0x88c: Pop(0)
0x88d: PushEmpty(cvector, cvector)
0x88e: PushEmpty(cvector, cvector)
0x88f: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x890: Call2 0xcad

0x891: Pop(1)
0x892: Push((float)0.75)
0x893: Pop(1); Push(Stack[-8] * Stack[-1]);
0x894: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x895: Call2 0xcad

0x896: Stack[-5] = Stack[-2]
0x897: Pop(2)
0x898: Push((int) 32)
0x899: Push((float)7000.0)
0x89a: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x89b: Pop(2)
0x89c: Push((int) 100)
0x89d: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x89e: Push((int) 0)
0x89f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x8a1: Stack[-1] = (int) 0
0x8a2: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x8a3: Return(); Pop(12)

0x8a4: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x8a5: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x8a6: PushEmpty(cvector, float)
0x8a7: Stack[-1] = (float) 1.74533
0x8a8: Call2 0x886

0x8a9: Stack[-7] = Stack[-2]
0x8aa: Pop(2)
0x8ab: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x8ac: Push((float)2500.0)
0x8ad: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x8ae: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8af: PushEmpty(cvector, float)
0x8b0: Stack[-1] = (float) 2.61799
0x8b1: Call2 0x886

0x8b2: Stack[-7] = Stack[-2]
0x8b3: Pop(2)
0x8b4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x8b5: Push((float)2500.0)
0x8b6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x8b7: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8b8: Push("Can't retreat, distance: ")
0x8b9: Pop(0); Push(Sqrt(Stack[-5]))
0x8ba: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8bb: @ Trace(Stack[-1])
0x8bc: Pop(1)
0x8bd: Push((float)0.5)
0x8be: @ Sleep(Stack[-1])
0x8bf: Pop(1)
0x8c0: Return(); Pop(10)

0x8c1: Push(CvectorIndex(Stack[-5], 0))
0x8c2: Push(CvectorIndex(Stack[-6], 2))
0x8c3: @ Rotate(Stack[-2], Stack[-1])
0x8c4: Pop(2)
0x8c5: PushEmpty(cvector)
0x8c6: Call2 0xac5

0x8c7: Pop(0)
0x8c8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x8c9: Push((int) 120)
0x8ca: Push((float)0.5)
0x8cb: @ SetTimer(Stack[-2], Stack[-1])
0x8cc: Pop(2)
0x8cd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8ce: Push((int) 1)
0x8cf: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x8d0: Pop(1)
0x8d1: Push(Stack[-3])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8d3: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x8d4: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8d5: GOTO 0x8ec

0x8d6: GOTO 0x8ea

0x8d7: PushEmpty(cvector, float)
0x8d8: Stack[-1] = (float) 2.61799
0x8d9: Call2 0x886

0x8da: Stack[-4] = Stack[-2]
0x8db: Pop(2)
0x8dc: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x8dd: Push((float)2500.0)
0x8de: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8df: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8e0: PushEmpty(cvector)
0x8e1: Call2 0xac5

0x8e2: Pop(0)
0x8e3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x8e4: Push((int) 120)
0x8e5: Push((float)0.5)
0x8e6: @ SetTimer(Stack[-2], Stack[-1])
0x8e7: Pop(2)
0x8e8: GOTO 0x8ea

0x8e9: GOTO 0x8ec

0x8ea: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x8eb: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8ec: Return(); Pop(10)

0x8ed: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x8ee: Push((int) 120)
0x8ef: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x8f0: IF (Stack[-1] == 0) GOTO 0x8f2; Pop(1)

0x8f1: Return(); Pop(8)

0x8f2: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x8f3: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f4: @ Stop()
0x8f5: Pop(0)
0x8f6: Push((int) 1)
0x8f7: @ KillTimer(Stack[-1])
0x8f8: Pop(1)
0x8f9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8fa: GOTO 0x920

0x8fb: @ GetDirection(Stack[-4])
0x8fc: Pop(0)
0x8fd: Push((float)7000.0)
0x8fe: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x8ff: Pop(1)
0x900: PushEmpty(cvector, float)
0x901: Stack[-1] = (float) 1.74533
0x902: Call2 0x886

0x903: Stack[-4] = Stack[-2]
0x904: Pop(2)
0x905: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x906: PushEmpty(bool)
0x907: Stack[-1] = (bool) 0
0x908: Push((float)2500.0)
0x909: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x90b: PushEmpty(bool)
0x90c: Stack[-1] = (bool) 1
0x90d: Pop(0); Push(Stack[-5] * Stack[-5]);
0x90e: Push((float)2.25)
0x90f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x910: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x911: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x912: PushEmpty(bool)
0x913: Call2 0x931

0x914: Pop(0)
0x915: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x916: Stack[-1] = (bool) 0
0x917: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x918: Stack[-1] = (bool) 1
0x919: IF (Stack[-1] == 0) GOTO 0x920; Pop(1)

0x91a: @ Stop()
0x91b: Pop(0)
0x91c: PushEmpty(cvector)
0x91d: Call2 0xac5

0x91e: Pop(0)
0x91f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x920: Return(); Pop(8)

0x921: @ Stop()
0x922: Pop(0)
0x923: Push((int) 120)
0x924: @ KillTimer(Stack[-1])
0x925: Pop(1)
0x926: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x927: Return(); Pop(0)

0x928: PushEmpty()
0x929: PushEmpty()
0x92a: Call2 0x921

0x92b: Pop(0)
0x92c: PushEmpty(object)
0x92d: Stack[-1] = Stack[-2]
0x92e: Call2 0xea1

0x92f: Pop(1)
0x930: Return(); Pop(0)

0x931: PushEmpty(cvector, cvector, cvector, cvector)
0x932: @ GetDirection(Stack[-2])
0x933: Pop(0)
0x934: PushEmpty(cvector, object)
0x935: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x936: Call2 0xaca

0x937: Stack[-3] = Stack[-2]
0x938: Pop(2)
0x939: PushEmpty(float, cvector, cvector)
0x93a: Stack[-2] = Stack[-5]
0x93b: Stack[-1] = Stack[-4]
0x93c: Call2 0xcb7

0x93d: Pop(2)
0x93e: Push((float)-0.34202)
0x93f: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x940: Return(); Pop(4)

0x941: PushEmpty()
0x942: Call2 0x9e3

0x943: Pop(0)
0x944: PushEmpty()
0x945: Call2 0xfdb

0x946: Pop(0)
0x947: Return(); Pop(0)

0x948: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x949: @ GetPosition(Stack[-6])
0x94a: Pop(0)
0x94b: @@ GetPosition(Stack[-5])
0x94c: Pop(0)
0x94d: @ GetDirection(Stack[-4])
0x94e: Pop(0)
0x94f: PushEmpty(cvector, cvector)
0x950: PushEmpty(cvector, cvector)
0x951: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x952: Call2 0xcad

0x953: Pop(1)
0x954: Push((float)0.75)
0x955: Pop(1); Push(Stack[-8] * Stack[-1]);
0x956: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x957: Call2 0xcad

0x958: Stack[-5] = Stack[-2]
0x959: Pop(2)
0x95a: Push((int) 32)
0x95b: Push((float)7000.0)
0x95c: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x95d: Pop(2)
0x95e: Push((int) 100)
0x95f: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x960: Push((int) 0)
0x961: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x962: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x963: Stack[-1] = (int) 0
0x964: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x965: Return(); Pop(12)

0x966: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x967: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x968: PushEmpty(cvector, float)
0x969: Stack[-1] = (float) 1.74533
0x96a: Call2 0x948

0x96b: Stack[-7] = Stack[-2]
0x96c: Pop(2)
0x96d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x96e: Push((float)2500.0)
0x96f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x970: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x971: PushEmpty(cvector, float)
0x972: Stack[-1] = (float) 2.61799
0x973: Call2 0x948

0x974: Stack[-7] = Stack[-2]
0x975: Pop(2)
0x976: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x977: Push((float)2500.0)
0x978: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x979: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x97a: Push("Can't retreat, distance: ")
0x97b: Pop(0); Push(Sqrt(Stack[-5]))
0x97c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x97d: @ Trace(Stack[-1])
0x97e: Pop(1)
0x97f: Push((float)0.5)
0x980: @ Sleep(Stack[-1])
0x981: Pop(1)
0x982: Return(); Pop(10)

0x983: Push(CvectorIndex(Stack[-5], 0))
0x984: Push(CvectorIndex(Stack[-6], 2))
0x985: @ Rotate(Stack[-2], Stack[-1])
0x986: Pop(2)
0x987: PushEmpty(cvector)
0x988: Call2 0xac5

0x989: Pop(0)
0x98a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x98b: Push((int) 120)
0x98c: Push((float)0.5)
0x98d: @ SetTimer(Stack[-2], Stack[-1])
0x98e: Pop(2)
0x98f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x990: Push((int) 1)
0x991: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x992: Pop(1)
0x993: Push(Stack[-3])
0x994: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x995: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x996: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x997: GOTO 0x9ae

0x998: GOTO 0x9ac

0x999: PushEmpty(cvector, float)
0x99a: Stack[-1] = (float) 2.61799
0x99b: Call2 0x948

0x99c: Stack[-4] = Stack[-2]
0x99d: Pop(2)
0x99e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x99f: Push((float)2500.0)
0x9a0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x9a1: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a2: PushEmpty(cvector)
0x9a3: Call2 0xac5

0x9a4: Pop(0)
0x9a5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x9a6: Push((int) 120)
0x9a7: Push((float)0.5)
0x9a8: @ SetTimer(Stack[-2], Stack[-1])
0x9a9: Pop(2)
0x9aa: GOTO 0x9ac

0x9ab: GOTO 0x9ae

0x9ac: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x9ad: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x9ae: Return(); Pop(10)

0x9af: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x9b0: Push((int) 120)
0x9b1: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x9b2: IF (Stack[-1] == 0) GOTO 0x9b4; Pop(1)

0x9b3: Return(); Pop(8)

0x9b4: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x9b5: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9b6: @ Stop()
0x9b7: Pop(0)
0x9b8: Push((int) 1)
0x9b9: @ KillTimer(Stack[-1])
0x9ba: Pop(1)
0x9bb: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x9bc: GOTO 0x9e2

0x9bd: @ GetDirection(Stack[-4])
0x9be: Pop(0)
0x9bf: Push((float)7000.0)
0x9c0: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x9c1: Pop(1)
0x9c2: PushEmpty(cvector, float)
0x9c3: Stack[-1] = (float) 1.74533
0x9c4: Call2 0x948

0x9c5: Stack[-4] = Stack[-2]
0x9c6: Pop(2)
0x9c7: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x9c8: PushEmpty(bool)
0x9c9: Stack[-1] = (bool) 0
0x9ca: Push((float)2500.0)
0x9cb: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x9cc: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9cd: PushEmpty(bool)
0x9ce: Stack[-1] = (bool) 1
0x9cf: Pop(0); Push(Stack[-5] * Stack[-5]);
0x9d0: Push((float)2.25)
0x9d1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9d2: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x9d3: IF (Stack[-1] == 0) GOTO 0x9d9; Pop(1)

0x9d4: PushEmpty(bool)
0x9d5: Call2 0x9f3

0x9d6: Pop(0)
0x9d7: IF (Stack[-1] == 0) GOTO 0x9d9; Pop(1)

0x9d8: Stack[-1] = (bool) 0
0x9d9: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9da: Stack[-1] = (bool) 1
0x9db: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9dc: @ Stop()
0x9dd: Pop(0)
0x9de: PushEmpty(cvector)
0x9df: Call2 0xac5

0x9e0: Pop(0)
0x9e1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x9e2: Return(); Pop(8)

0x9e3: @ Stop()
0x9e4: Pop(0)
0x9e5: Push((int) 120)
0x9e6: @ KillTimer(Stack[-1])
0x9e7: Pop(1)
0x9e8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x9e9: Return(); Pop(0)

0x9ea: PushEmpty()
0x9eb: PushEmpty()
0x9ec: Call2 0x9e3

0x9ed: Pop(0)
0x9ee: PushEmpty(object)
0x9ef: Stack[-1] = Stack[-2]
0x9f0: Call2 0xea1

0x9f1: Pop(1)
0x9f2: Return(); Pop(0)

0x9f3: PushEmpty(cvector, cvector, cvector, cvector)
0x9f4: @ GetDirection(Stack[-2])
0x9f5: Pop(0)
0x9f6: PushEmpty(cvector, object)
0x9f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f8: Call2 0xaca

0x9f9: Stack[-3] = Stack[-2]
0x9fa: Pop(2)
0x9fb: PushEmpty(float, cvector, cvector)
0x9fc: Stack[-2] = Stack[-5]
0x9fd: Stack[-1] = Stack[-4]
0x9fe: Call2 0xcb7

0x9ff: Pop(2)
0xa00: Push((float)-0.34202)
0xa01: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xa02: Return(); Pop(4)

0xa03: PushEmpty()
0xa04: Call2 0xaa5

0xa05: Pop(0)
0xa06: PushEmpty()
0xa07: Call2 0xfdb

0xa08: Pop(0)
0xa09: Return(); Pop(0)

0xa0a: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xa0b: @ GetPosition(Stack[-6])
0xa0c: Pop(0)
0xa0d: @@ GetPosition(Stack[-5])
0xa0e: Pop(0)
0xa0f: @ GetDirection(Stack[-4])
0xa10: Pop(0)
0xa11: PushEmpty(cvector, cvector)
0xa12: PushEmpty(cvector, cvector)
0xa13: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xa14: Call2 0xcad

0xa15: Pop(1)
0xa16: Push((float)0.75)
0xa17: Pop(1); Push(Stack[-8] * Stack[-1]);
0xa18: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xa19: Call2 0xcad

0xa1a: Stack[-5] = Stack[-2]
0xa1b: Pop(2)
0xa1c: Push((int) 32)
0xa1d: Push((float)7000.0)
0xa1e: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xa1f: Pop(2)
0xa20: Push((int) 100)
0xa21: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xa22: Push((int) 0)
0xa23: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa24: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa25: Stack[-1] = (int) 0
0xa26: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xa27: Return(); Pop(12)

0xa28: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xa29: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xa2a: PushEmpty(cvector, float)
0xa2b: Stack[-1] = (float) 1.74533
0xa2c: Call2 0xa0a

0xa2d: Stack[-7] = Stack[-2]
0xa2e: Pop(2)
0xa2f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xa30: Push((float)2500.0)
0xa31: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xa32: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa33: PushEmpty(cvector, float)
0xa34: Stack[-1] = (float) 2.61799
0xa35: Call2 0xa0a

0xa36: Stack[-7] = Stack[-2]
0xa37: Pop(2)
0xa38: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xa39: Push((float)2500.0)
0xa3a: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xa3b: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa3c: Push("Can't retreat, distance: ")
0xa3d: Pop(0); Push(Sqrt(Stack[-5]))
0xa3e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa3f: @ Trace(Stack[-1])
0xa40: Pop(1)
0xa41: Push((float)0.5)
0xa42: @ Sleep(Stack[-1])
0xa43: Pop(1)
0xa44: Return(); Pop(10)

0xa45: Push(CvectorIndex(Stack[-5], 0))
0xa46: Push(CvectorIndex(Stack[-6], 2))
0xa47: @ Rotate(Stack[-2], Stack[-1])
0xa48: Pop(2)
0xa49: PushEmpty(cvector)
0xa4a: Call2 0xac5

0xa4b: Pop(0)
0xa4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xa4d: Push((int) 120)
0xa4e: Push((float)0.5)
0xa4f: @ SetTimer(Stack[-2], Stack[-1])
0xa50: Pop(2)
0xa51: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa52: Push((int) 1)
0xa53: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xa54: Pop(1)
0xa55: Push(Stack[-3])
0xa56: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa57: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xa58: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa59: GOTO 0xa70

0xa5a: GOTO 0xa6e

0xa5b: PushEmpty(cvector, float)
0xa5c: Stack[-1] = (float) 2.61799
0xa5d: Call2 0xa0a

0xa5e: Stack[-4] = Stack[-2]
0xa5f: Pop(2)
0xa60: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xa61: Push((float)2500.0)
0xa62: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa63: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa64: PushEmpty(cvector)
0xa65: Call2 0xac5

0xa66: Pop(0)
0xa67: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xa68: Push((int) 120)
0xa69: Push((float)0.5)
0xa6a: @ SetTimer(Stack[-2], Stack[-1])
0xa6b: Pop(2)
0xa6c: GOTO 0xa6e

0xa6d: GOTO 0xa70

0xa6e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xa6f: IF (Stack[-1] == 0) GOTO 0xa52; Pop(1)

0xa70: Return(); Pop(10)

0xa71: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xa72: Push((int) 120)
0xa73: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xa74: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa75: Return(); Pop(8)

0xa76: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xa77: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa78: @ Stop()
0xa79: Pop(0)
0xa7a: Push((int) 1)
0xa7b: @ KillTimer(Stack[-1])
0xa7c: Pop(1)
0xa7d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa7e: GOTO 0xaa4

0xa7f: @ GetDirection(Stack[-4])
0xa80: Pop(0)
0xa81: Push((float)7000.0)
0xa82: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xa83: Pop(1)
0xa84: PushEmpty(cvector, float)
0xa85: Stack[-1] = (float) 1.74533
0xa86: Call2 0xa0a

0xa87: Stack[-4] = Stack[-2]
0xa88: Pop(2)
0xa89: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xa8a: PushEmpty(bool)
0xa8b: Stack[-1] = (bool) 0
0xa8c: Push((float)2500.0)
0xa8d: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xa8e: IF (Stack[-1] == 0) GOTO 0xa9d; Pop(1)

0xa8f: PushEmpty(bool)
0xa90: Stack[-1] = (bool) 1
0xa91: Pop(0); Push(Stack[-5] * Stack[-5]);
0xa92: Push((float)2.25)
0xa93: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa94: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xa95: IF (Stack[-1] == 0) GOTO 0xa9b; Pop(1)

0xa96: PushEmpty(bool)
0xa97: Call2 0xab5

0xa98: Pop(0)
0xa99: IF (Stack[-1] == 0) GOTO 0xa9b; Pop(1)

0xa9a: Stack[-1] = (bool) 0
0xa9b: IF (Stack[-1] == 0) GOTO 0xa9d; Pop(1)

0xa9c: Stack[-1] = (bool) 1
0xa9d: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xa9e: @ Stop()
0xa9f: Pop(0)
0xaa0: PushEmpty(cvector)
0xaa1: Call2 0xac5

0xaa2: Pop(0)
0xaa3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xaa4: Return(); Pop(8)

0xaa5: @ Stop()
0xaa6: Pop(0)
0xaa7: Push((int) 120)
0xaa8: @ KillTimer(Stack[-1])
0xaa9: Pop(1)
0xaaa: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xaab: Return(); Pop(0)

0xaac: PushEmpty()
0xaad: PushEmpty()
0xaae: Call2 0xaa5

0xaaf: Pop(0)
0xab0: PushEmpty(object)
0xab1: Stack[-1] = Stack[-2]
0xab2: Call2 0xea1

0xab3: Pop(1)
0xab4: Return(); Pop(0)

0xab5: PushEmpty(cvector, cvector, cvector, cvector)
0xab6: @ GetDirection(Stack[-2])
0xab7: Pop(0)
0xab8: PushEmpty(cvector, object)
0xab9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaba: Call2 0xaca

0xabb: Stack[-3] = Stack[-2]
0xabc: Pop(2)
0xabd: PushEmpty(float, cvector, cvector)
0xabe: Stack[-2] = Stack[-5]
0xabf: Stack[-1] = Stack[-4]
0xac0: Call2 0xcb7

0xac1: Pop(2)
0xac2: Push((float)-0.34202)
0xac3: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xac4: Return(); Pop(4)

0xac5: PushEmpty(cvector, cvector)
0xac6: @ GetPosition(Stack[-1])
0xac7: Pop(0)
0xac8: Stack[-3] = Stack[-1]
0xac9: Return(); Pop(2)

0xaca: PushEmpty(cvector, cvector, cvector, cvector)
0xacb: @ GetPosition(Stack[-2])
0xacc: Pop(0)
0xacd: @@ GetPosition(Stack[-1])
0xace: Pop(0)
0xacf: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xad0: Return(); Pop(4)

0xad1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xad2: @ GetPosition(Stack[-3])
0xad3: Pop(0)
0xad4: @@ GetPosition(Stack[-2])
0xad5: Pop(0)
0xad6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xad7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xad8: Return(); Pop(6)

0xad9: PushEmpty(bool, bool)
0xada: @ IsPlayerActor(Stack[-3], Stack[-1])
0xadb: Pop(0)
0xadc: Stack[-4] = Stack[-1]
0xadd: Return(); Pop(2)

0xade: PushEmpty(bool, bool)
0xadf: Push("HasProperty")
0xae0: Push((int) 2)
0xae1: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xae2: Pop(1); Push((bool) Stack[-1] == 0)
0xae3: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xae4: Stack[-5] = (bool) 0
0xae5: Return(); Pop(2)

0xae6: @@ HasProperty(Stack[-3], Stack[-1])
0xae7: Pop(0)
0xae8: Stack[-5] = Stack[-1]
0xae9: Return(); Pop(2)

0xaea: PushEmpty(bool, bool)
0xaeb: @@ IsDead(Stack[-1])
0xaec: Pop(0)
0xaed: Stack[-4] = Stack[-1]
0xaee: Return(); Pop(2)

0xaef: PushEmpty(object, object, object, object)
0xaf0: Pop(0); Push((bool) Stack[-5] == 0)
0xaf1: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xaf2: Stack[-6] = (bool) 0
0xaf3: Return(); Pop(4)

0xaf4: PushEmpty(bool)
0xaf5: Stack[-1] = (bool) 0
0xaf6: Push("IsDead")
0xaf7: Push((int) 1)
0xaf8: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xaf9: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xafa: PushEmpty(bool, object)
0xafb: Stack[-1] = Stack[-8]
0xafc: Call2 0xaea

0xafd: Pop(1)
0xafe: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xaff: Stack[-1] = (bool) 1
0xb00: IF (Stack[-1] == 0) GOTO 0xb03; Pop(1)

0xb01: Stack[-6] = (bool) 0
0xb02: Return(); Pop(4)

0xb03: @ GetScene(Stack[-2])
0xb04: Pop(0)
0xb05: Pop(0); Push((bool) Stack[-2] == 0)
0xb06: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xb07: Stack[-6] = (bool) 0
0xb08: Return(); Pop(4)

0xb09: @@ GetScene(Stack[-1])
0xb0a: Pop(0)
0xb0b: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xb0c: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0d: Stack[-6] = (bool) 0
0xb0e: Return(); Pop(4)

0xb0f: Stack[-6] = (bool) 1
0xb10: Return(); Pop(4)

0xb11: Stack[-1] = 0
0xb12: Stack[-2] = 0
0xb13: PushEmpty(int, int)
0xb14: PushEmpty(bool, object)
0xb15: Stack[-1] = Stack[-5]
0xb16: Call2 0xaef

0xb17: Pop(1)
0xb18: Pop(1); Push((bool) Stack[-1] == 0)
0xb19: IF (Stack[-1] == 0) GOTO 0xb1c; Pop(1)

0xb1a: Stack[-4] = (bool) 0
0xb1b: Return(); Pop(2)

0xb1c: PushEmpty(bool, object, string)
0xb1d: Stack[-2] = Stack[-6]
0xb1e: Stack[-1] = "noaccess"
0xb1f: Call2 0xade

0xb20: Pop(2)
0xb21: Pop(1); Push((bool) Stack[-1] == 0)
0xb22: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb23: Stack[-4] = (bool) 1
0xb24: Return(); Pop(2)

0xb25: Push("noaccess")
0xb26: @@ GetProperty(Stack[-1], Stack[-2])
0xb27: Pop(1)
0xb28: Push((int) 0)
0xb29: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xb2a: Return(); Pop(2)

0xb2b: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xb2c: Pop(0); Push((bool) Stack[-15] == 0)
0xb2d: IF (Stack[-1] == 0) GOTO 0xb2f; Pop(1)

0xb2e: Return(); Pop(14)

0xb2f: @ IsDead(Stack[-7])
0xb30: Pop(0)
0xb31: Push(Stack[-7])
0xb32: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0xb33: Return(); Pop(14)

0xb34: @ GetSecondaryAnimationType(Stack[-6])
0xb35: Pop(0)
0xb36: Push((int) 0)
0xb37: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xb38: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb39: Return(); Pop(14)

0xb3a: @@ GetPosition(Stack[-5])
0xb3b: Pop(0)
0xb3c: @ GetPosition(Stack[-4])
0xb3d: Pop(0)
0xb3e: @ GetDirection(Stack[-3])
0xb3f: Pop(0)
0xb40: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xb41: Push(CvectorIndex(Stack[-2], 0))
0xb42: Push(CvectorIndex(Stack[-4], 0))
0xb43: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb44: Push(CvectorIndex(Stack[-3], 2))
0xb45: Push(CvectorIndex(Stack[-5], 2))
0xb46: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb47: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb48: Push((int) 0)
0xb49: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xb4a: IF (Stack[-1] == 0) GOTO 0xb4d; Pop(1)

0xb4b: Stack[-1] = "fhit"
0xb4c: GOTO 0xb4e

0xb4d: Stack[-1] = "bhit"
0xb4e: Push("hit_react")
0xb4f: Push("1")
0xb50: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb51: Push("2")
0xb52: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb53: Push((int) -10)
0xb54: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb55: Pop(4)
0xb56: Return(); Pop(14)

0xb57: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xb58: PushEmpty(bool)
0xb59: Stack[-1] = (bool) 0
0xb5a: PushEmpty(bool)
0xb5b: Stack[-1] = (bool) 0
0xb5c: Push(Stack[-23])
0xb5d: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb5e: Push((int) 4)
0xb5f: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xb60: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb61: Stack[-1] = (bool) 1
0xb62: IF (Stack[-1] == 0) GOTO 0xb67; Pop(1)

0xb63: Push((int) 5)
0xb64: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xb65: IF (Stack[-1] == 0) GOTO 0xb67; Pop(1)

0xb66: Stack[-1] = (bool) 1
0xb67: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xb68: PushEmpty(cvector, cvector)
0xb69: PushEmpty(cvector, object)
0xb6a: Stack[-1] = Stack[-25]
0xb6b: Call2 0xaca

0xb6c: Stack[-3] = Stack[-2]
0xb6d: Pop(2)
0xb6e: Call2 0xcad

0xb6f: Stack[-11] = Stack[-2]
0xb70: Pop(2)
0xb71: @ CreateVectorVector(Stack[-8])
0xb72: Pop(0)
0xb73: Stack[-7] = (int) 1
0xb74: Push("hit")
0xb75: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb76: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xb77: Pop(1)
0xb78: Pop(0); Push((bool) Stack[-6] == 0)
0xb79: IF (Stack[-1] == 0) GOTO 0xb7b; Pop(1)

0xb7a: GOTO 0xb84

0xb7b: Pop(0); Push(Stack[-4] | Stack[-9]);
0xb7c: Push((float)0.70711)
0xb7d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xb7e: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb7f: @@ add(Stack[-5])
0xb80: Pop(0)
0xb81: Push((int) 1)
0xb82: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xb83: GOTO 0xb74

0xb84: @@ size(Stack[-3])
0xb85: Pop(0)
0xb86: Push(Stack[-3])
0xb87: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb88: @ irand(Stack[-2], Stack[-3])
0xb89: Pop(0)
0xb8a: @@ get(Stack[-1], Stack[-2])
0xb8b: Pop(0)
0xb8c: PushEmpty(object, int, float, cvector, cvector)
0xb8d: Stack[-5] = Stack[-26]
0xb8e: Stack[-4] = Stack[-25]
0xb8f: Stack[-3] = Stack[-24]
0xb90: Stack[-2] = Stack[-6]
0xb91: Stack[-1] = -Stack[-14]; Pop(0);
0xb92: Call2 0xb9b

0xb93: Pop(5)
0xb94: Return(); Pop(18)

0xb95: Stack[-8] = 0
0xb96: PushEmpty(object)
0xb97: Stack[-1] = Stack[-22]
0xb98: Call2 0xb2b

0xb99: Pop(1)
0xb9a: Return(); Pop(18)

0xb9b: PushEmpty(object, object, object, object)
0xb9c: @ GetScene(Stack[-2])
0xb9d: Pop(0)
0xb9e: Push("scripted")
0xb9f: Push("blood_dir.xml")
0xba0: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xba1: Pop(2)
0xba2: PushEmpty(object)
0xba3: Stack[-1] = Stack[-10]
0xba4: Call2 0xb2b

0xba5: Pop(1)
0xba6: Return(); Pop(4)

0xba7: Stack[-1] = 0
0xba8: Stack[-2] = 0
0xba9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xbaa: @@ GetPosition(Stack[-3])
0xbab: Pop(0)
0xbac: @ GetPosition(Stack[-2])
0xbad: Pop(0)
0xbae: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xbaf: Push(CvectorIndex(Stack[-1], 0))
0xbb0: Push(CvectorIndex(Stack[-2], 2))
0xbb1: @ RotateAsync(Stack[-2], Stack[-1])
0xbb2: Pop(2)
0xbb3: Return(); Pop(6)

0xbb4: PushEmpty(bool, bool)
0xbb5: @ IsLoaded(Stack[-1])
0xbb6: Pop(0)
0xbb7: Stack[-3] = Stack[-1]
0xbb8: Return(); Pop(2)

0xbb9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xbba: @@ GetPosition(Stack[-8])
0xbbb: Pop(0)
0xbbc: @@ GetEyesHeight(Stack[-9])
0xbbd: Pop(0)
0xbbe: Push(CvectorIndex(Stack[-8], 1))
0xbbf: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xbc0: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xbc1: @ GetPosition(Stack[-7])
0xbc2: Pop(0)
0xbc3: @ GetEyesHeight(Stack[-9])
0xbc4: Pop(0)
0xbc5: Push(CvectorIndex(Stack[-7], 1))
0xbc6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xbc7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xbc8: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xbc9: Push(CvectorIndex(Stack[-6], 1))
0xbca: Stack[-1] = (int) 0
0xbcb: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xbcc: Pop(0); Push(Stack[-6] | Stack[-6]);
0xbcd: Pop(1); Push(Sqrt(Stack[-1]))
0xbce: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xbcf: Stack[-5] = -Stack[-6]; Pop(0);
0xbd0: Pop(0); Push(Stack[-6] * Stack[-19]);
0xbd1: PushEmpty(cvector, cvector)
0xbd2: Push(CVector(0.0, 1.0, 0.0))
0xbd3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xbd4: Call2 0xcad

0xbd5: Pop(1)
0xbd6: Push((int) 25)
0xbd7: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbd8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbd9: Push(CVector(0.0, 10.0, 0.0))
0xbda: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xbdb: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xbdc: @ IsOverrideActive(Stack[-2])
0xbdd: Pop(0)
0xbde: Push(Stack[-2])
0xbdf: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbe0: Stack[-21] = (bool) 0
0xbe1: Return(); Pop(18)

0xbe2: @ StopWorld()
0xbe3: Pop(0)
0xbe4: Push((bool) 1)
0xbe5: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xbe6: Pop(1)
0xbe7: Push(CvectorIndex(Stack[-4], 0))
0xbe8: Push(CvectorIndex(Stack[-5], 2))
0xbe9: @ Rotate(Stack[-2], Stack[-1])
0xbea: Pop(2)
0xbeb: PushEmpty(bool)
0xbec: Call2 0x101a

0xbed: Pop(0)
0xbee: IF (Stack[-1] == 0) GOTO 0xbf0; Pop(1)

0xbef: GOTO 0xbf8

0xbf0: Push("head")
0xbf1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbf2: Pop(1)
0xbf3: Push(Stack[-1])
0xbf4: IF (Stack[-1] == 0) GOTO 0xbf8; Pop(1)

0xbf5: Push("head")
0xbf6: @ LookAsyncCamera(Stack[-1])
0xbf7: Pop(1)
0xbf8: @ CameraWaitForPlayFinish()
0xbf9: Pop(0)
0xbfa: @ ResumeWorld()
0xbfb: Pop(0)
0xbfc: Stack[-21] = (bool) 1
0xbfd: Return(); Pop(18)

0xbfe: PushEmpty(bool, bool)
0xbff: Push((bool) 1)
0xc00: @ CameraSwitchToNormal(Stack[-1])
0xc01: Pop(1)
0xc02: PushEmpty(bool)
0xc03: Call2 0x101a

0xc04: Pop(0)
0xc05: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xc06: GOTO 0xc0f

0xc07: Push("head")
0xc08: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc09: Pop(1)
0xc0a: Push(Stack[-1])
0xc0b: IF (Stack[-1] == 0) GOTO 0xc0f; Pop(1)

0xc0c: Push("head")
0xc0d: @ UnlookAsync(Stack[-1])
0xc0e: Pop(1)
0xc0f: Return(); Pop(2)

0xc10: PushEmpty()
0xc11: PushEmpty(bool, object, float)
0xc12: Stack[-2] = Stack[-4]
0xc13: Stack[-1] = (int) 70
0xc14: Call2 0xc18

0xc15: Stack[-5] = Stack[-3]
0xc16: Pop(3)
0xc17: Return(); Pop(0)

0xc18: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xc19: @@ GetPosition(Stack[-7])
0xc1a: Pop(0)
0xc1b: @@ GetEyesHeight(Stack[-8])
0xc1c: Pop(0)
0xc1d: Push(CvectorIndex(Stack[-7], 1))
0xc1e: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xc1f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc20: @ GetPosition(Stack[-6])
0xc21: Pop(0)
0xc22: @ GetEyesHeight(Stack[-8])
0xc23: Pop(0)
0xc24: Push(CvectorIndex(Stack[-6], 1))
0xc25: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xc26: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xc27: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xc28: Push(CvectorIndex(Stack[-5], 1))
0xc29: Stack[-1] = (int) 0
0xc2a: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xc2b: Pop(0); Push(Stack[-5] | Stack[-5]);
0xc2c: Pop(1); Push(Sqrt(Stack[-1]))
0xc2d: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xc2e: Stack[-4] = -Stack[-5]; Pop(0);
0xc2f: Pop(0); Push(Stack[-5] * Stack[-17]);
0xc30: Push(CVector(0.0, 10.0, 0.0))
0xc31: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xc32: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xc33: @ IsOverrideActive(Stack[-1])
0xc34: Pop(0)
0xc35: Push(Stack[-1])
0xc36: IF (Stack[-1] == 0) GOTO 0xc39; Pop(1)

0xc37: Stack[-19] = (bool) 0
0xc38: Return(); Pop(16)

0xc39: @ StopWorld()
0xc3a: Pop(0)
0xc3b: Push((bool) 1)
0xc3c: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0xc3d: Pop(1)
0xc3e: Push(CvectorIndex(Stack[-3], 0))
0xc3f: Push(CvectorIndex(Stack[-4], 2))
0xc40: @ Rotate(Stack[-2], Stack[-1])
0xc41: Pop(2)
0xc42: @ CameraWaitForPlayFinish()
0xc43: Pop(0)
0xc44: @ ResumeWorld()
0xc45: Pop(0)
0xc46: Stack[-19] = (bool) 1
0xc47: Return(); Pop(16)

0xc48: PushEmpty()
0xc49: Push((bool) 1)
0xc4a: @ CameraSwitchToNormal(Stack[-1])
0xc4b: Pop(1)
0xc4c: Return(); Pop(0)

0xc4d: PushEmpty(bool, float, float, bool, float, float)
0xc4e: @ lshHasAnimation(Stack[-3], Stack[-7])
0xc4f: Pop(0)
0xc50: Push(Stack[-3])
0xc51: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc52: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xc53: Pop(0)
0xc54: Push((bool) 0)
0xc55: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc56: Pop(1)
0xc57: GOTO 0xc5c

0xc58: Push("Can't find lsh animation : ")
0xc59: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc5a: @ Trace(Stack[-1])
0xc5b: Pop(1)
0xc5c: Return(); Pop(6)

0xc5d: PushEmpty(bool, float, float, bool, float, float)
0xc5e: @ lshHasAnimation(Stack[-3], Stack[-8])
0xc5f: Pop(0)
0xc60: Push(Stack[-3])
0xc61: IF (Stack[-1] == 0) GOTO 0xc67; Pop(1)

0xc62: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xc63: Pop(0)
0xc64: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xc65: Pop(0)
0xc66: GOTO 0xc6b

0xc67: Push("Can't find lsh animation : ")
0xc68: Pop(1); Push(Stack[-1] + Stack[-9]);
0xc69: @ Trace(Stack[-1])
0xc6a: Pop(1)
0xc6b: Return(); Pop(6)

0xc6c: PushEmpty(float, cvector, float, cvector)
0xc6d: @@ GetEyesHeight(Stack[-2])
0xc6e: Pop(0)
0xc6f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xc70: Push(CvectorIndex(Stack[-1], 1))
0xc71: Stack[-1] = Stack[-3]
0xc72: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xc73: Push("head")
0xc74: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xc75: Pop(1)
0xc76: Return(); Pop(4)

0xc77: PushEmpty(bool)
0xc78: Call2 0x101a

0xc79: Pop(0)
0xc7a: IF (Stack[-1] == 0) GOTO 0xc7d; Pop(1)

0xc7b: @ lshStopSpeech()
0xc7c: Pop(0)
0xc7d: Return(); Pop(0)

0xc7e: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xc7f: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xc80: Pop(0)
0xc81: Pop(0); Push((bool) Stack[-8] == 0)
0xc82: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc83: Stack[-7] = (int) 0
0xc84: Push((int) 1)
0xc85: Pop(1); Push(Stack[-8] + Stack[-1]);
0xc86: Pop(1); Push(Stack[-18] + Stack[-1]);
0xc87: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xc88: Pop(1)
0xc89: Pop(0); Push((bool) Stack[-6] == 0)
0xc8a: IF (Stack[-1] == 0) GOTO 0xc8c; Pop(1)

0xc8b: GOTO 0xc8f

0xc8c: Push((int) 1)
0xc8d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xc8e: GOTO 0xc84

0xc8f: Pop(0); Push((bool) Stack[-7] == 0)
0xc90: IF (Stack[-1] == 0) GOTO 0xc92; Pop(1)

0xc91: Return(); Pop(16)

0xc92: @ irand(Stack[-5], Stack[-7])
0xc93: Pop(0)
0xc94: Push((int) 1)
0xc95: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc96: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xc97: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xc98: Pop(0)
0xc99: Push(Stack[-4])
0xc9a: IF (Stack[-1] == 0) GOTO 0xca6; Pop(1)

0xc9b: @ GetEyesHeight(Stack[-3])
0xc9c: Pop(0)
0xc9d: @ GetDirection(Stack[-2])
0xc9e: Pop(0)
0xc9f: Push((int) 50)
0xca0: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xca1: Push(CvectorIndex(Stack[-1], 1))
0xca2: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xca3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xca4: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xca5: Pop(0)
0xca6: Return(); Pop(16)

0xca7: PushEmpty(object, object)
0xca8: @ self(Stack[-1])
0xca9: Pop(0)
0xcaa: Stack[-3] = Stack[-1]
0xcab: Return(); Pop(2)

0xcac: Stack[-1] = 0
0xcad: PushEmpty(float, float)
0xcae: Pop(0); Push(Stack[-3] | Stack[-3]);
0xcaf: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xcb0: Push((float)0.0)
0xcb1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xcb2: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xcb3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xcb4: Return(); Pop(2)

0xcb5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xcb6: Return(); Pop(2)

0xcb7: PushEmpty()
0xcb8: Pop(0); Push(Stack[-2] | Stack[-1]);
0xcb9: Pop(0); Push(Stack[-3] | Stack[-3]);
0xcba: Pop(0); Push(Stack[-3] | Stack[-3]);
0xcbb: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcbc: Pop(1); Push(Sqrt(Stack[-1]))
0xcbd: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xcbe: Return(); Pop(0)

0xcbf: PushEmpty()
0xcc0: Push(CvectorIndex(Stack[-2], 0))
0xcc1: Push(CvectorIndex(Stack[-2], 0))
0xcc2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcc3: Push(CvectorIndex(Stack[-3], 2))
0xcc4: Push(CvectorIndex(Stack[-3], 2))
0xcc5: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcc6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xcc7: Return(); Pop(0)

0xcc8: PushEmpty()
0xcc9: Push(CvectorIndex(Stack[-1], 0))
0xcca: Push(CvectorIndex(Stack[-2], 0))
0xccb: Pop(2); Push(Stack[-2] * Stack[-1]);
0xccc: Push(CvectorIndex(Stack[-2], 2))
0xccd: Push(CvectorIndex(Stack[-3], 2))
0xcce: Pop(2); Push(Stack[-2] * Stack[-1]);
0xccf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcd0: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xcd1: Return(); Pop(0)

0xcd2: PushEmpty()
0xcd3: PushEmpty(float, cvector, cvector)
0xcd4: Stack[-2] = Stack[-5]
0xcd5: Stack[-1] = Stack[-4]
0xcd6: Call2 0xcbf

0xcd7: Pop(2)
0xcd8: PushEmpty(float, cvector)
0xcd9: Stack[-1] = Stack[-5]
0xcda: Call2 0xcc8

0xcdb: Pop(1)
0xcdc: PushEmpty(float, cvector)
0xcdd: Stack[-1] = Stack[-5]
0xcde: Call2 0xcc8

0xcdf: Pop(1)
0xce0: Pop(2); Push(Stack[-2] * Stack[-1]);
0xce1: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xce2: Return(); Pop(0)

0xce3: PushEmpty(int, int)
0xce4: @ GetVariable(Stack[-3], Stack[-1])
0xce5: Pop(0)
0xce6: Stack[-4] = Stack[-1]
0xce7: Return(); Pop(2)

0xce8: PushEmpty(float, float)
0xce9: @ GetGameTime(Stack[-1])
0xcea: Pop(0)
0xceb: Push((int) 1)
0xcec: PushEmpty(int)
0xced: Push((int) 24)
0xcee: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xcef: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xcf0: Return(); Pop(2)

0xcf1: PushEmpty()
0xcf2: PushEmpty(int, string)
0xcf3: Stack[-1] = "branch"
0xcf4: Call2 0xce3

0xcf5: Pop(1)
0xcf6: Push((int) 0)
0xcf7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcf8: IF (Stack[-1] == 0) GOTO 0xcfb; Pop(1)

0xcf9: Stack[-2] = (bool) 1
0xcfa: Return(); Pop(0)

0xcfb: Stack[-2] = (bool) 0
0xcfc: Return(); Pop(0)

0xcfd: PushEmpty()
0xcfe: PushEmpty(int, string)
0xcff: Stack[-1] = "branch"
0xd00: Call2 0xce3

0xd01: Pop(1)
0xd02: Push((int) 2)
0xd03: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd04: IF (Stack[-1] == 0) GOTO 0xd07; Pop(1)

0xd05: Stack[-2] = (bool) 1
0xd06: Return(); Pop(0)

0xd07: Stack[-2] = (bool) 0
0xd08: Return(); Pop(0)

0xd09: PushEmpty()
0xd0a: PushEmpty(bool, object)
0xd0b: Stack[-1] = Stack[-3]
0xd0c: Call2 0xd3b

0xd0d: Pop(1)
0xd0e: IF (Stack[-1] == 0) GOTO 0xd11; Pop(1)

0xd0f: Stack[-2] = (bool) 1
0xd10: Return(); Pop(0)

0xd11: Stack[-2] = (bool) 0
0xd12: Return(); Pop(0)

0xd13: PushEmpty()
0xd14: PushEmpty(bool, object)
0xd15: Stack[-1] = Stack[-3]
0xd16: Call2 0xd42

0xd17: Pop(1)
0xd18: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd19: Stack[-2] = (bool) 1
0xd1a: Return(); Pop(0)

0xd1b: Stack[-2] = (bool) 0
0xd1c: Return(); Pop(0)

0xd1d: PushEmpty()
0xd1e: PushEmpty(bool, object)
0xd1f: Stack[-1] = Stack[-3]
0xd20: Call2 0xd49

0xd21: Pop(1)
0xd22: IF (Stack[-1] == 0) GOTO 0xd25; Pop(1)

0xd23: Stack[-2] = (bool) 1
0xd24: Return(); Pop(0)

0xd25: Stack[-2] = (bool) 0
0xd26: Return(); Pop(0)

0xd27: PushEmpty()
0xd28: PushEmpty(bool, object)
0xd29: Stack[-1] = Stack[-3]
0xd2a: Call2 0xd50

0xd2b: Pop(1)
0xd2c: IF (Stack[-1] == 0) GOTO 0xd2f; Pop(1)

0xd2d: Stack[-2] = (bool) 1
0xd2e: Return(); Pop(0)

0xd2f: Stack[-2] = (bool) 0
0xd30: Return(); Pop(0)

0xd31: PushEmpty()
0xd32: PushEmpty(bool, object)
0xd33: Stack[-1] = Stack[-3]
0xd34: Call2 0xd57

0xd35: Pop(1)
0xd36: IF (Stack[-1] == 0) GOTO 0xd39; Pop(1)

0xd37: Stack[-2] = (bool) 1
0xd38: Return(); Pop(0)

0xd39: Stack[-2] = (bool) 0
0xd3a: Return(); Pop(0)

0xd3b: PushEmpty()
0xd3c: PushEmpty(int)
0xd3d: Call2 0xce8

0xd3e: Pop(0)
0xd3f: Push((int) 3)
0xd40: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd41: Return(); Pop(0)

0xd42: PushEmpty()
0xd43: PushEmpty(int)
0xd44: Call2 0xce8

0xd45: Pop(0)
0xd46: Push((int) 4)
0xd47: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd48: Return(); Pop(0)

0xd49: PushEmpty()
0xd4a: PushEmpty(int)
0xd4b: Call2 0xce8

0xd4c: Pop(0)
0xd4d: Push((int) 5)
0xd4e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd4f: Return(); Pop(0)

0xd50: PushEmpty()
0xd51: PushEmpty(int)
0xd52: Call2 0xce8

0xd53: Pop(0)
0xd54: Push((int) 6)
0xd55: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd56: Return(); Pop(0)

0xd57: PushEmpty()
0xd58: PushEmpty(int)
0xd59: Call2 0xce8

0xd5a: Pop(0)
0xd5b: Push((int) 7)
0xd5c: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd5d: Return(); Pop(0)

0xd5e: PushEmpty(int, int)
0xd5f: Push("branch")
0xd60: @ GetVariable(Stack[-1], Stack[-2])
0xd61: Pop(1)
0xd62: Push((int) 0)
0xd63: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd64: IF (Stack[-1] == 0) GOTO 0xd68; Pop(1)

0xd65: Stack[-3] = (int) 1
0xd66: Return(); Pop(2)

0xd67: GOTO 0xd6d

0xd68: Push((int) 1)
0xd69: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd6a: IF (Stack[-1] == 0) GOTO 0xd6d; Pop(1)

0xd6b: Stack[-3] = (int) 2
0xd6c: Return(); Pop(2)

0xd6d: Stack[-3] = (int) 3
0xd6e: Return(); Pop(2)

0xd6f: PushEmpty(int, int)
0xd70: Push("branch")
0xd71: @ GetVariable(Stack[-1], Stack[-2])
0xd72: Pop(1)
0xd73: Stack[-3] = Stack[-1]
0xd74: Return(); Pop(2)

0xd75: PushEmpty(object, float, object, float)
0xd76: Push("player")
0xd77: @ FindActor(Stack[-3], Stack[-1])
0xd78: Pop(1)
0xd79: Pop(0); Push((bool) Stack[-2] == 0)
0xd7a: IF (Stack[-1] == 0) GOTO 0xd7d; Pop(1)

0xd7b: Stack[-5] = (int) 0
0xd7c: Return(); Pop(4)

0xd7d: Push("reputation")
0xd7e: @@ GetProperty(Stack[-1], Stack[-2])
0xd7f: Pop(1)
0xd80: Stack[-5] = Stack[-1]
0xd81: Return(); Pop(4)

0xd82: Stack[-2] = 0
0xd83: PushEmpty()
0xd84: PushEmpty(int)
0xd85: Call2 0xd6f

0xd86: Pop(0)
0xd87: Push((int) 1)
0xd88: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd89: IF (Stack[-1] == 0) GOTO 0xd8d; Pop(1)

0xd8a: @ WorkWithCorpse(Stack[-1])
0xd8b: Pop(0)
0xd8c: GOTO 0xd8f

0xd8d: @ Barter(Stack[-1])
0xd8e: Pop(0)
0xd8f: Return(); Pop(0)

0xd90: PushEmpty(int, bool, int, bool)
0xd91: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xd92: IF (Stack[-1] == 0) GOTO 0xd97; Pop(1)

0xd93: Push("GenerateMoney: iMin > iMax")
0xd94: @ Trace(Stack[-1])
0xd95: Pop(1)
0xd96: Return(); Pop(4)

0xd97: Stack[-2] = (int) 0
0xd98: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xd99: IF (Stack[-1] == 0) GOTO 0xd9e; Pop(1)

0xd9a: Pop(0); Push(Stack[-5] - Stack[-6]);
0xd9b: @ irand(Stack[-3], Stack[-1])
0xd9c: Pop(1)
0xd9d: GOTO 0xda2

0xd9e: Push((int) 0)
0xd9f: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xda0: IF (Stack[-1] == 0) GOTO 0xda2; Pop(1)

0xda1: Return(); Pop(4)

0xda2: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xda3: Push((int) 0)
0xda4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda5: IF (Stack[-1] == 0) GOTO 0xda7; Pop(1)

0xda6: Return(); Pop(4)

0xda7: PushEmpty(int, string)
0xda8: Stack[-1] = "Money"
0xda9: Call2 0xe87

0xdaa: Pop(1)
0xdab: Push((int) 0)
0xdac: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xdad: Pop(2)
0xdae: Return(); Pop(4)

0xdaf: PushEmpty(object, int, bool, object, int, bool)
0xdb0: @ CreateInvItem(Stack[-3])
0xdb1: Pop(0)
0xdb2: @@ SetItemName(Stack[-7])
0xdb3: Pop(0)
0xdb4: Push("Organ")
0xdb5: Push((int) 1)
0xdb6: @@ SetProperty(Stack[-2], Stack[-1])
0xdb7: Pop(2)
0xdb8: @@ GetItemID(Stack[-2])
0xdb9: Pop(0)
0xdba: Push((int) 0)
0xdbb: Push((int) 1)
0xdbc: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xdbd: Pop(2)
0xdbe: Return(); Pop(6)

0xdbf: Stack[-3] = 0
0xdc0: PushEmpty(int)
0xdc1: Call2 0xd6f

0xdc2: Pop(0)
0xdc3: Push((int) 1)
0xdc4: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xdc5: IF (Stack[-1] == 0) GOTO 0xdc7; Pop(1)

0xdc6: Return(); Pop(0)

0xdc7: PushEmpty(string)
0xdc8: Stack[-1] = "liver"
0xdc9: Call2 0xdaf

0xdca: Pop(1)
0xdcb: PushEmpty(string)
0xdcc: Stack[-1] = "kidney"
0xdcd: Call2 0xdaf

0xdce: Pop(1)
0xdcf: PushEmpty(string)
0xdd0: Stack[-1] = "heart"
0xdd1: Call2 0xdaf

0xdd2: Pop(1)
0xdd3: PushEmpty(string)
0xdd4: Stack[-1] = "blood"
0xdd5: Call2 0xdaf

0xdd6: Pop(1)
0xdd7: Return(); Pop(0)

0xdd8: PushEmpty(int, bool, int, bool)
0xdd9: Push(Stack[-5])
0xdda: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xddb: PushEmpty(int, int)
0xddc: Stack[-2] = (int) 0
0xddd: Push((int) 100)
0xdde: PushEmpty(int)
0xddf: Call2 0xce8

0xde0: Pop(0)
0xde1: Push((int) 100)
0xde2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xde3: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xde4: Call2 0xd90

0xde5: Pop(2)
0xde6: Push((int) 8)
0xde7: @ irand(Stack[-3], Stack[-1])
0xde8: Pop(1)
0xde9: Push((int) 0)
0xdea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdeb: IF (Stack[-1] == 0) GOTO 0xdf5; Pop(1)

0xdec: PushEmpty(int, string)
0xded: Stack[-1] = "lemon"
0xdee: Call2 0xe87

0xdef: Pop(1)
0xdf0: Push((int) 0)
0xdf1: Push((int) 1)
0xdf2: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdf3: Pop(3)
0xdf4: GOTO 0xe30

0xdf5: Push((int) 1)
0xdf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf7: IF (Stack[-1] == 0) GOTO 0xe01; Pop(1)

0xdf8: PushEmpty(int, string)
0xdf9: Stack[-1] = "rusk"
0xdfa: Call2 0xe87

0xdfb: Pop(1)
0xdfc: Push((int) 0)
0xdfd: Push((int) 1)
0xdfe: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdff: Pop(3)
0xe00: GOTO 0xe30

0xe01: Push((int) 2)
0xe02: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe03: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe04: PushEmpty(int, string)
0xe05: Stack[-1] = "hook"
0xe06: Call2 0xe87

0xe07: Pop(1)
0xe08: Push((int) 0)
0xe09: Push((int) 1)
0xe0a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe0b: Pop(3)
0xe0c: GOTO 0xe30

0xe0d: Push((int) 4)
0xe0e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0f: IF (Stack[-1] == 0) GOTO 0xe19; Pop(1)

0xe10: PushEmpty(int, string)
0xe11: Stack[-1] = "syringe"
0xe12: Call2 0xe87

0xe13: Pop(1)
0xe14: Push((int) 0)
0xe15: Push((int) 1)
0xe16: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe17: Pop(3)
0xe18: GOTO 0xe30

0xe19: Push((int) 5)
0xe1a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1b: IF (Stack[-1] == 0) GOTO 0xe25; Pop(1)

0xe1c: PushEmpty(int, string)
0xe1d: Stack[-1] = "watch"
0xe1e: Call2 0xe87

0xe1f: Pop(1)
0xe20: Push((int) 0)
0xe21: Push((int) 1)
0xe22: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe23: Pop(3)
0xe24: GOTO 0xe30

0xe25: Push((int) 6)
0xe26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe27: IF (Stack[-1] == 0) GOTO 0xe30; Pop(1)

0xe28: PushEmpty(int, string)
0xe29: Stack[-1] = "razor"
0xe2a: Call2 0xe87

0xe2b: Pop(1)
0xe2c: Push((int) 0)
0xe2d: Push((int) 1)
0xe2e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe2f: Pop(3)
0xe30: GOTO 0xe86

0xe31: PushEmpty(int, int)
0xe32: Stack[-2] = (int) 0
0xe33: Push((int) 50)
0xe34: PushEmpty(int)
0xe35: Call2 0xce8

0xe36: Pop(0)
0xe37: Push((int) 50)
0xe38: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe39: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xe3a: Call2 0xd90

0xe3b: Pop(2)
0xe3c: Push((int) 7)
0xe3d: @ irand(Stack[-3], Stack[-1])
0xe3e: Pop(1)
0xe3f: Push((int) 0)
0xe40: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe41: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe42: PushEmpty(int, string)
0xe43: Stack[-1] = "beads"
0xe44: Call2 0xe87

0xe45: Pop(1)
0xe46: Push((int) 0)
0xe47: Push((int) 1)
0xe48: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe49: Pop(3)
0xe4a: GOTO 0xe86

0xe4b: Push((int) 1)
0xe4c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4d: IF (Stack[-1] == 0) GOTO 0xe57; Pop(1)

0xe4e: PushEmpty(int, string)
0xe4f: Stack[-1] = "bracelet"
0xe50: Call2 0xe87

0xe51: Pop(1)
0xe52: Push((int) 0)
0xe53: Push((int) 1)
0xe54: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe55: Pop(3)
0xe56: GOTO 0xe86

0xe57: Push((int) 2)
0xe58: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe59: IF (Stack[-1] == 0) GOTO 0xe63; Pop(1)

0xe5a: PushEmpty(int, string)
0xe5b: Stack[-1] = "ear_ring"
0xe5c: Call2 0xe87

0xe5d: Pop(1)
0xe5e: Push((int) 0)
0xe5f: Push((int) 1)
0xe60: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe61: Pop(3)
0xe62: GOTO 0xe86

0xe63: Push((int) 3)
0xe64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe65: IF (Stack[-1] == 0) GOTO 0xe6f; Pop(1)

0xe66: PushEmpty(int, string)
0xe67: Stack[-1] = "gold_ring"
0xe68: Call2 0xe87

0xe69: Pop(1)
0xe6a: Push((int) 0)
0xe6b: Push((int) 1)
0xe6c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe6d: Pop(3)
0xe6e: GOTO 0xe86

0xe6f: Push((int) 4)
0xe70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe71: IF (Stack[-1] == 0) GOTO 0xe7b; Pop(1)

0xe72: PushEmpty(int, string)
0xe73: Stack[-1] = "silver_ring"
0xe74: Call2 0xe87

0xe75: Pop(1)
0xe76: Push((int) 0)
0xe77: Push((int) 1)
0xe78: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe79: Pop(3)
0xe7a: GOTO 0xe86

0xe7b: Push((int) 5)
0xe7c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7d: IF (Stack[-1] == 0) GOTO 0xe86; Pop(1)

0xe7e: PushEmpty(int, string)
0xe7f: Stack[-1] = "flower"
0xe80: Call2 0xe87

0xe81: Pop(1)
0xe82: Push((int) 0)
0xe83: Push((int) 1)
0xe84: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe85: Pop(3)
0xe86: Return(); Pop(4)

0xe87: PushEmpty(int, int)
0xe88: @ GetInvItemByName(Stack[-1], Stack[-3])
0xe89: Pop(0)
0xe8a: Stack[-4] = Stack[-1]
0xe8b: Return(); Pop(2)

0xe8c: PushEmpty()
0xe8d: PushEmpty(object)
0xe8e: Stack[-1] = Stack[-2]
0xe8f: Push(-1, 0); TaskCall(3)
0xe90: Call2 0x38e

0xe91: Pop(-1, 0); TaskReturn
0xe92: Pop(1)
0xe93: Return(); Pop(0)

0xe94: PushEmpty(float, float)
0xe95: Push("health")
0xe96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe97: IF (Stack[-1] == 0) GOTO 0xea0; Pop(1)

0xe98: Push("health")
0xe99: @ GetProperty(Stack[-1], Stack[-2])
0xe9a: Pop(1)
0xe9b: Push((int) 0)
0xe9c: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xe9d: IF (Stack[-1] == 0) GOTO 0xea0; Pop(1)

0xe9e: @ SignalDeath(Stack[-4])
0xe9f: Pop(0)
0xea0: Return(); Pop(2)

0xea1: PushEmpty()
0xea2: PushEmpty(object)
0xea3: Stack[-1] = Stack[-2]
0xea4: Call2 0xe8c

0xea5: Pop(1)
0xea6: Return(); Pop(0)

0xea7: PushEmpty()
0xea8: PushEmpty(object, int, float)
0xea9: Stack[-3] = Stack[-7]
0xeaa: Stack[-2] = Stack[-6]
0xeab: Stack[-1] = Stack[-5]
0xeac: Call2 0xb57

0xead: Pop(3)
0xeae: Return(); Pop(0)

0xeaf: PushEmpty()
0xeb0: PushEmpty(object, int, float, cvector, cvector)
0xeb1: Stack[-5] = Stack[-11]
0xeb2: Stack[-4] = Stack[-10]
0xeb3: Stack[-3] = Stack[-9]
0xeb4: Stack[-2] = Stack[-7]
0xeb5: Stack[-1] = Stack[-6]
0xeb6: Call2 0xb9b

0xeb7: Pop(5)
0xeb8: Return(); Pop(0)

0xeb9: PushEmpty()
0xeba: Push("unholster")
0xebb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xebc: IF (Stack[-1] == 0) GOTO 0xec4; Pop(1)

0xebd: PushEmpty(bool, object)
0xebe: Stack[-1] = Stack[-4]
0xebf: Call2 0xfdc

0xec0: Stack[-5] = Stack[-2]
0xec1: Pop(2)
0xec2: Return(); Pop(0)

0xec3: GOTO 0xed7

0xec4: Push("player_shot")
0xec5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec6: IF (Stack[-1] == 0) GOTO 0xece; Pop(1)

0xec7: PushEmpty(bool, object)
0xec8: Stack[-1] = Stack[-4]
0xec9: Call2 0xfe9

0xeca: Stack[-5] = Stack[-2]
0xecb: Pop(2)
0xecc: Return(); Pop(0)

0xecd: GOTO 0xed7

0xece: Push("battle")
0xecf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed0: IF (Stack[-1] == 0) GOTO 0xed7; Pop(1)

0xed1: PushEmpty(bool, object)
0xed2: Stack[-1] = Stack[-4]
0xed3: Call2 0x1000

0xed4: Stack[-5] = Stack[-2]
0xed5: Pop(2)
0xed6: Return(); Pop(0)

0xed7: Stack[-3] = (bool) 0
0xed8: Return(); Pop(0)

0xed9: PushEmpty()
0xeda: Push("unholster")
0xedb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xedc: IF (Stack[-1] == 0) GOTO 0xee2; Pop(1)

0xedd: PushEmpty(object)
0xede: Stack[-1] = Stack[-3]
0xedf: Call2 0xfe1

0xee0: Pop(1)
0xee1: GOTO 0xef1

0xee2: Push("player_shot")
0xee3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee4: IF (Stack[-1] == 0) GOTO 0xeea; Pop(1)

0xee5: PushEmpty(object)
0xee6: Stack[-1] = Stack[-3]
0xee7: Call2 0xff8

0xee8: Pop(1)
0xee9: GOTO 0xef1

0xeea: Push("battle")
0xeeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeec: IF (Stack[-1] == 0) GOTO 0xef1; Pop(1)

0xeed: PushEmpty(object)
0xeee: Stack[-1] = Stack[-3]
0xeef: Call2 0x1007

0xef0: Pop(1)
0xef1: Return(); Pop(0)

0xef2: PushEmpty(bool, bool)
0xef3: PushEmpty(bool)
0xef4: Stack[-1] = (bool) 0
0xef5: PushEmpty(bool, object)
0xef6: Stack[-1] = Stack[-6]
0xef7: Call2 0xfdc

0xef8: Pop(1)
0xef9: IF (Stack[-1] == 0) GOTO 0xf00; Pop(1)

0xefa: PushEmpty(bool, object)
0xefb: Stack[-1] = Stack[-6]
0xefc: Call2 0xad9

0xefd: Pop(1)
0xefe: IF (Stack[-1] == 0) GOTO 0xf00; Pop(1)

0xeff: Stack[-1] = (bool) 1
0xf00: IF (Stack[-1] == 0) GOTO 0xf07; Pop(1)

0xf01: @@ IsWeaponHolstered(Stack[-1])
0xf02: Pop(0)
0xf03: Pop(0); Push((bool) Stack[-1] == 0)
0xf04: IF (Stack[-1] == 0) GOTO 0xf07; Pop(1)

0xf05: Stack[-4] = (bool) 1
0xf06: Return(); Pop(2)

0xf07: Stack[-4] = (bool) 0
0xf08: Return(); Pop(2)

0xf09: PushEmpty()
0xf0a: PushEmpty(object)
0xf0b: Stack[-1] = Stack[-2]
0xf0c: Call2 0xfe1

0xf0d: Pop(1)
0xf0e: Return(); Pop(0)

0xf0f: PushEmpty()
0xf10: PushEmpty(bool, object)
0xf11: Stack[-1] = Stack[-3]
0xf12: Call2 0xad9

0xf13: Pop(1)
0xf14: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf15: PushEmpty(object)
0xf16: Call2 0xca7

0xf17: Pop(0)
0xf18: Push((float)-0.05)
0xf19: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xf1a: Pop(2)
0xf1b: Return(); Pop(0)

0xf1c: PushEmpty(object, object)
0xf1d: Push("heal")
0xf1e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf1f: IF (Stack[-1] == 0) GOTO 0xf2a; Pop(1)

0xf20: Push("player")
0xf21: @ FindActor(Stack[-2], Stack[-1])
0xf22: Pop(1)
0xf23: PushEmpty(bool, object)
0xf24: Stack[-1] = Stack[-3]
0xf25: Call2 0x100d

0xf26: Stack[-6] = Stack[-2]
0xf27: Pop(2)
0xf28: Return(); Pop(2)

0xf29: Stack[-1] = 0
0xf2a: Stack[-4] = (bool) 0
0xf2b: Return(); Pop(2)

0xf2c: PushEmpty(object, object)
0xf2d: Push("heal")
0xf2e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf2f: IF (Stack[-1] == 0) GOTO 0xf38; Pop(1)

0xf30: Push("player")
0xf31: @ FindActor(Stack[-2], Stack[-1])
0xf32: Pop(1)
0xf33: PushEmpty(object)
0xf34: Stack[-1] = Stack[-2]
0xf35: Call2 0x1010

0xf36: Pop(1)
0xf37: Stack[-1] = 0
0xf38: Return(); Pop(2)

0xf39: PushEmpty(string, string)
0xf3a: Stack[-1] = "idle"
0xf3b: Push(Stack[-3])
0xf3c: IF (Stack[-1] == 0) GOTO 0xf3e; Pop(1)

0xf3d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xf3e: Stack[-4] = Stack[-1]
0xf3f: Return(); Pop(2)

0xf40: PushEmpty(int, bool, int, bool)
0xf41: Stack[-2] = (int) 0
0xf42: Push("all")
0xf43: PushEmpty(string, int)
0xf44: Stack[-1] = Stack[-5]
0xf45: Call2 0xf39

0xf46: Pop(1)
0xf47: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xf48: Pop(2)
0xf49: Pop(0); Push((bool) Stack[-1] == 0)
0xf4a: IF (Stack[-1] == 0) GOTO 0xf4c; Pop(1)

0xf4b: GOTO 0xf4f

0xf4c: Push((int) 1)
0xf4d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xf4e: GOTO 0xf42

0xf4f: Stack[-5] = Stack[-2]
0xf50: Return(); Pop(4)

0xf51: PushEmpty()
0xf52: PushEmpty(bool)
0xf53: Call2 0x1048

0xf54: Pop(0)
0xf55: IF (Stack[-1] == 0) GOTO 0xf58; Pop(1)

0xf56: Stack[-2] = (int) 2
0xf57: GOTO 0xf59

0xf58: Stack[-2] = (int) 0
0xf59: Return(); Pop(0)

0xf5a: PushEmpty()
0xf5b: PushEmpty(object)
0xf5c: Stack[-1] = Stack[-2]
0xf5d: Push(-1, 1); TaskCall(6)
0xf5e: Call2 0x695

0xf5f: Pop(-1, 1); TaskReturn
0xf60: Pop(1)
0xf61: Return(); Pop(0)

0xf62: PushEmpty()
0xf63: PushEmpty(bool, object)
0xf64: Stack[-1] = Stack[-3]
0xf65: Call2 0xb13

0xf66: Pop(1)
0xf67: IF (Stack[-1] == 0) GOTO 0xf6a; Pop(1)

0xf68: Stack[-2] = (int) 2
0xf69: GOTO 0xf6b

0xf6a: Stack[-2] = (int) 0
0xf6b: Return(); Pop(0)

0xf6c: PushEmpty()
0xf6d: PushEmpty(object)
0xf6e: Stack[-1] = Stack[-2]
0xf6f: Push(-1, 3); TaskCall(7)
0xf70: Call2 0x7a8

0xf71: Pop(-1, 3); TaskReturn
0xf72: Pop(1)
0xf73: Return(); Pop(0)

0xf74: PushEmpty()
0xf75: PushEmpty(bool, object)
0xf76: Stack[-1] = Stack[-4]
0xf77: Call2 0xb13

0xf78: Pop(1)
0xf79: IF (Stack[-1] == 0) GOTO 0xf7c; Pop(1)

0xf7a: Stack[-3] = (int) 2
0xf7b: GOTO 0xf7d

0xf7c: Stack[-3] = (int) 0
0xf7d: Return(); Pop(0)

0xf7e: PushEmpty()
0xf7f: PushEmpty(object)
0xf80: Stack[-1] = Stack[-2]
0xf81: Push(-1, 3); TaskCall(8)
0xf82: Call2 0x8a4

0xf83: Pop(-1, 3); TaskReturn
0xf84: Pop(1)
0xf85: Return(); Pop(0)

0xf86: PushEmpty(string, bool, string, bool)
0xf87: PushEmpty(bool, object, string)
0xf88: Stack[-2] = Stack[-9]
0xf89: Stack[-1] = "class"
0xf8a: Call2 0xade

0xf8b: Pop(2)
0xf8c: Pop(1); Push((bool) Stack[-1] == 0)
0xf8d: IF (Stack[-1] == 0) GOTO 0xf90; Pop(1)

0xf8e: Stack[-8] = (bool) 0
0xf8f: Return(); Pop(4)

0xf90: Push("class")
0xf91: @@ GetProperty(Stack[-1], Stack[-3])
0xf92: Pop(1)
0xf93: Push("rat")
0xf94: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf95: IF (Stack[-1] == 0) GOTO 0xf99; Pop(1)

0xf96: Stack[-8] = (bool) 0
0xf97: Return(); Pop(4)

0xf98: GOTO 0xfa4

0xf99: Push("rat_big")
0xf9a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9b: IF (Stack[-1] == 0) GOTO 0xf9f; Pop(1)

0xf9c: Stack[-8] = (bool) 0
0xf9d: Return(); Pop(4)

0xf9e: GOTO 0xfa4

0xf9f: Push("dog")
0xfa0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa1: IF (Stack[-1] == 0) GOTO 0xfa4; Pop(1)

0xfa2: Stack[-8] = (bool) 0
0xfa3: Return(); Pop(4)

0xfa4: @ CanSee(Stack[-1], Stack[-7])
0xfa5: Pop(0)
0xfa6: PushEmpty(bool)
0xfa7: Stack[-1] = (bool) 1
0xfa8: Push(Stack[-2])
0xfa9: IF (Stack[-1] == 0) GOTO 0xfb2; Pop(1)

0xfaa: PushEmpty(float, object)
0xfab: Stack[-1] = Stack[-10]
0xfac: Call2 0xad1

0xfad: Pop(1)
0xfae: Pop(0); Push(Stack[-7] * Stack[-7]);
0xfaf: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xfb0: IF (Stack[-1] == 0) GOTO 0xfb2; Pop(1)

0xfb1: Stack[-1] = (bool) 0
0xfb2: IF (Stack[-1] == 0) GOTO 0xfb5; Pop(1)

0xfb3: Stack[-8] = (bool) 1
0xfb4: Return(); Pop(4)

0xfb5: @ CanSee(Stack[-1], Stack[-6])
0xfb6: Pop(0)
0xfb7: PushEmpty(bool)
0xfb8: Stack[-1] = (bool) 1
0xfb9: Push(Stack[-2])
0xfba: IF (Stack[-1] == 0) GOTO 0xfc3; Pop(1)

0xfbb: PushEmpty(float, object)
0xfbc: Stack[-1] = Stack[-9]
0xfbd: Call2 0xad1

0xfbe: Pop(1)
0xfbf: Pop(0); Push(Stack[-7] * Stack[-7]);
0xfc0: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xfc1: IF (Stack[-1] == 0) GOTO 0xfc3; Pop(1)

0xfc2: Stack[-1] = (bool) 0
0xfc3: IF (Stack[-1] == 0) GOTO 0xfc6; Pop(1)

0xfc4: Stack[-8] = (bool) 1
0xfc5: Return(); Pop(4)

0xfc6: Stack[-8] = (bool) 0
0xfc7: Return(); Pop(4)

0xfc8: PushEmpty()
0xfc9: Stack[-2] = (int) 0
0xfca: Return(); Pop(0)

0xfcb: PushEmpty()
0xfcc: Return(); Pop(0)

0xfcd: PushEmpty()
0xfce: Stack[-3] = (int) 0
0xfcf: Return(); Pop(0)

0xfd0: PushEmpty()
0xfd1: Return(); Pop(0)

0xfd2: PushEmpty()
0xfd3: Stack[-2] = (int) 2
0xfd4: Return(); Pop(0)

0xfd5: PushEmpty()
0xfd6: PushEmpty(object)
0xfd7: Stack[-1] = Stack[-2]
0xfd8: Call2 0x1020

0xfd9: Pop(1)
0xfda: Return(); Pop(0)

0xfdb: Return(); Pop(0)

0xfdc: PushEmpty(bool, bool)
0xfdd: @ CanSee(Stack[-1], Stack[-3])
0xfde: Pop(0)
0xfdf: Stack[-4] = Stack[-1]
0xfe0: Return(); Pop(2)

0xfe1: PushEmpty()
0xfe2: PushEmpty(object)
0xfe3: Stack[-1] = Stack[-2]
0xfe4: Push(-1, 3); TaskCall(9)
0xfe5: Call2 0x966

0xfe6: Pop(-1, 3); TaskReturn
0xfe7: Pop(1)
0xfe8: Return(); Pop(0)

0xfe9: PushEmpty(bool, bool)
0xfea: @ CanSee(Stack[-1], Stack[-3])
0xfeb: Pop(0)
0xfec: Stack[-4] = (bool) 1
0xfed: Push(Stack[-1])
0xfee: IF (Stack[-1] == 0) GOTO 0xff7; Pop(1)

0xfef: PushEmpty(float, object)
0xff0: Stack[-1] = Stack[-5]
0xff1: Call2 0xad1

0xff2: Pop(1)
0xff3: Push((int) 4000000)
0xff4: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xff5: IF (Stack[-1] == 0) GOTO 0xff7; Pop(1)

0xff6: Stack[-4] = (bool) 0
0xff7: Return(); Pop(2)

0xff8: PushEmpty()
0xff9: PushEmpty(object)
0xffa: Stack[-1] = Stack[-2]
0xffb: Push(-1, 3); TaskCall(10)
0xffc: Call2 0xa28

0xffd: Pop(-1, 3); TaskReturn
0xffe: Pop(1)
0xfff: Return(); Pop(0)

0x1000: PushEmpty()
0x1001: PushEmpty(bool, object)
0x1002: Stack[-1] = Stack[-3]
0x1003: Call2 0xfe9

0x1004: Stack[-4] = Stack[-2]
0x1005: Pop(2)
0x1006: Return(); Pop(0)

0x1007: PushEmpty()
0x1008: PushEmpty(object)
0x1009: Stack[-1] = Stack[-2]
0x100a: Call2 0xff8

0x100b: Pop(1)
0x100c: Return(); Pop(0)

0x100d: PushEmpty()
0x100e: Stack[-2] = (bool) 0
0x100f: Return(); Pop(0)

0x1010: PushEmpty()
0x1011: Return(); Pop(0)

0x1012: Stack[-1] = (int) 515555
0x1013: Return(); Pop(0)

0x1014: Stack[-1] = (int) 503340
0x1015: Return(); Pop(0)

0x1016: Stack[-1] = "ui/NPC_Citizen2.png"
0x1017: Return(); Pop(0)

0x1018: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x1019: Return(); Pop(0)

0x101a: Stack[-1] = (bool) 0
0x101b: Return(); Pop(0)

0x101c: Push(GlobalVars[0])
0x101d: Stack[-1] = (bool) 0
0x101e: GlobalVars[0] = Stack[-1]; Pop(1)
0x101f: Return(); Pop(0)

0x1020: PushEmpty(bool, bool)
0x1021: Push(GlobalVars[0])
0x1022: IF (Stack[-1] == 0) GOTO 0x102d; Pop(1)

0x1023: @ IsOverrideActive(Stack[-1])
0x1024: Pop(0)
0x1025: Pop(0); Push((bool) Stack[-1] == 0)
0x1026: IF (Stack[-1] == 0) GOTO 0x102b; Pop(1)

0x1027: PushEmpty(object)
0x1028: Stack[-1] = Stack[-4]
0x1029: Call2 0xd83

0x102a: Pop(1)
0x102b: Return(); Pop(2)

0x102c: GOTO 0x1047

0x102d: Push((int) 1000)
0x102e: PushEmpty(int, object)
0x102f: Stack[-1] = Stack[-6]
0x1030: Push(-2, 1); TaskCall(1)
0x1031: Call2 0x28

0x1032: Pop(-2, 1); TaskReturn
0x1033: Pop(1)
0x1034: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1035: IF (Stack[-1] == 0) GOTO 0x1047; Pop(1)

0x1036: PushEmpty(bool, object)
0x1037: Stack[-1] = Stack[-5]
0x1038: Call2 0xc10

0x1039: Pop(1)
0x103a: Pop(1); Push((bool) Stack[-1] == 0)
0x103b: IF (Stack[-1] == 0) GOTO 0x103d; Pop(1)

0x103c: Return(); Pop(2)

0x103d: PushEmpty(object)
0x103e: Stack[-1] = Stack[-4]
0x103f: Push(-1, 1); TaskCall(0)
0x1040: Call2 0x0

0x1041: Pop(-1, 1); TaskReturn
0x1042: Pop(1)
0x1043: PushEmpty(object)
0x1044: Stack[-1] = Stack[-4]
0x1045: Call2 0xc48

0x1046: Pop(1)
0x1047: Return(); Pop(2)

0x1048: PushEmpty(float)
0x1049: Call2 0xd75

0x104a: Pop(0)
0x104b: Push((float)0.7)
0x104c: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x104d: Return(); Pop(0)

0x104e: PushEmpty()
0x104f: PushEmpty(bool, object, object, float)
0x1050: Stack[-3] = Stack[-7]
0x1051: Stack[-2] = Stack[-6]
0x1052: Stack[-1] = (float) 700.0
0x1053: Call2 0xf86

0x1054: Stack[-8] = Stack[-4]
0x1055: Pop(4)
0x1056: Return(); Pop(0)

0x1057: PushEmpty()
0x1058: PushEmpty(bool, object)
0x1059: Stack[-1] = Stack[-3]
0x105a: Call2 0xad9

0x105b: Pop(1)
0x105c: IF (Stack[-1] == 0) GOTO 0x1068; Pop(1)

0x105d: PushEmpty(object)
0x105e: Call2 0xca7

0x105f: Pop(0)
0x1060: Push((float)-0.1)
0x1061: Push((bool) 1)
0x1062: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1063: Pop(3)
0x1064: PushEmpty(bool)
0x1065: Stack[-1] = (bool) 0
0x1066: Call2 0xdd8

0x1067: Pop(1)
0x1068: PushEmpty()
0x1069: Call2 0xdc0

0x106a: Pop(0)
0x106b: Push(GlobalVars[0])
0x106c: Stack[-1] = (bool) 1
0x106d: GlobalVars[0] = Stack[-1]; Pop(1)
0x106e: Push((int) 50)
0x106f: Push((int) 40)
0x1070: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1071: Pop(2)
0x1072: Return(); Pop(0)

