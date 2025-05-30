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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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

RunOp = 0x241
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x1b4 Vars = (object)
		EVENT_6 Op = 0x1c2 Vars = ()
		EVENT_22 Op = 0x23b Vars = (object, int, float, float)
		EVENT_16 Op = 0x23d Vars = (object, string)
		EVENT_41 Op = 0x23f Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x259 Vars = (object)
		EVENT_17 Op = 0x26d Vars = (object)
		EVENT_30 Op = 0x285 Vars = (object, object, bool)
		EVENT_40 Op = 0x2a1 Vars = (object)
		EVENT_42 Op = 0x2b5 Vars = (object, string)
		EVENT_26 Op = 0x2da Vars = (string)
		EVENT_1 Op = 0x2e8 Vars = (object)
		EVENT_3 Op = 0x2fb Vars = (object)
		EVENT_7 Op = 0x301 Vars = (int)
		EVENT_6 Op = 0x30d Vars = ()
		EVENT_41 Op = 0x324 Vars = (object)
		EVENT_10 Op = 0x395 Vars = (object)
		EVENT_28 Op = 0x399 Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0x3b2 Vars = (object)
		EVENT_17 Op = 0x3c6 Vars = (object)
		EVENT_30 Op = 0x3de Vars = (object, object, bool)
		EVENT_40 Op = 0x3fa Vars = (object)
		EVENT_42 Op = 0x40e Vars = (object, string)
		EVENT_26 Op = 0x433 Vars = (string)
		EVENT_6 Op = 0x441 Vars = ()
		EVENT_1 Op = 0x448 Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0x4e4 Vars = (object)
		EVENT_17 Op = 0x4f8 Vars = (object)
		EVENT_30 Op = 0x510 Vars = (object, object, bool)
		EVENT_40 Op = 0x52c Vars = (object)
		EVENT_42 Op = 0x540 Vars = (object, string)
		EVENT_26 Op = 0x565 Vars = (string)
		EVENT_41 Op = 0x57e Vars = (object)
		EVENT_7 Op = 0x587 Vars = (int)
		EVENT_6 Op = 0x5aa Vars = ()
		EVENT_1 Op = 0x5b1 Vars = (object)
	GTASK_6 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_7 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x863 Vars = ()
		EVENT_7 Op = 0x89b Vars = (int)
		EVENT_1 Op = 0x8b6 Vars = (object)
		EVENT_2 Op = 0x8c5 Vars = (object)
		EVENT_10 Op = 0x94b Vars = (object)
		EVENT_41 Op = 0x956 Vars = (object)

Events:
EVENT_16 Op = 0xcfb Vars = (object, string)
EVENT_41 Op = 0xd08 Vars = (object)
EVENT_22 Op = 0xd0e Vars = (object, int, float, float)
EVENT_43 Op = 0xd16 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xab0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xe22

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xe20

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xe24

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xe26

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xc02

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
0x41: Call2 0xaf4

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0xbf6

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0xbf0

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0x9d

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
0x68: GOTO 0x7f

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0x9d

0x6c: Pop(1)
0x6d: Push((int) 532753)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 532754)
0x73: Push((int) -1)
0x74: Push((int) 34228)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 532977)
0x78: Push((int) -1)
0x79: Push((int) 34475)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0xe28

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0xb05

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all")
0x8f: Push("idle")
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0xe28

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = Stack[-3]
0xa9: Push("")
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0xb15

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0xb2f

0xb8: Pop(0)
0xb9: Push((int) 34223)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xbc: PushEmpty(bool, object)
0xbd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Call2 0xbf6

0xbf: Pop(1)
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0xbf0

0xc5: Pop(2)
0xc6: PushEmpty(string)
0xc7: Stack[-1] = "Neutral"
0xc8: Call2 0x9d

0xc9: Pop(1)
0xca: Push((int) 532749)
0xcb: @@ SetMessage(Stack[-1])
0xcc: Pop(1)
0xcd: @@ ClearReplies()
0xce: Pop(0)
0xcf: Push((int) 533297)
0xd0: Push((int) 34809)
0xd1: Push((int) 34808)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: PushEmpty(string)
0xd6: Stack[-1] = "Neutral"
0xd7: Call2 0x9d

0xd8: Pop(1)
0xd9: Push((int) 532753)
0xda: @@ SetMessage(Stack[-1])
0xdb: Pop(1)
0xdc: @@ ClearReplies()
0xdd: Pop(0)
0xde: Push((int) 532754)
0xdf: Push((int) -1)
0xe0: Push((int) 34228)
0xe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(3)
0xe3: Push((int) 532977)
0xe4: Push((int) -1)
0xe5: Push((int) 34475)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: Push((int) 34811)
0xea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xec: Push((int) 34809)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral"
0xf1: Call2 0x9d

0xf2: Pop(1)
0xf3: Push((int) 533298)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: Push((int) 532975)
0xf9: Push((int) 34474)
0xfa: Push((int) 34473)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Push((int) 532978)
0xfe: Push((int) 34477)
0xff: Push((int) 34476)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 34477)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0x9d

0x109: Pop(1)
0x10a: Push((int) 532979)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 532980)
0x110: Push((int) 34480)
0x111: Push((int) 34478)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Push((int) 532981)
0x115: Push((int) -1)
0x116: Push((int) 34479)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 34480)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral"
0x11f: Call2 0x9d

0x120: Pop(1)
0x121: Push((int) 532982)
0x122: @@ SetMessage(Stack[-1])
0x123: Pop(1)
0x124: @@ ClearReplies()
0x125: Pop(0)
0x126: Push((int) 532983)
0x127: Push((int) -1)
0x128: Push((int) 34481)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Push((int) 532984)
0x12c: Push((int) -1)
0x12d: Push((int) 34482)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Push((int) 34474)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Neutral"
0x136: Call2 0x9d

0x137: Pop(1)
0x138: Push((int) 532976)
0x139: @@ SetMessage(Stack[-1])
0x13a: Pop(1)
0x13b: @@ ClearReplies()
0x13c: Pop(0)
0x13d: Push((int) 532750)
0x13e: Push((int) 34225)
0x13f: Push((int) 34224)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: Push((int) 34484)
0x144: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x146: Push((int) 34225)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral"
0x14b: Call2 0x9d

0x14c: Pop(1)
0x14d: Push((int) 532751)
0x14e: @@ SetMessage(Stack[-1])
0x14f: Pop(1)
0x150: @@ ClearReplies()
0x151: Pop(0)
0x152: Push((int) 532752)
0x153: Push((int) 34471)
0x154: Push((int) 34226)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 34471)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Neutral"
0x15d: Call2 0x9d

0x15e: Pop(1)
0x15f: Push((int) 532973)
0x160: @@ SetMessage(Stack[-1])
0x161: Pop(1)
0x162: @@ ClearReplies()
0x163: Pop(0)
0x164: Push((int) 532974)
0x165: Push((int) 34488)
0x166: Push((int) 34472)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 532991)
0x16a: Push((int) 34491)
0x16b: Push((int) 34490)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Push((int) 34491)
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Neutral"
0x174: Call2 0x9d

0x175: Pop(1)
0x176: Push((int) 532992)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 532993)
0x17c: Push((int) 34488)
0x17d: Push((int) 34492)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Push((int) 34488)
0x182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x184: PushEmpty(string)
0x185: Stack[-1] = "Neutral"
0x186: Call2 0x9d

0x187: Pop(1)
0x188: Push((int) 532989)
0x189: @@ SetMessage(Stack[-1])
0x18a: Pop(1)
0x18b: @@ ClearReplies()
0x18c: Pop(0)
0x18d: Push((int) 532990)
0x18e: Push((int) -1)
0x18f: Push((int) 34489)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Push((int) 532994)
0x193: Push((int) -1)
0x194: Push((int) 34494)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x199: PushEmpty(bool)
0x19a: Call2 0xe28

0x19b: Pop(0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19d: @ lshStopAnimation()
0x19e: Pop(0)
0x19f: GOTO 0x1a2

0x1a0: @ StopAnimation()
0x1a1: Pop(0)
0x1a2: Return(); Pop(0)

0x1a3: GOTO 0xb4

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty()
0x1a6: EventDisable(0)
0x1a7: PushEmpty(object)
0x1a8: Stack[-1] = Stack[-2]
0x1a9: Call2 0x1c6

0x1aa: Pop(1)
0x1ab: PushEmpty(object)
0x1ac: Stack[-1] = Stack[-2]
0x1ad: Call2 0xe49

0x1ae: Pop(1)
0x1af: EventEnable(0)
0x1b0: @ Hold()
0x1b1: Pop(0)
0x1b2: GOTO 0x1b0

0x1b3: Return(); Pop(0)

0x1b4: PushEmpty(int, int)
0x1b5: PushEmpty(int, object)
0x1b6: Stack[-1] = Stack[-5]
0x1b7: Call2 0xde8

0x1b8: Stack[-3] = Stack[-2]
0x1b9: Pop(2)
0x1ba: Push((int) 0)
0x1bb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bd: PushEmpty(object)
0x1be: Stack[-1] = Stack[-4]
0x1bf: Call2 0xdeb

0x1c0: Pop(1)
0x1c1: Return(); Pop(2)

0x1c2: PushEmpty()
0x1c3: Call2 0xdf1

0x1c4: Pop(0)
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x1c7: Pop(0); Push((bool) Stack[-21] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: PushEmpty(string)
0x1ca: Stack[-1] = "fdie"
0x1cb: Call2 0x221

0x1cc: Pop(1)
0x1cd: GOTO 0x220

0x1ce: @@ GetPosition(Stack[-10])
0x1cf: Pop(0)
0x1d0: @ GetPosition(Stack[-9])
0x1d1: Pop(0)
0x1d2: @ GetDirection(Stack[-8])
0x1d3: Pop(0)
0x1d4: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x1d5: Push(CvectorIndex(Stack[-7], 0))
0x1d6: Push(CvectorIndex(Stack[-9], 0))
0x1d7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1d8: Push(CvectorIndex(Stack[-8], 2))
0x1d9: Push(CvectorIndex(Stack[-10], 2))
0x1da: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1db: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1dc: Push((int) 0)
0x1dd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1df: Stack[-6] = "fdie"
0x1e0: GOTO 0x1e2

0x1e1: Stack[-6] = "bdie"
0x1e2: @ RemoveRTEnvelope()
0x1e3: Pop(0)
0x1e4: @ SetDeathState()
0x1e5: Pop(0)
0x1e6: @ Stop()
0x1e7: Pop(0)
0x1e8: @ StopAsync()
0x1e9: Pop(0)
0x1ea: Stack[-5] = Stack[-21]
0x1eb: Push("GetScriptProperty")
0x1ec: Push((int) 2)
0x1ed: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x1ee: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1ef: Push("Owner")
0x1f0: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x1f1: Pop(1)
0x1f2: Push(Stack[-4])
0x1f3: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f4: Push("Owner")
0x1f5: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x1f6: Pop(1)
0x1f7: Pop(0); Push((bool) Stack[-5] == 0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: Stack[-5] = Stack[-21]
0x1fa: Push("@GetEyesHeight")
0x1fb: Push((int) 1)
0x1fc: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x1fd: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1fe: @@ GetEyesHeight(Stack[-2])
0x1ff: Pop(0)
0x200: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x201: Push(CvectorIndex(Stack[-1], 1))
0x202: Stack[-1] = Stack[-3]
0x203: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x204: Push("head")
0x205: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x206: Pop(1)
0x207: Stack[-3] = (bool) 1
0x208: GOTO 0x20a

0x209: Stack[-3] = (bool) 0
0x20a: PushEmpty(string)
0x20b: Stack[-1] = Stack[-7]
0x20c: Call2 0xb50

0x20d: Pop(1)
0x20e: Push("all")
0x20f: @ PlayAnimation(Stack[-1], Stack[-7])
0x210: Pop(1)
0x211: @ WaitForAnimEnd()
0x212: Pop(0)
0x213: Push(Stack[-3])
0x214: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x215: @ StopAsync()
0x216: Pop(0)
0x217: Push("head")
0x218: @ UnlookAsync(Stack[-1])
0x219: Pop(1)
0x21a: Push("all")
0x21b: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x21c: Pop(1)
0x21d: @ RemoveEnvelope()
0x21e: Pop(0)
0x21f: Stack[-5] = 0
0x220: Return(); Pop(20)

0x221: PushEmpty()
0x222: @ RemoveRTEnvelope()
0x223: Pop(0)
0x224: @ SetDeathState()
0x225: Pop(0)
0x226: @ Stop()
0x227: Pop(0)
0x228: @ StopAsync()
0x229: Pop(0)
0x22a: @ StopSecondaryAnimation()
0x22b: Pop(0)
0x22c: PushEmpty(string)
0x22d: Stack[-1] = Stack[-2]
0x22e: Call2 0xb50

0x22f: Pop(1)
0x230: Push("all")
0x231: @ PlayAnimation(Stack[-1], Stack[-2])
0x232: Pop(1)
0x233: @ WaitForAnimEnd()
0x234: Pop(0)
0x235: Push("all")
0x236: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x237: Pop(1)
0x238: @ RemoveEnvelope()
0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: PushEmpty()
0x23c: Return(); Pop(0)

0x23d: PushEmpty()
0x23e: Return(); Pop(0)

0x23f: PushEmpty()
0x240: Return(); Pop(0)

0x241: Push((bool) 1)
0x242: @ SensePlayerOnly(Stack[-1])
0x243: Pop(1)
0x244: PushEmpty()
0x245: Call2 0xe2a

0x246: Pop(0)
0x247: PushEmpty()
0x248: Call2 0x250

0x249: Pop(0)
0x24a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x24b: PushEmpty()
0x24c: Call2 0x355

0x24d: Pop(0)
0x24e: GOTO 0x24a

0x24f: Return(); Pop(0)

0x250: PushEmpty(bool)
0x251: Call2 0xaab

0x252: Pop(0)
0x253: Pop(1); Push((bool) Stack[-1] == 0)
0x254: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x255: PushEmpty()
0x256: Call2 0xdf1

0x257: Pop(0)
0x258: Return(); Pop(0)

0x259: PushEmpty(int, int)
0x25a: PushEmpty(int, object)
0x25b: Stack[-1] = Stack[-5]
0x25c: Call2 0xde8

0x25d: Stack[-3] = Stack[-2]
0x25e: Pop(2)
0x25f: Push((int) 0)
0x260: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x262: Push((int) 1)
0x263: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x265: PushEmpty()
0x266: Call2 0x314

0x267: Pop(0)
0x268: PushEmpty(object)
0x269: Stack[-1] = Stack[-4]
0x26a: Call2 0xdeb

0x26b: Pop(1)
0x26c: Return(); Pop(2)

0x26d: PushEmpty(int, int)
0x26e: PushEmpty(object)
0x26f: Stack[-1] = Stack[-4]
0x270: Call2 0xd76

0x271: Pop(1)
0x272: PushEmpty(int, object)
0x273: Stack[-1] = Stack[-5]
0x274: Call2 0xdc9

0x275: Stack[-3] = Stack[-2]
0x276: Pop(2)
0x277: Push((int) 0)
0x278: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27a: Push((int) 1)
0x27b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27d: PushEmpty()
0x27e: Call2 0x314

0x27f: Pop(0)
0x280: PushEmpty(object)
0x281: Stack[-1] = Stack[-4]
0x282: Call2 0xdd3

0x283: Pop(1)
0x284: Return(); Pop(2)

0x285: PushEmpty(int, int)
0x286: PushEmpty(bool, object, object, bool)
0x287: Stack[-3] = Stack[-9]
0x288: Stack[-2] = Stack[-8]
0x289: Stack[-1] = Stack[-7]
0x28a: Call2 0xe46

0x28b: Pop(3)
0x28c: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x28d: PushEmpty(int, object, bool)
0x28e: Stack[-2] = Stack[-8]
0x28f: Stack[-1] = Stack[-6]
0x290: Call2 0xddb

0x291: Stack[-4] = Stack[-3]
0x292: Pop(3)
0x293: Push((int) 0)
0x294: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x296: Push((int) 1)
0x297: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x299: PushEmpty()
0x29a: Call2 0x314

0x29b: Pop(0)
0x29c: PushEmpty(object)
0x29d: Stack[-1] = Stack[-6]
0x29e: Call2 0xde2

0x29f: Pop(1)
0x2a0: Return(); Pop(2)

0x2a1: PushEmpty(int, int)
0x2a2: PushEmpty(int, object)
0x2a3: Stack[-1] = Stack[-5]
0x2a4: Call2 0xe16

0x2a5: Stack[-3] = Stack[-2]
0x2a6: Pop(2)
0x2a7: Push((int) 0)
0x2a8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2aa: Push((int) 1)
0x2ab: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ad: PushEmpty()
0x2ae: Call2 0x314

0x2af: Pop(0)
0x2b0: PushEmpty(object)
0x2b1: Stack[-1] = Stack[-4]
0x2b2: Call2 0xe19

0x2b3: Pop(1)
0x2b4: Return(); Pop(2)

0x2b5: PushEmpty(int, int)
0x2b6: PushEmpty(bool, object, string)
0x2b7: Stack[-2] = Stack[-7]
0x2b8: Stack[-1] = Stack[-6]
0x2b9: Call2 0xd20

0x2ba: Pop(2)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2bc: PushEmpty()
0x2bd: Call2 0x314

0x2be: Pop(0)
0x2bf: PushEmpty(object, string)
0x2c0: Stack[-2] = Stack[-6]
0x2c1: Stack[-1] = Stack[-5]
0x2c2: Call2 0xd40

0x2c3: Pop(2)
0x2c4: GOTO 0x2d9

0x2c5: PushEmpty(int, string, object)
0x2c6: Stack[-2] = Stack[-6]
0x2c7: Stack[-1] = Stack[-7]
0x2c8: Call2 0xdf2

0x2c9: Stack[-4] = Stack[-3]
0x2ca: Pop(3)
0x2cb: Push((int) 0)
0x2cc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2ce: Push((int) 1)
0x2cf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d1: PushEmpty()
0x2d2: Call2 0x314

0x2d3: Pop(0)
0x2d4: PushEmpty(string, object)
0x2d5: Stack[-2] = Stack[-5]
0x2d6: Stack[-1] = Stack[-6]
0x2d7: Call2 0xdf5

0x2d8: Pop(2)
0x2d9: Return(); Pop(2)

0x2da: PushEmpty()
0x2db: PushEmpty(bool, string)
0x2dc: Stack[-1] = Stack[-3]
0x2dd: Call2 0xd83

0x2de: Pop(1)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e0: PushEmpty()
0x2e1: Call2 0x314

0x2e2: Pop(0)
0x2e3: PushEmpty(string)
0x2e4: Stack[-1] = Stack[-2]
0x2e5: Call2 0xd93

0x2e6: Pop(1)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty()
0x2e9: PushEmpty(bool, object)
0x2ea: Stack[-1] = Stack[-3]
0x2eb: Call2 0xd59

0x2ec: Pop(1)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2ee: PushEmpty()
0x2ef: Call2 0x314

0x2f0: Pop(0)
0x2f1: PushEmpty(object)
0x2f2: Stack[-1] = Stack[-2]
0x2f3: Call2 0xd70

0x2f4: Pop(1)
0x2f5: GOTO 0x2fa

0x2f6: PushEmpty(object)
0x2f7: Stack[-1] = Stack[-2]
0x2f8: Call2 0x32d

0x2f9: Pop(1)
0x2fa: Return(); Pop(0)

0x2fb: PushEmpty()
0x2fc: PushEmpty(object)
0x2fd: Stack[-1] = Stack[-2]
0x2fe: Call2 0x32d

0x2ff: Pop(1)
0x300: Return(); Pop(0)

0x301: PushEmpty()
0x302: Push((int) 110)
0x303: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x305: Return(); Pop(0)

0x306: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x307: Push((int) 110)
0x308: @ KillTimer(Stack[-1])
0x309: Pop(1)
0x30a: @ ResetAAS()
0x30b: Pop(0)
0x30c: Return(); Pop(0)

0x30d: PushEmpty()
0x30e: Call2 0x314

0x30f: Pop(0)
0x310: PushEmpty()
0x311: Call2 0xdf1

0x312: Pop(0)
0x313: Return(); Pop(0)

0x314: Push((int) 110)
0x315: @ KillTimer(Stack[-1])
0x316: Pop(1)
0x317: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x318: PushEmpty()
0x319: Call2 0x39c

0x31a: Pop(0)
0x31b: Return(); Pop(0)

0x31c: Push((int) 110)
0x31d: @ KillTimer(Stack[-1])
0x31e: Pop(1)
0x31f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x320: PushEmpty()
0x321: Call2 0x3a3

0x322: Pop(0)
0x323: Return(); Pop(0)

0x324: PushEmpty()
0x325: PushEmpty()
0x326: Call2 0x314

0x327: Pop(0)
0x328: PushEmpty(object)
0x329: Stack[-1] = Stack[-2]
0x32a: Call2 0xd08

0x32b: Pop(1)
0x32c: Return(); Pop(0)

0x32d: PushEmpty(bool, int, bool, int)
0x32e: PushEmpty(bool, object)
0x32f: Stack[-1] = Stack[-7]
0x330: Call2 0xa0a

0x331: Pop(1)
0x332: Pop(1); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: Return(); Pop(4)

0x335: Push( Stack[2 + Tasks[-1].StackPointer] )
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: Return(); Pop(4)

0x338: @ IsPlayerActor(Stack[-5], Stack[-2])
0x339: Pop(0)
0x33a: Pop(0); Push((bool) Stack[-2] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: Return(); Pop(4)

0x33d: PushEmpty(int, object)
0x33e: Stack[-1] = Stack[-7]
0x33f: Call2 0xdb8

0x340: Stack[-3] = Stack[-2]
0x341: Pop(2)
0x342: Push((int) 0)
0x343: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x345: Push((int) 1)
0x346: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x348: PushEmpty()
0x349: Call2 0x31c

0x34a: Pop(0)
0x34b: PushEmpty(object)
0x34c: Stack[-1] = Stack[-6]
0x34d: Call2 0xdc1

0x34e: Pop(1)
0x34f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x350: Push((int) 110)
0x351: Push((float)10.0)
0x352: @ SetTimer(Stack[-2], Stack[-1])
0x353: Pop(2)
0x354: Return(); Pop(4)

0x355: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x356: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x357: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x358: Push((float)0.5)
0x359: @ rand(Stack[-7], Stack[-1])
0x35a: Pop(1)
0x35b: @ Sleep(Stack[-6])
0x35c: Pop(0)
0x35d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x35f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x361: @ GetPosition(Stack[-4])
0x362: Pop(0)
0x363: PushEmpty(float)
0x364: Call2 0x390

0x365: Pop(0)
0x366: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x367: Pop(1)
0x368: Push(Stack[-3])
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: GOTO 0x36f

0x36b: Push((int) 1)
0x36c: @ Sleep(Stack[-1])
0x36d: Pop(1)
0x36e: GOTO 0x361

0x36f: GOTO 0x371

0x370: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x371: PushEmpty(object, cvector)
0x372: Stack[-1] = Stack[-7]
0x373: Call2 0x3ac

0x374: Stack[-4] = Stack[-2]
0x375: Pop(2)
0x376: Pop(0); Push(( Stack[-2] != 0 )
0x377: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x378: @ RotatePath(Stack[-2], Stack[-1])
0x379: Pop(0)
0x37a: Push(Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x37c: PushEmpty(bool)
0x37d: Call2 0x3aa

0x37e: Pop(0)
0x37f: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x380: Pop(1)
0x381: Stack[-2] = 0
0x382: Push(Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x384: PushEmpty()
0x385: Push(-0, 0); TaskCall(4)
0x386: Call2 0x456

0x387: Pop(-0, 0); TaskReturn
0x388: Pop(0)
0x389: GOTO 0x38d

0x38a: Push((int) 1)
0x38b: @ Sleep(Stack[-1])
0x38c: Pop(1)
0x38d: Stack[-2] = 0
0x38e: GOTO 0x35d

0x38f: Return(); Pop(12)

0x390: PushEmpty(float, float)
0x391: @ GetCameraFarDistance(Stack[-1])
0x392: Pop(0)
0x393: Stack[-3] = Stack[-1]
0x394: Return(); Pop(2)

0x395: PushEmpty()
0x396: @ RequestClearPath(Stack[-1])
0x397: Pop(0)
0x398: Return(); Pop(0)

0x399: @ Stop()
0x39a: Pop(0)
0x39b: Return(); Pop(0)

0x39c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x39d: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x39e: @ Stop()
0x39f: Pop(0)
0x3a0: @ StopGroup0()
0x3a1: Pop(0)
0x3a2: Return(); Pop(0)

0x3a3: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3a4: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x3a5: @ Stop()
0x3a6: Pop(0)
0x3a7: @ StopGroup0()
0x3a8: Pop(0)
0x3a9: Return(); Pop(0)

0x3aa: Stack[-1] = (bool) 0
0x3ab: Return(); Pop(0)

0x3ac: PushEmpty(object, object)
0x3ad: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x3ae: Pop(0)
0x3af: Stack[-4] = Stack[-1]
0x3b0: Return(); Pop(2)

0x3b1: Stack[-1] = 0
0x3b2: PushEmpty(int, int)
0x3b3: PushEmpty(int, object)
0x3b4: Stack[-1] = Stack[-5]
0x3b5: Call2 0xde8

0x3b6: Stack[-3] = Stack[-2]
0x3b7: Pop(2)
0x3b8: Push((int) 0)
0x3b9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3bb: Push((int) 1)
0x3bc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3be: PushEmpty()
0x3bf: Call2 0x4a7

0x3c0: Pop(0)
0x3c1: PushEmpty(object)
0x3c2: Stack[-1] = Stack[-4]
0x3c3: Call2 0xdeb

0x3c4: Pop(1)
0x3c5: Return(); Pop(2)

0x3c6: PushEmpty(int, int)
0x3c7: PushEmpty(object)
0x3c8: Stack[-1] = Stack[-4]
0x3c9: Call2 0xd76

0x3ca: Pop(1)
0x3cb: PushEmpty(int, object)
0x3cc: Stack[-1] = Stack[-5]
0x3cd: Call2 0xdc9

0x3ce: Stack[-3] = Stack[-2]
0x3cf: Pop(2)
0x3d0: Push((int) 0)
0x3d1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d3: Push((int) 1)
0x3d4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d6: PushEmpty()
0x3d7: Call2 0x4a7

0x3d8: Pop(0)
0x3d9: PushEmpty(object)
0x3da: Stack[-1] = Stack[-4]
0x3db: Call2 0xdd3

0x3dc: Pop(1)
0x3dd: Return(); Pop(2)

0x3de: PushEmpty(int, int)
0x3df: PushEmpty(bool, object, object, bool)
0x3e0: Stack[-3] = Stack[-9]
0x3e1: Stack[-2] = Stack[-8]
0x3e2: Stack[-1] = Stack[-7]
0x3e3: Call2 0xe46

0x3e4: Pop(3)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3e6: PushEmpty(int, object, bool)
0x3e7: Stack[-2] = Stack[-8]
0x3e8: Stack[-1] = Stack[-6]
0x3e9: Call2 0xddb

0x3ea: Stack[-4] = Stack[-3]
0x3eb: Pop(3)
0x3ec: Push((int) 0)
0x3ed: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3ef: Push((int) 1)
0x3f0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f2: PushEmpty()
0x3f3: Call2 0x4a7

0x3f4: Pop(0)
0x3f5: PushEmpty(object)
0x3f6: Stack[-1] = Stack[-6]
0x3f7: Call2 0xde2

0x3f8: Pop(1)
0x3f9: Return(); Pop(2)

0x3fa: PushEmpty(int, int)
0x3fb: PushEmpty(int, object)
0x3fc: Stack[-1] = Stack[-5]
0x3fd: Call2 0xe16

0x3fe: Stack[-3] = Stack[-2]
0x3ff: Pop(2)
0x400: Push((int) 0)
0x401: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x403: Push((int) 1)
0x404: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x406: PushEmpty()
0x407: Call2 0x4a7

0x408: Pop(0)
0x409: PushEmpty(object)
0x40a: Stack[-1] = Stack[-4]
0x40b: Call2 0xe19

0x40c: Pop(1)
0x40d: Return(); Pop(2)

0x40e: PushEmpty(int, int)
0x40f: PushEmpty(bool, object, string)
0x410: Stack[-2] = Stack[-7]
0x411: Stack[-1] = Stack[-6]
0x412: Call2 0xd20

0x413: Pop(2)
0x414: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x415: PushEmpty()
0x416: Call2 0x4a7

0x417: Pop(0)
0x418: PushEmpty(object, string)
0x419: Stack[-2] = Stack[-6]
0x41a: Stack[-1] = Stack[-5]
0x41b: Call2 0xd40

0x41c: Pop(2)
0x41d: GOTO 0x432

0x41e: PushEmpty(int, string, object)
0x41f: Stack[-2] = Stack[-6]
0x420: Stack[-1] = Stack[-7]
0x421: Call2 0xdf2

0x422: Stack[-4] = Stack[-3]
0x423: Pop(3)
0x424: Push((int) 0)
0x425: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x427: Push((int) 1)
0x428: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42a: PushEmpty()
0x42b: Call2 0x4a7

0x42c: Pop(0)
0x42d: PushEmpty(string, object)
0x42e: Stack[-2] = Stack[-5]
0x42f: Stack[-1] = Stack[-6]
0x430: Call2 0xdf5

0x431: Pop(2)
0x432: Return(); Pop(2)

0x433: PushEmpty()
0x434: PushEmpty(bool, string)
0x435: Stack[-1] = Stack[-3]
0x436: Call2 0xd83

0x437: Pop(1)
0x438: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x439: PushEmpty()
0x43a: Call2 0x4a7

0x43b: Pop(0)
0x43c: PushEmpty(string)
0x43d: Stack[-1] = Stack[-2]
0x43e: Call2 0xd93

0x43f: Pop(1)
0x440: Return(); Pop(0)

0x441: PushEmpty()
0x442: Call2 0x4a7

0x443: Pop(0)
0x444: PushEmpty()
0x445: Call2 0xdf1

0x446: Pop(0)
0x447: Return(); Pop(0)

0x448: PushEmpty()
0x449: PushEmpty(bool, object)
0x44a: Stack[-1] = Stack[-3]
0x44b: Call2 0xd59

0x44c: Pop(1)
0x44d: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x44e: PushEmpty()
0x44f: Call2 0x4a7

0x450: Pop(0)
0x451: PushEmpty(object)
0x452: Stack[-1] = Stack[-2]
0x453: Call2 0xd70

0x454: Pop(1)
0x455: Return(); Pop(0)

0x456: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x457: @ WaitForAnimEnd()
0x458: Pop(0)
0x459: PushEmpty(bool)
0x45a: Call2 0xaab

0x45b: Pop(0)
0x45c: Pop(1); Push((bool) Stack[-1] == 0)
0x45d: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45e: Return(); Pop(14)

0x45f: PushEmpty(int)
0x460: Call2 0xda7

0x461: Stack[-8] = Stack[-1]
0x462: Pop(1)
0x463: Stack[-6] = (int) 0
0x464: PushEmpty(bool)
0x465: Stack[-1] = (bool) 0
0x466: Push((int) 5)
0x467: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x469: PushEmpty(bool)
0x46a: Call2 0xaab

0x46b: Pop(0)
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: Stack[-1] = (bool) 1
0x46e: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x46f: Push((int) 3)
0x470: @ irand(Stack[-6], Stack[-1])
0x471: Pop(1)
0x472: Push((int) 0)
0x473: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x474: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x475: Push(Stack[-7])
0x476: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x477: @ irand(Stack[-4], Stack[-7])
0x478: Pop(0)
0x479: Push("all")
0x47a: PushEmpty(string, int)
0x47b: Stack[-1] = Stack[-7]
0x47c: Call2 0xda0

0x47d: Pop(1)
0x47e: @ PlayAnimation(Stack[-2], Stack[-1])
0x47f: Pop(2)
0x480: @ WaitForAnimEnd(Stack[-3])
0x481: Pop(0)
0x482: Pop(0); Push((bool) Stack[-3] == 0)
0x483: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x484: GOTO 0x4a2

0x485: GOTO 0x497

0x486: Push((int) 1)
0x487: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x489: Push((int) 4)
0x48a: @ rand(Stack[-3], Stack[-1])
0x48b: Pop(1)
0x48c: Push((int) 1)
0x48d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x48e: @ Sleep(Stack[-1], Stack[-2])
0x48f: Pop(1)
0x490: Pop(0); Push((bool) Stack[-1] == 0)
0x491: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x492: GOTO 0x4a2

0x493: GOTO 0x497

0x494: Push(Stack[-6])
0x495: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x496: GOTO 0x4a2

0x497: PushEmpty(bool)
0x498: Call2 0x4a5

0x499: Pop(0)
0x49a: Pop(1); Push((bool) Stack[-1] == 0)
0x49b: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49c: GOTO 0x4a2

0x49d: @ ResetAAS()
0x49e: Pop(0)
0x49f: Push((int) 1)
0x4a0: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4a1: GOTO 0x464

0x4a2: @ ResetAAS()
0x4a3: Pop(0)
0x4a4: Return(); Pop(14)

0x4a5: Stack[-1] = (bool) 1
0x4a6: Return(); Pop(0)

0x4a7: @ StopAnimation()
0x4a8: Pop(0)
0x4a9: @ StopGroup0()
0x4aa: Pop(0)
0x4ab: Return(); Pop(0)

0x4ac: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x4ad: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x4ae: PushEmpty()
0x4af: Call2 0x4df

0x4b0: Pop(0)
0x4b1: @ GetDirection(Stack[-3])
0x4b2: Pop(0)
0x4b3: PushEmpty(cvector, object)
0x4b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b5: Call2 0x978

0x4b6: Stack[-4] = Stack[-2]
0x4b7: Pop(2)
0x4b8: PushEmpty(float, cvector, cvector)
0x4b9: Stack[-2] = Stack[-6]
0x4ba: Stack[-1] = Stack[-5]
0x4bb: Call2 0xbb3

0x4bc: Pop(2)
0x4bd: Push((int) 0)
0x4be: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c0: PushEmpty(object)
0x4c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c2: Call2 0xaa0

0x4c3: Pop(1)
0x4c4: Stack[-1] = (bool) 1
0x4c5: GOTO 0x4c9

0x4c6: Push((float)1.5)
0x4c7: @ Sleep(Stack[-1], Stack[-2])
0x4c8: Pop(1)
0x4c9: Push(Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4cb: PushEmpty(object)
0x4cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cd: Call2 0xaa0

0x4ce: Pop(1)
0x4cf: Push((int) 111)
0x4d0: Push((float)0.5)
0x4d1: @ SetTimer(Stack[-2], Stack[-1])
0x4d2: Pop(2)
0x4d3: Push((float)5.0)
0x4d4: @ Sleep(Stack[-1])
0x4d5: Pop(1)
0x4d6: Push((int) 111)
0x4d7: @ KillTimer(Stack[-1])
0x4d8: Pop(1)
0x4d9: @ StopAsync()
0x4da: Pop(0)
0x4db: Push("head")
0x4dc: @ UnlookAsync(Stack[-1])
0x4dd: Pop(1)
0x4de: Return(); Pop(6)

0x4df: PushEmpty(object)
0x4e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e1: Call2 0xb24

0x4e2: Pop(1)
0x4e3: Return(); Pop(0)

0x4e4: PushEmpty(int, int)
0x4e5: PushEmpty(int, object)
0x4e6: Stack[-1] = Stack[-5]
0x4e7: Call2 0xde8

0x4e8: Stack[-3] = Stack[-2]
0x4e9: Pop(2)
0x4ea: Push((int) 0)
0x4eb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4ed: Push((int) 1)
0x4ee: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f0: PushEmpty()
0x4f1: Call2 0x573

0x4f2: Pop(0)
0x4f3: PushEmpty(object)
0x4f4: Stack[-1] = Stack[-4]
0x4f5: Call2 0xdeb

0x4f6: Pop(1)
0x4f7: Return(); Pop(2)

0x4f8: PushEmpty(int, int)
0x4f9: PushEmpty(object)
0x4fa: Stack[-1] = Stack[-4]
0x4fb: Call2 0xd76

0x4fc: Pop(1)
0x4fd: PushEmpty(int, object)
0x4fe: Stack[-1] = Stack[-5]
0x4ff: Call2 0xdc9

0x500: Stack[-3] = Stack[-2]
0x501: Pop(2)
0x502: Push((int) 0)
0x503: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x505: Push((int) 1)
0x506: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x508: PushEmpty()
0x509: Call2 0x573

0x50a: Pop(0)
0x50b: PushEmpty(object)
0x50c: Stack[-1] = Stack[-4]
0x50d: Call2 0xdd3

0x50e: Pop(1)
0x50f: Return(); Pop(2)

0x510: PushEmpty(int, int)
0x511: PushEmpty(bool, object, object, bool)
0x512: Stack[-3] = Stack[-9]
0x513: Stack[-2] = Stack[-8]
0x514: Stack[-1] = Stack[-7]
0x515: Call2 0xe46

0x516: Pop(3)
0x517: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x518: PushEmpty(int, object, bool)
0x519: Stack[-2] = Stack[-8]
0x51a: Stack[-1] = Stack[-6]
0x51b: Call2 0xddb

0x51c: Stack[-4] = Stack[-3]
0x51d: Pop(3)
0x51e: Push((int) 0)
0x51f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x520: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x521: Push((int) 1)
0x522: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x523: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x524: PushEmpty()
0x525: Call2 0x573

0x526: Pop(0)
0x527: PushEmpty(object)
0x528: Stack[-1] = Stack[-6]
0x529: Call2 0xde2

0x52a: Pop(1)
0x52b: Return(); Pop(2)

0x52c: PushEmpty(int, int)
0x52d: PushEmpty(int, object)
0x52e: Stack[-1] = Stack[-5]
0x52f: Call2 0xe16

0x530: Stack[-3] = Stack[-2]
0x531: Pop(2)
0x532: Push((int) 0)
0x533: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x535: Push((int) 1)
0x536: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x537: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x538: PushEmpty()
0x539: Call2 0x573

0x53a: Pop(0)
0x53b: PushEmpty(object)
0x53c: Stack[-1] = Stack[-4]
0x53d: Call2 0xe19

0x53e: Pop(1)
0x53f: Return(); Pop(2)

0x540: PushEmpty(int, int)
0x541: PushEmpty(bool, object, string)
0x542: Stack[-2] = Stack[-7]
0x543: Stack[-1] = Stack[-6]
0x544: Call2 0xd20

0x545: Pop(2)
0x546: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x547: PushEmpty()
0x548: Call2 0x573

0x549: Pop(0)
0x54a: PushEmpty(object, string)
0x54b: Stack[-2] = Stack[-6]
0x54c: Stack[-1] = Stack[-5]
0x54d: Call2 0xd40

0x54e: Pop(2)
0x54f: GOTO 0x564

0x550: PushEmpty(int, string, object)
0x551: Stack[-2] = Stack[-6]
0x552: Stack[-1] = Stack[-7]
0x553: Call2 0xdf2

0x554: Stack[-4] = Stack[-3]
0x555: Pop(3)
0x556: Push((int) 0)
0x557: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x559: Push((int) 1)
0x55a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x55b: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55c: PushEmpty()
0x55d: Call2 0x573

0x55e: Pop(0)
0x55f: PushEmpty(string, object)
0x560: Stack[-2] = Stack[-5]
0x561: Stack[-1] = Stack[-6]
0x562: Call2 0xdf5

0x563: Pop(2)
0x564: Return(); Pop(2)

0x565: PushEmpty()
0x566: PushEmpty(bool, string)
0x567: Stack[-1] = Stack[-3]
0x568: Call2 0xd83

0x569: Pop(1)
0x56a: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x56b: PushEmpty()
0x56c: Call2 0x573

0x56d: Pop(0)
0x56e: PushEmpty(string)
0x56f: Stack[-1] = Stack[-2]
0x570: Call2 0xd93

0x571: Pop(1)
0x572: Return(); Pop(0)

0x573: @ StopGroup0()
0x574: Pop(0)
0x575: @ StopAsync()
0x576: Pop(0)
0x577: Push("head")
0x578: @ UnlookAsync(Stack[-1])
0x579: Pop(1)
0x57a: Push((int) 111)
0x57b: @ KillTimer(Stack[-1])
0x57c: Pop(1)
0x57d: Return(); Pop(0)

0x57e: PushEmpty()
0x57f: PushEmpty()
0x580: Call2 0x573

0x581: Pop(0)
0x582: PushEmpty(object)
0x583: Stack[-1] = Stack[-2]
0x584: Call2 0xd08

0x585: Pop(1)
0x586: Return(); Pop(0)

0x587: PushEmpty(cvector, cvector, cvector, cvector)
0x588: Push((int) 111)
0x589: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58b: Return(); Pop(4)

0x58c: PushEmpty(bool, object)
0x58d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58e: Call2 0xa0a

0x58f: Pop(1)
0x590: Pop(1); Push((bool) Stack[-1] == 0)
0x591: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x592: PushEmpty()
0x593: Call2 0x573

0x594: Pop(0)
0x595: Return(); Pop(4)

0x596: @ GetDirection(Stack[-2])
0x597: Pop(0)
0x598: PushEmpty(cvector, object)
0x599: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x59a: Call2 0x978

0x59b: Stack[-3] = Stack[-2]
0x59c: Pop(2)
0x59d: PushEmpty(float, cvector, cvector)
0x59e: Stack[-2] = Stack[-5]
0x59f: Stack[-1] = Stack[-4]
0x5a0: Call2 0xbb3

0x5a1: Pop(2)
0x5a2: Push((float)0.5)
0x5a3: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a5: PushEmpty(object)
0x5a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a7: Call2 0xaa0

0x5a8: Pop(1)
0x5a9: Return(); Pop(4)

0x5aa: PushEmpty()
0x5ab: Call2 0x573

0x5ac: Pop(0)
0x5ad: PushEmpty()
0x5ae: Call2 0xdf1

0x5af: Pop(0)
0x5b0: Return(); Pop(0)

0x5b1: PushEmpty()
0x5b2: PushEmpty(bool, object)
0x5b3: Stack[-1] = Stack[-3]
0x5b4: Call2 0xd59

0x5b5: Pop(1)
0x5b6: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5b7: PushEmpty()
0x5b8: Call2 0x573

0x5b9: Pop(0)
0x5ba: PushEmpty(object)
0x5bb: Stack[-1] = Stack[-2]
0x5bc: Call2 0xd70

0x5bd: Pop(1)
0x5be: Return(); Pop(0)

0x5bf: PushEmpty()
0x5c0: PushEmpty(object, bool, float)
0x5c1: Stack[-3] = Stack[-4]
0x5c2: Stack[-2] = (bool) 1
0x5c3: Stack[-1] = (float) 180.0
0x5c4: Call2 0x5cd

0x5c5: Pop(3)
0x5c6: Return(); Pop(0)

0x5c7: PushEmpty()
0x5c8: Stack[-3] = (float) 0.03
0x5c9: Return(); Pop(0)

0x5ca: PushEmpty()
0x5cb: Stack[-3] = (int) 0
0x5cc: Return(); Pop(0)

0x5cd: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x5ce: PushEmpty()
0x5cf: Call2 0x6b2

0x5d0: Pop(0)
0x5d1: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x5d2: Push("@GetAttackDistance")
0x5d3: Push((int) 1)
0x5d4: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x5d5: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d6: @@ GetAttackDistance(Stack[-11])
0x5d7: Pop(0)
0x5d8: Push((int) 50)
0x5d9: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x5da: GOTO 0x5dc

0x5db: Stack[-11] = Stack[-23]
0x5dc: Push((int) 150)
0x5dd: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5df: Stack[-11] = (int) 150
0x5e0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5e1: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x5e2: @ IsPlayerActor(Stack[-0], Stack[-8])
0x5e3: Pop(0)
0x5e4: Push(Stack[-8])
0x5e5: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5e6: Push("attack")
0x5e7: @ PlayGlobalMusic(Stack[-1])
0x5e8: Pop(1)
0x5e9: PushEmpty(object)
0x5ea: Call2 0xb79

0x5eb: Pop(0)
0x5ec: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x5ed: Pop(1)
0x5ee: Push(Stack[-24])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f0: Stack[-7] = (bool) 0
0x5f1: GOTO 0x5f3

0x5f2: Stack[-7] = (bool) 1
0x5f3: Push((float)400.0)
0x5f4: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x5f5: PushEmpty(bool)
0x5f6: Stack[-1] = (bool) 0
0x5f7: PushEmpty(bool, object)
0x5f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f9: Call2 0xa0a

0x5fa: Pop(1)
0x5fb: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fc: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x5fd: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fe: Stack[-1] = (bool) 1
0x5ff: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x600: PushEmpty()
0x601: Call2 0x84f

0x602: Pop(0)
0x603: @@ GetPFPosition(Stack[-10])
0x604: Pop(0)
0x605: @ GetPFPosition(Stack[-9])
0x606: Pop(0)
0x607: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x608: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x609: Pop(0); Push(Stack[-6] * Stack[-6]);
0x60a: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x60b: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x60c: PushEmpty(bool, object, float, float, bool, bool)
0x60d: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x60e: Stack[-4] = Stack[-17]
0x60f: Stack[-3] = (float) 3000.0
0x610: Stack[-2] = (bool) 1
0x611: Stack[-1] = (bool) 0
0x612: Push(-6, 3); TaskCall(7)
0x613: Call2 0x86a

0x614: Pop(-6, 3); TaskReturn
0x615: Pop(5)
0x616: Pop(1); Push((bool) Stack[-1] == 0)
0x617: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x618: GOTO 0x6a1

0x619: Stack[-7] = (bool) 0
0x61a: GOTO 0x6a0

0x61b: Pop(0); Push(Stack[-23] * Stack[-23]);
0x61c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x61d: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x61e: @@ GetPFPosition(Stack[-3])
0x61f: Pop(0)
0x620: @ CanReachByPF(Stack[-2], Stack[-3])
0x621: Pop(0)
0x622: Pop(0); Push((bool) Stack[-2] == 0)
0x623: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x624: PushEmpty(bool, object, float, float, bool, bool)
0x625: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x626: Stack[-4] = Stack[-17]
0x627: Stack[-3] = (float) 3000.0
0x628: Stack[-2] = (bool) 1
0x629: Stack[-1] = (bool) 0
0x62a: Push(-6, 3); TaskCall(7)
0x62b: Call2 0x86a

0x62c: Pop(-6, 3); TaskReturn
0x62d: Pop(5)
0x62e: Pop(1); Push((bool) Stack[-1] == 0)
0x62f: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x630: GOTO 0x6a1

0x631: Stack[-7] = (bool) 0
0x632: GOTO 0x5f5

0x633: Pop(0); Push((bool) Stack[-7] == 0)
0x634: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x635: PushEmpty(object)
0x636: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x637: Call2 0xaa0

0x638: Pop(1)
0x639: Push("all")
0x63a: Push("attack_on")
0x63b: @ PlayAnimation(Stack[-2], Stack[-1])
0x63c: Pop(2)
0x63d: @ WaitForAnimEnd()
0x63e: Pop(0)
0x63f: PushEmpty()
0x640: Call2 0x84f

0x641: Pop(0)
0x642: @ StopAsync()
0x643: Pop(0)
0x644: Stack[-7] = (bool) 1
0x645: PushEmpty(bool, object)
0x646: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x647: Call2 0xa0a

0x648: Pop(1)
0x649: Pop(1); Push((bool) Stack[-1] == 0)
0x64a: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64b: GOTO 0x6a1

0x64c: @ rand(Stack[-1])
0x64d: Pop(0)
0x64e: PushEmpty(bool)
0x64f: Stack[-1] = (bool) 1
0x650: Push((float)0.25)
0x651: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x653: PushEmpty(bool)
0x654: Call2 0x824

0x655: Pop(0)
0x656: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x657: Stack[-1] = (bool) 0
0x658: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x659: @ Face(Stack[-0])
0x65a: Pop(0)
0x65b: PushEmpty()
0x65c: Call2 0x856

0x65d: Pop(0)
0x65e: Push("all")
0x65f: Push("attack_stay")
0x660: @ PlayAnimation(Stack[-2], Stack[-1])
0x661: Pop(2)
0x662: PushEmpty(bool, float)
0x663: Stack[-1] = Stack[-25]
0x664: Call2 0x7a0

0x665: Pop(2)
0x666: @ StopAsync()
0x667: Pop(0)
0x668: GOTO 0x697

0x669: @ Face(Stack[-0])
0x66a: Pop(0)
0x66b: Push("all")
0x66c: Push("fjump")
0x66d: @ PlayAnimation(Stack[-2], Stack[-1])
0x66e: Pop(2)
0x66f: @ WaitForAnimEnd()
0x670: Pop(0)
0x671: PushEmpty()
0x672: Call2 0x84f

0x673: Pop(0)
0x674: Push(CVector(0.0, 0.0, 0.0))
0x675: @ SetSpeed(Stack[-1])
0x676: Pop(1)
0x677: @ Stop()
0x678: Pop(0)
0x679: @ StopAsync()
0x67a: Pop(0)
0x67b: PushEmpty(bool)
0x67c: Call2 0x824

0x67d: Pop(0)
0x67e: Pop(1); Push((bool) Stack[-1] == 0)
0x67f: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x680: PushEmpty(bool, object)
0x681: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x682: Call2 0xa0a

0x683: Pop(1)
0x684: Pop(1); Push((bool) Stack[-1] == 0)
0x685: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x686: GOTO 0x6a1

0x687: @@ GetPFPosition(Stack[-10])
0x688: Pop(0)
0x689: @ GetPFPosition(Stack[-9])
0x68a: Pop(0)
0x68b: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x68c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x68d: Pop(0); Push(Stack[-23] * Stack[-23]);
0x68e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x690: PushEmpty(bool, float)
0x691: Stack[-1] = Stack[-25]
0x692: Call2 0x6fc

0x693: Pop(1)
0x694: Pop(1); Push((bool) Stack[-1] == 0)
0x695: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x696: GOTO 0x6a1

0x697: GOTO 0x6a0

0x698: PushEmpty(bool, float)
0x699: Stack[-1] = Stack[-25]
0x69a: Call2 0x6fc

0x69b: Pop(1)
0x69c: Pop(1); Push((bool) Stack[-1] == 0)
0x69d: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69e: GOTO 0x6a1

0x69f: Stack[-7] = (bool) 1
0x6a0: GOTO 0x5f5

0x6a1: @ WaitForAnimEnd()
0x6a2: Pop(0)
0x6a3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6a4: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x6a5: Return(); Pop(22)

0x6a6: Push("all")
0x6a7: Push("attack_off")
0x6a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x6a9: Pop(2)
0x6aa: @ WaitForAnimEnd()
0x6ab: Pop(0)
0x6ac: Push(Stack[-8])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6ae: Push((float)2.0)
0x6af: @ Sleep(Stack[-1])
0x6b0: Pop(1)
0x6b1: Return(); Pop(22)

0x6b2: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x6b3: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x6b4: Push("all")
0x6b5: Push("attack_begin")
0x6b6: Push((int) 1)
0x6b7: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x6b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6b9: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x6ba: Pop(2)
0x6bb: Pop(0); Push((bool) Stack[-3] == 0)
0x6bc: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bd: GOTO 0x6c1

0x6be: Push((int) 1)
0x6bf: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x6c0: GOTO 0x6b4

0x6c1: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x6c2: Push("attack")
0x6c3: Push((int) 1)
0x6c4: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x6c5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6c6: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x6c7: Pop(1)
0x6c8: Pop(0); Push((bool) Stack[-2] == 0)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6ca: GOTO 0x6ce

0x6cb: Push((int) 1)
0x6cc: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x6cd: GOTO 0x6c2

0x6ce: Push("all")
0x6cf: Push("bjump")
0x6d0: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x6d1: Pop(2)
0x6d2: Push(CvectorIndex(Stack[-1], 2))
0x6d3: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x6d4: Return(); Pop(6)

0x6d5: PushEmpty(object, float, float, object, float, float)
0x6d6: Push((float)0.9)
0x6d7: Pop(1); Push(Stack[-9] * Stack[-1]);
0x6d8: @ GetVictim(Stack[-1], Stack[-4])
0x6d9: Pop(1)
0x6da: @ ReportAttack(Stack[-0])
0x6db: Pop(0)
0x6dc: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x6dd: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6de: PushEmpty(float, object, int)
0x6df: Stack[-2] = Stack[-6]
0x6e0: Stack[-1] = Stack[-10]
0x6e1: Call2 0x5c7

0x6e2: Stack[-5] = Stack[-3]
0x6e3: Pop(3)
0x6e4: PushEmpty(float, object, float, int)
0x6e5: Stack[-3] = Stack[-7]
0x6e6: Stack[-2] = Stack[-6]
0x6e7: PushEmpty(int, object, int)
0x6e8: Stack[-2] = Stack[-10]
0x6e9: Stack[-1] = Stack[-14]
0x6ea: Call2 0x5ca

0x6eb: Stack[-4] = Stack[-3]
0x6ec: Pop(3)
0x6ed: Call2 0x998

0x6ee: Stack[-5] = Stack[-4]
0x6ef: Pop(4)
0x6f0: PushEmpty(int)
0x6f1: Call2 0x854

0x6f2: Pop(0)
0x6f3: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x6f4: Pop(1)
0x6f5: PushEmpty(object, float)
0x6f6: Stack[-2] = Stack[-5]
0x6f7: Stack[-1] = Stack[-3]
0x6f8: Call2 0x85b

0x6f9: Pop(2)
0x6fa: Return(); Pop(6)

0x6fb: Stack[-3] = 0
0x6fc: PushEmpty(int, bool, int, string, int, bool, int, string)
0x6fd: PushEmpty()
0x6fe: Call2 0x84f

0x6ff: Pop(0)
0x700: @ irand(Stack[-4], Stack[-1])
0x701: Pop(0)
0x702: Push((int) 1)
0x703: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x704: @ Face(Stack[-0])
0x705: Pop(0)
0x706: Push((bool) 1)
0x707: @ SetAttackState(Stack[-1])
0x708: Pop(1)
0x709: PushEmpty()
0x70a: Call2 0xbe5

0x70b: Pop(0)
0x70c: Push("all")
0x70d: Push("attack_begin")
0x70e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x70f: @ PlayAnimation(Stack[-2], Stack[-1])
0x710: Pop(2)
0x711: @ WaitForAnimEnd()
0x712: Pop(0)
0x713: PushEmpty()
0x714: Call2 0x82f

0x715: Pop(0)
0x716: PushEmpty(bool, object)
0x717: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x718: Call2 0xa0a

0x719: Pop(1)
0x71a: Pop(1); Push((bool) Stack[-1] == 0)
0x71b: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71c: @ StopAsync()
0x71d: Pop(0)
0x71e: Stack[-10] = (bool) 0
0x71f: Return(); Pop(8)

0x720: PushEmpty(float, int)
0x721: Stack[-2] = Stack[-11]
0x722: Stack[-1] = Stack[-6]
0x723: Call2 0x6d5

0x724: Pop(2)
0x725: Push("all")
0x726: Push("attack_middle")
0x727: Pop(1); Push(Stack[-1] + Stack[-6]);
0x728: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x729: Pop(2)
0x72a: Push(Stack[-3])
0x72b: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x72c: PushEmpty()
0x72d: Call2 0xbe5

0x72e: Pop(0)
0x72f: Push("all")
0x730: Push("attack_middle")
0x731: Pop(1); Push(Stack[-1] + Stack[-6]);
0x732: @ PlayAnimation(Stack[-2], Stack[-1])
0x733: Pop(2)
0x734: @ WaitForAnimEnd()
0x735: Pop(0)
0x736: PushEmpty()
0x737: Call2 0x84f

0x738: Pop(0)
0x739: PushEmpty(bool, object)
0x73a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x73b: Call2 0xa0a

0x73c: Pop(1)
0x73d: Pop(1); Push((bool) Stack[-1] == 0)
0x73e: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x73f: @ StopAsync()
0x740: Pop(0)
0x741: Stack[-10] = (bool) 0
0x742: Return(); Pop(8)

0x743: PushEmpty(float, int)
0x744: Stack[-2] = Stack[-11]
0x745: Stack[-1] = Stack[-6]
0x746: Call2 0x6d5

0x747: Pop(2)
0x748: Stack[-2] = (int) 1
0x749: Push("attack_middle")
0x74a: Pop(1); Push(Stack[-1] + Stack[-5]);
0x74b: Push("_")
0x74c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x74d: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x74e: Push("all")
0x74f: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x750: Pop(1)
0x751: Pop(0); Push((bool) Stack[-3] == 0)
0x752: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x753: GOTO 0x771

0x754: PushEmpty()
0x755: Call2 0xbe5

0x756: Pop(0)
0x757: Push("all")
0x758: @ PlayAnimation(Stack[-1], Stack[-2])
0x759: Pop(1)
0x75a: @ WaitForAnimEnd()
0x75b: Pop(0)
0x75c: PushEmpty()
0x75d: Call2 0x84f

0x75e: Pop(0)
0x75f: PushEmpty(bool, object)
0x760: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x761: Call2 0xa0a

0x762: Pop(1)
0x763: Pop(1); Push((bool) Stack[-1] == 0)
0x764: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x765: @ StopAsync()
0x766: Pop(0)
0x767: Stack[-10] = (bool) 0
0x768: Return(); Pop(8)

0x769: PushEmpty(float, int)
0x76a: Stack[-2] = Stack[-11]
0x76b: Stack[-1] = Stack[-6]
0x76c: Call2 0x6d5

0x76d: Pop(2)
0x76e: Push((int) 1)
0x76f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x770: GOTO 0x749

0x771: Push((bool) 0)
0x772: @ SetAttackState(Stack[-1])
0x773: Pop(1)
0x774: Push("all")
0x775: Push("attack_end")
0x776: Pop(1); Push(Stack[-1] + Stack[-6]);
0x777: @ PlayAnimation(Stack[-2], Stack[-1])
0x778: Pop(2)
0x779: PushEmpty(bool)
0x77a: Call2 0x85d

0x77b: Pop(0)
0x77c: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x77d: PushEmpty(bool, float)
0x77e: Stack[-1] = (float) 0.75
0x77f: Call2 0x785

0x780: Pop(2)
0x781: @ StopAsync()
0x782: Pop(0)
0x783: Stack[-10] = (bool) 1
0x784: Return(); Pop(8)

0x785: PushEmpty(float, bool, float, bool)
0x786: @ rand(Stack[-2])
0x787: Pop(0)
0x788: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x789: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x78a: @ IsAnimationPlaying(Stack[-1])
0x78b: Pop(0)
0x78c: Pop(0); Push((bool) Stack[-1] == 0)
0x78d: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78e: GOTO 0x798

0x78f: PushEmpty(bool)
0x790: Call2 0x7e7

0x791: Pop(0)
0x792: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x793: Stack[-6] = (bool) 1
0x794: Return(); Pop(4)

0x795: @ sync()
0x796: Pop(0)
0x797: GOTO 0x78a

0x798: GOTO 0x79e

0x799: @ WaitForAnimEnd()
0x79a: Pop(0)
0x79b: PushEmpty()
0x79c: Call2 0x84f

0x79d: Pop(0)
0x79e: Stack[-6] = (bool) 0
0x79f: Return(); Pop(4)

0x7a0: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x7a1: @ IsAnimationPlaying(Stack[-5])
0x7a2: Pop(0)
0x7a3: Pop(0); Push((bool) Stack[-5] == 0)
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a5: GOTO 0x7c6

0x7a6: PushEmpty(bool)
0x7a7: Call2 0x7e7

0x7a8: Pop(0)
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7aa: Stack[-12] = (bool) 1
0x7ab: Return(); Pop(10)

0x7ac: PushEmpty(bool, object)
0x7ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ae: Call2 0xa0a

0x7af: Pop(1)
0x7b0: Pop(1); Push((bool) Stack[-1] == 0)
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7b2: Stack[-12] = (bool) 0
0x7b3: Return(); Pop(10)

0x7b4: @@ GetPFPosition(Stack[-4])
0x7b5: Pop(0)
0x7b6: @ GetPFPosition(Stack[-3])
0x7b7: Pop(0)
0x7b8: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x7b9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x7ba: Pop(0); Push(Stack[-11] * Stack[-11]);
0x7bb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7bd: PushEmpty(bool, float)
0x7be: Stack[-1] = Stack[-13]
0x7bf: Call2 0x6fc

0x7c0: Pop(2)
0x7c1: Stack[-12] = (bool) 1
0x7c2: Return(); Pop(10)

0x7c3: @ sync()
0x7c4: Pop(0)
0x7c5: GOTO 0x7a1

0x7c6: PushEmpty()
0x7c7: Call2 0x84f

0x7c8: Pop(0)
0x7c9: Stack[-12] = (bool) 0
0x7ca: Return(); Pop(10)

0x7cb: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x7cc: PushEmpty(bool, object)
0x7cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ce: Call2 0xa0a

0x7cf: Pop(1)
0x7d0: Pop(1); Push((bool) Stack[-1] == 0)
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d2: Stack[-11] = (bool) 0
0x7d3: Return(); Pop(10)

0x7d4: PushEmpty(bool)
0x7d5: Call2 0x824

0x7d6: Pop(0)
0x7d7: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7d8: @@ GetPFPosition(Stack[-5])
0x7d9: Pop(0)
0x7da: @ GetPFPosition(Stack[-4])
0x7db: Pop(0)
0x7dc: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x7dd: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x7de: @@ GetAttackDistance(Stack[-1])
0x7df: Pop(0)
0x7e0: Push((int) 50)
0x7e1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x7e2: Pop(0); Push(Stack[-1] * Stack[-1]);
0x7e3: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x7e4: Return(); Pop(10)

0x7e5: Stack[-11] = (bool) 0
0x7e6: Return(); Pop(10)

0x7e7: PushEmpty(bool)
0x7e8: Stack[-1] = (bool) 0
0x7e9: PushEmpty(bool)
0x7ea: Call2 0x7cb

0x7eb: Pop(0)
0x7ec: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7ed: PushEmpty(bool)
0x7ee: Call2 0x7f7

0x7ef: Pop(0)
0x7f0: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7f1: Stack[-1] = (bool) 1
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f3: Stack[-1] = (bool) 1
0x7f4: Return(); Pop(0)

0x7f5: Stack[-1] = (bool) 0
0x7f6: Return(); Pop(0)

0x7f7: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x7f8: @ GetScene(Stack[-5])
0x7f9: Pop(0)
0x7fa: Stack[-4] = (bool) 0
0x7fb: PushEmpty(cvector, object)
0x7fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7fd: Call2 0x978

0x7fe: Pop(1)
0x7ff: Pop(1); Push(( -Stack[-1])
0x800: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x801: Pop(1)
0x802: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x803: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x804: GOTO 0x821

0x805: @ Face(Stack[-0])
0x806: Pop(0)
0x807: Push("all")
0x808: Push("bjump")
0x809: @ PlayAnimation(Stack[-2], Stack[-1])
0x80a: Pop(2)
0x80b: @@ GetPFPosition(Stack[-2])
0x80c: Pop(0)
0x80d: @ GetPFPosition(Stack[-1])
0x80e: Pop(0)
0x80f: @ WaitForAnimEnd()
0x810: Pop(0)
0x811: PushEmpty()
0x812: Call2 0x84f

0x813: Pop(0)
0x814: @ StopAsync()
0x815: Pop(0)
0x816: Push(CVector(0.0, 0.0, 0.0))
0x817: @ SetSpeed(Stack[-1])
0x818: Pop(1)
0x819: Stack[-4] = (bool) 1
0x81a: PushEmpty(bool)
0x81b: Call2 0x7cb

0x81c: Pop(0)
0x81d: Pop(1); Push((bool) Stack[-1] == 0)
0x81e: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81f: GOTO 0x821

0x820: GOTO 0x7fb

0x821: Stack[-11] = Stack[-4]
0x822: Return(); Pop(10)

0x823: Stack[-5] = 0
0x824: PushEmpty(bool, bool)
0x825: Push("IsAttacking")
0x826: Push((int) 1)
0x827: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x828: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x829: @@ IsAttacking(Stack[-1])
0x82a: Pop(0)
0x82b: Stack[-3] = Stack[-1]
0x82c: Return(); Pop(2)

0x82d: Stack[-3] = (bool) 0
0x82e: Return(); Pop(2)

0x82f: PushEmpty(float, int, float, int)
0x830: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x831: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x832: Return(); Pop(4)

0x833: Push( Stack[5 + Tasks[-1].StackPointer] )
0x834: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x835: Push((int) -1)
0x836: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x837: Push((int) 0)
0x838: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x839: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x83a: Return(); Pop(4)

0x83b: @ rand(Stack[-2])
0x83c: Pop(0)
0x83d: PushEmpty(float)
0x83e: Call2 0x861

0x83f: Pop(0)
0x840: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x841: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x842: @ irand(Stack[-1], Stack[-2])
0x843: Pop(0)
0x844: Push((int) 1)
0x845: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x846: Push("attack")
0x847: Pop(1); Push(Stack[-1] + Stack[-2]);
0x848: @ Speak(Stack[-1])
0x849: Pop(1)
0x84a: PushEmpty(int)
0x84b: Call2 0x85f

0x84c: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x84d: Pop(1)
0x84e: Return(); Pop(4)

0x84f: PushEmpty(object)
0x850: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x851: Call2 0xbdc

0x852: Pop(1)
0x853: Return(); Pop(0)

0x854: Stack[-1] = (int) 0
0x855: Return(); Pop(0)

0x856: PushEmpty(string)
0x857: Stack[-1] = "attack_stay"
0x858: Call2 0xb50

0x859: Pop(1)
0x85a: Return(); Pop(0)

0x85b: PushEmpty()
0x85c: Return(); Pop(0)

0x85d: Stack[-1] = (bool) 1
0x85e: Return(); Pop(0)

0x85f: Stack[-1] = (int) 1
0x860: Return(); Pop(0)

0x861: Stack[-1] = (float) 0.5
0x862: Return(); Pop(0)

0x863: PushEmpty()
0x864: Call2 0x8a9

0x865: Pop(0)
0x866: PushEmpty()
0x867: Call2 0xdf1

0x868: Pop(0)
0x869: Return(); Pop(0)

0x86a: PushEmpty(bool, bool, bool, bool)
0x86b: PushEmpty(object)
0x86c: Stack[-1] = Stack[-10]
0x86d: Call2 0xbdc

0x86e: Pop(1)
0x86f: Push((int) 1)
0x870: Push((int) 5)
0x871: @ SetTimer(Stack[-2], Stack[-1])
0x872: Pop(2)
0x873: @ CanSee(Stack[-2], Stack[-9])
0x874: Pop(0)
0x875: Push(Stack[-2])
0x876: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x877: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x878: PushEmpty(object)
0x879: Stack[-1] = Stack[-10]
0x87a: Call2 0xb24

0x87b: Pop(1)
0x87c: GOTO 0x87e

0x87d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x87e: PushEmpty(bool, object)
0x87f: Stack[-1] = Stack[-11]
0x880: Call2 0x987

0x881: Pop(1)
0x882: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x883: PushEmpty(object)
0x884: Call2 0xb79

0x885: Pop(0)
0x886: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x887: Pop(1)
0x888: PushEmpty(bool, object, float, float, bool, bool)
0x889: Stack[-5] = Stack[-15]
0x88a: Stack[-4] = Stack[-14]
0x88b: Stack[-3] = Stack[-13]
0x88c: Stack[-2] = Stack[-12]
0x88d: Stack[-1] = Stack[-11]
0x88e: Call2 0x8d3

0x88f: Stack[-7] = Stack[-6]
0x890: Pop(6)
0x891: Push( Stack[2 + Tasks[-1].StackPointer] )
0x892: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x893: Push("head")
0x894: @ UnlookAsync(Stack[-1])
0x895: Pop(1)
0x896: Push((int) 1)
0x897: @ KillTimer(Stack[-1])
0x898: Pop(1)
0x899: Stack[-10] = Stack[-1]
0x89a: Return(); Pop(4)

0x89b: PushEmpty()
0x89c: Push((int) 1)
0x89d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x89e: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x89f: PushEmpty(object)
0x8a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a1: Call2 0xbdc

0x8a2: Pop(1)
0x8a3: GOTO 0x8a8

0x8a4: PushEmpty(int)
0x8a5: Stack[-1] = Stack[-2]
0x8a6: Call2 0x939

0x8a7: Pop(1)
0x8a8: Return(); Pop(0)

0x8a9: Push((int) 1)
0x8aa: @ KillTimer(Stack[-1])
0x8ab: Pop(1)
0x8ac: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b2; Pop(1)

0x8ae: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8af: Push("head")
0x8b0: @ UnlookAsync(Stack[-1])
0x8b1: Pop(1)
0x8b2: PushEmpty()
0x8b3: Call2 0x94f

0x8b4: Pop(0)
0x8b5: Return(); Pop(0)

0x8b6: PushEmpty()
0x8b7: PushEmpty(bool)
0x8b8: Stack[-1] = (bool) 0
0x8b9: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x8ba: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x8bc: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bd: Stack[-1] = (bool) 1
0x8be: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8bf: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8c0: PushEmpty(object)
0x8c1: Stack[-1] = Stack[-2]
0x8c2: Call2 0xb24

0x8c3: Pop(1)
0x8c4: Return(); Pop(0)

0x8c5: PushEmpty()
0x8c6: PushEmpty(bool)
0x8c7: Stack[-1] = (bool) 0
0x8c8: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x8c9: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8ca: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8cb: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8cc: Stack[-1] = (bool) 1
0x8cd: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8ce: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8cf: Push("head")
0x8d0: @ UnlookAsync(Stack[-1])
0x8d1: Pop(1)
0x8d2: Return(); Pop(0)

0x8d3: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x8d4: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8d5: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x8d6: Stack[-7] = Stack[-17]
0x8d7: PushEmpty(bool, object)
0x8d8: Stack[-1] = Stack[-23]
0x8d9: Call2 0x95f

0x8da: Pop(1)
0x8db: Pop(1); Push((bool) Stack[-1] == 0)
0x8dc: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8dd: Stack[-22] = (bool) 0
0x8de: Return(); Pop(16)

0x8df: @@ GetPosition(Stack[-5])
0x8e0: Pop(0)
0x8e1: @ GetPosition(Stack[-4])
0x8e2: Pop(0)
0x8e3: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x8e4: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x8e5: PushEmpty(bool)
0x8e6: Stack[-1] = (bool) 0
0x8e7: Push((int) 0)
0x8e8: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x8e9: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8ea: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8eb: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x8ec: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8ed: Stack[-1] = (bool) 1
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8ef: @ Stop()
0x8f0: Pop(0)
0x8f1: Stack[-22] = (bool) 0
0x8f2: Return(); Pop(16)

0x8f3: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8f4: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x8f5: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x8f6: @@ GetPFPosition(Stack[-5])
0x8f7: Pop(0)
0x8f8: @ FindPathTo(Stack[-1], Stack[-5])
0x8f9: Pop(0)
0x8fa: Pop(0); Push(( Stack[-1] != 0 )
0x8fb: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8fc: Stack[-6] = Stack[-1]
0x8fd: Stack[-1] = 0
0x8fe: Pop(0); Push(( Stack[-6] != 0 )
0x8ff: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x900: Push(Stack[-7])
0x901: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x902: Stack[-7] = (bool) 0
0x903: @ RotatePath(Stack[-6], Stack[-8])
0x904: Pop(0)
0x905: Pop(0); Push((bool) Stack[-8] == 0)
0x906: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x907: GOTO 0x937

0x908: Push((int) 0)
0x909: Push((float)0.3)
0x90a: @ SetTimer(Stack[-2], Stack[-1])
0x90b: Pop(2)
0x90c: PushEmpty(string)
0x90d: Call2 0x966

0x90e: Pop(0)
0x90f: PushEmpty(string)
0x910: Call2 0x968

0x911: Pop(0)
0x912: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x913: Pop(2)
0x914: Pop(0); Push((bool) Stack[-8] == 0)
0x915: IF (Stack[-1] == 0) GOTO 0x91d; Pop(1)

0x916: Push( Stack[0 + Tasks[-1].StackPointer] )
0x917: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x918: Stack[-6] = 0
0x919: GOTO 0x937

0x91a: GOTO 0x91c

0x91b: GOTO 0x936

0x91c: GOTO 0x91e

0x91d: Stack[-6] = 0
0x91e: GOTO 0x92f

0x91f: Push((int) 0)
0x920: @ KillTimer(Stack[-1])
0x921: Pop(1)
0x922: Push((float)0.5)
0x923: @ Sleep(Stack[-1], Stack[-9])
0x924: Pop(1)
0x925: Pop(0); Push((bool) Stack[-8] == 0)
0x926: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x927: Push( Stack[0 + Tasks[-1].StackPointer] )
0x928: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x929: Stack[-6] = 0
0x92a: GOTO 0x937

0x92b: Push((int) 0)
0x92c: Push((float)0.3)
0x92d: @ SetTimer(Stack[-2], Stack[-1])
0x92e: Pop(2)
0x92f: Stack[-1] = 0
0x930: GOTO 0x935

0x931: Push((int) 0)
0x932: @ KillTimer(Stack[-1])
0x933: Pop(1)
0x934: GOTO 0x937

0x935: Stack[-6] = 0
0x936: GOTO 0x8d7

0x937: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x938: Return(); Pop(16)

0x939: PushEmpty()
0x93a: Push((int) 0)
0x93b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x93c: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x93d: Return(); Pop(0)

0x93e: PushEmpty(bool, object)
0x93f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x940: Call2 0x95f

0x941: Pop(1)
0x942: Pop(1); Push((bool) Stack[-1] == 0)
0x943: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x944: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x945: Push((int) 0)
0x946: @ KillTimer(Stack[-1])
0x947: Pop(1)
0x948: @ Stop()
0x949: Pop(0)
0x94a: Return(); Pop(0)

0x94b: PushEmpty()
0x94c: @ RequestClearPath(Stack[-1])
0x94d: Pop(0)
0x94e: Return(); Pop(0)

0x94f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x950: Push((int) 0)
0x951: @ KillTimer(Stack[-1])
0x952: Pop(1)
0x953: @ Stop()
0x954: Pop(0)
0x955: Return(); Pop(0)

0x956: PushEmpty()
0x957: PushEmpty()
0x958: Call2 0x8a9

0x959: Pop(0)
0x95a: PushEmpty(object)
0x95b: Stack[-1] = Stack[-2]
0x95c: Call2 0xd08

0x95d: Pop(1)
0x95e: Return(); Pop(0)

0x95f: PushEmpty()
0x960: PushEmpty(bool, object)
0x961: Stack[-1] = Stack[-3]
0x962: Call2 0xa0a

0x963: Stack[-4] = Stack[-2]
0x964: Pop(2)
0x965: Return(); Pop(0)

0x966: Stack[-1] = "walk"
0x967: Return(); Pop(0)

0x968: Stack[-1] = "run"
0x969: Return(); Pop(0)

0x96a: PushEmpty()
0x96b: Push((int) 2)
0x96c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x96d: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x96e: Stack[-2] = "fire"
0x96f: Return(); Pop(0)

0x970: GOTO 0x976

0x971: Push((int) 1)
0x972: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x973: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x974: Stack[-2] = "bullet"
0x975: Return(); Pop(0)

0x976: Stack[-2] = "phys"
0x977: Return(); Pop(0)

0x978: PushEmpty(cvector, cvector, cvector, cvector)
0x979: @ GetPosition(Stack[-2])
0x97a: Pop(0)
0x97b: @@ GetPosition(Stack[-1])
0x97c: Pop(0)
0x97d: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x97e: Return(); Pop(4)

0x97f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x980: @ GetPosition(Stack[-3])
0x981: Pop(0)
0x982: @@ GetPosition(Stack[-2])
0x983: Pop(0)
0x984: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x985: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x986: Return(); Pop(6)

0x987: PushEmpty(bool, bool)
0x988: @ IsPlayerActor(Stack[-3], Stack[-1])
0x989: Pop(0)
0x98a: Stack[-4] = Stack[-1]
0x98b: Return(); Pop(2)

0x98c: PushEmpty(bool, bool)
0x98d: Push("HasProperty")
0x98e: Push((int) 2)
0x98f: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x990: Pop(1); Push((bool) Stack[-1] == 0)
0x991: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x992: Stack[-5] = (bool) 0
0x993: Return(); Pop(2)

0x994: @@ HasProperty(Stack[-3], Stack[-1])
0x995: Pop(0)
0x996: Stack[-5] = Stack[-1]
0x997: Return(); Pop(2)

0x998: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x999: PushEmpty(bool, object, string)
0x99a: Stack[-2] = Stack[-18]
0x99b: Stack[-1] = "health"
0x99c: Call2 0x98c

0x99d: Pop(2)
0x99e: Pop(1); Push((bool) Stack[-1] == 0)
0x99f: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x9a0: Stack[-16] = (float) 0.0
0x9a1: Return(); Pop(12)

0x9a2: PushEmpty(bool, object, string)
0x9a3: Stack[-2] = Stack[-18]
0x9a4: Stack[-1] = "armor"
0x9a5: Call2 0x98c

0x9a6: Pop(2)
0x9a7: Pop(1); Push((bool) Stack[-1] == 0)
0x9a8: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a9: Stack[-6] = (int) 0
0x9aa: GOTO 0x9ae

0x9ab: Push("armor")
0x9ac: @@ GetProperty(Stack[-1], Stack[-7])
0x9ad: Pop(1)
0x9ae: Push("armor_")
0x9af: PushEmpty(string, int)
0x9b0: Stack[-1] = Stack[-16]
0x9b1: Call2 0x96a

0x9b2: Pop(1)
0x9b3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x9b4: PushEmpty(bool, object, string)
0x9b5: Stack[-2] = Stack[-18]
0x9b6: Stack[-1] = Stack[-8]
0x9b7: Call2 0x98c

0x9b8: Pop(2)
0x9b9: Pop(1); Push((bool) Stack[-1] == 0)
0x9ba: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9bb: Stack[-4] = (int) 0
0x9bc: GOTO 0x9bf

0x9bd: @@ GetProperty(Stack[-5], Stack[-4])
0x9be: Pop(0)
0x9bf: PushEmpty(float, float, float)
0x9c0: Pop(0); Push(Stack[-9] + Stack[-7]);
0x9c1: Push((float)100.0)
0x9c2: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x9c3: Stack[-1] = (int) 1
0x9c4: Call2 0xb89

0x9c5: Stack[-6] = Stack[-3]
0x9c6: Pop(3)
0x9c7: Push("health")
0x9c8: @@ GetProperty(Stack[-1], Stack[-3])
0x9c9: Pop(1)
0x9ca: Push((int) 1)
0x9cb: Pop(1); Push(Stack[-1] - Stack[-4]);
0x9cc: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x9cd: Push("health")
0x9ce: PushEmpty(float, float, float, float)
0x9cf: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x9d0: Stack[-2] = (int) 0
0x9d1: Stack[-1] = (int) 1
0x9d2: Call2 0xb90

0x9d3: Pop(3)
0x9d4: @@ SetProperty(Stack[-2], Stack[-1])
0x9d5: Pop(2)
0x9d6: PushEmpty(bool, object)
0x9d7: Stack[-1] = Stack[-17]
0x9d8: Call2 0x987

0x9d9: Pop(1)
0x9da: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9db: PushEmpty(float)
0x9dc: Stack[-1] = -Stack[-2]; Pop(0);
0x9dd: Call2 0xbc9

0x9de: Pop(1)
0x9df: Stack[-16] = Stack[-1]
0x9e0: Return(); Pop(12)

0x9e1: PushEmpty(bool, bool)
0x9e2: @@ IsDead(Stack[-1])
0x9e3: Pop(0)
0x9e4: Stack[-4] = Stack[-1]
0x9e5: Return(); Pop(2)

0x9e6: PushEmpty(object, object, object, object)
0x9e7: Pop(0); Push((bool) Stack[-5] == 0)
0x9e8: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9e9: Stack[-6] = (bool) 0
0x9ea: Return(); Pop(4)

0x9eb: PushEmpty(bool)
0x9ec: Stack[-1] = (bool) 0
0x9ed: Push("IsDead")
0x9ee: Push((int) 1)
0x9ef: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x9f0: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9f1: PushEmpty(bool, object)
0x9f2: Stack[-1] = Stack[-8]
0x9f3: Call2 0x9e1

0x9f4: Pop(1)
0x9f5: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9f6: Stack[-1] = (bool) 1
0x9f7: IF (Stack[-1] == 0) GOTO 0x9fa; Pop(1)

0x9f8: Stack[-6] = (bool) 0
0x9f9: Return(); Pop(4)

0x9fa: @ GetScene(Stack[-2])
0x9fb: Pop(0)
0x9fc: Pop(0); Push((bool) Stack[-2] == 0)
0x9fd: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9fe: Stack[-6] = (bool) 0
0x9ff: Return(); Pop(4)

0xa00: @@ GetScene(Stack[-1])
0xa01: Pop(0)
0xa02: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xa03: IF (Stack[-1] == 0) GOTO 0xa06; Pop(1)

0xa04: Stack[-6] = (bool) 0
0xa05: Return(); Pop(4)

0xa06: Stack[-6] = (bool) 1
0xa07: Return(); Pop(4)

0xa08: Stack[-1] = 0
0xa09: Stack[-2] = 0
0xa0a: PushEmpty(int, int)
0xa0b: PushEmpty(bool, object)
0xa0c: Stack[-1] = Stack[-5]
0xa0d: Call2 0x9e6

0xa0e: Pop(1)
0xa0f: Pop(1); Push((bool) Stack[-1] == 0)
0xa10: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa11: Stack[-4] = (bool) 0
0xa12: Return(); Pop(2)

0xa13: PushEmpty(bool, object, string)
0xa14: Stack[-2] = Stack[-6]
0xa15: Stack[-1] = "noaccess"
0xa16: Call2 0x98c

0xa17: Pop(2)
0xa18: Pop(1); Push((bool) Stack[-1] == 0)
0xa19: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa1a: Stack[-4] = (bool) 1
0xa1b: Return(); Pop(2)

0xa1c: Push("noaccess")
0xa1d: @@ GetProperty(Stack[-1], Stack[-2])
0xa1e: Pop(1)
0xa1f: Push((int) 0)
0xa20: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xa21: Return(); Pop(2)

0xa22: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xa23: Pop(0); Push((bool) Stack[-15] == 0)
0xa24: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa25: Return(); Pop(14)

0xa26: @ IsDead(Stack[-7])
0xa27: Pop(0)
0xa28: Push(Stack[-7])
0xa29: IF (Stack[-1] == 0) GOTO 0xa2b; Pop(1)

0xa2a: Return(); Pop(14)

0xa2b: @ GetSecondaryAnimationType(Stack[-6])
0xa2c: Pop(0)
0xa2d: Push((int) 0)
0xa2e: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xa2f: IF (Stack[-1] == 0) GOTO 0xa31; Pop(1)

0xa30: Return(); Pop(14)

0xa31: @@ GetPosition(Stack[-5])
0xa32: Pop(0)
0xa33: @ GetPosition(Stack[-4])
0xa34: Pop(0)
0xa35: @ GetDirection(Stack[-3])
0xa36: Pop(0)
0xa37: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xa38: Push(CvectorIndex(Stack[-2], 0))
0xa39: Push(CvectorIndex(Stack[-4], 0))
0xa3a: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa3b: Push(CvectorIndex(Stack[-3], 2))
0xa3c: Push(CvectorIndex(Stack[-5], 2))
0xa3d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa3e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa3f: Push((int) 0)
0xa40: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa41: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa42: Stack[-1] = "fhit"
0xa43: GOTO 0xa45

0xa44: Stack[-1] = "bhit"
0xa45: Push("hit_react")
0xa46: Push("1")
0xa47: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa48: Push("2")
0xa49: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa4a: Push((int) -10)
0xa4b: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa4c: Pop(4)
0xa4d: Return(); Pop(14)

0xa4e: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xa4f: PushEmpty(bool)
0xa50: Stack[-1] = (bool) 0
0xa51: PushEmpty(bool)
0xa52: Stack[-1] = (bool) 0
0xa53: Push(Stack[-23])
0xa54: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa55: Push((int) 4)
0xa56: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xa57: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa58: Stack[-1] = (bool) 1
0xa59: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa5a: Push((int) 5)
0xa5b: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xa5c: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa5d: Stack[-1] = (bool) 1
0xa5e: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa5f: PushEmpty(cvector, cvector)
0xa60: PushEmpty(cvector, object)
0xa61: Stack[-1] = Stack[-25]
0xa62: Call2 0x978

0xa63: Stack[-3] = Stack[-2]
0xa64: Pop(2)
0xa65: Call2 0xb7f

0xa66: Stack[-11] = Stack[-2]
0xa67: Pop(2)
0xa68: @ CreateVectorVector(Stack[-8])
0xa69: Pop(0)
0xa6a: Stack[-7] = (int) 1
0xa6b: Push("hit")
0xa6c: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa6d: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xa6e: Pop(1)
0xa6f: Pop(0); Push((bool) Stack[-6] == 0)
0xa70: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa71: GOTO 0xa7b

0xa72: Pop(0); Push(Stack[-4] | Stack[-9]);
0xa73: Push((float)0.70711)
0xa74: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa75: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa76: @@ add(Stack[-5])
0xa77: Pop(0)
0xa78: Push((int) 1)
0xa79: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xa7a: GOTO 0xa6b

0xa7b: @@ size(Stack[-3])
0xa7c: Pop(0)
0xa7d: Push(Stack[-3])
0xa7e: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa7f: @ irand(Stack[-2], Stack[-3])
0xa80: Pop(0)
0xa81: @@ get(Stack[-1], Stack[-2])
0xa82: Pop(0)
0xa83: PushEmpty(object, int, float, cvector, cvector)
0xa84: Stack[-5] = Stack[-26]
0xa85: Stack[-4] = Stack[-25]
0xa86: Stack[-3] = Stack[-24]
0xa87: Stack[-2] = Stack[-6]
0xa88: Stack[-1] = -Stack[-14]; Pop(0);
0xa89: Call2 0xa92

0xa8a: Pop(5)
0xa8b: Return(); Pop(18)

0xa8c: Stack[-8] = 0
0xa8d: PushEmpty(object)
0xa8e: Stack[-1] = Stack[-22]
0xa8f: Call2 0xa22

0xa90: Pop(1)
0xa91: Return(); Pop(18)

0xa92: PushEmpty(object, object, object, object)
0xa93: @ GetScene(Stack[-2])
0xa94: Pop(0)
0xa95: Push("scripted")
0xa96: Push("blood_dir.xml")
0xa97: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xa98: Pop(2)
0xa99: PushEmpty(object)
0xa9a: Stack[-1] = Stack[-10]
0xa9b: Call2 0xa22

0xa9c: Pop(1)
0xa9d: Return(); Pop(4)

0xa9e: Stack[-1] = 0
0xa9f: Stack[-2] = 0
0xaa0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xaa1: @@ GetPosition(Stack[-3])
0xaa2: Pop(0)
0xaa3: @ GetPosition(Stack[-2])
0xaa4: Pop(0)
0xaa5: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xaa6: Push(CvectorIndex(Stack[-1], 0))
0xaa7: Push(CvectorIndex(Stack[-2], 2))
0xaa8: @ RotateAsync(Stack[-2], Stack[-1])
0xaa9: Pop(2)
0xaaa: Return(); Pop(6)

0xaab: PushEmpty(bool, bool)
0xaac: @ IsLoaded(Stack[-1])
0xaad: Pop(0)
0xaae: Stack[-3] = Stack[-1]
0xaaf: Return(); Pop(2)

0xab0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xab1: @@ GetPosition(Stack[-8])
0xab2: Pop(0)
0xab3: @@ GetEyesHeight(Stack[-9])
0xab4: Pop(0)
0xab5: Push(CvectorIndex(Stack[-8], 1))
0xab6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xab7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xab8: @ GetPosition(Stack[-7])
0xab9: Pop(0)
0xaba: @ GetEyesHeight(Stack[-9])
0xabb: Pop(0)
0xabc: Push(CvectorIndex(Stack[-7], 1))
0xabd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xabe: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xabf: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xac0: Push(CvectorIndex(Stack[-6], 1))
0xac1: Stack[-1] = (int) 0
0xac2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xac3: Pop(0); Push(Stack[-6] | Stack[-6]);
0xac4: Pop(1); Push(Sqrt(Stack[-1]))
0xac5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xac6: Stack[-5] = -Stack[-6]; Pop(0);
0xac7: Pop(0); Push(Stack[-6] * Stack[-19]);
0xac8: PushEmpty(cvector, cvector)
0xac9: Push(CVector(0.0, 1.0, 0.0))
0xaca: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xacb: Call2 0xb7f

0xacc: Pop(1)
0xacd: Push((int) 25)
0xace: Pop(2); Push(Stack[-2] * Stack[-1]);
0xacf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xad0: Push(CVector(0.0, 10.0, 0.0))
0xad1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xad2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xad3: @ IsOverrideActive(Stack[-2])
0xad4: Pop(0)
0xad5: Push(Stack[-2])
0xad6: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad7: Stack[-21] = (bool) 0
0xad8: Return(); Pop(18)

0xad9: @ StopWorld()
0xada: Pop(0)
0xadb: @ CameraTransit(Stack[-3], Stack[-5])
0xadc: Pop(0)
0xadd: Push(CvectorIndex(Stack[-4], 0))
0xade: Push(CvectorIndex(Stack[-5], 2))
0xadf: @ Rotate(Stack[-2], Stack[-1])
0xae0: Pop(2)
0xae1: PushEmpty(bool)
0xae2: Call2 0xe28

0xae3: Pop(0)
0xae4: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xae5: GOTO 0xaee

0xae6: Push("head")
0xae7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xae8: Pop(1)
0xae9: Push(Stack[-1])
0xaea: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xaeb: Push("head")
0xaec: @ LookAsyncCamera(Stack[-1])
0xaed: Pop(1)
0xaee: @ CameraWaitForPlayFinish()
0xaef: Pop(0)
0xaf0: @ ResumeWorld()
0xaf1: Pop(0)
0xaf2: Stack[-21] = (bool) 1
0xaf3: Return(); Pop(18)

0xaf4: PushEmpty(bool, bool)
0xaf5: @ CameraSwitchToNormal()
0xaf6: Pop(0)
0xaf7: PushEmpty(bool)
0xaf8: Call2 0xe28

0xaf9: Pop(0)
0xafa: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xafb: GOTO 0xb04

0xafc: Push("head")
0xafd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xafe: Pop(1)
0xaff: Push(Stack[-1])
0xb00: IF (Stack[-1] == 0) GOTO 0xb04; Pop(1)

0xb01: Push("head")
0xb02: @ UnlookAsync(Stack[-1])
0xb03: Pop(1)
0xb04: Return(); Pop(2)

0xb05: PushEmpty(bool, float, float, bool, float, float)
0xb06: @ lshHasAnimation(Stack[-3], Stack[-7])
0xb07: Pop(0)
0xb08: Push(Stack[-3])
0xb09: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb0a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xb0b: Pop(0)
0xb0c: Push((bool) 0)
0xb0d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb0e: Pop(1)
0xb0f: GOTO 0xb14

0xb10: Push("Can't find lsh animation : ")
0xb11: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb12: @ Trace(Stack[-1])
0xb13: Pop(1)
0xb14: Return(); Pop(6)

0xb15: PushEmpty(bool, float, float, bool, float, float)
0xb16: @ lshHasAnimation(Stack[-3], Stack[-8])
0xb17: Pop(0)
0xb18: Push(Stack[-3])
0xb19: IF (Stack[-1] == 0) GOTO 0xb1f; Pop(1)

0xb1a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xb1b: Pop(0)
0xb1c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xb1d: Pop(0)
0xb1e: GOTO 0xb23

0xb1f: Push("Can't find lsh animation : ")
0xb20: Pop(1); Push(Stack[-1] + Stack[-9]);
0xb21: @ Trace(Stack[-1])
0xb22: Pop(1)
0xb23: Return(); Pop(6)

0xb24: PushEmpty(float, cvector, float, cvector)
0xb25: @@ GetEyesHeight(Stack[-2])
0xb26: Pop(0)
0xb27: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xb28: Push(CvectorIndex(Stack[-1], 1))
0xb29: Stack[-1] = Stack[-3]
0xb2a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xb2b: Push("head")
0xb2c: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xb2d: Pop(1)
0xb2e: Return(); Pop(4)

0xb2f: PushEmpty(bool)
0xb30: Call2 0xe28

0xb31: Pop(0)
0xb32: IF (Stack[-1] == 0) GOTO 0xb35; Pop(1)

0xb33: @ lshStopSpeech()
0xb34: Pop(0)
0xb35: Return(); Pop(0)

0xb36: PushEmpty(bool, bool)
0xb37: PushEmpty(bool, int, int)
0xb38: Stack[-2] = Stack[-7]
0xb39: Stack[-1] = Stack[-6]
0xb3a: Call2 0xb9b

0xb3b: Pop(2)
0xb3c: IF (Stack[-1] == 0) GOTO 0xb40; Pop(1)

0xb3d: Push((int) 0)
0xb3e: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xb3f: Pop(1)
0xb40: Return(); Pop(2)

0xb41: PushEmpty(int, bool, int, bool)
0xb42: PushEmpty(bool, int, int)
0xb43: Stack[-2] = Stack[-10]
0xb44: Stack[-1] = Stack[-9]
0xb45: Call2 0xb9b

0xb46: Pop(2)
0xb47: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb48: @ irand(Stack[-2], Stack[-5])
0xb49: Pop(0)
0xb4a: Push((int) 0)
0xb4b: Push((int) 1)
0xb4c: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb4d: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xb4e: Pop(2)
0xb4f: Return(); Pop(4)

0xb50: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xb51: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xb52: Pop(0)
0xb53: Pop(0); Push((bool) Stack[-8] == 0)
0xb54: IF (Stack[-1] == 0) GOTO 0xb69; Pop(1)

0xb55: Stack[-7] = (int) 0
0xb56: Push((int) 1)
0xb57: Pop(1); Push(Stack[-8] + Stack[-1]);
0xb58: Pop(1); Push(Stack[-18] + Stack[-1]);
0xb59: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xb5a: Pop(1)
0xb5b: Pop(0); Push((bool) Stack[-6] == 0)
0xb5c: IF (Stack[-1] == 0) GOTO 0xb5e; Pop(1)

0xb5d: GOTO 0xb61

0xb5e: Push((int) 1)
0xb5f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xb60: GOTO 0xb56

0xb61: Pop(0); Push((bool) Stack[-7] == 0)
0xb62: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb63: Return(); Pop(16)

0xb64: @ irand(Stack[-5], Stack[-7])
0xb65: Pop(0)
0xb66: Push((int) 1)
0xb67: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb68: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xb69: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xb6a: Pop(0)
0xb6b: Push(Stack[-4])
0xb6c: IF (Stack[-1] == 0) GOTO 0xb78; Pop(1)

0xb6d: @ GetEyesHeight(Stack[-3])
0xb6e: Pop(0)
0xb6f: @ GetDirection(Stack[-2])
0xb70: Pop(0)
0xb71: Push((int) 50)
0xb72: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xb73: Push(CvectorIndex(Stack[-1], 1))
0xb74: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xb75: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xb76: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xb77: Pop(0)
0xb78: Return(); Pop(16)

0xb79: PushEmpty(object, object)
0xb7a: @ self(Stack[-1])
0xb7b: Pop(0)
0xb7c: Stack[-3] = Stack[-1]
0xb7d: Return(); Pop(2)

0xb7e: Stack[-1] = 0
0xb7f: PushEmpty(float, float)
0xb80: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb81: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb82: Push((float)0.0)
0xb83: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb84: IF (Stack[-1] == 0) GOTO 0xb87; Pop(1)

0xb85: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xb86: Return(); Pop(2)

0xb87: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb88: Return(); Pop(2)

0xb89: PushEmpty()
0xb8a: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xb8b: IF (Stack[-1] == 0) GOTO 0xb8e; Pop(1)

0xb8c: Stack[-3] = Stack[-2]
0xb8d: GOTO 0xb8f

0xb8e: Stack[-3] = Stack[-1]
0xb8f: Return(); Pop(0)

0xb90: PushEmpty()
0xb91: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xb92: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb93: Stack[-4] = Stack[-2]
0xb94: Return(); Pop(0)

0xb95: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xb96: IF (Stack[-1] == 0) GOTO 0xb99; Pop(1)

0xb97: Stack[-4] = Stack[-1]
0xb98: Return(); Pop(0)

0xb99: Stack[-4] = Stack[-3]
0xb9a: Return(); Pop(0)

0xb9b: PushEmpty(int, int)
0xb9c: @ irand(Stack[-1], Stack[-3])
0xb9d: Pop(0)
0xb9e: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xb9f: Return(); Pop(2)

0xba0: PushEmpty()
0xba1: Push(CvectorIndex(Stack[-2], 0))
0xba2: Push(CvectorIndex(Stack[-2], 0))
0xba3: Pop(2); Push(Stack[-2] * Stack[-1]);
0xba4: Push(CvectorIndex(Stack[-3], 2))
0xba5: Push(CvectorIndex(Stack[-3], 2))
0xba6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xba7: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xba8: Return(); Pop(0)

0xba9: PushEmpty()
0xbaa: Push(CvectorIndex(Stack[-1], 0))
0xbab: Push(CvectorIndex(Stack[-2], 0))
0xbac: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbad: Push(CvectorIndex(Stack[-2], 2))
0xbae: Push(CvectorIndex(Stack[-3], 2))
0xbaf: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbb0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbb1: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xbb2: Return(); Pop(0)

0xbb3: PushEmpty()
0xbb4: PushEmpty(float, cvector, cvector)
0xbb5: Stack[-2] = Stack[-5]
0xbb6: Stack[-1] = Stack[-4]
0xbb7: Call2 0xba0

0xbb8: Pop(2)
0xbb9: PushEmpty(float, cvector)
0xbba: Stack[-1] = Stack[-5]
0xbbb: Call2 0xba9

0xbbc: Pop(1)
0xbbd: PushEmpty(float, cvector)
0xbbe: Stack[-1] = Stack[-5]
0xbbf: Call2 0xba9

0xbc0: Pop(1)
0xbc1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbc2: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xbc3: Return(); Pop(0)

0xbc4: PushEmpty(int, int)
0xbc5: @ GetVariable(Stack[-3], Stack[-1])
0xbc6: Pop(0)
0xbc7: Stack[-4] = Stack[-1]
0xbc8: Return(); Pop(2)

0xbc9: PushEmpty(object, object)
0xbca: @ CreateFloatVector(Stack[-1])
0xbcb: Pop(0)
0xbcc: @@ add(Stack[-3])
0xbcd: Pop(0)
0xbce: Push((int) 15)
0xbcf: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xbd0: Pop(1)
0xbd1: Return(); Pop(2)

0xbd2: Stack[-1] = 0
0xbd3: PushEmpty(float, float)
0xbd4: @ GetGameTime(Stack[-1])
0xbd5: Pop(0)
0xbd6: Push((int) 1)
0xbd7: PushEmpty(int)
0xbd8: Push((int) 24)
0xbd9: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xbda: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xbdb: Return(); Pop(2)

0xbdc: PushEmpty(bool, bool)
0xbdd: @ IsPlayerActor(Stack[-3], Stack[-1])
0xbde: Pop(0)
0xbdf: Push(Stack[-1])
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe4; Pop(1)

0xbe1: Push("attack")
0xbe2: @ PlayGlobalMusic(Stack[-1])
0xbe3: Pop(1)
0xbe4: Return(); Pop(2)

0xbe5: PushEmpty(object, object)
0xbe6: @ GetScene(Stack[-1])
0xbe7: Pop(0)
0xbe8: Push("battle")
0xbe9: PushEmpty(object)
0xbea: Call2 0xb79

0xbeb: Pop(0)
0xbec: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xbed: Pop(2)
0xbee: Return(); Pop(2)

0xbef: Stack[-1] = 0
0xbf0: PushEmpty()
0xbf1: Push("ood1Doberman2_1")
0xbf2: Push((int) 1)
0xbf3: @ SetVariable(Stack[-2], Stack[-1])
0xbf4: Pop(2)
0xbf5: Return(); Pop(0)

0xbf6: PushEmpty()
0xbf7: PushEmpty(int, string)
0xbf8: Stack[-1] = "ood1Doberman2_1"
0xbf9: Call2 0xbc4

0xbfa: Pop(1)
0xbfb: Push((int) 0)
0xbfc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbfd: IF (Stack[-1] == 0) GOTO 0xc00; Pop(1)

0xbfe: Stack[-2] = (bool) 1
0xbff: Return(); Pop(0)

0xc00: Stack[-2] = (bool) 0
0xc01: Return(); Pop(0)

0xc02: PushEmpty(int, int)
0xc03: Push("branch")
0xc04: @ GetVariable(Stack[-1], Stack[-2])
0xc05: Pop(1)
0xc06: Push((int) 0)
0xc07: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc08: IF (Stack[-1] == 0) GOTO 0xc0c; Pop(1)

0xc09: Stack[-3] = (int) 1
0xc0a: Return(); Pop(2)

0xc0b: GOTO 0xc11

0xc0c: Push((int) 1)
0xc0d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0e: IF (Stack[-1] == 0) GOTO 0xc11; Pop(1)

0xc0f: Stack[-3] = (int) 2
0xc10: Return(); Pop(2)

0xc11: Stack[-3] = (int) 3
0xc12: Return(); Pop(2)

0xc13: PushEmpty(int, int)
0xc14: Push("branch")
0xc15: @ GetVariable(Stack[-1], Stack[-2])
0xc16: Pop(1)
0xc17: Stack[-3] = Stack[-1]
0xc18: Return(); Pop(2)

0xc19: PushEmpty()
0xc1a: PushEmpty(int)
0xc1b: Call2 0xc13

0xc1c: Pop(0)
0xc1d: Push((int) 1)
0xc1e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc1f: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc20: @ WorkWithCorpse(Stack[-1])
0xc21: Pop(0)
0xc22: GOTO 0xc25

0xc23: @ Barter(Stack[-1])
0xc24: Pop(0)
0xc25: Return(); Pop(0)

0xc26: PushEmpty(int, bool, int, bool)
0xc27: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xc28: IF (Stack[-1] == 0) GOTO 0xc2d; Pop(1)

0xc29: Push("GenerateMoney: iMin > iMax")
0xc2a: @ Trace(Stack[-1])
0xc2b: Pop(1)
0xc2c: Return(); Pop(4)

0xc2d: Stack[-2] = (int) 0
0xc2e: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xc2f: IF (Stack[-1] == 0) GOTO 0xc34; Pop(1)

0xc30: Pop(0); Push(Stack[-5] - Stack[-6]);
0xc31: @ irand(Stack[-3], Stack[-1])
0xc32: Pop(1)
0xc33: GOTO 0xc38

0xc34: Push((int) 0)
0xc35: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xc36: IF (Stack[-1] == 0) GOTO 0xc38; Pop(1)

0xc37: Return(); Pop(4)

0xc38: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xc39: Push((int) 0)
0xc3a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3b: IF (Stack[-1] == 0) GOTO 0xc3d; Pop(1)

0xc3c: Return(); Pop(4)

0xc3d: PushEmpty(int, string)
0xc3e: Stack[-1] = "Money"
0xc3f: Call2 0xcee

0xc40: Pop(1)
0xc41: Push((int) 0)
0xc42: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xc43: Pop(2)
0xc44: Return(); Pop(4)

0xc45: PushEmpty(object, int, bool, object, int, bool)
0xc46: @ CreateInvItem(Stack[-3])
0xc47: Pop(0)
0xc48: @@ SetItemName(Stack[-7])
0xc49: Pop(0)
0xc4a: Push("Organ")
0xc4b: Push((int) 1)
0xc4c: @@ SetProperty(Stack[-2], Stack[-1])
0xc4d: Pop(2)
0xc4e: @@ GetItemID(Stack[-2])
0xc4f: Pop(0)
0xc50: Push((int) 0)
0xc51: Push((int) 1)
0xc52: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xc53: Pop(2)
0xc54: Return(); Pop(6)

0xc55: Stack[-3] = 0
0xc56: PushEmpty(int)
0xc57: Call2 0xc13

0xc58: Pop(0)
0xc59: Push((int) 1)
0xc5a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xc5b: IF (Stack[-1] == 0) GOTO 0xc5d; Pop(1)

0xc5c: Return(); Pop(0)

0xc5d: PushEmpty(string)
0xc5e: Stack[-1] = "liver"
0xc5f: Call2 0xc45

0xc60: Pop(1)
0xc61: PushEmpty(string)
0xc62: Stack[-1] = "kidney"
0xc63: Call2 0xc45

0xc64: Pop(1)
0xc65: PushEmpty(string)
0xc66: Stack[-1] = "heart"
0xc67: Call2 0xc45

0xc68: Pop(1)
0xc69: PushEmpty(string)
0xc6a: Stack[-1] = "blood"
0xc6b: Call2 0xc45

0xc6c: Pop(1)
0xc6d: Return(); Pop(0)

0xc6e: PushEmpty(bool, bool)
0xc6f: Push((int) 0)
0xc70: @ ClearSubContainer(Stack[-1])
0xc71: Pop(1)
0xc72: PushEmpty(int, int)
0xc73: Stack[-2] = (int) 0
0xc74: Push((int) 10)
0xc75: PushEmpty(int)
0xc76: Call2 0xbd3

0xc77: Pop(0)
0xc78: Push((int) 10)
0xc79: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc7a: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc7b: Call2 0xc26

0xc7c: Pop(2)
0xc7d: PushEmpty(string, int, int)
0xc7e: Stack[-3] = "hook"
0xc7f: Stack[-2] = (int) 1
0xc80: Stack[-1] = (int) 4
0xc81: Call2 0xb36

0xc82: Pop(3)
0xc83: PushEmpty(string, int, int)
0xc84: Stack[-3] = "watch"
0xc85: Stack[-2] = (int) 1
0xc86: Stack[-1] = (int) 10
0xc87: Call2 0xb36

0xc88: Pop(3)
0xc89: Return(); Pop(2)

0xc8a: PushEmpty(int, bool, int, int, bool, int)
0xc8b: Push((int) 0)
0xc8c: @ ClearSubContainer(Stack[-1])
0xc8d: Pop(1)
0xc8e: PushEmpty(int)
0xc8f: Call2 0xbd3

0xc90: Stack[-2] = Stack[-1]
0xc91: Pop(1)
0xc92: Push(Stack[-7])
0xc93: IF (Stack[-1] == 0) GOTO 0xcc0; Pop(1)

0xc94: PushEmpty(string, int, int, int)
0xc95: Stack[-4] = "alpha_pills"
0xc96: Stack[-3] = (int) 1
0xc97: Stack[-2] = (int) 2
0xc98: Stack[-1] = (int) 4
0xc99: Call2 0xb41

0xc9a: Pop(4)
0xc9b: PushEmpty(string, int, int, int)
0xc9c: Stack[-4] = "meradorm"
0xc9d: Stack[-3] = (int) 2
0xc9e: Stack[-2] = (int) 3
0xc9f: Stack[-1] = (int) 3
0xca0: Call2 0xb41

0xca1: Pop(4)
0xca2: Push((int) 3)
0xca3: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xca4: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xca5: PushEmpty(string, int, int)
0xca6: Stack[-3] = "beta_pills"
0xca7: Stack[-2] = (int) 1
0xca8: Stack[-1] = (int) 4
0xca9: Call2 0xb36

0xcaa: Pop(3)
0xcab: Push((int) 8)
0xcac: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xcad: IF (Stack[-1] == 0) GOTO 0xcb6; Pop(1)

0xcae: PushEmpty(string, int, int, int)
0xcaf: Stack[-4] = "monomicin"
0xcb0: Stack[-3] = (int) 1
0xcb1: Stack[-2] = (int) 2
0xcb2: Stack[-1] = (int) 2
0xcb3: Call2 0xb41

0xcb4: Pop(4)
0xcb5: GOTO 0xcbf

0xcb6: Push((int) 4)
0xcb7: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xcb8: IF (Stack[-1] == 0) GOTO 0xcbf; Pop(1)

0xcb9: PushEmpty(string, int, int)
0xcba: Stack[-3] = "monomicin"
0xcbb: Stack[-2] = (int) 1
0xcbc: Stack[-1] = (int) 2
0xcbd: Call2 0xb36

0xcbe: Pop(3)
0xcbf: GOTO 0xced

0xcc0: PushEmpty(string, int, int)
0xcc1: Stack[-3] = "lockpick"
0xcc2: Stack[-2] = (int) 1
0xcc3: Stack[-1] = (int) 4
0xcc4: Call2 0xb36

0xcc5: Pop(3)
0xcc6: PushEmpty(string, int, int)
0xcc7: Stack[-3] = "rifle_ammo"
0xcc8: Stack[-2] = (int) 1
0xcc9: Stack[-1] = (int) 2
0xcca: Call2 0xb36

0xccb: Pop(3)
0xccc: PushEmpty(string, int, int)
0xccd: Stack[-3] = "revolver_ammo"
0xcce: Stack[-2] = (int) 1
0xccf: Stack[-1] = (int) 2
0xcd0: Call2 0xb36

0xcd1: Pop(3)
0xcd2: PushEmpty(string, int, int, int)
0xcd3: Stack[-4] = "samopal_ammo"
0xcd4: Stack[-3] = (int) 1
0xcd5: Stack[-2] = (int) 2
0xcd6: Stack[-1] = (int) 2
0xcd7: Call2 0xb41

0xcd8: Pop(4)
0xcd9: Push((int) 8)
0xcda: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xcdb: IF (Stack[-1] == 0) GOTO 0xce4; Pop(1)

0xcdc: PushEmpty(string, int, int, int)
0xcdd: Stack[-4] = "monomicin"
0xcde: Stack[-3] = (int) 1
0xcdf: Stack[-2] = (int) 2
0xce0: Stack[-1] = (int) 2
0xce1: Call2 0xb41

0xce2: Pop(4)
0xce3: GOTO 0xced

0xce4: Push((int) 4)
0xce5: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xce6: IF (Stack[-1] == 0) GOTO 0xced; Pop(1)

0xce7: PushEmpty(string, int, int)
0xce8: Stack[-3] = "monomicin"
0xce9: Stack[-2] = (int) 1
0xcea: Stack[-1] = (int) 2
0xceb: Call2 0xb36

0xcec: Pop(3)
0xced: Return(); Pop(6)

0xcee: PushEmpty(int, int)
0xcef: @ GetInvItemByName(Stack[-1], Stack[-3])
0xcf0: Pop(0)
0xcf1: Stack[-4] = Stack[-1]
0xcf2: Return(); Pop(2)

0xcf3: PushEmpty()
0xcf4: PushEmpty(object)
0xcf5: Stack[-1] = Stack[-2]
0xcf6: Push(-1, 0); TaskCall(2)
0xcf7: Call2 0x1a5

0xcf8: Pop(-1, 0); TaskReturn
0xcf9: Pop(1)
0xcfa: Return(); Pop(0)

0xcfb: PushEmpty(float, float)
0xcfc: Push("health")
0xcfd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcfe: IF (Stack[-1] == 0) GOTO 0xd07; Pop(1)

0xcff: Push("health")
0xd00: @ GetProperty(Stack[-1], Stack[-2])
0xd01: Pop(1)
0xd02: Push((int) 0)
0xd03: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xd04: IF (Stack[-1] == 0) GOTO 0xd07; Pop(1)

0xd05: @ SignalDeath(Stack[-4])
0xd06: Pop(0)
0xd07: Return(); Pop(2)

0xd08: PushEmpty()
0xd09: PushEmpty(object)
0xd0a: Stack[-1] = Stack[-2]
0xd0b: Call2 0xcf3

0xd0c: Pop(1)
0xd0d: Return(); Pop(0)

0xd0e: PushEmpty()
0xd0f: PushEmpty(object, int, float)
0xd10: Stack[-3] = Stack[-7]
0xd11: Stack[-2] = Stack[-6]
0xd12: Stack[-1] = Stack[-5]
0xd13: Call2 0xa4e

0xd14: Pop(3)
0xd15: Return(); Pop(0)

0xd16: PushEmpty()
0xd17: PushEmpty(object, int, float, cvector, cvector)
0xd18: Stack[-5] = Stack[-11]
0xd19: Stack[-4] = Stack[-10]
0xd1a: Stack[-3] = Stack[-9]
0xd1b: Stack[-2] = Stack[-7]
0xd1c: Stack[-1] = Stack[-6]
0xd1d: Call2 0xa92

0xd1e: Pop(5)
0xd1f: Return(); Pop(0)

0xd20: PushEmpty()
0xd21: Push("unholster")
0xd22: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd23: IF (Stack[-1] == 0) GOTO 0xd2b; Pop(1)

0xd24: PushEmpty(bool, object)
0xd25: Stack[-1] = Stack[-4]
0xd26: Call2 0xdf7

0xd27: Stack[-5] = Stack[-2]
0xd28: Pop(2)
0xd29: Return(); Pop(0)

0xd2a: GOTO 0xd3e

0xd2b: Push("player_shot")
0xd2c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd2d: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xd2e: PushEmpty(bool, object)
0xd2f: Stack[-1] = Stack[-4]
0xd30: Call2 0xdfc

0xd31: Stack[-5] = Stack[-2]
0xd32: Pop(2)
0xd33: Return(); Pop(0)

0xd34: GOTO 0xd3e

0xd35: Push("battle")
0xd36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd37: IF (Stack[-1] == 0) GOTO 0xd3e; Pop(1)

0xd38: PushEmpty(bool, object)
0xd39: Stack[-1] = Stack[-4]
0xd3a: Call2 0xe11

0xd3b: Stack[-5] = Stack[-2]
0xd3c: Pop(2)
0xd3d: Return(); Pop(0)

0xd3e: Stack[-3] = (bool) 0
0xd3f: Return(); Pop(0)

0xd40: PushEmpty()
0xd41: Push("unholster")
0xd42: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd43: IF (Stack[-1] == 0) GOTO 0xd49; Pop(1)

0xd44: PushEmpty(object)
0xd45: Stack[-1] = Stack[-3]
0xd46: Call2 0xdfa

0xd47: Pop(1)
0xd48: GOTO 0xd58

0xd49: Push("player_shot")
0xd4a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4b: IF (Stack[-1] == 0) GOTO 0xd51; Pop(1)

0xd4c: PushEmpty(object)
0xd4d: Stack[-1] = Stack[-3]
0xd4e: Call2 0xe0b

0xd4f: Pop(1)
0xd50: GOTO 0xd58

0xd51: Push("battle")
0xd52: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd53: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd54: PushEmpty(object)
0xd55: Stack[-1] = Stack[-3]
0xd56: Call2 0xe14

0xd57: Pop(1)
0xd58: Return(); Pop(0)

0xd59: PushEmpty(bool, bool)
0xd5a: PushEmpty(bool)
0xd5b: Stack[-1] = (bool) 0
0xd5c: PushEmpty(bool, object)
0xd5d: Stack[-1] = Stack[-6]
0xd5e: Call2 0xdf7

0xd5f: Pop(1)
0xd60: IF (Stack[-1] == 0) GOTO 0xd67; Pop(1)

0xd61: PushEmpty(bool, object)
0xd62: Stack[-1] = Stack[-6]
0xd63: Call2 0x987

0xd64: Pop(1)
0xd65: IF (Stack[-1] == 0) GOTO 0xd67; Pop(1)

0xd66: Stack[-1] = (bool) 1
0xd67: IF (Stack[-1] == 0) GOTO 0xd6e; Pop(1)

0xd68: @@ IsWeaponHolstered(Stack[-1])
0xd69: Pop(0)
0xd6a: Pop(0); Push((bool) Stack[-1] == 0)
0xd6b: IF (Stack[-1] == 0) GOTO 0xd6e; Pop(1)

0xd6c: Stack[-4] = (bool) 1
0xd6d: Return(); Pop(2)

0xd6e: Stack[-4] = (bool) 0
0xd6f: Return(); Pop(2)

0xd70: PushEmpty()
0xd71: PushEmpty(object)
0xd72: Stack[-1] = Stack[-2]
0xd73: Call2 0xdfa

0xd74: Pop(1)
0xd75: Return(); Pop(0)

0xd76: PushEmpty()
0xd77: PushEmpty(bool, object)
0xd78: Stack[-1] = Stack[-3]
0xd79: Call2 0x987

0xd7a: Pop(1)
0xd7b: IF (Stack[-1] == 0) GOTO 0xd82; Pop(1)

0xd7c: PushEmpty(object)
0xd7d: Call2 0xb79

0xd7e: Pop(0)
0xd7f: Push((float)-0.05)
0xd80: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xd81: Pop(2)
0xd82: Return(); Pop(0)

0xd83: PushEmpty(object, object)
0xd84: Push("heal")
0xd85: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd86: IF (Stack[-1] == 0) GOTO 0xd91; Pop(1)

0xd87: Push("player")
0xd88: @ FindActor(Stack[-2], Stack[-1])
0xd89: Pop(1)
0xd8a: PushEmpty(bool, object)
0xd8b: Stack[-1] = Stack[-3]
0xd8c: Call2 0xe1b

0xd8d: Stack[-6] = Stack[-2]
0xd8e: Pop(2)
0xd8f: Return(); Pop(2)

0xd90: Stack[-1] = 0
0xd91: Stack[-4] = (bool) 0
0xd92: Return(); Pop(2)

0xd93: PushEmpty(object, object)
0xd94: Push("heal")
0xd95: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd96: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd97: Push("player")
0xd98: @ FindActor(Stack[-2], Stack[-1])
0xd99: Pop(1)
0xd9a: PushEmpty(object)
0xd9b: Stack[-1] = Stack[-2]
0xd9c: Call2 0xe1e

0xd9d: Pop(1)
0xd9e: Stack[-1] = 0
0xd9f: Return(); Pop(2)

0xda0: PushEmpty(string, string)
0xda1: Stack[-1] = "idle"
0xda2: Push(Stack[-3])
0xda3: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xda4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xda5: Stack[-4] = Stack[-1]
0xda6: Return(); Pop(2)

0xda7: PushEmpty(int, bool, int, bool)
0xda8: Stack[-2] = (int) 0
0xda9: Push("all")
0xdaa: PushEmpty(string, int)
0xdab: Stack[-1] = Stack[-5]
0xdac: Call2 0xda0

0xdad: Pop(1)
0xdae: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xdaf: Pop(2)
0xdb0: Pop(0); Push((bool) Stack[-1] == 0)
0xdb1: IF (Stack[-1] == 0) GOTO 0xdb3; Pop(1)

0xdb2: GOTO 0xdb6

0xdb3: Push((int) 1)
0xdb4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xdb5: GOTO 0xda9

0xdb6: Stack[-5] = Stack[-2]
0xdb7: Return(); Pop(4)

0xdb8: PushEmpty()
0xdb9: PushEmpty(bool)
0xdba: Call2 0xe44

0xdbb: Pop(0)
0xdbc: IF (Stack[-1] == 0) GOTO 0xdbf; Pop(1)

0xdbd: Stack[-2] = (int) 2
0xdbe: GOTO 0xdc0

0xdbf: Stack[-2] = (int) 0
0xdc0: Return(); Pop(0)

0xdc1: PushEmpty()
0xdc2: PushEmpty(object)
0xdc3: Stack[-1] = Stack[-2]
0xdc4: Push(-1, 1); TaskCall(5)
0xdc5: Call2 0x4ac

0xdc6: Pop(-1, 1); TaskReturn
0xdc7: Pop(1)
0xdc8: Return(); Pop(0)

0xdc9: PushEmpty()
0xdca: PushEmpty(bool, object)
0xdcb: Stack[-1] = Stack[-3]
0xdcc: Call2 0xa0a

0xdcd: Pop(1)
0xdce: IF (Stack[-1] == 0) GOTO 0xdd1; Pop(1)

0xdcf: Stack[-2] = (int) 2
0xdd0: GOTO 0xdd2

0xdd1: Stack[-2] = (int) 0
0xdd2: Return(); Pop(0)

0xdd3: PushEmpty()
0xdd4: PushEmpty(object)
0xdd5: Stack[-1] = Stack[-2]
0xdd6: Push(-1, 6); TaskCall(6)
0xdd7: Call2 0x5bf

0xdd8: Pop(-1, 6); TaskReturn
0xdd9: Pop(1)
0xdda: Return(); Pop(0)

0xddb: PushEmpty()
0xddc: PushEmpty(int, object)
0xddd: Stack[-1] = Stack[-4]
0xdde: Call2 0xdc9

0xddf: Stack[-5] = Stack[-2]
0xde0: Pop(2)
0xde1: Return(); Pop(0)

0xde2: PushEmpty()
0xde3: PushEmpty(object)
0xde4: Stack[-1] = Stack[-2]
0xde5: Call2 0xdd3

0xde6: Pop(1)
0xde7: Return(); Pop(0)

0xde8: PushEmpty()
0xde9: Stack[-2] = (int) 2
0xdea: Return(); Pop(0)

0xdeb: PushEmpty()
0xdec: PushEmpty(object)
0xded: Stack[-1] = Stack[-2]
0xdee: Call2 0xe32

0xdef: Pop(1)
0xdf0: Return(); Pop(0)

0xdf1: Return(); Pop(0)

0xdf2: PushEmpty()
0xdf3: Stack[-3] = (int) 0
0xdf4: Return(); Pop(0)

0xdf5: PushEmpty()
0xdf6: Return(); Pop(0)

0xdf7: PushEmpty()
0xdf8: Stack[-2] = (bool) 0
0xdf9: Return(); Pop(0)

0xdfa: PushEmpty()
0xdfb: Return(); Pop(0)

0xdfc: PushEmpty(bool, bool)
0xdfd: @ CanSee(Stack[-1], Stack[-3])
0xdfe: Pop(0)
0xdff: Stack[-4] = (bool) 1
0xe00: Push(Stack[-1])
0xe01: IF (Stack[-1] == 0) GOTO 0xe0a; Pop(1)

0xe02: PushEmpty(float, object)
0xe03: Stack[-1] = Stack[-5]
0xe04: Call2 0x97f

0xe05: Pop(1)
0xe06: Push((int) 2250000)
0xe07: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xe08: IF (Stack[-1] == 0) GOTO 0xe0a; Pop(1)

0xe09: Stack[-4] = (bool) 0
0xe0a: Return(); Pop(2)

0xe0b: PushEmpty()
0xe0c: PushEmpty(object)
0xe0d: Stack[-1] = Stack[-2]
0xe0e: Call2 0xdc1

0xe0f: Pop(1)
0xe10: Return(); Pop(0)

0xe11: PushEmpty()
0xe12: Stack[-2] = (bool) 0
0xe13: Return(); Pop(0)

0xe14: PushEmpty()
0xe15: Return(); Pop(0)

0xe16: PushEmpty()
0xe17: Stack[-2] = (int) 0
0xe18: Return(); Pop(0)

0xe19: PushEmpty()
0xe1a: Return(); Pop(0)

0xe1b: PushEmpty()
0xe1c: Stack[-2] = (bool) 0
0xe1d: Return(); Pop(0)

0xe1e: PushEmpty()
0xe1f: Return(); Pop(0)

0xe20: Stack[-1] = (int) 518097
0xe21: Return(); Pop(0)

0xe22: Stack[-1] = (int) 518096
0xe23: Return(); Pop(0)

0xe24: Stack[-1] = "ui/NPC_Citizen2.png"
0xe25: Return(); Pop(0)

0xe26: Stack[-1] = "ui/NPC_Citizen2_b.png"
0xe27: Return(); Pop(0)

0xe28: Stack[-1] = (bool) 0
0xe29: Return(); Pop(0)

0xe2a: Push(GlobalVars[0])
0xe2b: Stack[-1] = (bool) 0
0xe2c: GlobalVars[0] = Stack[-1]; Pop(1)
0xe2d: PushEmpty(bool)
0xe2e: Stack[-1] = (bool) 1
0xe2f: Call2 0xc8a

0xe30: Pop(1)
0xe31: Return(); Pop(0)

0xe32: PushEmpty(bool, bool)
0xe33: Push(GlobalVars[0])
0xe34: IF (Stack[-1] == 0) GOTO 0xe3f; Pop(1)

0xe35: @ IsOverrideActive(Stack[-1])
0xe36: Pop(0)
0xe37: Pop(0); Push((bool) Stack[-1] == 0)
0xe38: IF (Stack[-1] == 0) GOTO 0xe3d; Pop(1)

0xe39: PushEmpty(object)
0xe3a: Stack[-1] = Stack[-4]
0xe3b: Call2 0xc19

0xe3c: Pop(1)
0xe3d: Return(); Pop(2)

0xe3e: GOTO 0xe43

0xe3f: PushEmpty(object)
0xe40: Stack[-1] = Stack[-4]
0xe41: Call2 0xe65

0xe42: Pop(1)
0xe43: Return(); Pop(2)

0xe44: Stack[-1] = (bool) 0
0xe45: Return(); Pop(0)

0xe46: PushEmpty()
0xe47: Stack[-4] = (bool) 1
0xe48: Return(); Pop(0)

0xe49: PushEmpty()
0xe4a: PushEmpty(bool, object)
0xe4b: Stack[-1] = Stack[-3]
0xe4c: Call2 0x987

0xe4d: Pop(1)
0xe4e: IF (Stack[-1] == 0) GOTO 0xe5a; Pop(1)

0xe4f: PushEmpty(object)
0xe50: Call2 0xb79

0xe51: Pop(0)
0xe52: Push((float)-0.1)
0xe53: Push((bool) 1)
0xe54: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe55: Pop(3)
0xe56: PushEmpty(bool)
0xe57: Stack[-1] = (bool) 1
0xe58: Call2 0xc6e

0xe59: Pop(1)
0xe5a: PushEmpty()
0xe5b: Call2 0xc56

0xe5c: Pop(0)
0xe5d: Push(GlobalVars[0])
0xe5e: Stack[-1] = (bool) 1
0xe5f: GlobalVars[0] = Stack[-1]; Pop(1)
0xe60: Push((int) 50)
0xe61: Push((int) 40)
0xe62: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xe63: Pop(2)
0xe64: Return(); Pop(0)

0xe65: PushEmpty()
0xe66: PushEmpty(int, object)
0xe67: Stack[-1] = Stack[-3]
0xe68: Push(-2, 1); TaskCall(0)
0xe69: Call2 0x0

0xe6a: Pop(-2, 1); TaskReturn
0xe6b: Pop(2)
0xe6c: Return(); Pop(0)

