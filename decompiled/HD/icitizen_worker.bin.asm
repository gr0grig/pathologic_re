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
	SetReturnValue
	branch
	GetItemID
	Price
	BarterPrice
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
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
	Received steal
	GetSubContainerCount
	GetItemCount
	GetItem
	HasDurability
	durability
	repair.xml
	money
	SetItem
	Weapon
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	irand (2 args)
	ResetAAS (0 args)
	Sleep (1 args)
	KillTimer (1 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	Sleep (2 args)
	StopGroup0 (0 args)
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
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
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
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	GetVariable (2 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	CreateIntVector (1 args)
	ChooseItem (4 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0xb0f
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x26f Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0xa82 Vars = (object)
		EVENT_6 Op = 0xa90 Vars = ()
		EVENT_22 Op = 0xb09 Vars = (object, int, float, float)
		EVENT_16 Op = 0xb0b Vars = (object, string)
		EVENT_41 Op = 0xb0d Vars = (object)
	GTASK_3 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0xb3a Vars = (object)
		EVENT_17 Op = 0xb4e Vars = (object)
		EVENT_30 Op = 0xb66 Vars = (object, object, bool)
		EVENT_40 Op = 0xb82 Vars = (object)
		EVENT_42 Op = 0xb96 Vars = (object, string)
		EVENT_26 Op = 0xbbb Vars = (string)
		EVENT_1 Op = 0xbc9 Vars = (object)
		EVENT_3 Op = 0xbdf Vars = (object)
		EVENT_7 Op = 0xbe8 Vars = (int)
		EVENT_6 Op = 0xbf4 Vars = ()
		EVENT_41 Op = 0xc08 Vars = (object)
	GTASK_4 Vars = (object) Params = 1
		EVENT_0 Op = 0xc6a Vars = (object)
		EVENT_17 Op = 0xc7e Vars = (object)
		EVENT_30 Op = 0xc96 Vars = (object, object, bool)
		EVENT_40 Op = 0xcb2 Vars = (object)
		EVENT_42 Op = 0xcc6 Vars = (object, string)
		EVENT_26 Op = 0xceb Vars = (string)
		EVENT_41 Op = 0xd04 Vars = (object)
		EVENT_7 Op = 0xd0d Vars = (int)
		EVENT_6 Op = 0xd30 Vars = ()
		EVENT_1 Op = 0xd37 Vars = (object)
	GTASK_5 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_6 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0xfe9 Vars = ()
		EVENT_7 Op = 0x1021 Vars = (int)
		EVENT_1 Op = 0x103c Vars = (object)
		EVENT_2 Op = 0x104b Vars = (object)
		EVENT_10 Op = 0x10d1 Vars = (object)
		EVENT_41 Op = 0x10dc Vars = (object)

Events:
EVENT_16 Op = 0x15d5 Vars = (object, string)
EVENT_41 Op = 0x15e2 Vars = (object)
EVENT_22 Op = 0x15e8 Vars = (object, int, float, float)
EVENT_43 Op = 0x15f0 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1236

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x180e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x180c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1810

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1812

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1468

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
0x41: Call2 0x127b

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
0x4f: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x1383

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x259

0x58: Pop(1)
0x59: Push((int) 543041)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: PushEmpty(bool)
0x5f: Stack[-1] = (bool) 0
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 0
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x13a3

0x65: Pop(1)
0x66: Pop(1); Push((bool) Stack[-1] == 0)
0x67: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x13ad

0x6b: Pop(1)
0x6c: Pop(1); Push((bool) Stack[-1] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 1
0x6f: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x138f

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 1
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: Push((int) 543044)
0x78: Push((int) 45498)
0x79: Push((int) 45496)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: PushEmpty(bool)
0x7d: Stack[-1] = (bool) 1
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 1
0x80: PushEmpty(bool)
0x81: Stack[-1] = (bool) 1
0x82: PushEmpty(bool, object)
0x83: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84: Call2 0x13e9

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x87: PushEmpty(bool, object)
0x88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89: Call2 0x13f3

0x8a: Pop(1)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Stack[-1] = (bool) 0
0x8d: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call2 0x13fd

0x91: Pop(1)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0x1407

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9c: Push((int) 543057)
0x9d: Push((int) 45513)
0x9e: Push((int) 45512)
0x9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0: Pop(3)
0xa1: PushEmpty(bool)
0xa2: Stack[-1] = (bool) 1
0xa3: PushEmpty(bool, object)
0xa4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Call2 0x13d5

0xa6: Pop(1)
0xa7: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa8: PushEmpty(bool, object)
0xa9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Call2 0x13df

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Stack[-1] = (bool) 0
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: Push((int) 543063)
0xb0: Push((int) 45520)
0xb1: Push((int) 45518)
0xb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3: Pop(3)
0xb4: PushEmpty(bool, object)
0xb5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Call2 0x138f

0xb7: Pop(1)
0xb8: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb9: Push((int) 538210)
0xba: Push((int) -1)
0xbb: Push((int) 40087)
0xbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd: Pop(3)
0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call2 0x138f

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: Push((int) 543042)
0xc4: Push((int) -1)
0xc5: Push((int) 45494)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0x138f

0xcb: Pop(1)
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: Push((int) 543043)
0xce: Push((int) -1)
0xcf: Push((int) 45495)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: PushEmpty(bool)
0xd3: Stack[-1] = (bool) 1
0xd4: PushEmpty(bool)
0xd5: Stack[-1] = (bool) 1
0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x13d5

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdb: PushEmpty(bool, object)
0xdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Call2 0x13df

0xde: Pop(1)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Stack[-1] = (bool) 0
0xe1: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x13e9

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: Stack[-1] = (bool) 0
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: Push((int) 543055)
0xea: Push((int) -1)
0xeb: Push((int) 45510)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: PushEmpty(bool)
0xef: Stack[-1] = (bool) 1
0xf0: PushEmpty(bool, object)
0xf1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Call2 0x13d5

0xf3: Pop(1)
0xf4: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf5: PushEmpty(bool, object)
0xf6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Call2 0x13df

0xf8: Pop(1)
0xf9: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xfa: Stack[-1] = (bool) 0
0xfb: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfc: Push((int) 543056)
0xfd: Push((int) -1)
0xfe: Push((int) 45511)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: PushEmpty(bool)
0x102: Stack[-1] = (bool) 1
0x103: PushEmpty(bool)
0x104: Stack[-1] = (bool) 1
0x105: PushEmpty(bool, object)
0x106: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x107: Call2 0x13f3

0x108: Pop(1)
0x109: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10a: PushEmpty(bool, object)
0x10b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Call2 0x13fd

0x10d: Pop(1)
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: Stack[-1] = (bool) 0
0x110: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x111: PushEmpty(bool, object)
0x112: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x113: Call2 0x1407

0x114: Pop(1)
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: Stack[-1] = (bool) 0
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: Push((int) 543062)
0x119: Push((int) -1)
0x11a: Push((int) 45517)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: PushEmpty(bool)
0x11e: Stack[-1] = (bool) 1
0x11f: PushEmpty(bool)
0x120: Stack[-1] = (bool) 1
0x121: PushEmpty(bool)
0x122: Stack[-1] = (bool) 1
0x123: PushEmpty(bool, object)
0x124: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x125: Call2 0x13e9

0x126: Pop(1)
0x127: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x128: PushEmpty(bool, object)
0x129: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12a: Call2 0x13f3

0x12b: Pop(1)
0x12c: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12d: Stack[-1] = (bool) 0
0x12e: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x13fd

0x132: Pop(1)
0x133: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x134: Stack[-1] = (bool) 0
0x135: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138: Call2 0x1407

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13b: Stack[-1] = (bool) 0
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: Push((int) 543064)
0x13e: Push((int) -1)
0x13f: Push((int) 45519)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: GOTO 0x23b

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call2 0x259

0x146: Pop(1)
0x147: Push((int) 538207)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Call2 0x136b

0x14f: Pop(1)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: Push((int) 538208)
0x152: Push((int) -1)
0x153: Push((int) 40085)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0x1377

0x159: Pop(1)
0x15a: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15b: Push((int) 538209)
0x15c: Push((int) -1)
0x15d: Push((int) 40086)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: PushEmpty(bool)
0x161: Stack[-1] = (bool) 0
0x162: PushEmpty(bool, object)
0x163: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x164: Call2 0x136b

0x165: Pop(1)
0x166: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x13a3

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16c: Stack[-1] = (bool) 1
0x16d: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16e: Push((int) 538211)
0x16f: Push((int) 40089)
0x170: Push((int) 40088)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: PushEmpty(bool)
0x174: Stack[-1] = (bool) 0
0x175: PushEmpty(bool, object)
0x176: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x177: Call2 0x136b

0x178: Pop(1)
0x179: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17a: PushEmpty(bool, object)
0x17b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Call2 0x13a3

0x17d: Pop(1)
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Stack[-1] = (bool) 1
0x180: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x181: Push((int) 538222)
0x182: Push((int) 40100)
0x183: Push((int) 40099)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: PushEmpty(bool)
0x187: Stack[-1] = (bool) 0
0x188: PushEmpty(bool, object)
0x189: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18a: Call2 0x136b

0x18b: Pop(1)
0x18c: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18d: PushEmpty(bool, object)
0x18e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18f: Call2 0x13ad

0x190: Pop(1)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: Stack[-1] = (bool) 1
0x193: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x194: Push((int) 538235)
0x195: Push((int) 40114)
0x196: Push((int) 40113)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: PushEmpty(bool)
0x19a: Stack[-1] = (bool) 0
0x19b: PushEmpty(bool, object)
0x19c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Call2 0x136b

0x19e: Pop(1)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a0: PushEmpty(bool, object)
0x1a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a2: Call2 0x13b7

0x1a3: Pop(1)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Stack[-1] = (bool) 1
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a7: Push((int) 538253)
0x1a8: Push((int) 40135)
0x1a9: Push((int) 40134)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: PushEmpty(bool)
0x1ad: Stack[-1] = (bool) 0
0x1ae: PushEmpty(bool, object)
0x1af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b0: Call2 0x136b

0x1b1: Pop(1)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b3: PushEmpty(bool, object)
0x1b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Call2 0x13c1

0x1b6: Pop(1)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = (bool) 1
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: Push((int) 538272)
0x1bb: Push((int) 40155)
0x1bc: Push((int) 40154)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call2 0x13cb

0x1c2: Pop(1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c4: Push((int) 538291)
0x1c5: Push((int) 40174)
0x1c6: Push((int) 40173)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: PushEmpty(bool)
0x1ca: Stack[-1] = (bool) 0
0x1cb: PushEmpty(bool, object)
0x1cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cd: Call2 0x136b

0x1ce: Pop(1)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d0: PushEmpty(bool, object)
0x1d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d2: Call2 0x13d5

0x1d3: Pop(1)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: Stack[-1] = (bool) 1
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: Push((int) 538308)
0x1d8: Push((int) 40192)
0x1d9: Push((int) 40191)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: PushEmpty(bool, object)
0x1dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1de: Call2 0x13df

0x1df: Pop(1)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: Push((int) 538322)
0x1e2: Push((int) 40206)
0x1e3: Push((int) 40205)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: PushEmpty(bool, object)
0x1e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e8: Call2 0x1399

0x1e9: Pop(1)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1eb: Push((int) 538332)
0x1ec: Push((int) 40216)
0x1ed: Push((int) 40215)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: PushEmpty(bool)
0x1f1: Stack[-1] = (bool) 0
0x1f2: PushEmpty(bool, object)
0x1f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Call2 0x136b

0x1f5: Pop(1)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Call2 0x13e9

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: Stack[-1] = (bool) 1
0x1fd: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fe: Push((int) 538347)
0x1ff: Push((int) 40233)
0x200: Push((int) 40232)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: PushEmpty(bool, object)
0x204: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x205: Call2 0x13f3

0x206: Pop(1)
0x207: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x208: Push((int) 538364)
0x209: Push((int) 40250)
0x20a: Push((int) 40249)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: PushEmpty(bool)
0x20e: Stack[-1] = (bool) 0
0x20f: PushEmpty(bool, object)
0x210: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x211: Call2 0x136b

0x212: Pop(1)
0x213: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x216: Call2 0x13fd

0x217: Pop(1)
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: Stack[-1] = (bool) 1
0x21a: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21b: Push((int) 538375)
0x21c: Push((int) 40262)
0x21d: Push((int) 40261)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: PushEmpty(bool)
0x221: Stack[-1] = (bool) 0
0x222: PushEmpty(bool, object)
0x223: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x224: Call2 0x136b

0x225: Pop(1)
0x226: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x229: Call2 0x13fd

0x22a: Pop(1)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Stack[-1] = (bool) 1
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: Push((int) 538385)
0x22f: Push((int) 40272)
0x230: Push((int) 40271)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Push((int) 538396)
0x234: Push((int) -1)
0x235: Push((int) 40282)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: GOTO 0x23b

0x239: Return(); Pop(0)

0x23a: GOTO 0x4e

0x23b: PushEmpty(bool)
0x23c: Call2 0x1814

0x23d: Pop(0)
0x23e: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x23f: @ lshWaitForAnimEnd()
0x240: Pop(0)
0x241: Push( Stack[3 + Tasks[-1].StackPointer] )
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: GOTO 0x249

0x244: PushEmpty(string)
0x245: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x246: Call2 0x128d

0x247: Pop(1)
0x248: GOTO 0x23f

0x249: GOTO 0x258

0x24a: Push("all")
0x24b: Push("idle")
0x24c: @ PlayAnimation(Stack[-2], Stack[-1])
0x24d: Pop(2)
0x24e: @ WaitForAnimEnd()
0x24f: Pop(0)
0x250: Push( Stack[3 + Tasks[-1].StackPointer] )
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: GOTO 0x258

0x253: Push("all")
0x254: Push("idle")
0x255: @ PlayAnimation(Stack[-2], Stack[-1])
0x256: Pop(2)
0x257: GOTO 0x24e

0x258: Return(); Pop(0)

0x259: PushEmpty()
0x25a: PushEmpty(bool)
0x25b: Call2 0x1814

0x25c: Pop(0)
0x25d: Pop(1); Push((bool) Stack[-1] == 0)
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: Return(); Pop(0)

0x260: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: Return(); Pop(0)

0x263: PushEmpty(string, bool)
0x264: Stack[-2] = Stack[-3]
0x265: Push("")
0x266: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x268: Stack[-1] = (bool) 0
0x269: GOTO 0x26b

0x26a: Stack[-1] = (bool) 1
0x26b: Call2 0x129d

0x26c: Pop(2)
0x26d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x26e: Return(); Pop(0)

0x26f: PushEmpty()
0x270: Push((int) 1)
0x271: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0x272: PushEmpty()
0x273: Call2 0x12b7

0x274: Pop(0)
0x275: Push((int) 40087)
0x276: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x278: PushEmpty(object, object)
0x279: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27b: Call2 0x1366

0x27c: Pop(2)
0x27d: Push((int) 45510)
0x27e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x280: PushEmpty(object, object)
0x281: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x282: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x283: Call2 0x1366

0x284: Pop(2)
0x285: Push((int) 45517)
0x286: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x288: PushEmpty(object, object)
0x289: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28b: Call2 0x1366

0x28c: Pop(2)
0x28d: Push((int) 40085)
0x28e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x290: PushEmpty(object, object)
0x291: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x292: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x293: Call2 0x1366

0x294: Pop(2)
0x295: Push((int) 40086)
0x296: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x298: PushEmpty(object, object)
0x299: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29b: Call2 0x1366

0x29c: Pop(2)
0x29d: Push((int) 45493)
0x29e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x2a0: PushEmpty(bool, object)
0x2a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a2: Call2 0x1383

0x2a3: Pop(1)
0x2a4: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Neutral"
0x2a7: Call2 0x259

0x2a8: Pop(1)
0x2a9: Push((int) 543041)
0x2aa: @@ SetMessage(Stack[-1])
0x2ab: Pop(1)
0x2ac: @@ ClearReplies()
0x2ad: Pop(0)
0x2ae: PushEmpty(bool)
0x2af: Stack[-1] = (bool) 0
0x2b0: PushEmpty(bool)
0x2b1: Stack[-1] = (bool) 0
0x2b2: PushEmpty(bool, object)
0x2b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b4: Call2 0x13a3

0x2b5: Pop(1)
0x2b6: Pop(1); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ba: Call2 0x13ad

0x2bb: Pop(1)
0x2bc: Pop(1); Push((bool) Stack[-1] == 0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: Stack[-1] = (bool) 1
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c0: PushEmpty(bool, object)
0x2c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c2: Call2 0x138f

0x2c3: Pop(1)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: Stack[-1] = (bool) 1
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: Push((int) 543044)
0x2c8: Push((int) 45498)
0x2c9: Push((int) 45496)
0x2ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cb: Pop(3)
0x2cc: PushEmpty(bool)
0x2cd: Stack[-1] = (bool) 1
0x2ce: PushEmpty(bool)
0x2cf: Stack[-1] = (bool) 1
0x2d0: PushEmpty(bool)
0x2d1: Stack[-1] = (bool) 1
0x2d2: PushEmpty(bool, object)
0x2d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d4: Call2 0x13e9

0x2d5: Pop(1)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d7: PushEmpty(bool, object)
0x2d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d9: Call2 0x13f3

0x2da: Pop(1)
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: Stack[-1] = (bool) 0
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2de: PushEmpty(bool, object)
0x2df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e0: Call2 0x13fd

0x2e1: Pop(1)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: Stack[-1] = (bool) 0
0x2e4: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e5: PushEmpty(bool, object)
0x2e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e7: Call2 0x1407

0x2e8: Pop(1)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: Stack[-1] = (bool) 0
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ec: Push((int) 543057)
0x2ed: Push((int) 45513)
0x2ee: Push((int) 45512)
0x2ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f0: Pop(3)
0x2f1: PushEmpty(bool)
0x2f2: Stack[-1] = (bool) 1
0x2f3: PushEmpty(bool, object)
0x2f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f5: Call2 0x13d5

0x2f6: Pop(1)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f8: PushEmpty(bool, object)
0x2f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fa: Call2 0x13df

0x2fb: Pop(1)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: Stack[-1] = (bool) 0
0x2fe: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2ff: Push((int) 543063)
0x300: Push((int) 45520)
0x301: Push((int) 45518)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: PushEmpty(bool, object)
0x305: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x306: Call2 0x138f

0x307: Pop(1)
0x308: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x309: Push((int) 538210)
0x30a: Push((int) -1)
0x30b: Push((int) 40087)
0x30c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(3)
0x30e: PushEmpty(bool, object)
0x30f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x310: Call2 0x138f

0x311: Pop(1)
0x312: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x313: Push((int) 543042)
0x314: Push((int) -1)
0x315: Push((int) 45494)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: PushEmpty(bool, object)
0x319: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31a: Call2 0x138f

0x31b: Pop(1)
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: Push((int) 543043)
0x31e: Push((int) -1)
0x31f: Push((int) 45495)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: PushEmpty(bool)
0x323: Stack[-1] = (bool) 1
0x324: PushEmpty(bool)
0x325: Stack[-1] = (bool) 1
0x326: PushEmpty(bool, object)
0x327: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x328: Call2 0x13d5

0x329: Pop(1)
0x32a: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32b: PushEmpty(bool, object)
0x32c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32d: Call2 0x13df

0x32e: Pop(1)
0x32f: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x330: Stack[-1] = (bool) 0
0x331: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x332: PushEmpty(bool, object)
0x333: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x334: Call2 0x13e9

0x335: Pop(1)
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: Stack[-1] = (bool) 0
0x338: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x339: Push((int) 543055)
0x33a: Push((int) -1)
0x33b: Push((int) 45510)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: PushEmpty(bool)
0x33f: Stack[-1] = (bool) 1
0x340: PushEmpty(bool, object)
0x341: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x342: Call2 0x13d5

0x343: Pop(1)
0x344: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x345: PushEmpty(bool, object)
0x346: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x347: Call2 0x13df

0x348: Pop(1)
0x349: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x34a: Stack[-1] = (bool) 0
0x34b: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34c: Push((int) 543056)
0x34d: Push((int) -1)
0x34e: Push((int) 45511)
0x34f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x350: Pop(3)
0x351: PushEmpty(bool)
0x352: Stack[-1] = (bool) 1
0x353: PushEmpty(bool)
0x354: Stack[-1] = (bool) 1
0x355: PushEmpty(bool, object)
0x356: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x357: Call2 0x13f3

0x358: Pop(1)
0x359: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35a: PushEmpty(bool, object)
0x35b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35c: Call2 0x13fd

0x35d: Pop(1)
0x35e: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35f: Stack[-1] = (bool) 0
0x360: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x361: PushEmpty(bool, object)
0x362: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x363: Call2 0x1407

0x364: Pop(1)
0x365: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x366: Stack[-1] = (bool) 0
0x367: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x368: Push((int) 543062)
0x369: Push((int) -1)
0x36a: Push((int) 45517)
0x36b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36c: Pop(3)
0x36d: PushEmpty(bool)
0x36e: Stack[-1] = (bool) 1
0x36f: PushEmpty(bool)
0x370: Stack[-1] = (bool) 1
0x371: PushEmpty(bool)
0x372: Stack[-1] = (bool) 1
0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x375: Call2 0x13e9

0x376: Pop(1)
0x377: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x378: PushEmpty(bool, object)
0x379: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37a: Call2 0x13f3

0x37b: Pop(1)
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: Stack[-1] = (bool) 0
0x37e: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x37f: PushEmpty(bool, object)
0x380: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x381: Call2 0x13fd

0x382: Pop(1)
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: Stack[-1] = (bool) 0
0x385: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x386: PushEmpty(bool, object)
0x387: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x388: Call2 0x1407

0x389: Pop(1)
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: Stack[-1] = (bool) 0
0x38c: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38d: Push((int) 543064)
0x38e: Push((int) -1)
0x38f: Push((int) 45519)
0x390: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x391: Pop(3)
0x392: Return(); Pop(0)

0x393: PushEmpty(string)
0x394: Stack[-1] = "Neutral"
0x395: Call2 0x259

0x396: Pop(1)
0x397: Push((int) 538207)
0x398: @@ SetMessage(Stack[-1])
0x399: Pop(1)
0x39a: @@ ClearReplies()
0x39b: Pop(0)
0x39c: PushEmpty(bool, object)
0x39d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39e: Call2 0x136b

0x39f: Pop(1)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a1: Push((int) 538208)
0x3a2: Push((int) -1)
0x3a3: Push((int) 40085)
0x3a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a5: Pop(3)
0x3a6: PushEmpty(bool, object)
0x3a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a8: Call2 0x1377

0x3a9: Pop(1)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ab: Push((int) 538209)
0x3ac: Push((int) -1)
0x3ad: Push((int) 40086)
0x3ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: PushEmpty(bool)
0x3b1: Stack[-1] = (bool) 0
0x3b2: PushEmpty(bool, object)
0x3b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b4: Call2 0x136b

0x3b5: Pop(1)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b7: PushEmpty(bool, object)
0x3b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b9: Call2 0x13a3

0x3ba: Pop(1)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bc: Stack[-1] = (bool) 1
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3be: Push((int) 538211)
0x3bf: Push((int) 40089)
0x3c0: Push((int) 40088)
0x3c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c2: Pop(3)
0x3c3: PushEmpty(bool)
0x3c4: Stack[-1] = (bool) 0
0x3c5: PushEmpty(bool, object)
0x3c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c7: Call2 0x136b

0x3c8: Pop(1)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ca: PushEmpty(bool, object)
0x3cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cc: Call2 0x13a3

0x3cd: Pop(1)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cf: Stack[-1] = (bool) 1
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d1: Push((int) 538222)
0x3d2: Push((int) 40100)
0x3d3: Push((int) 40099)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: PushEmpty(bool)
0x3d7: Stack[-1] = (bool) 0
0x3d8: PushEmpty(bool, object)
0x3d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3da: Call2 0x136b

0x3db: Pop(1)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3dd: PushEmpty(bool, object)
0x3de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3df: Call2 0x13ad

0x3e0: Pop(1)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: Stack[-1] = (bool) 1
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e4: Push((int) 538235)
0x3e5: Push((int) 40114)
0x3e6: Push((int) 40113)
0x3e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(3)
0x3e9: PushEmpty(bool)
0x3ea: Stack[-1] = (bool) 0
0x3eb: PushEmpty(bool, object)
0x3ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ed: Call2 0x136b

0x3ee: Pop(1)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f0: PushEmpty(bool, object)
0x3f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f2: Call2 0x13b7

0x3f3: Pop(1)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f5: Stack[-1] = (bool) 1
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f7: Push((int) 538253)
0x3f8: Push((int) 40135)
0x3f9: Push((int) 40134)
0x3fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fb: Pop(3)
0x3fc: PushEmpty(bool)
0x3fd: Stack[-1] = (bool) 0
0x3fe: PushEmpty(bool, object)
0x3ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x400: Call2 0x136b

0x401: Pop(1)
0x402: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x403: PushEmpty(bool, object)
0x404: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x405: Call2 0x13c1

0x406: Pop(1)
0x407: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x408: Stack[-1] = (bool) 1
0x409: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40a: Push((int) 538272)
0x40b: Push((int) 40155)
0x40c: Push((int) 40154)
0x40d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40e: Pop(3)
0x40f: PushEmpty(bool, object)
0x410: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x411: Call2 0x13cb

0x412: Pop(1)
0x413: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x414: Push((int) 538291)
0x415: Push((int) 40174)
0x416: Push((int) 40173)
0x417: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x418: Pop(3)
0x419: PushEmpty(bool)
0x41a: Stack[-1] = (bool) 0
0x41b: PushEmpty(bool, object)
0x41c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41d: Call2 0x136b

0x41e: Pop(1)
0x41f: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x420: PushEmpty(bool, object)
0x421: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x422: Call2 0x13d5

0x423: Pop(1)
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: Stack[-1] = (bool) 1
0x426: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x427: Push((int) 538308)
0x428: Push((int) 40192)
0x429: Push((int) 40191)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: PushEmpty(bool, object)
0x42d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42e: Call2 0x13df

0x42f: Pop(1)
0x430: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x431: Push((int) 538322)
0x432: Push((int) 40206)
0x433: Push((int) 40205)
0x434: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x435: Pop(3)
0x436: PushEmpty(bool, object)
0x437: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x438: Call2 0x1399

0x439: Pop(1)
0x43a: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43b: Push((int) 538332)
0x43c: Push((int) 40216)
0x43d: Push((int) 40215)
0x43e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43f: Pop(3)
0x440: PushEmpty(bool)
0x441: Stack[-1] = (bool) 0
0x442: PushEmpty(bool, object)
0x443: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x444: Call2 0x136b

0x445: Pop(1)
0x446: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x447: PushEmpty(bool, object)
0x448: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x449: Call2 0x13e9

0x44a: Pop(1)
0x44b: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44c: Stack[-1] = (bool) 1
0x44d: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x44e: Push((int) 538347)
0x44f: Push((int) 40233)
0x450: Push((int) 40232)
0x451: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(3)
0x453: PushEmpty(bool, object)
0x454: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x455: Call2 0x13f3

0x456: Pop(1)
0x457: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x458: Push((int) 538364)
0x459: Push((int) 40250)
0x45a: Push((int) 40249)
0x45b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45c: Pop(3)
0x45d: PushEmpty(bool)
0x45e: Stack[-1] = (bool) 0
0x45f: PushEmpty(bool, object)
0x460: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x461: Call2 0x136b

0x462: Pop(1)
0x463: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x464: PushEmpty(bool, object)
0x465: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x466: Call2 0x13fd

0x467: Pop(1)
0x468: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x469: Stack[-1] = (bool) 1
0x46a: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46b: Push((int) 538375)
0x46c: Push((int) 40262)
0x46d: Push((int) 40261)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: PushEmpty(bool)
0x471: Stack[-1] = (bool) 0
0x472: PushEmpty(bool, object)
0x473: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x474: Call2 0x136b

0x475: Pop(1)
0x476: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x477: PushEmpty(bool, object)
0x478: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x479: Call2 0x13fd

0x47a: Pop(1)
0x47b: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47c: Stack[-1] = (bool) 1
0x47d: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47e: Push((int) 538385)
0x47f: Push((int) 40272)
0x480: Push((int) 40271)
0x481: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x482: Pop(3)
0x483: Push((int) 538396)
0x484: Push((int) -1)
0x485: Push((int) 40282)
0x486: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x487: Pop(3)
0x488: Return(); Pop(0)

0x489: Push((int) 40272)
0x48a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x48c: PushEmpty(string)
0x48d: Stack[-1] = "Neutral"
0x48e: Call2 0x259

0x48f: Pop(1)
0x490: Push((int) 538386)
0x491: @@ SetMessage(Stack[-1])
0x492: Pop(1)
0x493: @@ ClearReplies()
0x494: Pop(0)
0x495: Push((int) 538387)
0x496: Push((int) 40274)
0x497: Push((int) 40273)
0x498: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x499: Pop(3)
0x49a: Push((int) 538395)
0x49b: Push((int) -1)
0x49c: Push((int) 40281)
0x49d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49e: Pop(3)
0x49f: Return(); Pop(0)

0x4a0: Push((int) 40274)
0x4a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4a3: PushEmpty(string)
0x4a4: Stack[-1] = "Neutral"
0x4a5: Call2 0x259

0x4a6: Pop(1)
0x4a7: Push((int) 538388)
0x4a8: @@ SetMessage(Stack[-1])
0x4a9: Pop(1)
0x4aa: @@ ClearReplies()
0x4ab: Pop(0)
0x4ac: Push((int) 538389)
0x4ad: Push((int) 40276)
0x4ae: Push((int) 40275)
0x4af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b0: Pop(3)
0x4b1: Push((int) 538392)
0x4b2: Push((int) 40279)
0x4b3: Push((int) 40278)
0x4b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b5: Pop(3)
0x4b6: Return(); Pop(0)

0x4b7: Push((int) 40279)
0x4b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4ba: PushEmpty(string)
0x4bb: Stack[-1] = "Neutral"
0x4bc: Call2 0x259

0x4bd: Pop(1)
0x4be: Push((int) 538393)
0x4bf: @@ SetMessage(Stack[-1])
0x4c0: Pop(1)
0x4c1: @@ ClearReplies()
0x4c2: Pop(0)
0x4c3: Push((int) 538394)
0x4c4: Push((int) -1)
0x4c5: Push((int) 40280)
0x4c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c7: Pop(3)
0x4c8: Return(); Pop(0)

0x4c9: Push((int) 40276)
0x4ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4cc: PushEmpty(string)
0x4cd: Stack[-1] = "Neutral"
0x4ce: Call2 0x259

0x4cf: Pop(1)
0x4d0: Push((int) 538390)
0x4d1: @@ SetMessage(Stack[-1])
0x4d2: Pop(1)
0x4d3: @@ ClearReplies()
0x4d4: Pop(0)
0x4d5: Push((int) 538391)
0x4d6: Push((int) -1)
0x4d7: Push((int) 40277)
0x4d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d9: Pop(3)
0x4da: Return(); Pop(0)

0x4db: Push((int) 40262)
0x4dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4de: PushEmpty(string)
0x4df: Stack[-1] = "Neutral"
0x4e0: Call2 0x259

0x4e1: Pop(1)
0x4e2: Push((int) 538376)
0x4e3: @@ SetMessage(Stack[-1])
0x4e4: Pop(1)
0x4e5: @@ ClearReplies()
0x4e6: Pop(0)
0x4e7: Push((int) 538377)
0x4e8: Push((int) 40264)
0x4e9: Push((int) 40263)
0x4ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4eb: Pop(3)
0x4ec: Push((int) 538384)
0x4ed: Push((int) -1)
0x4ee: Push((int) 40270)
0x4ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f0: Pop(3)
0x4f1: Return(); Pop(0)

0x4f2: Push((int) 40264)
0x4f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f4: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x4f5: PushEmpty(string)
0x4f6: Stack[-1] = "Neutral"
0x4f7: Call2 0x259

0x4f8: Pop(1)
0x4f9: Push((int) 538378)
0x4fa: @@ SetMessage(Stack[-1])
0x4fb: Pop(1)
0x4fc: @@ ClearReplies()
0x4fd: Pop(0)
0x4fe: Push((int) 538379)
0x4ff: Push((int) 40266)
0x500: Push((int) 40265)
0x501: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x502: Pop(3)
0x503: Push((int) 538383)
0x504: Push((int) -1)
0x505: Push((int) 40269)
0x506: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x507: Pop(3)
0x508: Return(); Pop(0)

0x509: Push((int) 40266)
0x50a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50b: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x50c: PushEmpty(string)
0x50d: Stack[-1] = "Neutral"
0x50e: Call2 0x259

0x50f: Pop(1)
0x510: Push((int) 538380)
0x511: @@ SetMessage(Stack[-1])
0x512: Pop(1)
0x513: @@ ClearReplies()
0x514: Pop(0)
0x515: Push((int) 538381)
0x516: Push((int) -1)
0x517: Push((int) 40267)
0x518: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x519: Pop(3)
0x51a: Push((int) 538382)
0x51b: Push((int) -1)
0x51c: Push((int) 40268)
0x51d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51e: Pop(3)
0x51f: Return(); Pop(0)

0x520: Push((int) 40250)
0x521: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x523: PushEmpty(string)
0x524: Stack[-1] = "Neutral"
0x525: Call2 0x259

0x526: Pop(1)
0x527: Push((int) 538365)
0x528: @@ SetMessage(Stack[-1])
0x529: Pop(1)
0x52a: @@ ClearReplies()
0x52b: Pop(0)
0x52c: Push((int) 538366)
0x52d: Push((int) 40252)
0x52e: Push((int) 40251)
0x52f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x530: Pop(3)
0x531: Push((int) 538370)
0x532: Push((int) 40256)
0x533: Push((int) 40255)
0x534: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x535: Pop(3)
0x536: Push((int) 538374)
0x537: Push((int) -1)
0x538: Push((int) 40260)
0x539: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53a: Pop(3)
0x53b: Return(); Pop(0)

0x53c: Push((int) 40256)
0x53d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x53f: PushEmpty(string)
0x540: Stack[-1] = "Neutral"
0x541: Call2 0x259

0x542: Pop(1)
0x543: Push((int) 538371)
0x544: @@ SetMessage(Stack[-1])
0x545: Pop(1)
0x546: @@ ClearReplies()
0x547: Pop(0)
0x548: Push((int) 538372)
0x549: Push((int) 40252)
0x54a: Push((int) 40257)
0x54b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54c: Pop(3)
0x54d: Push((int) 538373)
0x54e: Push((int) -1)
0x54f: Push((int) 40259)
0x550: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x551: Pop(3)
0x552: Return(); Pop(0)

0x553: Push((int) 40252)
0x554: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x555: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x556: PushEmpty(string)
0x557: Stack[-1] = "Neutral"
0x558: Call2 0x259

0x559: Pop(1)
0x55a: Push((int) 538367)
0x55b: @@ SetMessage(Stack[-1])
0x55c: Pop(1)
0x55d: @@ ClearReplies()
0x55e: Pop(0)
0x55f: Push((int) 538368)
0x560: Push((int) -1)
0x561: Push((int) 40253)
0x562: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x563: Pop(3)
0x564: Push((int) 538369)
0x565: Push((int) -1)
0x566: Push((int) 40254)
0x567: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x568: Pop(3)
0x569: Return(); Pop(0)

0x56a: Push((int) 40233)
0x56b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x56d: PushEmpty(string)
0x56e: Stack[-1] = "Neutral"
0x56f: Call2 0x259

0x570: Pop(1)
0x571: Push((int) 538348)
0x572: @@ SetMessage(Stack[-1])
0x573: Pop(1)
0x574: @@ ClearReplies()
0x575: Pop(0)
0x576: Push((int) 538349)
0x577: Push((int) 40235)
0x578: Push((int) 40234)
0x579: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57a: Pop(3)
0x57b: Push((int) 538363)
0x57c: Push((int) -1)
0x57d: Push((int) 40248)
0x57e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57f: Pop(3)
0x580: Return(); Pop(0)

0x581: Push((int) 40235)
0x582: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x583: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x584: PushEmpty(string)
0x585: Stack[-1] = "Neutral"
0x586: Call2 0x259

0x587: Pop(1)
0x588: Push((int) 538350)
0x589: @@ SetMessage(Stack[-1])
0x58a: Pop(1)
0x58b: @@ ClearReplies()
0x58c: Pop(0)
0x58d: Push((int) 538351)
0x58e: Push((int) 40237)
0x58f: Push((int) 40236)
0x590: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x591: Pop(3)
0x592: Push((int) 538362)
0x593: Push((int) -1)
0x594: Push((int) 40247)
0x595: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x596: Pop(3)
0x597: Return(); Pop(0)

0x598: Push((int) 40237)
0x599: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59a: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x59b: PushEmpty(string)
0x59c: Stack[-1] = "Neutral"
0x59d: Call2 0x259

0x59e: Pop(1)
0x59f: Push((int) 538352)
0x5a0: @@ SetMessage(Stack[-1])
0x5a1: Pop(1)
0x5a2: @@ ClearReplies()
0x5a3: Pop(0)
0x5a4: Push((int) 538353)
0x5a5: Push((int) 40239)
0x5a6: Push((int) 40238)
0x5a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a8: Pop(3)
0x5a9: Push((int) 538359)
0x5aa: Push((int) 40245)
0x5ab: Push((int) 40244)
0x5ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ad: Pop(3)
0x5ae: Return(); Pop(0)

0x5af: Push((int) 40245)
0x5b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5b2: PushEmpty(string)
0x5b3: Stack[-1] = "Neutral"
0x5b4: Call2 0x259

0x5b5: Pop(1)
0x5b6: Push((int) 538360)
0x5b7: @@ SetMessage(Stack[-1])
0x5b8: Pop(1)
0x5b9: @@ ClearReplies()
0x5ba: Pop(0)
0x5bb: Push((int) 538361)
0x5bc: Push((int) -1)
0x5bd: Push((int) 40246)
0x5be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: Return(); Pop(0)

0x5c1: Push((int) 40239)
0x5c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5c4: PushEmpty(string)
0x5c5: Stack[-1] = "Neutral"
0x5c6: Call2 0x259

0x5c7: Pop(1)
0x5c8: Push((int) 538354)
0x5c9: @@ SetMessage(Stack[-1])
0x5ca: Pop(1)
0x5cb: @@ ClearReplies()
0x5cc: Pop(0)
0x5cd: Push((int) 538355)
0x5ce: Push((int) -1)
0x5cf: Push((int) 40240)
0x5d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d1: Pop(3)
0x5d2: Push((int) 538356)
0x5d3: Push((int) 40242)
0x5d4: Push((int) 40241)
0x5d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d6: Pop(3)
0x5d7: Return(); Pop(0)

0x5d8: Push((int) 40242)
0x5d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5db: PushEmpty(string)
0x5dc: Stack[-1] = "Neutral"
0x5dd: Call2 0x259

0x5de: Pop(1)
0x5df: Push((int) 538357)
0x5e0: @@ SetMessage(Stack[-1])
0x5e1: Pop(1)
0x5e2: @@ ClearReplies()
0x5e3: Pop(0)
0x5e4: Push((int) 538358)
0x5e5: Push((int) -1)
0x5e6: Push((int) 40243)
0x5e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e8: Pop(3)
0x5e9: Return(); Pop(0)

0x5ea: Push((int) 40216)
0x5eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5ed: PushEmpty(string)
0x5ee: Stack[-1] = "Neutral"
0x5ef: Call2 0x259

0x5f0: Pop(1)
0x5f1: Push((int) 538333)
0x5f2: @@ SetMessage(Stack[-1])
0x5f3: Pop(1)
0x5f4: @@ ClearReplies()
0x5f5: Pop(0)
0x5f6: Push((int) 538334)
0x5f7: Push((int) 40218)
0x5f8: Push((int) 40217)
0x5f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fa: Pop(3)
0x5fb: Push((int) 538346)
0x5fc: Push((int) -1)
0x5fd: Push((int) 40231)
0x5fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ff: Pop(3)
0x600: Return(); Pop(0)

0x601: Push((int) 40218)
0x602: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x603: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x604: PushEmpty(string)
0x605: Stack[-1] = "Neutral"
0x606: Call2 0x259

0x607: Pop(1)
0x608: Push((int) 538335)
0x609: @@ SetMessage(Stack[-1])
0x60a: Pop(1)
0x60b: @@ ClearReplies()
0x60c: Pop(0)
0x60d: Push((int) 538336)
0x60e: Push((int) 40220)
0x60f: Push((int) 40219)
0x610: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x611: Pop(3)
0x612: Push((int) 538343)
0x613: Push((int) 40228)
0x614: Push((int) 40227)
0x615: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x616: Pop(3)
0x617: Return(); Pop(0)

0x618: Push((int) 40228)
0x619: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x61b: PushEmpty(string)
0x61c: Stack[-1] = "Neutral"
0x61d: Call2 0x259

0x61e: Pop(1)
0x61f: Push((int) 538344)
0x620: @@ SetMessage(Stack[-1])
0x621: Pop(1)
0x622: @@ ClearReplies()
0x623: Pop(0)
0x624: Push((int) 538345)
0x625: Push((int) 40220)
0x626: Push((int) 40229)
0x627: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x628: Pop(3)
0x629: Return(); Pop(0)

0x62a: Push((int) 40220)
0x62b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62c: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x62d: PushEmpty(string)
0x62e: Stack[-1] = "Neutral"
0x62f: Call2 0x259

0x630: Pop(1)
0x631: Push((int) 538337)
0x632: @@ SetMessage(Stack[-1])
0x633: Pop(1)
0x634: @@ ClearReplies()
0x635: Pop(0)
0x636: Push((int) 538338)
0x637: Push((int) 40222)
0x638: Push((int) 40221)
0x639: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63a: Pop(3)
0x63b: Push((int) 538342)
0x63c: Push((int) 40222)
0x63d: Push((int) 40225)
0x63e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63f: Pop(3)
0x640: Return(); Pop(0)

0x641: Push((int) 40222)
0x642: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x644: PushEmpty(string)
0x645: Stack[-1] = "Neutral"
0x646: Call2 0x259

0x647: Pop(1)
0x648: Push((int) 538339)
0x649: @@ SetMessage(Stack[-1])
0x64a: Pop(1)
0x64b: @@ ClearReplies()
0x64c: Pop(0)
0x64d: Push((int) 538340)
0x64e: Push((int) -1)
0x64f: Push((int) 40223)
0x650: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x651: Pop(3)
0x652: Push((int) 538341)
0x653: Push((int) -1)
0x654: Push((int) 40224)
0x655: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x656: Pop(3)
0x657: Return(); Pop(0)

0x658: Push((int) 40206)
0x659: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65a: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x65b: PushEmpty(string)
0x65c: Stack[-1] = "Neutral"
0x65d: Call2 0x259

0x65e: Pop(1)
0x65f: Push((int) 538323)
0x660: @@ SetMessage(Stack[-1])
0x661: Pop(1)
0x662: @@ ClearReplies()
0x663: Pop(0)
0x664: Push((int) 538324)
0x665: Push((int) 40208)
0x666: Push((int) 40207)
0x667: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x668: Pop(3)
0x669: Push((int) 538331)
0x66a: Push((int) -1)
0x66b: Push((int) 40214)
0x66c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66d: Pop(3)
0x66e: Return(); Pop(0)

0x66f: Push((int) 40208)
0x670: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x672: PushEmpty(string)
0x673: Stack[-1] = "Neutral"
0x674: Call2 0x259

0x675: Pop(1)
0x676: Push((int) 538325)
0x677: @@ SetMessage(Stack[-1])
0x678: Pop(1)
0x679: @@ ClearReplies()
0x67a: Pop(0)
0x67b: Push((int) 538326)
0x67c: Push((int) 40210)
0x67d: Push((int) 40209)
0x67e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67f: Pop(3)
0x680: Push((int) 538330)
0x681: Push((int) -1)
0x682: Push((int) 40213)
0x683: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x684: Pop(3)
0x685: Return(); Pop(0)

0x686: Push((int) 40210)
0x687: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x689: PushEmpty(string)
0x68a: Stack[-1] = "Neutral"
0x68b: Call2 0x259

0x68c: Pop(1)
0x68d: Push((int) 538327)
0x68e: @@ SetMessage(Stack[-1])
0x68f: Pop(1)
0x690: @@ ClearReplies()
0x691: Pop(0)
0x692: Push((int) 538328)
0x693: Push((int) -1)
0x694: Push((int) 40211)
0x695: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x696: Pop(3)
0x697: Push((int) 538329)
0x698: Push((int) -1)
0x699: Push((int) 40212)
0x69a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69b: Pop(3)
0x69c: Return(); Pop(0)

0x69d: Push((int) 40192)
0x69e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69f: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6a0: PushEmpty(string)
0x6a1: Stack[-1] = "Neutral"
0x6a2: Call2 0x259

0x6a3: Pop(1)
0x6a4: Push((int) 538309)
0x6a5: @@ SetMessage(Stack[-1])
0x6a6: Pop(1)
0x6a7: @@ ClearReplies()
0x6a8: Pop(0)
0x6a9: Push((int) 538310)
0x6aa: Push((int) 40194)
0x6ab: Push((int) 40193)
0x6ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ad: Pop(3)
0x6ae: Return(); Pop(0)

0x6af: Push((int) 40194)
0x6b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b1: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6b2: PushEmpty(string)
0x6b3: Stack[-1] = "Neutral"
0x6b4: Call2 0x259

0x6b5: Pop(1)
0x6b6: Push((int) 538311)
0x6b7: @@ SetMessage(Stack[-1])
0x6b8: Pop(1)
0x6b9: @@ ClearReplies()
0x6ba: Pop(0)
0x6bb: Push((int) 538312)
0x6bc: Push((int) 40196)
0x6bd: Push((int) 40195)
0x6be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bf: Pop(3)
0x6c0: Push((int) 538316)
0x6c1: Push((int) 40200)
0x6c2: Push((int) 40199)
0x6c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c4: Pop(3)
0x6c5: Return(); Pop(0)

0x6c6: Push((int) 40200)
0x6c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6c9: PushEmpty(string)
0x6ca: Stack[-1] = "Neutral"
0x6cb: Call2 0x259

0x6cc: Pop(1)
0x6cd: Push((int) 538317)
0x6ce: @@ SetMessage(Stack[-1])
0x6cf: Pop(1)
0x6d0: @@ ClearReplies()
0x6d1: Pop(0)
0x6d2: Push((int) 538318)
0x6d3: Push((int) 40202)
0x6d4: Push((int) 40201)
0x6d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d6: Pop(3)
0x6d7: Return(); Pop(0)

0x6d8: Push((int) 40202)
0x6d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6da: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6db: PushEmpty(string)
0x6dc: Stack[-1] = "Neutral"
0x6dd: Call2 0x259

0x6de: Pop(1)
0x6df: Push((int) 538319)
0x6e0: @@ SetMessage(Stack[-1])
0x6e1: Pop(1)
0x6e2: @@ ClearReplies()
0x6e3: Pop(0)
0x6e4: Push((int) 538320)
0x6e5: Push((int) -1)
0x6e6: Push((int) 40203)
0x6e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e8: Pop(3)
0x6e9: Push((int) 538321)
0x6ea: Push((int) -1)
0x6eb: Push((int) 40204)
0x6ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ed: Pop(3)
0x6ee: Return(); Pop(0)

0x6ef: Push((int) 40196)
0x6f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x6f2: PushEmpty(string)
0x6f3: Stack[-1] = "Neutral"
0x6f4: Call2 0x259

0x6f5: Pop(1)
0x6f6: Push((int) 538313)
0x6f7: @@ SetMessage(Stack[-1])
0x6f8: Pop(1)
0x6f9: @@ ClearReplies()
0x6fa: Pop(0)
0x6fb: Push((int) 538314)
0x6fc: Push((int) -1)
0x6fd: Push((int) 40197)
0x6fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ff: Pop(3)
0x700: Push((int) 538315)
0x701: Push((int) -1)
0x702: Push((int) 40198)
0x703: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x704: Pop(3)
0x705: Return(); Pop(0)

0x706: Push((int) 40174)
0x707: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x708: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x709: PushEmpty(string)
0x70a: Stack[-1] = "Neutral"
0x70b: Call2 0x259

0x70c: Pop(1)
0x70d: Push((int) 538292)
0x70e: @@ SetMessage(Stack[-1])
0x70f: Pop(1)
0x710: @@ ClearReplies()
0x711: Pop(0)
0x712: Push((int) 538293)
0x713: Push((int) 40176)
0x714: Push((int) 40175)
0x715: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x716: Pop(3)
0x717: Push((int) 538302)
0x718: Push((int) 40186)
0x719: Push((int) 40185)
0x71a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71b: Pop(3)
0x71c: Return(); Pop(0)

0x71d: Push((int) 40186)
0x71e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71f: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x720: PushEmpty(string)
0x721: Stack[-1] = "Neutral"
0x722: Call2 0x259

0x723: Pop(1)
0x724: Push((int) 538303)
0x725: @@ SetMessage(Stack[-1])
0x726: Pop(1)
0x727: @@ ClearReplies()
0x728: Pop(0)
0x729: Push((int) 538304)
0x72a: Push((int) 40188)
0x72b: Push((int) 40187)
0x72c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(3)
0x72e: Return(); Pop(0)

0x72f: Push((int) 40188)
0x730: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x732: PushEmpty(string)
0x733: Stack[-1] = "Neutral"
0x734: Call2 0x259

0x735: Pop(1)
0x736: Push((int) 538305)
0x737: @@ SetMessage(Stack[-1])
0x738: Pop(1)
0x739: @@ ClearReplies()
0x73a: Pop(0)
0x73b: Push((int) 538306)
0x73c: Push((int) -1)
0x73d: Push((int) 40189)
0x73e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73f: Pop(3)
0x740: Push((int) 538307)
0x741: Push((int) -1)
0x742: Push((int) 40190)
0x743: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x744: Pop(3)
0x745: Return(); Pop(0)

0x746: Push((int) 40176)
0x747: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x748: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x749: PushEmpty(string)
0x74a: Stack[-1] = "Neutral"
0x74b: Call2 0x259

0x74c: Pop(1)
0x74d: Push((int) 538294)
0x74e: @@ SetMessage(Stack[-1])
0x74f: Pop(1)
0x750: @@ ClearReplies()
0x751: Pop(0)
0x752: Push((int) 538295)
0x753: Push((int) 40178)
0x754: Push((int) 40177)
0x755: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x756: Pop(3)
0x757: Push((int) 538299)
0x758: Push((int) 40182)
0x759: Push((int) 40181)
0x75a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75b: Pop(3)
0x75c: Return(); Pop(0)

0x75d: Push((int) 40182)
0x75e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75f: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x760: PushEmpty(string)
0x761: Stack[-1] = "Neutral"
0x762: Call2 0x259

0x763: Pop(1)
0x764: Push((int) 538300)
0x765: @@ SetMessage(Stack[-1])
0x766: Pop(1)
0x767: @@ ClearReplies()
0x768: Pop(0)
0x769: Push((int) 538301)
0x76a: Push((int) 40178)
0x76b: Push((int) 40183)
0x76c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76d: Pop(3)
0x76e: Return(); Pop(0)

0x76f: Push((int) 40178)
0x770: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x772: PushEmpty(string)
0x773: Stack[-1] = "Neutral"
0x774: Call2 0x259

0x775: Pop(1)
0x776: Push((int) 538296)
0x777: @@ SetMessage(Stack[-1])
0x778: Pop(1)
0x779: @@ ClearReplies()
0x77a: Pop(0)
0x77b: Push((int) 538297)
0x77c: Push((int) -1)
0x77d: Push((int) 40179)
0x77e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(3)
0x780: PushEmpty(bool, object)
0x781: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x782: Call2 0x136b

0x783: Pop(1)
0x784: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x785: Push((int) 538298)
0x786: Push((int) -1)
0x787: Push((int) 40180)
0x788: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x789: Pop(3)
0x78a: Return(); Pop(0)

0x78b: Push((int) 40155)
0x78c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78d: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x78e: PushEmpty(string)
0x78f: Stack[-1] = "Neutral"
0x790: Call2 0x259

0x791: Pop(1)
0x792: Push((int) 538273)
0x793: @@ SetMessage(Stack[-1])
0x794: Pop(1)
0x795: @@ ClearReplies()
0x796: Pop(0)
0x797: Push((int) 538274)
0x798: Push((int) 40157)
0x799: Push((int) 40156)
0x79a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79b: Pop(3)
0x79c: Push((int) 538289)
0x79d: Push((int) -1)
0x79e: Push((int) 40171)
0x79f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a0: Pop(3)
0x7a1: Push((int) 538290)
0x7a2: Push((int) -1)
0x7a3: Push((int) 40172)
0x7a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a5: Pop(3)
0x7a6: Return(); Pop(0)

0x7a7: Push((int) 40157)
0x7a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a9: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7aa: PushEmpty(string)
0x7ab: Stack[-1] = "Neutral"
0x7ac: Call2 0x259

0x7ad: Pop(1)
0x7ae: Push((int) 538275)
0x7af: @@ SetMessage(Stack[-1])
0x7b0: Pop(1)
0x7b1: @@ ClearReplies()
0x7b2: Pop(0)
0x7b3: Push((int) 538276)
0x7b4: Push((int) 40159)
0x7b5: Push((int) 40158)
0x7b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b7: Pop(3)
0x7b8: Push((int) 538288)
0x7b9: Push((int) -1)
0x7ba: Push((int) 40170)
0x7bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bc: Pop(3)
0x7bd: Return(); Pop(0)

0x7be: Push((int) 40159)
0x7bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7c1: PushEmpty(string)
0x7c2: Stack[-1] = "Neutral"
0x7c3: Call2 0x259

0x7c4: Pop(1)
0x7c5: Push((int) 538277)
0x7c6: @@ SetMessage(Stack[-1])
0x7c7: Pop(1)
0x7c8: @@ ClearReplies()
0x7c9: Pop(0)
0x7ca: Push((int) 538278)
0x7cb: Push((int) 40161)
0x7cc: Push((int) 40160)
0x7cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ce: Pop(3)
0x7cf: Return(); Pop(0)

0x7d0: Push((int) 40161)
0x7d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d2: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7d3: PushEmpty(string)
0x7d4: Stack[-1] = "Neutral"
0x7d5: Call2 0x259

0x7d6: Pop(1)
0x7d7: Push((int) 538279)
0x7d8: @@ SetMessage(Stack[-1])
0x7d9: Pop(1)
0x7da: @@ ClearReplies()
0x7db: Pop(0)
0x7dc: Push((int) 538280)
0x7dd: Push((int) 40163)
0x7de: Push((int) 40162)
0x7df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e0: Pop(3)
0x7e1: Push((int) 538284)
0x7e2: Push((int) 40167)
0x7e3: Push((int) 40166)
0x7e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e5: Pop(3)
0x7e6: Return(); Pop(0)

0x7e7: Push((int) 40167)
0x7e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e9: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7ea: PushEmpty(string)
0x7eb: Stack[-1] = "Neutral"
0x7ec: Call2 0x259

0x7ed: Pop(1)
0x7ee: Push((int) 538285)
0x7ef: @@ SetMessage(Stack[-1])
0x7f0: Pop(1)
0x7f1: @@ ClearReplies()
0x7f2: Pop(0)
0x7f3: Push((int) 538286)
0x7f4: Push((int) -1)
0x7f5: Push((int) 40168)
0x7f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f7: Pop(3)
0x7f8: Push((int) 538287)
0x7f9: Push((int) -1)
0x7fa: Push((int) 40169)
0x7fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fc: Pop(3)
0x7fd: Return(); Pop(0)

0x7fe: Push((int) 40163)
0x7ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x800: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x801: PushEmpty(string)
0x802: Stack[-1] = "Neutral"
0x803: Call2 0x259

0x804: Pop(1)
0x805: Push((int) 538281)
0x806: @@ SetMessage(Stack[-1])
0x807: Pop(1)
0x808: @@ ClearReplies()
0x809: Pop(0)
0x80a: Push((int) 538282)
0x80b: Push((int) -1)
0x80c: Push((int) 40164)
0x80d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80e: Pop(3)
0x80f: Push((int) 538283)
0x810: Push((int) -1)
0x811: Push((int) 40165)
0x812: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x813: Pop(3)
0x814: Return(); Pop(0)

0x815: Push((int) 40135)
0x816: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x817: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x818: PushEmpty(string)
0x819: Stack[-1] = "Neutral"
0x81a: Call2 0x259

0x81b: Pop(1)
0x81c: Push((int) 538254)
0x81d: @@ SetMessage(Stack[-1])
0x81e: Pop(1)
0x81f: @@ ClearReplies()
0x820: Pop(0)
0x821: Push((int) 538255)
0x822: Push((int) 40137)
0x823: Push((int) 40136)
0x824: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x825: Pop(3)
0x826: Push((int) 538271)
0x827: Push((int) -1)
0x828: Push((int) 40153)
0x829: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82a: Pop(3)
0x82b: Return(); Pop(0)

0x82c: Push((int) 40137)
0x82d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x82f: PushEmpty(string)
0x830: Stack[-1] = "Neutral"
0x831: Call2 0x259

0x832: Pop(1)
0x833: Push((int) 538256)
0x834: @@ SetMessage(Stack[-1])
0x835: Pop(1)
0x836: @@ ClearReplies()
0x837: Pop(0)
0x838: Push((int) 538257)
0x839: Push((int) 40139)
0x83a: Push((int) 40138)
0x83b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83c: Pop(3)
0x83d: Push((int) 538269)
0x83e: Push((int) 40139)
0x83f: Push((int) 40150)
0x840: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x841: Pop(3)
0x842: Push((int) 538270)
0x843: Push((int) -1)
0x844: Push((int) 40152)
0x845: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x846: Pop(3)
0x847: Return(); Pop(0)

0x848: Push((int) 40139)
0x849: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84a: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x84b: PushEmpty(string)
0x84c: Stack[-1] = "Neutral"
0x84d: Call2 0x259

0x84e: Pop(1)
0x84f: Push((int) 538258)
0x850: @@ SetMessage(Stack[-1])
0x851: Pop(1)
0x852: @@ ClearReplies()
0x853: Pop(0)
0x854: Push((int) 538259)
0x855: Push((int) 40141)
0x856: Push((int) 40140)
0x857: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x858: Pop(3)
0x859: Return(); Pop(0)

0x85a: Push((int) 40141)
0x85b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85c: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x85d: PushEmpty(string)
0x85e: Stack[-1] = "Neutral"
0x85f: Call2 0x259

0x860: Pop(1)
0x861: Push((int) 538260)
0x862: @@ SetMessage(Stack[-1])
0x863: Pop(1)
0x864: @@ ClearReplies()
0x865: Pop(0)
0x866: Push((int) 538261)
0x867: Push((int) 40143)
0x868: Push((int) 40142)
0x869: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86a: Pop(3)
0x86b: Push((int) 538265)
0x86c: Push((int) 40147)
0x86d: Push((int) 40146)
0x86e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86f: Pop(3)
0x870: Return(); Pop(0)

0x871: Push((int) 40147)
0x872: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x874: PushEmpty(string)
0x875: Stack[-1] = "Neutral"
0x876: Call2 0x259

0x877: Pop(1)
0x878: Push((int) 538266)
0x879: @@ SetMessage(Stack[-1])
0x87a: Pop(1)
0x87b: @@ ClearReplies()
0x87c: Pop(0)
0x87d: Push((int) 538267)
0x87e: Push((int) -1)
0x87f: Push((int) 40148)
0x880: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x881: Pop(3)
0x882: Push((int) 538268)
0x883: Push((int) -1)
0x884: Push((int) 40149)
0x885: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x886: Pop(3)
0x887: Return(); Pop(0)

0x888: Push((int) 40143)
0x889: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x88a: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x88b: PushEmpty(string)
0x88c: Stack[-1] = "Neutral"
0x88d: Call2 0x259

0x88e: Pop(1)
0x88f: Push((int) 538262)
0x890: @@ SetMessage(Stack[-1])
0x891: Pop(1)
0x892: @@ ClearReplies()
0x893: Pop(0)
0x894: Push((int) 538263)
0x895: Push((int) -1)
0x896: Push((int) 40144)
0x897: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x898: Pop(3)
0x899: Push((int) 538264)
0x89a: Push((int) -1)
0x89b: Push((int) 40145)
0x89c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89d: Pop(3)
0x89e: Return(); Pop(0)

0x89f: Push((int) 40114)
0x8a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a1: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8a2: PushEmpty(string)
0x8a3: Stack[-1] = "Neutral"
0x8a4: Call2 0x259

0x8a5: Pop(1)
0x8a6: Push((int) 538236)
0x8a7: @@ SetMessage(Stack[-1])
0x8a8: Pop(1)
0x8a9: @@ ClearReplies()
0x8aa: Pop(0)
0x8ab: Push((int) 538237)
0x8ac: Push((int) 40116)
0x8ad: Push((int) 40115)
0x8ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8af: Pop(3)
0x8b0: Push((int) 538252)
0x8b1: Push((int) -1)
0x8b2: Push((int) 40133)
0x8b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b4: Pop(3)
0x8b5: Return(); Pop(0)

0x8b6: Push((int) 40116)
0x8b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8b9: PushEmpty(string)
0x8ba: Stack[-1] = "Neutral"
0x8bb: Call2 0x259

0x8bc: Pop(1)
0x8bd: Push((int) 538238)
0x8be: @@ SetMessage(Stack[-1])
0x8bf: Pop(1)
0x8c0: @@ ClearReplies()
0x8c1: Pop(0)
0x8c2: Push((int) 538239)
0x8c3: Push((int) 40118)
0x8c4: Push((int) 40117)
0x8c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c6: Pop(3)
0x8c7: Push((int) 538251)
0x8c8: Push((int) 40120)
0x8c9: Push((int) 40131)
0x8ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cb: Pop(3)
0x8cc: Return(); Pop(0)

0x8cd: Push((int) 40118)
0x8ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8cf: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8d0: PushEmpty(string)
0x8d1: Stack[-1] = "Neutral"
0x8d2: Call2 0x259

0x8d3: Pop(1)
0x8d4: Push((int) 538240)
0x8d5: @@ SetMessage(Stack[-1])
0x8d6: Pop(1)
0x8d7: @@ ClearReplies()
0x8d8: Pop(0)
0x8d9: Push((int) 538241)
0x8da: Push((int) 40120)
0x8db: Push((int) 40119)
0x8dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8dd: Pop(3)
0x8de: Push((int) 538250)
0x8df: Push((int) 40120)
0x8e0: Push((int) 40129)
0x8e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e2: Pop(3)
0x8e3: Return(); Pop(0)

0x8e4: Push((int) 40120)
0x8e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e6: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8e7: PushEmpty(string)
0x8e8: Stack[-1] = "Neutral"
0x8e9: Call2 0x259

0x8ea: Pop(1)
0x8eb: Push((int) 538242)
0x8ec: @@ SetMessage(Stack[-1])
0x8ed: Pop(1)
0x8ee: @@ ClearReplies()
0x8ef: Pop(0)
0x8f0: Push((int) 538243)
0x8f1: Push((int) 40122)
0x8f2: Push((int) 40121)
0x8f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f4: Pop(3)
0x8f5: Push((int) 538249)
0x8f6: Push((int) 40124)
0x8f7: Push((int) 40127)
0x8f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f9: Pop(3)
0x8fa: Return(); Pop(0)

0x8fb: Push((int) 40122)
0x8fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8fd: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x8fe: PushEmpty(string)
0x8ff: Stack[-1] = "Neutral"
0x900: Call2 0x259

0x901: Pop(1)
0x902: Push((int) 538244)
0x903: @@ SetMessage(Stack[-1])
0x904: Pop(1)
0x905: @@ ClearReplies()
0x906: Pop(0)
0x907: Push((int) 538245)
0x908: Push((int) 40124)
0x909: Push((int) 40123)
0x90a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90b: Pop(3)
0x90c: Return(); Pop(0)

0x90d: Push((int) 40124)
0x90e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90f: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x910: PushEmpty(string)
0x911: Stack[-1] = "Neutral"
0x912: Call2 0x259

0x913: Pop(1)
0x914: Push((int) 538246)
0x915: @@ SetMessage(Stack[-1])
0x916: Pop(1)
0x917: @@ ClearReplies()
0x918: Pop(0)
0x919: Push((int) 538247)
0x91a: Push((int) -1)
0x91b: Push((int) 40125)
0x91c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91d: Pop(3)
0x91e: Push((int) 538248)
0x91f: Push((int) -1)
0x920: Push((int) 40126)
0x921: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x922: Pop(3)
0x923: Return(); Pop(0)

0x924: Push((int) 40100)
0x925: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x926: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x927: PushEmpty(string)
0x928: Stack[-1] = "Neutral"
0x929: Call2 0x259

0x92a: Pop(1)
0x92b: Push((int) 538223)
0x92c: @@ SetMessage(Stack[-1])
0x92d: Pop(1)
0x92e: @@ ClearReplies()
0x92f: Pop(0)
0x930: Push((int) 538224)
0x931: Push((int) 40102)
0x932: Push((int) 40101)
0x933: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x934: Pop(3)
0x935: Push((int) 538234)
0x936: Push((int) -1)
0x937: Push((int) 40112)
0x938: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x939: Pop(3)
0x93a: Return(); Pop(0)

0x93b: Push((int) 40102)
0x93c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93d: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x93e: PushEmpty(string)
0x93f: Stack[-1] = "Neutral"
0x940: Call2 0x259

0x941: Pop(1)
0x942: Push((int) 538225)
0x943: @@ SetMessage(Stack[-1])
0x944: Pop(1)
0x945: @@ ClearReplies()
0x946: Pop(0)
0x947: Push((int) 538226)
0x948: Push((int) 40104)
0x949: Push((int) 40103)
0x94a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94b: Pop(3)
0x94c: Push((int) 538230)
0x94d: Push((int) 40108)
0x94e: Push((int) 40107)
0x94f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x950: Pop(3)
0x951: Return(); Pop(0)

0x952: Push((int) 40108)
0x953: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x954: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x955: PushEmpty(string)
0x956: Stack[-1] = "Neutral"
0x957: Call2 0x259

0x958: Pop(1)
0x959: Push((int) 538231)
0x95a: @@ SetMessage(Stack[-1])
0x95b: Pop(1)
0x95c: @@ ClearReplies()
0x95d: Pop(0)
0x95e: Push((int) 538232)
0x95f: Push((int) 40104)
0x960: Push((int) 40109)
0x961: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x962: Pop(3)
0x963: Push((int) 538233)
0x964: Push((int) -1)
0x965: Push((int) 40111)
0x966: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x967: Pop(3)
0x968: Return(); Pop(0)

0x969: Push((int) 40104)
0x96a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96b: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x96c: PushEmpty(string)
0x96d: Stack[-1] = "Neutral"
0x96e: Call2 0x259

0x96f: Pop(1)
0x970: Push((int) 538227)
0x971: @@ SetMessage(Stack[-1])
0x972: Pop(1)
0x973: @@ ClearReplies()
0x974: Pop(0)
0x975: Push((int) 538228)
0x976: Push((int) -1)
0x977: Push((int) 40105)
0x978: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x979: Pop(3)
0x97a: Push((int) 538229)
0x97b: Push((int) -1)
0x97c: Push((int) 40106)
0x97d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97e: Pop(3)
0x97f: Return(); Pop(0)

0x980: Push((int) 40089)
0x981: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x982: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x983: PushEmpty(string)
0x984: Stack[-1] = "Neutral"
0x985: Call2 0x259

0x986: Pop(1)
0x987: Push((int) 538212)
0x988: @@ SetMessage(Stack[-1])
0x989: Pop(1)
0x98a: @@ ClearReplies()
0x98b: Pop(0)
0x98c: Push((int) 538213)
0x98d: Push((int) 40091)
0x98e: Push((int) 40090)
0x98f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x990: Pop(3)
0x991: Return(); Pop(0)

0x992: Push((int) 40091)
0x993: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x994: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x995: PushEmpty(string)
0x996: Stack[-1] = "Neutral"
0x997: Call2 0x259

0x998: Pop(1)
0x999: Push((int) 538214)
0x99a: @@ SetMessage(Stack[-1])
0x99b: Pop(1)
0x99c: @@ ClearReplies()
0x99d: Pop(0)
0x99e: Push((int) 538215)
0x99f: Push((int) 40093)
0x9a0: Push((int) 40092)
0x9a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a2: Pop(3)
0x9a3: Push((int) 538221)
0x9a4: Push((int) -1)
0x9a5: Push((int) 40098)
0x9a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a7: Pop(3)
0x9a8: Return(); Pop(0)

0x9a9: Push((int) 40093)
0x9aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9ac: PushEmpty(string)
0x9ad: Stack[-1] = "Neutral"
0x9ae: Call2 0x259

0x9af: Pop(1)
0x9b0: Push((int) 538216)
0x9b1: @@ SetMessage(Stack[-1])
0x9b2: Pop(1)
0x9b3: @@ ClearReplies()
0x9b4: Pop(0)
0x9b5: Push((int) 538217)
0x9b6: Push((int) 40095)
0x9b7: Push((int) 40094)
0x9b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b9: Pop(3)
0x9ba: Return(); Pop(0)

0x9bb: Push((int) 40095)
0x9bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9be: PushEmpty(string)
0x9bf: Stack[-1] = "Neutral"
0x9c0: Call2 0x259

0x9c1: Pop(1)
0x9c2: Push((int) 538218)
0x9c3: @@ SetMessage(Stack[-1])
0x9c4: Pop(1)
0x9c5: @@ ClearReplies()
0x9c6: Pop(0)
0x9c7: Push((int) 538219)
0x9c8: Push((int) -1)
0x9c9: Push((int) 40096)
0x9ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cb: Pop(3)
0x9cc: Push((int) 538220)
0x9cd: Push((int) -1)
0x9ce: Push((int) 40097)
0x9cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d0: Pop(3)
0x9d1: Return(); Pop(0)

0x9d2: Push((int) 45520)
0x9d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d4: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9d5: PushEmpty(string)
0x9d6: Stack[-1] = "Neutral"
0x9d7: Call2 0x259

0x9d8: Pop(1)
0x9d9: Push((int) 543065)
0x9da: @@ SetMessage(Stack[-1])
0x9db: Pop(1)
0x9dc: @@ ClearReplies()
0x9dd: Pop(0)
0x9de: Push((int) 543066)
0x9df: Push((int) -1)
0x9e0: Push((int) 45521)
0x9e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e2: Pop(3)
0x9e3: Push((int) 543067)
0x9e4: Push((int) 45524)
0x9e5: Push((int) 45522)
0x9e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e7: Pop(3)
0x9e8: Push((int) 543068)
0x9e9: Push((int) -1)
0x9ea: Push((int) 45523)
0x9eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ec: Pop(3)
0x9ed: Return(); Pop(0)

0x9ee: Push((int) 45524)
0x9ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f0: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0x9f1: PushEmpty(string)
0x9f2: Stack[-1] = "Neutral"
0x9f3: Call2 0x259

0x9f4: Pop(1)
0x9f5: Push((int) 543069)
0x9f6: @@ SetMessage(Stack[-1])
0x9f7: Pop(1)
0x9f8: @@ ClearReplies()
0x9f9: Pop(0)
0x9fa: Push((int) 543070)
0x9fb: Push((int) -1)
0x9fc: Push((int) 45525)
0x9fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fe: Pop(3)
0x9ff: Push((int) 543071)
0xa00: Push((int) -1)
0xa01: Push((int) 45526)
0xa02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa03: Pop(3)
0xa04: Return(); Pop(0)

0xa05: Push((int) 45513)
0xa06: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa07: IF (Stack[-1] == 0) GOTO 0xa21; Pop(1)

0xa08: PushEmpty(string)
0xa09: Stack[-1] = "Neutral"
0xa0a: Call2 0x259

0xa0b: Pop(1)
0xa0c: Push((int) 543058)
0xa0d: @@ SetMessage(Stack[-1])
0xa0e: Pop(1)
0xa0f: @@ ClearReplies()
0xa10: Pop(0)
0xa11: Push((int) 543059)
0xa12: Push((int) -1)
0xa13: Push((int) 45514)
0xa14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa15: Pop(3)
0xa16: Push((int) 543060)
0xa17: Push((int) -1)
0xa18: Push((int) 45515)
0xa19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1a: Pop(3)
0xa1b: Push((int) 543061)
0xa1c: Push((int) -1)
0xa1d: Push((int) 45516)
0xa1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1f: Pop(3)
0xa20: Return(); Pop(0)

0xa21: Push((int) 45498)
0xa22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa23: IF (Stack[-1] == 0) GOTO 0xa42; Pop(1)

0xa24: PushEmpty(string)
0xa25: Stack[-1] = "Neutral"
0xa26: Call2 0x259

0xa27: Pop(1)
0xa28: Push((int) 543046)
0xa29: @@ SetMessage(Stack[-1])
0xa2a: Pop(1)
0xa2b: @@ ClearReplies()
0xa2c: Pop(0)
0xa2d: Push((int) 543047)
0xa2e: Push((int) 45506)
0xa2f: Push((int) 45499)
0xa30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa31: Pop(3)
0xa32: Push((int) 543050)
0xa33: Push((int) 45503)
0xa34: Push((int) 45502)
0xa35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa36: Pop(3)
0xa37: Push((int) 543048)
0xa38: Push((int) -1)
0xa39: Push((int) 45500)
0xa3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3b: Pop(3)
0xa3c: Push((int) 543049)
0xa3d: Push((int) -1)
0xa3e: Push((int) 45501)
0xa3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa40: Pop(3)
0xa41: Return(); Pop(0)

0xa42: Push((int) 45503)
0xa43: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa44: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa45: PushEmpty(string)
0xa46: Stack[-1] = "Neutral"
0xa47: Call2 0x259

0xa48: Pop(1)
0xa49: Push((int) 543051)
0xa4a: @@ SetMessage(Stack[-1])
0xa4b: Pop(1)
0xa4c: @@ ClearReplies()
0xa4d: Pop(0)
0xa4e: Push((int) 543054)
0xa4f: Push((int) -1)
0xa50: Push((int) 45509)
0xa51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa52: Pop(3)
0xa53: Return(); Pop(0)

0xa54: Push((int) 45506)
0xa55: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa56: IF (Stack[-1] == 0) GOTO 0xa66; Pop(1)

0xa57: PushEmpty(string)
0xa58: Stack[-1] = "Neutral"
0xa59: Call2 0x259

0xa5a: Pop(1)
0xa5b: Push((int) 543052)
0xa5c: @@ SetMessage(Stack[-1])
0xa5d: Pop(1)
0xa5e: @@ ClearReplies()
0xa5f: Pop(0)
0xa60: Push((int) 543053)
0xa61: Push((int) -1)
0xa62: Push((int) 45507)
0xa63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa64: Pop(3)
0xa65: Return(); Pop(0)

0xa66: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa67: PushEmpty(bool)
0xa68: Call2 0x1814

0xa69: Pop(0)
0xa6a: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa6b: @ lshStopAnimation()
0xa6c: Pop(0)
0xa6d: GOTO 0xa70

0xa6e: @ StopAnimation()
0xa6f: Pop(0)
0xa70: Return(); Pop(0)

0xa71: GOTO 0x270

0xa72: Return(); Pop(0)

0xa73: PushEmpty()
0xa74: EventDisable(0)
0xa75: PushEmpty(object)
0xa76: Stack[-1] = Stack[-2]
0xa77: Call2 0xa94

0xa78: Pop(1)
0xa79: PushEmpty(object)
0xa7a: Stack[-1] = Stack[-2]
0xa7b: Call2 0x185a

0xa7c: Pop(1)
0xa7d: EventEnable(0)
0xa7e: @ Hold()
0xa7f: Pop(0)
0xa80: GOTO 0xa7e

0xa81: Return(); Pop(0)

0xa82: PushEmpty(int, int)
0xa83: PushEmpty(int, object)
0xa84: Stack[-1] = Stack[-5]
0xa85: Call2 0x1712

0xa86: Stack[-3] = Stack[-2]
0xa87: Pop(2)
0xa88: Push((int) 0)
0xa89: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa8a: IF (Stack[-1] == 0) GOTO 0xa8f; Pop(1)

0xa8b: PushEmpty(object)
0xa8c: Stack[-1] = Stack[-4]
0xa8d: Call2 0x1715

0xa8e: Pop(1)
0xa8f: Return(); Pop(2)

0xa90: PushEmpty()
0xa91: Call2 0x171b

0xa92: Pop(0)
0xa93: Return(); Pop(0)

0xa94: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xa95: Pop(0); Push((bool) Stack[-21] == 0)
0xa96: IF (Stack[-1] == 0) GOTO 0xa9c; Pop(1)

0xa97: PushEmpty(string)
0xa98: Stack[-1] = "fdie"
0xa99: Call2 0xaef

0xa9a: Pop(1)
0xa9b: GOTO 0xaee

0xa9c: @@ GetPosition(Stack[-10])
0xa9d: Pop(0)
0xa9e: @ GetPosition(Stack[-9])
0xa9f: Pop(0)
0xaa0: @ GetDirection(Stack[-8])
0xaa1: Pop(0)
0xaa2: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xaa3: Push(CvectorIndex(Stack[-7], 0))
0xaa4: Push(CvectorIndex(Stack[-9], 0))
0xaa5: Pop(2); Push(Stack[-2] * Stack[-1]);
0xaa6: Push(CvectorIndex(Stack[-8], 2))
0xaa7: Push(CvectorIndex(Stack[-10], 2))
0xaa8: Pop(2); Push(Stack[-2] * Stack[-1]);
0xaa9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaaa: Push((int) 0)
0xaab: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xaac: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaad: Stack[-6] = "fdie"
0xaae: GOTO 0xab0

0xaaf: Stack[-6] = "bdie"
0xab0: @ RemoveRTEnvelope()
0xab1: Pop(0)
0xab2: @ SetDeathState()
0xab3: Pop(0)
0xab4: @ Stop()
0xab5: Pop(0)
0xab6: @ StopAsync()
0xab7: Pop(0)
0xab8: Stack[-5] = Stack[-21]
0xab9: Push("GetScriptProperty")
0xaba: Push((int) 2)
0xabb: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xabc: IF (Stack[-1] == 0) GOTO 0xac8; Pop(1)

0xabd: Push("Owner")
0xabe: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xabf: Pop(1)
0xac0: Push(Stack[-4])
0xac1: IF (Stack[-1] == 0) GOTO 0xac8; Pop(1)

0xac2: Push("Owner")
0xac3: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xac4: Pop(1)
0xac5: Pop(0); Push((bool) Stack[-5] == 0)
0xac6: IF (Stack[-1] == 0) GOTO 0xac8; Pop(1)

0xac7: Stack[-5] = Stack[-21]
0xac8: Push("@GetEyesHeight")
0xac9: Push((int) 1)
0xaca: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xacb: IF (Stack[-1] == 0) GOTO 0xad7; Pop(1)

0xacc: @@ GetEyesHeight(Stack[-2])
0xacd: Pop(0)
0xace: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xacf: Push(CvectorIndex(Stack[-1], 1))
0xad0: Stack[-1] = Stack[-3]
0xad1: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xad2: Push("head")
0xad3: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xad4: Pop(1)
0xad5: Stack[-3] = (bool) 1
0xad6: GOTO 0xad8

0xad7: Stack[-3] = (bool) 0
0xad8: PushEmpty(string)
0xad9: Stack[-1] = Stack[-7]
0xada: Call2 0x12be

0xadb: Pop(1)
0xadc: Push("all")
0xadd: @ PlayAnimation(Stack[-1], Stack[-7])
0xade: Pop(1)
0xadf: @ WaitForAnimEnd()
0xae0: Pop(0)
0xae1: Push(Stack[-3])
0xae2: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xae3: @ StopAsync()
0xae4: Pop(0)
0xae5: Push("head")
0xae6: @ UnlookAsync(Stack[-1])
0xae7: Pop(1)
0xae8: Push("all")
0xae9: @ LockAnimationEnd(Stack[-1], Stack[-7])
0xaea: Pop(1)
0xaeb: @ RemoveEnvelope()
0xaec: Pop(0)
0xaed: Stack[-5] = 0
0xaee: Return(); Pop(20)

0xaef: PushEmpty()
0xaf0: @ RemoveRTEnvelope()
0xaf1: Pop(0)
0xaf2: @ SetDeathState()
0xaf3: Pop(0)
0xaf4: @ Stop()
0xaf5: Pop(0)
0xaf6: @ StopAsync()
0xaf7: Pop(0)
0xaf8: @ StopSecondaryAnimation()
0xaf9: Pop(0)
0xafa: PushEmpty(string)
0xafb: Stack[-1] = Stack[-2]
0xafc: Call2 0x12be

0xafd: Pop(1)
0xafe: Push("all")
0xaff: @ PlayAnimation(Stack[-1], Stack[-2])
0xb00: Pop(1)
0xb01: @ WaitForAnimEnd()
0xb02: Pop(0)
0xb03: Push("all")
0xb04: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xb05: Pop(1)
0xb06: @ RemoveEnvelope()
0xb07: Pop(0)
0xb08: Return(); Pop(0)

0xb09: PushEmpty()
0xb0a: Return(); Pop(0)

0xb0b: PushEmpty()
0xb0c: Return(); Pop(0)

0xb0d: PushEmpty()
0xb0e: Return(); Pop(0)

0xb0f: PushEmpty(int, int, int, int)
0xb10: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xb11: Push((bool) 1)
0xb12: @ SensePlayerOnly(Stack[-1])
0xb13: Pop(1)
0xb14: PushEmpty()
0xb15: Call2 0x1816

0xb16: Pop(0)
0xb17: PushEmpty()
0xb18: Call2 0xb31

0xb19: Pop(0)
0xb1a: Push((int) 2)
0xb1b: @ irand(Stack[-3], Stack[-1])
0xb1c: Pop(1)
0xb1d: Push((int) 0)
0xb1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1f: IF (Stack[-1] == 0) GOTO 0xb28; Pop(1)

0xb20: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xb21: PushEmpty()
0xb22: Call2 0x1830

0xb23: Pop(0)
0xb24: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xb25: @ ResetAAS()
0xb26: Pop(0)
0xb27: GOTO 0xb2f

0xb28: Push((int) 4)
0xb29: @ irand(Stack[-2], Stack[-1])
0xb2a: Pop(1)
0xb2b: Push((int) 1)
0xb2c: Pop(1); Push(Stack[-2] + Stack[-1]);
0xb2d: @ Sleep(Stack[-1])
0xb2e: Pop(1)
0xb2f: GOTO 0xb1a

0xb30: Return(); Pop(4)

0xb31: PushEmpty(bool)
0xb32: Call2 0x1231

0xb33: Pop(0)
0xb34: Pop(1); Push((bool) Stack[-1] == 0)
0xb35: IF (Stack[-1] == 0) GOTO 0xb39; Pop(1)

0xb36: PushEmpty()
0xb37: Call2 0x171b

0xb38: Pop(0)
0xb39: Return(); Pop(0)

0xb3a: PushEmpty(int, int)
0xb3b: PushEmpty(int, object)
0xb3c: Stack[-1] = Stack[-5]
0xb3d: Call2 0x1712

0xb3e: Stack[-3] = Stack[-2]
0xb3f: Pop(2)
0xb40: Push((int) 0)
0xb41: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb42: IF (Stack[-1] == 0) GOTO 0xb4d; Pop(1)

0xb43: Push((int) 1)
0xb44: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb45: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb46: PushEmpty()
0xb47: Call2 0xbfb

0xb48: Pop(0)
0xb49: PushEmpty(object)
0xb4a: Stack[-1] = Stack[-4]
0xb4b: Call2 0x1715

0xb4c: Pop(1)
0xb4d: Return(); Pop(2)

0xb4e: PushEmpty(int, int)
0xb4f: PushEmpty(object)
0xb50: Stack[-1] = Stack[-4]
0xb51: Call2 0x1650

0xb52: Pop(1)
0xb53: PushEmpty(int, object)
0xb54: Stack[-1] = Stack[-5]
0xb55: Call2 0x168b

0xb56: Stack[-3] = Stack[-2]
0xb57: Pop(2)
0xb58: Push((int) 0)
0xb59: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb5a: IF (Stack[-1] == 0) GOTO 0xb65; Pop(1)

0xb5b: Push((int) 1)
0xb5c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb5d: IF (Stack[-1] == 0) GOTO 0xb61; Pop(1)

0xb5e: PushEmpty()
0xb5f: Call2 0xbfb

0xb60: Pop(0)
0xb61: PushEmpty(object)
0xb62: Stack[-1] = Stack[-4]
0xb63: Call2 0x1695

0xb64: Pop(1)
0xb65: Return(); Pop(2)

0xb66: PushEmpty(int, int)
0xb67: PushEmpty(bool, object, object, bool)
0xb68: Stack[-3] = Stack[-9]
0xb69: Stack[-2] = Stack[-8]
0xb6a: Stack[-1] = Stack[-7]
0xb6b: Call2 0x1850

0xb6c: Pop(3)
0xb6d: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb6e: PushEmpty(int, object, bool)
0xb6f: Stack[-2] = Stack[-8]
0xb70: Stack[-1] = Stack[-6]
0xb71: Call2 0x16e8

0xb72: Stack[-4] = Stack[-3]
0xb73: Pop(3)
0xb74: Push((int) 0)
0xb75: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb76: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb77: Push((int) 1)
0xb78: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb79: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb7a: PushEmpty()
0xb7b: Call2 0xbfb

0xb7c: Pop(0)
0xb7d: PushEmpty(object)
0xb7e: Stack[-1] = Stack[-6]
0xb7f: Call2 0x16ef

0xb80: Pop(1)
0xb81: Return(); Pop(2)

0xb82: PushEmpty(int, int)
0xb83: PushEmpty(int, object)
0xb84: Stack[-1] = Stack[-5]
0xb85: Call2 0x171c

0xb86: Stack[-3] = Stack[-2]
0xb87: Pop(2)
0xb88: Push((int) 0)
0xb89: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb8a: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb8b: Push((int) 1)
0xb8c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb8d: IF (Stack[-1] == 0) GOTO 0xb91; Pop(1)

0xb8e: PushEmpty()
0xb8f: Call2 0xbfb

0xb90: Pop(0)
0xb91: PushEmpty(object)
0xb92: Stack[-1] = Stack[-4]
0xb93: Call2 0x172c

0xb94: Pop(1)
0xb95: Return(); Pop(2)

0xb96: PushEmpty(int, int)
0xb97: PushEmpty(bool, object, string)
0xb98: Stack[-2] = Stack[-7]
0xb99: Stack[-1] = Stack[-6]
0xb9a: Call2 0x15fa

0xb9b: Pop(2)
0xb9c: IF (Stack[-1] == 0) GOTO 0xba6; Pop(1)

0xb9d: PushEmpty()
0xb9e: Call2 0xbfb

0xb9f: Pop(0)
0xba0: PushEmpty(object, string)
0xba1: Stack[-2] = Stack[-6]
0xba2: Stack[-1] = Stack[-5]
0xba3: Call2 0x161a

0xba4: Pop(2)
0xba5: GOTO 0xbba

0xba6: PushEmpty(int, string, object)
0xba7: Stack[-2] = Stack[-6]
0xba8: Stack[-1] = Stack[-7]
0xba9: Call2 0x1732

0xbaa: Stack[-4] = Stack[-3]
0xbab: Pop(3)
0xbac: Push((int) 0)
0xbad: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbae: IF (Stack[-1] == 0) GOTO 0xbba; Pop(1)

0xbaf: Push((int) 1)
0xbb0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbb1: IF (Stack[-1] == 0) GOTO 0xbb5; Pop(1)

0xbb2: PushEmpty()
0xbb3: Call2 0xbfb

0xbb4: Pop(0)
0xbb5: PushEmpty(string, object)
0xbb6: Stack[-2] = Stack[-5]
0xbb7: Stack[-1] = Stack[-6]
0xbb8: Call2 0x1735

0xbb9: Pop(2)
0xbba: Return(); Pop(2)

0xbbb: PushEmpty()
0xbbc: PushEmpty(bool, string)
0xbbd: Stack[-1] = Stack[-3]
0xbbe: Call2 0x165d

0xbbf: Pop(1)
0xbc0: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xbc1: PushEmpty()
0xbc2: Call2 0xbfb

0xbc3: Pop(0)
0xbc4: PushEmpty(string)
0xbc5: Stack[-1] = Stack[-2]
0xbc6: Call2 0x166d

0xbc7: Pop(1)
0xbc8: Return(); Pop(0)

0xbc9: PushEmpty()
0xbca: Push( Stack[0 + Tasks[-1].StackPointer] )
0xbcb: IF (Stack[-1] == 0) GOTO 0xbcd; Pop(1)

0xbcc: Return(); Pop(0)

0xbcd: PushEmpty(bool, object)
0xbce: Stack[-1] = Stack[-3]
0xbcf: Call2 0x1633

0xbd0: Pop(1)
0xbd1: IF (Stack[-1] == 0) GOTO 0xbda; Pop(1)

0xbd2: PushEmpty()
0xbd3: Call2 0xbfb

0xbd4: Pop(0)
0xbd5: PushEmpty(object)
0xbd6: Stack[-1] = Stack[-2]
0xbd7: Call2 0x164a

0xbd8: Pop(1)
0xbd9: GOTO 0xbde

0xbda: PushEmpty(object)
0xbdb: Stack[-1] = Stack[-2]
0xbdc: Call2 0xc11

0xbdd: Pop(1)
0xbde: Return(); Pop(0)

0xbdf: PushEmpty()
0xbe0: Push( Stack[0 + Tasks[-1].StackPointer] )
0xbe1: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbe2: Return(); Pop(0)

0xbe3: PushEmpty(object)
0xbe4: Stack[-1] = Stack[-2]
0xbe5: Call2 0xc11

0xbe6: Pop(1)
0xbe7: Return(); Pop(0)

0xbe8: PushEmpty()
0xbe9: Push((int) 110)
0xbea: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xbeb: IF (Stack[-1] == 0) GOTO 0xbed; Pop(1)

0xbec: Return(); Pop(0)

0xbed: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xbee: Push((int) 110)
0xbef: @ KillTimer(Stack[-1])
0xbf0: Pop(1)
0xbf1: @ ResetAAS()
0xbf2: Pop(0)
0xbf3: Return(); Pop(0)

0xbf4: PushEmpty()
0xbf5: Call2 0xbfb

0xbf6: Pop(0)
0xbf7: PushEmpty()
0xbf8: Call2 0x171b

0xbf9: Pop(0)
0xbfa: Return(); Pop(0)

0xbfb: Push((int) 110)
0xbfc: @ KillTimer(Stack[-1])
0xbfd: Pop(1)
0xbfe: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xbff: Push( Stack[0 + Tasks[-1].StackPointer] )
0xc00: IF (Stack[-1] == 0) GOTO 0xc05; Pop(1)

0xc01: PushEmpty()
0xc02: Call2 0x184b

0xc03: Pop(0)
0xc04: GOTO 0xc07

0xc05: @ Stop()
0xc06: Pop(0)
0xc07: Return(); Pop(0)

0xc08: PushEmpty()
0xc09: PushEmpty()
0xc0a: Call2 0xbfb

0xc0b: Pop(0)
0xc0c: PushEmpty(object)
0xc0d: Stack[-1] = Stack[-2]
0xc0e: Call2 0x15e2

0xc0f: Pop(1)
0xc10: Return(); Pop(0)

0xc11: PushEmpty(bool, int, bool, int)
0xc12: Push( Stack[1 + Tasks[-1].StackPointer] )
0xc13: IF (Stack[-1] == 0) GOTO 0xc15; Pop(1)

0xc14: Return(); Pop(4)

0xc15: @ IsPlayerActor(Stack[-5], Stack[-2])
0xc16: Pop(0)
0xc17: Pop(0); Push((bool) Stack[-2] == 0)
0xc18: IF (Stack[-1] == 0) GOTO 0xc1a; Pop(1)

0xc19: Return(); Pop(4)

0xc1a: PushEmpty(int, object)
0xc1b: Stack[-1] = Stack[-7]
0xc1c: Call2 0x167a

0xc1d: Stack[-3] = Stack[-2]
0xc1e: Pop(2)
0xc1f: Push((int) 0)
0xc20: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc21: IF (Stack[-1] == 0) GOTO 0xc31; Pop(1)

0xc22: Push((int) 1)
0xc23: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc24: IF (Stack[-1] == 0) GOTO 0xc28; Pop(1)

0xc25: PushEmpty()
0xc26: Call2 0xbfb

0xc27: Pop(0)
0xc28: PushEmpty(object)
0xc29: Stack[-1] = Stack[-6]
0xc2a: Call2 0x1683

0xc2b: Pop(1)
0xc2c: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xc2d: Push((int) 110)
0xc2e: Push((float)5.0)
0xc2f: @ SetTimer(Stack[-2], Stack[-1])
0xc30: Pop(2)
0xc31: Return(); Pop(4)

0xc32: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xc33: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0xc34: PushEmpty()
0xc35: Call2 0xc65

0xc36: Pop(0)
0xc37: @ GetDirection(Stack[-3])
0xc38: Pop(0)
0xc39: PushEmpty(cvector, object)
0xc3a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc3b: Call2 0x10fe

0xc3c: Stack[-4] = Stack[-2]
0xc3d: Pop(2)
0xc3e: PushEmpty(float, cvector, cvector)
0xc3f: Stack[-2] = Stack[-6]
0xc40: Stack[-1] = Stack[-5]
0xc41: Call2 0x1322

0xc42: Pop(2)
0xc43: Push((int) 0)
0xc44: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xc45: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc46: PushEmpty(object)
0xc47: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc48: Call2 0x1226

0xc49: Pop(1)
0xc4a: Stack[-1] = (bool) 1
0xc4b: GOTO 0xc4f

0xc4c: Push((float)1.5)
0xc4d: @ Sleep(Stack[-1], Stack[-2])
0xc4e: Pop(1)
0xc4f: Push(Stack[-1])
0xc50: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc51: PushEmpty(object)
0xc52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc53: Call2 0x1226

0xc54: Pop(1)
0xc55: Push((int) 111)
0xc56: Push((float)0.5)
0xc57: @ SetTimer(Stack[-2], Stack[-1])
0xc58: Pop(2)
0xc59: Push((float)5.0)
0xc5a: @ Sleep(Stack[-1])
0xc5b: Pop(1)
0xc5c: Push((int) 111)
0xc5d: @ KillTimer(Stack[-1])
0xc5e: Pop(1)
0xc5f: @ StopAsync()
0xc60: Pop(0)
0xc61: Push("head")
0xc62: @ UnlookAsync(Stack[-1])
0xc63: Pop(1)
0xc64: Return(); Pop(6)

0xc65: PushEmpty(object)
0xc66: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc67: Call2 0x12ac

0xc68: Pop(1)
0xc69: Return(); Pop(0)

0xc6a: PushEmpty(int, int)
0xc6b: PushEmpty(int, object)
0xc6c: Stack[-1] = Stack[-5]
0xc6d: Call2 0x1712

0xc6e: Stack[-3] = Stack[-2]
0xc6f: Pop(2)
0xc70: Push((int) 0)
0xc71: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc72: IF (Stack[-1] == 0) GOTO 0xc7d; Pop(1)

0xc73: Push((int) 1)
0xc74: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc75: IF (Stack[-1] == 0) GOTO 0xc79; Pop(1)

0xc76: PushEmpty()
0xc77: Call2 0xcf9

0xc78: Pop(0)
0xc79: PushEmpty(object)
0xc7a: Stack[-1] = Stack[-4]
0xc7b: Call2 0x1715

0xc7c: Pop(1)
0xc7d: Return(); Pop(2)

0xc7e: PushEmpty(int, int)
0xc7f: PushEmpty(object)
0xc80: Stack[-1] = Stack[-4]
0xc81: Call2 0x1650

0xc82: Pop(1)
0xc83: PushEmpty(int, object)
0xc84: Stack[-1] = Stack[-5]
0xc85: Call2 0x168b

0xc86: Stack[-3] = Stack[-2]
0xc87: Pop(2)
0xc88: Push((int) 0)
0xc89: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc8a: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc8b: Push((int) 1)
0xc8c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc8d: IF (Stack[-1] == 0) GOTO 0xc91; Pop(1)

0xc8e: PushEmpty()
0xc8f: Call2 0xcf9

0xc90: Pop(0)
0xc91: PushEmpty(object)
0xc92: Stack[-1] = Stack[-4]
0xc93: Call2 0x1695

0xc94: Pop(1)
0xc95: Return(); Pop(2)

0xc96: PushEmpty(int, int)
0xc97: PushEmpty(bool, object, object, bool)
0xc98: Stack[-3] = Stack[-9]
0xc99: Stack[-2] = Stack[-8]
0xc9a: Stack[-1] = Stack[-7]
0xc9b: Call2 0x1850

0xc9c: Pop(3)
0xc9d: IF (Stack[-1] == 0) GOTO 0xcb1; Pop(1)

0xc9e: PushEmpty(int, object, bool)
0xc9f: Stack[-2] = Stack[-8]
0xca0: Stack[-1] = Stack[-6]
0xca1: Call2 0x16e8

0xca2: Stack[-4] = Stack[-3]
0xca3: Pop(3)
0xca4: Push((int) 0)
0xca5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca6: IF (Stack[-1] == 0) GOTO 0xcb1; Pop(1)

0xca7: Push((int) 1)
0xca8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca9: IF (Stack[-1] == 0) GOTO 0xcad; Pop(1)

0xcaa: PushEmpty()
0xcab: Call2 0xcf9

0xcac: Pop(0)
0xcad: PushEmpty(object)
0xcae: Stack[-1] = Stack[-6]
0xcaf: Call2 0x16ef

0xcb0: Pop(1)
0xcb1: Return(); Pop(2)

0xcb2: PushEmpty(int, int)
0xcb3: PushEmpty(int, object)
0xcb4: Stack[-1] = Stack[-5]
0xcb5: Call2 0x171c

0xcb6: Stack[-3] = Stack[-2]
0xcb7: Pop(2)
0xcb8: Push((int) 0)
0xcb9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcba: IF (Stack[-1] == 0) GOTO 0xcc5; Pop(1)

0xcbb: Push((int) 1)
0xcbc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcbd: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcbe: PushEmpty()
0xcbf: Call2 0xcf9

0xcc0: Pop(0)
0xcc1: PushEmpty(object)
0xcc2: Stack[-1] = Stack[-4]
0xcc3: Call2 0x172c

0xcc4: Pop(1)
0xcc5: Return(); Pop(2)

0xcc6: PushEmpty(int, int)
0xcc7: PushEmpty(bool, object, string)
0xcc8: Stack[-2] = Stack[-7]
0xcc9: Stack[-1] = Stack[-6]
0xcca: Call2 0x15fa

0xccb: Pop(2)
0xccc: IF (Stack[-1] == 0) GOTO 0xcd6; Pop(1)

0xccd: PushEmpty()
0xcce: Call2 0xcf9

0xccf: Pop(0)
0xcd0: PushEmpty(object, string)
0xcd1: Stack[-2] = Stack[-6]
0xcd2: Stack[-1] = Stack[-5]
0xcd3: Call2 0x161a

0xcd4: Pop(2)
0xcd5: GOTO 0xcea

0xcd6: PushEmpty(int, string, object)
0xcd7: Stack[-2] = Stack[-6]
0xcd8: Stack[-1] = Stack[-7]
0xcd9: Call2 0x1732

0xcda: Stack[-4] = Stack[-3]
0xcdb: Pop(3)
0xcdc: Push((int) 0)
0xcdd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcde: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xcdf: Push((int) 1)
0xce0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xce1: IF (Stack[-1] == 0) GOTO 0xce5; Pop(1)

0xce2: PushEmpty()
0xce3: Call2 0xcf9

0xce4: Pop(0)
0xce5: PushEmpty(string, object)
0xce6: Stack[-2] = Stack[-5]
0xce7: Stack[-1] = Stack[-6]
0xce8: Call2 0x1735

0xce9: Pop(2)
0xcea: Return(); Pop(2)

0xceb: PushEmpty()
0xcec: PushEmpty(bool, string)
0xced: Stack[-1] = Stack[-3]
0xcee: Call2 0x165d

0xcef: Pop(1)
0xcf0: IF (Stack[-1] == 0) GOTO 0xcf8; Pop(1)

0xcf1: PushEmpty()
0xcf2: Call2 0xcf9

0xcf3: Pop(0)
0xcf4: PushEmpty(string)
0xcf5: Stack[-1] = Stack[-2]
0xcf6: Call2 0x166d

0xcf7: Pop(1)
0xcf8: Return(); Pop(0)

0xcf9: @ StopGroup0()
0xcfa: Pop(0)
0xcfb: @ StopAsync()
0xcfc: Pop(0)
0xcfd: Push("head")
0xcfe: @ UnlookAsync(Stack[-1])
0xcff: Pop(1)
0xd00: Push((int) 111)
0xd01: @ KillTimer(Stack[-1])
0xd02: Pop(1)
0xd03: Return(); Pop(0)

0xd04: PushEmpty()
0xd05: PushEmpty()
0xd06: Call2 0xcf9

0xd07: Pop(0)
0xd08: PushEmpty(object)
0xd09: Stack[-1] = Stack[-2]
0xd0a: Call2 0x15e2

0xd0b: Pop(1)
0xd0c: Return(); Pop(0)

0xd0d: PushEmpty(cvector, cvector, cvector, cvector)
0xd0e: Push((int) 111)
0xd0f: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xd10: IF (Stack[-1] == 0) GOTO 0xd12; Pop(1)

0xd11: Return(); Pop(4)

0xd12: PushEmpty(bool, object)
0xd13: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd14: Call2 0x1190

0xd15: Pop(1)
0xd16: Pop(1); Push((bool) Stack[-1] == 0)
0xd17: IF (Stack[-1] == 0) GOTO 0xd1c; Pop(1)

0xd18: PushEmpty()
0xd19: Call2 0xcf9

0xd1a: Pop(0)
0xd1b: Return(); Pop(4)

0xd1c: @ GetDirection(Stack[-2])
0xd1d: Pop(0)
0xd1e: PushEmpty(cvector, object)
0xd1f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd20: Call2 0x10fe

0xd21: Stack[-3] = Stack[-2]
0xd22: Pop(2)
0xd23: PushEmpty(float, cvector, cvector)
0xd24: Stack[-2] = Stack[-5]
0xd25: Stack[-1] = Stack[-4]
0xd26: Call2 0x1322

0xd27: Pop(2)
0xd28: Push((float)0.5)
0xd29: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xd2a: IF (Stack[-1] == 0) GOTO 0xd2f; Pop(1)

0xd2b: PushEmpty(object)
0xd2c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2d: Call2 0x1226

0xd2e: Pop(1)
0xd2f: Return(); Pop(4)

0xd30: PushEmpty()
0xd31: Call2 0xcf9

0xd32: Pop(0)
0xd33: PushEmpty()
0xd34: Call2 0x171b

0xd35: Pop(0)
0xd36: Return(); Pop(0)

0xd37: PushEmpty()
0xd38: PushEmpty(bool, object)
0xd39: Stack[-1] = Stack[-3]
0xd3a: Call2 0x1633

0xd3b: Pop(1)
0xd3c: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd3d: PushEmpty()
0xd3e: Call2 0xcf9

0xd3f: Pop(0)
0xd40: PushEmpty(object)
0xd41: Stack[-1] = Stack[-2]
0xd42: Call2 0x164a

0xd43: Pop(1)
0xd44: Return(); Pop(0)

0xd45: PushEmpty()
0xd46: PushEmpty(object, bool, float)
0xd47: Stack[-3] = Stack[-4]
0xd48: Stack[-2] = (bool) 1
0xd49: Stack[-1] = (float) 180.0
0xd4a: Call2 0xd53

0xd4b: Pop(3)
0xd4c: Return(); Pop(0)

0xd4d: PushEmpty()
0xd4e: Stack[-3] = (float) 0.05
0xd4f: Return(); Pop(0)

0xd50: PushEmpty()
0xd51: Stack[-3] = (int) 0
0xd52: Return(); Pop(0)

0xd53: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xd54: PushEmpty()
0xd55: Call2 0xe38

0xd56: Pop(0)
0xd57: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xd58: Push("@GetAttackDistance")
0xd59: Push((int) 1)
0xd5a: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xd5b: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd5c: @@ GetAttackDistance(Stack[-11])
0xd5d: Pop(0)
0xd5e: Push((int) 50)
0xd5f: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xd60: GOTO 0xd62

0xd61: Stack[-11] = Stack[-23]
0xd62: Push((int) 150)
0xd63: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xd64: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd65: Stack[-11] = (int) 150
0xd66: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd67: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xd68: @ IsPlayerActor(Stack[-0], Stack[-8])
0xd69: Pop(0)
0xd6a: Push(Stack[-8])
0xd6b: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd6c: Push("attack")
0xd6d: @ PlayGlobalMusic(Stack[-1])
0xd6e: Pop(1)
0xd6f: PushEmpty(object)
0xd70: Call2 0x12e7

0xd71: Pop(0)
0xd72: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xd73: Pop(1)
0xd74: Push(Stack[-24])
0xd75: IF (Stack[-1] == 0) GOTO 0xd78; Pop(1)

0xd76: Stack[-7] = (bool) 0
0xd77: GOTO 0xd79

0xd78: Stack[-7] = (bool) 1
0xd79: Push((float)400.0)
0xd7a: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xd7b: PushEmpty(bool)
0xd7c: Stack[-1] = (bool) 0
0xd7d: PushEmpty(bool, object)
0xd7e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7f: Call2 0x1190

0xd80: Pop(1)
0xd81: IF (Stack[-1] == 0) GOTO 0xd85; Pop(1)

0xd82: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xd83: IF (Stack[-1] == 0) GOTO 0xd85; Pop(1)

0xd84: Stack[-1] = (bool) 1
0xd85: IF (Stack[-1] == 0) GOTO 0xe27; Pop(1)

0xd86: PushEmpty()
0xd87: Call2 0xfd5

0xd88: Pop(0)
0xd89: @@ GetPFPosition(Stack[-10])
0xd8a: Pop(0)
0xd8b: @ GetPFPosition(Stack[-9])
0xd8c: Pop(0)
0xd8d: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xd8e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd8f: Pop(0); Push(Stack[-6] * Stack[-6]);
0xd90: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xd91: IF (Stack[-1] == 0) GOTO 0xda1; Pop(1)

0xd92: PushEmpty(bool, object, float, float, bool, bool)
0xd93: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xd94: Stack[-4] = Stack[-17]
0xd95: Stack[-3] = (float) 3000.0
0xd96: Stack[-2] = (bool) 1
0xd97: Stack[-1] = (bool) 0
0xd98: Push(-6, 3); TaskCall(6)
0xd99: Call2 0xff0

0xd9a: Pop(-6, 3); TaskReturn
0xd9b: Pop(5)
0xd9c: Pop(1); Push((bool) Stack[-1] == 0)
0xd9d: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd9e: GOTO 0xe27

0xd9f: Stack[-7] = (bool) 0
0xda0: GOTO 0xe26

0xda1: Pop(0); Push(Stack[-23] * Stack[-23]);
0xda2: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xda3: IF (Stack[-1] == 0) GOTO 0xe1e; Pop(1)

0xda4: @@ GetPFPosition(Stack[-3])
0xda5: Pop(0)
0xda6: @ CanReachByPF(Stack[-2], Stack[-3])
0xda7: Pop(0)
0xda8: Pop(0); Push((bool) Stack[-2] == 0)
0xda9: IF (Stack[-1] == 0) GOTO 0xdb9; Pop(1)

0xdaa: PushEmpty(bool, object, float, float, bool, bool)
0xdab: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xdac: Stack[-4] = Stack[-17]
0xdad: Stack[-3] = (float) 3000.0
0xdae: Stack[-2] = (bool) 1
0xdaf: Stack[-1] = (bool) 0
0xdb0: Push(-6, 3); TaskCall(6)
0xdb1: Call2 0xff0

0xdb2: Pop(-6, 3); TaskReturn
0xdb3: Pop(5)
0xdb4: Pop(1); Push((bool) Stack[-1] == 0)
0xdb5: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdb6: GOTO 0xe27

0xdb7: Stack[-7] = (bool) 0
0xdb8: GOTO 0xd7b

0xdb9: Pop(0); Push((bool) Stack[-7] == 0)
0xdba: IF (Stack[-1] == 0) GOTO 0xdd2; Pop(1)

0xdbb: PushEmpty(object)
0xdbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdbd: Call2 0x1226

0xdbe: Pop(1)
0xdbf: Push("all")
0xdc0: Push("attack_on")
0xdc1: @ PlayAnimation(Stack[-2], Stack[-1])
0xdc2: Pop(2)
0xdc3: @ WaitForAnimEnd()
0xdc4: Pop(0)
0xdc5: PushEmpty()
0xdc6: Call2 0xfd5

0xdc7: Pop(0)
0xdc8: @ StopAsync()
0xdc9: Pop(0)
0xdca: Stack[-7] = (bool) 1
0xdcb: PushEmpty(bool, object)
0xdcc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdcd: Call2 0x1190

0xdce: Pop(1)
0xdcf: Pop(1); Push((bool) Stack[-1] == 0)
0xdd0: IF (Stack[-1] == 0) GOTO 0xdd2; Pop(1)

0xdd1: GOTO 0xe27

0xdd2: @ rand(Stack[-1])
0xdd3: Pop(0)
0xdd4: PushEmpty(bool)
0xdd5: Stack[-1] = (bool) 1
0xdd6: Push((float)0.25)
0xdd7: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xdd8: IF (Stack[-1] == 0) GOTO 0xdde; Pop(1)

0xdd9: PushEmpty(bool)
0xdda: Call2 0xfaa

0xddb: Pop(0)
0xddc: IF (Stack[-1] == 0) GOTO 0xdde; Pop(1)

0xddd: Stack[-1] = (bool) 0
0xdde: IF (Stack[-1] == 0) GOTO 0xdef; Pop(1)

0xddf: @ Face(Stack[-0])
0xde0: Pop(0)
0xde1: PushEmpty()
0xde2: Call2 0xfdc

0xde3: Pop(0)
0xde4: Push("all")
0xde5: Push("attack_stay")
0xde6: @ PlayAnimation(Stack[-2], Stack[-1])
0xde7: Pop(2)
0xde8: PushEmpty(bool, float)
0xde9: Stack[-1] = Stack[-25]
0xdea: Call2 0xf26

0xdeb: Pop(2)
0xdec: @ StopAsync()
0xded: Pop(0)
0xdee: GOTO 0xe1d

0xdef: @ Face(Stack[-0])
0xdf0: Pop(0)
0xdf1: Push("all")
0xdf2: Push("fjump")
0xdf3: @ PlayAnimation(Stack[-2], Stack[-1])
0xdf4: Pop(2)
0xdf5: @ WaitForAnimEnd()
0xdf6: Pop(0)
0xdf7: PushEmpty()
0xdf8: Call2 0xfd5

0xdf9: Pop(0)
0xdfa: Push(CVector(0.0, 0.0, 0.0))
0xdfb: @ SetSpeed(Stack[-1])
0xdfc: Pop(1)
0xdfd: @ Stop()
0xdfe: Pop(0)
0xdff: @ StopAsync()
0xe00: Pop(0)
0xe01: PushEmpty(bool)
0xe02: Call2 0xfaa

0xe03: Pop(0)
0xe04: Pop(1); Push((bool) Stack[-1] == 0)
0xe05: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xe06: PushEmpty(bool, object)
0xe07: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe08: Call2 0x1190

0xe09: Pop(1)
0xe0a: Pop(1); Push((bool) Stack[-1] == 0)
0xe0b: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe0c: GOTO 0xe27

0xe0d: @@ GetPFPosition(Stack[-10])
0xe0e: Pop(0)
0xe0f: @ GetPFPosition(Stack[-9])
0xe10: Pop(0)
0xe11: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xe12: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xe13: Pop(0); Push(Stack[-23] * Stack[-23]);
0xe14: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xe15: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xe16: PushEmpty(bool, float)
0xe17: Stack[-1] = Stack[-25]
0xe18: Call2 0xe82

0xe19: Pop(1)
0xe1a: Pop(1); Push((bool) Stack[-1] == 0)
0xe1b: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xe1c: GOTO 0xe27

0xe1d: GOTO 0xe26

0xe1e: PushEmpty(bool, float)
0xe1f: Stack[-1] = Stack[-25]
0xe20: Call2 0xe82

0xe21: Pop(1)
0xe22: Pop(1); Push((bool) Stack[-1] == 0)
0xe23: IF (Stack[-1] == 0) GOTO 0xe25; Pop(1)

0xe24: GOTO 0xe27

0xe25: Stack[-7] = (bool) 1
0xe26: GOTO 0xd7b

0xe27: @ WaitForAnimEnd()
0xe28: Pop(0)
0xe29: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe2a: IF (Stack[-1] == 0) GOTO 0xe2c; Pop(1)

0xe2b: Return(); Pop(22)

0xe2c: Push("all")
0xe2d: Push("attack_off")
0xe2e: @ PlayAnimation(Stack[-2], Stack[-1])
0xe2f: Pop(2)
0xe30: @ WaitForAnimEnd()
0xe31: Pop(0)
0xe32: Push(Stack[-8])
0xe33: IF (Stack[-1] == 0) GOTO 0xe37; Pop(1)

0xe34: Push((float)2.0)
0xe35: @ Sleep(Stack[-1])
0xe36: Pop(1)
0xe37: Return(); Pop(22)

0xe38: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0xe39: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xe3a: Push("all")
0xe3b: Push("attack_begin")
0xe3c: Push((int) 1)
0xe3d: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0xe3e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe3f: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xe40: Pop(2)
0xe41: Pop(0); Push((bool) Stack[-3] == 0)
0xe42: IF (Stack[-1] == 0) GOTO 0xe44; Pop(1)

0xe43: GOTO 0xe47

0xe44: Push((int) 1)
0xe45: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xe46: GOTO 0xe3a

0xe47: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xe48: Push("attack")
0xe49: Push((int) 1)
0xe4a: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xe4b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe4c: @ IsExisting3DSound(Stack[-3], Stack[-1])
0xe4d: Pop(1)
0xe4e: Pop(0); Push((bool) Stack[-2] == 0)
0xe4f: IF (Stack[-1] == 0) GOTO 0xe51; Pop(1)

0xe50: GOTO 0xe54

0xe51: Push((int) 1)
0xe52: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xe53: GOTO 0xe48

0xe54: Push("all")
0xe55: Push("bjump")
0xe56: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xe57: Pop(2)
0xe58: Push(CvectorIndex(Stack[-1], 2))
0xe59: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0xe5a: Return(); Pop(6)

0xe5b: PushEmpty(object, float, float, object, float, float)
0xe5c: Push((float)0.9)
0xe5d: Pop(1); Push(Stack[-9] * Stack[-1]);
0xe5e: @ GetVictim(Stack[-1], Stack[-4])
0xe5f: Pop(1)
0xe60: @ ReportAttack(Stack[-0])
0xe61: Pop(0)
0xe62: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xe63: IF (Stack[-1] == 0) GOTO 0xe80; Pop(1)

0xe64: PushEmpty(float, object, int)
0xe65: Stack[-2] = Stack[-6]
0xe66: Stack[-1] = Stack[-10]
0xe67: Call2 0xd4d

0xe68: Stack[-5] = Stack[-3]
0xe69: Pop(3)
0xe6a: PushEmpty(float, object, float, int)
0xe6b: Stack[-3] = Stack[-7]
0xe6c: Stack[-2] = Stack[-6]
0xe6d: PushEmpty(int, object, int)
0xe6e: Stack[-2] = Stack[-10]
0xe6f: Stack[-1] = Stack[-14]
0xe70: Call2 0xd50

0xe71: Stack[-4] = Stack[-3]
0xe72: Pop(3)
0xe73: Call2 0x111e

0xe74: Stack[-5] = Stack[-4]
0xe75: Pop(4)
0xe76: PushEmpty(int)
0xe77: Call2 0xfda

0xe78: Pop(0)
0xe79: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0xe7a: Pop(1)
0xe7b: PushEmpty(object, float)
0xe7c: Stack[-2] = Stack[-5]
0xe7d: Stack[-1] = Stack[-3]
0xe7e: Call2 0xfe1

0xe7f: Pop(2)
0xe80: Return(); Pop(6)

0xe81: Stack[-3] = 0
0xe82: PushEmpty(int, bool, int, string, int, bool, int, string)
0xe83: PushEmpty()
0xe84: Call2 0xfd5

0xe85: Pop(0)
0xe86: @ irand(Stack[-4], Stack[-1])
0xe87: Pop(0)
0xe88: Push((int) 1)
0xe89: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xe8a: @ Face(Stack[-0])
0xe8b: Pop(0)
0xe8c: Push((bool) 1)
0xe8d: @ SetAttackState(Stack[-1])
0xe8e: Pop(1)
0xe8f: PushEmpty()
0xe90: Call2 0x135b

0xe91: Pop(0)
0xe92: Push("all")
0xe93: Push("attack_begin")
0xe94: Pop(1); Push(Stack[-1] + Stack[-6]);
0xe95: @ PlayAnimation(Stack[-2], Stack[-1])
0xe96: Pop(2)
0xe97: @ WaitForAnimEnd()
0xe98: Pop(0)
0xe99: PushEmpty()
0xe9a: Call2 0xfb5

0xe9b: Pop(0)
0xe9c: PushEmpty(bool, object)
0xe9d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9e: Call2 0x1190

0xe9f: Pop(1)
0xea0: Pop(1); Push((bool) Stack[-1] == 0)
0xea1: IF (Stack[-1] == 0) GOTO 0xea6; Pop(1)

0xea2: @ StopAsync()
0xea3: Pop(0)
0xea4: Stack[-10] = (bool) 0
0xea5: Return(); Pop(8)

0xea6: PushEmpty(float, int)
0xea7: Stack[-2] = Stack[-11]
0xea8: Stack[-1] = Stack[-6]
0xea9: Call2 0xe5b

0xeaa: Pop(2)
0xeab: Push("all")
0xeac: Push("attack_middle")
0xead: Pop(1); Push(Stack[-1] + Stack[-6]);
0xeae: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xeaf: Pop(2)
0xeb0: Push(Stack[-3])
0xeb1: IF (Stack[-1] == 0) GOTO 0xef7; Pop(1)

0xeb2: PushEmpty()
0xeb3: Call2 0x135b

0xeb4: Pop(0)
0xeb5: Push("all")
0xeb6: Push("attack_middle")
0xeb7: Pop(1); Push(Stack[-1] + Stack[-6]);
0xeb8: @ PlayAnimation(Stack[-2], Stack[-1])
0xeb9: Pop(2)
0xeba: @ WaitForAnimEnd()
0xebb: Pop(0)
0xebc: PushEmpty()
0xebd: Call2 0xfd5

0xebe: Pop(0)
0xebf: PushEmpty(bool, object)
0xec0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec1: Call2 0x1190

0xec2: Pop(1)
0xec3: Pop(1); Push((bool) Stack[-1] == 0)
0xec4: IF (Stack[-1] == 0) GOTO 0xec9; Pop(1)

0xec5: @ StopAsync()
0xec6: Pop(0)
0xec7: Stack[-10] = (bool) 0
0xec8: Return(); Pop(8)

0xec9: PushEmpty(float, int)
0xeca: Stack[-2] = Stack[-11]
0xecb: Stack[-1] = Stack[-6]
0xecc: Call2 0xe5b

0xecd: Pop(2)
0xece: Stack[-2] = (int) 1
0xecf: Push("attack_middle")
0xed0: Pop(1); Push(Stack[-1] + Stack[-5]);
0xed1: Push("_")
0xed2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xed3: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0xed4: Push("all")
0xed5: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0xed6: Pop(1)
0xed7: Pop(0); Push((bool) Stack[-3] == 0)
0xed8: IF (Stack[-1] == 0) GOTO 0xeda; Pop(1)

0xed9: GOTO 0xef7

0xeda: PushEmpty()
0xedb: Call2 0x135b

0xedc: Pop(0)
0xedd: Push("all")
0xede: @ PlayAnimation(Stack[-1], Stack[-2])
0xedf: Pop(1)
0xee0: @ WaitForAnimEnd()
0xee1: Pop(0)
0xee2: PushEmpty()
0xee3: Call2 0xfd5

0xee4: Pop(0)
0xee5: PushEmpty(bool, object)
0xee6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee7: Call2 0x1190

0xee8: Pop(1)
0xee9: Pop(1); Push((bool) Stack[-1] == 0)
0xeea: IF (Stack[-1] == 0) GOTO 0xeef; Pop(1)

0xeeb: @ StopAsync()
0xeec: Pop(0)
0xeed: Stack[-10] = (bool) 0
0xeee: Return(); Pop(8)

0xeef: PushEmpty(float, int)
0xef0: Stack[-2] = Stack[-11]
0xef1: Stack[-1] = Stack[-6]
0xef2: Call2 0xe5b

0xef3: Pop(2)
0xef4: Push((int) 1)
0xef5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xef6: GOTO 0xecf

0xef7: Push((bool) 0)
0xef8: @ SetAttackState(Stack[-1])
0xef9: Pop(1)
0xefa: Push("all")
0xefb: Push("attack_end")
0xefc: Pop(1); Push(Stack[-1] + Stack[-6]);
0xefd: @ PlayAnimation(Stack[-2], Stack[-1])
0xefe: Pop(2)
0xeff: PushEmpty(bool)
0xf00: Call2 0xfe3

0xf01: Pop(0)
0xf02: IF (Stack[-1] == 0) GOTO 0xf09; Pop(1)

0xf03: PushEmpty(bool, float)
0xf04: Stack[-1] = (float) 0.75
0xf05: Call2 0xf0b

0xf06: Pop(2)
0xf07: @ StopAsync()
0xf08: Pop(0)
0xf09: Stack[-10] = (bool) 1
0xf0a: Return(); Pop(8)

0xf0b: PushEmpty(float, bool, float, bool)
0xf0c: @ rand(Stack[-2])
0xf0d: Pop(0)
0xf0e: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0xf0f: IF (Stack[-1] == 0) GOTO 0xf1f; Pop(1)

0xf10: @ IsAnimationPlaying(Stack[-1])
0xf11: Pop(0)
0xf12: Pop(0); Push((bool) Stack[-1] == 0)
0xf13: IF (Stack[-1] == 0) GOTO 0xf15; Pop(1)

0xf14: GOTO 0xf1e

0xf15: PushEmpty(bool)
0xf16: Call2 0xf6d

0xf17: Pop(0)
0xf18: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf19: Stack[-6] = (bool) 1
0xf1a: Return(); Pop(4)

0xf1b: @ sync()
0xf1c: Pop(0)
0xf1d: GOTO 0xf10

0xf1e: GOTO 0xf24

0xf1f: @ WaitForAnimEnd()
0xf20: Pop(0)
0xf21: PushEmpty()
0xf22: Call2 0xfd5

0xf23: Pop(0)
0xf24: Stack[-6] = (bool) 0
0xf25: Return(); Pop(4)

0xf26: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0xf27: @ IsAnimationPlaying(Stack[-5])
0xf28: Pop(0)
0xf29: Pop(0); Push((bool) Stack[-5] == 0)
0xf2a: IF (Stack[-1] == 0) GOTO 0xf2c; Pop(1)

0xf2b: GOTO 0xf4c

0xf2c: PushEmpty(bool)
0xf2d: Call2 0xf6d

0xf2e: Pop(0)
0xf2f: IF (Stack[-1] == 0) GOTO 0xf32; Pop(1)

0xf30: Stack[-12] = (bool) 1
0xf31: Return(); Pop(10)

0xf32: PushEmpty(bool, object)
0xf33: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf34: Call2 0x1190

0xf35: Pop(1)
0xf36: Pop(1); Push((bool) Stack[-1] == 0)
0xf37: IF (Stack[-1] == 0) GOTO 0xf3a; Pop(1)

0xf38: Stack[-12] = (bool) 0
0xf39: Return(); Pop(10)

0xf3a: @@ GetPFPosition(Stack[-4])
0xf3b: Pop(0)
0xf3c: @ GetPFPosition(Stack[-3])
0xf3d: Pop(0)
0xf3e: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xf3f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xf40: Pop(0); Push(Stack[-11] * Stack[-11]);
0xf41: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf42: IF (Stack[-1] == 0) GOTO 0xf49; Pop(1)

0xf43: PushEmpty(bool, float)
0xf44: Stack[-1] = Stack[-13]
0xf45: Call2 0xe82

0xf46: Pop(2)
0xf47: Stack[-12] = (bool) 1
0xf48: Return(); Pop(10)

0xf49: @ sync()
0xf4a: Pop(0)
0xf4b: GOTO 0xf27

0xf4c: PushEmpty()
0xf4d: Call2 0xfd5

0xf4e: Pop(0)
0xf4f: Stack[-12] = (bool) 0
0xf50: Return(); Pop(10)

0xf51: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0xf52: PushEmpty(bool, object)
0xf53: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf54: Call2 0x1190

0xf55: Pop(1)
0xf56: Pop(1); Push((bool) Stack[-1] == 0)
0xf57: IF (Stack[-1] == 0) GOTO 0xf5a; Pop(1)

0xf58: Stack[-11] = (bool) 0
0xf59: Return(); Pop(10)

0xf5a: PushEmpty(bool)
0xf5b: Call2 0xfaa

0xf5c: Pop(0)
0xf5d: IF (Stack[-1] == 0) GOTO 0xf6b; Pop(1)

0xf5e: @@ GetPFPosition(Stack[-5])
0xf5f: Pop(0)
0xf60: @ GetPFPosition(Stack[-4])
0xf61: Pop(0)
0xf62: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xf63: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xf64: @@ GetAttackDistance(Stack[-1])
0xf65: Pop(0)
0xf66: Push((int) 50)
0xf67: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xf68: Pop(0); Push(Stack[-1] * Stack[-1]);
0xf69: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0xf6a: Return(); Pop(10)

0xf6b: Stack[-11] = (bool) 0
0xf6c: Return(); Pop(10)

0xf6d: PushEmpty(bool)
0xf6e: Stack[-1] = (bool) 0
0xf6f: PushEmpty(bool)
0xf70: Call2 0xf51

0xf71: Pop(0)
0xf72: IF (Stack[-1] == 0) GOTO 0xf78; Pop(1)

0xf73: PushEmpty(bool)
0xf74: Call2 0xf7d

0xf75: Pop(0)
0xf76: IF (Stack[-1] == 0) GOTO 0xf78; Pop(1)

0xf77: Stack[-1] = (bool) 1
0xf78: IF (Stack[-1] == 0) GOTO 0xf7b; Pop(1)

0xf79: Stack[-1] = (bool) 1
0xf7a: Return(); Pop(0)

0xf7b: Stack[-1] = (bool) 0
0xf7c: Return(); Pop(0)

0xf7d: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0xf7e: @ GetScene(Stack[-5])
0xf7f: Pop(0)
0xf80: Stack[-4] = (bool) 0
0xf81: PushEmpty(cvector, object)
0xf82: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf83: Call2 0x10fe

0xf84: Pop(1)
0xf85: Pop(1); Push(( -Stack[-1])
0xf86: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0xf87: Pop(1)
0xf88: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0xf89: IF (Stack[-1] == 0) GOTO 0xf8b; Pop(1)

0xf8a: GOTO 0xfa7

0xf8b: @ Face(Stack[-0])
0xf8c: Pop(0)
0xf8d: Push("all")
0xf8e: Push("bjump")
0xf8f: @ PlayAnimation(Stack[-2], Stack[-1])
0xf90: Pop(2)
0xf91: @@ GetPFPosition(Stack[-2])
0xf92: Pop(0)
0xf93: @ GetPFPosition(Stack[-1])
0xf94: Pop(0)
0xf95: @ WaitForAnimEnd()
0xf96: Pop(0)
0xf97: PushEmpty()
0xf98: Call2 0xfd5

0xf99: Pop(0)
0xf9a: @ StopAsync()
0xf9b: Pop(0)
0xf9c: Push(CVector(0.0, 0.0, 0.0))
0xf9d: @ SetSpeed(Stack[-1])
0xf9e: Pop(1)
0xf9f: Stack[-4] = (bool) 1
0xfa0: PushEmpty(bool)
0xfa1: Call2 0xf51

0xfa2: Pop(0)
0xfa3: Pop(1); Push((bool) Stack[-1] == 0)
0xfa4: IF (Stack[-1] == 0) GOTO 0xfa6; Pop(1)

0xfa5: GOTO 0xfa7

0xfa6: GOTO 0xf81

0xfa7: Stack[-11] = Stack[-4]
0xfa8: Return(); Pop(10)

0xfa9: Stack[-5] = 0
0xfaa: PushEmpty(bool, bool)
0xfab: Push("IsAttacking")
0xfac: Push((int) 1)
0xfad: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0xfae: IF (Stack[-1] == 0) GOTO 0xfb3; Pop(1)

0xfaf: @@ IsAttacking(Stack[-1])
0xfb0: Pop(0)
0xfb1: Stack[-3] = Stack[-1]
0xfb2: Return(); Pop(2)

0xfb3: Stack[-3] = (bool) 0
0xfb4: Return(); Pop(2)

0xfb5: PushEmpty(float, int, float, int)
0xfb6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xfb7: IF (Stack[-1] == 0) GOTO 0xfb9; Pop(1)

0xfb8: Return(); Pop(4)

0xfb9: Push( Stack[5 + Tasks[-1].StackPointer] )
0xfba: IF (Stack[-1] == 0) GOTO 0xfc1; Pop(1)

0xfbb: Push((int) -1)
0xfbc: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xfbd: Push((int) 0)
0xfbe: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0xfbf: IF (Stack[-1] == 0) GOTO 0xfc1; Pop(1)

0xfc0: Return(); Pop(4)

0xfc1: @ rand(Stack[-2])
0xfc2: Pop(0)
0xfc3: PushEmpty(float)
0xfc4: Call2 0xfe7

0xfc5: Pop(0)
0xfc6: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xfc7: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfc8: @ irand(Stack[-1], Stack[-2])
0xfc9: Pop(0)
0xfca: Push((int) 1)
0xfcb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xfcc: Push("attack")
0xfcd: Pop(1); Push(Stack[-1] + Stack[-2]);
0xfce: @ Speak(Stack[-1])
0xfcf: Pop(1)
0xfd0: PushEmpty(int)
0xfd1: Call2 0xfe5

0xfd2: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0xfd3: Pop(1)
0xfd4: Return(); Pop(4)

0xfd5: PushEmpty(object)
0xfd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd7: Call2 0x1352

0xfd8: Pop(1)
0xfd9: Return(); Pop(0)

0xfda: Stack[-1] = (int) 0
0xfdb: Return(); Pop(0)

0xfdc: PushEmpty(string)
0xfdd: Stack[-1] = "attack_stay"
0xfde: Call2 0x12be

0xfdf: Pop(1)
0xfe0: Return(); Pop(0)

0xfe1: PushEmpty()
0xfe2: Return(); Pop(0)

0xfe3: Stack[-1] = (bool) 1
0xfe4: Return(); Pop(0)

0xfe5: Stack[-1] = (int) 1
0xfe6: Return(); Pop(0)

0xfe7: Stack[-1] = (float) 0.5
0xfe8: Return(); Pop(0)

0xfe9: PushEmpty()
0xfea: Call2 0x102f

0xfeb: Pop(0)
0xfec: PushEmpty()
0xfed: Call2 0x171b

0xfee: Pop(0)
0xfef: Return(); Pop(0)

0xff0: PushEmpty(bool, bool, bool, bool)
0xff1: PushEmpty(object)
0xff2: Stack[-1] = Stack[-10]
0xff3: Call2 0x1352

0xff4: Pop(1)
0xff5: Push((int) 1)
0xff6: Push((int) 5)
0xff7: @ SetTimer(Stack[-2], Stack[-1])
0xff8: Pop(2)
0xff9: @ CanSee(Stack[-2], Stack[-9])
0xffa: Pop(0)
0xffb: Push(Stack[-2])
0xffc: IF (Stack[-1] == 0) GOTO 0x1003; Pop(1)

0xffd: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xffe: PushEmpty(object)
0xfff: Stack[-1] = Stack[-10]
0x1000: Call2 0x12ac

0x1001: Pop(1)
0x1002: GOTO 0x1004

0x1003: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1004: PushEmpty(bool, object)
0x1005: Stack[-1] = Stack[-11]
0x1006: Call2 0x110d

0x1007: Pop(1)
0x1008: IF (Stack[-1] == 0) GOTO 0x100e; Pop(1)

0x1009: PushEmpty(object)
0x100a: Call2 0x12e7

0x100b: Pop(0)
0x100c: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x100d: Pop(1)
0x100e: PushEmpty(bool, object, float, float, bool, bool)
0x100f: Stack[-5] = Stack[-15]
0x1010: Stack[-4] = Stack[-14]
0x1011: Stack[-3] = Stack[-13]
0x1012: Stack[-2] = Stack[-12]
0x1013: Stack[-1] = Stack[-11]
0x1014: Call2 0x1059

0x1015: Stack[-7] = Stack[-6]
0x1016: Pop(6)
0x1017: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1018: IF (Stack[-1] == 0) GOTO 0x101c; Pop(1)

0x1019: Push("head")
0x101a: @ UnlookAsync(Stack[-1])
0x101b: Pop(1)
0x101c: Push((int) 1)
0x101d: @ KillTimer(Stack[-1])
0x101e: Pop(1)
0x101f: Stack[-10] = Stack[-1]
0x1020: Return(); Pop(4)

0x1021: PushEmpty()
0x1022: Push((int) 1)
0x1023: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1024: IF (Stack[-1] == 0) GOTO 0x102a; Pop(1)

0x1025: PushEmpty(object)
0x1026: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1027: Call2 0x1352

0x1028: Pop(1)
0x1029: GOTO 0x102e

0x102a: PushEmpty(int)
0x102b: Stack[-1] = Stack[-2]
0x102c: Call2 0x10bf

0x102d: Pop(1)
0x102e: Return(); Pop(0)

0x102f: Push((int) 1)
0x1030: @ KillTimer(Stack[-1])
0x1031: Pop(1)
0x1032: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1033: IF (Stack[-1] == 0) GOTO 0x1038; Pop(1)

0x1034: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1035: Push("head")
0x1036: @ UnlookAsync(Stack[-1])
0x1037: Pop(1)
0x1038: PushEmpty()
0x1039: Call2 0x10d5

0x103a: Pop(0)
0x103b: Return(); Pop(0)

0x103c: PushEmpty()
0x103d: PushEmpty(bool)
0x103e: Stack[-1] = (bool) 0
0x103f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x1040: IF (Stack[-1] == 0) GOTO 0x1044; Pop(1)

0x1041: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1042: IF (Stack[-1] == 0) GOTO 0x1044; Pop(1)

0x1043: Stack[-1] = (bool) 1
0x1044: IF (Stack[-1] == 0) GOTO 0x104a; Pop(1)

0x1045: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1046: PushEmpty(object)
0x1047: Stack[-1] = Stack[-2]
0x1048: Call2 0x12ac

0x1049: Pop(1)
0x104a: Return(); Pop(0)

0x104b: PushEmpty()
0x104c: PushEmpty(bool)
0x104d: Stack[-1] = (bool) 0
0x104e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x104f: IF (Stack[-1] == 0) GOTO 0x1053; Pop(1)

0x1050: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1051: IF (Stack[-1] == 0) GOTO 0x1053; Pop(1)

0x1052: Stack[-1] = (bool) 1
0x1053: IF (Stack[-1] == 0) GOTO 0x1058; Pop(1)

0x1054: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1055: Push("head")
0x1056: @ UnlookAsync(Stack[-1])
0x1057: Pop(1)
0x1058: Return(); Pop(0)

0x1059: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x105a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x105b: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x105c: Stack[-7] = Stack[-17]
0x105d: PushEmpty(bool, object)
0x105e: Stack[-1] = Stack[-23]
0x105f: Call2 0x10e5

0x1060: Pop(1)
0x1061: Pop(1); Push((bool) Stack[-1] == 0)
0x1062: IF (Stack[-1] == 0) GOTO 0x1065; Pop(1)

0x1063: Stack[-22] = (bool) 0
0x1064: Return(); Pop(16)

0x1065: @@ GetPosition(Stack[-5])
0x1066: Pop(0)
0x1067: @ GetPosition(Stack[-4])
0x1068: Pop(0)
0x1069: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x106a: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x106b: PushEmpty(bool)
0x106c: Stack[-1] = (bool) 0
0x106d: Push((int) 0)
0x106e: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x106f: IF (Stack[-1] == 0) GOTO 0x1074; Pop(1)

0x1070: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1071: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1072: IF (Stack[-1] == 0) GOTO 0x1074; Pop(1)

0x1073: Stack[-1] = (bool) 1
0x1074: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1075: @ Stop()
0x1076: Pop(0)
0x1077: Stack[-22] = (bool) 0
0x1078: Return(); Pop(16)

0x1079: Pop(0); Push(Stack[-20] * Stack[-20]);
0x107a: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x107b: IF (Stack[-1] == 0) GOTO 0x10b7; Pop(1)

0x107c: @@ GetPFPosition(Stack[-5])
0x107d: Pop(0)
0x107e: @ FindPathTo(Stack[-1], Stack[-5])
0x107f: Pop(0)
0x1080: Pop(0); Push(( Stack[-1] != 0 )
0x1081: IF (Stack[-1] == 0) GOTO 0x1084; Pop(1)

0x1082: Stack[-6] = Stack[-1]
0x1083: Stack[-1] = 0
0x1084: Pop(0); Push(( Stack[-6] != 0 )
0x1085: IF (Stack[-1] == 0) GOTO 0x10a5; Pop(1)

0x1086: Push(Stack[-7])
0x1087: IF (Stack[-1] == 0) GOTO 0x108e; Pop(1)

0x1088: Stack[-7] = (bool) 0
0x1089: @ RotatePath(Stack[-6], Stack[-8])
0x108a: Pop(0)
0x108b: Pop(0); Push((bool) Stack[-8] == 0)
0x108c: IF (Stack[-1] == 0) GOTO 0x108e; Pop(1)

0x108d: GOTO 0x10bd

0x108e: Push((int) 0)
0x108f: Push((float)0.3)
0x1090: @ SetTimer(Stack[-2], Stack[-1])
0x1091: Pop(2)
0x1092: PushEmpty(string)
0x1093: Call2 0x10ec

0x1094: Pop(0)
0x1095: PushEmpty(string)
0x1096: Call2 0x10ee

0x1097: Pop(0)
0x1098: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x1099: Pop(2)
0x109a: Pop(0); Push((bool) Stack[-8] == 0)
0x109b: IF (Stack[-1] == 0) GOTO 0x10a3; Pop(1)

0x109c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x109d: IF (Stack[-1] == 0) GOTO 0x10a1; Pop(1)

0x109e: Stack[-6] = 0
0x109f: GOTO 0x10bd

0x10a0: GOTO 0x10a2

0x10a1: GOTO 0x10bc

0x10a2: GOTO 0x10a4

0x10a3: Stack[-6] = 0
0x10a4: GOTO 0x10b5

0x10a5: Push((int) 0)
0x10a6: @ KillTimer(Stack[-1])
0x10a7: Pop(1)
0x10a8: Push((float)0.5)
0x10a9: @ Sleep(Stack[-1], Stack[-9])
0x10aa: Pop(1)
0x10ab: Pop(0); Push((bool) Stack[-8] == 0)
0x10ac: IF (Stack[-1] == 0) GOTO 0x10b1; Pop(1)

0x10ad: Push( Stack[0 + Tasks[-1].StackPointer] )
0x10ae: IF (Stack[-1] == 0) GOTO 0x10b1; Pop(1)

0x10af: Stack[-6] = 0
0x10b0: GOTO 0x10bd

0x10b1: Push((int) 0)
0x10b2: Push((float)0.3)
0x10b3: @ SetTimer(Stack[-2], Stack[-1])
0x10b4: Pop(2)
0x10b5: Stack[-1] = 0
0x10b6: GOTO 0x10bb

0x10b7: Push((int) 0)
0x10b8: @ KillTimer(Stack[-1])
0x10b9: Pop(1)
0x10ba: GOTO 0x10bd

0x10bb: Stack[-6] = 0
0x10bc: GOTO 0x105d

0x10bd: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x10be: Return(); Pop(16)

0x10bf: PushEmpty()
0x10c0: Push((int) 0)
0x10c1: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x10c2: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10c3: Return(); Pop(0)

0x10c4: PushEmpty(bool, object)
0x10c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10c6: Call2 0x10e5

0x10c7: Pop(1)
0x10c8: Pop(1); Push((bool) Stack[-1] == 0)
0x10c9: IF (Stack[-1] == 0) GOTO 0x10cb; Pop(1)

0x10ca: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x10cb: Push((int) 0)
0x10cc: @ KillTimer(Stack[-1])
0x10cd: Pop(1)
0x10ce: @ Stop()
0x10cf: Pop(0)
0x10d0: Return(); Pop(0)

0x10d1: PushEmpty()
0x10d2: @ RequestClearPath(Stack[-1])
0x10d3: Pop(0)
0x10d4: Return(); Pop(0)

0x10d5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x10d6: Push((int) 0)
0x10d7: @ KillTimer(Stack[-1])
0x10d8: Pop(1)
0x10d9: @ Stop()
0x10da: Pop(0)
0x10db: Return(); Pop(0)

0x10dc: PushEmpty()
0x10dd: PushEmpty()
0x10de: Call2 0x102f

0x10df: Pop(0)
0x10e0: PushEmpty(object)
0x10e1: Stack[-1] = Stack[-2]
0x10e2: Call2 0x15e2

0x10e3: Pop(1)
0x10e4: Return(); Pop(0)

0x10e5: PushEmpty()
0x10e6: PushEmpty(bool, object)
0x10e7: Stack[-1] = Stack[-3]
0x10e8: Call2 0x1190

0x10e9: Stack[-4] = Stack[-2]
0x10ea: Pop(2)
0x10eb: Return(); Pop(0)

0x10ec: Stack[-1] = "walk"
0x10ed: Return(); Pop(0)

0x10ee: Stack[-1] = "run"
0x10ef: Return(); Pop(0)

0x10f0: PushEmpty()
0x10f1: Push((int) 2)
0x10f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f3: IF (Stack[-1] == 0) GOTO 0x10f7; Pop(1)

0x10f4: Stack[-2] = "fire"
0x10f5: Return(); Pop(0)

0x10f6: GOTO 0x10fc

0x10f7: Push((int) 1)
0x10f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f9: IF (Stack[-1] == 0) GOTO 0x10fc; Pop(1)

0x10fa: Stack[-2] = "bullet"
0x10fb: Return(); Pop(0)

0x10fc: Stack[-2] = "phys"
0x10fd: Return(); Pop(0)

0x10fe: PushEmpty(cvector, cvector, cvector, cvector)
0x10ff: @ GetPosition(Stack[-2])
0x1100: Pop(0)
0x1101: @@ GetPosition(Stack[-1])
0x1102: Pop(0)
0x1103: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x1104: Return(); Pop(4)

0x1105: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1106: @ GetPosition(Stack[-3])
0x1107: Pop(0)
0x1108: @@ GetPosition(Stack[-2])
0x1109: Pop(0)
0x110a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x110b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x110c: Return(); Pop(6)

0x110d: PushEmpty(bool, bool)
0x110e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x110f: Pop(0)
0x1110: Stack[-4] = Stack[-1]
0x1111: Return(); Pop(2)

0x1112: PushEmpty(bool, bool)
0x1113: Push("HasProperty")
0x1114: Push((int) 2)
0x1115: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1116: Pop(1); Push((bool) Stack[-1] == 0)
0x1117: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x1118: Stack[-5] = (bool) 0
0x1119: Return(); Pop(2)

0x111a: @@ HasProperty(Stack[-3], Stack[-1])
0x111b: Pop(0)
0x111c: Stack[-5] = Stack[-1]
0x111d: Return(); Pop(2)

0x111e: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x111f: PushEmpty(bool, object, string)
0x1120: Stack[-2] = Stack[-18]
0x1121: Stack[-1] = "health"
0x1122: Call2 0x1112

0x1123: Pop(2)
0x1124: Pop(1); Push((bool) Stack[-1] == 0)
0x1125: IF (Stack[-1] == 0) GOTO 0x1128; Pop(1)

0x1126: Stack[-16] = (float) 0.0
0x1127: Return(); Pop(12)

0x1128: PushEmpty(bool, object, string)
0x1129: Stack[-2] = Stack[-18]
0x112a: Stack[-1] = "armor"
0x112b: Call2 0x1112

0x112c: Pop(2)
0x112d: Pop(1); Push((bool) Stack[-1] == 0)
0x112e: IF (Stack[-1] == 0) GOTO 0x1131; Pop(1)

0x112f: Stack[-6] = (int) 0
0x1130: GOTO 0x1134

0x1131: Push("armor")
0x1132: @@ GetProperty(Stack[-1], Stack[-7])
0x1133: Pop(1)
0x1134: Push("armor_")
0x1135: PushEmpty(string, int)
0x1136: Stack[-1] = Stack[-16]
0x1137: Call2 0x10f0

0x1138: Pop(1)
0x1139: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x113a: PushEmpty(bool, object, string)
0x113b: Stack[-2] = Stack[-18]
0x113c: Stack[-1] = Stack[-8]
0x113d: Call2 0x1112

0x113e: Pop(2)
0x113f: Pop(1); Push((bool) Stack[-1] == 0)
0x1140: IF (Stack[-1] == 0) GOTO 0x1143; Pop(1)

0x1141: Stack[-4] = (int) 0
0x1142: GOTO 0x1145

0x1143: @@ GetProperty(Stack[-5], Stack[-4])
0x1144: Pop(0)
0x1145: PushEmpty(float, float, float)
0x1146: Pop(0); Push(Stack[-9] + Stack[-7]);
0x1147: Push((float)100.0)
0x1148: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x1149: Stack[-1] = (int) 1
0x114a: Call2 0x12f7

0x114b: Stack[-6] = Stack[-3]
0x114c: Pop(3)
0x114d: Push("health")
0x114e: @@ GetProperty(Stack[-1], Stack[-3])
0x114f: Pop(1)
0x1150: Push((int) 1)
0x1151: Pop(1); Push(Stack[-1] - Stack[-4]);
0x1152: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x1153: Push("health")
0x1154: PushEmpty(float, float, float, float)
0x1155: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x1156: Stack[-2] = (int) 0
0x1157: Stack[-1] = (int) 1
0x1158: Call2 0x12fe

0x1159: Pop(3)
0x115a: @@ SetProperty(Stack[-2], Stack[-1])
0x115b: Pop(2)
0x115c: PushEmpty(bool, object)
0x115d: Stack[-1] = Stack[-17]
0x115e: Call2 0x110d

0x115f: Pop(1)
0x1160: IF (Stack[-1] == 0) GOTO 0x1165; Pop(1)

0x1161: PushEmpty(float)
0x1162: Stack[-1] = -Stack[-2]; Pop(0);
0x1163: Call2 0x1338

0x1164: Pop(1)
0x1165: Stack[-16] = Stack[-1]
0x1166: Return(); Pop(12)

0x1167: PushEmpty(bool, bool)
0x1168: @@ IsDead(Stack[-1])
0x1169: Pop(0)
0x116a: Stack[-4] = Stack[-1]
0x116b: Return(); Pop(2)

0x116c: PushEmpty(object, object, object, object)
0x116d: Pop(0); Push((bool) Stack[-5] == 0)
0x116e: IF (Stack[-1] == 0) GOTO 0x1171; Pop(1)

0x116f: Stack[-6] = (bool) 0
0x1170: Return(); Pop(4)

0x1171: PushEmpty(bool)
0x1172: Stack[-1] = (bool) 0
0x1173: Push("IsDead")
0x1174: Push((int) 1)
0x1175: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x1176: IF (Stack[-1] == 0) GOTO 0x117d; Pop(1)

0x1177: PushEmpty(bool, object)
0x1178: Stack[-1] = Stack[-8]
0x1179: Call2 0x1167

0x117a: Pop(1)
0x117b: IF (Stack[-1] == 0) GOTO 0x117d; Pop(1)

0x117c: Stack[-1] = (bool) 1
0x117d: IF (Stack[-1] == 0) GOTO 0x1180; Pop(1)

0x117e: Stack[-6] = (bool) 0
0x117f: Return(); Pop(4)

0x1180: @ GetScene(Stack[-2])
0x1181: Pop(0)
0x1182: Pop(0); Push((bool) Stack[-2] == 0)
0x1183: IF (Stack[-1] == 0) GOTO 0x1186; Pop(1)

0x1184: Stack[-6] = (bool) 0
0x1185: Return(); Pop(4)

0x1186: @@ GetScene(Stack[-1])
0x1187: Pop(0)
0x1188: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x1189: IF (Stack[-1] == 0) GOTO 0x118c; Pop(1)

0x118a: Stack[-6] = (bool) 0
0x118b: Return(); Pop(4)

0x118c: Stack[-6] = (bool) 1
0x118d: Return(); Pop(4)

0x118e: Stack[-1] = 0
0x118f: Stack[-2] = 0
0x1190: PushEmpty(int, int)
0x1191: PushEmpty(bool, object)
0x1192: Stack[-1] = Stack[-5]
0x1193: Call2 0x116c

0x1194: Pop(1)
0x1195: Pop(1); Push((bool) Stack[-1] == 0)
0x1196: IF (Stack[-1] == 0) GOTO 0x1199; Pop(1)

0x1197: Stack[-4] = (bool) 0
0x1198: Return(); Pop(2)

0x1199: PushEmpty(bool, object, string)
0x119a: Stack[-2] = Stack[-6]
0x119b: Stack[-1] = "noaccess"
0x119c: Call2 0x1112

0x119d: Pop(2)
0x119e: Pop(1); Push((bool) Stack[-1] == 0)
0x119f: IF (Stack[-1] == 0) GOTO 0x11a2; Pop(1)

0x11a0: Stack[-4] = (bool) 1
0x11a1: Return(); Pop(2)

0x11a2: Push("noaccess")
0x11a3: @@ GetProperty(Stack[-1], Stack[-2])
0x11a4: Pop(1)
0x11a5: Push((int) 0)
0x11a6: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x11a7: Return(); Pop(2)

0x11a8: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x11a9: Pop(0); Push((bool) Stack[-15] == 0)
0x11aa: IF (Stack[-1] == 0) GOTO 0x11ac; Pop(1)

0x11ab: Return(); Pop(14)

0x11ac: @ IsDead(Stack[-7])
0x11ad: Pop(0)
0x11ae: Push(Stack[-7])
0x11af: IF (Stack[-1] == 0) GOTO 0x11b1; Pop(1)

0x11b0: Return(); Pop(14)

0x11b1: @ GetSecondaryAnimationType(Stack[-6])
0x11b2: Pop(0)
0x11b3: Push((int) 0)
0x11b4: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x11b5: IF (Stack[-1] == 0) GOTO 0x11b7; Pop(1)

0x11b6: Return(); Pop(14)

0x11b7: @@ GetPosition(Stack[-5])
0x11b8: Pop(0)
0x11b9: @ GetPosition(Stack[-4])
0x11ba: Pop(0)
0x11bb: @ GetDirection(Stack[-3])
0x11bc: Pop(0)
0x11bd: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x11be: Push(CvectorIndex(Stack[-2], 0))
0x11bf: Push(CvectorIndex(Stack[-4], 0))
0x11c0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11c1: Push(CvectorIndex(Stack[-3], 2))
0x11c2: Push(CvectorIndex(Stack[-5], 2))
0x11c3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11c5: Push((int) 0)
0x11c6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x11c7: IF (Stack[-1] == 0) GOTO 0x11ca; Pop(1)

0x11c8: Stack[-1] = "fhit"
0x11c9: GOTO 0x11cb

0x11ca: Stack[-1] = "bhit"
0x11cb: Push("hit_react")
0x11cc: Push("1")
0x11cd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11ce: Push("2")
0x11cf: Pop(1); Push(Stack[-4] + Stack[-1]);
0x11d0: Push((int) -10)
0x11d1: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11d2: Pop(4)
0x11d3: Return(); Pop(14)

0x11d4: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x11d5: PushEmpty(bool)
0x11d6: Stack[-1] = (bool) 0
0x11d7: PushEmpty(bool)
0x11d8: Stack[-1] = (bool) 0
0x11d9: Push(Stack[-23])
0x11da: IF (Stack[-1] == 0) GOTO 0x11df; Pop(1)

0x11db: Push((int) 4)
0x11dc: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x11dd: IF (Stack[-1] == 0) GOTO 0x11df; Pop(1)

0x11de: Stack[-1] = (bool) 1
0x11df: IF (Stack[-1] == 0) GOTO 0x11e4; Pop(1)

0x11e0: Push((int) 5)
0x11e1: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x11e2: IF (Stack[-1] == 0) GOTO 0x11e4; Pop(1)

0x11e3: Stack[-1] = (bool) 1
0x11e4: IF (Stack[-1] == 0) GOTO 0x1213; Pop(1)

0x11e5: PushEmpty(cvector, cvector)
0x11e6: PushEmpty(cvector, object)
0x11e7: Stack[-1] = Stack[-25]
0x11e8: Call2 0x10fe

0x11e9: Stack[-3] = Stack[-2]
0x11ea: Pop(2)
0x11eb: Call2 0x12ed

0x11ec: Stack[-11] = Stack[-2]
0x11ed: Pop(2)
0x11ee: @ CreateVectorVector(Stack[-8])
0x11ef: Pop(0)
0x11f0: Stack[-7] = (int) 1
0x11f1: Push("hit")
0x11f2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x11f3: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x11f4: Pop(1)
0x11f5: Pop(0); Push((bool) Stack[-6] == 0)
0x11f6: IF (Stack[-1] == 0) GOTO 0x11f8; Pop(1)

0x11f7: GOTO 0x1201

0x11f8: Pop(0); Push(Stack[-4] | Stack[-9]);
0x11f9: Push((float)0.70711)
0x11fa: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x11fb: IF (Stack[-1] == 0) GOTO 0x11fe; Pop(1)

0x11fc: @@ add(Stack[-5])
0x11fd: Pop(0)
0x11fe: Push((int) 1)
0x11ff: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x1200: GOTO 0x11f1

0x1201: @@ size(Stack[-3])
0x1202: Pop(0)
0x1203: Push(Stack[-3])
0x1204: IF (Stack[-1] == 0) GOTO 0x1212; Pop(1)

0x1205: @ irand(Stack[-2], Stack[-3])
0x1206: Pop(0)
0x1207: @@ get(Stack[-1], Stack[-2])
0x1208: Pop(0)
0x1209: PushEmpty(object, int, float, cvector, cvector)
0x120a: Stack[-5] = Stack[-26]
0x120b: Stack[-4] = Stack[-25]
0x120c: Stack[-3] = Stack[-24]
0x120d: Stack[-2] = Stack[-6]
0x120e: Stack[-1] = -Stack[-14]; Pop(0);
0x120f: Call2 0x1218

0x1210: Pop(5)
0x1211: Return(); Pop(18)

0x1212: Stack[-8] = 0
0x1213: PushEmpty(object)
0x1214: Stack[-1] = Stack[-22]
0x1215: Call2 0x11a8

0x1216: Pop(1)
0x1217: Return(); Pop(18)

0x1218: PushEmpty(object, object, object, object)
0x1219: @ GetScene(Stack[-2])
0x121a: Pop(0)
0x121b: Push("scripted")
0x121c: Push("blood_dir.xml")
0x121d: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x121e: Pop(2)
0x121f: PushEmpty(object)
0x1220: Stack[-1] = Stack[-10]
0x1221: Call2 0x11a8

0x1222: Pop(1)
0x1223: Return(); Pop(4)

0x1224: Stack[-1] = 0
0x1225: Stack[-2] = 0
0x1226: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1227: @@ GetPosition(Stack[-3])
0x1228: Pop(0)
0x1229: @ GetPosition(Stack[-2])
0x122a: Pop(0)
0x122b: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x122c: Push(CvectorIndex(Stack[-1], 0))
0x122d: Push(CvectorIndex(Stack[-2], 2))
0x122e: @ RotateAsync(Stack[-2], Stack[-1])
0x122f: Pop(2)
0x1230: Return(); Pop(6)

0x1231: PushEmpty(bool, bool)
0x1232: @ IsLoaded(Stack[-1])
0x1233: Pop(0)
0x1234: Stack[-3] = Stack[-1]
0x1235: Return(); Pop(2)

0x1236: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1237: @@ GetPosition(Stack[-8])
0x1238: Pop(0)
0x1239: @@ GetEyesHeight(Stack[-9])
0x123a: Pop(0)
0x123b: Push(CvectorIndex(Stack[-8], 1))
0x123c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x123d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x123e: @ GetPosition(Stack[-7])
0x123f: Pop(0)
0x1240: @ GetEyesHeight(Stack[-9])
0x1241: Pop(0)
0x1242: Push(CvectorIndex(Stack[-7], 1))
0x1243: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1244: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1245: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1246: Push(CvectorIndex(Stack[-6], 1))
0x1247: Stack[-1] = (int) 0
0x1248: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1249: Pop(0); Push(Stack[-6] | Stack[-6]);
0x124a: Pop(1); Push(Sqrt(Stack[-1]))
0x124b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x124c: Stack[-5] = -Stack[-6]; Pop(0);
0x124d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x124e: PushEmpty(cvector, cvector)
0x124f: Push(CVector(0.0, 1.0, 0.0))
0x1250: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1251: Call2 0x12ed

0x1252: Pop(1)
0x1253: Push((int) 25)
0x1254: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1255: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1256: Push(CVector(0.0, 10.0, 0.0))
0x1257: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1258: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1259: @ IsOverrideActive(Stack[-2])
0x125a: Pop(0)
0x125b: Push(Stack[-2])
0x125c: IF (Stack[-1] == 0) GOTO 0x125f; Pop(1)

0x125d: Stack[-21] = (bool) 0
0x125e: Return(); Pop(18)

0x125f: @ StopWorld()
0x1260: Pop(0)
0x1261: Push((bool) 1)
0x1262: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1263: Pop(1)
0x1264: Push(CvectorIndex(Stack[-4], 0))
0x1265: Push(CvectorIndex(Stack[-5], 2))
0x1266: @ Rotate(Stack[-2], Stack[-1])
0x1267: Pop(2)
0x1268: PushEmpty(bool)
0x1269: Call2 0x1814

0x126a: Pop(0)
0x126b: IF (Stack[-1] == 0) GOTO 0x126d; Pop(1)

0x126c: GOTO 0x1275

0x126d: Push("head")
0x126e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x126f: Pop(1)
0x1270: Push(Stack[-1])
0x1271: IF (Stack[-1] == 0) GOTO 0x1275; Pop(1)

0x1272: Push("head")
0x1273: @ LookAsyncCamera(Stack[-1])
0x1274: Pop(1)
0x1275: @ CameraWaitForPlayFinish()
0x1276: Pop(0)
0x1277: @ ResumeWorld()
0x1278: Pop(0)
0x1279: Stack[-21] = (bool) 1
0x127a: Return(); Pop(18)

0x127b: PushEmpty(bool, bool)
0x127c: Push((bool) 1)
0x127d: @ CameraSwitchToNormal(Stack[-1])
0x127e: Pop(1)
0x127f: PushEmpty(bool)
0x1280: Call2 0x1814

0x1281: Pop(0)
0x1282: IF (Stack[-1] == 0) GOTO 0x1284; Pop(1)

0x1283: GOTO 0x128c

0x1284: Push("head")
0x1285: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1286: Pop(1)
0x1287: Push(Stack[-1])
0x1288: IF (Stack[-1] == 0) GOTO 0x128c; Pop(1)

0x1289: Push("head")
0x128a: @ UnlookAsync(Stack[-1])
0x128b: Pop(1)
0x128c: Return(); Pop(2)

0x128d: PushEmpty(bool, float, float, bool, float, float)
0x128e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x128f: Pop(0)
0x1290: Push(Stack[-3])
0x1291: IF (Stack[-1] == 0) GOTO 0x1298; Pop(1)

0x1292: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1293: Pop(0)
0x1294: Push((bool) 0)
0x1295: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1296: Pop(1)
0x1297: GOTO 0x129c

0x1298: Push("Can't find lsh animation : ")
0x1299: Pop(1); Push(Stack[-1] + Stack[-8]);
0x129a: @ Trace(Stack[-1])
0x129b: Pop(1)
0x129c: Return(); Pop(6)

0x129d: PushEmpty(bool, float, float, bool, float, float)
0x129e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x129f: Pop(0)
0x12a0: Push(Stack[-3])
0x12a1: IF (Stack[-1] == 0) GOTO 0x12a7; Pop(1)

0x12a2: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x12a3: Pop(0)
0x12a4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x12a5: Pop(0)
0x12a6: GOTO 0x12ab

0x12a7: Push("Can't find lsh animation : ")
0x12a8: Pop(1); Push(Stack[-1] + Stack[-9]);
0x12a9: @ Trace(Stack[-1])
0x12aa: Pop(1)
0x12ab: Return(); Pop(6)

0x12ac: PushEmpty(float, cvector, float, cvector)
0x12ad: @@ GetEyesHeight(Stack[-2])
0x12ae: Pop(0)
0x12af: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x12b0: Push(CvectorIndex(Stack[-1], 1))
0x12b1: Stack[-1] = Stack[-3]
0x12b2: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x12b3: Push("head")
0x12b4: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x12b5: Pop(1)
0x12b6: Return(); Pop(4)

0x12b7: PushEmpty(bool)
0x12b8: Call2 0x1814

0x12b9: Pop(0)
0x12ba: IF (Stack[-1] == 0) GOTO 0x12bd; Pop(1)

0x12bb: @ lshStopSpeech()
0x12bc: Pop(0)
0x12bd: Return(); Pop(0)

0x12be: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x12bf: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x12c0: Pop(0)
0x12c1: Pop(0); Push((bool) Stack[-8] == 0)
0x12c2: IF (Stack[-1] == 0) GOTO 0x12d7; Pop(1)

0x12c3: Stack[-7] = (int) 0
0x12c4: Push((int) 1)
0x12c5: Pop(1); Push(Stack[-8] + Stack[-1]);
0x12c6: Pop(1); Push(Stack[-18] + Stack[-1]);
0x12c7: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x12c8: Pop(1)
0x12c9: Pop(0); Push((bool) Stack[-6] == 0)
0x12ca: IF (Stack[-1] == 0) GOTO 0x12cc; Pop(1)

0x12cb: GOTO 0x12cf

0x12cc: Push((int) 1)
0x12cd: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x12ce: GOTO 0x12c4

0x12cf: Pop(0); Push((bool) Stack[-7] == 0)
0x12d0: IF (Stack[-1] == 0) GOTO 0x12d2; Pop(1)

0x12d1: Return(); Pop(16)

0x12d2: @ irand(Stack[-5], Stack[-7])
0x12d3: Pop(0)
0x12d4: Push((int) 1)
0x12d5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12d6: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x12d7: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x12d8: Pop(0)
0x12d9: Push(Stack[-4])
0x12da: IF (Stack[-1] == 0) GOTO 0x12e6; Pop(1)

0x12db: @ GetEyesHeight(Stack[-3])
0x12dc: Pop(0)
0x12dd: @ GetDirection(Stack[-2])
0x12de: Pop(0)
0x12df: Push((int) 50)
0x12e0: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x12e1: Push(CvectorIndex(Stack[-1], 1))
0x12e2: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x12e3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x12e4: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x12e5: Pop(0)
0x12e6: Return(); Pop(16)

0x12e7: PushEmpty(object, object)
0x12e8: @ self(Stack[-1])
0x12e9: Pop(0)
0x12ea: Stack[-3] = Stack[-1]
0x12eb: Return(); Pop(2)

0x12ec: Stack[-1] = 0
0x12ed: PushEmpty(float, float)
0x12ee: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12ef: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x12f0: Push((float)0.0)
0x12f1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12f2: IF (Stack[-1] == 0) GOTO 0x12f5; Pop(1)

0x12f3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x12f4: Return(); Pop(2)

0x12f5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x12f6: Return(); Pop(2)

0x12f7: PushEmpty()
0x12f8: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x12f9: IF (Stack[-1] == 0) GOTO 0x12fc; Pop(1)

0x12fa: Stack[-3] = Stack[-2]
0x12fb: GOTO 0x12fd

0x12fc: Stack[-3] = Stack[-1]
0x12fd: Return(); Pop(0)

0x12fe: PushEmpty()
0x12ff: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1300: IF (Stack[-1] == 0) GOTO 0x1303; Pop(1)

0x1301: Stack[-4] = Stack[-2]
0x1302: Return(); Pop(0)

0x1303: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x1304: IF (Stack[-1] == 0) GOTO 0x1307; Pop(1)

0x1305: Stack[-4] = Stack[-1]
0x1306: Return(); Pop(0)

0x1307: Stack[-4] = Stack[-3]
0x1308: Return(); Pop(0)

0x1309: PushEmpty(object, object)
0x130a: @ CreateObjectVector(Stack[-1])
0x130b: Pop(0)
0x130c: Stack[-3] = Stack[-1]
0x130d: Return(); Pop(2)

0x130e: Stack[-1] = 0
0x130f: PushEmpty()
0x1310: Push(CvectorIndex(Stack[-2], 0))
0x1311: Push(CvectorIndex(Stack[-2], 0))
0x1312: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1313: Push(CvectorIndex(Stack[-3], 2))
0x1314: Push(CvectorIndex(Stack[-3], 2))
0x1315: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1316: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1317: Return(); Pop(0)

0x1318: PushEmpty()
0x1319: Push(CvectorIndex(Stack[-1], 0))
0x131a: Push(CvectorIndex(Stack[-2], 0))
0x131b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x131c: Push(CvectorIndex(Stack[-2], 2))
0x131d: Push(CvectorIndex(Stack[-3], 2))
0x131e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x131f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1320: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x1321: Return(); Pop(0)

0x1322: PushEmpty()
0x1323: PushEmpty(float, cvector, cvector)
0x1324: Stack[-2] = Stack[-5]
0x1325: Stack[-1] = Stack[-4]
0x1326: Call2 0x130f

0x1327: Pop(2)
0x1328: PushEmpty(float, cvector)
0x1329: Stack[-1] = Stack[-5]
0x132a: Call2 0x1318

0x132b: Pop(1)
0x132c: PushEmpty(float, cvector)
0x132d: Stack[-1] = Stack[-5]
0x132e: Call2 0x1318

0x132f: Pop(1)
0x1330: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1331: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x1332: Return(); Pop(0)

0x1333: PushEmpty(int, int)
0x1334: @ GetVariable(Stack[-3], Stack[-1])
0x1335: Pop(0)
0x1336: Stack[-4] = Stack[-1]
0x1337: Return(); Pop(2)

0x1338: PushEmpty(object, object)
0x1339: @ CreateFloatVector(Stack[-1])
0x133a: Pop(0)
0x133b: @@ add(Stack[-3])
0x133c: Pop(0)
0x133d: Push((int) 0)
0x133e: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x133f: IF (Stack[-1] == 0) GOTO 0x1344; Pop(1)

0x1340: Push((float)0.7)
0x1341: Push((int) 500)
0x1342: @ RumblePlay(Stack[-2], Stack[-1])
0x1343: Pop(2)
0x1344: Push((int) 15)
0x1345: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1346: Pop(1)
0x1347: Return(); Pop(2)

0x1348: Stack[-1] = 0
0x1349: PushEmpty(float, float)
0x134a: @ GetGameTime(Stack[-1])
0x134b: Pop(0)
0x134c: Push((int) 1)
0x134d: PushEmpty(int)
0x134e: Push((int) 24)
0x134f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1350: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1351: Return(); Pop(2)

0x1352: PushEmpty(bool, bool)
0x1353: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1354: Pop(0)
0x1355: Push(Stack[-1])
0x1356: IF (Stack[-1] == 0) GOTO 0x135a; Pop(1)

0x1357: Push("attack")
0x1358: @ PlayGlobalMusic(Stack[-1])
0x1359: Pop(1)
0x135a: Return(); Pop(2)

0x135b: PushEmpty(object, object)
0x135c: @ GetScene(Stack[-1])
0x135d: Pop(0)
0x135e: Push("battle")
0x135f: PushEmpty(object)
0x1360: Call2 0x12e7

0x1361: Pop(0)
0x1362: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x1363: Pop(2)
0x1364: Return(); Pop(2)

0x1365: Stack[-1] = 0
0x1366: PushEmpty()
0x1367: Push((int) 100)
0x1368: @@ SetReturnValue(Stack[-1])
0x1369: Pop(1)
0x136a: Return(); Pop(0)

0x136b: PushEmpty()
0x136c: PushEmpty(int, string)
0x136d: Stack[-1] = "branch"
0x136e: Call2 0x1333

0x136f: Pop(1)
0x1370: Push((int) 0)
0x1371: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1372: IF (Stack[-1] == 0) GOTO 0x1375; Pop(1)

0x1373: Stack[-2] = (bool) 1
0x1374: Return(); Pop(0)

0x1375: Stack[-2] = (bool) 0
0x1376: Return(); Pop(0)

0x1377: PushEmpty()
0x1378: PushEmpty(int, string)
0x1379: Stack[-1] = "branch"
0x137a: Call2 0x1333

0x137b: Pop(1)
0x137c: Push((int) 1)
0x137d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x137e: IF (Stack[-1] == 0) GOTO 0x1381; Pop(1)

0x137f: Stack[-2] = (bool) 1
0x1380: Return(); Pop(0)

0x1381: Stack[-2] = (bool) 0
0x1382: Return(); Pop(0)

0x1383: PushEmpty()
0x1384: PushEmpty(int, string)
0x1385: Stack[-1] = "branch"
0x1386: Call2 0x1333

0x1387: Pop(1)
0x1388: Push((int) 2)
0x1389: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x138a: IF (Stack[-1] == 0) GOTO 0x138d; Pop(1)

0x138b: Stack[-2] = (bool) 1
0x138c: Return(); Pop(0)

0x138d: Stack[-2] = (bool) 0
0x138e: Return(); Pop(0)

0x138f: PushEmpty()
0x1390: PushEmpty(bool, object)
0x1391: Stack[-1] = Stack[-3]
0x1392: Call2 0x1411

0x1393: Pop(1)
0x1394: IF (Stack[-1] == 0) GOTO 0x1397; Pop(1)

0x1395: Stack[-2] = (bool) 1
0x1396: Return(); Pop(0)

0x1397: Stack[-2] = (bool) 0
0x1398: Return(); Pop(0)

0x1399: PushEmpty()
0x139a: PushEmpty(bool, object)
0x139b: Stack[-1] = Stack[-3]
0x139c: Call2 0x1418

0x139d: Pop(1)
0x139e: IF (Stack[-1] == 0) GOTO 0x13a1; Pop(1)

0x139f: Stack[-2] = (bool) 1
0x13a0: Return(); Pop(0)

0x13a1: Stack[-2] = (bool) 0
0x13a2: Return(); Pop(0)

0x13a3: PushEmpty()
0x13a4: PushEmpty(bool, object)
0x13a5: Stack[-1] = Stack[-3]
0x13a6: Call2 0x141b

0x13a7: Pop(1)
0x13a8: IF (Stack[-1] == 0) GOTO 0x13ab; Pop(1)

0x13a9: Stack[-2] = (bool) 1
0x13aa: Return(); Pop(0)

0x13ab: Stack[-2] = (bool) 0
0x13ac: Return(); Pop(0)

0x13ad: PushEmpty()
0x13ae: PushEmpty(bool, object)
0x13af: Stack[-1] = Stack[-3]
0x13b0: Call2 0x1422

0x13b1: Pop(1)
0x13b2: IF (Stack[-1] == 0) GOTO 0x13b5; Pop(1)

0x13b3: Stack[-2] = (bool) 1
0x13b4: Return(); Pop(0)

0x13b5: Stack[-2] = (bool) 0
0x13b6: Return(); Pop(0)

0x13b7: PushEmpty()
0x13b8: PushEmpty(bool, object)
0x13b9: Stack[-1] = Stack[-3]
0x13ba: Call2 0x1429

0x13bb: Pop(1)
0x13bc: IF (Stack[-1] == 0) GOTO 0x13bf; Pop(1)

0x13bd: Stack[-2] = (bool) 1
0x13be: Return(); Pop(0)

0x13bf: Stack[-2] = (bool) 0
0x13c0: Return(); Pop(0)

0x13c1: PushEmpty()
0x13c2: PushEmpty(bool, object)
0x13c3: Stack[-1] = Stack[-3]
0x13c4: Call2 0x1430

0x13c5: Pop(1)
0x13c6: IF (Stack[-1] == 0) GOTO 0x13c9; Pop(1)

0x13c7: Stack[-2] = (bool) 1
0x13c8: Return(); Pop(0)

0x13c9: Stack[-2] = (bool) 0
0x13ca: Return(); Pop(0)

0x13cb: PushEmpty()
0x13cc: PushEmpty(bool, object)
0x13cd: Stack[-1] = Stack[-3]
0x13ce: Call2 0x1437

0x13cf: Pop(1)
0x13d0: IF (Stack[-1] == 0) GOTO 0x13d3; Pop(1)

0x13d1: Stack[-2] = (bool) 1
0x13d2: Return(); Pop(0)

0x13d3: Stack[-2] = (bool) 0
0x13d4: Return(); Pop(0)

0x13d5: PushEmpty()
0x13d6: PushEmpty(bool, object)
0x13d7: Stack[-1] = Stack[-3]
0x13d8: Call2 0x143e

0x13d9: Pop(1)
0x13da: IF (Stack[-1] == 0) GOTO 0x13dd; Pop(1)

0x13db: Stack[-2] = (bool) 1
0x13dc: Return(); Pop(0)

0x13dd: Stack[-2] = (bool) 0
0x13de: Return(); Pop(0)

0x13df: PushEmpty()
0x13e0: PushEmpty(bool, object)
0x13e1: Stack[-1] = Stack[-3]
0x13e2: Call2 0x1445

0x13e3: Pop(1)
0x13e4: IF (Stack[-1] == 0) GOTO 0x13e7; Pop(1)

0x13e5: Stack[-2] = (bool) 1
0x13e6: Return(); Pop(0)

0x13e7: Stack[-2] = (bool) 0
0x13e8: Return(); Pop(0)

0x13e9: PushEmpty()
0x13ea: PushEmpty(bool, object)
0x13eb: Stack[-1] = Stack[-3]
0x13ec: Call2 0x144c

0x13ed: Pop(1)
0x13ee: IF (Stack[-1] == 0) GOTO 0x13f1; Pop(1)

0x13ef: Stack[-2] = (bool) 1
0x13f0: Return(); Pop(0)

0x13f1: Stack[-2] = (bool) 0
0x13f2: Return(); Pop(0)

0x13f3: PushEmpty()
0x13f4: PushEmpty(bool, object)
0x13f5: Stack[-1] = Stack[-3]
0x13f6: Call2 0x1453

0x13f7: Pop(1)
0x13f8: IF (Stack[-1] == 0) GOTO 0x13fb; Pop(1)

0x13f9: Stack[-2] = (bool) 1
0x13fa: Return(); Pop(0)

0x13fb: Stack[-2] = (bool) 0
0x13fc: Return(); Pop(0)

0x13fd: PushEmpty()
0x13fe: PushEmpty(bool, object)
0x13ff: Stack[-1] = Stack[-3]
0x1400: Call2 0x145a

0x1401: Pop(1)
0x1402: IF (Stack[-1] == 0) GOTO 0x1405; Pop(1)

0x1403: Stack[-2] = (bool) 1
0x1404: Return(); Pop(0)

0x1405: Stack[-2] = (bool) 0
0x1406: Return(); Pop(0)

0x1407: PushEmpty()
0x1408: PushEmpty(bool, object)
0x1409: Stack[-1] = Stack[-3]
0x140a: Call2 0x1461

0x140b: Pop(1)
0x140c: IF (Stack[-1] == 0) GOTO 0x140f; Pop(1)

0x140d: Stack[-2] = (bool) 1
0x140e: Return(); Pop(0)

0x140f: Stack[-2] = (bool) 0
0x1410: Return(); Pop(0)

0x1411: PushEmpty()
0x1412: PushEmpty(int)
0x1413: Call2 0x1349

0x1414: Pop(0)
0x1415: Push((int) 6)
0x1416: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x1417: Return(); Pop(0)

0x1418: PushEmpty()
0x1419: Stack[-2] = (bool) 0
0x141a: Return(); Pop(0)

0x141b: PushEmpty()
0x141c: PushEmpty(int)
0x141d: Call2 0x1349

0x141e: Pop(0)
0x141f: Push((int) 1)
0x1420: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1421: Return(); Pop(0)

0x1422: PushEmpty()
0x1423: PushEmpty(int)
0x1424: Call2 0x1349

0x1425: Pop(0)
0x1426: Push((int) 2)
0x1427: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1428: Return(); Pop(0)

0x1429: PushEmpty()
0x142a: PushEmpty(int)
0x142b: Call2 0x1349

0x142c: Pop(0)
0x142d: Push((int) 3)
0x142e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x142f: Return(); Pop(0)

0x1430: PushEmpty()
0x1431: PushEmpty(int)
0x1432: Call2 0x1349

0x1433: Pop(0)
0x1434: Push((int) 5)
0x1435: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1436: Return(); Pop(0)

0x1437: PushEmpty()
0x1438: PushEmpty(int)
0x1439: Call2 0x1349

0x143a: Pop(0)
0x143b: Push((int) 6)
0x143c: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x143d: Return(); Pop(0)

0x143e: PushEmpty()
0x143f: PushEmpty(int)
0x1440: Call2 0x1349

0x1441: Pop(0)
0x1442: Push((int) 7)
0x1443: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1444: Return(); Pop(0)

0x1445: PushEmpty()
0x1446: PushEmpty(int)
0x1447: Call2 0x1349

0x1448: Pop(0)
0x1449: Push((int) 8)
0x144a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x144b: Return(); Pop(0)

0x144c: PushEmpty()
0x144d: PushEmpty(int)
0x144e: Call2 0x1349

0x144f: Pop(0)
0x1450: Push((int) 9)
0x1451: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1452: Return(); Pop(0)

0x1453: PushEmpty()
0x1454: PushEmpty(int)
0x1455: Call2 0x1349

0x1456: Pop(0)
0x1457: Push((int) 10)
0x1458: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1459: Return(); Pop(0)

0x145a: PushEmpty()
0x145b: PushEmpty(int)
0x145c: Call2 0x1349

0x145d: Pop(0)
0x145e: Push((int) 11)
0x145f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1460: Return(); Pop(0)

0x1461: PushEmpty()
0x1462: PushEmpty(int)
0x1463: Call2 0x1349

0x1464: Pop(0)
0x1465: Push((int) 12)
0x1466: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1467: Return(); Pop(0)

0x1468: PushEmpty(int, int)
0x1469: Push("branch")
0x146a: @ GetVariable(Stack[-1], Stack[-2])
0x146b: Pop(1)
0x146c: Push((int) 0)
0x146d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x146e: IF (Stack[-1] == 0) GOTO 0x1472; Pop(1)

0x146f: Stack[-3] = (int) 1
0x1470: Return(); Pop(2)

0x1471: GOTO 0x1477

0x1472: Push((int) 1)
0x1473: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1474: IF (Stack[-1] == 0) GOTO 0x1477; Pop(1)

0x1475: Stack[-3] = (int) 2
0x1476: Return(); Pop(2)

0x1477: Stack[-3] = (int) 3
0x1478: Return(); Pop(2)

0x1479: PushEmpty(int, int)
0x147a: Push("branch")
0x147b: @ GetVariable(Stack[-1], Stack[-2])
0x147c: Pop(1)
0x147d: Stack[-3] = Stack[-1]
0x147e: Return(); Pop(2)

0x147f: PushEmpty(int, int)
0x1480: @@ GetItemID(Stack[-1])
0x1481: Pop(0)
0x1482: Stack[-4] = Stack[-1]
0x1483: Return(); Pop(2)

0x1484: PushEmpty(int, int, int, string, bool, bool, int, int, int, int, string, bool, bool, int)
0x1485: Push((int) 0)
0x1486: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x1487: IF (Stack[-1] == 0) GOTO 0x14a9; Pop(1)

0x1488: PushEmpty(int)
0x1489: Call2 0x1349

0x148a: Stack[-8] = Stack[-1]
0x148b: Pop(1)
0x148c: Stack[-6] = (int) 0
0x148d: Stack[-5] = (int) 1
0x148e: Pop(0); Push((bool) Stack[-5] <= Stack[-7])
0x148f: IF (Stack[-1] == 0) GOTO 0x14a7; Pop(1)

0x1490: Stack[-4] = "Price"
0x1491: Push((int) 1)
0x1492: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x1493: IF (Stack[-1] == 0) GOTO 0x1495; Pop(1)

0x1494: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0x1495: PushEmpty(int, object)
0x1496: Stack[-1] = Stack[-18]
0x1497: Call2 0x147f

0x1498: Pop(1)
0x1499: @ HasInvItemProperty(Stack[-4], Stack[-1], Stack[-5])
0x149a: Pop(1)
0x149b: Pop(0); Push((bool) Stack[-3] == 0)
0x149c: IF (Stack[-1] == 0) GOTO 0x149e; Pop(1)

0x149d: GOTO 0x14a4

0x149e: PushEmpty(int, object)
0x149f: Stack[-1] = Stack[-18]
0x14a0: Call2 0x147f

0x14a1: Pop(1)
0x14a2: @ GetInvItemProperty(Stack[-7], Stack[-1], Stack[-5])
0x14a3: Pop(1)
0x14a4: Push((int) 1)
0x14a5: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x14a6: GOTO 0x148e

0x14a7: Stack[-17] = Stack[-6]
0x14a8: Return(); Pop(14)

0x14a9: PushEmpty(int, object)
0x14aa: Stack[-1] = Stack[-18]
0x14ab: Call2 0x147f

0x14ac: Pop(1)
0x14ad: Push("BarterPrice")
0x14ae: Pop(1); Push(Stack[-1] + Stack[-17]);
0x14af: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x14b0: Pop(2)
0x14b1: Pop(0); Push((bool) Stack[-2] == 0)
0x14b2: IF (Stack[-1] == 0) GOTO 0x14b5; Pop(1)

0x14b3: Stack[-17] = (int) 0
0x14b4: Return(); Pop(14)

0x14b5: PushEmpty(int, object)
0x14b6: Stack[-1] = Stack[-18]
0x14b7: Call2 0x147f

0x14b8: Pop(1)
0x14b9: Push("BarterPrice")
0x14ba: Pop(1); Push(Stack[-1] + Stack[-17]);
0x14bb: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x14bc: Pop(2)
0x14bd: Push((int) 0)
0x14be: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x14bf: IF (Stack[-1] == 0) GOTO 0x14c2; Pop(1)

0x14c0: Stack[-17] = Stack[-1]
0x14c1: Return(); Pop(14)

0x14c2: Stack[-17] = -Stack[-1]; Pop(0);
0x14c3: Return(); Pop(14)

0x14c4: PushEmpty()
0x14c5: PushEmpty(int)
0x14c6: Call2 0x1479

0x14c7: Pop(0)
0x14c8: Push((int) 1)
0x14c9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14ca: IF (Stack[-1] == 0) GOTO 0x14ce; Pop(1)

0x14cb: @ WorkWithCorpse(Stack[-1])
0x14cc: Pop(0)
0x14cd: GOTO 0x14d0

0x14ce: @ Barter(Stack[-1])
0x14cf: Pop(0)
0x14d0: Return(); Pop(0)

0x14d1: PushEmpty(int, bool, int, bool)
0x14d2: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x14d3: IF (Stack[-1] == 0) GOTO 0x14d8; Pop(1)

0x14d4: Push("GenerateMoney: iMin > iMax")
0x14d5: @ Trace(Stack[-1])
0x14d6: Pop(1)
0x14d7: Return(); Pop(4)

0x14d8: Stack[-2] = (int) 0
0x14d9: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x14da: IF (Stack[-1] == 0) GOTO 0x14df; Pop(1)

0x14db: Pop(0); Push(Stack[-5] - Stack[-6]);
0x14dc: @ irand(Stack[-3], Stack[-1])
0x14dd: Pop(1)
0x14de: GOTO 0x14e3

0x14df: Push((int) 0)
0x14e0: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x14e1: IF (Stack[-1] == 0) GOTO 0x14e3; Pop(1)

0x14e2: Return(); Pop(4)

0x14e3: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x14e4: Push((int) 0)
0x14e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e6: IF (Stack[-1] == 0) GOTO 0x14e8; Pop(1)

0x14e7: Return(); Pop(4)

0x14e8: PushEmpty(int, string)
0x14e9: Stack[-1] = "Money"
0x14ea: Call2 0x15c8

0x14eb: Pop(1)
0x14ec: Push((int) 0)
0x14ed: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x14ee: Pop(2)
0x14ef: Return(); Pop(4)

0x14f0: PushEmpty(object, int, bool, object, int, bool)
0x14f1: @ CreateInvItem(Stack[-3])
0x14f2: Pop(0)
0x14f3: @@ SetItemName(Stack[-7])
0x14f4: Pop(0)
0x14f5: Push("Organ")
0x14f6: Push((int) 1)
0x14f7: @@ SetProperty(Stack[-2], Stack[-1])
0x14f8: Pop(2)
0x14f9: @@ GetItemID(Stack[-2])
0x14fa: Pop(0)
0x14fb: Push((int) 0)
0x14fc: Push((int) 1)
0x14fd: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x14fe: Pop(2)
0x14ff: Return(); Pop(6)

0x1500: Stack[-3] = 0
0x1501: PushEmpty(int)
0x1502: Call2 0x1479

0x1503: Pop(0)
0x1504: Push((int) 1)
0x1505: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1506: IF (Stack[-1] == 0) GOTO 0x1508; Pop(1)

0x1507: Return(); Pop(0)

0x1508: PushEmpty(string)
0x1509: Stack[-1] = "liver"
0x150a: Call2 0x14f0

0x150b: Pop(1)
0x150c: PushEmpty(string)
0x150d: Stack[-1] = "kidney"
0x150e: Call2 0x14f0

0x150f: Pop(1)
0x1510: PushEmpty(string)
0x1511: Stack[-1] = "heart"
0x1512: Call2 0x14f0

0x1513: Pop(1)
0x1514: PushEmpty(string)
0x1515: Stack[-1] = "blood"
0x1516: Call2 0x14f0

0x1517: Pop(1)
0x1518: Return(); Pop(0)

0x1519: PushEmpty(int, bool, int, bool)
0x151a: Push(Stack[-5])
0x151b: IF (Stack[-1] == 0) GOTO 0x1572; Pop(1)

0x151c: PushEmpty(int, int)
0x151d: Stack[-2] = (int) 0
0x151e: Push((int) 100)
0x151f: PushEmpty(int)
0x1520: Call2 0x1349

0x1521: Pop(0)
0x1522: Push((int) 100)
0x1523: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1524: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1525: Call2 0x14d1

0x1526: Pop(2)
0x1527: Push((int) 8)
0x1528: @ irand(Stack[-3], Stack[-1])
0x1529: Pop(1)
0x152a: Push((int) 0)
0x152b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152c: IF (Stack[-1] == 0) GOTO 0x1536; Pop(1)

0x152d: PushEmpty(int, string)
0x152e: Stack[-1] = "lemon"
0x152f: Call2 0x15c8

0x1530: Pop(1)
0x1531: Push((int) 0)
0x1532: Push((int) 1)
0x1533: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1534: Pop(3)
0x1535: GOTO 0x1571

0x1536: Push((int) 1)
0x1537: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1538: IF (Stack[-1] == 0) GOTO 0x1542; Pop(1)

0x1539: PushEmpty(int, string)
0x153a: Stack[-1] = "rusk"
0x153b: Call2 0x15c8

0x153c: Pop(1)
0x153d: Push((int) 0)
0x153e: Push((int) 1)
0x153f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1540: Pop(3)
0x1541: GOTO 0x1571

0x1542: Push((int) 2)
0x1543: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1544: IF (Stack[-1] == 0) GOTO 0x154e; Pop(1)

0x1545: PushEmpty(int, string)
0x1546: Stack[-1] = "hook"
0x1547: Call2 0x15c8

0x1548: Pop(1)
0x1549: Push((int) 0)
0x154a: Push((int) 1)
0x154b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x154c: Pop(3)
0x154d: GOTO 0x1571

0x154e: Push((int) 4)
0x154f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1550: IF (Stack[-1] == 0) GOTO 0x155a; Pop(1)

0x1551: PushEmpty(int, string)
0x1552: Stack[-1] = "syringe"
0x1553: Call2 0x15c8

0x1554: Pop(1)
0x1555: Push((int) 0)
0x1556: Push((int) 1)
0x1557: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1558: Pop(3)
0x1559: GOTO 0x1571

0x155a: Push((int) 5)
0x155b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155c: IF (Stack[-1] == 0) GOTO 0x1566; Pop(1)

0x155d: PushEmpty(int, string)
0x155e: Stack[-1] = "watch"
0x155f: Call2 0x15c8

0x1560: Pop(1)
0x1561: Push((int) 0)
0x1562: Push((int) 1)
0x1563: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1564: Pop(3)
0x1565: GOTO 0x1571

0x1566: Push((int) 6)
0x1567: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1568: IF (Stack[-1] == 0) GOTO 0x1571; Pop(1)

0x1569: PushEmpty(int, string)
0x156a: Stack[-1] = "razor"
0x156b: Call2 0x15c8

0x156c: Pop(1)
0x156d: Push((int) 0)
0x156e: Push((int) 1)
0x156f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1570: Pop(3)
0x1571: GOTO 0x15c7

0x1572: PushEmpty(int, int)
0x1573: Stack[-2] = (int) 0
0x1574: Push((int) 50)
0x1575: PushEmpty(int)
0x1576: Call2 0x1349

0x1577: Pop(0)
0x1578: Push((int) 50)
0x1579: Pop(2); Push(Stack[-2] * Stack[-1]);
0x157a: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x157b: Call2 0x14d1

0x157c: Pop(2)
0x157d: Push((int) 7)
0x157e: @ irand(Stack[-3], Stack[-1])
0x157f: Pop(1)
0x1580: Push((int) 0)
0x1581: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1582: IF (Stack[-1] == 0) GOTO 0x158c; Pop(1)

0x1583: PushEmpty(int, string)
0x1584: Stack[-1] = "beads"
0x1585: Call2 0x15c8

0x1586: Pop(1)
0x1587: Push((int) 0)
0x1588: Push((int) 1)
0x1589: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x158a: Pop(3)
0x158b: GOTO 0x15c7

0x158c: Push((int) 1)
0x158d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x158e: IF (Stack[-1] == 0) GOTO 0x1598; Pop(1)

0x158f: PushEmpty(int, string)
0x1590: Stack[-1] = "bracelet"
0x1591: Call2 0x15c8

0x1592: Pop(1)
0x1593: Push((int) 0)
0x1594: Push((int) 1)
0x1595: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1596: Pop(3)
0x1597: GOTO 0x15c7

0x1598: Push((int) 2)
0x1599: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159a: IF (Stack[-1] == 0) GOTO 0x15a4; Pop(1)

0x159b: PushEmpty(int, string)
0x159c: Stack[-1] = "ear_ring"
0x159d: Call2 0x15c8

0x159e: Pop(1)
0x159f: Push((int) 0)
0x15a0: Push((int) 1)
0x15a1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15a2: Pop(3)
0x15a3: GOTO 0x15c7

0x15a4: Push((int) 3)
0x15a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a6: IF (Stack[-1] == 0) GOTO 0x15b0; Pop(1)

0x15a7: PushEmpty(int, string)
0x15a8: Stack[-1] = "gold_ring"
0x15a9: Call2 0x15c8

0x15aa: Pop(1)
0x15ab: Push((int) 0)
0x15ac: Push((int) 1)
0x15ad: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15ae: Pop(3)
0x15af: GOTO 0x15c7

0x15b0: Push((int) 4)
0x15b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b2: IF (Stack[-1] == 0) GOTO 0x15bc; Pop(1)

0x15b3: PushEmpty(int, string)
0x15b4: Stack[-1] = "silver_ring"
0x15b5: Call2 0x15c8

0x15b6: Pop(1)
0x15b7: Push((int) 0)
0x15b8: Push((int) 1)
0x15b9: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15ba: Pop(3)
0x15bb: GOTO 0x15c7

0x15bc: Push((int) 5)
0x15bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15be: IF (Stack[-1] == 0) GOTO 0x15c7; Pop(1)

0x15bf: PushEmpty(int, string)
0x15c0: Stack[-1] = "flower"
0x15c1: Call2 0x15c8

0x15c2: Pop(1)
0x15c3: Push((int) 0)
0x15c4: Push((int) 1)
0x15c5: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15c6: Pop(3)
0x15c7: Return(); Pop(4)

0x15c8: PushEmpty(int, int)
0x15c9: @ GetInvItemByName(Stack[-1], Stack[-3])
0x15ca: Pop(0)
0x15cb: Stack[-4] = Stack[-1]
0x15cc: Return(); Pop(2)

0x15cd: PushEmpty()
0x15ce: PushEmpty(object)
0x15cf: Stack[-1] = Stack[-2]
0x15d0: Push(-1, 0); TaskCall(2)
0x15d1: Call2 0xa73

0x15d2: Pop(-1, 0); TaskReturn
0x15d3: Pop(1)
0x15d4: Return(); Pop(0)

0x15d5: PushEmpty(float, float)
0x15d6: Push("health")
0x15d7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x15d8: IF (Stack[-1] == 0) GOTO 0x15e1; Pop(1)

0x15d9: Push("health")
0x15da: @ GetProperty(Stack[-1], Stack[-2])
0x15db: Pop(1)
0x15dc: Push((int) 0)
0x15dd: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x15de: IF (Stack[-1] == 0) GOTO 0x15e1; Pop(1)

0x15df: @ SignalDeath(Stack[-4])
0x15e0: Pop(0)
0x15e1: Return(); Pop(2)

0x15e2: PushEmpty()
0x15e3: PushEmpty(object)
0x15e4: Stack[-1] = Stack[-2]
0x15e5: Call2 0x15cd

0x15e6: Pop(1)
0x15e7: Return(); Pop(0)

0x15e8: PushEmpty()
0x15e9: PushEmpty(object, int, float)
0x15ea: Stack[-3] = Stack[-7]
0x15eb: Stack[-2] = Stack[-6]
0x15ec: Stack[-1] = Stack[-5]
0x15ed: Call2 0x11d4

0x15ee: Pop(3)
0x15ef: Return(); Pop(0)

0x15f0: PushEmpty()
0x15f1: PushEmpty(object, int, float, cvector, cvector)
0x15f2: Stack[-5] = Stack[-11]
0x15f3: Stack[-4] = Stack[-10]
0x15f4: Stack[-3] = Stack[-9]
0x15f5: Stack[-2] = Stack[-7]
0x15f6: Stack[-1] = Stack[-6]
0x15f7: Call2 0x1218

0x15f8: Pop(5)
0x15f9: Return(); Pop(0)

0x15fa: PushEmpty()
0x15fb: Push("unholster")
0x15fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15fd: IF (Stack[-1] == 0) GOTO 0x1605; Pop(1)

0x15fe: PushEmpty(bool, object)
0x15ff: Stack[-1] = Stack[-4]
0x1600: Call2 0x1737

0x1601: Stack[-5] = Stack[-2]
0x1602: Pop(2)
0x1603: Return(); Pop(0)

0x1604: GOTO 0x1618

0x1605: Push("player_shot")
0x1606: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1607: IF (Stack[-1] == 0) GOTO 0x160f; Pop(1)

0x1608: PushEmpty(bool, object)
0x1609: Stack[-1] = Stack[-4]
0x160a: Call2 0x173c

0x160b: Stack[-5] = Stack[-2]
0x160c: Pop(2)
0x160d: Return(); Pop(0)

0x160e: GOTO 0x1618

0x160f: Push("battle")
0x1610: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1611: IF (Stack[-1] == 0) GOTO 0x1618; Pop(1)

0x1612: PushEmpty(bool, object)
0x1613: Stack[-1] = Stack[-4]
0x1614: Call2 0x1751

0x1615: Stack[-5] = Stack[-2]
0x1616: Pop(2)
0x1617: Return(); Pop(0)

0x1618: Stack[-3] = (bool) 0
0x1619: Return(); Pop(0)

0x161a: PushEmpty()
0x161b: Push("unholster")
0x161c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x161d: IF (Stack[-1] == 0) GOTO 0x1623; Pop(1)

0x161e: PushEmpty(object)
0x161f: Stack[-1] = Stack[-3]
0x1620: Call2 0x173a

0x1621: Pop(1)
0x1622: GOTO 0x1632

0x1623: Push("player_shot")
0x1624: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1625: IF (Stack[-1] == 0) GOTO 0x162b; Pop(1)

0x1626: PushEmpty(object)
0x1627: Stack[-1] = Stack[-3]
0x1628: Call2 0x174b

0x1629: Pop(1)
0x162a: GOTO 0x1632

0x162b: Push("battle")
0x162c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x162d: IF (Stack[-1] == 0) GOTO 0x1632; Pop(1)

0x162e: PushEmpty(object)
0x162f: Stack[-1] = Stack[-3]
0x1630: Call2 0x1754

0x1631: Pop(1)
0x1632: Return(); Pop(0)

0x1633: PushEmpty(bool, bool)
0x1634: PushEmpty(bool)
0x1635: Stack[-1] = (bool) 0
0x1636: PushEmpty(bool, object)
0x1637: Stack[-1] = Stack[-6]
0x1638: Call2 0x1737

0x1639: Pop(1)
0x163a: IF (Stack[-1] == 0) GOTO 0x1641; Pop(1)

0x163b: PushEmpty(bool, object)
0x163c: Stack[-1] = Stack[-6]
0x163d: Call2 0x110d

0x163e: Pop(1)
0x163f: IF (Stack[-1] == 0) GOTO 0x1641; Pop(1)

0x1640: Stack[-1] = (bool) 1
0x1641: IF (Stack[-1] == 0) GOTO 0x1648; Pop(1)

0x1642: @@ IsWeaponHolstered(Stack[-1])
0x1643: Pop(0)
0x1644: Pop(0); Push((bool) Stack[-1] == 0)
0x1645: IF (Stack[-1] == 0) GOTO 0x1648; Pop(1)

0x1646: Stack[-4] = (bool) 1
0x1647: Return(); Pop(2)

0x1648: Stack[-4] = (bool) 0
0x1649: Return(); Pop(2)

0x164a: PushEmpty()
0x164b: PushEmpty(object)
0x164c: Stack[-1] = Stack[-2]
0x164d: Call2 0x173a

0x164e: Pop(1)
0x164f: Return(); Pop(0)

0x1650: PushEmpty()
0x1651: PushEmpty(bool, object)
0x1652: Stack[-1] = Stack[-3]
0x1653: Call2 0x110d

0x1654: Pop(1)
0x1655: IF (Stack[-1] == 0) GOTO 0x165c; Pop(1)

0x1656: PushEmpty(object)
0x1657: Call2 0x12e7

0x1658: Pop(0)
0x1659: Push((float)-0.03)
0x165a: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x165b: Pop(2)
0x165c: Return(); Pop(0)

0x165d: PushEmpty(object, object)
0x165e: Push("heal")
0x165f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1660: IF (Stack[-1] == 0) GOTO 0x166b; Pop(1)

0x1661: Push("player")
0x1662: @ FindActor(Stack[-2], Stack[-1])
0x1663: Pop(1)
0x1664: PushEmpty(bool, object)
0x1665: Stack[-1] = Stack[-3]
0x1666: Call2 0x1756

0x1667: Stack[-6] = Stack[-2]
0x1668: Pop(2)
0x1669: Return(); Pop(2)

0x166a: Stack[-1] = 0
0x166b: Stack[-4] = (bool) 0
0x166c: Return(); Pop(2)

0x166d: PushEmpty(object, object)
0x166e: Push("heal")
0x166f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1670: IF (Stack[-1] == 0) GOTO 0x1679; Pop(1)

0x1671: Push("player")
0x1672: @ FindActor(Stack[-2], Stack[-1])
0x1673: Pop(1)
0x1674: PushEmpty(object)
0x1675: Stack[-1] = Stack[-2]
0x1676: Call2 0x1759

0x1677: Pop(1)
0x1678: Stack[-1] = 0
0x1679: Return(); Pop(2)

0x167a: PushEmpty()
0x167b: PushEmpty(bool)
0x167c: Call2 0x184e

0x167d: Pop(0)
0x167e: IF (Stack[-1] == 0) GOTO 0x1681; Pop(1)

0x167f: Stack[-2] = (int) 2
0x1680: GOTO 0x1682

0x1681: Stack[-2] = (int) 0
0x1682: Return(); Pop(0)

0x1683: PushEmpty()
0x1684: PushEmpty(object)
0x1685: Stack[-1] = Stack[-2]
0x1686: Push(-1, 1); TaskCall(4)
0x1687: Call2 0xc32

0x1688: Pop(-1, 1); TaskReturn
0x1689: Pop(1)
0x168a: Return(); Pop(0)

0x168b: PushEmpty()
0x168c: PushEmpty(bool, object)
0x168d: Stack[-1] = Stack[-3]
0x168e: Call2 0x1190

0x168f: Pop(1)
0x1690: IF (Stack[-1] == 0) GOTO 0x1693; Pop(1)

0x1691: Stack[-2] = (int) 2
0x1692: GOTO 0x1694

0x1693: Stack[-2] = (int) 0
0x1694: Return(); Pop(0)

0x1695: PushEmpty()
0x1696: PushEmpty(object)
0x1697: Stack[-1] = Stack[-2]
0x1698: Push(-1, 6); TaskCall(5)
0x1699: Call2 0xd45

0x169a: Pop(-1, 6); TaskReturn
0x169b: Pop(1)
0x169c: Return(); Pop(0)

0x169d: PushEmpty(string, string, string, string)
0x169e: PushEmpty(bool, object, string)
0x169f: Stack[-2] = Stack[-9]
0x16a0: Stack[-1] = "class"
0x16a1: Call2 0x1112

0x16a2: Pop(2)
0x16a3: Pop(1); Push((bool) Stack[-1] == 0)
0x16a4: IF (Stack[-1] == 0) GOTO 0x16a7; Pop(1)

0x16a5: Stack[-7] = (bool) 0
0x16a6: Return(); Pop(4)

0x16a7: Push("class")
0x16a8: @ GetProperty(Stack[-1], Stack[-3])
0x16a9: Pop(1)
0x16aa: Push("class")
0x16ab: @@ GetProperty(Stack[-1], Stack[-2])
0x16ac: Pop(1)
0x16ad: PushEmpty(bool)
0x16ae: Stack[-1] = (bool) 0
0x16af: Pop(0); Push((bool) Stack[-6] == 0)
0x16b0: IF (Stack[-1] == 0) GOTO 0x16b4; Pop(1)

0x16b1: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0x16b2: IF (Stack[-1] == 0) GOTO 0x16b4; Pop(1)

0x16b3: Stack[-1] = (bool) 1
0x16b4: IF (Stack[-1] == 0) GOTO 0x16b7; Pop(1)

0x16b5: Stack[-7] = (bool) 1
0x16b6: Return(); Pop(4)

0x16b7: Push("rat")
0x16b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16b9: IF (Stack[-1] == 0) GOTO 0x16bd; Pop(1)

0x16ba: Stack[-7] = (bool) 0
0x16bb: Return(); Pop(4)

0x16bc: GOTO 0x16e6

0x16bd: Push("rat_big")
0x16be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16bf: IF (Stack[-1] == 0) GOTO 0x16c3; Pop(1)

0x16c0: Stack[-7] = (bool) 0
0x16c1: Return(); Pop(4)

0x16c2: GOTO 0x16e6

0x16c3: Push("dog")
0x16c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16c5: IF (Stack[-1] == 0) GOTO 0x16c9; Pop(1)

0x16c6: Stack[-7] = (bool) 0
0x16c7: Return(); Pop(4)

0x16c8: GOTO 0x16e6

0x16c9: Push("grabitel")
0x16ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16cb: IF (Stack[-1] == 0) GOTO 0x16cf; Pop(1)

0x16cc: Stack[-7] = (bool) 0
0x16cd: Return(); Pop(4)

0x16ce: GOTO 0x16e6

0x16cf: Push("bomber")
0x16d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16d1: IF (Stack[-1] == 0) GOTO 0x16d5; Pop(1)

0x16d2: Stack[-7] = (bool) 0
0x16d3: Return(); Pop(4)

0x16d4: GOTO 0x16e6

0x16d5: Push("sanitar")
0x16d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16d7: IF (Stack[-1] == 0) GOTO 0x16db; Pop(1)

0x16d8: Stack[-7] = (bool) 0
0x16d9: Return(); Pop(4)

0x16da: GOTO 0x16e6

0x16db: Push("hunter")
0x16dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16dd: IF (Stack[-1] == 0) GOTO 0x16e1; Pop(1)

0x16de: Stack[-7] = (bool) 0
0x16df: Return(); Pop(4)

0x16e0: GOTO 0x16e6

0x16e1: Push("soldier")
0x16e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16e3: IF (Stack[-1] == 0) GOTO 0x16e6; Pop(1)

0x16e4: Stack[-7] = (bool) 0
0x16e5: Return(); Pop(4)

0x16e6: Stack[-7] = (bool) 1
0x16e7: Return(); Pop(4)

0x16e8: PushEmpty()
0x16e9: PushEmpty(int, object)
0x16ea: Stack[-1] = Stack[-4]
0x16eb: Call2 0x168b

0x16ec: Stack[-5] = Stack[-2]
0x16ed: Pop(2)
0x16ee: Return(); Pop(0)

0x16ef: PushEmpty()
0x16f0: PushEmpty(object)
0x16f1: Stack[-1] = Stack[-2]
0x16f2: Call2 0x1695

0x16f3: Pop(1)
0x16f4: Return(); Pop(0)

0x16f5: PushEmpty(bool, bool)
0x16f6: PushEmpty(bool, object, bool)
0x16f7: Stack[-2] = Stack[-8]
0x16f8: Stack[-1] = !Stack[-6]; Pop(0);
0x16f9: Call2 0x169d

0x16fa: Pop(2)
0x16fb: Pop(1); Push((bool) Stack[-1] == 0)
0x16fc: IF (Stack[-1] == 0) GOTO 0x16ff; Pop(1)

0x16fd: Stack[-7] = (bool) 0
0x16fe: Return(); Pop(2)

0x16ff: @ CanSee(Stack[-1], Stack[-6])
0x1700: Pop(0)
0x1701: PushEmpty(bool)
0x1702: Stack[-1] = (bool) 1
0x1703: Push(Stack[-2])
0x1704: IF (Stack[-1] == 0) GOTO 0x170d; Pop(1)

0x1705: PushEmpty(float, object)
0x1706: Stack[-1] = Stack[-9]
0x1707: Call2 0x1105

0x1708: Pop(1)
0x1709: Pop(0); Push(Stack[-6] * Stack[-6]);
0x170a: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x170b: IF (Stack[-1] == 0) GOTO 0x170d; Pop(1)

0x170c: Stack[-1] = (bool) 0
0x170d: IF (Stack[-1] == 0) GOTO 0x1710; Pop(1)

0x170e: Stack[-7] = (bool) 1
0x170f: Return(); Pop(2)

0x1710: Stack[-7] = (bool) 0
0x1711: Return(); Pop(2)

0x1712: PushEmpty()
0x1713: Stack[-2] = (int) 2
0x1714: Return(); Pop(0)

0x1715: PushEmpty()
0x1716: PushEmpty(object)
0x1717: Stack[-1] = Stack[-2]
0x1718: Call2 0x181e

0x1719: Pop(1)
0x171a: Return(); Pop(0)

0x171b: Return(); Pop(0)

0x171c: PushEmpty(bool, bool)
0x171d: Push("Received steal")
0x171e: @ Trace(Stack[-1])
0x171f: Pop(1)
0x1720: @ CanSee(Stack[-1], Stack[-3])
0x1721: Pop(0)
0x1722: Push(Stack[-1])
0x1723: IF (Stack[-1] == 0) GOTO 0x172a; Pop(1)

0x1724: PushEmpty(int, object)
0x1725: Stack[-1] = Stack[-5]
0x1726: Call2 0x168b

0x1727: Stack[-6] = Stack[-2]
0x1728: Pop(2)
0x1729: Return(); Pop(2)

0x172a: Stack[-4] = (int) 0
0x172b: Return(); Pop(2)

0x172c: PushEmpty()
0x172d: PushEmpty(object)
0x172e: Stack[-1] = Stack[-2]
0x172f: Call2 0x1695

0x1730: Pop(1)
0x1731: Return(); Pop(0)

0x1732: PushEmpty()
0x1733: Stack[-3] = (int) 0
0x1734: Return(); Pop(0)

0x1735: PushEmpty()
0x1736: Return(); Pop(0)

0x1737: PushEmpty()
0x1738: Stack[-2] = (bool) 0
0x1739: Return(); Pop(0)

0x173a: PushEmpty()
0x173b: Return(); Pop(0)

0x173c: PushEmpty(bool, bool)
0x173d: @ CanSee(Stack[-1], Stack[-3])
0x173e: Pop(0)
0x173f: Stack[-4] = (bool) 1
0x1740: Push(Stack[-1])
0x1741: IF (Stack[-1] == 0) GOTO 0x174a; Pop(1)

0x1742: PushEmpty(float, object)
0x1743: Stack[-1] = Stack[-5]
0x1744: Call2 0x1105

0x1745: Pop(1)
0x1746: Push((int) 2250000)
0x1747: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1748: IF (Stack[-1] == 0) GOTO 0x174a; Pop(1)

0x1749: Stack[-4] = (bool) 0
0x174a: Return(); Pop(2)

0x174b: PushEmpty()
0x174c: PushEmpty(object)
0x174d: Stack[-1] = Stack[-2]
0x174e: Call2 0x1683

0x174f: Pop(1)
0x1750: Return(); Pop(0)

0x1751: PushEmpty()
0x1752: Stack[-2] = (bool) 0
0x1753: Return(); Pop(0)

0x1754: PushEmpty()
0x1755: Return(); Pop(0)

0x1756: PushEmpty()
0x1757: Stack[-2] = (bool) 0
0x1758: Return(); Pop(0)

0x1759: PushEmpty()
0x175a: Return(); Pop(0)

0x175b: PushEmpty(string, string)
0x175c: Stack[-1] = "idle"
0x175d: Push(Stack[-3])
0x175e: IF (Stack[-1] == 0) GOTO 0x1760; Pop(1)

0x175f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1760: Stack[-4] = Stack[-1]
0x1761: Return(); Pop(2)

0x1762: PushEmpty(object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object, object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object)
0x1763: PushEmpty(object)
0x1764: Call2 0x1309

0x1765: Stack[-27] = Stack[-1]
0x1766: Pop(1)
0x1767: @ CreateIntVector(Stack[-25])
0x1768: Pop(0)
0x1769: @ CreateIntVector(Stack[-24])
0x176a: Pop(0)
0x176b: @ CreateIntVector(Stack[-23])
0x176c: Pop(0)
0x176d: @@ GetSubContainerCount(Stack[-22])
0x176e: Pop(0)
0x176f: Stack[-21] = (int) 0
0x1770: Pop(0); Push((bool) Stack[-21] < Stack[-22])
0x1771: IF (Stack[-1] == 0) GOTO 0x17b8; Pop(1)

0x1772: @@ GetItemCount(Stack[-20], Stack[-21])
0x1773: Pop(0)
0x1774: Stack[-19] = (int) 0
0x1775: Pop(0); Push((bool) Stack[-19] < Stack[-20])
0x1776: IF (Stack[-1] == 0) GOTO 0x17b5; Pop(1)

0x1777: @@ GetItem(Stack[-18], Stack[-19], Stack[-21])
0x1778: Pop(0)
0x1779: @@ GetItemID(Stack[-17])
0x177a: Pop(0)
0x177b: Push("HasDurability")
0x177c: @ HasInvItemProperty(Stack[-17], Stack[-18], Stack[-1])
0x177d: Pop(1)
0x177e: Push(Stack[-16])
0x177f: IF (Stack[-1] == 0) GOTO 0x17b1; Pop(1)

0x1780: Push("durability")
0x1781: @@ HasProperty(Stack[-17], Stack[-1])
0x1782: Pop(1)
0x1783: Push(Stack[-16])
0x1784: IF (Stack[-1] == 0) GOTO 0x17b1; Pop(1)

0x1785: Push("durability")
0x1786: @@ GetProperty(Stack[-16], Stack[-1])
0x1787: Pop(1)
0x1788: PushEmpty(bool)
0x1789: Stack[-1] = (bool) 0
0x178a: Push((int) 100)
0x178b: Pop(1); Push((bool) Stack[-17] < Stack[-1])
0x178c: IF (Stack[-1] == 0) GOTO 0x1793; Pop(1)

0x178d: PushEmpty(bool, object)
0x178e: Stack[-1] = Stack[-21]
0x178f: Call2 0x17f5

0x1790: Pop(1)
0x1791: IF (Stack[-1] == 0) GOTO 0x1793; Pop(1)

0x1792: Stack[-1] = (bool) 1
0x1793: IF (Stack[-1] == 0) GOTO 0x17b1; Pop(1)

0x1794: @@ add(Stack[-18])
0x1795: Pop(0)
0x1796: @@ add(Stack[-21])
0x1797: Pop(0)
0x1798: @@ add(Stack[-19])
0x1799: Pop(0)
0x179a: PushEmpty(int, object, int)
0x179b: Stack[-2] = Stack[-21]
0x179c: Stack[-1] = (int) 0
0x179d: Call2 0x1484

0x179e: Stack[-17] = Stack[-3]
0x179f: Pop(3)
0x17a0: Push((float)1.0)
0x17a1: Push((float)2.0)
0x17a2: Pop(1); Push(Stack[-1] * Stack[-17]);
0x17a3: Push((float)100.0)
0x17a4: Pop(2); Push(Stack[-2] / Stack[-1]);
0x17a5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17a6: Pop(1); Push(Stack[-15] * Stack[-1]);
0x17a7: Push((int) 100)
0x17a8: Pop(1); Push(Stack[-1] - Stack[-17]);
0x17a9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x17aa: Push((int) 300)
0x17ab: Stack[-15] = Stack[-2] / Stack[-1]; Pop(2);
0x17ac: Pop(0); Push((bool) Stack[-13] == 0)
0x17ad: IF (Stack[-1] == 0) GOTO 0x17af; Pop(1)

0x17ae: Stack[-13] = (int) 1
0x17af: @@ add(Stack[-13])
0x17b0: Pop(0)
0x17b1: Stack[-18] = 0
0x17b2: Push((int) 1)
0x17b3: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x17b4: GOTO 0x1775

0x17b5: Push((int) 1)
0x17b6: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x17b7: GOTO 0x1770

0x17b8: @ CreateIntVector(Stack[-12])
0x17b9: Pop(0)
0x17ba: Push("repair.xml")
0x17bb: @ ChooseItem(Stack[-27], Stack[-13], Stack[-24], Stack[-1])
0x17bc: Pop(1)
0x17bd: @@ size(Stack[-11])
0x17be: Pop(0)
0x17bf: Pop(0); Push((bool) Stack[-11] == 0)
0x17c0: IF (Stack[-1] == 0) GOTO 0x17c2; Pop(1)

0x17c1: Return(); Pop(52)

0x17c2: Stack[-10] = (int) 0
0x17c3: Stack[-9] = (int) 0
0x17c4: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0x17c5: IF (Stack[-1] == 0) GOTO 0x17ce; Pop(1)

0x17c6: @@ get(Stack[-8], Stack[-9])
0x17c7: Pop(0)
0x17c8: @@ get(Stack[-7], Stack[-8])
0x17c9: Pop(0)
0x17ca: Stack[-10] = Stack[-10] + Stack[-7]; Pop(0);
0x17cb: Push((int) 1)
0x17cc: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x17cd: GOTO 0x17c4

0x17ce: Push("money")
0x17cf: @@ GetProperty(Stack[-1], Stack[-7])
0x17d0: Pop(1)
0x17d1: Stack[-6] = Stack[-6] - Stack[-10]; Pop(0);
0x17d2: Push((int) 0)
0x17d3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x17d4: IF (Stack[-1] == 0) GOTO 0x17d6; Pop(1)

0x17d5: Return(); Pop(52)

0x17d6: Push("money")
0x17d7: @@ SetProperty(Stack[-1], Stack[-7])
0x17d8: Pop(1)
0x17d9: Stack[-5] = (int) 0
0x17da: Pop(0); Push((bool) Stack[-5] < Stack[-11])
0x17db: IF (Stack[-1] == 0) GOTO 0x17ef; Pop(1)

0x17dc: @@ get(Stack[-4], Stack[-5])
0x17dd: Pop(0)
0x17de: @@ get(Stack[-3], Stack[-4])
0x17df: Pop(0)
0x17e0: @@ get(Stack[-2], Stack[-4])
0x17e1: Pop(0)
0x17e2: @@ GetItem(Stack[-1], Stack[-2], Stack[-3])
0x17e3: Pop(0)
0x17e4: Push("durability")
0x17e5: Push((int) 100)
0x17e6: @@ SetProperty(Stack[-2], Stack[-1])
0x17e7: Pop(2)
0x17e8: Push((int) 1)
0x17e9: @@ SetItem(Stack[-2], Stack[-1], Stack[-3], Stack[-4])
0x17ea: Pop(1)
0x17eb: Stack[-1] = 0
0x17ec: Push((int) 1)
0x17ed: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x17ee: GOTO 0x17da

0x17ef: Return(); Pop(52)

0x17f0: Stack[-12] = 0
0x17f1: Stack[-23] = 0
0x17f2: Stack[-24] = 0
0x17f3: Stack[-25] = 0
0x17f4: Stack[-26] = 0
0x17f5: PushEmpty(int, bool, int, bool)
0x17f6: @@ GetItemID(Stack[-2])
0x17f7: Pop(0)
0x17f8: Push("Weapon")
0x17f9: @ HasInvItemProperty(Stack[-2], Stack[-3], Stack[-1])
0x17fa: Pop(1)
0x17fb: Stack[-6] = Stack[-1]
0x17fc: Return(); Pop(4)

0x17fd: PushEmpty()
0x17fe: PushEmpty(int, object)
0x17ff: Stack[-1] = Stack[-3]
0x1800: Push(-2, 1); TaskCall(0)
0x1801: Call2 0x0

0x1802: Pop(-2, 1); TaskReturn
0x1803: Pop(1)
0x1804: Push((int) 100)
0x1805: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1806: IF (Stack[-1] == 0) GOTO 0x180b; Pop(1)

0x1807: PushEmpty(object)
0x1808: Stack[-1] = Stack[-2]
0x1809: Call2 0x1762

0x180a: Pop(1)
0x180b: Return(); Pop(0)

0x180c: Stack[-1] = (int) 515568
0x180d: Return(); Pop(0)

0x180e: Stack[-1] = (int) 503353
0x180f: Return(); Pop(0)

0x1810: Stack[-1] = "ui/NPC_Citizen1.png"
0x1811: Return(); Pop(0)

0x1812: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x1813: Return(); Pop(0)

0x1814: Stack[-1] = (bool) 0
0x1815: Return(); Pop(0)

0x1816: Push(GlobalVars[0])
0x1817: Stack[-1] = (bool) 0
0x1818: GlobalVars[0] = Stack[-1]; Pop(1)
0x1819: PushEmpty(bool)
0x181a: Stack[-1] = (bool) 1
0x181b: Call2 0x1519

0x181c: Pop(1)
0x181d: Return(); Pop(0)

0x181e: PushEmpty(bool, bool)
0x181f: Push(GlobalVars[0])
0x1820: IF (Stack[-1] == 0) GOTO 0x182b; Pop(1)

0x1821: @ IsOverrideActive(Stack[-1])
0x1822: Pop(0)
0x1823: Pop(0); Push((bool) Stack[-1] == 0)
0x1824: IF (Stack[-1] == 0) GOTO 0x1829; Pop(1)

0x1825: PushEmpty(object)
0x1826: Stack[-1] = Stack[-4]
0x1827: Call2 0x14c4

0x1828: Pop(1)
0x1829: Return(); Pop(2)

0x182a: GOTO 0x182f

0x182b: PushEmpty(object)
0x182c: Stack[-1] = Stack[-4]
0x182d: Call2 0x17fd

0x182e: Pop(1)
0x182f: Return(); Pop(2)

0x1830: PushEmpty(int, bool, int, int, bool, int)
0x1831: Stack[-3] = (int) 0
0x1832: Push("all")
0x1833: PushEmpty(string, int)
0x1834: Stack[-1] = Stack[-6]
0x1835: Call2 0x175b

0x1836: Pop(1)
0x1837: @ HasAnimation(Stack[-4], Stack[-2], Stack[-1])
0x1838: Pop(2)
0x1839: Pop(0); Push((bool) Stack[-2] == 0)
0x183a: IF (Stack[-1] == 0) GOTO 0x183c; Pop(1)

0x183b: GOTO 0x183f

0x183c: Push((int) 1)
0x183d: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x183e: GOTO 0x1832

0x183f: @ irand(Stack[-1], Stack[-3])
0x1840: Pop(0)
0x1841: Push("all")
0x1842: PushEmpty(string, int)
0x1843: Stack[-1] = Stack[-4]
0x1844: Call2 0x175b

0x1845: Pop(1)
0x1846: @ PlayAnimation(Stack[-2], Stack[-1])
0x1847: Pop(2)
0x1848: @ WaitForAnimEnd()
0x1849: Pop(0)
0x184a: Return(); Pop(6)

0x184b: @ StopAnimation()
0x184c: Pop(0)
0x184d: Return(); Pop(0)

0x184e: Stack[-1] = (bool) 1
0x184f: Return(); Pop(0)

0x1850: PushEmpty()
0x1851: PushEmpty(bool, object, object, float, bool)
0x1852: Stack[-4] = Stack[-8]
0x1853: Stack[-3] = Stack[-7]
0x1854: Stack[-2] = (float) 500.0
0x1855: Stack[-1] = Stack[-6]
0x1856: Call2 0x16f5

0x1857: Stack[-9] = Stack[-5]
0x1858: Pop(5)
0x1859: Return(); Pop(0)

0x185a: PushEmpty()
0x185b: PushEmpty(bool, object)
0x185c: Stack[-1] = Stack[-3]
0x185d: Call2 0x110d

0x185e: Pop(1)
0x185f: IF (Stack[-1] == 0) GOTO 0x186b; Pop(1)

0x1860: PushEmpty(object)
0x1861: Call2 0x12e7

0x1862: Pop(0)
0x1863: Push((float)-0.07)
0x1864: Push((bool) 1)
0x1865: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1866: Pop(3)
0x1867: PushEmpty(bool)
0x1868: Stack[-1] = (bool) 1
0x1869: Call2 0x1519

0x186a: Pop(1)
0x186b: PushEmpty()
0x186c: Call2 0x1501

0x186d: Pop(0)
0x186e: Push(GlobalVars[0])
0x186f: Stack[-1] = (bool) 1
0x1870: GlobalVars[0] = Stack[-1]; Pop(1)
0x1871: Push((int) 50)
0x1872: Push((int) 40)
0x1873: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1874: Pop(2)
0x1875: Return(); Pop(0)

