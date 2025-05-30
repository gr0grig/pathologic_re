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
	class
	rat
	rat_big
	dog
	grabitel
	bomber
	sanitar
	hunter
	soldier
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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

RunOp = 0xd7c
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2fc Vars = (int, int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0xcef Vars = (object)
		EVENT_6 Op = 0xcfd Vars = ()
		EVENT_22 Op = 0xd76 Vars = (object, int, float, float)
		EVENT_16 Op = 0xd78 Vars = (object, string)
		EVENT_41 Op = 0xd7a Vars = (object)
	GTASK_4 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0xd94 Vars = (object)
		EVENT_17 Op = 0xda8 Vars = (object)
		EVENT_30 Op = 0xdc0 Vars = (object, object, bool)
		EVENT_40 Op = 0xddc Vars = (object)
		EVENT_42 Op = 0xdf0 Vars = (object, string)
		EVENT_26 Op = 0xe15 Vars = (string)
		EVENT_1 Op = 0xe23 Vars = (object)
		EVENT_3 Op = 0xe36 Vars = (object)
		EVENT_7 Op = 0xe3c Vars = (int)
		EVENT_6 Op = 0xe48 Vars = ()
		EVENT_41 Op = 0xe5f Vars = (object)
		EVENT_10 Op = 0xed0 Vars = (object)
		EVENT_28 Op = 0xed4 Vars = ()
	GTASK_5  Params = 0
		EVENT_0 Op = 0xeed Vars = (object)
		EVENT_17 Op = 0xf01 Vars = (object)
		EVENT_30 Op = 0xf19 Vars = (object, object, bool)
		EVENT_40 Op = 0xf35 Vars = (object)
		EVENT_42 Op = 0xf49 Vars = (object, string)
		EVENT_26 Op = 0xf6e Vars = (string)
		EVENT_6 Op = 0xf7c Vars = ()
		EVENT_1 Op = 0xf83 Vars = (object)
	GTASK_6 Vars = (object) Params = 1
		EVENT_0 Op = 0x101f Vars = (object)
		EVENT_17 Op = 0x1033 Vars = (object)
		EVENT_30 Op = 0x104b Vars = (object, object, bool)
		EVENT_40 Op = 0x1067 Vars = (object)
		EVENT_42 Op = 0x107b Vars = (object, string)
		EVENT_26 Op = 0x10a0 Vars = (string)
		EVENT_41 Op = 0x10b9 Vars = (object)
		EVENT_7 Op = 0x10c2 Vars = (int)
		EVENT_6 Op = 0x10e5 Vars = ()
		EVENT_1 Op = 0x10ec Vars = (object)
	GTASK_7 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_8 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x139e Vars = ()
		EVENT_7 Op = 0x13d6 Vars = (int)
		EVENT_1 Op = 0x13f1 Vars = (object)
		EVENT_2 Op = 0x1400 Vars = (object)
		EVENT_10 Op = 0x1486 Vars = (object)
		EVENT_41 Op = 0x1491 Vars = (object)

Events:
EVENT_16 Op = 0x198f Vars = (object, string)
EVENT_41 Op = 0x199c Vars = (object)
EVENT_22 Op = 0x19a2 Vars = (object, int, float, float)
EVENT_43 Op = 0x19aa Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x1b24

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x167f

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
0x1c: Call2 0x1b24

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
0x2d: Call2 0x15eb

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x1b1e

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x1b1c

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x1b20

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x1b22

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x1896

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
0x69: Call2 0x1630

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
0x77: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x78: PushEmpty(bool, object)
0x79: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a: Call2 0x178a

0x7b: Pop(1)
0x7c: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x7d: PushEmpty(string)
0x7e: Stack[-1] = "Neutral"
0x7f: Call2 0x2e6

0x80: Pop(1)
0x81: Push((int) 543072)
0x82: @@ SetMessage(Stack[-1])
0x83: Pop(1)
0x84: @@ ClearReplies()
0x85: Pop(0)
0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88: Call2 0x1796

0x89: Pop(1)
0x8a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8b: Push((int) 543073)
0x8c: Push((int) 45531)
0x8d: Push((int) 45528)
0x8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f: Pop(3)
0x90: PushEmpty(bool, object)
0x91: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92: Call2 0x17a0

0x93: Pop(1)
0x94: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x95: Push((int) 543092)
0x96: Push((int) 45550)
0x97: Push((int) 45547)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: PushEmpty(bool)
0x9b: Stack[-1] = (bool) 1
0x9c: PushEmpty(bool, object)
0x9d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e: Call2 0x17aa

0x9f: Pop(1)
0xa0: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa1: PushEmpty(bool, object)
0xa2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa3: Call2 0x17d2

0xa4: Pop(1)
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Stack[-1] = (bool) 0
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: Push((int) 543108)
0xa9: Push((int) 45564)
0xaa: Push((int) 45563)
0xab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac: Pop(3)
0xad: PushEmpty(bool, object)
0xae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Call2 0x17b4

0xb0: Pop(1)
0xb1: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb2: Push((int) 543101)
0xb3: Push((int) 45557)
0xb4: Push((int) 45556)
0xb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6: Pop(3)
0xb7: PushEmpty(bool, object)
0xb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Call2 0x17be

0xba: Pop(1)
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: Push((int) 543117)
0xbd: Push((int) 45573)
0xbe: Push((int) 45572)
0xbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0: Pop(3)
0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0x17c8

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc6: Push((int) 543127)
0xc7: Push((int) 45583)
0xc8: Push((int) 45582)
0xc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: PushEmpty(bool)
0xcc: Stack[-1] = (bool) 1
0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0x17dc

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Call2 0x17e6

0xd5: Pop(1)
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Stack[-1] = (bool) 0
0xd8: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd9: Push((int) 543139)
0xda: Push((int) 45595)
0xdb: Push((int) 45594)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: PushEmpty(bool, object)
0xdf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Call2 0x1796

0xe1: Pop(1)
0xe2: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe3: Push((int) 543075)
0xe4: Push((int) -1)
0xe5: Push((int) 45530)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: PushEmpty(bool)
0xe9: Stack[-1] = (bool) 1
0xea: PushEmpty(bool)
0xeb: Stack[-1] = (bool) 1
0xec: PushEmpty(bool)
0xed: Stack[-1] = (bool) 1
0xee: PushEmpty(bool, object)
0xef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Call2 0x17a0

0xf1: Pop(1)
0xf2: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0x17aa

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf8: Stack[-1] = (bool) 0
0xf9: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfa: PushEmpty(bool, object)
0xfb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Call2 0x17b4

0xfd: Pop(1)
0xfe: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xff: Stack[-1] = (bool) 0
0x100: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x101: PushEmpty(bool, object)
0x102: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x103: Call2 0x17be

0x104: Pop(1)
0x105: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x106: Stack[-1] = (bool) 0
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: Push((int) 543100)
0x109: Push((int) -1)
0x10a: Push((int) 45555)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: PushEmpty(bool, object)
0x10e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Call2 0x17c8

0x110: Pop(1)
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: Push((int) 543125)
0x113: Push((int) -1)
0x114: Push((int) 45580)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: PushEmpty(bool)
0x118: Stack[-1] = (bool) 1
0x119: PushEmpty(bool)
0x11a: Stack[-1] = (bool) 1
0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Call2 0x17d2

0x11e: Pop(1)
0x11f: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0x17dc

0x123: Pop(1)
0x124: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x125: Stack[-1] = (bool) 0
0x126: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x129: Call2 0x17e6

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: Stack[-1] = (bool) 0
0x12d: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x12e: Push((int) 543147)
0x12f: Push((int) -1)
0x130: Push((int) 45602)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: PushEmpty(bool)
0x134: Stack[-1] = (bool) 1
0x135: PushEmpty(bool)
0x136: Stack[-1] = (bool) 1
0x137: PushEmpty(bool, object)
0x138: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x139: Call2 0x17f0

0x13a: Pop(1)
0x13b: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13c: PushEmpty(bool, object)
0x13d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Call2 0x17fa

0x13f: Pop(1)
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: Stack[-1] = (bool) 0
0x142: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0x1804

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: Stack[-1] = (bool) 0
0x149: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14a: Push((int) 543148)
0x14b: Push((int) -1)
0x14c: Push((int) 45603)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x151: Call2 0x1796

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: Push((int) 543074)
0x155: Push((int) -1)
0x156: Push((int) 45529)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: PushEmpty(bool)
0x15a: Stack[-1] = (bool) 1
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x17a0

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x162: Call2 0x17aa

0x163: Pop(1)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = (bool) 0
0x166: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x167: Push((int) 543090)
0x168: Push((int) -1)
0x169: Push((int) 45545)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: PushEmpty(bool)
0x16d: Stack[-1] = (bool) 1
0x16e: PushEmpty(bool, object)
0x16f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x170: Call2 0x17a0

0x171: Pop(1)
0x172: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x173: PushEmpty(bool, object)
0x174: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x175: Call2 0x17aa

0x176: Pop(1)
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: Stack[-1] = (bool) 0
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: Push((int) 543099)
0x17b: Push((int) -1)
0x17c: Push((int) 45554)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: PushEmpty(bool)
0x180: Stack[-1] = (bool) 1
0x181: PushEmpty(bool, object)
0x182: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x183: Call2 0x17c8

0x184: Pop(1)
0x185: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x186: PushEmpty(bool, object)
0x187: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x188: Call2 0x17e6

0x189: Pop(1)
0x18a: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18b: Stack[-1] = (bool) 0
0x18c: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18d: Push((int) 543126)
0x18e: Push((int) -1)
0x18f: Push((int) 45581)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: PushEmpty(bool)
0x193: Stack[-1] = (bool) 1
0x194: PushEmpty(bool)
0x195: Stack[-1] = (bool) 1
0x196: PushEmpty(bool)
0x197: Stack[-1] = (bool) 1
0x198: PushEmpty(bool, object)
0x199: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19a: Call2 0x17d2

0x19b: Pop(1)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19d: PushEmpty(bool, object)
0x19e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19f: Call2 0x17dc

0x1a0: Pop(1)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Stack[-1] = (bool) 0
0x1a3: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a4: PushEmpty(bool, object)
0x1a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a6: Call2 0x17f0

0x1a7: Pop(1)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Stack[-1] = (bool) 0
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ab: PushEmpty(bool, object)
0x1ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ad: Call2 0x1804

0x1ae: Pop(1)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: Stack[-1] = (bool) 0
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b2: Push((int) 543149)
0x1b3: Push((int) -1)
0x1b4: Push((int) 45604)
0x1b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b6: Pop(3)
0x1b7: PushEmpty(bool)
0x1b8: Stack[-1] = (bool) 1
0x1b9: PushEmpty(bool)
0x1ba: Stack[-1] = (bool) 1
0x1bb: PushEmpty(bool)
0x1bc: Stack[-1] = (bool) 1
0x1bd: PushEmpty(bool)
0x1be: Stack[-1] = (bool) 1
0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call2 0x17b4

0x1c2: Pop(1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c4: PushEmpty(bool, object)
0x1c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Call2 0x17be

0x1c7: Pop(1)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: Stack[-1] = (bool) 0
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cb: PushEmpty(bool, object)
0x1cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cd: Call2 0x17e6

0x1ce: Pop(1)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1d0: Stack[-1] = (bool) 0
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d2: PushEmpty(bool, object)
0x1d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d4: Call2 0x17fa

0x1d5: Pop(1)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Stack[-1] = (bool) 0
0x1d8: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d9: PushEmpty(bool, object)
0x1da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Call2 0x1804

0x1dc: Pop(1)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Stack[-1] = (bool) 0
0x1df: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e0: Push((int) 543150)
0x1e1: Push((int) -1)
0x1e2: Push((int) 45605)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: GOTO 0x2c8

0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = "Neutral"
0x1e8: Call2 0x2e6

0x1e9: Pop(1)
0x1ea: Push((int) 536854)
0x1eb: @@ SetMessage(Stack[-1])
0x1ec: Pop(1)
0x1ed: @@ ClearReplies()
0x1ee: Pop(0)
0x1ef: Push((int) 536855)
0x1f0: Push((int) -1)
0x1f1: Push((int) 38691)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: PushEmpty(bool)
0x1f5: Stack[-1] = (bool) 0
0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Call2 0x1796

0x1f9: Pop(1)
0x1fa: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fb: PushEmpty(bool, object)
0x1fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fd: Call2 0x180e

0x1fe: Pop(1)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[-1] = (bool) 1
0x201: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x202: Push((int) 536856)
0x203: Push((int) 38693)
0x204: Push((int) 38692)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: PushEmpty(bool)
0x208: Stack[-1] = (bool) 0
0x209: PushEmpty(bool, object)
0x20a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20b: Call2 0x1796

0x20c: Pop(1)
0x20d: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20e: PushEmpty(bool, object)
0x20f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x210: Call2 0x1818

0x211: Pop(1)
0x212: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x213: Stack[-1] = (bool) 1
0x214: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x215: Push((int) 536870)
0x216: Push((int) 38709)
0x217: Push((int) 38708)
0x218: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x219: Pop(3)
0x21a: PushEmpty(bool, object)
0x21b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21c: Call2 0x17a0

0x21d: Pop(1)
0x21e: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21f: Push((int) 536885)
0x220: Push((int) 38724)
0x221: Push((int) 38723)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: PushEmpty(bool, object)
0x225: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x226: Call2 0x17aa

0x227: Pop(1)
0x228: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x229: Push((int) 536904)
0x22a: Push((int) 38743)
0x22b: Push((int) 38742)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: PushEmpty(bool, object)
0x22f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x230: Call2 0x17b4

0x231: Pop(1)
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: Push((int) 536916)
0x234: Push((int) 38755)
0x235: Push((int) 38754)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: PushEmpty(bool)
0x239: Stack[-1] = (bool) 0
0x23a: PushEmpty(bool, object)
0x23b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23c: Call2 0x17c8

0x23d: Pop(1)
0x23e: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x23f: PushEmpty(bool, object)
0x240: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x241: Call2 0x177e

0x242: Pop(1)
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: Stack[-1] = (bool) 1
0x245: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x246: Push((int) 536931)
0x247: Push((int) 38770)
0x248: Push((int) 38769)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: PushEmpty(bool, object)
0x24c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24d: Call2 0x17dc

0x24e: Pop(1)
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: Push((int) 536943)
0x251: Push((int) 38782)
0x252: Push((int) 38781)
0x253: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(3)
0x255: PushEmpty(bool, object)
0x256: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x257: Call2 0x17e6

0x258: Pop(1)
0x259: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25a: Push((int) 536961)
0x25b: Push((int) 38800)
0x25c: Push((int) 38799)
0x25d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25e: Pop(3)
0x25f: PushEmpty(bool, object)
0x260: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x261: Call2 0x17f0

0x262: Pop(1)
0x263: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x264: Push((int) 536978)
0x265: Push((int) 38817)
0x266: Push((int) 38816)
0x267: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(3)
0x269: PushEmpty(bool)
0x26a: Stack[-1] = (bool) 0
0x26b: PushEmpty(bool, object)
0x26c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26d: Call2 0x17fa

0x26e: Pop(1)
0x26f: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x270: PushEmpty(bool, object)
0x271: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x272: Call2 0x177e

0x273: Pop(1)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Stack[-1] = (bool) 1
0x276: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x277: Push((int) 536993)
0x278: Push((int) 38832)
0x279: Push((int) 38831)
0x27a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27b: Pop(3)
0x27c: PushEmpty(bool)
0x27d: Stack[-1] = (bool) 0
0x27e: PushEmpty(bool, object)
0x27f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x280: Call2 0x1796

0x281: Pop(1)
0x282: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x283: PushEmpty(bool, object)
0x284: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x285: Call2 0x177e

0x286: Pop(1)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Stack[-1] = (bool) 1
0x289: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28a: Push((int) 537006)
0x28b: Push((int) 38846)
0x28c: Push((int) 38845)
0x28d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28e: Pop(3)
0x28f: PushEmpty(bool)
0x290: Stack[-1] = (bool) 0
0x291: PushEmpty(bool, object)
0x292: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x293: Call2 0x1796

0x294: Pop(1)
0x295: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x296: PushEmpty(bool, object)
0x297: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x298: Call2 0x177e

0x299: Pop(1)
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: Stack[-1] = (bool) 1
0x29c: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29d: Push((int) 537017)
0x29e: Push((int) 38857)
0x29f: Push((int) 38856)
0x2a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a1: Pop(3)
0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a4: Call2 0x1796

0x2a5: Pop(1)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a7: Push((int) 537025)
0x2a8: Push((int) 38865)
0x2a9: Push((int) 38864)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ae: Call2 0x1796

0x2af: Pop(1)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b1: Push((int) 537035)
0x2b2: Push((int) 38875)
0x2b3: Push((int) 38874)
0x2b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b5: Pop(3)
0x2b6: PushEmpty(bool, object)
0x2b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b8: Call2 0x1796

0x2b9: Pop(1)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bb: Push((int) 537044)
0x2bc: Push((int) 38884)
0x2bd: Push((int) 38883)
0x2be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bf: Pop(3)
0x2c0: Push((int) 537050)
0x2c1: Push((int) -1)
0x2c2: Push((int) 38889)
0x2c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c4: Pop(3)
0x2c5: GOTO 0x2c8

0x2c6: Return(); Pop(0)

0x2c7: GOTO 0x76

0x2c8: PushEmpty(bool)
0x2c9: Call2 0x1b24

0x2ca: Pop(0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2cc: @ lshWaitForAnimEnd()
0x2cd: Pop(0)
0x2ce: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: GOTO 0x2d6

0x2d1: PushEmpty(string)
0x2d2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2d3: Call2 0x167f

0x2d4: Pop(1)
0x2d5: GOTO 0x2cc

0x2d6: GOTO 0x2e5

0x2d7: Push("all")
0x2d8: Push("idle")
0x2d9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2da: Pop(2)
0x2db: @ WaitForAnimEnd()
0x2dc: Pop(0)
0x2dd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: GOTO 0x2e5

0x2e0: Push("all")
0x2e1: Push("idle")
0x2e2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e3: Pop(2)
0x2e4: GOTO 0x2db

0x2e5: Return(); Pop(0)

0x2e6: PushEmpty()
0x2e7: PushEmpty(bool)
0x2e8: Call2 0x1b24

0x2e9: Pop(0)
0x2ea: Pop(1); Push((bool) Stack[-1] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: Return(); Pop(0)

0x2ed: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ef: Return(); Pop(0)

0x2f0: PushEmpty(string, bool)
0x2f1: Stack[-2] = Stack[-3]
0x2f2: Push("")
0x2f3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f5: Stack[-1] = (bool) 0
0x2f6: GOTO 0x2f8

0x2f7: Stack[-1] = (bool) 1
0x2f8: Call2 0x168f

0x2f9: Pop(2)
0x2fa: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty()
0x2fd: Push((int) 1)
0x2fe: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0x2ff: PushEmpty()
0x300: Call2 0x16a9

0x301: Pop(0)
0x302: Push((int) 45532)
0x303: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x305: PushEmpty(object, object)
0x306: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x307: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x308: Call2 0x1779

0x309: Pop(2)
0x30a: Push((int) 45530)
0x30b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30d: PushEmpty(object, object)
0x30e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x310: Call2 0x1779

0x311: Pop(2)
0x312: Push((int) 45555)
0x313: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x315: PushEmpty(object, object)
0x316: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x317: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x318: Call2 0x1779

0x319: Pop(2)
0x31a: Push((int) 45580)
0x31b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: PushEmpty(object, object)
0x31e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x320: Call2 0x1779

0x321: Pop(2)
0x322: Push((int) 45602)
0x323: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x325: PushEmpty(object, object)
0x326: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x327: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x328: Call2 0x1779

0x329: Pop(2)
0x32a: Push((int) 45603)
0x32b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32d: PushEmpty(object, object)
0x32e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x330: Call2 0x1779

0x331: Pop(2)
0x332: Push((int) 38691)
0x333: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x335: PushEmpty(object, object)
0x336: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x337: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x338: Call2 0x1779

0x339: Pop(2)
0x33a: Push((int) 45527)
0x33b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x33d: PushEmpty(bool, object)
0x33e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33f: Call2 0x178a

0x340: Pop(1)
0x341: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x342: PushEmpty(string)
0x343: Stack[-1] = "Neutral"
0x344: Call2 0x2e6

0x345: Pop(1)
0x346: Push((int) 543072)
0x347: @@ SetMessage(Stack[-1])
0x348: Pop(1)
0x349: @@ ClearReplies()
0x34a: Pop(0)
0x34b: PushEmpty(bool, object)
0x34c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34d: Call2 0x1796

0x34e: Pop(1)
0x34f: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x350: Push((int) 543073)
0x351: Push((int) 45531)
0x352: Push((int) 45528)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: PushEmpty(bool, object)
0x356: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x357: Call2 0x17a0

0x358: Pop(1)
0x359: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35a: Push((int) 543092)
0x35b: Push((int) 45550)
0x35c: Push((int) 45547)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: PushEmpty(bool)
0x360: Stack[-1] = (bool) 1
0x361: PushEmpty(bool, object)
0x362: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x363: Call2 0x17aa

0x364: Pop(1)
0x365: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x368: Call2 0x17d2

0x369: Pop(1)
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: Stack[-1] = (bool) 0
0x36c: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36d: Push((int) 543108)
0x36e: Push((int) 45564)
0x36f: Push((int) 45563)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: PushEmpty(bool, object)
0x373: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x374: Call2 0x17b4

0x375: Pop(1)
0x376: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x377: Push((int) 543101)
0x378: Push((int) 45557)
0x379: Push((int) 45556)
0x37a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(3)
0x37c: PushEmpty(bool, object)
0x37d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37e: Call2 0x17be

0x37f: Pop(1)
0x380: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x381: Push((int) 543117)
0x382: Push((int) 45573)
0x383: Push((int) 45572)
0x384: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(3)
0x386: PushEmpty(bool, object)
0x387: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x388: Call2 0x17c8

0x389: Pop(1)
0x38a: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38b: Push((int) 543127)
0x38c: Push((int) 45583)
0x38d: Push((int) 45582)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: PushEmpty(bool)
0x391: Stack[-1] = (bool) 1
0x392: PushEmpty(bool, object)
0x393: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x394: Call2 0x17dc

0x395: Pop(1)
0x396: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x397: PushEmpty(bool, object)
0x398: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x399: Call2 0x17e6

0x39a: Pop(1)
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: Stack[-1] = (bool) 0
0x39d: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x39e: Push((int) 543139)
0x39f: Push((int) 45595)
0x3a0: Push((int) 45594)
0x3a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a2: Pop(3)
0x3a3: PushEmpty(bool, object)
0x3a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a5: Call2 0x1796

0x3a6: Pop(1)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a8: Push((int) 543075)
0x3a9: Push((int) -1)
0x3aa: Push((int) 45530)
0x3ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: PushEmpty(bool)
0x3ae: Stack[-1] = (bool) 1
0x3af: PushEmpty(bool)
0x3b0: Stack[-1] = (bool) 1
0x3b1: PushEmpty(bool)
0x3b2: Stack[-1] = (bool) 1
0x3b3: PushEmpty(bool, object)
0x3b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b5: Call2 0x17a0

0x3b6: Pop(1)
0x3b7: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b8: PushEmpty(bool, object)
0x3b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ba: Call2 0x17aa

0x3bb: Pop(1)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: Stack[-1] = (bool) 0
0x3be: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3bf: PushEmpty(bool, object)
0x3c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c1: Call2 0x17b4

0x3c2: Pop(1)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c4: Stack[-1] = (bool) 0
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c6: PushEmpty(bool, object)
0x3c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c8: Call2 0x17be

0x3c9: Pop(1)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: Stack[-1] = (bool) 0
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cd: Push((int) 543100)
0x3ce: Push((int) -1)
0x3cf: Push((int) 45555)
0x3d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: PushEmpty(bool, object)
0x3d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d4: Call2 0x17c8

0x3d5: Pop(1)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d7: Push((int) 543125)
0x3d8: Push((int) -1)
0x3d9: Push((int) 45580)
0x3da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3db: Pop(3)
0x3dc: PushEmpty(bool)
0x3dd: Stack[-1] = (bool) 1
0x3de: PushEmpty(bool)
0x3df: Stack[-1] = (bool) 1
0x3e0: PushEmpty(bool, object)
0x3e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e2: Call2 0x17d2

0x3e3: Pop(1)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e5: PushEmpty(bool, object)
0x3e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e7: Call2 0x17dc

0x3e8: Pop(1)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3ea: Stack[-1] = (bool) 0
0x3eb: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3ec: PushEmpty(bool, object)
0x3ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ee: Call2 0x17e6

0x3ef: Pop(1)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f1: Stack[-1] = (bool) 0
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f3: Push((int) 543147)
0x3f4: Push((int) -1)
0x3f5: Push((int) 45602)
0x3f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f7: Pop(3)
0x3f8: PushEmpty(bool)
0x3f9: Stack[-1] = (bool) 1
0x3fa: PushEmpty(bool)
0x3fb: Stack[-1] = (bool) 1
0x3fc: PushEmpty(bool, object)
0x3fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fe: Call2 0x17f0

0x3ff: Pop(1)
0x400: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x401: PushEmpty(bool, object)
0x402: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x403: Call2 0x17fa

0x404: Pop(1)
0x405: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x406: Stack[-1] = (bool) 0
0x407: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x408: PushEmpty(bool, object)
0x409: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40a: Call2 0x1804

0x40b: Pop(1)
0x40c: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40d: Stack[-1] = (bool) 0
0x40e: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x40f: Push((int) 543148)
0x410: Push((int) -1)
0x411: Push((int) 45603)
0x412: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x413: Pop(3)
0x414: PushEmpty(bool, object)
0x415: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x416: Call2 0x1796

0x417: Pop(1)
0x418: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x419: Push((int) 543074)
0x41a: Push((int) -1)
0x41b: Push((int) 45529)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: PushEmpty(bool)
0x41f: Stack[-1] = (bool) 1
0x420: PushEmpty(bool, object)
0x421: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x422: Call2 0x17a0

0x423: Pop(1)
0x424: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x425: PushEmpty(bool, object)
0x426: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x427: Call2 0x17aa

0x428: Pop(1)
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: Stack[-1] = (bool) 0
0x42b: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42c: Push((int) 543090)
0x42d: Push((int) -1)
0x42e: Push((int) 45545)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: PushEmpty(bool)
0x432: Stack[-1] = (bool) 1
0x433: PushEmpty(bool, object)
0x434: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x435: Call2 0x17a0

0x436: Pop(1)
0x437: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x438: PushEmpty(bool, object)
0x439: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43a: Call2 0x17aa

0x43b: Pop(1)
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: Stack[-1] = (bool) 0
0x43e: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x43f: Push((int) 543099)
0x440: Push((int) -1)
0x441: Push((int) 45554)
0x442: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x443: Pop(3)
0x444: PushEmpty(bool)
0x445: Stack[-1] = (bool) 1
0x446: PushEmpty(bool, object)
0x447: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x448: Call2 0x17c8

0x449: Pop(1)
0x44a: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44b: PushEmpty(bool, object)
0x44c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44d: Call2 0x17e6

0x44e: Pop(1)
0x44f: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x450: Stack[-1] = (bool) 0
0x451: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x452: Push((int) 543126)
0x453: Push((int) -1)
0x454: Push((int) 45581)
0x455: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x456: Pop(3)
0x457: PushEmpty(bool)
0x458: Stack[-1] = (bool) 1
0x459: PushEmpty(bool)
0x45a: Stack[-1] = (bool) 1
0x45b: PushEmpty(bool)
0x45c: Stack[-1] = (bool) 1
0x45d: PushEmpty(bool, object)
0x45e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x45f: Call2 0x17d2

0x460: Pop(1)
0x461: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x462: PushEmpty(bool, object)
0x463: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x464: Call2 0x17dc

0x465: Pop(1)
0x466: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x467: Stack[-1] = (bool) 0
0x468: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x469: PushEmpty(bool, object)
0x46a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x46b: Call2 0x17f0

0x46c: Pop(1)
0x46d: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46e: Stack[-1] = (bool) 0
0x46f: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x470: PushEmpty(bool, object)
0x471: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x472: Call2 0x1804

0x473: Pop(1)
0x474: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x475: Stack[-1] = (bool) 0
0x476: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x477: Push((int) 543149)
0x478: Push((int) -1)
0x479: Push((int) 45604)
0x47a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(3)
0x47c: PushEmpty(bool)
0x47d: Stack[-1] = (bool) 1
0x47e: PushEmpty(bool)
0x47f: Stack[-1] = (bool) 1
0x480: PushEmpty(bool)
0x481: Stack[-1] = (bool) 1
0x482: PushEmpty(bool)
0x483: Stack[-1] = (bool) 1
0x484: PushEmpty(bool, object)
0x485: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x486: Call2 0x17b4

0x487: Pop(1)
0x488: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x489: PushEmpty(bool, object)
0x48a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x48b: Call2 0x17be

0x48c: Pop(1)
0x48d: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48e: Stack[-1] = (bool) 0
0x48f: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x490: PushEmpty(bool, object)
0x491: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x492: Call2 0x17e6

0x493: Pop(1)
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: Stack[-1] = (bool) 0
0x496: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x497: PushEmpty(bool, object)
0x498: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x499: Call2 0x17fa

0x49a: Pop(1)
0x49b: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49c: Stack[-1] = (bool) 0
0x49d: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x49e: PushEmpty(bool, object)
0x49f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a0: Call2 0x1804

0x4a1: Pop(1)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a3: Stack[-1] = (bool) 0
0x4a4: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a5: Push((int) 543150)
0x4a6: Push((int) -1)
0x4a7: Push((int) 45605)
0x4a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a9: Pop(3)
0x4aa: Return(); Pop(0)

0x4ab: PushEmpty(string)
0x4ac: Stack[-1] = "Neutral"
0x4ad: Call2 0x2e6

0x4ae: Pop(1)
0x4af: Push((int) 536854)
0x4b0: @@ SetMessage(Stack[-1])
0x4b1: Pop(1)
0x4b2: @@ ClearReplies()
0x4b3: Pop(0)
0x4b4: Push((int) 536855)
0x4b5: Push((int) -1)
0x4b6: Push((int) 38691)
0x4b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b8: Pop(3)
0x4b9: PushEmpty(bool)
0x4ba: Stack[-1] = (bool) 0
0x4bb: PushEmpty(bool, object)
0x4bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4bd: Call2 0x1796

0x4be: Pop(1)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c0: PushEmpty(bool, object)
0x4c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c2: Call2 0x180e

0x4c3: Pop(1)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: Stack[-1] = (bool) 1
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c7: Push((int) 536856)
0x4c8: Push((int) 38693)
0x4c9: Push((int) 38692)
0x4ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cb: Pop(3)
0x4cc: PushEmpty(bool)
0x4cd: Stack[-1] = (bool) 0
0x4ce: PushEmpty(bool, object)
0x4cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d0: Call2 0x1796

0x4d1: Pop(1)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d3: PushEmpty(bool, object)
0x4d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d5: Call2 0x1818

0x4d6: Pop(1)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d8: Stack[-1] = (bool) 1
0x4d9: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4da: Push((int) 536870)
0x4db: Push((int) 38709)
0x4dc: Push((int) 38708)
0x4dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4de: Pop(3)
0x4df: PushEmpty(bool, object)
0x4e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e1: Call2 0x17a0

0x4e2: Pop(1)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e4: Push((int) 536885)
0x4e5: Push((int) 38724)
0x4e6: Push((int) 38723)
0x4e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e8: Pop(3)
0x4e9: PushEmpty(bool, object)
0x4ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4eb: Call2 0x17aa

0x4ec: Pop(1)
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4ee: Push((int) 536904)
0x4ef: Push((int) 38743)
0x4f0: Push((int) 38742)
0x4f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f2: Pop(3)
0x4f3: PushEmpty(bool, object)
0x4f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f5: Call2 0x17b4

0x4f6: Pop(1)
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4f8: Push((int) 536916)
0x4f9: Push((int) 38755)
0x4fa: Push((int) 38754)
0x4fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fc: Pop(3)
0x4fd: PushEmpty(bool)
0x4fe: Stack[-1] = (bool) 0
0x4ff: PushEmpty(bool, object)
0x500: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x501: Call2 0x17c8

0x502: Pop(1)
0x503: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x504: PushEmpty(bool, object)
0x505: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x506: Call2 0x177e

0x507: Pop(1)
0x508: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x509: Stack[-1] = (bool) 1
0x50a: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50b: Push((int) 536931)
0x50c: Push((int) 38770)
0x50d: Push((int) 38769)
0x50e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50f: Pop(3)
0x510: PushEmpty(bool, object)
0x511: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x512: Call2 0x17dc

0x513: Pop(1)
0x514: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x515: Push((int) 536943)
0x516: Push((int) 38782)
0x517: Push((int) 38781)
0x518: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x519: Pop(3)
0x51a: PushEmpty(bool, object)
0x51b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x51c: Call2 0x17e6

0x51d: Pop(1)
0x51e: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x51f: Push((int) 536961)
0x520: Push((int) 38800)
0x521: Push((int) 38799)
0x522: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x523: Pop(3)
0x524: PushEmpty(bool, object)
0x525: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x526: Call2 0x17f0

0x527: Pop(1)
0x528: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x529: Push((int) 536978)
0x52a: Push((int) 38817)
0x52b: Push((int) 38816)
0x52c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52d: Pop(3)
0x52e: PushEmpty(bool)
0x52f: Stack[-1] = (bool) 0
0x530: PushEmpty(bool, object)
0x531: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x532: Call2 0x17fa

0x533: Pop(1)
0x534: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x535: PushEmpty(bool, object)
0x536: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x537: Call2 0x177e

0x538: Pop(1)
0x539: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x53a: Stack[-1] = (bool) 1
0x53b: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x53c: Push((int) 536993)
0x53d: Push((int) 38832)
0x53e: Push((int) 38831)
0x53f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x540: Pop(3)
0x541: PushEmpty(bool)
0x542: Stack[-1] = (bool) 0
0x543: PushEmpty(bool, object)
0x544: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x545: Call2 0x1796

0x546: Pop(1)
0x547: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x548: PushEmpty(bool, object)
0x549: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54a: Call2 0x177e

0x54b: Pop(1)
0x54c: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54d: Stack[-1] = (bool) 1
0x54e: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x54f: Push((int) 537006)
0x550: Push((int) 38846)
0x551: Push((int) 38845)
0x552: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x553: Pop(3)
0x554: PushEmpty(bool)
0x555: Stack[-1] = (bool) 0
0x556: PushEmpty(bool, object)
0x557: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x558: Call2 0x1796

0x559: Pop(1)
0x55a: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55b: PushEmpty(bool, object)
0x55c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x55d: Call2 0x177e

0x55e: Pop(1)
0x55f: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x560: Stack[-1] = (bool) 1
0x561: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x562: Push((int) 537017)
0x563: Push((int) 38857)
0x564: Push((int) 38856)
0x565: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x566: Pop(3)
0x567: PushEmpty(bool, object)
0x568: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x569: Call2 0x1796

0x56a: Pop(1)
0x56b: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56c: Push((int) 537025)
0x56d: Push((int) 38865)
0x56e: Push((int) 38864)
0x56f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x570: Pop(3)
0x571: PushEmpty(bool, object)
0x572: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x573: Call2 0x1796

0x574: Pop(1)
0x575: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x576: Push((int) 537035)
0x577: Push((int) 38875)
0x578: Push((int) 38874)
0x579: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57a: Pop(3)
0x57b: PushEmpty(bool, object)
0x57c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57d: Call2 0x1796

0x57e: Pop(1)
0x57f: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x580: Push((int) 537044)
0x581: Push((int) 38884)
0x582: Push((int) 38883)
0x583: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x584: Pop(3)
0x585: Push((int) 537050)
0x586: Push((int) -1)
0x587: Push((int) 38889)
0x588: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x589: Pop(3)
0x58a: Return(); Pop(0)

0x58b: Push((int) 38884)
0x58c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x58e: PushEmpty(string)
0x58f: Stack[-1] = "Neutral"
0x590: Call2 0x2e6

0x591: Pop(1)
0x592: Push((int) 537045)
0x593: @@ SetMessage(Stack[-1])
0x594: Pop(1)
0x595: @@ ClearReplies()
0x596: Pop(0)
0x597: Push((int) 537046)
0x598: Push((int) 38886)
0x599: Push((int) 38885)
0x59a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59b: Pop(3)
0x59c: Push((int) 537049)
0x59d: Push((int) -1)
0x59e: Push((int) 38888)
0x59f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a0: Pop(3)
0x5a1: Return(); Pop(0)

0x5a2: Push((int) 38886)
0x5a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5a5: PushEmpty(string)
0x5a6: Stack[-1] = "Neutral"
0x5a7: Call2 0x2e6

0x5a8: Pop(1)
0x5a9: Push((int) 537047)
0x5aa: @@ SetMessage(Stack[-1])
0x5ab: Pop(1)
0x5ac: @@ ClearReplies()
0x5ad: Pop(0)
0x5ae: Push((int) 537048)
0x5af: Push((int) -1)
0x5b0: Push((int) 38887)
0x5b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b2: Pop(3)
0x5b3: Return(); Pop(0)

0x5b4: Push((int) 38875)
0x5b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b6: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5b7: PushEmpty(string)
0x5b8: Stack[-1] = "Neutral"
0x5b9: Call2 0x2e6

0x5ba: Pop(1)
0x5bb: Push((int) 537036)
0x5bc: @@ SetMessage(Stack[-1])
0x5bd: Pop(1)
0x5be: @@ ClearReplies()
0x5bf: Pop(0)
0x5c0: Push((int) 537037)
0x5c1: Push((int) 38877)
0x5c2: Push((int) 38876)
0x5c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c4: Pop(3)
0x5c5: Push((int) 537043)
0x5c6: Push((int) -1)
0x5c7: Push((int) 38882)
0x5c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c9: Pop(3)
0x5ca: Return(); Pop(0)

0x5cb: Push((int) 38877)
0x5cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cd: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5ce: PushEmpty(string)
0x5cf: Stack[-1] = "Neutral"
0x5d0: Call2 0x2e6

0x5d1: Pop(1)
0x5d2: Push((int) 537038)
0x5d3: @@ SetMessage(Stack[-1])
0x5d4: Pop(1)
0x5d5: @@ ClearReplies()
0x5d6: Pop(0)
0x5d7: PushEmpty(bool, object)
0x5d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d9: Call2 0x177e

0x5da: Pop(1)
0x5db: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5dc: Push((int) 537039)
0x5dd: Push((int) 38879)
0x5de: Push((int) 38878)
0x5df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e0: Pop(3)
0x5e1: Push((int) 537042)
0x5e2: Push((int) -1)
0x5e3: Push((int) 38881)
0x5e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e5: Pop(3)
0x5e6: Return(); Pop(0)

0x5e7: Push((int) 38879)
0x5e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5ea: PushEmpty(string)
0x5eb: Stack[-1] = "Neutral"
0x5ec: Call2 0x2e6

0x5ed: Pop(1)
0x5ee: Push((int) 537040)
0x5ef: @@ SetMessage(Stack[-1])
0x5f0: Pop(1)
0x5f1: @@ ClearReplies()
0x5f2: Pop(0)
0x5f3: Push((int) 537041)
0x5f4: Push((int) -1)
0x5f5: Push((int) 38880)
0x5f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f7: Pop(3)
0x5f8: Return(); Pop(0)

0x5f9: Push((int) 38865)
0x5fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fb: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x5fc: PushEmpty(string)
0x5fd: Stack[-1] = "Neutral"
0x5fe: Call2 0x2e6

0x5ff: Pop(1)
0x600: Push((int) 537026)
0x601: @@ SetMessage(Stack[-1])
0x602: Pop(1)
0x603: @@ ClearReplies()
0x604: Pop(0)
0x605: Push((int) 537027)
0x606: Push((int) 38867)
0x607: Push((int) 38866)
0x608: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x609: Pop(3)
0x60a: Push((int) 537034)
0x60b: Push((int) -1)
0x60c: Push((int) 38873)
0x60d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60e: Pop(3)
0x60f: Return(); Pop(0)

0x610: Push((int) 38867)
0x611: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x613: PushEmpty(string)
0x614: Stack[-1] = "Neutral"
0x615: Call2 0x2e6

0x616: Pop(1)
0x617: Push((int) 537028)
0x618: @@ SetMessage(Stack[-1])
0x619: Pop(1)
0x61a: @@ ClearReplies()
0x61b: Pop(0)
0x61c: Push((int) 537029)
0x61d: Push((int) 38869)
0x61e: Push((int) 38868)
0x61f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x620: Pop(3)
0x621: Push((int) 537033)
0x622: Push((int) -1)
0x623: Push((int) 38872)
0x624: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x625: Pop(3)
0x626: Return(); Pop(0)

0x627: Push((int) 38869)
0x628: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x629: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x62a: PushEmpty(string)
0x62b: Stack[-1] = "Neutral"
0x62c: Call2 0x2e6

0x62d: Pop(1)
0x62e: Push((int) 537030)
0x62f: @@ SetMessage(Stack[-1])
0x630: Pop(1)
0x631: @@ ClearReplies()
0x632: Pop(0)
0x633: Push((int) 537031)
0x634: Push((int) -1)
0x635: Push((int) 38870)
0x636: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x637: Pop(3)
0x638: PushEmpty(bool, object)
0x639: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x63a: Call2 0x177e

0x63b: Pop(1)
0x63c: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x63d: Push((int) 537032)
0x63e: Push((int) -1)
0x63f: Push((int) 38871)
0x640: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x641: Pop(3)
0x642: Return(); Pop(0)

0x643: Push((int) 38857)
0x644: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x646: PushEmpty(string)
0x647: Stack[-1] = "Neutral"
0x648: Call2 0x2e6

0x649: Pop(1)
0x64a: Push((int) 537018)
0x64b: @@ SetMessage(Stack[-1])
0x64c: Pop(1)
0x64d: @@ ClearReplies()
0x64e: Pop(0)
0x64f: Push((int) 537019)
0x650: Push((int) 38859)
0x651: Push((int) 38858)
0x652: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x653: Pop(3)
0x654: Return(); Pop(0)

0x655: Push((int) 38859)
0x656: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x658: PushEmpty(string)
0x659: Stack[-1] = "Neutral"
0x65a: Call2 0x2e6

0x65b: Pop(1)
0x65c: Push((int) 537020)
0x65d: @@ SetMessage(Stack[-1])
0x65e: Pop(1)
0x65f: @@ ClearReplies()
0x660: Pop(0)
0x661: Push((int) 537021)
0x662: Push((int) 38861)
0x663: Push((int) 38860)
0x664: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x665: Pop(3)
0x666: Return(); Pop(0)

0x667: Push((int) 38861)
0x668: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x669: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x66a: PushEmpty(string)
0x66b: Stack[-1] = "Neutral"
0x66c: Call2 0x2e6

0x66d: Pop(1)
0x66e: Push((int) 537022)
0x66f: @@ SetMessage(Stack[-1])
0x670: Pop(1)
0x671: @@ ClearReplies()
0x672: Pop(0)
0x673: Push((int) 537023)
0x674: Push((int) -1)
0x675: Push((int) 38862)
0x676: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x677: Pop(3)
0x678: Push((int) 537024)
0x679: Push((int) -1)
0x67a: Push((int) 38863)
0x67b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67c: Pop(3)
0x67d: Return(); Pop(0)

0x67e: Push((int) 38846)
0x67f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x680: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x681: PushEmpty(string)
0x682: Stack[-1] = "Neutral"
0x683: Call2 0x2e6

0x684: Pop(1)
0x685: Push((int) 537007)
0x686: @@ SetMessage(Stack[-1])
0x687: Pop(1)
0x688: @@ ClearReplies()
0x689: Pop(0)
0x68a: Push((int) 537008)
0x68b: Push((int) 38848)
0x68c: Push((int) 38847)
0x68d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68e: Pop(3)
0x68f: Push((int) 537016)
0x690: Push((int) -1)
0x691: Push((int) 38855)
0x692: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x693: Pop(3)
0x694: Return(); Pop(0)

0x695: Push((int) 38848)
0x696: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x697: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x698: PushEmpty(string)
0x699: Stack[-1] = "Neutral"
0x69a: Call2 0x2e6

0x69b: Pop(1)
0x69c: Push((int) 537009)
0x69d: @@ SetMessage(Stack[-1])
0x69e: Pop(1)
0x69f: @@ ClearReplies()
0x6a0: Pop(0)
0x6a1: Push((int) 537010)
0x6a2: Push((int) 38850)
0x6a3: Push((int) 38849)
0x6a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a5: Pop(3)
0x6a6: Return(); Pop(0)

0x6a7: Push((int) 38850)
0x6a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a9: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6aa: PushEmpty(string)
0x6ab: Stack[-1] = "Neutral"
0x6ac: Call2 0x2e6

0x6ad: Pop(1)
0x6ae: Push((int) 537011)
0x6af: @@ SetMessage(Stack[-1])
0x6b0: Pop(1)
0x6b1: @@ ClearReplies()
0x6b2: Pop(0)
0x6b3: Push((int) 537012)
0x6b4: Push((int) 38852)
0x6b5: Push((int) 38851)
0x6b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b7: Pop(3)
0x6b8: Return(); Pop(0)

0x6b9: Push((int) 38852)
0x6ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6bc: PushEmpty(string)
0x6bd: Stack[-1] = "Neutral"
0x6be: Call2 0x2e6

0x6bf: Pop(1)
0x6c0: Push((int) 537013)
0x6c1: @@ SetMessage(Stack[-1])
0x6c2: Pop(1)
0x6c3: @@ ClearReplies()
0x6c4: Pop(0)
0x6c5: Push((int) 537014)
0x6c6: Push((int) -1)
0x6c7: Push((int) 38853)
0x6c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c9: Pop(3)
0x6ca: Push((int) 537015)
0x6cb: Push((int) -1)
0x6cc: Push((int) 38854)
0x6cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ce: Pop(3)
0x6cf: Return(); Pop(0)

0x6d0: Push((int) 38832)
0x6d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6e7; Pop(1)

0x6d3: PushEmpty(string)
0x6d4: Stack[-1] = "Neutral"
0x6d5: Call2 0x2e6

0x6d6: Pop(1)
0x6d7: Push((int) 536994)
0x6d8: @@ SetMessage(Stack[-1])
0x6d9: Pop(1)
0x6da: @@ ClearReplies()
0x6db: Pop(0)
0x6dc: Push((int) 536995)
0x6dd: Push((int) 38834)
0x6de: Push((int) 38833)
0x6df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e0: Pop(3)
0x6e1: Push((int) 537005)
0x6e2: Push((int) -1)
0x6e3: Push((int) 38844)
0x6e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e5: Pop(3)
0x6e6: Return(); Pop(0)

0x6e7: Push((int) 38834)
0x6e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e9: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6ea: PushEmpty(string)
0x6eb: Stack[-1] = "Neutral"
0x6ec: Call2 0x2e6

0x6ed: Pop(1)
0x6ee: Push((int) 536996)
0x6ef: @@ SetMessage(Stack[-1])
0x6f0: Pop(1)
0x6f1: @@ ClearReplies()
0x6f2: Pop(0)
0x6f3: Push((int) 536997)
0x6f4: Push((int) 38836)
0x6f5: Push((int) 38835)
0x6f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f7: Pop(3)
0x6f8: Push((int) 537004)
0x6f9: Push((int) -1)
0x6fa: Push((int) 38843)
0x6fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fc: Pop(3)
0x6fd: Return(); Pop(0)

0x6fe: Push((int) 38836)
0x6ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x700: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x701: PushEmpty(string)
0x702: Stack[-1] = "Neutral"
0x703: Call2 0x2e6

0x704: Pop(1)
0x705: Push((int) 536998)
0x706: @@ SetMessage(Stack[-1])
0x707: Pop(1)
0x708: @@ ClearReplies()
0x709: Pop(0)
0x70a: Push((int) 536999)
0x70b: Push((int) 38838)
0x70c: Push((int) 38837)
0x70d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70e: Pop(3)
0x70f: Push((int) 537003)
0x710: Push((int) 38838)
0x711: Push((int) 38841)
0x712: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x713: Pop(3)
0x714: Return(); Pop(0)

0x715: Push((int) 38838)
0x716: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x717: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x718: PushEmpty(string)
0x719: Stack[-1] = "Neutral"
0x71a: Call2 0x2e6

0x71b: Pop(1)
0x71c: Push((int) 537000)
0x71d: @@ SetMessage(Stack[-1])
0x71e: Pop(1)
0x71f: @@ ClearReplies()
0x720: Pop(0)
0x721: Push((int) 537001)
0x722: Push((int) -1)
0x723: Push((int) 38839)
0x724: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x725: Pop(3)
0x726: Push((int) 537002)
0x727: Push((int) -1)
0x728: Push((int) 38840)
0x729: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72a: Pop(3)
0x72b: Return(); Pop(0)

0x72c: Push((int) 38817)
0x72d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72e: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x72f: PushEmpty(string)
0x730: Stack[-1] = "Neutral"
0x731: Call2 0x2e6

0x732: Pop(1)
0x733: Push((int) 536979)
0x734: @@ SetMessage(Stack[-1])
0x735: Pop(1)
0x736: @@ ClearReplies()
0x737: Pop(0)
0x738: Push((int) 536980)
0x739: Push((int) 38819)
0x73a: Push((int) 38818)
0x73b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73c: Pop(3)
0x73d: Push((int) 536992)
0x73e: Push((int) -1)
0x73f: Push((int) 38830)
0x740: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x741: Pop(3)
0x742: Return(); Pop(0)

0x743: Push((int) 38819)
0x744: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x745: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x746: PushEmpty(string)
0x747: Stack[-1] = "Neutral"
0x748: Call2 0x2e6

0x749: Pop(1)
0x74a: Push((int) 536981)
0x74b: @@ SetMessage(Stack[-1])
0x74c: Pop(1)
0x74d: @@ ClearReplies()
0x74e: Pop(0)
0x74f: Push((int) 536982)
0x750: Push((int) 38821)
0x751: Push((int) 38820)
0x752: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x753: Pop(3)
0x754: Push((int) 536991)
0x755: Push((int) -1)
0x756: Push((int) 38829)
0x757: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x758: Pop(3)
0x759: Return(); Pop(0)

0x75a: Push((int) 38821)
0x75b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75c: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x75d: PushEmpty(string)
0x75e: Stack[-1] = "Neutral"
0x75f: Call2 0x2e6

0x760: Pop(1)
0x761: Push((int) 536983)
0x762: @@ SetMessage(Stack[-1])
0x763: Pop(1)
0x764: @@ ClearReplies()
0x765: Pop(0)
0x766: Push((int) 536984)
0x767: Push((int) 38823)
0x768: Push((int) 38822)
0x769: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76a: Pop(3)
0x76b: Return(); Pop(0)

0x76c: Push((int) 38823)
0x76d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76e: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x76f: PushEmpty(string)
0x770: Stack[-1] = "Neutral"
0x771: Call2 0x2e6

0x772: Pop(1)
0x773: Push((int) 536985)
0x774: @@ SetMessage(Stack[-1])
0x775: Pop(1)
0x776: @@ ClearReplies()
0x777: Pop(0)
0x778: Push((int) 536986)
0x779: Push((int) 38825)
0x77a: Push((int) 38824)
0x77b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77c: Pop(3)
0x77d: Push((int) 536990)
0x77e: Push((int) -1)
0x77f: Push((int) 38828)
0x780: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x781: Pop(3)
0x782: Return(); Pop(0)

0x783: Push((int) 38825)
0x784: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x785: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x786: PushEmpty(string)
0x787: Stack[-1] = "Neutral"
0x788: Call2 0x2e6

0x789: Pop(1)
0x78a: Push((int) 536987)
0x78b: @@ SetMessage(Stack[-1])
0x78c: Pop(1)
0x78d: @@ ClearReplies()
0x78e: Pop(0)
0x78f: Push((int) 536988)
0x790: Push((int) -1)
0x791: Push((int) 38826)
0x792: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x793: Pop(3)
0x794: Push((int) 536989)
0x795: Push((int) -1)
0x796: Push((int) 38827)
0x797: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x798: Pop(3)
0x799: Return(); Pop(0)

0x79a: Push((int) 38800)
0x79b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79c: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x79d: PushEmpty(string)
0x79e: Stack[-1] = "Neutral"
0x79f: Call2 0x2e6

0x7a0: Pop(1)
0x7a1: Push((int) 536962)
0x7a2: @@ SetMessage(Stack[-1])
0x7a3: Pop(1)
0x7a4: @@ ClearReplies()
0x7a5: Pop(0)
0x7a6: Push((int) 536963)
0x7a7: Push((int) 38802)
0x7a8: Push((int) 38801)
0x7a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7aa: Pop(3)
0x7ab: Push((int) 536971)
0x7ac: Push((int) 38810)
0x7ad: Push((int) 38809)
0x7ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7af: Pop(3)
0x7b0: Return(); Pop(0)

0x7b1: Push((int) 38810)
0x7b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7b4: PushEmpty(string)
0x7b5: Stack[-1] = "Neutral"
0x7b6: Call2 0x2e6

0x7b7: Pop(1)
0x7b8: Push((int) 536972)
0x7b9: @@ SetMessage(Stack[-1])
0x7ba: Pop(1)
0x7bb: @@ ClearReplies()
0x7bc: Pop(0)
0x7bd: Push((int) 536973)
0x7be: Push((int) 38812)
0x7bf: Push((int) 38811)
0x7c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c1: Pop(3)
0x7c2: Push((int) 536976)
0x7c3: Push((int) -1)
0x7c4: Push((int) 38814)
0x7c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c6: Pop(3)
0x7c7: Push((int) 536977)
0x7c8: Push((int) -1)
0x7c9: Push((int) 38815)
0x7ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cb: Pop(3)
0x7cc: Return(); Pop(0)

0x7cd: Push((int) 38812)
0x7ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7cf: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7d0: PushEmpty(string)
0x7d1: Stack[-1] = "Neutral"
0x7d2: Call2 0x2e6

0x7d3: Pop(1)
0x7d4: Push((int) 536974)
0x7d5: @@ SetMessage(Stack[-1])
0x7d6: Pop(1)
0x7d7: @@ ClearReplies()
0x7d8: Pop(0)
0x7d9: Push((int) 536975)
0x7da: Push((int) -1)
0x7db: Push((int) 38813)
0x7dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7dd: Pop(3)
0x7de: Return(); Pop(0)

0x7df: Push((int) 38802)
0x7e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e1: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7e2: PushEmpty(string)
0x7e3: Stack[-1] = "Neutral"
0x7e4: Call2 0x2e6

0x7e5: Pop(1)
0x7e6: Push((int) 536964)
0x7e7: @@ SetMessage(Stack[-1])
0x7e8: Pop(1)
0x7e9: @@ ClearReplies()
0x7ea: Pop(0)
0x7eb: Push((int) 536965)
0x7ec: Push((int) 38804)
0x7ed: Push((int) 38803)
0x7ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ef: Pop(3)
0x7f0: Return(); Pop(0)

0x7f1: Push((int) 38804)
0x7f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f3: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7f4: PushEmpty(string)
0x7f5: Stack[-1] = "Neutral"
0x7f6: Call2 0x2e6

0x7f7: Pop(1)
0x7f8: Push((int) 536966)
0x7f9: @@ SetMessage(Stack[-1])
0x7fa: Pop(1)
0x7fb: @@ ClearReplies()
0x7fc: Pop(0)
0x7fd: Push((int) 536967)
0x7fe: Push((int) 38806)
0x7ff: Push((int) 38805)
0x800: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x801: Pop(3)
0x802: Return(); Pop(0)

0x803: Push((int) 38806)
0x804: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x805: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x806: PushEmpty(string)
0x807: Stack[-1] = "Neutral"
0x808: Call2 0x2e6

0x809: Pop(1)
0x80a: Push((int) 536968)
0x80b: @@ SetMessage(Stack[-1])
0x80c: Pop(1)
0x80d: @@ ClearReplies()
0x80e: Pop(0)
0x80f: Push((int) 536969)
0x810: Push((int) -1)
0x811: Push((int) 38807)
0x812: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x813: Pop(3)
0x814: Push((int) 536970)
0x815: Push((int) -1)
0x816: Push((int) 38808)
0x817: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x818: Pop(3)
0x819: Return(); Pop(0)

0x81a: Push((int) 38782)
0x81b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81c: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x81d: PushEmpty(string)
0x81e: Stack[-1] = "Neutral"
0x81f: Call2 0x2e6

0x820: Pop(1)
0x821: Push((int) 536944)
0x822: @@ SetMessage(Stack[-1])
0x823: Pop(1)
0x824: @@ ClearReplies()
0x825: Pop(0)
0x826: Push((int) 536945)
0x827: Push((int) 38784)
0x828: Push((int) 38783)
0x829: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82a: Pop(3)
0x82b: Push((int) 536960)
0x82c: Push((int) -1)
0x82d: Push((int) 38798)
0x82e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82f: Pop(3)
0x830: Return(); Pop(0)

0x831: Push((int) 38784)
0x832: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x833: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x834: PushEmpty(string)
0x835: Stack[-1] = "Neutral"
0x836: Call2 0x2e6

0x837: Pop(1)
0x838: Push((int) 536946)
0x839: @@ SetMessage(Stack[-1])
0x83a: Pop(1)
0x83b: @@ ClearReplies()
0x83c: Pop(0)
0x83d: Push((int) 536947)
0x83e: Push((int) 38786)
0x83f: Push((int) 38785)
0x840: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x841: Pop(3)
0x842: Return(); Pop(0)

0x843: Push((int) 38786)
0x844: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x845: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x846: PushEmpty(string)
0x847: Stack[-1] = "Neutral"
0x848: Call2 0x2e6

0x849: Pop(1)
0x84a: Push((int) 536948)
0x84b: @@ SetMessage(Stack[-1])
0x84c: Pop(1)
0x84d: @@ ClearReplies()
0x84e: Pop(0)
0x84f: Push((int) 536949)
0x850: Push((int) 38788)
0x851: Push((int) 38787)
0x852: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x853: Pop(3)
0x854: PushEmpty(bool, object)
0x855: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x856: Call2 0x177e

0x857: Pop(1)
0x858: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x859: Push((int) 536957)
0x85a: Push((int) 38796)
0x85b: Push((int) 38795)
0x85c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85d: Pop(3)
0x85e: Return(); Pop(0)

0x85f: Push((int) 38796)
0x860: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x861: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x862: PushEmpty(string)
0x863: Stack[-1] = "Neutral"
0x864: Call2 0x2e6

0x865: Pop(1)
0x866: Push((int) 536958)
0x867: @@ SetMessage(Stack[-1])
0x868: Pop(1)
0x869: @@ ClearReplies()
0x86a: Pop(0)
0x86b: Push((int) 536959)
0x86c: Push((int) -1)
0x86d: Push((int) 38797)
0x86e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86f: Pop(3)
0x870: Return(); Pop(0)

0x871: Push((int) 38788)
0x872: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x874: PushEmpty(string)
0x875: Stack[-1] = "Neutral"
0x876: Call2 0x2e6

0x877: Pop(1)
0x878: Push((int) 536950)
0x879: @@ SetMessage(Stack[-1])
0x87a: Pop(1)
0x87b: @@ ClearReplies()
0x87c: Pop(0)
0x87d: Push((int) 536951)
0x87e: Push((int) 38790)
0x87f: Push((int) 38789)
0x880: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x881: Pop(3)
0x882: Return(); Pop(0)

0x883: Push((int) 38790)
0x884: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x885: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x886: PushEmpty(string)
0x887: Stack[-1] = "Neutral"
0x888: Call2 0x2e6

0x889: Pop(1)
0x88a: Push((int) 536952)
0x88b: @@ SetMessage(Stack[-1])
0x88c: Pop(1)
0x88d: @@ ClearReplies()
0x88e: Pop(0)
0x88f: Push((int) 536953)
0x890: Push((int) 38792)
0x891: Push((int) 38791)
0x892: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x893: Pop(3)
0x894: Push((int) 536956)
0x895: Push((int) -1)
0x896: Push((int) 38794)
0x897: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x898: Pop(3)
0x899: Return(); Pop(0)

0x89a: Push((int) 38792)
0x89b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89c: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x89d: PushEmpty(string)
0x89e: Stack[-1] = "Neutral"
0x89f: Call2 0x2e6

0x8a0: Pop(1)
0x8a1: Push((int) 536954)
0x8a2: @@ SetMessage(Stack[-1])
0x8a3: Pop(1)
0x8a4: @@ ClearReplies()
0x8a5: Pop(0)
0x8a6: Push((int) 536955)
0x8a7: Push((int) -1)
0x8a8: Push((int) 38793)
0x8a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8aa: Pop(3)
0x8ab: Return(); Pop(0)

0x8ac: Push((int) 38770)
0x8ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ae: IF (Stack[-1] == 0) GOTO 0x8c3; Pop(1)

0x8af: PushEmpty(string)
0x8b0: Stack[-1] = "Neutral"
0x8b1: Call2 0x2e6

0x8b2: Pop(1)
0x8b3: Push((int) 536932)
0x8b4: @@ SetMessage(Stack[-1])
0x8b5: Pop(1)
0x8b6: @@ ClearReplies()
0x8b7: Pop(0)
0x8b8: Push((int) 536933)
0x8b9: Push((int) 38772)
0x8ba: Push((int) 38771)
0x8bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bc: Pop(3)
0x8bd: Push((int) 536942)
0x8be: Push((int) -1)
0x8bf: Push((int) 38780)
0x8c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c1: Pop(3)
0x8c2: Return(); Pop(0)

0x8c3: Push((int) 38772)
0x8c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8c6: PushEmpty(string)
0x8c7: Stack[-1] = "Neutral"
0x8c8: Call2 0x2e6

0x8c9: Pop(1)
0x8ca: Push((int) 536934)
0x8cb: @@ SetMessage(Stack[-1])
0x8cc: Pop(1)
0x8cd: @@ ClearReplies()
0x8ce: Pop(0)
0x8cf: Push((int) 536935)
0x8d0: Push((int) 38774)
0x8d1: Push((int) 38773)
0x8d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d3: Pop(3)
0x8d4: Return(); Pop(0)

0x8d5: Push((int) 38774)
0x8d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d7: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8d8: PushEmpty(string)
0x8d9: Stack[-1] = "Neutral"
0x8da: Call2 0x2e6

0x8db: Pop(1)
0x8dc: Push((int) 536936)
0x8dd: @@ SetMessage(Stack[-1])
0x8de: Pop(1)
0x8df: @@ ClearReplies()
0x8e0: Pop(0)
0x8e1: Push((int) 536937)
0x8e2: Push((int) 38776)
0x8e3: Push((int) 38775)
0x8e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e5: Pop(3)
0x8e6: Push((int) 536941)
0x8e7: Push((int) -1)
0x8e8: Push((int) 38779)
0x8e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ea: Pop(3)
0x8eb: Return(); Pop(0)

0x8ec: Push((int) 38776)
0x8ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ee: IF (Stack[-1] == 0) GOTO 0x903; Pop(1)

0x8ef: PushEmpty(string)
0x8f0: Stack[-1] = "Neutral"
0x8f1: Call2 0x2e6

0x8f2: Pop(1)
0x8f3: Push((int) 536938)
0x8f4: @@ SetMessage(Stack[-1])
0x8f5: Pop(1)
0x8f6: @@ ClearReplies()
0x8f7: Pop(0)
0x8f8: Push((int) 536939)
0x8f9: Push((int) -1)
0x8fa: Push((int) 38777)
0x8fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fc: Pop(3)
0x8fd: Push((int) 536940)
0x8fe: Push((int) -1)
0x8ff: Push((int) 38778)
0x900: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x901: Pop(3)
0x902: Return(); Pop(0)

0x903: Push((int) 38755)
0x904: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x905: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x906: PushEmpty(string)
0x907: Stack[-1] = "Neutral"
0x908: Call2 0x2e6

0x909: Pop(1)
0x90a: Push((int) 536917)
0x90b: @@ SetMessage(Stack[-1])
0x90c: Pop(1)
0x90d: @@ ClearReplies()
0x90e: Pop(0)
0x90f: Push((int) 536918)
0x910: Push((int) 38757)
0x911: Push((int) 38756)
0x912: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x913: Pop(3)
0x914: PushEmpty(bool, object)
0x915: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x916: Call2 0x177e

0x917: Pop(1)
0x918: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x919: Push((int) 536930)
0x91a: Push((int) -1)
0x91b: Push((int) 38768)
0x91c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91d: Pop(3)
0x91e: Return(); Pop(0)

0x91f: Push((int) 38757)
0x920: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x921: IF (Stack[-1] == 0) GOTO 0x936; Pop(1)

0x922: PushEmpty(string)
0x923: Stack[-1] = "Neutral"
0x924: Call2 0x2e6

0x925: Pop(1)
0x926: Push((int) 536919)
0x927: @@ SetMessage(Stack[-1])
0x928: Pop(1)
0x929: @@ ClearReplies()
0x92a: Pop(0)
0x92b: Push((int) 536920)
0x92c: Push((int) 38759)
0x92d: Push((int) 38758)
0x92e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92f: Pop(3)
0x930: Push((int) 536929)
0x931: Push((int) -1)
0x932: Push((int) 38767)
0x933: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x934: Pop(3)
0x935: Return(); Pop(0)

0x936: Push((int) 38759)
0x937: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x938: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x939: PushEmpty(string)
0x93a: Stack[-1] = "Neutral"
0x93b: Call2 0x2e6

0x93c: Pop(1)
0x93d: Push((int) 536921)
0x93e: @@ SetMessage(Stack[-1])
0x93f: Pop(1)
0x940: @@ ClearReplies()
0x941: Pop(0)
0x942: PushEmpty(bool, object)
0x943: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x944: Call2 0x177e

0x945: Pop(1)
0x946: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x947: Push((int) 536922)
0x948: Push((int) 38761)
0x949: Push((int) 38760)
0x94a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94b: Pop(3)
0x94c: Push((int) 536926)
0x94d: Push((int) 38765)
0x94e: Push((int) 38764)
0x94f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x950: Pop(3)
0x951: Return(); Pop(0)

0x952: Push((int) 38765)
0x953: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x954: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x955: PushEmpty(string)
0x956: Stack[-1] = "Neutral"
0x957: Call2 0x2e6

0x958: Pop(1)
0x959: Push((int) 536927)
0x95a: @@ SetMessage(Stack[-1])
0x95b: Pop(1)
0x95c: @@ ClearReplies()
0x95d: Pop(0)
0x95e: Push((int) 536928)
0x95f: Push((int) -1)
0x960: Push((int) 38766)
0x961: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x962: Pop(3)
0x963: Return(); Pop(0)

0x964: Push((int) 38761)
0x965: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x966: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x967: PushEmpty(string)
0x968: Stack[-1] = "Neutral"
0x969: Call2 0x2e6

0x96a: Pop(1)
0x96b: Push((int) 536923)
0x96c: @@ SetMessage(Stack[-1])
0x96d: Pop(1)
0x96e: @@ ClearReplies()
0x96f: Pop(0)
0x970: Push((int) 536924)
0x971: Push((int) -1)
0x972: Push((int) 38762)
0x973: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x974: Pop(3)
0x975: Push((int) 536925)
0x976: Push((int) -1)
0x977: Push((int) 38763)
0x978: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x979: Pop(3)
0x97a: Return(); Pop(0)

0x97b: Push((int) 38743)
0x97c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97d: IF (Stack[-1] == 0) GOTO 0x98d; Pop(1)

0x97e: PushEmpty(string)
0x97f: Stack[-1] = "Neutral"
0x980: Call2 0x2e6

0x981: Pop(1)
0x982: Push((int) 536905)
0x983: @@ SetMessage(Stack[-1])
0x984: Pop(1)
0x985: @@ ClearReplies()
0x986: Pop(0)
0x987: Push((int) 536906)
0x988: Push((int) 38745)
0x989: Push((int) 38744)
0x98a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98b: Pop(3)
0x98c: Return(); Pop(0)

0x98d: Push((int) 38745)
0x98e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x98f: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x990: PushEmpty(string)
0x991: Stack[-1] = "Neutral"
0x992: Call2 0x2e6

0x993: Pop(1)
0x994: Push((int) 536907)
0x995: @@ SetMessage(Stack[-1])
0x996: Pop(1)
0x997: @@ ClearReplies()
0x998: Pop(0)
0x999: Push((int) 536908)
0x99a: Push((int) 38747)
0x99b: Push((int) 38746)
0x99c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99d: Pop(3)
0x99e: PushEmpty(bool, object)
0x99f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a0: Call2 0x177e

0x9a1: Pop(1)
0x9a2: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x9a3: Push((int) 536912)
0x9a4: Push((int) 38751)
0x9a5: Push((int) 38750)
0x9a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a7: Pop(3)
0x9a8: Return(); Pop(0)

0x9a9: Push((int) 38751)
0x9aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9ac: PushEmpty(string)
0x9ad: Stack[-1] = "Neutral"
0x9ae: Call2 0x2e6

0x9af: Pop(1)
0x9b0: Push((int) 536913)
0x9b1: @@ SetMessage(Stack[-1])
0x9b2: Pop(1)
0x9b3: @@ ClearReplies()
0x9b4: Pop(0)
0x9b5: Push((int) 536914)
0x9b6: Push((int) -1)
0x9b7: Push((int) 38752)
0x9b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b9: Pop(3)
0x9ba: Push((int) 536915)
0x9bb: Push((int) -1)
0x9bc: Push((int) 38753)
0x9bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9be: Pop(3)
0x9bf: Return(); Pop(0)

0x9c0: Push((int) 38747)
0x9c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c2: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9c3: PushEmpty(string)
0x9c4: Stack[-1] = "Neutral"
0x9c5: Call2 0x2e6

0x9c6: Pop(1)
0x9c7: Push((int) 536909)
0x9c8: @@ SetMessage(Stack[-1])
0x9c9: Pop(1)
0x9ca: @@ ClearReplies()
0x9cb: Pop(0)
0x9cc: Push((int) 536910)
0x9cd: Push((int) -1)
0x9ce: Push((int) 38748)
0x9cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d0: Pop(3)
0x9d1: Push((int) 536911)
0x9d2: Push((int) -1)
0x9d3: Push((int) 38749)
0x9d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d5: Pop(3)
0x9d6: Return(); Pop(0)

0x9d7: Push((int) 38724)
0x9d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d9: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9da: PushEmpty(string)
0x9db: Stack[-1] = "Neutral"
0x9dc: Call2 0x2e6

0x9dd: Pop(1)
0x9de: Push((int) 536886)
0x9df: @@ SetMessage(Stack[-1])
0x9e0: Pop(1)
0x9e1: @@ ClearReplies()
0x9e2: Pop(0)
0x9e3: Push((int) 536887)
0x9e4: Push((int) 38726)
0x9e5: Push((int) 38725)
0x9e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e7: Pop(3)
0x9e8: Push((int) 536901)
0x9e9: Push((int) 38740)
0x9ea: Push((int) 38739)
0x9eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ec: Pop(3)
0x9ed: Return(); Pop(0)

0x9ee: Push((int) 38740)
0x9ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f0: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9f1: PushEmpty(string)
0x9f2: Stack[-1] = "Neutral"
0x9f3: Call2 0x2e6

0x9f4: Pop(1)
0x9f5: Push((int) 536902)
0x9f6: @@ SetMessage(Stack[-1])
0x9f7: Pop(1)
0x9f8: @@ ClearReplies()
0x9f9: Pop(0)
0x9fa: Push((int) 536903)
0x9fb: Push((int) -1)
0x9fc: Push((int) 38741)
0x9fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fe: Pop(3)
0x9ff: Return(); Pop(0)

0xa00: Push((int) 38726)
0xa01: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa02: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa03: PushEmpty(string)
0xa04: Stack[-1] = "Neutral"
0xa05: Call2 0x2e6

0xa06: Pop(1)
0xa07: Push((int) 536888)
0xa08: @@ SetMessage(Stack[-1])
0xa09: Pop(1)
0xa0a: @@ ClearReplies()
0xa0b: Pop(0)
0xa0c: Push((int) 536889)
0xa0d: Push((int) 38728)
0xa0e: Push((int) 38727)
0xa0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa10: Pop(3)
0xa11: Return(); Pop(0)

0xa12: Push((int) 38728)
0xa13: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa14: IF (Stack[-1] == 0) GOTO 0xa29; Pop(1)

0xa15: PushEmpty(string)
0xa16: Stack[-1] = "Neutral"
0xa17: Call2 0x2e6

0xa18: Pop(1)
0xa19: Push((int) 536890)
0xa1a: @@ SetMessage(Stack[-1])
0xa1b: Pop(1)
0xa1c: @@ ClearReplies()
0xa1d: Pop(0)
0xa1e: Push((int) 536891)
0xa1f: Push((int) 38730)
0xa20: Push((int) 38729)
0xa21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa22: Pop(3)
0xa23: Push((int) 536900)
0xa24: Push((int) -1)
0xa25: Push((int) 38738)
0xa26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa27: Pop(3)
0xa28: Return(); Pop(0)

0xa29: Push((int) 38730)
0xa2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2b: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa2c: PushEmpty(string)
0xa2d: Stack[-1] = "Neutral"
0xa2e: Call2 0x2e6

0xa2f: Pop(1)
0xa30: Push((int) 536892)
0xa31: @@ SetMessage(Stack[-1])
0xa32: Pop(1)
0xa33: @@ ClearReplies()
0xa34: Pop(0)
0xa35: PushEmpty(bool, object)
0xa36: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa37: Call2 0x177e

0xa38: Pop(1)
0xa39: IF (Stack[-1] == 0) GOTO 0xa3f; Pop(1)

0xa3a: Push((int) 536893)
0xa3b: Push((int) 38732)
0xa3c: Push((int) 38731)
0xa3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3e: Pop(3)
0xa3f: Push((int) 536899)
0xa40: Push((int) -1)
0xa41: Push((int) 38737)
0xa42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa43: Pop(3)
0xa44: Return(); Pop(0)

0xa45: Push((int) 38732)
0xa46: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa47: IF (Stack[-1] == 0) GOTO 0xa5c; Pop(1)

0xa48: PushEmpty(string)
0xa49: Stack[-1] = "Neutral"
0xa4a: Call2 0x2e6

0xa4b: Pop(1)
0xa4c: Push((int) 536894)
0xa4d: @@ SetMessage(Stack[-1])
0xa4e: Pop(1)
0xa4f: @@ ClearReplies()
0xa50: Pop(0)
0xa51: Push((int) 536895)
0xa52: Push((int) 38734)
0xa53: Push((int) 38733)
0xa54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa55: Pop(3)
0xa56: Push((int) 536898)
0xa57: Push((int) -1)
0xa58: Push((int) 38736)
0xa59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5a: Pop(3)
0xa5b: Return(); Pop(0)

0xa5c: Push((int) 38734)
0xa5d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5e: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa5f: PushEmpty(string)
0xa60: Stack[-1] = "Neutral"
0xa61: Call2 0x2e6

0xa62: Pop(1)
0xa63: Push((int) 536896)
0xa64: @@ SetMessage(Stack[-1])
0xa65: Pop(1)
0xa66: @@ ClearReplies()
0xa67: Pop(0)
0xa68: Push((int) 536897)
0xa69: Push((int) -1)
0xa6a: Push((int) 38735)
0xa6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6c: Pop(3)
0xa6d: Return(); Pop(0)

0xa6e: Push((int) 38709)
0xa6f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa70: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa71: PushEmpty(string)
0xa72: Stack[-1] = "Neutral"
0xa73: Call2 0x2e6

0xa74: Pop(1)
0xa75: Push((int) 536871)
0xa76: @@ SetMessage(Stack[-1])
0xa77: Pop(1)
0xa78: @@ ClearReplies()
0xa79: Pop(0)
0xa7a: Push((int) 536872)
0xa7b: Push((int) 38711)
0xa7c: Push((int) 38710)
0xa7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7e: Pop(3)
0xa7f: Push((int) 536882)
0xa80: Push((int) 38721)
0xa81: Push((int) 38720)
0xa82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa83: Pop(3)
0xa84: Return(); Pop(0)

0xa85: Push((int) 38721)
0xa86: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa87: IF (Stack[-1] == 0) GOTO 0xa97; Pop(1)

0xa88: PushEmpty(string)
0xa89: Stack[-1] = "Neutral"
0xa8a: Call2 0x2e6

0xa8b: Pop(1)
0xa8c: Push((int) 536883)
0xa8d: @@ SetMessage(Stack[-1])
0xa8e: Pop(1)
0xa8f: @@ ClearReplies()
0xa90: Pop(0)
0xa91: Push((int) 536884)
0xa92: Push((int) -1)
0xa93: Push((int) 38722)
0xa94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa95: Pop(3)
0xa96: Return(); Pop(0)

0xa97: Push((int) 38711)
0xa98: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa99: IF (Stack[-1] == 0) GOTO 0xaae; Pop(1)

0xa9a: PushEmpty(string)
0xa9b: Stack[-1] = "Neutral"
0xa9c: Call2 0x2e6

0xa9d: Pop(1)
0xa9e: Push((int) 536873)
0xa9f: @@ SetMessage(Stack[-1])
0xaa0: Pop(1)
0xaa1: @@ ClearReplies()
0xaa2: Pop(0)
0xaa3: Push((int) 536874)
0xaa4: Push((int) 38713)
0xaa5: Push((int) 38712)
0xaa6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa7: Pop(3)
0xaa8: Push((int) 536881)
0xaa9: Push((int) -1)
0xaaa: Push((int) 38719)
0xaab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaac: Pop(3)
0xaad: Return(); Pop(0)

0xaae: Push((int) 38713)
0xaaf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab0: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xab1: PushEmpty(string)
0xab2: Stack[-1] = "Neutral"
0xab3: Call2 0x2e6

0xab4: Pop(1)
0xab5: Push((int) 536875)
0xab6: @@ SetMessage(Stack[-1])
0xab7: Pop(1)
0xab8: @@ ClearReplies()
0xab9: Pop(0)
0xaba: Push((int) 536876)
0xabb: Push((int) 38715)
0xabc: Push((int) 38714)
0xabd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabe: Pop(3)
0xabf: PushEmpty(bool, object)
0xac0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac1: Call2 0x177e

0xac2: Pop(1)
0xac3: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xac4: Push((int) 536880)
0xac5: Push((int) -1)
0xac6: Push((int) 38718)
0xac7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac8: Pop(3)
0xac9: Return(); Pop(0)

0xaca: Push((int) 38715)
0xacb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xacc: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xacd: PushEmpty(string)
0xace: Stack[-1] = "Neutral"
0xacf: Call2 0x2e6

0xad0: Pop(1)
0xad1: Push((int) 536877)
0xad2: @@ SetMessage(Stack[-1])
0xad3: Pop(1)
0xad4: @@ ClearReplies()
0xad5: Pop(0)
0xad6: Push((int) 536878)
0xad7: Push((int) -1)
0xad8: Push((int) 38716)
0xad9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xada: Pop(3)
0xadb: Push((int) 536879)
0xadc: Push((int) -1)
0xadd: Push((int) 38717)
0xade: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xadf: Pop(3)
0xae0: Return(); Pop(0)

0xae1: Push((int) 38693)
0xae2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae3: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xae4: PushEmpty(string)
0xae5: Stack[-1] = "Neutral"
0xae6: Call2 0x2e6

0xae7: Pop(1)
0xae8: Push((int) 536857)
0xae9: @@ SetMessage(Stack[-1])
0xaea: Pop(1)
0xaeb: @@ ClearReplies()
0xaec: Pop(0)
0xaed: Push((int) 536858)
0xaee: Push((int) 38695)
0xaef: Push((int) 38694)
0xaf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf1: Pop(3)
0xaf2: Push((int) 536867)
0xaf3: Push((int) 38705)
0xaf4: Push((int) 38704)
0xaf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf6: Pop(3)
0xaf7: Return(); Pop(0)

0xaf8: Push((int) 38705)
0xaf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xafa: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xafb: PushEmpty(string)
0xafc: Stack[-1] = "Neutral"
0xafd: Call2 0x2e6

0xafe: Pop(1)
0xaff: Push((int) 536868)
0xb00: @@ SetMessage(Stack[-1])
0xb01: Pop(1)
0xb02: @@ ClearReplies()
0xb03: Pop(0)
0xb04: Push((int) 536869)
0xb05: Push((int) 38697)
0xb06: Push((int) 38706)
0xb07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb08: Pop(3)
0xb09: Return(); Pop(0)

0xb0a: Push((int) 38695)
0xb0b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0c: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb0d: PushEmpty(string)
0xb0e: Stack[-1] = "Neutral"
0xb0f: Call2 0x2e6

0xb10: Pop(1)
0xb11: Push((int) 536859)
0xb12: @@ SetMessage(Stack[-1])
0xb13: Pop(1)
0xb14: @@ ClearReplies()
0xb15: Pop(0)
0xb16: Push((int) 536860)
0xb17: Push((int) 38697)
0xb18: Push((int) 38696)
0xb19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1a: Pop(3)
0xb1b: Push((int) 536864)
0xb1c: Push((int) 38701)
0xb1d: Push((int) 38700)
0xb1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1f: Pop(3)
0xb20: Return(); Pop(0)

0xb21: Push((int) 38701)
0xb22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb23: IF (Stack[-1] == 0) GOTO 0xb33; Pop(1)

0xb24: PushEmpty(string)
0xb25: Stack[-1] = "Neutral"
0xb26: Call2 0x2e6

0xb27: Pop(1)
0xb28: Push((int) 536865)
0xb29: @@ SetMessage(Stack[-1])
0xb2a: Pop(1)
0xb2b: @@ ClearReplies()
0xb2c: Pop(0)
0xb2d: Push((int) 536866)
0xb2e: Push((int) 38697)
0xb2f: Push((int) 38702)
0xb30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb31: Pop(3)
0xb32: Return(); Pop(0)

0xb33: Push((int) 38697)
0xb34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb35: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb36: PushEmpty(string)
0xb37: Stack[-1] = "Neutral"
0xb38: Call2 0x2e6

0xb39: Pop(1)
0xb3a: Push((int) 536861)
0xb3b: @@ SetMessage(Stack[-1])
0xb3c: Pop(1)
0xb3d: @@ ClearReplies()
0xb3e: Pop(0)
0xb3f: Push((int) 536862)
0xb40: Push((int) -1)
0xb41: Push((int) 38698)
0xb42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb43: Pop(3)
0xb44: Push((int) 536863)
0xb45: Push((int) -1)
0xb46: Push((int) 38699)
0xb47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb48: Pop(3)
0xb49: Return(); Pop(0)

0xb4a: Push((int) 45595)
0xb4b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4c: IF (Stack[-1] == 0) GOTO 0xb66; Pop(1)

0xb4d: PushEmpty(string)
0xb4e: Stack[-1] = "Neutral"
0xb4f: Call2 0x2e6

0xb50: Pop(1)
0xb51: Push((int) 543140)
0xb52: @@ SetMessage(Stack[-1])
0xb53: Pop(1)
0xb54: @@ ClearReplies()
0xb55: Pop(0)
0xb56: Push((int) 543141)
0xb57: Push((int) -1)
0xb58: Push((int) 45596)
0xb59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5a: Pop(3)
0xb5b: Push((int) 543142)
0xb5c: Push((int) -1)
0xb5d: Push((int) 45597)
0xb5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5f: Pop(3)
0xb60: Push((int) 543143)
0xb61: Push((int) 45599)
0xb62: Push((int) 45598)
0xb63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb64: Pop(3)
0xb65: Return(); Pop(0)

0xb66: Push((int) 45599)
0xb67: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb68: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb69: PushEmpty(string)
0xb6a: Stack[-1] = "Neutral"
0xb6b: Call2 0x2e6

0xb6c: Pop(1)
0xb6d: Push((int) 543144)
0xb6e: @@ SetMessage(Stack[-1])
0xb6f: Pop(1)
0xb70: @@ ClearReplies()
0xb71: Pop(0)
0xb72: Push((int) 543145)
0xb73: Push((int) -1)
0xb74: Push((int) 45600)
0xb75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb76: Pop(3)
0xb77: Push((int) 543146)
0xb78: Push((int) -1)
0xb79: Push((int) 45601)
0xb7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7b: Pop(3)
0xb7c: Return(); Pop(0)

0xb7d: Push((int) 45583)
0xb7e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb7f: IF (Stack[-1] == 0) GOTO 0xb99; Pop(1)

0xb80: PushEmpty(string)
0xb81: Stack[-1] = "Neutral"
0xb82: Call2 0x2e6

0xb83: Pop(1)
0xb84: Push((int) 543128)
0xb85: @@ SetMessage(Stack[-1])
0xb86: Pop(1)
0xb87: @@ ClearReplies()
0xb88: Pop(0)
0xb89: Push((int) 543129)
0xb8a: Push((int) 45587)
0xb8b: Push((int) 45584)
0xb8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8d: Pop(3)
0xb8e: Push((int) 543130)
0xb8f: Push((int) -1)
0xb90: Push((int) 45585)
0xb91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb92: Pop(3)
0xb93: Push((int) 543131)
0xb94: Push((int) -1)
0xb95: Push((int) 45586)
0xb96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb97: Pop(3)
0xb98: Return(); Pop(0)

0xb99: Push((int) 45587)
0xb9a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9b: IF (Stack[-1] == 0) GOTO 0xbb5; Pop(1)

0xb9c: PushEmpty(string)
0xb9d: Stack[-1] = "Neutral"
0xb9e: Call2 0x2e6

0xb9f: Pop(1)
0xba0: Push((int) 543132)
0xba1: @@ SetMessage(Stack[-1])
0xba2: Pop(1)
0xba3: @@ ClearReplies()
0xba4: Pop(0)
0xba5: Push((int) 543133)
0xba6: Push((int) -1)
0xba7: Push((int) 45588)
0xba8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba9: Pop(3)
0xbaa: Push((int) 543134)
0xbab: Push((int) 45591)
0xbac: Push((int) 45589)
0xbad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbae: Pop(3)
0xbaf: Push((int) 543135)
0xbb0: Push((int) -1)
0xbb1: Push((int) 45590)
0xbb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb3: Pop(3)
0xbb4: Return(); Pop(0)

0xbb5: Push((int) 45591)
0xbb6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb7: IF (Stack[-1] == 0) GOTO 0xbcc; Pop(1)

0xbb8: PushEmpty(string)
0xbb9: Stack[-1] = "Neutral"
0xbba: Call2 0x2e6

0xbbb: Pop(1)
0xbbc: Push((int) 543136)
0xbbd: @@ SetMessage(Stack[-1])
0xbbe: Pop(1)
0xbbf: @@ ClearReplies()
0xbc0: Pop(0)
0xbc1: Push((int) 543137)
0xbc2: Push((int) -1)
0xbc3: Push((int) 45592)
0xbc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc5: Pop(3)
0xbc6: Push((int) 543138)
0xbc7: Push((int) -1)
0xbc8: Push((int) 45593)
0xbc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbca: Pop(3)
0xbcb: Return(); Pop(0)

0xbcc: Push((int) 45573)
0xbcd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbce: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbcf: PushEmpty(string)
0xbd0: Stack[-1] = "Neutral"
0xbd1: Call2 0x2e6

0xbd2: Pop(1)
0xbd3: Push((int) 543118)
0xbd4: @@ SetMessage(Stack[-1])
0xbd5: Pop(1)
0xbd6: @@ ClearReplies()
0xbd7: Pop(0)
0xbd8: Push((int) 543119)
0xbd9: Push((int) -1)
0xbda: Push((int) 45574)
0xbdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdc: Pop(3)
0xbdd: Push((int) 543120)
0xbde: Push((int) 45577)
0xbdf: Push((int) 45575)
0xbe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe1: Pop(3)
0xbe2: Push((int) 543121)
0xbe3: Push((int) -1)
0xbe4: Push((int) 45576)
0xbe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe6: Pop(3)
0xbe7: Return(); Pop(0)

0xbe8: Push((int) 45577)
0xbe9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbea: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbeb: PushEmpty(string)
0xbec: Stack[-1] = "Neutral"
0xbed: Call2 0x2e6

0xbee: Pop(1)
0xbef: Push((int) 543122)
0xbf0: @@ SetMessage(Stack[-1])
0xbf1: Pop(1)
0xbf2: @@ ClearReplies()
0xbf3: Pop(0)
0xbf4: Push((int) 543123)
0xbf5: Push((int) -1)
0xbf6: Push((int) 45578)
0xbf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf8: Pop(3)
0xbf9: Push((int) 543124)
0xbfa: Push((int) -1)
0xbfb: Push((int) 45579)
0xbfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfd: Pop(3)
0xbfe: Return(); Pop(0)

0xbff: Push((int) 45557)
0xc00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc01: IF (Stack[-1] == 0) GOTO 0xc16; Pop(1)

0xc02: PushEmpty(string)
0xc03: Stack[-1] = "Neutral"
0xc04: Call2 0x2e6

0xc05: Pop(1)
0xc06: Push((int) 543102)
0xc07: @@ SetMessage(Stack[-1])
0xc08: Pop(1)
0xc09: @@ ClearReplies()
0xc0a: Pop(0)
0xc0b: Push((int) 543103)
0xc0c: Push((int) -1)
0xc0d: Push((int) 45558)
0xc0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0f: Pop(3)
0xc10: Push((int) 543104)
0xc11: Push((int) 45560)
0xc12: Push((int) 45559)
0xc13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc14: Pop(3)
0xc15: Return(); Pop(0)

0xc16: Push((int) 45560)
0xc17: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc18: IF (Stack[-1] == 0) GOTO 0xc2d; Pop(1)

0xc19: PushEmpty(string)
0xc1a: Stack[-1] = "Neutral"
0xc1b: Call2 0x2e6

0xc1c: Pop(1)
0xc1d: Push((int) 543105)
0xc1e: @@ SetMessage(Stack[-1])
0xc1f: Pop(1)
0xc20: @@ ClearReplies()
0xc21: Pop(0)
0xc22: Push((int) 543106)
0xc23: Push((int) -1)
0xc24: Push((int) 45561)
0xc25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc26: Pop(3)
0xc27: Push((int) 543107)
0xc28: Push((int) -1)
0xc29: Push((int) 45562)
0xc2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2b: Pop(3)
0xc2c: Return(); Pop(0)

0xc2d: Push((int) 45564)
0xc2e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2f: IF (Stack[-1] == 0) GOTO 0xc44; Pop(1)

0xc30: PushEmpty(string)
0xc31: Stack[-1] = "Neutral"
0xc32: Call2 0x2e6

0xc33: Pop(1)
0xc34: Push((int) 543109)
0xc35: @@ SetMessage(Stack[-1])
0xc36: Pop(1)
0xc37: @@ ClearReplies()
0xc38: Pop(0)
0xc39: Push((int) 543110)
0xc3a: Push((int) -1)
0xc3b: Push((int) 45565)
0xc3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3d: Pop(3)
0xc3e: Push((int) 543111)
0xc3f: Push((int) 45568)
0xc40: Push((int) 45566)
0xc41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc42: Pop(3)
0xc43: Return(); Pop(0)

0xc44: Push((int) 45568)
0xc45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc46: IF (Stack[-1] == 0) GOTO 0xc5b; Pop(1)

0xc47: PushEmpty(string)
0xc48: Stack[-1] = "Neutral"
0xc49: Call2 0x2e6

0xc4a: Pop(1)
0xc4b: Push((int) 543113)
0xc4c: @@ SetMessage(Stack[-1])
0xc4d: Pop(1)
0xc4e: @@ ClearReplies()
0xc4f: Pop(0)
0xc50: Push((int) 543114)
0xc51: Push((int) -1)
0xc52: Push((int) 45569)
0xc53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc54: Pop(3)
0xc55: Push((int) 543116)
0xc56: Push((int) -1)
0xc57: Push((int) 45571)
0xc58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc59: Pop(3)
0xc5a: Return(); Pop(0)

0xc5b: Push((int) 45550)
0xc5c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5d: IF (Stack[-1] == 0) GOTO 0xc72; Pop(1)

0xc5e: PushEmpty(string)
0xc5f: Stack[-1] = "Neutral"
0xc60: Call2 0x2e6

0xc61: Pop(1)
0xc62: Push((int) 543095)
0xc63: @@ SetMessage(Stack[-1])
0xc64: Pop(1)
0xc65: @@ ClearReplies()
0xc66: Pop(0)
0xc67: Push((int) 543096)
0xc68: Push((int) -1)
0xc69: Push((int) 45551)
0xc6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6b: Pop(3)
0xc6c: Push((int) 543098)
0xc6d: Push((int) -1)
0xc6e: Push((int) 45553)
0xc6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc70: Pop(3)
0xc71: Return(); Pop(0)

0xc72: Push((int) 45531)
0xc73: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc74: IF (Stack[-1] == 0) GOTO 0xc8e; Pop(1)

0xc75: PushEmpty(string)
0xc76: Stack[-1] = "Neutral"
0xc77: Call2 0x2e6

0xc78: Pop(1)
0xc79: Push((int) 543076)
0xc7a: @@ SetMessage(Stack[-1])
0xc7b: Pop(1)
0xc7c: @@ ClearReplies()
0xc7d: Pop(0)
0xc7e: Push((int) 543077)
0xc7f: Push((int) -1)
0xc80: Push((int) 45532)
0xc81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc82: Pop(3)
0xc83: Push((int) 543078)
0xc84: Push((int) -1)
0xc85: Push((int) 45533)
0xc86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc87: Pop(3)
0xc88: Push((int) 543079)
0xc89: Push((int) 45535)
0xc8a: Push((int) 45534)
0xc8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8c: Pop(3)
0xc8d: Return(); Pop(0)

0xc8e: Push((int) 45535)
0xc8f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc90: IF (Stack[-1] == 0) GOTO 0xca5; Pop(1)

0xc91: PushEmpty(string)
0xc92: Stack[-1] = "Neutral"
0xc93: Call2 0x2e6

0xc94: Pop(1)
0xc95: Push((int) 543080)
0xc96: @@ SetMessage(Stack[-1])
0xc97: Pop(1)
0xc98: @@ ClearReplies()
0xc99: Pop(0)
0xc9a: Push((int) 543081)
0xc9b: Push((int) -1)
0xc9c: Push((int) 45536)
0xc9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9e: Pop(3)
0xc9f: Push((int) 543082)
0xca0: Push((int) 45538)
0xca1: Push((int) 45537)
0xca2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca3: Pop(3)
0xca4: Return(); Pop(0)

0xca5: Push((int) 45538)
0xca6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca7: IF (Stack[-1] == 0) GOTO 0xcbc; Pop(1)

0xca8: PushEmpty(string)
0xca9: Stack[-1] = "Neutral"
0xcaa: Call2 0x2e6

0xcab: Pop(1)
0xcac: Push((int) 543083)
0xcad: @@ SetMessage(Stack[-1])
0xcae: Pop(1)
0xcaf: @@ ClearReplies()
0xcb0: Pop(0)
0xcb1: Push((int) 543084)
0xcb2: Push((int) 45541)
0xcb3: Push((int) 45539)
0xcb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb5: Pop(3)
0xcb6: Push((int) 543085)
0xcb7: Push((int) -1)
0xcb8: Push((int) 45540)
0xcb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcba: Pop(3)
0xcbb: Return(); Pop(0)

0xcbc: Push((int) 45541)
0xcbd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcbe: IF (Stack[-1] == 0) GOTO 0xcd3; Pop(1)

0xcbf: PushEmpty(string)
0xcc0: Stack[-1] = "Neutral"
0xcc1: Call2 0x2e6

0xcc2: Pop(1)
0xcc3: Push((int) 543086)
0xcc4: @@ SetMessage(Stack[-1])
0xcc5: Pop(1)
0xcc6: @@ ClearReplies()
0xcc7: Pop(0)
0xcc8: Push((int) 543087)
0xcc9: Push((int) -1)
0xcca: Push((int) 45542)
0xccb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xccc: Pop(3)
0xccd: Push((int) 543088)
0xcce: Push((int) -1)
0xccf: Push((int) 45543)
0xcd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd1: Pop(3)
0xcd2: Return(); Pop(0)

0xcd3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xcd4: PushEmpty(bool)
0xcd5: Call2 0x1b24

0xcd6: Pop(0)
0xcd7: IF (Stack[-1] == 0) GOTO 0xcdb; Pop(1)

0xcd8: @ lshStopAnimation()
0xcd9: Pop(0)
0xcda: GOTO 0xcdd

0xcdb: @ StopAnimation()
0xcdc: Pop(0)
0xcdd: Return(); Pop(0)

0xcde: GOTO 0x2fd

0xcdf: Return(); Pop(0)

0xce0: PushEmpty()
0xce1: EventDisable(0)
0xce2: PushEmpty(object)
0xce3: Stack[-1] = Stack[-2]
0xce4: Call2 0xd01

0xce5: Pop(1)
0xce6: PushEmpty(object)
0xce7: Stack[-1] = Stack[-2]
0xce8: Call2 0x1b62

0xce9: Pop(1)
0xcea: EventEnable(0)
0xceb: @ Hold()
0xcec: Pop(0)
0xced: GOTO 0xceb

0xcee: Return(); Pop(0)

0xcef: PushEmpty(int, int)
0xcf0: PushEmpty(int, object)
0xcf1: Stack[-1] = Stack[-5]
0xcf2: Call2 0x1aee

0xcf3: Stack[-3] = Stack[-2]
0xcf4: Pop(2)
0xcf5: Push((int) 0)
0xcf6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcf7: IF (Stack[-1] == 0) GOTO 0xcfc; Pop(1)

0xcf8: PushEmpty(object)
0xcf9: Stack[-1] = Stack[-4]
0xcfa: Call2 0x1af1

0xcfb: Pop(1)
0xcfc: Return(); Pop(2)

0xcfd: PushEmpty()
0xcfe: Call2 0x1af7

0xcff: Pop(0)
0xd00: Return(); Pop(0)

0xd01: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xd02: Pop(0); Push((bool) Stack[-21] == 0)
0xd03: IF (Stack[-1] == 0) GOTO 0xd09; Pop(1)

0xd04: PushEmpty(string)
0xd05: Stack[-1] = "fdie"
0xd06: Call2 0xd5c

0xd07: Pop(1)
0xd08: GOTO 0xd5b

0xd09: @@ GetPosition(Stack[-10])
0xd0a: Pop(0)
0xd0b: @ GetPosition(Stack[-9])
0xd0c: Pop(0)
0xd0d: @ GetDirection(Stack[-8])
0xd0e: Pop(0)
0xd0f: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xd10: Push(CvectorIndex(Stack[-7], 0))
0xd11: Push(CvectorIndex(Stack[-9], 0))
0xd12: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd13: Push(CvectorIndex(Stack[-8], 2))
0xd14: Push(CvectorIndex(Stack[-10], 2))
0xd15: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd16: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd17: Push((int) 0)
0xd18: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xd19: IF (Stack[-1] == 0) GOTO 0xd1c; Pop(1)

0xd1a: Stack[-6] = "fdie"
0xd1b: GOTO 0xd1d

0xd1c: Stack[-6] = "bdie"
0xd1d: @ RemoveRTEnvelope()
0xd1e: Pop(0)
0xd1f: @ SetDeathState()
0xd20: Pop(0)
0xd21: @ Stop()
0xd22: Pop(0)
0xd23: @ StopAsync()
0xd24: Pop(0)
0xd25: Stack[-5] = Stack[-21]
0xd26: Push("GetScriptProperty")
0xd27: Push((int) 2)
0xd28: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xd29: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xd2a: Push("Owner")
0xd2b: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xd2c: Pop(1)
0xd2d: Push(Stack[-4])
0xd2e: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xd2f: Push("Owner")
0xd30: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xd31: Pop(1)
0xd32: Pop(0); Push((bool) Stack[-5] == 0)
0xd33: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xd34: Stack[-5] = Stack[-21]
0xd35: Push("@GetEyesHeight")
0xd36: Push((int) 1)
0xd37: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xd38: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd39: @@ GetEyesHeight(Stack[-2])
0xd3a: Pop(0)
0xd3b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xd3c: Push(CvectorIndex(Stack[-1], 1))
0xd3d: Stack[-1] = Stack[-3]
0xd3e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xd3f: Push("head")
0xd40: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xd41: Pop(1)
0xd42: Stack[-3] = (bool) 1
0xd43: GOTO 0xd45

0xd44: Stack[-3] = (bool) 0
0xd45: PushEmpty(string)
0xd46: Stack[-1] = Stack[-7]
0xd47: Call2 0x16ca

0xd48: Pop(1)
0xd49: Push("all")
0xd4a: @ PlayAnimation(Stack[-1], Stack[-7])
0xd4b: Pop(1)
0xd4c: @ WaitForAnimEnd()
0xd4d: Pop(0)
0xd4e: Push(Stack[-3])
0xd4f: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd50: @ StopAsync()
0xd51: Pop(0)
0xd52: Push("head")
0xd53: @ UnlookAsync(Stack[-1])
0xd54: Pop(1)
0xd55: Push("all")
0xd56: @ LockAnimationEnd(Stack[-1], Stack[-7])
0xd57: Pop(1)
0xd58: @ RemoveEnvelope()
0xd59: Pop(0)
0xd5a: Stack[-5] = 0
0xd5b: Return(); Pop(20)

0xd5c: PushEmpty()
0xd5d: @ RemoveRTEnvelope()
0xd5e: Pop(0)
0xd5f: @ SetDeathState()
0xd60: Pop(0)
0xd61: @ Stop()
0xd62: Pop(0)
0xd63: @ StopAsync()
0xd64: Pop(0)
0xd65: @ StopSecondaryAnimation()
0xd66: Pop(0)
0xd67: PushEmpty(string)
0xd68: Stack[-1] = Stack[-2]
0xd69: Call2 0x16ca

0xd6a: Pop(1)
0xd6b: Push("all")
0xd6c: @ PlayAnimation(Stack[-1], Stack[-2])
0xd6d: Pop(1)
0xd6e: @ WaitForAnimEnd()
0xd6f: Pop(0)
0xd70: Push("all")
0xd71: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xd72: Pop(1)
0xd73: @ RemoveEnvelope()
0xd74: Pop(0)
0xd75: Return(); Pop(0)

0xd76: PushEmpty()
0xd77: Return(); Pop(0)

0xd78: PushEmpty()
0xd79: Return(); Pop(0)

0xd7a: PushEmpty()
0xd7b: Return(); Pop(0)

0xd7c: Push((bool) 1)
0xd7d: @ SensePlayerOnly(Stack[-1])
0xd7e: Pop(1)
0xd7f: PushEmpty()
0xd80: Call2 0x1b26

0xd81: Pop(0)
0xd82: PushEmpty()
0xd83: Call2 0xd8b

0xd84: Pop(0)
0xd85: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd86: PushEmpty()
0xd87: Call2 0xe90

0xd88: Pop(0)
0xd89: GOTO 0xd85

0xd8a: Return(); Pop(0)

0xd8b: PushEmpty(bool)
0xd8c: Call2 0x15e6

0xd8d: Pop(0)
0xd8e: Pop(1); Push((bool) Stack[-1] == 0)
0xd8f: IF (Stack[-1] == 0) GOTO 0xd93; Pop(1)

0xd90: PushEmpty()
0xd91: Call2 0x1af7

0xd92: Pop(0)
0xd93: Return(); Pop(0)

0xd94: PushEmpty(int, int)
0xd95: PushEmpty(int, object)
0xd96: Stack[-1] = Stack[-5]
0xd97: Call2 0x1aee

0xd98: Stack[-3] = Stack[-2]
0xd99: Pop(2)
0xd9a: Push((int) 0)
0xd9b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xd9c: IF (Stack[-1] == 0) GOTO 0xda7; Pop(1)

0xd9d: Push((int) 1)
0xd9e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xd9f: IF (Stack[-1] == 0) GOTO 0xda3; Pop(1)

0xda0: PushEmpty()
0xda1: Call2 0xe4f

0xda2: Pop(0)
0xda3: PushEmpty(object)
0xda4: Stack[-1] = Stack[-4]
0xda5: Call2 0x1af1

0xda6: Pop(1)
0xda7: Return(); Pop(2)

0xda8: PushEmpty(int, int)
0xda9: PushEmpty(object)
0xdaa: Stack[-1] = Stack[-4]
0xdab: Call2 0x1a0a

0xdac: Pop(1)
0xdad: PushEmpty(int, object)
0xdae: Stack[-1] = Stack[-5]
0xdaf: Call2 0x1a5d

0xdb0: Stack[-3] = Stack[-2]
0xdb1: Pop(2)
0xdb2: Push((int) 0)
0xdb3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdb4: IF (Stack[-1] == 0) GOTO 0xdbf; Pop(1)

0xdb5: Push((int) 1)
0xdb6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdb7: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdb8: PushEmpty()
0xdb9: Call2 0xe4f

0xdba: Pop(0)
0xdbb: PushEmpty(object)
0xdbc: Stack[-1] = Stack[-4]
0xdbd: Call2 0x1a67

0xdbe: Pop(1)
0xdbf: Return(); Pop(2)

0xdc0: PushEmpty(int, int)
0xdc1: PushEmpty(bool, object, object, bool)
0xdc2: Stack[-3] = Stack[-9]
0xdc3: Stack[-2] = Stack[-8]
0xdc4: Stack[-1] = Stack[-7]
0xdc5: Call2 0x1b58

0xdc6: Pop(3)
0xdc7: IF (Stack[-1] == 0) GOTO 0xddb; Pop(1)

0xdc8: PushEmpty(int, object, bool)
0xdc9: Stack[-2] = Stack[-8]
0xdca: Stack[-1] = Stack[-6]
0xdcb: Call2 0x1aba

0xdcc: Stack[-4] = Stack[-3]
0xdcd: Pop(3)
0xdce: Push((int) 0)
0xdcf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdd0: IF (Stack[-1] == 0) GOTO 0xddb; Pop(1)

0xdd1: Push((int) 1)
0xdd2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdd3: IF (Stack[-1] == 0) GOTO 0xdd7; Pop(1)

0xdd4: PushEmpty()
0xdd5: Call2 0xe4f

0xdd6: Pop(0)
0xdd7: PushEmpty(object)
0xdd8: Stack[-1] = Stack[-6]
0xdd9: Call2 0x1ac1

0xdda: Pop(1)
0xddb: Return(); Pop(2)

0xddc: PushEmpty(int, int)
0xddd: PushEmpty(int, object)
0xdde: Stack[-1] = Stack[-5]
0xddf: Call2 0x1ae4

0xde0: Stack[-3] = Stack[-2]
0xde1: Pop(2)
0xde2: Push((int) 0)
0xde3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xde4: IF (Stack[-1] == 0) GOTO 0xdef; Pop(1)

0xde5: Push((int) 1)
0xde6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xde7: IF (Stack[-1] == 0) GOTO 0xdeb; Pop(1)

0xde8: PushEmpty()
0xde9: Call2 0xe4f

0xdea: Pop(0)
0xdeb: PushEmpty(object)
0xdec: Stack[-1] = Stack[-4]
0xded: Call2 0x1ae7

0xdee: Pop(1)
0xdef: Return(); Pop(2)

0xdf0: PushEmpty(int, int)
0xdf1: PushEmpty(bool, object, string)
0xdf2: Stack[-2] = Stack[-7]
0xdf3: Stack[-1] = Stack[-6]
0xdf4: Call2 0x19b4

0xdf5: Pop(2)
0xdf6: IF (Stack[-1] == 0) GOTO 0xe00; Pop(1)

0xdf7: PushEmpty()
0xdf8: Call2 0xe4f

0xdf9: Pop(0)
0xdfa: PushEmpty(object, string)
0xdfb: Stack[-2] = Stack[-6]
0xdfc: Stack[-1] = Stack[-5]
0xdfd: Call2 0x19d4

0xdfe: Pop(2)
0xdff: GOTO 0xe14

0xe00: PushEmpty(int, string, object)
0xe01: Stack[-2] = Stack[-6]
0xe02: Stack[-1] = Stack[-7]
0xe03: Call2 0x1ae9

0xe04: Stack[-4] = Stack[-3]
0xe05: Pop(3)
0xe06: Push((int) 0)
0xe07: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe08: IF (Stack[-1] == 0) GOTO 0xe14; Pop(1)

0xe09: Push((int) 1)
0xe0a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe0b: IF (Stack[-1] == 0) GOTO 0xe0f; Pop(1)

0xe0c: PushEmpty()
0xe0d: Call2 0xe4f

0xe0e: Pop(0)
0xe0f: PushEmpty(string, object)
0xe10: Stack[-2] = Stack[-5]
0xe11: Stack[-1] = Stack[-6]
0xe12: Call2 0x1aec

0xe13: Pop(2)
0xe14: Return(); Pop(2)

0xe15: PushEmpty()
0xe16: PushEmpty(bool, string)
0xe17: Stack[-1] = Stack[-3]
0xe18: Call2 0x1a17

0xe19: Pop(1)
0xe1a: IF (Stack[-1] == 0) GOTO 0xe22; Pop(1)

0xe1b: PushEmpty()
0xe1c: Call2 0xe4f

0xe1d: Pop(0)
0xe1e: PushEmpty(string)
0xe1f: Stack[-1] = Stack[-2]
0xe20: Call2 0x1a27

0xe21: Pop(1)
0xe22: Return(); Pop(0)

0xe23: PushEmpty()
0xe24: PushEmpty(bool, object)
0xe25: Stack[-1] = Stack[-3]
0xe26: Call2 0x19ed

0xe27: Pop(1)
0xe28: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe29: PushEmpty()
0xe2a: Call2 0xe4f

0xe2b: Pop(0)
0xe2c: PushEmpty(object)
0xe2d: Stack[-1] = Stack[-2]
0xe2e: Call2 0x1a04

0xe2f: Pop(1)
0xe30: GOTO 0xe35

0xe31: PushEmpty(object)
0xe32: Stack[-1] = Stack[-2]
0xe33: Call2 0xe68

0xe34: Pop(1)
0xe35: Return(); Pop(0)

0xe36: PushEmpty()
0xe37: PushEmpty(object)
0xe38: Stack[-1] = Stack[-2]
0xe39: Call2 0xe68

0xe3a: Pop(1)
0xe3b: Return(); Pop(0)

0xe3c: PushEmpty()
0xe3d: Push((int) 110)
0xe3e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xe3f: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe40: Return(); Pop(0)

0xe41: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xe42: Push((int) 110)
0xe43: @ KillTimer(Stack[-1])
0xe44: Pop(1)
0xe45: @ ResetAAS()
0xe46: Pop(0)
0xe47: Return(); Pop(0)

0xe48: PushEmpty()
0xe49: Call2 0xe4f

0xe4a: Pop(0)
0xe4b: PushEmpty()
0xe4c: Call2 0x1af7

0xe4d: Pop(0)
0xe4e: Return(); Pop(0)

0xe4f: Push((int) 110)
0xe50: @ KillTimer(Stack[-1])
0xe51: Pop(1)
0xe52: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xe53: PushEmpty()
0xe54: Call2 0xed7

0xe55: Pop(0)
0xe56: Return(); Pop(0)

0xe57: Push((int) 110)
0xe58: @ KillTimer(Stack[-1])
0xe59: Pop(1)
0xe5a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xe5b: PushEmpty()
0xe5c: Call2 0xede

0xe5d: Pop(0)
0xe5e: Return(); Pop(0)

0xe5f: PushEmpty()
0xe60: PushEmpty()
0xe61: Call2 0xe4f

0xe62: Pop(0)
0xe63: PushEmpty(object)
0xe64: Stack[-1] = Stack[-2]
0xe65: Call2 0x199c

0xe66: Pop(1)
0xe67: Return(); Pop(0)

0xe68: PushEmpty(bool, int, bool, int)
0xe69: PushEmpty(bool, object)
0xe6a: Stack[-1] = Stack[-7]
0xe6b: Call2 0x1545

0xe6c: Pop(1)
0xe6d: Pop(1); Push((bool) Stack[-1] == 0)
0xe6e: IF (Stack[-1] == 0) GOTO 0xe70; Pop(1)

0xe6f: Return(); Pop(4)

0xe70: Push( Stack[2 + Tasks[-1].StackPointer] )
0xe71: IF (Stack[-1] == 0) GOTO 0xe73; Pop(1)

0xe72: Return(); Pop(4)

0xe73: @ IsPlayerActor(Stack[-5], Stack[-2])
0xe74: Pop(0)
0xe75: Pop(0); Push((bool) Stack[-2] == 0)
0xe76: IF (Stack[-1] == 0) GOTO 0xe78; Pop(1)

0xe77: Return(); Pop(4)

0xe78: PushEmpty(int, object)
0xe79: Stack[-1] = Stack[-7]
0xe7a: Call2 0x1a4c

0xe7b: Stack[-3] = Stack[-2]
0xe7c: Pop(2)
0xe7d: Push((int) 0)
0xe7e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe7f: IF (Stack[-1] == 0) GOTO 0xe8f; Pop(1)

0xe80: Push((int) 1)
0xe81: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe82: IF (Stack[-1] == 0) GOTO 0xe86; Pop(1)

0xe83: PushEmpty()
0xe84: Call2 0xe57

0xe85: Pop(0)
0xe86: PushEmpty(object)
0xe87: Stack[-1] = Stack[-6]
0xe88: Call2 0x1a55

0xe89: Pop(1)
0xe8a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xe8b: Push((int) 110)
0xe8c: Push((float)10.0)
0xe8d: @ SetTimer(Stack[-2], Stack[-1])
0xe8e: Pop(2)
0xe8f: Return(); Pop(4)

0xe90: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0xe91: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xe92: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xe93: Push((float)0.5)
0xe94: @ rand(Stack[-7], Stack[-1])
0xe95: Pop(1)
0xe96: @ Sleep(Stack[-6])
0xe97: Pop(0)
0xe98: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xe99: IF (Stack[-1] == 0) GOTO 0xeca; Pop(1)

0xe9a: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xe9b: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xe9c: @ GetPosition(Stack[-4])
0xe9d: Pop(0)
0xe9e: PushEmpty(float)
0xe9f: Call2 0xecb

0xea0: Pop(0)
0xea1: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0xea2: Pop(1)
0xea3: Push(Stack[-3])
0xea4: IF (Stack[-1] == 0) GOTO 0xea6; Pop(1)

0xea5: GOTO 0xeaa

0xea6: Push((int) 1)
0xea7: @ Sleep(Stack[-1])
0xea8: Pop(1)
0xea9: GOTO 0xe9c

0xeaa: GOTO 0xeac

0xeab: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xeac: PushEmpty(object, cvector)
0xead: Stack[-1] = Stack[-7]
0xeae: Call2 0xee7

0xeaf: Stack[-4] = Stack[-2]
0xeb0: Pop(2)
0xeb1: Pop(0); Push(( Stack[-2] != 0 )
0xeb2: IF (Stack[-1] == 0) GOTO 0xec5; Pop(1)

0xeb3: @ RotatePath(Stack[-2], Stack[-1])
0xeb4: Pop(0)
0xeb5: Push(Stack[-1])
0xeb6: IF (Stack[-1] == 0) GOTO 0xec4; Pop(1)

0xeb7: PushEmpty(bool)
0xeb8: Call2 0xee5

0xeb9: Pop(0)
0xeba: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0xebb: Pop(1)
0xebc: Stack[-2] = 0
0xebd: Push(Stack[-1])
0xebe: IF (Stack[-1] == 0) GOTO 0xec4; Pop(1)

0xebf: PushEmpty()
0xec0: Push(-0, 0); TaskCall(5)
0xec1: Call2 0xf91

0xec2: Pop(-0, 0); TaskReturn
0xec3: Pop(0)
0xec4: GOTO 0xec8

0xec5: Push((int) 1)
0xec6: @ Sleep(Stack[-1])
0xec7: Pop(1)
0xec8: Stack[-2] = 0
0xec9: GOTO 0xe98

0xeca: Return(); Pop(12)

0xecb: PushEmpty(float, float)
0xecc: @ GetCameraFarDistance(Stack[-1])
0xecd: Pop(0)
0xece: Stack[-3] = Stack[-1]
0xecf: Return(); Pop(2)

0xed0: PushEmpty()
0xed1: @ RequestClearPath(Stack[-1])
0xed2: Pop(0)
0xed3: Return(); Pop(0)

0xed4: @ Stop()
0xed5: Pop(0)
0xed6: Return(); Pop(0)

0xed7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xed8: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xed9: @ Stop()
0xeda: Pop(0)
0xedb: @ StopGroup0()
0xedc: Pop(0)
0xedd: Return(); Pop(0)

0xede: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xedf: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xee0: @ Stop()
0xee1: Pop(0)
0xee2: @ StopGroup0()
0xee3: Pop(0)
0xee4: Return(); Pop(0)

0xee5: Stack[-1] = (bool) 0
0xee6: Return(); Pop(0)

0xee7: PushEmpty(object, object)
0xee8: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0xee9: Pop(0)
0xeea: Stack[-4] = Stack[-1]
0xeeb: Return(); Pop(2)

0xeec: Stack[-1] = 0
0xeed: PushEmpty(int, int)
0xeee: PushEmpty(int, object)
0xeef: Stack[-1] = Stack[-5]
0xef0: Call2 0x1aee

0xef1: Stack[-3] = Stack[-2]
0xef2: Pop(2)
0xef3: Push((int) 0)
0xef4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xef5: IF (Stack[-1] == 0) GOTO 0xf00; Pop(1)

0xef6: Push((int) 1)
0xef7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xef8: IF (Stack[-1] == 0) GOTO 0xefc; Pop(1)

0xef9: PushEmpty()
0xefa: Call2 0xfe2

0xefb: Pop(0)
0xefc: PushEmpty(object)
0xefd: Stack[-1] = Stack[-4]
0xefe: Call2 0x1af1

0xeff: Pop(1)
0xf00: Return(); Pop(2)

0xf01: PushEmpty(int, int)
0xf02: PushEmpty(object)
0xf03: Stack[-1] = Stack[-4]
0xf04: Call2 0x1a0a

0xf05: Pop(1)
0xf06: PushEmpty(int, object)
0xf07: Stack[-1] = Stack[-5]
0xf08: Call2 0x1a5d

0xf09: Stack[-3] = Stack[-2]
0xf0a: Pop(2)
0xf0b: Push((int) 0)
0xf0c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf0d: IF (Stack[-1] == 0) GOTO 0xf18; Pop(1)

0xf0e: Push((int) 1)
0xf0f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf10: IF (Stack[-1] == 0) GOTO 0xf14; Pop(1)

0xf11: PushEmpty()
0xf12: Call2 0xfe2

0xf13: Pop(0)
0xf14: PushEmpty(object)
0xf15: Stack[-1] = Stack[-4]
0xf16: Call2 0x1a67

0xf17: Pop(1)
0xf18: Return(); Pop(2)

0xf19: PushEmpty(int, int)
0xf1a: PushEmpty(bool, object, object, bool)
0xf1b: Stack[-3] = Stack[-9]
0xf1c: Stack[-2] = Stack[-8]
0xf1d: Stack[-1] = Stack[-7]
0xf1e: Call2 0x1b58

0xf1f: Pop(3)
0xf20: IF (Stack[-1] == 0) GOTO 0xf34; Pop(1)

0xf21: PushEmpty(int, object, bool)
0xf22: Stack[-2] = Stack[-8]
0xf23: Stack[-1] = Stack[-6]
0xf24: Call2 0x1aba

0xf25: Stack[-4] = Stack[-3]
0xf26: Pop(3)
0xf27: Push((int) 0)
0xf28: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf29: IF (Stack[-1] == 0) GOTO 0xf34; Pop(1)

0xf2a: Push((int) 1)
0xf2b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf2c: IF (Stack[-1] == 0) GOTO 0xf30; Pop(1)

0xf2d: PushEmpty()
0xf2e: Call2 0xfe2

0xf2f: Pop(0)
0xf30: PushEmpty(object)
0xf31: Stack[-1] = Stack[-6]
0xf32: Call2 0x1ac1

0xf33: Pop(1)
0xf34: Return(); Pop(2)

0xf35: PushEmpty(int, int)
0xf36: PushEmpty(int, object)
0xf37: Stack[-1] = Stack[-5]
0xf38: Call2 0x1ae4

0xf39: Stack[-3] = Stack[-2]
0xf3a: Pop(2)
0xf3b: Push((int) 0)
0xf3c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf3d: IF (Stack[-1] == 0) GOTO 0xf48; Pop(1)

0xf3e: Push((int) 1)
0xf3f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf40: IF (Stack[-1] == 0) GOTO 0xf44; Pop(1)

0xf41: PushEmpty()
0xf42: Call2 0xfe2

0xf43: Pop(0)
0xf44: PushEmpty(object)
0xf45: Stack[-1] = Stack[-4]
0xf46: Call2 0x1ae7

0xf47: Pop(1)
0xf48: Return(); Pop(2)

0xf49: PushEmpty(int, int)
0xf4a: PushEmpty(bool, object, string)
0xf4b: Stack[-2] = Stack[-7]
0xf4c: Stack[-1] = Stack[-6]
0xf4d: Call2 0x19b4

0xf4e: Pop(2)
0xf4f: IF (Stack[-1] == 0) GOTO 0xf59; Pop(1)

0xf50: PushEmpty()
0xf51: Call2 0xfe2

0xf52: Pop(0)
0xf53: PushEmpty(object, string)
0xf54: Stack[-2] = Stack[-6]
0xf55: Stack[-1] = Stack[-5]
0xf56: Call2 0x19d4

0xf57: Pop(2)
0xf58: GOTO 0xf6d

0xf59: PushEmpty(int, string, object)
0xf5a: Stack[-2] = Stack[-6]
0xf5b: Stack[-1] = Stack[-7]
0xf5c: Call2 0x1ae9

0xf5d: Stack[-4] = Stack[-3]
0xf5e: Pop(3)
0xf5f: Push((int) 0)
0xf60: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf61: IF (Stack[-1] == 0) GOTO 0xf6d; Pop(1)

0xf62: Push((int) 1)
0xf63: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf64: IF (Stack[-1] == 0) GOTO 0xf68; Pop(1)

0xf65: PushEmpty()
0xf66: Call2 0xfe2

0xf67: Pop(0)
0xf68: PushEmpty(string, object)
0xf69: Stack[-2] = Stack[-5]
0xf6a: Stack[-1] = Stack[-6]
0xf6b: Call2 0x1aec

0xf6c: Pop(2)
0xf6d: Return(); Pop(2)

0xf6e: PushEmpty()
0xf6f: PushEmpty(bool, string)
0xf70: Stack[-1] = Stack[-3]
0xf71: Call2 0x1a17

0xf72: Pop(1)
0xf73: IF (Stack[-1] == 0) GOTO 0xf7b; Pop(1)

0xf74: PushEmpty()
0xf75: Call2 0xfe2

0xf76: Pop(0)
0xf77: PushEmpty(string)
0xf78: Stack[-1] = Stack[-2]
0xf79: Call2 0x1a27

0xf7a: Pop(1)
0xf7b: Return(); Pop(0)

0xf7c: PushEmpty()
0xf7d: Call2 0xfe2

0xf7e: Pop(0)
0xf7f: PushEmpty()
0xf80: Call2 0x1af7

0xf81: Pop(0)
0xf82: Return(); Pop(0)

0xf83: PushEmpty()
0xf84: PushEmpty(bool, object)
0xf85: Stack[-1] = Stack[-3]
0xf86: Call2 0x19ed

0xf87: Pop(1)
0xf88: IF (Stack[-1] == 0) GOTO 0xf90; Pop(1)

0xf89: PushEmpty()
0xf8a: Call2 0xfe2

0xf8b: Pop(0)
0xf8c: PushEmpty(object)
0xf8d: Stack[-1] = Stack[-2]
0xf8e: Call2 0x1a04

0xf8f: Pop(1)
0xf90: Return(); Pop(0)

0xf91: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xf92: @ WaitForAnimEnd()
0xf93: Pop(0)
0xf94: PushEmpty(bool)
0xf95: Call2 0x15e6

0xf96: Pop(0)
0xf97: Pop(1); Push((bool) Stack[-1] == 0)
0xf98: IF (Stack[-1] == 0) GOTO 0xf9a; Pop(1)

0xf99: Return(); Pop(14)

0xf9a: PushEmpty(int)
0xf9b: Call2 0x1a3b

0xf9c: Stack[-8] = Stack[-1]
0xf9d: Pop(1)
0xf9e: Stack[-6] = (int) 0
0xf9f: PushEmpty(bool)
0xfa0: Stack[-1] = (bool) 0
0xfa1: Push((int) 5)
0xfa2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xfa3: IF (Stack[-1] == 0) GOTO 0xfa9; Pop(1)

0xfa4: PushEmpty(bool)
0xfa5: Call2 0x15e6

0xfa6: Pop(0)
0xfa7: IF (Stack[-1] == 0) GOTO 0xfa9; Pop(1)

0xfa8: Stack[-1] = (bool) 1
0xfa9: IF (Stack[-1] == 0) GOTO 0xfdd; Pop(1)

0xfaa: Push((int) 3)
0xfab: @ irand(Stack[-6], Stack[-1])
0xfac: Pop(1)
0xfad: Push((int) 0)
0xfae: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xfaf: IF (Stack[-1] == 0) GOTO 0xfc1; Pop(1)

0xfb0: Push(Stack[-7])
0xfb1: IF (Stack[-1] == 0) GOTO 0xfc0; Pop(1)

0xfb2: @ irand(Stack[-4], Stack[-7])
0xfb3: Pop(0)
0xfb4: Push("all")
0xfb5: PushEmpty(string, int)
0xfb6: Stack[-1] = Stack[-7]
0xfb7: Call2 0x1a34

0xfb8: Pop(1)
0xfb9: @ PlayAnimation(Stack[-2], Stack[-1])
0xfba: Pop(2)
0xfbb: @ WaitForAnimEnd(Stack[-3])
0xfbc: Pop(0)
0xfbd: Pop(0); Push((bool) Stack[-3] == 0)
0xfbe: IF (Stack[-1] == 0) GOTO 0xfc0; Pop(1)

0xfbf: GOTO 0xfdd

0xfc0: GOTO 0xfd2

0xfc1: Push((int) 1)
0xfc2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xfc3: IF (Stack[-1] == 0) GOTO 0xfcf; Pop(1)

0xfc4: Push((int) 4)
0xfc5: @ rand(Stack[-3], Stack[-1])
0xfc6: Pop(1)
0xfc7: Push((int) 1)
0xfc8: Pop(1); Push(Stack[-3] + Stack[-1]);
0xfc9: @ Sleep(Stack[-1], Stack[-2])
0xfca: Pop(1)
0xfcb: Pop(0); Push((bool) Stack[-1] == 0)
0xfcc: IF (Stack[-1] == 0) GOTO 0xfce; Pop(1)

0xfcd: GOTO 0xfdd

0xfce: GOTO 0xfd2

0xfcf: Push(Stack[-6])
0xfd0: IF (Stack[-1] == 0) GOTO 0xfd2; Pop(1)

0xfd1: GOTO 0xfdd

0xfd2: PushEmpty(bool)
0xfd3: Call2 0xfe0

0xfd4: Pop(0)
0xfd5: Pop(1); Push((bool) Stack[-1] == 0)
0xfd6: IF (Stack[-1] == 0) GOTO 0xfd8; Pop(1)

0xfd7: GOTO 0xfdd

0xfd8: @ ResetAAS()
0xfd9: Pop(0)
0xfda: Push((int) 1)
0xfdb: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xfdc: GOTO 0xf9f

0xfdd: @ ResetAAS()
0xfde: Pop(0)
0xfdf: Return(); Pop(14)

0xfe0: Stack[-1] = (bool) 1
0xfe1: Return(); Pop(0)

0xfe2: @ StopAnimation()
0xfe3: Pop(0)
0xfe4: @ StopGroup0()
0xfe5: Pop(0)
0xfe6: Return(); Pop(0)

0xfe7: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xfe8: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0xfe9: PushEmpty()
0xfea: Call2 0x101a

0xfeb: Pop(0)
0xfec: @ GetDirection(Stack[-3])
0xfed: Pop(0)
0xfee: PushEmpty(cvector, object)
0xfef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff0: Call2 0x14b3

0xff1: Stack[-4] = Stack[-2]
0xff2: Pop(2)
0xff3: PushEmpty(float, cvector, cvector)
0xff4: Stack[-2] = Stack[-6]
0xff5: Stack[-1] = Stack[-5]
0xff6: Call2 0x172d

0xff7: Pop(2)
0xff8: Push((int) 0)
0xff9: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xffa: IF (Stack[-1] == 0) GOTO 0x1001; Pop(1)

0xffb: PushEmpty(object)
0xffc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xffd: Call2 0x15db

0xffe: Pop(1)
0xfff: Stack[-1] = (bool) 1
0x1000: GOTO 0x1004

0x1001: Push((float)1.5)
0x1002: @ Sleep(Stack[-1], Stack[-2])
0x1003: Pop(1)
0x1004: Push(Stack[-1])
0x1005: IF (Stack[-1] == 0) GOTO 0x1014; Pop(1)

0x1006: PushEmpty(object)
0x1007: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1008: Call2 0x15db

0x1009: Pop(1)
0x100a: Push((int) 111)
0x100b: Push((float)0.5)
0x100c: @ SetTimer(Stack[-2], Stack[-1])
0x100d: Pop(2)
0x100e: Push((float)5.0)
0x100f: @ Sleep(Stack[-1])
0x1010: Pop(1)
0x1011: Push((int) 111)
0x1012: @ KillTimer(Stack[-1])
0x1013: Pop(1)
0x1014: @ StopAsync()
0x1015: Pop(0)
0x1016: Push("head")
0x1017: @ UnlookAsync(Stack[-1])
0x1018: Pop(1)
0x1019: Return(); Pop(6)

0x101a: PushEmpty(object)
0x101b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101c: Call2 0x169e

0x101d: Pop(1)
0x101e: Return(); Pop(0)

0x101f: PushEmpty(int, int)
0x1020: PushEmpty(int, object)
0x1021: Stack[-1] = Stack[-5]
0x1022: Call2 0x1aee

0x1023: Stack[-3] = Stack[-2]
0x1024: Pop(2)
0x1025: Push((int) 0)
0x1026: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1027: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x1028: Push((int) 1)
0x1029: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x102a: IF (Stack[-1] == 0) GOTO 0x102e; Pop(1)

0x102b: PushEmpty()
0x102c: Call2 0x10ae

0x102d: Pop(0)
0x102e: PushEmpty(object)
0x102f: Stack[-1] = Stack[-4]
0x1030: Call2 0x1af1

0x1031: Pop(1)
0x1032: Return(); Pop(2)

0x1033: PushEmpty(int, int)
0x1034: PushEmpty(object)
0x1035: Stack[-1] = Stack[-4]
0x1036: Call2 0x1a0a

0x1037: Pop(1)
0x1038: PushEmpty(int, object)
0x1039: Stack[-1] = Stack[-5]
0x103a: Call2 0x1a5d

0x103b: Stack[-3] = Stack[-2]
0x103c: Pop(2)
0x103d: Push((int) 0)
0x103e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x103f: IF (Stack[-1] == 0) GOTO 0x104a; Pop(1)

0x1040: Push((int) 1)
0x1041: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1042: IF (Stack[-1] == 0) GOTO 0x1046; Pop(1)

0x1043: PushEmpty()
0x1044: Call2 0x10ae

0x1045: Pop(0)
0x1046: PushEmpty(object)
0x1047: Stack[-1] = Stack[-4]
0x1048: Call2 0x1a67

0x1049: Pop(1)
0x104a: Return(); Pop(2)

0x104b: PushEmpty(int, int)
0x104c: PushEmpty(bool, object, object, bool)
0x104d: Stack[-3] = Stack[-9]
0x104e: Stack[-2] = Stack[-8]
0x104f: Stack[-1] = Stack[-7]
0x1050: Call2 0x1b58

0x1051: Pop(3)
0x1052: IF (Stack[-1] == 0) GOTO 0x1066; Pop(1)

0x1053: PushEmpty(int, object, bool)
0x1054: Stack[-2] = Stack[-8]
0x1055: Stack[-1] = Stack[-6]
0x1056: Call2 0x1aba

0x1057: Stack[-4] = Stack[-3]
0x1058: Pop(3)
0x1059: Push((int) 0)
0x105a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x105b: IF (Stack[-1] == 0) GOTO 0x1066; Pop(1)

0x105c: Push((int) 1)
0x105d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x105e: IF (Stack[-1] == 0) GOTO 0x1062; Pop(1)

0x105f: PushEmpty()
0x1060: Call2 0x10ae

0x1061: Pop(0)
0x1062: PushEmpty(object)
0x1063: Stack[-1] = Stack[-6]
0x1064: Call2 0x1ac1

0x1065: Pop(1)
0x1066: Return(); Pop(2)

0x1067: PushEmpty(int, int)
0x1068: PushEmpty(int, object)
0x1069: Stack[-1] = Stack[-5]
0x106a: Call2 0x1ae4

0x106b: Stack[-3] = Stack[-2]
0x106c: Pop(2)
0x106d: Push((int) 0)
0x106e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x106f: IF (Stack[-1] == 0) GOTO 0x107a; Pop(1)

0x1070: Push((int) 1)
0x1071: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1072: IF (Stack[-1] == 0) GOTO 0x1076; Pop(1)

0x1073: PushEmpty()
0x1074: Call2 0x10ae

0x1075: Pop(0)
0x1076: PushEmpty(object)
0x1077: Stack[-1] = Stack[-4]
0x1078: Call2 0x1ae7

0x1079: Pop(1)
0x107a: Return(); Pop(2)

0x107b: PushEmpty(int, int)
0x107c: PushEmpty(bool, object, string)
0x107d: Stack[-2] = Stack[-7]
0x107e: Stack[-1] = Stack[-6]
0x107f: Call2 0x19b4

0x1080: Pop(2)
0x1081: IF (Stack[-1] == 0) GOTO 0x108b; Pop(1)

0x1082: PushEmpty()
0x1083: Call2 0x10ae

0x1084: Pop(0)
0x1085: PushEmpty(object, string)
0x1086: Stack[-2] = Stack[-6]
0x1087: Stack[-1] = Stack[-5]
0x1088: Call2 0x19d4

0x1089: Pop(2)
0x108a: GOTO 0x109f

0x108b: PushEmpty(int, string, object)
0x108c: Stack[-2] = Stack[-6]
0x108d: Stack[-1] = Stack[-7]
0x108e: Call2 0x1ae9

0x108f: Stack[-4] = Stack[-3]
0x1090: Pop(3)
0x1091: Push((int) 0)
0x1092: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1093: IF (Stack[-1] == 0) GOTO 0x109f; Pop(1)

0x1094: Push((int) 1)
0x1095: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1096: IF (Stack[-1] == 0) GOTO 0x109a; Pop(1)

0x1097: PushEmpty()
0x1098: Call2 0x10ae

0x1099: Pop(0)
0x109a: PushEmpty(string, object)
0x109b: Stack[-2] = Stack[-5]
0x109c: Stack[-1] = Stack[-6]
0x109d: Call2 0x1aec

0x109e: Pop(2)
0x109f: Return(); Pop(2)

0x10a0: PushEmpty()
0x10a1: PushEmpty(bool, string)
0x10a2: Stack[-1] = Stack[-3]
0x10a3: Call2 0x1a17

0x10a4: Pop(1)
0x10a5: IF (Stack[-1] == 0) GOTO 0x10ad; Pop(1)

0x10a6: PushEmpty()
0x10a7: Call2 0x10ae

0x10a8: Pop(0)
0x10a9: PushEmpty(string)
0x10aa: Stack[-1] = Stack[-2]
0x10ab: Call2 0x1a27

0x10ac: Pop(1)
0x10ad: Return(); Pop(0)

0x10ae: @ StopGroup0()
0x10af: Pop(0)
0x10b0: @ StopAsync()
0x10b1: Pop(0)
0x10b2: Push("head")
0x10b3: @ UnlookAsync(Stack[-1])
0x10b4: Pop(1)
0x10b5: Push((int) 111)
0x10b6: @ KillTimer(Stack[-1])
0x10b7: Pop(1)
0x10b8: Return(); Pop(0)

0x10b9: PushEmpty()
0x10ba: PushEmpty()
0x10bb: Call2 0x10ae

0x10bc: Pop(0)
0x10bd: PushEmpty(object)
0x10be: Stack[-1] = Stack[-2]
0x10bf: Call2 0x199c

0x10c0: Pop(1)
0x10c1: Return(); Pop(0)

0x10c2: PushEmpty(cvector, cvector, cvector, cvector)
0x10c3: Push((int) 111)
0x10c4: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x10c5: IF (Stack[-1] == 0) GOTO 0x10c7; Pop(1)

0x10c6: Return(); Pop(4)

0x10c7: PushEmpty(bool, object)
0x10c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c9: Call2 0x1545

0x10ca: Pop(1)
0x10cb: Pop(1); Push((bool) Stack[-1] == 0)
0x10cc: IF (Stack[-1] == 0) GOTO 0x10d1; Pop(1)

0x10cd: PushEmpty()
0x10ce: Call2 0x10ae

0x10cf: Pop(0)
0x10d0: Return(); Pop(4)

0x10d1: @ GetDirection(Stack[-2])
0x10d2: Pop(0)
0x10d3: PushEmpty(cvector, object)
0x10d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d5: Call2 0x14b3

0x10d6: Stack[-3] = Stack[-2]
0x10d7: Pop(2)
0x10d8: PushEmpty(float, cvector, cvector)
0x10d9: Stack[-2] = Stack[-5]
0x10da: Stack[-1] = Stack[-4]
0x10db: Call2 0x172d

0x10dc: Pop(2)
0x10dd: Push((float)0.5)
0x10de: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x10df: IF (Stack[-1] == 0) GOTO 0x10e4; Pop(1)

0x10e0: PushEmpty(object)
0x10e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e2: Call2 0x15db

0x10e3: Pop(1)
0x10e4: Return(); Pop(4)

0x10e5: PushEmpty()
0x10e6: Call2 0x10ae

0x10e7: Pop(0)
0x10e8: PushEmpty()
0x10e9: Call2 0x1af7

0x10ea: Pop(0)
0x10eb: Return(); Pop(0)

0x10ec: PushEmpty()
0x10ed: PushEmpty(bool, object)
0x10ee: Stack[-1] = Stack[-3]
0x10ef: Call2 0x19ed

0x10f0: Pop(1)
0x10f1: IF (Stack[-1] == 0) GOTO 0x10f9; Pop(1)

0x10f2: PushEmpty()
0x10f3: Call2 0x10ae

0x10f4: Pop(0)
0x10f5: PushEmpty(object)
0x10f6: Stack[-1] = Stack[-2]
0x10f7: Call2 0x1a04

0x10f8: Pop(1)
0x10f9: Return(); Pop(0)

0x10fa: PushEmpty()
0x10fb: PushEmpty(object, bool, float)
0x10fc: Stack[-3] = Stack[-4]
0x10fd: Stack[-2] = (bool) 1
0x10fe: Stack[-1] = (float) 180.0
0x10ff: Call2 0x1108

0x1100: Pop(3)
0x1101: Return(); Pop(0)

0x1102: PushEmpty()
0x1103: Stack[-3] = (float) 0.03
0x1104: Return(); Pop(0)

0x1105: PushEmpty()
0x1106: Stack[-3] = (int) 0
0x1107: Return(); Pop(0)

0x1108: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x1109: PushEmpty()
0x110a: Call2 0x11ed

0x110b: Pop(0)
0x110c: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x110d: Push("@GetAttackDistance")
0x110e: Push((int) 1)
0x110f: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x1110: IF (Stack[-1] == 0) GOTO 0x1116; Pop(1)

0x1111: @@ GetAttackDistance(Stack[-11])
0x1112: Pop(0)
0x1113: Push((int) 50)
0x1114: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x1115: GOTO 0x1117

0x1116: Stack[-11] = Stack[-23]
0x1117: Push((int) 150)
0x1118: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x1119: IF (Stack[-1] == 0) GOTO 0x111b; Pop(1)

0x111a: Stack[-11] = (int) 150
0x111b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x111c: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x111d: @ IsPlayerActor(Stack[-0], Stack[-8])
0x111e: Pop(0)
0x111f: Push(Stack[-8])
0x1120: IF (Stack[-1] == 0) GOTO 0x1129; Pop(1)

0x1121: Push("attack")
0x1122: @ PlayGlobalMusic(Stack[-1])
0x1123: Pop(1)
0x1124: PushEmpty(object)
0x1125: Call2 0x16f3

0x1126: Pop(0)
0x1127: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x1128: Pop(1)
0x1129: Push(Stack[-24])
0x112a: IF (Stack[-1] == 0) GOTO 0x112d; Pop(1)

0x112b: Stack[-7] = (bool) 0
0x112c: GOTO 0x112e

0x112d: Stack[-7] = (bool) 1
0x112e: Push((float)400.0)
0x112f: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x1130: PushEmpty(bool)
0x1131: Stack[-1] = (bool) 0
0x1132: PushEmpty(bool, object)
0x1133: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1134: Call2 0x1545

0x1135: Pop(1)
0x1136: IF (Stack[-1] == 0) GOTO 0x113a; Pop(1)

0x1137: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1138: IF (Stack[-1] == 0) GOTO 0x113a; Pop(1)

0x1139: Stack[-1] = (bool) 1
0x113a: IF (Stack[-1] == 0) GOTO 0x11dc; Pop(1)

0x113b: PushEmpty()
0x113c: Call2 0x138a

0x113d: Pop(0)
0x113e: @@ GetPFPosition(Stack[-10])
0x113f: Pop(0)
0x1140: @ GetPFPosition(Stack[-9])
0x1141: Pop(0)
0x1142: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1143: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1144: Pop(0); Push(Stack[-6] * Stack[-6]);
0x1145: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1146: IF (Stack[-1] == 0) GOTO 0x1156; Pop(1)

0x1147: PushEmpty(bool, object, float, float, bool, bool)
0x1148: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1149: Stack[-4] = Stack[-17]
0x114a: Stack[-3] = (float) 3000.0
0x114b: Stack[-2] = (bool) 1
0x114c: Stack[-1] = (bool) 0
0x114d: Push(-6, 3); TaskCall(8)
0x114e: Call2 0x13a5

0x114f: Pop(-6, 3); TaskReturn
0x1150: Pop(5)
0x1151: Pop(1); Push((bool) Stack[-1] == 0)
0x1152: IF (Stack[-1] == 0) GOTO 0x1154; Pop(1)

0x1153: GOTO 0x11dc

0x1154: Stack[-7] = (bool) 0
0x1155: GOTO 0x11db

0x1156: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1157: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1158: IF (Stack[-1] == 0) GOTO 0x11d3; Pop(1)

0x1159: @@ GetPFPosition(Stack[-3])
0x115a: Pop(0)
0x115b: @ CanReachByPF(Stack[-2], Stack[-3])
0x115c: Pop(0)
0x115d: Pop(0); Push((bool) Stack[-2] == 0)
0x115e: IF (Stack[-1] == 0) GOTO 0x116e; Pop(1)

0x115f: PushEmpty(bool, object, float, float, bool, bool)
0x1160: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1161: Stack[-4] = Stack[-17]
0x1162: Stack[-3] = (float) 3000.0
0x1163: Stack[-2] = (bool) 1
0x1164: Stack[-1] = (bool) 0
0x1165: Push(-6, 3); TaskCall(8)
0x1166: Call2 0x13a5

0x1167: Pop(-6, 3); TaskReturn
0x1168: Pop(5)
0x1169: Pop(1); Push((bool) Stack[-1] == 0)
0x116a: IF (Stack[-1] == 0) GOTO 0x116c; Pop(1)

0x116b: GOTO 0x11dc

0x116c: Stack[-7] = (bool) 0
0x116d: GOTO 0x1130

0x116e: Pop(0); Push((bool) Stack[-7] == 0)
0x116f: IF (Stack[-1] == 0) GOTO 0x1187; Pop(1)

0x1170: PushEmpty(object)
0x1171: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1172: Call2 0x15db

0x1173: Pop(1)
0x1174: Push("all")
0x1175: Push("attack_on")
0x1176: @ PlayAnimation(Stack[-2], Stack[-1])
0x1177: Pop(2)
0x1178: @ WaitForAnimEnd()
0x1179: Pop(0)
0x117a: PushEmpty()
0x117b: Call2 0x138a

0x117c: Pop(0)
0x117d: @ StopAsync()
0x117e: Pop(0)
0x117f: Stack[-7] = (bool) 1
0x1180: PushEmpty(bool, object)
0x1181: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1182: Call2 0x1545

0x1183: Pop(1)
0x1184: Pop(1); Push((bool) Stack[-1] == 0)
0x1185: IF (Stack[-1] == 0) GOTO 0x1187; Pop(1)

0x1186: GOTO 0x11dc

0x1187: @ rand(Stack[-1])
0x1188: Pop(0)
0x1189: PushEmpty(bool)
0x118a: Stack[-1] = (bool) 1
0x118b: Push((float)0.25)
0x118c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x118d: IF (Stack[-1] == 0) GOTO 0x1193; Pop(1)

0x118e: PushEmpty(bool)
0x118f: Call2 0x135f

0x1190: Pop(0)
0x1191: IF (Stack[-1] == 0) GOTO 0x1193; Pop(1)

0x1192: Stack[-1] = (bool) 0
0x1193: IF (Stack[-1] == 0) GOTO 0x11a4; Pop(1)

0x1194: @ Face(Stack[-0])
0x1195: Pop(0)
0x1196: PushEmpty()
0x1197: Call2 0x1391

0x1198: Pop(0)
0x1199: Push("all")
0x119a: Push("attack_stay")
0x119b: @ PlayAnimation(Stack[-2], Stack[-1])
0x119c: Pop(2)
0x119d: PushEmpty(bool, float)
0x119e: Stack[-1] = Stack[-25]
0x119f: Call2 0x12db

0x11a0: Pop(2)
0x11a1: @ StopAsync()
0x11a2: Pop(0)
0x11a3: GOTO 0x11d2

0x11a4: @ Face(Stack[-0])
0x11a5: Pop(0)
0x11a6: Push("all")
0x11a7: Push("fjump")
0x11a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x11a9: Pop(2)
0x11aa: @ WaitForAnimEnd()
0x11ab: Pop(0)
0x11ac: PushEmpty()
0x11ad: Call2 0x138a

0x11ae: Pop(0)
0x11af: Push(CVector(0.0, 0.0, 0.0))
0x11b0: @ SetSpeed(Stack[-1])
0x11b1: Pop(1)
0x11b2: @ Stop()
0x11b3: Pop(0)
0x11b4: @ StopAsync()
0x11b5: Pop(0)
0x11b6: PushEmpty(bool)
0x11b7: Call2 0x135f

0x11b8: Pop(0)
0x11b9: Pop(1); Push((bool) Stack[-1] == 0)
0x11ba: IF (Stack[-1] == 0) GOTO 0x11d2; Pop(1)

0x11bb: PushEmpty(bool, object)
0x11bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11bd: Call2 0x1545

0x11be: Pop(1)
0x11bf: Pop(1); Push((bool) Stack[-1] == 0)
0x11c0: IF (Stack[-1] == 0) GOTO 0x11c2; Pop(1)

0x11c1: GOTO 0x11dc

0x11c2: @@ GetPFPosition(Stack[-10])
0x11c3: Pop(0)
0x11c4: @ GetPFPosition(Stack[-9])
0x11c5: Pop(0)
0x11c6: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x11c7: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x11c8: Pop(0); Push(Stack[-23] * Stack[-23]);
0x11c9: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x11ca: IF (Stack[-1] == 0) GOTO 0x11d2; Pop(1)

0x11cb: PushEmpty(bool, float)
0x11cc: Stack[-1] = Stack[-25]
0x11cd: Call2 0x1237

0x11ce: Pop(1)
0x11cf: Pop(1); Push((bool) Stack[-1] == 0)
0x11d0: IF (Stack[-1] == 0) GOTO 0x11d2; Pop(1)

0x11d1: GOTO 0x11dc

0x11d2: GOTO 0x11db

0x11d3: PushEmpty(bool, float)
0x11d4: Stack[-1] = Stack[-25]
0x11d5: Call2 0x1237

0x11d6: Pop(1)
0x11d7: Pop(1); Push((bool) Stack[-1] == 0)
0x11d8: IF (Stack[-1] == 0) GOTO 0x11da; Pop(1)

0x11d9: GOTO 0x11dc

0x11da: Stack[-7] = (bool) 1
0x11db: GOTO 0x1130

0x11dc: @ WaitForAnimEnd()
0x11dd: Pop(0)
0x11de: Push( Stack[3 + Tasks[-1].StackPointer] )
0x11df: IF (Stack[-1] == 0) GOTO 0x11e1; Pop(1)

0x11e0: Return(); Pop(22)

0x11e1: Push("all")
0x11e2: Push("attack_off")
0x11e3: @ PlayAnimation(Stack[-2], Stack[-1])
0x11e4: Pop(2)
0x11e5: @ WaitForAnimEnd()
0x11e6: Pop(0)
0x11e7: Push(Stack[-8])
0x11e8: IF (Stack[-1] == 0) GOTO 0x11ec; Pop(1)

0x11e9: Push((float)2.0)
0x11ea: @ Sleep(Stack[-1])
0x11eb: Pop(1)
0x11ec: Return(); Pop(22)

0x11ed: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x11ee: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x11ef: Push("all")
0x11f0: Push("attack_begin")
0x11f1: Push((int) 1)
0x11f2: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x11f3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11f4: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x11f5: Pop(2)
0x11f6: Pop(0); Push((bool) Stack[-3] == 0)
0x11f7: IF (Stack[-1] == 0) GOTO 0x11f9; Pop(1)

0x11f8: GOTO 0x11fc

0x11f9: Push((int) 1)
0x11fa: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x11fb: GOTO 0x11ef

0x11fc: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x11fd: Push("attack")
0x11fe: Push((int) 1)
0x11ff: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1200: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1201: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x1202: Pop(1)
0x1203: Pop(0); Push((bool) Stack[-2] == 0)
0x1204: IF (Stack[-1] == 0) GOTO 0x1206; Pop(1)

0x1205: GOTO 0x1209

0x1206: Push((int) 1)
0x1207: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1208: GOTO 0x11fd

0x1209: Push("all")
0x120a: Push("bjump")
0x120b: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x120c: Pop(2)
0x120d: Push(CvectorIndex(Stack[-1], 2))
0x120e: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x120f: Return(); Pop(6)

0x1210: PushEmpty(object, float, float, object, float, float)
0x1211: Push((float)0.9)
0x1212: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1213: @ GetVictim(Stack[-1], Stack[-4])
0x1214: Pop(1)
0x1215: @ ReportAttack(Stack[-0])
0x1216: Pop(0)
0x1217: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1218: IF (Stack[-1] == 0) GOTO 0x1235; Pop(1)

0x1219: PushEmpty(float, object, int)
0x121a: Stack[-2] = Stack[-6]
0x121b: Stack[-1] = Stack[-10]
0x121c: Call2 0x1102

0x121d: Stack[-5] = Stack[-3]
0x121e: Pop(3)
0x121f: PushEmpty(float, object, float, int)
0x1220: Stack[-3] = Stack[-7]
0x1221: Stack[-2] = Stack[-6]
0x1222: PushEmpty(int, object, int)
0x1223: Stack[-2] = Stack[-10]
0x1224: Stack[-1] = Stack[-14]
0x1225: Call2 0x1105

0x1226: Stack[-4] = Stack[-3]
0x1227: Pop(3)
0x1228: Call2 0x14d3

0x1229: Stack[-5] = Stack[-4]
0x122a: Pop(4)
0x122b: PushEmpty(int)
0x122c: Call2 0x138f

0x122d: Pop(0)
0x122e: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x122f: Pop(1)
0x1230: PushEmpty(object, float)
0x1231: Stack[-2] = Stack[-5]
0x1232: Stack[-1] = Stack[-3]
0x1233: Call2 0x1396

0x1234: Pop(2)
0x1235: Return(); Pop(6)

0x1236: Stack[-3] = 0
0x1237: PushEmpty(int, bool, int, string, int, bool, int, string)
0x1238: PushEmpty()
0x1239: Call2 0x138a

0x123a: Pop(0)
0x123b: @ irand(Stack[-4], Stack[-1])
0x123c: Pop(0)
0x123d: Push((int) 1)
0x123e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x123f: @ Face(Stack[-0])
0x1240: Pop(0)
0x1241: Push((bool) 1)
0x1242: @ SetAttackState(Stack[-1])
0x1243: Pop(1)
0x1244: PushEmpty()
0x1245: Call2 0x176e

0x1246: Pop(0)
0x1247: Push("all")
0x1248: Push("attack_begin")
0x1249: Pop(1); Push(Stack[-1] + Stack[-6]);
0x124a: @ PlayAnimation(Stack[-2], Stack[-1])
0x124b: Pop(2)
0x124c: @ WaitForAnimEnd()
0x124d: Pop(0)
0x124e: PushEmpty()
0x124f: Call2 0x136a

0x1250: Pop(0)
0x1251: PushEmpty(bool, object)
0x1252: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1253: Call2 0x1545

0x1254: Pop(1)
0x1255: Pop(1); Push((bool) Stack[-1] == 0)
0x1256: IF (Stack[-1] == 0) GOTO 0x125b; Pop(1)

0x1257: @ StopAsync()
0x1258: Pop(0)
0x1259: Stack[-10] = (bool) 0
0x125a: Return(); Pop(8)

0x125b: PushEmpty(float, int)
0x125c: Stack[-2] = Stack[-11]
0x125d: Stack[-1] = Stack[-6]
0x125e: Call2 0x1210

0x125f: Pop(2)
0x1260: Push("all")
0x1261: Push("attack_middle")
0x1262: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1263: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1264: Pop(2)
0x1265: Push(Stack[-3])
0x1266: IF (Stack[-1] == 0) GOTO 0x12ac; Pop(1)

0x1267: PushEmpty()
0x1268: Call2 0x176e

0x1269: Pop(0)
0x126a: Push("all")
0x126b: Push("attack_middle")
0x126c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x126d: @ PlayAnimation(Stack[-2], Stack[-1])
0x126e: Pop(2)
0x126f: @ WaitForAnimEnd()
0x1270: Pop(0)
0x1271: PushEmpty()
0x1272: Call2 0x138a

0x1273: Pop(0)
0x1274: PushEmpty(bool, object)
0x1275: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1276: Call2 0x1545

0x1277: Pop(1)
0x1278: Pop(1); Push((bool) Stack[-1] == 0)
0x1279: IF (Stack[-1] == 0) GOTO 0x127e; Pop(1)

0x127a: @ StopAsync()
0x127b: Pop(0)
0x127c: Stack[-10] = (bool) 0
0x127d: Return(); Pop(8)

0x127e: PushEmpty(float, int)
0x127f: Stack[-2] = Stack[-11]
0x1280: Stack[-1] = Stack[-6]
0x1281: Call2 0x1210

0x1282: Pop(2)
0x1283: Stack[-2] = (int) 1
0x1284: Push("attack_middle")
0x1285: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1286: Push("_")
0x1287: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1288: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x1289: Push("all")
0x128a: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x128b: Pop(1)
0x128c: Pop(0); Push((bool) Stack[-3] == 0)
0x128d: IF (Stack[-1] == 0) GOTO 0x128f; Pop(1)

0x128e: GOTO 0x12ac

0x128f: PushEmpty()
0x1290: Call2 0x176e

0x1291: Pop(0)
0x1292: Push("all")
0x1293: @ PlayAnimation(Stack[-1], Stack[-2])
0x1294: Pop(1)
0x1295: @ WaitForAnimEnd()
0x1296: Pop(0)
0x1297: PushEmpty()
0x1298: Call2 0x138a

0x1299: Pop(0)
0x129a: PushEmpty(bool, object)
0x129b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129c: Call2 0x1545

0x129d: Pop(1)
0x129e: Pop(1); Push((bool) Stack[-1] == 0)
0x129f: IF (Stack[-1] == 0) GOTO 0x12a4; Pop(1)

0x12a0: @ StopAsync()
0x12a1: Pop(0)
0x12a2: Stack[-10] = (bool) 0
0x12a3: Return(); Pop(8)

0x12a4: PushEmpty(float, int)
0x12a5: Stack[-2] = Stack[-11]
0x12a6: Stack[-1] = Stack[-6]
0x12a7: Call2 0x1210

0x12a8: Pop(2)
0x12a9: Push((int) 1)
0x12aa: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12ab: GOTO 0x1284

0x12ac: Push((bool) 0)
0x12ad: @ SetAttackState(Stack[-1])
0x12ae: Pop(1)
0x12af: Push("all")
0x12b0: Push("attack_end")
0x12b1: Pop(1); Push(Stack[-1] + Stack[-6]);
0x12b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x12b3: Pop(2)
0x12b4: PushEmpty(bool)
0x12b5: Call2 0x1398

0x12b6: Pop(0)
0x12b7: IF (Stack[-1] == 0) GOTO 0x12be; Pop(1)

0x12b8: PushEmpty(bool, float)
0x12b9: Stack[-1] = (float) 0.75
0x12ba: Call2 0x12c0

0x12bb: Pop(2)
0x12bc: @ StopAsync()
0x12bd: Pop(0)
0x12be: Stack[-10] = (bool) 1
0x12bf: Return(); Pop(8)

0x12c0: PushEmpty(float, bool, float, bool)
0x12c1: @ rand(Stack[-2])
0x12c2: Pop(0)
0x12c3: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x12c4: IF (Stack[-1] == 0) GOTO 0x12d4; Pop(1)

0x12c5: @ IsAnimationPlaying(Stack[-1])
0x12c6: Pop(0)
0x12c7: Pop(0); Push((bool) Stack[-1] == 0)
0x12c8: IF (Stack[-1] == 0) GOTO 0x12ca; Pop(1)

0x12c9: GOTO 0x12d3

0x12ca: PushEmpty(bool)
0x12cb: Call2 0x1322

0x12cc: Pop(0)
0x12cd: IF (Stack[-1] == 0) GOTO 0x12d0; Pop(1)

0x12ce: Stack[-6] = (bool) 1
0x12cf: Return(); Pop(4)

0x12d0: @ sync()
0x12d1: Pop(0)
0x12d2: GOTO 0x12c5

0x12d3: GOTO 0x12d9

0x12d4: @ WaitForAnimEnd()
0x12d5: Pop(0)
0x12d6: PushEmpty()
0x12d7: Call2 0x138a

0x12d8: Pop(0)
0x12d9: Stack[-6] = (bool) 0
0x12da: Return(); Pop(4)

0x12db: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x12dc: @ IsAnimationPlaying(Stack[-5])
0x12dd: Pop(0)
0x12de: Pop(0); Push((bool) Stack[-5] == 0)
0x12df: IF (Stack[-1] == 0) GOTO 0x12e1; Pop(1)

0x12e0: GOTO 0x1301

0x12e1: PushEmpty(bool)
0x12e2: Call2 0x1322

0x12e3: Pop(0)
0x12e4: IF (Stack[-1] == 0) GOTO 0x12e7; Pop(1)

0x12e5: Stack[-12] = (bool) 1
0x12e6: Return(); Pop(10)

0x12e7: PushEmpty(bool, object)
0x12e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12e9: Call2 0x1545

0x12ea: Pop(1)
0x12eb: Pop(1); Push((bool) Stack[-1] == 0)
0x12ec: IF (Stack[-1] == 0) GOTO 0x12ef; Pop(1)

0x12ed: Stack[-12] = (bool) 0
0x12ee: Return(); Pop(10)

0x12ef: @@ GetPFPosition(Stack[-4])
0x12f0: Pop(0)
0x12f1: @ GetPFPosition(Stack[-3])
0x12f2: Pop(0)
0x12f3: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x12f4: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x12f5: Pop(0); Push(Stack[-11] * Stack[-11]);
0x12f6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12f7: IF (Stack[-1] == 0) GOTO 0x12fe; Pop(1)

0x12f8: PushEmpty(bool, float)
0x12f9: Stack[-1] = Stack[-13]
0x12fa: Call2 0x1237

0x12fb: Pop(2)
0x12fc: Stack[-12] = (bool) 1
0x12fd: Return(); Pop(10)

0x12fe: @ sync()
0x12ff: Pop(0)
0x1300: GOTO 0x12dc

0x1301: PushEmpty()
0x1302: Call2 0x138a

0x1303: Pop(0)
0x1304: Stack[-12] = (bool) 0
0x1305: Return(); Pop(10)

0x1306: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x1307: PushEmpty(bool, object)
0x1308: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1309: Call2 0x1545

0x130a: Pop(1)
0x130b: Pop(1); Push((bool) Stack[-1] == 0)
0x130c: IF (Stack[-1] == 0) GOTO 0x130f; Pop(1)

0x130d: Stack[-11] = (bool) 0
0x130e: Return(); Pop(10)

0x130f: PushEmpty(bool)
0x1310: Call2 0x135f

0x1311: Pop(0)
0x1312: IF (Stack[-1] == 0) GOTO 0x1320; Pop(1)

0x1313: @@ GetPFPosition(Stack[-5])
0x1314: Pop(0)
0x1315: @ GetPFPosition(Stack[-4])
0x1316: Pop(0)
0x1317: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x1318: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1319: @@ GetAttackDistance(Stack[-1])
0x131a: Pop(0)
0x131b: Push((int) 50)
0x131c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x131d: Pop(0); Push(Stack[-1] * Stack[-1]);
0x131e: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x131f: Return(); Pop(10)

0x1320: Stack[-11] = (bool) 0
0x1321: Return(); Pop(10)

0x1322: PushEmpty(bool)
0x1323: Stack[-1] = (bool) 0
0x1324: PushEmpty(bool)
0x1325: Call2 0x1306

0x1326: Pop(0)
0x1327: IF (Stack[-1] == 0) GOTO 0x132d; Pop(1)

0x1328: PushEmpty(bool)
0x1329: Call2 0x1332

0x132a: Pop(0)
0x132b: IF (Stack[-1] == 0) GOTO 0x132d; Pop(1)

0x132c: Stack[-1] = (bool) 1
0x132d: IF (Stack[-1] == 0) GOTO 0x1330; Pop(1)

0x132e: Stack[-1] = (bool) 1
0x132f: Return(); Pop(0)

0x1330: Stack[-1] = (bool) 0
0x1331: Return(); Pop(0)

0x1332: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x1333: @ GetScene(Stack[-5])
0x1334: Pop(0)
0x1335: Stack[-4] = (bool) 0
0x1336: PushEmpty(cvector, object)
0x1337: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1338: Call2 0x14b3

0x1339: Pop(1)
0x133a: Pop(1); Push(( -Stack[-1])
0x133b: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x133c: Pop(1)
0x133d: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x133e: IF (Stack[-1] == 0) GOTO 0x1340; Pop(1)

0x133f: GOTO 0x135c

0x1340: @ Face(Stack[-0])
0x1341: Pop(0)
0x1342: Push("all")
0x1343: Push("bjump")
0x1344: @ PlayAnimation(Stack[-2], Stack[-1])
0x1345: Pop(2)
0x1346: @@ GetPFPosition(Stack[-2])
0x1347: Pop(0)
0x1348: @ GetPFPosition(Stack[-1])
0x1349: Pop(0)
0x134a: @ WaitForAnimEnd()
0x134b: Pop(0)
0x134c: PushEmpty()
0x134d: Call2 0x138a

0x134e: Pop(0)
0x134f: @ StopAsync()
0x1350: Pop(0)
0x1351: Push(CVector(0.0, 0.0, 0.0))
0x1352: @ SetSpeed(Stack[-1])
0x1353: Pop(1)
0x1354: Stack[-4] = (bool) 1
0x1355: PushEmpty(bool)
0x1356: Call2 0x1306

0x1357: Pop(0)
0x1358: Pop(1); Push((bool) Stack[-1] == 0)
0x1359: IF (Stack[-1] == 0) GOTO 0x135b; Pop(1)

0x135a: GOTO 0x135c

0x135b: GOTO 0x1336

0x135c: Stack[-11] = Stack[-4]
0x135d: Return(); Pop(10)

0x135e: Stack[-5] = 0
0x135f: PushEmpty(bool, bool)
0x1360: Push("IsAttacking")
0x1361: Push((int) 1)
0x1362: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x1363: IF (Stack[-1] == 0) GOTO 0x1368; Pop(1)

0x1364: @@ IsAttacking(Stack[-1])
0x1365: Pop(0)
0x1366: Stack[-3] = Stack[-1]
0x1367: Return(); Pop(2)

0x1368: Stack[-3] = (bool) 0
0x1369: Return(); Pop(2)

0x136a: PushEmpty(float, int, float, int)
0x136b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x136c: IF (Stack[-1] == 0) GOTO 0x136e; Pop(1)

0x136d: Return(); Pop(4)

0x136e: Push( Stack[5 + Tasks[-1].StackPointer] )
0x136f: IF (Stack[-1] == 0) GOTO 0x1376; Pop(1)

0x1370: Push((int) -1)
0x1371: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1372: Push((int) 0)
0x1373: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x1374: IF (Stack[-1] == 0) GOTO 0x1376; Pop(1)

0x1375: Return(); Pop(4)

0x1376: @ rand(Stack[-2])
0x1377: Pop(0)
0x1378: PushEmpty(float)
0x1379: Call2 0x139c

0x137a: Pop(0)
0x137b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x137c: IF (Stack[-1] == 0) GOTO 0x1389; Pop(1)

0x137d: @ irand(Stack[-1], Stack[-2])
0x137e: Pop(0)
0x137f: Push((int) 1)
0x1380: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1381: Push("attack")
0x1382: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1383: @ Speak(Stack[-1])
0x1384: Pop(1)
0x1385: PushEmpty(int)
0x1386: Call2 0x139a

0x1387: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x1388: Pop(1)
0x1389: Return(); Pop(4)

0x138a: PushEmpty(object)
0x138b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x138c: Call2 0x1765

0x138d: Pop(1)
0x138e: Return(); Pop(0)

0x138f: Stack[-1] = (int) 0
0x1390: Return(); Pop(0)

0x1391: PushEmpty(string)
0x1392: Stack[-1] = "attack_stay"
0x1393: Call2 0x16ca

0x1394: Pop(1)
0x1395: Return(); Pop(0)

0x1396: PushEmpty()
0x1397: Return(); Pop(0)

0x1398: Stack[-1] = (bool) 1
0x1399: Return(); Pop(0)

0x139a: Stack[-1] = (int) 1
0x139b: Return(); Pop(0)

0x139c: Stack[-1] = (float) 0.5
0x139d: Return(); Pop(0)

0x139e: PushEmpty()
0x139f: Call2 0x13e4

0x13a0: Pop(0)
0x13a1: PushEmpty()
0x13a2: Call2 0x1af7

0x13a3: Pop(0)
0x13a4: Return(); Pop(0)

0x13a5: PushEmpty(bool, bool, bool, bool)
0x13a6: PushEmpty(object)
0x13a7: Stack[-1] = Stack[-10]
0x13a8: Call2 0x1765

0x13a9: Pop(1)
0x13aa: Push((int) 1)
0x13ab: Push((int) 5)
0x13ac: @ SetTimer(Stack[-2], Stack[-1])
0x13ad: Pop(2)
0x13ae: @ CanSee(Stack[-2], Stack[-9])
0x13af: Pop(0)
0x13b0: Push(Stack[-2])
0x13b1: IF (Stack[-1] == 0) GOTO 0x13b8; Pop(1)

0x13b2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x13b3: PushEmpty(object)
0x13b4: Stack[-1] = Stack[-10]
0x13b5: Call2 0x169e

0x13b6: Pop(1)
0x13b7: GOTO 0x13b9

0x13b8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x13b9: PushEmpty(bool, object)
0x13ba: Stack[-1] = Stack[-11]
0x13bb: Call2 0x14c2

0x13bc: Pop(1)
0x13bd: IF (Stack[-1] == 0) GOTO 0x13c3; Pop(1)

0x13be: PushEmpty(object)
0x13bf: Call2 0x16f3

0x13c0: Pop(0)
0x13c1: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x13c2: Pop(1)
0x13c3: PushEmpty(bool, object, float, float, bool, bool)
0x13c4: Stack[-5] = Stack[-15]
0x13c5: Stack[-4] = Stack[-14]
0x13c6: Stack[-3] = Stack[-13]
0x13c7: Stack[-2] = Stack[-12]
0x13c8: Stack[-1] = Stack[-11]
0x13c9: Call2 0x140e

0x13ca: Stack[-7] = Stack[-6]
0x13cb: Pop(6)
0x13cc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x13cd: IF (Stack[-1] == 0) GOTO 0x13d1; Pop(1)

0x13ce: Push("head")
0x13cf: @ UnlookAsync(Stack[-1])
0x13d0: Pop(1)
0x13d1: Push((int) 1)
0x13d2: @ KillTimer(Stack[-1])
0x13d3: Pop(1)
0x13d4: Stack[-10] = Stack[-1]
0x13d5: Return(); Pop(4)

0x13d6: PushEmpty()
0x13d7: Push((int) 1)
0x13d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13d9: IF (Stack[-1] == 0) GOTO 0x13df; Pop(1)

0x13da: PushEmpty(object)
0x13db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13dc: Call2 0x1765

0x13dd: Pop(1)
0x13de: GOTO 0x13e3

0x13df: PushEmpty(int)
0x13e0: Stack[-1] = Stack[-2]
0x13e1: Call2 0x1474

0x13e2: Pop(1)
0x13e3: Return(); Pop(0)

0x13e4: Push((int) 1)
0x13e5: @ KillTimer(Stack[-1])
0x13e6: Pop(1)
0x13e7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x13e8: IF (Stack[-1] == 0) GOTO 0x13ed; Pop(1)

0x13e9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x13ea: Push("head")
0x13eb: @ UnlookAsync(Stack[-1])
0x13ec: Pop(1)
0x13ed: PushEmpty()
0x13ee: Call2 0x148a

0x13ef: Pop(0)
0x13f0: Return(); Pop(0)

0x13f1: PushEmpty()
0x13f2: PushEmpty(bool)
0x13f3: Stack[-1] = (bool) 0
0x13f4: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x13f5: IF (Stack[-1] == 0) GOTO 0x13f9; Pop(1)

0x13f6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x13f7: IF (Stack[-1] == 0) GOTO 0x13f9; Pop(1)

0x13f8: Stack[-1] = (bool) 1
0x13f9: IF (Stack[-1] == 0) GOTO 0x13ff; Pop(1)

0x13fa: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x13fb: PushEmpty(object)
0x13fc: Stack[-1] = Stack[-2]
0x13fd: Call2 0x169e

0x13fe: Pop(1)
0x13ff: Return(); Pop(0)

0x1400: PushEmpty()
0x1401: PushEmpty(bool)
0x1402: Stack[-1] = (bool) 0
0x1403: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x1404: IF (Stack[-1] == 0) GOTO 0x1408; Pop(1)

0x1405: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1406: IF (Stack[-1] == 0) GOTO 0x1408; Pop(1)

0x1407: Stack[-1] = (bool) 1
0x1408: IF (Stack[-1] == 0) GOTO 0x140d; Pop(1)

0x1409: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x140a: Push("head")
0x140b: @ UnlookAsync(Stack[-1])
0x140c: Pop(1)
0x140d: Return(); Pop(0)

0x140e: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x140f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1410: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x1411: Stack[-7] = Stack[-17]
0x1412: PushEmpty(bool, object)
0x1413: Stack[-1] = Stack[-23]
0x1414: Call2 0x149a

0x1415: Pop(1)
0x1416: Pop(1); Push((bool) Stack[-1] == 0)
0x1417: IF (Stack[-1] == 0) GOTO 0x141a; Pop(1)

0x1418: Stack[-22] = (bool) 0
0x1419: Return(); Pop(16)

0x141a: @@ GetPosition(Stack[-5])
0x141b: Pop(0)
0x141c: @ GetPosition(Stack[-4])
0x141d: Pop(0)
0x141e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x141f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1420: PushEmpty(bool)
0x1421: Stack[-1] = (bool) 0
0x1422: Push((int) 0)
0x1423: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x1424: IF (Stack[-1] == 0) GOTO 0x1429; Pop(1)

0x1425: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1426: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1427: IF (Stack[-1] == 0) GOTO 0x1429; Pop(1)

0x1428: Stack[-1] = (bool) 1
0x1429: IF (Stack[-1] == 0) GOTO 0x142e; Pop(1)

0x142a: @ Stop()
0x142b: Pop(0)
0x142c: Stack[-22] = (bool) 0
0x142d: Return(); Pop(16)

0x142e: Pop(0); Push(Stack[-20] * Stack[-20]);
0x142f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1430: IF (Stack[-1] == 0) GOTO 0x146c; Pop(1)

0x1431: @@ GetPFPosition(Stack[-5])
0x1432: Pop(0)
0x1433: @ FindPathTo(Stack[-1], Stack[-5])
0x1434: Pop(0)
0x1435: Pop(0); Push(( Stack[-1] != 0 )
0x1436: IF (Stack[-1] == 0) GOTO 0x1439; Pop(1)

0x1437: Stack[-6] = Stack[-1]
0x1438: Stack[-1] = 0
0x1439: Pop(0); Push(( Stack[-6] != 0 )
0x143a: IF (Stack[-1] == 0) GOTO 0x145a; Pop(1)

0x143b: Push(Stack[-7])
0x143c: IF (Stack[-1] == 0) GOTO 0x1443; Pop(1)

0x143d: Stack[-7] = (bool) 0
0x143e: @ RotatePath(Stack[-6], Stack[-8])
0x143f: Pop(0)
0x1440: Pop(0); Push((bool) Stack[-8] == 0)
0x1441: IF (Stack[-1] == 0) GOTO 0x1443; Pop(1)

0x1442: GOTO 0x1472

0x1443: Push((int) 0)
0x1444: Push((float)0.3)
0x1445: @ SetTimer(Stack[-2], Stack[-1])
0x1446: Pop(2)
0x1447: PushEmpty(string)
0x1448: Call2 0x14a1

0x1449: Pop(0)
0x144a: PushEmpty(string)
0x144b: Call2 0x14a3

0x144c: Pop(0)
0x144d: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x144e: Pop(2)
0x144f: Pop(0); Push((bool) Stack[-8] == 0)
0x1450: IF (Stack[-1] == 0) GOTO 0x1458; Pop(1)

0x1451: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1452: IF (Stack[-1] == 0) GOTO 0x1456; Pop(1)

0x1453: Stack[-6] = 0
0x1454: GOTO 0x1472

0x1455: GOTO 0x1457

0x1456: GOTO 0x1471

0x1457: GOTO 0x1459

0x1458: Stack[-6] = 0
0x1459: GOTO 0x146a

0x145a: Push((int) 0)
0x145b: @ KillTimer(Stack[-1])
0x145c: Pop(1)
0x145d: Push((float)0.5)
0x145e: @ Sleep(Stack[-1], Stack[-9])
0x145f: Pop(1)
0x1460: Pop(0); Push((bool) Stack[-8] == 0)
0x1461: IF (Stack[-1] == 0) GOTO 0x1466; Pop(1)

0x1462: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1463: IF (Stack[-1] == 0) GOTO 0x1466; Pop(1)

0x1464: Stack[-6] = 0
0x1465: GOTO 0x1472

0x1466: Push((int) 0)
0x1467: Push((float)0.3)
0x1468: @ SetTimer(Stack[-2], Stack[-1])
0x1469: Pop(2)
0x146a: Stack[-1] = 0
0x146b: GOTO 0x1470

0x146c: Push((int) 0)
0x146d: @ KillTimer(Stack[-1])
0x146e: Pop(1)
0x146f: GOTO 0x1472

0x1470: Stack[-6] = 0
0x1471: GOTO 0x1412

0x1472: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1473: Return(); Pop(16)

0x1474: PushEmpty()
0x1475: Push((int) 0)
0x1476: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1477: IF (Stack[-1] == 0) GOTO 0x1479; Pop(1)

0x1478: Return(); Pop(0)

0x1479: PushEmpty(bool, object)
0x147a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x147b: Call2 0x149a

0x147c: Pop(1)
0x147d: Pop(1); Push((bool) Stack[-1] == 0)
0x147e: IF (Stack[-1] == 0) GOTO 0x1480; Pop(1)

0x147f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1480: Push((int) 0)
0x1481: @ KillTimer(Stack[-1])
0x1482: Pop(1)
0x1483: @ Stop()
0x1484: Pop(0)
0x1485: Return(); Pop(0)

0x1486: PushEmpty()
0x1487: @ RequestClearPath(Stack[-1])
0x1488: Pop(0)
0x1489: Return(); Pop(0)

0x148a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x148b: Push((int) 0)
0x148c: @ KillTimer(Stack[-1])
0x148d: Pop(1)
0x148e: @ Stop()
0x148f: Pop(0)
0x1490: Return(); Pop(0)

0x1491: PushEmpty()
0x1492: PushEmpty()
0x1493: Call2 0x13e4

0x1494: Pop(0)
0x1495: PushEmpty(object)
0x1496: Stack[-1] = Stack[-2]
0x1497: Call2 0x199c

0x1498: Pop(1)
0x1499: Return(); Pop(0)

0x149a: PushEmpty()
0x149b: PushEmpty(bool, object)
0x149c: Stack[-1] = Stack[-3]
0x149d: Call2 0x1545

0x149e: Stack[-4] = Stack[-2]
0x149f: Pop(2)
0x14a0: Return(); Pop(0)

0x14a1: Stack[-1] = "walk"
0x14a2: Return(); Pop(0)

0x14a3: Stack[-1] = "run"
0x14a4: Return(); Pop(0)

0x14a5: PushEmpty()
0x14a6: Push((int) 2)
0x14a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14a8: IF (Stack[-1] == 0) GOTO 0x14ac; Pop(1)

0x14a9: Stack[-2] = "fire"
0x14aa: Return(); Pop(0)

0x14ab: GOTO 0x14b1

0x14ac: Push((int) 1)
0x14ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14ae: IF (Stack[-1] == 0) GOTO 0x14b1; Pop(1)

0x14af: Stack[-2] = "bullet"
0x14b0: Return(); Pop(0)

0x14b1: Stack[-2] = "phys"
0x14b2: Return(); Pop(0)

0x14b3: PushEmpty(cvector, cvector, cvector, cvector)
0x14b4: @ GetPosition(Stack[-2])
0x14b5: Pop(0)
0x14b6: @@ GetPosition(Stack[-1])
0x14b7: Pop(0)
0x14b8: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x14b9: Return(); Pop(4)

0x14ba: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x14bb: @ GetPosition(Stack[-3])
0x14bc: Pop(0)
0x14bd: @@ GetPosition(Stack[-2])
0x14be: Pop(0)
0x14bf: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x14c0: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x14c1: Return(); Pop(6)

0x14c2: PushEmpty(bool, bool)
0x14c3: @ IsPlayerActor(Stack[-3], Stack[-1])
0x14c4: Pop(0)
0x14c5: Stack[-4] = Stack[-1]
0x14c6: Return(); Pop(2)

0x14c7: PushEmpty(bool, bool)
0x14c8: Push("HasProperty")
0x14c9: Push((int) 2)
0x14ca: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x14cb: Pop(1); Push((bool) Stack[-1] == 0)
0x14cc: IF (Stack[-1] == 0) GOTO 0x14cf; Pop(1)

0x14cd: Stack[-5] = (bool) 0
0x14ce: Return(); Pop(2)

0x14cf: @@ HasProperty(Stack[-3], Stack[-1])
0x14d0: Pop(0)
0x14d1: Stack[-5] = Stack[-1]
0x14d2: Return(); Pop(2)

0x14d3: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x14d4: PushEmpty(bool, object, string)
0x14d5: Stack[-2] = Stack[-18]
0x14d6: Stack[-1] = "health"
0x14d7: Call2 0x14c7

0x14d8: Pop(2)
0x14d9: Pop(1); Push((bool) Stack[-1] == 0)
0x14da: IF (Stack[-1] == 0) GOTO 0x14dd; Pop(1)

0x14db: Stack[-16] = (float) 0.0
0x14dc: Return(); Pop(12)

0x14dd: PushEmpty(bool, object, string)
0x14de: Stack[-2] = Stack[-18]
0x14df: Stack[-1] = "armor"
0x14e0: Call2 0x14c7

0x14e1: Pop(2)
0x14e2: Pop(1); Push((bool) Stack[-1] == 0)
0x14e3: IF (Stack[-1] == 0) GOTO 0x14e6; Pop(1)

0x14e4: Stack[-6] = (int) 0
0x14e5: GOTO 0x14e9

0x14e6: Push("armor")
0x14e7: @@ GetProperty(Stack[-1], Stack[-7])
0x14e8: Pop(1)
0x14e9: Push("armor_")
0x14ea: PushEmpty(string, int)
0x14eb: Stack[-1] = Stack[-16]
0x14ec: Call2 0x14a5

0x14ed: Pop(1)
0x14ee: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x14ef: PushEmpty(bool, object, string)
0x14f0: Stack[-2] = Stack[-18]
0x14f1: Stack[-1] = Stack[-8]
0x14f2: Call2 0x14c7

0x14f3: Pop(2)
0x14f4: Pop(1); Push((bool) Stack[-1] == 0)
0x14f5: IF (Stack[-1] == 0) GOTO 0x14f8; Pop(1)

0x14f6: Stack[-4] = (int) 0
0x14f7: GOTO 0x14fa

0x14f8: @@ GetProperty(Stack[-5], Stack[-4])
0x14f9: Pop(0)
0x14fa: PushEmpty(float, float, float)
0x14fb: Pop(0); Push(Stack[-9] + Stack[-7]);
0x14fc: Push((float)100.0)
0x14fd: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x14fe: Stack[-1] = (int) 1
0x14ff: Call2 0x1703

0x1500: Stack[-6] = Stack[-3]
0x1501: Pop(3)
0x1502: Push("health")
0x1503: @@ GetProperty(Stack[-1], Stack[-3])
0x1504: Pop(1)
0x1505: Push((int) 1)
0x1506: Pop(1); Push(Stack[-1] - Stack[-4]);
0x1507: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x1508: Push("health")
0x1509: PushEmpty(float, float, float, float)
0x150a: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x150b: Stack[-2] = (int) 0
0x150c: Stack[-1] = (int) 1
0x150d: Call2 0x170a

0x150e: Pop(3)
0x150f: @@ SetProperty(Stack[-2], Stack[-1])
0x1510: Pop(2)
0x1511: PushEmpty(bool, object)
0x1512: Stack[-1] = Stack[-17]
0x1513: Call2 0x14c2

0x1514: Pop(1)
0x1515: IF (Stack[-1] == 0) GOTO 0x151a; Pop(1)

0x1516: PushEmpty(float)
0x1517: Stack[-1] = -Stack[-2]; Pop(0);
0x1518: Call2 0x1743

0x1519: Pop(1)
0x151a: Stack[-16] = Stack[-1]
0x151b: Return(); Pop(12)

0x151c: PushEmpty(bool, bool)
0x151d: @@ IsDead(Stack[-1])
0x151e: Pop(0)
0x151f: Stack[-4] = Stack[-1]
0x1520: Return(); Pop(2)

0x1521: PushEmpty(object, object, object, object)
0x1522: Pop(0); Push((bool) Stack[-5] == 0)
0x1523: IF (Stack[-1] == 0) GOTO 0x1526; Pop(1)

0x1524: Stack[-6] = (bool) 0
0x1525: Return(); Pop(4)

0x1526: PushEmpty(bool)
0x1527: Stack[-1] = (bool) 0
0x1528: Push("IsDead")
0x1529: Push((int) 1)
0x152a: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x152b: IF (Stack[-1] == 0) GOTO 0x1532; Pop(1)

0x152c: PushEmpty(bool, object)
0x152d: Stack[-1] = Stack[-8]
0x152e: Call2 0x151c

0x152f: Pop(1)
0x1530: IF (Stack[-1] == 0) GOTO 0x1532; Pop(1)

0x1531: Stack[-1] = (bool) 1
0x1532: IF (Stack[-1] == 0) GOTO 0x1535; Pop(1)

0x1533: Stack[-6] = (bool) 0
0x1534: Return(); Pop(4)

0x1535: @ GetScene(Stack[-2])
0x1536: Pop(0)
0x1537: Pop(0); Push((bool) Stack[-2] == 0)
0x1538: IF (Stack[-1] == 0) GOTO 0x153b; Pop(1)

0x1539: Stack[-6] = (bool) 0
0x153a: Return(); Pop(4)

0x153b: @@ GetScene(Stack[-1])
0x153c: Pop(0)
0x153d: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x153e: IF (Stack[-1] == 0) GOTO 0x1541; Pop(1)

0x153f: Stack[-6] = (bool) 0
0x1540: Return(); Pop(4)

0x1541: Stack[-6] = (bool) 1
0x1542: Return(); Pop(4)

0x1543: Stack[-1] = 0
0x1544: Stack[-2] = 0
0x1545: PushEmpty(int, int)
0x1546: PushEmpty(bool, object)
0x1547: Stack[-1] = Stack[-5]
0x1548: Call2 0x1521

0x1549: Pop(1)
0x154a: Pop(1); Push((bool) Stack[-1] == 0)
0x154b: IF (Stack[-1] == 0) GOTO 0x154e; Pop(1)

0x154c: Stack[-4] = (bool) 0
0x154d: Return(); Pop(2)

0x154e: PushEmpty(bool, object, string)
0x154f: Stack[-2] = Stack[-6]
0x1550: Stack[-1] = "noaccess"
0x1551: Call2 0x14c7

0x1552: Pop(2)
0x1553: Pop(1); Push((bool) Stack[-1] == 0)
0x1554: IF (Stack[-1] == 0) GOTO 0x1557; Pop(1)

0x1555: Stack[-4] = (bool) 1
0x1556: Return(); Pop(2)

0x1557: Push("noaccess")
0x1558: @@ GetProperty(Stack[-1], Stack[-2])
0x1559: Pop(1)
0x155a: Push((int) 0)
0x155b: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x155c: Return(); Pop(2)

0x155d: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x155e: Pop(0); Push((bool) Stack[-15] == 0)
0x155f: IF (Stack[-1] == 0) GOTO 0x1561; Pop(1)

0x1560: Return(); Pop(14)

0x1561: @ IsDead(Stack[-7])
0x1562: Pop(0)
0x1563: Push(Stack[-7])
0x1564: IF (Stack[-1] == 0) GOTO 0x1566; Pop(1)

0x1565: Return(); Pop(14)

0x1566: @ GetSecondaryAnimationType(Stack[-6])
0x1567: Pop(0)
0x1568: Push((int) 0)
0x1569: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x156a: IF (Stack[-1] == 0) GOTO 0x156c; Pop(1)

0x156b: Return(); Pop(14)

0x156c: @@ GetPosition(Stack[-5])
0x156d: Pop(0)
0x156e: @ GetPosition(Stack[-4])
0x156f: Pop(0)
0x1570: @ GetDirection(Stack[-3])
0x1571: Pop(0)
0x1572: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x1573: Push(CvectorIndex(Stack[-2], 0))
0x1574: Push(CvectorIndex(Stack[-4], 0))
0x1575: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1576: Push(CvectorIndex(Stack[-3], 2))
0x1577: Push(CvectorIndex(Stack[-5], 2))
0x1578: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1579: Pop(2); Push(Stack[-2] + Stack[-1]);
0x157a: Push((int) 0)
0x157b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x157c: IF (Stack[-1] == 0) GOTO 0x157f; Pop(1)

0x157d: Stack[-1] = "fhit"
0x157e: GOTO 0x1580

0x157f: Stack[-1] = "bhit"
0x1580: Push("hit_react")
0x1581: Push("1")
0x1582: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1583: Push("2")
0x1584: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1585: Push((int) -10)
0x1586: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1587: Pop(4)
0x1588: Return(); Pop(14)

0x1589: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x158a: PushEmpty(bool)
0x158b: Stack[-1] = (bool) 0
0x158c: PushEmpty(bool)
0x158d: Stack[-1] = (bool) 0
0x158e: Push(Stack[-23])
0x158f: IF (Stack[-1] == 0) GOTO 0x1594; Pop(1)

0x1590: Push((int) 4)
0x1591: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x1592: IF (Stack[-1] == 0) GOTO 0x1594; Pop(1)

0x1593: Stack[-1] = (bool) 1
0x1594: IF (Stack[-1] == 0) GOTO 0x1599; Pop(1)

0x1595: Push((int) 5)
0x1596: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x1597: IF (Stack[-1] == 0) GOTO 0x1599; Pop(1)

0x1598: Stack[-1] = (bool) 1
0x1599: IF (Stack[-1] == 0) GOTO 0x15c8; Pop(1)

0x159a: PushEmpty(cvector, cvector)
0x159b: PushEmpty(cvector, object)
0x159c: Stack[-1] = Stack[-25]
0x159d: Call2 0x14b3

0x159e: Stack[-3] = Stack[-2]
0x159f: Pop(2)
0x15a0: Call2 0x16f9

0x15a1: Stack[-11] = Stack[-2]
0x15a2: Pop(2)
0x15a3: @ CreateVectorVector(Stack[-8])
0x15a4: Pop(0)
0x15a5: Stack[-7] = (int) 1
0x15a6: Push("hit")
0x15a7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x15a8: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x15a9: Pop(1)
0x15aa: Pop(0); Push((bool) Stack[-6] == 0)
0x15ab: IF (Stack[-1] == 0) GOTO 0x15ad; Pop(1)

0x15ac: GOTO 0x15b6

0x15ad: Pop(0); Push(Stack[-4] | Stack[-9]);
0x15ae: Push((float)0.70711)
0x15af: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x15b0: IF (Stack[-1] == 0) GOTO 0x15b3; Pop(1)

0x15b1: @@ add(Stack[-5])
0x15b2: Pop(0)
0x15b3: Push((int) 1)
0x15b4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x15b5: GOTO 0x15a6

0x15b6: @@ size(Stack[-3])
0x15b7: Pop(0)
0x15b8: Push(Stack[-3])
0x15b9: IF (Stack[-1] == 0) GOTO 0x15c7; Pop(1)

0x15ba: @ irand(Stack[-2], Stack[-3])
0x15bb: Pop(0)
0x15bc: @@ get(Stack[-1], Stack[-2])
0x15bd: Pop(0)
0x15be: PushEmpty(object, int, float, cvector, cvector)
0x15bf: Stack[-5] = Stack[-26]
0x15c0: Stack[-4] = Stack[-25]
0x15c1: Stack[-3] = Stack[-24]
0x15c2: Stack[-2] = Stack[-6]
0x15c3: Stack[-1] = -Stack[-14]; Pop(0);
0x15c4: Call2 0x15cd

0x15c5: Pop(5)
0x15c6: Return(); Pop(18)

0x15c7: Stack[-8] = 0
0x15c8: PushEmpty(object)
0x15c9: Stack[-1] = Stack[-22]
0x15ca: Call2 0x155d

0x15cb: Pop(1)
0x15cc: Return(); Pop(18)

0x15cd: PushEmpty(object, object, object, object)
0x15ce: @ GetScene(Stack[-2])
0x15cf: Pop(0)
0x15d0: Push("scripted")
0x15d1: Push("blood_dir.xml")
0x15d2: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x15d3: Pop(2)
0x15d4: PushEmpty(object)
0x15d5: Stack[-1] = Stack[-10]
0x15d6: Call2 0x155d

0x15d7: Pop(1)
0x15d8: Return(); Pop(4)

0x15d9: Stack[-1] = 0
0x15da: Stack[-2] = 0
0x15db: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x15dc: @@ GetPosition(Stack[-3])
0x15dd: Pop(0)
0x15de: @ GetPosition(Stack[-2])
0x15df: Pop(0)
0x15e0: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x15e1: Push(CvectorIndex(Stack[-1], 0))
0x15e2: Push(CvectorIndex(Stack[-2], 2))
0x15e3: @ RotateAsync(Stack[-2], Stack[-1])
0x15e4: Pop(2)
0x15e5: Return(); Pop(6)

0x15e6: PushEmpty(bool, bool)
0x15e7: @ IsLoaded(Stack[-1])
0x15e8: Pop(0)
0x15e9: Stack[-3] = Stack[-1]
0x15ea: Return(); Pop(2)

0x15eb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x15ec: @@ GetPosition(Stack[-8])
0x15ed: Pop(0)
0x15ee: @@ GetEyesHeight(Stack[-9])
0x15ef: Pop(0)
0x15f0: Push(CvectorIndex(Stack[-8], 1))
0x15f1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x15f2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x15f3: @ GetPosition(Stack[-7])
0x15f4: Pop(0)
0x15f5: @ GetEyesHeight(Stack[-9])
0x15f6: Pop(0)
0x15f7: Push(CvectorIndex(Stack[-7], 1))
0x15f8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x15f9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x15fa: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x15fb: Push(CvectorIndex(Stack[-6], 1))
0x15fc: Stack[-1] = (int) 0
0x15fd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x15fe: Pop(0); Push(Stack[-6] | Stack[-6]);
0x15ff: Pop(1); Push(Sqrt(Stack[-1]))
0x1600: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1601: Stack[-5] = -Stack[-6]; Pop(0);
0x1602: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1603: PushEmpty(cvector, cvector)
0x1604: Push(CVector(0.0, 1.0, 0.0))
0x1605: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1606: Call2 0x16f9

0x1607: Pop(1)
0x1608: Push((int) 25)
0x1609: Pop(2); Push(Stack[-2] * Stack[-1]);
0x160a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x160b: Push(CVector(0.0, 10.0, 0.0))
0x160c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x160d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x160e: @ IsOverrideActive(Stack[-2])
0x160f: Pop(0)
0x1610: Push(Stack[-2])
0x1611: IF (Stack[-1] == 0) GOTO 0x1614; Pop(1)

0x1612: Stack[-21] = (bool) 0
0x1613: Return(); Pop(18)

0x1614: @ StopWorld()
0x1615: Pop(0)
0x1616: Push((bool) 1)
0x1617: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1618: Pop(1)
0x1619: Push(CvectorIndex(Stack[-4], 0))
0x161a: Push(CvectorIndex(Stack[-5], 2))
0x161b: @ Rotate(Stack[-2], Stack[-1])
0x161c: Pop(2)
0x161d: PushEmpty(bool)
0x161e: Call2 0x1b24

0x161f: Pop(0)
0x1620: IF (Stack[-1] == 0) GOTO 0x1622; Pop(1)

0x1621: GOTO 0x162a

0x1622: Push("head")
0x1623: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1624: Pop(1)
0x1625: Push(Stack[-1])
0x1626: IF (Stack[-1] == 0) GOTO 0x162a; Pop(1)

0x1627: Push("head")
0x1628: @ LookAsyncCamera(Stack[-1])
0x1629: Pop(1)
0x162a: @ CameraWaitForPlayFinish()
0x162b: Pop(0)
0x162c: @ ResumeWorld()
0x162d: Pop(0)
0x162e: Stack[-21] = (bool) 1
0x162f: Return(); Pop(18)

0x1630: PushEmpty(bool, bool)
0x1631: Push((bool) 1)
0x1632: @ CameraSwitchToNormal(Stack[-1])
0x1633: Pop(1)
0x1634: PushEmpty(bool)
0x1635: Call2 0x1b24

0x1636: Pop(0)
0x1637: IF (Stack[-1] == 0) GOTO 0x1639; Pop(1)

0x1638: GOTO 0x1641

0x1639: Push("head")
0x163a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x163b: Pop(1)
0x163c: Push(Stack[-1])
0x163d: IF (Stack[-1] == 0) GOTO 0x1641; Pop(1)

0x163e: Push("head")
0x163f: @ UnlookAsync(Stack[-1])
0x1640: Pop(1)
0x1641: Return(); Pop(2)

0x1642: PushEmpty()
0x1643: PushEmpty(bool, object, float)
0x1644: Stack[-2] = Stack[-4]
0x1645: Stack[-1] = (int) 70
0x1646: Call2 0x164a

0x1647: Stack[-5] = Stack[-3]
0x1648: Pop(3)
0x1649: Return(); Pop(0)

0x164a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x164b: @@ GetPosition(Stack[-7])
0x164c: Pop(0)
0x164d: @@ GetEyesHeight(Stack[-8])
0x164e: Pop(0)
0x164f: Push(CvectorIndex(Stack[-7], 1))
0x1650: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1651: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1652: @ GetPosition(Stack[-6])
0x1653: Pop(0)
0x1654: @ GetEyesHeight(Stack[-8])
0x1655: Pop(0)
0x1656: Push(CvectorIndex(Stack[-6], 1))
0x1657: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1658: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1659: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x165a: Push(CvectorIndex(Stack[-5], 1))
0x165b: Stack[-1] = (int) 0
0x165c: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x165d: Pop(0); Push(Stack[-5] | Stack[-5]);
0x165e: Pop(1); Push(Sqrt(Stack[-1]))
0x165f: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1660: Stack[-4] = -Stack[-5]; Pop(0);
0x1661: Pop(0); Push(Stack[-5] * Stack[-17]);
0x1662: Push(CVector(0.0, 10.0, 0.0))
0x1663: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1664: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1665: @ IsOverrideActive(Stack[-1])
0x1666: Pop(0)
0x1667: Push(Stack[-1])
0x1668: IF (Stack[-1] == 0) GOTO 0x166b; Pop(1)

0x1669: Stack[-19] = (bool) 0
0x166a: Return(); Pop(16)

0x166b: @ StopWorld()
0x166c: Pop(0)
0x166d: Push((bool) 1)
0x166e: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0x166f: Pop(1)
0x1670: Push(CvectorIndex(Stack[-3], 0))
0x1671: Push(CvectorIndex(Stack[-4], 2))
0x1672: @ Rotate(Stack[-2], Stack[-1])
0x1673: Pop(2)
0x1674: @ CameraWaitForPlayFinish()
0x1675: Pop(0)
0x1676: @ ResumeWorld()
0x1677: Pop(0)
0x1678: Stack[-19] = (bool) 1
0x1679: Return(); Pop(16)

0x167a: PushEmpty()
0x167b: Push((bool) 1)
0x167c: @ CameraSwitchToNormal(Stack[-1])
0x167d: Pop(1)
0x167e: Return(); Pop(0)

0x167f: PushEmpty(bool, float, float, bool, float, float)
0x1680: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1681: Pop(0)
0x1682: Push(Stack[-3])
0x1683: IF (Stack[-1] == 0) GOTO 0x168a; Pop(1)

0x1684: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1685: Pop(0)
0x1686: Push((bool) 0)
0x1687: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1688: Pop(1)
0x1689: GOTO 0x168e

0x168a: Push("Can't find lsh animation : ")
0x168b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x168c: @ Trace(Stack[-1])
0x168d: Pop(1)
0x168e: Return(); Pop(6)

0x168f: PushEmpty(bool, float, float, bool, float, float)
0x1690: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1691: Pop(0)
0x1692: Push(Stack[-3])
0x1693: IF (Stack[-1] == 0) GOTO 0x1699; Pop(1)

0x1694: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1695: Pop(0)
0x1696: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1697: Pop(0)
0x1698: GOTO 0x169d

0x1699: Push("Can't find lsh animation : ")
0x169a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x169b: @ Trace(Stack[-1])
0x169c: Pop(1)
0x169d: Return(); Pop(6)

0x169e: PushEmpty(float, cvector, float, cvector)
0x169f: @@ GetEyesHeight(Stack[-2])
0x16a0: Pop(0)
0x16a1: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x16a2: Push(CvectorIndex(Stack[-1], 1))
0x16a3: Stack[-1] = Stack[-3]
0x16a4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x16a5: Push("head")
0x16a6: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x16a7: Pop(1)
0x16a8: Return(); Pop(4)

0x16a9: PushEmpty(bool)
0x16aa: Call2 0x1b24

0x16ab: Pop(0)
0x16ac: IF (Stack[-1] == 0) GOTO 0x16af; Pop(1)

0x16ad: @ lshStopSpeech()
0x16ae: Pop(0)
0x16af: Return(); Pop(0)

0x16b0: PushEmpty(bool, bool)
0x16b1: PushEmpty(bool, int, int)
0x16b2: Stack[-2] = Stack[-7]
0x16b3: Stack[-1] = Stack[-6]
0x16b4: Call2 0x1715

0x16b5: Pop(2)
0x16b6: IF (Stack[-1] == 0) GOTO 0x16ba; Pop(1)

0x16b7: Push((int) 0)
0x16b8: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x16b9: Pop(1)
0x16ba: Return(); Pop(2)

0x16bb: PushEmpty(int, bool, int, bool)
0x16bc: PushEmpty(bool, int, int)
0x16bd: Stack[-2] = Stack[-10]
0x16be: Stack[-1] = Stack[-9]
0x16bf: Call2 0x1715

0x16c0: Pop(2)
0x16c1: IF (Stack[-1] == 0) GOTO 0x16c9; Pop(1)

0x16c2: @ irand(Stack[-2], Stack[-5])
0x16c3: Pop(0)
0x16c4: Push((int) 0)
0x16c5: Push((int) 1)
0x16c6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x16c7: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x16c8: Pop(2)
0x16c9: Return(); Pop(4)

0x16ca: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x16cb: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x16cc: Pop(0)
0x16cd: Pop(0); Push((bool) Stack[-8] == 0)
0x16ce: IF (Stack[-1] == 0) GOTO 0x16e3; Pop(1)

0x16cf: Stack[-7] = (int) 0
0x16d0: Push((int) 1)
0x16d1: Pop(1); Push(Stack[-8] + Stack[-1]);
0x16d2: Pop(1); Push(Stack[-18] + Stack[-1]);
0x16d3: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x16d4: Pop(1)
0x16d5: Pop(0); Push((bool) Stack[-6] == 0)
0x16d6: IF (Stack[-1] == 0) GOTO 0x16d8; Pop(1)

0x16d7: GOTO 0x16db

0x16d8: Push((int) 1)
0x16d9: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x16da: GOTO 0x16d0

0x16db: Pop(0); Push((bool) Stack[-7] == 0)
0x16dc: IF (Stack[-1] == 0) GOTO 0x16de; Pop(1)

0x16dd: Return(); Pop(16)

0x16de: @ irand(Stack[-5], Stack[-7])
0x16df: Pop(0)
0x16e0: Push((int) 1)
0x16e1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x16e2: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x16e3: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x16e4: Pop(0)
0x16e5: Push(Stack[-4])
0x16e6: IF (Stack[-1] == 0) GOTO 0x16f2; Pop(1)

0x16e7: @ GetEyesHeight(Stack[-3])
0x16e8: Pop(0)
0x16e9: @ GetDirection(Stack[-2])
0x16ea: Pop(0)
0x16eb: Push((int) 50)
0x16ec: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x16ed: Push(CvectorIndex(Stack[-1], 1))
0x16ee: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x16ef: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x16f0: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x16f1: Pop(0)
0x16f2: Return(); Pop(16)

0x16f3: PushEmpty(object, object)
0x16f4: @ self(Stack[-1])
0x16f5: Pop(0)
0x16f6: Stack[-3] = Stack[-1]
0x16f7: Return(); Pop(2)

0x16f8: Stack[-1] = 0
0x16f9: PushEmpty(float, float)
0x16fa: Pop(0); Push(Stack[-3] | Stack[-3]);
0x16fb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x16fc: Push((float)0.0)
0x16fd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x16fe: IF (Stack[-1] == 0) GOTO 0x1701; Pop(1)

0x16ff: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1700: Return(); Pop(2)

0x1701: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1702: Return(); Pop(2)

0x1703: PushEmpty()
0x1704: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x1705: IF (Stack[-1] == 0) GOTO 0x1708; Pop(1)

0x1706: Stack[-3] = Stack[-2]
0x1707: GOTO 0x1709

0x1708: Stack[-3] = Stack[-1]
0x1709: Return(); Pop(0)

0x170a: PushEmpty()
0x170b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x170c: IF (Stack[-1] == 0) GOTO 0x170f; Pop(1)

0x170d: Stack[-4] = Stack[-2]
0x170e: Return(); Pop(0)

0x170f: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x1710: IF (Stack[-1] == 0) GOTO 0x1713; Pop(1)

0x1711: Stack[-4] = Stack[-1]
0x1712: Return(); Pop(0)

0x1713: Stack[-4] = Stack[-3]
0x1714: Return(); Pop(0)

0x1715: PushEmpty(int, int)
0x1716: @ irand(Stack[-1], Stack[-3])
0x1717: Pop(0)
0x1718: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x1719: Return(); Pop(2)

0x171a: PushEmpty()
0x171b: Push(CvectorIndex(Stack[-2], 0))
0x171c: Push(CvectorIndex(Stack[-2], 0))
0x171d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x171e: Push(CvectorIndex(Stack[-3], 2))
0x171f: Push(CvectorIndex(Stack[-3], 2))
0x1720: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1721: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1722: Return(); Pop(0)

0x1723: PushEmpty()
0x1724: Push(CvectorIndex(Stack[-1], 0))
0x1725: Push(CvectorIndex(Stack[-2], 0))
0x1726: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1727: Push(CvectorIndex(Stack[-2], 2))
0x1728: Push(CvectorIndex(Stack[-3], 2))
0x1729: Pop(2); Push(Stack[-2] * Stack[-1]);
0x172a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x172b: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x172c: Return(); Pop(0)

0x172d: PushEmpty()
0x172e: PushEmpty(float, cvector, cvector)
0x172f: Stack[-2] = Stack[-5]
0x1730: Stack[-1] = Stack[-4]
0x1731: Call2 0x171a

0x1732: Pop(2)
0x1733: PushEmpty(float, cvector)
0x1734: Stack[-1] = Stack[-5]
0x1735: Call2 0x1723

0x1736: Pop(1)
0x1737: PushEmpty(float, cvector)
0x1738: Stack[-1] = Stack[-5]
0x1739: Call2 0x1723

0x173a: Pop(1)
0x173b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x173c: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x173d: Return(); Pop(0)

0x173e: PushEmpty(int, int)
0x173f: @ GetVariable(Stack[-3], Stack[-1])
0x1740: Pop(0)
0x1741: Stack[-4] = Stack[-1]
0x1742: Return(); Pop(2)

0x1743: PushEmpty(object, object)
0x1744: @ CreateFloatVector(Stack[-1])
0x1745: Pop(0)
0x1746: @@ add(Stack[-3])
0x1747: Pop(0)
0x1748: Push((int) 0)
0x1749: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x174a: IF (Stack[-1] == 0) GOTO 0x174f; Pop(1)

0x174b: Push((float)0.7)
0x174c: Push((int) 500)
0x174d: @ RumblePlay(Stack[-2], Stack[-1])
0x174e: Pop(2)
0x174f: Push((int) 15)
0x1750: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1751: Pop(1)
0x1752: Return(); Pop(2)

0x1753: Stack[-1] = 0
0x1754: PushEmpty(float, float)
0x1755: @ GetGameTime(Stack[-1])
0x1756: Pop(0)
0x1757: Push((int) 1)
0x1758: PushEmpty(int)
0x1759: Push((int) 24)
0x175a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x175b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x175c: Return(); Pop(2)

0x175d: PushEmpty(float, float)
0x175e: @ GetGameTime(Stack[-1])
0x175f: Pop(0)
0x1760: PushEmpty(int)
0x1761: Stack[-1] = Stack[-2]
0x1762: Push((int) 24)
0x1763: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x1764: Return(); Pop(2)

0x1765: PushEmpty(bool, bool)
0x1766: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1767: Pop(0)
0x1768: Push(Stack[-1])
0x1769: IF (Stack[-1] == 0) GOTO 0x176d; Pop(1)

0x176a: Push("attack")
0x176b: @ PlayGlobalMusic(Stack[-1])
0x176c: Pop(1)
0x176d: Return(); Pop(2)

0x176e: PushEmpty(object, object)
0x176f: @ GetScene(Stack[-1])
0x1770: Pop(0)
0x1771: Push("battle")
0x1772: PushEmpty(object)
0x1773: Call2 0x16f3

0x1774: Pop(0)
0x1775: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x1776: Pop(2)
0x1777: Return(); Pop(2)

0x1778: Stack[-1] = 0
0x1779: PushEmpty()
0x177a: Push((int) 1000)
0x177b: @@ SetReturnValue(Stack[-1])
0x177c: Pop(1)
0x177d: Return(); Pop(0)

0x177e: PushEmpty()
0x177f: PushEmpty(int, string)
0x1780: Stack[-1] = "branch"
0x1781: Call2 0x173e

0x1782: Pop(1)
0x1783: Push((int) 0)
0x1784: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1785: IF (Stack[-1] == 0) GOTO 0x1788; Pop(1)

0x1786: Stack[-2] = (bool) 1
0x1787: Return(); Pop(0)

0x1788: Stack[-2] = (bool) 0
0x1789: Return(); Pop(0)

0x178a: PushEmpty()
0x178b: PushEmpty(int, string)
0x178c: Stack[-1] = "branch"
0x178d: Call2 0x173e

0x178e: Pop(1)
0x178f: Push((int) 2)
0x1790: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1791: IF (Stack[-1] == 0) GOTO 0x1794; Pop(1)

0x1792: Stack[-2] = (bool) 1
0x1793: Return(); Pop(0)

0x1794: Stack[-2] = (bool) 0
0x1795: Return(); Pop(0)

0x1796: PushEmpty()
0x1797: PushEmpty(bool, object)
0x1798: Stack[-1] = Stack[-3]
0x1799: Call2 0x1822

0x179a: Pop(1)
0x179b: IF (Stack[-1] == 0) GOTO 0x179e; Pop(1)

0x179c: Stack[-2] = (bool) 1
0x179d: Return(); Pop(0)

0x179e: Stack[-2] = (bool) 0
0x179f: Return(); Pop(0)

0x17a0: PushEmpty()
0x17a1: PushEmpty(bool, object)
0x17a2: Stack[-1] = Stack[-3]
0x17a3: Call2 0x1829

0x17a4: Pop(1)
0x17a5: IF (Stack[-1] == 0) GOTO 0x17a8; Pop(1)

0x17a6: Stack[-2] = (bool) 1
0x17a7: Return(); Pop(0)

0x17a8: Stack[-2] = (bool) 0
0x17a9: Return(); Pop(0)

0x17aa: PushEmpty()
0x17ab: PushEmpty(bool, object)
0x17ac: Stack[-1] = Stack[-3]
0x17ad: Call2 0x1830

0x17ae: Pop(1)
0x17af: IF (Stack[-1] == 0) GOTO 0x17b2; Pop(1)

0x17b0: Stack[-2] = (bool) 1
0x17b1: Return(); Pop(0)

0x17b2: Stack[-2] = (bool) 0
0x17b3: Return(); Pop(0)

0x17b4: PushEmpty()
0x17b5: PushEmpty(bool, object)
0x17b6: Stack[-1] = Stack[-3]
0x17b7: Call2 0x1837

0x17b8: Pop(1)
0x17b9: IF (Stack[-1] == 0) GOTO 0x17bc; Pop(1)

0x17ba: Stack[-2] = (bool) 1
0x17bb: Return(); Pop(0)

0x17bc: Stack[-2] = (bool) 0
0x17bd: Return(); Pop(0)

0x17be: PushEmpty()
0x17bf: PushEmpty(bool, object)
0x17c0: Stack[-1] = Stack[-3]
0x17c1: Call2 0x183e

0x17c2: Pop(1)
0x17c3: IF (Stack[-1] == 0) GOTO 0x17c6; Pop(1)

0x17c4: Stack[-2] = (bool) 1
0x17c5: Return(); Pop(0)

0x17c6: Stack[-2] = (bool) 0
0x17c7: Return(); Pop(0)

0x17c8: PushEmpty()
0x17c9: PushEmpty(bool, object)
0x17ca: Stack[-1] = Stack[-3]
0x17cb: Call2 0x1845

0x17cc: Pop(1)
0x17cd: IF (Stack[-1] == 0) GOTO 0x17d0; Pop(1)

0x17ce: Stack[-2] = (bool) 1
0x17cf: Return(); Pop(0)

0x17d0: Stack[-2] = (bool) 0
0x17d1: Return(); Pop(0)

0x17d2: PushEmpty()
0x17d3: PushEmpty(bool, object)
0x17d4: Stack[-1] = Stack[-3]
0x17d5: Call2 0x184c

0x17d6: Pop(1)
0x17d7: IF (Stack[-1] == 0) GOTO 0x17da; Pop(1)

0x17d8: Stack[-2] = (bool) 1
0x17d9: Return(); Pop(0)

0x17da: Stack[-2] = (bool) 0
0x17db: Return(); Pop(0)

0x17dc: PushEmpty()
0x17dd: PushEmpty(bool, object)
0x17de: Stack[-1] = Stack[-3]
0x17df: Call2 0x1853

0x17e0: Pop(1)
0x17e1: IF (Stack[-1] == 0) GOTO 0x17e4; Pop(1)

0x17e2: Stack[-2] = (bool) 1
0x17e3: Return(); Pop(0)

0x17e4: Stack[-2] = (bool) 0
0x17e5: Return(); Pop(0)

0x17e6: PushEmpty()
0x17e7: PushEmpty(bool, object)
0x17e8: Stack[-1] = Stack[-3]
0x17e9: Call2 0x185a

0x17ea: Pop(1)
0x17eb: IF (Stack[-1] == 0) GOTO 0x17ee; Pop(1)

0x17ec: Stack[-2] = (bool) 1
0x17ed: Return(); Pop(0)

0x17ee: Stack[-2] = (bool) 0
0x17ef: Return(); Pop(0)

0x17f0: PushEmpty()
0x17f1: PushEmpty(bool, object)
0x17f2: Stack[-1] = Stack[-3]
0x17f3: Call2 0x1861

0x17f4: Pop(1)
0x17f5: IF (Stack[-1] == 0) GOTO 0x17f8; Pop(1)

0x17f6: Stack[-2] = (bool) 1
0x17f7: Return(); Pop(0)

0x17f8: Stack[-2] = (bool) 0
0x17f9: Return(); Pop(0)

0x17fa: PushEmpty()
0x17fb: PushEmpty(bool, object)
0x17fc: Stack[-1] = Stack[-3]
0x17fd: Call2 0x1868

0x17fe: Pop(1)
0x17ff: IF (Stack[-1] == 0) GOTO 0x1802; Pop(1)

0x1800: Stack[-2] = (bool) 1
0x1801: Return(); Pop(0)

0x1802: Stack[-2] = (bool) 0
0x1803: Return(); Pop(0)

0x1804: PushEmpty()
0x1805: PushEmpty(bool, object)
0x1806: Stack[-1] = Stack[-3]
0x1807: Call2 0x186f

0x1808: Pop(1)
0x1809: IF (Stack[-1] == 0) GOTO 0x180c; Pop(1)

0x180a: Stack[-2] = (bool) 1
0x180b: Return(); Pop(0)

0x180c: Stack[-2] = (bool) 0
0x180d: Return(); Pop(0)

0x180e: PushEmpty()
0x180f: PushEmpty(bool, object)
0x1810: Stack[-1] = Stack[-3]
0x1811: Call2 0x1876

0x1812: Pop(1)
0x1813: IF (Stack[-1] == 0) GOTO 0x1816; Pop(1)

0x1814: Stack[-2] = (bool) 1
0x1815: Return(); Pop(0)

0x1816: Stack[-2] = (bool) 0
0x1817: Return(); Pop(0)

0x1818: PushEmpty()
0x1819: PushEmpty(bool, object)
0x181a: Stack[-1] = Stack[-3]
0x181b: Call2 0x188b

0x181c: Pop(1)
0x181d: IF (Stack[-1] == 0) GOTO 0x1820; Pop(1)

0x181e: Stack[-2] = (bool) 1
0x181f: Return(); Pop(0)

0x1820: Stack[-2] = (bool) 0
0x1821: Return(); Pop(0)

0x1822: PushEmpty()
0x1823: PushEmpty(int)
0x1824: Call2 0x1754

0x1825: Pop(0)
0x1826: Push((int) 1)
0x1827: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1828: Return(); Pop(0)

0x1829: PushEmpty()
0x182a: PushEmpty(int)
0x182b: Call2 0x1754

0x182c: Pop(0)
0x182d: Push((int) 2)
0x182e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x182f: Return(); Pop(0)

0x1830: PushEmpty()
0x1831: PushEmpty(int)
0x1832: Call2 0x1754

0x1833: Pop(0)
0x1834: Push((int) 3)
0x1835: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1836: Return(); Pop(0)

0x1837: PushEmpty()
0x1838: PushEmpty(int)
0x1839: Call2 0x1754

0x183a: Pop(0)
0x183b: Push((int) 4)
0x183c: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x183d: Return(); Pop(0)

0x183e: PushEmpty()
0x183f: PushEmpty(int)
0x1840: Call2 0x1754

0x1841: Pop(0)
0x1842: Push((int) 5)
0x1843: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1844: Return(); Pop(0)

0x1845: PushEmpty()
0x1846: PushEmpty(int)
0x1847: Call2 0x1754

0x1848: Pop(0)
0x1849: Push((int) 6)
0x184a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x184b: Return(); Pop(0)

0x184c: PushEmpty()
0x184d: PushEmpty(int)
0x184e: Call2 0x1754

0x184f: Pop(0)
0x1850: Push((int) 7)
0x1851: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1852: Return(); Pop(0)

0x1853: PushEmpty()
0x1854: PushEmpty(int)
0x1855: Call2 0x1754

0x1856: Pop(0)
0x1857: Push((int) 8)
0x1858: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1859: Return(); Pop(0)

0x185a: PushEmpty()
0x185b: PushEmpty(int)
0x185c: Call2 0x1754

0x185d: Pop(0)
0x185e: Push((int) 9)
0x185f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1860: Return(); Pop(0)

0x1861: PushEmpty()
0x1862: PushEmpty(int)
0x1863: Call2 0x1754

0x1864: Pop(0)
0x1865: Push((int) 10)
0x1866: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1867: Return(); Pop(0)

0x1868: PushEmpty()
0x1869: PushEmpty(int)
0x186a: Call2 0x1754

0x186b: Pop(0)
0x186c: Push((int) 11)
0x186d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x186e: Return(); Pop(0)

0x186f: PushEmpty()
0x1870: PushEmpty(int)
0x1871: Call2 0x1754

0x1872: Pop(0)
0x1873: Push((int) 12)
0x1874: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1875: Return(); Pop(0)

0x1876: PushEmpty()
0x1877: PushEmpty(bool)
0x1878: Stack[-1] = (bool) 0
0x1879: PushEmpty(int)
0x187a: Call2 0x175d

0x187b: Pop(0)
0x187c: Push((int) 0)
0x187d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x187e: IF (Stack[-1] == 0) GOTO 0x1886; Pop(1)

0x187f: PushEmpty(int)
0x1880: Call2 0x175d

0x1881: Pop(0)
0x1882: Push((int) 12)
0x1883: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1884: IF (Stack[-1] == 0) GOTO 0x1886; Pop(1)

0x1885: Stack[-1] = (bool) 1
0x1886: IF (Stack[-1] == 0) GOTO 0x1889; Pop(1)

0x1887: Stack[-2] = (bool) 1
0x1888: Return(); Pop(0)

0x1889: Stack[-2] = (bool) 0
0x188a: Return(); Pop(0)

0x188b: PushEmpty()
0x188c: PushEmpty(int)
0x188d: Call2 0x175d

0x188e: Pop(0)
0x188f: Push((int) 12)
0x1890: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1891: IF (Stack[-1] == 0) GOTO 0x1894; Pop(1)

0x1892: Stack[-2] = (bool) 1
0x1893: Return(); Pop(0)

0x1894: Stack[-2] = (bool) 0
0x1895: Return(); Pop(0)

0x1896: PushEmpty(int, int)
0x1897: Push("branch")
0x1898: @ GetVariable(Stack[-1], Stack[-2])
0x1899: Pop(1)
0x189a: Push((int) 0)
0x189b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x189c: IF (Stack[-1] == 0) GOTO 0x18a0; Pop(1)

0x189d: Stack[-3] = (int) 1
0x189e: Return(); Pop(2)

0x189f: GOTO 0x18a5

0x18a0: Push((int) 1)
0x18a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18a2: IF (Stack[-1] == 0) GOTO 0x18a5; Pop(1)

0x18a3: Stack[-3] = (int) 2
0x18a4: Return(); Pop(2)

0x18a5: Stack[-3] = (int) 3
0x18a6: Return(); Pop(2)

0x18a7: PushEmpty(int, int)
0x18a8: Push("branch")
0x18a9: @ GetVariable(Stack[-1], Stack[-2])
0x18aa: Pop(1)
0x18ab: Stack[-3] = Stack[-1]
0x18ac: Return(); Pop(2)

0x18ad: PushEmpty()
0x18ae: PushEmpty(int)
0x18af: Call2 0x18a7

0x18b0: Pop(0)
0x18b1: Push((int) 1)
0x18b2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18b3: IF (Stack[-1] == 0) GOTO 0x18b7; Pop(1)

0x18b4: @ WorkWithCorpse(Stack[-1])
0x18b5: Pop(0)
0x18b6: GOTO 0x18b9

0x18b7: @ Barter(Stack[-1])
0x18b8: Pop(0)
0x18b9: Return(); Pop(0)

0x18ba: PushEmpty(int, bool, int, bool)
0x18bb: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x18bc: IF (Stack[-1] == 0) GOTO 0x18c1; Pop(1)

0x18bd: Push("GenerateMoney: iMin > iMax")
0x18be: @ Trace(Stack[-1])
0x18bf: Pop(1)
0x18c0: Return(); Pop(4)

0x18c1: Stack[-2] = (int) 0
0x18c2: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x18c3: IF (Stack[-1] == 0) GOTO 0x18c8; Pop(1)

0x18c4: Pop(0); Push(Stack[-5] - Stack[-6]);
0x18c5: @ irand(Stack[-3], Stack[-1])
0x18c6: Pop(1)
0x18c7: GOTO 0x18cc

0x18c8: Push((int) 0)
0x18c9: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x18ca: IF (Stack[-1] == 0) GOTO 0x18cc; Pop(1)

0x18cb: Return(); Pop(4)

0x18cc: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x18cd: Push((int) 0)
0x18ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18cf: IF (Stack[-1] == 0) GOTO 0x18d1; Pop(1)

0x18d0: Return(); Pop(4)

0x18d1: PushEmpty(int, string)
0x18d2: Stack[-1] = "Money"
0x18d3: Call2 0x1982

0x18d4: Pop(1)
0x18d5: Push((int) 0)
0x18d6: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x18d7: Pop(2)
0x18d8: Return(); Pop(4)

0x18d9: PushEmpty(object, int, bool, object, int, bool)
0x18da: @ CreateInvItem(Stack[-3])
0x18db: Pop(0)
0x18dc: @@ SetItemName(Stack[-7])
0x18dd: Pop(0)
0x18de: Push("Organ")
0x18df: Push((int) 1)
0x18e0: @@ SetProperty(Stack[-2], Stack[-1])
0x18e1: Pop(2)
0x18e2: @@ GetItemID(Stack[-2])
0x18e3: Pop(0)
0x18e4: Push((int) 0)
0x18e5: Push((int) 1)
0x18e6: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x18e7: Pop(2)
0x18e8: Return(); Pop(6)

0x18e9: Stack[-3] = 0
0x18ea: PushEmpty(int)
0x18eb: Call2 0x18a7

0x18ec: Pop(0)
0x18ed: Push((int) 1)
0x18ee: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x18ef: IF (Stack[-1] == 0) GOTO 0x18f1; Pop(1)

0x18f0: Return(); Pop(0)

0x18f1: PushEmpty(string)
0x18f2: Stack[-1] = "liver"
0x18f3: Call2 0x18d9

0x18f4: Pop(1)
0x18f5: PushEmpty(string)
0x18f6: Stack[-1] = "kidney"
0x18f7: Call2 0x18d9

0x18f8: Pop(1)
0x18f9: PushEmpty(string)
0x18fa: Stack[-1] = "heart"
0x18fb: Call2 0x18d9

0x18fc: Pop(1)
0x18fd: PushEmpty(string)
0x18fe: Stack[-1] = "blood"
0x18ff: Call2 0x18d9

0x1900: Pop(1)
0x1901: Return(); Pop(0)

0x1902: PushEmpty(bool, bool)
0x1903: Push((int) 0)
0x1904: @ ClearSubContainer(Stack[-1])
0x1905: Pop(1)
0x1906: PushEmpty(int, int)
0x1907: Stack[-2] = (int) 0
0x1908: Push((int) 10)
0x1909: PushEmpty(int)
0x190a: Call2 0x1754

0x190b: Pop(0)
0x190c: Push((int) 10)
0x190d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x190e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x190f: Call2 0x18ba

0x1910: Pop(2)
0x1911: PushEmpty(string, int, int)
0x1912: Stack[-3] = "hook"
0x1913: Stack[-2] = (int) 1
0x1914: Stack[-1] = (int) 4
0x1915: Call2 0x16b0

0x1916: Pop(3)
0x1917: PushEmpty(string, int, int)
0x1918: Stack[-3] = "watch"
0x1919: Stack[-2] = (int) 1
0x191a: Stack[-1] = (int) 10
0x191b: Call2 0x16b0

0x191c: Pop(3)
0x191d: Return(); Pop(2)

0x191e: PushEmpty(int, bool, int, int, bool, int)
0x191f: Push((int) 0)
0x1920: @ ClearSubContainer(Stack[-1])
0x1921: Pop(1)
0x1922: PushEmpty(int)
0x1923: Call2 0x1754

0x1924: Stack[-2] = Stack[-1]
0x1925: Pop(1)
0x1926: Push(Stack[-7])
0x1927: IF (Stack[-1] == 0) GOTO 0x1954; Pop(1)

0x1928: PushEmpty(string, int, int, int)
0x1929: Stack[-4] = "alpha_pills"
0x192a: Stack[-3] = (int) 1
0x192b: Stack[-2] = (int) 2
0x192c: Stack[-1] = (int) 4
0x192d: Call2 0x16bb

0x192e: Pop(4)
0x192f: PushEmpty(string, int, int, int)
0x1930: Stack[-4] = "meradorm"
0x1931: Stack[-3] = (int) 2
0x1932: Stack[-2] = (int) 3
0x1933: Stack[-1] = (int) 3
0x1934: Call2 0x16bb

0x1935: Pop(4)
0x1936: Push((int) 3)
0x1937: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1938: IF (Stack[-1] == 0) GOTO 0x193f; Pop(1)

0x1939: PushEmpty(string, int, int)
0x193a: Stack[-3] = "beta_pills"
0x193b: Stack[-2] = (int) 1
0x193c: Stack[-1] = (int) 4
0x193d: Call2 0x16b0

0x193e: Pop(3)
0x193f: Push((int) 8)
0x1940: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1941: IF (Stack[-1] == 0) GOTO 0x194a; Pop(1)

0x1942: PushEmpty(string, int, int, int)
0x1943: Stack[-4] = "monomicin"
0x1944: Stack[-3] = (int) 1
0x1945: Stack[-2] = (int) 2
0x1946: Stack[-1] = (int) 2
0x1947: Call2 0x16bb

0x1948: Pop(4)
0x1949: GOTO 0x1953

0x194a: Push((int) 4)
0x194b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x194c: IF (Stack[-1] == 0) GOTO 0x1953; Pop(1)

0x194d: PushEmpty(string, int, int)
0x194e: Stack[-3] = "monomicin"
0x194f: Stack[-2] = (int) 1
0x1950: Stack[-1] = (int) 2
0x1951: Call2 0x16b0

0x1952: Pop(3)
0x1953: GOTO 0x1981

0x1954: PushEmpty(string, int, int)
0x1955: Stack[-3] = "lockpick"
0x1956: Stack[-2] = (int) 1
0x1957: Stack[-1] = (int) 4
0x1958: Call2 0x16b0

0x1959: Pop(3)
0x195a: PushEmpty(string, int, int)
0x195b: Stack[-3] = "rifle_ammo"
0x195c: Stack[-2] = (int) 1
0x195d: Stack[-1] = (int) 2
0x195e: Call2 0x16b0

0x195f: Pop(3)
0x1960: PushEmpty(string, int, int)
0x1961: Stack[-3] = "revolver_ammo"
0x1962: Stack[-2] = (int) 1
0x1963: Stack[-1] = (int) 2
0x1964: Call2 0x16b0

0x1965: Pop(3)
0x1966: PushEmpty(string, int, int, int)
0x1967: Stack[-4] = "samopal_ammo"
0x1968: Stack[-3] = (int) 1
0x1969: Stack[-2] = (int) 2
0x196a: Stack[-1] = (int) 2
0x196b: Call2 0x16bb

0x196c: Pop(4)
0x196d: Push((int) 8)
0x196e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x196f: IF (Stack[-1] == 0) GOTO 0x1978; Pop(1)

0x1970: PushEmpty(string, int, int, int)
0x1971: Stack[-4] = "monomicin"
0x1972: Stack[-3] = (int) 1
0x1973: Stack[-2] = (int) 2
0x1974: Stack[-1] = (int) 2
0x1975: Call2 0x16bb

0x1976: Pop(4)
0x1977: GOTO 0x1981

0x1978: Push((int) 4)
0x1979: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x197a: IF (Stack[-1] == 0) GOTO 0x1981; Pop(1)

0x197b: PushEmpty(string, int, int)
0x197c: Stack[-3] = "monomicin"
0x197d: Stack[-2] = (int) 1
0x197e: Stack[-1] = (int) 2
0x197f: Call2 0x16b0

0x1980: Pop(3)
0x1981: Return(); Pop(6)

0x1982: PushEmpty(int, int)
0x1983: @ GetInvItemByName(Stack[-1], Stack[-3])
0x1984: Pop(0)
0x1985: Stack[-4] = Stack[-1]
0x1986: Return(); Pop(2)

0x1987: PushEmpty()
0x1988: PushEmpty(object)
0x1989: Stack[-1] = Stack[-2]
0x198a: Push(-1, 0); TaskCall(3)
0x198b: Call2 0xce0

0x198c: Pop(-1, 0); TaskReturn
0x198d: Pop(1)
0x198e: Return(); Pop(0)

0x198f: PushEmpty(float, float)
0x1990: Push("health")
0x1991: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1992: IF (Stack[-1] == 0) GOTO 0x199b; Pop(1)

0x1993: Push("health")
0x1994: @ GetProperty(Stack[-1], Stack[-2])
0x1995: Pop(1)
0x1996: Push((int) 0)
0x1997: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x1998: IF (Stack[-1] == 0) GOTO 0x199b; Pop(1)

0x1999: @ SignalDeath(Stack[-4])
0x199a: Pop(0)
0x199b: Return(); Pop(2)

0x199c: PushEmpty()
0x199d: PushEmpty(object)
0x199e: Stack[-1] = Stack[-2]
0x199f: Call2 0x1987

0x19a0: Pop(1)
0x19a1: Return(); Pop(0)

0x19a2: PushEmpty()
0x19a3: PushEmpty(object, int, float)
0x19a4: Stack[-3] = Stack[-7]
0x19a5: Stack[-2] = Stack[-6]
0x19a6: Stack[-1] = Stack[-5]
0x19a7: Call2 0x1589

0x19a8: Pop(3)
0x19a9: Return(); Pop(0)

0x19aa: PushEmpty()
0x19ab: PushEmpty(object, int, float, cvector, cvector)
0x19ac: Stack[-5] = Stack[-11]
0x19ad: Stack[-4] = Stack[-10]
0x19ae: Stack[-3] = Stack[-9]
0x19af: Stack[-2] = Stack[-7]
0x19b0: Stack[-1] = Stack[-6]
0x19b1: Call2 0x15cd

0x19b2: Pop(5)
0x19b3: Return(); Pop(0)

0x19b4: PushEmpty()
0x19b5: Push("unholster")
0x19b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19b7: IF (Stack[-1] == 0) GOTO 0x19bf; Pop(1)

0x19b8: PushEmpty(bool, object)
0x19b9: Stack[-1] = Stack[-4]
0x19ba: Call2 0x1af8

0x19bb: Stack[-5] = Stack[-2]
0x19bc: Pop(2)
0x19bd: Return(); Pop(0)

0x19be: GOTO 0x19d2

0x19bf: Push("player_shot")
0x19c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19c1: IF (Stack[-1] == 0) GOTO 0x19c9; Pop(1)

0x19c2: PushEmpty(bool, object)
0x19c3: Stack[-1] = Stack[-4]
0x19c4: Call2 0x1afd

0x19c5: Stack[-5] = Stack[-2]
0x19c6: Pop(2)
0x19c7: Return(); Pop(0)

0x19c8: GOTO 0x19d2

0x19c9: Push("battle")
0x19ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19cb: IF (Stack[-1] == 0) GOTO 0x19d2; Pop(1)

0x19cc: PushEmpty(bool, object)
0x19cd: Stack[-1] = Stack[-4]
0x19ce: Call2 0x1b12

0x19cf: Stack[-5] = Stack[-2]
0x19d0: Pop(2)
0x19d1: Return(); Pop(0)

0x19d2: Stack[-3] = (bool) 0
0x19d3: Return(); Pop(0)

0x19d4: PushEmpty()
0x19d5: Push("unholster")
0x19d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19d7: IF (Stack[-1] == 0) GOTO 0x19dd; Pop(1)

0x19d8: PushEmpty(object)
0x19d9: Stack[-1] = Stack[-3]
0x19da: Call2 0x1afb

0x19db: Pop(1)
0x19dc: GOTO 0x19ec

0x19dd: Push("player_shot")
0x19de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19df: IF (Stack[-1] == 0) GOTO 0x19e5; Pop(1)

0x19e0: PushEmpty(object)
0x19e1: Stack[-1] = Stack[-3]
0x19e2: Call2 0x1b0c

0x19e3: Pop(1)
0x19e4: GOTO 0x19ec

0x19e5: Push("battle")
0x19e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19e7: IF (Stack[-1] == 0) GOTO 0x19ec; Pop(1)

0x19e8: PushEmpty(object)
0x19e9: Stack[-1] = Stack[-3]
0x19ea: Call2 0x1b15

0x19eb: Pop(1)
0x19ec: Return(); Pop(0)

0x19ed: PushEmpty(bool, bool)
0x19ee: PushEmpty(bool)
0x19ef: Stack[-1] = (bool) 0
0x19f0: PushEmpty(bool, object)
0x19f1: Stack[-1] = Stack[-6]
0x19f2: Call2 0x1af8

0x19f3: Pop(1)
0x19f4: IF (Stack[-1] == 0) GOTO 0x19fb; Pop(1)

0x19f5: PushEmpty(bool, object)
0x19f6: Stack[-1] = Stack[-6]
0x19f7: Call2 0x14c2

0x19f8: Pop(1)
0x19f9: IF (Stack[-1] == 0) GOTO 0x19fb; Pop(1)

0x19fa: Stack[-1] = (bool) 1
0x19fb: IF (Stack[-1] == 0) GOTO 0x1a02; Pop(1)

0x19fc: @@ IsWeaponHolstered(Stack[-1])
0x19fd: Pop(0)
0x19fe: Pop(0); Push((bool) Stack[-1] == 0)
0x19ff: IF (Stack[-1] == 0) GOTO 0x1a02; Pop(1)

0x1a00: Stack[-4] = (bool) 1
0x1a01: Return(); Pop(2)

0x1a02: Stack[-4] = (bool) 0
0x1a03: Return(); Pop(2)

0x1a04: PushEmpty()
0x1a05: PushEmpty(object)
0x1a06: Stack[-1] = Stack[-2]
0x1a07: Call2 0x1afb

0x1a08: Pop(1)
0x1a09: Return(); Pop(0)

0x1a0a: PushEmpty()
0x1a0b: PushEmpty(bool, object)
0x1a0c: Stack[-1] = Stack[-3]
0x1a0d: Call2 0x14c2

0x1a0e: Pop(1)
0x1a0f: IF (Stack[-1] == 0) GOTO 0x1a16; Pop(1)

0x1a10: PushEmpty(object)
0x1a11: Call2 0x16f3

0x1a12: Pop(0)
0x1a13: Push((float)-0.05)
0x1a14: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1a15: Pop(2)
0x1a16: Return(); Pop(0)

0x1a17: PushEmpty(object, object)
0x1a18: Push("heal")
0x1a19: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a1a: IF (Stack[-1] == 0) GOTO 0x1a25; Pop(1)

0x1a1b: Push("player")
0x1a1c: @ FindActor(Stack[-2], Stack[-1])
0x1a1d: Pop(1)
0x1a1e: PushEmpty(bool, object)
0x1a1f: Stack[-1] = Stack[-3]
0x1a20: Call2 0x1b17

0x1a21: Stack[-6] = Stack[-2]
0x1a22: Pop(2)
0x1a23: Return(); Pop(2)

0x1a24: Stack[-1] = 0
0x1a25: Stack[-4] = (bool) 0
0x1a26: Return(); Pop(2)

0x1a27: PushEmpty(object, object)
0x1a28: Push("heal")
0x1a29: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a2a: IF (Stack[-1] == 0) GOTO 0x1a33; Pop(1)

0x1a2b: Push("player")
0x1a2c: @ FindActor(Stack[-2], Stack[-1])
0x1a2d: Pop(1)
0x1a2e: PushEmpty(object)
0x1a2f: Stack[-1] = Stack[-2]
0x1a30: Call2 0x1b1a

0x1a31: Pop(1)
0x1a32: Stack[-1] = 0
0x1a33: Return(); Pop(2)

0x1a34: PushEmpty(string, string)
0x1a35: Stack[-1] = "idle"
0x1a36: Push(Stack[-3])
0x1a37: IF (Stack[-1] == 0) GOTO 0x1a39; Pop(1)

0x1a38: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1a39: Stack[-4] = Stack[-1]
0x1a3a: Return(); Pop(2)

0x1a3b: PushEmpty(int, bool, int, bool)
0x1a3c: Stack[-2] = (int) 0
0x1a3d: Push("all")
0x1a3e: PushEmpty(string, int)
0x1a3f: Stack[-1] = Stack[-5]
0x1a40: Call2 0x1a34

0x1a41: Pop(1)
0x1a42: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1a43: Pop(2)
0x1a44: Pop(0); Push((bool) Stack[-1] == 0)
0x1a45: IF (Stack[-1] == 0) GOTO 0x1a47; Pop(1)

0x1a46: GOTO 0x1a4a

0x1a47: Push((int) 1)
0x1a48: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1a49: GOTO 0x1a3d

0x1a4a: Stack[-5] = Stack[-2]
0x1a4b: Return(); Pop(4)

0x1a4c: PushEmpty()
0x1a4d: PushEmpty(bool)
0x1a4e: Call2 0x1b56

0x1a4f: Pop(0)
0x1a50: IF (Stack[-1] == 0) GOTO 0x1a53; Pop(1)

0x1a51: Stack[-2] = (int) 2
0x1a52: GOTO 0x1a54

0x1a53: Stack[-2] = (int) 0
0x1a54: Return(); Pop(0)

0x1a55: PushEmpty()
0x1a56: PushEmpty(object)
0x1a57: Stack[-1] = Stack[-2]
0x1a58: Push(-1, 1); TaskCall(6)
0x1a59: Call2 0xfe7

0x1a5a: Pop(-1, 1); TaskReturn
0x1a5b: Pop(1)
0x1a5c: Return(); Pop(0)

0x1a5d: PushEmpty()
0x1a5e: PushEmpty(bool, object)
0x1a5f: Stack[-1] = Stack[-3]
0x1a60: Call2 0x1545

0x1a61: Pop(1)
0x1a62: IF (Stack[-1] == 0) GOTO 0x1a65; Pop(1)

0x1a63: Stack[-2] = (int) 2
0x1a64: GOTO 0x1a66

0x1a65: Stack[-2] = (int) 0
0x1a66: Return(); Pop(0)

0x1a67: PushEmpty()
0x1a68: PushEmpty(object)
0x1a69: Stack[-1] = Stack[-2]
0x1a6a: Push(-1, 6); TaskCall(7)
0x1a6b: Call2 0x10fa

0x1a6c: Pop(-1, 6); TaskReturn
0x1a6d: Pop(1)
0x1a6e: Return(); Pop(0)

0x1a6f: PushEmpty(string, string, string, string)
0x1a70: PushEmpty(bool, object, string)
0x1a71: Stack[-2] = Stack[-9]
0x1a72: Stack[-1] = "class"
0x1a73: Call2 0x14c7

0x1a74: Pop(2)
0x1a75: Pop(1); Push((bool) Stack[-1] == 0)
0x1a76: IF (Stack[-1] == 0) GOTO 0x1a79; Pop(1)

0x1a77: Stack[-7] = (bool) 0
0x1a78: Return(); Pop(4)

0x1a79: Push("class")
0x1a7a: @ GetProperty(Stack[-1], Stack[-3])
0x1a7b: Pop(1)
0x1a7c: Push("class")
0x1a7d: @@ GetProperty(Stack[-1], Stack[-2])
0x1a7e: Pop(1)
0x1a7f: PushEmpty(bool)
0x1a80: Stack[-1] = (bool) 0
0x1a81: Pop(0); Push((bool) Stack[-6] == 0)
0x1a82: IF (Stack[-1] == 0) GOTO 0x1a86; Pop(1)

0x1a83: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0x1a84: IF (Stack[-1] == 0) GOTO 0x1a86; Pop(1)

0x1a85: Stack[-1] = (bool) 1
0x1a86: IF (Stack[-1] == 0) GOTO 0x1a89; Pop(1)

0x1a87: Stack[-7] = (bool) 1
0x1a88: Return(); Pop(4)

0x1a89: Push("rat")
0x1a8a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a8b: IF (Stack[-1] == 0) GOTO 0x1a8f; Pop(1)

0x1a8c: Stack[-7] = (bool) 0
0x1a8d: Return(); Pop(4)

0x1a8e: GOTO 0x1ab8

0x1a8f: Push("rat_big")
0x1a90: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a91: IF (Stack[-1] == 0) GOTO 0x1a95; Pop(1)

0x1a92: Stack[-7] = (bool) 0
0x1a93: Return(); Pop(4)

0x1a94: GOTO 0x1ab8

0x1a95: Push("dog")
0x1a96: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a97: IF (Stack[-1] == 0) GOTO 0x1a9b; Pop(1)

0x1a98: Stack[-7] = (bool) 0
0x1a99: Return(); Pop(4)

0x1a9a: GOTO 0x1ab8

0x1a9b: Push("grabitel")
0x1a9c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a9d: IF (Stack[-1] == 0) GOTO 0x1aa1; Pop(1)

0x1a9e: Stack[-7] = (bool) 0
0x1a9f: Return(); Pop(4)

0x1aa0: GOTO 0x1ab8

0x1aa1: Push("bomber")
0x1aa2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1aa3: IF (Stack[-1] == 0) GOTO 0x1aa7; Pop(1)

0x1aa4: Stack[-7] = (bool) 0
0x1aa5: Return(); Pop(4)

0x1aa6: GOTO 0x1ab8

0x1aa7: Push("sanitar")
0x1aa8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1aa9: IF (Stack[-1] == 0) GOTO 0x1aad; Pop(1)

0x1aaa: Stack[-7] = (bool) 0
0x1aab: Return(); Pop(4)

0x1aac: GOTO 0x1ab8

0x1aad: Push("hunter")
0x1aae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1aaf: IF (Stack[-1] == 0) GOTO 0x1ab3; Pop(1)

0x1ab0: Stack[-7] = (bool) 0
0x1ab1: Return(); Pop(4)

0x1ab2: GOTO 0x1ab8

0x1ab3: Push("soldier")
0x1ab4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ab5: IF (Stack[-1] == 0) GOTO 0x1ab8; Pop(1)

0x1ab6: Stack[-7] = (bool) 0
0x1ab7: Return(); Pop(4)

0x1ab8: Stack[-7] = (bool) 1
0x1ab9: Return(); Pop(4)

0x1aba: PushEmpty()
0x1abb: PushEmpty(int, object)
0x1abc: Stack[-1] = Stack[-4]
0x1abd: Call2 0x1a5d

0x1abe: Stack[-5] = Stack[-2]
0x1abf: Pop(2)
0x1ac0: Return(); Pop(0)

0x1ac1: PushEmpty()
0x1ac2: PushEmpty(object)
0x1ac3: Stack[-1] = Stack[-2]
0x1ac4: Call2 0x1a67

0x1ac5: Pop(1)
0x1ac6: Return(); Pop(0)

0x1ac7: PushEmpty(bool, bool)
0x1ac8: PushEmpty(bool, object, bool)
0x1ac9: Stack[-2] = Stack[-8]
0x1aca: Stack[-1] = !Stack[-6]; Pop(0);
0x1acb: Call2 0x1a6f

0x1acc: Pop(2)
0x1acd: Pop(1); Push((bool) Stack[-1] == 0)
0x1ace: IF (Stack[-1] == 0) GOTO 0x1ad1; Pop(1)

0x1acf: Stack[-7] = (bool) 0
0x1ad0: Return(); Pop(2)

0x1ad1: @ CanSee(Stack[-1], Stack[-6])
0x1ad2: Pop(0)
0x1ad3: PushEmpty(bool)
0x1ad4: Stack[-1] = (bool) 1
0x1ad5: Push(Stack[-2])
0x1ad6: IF (Stack[-1] == 0) GOTO 0x1adf; Pop(1)

0x1ad7: PushEmpty(float, object)
0x1ad8: Stack[-1] = Stack[-9]
0x1ad9: Call2 0x14ba

0x1ada: Pop(1)
0x1adb: Pop(0); Push(Stack[-6] * Stack[-6]);
0x1adc: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1add: IF (Stack[-1] == 0) GOTO 0x1adf; Pop(1)

0x1ade: Stack[-1] = (bool) 0
0x1adf: IF (Stack[-1] == 0) GOTO 0x1ae2; Pop(1)

0x1ae0: Stack[-7] = (bool) 1
0x1ae1: Return(); Pop(2)

0x1ae2: Stack[-7] = (bool) 0
0x1ae3: Return(); Pop(2)

0x1ae4: PushEmpty()
0x1ae5: Stack[-2] = (int) 0
0x1ae6: Return(); Pop(0)

0x1ae7: PushEmpty()
0x1ae8: Return(); Pop(0)

0x1ae9: PushEmpty()
0x1aea: Stack[-3] = (int) 0
0x1aeb: Return(); Pop(0)

0x1aec: PushEmpty()
0x1aed: Return(); Pop(0)

0x1aee: PushEmpty()
0x1aef: Stack[-2] = (int) 2
0x1af0: Return(); Pop(0)

0x1af1: PushEmpty()
0x1af2: PushEmpty(object)
0x1af3: Stack[-1] = Stack[-2]
0x1af4: Call2 0x1b2e

0x1af5: Pop(1)
0x1af6: Return(); Pop(0)

0x1af7: Return(); Pop(0)

0x1af8: PushEmpty()
0x1af9: Stack[-2] = (bool) 0
0x1afa: Return(); Pop(0)

0x1afb: PushEmpty()
0x1afc: Return(); Pop(0)

0x1afd: PushEmpty(bool, bool)
0x1afe: @ CanSee(Stack[-1], Stack[-3])
0x1aff: Pop(0)
0x1b00: Stack[-4] = (bool) 1
0x1b01: Push(Stack[-1])
0x1b02: IF (Stack[-1] == 0) GOTO 0x1b0b; Pop(1)

0x1b03: PushEmpty(float, object)
0x1b04: Stack[-1] = Stack[-5]
0x1b05: Call2 0x14ba

0x1b06: Pop(1)
0x1b07: Push((int) 2250000)
0x1b08: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1b09: IF (Stack[-1] == 0) GOTO 0x1b0b; Pop(1)

0x1b0a: Stack[-4] = (bool) 0
0x1b0b: Return(); Pop(2)

0x1b0c: PushEmpty()
0x1b0d: PushEmpty(object)
0x1b0e: Stack[-1] = Stack[-2]
0x1b0f: Call2 0x1a55

0x1b10: Pop(1)
0x1b11: Return(); Pop(0)

0x1b12: PushEmpty()
0x1b13: Stack[-2] = (bool) 0
0x1b14: Return(); Pop(0)

0x1b15: PushEmpty()
0x1b16: Return(); Pop(0)

0x1b17: PushEmpty()
0x1b18: Stack[-2] = (bool) 0
0x1b19: Return(); Pop(0)

0x1b1a: PushEmpty()
0x1b1b: Return(); Pop(0)

0x1b1c: Stack[-1] = (int) 515558
0x1b1d: Return(); Pop(0)

0x1b1e: Stack[-1] = (int) 503343
0x1b1f: Return(); Pop(0)

0x1b20: Stack[-1] = "ui/NPC_Citizen3.png"
0x1b21: Return(); Pop(0)

0x1b22: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x1b23: Return(); Pop(0)

0x1b24: Stack[-1] = (bool) 0
0x1b25: Return(); Pop(0)

0x1b26: Push(GlobalVars[0])
0x1b27: Stack[-1] = (bool) 0
0x1b28: GlobalVars[0] = Stack[-1]; Pop(1)
0x1b29: PushEmpty(bool)
0x1b2a: Stack[-1] = (bool) 1
0x1b2b: Call2 0x191e

0x1b2c: Pop(1)
0x1b2d: Return(); Pop(0)

0x1b2e: PushEmpty(bool, bool)
0x1b2f: Push(GlobalVars[0])
0x1b30: IF (Stack[-1] == 0) GOTO 0x1b3b; Pop(1)

0x1b31: @ IsOverrideActive(Stack[-1])
0x1b32: Pop(0)
0x1b33: Pop(0); Push((bool) Stack[-1] == 0)
0x1b34: IF (Stack[-1] == 0) GOTO 0x1b39; Pop(1)

0x1b35: PushEmpty(object)
0x1b36: Stack[-1] = Stack[-4]
0x1b37: Call2 0x18ad

0x1b38: Pop(1)
0x1b39: Return(); Pop(2)

0x1b3a: GOTO 0x1b55

0x1b3b: Push((int) 1000)
0x1b3c: PushEmpty(int, object)
0x1b3d: Stack[-1] = Stack[-6]
0x1b3e: Push(-2, 1); TaskCall(1)
0x1b3f: Call2 0x28

0x1b40: Pop(-2, 1); TaskReturn
0x1b41: Pop(1)
0x1b42: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b43: IF (Stack[-1] == 0) GOTO 0x1b55; Pop(1)

0x1b44: PushEmpty(bool, object)
0x1b45: Stack[-1] = Stack[-5]
0x1b46: Call2 0x1642

0x1b47: Pop(1)
0x1b48: Pop(1); Push((bool) Stack[-1] == 0)
0x1b49: IF (Stack[-1] == 0) GOTO 0x1b4b; Pop(1)

0x1b4a: Return(); Pop(2)

0x1b4b: PushEmpty(object)
0x1b4c: Stack[-1] = Stack[-4]
0x1b4d: Push(-1, 1); TaskCall(0)
0x1b4e: Call2 0x0

0x1b4f: Pop(-1, 1); TaskReturn
0x1b50: Pop(1)
0x1b51: PushEmpty(object)
0x1b52: Stack[-1] = Stack[-4]
0x1b53: Call2 0x167a

0x1b54: Pop(1)
0x1b55: Return(); Pop(2)

0x1b56: Stack[-1] = (bool) 0
0x1b57: Return(); Pop(0)

0x1b58: PushEmpty()
0x1b59: PushEmpty(bool, object, object, float, bool)
0x1b5a: Stack[-4] = Stack[-8]
0x1b5b: Stack[-3] = Stack[-7]
0x1b5c: Stack[-2] = (float) 700.0
0x1b5d: Stack[-1] = Stack[-6]
0x1b5e: Call2 0x1ac7

0x1b5f: Stack[-9] = Stack[-5]
0x1b60: Pop(5)
0x1b61: Return(); Pop(0)

0x1b62: PushEmpty()
0x1b63: PushEmpty(bool, object)
0x1b64: Stack[-1] = Stack[-3]
0x1b65: Call2 0x14c2

0x1b66: Pop(1)
0x1b67: IF (Stack[-1] == 0) GOTO 0x1b73; Pop(1)

0x1b68: PushEmpty(object)
0x1b69: Call2 0x16f3

0x1b6a: Pop(0)
0x1b6b: Push((float)-0.1)
0x1b6c: Push((bool) 1)
0x1b6d: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1b6e: Pop(3)
0x1b6f: PushEmpty(bool)
0x1b70: Stack[-1] = (bool) 1
0x1b71: Call2 0x1902

0x1b72: Pop(1)
0x1b73: PushEmpty()
0x1b74: Call2 0x18ea

0x1b75: Pop(0)
0x1b76: Push(GlobalVars[0])
0x1b77: Stack[-1] = (bool) 1
0x1b78: GlobalVars[0] = Stack[-1]; Pop(1)
0x1b79: Push((int) 50)
0x1b7a: Push((int) 40)
0x1b7b: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1b7c: Pop(2)
0x1b7d: Return(); Pop(0)

