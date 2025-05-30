GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
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
	@GetAttackDistance
	GetAttackDistance
	attack
	GetPFPosition
	attack_on
	attack_stay
	fjump
	attack_off
	attack_begin
	bjump
	attack_middle
	_
	attack_end
	IsAttacking
	IsAttacking
	walk
	run
	fire
	bullet
	phys
	HasProperty
	HasProperty
	health
	armor
	GetProperty
	armor_
	SetProperty
	IsDead
	IsDead
	GetScene
	noaccess
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
	battle
	ood1Doberman2_1
	branch
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	hook
	watch
	alpha_pills
	meradorm
	beta_pills
	monomicin
	lockpick
	rifle_ammo
	revolver_ammo
	samopal_ammo
	unholster
	player_shot
	IsWeaponHolstered
	heal
	player
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	CanSee (2 args)
	FindPathTo (2 args)
	FollowPath (5 args)
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
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	AddItem (3 args)
	AddItem (4 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetVariable (2 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	SetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x273
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x1e6 Vars = (object)
		EVENT_6 Op = 0x1f4 Vars = ()
		EVENT_22 Op = 0x26d Vars = (object, int, float, float)
		EVENT_16 Op = 0x26f Vars = (object, string)
		EVENT_41 Op = 0x271 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
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
	GTASK_4  Params = 0
		EVENT_0 Op = 0x3e4 Vars = (object)
		EVENT_17 Op = 0x3f8 Vars = (object)
		EVENT_30 Op = 0x410 Vars = (object, object, bool)
		EVENT_40 Op = 0x42c Vars = (object)
		EVENT_42 Op = 0x440 Vars = (object, string)
		EVENT_26 Op = 0x465 Vars = (string)
		EVENT_6 Op = 0x473 Vars = ()
		EVENT_1 Op = 0x47a Vars = (object)
	GTASK_5 Vars = (object) Params = 1
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
	GTASK_6 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_7 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x895 Vars = ()
		EVENT_7 Op = 0x8cd Vars = (int)
		EVENT_1 Op = 0x8e8 Vars = (object)
		EVENT_2 Op = 0x8f7 Vars = (object)
		EVENT_10 Op = 0x97d Vars = (object)
		EVENT_41 Op = 0x988 Vars = (object)

Events:
EVENT_16 Op = 0xd36 Vars = (object, string)
EVENT_41 Op = 0xd43 Vars = (object)
EVENT_22 Op = 0xd49 Vars = (object, int, float, float)
EVENT_43 Op = 0xd51 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xae2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xe5d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xe5b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xe5f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xe61

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xc3d

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
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
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0xb27

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0xc31

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0xc2b

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xa2

0x5d: Pop(1)
0x5e: Push((int) 532749)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 533297)
0x64: Push((int) 34809)
0x65: Push((int) 34808)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 533299)
0x69: Push((int) 34811)
0x6a: Push((int) 34810)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x84

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0xa2

0x71: Pop(1)
0x72: Push((int) 532753)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 532754)
0x78: Push((int) -1)
0x79: Push((int) 34228)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 532977)
0x7d: Push((int) -1)
0x7e: Push((int) 34475)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0xe63

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0xb39

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0xe63

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-2] = Stack[-3]
0xae: Push("")
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0xb49

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0xb63

0xbd: Pop(0)
0xbe: Push((int) 34223)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0xc31

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0xc2b

0xca: Pop(2)
0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0xa2

0xce: Pop(1)
0xcf: Push((int) 532749)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 533297)
0xd5: Push((int) 34809)
0xd6: Push((int) 34808)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 533299)
0xda: Push((int) 34811)
0xdb: Push((int) 34810)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral"
0xe1: Call2 0xa2

0xe2: Pop(1)
0xe3: Push((int) 532753)
0xe4: @@ SetMessage(Stack[-1])
0xe5: Pop(1)
0xe6: @@ ClearReplies()
0xe7: Pop(0)
0xe8: Push((int) 532754)
0xe9: Push((int) -1)
0xea: Push((int) 34228)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Push((int) 532977)
0xee: Push((int) -1)
0xef: Push((int) 34475)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: Push((int) 34811)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call2 0xa2

0xf9: Pop(1)
0xfa: Push((int) 533300)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 533301)
0x100: Push((int) 34809)
0x101: Push((int) 34812)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Return(); Pop(0)

0x105: Push((int) 34809)
0x106: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral"
0x10a: Call2 0xa2

0x10b: Pop(1)
0x10c: Push((int) 533298)
0x10d: @@ SetMessage(Stack[-1])
0x10e: Pop(1)
0x10f: @@ ClearReplies()
0x110: Pop(0)
0x111: Push((int) 532975)
0x112: Push((int) 34474)
0x113: Push((int) 34473)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Push((int) 532978)
0x117: Push((int) 34477)
0x118: Push((int) 34476)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 34477)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral"
0x121: Call2 0xa2

0x122: Pop(1)
0x123: Push((int) 532979)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 532980)
0x129: Push((int) 34480)
0x12a: Push((int) 34478)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Push((int) 532981)
0x12e: Push((int) -1)
0x12f: Push((int) 34479)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 34480)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral"
0x138: Call2 0xa2

0x139: Pop(1)
0x13a: Push((int) 532982)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 532983)
0x140: Push((int) -1)
0x141: Push((int) 34481)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Push((int) 532984)
0x145: Push((int) -1)
0x146: Push((int) 34482)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 34474)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Neutral"
0x14f: Call2 0xa2

0x150: Pop(1)
0x151: Push((int) 532976)
0x152: @@ SetMessage(Stack[-1])
0x153: Pop(1)
0x154: @@ ClearReplies()
0x155: Pop(0)
0x156: Push((int) 532750)
0x157: Push((int) 34225)
0x158: Push((int) 34224)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Push((int) 532985)
0x15c: Push((int) 34484)
0x15d: Push((int) 34483)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: Push((int) 34484)
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Neutral"
0x166: Call2 0xa2

0x167: Pop(1)
0x168: Push((int) 532986)
0x169: @@ SetMessage(Stack[-1])
0x16a: Pop(1)
0x16b: @@ ClearReplies()
0x16c: Pop(0)
0x16d: Push((int) 532987)
0x16e: Push((int) 34225)
0x16f: Push((int) 34485)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Push((int) 532988)
0x173: Push((int) -1)
0x174: Push((int) 34486)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: Push((int) 34225)
0x179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral"
0x17d: Call2 0xa2

0x17e: Pop(1)
0x17f: Push((int) 532751)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 532752)
0x185: Push((int) 34471)
0x186: Push((int) 34226)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Return(); Pop(0)

0x18a: Push((int) 34471)
0x18b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x18d: PushEmpty(string)
0x18e: Stack[-1] = "Neutral"
0x18f: Call2 0xa2

0x190: Pop(1)
0x191: Push((int) 532973)
0x192: @@ SetMessage(Stack[-1])
0x193: Pop(1)
0x194: @@ ClearReplies()
0x195: Pop(0)
0x196: Push((int) 532974)
0x197: Push((int) 34488)
0x198: Push((int) 34472)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Push((int) 532991)
0x19c: Push((int) 34491)
0x19d: Push((int) 34490)
0x19e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f: Pop(3)
0x1a0: Return(); Pop(0)

0x1a1: Push((int) 34491)
0x1a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1a4: PushEmpty(string)
0x1a5: Stack[-1] = "Neutral"
0x1a6: Call2 0xa2

0x1a7: Pop(1)
0x1a8: Push((int) 532992)
0x1a9: @@ SetMessage(Stack[-1])
0x1aa: Pop(1)
0x1ab: @@ ClearReplies()
0x1ac: Pop(0)
0x1ad: Push((int) 532993)
0x1ae: Push((int) 34488)
0x1af: Push((int) 34492)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Return(); Pop(0)

0x1b3: Push((int) 34488)
0x1b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1b6: PushEmpty(string)
0x1b7: Stack[-1] = "Neutral"
0x1b8: Call2 0xa2

0x1b9: Pop(1)
0x1ba: Push((int) 532989)
0x1bb: @@ SetMessage(Stack[-1])
0x1bc: Pop(1)
0x1bd: @@ ClearReplies()
0x1be: Pop(0)
0x1bf: Push((int) 532990)
0x1c0: Push((int) -1)
0x1c1: Push((int) 34489)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Push((int) 532994)
0x1c5: Push((int) -1)
0x1c6: Push((int) 34494)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Return(); Pop(0)

0x1ca: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1cb: PushEmpty(bool)
0x1cc: Call2 0xe63

0x1cd: Pop(0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cf: @ lshStopAnimation()
0x1d0: Pop(0)
0x1d1: GOTO 0x1d4

0x1d2: @ StopAnimation()
0x1d3: Pop(0)
0x1d4: Return(); Pop(0)

0x1d5: GOTO 0xb9

0x1d6: Return(); Pop(0)

0x1d7: PushEmpty()
0x1d8: EventDisable(0)
0x1d9: PushEmpty(object)
0x1da: Stack[-1] = Stack[-2]
0x1db: Call2 0x1f8

0x1dc: Pop(1)
0x1dd: PushEmpty(object)
0x1de: Stack[-1] = Stack[-2]
0x1df: Call2 0xe84

0x1e0: Pop(1)
0x1e1: EventEnable(0)
0x1e2: @ Hold()
0x1e3: Pop(0)
0x1e4: GOTO 0x1e2

0x1e5: Return(); Pop(0)

0x1e6: PushEmpty(int, int)
0x1e7: PushEmpty(int, object)
0x1e8: Stack[-1] = Stack[-5]
0x1e9: Call2 0xe23

0x1ea: Stack[-3] = Stack[-2]
0x1eb: Pop(2)
0x1ec: Push((int) 0)
0x1ed: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ef: PushEmpty(object)
0x1f0: Stack[-1] = Stack[-4]
0x1f1: Call2 0xe26

0x1f2: Pop(1)
0x1f3: Return(); Pop(2)

0x1f4: PushEmpty()
0x1f5: Call2 0xe2c

0x1f6: Pop(0)
0x1f7: Return(); Pop(0)

0x1f8: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x1f9: Pop(0); Push((bool) Stack[-21] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fb: PushEmpty(string)
0x1fc: Stack[-1] = "fdie"
0x1fd: Call2 0x253

0x1fe: Pop(1)
0x1ff: GOTO 0x252

0x200: @@ GetPosition(Stack[-10])
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

0x211: Stack[-6] = "fdie"
0x212: GOTO 0x214

0x213: Stack[-6] = "bdie"
0x214: @ RemoveRTEnvelope()
0x215: Pop(0)
0x216: @ SetDeathState()
0x217: Pop(0)
0x218: @ Stop()
0x219: Pop(0)
0x21a: @ StopAsync()
0x21b: Pop(0)
0x21c: Stack[-5] = Stack[-21]
0x21d: Push("GetScriptProperty")
0x21e: Push((int) 2)
0x21f: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x220: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x221: Push("Owner")
0x222: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x223: Pop(1)
0x224: Push(Stack[-4])
0x225: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x226: Push("Owner")
0x227: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x228: Pop(1)
0x229: Pop(0); Push((bool) Stack[-5] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Stack[-5] = Stack[-21]
0x22c: Push("@GetEyesHeight")
0x22d: Push((int) 1)
0x22e: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x22f: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x230: @@ GetEyesHeight(Stack[-2])
0x231: Pop(0)
0x232: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x233: Push(CvectorIndex(Stack[-1], 1))
0x234: Stack[-1] = Stack[-3]
0x235: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x236: Push("head")
0x237: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x238: Pop(1)
0x239: Stack[-3] = (bool) 1
0x23a: GOTO 0x23c

0x23b: Stack[-3] = (bool) 0
0x23c: PushEmpty(string)
0x23d: Stack[-1] = Stack[-7]
0x23e: Call2 0xb84

0x23f: Pop(1)
0x240: Push("all")
0x241: @ PlayAnimation(Stack[-1], Stack[-7])
0x242: Pop(1)
0x243: @ WaitForAnimEnd()
0x244: Pop(0)
0x245: Push(Stack[-3])
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: @ StopAsync()
0x248: Pop(0)
0x249: Push("head")
0x24a: @ UnlookAsync(Stack[-1])
0x24b: Pop(1)
0x24c: Push("all")
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
0x25f: Stack[-1] = Stack[-2]
0x260: Call2 0xb84

0x261: Pop(1)
0x262: Push("all")
0x263: @ PlayAnimation(Stack[-1], Stack[-2])
0x264: Pop(1)
0x265: @ WaitForAnimEnd()
0x266: Pop(0)
0x267: Push("all")
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
0x277: Call2 0xe65

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
0x283: Call2 0xadd

0x284: Pop(0)
0x285: Pop(1); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x287: PushEmpty()
0x288: Call2 0xe2c

0x289: Pop(0)
0x28a: Return(); Pop(0)

0x28b: PushEmpty(int, int)
0x28c: PushEmpty(int, object)
0x28d: Stack[-1] = Stack[-5]
0x28e: Call2 0xe23

0x28f: Stack[-3] = Stack[-2]
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
0x29b: Stack[-1] = Stack[-4]
0x29c: Call2 0xe26

0x29d: Pop(1)
0x29e: Return(); Pop(2)

0x29f: PushEmpty(int, int)
0x2a0: PushEmpty(object)
0x2a1: Stack[-1] = Stack[-4]
0x2a2: Call2 0xdb1

0x2a3: Pop(1)
0x2a4: PushEmpty(int, object)
0x2a5: Stack[-1] = Stack[-5]
0x2a6: Call2 0xe04

0x2a7: Stack[-3] = Stack[-2]
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
0x2b3: Stack[-1] = Stack[-4]
0x2b4: Call2 0xe0e

0x2b5: Pop(1)
0x2b6: Return(); Pop(2)

0x2b7: PushEmpty(int, int)
0x2b8: PushEmpty(bool, object, object, bool)
0x2b9: Stack[-3] = Stack[-9]
0x2ba: Stack[-2] = Stack[-8]
0x2bb: Stack[-1] = Stack[-7]
0x2bc: Call2 0xe81

0x2bd: Pop(3)
0x2be: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2bf: PushEmpty(int, object, bool)
0x2c0: Stack[-2] = Stack[-8]
0x2c1: Stack[-1] = Stack[-6]
0x2c2: Call2 0xe16

0x2c3: Stack[-4] = Stack[-3]
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
0x2cf: Stack[-1] = Stack[-6]
0x2d0: Call2 0xe1d

0x2d1: Pop(1)
0x2d2: Return(); Pop(2)

0x2d3: PushEmpty(int, int)
0x2d4: PushEmpty(int, object)
0x2d5: Stack[-1] = Stack[-5]
0x2d6: Call2 0xe51

0x2d7: Stack[-3] = Stack[-2]
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
0x2e3: Stack[-1] = Stack[-4]
0x2e4: Call2 0xe54

0x2e5: Pop(1)
0x2e6: Return(); Pop(2)

0x2e7: PushEmpty(int, int)
0x2e8: PushEmpty(bool, object, string)
0x2e9: Stack[-2] = Stack[-7]
0x2ea: Stack[-1] = Stack[-6]
0x2eb: Call2 0xd5b

0x2ec: Pop(2)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2ee: PushEmpty()
0x2ef: Call2 0x346

0x2f0: Pop(0)
0x2f1: PushEmpty(object, string)
0x2f2: Stack[-2] = Stack[-6]
0x2f3: Stack[-1] = Stack[-5]
0x2f4: Call2 0xd7b

0x2f5: Pop(2)
0x2f6: GOTO 0x30b

0x2f7: PushEmpty(int, string, object)
0x2f8: Stack[-2] = Stack[-6]
0x2f9: Stack[-1] = Stack[-7]
0x2fa: Call2 0xe2d

0x2fb: Stack[-4] = Stack[-3]
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
0x307: Stack[-2] = Stack[-5]
0x308: Stack[-1] = Stack[-6]
0x309: Call2 0xe30

0x30a: Pop(2)
0x30b: Return(); Pop(2)

0x30c: PushEmpty()
0x30d: PushEmpty(bool, string)
0x30e: Stack[-1] = Stack[-3]
0x30f: Call2 0xdbe

0x310: Pop(1)
0x311: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x312: PushEmpty()
0x313: Call2 0x346

0x314: Pop(0)
0x315: PushEmpty(string)
0x316: Stack[-1] = Stack[-2]
0x317: Call2 0xdce

0x318: Pop(1)
0x319: Return(); Pop(0)

0x31a: PushEmpty()
0x31b: PushEmpty(bool, object)
0x31c: Stack[-1] = Stack[-3]
0x31d: Call2 0xd94

0x31e: Pop(1)
0x31f: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x320: PushEmpty()
0x321: Call2 0x346

0x322: Pop(0)
0x323: PushEmpty(object)
0x324: Stack[-1] = Stack[-2]
0x325: Call2 0xdab

0x326: Pop(1)
0x327: GOTO 0x32c

0x328: PushEmpty(object)
0x329: Stack[-1] = Stack[-2]
0x32a: Call2 0x35f

0x32b: Pop(1)
0x32c: Return(); Pop(0)

0x32d: PushEmpty()
0x32e: PushEmpty(object)
0x32f: Stack[-1] = Stack[-2]
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
0x343: Call2 0xe2c

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
0x35b: Stack[-1] = Stack[-2]
0x35c: Call2 0xd43

0x35d: Pop(1)
0x35e: Return(); Pop(0)

0x35f: PushEmpty(bool, int, bool, int)
0x360: PushEmpty(bool, object)
0x361: Stack[-1] = Stack[-7]
0x362: Call2 0xa3c

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
0x370: Stack[-1] = Stack[-7]
0x371: Call2 0xdf3

0x372: Stack[-3] = Stack[-2]
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
0x37e: Stack[-1] = Stack[-6]
0x37f: Call2 0xdfc

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
0x3a4: Stack[-1] = Stack[-7]
0x3a5: Call2 0x3de

0x3a6: Stack[-4] = Stack[-2]
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
0x3b7: Push(-0, 0); TaskCall(4)
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
0x3c5: Stack[-3] = Stack[-1]
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
0x3e1: Stack[-4] = Stack[-1]
0x3e2: Return(); Pop(2)

0x3e3: Stack[-1] = 0
0x3e4: PushEmpty(int, int)
0x3e5: PushEmpty(int, object)
0x3e6: Stack[-1] = Stack[-5]
0x3e7: Call2 0xe23

0x3e8: Stack[-3] = Stack[-2]
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
0x3f4: Stack[-1] = Stack[-4]
0x3f5: Call2 0xe26

0x3f6: Pop(1)
0x3f7: Return(); Pop(2)

0x3f8: PushEmpty(int, int)
0x3f9: PushEmpty(object)
0x3fa: Stack[-1] = Stack[-4]
0x3fb: Call2 0xdb1

0x3fc: Pop(1)
0x3fd: PushEmpty(int, object)
0x3fe: Stack[-1] = Stack[-5]
0x3ff: Call2 0xe04

0x400: Stack[-3] = Stack[-2]
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
0x40c: Stack[-1] = Stack[-4]
0x40d: Call2 0xe0e

0x40e: Pop(1)
0x40f: Return(); Pop(2)

0x410: PushEmpty(int, int)
0x411: PushEmpty(bool, object, object, bool)
0x412: Stack[-3] = Stack[-9]
0x413: Stack[-2] = Stack[-8]
0x414: Stack[-1] = Stack[-7]
0x415: Call2 0xe81

0x416: Pop(3)
0x417: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x418: PushEmpty(int, object, bool)
0x419: Stack[-2] = Stack[-8]
0x41a: Stack[-1] = Stack[-6]
0x41b: Call2 0xe16

0x41c: Stack[-4] = Stack[-3]
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
0x428: Stack[-1] = Stack[-6]
0x429: Call2 0xe1d

0x42a: Pop(1)
0x42b: Return(); Pop(2)

0x42c: PushEmpty(int, int)
0x42d: PushEmpty(int, object)
0x42e: Stack[-1] = Stack[-5]
0x42f: Call2 0xe51

0x430: Stack[-3] = Stack[-2]
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
0x43c: Stack[-1] = Stack[-4]
0x43d: Call2 0xe54

0x43e: Pop(1)
0x43f: Return(); Pop(2)

0x440: PushEmpty(int, int)
0x441: PushEmpty(bool, object, string)
0x442: Stack[-2] = Stack[-7]
0x443: Stack[-1] = Stack[-6]
0x444: Call2 0xd5b

0x445: Pop(2)
0x446: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x447: PushEmpty()
0x448: Call2 0x4d9

0x449: Pop(0)
0x44a: PushEmpty(object, string)
0x44b: Stack[-2] = Stack[-6]
0x44c: Stack[-1] = Stack[-5]
0x44d: Call2 0xd7b

0x44e: Pop(2)
0x44f: GOTO 0x464

0x450: PushEmpty(int, string, object)
0x451: Stack[-2] = Stack[-6]
0x452: Stack[-1] = Stack[-7]
0x453: Call2 0xe2d

0x454: Stack[-4] = Stack[-3]
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
0x460: Stack[-2] = Stack[-5]
0x461: Stack[-1] = Stack[-6]
0x462: Call2 0xe30

0x463: Pop(2)
0x464: Return(); Pop(2)

0x465: PushEmpty()
0x466: PushEmpty(bool, string)
0x467: Stack[-1] = Stack[-3]
0x468: Call2 0xdbe

0x469: Pop(1)
0x46a: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46b: PushEmpty()
0x46c: Call2 0x4d9

0x46d: Pop(0)
0x46e: PushEmpty(string)
0x46f: Stack[-1] = Stack[-2]
0x470: Call2 0xdce

0x471: Pop(1)
0x472: Return(); Pop(0)

0x473: PushEmpty()
0x474: Call2 0x4d9

0x475: Pop(0)
0x476: PushEmpty()
0x477: Call2 0xe2c

0x478: Pop(0)
0x479: Return(); Pop(0)

0x47a: PushEmpty()
0x47b: PushEmpty(bool, object)
0x47c: Stack[-1] = Stack[-3]
0x47d: Call2 0xd94

0x47e: Pop(1)
0x47f: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x480: PushEmpty()
0x481: Call2 0x4d9

0x482: Pop(0)
0x483: PushEmpty(object)
0x484: Stack[-1] = Stack[-2]
0x485: Call2 0xdab

0x486: Pop(1)
0x487: Return(); Pop(0)

0x488: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x489: @ WaitForAnimEnd()
0x48a: Pop(0)
0x48b: PushEmpty(bool)
0x48c: Call2 0xadd

0x48d: Pop(0)
0x48e: Pop(1); Push((bool) Stack[-1] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x490: Return(); Pop(14)

0x491: PushEmpty(int)
0x492: Call2 0xde2

0x493: Stack[-8] = Stack[-1]
0x494: Pop(1)
0x495: Stack[-6] = (int) 0
0x496: PushEmpty(bool)
0x497: Stack[-1] = (bool) 0
0x498: Push((int) 5)
0x499: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x49a: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49b: PushEmpty(bool)
0x49c: Call2 0xadd

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
0x4ab: Push("all")
0x4ac: PushEmpty(string, int)
0x4ad: Stack[-1] = Stack[-7]
0x4ae: Call2 0xddb

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
0x4e7: Call2 0x9aa

0x4e8: Stack[-4] = Stack[-2]
0x4e9: Pop(2)
0x4ea: PushEmpty(float, cvector, cvector)
0x4eb: Stack[-2] = Stack[-6]
0x4ec: Stack[-1] = Stack[-5]
0x4ed: Call2 0xbe7

0x4ee: Pop(2)
0x4ef: Push((int) 0)
0x4f0: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f2: PushEmpty(object)
0x4f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f4: Call2 0xad2

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
0x4ff: Call2 0xad2

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
0x50d: Push("head")
0x50e: @ UnlookAsync(Stack[-1])
0x50f: Pop(1)
0x510: Return(); Pop(6)

0x511: PushEmpty(object)
0x512: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x513: Call2 0xb58

0x514: Pop(1)
0x515: Return(); Pop(0)

0x516: PushEmpty(int, int)
0x517: PushEmpty(int, object)
0x518: Stack[-1] = Stack[-5]
0x519: Call2 0xe23

0x51a: Stack[-3] = Stack[-2]
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
0x526: Stack[-1] = Stack[-4]
0x527: Call2 0xe26

0x528: Pop(1)
0x529: Return(); Pop(2)

0x52a: PushEmpty(int, int)
0x52b: PushEmpty(object)
0x52c: Stack[-1] = Stack[-4]
0x52d: Call2 0xdb1

0x52e: Pop(1)
0x52f: PushEmpty(int, object)
0x530: Stack[-1] = Stack[-5]
0x531: Call2 0xe04

0x532: Stack[-3] = Stack[-2]
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
0x53e: Stack[-1] = Stack[-4]
0x53f: Call2 0xe0e

0x540: Pop(1)
0x541: Return(); Pop(2)

0x542: PushEmpty(int, int)
0x543: PushEmpty(bool, object, object, bool)
0x544: Stack[-3] = Stack[-9]
0x545: Stack[-2] = Stack[-8]
0x546: Stack[-1] = Stack[-7]
0x547: Call2 0xe81

0x548: Pop(3)
0x549: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x54a: PushEmpty(int, object, bool)
0x54b: Stack[-2] = Stack[-8]
0x54c: Stack[-1] = Stack[-6]
0x54d: Call2 0xe16

0x54e: Stack[-4] = Stack[-3]
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
0x55a: Stack[-1] = Stack[-6]
0x55b: Call2 0xe1d

0x55c: Pop(1)
0x55d: Return(); Pop(2)

0x55e: PushEmpty(int, int)
0x55f: PushEmpty(int, object)
0x560: Stack[-1] = Stack[-5]
0x561: Call2 0xe51

0x562: Stack[-3] = Stack[-2]
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
0x56e: Stack[-1] = Stack[-4]
0x56f: Call2 0xe54

0x570: Pop(1)
0x571: Return(); Pop(2)

0x572: PushEmpty(int, int)
0x573: PushEmpty(bool, object, string)
0x574: Stack[-2] = Stack[-7]
0x575: Stack[-1] = Stack[-6]
0x576: Call2 0xd5b

0x577: Pop(2)
0x578: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x579: PushEmpty()
0x57a: Call2 0x5a5

0x57b: Pop(0)
0x57c: PushEmpty(object, string)
0x57d: Stack[-2] = Stack[-6]
0x57e: Stack[-1] = Stack[-5]
0x57f: Call2 0xd7b

0x580: Pop(2)
0x581: GOTO 0x596

0x582: PushEmpty(int, string, object)
0x583: Stack[-2] = Stack[-6]
0x584: Stack[-1] = Stack[-7]
0x585: Call2 0xe2d

0x586: Stack[-4] = Stack[-3]
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
0x592: Stack[-2] = Stack[-5]
0x593: Stack[-1] = Stack[-6]
0x594: Call2 0xe30

0x595: Pop(2)
0x596: Return(); Pop(2)

0x597: PushEmpty()
0x598: PushEmpty(bool, string)
0x599: Stack[-1] = Stack[-3]
0x59a: Call2 0xdbe

0x59b: Pop(1)
0x59c: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x59d: PushEmpty()
0x59e: Call2 0x5a5

0x59f: Pop(0)
0x5a0: PushEmpty(string)
0x5a1: Stack[-1] = Stack[-2]
0x5a2: Call2 0xdce

0x5a3: Pop(1)
0x5a4: Return(); Pop(0)

0x5a5: @ StopGroup0()
0x5a6: Pop(0)
0x5a7: @ StopAsync()
0x5a8: Pop(0)
0x5a9: Push("head")
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
0x5b5: Stack[-1] = Stack[-2]
0x5b6: Call2 0xd43

0x5b7: Pop(1)
0x5b8: Return(); Pop(0)

0x5b9: PushEmpty(cvector, cvector, cvector, cvector)
0x5ba: Push((int) 111)
0x5bb: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5bd: Return(); Pop(4)

0x5be: PushEmpty(bool, object)
0x5bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c0: Call2 0xa3c

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
0x5cc: Call2 0x9aa

0x5cd: Stack[-3] = Stack[-2]
0x5ce: Pop(2)
0x5cf: PushEmpty(float, cvector, cvector)
0x5d0: Stack[-2] = Stack[-5]
0x5d1: Stack[-1] = Stack[-4]
0x5d2: Call2 0xbe7

0x5d3: Pop(2)
0x5d4: Push((float)0.5)
0x5d5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d7: PushEmpty(object)
0x5d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d9: Call2 0xad2

0x5da: Pop(1)
0x5db: Return(); Pop(4)

0x5dc: PushEmpty()
0x5dd: Call2 0x5a5

0x5de: Pop(0)
0x5df: PushEmpty()
0x5e0: Call2 0xe2c

0x5e1: Pop(0)
0x5e2: Return(); Pop(0)

0x5e3: PushEmpty()
0x5e4: PushEmpty(bool, object)
0x5e5: Stack[-1] = Stack[-3]
0x5e6: Call2 0xd94

0x5e7: Pop(1)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5e9: PushEmpty()
0x5ea: Call2 0x5a5

0x5eb: Pop(0)
0x5ec: PushEmpty(object)
0x5ed: Stack[-1] = Stack[-2]
0x5ee: Call2 0xdab

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty()
0x5f2: PushEmpty(object, bool, float)
0x5f3: Stack[-3] = Stack[-4]
0x5f4: Stack[-2] = (bool) 1
0x5f5: Stack[-1] = (float) 180.0
0x5f6: Call2 0x5ff

0x5f7: Pop(3)
0x5f8: Return(); Pop(0)

0x5f9: PushEmpty()
0x5fa: Stack[-3] = (float) 0.03
0x5fb: Return(); Pop(0)

0x5fc: PushEmpty()
0x5fd: Stack[-3] = (int) 0
0x5fe: Return(); Pop(0)

0x5ff: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x600: PushEmpty()
0x601: Call2 0x6e4

0x602: Pop(0)
0x603: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x604: Push("@GetAttackDistance")
0x605: Push((int) 1)
0x606: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x607: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x608: @@ GetAttackDistance(Stack[-11])
0x609: Pop(0)
0x60a: Push((int) 50)
0x60b: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x60c: GOTO 0x60e

0x60d: Stack[-11] = Stack[-23]
0x60e: Push((int) 150)
0x60f: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x611: Stack[-11] = (int) 150
0x612: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x613: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x614: @ IsPlayerActor(Stack[-0], Stack[-8])
0x615: Pop(0)
0x616: Push(Stack[-8])
0x617: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x618: Push("attack")
0x619: @ PlayGlobalMusic(Stack[-1])
0x61a: Pop(1)
0x61b: PushEmpty(object)
0x61c: Call2 0xbad

0x61d: Pop(0)
0x61e: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x61f: Pop(1)
0x620: Push(Stack[-24])
0x621: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x622: Stack[-7] = (bool) 0
0x623: GOTO 0x625

0x624: Stack[-7] = (bool) 1
0x625: Push((float)400.0)
0x626: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x627: PushEmpty(bool)
0x628: Stack[-1] = (bool) 0
0x629: PushEmpty(bool, object)
0x62a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62b: Call2 0xa3c

0x62c: Pop(1)
0x62d: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62e: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x62f: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x630: Stack[-1] = (bool) 1
0x631: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x632: PushEmpty()
0x633: Call2 0x881

0x634: Pop(0)
0x635: @@ GetPFPosition(Stack[-10])
0x636: Pop(0)
0x637: @ GetPFPosition(Stack[-9])
0x638: Pop(0)
0x639: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x63a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x63b: Pop(0); Push(Stack[-6] * Stack[-6]);
0x63c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x63e: PushEmpty(bool, object, float, float, bool, bool)
0x63f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x640: Stack[-4] = Stack[-17]
0x641: Stack[-3] = (float) 3000.0
0x642: Stack[-2] = (bool) 1
0x643: Stack[-1] = (bool) 0
0x644: Push(-6, 3); TaskCall(7)
0x645: Call2 0x89c

0x646: Pop(-6, 3); TaskReturn
0x647: Pop(5)
0x648: Pop(1); Push((bool) Stack[-1] == 0)
0x649: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x64a: GOTO 0x6d3

0x64b: Stack[-7] = (bool) 0
0x64c: GOTO 0x6d2

0x64d: Pop(0); Push(Stack[-23] * Stack[-23]);
0x64e: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x64f: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x650: @@ GetPFPosition(Stack[-3])
0x651: Pop(0)
0x652: @ CanReachByPF(Stack[-2], Stack[-3])
0x653: Pop(0)
0x654: Pop(0); Push((bool) Stack[-2] == 0)
0x655: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x656: PushEmpty(bool, object, float, float, bool, bool)
0x657: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x658: Stack[-4] = Stack[-17]
0x659: Stack[-3] = (float) 3000.0
0x65a: Stack[-2] = (bool) 1
0x65b: Stack[-1] = (bool) 0
0x65c: Push(-6, 3); TaskCall(7)
0x65d: Call2 0x89c

0x65e: Pop(-6, 3); TaskReturn
0x65f: Pop(5)
0x660: Pop(1); Push((bool) Stack[-1] == 0)
0x661: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x662: GOTO 0x6d3

0x663: Stack[-7] = (bool) 0
0x664: GOTO 0x627

0x665: Pop(0); Push((bool) Stack[-7] == 0)
0x666: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x667: PushEmpty(object)
0x668: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x669: Call2 0xad2

0x66a: Pop(1)
0x66b: Push("all")
0x66c: Push("attack_on")
0x66d: @ PlayAnimation(Stack[-2], Stack[-1])
0x66e: Pop(2)
0x66f: @ WaitForAnimEnd()
0x670: Pop(0)
0x671: PushEmpty()
0x672: Call2 0x881

0x673: Pop(0)
0x674: @ StopAsync()
0x675: Pop(0)
0x676: Stack[-7] = (bool) 1
0x677: PushEmpty(bool, object)
0x678: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x679: Call2 0xa3c

0x67a: Pop(1)
0x67b: Pop(1); Push((bool) Stack[-1] == 0)
0x67c: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67d: GOTO 0x6d3

0x67e: @ rand(Stack[-1])
0x67f: Pop(0)
0x680: PushEmpty(bool)
0x681: Stack[-1] = (bool) 1
0x682: Push((float)0.25)
0x683: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x685: PushEmpty(bool)
0x686: Call2 0x856

0x687: Pop(0)
0x688: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x689: Stack[-1] = (bool) 0
0x68a: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x68b: @ Face(Stack[-0])
0x68c: Pop(0)
0x68d: PushEmpty()
0x68e: Call2 0x888

0x68f: Pop(0)
0x690: Push("all")
0x691: Push("attack_stay")
0x692: @ PlayAnimation(Stack[-2], Stack[-1])
0x693: Pop(2)
0x694: PushEmpty(bool, float)
0x695: Stack[-1] = Stack[-25]
0x696: Call2 0x7d2

0x697: Pop(2)
0x698: @ StopAsync()
0x699: Pop(0)
0x69a: GOTO 0x6c9

0x69b: @ Face(Stack[-0])
0x69c: Pop(0)
0x69d: Push("all")
0x69e: Push("fjump")
0x69f: @ PlayAnimation(Stack[-2], Stack[-1])
0x6a0: Pop(2)
0x6a1: @ WaitForAnimEnd()
0x6a2: Pop(0)
0x6a3: PushEmpty()
0x6a4: Call2 0x881

0x6a5: Pop(0)
0x6a6: Push(CVector(0.0, 0.0, 0.0))
0x6a7: @ SetSpeed(Stack[-1])
0x6a8: Pop(1)
0x6a9: @ Stop()
0x6aa: Pop(0)
0x6ab: @ StopAsync()
0x6ac: Pop(0)
0x6ad: PushEmpty(bool)
0x6ae: Call2 0x856

0x6af: Pop(0)
0x6b0: Pop(1); Push((bool) Stack[-1] == 0)
0x6b1: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6b2: PushEmpty(bool, object)
0x6b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b4: Call2 0xa3c

0x6b5: Pop(1)
0x6b6: Pop(1); Push((bool) Stack[-1] == 0)
0x6b7: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b8: GOTO 0x6d3

0x6b9: @@ GetPFPosition(Stack[-10])
0x6ba: Pop(0)
0x6bb: @ GetPFPosition(Stack[-9])
0x6bc: Pop(0)
0x6bd: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x6be: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x6bf: Pop(0); Push(Stack[-23] * Stack[-23]);
0x6c0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x6c1: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c2: PushEmpty(bool, float)
0x6c3: Stack[-1] = Stack[-25]
0x6c4: Call2 0x72e

0x6c5: Pop(1)
0x6c6: Pop(1); Push((bool) Stack[-1] == 0)
0x6c7: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c8: GOTO 0x6d3

0x6c9: GOTO 0x6d2

0x6ca: PushEmpty(bool, float)
0x6cb: Stack[-1] = Stack[-25]
0x6cc: Call2 0x72e

0x6cd: Pop(1)
0x6ce: Pop(1); Push((bool) Stack[-1] == 0)
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6d0: GOTO 0x6d3

0x6d1: Stack[-7] = (bool) 1
0x6d2: GOTO 0x627

0x6d3: @ WaitForAnimEnd()
0x6d4: Pop(0)
0x6d5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d6: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d7: Return(); Pop(22)

0x6d8: Push("all")
0x6d9: Push("attack_off")
0x6da: @ PlayAnimation(Stack[-2], Stack[-1])
0x6db: Pop(2)
0x6dc: @ WaitForAnimEnd()
0x6dd: Pop(0)
0x6de: Push(Stack[-8])
0x6df: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6e0: Push((float)2.0)
0x6e1: @ Sleep(Stack[-1])
0x6e2: Pop(1)
0x6e3: Return(); Pop(22)

0x6e4: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x6e5: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x6e6: Push("all")
0x6e7: Push("attack_begin")
0x6e8: Push((int) 1)
0x6e9: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x6ea: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6eb: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x6ec: Pop(2)
0x6ed: Pop(0); Push((bool) Stack[-3] == 0)
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6ef: GOTO 0x6f3

0x6f0: Push((int) 1)
0x6f1: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x6f2: GOTO 0x6e6

0x6f3: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x6f4: Push("attack")
0x6f5: Push((int) 1)
0x6f6: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x6f7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6f8: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x6f9: Pop(1)
0x6fa: Pop(0); Push((bool) Stack[-2] == 0)
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fc: GOTO 0x700

0x6fd: Push((int) 1)
0x6fe: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x6ff: GOTO 0x6f4

0x700: Push("all")
0x701: Push("bjump")
0x702: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x703: Pop(2)
0x704: Push(CvectorIndex(Stack[-1], 2))
0x705: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x706: Return(); Pop(6)

0x707: PushEmpty(object, float, float, object, float, float)
0x708: Push((float)0.9)
0x709: Pop(1); Push(Stack[-9] * Stack[-1]);
0x70a: @ GetVictim(Stack[-1], Stack[-4])
0x70b: Pop(1)
0x70c: @ ReportAttack(Stack[-0])
0x70d: Pop(0)
0x70e: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x70f: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x710: PushEmpty(float, object, int)
0x711: Stack[-2] = Stack[-6]
0x712: Stack[-1] = Stack[-10]
0x713: Call2 0x5f9

0x714: Stack[-5] = Stack[-3]
0x715: Pop(3)
0x716: PushEmpty(float, object, float, int)
0x717: Stack[-3] = Stack[-7]
0x718: Stack[-2] = Stack[-6]
0x719: PushEmpty(int, object, int)
0x71a: Stack[-2] = Stack[-10]
0x71b: Stack[-1] = Stack[-14]
0x71c: Call2 0x5fc

0x71d: Stack[-4] = Stack[-3]
0x71e: Pop(3)
0x71f: Call2 0x9ca

0x720: Stack[-5] = Stack[-4]
0x721: Pop(4)
0x722: PushEmpty(int)
0x723: Call2 0x886

0x724: Pop(0)
0x725: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x726: Pop(1)
0x727: PushEmpty(object, float)
0x728: Stack[-2] = Stack[-5]
0x729: Stack[-1] = Stack[-3]
0x72a: Call2 0x88d

0x72b: Pop(2)
0x72c: Return(); Pop(6)

0x72d: Stack[-3] = 0
0x72e: PushEmpty(int, bool, int, string, int, bool, int, string)
0x72f: PushEmpty()
0x730: Call2 0x881

0x731: Pop(0)
0x732: @ irand(Stack[-4], Stack[-1])
0x733: Pop(0)
0x734: Push((int) 1)
0x735: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x736: @ Face(Stack[-0])
0x737: Pop(0)
0x738: Push((bool) 1)
0x739: @ SetAttackState(Stack[-1])
0x73a: Pop(1)
0x73b: PushEmpty()
0x73c: Call2 0xc20

0x73d: Pop(0)
0x73e: Push("all")
0x73f: Push("attack_begin")
0x740: Pop(1); Push(Stack[-1] + Stack[-6]);
0x741: @ PlayAnimation(Stack[-2], Stack[-1])
0x742: Pop(2)
0x743: @ WaitForAnimEnd()
0x744: Pop(0)
0x745: PushEmpty()
0x746: Call2 0x861

0x747: Pop(0)
0x748: PushEmpty(bool, object)
0x749: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x74a: Call2 0xa3c

0x74b: Pop(1)
0x74c: Pop(1); Push((bool) Stack[-1] == 0)
0x74d: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x74e: @ StopAsync()
0x74f: Pop(0)
0x750: Stack[-10] = (bool) 0
0x751: Return(); Pop(8)

0x752: PushEmpty(float, int)
0x753: Stack[-2] = Stack[-11]
0x754: Stack[-1] = Stack[-6]
0x755: Call2 0x707

0x756: Pop(2)
0x757: Push("all")
0x758: Push("attack_middle")
0x759: Pop(1); Push(Stack[-1] + Stack[-6]);
0x75a: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x75b: Pop(2)
0x75c: Push(Stack[-3])
0x75d: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x75e: PushEmpty()
0x75f: Call2 0xc20

0x760: Pop(0)
0x761: Push("all")
0x762: Push("attack_middle")
0x763: Pop(1); Push(Stack[-1] + Stack[-6]);
0x764: @ PlayAnimation(Stack[-2], Stack[-1])
0x765: Pop(2)
0x766: @ WaitForAnimEnd()
0x767: Pop(0)
0x768: PushEmpty()
0x769: Call2 0x881

0x76a: Pop(0)
0x76b: PushEmpty(bool, object)
0x76c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76d: Call2 0xa3c

0x76e: Pop(1)
0x76f: Pop(1); Push((bool) Stack[-1] == 0)
0x770: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x771: @ StopAsync()
0x772: Pop(0)
0x773: Stack[-10] = (bool) 0
0x774: Return(); Pop(8)

0x775: PushEmpty(float, int)
0x776: Stack[-2] = Stack[-11]
0x777: Stack[-1] = Stack[-6]
0x778: Call2 0x707

0x779: Pop(2)
0x77a: Stack[-2] = (int) 1
0x77b: Push("attack_middle")
0x77c: Pop(1); Push(Stack[-1] + Stack[-5]);
0x77d: Push("_")
0x77e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x77f: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x780: Push("all")
0x781: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x782: Pop(1)
0x783: Pop(0); Push((bool) Stack[-3] == 0)
0x784: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x785: GOTO 0x7a3

0x786: PushEmpty()
0x787: Call2 0xc20

0x788: Pop(0)
0x789: Push("all")
0x78a: @ PlayAnimation(Stack[-1], Stack[-2])
0x78b: Pop(1)
0x78c: @ WaitForAnimEnd()
0x78d: Pop(0)
0x78e: PushEmpty()
0x78f: Call2 0x881

0x790: Pop(0)
0x791: PushEmpty(bool, object)
0x792: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x793: Call2 0xa3c

0x794: Pop(1)
0x795: Pop(1); Push((bool) Stack[-1] == 0)
0x796: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x797: @ StopAsync()
0x798: Pop(0)
0x799: Stack[-10] = (bool) 0
0x79a: Return(); Pop(8)

0x79b: PushEmpty(float, int)
0x79c: Stack[-2] = Stack[-11]
0x79d: Stack[-1] = Stack[-6]
0x79e: Call2 0x707

0x79f: Pop(2)
0x7a0: Push((int) 1)
0x7a1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7a2: GOTO 0x77b

0x7a3: Push((bool) 0)
0x7a4: @ SetAttackState(Stack[-1])
0x7a5: Pop(1)
0x7a6: Push("all")
0x7a7: Push("attack_end")
0x7a8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x7a9: @ PlayAnimation(Stack[-2], Stack[-1])
0x7aa: Pop(2)
0x7ab: PushEmpty(bool)
0x7ac: Call2 0x88f

0x7ad: Pop(0)
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7af: PushEmpty(bool, float)
0x7b0: Stack[-1] = (float) 0.75
0x7b1: Call2 0x7b7

0x7b2: Pop(2)
0x7b3: @ StopAsync()
0x7b4: Pop(0)
0x7b5: Stack[-10] = (bool) 1
0x7b6: Return(); Pop(8)

0x7b7: PushEmpty(float, bool, float, bool)
0x7b8: @ rand(Stack[-2])
0x7b9: Pop(0)
0x7ba: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7bc: @ IsAnimationPlaying(Stack[-1])
0x7bd: Pop(0)
0x7be: Pop(0); Push((bool) Stack[-1] == 0)
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7c0: GOTO 0x7ca

0x7c1: PushEmpty(bool)
0x7c2: Call2 0x819

0x7c3: Pop(0)
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c5: Stack[-6] = (bool) 1
0x7c6: Return(); Pop(4)

0x7c7: @ sync()
0x7c8: Pop(0)
0x7c9: GOTO 0x7bc

0x7ca: GOTO 0x7d0

0x7cb: @ WaitForAnimEnd()
0x7cc: Pop(0)
0x7cd: PushEmpty()
0x7ce: Call2 0x881

0x7cf: Pop(0)
0x7d0: Stack[-6] = (bool) 0
0x7d1: Return(); Pop(4)

0x7d2: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x7d3: @ IsAnimationPlaying(Stack[-5])
0x7d4: Pop(0)
0x7d5: Pop(0); Push((bool) Stack[-5] == 0)
0x7d6: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d7: GOTO 0x7f8

0x7d8: PushEmpty(bool)
0x7d9: Call2 0x819

0x7da: Pop(0)
0x7db: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dc: Stack[-12] = (bool) 1
0x7dd: Return(); Pop(10)

0x7de: PushEmpty(bool, object)
0x7df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e0: Call2 0xa3c

0x7e1: Pop(1)
0x7e2: Pop(1); Push((bool) Stack[-1] == 0)
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e4: Stack[-12] = (bool) 0
0x7e5: Return(); Pop(10)

0x7e6: @@ GetPFPosition(Stack[-4])
0x7e7: Pop(0)
0x7e8: @ GetPFPosition(Stack[-3])
0x7e9: Pop(0)
0x7ea: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x7eb: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x7ec: Pop(0); Push(Stack[-11] * Stack[-11]);
0x7ed: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7ef: PushEmpty(bool, float)
0x7f0: Stack[-1] = Stack[-13]
0x7f1: Call2 0x72e

0x7f2: Pop(2)
0x7f3: Stack[-12] = (bool) 1
0x7f4: Return(); Pop(10)

0x7f5: @ sync()
0x7f6: Pop(0)
0x7f7: GOTO 0x7d3

0x7f8: PushEmpty()
0x7f9: Call2 0x881

0x7fa: Pop(0)
0x7fb: Stack[-12] = (bool) 0
0x7fc: Return(); Pop(10)

0x7fd: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x7fe: PushEmpty(bool, object)
0x7ff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x800: Call2 0xa3c

0x801: Pop(1)
0x802: Pop(1); Push((bool) Stack[-1] == 0)
0x803: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x804: Stack[-11] = (bool) 0
0x805: Return(); Pop(10)

0x806: PushEmpty(bool)
0x807: Call2 0x856

0x808: Pop(0)
0x809: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x80a: @@ GetPFPosition(Stack[-5])
0x80b: Pop(0)
0x80c: @ GetPFPosition(Stack[-4])
0x80d: Pop(0)
0x80e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x80f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x810: @@ GetAttackDistance(Stack[-1])
0x811: Pop(0)
0x812: Push((int) 50)
0x813: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x814: Pop(0); Push(Stack[-1] * Stack[-1]);
0x815: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x816: Return(); Pop(10)

0x817: Stack[-11] = (bool) 0
0x818: Return(); Pop(10)

0x819: PushEmpty(bool)
0x81a: Stack[-1] = (bool) 0
0x81b: PushEmpty(bool)
0x81c: Call2 0x7fd

0x81d: Pop(0)
0x81e: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x81f: PushEmpty(bool)
0x820: Call2 0x829

0x821: Pop(0)
0x822: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x823: Stack[-1] = (bool) 1
0x824: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x825: Stack[-1] = (bool) 1
0x826: Return(); Pop(0)

0x827: Stack[-1] = (bool) 0
0x828: Return(); Pop(0)

0x829: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x82a: @ GetScene(Stack[-5])
0x82b: Pop(0)
0x82c: Stack[-4] = (bool) 0
0x82d: PushEmpty(cvector, object)
0x82e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x82f: Call2 0x9aa

0x830: Pop(1)
0x831: Pop(1); Push(( -Stack[-1])
0x832: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x833: Pop(1)
0x834: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x835: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x836: GOTO 0x853

0x837: @ Face(Stack[-0])
0x838: Pop(0)
0x839: Push("all")
0x83a: Push("bjump")
0x83b: @ PlayAnimation(Stack[-2], Stack[-1])
0x83c: Pop(2)
0x83d: @@ GetPFPosition(Stack[-2])
0x83e: Pop(0)
0x83f: @ GetPFPosition(Stack[-1])
0x840: Pop(0)
0x841: @ WaitForAnimEnd()
0x842: Pop(0)
0x843: PushEmpty()
0x844: Call2 0x881

0x845: Pop(0)
0x846: @ StopAsync()
0x847: Pop(0)
0x848: Push(CVector(0.0, 0.0, 0.0))
0x849: @ SetSpeed(Stack[-1])
0x84a: Pop(1)
0x84b: Stack[-4] = (bool) 1
0x84c: PushEmpty(bool)
0x84d: Call2 0x7fd

0x84e: Pop(0)
0x84f: Pop(1); Push((bool) Stack[-1] == 0)
0x850: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x851: GOTO 0x853

0x852: GOTO 0x82d

0x853: Stack[-11] = Stack[-4]
0x854: Return(); Pop(10)

0x855: Stack[-5] = 0
0x856: PushEmpty(bool, bool)
0x857: Push("IsAttacking")
0x858: Push((int) 1)
0x859: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x85a: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85b: @@ IsAttacking(Stack[-1])
0x85c: Pop(0)
0x85d: Stack[-3] = Stack[-1]
0x85e: Return(); Pop(2)

0x85f: Stack[-3] = (bool) 0
0x860: Return(); Pop(2)

0x861: PushEmpty(float, int, float, int)
0x862: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x863: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x864: Return(); Pop(4)

0x865: Push( Stack[5 + Tasks[-1].StackPointer] )
0x866: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x867: Push((int) -1)
0x868: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x869: Push((int) 0)
0x86a: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x86b: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x86c: Return(); Pop(4)

0x86d: @ rand(Stack[-2])
0x86e: Pop(0)
0x86f: PushEmpty(float)
0x870: Call2 0x893

0x871: Pop(0)
0x872: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x874: @ irand(Stack[-1], Stack[-2])
0x875: Pop(0)
0x876: Push((int) 1)
0x877: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x878: Push("attack")
0x879: Pop(1); Push(Stack[-1] + Stack[-2]);
0x87a: @ Speak(Stack[-1])
0x87b: Pop(1)
0x87c: PushEmpty(int)
0x87d: Call2 0x891

0x87e: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x87f: Pop(1)
0x880: Return(); Pop(4)

0x881: PushEmpty(object)
0x882: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x883: Call2 0xc17

0x884: Pop(1)
0x885: Return(); Pop(0)

0x886: Stack[-1] = (int) 0
0x887: Return(); Pop(0)

0x888: PushEmpty(string)
0x889: Stack[-1] = "attack_stay"
0x88a: Call2 0xb84

0x88b: Pop(1)
0x88c: Return(); Pop(0)

0x88d: PushEmpty()
0x88e: Return(); Pop(0)

0x88f: Stack[-1] = (bool) 1
0x890: Return(); Pop(0)

0x891: Stack[-1] = (int) 1
0x892: Return(); Pop(0)

0x893: Stack[-1] = (float) 0.5
0x894: Return(); Pop(0)

0x895: PushEmpty()
0x896: Call2 0x8db

0x897: Pop(0)
0x898: PushEmpty()
0x899: Call2 0xe2c

0x89a: Pop(0)
0x89b: Return(); Pop(0)

0x89c: PushEmpty(bool, bool, bool, bool)
0x89d: PushEmpty(object)
0x89e: Stack[-1] = Stack[-10]
0x89f: Call2 0xc17

0x8a0: Pop(1)
0x8a1: Push((int) 1)
0x8a2: Push((int) 5)
0x8a3: @ SetTimer(Stack[-2], Stack[-1])
0x8a4: Pop(2)
0x8a5: @ CanSee(Stack[-2], Stack[-9])
0x8a6: Pop(0)
0x8a7: Push(Stack[-2])
0x8a8: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x8a9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8aa: PushEmpty(object)
0x8ab: Stack[-1] = Stack[-10]
0x8ac: Call2 0xb58

0x8ad: Pop(1)
0x8ae: GOTO 0x8b0

0x8af: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8b0: PushEmpty(bool, object)
0x8b1: Stack[-1] = Stack[-11]
0x8b2: Call2 0x9b9

0x8b3: Pop(1)
0x8b4: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8b5: PushEmpty(object)
0x8b6: Call2 0xbad

0x8b7: Pop(0)
0x8b8: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x8b9: Pop(1)
0x8ba: PushEmpty(bool, object, float, float, bool, bool)
0x8bb: Stack[-5] = Stack[-15]
0x8bc: Stack[-4] = Stack[-14]
0x8bd: Stack[-3] = Stack[-13]
0x8be: Stack[-2] = Stack[-12]
0x8bf: Stack[-1] = Stack[-11]
0x8c0: Call2 0x905

0x8c1: Stack[-7] = Stack[-6]
0x8c2: Pop(6)
0x8c3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8c4: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8c5: Push("head")
0x8c6: @ UnlookAsync(Stack[-1])
0x8c7: Pop(1)
0x8c8: Push((int) 1)
0x8c9: @ KillTimer(Stack[-1])
0x8ca: Pop(1)
0x8cb: Stack[-10] = Stack[-1]
0x8cc: Return(); Pop(4)

0x8cd: PushEmpty()
0x8ce: Push((int) 1)
0x8cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8d1: PushEmpty(object)
0x8d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d3: Call2 0xc17

0x8d4: Pop(1)
0x8d5: GOTO 0x8da

0x8d6: PushEmpty(int)
0x8d7: Stack[-1] = Stack[-2]
0x8d8: Call2 0x96b

0x8d9: Pop(1)
0x8da: Return(); Pop(0)

0x8db: Push((int) 1)
0x8dc: @ KillTimer(Stack[-1])
0x8dd: Pop(1)
0x8de: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8df: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8e0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8e1: Push("head")
0x8e2: @ UnlookAsync(Stack[-1])
0x8e3: Pop(1)
0x8e4: PushEmpty()
0x8e5: Call2 0x981

0x8e6: Pop(0)
0x8e7: Return(); Pop(0)

0x8e8: PushEmpty()
0x8e9: PushEmpty(bool)
0x8ea: Stack[-1] = (bool) 0
0x8eb: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x8ec: IF (Stack[-1] == 0) GOTO 0x8f0; Pop(1)

0x8ed: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f0; Pop(1)

0x8ef: Stack[-1] = (bool) 1
0x8f0: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8f1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8f2: PushEmpty(object)
0x8f3: Stack[-1] = Stack[-2]
0x8f4: Call2 0xb58

0x8f5: Pop(1)
0x8f6: Return(); Pop(0)

0x8f7: PushEmpty()
0x8f8: PushEmpty(bool)
0x8f9: Stack[-1] = (bool) 0
0x8fa: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x8fb: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8fc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8fd: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8fe: Stack[-1] = (bool) 1
0x8ff: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x900: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x901: Push("head")
0x902: @ UnlookAsync(Stack[-1])
0x903: Pop(1)
0x904: Return(); Pop(0)

0x905: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x906: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x907: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x908: Stack[-7] = Stack[-17]
0x909: PushEmpty(bool, object)
0x90a: Stack[-1] = Stack[-23]
0x90b: Call2 0x991

0x90c: Pop(1)
0x90d: Pop(1); Push((bool) Stack[-1] == 0)
0x90e: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x90f: Stack[-22] = (bool) 0
0x910: Return(); Pop(16)

0x911: @@ GetPosition(Stack[-5])
0x912: Pop(0)
0x913: @ GetPosition(Stack[-4])
0x914: Pop(0)
0x915: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x916: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x917: PushEmpty(bool)
0x918: Stack[-1] = (bool) 0
0x919: Push((int) 0)
0x91a: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x91b: IF (Stack[-1] == 0) GOTO 0x920; Pop(1)

0x91c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x91d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x91e: IF (Stack[-1] == 0) GOTO 0x920; Pop(1)

0x91f: Stack[-1] = (bool) 1
0x920: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x921: @ Stop()
0x922: Pop(0)
0x923: Stack[-22] = (bool) 0
0x924: Return(); Pop(16)

0x925: Pop(0); Push(Stack[-20] * Stack[-20]);
0x926: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x927: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x928: @@ GetPFPosition(Stack[-5])
0x929: Pop(0)
0x92a: @ FindPathTo(Stack[-1], Stack[-5])
0x92b: Pop(0)
0x92c: Pop(0); Push(( Stack[-1] != 0 )
0x92d: IF (Stack[-1] == 0) GOTO 0x930; Pop(1)

0x92e: Stack[-6] = Stack[-1]
0x92f: Stack[-1] = 0
0x930: Pop(0); Push(( Stack[-6] != 0 )
0x931: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x932: Push(Stack[-7])
0x933: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x934: Stack[-7] = (bool) 0
0x935: @ RotatePath(Stack[-6], Stack[-8])
0x936: Pop(0)
0x937: Pop(0); Push((bool) Stack[-8] == 0)
0x938: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x939: GOTO 0x969

0x93a: Push((int) 0)
0x93b: Push((float)0.3)
0x93c: @ SetTimer(Stack[-2], Stack[-1])
0x93d: Pop(2)
0x93e: PushEmpty(string)
0x93f: Call2 0x998

0x940: Pop(0)
0x941: PushEmpty(string)
0x942: Call2 0x99a

0x943: Pop(0)
0x944: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x945: Pop(2)
0x946: Pop(0); Push((bool) Stack[-8] == 0)
0x947: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x948: Push( Stack[0 + Tasks[-1].StackPointer] )
0x949: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x94a: Stack[-6] = 0
0x94b: GOTO 0x969

0x94c: GOTO 0x94e

0x94d: GOTO 0x968

0x94e: GOTO 0x950

0x94f: Stack[-6] = 0
0x950: GOTO 0x961

0x951: Push((int) 0)
0x952: @ KillTimer(Stack[-1])
0x953: Pop(1)
0x954: Push((float)0.5)
0x955: @ Sleep(Stack[-1], Stack[-9])
0x956: Pop(1)
0x957: Pop(0); Push((bool) Stack[-8] == 0)
0x958: IF (Stack[-1] == 0) GOTO 0x95d; Pop(1)

0x959: Push( Stack[0 + Tasks[-1].StackPointer] )
0x95a: IF (Stack[-1] == 0) GOTO 0x95d; Pop(1)

0x95b: Stack[-6] = 0
0x95c: GOTO 0x969

0x95d: Push((int) 0)
0x95e: Push((float)0.3)
0x95f: @ SetTimer(Stack[-2], Stack[-1])
0x960: Pop(2)
0x961: Stack[-1] = 0
0x962: GOTO 0x967

0x963: Push((int) 0)
0x964: @ KillTimer(Stack[-1])
0x965: Pop(1)
0x966: GOTO 0x969

0x967: Stack[-6] = 0
0x968: GOTO 0x909

0x969: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x96a: Return(); Pop(16)

0x96b: PushEmpty()
0x96c: Push((int) 0)
0x96d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x96e: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96f: Return(); Pop(0)

0x970: PushEmpty(bool, object)
0x971: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x972: Call2 0x991

0x973: Pop(1)
0x974: Pop(1); Push((bool) Stack[-1] == 0)
0x975: IF (Stack[-1] == 0) GOTO 0x977; Pop(1)

0x976: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x977: Push((int) 0)
0x978: @ KillTimer(Stack[-1])
0x979: Pop(1)
0x97a: @ Stop()
0x97b: Pop(0)
0x97c: Return(); Pop(0)

0x97d: PushEmpty()
0x97e: @ RequestClearPath(Stack[-1])
0x97f: Pop(0)
0x980: Return(); Pop(0)

0x981: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x982: Push((int) 0)
0x983: @ KillTimer(Stack[-1])
0x984: Pop(1)
0x985: @ Stop()
0x986: Pop(0)
0x987: Return(); Pop(0)

0x988: PushEmpty()
0x989: PushEmpty()
0x98a: Call2 0x8db

0x98b: Pop(0)
0x98c: PushEmpty(object)
0x98d: Stack[-1] = Stack[-2]
0x98e: Call2 0xd43

0x98f: Pop(1)
0x990: Return(); Pop(0)

0x991: PushEmpty()
0x992: PushEmpty(bool, object)
0x993: Stack[-1] = Stack[-3]
0x994: Call2 0xa3c

0x995: Stack[-4] = Stack[-2]
0x996: Pop(2)
0x997: Return(); Pop(0)

0x998: Stack[-1] = "walk"
0x999: Return(); Pop(0)

0x99a: Stack[-1] = "run"
0x99b: Return(); Pop(0)

0x99c: PushEmpty()
0x99d: Push((int) 2)
0x99e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x99f: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x9a0: Stack[-2] = "fire"
0x9a1: Return(); Pop(0)

0x9a2: GOTO 0x9a8

0x9a3: Push((int) 1)
0x9a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a5: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x9a6: Stack[-2] = "bullet"
0x9a7: Return(); Pop(0)

0x9a8: Stack[-2] = "phys"
0x9a9: Return(); Pop(0)

0x9aa: PushEmpty(cvector, cvector, cvector, cvector)
0x9ab: @ GetPosition(Stack[-2])
0x9ac: Pop(0)
0x9ad: @@ GetPosition(Stack[-1])
0x9ae: Pop(0)
0x9af: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x9b0: Return(); Pop(4)

0x9b1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9b2: @ GetPosition(Stack[-3])
0x9b3: Pop(0)
0x9b4: @@ GetPosition(Stack[-2])
0x9b5: Pop(0)
0x9b6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x9b7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x9b8: Return(); Pop(6)

0x9b9: PushEmpty(bool, bool)
0x9ba: @ IsPlayerActor(Stack[-3], Stack[-1])
0x9bb: Pop(0)
0x9bc: Stack[-4] = Stack[-1]
0x9bd: Return(); Pop(2)

0x9be: PushEmpty(bool, bool)
0x9bf: Push("HasProperty")
0x9c0: Push((int) 2)
0x9c1: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x9c2: Pop(1); Push((bool) Stack[-1] == 0)
0x9c3: IF (Stack[-1] == 0) GOTO 0x9c6; Pop(1)

0x9c4: Stack[-5] = (bool) 0
0x9c5: Return(); Pop(2)

0x9c6: @@ HasProperty(Stack[-3], Stack[-1])
0x9c7: Pop(0)
0x9c8: Stack[-5] = Stack[-1]
0x9c9: Return(); Pop(2)

0x9ca: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x9cb: PushEmpty(bool, object, string)
0x9cc: Stack[-2] = Stack[-18]
0x9cd: Stack[-1] = "health"
0x9ce: Call2 0x9be

0x9cf: Pop(2)
0x9d0: Pop(1); Push((bool) Stack[-1] == 0)
0x9d1: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9d2: Stack[-16] = (float) 0.0
0x9d3: Return(); Pop(12)

0x9d4: PushEmpty(bool, object, string)
0x9d5: Stack[-2] = Stack[-18]
0x9d6: Stack[-1] = "armor"
0x9d7: Call2 0x9be

0x9d8: Pop(2)
0x9d9: Pop(1); Push((bool) Stack[-1] == 0)
0x9da: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9db: Stack[-6] = (int) 0
0x9dc: GOTO 0x9e0

0x9dd: Push("armor")
0x9de: @@ GetProperty(Stack[-1], Stack[-7])
0x9df: Pop(1)
0x9e0: Push("armor_")
0x9e1: PushEmpty(string, int)
0x9e2: Stack[-1] = Stack[-16]
0x9e3: Call2 0x99c

0x9e4: Pop(1)
0x9e5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x9e6: PushEmpty(bool, object, string)
0x9e7: Stack[-2] = Stack[-18]
0x9e8: Stack[-1] = Stack[-8]
0x9e9: Call2 0x9be

0x9ea: Pop(2)
0x9eb: Pop(1); Push((bool) Stack[-1] == 0)
0x9ec: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9ed: Stack[-4] = (int) 0
0x9ee: GOTO 0x9f1

0x9ef: @@ GetProperty(Stack[-5], Stack[-4])
0x9f0: Pop(0)
0x9f1: PushEmpty(float, float, float)
0x9f2: Pop(0); Push(Stack[-9] + Stack[-7]);
0x9f3: Push((float)100.0)
0x9f4: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x9f5: Stack[-1] = (int) 1
0x9f6: Call2 0xbbd

0x9f7: Stack[-6] = Stack[-3]
0x9f8: Pop(3)
0x9f9: Push("health")
0x9fa: @@ GetProperty(Stack[-1], Stack[-3])
0x9fb: Pop(1)
0x9fc: Push((int) 1)
0x9fd: Pop(1); Push(Stack[-1] - Stack[-4]);
0x9fe: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x9ff: Push("health")
0xa00: PushEmpty(float, float, float, float)
0xa01: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xa02: Stack[-2] = (int) 0
0xa03: Stack[-1] = (int) 1
0xa04: Call2 0xbc4

0xa05: Pop(3)
0xa06: @@ SetProperty(Stack[-2], Stack[-1])
0xa07: Pop(2)
0xa08: PushEmpty(bool, object)
0xa09: Stack[-1] = Stack[-17]
0xa0a: Call2 0x9b9

0xa0b: Pop(1)
0xa0c: IF (Stack[-1] == 0) GOTO 0xa11; Pop(1)

0xa0d: PushEmpty(float)
0xa0e: Stack[-1] = -Stack[-2]; Pop(0);
0xa0f: Call2 0xbfd

0xa10: Pop(1)
0xa11: Stack[-16] = Stack[-1]
0xa12: Return(); Pop(12)

0xa13: PushEmpty(bool, bool)
0xa14: @@ IsDead(Stack[-1])
0xa15: Pop(0)
0xa16: Stack[-4] = Stack[-1]
0xa17: Return(); Pop(2)

0xa18: PushEmpty(object, object, object, object)
0xa19: Pop(0); Push((bool) Stack[-5] == 0)
0xa1a: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa1b: Stack[-6] = (bool) 0
0xa1c: Return(); Pop(4)

0xa1d: PushEmpty(bool)
0xa1e: Stack[-1] = (bool) 0
0xa1f: Push("IsDead")
0xa20: Push((int) 1)
0xa21: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xa22: IF (Stack[-1] == 0) GOTO 0xa29; Pop(1)

0xa23: PushEmpty(bool, object)
0xa24: Stack[-1] = Stack[-8]
0xa25: Call2 0xa13

0xa26: Pop(1)
0xa27: IF (Stack[-1] == 0) GOTO 0xa29; Pop(1)

0xa28: Stack[-1] = (bool) 1
0xa29: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa2a: Stack[-6] = (bool) 0
0xa2b: Return(); Pop(4)

0xa2c: @ GetScene(Stack[-2])
0xa2d: Pop(0)
0xa2e: Pop(0); Push((bool) Stack[-2] == 0)
0xa2f: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa30: Stack[-6] = (bool) 0
0xa31: Return(); Pop(4)

0xa32: @@ GetScene(Stack[-1])
0xa33: Pop(0)
0xa34: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xa35: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa36: Stack[-6] = (bool) 0
0xa37: Return(); Pop(4)

0xa38: Stack[-6] = (bool) 1
0xa39: Return(); Pop(4)

0xa3a: Stack[-1] = 0
0xa3b: Stack[-2] = 0
0xa3c: PushEmpty(int, int)
0xa3d: PushEmpty(bool, object)
0xa3e: Stack[-1] = Stack[-5]
0xa3f: Call2 0xa18

0xa40: Pop(1)
0xa41: Pop(1); Push((bool) Stack[-1] == 0)
0xa42: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa43: Stack[-4] = (bool) 0
0xa44: Return(); Pop(2)

0xa45: PushEmpty(bool, object, string)
0xa46: Stack[-2] = Stack[-6]
0xa47: Stack[-1] = "noaccess"
0xa48: Call2 0x9be

0xa49: Pop(2)
0xa4a: Pop(1); Push((bool) Stack[-1] == 0)
0xa4b: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4c: Stack[-4] = (bool) 1
0xa4d: Return(); Pop(2)

0xa4e: Push("noaccess")
0xa4f: @@ GetProperty(Stack[-1], Stack[-2])
0xa50: Pop(1)
0xa51: Push((int) 0)
0xa52: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xa53: Return(); Pop(2)

0xa54: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xa55: Pop(0); Push((bool) Stack[-15] == 0)
0xa56: IF (Stack[-1] == 0) GOTO 0xa58; Pop(1)

0xa57: Return(); Pop(14)

0xa58: @ IsDead(Stack[-7])
0xa59: Pop(0)
0xa5a: Push(Stack[-7])
0xa5b: IF (Stack[-1] == 0) GOTO 0xa5d; Pop(1)

0xa5c: Return(); Pop(14)

0xa5d: @ GetSecondaryAnimationType(Stack[-6])
0xa5e: Pop(0)
0xa5f: Push((int) 0)
0xa60: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xa61: IF (Stack[-1] == 0) GOTO 0xa63; Pop(1)

0xa62: Return(); Pop(14)

0xa63: @@ GetPosition(Stack[-5])
0xa64: Pop(0)
0xa65: @ GetPosition(Stack[-4])
0xa66: Pop(0)
0xa67: @ GetDirection(Stack[-3])
0xa68: Pop(0)
0xa69: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xa6a: Push(CvectorIndex(Stack[-2], 0))
0xa6b: Push(CvectorIndex(Stack[-4], 0))
0xa6c: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa6d: Push(CvectorIndex(Stack[-3], 2))
0xa6e: Push(CvectorIndex(Stack[-5], 2))
0xa6f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa70: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa71: Push((int) 0)
0xa72: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa73: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa74: Stack[-1] = "fhit"
0xa75: GOTO 0xa77

0xa76: Stack[-1] = "bhit"
0xa77: Push("hit_react")
0xa78: Push("1")
0xa79: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa7a: Push("2")
0xa7b: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa7c: Push((int) -10)
0xa7d: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa7e: Pop(4)
0xa7f: Return(); Pop(14)

0xa80: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xa81: PushEmpty(bool)
0xa82: Stack[-1] = (bool) 0
0xa83: PushEmpty(bool)
0xa84: Stack[-1] = (bool) 0
0xa85: Push(Stack[-23])
0xa86: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa87: Push((int) 4)
0xa88: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xa89: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa8a: Stack[-1] = (bool) 1
0xa8b: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8c: Push((int) 5)
0xa8d: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xa8e: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8f: Stack[-1] = (bool) 1
0xa90: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xa91: PushEmpty(cvector, cvector)
0xa92: PushEmpty(cvector, object)
0xa93: Stack[-1] = Stack[-25]
0xa94: Call2 0x9aa

0xa95: Stack[-3] = Stack[-2]
0xa96: Pop(2)
0xa97: Call2 0xbb3

0xa98: Stack[-11] = Stack[-2]
0xa99: Pop(2)
0xa9a: @ CreateVectorVector(Stack[-8])
0xa9b: Pop(0)
0xa9c: Stack[-7] = (int) 1
0xa9d: Push("hit")
0xa9e: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa9f: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xaa0: Pop(1)
0xaa1: Pop(0); Push((bool) Stack[-6] == 0)
0xaa2: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xaa3: GOTO 0xaad

0xaa4: Pop(0); Push(Stack[-4] | Stack[-9]);
0xaa5: Push((float)0.70711)
0xaa6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xaa7: IF (Stack[-1] == 0) GOTO 0xaaa; Pop(1)

0xaa8: @@ add(Stack[-5])
0xaa9: Pop(0)
0xaaa: Push((int) 1)
0xaab: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xaac: GOTO 0xa9d

0xaad: @@ size(Stack[-3])
0xaae: Pop(0)
0xaaf: Push(Stack[-3])
0xab0: IF (Stack[-1] == 0) GOTO 0xabe; Pop(1)

0xab1: @ irand(Stack[-2], Stack[-3])
0xab2: Pop(0)
0xab3: @@ get(Stack[-1], Stack[-2])
0xab4: Pop(0)
0xab5: PushEmpty(object, int, float, cvector, cvector)
0xab6: Stack[-5] = Stack[-26]
0xab7: Stack[-4] = Stack[-25]
0xab8: Stack[-3] = Stack[-24]
0xab9: Stack[-2] = Stack[-6]
0xaba: Stack[-1] = -Stack[-14]; Pop(0);
0xabb: Call2 0xac4

0xabc: Pop(5)
0xabd: Return(); Pop(18)

0xabe: Stack[-8] = 0
0xabf: PushEmpty(object)
0xac0: Stack[-1] = Stack[-22]
0xac1: Call2 0xa54

0xac2: Pop(1)
0xac3: Return(); Pop(18)

0xac4: PushEmpty(object, object, object, object)
0xac5: @ GetScene(Stack[-2])
0xac6: Pop(0)
0xac7: Push("scripted")
0xac8: Push("blood_dir.xml")
0xac9: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xaca: Pop(2)
0xacb: PushEmpty(object)
0xacc: Stack[-1] = Stack[-10]
0xacd: Call2 0xa54

0xace: Pop(1)
0xacf: Return(); Pop(4)

0xad0: Stack[-1] = 0
0xad1: Stack[-2] = 0
0xad2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xad3: @@ GetPosition(Stack[-3])
0xad4: Pop(0)
0xad5: @ GetPosition(Stack[-2])
0xad6: Pop(0)
0xad7: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xad8: Push(CvectorIndex(Stack[-1], 0))
0xad9: Push(CvectorIndex(Stack[-2], 2))
0xada: @ RotateAsync(Stack[-2], Stack[-1])
0xadb: Pop(2)
0xadc: Return(); Pop(6)

0xadd: PushEmpty(bool, bool)
0xade: @ IsLoaded(Stack[-1])
0xadf: Pop(0)
0xae0: Stack[-3] = Stack[-1]
0xae1: Return(); Pop(2)

0xae2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xae3: @@ GetPosition(Stack[-8])
0xae4: Pop(0)
0xae5: @@ GetEyesHeight(Stack[-9])
0xae6: Pop(0)
0xae7: Push(CvectorIndex(Stack[-8], 1))
0xae8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xae9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xaea: @ GetPosition(Stack[-7])
0xaeb: Pop(0)
0xaec: @ GetEyesHeight(Stack[-9])
0xaed: Pop(0)
0xaee: Push(CvectorIndex(Stack[-7], 1))
0xaef: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xaf0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xaf1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xaf2: Push(CvectorIndex(Stack[-6], 1))
0xaf3: Stack[-1] = (int) 0
0xaf4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xaf5: Pop(0); Push(Stack[-6] | Stack[-6]);
0xaf6: Pop(1); Push(Sqrt(Stack[-1]))
0xaf7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xaf8: Stack[-5] = -Stack[-6]; Pop(0);
0xaf9: Pop(0); Push(Stack[-6] * Stack[-19]);
0xafa: PushEmpty(cvector, cvector)
0xafb: Push(CVector(0.0, 1.0, 0.0))
0xafc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xafd: Call2 0xbb3

0xafe: Pop(1)
0xaff: Push((int) 25)
0xb00: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb01: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb02: Push(CVector(0.0, 10.0, 0.0))
0xb03: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xb04: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xb05: @ IsOverrideActive(Stack[-2])
0xb06: Pop(0)
0xb07: Push(Stack[-2])
0xb08: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xb09: Stack[-21] = (bool) 0
0xb0a: Return(); Pop(18)

0xb0b: @ StopWorld()
0xb0c: Pop(0)
0xb0d: Push((bool) 1)
0xb0e: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xb0f: Pop(1)
0xb10: Push(CvectorIndex(Stack[-4], 0))
0xb11: Push(CvectorIndex(Stack[-5], 2))
0xb12: @ Rotate(Stack[-2], Stack[-1])
0xb13: Pop(2)
0xb14: PushEmpty(bool)
0xb15: Call2 0xe63

0xb16: Pop(0)
0xb17: IF (Stack[-1] == 0) GOTO 0xb19; Pop(1)

0xb18: GOTO 0xb21

0xb19: Push("head")
0xb1a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xb1b: Pop(1)
0xb1c: Push(Stack[-1])
0xb1d: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb1e: Push("head")
0xb1f: @ LookAsyncCamera(Stack[-1])
0xb20: Pop(1)
0xb21: @ CameraWaitForPlayFinish()
0xb22: Pop(0)
0xb23: @ ResumeWorld()
0xb24: Pop(0)
0xb25: Stack[-21] = (bool) 1
0xb26: Return(); Pop(18)

0xb27: PushEmpty(bool, bool)
0xb28: Push((bool) 1)
0xb29: @ CameraSwitchToNormal(Stack[-1])
0xb2a: Pop(1)
0xb2b: PushEmpty(bool)
0xb2c: Call2 0xe63

0xb2d: Pop(0)
0xb2e: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb2f: GOTO 0xb38

0xb30: Push("head")
0xb31: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xb32: Pop(1)
0xb33: Push(Stack[-1])
0xb34: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb35: Push("head")
0xb36: @ UnlookAsync(Stack[-1])
0xb37: Pop(1)
0xb38: Return(); Pop(2)

0xb39: PushEmpty(bool, float, float, bool, float, float)
0xb3a: @ lshHasAnimation(Stack[-3], Stack[-7])
0xb3b: Pop(0)
0xb3c: Push(Stack[-3])
0xb3d: IF (Stack[-1] == 0) GOTO 0xb44; Pop(1)

0xb3e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xb3f: Pop(0)
0xb40: Push((bool) 0)
0xb41: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb42: Pop(1)
0xb43: GOTO 0xb48

0xb44: Push("Can't find lsh animation : ")
0xb45: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb46: @ Trace(Stack[-1])
0xb47: Pop(1)
0xb48: Return(); Pop(6)

0xb49: PushEmpty(bool, float, float, bool, float, float)
0xb4a: @ lshHasAnimation(Stack[-3], Stack[-8])
0xb4b: Pop(0)
0xb4c: Push(Stack[-3])
0xb4d: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb4e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xb4f: Pop(0)
0xb50: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xb51: Pop(0)
0xb52: GOTO 0xb57

0xb53: Push("Can't find lsh animation : ")
0xb54: Pop(1); Push(Stack[-1] + Stack[-9]);
0xb55: @ Trace(Stack[-1])
0xb56: Pop(1)
0xb57: Return(); Pop(6)

0xb58: PushEmpty(float, cvector, float, cvector)
0xb59: @@ GetEyesHeight(Stack[-2])
0xb5a: Pop(0)
0xb5b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xb5c: Push(CvectorIndex(Stack[-1], 1))
0xb5d: Stack[-1] = Stack[-3]
0xb5e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xb5f: Push("head")
0xb60: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xb61: Pop(1)
0xb62: Return(); Pop(4)

0xb63: PushEmpty(bool)
0xb64: Call2 0xe63

0xb65: Pop(0)
0xb66: IF (Stack[-1] == 0) GOTO 0xb69; Pop(1)

0xb67: @ lshStopSpeech()
0xb68: Pop(0)
0xb69: Return(); Pop(0)

0xb6a: PushEmpty(bool, bool)
0xb6b: PushEmpty(bool, int, int)
0xb6c: Stack[-2] = Stack[-7]
0xb6d: Stack[-1] = Stack[-6]
0xb6e: Call2 0xbcf

0xb6f: Pop(2)
0xb70: IF (Stack[-1] == 0) GOTO 0xb74; Pop(1)

0xb71: Push((int) 0)
0xb72: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xb73: Pop(1)
0xb74: Return(); Pop(2)

0xb75: PushEmpty(int, bool, int, bool)
0xb76: PushEmpty(bool, int, int)
0xb77: Stack[-2] = Stack[-10]
0xb78: Stack[-1] = Stack[-9]
0xb79: Call2 0xbcf

0xb7a: Pop(2)
0xb7b: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb7c: @ irand(Stack[-2], Stack[-5])
0xb7d: Pop(0)
0xb7e: Push((int) 0)
0xb7f: Push((int) 1)
0xb80: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb81: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xb82: Pop(2)
0xb83: Return(); Pop(4)

0xb84: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xb85: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xb86: Pop(0)
0xb87: Pop(0); Push((bool) Stack[-8] == 0)
0xb88: IF (Stack[-1] == 0) GOTO 0xb9d; Pop(1)

0xb89: Stack[-7] = (int) 0
0xb8a: Push((int) 1)
0xb8b: Pop(1); Push(Stack[-8] + Stack[-1]);
0xb8c: Pop(1); Push(Stack[-18] + Stack[-1]);
0xb8d: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xb8e: Pop(1)
0xb8f: Pop(0); Push((bool) Stack[-6] == 0)
0xb90: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb91: GOTO 0xb95

0xb92: Push((int) 1)
0xb93: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xb94: GOTO 0xb8a

0xb95: Pop(0); Push((bool) Stack[-7] == 0)
0xb96: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb97: Return(); Pop(16)

0xb98: @ irand(Stack[-5], Stack[-7])
0xb99: Pop(0)
0xb9a: Push((int) 1)
0xb9b: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb9c: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xb9d: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xb9e: Pop(0)
0xb9f: Push(Stack[-4])
0xba0: IF (Stack[-1] == 0) GOTO 0xbac; Pop(1)

0xba1: @ GetEyesHeight(Stack[-3])
0xba2: Pop(0)
0xba3: @ GetDirection(Stack[-2])
0xba4: Pop(0)
0xba5: Push((int) 50)
0xba6: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xba7: Push(CvectorIndex(Stack[-1], 1))
0xba8: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xba9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xbaa: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xbab: Pop(0)
0xbac: Return(); Pop(16)

0xbad: PushEmpty(object, object)
0xbae: @ self(Stack[-1])
0xbaf: Pop(0)
0xbb0: Stack[-3] = Stack[-1]
0xbb1: Return(); Pop(2)

0xbb2: Stack[-1] = 0
0xbb3: PushEmpty(float, float)
0xbb4: Pop(0); Push(Stack[-3] | Stack[-3]);
0xbb5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xbb6: Push((float)0.0)
0xbb7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbb8: IF (Stack[-1] == 0) GOTO 0xbbb; Pop(1)

0xbb9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xbba: Return(); Pop(2)

0xbbb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xbbc: Return(); Pop(2)

0xbbd: PushEmpty()
0xbbe: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xbbf: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbc0: Stack[-3] = Stack[-2]
0xbc1: GOTO 0xbc3

0xbc2: Stack[-3] = Stack[-1]
0xbc3: Return(); Pop(0)

0xbc4: PushEmpty()
0xbc5: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xbc6: IF (Stack[-1] == 0) GOTO 0xbc9; Pop(1)

0xbc7: Stack[-4] = Stack[-2]
0xbc8: Return(); Pop(0)

0xbc9: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xbca: IF (Stack[-1] == 0) GOTO 0xbcd; Pop(1)

0xbcb: Stack[-4] = Stack[-1]
0xbcc: Return(); Pop(0)

0xbcd: Stack[-4] = Stack[-3]
0xbce: Return(); Pop(0)

0xbcf: PushEmpty(int, int)
0xbd0: @ irand(Stack[-1], Stack[-3])
0xbd1: Pop(0)
0xbd2: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xbd3: Return(); Pop(2)

0xbd4: PushEmpty()
0xbd5: Push(CvectorIndex(Stack[-2], 0))
0xbd6: Push(CvectorIndex(Stack[-2], 0))
0xbd7: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbd8: Push(CvectorIndex(Stack[-3], 2))
0xbd9: Push(CvectorIndex(Stack[-3], 2))
0xbda: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbdb: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xbdc: Return(); Pop(0)

0xbdd: PushEmpty()
0xbde: Push(CvectorIndex(Stack[-1], 0))
0xbdf: Push(CvectorIndex(Stack[-2], 0))
0xbe0: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbe1: Push(CvectorIndex(Stack[-2], 2))
0xbe2: Push(CvectorIndex(Stack[-3], 2))
0xbe3: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbe4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbe5: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xbe6: Return(); Pop(0)

0xbe7: PushEmpty()
0xbe8: PushEmpty(float, cvector, cvector)
0xbe9: Stack[-2] = Stack[-5]
0xbea: Stack[-1] = Stack[-4]
0xbeb: Call2 0xbd4

0xbec: Pop(2)
0xbed: PushEmpty(float, cvector)
0xbee: Stack[-1] = Stack[-5]
0xbef: Call2 0xbdd

0xbf0: Pop(1)
0xbf1: PushEmpty(float, cvector)
0xbf2: Stack[-1] = Stack[-5]
0xbf3: Call2 0xbdd

0xbf4: Pop(1)
0xbf5: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbf6: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xbf7: Return(); Pop(0)

0xbf8: PushEmpty(int, int)
0xbf9: @ GetVariable(Stack[-3], Stack[-1])
0xbfa: Pop(0)
0xbfb: Stack[-4] = Stack[-1]
0xbfc: Return(); Pop(2)

0xbfd: PushEmpty(object, object)
0xbfe: @ CreateFloatVector(Stack[-1])
0xbff: Pop(0)
0xc00: @@ add(Stack[-3])
0xc01: Pop(0)
0xc02: Push((int) 0)
0xc03: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xc04: IF (Stack[-1] == 0) GOTO 0xc09; Pop(1)

0xc05: Push((float)0.7)
0xc06: Push((int) 500)
0xc07: @ RumblePlay(Stack[-2], Stack[-1])
0xc08: Pop(2)
0xc09: Push((int) 15)
0xc0a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xc0b: Pop(1)
0xc0c: Return(); Pop(2)

0xc0d: Stack[-1] = 0
0xc0e: PushEmpty(float, float)
0xc0f: @ GetGameTime(Stack[-1])
0xc10: Pop(0)
0xc11: Push((int) 1)
0xc12: PushEmpty(int)
0xc13: Push((int) 24)
0xc14: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xc15: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc16: Return(); Pop(2)

0xc17: PushEmpty(bool, bool)
0xc18: @ IsPlayerActor(Stack[-3], Stack[-1])
0xc19: Pop(0)
0xc1a: Push(Stack[-1])
0xc1b: IF (Stack[-1] == 0) GOTO 0xc1f; Pop(1)

0xc1c: Push("attack")
0xc1d: @ PlayGlobalMusic(Stack[-1])
0xc1e: Pop(1)
0xc1f: Return(); Pop(2)

0xc20: PushEmpty(object, object)
0xc21: @ GetScene(Stack[-1])
0xc22: Pop(0)
0xc23: Push("battle")
0xc24: PushEmpty(object)
0xc25: Call2 0xbad

0xc26: Pop(0)
0xc27: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xc28: Pop(2)
0xc29: Return(); Pop(2)

0xc2a: Stack[-1] = 0
0xc2b: PushEmpty()
0xc2c: Push("ood1Doberman2_1")
0xc2d: Push((int) 1)
0xc2e: @ SetVariable(Stack[-2], Stack[-1])
0xc2f: Pop(2)
0xc30: Return(); Pop(0)

0xc31: PushEmpty()
0xc32: PushEmpty(int, string)
0xc33: Stack[-1] = "ood1Doberman2_1"
0xc34: Call2 0xbf8

0xc35: Pop(1)
0xc36: Push((int) 0)
0xc37: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc38: IF (Stack[-1] == 0) GOTO 0xc3b; Pop(1)

0xc39: Stack[-2] = (bool) 1
0xc3a: Return(); Pop(0)

0xc3b: Stack[-2] = (bool) 0
0xc3c: Return(); Pop(0)

0xc3d: PushEmpty(int, int)
0xc3e: Push("branch")
0xc3f: @ GetVariable(Stack[-1], Stack[-2])
0xc40: Pop(1)
0xc41: Push((int) 0)
0xc42: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc43: IF (Stack[-1] == 0) GOTO 0xc47; Pop(1)

0xc44: Stack[-3] = (int) 1
0xc45: Return(); Pop(2)

0xc46: GOTO 0xc4c

0xc47: Push((int) 1)
0xc48: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc49: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc4a: Stack[-3] = (int) 2
0xc4b: Return(); Pop(2)

0xc4c: Stack[-3] = (int) 3
0xc4d: Return(); Pop(2)

0xc4e: PushEmpty(int, int)
0xc4f: Push("branch")
0xc50: @ GetVariable(Stack[-1], Stack[-2])
0xc51: Pop(1)
0xc52: Stack[-3] = Stack[-1]
0xc53: Return(); Pop(2)

0xc54: PushEmpty()
0xc55: PushEmpty(int)
0xc56: Call2 0xc4e

0xc57: Pop(0)
0xc58: Push((int) 1)
0xc59: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc5a: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc5b: @ WorkWithCorpse(Stack[-1])
0xc5c: Pop(0)
0xc5d: GOTO 0xc60

0xc5e: @ Barter(Stack[-1])
0xc5f: Pop(0)
0xc60: Return(); Pop(0)

0xc61: PushEmpty(int, bool, int, bool)
0xc62: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xc63: IF (Stack[-1] == 0) GOTO 0xc68; Pop(1)

0xc64: Push("GenerateMoney: iMin > iMax")
0xc65: @ Trace(Stack[-1])
0xc66: Pop(1)
0xc67: Return(); Pop(4)

0xc68: Stack[-2] = (int) 0
0xc69: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xc6a: IF (Stack[-1] == 0) GOTO 0xc6f; Pop(1)

0xc6b: Pop(0); Push(Stack[-5] - Stack[-6]);
0xc6c: @ irand(Stack[-3], Stack[-1])
0xc6d: Pop(1)
0xc6e: GOTO 0xc73

0xc6f: Push((int) 0)
0xc70: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xc71: IF (Stack[-1] == 0) GOTO 0xc73; Pop(1)

0xc72: Return(); Pop(4)

0xc73: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xc74: Push((int) 0)
0xc75: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc76: IF (Stack[-1] == 0) GOTO 0xc78; Pop(1)

0xc77: Return(); Pop(4)

0xc78: PushEmpty(int, string)
0xc79: Stack[-1] = "Money"
0xc7a: Call2 0xd29

0xc7b: Pop(1)
0xc7c: Push((int) 0)
0xc7d: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xc7e: Pop(2)
0xc7f: Return(); Pop(4)

0xc80: PushEmpty(object, int, bool, object, int, bool)
0xc81: @ CreateInvItem(Stack[-3])
0xc82: Pop(0)
0xc83: @@ SetItemName(Stack[-7])
0xc84: Pop(0)
0xc85: Push("Organ")
0xc86: Push((int) 1)
0xc87: @@ SetProperty(Stack[-2], Stack[-1])
0xc88: Pop(2)
0xc89: @@ GetItemID(Stack[-2])
0xc8a: Pop(0)
0xc8b: Push((int) 0)
0xc8c: Push((int) 1)
0xc8d: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xc8e: Pop(2)
0xc8f: Return(); Pop(6)

0xc90: Stack[-3] = 0
0xc91: PushEmpty(int)
0xc92: Call2 0xc4e

0xc93: Pop(0)
0xc94: Push((int) 1)
0xc95: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xc96: IF (Stack[-1] == 0) GOTO 0xc98; Pop(1)

0xc97: Return(); Pop(0)

0xc98: PushEmpty(string)
0xc99: Stack[-1] = "liver"
0xc9a: Call2 0xc80

0xc9b: Pop(1)
0xc9c: PushEmpty(string)
0xc9d: Stack[-1] = "kidney"
0xc9e: Call2 0xc80

0xc9f: Pop(1)
0xca0: PushEmpty(string)
0xca1: Stack[-1] = "heart"
0xca2: Call2 0xc80

0xca3: Pop(1)
0xca4: PushEmpty(string)
0xca5: Stack[-1] = "blood"
0xca6: Call2 0xc80

0xca7: Pop(1)
0xca8: Return(); Pop(0)

0xca9: PushEmpty(bool, bool)
0xcaa: Push((int) 0)
0xcab: @ ClearSubContainer(Stack[-1])
0xcac: Pop(1)
0xcad: PushEmpty(int, int)
0xcae: Stack[-2] = (int) 0
0xcaf: Push((int) 10)
0xcb0: PushEmpty(int)
0xcb1: Call2 0xc0e

0xcb2: Pop(0)
0xcb3: Push((int) 10)
0xcb4: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcb5: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xcb6: Call2 0xc61

0xcb7: Pop(2)
0xcb8: PushEmpty(string, int, int)
0xcb9: Stack[-3] = "hook"
0xcba: Stack[-2] = (int) 1
0xcbb: Stack[-1] = (int) 4
0xcbc: Call2 0xb6a

0xcbd: Pop(3)
0xcbe: PushEmpty(string, int, int)
0xcbf: Stack[-3] = "watch"
0xcc0: Stack[-2] = (int) 1
0xcc1: Stack[-1] = (int) 10
0xcc2: Call2 0xb6a

0xcc3: Pop(3)
0xcc4: Return(); Pop(2)

0xcc5: PushEmpty(int, bool, int, int, bool, int)
0xcc6: Push((int) 0)
0xcc7: @ ClearSubContainer(Stack[-1])
0xcc8: Pop(1)
0xcc9: PushEmpty(int)
0xcca: Call2 0xc0e

0xccb: Stack[-2] = Stack[-1]
0xccc: Pop(1)
0xccd: Push(Stack[-7])
0xcce: IF (Stack[-1] == 0) GOTO 0xcfb; Pop(1)

0xccf: PushEmpty(string, int, int, int)
0xcd0: Stack[-4] = "alpha_pills"
0xcd1: Stack[-3] = (int) 1
0xcd2: Stack[-2] = (int) 2
0xcd3: Stack[-1] = (int) 4
0xcd4: Call2 0xb75

0xcd5: Pop(4)
0xcd6: PushEmpty(string, int, int, int)
0xcd7: Stack[-4] = "meradorm"
0xcd8: Stack[-3] = (int) 2
0xcd9: Stack[-2] = (int) 3
0xcda: Stack[-1] = (int) 3
0xcdb: Call2 0xb75

0xcdc: Pop(4)
0xcdd: Push((int) 3)
0xcde: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xcdf: IF (Stack[-1] == 0) GOTO 0xce6; Pop(1)

0xce0: PushEmpty(string, int, int)
0xce1: Stack[-3] = "beta_pills"
0xce2: Stack[-2] = (int) 1
0xce3: Stack[-1] = (int) 4
0xce4: Call2 0xb6a

0xce5: Pop(3)
0xce6: Push((int) 8)
0xce7: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xce8: IF (Stack[-1] == 0) GOTO 0xcf1; Pop(1)

0xce9: PushEmpty(string, int, int, int)
0xcea: Stack[-4] = "monomicin"
0xceb: Stack[-3] = (int) 1
0xcec: Stack[-2] = (int) 2
0xced: Stack[-1] = (int) 2
0xcee: Call2 0xb75

0xcef: Pop(4)
0xcf0: GOTO 0xcfa

0xcf1: Push((int) 4)
0xcf2: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xcf3: IF (Stack[-1] == 0) GOTO 0xcfa; Pop(1)

0xcf4: PushEmpty(string, int, int)
0xcf5: Stack[-3] = "monomicin"
0xcf6: Stack[-2] = (int) 1
0xcf7: Stack[-1] = (int) 2
0xcf8: Call2 0xb6a

0xcf9: Pop(3)
0xcfa: GOTO 0xd28

0xcfb: PushEmpty(string, int, int)
0xcfc: Stack[-3] = "lockpick"
0xcfd: Stack[-2] = (int) 1
0xcfe: Stack[-1] = (int) 4
0xcff: Call2 0xb6a

0xd00: Pop(3)
0xd01: PushEmpty(string, int, int)
0xd02: Stack[-3] = "rifle_ammo"
0xd03: Stack[-2] = (int) 1
0xd04: Stack[-1] = (int) 2
0xd05: Call2 0xb6a

0xd06: Pop(3)
0xd07: PushEmpty(string, int, int)
0xd08: Stack[-3] = "revolver_ammo"
0xd09: Stack[-2] = (int) 1
0xd0a: Stack[-1] = (int) 2
0xd0b: Call2 0xb6a

0xd0c: Pop(3)
0xd0d: PushEmpty(string, int, int, int)
0xd0e: Stack[-4] = "samopal_ammo"
0xd0f: Stack[-3] = (int) 1
0xd10: Stack[-2] = (int) 2
0xd11: Stack[-1] = (int) 2
0xd12: Call2 0xb75

0xd13: Pop(4)
0xd14: Push((int) 8)
0xd15: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd16: IF (Stack[-1] == 0) GOTO 0xd1f; Pop(1)

0xd17: PushEmpty(string, int, int, int)
0xd18: Stack[-4] = "monomicin"
0xd19: Stack[-3] = (int) 1
0xd1a: Stack[-2] = (int) 2
0xd1b: Stack[-1] = (int) 2
0xd1c: Call2 0xb75

0xd1d: Pop(4)
0xd1e: GOTO 0xd28

0xd1f: Push((int) 4)
0xd20: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd21: IF (Stack[-1] == 0) GOTO 0xd28; Pop(1)

0xd22: PushEmpty(string, int, int)
0xd23: Stack[-3] = "monomicin"
0xd24: Stack[-2] = (int) 1
0xd25: Stack[-1] = (int) 2
0xd26: Call2 0xb6a

0xd27: Pop(3)
0xd28: Return(); Pop(6)

0xd29: PushEmpty(int, int)
0xd2a: @ GetInvItemByName(Stack[-1], Stack[-3])
0xd2b: Pop(0)
0xd2c: Stack[-4] = Stack[-1]
0xd2d: Return(); Pop(2)

0xd2e: PushEmpty()
0xd2f: PushEmpty(object)
0xd30: Stack[-1] = Stack[-2]
0xd31: Push(-1, 0); TaskCall(2)
0xd32: Call2 0x1d7

0xd33: Pop(-1, 0); TaskReturn
0xd34: Pop(1)
0xd35: Return(); Pop(0)

0xd36: PushEmpty(float, float)
0xd37: Push("health")
0xd38: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd39: IF (Stack[-1] == 0) GOTO 0xd42; Pop(1)

0xd3a: Push("health")
0xd3b: @ GetProperty(Stack[-1], Stack[-2])
0xd3c: Pop(1)
0xd3d: Push((int) 0)
0xd3e: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xd3f: IF (Stack[-1] == 0) GOTO 0xd42; Pop(1)

0xd40: @ SignalDeath(Stack[-4])
0xd41: Pop(0)
0xd42: Return(); Pop(2)

0xd43: PushEmpty()
0xd44: PushEmpty(object)
0xd45: Stack[-1] = Stack[-2]
0xd46: Call2 0xd2e

0xd47: Pop(1)
0xd48: Return(); Pop(0)

0xd49: PushEmpty()
0xd4a: PushEmpty(object, int, float)
0xd4b: Stack[-3] = Stack[-7]
0xd4c: Stack[-2] = Stack[-6]
0xd4d: Stack[-1] = Stack[-5]
0xd4e: Call2 0xa80

0xd4f: Pop(3)
0xd50: Return(); Pop(0)

0xd51: PushEmpty()
0xd52: PushEmpty(object, int, float, cvector, cvector)
0xd53: Stack[-5] = Stack[-11]
0xd54: Stack[-4] = Stack[-10]
0xd55: Stack[-3] = Stack[-9]
0xd56: Stack[-2] = Stack[-7]
0xd57: Stack[-1] = Stack[-6]
0xd58: Call2 0xac4

0xd59: Pop(5)
0xd5a: Return(); Pop(0)

0xd5b: PushEmpty()
0xd5c: Push("unholster")
0xd5d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5e: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd5f: PushEmpty(bool, object)
0xd60: Stack[-1] = Stack[-4]
0xd61: Call2 0xe32

0xd62: Stack[-5] = Stack[-2]
0xd63: Pop(2)
0xd64: Return(); Pop(0)

0xd65: GOTO 0xd79

0xd66: Push("player_shot")
0xd67: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd68: IF (Stack[-1] == 0) GOTO 0xd70; Pop(1)

0xd69: PushEmpty(bool, object)
0xd6a: Stack[-1] = Stack[-4]
0xd6b: Call2 0xe37

0xd6c: Stack[-5] = Stack[-2]
0xd6d: Pop(2)
0xd6e: Return(); Pop(0)

0xd6f: GOTO 0xd79

0xd70: Push("battle")
0xd71: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd72: IF (Stack[-1] == 0) GOTO 0xd79; Pop(1)

0xd73: PushEmpty(bool, object)
0xd74: Stack[-1] = Stack[-4]
0xd75: Call2 0xe4c

0xd76: Stack[-5] = Stack[-2]
0xd77: Pop(2)
0xd78: Return(); Pop(0)

0xd79: Stack[-3] = (bool) 0
0xd7a: Return(); Pop(0)

0xd7b: PushEmpty()
0xd7c: Push("unholster")
0xd7d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7e: IF (Stack[-1] == 0) GOTO 0xd84; Pop(1)

0xd7f: PushEmpty(object)
0xd80: Stack[-1] = Stack[-3]
0xd81: Call2 0xe35

0xd82: Pop(1)
0xd83: GOTO 0xd93

0xd84: Push("player_shot")
0xd85: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd86: IF (Stack[-1] == 0) GOTO 0xd8c; Pop(1)

0xd87: PushEmpty(object)
0xd88: Stack[-1] = Stack[-3]
0xd89: Call2 0xe46

0xd8a: Pop(1)
0xd8b: GOTO 0xd93

0xd8c: Push("battle")
0xd8d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8e: IF (Stack[-1] == 0) GOTO 0xd93; Pop(1)

0xd8f: PushEmpty(object)
0xd90: Stack[-1] = Stack[-3]
0xd91: Call2 0xe4f

0xd92: Pop(1)
0xd93: Return(); Pop(0)

0xd94: PushEmpty(bool, bool)
0xd95: PushEmpty(bool)
0xd96: Stack[-1] = (bool) 0
0xd97: PushEmpty(bool, object)
0xd98: Stack[-1] = Stack[-6]
0xd99: Call2 0xe32

0xd9a: Pop(1)
0xd9b: IF (Stack[-1] == 0) GOTO 0xda2; Pop(1)

0xd9c: PushEmpty(bool, object)
0xd9d: Stack[-1] = Stack[-6]
0xd9e: Call2 0x9b9

0xd9f: Pop(1)
0xda0: IF (Stack[-1] == 0) GOTO 0xda2; Pop(1)

0xda1: Stack[-1] = (bool) 1
0xda2: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xda3: @@ IsWeaponHolstered(Stack[-1])
0xda4: Pop(0)
0xda5: Pop(0); Push((bool) Stack[-1] == 0)
0xda6: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xda7: Stack[-4] = (bool) 1
0xda8: Return(); Pop(2)

0xda9: Stack[-4] = (bool) 0
0xdaa: Return(); Pop(2)

0xdab: PushEmpty()
0xdac: PushEmpty(object)
0xdad: Stack[-1] = Stack[-2]
0xdae: Call2 0xe35

0xdaf: Pop(1)
0xdb0: Return(); Pop(0)

0xdb1: PushEmpty()
0xdb2: PushEmpty(bool, object)
0xdb3: Stack[-1] = Stack[-3]
0xdb4: Call2 0x9b9

0xdb5: Pop(1)
0xdb6: IF (Stack[-1] == 0) GOTO 0xdbd; Pop(1)

0xdb7: PushEmpty(object)
0xdb8: Call2 0xbad

0xdb9: Pop(0)
0xdba: Push((float)-0.05)
0xdbb: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xdbc: Pop(2)
0xdbd: Return(); Pop(0)

0xdbe: PushEmpty(object, object)
0xdbf: Push("heal")
0xdc0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdc1: IF (Stack[-1] == 0) GOTO 0xdcc; Pop(1)

0xdc2: Push("player")
0xdc3: @ FindActor(Stack[-2], Stack[-1])
0xdc4: Pop(1)
0xdc5: PushEmpty(bool, object)
0xdc6: Stack[-1] = Stack[-3]
0xdc7: Call2 0xe56

0xdc8: Stack[-6] = Stack[-2]
0xdc9: Pop(2)
0xdca: Return(); Pop(2)

0xdcb: Stack[-1] = 0
0xdcc: Stack[-4] = (bool) 0
0xdcd: Return(); Pop(2)

0xdce: PushEmpty(object, object)
0xdcf: Push("heal")
0xdd0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdd1: IF (Stack[-1] == 0) GOTO 0xdda; Pop(1)

0xdd2: Push("player")
0xdd3: @ FindActor(Stack[-2], Stack[-1])
0xdd4: Pop(1)
0xdd5: PushEmpty(object)
0xdd6: Stack[-1] = Stack[-2]
0xdd7: Call2 0xe59

0xdd8: Pop(1)
0xdd9: Stack[-1] = 0
0xdda: Return(); Pop(2)

0xddb: PushEmpty(string, string)
0xddc: Stack[-1] = "idle"
0xddd: Push(Stack[-3])
0xdde: IF (Stack[-1] == 0) GOTO 0xde0; Pop(1)

0xddf: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xde0: Stack[-4] = Stack[-1]
0xde1: Return(); Pop(2)

0xde2: PushEmpty(int, bool, int, bool)
0xde3: Stack[-2] = (int) 0
0xde4: Push("all")
0xde5: PushEmpty(string, int)
0xde6: Stack[-1] = Stack[-5]
0xde7: Call2 0xddb

0xde8: Pop(1)
0xde9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xdea: Pop(2)
0xdeb: Pop(0); Push((bool) Stack[-1] == 0)
0xdec: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xded: GOTO 0xdf1

0xdee: Push((int) 1)
0xdef: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xdf0: GOTO 0xde4

0xdf1: Stack[-5] = Stack[-2]
0xdf2: Return(); Pop(4)

0xdf3: PushEmpty()
0xdf4: PushEmpty(bool)
0xdf5: Call2 0xe7f

0xdf6: Pop(0)
0xdf7: IF (Stack[-1] == 0) GOTO 0xdfa; Pop(1)

0xdf8: Stack[-2] = (int) 2
0xdf9: GOTO 0xdfb

0xdfa: Stack[-2] = (int) 0
0xdfb: Return(); Pop(0)

0xdfc: PushEmpty()
0xdfd: PushEmpty(object)
0xdfe: Stack[-1] = Stack[-2]
0xdff: Push(-1, 1); TaskCall(5)
0xe00: Call2 0x4de

0xe01: Pop(-1, 1); TaskReturn
0xe02: Pop(1)
0xe03: Return(); Pop(0)

0xe04: PushEmpty()
0xe05: PushEmpty(bool, object)
0xe06: Stack[-1] = Stack[-3]
0xe07: Call2 0xa3c

0xe08: Pop(1)
0xe09: IF (Stack[-1] == 0) GOTO 0xe0c; Pop(1)

0xe0a: Stack[-2] = (int) 2
0xe0b: GOTO 0xe0d

0xe0c: Stack[-2] = (int) 0
0xe0d: Return(); Pop(0)

0xe0e: PushEmpty()
0xe0f: PushEmpty(object)
0xe10: Stack[-1] = Stack[-2]
0xe11: Push(-1, 6); TaskCall(6)
0xe12: Call2 0x5f1

0xe13: Pop(-1, 6); TaskReturn
0xe14: Pop(1)
0xe15: Return(); Pop(0)

0xe16: PushEmpty()
0xe17: PushEmpty(int, object)
0xe18: Stack[-1] = Stack[-4]
0xe19: Call2 0xe04

0xe1a: Stack[-5] = Stack[-2]
0xe1b: Pop(2)
0xe1c: Return(); Pop(0)

0xe1d: PushEmpty()
0xe1e: PushEmpty(object)
0xe1f: Stack[-1] = Stack[-2]
0xe20: Call2 0xe0e

0xe21: Pop(1)
0xe22: Return(); Pop(0)

0xe23: PushEmpty()
0xe24: Stack[-2] = (int) 2
0xe25: Return(); Pop(0)

0xe26: PushEmpty()
0xe27: PushEmpty(object)
0xe28: Stack[-1] = Stack[-2]
0xe29: Call2 0xe6d

0xe2a: Pop(1)
0xe2b: Return(); Pop(0)

0xe2c: Return(); Pop(0)

0xe2d: PushEmpty()
0xe2e: Stack[-3] = (int) 0
0xe2f: Return(); Pop(0)

0xe30: PushEmpty()
0xe31: Return(); Pop(0)

0xe32: PushEmpty()
0xe33: Stack[-2] = (bool) 0
0xe34: Return(); Pop(0)

0xe35: PushEmpty()
0xe36: Return(); Pop(0)

0xe37: PushEmpty(bool, bool)
0xe38: @ CanSee(Stack[-1], Stack[-3])
0xe39: Pop(0)
0xe3a: Stack[-4] = (bool) 1
0xe3b: Push(Stack[-1])
0xe3c: IF (Stack[-1] == 0) GOTO 0xe45; Pop(1)

0xe3d: PushEmpty(float, object)
0xe3e: Stack[-1] = Stack[-5]
0xe3f: Call2 0x9b1

0xe40: Pop(1)
0xe41: Push((int) 2250000)
0xe42: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xe43: IF (Stack[-1] == 0) GOTO 0xe45; Pop(1)

0xe44: Stack[-4] = (bool) 0
0xe45: Return(); Pop(2)

0xe46: PushEmpty()
0xe47: PushEmpty(object)
0xe48: Stack[-1] = Stack[-2]
0xe49: Call2 0xdfc

0xe4a: Pop(1)
0xe4b: Return(); Pop(0)

0xe4c: PushEmpty()
0xe4d: Stack[-2] = (bool) 0
0xe4e: Return(); Pop(0)

0xe4f: PushEmpty()
0xe50: Return(); Pop(0)

0xe51: PushEmpty()
0xe52: Stack[-2] = (int) 0
0xe53: Return(); Pop(0)

0xe54: PushEmpty()
0xe55: Return(); Pop(0)

0xe56: PushEmpty()
0xe57: Stack[-2] = (bool) 0
0xe58: Return(); Pop(0)

0xe59: PushEmpty()
0xe5a: Return(); Pop(0)

0xe5b: Stack[-1] = (int) 518097
0xe5c: Return(); Pop(0)

0xe5d: Stack[-1] = (int) 518096
0xe5e: Return(); Pop(0)

0xe5f: Stack[-1] = "ui/NPC_Citizen2.png"
0xe60: Return(); Pop(0)

0xe61: Stack[-1] = "ui/NPC_Citizen2_b.png"
0xe62: Return(); Pop(0)

0xe63: Stack[-1] = (bool) 0
0xe64: Return(); Pop(0)

0xe65: Push(GlobalVars[0])
0xe66: Stack[-1] = (bool) 0
0xe67: GlobalVars[0] = Stack[-1]; Pop(1)
0xe68: PushEmpty(bool)
0xe69: Stack[-1] = (bool) 1
0xe6a: Call2 0xcc5

0xe6b: Pop(1)
0xe6c: Return(); Pop(0)

0xe6d: PushEmpty(bool, bool)
0xe6e: Push(GlobalVars[0])
0xe6f: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe70: @ IsOverrideActive(Stack[-1])
0xe71: Pop(0)
0xe72: Pop(0); Push((bool) Stack[-1] == 0)
0xe73: IF (Stack[-1] == 0) GOTO 0xe78; Pop(1)

0xe74: PushEmpty(object)
0xe75: Stack[-1] = Stack[-4]
0xe76: Call2 0xc54

0xe77: Pop(1)
0xe78: Return(); Pop(2)

0xe79: GOTO 0xe7e

0xe7a: PushEmpty(object)
0xe7b: Stack[-1] = Stack[-4]
0xe7c: Call2 0xea0

0xe7d: Pop(1)
0xe7e: Return(); Pop(2)

0xe7f: Stack[-1] = (bool) 0
0xe80: Return(); Pop(0)

0xe81: PushEmpty()
0xe82: Stack[-4] = (bool) 1
0xe83: Return(); Pop(0)

0xe84: PushEmpty()
0xe85: PushEmpty(bool, object)
0xe86: Stack[-1] = Stack[-3]
0xe87: Call2 0x9b9

0xe88: Pop(1)
0xe89: IF (Stack[-1] == 0) GOTO 0xe95; Pop(1)

0xe8a: PushEmpty(object)
0xe8b: Call2 0xbad

0xe8c: Pop(0)
0xe8d: Push((float)-0.1)
0xe8e: Push((bool) 1)
0xe8f: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe90: Pop(3)
0xe91: PushEmpty(bool)
0xe92: Stack[-1] = (bool) 1
0xe93: Call2 0xca9

0xe94: Pop(1)
0xe95: PushEmpty()
0xe96: Call2 0xc91

0xe97: Pop(0)
0xe98: Push(GlobalVars[0])
0xe99: Stack[-1] = (bool) 1
0xe9a: GlobalVars[0] = Stack[-1]; Pop(1)
0xe9b: Push((int) 50)
0xe9c: Push((int) 40)
0xe9d: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xe9e: Pop(2)
0xe9f: Return(); Pop(0)

0xea0: PushEmpty()
0xea1: PushEmpty(int, object)
0xea2: Stack[-1] = Stack[-3]
0xea3: Push(-2, 1); TaskCall(0)
0xea4: Call2 0x0

0xea5: Pop(-2, 1); TaskReturn
0xea6: Pop(2)
0xea7: Return(); Pop(0)

