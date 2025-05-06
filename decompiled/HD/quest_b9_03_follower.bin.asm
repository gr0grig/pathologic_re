GlobalVarCount = 7
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 int 
	G_VAR_3 object 
	G_VAR_4 object 
	G_VAR_5 object 
	G_VAR_6 int 

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
	noaccess
	Unknown FSM state
	player
	GetPosition
	Can't retreat, distance: 
	head
	pt_b9q03_bonfire
	GetLocator
	walk
	run
	hunt
	GetPFPosition
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	cleanup
	@GetAttackDistance
	GetAttackDistance
	attack
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
	SetReturnValue
	oob9BoyFollower1
	b9q03Bonfire1
	pt_bonfire1
	AddMark
	b9q03Bonfire2
	pt_bonfire2
	b9q03Bonfire3
	pt_bonfire3
	b9q03Bonfire4
	pt_bonfire4
	ShowMap
	b9q03BonefiresCount
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	b9q03Bonfire
	enable_bonfire
	quest_b9_03
	bonfire_burn
	b9q03BonfireBurnedByFollower
	changing state to c_iStateWaitForCommand
	changing state to c_iStateFollow
	changing state to c_iStateIdleAndFollow
	changing state to c_iStateRetreatPlayer
	changing state to c_iStateBurn
	changing state to c_iStateWaitForLoad
	changing state to c_iStateGoAway
	changing state to c_iStateAttack
	changing state to c_iStateRetreatPDamage
	fail

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
	SetProperty (2 args)
	Trace (1 args)
	FindActor (2 args)
	Stop (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Sleep (1 args)
	Rotate (2 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetScene (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RotateAsync (2 args)
	RequestClearPath (1 args)
	HasAnimation (3 args)
	RemoveActor (1 args)
	Hold (0 args)
	SetRTEnvelope (2 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	GetMainOutdoorScene (1 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	Speak (1 args)
	CanSee (2 args)
	SendPlayerEnemy (2 args)
	Rotate (3 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
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
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetVariable (2 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	TriggerWorld (2 args)
	BroadcastMessage (3 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x197
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd6 Vars = (int, int)
	GTASK_2  Params = 0
	GTASK_3  Params = 0
		EVENT_0 Op = 0x2ab Vars = (object)
		EVENT_17 Op = 0x2b1 Vars = (object)
		EVENT_30 Op = 0x2c1 Vars = (object, object, bool)
		EVENT_6 Op = 0x2d9 Vars = ()
	GTASK_4  Params = 1
		EVENT_0 Op = 0x2eb Vars = (object)
		EVENT_17 Op = 0x2f1 Vars = (object)
		EVENT_30 Op = 0x301 Vars = (object, object, bool)
		EVENT_6 Op = 0x319 Vars = ()
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x333 Vars = ()
		EVENT_7 Op = 0x3a2 Vars = (int)
		EVENT_41 Op = 0x3dd Vars = (object)
	GTASK_6 Vars = (object, cvector, bool, bool) Params = 0
		EVENT_6 Op = 0x414 Vars = ()
		EVENT_7 Op = 0x486 Vars = (int)
		EVENT_41 Op = 0x4c1 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool, bool) Params = 0
		EVENT_7 Op = 0x4f6 Vars = (int)
		EVENT_17 Op = 0x50b Vars = (object)
		EVENT_6 Op = 0x51b Vars = ()
		EVENT_41 Op = 0x5c5 Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x5eb Vars = (int)
		EVENT_17 Op = 0x5fc Vars = (object)
		EVENT_6 Op = 0x612 Vars = ()
		EVENT_41 Op = 0x6bc Vars = (object)
	GTASK_9 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x6db Vars = (object)
		EVENT_17 Op = 0x6e4 Vars = (object)
		EVENT_30 Op = 0x6fa Vars = (object, object, bool)
		EVENT_6 Op = 0x715 Vars = ()
		EVENT_7 Op = 0x747 Vars = (int)
	GTASK_10 Vars = (bool) Params = 0
		EVENT_7 Op = 0x7ee Vars = (int)
		EVENT_0 Op = 0x800 Vars = (object)
		EVENT_17 Op = 0x80a Vars = (object)
		EVENT_30 Op = 0x822 Vars = (object, object, bool)
		EVENT_6 Op = 0x83e Vars = ()
	GTASK_11 Vars = (bool) Params = 1
		EVENT_0 Op = 0x87b Vars = (object)
		EVENT_17 Op = 0x884 Vars = (object)
		EVENT_30 Op = 0x89a Vars = (object, object, bool)
		EVENT_6 Op = 0x8b5 Vars = ()
		EVENT_7 Op = 0x926 Vars = (int)
		EVENT_10 Op = 0x937 Vars = (object)
		EVENT_41 Op = 0x942 Vars = (object)
	GTASK_12 Vars = (bool) Params = 0
		EVENT_17 Op = 0x954 Vars = (object)
		EVENT_30 Op = 0x96a Vars = (object, object, bool)
		EVENT_6 Op = 0x985 Vars = ()
	GTASK_13 Vars = (bool, object, bool) Params = 0
		EVENT_0 Op = 0x9c8 Vars = (object)
		EVENT_17 Op = 0x9d2 Vars = (object)
		EVENT_30 Op = 0x9e8 Vars = (object, object, bool)
		EVENT_6 Op = 0xa03 Vars = ()
		EVENT_7 Op = 0xa72 Vars = (int)
		EVENT_10 Op = 0xa84 Vars = (object)
		EVENT_41 Op = 0xa8f Vars = (object)
	GTASK_14  Params = 1
		EVENT_6 Op = 0xaac Vars = ()
		EVENT_0 Op = 0xac3 Vars = (object)
		EVENT_22 Op = 0xb42 Vars = (object, int, float, float)
		EVENT_16 Op = 0xb44 Vars = (object, string)
		EVENT_41 Op = 0xb46 Vars = (object)
	GTASK_15  Params = 0
		EVENT_26 Op = 0xb5a Vars = (string)
		EVENT_5 Op = 0xb66 Vars = ()
	GTASK_16 Vars = (object, int, int, bool, bool, float, int, object) Params = 1
		EVENT_7 Op = 0xb83 Vars = (int)
		EVENT_1 Op = 0xb8b Vars = (object)
		EVENT_6 Op = 0xb8d Vars = ()
	GTASK_17 Vars = (bool, object, bool, object) Params = 6
		EVENT_7 Op = 0xe6f Vars = (int)
		EVENT_6 Op = 0xe7c Vars = ()
		EVENT_1 Op = 0xed0 Vars = (object)
		EVENT_2 Op = 0xedf Vars = (object)
		EVENT_10 Op = 0xf65 Vars = (object)
		EVENT_41 Op = 0xf70 Vars = (object)

Events:
EVENT_26 Op = 0x1391 Vars = (string)
EVENT_22 Op = 0x13f4 Vars = (object, int, float, float)
EVENT_43 Op = 0x13fc Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x1406 Vars = (object, string)
EVENT_41 Op = 0x143f Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x10e2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x134b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1349

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x134d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x134f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x12fc

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
0x41: Call2 0x1127

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
0x4f: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x1262

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x1214

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xc0

0x5d: Pop(1)
0x5e: Push((int) 530322)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 530323)
0x64: Push((int) 31711)
0x65: Push((int) 31710)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 531020)
0x69: Push((int) 32350)
0x6a: Push((int) 32349)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0xa2

0x6e: PushEmpty(bool, object)
0x6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x70: Call2 0x126e

0x71: Pop(1)
0x72: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x73: PushEmpty(string)
0x74: Stack[-1] = "Neutral"
0x75: Call2 0xc0

0x76: Pop(1)
0x77: Push((int) 530326)
0x78: @@ SetMessage(Stack[-1])
0x79: Pop(1)
0x7a: @@ ClearReplies()
0x7b: Pop(0)
0x7c: Push((int) 530327)
0x7d: Push((int) -1)
0x7e: Push((int) 31714)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0xa2

0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral"
0x84: Call2 0xc0

0x85: Pop(1)
0x86: Push((int) 530270)
0x87: @@ SetMessage(Stack[-1])
0x88: Pop(1)
0x89: @@ ClearReplies()
0x8a: Pop(0)
0x8b: Push((int) 530271)
0x8c: Push((int) -1)
0x8d: Push((int) 31661)
0x8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f: Pop(3)
0x90: Push((int) 530273)
0x91: Push((int) -1)
0x92: Push((int) 31663)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: Push((int) 530274)
0x96: Push((int) -1)
0x97: Push((int) 31664)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: Push((int) 530272)
0x9b: Push((int) -1)
0x9c: Push((int) 31662)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: GOTO 0xa2

0xa0: Return(); Pop(0)

0xa1: GOTO 0x4e

0xa2: PushEmpty(bool)
0xa3: Call2 0x1351

0xa4: Pop(0)
0xa5: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa6: @ lshWaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: PushEmpty(string)
0xac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xad: Call2 0x1139

0xae: Pop(1)
0xaf: GOTO 0xa6

0xb0: GOTO 0xbf

0xb1: Push("all")
0xb2: Push("idle")
0xb3: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: @ WaitForAnimEnd()
0xb6: Pop(0)
0xb7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: GOTO 0xbf

0xba: Push("all")
0xbb: Push("idle")
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: GOTO 0xb5

0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: PushEmpty(bool)
0xc2: Call2 0x1351

0xc3: Pop(0)
0xc4: Pop(1); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(0)

0xc7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Return(); Pop(0)

0xca: PushEmpty(string, bool)
0xcb: Stack[-2] = Stack[-3]
0xcc: Push("")
0xcd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcf: Stack[-1] = (bool) 0
0xd0: GOTO 0xd2

0xd1: Stack[-1] = (bool) 1
0xd2: Call2 0x1149

0xd3: Pop(2)
0xd4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd5: Return(); Pop(0)

0xd6: PushEmpty()
0xd7: Push((int) 1)
0xd8: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0xd9: PushEmpty()
0xda: Call2 0x1163

0xdb: Pop(0)
0xdc: Push((int) 31712)
0xdd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0x1205

0xe3: Pop(2)
0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call2 0x121a

0xe8: Pop(2)
0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0x1252

0xed: Pop(2)
0xee: Push((int) 31714)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x1248

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x124d

0xfa: Pop(2)
0xfb: Push((int) 31661)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x120a

0x102: Pop(2)
0x103: Push((int) 31663)
0x104: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x106: PushEmpty(object, object)
0x107: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x108: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x109: Call2 0x1205

0x10a: Pop(2)
0x10b: Push((int) 31664)
0x10c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x120f

0x112: Pop(2)
0x113: Push((int) 31709)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call2 0x1262

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x11b: PushEmpty(object, object)
0x11c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11e: Call2 0x1214

0x11f: Pop(2)
0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral"
0x122: Call2 0xc0

0x123: Pop(1)
0x124: Push((int) 530322)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: Push((int) 530323)
0x12a: Push((int) 31711)
0x12b: Push((int) 31710)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Push((int) 531020)
0x12f: Push((int) 32350)
0x130: Push((int) 32349)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Return(); Pop(0)

0x134: PushEmpty(bool, object)
0x135: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136: Call2 0x126e

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0xc0

0x13c: Pop(1)
0x13d: Push((int) 530326)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 530327)
0x143: Push((int) -1)
0x144: Push((int) 31714)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: PushEmpty(string)
0x149: Stack[-1] = "Neutral"
0x14a: Call2 0xc0

0x14b: Pop(1)
0x14c: Push((int) 530270)
0x14d: @@ SetMessage(Stack[-1])
0x14e: Pop(1)
0x14f: @@ ClearReplies()
0x150: Pop(0)
0x151: Push((int) 530271)
0x152: Push((int) -1)
0x153: Push((int) 31661)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Push((int) 530273)
0x157: Push((int) -1)
0x158: Push((int) 31663)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Push((int) 530274)
0x15c: Push((int) -1)
0x15d: Push((int) 31664)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Push((int) 530272)
0x161: Push((int) -1)
0x162: Push((int) 31662)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Push((int) 32350)
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Neutral"
0x16b: Call2 0xc0

0x16c: Pop(1)
0x16d: Push((int) 531021)
0x16e: @@ SetMessage(Stack[-1])
0x16f: Pop(1)
0x170: @@ ClearReplies()
0x171: Pop(0)
0x172: Push((int) 531023)
0x173: Push((int) 31711)
0x174: Push((int) 32352)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: Push((int) 31711)
0x179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral"
0x17d: Call2 0xc0

0x17e: Pop(1)
0x17f: Push((int) 530324)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 530325)
0x185: Push((int) -1)
0x186: Push((int) 31712)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Return(); Pop(0)

0x18a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18b: PushEmpty(bool)
0x18c: Call2 0x1351

0x18d: Pop(0)
0x18e: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18f: @ lshStopAnimation()
0x190: Pop(0)
0x191: GOTO 0x194

0x192: @ StopAnimation()
0x193: Pop(0)
0x194: Return(); Pop(0)

0x195: GOTO 0xd7

0x196: Return(); Pop(0)

0x197: Push(GlobalVars[2])
0x198: Stack[-1] = (int) 0
0x199: GlobalVars[2] = Stack[-1]; Pop(1)
0x19a: Push(GlobalVars[6])
0x19b: Stack[-1] = (int) 1
0x19c: GlobalVars[6] = Stack[-1]; Pop(1)
0x19d: Push("noaccess")
0x19e: Push((int) 0)
0x19f: @ SetProperty(Stack[-2], Stack[-1])
0x1a0: Pop(2)
0x1a1: Push((bool) 1)
0x1a2: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x1a3: Push((int) 0)
0x1a4: Push(GlobalVars[2])
0x1a5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1a7: PushEmpty()
0x1a8: Push(-0, 0); TaskCall(15)
0x1a9: Call2 0xb48

0x1aa: Pop(-0, 0); TaskReturn
0x1ab: Pop(0)
0x1ac: PushEmpty(bool, int)
0x1ad: Push(GlobalVars[6])
0x1ae: Stack[-2] = Stack[-1]
0x1af: Pop(1)
0x1b0: Call2 0x1399

0x1b1: Pop(1)
0x1b2: Pop(1); Push((bool) Stack[-1] == 0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b4: PushEmpty(bool, int)
0x1b5: Stack[-1] = (int) 2
0x1b6: Call2 0x1399

0x1b7: Pop(2)
0x1b8: GOTO 0x29a

0x1b9: Push((int) 1)
0x1ba: Push(GlobalVars[2])
0x1bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1bd: PushEmpty()
0x1be: Push(-0, 0); TaskCall(3)
0x1bf: Call2 0x29e

0x1c0: Pop(-0, 0); TaskReturn
0x1c1: Pop(0)
0x1c2: Push((int) 1)
0x1c3: Push(GlobalVars[2])
0x1c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c6: PushEmpty()
0x1c7: Push(-0, 5); TaskCall(9)
0x1c8: Call2 0x6d5

0x1c9: Pop(-0, 5); TaskReturn
0x1ca: Pop(0)
0x1cb: GOTO 0x29a

0x1cc: Push((int) 2)
0x1cd: Push(GlobalVars[2])
0x1ce: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d0: PushEmpty()
0x1d1: Push(-0, 3); TaskCall(13)
0x1d2: Call2 0x9a8

0x1d3: Pop(-0, 3); TaskReturn
0x1d4: Pop(0)
0x1d5: GOTO 0x29a

0x1d6: Push((int) 3)
0x1d7: Push(GlobalVars[2])
0x1d8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1da: PushEmpty()
0x1db: Push(-0, 0); TaskCall(3)
0x1dc: Call2 0x29e

0x1dd: Pop(-0, 0); TaskReturn
0x1de: Pop(0)
0x1df: Push((int) 3)
0x1e0: Push(GlobalVars[2])
0x1e1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e3: PushEmpty()
0x1e4: Push(-0, 1); TaskCall(10)
0x1e5: Call2 0x7c2

0x1e6: Pop(-0, 1); TaskReturn
0x1e7: Pop(0)
0x1e8: GOTO 0x29a

0x1e9: Push((int) 8)
0x1ea: Push(GlobalVars[2])
0x1eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ed: PushEmpty()
0x1ee: Push(-0, 4); TaskCall(6)
0x1ef: Call2 0x3f6

0x1f0: Pop(-0, 4); TaskReturn
0x1f1: Pop(0)
0x1f2: GOTO 0x29a

0x1f3: Push((int) 4)
0x1f4: Push(GlobalVars[2])
0x1f5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f7: PushEmpty()
0x1f8: Push(-0, 4); TaskCall(7)
0x1f9: Call2 0x4da

0x1fa: Pop(-0, 4); TaskReturn
0x1fb: Pop(0)
0x1fc: GOTO 0x29a

0x1fd: Push((int) 5)
0x1fe: Push(GlobalVars[2])
0x1ff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x201: PushEmpty(bool)
0x202: Push(-1, 1); TaskCall(11)
0x203: Call2 0x847

0x204: Pop(-1, 1); TaskReturn
0x205: Pop(0)
0x206: Pop(1); Push((bool) Stack[-1] == 0)
0x207: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x208: Push((int) 5)
0x209: Push(GlobalVars[2])
0x20a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x20c: PushEmpty()
0x20d: Push(-0, 1); TaskCall(12)
0x20e: Call2 0x94f

0x20f: Pop(-0, 1); TaskReturn
0x210: Pop(0)
0x211: Push((int) 5)
0x212: Push(GlobalVars[2])
0x213: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x215: PushEmpty(bool, int)
0x216: Stack[-1] = (int) 1
0x217: Call2 0x1399

0x218: Pop(2)
0x219: Push((int) 5)
0x21a: Push(GlobalVars[2])
0x21b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x21d: PushEmpty()
0x21e: Push(-0, 1); TaskCall(12)
0x21f: Call2 0x94f

0x220: Pop(-0, 1); TaskReturn
0x221: Pop(0)
0x222: Push((int) 5)
0x223: Push(GlobalVars[2])
0x224: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x226: PushEmpty(bool, int)
0x227: Stack[-1] = (int) 2
0x228: Call2 0x1399

0x229: Pop(2)
0x22a: GOTO 0x29a

0x22b: Push((int) 6)
0x22c: Push(GlobalVars[2])
0x22d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x22f: PushEmpty(object)
0x230: Push(GlobalVars[3])
0x231: Stack[-2] = Stack[-1]
0x232: Pop(1)
0x233: Push(-1, 3); TaskCall(5)
0x234: Call2 0x322

0x235: Pop(-1, 3); TaskReturn
0x236: Pop(1)
0x237: GOTO 0x29a

0x238: Push((int) 9)
0x239: Push(GlobalVars[2])
0x23a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x23c: PushEmpty(object)
0x23d: Push(GlobalVars[5])
0x23e: Stack[-2] = Stack[-1]
0x23f: Pop(1)
0x240: Push(-1, 8); TaskCall(16)
0x241: Call2 0xb6b

0x242: Pop(-1, 8); TaskReturn
0x243: Pop(1)
0x244: PushEmpty(bool, object)
0x245: Push(GlobalVars[5])
0x246: Stack[-2] = Stack[-1]
0x247: Pop(1)
0x248: Call2 0x1029

0x249: Pop(1)
0x24a: Pop(1); Push((bool) Stack[-1] == 0)
0x24b: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24c: PushEmpty(bool, int)
0x24d: Stack[-1] = (int) 1
0x24e: Call2 0x1399

0x24f: Pop(2)
0x250: GOTO 0x29a

0x251: Push((int) 7)
0x252: Push(GlobalVars[2])
0x253: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x255: PushEmpty(object)
0x256: Push(GlobalVars[4])
0x257: Stack[-2] = Stack[-1]
0x258: Pop(1)
0x259: Push(-1, 3); TaskCall(8)
0x25a: Call2 0x5de

0x25b: Pop(-1, 3); TaskReturn
0x25c: Pop(1)
0x25d: Push((int) 7)
0x25e: Push(GlobalVars[2])
0x25f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x261: PushEmpty(bool)
0x262: Stack[-1] = (bool) 1
0x263: PushEmpty(bool, object)
0x264: Push(GlobalVars[4])
0x265: Stack[-2] = Stack[-1]
0x266: Pop(1)
0x267: Call2 0x1029

0x268: Pop(1)
0x269: Pop(1); Push((bool) Stack[-1] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x26b: PushEmpty(float, object)
0x26c: Push(GlobalVars[4])
0x26d: Stack[-2] = Stack[-1]
0x26e: Pop(1)
0x26f: Call2 0xf9e

0x270: Pop(1)
0x271: Push((float)1000000.0)
0x272: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: Stack[-1] = (bool) 0
0x275: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x276: PushEmpty(bool, object)
0x277: Push(GlobalVars[4])
0x278: Stack[-2] = Stack[-1]
0x279: Pop(1)
0x27a: Call2 0x1029

0x27b: Pop(1)
0x27c: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x27d: PushEmpty(object)
0x27e: Push(GlobalVars[4])
0x27f: Stack[-2] = Stack[-1]
0x280: Pop(1)
0x281: Push(-1, 0); TaskCall(4)
0x282: Call2 0x2e2

0x283: Pop(-1, 0); TaskReturn
0x284: Pop(1)
0x285: Push((int) 7)
0x286: Push(GlobalVars[2])
0x287: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x289: PushEmpty()
0x28a: Push(-0, 1); TaskCall(12)
0x28b: Call2 0x94f

0x28c: Pop(-0, 1); TaskReturn
0x28d: Pop(0)
0x28e: Push((int) 7)
0x28f: Push(GlobalVars[2])
0x290: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x292: PushEmpty(bool, int)
0x293: Stack[-1] = (int) 1
0x294: Call2 0x1399

0x295: Pop(2)
0x296: GOTO 0x29a

0x297: Push("Unknown FSM state")
0x298: @ Trace(Stack[-1])
0x299: Pop(1)
0x29a: @ sync()
0x29b: Pop(0)
0x29c: GOTO 0x1a1

0x29d: Return(); Pop(0)

0x29e: PushEmpty(object, object)
0x29f: Push("player")
0x2a0: @ FindActor(Stack[-2], Stack[-1])
0x2a1: Pop(1)
0x2a2: Pop(0); Push((bool) Stack[-1] == 0)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a4: Return(); Pop(2)

0x2a5: PushEmpty(bool, object)
0x2a6: Stack[-1] = Stack[-3]
0x2a7: Call2 0x104b

0x2a8: Pop(2)
0x2a9: Return(); Pop(2)

0x2aa: Stack[-1] = 0
0x2ab: PushEmpty()
0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[-3]
0x2ae: Call2 0x1413

0x2af: Pop(2)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty()
0x2b2: PushEmpty(bool, object)
0x2b3: Stack[-1] = Stack[-3]
0x2b4: Call2 0xfa6

0x2b5: Pop(1)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b7: PushEmpty(bool, int)
0x2b8: Stack[-1] = (int) 4
0x2b9: Call2 0x1399

0x2ba: Pop(2)
0x2bb: GOTO 0x2c0

0x2bc: PushEmpty(object)
0x2bd: Stack[-1] = Stack[-2]
0x2be: Call2 0x13de

0x2bf: Pop(1)
0x2c0: Return(); Pop(0)

0x2c1: PushEmpty()
0x2c2: PushEmpty(bool)
0x2c3: Stack[-1] = (bool) 1
0x2c4: PushEmpty(bool, object)
0x2c5: Stack[-1] = Stack[-5]
0x2c6: Call2 0x1029

0x2c7: Pop(1)
0x2c8: Pop(1); Push((bool) Stack[-1] == 0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2ca: PushEmpty(float, object)
0x2cb: Stack[-1] = Stack[-5]
0x2cc: Call2 0xf9e

0x2cd: Pop(1)
0x2ce: Push((float)1000000.0)
0x2cf: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: Stack[-1] = (bool) 0
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d3: Return(); Pop(0)

0x2d4: PushEmpty(object)
0x2d5: Stack[-1] = Stack[-3]
0x2d6: Call2 0x13e9

0x2d7: Pop(1)
0x2d8: Return(); Pop(0)

0x2d9: @ Stop()
0x2da: Pop(0)
0x2db: @ StopGroup0()
0x2dc: Pop(0)
0x2dd: PushEmpty(bool, int)
0x2de: Stack[-1] = (int) 0
0x2df: Call2 0x1399

0x2e0: Pop(2)
0x2e1: Return(); Pop(0)

0x2e2: PushEmpty()
0x2e3: Pop(0); Push((bool) Stack[-1] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: Return(); Pop(0)

0x2e6: PushEmpty(bool, object)
0x2e7: Stack[-1] = Stack[-3]
0x2e8: Call2 0x104b

0x2e9: Pop(2)
0x2ea: Return(); Pop(0)

0x2eb: PushEmpty()
0x2ec: PushEmpty(bool, object)
0x2ed: Stack[-1] = Stack[-3]
0x2ee: Call2 0x1413

0x2ef: Pop(2)
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty()
0x2f2: PushEmpty(bool, object)
0x2f3: Stack[-1] = Stack[-3]
0x2f4: Call2 0xfa6

0x2f5: Pop(1)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f7: PushEmpty(bool, int)
0x2f8: Stack[-1] = (int) 4
0x2f9: Call2 0x1399

0x2fa: Pop(2)
0x2fb: GOTO 0x300

0x2fc: PushEmpty(object)
0x2fd: Stack[-1] = Stack[-2]
0x2fe: Call2 0x13de

0x2ff: Pop(1)
0x300: Return(); Pop(0)

0x301: PushEmpty()
0x302: PushEmpty(bool)
0x303: Stack[-1] = (bool) 1
0x304: PushEmpty(bool, object)
0x305: Stack[-1] = Stack[-5]
0x306: Call2 0x1029

0x307: Pop(1)
0x308: Pop(1); Push((bool) Stack[-1] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30a: PushEmpty(float, object)
0x30b: Stack[-1] = Stack[-5]
0x30c: Call2 0xf9e

0x30d: Pop(1)
0x30e: Push((float)1000000.0)
0x30f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: Stack[-1] = (bool) 0
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: Return(); Pop(0)

0x314: PushEmpty(object)
0x315: Stack[-1] = Stack[-3]
0x316: Call2 0x13e9

0x317: Pop(1)
0x318: Return(); Pop(0)

0x319: @ Stop()
0x31a: Pop(0)
0x31b: @ StopGroup0()
0x31c: Pop(0)
0x31d: PushEmpty(bool, int)
0x31e: Stack[-1] = (int) 0
0x31f: Call2 0x1399

0x320: Pop(2)
0x321: Return(); Pop(0)

0x322: PushEmpty()
0x323: PushEmpty(bool, object)
0x324: Stack[-1] = Stack[-3]
0x325: Call2 0x1029

0x326: Pop(1)
0x327: Pop(1); Push((bool) Stack[-1] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x329: PushEmpty(bool, int)
0x32a: Stack[-1] = (int) 1
0x32b: Call2 0x1399

0x32c: Pop(2)
0x32d: Return(); Pop(0)

0x32e: PushEmpty(object)
0x32f: Stack[-1] = Stack[-2]
0x330: Call2 0x359

0x331: Pop(1)
0x332: Return(); Pop(0)

0x333: PushEmpty()
0x334: Call2 0x3d6

0x335: Pop(0)
0x336: PushEmpty(bool, int)
0x337: Stack[-1] = (int) 0
0x338: Call2 0x1399

0x339: Pop(2)
0x33a: Return(); Pop(0)

0x33b: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x33c: @ GetPosition(Stack[-6])
0x33d: Pop(0)
0x33e: @@ GetPosition(Stack[-5])
0x33f: Pop(0)
0x340: @ GetDirection(Stack[-4])
0x341: Pop(0)
0x342: PushEmpty(cvector, cvector)
0x343: PushEmpty(cvector, cvector)
0x344: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x345: Call2 0x1199

0x346: Pop(1)
0x347: Push((float)0.75)
0x348: Pop(1); Push(Stack[-8] * Stack[-1]);
0x349: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x34a: Call2 0x1199

0x34b: Stack[-5] = Stack[-2]
0x34c: Pop(2)
0x34d: Push((int) 32)
0x34e: Push((float)7000.0)
0x34f: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x350: Pop(2)
0x351: Push((int) 100)
0x352: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x353: Push((int) 0)
0x354: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x356: Stack[-1] = (int) 0
0x357: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x358: Return(); Pop(12)

0x359: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x35a: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x35b: PushEmpty(cvector, float)
0x35c: Stack[-1] = (float) 1.74533
0x35d: Call2 0x33b

0x35e: Stack[-7] = Stack[-2]
0x35f: Pop(2)
0x360: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x361: Push((float)2500.0)
0x362: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x364: PushEmpty(cvector, float)
0x365: Stack[-1] = (float) 2.61799
0x366: Call2 0x33b

0x367: Stack[-7] = Stack[-2]
0x368: Pop(2)
0x369: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x36a: Push((float)2500.0)
0x36b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x36d: Push("Can't retreat, distance: ")
0x36e: Pop(0); Push(Sqrt(Stack[-5]))
0x36f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x370: @ Trace(Stack[-1])
0x371: Pop(1)
0x372: Push((float)0.5)
0x373: @ Sleep(Stack[-1])
0x374: Pop(1)
0x375: Return(); Pop(10)

0x376: Push(CvectorIndex(Stack[-5], 0))
0x377: Push(CvectorIndex(Stack[-6], 2))
0x378: @ Rotate(Stack[-2], Stack[-1])
0x379: Pop(2)
0x37a: PushEmpty(cvector)
0x37b: Call2 0xf92

0x37c: Pop(0)
0x37d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x37e: Push((int) 120)
0x37f: Push((float)0.5)
0x380: @ SetTimer(Stack[-2], Stack[-1])
0x381: Pop(2)
0x382: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x383: Push((int) 1)
0x384: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x385: Pop(1)
0x386: Push(Stack[-3])
0x387: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x388: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: GOTO 0x3a1

0x38b: GOTO 0x39f

0x38c: PushEmpty(cvector, float)
0x38d: Stack[-1] = (float) 2.61799
0x38e: Call2 0x33b

0x38f: Stack[-4] = Stack[-2]
0x390: Pop(2)
0x391: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x392: Push((float)2500.0)
0x393: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x395: PushEmpty(cvector)
0x396: Call2 0xf92

0x397: Pop(0)
0x398: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x399: Push((int) 120)
0x39a: Push((float)0.5)
0x39b: @ SetTimer(Stack[-2], Stack[-1])
0x39c: Pop(2)
0x39d: GOTO 0x39f

0x39e: GOTO 0x3a1

0x39f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x3a1: Return(); Pop(10)

0x3a2: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x3a3: Push((int) 120)
0x3a4: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: Return(); Pop(8)

0x3a7: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3a9: @ Stop()
0x3aa: Pop(0)
0x3ab: Push((int) 1)
0x3ac: @ KillTimer(Stack[-1])
0x3ad: Pop(1)
0x3ae: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3af: GOTO 0x3d5

0x3b0: @ GetDirection(Stack[-4])
0x3b1: Pop(0)
0x3b2: Push((float)7000.0)
0x3b3: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x3b4: Pop(1)
0x3b5: PushEmpty(cvector, float)
0x3b6: Stack[-1] = (float) 1.74533
0x3b7: Call2 0x33b

0x3b8: Stack[-4] = Stack[-2]
0x3b9: Pop(2)
0x3ba: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3bb: PushEmpty(bool)
0x3bc: Stack[-1] = (bool) 0
0x3bd: Push((float)2500.0)
0x3be: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c0: PushEmpty(bool)
0x3c1: Stack[-1] = (bool) 1
0x3c2: Pop(0); Push(Stack[-5] * Stack[-5]);
0x3c3: Push((float)2.25)
0x3c4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c5: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c7: PushEmpty(bool)
0x3c8: Call2 0x3e6

0x3c9: Pop(0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: Stack[-1] = (bool) 0
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: Stack[-1] = (bool) 1
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3cf: @ Stop()
0x3d0: Pop(0)
0x3d1: PushEmpty(cvector)
0x3d2: Call2 0xf92

0x3d3: Pop(0)
0x3d4: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x3d5: Return(); Pop(8)

0x3d6: @ Stop()
0x3d7: Pop(0)
0x3d8: Push((int) 120)
0x3d9: @ KillTimer(Stack[-1])
0x3da: Pop(1)
0x3db: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3dc: Return(); Pop(0)

0x3dd: PushEmpty()
0x3de: PushEmpty()
0x3df: Call2 0x3d6

0x3e0: Pop(0)
0x3e1: PushEmpty(object)
0x3e2: Stack[-1] = Stack[-2]
0x3e3: Call2 0x143f

0x3e4: Pop(1)
0x3e5: Return(); Pop(0)

0x3e6: PushEmpty(cvector, cvector, cvector, cvector)
0x3e7: @ GetDirection(Stack[-2])
0x3e8: Pop(0)
0x3e9: PushEmpty(cvector, object)
0x3ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3eb: Call2 0xf97

0x3ec: Stack[-3] = Stack[-2]
0x3ed: Pop(2)
0x3ee: PushEmpty(float, cvector, cvector)
0x3ef: Stack[-2] = Stack[-5]
0x3f0: Stack[-1] = Stack[-4]
0x3f1: Call2 0x11b5

0x3f2: Pop(2)
0x3f3: Push((float)-0.34202)
0x3f4: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x3f5: Return(); Pop(4)

0x3f6: PushEmpty(object, object)
0x3f7: Push((bool) 1)
0x3f8: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x3f9: Push("player")
0x3fa: @ FindActor(Stack[-2], Stack[-1])
0x3fb: Pop(1)
0x3fc: PushEmpty(bool, object)
0x3fd: Stack[-1] = Stack[-3]
0x3fe: Call2 0x1029

0x3ff: Pop(1)
0x400: Pop(1); Push((bool) Stack[-1] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x402: Push((int) 3)
0x403: @ Sleep(Stack[-1])
0x404: Pop(1)
0x405: Push( Stack[3 + Tasks[-1].StackPointer] )
0x406: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x407: GOTO 0x413

0x408: GOTO 0x40a

0x409: GOTO 0x3f7

0x40a: PushEmpty(object)
0x40b: Stack[-1] = Stack[-2]
0x40c: Call2 0x43d

0x40d: Pop(1)
0x40e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x40f: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x410: GOTO 0x413

0x411: Stack[-1] = 0
0x412: GOTO 0x3f7

0x413: Return(); Pop(2)

0x414: @ StopGroup0()
0x415: Pop(0)
0x416: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x417: PushEmpty()
0x418: Call2 0x4ba

0x419: Pop(0)
0x41a: PushEmpty(bool, int)
0x41b: Stack[-1] = (int) 0
0x41c: Call2 0x1399

0x41d: Pop(2)
0x41e: Return(); Pop(0)

0x41f: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x420: @ GetPosition(Stack[-6])
0x421: Pop(0)
0x422: @@ GetPosition(Stack[-5])
0x423: Pop(0)
0x424: @ GetDirection(Stack[-4])
0x425: Pop(0)
0x426: PushEmpty(cvector, cvector)
0x427: PushEmpty(cvector, cvector)
0x428: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x429: Call2 0x1199

0x42a: Pop(1)
0x42b: Push((float)0.75)
0x42c: Pop(1); Push(Stack[-8] * Stack[-1]);
0x42d: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x42e: Call2 0x1199

0x42f: Stack[-5] = Stack[-2]
0x430: Pop(2)
0x431: Push((int) 32)
0x432: Push((float)7000.0)
0x433: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x434: Pop(2)
0x435: Push((int) 100)
0x436: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x437: Push((int) 0)
0x438: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: Stack[-1] = (int) 0
0x43b: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x43c: Return(); Pop(12)

0x43d: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x43e: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x43f: PushEmpty(cvector, float)
0x440: Stack[-1] = (float) 1.74533
0x441: Call2 0x41f

0x442: Stack[-7] = Stack[-2]
0x443: Pop(2)
0x444: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x445: Push((float)2500.0)
0x446: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x448: PushEmpty(cvector, float)
0x449: Stack[-1] = (float) 2.61799
0x44a: Call2 0x41f

0x44b: Stack[-7] = Stack[-2]
0x44c: Pop(2)
0x44d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x44e: Push((float)2500.0)
0x44f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x451: Push("Can't retreat, distance: ")
0x452: Pop(0); Push(Sqrt(Stack[-5]))
0x453: Pop(2); Push(Stack[-2] + Stack[-1]);
0x454: @ Trace(Stack[-1])
0x455: Pop(1)
0x456: Push((float)0.5)
0x457: @ Sleep(Stack[-1])
0x458: Pop(1)
0x459: Return(); Pop(10)

0x45a: Push(CvectorIndex(Stack[-5], 0))
0x45b: Push(CvectorIndex(Stack[-6], 2))
0x45c: @ Rotate(Stack[-2], Stack[-1])
0x45d: Pop(2)
0x45e: PushEmpty(cvector)
0x45f: Call2 0xf92

0x460: Pop(0)
0x461: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x462: Push((int) 120)
0x463: Push((float)0.5)
0x464: @ SetTimer(Stack[-2], Stack[-1])
0x465: Pop(2)
0x466: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x467: Push((int) 1)
0x468: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x469: Pop(1)
0x46a: Push(Stack[-3])
0x46b: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x46c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x46d: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46e: GOTO 0x485

0x46f: GOTO 0x483

0x470: PushEmpty(cvector, float)
0x471: Stack[-1] = (float) 2.61799
0x472: Call2 0x41f

0x473: Stack[-4] = Stack[-2]
0x474: Pop(2)
0x475: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x476: Push((float)2500.0)
0x477: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x478: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x479: PushEmpty(cvector)
0x47a: Call2 0xf92

0x47b: Pop(0)
0x47c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x47d: Push((int) 120)
0x47e: Push((float)0.5)
0x47f: @ SetTimer(Stack[-2], Stack[-1])
0x480: Pop(2)
0x481: GOTO 0x483

0x482: GOTO 0x485

0x483: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x484: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x485: Return(); Pop(10)

0x486: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x487: Push((int) 120)
0x488: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: Return(); Pop(8)

0x48b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x48d: @ Stop()
0x48e: Pop(0)
0x48f: Push((int) 1)
0x490: @ KillTimer(Stack[-1])
0x491: Pop(1)
0x492: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x493: GOTO 0x4b9

0x494: @ GetDirection(Stack[-4])
0x495: Pop(0)
0x496: Push((float)7000.0)
0x497: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x498: Pop(1)
0x499: PushEmpty(cvector, float)
0x49a: Stack[-1] = (float) 1.74533
0x49b: Call2 0x41f

0x49c: Stack[-4] = Stack[-2]
0x49d: Pop(2)
0x49e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x49f: PushEmpty(bool)
0x4a0: Stack[-1] = (bool) 0
0x4a1: Push((float)2500.0)
0x4a2: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4a4: PushEmpty(bool)
0x4a5: Stack[-1] = (bool) 1
0x4a6: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4a7: Push((float)2.25)
0x4a8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4a9: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ab: PushEmpty(bool)
0x4ac: Call2 0x4ca

0x4ad: Pop(0)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4af: Stack[-1] = (bool) 0
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4b1: Stack[-1] = (bool) 1
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b3: @ Stop()
0x4b4: Pop(0)
0x4b5: PushEmpty(cvector)
0x4b6: Call2 0xf92

0x4b7: Pop(0)
0x4b8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4b9: Return(); Pop(8)

0x4ba: @ Stop()
0x4bb: Pop(0)
0x4bc: Push((int) 120)
0x4bd: @ KillTimer(Stack[-1])
0x4be: Pop(1)
0x4bf: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4c0: Return(); Pop(0)

0x4c1: PushEmpty()
0x4c2: PushEmpty()
0x4c3: Call2 0x4ba

0x4c4: Pop(0)
0x4c5: PushEmpty(object)
0x4c6: Stack[-1] = Stack[-2]
0x4c7: Call2 0x143f

0x4c8: Pop(1)
0x4c9: Return(); Pop(0)

0x4ca: PushEmpty(cvector, cvector, cvector, cvector)
0x4cb: @ GetDirection(Stack[-2])
0x4cc: Pop(0)
0x4cd: PushEmpty(cvector, object)
0x4ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cf: Call2 0xf97

0x4d0: Stack[-3] = Stack[-2]
0x4d1: Pop(2)
0x4d2: PushEmpty(float, cvector, cvector)
0x4d3: Stack[-2] = Stack[-5]
0x4d4: Stack[-1] = Stack[-4]
0x4d5: Call2 0x11b5

0x4d6: Pop(2)
0x4d7: Push((float)-0.34202)
0x4d8: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x4d9: Return(); Pop(4)

0x4da: PushEmpty(object, object)
0x4db: Push("player")
0x4dc: @ FindActor(Stack[-2], Stack[-1])
0x4dd: Pop(1)
0x4de: PushEmpty(bool, object)
0x4df: Stack[-1] = Stack[-3]
0x4e0: Call2 0x1029

0x4e1: Pop(1)
0x4e2: Pop(1); Push((bool) Stack[-1] == 0)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e4: PushEmpty(bool, int)
0x4e5: Stack[-1] = (int) 1
0x4e6: Call2 0x1399

0x4e7: Pop(2)
0x4e8: Return(); Pop(2)

0x4e9: Push((int) 0)
0x4ea: Push((int) 5)
0x4eb: @ SetTimer(Stack[-2], Stack[-1])
0x4ec: Pop(2)
0x4ed: PushEmpty(object)
0x4ee: Stack[-1] = Stack[-2]
0x4ef: Call2 0x541

0x4f0: Pop(1)
0x4f1: Push((int) 0)
0x4f2: @ KillTimer(Stack[-1])
0x4f3: Pop(1)
0x4f4: Return(); Pop(2)

0x4f5: Stack[-1] = 0
0x4f6: PushEmpty()
0x4f7: Push((int) 0)
0x4f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x4fa: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4fc: PushEmpty()
0x4fd: Call2 0x5be

0x4fe: Pop(0)
0x4ff: PushEmpty(bool, int)
0x500: Stack[-1] = (int) 1
0x501: Call2 0x1399

0x502: Pop(2)
0x503: GOTO 0x505

0x504: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x505: Return(); Pop(0)

0x506: PushEmpty(int)
0x507: Stack[-1] = Stack[-2]
0x508: Call2 0x58a

0x509: Pop(1)
0x50a: Return(); Pop(0)

0x50b: PushEmpty()
0x50c: PushEmpty(bool, object)
0x50d: Stack[-1] = Stack[-3]
0x50e: Call2 0xfa6

0x50f: Pop(1)
0x510: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x511: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x512: GOTO 0x51a

0x513: PushEmpty()
0x514: Call2 0x5be

0x515: Pop(0)
0x516: PushEmpty(object)
0x517: Stack[-1] = Stack[-2]
0x518: Call2 0x13de

0x519: Pop(1)
0x51a: Return(); Pop(0)

0x51b: PushEmpty()
0x51c: Call2 0x5be

0x51d: Pop(0)
0x51e: PushEmpty(bool, int)
0x51f: Stack[-1] = (int) 0
0x520: Call2 0x1399

0x521: Pop(2)
0x522: Return(); Pop(0)

0x523: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x524: @ GetPosition(Stack[-6])
0x525: Pop(0)
0x526: @@ GetPosition(Stack[-5])
0x527: Pop(0)
0x528: @ GetDirection(Stack[-4])
0x529: Pop(0)
0x52a: PushEmpty(cvector, cvector)
0x52b: PushEmpty(cvector, cvector)
0x52c: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x52d: Call2 0x1199

0x52e: Pop(1)
0x52f: Push((float)0.75)
0x530: Pop(1); Push(Stack[-8] * Stack[-1]);
0x531: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x532: Call2 0x1199

0x533: Stack[-5] = Stack[-2]
0x534: Pop(2)
0x535: Push((int) 32)
0x536: Push((float)7000.0)
0x537: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x538: Pop(2)
0x539: Push((int) 100)
0x53a: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x53b: Push((int) 0)
0x53c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x53d: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53e: Stack[-1] = (int) 0
0x53f: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x540: Return(); Pop(12)

0x541: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x542: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x543: PushEmpty(cvector, float)
0x544: Stack[-1] = (float) 1.74533
0x545: Call2 0x523

0x546: Stack[-7] = Stack[-2]
0x547: Pop(2)
0x548: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x549: Push((float)2500.0)
0x54a: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x54c: PushEmpty(cvector, float)
0x54d: Stack[-1] = (float) 2.61799
0x54e: Call2 0x523

0x54f: Stack[-7] = Stack[-2]
0x550: Pop(2)
0x551: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x552: Push((float)2500.0)
0x553: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x555: Push("Can't retreat, distance: ")
0x556: Pop(0); Push(Sqrt(Stack[-5]))
0x557: Pop(2); Push(Stack[-2] + Stack[-1]);
0x558: @ Trace(Stack[-1])
0x559: Pop(1)
0x55a: Push((float)0.5)
0x55b: @ Sleep(Stack[-1])
0x55c: Pop(1)
0x55d: Return(); Pop(10)

0x55e: Push(CvectorIndex(Stack[-5], 0))
0x55f: Push(CvectorIndex(Stack[-6], 2))
0x560: @ Rotate(Stack[-2], Stack[-1])
0x561: Pop(2)
0x562: PushEmpty(cvector)
0x563: Call2 0xf92

0x564: Pop(0)
0x565: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x566: Push((int) 120)
0x567: Push((float)0.5)
0x568: @ SetTimer(Stack[-2], Stack[-1])
0x569: Pop(2)
0x56a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x56b: Push((int) 1)
0x56c: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x56d: Pop(1)
0x56e: Push(Stack[-3])
0x56f: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x570: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x571: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x572: GOTO 0x589

0x573: GOTO 0x587

0x574: PushEmpty(cvector, float)
0x575: Stack[-1] = (float) 2.61799
0x576: Call2 0x523

0x577: Stack[-4] = Stack[-2]
0x578: Pop(2)
0x579: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x57a: Push((float)2500.0)
0x57b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x57c: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x57d: PushEmpty(cvector)
0x57e: Call2 0xf92

0x57f: Pop(0)
0x580: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x581: Push((int) 120)
0x582: Push((float)0.5)
0x583: @ SetTimer(Stack[-2], Stack[-1])
0x584: Pop(2)
0x585: GOTO 0x587

0x586: GOTO 0x589

0x587: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x588: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x589: Return(); Pop(10)

0x58a: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x58b: Push((int) 120)
0x58c: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58e: Return(); Pop(8)

0x58f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x590: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x591: @ Stop()
0x592: Pop(0)
0x593: Push((int) 1)
0x594: @ KillTimer(Stack[-1])
0x595: Pop(1)
0x596: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x597: GOTO 0x5bd

0x598: @ GetDirection(Stack[-4])
0x599: Pop(0)
0x59a: Push((float)7000.0)
0x59b: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x59c: Pop(1)
0x59d: PushEmpty(cvector, float)
0x59e: Stack[-1] = (float) 1.74533
0x59f: Call2 0x523

0x5a0: Stack[-4] = Stack[-2]
0x5a1: Pop(2)
0x5a2: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x5a3: PushEmpty(bool)
0x5a4: Stack[-1] = (bool) 0
0x5a5: Push((float)2500.0)
0x5a6: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x5a7: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5a8: PushEmpty(bool)
0x5a9: Stack[-1] = (bool) 1
0x5aa: Pop(0); Push(Stack[-5] * Stack[-5]);
0x5ab: Push((float)2.25)
0x5ac: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5ad: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5af: PushEmpty(bool)
0x5b0: Call2 0x5ce

0x5b1: Pop(0)
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b3: Stack[-1] = (bool) 0
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b5: Stack[-1] = (bool) 1
0x5b6: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5b7: @ Stop()
0x5b8: Pop(0)
0x5b9: PushEmpty(cvector)
0x5ba: Call2 0xf92

0x5bb: Pop(0)
0x5bc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5bd: Return(); Pop(8)

0x5be: @ Stop()
0x5bf: Pop(0)
0x5c0: Push((int) 120)
0x5c1: @ KillTimer(Stack[-1])
0x5c2: Pop(1)
0x5c3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5c4: Return(); Pop(0)

0x5c5: PushEmpty()
0x5c6: PushEmpty()
0x5c7: Call2 0x5be

0x5c8: Pop(0)
0x5c9: PushEmpty(object)
0x5ca: Stack[-1] = Stack[-2]
0x5cb: Call2 0x143f

0x5cc: Pop(1)
0x5cd: Return(); Pop(0)

0x5ce: PushEmpty(cvector, cvector, cvector, cvector)
0x5cf: @ GetDirection(Stack[-2])
0x5d0: Pop(0)
0x5d1: PushEmpty(cvector, object)
0x5d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d3: Call2 0xf97

0x5d4: Stack[-3] = Stack[-2]
0x5d5: Pop(2)
0x5d6: PushEmpty(float, cvector, cvector)
0x5d7: Stack[-2] = Stack[-5]
0x5d8: Stack[-1] = Stack[-4]
0x5d9: Call2 0x11b5

0x5da: Pop(2)
0x5db: Push((float)-0.34202)
0x5dc: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x5dd: Return(); Pop(4)

0x5de: PushEmpty()
0x5df: Push((int) 1)
0x5e0: Push((int) 3)
0x5e1: @ SetTimer(Stack[-2], Stack[-1])
0x5e2: Pop(2)
0x5e3: PushEmpty(object)
0x5e4: Stack[-1] = Stack[-2]
0x5e5: Call2 0x638

0x5e6: Pop(1)
0x5e7: Push((int) 1)
0x5e8: @ KillTimer(Stack[-1])
0x5e9: Pop(1)
0x5ea: Return(); Pop(0)

0x5eb: PushEmpty()
0x5ec: Push((int) 1)
0x5ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5ef: PushEmpty()
0x5f0: Call2 0x6b5

0x5f1: Pop(0)
0x5f2: PushEmpty(bool, int)
0x5f3: Stack[-1] = (int) 1
0x5f4: Call2 0x1399

0x5f5: Pop(2)
0x5f6: Return(); Pop(0)

0x5f7: PushEmpty(int)
0x5f8: Stack[-1] = Stack[-2]
0x5f9: Call2 0x681

0x5fa: Pop(1)
0x5fb: Return(); Pop(0)

0x5fc: PushEmpty()
0x5fd: PushEmpty(bool, object)
0x5fe: Stack[-1] = Stack[-3]
0x5ff: Call2 0xfa6

0x600: Pop(1)
0x601: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x602: PushEmpty()
0x603: Call2 0x6b5

0x604: Pop(0)
0x605: PushEmpty(bool, int)
0x606: Stack[-1] = (int) 4
0x607: Call2 0x1399

0x608: Pop(2)
0x609: GOTO 0x611

0x60a: PushEmpty()
0x60b: Call2 0x6b5

0x60c: Pop(0)
0x60d: PushEmpty(object)
0x60e: Stack[-1] = Stack[-2]
0x60f: Call2 0x13de

0x610: Pop(1)
0x611: Return(); Pop(0)

0x612: PushEmpty()
0x613: Call2 0x6b5

0x614: Pop(0)
0x615: PushEmpty(bool, int)
0x616: Stack[-1] = (int) 0
0x617: Call2 0x1399

0x618: Pop(2)
0x619: Return(); Pop(0)

0x61a: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x61b: @ GetPosition(Stack[-6])
0x61c: Pop(0)
0x61d: @@ GetPosition(Stack[-5])
0x61e: Pop(0)
0x61f: @ GetDirection(Stack[-4])
0x620: Pop(0)
0x621: PushEmpty(cvector, cvector)
0x622: PushEmpty(cvector, cvector)
0x623: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x624: Call2 0x1199

0x625: Pop(1)
0x626: Push((float)0.75)
0x627: Pop(1); Push(Stack[-8] * Stack[-1]);
0x628: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x629: Call2 0x1199

0x62a: Stack[-5] = Stack[-2]
0x62b: Pop(2)
0x62c: Push((int) 32)
0x62d: Push((float)7000.0)
0x62e: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x62f: Pop(2)
0x630: Push((int) 100)
0x631: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x632: Push((int) 0)
0x633: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x635: Stack[-1] = (int) 0
0x636: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x637: Return(); Pop(12)

0x638: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x639: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x63a: PushEmpty(cvector, float)
0x63b: Stack[-1] = (float) 1.74533
0x63c: Call2 0x61a

0x63d: Stack[-7] = Stack[-2]
0x63e: Pop(2)
0x63f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x640: Push((float)2500.0)
0x641: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x643: PushEmpty(cvector, float)
0x644: Stack[-1] = (float) 2.61799
0x645: Call2 0x61a

0x646: Stack[-7] = Stack[-2]
0x647: Pop(2)
0x648: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x649: Push((float)2500.0)
0x64a: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x64b: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x64c: Push("Can't retreat, distance: ")
0x64d: Pop(0); Push(Sqrt(Stack[-5]))
0x64e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x64f: @ Trace(Stack[-1])
0x650: Pop(1)
0x651: Push((float)0.5)
0x652: @ Sleep(Stack[-1])
0x653: Pop(1)
0x654: Return(); Pop(10)

0x655: Push(CvectorIndex(Stack[-5], 0))
0x656: Push(CvectorIndex(Stack[-6], 2))
0x657: @ Rotate(Stack[-2], Stack[-1])
0x658: Pop(2)
0x659: PushEmpty(cvector)
0x65a: Call2 0xf92

0x65b: Pop(0)
0x65c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x65d: Push((int) 120)
0x65e: Push((float)0.5)
0x65f: @ SetTimer(Stack[-2], Stack[-1])
0x660: Pop(2)
0x661: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x662: Push((int) 1)
0x663: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x664: Pop(1)
0x665: Push(Stack[-3])
0x666: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x667: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x668: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x669: GOTO 0x680

0x66a: GOTO 0x67e

0x66b: PushEmpty(cvector, float)
0x66c: Stack[-1] = (float) 2.61799
0x66d: Call2 0x61a

0x66e: Stack[-4] = Stack[-2]
0x66f: Pop(2)
0x670: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x671: Push((float)2500.0)
0x672: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x673: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x674: PushEmpty(cvector)
0x675: Call2 0xf92

0x676: Pop(0)
0x677: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x678: Push((int) 120)
0x679: Push((float)0.5)
0x67a: @ SetTimer(Stack[-2], Stack[-1])
0x67b: Pop(2)
0x67c: GOTO 0x67e

0x67d: GOTO 0x680

0x67e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x67f: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x680: Return(); Pop(10)

0x681: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x682: Push((int) 120)
0x683: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x685: Return(); Pop(8)

0x686: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x687: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x688: @ Stop()
0x689: Pop(0)
0x68a: Push((int) 1)
0x68b: @ KillTimer(Stack[-1])
0x68c: Pop(1)
0x68d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x68e: GOTO 0x6b4

0x68f: @ GetDirection(Stack[-4])
0x690: Pop(0)
0x691: Push((float)7000.0)
0x692: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x693: Pop(1)
0x694: PushEmpty(cvector, float)
0x695: Stack[-1] = (float) 1.74533
0x696: Call2 0x61a

0x697: Stack[-4] = Stack[-2]
0x698: Pop(2)
0x699: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x69a: PushEmpty(bool)
0x69b: Stack[-1] = (bool) 0
0x69c: Push((float)2500.0)
0x69d: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x69e: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x69f: PushEmpty(bool)
0x6a0: Stack[-1] = (bool) 1
0x6a1: Pop(0); Push(Stack[-5] * Stack[-5]);
0x6a2: Push((float)2.25)
0x6a3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6a4: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a6: PushEmpty(bool)
0x6a7: Call2 0x6c5

0x6a8: Pop(0)
0x6a9: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6aa: Stack[-1] = (bool) 0
0x6ab: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6ac: Stack[-1] = (bool) 1
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6ae: @ Stop()
0x6af: Pop(0)
0x6b0: PushEmpty(cvector)
0x6b1: Call2 0xf92

0x6b2: Pop(0)
0x6b3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x6b4: Return(); Pop(8)

0x6b5: @ Stop()
0x6b6: Pop(0)
0x6b7: Push((int) 120)
0x6b8: @ KillTimer(Stack[-1])
0x6b9: Pop(1)
0x6ba: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x6bb: Return(); Pop(0)

0x6bc: PushEmpty()
0x6bd: PushEmpty()
0x6be: Call2 0x6b5

0x6bf: Pop(0)
0x6c0: PushEmpty(object)
0x6c1: Stack[-1] = Stack[-2]
0x6c2: Call2 0x143f

0x6c3: Pop(1)
0x6c4: Return(); Pop(0)

0x6c5: PushEmpty(cvector, cvector, cvector, cvector)
0x6c6: @ GetDirection(Stack[-2])
0x6c7: Pop(0)
0x6c8: PushEmpty(cvector, object)
0x6c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ca: Call2 0xf97

0x6cb: Stack[-3] = Stack[-2]
0x6cc: Pop(2)
0x6cd: PushEmpty(float, cvector, cvector)
0x6ce: Stack[-2] = Stack[-5]
0x6cf: Stack[-1] = Stack[-4]
0x6d0: Call2 0x11b5

0x6d1: Pop(2)
0x6d2: Push((float)-0.34202)
0x6d3: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6d4: Return(); Pop(4)

0x6d5: PushEmpty(float, float)
0x6d6: Stack[-2] = (int) 300
0x6d7: Stack[-1] = (int) 100
0x6d8: Call2 0x71d

0x6d9: Pop(2)
0x6da: Return(); Pop(0)

0x6db: PushEmpty()
0x6dc: PushEmpty()
0x6dd: Call2 0x75e

0x6de: Pop(0)
0x6df: PushEmpty(bool, object)
0x6e0: Stack[-1] = Stack[-3]
0x6e1: Call2 0x1413

0x6e2: Pop(2)
0x6e3: Return(); Pop(0)

0x6e4: PushEmpty()
0x6e5: PushEmpty(bool, object)
0x6e6: Stack[-1] = Stack[-3]
0x6e7: Call2 0xfa6

0x6e8: Pop(1)
0x6e9: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6ea: PushEmpty()
0x6eb: Call2 0x75e

0x6ec: Pop(0)
0x6ed: PushEmpty(bool, int)
0x6ee: Stack[-1] = (int) 4
0x6ef: Call2 0x1399

0x6f0: Pop(2)
0x6f1: GOTO 0x6f9

0x6f2: PushEmpty()
0x6f3: Call2 0x75e

0x6f4: Pop(0)
0x6f5: PushEmpty(object)
0x6f6: Stack[-1] = Stack[-2]
0x6f7: Call2 0x13de

0x6f8: Pop(1)
0x6f9: Return(); Pop(0)

0x6fa: PushEmpty()
0x6fb: PushEmpty(bool)
0x6fc: Stack[-1] = (bool) 1
0x6fd: PushEmpty(bool, object)
0x6fe: Stack[-1] = Stack[-5]
0x6ff: Call2 0x1029

0x700: Pop(1)
0x701: Pop(1); Push((bool) Stack[-1] == 0)
0x702: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x703: PushEmpty(float, object)
0x704: Stack[-1] = Stack[-5]
0x705: Call2 0xf9e

0x706: Pop(1)
0x707: Push((float)1000000.0)
0x708: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x709: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x70a: Stack[-1] = (bool) 0
0x70b: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x70c: Return(); Pop(0)

0x70d: PushEmpty()
0x70e: Call2 0x75e

0x70f: Pop(0)
0x710: PushEmpty(object)
0x711: Stack[-1] = Stack[-3]
0x712: Call2 0x13e9

0x713: Pop(1)
0x714: Return(); Pop(0)

0x715: PushEmpty()
0x716: Call2 0x75e

0x717: Pop(0)
0x718: PushEmpty(bool, int)
0x719: Stack[-1] = (int) 0
0x71a: Call2 0x1399

0x71b: Pop(2)
0x71c: Return(); Pop(0)

0x71d: PushEmpty()
0x71e: PushEmpty(bool)
0x71f: Call2 0x10dd

0x720: Pop(0)
0x721: Pop(1); Push((bool) Stack[-1] == 0)
0x722: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x723: Return(); Pop(0)

0x724: Push("player")
0x725: @ FindActor(Stack[-4], Stack[-1])
0x726: Pop(1)
0x727: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x728: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x729: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x72a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x72b: Push((int) 10)
0x72c: Push((float)1.0)
0x72d: @ SetTimer(Stack[-2], Stack[-1])
0x72e: Pop(2)
0x72f: PushEmpty()
0x730: Call2 0x76c

0x731: Pop(0)
0x732: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x733: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x734: Push((int) 10)
0x735: @ KillTimer(Stack[-1])
0x736: Pop(1)
0x737: Return(); Pop(0)

0x738: PushEmpty(float, float)
0x739: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x73a: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x73b: Stack[-3] = (bool) 0
0x73c: Return(); Pop(2)

0x73d: PushEmpty(float, object)
0x73e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x73f: Call2 0xf9e

0x740: Pop(1)
0x741: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x742: Push( Stack[2 + Tasks[-1].StackPointer] )
0x743: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x744: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x745: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x746: Return(); Pop(2)

0x747: PushEmpty()
0x748: Push((int) 10)
0x749: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x74a: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x74b: PushEmpty(bool)
0x74c: Call2 0x738

0x74d: Pop(0)
0x74e: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x74f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x750: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x751: PushEmpty(object)
0x752: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x753: Call2 0x1158

0x754: Pop(1)
0x755: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x756: GOTO 0x75d

0x757: Push( Stack[2 + Tasks[-1].StackPointer] )
0x758: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x759: Push("head")
0x75a: @ UnlookAsync(Stack[-1])
0x75b: Pop(1)
0x75c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x75d: Return(); Pop(0)

0x75e: PushEmpty()
0x75f: Call2 0x7bd

0x760: Pop(0)
0x761: Push((int) 10)
0x762: @ KillTimer(Stack[-1])
0x763: Pop(1)
0x764: Push( Stack[2 + Tasks[-1].StackPointer] )
0x765: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x766: Push("head")
0x767: @ UnlookAsync(Stack[-1])
0x768: Pop(1)
0x769: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x76a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x76b: Return(); Pop(0)

0x76c: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x76d: @ WaitForAnimEnd()
0x76e: Pop(0)
0x76f: PushEmpty(bool)
0x770: Call2 0x10dd

0x771: Pop(0)
0x772: Pop(1); Push((bool) Stack[-1] == 0)
0x773: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x774: Return(); Pop(14)

0x775: PushEmpty(int)
0x776: Call2 0x11f4

0x777: Stack[-8] = Stack[-1]
0x778: Pop(1)
0x779: Stack[-6] = (int) 0
0x77a: PushEmpty(bool)
0x77b: Stack[-1] = (bool) 0
0x77c: Push((int) 5)
0x77d: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x77f: PushEmpty(bool)
0x780: Call2 0x10dd

0x781: Pop(0)
0x782: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x783: Stack[-1] = (bool) 1
0x784: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x785: Push((int) 3)
0x786: @ irand(Stack[-6], Stack[-1])
0x787: Pop(1)
0x788: Push((int) 0)
0x789: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x78a: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x78b: Push(Stack[-7])
0x78c: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x78d: @ irand(Stack[-4], Stack[-7])
0x78e: Pop(0)
0x78f: Push("all")
0x790: PushEmpty(string, int)
0x791: Stack[-1] = Stack[-7]
0x792: Call2 0x11ed

0x793: Pop(1)
0x794: @ PlayAnimation(Stack[-2], Stack[-1])
0x795: Pop(2)
0x796: @ WaitForAnimEnd(Stack[-3])
0x797: Pop(0)
0x798: Pop(0); Push((bool) Stack[-3] == 0)
0x799: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x79a: GOTO 0x7b8

0x79b: GOTO 0x7ad

0x79c: Push((int) 1)
0x79d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x79e: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x79f: Push((int) 4)
0x7a0: @ rand(Stack[-3], Stack[-1])
0x7a1: Pop(1)
0x7a2: Push((int) 1)
0x7a3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7a4: @ Sleep(Stack[-1], Stack[-2])
0x7a5: Pop(1)
0x7a6: Pop(0); Push((bool) Stack[-1] == 0)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a8: GOTO 0x7b8

0x7a9: GOTO 0x7ad

0x7aa: Push(Stack[-6])
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ac: GOTO 0x7b8

0x7ad: PushEmpty(bool)
0x7ae: Call2 0x7bb

0x7af: Pop(0)
0x7b0: Pop(1); Push((bool) Stack[-1] == 0)
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b2: GOTO 0x7b8

0x7b3: @ ResetAAS()
0x7b4: Pop(0)
0x7b5: Push((int) 1)
0x7b6: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x7b7: GOTO 0x77a

0x7b8: @ ResetAAS()
0x7b9: Pop(0)
0x7ba: Return(); Pop(14)

0x7bb: Stack[-1] = (bool) 1
0x7bc: Return(); Pop(0)

0x7bd: @ StopAnimation()
0x7be: Pop(0)
0x7bf: @ StopGroup0()
0x7c0: Pop(0)
0x7c1: Return(); Pop(0)

0x7c2: PushEmpty(object, float, object, float)
0x7c3: Push((int) 2)
0x7c4: Push((int) 1)
0x7c5: @ SetTimer(Stack[-2], Stack[-1])
0x7c6: Pop(2)
0x7c7: Push("player")
0x7c8: @ FindActor(Stack[-3], Stack[-1])
0x7c9: Pop(1)
0x7ca: Push((int) 4)
0x7cb: @ rand(Stack[-2], Stack[-1])
0x7cc: Pop(1)
0x7cd: Push((int) 1)
0x7ce: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7cf: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d0: PushEmpty(object)
0x7d1: Stack[-1] = Stack[-3]
0x7d2: Call2 0x1158

0x7d3: Pop(1)
0x7d4: Push((int) 2)
0x7d5: Pop(1); Push(Stack[-2] + Stack[-1]);
0x7d6: @ Sleep(Stack[-1])
0x7d7: Pop(1)
0x7d8: Push("head")
0x7d9: @ UnlookAsync(Stack[-1])
0x7da: Pop(1)
0x7db: GOTO 0x7e0

0x7dc: Push((int) 2)
0x7dd: Pop(1); Push(Stack[-2] + Stack[-1]);
0x7de: @ Sleep(Stack[-1])
0x7df: Pop(1)
0x7e0: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7e1: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e2: PushEmpty(bool, int)
0x7e3: Stack[-1] = (int) 2
0x7e4: Call2 0x1399

0x7e5: Pop(2)
0x7e6: Push((int) 2)
0x7e7: @ KillTimer(Stack[-1])
0x7e8: Pop(1)
0x7e9: Return(); Pop(4)

0x7ea: Stack[-2] = 0
0x7eb: @ StopGroup0()
0x7ec: Pop(0)
0x7ed: Return(); Pop(0)

0x7ee: PushEmpty()
0x7ef: Push((int) 2)
0x7f0: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7f2: Return(); Pop(0)

0x7f3: PushEmpty(bool, object)
0x7f4: PushEmpty(object)
0x7f5: Call2 0x1193

0x7f6: Stack[-2] = Stack[-1]
0x7f7: Pop(1)
0x7f8: Call2 0x144f

0x7f9: Pop(1)
0x7fa: Pop(1); Push((bool) Stack[-1] == 0)
0x7fb: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7fc: PushEmpty()
0x7fd: Call2 0x7eb

0x7fe: Pop(0)
0x7ff: Return(); Pop(0)

0x800: PushEmpty()
0x801: PushEmpty()
0x802: Call2 0x7eb

0x803: Pop(0)
0x804: PushEmpty(bool, object)
0x805: Stack[-1] = Stack[-3]
0x806: Call2 0x1413

0x807: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x808: Pop(2)
0x809: Return(); Pop(0)

0x80a: PushEmpty()
0x80b: PushEmpty(bool, object)
0x80c: Stack[-1] = Stack[-3]
0x80d: Call2 0xfa6

0x80e: Pop(1)
0x80f: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x810: PushEmpty()
0x811: Call2 0x7eb

0x812: Pop(0)
0x813: PushEmpty(bool, int)
0x814: Stack[-1] = (int) 4
0x815: Call2 0x1399

0x816: Pop(2)
0x817: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x818: GOTO 0x821

0x819: PushEmpty()
0x81a: Call2 0x7eb

0x81b: Pop(0)
0x81c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x81d: PushEmpty(object)
0x81e: Stack[-1] = Stack[-2]
0x81f: Call2 0x13de

0x820: Pop(1)
0x821: Return(); Pop(0)

0x822: PushEmpty()
0x823: PushEmpty(bool)
0x824: Stack[-1] = (bool) 1
0x825: PushEmpty(bool, object)
0x826: Stack[-1] = Stack[-5]
0x827: Call2 0x1029

0x828: Pop(1)
0x829: Pop(1); Push((bool) Stack[-1] == 0)
0x82a: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x82b: PushEmpty(float, object)
0x82c: Stack[-1] = Stack[-5]
0x82d: Call2 0xf9e

0x82e: Pop(1)
0x82f: Push((float)1000000.0)
0x830: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x831: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x832: Stack[-1] = (bool) 0
0x833: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x834: Return(); Pop(0)

0x835: PushEmpty()
0x836: Call2 0x7eb

0x837: Pop(0)
0x838: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x839: PushEmpty(object)
0x83a: Stack[-1] = Stack[-3]
0x83b: Call2 0x13e9

0x83c: Pop(1)
0x83d: Return(); Pop(0)

0x83e: PushEmpty()
0x83f: Call2 0x7eb

0x840: Pop(0)
0x841: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x842: PushEmpty(bool, int)
0x843: Stack[-1] = (int) 0
0x844: Call2 0x1399

0x845: Pop(2)
0x846: Return(); Pop(0)

0x847: PushEmpty(int, cvector, cvector, bool, object, bool, int, cvector, cvector, bool, object, bool)
0x848: PushEmpty(int)
0x849: Call2 0x1353

0x84a: Stack[-7] = Stack[-1]
0x84b: Pop(1)
0x84c: PushEmpty(bool)
0x84d: Stack[-1] = (bool) 1
0x84e: Push((int) -1)
0x84f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x850: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x851: PushEmpty(bool, int)
0x852: Stack[-1] = Stack[-9]
0x853: Call2 0x1370

0x854: Pop(1)
0x855: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x856: Stack[-1] = (bool) 0
0x857: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x858: PushEmpty(bool, int)
0x859: Stack[-1] = (int) 1
0x85a: Call2 0x1399

0x85b: Pop(2)
0x85c: Stack[-13] = (bool) 0
0x85d: Return(); Pop(12)

0x85e: @ GetScene(Stack[-2])
0x85f: Pop(0)
0x860: Push("pt_b9q03_bonfire")
0x861: Pop(1); Push(Stack[-1] + Stack[-7]);
0x862: @@ GetLocator(Stack[-1], Stack[-4], Stack[-6], Stack[-5])
0x863: Pop(1)
0x864: Push(CvectorIndex(Stack[-5], 1))
0x865: Push((int) 50)
0x866: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x867: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x868: PushEmpty(bool, cvector, cvector, float, float, bool, bool)
0x869: Stack[-6] = Stack[-12]
0x86a: Stack[-5] = Stack[-11]
0x86b: Stack[-4] = (int) 100
0x86c: Stack[-3] = (int) 3000
0x86d: Stack[-2] = (bool) 0
0x86e: Stack[-1] = (bool) 1
0x86f: Call2 0x8bf

0x870: Stack[-8] = Stack[-7]
0x871: Pop(7)
0x872: Push(Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x878; Pop(1)

0x874: PushEmpty(int)
0x875: Stack[-1] = Stack[-7]
0x876: Call2 0x1378

0x877: Pop(1)
0x878: Stack[-13] = Stack[-1]
0x879: Return(); Pop(12)

0x87a: Stack[-2] = 0
0x87b: PushEmpty()
0x87c: PushEmpty()
0x87d: Call2 0x93b

0x87e: Pop(0)
0x87f: PushEmpty(bool, object)
0x880: Stack[-1] = Stack[-3]
0x881: Call2 0x1413

0x882: Pop(2)
0x883: Return(); Pop(0)

0x884: PushEmpty()
0x885: PushEmpty(bool, object)
0x886: Stack[-1] = Stack[-3]
0x887: Call2 0xfa6

0x888: Pop(1)
0x889: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x88a: PushEmpty()
0x88b: Call2 0x93b

0x88c: Pop(0)
0x88d: PushEmpty(bool, int)
0x88e: Stack[-1] = (int) 4
0x88f: Call2 0x1399

0x890: Pop(2)
0x891: GOTO 0x899

0x892: PushEmpty()
0x893: Call2 0x93b

0x894: Pop(0)
0x895: PushEmpty(object)
0x896: Stack[-1] = Stack[-2]
0x897: Call2 0x13de

0x898: Pop(1)
0x899: Return(); Pop(0)

0x89a: PushEmpty()
0x89b: PushEmpty(bool)
0x89c: Stack[-1] = (bool) 1
0x89d: PushEmpty(bool, object)
0x89e: Stack[-1] = Stack[-5]
0x89f: Call2 0x1029

0x8a0: Pop(1)
0x8a1: Pop(1); Push((bool) Stack[-1] == 0)
0x8a2: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8a3: PushEmpty(float, object)
0x8a4: Stack[-1] = Stack[-5]
0x8a5: Call2 0xf9e

0x8a6: Pop(1)
0x8a7: Push((float)1000000.0)
0x8a8: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x8a9: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8aa: Stack[-1] = (bool) 0
0x8ab: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8ac: Return(); Pop(0)

0x8ad: PushEmpty()
0x8ae: Call2 0x93b

0x8af: Pop(0)
0x8b0: PushEmpty(object)
0x8b1: Stack[-1] = Stack[-3]
0x8b2: Call2 0x13e9

0x8b3: Pop(1)
0x8b4: Return(); Pop(0)

0x8b5: PushEmpty()
0x8b6: Call2 0x93b

0x8b7: Pop(0)
0x8b8: PushEmpty(bool, int)
0x8b9: Stack[-1] = (int) 0
0x8ba: Call2 0x1399

0x8bb: Pop(2)
0x8bc: Return(); Pop(0)

0x8bd: Stack[-1] = (bool) 1
0x8be: Return(); Pop(0)

0x8bf: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x8c0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8c1: Stack[-7] = Stack[-17]
0x8c2: PushEmpty(bool)
0x8c3: Call2 0x8bd

0x8c4: Pop(0)
0x8c5: Pop(1); Push((bool) Stack[-1] == 0)
0x8c6: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c7: Stack[-23] = (bool) 0
0x8c8: Return(); Pop(16)

0x8c9: Stack[-5] = Stack[-22]
0x8ca: @ GetPosition(Stack[-4])
0x8cb: Pop(0)
0x8cc: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x8cd: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x8ce: PushEmpty(bool)
0x8cf: Stack[-1] = (bool) 0
0x8d0: Push((int) 0)
0x8d1: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8d3: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8d4: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x8d5: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8d6: Stack[-1] = (bool) 1
0x8d7: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8d8: @ Stop()
0x8d9: Pop(0)
0x8da: Stack[-23] = (bool) 0
0x8db: Return(); Pop(16)

0x8dc: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8dd: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x8df: @ FindPathTo(Stack[-1], Stack[-5])
0x8e0: Pop(0)
0x8e1: Pop(0); Push(( Stack[-1] != 0 )
0x8e2: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8e3: Stack[-6] = Stack[-1]
0x8e4: Stack[-1] = 0
0x8e5: Pop(0); Push(( Stack[-6] != 0 )
0x8e6: IF (Stack[-1] == 0) GOTO 0x906; Pop(1)

0x8e7: Push(Stack[-7])
0x8e8: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8e9: Stack[-7] = (bool) 0
0x8ea: @ RotatePath(Stack[-6], Stack[-8])
0x8eb: Pop(0)
0x8ec: Pop(0); Push((bool) Stack[-8] == 0)
0x8ed: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8ee: GOTO 0x91e

0x8ef: Push((int) 0)
0x8f0: Push((float)0.3)
0x8f1: @ SetTimer(Stack[-2], Stack[-1])
0x8f2: Pop(2)
0x8f3: PushEmpty(string)
0x8f4: Call2 0x94b

0x8f5: Pop(0)
0x8f6: PushEmpty(string)
0x8f7: Call2 0x94d

0x8f8: Pop(0)
0x8f9: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x8fa: Pop(2)
0x8fb: Pop(0); Push((bool) Stack[-8] == 0)
0x8fc: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x8fd: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8fe: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8ff: Stack[-6] = 0
0x900: GOTO 0x91e

0x901: GOTO 0x903

0x902: GOTO 0x91d

0x903: GOTO 0x905

0x904: Stack[-6] = 0
0x905: GOTO 0x916

0x906: Push((int) 0)
0x907: @ KillTimer(Stack[-1])
0x908: Pop(1)
0x909: Push((float)0.5)
0x90a: @ Sleep(Stack[-1], Stack[-9])
0x90b: Pop(1)
0x90c: Pop(0); Push((bool) Stack[-8] == 0)
0x90d: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x90e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x90f: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x910: Stack[-6] = 0
0x911: GOTO 0x91e

0x912: Push((int) 0)
0x913: Push((float)0.3)
0x914: @ SetTimer(Stack[-2], Stack[-1])
0x915: Pop(2)
0x916: Stack[-1] = 0
0x917: GOTO 0x91c

0x918: Push((int) 0)
0x919: @ KillTimer(Stack[-1])
0x91a: Pop(1)
0x91b: GOTO 0x91e

0x91c: Stack[-6] = 0
0x91d: GOTO 0x8c2

0x91e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x91f: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x920: Push(CvectorIndex(Stack[-21], 0))
0x921: Push(CvectorIndex(Stack[-22], 2))
0x922: @ RotateAsync(Stack[-2], Stack[-1])
0x923: Pop(2)
0x924: Stack[-23] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x925: Return(); Pop(16)

0x926: PushEmpty()
0x927: Push((int) 0)
0x928: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x929: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x92a: Return(); Pop(0)

0x92b: PushEmpty(bool)
0x92c: Call2 0x8bd

0x92d: Pop(0)
0x92e: Pop(1); Push((bool) Stack[-1] == 0)
0x92f: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x930: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x931: Push((int) 0)
0x932: @ KillTimer(Stack[-1])
0x933: Pop(1)
0x934: @ Stop()
0x935: Pop(0)
0x936: Return(); Pop(0)

0x937: PushEmpty()
0x938: @ RequestClearPath(Stack[-1])
0x939: Pop(0)
0x93a: Return(); Pop(0)

0x93b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x93c: Push((int) 0)
0x93d: @ KillTimer(Stack[-1])
0x93e: Pop(1)
0x93f: @ Stop()
0x940: Pop(0)
0x941: Return(); Pop(0)

0x942: PushEmpty()
0x943: PushEmpty()
0x944: Call2 0x93b

0x945: Pop(0)
0x946: PushEmpty(object)
0x947: Stack[-1] = Stack[-2]
0x948: Call2 0x143f

0x949: Pop(1)
0x94a: Return(); Pop(0)

0x94b: Stack[-1] = "walk"
0x94c: Return(); Pop(0)

0x94d: Stack[-1] = "run"
0x94e: Return(); Pop(0)

0x94f: PushEmpty(string)
0x950: Stack[-1] = "hunt"
0x951: Call2 0x98e

0x952: Pop(1)
0x953: Return(); Pop(0)

0x954: PushEmpty()
0x955: PushEmpty(bool, object)
0x956: Stack[-1] = Stack[-3]
0x957: Call2 0xfa6

0x958: Pop(1)
0x959: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x95a: PushEmpty()
0x95b: Call2 0x9a3

0x95c: Pop(0)
0x95d: PushEmpty(bool, int)
0x95e: Stack[-1] = (int) 4
0x95f: Call2 0x1399

0x960: Pop(2)
0x961: GOTO 0x969

0x962: PushEmpty()
0x963: Call2 0x9a3

0x964: Pop(0)
0x965: PushEmpty(object)
0x966: Stack[-1] = Stack[-2]
0x967: Call2 0x13de

0x968: Pop(1)
0x969: Return(); Pop(0)

0x96a: PushEmpty()
0x96b: PushEmpty(bool)
0x96c: Stack[-1] = (bool) 1
0x96d: PushEmpty(bool, object)
0x96e: Stack[-1] = Stack[-5]
0x96f: Call2 0x1029

0x970: Pop(1)
0x971: Pop(1); Push((bool) Stack[-1] == 0)
0x972: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x973: PushEmpty(float, object)
0x974: Stack[-1] = Stack[-5]
0x975: Call2 0xf9e

0x976: Pop(1)
0x977: Push((float)1000000.0)
0x978: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x979: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x97a: Stack[-1] = (bool) 0
0x97b: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x97c: Return(); Pop(0)

0x97d: PushEmpty()
0x97e: Call2 0x9a3

0x97f: Pop(0)
0x980: PushEmpty(object)
0x981: Stack[-1] = Stack[-3]
0x982: Call2 0x13e9

0x983: Pop(1)
0x984: Return(); Pop(0)

0x985: PushEmpty()
0x986: Call2 0x9a3

0x987: Pop(0)
0x988: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x989: PushEmpty(bool, int)
0x98a: Stack[-1] = (int) 0
0x98b: Call2 0x1399

0x98c: Pop(2)
0x98d: Return(); Pop(0)

0x98e: PushEmpty(bool, bool, bool, bool)
0x98f: @ WaitForAnimEnd()
0x990: Pop(0)
0x991: PushEmpty(bool)
0x992: Call2 0x10dd

0x993: Pop(0)
0x994: Pop(1); Push((bool) Stack[-1] == 0)
0x995: IF (Stack[-1] == 0) GOTO 0x997; Pop(1)

0x996: Return(); Pop(4)

0x997: Push("all")
0x998: @ HasAnimation(Stack[-3], Stack[-1], Stack[-6])
0x999: Pop(1)
0x99a: Pop(0); Push((bool) Stack[-2] == 0)
0x99b: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x99c: Return(); Pop(4)

0x99d: Push("all")
0x99e: @ PlayAnimation(Stack[-1], Stack[-6])
0x99f: Pop(1)
0x9a0: @ WaitForAnimEnd(Stack[-1])
0x9a1: Pop(0)
0x9a2: Return(); Pop(4)

0x9a3: @ StopAnimation()
0x9a4: Pop(0)
0x9a5: @ StopGroup0()
0x9a6: Pop(0)
0x9a7: Return(); Pop(0)

0x9a8: PushEmpty(object, object)
0x9a9: Push("player")
0x9aa: @ FindActor(Stack[-2], Stack[-1])
0x9ab: Pop(1)
0x9ac: PushEmpty(bool, object)
0x9ad: Stack[-1] = Stack[-3]
0x9ae: Call2 0x1029

0x9af: Pop(1)
0x9b0: Pop(1); Push((bool) Stack[-1] == 0)
0x9b1: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b2: PushEmpty(bool, int)
0x9b3: Stack[-1] = (int) 1
0x9b4: Call2 0x1399

0x9b5: Pop(2)
0x9b6: Return(); Pop(2)

0x9b7: PushEmpty(bool, object, float, float, bool, bool)
0x9b8: Stack[-5] = Stack[-7]
0x9b9: Stack[-4] = (float) 250.0
0x9ba: Stack[-3] = (int) 6000
0x9bb: Stack[-2] = (bool) 1
0x9bc: Stack[-1] = (bool) 1
0x9bd: Call2 0xa0c

0x9be: Pop(5)
0x9bf: IF (Stack[-1] == 0) GOTO 0x9c6; Pop(1)

0x9c0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x9c1: IF (Stack[-1] == 0) GOTO 0x9c6; Pop(1)

0x9c2: PushEmpty(bool, int)
0x9c3: Stack[-1] = (int) 3
0x9c4: Call2 0x1399

0x9c5: Pop(2)
0x9c6: Return(); Pop(2)

0x9c7: Stack[-1] = 0
0x9c8: PushEmpty()
0x9c9: PushEmpty()
0x9ca: Call2 0xa88

0x9cb: Pop(0)
0x9cc: PushEmpty(bool, object)
0x9cd: Stack[-1] = Stack[-3]
0x9ce: Call2 0x1413

0x9cf: Stack[2 + Tasks[-1].StackPointer] = Stack[-2]
0x9d0: Pop(2)
0x9d1: Return(); Pop(0)

0x9d2: PushEmpty()
0x9d3: PushEmpty(bool, object)
0x9d4: Stack[-1] = Stack[-3]
0x9d5: Call2 0xfa6

0x9d6: Pop(1)
0x9d7: IF (Stack[-1] == 0) GOTO 0x9e0; Pop(1)

0x9d8: PushEmpty()
0x9d9: Call2 0xa88

0x9da: Pop(0)
0x9db: PushEmpty(bool, int)
0x9dc: Stack[-1] = (int) 4
0x9dd: Call2 0x1399

0x9de: Pop(2)
0x9df: GOTO 0x9e7

0x9e0: PushEmpty()
0x9e1: Call2 0xa88

0x9e2: Pop(0)
0x9e3: PushEmpty(object)
0x9e4: Stack[-1] = Stack[-2]
0x9e5: Call2 0x13de

0x9e6: Pop(1)
0x9e7: Return(); Pop(0)

0x9e8: PushEmpty()
0x9e9: PushEmpty(bool)
0x9ea: Stack[-1] = (bool) 1
0x9eb: PushEmpty(bool, object)
0x9ec: Stack[-1] = Stack[-5]
0x9ed: Call2 0x1029

0x9ee: Pop(1)
0x9ef: Pop(1); Push((bool) Stack[-1] == 0)
0x9f0: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f1: PushEmpty(float, object)
0x9f2: Stack[-1] = Stack[-5]
0x9f3: Call2 0xf9e

0x9f4: Pop(1)
0x9f5: Push((float)1000000.0)
0x9f6: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x9f7: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f8: Stack[-1] = (bool) 0
0x9f9: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9fa: Return(); Pop(0)

0x9fb: PushEmpty()
0x9fc: Call2 0xa88

0x9fd: Pop(0)
0x9fe: PushEmpty(object)
0x9ff: Stack[-1] = Stack[-3]
0xa00: Call2 0x13e9

0xa01: Pop(1)
0xa02: Return(); Pop(0)

0xa03: PushEmpty()
0xa04: Call2 0xa88

0xa05: Pop(0)
0xa06: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa07: PushEmpty(bool, int)
0xa08: Stack[-1] = (int) 0
0xa09: Call2 0x1399

0xa0a: Pop(2)
0xa0b: Return(); Pop(0)

0xa0c: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0xa0d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xa0e: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0xa0f: Stack[-7] = Stack[-17]
0xa10: PushEmpty(bool, object)
0xa11: Stack[-1] = Stack[-23]
0xa12: Call2 0xa98

0xa13: Pop(1)
0xa14: Pop(1); Push((bool) Stack[-1] == 0)
0xa15: IF (Stack[-1] == 0) GOTO 0xa18; Pop(1)

0xa16: Stack[-22] = (bool) 0
0xa17: Return(); Pop(16)

0xa18: @@ GetPosition(Stack[-5])
0xa19: Pop(0)
0xa1a: @ GetPosition(Stack[-4])
0xa1b: Pop(0)
0xa1c: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xa1d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xa1e: PushEmpty(bool)
0xa1f: Stack[-1] = (bool) 0
0xa20: Push((int) 0)
0xa21: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0xa22: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa23: Pop(0); Push(Stack[-20] * Stack[-20]);
0xa24: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xa25: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa26: Stack[-1] = (bool) 1
0xa27: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa28: @ Stop()
0xa29: Pop(0)
0xa2a: Stack[-22] = (bool) 0
0xa2b: Return(); Pop(16)

0xa2c: Pop(0); Push(Stack[-20] * Stack[-20]);
0xa2d: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xa2e: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa2f: @@ GetPFPosition(Stack[-5])
0xa30: Pop(0)
0xa31: @ FindPathTo(Stack[-1], Stack[-5])
0xa32: Pop(0)
0xa33: Pop(0); Push(( Stack[-1] != 0 )
0xa34: IF (Stack[-1] == 0) GOTO 0xa37; Pop(1)

0xa35: Stack[-6] = Stack[-1]
0xa36: Stack[-1] = 0
0xa37: Pop(0); Push(( Stack[-6] != 0 )
0xa38: IF (Stack[-1] == 0) GOTO 0xa58; Pop(1)

0xa39: Push(Stack[-7])
0xa3a: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa3b: Stack[-7] = (bool) 0
0xa3c: @ RotatePath(Stack[-6], Stack[-8])
0xa3d: Pop(0)
0xa3e: Pop(0); Push((bool) Stack[-8] == 0)
0xa3f: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa40: GOTO 0xa70

0xa41: Push((int) 0)
0xa42: Push((float)0.3)
0xa43: @ SetTimer(Stack[-2], Stack[-1])
0xa44: Pop(2)
0xa45: PushEmpty(string)
0xa46: Call2 0xa9f

0xa47: Pop(0)
0xa48: PushEmpty(string)
0xa49: Call2 0xaa1

0xa4a: Pop(0)
0xa4b: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0xa4c: Pop(2)
0xa4d: Pop(0); Push((bool) Stack[-8] == 0)
0xa4e: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa4f: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa50: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa51: Stack[-6] = 0
0xa52: GOTO 0xa70

0xa53: GOTO 0xa55

0xa54: GOTO 0xa6f

0xa55: GOTO 0xa57

0xa56: Stack[-6] = 0
0xa57: GOTO 0xa68

0xa58: Push((int) 0)
0xa59: @ KillTimer(Stack[-1])
0xa5a: Pop(1)
0xa5b: Push((float)0.5)
0xa5c: @ Sleep(Stack[-1], Stack[-9])
0xa5d: Pop(1)
0xa5e: Pop(0); Push((bool) Stack[-8] == 0)
0xa5f: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa60: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa61: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa62: Stack[-6] = 0
0xa63: GOTO 0xa70

0xa64: Push((int) 0)
0xa65: Push((float)0.3)
0xa66: @ SetTimer(Stack[-2], Stack[-1])
0xa67: Pop(2)
0xa68: Stack[-1] = 0
0xa69: GOTO 0xa6e

0xa6a: Push((int) 0)
0xa6b: @ KillTimer(Stack[-1])
0xa6c: Pop(1)
0xa6d: GOTO 0xa70

0xa6e: Stack[-6] = 0
0xa6f: GOTO 0xa10

0xa70: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xa71: Return(); Pop(16)

0xa72: PushEmpty()
0xa73: Push((int) 0)
0xa74: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xa75: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa76: Return(); Pop(0)

0xa77: PushEmpty(bool, object)
0xa78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa79: Call2 0xa98

0xa7a: Pop(1)
0xa7b: Pop(1); Push((bool) Stack[-1] == 0)
0xa7c: IF (Stack[-1] == 0) GOTO 0xa7e; Pop(1)

0xa7d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa7e: Push((int) 0)
0xa7f: @ KillTimer(Stack[-1])
0xa80: Pop(1)
0xa81: @ Stop()
0xa82: Pop(0)
0xa83: Return(); Pop(0)

0xa84: PushEmpty()
0xa85: @ RequestClearPath(Stack[-1])
0xa86: Pop(0)
0xa87: Return(); Pop(0)

0xa88: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa89: Push((int) 0)
0xa8a: @ KillTimer(Stack[-1])
0xa8b: Pop(1)
0xa8c: @ Stop()
0xa8d: Pop(0)
0xa8e: Return(); Pop(0)

0xa8f: PushEmpty()
0xa90: PushEmpty()
0xa91: Call2 0xa88

0xa92: Pop(0)
0xa93: PushEmpty(object)
0xa94: Stack[-1] = Stack[-2]
0xa95: Call2 0x143f

0xa96: Pop(1)
0xa97: Return(); Pop(0)

0xa98: PushEmpty()
0xa99: PushEmpty(bool, object)
0xa9a: Stack[-1] = Stack[-3]
0xa9b: Call2 0x1029

0xa9c: Stack[-4] = Stack[-2]
0xa9d: Pop(2)
0xa9e: Return(); Pop(0)

0xa9f: Stack[-1] = "walk"
0xaa0: Return(); Pop(0)

0xaa1: Stack[-1] = "run"
0xaa2: Return(); Pop(0)

0xaa3: PushEmpty()
0xaa4: PushEmpty()
0xaa5: Call2 0x1331

0xaa6: Pop(0)
0xaa7: PushEmpty(object)
0xaa8: Stack[-1] = Stack[-2]
0xaa9: Call2 0xab4

0xaaa: Pop(1)
0xaab: Return(); Pop(0)

0xaac: PushEmpty(object)
0xaad: Call2 0x1193

0xaae: Pop(0)
0xaaf: @ RemoveActor(Stack[-1])
0xab0: Pop(1)
0xab1: @ Hold()
0xab2: Pop(0)
0xab3: Return(); Pop(0)

0xab4: PushEmpty()
0xab5: EventDisable(0)
0xab6: PushEmpty(object)
0xab7: Stack[-1] = Stack[-2]
0xab8: Call2 0xacd

0xab9: Pop(1)
0xaba: Push((int) 50)
0xabb: Push((int) 40)
0xabc: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xabd: Pop(2)
0xabe: EventEnable(0)
0xabf: @ Hold()
0xac0: Pop(0)
0xac1: GOTO 0xabf

0xac2: Return(); Pop(0)

0xac3: PushEmpty(bool, bool)
0xac4: @ IsOverrideActive(Stack[-1])
0xac5: Pop(0)
0xac6: Pop(0); Push((bool) Stack[-1] == 0)
0xac7: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xac8: PushEmpty(object)
0xac9: Stack[-1] = Stack[-4]
0xaca: Call2 0x1313

0xacb: Pop(1)
0xacc: Return(); Pop(2)

0xacd: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xace: Pop(0); Push((bool) Stack[-21] == 0)
0xacf: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xad0: PushEmpty(string)
0xad1: Stack[-1] = "fdie"
0xad2: Call2 0xb28

0xad3: Pop(1)
0xad4: GOTO 0xb27

0xad5: @@ GetPosition(Stack[-10])
0xad6: Pop(0)
0xad7: @ GetPosition(Stack[-9])
0xad8: Pop(0)
0xad9: @ GetDirection(Stack[-8])
0xada: Pop(0)
0xadb: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xadc: Push(CvectorIndex(Stack[-7], 0))
0xadd: Push(CvectorIndex(Stack[-9], 0))
0xade: Pop(2); Push(Stack[-2] * Stack[-1]);
0xadf: Push(CvectorIndex(Stack[-8], 2))
0xae0: Push(CvectorIndex(Stack[-10], 2))
0xae1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xae2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xae3: Push((int) 0)
0xae4: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xae5: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xae6: Stack[-6] = "fdie"
0xae7: GOTO 0xae9

0xae8: Stack[-6] = "bdie"
0xae9: @ RemoveRTEnvelope()
0xaea: Pop(0)
0xaeb: @ SetDeathState()
0xaec: Pop(0)
0xaed: @ Stop()
0xaee: Pop(0)
0xaef: @ StopAsync()
0xaf0: Pop(0)
0xaf1: Stack[-5] = Stack[-21]
0xaf2: Push("GetScriptProperty")
0xaf3: Push((int) 2)
0xaf4: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xaf5: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xaf6: Push("Owner")
0xaf7: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xaf8: Pop(1)
0xaf9: Push(Stack[-4])
0xafa: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xafb: Push("Owner")
0xafc: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xafd: Pop(1)
0xafe: Pop(0); Push((bool) Stack[-5] == 0)
0xaff: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xb00: Stack[-5] = Stack[-21]
0xb01: Push("@GetEyesHeight")
0xb02: Push((int) 1)
0xb03: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xb04: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb05: @@ GetEyesHeight(Stack[-2])
0xb06: Pop(0)
0xb07: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xb08: Push(CvectorIndex(Stack[-1], 1))
0xb09: Stack[-1] = Stack[-3]
0xb0a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xb0b: Push("head")
0xb0c: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xb0d: Pop(1)
0xb0e: Stack[-3] = (bool) 1
0xb0f: GOTO 0xb11

0xb10: Stack[-3] = (bool) 0
0xb11: PushEmpty(string)
0xb12: Stack[-1] = Stack[-7]
0xb13: Call2 0x116a

0xb14: Pop(1)
0xb15: Push("all")
0xb16: @ PlayAnimation(Stack[-1], Stack[-7])
0xb17: Pop(1)
0xb18: @ WaitForAnimEnd()
0xb19: Pop(0)
0xb1a: Push(Stack[-3])
0xb1b: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb1c: @ StopAsync()
0xb1d: Pop(0)
0xb1e: Push("head")
0xb1f: @ UnlookAsync(Stack[-1])
0xb20: Pop(1)
0xb21: Push("all")
0xb22: @ LockAnimationEnd(Stack[-1], Stack[-7])
0xb23: Pop(1)
0xb24: @ RemoveEnvelope()
0xb25: Pop(0)
0xb26: Stack[-5] = 0
0xb27: Return(); Pop(20)

0xb28: PushEmpty()
0xb29: @ RemoveRTEnvelope()
0xb2a: Pop(0)
0xb2b: @ SetDeathState()
0xb2c: Pop(0)
0xb2d: @ Stop()
0xb2e: Pop(0)
0xb2f: @ StopAsync()
0xb30: Pop(0)
0xb31: @ StopSecondaryAnimation()
0xb32: Pop(0)
0xb33: PushEmpty(string)
0xb34: Stack[-1] = Stack[-2]
0xb35: Call2 0x116a

0xb36: Pop(1)
0xb37: Push("all")
0xb38: @ PlayAnimation(Stack[-1], Stack[-2])
0xb39: Pop(1)
0xb3a: @ WaitForAnimEnd()
0xb3b: Pop(0)
0xb3c: Push("all")
0xb3d: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xb3e: Pop(1)
0xb3f: @ RemoveEnvelope()
0xb40: Pop(0)
0xb41: Return(); Pop(0)

0xb42: PushEmpty()
0xb43: Return(); Pop(0)

0xb44: PushEmpty()
0xb45: Return(); Pop(0)

0xb46: PushEmpty()
0xb47: Return(); Pop(0)

0xb48: Push(GlobalVars[1])
0xb49: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb4a: PushEmpty(object)
0xb4b: Call2 0x1193

0xb4c: Pop(0)
0xb4d: @ RemoveActor(Stack[-1])
0xb4e: Pop(1)
0xb4f: @ Hold()
0xb50: Pop(0)
0xb51: PushEmpty(bool)
0xb52: Call2 0x10dd

0xb53: Pop(0)
0xb54: Pop(1); Push((bool) Stack[-1] == 0)
0xb55: IF (Stack[-1] == 0) GOTO 0xb59; Pop(1)

0xb56: @ Hold()
0xb57: Pop(0)
0xb58: GOTO 0xb51

0xb59: Return(); Pop(0)

0xb5a: PushEmpty()
0xb5b: Push("cleanup")
0xb5c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5d: IF (Stack[-1] == 0) GOTO 0xb65; Pop(1)

0xb5e: PushEmpty(object)
0xb5f: Call2 0x1193

0xb60: Pop(0)
0xb61: @ RemoveActor(Stack[-1])
0xb62: Pop(1)
0xb63: @ Hold()
0xb64: Pop(0)
0xb65: Return(); Pop(0)

0xb66: @ StopGroup0()
0xb67: Pop(0)
0xb68: @ sync()
0xb69: Pop(0)
0xb6a: Return(); Pop(0)

0xb6b: PushEmpty()
0xb6c: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0xb6d: Push((int) 3)
0xb6e: Push((int) 1)
0xb6f: @ SetTimer(Stack[-2], Stack[-1])
0xb70: Pop(2)
0xb71: PushEmpty(object, bool, float)
0xb72: Stack[-3] = Stack[-4]
0xb73: Stack[-2] = (bool) 0
0xb74: Stack[-1] = (float) 150.0
0xb75: Call2 0xb95

0xb76: Pop(3)
0xb77: Push((int) 3)
0xb78: @ KillTimer(Stack[-1])
0xb79: Pop(1)
0xb7a: Return(); Pop(0)

0xb7b: PushEmpty()
0xb7c: Stack[-3] = (float) 0.1
0xb7d: Return(); Pop(0)

0xb7e: PushEmpty()
0xb7f: Stack[-3] = (int) 0
0xb80: Return(); Pop(0)

0xb81: Stack[-1] = (int) 0
0xb82: Return(); Pop(0)

0xb83: PushEmpty(object, object)
0xb84: Push((int) 3)
0xb85: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb86: IF (Stack[-1] == 0) GOTO 0xb8a; Pop(1)

0xb87: @ GetMainOutdoorScene(Stack[-1])
0xb88: Pop(0)
0xb89: Stack[-1] = 0
0xb8a: Return(); Pop(2)

0xb8b: PushEmpty()
0xb8c: Return(); Pop(0)

0xb8d: PushEmpty()
0xb8e: Call2 0xc8f

0xb8f: Pop(0)
0xb90: PushEmpty(bool, int)
0xb91: Stack[-1] = (int) 0
0xb92: Call2 0x1399

0xb93: Pop(2)
0xb94: Return(); Pop(0)

0xb95: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xb96: PushEmpty()
0xb97: Call2 0xc97

0xb98: Pop(0)
0xb99: Stack[6 + Tasks[-1].StackPointer] = (int)0
0xb9a: Push("@GetAttackDistance")
0xb9b: Push((int) 1)
0xb9c: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xb9d: IF (Stack[-1] == 0) GOTO 0xba3; Pop(1)

0xb9e: @@ GetAttackDistance(Stack[-11])
0xb9f: Pop(0)
0xba0: Push((int) 50)
0xba1: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xba2: GOTO 0xba4

0xba3: Stack[-11] = Stack[-23]
0xba4: Push((int) 150)
0xba5: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xba6: IF (Stack[-1] == 0) GOTO 0xba8; Pop(1)

0xba7: Stack[-11] = (int) 150
0xba8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xba9: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xbaa: @ IsPlayerActor(Stack[-0], Stack[-8])
0xbab: Pop(0)
0xbac: Push(Stack[-8])
0xbad: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xbae: Push("attack")
0xbaf: @ PlayGlobalMusic(Stack[-1])
0xbb0: Pop(1)
0xbb1: Push(Stack[-24])
0xbb2: IF (Stack[-1] == 0) GOTO 0xbb5; Pop(1)

0xbb3: Stack[-7] = (bool) 0
0xbb4: GOTO 0xbb6

0xbb5: Stack[-7] = (bool) 1
0xbb6: Push((float)300.0)
0xbb7: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xbb8: PushEmpty(bool)
0xbb9: Stack[-1] = (bool) 0
0xbba: PushEmpty(bool)
0xbbb: Stack[-1] = (bool) 0
0xbbc: PushEmpty(bool, object)
0xbbd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbbe: Call2 0x1029

0xbbf: Pop(1)
0xbc0: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xbc1: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xbc2: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xbc3: Stack[-1] = (bool) 1
0xbc4: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xbc5: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0xbc6: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xbc7: Stack[-1] = (bool) 1
0xbc8: IF (Stack[-1] == 0) GOTO 0xc78; Pop(1)

0xbc9: PushEmpty()
0xbca: Call2 0xe49

0xbcb: Pop(0)
0xbcc: @@ GetPFPosition(Stack[-10])
0xbcd: Pop(0)
0xbce: @ GetPFPosition(Stack[-9])
0xbcf: Pop(0)
0xbd0: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xbd1: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xbd2: Pop(0); Push(Stack[-6] * Stack[-6]);
0xbd3: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xbd4: IF (Stack[-1] == 0) GOTO 0xbe5; Pop(1)

0xbd5: PushEmpty(bool, object, float, float, bool, bool)
0xbd6: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xbd7: Stack[-4] = Stack[-17]
0xbd8: Stack[-3] = (float) 1000.0
0xbd9: Stack[-2] = (bool) 1
0xbda: Stack[-1] = (bool) 0
0xbdb: Push(-6, 4); TaskCall(17)
0xbdc: Call2 0xe5b

0xbdd: Pop(-6, 4); TaskReturn
0xbde: Pop(5)
0xbdf: Pop(1); Push((bool) Stack[-1] == 0)
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbe1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbe2: GOTO 0xc78

0xbe3: Stack[-7] = (bool) 0
0xbe4: GOTO 0xc77

0xbe5: Pop(0); Push(Stack[-23] * Stack[-23]);
0xbe6: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xbe7: IF (Stack[-1] == 0) GOTO 0xc6f; Pop(1)

0xbe8: @@ GetPFPosition(Stack[-3])
0xbe9: Pop(0)
0xbea: @ CanReachByPF(Stack[-2], Stack[-3])
0xbeb: Pop(0)
0xbec: Pop(0); Push((bool) Stack[-2] == 0)
0xbed: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbee: PushEmpty(bool, object, float, float, bool, bool)
0xbef: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xbf0: Stack[-4] = Stack[-17]
0xbf1: Stack[-3] = (float) 1000.0
0xbf2: Stack[-2] = (bool) 1
0xbf3: Stack[-1] = (bool) 0
0xbf4: Push(-6, 4); TaskCall(17)
0xbf5: Call2 0xe5b

0xbf6: Pop(-6, 4); TaskReturn
0xbf7: Pop(5)
0xbf8: Pop(1); Push((bool) Stack[-1] == 0)
0xbf9: IF (Stack[-1] == 0) GOTO 0xbfc; Pop(1)

0xbfa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbfb: GOTO 0xc78

0xbfc: Stack[-7] = (bool) 0
0xbfd: GOTO 0xbb8

0xbfe: Pop(0); Push((bool) Stack[-7] == 0)
0xbff: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc00: PushEmpty(object)
0xc01: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc02: Call2 0x10d2

0xc03: Pop(1)
0xc04: Push("all")
0xc05: Push("attack_on")
0xc06: @ PlayAnimation(Stack[-2], Stack[-1])
0xc07: Pop(2)
0xc08: @ WaitForAnimEnd()
0xc09: Pop(0)
0xc0a: PushEmpty()
0xc0b: Call2 0xe49

0xc0c: Pop(0)
0xc0d: @ StopAsync()
0xc0e: Pop(0)
0xc0f: Stack[-7] = (bool) 1
0xc10: PushEmpty(bool)
0xc11: Stack[-1] = (bool) 1
0xc12: PushEmpty(bool, object)
0xc13: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc14: Call2 0x1029

0xc15: Pop(1)
0xc16: Pop(1); Push((bool) Stack[-1] == 0)
0xc17: IF (Stack[-1] == 0) GOTO 0xc1b; Pop(1)

0xc18: Push( Stack[4 + Tasks[-1].StackPointer] )
0xc19: IF (Stack[-1] == 0) GOTO 0xc1b; Pop(1)

0xc1a: Stack[-1] = (bool) 0
0xc1b: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc1c: GOTO 0xc78

0xc1d: @ rand(Stack[-1])
0xc1e: Pop(0)
0xc1f: PushEmpty(bool)
0xc20: Stack[-1] = (bool) 1
0xc21: Push((float)0.6)
0xc22: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xc23: IF (Stack[-1] == 0) GOTO 0xc29; Pop(1)

0xc24: PushEmpty(bool)
0xc25: Call2 0xe1e

0xc26: Pop(0)
0xc27: IF (Stack[-1] == 0) GOTO 0xc29; Pop(1)

0xc28: Stack[-1] = (bool) 0
0xc29: IF (Stack[-1] == 0) GOTO 0xc3a; Pop(1)

0xc2a: @ Face(Stack[-0])
0xc2b: Pop(0)
0xc2c: PushEmpty()
0xc2d: Call2 0xe4e

0xc2e: Pop(0)
0xc2f: Push("all")
0xc30: Push("attack_stay")
0xc31: @ PlayAnimation(Stack[-2], Stack[-1])
0xc32: Pop(2)
0xc33: PushEmpty(bool, float)
0xc34: Stack[-1] = Stack[-25]
0xc35: Call2 0xd8e

0xc36: Pop(2)
0xc37: @ StopAsync()
0xc38: Pop(0)
0xc39: GOTO 0xc6e

0xc3a: @ Face(Stack[-0])
0xc3b: Pop(0)
0xc3c: Push("all")
0xc3d: Push("fjump")
0xc3e: @ PlayAnimation(Stack[-2], Stack[-1])
0xc3f: Pop(2)
0xc40: @ WaitForAnimEnd()
0xc41: Pop(0)
0xc42: PushEmpty()
0xc43: Call2 0xe49

0xc44: Pop(0)
0xc45: Push(CVector(0.0, 0.0, 0.0))
0xc46: @ SetSpeed(Stack[-1])
0xc47: Pop(1)
0xc48: @ Stop()
0xc49: Pop(0)
0xc4a: @ StopAsync()
0xc4b: Pop(0)
0xc4c: PushEmpty(bool)
0xc4d: Call2 0xe1e

0xc4e: Pop(0)
0xc4f: Pop(1); Push((bool) Stack[-1] == 0)
0xc50: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc51: PushEmpty(bool)
0xc52: Stack[-1] = (bool) 1
0xc53: PushEmpty(bool, object)
0xc54: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc55: Call2 0x1029

0xc56: Pop(1)
0xc57: Pop(1); Push((bool) Stack[-1] == 0)
0xc58: IF (Stack[-1] == 0) GOTO 0xc5c; Pop(1)

0xc59: Push( Stack[4 + Tasks[-1].StackPointer] )
0xc5a: IF (Stack[-1] == 0) GOTO 0xc5c; Pop(1)

0xc5b: Stack[-1] = (bool) 0
0xc5c: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc5d: GOTO 0xc78

0xc5e: @@ GetPFPosition(Stack[-10])
0xc5f: Pop(0)
0xc60: @ GetPFPosition(Stack[-9])
0xc61: Pop(0)
0xc62: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xc63: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xc64: Pop(0); Push(Stack[-23] * Stack[-23]);
0xc65: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xc66: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc67: PushEmpty(bool, float)
0xc68: Stack[-1] = Stack[-25]
0xc69: Call2 0xce1

0xc6a: Pop(1)
0xc6b: Pop(1); Push((bool) Stack[-1] == 0)
0xc6c: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc6d: GOTO 0xc78

0xc6e: GOTO 0xc77

0xc6f: PushEmpty(bool, float)
0xc70: Stack[-1] = Stack[-25]
0xc71: Call2 0xce1

0xc72: Pop(1)
0xc73: Pop(1); Push((bool) Stack[-1] == 0)
0xc74: IF (Stack[-1] == 0) GOTO 0xc76; Pop(1)

0xc75: GOTO 0xc78

0xc76: Stack[-7] = (bool) 1
0xc77: GOTO 0xbb8

0xc78: @ WaitForAnimEnd()
0xc79: Pop(0)
0xc7a: PushEmpty(bool)
0xc7b: Stack[-1] = (bool) 1
0xc7c: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc7d: IF (Stack[-1] == 0) GOTO 0xc81; Pop(1)

0xc7e: Push( Stack[4 + Tasks[-1].StackPointer] )
0xc7f: IF (Stack[-1] == 0) GOTO 0xc81; Pop(1)

0xc80: Stack[-1] = (bool) 0
0xc81: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc82: Return(); Pop(22)

0xc83: Push("all")
0xc84: Push("attack_off")
0xc85: @ PlayAnimation(Stack[-2], Stack[-1])
0xc86: Pop(2)
0xc87: @ WaitForAnimEnd()
0xc88: Pop(0)
0xc89: Push(Stack[-8])
0xc8a: IF (Stack[-1] == 0) GOTO 0xc8e; Pop(1)

0xc8b: Push((float)2.0)
0xc8c: @ Sleep(Stack[-1])
0xc8d: Pop(1)
0xc8e: Return(); Pop(22)

0xc8f: @ Stop()
0xc90: Pop(0)
0xc91: @ StopAnimation()
0xc92: Pop(0)
0xc93: @ StopGroup0()
0xc94: Pop(0)
0xc95: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0xc96: Return(); Pop(0)

0xc97: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0xc98: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xc99: Push("all")
0xc9a: Push("attack_begin")
0xc9b: Push((int) 1)
0xc9c: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0xc9d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc9e: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xc9f: Pop(2)
0xca0: Pop(0); Push((bool) Stack[-3] == 0)
0xca1: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xca2: GOTO 0xca6

0xca3: Push((int) 1)
0xca4: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xca5: GOTO 0xc99

0xca6: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xca7: Push("attack")
0xca8: Push((int) 1)
0xca9: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xcaa: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcab: @ IsExisting3DSound(Stack[-3], Stack[-1])
0xcac: Pop(1)
0xcad: Pop(0); Push((bool) Stack[-2] == 0)
0xcae: IF (Stack[-1] == 0) GOTO 0xcb0; Pop(1)

0xcaf: GOTO 0xcb3

0xcb0: Push((int) 1)
0xcb1: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xcb2: GOTO 0xca7

0xcb3: Push("all")
0xcb4: Push("bjump")
0xcb5: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xcb6: Pop(2)
0xcb7: Push(CvectorIndex(Stack[-1], 2))
0xcb8: Stack[5 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0xcb9: Return(); Pop(6)

0xcba: PushEmpty(object, float, float, object, float, float)
0xcbb: Push((float)0.9)
0xcbc: Pop(1); Push(Stack[-9] * Stack[-1]);
0xcbd: @ GetVictim(Stack[-1], Stack[-4])
0xcbe: Pop(1)
0xcbf: @ ReportAttack(Stack[-0])
0xcc0: Pop(0)
0xcc1: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xcc2: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xcc3: PushEmpty(float, object, int)
0xcc4: Stack[-2] = Stack[-6]
0xcc5: Stack[-1] = Stack[-10]
0xcc6: Call2 0xb7b

0xcc7: Stack[-5] = Stack[-3]
0xcc8: Pop(3)
0xcc9: PushEmpty(float, object, float, int)
0xcca: Stack[-3] = Stack[-7]
0xccb: Stack[-2] = Stack[-6]
0xccc: PushEmpty(int, object, int)
0xccd: Stack[-2] = Stack[-10]
0xcce: Stack[-1] = Stack[-14]
0xccf: Call2 0xb7e

0xcd0: Stack[-4] = Stack[-3]
0xcd1: Pop(3)
0xcd2: Call2 0xfb7

0xcd3: Stack[-5] = Stack[-4]
0xcd4: Pop(4)
0xcd5: PushEmpty(int)
0xcd6: Call2 0xb81

0xcd7: Pop(0)
0xcd8: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0xcd9: Pop(1)
0xcda: PushEmpty(object, float)
0xcdb: Stack[-2] = Stack[-5]
0xcdc: Stack[-1] = Stack[-3]
0xcdd: Call2 0xe53

0xcde: Pop(2)
0xcdf: Return(); Pop(6)

0xce0: Stack[-3] = 0
0xce1: PushEmpty(int, bool, int, string, int, bool, int, string)
0xce2: PushEmpty()
0xce3: Call2 0xe49

0xce4: Pop(0)
0xce5: @ irand(Stack[-4], Stack[-1])
0xce6: Pop(0)
0xce7: Push((int) 1)
0xce8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xce9: @ Face(Stack[-0])
0xcea: Pop(0)
0xceb: Push((bool) 1)
0xcec: @ SetAttackState(Stack[-1])
0xced: Pop(1)
0xcee: Push("all")
0xcef: Push("attack_begin")
0xcf0: Pop(1); Push(Stack[-1] + Stack[-6]);
0xcf1: @ PlayAnimation(Stack[-2], Stack[-1])
0xcf2: Pop(2)
0xcf3: @ WaitForAnimEnd()
0xcf4: Pop(0)
0xcf5: PushEmpty()
0xcf6: Call2 0xe29

0xcf7: Pop(0)
0xcf8: PushEmpty(bool)
0xcf9: Stack[-1] = (bool) 1
0xcfa: PushEmpty(bool, object)
0xcfb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcfc: Call2 0x1029

0xcfd: Pop(1)
0xcfe: Pop(1); Push((bool) Stack[-1] == 0)
0xcff: IF (Stack[-1] == 0) GOTO 0xd03; Pop(1)

0xd00: Push( Stack[4 + Tasks[-1].StackPointer] )
0xd01: IF (Stack[-1] == 0) GOTO 0xd03; Pop(1)

0xd02: Stack[-1] = (bool) 0
0xd03: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xd04: @ StopAsync()
0xd05: Pop(0)
0xd06: Stack[-10] = (bool) 0
0xd07: Return(); Pop(8)

0xd08: PushEmpty(float, int)
0xd09: Stack[-2] = Stack[-11]
0xd0a: Stack[-1] = Stack[-6]
0xd0b: Call2 0xcba

0xd0c: Pop(2)
0xd0d: Push("all")
0xd0e: Push("attack_middle")
0xd0f: Pop(1); Push(Stack[-1] + Stack[-6]);
0xd10: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xd11: Pop(2)
0xd12: Push(Stack[-3])
0xd13: IF (Stack[-1] == 0) GOTO 0xd5f; Pop(1)

0xd14: Push("all")
0xd15: Push("attack_middle")
0xd16: Pop(1); Push(Stack[-1] + Stack[-6]);
0xd17: @ PlayAnimation(Stack[-2], Stack[-1])
0xd18: Pop(2)
0xd19: @ WaitForAnimEnd()
0xd1a: Pop(0)
0xd1b: PushEmpty()
0xd1c: Call2 0xe49

0xd1d: Pop(0)
0xd1e: PushEmpty(bool)
0xd1f: Stack[-1] = (bool) 1
0xd20: PushEmpty(bool, object)
0xd21: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd22: Call2 0x1029

0xd23: Pop(1)
0xd24: Pop(1); Push((bool) Stack[-1] == 0)
0xd25: IF (Stack[-1] == 0) GOTO 0xd29; Pop(1)

0xd26: Push( Stack[4 + Tasks[-1].StackPointer] )
0xd27: IF (Stack[-1] == 0) GOTO 0xd29; Pop(1)

0xd28: Stack[-1] = (bool) 0
0xd29: IF (Stack[-1] == 0) GOTO 0xd2e; Pop(1)

0xd2a: @ StopAsync()
0xd2b: Pop(0)
0xd2c: Stack[-10] = (bool) 0
0xd2d: Return(); Pop(8)

0xd2e: PushEmpty(float, int)
0xd2f: Stack[-2] = Stack[-11]
0xd30: Stack[-1] = Stack[-6]
0xd31: Call2 0xcba

0xd32: Pop(2)
0xd33: Stack[-2] = (int) 1
0xd34: Push("attack_middle")
0xd35: Pop(1); Push(Stack[-1] + Stack[-5]);
0xd36: Push("_")
0xd37: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd38: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0xd39: Push("all")
0xd3a: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0xd3b: Pop(1)
0xd3c: Pop(0); Push((bool) Stack[-3] == 0)
0xd3d: IF (Stack[-1] == 0) GOTO 0xd3f; Pop(1)

0xd3e: GOTO 0xd5f

0xd3f: Push("all")
0xd40: @ PlayAnimation(Stack[-1], Stack[-2])
0xd41: Pop(1)
0xd42: @ WaitForAnimEnd()
0xd43: Pop(0)
0xd44: PushEmpty()
0xd45: Call2 0xe49

0xd46: Pop(0)
0xd47: PushEmpty(bool)
0xd48: Stack[-1] = (bool) 1
0xd49: PushEmpty(bool, object)
0xd4a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4b: Call2 0x1029

0xd4c: Pop(1)
0xd4d: Pop(1); Push((bool) Stack[-1] == 0)
0xd4e: IF (Stack[-1] == 0) GOTO 0xd52; Pop(1)

0xd4f: Push( Stack[4 + Tasks[-1].StackPointer] )
0xd50: IF (Stack[-1] == 0) GOTO 0xd52; Pop(1)

0xd51: Stack[-1] = (bool) 0
0xd52: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd53: @ StopAsync()
0xd54: Pop(0)
0xd55: Stack[-10] = (bool) 0
0xd56: Return(); Pop(8)

0xd57: PushEmpty(float, int)
0xd58: Stack[-2] = Stack[-11]
0xd59: Stack[-1] = Stack[-6]
0xd5a: Call2 0xcba

0xd5b: Pop(2)
0xd5c: Push((int) 1)
0xd5d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd5e: GOTO 0xd34

0xd5f: Push((bool) 0)
0xd60: @ SetAttackState(Stack[-1])
0xd61: Pop(1)
0xd62: Push("all")
0xd63: Push("attack_end")
0xd64: Pop(1); Push(Stack[-1] + Stack[-6]);
0xd65: @ PlayAnimation(Stack[-2], Stack[-1])
0xd66: Pop(2)
0xd67: PushEmpty(bool)
0xd68: Call2 0xe55

0xd69: Pop(0)
0xd6a: IF (Stack[-1] == 0) GOTO 0xd71; Pop(1)

0xd6b: PushEmpty(bool, float)
0xd6c: Stack[-1] = (float) 0.75
0xd6d: Call2 0xd73

0xd6e: Pop(2)
0xd6f: @ StopAsync()
0xd70: Pop(0)
0xd71: Stack[-10] = (bool) 1
0xd72: Return(); Pop(8)

0xd73: PushEmpty(float, bool, float, bool)
0xd74: @ rand(Stack[-2])
0xd75: Pop(0)
0xd76: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0xd77: IF (Stack[-1] == 0) GOTO 0xd87; Pop(1)

0xd78: @ IsAnimationPlaying(Stack[-1])
0xd79: Pop(0)
0xd7a: Pop(0); Push((bool) Stack[-1] == 0)
0xd7b: IF (Stack[-1] == 0) GOTO 0xd7d; Pop(1)

0xd7c: GOTO 0xd86

0xd7d: PushEmpty(bool)
0xd7e: Call2 0xde1

0xd7f: Pop(0)
0xd80: IF (Stack[-1] == 0) GOTO 0xd83; Pop(1)

0xd81: Stack[-6] = (bool) 1
0xd82: Return(); Pop(4)

0xd83: @ sync()
0xd84: Pop(0)
0xd85: GOTO 0xd78

0xd86: GOTO 0xd8c

0xd87: @ WaitForAnimEnd()
0xd88: Pop(0)
0xd89: PushEmpty()
0xd8a: Call2 0xe49

0xd8b: Pop(0)
0xd8c: Stack[-6] = (bool) 0
0xd8d: Return(); Pop(4)

0xd8e: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0xd8f: @ IsAnimationPlaying(Stack[-5])
0xd90: Pop(0)
0xd91: Pop(0); Push((bool) Stack[-5] == 0)
0xd92: IF (Stack[-1] == 0) GOTO 0xd94; Pop(1)

0xd93: GOTO 0xdba

0xd94: PushEmpty(bool)
0xd95: Call2 0xde1

0xd96: Pop(0)
0xd97: IF (Stack[-1] == 0) GOTO 0xd9a; Pop(1)

0xd98: Stack[-12] = (bool) 1
0xd99: Return(); Pop(10)

0xd9a: PushEmpty(bool)
0xd9b: Stack[-1] = (bool) 1
0xd9c: PushEmpty(bool, object)
0xd9d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9e: Call2 0x1029

0xd9f: Pop(1)
0xda0: Pop(1); Push((bool) Stack[-1] == 0)
0xda1: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xda2: Push( Stack[4 + Tasks[-1].StackPointer] )
0xda3: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xda4: Stack[-1] = (bool) 0
0xda5: IF (Stack[-1] == 0) GOTO 0xda8; Pop(1)

0xda6: Stack[-12] = (bool) 0
0xda7: Return(); Pop(10)

0xda8: @@ GetPFPosition(Stack[-4])
0xda9: Pop(0)
0xdaa: @ GetPFPosition(Stack[-3])
0xdab: Pop(0)
0xdac: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xdad: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xdae: Pop(0); Push(Stack[-11] * Stack[-11]);
0xdaf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xdb0: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdb1: PushEmpty(bool, float)
0xdb2: Stack[-1] = Stack[-13]
0xdb3: Call2 0xce1

0xdb4: Pop(2)
0xdb5: Stack[-12] = (bool) 1
0xdb6: Return(); Pop(10)

0xdb7: @ sync()
0xdb8: Pop(0)
0xdb9: GOTO 0xd8f

0xdba: PushEmpty()
0xdbb: Call2 0xe49

0xdbc: Pop(0)
0xdbd: Stack[-12] = (bool) 0
0xdbe: Return(); Pop(10)

0xdbf: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0xdc0: PushEmpty(bool)
0xdc1: Stack[-1] = (bool) 1
0xdc2: PushEmpty(bool, object)
0xdc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc4: Call2 0x1029

0xdc5: Pop(1)
0xdc6: Pop(1); Push((bool) Stack[-1] == 0)
0xdc7: IF (Stack[-1] == 0) GOTO 0xdcb; Pop(1)

0xdc8: Push( Stack[4 + Tasks[-1].StackPointer] )
0xdc9: IF (Stack[-1] == 0) GOTO 0xdcb; Pop(1)

0xdca: Stack[-1] = (bool) 0
0xdcb: IF (Stack[-1] == 0) GOTO 0xdce; Pop(1)

0xdcc: Stack[-11] = (bool) 0
0xdcd: Return(); Pop(10)

0xdce: PushEmpty(bool)
0xdcf: Call2 0xe1e

0xdd0: Pop(0)
0xdd1: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xdd2: @@ GetPFPosition(Stack[-5])
0xdd3: Pop(0)
0xdd4: @ GetPFPosition(Stack[-4])
0xdd5: Pop(0)
0xdd6: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xdd7: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xdd8: @@ GetAttackDistance(Stack[-1])
0xdd9: Pop(0)
0xdda: Push((int) 50)
0xddb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xddc: Pop(0); Push(Stack[-1] * Stack[-1]);
0xddd: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0xdde: Return(); Pop(10)

0xddf: Stack[-11] = (bool) 0
0xde0: Return(); Pop(10)

0xde1: PushEmpty(bool)
0xde2: Stack[-1] = (bool) 0
0xde3: PushEmpty(bool)
0xde4: Call2 0xdbf

0xde5: Pop(0)
0xde6: IF (Stack[-1] == 0) GOTO 0xdec; Pop(1)

0xde7: PushEmpty(bool)
0xde8: Call2 0xdf1

0xde9: Pop(0)
0xdea: IF (Stack[-1] == 0) GOTO 0xdec; Pop(1)

0xdeb: Stack[-1] = (bool) 1
0xdec: IF (Stack[-1] == 0) GOTO 0xdef; Pop(1)

0xded: Stack[-1] = (bool) 1
0xdee: Return(); Pop(0)

0xdef: Stack[-1] = (bool) 0
0xdf0: Return(); Pop(0)

0xdf1: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0xdf2: @ GetScene(Stack[-5])
0xdf3: Pop(0)
0xdf4: Stack[-4] = (bool) 0
0xdf5: PushEmpty(cvector, object)
0xdf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf7: Call2 0xf97

0xdf8: Pop(1)
0xdf9: Pop(1); Push(( -Stack[-1])
0xdfa: @ FindDirLength(Stack[-4], Stack[-1], Stack[-5])
0xdfb: Pop(1)
0xdfc: Pop(0); Push((bool) Stack[-3] < Stack[5 + Tasks[-1].StackPointer])
0xdfd: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdfe: GOTO 0xe1b

0xdff: @ Face(Stack[-0])
0xe00: Pop(0)
0xe01: Push("all")
0xe02: Push("bjump")
0xe03: @ PlayAnimation(Stack[-2], Stack[-1])
0xe04: Pop(2)
0xe05: @@ GetPFPosition(Stack[-2])
0xe06: Pop(0)
0xe07: @ GetPFPosition(Stack[-1])
0xe08: Pop(0)
0xe09: @ WaitForAnimEnd()
0xe0a: Pop(0)
0xe0b: PushEmpty()
0xe0c: Call2 0xe49

0xe0d: Pop(0)
0xe0e: @ StopAsync()
0xe0f: Pop(0)
0xe10: Push(CVector(0.0, 0.0, 0.0))
0xe11: @ SetSpeed(Stack[-1])
0xe12: Pop(1)
0xe13: Stack[-4] = (bool) 1
0xe14: PushEmpty(bool)
0xe15: Call2 0xdbf

0xe16: Pop(0)
0xe17: Pop(1); Push((bool) Stack[-1] == 0)
0xe18: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe19: GOTO 0xe1b

0xe1a: GOTO 0xdf5

0xe1b: Stack[-11] = Stack[-4]
0xe1c: Return(); Pop(10)

0xe1d: Stack[-5] = 0
0xe1e: PushEmpty(bool, bool)
0xe1f: Push("IsAttacking")
0xe20: Push((int) 1)
0xe21: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0xe22: IF (Stack[-1] == 0) GOTO 0xe27; Pop(1)

0xe23: @@ IsAttacking(Stack[-1])
0xe24: Pop(0)
0xe25: Stack[-3] = Stack[-1]
0xe26: Return(); Pop(2)

0xe27: Stack[-3] = (bool) 0
0xe28: Return(); Pop(2)

0xe29: PushEmpty(float, int, float, int)
0xe2a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xe2b: IF (Stack[-1] == 0) GOTO 0xe2d; Pop(1)

0xe2c: Return(); Pop(4)

0xe2d: Push( Stack[6 + Tasks[-1].StackPointer] )
0xe2e: IF (Stack[-1] == 0) GOTO 0xe35; Pop(1)

0xe2f: Push((int) -1)
0xe30: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xe31: Push((int) 0)
0xe32: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] > Stack[-1])
0xe33: IF (Stack[-1] == 0) GOTO 0xe35; Pop(1)

0xe34: Return(); Pop(4)

0xe35: @ rand(Stack[-2])
0xe36: Pop(0)
0xe37: PushEmpty(float)
0xe38: Call2 0xe59

0xe39: Pop(0)
0xe3a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xe3b: IF (Stack[-1] == 0) GOTO 0xe48; Pop(1)

0xe3c: @ irand(Stack[-1], Stack[-2])
0xe3d: Pop(0)
0xe3e: Push((int) 1)
0xe3f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xe40: Push("attack")
0xe41: Pop(1); Push(Stack[-1] + Stack[-2]);
0xe42: @ Speak(Stack[-1])
0xe43: Pop(1)
0xe44: PushEmpty(int)
0xe45: Call2 0xe57

0xe46: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0xe47: Pop(1)
0xe48: Return(); Pop(4)

0xe49: PushEmpty(object)
0xe4a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4b: Call2 0x11e4

0xe4c: Pop(1)
0xe4d: Return(); Pop(0)

0xe4e: PushEmpty(string)
0xe4f: Stack[-1] = "attack_stay"
0xe50: Call2 0x116a

0xe51: Pop(1)
0xe52: Return(); Pop(0)

0xe53: PushEmpty()
0xe54: Return(); Pop(0)

0xe55: Stack[-1] = (bool) 1
0xe56: Return(); Pop(0)

0xe57: Stack[-1] = (int) 1
0xe58: Return(); Pop(0)

0xe59: Stack[-1] = (float) 0.5
0xe5a: Return(); Pop(0)

0xe5b: PushEmpty(bool, bool)
0xe5c: Stack[3 + Tasks[-1].StackPointer] = Stack[-7]
0xe5d: Push((int) 4)
0xe5e: Push((int) 2)
0xe5f: @ SetTimer(Stack[-2], Stack[-1])
0xe60: Pop(2)
0xe61: PushEmpty(bool, object, float, float, bool, bool)
0xe62: Stack[-5] = Stack[-13]
0xe63: Stack[-4] = Stack[-12]
0xe64: Stack[-3] = Stack[-11]
0xe65: Stack[-2] = Stack[-10]
0xe66: Stack[-1] = Stack[-9]
0xe67: Call2 0xe84

0xe68: Stack[-7] = Stack[-6]
0xe69: Pop(6)
0xe6a: Push((int) 4)
0xe6b: @ KillTimer(Stack[-1])
0xe6c: Pop(1)
0xe6d: Stack[-8] = Stack[-1]
0xe6e: Return(); Pop(2)

0xe6f: PushEmpty(object, object)
0xe70: Push((int) 4)
0xe71: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe72: IF (Stack[-1] == 0) GOTO 0xe77; Pop(1)

0xe73: @ GetMainOutdoorScene(Stack[-1])
0xe74: Pop(0)
0xe75: Stack[-1] = 0
0xe76: GOTO 0xe7b

0xe77: PushEmpty(int)
0xe78: Stack[-1] = Stack[-4]
0xe79: Call2 0xeb5

0xe7a: Pop(1)
0xe7b: Return(); Pop(2)

0xe7c: PushEmpty()
0xe7d: Call2 0xec3

0xe7e: Pop(0)
0xe7f: PushEmpty(bool, int)
0xe80: Stack[-1] = (int) 0
0xe81: Call2 0x1399

0xe82: Pop(2)
0xe83: Return(); Pop(0)

0xe84: PushEmpty(bool, bool, bool, bool)
0xe85: PushEmpty(object)
0xe86: Stack[-1] = Stack[-10]
0xe87: Call2 0x11e4

0xe88: Pop(1)
0xe89: Push((int) 1)
0xe8a: Push((int) 5)
0xe8b: @ SetTimer(Stack[-2], Stack[-1])
0xe8c: Pop(2)
0xe8d: @ CanSee(Stack[-2], Stack[-9])
0xe8e: Pop(0)
0xe8f: Push(Stack[-2])
0xe90: IF (Stack[-1] == 0) GOTO 0xe97; Pop(1)

0xe91: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xe92: PushEmpty(object)
0xe93: Stack[-1] = Stack[-10]
0xe94: Call2 0x1158

0xe95: Pop(1)
0xe96: GOTO 0xe98

0xe97: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xe98: PushEmpty(bool, object)
0xe99: Stack[-1] = Stack[-11]
0xe9a: Call2 0xfa6

0xe9b: Pop(1)
0xe9c: IF (Stack[-1] == 0) GOTO 0xea2; Pop(1)

0xe9d: PushEmpty(object)
0xe9e: Call2 0x1193

0xe9f: Pop(0)
0xea0: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0xea1: Pop(1)
0xea2: PushEmpty(bool, object, float, float, bool, bool)
0xea3: Stack[-5] = Stack[-15]
0xea4: Stack[-4] = Stack[-14]
0xea5: Stack[-3] = Stack[-13]
0xea6: Stack[-2] = Stack[-12]
0xea7: Stack[-1] = Stack[-11]
0xea8: Call2 0xeed

0xea9: Stack[-7] = Stack[-6]
0xeaa: Pop(6)
0xeab: Push( Stack[2 + Tasks[-1].StackPointer] )
0xeac: IF (Stack[-1] == 0) GOTO 0xeb0; Pop(1)

0xead: Push("head")
0xeae: @ UnlookAsync(Stack[-1])
0xeaf: Pop(1)
0xeb0: Push((int) 1)
0xeb1: @ KillTimer(Stack[-1])
0xeb2: Pop(1)
0xeb3: Stack[-10] = Stack[-1]
0xeb4: Return(); Pop(4)

0xeb5: PushEmpty()
0xeb6: Push((int) 1)
0xeb7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb8: IF (Stack[-1] == 0) GOTO 0xebe; Pop(1)

0xeb9: PushEmpty(object)
0xeba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xebb: Call2 0x11e4

0xebc: Pop(1)
0xebd: GOTO 0xec2

0xebe: PushEmpty(int)
0xebf: Stack[-1] = Stack[-2]
0xec0: Call2 0xf53

0xec1: Pop(1)
0xec2: Return(); Pop(0)

0xec3: Push((int) 1)
0xec4: @ KillTimer(Stack[-1])
0xec5: Pop(1)
0xec6: Push( Stack[2 + Tasks[-1].StackPointer] )
0xec7: IF (Stack[-1] == 0) GOTO 0xecc; Pop(1)

0xec8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xec9: Push("head")
0xeca: @ UnlookAsync(Stack[-1])
0xecb: Pop(1)
0xecc: PushEmpty()
0xecd: Call2 0xf69

0xece: Pop(0)
0xecf: Return(); Pop(0)

0xed0: PushEmpty()
0xed1: PushEmpty(bool)
0xed2: Stack[-1] = (bool) 0
0xed3: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xed4: IF (Stack[-1] == 0) GOTO 0xed8; Pop(1)

0xed5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xed6: IF (Stack[-1] == 0) GOTO 0xed8; Pop(1)

0xed7: Stack[-1] = (bool) 1
0xed8: IF (Stack[-1] == 0) GOTO 0xede; Pop(1)

0xed9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xeda: PushEmpty(object)
0xedb: Stack[-1] = Stack[-2]
0xedc: Call2 0x1158

0xedd: Pop(1)
0xede: Return(); Pop(0)

0xedf: PushEmpty()
0xee0: PushEmpty(bool)
0xee1: Stack[-1] = (bool) 0
0xee2: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xee3: IF (Stack[-1] == 0) GOTO 0xee7; Pop(1)

0xee4: Push( Stack[2 + Tasks[-1].StackPointer] )
0xee5: IF (Stack[-1] == 0) GOTO 0xee7; Pop(1)

0xee6: Stack[-1] = (bool) 1
0xee7: IF (Stack[-1] == 0) GOTO 0xeec; Pop(1)

0xee8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xee9: Push("head")
0xeea: @ UnlookAsync(Stack[-1])
0xeeb: Pop(1)
0xeec: Return(); Pop(0)

0xeed: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0xeee: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xeef: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0xef0: Stack[-7] = Stack[-17]
0xef1: PushEmpty(bool, object)
0xef2: Stack[-1] = Stack[-23]
0xef3: Call2 0xf79

0xef4: Pop(1)
0xef5: Pop(1); Push((bool) Stack[-1] == 0)
0xef6: IF (Stack[-1] == 0) GOTO 0xef9; Pop(1)

0xef7: Stack[-22] = (bool) 0
0xef8: Return(); Pop(16)

0xef9: @@ GetPosition(Stack[-5])
0xefa: Pop(0)
0xefb: @ GetPosition(Stack[-4])
0xefc: Pop(0)
0xefd: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xefe: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xeff: PushEmpty(bool)
0xf00: Stack[-1] = (bool) 0
0xf01: Push((int) 0)
0xf02: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0xf03: IF (Stack[-1] == 0) GOTO 0xf08; Pop(1)

0xf04: Pop(0); Push(Stack[-20] * Stack[-20]);
0xf05: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xf06: IF (Stack[-1] == 0) GOTO 0xf08; Pop(1)

0xf07: Stack[-1] = (bool) 1
0xf08: IF (Stack[-1] == 0) GOTO 0xf0d; Pop(1)

0xf09: @ Stop()
0xf0a: Pop(0)
0xf0b: Stack[-22] = (bool) 0
0xf0c: Return(); Pop(16)

0xf0d: Pop(0); Push(Stack[-20] * Stack[-20]);
0xf0e: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xf0f: IF (Stack[-1] == 0) GOTO 0xf4b; Pop(1)

0xf10: @@ GetPFPosition(Stack[-5])
0xf11: Pop(0)
0xf12: @ FindPathTo(Stack[-1], Stack[-5])
0xf13: Pop(0)
0xf14: Pop(0); Push(( Stack[-1] != 0 )
0xf15: IF (Stack[-1] == 0) GOTO 0xf18; Pop(1)

0xf16: Stack[-6] = Stack[-1]
0xf17: Stack[-1] = 0
0xf18: Pop(0); Push(( Stack[-6] != 0 )
0xf19: IF (Stack[-1] == 0) GOTO 0xf39; Pop(1)

0xf1a: Push(Stack[-7])
0xf1b: IF (Stack[-1] == 0) GOTO 0xf22; Pop(1)

0xf1c: Stack[-7] = (bool) 0
0xf1d: @ RotatePath(Stack[-6], Stack[-8])
0xf1e: Pop(0)
0xf1f: Pop(0); Push((bool) Stack[-8] == 0)
0xf20: IF (Stack[-1] == 0) GOTO 0xf22; Pop(1)

0xf21: GOTO 0xf51

0xf22: Push((int) 0)
0xf23: Push((float)0.3)
0xf24: @ SetTimer(Stack[-2], Stack[-1])
0xf25: Pop(2)
0xf26: PushEmpty(string)
0xf27: Call2 0xf80

0xf28: Pop(0)
0xf29: PushEmpty(string)
0xf2a: Call2 0xf82

0xf2b: Pop(0)
0xf2c: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0xf2d: Pop(2)
0xf2e: Pop(0); Push((bool) Stack[-8] == 0)
0xf2f: IF (Stack[-1] == 0) GOTO 0xf37; Pop(1)

0xf30: Push( Stack[0 + Tasks[-1].StackPointer] )
0xf31: IF (Stack[-1] == 0) GOTO 0xf35; Pop(1)

0xf32: Stack[-6] = 0
0xf33: GOTO 0xf51

0xf34: GOTO 0xf36

0xf35: GOTO 0xf50

0xf36: GOTO 0xf38

0xf37: Stack[-6] = 0
0xf38: GOTO 0xf49

0xf39: Push((int) 0)
0xf3a: @ KillTimer(Stack[-1])
0xf3b: Pop(1)
0xf3c: Push((float)0.5)
0xf3d: @ Sleep(Stack[-1], Stack[-9])
0xf3e: Pop(1)
0xf3f: Pop(0); Push((bool) Stack[-8] == 0)
0xf40: IF (Stack[-1] == 0) GOTO 0xf45; Pop(1)

0xf41: Push( Stack[0 + Tasks[-1].StackPointer] )
0xf42: IF (Stack[-1] == 0) GOTO 0xf45; Pop(1)

0xf43: Stack[-6] = 0
0xf44: GOTO 0xf51

0xf45: Push((int) 0)
0xf46: Push((float)0.3)
0xf47: @ SetTimer(Stack[-2], Stack[-1])
0xf48: Pop(2)
0xf49: Stack[-1] = 0
0xf4a: GOTO 0xf4f

0xf4b: Push((int) 0)
0xf4c: @ KillTimer(Stack[-1])
0xf4d: Pop(1)
0xf4e: GOTO 0xf51

0xf4f: Stack[-6] = 0
0xf50: GOTO 0xef1

0xf51: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xf52: Return(); Pop(16)

0xf53: PushEmpty()
0xf54: Push((int) 0)
0xf55: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xf56: IF (Stack[-1] == 0) GOTO 0xf58; Pop(1)

0xf57: Return(); Pop(0)

0xf58: PushEmpty(bool, object)
0xf59: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5a: Call2 0xf79

0xf5b: Pop(1)
0xf5c: Pop(1); Push((bool) Stack[-1] == 0)
0xf5d: IF (Stack[-1] == 0) GOTO 0xf5f; Pop(1)

0xf5e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf5f: Push((int) 0)
0xf60: @ KillTimer(Stack[-1])
0xf61: Pop(1)
0xf62: @ Stop()
0xf63: Pop(0)
0xf64: Return(); Pop(0)

0xf65: PushEmpty()
0xf66: @ RequestClearPath(Stack[-1])
0xf67: Pop(0)
0xf68: Return(); Pop(0)

0xf69: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf6a: Push((int) 0)
0xf6b: @ KillTimer(Stack[-1])
0xf6c: Pop(1)
0xf6d: @ Stop()
0xf6e: Pop(0)
0xf6f: Return(); Pop(0)

0xf70: PushEmpty()
0xf71: PushEmpty()
0xf72: Call2 0xec3

0xf73: Pop(0)
0xf74: PushEmpty(object)
0xf75: Stack[-1] = Stack[-2]
0xf76: Call2 0x143f

0xf77: Pop(1)
0xf78: Return(); Pop(0)

0xf79: PushEmpty()
0xf7a: PushEmpty(bool, object)
0xf7b: Stack[-1] = Stack[-3]
0xf7c: Call2 0x1029

0xf7d: Stack[-4] = Stack[-2]
0xf7e: Pop(2)
0xf7f: Return(); Pop(0)

0xf80: Stack[-1] = "walk"
0xf81: Return(); Pop(0)

0xf82: Stack[-1] = "run"
0xf83: Return(); Pop(0)

0xf84: PushEmpty()
0xf85: Push((int) 2)
0xf86: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf87: IF (Stack[-1] == 0) GOTO 0xf8b; Pop(1)

0xf88: Stack[-2] = "fire"
0xf89: Return(); Pop(0)

0xf8a: GOTO 0xf90

0xf8b: Push((int) 1)
0xf8c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf8d: IF (Stack[-1] == 0) GOTO 0xf90; Pop(1)

0xf8e: Stack[-2] = "bullet"
0xf8f: Return(); Pop(0)

0xf90: Stack[-2] = "phys"
0xf91: Return(); Pop(0)

0xf92: PushEmpty(cvector, cvector)
0xf93: @ GetPosition(Stack[-1])
0xf94: Pop(0)
0xf95: Stack[-3] = Stack[-1]
0xf96: Return(); Pop(2)

0xf97: PushEmpty(cvector, cvector, cvector, cvector)
0xf98: @ GetPosition(Stack[-2])
0xf99: Pop(0)
0xf9a: @@ GetPosition(Stack[-1])
0xf9b: Pop(0)
0xf9c: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xf9d: Return(); Pop(4)

0xf9e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xf9f: @ GetPosition(Stack[-3])
0xfa0: Pop(0)
0xfa1: @@ GetPosition(Stack[-2])
0xfa2: Pop(0)
0xfa3: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xfa4: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xfa5: Return(); Pop(6)

0xfa6: PushEmpty(bool, bool)
0xfa7: @ IsPlayerActor(Stack[-3], Stack[-1])
0xfa8: Pop(0)
0xfa9: Stack[-4] = Stack[-1]
0xfaa: Return(); Pop(2)

0xfab: PushEmpty(bool, bool)
0xfac: Push("HasProperty")
0xfad: Push((int) 2)
0xfae: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xfaf: Pop(1); Push((bool) Stack[-1] == 0)
0xfb0: IF (Stack[-1] == 0) GOTO 0xfb3; Pop(1)

0xfb1: Stack[-5] = (bool) 0
0xfb2: Return(); Pop(2)

0xfb3: @@ HasProperty(Stack[-3], Stack[-1])
0xfb4: Pop(0)
0xfb5: Stack[-5] = Stack[-1]
0xfb6: Return(); Pop(2)

0xfb7: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xfb8: PushEmpty(bool, object, string)
0xfb9: Stack[-2] = Stack[-18]
0xfba: Stack[-1] = "health"
0xfbb: Call2 0xfab

0xfbc: Pop(2)
0xfbd: Pop(1); Push((bool) Stack[-1] == 0)
0xfbe: IF (Stack[-1] == 0) GOTO 0xfc1; Pop(1)

0xfbf: Stack[-16] = (float) 0.0
0xfc0: Return(); Pop(12)

0xfc1: PushEmpty(bool, object, string)
0xfc2: Stack[-2] = Stack[-18]
0xfc3: Stack[-1] = "armor"
0xfc4: Call2 0xfab

0xfc5: Pop(2)
0xfc6: Pop(1); Push((bool) Stack[-1] == 0)
0xfc7: IF (Stack[-1] == 0) GOTO 0xfca; Pop(1)

0xfc8: Stack[-6] = (int) 0
0xfc9: GOTO 0xfcd

0xfca: Push("armor")
0xfcb: @@ GetProperty(Stack[-1], Stack[-7])
0xfcc: Pop(1)
0xfcd: Push("armor_")
0xfce: PushEmpty(string, int)
0xfcf: Stack[-1] = Stack[-16]
0xfd0: Call2 0xf84

0xfd1: Pop(1)
0xfd2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xfd3: PushEmpty(bool, object, string)
0xfd4: Stack[-2] = Stack[-18]
0xfd5: Stack[-1] = Stack[-8]
0xfd6: Call2 0xfab

0xfd7: Pop(2)
0xfd8: Pop(1); Push((bool) Stack[-1] == 0)
0xfd9: IF (Stack[-1] == 0) GOTO 0xfdc; Pop(1)

0xfda: Stack[-4] = (int) 0
0xfdb: GOTO 0xfde

0xfdc: @@ GetProperty(Stack[-5], Stack[-4])
0xfdd: Pop(0)
0xfde: PushEmpty(float, float, float)
0xfdf: Pop(0); Push(Stack[-9] + Stack[-7]);
0xfe0: Push((float)100.0)
0xfe1: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xfe2: Stack[-1] = (int) 1
0xfe3: Call2 0x11a3

0xfe4: Stack[-6] = Stack[-3]
0xfe5: Pop(3)
0xfe6: Push("health")
0xfe7: @@ GetProperty(Stack[-1], Stack[-3])
0xfe8: Pop(1)
0xfe9: Push((int) 1)
0xfea: Pop(1); Push(Stack[-1] - Stack[-4]);
0xfeb: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xfec: Push("health")
0xfed: PushEmpty(float, float, float, float)
0xfee: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xfef: Stack[-2] = (int) 0
0xff0: Stack[-1] = (int) 1
0xff1: Call2 0x11aa

0xff2: Pop(3)
0xff3: @@ SetProperty(Stack[-2], Stack[-1])
0xff4: Pop(2)
0xff5: PushEmpty(bool, object)
0xff6: Stack[-1] = Stack[-17]
0xff7: Call2 0xfa6

0xff8: Pop(1)
0xff9: IF (Stack[-1] == 0) GOTO 0xffe; Pop(1)

0xffa: PushEmpty(float)
0xffb: Stack[-1] = -Stack[-2]; Pop(0);
0xffc: Call2 0x11c2

0xffd: Pop(1)
0xffe: Stack[-16] = Stack[-1]
0xfff: Return(); Pop(12)

0x1000: PushEmpty(bool, bool)
0x1001: @@ IsDead(Stack[-1])
0x1002: Pop(0)
0x1003: Stack[-4] = Stack[-1]
0x1004: Return(); Pop(2)

0x1005: PushEmpty(object, object, object, object)
0x1006: Pop(0); Push((bool) Stack[-5] == 0)
0x1007: IF (Stack[-1] == 0) GOTO 0x100a; Pop(1)

0x1008: Stack[-6] = (bool) 0
0x1009: Return(); Pop(4)

0x100a: PushEmpty(bool)
0x100b: Stack[-1] = (bool) 0
0x100c: Push("IsDead")
0x100d: Push((int) 1)
0x100e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x100f: IF (Stack[-1] == 0) GOTO 0x1016; Pop(1)

0x1010: PushEmpty(bool, object)
0x1011: Stack[-1] = Stack[-8]
0x1012: Call2 0x1000

0x1013: Pop(1)
0x1014: IF (Stack[-1] == 0) GOTO 0x1016; Pop(1)

0x1015: Stack[-1] = (bool) 1
0x1016: IF (Stack[-1] == 0) GOTO 0x1019; Pop(1)

0x1017: Stack[-6] = (bool) 0
0x1018: Return(); Pop(4)

0x1019: @ GetScene(Stack[-2])
0x101a: Pop(0)
0x101b: Pop(0); Push((bool) Stack[-2] == 0)
0x101c: IF (Stack[-1] == 0) GOTO 0x101f; Pop(1)

0x101d: Stack[-6] = (bool) 0
0x101e: Return(); Pop(4)

0x101f: @@ GetScene(Stack[-1])
0x1020: Pop(0)
0x1021: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x1022: IF (Stack[-1] == 0) GOTO 0x1025; Pop(1)

0x1023: Stack[-6] = (bool) 0
0x1024: Return(); Pop(4)

0x1025: Stack[-6] = (bool) 1
0x1026: Return(); Pop(4)

0x1027: Stack[-1] = 0
0x1028: Stack[-2] = 0
0x1029: PushEmpty(int, int)
0x102a: PushEmpty(bool, object)
0x102b: Stack[-1] = Stack[-5]
0x102c: Call2 0x1005

0x102d: Pop(1)
0x102e: Pop(1); Push((bool) Stack[-1] == 0)
0x102f: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x1030: Stack[-4] = (bool) 0
0x1031: Return(); Pop(2)

0x1032: PushEmpty(bool, object, string)
0x1033: Stack[-2] = Stack[-6]
0x1034: Stack[-1] = "noaccess"
0x1035: Call2 0xfab

0x1036: Pop(2)
0x1037: Pop(1); Push((bool) Stack[-1] == 0)
0x1038: IF (Stack[-1] == 0) GOTO 0x103b; Pop(1)

0x1039: Stack[-4] = (bool) 1
0x103a: Return(); Pop(2)

0x103b: Push("noaccess")
0x103c: @@ GetProperty(Stack[-1], Stack[-2])
0x103d: Pop(1)
0x103e: Push((int) 0)
0x103f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x1040: Return(); Pop(2)

0x1041: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x1042: @ GetPosition(Stack[-3])
0x1043: Pop(0)
0x1044: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x1045: Push(CvectorIndex(Stack[-2], 0))
0x1046: Push(CvectorIndex(Stack[-3], 2))
0x1047: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1048: Pop(2)
0x1049: Stack[-8] = Stack[-1]
0x104a: Return(); Pop(6)

0x104b: PushEmpty(cvector, cvector)
0x104c: @@ GetPosition(Stack[-1])
0x104d: Pop(0)
0x104e: PushEmpty(bool, cvector)
0x104f: Stack[-1] = Stack[-3]
0x1050: Call2 0x1041

0x1051: Stack[-6] = Stack[-2]
0x1052: Pop(2)
0x1053: Return(); Pop(2)

0x1054: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x1055: Pop(0); Push((bool) Stack[-15] == 0)
0x1056: IF (Stack[-1] == 0) GOTO 0x1058; Pop(1)

0x1057: Return(); Pop(14)

0x1058: @ IsDead(Stack[-7])
0x1059: Pop(0)
0x105a: Push(Stack[-7])
0x105b: IF (Stack[-1] == 0) GOTO 0x105d; Pop(1)

0x105c: Return(); Pop(14)

0x105d: @ GetSecondaryAnimationType(Stack[-6])
0x105e: Pop(0)
0x105f: Push((int) 0)
0x1060: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1061: IF (Stack[-1] == 0) GOTO 0x1063; Pop(1)

0x1062: Return(); Pop(14)

0x1063: @@ GetPosition(Stack[-5])
0x1064: Pop(0)
0x1065: @ GetPosition(Stack[-4])
0x1066: Pop(0)
0x1067: @ GetDirection(Stack[-3])
0x1068: Pop(0)
0x1069: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x106a: Push(CvectorIndex(Stack[-2], 0))
0x106b: Push(CvectorIndex(Stack[-4], 0))
0x106c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x106d: Push(CvectorIndex(Stack[-3], 2))
0x106e: Push(CvectorIndex(Stack[-5], 2))
0x106f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1070: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1071: Push((int) 0)
0x1072: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1073: IF (Stack[-1] == 0) GOTO 0x1076; Pop(1)

0x1074: Stack[-1] = "fhit"
0x1075: GOTO 0x1077

0x1076: Stack[-1] = "bhit"
0x1077: Push("hit_react")
0x1078: Push("1")
0x1079: Pop(1); Push(Stack[-3] + Stack[-1]);
0x107a: Push("2")
0x107b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x107c: Push((int) -10)
0x107d: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x107e: Pop(4)
0x107f: Return(); Pop(14)

0x1080: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x1081: PushEmpty(bool)
0x1082: Stack[-1] = (bool) 0
0x1083: PushEmpty(bool)
0x1084: Stack[-1] = (bool) 0
0x1085: Push(Stack[-23])
0x1086: IF (Stack[-1] == 0) GOTO 0x108b; Pop(1)

0x1087: Push((int) 4)
0x1088: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x1089: IF (Stack[-1] == 0) GOTO 0x108b; Pop(1)

0x108a: Stack[-1] = (bool) 1
0x108b: IF (Stack[-1] == 0) GOTO 0x1090; Pop(1)

0x108c: Push((int) 5)
0x108d: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x108e: IF (Stack[-1] == 0) GOTO 0x1090; Pop(1)

0x108f: Stack[-1] = (bool) 1
0x1090: IF (Stack[-1] == 0) GOTO 0x10bf; Pop(1)

0x1091: PushEmpty(cvector, cvector)
0x1092: PushEmpty(cvector, object)
0x1093: Stack[-1] = Stack[-25]
0x1094: Call2 0xf97

0x1095: Stack[-3] = Stack[-2]
0x1096: Pop(2)
0x1097: Call2 0x1199

0x1098: Stack[-11] = Stack[-2]
0x1099: Pop(2)
0x109a: @ CreateVectorVector(Stack[-8])
0x109b: Pop(0)
0x109c: Stack[-7] = (int) 1
0x109d: Push("hit")
0x109e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x109f: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x10a0: Pop(1)
0x10a1: Pop(0); Push((bool) Stack[-6] == 0)
0x10a2: IF (Stack[-1] == 0) GOTO 0x10a4; Pop(1)

0x10a3: GOTO 0x10ad

0x10a4: Pop(0); Push(Stack[-4] | Stack[-9]);
0x10a5: Push((float)0.70711)
0x10a6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x10a7: IF (Stack[-1] == 0) GOTO 0x10aa; Pop(1)

0x10a8: @@ add(Stack[-5])
0x10a9: Pop(0)
0x10aa: Push((int) 1)
0x10ab: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x10ac: GOTO 0x109d

0x10ad: @@ size(Stack[-3])
0x10ae: Pop(0)
0x10af: Push(Stack[-3])
0x10b0: IF (Stack[-1] == 0) GOTO 0x10be; Pop(1)

0x10b1: @ irand(Stack[-2], Stack[-3])
0x10b2: Pop(0)
0x10b3: @@ get(Stack[-1], Stack[-2])
0x10b4: Pop(0)
0x10b5: PushEmpty(object, int, float, cvector, cvector)
0x10b6: Stack[-5] = Stack[-26]
0x10b7: Stack[-4] = Stack[-25]
0x10b8: Stack[-3] = Stack[-24]
0x10b9: Stack[-2] = Stack[-6]
0x10ba: Stack[-1] = -Stack[-14]; Pop(0);
0x10bb: Call2 0x10c4

0x10bc: Pop(5)
0x10bd: Return(); Pop(18)

0x10be: Stack[-8] = 0
0x10bf: PushEmpty(object)
0x10c0: Stack[-1] = Stack[-22]
0x10c1: Call2 0x1054

0x10c2: Pop(1)
0x10c3: Return(); Pop(18)

0x10c4: PushEmpty(object, object, object, object)
0x10c5: @ GetScene(Stack[-2])
0x10c6: Pop(0)
0x10c7: Push("scripted")
0x10c8: Push("blood_dir.xml")
0x10c9: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x10ca: Pop(2)
0x10cb: PushEmpty(object)
0x10cc: Stack[-1] = Stack[-10]
0x10cd: Call2 0x1054

0x10ce: Pop(1)
0x10cf: Return(); Pop(4)

0x10d0: Stack[-1] = 0
0x10d1: Stack[-2] = 0
0x10d2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x10d3: @@ GetPosition(Stack[-3])
0x10d4: Pop(0)
0x10d5: @ GetPosition(Stack[-2])
0x10d6: Pop(0)
0x10d7: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x10d8: Push(CvectorIndex(Stack[-1], 0))
0x10d9: Push(CvectorIndex(Stack[-2], 2))
0x10da: @ RotateAsync(Stack[-2], Stack[-1])
0x10db: Pop(2)
0x10dc: Return(); Pop(6)

0x10dd: PushEmpty(bool, bool)
0x10de: @ IsLoaded(Stack[-1])
0x10df: Pop(0)
0x10e0: Stack[-3] = Stack[-1]
0x10e1: Return(); Pop(2)

0x10e2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x10e3: @@ GetPosition(Stack[-8])
0x10e4: Pop(0)
0x10e5: @@ GetEyesHeight(Stack[-9])
0x10e6: Pop(0)
0x10e7: Push(CvectorIndex(Stack[-8], 1))
0x10e8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x10e9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x10ea: @ GetPosition(Stack[-7])
0x10eb: Pop(0)
0x10ec: @ GetEyesHeight(Stack[-9])
0x10ed: Pop(0)
0x10ee: Push(CvectorIndex(Stack[-7], 1))
0x10ef: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x10f0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x10f1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x10f2: Push(CvectorIndex(Stack[-6], 1))
0x10f3: Stack[-1] = (int) 0
0x10f4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x10f5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x10f6: Pop(1); Push(Sqrt(Stack[-1]))
0x10f7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x10f8: Stack[-5] = -Stack[-6]; Pop(0);
0x10f9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x10fa: PushEmpty(cvector, cvector)
0x10fb: Push(CVector(0.0, 1.0, 0.0))
0x10fc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x10fd: Call2 0x1199

0x10fe: Pop(1)
0x10ff: Push((int) 25)
0x1100: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1101: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1102: Push(CVector(0.0, 10.0, 0.0))
0x1103: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1104: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1105: @ IsOverrideActive(Stack[-2])
0x1106: Pop(0)
0x1107: Push(Stack[-2])
0x1108: IF (Stack[-1] == 0) GOTO 0x110b; Pop(1)

0x1109: Stack[-21] = (bool) 0
0x110a: Return(); Pop(18)

0x110b: @ StopWorld()
0x110c: Pop(0)
0x110d: Push((bool) 1)
0x110e: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x110f: Pop(1)
0x1110: Push(CvectorIndex(Stack[-4], 0))
0x1111: Push(CvectorIndex(Stack[-5], 2))
0x1112: @ Rotate(Stack[-2], Stack[-1])
0x1113: Pop(2)
0x1114: PushEmpty(bool)
0x1115: Call2 0x1351

0x1116: Pop(0)
0x1117: IF (Stack[-1] == 0) GOTO 0x1119; Pop(1)

0x1118: GOTO 0x1121

0x1119: Push("head")
0x111a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x111b: Pop(1)
0x111c: Push(Stack[-1])
0x111d: IF (Stack[-1] == 0) GOTO 0x1121; Pop(1)

0x111e: Push("head")
0x111f: @ LookAsyncCamera(Stack[-1])
0x1120: Pop(1)
0x1121: @ CameraWaitForPlayFinish()
0x1122: Pop(0)
0x1123: @ ResumeWorld()
0x1124: Pop(0)
0x1125: Stack[-21] = (bool) 1
0x1126: Return(); Pop(18)

0x1127: PushEmpty(bool, bool)
0x1128: Push((bool) 1)
0x1129: @ CameraSwitchToNormal(Stack[-1])
0x112a: Pop(1)
0x112b: PushEmpty(bool)
0x112c: Call2 0x1351

0x112d: Pop(0)
0x112e: IF (Stack[-1] == 0) GOTO 0x1130; Pop(1)

0x112f: GOTO 0x1138

0x1130: Push("head")
0x1131: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1132: Pop(1)
0x1133: Push(Stack[-1])
0x1134: IF (Stack[-1] == 0) GOTO 0x1138; Pop(1)

0x1135: Push("head")
0x1136: @ UnlookAsync(Stack[-1])
0x1137: Pop(1)
0x1138: Return(); Pop(2)

0x1139: PushEmpty(bool, float, float, bool, float, float)
0x113a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x113b: Pop(0)
0x113c: Push(Stack[-3])
0x113d: IF (Stack[-1] == 0) GOTO 0x1144; Pop(1)

0x113e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x113f: Pop(0)
0x1140: Push((bool) 0)
0x1141: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1142: Pop(1)
0x1143: GOTO 0x1148

0x1144: Push("Can't find lsh animation : ")
0x1145: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1146: @ Trace(Stack[-1])
0x1147: Pop(1)
0x1148: Return(); Pop(6)

0x1149: PushEmpty(bool, float, float, bool, float, float)
0x114a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x114b: Pop(0)
0x114c: Push(Stack[-3])
0x114d: IF (Stack[-1] == 0) GOTO 0x1153; Pop(1)

0x114e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x114f: Pop(0)
0x1150: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1151: Pop(0)
0x1152: GOTO 0x1157

0x1153: Push("Can't find lsh animation : ")
0x1154: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1155: @ Trace(Stack[-1])
0x1156: Pop(1)
0x1157: Return(); Pop(6)

0x1158: PushEmpty(float, cvector, float, cvector)
0x1159: @@ GetEyesHeight(Stack[-2])
0x115a: Pop(0)
0x115b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x115c: Push(CvectorIndex(Stack[-1], 1))
0x115d: Stack[-1] = Stack[-3]
0x115e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x115f: Push("head")
0x1160: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x1161: Pop(1)
0x1162: Return(); Pop(4)

0x1163: PushEmpty(bool)
0x1164: Call2 0x1351

0x1165: Pop(0)
0x1166: IF (Stack[-1] == 0) GOTO 0x1169; Pop(1)

0x1167: @ lshStopSpeech()
0x1168: Pop(0)
0x1169: Return(); Pop(0)

0x116a: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x116b: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x116c: Pop(0)
0x116d: Pop(0); Push((bool) Stack[-8] == 0)
0x116e: IF (Stack[-1] == 0) GOTO 0x1183; Pop(1)

0x116f: Stack[-7] = (int) 0
0x1170: Push((int) 1)
0x1171: Pop(1); Push(Stack[-8] + Stack[-1]);
0x1172: Pop(1); Push(Stack[-18] + Stack[-1]);
0x1173: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x1174: Pop(1)
0x1175: Pop(0); Push((bool) Stack[-6] == 0)
0x1176: IF (Stack[-1] == 0) GOTO 0x1178; Pop(1)

0x1177: GOTO 0x117b

0x1178: Push((int) 1)
0x1179: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x117a: GOTO 0x1170

0x117b: Pop(0); Push((bool) Stack[-7] == 0)
0x117c: IF (Stack[-1] == 0) GOTO 0x117e; Pop(1)

0x117d: Return(); Pop(16)

0x117e: @ irand(Stack[-5], Stack[-7])
0x117f: Pop(0)
0x1180: Push((int) 1)
0x1181: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1182: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x1183: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x1184: Pop(0)
0x1185: Push(Stack[-4])
0x1186: IF (Stack[-1] == 0) GOTO 0x1192; Pop(1)

0x1187: @ GetEyesHeight(Stack[-3])
0x1188: Pop(0)
0x1189: @ GetDirection(Stack[-2])
0x118a: Pop(0)
0x118b: Push((int) 50)
0x118c: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x118d: Push(CvectorIndex(Stack[-1], 1))
0x118e: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x118f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1190: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x1191: Pop(0)
0x1192: Return(); Pop(16)

0x1193: PushEmpty(object, object)
0x1194: @ self(Stack[-1])
0x1195: Pop(0)
0x1196: Stack[-3] = Stack[-1]
0x1197: Return(); Pop(2)

0x1198: Stack[-1] = 0
0x1199: PushEmpty(float, float)
0x119a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x119b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x119c: Push((float)0.0)
0x119d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x119e: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x119f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x11a0: Return(); Pop(2)

0x11a1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x11a2: Return(); Pop(2)

0x11a3: PushEmpty()
0x11a4: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x11a5: IF (Stack[-1] == 0) GOTO 0x11a8; Pop(1)

0x11a6: Stack[-3] = Stack[-2]
0x11a7: GOTO 0x11a9

0x11a8: Stack[-3] = Stack[-1]
0x11a9: Return(); Pop(0)

0x11aa: PushEmpty()
0x11ab: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x11ac: IF (Stack[-1] == 0) GOTO 0x11af; Pop(1)

0x11ad: Stack[-4] = Stack[-2]
0x11ae: Return(); Pop(0)

0x11af: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x11b0: IF (Stack[-1] == 0) GOTO 0x11b3; Pop(1)

0x11b1: Stack[-4] = Stack[-1]
0x11b2: Return(); Pop(0)

0x11b3: Stack[-4] = Stack[-3]
0x11b4: Return(); Pop(0)

0x11b5: PushEmpty()
0x11b6: Pop(0); Push(Stack[-2] | Stack[-1]);
0x11b7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11b8: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11b9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11ba: Pop(1); Push(Sqrt(Stack[-1]))
0x11bb: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x11bc: Return(); Pop(0)

0x11bd: PushEmpty(int, int)
0x11be: @ GetVariable(Stack[-3], Stack[-1])
0x11bf: Pop(0)
0x11c0: Stack[-4] = Stack[-1]
0x11c1: Return(); Pop(2)

0x11c2: PushEmpty(object, object)
0x11c3: @ CreateFloatVector(Stack[-1])
0x11c4: Pop(0)
0x11c5: @@ add(Stack[-3])
0x11c6: Pop(0)
0x11c7: Push((int) 0)
0x11c8: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x11c9: IF (Stack[-1] == 0) GOTO 0x11ce; Pop(1)

0x11ca: Push((float)0.7)
0x11cb: Push((int) 500)
0x11cc: @ RumblePlay(Stack[-2], Stack[-1])
0x11cd: Pop(2)
0x11ce: Push((int) 15)
0x11cf: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x11d0: Pop(1)
0x11d1: Return(); Pop(2)

0x11d2: Stack[-1] = 0
0x11d3: PushEmpty(object, object)
0x11d4: @ FindActor(Stack[-1], Stack[-4])
0x11d5: Pop(0)
0x11d6: Pop(0); Push((bool) Stack[-1] == 0)
0x11d7: IF (Stack[-1] == 0) GOTO 0x11da; Pop(1)

0x11d8: Stack[-5] = (bool) 0
0x11d9: Return(); Pop(2)

0x11da: @ Trigger(Stack[-1], Stack[-3])
0x11db: Pop(0)
0x11dc: Stack[-5] = (bool) 1
0x11dd: Return(); Pop(2)

0x11de: Stack[-1] = 0
0x11df: PushEmpty(float, float)
0x11e0: @ GetGameTime(Stack[-1])
0x11e1: Pop(0)
0x11e2: Stack[-3] = Stack[-1]
0x11e3: Return(); Pop(2)

0x11e4: PushEmpty(bool, bool)
0x11e5: @ IsPlayerActor(Stack[-3], Stack[-1])
0x11e6: Pop(0)
0x11e7: Push(Stack[-1])
0x11e8: IF (Stack[-1] == 0) GOTO 0x11ec; Pop(1)

0x11e9: Push("attack")
0x11ea: @ PlayGlobalMusic(Stack[-1])
0x11eb: Pop(1)
0x11ec: Return(); Pop(2)

0x11ed: PushEmpty(string, string)
0x11ee: Stack[-1] = "idle"
0x11ef: Push(Stack[-3])
0x11f0: IF (Stack[-1] == 0) GOTO 0x11f2; Pop(1)

0x11f1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x11f2: Stack[-4] = Stack[-1]
0x11f3: Return(); Pop(2)

0x11f4: PushEmpty(int, bool, int, bool)
0x11f5: Stack[-2] = (int) 0
0x11f6: Push("all")
0x11f7: PushEmpty(string, int)
0x11f8: Stack[-1] = Stack[-5]
0x11f9: Call2 0x11ed

0x11fa: Pop(1)
0x11fb: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x11fc: Pop(2)
0x11fd: Pop(0); Push((bool) Stack[-1] == 0)
0x11fe: IF (Stack[-1] == 0) GOTO 0x1200; Pop(1)

0x11ff: GOTO 0x1203

0x1200: Push((int) 1)
0x1201: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1202: GOTO 0x11f6

0x1203: Stack[-5] = Stack[-2]
0x1204: Return(); Pop(4)

0x1205: PushEmpty()
0x1206: Push((int) 2)
0x1207: @@ SetReturnValue(Stack[-1])
0x1208: Pop(1)
0x1209: Return(); Pop(0)

0x120a: PushEmpty()
0x120b: Push((int) 1)
0x120c: @@ SetReturnValue(Stack[-1])
0x120d: Pop(1)
0x120e: Return(); Pop(0)

0x120f: PushEmpty()
0x1210: Push((int) 3)
0x1211: @@ SetReturnValue(Stack[-1])
0x1212: Pop(1)
0x1213: Return(); Pop(0)

0x1214: PushEmpty()
0x1215: Push("oob9BoyFollower1")
0x1216: Push((int) 1)
0x1217: @ SetVariable(Stack[-2], Stack[-1])
0x1218: Pop(2)
0x1219: Return(); Pop(0)

0x121a: PushEmpty(object, object)
0x121b: PushEmpty(object)
0x121c: Call2 0x12ca

0x121d: Stack[-2] = Stack[-1]
0x121e: Pop(1)
0x121f: Push("b9q03Bonfire1")
0x1220: Push("pt_bonfire1")
0x1221: Push((int) 0)
0x1222: Push((int) 531507)
0x1223: PushEmpty(float)
0x1224: Call2 0x11df

0x1225: Pop(0)
0x1226: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1227: Pop(5)
0x1228: Push("b9q03Bonfire2")
0x1229: Push("pt_bonfire2")
0x122a: Push((int) 0)
0x122b: Push((int) 531508)
0x122c: PushEmpty(float)
0x122d: Call2 0x11df

0x122e: Pop(0)
0x122f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1230: Pop(5)
0x1231: Push("b9q03Bonfire3")
0x1232: Push("pt_bonfire3")
0x1233: Push((int) 0)
0x1234: Push((int) 531509)
0x1235: PushEmpty(float)
0x1236: Call2 0x11df

0x1237: Pop(0)
0x1238: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1239: Pop(5)
0x123a: Push("b9q03Bonfire4")
0x123b: Push("pt_bonfire4")
0x123c: Push((int) 0)
0x123d: Push((int) 531510)
0x123e: PushEmpty(float)
0x123f: Call2 0x11df

0x1240: Pop(0)
0x1241: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1242: Pop(5)
0x1243: PushEmpty()
0x1244: Call2 0x1287

0x1245: Pop(0)
0x1246: Return(); Pop(2)

0x1247: Stack[-1] = 0
0x1248: PushEmpty()
0x1249: Push((int) 4)
0x124a: @@ SetReturnValue(Stack[-1])
0x124b: Pop(1)
0x124c: Return(); Pop(0)

0x124d: PushEmpty()
0x124e: PushEmpty()
0x124f: Call2 0x1294

0x1250: Pop(0)
0x1251: Return(); Pop(0)

0x1252: PushEmpty()
0x1253: PushEmpty(object, string, float)
0x1254: PushEmpty(object)
0x1255: Call2 0x12ca

0x1256: Stack[-4] = Stack[-1]
0x1257: Pop(1)
0x1258: Stack[-2] = "pt_bonfire1"
0x1259: Stack[-1] = (int) 2
0x125a: Call2 0x12db

0x125b: Pop(3)
0x125c: PushEmpty(object)
0x125d: Call2 0x12ca

0x125e: Pop(0)
0x125f: @@ ShowMap(Stack[-1])
0x1260: Pop(1)
0x1261: Return(); Pop(0)

0x1262: PushEmpty()
0x1263: PushEmpty(int, string)
0x1264: Stack[-1] = "oob9BoyFollower1"
0x1265: Call2 0x11bd

0x1266: Pop(1)
0x1267: Push((int) 0)
0x1268: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1269: IF (Stack[-1] == 0) GOTO 0x126c; Pop(1)

0x126a: Stack[-2] = (bool) 1
0x126b: Return(); Pop(0)

0x126c: Stack[-2] = (bool) 0
0x126d: Return(); Pop(0)

0x126e: PushEmpty()
0x126f: PushEmpty(int, string)
0x1270: Stack[-1] = "b9q03BonefiresCount"
0x1271: Call2 0x11bd

0x1272: Pop(1)
0x1273: Push((int) 4)
0x1274: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1275: IF (Stack[-1] == 0) GOTO 0x1278; Pop(1)

0x1276: Stack[-2] = (bool) 1
0x1277: Return(); Pop(0)

0x1278: Stack[-2] = (bool) 0
0x1279: Return(); Pop(0)

0x127a: PushEmpty(object, object)
0x127b: Push((int) 543)
0x127c: Push((int) 2)
0x127d: Push((int) 530355)
0x127e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x127f: Pop(3)
0x1280: PushEmpty(bool, object, int)
0x1281: Stack[-2] = Stack[-4]
0x1282: Stack[-1] = (int) 532
0x1283: Call2 0x12ae

0x1284: Pop(3)
0x1285: Return(); Pop(2)

0x1286: Stack[-1] = 0
0x1287: PushEmpty(object, object)
0x1288: Push((int) 534)
0x1289: Push((int) 2)
0x128a: Push((int) 530346)
0x128b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x128c: Pop(3)
0x128d: PushEmpty(bool, object, int)
0x128e: Stack[-2] = Stack[-4]
0x128f: Stack[-1] = (int) 532
0x1290: Call2 0x12ae

0x1291: Pop(3)
0x1292: Return(); Pop(2)

0x1293: Stack[-1] = 0
0x1294: PushEmpty(object, object)
0x1295: Push((int) 535)
0x1296: Push((int) 2)
0x1297: Push((int) 530347)
0x1298: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1299: Pop(3)
0x129a: PushEmpty(bool, object, int)
0x129b: Stack[-2] = Stack[-4]
0x129c: Stack[-1] = (int) 532
0x129d: Call2 0x12ae

0x129e: Pop(3)
0x129f: Return(); Pop(2)

0x12a0: Stack[-1] = 0
0x12a1: PushEmpty(object, object)
0x12a2: @ GetDiaryRoot(Stack[-1])
0x12a3: Pop(0)
0x12a4: Pop(0); Push((bool) Stack[-1] == 0)
0x12a5: IF (Stack[-1] == 0) GOTO 0x12ab; Pop(1)

0x12a6: Push("Can't retrieve diary root")
0x12a7: @ Trace(Stack[-1])
0x12a8: Pop(1)
0x12a9: Stack[-3] = (bool) 0
0x12aa: Return(); Pop(2)

0x12ab: Stack[-3] = Stack[-1]
0x12ac: Return(); Pop(2)

0x12ad: Stack[-1] = 0
0x12ae: PushEmpty(object, object, int, object, object, int)
0x12af: PushEmpty(object)
0x12b0: Call2 0x12a1

0x12b1: Stack[-4] = Stack[-1]
0x12b2: Pop(1)
0x12b3: @@ Find(Stack[-7], Stack[-2])
0x12b4: Pop(0)
0x12b5: Pop(0); Push((bool) Stack[-2] == 0)
0x12b6: IF (Stack[-1] == 0) GOTO 0x12bd; Pop(1)

0x12b7: Push("Can't find diary parent with id: ")
0x12b8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x12b9: @ Trace(Stack[-1])
0x12ba: Pop(1)
0x12bb: Stack[-9] = (bool) 0
0x12bc: Return(); Pop(6)

0x12bd: @@ AddChild(Stack[-8])
0x12be: Pop(0)
0x12bf: Push((int) 7)
0x12c0: @ SendWorldWndMessage(Stack[-1])
0x12c1: Pop(1)
0x12c2: @@ GetCategory(Stack[-1])
0x12c3: Pop(0)
0x12c4: @ SetDiarySection(Stack[-1])
0x12c5: Pop(0)
0x12c6: Stack[-9] = (bool) 0
0x12c7: Return(); Pop(6)

0x12c8: Stack[-2] = 0
0x12c9: Stack[-3] = 0
0x12ca: PushEmpty(object, object, object, object)
0x12cb: @ GetMainOutdoorScene(Stack[-2])
0x12cc: Pop(0)
0x12cd: Pop(0); Push((bool) Stack[-2] == 0)
0x12ce: IF (Stack[-1] == 0) GOTO 0x12d5; Pop(1)

0x12cf: Push("Can't find main outdoor scene")
0x12d0: @ Trace(Stack[-1])
0x12d1: Pop(1)
0x12d2: Stack[-1] = 0
0x12d3: Stack[-5] = Stack[-1]
0x12d4: Return(); Pop(4)

0x12d5: @@ GetMap(Stack[-1])
0x12d6: Pop(0)
0x12d7: Stack[-5] = Stack[-1]
0x12d8: Return(); Pop(4)

0x12d9: Stack[-1] = 0
0x12da: Stack[-2] = 0
0x12db: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x12dc: @ GetMainOutdoorScene(Stack[-2])
0x12dd: Pop(0)
0x12de: Pop(0); Push((bool) Stack[-2] == 0)
0x12df: IF (Stack[-1] == 0) GOTO 0x12e4; Pop(1)

0x12e0: Push("Can't find main outdoor scene")
0x12e1: @ Trace(Stack[-1])
0x12e2: Pop(1)
0x12e3: Return(); Pop(8)

0x12e4: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x12e5: Pop(0)
0x12e6: Pop(0); Push((bool) Stack[-1] == 0)
0x12e7: IF (Stack[-1] == 0) GOTO 0x12ee; Pop(1)

0x12e8: Push("Warning: outdoor scene locator ")
0x12e9: Pop(1); Push(Stack[-1] + Stack[-11]);
0x12ea: Push(" doesnt exist")
0x12eb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12ec: @ Trace(Stack[-1])
0x12ed: Pop(1)
0x12ee: @@ GetMap(Stack[-11])
0x12ef: Pop(0)
0x12f0: Pop(0); Push((bool) Stack[-11] == 0)
0x12f1: IF (Stack[-1] == 0) GOTO 0x12f6; Pop(1)

0x12f2: Push("Can't find map")
0x12f3: @ Trace(Stack[-1])
0x12f4: Pop(1)
0x12f5: Return(); Pop(8)

0x12f6: Push(CvectorIndex(Stack[-4], 0))
0x12f7: Push(CvectorIndex(Stack[-5], 2))
0x12f8: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x12f9: Pop(2)
0x12fa: Return(); Pop(8)

0x12fb: Stack[-2] = 0
0x12fc: PushEmpty(int, int)
0x12fd: Push("branch")
0x12fe: @ GetVariable(Stack[-1], Stack[-2])
0x12ff: Pop(1)
0x1300: Push((int) 0)
0x1301: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1302: IF (Stack[-1] == 0) GOTO 0x1306; Pop(1)

0x1303: Stack[-3] = (int) 1
0x1304: Return(); Pop(2)

0x1305: GOTO 0x130b

0x1306: Push((int) 1)
0x1307: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1308: IF (Stack[-1] == 0) GOTO 0x130b; Pop(1)

0x1309: Stack[-3] = (int) 2
0x130a: Return(); Pop(2)

0x130b: Stack[-3] = (int) 3
0x130c: Return(); Pop(2)

0x130d: PushEmpty(int, int)
0x130e: Push("branch")
0x130f: @ GetVariable(Stack[-1], Stack[-2])
0x1310: Pop(1)
0x1311: Stack[-3] = Stack[-1]
0x1312: Return(); Pop(2)

0x1313: PushEmpty()
0x1314: PushEmpty(int)
0x1315: Call2 0x130d

0x1316: Pop(0)
0x1317: Push((int) 1)
0x1318: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1319: IF (Stack[-1] == 0) GOTO 0x131d; Pop(1)

0x131a: @ WorkWithCorpse(Stack[-1])
0x131b: Pop(0)
0x131c: GOTO 0x131f

0x131d: @ Barter(Stack[-1])
0x131e: Pop(0)
0x131f: Return(); Pop(0)

0x1320: PushEmpty(object, int, bool, object, int, bool)
0x1321: @ CreateInvItem(Stack[-3])
0x1322: Pop(0)
0x1323: @@ SetItemName(Stack[-7])
0x1324: Pop(0)
0x1325: Push("Organ")
0x1326: Push((int) 1)
0x1327: @@ SetProperty(Stack[-2], Stack[-1])
0x1328: Pop(2)
0x1329: @@ GetItemID(Stack[-2])
0x132a: Pop(0)
0x132b: Push((int) 0)
0x132c: Push((int) 1)
0x132d: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x132e: Pop(2)
0x132f: Return(); Pop(6)

0x1330: Stack[-3] = 0
0x1331: PushEmpty(int)
0x1332: Call2 0x130d

0x1333: Pop(0)
0x1334: Push((int) 1)
0x1335: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1336: IF (Stack[-1] == 0) GOTO 0x1338; Pop(1)

0x1337: Return(); Pop(0)

0x1338: PushEmpty(string)
0x1339: Stack[-1] = "liver"
0x133a: Call2 0x1320

0x133b: Pop(1)
0x133c: PushEmpty(string)
0x133d: Stack[-1] = "kidney"
0x133e: Call2 0x1320

0x133f: Pop(1)
0x1340: PushEmpty(string)
0x1341: Stack[-1] = "heart"
0x1342: Call2 0x1320

0x1343: Pop(1)
0x1344: PushEmpty(string)
0x1345: Stack[-1] = "blood"
0x1346: Call2 0x1320

0x1347: Pop(1)
0x1348: Return(); Pop(0)

0x1349: Stack[-1] = (int) 515558
0x134a: Return(); Pop(0)

0x134b: Stack[-1] = (int) 503343
0x134c: Return(); Pop(0)

0x134d: Stack[-1] = "ui/NPC_Citizen3.png"
0x134e: Return(); Pop(0)

0x134f: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x1350: Return(); Pop(0)

0x1351: Stack[-1] = (bool) 0
0x1352: Return(); Pop(0)

0x1353: PushEmpty(object, cvector, cvector, cvector, bool, float, int, int, cvector, float, object, cvector, cvector, cvector, bool, float, int, int, cvector, float)
0x1354: @ GetScene(Stack[-10])
0x1355: Pop(0)
0x1356: @ GetPosition(Stack[-9])
0x1357: Pop(0)
0x1358: Stack[-5] = (int) 9000000
0x1359: Stack[-4] = (int) 1
0x135a: Stack[-3] = (int) -1
0x135b: Push((bool) 1)
0x135c: IF (Stack[-1] == 0) GOTO 0x136d; Pop(1)

0x135d: Push("pt_b9q03_bonfire")
0x135e: Pop(1); Push(Stack[-1] + Stack[-5]);
0x135f: @@ GetLocator(Stack[-1], Stack[-7], Stack[-9], Stack[-8])
0x1360: Pop(1)
0x1361: Pop(0); Push((bool) Stack[-6] == 0)
0x1362: IF (Stack[-1] == 0) GOTO 0x1364; Pop(1)

0x1363: GOTO 0x136d

0x1364: Stack[-2] = Stack[-9] - Stack[-8]; Pop(0);
0x1365: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x1366: Pop(0); Push((bool) Stack[-1] < Stack[-5])
0x1367: IF (Stack[-1] == 0) GOTO 0x136a; Pop(1)

0x1368: Stack[-5] = Stack[-1]
0x1369: Stack[-3] = Stack[-4]
0x136a: Push((int) 1)
0x136b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x136c: GOTO 0x135b

0x136d: Stack[-21] = Stack[-3]
0x136e: Return(); Pop(20)

0x136f: Stack[-10] = 0
0x1370: PushEmpty(int, int)
0x1371: Push("b9q03Bonfire")
0x1372: Pop(1); Push(Stack[-1] + Stack[-4]);
0x1373: @ GetVariable(Stack[-1], Stack[-2])
0x1374: Pop(1)
0x1375: Push((int) 0)
0x1376: Stack[-5] = Stack[-2] != Stack[-1]; Pop(1);
0x1377: Return(); Pop(2)

0x1378: PushEmpty(string, object, string, object)
0x1379: Stack[-2] = Stack[-5]
0x137a: Push("enable_bonfire")
0x137b: @ TriggerWorld(Stack[-1], Stack[-3])
0x137c: Pop(1)
0x137d: PushEmpty(bool, string, string)
0x137e: Stack[-2] = "quest_b9_03"
0x137f: Stack[-1] = "bonfire_burn"
0x1380: Call2 0x11d3

0x1381: Pop(3)
0x1382: Push("b9q03Bonfire")
0x1383: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1384: Push((int) 1)
0x1385: @ SetVariable(Stack[-2], Stack[-1])
0x1386: Pop(2)
0x1387: @ GetScene(Stack[-1])
0x1388: Pop(0)
0x1389: Push("b9q03BonfireBurnedByFollower")
0x138a: PushEmpty(object)
0x138b: Call2 0x1193

0x138c: Pop(0)
0x138d: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x138e: Pop(2)
0x138f: Return(); Pop(4)

0x1390: Stack[-1] = 0
0x1391: PushEmpty()
0x1392: Push("cleanup")
0x1393: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1394: IF (Stack[-1] == 0) GOTO 0x1398; Pop(1)

0x1395: Push(GlobalVars[1])
0x1396: Stack[-1] = (bool) 1
0x1397: GlobalVars[1] = Stack[-1]; Pop(1)
0x1398: Return(); Pop(0)

0x1399: PushEmpty()
0x139a: Push((int) 1)
0x139b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x139c: IF (Stack[-1] == 0) GOTO 0x13a1; Pop(1)

0x139d: Push("changing state to c_iStateWaitForCommand")
0x139e: @ Trace(Stack[-1])
0x139f: Pop(1)
0x13a0: GOTO 0x13d9

0x13a1: Push((int) 2)
0x13a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13a3: IF (Stack[-1] == 0) GOTO 0x13a8; Pop(1)

0x13a4: Push("changing state to c_iStateFollow")
0x13a5: @ Trace(Stack[-1])
0x13a6: Pop(1)
0x13a7: GOTO 0x13d9

0x13a8: Push((int) 3)
0x13a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13aa: IF (Stack[-1] == 0) GOTO 0x13af; Pop(1)

0x13ab: Push("changing state to c_iStateIdleAndFollow")
0x13ac: @ Trace(Stack[-1])
0x13ad: Pop(1)
0x13ae: GOTO 0x13d9

0x13af: Push((int) 4)
0x13b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13b1: IF (Stack[-1] == 0) GOTO 0x13b6; Pop(1)

0x13b2: Push("changing state to c_iStateRetreatPlayer")
0x13b3: @ Trace(Stack[-1])
0x13b4: Pop(1)
0x13b5: GOTO 0x13d9

0x13b6: Push((int) 5)
0x13b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13b8: IF (Stack[-1] == 0) GOTO 0x13bd; Pop(1)

0x13b9: Push("changing state to c_iStateBurn")
0x13ba: @ Trace(Stack[-1])
0x13bb: Pop(1)
0x13bc: GOTO 0x13d9

0x13bd: Push((int) 0)
0x13be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13bf: IF (Stack[-1] == 0) GOTO 0x13c9; Pop(1)

0x13c0: Push(GlobalVars[6])
0x13c1: Push(GlobalVars[2])
0x13c2: Stack[-2] = Stack[-1]
0x13c3: Pop(1)
0x13c4: GlobalVars[6] = Stack[-1]; Pop(1)
0x13c5: Push("changing state to c_iStateWaitForLoad")
0x13c6: @ Trace(Stack[-1])
0x13c7: Pop(1)
0x13c8: GOTO 0x13d9

0x13c9: Push((int) 8)
0x13ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13cb: IF (Stack[-1] == 0) GOTO 0x13d0; Pop(1)

0x13cc: Push("changing state to c_iStateGoAway")
0x13cd: @ Trace(Stack[-1])
0x13ce: Pop(1)
0x13cf: GOTO 0x13d9

0x13d0: Push((int) 9)
0x13d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13d2: IF (Stack[-1] == 0) GOTO 0x13d7; Pop(1)

0x13d3: Push("changing state to c_iStateAttack")
0x13d4: @ Trace(Stack[-1])
0x13d5: Pop(1)
0x13d6: GOTO 0x13d9

0x13d7: Stack[-2] = (bool) 0
0x13d8: Return(); Pop(0)

0x13d9: Push(GlobalVars[2])
0x13da: Stack[-1] = Stack[-2]
0x13db: GlobalVars[2] = Stack[-1]; Pop(1)
0x13dc: Stack[-2] = (bool) 1
0x13dd: Return(); Pop(0)

0x13de: PushEmpty()
0x13df: Push("changing state to c_iStateAttack")
0x13e0: @ Trace(Stack[-1])
0x13e1: Pop(1)
0x13e2: Push(GlobalVars[2])
0x13e3: Stack[-1] = (int) 9
0x13e4: GlobalVars[2] = Stack[-1]; Pop(1)
0x13e5: Push(GlobalVars[5])
0x13e6: Stack[-1] = Stack[-2]
0x13e7: GlobalVars[5] = Stack[-1]; Pop(1)
0x13e8: Return(); Pop(0)

0x13e9: PushEmpty()
0x13ea: Push("changing state to c_iStateRetreatPDamage")
0x13eb: @ Trace(Stack[-1])
0x13ec: Pop(1)
0x13ed: Push(GlobalVars[2])
0x13ee: Stack[-1] = (int) 7
0x13ef: GlobalVars[2] = Stack[-1]; Pop(1)
0x13f0: Push(GlobalVars[4])
0x13f1: Stack[-1] = Stack[-2]
0x13f2: GlobalVars[4] = Stack[-1]; Pop(1)
0x13f3: Return(); Pop(0)

0x13f4: PushEmpty()
0x13f5: PushEmpty(object, int, float)
0x13f6: Stack[-3] = Stack[-7]
0x13f7: Stack[-2] = Stack[-6]
0x13f8: Stack[-1] = Stack[-5]
0x13f9: Call2 0x1080

0x13fa: Pop(3)
0x13fb: Return(); Pop(0)

0x13fc: PushEmpty()
0x13fd: PushEmpty(object, int, float, cvector, cvector)
0x13fe: Stack[-5] = Stack[-11]
0x13ff: Stack[-4] = Stack[-10]
0x1400: Stack[-3] = Stack[-9]
0x1401: Stack[-2] = Stack[-7]
0x1402: Stack[-1] = Stack[-6]
0x1403: Call2 0x10c4

0x1404: Pop(5)
0x1405: Return(); Pop(0)

0x1406: PushEmpty(float, float)
0x1407: Push("health")
0x1408: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1409: IF (Stack[-1] == 0) GOTO 0x1412; Pop(1)

0x140a: Push("health")
0x140b: @ GetProperty(Stack[-1], Stack[-2])
0x140c: Pop(1)
0x140d: Push((int) 0)
0x140e: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x140f: IF (Stack[-1] == 0) GOTO 0x1412; Pop(1)

0x1410: @ SignalDeath(Stack[-4])
0x1411: Pop(0)
0x1412: Return(); Pop(2)

0x1413: PushEmpty(int, int)
0x1414: PushEmpty(int, object)
0x1415: Stack[-1] = Stack[-5]
0x1416: Push(-2, 1); TaskCall(0)
0x1417: Call2 0x0

0x1418: Pop(-2, 1); TaskReturn
0x1419: Stack[-3] = Stack[-2]
0x141a: Pop(2)
0x141b: Push((int) 2)
0x141c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x141d: IF (Stack[-1] == 0) GOTO 0x1423; Pop(1)

0x141e: PushEmpty(bool, int)
0x141f: Stack[-1] = (int) 2
0x1420: Call2 0x1399

0x1421: Pop(2)
0x1422: GOTO 0x143d

0x1423: Push((int) 1)
0x1424: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1425: IF (Stack[-1] == 0) GOTO 0x142b; Pop(1)

0x1426: PushEmpty(bool, int)
0x1427: Stack[-1] = (int) 1
0x1428: Call2 0x1399

0x1429: Pop(2)
0x142a: GOTO 0x143d

0x142b: Push((int) 3)
0x142c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x142d: IF (Stack[-1] == 0) GOTO 0x1433; Pop(1)

0x142e: PushEmpty(bool, int)
0x142f: Stack[-1] = (int) 5
0x1430: Call2 0x1399

0x1431: Pop(2)
0x1432: GOTO 0x143d

0x1433: Push((int) 4)
0x1434: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1435: IF (Stack[-1] == 0) GOTO 0x143b; Pop(1)

0x1436: PushEmpty(bool, int)
0x1437: Stack[-1] = (int) 8
0x1438: Call2 0x1399

0x1439: Pop(2)
0x143a: GOTO 0x143d

0x143b: Stack[-4] = (bool) 0
0x143c: Return(); Pop(2)

0x143d: Stack[-4] = (bool) 1
0x143e: Return(); Pop(2)

0x143f: PushEmpty()
0x1440: PushEmpty()
0x1441: Call2 0x127a

0x1442: Pop(0)
0x1443: PushEmpty(bool, string, string)
0x1444: Stack[-2] = "quest_b9_03"
0x1445: Stack[-1] = "fail"
0x1446: Call2 0x11d3

0x1447: Pop(3)
0x1448: PushEmpty(object)
0x1449: Stack[-1] = Stack[-2]
0x144a: Push(-1, 0); TaskCall(14)
0x144b: Call2 0xaa3

0x144c: Pop(-1, 0); TaskReturn
0x144d: Pop(1)
0x144e: Return(); Pop(0)

0x144f: PushEmpty(object, cvector, cvector, cvector, float, object, cvector, cvector, cvector, float)
0x1450: Push("player")
0x1451: @ FindActor(Stack[-6], Stack[-1])
0x1452: Pop(1)
0x1453: PushEmpty(bool, object)
0x1454: Stack[-1] = Stack[-7]
0x1455: Call2 0x1029

0x1456: Pop(1)
0x1457: Pop(1); Push((bool) Stack[-1] == 0)
0x1458: IF (Stack[-1] == 0) GOTO 0x145b; Pop(1)

0x1459: Stack[-12] = (bool) 0
0x145a: Return(); Pop(10)

0x145b: @@ GetPosition(Stack[-4])
0x145c: Pop(0)
0x145d: @@ GetPosition(Stack[-3])
0x145e: Pop(0)
0x145f: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x1460: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x1461: Push((float)75625.0)
0x1462: Stack[-13] = Stack[-2] < Stack[-1]; Pop(1);
0x1463: Return(); Pop(10)

0x1464: Stack[-5] = 0
