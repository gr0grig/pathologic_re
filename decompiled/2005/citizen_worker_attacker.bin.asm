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
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	GetVariable (2 args)
	CreateFloatVector (1 args)
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

RunOp = 0x7a3
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x159 Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x716 Vars = (object)
		EVENT_6 Op = 0x724 Vars = ()
		EVENT_22 Op = 0x79d Vars = (object, int, float, float)
		EVENT_16 Op = 0x79f Vars = (object, string)
		EVENT_41 Op = 0x7a1 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x7bb Vars = (object)
		EVENT_17 Op = 0x7cf Vars = (object)
		EVENT_30 Op = 0x7e7 Vars = (object, object, bool)
		EVENT_40 Op = 0x803 Vars = (object)
		EVENT_42 Op = 0x817 Vars = (object, string)
		EVENT_26 Op = 0x83c Vars = (string)
		EVENT_1 Op = 0x84a Vars = (object)
		EVENT_3 Op = 0x85d Vars = (object)
		EVENT_7 Op = 0x863 Vars = (int)
		EVENT_6 Op = 0x86f Vars = ()
		EVENT_41 Op = 0x886 Vars = (object)
		EVENT_10 Op = 0x8f7 Vars = (object)
		EVENT_28 Op = 0x8fb Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0x914 Vars = (object)
		EVENT_17 Op = 0x928 Vars = (object)
		EVENT_30 Op = 0x940 Vars = (object, object, bool)
		EVENT_40 Op = 0x95c Vars = (object)
		EVENT_42 Op = 0x970 Vars = (object, string)
		EVENT_26 Op = 0x995 Vars = (string)
		EVENT_6 Op = 0x9a3 Vars = ()
		EVENT_1 Op = 0x9aa Vars = (object)
	GTASK_5 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_6 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0xcb2 Vars = ()
		EVENT_7 Op = 0xcea Vars = (int)
		EVENT_1 Op = 0xd05 Vars = (object)
		EVENT_2 Op = 0xd14 Vars = (object)
		EVENT_10 Op = 0xd9a Vars = (object)
		EVENT_41 Op = 0xda5 Vars = (object)

Events:
EVENT_16 Op = 0x1220 Vars = (object, string)
EVENT_41 Op = 0x122d Vars = (object)
EVENT_22 Op = 0x1233 Vars = (object, int, float, float)
EVENT_43 Op = 0x123b Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xeff

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1471

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x146f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1473

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1475

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x10b3

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
0x41: Call2 0xf43

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
0x4f: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x101f

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x143

0x58: Pop(1)
0x59: Push((int) 543041)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x102b

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x63: Push((int) 538210)
0x64: Push((int) -1)
0x65: Push((int) 40087)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x102b

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6d: Push((int) 543042)
0x6e: Push((int) -1)
0x6f: Push((int) 45494)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: PushEmpty(bool, object)
0x73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74: Call2 0x102b

0x75: Pop(1)
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: Push((int) 543043)
0x78: Push((int) -1)
0x79: Push((int) 45495)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: PushEmpty(bool)
0x7d: Stack[-1] = (bool) 1
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 1
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x103f

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x1049

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 0
0x8b: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8c: PushEmpty(bool, object)
0x8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e: Call2 0x1053

0x8f: Pop(1)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Stack[-1] = (bool) 0
0x92: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x93: Push((int) 543055)
0x94: Push((int) -1)
0x95: Push((int) 45510)
0x96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97: Pop(3)
0x98: PushEmpty(bool)
0x99: Stack[-1] = (bool) 1
0x9a: PushEmpty(bool, object)
0x9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Call2 0x103f

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9f: PushEmpty(bool, object)
0xa0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Call2 0x1049

0xa2: Pop(1)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa6: Push((int) 543056)
0xa7: Push((int) -1)
0xa8: Push((int) 45511)
0xa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(3)
0xab: PushEmpty(bool)
0xac: Stack[-1] = (bool) 1
0xad: PushEmpty(bool)
0xae: Stack[-1] = (bool) 1
0xaf: PushEmpty(bool, object)
0xb0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Call2 0x105d

0xb2: Pop(1)
0xb3: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb4: PushEmpty(bool, object)
0xb5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Call2 0x1067

0xb7: Pop(1)
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Stack[-1] = (bool) 0
0xba: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbb: PushEmpty(bool, object)
0xbc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Call2 0x1071

0xbe: Pop(1)
0xbf: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xc0: Stack[-1] = (bool) 0
0xc1: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc2: Push((int) 543062)
0xc3: Push((int) -1)
0xc4: Push((int) 45517)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: PushEmpty(bool)
0xc8: Stack[-1] = (bool) 1
0xc9: PushEmpty(bool)
0xca: Stack[-1] = (bool) 1
0xcb: PushEmpty(bool)
0xcc: Stack[-1] = (bool) 1
0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0x1053

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Call2 0x105d

0xd5: Pop(1)
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Stack[-1] = (bool) 0
0xd8: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd9: PushEmpty(bool, object)
0xda: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Call2 0x1067

0xdc: Pop(1)
0xdd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xde: Stack[-1] = (bool) 0
0xdf: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x1071

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: Stack[-1] = (bool) 0
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: Push((int) 543064)
0xe8: Push((int) -1)
0xe9: Push((int) 45519)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: GOTO 0x125

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x143

0xf0: Pop(1)
0xf1: Push((int) 538207)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: PushEmpty(bool, object)
0xf7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Call2 0x1007

0xf9: Pop(1)
0xfa: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfb: Push((int) 538208)
0xfc: Push((int) -1)
0xfd: Push((int) 40085)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: PushEmpty(bool, object)
0x101: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x102: Call2 0x1013

0x103: Pop(1)
0x104: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x105: Push((int) 538209)
0x106: Push((int) -1)
0x107: Push((int) 40086)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: PushEmpty(bool)
0x10b: Stack[-1] = (bool) 0
0x10c: PushEmpty(bool, object)
0x10d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Call2 0x1007

0x10f: Pop(1)
0x110: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x111: PushEmpty(bool, object)
0x112: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x113: Call2 0x1035

0x114: Pop(1)
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: Stack[-1] = (bool) 1
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: Push((int) 538235)
0x119: Push((int) 40114)
0x11a: Push((int) 40113)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Push((int) 538396)
0x11e: Push((int) -1)
0x11f: Push((int) 40282)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: GOTO 0x125

0x123: Return(); Pop(0)

0x124: GOTO 0x4e

0x125: PushEmpty(bool)
0x126: Call2 0x1477

0x127: Pop(0)
0x128: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x129: @ lshWaitForAnimEnd()
0x12a: Pop(0)
0x12b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x12c: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12d: GOTO 0x133

0x12e: PushEmpty(string)
0x12f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x130: Call2 0xf54

0x131: Pop(1)
0x132: GOTO 0x129

0x133: GOTO 0x142

0x134: Push("all")
0x135: Push("idle")
0x136: @ PlayAnimation(Stack[-2], Stack[-1])
0x137: Pop(2)
0x138: @ WaitForAnimEnd()
0x139: Pop(0)
0x13a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: GOTO 0x142

0x13d: Push("all")
0x13e: Push("idle")
0x13f: @ PlayAnimation(Stack[-2], Stack[-1])
0x140: Pop(2)
0x141: GOTO 0x138

0x142: Return(); Pop(0)

0x143: PushEmpty()
0x144: PushEmpty(bool)
0x145: Call2 0x1477

0x146: Pop(0)
0x147: Pop(1); Push((bool) Stack[-1] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: Return(); Pop(0)

0x14a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x14b: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14c: Return(); Pop(0)

0x14d: PushEmpty(string, bool)
0x14e: Stack[-2] = Stack[-3]
0x14f: Push("")
0x150: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x152: Stack[-1] = (bool) 0
0x153: GOTO 0x155

0x154: Stack[-1] = (bool) 1
0x155: Call2 0xf64

0x156: Pop(2)
0x157: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x158: Return(); Pop(0)

0x159: PushEmpty()
0x15a: Push((int) 1)
0x15b: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x15c: PushEmpty()
0x15d: Call2 0xf7e

0x15e: Pop(0)
0x15f: Push((int) 40087)
0x160: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: PushEmpty(object, object)
0x163: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x164: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x165: Call2 0x1002

0x166: Pop(2)
0x167: Push((int) 45510)
0x168: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: PushEmpty(object, object)
0x16b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16d: Call2 0x1002

0x16e: Pop(2)
0x16f: Push((int) 45517)
0x170: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x172: PushEmpty(object, object)
0x173: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x174: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x175: Call2 0x1002

0x176: Pop(2)
0x177: Push((int) 40085)
0x178: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: PushEmpty(object, object)
0x17b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17d: Call2 0x1002

0x17e: Pop(2)
0x17f: Push((int) 40086)
0x180: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x182: PushEmpty(object, object)
0x183: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x184: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x185: Call2 0x1002

0x186: Pop(2)
0x187: Push((int) 45493)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x18a: PushEmpty(bool, object)
0x18b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18c: Call2 0x101f

0x18d: Pop(1)
0x18e: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x18f: PushEmpty(string)
0x190: Stack[-1] = "Neutral"
0x191: Call2 0x143

0x192: Pop(1)
0x193: Push((int) 543041)
0x194: @@ SetMessage(Stack[-1])
0x195: Pop(1)
0x196: @@ ClearReplies()
0x197: Pop(0)
0x198: PushEmpty(bool, object)
0x199: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19a: Call2 0x102b

0x19b: Pop(1)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: Push((int) 538210)
0x19e: Push((int) -1)
0x19f: Push((int) 40087)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0x102b

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a7: Push((int) 543042)
0x1a8: Push((int) -1)
0x1a9: Push((int) 45494)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: PushEmpty(bool, object)
0x1ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ae: Call2 0x102b

0x1af: Pop(1)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: Push((int) 543043)
0x1b2: Push((int) -1)
0x1b3: Push((int) 45495)
0x1b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b5: Pop(3)
0x1b6: PushEmpty(bool)
0x1b7: Stack[-1] = (bool) 1
0x1b8: PushEmpty(bool)
0x1b9: Stack[-1] = (bool) 1
0x1ba: PushEmpty(bool, object)
0x1bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bc: Call2 0x103f

0x1bd: Pop(1)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call2 0x1049

0x1c2: Pop(1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[-1] = (bool) 0
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c6: PushEmpty(bool, object)
0x1c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Call2 0x1053

0x1c9: Pop(1)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Stack[-1] = (bool) 0
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: Push((int) 543055)
0x1ce: Push((int) -1)
0x1cf: Push((int) 45510)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 1
0x1d4: PushEmpty(bool, object)
0x1d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d6: Call2 0x103f

0x1d7: Pop(1)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d9: PushEmpty(bool, object)
0x1da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Call2 0x1049

0x1dc: Pop(1)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Stack[-1] = (bool) 0
0x1df: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e0: Push((int) 543056)
0x1e1: Push((int) -1)
0x1e2: Push((int) 45511)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: PushEmpty(bool)
0x1e6: Stack[-1] = (bool) 1
0x1e7: PushEmpty(bool)
0x1e8: Stack[-1] = (bool) 1
0x1e9: PushEmpty(bool, object)
0x1ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1eb: Call2 0x105d

0x1ec: Pop(1)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ee: PushEmpty(bool, object)
0x1ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f0: Call2 0x1067

0x1f1: Pop(1)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: Stack[-1] = (bool) 0
0x1f4: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f5: PushEmpty(bool, object)
0x1f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f7: Call2 0x1071

0x1f8: Pop(1)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1fa: Stack[-1] = (bool) 0
0x1fb: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fc: Push((int) 543062)
0x1fd: Push((int) -1)
0x1fe: Push((int) 45517)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: PushEmpty(bool)
0x202: Stack[-1] = (bool) 1
0x203: PushEmpty(bool)
0x204: Stack[-1] = (bool) 1
0x205: PushEmpty(bool)
0x206: Stack[-1] = (bool) 1
0x207: PushEmpty(bool, object)
0x208: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x209: Call2 0x1053

0x20a: Pop(1)
0x20b: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20c: PushEmpty(bool, object)
0x20d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20e: Call2 0x105d

0x20f: Pop(1)
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Stack[-1] = (bool) 0
0x212: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x213: PushEmpty(bool, object)
0x214: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x215: Call2 0x1067

0x216: Pop(1)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: Stack[-1] = (bool) 0
0x219: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21a: PushEmpty(bool, object)
0x21b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21c: Call2 0x1071

0x21d: Pop(1)
0x21e: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21f: Stack[-1] = (bool) 0
0x220: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x221: Push((int) 543064)
0x222: Push((int) -1)
0x223: Push((int) 45519)
0x224: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x225: Pop(3)
0x226: Return(); Pop(0)

0x227: PushEmpty(string)
0x228: Stack[-1] = "Neutral"
0x229: Call2 0x143

0x22a: Pop(1)
0x22b: Push((int) 538207)
0x22c: @@ SetMessage(Stack[-1])
0x22d: Pop(1)
0x22e: @@ ClearReplies()
0x22f: Pop(0)
0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x232: Call2 0x1007

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x235: Push((int) 538208)
0x236: Push((int) -1)
0x237: Push((int) 40085)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: PushEmpty(bool, object)
0x23b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23c: Call2 0x1013

0x23d: Pop(1)
0x23e: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23f: Push((int) 538209)
0x240: Push((int) -1)
0x241: Push((int) 40086)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: PushEmpty(bool)
0x245: Stack[-1] = (bool) 0
0x246: PushEmpty(bool, object)
0x247: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x248: Call2 0x1007

0x249: Pop(1)
0x24a: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24b: PushEmpty(bool, object)
0x24c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24d: Call2 0x1035

0x24e: Pop(1)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: Stack[-1] = (bool) 1
0x251: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x252: Push((int) 538235)
0x253: Push((int) 40114)
0x254: Push((int) 40113)
0x255: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x256: Pop(3)
0x257: Push((int) 538396)
0x258: Push((int) -1)
0x259: Push((int) 40282)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: Return(); Pop(0)

0x25d: Push((int) 40272)
0x25e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x260: Push((int) 40274)
0x261: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x263: PushEmpty(string)
0x264: Stack[-1] = "Neutral"
0x265: Call2 0x143

0x266: Pop(1)
0x267: Push((int) 538388)
0x268: @@ SetMessage(Stack[-1])
0x269: Pop(1)
0x26a: @@ ClearReplies()
0x26b: Pop(0)
0x26c: Push((int) 538389)
0x26d: Push((int) 40276)
0x26e: Push((int) 40275)
0x26f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(3)
0x271: Push((int) 538392)
0x272: Push((int) 40279)
0x273: Push((int) 40278)
0x274: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x275: Pop(3)
0x276: Return(); Pop(0)

0x277: Push((int) 40279)
0x278: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x27a: PushEmpty(string)
0x27b: Stack[-1] = "Neutral"
0x27c: Call2 0x143

0x27d: Pop(1)
0x27e: Push((int) 538393)
0x27f: @@ SetMessage(Stack[-1])
0x280: Pop(1)
0x281: @@ ClearReplies()
0x282: Pop(0)
0x283: Push((int) 538394)
0x284: Push((int) -1)
0x285: Push((int) 40280)
0x286: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x287: Pop(3)
0x288: Return(); Pop(0)

0x289: Push((int) 40276)
0x28a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x28c: PushEmpty(string)
0x28d: Stack[-1] = "Neutral"
0x28e: Call2 0x143

0x28f: Pop(1)
0x290: Push((int) 538390)
0x291: @@ SetMessage(Stack[-1])
0x292: Pop(1)
0x293: @@ ClearReplies()
0x294: Pop(0)
0x295: Push((int) 538391)
0x296: Push((int) -1)
0x297: Push((int) 40277)
0x298: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x299: Pop(3)
0x29a: Return(); Pop(0)

0x29b: Push((int) 40262)
0x29c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29e: Push((int) 40264)
0x29f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a1: PushEmpty(string)
0x2a2: Stack[-1] = "Neutral"
0x2a3: Call2 0x143

0x2a4: Pop(1)
0x2a5: Push((int) 538378)
0x2a6: @@ SetMessage(Stack[-1])
0x2a7: Pop(1)
0x2a8: @@ ClearReplies()
0x2a9: Pop(0)
0x2aa: Push((int) 538379)
0x2ab: Push((int) 40266)
0x2ac: Push((int) 40265)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Push((int) 538383)
0x2b0: Push((int) -1)
0x2b1: Push((int) 40269)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Return(); Pop(0)

0x2b5: Push((int) 40266)
0x2b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2b8: PushEmpty(string)
0x2b9: Stack[-1] = "Neutral"
0x2ba: Call2 0x143

0x2bb: Pop(1)
0x2bc: Push((int) 538380)
0x2bd: @@ SetMessage(Stack[-1])
0x2be: Pop(1)
0x2bf: @@ ClearReplies()
0x2c0: Pop(0)
0x2c1: Push((int) 538381)
0x2c2: Push((int) -1)
0x2c3: Push((int) 40267)
0x2c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(3)
0x2c6: Push((int) 538382)
0x2c7: Push((int) -1)
0x2c8: Push((int) 40268)
0x2c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ca: Pop(3)
0x2cb: Return(); Pop(0)

0x2cc: Push((int) 40250)
0x2cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2cf: Push((int) 40256)
0x2d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2d2: PushEmpty(string)
0x2d3: Stack[-1] = "Neutral"
0x2d4: Call2 0x143

0x2d5: Pop(1)
0x2d6: Push((int) 538371)
0x2d7: @@ SetMessage(Stack[-1])
0x2d8: Pop(1)
0x2d9: @@ ClearReplies()
0x2da: Pop(0)
0x2db: Push((int) 538372)
0x2dc: Push((int) 40252)
0x2dd: Push((int) 40257)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Push((int) 538373)
0x2e1: Push((int) -1)
0x2e2: Push((int) 40259)
0x2e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(3)
0x2e5: Return(); Pop(0)

0x2e6: Push((int) 40252)
0x2e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2e9: PushEmpty(string)
0x2ea: Stack[-1] = "Neutral"
0x2eb: Call2 0x143

0x2ec: Pop(1)
0x2ed: Push((int) 538367)
0x2ee: @@ SetMessage(Stack[-1])
0x2ef: Pop(1)
0x2f0: @@ ClearReplies()
0x2f1: Pop(0)
0x2f2: Push((int) 538368)
0x2f3: Push((int) -1)
0x2f4: Push((int) 40253)
0x2f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f6: Pop(3)
0x2f7: Push((int) 538369)
0x2f8: Push((int) -1)
0x2f9: Push((int) 40254)
0x2fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fb: Pop(3)
0x2fc: Return(); Pop(0)

0x2fd: Push((int) 40233)
0x2fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x300: Push((int) 40235)
0x301: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x303: PushEmpty(string)
0x304: Stack[-1] = "Neutral"
0x305: Call2 0x143

0x306: Pop(1)
0x307: Push((int) 538350)
0x308: @@ SetMessage(Stack[-1])
0x309: Pop(1)
0x30a: @@ ClearReplies()
0x30b: Pop(0)
0x30c: Push((int) 538351)
0x30d: Push((int) 40237)
0x30e: Push((int) 40236)
0x30f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x310: Pop(3)
0x311: Push((int) 538362)
0x312: Push((int) -1)
0x313: Push((int) 40247)
0x314: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x315: Pop(3)
0x316: Return(); Pop(0)

0x317: Push((int) 40237)
0x318: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x31a: PushEmpty(string)
0x31b: Stack[-1] = "Neutral"
0x31c: Call2 0x143

0x31d: Pop(1)
0x31e: Push((int) 538352)
0x31f: @@ SetMessage(Stack[-1])
0x320: Pop(1)
0x321: @@ ClearReplies()
0x322: Pop(0)
0x323: Push((int) 538353)
0x324: Push((int) 40239)
0x325: Push((int) 40238)
0x326: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x327: Pop(3)
0x328: Push((int) 538359)
0x329: Push((int) 40245)
0x32a: Push((int) 40244)
0x32b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32c: Pop(3)
0x32d: Return(); Pop(0)

0x32e: Push((int) 40245)
0x32f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x331: PushEmpty(string)
0x332: Stack[-1] = "Neutral"
0x333: Call2 0x143

0x334: Pop(1)
0x335: Push((int) 538360)
0x336: @@ SetMessage(Stack[-1])
0x337: Pop(1)
0x338: @@ ClearReplies()
0x339: Pop(0)
0x33a: Push((int) 538361)
0x33b: Push((int) -1)
0x33c: Push((int) 40246)
0x33d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33e: Pop(3)
0x33f: Return(); Pop(0)

0x340: Push((int) 40239)
0x341: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x343: PushEmpty(string)
0x344: Stack[-1] = "Neutral"
0x345: Call2 0x143

0x346: Pop(1)
0x347: Push((int) 538354)
0x348: @@ SetMessage(Stack[-1])
0x349: Pop(1)
0x34a: @@ ClearReplies()
0x34b: Pop(0)
0x34c: Push((int) 538355)
0x34d: Push((int) -1)
0x34e: Push((int) 40240)
0x34f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x350: Pop(3)
0x351: Push((int) 538356)
0x352: Push((int) 40242)
0x353: Push((int) 40241)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: Return(); Pop(0)

0x357: Push((int) 40242)
0x358: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x35a: PushEmpty(string)
0x35b: Stack[-1] = "Neutral"
0x35c: Call2 0x143

0x35d: Pop(1)
0x35e: Push((int) 538357)
0x35f: @@ SetMessage(Stack[-1])
0x360: Pop(1)
0x361: @@ ClearReplies()
0x362: Pop(0)
0x363: Push((int) 538358)
0x364: Push((int) -1)
0x365: Push((int) 40243)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: Return(); Pop(0)

0x369: Push((int) 40216)
0x36a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36c: Push((int) 40218)
0x36d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x36f: PushEmpty(string)
0x370: Stack[-1] = "Neutral"
0x371: Call2 0x143

0x372: Pop(1)
0x373: Push((int) 538335)
0x374: @@ SetMessage(Stack[-1])
0x375: Pop(1)
0x376: @@ ClearReplies()
0x377: Pop(0)
0x378: Push((int) 538336)
0x379: Push((int) 40220)
0x37a: Push((int) 40219)
0x37b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37c: Pop(3)
0x37d: Push((int) 538343)
0x37e: Push((int) 40228)
0x37f: Push((int) 40227)
0x380: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x381: Pop(3)
0x382: Return(); Pop(0)

0x383: Push((int) 40228)
0x384: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x386: PushEmpty(string)
0x387: Stack[-1] = "Neutral"
0x388: Call2 0x143

0x389: Pop(1)
0x38a: Push((int) 538344)
0x38b: @@ SetMessage(Stack[-1])
0x38c: Pop(1)
0x38d: @@ ClearReplies()
0x38e: Pop(0)
0x38f: Push((int) 538345)
0x390: Push((int) 40220)
0x391: Push((int) 40229)
0x392: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x393: Pop(3)
0x394: Return(); Pop(0)

0x395: Push((int) 40220)
0x396: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x398: PushEmpty(string)
0x399: Stack[-1] = "Neutral"
0x39a: Call2 0x143

0x39b: Pop(1)
0x39c: Push((int) 538337)
0x39d: @@ SetMessage(Stack[-1])
0x39e: Pop(1)
0x39f: @@ ClearReplies()
0x3a0: Pop(0)
0x3a1: Push((int) 538338)
0x3a2: Push((int) 40222)
0x3a3: Push((int) 40221)
0x3a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a5: Pop(3)
0x3a6: Push((int) 538342)
0x3a7: Push((int) 40222)
0x3a8: Push((int) 40225)
0x3a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(3)
0x3ab: Return(); Pop(0)

0x3ac: Push((int) 40222)
0x3ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3af: PushEmpty(string)
0x3b0: Stack[-1] = "Neutral"
0x3b1: Call2 0x143

0x3b2: Pop(1)
0x3b3: Push((int) 538339)
0x3b4: @@ SetMessage(Stack[-1])
0x3b5: Pop(1)
0x3b6: @@ ClearReplies()
0x3b7: Pop(0)
0x3b8: Push((int) 538340)
0x3b9: Push((int) -1)
0x3ba: Push((int) 40223)
0x3bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bc: Pop(3)
0x3bd: Push((int) 538341)
0x3be: Push((int) -1)
0x3bf: Push((int) 40224)
0x3c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c1: Pop(3)
0x3c2: Return(); Pop(0)

0x3c3: Push((int) 40206)
0x3c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c6: Push((int) 40208)
0x3c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3c9: PushEmpty(string)
0x3ca: Stack[-1] = "Neutral"
0x3cb: Call2 0x143

0x3cc: Pop(1)
0x3cd: Push((int) 538325)
0x3ce: @@ SetMessage(Stack[-1])
0x3cf: Pop(1)
0x3d0: @@ ClearReplies()
0x3d1: Pop(0)
0x3d2: Push((int) 538326)
0x3d3: Push((int) 40210)
0x3d4: Push((int) 40209)
0x3d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d6: Pop(3)
0x3d7: Push((int) 538330)
0x3d8: Push((int) -1)
0x3d9: Push((int) 40213)
0x3da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3db: Pop(3)
0x3dc: Return(); Pop(0)

0x3dd: Push((int) 40210)
0x3de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3e0: PushEmpty(string)
0x3e1: Stack[-1] = "Neutral"
0x3e2: Call2 0x143

0x3e3: Pop(1)
0x3e4: Push((int) 538327)
0x3e5: @@ SetMessage(Stack[-1])
0x3e6: Pop(1)
0x3e7: @@ ClearReplies()
0x3e8: Pop(0)
0x3e9: Push((int) 538328)
0x3ea: Push((int) -1)
0x3eb: Push((int) 40211)
0x3ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(3)
0x3ee: Push((int) 538329)
0x3ef: Push((int) -1)
0x3f0: Push((int) 40212)
0x3f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f2: Pop(3)
0x3f3: Return(); Pop(0)

0x3f4: Push((int) 40192)
0x3f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f7: Push((int) 40194)
0x3f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x3fa: PushEmpty(string)
0x3fb: Stack[-1] = "Neutral"
0x3fc: Call2 0x143

0x3fd: Pop(1)
0x3fe: Push((int) 538311)
0x3ff: @@ SetMessage(Stack[-1])
0x400: Pop(1)
0x401: @@ ClearReplies()
0x402: Pop(0)
0x403: Push((int) 538312)
0x404: Push((int) 40196)
0x405: Push((int) 40195)
0x406: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x407: Pop(3)
0x408: Push((int) 538316)
0x409: Push((int) 40200)
0x40a: Push((int) 40199)
0x40b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40c: Pop(3)
0x40d: Return(); Pop(0)

0x40e: Push((int) 40200)
0x40f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x411: PushEmpty(string)
0x412: Stack[-1] = "Neutral"
0x413: Call2 0x143

0x414: Pop(1)
0x415: Push((int) 538317)
0x416: @@ SetMessage(Stack[-1])
0x417: Pop(1)
0x418: @@ ClearReplies()
0x419: Pop(0)
0x41a: Push((int) 538318)
0x41b: Push((int) 40202)
0x41c: Push((int) 40201)
0x41d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41e: Pop(3)
0x41f: Return(); Pop(0)

0x420: Push((int) 40202)
0x421: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x423: PushEmpty(string)
0x424: Stack[-1] = "Neutral"
0x425: Call2 0x143

0x426: Pop(1)
0x427: Push((int) 538319)
0x428: @@ SetMessage(Stack[-1])
0x429: Pop(1)
0x42a: @@ ClearReplies()
0x42b: Pop(0)
0x42c: Push((int) 538320)
0x42d: Push((int) -1)
0x42e: Push((int) 40203)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Push((int) 538321)
0x432: Push((int) -1)
0x433: Push((int) 40204)
0x434: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x435: Pop(3)
0x436: Return(); Pop(0)

0x437: Push((int) 40196)
0x438: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x43a: PushEmpty(string)
0x43b: Stack[-1] = "Neutral"
0x43c: Call2 0x143

0x43d: Pop(1)
0x43e: Push((int) 538313)
0x43f: @@ SetMessage(Stack[-1])
0x440: Pop(1)
0x441: @@ ClearReplies()
0x442: Pop(0)
0x443: Push((int) 538314)
0x444: Push((int) -1)
0x445: Push((int) 40197)
0x446: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(3)
0x448: Push((int) 538315)
0x449: Push((int) -1)
0x44a: Push((int) 40198)
0x44b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44c: Pop(3)
0x44d: Return(); Pop(0)

0x44e: Push((int) 40174)
0x44f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x451: Push((int) 40186)
0x452: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x453: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x454: PushEmpty(string)
0x455: Stack[-1] = "Neutral"
0x456: Call2 0x143

0x457: Pop(1)
0x458: Push((int) 538303)
0x459: @@ SetMessage(Stack[-1])
0x45a: Pop(1)
0x45b: @@ ClearReplies()
0x45c: Pop(0)
0x45d: Push((int) 538304)
0x45e: Push((int) 40188)
0x45f: Push((int) 40187)
0x460: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x461: Pop(3)
0x462: Return(); Pop(0)

0x463: Push((int) 40188)
0x464: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x466: PushEmpty(string)
0x467: Stack[-1] = "Neutral"
0x468: Call2 0x143

0x469: Pop(1)
0x46a: Push((int) 538305)
0x46b: @@ SetMessage(Stack[-1])
0x46c: Pop(1)
0x46d: @@ ClearReplies()
0x46e: Pop(0)
0x46f: Push((int) 538306)
0x470: Push((int) -1)
0x471: Push((int) 40189)
0x472: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x473: Pop(3)
0x474: Push((int) 538307)
0x475: Push((int) -1)
0x476: Push((int) 40190)
0x477: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x478: Pop(3)
0x479: Return(); Pop(0)

0x47a: Push((int) 40176)
0x47b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x47d: PushEmpty(string)
0x47e: Stack[-1] = "Neutral"
0x47f: Call2 0x143

0x480: Pop(1)
0x481: Push((int) 538294)
0x482: @@ SetMessage(Stack[-1])
0x483: Pop(1)
0x484: @@ ClearReplies()
0x485: Pop(0)
0x486: Push((int) 538295)
0x487: Push((int) 40178)
0x488: Push((int) 40177)
0x489: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48a: Pop(3)
0x48b: Push((int) 538299)
0x48c: Push((int) 40182)
0x48d: Push((int) 40181)
0x48e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48f: Pop(3)
0x490: Return(); Pop(0)

0x491: Push((int) 40182)
0x492: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x493: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x494: PushEmpty(string)
0x495: Stack[-1] = "Neutral"
0x496: Call2 0x143

0x497: Pop(1)
0x498: Push((int) 538300)
0x499: @@ SetMessage(Stack[-1])
0x49a: Pop(1)
0x49b: @@ ClearReplies()
0x49c: Pop(0)
0x49d: Push((int) 538301)
0x49e: Push((int) 40178)
0x49f: Push((int) 40183)
0x4a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a1: Pop(3)
0x4a2: Return(); Pop(0)

0x4a3: Push((int) 40178)
0x4a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4a6: PushEmpty(string)
0x4a7: Stack[-1] = "Neutral"
0x4a8: Call2 0x143

0x4a9: Pop(1)
0x4aa: Push((int) 538296)
0x4ab: @@ SetMessage(Stack[-1])
0x4ac: Pop(1)
0x4ad: @@ ClearReplies()
0x4ae: Pop(0)
0x4af: Push((int) 538297)
0x4b0: Push((int) -1)
0x4b1: Push((int) 40179)
0x4b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b3: Pop(3)
0x4b4: PushEmpty(bool, object)
0x4b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b6: Call2 0x1007

0x4b7: Pop(1)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b9: Push((int) 538298)
0x4ba: Push((int) -1)
0x4bb: Push((int) 40180)
0x4bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bd: Pop(3)
0x4be: Return(); Pop(0)

0x4bf: Push((int) 40155)
0x4c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c2: Push((int) 40157)
0x4c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4c5: PushEmpty(string)
0x4c6: Stack[-1] = "Neutral"
0x4c7: Call2 0x143

0x4c8: Pop(1)
0x4c9: Push((int) 538275)
0x4ca: @@ SetMessage(Stack[-1])
0x4cb: Pop(1)
0x4cc: @@ ClearReplies()
0x4cd: Pop(0)
0x4ce: Push((int) 538276)
0x4cf: Push((int) 40159)
0x4d0: Push((int) 40158)
0x4d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d2: Pop(3)
0x4d3: Push((int) 538288)
0x4d4: Push((int) -1)
0x4d5: Push((int) 40170)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Return(); Pop(0)

0x4d9: Push((int) 40159)
0x4da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4dc: PushEmpty(string)
0x4dd: Stack[-1] = "Neutral"
0x4de: Call2 0x143

0x4df: Pop(1)
0x4e0: Push((int) 538277)
0x4e1: @@ SetMessage(Stack[-1])
0x4e2: Pop(1)
0x4e3: @@ ClearReplies()
0x4e4: Pop(0)
0x4e5: Push((int) 538278)
0x4e6: Push((int) 40161)
0x4e7: Push((int) 40160)
0x4e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e9: Pop(3)
0x4ea: Return(); Pop(0)

0x4eb: Push((int) 40161)
0x4ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4ee: PushEmpty(string)
0x4ef: Stack[-1] = "Neutral"
0x4f0: Call2 0x143

0x4f1: Pop(1)
0x4f2: Push((int) 538279)
0x4f3: @@ SetMessage(Stack[-1])
0x4f4: Pop(1)
0x4f5: @@ ClearReplies()
0x4f6: Pop(0)
0x4f7: Push((int) 538280)
0x4f8: Push((int) 40163)
0x4f9: Push((int) 40162)
0x4fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fb: Pop(3)
0x4fc: Push((int) 538284)
0x4fd: Push((int) 40167)
0x4fe: Push((int) 40166)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Return(); Pop(0)

0x502: Push((int) 40167)
0x503: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x505: PushEmpty(string)
0x506: Stack[-1] = "Neutral"
0x507: Call2 0x143

0x508: Pop(1)
0x509: Push((int) 538285)
0x50a: @@ SetMessage(Stack[-1])
0x50b: Pop(1)
0x50c: @@ ClearReplies()
0x50d: Pop(0)
0x50e: Push((int) 538286)
0x50f: Push((int) -1)
0x510: Push((int) 40168)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: Push((int) 538287)
0x514: Push((int) -1)
0x515: Push((int) 40169)
0x516: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x517: Pop(3)
0x518: Return(); Pop(0)

0x519: Push((int) 40163)
0x51a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51b: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x51c: PushEmpty(string)
0x51d: Stack[-1] = "Neutral"
0x51e: Call2 0x143

0x51f: Pop(1)
0x520: Push((int) 538281)
0x521: @@ SetMessage(Stack[-1])
0x522: Pop(1)
0x523: @@ ClearReplies()
0x524: Pop(0)
0x525: Push((int) 538282)
0x526: Push((int) -1)
0x527: Push((int) 40164)
0x528: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(3)
0x52a: Push((int) 538283)
0x52b: Push((int) -1)
0x52c: Push((int) 40165)
0x52d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52e: Pop(3)
0x52f: Return(); Pop(0)

0x530: Push((int) 40135)
0x531: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x533: Push((int) 40137)
0x534: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x536: PushEmpty(string)
0x537: Stack[-1] = "Neutral"
0x538: Call2 0x143

0x539: Pop(1)
0x53a: Push((int) 538256)
0x53b: @@ SetMessage(Stack[-1])
0x53c: Pop(1)
0x53d: @@ ClearReplies()
0x53e: Pop(0)
0x53f: Push((int) 538257)
0x540: Push((int) 40139)
0x541: Push((int) 40138)
0x542: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x543: Pop(3)
0x544: Push((int) 538269)
0x545: Push((int) 40139)
0x546: Push((int) 40150)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Push((int) 538270)
0x54a: Push((int) -1)
0x54b: Push((int) 40152)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Return(); Pop(0)

0x54f: Push((int) 40139)
0x550: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x552: PushEmpty(string)
0x553: Stack[-1] = "Neutral"
0x554: Call2 0x143

0x555: Pop(1)
0x556: Push((int) 538258)
0x557: @@ SetMessage(Stack[-1])
0x558: Pop(1)
0x559: @@ ClearReplies()
0x55a: Pop(0)
0x55b: Push((int) 538259)
0x55c: Push((int) 40141)
0x55d: Push((int) 40140)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: Return(); Pop(0)

0x561: Push((int) 40141)
0x562: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x563: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x564: PushEmpty(string)
0x565: Stack[-1] = "Neutral"
0x566: Call2 0x143

0x567: Pop(1)
0x568: Push((int) 538260)
0x569: @@ SetMessage(Stack[-1])
0x56a: Pop(1)
0x56b: @@ ClearReplies()
0x56c: Pop(0)
0x56d: Push((int) 538261)
0x56e: Push((int) 40143)
0x56f: Push((int) 40142)
0x570: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x571: Pop(3)
0x572: Push((int) 538265)
0x573: Push((int) 40147)
0x574: Push((int) 40146)
0x575: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x576: Pop(3)
0x577: Return(); Pop(0)

0x578: Push((int) 40147)
0x579: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57a: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x57b: PushEmpty(string)
0x57c: Stack[-1] = "Neutral"
0x57d: Call2 0x143

0x57e: Pop(1)
0x57f: Push((int) 538266)
0x580: @@ SetMessage(Stack[-1])
0x581: Pop(1)
0x582: @@ ClearReplies()
0x583: Pop(0)
0x584: Push((int) 538267)
0x585: Push((int) -1)
0x586: Push((int) 40148)
0x587: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x588: Pop(3)
0x589: Push((int) 538268)
0x58a: Push((int) -1)
0x58b: Push((int) 40149)
0x58c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58d: Pop(3)
0x58e: Return(); Pop(0)

0x58f: Push((int) 40143)
0x590: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x592: PushEmpty(string)
0x593: Stack[-1] = "Neutral"
0x594: Call2 0x143

0x595: Pop(1)
0x596: Push((int) 538262)
0x597: @@ SetMessage(Stack[-1])
0x598: Pop(1)
0x599: @@ ClearReplies()
0x59a: Pop(0)
0x59b: Push((int) 538263)
0x59c: Push((int) -1)
0x59d: Push((int) 40144)
0x59e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(3)
0x5a0: Push((int) 538264)
0x5a1: Push((int) -1)
0x5a2: Push((int) 40145)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Return(); Pop(0)

0x5a6: Push((int) 40114)
0x5a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5a9: PushEmpty(string)
0x5aa: Stack[-1] = "Neutral"
0x5ab: Call2 0x143

0x5ac: Pop(1)
0x5ad: Push((int) 538236)
0x5ae: @@ SetMessage(Stack[-1])
0x5af: Pop(1)
0x5b0: @@ ClearReplies()
0x5b1: Pop(0)
0x5b2: Push((int) 538237)
0x5b3: Push((int) 40116)
0x5b4: Push((int) 40115)
0x5b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b6: Pop(3)
0x5b7: Push((int) 538252)
0x5b8: Push((int) -1)
0x5b9: Push((int) 40133)
0x5ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bb: Pop(3)
0x5bc: Return(); Pop(0)

0x5bd: Push((int) 40116)
0x5be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5c0: PushEmpty(string)
0x5c1: Stack[-1] = "Neutral"
0x5c2: Call2 0x143

0x5c3: Pop(1)
0x5c4: Push((int) 538238)
0x5c5: @@ SetMessage(Stack[-1])
0x5c6: Pop(1)
0x5c7: @@ ClearReplies()
0x5c8: Pop(0)
0x5c9: Push((int) 538239)
0x5ca: Push((int) 40118)
0x5cb: Push((int) 40117)
0x5cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cd: Pop(3)
0x5ce: Push((int) 538251)
0x5cf: Push((int) 40120)
0x5d0: Push((int) 40131)
0x5d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d2: Pop(3)
0x5d3: Return(); Pop(0)

0x5d4: Push((int) 40118)
0x5d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5d7: PushEmpty(string)
0x5d8: Stack[-1] = "Neutral"
0x5d9: Call2 0x143

0x5da: Pop(1)
0x5db: Push((int) 538240)
0x5dc: @@ SetMessage(Stack[-1])
0x5dd: Pop(1)
0x5de: @@ ClearReplies()
0x5df: Pop(0)
0x5e0: Push((int) 538241)
0x5e1: Push((int) 40120)
0x5e2: Push((int) 40119)
0x5e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e4: Pop(3)
0x5e5: Push((int) 538250)
0x5e6: Push((int) 40120)
0x5e7: Push((int) 40129)
0x5e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(3)
0x5ea: Return(); Pop(0)

0x5eb: Push((int) 40120)
0x5ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ed: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x5ee: PushEmpty(string)
0x5ef: Stack[-1] = "Neutral"
0x5f0: Call2 0x143

0x5f1: Pop(1)
0x5f2: Push((int) 538242)
0x5f3: @@ SetMessage(Stack[-1])
0x5f4: Pop(1)
0x5f5: @@ ClearReplies()
0x5f6: Pop(0)
0x5f7: Push((int) 538243)
0x5f8: Push((int) 40122)
0x5f9: Push((int) 40121)
0x5fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fb: Pop(3)
0x5fc: Push((int) 538249)
0x5fd: Push((int) 40124)
0x5fe: Push((int) 40127)
0x5ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x600: Pop(3)
0x601: Return(); Pop(0)

0x602: Push((int) 40122)
0x603: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x604: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x605: PushEmpty(string)
0x606: Stack[-1] = "Neutral"
0x607: Call2 0x143

0x608: Pop(1)
0x609: Push((int) 538244)
0x60a: @@ SetMessage(Stack[-1])
0x60b: Pop(1)
0x60c: @@ ClearReplies()
0x60d: Pop(0)
0x60e: Push((int) 538245)
0x60f: Push((int) 40124)
0x610: Push((int) 40123)
0x611: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x612: Pop(3)
0x613: Return(); Pop(0)

0x614: Push((int) 40124)
0x615: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x617: PushEmpty(string)
0x618: Stack[-1] = "Neutral"
0x619: Call2 0x143

0x61a: Pop(1)
0x61b: Push((int) 538246)
0x61c: @@ SetMessage(Stack[-1])
0x61d: Pop(1)
0x61e: @@ ClearReplies()
0x61f: Pop(0)
0x620: Push((int) 538247)
0x621: Push((int) -1)
0x622: Push((int) 40125)
0x623: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x624: Pop(3)
0x625: Push((int) 538248)
0x626: Push((int) -1)
0x627: Push((int) 40126)
0x628: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x629: Pop(3)
0x62a: Return(); Pop(0)

0x62b: Push((int) 40100)
0x62c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62d: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62e: Push((int) 40102)
0x62f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x631: PushEmpty(string)
0x632: Stack[-1] = "Neutral"
0x633: Call2 0x143

0x634: Pop(1)
0x635: Push((int) 538225)
0x636: @@ SetMessage(Stack[-1])
0x637: Pop(1)
0x638: @@ ClearReplies()
0x639: Pop(0)
0x63a: Push((int) 538226)
0x63b: Push((int) 40104)
0x63c: Push((int) 40103)
0x63d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63e: Pop(3)
0x63f: Push((int) 538230)
0x640: Push((int) 40108)
0x641: Push((int) 40107)
0x642: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x643: Pop(3)
0x644: Return(); Pop(0)

0x645: Push((int) 40108)
0x646: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x647: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x648: PushEmpty(string)
0x649: Stack[-1] = "Neutral"
0x64a: Call2 0x143

0x64b: Pop(1)
0x64c: Push((int) 538231)
0x64d: @@ SetMessage(Stack[-1])
0x64e: Pop(1)
0x64f: @@ ClearReplies()
0x650: Pop(0)
0x651: Push((int) 538232)
0x652: Push((int) 40104)
0x653: Push((int) 40109)
0x654: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x655: Pop(3)
0x656: Push((int) 538233)
0x657: Push((int) -1)
0x658: Push((int) 40111)
0x659: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65a: Pop(3)
0x65b: Return(); Pop(0)

0x65c: Push((int) 40104)
0x65d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65e: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x65f: PushEmpty(string)
0x660: Stack[-1] = "Neutral"
0x661: Call2 0x143

0x662: Pop(1)
0x663: Push((int) 538227)
0x664: @@ SetMessage(Stack[-1])
0x665: Pop(1)
0x666: @@ ClearReplies()
0x667: Pop(0)
0x668: Push((int) 538228)
0x669: Push((int) -1)
0x66a: Push((int) 40105)
0x66b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66c: Pop(3)
0x66d: Push((int) 538229)
0x66e: Push((int) -1)
0x66f: Push((int) 40106)
0x670: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x671: Pop(3)
0x672: Return(); Pop(0)

0x673: Push((int) 40089)
0x674: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x676: Push((int) 40091)
0x677: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x679: PushEmpty(string)
0x67a: Stack[-1] = "Neutral"
0x67b: Call2 0x143

0x67c: Pop(1)
0x67d: Push((int) 538214)
0x67e: @@ SetMessage(Stack[-1])
0x67f: Pop(1)
0x680: @@ ClearReplies()
0x681: Pop(0)
0x682: Push((int) 538215)
0x683: Push((int) 40093)
0x684: Push((int) 40092)
0x685: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x686: Pop(3)
0x687: Push((int) 538221)
0x688: Push((int) -1)
0x689: Push((int) 40098)
0x68a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68b: Pop(3)
0x68c: Return(); Pop(0)

0x68d: Push((int) 40093)
0x68e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x690: PushEmpty(string)
0x691: Stack[-1] = "Neutral"
0x692: Call2 0x143

0x693: Pop(1)
0x694: Push((int) 538216)
0x695: @@ SetMessage(Stack[-1])
0x696: Pop(1)
0x697: @@ ClearReplies()
0x698: Pop(0)
0x699: Push((int) 538217)
0x69a: Push((int) 40095)
0x69b: Push((int) 40094)
0x69c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69d: Pop(3)
0x69e: Return(); Pop(0)

0x69f: Push((int) 40095)
0x6a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a1: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6a2: PushEmpty(string)
0x6a3: Stack[-1] = "Neutral"
0x6a4: Call2 0x143

0x6a5: Pop(1)
0x6a6: Push((int) 538218)
0x6a7: @@ SetMessage(Stack[-1])
0x6a8: Pop(1)
0x6a9: @@ ClearReplies()
0x6aa: Pop(0)
0x6ab: Push((int) 538219)
0x6ac: Push((int) -1)
0x6ad: Push((int) 40096)
0x6ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6af: Pop(3)
0x6b0: Push((int) 538220)
0x6b1: Push((int) -1)
0x6b2: Push((int) 40097)
0x6b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b4: Pop(3)
0x6b5: Return(); Pop(0)

0x6b6: Push((int) 45520)
0x6b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b9: Push((int) 45524)
0x6ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6bc: PushEmpty(string)
0x6bd: Stack[-1] = "Neutral"
0x6be: Call2 0x143

0x6bf: Pop(1)
0x6c0: Push((int) 543069)
0x6c1: @@ SetMessage(Stack[-1])
0x6c2: Pop(1)
0x6c3: @@ ClearReplies()
0x6c4: Pop(0)
0x6c5: Push((int) 543070)
0x6c6: Push((int) -1)
0x6c7: Push((int) 45525)
0x6c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c9: Pop(3)
0x6ca: Push((int) 543071)
0x6cb: Push((int) -1)
0x6cc: Push((int) 45526)
0x6cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ce: Pop(3)
0x6cf: Return(); Pop(0)

0x6d0: Push((int) 45513)
0x6d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6d3: Push((int) 45498)
0x6d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d6: Push((int) 45503)
0x6d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d8: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6d9: PushEmpty(string)
0x6da: Stack[-1] = "Neutral"
0x6db: Call2 0x143

0x6dc: Pop(1)
0x6dd: Push((int) 543051)
0x6de: @@ SetMessage(Stack[-1])
0x6df: Pop(1)
0x6e0: @@ ClearReplies()
0x6e1: Pop(0)
0x6e2: Push((int) 543054)
0x6e3: Push((int) -1)
0x6e4: Push((int) 45509)
0x6e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e6: Pop(3)
0x6e7: Return(); Pop(0)

0x6e8: Push((int) 45506)
0x6e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6eb: PushEmpty(string)
0x6ec: Stack[-1] = "Neutral"
0x6ed: Call2 0x143

0x6ee: Pop(1)
0x6ef: Push((int) 543052)
0x6f0: @@ SetMessage(Stack[-1])
0x6f1: Pop(1)
0x6f2: @@ ClearReplies()
0x6f3: Pop(0)
0x6f4: Push((int) 543053)
0x6f5: Push((int) -1)
0x6f6: Push((int) 45507)
0x6f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f8: Pop(3)
0x6f9: Return(); Pop(0)

0x6fa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6fb: PushEmpty(bool)
0x6fc: Call2 0x1477

0x6fd: Pop(0)
0x6fe: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6ff: @ lshStopAnimation()
0x700: Pop(0)
0x701: GOTO 0x704

0x702: @ StopAnimation()
0x703: Pop(0)
0x704: Return(); Pop(0)

0x705: GOTO 0x15a

0x706: Return(); Pop(0)

0x707: PushEmpty()
0x708: EventDisable(0)
0x709: PushEmpty(object)
0x70a: Stack[-1] = Stack[-2]
0x70b: Call2 0x728

0x70c: Pop(1)
0x70d: PushEmpty(object)
0x70e: Stack[-1] = Stack[-2]
0x70f: Call2 0x14b2

0x710: Pop(1)
0x711: EventEnable(0)
0x712: @ Hold()
0x713: Pop(0)
0x714: GOTO 0x712

0x715: Return(); Pop(0)

0x716: PushEmpty(int, int)
0x717: PushEmpty(int, object)
0x718: Stack[-1] = Stack[-5]
0x719: Call2 0x13a7

0x71a: Stack[-3] = Stack[-2]
0x71b: Pop(2)
0x71c: Push((int) 0)
0x71d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x71e: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x71f: PushEmpty(object)
0x720: Stack[-1] = Stack[-4]
0x721: Call2 0x13aa

0x722: Pop(1)
0x723: Return(); Pop(2)

0x724: PushEmpty()
0x725: Call2 0x13b0

0x726: Pop(0)
0x727: Return(); Pop(0)

0x728: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x729: Pop(0); Push((bool) Stack[-21] == 0)
0x72a: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72b: PushEmpty(string)
0x72c: Stack[-1] = "fdie"
0x72d: Call2 0x783

0x72e: Pop(1)
0x72f: GOTO 0x782

0x730: @@ GetPosition(Stack[-10])
0x731: Pop(0)
0x732: @ GetPosition(Stack[-9])
0x733: Pop(0)
0x734: @ GetDirection(Stack[-8])
0x735: Pop(0)
0x736: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x737: Push(CvectorIndex(Stack[-7], 0))
0x738: Push(CvectorIndex(Stack[-9], 0))
0x739: Pop(2); Push(Stack[-2] * Stack[-1]);
0x73a: Push(CvectorIndex(Stack[-8], 2))
0x73b: Push(CvectorIndex(Stack[-10], 2))
0x73c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x73d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x73e: Push((int) 0)
0x73f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x740: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x741: Stack[-6] = "fdie"
0x742: GOTO 0x744

0x743: Stack[-6] = "bdie"
0x744: @ RemoveRTEnvelope()
0x745: Pop(0)
0x746: @ SetDeathState()
0x747: Pop(0)
0x748: @ Stop()
0x749: Pop(0)
0x74a: @ StopAsync()
0x74b: Pop(0)
0x74c: Stack[-5] = Stack[-21]
0x74d: Push("GetScriptProperty")
0x74e: Push((int) 2)
0x74f: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x750: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x751: Push("Owner")
0x752: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x753: Pop(1)
0x754: Push(Stack[-4])
0x755: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x756: Push("Owner")
0x757: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x758: Pop(1)
0x759: Pop(0); Push((bool) Stack[-5] == 0)
0x75a: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75b: Stack[-5] = Stack[-21]
0x75c: Push("@GetEyesHeight")
0x75d: Push((int) 1)
0x75e: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x75f: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x760: @@ GetEyesHeight(Stack[-2])
0x761: Pop(0)
0x762: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x763: Push(CvectorIndex(Stack[-1], 1))
0x764: Stack[-1] = Stack[-3]
0x765: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x766: Push("head")
0x767: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x768: Pop(1)
0x769: Stack[-3] = (bool) 1
0x76a: GOTO 0x76c

0x76b: Stack[-3] = (bool) 0
0x76c: PushEmpty(string)
0x76d: Stack[-1] = Stack[-7]
0x76e: Call2 0xf85

0x76f: Pop(1)
0x770: Push("all")
0x771: @ PlayAnimation(Stack[-1], Stack[-7])
0x772: Pop(1)
0x773: @ WaitForAnimEnd()
0x774: Pop(0)
0x775: Push(Stack[-3])
0x776: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x777: @ StopAsync()
0x778: Pop(0)
0x779: Push("head")
0x77a: @ UnlookAsync(Stack[-1])
0x77b: Pop(1)
0x77c: Push("all")
0x77d: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x77e: Pop(1)
0x77f: @ RemoveEnvelope()
0x780: Pop(0)
0x781: Stack[-5] = 0
0x782: Return(); Pop(20)

0x783: PushEmpty()
0x784: @ RemoveRTEnvelope()
0x785: Pop(0)
0x786: @ SetDeathState()
0x787: Pop(0)
0x788: @ Stop()
0x789: Pop(0)
0x78a: @ StopAsync()
0x78b: Pop(0)
0x78c: @ StopSecondaryAnimation()
0x78d: Pop(0)
0x78e: PushEmpty(string)
0x78f: Stack[-1] = Stack[-2]
0x790: Call2 0xf85

0x791: Pop(1)
0x792: Push("all")
0x793: @ PlayAnimation(Stack[-1], Stack[-2])
0x794: Pop(1)
0x795: @ WaitForAnimEnd()
0x796: Pop(0)
0x797: Push("all")
0x798: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x799: Pop(1)
0x79a: @ RemoveEnvelope()
0x79b: Pop(0)
0x79c: Return(); Pop(0)

0x79d: PushEmpty()
0x79e: Return(); Pop(0)

0x79f: PushEmpty()
0x7a0: Return(); Pop(0)

0x7a1: PushEmpty()
0x7a2: Return(); Pop(0)

0x7a3: Push((bool) 1)
0x7a4: @ SensePlayerOnly(Stack[-1])
0x7a5: Pop(1)
0x7a6: PushEmpty()
0x7a7: Call2 0x1479

0x7a8: Pop(0)
0x7a9: PushEmpty()
0x7aa: Call2 0x7b2

0x7ab: Pop(0)
0x7ac: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7ad: PushEmpty()
0x7ae: Call2 0x8b7

0x7af: Pop(0)
0x7b0: GOTO 0x7ac

0x7b1: Return(); Pop(0)

0x7b2: PushEmpty(bool)
0x7b3: Call2 0xefa

0x7b4: Pop(0)
0x7b5: Pop(1); Push((bool) Stack[-1] == 0)
0x7b6: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b7: PushEmpty()
0x7b8: Call2 0x13b0

0x7b9: Pop(0)
0x7ba: Return(); Pop(0)

0x7bb: PushEmpty(int, int)
0x7bc: PushEmpty(int, object)
0x7bd: Stack[-1] = Stack[-5]
0x7be: Call2 0x13a7

0x7bf: Stack[-3] = Stack[-2]
0x7c0: Pop(2)
0x7c1: Push((int) 0)
0x7c2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7c3: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7c4: Push((int) 1)
0x7c5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7c6: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c7: PushEmpty()
0x7c8: Call2 0x876

0x7c9: Pop(0)
0x7ca: PushEmpty(object)
0x7cb: Stack[-1] = Stack[-4]
0x7cc: Call2 0x13aa

0x7cd: Pop(1)
0x7ce: Return(); Pop(2)

0x7cf: PushEmpty(int, int)
0x7d0: PushEmpty(object)
0x7d1: Stack[-1] = Stack[-4]
0x7d2: Call2 0x129b

0x7d3: Pop(1)
0x7d4: PushEmpty(int, object)
0x7d5: Stack[-1] = Stack[-5]
0x7d6: Call2 0x12ed

0x7d7: Stack[-3] = Stack[-2]
0x7d8: Pop(2)
0x7d9: Push((int) 0)
0x7da: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7db: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7dc: Push((int) 1)
0x7dd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7df: PushEmpty()
0x7e0: Call2 0x876

0x7e1: Pop(0)
0x7e2: PushEmpty(object)
0x7e3: Stack[-1] = Stack[-4]
0x7e4: Call2 0x12f7

0x7e5: Pop(1)
0x7e6: Return(); Pop(2)

0x7e7: PushEmpty(int, int)
0x7e8: PushEmpty(bool, object, object, bool)
0x7e9: Stack[-3] = Stack[-9]
0x7ea: Stack[-2] = Stack[-8]
0x7eb: Stack[-1] = Stack[-7]
0x7ec: Call2 0x14a8

0x7ed: Pop(3)
0x7ee: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7ef: PushEmpty(int, object, bool)
0x7f0: Stack[-2] = Stack[-8]
0x7f1: Stack[-1] = Stack[-6]
0x7f2: Call2 0x134a

0x7f3: Stack[-4] = Stack[-3]
0x7f4: Pop(3)
0x7f5: Push((int) 0)
0x7f6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7f7: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7f8: Push((int) 1)
0x7f9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7fa: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fb: PushEmpty()
0x7fc: Call2 0x876

0x7fd: Pop(0)
0x7fe: PushEmpty(object)
0x7ff: Stack[-1] = Stack[-6]
0x800: Call2 0x1351

0x801: Pop(1)
0x802: Return(); Pop(2)

0x803: PushEmpty(int, int)
0x804: PushEmpty(int, object)
0x805: Stack[-1] = Stack[-5]
0x806: Call2 0x1374

0x807: Stack[-3] = Stack[-2]
0x808: Pop(2)
0x809: Push((int) 0)
0x80a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x80c: Push((int) 1)
0x80d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x80e: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x80f: PushEmpty()
0x810: Call2 0x876

0x811: Pop(0)
0x812: PushEmpty(object)
0x813: Stack[-1] = Stack[-4]
0x814: Call2 0x1377

0x815: Pop(1)
0x816: Return(); Pop(2)

0x817: PushEmpty(int, int)
0x818: PushEmpty(bool, object, string)
0x819: Stack[-2] = Stack[-7]
0x81a: Stack[-1] = Stack[-6]
0x81b: Call2 0x1245

0x81c: Pop(2)
0x81d: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x81e: PushEmpty()
0x81f: Call2 0x876

0x820: Pop(0)
0x821: PushEmpty(object, string)
0x822: Stack[-2] = Stack[-6]
0x823: Stack[-1] = Stack[-5]
0x824: Call2 0x1265

0x825: Pop(2)
0x826: GOTO 0x83b

0x827: PushEmpty(int, string, object)
0x828: Stack[-2] = Stack[-6]
0x829: Stack[-1] = Stack[-7]
0x82a: Call2 0x1379

0x82b: Stack[-4] = Stack[-3]
0x82c: Pop(3)
0x82d: Push((int) 0)
0x82e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x82f: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x830: Push((int) 1)
0x831: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x832: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x833: PushEmpty()
0x834: Call2 0x876

0x835: Pop(0)
0x836: PushEmpty(string, object)
0x837: Stack[-2] = Stack[-5]
0x838: Stack[-1] = Stack[-6]
0x839: Call2 0x1385

0x83a: Pop(2)
0x83b: Return(); Pop(2)

0x83c: PushEmpty()
0x83d: PushEmpty(bool, string)
0x83e: Stack[-1] = Stack[-3]
0x83f: Call2 0x12a8

0x840: Pop(1)
0x841: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x842: PushEmpty()
0x843: Call2 0x876

0x844: Pop(0)
0x845: PushEmpty(string)
0x846: Stack[-1] = Stack[-2]
0x847: Call2 0x12b8

0x848: Pop(1)
0x849: Return(); Pop(0)

0x84a: PushEmpty()
0x84b: PushEmpty(bool, object)
0x84c: Stack[-1] = Stack[-3]
0x84d: Call2 0x127e

0x84e: Pop(1)
0x84f: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x850: PushEmpty()
0x851: Call2 0x876

0x852: Pop(0)
0x853: PushEmpty(object)
0x854: Stack[-1] = Stack[-2]
0x855: Call2 0x1295

0x856: Pop(1)
0x857: GOTO 0x85c

0x858: PushEmpty(object)
0x859: Stack[-1] = Stack[-2]
0x85a: Call2 0x88f

0x85b: Pop(1)
0x85c: Return(); Pop(0)

0x85d: PushEmpty()
0x85e: PushEmpty(object)
0x85f: Stack[-1] = Stack[-2]
0x860: Call2 0x88f

0x861: Pop(1)
0x862: Return(); Pop(0)

0x863: PushEmpty()
0x864: Push((int) 110)
0x865: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x866: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x867: Return(); Pop(0)

0x868: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x869: Push((int) 110)
0x86a: @ KillTimer(Stack[-1])
0x86b: Pop(1)
0x86c: @ ResetAAS()
0x86d: Pop(0)
0x86e: Return(); Pop(0)

0x86f: PushEmpty()
0x870: Call2 0x876

0x871: Pop(0)
0x872: PushEmpty()
0x873: Call2 0x13b0

0x874: Pop(0)
0x875: Return(); Pop(0)

0x876: Push((int) 110)
0x877: @ KillTimer(Stack[-1])
0x878: Pop(1)
0x879: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x87a: PushEmpty()
0x87b: Call2 0x8fe

0x87c: Pop(0)
0x87d: Return(); Pop(0)

0x87e: Push((int) 110)
0x87f: @ KillTimer(Stack[-1])
0x880: Pop(1)
0x881: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x882: PushEmpty()
0x883: Call2 0x905

0x884: Pop(0)
0x885: Return(); Pop(0)

0x886: PushEmpty()
0x887: PushEmpty()
0x888: Call2 0x876

0x889: Pop(0)
0x88a: PushEmpty(object)
0x88b: Stack[-1] = Stack[-2]
0x88c: Call2 0x122d

0x88d: Pop(1)
0x88e: Return(); Pop(0)

0x88f: PushEmpty(bool, int, bool, int)
0x890: PushEmpty(bool, object)
0x891: Stack[-1] = Stack[-7]
0x892: Call2 0xe59

0x893: Pop(1)
0x894: Pop(1); Push((bool) Stack[-1] == 0)
0x895: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x896: Return(); Pop(4)

0x897: Push( Stack[2 + Tasks[-1].StackPointer] )
0x898: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x899: Return(); Pop(4)

0x89a: @ IsPlayerActor(Stack[-5], Stack[-2])
0x89b: Pop(0)
0x89c: Pop(0); Push((bool) Stack[-2] == 0)
0x89d: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x89e: Return(); Pop(4)

0x89f: PushEmpty(int, object)
0x8a0: Stack[-1] = Stack[-7]
0x8a1: Call2 0x12dd

0x8a2: Stack[-3] = Stack[-2]
0x8a3: Pop(2)
0x8a4: Push((int) 0)
0x8a5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8a7: Push((int) 1)
0x8a8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8a9: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8aa: PushEmpty()
0x8ab: Call2 0x87e

0x8ac: Pop(0)
0x8ad: PushEmpty(object)
0x8ae: Stack[-1] = Stack[-6]
0x8af: Call2 0x12e7

0x8b0: Pop(1)
0x8b1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8b2: Push((int) 110)
0x8b3: Push((float)10.0)
0x8b4: @ SetTimer(Stack[-2], Stack[-1])
0x8b5: Pop(2)
0x8b6: Return(); Pop(4)

0x8b7: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x8b8: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8b9: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x8ba: Push((float)0.5)
0x8bb: @ rand(Stack[-7], Stack[-1])
0x8bc: Pop(1)
0x8bd: @ Sleep(Stack[-6])
0x8be: Pop(0)
0x8bf: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x8c0: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8c1: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x8c2: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8c3: @ GetPosition(Stack[-4])
0x8c4: Pop(0)
0x8c5: PushEmpty(float)
0x8c6: Call2 0x8f2

0x8c7: Pop(0)
0x8c8: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x8c9: Pop(1)
0x8ca: Push(Stack[-3])
0x8cb: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8cc: GOTO 0x8d1

0x8cd: Push((int) 1)
0x8ce: @ Sleep(Stack[-1])
0x8cf: Pop(1)
0x8d0: GOTO 0x8c3

0x8d1: GOTO 0x8d3

0x8d2: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x8d3: PushEmpty(object, cvector)
0x8d4: Stack[-1] = Stack[-7]
0x8d5: Call2 0x90e

0x8d6: Stack[-4] = Stack[-2]
0x8d7: Pop(2)
0x8d8: Pop(0); Push(( Stack[-2] != 0 )
0x8d9: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8da: @ RotatePath(Stack[-2], Stack[-1])
0x8db: Pop(0)
0x8dc: Push(Stack[-1])
0x8dd: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8de: PushEmpty(bool)
0x8df: Call2 0x90c

0x8e0: Pop(0)
0x8e1: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x8e2: Pop(1)
0x8e3: Stack[-2] = 0
0x8e4: Push(Stack[-1])
0x8e5: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8e6: PushEmpty()
0x8e7: Push(-0, 0); TaskCall(4)
0x8e8: Call2 0x9b8

0x8e9: Pop(-0, 0); TaskReturn
0x8ea: Pop(0)
0x8eb: GOTO 0x8ef

0x8ec: Push((int) 1)
0x8ed: @ Sleep(Stack[-1])
0x8ee: Pop(1)
0x8ef: Stack[-2] = 0
0x8f0: GOTO 0x8bf

0x8f1: Return(); Pop(12)

0x8f2: PushEmpty(float, float)
0x8f3: @ GetCameraFarDistance(Stack[-1])
0x8f4: Pop(0)
0x8f5: Stack[-3] = Stack[-1]
0x8f6: Return(); Pop(2)

0x8f7: PushEmpty()
0x8f8: @ RequestClearPath(Stack[-1])
0x8f9: Pop(0)
0x8fa: Return(); Pop(0)

0x8fb: @ Stop()
0x8fc: Pop(0)
0x8fd: Return(); Pop(0)

0x8fe: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x8ff: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x900: @ Stop()
0x901: Pop(0)
0x902: @ StopGroup0()
0x903: Pop(0)
0x904: Return(); Pop(0)

0x905: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x906: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x907: @ Stop()
0x908: Pop(0)
0x909: @ StopGroup0()
0x90a: Pop(0)
0x90b: Return(); Pop(0)

0x90c: Stack[-1] = (bool) 0
0x90d: Return(); Pop(0)

0x90e: PushEmpty(object, object)
0x90f: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x910: Pop(0)
0x911: Stack[-4] = Stack[-1]
0x912: Return(); Pop(2)

0x913: Stack[-1] = 0
0x914: PushEmpty(int, int)
0x915: PushEmpty(int, object)
0x916: Stack[-1] = Stack[-5]
0x917: Call2 0x13a7

0x918: Stack[-3] = Stack[-2]
0x919: Pop(2)
0x91a: Push((int) 0)
0x91b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x91d: Push((int) 1)
0x91e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x91f: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x920: PushEmpty()
0x921: Call2 0xa09

0x922: Pop(0)
0x923: PushEmpty(object)
0x924: Stack[-1] = Stack[-4]
0x925: Call2 0x13aa

0x926: Pop(1)
0x927: Return(); Pop(2)

0x928: PushEmpty(int, int)
0x929: PushEmpty(object)
0x92a: Stack[-1] = Stack[-4]
0x92b: Call2 0x129b

0x92c: Pop(1)
0x92d: PushEmpty(int, object)
0x92e: Stack[-1] = Stack[-5]
0x92f: Call2 0x12ed

0x930: Stack[-3] = Stack[-2]
0x931: Pop(2)
0x932: Push((int) 0)
0x933: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x935: Push((int) 1)
0x936: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x937: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x938: PushEmpty()
0x939: Call2 0xa09

0x93a: Pop(0)
0x93b: PushEmpty(object)
0x93c: Stack[-1] = Stack[-4]
0x93d: Call2 0x12f7

0x93e: Pop(1)
0x93f: Return(); Pop(2)

0x940: PushEmpty(int, int)
0x941: PushEmpty(bool, object, object, bool)
0x942: Stack[-3] = Stack[-9]
0x943: Stack[-2] = Stack[-8]
0x944: Stack[-1] = Stack[-7]
0x945: Call2 0x14a8

0x946: Pop(3)
0x947: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x948: PushEmpty(int, object, bool)
0x949: Stack[-2] = Stack[-8]
0x94a: Stack[-1] = Stack[-6]
0x94b: Call2 0x134a

0x94c: Stack[-4] = Stack[-3]
0x94d: Pop(3)
0x94e: Push((int) 0)
0x94f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x950: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x951: Push((int) 1)
0x952: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x953: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x954: PushEmpty()
0x955: Call2 0xa09

0x956: Pop(0)
0x957: PushEmpty(object)
0x958: Stack[-1] = Stack[-6]
0x959: Call2 0x1351

0x95a: Pop(1)
0x95b: Return(); Pop(2)

0x95c: PushEmpty(int, int)
0x95d: PushEmpty(int, object)
0x95e: Stack[-1] = Stack[-5]
0x95f: Call2 0x1374

0x960: Stack[-3] = Stack[-2]
0x961: Pop(2)
0x962: Push((int) 0)
0x963: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x964: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x965: Push((int) 1)
0x966: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x967: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x968: PushEmpty()
0x969: Call2 0xa09

0x96a: Pop(0)
0x96b: PushEmpty(object)
0x96c: Stack[-1] = Stack[-4]
0x96d: Call2 0x1377

0x96e: Pop(1)
0x96f: Return(); Pop(2)

0x970: PushEmpty(int, int)
0x971: PushEmpty(bool, object, string)
0x972: Stack[-2] = Stack[-7]
0x973: Stack[-1] = Stack[-6]
0x974: Call2 0x1245

0x975: Pop(2)
0x976: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x977: PushEmpty()
0x978: Call2 0xa09

0x979: Pop(0)
0x97a: PushEmpty(object, string)
0x97b: Stack[-2] = Stack[-6]
0x97c: Stack[-1] = Stack[-5]
0x97d: Call2 0x1265

0x97e: Pop(2)
0x97f: GOTO 0x994

0x980: PushEmpty(int, string, object)
0x981: Stack[-2] = Stack[-6]
0x982: Stack[-1] = Stack[-7]
0x983: Call2 0x1379

0x984: Stack[-4] = Stack[-3]
0x985: Pop(3)
0x986: Push((int) 0)
0x987: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x988: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x989: Push((int) 1)
0x98a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x98b: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x98c: PushEmpty()
0x98d: Call2 0xa09

0x98e: Pop(0)
0x98f: PushEmpty(string, object)
0x990: Stack[-2] = Stack[-5]
0x991: Stack[-1] = Stack[-6]
0x992: Call2 0x1385

0x993: Pop(2)
0x994: Return(); Pop(2)

0x995: PushEmpty()
0x996: PushEmpty(bool, string)
0x997: Stack[-1] = Stack[-3]
0x998: Call2 0x12a8

0x999: Pop(1)
0x99a: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x99b: PushEmpty()
0x99c: Call2 0xa09

0x99d: Pop(0)
0x99e: PushEmpty(string)
0x99f: Stack[-1] = Stack[-2]
0x9a0: Call2 0x12b8

0x9a1: Pop(1)
0x9a2: Return(); Pop(0)

0x9a3: PushEmpty()
0x9a4: Call2 0xa09

0x9a5: Pop(0)
0x9a6: PushEmpty()
0x9a7: Call2 0x13b0

0x9a8: Pop(0)
0x9a9: Return(); Pop(0)

0x9aa: PushEmpty()
0x9ab: PushEmpty(bool, object)
0x9ac: Stack[-1] = Stack[-3]
0x9ad: Call2 0x127e

0x9ae: Pop(1)
0x9af: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b0: PushEmpty()
0x9b1: Call2 0xa09

0x9b2: Pop(0)
0x9b3: PushEmpty(object)
0x9b4: Stack[-1] = Stack[-2]
0x9b5: Call2 0x1295

0x9b6: Pop(1)
0x9b7: Return(); Pop(0)

0x9b8: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x9b9: @ WaitForAnimEnd()
0x9ba: Pop(0)
0x9bb: PushEmpty(bool)
0x9bc: Call2 0xefa

0x9bd: Pop(0)
0x9be: Pop(1); Push((bool) Stack[-1] == 0)
0x9bf: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9c0: Return(); Pop(14)

0x9c1: PushEmpty(int)
0x9c2: Call2 0x12cc

0x9c3: Stack[-8] = Stack[-1]
0x9c4: Pop(1)
0x9c5: Stack[-6] = (int) 0
0x9c6: PushEmpty(bool)
0x9c7: Stack[-1] = (bool) 0
0x9c8: Push((int) 5)
0x9c9: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x9ca: IF (Stack[-1] == 0) GOTO 0x9d0; Pop(1)

0x9cb: PushEmpty(bool)
0x9cc: Call2 0xefa

0x9cd: Pop(0)
0x9ce: IF (Stack[-1] == 0) GOTO 0x9d0; Pop(1)

0x9cf: Stack[-1] = (bool) 1
0x9d0: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0x9d1: Push((int) 3)
0x9d2: @ irand(Stack[-6], Stack[-1])
0x9d3: Pop(1)
0x9d4: Push((int) 0)
0x9d5: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x9d6: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9d7: Push(Stack[-7])
0x9d8: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9d9: @ irand(Stack[-4], Stack[-7])
0x9da: Pop(0)
0x9db: Push("all")
0x9dc: PushEmpty(string, int)
0x9dd: Stack[-1] = Stack[-7]
0x9de: Call2 0x12c5

0x9df: Pop(1)
0x9e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e1: Pop(2)
0x9e2: @ WaitForAnimEnd(Stack[-3])
0x9e3: Pop(0)
0x9e4: Pop(0); Push((bool) Stack[-3] == 0)
0x9e5: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e6: GOTO 0xa04

0x9e7: GOTO 0x9f9

0x9e8: Push((int) 1)
0x9e9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x9ea: IF (Stack[-1] == 0) GOTO 0x9f6; Pop(1)

0x9eb: Push((int) 4)
0x9ec: @ rand(Stack[-3], Stack[-1])
0x9ed: Pop(1)
0x9ee: Push((int) 1)
0x9ef: Pop(1); Push(Stack[-3] + Stack[-1]);
0x9f0: @ Sleep(Stack[-1], Stack[-2])
0x9f1: Pop(1)
0x9f2: Pop(0); Push((bool) Stack[-1] == 0)
0x9f3: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f4: GOTO 0xa04

0x9f5: GOTO 0x9f9

0x9f6: Push(Stack[-6])
0x9f7: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f8: GOTO 0xa04

0x9f9: PushEmpty(bool)
0x9fa: Call2 0xa07

0x9fb: Pop(0)
0x9fc: Pop(1); Push((bool) Stack[-1] == 0)
0x9fd: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9fe: GOTO 0xa04

0x9ff: @ ResetAAS()
0xa00: Pop(0)
0xa01: Push((int) 1)
0xa02: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xa03: GOTO 0x9c6

0xa04: @ ResetAAS()
0xa05: Pop(0)
0xa06: Return(); Pop(14)

0xa07: Stack[-1] = (bool) 1
0xa08: Return(); Pop(0)

0xa09: @ StopAnimation()
0xa0a: Pop(0)
0xa0b: @ StopGroup0()
0xa0c: Pop(0)
0xa0d: Return(); Pop(0)

0xa0e: PushEmpty()
0xa0f: PushEmpty(object, bool, float)
0xa10: Stack[-3] = Stack[-4]
0xa11: Stack[-2] = (bool) 1
0xa12: Stack[-1] = (float) 180.0
0xa13: Call2 0xa1c

0xa14: Pop(3)
0xa15: Return(); Pop(0)

0xa16: PushEmpty()
0xa17: Stack[-3] = (float) 0.05
0xa18: Return(); Pop(0)

0xa19: PushEmpty()
0xa1a: Stack[-3] = (int) 0
0xa1b: Return(); Pop(0)

0xa1c: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xa1d: PushEmpty()
0xa1e: Call2 0xb01

0xa1f: Pop(0)
0xa20: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xa21: Push("@GetAttackDistance")
0xa22: Push((int) 1)
0xa23: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xa24: IF (Stack[-1] == 0) GOTO 0xa2a; Pop(1)

0xa25: @@ GetAttackDistance(Stack[-11])
0xa26: Pop(0)
0xa27: Push((int) 50)
0xa28: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xa29: GOTO 0xa2b

0xa2a: Stack[-11] = Stack[-23]
0xa2b: Push((int) 150)
0xa2c: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xa2d: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa2e: Stack[-11] = (int) 150
0xa2f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa30: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xa31: @ IsPlayerActor(Stack[-0], Stack[-8])
0xa32: Pop(0)
0xa33: Push(Stack[-8])
0xa34: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa35: Push("attack")
0xa36: @ PlayGlobalMusic(Stack[-1])
0xa37: Pop(1)
0xa38: PushEmpty(object)
0xa39: Call2 0xfae

0xa3a: Pop(0)
0xa3b: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xa3c: Pop(1)
0xa3d: Push(Stack[-24])
0xa3e: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa3f: Stack[-7] = (bool) 0
0xa40: GOTO 0xa42

0xa41: Stack[-7] = (bool) 1
0xa42: Push((float)400.0)
0xa43: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xa44: PushEmpty(bool)
0xa45: Stack[-1] = (bool) 0
0xa46: PushEmpty(bool, object)
0xa47: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa48: Call2 0xe59

0xa49: Pop(1)
0xa4a: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4b: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xa4c: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4d: Stack[-1] = (bool) 1
0xa4e: IF (Stack[-1] == 0) GOTO 0xaf0; Pop(1)

0xa4f: PushEmpty()
0xa50: Call2 0xc9e

0xa51: Pop(0)
0xa52: @@ GetPFPosition(Stack[-10])
0xa53: Pop(0)
0xa54: @ GetPFPosition(Stack[-9])
0xa55: Pop(0)
0xa56: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xa57: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xa58: Pop(0); Push(Stack[-6] * Stack[-6]);
0xa59: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xa5a: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa5b: PushEmpty(bool, object, float, float, bool, bool)
0xa5c: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xa5d: Stack[-4] = Stack[-17]
0xa5e: Stack[-3] = (float) 3000.0
0xa5f: Stack[-2] = (bool) 1
0xa60: Stack[-1] = (bool) 0
0xa61: Push(-6, 3); TaskCall(6)
0xa62: Call2 0xcb9

0xa63: Pop(-6, 3); TaskReturn
0xa64: Pop(5)
0xa65: Pop(1); Push((bool) Stack[-1] == 0)
0xa66: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa67: GOTO 0xaf0

0xa68: Stack[-7] = (bool) 0
0xa69: GOTO 0xaef

0xa6a: Pop(0); Push(Stack[-23] * Stack[-23]);
0xa6b: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xa6c: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xa6d: @@ GetPFPosition(Stack[-3])
0xa6e: Pop(0)
0xa6f: @ CanReachByPF(Stack[-2], Stack[-3])
0xa70: Pop(0)
0xa71: Pop(0); Push((bool) Stack[-2] == 0)
0xa72: IF (Stack[-1] == 0) GOTO 0xa82; Pop(1)

0xa73: PushEmpty(bool, object, float, float, bool, bool)
0xa74: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xa75: Stack[-4] = Stack[-17]
0xa76: Stack[-3] = (float) 3000.0
0xa77: Stack[-2] = (bool) 1
0xa78: Stack[-1] = (bool) 0
0xa79: Push(-6, 3); TaskCall(6)
0xa7a: Call2 0xcb9

0xa7b: Pop(-6, 3); TaskReturn
0xa7c: Pop(5)
0xa7d: Pop(1); Push((bool) Stack[-1] == 0)
0xa7e: IF (Stack[-1] == 0) GOTO 0xa80; Pop(1)

0xa7f: GOTO 0xaf0

0xa80: Stack[-7] = (bool) 0
0xa81: GOTO 0xa44

0xa82: Pop(0); Push((bool) Stack[-7] == 0)
0xa83: IF (Stack[-1] == 0) GOTO 0xa9b; Pop(1)

0xa84: PushEmpty(object)
0xa85: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa86: Call2 0xeef

0xa87: Pop(1)
0xa88: Push("all")
0xa89: Push("attack_on")
0xa8a: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8b: Pop(2)
0xa8c: @ WaitForAnimEnd()
0xa8d: Pop(0)
0xa8e: PushEmpty()
0xa8f: Call2 0xc9e

0xa90: Pop(0)
0xa91: @ StopAsync()
0xa92: Pop(0)
0xa93: Stack[-7] = (bool) 1
0xa94: PushEmpty(bool, object)
0xa95: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa96: Call2 0xe59

0xa97: Pop(1)
0xa98: Pop(1); Push((bool) Stack[-1] == 0)
0xa99: IF (Stack[-1] == 0) GOTO 0xa9b; Pop(1)

0xa9a: GOTO 0xaf0

0xa9b: @ rand(Stack[-1])
0xa9c: Pop(0)
0xa9d: PushEmpty(bool)
0xa9e: Stack[-1] = (bool) 1
0xa9f: Push((float)0.25)
0xaa0: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xaa1: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xaa2: PushEmpty(bool)
0xaa3: Call2 0xc73

0xaa4: Pop(0)
0xaa5: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xaa6: Stack[-1] = (bool) 0
0xaa7: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xaa8: @ Face(Stack[-0])
0xaa9: Pop(0)
0xaaa: PushEmpty()
0xaab: Call2 0xca5

0xaac: Pop(0)
0xaad: Push("all")
0xaae: Push("attack_stay")
0xaaf: @ PlayAnimation(Stack[-2], Stack[-1])
0xab0: Pop(2)
0xab1: PushEmpty(bool, float)
0xab2: Stack[-1] = Stack[-25]
0xab3: Call2 0xbef

0xab4: Pop(2)
0xab5: @ StopAsync()
0xab6: Pop(0)
0xab7: GOTO 0xae6

0xab8: @ Face(Stack[-0])
0xab9: Pop(0)
0xaba: Push("all")
0xabb: Push("fjump")
0xabc: @ PlayAnimation(Stack[-2], Stack[-1])
0xabd: Pop(2)
0xabe: @ WaitForAnimEnd()
0xabf: Pop(0)
0xac0: PushEmpty()
0xac1: Call2 0xc9e

0xac2: Pop(0)
0xac3: Push(CVector(0.0, 0.0, 0.0))
0xac4: @ SetSpeed(Stack[-1])
0xac5: Pop(1)
0xac6: @ Stop()
0xac7: Pop(0)
0xac8: @ StopAsync()
0xac9: Pop(0)
0xaca: PushEmpty(bool)
0xacb: Call2 0xc73

0xacc: Pop(0)
0xacd: Pop(1); Push((bool) Stack[-1] == 0)
0xace: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xacf: PushEmpty(bool, object)
0xad0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xad1: Call2 0xe59

0xad2: Pop(1)
0xad3: Pop(1); Push((bool) Stack[-1] == 0)
0xad4: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xad5: GOTO 0xaf0

0xad6: @@ GetPFPosition(Stack[-10])
0xad7: Pop(0)
0xad8: @ GetPFPosition(Stack[-9])
0xad9: Pop(0)
0xada: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xadb: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xadc: Pop(0); Push(Stack[-23] * Stack[-23]);
0xadd: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xade: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xadf: PushEmpty(bool, float)
0xae0: Stack[-1] = Stack[-25]
0xae1: Call2 0xb4b

0xae2: Pop(1)
0xae3: Pop(1); Push((bool) Stack[-1] == 0)
0xae4: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xae5: GOTO 0xaf0

0xae6: GOTO 0xaef

0xae7: PushEmpty(bool, float)
0xae8: Stack[-1] = Stack[-25]
0xae9: Call2 0xb4b

0xaea: Pop(1)
0xaeb: Pop(1); Push((bool) Stack[-1] == 0)
0xaec: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xaed: GOTO 0xaf0

0xaee: Stack[-7] = (bool) 1
0xaef: GOTO 0xa44

0xaf0: @ WaitForAnimEnd()
0xaf1: Pop(0)
0xaf2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaf3: IF (Stack[-1] == 0) GOTO 0xaf5; Pop(1)

0xaf4: Return(); Pop(22)

0xaf5: Push("all")
0xaf6: Push("attack_off")
0xaf7: @ PlayAnimation(Stack[-2], Stack[-1])
0xaf8: Pop(2)
0xaf9: @ WaitForAnimEnd()
0xafa: Pop(0)
0xafb: Push(Stack[-8])
0xafc: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xafd: Push((float)2.0)
0xafe: @ Sleep(Stack[-1])
0xaff: Pop(1)
0xb00: Return(); Pop(22)

0xb01: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0xb02: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xb03: Push("all")
0xb04: Push("attack_begin")
0xb05: Push((int) 1)
0xb06: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0xb07: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb08: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xb09: Pop(2)
0xb0a: Pop(0); Push((bool) Stack[-3] == 0)
0xb0b: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb0c: GOTO 0xb10

0xb0d: Push((int) 1)
0xb0e: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xb0f: GOTO 0xb03

0xb10: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xb11: Push("attack")
0xb12: Push((int) 1)
0xb13: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xb14: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb15: @ IsExisting3DSound(Stack[-3], Stack[-1])
0xb16: Pop(1)
0xb17: Pop(0); Push((bool) Stack[-2] == 0)
0xb18: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb19: GOTO 0xb1d

0xb1a: Push((int) 1)
0xb1b: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xb1c: GOTO 0xb11

0xb1d: Push("all")
0xb1e: Push("bjump")
0xb1f: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xb20: Pop(2)
0xb21: Push(CvectorIndex(Stack[-1], 2))
0xb22: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0xb23: Return(); Pop(6)

0xb24: PushEmpty(object, float, float, object, float, float)
0xb25: Push((float)0.9)
0xb26: Pop(1); Push(Stack[-9] * Stack[-1]);
0xb27: @ GetVictim(Stack[-1], Stack[-4])
0xb28: Pop(1)
0xb29: @ ReportAttack(Stack[-0])
0xb2a: Pop(0)
0xb2b: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xb2c: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb2d: PushEmpty(float, object, int)
0xb2e: Stack[-2] = Stack[-6]
0xb2f: Stack[-1] = Stack[-10]
0xb30: Call2 0xa16

0xb31: Stack[-5] = Stack[-3]
0xb32: Pop(3)
0xb33: PushEmpty(float, object, float, int)
0xb34: Stack[-3] = Stack[-7]
0xb35: Stack[-2] = Stack[-6]
0xb36: PushEmpty(int, object, int)
0xb37: Stack[-2] = Stack[-10]
0xb38: Stack[-1] = Stack[-14]
0xb39: Call2 0xa19

0xb3a: Stack[-4] = Stack[-3]
0xb3b: Pop(3)
0xb3c: Call2 0xde7

0xb3d: Stack[-5] = Stack[-4]
0xb3e: Pop(4)
0xb3f: PushEmpty(int)
0xb40: Call2 0xca3

0xb41: Pop(0)
0xb42: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0xb43: Pop(1)
0xb44: PushEmpty(object, float)
0xb45: Stack[-2] = Stack[-5]
0xb46: Stack[-1] = Stack[-3]
0xb47: Call2 0xcaa

0xb48: Pop(2)
0xb49: Return(); Pop(6)

0xb4a: Stack[-3] = 0
0xb4b: PushEmpty(int, bool, int, string, int, bool, int, string)
0xb4c: PushEmpty()
0xb4d: Call2 0xc9e

0xb4e: Pop(0)
0xb4f: @ irand(Stack[-4], Stack[-1])
0xb50: Pop(0)
0xb51: Push((int) 1)
0xb52: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb53: @ Face(Stack[-0])
0xb54: Pop(0)
0xb55: Push((bool) 1)
0xb56: @ SetAttackState(Stack[-1])
0xb57: Pop(1)
0xb58: PushEmpty()
0xb59: Call2 0xff7

0xb5a: Pop(0)
0xb5b: Push("all")
0xb5c: Push("attack_begin")
0xb5d: Pop(1); Push(Stack[-1] + Stack[-6]);
0xb5e: @ PlayAnimation(Stack[-2], Stack[-1])
0xb5f: Pop(2)
0xb60: @ WaitForAnimEnd()
0xb61: Pop(0)
0xb62: PushEmpty()
0xb63: Call2 0xc7e

0xb64: Pop(0)
0xb65: PushEmpty(bool, object)
0xb66: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb67: Call2 0xe59

0xb68: Pop(1)
0xb69: Pop(1); Push((bool) Stack[-1] == 0)
0xb6a: IF (Stack[-1] == 0) GOTO 0xb6f; Pop(1)

0xb6b: @ StopAsync()
0xb6c: Pop(0)
0xb6d: Stack[-10] = (bool) 0
0xb6e: Return(); Pop(8)

0xb6f: PushEmpty(float, int)
0xb70: Stack[-2] = Stack[-11]
0xb71: Stack[-1] = Stack[-6]
0xb72: Call2 0xb24

0xb73: Pop(2)
0xb74: Push("all")
0xb75: Push("attack_middle")
0xb76: Pop(1); Push(Stack[-1] + Stack[-6]);
0xb77: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xb78: Pop(2)
0xb79: Push(Stack[-3])
0xb7a: IF (Stack[-1] == 0) GOTO 0xbc0; Pop(1)

0xb7b: PushEmpty()
0xb7c: Call2 0xff7

0xb7d: Pop(0)
0xb7e: Push("all")
0xb7f: Push("attack_middle")
0xb80: Pop(1); Push(Stack[-1] + Stack[-6]);
0xb81: @ PlayAnimation(Stack[-2], Stack[-1])
0xb82: Pop(2)
0xb83: @ WaitForAnimEnd()
0xb84: Pop(0)
0xb85: PushEmpty()
0xb86: Call2 0xc9e

0xb87: Pop(0)
0xb88: PushEmpty(bool, object)
0xb89: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8a: Call2 0xe59

0xb8b: Pop(1)
0xb8c: Pop(1); Push((bool) Stack[-1] == 0)
0xb8d: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb8e: @ StopAsync()
0xb8f: Pop(0)
0xb90: Stack[-10] = (bool) 0
0xb91: Return(); Pop(8)

0xb92: PushEmpty(float, int)
0xb93: Stack[-2] = Stack[-11]
0xb94: Stack[-1] = Stack[-6]
0xb95: Call2 0xb24

0xb96: Pop(2)
0xb97: Stack[-2] = (int) 1
0xb98: Push("attack_middle")
0xb99: Pop(1); Push(Stack[-1] + Stack[-5]);
0xb9a: Push("_")
0xb9b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb9c: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0xb9d: Push("all")
0xb9e: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0xb9f: Pop(1)
0xba0: Pop(0); Push((bool) Stack[-3] == 0)
0xba1: IF (Stack[-1] == 0) GOTO 0xba3; Pop(1)

0xba2: GOTO 0xbc0

0xba3: PushEmpty()
0xba4: Call2 0xff7

0xba5: Pop(0)
0xba6: Push("all")
0xba7: @ PlayAnimation(Stack[-1], Stack[-2])
0xba8: Pop(1)
0xba9: @ WaitForAnimEnd()
0xbaa: Pop(0)
0xbab: PushEmpty()
0xbac: Call2 0xc9e

0xbad: Pop(0)
0xbae: PushEmpty(bool, object)
0xbaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb0: Call2 0xe59

0xbb1: Pop(1)
0xbb2: Pop(1); Push((bool) Stack[-1] == 0)
0xbb3: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xbb4: @ StopAsync()
0xbb5: Pop(0)
0xbb6: Stack[-10] = (bool) 0
0xbb7: Return(); Pop(8)

0xbb8: PushEmpty(float, int)
0xbb9: Stack[-2] = Stack[-11]
0xbba: Stack[-1] = Stack[-6]
0xbbb: Call2 0xb24

0xbbc: Pop(2)
0xbbd: Push((int) 1)
0xbbe: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xbbf: GOTO 0xb98

0xbc0: Push((bool) 0)
0xbc1: @ SetAttackState(Stack[-1])
0xbc2: Pop(1)
0xbc3: Push("all")
0xbc4: Push("attack_end")
0xbc5: Pop(1); Push(Stack[-1] + Stack[-6]);
0xbc6: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc7: Pop(2)
0xbc8: PushEmpty(bool)
0xbc9: Call2 0xcac

0xbca: Pop(0)
0xbcb: IF (Stack[-1] == 0) GOTO 0xbd2; Pop(1)

0xbcc: PushEmpty(bool, float)
0xbcd: Stack[-1] = (float) 0.75
0xbce: Call2 0xbd4

0xbcf: Pop(2)
0xbd0: @ StopAsync()
0xbd1: Pop(0)
0xbd2: Stack[-10] = (bool) 1
0xbd3: Return(); Pop(8)

0xbd4: PushEmpty(float, bool, float, bool)
0xbd5: @ rand(Stack[-2])
0xbd6: Pop(0)
0xbd7: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0xbd8: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbd9: @ IsAnimationPlaying(Stack[-1])
0xbda: Pop(0)
0xbdb: Pop(0); Push((bool) Stack[-1] == 0)
0xbdc: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbdd: GOTO 0xbe7

0xbde: PushEmpty(bool)
0xbdf: Call2 0xc36

0xbe0: Pop(0)
0xbe1: IF (Stack[-1] == 0) GOTO 0xbe4; Pop(1)

0xbe2: Stack[-6] = (bool) 1
0xbe3: Return(); Pop(4)

0xbe4: @ sync()
0xbe5: Pop(0)
0xbe6: GOTO 0xbd9

0xbe7: GOTO 0xbed

0xbe8: @ WaitForAnimEnd()
0xbe9: Pop(0)
0xbea: PushEmpty()
0xbeb: Call2 0xc9e

0xbec: Pop(0)
0xbed: Stack[-6] = (bool) 0
0xbee: Return(); Pop(4)

0xbef: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0xbf0: @ IsAnimationPlaying(Stack[-5])
0xbf1: Pop(0)
0xbf2: Pop(0); Push((bool) Stack[-5] == 0)
0xbf3: IF (Stack[-1] == 0) GOTO 0xbf5; Pop(1)

0xbf4: GOTO 0xc15

0xbf5: PushEmpty(bool)
0xbf6: Call2 0xc36

0xbf7: Pop(0)
0xbf8: IF (Stack[-1] == 0) GOTO 0xbfb; Pop(1)

0xbf9: Stack[-12] = (bool) 1
0xbfa: Return(); Pop(10)

0xbfb: PushEmpty(bool, object)
0xbfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbfd: Call2 0xe59

0xbfe: Pop(1)
0xbff: Pop(1); Push((bool) Stack[-1] == 0)
0xc00: IF (Stack[-1] == 0) GOTO 0xc03; Pop(1)

0xc01: Stack[-12] = (bool) 0
0xc02: Return(); Pop(10)

0xc03: @@ GetPFPosition(Stack[-4])
0xc04: Pop(0)
0xc05: @ GetPFPosition(Stack[-3])
0xc06: Pop(0)
0xc07: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xc08: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xc09: Pop(0); Push(Stack[-11] * Stack[-11]);
0xc0a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc0b: IF (Stack[-1] == 0) GOTO 0xc12; Pop(1)

0xc0c: PushEmpty(bool, float)
0xc0d: Stack[-1] = Stack[-13]
0xc0e: Call2 0xb4b

0xc0f: Pop(2)
0xc10: Stack[-12] = (bool) 1
0xc11: Return(); Pop(10)

0xc12: @ sync()
0xc13: Pop(0)
0xc14: GOTO 0xbf0

0xc15: PushEmpty()
0xc16: Call2 0xc9e

0xc17: Pop(0)
0xc18: Stack[-12] = (bool) 0
0xc19: Return(); Pop(10)

0xc1a: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0xc1b: PushEmpty(bool, object)
0xc1c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1d: Call2 0xe59

0xc1e: Pop(1)
0xc1f: Pop(1); Push((bool) Stack[-1] == 0)
0xc20: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc21: Stack[-11] = (bool) 0
0xc22: Return(); Pop(10)

0xc23: PushEmpty(bool)
0xc24: Call2 0xc73

0xc25: Pop(0)
0xc26: IF (Stack[-1] == 0) GOTO 0xc34; Pop(1)

0xc27: @@ GetPFPosition(Stack[-5])
0xc28: Pop(0)
0xc29: @ GetPFPosition(Stack[-4])
0xc2a: Pop(0)
0xc2b: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xc2c: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xc2d: @@ GetAttackDistance(Stack[-1])
0xc2e: Pop(0)
0xc2f: Push((int) 50)
0xc30: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xc31: Pop(0); Push(Stack[-1] * Stack[-1]);
0xc32: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0xc33: Return(); Pop(10)

0xc34: Stack[-11] = (bool) 0
0xc35: Return(); Pop(10)

0xc36: PushEmpty(bool)
0xc37: Stack[-1] = (bool) 0
0xc38: PushEmpty(bool)
0xc39: Call2 0xc1a

0xc3a: Pop(0)
0xc3b: IF (Stack[-1] == 0) GOTO 0xc41; Pop(1)

0xc3c: PushEmpty(bool)
0xc3d: Call2 0xc46

0xc3e: Pop(0)
0xc3f: IF (Stack[-1] == 0) GOTO 0xc41; Pop(1)

0xc40: Stack[-1] = (bool) 1
0xc41: IF (Stack[-1] == 0) GOTO 0xc44; Pop(1)

0xc42: Stack[-1] = (bool) 1
0xc43: Return(); Pop(0)

0xc44: Stack[-1] = (bool) 0
0xc45: Return(); Pop(0)

0xc46: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0xc47: @ GetScene(Stack[-5])
0xc48: Pop(0)
0xc49: Stack[-4] = (bool) 0
0xc4a: PushEmpty(cvector, object)
0xc4b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4c: Call2 0xdc7

0xc4d: Pop(1)
0xc4e: Pop(1); Push(( -Stack[-1])
0xc4f: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0xc50: Pop(1)
0xc51: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0xc52: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc53: GOTO 0xc70

0xc54: @ Face(Stack[-0])
0xc55: Pop(0)
0xc56: Push("all")
0xc57: Push("bjump")
0xc58: @ PlayAnimation(Stack[-2], Stack[-1])
0xc59: Pop(2)
0xc5a: @@ GetPFPosition(Stack[-2])
0xc5b: Pop(0)
0xc5c: @ GetPFPosition(Stack[-1])
0xc5d: Pop(0)
0xc5e: @ WaitForAnimEnd()
0xc5f: Pop(0)
0xc60: PushEmpty()
0xc61: Call2 0xc9e

0xc62: Pop(0)
0xc63: @ StopAsync()
0xc64: Pop(0)
0xc65: Push(CVector(0.0, 0.0, 0.0))
0xc66: @ SetSpeed(Stack[-1])
0xc67: Pop(1)
0xc68: Stack[-4] = (bool) 1
0xc69: PushEmpty(bool)
0xc6a: Call2 0xc1a

0xc6b: Pop(0)
0xc6c: Pop(1); Push((bool) Stack[-1] == 0)
0xc6d: IF (Stack[-1] == 0) GOTO 0xc6f; Pop(1)

0xc6e: GOTO 0xc70

0xc6f: GOTO 0xc4a

0xc70: Stack[-11] = Stack[-4]
0xc71: Return(); Pop(10)

0xc72: Stack[-5] = 0
0xc73: PushEmpty(bool, bool)
0xc74: Push("IsAttacking")
0xc75: Push((int) 1)
0xc76: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0xc77: IF (Stack[-1] == 0) GOTO 0xc7c; Pop(1)

0xc78: @@ IsAttacking(Stack[-1])
0xc79: Pop(0)
0xc7a: Stack[-3] = Stack[-1]
0xc7b: Return(); Pop(2)

0xc7c: Stack[-3] = (bool) 0
0xc7d: Return(); Pop(2)

0xc7e: PushEmpty(float, int, float, int)
0xc7f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xc80: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc81: Return(); Pop(4)

0xc82: Push( Stack[5 + Tasks[-1].StackPointer] )
0xc83: IF (Stack[-1] == 0) GOTO 0xc8a; Pop(1)

0xc84: Push((int) -1)
0xc85: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xc86: Push((int) 0)
0xc87: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0xc88: IF (Stack[-1] == 0) GOTO 0xc8a; Pop(1)

0xc89: Return(); Pop(4)

0xc8a: @ rand(Stack[-2])
0xc8b: Pop(0)
0xc8c: PushEmpty(float)
0xc8d: Call2 0xcb0

0xc8e: Pop(0)
0xc8f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xc90: IF (Stack[-1] == 0) GOTO 0xc9d; Pop(1)

0xc91: @ irand(Stack[-1], Stack[-2])
0xc92: Pop(0)
0xc93: Push((int) 1)
0xc94: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xc95: Push("attack")
0xc96: Pop(1); Push(Stack[-1] + Stack[-2]);
0xc97: @ Speak(Stack[-1])
0xc98: Pop(1)
0xc99: PushEmpty(int)
0xc9a: Call2 0xcae

0xc9b: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0xc9c: Pop(1)
0xc9d: Return(); Pop(4)

0xc9e: PushEmpty(object)
0xc9f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca0: Call2 0xfee

0xca1: Pop(1)
0xca2: Return(); Pop(0)

0xca3: Stack[-1] = (int) 0
0xca4: Return(); Pop(0)

0xca5: PushEmpty(string)
0xca6: Stack[-1] = "attack_stay"
0xca7: Call2 0xf85

0xca8: Pop(1)
0xca9: Return(); Pop(0)

0xcaa: PushEmpty()
0xcab: Return(); Pop(0)

0xcac: Stack[-1] = (bool) 1
0xcad: Return(); Pop(0)

0xcae: Stack[-1] = (int) 1
0xcaf: Return(); Pop(0)

0xcb0: Stack[-1] = (float) 0.5
0xcb1: Return(); Pop(0)

0xcb2: PushEmpty()
0xcb3: Call2 0xcf8

0xcb4: Pop(0)
0xcb5: PushEmpty()
0xcb6: Call2 0x13b0

0xcb7: Pop(0)
0xcb8: Return(); Pop(0)

0xcb9: PushEmpty(bool, bool, bool, bool)
0xcba: PushEmpty(object)
0xcbb: Stack[-1] = Stack[-10]
0xcbc: Call2 0xfee

0xcbd: Pop(1)
0xcbe: Push((int) 1)
0xcbf: Push((int) 5)
0xcc0: @ SetTimer(Stack[-2], Stack[-1])
0xcc1: Pop(2)
0xcc2: @ CanSee(Stack[-2], Stack[-9])
0xcc3: Pop(0)
0xcc4: Push(Stack[-2])
0xcc5: IF (Stack[-1] == 0) GOTO 0xccc; Pop(1)

0xcc6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xcc7: PushEmpty(object)
0xcc8: Stack[-1] = Stack[-10]
0xcc9: Call2 0xf73

0xcca: Pop(1)
0xccb: GOTO 0xccd

0xccc: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xccd: PushEmpty(bool, object)
0xcce: Stack[-1] = Stack[-11]
0xccf: Call2 0xdd6

0xcd0: Pop(1)
0xcd1: IF (Stack[-1] == 0) GOTO 0xcd7; Pop(1)

0xcd2: PushEmpty(object)
0xcd3: Call2 0xfae

0xcd4: Pop(0)
0xcd5: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0xcd6: Pop(1)
0xcd7: PushEmpty(bool, object, float, float, bool, bool)
0xcd8: Stack[-5] = Stack[-15]
0xcd9: Stack[-4] = Stack[-14]
0xcda: Stack[-3] = Stack[-13]
0xcdb: Stack[-2] = Stack[-12]
0xcdc: Stack[-1] = Stack[-11]
0xcdd: Call2 0xd22

0xcde: Stack[-7] = Stack[-6]
0xcdf: Pop(6)
0xce0: Push( Stack[2 + Tasks[-1].StackPointer] )
0xce1: IF (Stack[-1] == 0) GOTO 0xce5; Pop(1)

0xce2: Push("head")
0xce3: @ UnlookAsync(Stack[-1])
0xce4: Pop(1)
0xce5: Push((int) 1)
0xce6: @ KillTimer(Stack[-1])
0xce7: Pop(1)
0xce8: Stack[-10] = Stack[-1]
0xce9: Return(); Pop(4)

0xcea: PushEmpty()
0xceb: Push((int) 1)
0xcec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xced: IF (Stack[-1] == 0) GOTO 0xcf3; Pop(1)

0xcee: PushEmpty(object)
0xcef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf0: Call2 0xfee

0xcf1: Pop(1)
0xcf2: GOTO 0xcf7

0xcf3: PushEmpty(int)
0xcf4: Stack[-1] = Stack[-2]
0xcf5: Call2 0xd88

0xcf6: Pop(1)
0xcf7: Return(); Pop(0)

0xcf8: Push((int) 1)
0xcf9: @ KillTimer(Stack[-1])
0xcfa: Pop(1)
0xcfb: Push( Stack[2 + Tasks[-1].StackPointer] )
0xcfc: IF (Stack[-1] == 0) GOTO 0xd01; Pop(1)

0xcfd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xcfe: Push("head")
0xcff: @ UnlookAsync(Stack[-1])
0xd00: Pop(1)
0xd01: PushEmpty()
0xd02: Call2 0xd9e

0xd03: Pop(0)
0xd04: Return(); Pop(0)

0xd05: PushEmpty()
0xd06: PushEmpty(bool)
0xd07: Stack[-1] = (bool) 0
0xd08: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xd09: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd0a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xd0b: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd0c: Stack[-1] = (bool) 1
0xd0d: IF (Stack[-1] == 0) GOTO 0xd13; Pop(1)

0xd0e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd0f: PushEmpty(object)
0xd10: Stack[-1] = Stack[-2]
0xd11: Call2 0xf73

0xd12: Pop(1)
0xd13: Return(); Pop(0)

0xd14: PushEmpty()
0xd15: PushEmpty(bool)
0xd16: Stack[-1] = (bool) 0
0xd17: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xd18: IF (Stack[-1] == 0) GOTO 0xd1c; Pop(1)

0xd19: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd1a: IF (Stack[-1] == 0) GOTO 0xd1c; Pop(1)

0xd1b: Stack[-1] = (bool) 1
0xd1c: IF (Stack[-1] == 0) GOTO 0xd21; Pop(1)

0xd1d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd1e: Push("head")
0xd1f: @ UnlookAsync(Stack[-1])
0xd20: Pop(1)
0xd21: Return(); Pop(0)

0xd22: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0xd23: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xd24: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0xd25: Stack[-7] = Stack[-17]
0xd26: PushEmpty(bool, object)
0xd27: Stack[-1] = Stack[-23]
0xd28: Call2 0xdae

0xd29: Pop(1)
0xd2a: Pop(1); Push((bool) Stack[-1] == 0)
0xd2b: IF (Stack[-1] == 0) GOTO 0xd2e; Pop(1)

0xd2c: Stack[-22] = (bool) 0
0xd2d: Return(); Pop(16)

0xd2e: @@ GetPosition(Stack[-5])
0xd2f: Pop(0)
0xd30: @ GetPosition(Stack[-4])
0xd31: Pop(0)
0xd32: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xd33: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xd34: PushEmpty(bool)
0xd35: Stack[-1] = (bool) 0
0xd36: Push((int) 0)
0xd37: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0xd38: IF (Stack[-1] == 0) GOTO 0xd3d; Pop(1)

0xd39: Pop(0); Push(Stack[-20] * Stack[-20]);
0xd3a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xd3b: IF (Stack[-1] == 0) GOTO 0xd3d; Pop(1)

0xd3c: Stack[-1] = (bool) 1
0xd3d: IF (Stack[-1] == 0) GOTO 0xd42; Pop(1)

0xd3e: @ Stop()
0xd3f: Pop(0)
0xd40: Stack[-22] = (bool) 0
0xd41: Return(); Pop(16)

0xd42: Pop(0); Push(Stack[-20] * Stack[-20]);
0xd43: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xd44: IF (Stack[-1] == 0) GOTO 0xd80; Pop(1)

0xd45: @@ GetPFPosition(Stack[-5])
0xd46: Pop(0)
0xd47: @ FindPathTo(Stack[-1], Stack[-5])
0xd48: Pop(0)
0xd49: Pop(0); Push(( Stack[-1] != 0 )
0xd4a: IF (Stack[-1] == 0) GOTO 0xd4d; Pop(1)

0xd4b: Stack[-6] = Stack[-1]
0xd4c: Stack[-1] = 0
0xd4d: Pop(0); Push(( Stack[-6] != 0 )
0xd4e: IF (Stack[-1] == 0) GOTO 0xd6e; Pop(1)

0xd4f: Push(Stack[-7])
0xd50: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd51: Stack[-7] = (bool) 0
0xd52: @ RotatePath(Stack[-6], Stack[-8])
0xd53: Pop(0)
0xd54: Pop(0); Push((bool) Stack[-8] == 0)
0xd55: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd56: GOTO 0xd86

0xd57: Push((int) 0)
0xd58: Push((float)0.3)
0xd59: @ SetTimer(Stack[-2], Stack[-1])
0xd5a: Pop(2)
0xd5b: PushEmpty(string)
0xd5c: Call2 0xdb5

0xd5d: Pop(0)
0xd5e: PushEmpty(string)
0xd5f: Call2 0xdb7

0xd60: Pop(0)
0xd61: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0xd62: Pop(2)
0xd63: Pop(0); Push((bool) Stack[-8] == 0)
0xd64: IF (Stack[-1] == 0) GOTO 0xd6c; Pop(1)

0xd65: Push( Stack[0 + Tasks[-1].StackPointer] )
0xd66: IF (Stack[-1] == 0) GOTO 0xd6a; Pop(1)

0xd67: Stack[-6] = 0
0xd68: GOTO 0xd86

0xd69: GOTO 0xd6b

0xd6a: GOTO 0xd85

0xd6b: GOTO 0xd6d

0xd6c: Stack[-6] = 0
0xd6d: GOTO 0xd7e

0xd6e: Push((int) 0)
0xd6f: @ KillTimer(Stack[-1])
0xd70: Pop(1)
0xd71: Push((float)0.5)
0xd72: @ Sleep(Stack[-1], Stack[-9])
0xd73: Pop(1)
0xd74: Pop(0); Push((bool) Stack[-8] == 0)
0xd75: IF (Stack[-1] == 0) GOTO 0xd7a; Pop(1)

0xd76: Push( Stack[0 + Tasks[-1].StackPointer] )
0xd77: IF (Stack[-1] == 0) GOTO 0xd7a; Pop(1)

0xd78: Stack[-6] = 0
0xd79: GOTO 0xd86

0xd7a: Push((int) 0)
0xd7b: Push((float)0.3)
0xd7c: @ SetTimer(Stack[-2], Stack[-1])
0xd7d: Pop(2)
0xd7e: Stack[-1] = 0
0xd7f: GOTO 0xd84

0xd80: Push((int) 0)
0xd81: @ KillTimer(Stack[-1])
0xd82: Pop(1)
0xd83: GOTO 0xd86

0xd84: Stack[-6] = 0
0xd85: GOTO 0xd26

0xd86: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xd87: Return(); Pop(16)

0xd88: PushEmpty()
0xd89: Push((int) 0)
0xd8a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xd8b: IF (Stack[-1] == 0) GOTO 0xd8d; Pop(1)

0xd8c: Return(); Pop(0)

0xd8d: PushEmpty(bool, object)
0xd8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8f: Call2 0xdae

0xd90: Pop(1)
0xd91: Pop(1); Push((bool) Stack[-1] == 0)
0xd92: IF (Stack[-1] == 0) GOTO 0xd94; Pop(1)

0xd93: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xd94: Push((int) 0)
0xd95: @ KillTimer(Stack[-1])
0xd96: Pop(1)
0xd97: @ Stop()
0xd98: Pop(0)
0xd99: Return(); Pop(0)

0xd9a: PushEmpty()
0xd9b: @ RequestClearPath(Stack[-1])
0xd9c: Pop(0)
0xd9d: Return(); Pop(0)

0xd9e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xd9f: Push((int) 0)
0xda0: @ KillTimer(Stack[-1])
0xda1: Pop(1)
0xda2: @ Stop()
0xda3: Pop(0)
0xda4: Return(); Pop(0)

0xda5: PushEmpty()
0xda6: PushEmpty()
0xda7: Call2 0xcf8

0xda8: Pop(0)
0xda9: PushEmpty(object)
0xdaa: Stack[-1] = Stack[-2]
0xdab: Call2 0x122d

0xdac: Pop(1)
0xdad: Return(); Pop(0)

0xdae: PushEmpty()
0xdaf: PushEmpty(bool, object)
0xdb0: Stack[-1] = Stack[-3]
0xdb1: Call2 0xe59

0xdb2: Stack[-4] = Stack[-2]
0xdb3: Pop(2)
0xdb4: Return(); Pop(0)

0xdb5: Stack[-1] = "walk"
0xdb6: Return(); Pop(0)

0xdb7: Stack[-1] = "run"
0xdb8: Return(); Pop(0)

0xdb9: PushEmpty()
0xdba: Push((int) 2)
0xdbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdbc: IF (Stack[-1] == 0) GOTO 0xdc0; Pop(1)

0xdbd: Stack[-2] = "fire"
0xdbe: Return(); Pop(0)

0xdbf: GOTO 0xdc5

0xdc0: Push((int) 1)
0xdc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc2: IF (Stack[-1] == 0) GOTO 0xdc5; Pop(1)

0xdc3: Stack[-2] = "bullet"
0xdc4: Return(); Pop(0)

0xdc5: Stack[-2] = "phys"
0xdc6: Return(); Pop(0)

0xdc7: PushEmpty(cvector, cvector, cvector, cvector)
0xdc8: @ GetPosition(Stack[-2])
0xdc9: Pop(0)
0xdca: @@ GetPosition(Stack[-1])
0xdcb: Pop(0)
0xdcc: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xdcd: Return(); Pop(4)

0xdce: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xdcf: @ GetPosition(Stack[-3])
0xdd0: Pop(0)
0xdd1: @@ GetPosition(Stack[-2])
0xdd2: Pop(0)
0xdd3: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xdd4: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xdd5: Return(); Pop(6)

0xdd6: PushEmpty(bool, bool)
0xdd7: @ IsPlayerActor(Stack[-3], Stack[-1])
0xdd8: Pop(0)
0xdd9: Stack[-4] = Stack[-1]
0xdda: Return(); Pop(2)

0xddb: PushEmpty(bool, bool)
0xddc: Push("HasProperty")
0xddd: Push((int) 2)
0xdde: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xddf: Pop(1); Push((bool) Stack[-1] == 0)
0xde0: IF (Stack[-1] == 0) GOTO 0xde3; Pop(1)

0xde1: Stack[-5] = (bool) 0
0xde2: Return(); Pop(2)

0xde3: @@ HasProperty(Stack[-3], Stack[-1])
0xde4: Pop(0)
0xde5: Stack[-5] = Stack[-1]
0xde6: Return(); Pop(2)

0xde7: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xde8: PushEmpty(bool, object, string)
0xde9: Stack[-2] = Stack[-18]
0xdea: Stack[-1] = "health"
0xdeb: Call2 0xddb

0xdec: Pop(2)
0xded: Pop(1); Push((bool) Stack[-1] == 0)
0xdee: IF (Stack[-1] == 0) GOTO 0xdf1; Pop(1)

0xdef: Stack[-16] = (float) 0.0
0xdf0: Return(); Pop(12)

0xdf1: PushEmpty(bool, object, string)
0xdf2: Stack[-2] = Stack[-18]
0xdf3: Stack[-1] = "armor"
0xdf4: Call2 0xddb

0xdf5: Pop(2)
0xdf6: Pop(1); Push((bool) Stack[-1] == 0)
0xdf7: IF (Stack[-1] == 0) GOTO 0xdfa; Pop(1)

0xdf8: Stack[-6] = (int) 0
0xdf9: GOTO 0xdfd

0xdfa: Push("armor")
0xdfb: @@ GetProperty(Stack[-1], Stack[-7])
0xdfc: Pop(1)
0xdfd: Push("armor_")
0xdfe: PushEmpty(string, int)
0xdff: Stack[-1] = Stack[-16]
0xe00: Call2 0xdb9

0xe01: Pop(1)
0xe02: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xe03: PushEmpty(bool, object, string)
0xe04: Stack[-2] = Stack[-18]
0xe05: Stack[-1] = Stack[-8]
0xe06: Call2 0xddb

0xe07: Pop(2)
0xe08: Pop(1); Push((bool) Stack[-1] == 0)
0xe09: IF (Stack[-1] == 0) GOTO 0xe0c; Pop(1)

0xe0a: Stack[-4] = (int) 0
0xe0b: GOTO 0xe0e

0xe0c: @@ GetProperty(Stack[-5], Stack[-4])
0xe0d: Pop(0)
0xe0e: PushEmpty(float, float, float)
0xe0f: Pop(0); Push(Stack[-9] + Stack[-7]);
0xe10: Push((float)100.0)
0xe11: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xe12: Stack[-1] = (int) 1
0xe13: Call2 0xfbe

0xe14: Stack[-6] = Stack[-3]
0xe15: Pop(3)
0xe16: Push("health")
0xe17: @@ GetProperty(Stack[-1], Stack[-3])
0xe18: Pop(1)
0xe19: Push((int) 1)
0xe1a: Pop(1); Push(Stack[-1] - Stack[-4]);
0xe1b: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xe1c: Push("health")
0xe1d: PushEmpty(float, float, float, float)
0xe1e: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xe1f: Stack[-2] = (int) 0
0xe20: Stack[-1] = (int) 1
0xe21: Call2 0xfc5

0xe22: Pop(3)
0xe23: @@ SetProperty(Stack[-2], Stack[-1])
0xe24: Pop(2)
0xe25: PushEmpty(bool, object)
0xe26: Stack[-1] = Stack[-17]
0xe27: Call2 0xdd6

0xe28: Pop(1)
0xe29: IF (Stack[-1] == 0) GOTO 0xe2e; Pop(1)

0xe2a: PushEmpty(float)
0xe2b: Stack[-1] = -Stack[-2]; Pop(0);
0xe2c: Call2 0xfdb

0xe2d: Pop(1)
0xe2e: Stack[-16] = Stack[-1]
0xe2f: Return(); Pop(12)

0xe30: PushEmpty(bool, bool)
0xe31: @@ IsDead(Stack[-1])
0xe32: Pop(0)
0xe33: Stack[-4] = Stack[-1]
0xe34: Return(); Pop(2)

0xe35: PushEmpty(object, object, object, object)
0xe36: Pop(0); Push((bool) Stack[-5] == 0)
0xe37: IF (Stack[-1] == 0) GOTO 0xe3a; Pop(1)

0xe38: Stack[-6] = (bool) 0
0xe39: Return(); Pop(4)

0xe3a: PushEmpty(bool)
0xe3b: Stack[-1] = (bool) 0
0xe3c: Push("IsDead")
0xe3d: Push((int) 1)
0xe3e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xe3f: IF (Stack[-1] == 0) GOTO 0xe46; Pop(1)

0xe40: PushEmpty(bool, object)
0xe41: Stack[-1] = Stack[-8]
0xe42: Call2 0xe30

0xe43: Pop(1)
0xe44: IF (Stack[-1] == 0) GOTO 0xe46; Pop(1)

0xe45: Stack[-1] = (bool) 1
0xe46: IF (Stack[-1] == 0) GOTO 0xe49; Pop(1)

0xe47: Stack[-6] = (bool) 0
0xe48: Return(); Pop(4)

0xe49: @ GetScene(Stack[-2])
0xe4a: Pop(0)
0xe4b: Pop(0); Push((bool) Stack[-2] == 0)
0xe4c: IF (Stack[-1] == 0) GOTO 0xe4f; Pop(1)

0xe4d: Stack[-6] = (bool) 0
0xe4e: Return(); Pop(4)

0xe4f: @@ GetScene(Stack[-1])
0xe50: Pop(0)
0xe51: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xe52: IF (Stack[-1] == 0) GOTO 0xe55; Pop(1)

0xe53: Stack[-6] = (bool) 0
0xe54: Return(); Pop(4)

0xe55: Stack[-6] = (bool) 1
0xe56: Return(); Pop(4)

0xe57: Stack[-1] = 0
0xe58: Stack[-2] = 0
0xe59: PushEmpty(int, int)
0xe5a: PushEmpty(bool, object)
0xe5b: Stack[-1] = Stack[-5]
0xe5c: Call2 0xe35

0xe5d: Pop(1)
0xe5e: Pop(1); Push((bool) Stack[-1] == 0)
0xe5f: IF (Stack[-1] == 0) GOTO 0xe62; Pop(1)

0xe60: Stack[-4] = (bool) 0
0xe61: Return(); Pop(2)

0xe62: PushEmpty(bool, object, string)
0xe63: Stack[-2] = Stack[-6]
0xe64: Stack[-1] = "noaccess"
0xe65: Call2 0xddb

0xe66: Pop(2)
0xe67: Pop(1); Push((bool) Stack[-1] == 0)
0xe68: IF (Stack[-1] == 0) GOTO 0xe6b; Pop(1)

0xe69: Stack[-4] = (bool) 1
0xe6a: Return(); Pop(2)

0xe6b: Push("noaccess")
0xe6c: @@ GetProperty(Stack[-1], Stack[-2])
0xe6d: Pop(1)
0xe6e: Push((int) 0)
0xe6f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xe70: Return(); Pop(2)

0xe71: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xe72: Pop(0); Push((bool) Stack[-15] == 0)
0xe73: IF (Stack[-1] == 0) GOTO 0xe75; Pop(1)

0xe74: Return(); Pop(14)

0xe75: @ IsDead(Stack[-7])
0xe76: Pop(0)
0xe77: Push(Stack[-7])
0xe78: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe79: Return(); Pop(14)

0xe7a: @ GetSecondaryAnimationType(Stack[-6])
0xe7b: Pop(0)
0xe7c: Push((int) 0)
0xe7d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xe7e: IF (Stack[-1] == 0) GOTO 0xe80; Pop(1)

0xe7f: Return(); Pop(14)

0xe80: @@ GetPosition(Stack[-5])
0xe81: Pop(0)
0xe82: @ GetPosition(Stack[-4])
0xe83: Pop(0)
0xe84: @ GetDirection(Stack[-3])
0xe85: Pop(0)
0xe86: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xe87: Push(CvectorIndex(Stack[-2], 0))
0xe88: Push(CvectorIndex(Stack[-4], 0))
0xe89: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe8a: Push(CvectorIndex(Stack[-3], 2))
0xe8b: Push(CvectorIndex(Stack[-5], 2))
0xe8c: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe8d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe8e: Push((int) 0)
0xe8f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe90: IF (Stack[-1] == 0) GOTO 0xe93; Pop(1)

0xe91: Stack[-1] = "fhit"
0xe92: GOTO 0xe94

0xe93: Stack[-1] = "bhit"
0xe94: Push("hit_react")
0xe95: Push("1")
0xe96: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe97: Push("2")
0xe98: Pop(1); Push(Stack[-4] + Stack[-1]);
0xe99: Push((int) -10)
0xe9a: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe9b: Pop(4)
0xe9c: Return(); Pop(14)

0xe9d: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xe9e: PushEmpty(bool)
0xe9f: Stack[-1] = (bool) 0
0xea0: PushEmpty(bool)
0xea1: Stack[-1] = (bool) 0
0xea2: Push(Stack[-23])
0xea3: IF (Stack[-1] == 0) GOTO 0xea8; Pop(1)

0xea4: Push((int) 4)
0xea5: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xea6: IF (Stack[-1] == 0) GOTO 0xea8; Pop(1)

0xea7: Stack[-1] = (bool) 1
0xea8: IF (Stack[-1] == 0) GOTO 0xead; Pop(1)

0xea9: Push((int) 5)
0xeaa: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xeab: IF (Stack[-1] == 0) GOTO 0xead; Pop(1)

0xeac: Stack[-1] = (bool) 1
0xead: IF (Stack[-1] == 0) GOTO 0xedc; Pop(1)

0xeae: PushEmpty(cvector, cvector)
0xeaf: PushEmpty(cvector, object)
0xeb0: Stack[-1] = Stack[-25]
0xeb1: Call2 0xdc7

0xeb2: Stack[-3] = Stack[-2]
0xeb3: Pop(2)
0xeb4: Call2 0xfb4

0xeb5: Stack[-11] = Stack[-2]
0xeb6: Pop(2)
0xeb7: @ CreateVectorVector(Stack[-8])
0xeb8: Pop(0)
0xeb9: Stack[-7] = (int) 1
0xeba: Push("hit")
0xebb: Pop(1); Push(Stack[-1] + Stack[-8]);
0xebc: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xebd: Pop(1)
0xebe: Pop(0); Push((bool) Stack[-6] == 0)
0xebf: IF (Stack[-1] == 0) GOTO 0xec1; Pop(1)

0xec0: GOTO 0xeca

0xec1: Pop(0); Push(Stack[-4] | Stack[-9]);
0xec2: Push((float)0.70711)
0xec3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xec4: IF (Stack[-1] == 0) GOTO 0xec7; Pop(1)

0xec5: @@ add(Stack[-5])
0xec6: Pop(0)
0xec7: Push((int) 1)
0xec8: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xec9: GOTO 0xeba

0xeca: @@ size(Stack[-3])
0xecb: Pop(0)
0xecc: Push(Stack[-3])
0xecd: IF (Stack[-1] == 0) GOTO 0xedb; Pop(1)

0xece: @ irand(Stack[-2], Stack[-3])
0xecf: Pop(0)
0xed0: @@ get(Stack[-1], Stack[-2])
0xed1: Pop(0)
0xed2: PushEmpty(object, int, float, cvector, cvector)
0xed3: Stack[-5] = Stack[-26]
0xed4: Stack[-4] = Stack[-25]
0xed5: Stack[-3] = Stack[-24]
0xed6: Stack[-2] = Stack[-6]
0xed7: Stack[-1] = -Stack[-14]; Pop(0);
0xed8: Call2 0xee1

0xed9: Pop(5)
0xeda: Return(); Pop(18)

0xedb: Stack[-8] = 0
0xedc: PushEmpty(object)
0xedd: Stack[-1] = Stack[-22]
0xede: Call2 0xe71

0xedf: Pop(1)
0xee0: Return(); Pop(18)

0xee1: PushEmpty(object, object, object, object)
0xee2: @ GetScene(Stack[-2])
0xee3: Pop(0)
0xee4: Push("scripted")
0xee5: Push("blood_dir.xml")
0xee6: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xee7: Pop(2)
0xee8: PushEmpty(object)
0xee9: Stack[-1] = Stack[-10]
0xeea: Call2 0xe71

0xeeb: Pop(1)
0xeec: Return(); Pop(4)

0xeed: Stack[-1] = 0
0xeee: Stack[-2] = 0
0xeef: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xef0: @@ GetPosition(Stack[-3])
0xef1: Pop(0)
0xef2: @ GetPosition(Stack[-2])
0xef3: Pop(0)
0xef4: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xef5: Push(CvectorIndex(Stack[-1], 0))
0xef6: Push(CvectorIndex(Stack[-2], 2))
0xef7: @ RotateAsync(Stack[-2], Stack[-1])
0xef8: Pop(2)
0xef9: Return(); Pop(6)

0xefa: PushEmpty(bool, bool)
0xefb: @ IsLoaded(Stack[-1])
0xefc: Pop(0)
0xefd: Stack[-3] = Stack[-1]
0xefe: Return(); Pop(2)

0xeff: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xf00: @@ GetPosition(Stack[-8])
0xf01: Pop(0)
0xf02: @@ GetEyesHeight(Stack[-9])
0xf03: Pop(0)
0xf04: Push(CvectorIndex(Stack[-8], 1))
0xf05: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf06: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xf07: @ GetPosition(Stack[-7])
0xf08: Pop(0)
0xf09: @ GetEyesHeight(Stack[-9])
0xf0a: Pop(0)
0xf0b: Push(CvectorIndex(Stack[-7], 1))
0xf0c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf0d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xf0e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xf0f: Push(CvectorIndex(Stack[-6], 1))
0xf10: Stack[-1] = (int) 0
0xf11: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xf12: Pop(0); Push(Stack[-6] | Stack[-6]);
0xf13: Pop(1); Push(Sqrt(Stack[-1]))
0xf14: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xf15: Stack[-5] = -Stack[-6]; Pop(0);
0xf16: Pop(0); Push(Stack[-6] * Stack[-19]);
0xf17: PushEmpty(cvector, cvector)
0xf18: Push(CVector(0.0, 1.0, 0.0))
0xf19: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xf1a: Call2 0xfb4

0xf1b: Pop(1)
0xf1c: Push((int) 25)
0xf1d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf1e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf1f: Push(CVector(0.0, 10.0, 0.0))
0xf20: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xf21: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xf22: @ IsOverrideActive(Stack[-2])
0xf23: Pop(0)
0xf24: Push(Stack[-2])
0xf25: IF (Stack[-1] == 0) GOTO 0xf28; Pop(1)

0xf26: Stack[-21] = (bool) 0
0xf27: Return(); Pop(18)

0xf28: @ StopWorld()
0xf29: Pop(0)
0xf2a: @ CameraTransit(Stack[-3], Stack[-5])
0xf2b: Pop(0)
0xf2c: Push(CvectorIndex(Stack[-4], 0))
0xf2d: Push(CvectorIndex(Stack[-5], 2))
0xf2e: @ Rotate(Stack[-2], Stack[-1])
0xf2f: Pop(2)
0xf30: PushEmpty(bool)
0xf31: Call2 0x1477

0xf32: Pop(0)
0xf33: IF (Stack[-1] == 0) GOTO 0xf35; Pop(1)

0xf34: GOTO 0xf3d

0xf35: Push("head")
0xf36: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xf37: Pop(1)
0xf38: Push(Stack[-1])
0xf39: IF (Stack[-1] == 0) GOTO 0xf3d; Pop(1)

0xf3a: Push("head")
0xf3b: @ LookAsyncCamera(Stack[-1])
0xf3c: Pop(1)
0xf3d: @ CameraWaitForPlayFinish()
0xf3e: Pop(0)
0xf3f: @ ResumeWorld()
0xf40: Pop(0)
0xf41: Stack[-21] = (bool) 1
0xf42: Return(); Pop(18)

0xf43: PushEmpty(bool, bool)
0xf44: @ CameraSwitchToNormal()
0xf45: Pop(0)
0xf46: PushEmpty(bool)
0xf47: Call2 0x1477

0xf48: Pop(0)
0xf49: IF (Stack[-1] == 0) GOTO 0xf4b; Pop(1)

0xf4a: GOTO 0xf53

0xf4b: Push("head")
0xf4c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xf4d: Pop(1)
0xf4e: Push(Stack[-1])
0xf4f: IF (Stack[-1] == 0) GOTO 0xf53; Pop(1)

0xf50: Push("head")
0xf51: @ UnlookAsync(Stack[-1])
0xf52: Pop(1)
0xf53: Return(); Pop(2)

0xf54: PushEmpty(bool, float, float, bool, float, float)
0xf55: @ lshHasAnimation(Stack[-3], Stack[-7])
0xf56: Pop(0)
0xf57: Push(Stack[-3])
0xf58: IF (Stack[-1] == 0) GOTO 0xf5f; Pop(1)

0xf59: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xf5a: Pop(0)
0xf5b: Push((bool) 0)
0xf5c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xf5d: Pop(1)
0xf5e: GOTO 0xf63

0xf5f: Push("Can't find lsh animation : ")
0xf60: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf61: @ Trace(Stack[-1])
0xf62: Pop(1)
0xf63: Return(); Pop(6)

0xf64: PushEmpty(bool, float, float, bool, float, float)
0xf65: @ lshHasAnimation(Stack[-3], Stack[-8])
0xf66: Pop(0)
0xf67: Push(Stack[-3])
0xf68: IF (Stack[-1] == 0) GOTO 0xf6e; Pop(1)

0xf69: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xf6a: Pop(0)
0xf6b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xf6c: Pop(0)
0xf6d: GOTO 0xf72

0xf6e: Push("Can't find lsh animation : ")
0xf6f: Pop(1); Push(Stack[-1] + Stack[-9]);
0xf70: @ Trace(Stack[-1])
0xf71: Pop(1)
0xf72: Return(); Pop(6)

0xf73: PushEmpty(float, cvector, float, cvector)
0xf74: @@ GetEyesHeight(Stack[-2])
0xf75: Pop(0)
0xf76: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xf77: Push(CvectorIndex(Stack[-1], 1))
0xf78: Stack[-1] = Stack[-3]
0xf79: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xf7a: Push("head")
0xf7b: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xf7c: Pop(1)
0xf7d: Return(); Pop(4)

0xf7e: PushEmpty(bool)
0xf7f: Call2 0x1477

0xf80: Pop(0)
0xf81: IF (Stack[-1] == 0) GOTO 0xf84; Pop(1)

0xf82: @ lshStopSpeech()
0xf83: Pop(0)
0xf84: Return(); Pop(0)

0xf85: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xf86: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xf87: Pop(0)
0xf88: Pop(0); Push((bool) Stack[-8] == 0)
0xf89: IF (Stack[-1] == 0) GOTO 0xf9e; Pop(1)

0xf8a: Stack[-7] = (int) 0
0xf8b: Push((int) 1)
0xf8c: Pop(1); Push(Stack[-8] + Stack[-1]);
0xf8d: Pop(1); Push(Stack[-18] + Stack[-1]);
0xf8e: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xf8f: Pop(1)
0xf90: Pop(0); Push((bool) Stack[-6] == 0)
0xf91: IF (Stack[-1] == 0) GOTO 0xf93; Pop(1)

0xf92: GOTO 0xf96

0xf93: Push((int) 1)
0xf94: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xf95: GOTO 0xf8b

0xf96: Pop(0); Push((bool) Stack[-7] == 0)
0xf97: IF (Stack[-1] == 0) GOTO 0xf99; Pop(1)

0xf98: Return(); Pop(16)

0xf99: @ irand(Stack[-5], Stack[-7])
0xf9a: Pop(0)
0xf9b: Push((int) 1)
0xf9c: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf9d: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xf9e: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xf9f: Pop(0)
0xfa0: Push(Stack[-4])
0xfa1: IF (Stack[-1] == 0) GOTO 0xfad; Pop(1)

0xfa2: @ GetEyesHeight(Stack[-3])
0xfa3: Pop(0)
0xfa4: @ GetDirection(Stack[-2])
0xfa5: Pop(0)
0xfa6: Push((int) 50)
0xfa7: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xfa8: Push(CvectorIndex(Stack[-1], 1))
0xfa9: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xfaa: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xfab: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xfac: Pop(0)
0xfad: Return(); Pop(16)

0xfae: PushEmpty(object, object)
0xfaf: @ self(Stack[-1])
0xfb0: Pop(0)
0xfb1: Stack[-3] = Stack[-1]
0xfb2: Return(); Pop(2)

0xfb3: Stack[-1] = 0
0xfb4: PushEmpty(float, float)
0xfb5: Pop(0); Push(Stack[-3] | Stack[-3]);
0xfb6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xfb7: Push((float)0.0)
0xfb8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xfb9: IF (Stack[-1] == 0) GOTO 0xfbc; Pop(1)

0xfba: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xfbb: Return(); Pop(2)

0xfbc: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xfbd: Return(); Pop(2)

0xfbe: PushEmpty()
0xfbf: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xfc0: IF (Stack[-1] == 0) GOTO 0xfc3; Pop(1)

0xfc1: Stack[-3] = Stack[-2]
0xfc2: GOTO 0xfc4

0xfc3: Stack[-3] = Stack[-1]
0xfc4: Return(); Pop(0)

0xfc5: PushEmpty()
0xfc6: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xfc7: IF (Stack[-1] == 0) GOTO 0xfca; Pop(1)

0xfc8: Stack[-4] = Stack[-2]
0xfc9: Return(); Pop(0)

0xfca: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xfcb: IF (Stack[-1] == 0) GOTO 0xfce; Pop(1)

0xfcc: Stack[-4] = Stack[-1]
0xfcd: Return(); Pop(0)

0xfce: Stack[-4] = Stack[-3]
0xfcf: Return(); Pop(0)

0xfd0: PushEmpty(object, object)
0xfd1: @ CreateObjectVector(Stack[-1])
0xfd2: Pop(0)
0xfd3: Stack[-3] = Stack[-1]
0xfd4: Return(); Pop(2)

0xfd5: Stack[-1] = 0
0xfd6: PushEmpty(int, int)
0xfd7: @ GetVariable(Stack[-3], Stack[-1])
0xfd8: Pop(0)
0xfd9: Stack[-4] = Stack[-1]
0xfda: Return(); Pop(2)

0xfdb: PushEmpty(object, object)
0xfdc: @ CreateFloatVector(Stack[-1])
0xfdd: Pop(0)
0xfde: @@ add(Stack[-3])
0xfdf: Pop(0)
0xfe0: Push((int) 15)
0xfe1: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xfe2: Pop(1)
0xfe3: Return(); Pop(2)

0xfe4: Stack[-1] = 0
0xfe5: PushEmpty(float, float)
0xfe6: @ GetGameTime(Stack[-1])
0xfe7: Pop(0)
0xfe8: Push((int) 1)
0xfe9: PushEmpty(int)
0xfea: Push((int) 24)
0xfeb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xfec: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xfed: Return(); Pop(2)

0xfee: PushEmpty(bool, bool)
0xfef: @ IsPlayerActor(Stack[-3], Stack[-1])
0xff0: Pop(0)
0xff1: Push(Stack[-1])
0xff2: IF (Stack[-1] == 0) GOTO 0xff6; Pop(1)

0xff3: Push("attack")
0xff4: @ PlayGlobalMusic(Stack[-1])
0xff5: Pop(1)
0xff6: Return(); Pop(2)

0xff7: PushEmpty(object, object)
0xff8: @ GetScene(Stack[-1])
0xff9: Pop(0)
0xffa: Push("battle")
0xffb: PushEmpty(object)
0xffc: Call2 0xfae

0xffd: Pop(0)
0xffe: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xfff: Pop(2)
0x1000: Return(); Pop(2)

0x1001: Stack[-1] = 0
0x1002: PushEmpty()
0x1003: Push((int) 100)
0x1004: @@ SetReturnValue(Stack[-1])
0x1005: Pop(1)
0x1006: Return(); Pop(0)

0x1007: PushEmpty()
0x1008: PushEmpty(int, string)
0x1009: Stack[-1] = "branch"
0x100a: Call2 0xfd6

0x100b: Pop(1)
0x100c: Push((int) 0)
0x100d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x100e: IF (Stack[-1] == 0) GOTO 0x1011; Pop(1)

0x100f: Stack[-2] = (bool) 1
0x1010: Return(); Pop(0)

0x1011: Stack[-2] = (bool) 0
0x1012: Return(); Pop(0)

0x1013: PushEmpty()
0x1014: PushEmpty(int, string)
0x1015: Stack[-1] = "branch"
0x1016: Call2 0xfd6

0x1017: Pop(1)
0x1018: Push((int) 1)
0x1019: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x101a: IF (Stack[-1] == 0) GOTO 0x101d; Pop(1)

0x101b: Stack[-2] = (bool) 1
0x101c: Return(); Pop(0)

0x101d: Stack[-2] = (bool) 0
0x101e: Return(); Pop(0)

0x101f: PushEmpty()
0x1020: PushEmpty(int, string)
0x1021: Stack[-1] = "branch"
0x1022: Call2 0xfd6

0x1023: Pop(1)
0x1024: Push((int) 2)
0x1025: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1026: IF (Stack[-1] == 0) GOTO 0x1029; Pop(1)

0x1027: Stack[-2] = (bool) 1
0x1028: Return(); Pop(0)

0x1029: Stack[-2] = (bool) 0
0x102a: Return(); Pop(0)

0x102b: PushEmpty()
0x102c: PushEmpty(bool, object)
0x102d: Stack[-1] = Stack[-3]
0x102e: Call2 0x107b

0x102f: Pop(1)
0x1030: IF (Stack[-1] == 0) GOTO 0x1033; Pop(1)

0x1031: Stack[-2] = (bool) 1
0x1032: Return(); Pop(0)

0x1033: Stack[-2] = (bool) 0
0x1034: Return(); Pop(0)

0x1035: PushEmpty()
0x1036: PushEmpty(bool, object)
0x1037: Stack[-1] = Stack[-3]
0x1038: Call2 0x1082

0x1039: Pop(1)
0x103a: IF (Stack[-1] == 0) GOTO 0x103d; Pop(1)

0x103b: Stack[-2] = (bool) 1
0x103c: Return(); Pop(0)

0x103d: Stack[-2] = (bool) 0
0x103e: Return(); Pop(0)

0x103f: PushEmpty()
0x1040: PushEmpty(bool, object)
0x1041: Stack[-1] = Stack[-3]
0x1042: Call2 0x1089

0x1043: Pop(1)
0x1044: IF (Stack[-1] == 0) GOTO 0x1047; Pop(1)

0x1045: Stack[-2] = (bool) 1
0x1046: Return(); Pop(0)

0x1047: Stack[-2] = (bool) 0
0x1048: Return(); Pop(0)

0x1049: PushEmpty()
0x104a: PushEmpty(bool, object)
0x104b: Stack[-1] = Stack[-3]
0x104c: Call2 0x1090

0x104d: Pop(1)
0x104e: IF (Stack[-1] == 0) GOTO 0x1051; Pop(1)

0x104f: Stack[-2] = (bool) 1
0x1050: Return(); Pop(0)

0x1051: Stack[-2] = (bool) 0
0x1052: Return(); Pop(0)

0x1053: PushEmpty()
0x1054: PushEmpty(bool, object)
0x1055: Stack[-1] = Stack[-3]
0x1056: Call2 0x1097

0x1057: Pop(1)
0x1058: IF (Stack[-1] == 0) GOTO 0x105b; Pop(1)

0x1059: Stack[-2] = (bool) 1
0x105a: Return(); Pop(0)

0x105b: Stack[-2] = (bool) 0
0x105c: Return(); Pop(0)

0x105d: PushEmpty()
0x105e: PushEmpty(bool, object)
0x105f: Stack[-1] = Stack[-3]
0x1060: Call2 0x109e

0x1061: Pop(1)
0x1062: IF (Stack[-1] == 0) GOTO 0x1065; Pop(1)

0x1063: Stack[-2] = (bool) 1
0x1064: Return(); Pop(0)

0x1065: Stack[-2] = (bool) 0
0x1066: Return(); Pop(0)

0x1067: PushEmpty()
0x1068: PushEmpty(bool, object)
0x1069: Stack[-1] = Stack[-3]
0x106a: Call2 0x10a5

0x106b: Pop(1)
0x106c: IF (Stack[-1] == 0) GOTO 0x106f; Pop(1)

0x106d: Stack[-2] = (bool) 1
0x106e: Return(); Pop(0)

0x106f: Stack[-2] = (bool) 0
0x1070: Return(); Pop(0)

0x1071: PushEmpty()
0x1072: PushEmpty(bool, object)
0x1073: Stack[-1] = Stack[-3]
0x1074: Call2 0x10ac

0x1075: Pop(1)
0x1076: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1077: Stack[-2] = (bool) 1
0x1078: Return(); Pop(0)

0x1079: Stack[-2] = (bool) 0
0x107a: Return(); Pop(0)

0x107b: PushEmpty()
0x107c: PushEmpty(int)
0x107d: Call2 0xfe5

0x107e: Pop(0)
0x107f: Push((int) 6)
0x1080: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x1081: Return(); Pop(0)

0x1082: PushEmpty()
0x1083: PushEmpty(int)
0x1084: Call2 0xfe5

0x1085: Pop(0)
0x1086: Push((int) 2)
0x1087: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1088: Return(); Pop(0)

0x1089: PushEmpty()
0x108a: PushEmpty(int)
0x108b: Call2 0xfe5

0x108c: Pop(0)
0x108d: Push((int) 7)
0x108e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x108f: Return(); Pop(0)

0x1090: PushEmpty()
0x1091: PushEmpty(int)
0x1092: Call2 0xfe5

0x1093: Pop(0)
0x1094: Push((int) 8)
0x1095: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1096: Return(); Pop(0)

0x1097: PushEmpty()
0x1098: PushEmpty(int)
0x1099: Call2 0xfe5

0x109a: Pop(0)
0x109b: Push((int) 9)
0x109c: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x109d: Return(); Pop(0)

0x109e: PushEmpty()
0x109f: PushEmpty(int)
0x10a0: Call2 0xfe5

0x10a1: Pop(0)
0x10a2: Push((int) 10)
0x10a3: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x10a4: Return(); Pop(0)

0x10a5: PushEmpty()
0x10a6: PushEmpty(int)
0x10a7: Call2 0xfe5

0x10a8: Pop(0)
0x10a9: Push((int) 11)
0x10aa: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x10ab: Return(); Pop(0)

0x10ac: PushEmpty()
0x10ad: PushEmpty(int)
0x10ae: Call2 0xfe5

0x10af: Pop(0)
0x10b0: Push((int) 12)
0x10b1: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x10b2: Return(); Pop(0)

0x10b3: PushEmpty(int, int)
0x10b4: Push("branch")
0x10b5: @ GetVariable(Stack[-1], Stack[-2])
0x10b6: Pop(1)
0x10b7: Push((int) 0)
0x10b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10b9: IF (Stack[-1] == 0) GOTO 0x10bd; Pop(1)

0x10ba: Stack[-3] = (int) 1
0x10bb: Return(); Pop(2)

0x10bc: GOTO 0x10c2

0x10bd: Push((int) 1)
0x10be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10bf: IF (Stack[-1] == 0) GOTO 0x10c2; Pop(1)

0x10c0: Stack[-3] = (int) 2
0x10c1: Return(); Pop(2)

0x10c2: Stack[-3] = (int) 3
0x10c3: Return(); Pop(2)

0x10c4: PushEmpty(int, int)
0x10c5: Push("branch")
0x10c6: @ GetVariable(Stack[-1], Stack[-2])
0x10c7: Pop(1)
0x10c8: Stack[-3] = Stack[-1]
0x10c9: Return(); Pop(2)

0x10ca: PushEmpty(int, int)
0x10cb: @@ GetItemID(Stack[-1])
0x10cc: Pop(0)
0x10cd: Stack[-4] = Stack[-1]
0x10ce: Return(); Pop(2)

0x10cf: PushEmpty(int, int, int, string, bool, bool, int, int, int, int, string, bool, bool, int)
0x10d0: Push((int) 0)
0x10d1: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x10d2: IF (Stack[-1] == 0) GOTO 0x10f4; Pop(1)

0x10d3: PushEmpty(int)
0x10d4: Call2 0xfe5

0x10d5: Stack[-8] = Stack[-1]
0x10d6: Pop(1)
0x10d7: Stack[-6] = (int) 0
0x10d8: Stack[-5] = (int) 1
0x10d9: Pop(0); Push((bool) Stack[-5] <= Stack[-7])
0x10da: IF (Stack[-1] == 0) GOTO 0x10f2; Pop(1)

0x10db: Stack[-4] = "Price"
0x10dc: Push((int) 1)
0x10dd: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x10de: IF (Stack[-1] == 0) GOTO 0x10e0; Pop(1)

0x10df: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0x10e0: PushEmpty(int, object)
0x10e1: Stack[-1] = Stack[-18]
0x10e2: Call2 0x10ca

0x10e3: Pop(1)
0x10e4: @ HasInvItemProperty(Stack[-4], Stack[-1], Stack[-5])
0x10e5: Pop(1)
0x10e6: Pop(0); Push((bool) Stack[-3] == 0)
0x10e7: IF (Stack[-1] == 0) GOTO 0x10e9; Pop(1)

0x10e8: GOTO 0x10ef

0x10e9: PushEmpty(int, object)
0x10ea: Stack[-1] = Stack[-18]
0x10eb: Call2 0x10ca

0x10ec: Pop(1)
0x10ed: @ GetInvItemProperty(Stack[-7], Stack[-1], Stack[-5])
0x10ee: Pop(1)
0x10ef: Push((int) 1)
0x10f0: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x10f1: GOTO 0x10d9

0x10f2: Stack[-17] = Stack[-6]
0x10f3: Return(); Pop(14)

0x10f4: PushEmpty(int, object)
0x10f5: Stack[-1] = Stack[-18]
0x10f6: Call2 0x10ca

0x10f7: Pop(1)
0x10f8: Push("BarterPrice")
0x10f9: Pop(1); Push(Stack[-1] + Stack[-17]);
0x10fa: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x10fb: Pop(2)
0x10fc: Pop(0); Push((bool) Stack[-2] == 0)
0x10fd: IF (Stack[-1] == 0) GOTO 0x1100; Pop(1)

0x10fe: Stack[-17] = (int) 0
0x10ff: Return(); Pop(14)

0x1100: PushEmpty(int, object)
0x1101: Stack[-1] = Stack[-18]
0x1102: Call2 0x10ca

0x1103: Pop(1)
0x1104: Push("BarterPrice")
0x1105: Pop(1); Push(Stack[-1] + Stack[-17]);
0x1106: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x1107: Pop(2)
0x1108: Push((int) 0)
0x1109: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x110a: IF (Stack[-1] == 0) GOTO 0x110d; Pop(1)

0x110b: Stack[-17] = Stack[-1]
0x110c: Return(); Pop(14)

0x110d: Stack[-17] = -Stack[-1]; Pop(0);
0x110e: Return(); Pop(14)

0x110f: PushEmpty()
0x1110: PushEmpty(int)
0x1111: Call2 0x10c4

0x1112: Pop(0)
0x1113: Push((int) 1)
0x1114: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1115: IF (Stack[-1] == 0) GOTO 0x1119; Pop(1)

0x1116: @ WorkWithCorpse(Stack[-1])
0x1117: Pop(0)
0x1118: GOTO 0x111b

0x1119: @ Barter(Stack[-1])
0x111a: Pop(0)
0x111b: Return(); Pop(0)

0x111c: PushEmpty(int, bool, int, bool)
0x111d: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x111e: IF (Stack[-1] == 0) GOTO 0x1123; Pop(1)

0x111f: Push("GenerateMoney: iMin > iMax")
0x1120: @ Trace(Stack[-1])
0x1121: Pop(1)
0x1122: Return(); Pop(4)

0x1123: Stack[-2] = (int) 0
0x1124: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x1125: IF (Stack[-1] == 0) GOTO 0x112a; Pop(1)

0x1126: Pop(0); Push(Stack[-5] - Stack[-6]);
0x1127: @ irand(Stack[-3], Stack[-1])
0x1128: Pop(1)
0x1129: GOTO 0x112e

0x112a: Push((int) 0)
0x112b: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x112c: IF (Stack[-1] == 0) GOTO 0x112e; Pop(1)

0x112d: Return(); Pop(4)

0x112e: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x112f: Push((int) 0)
0x1130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1131: IF (Stack[-1] == 0) GOTO 0x1133; Pop(1)

0x1132: Return(); Pop(4)

0x1133: PushEmpty(int, string)
0x1134: Stack[-1] = "Money"
0x1135: Call2 0x1213

0x1136: Pop(1)
0x1137: Push((int) 0)
0x1138: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x1139: Pop(2)
0x113a: Return(); Pop(4)

0x113b: PushEmpty(object, int, bool, object, int, bool)
0x113c: @ CreateInvItem(Stack[-3])
0x113d: Pop(0)
0x113e: @@ SetItemName(Stack[-7])
0x113f: Pop(0)
0x1140: Push("Organ")
0x1141: Push((int) 1)
0x1142: @@ SetProperty(Stack[-2], Stack[-1])
0x1143: Pop(2)
0x1144: @@ GetItemID(Stack[-2])
0x1145: Pop(0)
0x1146: Push((int) 0)
0x1147: Push((int) 1)
0x1148: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x1149: Pop(2)
0x114a: Return(); Pop(6)

0x114b: Stack[-3] = 0
0x114c: PushEmpty(int)
0x114d: Call2 0x10c4

0x114e: Pop(0)
0x114f: Push((int) 1)
0x1150: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1151: IF (Stack[-1] == 0) GOTO 0x1153; Pop(1)

0x1152: Return(); Pop(0)

0x1153: PushEmpty(string)
0x1154: Stack[-1] = "liver"
0x1155: Call2 0x113b

0x1156: Pop(1)
0x1157: PushEmpty(string)
0x1158: Stack[-1] = "kidney"
0x1159: Call2 0x113b

0x115a: Pop(1)
0x115b: PushEmpty(string)
0x115c: Stack[-1] = "heart"
0x115d: Call2 0x113b

0x115e: Pop(1)
0x115f: PushEmpty(string)
0x1160: Stack[-1] = "blood"
0x1161: Call2 0x113b

0x1162: Pop(1)
0x1163: Return(); Pop(0)

0x1164: PushEmpty(int, bool, int, bool)
0x1165: Push(Stack[-5])
0x1166: IF (Stack[-1] == 0) GOTO 0x11bd; Pop(1)

0x1167: PushEmpty(int, int)
0x1168: Stack[-2] = (int) 0
0x1169: Push((int) 100)
0x116a: PushEmpty(int)
0x116b: Call2 0xfe5

0x116c: Pop(0)
0x116d: Push((int) 100)
0x116e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x116f: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1170: Call2 0x111c

0x1171: Pop(2)
0x1172: Push((int) 8)
0x1173: @ irand(Stack[-3], Stack[-1])
0x1174: Pop(1)
0x1175: Push((int) 0)
0x1176: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1177: IF (Stack[-1] == 0) GOTO 0x1181; Pop(1)

0x1178: PushEmpty(int, string)
0x1179: Stack[-1] = "lemon"
0x117a: Call2 0x1213

0x117b: Pop(1)
0x117c: Push((int) 0)
0x117d: Push((int) 1)
0x117e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x117f: Pop(3)
0x1180: GOTO 0x11bc

0x1181: Push((int) 1)
0x1182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1183: IF (Stack[-1] == 0) GOTO 0x118d; Pop(1)

0x1184: PushEmpty(int, string)
0x1185: Stack[-1] = "rusk"
0x1186: Call2 0x1213

0x1187: Pop(1)
0x1188: Push((int) 0)
0x1189: Push((int) 1)
0x118a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x118b: Pop(3)
0x118c: GOTO 0x11bc

0x118d: Push((int) 2)
0x118e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118f: IF (Stack[-1] == 0) GOTO 0x1199; Pop(1)

0x1190: PushEmpty(int, string)
0x1191: Stack[-1] = "hook"
0x1192: Call2 0x1213

0x1193: Pop(1)
0x1194: Push((int) 0)
0x1195: Push((int) 1)
0x1196: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1197: Pop(3)
0x1198: GOTO 0x11bc

0x1199: Push((int) 4)
0x119a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119b: IF (Stack[-1] == 0) GOTO 0x11a5; Pop(1)

0x119c: PushEmpty(int, string)
0x119d: Stack[-1] = "syringe"
0x119e: Call2 0x1213

0x119f: Pop(1)
0x11a0: Push((int) 0)
0x11a1: Push((int) 1)
0x11a2: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11a3: Pop(3)
0x11a4: GOTO 0x11bc

0x11a5: Push((int) 5)
0x11a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a7: IF (Stack[-1] == 0) GOTO 0x11b1; Pop(1)

0x11a8: PushEmpty(int, string)
0x11a9: Stack[-1] = "watch"
0x11aa: Call2 0x1213

0x11ab: Pop(1)
0x11ac: Push((int) 0)
0x11ad: Push((int) 1)
0x11ae: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11af: Pop(3)
0x11b0: GOTO 0x11bc

0x11b1: Push((int) 6)
0x11b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b3: IF (Stack[-1] == 0) GOTO 0x11bc; Pop(1)

0x11b4: PushEmpty(int, string)
0x11b5: Stack[-1] = "razor"
0x11b6: Call2 0x1213

0x11b7: Pop(1)
0x11b8: Push((int) 0)
0x11b9: Push((int) 1)
0x11ba: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11bb: Pop(3)
0x11bc: GOTO 0x1212

0x11bd: PushEmpty(int, int)
0x11be: Stack[-2] = (int) 0
0x11bf: Push((int) 50)
0x11c0: PushEmpty(int)
0x11c1: Call2 0xfe5

0x11c2: Pop(0)
0x11c3: Push((int) 50)
0x11c4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11c5: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x11c6: Call2 0x111c

0x11c7: Pop(2)
0x11c8: Push((int) 7)
0x11c9: @ irand(Stack[-3], Stack[-1])
0x11ca: Pop(1)
0x11cb: Push((int) 0)
0x11cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11cd: IF (Stack[-1] == 0) GOTO 0x11d7; Pop(1)

0x11ce: PushEmpty(int, string)
0x11cf: Stack[-1] = "beads"
0x11d0: Call2 0x1213

0x11d1: Pop(1)
0x11d2: Push((int) 0)
0x11d3: Push((int) 1)
0x11d4: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11d5: Pop(3)
0x11d6: GOTO 0x1212

0x11d7: Push((int) 1)
0x11d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d9: IF (Stack[-1] == 0) GOTO 0x11e3; Pop(1)

0x11da: PushEmpty(int, string)
0x11db: Stack[-1] = "bracelet"
0x11dc: Call2 0x1213

0x11dd: Pop(1)
0x11de: Push((int) 0)
0x11df: Push((int) 1)
0x11e0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11e1: Pop(3)
0x11e2: GOTO 0x1212

0x11e3: Push((int) 2)
0x11e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e5: IF (Stack[-1] == 0) GOTO 0x11ef; Pop(1)

0x11e6: PushEmpty(int, string)
0x11e7: Stack[-1] = "ear_ring"
0x11e8: Call2 0x1213

0x11e9: Pop(1)
0x11ea: Push((int) 0)
0x11eb: Push((int) 1)
0x11ec: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11ed: Pop(3)
0x11ee: GOTO 0x1212

0x11ef: Push((int) 3)
0x11f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f1: IF (Stack[-1] == 0) GOTO 0x11fb; Pop(1)

0x11f2: PushEmpty(int, string)
0x11f3: Stack[-1] = "gold_ring"
0x11f4: Call2 0x1213

0x11f5: Pop(1)
0x11f6: Push((int) 0)
0x11f7: Push((int) 1)
0x11f8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11f9: Pop(3)
0x11fa: GOTO 0x1212

0x11fb: Push((int) 4)
0x11fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11fd: IF (Stack[-1] == 0) GOTO 0x1207; Pop(1)

0x11fe: PushEmpty(int, string)
0x11ff: Stack[-1] = "silver_ring"
0x1200: Call2 0x1213

0x1201: Pop(1)
0x1202: Push((int) 0)
0x1203: Push((int) 1)
0x1204: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1205: Pop(3)
0x1206: GOTO 0x1212

0x1207: Push((int) 5)
0x1208: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1209: IF (Stack[-1] == 0) GOTO 0x1212; Pop(1)

0x120a: PushEmpty(int, string)
0x120b: Stack[-1] = "flower"
0x120c: Call2 0x1213

0x120d: Pop(1)
0x120e: Push((int) 0)
0x120f: Push((int) 1)
0x1210: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1211: Pop(3)
0x1212: Return(); Pop(4)

0x1213: PushEmpty(int, int)
0x1214: @ GetInvItemByName(Stack[-1], Stack[-3])
0x1215: Pop(0)
0x1216: Stack[-4] = Stack[-1]
0x1217: Return(); Pop(2)

0x1218: PushEmpty()
0x1219: PushEmpty(object)
0x121a: Stack[-1] = Stack[-2]
0x121b: Push(-1, 0); TaskCall(2)
0x121c: Call2 0x707

0x121d: Pop(-1, 0); TaskReturn
0x121e: Pop(1)
0x121f: Return(); Pop(0)

0x1220: PushEmpty(float, float)
0x1221: Push("health")
0x1222: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1223: IF (Stack[-1] == 0) GOTO 0x122c; Pop(1)

0x1224: Push("health")
0x1225: @ GetProperty(Stack[-1], Stack[-2])
0x1226: Pop(1)
0x1227: Push((int) 0)
0x1228: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x1229: IF (Stack[-1] == 0) GOTO 0x122c; Pop(1)

0x122a: @ SignalDeath(Stack[-4])
0x122b: Pop(0)
0x122c: Return(); Pop(2)

0x122d: PushEmpty()
0x122e: PushEmpty(object)
0x122f: Stack[-1] = Stack[-2]
0x1230: Call2 0x1218

0x1231: Pop(1)
0x1232: Return(); Pop(0)

0x1233: PushEmpty()
0x1234: PushEmpty(object, int, float)
0x1235: Stack[-3] = Stack[-7]
0x1236: Stack[-2] = Stack[-6]
0x1237: Stack[-1] = Stack[-5]
0x1238: Call2 0xe9d

0x1239: Pop(3)
0x123a: Return(); Pop(0)

0x123b: PushEmpty()
0x123c: PushEmpty(object, int, float, cvector, cvector)
0x123d: Stack[-5] = Stack[-11]
0x123e: Stack[-4] = Stack[-10]
0x123f: Stack[-3] = Stack[-9]
0x1240: Stack[-2] = Stack[-7]
0x1241: Stack[-1] = Stack[-6]
0x1242: Call2 0xee1

0x1243: Pop(5)
0x1244: Return(); Pop(0)

0x1245: PushEmpty()
0x1246: Push("unholster")
0x1247: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1248: IF (Stack[-1] == 0) GOTO 0x1250; Pop(1)

0x1249: PushEmpty(bool, object)
0x124a: Stack[-1] = Stack[-4]
0x124b: Call2 0x13b1

0x124c: Stack[-5] = Stack[-2]
0x124d: Pop(2)
0x124e: Return(); Pop(0)

0x124f: GOTO 0x1263

0x1250: Push("player_shot")
0x1251: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1252: IF (Stack[-1] == 0) GOTO 0x125a; Pop(1)

0x1253: PushEmpty(bool, object)
0x1254: Stack[-1] = Stack[-4]
0x1255: Call2 0x13b6

0x1256: Stack[-5] = Stack[-2]
0x1257: Pop(2)
0x1258: Return(); Pop(0)

0x1259: GOTO 0x1263

0x125a: Push("battle")
0x125b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x125c: IF (Stack[-1] == 0) GOTO 0x1263; Pop(1)

0x125d: PushEmpty(bool, object)
0x125e: Stack[-1] = Stack[-4]
0x125f: Call2 0x13bb

0x1260: Stack[-5] = Stack[-2]
0x1261: Pop(2)
0x1262: Return(); Pop(0)

0x1263: Stack[-3] = (bool) 0
0x1264: Return(); Pop(0)

0x1265: PushEmpty()
0x1266: Push("unholster")
0x1267: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1268: IF (Stack[-1] == 0) GOTO 0x126e; Pop(1)

0x1269: PushEmpty(object)
0x126a: Stack[-1] = Stack[-3]
0x126b: Call2 0x13b4

0x126c: Pop(1)
0x126d: GOTO 0x127d

0x126e: Push("player_shot")
0x126f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1270: IF (Stack[-1] == 0) GOTO 0x1276; Pop(1)

0x1271: PushEmpty(object)
0x1272: Stack[-1] = Stack[-3]
0x1273: Call2 0x13b9

0x1274: Pop(1)
0x1275: GOTO 0x127d

0x1276: Push("battle")
0x1277: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1278: IF (Stack[-1] == 0) GOTO 0x127d; Pop(1)

0x1279: PushEmpty(object)
0x127a: Stack[-1] = Stack[-3]
0x127b: Call2 0x13be

0x127c: Pop(1)
0x127d: Return(); Pop(0)

0x127e: PushEmpty(bool, bool)
0x127f: PushEmpty(bool)
0x1280: Stack[-1] = (bool) 0
0x1281: PushEmpty(bool, object)
0x1282: Stack[-1] = Stack[-6]
0x1283: Call2 0x13b1

0x1284: Pop(1)
0x1285: IF (Stack[-1] == 0) GOTO 0x128c; Pop(1)

0x1286: PushEmpty(bool, object)
0x1287: Stack[-1] = Stack[-6]
0x1288: Call2 0xdd6

0x1289: Pop(1)
0x128a: IF (Stack[-1] == 0) GOTO 0x128c; Pop(1)

0x128b: Stack[-1] = (bool) 1
0x128c: IF (Stack[-1] == 0) GOTO 0x1293; Pop(1)

0x128d: @@ IsWeaponHolstered(Stack[-1])
0x128e: Pop(0)
0x128f: Pop(0); Push((bool) Stack[-1] == 0)
0x1290: IF (Stack[-1] == 0) GOTO 0x1293; Pop(1)

0x1291: Stack[-4] = (bool) 1
0x1292: Return(); Pop(2)

0x1293: Stack[-4] = (bool) 0
0x1294: Return(); Pop(2)

0x1295: PushEmpty()
0x1296: PushEmpty(object)
0x1297: Stack[-1] = Stack[-2]
0x1298: Call2 0x13b4

0x1299: Pop(1)
0x129a: Return(); Pop(0)

0x129b: PushEmpty()
0x129c: PushEmpty(bool, object)
0x129d: Stack[-1] = Stack[-3]
0x129e: Call2 0xdd6

0x129f: Pop(1)
0x12a0: IF (Stack[-1] == 0) GOTO 0x12a7; Pop(1)

0x12a1: PushEmpty(object)
0x12a2: Call2 0xfae

0x12a3: Pop(0)
0x12a4: Push((float)-0.01)
0x12a5: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x12a6: Pop(2)
0x12a7: Return(); Pop(0)

0x12a8: PushEmpty(object, object)
0x12a9: Push("heal")
0x12aa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x12ab: IF (Stack[-1] == 0) GOTO 0x12b6; Pop(1)

0x12ac: Push("player")
0x12ad: @ FindActor(Stack[-2], Stack[-1])
0x12ae: Pop(1)
0x12af: PushEmpty(bool, object)
0x12b0: Stack[-1] = Stack[-3]
0x12b1: Call2 0x13c0

0x12b2: Stack[-6] = Stack[-2]
0x12b3: Pop(2)
0x12b4: Return(); Pop(2)

0x12b5: Stack[-1] = 0
0x12b6: Stack[-4] = (bool) 0
0x12b7: Return(); Pop(2)

0x12b8: PushEmpty(object, object)
0x12b9: Push("heal")
0x12ba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x12bb: IF (Stack[-1] == 0) GOTO 0x12c4; Pop(1)

0x12bc: Push("player")
0x12bd: @ FindActor(Stack[-2], Stack[-1])
0x12be: Pop(1)
0x12bf: PushEmpty(object)
0x12c0: Stack[-1] = Stack[-2]
0x12c1: Call2 0x13c3

0x12c2: Pop(1)
0x12c3: Stack[-1] = 0
0x12c4: Return(); Pop(2)

0x12c5: PushEmpty(string, string)
0x12c6: Stack[-1] = "idle"
0x12c7: Push(Stack[-3])
0x12c8: IF (Stack[-1] == 0) GOTO 0x12ca; Pop(1)

0x12c9: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x12ca: Stack[-4] = Stack[-1]
0x12cb: Return(); Pop(2)

0x12cc: PushEmpty(int, bool, int, bool)
0x12cd: Stack[-2] = (int) 0
0x12ce: Push("all")
0x12cf: PushEmpty(string, int)
0x12d0: Stack[-1] = Stack[-5]
0x12d1: Call2 0x12c5

0x12d2: Pop(1)
0x12d3: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x12d4: Pop(2)
0x12d5: Pop(0); Push((bool) Stack[-1] == 0)
0x12d6: IF (Stack[-1] == 0) GOTO 0x12d8; Pop(1)

0x12d7: GOTO 0x12db

0x12d8: Push((int) 1)
0x12d9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12da: GOTO 0x12ce

0x12db: Stack[-5] = Stack[-2]
0x12dc: Return(); Pop(4)

0x12dd: PushEmpty()
0x12de: PushEmpty(bool, object)
0x12df: Stack[-1] = Stack[-3]
0x12e0: Call2 0x1495

0x12e1: Pop(1)
0x12e2: IF (Stack[-1] == 0) GOTO 0x12e5; Pop(1)

0x12e3: Stack[-2] = (int) 2
0x12e4: GOTO 0x12e6

0x12e5: Stack[-2] = (int) 0
0x12e6: Return(); Pop(0)

0x12e7: PushEmpty()
0x12e8: PushEmpty(object)
0x12e9: Stack[-1] = Stack[-2]
0x12ea: Call2 0x12f7

0x12eb: Pop(1)
0x12ec: Return(); Pop(0)

0x12ed: PushEmpty()
0x12ee: PushEmpty(bool, object)
0x12ef: Stack[-1] = Stack[-3]
0x12f0: Call2 0xe59

0x12f1: Pop(1)
0x12f2: IF (Stack[-1] == 0) GOTO 0x12f5; Pop(1)

0x12f3: Stack[-2] = (int) 2
0x12f4: GOTO 0x12f6

0x12f5: Stack[-2] = (int) 0
0x12f6: Return(); Pop(0)

0x12f7: PushEmpty()
0x12f8: PushEmpty(object)
0x12f9: Stack[-1] = Stack[-2]
0x12fa: Push(-1, 6); TaskCall(5)
0x12fb: Call2 0xa0e

0x12fc: Pop(-1, 6); TaskReturn
0x12fd: Pop(1)
0x12fe: Return(); Pop(0)

0x12ff: PushEmpty(string, string, string, string)
0x1300: PushEmpty(bool, object, string)
0x1301: Stack[-2] = Stack[-9]
0x1302: Stack[-1] = "class"
0x1303: Call2 0xddb

0x1304: Pop(2)
0x1305: Pop(1); Push((bool) Stack[-1] == 0)
0x1306: IF (Stack[-1] == 0) GOTO 0x1309; Pop(1)

0x1307: Stack[-7] = (bool) 0
0x1308: Return(); Pop(4)

0x1309: Push("class")
0x130a: @ GetProperty(Stack[-1], Stack[-3])
0x130b: Pop(1)
0x130c: Push("class")
0x130d: @@ GetProperty(Stack[-1], Stack[-2])
0x130e: Pop(1)
0x130f: PushEmpty(bool)
0x1310: Stack[-1] = (bool) 0
0x1311: Pop(0); Push((bool) Stack[-6] == 0)
0x1312: IF (Stack[-1] == 0) GOTO 0x1316; Pop(1)

0x1313: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0x1314: IF (Stack[-1] == 0) GOTO 0x1316; Pop(1)

0x1315: Stack[-1] = (bool) 1
0x1316: IF (Stack[-1] == 0) GOTO 0x1319; Pop(1)

0x1317: Stack[-7] = (bool) 1
0x1318: Return(); Pop(4)

0x1319: Push("rat")
0x131a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x131b: IF (Stack[-1] == 0) GOTO 0x131f; Pop(1)

0x131c: Stack[-7] = (bool) 0
0x131d: Return(); Pop(4)

0x131e: GOTO 0x1348

0x131f: Push("rat_big")
0x1320: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1321: IF (Stack[-1] == 0) GOTO 0x1325; Pop(1)

0x1322: Stack[-7] = (bool) 0
0x1323: Return(); Pop(4)

0x1324: GOTO 0x1348

0x1325: Push("dog")
0x1326: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1327: IF (Stack[-1] == 0) GOTO 0x132b; Pop(1)

0x1328: Stack[-7] = (bool) 0
0x1329: Return(); Pop(4)

0x132a: GOTO 0x1348

0x132b: Push("grabitel")
0x132c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x132d: IF (Stack[-1] == 0) GOTO 0x1331; Pop(1)

0x132e: Stack[-7] = (bool) 0
0x132f: Return(); Pop(4)

0x1330: GOTO 0x1348

0x1331: Push("bomber")
0x1332: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1333: IF (Stack[-1] == 0) GOTO 0x1337; Pop(1)

0x1334: Stack[-7] = (bool) 0
0x1335: Return(); Pop(4)

0x1336: GOTO 0x1348

0x1337: Push("sanitar")
0x1338: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1339: IF (Stack[-1] == 0) GOTO 0x133d; Pop(1)

0x133a: Stack[-7] = (bool) 0
0x133b: Return(); Pop(4)

0x133c: GOTO 0x1348

0x133d: Push("hunter")
0x133e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x133f: IF (Stack[-1] == 0) GOTO 0x1343; Pop(1)

0x1340: Stack[-7] = (bool) 0
0x1341: Return(); Pop(4)

0x1342: GOTO 0x1348

0x1343: Push("soldier")
0x1344: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1345: IF (Stack[-1] == 0) GOTO 0x1348; Pop(1)

0x1346: Stack[-7] = (bool) 0
0x1347: Return(); Pop(4)

0x1348: Stack[-7] = (bool) 1
0x1349: Return(); Pop(4)

0x134a: PushEmpty()
0x134b: PushEmpty(int, object)
0x134c: Stack[-1] = Stack[-4]
0x134d: Call2 0x12ed

0x134e: Stack[-5] = Stack[-2]
0x134f: Pop(2)
0x1350: Return(); Pop(0)

0x1351: PushEmpty()
0x1352: PushEmpty(object)
0x1353: Stack[-1] = Stack[-2]
0x1354: Call2 0x12f7

0x1355: Pop(1)
0x1356: Return(); Pop(0)

0x1357: PushEmpty(bool, bool)
0x1358: PushEmpty(bool, object, bool)
0x1359: Stack[-2] = Stack[-8]
0x135a: Stack[-1] = !Stack[-6]; Pop(0);
0x135b: Call2 0x12ff

0x135c: Pop(2)
0x135d: Pop(1); Push((bool) Stack[-1] == 0)
0x135e: IF (Stack[-1] == 0) GOTO 0x1361; Pop(1)

0x135f: Stack[-7] = (bool) 0
0x1360: Return(); Pop(2)

0x1361: @ CanSee(Stack[-1], Stack[-6])
0x1362: Pop(0)
0x1363: PushEmpty(bool)
0x1364: Stack[-1] = (bool) 1
0x1365: Push(Stack[-2])
0x1366: IF (Stack[-1] == 0) GOTO 0x136f; Pop(1)

0x1367: PushEmpty(float, object)
0x1368: Stack[-1] = Stack[-9]
0x1369: Call2 0xdce

0x136a: Pop(1)
0x136b: Pop(0); Push(Stack[-6] * Stack[-6]);
0x136c: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x136d: IF (Stack[-1] == 0) GOTO 0x136f; Pop(1)

0x136e: Stack[-1] = (bool) 0
0x136f: IF (Stack[-1] == 0) GOTO 0x1372; Pop(1)

0x1370: Stack[-7] = (bool) 1
0x1371: Return(); Pop(2)

0x1372: Stack[-7] = (bool) 0
0x1373: Return(); Pop(2)

0x1374: PushEmpty()
0x1375: Stack[-2] = (int) 0
0x1376: Return(); Pop(0)

0x1377: PushEmpty()
0x1378: Return(); Pop(0)

0x1379: PushEmpty()
0x137a: Push("killme")
0x137b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137c: IF (Stack[-1] == 0) GOTO 0x1383; Pop(1)

0x137d: PushEmpty(int, object)
0x137e: Stack[-1] = Stack[-3]
0x137f: Call2 0x138f

0x1380: Stack[-5] = Stack[-2]
0x1381: Pop(2)
0x1382: Return(); Pop(0)

0x1383: Stack[-3] = (int) 0
0x1384: Return(); Pop(0)

0x1385: PushEmpty()
0x1386: Push("killme")
0x1387: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1388: IF (Stack[-1] == 0) GOTO 0x138e; Pop(1)

0x1389: PushEmpty(object)
0x138a: Stack[-1] = Stack[-2]
0x138b: Call2 0x13a1

0x138c: Pop(1)
0x138d: Return(); Pop(0)

0x138e: Return(); Pop(0)

0x138f: PushEmpty()
0x1390: PushEmpty(bool, object)
0x1391: Stack[-1] = Stack[-3]
0x1392: Call2 0xe59

0x1393: Pop(1)
0x1394: Pop(1); Push((bool) Stack[-1] == 0)
0x1395: IF (Stack[-1] == 0) GOTO 0x1398; Pop(1)

0x1396: Stack[-2] = (int) 0
0x1397: Return(); Pop(0)

0x1398: PushEmpty(bool, object)
0x1399: Stack[-1] = Stack[-3]
0x139a: Call2 0x14a5

0x139b: Pop(1)
0x139c: IF (Stack[-1] == 0) GOTO 0x139f; Pop(1)

0x139d: Stack[-2] = (int) 2
0x139e: GOTO 0x13a0

0x139f: Stack[-2] = (int) 0
0x13a0: Return(); Pop(0)

0x13a1: PushEmpty()
0x13a2: PushEmpty(object)
0x13a3: Stack[-1] = Stack[-2]
0x13a4: Call2 0x12f7

0x13a5: Pop(1)
0x13a6: Return(); Pop(0)

0x13a7: PushEmpty()
0x13a8: Stack[-2] = (int) 2
0x13a9: Return(); Pop(0)

0x13aa: PushEmpty()
0x13ab: PushEmpty(object)
0x13ac: Stack[-1] = Stack[-2]
0x13ad: Call2 0x147d

0x13ae: Pop(1)
0x13af: Return(); Pop(0)

0x13b0: Return(); Pop(0)

0x13b1: PushEmpty()
0x13b2: Stack[-2] = (bool) 0
0x13b3: Return(); Pop(0)

0x13b4: PushEmpty()
0x13b5: Return(); Pop(0)

0x13b6: PushEmpty()
0x13b7: Stack[-2] = (bool) 0
0x13b8: Return(); Pop(0)

0x13b9: PushEmpty()
0x13ba: Return(); Pop(0)

0x13bb: PushEmpty()
0x13bc: Stack[-2] = (bool) 0
0x13bd: Return(); Pop(0)

0x13be: PushEmpty()
0x13bf: Return(); Pop(0)

0x13c0: PushEmpty()
0x13c1: Stack[-2] = (bool) 0
0x13c2: Return(); Pop(0)

0x13c3: PushEmpty()
0x13c4: Return(); Pop(0)

0x13c5: PushEmpty(object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object, object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object)
0x13c6: PushEmpty(object)
0x13c7: Call2 0xfd0

0x13c8: Stack[-27] = Stack[-1]
0x13c9: Pop(1)
0x13ca: @ CreateIntVector(Stack[-25])
0x13cb: Pop(0)
0x13cc: @ CreateIntVector(Stack[-24])
0x13cd: Pop(0)
0x13ce: @ CreateIntVector(Stack[-23])
0x13cf: Pop(0)
0x13d0: @@ GetSubContainerCount(Stack[-22])
0x13d1: Pop(0)
0x13d2: Stack[-21] = (int) 0
0x13d3: Pop(0); Push((bool) Stack[-21] < Stack[-22])
0x13d4: IF (Stack[-1] == 0) GOTO 0x141b; Pop(1)

0x13d5: @@ GetItemCount(Stack[-20], Stack[-21])
0x13d6: Pop(0)
0x13d7: Stack[-19] = (int) 0
0x13d8: Pop(0); Push((bool) Stack[-19] < Stack[-20])
0x13d9: IF (Stack[-1] == 0) GOTO 0x1418; Pop(1)

0x13da: @@ GetItem(Stack[-18], Stack[-19], Stack[-21])
0x13db: Pop(0)
0x13dc: @@ GetItemID(Stack[-17])
0x13dd: Pop(0)
0x13de: Push("HasDurability")
0x13df: @ HasInvItemProperty(Stack[-17], Stack[-18], Stack[-1])
0x13e0: Pop(1)
0x13e1: Push(Stack[-16])
0x13e2: IF (Stack[-1] == 0) GOTO 0x1414; Pop(1)

0x13e3: Push("durability")
0x13e4: @@ HasProperty(Stack[-17], Stack[-1])
0x13e5: Pop(1)
0x13e6: Push(Stack[-16])
0x13e7: IF (Stack[-1] == 0) GOTO 0x1414; Pop(1)

0x13e8: Push("durability")
0x13e9: @@ GetProperty(Stack[-16], Stack[-1])
0x13ea: Pop(1)
0x13eb: PushEmpty(bool)
0x13ec: Stack[-1] = (bool) 0
0x13ed: Push((int) 100)
0x13ee: Pop(1); Push((bool) Stack[-17] < Stack[-1])
0x13ef: IF (Stack[-1] == 0) GOTO 0x13f6; Pop(1)

0x13f0: PushEmpty(bool, object)
0x13f1: Stack[-1] = Stack[-21]
0x13f2: Call2 0x1458

0x13f3: Pop(1)
0x13f4: IF (Stack[-1] == 0) GOTO 0x13f6; Pop(1)

0x13f5: Stack[-1] = (bool) 1
0x13f6: IF (Stack[-1] == 0) GOTO 0x1414; Pop(1)

0x13f7: @@ add(Stack[-18])
0x13f8: Pop(0)
0x13f9: @@ add(Stack[-21])
0x13fa: Pop(0)
0x13fb: @@ add(Stack[-19])
0x13fc: Pop(0)
0x13fd: PushEmpty(int, object, int)
0x13fe: Stack[-2] = Stack[-21]
0x13ff: Stack[-1] = (int) 0
0x1400: Call2 0x10cf

0x1401: Stack[-17] = Stack[-3]
0x1402: Pop(3)
0x1403: Push((float)1.0)
0x1404: Push((float)2.0)
0x1405: Pop(1); Push(Stack[-1] * Stack[-17]);
0x1406: Push((float)100.0)
0x1407: Pop(2); Push(Stack[-2] / Stack[-1]);
0x1408: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1409: Pop(1); Push(Stack[-15] * Stack[-1]);
0x140a: Push((int) 100)
0x140b: Pop(1); Push(Stack[-1] - Stack[-17]);
0x140c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x140d: Push((int) 300)
0x140e: Stack[-15] = Stack[-2] / Stack[-1]; Pop(2);
0x140f: Pop(0); Push((bool) Stack[-13] == 0)
0x1410: IF (Stack[-1] == 0) GOTO 0x1412; Pop(1)

0x1411: Stack[-13] = (int) 1
0x1412: @@ add(Stack[-13])
0x1413: Pop(0)
0x1414: Stack[-18] = 0
0x1415: Push((int) 1)
0x1416: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x1417: GOTO 0x13d8

0x1418: Push((int) 1)
0x1419: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x141a: GOTO 0x13d3

0x141b: @ CreateIntVector(Stack[-12])
0x141c: Pop(0)
0x141d: Push("repair.xml")
0x141e: @ ChooseItem(Stack[-27], Stack[-13], Stack[-24], Stack[-1])
0x141f: Pop(1)
0x1420: @@ size(Stack[-11])
0x1421: Pop(0)
0x1422: Pop(0); Push((bool) Stack[-11] == 0)
0x1423: IF (Stack[-1] == 0) GOTO 0x1425; Pop(1)

0x1424: Return(); Pop(52)

0x1425: Stack[-10] = (int) 0
0x1426: Stack[-9] = (int) 0
0x1427: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0x1428: IF (Stack[-1] == 0) GOTO 0x1431; Pop(1)

0x1429: @@ get(Stack[-8], Stack[-9])
0x142a: Pop(0)
0x142b: @@ get(Stack[-7], Stack[-8])
0x142c: Pop(0)
0x142d: Stack[-10] = Stack[-10] + Stack[-7]; Pop(0);
0x142e: Push((int) 1)
0x142f: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x1430: GOTO 0x1427

0x1431: Push("money")
0x1432: @@ GetProperty(Stack[-1], Stack[-7])
0x1433: Pop(1)
0x1434: Stack[-6] = Stack[-6] - Stack[-10]; Pop(0);
0x1435: Push((int) 0)
0x1436: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1437: IF (Stack[-1] == 0) GOTO 0x1439; Pop(1)

0x1438: Return(); Pop(52)

0x1439: Push("money")
0x143a: @@ SetProperty(Stack[-1], Stack[-7])
0x143b: Pop(1)
0x143c: Stack[-5] = (int) 0
0x143d: Pop(0); Push((bool) Stack[-5] < Stack[-11])
0x143e: IF (Stack[-1] == 0) GOTO 0x1452; Pop(1)

0x143f: @@ get(Stack[-4], Stack[-5])
0x1440: Pop(0)
0x1441: @@ get(Stack[-3], Stack[-4])
0x1442: Pop(0)
0x1443: @@ get(Stack[-2], Stack[-4])
0x1444: Pop(0)
0x1445: @@ GetItem(Stack[-1], Stack[-2], Stack[-3])
0x1446: Pop(0)
0x1447: Push("durability")
0x1448: Push((int) 100)
0x1449: @@ SetProperty(Stack[-2], Stack[-1])
0x144a: Pop(2)
0x144b: Push((int) 1)
0x144c: @@ SetItem(Stack[-2], Stack[-1], Stack[-3], Stack[-4])
0x144d: Pop(1)
0x144e: Stack[-1] = 0
0x144f: Push((int) 1)
0x1450: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1451: GOTO 0x143d

0x1452: Return(); Pop(52)

0x1453: Stack[-12] = 0
0x1454: Stack[-23] = 0
0x1455: Stack[-24] = 0
0x1456: Stack[-25] = 0
0x1457: Stack[-26] = 0
0x1458: PushEmpty(int, bool, int, bool)
0x1459: @@ GetItemID(Stack[-2])
0x145a: Pop(0)
0x145b: Push("Weapon")
0x145c: @ HasInvItemProperty(Stack[-2], Stack[-3], Stack[-1])
0x145d: Pop(1)
0x145e: Stack[-6] = Stack[-1]
0x145f: Return(); Pop(4)

0x1460: PushEmpty()
0x1461: PushEmpty(int, object)
0x1462: Stack[-1] = Stack[-3]
0x1463: Push(-2, 1); TaskCall(0)
0x1464: Call2 0x0

0x1465: Pop(-2, 1); TaskReturn
0x1466: Pop(1)
0x1467: Push((int) 100)
0x1468: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1469: IF (Stack[-1] == 0) GOTO 0x146e; Pop(1)

0x146a: PushEmpty(object)
0x146b: Stack[-1] = Stack[-2]
0x146c: Call2 0x13c5

0x146d: Pop(1)
0x146e: Return(); Pop(0)

0x146f: Stack[-1] = (int) 515568
0x1470: Return(); Pop(0)

0x1471: Stack[-1] = (int) 503353
0x1472: Return(); Pop(0)

0x1473: Stack[-1] = "ui/NPC_Citizen1.png"
0x1474: Return(); Pop(0)

0x1475: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x1476: Return(); Pop(0)

0x1477: Stack[-1] = (bool) 0
0x1478: Return(); Pop(0)

0x1479: Push(GlobalVars[0])
0x147a: Stack[-1] = (bool) 0
0x147b: GlobalVars[0] = Stack[-1]; Pop(1)
0x147c: Return(); Pop(0)

0x147d: PushEmpty(bool, bool)
0x147e: Push(GlobalVars[0])
0x147f: IF (Stack[-1] == 0) GOTO 0x148a; Pop(1)

0x1480: @ IsOverrideActive(Stack[-1])
0x1481: Pop(0)
0x1482: Pop(0); Push((bool) Stack[-1] == 0)
0x1483: IF (Stack[-1] == 0) GOTO 0x1488; Pop(1)

0x1484: PushEmpty(object)
0x1485: Stack[-1] = Stack[-4]
0x1486: Call2 0x110f

0x1487: Pop(1)
0x1488: Return(); Pop(2)

0x1489: GOTO 0x1494

0x148a: PushEmpty(bool, object)
0x148b: Stack[-1] = Stack[-5]
0x148c: Call2 0x1495

0x148d: Pop(1)
0x148e: Pop(1); Push((bool) Stack[-1] == 0)
0x148f: IF (Stack[-1] == 0) GOTO 0x1494; Pop(1)

0x1490: PushEmpty(object)
0x1491: Stack[-1] = Stack[-4]
0x1492: Call2 0x1460

0x1493: Pop(1)
0x1494: Return(); Pop(2)

0x1495: PushEmpty(float, float)
0x1496: PushEmpty(bool, object)
0x1497: Stack[-1] = Stack[-5]
0x1498: Call2 0xdd6

0x1499: Pop(1)
0x149a: IF (Stack[-1] == 0) GOTO 0x14a3; Pop(1)

0x149b: Push("reputation")
0x149c: @@ GetProperty(Stack[-1], Stack[-2])
0x149d: Pop(1)
0x149e: Push((float)0.4)
0x149f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x14a0: IF (Stack[-1] == 0) GOTO 0x14a3; Pop(1)

0x14a1: Stack[-4] = (bool) 1
0x14a2: Return(); Pop(2)

0x14a3: Stack[-4] = (bool) 0
0x14a4: Return(); Pop(2)

0x14a5: PushEmpty()
0x14a6: Stack[-2] = (bool) 1
0x14a7: Return(); Pop(0)

0x14a8: PushEmpty()
0x14a9: PushEmpty(bool, object, object, float, bool)
0x14aa: Stack[-4] = Stack[-8]
0x14ab: Stack[-3] = Stack[-7]
0x14ac: Stack[-2] = (float) 700.0
0x14ad: Stack[-1] = Stack[-6]
0x14ae: Call2 0x1357

0x14af: Stack[-9] = Stack[-5]
0x14b0: Pop(5)
0x14b1: Return(); Pop(0)

0x14b2: PushEmpty()
0x14b3: PushEmpty(bool, object)
0x14b4: Stack[-1] = Stack[-3]
0x14b5: Call2 0xdd6

0x14b6: Pop(1)
0x14b7: IF (Stack[-1] == 0) GOTO 0x14c3; Pop(1)

0x14b8: PushEmpty(object)
0x14b9: Call2 0xfae

0x14ba: Pop(0)
0x14bb: Push((float)-0.04)
0x14bc: Push((bool) 1)
0x14bd: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14be: Pop(3)
0x14bf: PushEmpty(bool)
0x14c0: Stack[-1] = (bool) 1
0x14c1: Call2 0x1164

0x14c2: Pop(1)
0x14c3: PushEmpty()
0x14c4: Call2 0x114c

0x14c5: Pop(0)
0x14c6: Push(GlobalVars[0])
0x14c7: Stack[-1] = (bool) 1
0x14c8: GlobalVars[0] = Stack[-1]; Pop(1)
0x14c9: Push((int) 50)
0x14ca: Push((int) 40)
0x14cb: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x14cc: Pop(2)
0x14cd: Return(); Pop(0)

