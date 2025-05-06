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
	ood1Doberman1_1
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

RunOp = 0x278
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x1eb Vars = (object)
		EVENT_6 Op = 0x1f9 Vars = ()
		EVENT_22 Op = 0x272 Vars = (object, int, float, float)
		EVENT_16 Op = 0x274 Vars = (object, string)
		EVENT_41 Op = 0x276 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x290 Vars = (object)
		EVENT_17 Op = 0x2a4 Vars = (object)
		EVENT_30 Op = 0x2bc Vars = (object, object, bool)
		EVENT_40 Op = 0x2d8 Vars = (object)
		EVENT_42 Op = 0x2ec Vars = (object, string)
		EVENT_26 Op = 0x311 Vars = (string)
		EVENT_1 Op = 0x31f Vars = (object)
		EVENT_3 Op = 0x332 Vars = (object)
		EVENT_7 Op = 0x338 Vars = (int)
		EVENT_6 Op = 0x344 Vars = ()
		EVENT_41 Op = 0x35b Vars = (object)
		EVENT_10 Op = 0x3cc Vars = (object)
		EVENT_28 Op = 0x3d0 Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0x3e9 Vars = (object)
		EVENT_17 Op = 0x3fd Vars = (object)
		EVENT_30 Op = 0x415 Vars = (object, object, bool)
		EVENT_40 Op = 0x431 Vars = (object)
		EVENT_42 Op = 0x445 Vars = (object, string)
		EVENT_26 Op = 0x46a Vars = (string)
		EVENT_6 Op = 0x478 Vars = ()
		EVENT_1 Op = 0x47f Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0x51b Vars = (object)
		EVENT_17 Op = 0x52f Vars = (object)
		EVENT_30 Op = 0x547 Vars = (object, object, bool)
		EVENT_40 Op = 0x563 Vars = (object)
		EVENT_42 Op = 0x577 Vars = (object, string)
		EVENT_26 Op = 0x59c Vars = (string)
		EVENT_41 Op = 0x5b5 Vars = (object)
		EVENT_7 Op = 0x5be Vars = (int)
		EVENT_6 Op = 0x5e1 Vars = ()
		EVENT_1 Op = 0x5e8 Vars = (object)
	GTASK_6 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_7 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x89a Vars = ()
		EVENT_7 Op = 0x8d2 Vars = (int)
		EVENT_1 Op = 0x8ed Vars = (object)
		EVENT_2 Op = 0x8fc Vars = (object)
		EVENT_10 Op = 0x982 Vars = (object)
		EVENT_41 Op = 0x98d Vars = (object)

Events:
EVENT_16 Op = 0xd32 Vars = (object, string)
EVENT_41 Op = 0xd3f Vars = (object)
EVENT_22 Op = 0xd45 Vars = (object, int, float, float)
EVENT_43 Op = 0xd4d Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xae7

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xe59

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xe57

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xe5b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xe5d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xc39

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
0x41: Call2 0xb2b

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
0x52: Call2 0xc2d

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0xc27

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xa2

0x5d: Pop(1)
0x5e: Push((int) 532742)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 532995)
0x64: Push((int) 34793)
0x65: Push((int) 34495)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 533000)
0x69: Push((int) 34496)
0x6a: Push((int) 34500)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x84

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0xa2

0x71: Pop(1)
0x72: Push((int) 532746)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 532747)
0x78: Push((int) -1)
0x79: Push((int) 34221)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 532997)
0x7d: Push((int) -1)
0x7e: Push((int) 34497)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0xe5f

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0xb3c

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
0xa4: Call2 0xe5f

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
0xb4: Call2 0xb4c

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0xb66

0xbd: Pop(0)
0xbe: Push((int) 34216)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0xc2d

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0xc27

0xca: Pop(2)
0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0xa2

0xce: Pop(1)
0xcf: Push((int) 532742)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 532995)
0xd5: Push((int) 34793)
0xd6: Push((int) 34495)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 533000)
0xda: Push((int) 34496)
0xdb: Push((int) 34500)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral"
0xe1: Call2 0xa2

0xe2: Pop(1)
0xe3: Push((int) 532746)
0xe4: @@ SetMessage(Stack[-1])
0xe5: Pop(1)
0xe6: @@ ClearReplies()
0xe7: Pop(0)
0xe8: Push((int) 532747)
0xe9: Push((int) -1)
0xea: Push((int) 34221)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Push((int) 532997)
0xee: Push((int) -1)
0xef: Push((int) 34497)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: Push((int) 34793)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call2 0xa2

0xf9: Pop(1)
0xfa: Push((int) 533285)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 533286)
0x100: Push((int) 34496)
0x101: Push((int) 34794)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 533287)
0x105: Push((int) 34796)
0x106: Push((int) 34795)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 34796)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral"
0x10f: Call2 0xa2

0x110: Pop(1)
0x111: Push((int) 533288)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 533293)
0x117: Push((int) 34798)
0x118: Push((int) 34802)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 533294)
0x11c: Push((int) 34496)
0x11d: Push((int) 34803)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 34496)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral"
0x126: Call2 0xa2

0x127: Pop(1)
0x128: Push((int) 532996)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 533001)
0x12e: Push((int) 34503)
0x12f: Push((int) 34502)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Push((int) 533003)
0x133: Push((int) 34503)
0x134: Push((int) 34504)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: Push((int) 34503)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral"
0x13d: Call2 0xa2

0x13e: Pop(1)
0x13f: Push((int) 533002)
0x140: @@ SetMessage(Stack[-1])
0x141: Pop(1)
0x142: @@ ClearReplies()
0x143: Pop(0)
0x144: Push((int) 532998)
0x145: Push((int) 34499)
0x146: Push((int) 34498)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Push((int) 533005)
0x14a: Push((int) 34508)
0x14b: Push((int) 34507)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: Push((int) 34508)
0x150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x152: PushEmpty(string)
0x153: Stack[-1] = "Neutral"
0x154: Call2 0xa2

0x155: Pop(1)
0x156: Push((int) 533006)
0x157: @@ SetMessage(Stack[-1])
0x158: Pop(1)
0x159: @@ ClearReplies()
0x15a: Pop(0)
0x15b: Push((int) 533007)
0x15c: Push((int) 34499)
0x15d: Push((int) 34509)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: Push((int) 34499)
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Neutral"
0x166: Call2 0xa2

0x167: Pop(1)
0x168: Push((int) 532999)
0x169: @@ SetMessage(Stack[-1])
0x16a: Pop(1)
0x16b: @@ ClearReplies()
0x16c: Pop(0)
0x16d: Push((int) 533295)
0x16e: Push((int) 34807)
0x16f: Push((int) 34806)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Push((int) 533369)
0x173: Push((int) 34869)
0x174: Push((int) 34868)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: Push((int) 34869)
0x179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral"
0x17d: Call2 0xa2

0x17e: Pop(1)
0x17f: Push((int) 533370)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 533371)
0x185: Push((int) 34807)
0x186: Push((int) 34870)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Push((int) 533372)
0x18a: Push((int) -1)
0x18b: Push((int) 34871)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Return(); Pop(0)

0x18f: Push((int) 34807)
0x190: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x192: PushEmpty(string)
0x193: Stack[-1] = "Neutral"
0x194: Call2 0xa2

0x195: Pop(1)
0x196: Push((int) 533296)
0x197: @@ SetMessage(Stack[-1])
0x198: Pop(1)
0x199: @@ ClearReplies()
0x19a: Pop(0)
0x19b: Push((int) 532743)
0x19c: Push((int) 34218)
0x19d: Push((int) 34217)
0x19e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f: Pop(3)
0x1a0: Return(); Pop(0)

0x1a1: Push((int) 34218)
0x1a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a4: PushEmpty(string)
0x1a5: Stack[-1] = "Neutral"
0x1a6: Call2 0xa2

0x1a7: Pop(1)
0x1a8: Push((int) 532744)
0x1a9: @@ SetMessage(Stack[-1])
0x1aa: Pop(1)
0x1ab: @@ ClearReplies()
0x1ac: Pop(0)
0x1ad: Push((int) 533289)
0x1ae: Push((int) 34798)
0x1af: Push((int) 34797)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Push((int) 533291)
0x1b3: Push((int) 34798)
0x1b4: Push((int) 34799)
0x1b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b6: Pop(3)
0x1b7: Return(); Pop(0)

0x1b8: Push((int) 34798)
0x1b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1bb: PushEmpty(string)
0x1bc: Stack[-1] = "Neutral"
0x1bd: Call2 0xa2

0x1be: Pop(1)
0x1bf: Push((int) 533290)
0x1c0: @@ SetMessage(Stack[-1])
0x1c1: Pop(1)
0x1c2: @@ ClearReplies()
0x1c3: Pop(0)
0x1c4: Push((int) 532745)
0x1c5: Push((int) -1)
0x1c6: Push((int) 34219)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Push((int) 533292)
0x1ca: Push((int) -1)
0x1cb: Push((int) 34801)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d0: PushEmpty(bool)
0x1d1: Call2 0xe5f

0x1d2: Pop(0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d4: @ lshStopAnimation()
0x1d5: Pop(0)
0x1d6: GOTO 0x1d9

0x1d7: @ StopAnimation()
0x1d8: Pop(0)
0x1d9: Return(); Pop(0)

0x1da: GOTO 0xb9

0x1db: Return(); Pop(0)

0x1dc: PushEmpty()
0x1dd: EventDisable(0)
0x1de: PushEmpty(object)
0x1df: Stack[-1] = Stack[-2]
0x1e0: Call2 0x1fd

0x1e1: Pop(1)
0x1e2: PushEmpty(object)
0x1e3: Stack[-1] = Stack[-2]
0x1e4: Call2 0xe80

0x1e5: Pop(1)
0x1e6: EventEnable(0)
0x1e7: @ Hold()
0x1e8: Pop(0)
0x1e9: GOTO 0x1e7

0x1ea: Return(); Pop(0)

0x1eb: PushEmpty(int, int)
0x1ec: PushEmpty(int, object)
0x1ed: Stack[-1] = Stack[-5]
0x1ee: Call2 0xe1f

0x1ef: Stack[-3] = Stack[-2]
0x1f0: Pop(2)
0x1f1: Push((int) 0)
0x1f2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f4: PushEmpty(object)
0x1f5: Stack[-1] = Stack[-4]
0x1f6: Call2 0xe22

0x1f7: Pop(1)
0x1f8: Return(); Pop(2)

0x1f9: PushEmpty()
0x1fa: Call2 0xe28

0x1fb: Pop(0)
0x1fc: Return(); Pop(0)

0x1fd: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x1fe: Pop(0); Push((bool) Stack[-21] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: PushEmpty(string)
0x201: Stack[-1] = "fdie"
0x202: Call2 0x258

0x203: Pop(1)
0x204: GOTO 0x257

0x205: @@ GetPosition(Stack[-10])
0x206: Pop(0)
0x207: @ GetPosition(Stack[-9])
0x208: Pop(0)
0x209: @ GetDirection(Stack[-8])
0x20a: Pop(0)
0x20b: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x20c: Push(CvectorIndex(Stack[-7], 0))
0x20d: Push(CvectorIndex(Stack[-9], 0))
0x20e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x20f: Push(CvectorIndex(Stack[-8], 2))
0x210: Push(CvectorIndex(Stack[-10], 2))
0x211: Pop(2); Push(Stack[-2] * Stack[-1]);
0x212: Pop(2); Push(Stack[-2] + Stack[-1]);
0x213: Push((int) 0)
0x214: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x216: Stack[-6] = "fdie"
0x217: GOTO 0x219

0x218: Stack[-6] = "bdie"
0x219: @ RemoveRTEnvelope()
0x21a: Pop(0)
0x21b: @ SetDeathState()
0x21c: Pop(0)
0x21d: @ Stop()
0x21e: Pop(0)
0x21f: @ StopAsync()
0x220: Pop(0)
0x221: Stack[-5] = Stack[-21]
0x222: Push("GetScriptProperty")
0x223: Push((int) 2)
0x224: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x225: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x226: Push("Owner")
0x227: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x228: Pop(1)
0x229: Push(Stack[-4])
0x22a: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22b: Push("Owner")
0x22c: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x22d: Pop(1)
0x22e: Pop(0); Push((bool) Stack[-5] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x230: Stack[-5] = Stack[-21]
0x231: Push("@GetEyesHeight")
0x232: Push((int) 1)
0x233: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x234: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x235: @@ GetEyesHeight(Stack[-2])
0x236: Pop(0)
0x237: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x238: Push(CvectorIndex(Stack[-1], 1))
0x239: Stack[-1] = Stack[-3]
0x23a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x23b: Push("head")
0x23c: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x23d: Pop(1)
0x23e: Stack[-3] = (bool) 1
0x23f: GOTO 0x241

0x240: Stack[-3] = (bool) 0
0x241: PushEmpty(string)
0x242: Stack[-1] = Stack[-7]
0x243: Call2 0xb87

0x244: Pop(1)
0x245: Push("all")
0x246: @ PlayAnimation(Stack[-1], Stack[-7])
0x247: Pop(1)
0x248: @ WaitForAnimEnd()
0x249: Pop(0)
0x24a: Push(Stack[-3])
0x24b: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24c: @ StopAsync()
0x24d: Pop(0)
0x24e: Push("head")
0x24f: @ UnlookAsync(Stack[-1])
0x250: Pop(1)
0x251: Push("all")
0x252: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x253: Pop(1)
0x254: @ RemoveEnvelope()
0x255: Pop(0)
0x256: Stack[-5] = 0
0x257: Return(); Pop(20)

0x258: PushEmpty()
0x259: @ RemoveRTEnvelope()
0x25a: Pop(0)
0x25b: @ SetDeathState()
0x25c: Pop(0)
0x25d: @ Stop()
0x25e: Pop(0)
0x25f: @ StopAsync()
0x260: Pop(0)
0x261: @ StopSecondaryAnimation()
0x262: Pop(0)
0x263: PushEmpty(string)
0x264: Stack[-1] = Stack[-2]
0x265: Call2 0xb87

0x266: Pop(1)
0x267: Push("all")
0x268: @ PlayAnimation(Stack[-1], Stack[-2])
0x269: Pop(1)
0x26a: @ WaitForAnimEnd()
0x26b: Pop(0)
0x26c: Push("all")
0x26d: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x26e: Pop(1)
0x26f: @ RemoveEnvelope()
0x270: Pop(0)
0x271: Return(); Pop(0)

0x272: PushEmpty()
0x273: Return(); Pop(0)

0x274: PushEmpty()
0x275: Return(); Pop(0)

0x276: PushEmpty()
0x277: Return(); Pop(0)

0x278: Push((bool) 1)
0x279: @ SensePlayerOnly(Stack[-1])
0x27a: Pop(1)
0x27b: PushEmpty()
0x27c: Call2 0xe61

0x27d: Pop(0)
0x27e: PushEmpty()
0x27f: Call2 0x287

0x280: Pop(0)
0x281: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x282: PushEmpty()
0x283: Call2 0x38c

0x284: Pop(0)
0x285: GOTO 0x281

0x286: Return(); Pop(0)

0x287: PushEmpty(bool)
0x288: Call2 0xae2

0x289: Pop(0)
0x28a: Pop(1); Push((bool) Stack[-1] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28c: PushEmpty()
0x28d: Call2 0xe28

0x28e: Pop(0)
0x28f: Return(); Pop(0)

0x290: PushEmpty(int, int)
0x291: PushEmpty(int, object)
0x292: Stack[-1] = Stack[-5]
0x293: Call2 0xe1f

0x294: Stack[-3] = Stack[-2]
0x295: Pop(2)
0x296: Push((int) 0)
0x297: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x299: Push((int) 1)
0x29a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29c: PushEmpty()
0x29d: Call2 0x34b

0x29e: Pop(0)
0x29f: PushEmpty(object)
0x2a0: Stack[-1] = Stack[-4]
0x2a1: Call2 0xe22

0x2a2: Pop(1)
0x2a3: Return(); Pop(2)

0x2a4: PushEmpty(int, int)
0x2a5: PushEmpty(object)
0x2a6: Stack[-1] = Stack[-4]
0x2a7: Call2 0xdad

0x2a8: Pop(1)
0x2a9: PushEmpty(int, object)
0x2aa: Stack[-1] = Stack[-5]
0x2ab: Call2 0xe00

0x2ac: Stack[-3] = Stack[-2]
0x2ad: Pop(2)
0x2ae: Push((int) 0)
0x2af: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b1: Push((int) 1)
0x2b2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b4: PushEmpty()
0x2b5: Call2 0x34b

0x2b6: Pop(0)
0x2b7: PushEmpty(object)
0x2b8: Stack[-1] = Stack[-4]
0x2b9: Call2 0xe0a

0x2ba: Pop(1)
0x2bb: Return(); Pop(2)

0x2bc: PushEmpty(int, int)
0x2bd: PushEmpty(bool, object, object, bool)
0x2be: Stack[-3] = Stack[-9]
0x2bf: Stack[-2] = Stack[-8]
0x2c0: Stack[-1] = Stack[-7]
0x2c1: Call2 0xe7d

0x2c2: Pop(3)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2c4: PushEmpty(int, object, bool)
0x2c5: Stack[-2] = Stack[-8]
0x2c6: Stack[-1] = Stack[-6]
0x2c7: Call2 0xe12

0x2c8: Stack[-4] = Stack[-3]
0x2c9: Pop(3)
0x2ca: Push((int) 0)
0x2cb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2cd: Push((int) 1)
0x2ce: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d0: PushEmpty()
0x2d1: Call2 0x34b

0x2d2: Pop(0)
0x2d3: PushEmpty(object)
0x2d4: Stack[-1] = Stack[-6]
0x2d5: Call2 0xe19

0x2d6: Pop(1)
0x2d7: Return(); Pop(2)

0x2d8: PushEmpty(int, int)
0x2d9: PushEmpty(int, object)
0x2da: Stack[-1] = Stack[-5]
0x2db: Call2 0xe4d

0x2dc: Stack[-3] = Stack[-2]
0x2dd: Pop(2)
0x2de: Push((int) 0)
0x2df: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e1: Push((int) 1)
0x2e2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e4: PushEmpty()
0x2e5: Call2 0x34b

0x2e6: Pop(0)
0x2e7: PushEmpty(object)
0x2e8: Stack[-1] = Stack[-4]
0x2e9: Call2 0xe50

0x2ea: Pop(1)
0x2eb: Return(); Pop(2)

0x2ec: PushEmpty(int, int)
0x2ed: PushEmpty(bool, object, string)
0x2ee: Stack[-2] = Stack[-7]
0x2ef: Stack[-1] = Stack[-6]
0x2f0: Call2 0xd57

0x2f1: Pop(2)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f3: PushEmpty()
0x2f4: Call2 0x34b

0x2f5: Pop(0)
0x2f6: PushEmpty(object, string)
0x2f7: Stack[-2] = Stack[-6]
0x2f8: Stack[-1] = Stack[-5]
0x2f9: Call2 0xd77

0x2fa: Pop(2)
0x2fb: GOTO 0x310

0x2fc: PushEmpty(int, string, object)
0x2fd: Stack[-2] = Stack[-6]
0x2fe: Stack[-1] = Stack[-7]
0x2ff: Call2 0xe29

0x300: Stack[-4] = Stack[-3]
0x301: Pop(3)
0x302: Push((int) 0)
0x303: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x305: Push((int) 1)
0x306: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x308: PushEmpty()
0x309: Call2 0x34b

0x30a: Pop(0)
0x30b: PushEmpty(string, object)
0x30c: Stack[-2] = Stack[-5]
0x30d: Stack[-1] = Stack[-6]
0x30e: Call2 0xe2c

0x30f: Pop(2)
0x310: Return(); Pop(2)

0x311: PushEmpty()
0x312: PushEmpty(bool, string)
0x313: Stack[-1] = Stack[-3]
0x314: Call2 0xdba

0x315: Pop(1)
0x316: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x317: PushEmpty()
0x318: Call2 0x34b

0x319: Pop(0)
0x31a: PushEmpty(string)
0x31b: Stack[-1] = Stack[-2]
0x31c: Call2 0xdca

0x31d: Pop(1)
0x31e: Return(); Pop(0)

0x31f: PushEmpty()
0x320: PushEmpty(bool, object)
0x321: Stack[-1] = Stack[-3]
0x322: Call2 0xd90

0x323: Pop(1)
0x324: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x325: PushEmpty()
0x326: Call2 0x34b

0x327: Pop(0)
0x328: PushEmpty(object)
0x329: Stack[-1] = Stack[-2]
0x32a: Call2 0xda7

0x32b: Pop(1)
0x32c: GOTO 0x331

0x32d: PushEmpty(object)
0x32e: Stack[-1] = Stack[-2]
0x32f: Call2 0x364

0x330: Pop(1)
0x331: Return(); Pop(0)

0x332: PushEmpty()
0x333: PushEmpty(object)
0x334: Stack[-1] = Stack[-2]
0x335: Call2 0x364

0x336: Pop(1)
0x337: Return(); Pop(0)

0x338: PushEmpty()
0x339: Push((int) 110)
0x33a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: Return(); Pop(0)

0x33d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x33e: Push((int) 110)
0x33f: @ KillTimer(Stack[-1])
0x340: Pop(1)
0x341: @ ResetAAS()
0x342: Pop(0)
0x343: Return(); Pop(0)

0x344: PushEmpty()
0x345: Call2 0x34b

0x346: Pop(0)
0x347: PushEmpty()
0x348: Call2 0xe28

0x349: Pop(0)
0x34a: Return(); Pop(0)

0x34b: Push((int) 110)
0x34c: @ KillTimer(Stack[-1])
0x34d: Pop(1)
0x34e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x34f: PushEmpty()
0x350: Call2 0x3d3

0x351: Pop(0)
0x352: Return(); Pop(0)

0x353: Push((int) 110)
0x354: @ KillTimer(Stack[-1])
0x355: Pop(1)
0x356: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x357: PushEmpty()
0x358: Call2 0x3da

0x359: Pop(0)
0x35a: Return(); Pop(0)

0x35b: PushEmpty()
0x35c: PushEmpty()
0x35d: Call2 0x34b

0x35e: Pop(0)
0x35f: PushEmpty(object)
0x360: Stack[-1] = Stack[-2]
0x361: Call2 0xd3f

0x362: Pop(1)
0x363: Return(); Pop(0)

0x364: PushEmpty(bool, int, bool, int)
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[-7]
0x367: Call2 0xa41

0x368: Pop(1)
0x369: Pop(1); Push((bool) Stack[-1] == 0)
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: Return(); Pop(4)

0x36c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: Return(); Pop(4)

0x36f: @ IsPlayerActor(Stack[-5], Stack[-2])
0x370: Pop(0)
0x371: Pop(0); Push((bool) Stack[-2] == 0)
0x372: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x373: Return(); Pop(4)

0x374: PushEmpty(int, object)
0x375: Stack[-1] = Stack[-7]
0x376: Call2 0xdef

0x377: Stack[-3] = Stack[-2]
0x378: Pop(2)
0x379: Push((int) 0)
0x37a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x37c: Push((int) 1)
0x37d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37f: PushEmpty()
0x380: Call2 0x353

0x381: Pop(0)
0x382: PushEmpty(object)
0x383: Stack[-1] = Stack[-6]
0x384: Call2 0xdf8

0x385: Pop(1)
0x386: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x387: Push((int) 110)
0x388: Push((float)10.0)
0x389: @ SetTimer(Stack[-2], Stack[-1])
0x38a: Pop(2)
0x38b: Return(); Pop(4)

0x38c: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x38d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x38e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x38f: Push((float)0.5)
0x390: @ rand(Stack[-7], Stack[-1])
0x391: Pop(1)
0x392: @ Sleep(Stack[-6])
0x393: Pop(0)
0x394: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x396: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x397: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x398: @ GetPosition(Stack[-4])
0x399: Pop(0)
0x39a: PushEmpty(float)
0x39b: Call2 0x3c7

0x39c: Pop(0)
0x39d: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x39e: Pop(1)
0x39f: Push(Stack[-3])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: GOTO 0x3a6

0x3a2: Push((int) 1)
0x3a3: @ Sleep(Stack[-1])
0x3a4: Pop(1)
0x3a5: GOTO 0x398

0x3a6: GOTO 0x3a8

0x3a7: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x3a8: PushEmpty(object, cvector)
0x3a9: Stack[-1] = Stack[-7]
0x3aa: Call2 0x3e3

0x3ab: Stack[-4] = Stack[-2]
0x3ac: Pop(2)
0x3ad: Pop(0); Push(( Stack[-2] != 0 )
0x3ae: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3af: @ RotatePath(Stack[-2], Stack[-1])
0x3b0: Pop(0)
0x3b1: Push(Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3b3: PushEmpty(bool)
0x3b4: Call2 0x3e1

0x3b5: Pop(0)
0x3b6: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x3b7: Pop(1)
0x3b8: Stack[-2] = 0
0x3b9: Push(Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bb: PushEmpty()
0x3bc: Push(-0, 0); TaskCall(4)
0x3bd: Call2 0x48d

0x3be: Pop(-0, 0); TaskReturn
0x3bf: Pop(0)
0x3c0: GOTO 0x3c4

0x3c1: Push((int) 1)
0x3c2: @ Sleep(Stack[-1])
0x3c3: Pop(1)
0x3c4: Stack[-2] = 0
0x3c5: GOTO 0x394

0x3c6: Return(); Pop(12)

0x3c7: PushEmpty(float, float)
0x3c8: @ GetCameraFarDistance(Stack[-1])
0x3c9: Pop(0)
0x3ca: Stack[-3] = Stack[-1]
0x3cb: Return(); Pop(2)

0x3cc: PushEmpty()
0x3cd: @ RequestClearPath(Stack[-1])
0x3ce: Pop(0)
0x3cf: Return(); Pop(0)

0x3d0: @ Stop()
0x3d1: Pop(0)
0x3d2: Return(); Pop(0)

0x3d3: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3d4: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x3d5: @ Stop()
0x3d6: Pop(0)
0x3d7: @ StopGroup0()
0x3d8: Pop(0)
0x3d9: Return(); Pop(0)

0x3da: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3db: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x3dc: @ Stop()
0x3dd: Pop(0)
0x3de: @ StopGroup0()
0x3df: Pop(0)
0x3e0: Return(); Pop(0)

0x3e1: Stack[-1] = (bool) 0
0x3e2: Return(); Pop(0)

0x3e3: PushEmpty(object, object)
0x3e4: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x3e5: Pop(0)
0x3e6: Stack[-4] = Stack[-1]
0x3e7: Return(); Pop(2)

0x3e8: Stack[-1] = 0
0x3e9: PushEmpty(int, int)
0x3ea: PushEmpty(int, object)
0x3eb: Stack[-1] = Stack[-5]
0x3ec: Call2 0xe1f

0x3ed: Stack[-3] = Stack[-2]
0x3ee: Pop(2)
0x3ef: Push((int) 0)
0x3f0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f2: Push((int) 1)
0x3f3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f5: PushEmpty()
0x3f6: Call2 0x4de

0x3f7: Pop(0)
0x3f8: PushEmpty(object)
0x3f9: Stack[-1] = Stack[-4]
0x3fa: Call2 0xe22

0x3fb: Pop(1)
0x3fc: Return(); Pop(2)

0x3fd: PushEmpty(int, int)
0x3fe: PushEmpty(object)
0x3ff: Stack[-1] = Stack[-4]
0x400: Call2 0xdad

0x401: Pop(1)
0x402: PushEmpty(int, object)
0x403: Stack[-1] = Stack[-5]
0x404: Call2 0xe00

0x405: Stack[-3] = Stack[-2]
0x406: Pop(2)
0x407: Push((int) 0)
0x408: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x40a: Push((int) 1)
0x40b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x40c: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40d: PushEmpty()
0x40e: Call2 0x4de

0x40f: Pop(0)
0x410: PushEmpty(object)
0x411: Stack[-1] = Stack[-4]
0x412: Call2 0xe0a

0x413: Pop(1)
0x414: Return(); Pop(2)

0x415: PushEmpty(int, int)
0x416: PushEmpty(bool, object, object, bool)
0x417: Stack[-3] = Stack[-9]
0x418: Stack[-2] = Stack[-8]
0x419: Stack[-1] = Stack[-7]
0x41a: Call2 0xe7d

0x41b: Pop(3)
0x41c: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x41d: PushEmpty(int, object, bool)
0x41e: Stack[-2] = Stack[-8]
0x41f: Stack[-1] = Stack[-6]
0x420: Call2 0xe12

0x421: Stack[-4] = Stack[-3]
0x422: Pop(3)
0x423: Push((int) 0)
0x424: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x426: Push((int) 1)
0x427: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x429: PushEmpty()
0x42a: Call2 0x4de

0x42b: Pop(0)
0x42c: PushEmpty(object)
0x42d: Stack[-1] = Stack[-6]
0x42e: Call2 0xe19

0x42f: Pop(1)
0x430: Return(); Pop(2)

0x431: PushEmpty(int, int)
0x432: PushEmpty(int, object)
0x433: Stack[-1] = Stack[-5]
0x434: Call2 0xe4d

0x435: Stack[-3] = Stack[-2]
0x436: Pop(2)
0x437: Push((int) 0)
0x438: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x43a: Push((int) 1)
0x43b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x43c: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43d: PushEmpty()
0x43e: Call2 0x4de

0x43f: Pop(0)
0x440: PushEmpty(object)
0x441: Stack[-1] = Stack[-4]
0x442: Call2 0xe50

0x443: Pop(1)
0x444: Return(); Pop(2)

0x445: PushEmpty(int, int)
0x446: PushEmpty(bool, object, string)
0x447: Stack[-2] = Stack[-7]
0x448: Stack[-1] = Stack[-6]
0x449: Call2 0xd57

0x44a: Pop(2)
0x44b: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x44c: PushEmpty()
0x44d: Call2 0x4de

0x44e: Pop(0)
0x44f: PushEmpty(object, string)
0x450: Stack[-2] = Stack[-6]
0x451: Stack[-1] = Stack[-5]
0x452: Call2 0xd77

0x453: Pop(2)
0x454: GOTO 0x469

0x455: PushEmpty(int, string, object)
0x456: Stack[-2] = Stack[-6]
0x457: Stack[-1] = Stack[-7]
0x458: Call2 0xe29

0x459: Stack[-4] = Stack[-3]
0x45a: Pop(3)
0x45b: Push((int) 0)
0x45c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x45e: Push((int) 1)
0x45f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x460: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x461: PushEmpty()
0x462: Call2 0x4de

0x463: Pop(0)
0x464: PushEmpty(string, object)
0x465: Stack[-2] = Stack[-5]
0x466: Stack[-1] = Stack[-6]
0x467: Call2 0xe2c

0x468: Pop(2)
0x469: Return(); Pop(2)

0x46a: PushEmpty()
0x46b: PushEmpty(bool, string)
0x46c: Stack[-1] = Stack[-3]
0x46d: Call2 0xdba

0x46e: Pop(1)
0x46f: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x470: PushEmpty()
0x471: Call2 0x4de

0x472: Pop(0)
0x473: PushEmpty(string)
0x474: Stack[-1] = Stack[-2]
0x475: Call2 0xdca

0x476: Pop(1)
0x477: Return(); Pop(0)

0x478: PushEmpty()
0x479: Call2 0x4de

0x47a: Pop(0)
0x47b: PushEmpty()
0x47c: Call2 0xe28

0x47d: Pop(0)
0x47e: Return(); Pop(0)

0x47f: PushEmpty()
0x480: PushEmpty(bool, object)
0x481: Stack[-1] = Stack[-3]
0x482: Call2 0xd90

0x483: Pop(1)
0x484: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x485: PushEmpty()
0x486: Call2 0x4de

0x487: Pop(0)
0x488: PushEmpty(object)
0x489: Stack[-1] = Stack[-2]
0x48a: Call2 0xda7

0x48b: Pop(1)
0x48c: Return(); Pop(0)

0x48d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x48e: @ WaitForAnimEnd()
0x48f: Pop(0)
0x490: PushEmpty(bool)
0x491: Call2 0xae2

0x492: Pop(0)
0x493: Pop(1); Push((bool) Stack[-1] == 0)
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: Return(); Pop(14)

0x496: PushEmpty(int)
0x497: Call2 0xdde

0x498: Stack[-8] = Stack[-1]
0x499: Pop(1)
0x49a: Stack[-6] = (int) 0
0x49b: PushEmpty(bool)
0x49c: Stack[-1] = (bool) 0
0x49d: Push((int) 5)
0x49e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a0: PushEmpty(bool)
0x4a1: Call2 0xae2

0x4a2: Pop(0)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a4: Stack[-1] = (bool) 1
0x4a5: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4a6: Push((int) 3)
0x4a7: @ irand(Stack[-6], Stack[-1])
0x4a8: Pop(1)
0x4a9: Push((int) 0)
0x4aa: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4ac: Push(Stack[-7])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4ae: @ irand(Stack[-4], Stack[-7])
0x4af: Pop(0)
0x4b0: Push("all")
0x4b1: PushEmpty(string, int)
0x4b2: Stack[-1] = Stack[-7]
0x4b3: Call2 0xdd7

0x4b4: Pop(1)
0x4b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b6: Pop(2)
0x4b7: @ WaitForAnimEnd(Stack[-3])
0x4b8: Pop(0)
0x4b9: Pop(0); Push((bool) Stack[-3] == 0)
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4bb: GOTO 0x4d9

0x4bc: GOTO 0x4ce

0x4bd: Push((int) 1)
0x4be: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c0: Push((int) 4)
0x4c1: @ rand(Stack[-3], Stack[-1])
0x4c2: Pop(1)
0x4c3: Push((int) 1)
0x4c4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4c5: @ Sleep(Stack[-1], Stack[-2])
0x4c6: Pop(1)
0x4c7: Pop(0); Push((bool) Stack[-1] == 0)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c9: GOTO 0x4d9

0x4ca: GOTO 0x4ce

0x4cb: Push(Stack[-6])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: GOTO 0x4d9

0x4ce: PushEmpty(bool)
0x4cf: Call2 0x4dc

0x4d0: Pop(0)
0x4d1: Pop(1); Push((bool) Stack[-1] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d3: GOTO 0x4d9

0x4d4: @ ResetAAS()
0x4d5: Pop(0)
0x4d6: Push((int) 1)
0x4d7: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4d8: GOTO 0x49b

0x4d9: @ ResetAAS()
0x4da: Pop(0)
0x4db: Return(); Pop(14)

0x4dc: Stack[-1] = (bool) 1
0x4dd: Return(); Pop(0)

0x4de: @ StopAnimation()
0x4df: Pop(0)
0x4e0: @ StopGroup0()
0x4e1: Pop(0)
0x4e2: Return(); Pop(0)

0x4e3: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x4e4: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x4e5: PushEmpty()
0x4e6: Call2 0x516

0x4e7: Pop(0)
0x4e8: @ GetDirection(Stack[-3])
0x4e9: Pop(0)
0x4ea: PushEmpty(cvector, object)
0x4eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ec: Call2 0x9af

0x4ed: Stack[-4] = Stack[-2]
0x4ee: Pop(2)
0x4ef: PushEmpty(float, cvector, cvector)
0x4f0: Stack[-2] = Stack[-6]
0x4f1: Stack[-1] = Stack[-5]
0x4f2: Call2 0xbea

0x4f3: Pop(2)
0x4f4: Push((int) 0)
0x4f5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4f7: PushEmpty(object)
0x4f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f9: Call2 0xad7

0x4fa: Pop(1)
0x4fb: Stack[-1] = (bool) 1
0x4fc: GOTO 0x500

0x4fd: Push((float)1.5)
0x4fe: @ Sleep(Stack[-1], Stack[-2])
0x4ff: Pop(1)
0x500: Push(Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x502: PushEmpty(object)
0x503: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x504: Call2 0xad7

0x505: Pop(1)
0x506: Push((int) 111)
0x507: Push((float)0.5)
0x508: @ SetTimer(Stack[-2], Stack[-1])
0x509: Pop(2)
0x50a: Push((float)5.0)
0x50b: @ Sleep(Stack[-1])
0x50c: Pop(1)
0x50d: Push((int) 111)
0x50e: @ KillTimer(Stack[-1])
0x50f: Pop(1)
0x510: @ StopAsync()
0x511: Pop(0)
0x512: Push("head")
0x513: @ UnlookAsync(Stack[-1])
0x514: Pop(1)
0x515: Return(); Pop(6)

0x516: PushEmpty(object)
0x517: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x518: Call2 0xb5b

0x519: Pop(1)
0x51a: Return(); Pop(0)

0x51b: PushEmpty(int, int)
0x51c: PushEmpty(int, object)
0x51d: Stack[-1] = Stack[-5]
0x51e: Call2 0xe1f

0x51f: Stack[-3] = Stack[-2]
0x520: Pop(2)
0x521: Push((int) 0)
0x522: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x523: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x524: Push((int) 1)
0x525: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x526: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x527: PushEmpty()
0x528: Call2 0x5aa

0x529: Pop(0)
0x52a: PushEmpty(object)
0x52b: Stack[-1] = Stack[-4]
0x52c: Call2 0xe22

0x52d: Pop(1)
0x52e: Return(); Pop(2)

0x52f: PushEmpty(int, int)
0x530: PushEmpty(object)
0x531: Stack[-1] = Stack[-4]
0x532: Call2 0xdad

0x533: Pop(1)
0x534: PushEmpty(int, object)
0x535: Stack[-1] = Stack[-5]
0x536: Call2 0xe00

0x537: Stack[-3] = Stack[-2]
0x538: Pop(2)
0x539: Push((int) 0)
0x53a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x53c: Push((int) 1)
0x53d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53f: PushEmpty()
0x540: Call2 0x5aa

0x541: Pop(0)
0x542: PushEmpty(object)
0x543: Stack[-1] = Stack[-4]
0x544: Call2 0xe0a

0x545: Pop(1)
0x546: Return(); Pop(2)

0x547: PushEmpty(int, int)
0x548: PushEmpty(bool, object, object, bool)
0x549: Stack[-3] = Stack[-9]
0x54a: Stack[-2] = Stack[-8]
0x54b: Stack[-1] = Stack[-7]
0x54c: Call2 0xe7d

0x54d: Pop(3)
0x54e: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x54f: PushEmpty(int, object, bool)
0x550: Stack[-2] = Stack[-8]
0x551: Stack[-1] = Stack[-6]
0x552: Call2 0xe12

0x553: Stack[-4] = Stack[-3]
0x554: Pop(3)
0x555: Push((int) 0)
0x556: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x558: Push((int) 1)
0x559: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55b: PushEmpty()
0x55c: Call2 0x5aa

0x55d: Pop(0)
0x55e: PushEmpty(object)
0x55f: Stack[-1] = Stack[-6]
0x560: Call2 0xe19

0x561: Pop(1)
0x562: Return(); Pop(2)

0x563: PushEmpty(int, int)
0x564: PushEmpty(int, object)
0x565: Stack[-1] = Stack[-5]
0x566: Call2 0xe4d

0x567: Stack[-3] = Stack[-2]
0x568: Pop(2)
0x569: Push((int) 0)
0x56a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x56c: Push((int) 1)
0x56d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x56f: PushEmpty()
0x570: Call2 0x5aa

0x571: Pop(0)
0x572: PushEmpty(object)
0x573: Stack[-1] = Stack[-4]
0x574: Call2 0xe50

0x575: Pop(1)
0x576: Return(); Pop(2)

0x577: PushEmpty(int, int)
0x578: PushEmpty(bool, object, string)
0x579: Stack[-2] = Stack[-7]
0x57a: Stack[-1] = Stack[-6]
0x57b: Call2 0xd57

0x57c: Pop(2)
0x57d: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x57e: PushEmpty()
0x57f: Call2 0x5aa

0x580: Pop(0)
0x581: PushEmpty(object, string)
0x582: Stack[-2] = Stack[-6]
0x583: Stack[-1] = Stack[-5]
0x584: Call2 0xd77

0x585: Pop(2)
0x586: GOTO 0x59b

0x587: PushEmpty(int, string, object)
0x588: Stack[-2] = Stack[-6]
0x589: Stack[-1] = Stack[-7]
0x58a: Call2 0xe29

0x58b: Stack[-4] = Stack[-3]
0x58c: Pop(3)
0x58d: Push((int) 0)
0x58e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x58f: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x590: Push((int) 1)
0x591: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x592: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x593: PushEmpty()
0x594: Call2 0x5aa

0x595: Pop(0)
0x596: PushEmpty(string, object)
0x597: Stack[-2] = Stack[-5]
0x598: Stack[-1] = Stack[-6]
0x599: Call2 0xe2c

0x59a: Pop(2)
0x59b: Return(); Pop(2)

0x59c: PushEmpty()
0x59d: PushEmpty(bool, string)
0x59e: Stack[-1] = Stack[-3]
0x59f: Call2 0xdba

0x5a0: Pop(1)
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a2: PushEmpty()
0x5a3: Call2 0x5aa

0x5a4: Pop(0)
0x5a5: PushEmpty(string)
0x5a6: Stack[-1] = Stack[-2]
0x5a7: Call2 0xdca

0x5a8: Pop(1)
0x5a9: Return(); Pop(0)

0x5aa: @ StopGroup0()
0x5ab: Pop(0)
0x5ac: @ StopAsync()
0x5ad: Pop(0)
0x5ae: Push("head")
0x5af: @ UnlookAsync(Stack[-1])
0x5b0: Pop(1)
0x5b1: Push((int) 111)
0x5b2: @ KillTimer(Stack[-1])
0x5b3: Pop(1)
0x5b4: Return(); Pop(0)

0x5b5: PushEmpty()
0x5b6: PushEmpty()
0x5b7: Call2 0x5aa

0x5b8: Pop(0)
0x5b9: PushEmpty(object)
0x5ba: Stack[-1] = Stack[-2]
0x5bb: Call2 0xd3f

0x5bc: Pop(1)
0x5bd: Return(); Pop(0)

0x5be: PushEmpty(cvector, cvector, cvector, cvector)
0x5bf: Push((int) 111)
0x5c0: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c2: Return(); Pop(4)

0x5c3: PushEmpty(bool, object)
0x5c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c5: Call2 0xa41

0x5c6: Pop(1)
0x5c7: Pop(1); Push((bool) Stack[-1] == 0)
0x5c8: IF (Stack[-1] == 0) GOTO 0x5cd; Pop(1)

0x5c9: PushEmpty()
0x5ca: Call2 0x5aa

0x5cb: Pop(0)
0x5cc: Return(); Pop(4)

0x5cd: @ GetDirection(Stack[-2])
0x5ce: Pop(0)
0x5cf: PushEmpty(cvector, object)
0x5d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d1: Call2 0x9af

0x5d2: Stack[-3] = Stack[-2]
0x5d3: Pop(2)
0x5d4: PushEmpty(float, cvector, cvector)
0x5d5: Stack[-2] = Stack[-5]
0x5d6: Stack[-1] = Stack[-4]
0x5d7: Call2 0xbea

0x5d8: Pop(2)
0x5d9: Push((float)0.5)
0x5da: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x5db: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5dc: PushEmpty(object)
0x5dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5de: Call2 0xad7

0x5df: Pop(1)
0x5e0: Return(); Pop(4)

0x5e1: PushEmpty()
0x5e2: Call2 0x5aa

0x5e3: Pop(0)
0x5e4: PushEmpty()
0x5e5: Call2 0xe28

0x5e6: Pop(0)
0x5e7: Return(); Pop(0)

0x5e8: PushEmpty()
0x5e9: PushEmpty(bool, object)
0x5ea: Stack[-1] = Stack[-3]
0x5eb: Call2 0xd90

0x5ec: Pop(1)
0x5ed: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5ee: PushEmpty()
0x5ef: Call2 0x5aa

0x5f0: Pop(0)
0x5f1: PushEmpty(object)
0x5f2: Stack[-1] = Stack[-2]
0x5f3: Call2 0xda7

0x5f4: Pop(1)
0x5f5: Return(); Pop(0)

0x5f6: PushEmpty()
0x5f7: PushEmpty(object, bool, float)
0x5f8: Stack[-3] = Stack[-4]
0x5f9: Stack[-2] = (bool) 1
0x5fa: Stack[-1] = (float) 180.0
0x5fb: Call2 0x604

0x5fc: Pop(3)
0x5fd: Return(); Pop(0)

0x5fe: PushEmpty()
0x5ff: Stack[-3] = (float) 0.03
0x600: Return(); Pop(0)

0x601: PushEmpty()
0x602: Stack[-3] = (int) 0
0x603: Return(); Pop(0)

0x604: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x605: PushEmpty()
0x606: Call2 0x6e9

0x607: Pop(0)
0x608: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x609: Push("@GetAttackDistance")
0x60a: Push((int) 1)
0x60b: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x60c: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x60d: @@ GetAttackDistance(Stack[-11])
0x60e: Pop(0)
0x60f: Push((int) 50)
0x610: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x611: GOTO 0x613

0x612: Stack[-11] = Stack[-23]
0x613: Push((int) 150)
0x614: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x615: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x616: Stack[-11] = (int) 150
0x617: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x618: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x619: @ IsPlayerActor(Stack[-0], Stack[-8])
0x61a: Pop(0)
0x61b: Push(Stack[-8])
0x61c: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x61d: Push("attack")
0x61e: @ PlayGlobalMusic(Stack[-1])
0x61f: Pop(1)
0x620: PushEmpty(object)
0x621: Call2 0xbb0

0x622: Pop(0)
0x623: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x624: Pop(1)
0x625: Push(Stack[-24])
0x626: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x627: Stack[-7] = (bool) 0
0x628: GOTO 0x62a

0x629: Stack[-7] = (bool) 1
0x62a: Push((float)400.0)
0x62b: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x62c: PushEmpty(bool)
0x62d: Stack[-1] = (bool) 0
0x62e: PushEmpty(bool, object)
0x62f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x630: Call2 0xa41

0x631: Pop(1)
0x632: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x633: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x634: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x635: Stack[-1] = (bool) 1
0x636: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x637: PushEmpty()
0x638: Call2 0x886

0x639: Pop(0)
0x63a: @@ GetPFPosition(Stack[-10])
0x63b: Pop(0)
0x63c: @ GetPFPosition(Stack[-9])
0x63d: Pop(0)
0x63e: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x63f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x640: Pop(0); Push(Stack[-6] * Stack[-6]);
0x641: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x643: PushEmpty(bool, object, float, float, bool, bool)
0x644: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x645: Stack[-4] = Stack[-17]
0x646: Stack[-3] = (float) 3000.0
0x647: Stack[-2] = (bool) 1
0x648: Stack[-1] = (bool) 0
0x649: Push(-6, 3); TaskCall(7)
0x64a: Call2 0x8a1

0x64b: Pop(-6, 3); TaskReturn
0x64c: Pop(5)
0x64d: Pop(1); Push((bool) Stack[-1] == 0)
0x64e: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64f: GOTO 0x6d8

0x650: Stack[-7] = (bool) 0
0x651: GOTO 0x6d7

0x652: Pop(0); Push(Stack[-23] * Stack[-23]);
0x653: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x655: @@ GetPFPosition(Stack[-3])
0x656: Pop(0)
0x657: @ CanReachByPF(Stack[-2], Stack[-3])
0x658: Pop(0)
0x659: Pop(0); Push((bool) Stack[-2] == 0)
0x65a: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x65b: PushEmpty(bool, object, float, float, bool, bool)
0x65c: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x65d: Stack[-4] = Stack[-17]
0x65e: Stack[-3] = (float) 3000.0
0x65f: Stack[-2] = (bool) 1
0x660: Stack[-1] = (bool) 0
0x661: Push(-6, 3); TaskCall(7)
0x662: Call2 0x8a1

0x663: Pop(-6, 3); TaskReturn
0x664: Pop(5)
0x665: Pop(1); Push((bool) Stack[-1] == 0)
0x666: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x667: GOTO 0x6d8

0x668: Stack[-7] = (bool) 0
0x669: GOTO 0x62c

0x66a: Pop(0); Push((bool) Stack[-7] == 0)
0x66b: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x66c: PushEmpty(object)
0x66d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x66e: Call2 0xad7

0x66f: Pop(1)
0x670: Push("all")
0x671: Push("attack_on")
0x672: @ PlayAnimation(Stack[-2], Stack[-1])
0x673: Pop(2)
0x674: @ WaitForAnimEnd()
0x675: Pop(0)
0x676: PushEmpty()
0x677: Call2 0x886

0x678: Pop(0)
0x679: @ StopAsync()
0x67a: Pop(0)
0x67b: Stack[-7] = (bool) 1
0x67c: PushEmpty(bool, object)
0x67d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x67e: Call2 0xa41

0x67f: Pop(1)
0x680: Pop(1); Push((bool) Stack[-1] == 0)
0x681: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x682: GOTO 0x6d8

0x683: @ rand(Stack[-1])
0x684: Pop(0)
0x685: PushEmpty(bool)
0x686: Stack[-1] = (bool) 1
0x687: Push((float)0.25)
0x688: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68a: PushEmpty(bool)
0x68b: Call2 0x85b

0x68c: Pop(0)
0x68d: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68e: Stack[-1] = (bool) 0
0x68f: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x690: @ Face(Stack[-0])
0x691: Pop(0)
0x692: PushEmpty()
0x693: Call2 0x88d

0x694: Pop(0)
0x695: Push("all")
0x696: Push("attack_stay")
0x697: @ PlayAnimation(Stack[-2], Stack[-1])
0x698: Pop(2)
0x699: PushEmpty(bool, float)
0x69a: Stack[-1] = Stack[-25]
0x69b: Call2 0x7d7

0x69c: Pop(2)
0x69d: @ StopAsync()
0x69e: Pop(0)
0x69f: GOTO 0x6ce

0x6a0: @ Face(Stack[-0])
0x6a1: Pop(0)
0x6a2: Push("all")
0x6a3: Push("fjump")
0x6a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x6a5: Pop(2)
0x6a6: @ WaitForAnimEnd()
0x6a7: Pop(0)
0x6a8: PushEmpty()
0x6a9: Call2 0x886

0x6aa: Pop(0)
0x6ab: Push(CVector(0.0, 0.0, 0.0))
0x6ac: @ SetSpeed(Stack[-1])
0x6ad: Pop(1)
0x6ae: @ Stop()
0x6af: Pop(0)
0x6b0: @ StopAsync()
0x6b1: Pop(0)
0x6b2: PushEmpty(bool)
0x6b3: Call2 0x85b

0x6b4: Pop(0)
0x6b5: Pop(1); Push((bool) Stack[-1] == 0)
0x6b6: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6b7: PushEmpty(bool, object)
0x6b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b9: Call2 0xa41

0x6ba: Pop(1)
0x6bb: Pop(1); Push((bool) Stack[-1] == 0)
0x6bc: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bd: GOTO 0x6d8

0x6be: @@ GetPFPosition(Stack[-10])
0x6bf: Pop(0)
0x6c0: @ GetPFPosition(Stack[-9])
0x6c1: Pop(0)
0x6c2: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x6c3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x6c4: Pop(0); Push(Stack[-23] * Stack[-23]);
0x6c5: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6c7: PushEmpty(bool, float)
0x6c8: Stack[-1] = Stack[-25]
0x6c9: Call2 0x733

0x6ca: Pop(1)
0x6cb: Pop(1); Push((bool) Stack[-1] == 0)
0x6cc: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cd: GOTO 0x6d8

0x6ce: GOTO 0x6d7

0x6cf: PushEmpty(bool, float)
0x6d0: Stack[-1] = Stack[-25]
0x6d1: Call2 0x733

0x6d2: Pop(1)
0x6d3: Pop(1); Push((bool) Stack[-1] == 0)
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d5: GOTO 0x6d8

0x6d6: Stack[-7] = (bool) 1
0x6d7: GOTO 0x62c

0x6d8: @ WaitForAnimEnd()
0x6d9: Pop(0)
0x6da: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6db: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6dc: Return(); Pop(22)

0x6dd: Push("all")
0x6de: Push("attack_off")
0x6df: @ PlayAnimation(Stack[-2], Stack[-1])
0x6e0: Pop(2)
0x6e1: @ WaitForAnimEnd()
0x6e2: Pop(0)
0x6e3: Push(Stack[-8])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e5: Push((float)2.0)
0x6e6: @ Sleep(Stack[-1])
0x6e7: Pop(1)
0x6e8: Return(); Pop(22)

0x6e9: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x6ea: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x6eb: Push("all")
0x6ec: Push("attack_begin")
0x6ed: Push((int) 1)
0x6ee: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x6ef: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6f0: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x6f1: Pop(2)
0x6f2: Pop(0); Push((bool) Stack[-3] == 0)
0x6f3: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6f4: GOTO 0x6f8

0x6f5: Push((int) 1)
0x6f6: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x6f7: GOTO 0x6eb

0x6f8: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x6f9: Push("attack")
0x6fa: Push((int) 1)
0x6fb: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x6fc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6fd: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x6fe: Pop(1)
0x6ff: Pop(0); Push((bool) Stack[-2] == 0)
0x700: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x701: GOTO 0x705

0x702: Push((int) 1)
0x703: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x704: GOTO 0x6f9

0x705: Push("all")
0x706: Push("bjump")
0x707: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x708: Pop(2)
0x709: Push(CvectorIndex(Stack[-1], 2))
0x70a: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x70b: Return(); Pop(6)

0x70c: PushEmpty(object, float, float, object, float, float)
0x70d: Push((float)0.9)
0x70e: Pop(1); Push(Stack[-9] * Stack[-1]);
0x70f: @ GetVictim(Stack[-1], Stack[-4])
0x710: Pop(1)
0x711: @ ReportAttack(Stack[-0])
0x712: Pop(0)
0x713: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x714: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x715: PushEmpty(float, object, int)
0x716: Stack[-2] = Stack[-6]
0x717: Stack[-1] = Stack[-10]
0x718: Call2 0x5fe

0x719: Stack[-5] = Stack[-3]
0x71a: Pop(3)
0x71b: PushEmpty(float, object, float, int)
0x71c: Stack[-3] = Stack[-7]
0x71d: Stack[-2] = Stack[-6]
0x71e: PushEmpty(int, object, int)
0x71f: Stack[-2] = Stack[-10]
0x720: Stack[-1] = Stack[-14]
0x721: Call2 0x601

0x722: Stack[-4] = Stack[-3]
0x723: Pop(3)
0x724: Call2 0x9cf

0x725: Stack[-5] = Stack[-4]
0x726: Pop(4)
0x727: PushEmpty(int)
0x728: Call2 0x88b

0x729: Pop(0)
0x72a: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x72b: Pop(1)
0x72c: PushEmpty(object, float)
0x72d: Stack[-2] = Stack[-5]
0x72e: Stack[-1] = Stack[-3]
0x72f: Call2 0x892

0x730: Pop(2)
0x731: Return(); Pop(6)

0x732: Stack[-3] = 0
0x733: PushEmpty(int, bool, int, string, int, bool, int, string)
0x734: PushEmpty()
0x735: Call2 0x886

0x736: Pop(0)
0x737: @ irand(Stack[-4], Stack[-1])
0x738: Pop(0)
0x739: Push((int) 1)
0x73a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x73b: @ Face(Stack[-0])
0x73c: Pop(0)
0x73d: Push((bool) 1)
0x73e: @ SetAttackState(Stack[-1])
0x73f: Pop(1)
0x740: PushEmpty()
0x741: Call2 0xc1c

0x742: Pop(0)
0x743: Push("all")
0x744: Push("attack_begin")
0x745: Pop(1); Push(Stack[-1] + Stack[-6]);
0x746: @ PlayAnimation(Stack[-2], Stack[-1])
0x747: Pop(2)
0x748: @ WaitForAnimEnd()
0x749: Pop(0)
0x74a: PushEmpty()
0x74b: Call2 0x866

0x74c: Pop(0)
0x74d: PushEmpty(bool, object)
0x74e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x74f: Call2 0xa41

0x750: Pop(1)
0x751: Pop(1); Push((bool) Stack[-1] == 0)
0x752: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x753: @ StopAsync()
0x754: Pop(0)
0x755: Stack[-10] = (bool) 0
0x756: Return(); Pop(8)

0x757: PushEmpty(float, int)
0x758: Stack[-2] = Stack[-11]
0x759: Stack[-1] = Stack[-6]
0x75a: Call2 0x70c

0x75b: Pop(2)
0x75c: Push("all")
0x75d: Push("attack_middle")
0x75e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x75f: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x760: Pop(2)
0x761: Push(Stack[-3])
0x762: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x763: PushEmpty()
0x764: Call2 0xc1c

0x765: Pop(0)
0x766: Push("all")
0x767: Push("attack_middle")
0x768: Pop(1); Push(Stack[-1] + Stack[-6]);
0x769: @ PlayAnimation(Stack[-2], Stack[-1])
0x76a: Pop(2)
0x76b: @ WaitForAnimEnd()
0x76c: Pop(0)
0x76d: PushEmpty()
0x76e: Call2 0x886

0x76f: Pop(0)
0x770: PushEmpty(bool, object)
0x771: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x772: Call2 0xa41

0x773: Pop(1)
0x774: Pop(1); Push((bool) Stack[-1] == 0)
0x775: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x776: @ StopAsync()
0x777: Pop(0)
0x778: Stack[-10] = (bool) 0
0x779: Return(); Pop(8)

0x77a: PushEmpty(float, int)
0x77b: Stack[-2] = Stack[-11]
0x77c: Stack[-1] = Stack[-6]
0x77d: Call2 0x70c

0x77e: Pop(2)
0x77f: Stack[-2] = (int) 1
0x780: Push("attack_middle")
0x781: Pop(1); Push(Stack[-1] + Stack[-5]);
0x782: Push("_")
0x783: Pop(2); Push(Stack[-2] + Stack[-1]);
0x784: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x785: Push("all")
0x786: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x787: Pop(1)
0x788: Pop(0); Push((bool) Stack[-3] == 0)
0x789: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x78a: GOTO 0x7a8

0x78b: PushEmpty()
0x78c: Call2 0xc1c

0x78d: Pop(0)
0x78e: Push("all")
0x78f: @ PlayAnimation(Stack[-1], Stack[-2])
0x790: Pop(1)
0x791: @ WaitForAnimEnd()
0x792: Pop(0)
0x793: PushEmpty()
0x794: Call2 0x886

0x795: Pop(0)
0x796: PushEmpty(bool, object)
0x797: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x798: Call2 0xa41

0x799: Pop(1)
0x79a: Pop(1); Push((bool) Stack[-1] == 0)
0x79b: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79c: @ StopAsync()
0x79d: Pop(0)
0x79e: Stack[-10] = (bool) 0
0x79f: Return(); Pop(8)

0x7a0: PushEmpty(float, int)
0x7a1: Stack[-2] = Stack[-11]
0x7a2: Stack[-1] = Stack[-6]
0x7a3: Call2 0x70c

0x7a4: Pop(2)
0x7a5: Push((int) 1)
0x7a6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7a7: GOTO 0x780

0x7a8: Push((bool) 0)
0x7a9: @ SetAttackState(Stack[-1])
0x7aa: Pop(1)
0x7ab: Push("all")
0x7ac: Push("attack_end")
0x7ad: Pop(1); Push(Stack[-1] + Stack[-6]);
0x7ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x7af: Pop(2)
0x7b0: PushEmpty(bool)
0x7b1: Call2 0x894

0x7b2: Pop(0)
0x7b3: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b4: PushEmpty(bool, float)
0x7b5: Stack[-1] = (float) 0.75
0x7b6: Call2 0x7bc

0x7b7: Pop(2)
0x7b8: @ StopAsync()
0x7b9: Pop(0)
0x7ba: Stack[-10] = (bool) 1
0x7bb: Return(); Pop(8)

0x7bc: PushEmpty(float, bool, float, bool)
0x7bd: @ rand(Stack[-2])
0x7be: Pop(0)
0x7bf: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7c1: @ IsAnimationPlaying(Stack[-1])
0x7c2: Pop(0)
0x7c3: Pop(0); Push((bool) Stack[-1] == 0)
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c5: GOTO 0x7cf

0x7c6: PushEmpty(bool)
0x7c7: Call2 0x81e

0x7c8: Pop(0)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7ca: Stack[-6] = (bool) 1
0x7cb: Return(); Pop(4)

0x7cc: @ sync()
0x7cd: Pop(0)
0x7ce: GOTO 0x7c1

0x7cf: GOTO 0x7d5

0x7d0: @ WaitForAnimEnd()
0x7d1: Pop(0)
0x7d2: PushEmpty()
0x7d3: Call2 0x886

0x7d4: Pop(0)
0x7d5: Stack[-6] = (bool) 0
0x7d6: Return(); Pop(4)

0x7d7: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x7d8: @ IsAnimationPlaying(Stack[-5])
0x7d9: Pop(0)
0x7da: Pop(0); Push((bool) Stack[-5] == 0)
0x7db: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7dc: GOTO 0x7fd

0x7dd: PushEmpty(bool)
0x7de: Call2 0x81e

0x7df: Pop(0)
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7e1: Stack[-12] = (bool) 1
0x7e2: Return(); Pop(10)

0x7e3: PushEmpty(bool, object)
0x7e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e5: Call2 0xa41

0x7e6: Pop(1)
0x7e7: Pop(1); Push((bool) Stack[-1] == 0)
0x7e8: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e9: Stack[-12] = (bool) 0
0x7ea: Return(); Pop(10)

0x7eb: @@ GetPFPosition(Stack[-4])
0x7ec: Pop(0)
0x7ed: @ GetPFPosition(Stack[-3])
0x7ee: Pop(0)
0x7ef: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x7f0: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x7f1: Pop(0); Push(Stack[-11] * Stack[-11]);
0x7f2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7f3: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f4: PushEmpty(bool, float)
0x7f5: Stack[-1] = Stack[-13]
0x7f6: Call2 0x733

0x7f7: Pop(2)
0x7f8: Stack[-12] = (bool) 1
0x7f9: Return(); Pop(10)

0x7fa: @ sync()
0x7fb: Pop(0)
0x7fc: GOTO 0x7d8

0x7fd: PushEmpty()
0x7fe: Call2 0x886

0x7ff: Pop(0)
0x800: Stack[-12] = (bool) 0
0x801: Return(); Pop(10)

0x802: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x803: PushEmpty(bool, object)
0x804: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x805: Call2 0xa41

0x806: Pop(1)
0x807: Pop(1); Push((bool) Stack[-1] == 0)
0x808: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x809: Stack[-11] = (bool) 0
0x80a: Return(); Pop(10)

0x80b: PushEmpty(bool)
0x80c: Call2 0x85b

0x80d: Pop(0)
0x80e: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x80f: @@ GetPFPosition(Stack[-5])
0x810: Pop(0)
0x811: @ GetPFPosition(Stack[-4])
0x812: Pop(0)
0x813: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x814: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x815: @@ GetAttackDistance(Stack[-1])
0x816: Pop(0)
0x817: Push((int) 50)
0x818: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x819: Pop(0); Push(Stack[-1] * Stack[-1]);
0x81a: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x81b: Return(); Pop(10)

0x81c: Stack[-11] = (bool) 0
0x81d: Return(); Pop(10)

0x81e: PushEmpty(bool)
0x81f: Stack[-1] = (bool) 0
0x820: PushEmpty(bool)
0x821: Call2 0x802

0x822: Pop(0)
0x823: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x824: PushEmpty(bool)
0x825: Call2 0x82e

0x826: Pop(0)
0x827: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x828: Stack[-1] = (bool) 1
0x829: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x82a: Stack[-1] = (bool) 1
0x82b: Return(); Pop(0)

0x82c: Stack[-1] = (bool) 0
0x82d: Return(); Pop(0)

0x82e: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x82f: @ GetScene(Stack[-5])
0x830: Pop(0)
0x831: Stack[-4] = (bool) 0
0x832: PushEmpty(cvector, object)
0x833: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x834: Call2 0x9af

0x835: Pop(1)
0x836: Pop(1); Push(( -Stack[-1])
0x837: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x838: Pop(1)
0x839: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x83a: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x83b: GOTO 0x858

0x83c: @ Face(Stack[-0])
0x83d: Pop(0)
0x83e: Push("all")
0x83f: Push("bjump")
0x840: @ PlayAnimation(Stack[-2], Stack[-1])
0x841: Pop(2)
0x842: @@ GetPFPosition(Stack[-2])
0x843: Pop(0)
0x844: @ GetPFPosition(Stack[-1])
0x845: Pop(0)
0x846: @ WaitForAnimEnd()
0x847: Pop(0)
0x848: PushEmpty()
0x849: Call2 0x886

0x84a: Pop(0)
0x84b: @ StopAsync()
0x84c: Pop(0)
0x84d: Push(CVector(0.0, 0.0, 0.0))
0x84e: @ SetSpeed(Stack[-1])
0x84f: Pop(1)
0x850: Stack[-4] = (bool) 1
0x851: PushEmpty(bool)
0x852: Call2 0x802

0x853: Pop(0)
0x854: Pop(1); Push((bool) Stack[-1] == 0)
0x855: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x856: GOTO 0x858

0x857: GOTO 0x832

0x858: Stack[-11] = Stack[-4]
0x859: Return(); Pop(10)

0x85a: Stack[-5] = 0
0x85b: PushEmpty(bool, bool)
0x85c: Push("IsAttacking")
0x85d: Push((int) 1)
0x85e: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x85f: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x860: @@ IsAttacking(Stack[-1])
0x861: Pop(0)
0x862: Stack[-3] = Stack[-1]
0x863: Return(); Pop(2)

0x864: Stack[-3] = (bool) 0
0x865: Return(); Pop(2)

0x866: PushEmpty(float, int, float, int)
0x867: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x868: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x869: Return(); Pop(4)

0x86a: Push( Stack[5 + Tasks[-1].StackPointer] )
0x86b: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x86c: Push((int) -1)
0x86d: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x86e: Push((int) 0)
0x86f: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x870: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x871: Return(); Pop(4)

0x872: @ rand(Stack[-2])
0x873: Pop(0)
0x874: PushEmpty(float)
0x875: Call2 0x898

0x876: Pop(0)
0x877: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x878: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x879: @ irand(Stack[-1], Stack[-2])
0x87a: Pop(0)
0x87b: Push((int) 1)
0x87c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x87d: Push("attack")
0x87e: Pop(1); Push(Stack[-1] + Stack[-2]);
0x87f: @ Speak(Stack[-1])
0x880: Pop(1)
0x881: PushEmpty(int)
0x882: Call2 0x896

0x883: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x884: Pop(1)
0x885: Return(); Pop(4)

0x886: PushEmpty(object)
0x887: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x888: Call2 0xc13

0x889: Pop(1)
0x88a: Return(); Pop(0)

0x88b: Stack[-1] = (int) 0
0x88c: Return(); Pop(0)

0x88d: PushEmpty(string)
0x88e: Stack[-1] = "attack_stay"
0x88f: Call2 0xb87

0x890: Pop(1)
0x891: Return(); Pop(0)

0x892: PushEmpty()
0x893: Return(); Pop(0)

0x894: Stack[-1] = (bool) 1
0x895: Return(); Pop(0)

0x896: Stack[-1] = (int) 1
0x897: Return(); Pop(0)

0x898: Stack[-1] = (float) 0.5
0x899: Return(); Pop(0)

0x89a: PushEmpty()
0x89b: Call2 0x8e0

0x89c: Pop(0)
0x89d: PushEmpty()
0x89e: Call2 0xe28

0x89f: Pop(0)
0x8a0: Return(); Pop(0)

0x8a1: PushEmpty(bool, bool, bool, bool)
0x8a2: PushEmpty(object)
0x8a3: Stack[-1] = Stack[-10]
0x8a4: Call2 0xc13

0x8a5: Pop(1)
0x8a6: Push((int) 1)
0x8a7: Push((int) 5)
0x8a8: @ SetTimer(Stack[-2], Stack[-1])
0x8a9: Pop(2)
0x8aa: @ CanSee(Stack[-2], Stack[-9])
0x8ab: Pop(0)
0x8ac: Push(Stack[-2])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b4; Pop(1)

0x8ae: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8af: PushEmpty(object)
0x8b0: Stack[-1] = Stack[-10]
0x8b1: Call2 0xb5b

0x8b2: Pop(1)
0x8b3: GOTO 0x8b5

0x8b4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8b5: PushEmpty(bool, object)
0x8b6: Stack[-1] = Stack[-11]
0x8b7: Call2 0x9be

0x8b8: Pop(1)
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8ba: PushEmpty(object)
0x8bb: Call2 0xbb0

0x8bc: Pop(0)
0x8bd: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x8be: Pop(1)
0x8bf: PushEmpty(bool, object, float, float, bool, bool)
0x8c0: Stack[-5] = Stack[-15]
0x8c1: Stack[-4] = Stack[-14]
0x8c2: Stack[-3] = Stack[-13]
0x8c3: Stack[-2] = Stack[-12]
0x8c4: Stack[-1] = Stack[-11]
0x8c5: Call2 0x90a

0x8c6: Stack[-7] = Stack[-6]
0x8c7: Pop(6)
0x8c8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8c9: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8ca: Push("head")
0x8cb: @ UnlookAsync(Stack[-1])
0x8cc: Pop(1)
0x8cd: Push((int) 1)
0x8ce: @ KillTimer(Stack[-1])
0x8cf: Pop(1)
0x8d0: Stack[-10] = Stack[-1]
0x8d1: Return(); Pop(4)

0x8d2: PushEmpty()
0x8d3: Push((int) 1)
0x8d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d5: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8d6: PushEmpty(object)
0x8d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d8: Call2 0xc13

0x8d9: Pop(1)
0x8da: GOTO 0x8df

0x8db: PushEmpty(int)
0x8dc: Stack[-1] = Stack[-2]
0x8dd: Call2 0x970

0x8de: Pop(1)
0x8df: Return(); Pop(0)

0x8e0: Push((int) 1)
0x8e1: @ KillTimer(Stack[-1])
0x8e2: Pop(1)
0x8e3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8e4: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8e5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8e6: Push("head")
0x8e7: @ UnlookAsync(Stack[-1])
0x8e8: Pop(1)
0x8e9: PushEmpty()
0x8ea: Call2 0x986

0x8eb: Pop(0)
0x8ec: Return(); Pop(0)

0x8ed: PushEmpty()
0x8ee: PushEmpty(bool)
0x8ef: Stack[-1] = (bool) 0
0x8f0: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8f2: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x8f3: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8f4: Stack[-1] = (bool) 1
0x8f5: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8f7: PushEmpty(object)
0x8f8: Stack[-1] = Stack[-2]
0x8f9: Call2 0xb5b

0x8fa: Pop(1)
0x8fb: Return(); Pop(0)

0x8fc: PushEmpty()
0x8fd: PushEmpty(bool)
0x8fe: Stack[-1] = (bool) 0
0x8ff: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x900: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x901: Push( Stack[2 + Tasks[-1].StackPointer] )
0x902: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x903: Stack[-1] = (bool) 1
0x904: IF (Stack[-1] == 0) GOTO 0x909; Pop(1)

0x905: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x906: Push("head")
0x907: @ UnlookAsync(Stack[-1])
0x908: Pop(1)
0x909: Return(); Pop(0)

0x90a: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x90b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x90c: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x90d: Stack[-7] = Stack[-17]
0x90e: PushEmpty(bool, object)
0x90f: Stack[-1] = Stack[-23]
0x910: Call2 0x996

0x911: Pop(1)
0x912: Pop(1); Push((bool) Stack[-1] == 0)
0x913: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x914: Stack[-22] = (bool) 0
0x915: Return(); Pop(16)

0x916: @@ GetPosition(Stack[-5])
0x917: Pop(0)
0x918: @ GetPosition(Stack[-4])
0x919: Pop(0)
0x91a: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x91b: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x91c: PushEmpty(bool)
0x91d: Stack[-1] = (bool) 0
0x91e: Push((int) 0)
0x91f: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x920: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x921: Pop(0); Push(Stack[-20] * Stack[-20]);
0x922: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x923: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x924: Stack[-1] = (bool) 1
0x925: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x926: @ Stop()
0x927: Pop(0)
0x928: Stack[-22] = (bool) 0
0x929: Return(); Pop(16)

0x92a: Pop(0); Push(Stack[-20] * Stack[-20]);
0x92b: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x92c: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x92d: @@ GetPFPosition(Stack[-5])
0x92e: Pop(0)
0x92f: @ FindPathTo(Stack[-1], Stack[-5])
0x930: Pop(0)
0x931: Pop(0); Push(( Stack[-1] != 0 )
0x932: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x933: Stack[-6] = Stack[-1]
0x934: Stack[-1] = 0
0x935: Pop(0); Push(( Stack[-6] != 0 )
0x936: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x937: Push(Stack[-7])
0x938: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x939: Stack[-7] = (bool) 0
0x93a: @ RotatePath(Stack[-6], Stack[-8])
0x93b: Pop(0)
0x93c: Pop(0); Push((bool) Stack[-8] == 0)
0x93d: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x93e: GOTO 0x96e

0x93f: Push((int) 0)
0x940: Push((float)0.3)
0x941: @ SetTimer(Stack[-2], Stack[-1])
0x942: Pop(2)
0x943: PushEmpty(string)
0x944: Call2 0x99d

0x945: Pop(0)
0x946: PushEmpty(string)
0x947: Call2 0x99f

0x948: Pop(0)
0x949: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x94a: Pop(2)
0x94b: Pop(0); Push((bool) Stack[-8] == 0)
0x94c: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x94d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x94e: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x94f: Stack[-6] = 0
0x950: GOTO 0x96e

0x951: GOTO 0x953

0x952: GOTO 0x96d

0x953: GOTO 0x955

0x954: Stack[-6] = 0
0x955: GOTO 0x966

0x956: Push((int) 0)
0x957: @ KillTimer(Stack[-1])
0x958: Pop(1)
0x959: Push((float)0.5)
0x95a: @ Sleep(Stack[-1], Stack[-9])
0x95b: Pop(1)
0x95c: Pop(0); Push((bool) Stack[-8] == 0)
0x95d: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x95e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x95f: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x960: Stack[-6] = 0
0x961: GOTO 0x96e

0x962: Push((int) 0)
0x963: Push((float)0.3)
0x964: @ SetTimer(Stack[-2], Stack[-1])
0x965: Pop(2)
0x966: Stack[-1] = 0
0x967: GOTO 0x96c

0x968: Push((int) 0)
0x969: @ KillTimer(Stack[-1])
0x96a: Pop(1)
0x96b: GOTO 0x96e

0x96c: Stack[-6] = 0
0x96d: GOTO 0x90e

0x96e: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x96f: Return(); Pop(16)

0x970: PushEmpty()
0x971: Push((int) 0)
0x972: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x973: IF (Stack[-1] == 0) GOTO 0x975; Pop(1)

0x974: Return(); Pop(0)

0x975: PushEmpty(bool, object)
0x976: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x977: Call2 0x996

0x978: Pop(1)
0x979: Pop(1); Push((bool) Stack[-1] == 0)
0x97a: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x97b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x97c: Push((int) 0)
0x97d: @ KillTimer(Stack[-1])
0x97e: Pop(1)
0x97f: @ Stop()
0x980: Pop(0)
0x981: Return(); Pop(0)

0x982: PushEmpty()
0x983: @ RequestClearPath(Stack[-1])
0x984: Pop(0)
0x985: Return(); Pop(0)

0x986: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x987: Push((int) 0)
0x988: @ KillTimer(Stack[-1])
0x989: Pop(1)
0x98a: @ Stop()
0x98b: Pop(0)
0x98c: Return(); Pop(0)

0x98d: PushEmpty()
0x98e: PushEmpty()
0x98f: Call2 0x8e0

0x990: Pop(0)
0x991: PushEmpty(object)
0x992: Stack[-1] = Stack[-2]
0x993: Call2 0xd3f

0x994: Pop(1)
0x995: Return(); Pop(0)

0x996: PushEmpty()
0x997: PushEmpty(bool, object)
0x998: Stack[-1] = Stack[-3]
0x999: Call2 0xa41

0x99a: Stack[-4] = Stack[-2]
0x99b: Pop(2)
0x99c: Return(); Pop(0)

0x99d: Stack[-1] = "walk"
0x99e: Return(); Pop(0)

0x99f: Stack[-1] = "run"
0x9a0: Return(); Pop(0)

0x9a1: PushEmpty()
0x9a2: Push((int) 2)
0x9a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a4: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x9a5: Stack[-2] = "fire"
0x9a6: Return(); Pop(0)

0x9a7: GOTO 0x9ad

0x9a8: Push((int) 1)
0x9a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9ab: Stack[-2] = "bullet"
0x9ac: Return(); Pop(0)

0x9ad: Stack[-2] = "phys"
0x9ae: Return(); Pop(0)

0x9af: PushEmpty(cvector, cvector, cvector, cvector)
0x9b0: @ GetPosition(Stack[-2])
0x9b1: Pop(0)
0x9b2: @@ GetPosition(Stack[-1])
0x9b3: Pop(0)
0x9b4: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x9b5: Return(); Pop(4)

0x9b6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9b7: @ GetPosition(Stack[-3])
0x9b8: Pop(0)
0x9b9: @@ GetPosition(Stack[-2])
0x9ba: Pop(0)
0x9bb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x9bc: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x9bd: Return(); Pop(6)

0x9be: PushEmpty(bool, bool)
0x9bf: @ IsPlayerActor(Stack[-3], Stack[-1])
0x9c0: Pop(0)
0x9c1: Stack[-4] = Stack[-1]
0x9c2: Return(); Pop(2)

0x9c3: PushEmpty(bool, bool)
0x9c4: Push("HasProperty")
0x9c5: Push((int) 2)
0x9c6: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x9c7: Pop(1); Push((bool) Stack[-1] == 0)
0x9c8: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9c9: Stack[-5] = (bool) 0
0x9ca: Return(); Pop(2)

0x9cb: @@ HasProperty(Stack[-3], Stack[-1])
0x9cc: Pop(0)
0x9cd: Stack[-5] = Stack[-1]
0x9ce: Return(); Pop(2)

0x9cf: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x9d0: PushEmpty(bool, object, string)
0x9d1: Stack[-2] = Stack[-18]
0x9d2: Stack[-1] = "health"
0x9d3: Call2 0x9c3

0x9d4: Pop(2)
0x9d5: Pop(1); Push((bool) Stack[-1] == 0)
0x9d6: IF (Stack[-1] == 0) GOTO 0x9d9; Pop(1)

0x9d7: Stack[-16] = (float) 0.0
0x9d8: Return(); Pop(12)

0x9d9: PushEmpty(bool, object, string)
0x9da: Stack[-2] = Stack[-18]
0x9db: Stack[-1] = "armor"
0x9dc: Call2 0x9c3

0x9dd: Pop(2)
0x9de: Pop(1); Push((bool) Stack[-1] == 0)
0x9df: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9e0: Stack[-6] = (int) 0
0x9e1: GOTO 0x9e5

0x9e2: Push("armor")
0x9e3: @@ GetProperty(Stack[-1], Stack[-7])
0x9e4: Pop(1)
0x9e5: Push("armor_")
0x9e6: PushEmpty(string, int)
0x9e7: Stack[-1] = Stack[-16]
0x9e8: Call2 0x9a1

0x9e9: Pop(1)
0x9ea: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x9eb: PushEmpty(bool, object, string)
0x9ec: Stack[-2] = Stack[-18]
0x9ed: Stack[-1] = Stack[-8]
0x9ee: Call2 0x9c3

0x9ef: Pop(2)
0x9f0: Pop(1); Push((bool) Stack[-1] == 0)
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9f2: Stack[-4] = (int) 0
0x9f3: GOTO 0x9f6

0x9f4: @@ GetProperty(Stack[-5], Stack[-4])
0x9f5: Pop(0)
0x9f6: PushEmpty(float, float, float)
0x9f7: Pop(0); Push(Stack[-9] + Stack[-7]);
0x9f8: Push((float)100.0)
0x9f9: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x9fa: Stack[-1] = (int) 1
0x9fb: Call2 0xbc0

0x9fc: Stack[-6] = Stack[-3]
0x9fd: Pop(3)
0x9fe: Push("health")
0x9ff: @@ GetProperty(Stack[-1], Stack[-3])
0xa00: Pop(1)
0xa01: Push((int) 1)
0xa02: Pop(1); Push(Stack[-1] - Stack[-4]);
0xa03: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xa04: Push("health")
0xa05: PushEmpty(float, float, float, float)
0xa06: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xa07: Stack[-2] = (int) 0
0xa08: Stack[-1] = (int) 1
0xa09: Call2 0xbc7

0xa0a: Pop(3)
0xa0b: @@ SetProperty(Stack[-2], Stack[-1])
0xa0c: Pop(2)
0xa0d: PushEmpty(bool, object)
0xa0e: Stack[-1] = Stack[-17]
0xa0f: Call2 0x9be

0xa10: Pop(1)
0xa11: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0xa12: PushEmpty(float)
0xa13: Stack[-1] = -Stack[-2]; Pop(0);
0xa14: Call2 0xc00

0xa15: Pop(1)
0xa16: Stack[-16] = Stack[-1]
0xa17: Return(); Pop(12)

0xa18: PushEmpty(bool, bool)
0xa19: @@ IsDead(Stack[-1])
0xa1a: Pop(0)
0xa1b: Stack[-4] = Stack[-1]
0xa1c: Return(); Pop(2)

0xa1d: PushEmpty(object, object, object, object)
0xa1e: Pop(0); Push((bool) Stack[-5] == 0)
0xa1f: IF (Stack[-1] == 0) GOTO 0xa22; Pop(1)

0xa20: Stack[-6] = (bool) 0
0xa21: Return(); Pop(4)

0xa22: PushEmpty(bool)
0xa23: Stack[-1] = (bool) 0
0xa24: Push("IsDead")
0xa25: Push((int) 1)
0xa26: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xa27: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa28: PushEmpty(bool, object)
0xa29: Stack[-1] = Stack[-8]
0xa2a: Call2 0xa18

0xa2b: Pop(1)
0xa2c: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa2d: Stack[-1] = (bool) 1
0xa2e: IF (Stack[-1] == 0) GOTO 0xa31; Pop(1)

0xa2f: Stack[-6] = (bool) 0
0xa30: Return(); Pop(4)

0xa31: @ GetScene(Stack[-2])
0xa32: Pop(0)
0xa33: Pop(0); Push((bool) Stack[-2] == 0)
0xa34: IF (Stack[-1] == 0) GOTO 0xa37; Pop(1)

0xa35: Stack[-6] = (bool) 0
0xa36: Return(); Pop(4)

0xa37: @@ GetScene(Stack[-1])
0xa38: Pop(0)
0xa39: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa3b: Stack[-6] = (bool) 0
0xa3c: Return(); Pop(4)

0xa3d: Stack[-6] = (bool) 1
0xa3e: Return(); Pop(4)

0xa3f: Stack[-1] = 0
0xa40: Stack[-2] = 0
0xa41: PushEmpty(int, int)
0xa42: PushEmpty(bool, object)
0xa43: Stack[-1] = Stack[-5]
0xa44: Call2 0xa1d

0xa45: Pop(1)
0xa46: Pop(1); Push((bool) Stack[-1] == 0)
0xa47: IF (Stack[-1] == 0) GOTO 0xa4a; Pop(1)

0xa48: Stack[-4] = (bool) 0
0xa49: Return(); Pop(2)

0xa4a: PushEmpty(bool, object, string)
0xa4b: Stack[-2] = Stack[-6]
0xa4c: Stack[-1] = "noaccess"
0xa4d: Call2 0x9c3

0xa4e: Pop(2)
0xa4f: Pop(1); Push((bool) Stack[-1] == 0)
0xa50: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa51: Stack[-4] = (bool) 1
0xa52: Return(); Pop(2)

0xa53: Push("noaccess")
0xa54: @@ GetProperty(Stack[-1], Stack[-2])
0xa55: Pop(1)
0xa56: Push((int) 0)
0xa57: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xa58: Return(); Pop(2)

0xa59: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xa5a: Pop(0); Push((bool) Stack[-15] == 0)
0xa5b: IF (Stack[-1] == 0) GOTO 0xa5d; Pop(1)

0xa5c: Return(); Pop(14)

0xa5d: @ IsDead(Stack[-7])
0xa5e: Pop(0)
0xa5f: Push(Stack[-7])
0xa60: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa61: Return(); Pop(14)

0xa62: @ GetSecondaryAnimationType(Stack[-6])
0xa63: Pop(0)
0xa64: Push((int) 0)
0xa65: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xa66: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa67: Return(); Pop(14)

0xa68: @@ GetPosition(Stack[-5])
0xa69: Pop(0)
0xa6a: @ GetPosition(Stack[-4])
0xa6b: Pop(0)
0xa6c: @ GetDirection(Stack[-3])
0xa6d: Pop(0)
0xa6e: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xa6f: Push(CvectorIndex(Stack[-2], 0))
0xa70: Push(CvectorIndex(Stack[-4], 0))
0xa71: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa72: Push(CvectorIndex(Stack[-3], 2))
0xa73: Push(CvectorIndex(Stack[-5], 2))
0xa74: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa75: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa76: Push((int) 0)
0xa77: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa78: IF (Stack[-1] == 0) GOTO 0xa7b; Pop(1)

0xa79: Stack[-1] = "fhit"
0xa7a: GOTO 0xa7c

0xa7b: Stack[-1] = "bhit"
0xa7c: Push("hit_react")
0xa7d: Push("1")
0xa7e: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa7f: Push("2")
0xa80: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa81: Push((int) -10)
0xa82: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa83: Pop(4)
0xa84: Return(); Pop(14)

0xa85: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xa86: PushEmpty(bool)
0xa87: Stack[-1] = (bool) 0
0xa88: PushEmpty(bool)
0xa89: Stack[-1] = (bool) 0
0xa8a: Push(Stack[-23])
0xa8b: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8c: Push((int) 4)
0xa8d: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xa8e: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8f: Stack[-1] = (bool) 1
0xa90: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa91: Push((int) 5)
0xa92: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xa93: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa94: Stack[-1] = (bool) 1
0xa95: IF (Stack[-1] == 0) GOTO 0xac4; Pop(1)

0xa96: PushEmpty(cvector, cvector)
0xa97: PushEmpty(cvector, object)
0xa98: Stack[-1] = Stack[-25]
0xa99: Call2 0x9af

0xa9a: Stack[-3] = Stack[-2]
0xa9b: Pop(2)
0xa9c: Call2 0xbb6

0xa9d: Stack[-11] = Stack[-2]
0xa9e: Pop(2)
0xa9f: @ CreateVectorVector(Stack[-8])
0xaa0: Pop(0)
0xaa1: Stack[-7] = (int) 1
0xaa2: Push("hit")
0xaa3: Pop(1); Push(Stack[-1] + Stack[-8]);
0xaa4: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xaa5: Pop(1)
0xaa6: Pop(0); Push((bool) Stack[-6] == 0)
0xaa7: IF (Stack[-1] == 0) GOTO 0xaa9; Pop(1)

0xaa8: GOTO 0xab2

0xaa9: Pop(0); Push(Stack[-4] | Stack[-9]);
0xaaa: Push((float)0.70711)
0xaab: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xaac: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaad: @@ add(Stack[-5])
0xaae: Pop(0)
0xaaf: Push((int) 1)
0xab0: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xab1: GOTO 0xaa2

0xab2: @@ size(Stack[-3])
0xab3: Pop(0)
0xab4: Push(Stack[-3])
0xab5: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xab6: @ irand(Stack[-2], Stack[-3])
0xab7: Pop(0)
0xab8: @@ get(Stack[-1], Stack[-2])
0xab9: Pop(0)
0xaba: PushEmpty(object, int, float, cvector, cvector)
0xabb: Stack[-5] = Stack[-26]
0xabc: Stack[-4] = Stack[-25]
0xabd: Stack[-3] = Stack[-24]
0xabe: Stack[-2] = Stack[-6]
0xabf: Stack[-1] = -Stack[-14]; Pop(0);
0xac0: Call2 0xac9

0xac1: Pop(5)
0xac2: Return(); Pop(18)

0xac3: Stack[-8] = 0
0xac4: PushEmpty(object)
0xac5: Stack[-1] = Stack[-22]
0xac6: Call2 0xa59

0xac7: Pop(1)
0xac8: Return(); Pop(18)

0xac9: PushEmpty(object, object, object, object)
0xaca: @ GetScene(Stack[-2])
0xacb: Pop(0)
0xacc: Push("scripted")
0xacd: Push("blood_dir.xml")
0xace: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xacf: Pop(2)
0xad0: PushEmpty(object)
0xad1: Stack[-1] = Stack[-10]
0xad2: Call2 0xa59

0xad3: Pop(1)
0xad4: Return(); Pop(4)

0xad5: Stack[-1] = 0
0xad6: Stack[-2] = 0
0xad7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xad8: @@ GetPosition(Stack[-3])
0xad9: Pop(0)
0xada: @ GetPosition(Stack[-2])
0xadb: Pop(0)
0xadc: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xadd: Push(CvectorIndex(Stack[-1], 0))
0xade: Push(CvectorIndex(Stack[-2], 2))
0xadf: @ RotateAsync(Stack[-2], Stack[-1])
0xae0: Pop(2)
0xae1: Return(); Pop(6)

0xae2: PushEmpty(bool, bool)
0xae3: @ IsLoaded(Stack[-1])
0xae4: Pop(0)
0xae5: Stack[-3] = Stack[-1]
0xae6: Return(); Pop(2)

0xae7: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xae8: @@ GetPosition(Stack[-8])
0xae9: Pop(0)
0xaea: @@ GetEyesHeight(Stack[-9])
0xaeb: Pop(0)
0xaec: Push(CvectorIndex(Stack[-8], 1))
0xaed: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xaee: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xaef: @ GetPosition(Stack[-7])
0xaf0: Pop(0)
0xaf1: @ GetEyesHeight(Stack[-9])
0xaf2: Pop(0)
0xaf3: Push(CvectorIndex(Stack[-7], 1))
0xaf4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xaf5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xaf6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xaf7: Push(CvectorIndex(Stack[-6], 1))
0xaf8: Stack[-1] = (int) 0
0xaf9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xafa: Pop(0); Push(Stack[-6] | Stack[-6]);
0xafb: Pop(1); Push(Sqrt(Stack[-1]))
0xafc: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xafd: Stack[-5] = -Stack[-6]; Pop(0);
0xafe: Pop(0); Push(Stack[-6] * Stack[-19]);
0xaff: PushEmpty(cvector, cvector)
0xb00: Push(CVector(0.0, 1.0, 0.0))
0xb01: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xb02: Call2 0xbb6

0xb03: Pop(1)
0xb04: Push((int) 25)
0xb05: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb06: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb07: Push(CVector(0.0, 10.0, 0.0))
0xb08: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xb09: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xb0a: @ IsOverrideActive(Stack[-2])
0xb0b: Pop(0)
0xb0c: Push(Stack[-2])
0xb0d: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb0e: Stack[-21] = (bool) 0
0xb0f: Return(); Pop(18)

0xb10: @ StopWorld()
0xb11: Pop(0)
0xb12: @ CameraTransit(Stack[-3], Stack[-5])
0xb13: Pop(0)
0xb14: Push(CvectorIndex(Stack[-4], 0))
0xb15: Push(CvectorIndex(Stack[-5], 2))
0xb16: @ Rotate(Stack[-2], Stack[-1])
0xb17: Pop(2)
0xb18: PushEmpty(bool)
0xb19: Call2 0xe5f

0xb1a: Pop(0)
0xb1b: IF (Stack[-1] == 0) GOTO 0xb1d; Pop(1)

0xb1c: GOTO 0xb25

0xb1d: Push("head")
0xb1e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xb1f: Pop(1)
0xb20: Push(Stack[-1])
0xb21: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb22: Push("head")
0xb23: @ LookAsyncCamera(Stack[-1])
0xb24: Pop(1)
0xb25: @ CameraWaitForPlayFinish()
0xb26: Pop(0)
0xb27: @ ResumeWorld()
0xb28: Pop(0)
0xb29: Stack[-21] = (bool) 1
0xb2a: Return(); Pop(18)

0xb2b: PushEmpty(bool, bool)
0xb2c: @ CameraSwitchToNormal()
0xb2d: Pop(0)
0xb2e: PushEmpty(bool)
0xb2f: Call2 0xe5f

0xb30: Pop(0)
0xb31: IF (Stack[-1] == 0) GOTO 0xb33; Pop(1)

0xb32: GOTO 0xb3b

0xb33: Push("head")
0xb34: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xb35: Pop(1)
0xb36: Push(Stack[-1])
0xb37: IF (Stack[-1] == 0) GOTO 0xb3b; Pop(1)

0xb38: Push("head")
0xb39: @ UnlookAsync(Stack[-1])
0xb3a: Pop(1)
0xb3b: Return(); Pop(2)

0xb3c: PushEmpty(bool, float, float, bool, float, float)
0xb3d: @ lshHasAnimation(Stack[-3], Stack[-7])
0xb3e: Pop(0)
0xb3f: Push(Stack[-3])
0xb40: IF (Stack[-1] == 0) GOTO 0xb47; Pop(1)

0xb41: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xb42: Pop(0)
0xb43: Push((bool) 0)
0xb44: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb45: Pop(1)
0xb46: GOTO 0xb4b

0xb47: Push("Can't find lsh animation : ")
0xb48: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb49: @ Trace(Stack[-1])
0xb4a: Pop(1)
0xb4b: Return(); Pop(6)

0xb4c: PushEmpty(bool, float, float, bool, float, float)
0xb4d: @ lshHasAnimation(Stack[-3], Stack[-8])
0xb4e: Pop(0)
0xb4f: Push(Stack[-3])
0xb50: IF (Stack[-1] == 0) GOTO 0xb56; Pop(1)

0xb51: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xb52: Pop(0)
0xb53: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xb54: Pop(0)
0xb55: GOTO 0xb5a

0xb56: Push("Can't find lsh animation : ")
0xb57: Pop(1); Push(Stack[-1] + Stack[-9]);
0xb58: @ Trace(Stack[-1])
0xb59: Pop(1)
0xb5a: Return(); Pop(6)

0xb5b: PushEmpty(float, cvector, float, cvector)
0xb5c: @@ GetEyesHeight(Stack[-2])
0xb5d: Pop(0)
0xb5e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xb5f: Push(CvectorIndex(Stack[-1], 1))
0xb60: Stack[-1] = Stack[-3]
0xb61: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xb62: Push("head")
0xb63: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xb64: Pop(1)
0xb65: Return(); Pop(4)

0xb66: PushEmpty(bool)
0xb67: Call2 0xe5f

0xb68: Pop(0)
0xb69: IF (Stack[-1] == 0) GOTO 0xb6c; Pop(1)

0xb6a: @ lshStopSpeech()
0xb6b: Pop(0)
0xb6c: Return(); Pop(0)

0xb6d: PushEmpty(bool, bool)
0xb6e: PushEmpty(bool, int, int)
0xb6f: Stack[-2] = Stack[-7]
0xb70: Stack[-1] = Stack[-6]
0xb71: Call2 0xbd2

0xb72: Pop(2)
0xb73: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0xb74: Push((int) 0)
0xb75: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xb76: Pop(1)
0xb77: Return(); Pop(2)

0xb78: PushEmpty(int, bool, int, bool)
0xb79: PushEmpty(bool, int, int)
0xb7a: Stack[-2] = Stack[-10]
0xb7b: Stack[-1] = Stack[-9]
0xb7c: Call2 0xbd2

0xb7d: Pop(2)
0xb7e: IF (Stack[-1] == 0) GOTO 0xb86; Pop(1)

0xb7f: @ irand(Stack[-2], Stack[-5])
0xb80: Pop(0)
0xb81: Push((int) 0)
0xb82: Push((int) 1)
0xb83: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb84: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xb85: Pop(2)
0xb86: Return(); Pop(4)

0xb87: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xb88: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xb89: Pop(0)
0xb8a: Pop(0); Push((bool) Stack[-8] == 0)
0xb8b: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb8c: Stack[-7] = (int) 0
0xb8d: Push((int) 1)
0xb8e: Pop(1); Push(Stack[-8] + Stack[-1]);
0xb8f: Pop(1); Push(Stack[-18] + Stack[-1]);
0xb90: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xb91: Pop(1)
0xb92: Pop(0); Push((bool) Stack[-6] == 0)
0xb93: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb94: GOTO 0xb98

0xb95: Push((int) 1)
0xb96: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xb97: GOTO 0xb8d

0xb98: Pop(0); Push((bool) Stack[-7] == 0)
0xb99: IF (Stack[-1] == 0) GOTO 0xb9b; Pop(1)

0xb9a: Return(); Pop(16)

0xb9b: @ irand(Stack[-5], Stack[-7])
0xb9c: Pop(0)
0xb9d: Push((int) 1)
0xb9e: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb9f: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xba0: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xba1: Pop(0)
0xba2: Push(Stack[-4])
0xba3: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xba4: @ GetEyesHeight(Stack[-3])
0xba5: Pop(0)
0xba6: @ GetDirection(Stack[-2])
0xba7: Pop(0)
0xba8: Push((int) 50)
0xba9: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xbaa: Push(CvectorIndex(Stack[-1], 1))
0xbab: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xbac: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xbad: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xbae: Pop(0)
0xbaf: Return(); Pop(16)

0xbb0: PushEmpty(object, object)
0xbb1: @ self(Stack[-1])
0xbb2: Pop(0)
0xbb3: Stack[-3] = Stack[-1]
0xbb4: Return(); Pop(2)

0xbb5: Stack[-1] = 0
0xbb6: PushEmpty(float, float)
0xbb7: Pop(0); Push(Stack[-3] | Stack[-3]);
0xbb8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xbb9: Push((float)0.0)
0xbba: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbbb: IF (Stack[-1] == 0) GOTO 0xbbe; Pop(1)

0xbbc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xbbd: Return(); Pop(2)

0xbbe: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xbbf: Return(); Pop(2)

0xbc0: PushEmpty()
0xbc1: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xbc2: IF (Stack[-1] == 0) GOTO 0xbc5; Pop(1)

0xbc3: Stack[-3] = Stack[-2]
0xbc4: GOTO 0xbc6

0xbc5: Stack[-3] = Stack[-1]
0xbc6: Return(); Pop(0)

0xbc7: PushEmpty()
0xbc8: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xbc9: IF (Stack[-1] == 0) GOTO 0xbcc; Pop(1)

0xbca: Stack[-4] = Stack[-2]
0xbcb: Return(); Pop(0)

0xbcc: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xbcd: IF (Stack[-1] == 0) GOTO 0xbd0; Pop(1)

0xbce: Stack[-4] = Stack[-1]
0xbcf: Return(); Pop(0)

0xbd0: Stack[-4] = Stack[-3]
0xbd1: Return(); Pop(0)

0xbd2: PushEmpty(int, int)
0xbd3: @ irand(Stack[-1], Stack[-3])
0xbd4: Pop(0)
0xbd5: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xbd6: Return(); Pop(2)

0xbd7: PushEmpty()
0xbd8: Push(CvectorIndex(Stack[-2], 0))
0xbd9: Push(CvectorIndex(Stack[-2], 0))
0xbda: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbdb: Push(CvectorIndex(Stack[-3], 2))
0xbdc: Push(CvectorIndex(Stack[-3], 2))
0xbdd: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbde: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xbdf: Return(); Pop(0)

0xbe0: PushEmpty()
0xbe1: Push(CvectorIndex(Stack[-1], 0))
0xbe2: Push(CvectorIndex(Stack[-2], 0))
0xbe3: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbe4: Push(CvectorIndex(Stack[-2], 2))
0xbe5: Push(CvectorIndex(Stack[-3], 2))
0xbe6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbe7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbe8: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xbe9: Return(); Pop(0)

0xbea: PushEmpty()
0xbeb: PushEmpty(float, cvector, cvector)
0xbec: Stack[-2] = Stack[-5]
0xbed: Stack[-1] = Stack[-4]
0xbee: Call2 0xbd7

0xbef: Pop(2)
0xbf0: PushEmpty(float, cvector)
0xbf1: Stack[-1] = Stack[-5]
0xbf2: Call2 0xbe0

0xbf3: Pop(1)
0xbf4: PushEmpty(float, cvector)
0xbf5: Stack[-1] = Stack[-5]
0xbf6: Call2 0xbe0

0xbf7: Pop(1)
0xbf8: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbf9: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xbfa: Return(); Pop(0)

0xbfb: PushEmpty(int, int)
0xbfc: @ GetVariable(Stack[-3], Stack[-1])
0xbfd: Pop(0)
0xbfe: Stack[-4] = Stack[-1]
0xbff: Return(); Pop(2)

0xc00: PushEmpty(object, object)
0xc01: @ CreateFloatVector(Stack[-1])
0xc02: Pop(0)
0xc03: @@ add(Stack[-3])
0xc04: Pop(0)
0xc05: Push((int) 15)
0xc06: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xc07: Pop(1)
0xc08: Return(); Pop(2)

0xc09: Stack[-1] = 0
0xc0a: PushEmpty(float, float)
0xc0b: @ GetGameTime(Stack[-1])
0xc0c: Pop(0)
0xc0d: Push((int) 1)
0xc0e: PushEmpty(int)
0xc0f: Push((int) 24)
0xc10: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xc11: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc12: Return(); Pop(2)

0xc13: PushEmpty(bool, bool)
0xc14: @ IsPlayerActor(Stack[-3], Stack[-1])
0xc15: Pop(0)
0xc16: Push(Stack[-1])
0xc17: IF (Stack[-1] == 0) GOTO 0xc1b; Pop(1)

0xc18: Push("attack")
0xc19: @ PlayGlobalMusic(Stack[-1])
0xc1a: Pop(1)
0xc1b: Return(); Pop(2)

0xc1c: PushEmpty(object, object)
0xc1d: @ GetScene(Stack[-1])
0xc1e: Pop(0)
0xc1f: Push("battle")
0xc20: PushEmpty(object)
0xc21: Call2 0xbb0

0xc22: Pop(0)
0xc23: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xc24: Pop(2)
0xc25: Return(); Pop(2)

0xc26: Stack[-1] = 0
0xc27: PushEmpty()
0xc28: Push("ood1Doberman1_1")
0xc29: Push((int) 1)
0xc2a: @ SetVariable(Stack[-2], Stack[-1])
0xc2b: Pop(2)
0xc2c: Return(); Pop(0)

0xc2d: PushEmpty()
0xc2e: PushEmpty(int, string)
0xc2f: Stack[-1] = "ood1Doberman1_1"
0xc30: Call2 0xbfb

0xc31: Pop(1)
0xc32: Push((int) 0)
0xc33: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc34: IF (Stack[-1] == 0) GOTO 0xc37; Pop(1)

0xc35: Stack[-2] = (bool) 1
0xc36: Return(); Pop(0)

0xc37: Stack[-2] = (bool) 0
0xc38: Return(); Pop(0)

0xc39: PushEmpty(int, int)
0xc3a: Push("branch")
0xc3b: @ GetVariable(Stack[-1], Stack[-2])
0xc3c: Pop(1)
0xc3d: Push((int) 0)
0xc3e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3f: IF (Stack[-1] == 0) GOTO 0xc43; Pop(1)

0xc40: Stack[-3] = (int) 1
0xc41: Return(); Pop(2)

0xc42: GOTO 0xc48

0xc43: Push((int) 1)
0xc44: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc45: IF (Stack[-1] == 0) GOTO 0xc48; Pop(1)

0xc46: Stack[-3] = (int) 2
0xc47: Return(); Pop(2)

0xc48: Stack[-3] = (int) 3
0xc49: Return(); Pop(2)

0xc4a: PushEmpty(int, int)
0xc4b: Push("branch")
0xc4c: @ GetVariable(Stack[-1], Stack[-2])
0xc4d: Pop(1)
0xc4e: Stack[-3] = Stack[-1]
0xc4f: Return(); Pop(2)

0xc50: PushEmpty()
0xc51: PushEmpty(int)
0xc52: Call2 0xc4a

0xc53: Pop(0)
0xc54: Push((int) 1)
0xc55: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc56: IF (Stack[-1] == 0) GOTO 0xc5a; Pop(1)

0xc57: @ WorkWithCorpse(Stack[-1])
0xc58: Pop(0)
0xc59: GOTO 0xc5c

0xc5a: @ Barter(Stack[-1])
0xc5b: Pop(0)
0xc5c: Return(); Pop(0)

0xc5d: PushEmpty(int, bool, int, bool)
0xc5e: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xc5f: IF (Stack[-1] == 0) GOTO 0xc64; Pop(1)

0xc60: Push("GenerateMoney: iMin > iMax")
0xc61: @ Trace(Stack[-1])
0xc62: Pop(1)
0xc63: Return(); Pop(4)

0xc64: Stack[-2] = (int) 0
0xc65: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xc66: IF (Stack[-1] == 0) GOTO 0xc6b; Pop(1)

0xc67: Pop(0); Push(Stack[-5] - Stack[-6]);
0xc68: @ irand(Stack[-3], Stack[-1])
0xc69: Pop(1)
0xc6a: GOTO 0xc6f

0xc6b: Push((int) 0)
0xc6c: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xc6d: IF (Stack[-1] == 0) GOTO 0xc6f; Pop(1)

0xc6e: Return(); Pop(4)

0xc6f: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xc70: Push((int) 0)
0xc71: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc72: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc73: Return(); Pop(4)

0xc74: PushEmpty(int, string)
0xc75: Stack[-1] = "Money"
0xc76: Call2 0xd25

0xc77: Pop(1)
0xc78: Push((int) 0)
0xc79: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xc7a: Pop(2)
0xc7b: Return(); Pop(4)

0xc7c: PushEmpty(object, int, bool, object, int, bool)
0xc7d: @ CreateInvItem(Stack[-3])
0xc7e: Pop(0)
0xc7f: @@ SetItemName(Stack[-7])
0xc80: Pop(0)
0xc81: Push("Organ")
0xc82: Push((int) 1)
0xc83: @@ SetProperty(Stack[-2], Stack[-1])
0xc84: Pop(2)
0xc85: @@ GetItemID(Stack[-2])
0xc86: Pop(0)
0xc87: Push((int) 0)
0xc88: Push((int) 1)
0xc89: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xc8a: Pop(2)
0xc8b: Return(); Pop(6)

0xc8c: Stack[-3] = 0
0xc8d: PushEmpty(int)
0xc8e: Call2 0xc4a

0xc8f: Pop(0)
0xc90: Push((int) 1)
0xc91: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xc92: IF (Stack[-1] == 0) GOTO 0xc94; Pop(1)

0xc93: Return(); Pop(0)

0xc94: PushEmpty(string)
0xc95: Stack[-1] = "liver"
0xc96: Call2 0xc7c

0xc97: Pop(1)
0xc98: PushEmpty(string)
0xc99: Stack[-1] = "kidney"
0xc9a: Call2 0xc7c

0xc9b: Pop(1)
0xc9c: PushEmpty(string)
0xc9d: Stack[-1] = "heart"
0xc9e: Call2 0xc7c

0xc9f: Pop(1)
0xca0: PushEmpty(string)
0xca1: Stack[-1] = "blood"
0xca2: Call2 0xc7c

0xca3: Pop(1)
0xca4: Return(); Pop(0)

0xca5: PushEmpty(bool, bool)
0xca6: Push((int) 0)
0xca7: @ ClearSubContainer(Stack[-1])
0xca8: Pop(1)
0xca9: PushEmpty(int, int)
0xcaa: Stack[-2] = (int) 0
0xcab: Push((int) 10)
0xcac: PushEmpty(int)
0xcad: Call2 0xc0a

0xcae: Pop(0)
0xcaf: Push((int) 10)
0xcb0: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcb1: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xcb2: Call2 0xc5d

0xcb3: Pop(2)
0xcb4: PushEmpty(string, int, int)
0xcb5: Stack[-3] = "hook"
0xcb6: Stack[-2] = (int) 1
0xcb7: Stack[-1] = (int) 4
0xcb8: Call2 0xb6d

0xcb9: Pop(3)
0xcba: PushEmpty(string, int, int)
0xcbb: Stack[-3] = "watch"
0xcbc: Stack[-2] = (int) 1
0xcbd: Stack[-1] = (int) 10
0xcbe: Call2 0xb6d

0xcbf: Pop(3)
0xcc0: Return(); Pop(2)

0xcc1: PushEmpty(int, bool, int, int, bool, int)
0xcc2: Push((int) 0)
0xcc3: @ ClearSubContainer(Stack[-1])
0xcc4: Pop(1)
0xcc5: PushEmpty(int)
0xcc6: Call2 0xc0a

0xcc7: Stack[-2] = Stack[-1]
0xcc8: Pop(1)
0xcc9: Push(Stack[-7])
0xcca: IF (Stack[-1] == 0) GOTO 0xcf7; Pop(1)

0xccb: PushEmpty(string, int, int, int)
0xccc: Stack[-4] = "alpha_pills"
0xccd: Stack[-3] = (int) 1
0xcce: Stack[-2] = (int) 2
0xccf: Stack[-1] = (int) 4
0xcd0: Call2 0xb78

0xcd1: Pop(4)
0xcd2: PushEmpty(string, int, int, int)
0xcd3: Stack[-4] = "meradorm"
0xcd4: Stack[-3] = (int) 2
0xcd5: Stack[-2] = (int) 3
0xcd6: Stack[-1] = (int) 3
0xcd7: Call2 0xb78

0xcd8: Pop(4)
0xcd9: Push((int) 3)
0xcda: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xcdb: IF (Stack[-1] == 0) GOTO 0xce2; Pop(1)

0xcdc: PushEmpty(string, int, int)
0xcdd: Stack[-3] = "beta_pills"
0xcde: Stack[-2] = (int) 1
0xcdf: Stack[-1] = (int) 4
0xce0: Call2 0xb6d

0xce1: Pop(3)
0xce2: Push((int) 8)
0xce3: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xce4: IF (Stack[-1] == 0) GOTO 0xced; Pop(1)

0xce5: PushEmpty(string, int, int, int)
0xce6: Stack[-4] = "monomicin"
0xce7: Stack[-3] = (int) 1
0xce8: Stack[-2] = (int) 2
0xce9: Stack[-1] = (int) 2
0xcea: Call2 0xb78

0xceb: Pop(4)
0xcec: GOTO 0xcf6

0xced: Push((int) 4)
0xcee: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xcef: IF (Stack[-1] == 0) GOTO 0xcf6; Pop(1)

0xcf0: PushEmpty(string, int, int)
0xcf1: Stack[-3] = "monomicin"
0xcf2: Stack[-2] = (int) 1
0xcf3: Stack[-1] = (int) 2
0xcf4: Call2 0xb6d

0xcf5: Pop(3)
0xcf6: GOTO 0xd24

0xcf7: PushEmpty(string, int, int)
0xcf8: Stack[-3] = "lockpick"
0xcf9: Stack[-2] = (int) 1
0xcfa: Stack[-1] = (int) 4
0xcfb: Call2 0xb6d

0xcfc: Pop(3)
0xcfd: PushEmpty(string, int, int)
0xcfe: Stack[-3] = "rifle_ammo"
0xcff: Stack[-2] = (int) 1
0xd00: Stack[-1] = (int) 2
0xd01: Call2 0xb6d

0xd02: Pop(3)
0xd03: PushEmpty(string, int, int)
0xd04: Stack[-3] = "revolver_ammo"
0xd05: Stack[-2] = (int) 1
0xd06: Stack[-1] = (int) 2
0xd07: Call2 0xb6d

0xd08: Pop(3)
0xd09: PushEmpty(string, int, int, int)
0xd0a: Stack[-4] = "samopal_ammo"
0xd0b: Stack[-3] = (int) 1
0xd0c: Stack[-2] = (int) 2
0xd0d: Stack[-1] = (int) 2
0xd0e: Call2 0xb78

0xd0f: Pop(4)
0xd10: Push((int) 8)
0xd11: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd12: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd13: PushEmpty(string, int, int, int)
0xd14: Stack[-4] = "monomicin"
0xd15: Stack[-3] = (int) 1
0xd16: Stack[-2] = (int) 2
0xd17: Stack[-1] = (int) 2
0xd18: Call2 0xb78

0xd19: Pop(4)
0xd1a: GOTO 0xd24

0xd1b: Push((int) 4)
0xd1c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd1d: IF (Stack[-1] == 0) GOTO 0xd24; Pop(1)

0xd1e: PushEmpty(string, int, int)
0xd1f: Stack[-3] = "monomicin"
0xd20: Stack[-2] = (int) 1
0xd21: Stack[-1] = (int) 2
0xd22: Call2 0xb6d

0xd23: Pop(3)
0xd24: Return(); Pop(6)

0xd25: PushEmpty(int, int)
0xd26: @ GetInvItemByName(Stack[-1], Stack[-3])
0xd27: Pop(0)
0xd28: Stack[-4] = Stack[-1]
0xd29: Return(); Pop(2)

0xd2a: PushEmpty()
0xd2b: PushEmpty(object)
0xd2c: Stack[-1] = Stack[-2]
0xd2d: Push(-1, 0); TaskCall(2)
0xd2e: Call2 0x1dc

0xd2f: Pop(-1, 0); TaskReturn
0xd30: Pop(1)
0xd31: Return(); Pop(0)

0xd32: PushEmpty(float, float)
0xd33: Push("health")
0xd34: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd35: IF (Stack[-1] == 0) GOTO 0xd3e; Pop(1)

0xd36: Push("health")
0xd37: @ GetProperty(Stack[-1], Stack[-2])
0xd38: Pop(1)
0xd39: Push((int) 0)
0xd3a: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xd3b: IF (Stack[-1] == 0) GOTO 0xd3e; Pop(1)

0xd3c: @ SignalDeath(Stack[-4])
0xd3d: Pop(0)
0xd3e: Return(); Pop(2)

0xd3f: PushEmpty()
0xd40: PushEmpty(object)
0xd41: Stack[-1] = Stack[-2]
0xd42: Call2 0xd2a

0xd43: Pop(1)
0xd44: Return(); Pop(0)

0xd45: PushEmpty()
0xd46: PushEmpty(object, int, float)
0xd47: Stack[-3] = Stack[-7]
0xd48: Stack[-2] = Stack[-6]
0xd49: Stack[-1] = Stack[-5]
0xd4a: Call2 0xa85

0xd4b: Pop(3)
0xd4c: Return(); Pop(0)

0xd4d: PushEmpty()
0xd4e: PushEmpty(object, int, float, cvector, cvector)
0xd4f: Stack[-5] = Stack[-11]
0xd50: Stack[-4] = Stack[-10]
0xd51: Stack[-3] = Stack[-9]
0xd52: Stack[-2] = Stack[-7]
0xd53: Stack[-1] = Stack[-6]
0xd54: Call2 0xac9

0xd55: Pop(5)
0xd56: Return(); Pop(0)

0xd57: PushEmpty()
0xd58: Push("unholster")
0xd59: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5a: IF (Stack[-1] == 0) GOTO 0xd62; Pop(1)

0xd5b: PushEmpty(bool, object)
0xd5c: Stack[-1] = Stack[-4]
0xd5d: Call2 0xe2e

0xd5e: Stack[-5] = Stack[-2]
0xd5f: Pop(2)
0xd60: Return(); Pop(0)

0xd61: GOTO 0xd75

0xd62: Push("player_shot")
0xd63: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd64: IF (Stack[-1] == 0) GOTO 0xd6c; Pop(1)

0xd65: PushEmpty(bool, object)
0xd66: Stack[-1] = Stack[-4]
0xd67: Call2 0xe33

0xd68: Stack[-5] = Stack[-2]
0xd69: Pop(2)
0xd6a: Return(); Pop(0)

0xd6b: GOTO 0xd75

0xd6c: Push("battle")
0xd6d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd6e: IF (Stack[-1] == 0) GOTO 0xd75; Pop(1)

0xd6f: PushEmpty(bool, object)
0xd70: Stack[-1] = Stack[-4]
0xd71: Call2 0xe48

0xd72: Stack[-5] = Stack[-2]
0xd73: Pop(2)
0xd74: Return(); Pop(0)

0xd75: Stack[-3] = (bool) 0
0xd76: Return(); Pop(0)

0xd77: PushEmpty()
0xd78: Push("unholster")
0xd79: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7a: IF (Stack[-1] == 0) GOTO 0xd80; Pop(1)

0xd7b: PushEmpty(object)
0xd7c: Stack[-1] = Stack[-3]
0xd7d: Call2 0xe31

0xd7e: Pop(1)
0xd7f: GOTO 0xd8f

0xd80: Push("player_shot")
0xd81: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd82: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd83: PushEmpty(object)
0xd84: Stack[-1] = Stack[-3]
0xd85: Call2 0xe42

0xd86: Pop(1)
0xd87: GOTO 0xd8f

0xd88: Push("battle")
0xd89: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8a: IF (Stack[-1] == 0) GOTO 0xd8f; Pop(1)

0xd8b: PushEmpty(object)
0xd8c: Stack[-1] = Stack[-3]
0xd8d: Call2 0xe4b

0xd8e: Pop(1)
0xd8f: Return(); Pop(0)

0xd90: PushEmpty(bool, bool)
0xd91: PushEmpty(bool)
0xd92: Stack[-1] = (bool) 0
0xd93: PushEmpty(bool, object)
0xd94: Stack[-1] = Stack[-6]
0xd95: Call2 0xe2e

0xd96: Pop(1)
0xd97: IF (Stack[-1] == 0) GOTO 0xd9e; Pop(1)

0xd98: PushEmpty(bool, object)
0xd99: Stack[-1] = Stack[-6]
0xd9a: Call2 0x9be

0xd9b: Pop(1)
0xd9c: IF (Stack[-1] == 0) GOTO 0xd9e; Pop(1)

0xd9d: Stack[-1] = (bool) 1
0xd9e: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xd9f: @@ IsWeaponHolstered(Stack[-1])
0xda0: Pop(0)
0xda1: Pop(0); Push((bool) Stack[-1] == 0)
0xda2: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xda3: Stack[-4] = (bool) 1
0xda4: Return(); Pop(2)

0xda5: Stack[-4] = (bool) 0
0xda6: Return(); Pop(2)

0xda7: PushEmpty()
0xda8: PushEmpty(object)
0xda9: Stack[-1] = Stack[-2]
0xdaa: Call2 0xe31

0xdab: Pop(1)
0xdac: Return(); Pop(0)

0xdad: PushEmpty()
0xdae: PushEmpty(bool, object)
0xdaf: Stack[-1] = Stack[-3]
0xdb0: Call2 0x9be

0xdb1: Pop(1)
0xdb2: IF (Stack[-1] == 0) GOTO 0xdb9; Pop(1)

0xdb3: PushEmpty(object)
0xdb4: Call2 0xbb0

0xdb5: Pop(0)
0xdb6: Push((float)-0.05)
0xdb7: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xdb8: Pop(2)
0xdb9: Return(); Pop(0)

0xdba: PushEmpty(object, object)
0xdbb: Push("heal")
0xdbc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdbd: IF (Stack[-1] == 0) GOTO 0xdc8; Pop(1)

0xdbe: Push("player")
0xdbf: @ FindActor(Stack[-2], Stack[-1])
0xdc0: Pop(1)
0xdc1: PushEmpty(bool, object)
0xdc2: Stack[-1] = Stack[-3]
0xdc3: Call2 0xe52

0xdc4: Stack[-6] = Stack[-2]
0xdc5: Pop(2)
0xdc6: Return(); Pop(2)

0xdc7: Stack[-1] = 0
0xdc8: Stack[-4] = (bool) 0
0xdc9: Return(); Pop(2)

0xdca: PushEmpty(object, object)
0xdcb: Push("heal")
0xdcc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdcd: IF (Stack[-1] == 0) GOTO 0xdd6; Pop(1)

0xdce: Push("player")
0xdcf: @ FindActor(Stack[-2], Stack[-1])
0xdd0: Pop(1)
0xdd1: PushEmpty(object)
0xdd2: Stack[-1] = Stack[-2]
0xdd3: Call2 0xe55

0xdd4: Pop(1)
0xdd5: Stack[-1] = 0
0xdd6: Return(); Pop(2)

0xdd7: PushEmpty(string, string)
0xdd8: Stack[-1] = "idle"
0xdd9: Push(Stack[-3])
0xdda: IF (Stack[-1] == 0) GOTO 0xddc; Pop(1)

0xddb: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xddc: Stack[-4] = Stack[-1]
0xddd: Return(); Pop(2)

0xdde: PushEmpty(int, bool, int, bool)
0xddf: Stack[-2] = (int) 0
0xde0: Push("all")
0xde1: PushEmpty(string, int)
0xde2: Stack[-1] = Stack[-5]
0xde3: Call2 0xdd7

0xde4: Pop(1)
0xde5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xde6: Pop(2)
0xde7: Pop(0); Push((bool) Stack[-1] == 0)
0xde8: IF (Stack[-1] == 0) GOTO 0xdea; Pop(1)

0xde9: GOTO 0xded

0xdea: Push((int) 1)
0xdeb: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xdec: GOTO 0xde0

0xded: Stack[-5] = Stack[-2]
0xdee: Return(); Pop(4)

0xdef: PushEmpty()
0xdf0: PushEmpty(bool)
0xdf1: Call2 0xe7b

0xdf2: Pop(0)
0xdf3: IF (Stack[-1] == 0) GOTO 0xdf6; Pop(1)

0xdf4: Stack[-2] = (int) 2
0xdf5: GOTO 0xdf7

0xdf6: Stack[-2] = (int) 0
0xdf7: Return(); Pop(0)

0xdf8: PushEmpty()
0xdf9: PushEmpty(object)
0xdfa: Stack[-1] = Stack[-2]
0xdfb: Push(-1, 1); TaskCall(5)
0xdfc: Call2 0x4e3

0xdfd: Pop(-1, 1); TaskReturn
0xdfe: Pop(1)
0xdff: Return(); Pop(0)

0xe00: PushEmpty()
0xe01: PushEmpty(bool, object)
0xe02: Stack[-1] = Stack[-3]
0xe03: Call2 0xa41

0xe04: Pop(1)
0xe05: IF (Stack[-1] == 0) GOTO 0xe08; Pop(1)

0xe06: Stack[-2] = (int) 2
0xe07: GOTO 0xe09

0xe08: Stack[-2] = (int) 0
0xe09: Return(); Pop(0)

0xe0a: PushEmpty()
0xe0b: PushEmpty(object)
0xe0c: Stack[-1] = Stack[-2]
0xe0d: Push(-1, 6); TaskCall(6)
0xe0e: Call2 0x5f6

0xe0f: Pop(-1, 6); TaskReturn
0xe10: Pop(1)
0xe11: Return(); Pop(0)

0xe12: PushEmpty()
0xe13: PushEmpty(int, object)
0xe14: Stack[-1] = Stack[-4]
0xe15: Call2 0xe00

0xe16: Stack[-5] = Stack[-2]
0xe17: Pop(2)
0xe18: Return(); Pop(0)

0xe19: PushEmpty()
0xe1a: PushEmpty(object)
0xe1b: Stack[-1] = Stack[-2]
0xe1c: Call2 0xe0a

0xe1d: Pop(1)
0xe1e: Return(); Pop(0)

0xe1f: PushEmpty()
0xe20: Stack[-2] = (int) 2
0xe21: Return(); Pop(0)

0xe22: PushEmpty()
0xe23: PushEmpty(object)
0xe24: Stack[-1] = Stack[-2]
0xe25: Call2 0xe69

0xe26: Pop(1)
0xe27: Return(); Pop(0)

0xe28: Return(); Pop(0)

0xe29: PushEmpty()
0xe2a: Stack[-3] = (int) 0
0xe2b: Return(); Pop(0)

0xe2c: PushEmpty()
0xe2d: Return(); Pop(0)

0xe2e: PushEmpty()
0xe2f: Stack[-2] = (bool) 0
0xe30: Return(); Pop(0)

0xe31: PushEmpty()
0xe32: Return(); Pop(0)

0xe33: PushEmpty(bool, bool)
0xe34: @ CanSee(Stack[-1], Stack[-3])
0xe35: Pop(0)
0xe36: Stack[-4] = (bool) 1
0xe37: Push(Stack[-1])
0xe38: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe39: PushEmpty(float, object)
0xe3a: Stack[-1] = Stack[-5]
0xe3b: Call2 0x9b6

0xe3c: Pop(1)
0xe3d: Push((int) 2250000)
0xe3e: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xe3f: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe40: Stack[-4] = (bool) 0
0xe41: Return(); Pop(2)

0xe42: PushEmpty()
0xe43: PushEmpty(object)
0xe44: Stack[-1] = Stack[-2]
0xe45: Call2 0xdf8

0xe46: Pop(1)
0xe47: Return(); Pop(0)

0xe48: PushEmpty()
0xe49: Stack[-2] = (bool) 0
0xe4a: Return(); Pop(0)

0xe4b: PushEmpty()
0xe4c: Return(); Pop(0)

0xe4d: PushEmpty()
0xe4e: Stack[-2] = (int) 0
0xe4f: Return(); Pop(0)

0xe50: PushEmpty()
0xe51: Return(); Pop(0)

0xe52: PushEmpty()
0xe53: Stack[-2] = (bool) 0
0xe54: Return(); Pop(0)

0xe55: PushEmpty()
0xe56: Return(); Pop(0)

0xe57: Stack[-1] = (int) 518097
0xe58: Return(); Pop(0)

0xe59: Stack[-1] = (int) 518096
0xe5a: Return(); Pop(0)

0xe5b: Stack[-1] = "ui/NPC_Citizen2.png"
0xe5c: Return(); Pop(0)

0xe5d: Stack[-1] = "ui/NPC_Citizen2_b.png"
0xe5e: Return(); Pop(0)

0xe5f: Stack[-1] = (bool) 0
0xe60: Return(); Pop(0)

0xe61: Push(GlobalVars[0])
0xe62: Stack[-1] = (bool) 0
0xe63: GlobalVars[0] = Stack[-1]; Pop(1)
0xe64: PushEmpty(bool)
0xe65: Stack[-1] = (bool) 1
0xe66: Call2 0xcc1

0xe67: Pop(1)
0xe68: Return(); Pop(0)

0xe69: PushEmpty(bool, bool)
0xe6a: Push(GlobalVars[0])
0xe6b: IF (Stack[-1] == 0) GOTO 0xe76; Pop(1)

0xe6c: @ IsOverrideActive(Stack[-1])
0xe6d: Pop(0)
0xe6e: Pop(0); Push((bool) Stack[-1] == 0)
0xe6f: IF (Stack[-1] == 0) GOTO 0xe74; Pop(1)

0xe70: PushEmpty(object)
0xe71: Stack[-1] = Stack[-4]
0xe72: Call2 0xc50

0xe73: Pop(1)
0xe74: Return(); Pop(2)

0xe75: GOTO 0xe7a

0xe76: PushEmpty(object)
0xe77: Stack[-1] = Stack[-4]
0xe78: Call2 0xe9c

0xe79: Pop(1)
0xe7a: Return(); Pop(2)

0xe7b: Stack[-1] = (bool) 0
0xe7c: Return(); Pop(0)

0xe7d: PushEmpty()
0xe7e: Stack[-4] = (bool) 1
0xe7f: Return(); Pop(0)

0xe80: PushEmpty()
0xe81: PushEmpty(bool, object)
0xe82: Stack[-1] = Stack[-3]
0xe83: Call2 0x9be

0xe84: Pop(1)
0xe85: IF (Stack[-1] == 0) GOTO 0xe91; Pop(1)

0xe86: PushEmpty(object)
0xe87: Call2 0xbb0

0xe88: Pop(0)
0xe89: Push((float)-0.1)
0xe8a: Push((bool) 1)
0xe8b: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe8c: Pop(3)
0xe8d: PushEmpty(bool)
0xe8e: Stack[-1] = (bool) 1
0xe8f: Call2 0xca5

0xe90: Pop(1)
0xe91: PushEmpty()
0xe92: Call2 0xc8d

0xe93: Pop(0)
0xe94: Push(GlobalVars[0])
0xe95: Stack[-1] = (bool) 1
0xe96: GlobalVars[0] = Stack[-1]; Pop(1)
0xe97: Push((int) 50)
0xe98: Push((int) 40)
0xe99: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xe9a: Pop(2)
0xe9b: Return(); Pop(0)

0xe9c: PushEmpty()
0xe9d: PushEmpty(int, object)
0xe9e: Stack[-1] = Stack[-3]
0xe9f: Push(-2, 1); TaskCall(0)
0xea0: Call2 0x0

0xea1: Pop(-2, 1); TaskReturn
0xea2: Pop(2)
0xea3: Return(); Pop(0)

