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
	killme
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
	reputation

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
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0xb27 Vars = (object)
		EVENT_17 Op = 0xb3b Vars = (object)
		EVENT_30 Op = 0xb53 Vars = (object, object, bool)
		EVENT_40 Op = 0xb6f Vars = (object)
		EVENT_42 Op = 0xb83 Vars = (object, string)
		EVENT_26 Op = 0xba8 Vars = (string)
		EVENT_1 Op = 0xbb6 Vars = (object)
		EVENT_3 Op = 0xbc9 Vars = (object)
		EVENT_7 Op = 0xbcf Vars = (int)
		EVENT_6 Op = 0xbdb Vars = ()
		EVENT_41 Op = 0xbf2 Vars = (object)
		EVENT_10 Op = 0xc63 Vars = (object)
		EVENT_28 Op = 0xc67 Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0xc80 Vars = (object)
		EVENT_17 Op = 0xc94 Vars = (object)
		EVENT_30 Op = 0xcac Vars = (object, object, bool)
		EVENT_40 Op = 0xcc8 Vars = (object)
		EVENT_42 Op = 0xcdc Vars = (object, string)
		EVENT_26 Op = 0xd01 Vars = (string)
		EVENT_6 Op = 0xd0f Vars = ()
		EVENT_1 Op = 0xd16 Vars = (object)
	GTASK_5 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_6 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x101e Vars = ()
		EVENT_7 Op = 0x1056 Vars = (int)
		EVENT_1 Op = 0x1071 Vars = (object)
		EVENT_2 Op = 0x1080 Vars = (object)
		EVENT_10 Op = 0x1106 Vars = (object)
		EVENT_41 Op = 0x1111 Vars = (object)

Events:
EVENT_16 Op = 0x15e6 Vars = (object, string)
EVENT_41 Op = 0x15f3 Vars = (object)
EVENT_22 Op = 0x15f9 Vars = (object, int, float, float)
EVENT_43 Op = 0x1601 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x126b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1837

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1835

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1839

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x183b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1479

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
0x41: Call2 0x12b0

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
0x52: Call2 0x1394

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
0x64: Call2 0x13b4

0x65: Pop(1)
0x66: Pop(1); Push((bool) Stack[-1] == 0)
0x67: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x13be

0x6b: Pop(1)
0x6c: Pop(1); Push((bool) Stack[-1] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 1
0x6f: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x13a0

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
0x84: Call2 0x13fa

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x87: PushEmpty(bool, object)
0x88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89: Call2 0x1404

0x8a: Pop(1)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Stack[-1] = (bool) 0
0x8d: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call2 0x140e

0x91: Pop(1)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0x1418

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
0xa5: Call2 0x13e6

0xa6: Pop(1)
0xa7: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa8: PushEmpty(bool, object)
0xa9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Call2 0x13f0

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
0xb6: Call2 0x13a0

0xb7: Pop(1)
0xb8: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb9: Push((int) 538210)
0xba: Push((int) -1)
0xbb: Push((int) 40087)
0xbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd: Pop(3)
0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call2 0x13a0

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: Push((int) 543042)
0xc4: Push((int) -1)
0xc5: Push((int) 45494)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0x13a0

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
0xd8: Call2 0x13e6

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdb: PushEmpty(bool, object)
0xdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Call2 0x13f0

0xde: Pop(1)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Stack[-1] = (bool) 0
0xe1: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x13fa

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
0xf2: Call2 0x13e6

0xf3: Pop(1)
0xf4: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf5: PushEmpty(bool, object)
0xf6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Call2 0x13f0

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
0x107: Call2 0x1404

0x108: Pop(1)
0x109: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10a: PushEmpty(bool, object)
0x10b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Call2 0x140e

0x10d: Pop(1)
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: Stack[-1] = (bool) 0
0x110: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x111: PushEmpty(bool, object)
0x112: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x113: Call2 0x1418

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
0x125: Call2 0x13fa

0x126: Pop(1)
0x127: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x128: PushEmpty(bool, object)
0x129: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12a: Call2 0x1404

0x12b: Pop(1)
0x12c: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12d: Stack[-1] = (bool) 0
0x12e: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x140e

0x132: Pop(1)
0x133: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x134: Stack[-1] = (bool) 0
0x135: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138: Call2 0x1418

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
0x14e: Call2 0x137c

0x14f: Pop(1)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: Push((int) 538208)
0x152: Push((int) -1)
0x153: Push((int) 40085)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0x1388

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
0x164: Call2 0x137c

0x165: Pop(1)
0x166: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x13b4

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
0x177: Call2 0x137c

0x178: Pop(1)
0x179: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17a: PushEmpty(bool, object)
0x17b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Call2 0x13b4

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
0x18a: Call2 0x137c

0x18b: Pop(1)
0x18c: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18d: PushEmpty(bool, object)
0x18e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18f: Call2 0x13be

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
0x19d: Call2 0x137c

0x19e: Pop(1)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a0: PushEmpty(bool, object)
0x1a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a2: Call2 0x13c8

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
0x1b0: Call2 0x137c

0x1b1: Pop(1)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b3: PushEmpty(bool, object)
0x1b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Call2 0x13d2

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
0x1c1: Call2 0x13dc

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
0x1cd: Call2 0x137c

0x1ce: Pop(1)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d0: PushEmpty(bool, object)
0x1d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d2: Call2 0x13e6

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
0x1de: Call2 0x13f0

0x1df: Pop(1)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: Push((int) 538322)
0x1e2: Push((int) 40206)
0x1e3: Push((int) 40205)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: PushEmpty(bool, object)
0x1e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e8: Call2 0x13aa

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
0x1f4: Call2 0x137c

0x1f5: Pop(1)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Call2 0x13fa

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
0x205: Call2 0x1404

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
0x211: Call2 0x137c

0x212: Pop(1)
0x213: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x216: Call2 0x140e

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
0x224: Call2 0x137c

0x225: Pop(1)
0x226: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x229: Call2 0x140e

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
0x23c: Call2 0x183d

0x23d: Pop(0)
0x23e: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x23f: @ lshWaitForAnimEnd()
0x240: Pop(0)
0x241: Push( Stack[3 + Tasks[-1].StackPointer] )
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: GOTO 0x249

0x244: PushEmpty(string)
0x245: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x246: Call2 0x12c2

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
0x25b: Call2 0x183d

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
0x26b: Call2 0x12d2

0x26c: Pop(2)
0x26d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x26e: Return(); Pop(0)

0x26f: PushEmpty()
0x270: Push((int) 1)
0x271: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0x272: PushEmpty()
0x273: Call2 0x12ec

0x274: Pop(0)
0x275: Push((int) 40087)
0x276: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x278: PushEmpty(object, object)
0x279: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27b: Call2 0x1377

0x27c: Pop(2)
0x27d: Push((int) 45510)
0x27e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x280: PushEmpty(object, object)
0x281: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x282: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x283: Call2 0x1377

0x284: Pop(2)
0x285: Push((int) 45517)
0x286: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x288: PushEmpty(object, object)
0x289: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28b: Call2 0x1377

0x28c: Pop(2)
0x28d: Push((int) 40085)
0x28e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x290: PushEmpty(object, object)
0x291: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x292: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x293: Call2 0x1377

0x294: Pop(2)
0x295: Push((int) 40086)
0x296: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x298: PushEmpty(object, object)
0x299: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29b: Call2 0x1377

0x29c: Pop(2)
0x29d: Push((int) 45493)
0x29e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x2a0: PushEmpty(bool, object)
0x2a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a2: Call2 0x1394

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
0x2b4: Call2 0x13b4

0x2b5: Pop(1)
0x2b6: Pop(1); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ba: Call2 0x13be

0x2bb: Pop(1)
0x2bc: Pop(1); Push((bool) Stack[-1] == 0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: Stack[-1] = (bool) 1
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c0: PushEmpty(bool, object)
0x2c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c2: Call2 0x13a0

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
0x2d4: Call2 0x13fa

0x2d5: Pop(1)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d7: PushEmpty(bool, object)
0x2d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d9: Call2 0x1404

0x2da: Pop(1)
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: Stack[-1] = (bool) 0
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2de: PushEmpty(bool, object)
0x2df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e0: Call2 0x140e

0x2e1: Pop(1)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: Stack[-1] = (bool) 0
0x2e4: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e5: PushEmpty(bool, object)
0x2e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e7: Call2 0x1418

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
0x2f5: Call2 0x13e6

0x2f6: Pop(1)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f8: PushEmpty(bool, object)
0x2f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fa: Call2 0x13f0

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
0x306: Call2 0x13a0

0x307: Pop(1)
0x308: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x309: Push((int) 538210)
0x30a: Push((int) -1)
0x30b: Push((int) 40087)
0x30c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(3)
0x30e: PushEmpty(bool, object)
0x30f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x310: Call2 0x13a0

0x311: Pop(1)
0x312: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x313: Push((int) 543042)
0x314: Push((int) -1)
0x315: Push((int) 45494)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: PushEmpty(bool, object)
0x319: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31a: Call2 0x13a0

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
0x328: Call2 0x13e6

0x329: Pop(1)
0x32a: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32b: PushEmpty(bool, object)
0x32c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32d: Call2 0x13f0

0x32e: Pop(1)
0x32f: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x330: Stack[-1] = (bool) 0
0x331: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x332: PushEmpty(bool, object)
0x333: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x334: Call2 0x13fa

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
0x342: Call2 0x13e6

0x343: Pop(1)
0x344: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x345: PushEmpty(bool, object)
0x346: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x347: Call2 0x13f0

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
0x357: Call2 0x1404

0x358: Pop(1)
0x359: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35a: PushEmpty(bool, object)
0x35b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35c: Call2 0x140e

0x35d: Pop(1)
0x35e: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35f: Stack[-1] = (bool) 0
0x360: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x361: PushEmpty(bool, object)
0x362: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x363: Call2 0x1418

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
0x375: Call2 0x13fa

0x376: Pop(1)
0x377: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x378: PushEmpty(bool, object)
0x379: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37a: Call2 0x1404

0x37b: Pop(1)
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: Stack[-1] = (bool) 0
0x37e: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x37f: PushEmpty(bool, object)
0x380: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x381: Call2 0x140e

0x382: Pop(1)
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: Stack[-1] = (bool) 0
0x385: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x386: PushEmpty(bool, object)
0x387: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x388: Call2 0x1418

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
0x39e: Call2 0x137c

0x39f: Pop(1)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a1: Push((int) 538208)
0x3a2: Push((int) -1)
0x3a3: Push((int) 40085)
0x3a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a5: Pop(3)
0x3a6: PushEmpty(bool, object)
0x3a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a8: Call2 0x1388

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
0x3b4: Call2 0x137c

0x3b5: Pop(1)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b7: PushEmpty(bool, object)
0x3b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b9: Call2 0x13b4

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
0x3c7: Call2 0x137c

0x3c8: Pop(1)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ca: PushEmpty(bool, object)
0x3cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cc: Call2 0x13b4

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
0x3da: Call2 0x137c

0x3db: Pop(1)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3dd: PushEmpty(bool, object)
0x3de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3df: Call2 0x13be

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
0x3ed: Call2 0x137c

0x3ee: Pop(1)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f0: PushEmpty(bool, object)
0x3f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f2: Call2 0x13c8

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
0x400: Call2 0x137c

0x401: Pop(1)
0x402: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x403: PushEmpty(bool, object)
0x404: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x405: Call2 0x13d2

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
0x411: Call2 0x13dc

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
0x41d: Call2 0x137c

0x41e: Pop(1)
0x41f: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x420: PushEmpty(bool, object)
0x421: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x422: Call2 0x13e6

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
0x42e: Call2 0x13f0

0x42f: Pop(1)
0x430: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x431: Push((int) 538322)
0x432: Push((int) 40206)
0x433: Push((int) 40205)
0x434: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x435: Pop(3)
0x436: PushEmpty(bool, object)
0x437: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x438: Call2 0x13aa

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
0x444: Call2 0x137c

0x445: Pop(1)
0x446: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x447: PushEmpty(bool, object)
0x448: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x449: Call2 0x13fa

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
0x455: Call2 0x1404

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
0x461: Call2 0x137c

0x462: Pop(1)
0x463: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x464: PushEmpty(bool, object)
0x465: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x466: Call2 0x140e

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
0x474: Call2 0x137c

0x475: Pop(1)
0x476: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x477: PushEmpty(bool, object)
0x478: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x479: Call2 0x140e

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
0x782: Call2 0x137c

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
0xa68: Call2 0x183d

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
0xa7b: Call2 0x1878

0xa7c: Pop(1)
0xa7d: EventEnable(0)
0xa7e: @ Hold()
0xa7f: Pop(0)
0xa80: GOTO 0xa7e

0xa81: Return(); Pop(0)

0xa82: PushEmpty(int, int)
0xa83: PushEmpty(int, object)
0xa84: Stack[-1] = Stack[-5]
0xa85: Call2 0x176d

0xa86: Stack[-3] = Stack[-2]
0xa87: Pop(2)
0xa88: Push((int) 0)
0xa89: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa8a: IF (Stack[-1] == 0) GOTO 0xa8f; Pop(1)

0xa8b: PushEmpty(object)
0xa8c: Stack[-1] = Stack[-4]
0xa8d: Call2 0x1770

0xa8e: Pop(1)
0xa8f: Return(); Pop(2)

0xa90: PushEmpty()
0xa91: Call2 0x1776

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
0xada: Call2 0x12f3

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
0xafc: Call2 0x12f3

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

0xb0f: Push((bool) 1)
0xb10: @ SensePlayerOnly(Stack[-1])
0xb11: Pop(1)
0xb12: PushEmpty()
0xb13: Call2 0x183f

0xb14: Pop(0)
0xb15: PushEmpty()
0xb16: Call2 0xb1e

0xb17: Pop(0)
0xb18: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb19: PushEmpty()
0xb1a: Call2 0xc23

0xb1b: Pop(0)
0xb1c: GOTO 0xb18

0xb1d: Return(); Pop(0)

0xb1e: PushEmpty(bool)
0xb1f: Call2 0x1266

0xb20: Pop(0)
0xb21: Pop(1); Push((bool) Stack[-1] == 0)
0xb22: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb23: PushEmpty()
0xb24: Call2 0x1776

0xb25: Pop(0)
0xb26: Return(); Pop(0)

0xb27: PushEmpty(int, int)
0xb28: PushEmpty(int, object)
0xb29: Stack[-1] = Stack[-5]
0xb2a: Call2 0x176d

0xb2b: Stack[-3] = Stack[-2]
0xb2c: Pop(2)
0xb2d: Push((int) 0)
0xb2e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb2f: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb30: Push((int) 1)
0xb31: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb32: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb33: PushEmpty()
0xb34: Call2 0xbe2

0xb35: Pop(0)
0xb36: PushEmpty(object)
0xb37: Stack[-1] = Stack[-4]
0xb38: Call2 0x1770

0xb39: Pop(1)
0xb3a: Return(); Pop(2)

0xb3b: PushEmpty(int, int)
0xb3c: PushEmpty(object)
0xb3d: Stack[-1] = Stack[-4]
0xb3e: Call2 0x1661

0xb3f: Pop(1)
0xb40: PushEmpty(int, object)
0xb41: Stack[-1] = Stack[-5]
0xb42: Call2 0x16b3

0xb43: Stack[-3] = Stack[-2]
0xb44: Pop(2)
0xb45: Push((int) 0)
0xb46: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb47: IF (Stack[-1] == 0) GOTO 0xb52; Pop(1)

0xb48: Push((int) 1)
0xb49: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb4a: IF (Stack[-1] == 0) GOTO 0xb4e; Pop(1)

0xb4b: PushEmpty()
0xb4c: Call2 0xbe2

0xb4d: Pop(0)
0xb4e: PushEmpty(object)
0xb4f: Stack[-1] = Stack[-4]
0xb50: Call2 0x16bd

0xb51: Pop(1)
0xb52: Return(); Pop(2)

0xb53: PushEmpty(int, int)
0xb54: PushEmpty(bool, object, object, bool)
0xb55: Stack[-3] = Stack[-9]
0xb56: Stack[-2] = Stack[-8]
0xb57: Stack[-1] = Stack[-7]
0xb58: Call2 0x186e

0xb59: Pop(3)
0xb5a: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb5b: PushEmpty(int, object, bool)
0xb5c: Stack[-2] = Stack[-8]
0xb5d: Stack[-1] = Stack[-6]
0xb5e: Call2 0x1710

0xb5f: Stack[-4] = Stack[-3]
0xb60: Pop(3)
0xb61: Push((int) 0)
0xb62: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb63: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb64: Push((int) 1)
0xb65: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb66: IF (Stack[-1] == 0) GOTO 0xb6a; Pop(1)

0xb67: PushEmpty()
0xb68: Call2 0xbe2

0xb69: Pop(0)
0xb6a: PushEmpty(object)
0xb6b: Stack[-1] = Stack[-6]
0xb6c: Call2 0x1717

0xb6d: Pop(1)
0xb6e: Return(); Pop(2)

0xb6f: PushEmpty(int, int)
0xb70: PushEmpty(int, object)
0xb71: Stack[-1] = Stack[-5]
0xb72: Call2 0x173a

0xb73: Stack[-3] = Stack[-2]
0xb74: Pop(2)
0xb75: Push((int) 0)
0xb76: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb77: IF (Stack[-1] == 0) GOTO 0xb82; Pop(1)

0xb78: Push((int) 1)
0xb79: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb7a: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb7b: PushEmpty()
0xb7c: Call2 0xbe2

0xb7d: Pop(0)
0xb7e: PushEmpty(object)
0xb7f: Stack[-1] = Stack[-4]
0xb80: Call2 0x173d

0xb81: Pop(1)
0xb82: Return(); Pop(2)

0xb83: PushEmpty(int, int)
0xb84: PushEmpty(bool, object, string)
0xb85: Stack[-2] = Stack[-7]
0xb86: Stack[-1] = Stack[-6]
0xb87: Call2 0x160b

0xb88: Pop(2)
0xb89: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb8a: PushEmpty()
0xb8b: Call2 0xbe2

0xb8c: Pop(0)
0xb8d: PushEmpty(object, string)
0xb8e: Stack[-2] = Stack[-6]
0xb8f: Stack[-1] = Stack[-5]
0xb90: Call2 0x162b

0xb91: Pop(2)
0xb92: GOTO 0xba7

0xb93: PushEmpty(int, string, object)
0xb94: Stack[-2] = Stack[-6]
0xb95: Stack[-1] = Stack[-7]
0xb96: Call2 0x173f

0xb97: Stack[-4] = Stack[-3]
0xb98: Pop(3)
0xb99: Push((int) 0)
0xb9a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb9b: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xb9c: Push((int) 1)
0xb9d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb9e: IF (Stack[-1] == 0) GOTO 0xba2; Pop(1)

0xb9f: PushEmpty()
0xba0: Call2 0xbe2

0xba1: Pop(0)
0xba2: PushEmpty(string, object)
0xba3: Stack[-2] = Stack[-5]
0xba4: Stack[-1] = Stack[-6]
0xba5: Call2 0x174b

0xba6: Pop(2)
0xba7: Return(); Pop(2)

0xba8: PushEmpty()
0xba9: PushEmpty(bool, string)
0xbaa: Stack[-1] = Stack[-3]
0xbab: Call2 0x166e

0xbac: Pop(1)
0xbad: IF (Stack[-1] == 0) GOTO 0xbb5; Pop(1)

0xbae: PushEmpty()
0xbaf: Call2 0xbe2

0xbb0: Pop(0)
0xbb1: PushEmpty(string)
0xbb2: Stack[-1] = Stack[-2]
0xbb3: Call2 0x167e

0xbb4: Pop(1)
0xbb5: Return(); Pop(0)

0xbb6: PushEmpty()
0xbb7: PushEmpty(bool, object)
0xbb8: Stack[-1] = Stack[-3]
0xbb9: Call2 0x1644

0xbba: Pop(1)
0xbbb: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xbbc: PushEmpty()
0xbbd: Call2 0xbe2

0xbbe: Pop(0)
0xbbf: PushEmpty(object)
0xbc0: Stack[-1] = Stack[-2]
0xbc1: Call2 0x165b

0xbc2: Pop(1)
0xbc3: GOTO 0xbc8

0xbc4: PushEmpty(object)
0xbc5: Stack[-1] = Stack[-2]
0xbc6: Call2 0xbfb

0xbc7: Pop(1)
0xbc8: Return(); Pop(0)

0xbc9: PushEmpty()
0xbca: PushEmpty(object)
0xbcb: Stack[-1] = Stack[-2]
0xbcc: Call2 0xbfb

0xbcd: Pop(1)
0xbce: Return(); Pop(0)

0xbcf: PushEmpty()
0xbd0: Push((int) 110)
0xbd1: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xbd2: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbd3: Return(); Pop(0)

0xbd4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbd5: Push((int) 110)
0xbd6: @ KillTimer(Stack[-1])
0xbd7: Pop(1)
0xbd8: @ ResetAAS()
0xbd9: Pop(0)
0xbda: Return(); Pop(0)

0xbdb: PushEmpty()
0xbdc: Call2 0xbe2

0xbdd: Pop(0)
0xbde: PushEmpty()
0xbdf: Call2 0x1776

0xbe0: Pop(0)
0xbe1: Return(); Pop(0)

0xbe2: Push((int) 110)
0xbe3: @ KillTimer(Stack[-1])
0xbe4: Pop(1)
0xbe5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbe6: PushEmpty()
0xbe7: Call2 0xc6a

0xbe8: Pop(0)
0xbe9: Return(); Pop(0)

0xbea: Push((int) 110)
0xbeb: @ KillTimer(Stack[-1])
0xbec: Pop(1)
0xbed: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbee: PushEmpty()
0xbef: Call2 0xc71

0xbf0: Pop(0)
0xbf1: Return(); Pop(0)

0xbf2: PushEmpty()
0xbf3: PushEmpty()
0xbf4: Call2 0xbe2

0xbf5: Pop(0)
0xbf6: PushEmpty(object)
0xbf7: Stack[-1] = Stack[-2]
0xbf8: Call2 0x15f3

0xbf9: Pop(1)
0xbfa: Return(); Pop(0)

0xbfb: PushEmpty(bool, int, bool, int)
0xbfc: PushEmpty(bool, object)
0xbfd: Stack[-1] = Stack[-7]
0xbfe: Call2 0x11c5

0xbff: Pop(1)
0xc00: Pop(1); Push((bool) Stack[-1] == 0)
0xc01: IF (Stack[-1] == 0) GOTO 0xc03; Pop(1)

0xc02: Return(); Pop(4)

0xc03: Push( Stack[2 + Tasks[-1].StackPointer] )
0xc04: IF (Stack[-1] == 0) GOTO 0xc06; Pop(1)

0xc05: Return(); Pop(4)

0xc06: @ IsPlayerActor(Stack[-5], Stack[-2])
0xc07: Pop(0)
0xc08: Pop(0); Push((bool) Stack[-2] == 0)
0xc09: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xc0a: Return(); Pop(4)

0xc0b: PushEmpty(int, object)
0xc0c: Stack[-1] = Stack[-7]
0xc0d: Call2 0x16a3

0xc0e: Stack[-3] = Stack[-2]
0xc0f: Pop(2)
0xc10: Push((int) 0)
0xc11: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc12: IF (Stack[-1] == 0) GOTO 0xc22; Pop(1)

0xc13: Push((int) 1)
0xc14: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc15: IF (Stack[-1] == 0) GOTO 0xc19; Pop(1)

0xc16: PushEmpty()
0xc17: Call2 0xbea

0xc18: Pop(0)
0xc19: PushEmpty(object)
0xc1a: Stack[-1] = Stack[-6]
0xc1b: Call2 0x16ad

0xc1c: Pop(1)
0xc1d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc1e: Push((int) 110)
0xc1f: Push((float)10.0)
0xc20: @ SetTimer(Stack[-2], Stack[-1])
0xc21: Pop(2)
0xc22: Return(); Pop(4)

0xc23: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0xc24: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xc25: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xc26: Push((float)0.5)
0xc27: @ rand(Stack[-7], Stack[-1])
0xc28: Pop(1)
0xc29: @ Sleep(Stack[-6])
0xc2a: Pop(0)
0xc2b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc2c: IF (Stack[-1] == 0) GOTO 0xc5d; Pop(1)

0xc2d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xc2e: IF (Stack[-1] == 0) GOTO 0xc3e; Pop(1)

0xc2f: @ GetPosition(Stack[-4])
0xc30: Pop(0)
0xc31: PushEmpty(float)
0xc32: Call2 0xc5e

0xc33: Pop(0)
0xc34: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0xc35: Pop(1)
0xc36: Push(Stack[-3])
0xc37: IF (Stack[-1] == 0) GOTO 0xc39; Pop(1)

0xc38: GOTO 0xc3d

0xc39: Push((int) 1)
0xc3a: @ Sleep(Stack[-1])
0xc3b: Pop(1)
0xc3c: GOTO 0xc2f

0xc3d: GOTO 0xc3f

0xc3e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xc3f: PushEmpty(object, cvector)
0xc40: Stack[-1] = Stack[-7]
0xc41: Call2 0xc7a

0xc42: Stack[-4] = Stack[-2]
0xc43: Pop(2)
0xc44: Pop(0); Push(( Stack[-2] != 0 )
0xc45: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc46: @ RotatePath(Stack[-2], Stack[-1])
0xc47: Pop(0)
0xc48: Push(Stack[-1])
0xc49: IF (Stack[-1] == 0) GOTO 0xc57; Pop(1)

0xc4a: PushEmpty(bool)
0xc4b: Call2 0xc78

0xc4c: Pop(0)
0xc4d: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0xc4e: Pop(1)
0xc4f: Stack[-2] = 0
0xc50: Push(Stack[-1])
0xc51: IF (Stack[-1] == 0) GOTO 0xc57; Pop(1)

0xc52: PushEmpty()
0xc53: Push(-0, 0); TaskCall(4)
0xc54: Call2 0xd24

0xc55: Pop(-0, 0); TaskReturn
0xc56: Pop(0)
0xc57: GOTO 0xc5b

0xc58: Push((int) 1)
0xc59: @ Sleep(Stack[-1])
0xc5a: Pop(1)
0xc5b: Stack[-2] = 0
0xc5c: GOTO 0xc2b

0xc5d: Return(); Pop(12)

0xc5e: PushEmpty(float, float)
0xc5f: @ GetCameraFarDistance(Stack[-1])
0xc60: Pop(0)
0xc61: Stack[-3] = Stack[-1]
0xc62: Return(); Pop(2)

0xc63: PushEmpty()
0xc64: @ RequestClearPath(Stack[-1])
0xc65: Pop(0)
0xc66: Return(); Pop(0)

0xc67: @ Stop()
0xc68: Pop(0)
0xc69: Return(); Pop(0)

0xc6a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc6b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xc6c: @ Stop()
0xc6d: Pop(0)
0xc6e: @ StopGroup0()
0xc6f: Pop(0)
0xc70: Return(); Pop(0)

0xc71: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc72: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xc73: @ Stop()
0xc74: Pop(0)
0xc75: @ StopGroup0()
0xc76: Pop(0)
0xc77: Return(); Pop(0)

0xc78: Stack[-1] = (bool) 0
0xc79: Return(); Pop(0)

0xc7a: PushEmpty(object, object)
0xc7b: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0xc7c: Pop(0)
0xc7d: Stack[-4] = Stack[-1]
0xc7e: Return(); Pop(2)

0xc7f: Stack[-1] = 0
0xc80: PushEmpty(int, int)
0xc81: PushEmpty(int, object)
0xc82: Stack[-1] = Stack[-5]
0xc83: Call2 0x176d

0xc84: Stack[-3] = Stack[-2]
0xc85: Pop(2)
0xc86: Push((int) 0)
0xc87: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc88: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc89: Push((int) 1)
0xc8a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc8b: IF (Stack[-1] == 0) GOTO 0xc8f; Pop(1)

0xc8c: PushEmpty()
0xc8d: Call2 0xd75

0xc8e: Pop(0)
0xc8f: PushEmpty(object)
0xc90: Stack[-1] = Stack[-4]
0xc91: Call2 0x1770

0xc92: Pop(1)
0xc93: Return(); Pop(2)

0xc94: PushEmpty(int, int)
0xc95: PushEmpty(object)
0xc96: Stack[-1] = Stack[-4]
0xc97: Call2 0x1661

0xc98: Pop(1)
0xc99: PushEmpty(int, object)
0xc9a: Stack[-1] = Stack[-5]
0xc9b: Call2 0x16b3

0xc9c: Stack[-3] = Stack[-2]
0xc9d: Pop(2)
0xc9e: Push((int) 0)
0xc9f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca0: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xca1: Push((int) 1)
0xca2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca3: IF (Stack[-1] == 0) GOTO 0xca7; Pop(1)

0xca4: PushEmpty()
0xca5: Call2 0xd75

0xca6: Pop(0)
0xca7: PushEmpty(object)
0xca8: Stack[-1] = Stack[-4]
0xca9: Call2 0x16bd

0xcaa: Pop(1)
0xcab: Return(); Pop(2)

0xcac: PushEmpty(int, int)
0xcad: PushEmpty(bool, object, object, bool)
0xcae: Stack[-3] = Stack[-9]
0xcaf: Stack[-2] = Stack[-8]
0xcb0: Stack[-1] = Stack[-7]
0xcb1: Call2 0x186e

0xcb2: Pop(3)
0xcb3: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcb4: PushEmpty(int, object, bool)
0xcb5: Stack[-2] = Stack[-8]
0xcb6: Stack[-1] = Stack[-6]
0xcb7: Call2 0x1710

0xcb8: Stack[-4] = Stack[-3]
0xcb9: Pop(3)
0xcba: Push((int) 0)
0xcbb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcbc: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcbd: Push((int) 1)
0xcbe: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcbf: IF (Stack[-1] == 0) GOTO 0xcc3; Pop(1)

0xcc0: PushEmpty()
0xcc1: Call2 0xd75

0xcc2: Pop(0)
0xcc3: PushEmpty(object)
0xcc4: Stack[-1] = Stack[-6]
0xcc5: Call2 0x1717

0xcc6: Pop(1)
0xcc7: Return(); Pop(2)

0xcc8: PushEmpty(int, int)
0xcc9: PushEmpty(int, object)
0xcca: Stack[-1] = Stack[-5]
0xccb: Call2 0x173a

0xccc: Stack[-3] = Stack[-2]
0xccd: Pop(2)
0xcce: Push((int) 0)
0xccf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcd0: IF (Stack[-1] == 0) GOTO 0xcdb; Pop(1)

0xcd1: Push((int) 1)
0xcd2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcd3: IF (Stack[-1] == 0) GOTO 0xcd7; Pop(1)

0xcd4: PushEmpty()
0xcd5: Call2 0xd75

0xcd6: Pop(0)
0xcd7: PushEmpty(object)
0xcd8: Stack[-1] = Stack[-4]
0xcd9: Call2 0x173d

0xcda: Pop(1)
0xcdb: Return(); Pop(2)

0xcdc: PushEmpty(int, int)
0xcdd: PushEmpty(bool, object, string)
0xcde: Stack[-2] = Stack[-7]
0xcdf: Stack[-1] = Stack[-6]
0xce0: Call2 0x160b

0xce1: Pop(2)
0xce2: IF (Stack[-1] == 0) GOTO 0xcec; Pop(1)

0xce3: PushEmpty()
0xce4: Call2 0xd75

0xce5: Pop(0)
0xce6: PushEmpty(object, string)
0xce7: Stack[-2] = Stack[-6]
0xce8: Stack[-1] = Stack[-5]
0xce9: Call2 0x162b

0xcea: Pop(2)
0xceb: GOTO 0xd00

0xcec: PushEmpty(int, string, object)
0xced: Stack[-2] = Stack[-6]
0xcee: Stack[-1] = Stack[-7]
0xcef: Call2 0x173f

0xcf0: Stack[-4] = Stack[-3]
0xcf1: Pop(3)
0xcf2: Push((int) 0)
0xcf3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcf4: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xcf5: Push((int) 1)
0xcf6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcf7: IF (Stack[-1] == 0) GOTO 0xcfb; Pop(1)

0xcf8: PushEmpty()
0xcf9: Call2 0xd75

0xcfa: Pop(0)
0xcfb: PushEmpty(string, object)
0xcfc: Stack[-2] = Stack[-5]
0xcfd: Stack[-1] = Stack[-6]
0xcfe: Call2 0x174b

0xcff: Pop(2)
0xd00: Return(); Pop(2)

0xd01: PushEmpty()
0xd02: PushEmpty(bool, string)
0xd03: Stack[-1] = Stack[-3]
0xd04: Call2 0x166e

0xd05: Pop(1)
0xd06: IF (Stack[-1] == 0) GOTO 0xd0e; Pop(1)

0xd07: PushEmpty()
0xd08: Call2 0xd75

0xd09: Pop(0)
0xd0a: PushEmpty(string)
0xd0b: Stack[-1] = Stack[-2]
0xd0c: Call2 0x167e

0xd0d: Pop(1)
0xd0e: Return(); Pop(0)

0xd0f: PushEmpty()
0xd10: Call2 0xd75

0xd11: Pop(0)
0xd12: PushEmpty()
0xd13: Call2 0x1776

0xd14: Pop(0)
0xd15: Return(); Pop(0)

0xd16: PushEmpty()
0xd17: PushEmpty(bool, object)
0xd18: Stack[-1] = Stack[-3]
0xd19: Call2 0x1644

0xd1a: Pop(1)
0xd1b: IF (Stack[-1] == 0) GOTO 0xd23; Pop(1)

0xd1c: PushEmpty()
0xd1d: Call2 0xd75

0xd1e: Pop(0)
0xd1f: PushEmpty(object)
0xd20: Stack[-1] = Stack[-2]
0xd21: Call2 0x165b

0xd22: Pop(1)
0xd23: Return(); Pop(0)

0xd24: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xd25: @ WaitForAnimEnd()
0xd26: Pop(0)
0xd27: PushEmpty(bool)
0xd28: Call2 0x1266

0xd29: Pop(0)
0xd2a: Pop(1); Push((bool) Stack[-1] == 0)
0xd2b: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd2c: Return(); Pop(14)

0xd2d: PushEmpty(int)
0xd2e: Call2 0x1692

0xd2f: Stack[-8] = Stack[-1]
0xd30: Pop(1)
0xd31: Stack[-6] = (int) 0
0xd32: PushEmpty(bool)
0xd33: Stack[-1] = (bool) 0
0xd34: Push((int) 5)
0xd35: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xd36: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd37: PushEmpty(bool)
0xd38: Call2 0x1266

0xd39: Pop(0)
0xd3a: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd3b: Stack[-1] = (bool) 1
0xd3c: IF (Stack[-1] == 0) GOTO 0xd70; Pop(1)

0xd3d: Push((int) 3)
0xd3e: @ irand(Stack[-6], Stack[-1])
0xd3f: Pop(1)
0xd40: Push((int) 0)
0xd41: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd42: IF (Stack[-1] == 0) GOTO 0xd54; Pop(1)

0xd43: Push(Stack[-7])
0xd44: IF (Stack[-1] == 0) GOTO 0xd53; Pop(1)

0xd45: @ irand(Stack[-4], Stack[-7])
0xd46: Pop(0)
0xd47: Push("all")
0xd48: PushEmpty(string, int)
0xd49: Stack[-1] = Stack[-7]
0xd4a: Call2 0x168b

0xd4b: Pop(1)
0xd4c: @ PlayAnimation(Stack[-2], Stack[-1])
0xd4d: Pop(2)
0xd4e: @ WaitForAnimEnd(Stack[-3])
0xd4f: Pop(0)
0xd50: Pop(0); Push((bool) Stack[-3] == 0)
0xd51: IF (Stack[-1] == 0) GOTO 0xd53; Pop(1)

0xd52: GOTO 0xd70

0xd53: GOTO 0xd65

0xd54: Push((int) 1)
0xd55: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd56: IF (Stack[-1] == 0) GOTO 0xd62; Pop(1)

0xd57: Push((int) 4)
0xd58: @ rand(Stack[-3], Stack[-1])
0xd59: Pop(1)
0xd5a: Push((int) 1)
0xd5b: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd5c: @ Sleep(Stack[-1], Stack[-2])
0xd5d: Pop(1)
0xd5e: Pop(0); Push((bool) Stack[-1] == 0)
0xd5f: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd60: GOTO 0xd70

0xd61: GOTO 0xd65

0xd62: Push(Stack[-6])
0xd63: IF (Stack[-1] == 0) GOTO 0xd65; Pop(1)

0xd64: GOTO 0xd70

0xd65: PushEmpty(bool)
0xd66: Call2 0xd73

0xd67: Pop(0)
0xd68: Pop(1); Push((bool) Stack[-1] == 0)
0xd69: IF (Stack[-1] == 0) GOTO 0xd6b; Pop(1)

0xd6a: GOTO 0xd70

0xd6b: @ ResetAAS()
0xd6c: Pop(0)
0xd6d: Push((int) 1)
0xd6e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xd6f: GOTO 0xd32

0xd70: @ ResetAAS()
0xd71: Pop(0)
0xd72: Return(); Pop(14)

0xd73: Stack[-1] = (bool) 1
0xd74: Return(); Pop(0)

0xd75: @ StopAnimation()
0xd76: Pop(0)
0xd77: @ StopGroup0()
0xd78: Pop(0)
0xd79: Return(); Pop(0)

0xd7a: PushEmpty()
0xd7b: PushEmpty(object, bool, float)
0xd7c: Stack[-3] = Stack[-4]
0xd7d: Stack[-2] = (bool) 1
0xd7e: Stack[-1] = (float) 180.0
0xd7f: Call2 0xd88

0xd80: Pop(3)
0xd81: Return(); Pop(0)

0xd82: PushEmpty()
0xd83: Stack[-3] = (float) 0.05
0xd84: Return(); Pop(0)

0xd85: PushEmpty()
0xd86: Stack[-3] = (int) 0
0xd87: Return(); Pop(0)

0xd88: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xd89: PushEmpty()
0xd8a: Call2 0xe6d

0xd8b: Pop(0)
0xd8c: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xd8d: Push("@GetAttackDistance")
0xd8e: Push((int) 1)
0xd8f: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xd90: IF (Stack[-1] == 0) GOTO 0xd96; Pop(1)

0xd91: @@ GetAttackDistance(Stack[-11])
0xd92: Pop(0)
0xd93: Push((int) 50)
0xd94: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xd95: GOTO 0xd97

0xd96: Stack[-11] = Stack[-23]
0xd97: Push((int) 150)
0xd98: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xd99: IF (Stack[-1] == 0) GOTO 0xd9b; Pop(1)

0xd9a: Stack[-11] = (int) 150
0xd9b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd9c: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xd9d: @ IsPlayerActor(Stack[-0], Stack[-8])
0xd9e: Pop(0)
0xd9f: Push(Stack[-8])
0xda0: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xda1: Push("attack")
0xda2: @ PlayGlobalMusic(Stack[-1])
0xda3: Pop(1)
0xda4: PushEmpty(object)
0xda5: Call2 0x131c

0xda6: Pop(0)
0xda7: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xda8: Pop(1)
0xda9: Push(Stack[-24])
0xdaa: IF (Stack[-1] == 0) GOTO 0xdad; Pop(1)

0xdab: Stack[-7] = (bool) 0
0xdac: GOTO 0xdae

0xdad: Stack[-7] = (bool) 1
0xdae: Push((float)400.0)
0xdaf: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xdb0: PushEmpty(bool)
0xdb1: Stack[-1] = (bool) 0
0xdb2: PushEmpty(bool, object)
0xdb3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb4: Call2 0x11c5

0xdb5: Pop(1)
0xdb6: IF (Stack[-1] == 0) GOTO 0xdba; Pop(1)

0xdb7: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xdb8: IF (Stack[-1] == 0) GOTO 0xdba; Pop(1)

0xdb9: Stack[-1] = (bool) 1
0xdba: IF (Stack[-1] == 0) GOTO 0xe5c; Pop(1)

0xdbb: PushEmpty()
0xdbc: Call2 0x100a

0xdbd: Pop(0)
0xdbe: @@ GetPFPosition(Stack[-10])
0xdbf: Pop(0)
0xdc0: @ GetPFPosition(Stack[-9])
0xdc1: Pop(0)
0xdc2: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xdc3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xdc4: Pop(0); Push(Stack[-6] * Stack[-6]);
0xdc5: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xdc6: IF (Stack[-1] == 0) GOTO 0xdd6; Pop(1)

0xdc7: PushEmpty(bool, object, float, float, bool, bool)
0xdc8: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xdc9: Stack[-4] = Stack[-17]
0xdca: Stack[-3] = (float) 3000.0
0xdcb: Stack[-2] = (bool) 1
0xdcc: Stack[-1] = (bool) 0
0xdcd: Push(-6, 3); TaskCall(6)
0xdce: Call2 0x1025

0xdcf: Pop(-6, 3); TaskReturn
0xdd0: Pop(5)
0xdd1: Pop(1); Push((bool) Stack[-1] == 0)
0xdd2: IF (Stack[-1] == 0) GOTO 0xdd4; Pop(1)

0xdd3: GOTO 0xe5c

0xdd4: Stack[-7] = (bool) 0
0xdd5: GOTO 0xe5b

0xdd6: Pop(0); Push(Stack[-23] * Stack[-23]);
0xdd7: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xdd8: IF (Stack[-1] == 0) GOTO 0xe53; Pop(1)

0xdd9: @@ GetPFPosition(Stack[-3])
0xdda: Pop(0)
0xddb: @ CanReachByPF(Stack[-2], Stack[-3])
0xddc: Pop(0)
0xddd: Pop(0); Push((bool) Stack[-2] == 0)
0xdde: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xddf: PushEmpty(bool, object, float, float, bool, bool)
0xde0: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xde1: Stack[-4] = Stack[-17]
0xde2: Stack[-3] = (float) 3000.0
0xde3: Stack[-2] = (bool) 1
0xde4: Stack[-1] = (bool) 0
0xde5: Push(-6, 3); TaskCall(6)
0xde6: Call2 0x1025

0xde7: Pop(-6, 3); TaskReturn
0xde8: Pop(5)
0xde9: Pop(1); Push((bool) Stack[-1] == 0)
0xdea: IF (Stack[-1] == 0) GOTO 0xdec; Pop(1)

0xdeb: GOTO 0xe5c

0xdec: Stack[-7] = (bool) 0
0xded: GOTO 0xdb0

0xdee: Pop(0); Push((bool) Stack[-7] == 0)
0xdef: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xdf0: PushEmpty(object)
0xdf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf2: Call2 0x125b

0xdf3: Pop(1)
0xdf4: Push("all")
0xdf5: Push("attack_on")
0xdf6: @ PlayAnimation(Stack[-2], Stack[-1])
0xdf7: Pop(2)
0xdf8: @ WaitForAnimEnd()
0xdf9: Pop(0)
0xdfa: PushEmpty()
0xdfb: Call2 0x100a

0xdfc: Pop(0)
0xdfd: @ StopAsync()
0xdfe: Pop(0)
0xdff: Stack[-7] = (bool) 1
0xe00: PushEmpty(bool, object)
0xe01: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe02: Call2 0x11c5

0xe03: Pop(1)
0xe04: Pop(1); Push((bool) Stack[-1] == 0)
0xe05: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xe06: GOTO 0xe5c

0xe07: @ rand(Stack[-1])
0xe08: Pop(0)
0xe09: PushEmpty(bool)
0xe0a: Stack[-1] = (bool) 1
0xe0b: Push((float)0.25)
0xe0c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xe0d: IF (Stack[-1] == 0) GOTO 0xe13; Pop(1)

0xe0e: PushEmpty(bool)
0xe0f: Call2 0xfdf

0xe10: Pop(0)
0xe11: IF (Stack[-1] == 0) GOTO 0xe13; Pop(1)

0xe12: Stack[-1] = (bool) 0
0xe13: IF (Stack[-1] == 0) GOTO 0xe24; Pop(1)

0xe14: @ Face(Stack[-0])
0xe15: Pop(0)
0xe16: PushEmpty()
0xe17: Call2 0x1011

0xe18: Pop(0)
0xe19: Push("all")
0xe1a: Push("attack_stay")
0xe1b: @ PlayAnimation(Stack[-2], Stack[-1])
0xe1c: Pop(2)
0xe1d: PushEmpty(bool, float)
0xe1e: Stack[-1] = Stack[-25]
0xe1f: Call2 0xf5b

0xe20: Pop(2)
0xe21: @ StopAsync()
0xe22: Pop(0)
0xe23: GOTO 0xe52

0xe24: @ Face(Stack[-0])
0xe25: Pop(0)
0xe26: Push("all")
0xe27: Push("fjump")
0xe28: @ PlayAnimation(Stack[-2], Stack[-1])
0xe29: Pop(2)
0xe2a: @ WaitForAnimEnd()
0xe2b: Pop(0)
0xe2c: PushEmpty()
0xe2d: Call2 0x100a

0xe2e: Pop(0)
0xe2f: Push(CVector(0.0, 0.0, 0.0))
0xe30: @ SetSpeed(Stack[-1])
0xe31: Pop(1)
0xe32: @ Stop()
0xe33: Pop(0)
0xe34: @ StopAsync()
0xe35: Pop(0)
0xe36: PushEmpty(bool)
0xe37: Call2 0xfdf

0xe38: Pop(0)
0xe39: Pop(1); Push((bool) Stack[-1] == 0)
0xe3a: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe3b: PushEmpty(bool, object)
0xe3c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe3d: Call2 0x11c5

0xe3e: Pop(1)
0xe3f: Pop(1); Push((bool) Stack[-1] == 0)
0xe40: IF (Stack[-1] == 0) GOTO 0xe42; Pop(1)

0xe41: GOTO 0xe5c

0xe42: @@ GetPFPosition(Stack[-10])
0xe43: Pop(0)
0xe44: @ GetPFPosition(Stack[-9])
0xe45: Pop(0)
0xe46: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xe47: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xe48: Pop(0); Push(Stack[-23] * Stack[-23]);
0xe49: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xe4a: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe4b: PushEmpty(bool, float)
0xe4c: Stack[-1] = Stack[-25]
0xe4d: Call2 0xeb7

0xe4e: Pop(1)
0xe4f: Pop(1); Push((bool) Stack[-1] == 0)
0xe50: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe51: GOTO 0xe5c

0xe52: GOTO 0xe5b

0xe53: PushEmpty(bool, float)
0xe54: Stack[-1] = Stack[-25]
0xe55: Call2 0xeb7

0xe56: Pop(1)
0xe57: Pop(1); Push((bool) Stack[-1] == 0)
0xe58: IF (Stack[-1] == 0) GOTO 0xe5a; Pop(1)

0xe59: GOTO 0xe5c

0xe5a: Stack[-7] = (bool) 1
0xe5b: GOTO 0xdb0

0xe5c: @ WaitForAnimEnd()
0xe5d: Pop(0)
0xe5e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe5f: IF (Stack[-1] == 0) GOTO 0xe61; Pop(1)

0xe60: Return(); Pop(22)

0xe61: Push("all")
0xe62: Push("attack_off")
0xe63: @ PlayAnimation(Stack[-2], Stack[-1])
0xe64: Pop(2)
0xe65: @ WaitForAnimEnd()
0xe66: Pop(0)
0xe67: Push(Stack[-8])
0xe68: IF (Stack[-1] == 0) GOTO 0xe6c; Pop(1)

0xe69: Push((float)2.0)
0xe6a: @ Sleep(Stack[-1])
0xe6b: Pop(1)
0xe6c: Return(); Pop(22)

0xe6d: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0xe6e: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xe6f: Push("all")
0xe70: Push("attack_begin")
0xe71: Push((int) 1)
0xe72: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0xe73: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe74: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xe75: Pop(2)
0xe76: Pop(0); Push((bool) Stack[-3] == 0)
0xe77: IF (Stack[-1] == 0) GOTO 0xe79; Pop(1)

0xe78: GOTO 0xe7c

0xe79: Push((int) 1)
0xe7a: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xe7b: GOTO 0xe6f

0xe7c: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xe7d: Push("attack")
0xe7e: Push((int) 1)
0xe7f: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xe80: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe81: @ IsExisting3DSound(Stack[-3], Stack[-1])
0xe82: Pop(1)
0xe83: Pop(0); Push((bool) Stack[-2] == 0)
0xe84: IF (Stack[-1] == 0) GOTO 0xe86; Pop(1)

0xe85: GOTO 0xe89

0xe86: Push((int) 1)
0xe87: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xe88: GOTO 0xe7d

0xe89: Push("all")
0xe8a: Push("bjump")
0xe8b: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xe8c: Pop(2)
0xe8d: Push(CvectorIndex(Stack[-1], 2))
0xe8e: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0xe8f: Return(); Pop(6)

0xe90: PushEmpty(object, float, float, object, float, float)
0xe91: Push((float)0.9)
0xe92: Pop(1); Push(Stack[-9] * Stack[-1]);
0xe93: @ GetVictim(Stack[-1], Stack[-4])
0xe94: Pop(1)
0xe95: @ ReportAttack(Stack[-0])
0xe96: Pop(0)
0xe97: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xe98: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xe99: PushEmpty(float, object, int)
0xe9a: Stack[-2] = Stack[-6]
0xe9b: Stack[-1] = Stack[-10]
0xe9c: Call2 0xd82

0xe9d: Stack[-5] = Stack[-3]
0xe9e: Pop(3)
0xe9f: PushEmpty(float, object, float, int)
0xea0: Stack[-3] = Stack[-7]
0xea1: Stack[-2] = Stack[-6]
0xea2: PushEmpty(int, object, int)
0xea3: Stack[-2] = Stack[-10]
0xea4: Stack[-1] = Stack[-14]
0xea5: Call2 0xd85

0xea6: Stack[-4] = Stack[-3]
0xea7: Pop(3)
0xea8: Call2 0x1153

0xea9: Stack[-5] = Stack[-4]
0xeaa: Pop(4)
0xeab: PushEmpty(int)
0xeac: Call2 0x100f

0xead: Pop(0)
0xeae: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0xeaf: Pop(1)
0xeb0: PushEmpty(object, float)
0xeb1: Stack[-2] = Stack[-5]
0xeb2: Stack[-1] = Stack[-3]
0xeb3: Call2 0x1016

0xeb4: Pop(2)
0xeb5: Return(); Pop(6)

0xeb6: Stack[-3] = 0
0xeb7: PushEmpty(int, bool, int, string, int, bool, int, string)
0xeb8: PushEmpty()
0xeb9: Call2 0x100a

0xeba: Pop(0)
0xebb: @ irand(Stack[-4], Stack[-1])
0xebc: Pop(0)
0xebd: Push((int) 1)
0xebe: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xebf: @ Face(Stack[-0])
0xec0: Pop(0)
0xec1: Push((bool) 1)
0xec2: @ SetAttackState(Stack[-1])
0xec3: Pop(1)
0xec4: PushEmpty()
0xec5: Call2 0x136c

0xec6: Pop(0)
0xec7: Push("all")
0xec8: Push("attack_begin")
0xec9: Pop(1); Push(Stack[-1] + Stack[-6]);
0xeca: @ PlayAnimation(Stack[-2], Stack[-1])
0xecb: Pop(2)
0xecc: @ WaitForAnimEnd()
0xecd: Pop(0)
0xece: PushEmpty()
0xecf: Call2 0xfea

0xed0: Pop(0)
0xed1: PushEmpty(bool, object)
0xed2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed3: Call2 0x11c5

0xed4: Pop(1)
0xed5: Pop(1); Push((bool) Stack[-1] == 0)
0xed6: IF (Stack[-1] == 0) GOTO 0xedb; Pop(1)

0xed7: @ StopAsync()
0xed8: Pop(0)
0xed9: Stack[-10] = (bool) 0
0xeda: Return(); Pop(8)

0xedb: PushEmpty(float, int)
0xedc: Stack[-2] = Stack[-11]
0xedd: Stack[-1] = Stack[-6]
0xede: Call2 0xe90

0xedf: Pop(2)
0xee0: Push("all")
0xee1: Push("attack_middle")
0xee2: Pop(1); Push(Stack[-1] + Stack[-6]);
0xee3: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xee4: Pop(2)
0xee5: Push(Stack[-3])
0xee6: IF (Stack[-1] == 0) GOTO 0xf2c; Pop(1)

0xee7: PushEmpty()
0xee8: Call2 0x136c

0xee9: Pop(0)
0xeea: Push("all")
0xeeb: Push("attack_middle")
0xeec: Pop(1); Push(Stack[-1] + Stack[-6]);
0xeed: @ PlayAnimation(Stack[-2], Stack[-1])
0xeee: Pop(2)
0xeef: @ WaitForAnimEnd()
0xef0: Pop(0)
0xef1: PushEmpty()
0xef2: Call2 0x100a

0xef3: Pop(0)
0xef4: PushEmpty(bool, object)
0xef5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef6: Call2 0x11c5

0xef7: Pop(1)
0xef8: Pop(1); Push((bool) Stack[-1] == 0)
0xef9: IF (Stack[-1] == 0) GOTO 0xefe; Pop(1)

0xefa: @ StopAsync()
0xefb: Pop(0)
0xefc: Stack[-10] = (bool) 0
0xefd: Return(); Pop(8)

0xefe: PushEmpty(float, int)
0xeff: Stack[-2] = Stack[-11]
0xf00: Stack[-1] = Stack[-6]
0xf01: Call2 0xe90

0xf02: Pop(2)
0xf03: Stack[-2] = (int) 1
0xf04: Push("attack_middle")
0xf05: Pop(1); Push(Stack[-1] + Stack[-5]);
0xf06: Push("_")
0xf07: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf08: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0xf09: Push("all")
0xf0a: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0xf0b: Pop(1)
0xf0c: Pop(0); Push((bool) Stack[-3] == 0)
0xf0d: IF (Stack[-1] == 0) GOTO 0xf0f; Pop(1)

0xf0e: GOTO 0xf2c

0xf0f: PushEmpty()
0xf10: Call2 0x136c

0xf11: Pop(0)
0xf12: Push("all")
0xf13: @ PlayAnimation(Stack[-1], Stack[-2])
0xf14: Pop(1)
0xf15: @ WaitForAnimEnd()
0xf16: Pop(0)
0xf17: PushEmpty()
0xf18: Call2 0x100a

0xf19: Pop(0)
0xf1a: PushEmpty(bool, object)
0xf1b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1c: Call2 0x11c5

0xf1d: Pop(1)
0xf1e: Pop(1); Push((bool) Stack[-1] == 0)
0xf1f: IF (Stack[-1] == 0) GOTO 0xf24; Pop(1)

0xf20: @ StopAsync()
0xf21: Pop(0)
0xf22: Stack[-10] = (bool) 0
0xf23: Return(); Pop(8)

0xf24: PushEmpty(float, int)
0xf25: Stack[-2] = Stack[-11]
0xf26: Stack[-1] = Stack[-6]
0xf27: Call2 0xe90

0xf28: Pop(2)
0xf29: Push((int) 1)
0xf2a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xf2b: GOTO 0xf04

0xf2c: Push((bool) 0)
0xf2d: @ SetAttackState(Stack[-1])
0xf2e: Pop(1)
0xf2f: Push("all")
0xf30: Push("attack_end")
0xf31: Pop(1); Push(Stack[-1] + Stack[-6]);
0xf32: @ PlayAnimation(Stack[-2], Stack[-1])
0xf33: Pop(2)
0xf34: PushEmpty(bool)
0xf35: Call2 0x1018

0xf36: Pop(0)
0xf37: IF (Stack[-1] == 0) GOTO 0xf3e; Pop(1)

0xf38: PushEmpty(bool, float)
0xf39: Stack[-1] = (float) 0.75
0xf3a: Call2 0xf40

0xf3b: Pop(2)
0xf3c: @ StopAsync()
0xf3d: Pop(0)
0xf3e: Stack[-10] = (bool) 1
0xf3f: Return(); Pop(8)

0xf40: PushEmpty(float, bool, float, bool)
0xf41: @ rand(Stack[-2])
0xf42: Pop(0)
0xf43: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0xf44: IF (Stack[-1] == 0) GOTO 0xf54; Pop(1)

0xf45: @ IsAnimationPlaying(Stack[-1])
0xf46: Pop(0)
0xf47: Pop(0); Push((bool) Stack[-1] == 0)
0xf48: IF (Stack[-1] == 0) GOTO 0xf4a; Pop(1)

0xf49: GOTO 0xf53

0xf4a: PushEmpty(bool)
0xf4b: Call2 0xfa2

0xf4c: Pop(0)
0xf4d: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf4e: Stack[-6] = (bool) 1
0xf4f: Return(); Pop(4)

0xf50: @ sync()
0xf51: Pop(0)
0xf52: GOTO 0xf45

0xf53: GOTO 0xf59

0xf54: @ WaitForAnimEnd()
0xf55: Pop(0)
0xf56: PushEmpty()
0xf57: Call2 0x100a

0xf58: Pop(0)
0xf59: Stack[-6] = (bool) 0
0xf5a: Return(); Pop(4)

0xf5b: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0xf5c: @ IsAnimationPlaying(Stack[-5])
0xf5d: Pop(0)
0xf5e: Pop(0); Push((bool) Stack[-5] == 0)
0xf5f: IF (Stack[-1] == 0) GOTO 0xf61; Pop(1)

0xf60: GOTO 0xf81

0xf61: PushEmpty(bool)
0xf62: Call2 0xfa2

0xf63: Pop(0)
0xf64: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf65: Stack[-12] = (bool) 1
0xf66: Return(); Pop(10)

0xf67: PushEmpty(bool, object)
0xf68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf69: Call2 0x11c5

0xf6a: Pop(1)
0xf6b: Pop(1); Push((bool) Stack[-1] == 0)
0xf6c: IF (Stack[-1] == 0) GOTO 0xf6f; Pop(1)

0xf6d: Stack[-12] = (bool) 0
0xf6e: Return(); Pop(10)

0xf6f: @@ GetPFPosition(Stack[-4])
0xf70: Pop(0)
0xf71: @ GetPFPosition(Stack[-3])
0xf72: Pop(0)
0xf73: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xf74: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xf75: Pop(0); Push(Stack[-11] * Stack[-11]);
0xf76: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf77: IF (Stack[-1] == 0) GOTO 0xf7e; Pop(1)

0xf78: PushEmpty(bool, float)
0xf79: Stack[-1] = Stack[-13]
0xf7a: Call2 0xeb7

0xf7b: Pop(2)
0xf7c: Stack[-12] = (bool) 1
0xf7d: Return(); Pop(10)

0xf7e: @ sync()
0xf7f: Pop(0)
0xf80: GOTO 0xf5c

0xf81: PushEmpty()
0xf82: Call2 0x100a

0xf83: Pop(0)
0xf84: Stack[-12] = (bool) 0
0xf85: Return(); Pop(10)

0xf86: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0xf87: PushEmpty(bool, object)
0xf88: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf89: Call2 0x11c5

0xf8a: Pop(1)
0xf8b: Pop(1); Push((bool) Stack[-1] == 0)
0xf8c: IF (Stack[-1] == 0) GOTO 0xf8f; Pop(1)

0xf8d: Stack[-11] = (bool) 0
0xf8e: Return(); Pop(10)

0xf8f: PushEmpty(bool)
0xf90: Call2 0xfdf

0xf91: Pop(0)
0xf92: IF (Stack[-1] == 0) GOTO 0xfa0; Pop(1)

0xf93: @@ GetPFPosition(Stack[-5])
0xf94: Pop(0)
0xf95: @ GetPFPosition(Stack[-4])
0xf96: Pop(0)
0xf97: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xf98: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xf99: @@ GetAttackDistance(Stack[-1])
0xf9a: Pop(0)
0xf9b: Push((int) 50)
0xf9c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xf9d: Pop(0); Push(Stack[-1] * Stack[-1]);
0xf9e: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0xf9f: Return(); Pop(10)

0xfa0: Stack[-11] = (bool) 0
0xfa1: Return(); Pop(10)

0xfa2: PushEmpty(bool)
0xfa3: Stack[-1] = (bool) 0
0xfa4: PushEmpty(bool)
0xfa5: Call2 0xf86

0xfa6: Pop(0)
0xfa7: IF (Stack[-1] == 0) GOTO 0xfad; Pop(1)

0xfa8: PushEmpty(bool)
0xfa9: Call2 0xfb2

0xfaa: Pop(0)
0xfab: IF (Stack[-1] == 0) GOTO 0xfad; Pop(1)

0xfac: Stack[-1] = (bool) 1
0xfad: IF (Stack[-1] == 0) GOTO 0xfb0; Pop(1)

0xfae: Stack[-1] = (bool) 1
0xfaf: Return(); Pop(0)

0xfb0: Stack[-1] = (bool) 0
0xfb1: Return(); Pop(0)

0xfb2: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0xfb3: @ GetScene(Stack[-5])
0xfb4: Pop(0)
0xfb5: Stack[-4] = (bool) 0
0xfb6: PushEmpty(cvector, object)
0xfb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb8: Call2 0x1133

0xfb9: Pop(1)
0xfba: Pop(1); Push(( -Stack[-1])
0xfbb: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0xfbc: Pop(1)
0xfbd: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0xfbe: IF (Stack[-1] == 0) GOTO 0xfc0; Pop(1)

0xfbf: GOTO 0xfdc

0xfc0: @ Face(Stack[-0])
0xfc1: Pop(0)
0xfc2: Push("all")
0xfc3: Push("bjump")
0xfc4: @ PlayAnimation(Stack[-2], Stack[-1])
0xfc5: Pop(2)
0xfc6: @@ GetPFPosition(Stack[-2])
0xfc7: Pop(0)
0xfc8: @ GetPFPosition(Stack[-1])
0xfc9: Pop(0)
0xfca: @ WaitForAnimEnd()
0xfcb: Pop(0)
0xfcc: PushEmpty()
0xfcd: Call2 0x100a

0xfce: Pop(0)
0xfcf: @ StopAsync()
0xfd0: Pop(0)
0xfd1: Push(CVector(0.0, 0.0, 0.0))
0xfd2: @ SetSpeed(Stack[-1])
0xfd3: Pop(1)
0xfd4: Stack[-4] = (bool) 1
0xfd5: PushEmpty(bool)
0xfd6: Call2 0xf86

0xfd7: Pop(0)
0xfd8: Pop(1); Push((bool) Stack[-1] == 0)
0xfd9: IF (Stack[-1] == 0) GOTO 0xfdb; Pop(1)

0xfda: GOTO 0xfdc

0xfdb: GOTO 0xfb6

0xfdc: Stack[-11] = Stack[-4]
0xfdd: Return(); Pop(10)

0xfde: Stack[-5] = 0
0xfdf: PushEmpty(bool, bool)
0xfe0: Push("IsAttacking")
0xfe1: Push((int) 1)
0xfe2: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0xfe3: IF (Stack[-1] == 0) GOTO 0xfe8; Pop(1)

0xfe4: @@ IsAttacking(Stack[-1])
0xfe5: Pop(0)
0xfe6: Stack[-3] = Stack[-1]
0xfe7: Return(); Pop(2)

0xfe8: Stack[-3] = (bool) 0
0xfe9: Return(); Pop(2)

0xfea: PushEmpty(float, int, float, int)
0xfeb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xfec: IF (Stack[-1] == 0) GOTO 0xfee; Pop(1)

0xfed: Return(); Pop(4)

0xfee: Push( Stack[5 + Tasks[-1].StackPointer] )
0xfef: IF (Stack[-1] == 0) GOTO 0xff6; Pop(1)

0xff0: Push((int) -1)
0xff1: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xff2: Push((int) 0)
0xff3: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0xff4: IF (Stack[-1] == 0) GOTO 0xff6; Pop(1)

0xff5: Return(); Pop(4)

0xff6: @ rand(Stack[-2])
0xff7: Pop(0)
0xff8: PushEmpty(float)
0xff9: Call2 0x101c

0xffa: Pop(0)
0xffb: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xffc: IF (Stack[-1] == 0) GOTO 0x1009; Pop(1)

0xffd: @ irand(Stack[-1], Stack[-2])
0xffe: Pop(0)
0xfff: Push((int) 1)
0x1000: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1001: Push("attack")
0x1002: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1003: @ Speak(Stack[-1])
0x1004: Pop(1)
0x1005: PushEmpty(int)
0x1006: Call2 0x101a

0x1007: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x1008: Pop(1)
0x1009: Return(); Pop(4)

0x100a: PushEmpty(object)
0x100b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x100c: Call2 0x1363

0x100d: Pop(1)
0x100e: Return(); Pop(0)

0x100f: Stack[-1] = (int) 0
0x1010: Return(); Pop(0)

0x1011: PushEmpty(string)
0x1012: Stack[-1] = "attack_stay"
0x1013: Call2 0x12f3

0x1014: Pop(1)
0x1015: Return(); Pop(0)

0x1016: PushEmpty()
0x1017: Return(); Pop(0)

0x1018: Stack[-1] = (bool) 1
0x1019: Return(); Pop(0)

0x101a: Stack[-1] = (int) 1
0x101b: Return(); Pop(0)

0x101c: Stack[-1] = (float) 0.5
0x101d: Return(); Pop(0)

0x101e: PushEmpty()
0x101f: Call2 0x1064

0x1020: Pop(0)
0x1021: PushEmpty()
0x1022: Call2 0x1776

0x1023: Pop(0)
0x1024: Return(); Pop(0)

0x1025: PushEmpty(bool, bool, bool, bool)
0x1026: PushEmpty(object)
0x1027: Stack[-1] = Stack[-10]
0x1028: Call2 0x1363

0x1029: Pop(1)
0x102a: Push((int) 1)
0x102b: Push((int) 5)
0x102c: @ SetTimer(Stack[-2], Stack[-1])
0x102d: Pop(2)
0x102e: @ CanSee(Stack[-2], Stack[-9])
0x102f: Pop(0)
0x1030: Push(Stack[-2])
0x1031: IF (Stack[-1] == 0) GOTO 0x1038; Pop(1)

0x1032: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1033: PushEmpty(object)
0x1034: Stack[-1] = Stack[-10]
0x1035: Call2 0x12e1

0x1036: Pop(1)
0x1037: GOTO 0x1039

0x1038: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1039: PushEmpty(bool, object)
0x103a: Stack[-1] = Stack[-11]
0x103b: Call2 0x1142

0x103c: Pop(1)
0x103d: IF (Stack[-1] == 0) GOTO 0x1043; Pop(1)

0x103e: PushEmpty(object)
0x103f: Call2 0x131c

0x1040: Pop(0)
0x1041: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x1042: Pop(1)
0x1043: PushEmpty(bool, object, float, float, bool, bool)
0x1044: Stack[-5] = Stack[-15]
0x1045: Stack[-4] = Stack[-14]
0x1046: Stack[-3] = Stack[-13]
0x1047: Stack[-2] = Stack[-12]
0x1048: Stack[-1] = Stack[-11]
0x1049: Call2 0x108e

0x104a: Stack[-7] = Stack[-6]
0x104b: Pop(6)
0x104c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x104d: IF (Stack[-1] == 0) GOTO 0x1051; Pop(1)

0x104e: Push("head")
0x104f: @ UnlookAsync(Stack[-1])
0x1050: Pop(1)
0x1051: Push((int) 1)
0x1052: @ KillTimer(Stack[-1])
0x1053: Pop(1)
0x1054: Stack[-10] = Stack[-1]
0x1055: Return(); Pop(4)

0x1056: PushEmpty()
0x1057: Push((int) 1)
0x1058: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1059: IF (Stack[-1] == 0) GOTO 0x105f; Pop(1)

0x105a: PushEmpty(object)
0x105b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x105c: Call2 0x1363

0x105d: Pop(1)
0x105e: GOTO 0x1063

0x105f: PushEmpty(int)
0x1060: Stack[-1] = Stack[-2]
0x1061: Call2 0x10f4

0x1062: Pop(1)
0x1063: Return(); Pop(0)

0x1064: Push((int) 1)
0x1065: @ KillTimer(Stack[-1])
0x1066: Pop(1)
0x1067: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1068: IF (Stack[-1] == 0) GOTO 0x106d; Pop(1)

0x1069: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x106a: Push("head")
0x106b: @ UnlookAsync(Stack[-1])
0x106c: Pop(1)
0x106d: PushEmpty()
0x106e: Call2 0x110a

0x106f: Pop(0)
0x1070: Return(); Pop(0)

0x1071: PushEmpty()
0x1072: PushEmpty(bool)
0x1073: Stack[-1] = (bool) 0
0x1074: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x1075: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1076: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1077: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1078: Stack[-1] = (bool) 1
0x1079: IF (Stack[-1] == 0) GOTO 0x107f; Pop(1)

0x107a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x107b: PushEmpty(object)
0x107c: Stack[-1] = Stack[-2]
0x107d: Call2 0x12e1

0x107e: Pop(1)
0x107f: Return(); Pop(0)

0x1080: PushEmpty()
0x1081: PushEmpty(bool)
0x1082: Stack[-1] = (bool) 0
0x1083: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x1084: IF (Stack[-1] == 0) GOTO 0x1088; Pop(1)

0x1085: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1086: IF (Stack[-1] == 0) GOTO 0x1088; Pop(1)

0x1087: Stack[-1] = (bool) 1
0x1088: IF (Stack[-1] == 0) GOTO 0x108d; Pop(1)

0x1089: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x108a: Push("head")
0x108b: @ UnlookAsync(Stack[-1])
0x108c: Pop(1)
0x108d: Return(); Pop(0)

0x108e: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x108f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1090: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x1091: Stack[-7] = Stack[-17]
0x1092: PushEmpty(bool, object)
0x1093: Stack[-1] = Stack[-23]
0x1094: Call2 0x111a

0x1095: Pop(1)
0x1096: Pop(1); Push((bool) Stack[-1] == 0)
0x1097: IF (Stack[-1] == 0) GOTO 0x109a; Pop(1)

0x1098: Stack[-22] = (bool) 0
0x1099: Return(); Pop(16)

0x109a: @@ GetPosition(Stack[-5])
0x109b: Pop(0)
0x109c: @ GetPosition(Stack[-4])
0x109d: Pop(0)
0x109e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x109f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x10a0: PushEmpty(bool)
0x10a1: Stack[-1] = (bool) 0
0x10a2: Push((int) 0)
0x10a3: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x10a4: IF (Stack[-1] == 0) GOTO 0x10a9; Pop(1)

0x10a5: Pop(0); Push(Stack[-20] * Stack[-20]);
0x10a6: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x10a7: IF (Stack[-1] == 0) GOTO 0x10a9; Pop(1)

0x10a8: Stack[-1] = (bool) 1
0x10a9: IF (Stack[-1] == 0) GOTO 0x10ae; Pop(1)

0x10aa: @ Stop()
0x10ab: Pop(0)
0x10ac: Stack[-22] = (bool) 0
0x10ad: Return(); Pop(16)

0x10ae: Pop(0); Push(Stack[-20] * Stack[-20]);
0x10af: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x10b0: IF (Stack[-1] == 0) GOTO 0x10ec; Pop(1)

0x10b1: @@ GetPFPosition(Stack[-5])
0x10b2: Pop(0)
0x10b3: @ FindPathTo(Stack[-1], Stack[-5])
0x10b4: Pop(0)
0x10b5: Pop(0); Push(( Stack[-1] != 0 )
0x10b6: IF (Stack[-1] == 0) GOTO 0x10b9; Pop(1)

0x10b7: Stack[-6] = Stack[-1]
0x10b8: Stack[-1] = 0
0x10b9: Pop(0); Push(( Stack[-6] != 0 )
0x10ba: IF (Stack[-1] == 0) GOTO 0x10da; Pop(1)

0x10bb: Push(Stack[-7])
0x10bc: IF (Stack[-1] == 0) GOTO 0x10c3; Pop(1)

0x10bd: Stack[-7] = (bool) 0
0x10be: @ RotatePath(Stack[-6], Stack[-8])
0x10bf: Pop(0)
0x10c0: Pop(0); Push((bool) Stack[-8] == 0)
0x10c1: IF (Stack[-1] == 0) GOTO 0x10c3; Pop(1)

0x10c2: GOTO 0x10f2

0x10c3: Push((int) 0)
0x10c4: Push((float)0.3)
0x10c5: @ SetTimer(Stack[-2], Stack[-1])
0x10c6: Pop(2)
0x10c7: PushEmpty(string)
0x10c8: Call2 0x1121

0x10c9: Pop(0)
0x10ca: PushEmpty(string)
0x10cb: Call2 0x1123

0x10cc: Pop(0)
0x10cd: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x10ce: Pop(2)
0x10cf: Pop(0); Push((bool) Stack[-8] == 0)
0x10d0: IF (Stack[-1] == 0) GOTO 0x10d8; Pop(1)

0x10d1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x10d2: IF (Stack[-1] == 0) GOTO 0x10d6; Pop(1)

0x10d3: Stack[-6] = 0
0x10d4: GOTO 0x10f2

0x10d5: GOTO 0x10d7

0x10d6: GOTO 0x10f1

0x10d7: GOTO 0x10d9

0x10d8: Stack[-6] = 0
0x10d9: GOTO 0x10ea

0x10da: Push((int) 0)
0x10db: @ KillTimer(Stack[-1])
0x10dc: Pop(1)
0x10dd: Push((float)0.5)
0x10de: @ Sleep(Stack[-1], Stack[-9])
0x10df: Pop(1)
0x10e0: Pop(0); Push((bool) Stack[-8] == 0)
0x10e1: IF (Stack[-1] == 0) GOTO 0x10e6; Pop(1)

0x10e2: Push( Stack[0 + Tasks[-1].StackPointer] )
0x10e3: IF (Stack[-1] == 0) GOTO 0x10e6; Pop(1)

0x10e4: Stack[-6] = 0
0x10e5: GOTO 0x10f2

0x10e6: Push((int) 0)
0x10e7: Push((float)0.3)
0x10e8: @ SetTimer(Stack[-2], Stack[-1])
0x10e9: Pop(2)
0x10ea: Stack[-1] = 0
0x10eb: GOTO 0x10f0

0x10ec: Push((int) 0)
0x10ed: @ KillTimer(Stack[-1])
0x10ee: Pop(1)
0x10ef: GOTO 0x10f2

0x10f0: Stack[-6] = 0
0x10f1: GOTO 0x1092

0x10f2: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x10f3: Return(); Pop(16)

0x10f4: PushEmpty()
0x10f5: Push((int) 0)
0x10f6: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x10f7: IF (Stack[-1] == 0) GOTO 0x10f9; Pop(1)

0x10f8: Return(); Pop(0)

0x10f9: PushEmpty(bool, object)
0x10fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10fb: Call2 0x111a

0x10fc: Pop(1)
0x10fd: Pop(1); Push((bool) Stack[-1] == 0)
0x10fe: IF (Stack[-1] == 0) GOTO 0x1100; Pop(1)

0x10ff: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1100: Push((int) 0)
0x1101: @ KillTimer(Stack[-1])
0x1102: Pop(1)
0x1103: @ Stop()
0x1104: Pop(0)
0x1105: Return(); Pop(0)

0x1106: PushEmpty()
0x1107: @ RequestClearPath(Stack[-1])
0x1108: Pop(0)
0x1109: Return(); Pop(0)

0x110a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x110b: Push((int) 0)
0x110c: @ KillTimer(Stack[-1])
0x110d: Pop(1)
0x110e: @ Stop()
0x110f: Pop(0)
0x1110: Return(); Pop(0)

0x1111: PushEmpty()
0x1112: PushEmpty()
0x1113: Call2 0x1064

0x1114: Pop(0)
0x1115: PushEmpty(object)
0x1116: Stack[-1] = Stack[-2]
0x1117: Call2 0x15f3

0x1118: Pop(1)
0x1119: Return(); Pop(0)

0x111a: PushEmpty()
0x111b: PushEmpty(bool, object)
0x111c: Stack[-1] = Stack[-3]
0x111d: Call2 0x11c5

0x111e: Stack[-4] = Stack[-2]
0x111f: Pop(2)
0x1120: Return(); Pop(0)

0x1121: Stack[-1] = "walk"
0x1122: Return(); Pop(0)

0x1123: Stack[-1] = "run"
0x1124: Return(); Pop(0)

0x1125: PushEmpty()
0x1126: Push((int) 2)
0x1127: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1128: IF (Stack[-1] == 0) GOTO 0x112c; Pop(1)

0x1129: Stack[-2] = "fire"
0x112a: Return(); Pop(0)

0x112b: GOTO 0x1131

0x112c: Push((int) 1)
0x112d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x112e: IF (Stack[-1] == 0) GOTO 0x1131; Pop(1)

0x112f: Stack[-2] = "bullet"
0x1130: Return(); Pop(0)

0x1131: Stack[-2] = "phys"
0x1132: Return(); Pop(0)

0x1133: PushEmpty(cvector, cvector, cvector, cvector)
0x1134: @ GetPosition(Stack[-2])
0x1135: Pop(0)
0x1136: @@ GetPosition(Stack[-1])
0x1137: Pop(0)
0x1138: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x1139: Return(); Pop(4)

0x113a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x113b: @ GetPosition(Stack[-3])
0x113c: Pop(0)
0x113d: @@ GetPosition(Stack[-2])
0x113e: Pop(0)
0x113f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1140: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1141: Return(); Pop(6)

0x1142: PushEmpty(bool, bool)
0x1143: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1144: Pop(0)
0x1145: Stack[-4] = Stack[-1]
0x1146: Return(); Pop(2)

0x1147: PushEmpty(bool, bool)
0x1148: Push("HasProperty")
0x1149: Push((int) 2)
0x114a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x114b: Pop(1); Push((bool) Stack[-1] == 0)
0x114c: IF (Stack[-1] == 0) GOTO 0x114f; Pop(1)

0x114d: Stack[-5] = (bool) 0
0x114e: Return(); Pop(2)

0x114f: @@ HasProperty(Stack[-3], Stack[-1])
0x1150: Pop(0)
0x1151: Stack[-5] = Stack[-1]
0x1152: Return(); Pop(2)

0x1153: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x1154: PushEmpty(bool, object, string)
0x1155: Stack[-2] = Stack[-18]
0x1156: Stack[-1] = "health"
0x1157: Call2 0x1147

0x1158: Pop(2)
0x1159: Pop(1); Push((bool) Stack[-1] == 0)
0x115a: IF (Stack[-1] == 0) GOTO 0x115d; Pop(1)

0x115b: Stack[-16] = (float) 0.0
0x115c: Return(); Pop(12)

0x115d: PushEmpty(bool, object, string)
0x115e: Stack[-2] = Stack[-18]
0x115f: Stack[-1] = "armor"
0x1160: Call2 0x1147

0x1161: Pop(2)
0x1162: Pop(1); Push((bool) Stack[-1] == 0)
0x1163: IF (Stack[-1] == 0) GOTO 0x1166; Pop(1)

0x1164: Stack[-6] = (int) 0
0x1165: GOTO 0x1169

0x1166: Push("armor")
0x1167: @@ GetProperty(Stack[-1], Stack[-7])
0x1168: Pop(1)
0x1169: Push("armor_")
0x116a: PushEmpty(string, int)
0x116b: Stack[-1] = Stack[-16]
0x116c: Call2 0x1125

0x116d: Pop(1)
0x116e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x116f: PushEmpty(bool, object, string)
0x1170: Stack[-2] = Stack[-18]
0x1171: Stack[-1] = Stack[-8]
0x1172: Call2 0x1147

0x1173: Pop(2)
0x1174: Pop(1); Push((bool) Stack[-1] == 0)
0x1175: IF (Stack[-1] == 0) GOTO 0x1178; Pop(1)

0x1176: Stack[-4] = (int) 0
0x1177: GOTO 0x117a

0x1178: @@ GetProperty(Stack[-5], Stack[-4])
0x1179: Pop(0)
0x117a: PushEmpty(float, float, float)
0x117b: Pop(0); Push(Stack[-9] + Stack[-7]);
0x117c: Push((float)100.0)
0x117d: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x117e: Stack[-1] = (int) 1
0x117f: Call2 0x132c

0x1180: Stack[-6] = Stack[-3]
0x1181: Pop(3)
0x1182: Push("health")
0x1183: @@ GetProperty(Stack[-1], Stack[-3])
0x1184: Pop(1)
0x1185: Push((int) 1)
0x1186: Pop(1); Push(Stack[-1] - Stack[-4]);
0x1187: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x1188: Push("health")
0x1189: PushEmpty(float, float, float, float)
0x118a: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x118b: Stack[-2] = (int) 0
0x118c: Stack[-1] = (int) 1
0x118d: Call2 0x1333

0x118e: Pop(3)
0x118f: @@ SetProperty(Stack[-2], Stack[-1])
0x1190: Pop(2)
0x1191: PushEmpty(bool, object)
0x1192: Stack[-1] = Stack[-17]
0x1193: Call2 0x1142

0x1194: Pop(1)
0x1195: IF (Stack[-1] == 0) GOTO 0x119a; Pop(1)

0x1196: PushEmpty(float)
0x1197: Stack[-1] = -Stack[-2]; Pop(0);
0x1198: Call2 0x1349

0x1199: Pop(1)
0x119a: Stack[-16] = Stack[-1]
0x119b: Return(); Pop(12)

0x119c: PushEmpty(bool, bool)
0x119d: @@ IsDead(Stack[-1])
0x119e: Pop(0)
0x119f: Stack[-4] = Stack[-1]
0x11a0: Return(); Pop(2)

0x11a1: PushEmpty(object, object, object, object)
0x11a2: Pop(0); Push((bool) Stack[-5] == 0)
0x11a3: IF (Stack[-1] == 0) GOTO 0x11a6; Pop(1)

0x11a4: Stack[-6] = (bool) 0
0x11a5: Return(); Pop(4)

0x11a6: PushEmpty(bool)
0x11a7: Stack[-1] = (bool) 0
0x11a8: Push("IsDead")
0x11a9: Push((int) 1)
0x11aa: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x11ab: IF (Stack[-1] == 0) GOTO 0x11b2; Pop(1)

0x11ac: PushEmpty(bool, object)
0x11ad: Stack[-1] = Stack[-8]
0x11ae: Call2 0x119c

0x11af: Pop(1)
0x11b0: IF (Stack[-1] == 0) GOTO 0x11b2; Pop(1)

0x11b1: Stack[-1] = (bool) 1
0x11b2: IF (Stack[-1] == 0) GOTO 0x11b5; Pop(1)

0x11b3: Stack[-6] = (bool) 0
0x11b4: Return(); Pop(4)

0x11b5: @ GetScene(Stack[-2])
0x11b6: Pop(0)
0x11b7: Pop(0); Push((bool) Stack[-2] == 0)
0x11b8: IF (Stack[-1] == 0) GOTO 0x11bb; Pop(1)

0x11b9: Stack[-6] = (bool) 0
0x11ba: Return(); Pop(4)

0x11bb: @@ GetScene(Stack[-1])
0x11bc: Pop(0)
0x11bd: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x11be: IF (Stack[-1] == 0) GOTO 0x11c1; Pop(1)

0x11bf: Stack[-6] = (bool) 0
0x11c0: Return(); Pop(4)

0x11c1: Stack[-6] = (bool) 1
0x11c2: Return(); Pop(4)

0x11c3: Stack[-1] = 0
0x11c4: Stack[-2] = 0
0x11c5: PushEmpty(int, int)
0x11c6: PushEmpty(bool, object)
0x11c7: Stack[-1] = Stack[-5]
0x11c8: Call2 0x11a1

0x11c9: Pop(1)
0x11ca: Pop(1); Push((bool) Stack[-1] == 0)
0x11cb: IF (Stack[-1] == 0) GOTO 0x11ce; Pop(1)

0x11cc: Stack[-4] = (bool) 0
0x11cd: Return(); Pop(2)

0x11ce: PushEmpty(bool, object, string)
0x11cf: Stack[-2] = Stack[-6]
0x11d0: Stack[-1] = "noaccess"
0x11d1: Call2 0x1147

0x11d2: Pop(2)
0x11d3: Pop(1); Push((bool) Stack[-1] == 0)
0x11d4: IF (Stack[-1] == 0) GOTO 0x11d7; Pop(1)

0x11d5: Stack[-4] = (bool) 1
0x11d6: Return(); Pop(2)

0x11d7: Push("noaccess")
0x11d8: @@ GetProperty(Stack[-1], Stack[-2])
0x11d9: Pop(1)
0x11da: Push((int) 0)
0x11db: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x11dc: Return(); Pop(2)

0x11dd: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x11de: Pop(0); Push((bool) Stack[-15] == 0)
0x11df: IF (Stack[-1] == 0) GOTO 0x11e1; Pop(1)

0x11e0: Return(); Pop(14)

0x11e1: @ IsDead(Stack[-7])
0x11e2: Pop(0)
0x11e3: Push(Stack[-7])
0x11e4: IF (Stack[-1] == 0) GOTO 0x11e6; Pop(1)

0x11e5: Return(); Pop(14)

0x11e6: @ GetSecondaryAnimationType(Stack[-6])
0x11e7: Pop(0)
0x11e8: Push((int) 0)
0x11e9: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x11ea: IF (Stack[-1] == 0) GOTO 0x11ec; Pop(1)

0x11eb: Return(); Pop(14)

0x11ec: @@ GetPosition(Stack[-5])
0x11ed: Pop(0)
0x11ee: @ GetPosition(Stack[-4])
0x11ef: Pop(0)
0x11f0: @ GetDirection(Stack[-3])
0x11f1: Pop(0)
0x11f2: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x11f3: Push(CvectorIndex(Stack[-2], 0))
0x11f4: Push(CvectorIndex(Stack[-4], 0))
0x11f5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11f6: Push(CvectorIndex(Stack[-3], 2))
0x11f7: Push(CvectorIndex(Stack[-5], 2))
0x11f8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11f9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11fa: Push((int) 0)
0x11fb: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x11fc: IF (Stack[-1] == 0) GOTO 0x11ff; Pop(1)

0x11fd: Stack[-1] = "fhit"
0x11fe: GOTO 0x1200

0x11ff: Stack[-1] = "bhit"
0x1200: Push("hit_react")
0x1201: Push("1")
0x1202: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1203: Push("2")
0x1204: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1205: Push((int) -10)
0x1206: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1207: Pop(4)
0x1208: Return(); Pop(14)

0x1209: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x120a: PushEmpty(bool)
0x120b: Stack[-1] = (bool) 0
0x120c: PushEmpty(bool)
0x120d: Stack[-1] = (bool) 0
0x120e: Push(Stack[-23])
0x120f: IF (Stack[-1] == 0) GOTO 0x1214; Pop(1)

0x1210: Push((int) 4)
0x1211: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x1212: IF (Stack[-1] == 0) GOTO 0x1214; Pop(1)

0x1213: Stack[-1] = (bool) 1
0x1214: IF (Stack[-1] == 0) GOTO 0x1219; Pop(1)

0x1215: Push((int) 5)
0x1216: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x1217: IF (Stack[-1] == 0) GOTO 0x1219; Pop(1)

0x1218: Stack[-1] = (bool) 1
0x1219: IF (Stack[-1] == 0) GOTO 0x1248; Pop(1)

0x121a: PushEmpty(cvector, cvector)
0x121b: PushEmpty(cvector, object)
0x121c: Stack[-1] = Stack[-25]
0x121d: Call2 0x1133

0x121e: Stack[-3] = Stack[-2]
0x121f: Pop(2)
0x1220: Call2 0x1322

0x1221: Stack[-11] = Stack[-2]
0x1222: Pop(2)
0x1223: @ CreateVectorVector(Stack[-8])
0x1224: Pop(0)
0x1225: Stack[-7] = (int) 1
0x1226: Push("hit")
0x1227: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1228: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x1229: Pop(1)
0x122a: Pop(0); Push((bool) Stack[-6] == 0)
0x122b: IF (Stack[-1] == 0) GOTO 0x122d; Pop(1)

0x122c: GOTO 0x1236

0x122d: Pop(0); Push(Stack[-4] | Stack[-9]);
0x122e: Push((float)0.70711)
0x122f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1230: IF (Stack[-1] == 0) GOTO 0x1233; Pop(1)

0x1231: @@ add(Stack[-5])
0x1232: Pop(0)
0x1233: Push((int) 1)
0x1234: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x1235: GOTO 0x1226

0x1236: @@ size(Stack[-3])
0x1237: Pop(0)
0x1238: Push(Stack[-3])
0x1239: IF (Stack[-1] == 0) GOTO 0x1247; Pop(1)

0x123a: @ irand(Stack[-2], Stack[-3])
0x123b: Pop(0)
0x123c: @@ get(Stack[-1], Stack[-2])
0x123d: Pop(0)
0x123e: PushEmpty(object, int, float, cvector, cvector)
0x123f: Stack[-5] = Stack[-26]
0x1240: Stack[-4] = Stack[-25]
0x1241: Stack[-3] = Stack[-24]
0x1242: Stack[-2] = Stack[-6]
0x1243: Stack[-1] = -Stack[-14]; Pop(0);
0x1244: Call2 0x124d

0x1245: Pop(5)
0x1246: Return(); Pop(18)

0x1247: Stack[-8] = 0
0x1248: PushEmpty(object)
0x1249: Stack[-1] = Stack[-22]
0x124a: Call2 0x11dd

0x124b: Pop(1)
0x124c: Return(); Pop(18)

0x124d: PushEmpty(object, object, object, object)
0x124e: @ GetScene(Stack[-2])
0x124f: Pop(0)
0x1250: Push("scripted")
0x1251: Push("blood_dir.xml")
0x1252: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x1253: Pop(2)
0x1254: PushEmpty(object)
0x1255: Stack[-1] = Stack[-10]
0x1256: Call2 0x11dd

0x1257: Pop(1)
0x1258: Return(); Pop(4)

0x1259: Stack[-1] = 0
0x125a: Stack[-2] = 0
0x125b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x125c: @@ GetPosition(Stack[-3])
0x125d: Pop(0)
0x125e: @ GetPosition(Stack[-2])
0x125f: Pop(0)
0x1260: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x1261: Push(CvectorIndex(Stack[-1], 0))
0x1262: Push(CvectorIndex(Stack[-2], 2))
0x1263: @ RotateAsync(Stack[-2], Stack[-1])
0x1264: Pop(2)
0x1265: Return(); Pop(6)

0x1266: PushEmpty(bool, bool)
0x1267: @ IsLoaded(Stack[-1])
0x1268: Pop(0)
0x1269: Stack[-3] = Stack[-1]
0x126a: Return(); Pop(2)

0x126b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x126c: @@ GetPosition(Stack[-8])
0x126d: Pop(0)
0x126e: @@ GetEyesHeight(Stack[-9])
0x126f: Pop(0)
0x1270: Push(CvectorIndex(Stack[-8], 1))
0x1271: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1272: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1273: @ GetPosition(Stack[-7])
0x1274: Pop(0)
0x1275: @ GetEyesHeight(Stack[-9])
0x1276: Pop(0)
0x1277: Push(CvectorIndex(Stack[-7], 1))
0x1278: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1279: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x127a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x127b: Push(CvectorIndex(Stack[-6], 1))
0x127c: Stack[-1] = (int) 0
0x127d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x127e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x127f: Pop(1); Push(Sqrt(Stack[-1]))
0x1280: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1281: Stack[-5] = -Stack[-6]; Pop(0);
0x1282: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1283: PushEmpty(cvector, cvector)
0x1284: Push(CVector(0.0, 1.0, 0.0))
0x1285: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1286: Call2 0x1322

0x1287: Pop(1)
0x1288: Push((int) 25)
0x1289: Pop(2); Push(Stack[-2] * Stack[-1]);
0x128a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x128b: Push(CVector(0.0, 10.0, 0.0))
0x128c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x128d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x128e: @ IsOverrideActive(Stack[-2])
0x128f: Pop(0)
0x1290: Push(Stack[-2])
0x1291: IF (Stack[-1] == 0) GOTO 0x1294; Pop(1)

0x1292: Stack[-21] = (bool) 0
0x1293: Return(); Pop(18)

0x1294: @ StopWorld()
0x1295: Pop(0)
0x1296: Push((bool) 1)
0x1297: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1298: Pop(1)
0x1299: Push(CvectorIndex(Stack[-4], 0))
0x129a: Push(CvectorIndex(Stack[-5], 2))
0x129b: @ Rotate(Stack[-2], Stack[-1])
0x129c: Pop(2)
0x129d: PushEmpty(bool)
0x129e: Call2 0x183d

0x129f: Pop(0)
0x12a0: IF (Stack[-1] == 0) GOTO 0x12a2; Pop(1)

0x12a1: GOTO 0x12aa

0x12a2: Push("head")
0x12a3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x12a4: Pop(1)
0x12a5: Push(Stack[-1])
0x12a6: IF (Stack[-1] == 0) GOTO 0x12aa; Pop(1)

0x12a7: Push("head")
0x12a8: @ LookAsyncCamera(Stack[-1])
0x12a9: Pop(1)
0x12aa: @ CameraWaitForPlayFinish()
0x12ab: Pop(0)
0x12ac: @ ResumeWorld()
0x12ad: Pop(0)
0x12ae: Stack[-21] = (bool) 1
0x12af: Return(); Pop(18)

0x12b0: PushEmpty(bool, bool)
0x12b1: Push((bool) 1)
0x12b2: @ CameraSwitchToNormal(Stack[-1])
0x12b3: Pop(1)
0x12b4: PushEmpty(bool)
0x12b5: Call2 0x183d

0x12b6: Pop(0)
0x12b7: IF (Stack[-1] == 0) GOTO 0x12b9; Pop(1)

0x12b8: GOTO 0x12c1

0x12b9: Push("head")
0x12ba: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x12bb: Pop(1)
0x12bc: Push(Stack[-1])
0x12bd: IF (Stack[-1] == 0) GOTO 0x12c1; Pop(1)

0x12be: Push("head")
0x12bf: @ UnlookAsync(Stack[-1])
0x12c0: Pop(1)
0x12c1: Return(); Pop(2)

0x12c2: PushEmpty(bool, float, float, bool, float, float)
0x12c3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x12c4: Pop(0)
0x12c5: Push(Stack[-3])
0x12c6: IF (Stack[-1] == 0) GOTO 0x12cd; Pop(1)

0x12c7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x12c8: Pop(0)
0x12c9: Push((bool) 0)
0x12ca: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x12cb: Pop(1)
0x12cc: GOTO 0x12d1

0x12cd: Push("Can't find lsh animation : ")
0x12ce: Pop(1); Push(Stack[-1] + Stack[-8]);
0x12cf: @ Trace(Stack[-1])
0x12d0: Pop(1)
0x12d1: Return(); Pop(6)

0x12d2: PushEmpty(bool, float, float, bool, float, float)
0x12d3: @ lshHasAnimation(Stack[-3], Stack[-8])
0x12d4: Pop(0)
0x12d5: Push(Stack[-3])
0x12d6: IF (Stack[-1] == 0) GOTO 0x12dc; Pop(1)

0x12d7: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x12d8: Pop(0)
0x12d9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x12da: Pop(0)
0x12db: GOTO 0x12e0

0x12dc: Push("Can't find lsh animation : ")
0x12dd: Pop(1); Push(Stack[-1] + Stack[-9]);
0x12de: @ Trace(Stack[-1])
0x12df: Pop(1)
0x12e0: Return(); Pop(6)

0x12e1: PushEmpty(float, cvector, float, cvector)
0x12e2: @@ GetEyesHeight(Stack[-2])
0x12e3: Pop(0)
0x12e4: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x12e5: Push(CvectorIndex(Stack[-1], 1))
0x12e6: Stack[-1] = Stack[-3]
0x12e7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x12e8: Push("head")
0x12e9: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x12ea: Pop(1)
0x12eb: Return(); Pop(4)

0x12ec: PushEmpty(bool)
0x12ed: Call2 0x183d

0x12ee: Pop(0)
0x12ef: IF (Stack[-1] == 0) GOTO 0x12f2; Pop(1)

0x12f0: @ lshStopSpeech()
0x12f1: Pop(0)
0x12f2: Return(); Pop(0)

0x12f3: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x12f4: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x12f5: Pop(0)
0x12f6: Pop(0); Push((bool) Stack[-8] == 0)
0x12f7: IF (Stack[-1] == 0) GOTO 0x130c; Pop(1)

0x12f8: Stack[-7] = (int) 0
0x12f9: Push((int) 1)
0x12fa: Pop(1); Push(Stack[-8] + Stack[-1]);
0x12fb: Pop(1); Push(Stack[-18] + Stack[-1]);
0x12fc: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x12fd: Pop(1)
0x12fe: Pop(0); Push((bool) Stack[-6] == 0)
0x12ff: IF (Stack[-1] == 0) GOTO 0x1301; Pop(1)

0x1300: GOTO 0x1304

0x1301: Push((int) 1)
0x1302: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x1303: GOTO 0x12f9

0x1304: Pop(0); Push((bool) Stack[-7] == 0)
0x1305: IF (Stack[-1] == 0) GOTO 0x1307; Pop(1)

0x1306: Return(); Pop(16)

0x1307: @ irand(Stack[-5], Stack[-7])
0x1308: Pop(0)
0x1309: Push((int) 1)
0x130a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x130b: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x130c: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x130d: Pop(0)
0x130e: Push(Stack[-4])
0x130f: IF (Stack[-1] == 0) GOTO 0x131b; Pop(1)

0x1310: @ GetEyesHeight(Stack[-3])
0x1311: Pop(0)
0x1312: @ GetDirection(Stack[-2])
0x1313: Pop(0)
0x1314: Push((int) 50)
0x1315: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x1316: Push(CvectorIndex(Stack[-1], 1))
0x1317: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x1318: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1319: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x131a: Pop(0)
0x131b: Return(); Pop(16)

0x131c: PushEmpty(object, object)
0x131d: @ self(Stack[-1])
0x131e: Pop(0)
0x131f: Stack[-3] = Stack[-1]
0x1320: Return(); Pop(2)

0x1321: Stack[-1] = 0
0x1322: PushEmpty(float, float)
0x1323: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1324: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1325: Push((float)0.0)
0x1326: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1327: IF (Stack[-1] == 0) GOTO 0x132a; Pop(1)

0x1328: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1329: Return(); Pop(2)

0x132a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x132b: Return(); Pop(2)

0x132c: PushEmpty()
0x132d: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x132e: IF (Stack[-1] == 0) GOTO 0x1331; Pop(1)

0x132f: Stack[-3] = Stack[-2]
0x1330: GOTO 0x1332

0x1331: Stack[-3] = Stack[-1]
0x1332: Return(); Pop(0)

0x1333: PushEmpty()
0x1334: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1335: IF (Stack[-1] == 0) GOTO 0x1338; Pop(1)

0x1336: Stack[-4] = Stack[-2]
0x1337: Return(); Pop(0)

0x1338: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x1339: IF (Stack[-1] == 0) GOTO 0x133c; Pop(1)

0x133a: Stack[-4] = Stack[-1]
0x133b: Return(); Pop(0)

0x133c: Stack[-4] = Stack[-3]
0x133d: Return(); Pop(0)

0x133e: PushEmpty(object, object)
0x133f: @ CreateObjectVector(Stack[-1])
0x1340: Pop(0)
0x1341: Stack[-3] = Stack[-1]
0x1342: Return(); Pop(2)

0x1343: Stack[-1] = 0
0x1344: PushEmpty(int, int)
0x1345: @ GetVariable(Stack[-3], Stack[-1])
0x1346: Pop(0)
0x1347: Stack[-4] = Stack[-1]
0x1348: Return(); Pop(2)

0x1349: PushEmpty(object, object)
0x134a: @ CreateFloatVector(Stack[-1])
0x134b: Pop(0)
0x134c: @@ add(Stack[-3])
0x134d: Pop(0)
0x134e: Push((int) 0)
0x134f: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x1350: IF (Stack[-1] == 0) GOTO 0x1355; Pop(1)

0x1351: Push((float)0.7)
0x1352: Push((int) 500)
0x1353: @ RumblePlay(Stack[-2], Stack[-1])
0x1354: Pop(2)
0x1355: Push((int) 15)
0x1356: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1357: Pop(1)
0x1358: Return(); Pop(2)

0x1359: Stack[-1] = 0
0x135a: PushEmpty(float, float)
0x135b: @ GetGameTime(Stack[-1])
0x135c: Pop(0)
0x135d: Push((int) 1)
0x135e: PushEmpty(int)
0x135f: Push((int) 24)
0x1360: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1361: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1362: Return(); Pop(2)

0x1363: PushEmpty(bool, bool)
0x1364: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1365: Pop(0)
0x1366: Push(Stack[-1])
0x1367: IF (Stack[-1] == 0) GOTO 0x136b; Pop(1)

0x1368: Push("attack")
0x1369: @ PlayGlobalMusic(Stack[-1])
0x136a: Pop(1)
0x136b: Return(); Pop(2)

0x136c: PushEmpty(object, object)
0x136d: @ GetScene(Stack[-1])
0x136e: Pop(0)
0x136f: Push("battle")
0x1370: PushEmpty(object)
0x1371: Call2 0x131c

0x1372: Pop(0)
0x1373: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x1374: Pop(2)
0x1375: Return(); Pop(2)

0x1376: Stack[-1] = 0
0x1377: PushEmpty()
0x1378: Push((int) 100)
0x1379: @@ SetReturnValue(Stack[-1])
0x137a: Pop(1)
0x137b: Return(); Pop(0)

0x137c: PushEmpty()
0x137d: PushEmpty(int, string)
0x137e: Stack[-1] = "branch"
0x137f: Call2 0x1344

0x1380: Pop(1)
0x1381: Push((int) 0)
0x1382: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1383: IF (Stack[-1] == 0) GOTO 0x1386; Pop(1)

0x1384: Stack[-2] = (bool) 1
0x1385: Return(); Pop(0)

0x1386: Stack[-2] = (bool) 0
0x1387: Return(); Pop(0)

0x1388: PushEmpty()
0x1389: PushEmpty(int, string)
0x138a: Stack[-1] = "branch"
0x138b: Call2 0x1344

0x138c: Pop(1)
0x138d: Push((int) 1)
0x138e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x138f: IF (Stack[-1] == 0) GOTO 0x1392; Pop(1)

0x1390: Stack[-2] = (bool) 1
0x1391: Return(); Pop(0)

0x1392: Stack[-2] = (bool) 0
0x1393: Return(); Pop(0)

0x1394: PushEmpty()
0x1395: PushEmpty(int, string)
0x1396: Stack[-1] = "branch"
0x1397: Call2 0x1344

0x1398: Pop(1)
0x1399: Push((int) 2)
0x139a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x139b: IF (Stack[-1] == 0) GOTO 0x139e; Pop(1)

0x139c: Stack[-2] = (bool) 1
0x139d: Return(); Pop(0)

0x139e: Stack[-2] = (bool) 0
0x139f: Return(); Pop(0)

0x13a0: PushEmpty()
0x13a1: PushEmpty(bool, object)
0x13a2: Stack[-1] = Stack[-3]
0x13a3: Call2 0x1422

0x13a4: Pop(1)
0x13a5: IF (Stack[-1] == 0) GOTO 0x13a8; Pop(1)

0x13a6: Stack[-2] = (bool) 1
0x13a7: Return(); Pop(0)

0x13a8: Stack[-2] = (bool) 0
0x13a9: Return(); Pop(0)

0x13aa: PushEmpty()
0x13ab: PushEmpty(bool, object)
0x13ac: Stack[-1] = Stack[-3]
0x13ad: Call2 0x1429

0x13ae: Pop(1)
0x13af: IF (Stack[-1] == 0) GOTO 0x13b2; Pop(1)

0x13b0: Stack[-2] = (bool) 1
0x13b1: Return(); Pop(0)

0x13b2: Stack[-2] = (bool) 0
0x13b3: Return(); Pop(0)

0x13b4: PushEmpty()
0x13b5: PushEmpty(bool, object)
0x13b6: Stack[-1] = Stack[-3]
0x13b7: Call2 0x142c

0x13b8: Pop(1)
0x13b9: IF (Stack[-1] == 0) GOTO 0x13bc; Pop(1)

0x13ba: Stack[-2] = (bool) 1
0x13bb: Return(); Pop(0)

0x13bc: Stack[-2] = (bool) 0
0x13bd: Return(); Pop(0)

0x13be: PushEmpty()
0x13bf: PushEmpty(bool, object)
0x13c0: Stack[-1] = Stack[-3]
0x13c1: Call2 0x1433

0x13c2: Pop(1)
0x13c3: IF (Stack[-1] == 0) GOTO 0x13c6; Pop(1)

0x13c4: Stack[-2] = (bool) 1
0x13c5: Return(); Pop(0)

0x13c6: Stack[-2] = (bool) 0
0x13c7: Return(); Pop(0)

0x13c8: PushEmpty()
0x13c9: PushEmpty(bool, object)
0x13ca: Stack[-1] = Stack[-3]
0x13cb: Call2 0x143a

0x13cc: Pop(1)
0x13cd: IF (Stack[-1] == 0) GOTO 0x13d0; Pop(1)

0x13ce: Stack[-2] = (bool) 1
0x13cf: Return(); Pop(0)

0x13d0: Stack[-2] = (bool) 0
0x13d1: Return(); Pop(0)

0x13d2: PushEmpty()
0x13d3: PushEmpty(bool, object)
0x13d4: Stack[-1] = Stack[-3]
0x13d5: Call2 0x1441

0x13d6: Pop(1)
0x13d7: IF (Stack[-1] == 0) GOTO 0x13da; Pop(1)

0x13d8: Stack[-2] = (bool) 1
0x13d9: Return(); Pop(0)

0x13da: Stack[-2] = (bool) 0
0x13db: Return(); Pop(0)

0x13dc: PushEmpty()
0x13dd: PushEmpty(bool, object)
0x13de: Stack[-1] = Stack[-3]
0x13df: Call2 0x1448

0x13e0: Pop(1)
0x13e1: IF (Stack[-1] == 0) GOTO 0x13e4; Pop(1)

0x13e2: Stack[-2] = (bool) 1
0x13e3: Return(); Pop(0)

0x13e4: Stack[-2] = (bool) 0
0x13e5: Return(); Pop(0)

0x13e6: PushEmpty()
0x13e7: PushEmpty(bool, object)
0x13e8: Stack[-1] = Stack[-3]
0x13e9: Call2 0x144f

0x13ea: Pop(1)
0x13eb: IF (Stack[-1] == 0) GOTO 0x13ee; Pop(1)

0x13ec: Stack[-2] = (bool) 1
0x13ed: Return(); Pop(0)

0x13ee: Stack[-2] = (bool) 0
0x13ef: Return(); Pop(0)

0x13f0: PushEmpty()
0x13f1: PushEmpty(bool, object)
0x13f2: Stack[-1] = Stack[-3]
0x13f3: Call2 0x1456

0x13f4: Pop(1)
0x13f5: IF (Stack[-1] == 0) GOTO 0x13f8; Pop(1)

0x13f6: Stack[-2] = (bool) 1
0x13f7: Return(); Pop(0)

0x13f8: Stack[-2] = (bool) 0
0x13f9: Return(); Pop(0)

0x13fa: PushEmpty()
0x13fb: PushEmpty(bool, object)
0x13fc: Stack[-1] = Stack[-3]
0x13fd: Call2 0x145d

0x13fe: Pop(1)
0x13ff: IF (Stack[-1] == 0) GOTO 0x1402; Pop(1)

0x1400: Stack[-2] = (bool) 1
0x1401: Return(); Pop(0)

0x1402: Stack[-2] = (bool) 0
0x1403: Return(); Pop(0)

0x1404: PushEmpty()
0x1405: PushEmpty(bool, object)
0x1406: Stack[-1] = Stack[-3]
0x1407: Call2 0x1464

0x1408: Pop(1)
0x1409: IF (Stack[-1] == 0) GOTO 0x140c; Pop(1)

0x140a: Stack[-2] = (bool) 1
0x140b: Return(); Pop(0)

0x140c: Stack[-2] = (bool) 0
0x140d: Return(); Pop(0)

0x140e: PushEmpty()
0x140f: PushEmpty(bool, object)
0x1410: Stack[-1] = Stack[-3]
0x1411: Call2 0x146b

0x1412: Pop(1)
0x1413: IF (Stack[-1] == 0) GOTO 0x1416; Pop(1)

0x1414: Stack[-2] = (bool) 1
0x1415: Return(); Pop(0)

0x1416: Stack[-2] = (bool) 0
0x1417: Return(); Pop(0)

0x1418: PushEmpty()
0x1419: PushEmpty(bool, object)
0x141a: Stack[-1] = Stack[-3]
0x141b: Call2 0x1472

0x141c: Pop(1)
0x141d: IF (Stack[-1] == 0) GOTO 0x1420; Pop(1)

0x141e: Stack[-2] = (bool) 1
0x141f: Return(); Pop(0)

0x1420: Stack[-2] = (bool) 0
0x1421: Return(); Pop(0)

0x1422: PushEmpty()
0x1423: PushEmpty(int)
0x1424: Call2 0x135a

0x1425: Pop(0)
0x1426: Push((int) 6)
0x1427: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x1428: Return(); Pop(0)

0x1429: PushEmpty()
0x142a: Stack[-2] = (bool) 0
0x142b: Return(); Pop(0)

0x142c: PushEmpty()
0x142d: PushEmpty(int)
0x142e: Call2 0x135a

0x142f: Pop(0)
0x1430: Push((int) 1)
0x1431: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1432: Return(); Pop(0)

0x1433: PushEmpty()
0x1434: PushEmpty(int)
0x1435: Call2 0x135a

0x1436: Pop(0)
0x1437: Push((int) 2)
0x1438: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1439: Return(); Pop(0)

0x143a: PushEmpty()
0x143b: PushEmpty(int)
0x143c: Call2 0x135a

0x143d: Pop(0)
0x143e: Push((int) 3)
0x143f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1440: Return(); Pop(0)

0x1441: PushEmpty()
0x1442: PushEmpty(int)
0x1443: Call2 0x135a

0x1444: Pop(0)
0x1445: Push((int) 5)
0x1446: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1447: Return(); Pop(0)

0x1448: PushEmpty()
0x1449: PushEmpty(int)
0x144a: Call2 0x135a

0x144b: Pop(0)
0x144c: Push((int) 6)
0x144d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x144e: Return(); Pop(0)

0x144f: PushEmpty()
0x1450: PushEmpty(int)
0x1451: Call2 0x135a

0x1452: Pop(0)
0x1453: Push((int) 7)
0x1454: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1455: Return(); Pop(0)

0x1456: PushEmpty()
0x1457: PushEmpty(int)
0x1458: Call2 0x135a

0x1459: Pop(0)
0x145a: Push((int) 8)
0x145b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x145c: Return(); Pop(0)

0x145d: PushEmpty()
0x145e: PushEmpty(int)
0x145f: Call2 0x135a

0x1460: Pop(0)
0x1461: Push((int) 9)
0x1462: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1463: Return(); Pop(0)

0x1464: PushEmpty()
0x1465: PushEmpty(int)
0x1466: Call2 0x135a

0x1467: Pop(0)
0x1468: Push((int) 10)
0x1469: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x146a: Return(); Pop(0)

0x146b: PushEmpty()
0x146c: PushEmpty(int)
0x146d: Call2 0x135a

0x146e: Pop(0)
0x146f: Push((int) 11)
0x1470: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1471: Return(); Pop(0)

0x1472: PushEmpty()
0x1473: PushEmpty(int)
0x1474: Call2 0x135a

0x1475: Pop(0)
0x1476: Push((int) 12)
0x1477: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1478: Return(); Pop(0)

0x1479: PushEmpty(int, int)
0x147a: Push("branch")
0x147b: @ GetVariable(Stack[-1], Stack[-2])
0x147c: Pop(1)
0x147d: Push((int) 0)
0x147e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147f: IF (Stack[-1] == 0) GOTO 0x1483; Pop(1)

0x1480: Stack[-3] = (int) 1
0x1481: Return(); Pop(2)

0x1482: GOTO 0x1488

0x1483: Push((int) 1)
0x1484: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1485: IF (Stack[-1] == 0) GOTO 0x1488; Pop(1)

0x1486: Stack[-3] = (int) 2
0x1487: Return(); Pop(2)

0x1488: Stack[-3] = (int) 3
0x1489: Return(); Pop(2)

0x148a: PushEmpty(int, int)
0x148b: Push("branch")
0x148c: @ GetVariable(Stack[-1], Stack[-2])
0x148d: Pop(1)
0x148e: Stack[-3] = Stack[-1]
0x148f: Return(); Pop(2)

0x1490: PushEmpty(int, int)
0x1491: @@ GetItemID(Stack[-1])
0x1492: Pop(0)
0x1493: Stack[-4] = Stack[-1]
0x1494: Return(); Pop(2)

0x1495: PushEmpty(int, int, int, string, bool, bool, int, int, int, int, string, bool, bool, int)
0x1496: Push((int) 0)
0x1497: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x1498: IF (Stack[-1] == 0) GOTO 0x14ba; Pop(1)

0x1499: PushEmpty(int)
0x149a: Call2 0x135a

0x149b: Stack[-8] = Stack[-1]
0x149c: Pop(1)
0x149d: Stack[-6] = (int) 0
0x149e: Stack[-5] = (int) 1
0x149f: Pop(0); Push((bool) Stack[-5] <= Stack[-7])
0x14a0: IF (Stack[-1] == 0) GOTO 0x14b8; Pop(1)

0x14a1: Stack[-4] = "Price"
0x14a2: Push((int) 1)
0x14a3: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x14a4: IF (Stack[-1] == 0) GOTO 0x14a6; Pop(1)

0x14a5: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0x14a6: PushEmpty(int, object)
0x14a7: Stack[-1] = Stack[-18]
0x14a8: Call2 0x1490

0x14a9: Pop(1)
0x14aa: @ HasInvItemProperty(Stack[-4], Stack[-1], Stack[-5])
0x14ab: Pop(1)
0x14ac: Pop(0); Push((bool) Stack[-3] == 0)
0x14ad: IF (Stack[-1] == 0) GOTO 0x14af; Pop(1)

0x14ae: GOTO 0x14b5

0x14af: PushEmpty(int, object)
0x14b0: Stack[-1] = Stack[-18]
0x14b1: Call2 0x1490

0x14b2: Pop(1)
0x14b3: @ GetInvItemProperty(Stack[-7], Stack[-1], Stack[-5])
0x14b4: Pop(1)
0x14b5: Push((int) 1)
0x14b6: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x14b7: GOTO 0x149f

0x14b8: Stack[-17] = Stack[-6]
0x14b9: Return(); Pop(14)

0x14ba: PushEmpty(int, object)
0x14bb: Stack[-1] = Stack[-18]
0x14bc: Call2 0x1490

0x14bd: Pop(1)
0x14be: Push("BarterPrice")
0x14bf: Pop(1); Push(Stack[-1] + Stack[-17]);
0x14c0: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x14c1: Pop(2)
0x14c2: Pop(0); Push((bool) Stack[-2] == 0)
0x14c3: IF (Stack[-1] == 0) GOTO 0x14c6; Pop(1)

0x14c4: Stack[-17] = (int) 0
0x14c5: Return(); Pop(14)

0x14c6: PushEmpty(int, object)
0x14c7: Stack[-1] = Stack[-18]
0x14c8: Call2 0x1490

0x14c9: Pop(1)
0x14ca: Push("BarterPrice")
0x14cb: Pop(1); Push(Stack[-1] + Stack[-17]);
0x14cc: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x14cd: Pop(2)
0x14ce: Push((int) 0)
0x14cf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x14d0: IF (Stack[-1] == 0) GOTO 0x14d3; Pop(1)

0x14d1: Stack[-17] = Stack[-1]
0x14d2: Return(); Pop(14)

0x14d3: Stack[-17] = -Stack[-1]; Pop(0);
0x14d4: Return(); Pop(14)

0x14d5: PushEmpty()
0x14d6: PushEmpty(int)
0x14d7: Call2 0x148a

0x14d8: Pop(0)
0x14d9: Push((int) 1)
0x14da: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14db: IF (Stack[-1] == 0) GOTO 0x14df; Pop(1)

0x14dc: @ WorkWithCorpse(Stack[-1])
0x14dd: Pop(0)
0x14de: GOTO 0x14e1

0x14df: @ Barter(Stack[-1])
0x14e0: Pop(0)
0x14e1: Return(); Pop(0)

0x14e2: PushEmpty(int, bool, int, bool)
0x14e3: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x14e4: IF (Stack[-1] == 0) GOTO 0x14e9; Pop(1)

0x14e5: Push("GenerateMoney: iMin > iMax")
0x14e6: @ Trace(Stack[-1])
0x14e7: Pop(1)
0x14e8: Return(); Pop(4)

0x14e9: Stack[-2] = (int) 0
0x14ea: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x14eb: IF (Stack[-1] == 0) GOTO 0x14f0; Pop(1)

0x14ec: Pop(0); Push(Stack[-5] - Stack[-6]);
0x14ed: @ irand(Stack[-3], Stack[-1])
0x14ee: Pop(1)
0x14ef: GOTO 0x14f4

0x14f0: Push((int) 0)
0x14f1: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x14f2: IF (Stack[-1] == 0) GOTO 0x14f4; Pop(1)

0x14f3: Return(); Pop(4)

0x14f4: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x14f5: Push((int) 0)
0x14f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f7: IF (Stack[-1] == 0) GOTO 0x14f9; Pop(1)

0x14f8: Return(); Pop(4)

0x14f9: PushEmpty(int, string)
0x14fa: Stack[-1] = "Money"
0x14fb: Call2 0x15d9

0x14fc: Pop(1)
0x14fd: Push((int) 0)
0x14fe: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x14ff: Pop(2)
0x1500: Return(); Pop(4)

0x1501: PushEmpty(object, int, bool, object, int, bool)
0x1502: @ CreateInvItem(Stack[-3])
0x1503: Pop(0)
0x1504: @@ SetItemName(Stack[-7])
0x1505: Pop(0)
0x1506: Push("Organ")
0x1507: Push((int) 1)
0x1508: @@ SetProperty(Stack[-2], Stack[-1])
0x1509: Pop(2)
0x150a: @@ GetItemID(Stack[-2])
0x150b: Pop(0)
0x150c: Push((int) 0)
0x150d: Push((int) 1)
0x150e: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x150f: Pop(2)
0x1510: Return(); Pop(6)

0x1511: Stack[-3] = 0
0x1512: PushEmpty(int)
0x1513: Call2 0x148a

0x1514: Pop(0)
0x1515: Push((int) 1)
0x1516: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1517: IF (Stack[-1] == 0) GOTO 0x1519; Pop(1)

0x1518: Return(); Pop(0)

0x1519: PushEmpty(string)
0x151a: Stack[-1] = "liver"
0x151b: Call2 0x1501

0x151c: Pop(1)
0x151d: PushEmpty(string)
0x151e: Stack[-1] = "kidney"
0x151f: Call2 0x1501

0x1520: Pop(1)
0x1521: PushEmpty(string)
0x1522: Stack[-1] = "heart"
0x1523: Call2 0x1501

0x1524: Pop(1)
0x1525: PushEmpty(string)
0x1526: Stack[-1] = "blood"
0x1527: Call2 0x1501

0x1528: Pop(1)
0x1529: Return(); Pop(0)

0x152a: PushEmpty(int, bool, int, bool)
0x152b: Push(Stack[-5])
0x152c: IF (Stack[-1] == 0) GOTO 0x1583; Pop(1)

0x152d: PushEmpty(int, int)
0x152e: Stack[-2] = (int) 0
0x152f: Push((int) 100)
0x1530: PushEmpty(int)
0x1531: Call2 0x135a

0x1532: Pop(0)
0x1533: Push((int) 100)
0x1534: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1535: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1536: Call2 0x14e2

0x1537: Pop(2)
0x1538: Push((int) 8)
0x1539: @ irand(Stack[-3], Stack[-1])
0x153a: Pop(1)
0x153b: Push((int) 0)
0x153c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153d: IF (Stack[-1] == 0) GOTO 0x1547; Pop(1)

0x153e: PushEmpty(int, string)
0x153f: Stack[-1] = "lemon"
0x1540: Call2 0x15d9

0x1541: Pop(1)
0x1542: Push((int) 0)
0x1543: Push((int) 1)
0x1544: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1545: Pop(3)
0x1546: GOTO 0x1582

0x1547: Push((int) 1)
0x1548: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1549: IF (Stack[-1] == 0) GOTO 0x1553; Pop(1)

0x154a: PushEmpty(int, string)
0x154b: Stack[-1] = "rusk"
0x154c: Call2 0x15d9

0x154d: Pop(1)
0x154e: Push((int) 0)
0x154f: Push((int) 1)
0x1550: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1551: Pop(3)
0x1552: GOTO 0x1582

0x1553: Push((int) 2)
0x1554: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1555: IF (Stack[-1] == 0) GOTO 0x155f; Pop(1)

0x1556: PushEmpty(int, string)
0x1557: Stack[-1] = "hook"
0x1558: Call2 0x15d9

0x1559: Pop(1)
0x155a: Push((int) 0)
0x155b: Push((int) 1)
0x155c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x155d: Pop(3)
0x155e: GOTO 0x1582

0x155f: Push((int) 4)
0x1560: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1561: IF (Stack[-1] == 0) GOTO 0x156b; Pop(1)

0x1562: PushEmpty(int, string)
0x1563: Stack[-1] = "syringe"
0x1564: Call2 0x15d9

0x1565: Pop(1)
0x1566: Push((int) 0)
0x1567: Push((int) 1)
0x1568: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1569: Pop(3)
0x156a: GOTO 0x1582

0x156b: Push((int) 5)
0x156c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x156d: IF (Stack[-1] == 0) GOTO 0x1577; Pop(1)

0x156e: PushEmpty(int, string)
0x156f: Stack[-1] = "watch"
0x1570: Call2 0x15d9

0x1571: Pop(1)
0x1572: Push((int) 0)
0x1573: Push((int) 1)
0x1574: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1575: Pop(3)
0x1576: GOTO 0x1582

0x1577: Push((int) 6)
0x1578: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1579: IF (Stack[-1] == 0) GOTO 0x1582; Pop(1)

0x157a: PushEmpty(int, string)
0x157b: Stack[-1] = "razor"
0x157c: Call2 0x15d9

0x157d: Pop(1)
0x157e: Push((int) 0)
0x157f: Push((int) 1)
0x1580: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1581: Pop(3)
0x1582: GOTO 0x15d8

0x1583: PushEmpty(int, int)
0x1584: Stack[-2] = (int) 0
0x1585: Push((int) 50)
0x1586: PushEmpty(int)
0x1587: Call2 0x135a

0x1588: Pop(0)
0x1589: Push((int) 50)
0x158a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x158b: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x158c: Call2 0x14e2

0x158d: Pop(2)
0x158e: Push((int) 7)
0x158f: @ irand(Stack[-3], Stack[-1])
0x1590: Pop(1)
0x1591: Push((int) 0)
0x1592: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1593: IF (Stack[-1] == 0) GOTO 0x159d; Pop(1)

0x1594: PushEmpty(int, string)
0x1595: Stack[-1] = "beads"
0x1596: Call2 0x15d9

0x1597: Pop(1)
0x1598: Push((int) 0)
0x1599: Push((int) 1)
0x159a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x159b: Pop(3)
0x159c: GOTO 0x15d8

0x159d: Push((int) 1)
0x159e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159f: IF (Stack[-1] == 0) GOTO 0x15a9; Pop(1)

0x15a0: PushEmpty(int, string)
0x15a1: Stack[-1] = "bracelet"
0x15a2: Call2 0x15d9

0x15a3: Pop(1)
0x15a4: Push((int) 0)
0x15a5: Push((int) 1)
0x15a6: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15a7: Pop(3)
0x15a8: GOTO 0x15d8

0x15a9: Push((int) 2)
0x15aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15ab: IF (Stack[-1] == 0) GOTO 0x15b5; Pop(1)

0x15ac: PushEmpty(int, string)
0x15ad: Stack[-1] = "ear_ring"
0x15ae: Call2 0x15d9

0x15af: Pop(1)
0x15b0: Push((int) 0)
0x15b1: Push((int) 1)
0x15b2: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15b3: Pop(3)
0x15b4: GOTO 0x15d8

0x15b5: Push((int) 3)
0x15b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b7: IF (Stack[-1] == 0) GOTO 0x15c1; Pop(1)

0x15b8: PushEmpty(int, string)
0x15b9: Stack[-1] = "gold_ring"
0x15ba: Call2 0x15d9

0x15bb: Pop(1)
0x15bc: Push((int) 0)
0x15bd: Push((int) 1)
0x15be: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15bf: Pop(3)
0x15c0: GOTO 0x15d8

0x15c1: Push((int) 4)
0x15c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c3: IF (Stack[-1] == 0) GOTO 0x15cd; Pop(1)

0x15c4: PushEmpty(int, string)
0x15c5: Stack[-1] = "silver_ring"
0x15c6: Call2 0x15d9

0x15c7: Pop(1)
0x15c8: Push((int) 0)
0x15c9: Push((int) 1)
0x15ca: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15cb: Pop(3)
0x15cc: GOTO 0x15d8

0x15cd: Push((int) 5)
0x15ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15cf: IF (Stack[-1] == 0) GOTO 0x15d8; Pop(1)

0x15d0: PushEmpty(int, string)
0x15d1: Stack[-1] = "flower"
0x15d2: Call2 0x15d9

0x15d3: Pop(1)
0x15d4: Push((int) 0)
0x15d5: Push((int) 1)
0x15d6: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15d7: Pop(3)
0x15d8: Return(); Pop(4)

0x15d9: PushEmpty(int, int)
0x15da: @ GetInvItemByName(Stack[-1], Stack[-3])
0x15db: Pop(0)
0x15dc: Stack[-4] = Stack[-1]
0x15dd: Return(); Pop(2)

0x15de: PushEmpty()
0x15df: PushEmpty(object)
0x15e0: Stack[-1] = Stack[-2]
0x15e1: Push(-1, 0); TaskCall(2)
0x15e2: Call2 0xa73

0x15e3: Pop(-1, 0); TaskReturn
0x15e4: Pop(1)
0x15e5: Return(); Pop(0)

0x15e6: PushEmpty(float, float)
0x15e7: Push("health")
0x15e8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x15e9: IF (Stack[-1] == 0) GOTO 0x15f2; Pop(1)

0x15ea: Push("health")
0x15eb: @ GetProperty(Stack[-1], Stack[-2])
0x15ec: Pop(1)
0x15ed: Push((int) 0)
0x15ee: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x15ef: IF (Stack[-1] == 0) GOTO 0x15f2; Pop(1)

0x15f0: @ SignalDeath(Stack[-4])
0x15f1: Pop(0)
0x15f2: Return(); Pop(2)

0x15f3: PushEmpty()
0x15f4: PushEmpty(object)
0x15f5: Stack[-1] = Stack[-2]
0x15f6: Call2 0x15de

0x15f7: Pop(1)
0x15f8: Return(); Pop(0)

0x15f9: PushEmpty()
0x15fa: PushEmpty(object, int, float)
0x15fb: Stack[-3] = Stack[-7]
0x15fc: Stack[-2] = Stack[-6]
0x15fd: Stack[-1] = Stack[-5]
0x15fe: Call2 0x1209

0x15ff: Pop(3)
0x1600: Return(); Pop(0)

0x1601: PushEmpty()
0x1602: PushEmpty(object, int, float, cvector, cvector)
0x1603: Stack[-5] = Stack[-11]
0x1604: Stack[-4] = Stack[-10]
0x1605: Stack[-3] = Stack[-9]
0x1606: Stack[-2] = Stack[-7]
0x1607: Stack[-1] = Stack[-6]
0x1608: Call2 0x124d

0x1609: Pop(5)
0x160a: Return(); Pop(0)

0x160b: PushEmpty()
0x160c: Push("unholster")
0x160d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x160e: IF (Stack[-1] == 0) GOTO 0x1616; Pop(1)

0x160f: PushEmpty(bool, object)
0x1610: Stack[-1] = Stack[-4]
0x1611: Call2 0x1777

0x1612: Stack[-5] = Stack[-2]
0x1613: Pop(2)
0x1614: Return(); Pop(0)

0x1615: GOTO 0x1629

0x1616: Push("player_shot")
0x1617: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1618: IF (Stack[-1] == 0) GOTO 0x1620; Pop(1)

0x1619: PushEmpty(bool, object)
0x161a: Stack[-1] = Stack[-4]
0x161b: Call2 0x177c

0x161c: Stack[-5] = Stack[-2]
0x161d: Pop(2)
0x161e: Return(); Pop(0)

0x161f: GOTO 0x1629

0x1620: Push("battle")
0x1621: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1622: IF (Stack[-1] == 0) GOTO 0x1629; Pop(1)

0x1623: PushEmpty(bool, object)
0x1624: Stack[-1] = Stack[-4]
0x1625: Call2 0x1781

0x1626: Stack[-5] = Stack[-2]
0x1627: Pop(2)
0x1628: Return(); Pop(0)

0x1629: Stack[-3] = (bool) 0
0x162a: Return(); Pop(0)

0x162b: PushEmpty()
0x162c: Push("unholster")
0x162d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x162e: IF (Stack[-1] == 0) GOTO 0x1634; Pop(1)

0x162f: PushEmpty(object)
0x1630: Stack[-1] = Stack[-3]
0x1631: Call2 0x177a

0x1632: Pop(1)
0x1633: GOTO 0x1643

0x1634: Push("player_shot")
0x1635: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1636: IF (Stack[-1] == 0) GOTO 0x163c; Pop(1)

0x1637: PushEmpty(object)
0x1638: Stack[-1] = Stack[-3]
0x1639: Call2 0x177f

0x163a: Pop(1)
0x163b: GOTO 0x1643

0x163c: Push("battle")
0x163d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x163e: IF (Stack[-1] == 0) GOTO 0x1643; Pop(1)

0x163f: PushEmpty(object)
0x1640: Stack[-1] = Stack[-3]
0x1641: Call2 0x1784

0x1642: Pop(1)
0x1643: Return(); Pop(0)

0x1644: PushEmpty(bool, bool)
0x1645: PushEmpty(bool)
0x1646: Stack[-1] = (bool) 0
0x1647: PushEmpty(bool, object)
0x1648: Stack[-1] = Stack[-6]
0x1649: Call2 0x1777

0x164a: Pop(1)
0x164b: IF (Stack[-1] == 0) GOTO 0x1652; Pop(1)

0x164c: PushEmpty(bool, object)
0x164d: Stack[-1] = Stack[-6]
0x164e: Call2 0x1142

0x164f: Pop(1)
0x1650: IF (Stack[-1] == 0) GOTO 0x1652; Pop(1)

0x1651: Stack[-1] = (bool) 1
0x1652: IF (Stack[-1] == 0) GOTO 0x1659; Pop(1)

0x1653: @@ IsWeaponHolstered(Stack[-1])
0x1654: Pop(0)
0x1655: Pop(0); Push((bool) Stack[-1] == 0)
0x1656: IF (Stack[-1] == 0) GOTO 0x1659; Pop(1)

0x1657: Stack[-4] = (bool) 1
0x1658: Return(); Pop(2)

0x1659: Stack[-4] = (bool) 0
0x165a: Return(); Pop(2)

0x165b: PushEmpty()
0x165c: PushEmpty(object)
0x165d: Stack[-1] = Stack[-2]
0x165e: Call2 0x177a

0x165f: Pop(1)
0x1660: Return(); Pop(0)

0x1661: PushEmpty()
0x1662: PushEmpty(bool, object)
0x1663: Stack[-1] = Stack[-3]
0x1664: Call2 0x1142

0x1665: Pop(1)
0x1666: IF (Stack[-1] == 0) GOTO 0x166d; Pop(1)

0x1667: PushEmpty(object)
0x1668: Call2 0x131c

0x1669: Pop(0)
0x166a: Push((float)-0.01)
0x166b: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x166c: Pop(2)
0x166d: Return(); Pop(0)

0x166e: PushEmpty(object, object)
0x166f: Push("heal")
0x1670: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1671: IF (Stack[-1] == 0) GOTO 0x167c; Pop(1)

0x1672: Push("player")
0x1673: @ FindActor(Stack[-2], Stack[-1])
0x1674: Pop(1)
0x1675: PushEmpty(bool, object)
0x1676: Stack[-1] = Stack[-3]
0x1677: Call2 0x1786

0x1678: Stack[-6] = Stack[-2]
0x1679: Pop(2)
0x167a: Return(); Pop(2)

0x167b: Stack[-1] = 0
0x167c: Stack[-4] = (bool) 0
0x167d: Return(); Pop(2)

0x167e: PushEmpty(object, object)
0x167f: Push("heal")
0x1680: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1681: IF (Stack[-1] == 0) GOTO 0x168a; Pop(1)

0x1682: Push("player")
0x1683: @ FindActor(Stack[-2], Stack[-1])
0x1684: Pop(1)
0x1685: PushEmpty(object)
0x1686: Stack[-1] = Stack[-2]
0x1687: Call2 0x1789

0x1688: Pop(1)
0x1689: Stack[-1] = 0
0x168a: Return(); Pop(2)

0x168b: PushEmpty(string, string)
0x168c: Stack[-1] = "idle"
0x168d: Push(Stack[-3])
0x168e: IF (Stack[-1] == 0) GOTO 0x1690; Pop(1)

0x168f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1690: Stack[-4] = Stack[-1]
0x1691: Return(); Pop(2)

0x1692: PushEmpty(int, bool, int, bool)
0x1693: Stack[-2] = (int) 0
0x1694: Push("all")
0x1695: PushEmpty(string, int)
0x1696: Stack[-1] = Stack[-5]
0x1697: Call2 0x168b

0x1698: Pop(1)
0x1699: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x169a: Pop(2)
0x169b: Pop(0); Push((bool) Stack[-1] == 0)
0x169c: IF (Stack[-1] == 0) GOTO 0x169e; Pop(1)

0x169d: GOTO 0x16a1

0x169e: Push((int) 1)
0x169f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x16a0: GOTO 0x1694

0x16a1: Stack[-5] = Stack[-2]
0x16a2: Return(); Pop(4)

0x16a3: PushEmpty()
0x16a4: PushEmpty(bool, object)
0x16a5: Stack[-1] = Stack[-3]
0x16a6: Call2 0x185b

0x16a7: Pop(1)
0x16a8: IF (Stack[-1] == 0) GOTO 0x16ab; Pop(1)

0x16a9: Stack[-2] = (int) 2
0x16aa: GOTO 0x16ac

0x16ab: Stack[-2] = (int) 0
0x16ac: Return(); Pop(0)

0x16ad: PushEmpty()
0x16ae: PushEmpty(object)
0x16af: Stack[-1] = Stack[-2]
0x16b0: Call2 0x16bd

0x16b1: Pop(1)
0x16b2: Return(); Pop(0)

0x16b3: PushEmpty()
0x16b4: PushEmpty(bool, object)
0x16b5: Stack[-1] = Stack[-3]
0x16b6: Call2 0x11c5

0x16b7: Pop(1)
0x16b8: IF (Stack[-1] == 0) GOTO 0x16bb; Pop(1)

0x16b9: Stack[-2] = (int) 2
0x16ba: GOTO 0x16bc

0x16bb: Stack[-2] = (int) 0
0x16bc: Return(); Pop(0)

0x16bd: PushEmpty()
0x16be: PushEmpty(object)
0x16bf: Stack[-1] = Stack[-2]
0x16c0: Push(-1, 6); TaskCall(5)
0x16c1: Call2 0xd7a

0x16c2: Pop(-1, 6); TaskReturn
0x16c3: Pop(1)
0x16c4: Return(); Pop(0)

0x16c5: PushEmpty(string, string, string, string)
0x16c6: PushEmpty(bool, object, string)
0x16c7: Stack[-2] = Stack[-9]
0x16c8: Stack[-1] = "class"
0x16c9: Call2 0x1147

0x16ca: Pop(2)
0x16cb: Pop(1); Push((bool) Stack[-1] == 0)
0x16cc: IF (Stack[-1] == 0) GOTO 0x16cf; Pop(1)

0x16cd: Stack[-7] = (bool) 0
0x16ce: Return(); Pop(4)

0x16cf: Push("class")
0x16d0: @ GetProperty(Stack[-1], Stack[-3])
0x16d1: Pop(1)
0x16d2: Push("class")
0x16d3: @@ GetProperty(Stack[-1], Stack[-2])
0x16d4: Pop(1)
0x16d5: PushEmpty(bool)
0x16d6: Stack[-1] = (bool) 0
0x16d7: Pop(0); Push((bool) Stack[-6] == 0)
0x16d8: IF (Stack[-1] == 0) GOTO 0x16dc; Pop(1)

0x16d9: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0x16da: IF (Stack[-1] == 0) GOTO 0x16dc; Pop(1)

0x16db: Stack[-1] = (bool) 1
0x16dc: IF (Stack[-1] == 0) GOTO 0x16df; Pop(1)

0x16dd: Stack[-7] = (bool) 1
0x16de: Return(); Pop(4)

0x16df: Push("rat")
0x16e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16e1: IF (Stack[-1] == 0) GOTO 0x16e5; Pop(1)

0x16e2: Stack[-7] = (bool) 0
0x16e3: Return(); Pop(4)

0x16e4: GOTO 0x170e

0x16e5: Push("rat_big")
0x16e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16e7: IF (Stack[-1] == 0) GOTO 0x16eb; Pop(1)

0x16e8: Stack[-7] = (bool) 0
0x16e9: Return(); Pop(4)

0x16ea: GOTO 0x170e

0x16eb: Push("dog")
0x16ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16ed: IF (Stack[-1] == 0) GOTO 0x16f1; Pop(1)

0x16ee: Stack[-7] = (bool) 0
0x16ef: Return(); Pop(4)

0x16f0: GOTO 0x170e

0x16f1: Push("grabitel")
0x16f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16f3: IF (Stack[-1] == 0) GOTO 0x16f7; Pop(1)

0x16f4: Stack[-7] = (bool) 0
0x16f5: Return(); Pop(4)

0x16f6: GOTO 0x170e

0x16f7: Push("bomber")
0x16f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16f9: IF (Stack[-1] == 0) GOTO 0x16fd; Pop(1)

0x16fa: Stack[-7] = (bool) 0
0x16fb: Return(); Pop(4)

0x16fc: GOTO 0x170e

0x16fd: Push("sanitar")
0x16fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16ff: IF (Stack[-1] == 0) GOTO 0x1703; Pop(1)

0x1700: Stack[-7] = (bool) 0
0x1701: Return(); Pop(4)

0x1702: GOTO 0x170e

0x1703: Push("hunter")
0x1704: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1705: IF (Stack[-1] == 0) GOTO 0x1709; Pop(1)

0x1706: Stack[-7] = (bool) 0
0x1707: Return(); Pop(4)

0x1708: GOTO 0x170e

0x1709: Push("soldier")
0x170a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x170b: IF (Stack[-1] == 0) GOTO 0x170e; Pop(1)

0x170c: Stack[-7] = (bool) 0
0x170d: Return(); Pop(4)

0x170e: Stack[-7] = (bool) 1
0x170f: Return(); Pop(4)

0x1710: PushEmpty()
0x1711: PushEmpty(int, object)
0x1712: Stack[-1] = Stack[-4]
0x1713: Call2 0x16b3

0x1714: Stack[-5] = Stack[-2]
0x1715: Pop(2)
0x1716: Return(); Pop(0)

0x1717: PushEmpty()
0x1718: PushEmpty(object)
0x1719: Stack[-1] = Stack[-2]
0x171a: Call2 0x16bd

0x171b: Pop(1)
0x171c: Return(); Pop(0)

0x171d: PushEmpty(bool, bool)
0x171e: PushEmpty(bool, object, bool)
0x171f: Stack[-2] = Stack[-8]
0x1720: Stack[-1] = !Stack[-6]; Pop(0);
0x1721: Call2 0x16c5

0x1722: Pop(2)
0x1723: Pop(1); Push((bool) Stack[-1] == 0)
0x1724: IF (Stack[-1] == 0) GOTO 0x1727; Pop(1)

0x1725: Stack[-7] = (bool) 0
0x1726: Return(); Pop(2)

0x1727: @ CanSee(Stack[-1], Stack[-6])
0x1728: Pop(0)
0x1729: PushEmpty(bool)
0x172a: Stack[-1] = (bool) 1
0x172b: Push(Stack[-2])
0x172c: IF (Stack[-1] == 0) GOTO 0x1735; Pop(1)

0x172d: PushEmpty(float, object)
0x172e: Stack[-1] = Stack[-9]
0x172f: Call2 0x113a

0x1730: Pop(1)
0x1731: Pop(0); Push(Stack[-6] * Stack[-6]);
0x1732: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1733: IF (Stack[-1] == 0) GOTO 0x1735; Pop(1)

0x1734: Stack[-1] = (bool) 0
0x1735: IF (Stack[-1] == 0) GOTO 0x1738; Pop(1)

0x1736: Stack[-7] = (bool) 1
0x1737: Return(); Pop(2)

0x1738: Stack[-7] = (bool) 0
0x1739: Return(); Pop(2)

0x173a: PushEmpty()
0x173b: Stack[-2] = (int) 0
0x173c: Return(); Pop(0)

0x173d: PushEmpty()
0x173e: Return(); Pop(0)

0x173f: PushEmpty()
0x1740: Push("killme")
0x1741: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1742: IF (Stack[-1] == 0) GOTO 0x1749; Pop(1)

0x1743: PushEmpty(int, object)
0x1744: Stack[-1] = Stack[-3]
0x1745: Call2 0x1755

0x1746: Stack[-5] = Stack[-2]
0x1747: Pop(2)
0x1748: Return(); Pop(0)

0x1749: Stack[-3] = (int) 0
0x174a: Return(); Pop(0)

0x174b: PushEmpty()
0x174c: Push("killme")
0x174d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174e: IF (Stack[-1] == 0) GOTO 0x1754; Pop(1)

0x174f: PushEmpty(object)
0x1750: Stack[-1] = Stack[-2]
0x1751: Call2 0x1767

0x1752: Pop(1)
0x1753: Return(); Pop(0)

0x1754: Return(); Pop(0)

0x1755: PushEmpty()
0x1756: PushEmpty(bool, object)
0x1757: Stack[-1] = Stack[-3]
0x1758: Call2 0x11c5

0x1759: Pop(1)
0x175a: Pop(1); Push((bool) Stack[-1] == 0)
0x175b: IF (Stack[-1] == 0) GOTO 0x175e; Pop(1)

0x175c: Stack[-2] = (int) 0
0x175d: Return(); Pop(0)

0x175e: PushEmpty(bool, object)
0x175f: Stack[-1] = Stack[-3]
0x1760: Call2 0x186b

0x1761: Pop(1)
0x1762: IF (Stack[-1] == 0) GOTO 0x1765; Pop(1)

0x1763: Stack[-2] = (int) 2
0x1764: GOTO 0x1766

0x1765: Stack[-2] = (int) 0
0x1766: Return(); Pop(0)

0x1767: PushEmpty()
0x1768: PushEmpty(object)
0x1769: Stack[-1] = Stack[-2]
0x176a: Call2 0x16bd

0x176b: Pop(1)
0x176c: Return(); Pop(0)

0x176d: PushEmpty()
0x176e: Stack[-2] = (int) 2
0x176f: Return(); Pop(0)

0x1770: PushEmpty()
0x1771: PushEmpty(object)
0x1772: Stack[-1] = Stack[-2]
0x1773: Call2 0x1843

0x1774: Pop(1)
0x1775: Return(); Pop(0)

0x1776: Return(); Pop(0)

0x1777: PushEmpty()
0x1778: Stack[-2] = (bool) 0
0x1779: Return(); Pop(0)

0x177a: PushEmpty()
0x177b: Return(); Pop(0)

0x177c: PushEmpty()
0x177d: Stack[-2] = (bool) 0
0x177e: Return(); Pop(0)

0x177f: PushEmpty()
0x1780: Return(); Pop(0)

0x1781: PushEmpty()
0x1782: Stack[-2] = (bool) 0
0x1783: Return(); Pop(0)

0x1784: PushEmpty()
0x1785: Return(); Pop(0)

0x1786: PushEmpty()
0x1787: Stack[-2] = (bool) 0
0x1788: Return(); Pop(0)

0x1789: PushEmpty()
0x178a: Return(); Pop(0)

0x178b: PushEmpty(object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object, object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object)
0x178c: PushEmpty(object)
0x178d: Call2 0x133e

0x178e: Stack[-27] = Stack[-1]
0x178f: Pop(1)
0x1790: @ CreateIntVector(Stack[-25])
0x1791: Pop(0)
0x1792: @ CreateIntVector(Stack[-24])
0x1793: Pop(0)
0x1794: @ CreateIntVector(Stack[-23])
0x1795: Pop(0)
0x1796: @@ GetSubContainerCount(Stack[-22])
0x1797: Pop(0)
0x1798: Stack[-21] = (int) 0
0x1799: Pop(0); Push((bool) Stack[-21] < Stack[-22])
0x179a: IF (Stack[-1] == 0) GOTO 0x17e1; Pop(1)

0x179b: @@ GetItemCount(Stack[-20], Stack[-21])
0x179c: Pop(0)
0x179d: Stack[-19] = (int) 0
0x179e: Pop(0); Push((bool) Stack[-19] < Stack[-20])
0x179f: IF (Stack[-1] == 0) GOTO 0x17de; Pop(1)

0x17a0: @@ GetItem(Stack[-18], Stack[-19], Stack[-21])
0x17a1: Pop(0)
0x17a2: @@ GetItemID(Stack[-17])
0x17a3: Pop(0)
0x17a4: Push("HasDurability")
0x17a5: @ HasInvItemProperty(Stack[-17], Stack[-18], Stack[-1])
0x17a6: Pop(1)
0x17a7: Push(Stack[-16])
0x17a8: IF (Stack[-1] == 0) GOTO 0x17da; Pop(1)

0x17a9: Push("durability")
0x17aa: @@ HasProperty(Stack[-17], Stack[-1])
0x17ab: Pop(1)
0x17ac: Push(Stack[-16])
0x17ad: IF (Stack[-1] == 0) GOTO 0x17da; Pop(1)

0x17ae: Push("durability")
0x17af: @@ GetProperty(Stack[-16], Stack[-1])
0x17b0: Pop(1)
0x17b1: PushEmpty(bool)
0x17b2: Stack[-1] = (bool) 0
0x17b3: Push((int) 100)
0x17b4: Pop(1); Push((bool) Stack[-17] < Stack[-1])
0x17b5: IF (Stack[-1] == 0) GOTO 0x17bc; Pop(1)

0x17b6: PushEmpty(bool, object)
0x17b7: Stack[-1] = Stack[-21]
0x17b8: Call2 0x181e

0x17b9: Pop(1)
0x17ba: IF (Stack[-1] == 0) GOTO 0x17bc; Pop(1)

0x17bb: Stack[-1] = (bool) 1
0x17bc: IF (Stack[-1] == 0) GOTO 0x17da; Pop(1)

0x17bd: @@ add(Stack[-18])
0x17be: Pop(0)
0x17bf: @@ add(Stack[-21])
0x17c0: Pop(0)
0x17c1: @@ add(Stack[-19])
0x17c2: Pop(0)
0x17c3: PushEmpty(int, object, int)
0x17c4: Stack[-2] = Stack[-21]
0x17c5: Stack[-1] = (int) 0
0x17c6: Call2 0x1495

0x17c7: Stack[-17] = Stack[-3]
0x17c8: Pop(3)
0x17c9: Push((float)1.0)
0x17ca: Push((float)2.0)
0x17cb: Pop(1); Push(Stack[-1] * Stack[-17]);
0x17cc: Push((float)100.0)
0x17cd: Pop(2); Push(Stack[-2] / Stack[-1]);
0x17ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17cf: Pop(1); Push(Stack[-15] * Stack[-1]);
0x17d0: Push((int) 100)
0x17d1: Pop(1); Push(Stack[-1] - Stack[-17]);
0x17d2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x17d3: Push((int) 300)
0x17d4: Stack[-15] = Stack[-2] / Stack[-1]; Pop(2);
0x17d5: Pop(0); Push((bool) Stack[-13] == 0)
0x17d6: IF (Stack[-1] == 0) GOTO 0x17d8; Pop(1)

0x17d7: Stack[-13] = (int) 1
0x17d8: @@ add(Stack[-13])
0x17d9: Pop(0)
0x17da: Stack[-18] = 0
0x17db: Push((int) 1)
0x17dc: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x17dd: GOTO 0x179e

0x17de: Push((int) 1)
0x17df: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x17e0: GOTO 0x1799

0x17e1: @ CreateIntVector(Stack[-12])
0x17e2: Pop(0)
0x17e3: Push("repair.xml")
0x17e4: @ ChooseItem(Stack[-27], Stack[-13], Stack[-24], Stack[-1])
0x17e5: Pop(1)
0x17e6: @@ size(Stack[-11])
0x17e7: Pop(0)
0x17e8: Pop(0); Push((bool) Stack[-11] == 0)
0x17e9: IF (Stack[-1] == 0) GOTO 0x17eb; Pop(1)

0x17ea: Return(); Pop(52)

0x17eb: Stack[-10] = (int) 0
0x17ec: Stack[-9] = (int) 0
0x17ed: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0x17ee: IF (Stack[-1] == 0) GOTO 0x17f7; Pop(1)

0x17ef: @@ get(Stack[-8], Stack[-9])
0x17f0: Pop(0)
0x17f1: @@ get(Stack[-7], Stack[-8])
0x17f2: Pop(0)
0x17f3: Stack[-10] = Stack[-10] + Stack[-7]; Pop(0);
0x17f4: Push((int) 1)
0x17f5: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x17f6: GOTO 0x17ed

0x17f7: Push("money")
0x17f8: @@ GetProperty(Stack[-1], Stack[-7])
0x17f9: Pop(1)
0x17fa: Stack[-6] = Stack[-6] - Stack[-10]; Pop(0);
0x17fb: Push((int) 0)
0x17fc: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x17fd: IF (Stack[-1] == 0) GOTO 0x17ff; Pop(1)

0x17fe: Return(); Pop(52)

0x17ff: Push("money")
0x1800: @@ SetProperty(Stack[-1], Stack[-7])
0x1801: Pop(1)
0x1802: Stack[-5] = (int) 0
0x1803: Pop(0); Push((bool) Stack[-5] < Stack[-11])
0x1804: IF (Stack[-1] == 0) GOTO 0x1818; Pop(1)

0x1805: @@ get(Stack[-4], Stack[-5])
0x1806: Pop(0)
0x1807: @@ get(Stack[-3], Stack[-4])
0x1808: Pop(0)
0x1809: @@ get(Stack[-2], Stack[-4])
0x180a: Pop(0)
0x180b: @@ GetItem(Stack[-1], Stack[-2], Stack[-3])
0x180c: Pop(0)
0x180d: Push("durability")
0x180e: Push((int) 100)
0x180f: @@ SetProperty(Stack[-2], Stack[-1])
0x1810: Pop(2)
0x1811: Push((int) 1)
0x1812: @@ SetItem(Stack[-2], Stack[-1], Stack[-3], Stack[-4])
0x1813: Pop(1)
0x1814: Stack[-1] = 0
0x1815: Push((int) 1)
0x1816: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1817: GOTO 0x1803

0x1818: Return(); Pop(52)

0x1819: Stack[-12] = 0
0x181a: Stack[-23] = 0
0x181b: Stack[-24] = 0
0x181c: Stack[-25] = 0
0x181d: Stack[-26] = 0
0x181e: PushEmpty(int, bool, int, bool)
0x181f: @@ GetItemID(Stack[-2])
0x1820: Pop(0)
0x1821: Push("Weapon")
0x1822: @ HasInvItemProperty(Stack[-2], Stack[-3], Stack[-1])
0x1823: Pop(1)
0x1824: Stack[-6] = Stack[-1]
0x1825: Return(); Pop(4)

0x1826: PushEmpty()
0x1827: PushEmpty(int, object)
0x1828: Stack[-1] = Stack[-3]
0x1829: Push(-2, 1); TaskCall(0)
0x182a: Call2 0x0

0x182b: Pop(-2, 1); TaskReturn
0x182c: Pop(1)
0x182d: Push((int) 100)
0x182e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x182f: IF (Stack[-1] == 0) GOTO 0x1834; Pop(1)

0x1830: PushEmpty(object)
0x1831: Stack[-1] = Stack[-2]
0x1832: Call2 0x178b

0x1833: Pop(1)
0x1834: Return(); Pop(0)

0x1835: Stack[-1] = (int) 515568
0x1836: Return(); Pop(0)

0x1837: Stack[-1] = (int) 503353
0x1838: Return(); Pop(0)

0x1839: Stack[-1] = "ui/NPC_Citizen1.png"
0x183a: Return(); Pop(0)

0x183b: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x183c: Return(); Pop(0)

0x183d: Stack[-1] = (bool) 0
0x183e: Return(); Pop(0)

0x183f: Push(GlobalVars[0])
0x1840: Stack[-1] = (bool) 0
0x1841: GlobalVars[0] = Stack[-1]; Pop(1)
0x1842: Return(); Pop(0)

0x1843: PushEmpty(bool, bool)
0x1844: Push(GlobalVars[0])
0x1845: IF (Stack[-1] == 0) GOTO 0x1850; Pop(1)

0x1846: @ IsOverrideActive(Stack[-1])
0x1847: Pop(0)
0x1848: Pop(0); Push((bool) Stack[-1] == 0)
0x1849: IF (Stack[-1] == 0) GOTO 0x184e; Pop(1)

0x184a: PushEmpty(object)
0x184b: Stack[-1] = Stack[-4]
0x184c: Call2 0x14d5

0x184d: Pop(1)
0x184e: Return(); Pop(2)

0x184f: GOTO 0x185a

0x1850: PushEmpty(bool, object)
0x1851: Stack[-1] = Stack[-5]
0x1852: Call2 0x185b

0x1853: Pop(1)
0x1854: Pop(1); Push((bool) Stack[-1] == 0)
0x1855: IF (Stack[-1] == 0) GOTO 0x185a; Pop(1)

0x1856: PushEmpty(object)
0x1857: Stack[-1] = Stack[-4]
0x1858: Call2 0x1826

0x1859: Pop(1)
0x185a: Return(); Pop(2)

0x185b: PushEmpty(float, float)
0x185c: PushEmpty(bool, object)
0x185d: Stack[-1] = Stack[-5]
0x185e: Call2 0x1142

0x185f: Pop(1)
0x1860: IF (Stack[-1] == 0) GOTO 0x1869; Pop(1)

0x1861: Push("reputation")
0x1862: @@ GetProperty(Stack[-1], Stack[-2])
0x1863: Pop(1)
0x1864: Push((float)0.4)
0x1865: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1866: IF (Stack[-1] == 0) GOTO 0x1869; Pop(1)

0x1867: Stack[-4] = (bool) 1
0x1868: Return(); Pop(2)

0x1869: Stack[-4] = (bool) 0
0x186a: Return(); Pop(2)

0x186b: PushEmpty()
0x186c: Stack[-2] = (bool) 1
0x186d: Return(); Pop(0)

0x186e: PushEmpty()
0x186f: PushEmpty(bool, object, object, float, bool)
0x1870: Stack[-4] = Stack[-8]
0x1871: Stack[-3] = Stack[-7]
0x1872: Stack[-2] = (float) 700.0
0x1873: Stack[-1] = Stack[-6]
0x1874: Call2 0x171d

0x1875: Stack[-9] = Stack[-5]
0x1876: Pop(5)
0x1877: Return(); Pop(0)

0x1878: PushEmpty()
0x1879: PushEmpty(bool, object)
0x187a: Stack[-1] = Stack[-3]
0x187b: Call2 0x1142

0x187c: Pop(1)
0x187d: IF (Stack[-1] == 0) GOTO 0x1889; Pop(1)

0x187e: PushEmpty(object)
0x187f: Call2 0x131c

0x1880: Pop(0)
0x1881: Push((float)-0.04)
0x1882: Push((bool) 1)
0x1883: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1884: Pop(3)
0x1885: PushEmpty(bool)
0x1886: Stack[-1] = (bool) 1
0x1887: Call2 0x152a

0x1888: Pop(1)
0x1889: PushEmpty()
0x188a: Call2 0x1512

0x188b: Pop(0)
0x188c: Push(GlobalVars[0])
0x188d: Stack[-1] = (bool) 1
0x188e: GlobalVars[0] = Stack[-1]; Pop(1)
0x188f: Push((int) 50)
0x1890: Push((int) 40)
0x1891: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1892: Pop(2)
0x1893: Return(); Pop(0)

