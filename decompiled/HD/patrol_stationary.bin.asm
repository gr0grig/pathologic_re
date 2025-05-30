GlobalVarCount = 1
	G_VAR_0 object 

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
	head
	GetPosition
	GetPFPosition
	walk
	run
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
	RemoveStationaryActor
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	hunt
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
	woman
	worker
	butcher
	wasted_girl
	boy
	vaxxabitka
	unosha
	wasted_male
	alkash
	dohodyaga
	vaxxabit
	nudegirl
	morlok
	battle
	SetReturnValue
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
	tourniquet
	bandage
	packet
	bottle_water
	rusk
	hook
	watch
	alpha_pills
	beta_pills
	gamma_pills
	revolver_ammo
	rifle_ammo
	patrol_mark
	fresh_meat
	dried_meat
	smoked_meat
	vegetables
	samopal_ammo
	class
	patrol
	sanitar
	soldier
	little_girl
	in
	prc
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	reputation
	bomber
	hunter
	grabitel
	disease

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
	ResetAAS (0 args)
	KillTimer (1 args)
	SetTimer (2 args)
	GetPFPosition (1 args)
	GetDirection (1 args)
	irand (2 args)
	Sleep (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	WaitForAnimEnd (1 args)
	Sleep (1 args)
	StopGroup0 (0 args)
	Stop (0 args)
	CanSee (2 args)
	SendPlayerEnemy (2 args)
	UnlookAsync (1 args)
	GetPosition (1 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
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
	SetRTEnvelope (2 args)
	Hold (0 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
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
	CreateObjectSet (1 args)
	GetVariable (2 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	ReportReputationChange (3 args)
	ReportReputationChange (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x242
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x109 Vars = (int, int)
	GTASK_3 Vars = (cvector, cvector) Params = 0
		EVENT_7 Op = 0x24c Vars = (int)
		EVENT_41 Op = 0x25a Vars = (object)
		EVENT_0 Op = 0x263 Vars = (object)
		EVENT_1 Op = 0x281 Vars = (object)
		EVENT_3 Op = 0x28f Vars = (object)
		EVENT_17 Op = 0x2a9 Vars = (object)
		EVENT_30 Op = 0x2bd Vars = (object, object, bool)
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0x323 Vars = (object)
		EVENT_30 Op = 0x329 Vars = (object, object, bool)
		EVENT_7 Op = 0x362 Vars = (int)
		EVENT_1 Op = 0x37d Vars = (object)
		EVENT_2 Op = 0x38c Vars = (object)
		EVENT_10 Op = 0x412 Vars = (object)
		EVENT_41 Op = 0x41d Vars = (object)
	GTASK_5 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0x43f Vars = (object)
		EVENT_30 Op = 0x445 Vars = (object, object, bool)
	GTASK_6  Params = 1
		EVENT_0 Op = 0x719 Vars = (object)
		EVENT_22 Op = 0x798 Vars = (object, int, float, float)
		EVENT_16 Op = 0x79a Vars = (object, string)
		EVENT_41 Op = 0x79c Vars = (object)
	GTASK_7  Params = 1
		EVENT_41 Op = 0x7af Vars = (object)
		EVENT_1 Op = 0x7b8 Vars = (object)
		EVENT_3 Op = 0x7c6 Vars = (object)
		EVENT_17 Op = 0x7da Vars = (object)
		EVENT_30 Op = 0x7ee Vars = (object, object, bool)

Events:
EVENT_22 Op = 0xd9b Vars = (object, int, float, float)
EVENT_43 Op = 0xda3 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xdad Vars = (object, string)
EVENT_42 Op = 0xdba Vars = (object, string)
EVENT_41 Op = 0xdc1 Vars = (object)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0xde9

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x9d0

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
0x1c: Call2 0xde9

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
0x2d: Call2 0x93c

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0xde3

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0xde1

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0xde5

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0xde7

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0xb28

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
0x69: Call2 0x981

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
0x77: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral"
0x7a: Call2 0xf3

0x7b: Pop(1)
0x7c: Push((int) 537935)
0x7d: @@ SetMessage(Stack[-1])
0x7e: Pop(1)
0x7f: @@ ClearReplies()
0x80: Pop(0)
0x81: PushEmpty(bool, object)
0x82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83: Call2 0xb10

0x84: Pop(1)
0x85: Pop(1); Push((bool) Stack[-1] == 0)
0x86: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x87: Push((int) 537936)
0x88: Push((int) -1)
0x89: Push((int) 39797)
0x8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b: Pop(3)
0x8c: PushEmpty(bool, object)
0x8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e: Call2 0xb10

0x8f: Pop(1)
0x90: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x91: Push((int) 537937)
0x92: Push((int) -1)
0x93: Push((int) 39798)
0x94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95: Pop(3)
0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98: Call2 0xb04

0x99: Pop(1)
0x9a: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9b: Push((int) 537938)
0x9c: Push((int) 39800)
0x9d: Push((int) 39799)
0x9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(3)
0xa0: PushEmpty(bool, object)
0xa1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa2: Call2 0xb10

0xa3: Pop(1)
0xa4: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa5: Push((int) 537951)
0xa6: Push((int) 39813)
0xa7: Push((int) 39812)
0xa8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9: Pop(3)
0xaa: PushEmpty(bool, object)
0xab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac: Call2 0xb1c

0xad: Pop(1)
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: Push((int) 537964)
0xb0: Push((int) -1)
0xb1: Push((int) 39826)
0xb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3: Pop(3)
0xb4: PushEmpty(bool, object)
0xb5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Call2 0xb04

0xb7: Pop(1)
0xb8: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb9: Push((int) 537965)
0xba: Push((int) -1)
0xbb: Push((int) 39827)
0xbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd: Pop(3)
0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call2 0xb1c

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: Push((int) 537966)
0xc4: Push((int) -1)
0xc5: Push((int) 39828)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0xb10

0xcb: Pop(1)
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: Push((int) 537967)
0xce: Push((int) -1)
0xcf: Push((int) 39829)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: GOTO 0xd5

0xd3: Return(); Pop(0)

0xd4: GOTO 0x76

0xd5: PushEmpty(bool)
0xd6: Call2 0xde9

0xd7: Pop(0)
0xd8: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xd9: @ lshWaitForAnimEnd()
0xda: Pop(0)
0xdb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: GOTO 0xe3

0xde: PushEmpty(string)
0xdf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe0: Call2 0x9d0

0xe1: Pop(1)
0xe2: GOTO 0xd9

0xe3: GOTO 0xf2

0xe4: Push("all")
0xe5: Push("idle")
0xe6: @ PlayAnimation(Stack[-2], Stack[-1])
0xe7: Pop(2)
0xe8: @ WaitForAnimEnd()
0xe9: Pop(0)
0xea: Push( Stack[3 + Tasks[-1].StackPointer] )
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: GOTO 0xf2

0xed: Push("all")
0xee: Push("idle")
0xef: @ PlayAnimation(Stack[-2], Stack[-1])
0xf0: Pop(2)
0xf1: GOTO 0xe8

0xf2: Return(); Pop(0)

0xf3: PushEmpty()
0xf4: PushEmpty(bool)
0xf5: Call2 0xde9

0xf6: Pop(0)
0xf7: Pop(1); Push((bool) Stack[-1] == 0)
0xf8: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf9: Return(); Pop(0)

0xfa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xfb: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfc: Return(); Pop(0)

0xfd: PushEmpty(string, bool)
0xfe: Stack[-2] = Stack[-3]
0xff: Push("")
0x100: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-1] = (bool) 0
0x103: GOTO 0x105

0x104: Stack[-1] = (bool) 1
0x105: Call2 0x9e0

0x106: Pop(2)
0x107: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x108: Return(); Pop(0)

0x109: PushEmpty()
0x10a: Push((int) 1)
0x10b: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x10c: PushEmpty()
0x10d: Call2 0x9fa

0x10e: Pop(0)
0x10f: Push((int) 39797)
0x110: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0xaff

0x116: Pop(2)
0x117: Push((int) 39798)
0x118: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0xaff

0x11e: Pop(2)
0x11f: Push((int) 39796)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral"
0x124: Call2 0xf3

0x125: Pop(1)
0x126: Push((int) 537935)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: PushEmpty(bool, object)
0x12c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Call2 0xb10

0x12e: Pop(1)
0x12f: Pop(1); Push((bool) Stack[-1] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x131: Push((int) 537936)
0x132: Push((int) -1)
0x133: Push((int) 39797)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138: Call2 0xb10

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: Push((int) 537937)
0x13c: Push((int) -1)
0x13d: Push((int) 39798)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x142: Call2 0xb04

0x143: Pop(1)
0x144: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x145: Push((int) 537938)
0x146: Push((int) 39800)
0x147: Push((int) 39799)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: PushEmpty(bool, object)
0x14b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Call2 0xb10

0x14d: Pop(1)
0x14e: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14f: Push((int) 537951)
0x150: Push((int) 39813)
0x151: Push((int) 39812)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: PushEmpty(bool, object)
0x155: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x156: Call2 0xb1c

0x157: Pop(1)
0x158: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x159: Push((int) 537964)
0x15a: Push((int) -1)
0x15b: Push((int) 39826)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: PushEmpty(bool, object)
0x15f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x160: Call2 0xb04

0x161: Pop(1)
0x162: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x163: Push((int) 537965)
0x164: Push((int) -1)
0x165: Push((int) 39827)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Call2 0xb1c

0x16b: Pop(1)
0x16c: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16d: Push((int) 537966)
0x16e: Push((int) -1)
0x16f: Push((int) 39828)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: PushEmpty(bool, object)
0x173: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x174: Call2 0xb10

0x175: Pop(1)
0x176: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x177: Push((int) 537967)
0x178: Push((int) -1)
0x179: Push((int) 39829)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Push((int) 39813)
0x17e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral"
0x182: Call2 0xf3

0x183: Pop(1)
0x184: Push((int) 537952)
0x185: @@ SetMessage(Stack[-1])
0x186: Pop(1)
0x187: @@ ClearReplies()
0x188: Pop(0)
0x189: Push((int) 537953)
0x18a: Push((int) 39815)
0x18b: Push((int) 39814)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Push((int) 537960)
0x18f: Push((int) 39823)
0x190: Push((int) 39822)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Return(); Pop(0)

0x194: Push((int) 39823)
0x195: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral"
0x199: Call2 0xf3

0x19a: Pop(1)
0x19b: Push((int) 537961)
0x19c: @@ SetMessage(Stack[-1])
0x19d: Pop(1)
0x19e: @@ ClearReplies()
0x19f: Pop(0)
0x1a0: Push((int) 537962)
0x1a1: Push((int) -1)
0x1a2: Push((int) 39824)
0x1a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(3)
0x1a5: Push((int) 537963)
0x1a6: Push((int) -1)
0x1a7: Push((int) 39825)
0x1a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(3)
0x1aa: Return(); Pop(0)

0x1ab: Push((int) 39815)
0x1ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Neutral"
0x1b0: Call2 0xf3

0x1b1: Pop(1)
0x1b2: Push((int) 537954)
0x1b3: @@ SetMessage(Stack[-1])
0x1b4: Pop(1)
0x1b5: @@ ClearReplies()
0x1b6: Pop(0)
0x1b7: Push((int) 537955)
0x1b8: Push((int) 39817)
0x1b9: Push((int) 39816)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Push((int) 537959)
0x1bd: Push((int) 39823)
0x1be: Push((int) 39820)
0x1bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c0: Pop(3)
0x1c1: Return(); Pop(0)

0x1c2: Push((int) 39817)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral"
0x1c7: Call2 0xf3

0x1c8: Pop(1)
0x1c9: Push((int) 537956)
0x1ca: @@ SetMessage(Stack[-1])
0x1cb: Pop(1)
0x1cc: @@ ClearReplies()
0x1cd: Pop(0)
0x1ce: Push((int) 537957)
0x1cf: Push((int) -1)
0x1d0: Push((int) 39818)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: Push((int) 537958)
0x1d4: Push((int) -1)
0x1d5: Push((int) 39819)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Return(); Pop(0)

0x1d9: Push((int) 39800)
0x1da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1dc: PushEmpty(string)
0x1dd: Stack[-1] = "Neutral"
0x1de: Call2 0xf3

0x1df: Pop(1)
0x1e0: Push((int) 537939)
0x1e1: @@ SetMessage(Stack[-1])
0x1e2: Pop(1)
0x1e3: @@ ClearReplies()
0x1e4: Pop(0)
0x1e5: Push((int) 537940)
0x1e6: Push((int) 39802)
0x1e7: Push((int) 39801)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Push((int) 537947)
0x1eb: Push((int) 39809)
0x1ec: Push((int) 39808)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Return(); Pop(0)

0x1f0: Push((int) 39809)
0x1f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f3: PushEmpty(string)
0x1f4: Stack[-1] = "Neutral"
0x1f5: Call2 0xf3

0x1f6: Pop(1)
0x1f7: Push((int) 537948)
0x1f8: @@ SetMessage(Stack[-1])
0x1f9: Pop(1)
0x1fa: @@ ClearReplies()
0x1fb: Pop(0)
0x1fc: Push((int) 537949)
0x1fd: Push((int) -1)
0x1fe: Push((int) 39810)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Push((int) 537950)
0x202: Push((int) -1)
0x203: Push((int) 39811)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Return(); Pop(0)

0x207: Push((int) 39802)
0x208: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20a: PushEmpty(string)
0x20b: Stack[-1] = "Neutral"
0x20c: Call2 0xf3

0x20d: Pop(1)
0x20e: Push((int) 537941)
0x20f: @@ SetMessage(Stack[-1])
0x210: Pop(1)
0x211: @@ ClearReplies()
0x212: Pop(0)
0x213: Push((int) 537942)
0x214: Push((int) 39804)
0x215: Push((int) 39803)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Push((int) 537946)
0x219: Push((int) -1)
0x21a: Push((int) 39807)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: Push((int) 39804)
0x21f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x221: PushEmpty(string)
0x222: Stack[-1] = "Neutral"
0x223: Call2 0xf3

0x224: Pop(1)
0x225: Push((int) 537943)
0x226: @@ SetMessage(Stack[-1])
0x227: Pop(1)
0x228: @@ ClearReplies()
0x229: Pop(0)
0x22a: Push((int) 537944)
0x22b: Push((int) -1)
0x22c: Push((int) 39805)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Push((int) 537945)
0x230: Push((int) -1)
0x231: Push((int) 39806)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Return(); Pop(0)

0x235: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x236: PushEmpty(bool)
0x237: Call2 0xde9

0x238: Pop(0)
0x239: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23a: @ lshStopAnimation()
0x23b: Pop(0)
0x23c: GOTO 0x23f

0x23d: @ StopAnimation()
0x23e: Pop(0)
0x23f: Return(); Pop(0)

0x240: GOTO 0x10a

0x241: Return(); Pop(0)

0x242: PushEmpty()
0x243: Call2 0xd21

0x244: Pop(0)
0x245: PushEmpty()
0x246: Call2 0xc5a

0x247: Pop(0)
0x248: PushEmpty()
0x249: Call2 0x2ca

0x24a: Pop(0)
0x24b: Return(); Pop(0)

0x24c: PushEmpty()
0x24d: Push((int) 1)
0x24e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x250: @ ResetAAS()
0x251: Pop(0)
0x252: Return(); Pop(0)

0x253: Push((int) 1)
0x254: @ KillTimer(Stack[-1])
0x255: Pop(1)
0x256: PushEmpty()
0x257: Call2 0x31e

0x258: Pop(0)
0x259: Return(); Pop(0)

0x25a: PushEmpty()
0x25b: PushEmpty()
0x25c: Call2 0x253

0x25d: Pop(0)
0x25e: PushEmpty(object)
0x25f: Stack[-1] = Stack[-2]
0x260: Call2 0xdc1

0x261: Pop(1)
0x262: Return(); Pop(0)

0x263: PushEmpty()
0x264: PushEmpty(bool, object)
0x265: Stack[-1] = Stack[-3]
0x266: Call2 0xdeb

0x267: Pop(1)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Return(); Pop(0)

0x26a: PushEmpty()
0x26b: Call2 0x253

0x26c: Pop(0)
0x26d: Push((int) 1000)
0x26e: PushEmpty(int, object)
0x26f: Stack[-1] = Stack[-4]
0x270: Push(-2, 1); TaskCall(1)
0x271: Call2 0x28

0x272: Pop(-2, 1); TaskReturn
0x273: Pop(1)
0x274: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x276: PushEmpty(object)
0x277: Stack[-1] = Stack[-2]
0x278: Call2 0xd28

0x279: Pop(1)
0x27a: Return(); Pop(0)

0x27b: Push((int) 1)
0x27c: Push((float)2.0)
0x27d: @ SetTimer(Stack[-2], Stack[-1])
0x27e: Pop(2)
0x27f: Return(); Pop(0)

0x280: Return(); Pop(0)

0x281: PushEmpty()
0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[-3]
0x284: Call2 0xd48

0x285: Pop(1)
0x286: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x287: PushEmpty()
0x288: Call2 0x253

0x289: Pop(0)
0x28a: PushEmpty(object)
0x28b: Stack[-1] = Stack[-2]
0x28c: Call2 0xd4f

0x28d: Pop(1)
0x28e: Return(); Pop(0)

0x28f: PushEmpty()
0x290: PushEmpty(bool, object)
0x291: Stack[-1] = Stack[-3]
0x292: Call2 0xd3b

0x293: Pop(1)
0x294: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x295: PushEmpty()
0x296: Call2 0x253

0x297: Pop(0)
0x298: PushEmpty(bool, object)
0x299: Stack[-1] = Stack[-3]
0x29a: Call2 0x818

0x29b: Pop(1)
0x29c: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29d: PushEmpty(object)
0x29e: Stack[-1] = Stack[-2]
0x29f: Push(-1, 0); TaskCall(7)
0x2a0: Call2 0x79e

0x2a1: Pop(-1, 0); TaskReturn
0x2a2: Pop(1)
0x2a3: GOTO 0x2a8

0x2a4: PushEmpty(object)
0x2a5: Stack[-1] = Stack[-2]
0x2a6: Call2 0xd42

0x2a7: Pop(1)
0x2a8: Return(); Pop(0)

0x2a9: PushEmpty()
0x2aa: PushEmpty(bool, object)
0x2ab: Stack[-1] = Stack[-3]
0x2ac: Call2 0x89b

0x2ad: Pop(1)
0x2ae: Pop(1); Push((bool) Stack[-1] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b0: PushEmpty(object)
0x2b1: Stack[-1] = Stack[-2]
0x2b2: Call2 0xd60

0x2b3: Pop(1)
0x2b4: Return(); Pop(0)

0x2b5: PushEmpty()
0x2b6: Call2 0x253

0x2b7: Pop(0)
0x2b8: PushEmpty(object)
0x2b9: Stack[-1] = Stack[-2]
0x2ba: Call2 0xd78

0x2bb: Pop(1)
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty()
0x2be: PushEmpty(bool, object, object, bool)
0x2bf: Stack[-3] = Stack[-7]
0x2c0: Stack[-2] = Stack[-6]
0x2c1: Stack[-1] = Stack[-5]
0x2c2: Call2 0xdc7

0x2c3: Pop(3)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c5: PushEmpty(object)
0x2c6: Stack[-1] = Stack[-4]
0x2c7: Call2 0x2a9

0x2c8: Pop(1)
0x2c9: Return(); Pop(0)

0x2ca: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x2cb: @ GetPFPosition(Stack[-1])
0x2cc: Pop(0)
0x2cd: @ GetDirection(Stack[-0])
0x2ce: Pop(0)
0x2cf: PushEmpty()
0x2d0: Call2 0x27b

0x2d1: Pop(0)
0x2d2: Push((int) 10)
0x2d3: @ irand(Stack[-5], Stack[-1])
0x2d4: Pop(1)
0x2d5: Push((int) 5)
0x2d6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2d7: @ Sleep(Stack[-1], Stack[-4])
0x2d8: Pop(1)
0x2d9: Push(Stack[-3])
0x2da: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2db: PushEmpty()
0x2dc: Call2 0x280

0x2dd: Pop(0)
0x2de: GOTO 0x31c

0x2df: PushEmpty()
0x2e0: Call2 0x27b

0x2e1: Pop(0)
0x2e2: @ GetPFPosition(Stack[-2])
0x2e3: Pop(0)
0x2e4: PushEmpty(float, cvector, cvector)
0x2e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e6: Stack[-1] = Stack[-5]
0x2e7: Call2 0xaab

0x2e8: Pop(2)
0x2e9: Push((int) 40000)
0x2ea: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x2ec: @ FindPathTo(Stack[-1], Stack[-1])
0x2ed: Pop(0)
0x2ee: Pop(0); Push(( Stack[-1] != 0 )
0x2ef: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2f0: @ RotatePath(Stack[-1], Stack[-3])
0x2f1: Pop(0)
0x2f2: Pop(0); Push((bool) Stack[-3] == 0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: GOTO 0x31b

0x2f5: Push((bool) 0)
0x2f6: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x2f7: Pop(1)
0x2f8: Pop(0); Push((bool) Stack[-3] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: GOTO 0x31b

0x2fb: Push(CvectorIndex(Stack[-0], 0))
0x2fc: Push(CvectorIndex(Stack[-0], 2))
0x2fd: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x2fe: Pop(2)
0x2ff: Pop(0); Push((bool) Stack[-3] == 0)
0x300: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x301: GOTO 0x31b

0x302: @ WaitForAnimEnd(Stack[-3])
0x303: Pop(0)
0x304: Pop(0); Push((bool) Stack[-3] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: GOTO 0x31b

0x307: GOTO 0x31c

0x308: GOTO 0x30c

0x309: Push((int) 1)
0x30a: @ Sleep(Stack[-1])
0x30b: Pop(1)
0x30c: Stack[-1] = 0
0x30d: GOTO 0x31b

0x30e: Push(CvectorIndex(Stack[-0], 0))
0x30f: Push(CvectorIndex(Stack[-0], 2))
0x310: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x311: Pop(2)
0x312: Pop(0); Push((bool) Stack[-3] == 0)
0x313: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x314: GOTO 0x31b

0x315: @ WaitForAnimEnd(Stack[-3])
0x316: Pop(0)
0x317: Pop(0); Push((bool) Stack[-3] == 0)
0x318: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x319: GOTO 0x31b

0x31a: GOTO 0x31c

0x31b: GOTO 0x2df

0x31c: GOTO 0x2cf

0x31d: Return(); Pop(8)

0x31e: @ StopGroup0()
0x31f: Pop(0)
0x320: @ Stop()
0x321: Pop(0)
0x322: Return(); Pop(0)

0x323: PushEmpty()
0x324: PushEmpty(object)
0x325: Stack[-1] = Stack[-2]
0x326: Call2 0xd60

0x327: Pop(1)
0x328: Return(); Pop(0)

0x329: PushEmpty()
0x32a: PushEmpty(bool, object, object, bool)
0x32b: Stack[-3] = Stack[-7]
0x32c: Stack[-2] = Stack[-6]
0x32d: Stack[-1] = Stack[-5]
0x32e: Call2 0xdc7

0x32f: Pop(4)
0x330: Return(); Pop(0)

0x331: PushEmpty(bool, bool, bool, bool)
0x332: PushEmpty(object)
0x333: Stack[-1] = Stack[-10]
0x334: Call2 0xaeb

0x335: Pop(1)
0x336: Push((int) 1)
0x337: Push((int) 5)
0x338: @ SetTimer(Stack[-2], Stack[-1])
0x339: Pop(2)
0x33a: @ CanSee(Stack[-2], Stack[-9])
0x33b: Pop(0)
0x33c: Push(Stack[-2])
0x33d: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x33f: PushEmpty(object)
0x340: Stack[-1] = Stack[-10]
0x341: Call2 0x9ef

0x342: Pop(1)
0x343: GOTO 0x345

0x344: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x345: PushEmpty(bool, object)
0x346: Stack[-1] = Stack[-11]
0x347: Call2 0x818

0x348: Pop(1)
0x349: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34a: PushEmpty(object)
0x34b: Call2 0xa9b

0x34c: Pop(0)
0x34d: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x34e: Pop(1)
0x34f: PushEmpty(bool, object, float, float, bool, bool)
0x350: Stack[-5] = Stack[-15]
0x351: Stack[-4] = Stack[-14]
0x352: Stack[-3] = Stack[-13]
0x353: Stack[-2] = Stack[-12]
0x354: Stack[-1] = Stack[-11]
0x355: Call2 0x39a

0x356: Stack[-7] = Stack[-6]
0x357: Pop(6)
0x358: Push( Stack[2 + Tasks[-1].StackPointer] )
0x359: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35a: Push("head")
0x35b: @ UnlookAsync(Stack[-1])
0x35c: Pop(1)
0x35d: Push((int) 1)
0x35e: @ KillTimer(Stack[-1])
0x35f: Pop(1)
0x360: Stack[-10] = Stack[-1]
0x361: Return(); Pop(4)

0x362: PushEmpty()
0x363: Push((int) 1)
0x364: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x366: PushEmpty(object)
0x367: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x368: Call2 0xaeb

0x369: Pop(1)
0x36a: GOTO 0x36f

0x36b: PushEmpty(int)
0x36c: Stack[-1] = Stack[-2]
0x36d: Call2 0x400

0x36e: Pop(1)
0x36f: Return(); Pop(0)

0x370: Push((int) 1)
0x371: @ KillTimer(Stack[-1])
0x372: Pop(1)
0x373: Push( Stack[2 + Tasks[-1].StackPointer] )
0x374: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x375: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x376: Push("head")
0x377: @ UnlookAsync(Stack[-1])
0x378: Pop(1)
0x379: PushEmpty()
0x37a: Call2 0x416

0x37b: Pop(0)
0x37c: Return(); Pop(0)

0x37d: PushEmpty()
0x37e: PushEmpty(bool)
0x37f: Stack[-1] = (bool) 0
0x380: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x381: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x382: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: Stack[-1] = (bool) 1
0x385: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x386: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x387: PushEmpty(object)
0x388: Stack[-1] = Stack[-2]
0x389: Call2 0x9ef

0x38a: Pop(1)
0x38b: Return(); Pop(0)

0x38c: PushEmpty()
0x38d: PushEmpty(bool)
0x38e: Stack[-1] = (bool) 0
0x38f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x390: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x391: Push( Stack[2 + Tasks[-1].StackPointer] )
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: Stack[-1] = (bool) 1
0x394: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x395: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x396: Push("head")
0x397: @ UnlookAsync(Stack[-1])
0x398: Pop(1)
0x399: Return(); Pop(0)

0x39a: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x39b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x39c: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x39d: Stack[-7] = Stack[-17]
0x39e: PushEmpty(bool, object)
0x39f: Stack[-1] = Stack[-23]
0x3a0: Call2 0x426

0x3a1: Pop(1)
0x3a2: Pop(1); Push((bool) Stack[-1] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a4: Stack[-22] = (bool) 0
0x3a5: Return(); Pop(16)

0x3a6: @@ GetPosition(Stack[-5])
0x3a7: Pop(0)
0x3a8: @ GetPosition(Stack[-4])
0x3a9: Pop(0)
0x3aa: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3ab: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3ac: PushEmpty(bool)
0x3ad: Stack[-1] = (bool) 0
0x3ae: Push((int) 0)
0x3af: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b1: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3b2: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b4: Stack[-1] = (bool) 1
0x3b5: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b6: @ Stop()
0x3b7: Pop(0)
0x3b8: Stack[-22] = (bool) 0
0x3b9: Return(); Pop(16)

0x3ba: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3bb: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3bd: @@ GetPFPosition(Stack[-5])
0x3be: Pop(0)
0x3bf: @ FindPathTo(Stack[-1], Stack[-5])
0x3c0: Pop(0)
0x3c1: Pop(0); Push(( Stack[-1] != 0 )
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c3: Stack[-6] = Stack[-1]
0x3c4: Stack[-1] = 0
0x3c5: Pop(0); Push(( Stack[-6] != 0 )
0x3c6: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3c7: Push(Stack[-7])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3c9: Stack[-7] = (bool) 0
0x3ca: @ RotatePath(Stack[-6], Stack[-8])
0x3cb: Pop(0)
0x3cc: Pop(0); Push((bool) Stack[-8] == 0)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3ce: GOTO 0x3fe

0x3cf: Push((int) 0)
0x3d0: Push((float)0.3)
0x3d1: @ SetTimer(Stack[-2], Stack[-1])
0x3d2: Pop(2)
0x3d3: PushEmpty(string)
0x3d4: Call2 0x42d

0x3d5: Pop(0)
0x3d6: PushEmpty(string)
0x3d7: Call2 0x42f

0x3d8: Pop(0)
0x3d9: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x3da: Pop(2)
0x3db: Pop(0); Push((bool) Stack[-8] == 0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3dd: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3de: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3df: Stack[-6] = 0
0x3e0: GOTO 0x3fe

0x3e1: GOTO 0x3e3

0x3e2: GOTO 0x3fd

0x3e3: GOTO 0x3e5

0x3e4: Stack[-6] = 0
0x3e5: GOTO 0x3f6

0x3e6: Push((int) 0)
0x3e7: @ KillTimer(Stack[-1])
0x3e8: Pop(1)
0x3e9: Push((float)0.5)
0x3ea: @ Sleep(Stack[-1], Stack[-9])
0x3eb: Pop(1)
0x3ec: Pop(0); Push((bool) Stack[-8] == 0)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3ee: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f0: Stack[-6] = 0
0x3f1: GOTO 0x3fe

0x3f2: Push((int) 0)
0x3f3: Push((float)0.3)
0x3f4: @ SetTimer(Stack[-2], Stack[-1])
0x3f5: Pop(2)
0x3f6: Stack[-1] = 0
0x3f7: GOTO 0x3fc

0x3f8: Push((int) 0)
0x3f9: @ KillTimer(Stack[-1])
0x3fa: Pop(1)
0x3fb: GOTO 0x3fe

0x3fc: Stack[-6] = 0
0x3fd: GOTO 0x39e

0x3fe: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x3ff: Return(); Pop(16)

0x400: PushEmpty()
0x401: Push((int) 0)
0x402: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x403: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x404: Return(); Pop(0)

0x405: PushEmpty(bool, object)
0x406: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x407: Call2 0x426

0x408: Pop(1)
0x409: Pop(1); Push((bool) Stack[-1] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x40c: Push((int) 0)
0x40d: @ KillTimer(Stack[-1])
0x40e: Pop(1)
0x40f: @ Stop()
0x410: Pop(0)
0x411: Return(); Pop(0)

0x412: PushEmpty()
0x413: @ RequestClearPath(Stack[-1])
0x414: Pop(0)
0x415: Return(); Pop(0)

0x416: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x417: Push((int) 0)
0x418: @ KillTimer(Stack[-1])
0x419: Pop(1)
0x41a: @ Stop()
0x41b: Pop(0)
0x41c: Return(); Pop(0)

0x41d: PushEmpty()
0x41e: PushEmpty()
0x41f: Call2 0x370

0x420: Pop(0)
0x421: PushEmpty(object)
0x422: Stack[-1] = Stack[-2]
0x423: Call2 0xdc1

0x424: Pop(1)
0x425: Return(); Pop(0)

0x426: PushEmpty()
0x427: PushEmpty(bool, object)
0x428: Stack[-1] = Stack[-3]
0x429: Call2 0x89b

0x42a: Stack[-4] = Stack[-2]
0x42b: Pop(2)
0x42c: Return(); Pop(0)

0x42d: Stack[-1] = "walk"
0x42e: Return(); Pop(0)

0x42f: Stack[-1] = "run"
0x430: Return(); Pop(0)

0x431: PushEmpty()
0x432: PushEmpty(object, bool, float)
0x433: Stack[-3] = Stack[-5]
0x434: Stack[-2] = Stack[-4]
0x435: Stack[-1] = (float) 180.0
0x436: Call2 0x44d

0x437: Pop(3)
0x438: Return(); Pop(0)

0x439: PushEmpty()
0x43a: Stack[-3] = (float) 0.1
0x43b: Return(); Pop(0)

0x43c: PushEmpty()
0x43d: Stack[-3] = (int) 0
0x43e: Return(); Pop(0)

0x43f: PushEmpty()
0x440: PushEmpty(object)
0x441: Stack[-1] = Stack[-2]
0x442: Call2 0xd60

0x443: Pop(1)
0x444: Return(); Pop(0)

0x445: PushEmpty()
0x446: PushEmpty(bool, object, object, bool)
0x447: Stack[-3] = Stack[-7]
0x448: Stack[-2] = Stack[-6]
0x449: Stack[-1] = Stack[-5]
0x44a: Call2 0xdc7

0x44b: Pop(4)
0x44c: Return(); Pop(0)

0x44d: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x44e: PushEmpty()
0x44f: Call2 0x532

0x450: Pop(0)
0x451: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x452: Push("@GetAttackDistance")
0x453: Push((int) 1)
0x454: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x455: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x456: @@ GetAttackDistance(Stack[-11])
0x457: Pop(0)
0x458: Push((int) 50)
0x459: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x45a: GOTO 0x45c

0x45b: Stack[-11] = Stack[-23]
0x45c: Push((int) 150)
0x45d: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45f: Stack[-11] = (int) 150
0x460: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x461: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x462: @ IsPlayerActor(Stack[-0], Stack[-8])
0x463: Pop(0)
0x464: Push(Stack[-8])
0x465: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x466: Push("attack")
0x467: @ PlayGlobalMusic(Stack[-1])
0x468: Pop(1)
0x469: PushEmpty(object)
0x46a: Call2 0xa9b

0x46b: Pop(0)
0x46c: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x46d: Pop(1)
0x46e: Push(Stack[-24])
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: Stack[-7] = (bool) 0
0x471: GOTO 0x473

0x472: Stack[-7] = (bool) 1
0x473: Push((float)300.0)
0x474: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x475: PushEmpty(bool)
0x476: Stack[-1] = (bool) 0
0x477: PushEmpty(bool, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0x89b

0x47a: Pop(1)
0x47b: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47c: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x47d: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47e: Stack[-1] = (bool) 1
0x47f: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x480: PushEmpty()
0x481: Call2 0x6cf

0x482: Pop(0)
0x483: @@ GetPFPosition(Stack[-10])
0x484: Pop(0)
0x485: @ GetPFPosition(Stack[-9])
0x486: Pop(0)
0x487: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x488: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x489: Pop(0); Push(Stack[-6] * Stack[-6]);
0x48a: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x48c: PushEmpty(bool, object, float, float, bool, bool)
0x48d: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x48e: Stack[-4] = Stack[-17]
0x48f: Stack[-3] = (float) 3000.0
0x490: Stack[-2] = (bool) 1
0x491: Stack[-1] = (bool) 0
0x492: Push(-6, 3); TaskCall(4)
0x493: Call2 0x331

0x494: Pop(-6, 3); TaskReturn
0x495: Pop(5)
0x496: Pop(1); Push((bool) Stack[-1] == 0)
0x497: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x498: GOTO 0x521

0x499: Stack[-7] = (bool) 0
0x49a: GOTO 0x520

0x49b: Pop(0); Push(Stack[-23] * Stack[-23]);
0x49c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x49e: @@ GetPFPosition(Stack[-3])
0x49f: Pop(0)
0x4a0: @ CanReachByPF(Stack[-2], Stack[-3])
0x4a1: Pop(0)
0x4a2: Pop(0); Push((bool) Stack[-2] == 0)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4a4: PushEmpty(bool, object, float, float, bool, bool)
0x4a5: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x4a6: Stack[-4] = Stack[-17]
0x4a7: Stack[-3] = (float) 3000.0
0x4a8: Stack[-2] = (bool) 1
0x4a9: Stack[-1] = (bool) 0
0x4aa: Push(-6, 3); TaskCall(4)
0x4ab: Call2 0x331

0x4ac: Pop(-6, 3); TaskReturn
0x4ad: Pop(5)
0x4ae: Pop(1); Push((bool) Stack[-1] == 0)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4b0: GOTO 0x521

0x4b1: Stack[-7] = (bool) 0
0x4b2: GOTO 0x475

0x4b3: Pop(0); Push((bool) Stack[-7] == 0)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4b5: PushEmpty(object)
0x4b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b7: Call2 0x931

0x4b8: Pop(1)
0x4b9: Push("all")
0x4ba: Push("attack_on")
0x4bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x4bc: Pop(2)
0x4bd: @ WaitForAnimEnd()
0x4be: Pop(0)
0x4bf: PushEmpty()
0x4c0: Call2 0x6cf

0x4c1: Pop(0)
0x4c2: @ StopAsync()
0x4c3: Pop(0)
0x4c4: Stack[-7] = (bool) 1
0x4c5: PushEmpty(bool, object)
0x4c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c7: Call2 0x89b

0x4c8: Pop(1)
0x4c9: Pop(1); Push((bool) Stack[-1] == 0)
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4cb: GOTO 0x521

0x4cc: @ rand(Stack[-1])
0x4cd: Pop(0)
0x4ce: PushEmpty(bool)
0x4cf: Stack[-1] = (bool) 1
0x4d0: Push((float)0.6)
0x4d1: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d3: PushEmpty(bool)
0x4d4: Call2 0x6a4

0x4d5: Pop(0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d7: Stack[-1] = (bool) 0
0x4d8: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4d9: @ Face(Stack[-0])
0x4da: Pop(0)
0x4db: PushEmpty()
0x4dc: Call2 0x6d6

0x4dd: Pop(0)
0x4de: Push("all")
0x4df: Push("attack_stay")
0x4e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e1: Pop(2)
0x4e2: PushEmpty(bool, float)
0x4e3: Stack[-1] = Stack[-25]
0x4e4: Call2 0x620

0x4e5: Pop(2)
0x4e6: @ StopAsync()
0x4e7: Pop(0)
0x4e8: GOTO 0x517

0x4e9: @ Face(Stack[-0])
0x4ea: Pop(0)
0x4eb: Push("all")
0x4ec: Push("fjump")
0x4ed: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ee: Pop(2)
0x4ef: @ WaitForAnimEnd()
0x4f0: Pop(0)
0x4f1: PushEmpty()
0x4f2: Call2 0x6cf

0x4f3: Pop(0)
0x4f4: Push(CVector(0.0, 0.0, 0.0))
0x4f5: @ SetSpeed(Stack[-1])
0x4f6: Pop(1)
0x4f7: @ Stop()
0x4f8: Pop(0)
0x4f9: @ StopAsync()
0x4fa: Pop(0)
0x4fb: PushEmpty(bool)
0x4fc: Call2 0x6a4

0x4fd: Pop(0)
0x4fe: Pop(1); Push((bool) Stack[-1] == 0)
0x4ff: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x500: PushEmpty(bool, object)
0x501: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x502: Call2 0x89b

0x503: Pop(1)
0x504: Pop(1); Push((bool) Stack[-1] == 0)
0x505: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x506: GOTO 0x521

0x507: @@ GetPFPosition(Stack[-10])
0x508: Pop(0)
0x509: @ GetPFPosition(Stack[-9])
0x50a: Pop(0)
0x50b: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x50c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x50d: Pop(0); Push(Stack[-23] * Stack[-23]);
0x50e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x50f: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x510: PushEmpty(bool, float)
0x511: Stack[-1] = Stack[-25]
0x512: Call2 0x57c

0x513: Pop(1)
0x514: Pop(1); Push((bool) Stack[-1] == 0)
0x515: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x516: GOTO 0x521

0x517: GOTO 0x520

0x518: PushEmpty(bool, float)
0x519: Stack[-1] = Stack[-25]
0x51a: Call2 0x57c

0x51b: Pop(1)
0x51c: Pop(1); Push((bool) Stack[-1] == 0)
0x51d: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51e: GOTO 0x521

0x51f: Stack[-7] = (bool) 1
0x520: GOTO 0x475

0x521: @ WaitForAnimEnd()
0x522: Pop(0)
0x523: Push( Stack[3 + Tasks[-1].StackPointer] )
0x524: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x525: Return(); Pop(22)

0x526: Push("all")
0x527: Push("attack_off")
0x528: @ PlayAnimation(Stack[-2], Stack[-1])
0x529: Pop(2)
0x52a: @ WaitForAnimEnd()
0x52b: Pop(0)
0x52c: Push(Stack[-8])
0x52d: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52e: Push((float)2.0)
0x52f: @ Sleep(Stack[-1])
0x530: Pop(1)
0x531: Return(); Pop(22)

0x532: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x533: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x534: Push("all")
0x535: Push("attack_begin")
0x536: Push((int) 1)
0x537: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x538: Pop(2); Push(Stack[-2] + Stack[-1]);
0x539: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x53a: Pop(2)
0x53b: Pop(0); Push((bool) Stack[-3] == 0)
0x53c: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53d: GOTO 0x541

0x53e: Push((int) 1)
0x53f: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x540: GOTO 0x534

0x541: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x542: Push("attack")
0x543: Push((int) 1)
0x544: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x545: Pop(2); Push(Stack[-2] + Stack[-1]);
0x546: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x547: Pop(1)
0x548: Pop(0); Push((bool) Stack[-2] == 0)
0x549: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x54a: GOTO 0x54e

0x54b: Push((int) 1)
0x54c: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x54d: GOTO 0x542

0x54e: Push("all")
0x54f: Push("bjump")
0x550: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x551: Pop(2)
0x552: Push(CvectorIndex(Stack[-1], 2))
0x553: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x554: Return(); Pop(6)

0x555: PushEmpty(object, float, float, object, float, float)
0x556: Push((float)0.9)
0x557: Pop(1); Push(Stack[-9] * Stack[-1]);
0x558: @ GetVictim(Stack[-1], Stack[-4])
0x559: Pop(1)
0x55a: @ ReportAttack(Stack[-0])
0x55b: Pop(0)
0x55c: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x55d: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x55e: PushEmpty(float, object, int)
0x55f: Stack[-2] = Stack[-6]
0x560: Stack[-1] = Stack[-10]
0x561: Call2 0x439

0x562: Stack[-5] = Stack[-3]
0x563: Pop(3)
0x564: PushEmpty(float, object, float, int)
0x565: Stack[-3] = Stack[-7]
0x566: Stack[-2] = Stack[-6]
0x567: PushEmpty(int, object, int)
0x568: Stack[-2] = Stack[-10]
0x569: Stack[-1] = Stack[-14]
0x56a: Call2 0x43c

0x56b: Stack[-4] = Stack[-3]
0x56c: Pop(3)
0x56d: Call2 0x829

0x56e: Stack[-5] = Stack[-4]
0x56f: Pop(4)
0x570: PushEmpty(int)
0x571: Call2 0x6d4

0x572: Pop(0)
0x573: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x574: Pop(1)
0x575: PushEmpty(object, float)
0x576: Stack[-2] = Stack[-5]
0x577: Stack[-1] = Stack[-3]
0x578: Call2 0x6db

0x579: Pop(2)
0x57a: Return(); Pop(6)

0x57b: Stack[-3] = 0
0x57c: PushEmpty(int, bool, int, string, int, bool, int, string)
0x57d: PushEmpty()
0x57e: Call2 0x6cf

0x57f: Pop(0)
0x580: @ irand(Stack[-4], Stack[-1])
0x581: Pop(0)
0x582: Push((int) 1)
0x583: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x584: @ Face(Stack[-0])
0x585: Pop(0)
0x586: Push((bool) 1)
0x587: @ SetAttackState(Stack[-1])
0x588: Pop(1)
0x589: PushEmpty()
0x58a: Call2 0xaf4

0x58b: Pop(0)
0x58c: Push("all")
0x58d: Push("attack_begin")
0x58e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x58f: @ PlayAnimation(Stack[-2], Stack[-1])
0x590: Pop(2)
0x591: @ WaitForAnimEnd()
0x592: Pop(0)
0x593: PushEmpty()
0x594: Call2 0x6af

0x595: Pop(0)
0x596: PushEmpty(bool, object)
0x597: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x598: Call2 0x89b

0x599: Pop(1)
0x59a: Pop(1); Push((bool) Stack[-1] == 0)
0x59b: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59c: @ StopAsync()
0x59d: Pop(0)
0x59e: Stack[-10] = (bool) 0
0x59f: Return(); Pop(8)

0x5a0: PushEmpty(float, int)
0x5a1: Stack[-2] = Stack[-11]
0x5a2: Stack[-1] = Stack[-6]
0x5a3: Call2 0x555

0x5a4: Pop(2)
0x5a5: Push("all")
0x5a6: Push("attack_middle")
0x5a7: Pop(1); Push(Stack[-1] + Stack[-6]);
0x5a8: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x5a9: Pop(2)
0x5aa: Push(Stack[-3])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ac: PushEmpty()
0x5ad: Call2 0xaf4

0x5ae: Pop(0)
0x5af: Push("all")
0x5b0: Push("attack_middle")
0x5b1: Pop(1); Push(Stack[-1] + Stack[-6]);
0x5b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x5b3: Pop(2)
0x5b4: @ WaitForAnimEnd()
0x5b5: Pop(0)
0x5b6: PushEmpty()
0x5b7: Call2 0x6cf

0x5b8: Pop(0)
0x5b9: PushEmpty(bool, object)
0x5ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5bb: Call2 0x89b

0x5bc: Pop(1)
0x5bd: Pop(1); Push((bool) Stack[-1] == 0)
0x5be: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5bf: @ StopAsync()
0x5c0: Pop(0)
0x5c1: Stack[-10] = (bool) 0
0x5c2: Return(); Pop(8)

0x5c3: PushEmpty(float, int)
0x5c4: Stack[-2] = Stack[-11]
0x5c5: Stack[-1] = Stack[-6]
0x5c6: Call2 0x555

0x5c7: Pop(2)
0x5c8: Stack[-2] = (int) 1
0x5c9: Push("attack_middle")
0x5ca: Pop(1); Push(Stack[-1] + Stack[-5]);
0x5cb: Push("_")
0x5cc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5cd: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x5ce: Push("all")
0x5cf: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x5d0: Pop(1)
0x5d1: Pop(0); Push((bool) Stack[-3] == 0)
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d3: GOTO 0x5f1

0x5d4: PushEmpty()
0x5d5: Call2 0xaf4

0x5d6: Pop(0)
0x5d7: Push("all")
0x5d8: @ PlayAnimation(Stack[-1], Stack[-2])
0x5d9: Pop(1)
0x5da: @ WaitForAnimEnd()
0x5db: Pop(0)
0x5dc: PushEmpty()
0x5dd: Call2 0x6cf

0x5de: Pop(0)
0x5df: PushEmpty(bool, object)
0x5e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e1: Call2 0x89b

0x5e2: Pop(1)
0x5e3: Pop(1); Push((bool) Stack[-1] == 0)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e5: @ StopAsync()
0x5e6: Pop(0)
0x5e7: Stack[-10] = (bool) 0
0x5e8: Return(); Pop(8)

0x5e9: PushEmpty(float, int)
0x5ea: Stack[-2] = Stack[-11]
0x5eb: Stack[-1] = Stack[-6]
0x5ec: Call2 0x555

0x5ed: Pop(2)
0x5ee: Push((int) 1)
0x5ef: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5f0: GOTO 0x5c9

0x5f1: Push((bool) 0)
0x5f2: @ SetAttackState(Stack[-1])
0x5f3: Pop(1)
0x5f4: Push("all")
0x5f5: Push("attack_end")
0x5f6: Pop(1); Push(Stack[-1] + Stack[-6]);
0x5f7: @ PlayAnimation(Stack[-2], Stack[-1])
0x5f8: Pop(2)
0x5f9: PushEmpty(bool)
0x5fa: Call2 0x6dd

0x5fb: Pop(0)
0x5fc: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x5fd: PushEmpty(bool, float)
0x5fe: Stack[-1] = (float) 0.75
0x5ff: Call2 0x605

0x600: Pop(2)
0x601: @ StopAsync()
0x602: Pop(0)
0x603: Stack[-10] = (bool) 1
0x604: Return(); Pop(8)

0x605: PushEmpty(float, bool, float, bool)
0x606: @ rand(Stack[-2])
0x607: Pop(0)
0x608: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x609: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x60a: @ IsAnimationPlaying(Stack[-1])
0x60b: Pop(0)
0x60c: Pop(0); Push((bool) Stack[-1] == 0)
0x60d: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60e: GOTO 0x618

0x60f: PushEmpty(bool)
0x610: Call2 0x667

0x611: Pop(0)
0x612: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x613: Stack[-6] = (bool) 1
0x614: Return(); Pop(4)

0x615: @ sync()
0x616: Pop(0)
0x617: GOTO 0x60a

0x618: GOTO 0x61e

0x619: @ WaitForAnimEnd()
0x61a: Pop(0)
0x61b: PushEmpty()
0x61c: Call2 0x6cf

0x61d: Pop(0)
0x61e: Stack[-6] = (bool) 0
0x61f: Return(); Pop(4)

0x620: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x621: @ IsAnimationPlaying(Stack[-5])
0x622: Pop(0)
0x623: Pop(0); Push((bool) Stack[-5] == 0)
0x624: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x625: GOTO 0x646

0x626: PushEmpty(bool)
0x627: Call2 0x667

0x628: Pop(0)
0x629: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x62a: Stack[-12] = (bool) 1
0x62b: Return(); Pop(10)

0x62c: PushEmpty(bool, object)
0x62d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62e: Call2 0x89b

0x62f: Pop(1)
0x630: Pop(1); Push((bool) Stack[-1] == 0)
0x631: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x632: Stack[-12] = (bool) 0
0x633: Return(); Pop(10)

0x634: @@ GetPFPosition(Stack[-4])
0x635: Pop(0)
0x636: @ GetPFPosition(Stack[-3])
0x637: Pop(0)
0x638: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x639: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x63a: Pop(0); Push(Stack[-11] * Stack[-11]);
0x63b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63d: PushEmpty(bool, float)
0x63e: Stack[-1] = Stack[-13]
0x63f: Call2 0x57c

0x640: Pop(2)
0x641: Stack[-12] = (bool) 1
0x642: Return(); Pop(10)

0x643: @ sync()
0x644: Pop(0)
0x645: GOTO 0x621

0x646: PushEmpty()
0x647: Call2 0x6cf

0x648: Pop(0)
0x649: Stack[-12] = (bool) 0
0x64a: Return(); Pop(10)

0x64b: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x64c: PushEmpty(bool, object)
0x64d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64e: Call2 0x89b

0x64f: Pop(1)
0x650: Pop(1); Push((bool) Stack[-1] == 0)
0x651: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x652: Stack[-11] = (bool) 0
0x653: Return(); Pop(10)

0x654: PushEmpty(bool)
0x655: Call2 0x6a4

0x656: Pop(0)
0x657: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x658: @@ GetPFPosition(Stack[-5])
0x659: Pop(0)
0x65a: @ GetPFPosition(Stack[-4])
0x65b: Pop(0)
0x65c: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x65d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x65e: @@ GetAttackDistance(Stack[-1])
0x65f: Pop(0)
0x660: Push((int) 50)
0x661: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x662: Pop(0); Push(Stack[-1] * Stack[-1]);
0x663: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x664: Return(); Pop(10)

0x665: Stack[-11] = (bool) 0
0x666: Return(); Pop(10)

0x667: PushEmpty(bool)
0x668: Stack[-1] = (bool) 0
0x669: PushEmpty(bool)
0x66a: Call2 0x64b

0x66b: Pop(0)
0x66c: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x66d: PushEmpty(bool)
0x66e: Call2 0x677

0x66f: Pop(0)
0x670: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x671: Stack[-1] = (bool) 1
0x672: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x673: Stack[-1] = (bool) 1
0x674: Return(); Pop(0)

0x675: Stack[-1] = (bool) 0
0x676: Return(); Pop(0)

0x677: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x678: @ GetScene(Stack[-5])
0x679: Pop(0)
0x67a: Stack[-4] = (bool) 0
0x67b: PushEmpty(cvector, object)
0x67c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x67d: Call2 0x809

0x67e: Pop(1)
0x67f: Pop(1); Push(( -Stack[-1])
0x680: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x681: Pop(1)
0x682: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x683: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x684: GOTO 0x6a1

0x685: @ Face(Stack[-0])
0x686: Pop(0)
0x687: Push("all")
0x688: Push("bjump")
0x689: @ PlayAnimation(Stack[-2], Stack[-1])
0x68a: Pop(2)
0x68b: @@ GetPFPosition(Stack[-2])
0x68c: Pop(0)
0x68d: @ GetPFPosition(Stack[-1])
0x68e: Pop(0)
0x68f: @ WaitForAnimEnd()
0x690: Pop(0)
0x691: PushEmpty()
0x692: Call2 0x6cf

0x693: Pop(0)
0x694: @ StopAsync()
0x695: Pop(0)
0x696: Push(CVector(0.0, 0.0, 0.0))
0x697: @ SetSpeed(Stack[-1])
0x698: Pop(1)
0x699: Stack[-4] = (bool) 1
0x69a: PushEmpty(bool)
0x69b: Call2 0x64b

0x69c: Pop(0)
0x69d: Pop(1); Push((bool) Stack[-1] == 0)
0x69e: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69f: GOTO 0x6a1

0x6a0: GOTO 0x67b

0x6a1: Stack[-11] = Stack[-4]
0x6a2: Return(); Pop(10)

0x6a3: Stack[-5] = 0
0x6a4: PushEmpty(bool, bool)
0x6a5: Push("IsAttacking")
0x6a6: Push((int) 1)
0x6a7: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x6a8: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6a9: @@ IsAttacking(Stack[-1])
0x6aa: Pop(0)
0x6ab: Stack[-3] = Stack[-1]
0x6ac: Return(); Pop(2)

0x6ad: Stack[-3] = (bool) 0
0x6ae: Return(); Pop(2)

0x6af: PushEmpty(float, int, float, int)
0x6b0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b2: Return(); Pop(4)

0x6b3: Push( Stack[5 + Tasks[-1].StackPointer] )
0x6b4: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b5: Push((int) -1)
0x6b6: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x6b7: Push((int) 0)
0x6b8: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6ba: Return(); Pop(4)

0x6bb: @ rand(Stack[-2])
0x6bc: Pop(0)
0x6bd: PushEmpty(float)
0x6be: Call2 0x6e1

0x6bf: Pop(0)
0x6c0: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x6c1: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6c2: @ irand(Stack[-1], Stack[-2])
0x6c3: Pop(0)
0x6c4: Push((int) 1)
0x6c5: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6c6: Push("attack")
0x6c7: Pop(1); Push(Stack[-1] + Stack[-2]);
0x6c8: @ Speak(Stack[-1])
0x6c9: Pop(1)
0x6ca: PushEmpty(int)
0x6cb: Call2 0x6df

0x6cc: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x6cd: Pop(1)
0x6ce: Return(); Pop(4)

0x6cf: PushEmpty(object)
0x6d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d1: Call2 0xaeb

0x6d2: Pop(1)
0x6d3: Return(); Pop(0)

0x6d4: Stack[-1] = (int) 0
0x6d5: Return(); Pop(0)

0x6d6: PushEmpty(string)
0x6d7: Stack[-1] = "attack_stay"
0x6d8: Call2 0xa1b

0x6d9: Pop(1)
0x6da: Return(); Pop(0)

0x6db: PushEmpty()
0x6dc: Return(); Pop(0)

0x6dd: Stack[-1] = (bool) 1
0x6de: Return(); Pop(0)

0x6df: Stack[-1] = (int) 1
0x6e0: Return(); Pop(0)

0x6e1: Stack[-1] = (float) 0.5
0x6e2: Return(); Pop(0)

0x6e3: PushEmpty(object, object)
0x6e4: PushEmpty(bool, object)
0x6e5: Stack[-1] = Stack[-5]
0x6e6: Call2 0x818

0x6e7: Pop(1)
0x6e8: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6e9: @ GetScene(Stack[-1])
0x6ea: Pop(0)
0x6eb: PushEmpty(object)
0x6ec: Call2 0xa9b

0x6ed: Pop(0)
0x6ee: @@ RemoveStationaryActor(Stack[-1])
0x6ef: Pop(1)
0x6f0: Stack[-1] = 0
0x6f1: PushEmpty(object)
0x6f2: Stack[-1] = Stack[-4]
0x6f3: Call2 0x6f6

0x6f4: Pop(1)
0x6f5: Return(); Pop(2)

0x6f6: PushEmpty(bool, bool)
0x6f7: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6f8: Pop(0)
0x6f9: Push(Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fb: PushEmpty()
0x6fc: Call2 0xb94

0x6fd: Pop(0)
0x6fe: GOTO 0x702

0x6ff: PushEmpty()
0x700: Call2 0xc13

0x701: Pop(0)
0x702: PushEmpty()
0x703: Call2 0xb7c

0x704: Pop(0)
0x705: PushEmpty(object)
0x706: Stack[-1] = Stack[-4]
0x707: Call2 0x70a

0x708: Pop(1)
0x709: Return(); Pop(2)

0x70a: PushEmpty()
0x70b: EventDisable(0)
0x70c: PushEmpty(object)
0x70d: Stack[-1] = Stack[-2]
0x70e: Call2 0x723

0x70f: Pop(1)
0x710: Push((int) 50)
0x711: Push((int) 40)
0x712: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x713: Pop(2)
0x714: EventEnable(0)
0x715: @ Hold()
0x716: Pop(0)
0x717: GOTO 0x715

0x718: Return(); Pop(0)

0x719: PushEmpty(bool, bool)
0x71a: @ IsOverrideActive(Stack[-1])
0x71b: Pop(0)
0x71c: Pop(0); Push((bool) Stack[-1] == 0)
0x71d: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x71e: PushEmpty(object)
0x71f: Stack[-1] = Stack[-4]
0x720: Call2 0xb3f

0x721: Pop(1)
0x722: Return(); Pop(2)

0x723: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x724: Pop(0); Push((bool) Stack[-21] == 0)
0x725: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x726: PushEmpty(string)
0x727: Stack[-1] = "fdie"
0x728: Call2 0x77e

0x729: Pop(1)
0x72a: GOTO 0x77d

0x72b: @@ GetPosition(Stack[-10])
0x72c: Pop(0)
0x72d: @ GetPosition(Stack[-9])
0x72e: Pop(0)
0x72f: @ GetDirection(Stack[-8])
0x730: Pop(0)
0x731: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x732: Push(CvectorIndex(Stack[-7], 0))
0x733: Push(CvectorIndex(Stack[-9], 0))
0x734: Pop(2); Push(Stack[-2] * Stack[-1]);
0x735: Push(CvectorIndex(Stack[-8], 2))
0x736: Push(CvectorIndex(Stack[-10], 2))
0x737: Pop(2); Push(Stack[-2] * Stack[-1]);
0x738: Pop(2); Push(Stack[-2] + Stack[-1]);
0x739: Push((int) 0)
0x73a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x73b: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73c: Stack[-6] = "fdie"
0x73d: GOTO 0x73f

0x73e: Stack[-6] = "bdie"
0x73f: @ RemoveRTEnvelope()
0x740: Pop(0)
0x741: @ SetDeathState()
0x742: Pop(0)
0x743: @ Stop()
0x744: Pop(0)
0x745: @ StopAsync()
0x746: Pop(0)
0x747: Stack[-5] = Stack[-21]
0x748: Push("GetScriptProperty")
0x749: Push((int) 2)
0x74a: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x74b: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x74c: Push("Owner")
0x74d: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x74e: Pop(1)
0x74f: Push(Stack[-4])
0x750: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x751: Push("Owner")
0x752: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x753: Pop(1)
0x754: Pop(0); Push((bool) Stack[-5] == 0)
0x755: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x756: Stack[-5] = Stack[-21]
0x757: Push("@GetEyesHeight")
0x758: Push((int) 1)
0x759: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x75a: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x75b: @@ GetEyesHeight(Stack[-2])
0x75c: Pop(0)
0x75d: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x75e: Push(CvectorIndex(Stack[-1], 1))
0x75f: Stack[-1] = Stack[-3]
0x760: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x761: Push("head")
0x762: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x763: Pop(1)
0x764: Stack[-3] = (bool) 1
0x765: GOTO 0x767

0x766: Stack[-3] = (bool) 0
0x767: PushEmpty(string)
0x768: Stack[-1] = Stack[-7]
0x769: Call2 0xa1b

0x76a: Pop(1)
0x76b: Push("all")
0x76c: @ PlayAnimation(Stack[-1], Stack[-7])
0x76d: Pop(1)
0x76e: @ WaitForAnimEnd()
0x76f: Pop(0)
0x770: Push(Stack[-3])
0x771: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x772: @ StopAsync()
0x773: Pop(0)
0x774: Push("head")
0x775: @ UnlookAsync(Stack[-1])
0x776: Pop(1)
0x777: Push("all")
0x778: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x779: Pop(1)
0x77a: @ RemoveEnvelope()
0x77b: Pop(0)
0x77c: Stack[-5] = 0
0x77d: Return(); Pop(20)

0x77e: PushEmpty()
0x77f: @ RemoveRTEnvelope()
0x780: Pop(0)
0x781: @ SetDeathState()
0x782: Pop(0)
0x783: @ Stop()
0x784: Pop(0)
0x785: @ StopAsync()
0x786: Pop(0)
0x787: @ StopSecondaryAnimation()
0x788: Pop(0)
0x789: PushEmpty(string)
0x78a: Stack[-1] = Stack[-2]
0x78b: Call2 0xa1b

0x78c: Pop(1)
0x78d: Push("all")
0x78e: @ PlayAnimation(Stack[-1], Stack[-2])
0x78f: Pop(1)
0x790: @ WaitForAnimEnd()
0x791: Pop(0)
0x792: Push("all")
0x793: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x794: Pop(1)
0x795: @ RemoveEnvelope()
0x796: Pop(0)
0x797: Return(); Pop(0)

0x798: PushEmpty()
0x799: Return(); Pop(0)

0x79a: PushEmpty()
0x79b: Return(); Pop(0)

0x79c: PushEmpty()
0x79d: Return(); Pop(0)

0x79e: PushEmpty()
0x79f: PushEmpty(object)
0x7a0: Stack[-1] = Stack[-2]
0x7a1: Call2 0x931

0x7a2: Pop(1)
0x7a3: Push("all")
0x7a4: Push("hunt")
0x7a5: @ PlayAnimation(Stack[-2], Stack[-1])
0x7a6: Pop(2)
0x7a7: @ WaitForAnimEnd()
0x7a8: Pop(0)
0x7a9: Return(); Pop(0)

0x7aa: @ StopAnimation()
0x7ab: Pop(0)
0x7ac: @ StopAsync()
0x7ad: Pop(0)
0x7ae: Return(); Pop(0)

0x7af: PushEmpty()
0x7b0: PushEmpty()
0x7b1: Call2 0x7aa

0x7b2: Pop(0)
0x7b3: PushEmpty(object)
0x7b4: Stack[-1] = Stack[-2]
0x7b5: Call2 0xdc1

0x7b6: Pop(1)
0x7b7: Return(); Pop(0)

0x7b8: PushEmpty()
0x7b9: PushEmpty(bool, object)
0x7ba: Stack[-1] = Stack[-3]
0x7bb: Call2 0xd48

0x7bc: Pop(1)
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7be: PushEmpty()
0x7bf: Call2 0x7aa

0x7c0: Pop(0)
0x7c1: PushEmpty(object)
0x7c2: Stack[-1] = Stack[-2]
0x7c3: Call2 0xd4f

0x7c4: Pop(1)
0x7c5: Return(); Pop(0)

0x7c6: PushEmpty()
0x7c7: PushEmpty(bool, object)
0x7c8: Stack[-1] = Stack[-3]
0x7c9: Call2 0xd3b

0x7ca: Pop(1)
0x7cb: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7cc: PushEmpty(bool, object)
0x7cd: Stack[-1] = Stack[-3]
0x7ce: Call2 0x818

0x7cf: Pop(1)
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7d1: Return(); Pop(0)

0x7d2: PushEmpty()
0x7d3: Call2 0x7aa

0x7d4: Pop(0)
0x7d5: PushEmpty(object)
0x7d6: Stack[-1] = Stack[-2]
0x7d7: Call2 0xd42

0x7d8: Pop(1)
0x7d9: Return(); Pop(0)

0x7da: PushEmpty()
0x7db: PushEmpty(bool, object)
0x7dc: Stack[-1] = Stack[-3]
0x7dd: Call2 0x89b

0x7de: Pop(1)
0x7df: Pop(1); Push((bool) Stack[-1] == 0)
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e1: PushEmpty(object)
0x7e2: Stack[-1] = Stack[-2]
0x7e3: Call2 0xd60

0x7e4: Pop(1)
0x7e5: Return(); Pop(0)

0x7e6: PushEmpty()
0x7e7: Call2 0x7aa

0x7e8: Pop(0)
0x7e9: PushEmpty(object)
0x7ea: Stack[-1] = Stack[-2]
0x7eb: Call2 0xd78

0x7ec: Pop(1)
0x7ed: Return(); Pop(0)

0x7ee: PushEmpty()
0x7ef: PushEmpty(bool, object, object, bool)
0x7f0: Stack[-3] = Stack[-7]
0x7f1: Stack[-2] = Stack[-6]
0x7f2: Stack[-1] = Stack[-5]
0x7f3: Call2 0xdc7

0x7f4: Pop(3)
0x7f5: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f6: PushEmpty(object)
0x7f7: Stack[-1] = Stack[-4]
0x7f8: Call2 0x7da

0x7f9: Pop(1)
0x7fa: Return(); Pop(0)

0x7fb: PushEmpty()
0x7fc: Push((int) 2)
0x7fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7fe: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7ff: Stack[-2] = "fire"
0x800: Return(); Pop(0)

0x801: GOTO 0x807

0x802: Push((int) 1)
0x803: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x804: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x805: Stack[-2] = "bullet"
0x806: Return(); Pop(0)

0x807: Stack[-2] = "phys"
0x808: Return(); Pop(0)

0x809: PushEmpty(cvector, cvector, cvector, cvector)
0x80a: @ GetPosition(Stack[-2])
0x80b: Pop(0)
0x80c: @@ GetPosition(Stack[-1])
0x80d: Pop(0)
0x80e: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x80f: Return(); Pop(4)

0x810: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x811: @ GetPosition(Stack[-3])
0x812: Pop(0)
0x813: @@ GetPosition(Stack[-2])
0x814: Pop(0)
0x815: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x816: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x817: Return(); Pop(6)

0x818: PushEmpty(bool, bool)
0x819: @ IsPlayerActor(Stack[-3], Stack[-1])
0x81a: Pop(0)
0x81b: Stack[-4] = Stack[-1]
0x81c: Return(); Pop(2)

0x81d: PushEmpty(bool, bool)
0x81e: Push("HasProperty")
0x81f: Push((int) 2)
0x820: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x821: Pop(1); Push((bool) Stack[-1] == 0)
0x822: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x823: Stack[-5] = (bool) 0
0x824: Return(); Pop(2)

0x825: @@ HasProperty(Stack[-3], Stack[-1])
0x826: Pop(0)
0x827: Stack[-5] = Stack[-1]
0x828: Return(); Pop(2)

0x829: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x82a: PushEmpty(bool, object, string)
0x82b: Stack[-2] = Stack[-18]
0x82c: Stack[-1] = "health"
0x82d: Call2 0x81d

0x82e: Pop(2)
0x82f: Pop(1); Push((bool) Stack[-1] == 0)
0x830: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x831: Stack[-16] = (float) 0.0
0x832: Return(); Pop(12)

0x833: PushEmpty(bool, object, string)
0x834: Stack[-2] = Stack[-18]
0x835: Stack[-1] = "armor"
0x836: Call2 0x81d

0x837: Pop(2)
0x838: Pop(1); Push((bool) Stack[-1] == 0)
0x839: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x83a: Stack[-6] = (int) 0
0x83b: GOTO 0x83f

0x83c: Push("armor")
0x83d: @@ GetProperty(Stack[-1], Stack[-7])
0x83e: Pop(1)
0x83f: Push("armor_")
0x840: PushEmpty(string, int)
0x841: Stack[-1] = Stack[-16]
0x842: Call2 0x7fb

0x843: Pop(1)
0x844: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x845: PushEmpty(bool, object, string)
0x846: Stack[-2] = Stack[-18]
0x847: Stack[-1] = Stack[-8]
0x848: Call2 0x81d

0x849: Pop(2)
0x84a: Pop(1); Push((bool) Stack[-1] == 0)
0x84b: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x84c: Stack[-4] = (int) 0
0x84d: GOTO 0x850

0x84e: @@ GetProperty(Stack[-5], Stack[-4])
0x84f: Pop(0)
0x850: PushEmpty(float, float, float)
0x851: Pop(0); Push(Stack[-9] + Stack[-7]);
0x852: Push((float)100.0)
0x853: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x854: Stack[-1] = (int) 1
0x855: Call2 0xaaf

0x856: Stack[-6] = Stack[-3]
0x857: Pop(3)
0x858: Push("health")
0x859: @@ GetProperty(Stack[-1], Stack[-3])
0x85a: Pop(1)
0x85b: Push((int) 1)
0x85c: Pop(1); Push(Stack[-1] - Stack[-4]);
0x85d: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x85e: Push("health")
0x85f: PushEmpty(float, float, float, float)
0x860: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x861: Stack[-2] = (int) 0
0x862: Stack[-1] = (int) 1
0x863: Call2 0xab6

0x864: Pop(3)
0x865: @@ SetProperty(Stack[-2], Stack[-1])
0x866: Pop(2)
0x867: PushEmpty(bool, object)
0x868: Stack[-1] = Stack[-17]
0x869: Call2 0x818

0x86a: Pop(1)
0x86b: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x86c: PushEmpty(float)
0x86d: Stack[-1] = -Stack[-2]; Pop(0);
0x86e: Call2 0xad1

0x86f: Pop(1)
0x870: Stack[-16] = Stack[-1]
0x871: Return(); Pop(12)

0x872: PushEmpty(bool, bool)
0x873: @@ IsDead(Stack[-1])
0x874: Pop(0)
0x875: Stack[-4] = Stack[-1]
0x876: Return(); Pop(2)

0x877: PushEmpty(object, object, object, object)
0x878: Pop(0); Push((bool) Stack[-5] == 0)
0x879: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x87a: Stack[-6] = (bool) 0
0x87b: Return(); Pop(4)

0x87c: PushEmpty(bool)
0x87d: Stack[-1] = (bool) 0
0x87e: Push("IsDead")
0x87f: Push((int) 1)
0x880: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x881: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x882: PushEmpty(bool, object)
0x883: Stack[-1] = Stack[-8]
0x884: Call2 0x872

0x885: Pop(1)
0x886: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x887: Stack[-1] = (bool) 1
0x888: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x889: Stack[-6] = (bool) 0
0x88a: Return(); Pop(4)

0x88b: @ GetScene(Stack[-2])
0x88c: Pop(0)
0x88d: Pop(0); Push((bool) Stack[-2] == 0)
0x88e: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x88f: Stack[-6] = (bool) 0
0x890: Return(); Pop(4)

0x891: @@ GetScene(Stack[-1])
0x892: Pop(0)
0x893: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x895: Stack[-6] = (bool) 0
0x896: Return(); Pop(4)

0x897: Stack[-6] = (bool) 1
0x898: Return(); Pop(4)

0x899: Stack[-1] = 0
0x89a: Stack[-2] = 0
0x89b: PushEmpty(int, int)
0x89c: PushEmpty(bool, object)
0x89d: Stack[-1] = Stack[-5]
0x89e: Call2 0x877

0x89f: Pop(1)
0x8a0: Pop(1); Push((bool) Stack[-1] == 0)
0x8a1: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x8a2: Stack[-4] = (bool) 0
0x8a3: Return(); Pop(2)

0x8a4: PushEmpty(bool, object, string)
0x8a5: Stack[-2] = Stack[-6]
0x8a6: Stack[-1] = "noaccess"
0x8a7: Call2 0x81d

0x8a8: Pop(2)
0x8a9: Pop(1); Push((bool) Stack[-1] == 0)
0x8aa: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8ab: Stack[-4] = (bool) 1
0x8ac: Return(); Pop(2)

0x8ad: Push("noaccess")
0x8ae: @@ GetProperty(Stack[-1], Stack[-2])
0x8af: Pop(1)
0x8b0: Push((int) 0)
0x8b1: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x8b2: Return(); Pop(2)

0x8b3: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x8b4: Pop(0); Push((bool) Stack[-15] == 0)
0x8b5: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b6: Return(); Pop(14)

0x8b7: @ IsDead(Stack[-7])
0x8b8: Pop(0)
0x8b9: Push(Stack[-7])
0x8ba: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8bb: Return(); Pop(14)

0x8bc: @ GetSecondaryAnimationType(Stack[-6])
0x8bd: Pop(0)
0x8be: Push((int) 0)
0x8bf: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x8c0: IF (Stack[-1] == 0) GOTO 0x8c2; Pop(1)

0x8c1: Return(); Pop(14)

0x8c2: @@ GetPosition(Stack[-5])
0x8c3: Pop(0)
0x8c4: @ GetPosition(Stack[-4])
0x8c5: Pop(0)
0x8c6: @ GetDirection(Stack[-3])
0x8c7: Pop(0)
0x8c8: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x8c9: Push(CvectorIndex(Stack[-2], 0))
0x8ca: Push(CvectorIndex(Stack[-4], 0))
0x8cb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8cc: Push(CvectorIndex(Stack[-3], 2))
0x8cd: Push(CvectorIndex(Stack[-5], 2))
0x8ce: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8cf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8d0: Push((int) 0)
0x8d1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8d3: Stack[-1] = "fhit"
0x8d4: GOTO 0x8d6

0x8d5: Stack[-1] = "bhit"
0x8d6: Push("hit_react")
0x8d7: Push("1")
0x8d8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x8d9: Push("2")
0x8da: Pop(1); Push(Stack[-4] + Stack[-1]);
0x8db: Push((int) -10)
0x8dc: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8dd: Pop(4)
0x8de: Return(); Pop(14)

0x8df: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x8e0: PushEmpty(bool)
0x8e1: Stack[-1] = (bool) 0
0x8e2: PushEmpty(bool)
0x8e3: Stack[-1] = (bool) 0
0x8e4: Push(Stack[-23])
0x8e5: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e6: Push((int) 4)
0x8e7: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x8e8: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e9: Stack[-1] = (bool) 1
0x8ea: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8eb: Push((int) 5)
0x8ec: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x8ed: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8ee: Stack[-1] = (bool) 1
0x8ef: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x8f0: PushEmpty(cvector, cvector)
0x8f1: PushEmpty(cvector, object)
0x8f2: Stack[-1] = Stack[-25]
0x8f3: Call2 0x809

0x8f4: Stack[-3] = Stack[-2]
0x8f5: Pop(2)
0x8f6: Call2 0xaa1

0x8f7: Stack[-11] = Stack[-2]
0x8f8: Pop(2)
0x8f9: @ CreateVectorVector(Stack[-8])
0x8fa: Pop(0)
0x8fb: Stack[-7] = (int) 1
0x8fc: Push("hit")
0x8fd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8fe: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x8ff: Pop(1)
0x900: Pop(0); Push((bool) Stack[-6] == 0)
0x901: IF (Stack[-1] == 0) GOTO 0x903; Pop(1)

0x902: GOTO 0x90c

0x903: Pop(0); Push(Stack[-4] | Stack[-9]);
0x904: Push((float)0.70711)
0x905: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x906: IF (Stack[-1] == 0) GOTO 0x909; Pop(1)

0x907: @@ add(Stack[-5])
0x908: Pop(0)
0x909: Push((int) 1)
0x90a: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x90b: GOTO 0x8fc

0x90c: @@ size(Stack[-3])
0x90d: Pop(0)
0x90e: Push(Stack[-3])
0x90f: IF (Stack[-1] == 0) GOTO 0x91d; Pop(1)

0x910: @ irand(Stack[-2], Stack[-3])
0x911: Pop(0)
0x912: @@ get(Stack[-1], Stack[-2])
0x913: Pop(0)
0x914: PushEmpty(object, int, float, cvector, cvector)
0x915: Stack[-5] = Stack[-26]
0x916: Stack[-4] = Stack[-25]
0x917: Stack[-3] = Stack[-24]
0x918: Stack[-2] = Stack[-6]
0x919: Stack[-1] = -Stack[-14]; Pop(0);
0x91a: Call2 0x923

0x91b: Pop(5)
0x91c: Return(); Pop(18)

0x91d: Stack[-8] = 0
0x91e: PushEmpty(object)
0x91f: Stack[-1] = Stack[-22]
0x920: Call2 0x8b3

0x921: Pop(1)
0x922: Return(); Pop(18)

0x923: PushEmpty(object, object, object, object)
0x924: @ GetScene(Stack[-2])
0x925: Pop(0)
0x926: Push("scripted")
0x927: Push("blood_dir.xml")
0x928: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x929: Pop(2)
0x92a: PushEmpty(object)
0x92b: Stack[-1] = Stack[-10]
0x92c: Call2 0x8b3

0x92d: Pop(1)
0x92e: Return(); Pop(4)

0x92f: Stack[-1] = 0
0x930: Stack[-2] = 0
0x931: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x932: @@ GetPosition(Stack[-3])
0x933: Pop(0)
0x934: @ GetPosition(Stack[-2])
0x935: Pop(0)
0x936: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x937: Push(CvectorIndex(Stack[-1], 0))
0x938: Push(CvectorIndex(Stack[-2], 2))
0x939: @ RotateAsync(Stack[-2], Stack[-1])
0x93a: Pop(2)
0x93b: Return(); Pop(6)

0x93c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x93d: @@ GetPosition(Stack[-8])
0x93e: Pop(0)
0x93f: @@ GetEyesHeight(Stack[-9])
0x940: Pop(0)
0x941: Push(CvectorIndex(Stack[-8], 1))
0x942: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x943: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x944: @ GetPosition(Stack[-7])
0x945: Pop(0)
0x946: @ GetEyesHeight(Stack[-9])
0x947: Pop(0)
0x948: Push(CvectorIndex(Stack[-7], 1))
0x949: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x94a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x94b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x94c: Push(CvectorIndex(Stack[-6], 1))
0x94d: Stack[-1] = (int) 0
0x94e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x94f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x950: Pop(1); Push(Sqrt(Stack[-1]))
0x951: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x952: Stack[-5] = -Stack[-6]; Pop(0);
0x953: Pop(0); Push(Stack[-6] * Stack[-19]);
0x954: PushEmpty(cvector, cvector)
0x955: Push(CVector(0.0, 1.0, 0.0))
0x956: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x957: Call2 0xaa1

0x958: Pop(1)
0x959: Push((int) 25)
0x95a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x95b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x95c: Push(CVector(0.0, 10.0, 0.0))
0x95d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x95e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x95f: @ IsOverrideActive(Stack[-2])
0x960: Pop(0)
0x961: Push(Stack[-2])
0x962: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x963: Stack[-21] = (bool) 0
0x964: Return(); Pop(18)

0x965: @ StopWorld()
0x966: Pop(0)
0x967: Push((bool) 1)
0x968: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x969: Pop(1)
0x96a: Push(CvectorIndex(Stack[-4], 0))
0x96b: Push(CvectorIndex(Stack[-5], 2))
0x96c: @ Rotate(Stack[-2], Stack[-1])
0x96d: Pop(2)
0x96e: PushEmpty(bool)
0x96f: Call2 0xde9

0x970: Pop(0)
0x971: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x972: GOTO 0x97b

0x973: Push("head")
0x974: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x975: Pop(1)
0x976: Push(Stack[-1])
0x977: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x978: Push("head")
0x979: @ LookAsyncCamera(Stack[-1])
0x97a: Pop(1)
0x97b: @ CameraWaitForPlayFinish()
0x97c: Pop(0)
0x97d: @ ResumeWorld()
0x97e: Pop(0)
0x97f: Stack[-21] = (bool) 1
0x980: Return(); Pop(18)

0x981: PushEmpty(bool, bool)
0x982: Push((bool) 1)
0x983: @ CameraSwitchToNormal(Stack[-1])
0x984: Pop(1)
0x985: PushEmpty(bool)
0x986: Call2 0xde9

0x987: Pop(0)
0x988: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x989: GOTO 0x992

0x98a: Push("head")
0x98b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x98c: Pop(1)
0x98d: Push(Stack[-1])
0x98e: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x98f: Push("head")
0x990: @ UnlookAsync(Stack[-1])
0x991: Pop(1)
0x992: Return(); Pop(2)

0x993: PushEmpty()
0x994: PushEmpty(bool, object, float)
0x995: Stack[-2] = Stack[-4]
0x996: Stack[-1] = (int) 70
0x997: Call2 0x99b

0x998: Stack[-5] = Stack[-3]
0x999: Pop(3)
0x99a: Return(); Pop(0)

0x99b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x99c: @@ GetPosition(Stack[-7])
0x99d: Pop(0)
0x99e: @@ GetEyesHeight(Stack[-8])
0x99f: Pop(0)
0x9a0: Push(CvectorIndex(Stack[-7], 1))
0x9a1: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x9a2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x9a3: @ GetPosition(Stack[-6])
0x9a4: Pop(0)
0x9a5: @ GetEyesHeight(Stack[-8])
0x9a6: Pop(0)
0x9a7: Push(CvectorIndex(Stack[-6], 1))
0x9a8: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x9a9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x9aa: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x9ab: Push(CvectorIndex(Stack[-5], 1))
0x9ac: Stack[-1] = (int) 0
0x9ad: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x9ae: Pop(0); Push(Stack[-5] | Stack[-5]);
0x9af: Pop(1); Push(Sqrt(Stack[-1]))
0x9b0: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x9b1: Stack[-4] = -Stack[-5]; Pop(0);
0x9b2: Pop(0); Push(Stack[-5] * Stack[-17]);
0x9b3: Push(CVector(0.0, 10.0, 0.0))
0x9b4: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x9b5: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x9b6: @ IsOverrideActive(Stack[-1])
0x9b7: Pop(0)
0x9b8: Push(Stack[-1])
0x9b9: IF (Stack[-1] == 0) GOTO 0x9bc; Pop(1)

0x9ba: Stack[-19] = (bool) 0
0x9bb: Return(); Pop(16)

0x9bc: @ StopWorld()
0x9bd: Pop(0)
0x9be: Push((bool) 1)
0x9bf: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0x9c0: Pop(1)
0x9c1: Push(CvectorIndex(Stack[-3], 0))
0x9c2: Push(CvectorIndex(Stack[-4], 2))
0x9c3: @ Rotate(Stack[-2], Stack[-1])
0x9c4: Pop(2)
0x9c5: @ CameraWaitForPlayFinish()
0x9c6: Pop(0)
0x9c7: @ ResumeWorld()
0x9c8: Pop(0)
0x9c9: Stack[-19] = (bool) 1
0x9ca: Return(); Pop(16)

0x9cb: PushEmpty()
0x9cc: Push((bool) 1)
0x9cd: @ CameraSwitchToNormal(Stack[-1])
0x9ce: Pop(1)
0x9cf: Return(); Pop(0)

0x9d0: PushEmpty(bool, float, float, bool, float, float)
0x9d1: @ lshHasAnimation(Stack[-3], Stack[-7])
0x9d2: Pop(0)
0x9d3: Push(Stack[-3])
0x9d4: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9d5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x9d6: Pop(0)
0x9d7: Push((bool) 0)
0x9d8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9d9: Pop(1)
0x9da: GOTO 0x9df

0x9db: Push("Can't find lsh animation : ")
0x9dc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x9dd: @ Trace(Stack[-1])
0x9de: Pop(1)
0x9df: Return(); Pop(6)

0x9e0: PushEmpty(bool, float, float, bool, float, float)
0x9e1: @ lshHasAnimation(Stack[-3], Stack[-8])
0x9e2: Pop(0)
0x9e3: Push(Stack[-3])
0x9e4: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x9e6: Pop(0)
0x9e7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x9e8: Pop(0)
0x9e9: GOTO 0x9ee

0x9ea: Push("Can't find lsh animation : ")
0x9eb: Pop(1); Push(Stack[-1] + Stack[-9]);
0x9ec: @ Trace(Stack[-1])
0x9ed: Pop(1)
0x9ee: Return(); Pop(6)

0x9ef: PushEmpty(float, cvector, float, cvector)
0x9f0: @@ GetEyesHeight(Stack[-2])
0x9f1: Pop(0)
0x9f2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x9f3: Push(CvectorIndex(Stack[-1], 1))
0x9f4: Stack[-1] = Stack[-3]
0x9f5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x9f6: Push("head")
0x9f7: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x9f8: Pop(1)
0x9f9: Return(); Pop(4)

0x9fa: PushEmpty(bool)
0x9fb: Call2 0xde9

0x9fc: Pop(0)
0x9fd: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9fe: @ lshStopSpeech()
0x9ff: Pop(0)
0xa00: Return(); Pop(0)

0xa01: PushEmpty(bool, bool)
0xa02: PushEmpty(bool, int, int)
0xa03: Stack[-2] = Stack[-7]
0xa04: Stack[-1] = Stack[-6]
0xa05: Call2 0xac1

0xa06: Pop(2)
0xa07: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0xa08: Push((int) 0)
0xa09: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xa0a: Pop(1)
0xa0b: Return(); Pop(2)

0xa0c: PushEmpty(int, bool, int, bool)
0xa0d: PushEmpty(bool, int, int)
0xa0e: Stack[-2] = Stack[-10]
0xa0f: Stack[-1] = Stack[-9]
0xa10: Call2 0xac1

0xa11: Pop(2)
0xa12: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa13: @ irand(Stack[-2], Stack[-5])
0xa14: Pop(0)
0xa15: Push((int) 0)
0xa16: Push((int) 1)
0xa17: Pop(1); Push(Stack[-4] + Stack[-1]);
0xa18: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xa19: Pop(2)
0xa1a: Return(); Pop(4)

0xa1b: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xa1c: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xa1d: Pop(0)
0xa1e: Pop(0); Push((bool) Stack[-8] == 0)
0xa1f: IF (Stack[-1] == 0) GOTO 0xa34; Pop(1)

0xa20: Stack[-7] = (int) 0
0xa21: Push((int) 1)
0xa22: Pop(1); Push(Stack[-8] + Stack[-1]);
0xa23: Pop(1); Push(Stack[-18] + Stack[-1]);
0xa24: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xa25: Pop(1)
0xa26: Pop(0); Push((bool) Stack[-6] == 0)
0xa27: IF (Stack[-1] == 0) GOTO 0xa29; Pop(1)

0xa28: GOTO 0xa2c

0xa29: Push((int) 1)
0xa2a: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xa2b: GOTO 0xa21

0xa2c: Pop(0); Push((bool) Stack[-7] == 0)
0xa2d: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa2e: Return(); Pop(16)

0xa2f: @ irand(Stack[-5], Stack[-7])
0xa30: Pop(0)
0xa31: Push((int) 1)
0xa32: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa33: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xa34: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xa35: Pop(0)
0xa36: Push(Stack[-4])
0xa37: IF (Stack[-1] == 0) GOTO 0xa43; Pop(1)

0xa38: @ GetEyesHeight(Stack[-3])
0xa39: Pop(0)
0xa3a: @ GetDirection(Stack[-2])
0xa3b: Pop(0)
0xa3c: Push((int) 50)
0xa3d: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xa3e: Push(CvectorIndex(Stack[-1], 1))
0xa3f: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xa40: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xa41: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xa42: Pop(0)
0xa43: Return(); Pop(16)

0xa44: PushEmpty()
0xa45: Stack[-2] = (bool) 1
0xa46: PushEmpty(bool)
0xa47: Stack[-1] = (bool) 1
0xa48: PushEmpty(bool)
0xa49: Stack[-1] = (bool) 1
0xa4a: PushEmpty(bool)
0xa4b: Stack[-1] = (bool) 1
0xa4c: PushEmpty(bool)
0xa4d: Stack[-1] = (bool) 1
0xa4e: PushEmpty(bool)
0xa4f: Stack[-1] = (bool) 1
0xa50: PushEmpty(bool)
0xa51: Stack[-1] = (bool) 1
0xa52: PushEmpty(bool)
0xa53: Stack[-1] = (bool) 1
0xa54: PushEmpty(bool)
0xa55: Stack[-1] = (bool) 1
0xa56: PushEmpty(bool)
0xa57: Stack[-1] = (bool) 1
0xa58: PushEmpty(bool)
0xa59: Stack[-1] = (bool) 1
0xa5a: PushEmpty(bool)
0xa5b: Stack[-1] = (bool) 1
0xa5c: Push("woman")
0xa5d: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0xa5e: IF (Stack[-1] == 0) GOTO 0xa63; Pop(1)

0xa5f: Push("worker")
0xa60: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0xa61: IF (Stack[-1] == 0) GOTO 0xa63; Pop(1)

0xa62: Stack[-1] = (bool) 0
0xa63: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa64: Push("butcher")
0xa65: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xa66: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa67: Stack[-1] = (bool) 0
0xa68: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa69: Push("wasted_girl")
0xa6a: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0xa6b: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa6c: Stack[-1] = (bool) 0
0xa6d: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa6e: Push("boy")
0xa6f: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xa70: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa71: Stack[-1] = (bool) 0
0xa72: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa73: Push("vaxxabitka")
0xa74: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0xa75: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa76: Stack[-1] = (bool) 0
0xa77: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa78: Push("unosha")
0xa79: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xa7a: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa7b: Stack[-1] = (bool) 0
0xa7c: IF (Stack[-1] == 0) GOTO 0xa81; Pop(1)

0xa7d: Push("wasted_male")
0xa7e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xa7f: IF (Stack[-1] == 0) GOTO 0xa81; Pop(1)

0xa80: Stack[-1] = (bool) 0
0xa81: IF (Stack[-1] == 0) GOTO 0xa86; Pop(1)

0xa82: Push("alkash")
0xa83: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa84: IF (Stack[-1] == 0) GOTO 0xa86; Pop(1)

0xa85: Stack[-1] = (bool) 0
0xa86: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa87: Push("dohodyaga")
0xa88: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xa89: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa8a: Stack[-1] = (bool) 0
0xa8b: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8c: Push("vaxxabit")
0xa8d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa8e: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8f: Stack[-1] = (bool) 0
0xa90: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa91: Push("nudegirl")
0xa92: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa93: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa94: Stack[-1] = (bool) 0
0xa95: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa96: Push("morlok")
0xa97: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa98: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa99: Stack[-2] = (bool) 0
0xa9a: Return(); Pop(0)

0xa9b: PushEmpty(object, object)
0xa9c: @ self(Stack[-1])
0xa9d: Pop(0)
0xa9e: Stack[-3] = Stack[-1]
0xa9f: Return(); Pop(2)

0xaa0: Stack[-1] = 0
0xaa1: PushEmpty(float, float)
0xaa2: Pop(0); Push(Stack[-3] | Stack[-3]);
0xaa3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xaa4: Push((float)0.0)
0xaa5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xaa6: IF (Stack[-1] == 0) GOTO 0xaa9; Pop(1)

0xaa7: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xaa8: Return(); Pop(2)

0xaa9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xaaa: Return(); Pop(2)

0xaab: PushEmpty(cvector, cvector)
0xaac: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0xaad: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0xaae: Return(); Pop(2)

0xaaf: PushEmpty()
0xab0: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xab1: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xab2: Stack[-3] = Stack[-2]
0xab3: GOTO 0xab5

0xab4: Stack[-3] = Stack[-1]
0xab5: Return(); Pop(0)

0xab6: PushEmpty()
0xab7: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xab8: IF (Stack[-1] == 0) GOTO 0xabb; Pop(1)

0xab9: Stack[-4] = Stack[-2]
0xaba: Return(); Pop(0)

0xabb: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xabc: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xabd: Stack[-4] = Stack[-1]
0xabe: Return(); Pop(0)

0xabf: Stack[-4] = Stack[-3]
0xac0: Return(); Pop(0)

0xac1: PushEmpty(int, int)
0xac2: @ irand(Stack[-1], Stack[-3])
0xac3: Pop(0)
0xac4: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xac5: Return(); Pop(2)

0xac6: PushEmpty(object, object)
0xac7: @ CreateObjectSet(Stack[-1])
0xac8: Pop(0)
0xac9: Stack[-3] = Stack[-1]
0xaca: Return(); Pop(2)

0xacb: Stack[-1] = 0
0xacc: PushEmpty(int, int)
0xacd: @ GetVariable(Stack[-3], Stack[-1])
0xace: Pop(0)
0xacf: Stack[-4] = Stack[-1]
0xad0: Return(); Pop(2)

0xad1: PushEmpty(object, object)
0xad2: @ CreateFloatVector(Stack[-1])
0xad3: Pop(0)
0xad4: @@ add(Stack[-3])
0xad5: Pop(0)
0xad6: Push((int) 0)
0xad7: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xad8: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xad9: Push((float)0.7)
0xada: Push((int) 500)
0xadb: @ RumblePlay(Stack[-2], Stack[-1])
0xadc: Pop(2)
0xadd: Push((int) 15)
0xade: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xadf: Pop(1)
0xae0: Return(); Pop(2)

0xae1: Stack[-1] = 0
0xae2: PushEmpty(float, float)
0xae3: @ GetGameTime(Stack[-1])
0xae4: Pop(0)
0xae5: Push((int) 1)
0xae6: PushEmpty(int)
0xae7: Push((int) 24)
0xae8: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xae9: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xaea: Return(); Pop(2)

0xaeb: PushEmpty(bool, bool)
0xaec: @ IsPlayerActor(Stack[-3], Stack[-1])
0xaed: Pop(0)
0xaee: Push(Stack[-1])
0xaef: IF (Stack[-1] == 0) GOTO 0xaf3; Pop(1)

0xaf0: Push("attack")
0xaf1: @ PlayGlobalMusic(Stack[-1])
0xaf2: Pop(1)
0xaf3: Return(); Pop(2)

0xaf4: PushEmpty(object, object)
0xaf5: @ GetScene(Stack[-1])
0xaf6: Pop(0)
0xaf7: Push("battle")
0xaf8: PushEmpty(object)
0xaf9: Call2 0xa9b

0xafa: Pop(0)
0xafb: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xafc: Pop(2)
0xafd: Return(); Pop(2)

0xafe: Stack[-1] = 0
0xaff: PushEmpty()
0xb00: Push((int) 1000)
0xb01: @@ SetReturnValue(Stack[-1])
0xb02: Pop(1)
0xb03: Return(); Pop(0)

0xb04: PushEmpty()
0xb05: PushEmpty(int, string)
0xb06: Stack[-1] = "branch"
0xb07: Call2 0xacc

0xb08: Pop(1)
0xb09: Push((int) 0)
0xb0a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb0b: IF (Stack[-1] == 0) GOTO 0xb0e; Pop(1)

0xb0c: Stack[-2] = (bool) 1
0xb0d: Return(); Pop(0)

0xb0e: Stack[-2] = (bool) 0
0xb0f: Return(); Pop(0)

0xb10: PushEmpty()
0xb11: PushEmpty(int, string)
0xb12: Stack[-1] = "branch"
0xb13: Call2 0xacc

0xb14: Pop(1)
0xb15: Push((int) 1)
0xb16: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb17: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb18: Stack[-2] = (bool) 1
0xb19: Return(); Pop(0)

0xb1a: Stack[-2] = (bool) 0
0xb1b: Return(); Pop(0)

0xb1c: PushEmpty()
0xb1d: PushEmpty(int, string)
0xb1e: Stack[-1] = "branch"
0xb1f: Call2 0xacc

0xb20: Pop(1)
0xb21: Push((int) 2)
0xb22: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb23: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb24: Stack[-2] = (bool) 1
0xb25: Return(); Pop(0)

0xb26: Stack[-2] = (bool) 0
0xb27: Return(); Pop(0)

0xb28: PushEmpty(int, int)
0xb29: Push("branch")
0xb2a: @ GetVariable(Stack[-1], Stack[-2])
0xb2b: Pop(1)
0xb2c: Push((int) 0)
0xb2d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb2e: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb2f: Stack[-3] = (int) 1
0xb30: Return(); Pop(2)

0xb31: GOTO 0xb37

0xb32: Push((int) 1)
0xb33: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb34: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xb35: Stack[-3] = (int) 2
0xb36: Return(); Pop(2)

0xb37: Stack[-3] = (int) 3
0xb38: Return(); Pop(2)

0xb39: PushEmpty(int, int)
0xb3a: Push("branch")
0xb3b: @ GetVariable(Stack[-1], Stack[-2])
0xb3c: Pop(1)
0xb3d: Stack[-3] = Stack[-1]
0xb3e: Return(); Pop(2)

0xb3f: PushEmpty()
0xb40: PushEmpty(int)
0xb41: Call2 0xb39

0xb42: Pop(0)
0xb43: Push((int) 1)
0xb44: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb45: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb46: @ WorkWithCorpse(Stack[-1])
0xb47: Pop(0)
0xb48: GOTO 0xb4b

0xb49: @ Barter(Stack[-1])
0xb4a: Pop(0)
0xb4b: Return(); Pop(0)

0xb4c: PushEmpty(int, bool, int, bool)
0xb4d: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xb4e: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb4f: Push("GenerateMoney: iMin > iMax")
0xb50: @ Trace(Stack[-1])
0xb51: Pop(1)
0xb52: Return(); Pop(4)

0xb53: Stack[-2] = (int) 0
0xb54: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xb55: IF (Stack[-1] == 0) GOTO 0xb5a; Pop(1)

0xb56: Pop(0); Push(Stack[-5] - Stack[-6]);
0xb57: @ irand(Stack[-3], Stack[-1])
0xb58: Pop(1)
0xb59: GOTO 0xb5e

0xb5a: Push((int) 0)
0xb5b: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xb5c: IF (Stack[-1] == 0) GOTO 0xb5e; Pop(1)

0xb5d: Return(); Pop(4)

0xb5e: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xb5f: Push((int) 0)
0xb60: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb61: IF (Stack[-1] == 0) GOTO 0xb63; Pop(1)

0xb62: Return(); Pop(4)

0xb63: PushEmpty(int, string)
0xb64: Stack[-1] = "Money"
0xb65: Call2 0xc94

0xb66: Pop(1)
0xb67: Push((int) 0)
0xb68: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xb69: Pop(2)
0xb6a: Return(); Pop(4)

0xb6b: PushEmpty(object, int, bool, object, int, bool)
0xb6c: @ CreateInvItem(Stack[-3])
0xb6d: Pop(0)
0xb6e: @@ SetItemName(Stack[-7])
0xb6f: Pop(0)
0xb70: Push("Organ")
0xb71: Push((int) 1)
0xb72: @@ SetProperty(Stack[-2], Stack[-1])
0xb73: Pop(2)
0xb74: @@ GetItemID(Stack[-2])
0xb75: Pop(0)
0xb76: Push((int) 0)
0xb77: Push((int) 1)
0xb78: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xb79: Pop(2)
0xb7a: Return(); Pop(6)

0xb7b: Stack[-3] = 0
0xb7c: PushEmpty(int)
0xb7d: Call2 0xb39

0xb7e: Pop(0)
0xb7f: Push((int) 1)
0xb80: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xb81: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb82: Return(); Pop(0)

0xb83: PushEmpty(string)
0xb84: Stack[-1] = "liver"
0xb85: Call2 0xb6b

0xb86: Pop(1)
0xb87: PushEmpty(string)
0xb88: Stack[-1] = "kidney"
0xb89: Call2 0xb6b

0xb8a: Pop(1)
0xb8b: PushEmpty(string)
0xb8c: Stack[-1] = "heart"
0xb8d: Call2 0xb6b

0xb8e: Pop(1)
0xb8f: PushEmpty(string)
0xb90: Stack[-1] = "blood"
0xb91: Call2 0xb6b

0xb92: Pop(1)
0xb93: Return(); Pop(0)

0xb94: PushEmpty(int, bool, int, int, bool, int)
0xb95: Push((int) 0)
0xb96: @ ClearSubContainer(Stack[-1])
0xb97: Pop(1)
0xb98: PushEmpty(int)
0xb99: Call2 0xae2

0xb9a: Stack[-2] = Stack[-1]
0xb9b: Pop(1)
0xb9c: PushEmpty(int, int)
0xb9d: Stack[-2] = (int) 0
0xb9e: Push((int) 100)
0xb9f: Push((int) 100)
0xba0: Pop(1); Push(Stack[-5] * Stack[-1]);
0xba1: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xba2: Call2 0xb4c

0xba3: Pop(2)
0xba4: PushEmpty(string, int, int)
0xba5: Stack[-3] = "tourniquet"
0xba6: Stack[-2] = (int) 1
0xba7: Stack[-1] = (int) 7
0xba8: Call2 0xa01

0xba9: Pop(3)
0xbaa: PushEmpty(string, int, int)
0xbab: Stack[-3] = "bandage"
0xbac: Stack[-2] = (int) 1
0xbad: Stack[-1] = (int) 7
0xbae: Call2 0xa01

0xbaf: Pop(3)
0xbb0: PushEmpty(string, int, int)
0xbb1: Stack[-3] = "packet"
0xbb2: Stack[-2] = (int) 1
0xbb3: Stack[-1] = (int) 10
0xbb4: Call2 0xa01

0xbb5: Pop(3)
0xbb6: PushEmpty(string, int, int)
0xbb7: Stack[-3] = "bottle_water"
0xbb8: Stack[-2] = (int) 1
0xbb9: Stack[-1] = (int) 3
0xbba: Call2 0xa01

0xbbb: Pop(3)
0xbbc: PushEmpty(string, int, int, int)
0xbbd: Stack[-4] = "rusk"
0xbbe: Stack[-3] = (int) 1
0xbbf: Stack[-2] = (int) 3
0xbc0: Stack[-1] = (int) 4
0xbc1: Call2 0xa0c

0xbc2: Pop(4)
0xbc3: PushEmpty(string, int, int)
0xbc4: Stack[-3] = "hook"
0xbc5: Stack[-2] = (int) 1
0xbc6: Stack[-1] = (int) 20
0xbc7: Call2 0xa01

0xbc8: Pop(3)
0xbc9: PushEmpty(string, int, int)
0xbca: Stack[-3] = "watch"
0xbcb: Stack[-2] = (int) 1
0xbcc: Stack[-1] = (int) 20
0xbcd: Call2 0xa01

0xbce: Pop(3)
0xbcf: PushEmpty(bool)
0xbd0: Stack[-1] = (bool) 0
0xbd1: Push((int) 3)
0xbd2: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xbd3: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd4: Push((int) 6)
0xbd5: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xbd6: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd7: Stack[-1] = (bool) 1
0xbd8: IF (Stack[-1] == 0) GOTO 0xbe0; Pop(1)

0xbd9: PushEmpty(string, int, int, int)
0xbda: Stack[-4] = "alpha_pills"
0xbdb: Stack[-3] = (int) 1
0xbdc: Stack[-2] = (int) 2
0xbdd: Stack[-1] = (int) 3
0xbde: Call2 0xa0c

0xbdf: Pop(4)
0xbe0: Push((int) 4)
0xbe1: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xbe2: IF (Stack[-1] == 0) GOTO 0xbea; Pop(1)

0xbe3: PushEmpty(string, int, int, int)
0xbe4: Stack[-4] = "beta_pills"
0xbe5: Stack[-3] = (int) 1
0xbe6: Stack[-2] = (int) 4
0xbe7: Stack[-1] = (int) 3
0xbe8: Call2 0xa0c

0xbe9: Pop(4)
0xbea: Push((int) 6)
0xbeb: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xbec: IF (Stack[-1] == 0) GOTO 0xbfb; Pop(1)

0xbed: PushEmpty(string, int, int, int)
0xbee: Stack[-4] = "alpha_pills"
0xbef: Stack[-3] = (int) 1
0xbf0: Stack[-2] = (int) 2
0xbf1: Stack[-1] = (int) 8
0xbf2: Call2 0xa0c

0xbf3: Pop(4)
0xbf4: PushEmpty(string, int, int, int)
0xbf5: Stack[-4] = "gamma_pills"
0xbf6: Stack[-3] = (int) 1
0xbf7: Stack[-2] = (int) 8
0xbf8: Stack[-1] = (int) 3
0xbf9: Call2 0xa0c

0xbfa: Pop(4)
0xbfb: Push((int) 8)
0xbfc: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xbfd: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xbfe: PushEmpty(string, int, int)
0xbff: Stack[-3] = "revolver_ammo"
0xc00: Stack[-2] = (int) 1
0xc01: Stack[-1] = (int) 3
0xc02: Call2 0xa01

0xc03: Pop(3)
0xc04: PushEmpty(string, int, int)
0xc05: Stack[-3] = "rifle_ammo"
0xc06: Stack[-2] = (int) 1
0xc07: Stack[-1] = (int) 3
0xc08: Call2 0xa01

0xc09: Pop(3)
0xc0a: PushEmpty(int, string)
0xc0b: Stack[-1] = "patrol_mark"
0xc0c: Call2 0xc94

0xc0d: Pop(1)
0xc0e: Push((int) 0)
0xc0f: Push((int) 1)
0xc10: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0xc11: Pop(3)
0xc12: Return(); Pop(6)

0xc13: PushEmpty(int, bool, int, int, bool, int)
0xc14: Push((int) 0)
0xc15: @ ClearSubContainer(Stack[-1])
0xc16: Pop(1)
0xc17: PushEmpty(int)
0xc18: Call2 0xae2

0xc19: Stack[-2] = Stack[-1]
0xc1a: Pop(1)
0xc1b: PushEmpty(int, int)
0xc1c: Stack[-2] = (int) 0
0xc1d: Push((int) 10)
0xc1e: Push((int) 5)
0xc1f: Pop(1); Push(Stack[-5] * Stack[-1]);
0xc20: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc21: Call2 0xb4c

0xc22: Pop(2)
0xc23: PushEmpty(string, int, int)
0xc24: Stack[-3] = "bottle_water"
0xc25: Stack[-2] = (int) 1
0xc26: Stack[-1] = (int) 3
0xc27: Call2 0xa01

0xc28: Pop(3)
0xc29: PushEmpty(string, int, int)
0xc2a: Stack[-3] = "rusk"
0xc2b: Stack[-2] = (int) 1
0xc2c: Stack[-1] = (int) 20
0xc2d: Call2 0xa01

0xc2e: Pop(3)
0xc2f: PushEmpty(string, int, int)
0xc30: Stack[-3] = "hook"
0xc31: Stack[-2] = (int) 1
0xc32: Stack[-1] = (int) 30
0xc33: Call2 0xa01

0xc34: Pop(3)
0xc35: PushEmpty(string, int, int)
0xc36: Stack[-3] = "watch"
0xc37: Stack[-2] = (int) 1
0xc38: Stack[-1] = (int) 30
0xc39: Call2 0xa01

0xc3a: Pop(3)
0xc3b: Push((int) 3)
0xc3c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc3d: IF (Stack[-1] == 0) GOTO 0xc45; Pop(1)

0xc3e: PushEmpty(string, int, int, int)
0xc3f: Stack[-4] = "alpha_pills"
0xc40: Stack[-3] = (int) 1
0xc41: Stack[-2] = (int) 4
0xc42: Stack[-1] = (int) 3
0xc43: Call2 0xa0c

0xc44: Pop(4)
0xc45: Push((int) 4)
0xc46: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc47: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc48: PushEmpty(string, int, int, int)
0xc49: Stack[-4] = "beta_pills"
0xc4a: Stack[-3] = (int) 1
0xc4b: Stack[-2] = (int) 8
0xc4c: Stack[-1] = (int) 3
0xc4d: Call2 0xa0c

0xc4e: Pop(4)
0xc4f: Push((int) 6)
0xc50: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc51: IF (Stack[-1] == 0) GOTO 0xc59; Pop(1)

0xc52: PushEmpty(string, int, int, int)
0xc53: Stack[-4] = "gamma_pills"
0xc54: Stack[-3] = (int) 1
0xc55: Stack[-2] = (int) 16
0xc56: Stack[-1] = (int) 3
0xc57: Call2 0xa0c

0xc58: Pop(4)
0xc59: Return(); Pop(6)

0xc5a: PushEmpty(int, bool, int, int, bool, int)
0xc5b: Push((int) 0)
0xc5c: @ ClearSubContainer(Stack[-1])
0xc5d: Pop(1)
0xc5e: PushEmpty(int)
0xc5f: Call2 0xae2

0xc60: Stack[-2] = Stack[-1]
0xc61: Pop(1)
0xc62: PushEmpty(string, int, int, int)
0xc63: Stack[-4] = "fresh_meat"
0xc64: Stack[-3] = (int) 1
0xc65: Stack[-2] = (int) 4
0xc66: Stack[-1] = (int) 3
0xc67: Call2 0xa0c

0xc68: Pop(4)
0xc69: PushEmpty(string, int, int, int)
0xc6a: Stack[-4] = "dried_meat"
0xc6b: Stack[-3] = (int) 1
0xc6c: Stack[-2] = (int) 4
0xc6d: Stack[-1] = (int) 3
0xc6e: Call2 0xa0c

0xc6f: Pop(4)
0xc70: PushEmpty(string, int, int, int)
0xc71: Stack[-4] = "smoked_meat"
0xc72: Stack[-3] = (int) 1
0xc73: Stack[-2] = (int) 4
0xc74: Stack[-1] = (int) 3
0xc75: Call2 0xa0c

0xc76: Pop(4)
0xc77: PushEmpty(string, int, int, int)
0xc78: Stack[-4] = "vegetables"
0xc79: Stack[-3] = (int) 1
0xc7a: Stack[-2] = (int) 3
0xc7b: Stack[-1] = (int) 3
0xc7c: Call2 0xa0c

0xc7d: Pop(4)
0xc7e: Push((int) 3)
0xc7f: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc80: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc81: PushEmpty(string, int, int)
0xc82: Stack[-3] = "revolver_ammo"
0xc83: Stack[-2] = (int) 1
0xc84: Stack[-1] = (int) 5
0xc85: Call2 0xa01

0xc86: Pop(3)
0xc87: PushEmpty(string, int, int)
0xc88: Stack[-3] = "rifle_ammo"
0xc89: Stack[-2] = (int) 1
0xc8a: Stack[-1] = (int) 5
0xc8b: Call2 0xa01

0xc8c: Pop(3)
0xc8d: PushEmpty(string, int, int)
0xc8e: Stack[-3] = "samopal_ammo"
0xc8f: Stack[-2] = (int) 1
0xc90: Stack[-1] = (int) 5
0xc91: Call2 0xa01

0xc92: Pop(3)
0xc93: Return(); Pop(6)

0xc94: PushEmpty(int, int)
0xc95: @ GetInvItemByName(Stack[-1], Stack[-3])
0xc96: Pop(0)
0xc97: Stack[-4] = Stack[-1]
0xc98: Return(); Pop(2)

0xc99: PushEmpty(string, string)
0xc9a: PushEmpty(bool, object, string)
0xc9b: Stack[-2] = Stack[-7]
0xc9c: Stack[-1] = "class"
0xc9d: Call2 0x81d

0xc9e: Pop(2)
0xc9f: Pop(1); Push((bool) Stack[-1] == 0)
0xca0: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xca1: Stack[-5] = (bool) 0
0xca2: Return(); Pop(2)

0xca3: Push("class")
0xca4: @@ GetProperty(Stack[-1], Stack[-2])
0xca5: Pop(1)
0xca6: PushEmpty(bool)
0xca7: Stack[-1] = (bool) 1
0xca8: PushEmpty(bool)
0xca9: Stack[-1] = (bool) 1
0xcaa: PushEmpty(bool)
0xcab: Stack[-1] = (bool) 1
0xcac: PushEmpty(bool)
0xcad: Stack[-1] = (bool) 1
0xcae: PushEmpty(bool)
0xcaf: Stack[-1] = (bool) 1
0xcb0: PushEmpty(bool)
0xcb1: Stack[-1] = (bool) 1
0xcb2: PushEmpty(bool)
0xcb3: Stack[-1] = (bool) 1
0xcb4: PushEmpty(bool)
0xcb5: Stack[-1] = (bool) 1
0xcb6: PushEmpty(bool)
0xcb7: Stack[-1] = (bool) 1
0xcb8: PushEmpty(bool)
0xcb9: Stack[-1] = (bool) 1
0xcba: Push("patrol")
0xcbb: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xcbc: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcbd: Push("sanitar")
0xcbe: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xcbf: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcc0: Stack[-1] = (bool) 0
0xcc1: IF (Stack[-1] == 0) GOTO 0xcc6; Pop(1)

0xcc2: Push("soldier")
0xcc3: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0xcc4: IF (Stack[-1] == 0) GOTO 0xcc6; Pop(1)

0xcc5: Stack[-1] = (bool) 0
0xcc6: IF (Stack[-1] == 0) GOTO 0xccb; Pop(1)

0xcc7: Push("woman")
0xcc8: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xcc9: IF (Stack[-1] == 0) GOTO 0xccb; Pop(1)

0xcca: Stack[-1] = (bool) 0
0xccb: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xccc: Push("wasted_girl")
0xccd: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0xcce: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xccf: Stack[-1] = (bool) 0
0xcd0: IF (Stack[-1] == 0) GOTO 0xcd5; Pop(1)

0xcd1: Push("vaxxabitka")
0xcd2: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xcd3: IF (Stack[-1] == 0) GOTO 0xcd5; Pop(1)

0xcd4: Stack[-1] = (bool) 0
0xcd5: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcd6: Push("vaxxabit")
0xcd7: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xcd8: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcd9: Stack[-1] = (bool) 0
0xcda: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xcdb: Push("little_girl")
0xcdc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xcdd: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xcde: Stack[-1] = (bool) 0
0xcdf: IF (Stack[-1] == 0) GOTO 0xce4; Pop(1)

0xce0: Push("girl")
0xce1: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xce2: IF (Stack[-1] == 0) GOTO 0xce4; Pop(1)

0xce3: Stack[-1] = (bool) 0
0xce4: IF (Stack[-1] == 0) GOTO 0xce9; Pop(1)

0xce5: Push("dohodyaga")
0xce6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xce7: IF (Stack[-1] == 0) GOTO 0xce9; Pop(1)

0xce8: Stack[-1] = (bool) 0
0xce9: IF (Stack[-1] == 0) GOTO 0xcee; Pop(1)

0xcea: Push("nudegirl")
0xceb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcec: IF (Stack[-1] == 0) GOTO 0xcee; Pop(1)

0xced: Stack[-1] = (bool) 0
0xcee: IF (Stack[-1] == 0) GOTO 0xcf1; Pop(1)

0xcef: Stack[-5] = (bool) 1
0xcf0: Return(); Pop(2)

0xcf1: Push(Stack[-3])
0xcf2: IF (Stack[-1] == 0) GOTO 0xcf5; Pop(1)

0xcf3: Stack[-5] = (bool) 0
0xcf4: Return(); Pop(2)

0xcf5: Stack[-5] = (bool) 1
0xcf6: PushEmpty(bool)
0xcf7: Stack[-1] = (bool) 1
0xcf8: PushEmpty(bool)
0xcf9: Stack[-1] = (bool) 1
0xcfa: PushEmpty(bool)
0xcfb: Stack[-1] = (bool) 1
0xcfc: PushEmpty(bool)
0xcfd: Stack[-1] = (bool) 1
0xcfe: PushEmpty(bool)
0xcff: Stack[-1] = (bool) 1
0xd00: Push("worker")
0xd01: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xd02: IF (Stack[-1] == 0) GOTO 0xd07; Pop(1)

0xd03: Push("butcher")
0xd04: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xd05: IF (Stack[-1] == 0) GOTO 0xd07; Pop(1)

0xd06: Stack[-1] = (bool) 0
0xd07: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd08: Push("boy")
0xd09: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd0a: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd0b: Stack[-1] = (bool) 0
0xd0c: IF (Stack[-1] == 0) GOTO 0xd11; Pop(1)

0xd0d: Push("unosha")
0xd0e: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xd0f: IF (Stack[-1] == 0) GOTO 0xd11; Pop(1)

0xd10: Stack[-1] = (bool) 0
0xd11: IF (Stack[-1] == 0) GOTO 0xd16; Pop(1)

0xd12: Push("wasted_male")
0xd13: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd14: IF (Stack[-1] == 0) GOTO 0xd16; Pop(1)

0xd15: Stack[-1] = (bool) 0
0xd16: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd17: Push("alkash")
0xd18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd19: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd1a: Stack[-1] = (bool) 0
0xd1b: IF (Stack[-1] == 0) GOTO 0xd20; Pop(1)

0xd1c: Push("morlok")
0xd1d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd1e: IF (Stack[-1] == 0) GOTO 0xd20; Pop(1)

0xd1f: Stack[-5] = (bool) 0
0xd20: Return(); Pop(2)

0xd21: Push(GlobalVars[0])
0xd22: PushEmpty(object)
0xd23: Call2 0xac6

0xd24: Stack[-2] = Stack[-1]
0xd25: Pop(1)
0xd26: GlobalVars[0] = Stack[-1]; Pop(1)
0xd27: Return(); Pop(0)

0xd28: PushEmpty()
0xd29: PushEmpty(bool, object)
0xd2a: Stack[-1] = Stack[-3]
0xd2b: Call2 0x993

0xd2c: Pop(1)
0xd2d: Pop(1); Push((bool) Stack[-1] == 0)
0xd2e: IF (Stack[-1] == 0) GOTO 0xd30; Pop(1)

0xd2f: Return(); Pop(0)

0xd30: PushEmpty(object)
0xd31: Stack[-1] = Stack[-2]
0xd32: Push(-1, 1); TaskCall(0)
0xd33: Call2 0x0

0xd34: Pop(-1, 1); TaskReturn
0xd35: Pop(1)
0xd36: PushEmpty(object)
0xd37: Stack[-1] = Stack[-2]
0xd38: Call2 0x9cb

0xd39: Pop(1)
0xd3a: Return(); Pop(0)

0xd3b: PushEmpty()
0xd3c: PushEmpty(bool, object)
0xd3d: Stack[-1] = Stack[-3]
0xd3e: Call2 0xdeb

0xd3f: Stack[-4] = Stack[-2]
0xd40: Pop(2)
0xd41: Return(); Pop(0)

0xd42: PushEmpty()
0xd43: PushEmpty(object)
0xd44: Stack[-1] = Stack[-2]
0xd45: Call2 0xd55

0xd46: Pop(1)
0xd47: Return(); Pop(0)

0xd48: PushEmpty()
0xd49: PushEmpty(bool, object)
0xd4a: Stack[-1] = Stack[-3]
0xd4b: Call2 0xdeb

0xd4c: Stack[-4] = Stack[-2]
0xd4d: Pop(2)
0xd4e: Return(); Pop(0)

0xd4f: PushEmpty()
0xd50: PushEmpty(object)
0xd51: Stack[-1] = Stack[-2]
0xd52: Call2 0xd55

0xd53: Pop(1)
0xd54: Return(); Pop(0)

0xd55: PushEmpty()
0xd56: PushEmpty(object, bool)
0xd57: Stack[-2] = Stack[-3]
0xd58: Stack[-1] = (bool) 1
0xd59: Push(-2, 6); TaskCall(5)
0xd5a: Call2 0x431

0xd5b: Pop(-2, 6); TaskReturn
0xd5c: Pop(2)
0xd5d: @ ResetAAS()
0xd5e: Pop(0)
0xd5f: Return(); Pop(0)

0xd60: PushEmpty(bool, bool)
0xd61: Pop(0); Push((bool) Stack[-3] == 0)
0xd62: IF (Stack[-1] == 0) GOTO 0xd64; Pop(1)

0xd63: Return(); Pop(2)

0xd64: Push(GlobalVars[0])
0xd65: @@ in(Stack[-2], Stack[-4])
0xd66: Pop(1)
0xd67: Pop(0); Push((bool) Stack[-1] == 0)
0xd68: IF (Stack[-1] == 0) GOTO 0xd6c; Pop(1)

0xd69: Push(GlobalVars[0])
0xd6a: @@ add(Stack[-4])
0xd6b: Pop(1)
0xd6c: PushEmpty(bool, object)
0xd6d: Stack[-1] = Stack[-5]
0xd6e: Call2 0x818

0xd6f: Pop(1)
0xd70: IF (Stack[-1] == 0) GOTO 0xd77; Pop(1)

0xd71: PushEmpty(object)
0xd72: Call2 0xa9b

0xd73: Pop(0)
0xd74: Push((float)-0.07)
0xd75: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0xd76: Pop(2)
0xd77: Return(); Pop(2)

0xd78: PushEmpty()
0xd79: PushEmpty(object)
0xd7a: Stack[-1] = Stack[-2]
0xd7b: Call2 0xd60

0xd7c: Pop(1)
0xd7d: PushEmpty(object, bool)
0xd7e: Stack[-2] = Stack[-3]
0xd7f: Stack[-1] = (bool) 1
0xd80: Push(-2, 6); TaskCall(5)
0xd81: Call2 0x431

0xd82: Pop(-2, 6); TaskReturn
0xd83: Pop(2)
0xd84: @ ResetAAS()
0xd85: Pop(0)
0xd86: Return(); Pop(0)

0xd87: PushEmpty()
0xd88: PushEmpty(bool, object)
0xd89: Stack[-1] = Stack[-3]
0xd8a: Call2 0x818

0xd8b: Pop(1)
0xd8c: IF (Stack[-1] == 0) GOTO 0xd94; Pop(1)

0xd8d: PushEmpty(object)
0xd8e: Call2 0xa9b

0xd8f: Pop(0)
0xd90: Push((float)-0.13)
0xd91: Push((bool) 1)
0xd92: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd93: Pop(3)
0xd94: PushEmpty(object)
0xd95: Stack[-1] = Stack[-2]
0xd96: Push(-1, 0); TaskCall(6)
0xd97: Call2 0x6e3

0xd98: Pop(-1, 0); TaskReturn
0xd99: Pop(1)
0xd9a: Return(); Pop(0)

0xd9b: PushEmpty()
0xd9c: PushEmpty(object, int, float)
0xd9d: Stack[-3] = Stack[-7]
0xd9e: Stack[-2] = Stack[-6]
0xd9f: Stack[-1] = Stack[-5]
0xda0: Call2 0x8df

0xda1: Pop(3)
0xda2: Return(); Pop(0)

0xda3: PushEmpty()
0xda4: PushEmpty(object, int, float, cvector, cvector)
0xda5: Stack[-5] = Stack[-11]
0xda6: Stack[-4] = Stack[-10]
0xda7: Stack[-3] = Stack[-9]
0xda8: Stack[-2] = Stack[-7]
0xda9: Stack[-1] = Stack[-6]
0xdaa: Call2 0x923

0xdab: Pop(5)
0xdac: Return(); Pop(0)

0xdad: PushEmpty(float, float)
0xdae: Push("health")
0xdaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdb0: IF (Stack[-1] == 0) GOTO 0xdb9; Pop(1)

0xdb1: Push("health")
0xdb2: @ GetProperty(Stack[-1], Stack[-2])
0xdb3: Pop(1)
0xdb4: Push((int) 0)
0xdb5: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xdb6: IF (Stack[-1] == 0) GOTO 0xdb9; Pop(1)

0xdb7: @ SignalDeath(Stack[-4])
0xdb8: Pop(0)
0xdb9: Return(); Pop(2)

0xdba: PushEmpty()
0xdbb: Push("prc")
0xdbc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdbd: IF (Stack[-1] == 0) GOTO 0xdc0; Pop(1)

0xdbe: @ ResetAAS()
0xdbf: Pop(0)
0xdc0: Return(); Pop(0)

0xdc1: PushEmpty()
0xdc2: PushEmpty(object)
0xdc3: Stack[-1] = Stack[-2]
0xdc4: Call2 0xd87

0xdc5: Pop(1)
0xdc6: Return(); Pop(0)

0xdc7: PushEmpty(bool, bool)
0xdc8: PushEmpty(bool, object, bool)
0xdc9: Stack[-2] = Stack[-7]
0xdca: Stack[-1] = !Stack[-6]; Pop(0);
0xdcb: Call2 0xc99

0xdcc: Pop(2)
0xdcd: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xdce: @ CanSee(Stack[-1], Stack[-5])
0xdcf: Pop(0)
0xdd0: PushEmpty(bool)
0xdd1: Stack[-1] = (bool) 1
0xdd2: Push(Stack[-2])
0xdd3: IF (Stack[-1] == 0) GOTO 0xddc; Pop(1)

0xdd4: PushEmpty(float, object)
0xdd5: Stack[-1] = Stack[-8]
0xdd6: Call2 0x810

0xdd7: Pop(1)
0xdd8: Push((float)160000.0)
0xdd9: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xdda: IF (Stack[-1] == 0) GOTO 0xddc; Pop(1)

0xddb: Stack[-1] = (bool) 0
0xddc: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xddd: Stack[-6] = (bool) 1
0xdde: Return(); Pop(2)

0xddf: Stack[-6] = (bool) 0
0xde0: Return(); Pop(2)

0xde1: Stack[-1] = (int) 515572
0xde2: Return(); Pop(0)

0xde3: Stack[-1] = (int) 504031
0xde4: Return(); Pop(0)

0xde5: Stack[-1] = "ui/NPC_Citizen2.png"
0xde6: Return(); Pop(0)

0xde7: Stack[-1] = "ui/NPC_Citizen2_b.png"
0xde8: Return(); Pop(0)

0xde9: Stack[-1] = (bool) 0
0xdea: Return(); Pop(0)

0xdeb: PushEmpty(bool, float, string, float, bool, float, string, float)
0xdec: PushEmpty(bool, object)
0xded: Stack[-1] = Stack[-11]
0xdee: Call2 0x89b

0xdef: Pop(1)
0xdf0: Pop(1); Push((bool) Stack[-1] == 0)
0xdf1: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xdf2: Stack[-10] = (bool) 0
0xdf3: Return(); Pop(8)

0xdf4: Push(GlobalVars[0])
0xdf5: @@ in(Stack[-5], Stack[-10])
0xdf6: Pop(1)
0xdf7: Push(Stack[-4])
0xdf8: IF (Stack[-1] == 0) GOTO 0xdfb; Pop(1)

0xdf9: Stack[-10] = (bool) 1
0xdfa: Return(); Pop(8)

0xdfb: PushEmpty(bool, object)
0xdfc: Stack[-1] = Stack[-11]
0xdfd: Call2 0x818

0xdfe: Pop(1)
0xdff: IF (Stack[-1] == 0) GOTO 0xe06; Pop(1)

0xe00: Push("reputation")
0xe01: @@ GetProperty(Stack[-1], Stack[-4])
0xe02: Pop(1)
0xe03: Push((float)0.33)
0xe04: Stack[-11] = Stack[-4] < Stack[-1]; Pop(1);
0xe05: Return(); Pop(8)

0xe06: PushEmpty(bool, object, string)
0xe07: Stack[-2] = Stack[-12]
0xe08: Stack[-1] = "class"
0xe09: Call2 0x81d

0xe0a: Pop(2)
0xe0b: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe0c: Push("class")
0xe0d: @@ GetProperty(Stack[-1], Stack[-3])
0xe0e: Pop(1)
0xe0f: PushEmpty(bool)
0xe10: Stack[-1] = (bool) 1
0xe11: PushEmpty(bool)
0xe12: Stack[-1] = (bool) 1
0xe13: Push("bomber")
0xe14: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xe15: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe16: Push("hunter")
0xe17: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xe18: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe19: Stack[-1] = (bool) 0
0xe1a: IF (Stack[-1] == 0) GOTO 0xe1f; Pop(1)

0xe1b: Push("grabitel")
0xe1c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe1d: IF (Stack[-1] == 0) GOTO 0xe1f; Pop(1)

0xe1e: Stack[-1] = (bool) 0
0xe1f: IF (Stack[-1] == 0) GOTO 0xe22; Pop(1)

0xe20: Stack[-10] = (bool) 1
0xe21: Return(); Pop(8)

0xe22: PushEmpty(bool)
0xe23: Stack[-1] = (bool) 0
0xe24: PushEmpty(bool, string)
0xe25: Stack[-1] = Stack[-5]
0xe26: Call2 0xa44

0xe27: Pop(1)
0xe28: IF (Stack[-1] == 0) GOTO 0xe30; Pop(1)

0xe29: PushEmpty(bool, object, string)
0xe2a: Stack[-2] = Stack[-13]
0xe2b: Stack[-1] = "disease"
0xe2c: Call2 0x81d

0xe2d: Pop(2)
0xe2e: IF (Stack[-1] == 0) GOTO 0xe30; Pop(1)

0xe2f: Stack[-1] = (bool) 1
0xe30: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe31: Push("disease")
0xe32: @@ GetProperty(Stack[-1], Stack[-2])
0xe33: Pop(1)
0xe34: Stack[-10] = (bool) 0
0xe35: Push((int) 0)
0xe36: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe37: IF (Stack[-1] == 0) GOTO 0xe40; Pop(1)

0xe38: PushEmpty(float, object)
0xe39: Stack[-1] = Stack[-11]
0xe3a: Call2 0x810

0xe3b: Pop(1)
0xe3c: Push((float)490000.0)
0xe3d: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xe3e: IF (Stack[-1] == 0) GOTO 0xe40; Pop(1)

0xe3f: Stack[-10] = (bool) 1
0xe40: Return(); Pop(8)

0xe41: Stack[-10] = (bool) 0
0xe42: Return(); Pop(8)

