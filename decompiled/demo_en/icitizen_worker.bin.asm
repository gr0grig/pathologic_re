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
	GTASK_3 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x7ce Vars = (object)
		EVENT_17 Op = 0x7e2 Vars = (object)
		EVENT_30 Op = 0x7fa Vars = (object, object, bool)
		EVENT_40 Op = 0x816 Vars = (object)
		EVENT_42 Op = 0x82a Vars = (object, string)
		EVENT_26 Op = 0x84f Vars = (string)
		EVENT_1 Op = 0x85d Vars = (object)
		EVENT_3 Op = 0x873 Vars = (object)
		EVENT_7 Op = 0x87c Vars = (int)
		EVENT_6 Op = 0x888 Vars = ()
		EVENT_41 Op = 0x89c Vars = (object)
	GTASK_4 Vars = (object) Params = 1
		EVENT_0 Op = 0x8fe Vars = (object)
		EVENT_17 Op = 0x912 Vars = (object)
		EVENT_30 Op = 0x92a Vars = (object, object, bool)
		EVENT_40 Op = 0x946 Vars = (object)
		EVENT_42 Op = 0x95a Vars = (object, string)
		EVENT_26 Op = 0x97f Vars = (string)
		EVENT_41 Op = 0x998 Vars = (object)
		EVENT_7 Op = 0x9a1 Vars = (int)
		EVENT_6 Op = 0x9c4 Vars = ()
		EVENT_1 Op = 0x9cb Vars = (object)
	GTASK_5 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_6 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0xc7d Vars = ()
		EVENT_7 Op = 0xcb5 Vars = (int)
		EVENT_1 Op = 0xcd0 Vars = (object)
		EVENT_2 Op = 0xcdf Vars = (object)
		EVENT_10 Op = 0xd65 Vars = (object)
		EVENT_41 Op = 0xd70 Vars = (object)

Events:
EVENT_16 Op = 0x120f Vars = (object, string)
EVENT_41 Op = 0x121c Vars = (object)
EVENT_22 Op = 0x1222 Vars = (object, int, float, float)
EVENT_43 Op = 0x122a Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xeca

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1448

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1446

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x144a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x144c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x10a2

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
0x41: Call2 0xf0e

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
0x52: Call2 0x100e

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
0x60: Call2 0x101a

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x63: Push((int) 538210)
0x64: Push((int) -1)
0x65: Push((int) 40087)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x101a

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6d: Push((int) 543042)
0x6e: Push((int) -1)
0x6f: Push((int) 45494)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: PushEmpty(bool, object)
0x73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74: Call2 0x101a

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
0x82: Call2 0x102e

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x1038

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 0
0x8b: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8c: PushEmpty(bool, object)
0x8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e: Call2 0x1042

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
0x9c: Call2 0x102e

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9f: PushEmpty(bool, object)
0xa0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Call2 0x1038

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
0xb1: Call2 0x104c

0xb2: Pop(1)
0xb3: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb4: PushEmpty(bool, object)
0xb5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Call2 0x1056

0xb7: Pop(1)
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Stack[-1] = (bool) 0
0xba: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbb: PushEmpty(bool, object)
0xbc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Call2 0x1060

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
0xcf: Call2 0x1042

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Call2 0x104c

0xd5: Pop(1)
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Stack[-1] = (bool) 0
0xd8: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd9: PushEmpty(bool, object)
0xda: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Call2 0x1056

0xdc: Pop(1)
0xdd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xde: Stack[-1] = (bool) 0
0xdf: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x1060

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
0xf8: Call2 0xff6

0xf9: Pop(1)
0xfa: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfb: Push((int) 538208)
0xfc: Push((int) -1)
0xfd: Push((int) 40085)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: PushEmpty(bool, object)
0x101: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x102: Call2 0x1002

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
0x10e: Call2 0xff6

0x10f: Pop(1)
0x110: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x111: PushEmpty(bool, object)
0x112: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x113: Call2 0x1024

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
0x126: Call2 0x144e

0x127: Pop(0)
0x128: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x129: @ lshWaitForAnimEnd()
0x12a: Pop(0)
0x12b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x12c: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12d: GOTO 0x133

0x12e: PushEmpty(string)
0x12f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x130: Call2 0xf1f

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
0x145: Call2 0x144e

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
0x155: Call2 0xf2f

0x156: Pop(2)
0x157: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x158: Return(); Pop(0)

0x159: PushEmpty()
0x15a: Push((int) 1)
0x15b: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x15c: PushEmpty()
0x15d: Call2 0xf49

0x15e: Pop(0)
0x15f: Push((int) 40087)
0x160: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: PushEmpty(object, object)
0x163: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x164: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x165: Call2 0xff1

0x166: Pop(2)
0x167: Push((int) 45510)
0x168: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: PushEmpty(object, object)
0x16b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16d: Call2 0xff1

0x16e: Pop(2)
0x16f: Push((int) 45517)
0x170: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x172: PushEmpty(object, object)
0x173: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x174: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x175: Call2 0xff1

0x176: Pop(2)
0x177: Push((int) 40085)
0x178: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: PushEmpty(object, object)
0x17b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17d: Call2 0xff1

0x17e: Pop(2)
0x17f: Push((int) 40086)
0x180: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x182: PushEmpty(object, object)
0x183: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x184: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x185: Call2 0xff1

0x186: Pop(2)
0x187: Push((int) 45493)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x18a: PushEmpty(bool, object)
0x18b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18c: Call2 0x100e

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
0x19a: Call2 0x101a

0x19b: Pop(1)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: Push((int) 538210)
0x19e: Push((int) -1)
0x19f: Push((int) 40087)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0x101a

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a7: Push((int) 543042)
0x1a8: Push((int) -1)
0x1a9: Push((int) 45494)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: PushEmpty(bool, object)
0x1ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ae: Call2 0x101a

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
0x1bc: Call2 0x102e

0x1bd: Pop(1)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call2 0x1038

0x1c2: Pop(1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[-1] = (bool) 0
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c6: PushEmpty(bool, object)
0x1c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Call2 0x1042

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
0x1d6: Call2 0x102e

0x1d7: Pop(1)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d9: PushEmpty(bool, object)
0x1da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Call2 0x1038

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
0x1eb: Call2 0x104c

0x1ec: Pop(1)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ee: PushEmpty(bool, object)
0x1ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f0: Call2 0x1056

0x1f1: Pop(1)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: Stack[-1] = (bool) 0
0x1f4: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f5: PushEmpty(bool, object)
0x1f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f7: Call2 0x1060

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
0x209: Call2 0x1042

0x20a: Pop(1)
0x20b: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20c: PushEmpty(bool, object)
0x20d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20e: Call2 0x104c

0x20f: Pop(1)
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Stack[-1] = (bool) 0
0x212: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x213: PushEmpty(bool, object)
0x214: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x215: Call2 0x1056

0x216: Pop(1)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: Stack[-1] = (bool) 0
0x219: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21a: PushEmpty(bool, object)
0x21b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21c: Call2 0x1060

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
0x232: Call2 0xff6

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x235: Push((int) 538208)
0x236: Push((int) -1)
0x237: Push((int) 40085)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: PushEmpty(bool, object)
0x23b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23c: Call2 0x1002

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
0x248: Call2 0xff6

0x249: Pop(1)
0x24a: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24b: PushEmpty(bool, object)
0x24c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24d: Call2 0x1024

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
0x4b6: Call2 0xff6

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
0x6fc: Call2 0x144e

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
0x70f: Call2 0x1494

0x710: Pop(1)
0x711: EventEnable(0)
0x712: @ Hold()
0x713: Pop(0)
0x714: GOTO 0x712

0x715: Return(); Pop(0)

0x716: PushEmpty(int, int)
0x717: PushEmpty(int, object)
0x718: Stack[-1] = Stack[-5]
0x719: Call2 0x134c

0x71a: Stack[-3] = Stack[-2]
0x71b: Pop(2)
0x71c: Push((int) 0)
0x71d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x71e: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x71f: PushEmpty(object)
0x720: Stack[-1] = Stack[-4]
0x721: Call2 0x134f

0x722: Pop(1)
0x723: Return(); Pop(2)

0x724: PushEmpty()
0x725: Call2 0x1355

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
0x76e: Call2 0xf50

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
0x790: Call2 0xf50

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

0x7a3: PushEmpty(int, int, int, int)
0x7a4: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7a5: Push((bool) 1)
0x7a6: @ SensePlayerOnly(Stack[-1])
0x7a7: Pop(1)
0x7a8: PushEmpty()
0x7a9: Call2 0x1450

0x7aa: Pop(0)
0x7ab: PushEmpty()
0x7ac: Call2 0x7c5

0x7ad: Pop(0)
0x7ae: Push((int) 2)
0x7af: @ irand(Stack[-3], Stack[-1])
0x7b0: Pop(1)
0x7b1: Push((int) 0)
0x7b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7b4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x7b5: PushEmpty()
0x7b6: Call2 0x146a

0x7b7: Pop(0)
0x7b8: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7b9: @ ResetAAS()
0x7ba: Pop(0)
0x7bb: GOTO 0x7c3

0x7bc: Push((int) 4)
0x7bd: @ irand(Stack[-2], Stack[-1])
0x7be: Pop(1)
0x7bf: Push((int) 1)
0x7c0: Pop(1); Push(Stack[-2] + Stack[-1]);
0x7c1: @ Sleep(Stack[-1])
0x7c2: Pop(1)
0x7c3: GOTO 0x7ae

0x7c4: Return(); Pop(4)

0x7c5: PushEmpty(bool)
0x7c6: Call2 0xec5

0x7c7: Pop(0)
0x7c8: Pop(1); Push((bool) Stack[-1] == 0)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7ca: PushEmpty()
0x7cb: Call2 0x1355

0x7cc: Pop(0)
0x7cd: Return(); Pop(0)

0x7ce: PushEmpty(int, int)
0x7cf: PushEmpty(int, object)
0x7d0: Stack[-1] = Stack[-5]
0x7d1: Call2 0x134c

0x7d2: Stack[-3] = Stack[-2]
0x7d3: Pop(2)
0x7d4: Push((int) 0)
0x7d5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7d6: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7d7: Push((int) 1)
0x7d8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7da: PushEmpty()
0x7db: Call2 0x88f

0x7dc: Pop(0)
0x7dd: PushEmpty(object)
0x7de: Stack[-1] = Stack[-4]
0x7df: Call2 0x134f

0x7e0: Pop(1)
0x7e1: Return(); Pop(2)

0x7e2: PushEmpty(int, int)
0x7e3: PushEmpty(object)
0x7e4: Stack[-1] = Stack[-4]
0x7e5: Call2 0x128a

0x7e6: Pop(1)
0x7e7: PushEmpty(int, object)
0x7e8: Stack[-1] = Stack[-5]
0x7e9: Call2 0x12c5

0x7ea: Stack[-3] = Stack[-2]
0x7eb: Pop(2)
0x7ec: Push((int) 0)
0x7ed: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7ef: Push((int) 1)
0x7f0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f2: PushEmpty()
0x7f3: Call2 0x88f

0x7f4: Pop(0)
0x7f5: PushEmpty(object)
0x7f6: Stack[-1] = Stack[-4]
0x7f7: Call2 0x12cf

0x7f8: Pop(1)
0x7f9: Return(); Pop(2)

0x7fa: PushEmpty(int, int)
0x7fb: PushEmpty(bool, object, object, bool)
0x7fc: Stack[-3] = Stack[-9]
0x7fd: Stack[-2] = Stack[-8]
0x7fe: Stack[-1] = Stack[-7]
0x7ff: Call2 0x148a

0x800: Pop(3)
0x801: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x802: PushEmpty(int, object, bool)
0x803: Stack[-2] = Stack[-8]
0x804: Stack[-1] = Stack[-6]
0x805: Call2 0x1322

0x806: Stack[-4] = Stack[-3]
0x807: Pop(3)
0x808: Push((int) 0)
0x809: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x80b: Push((int) 1)
0x80c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x80d: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x80e: PushEmpty()
0x80f: Call2 0x88f

0x810: Pop(0)
0x811: PushEmpty(object)
0x812: Stack[-1] = Stack[-6]
0x813: Call2 0x1329

0x814: Pop(1)
0x815: Return(); Pop(2)

0x816: PushEmpty(int, int)
0x817: PushEmpty(int, object)
0x818: Stack[-1] = Stack[-5]
0x819: Call2 0x1356

0x81a: Stack[-3] = Stack[-2]
0x81b: Pop(2)
0x81c: Push((int) 0)
0x81d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x81e: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x81f: Push((int) 1)
0x820: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x821: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x822: PushEmpty()
0x823: Call2 0x88f

0x824: Pop(0)
0x825: PushEmpty(object)
0x826: Stack[-1] = Stack[-4]
0x827: Call2 0x1366

0x828: Pop(1)
0x829: Return(); Pop(2)

0x82a: PushEmpty(int, int)
0x82b: PushEmpty(bool, object, string)
0x82c: Stack[-2] = Stack[-7]
0x82d: Stack[-1] = Stack[-6]
0x82e: Call2 0x1234

0x82f: Pop(2)
0x830: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x831: PushEmpty()
0x832: Call2 0x88f

0x833: Pop(0)
0x834: PushEmpty(object, string)
0x835: Stack[-2] = Stack[-6]
0x836: Stack[-1] = Stack[-5]
0x837: Call2 0x1254

0x838: Pop(2)
0x839: GOTO 0x84e

0x83a: PushEmpty(int, string, object)
0x83b: Stack[-2] = Stack[-6]
0x83c: Stack[-1] = Stack[-7]
0x83d: Call2 0x136c

0x83e: Stack[-4] = Stack[-3]
0x83f: Pop(3)
0x840: Push((int) 0)
0x841: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x842: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x843: Push((int) 1)
0x844: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x845: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x846: PushEmpty()
0x847: Call2 0x88f

0x848: Pop(0)
0x849: PushEmpty(string, object)
0x84a: Stack[-2] = Stack[-5]
0x84b: Stack[-1] = Stack[-6]
0x84c: Call2 0x136f

0x84d: Pop(2)
0x84e: Return(); Pop(2)

0x84f: PushEmpty()
0x850: PushEmpty(bool, string)
0x851: Stack[-1] = Stack[-3]
0x852: Call2 0x1297

0x853: Pop(1)
0x854: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x855: PushEmpty()
0x856: Call2 0x88f

0x857: Pop(0)
0x858: PushEmpty(string)
0x859: Stack[-1] = Stack[-2]
0x85a: Call2 0x12a7

0x85b: Pop(1)
0x85c: Return(); Pop(0)

0x85d: PushEmpty()
0x85e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x85f: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x860: Return(); Pop(0)

0x861: PushEmpty(bool, object)
0x862: Stack[-1] = Stack[-3]
0x863: Call2 0x126d

0x864: Pop(1)
0x865: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x866: PushEmpty()
0x867: Call2 0x88f

0x868: Pop(0)
0x869: PushEmpty(object)
0x86a: Stack[-1] = Stack[-2]
0x86b: Call2 0x1284

0x86c: Pop(1)
0x86d: GOTO 0x872

0x86e: PushEmpty(object)
0x86f: Stack[-1] = Stack[-2]
0x870: Call2 0x8a5

0x871: Pop(1)
0x872: Return(); Pop(0)

0x873: PushEmpty()
0x874: Push( Stack[0 + Tasks[-1].StackPointer] )
0x875: IF (Stack[-1] == 0) GOTO 0x877; Pop(1)

0x876: Return(); Pop(0)

0x877: PushEmpty(object)
0x878: Stack[-1] = Stack[-2]
0x879: Call2 0x8a5

0x87a: Pop(1)
0x87b: Return(); Pop(0)

0x87c: PushEmpty()
0x87d: Push((int) 110)
0x87e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x87f: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x880: Return(); Pop(0)

0x881: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x882: Push((int) 110)
0x883: @ KillTimer(Stack[-1])
0x884: Pop(1)
0x885: @ ResetAAS()
0x886: Pop(0)
0x887: Return(); Pop(0)

0x888: PushEmpty()
0x889: Call2 0x88f

0x88a: Pop(0)
0x88b: PushEmpty()
0x88c: Call2 0x1355

0x88d: Pop(0)
0x88e: Return(); Pop(0)

0x88f: Push((int) 110)
0x890: @ KillTimer(Stack[-1])
0x891: Pop(1)
0x892: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x893: Push( Stack[0 + Tasks[-1].StackPointer] )
0x894: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x895: PushEmpty()
0x896: Call2 0x1485

0x897: Pop(0)
0x898: GOTO 0x89b

0x899: @ Stop()
0x89a: Pop(0)
0x89b: Return(); Pop(0)

0x89c: PushEmpty()
0x89d: PushEmpty()
0x89e: Call2 0x88f

0x89f: Pop(0)
0x8a0: PushEmpty(object)
0x8a1: Stack[-1] = Stack[-2]
0x8a2: Call2 0x121c

0x8a3: Pop(1)
0x8a4: Return(); Pop(0)

0x8a5: PushEmpty(bool, int, bool, int)
0x8a6: Push( Stack[1 + Tasks[-1].StackPointer] )
0x8a7: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x8a8: Return(); Pop(4)

0x8a9: @ IsPlayerActor(Stack[-5], Stack[-2])
0x8aa: Pop(0)
0x8ab: Pop(0); Push((bool) Stack[-2] == 0)
0x8ac: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8ad: Return(); Pop(4)

0x8ae: PushEmpty(int, object)
0x8af: Stack[-1] = Stack[-7]
0x8b0: Call2 0x12b4

0x8b1: Stack[-3] = Stack[-2]
0x8b2: Pop(2)
0x8b3: Push((int) 0)
0x8b4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8b5: IF (Stack[-1] == 0) GOTO 0x8c5; Pop(1)

0x8b6: Push((int) 1)
0x8b7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8b9: PushEmpty()
0x8ba: Call2 0x88f

0x8bb: Pop(0)
0x8bc: PushEmpty(object)
0x8bd: Stack[-1] = Stack[-6]
0x8be: Call2 0x12bd

0x8bf: Pop(1)
0x8c0: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x8c1: Push((int) 110)
0x8c2: Push((float)5.0)
0x8c3: @ SetTimer(Stack[-2], Stack[-1])
0x8c4: Pop(2)
0x8c5: Return(); Pop(4)

0x8c6: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x8c7: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x8c8: PushEmpty()
0x8c9: Call2 0x8f9

0x8ca: Pop(0)
0x8cb: @ GetDirection(Stack[-3])
0x8cc: Pop(0)
0x8cd: PushEmpty(cvector, object)
0x8ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8cf: Call2 0xd92

0x8d0: Stack[-4] = Stack[-2]
0x8d1: Pop(2)
0x8d2: PushEmpty(float, cvector, cvector)
0x8d3: Stack[-2] = Stack[-6]
0x8d4: Stack[-1] = Stack[-5]
0x8d5: Call2 0xfb4

0x8d6: Pop(2)
0x8d7: Push((int) 0)
0x8d8: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x8d9: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8da: PushEmpty(object)
0x8db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8dc: Call2 0xeba

0x8dd: Pop(1)
0x8de: Stack[-1] = (bool) 1
0x8df: GOTO 0x8e3

0x8e0: Push((float)1.5)
0x8e1: @ Sleep(Stack[-1], Stack[-2])
0x8e2: Pop(1)
0x8e3: Push(Stack[-1])
0x8e4: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8e5: PushEmpty(object)
0x8e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8e7: Call2 0xeba

0x8e8: Pop(1)
0x8e9: Push((int) 111)
0x8ea: Push((float)0.5)
0x8eb: @ SetTimer(Stack[-2], Stack[-1])
0x8ec: Pop(2)
0x8ed: Push((float)5.0)
0x8ee: @ Sleep(Stack[-1])
0x8ef: Pop(1)
0x8f0: Push((int) 111)
0x8f1: @ KillTimer(Stack[-1])
0x8f2: Pop(1)
0x8f3: @ StopAsync()
0x8f4: Pop(0)
0x8f5: Push("head")
0x8f6: @ UnlookAsync(Stack[-1])
0x8f7: Pop(1)
0x8f8: Return(); Pop(6)

0x8f9: PushEmpty(object)
0x8fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8fb: Call2 0xf3e

0x8fc: Pop(1)
0x8fd: Return(); Pop(0)

0x8fe: PushEmpty(int, int)
0x8ff: PushEmpty(int, object)
0x900: Stack[-1] = Stack[-5]
0x901: Call2 0x134c

0x902: Stack[-3] = Stack[-2]
0x903: Pop(2)
0x904: Push((int) 0)
0x905: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x906: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x907: Push((int) 1)
0x908: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x909: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x90a: PushEmpty()
0x90b: Call2 0x98d

0x90c: Pop(0)
0x90d: PushEmpty(object)
0x90e: Stack[-1] = Stack[-4]
0x90f: Call2 0x134f

0x910: Pop(1)
0x911: Return(); Pop(2)

0x912: PushEmpty(int, int)
0x913: PushEmpty(object)
0x914: Stack[-1] = Stack[-4]
0x915: Call2 0x128a

0x916: Pop(1)
0x917: PushEmpty(int, object)
0x918: Stack[-1] = Stack[-5]
0x919: Call2 0x12c5

0x91a: Stack[-3] = Stack[-2]
0x91b: Pop(2)
0x91c: Push((int) 0)
0x91d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x91e: IF (Stack[-1] == 0) GOTO 0x929; Pop(1)

0x91f: Push((int) 1)
0x920: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x921: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x922: PushEmpty()
0x923: Call2 0x98d

0x924: Pop(0)
0x925: PushEmpty(object)
0x926: Stack[-1] = Stack[-4]
0x927: Call2 0x12cf

0x928: Pop(1)
0x929: Return(); Pop(2)

0x92a: PushEmpty(int, int)
0x92b: PushEmpty(bool, object, object, bool)
0x92c: Stack[-3] = Stack[-9]
0x92d: Stack[-2] = Stack[-8]
0x92e: Stack[-1] = Stack[-7]
0x92f: Call2 0x148a

0x930: Pop(3)
0x931: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x932: PushEmpty(int, object, bool)
0x933: Stack[-2] = Stack[-8]
0x934: Stack[-1] = Stack[-6]
0x935: Call2 0x1322

0x936: Stack[-4] = Stack[-3]
0x937: Pop(3)
0x938: Push((int) 0)
0x939: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x93a: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x93b: Push((int) 1)
0x93c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x93d: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x93e: PushEmpty()
0x93f: Call2 0x98d

0x940: Pop(0)
0x941: PushEmpty(object)
0x942: Stack[-1] = Stack[-6]
0x943: Call2 0x1329

0x944: Pop(1)
0x945: Return(); Pop(2)

0x946: PushEmpty(int, int)
0x947: PushEmpty(int, object)
0x948: Stack[-1] = Stack[-5]
0x949: Call2 0x1356

0x94a: Stack[-3] = Stack[-2]
0x94b: Pop(2)
0x94c: Push((int) 0)
0x94d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x94e: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x94f: Push((int) 1)
0x950: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x951: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x952: PushEmpty()
0x953: Call2 0x98d

0x954: Pop(0)
0x955: PushEmpty(object)
0x956: Stack[-1] = Stack[-4]
0x957: Call2 0x1366

0x958: Pop(1)
0x959: Return(); Pop(2)

0x95a: PushEmpty(int, int)
0x95b: PushEmpty(bool, object, string)
0x95c: Stack[-2] = Stack[-7]
0x95d: Stack[-1] = Stack[-6]
0x95e: Call2 0x1234

0x95f: Pop(2)
0x960: IF (Stack[-1] == 0) GOTO 0x96a; Pop(1)

0x961: PushEmpty()
0x962: Call2 0x98d

0x963: Pop(0)
0x964: PushEmpty(object, string)
0x965: Stack[-2] = Stack[-6]
0x966: Stack[-1] = Stack[-5]
0x967: Call2 0x1254

0x968: Pop(2)
0x969: GOTO 0x97e

0x96a: PushEmpty(int, string, object)
0x96b: Stack[-2] = Stack[-6]
0x96c: Stack[-1] = Stack[-7]
0x96d: Call2 0x136c

0x96e: Stack[-4] = Stack[-3]
0x96f: Pop(3)
0x970: Push((int) 0)
0x971: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x972: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x973: Push((int) 1)
0x974: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x975: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x976: PushEmpty()
0x977: Call2 0x98d

0x978: Pop(0)
0x979: PushEmpty(string, object)
0x97a: Stack[-2] = Stack[-5]
0x97b: Stack[-1] = Stack[-6]
0x97c: Call2 0x136f

0x97d: Pop(2)
0x97e: Return(); Pop(2)

0x97f: PushEmpty()
0x980: PushEmpty(bool, string)
0x981: Stack[-1] = Stack[-3]
0x982: Call2 0x1297

0x983: Pop(1)
0x984: IF (Stack[-1] == 0) GOTO 0x98c; Pop(1)

0x985: PushEmpty()
0x986: Call2 0x98d

0x987: Pop(0)
0x988: PushEmpty(string)
0x989: Stack[-1] = Stack[-2]
0x98a: Call2 0x12a7

0x98b: Pop(1)
0x98c: Return(); Pop(0)

0x98d: @ StopGroup0()
0x98e: Pop(0)
0x98f: @ StopAsync()
0x990: Pop(0)
0x991: Push("head")
0x992: @ UnlookAsync(Stack[-1])
0x993: Pop(1)
0x994: Push((int) 111)
0x995: @ KillTimer(Stack[-1])
0x996: Pop(1)
0x997: Return(); Pop(0)

0x998: PushEmpty()
0x999: PushEmpty()
0x99a: Call2 0x98d

0x99b: Pop(0)
0x99c: PushEmpty(object)
0x99d: Stack[-1] = Stack[-2]
0x99e: Call2 0x121c

0x99f: Pop(1)
0x9a0: Return(); Pop(0)

0x9a1: PushEmpty(cvector, cvector, cvector, cvector)
0x9a2: Push((int) 111)
0x9a3: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x9a4: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x9a5: Return(); Pop(4)

0x9a6: PushEmpty(bool, object)
0x9a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a8: Call2 0xe24

0x9a9: Pop(1)
0x9aa: Pop(1); Push((bool) Stack[-1] == 0)
0x9ab: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9ac: PushEmpty()
0x9ad: Call2 0x98d

0x9ae: Pop(0)
0x9af: Return(); Pop(4)

0x9b0: @ GetDirection(Stack[-2])
0x9b1: Pop(0)
0x9b2: PushEmpty(cvector, object)
0x9b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b4: Call2 0xd92

0x9b5: Stack[-3] = Stack[-2]
0x9b6: Pop(2)
0x9b7: PushEmpty(float, cvector, cvector)
0x9b8: Stack[-2] = Stack[-5]
0x9b9: Stack[-1] = Stack[-4]
0x9ba: Call2 0xfb4

0x9bb: Pop(2)
0x9bc: Push((float)0.5)
0x9bd: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x9be: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9bf: PushEmpty(object)
0x9c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c1: Call2 0xeba

0x9c2: Pop(1)
0x9c3: Return(); Pop(4)

0x9c4: PushEmpty()
0x9c5: Call2 0x98d

0x9c6: Pop(0)
0x9c7: PushEmpty()
0x9c8: Call2 0x1355

0x9c9: Pop(0)
0x9ca: Return(); Pop(0)

0x9cb: PushEmpty()
0x9cc: PushEmpty(bool, object)
0x9cd: Stack[-1] = Stack[-3]
0x9ce: Call2 0x126d

0x9cf: Pop(1)
0x9d0: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d1: PushEmpty()
0x9d2: Call2 0x98d

0x9d3: Pop(0)
0x9d4: PushEmpty(object)
0x9d5: Stack[-1] = Stack[-2]
0x9d6: Call2 0x1284

0x9d7: Pop(1)
0x9d8: Return(); Pop(0)

0x9d9: PushEmpty()
0x9da: PushEmpty(object, bool, float)
0x9db: Stack[-3] = Stack[-4]
0x9dc: Stack[-2] = (bool) 1
0x9dd: Stack[-1] = (float) 180.0
0x9de: Call2 0x9e7

0x9df: Pop(3)
0x9e0: Return(); Pop(0)

0x9e1: PushEmpty()
0x9e2: Stack[-3] = (float) 0.05
0x9e3: Return(); Pop(0)

0x9e4: PushEmpty()
0x9e5: Stack[-3] = (int) 0
0x9e6: Return(); Pop(0)

0x9e7: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x9e8: PushEmpty()
0x9e9: Call2 0xacc

0x9ea: Pop(0)
0x9eb: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x9ec: Push("@GetAttackDistance")
0x9ed: Push((int) 1)
0x9ee: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f0: @@ GetAttackDistance(Stack[-11])
0x9f1: Pop(0)
0x9f2: Push((int) 50)
0x9f3: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x9f4: GOTO 0x9f6

0x9f5: Stack[-11] = Stack[-23]
0x9f6: Push((int) 150)
0x9f7: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x9f8: IF (Stack[-1] == 0) GOTO 0x9fa; Pop(1)

0x9f9: Stack[-11] = (int) 150
0x9fa: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x9fc: @ IsPlayerActor(Stack[-0], Stack[-8])
0x9fd: Pop(0)
0x9fe: Push(Stack[-8])
0x9ff: IF (Stack[-1] == 0) GOTO 0xa08; Pop(1)

0xa00: Push("attack")
0xa01: @ PlayGlobalMusic(Stack[-1])
0xa02: Pop(1)
0xa03: PushEmpty(object)
0xa04: Call2 0xf79

0xa05: Pop(0)
0xa06: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xa07: Pop(1)
0xa08: Push(Stack[-24])
0xa09: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa0a: Stack[-7] = (bool) 0
0xa0b: GOTO 0xa0d

0xa0c: Stack[-7] = (bool) 1
0xa0d: Push((float)400.0)
0xa0e: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xa0f: PushEmpty(bool)
0xa10: Stack[-1] = (bool) 0
0xa11: PushEmpty(bool, object)
0xa12: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa13: Call2 0xe24

0xa14: Pop(1)
0xa15: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa16: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xa17: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa18: Stack[-1] = (bool) 1
0xa19: IF (Stack[-1] == 0) GOTO 0xabb; Pop(1)

0xa1a: PushEmpty()
0xa1b: Call2 0xc69

0xa1c: Pop(0)
0xa1d: @@ GetPFPosition(Stack[-10])
0xa1e: Pop(0)
0xa1f: @ GetPFPosition(Stack[-9])
0xa20: Pop(0)
0xa21: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xa22: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xa23: Pop(0); Push(Stack[-6] * Stack[-6]);
0xa24: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xa25: IF (Stack[-1] == 0) GOTO 0xa35; Pop(1)

0xa26: PushEmpty(bool, object, float, float, bool, bool)
0xa27: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xa28: Stack[-4] = Stack[-17]
0xa29: Stack[-3] = (float) 3000.0
0xa2a: Stack[-2] = (bool) 1
0xa2b: Stack[-1] = (bool) 0
0xa2c: Push(-6, 3); TaskCall(6)
0xa2d: Call2 0xc84

0xa2e: Pop(-6, 3); TaskReturn
0xa2f: Pop(5)
0xa30: Pop(1); Push((bool) Stack[-1] == 0)
0xa31: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa32: GOTO 0xabb

0xa33: Stack[-7] = (bool) 0
0xa34: GOTO 0xaba

0xa35: Pop(0); Push(Stack[-23] * Stack[-23]);
0xa36: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xa37: IF (Stack[-1] == 0) GOTO 0xab2; Pop(1)

0xa38: @@ GetPFPosition(Stack[-3])
0xa39: Pop(0)
0xa3a: @ CanReachByPF(Stack[-2], Stack[-3])
0xa3b: Pop(0)
0xa3c: Pop(0); Push((bool) Stack[-2] == 0)
0xa3d: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa3e: PushEmpty(bool, object, float, float, bool, bool)
0xa3f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xa40: Stack[-4] = Stack[-17]
0xa41: Stack[-3] = (float) 3000.0
0xa42: Stack[-2] = (bool) 1
0xa43: Stack[-1] = (bool) 0
0xa44: Push(-6, 3); TaskCall(6)
0xa45: Call2 0xc84

0xa46: Pop(-6, 3); TaskReturn
0xa47: Pop(5)
0xa48: Pop(1); Push((bool) Stack[-1] == 0)
0xa49: IF (Stack[-1] == 0) GOTO 0xa4b; Pop(1)

0xa4a: GOTO 0xabb

0xa4b: Stack[-7] = (bool) 0
0xa4c: GOTO 0xa0f

0xa4d: Pop(0); Push((bool) Stack[-7] == 0)
0xa4e: IF (Stack[-1] == 0) GOTO 0xa66; Pop(1)

0xa4f: PushEmpty(object)
0xa50: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa51: Call2 0xeba

0xa52: Pop(1)
0xa53: Push("all")
0xa54: Push("attack_on")
0xa55: @ PlayAnimation(Stack[-2], Stack[-1])
0xa56: Pop(2)
0xa57: @ WaitForAnimEnd()
0xa58: Pop(0)
0xa59: PushEmpty()
0xa5a: Call2 0xc69

0xa5b: Pop(0)
0xa5c: @ StopAsync()
0xa5d: Pop(0)
0xa5e: Stack[-7] = (bool) 1
0xa5f: PushEmpty(bool, object)
0xa60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa61: Call2 0xe24

0xa62: Pop(1)
0xa63: Pop(1); Push((bool) Stack[-1] == 0)
0xa64: IF (Stack[-1] == 0) GOTO 0xa66; Pop(1)

0xa65: GOTO 0xabb

0xa66: @ rand(Stack[-1])
0xa67: Pop(0)
0xa68: PushEmpty(bool)
0xa69: Stack[-1] = (bool) 1
0xa6a: Push((float)0.25)
0xa6b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xa6c: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa6d: PushEmpty(bool)
0xa6e: Call2 0xc3e

0xa6f: Pop(0)
0xa70: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa71: Stack[-1] = (bool) 0
0xa72: IF (Stack[-1] == 0) GOTO 0xa83; Pop(1)

0xa73: @ Face(Stack[-0])
0xa74: Pop(0)
0xa75: PushEmpty()
0xa76: Call2 0xc70

0xa77: Pop(0)
0xa78: Push("all")
0xa79: Push("attack_stay")
0xa7a: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7b: Pop(2)
0xa7c: PushEmpty(bool, float)
0xa7d: Stack[-1] = Stack[-25]
0xa7e: Call2 0xbba

0xa7f: Pop(2)
0xa80: @ StopAsync()
0xa81: Pop(0)
0xa82: GOTO 0xab1

0xa83: @ Face(Stack[-0])
0xa84: Pop(0)
0xa85: Push("all")
0xa86: Push("fjump")
0xa87: @ PlayAnimation(Stack[-2], Stack[-1])
0xa88: Pop(2)
0xa89: @ WaitForAnimEnd()
0xa8a: Pop(0)
0xa8b: PushEmpty()
0xa8c: Call2 0xc69

0xa8d: Pop(0)
0xa8e: Push(CVector(0.0, 0.0, 0.0))
0xa8f: @ SetSpeed(Stack[-1])
0xa90: Pop(1)
0xa91: @ Stop()
0xa92: Pop(0)
0xa93: @ StopAsync()
0xa94: Pop(0)
0xa95: PushEmpty(bool)
0xa96: Call2 0xc3e

0xa97: Pop(0)
0xa98: Pop(1); Push((bool) Stack[-1] == 0)
0xa99: IF (Stack[-1] == 0) GOTO 0xab1; Pop(1)

0xa9a: PushEmpty(bool, object)
0xa9b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9c: Call2 0xe24

0xa9d: Pop(1)
0xa9e: Pop(1); Push((bool) Stack[-1] == 0)
0xa9f: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xaa0: GOTO 0xabb

0xaa1: @@ GetPFPosition(Stack[-10])
0xaa2: Pop(0)
0xaa3: @ GetPFPosition(Stack[-9])
0xaa4: Pop(0)
0xaa5: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xaa6: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xaa7: Pop(0); Push(Stack[-23] * Stack[-23]);
0xaa8: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xaa9: IF (Stack[-1] == 0) GOTO 0xab1; Pop(1)

0xaaa: PushEmpty(bool, float)
0xaab: Stack[-1] = Stack[-25]
0xaac: Call2 0xb16

0xaad: Pop(1)
0xaae: Pop(1); Push((bool) Stack[-1] == 0)
0xaaf: IF (Stack[-1] == 0) GOTO 0xab1; Pop(1)

0xab0: GOTO 0xabb

0xab1: GOTO 0xaba

0xab2: PushEmpty(bool, float)
0xab3: Stack[-1] = Stack[-25]
0xab4: Call2 0xb16

0xab5: Pop(1)
0xab6: Pop(1); Push((bool) Stack[-1] == 0)
0xab7: IF (Stack[-1] == 0) GOTO 0xab9; Pop(1)

0xab8: GOTO 0xabb

0xab9: Stack[-7] = (bool) 1
0xaba: GOTO 0xa0f

0xabb: @ WaitForAnimEnd()
0xabc: Pop(0)
0xabd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xabe: IF (Stack[-1] == 0) GOTO 0xac0; Pop(1)

0xabf: Return(); Pop(22)

0xac0: Push("all")
0xac1: Push("attack_off")
0xac2: @ PlayAnimation(Stack[-2], Stack[-1])
0xac3: Pop(2)
0xac4: @ WaitForAnimEnd()
0xac5: Pop(0)
0xac6: Push(Stack[-8])
0xac7: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xac8: Push((float)2.0)
0xac9: @ Sleep(Stack[-1])
0xaca: Pop(1)
0xacb: Return(); Pop(22)

0xacc: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0xacd: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xace: Push("all")
0xacf: Push("attack_begin")
0xad0: Push((int) 1)
0xad1: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0xad2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xad3: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xad4: Pop(2)
0xad5: Pop(0); Push((bool) Stack[-3] == 0)
0xad6: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xad7: GOTO 0xadb

0xad8: Push((int) 1)
0xad9: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xada: GOTO 0xace

0xadb: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xadc: Push("attack")
0xadd: Push((int) 1)
0xade: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xadf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xae0: @ IsExisting3DSound(Stack[-3], Stack[-1])
0xae1: Pop(1)
0xae2: Pop(0); Push((bool) Stack[-2] == 0)
0xae3: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xae4: GOTO 0xae8

0xae5: Push((int) 1)
0xae6: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xae7: GOTO 0xadc

0xae8: Push("all")
0xae9: Push("bjump")
0xaea: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xaeb: Pop(2)
0xaec: Push(CvectorIndex(Stack[-1], 2))
0xaed: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0xaee: Return(); Pop(6)

0xaef: PushEmpty(object, float, float, object, float, float)
0xaf0: Push((float)0.9)
0xaf1: Pop(1); Push(Stack[-9] * Stack[-1]);
0xaf2: @ GetVictim(Stack[-1], Stack[-4])
0xaf3: Pop(1)
0xaf4: @ ReportAttack(Stack[-0])
0xaf5: Pop(0)
0xaf6: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xaf7: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xaf8: PushEmpty(float, object, int)
0xaf9: Stack[-2] = Stack[-6]
0xafa: Stack[-1] = Stack[-10]
0xafb: Call2 0x9e1

0xafc: Stack[-5] = Stack[-3]
0xafd: Pop(3)
0xafe: PushEmpty(float, object, float, int)
0xaff: Stack[-3] = Stack[-7]
0xb00: Stack[-2] = Stack[-6]
0xb01: PushEmpty(int, object, int)
0xb02: Stack[-2] = Stack[-10]
0xb03: Stack[-1] = Stack[-14]
0xb04: Call2 0x9e4

0xb05: Stack[-4] = Stack[-3]
0xb06: Pop(3)
0xb07: Call2 0xdb2

0xb08: Stack[-5] = Stack[-4]
0xb09: Pop(4)
0xb0a: PushEmpty(int)
0xb0b: Call2 0xc6e

0xb0c: Pop(0)
0xb0d: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0xb0e: Pop(1)
0xb0f: PushEmpty(object, float)
0xb10: Stack[-2] = Stack[-5]
0xb11: Stack[-1] = Stack[-3]
0xb12: Call2 0xc75

0xb13: Pop(2)
0xb14: Return(); Pop(6)

0xb15: Stack[-3] = 0
0xb16: PushEmpty(int, bool, int, string, int, bool, int, string)
0xb17: PushEmpty()
0xb18: Call2 0xc69

0xb19: Pop(0)
0xb1a: @ irand(Stack[-4], Stack[-1])
0xb1b: Pop(0)
0xb1c: Push((int) 1)
0xb1d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb1e: @ Face(Stack[-0])
0xb1f: Pop(0)
0xb20: Push((bool) 1)
0xb21: @ SetAttackState(Stack[-1])
0xb22: Pop(1)
0xb23: PushEmpty()
0xb24: Call2 0xfe6

0xb25: Pop(0)
0xb26: Push("all")
0xb27: Push("attack_begin")
0xb28: Pop(1); Push(Stack[-1] + Stack[-6]);
0xb29: @ PlayAnimation(Stack[-2], Stack[-1])
0xb2a: Pop(2)
0xb2b: @ WaitForAnimEnd()
0xb2c: Pop(0)
0xb2d: PushEmpty()
0xb2e: Call2 0xc49

0xb2f: Pop(0)
0xb30: PushEmpty(bool, object)
0xb31: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb32: Call2 0xe24

0xb33: Pop(1)
0xb34: Pop(1); Push((bool) Stack[-1] == 0)
0xb35: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb36: @ StopAsync()
0xb37: Pop(0)
0xb38: Stack[-10] = (bool) 0
0xb39: Return(); Pop(8)

0xb3a: PushEmpty(float, int)
0xb3b: Stack[-2] = Stack[-11]
0xb3c: Stack[-1] = Stack[-6]
0xb3d: Call2 0xaef

0xb3e: Pop(2)
0xb3f: Push("all")
0xb40: Push("attack_middle")
0xb41: Pop(1); Push(Stack[-1] + Stack[-6]);
0xb42: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xb43: Pop(2)
0xb44: Push(Stack[-3])
0xb45: IF (Stack[-1] == 0) GOTO 0xb8b; Pop(1)

0xb46: PushEmpty()
0xb47: Call2 0xfe6

0xb48: Pop(0)
0xb49: Push("all")
0xb4a: Push("attack_middle")
0xb4b: Pop(1); Push(Stack[-1] + Stack[-6]);
0xb4c: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4d: Pop(2)
0xb4e: @ WaitForAnimEnd()
0xb4f: Pop(0)
0xb50: PushEmpty()
0xb51: Call2 0xc69

0xb52: Pop(0)
0xb53: PushEmpty(bool, object)
0xb54: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb55: Call2 0xe24

0xb56: Pop(1)
0xb57: Pop(1); Push((bool) Stack[-1] == 0)
0xb58: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb59: @ StopAsync()
0xb5a: Pop(0)
0xb5b: Stack[-10] = (bool) 0
0xb5c: Return(); Pop(8)

0xb5d: PushEmpty(float, int)
0xb5e: Stack[-2] = Stack[-11]
0xb5f: Stack[-1] = Stack[-6]
0xb60: Call2 0xaef

0xb61: Pop(2)
0xb62: Stack[-2] = (int) 1
0xb63: Push("attack_middle")
0xb64: Pop(1); Push(Stack[-1] + Stack[-5]);
0xb65: Push("_")
0xb66: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb67: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0xb68: Push("all")
0xb69: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0xb6a: Pop(1)
0xb6b: Pop(0); Push((bool) Stack[-3] == 0)
0xb6c: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb6d: GOTO 0xb8b

0xb6e: PushEmpty()
0xb6f: Call2 0xfe6

0xb70: Pop(0)
0xb71: Push("all")
0xb72: @ PlayAnimation(Stack[-1], Stack[-2])
0xb73: Pop(1)
0xb74: @ WaitForAnimEnd()
0xb75: Pop(0)
0xb76: PushEmpty()
0xb77: Call2 0xc69

0xb78: Pop(0)
0xb79: PushEmpty(bool, object)
0xb7a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7b: Call2 0xe24

0xb7c: Pop(1)
0xb7d: Pop(1); Push((bool) Stack[-1] == 0)
0xb7e: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb7f: @ StopAsync()
0xb80: Pop(0)
0xb81: Stack[-10] = (bool) 0
0xb82: Return(); Pop(8)

0xb83: PushEmpty(float, int)
0xb84: Stack[-2] = Stack[-11]
0xb85: Stack[-1] = Stack[-6]
0xb86: Call2 0xaef

0xb87: Pop(2)
0xb88: Push((int) 1)
0xb89: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb8a: GOTO 0xb63

0xb8b: Push((bool) 0)
0xb8c: @ SetAttackState(Stack[-1])
0xb8d: Pop(1)
0xb8e: Push("all")
0xb8f: Push("attack_end")
0xb90: Pop(1); Push(Stack[-1] + Stack[-6]);
0xb91: @ PlayAnimation(Stack[-2], Stack[-1])
0xb92: Pop(2)
0xb93: PushEmpty(bool)
0xb94: Call2 0xc77

0xb95: Pop(0)
0xb96: IF (Stack[-1] == 0) GOTO 0xb9d; Pop(1)

0xb97: PushEmpty(bool, float)
0xb98: Stack[-1] = (float) 0.75
0xb99: Call2 0xb9f

0xb9a: Pop(2)
0xb9b: @ StopAsync()
0xb9c: Pop(0)
0xb9d: Stack[-10] = (bool) 1
0xb9e: Return(); Pop(8)

0xb9f: PushEmpty(float, bool, float, bool)
0xba0: @ rand(Stack[-2])
0xba1: Pop(0)
0xba2: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0xba3: IF (Stack[-1] == 0) GOTO 0xbb3; Pop(1)

0xba4: @ IsAnimationPlaying(Stack[-1])
0xba5: Pop(0)
0xba6: Pop(0); Push((bool) Stack[-1] == 0)
0xba7: IF (Stack[-1] == 0) GOTO 0xba9; Pop(1)

0xba8: GOTO 0xbb2

0xba9: PushEmpty(bool)
0xbaa: Call2 0xc01

0xbab: Pop(0)
0xbac: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbad: Stack[-6] = (bool) 1
0xbae: Return(); Pop(4)

0xbaf: @ sync()
0xbb0: Pop(0)
0xbb1: GOTO 0xba4

0xbb2: GOTO 0xbb8

0xbb3: @ WaitForAnimEnd()
0xbb4: Pop(0)
0xbb5: PushEmpty()
0xbb6: Call2 0xc69

0xbb7: Pop(0)
0xbb8: Stack[-6] = (bool) 0
0xbb9: Return(); Pop(4)

0xbba: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0xbbb: @ IsAnimationPlaying(Stack[-5])
0xbbc: Pop(0)
0xbbd: Pop(0); Push((bool) Stack[-5] == 0)
0xbbe: IF (Stack[-1] == 0) GOTO 0xbc0; Pop(1)

0xbbf: GOTO 0xbe0

0xbc0: PushEmpty(bool)
0xbc1: Call2 0xc01

0xbc2: Pop(0)
0xbc3: IF (Stack[-1] == 0) GOTO 0xbc6; Pop(1)

0xbc4: Stack[-12] = (bool) 1
0xbc5: Return(); Pop(10)

0xbc6: PushEmpty(bool, object)
0xbc7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc8: Call2 0xe24

0xbc9: Pop(1)
0xbca: Pop(1); Push((bool) Stack[-1] == 0)
0xbcb: IF (Stack[-1] == 0) GOTO 0xbce; Pop(1)

0xbcc: Stack[-12] = (bool) 0
0xbcd: Return(); Pop(10)

0xbce: @@ GetPFPosition(Stack[-4])
0xbcf: Pop(0)
0xbd0: @ GetPFPosition(Stack[-3])
0xbd1: Pop(0)
0xbd2: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xbd3: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xbd4: Pop(0); Push(Stack[-11] * Stack[-11]);
0xbd5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbd6: IF (Stack[-1] == 0) GOTO 0xbdd; Pop(1)

0xbd7: PushEmpty(bool, float)
0xbd8: Stack[-1] = Stack[-13]
0xbd9: Call2 0xb16

0xbda: Pop(2)
0xbdb: Stack[-12] = (bool) 1
0xbdc: Return(); Pop(10)

0xbdd: @ sync()
0xbde: Pop(0)
0xbdf: GOTO 0xbbb

0xbe0: PushEmpty()
0xbe1: Call2 0xc69

0xbe2: Pop(0)
0xbe3: Stack[-12] = (bool) 0
0xbe4: Return(); Pop(10)

0xbe5: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0xbe6: PushEmpty(bool, object)
0xbe7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe8: Call2 0xe24

0xbe9: Pop(1)
0xbea: Pop(1); Push((bool) Stack[-1] == 0)
0xbeb: IF (Stack[-1] == 0) GOTO 0xbee; Pop(1)

0xbec: Stack[-11] = (bool) 0
0xbed: Return(); Pop(10)

0xbee: PushEmpty(bool)
0xbef: Call2 0xc3e

0xbf0: Pop(0)
0xbf1: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbf2: @@ GetPFPosition(Stack[-5])
0xbf3: Pop(0)
0xbf4: @ GetPFPosition(Stack[-4])
0xbf5: Pop(0)
0xbf6: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xbf7: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xbf8: @@ GetAttackDistance(Stack[-1])
0xbf9: Pop(0)
0xbfa: Push((int) 50)
0xbfb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xbfc: Pop(0); Push(Stack[-1] * Stack[-1]);
0xbfd: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0xbfe: Return(); Pop(10)

0xbff: Stack[-11] = (bool) 0
0xc00: Return(); Pop(10)

0xc01: PushEmpty(bool)
0xc02: Stack[-1] = (bool) 0
0xc03: PushEmpty(bool)
0xc04: Call2 0xbe5

0xc05: Pop(0)
0xc06: IF (Stack[-1] == 0) GOTO 0xc0c; Pop(1)

0xc07: PushEmpty(bool)
0xc08: Call2 0xc11

0xc09: Pop(0)
0xc0a: IF (Stack[-1] == 0) GOTO 0xc0c; Pop(1)

0xc0b: Stack[-1] = (bool) 1
0xc0c: IF (Stack[-1] == 0) GOTO 0xc0f; Pop(1)

0xc0d: Stack[-1] = (bool) 1
0xc0e: Return(); Pop(0)

0xc0f: Stack[-1] = (bool) 0
0xc10: Return(); Pop(0)

0xc11: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0xc12: @ GetScene(Stack[-5])
0xc13: Pop(0)
0xc14: Stack[-4] = (bool) 0
0xc15: PushEmpty(cvector, object)
0xc16: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc17: Call2 0xd92

0xc18: Pop(1)
0xc19: Pop(1); Push(( -Stack[-1])
0xc1a: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0xc1b: Pop(1)
0xc1c: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0xc1d: IF (Stack[-1] == 0) GOTO 0xc1f; Pop(1)

0xc1e: GOTO 0xc3b

0xc1f: @ Face(Stack[-0])
0xc20: Pop(0)
0xc21: Push("all")
0xc22: Push("bjump")
0xc23: @ PlayAnimation(Stack[-2], Stack[-1])
0xc24: Pop(2)
0xc25: @@ GetPFPosition(Stack[-2])
0xc26: Pop(0)
0xc27: @ GetPFPosition(Stack[-1])
0xc28: Pop(0)
0xc29: @ WaitForAnimEnd()
0xc2a: Pop(0)
0xc2b: PushEmpty()
0xc2c: Call2 0xc69

0xc2d: Pop(0)
0xc2e: @ StopAsync()
0xc2f: Pop(0)
0xc30: Push(CVector(0.0, 0.0, 0.0))
0xc31: @ SetSpeed(Stack[-1])
0xc32: Pop(1)
0xc33: Stack[-4] = (bool) 1
0xc34: PushEmpty(bool)
0xc35: Call2 0xbe5

0xc36: Pop(0)
0xc37: Pop(1); Push((bool) Stack[-1] == 0)
0xc38: IF (Stack[-1] == 0) GOTO 0xc3a; Pop(1)

0xc39: GOTO 0xc3b

0xc3a: GOTO 0xc15

0xc3b: Stack[-11] = Stack[-4]
0xc3c: Return(); Pop(10)

0xc3d: Stack[-5] = 0
0xc3e: PushEmpty(bool, bool)
0xc3f: Push("IsAttacking")
0xc40: Push((int) 1)
0xc41: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0xc42: IF (Stack[-1] == 0) GOTO 0xc47; Pop(1)

0xc43: @@ IsAttacking(Stack[-1])
0xc44: Pop(0)
0xc45: Stack[-3] = Stack[-1]
0xc46: Return(); Pop(2)

0xc47: Stack[-3] = (bool) 0
0xc48: Return(); Pop(2)

0xc49: PushEmpty(float, int, float, int)
0xc4a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xc4b: IF (Stack[-1] == 0) GOTO 0xc4d; Pop(1)

0xc4c: Return(); Pop(4)

0xc4d: Push( Stack[5 + Tasks[-1].StackPointer] )
0xc4e: IF (Stack[-1] == 0) GOTO 0xc55; Pop(1)

0xc4f: Push((int) -1)
0xc50: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xc51: Push((int) 0)
0xc52: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0xc53: IF (Stack[-1] == 0) GOTO 0xc55; Pop(1)

0xc54: Return(); Pop(4)

0xc55: @ rand(Stack[-2])
0xc56: Pop(0)
0xc57: PushEmpty(float)
0xc58: Call2 0xc7b

0xc59: Pop(0)
0xc5a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xc5b: IF (Stack[-1] == 0) GOTO 0xc68; Pop(1)

0xc5c: @ irand(Stack[-1], Stack[-2])
0xc5d: Pop(0)
0xc5e: Push((int) 1)
0xc5f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xc60: Push("attack")
0xc61: Pop(1); Push(Stack[-1] + Stack[-2]);
0xc62: @ Speak(Stack[-1])
0xc63: Pop(1)
0xc64: PushEmpty(int)
0xc65: Call2 0xc79

0xc66: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0xc67: Pop(1)
0xc68: Return(); Pop(4)

0xc69: PushEmpty(object)
0xc6a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6b: Call2 0xfdd

0xc6c: Pop(1)
0xc6d: Return(); Pop(0)

0xc6e: Stack[-1] = (int) 0
0xc6f: Return(); Pop(0)

0xc70: PushEmpty(string)
0xc71: Stack[-1] = "attack_stay"
0xc72: Call2 0xf50

0xc73: Pop(1)
0xc74: Return(); Pop(0)

0xc75: PushEmpty()
0xc76: Return(); Pop(0)

0xc77: Stack[-1] = (bool) 1
0xc78: Return(); Pop(0)

0xc79: Stack[-1] = (int) 1
0xc7a: Return(); Pop(0)

0xc7b: Stack[-1] = (float) 0.5
0xc7c: Return(); Pop(0)

0xc7d: PushEmpty()
0xc7e: Call2 0xcc3

0xc7f: Pop(0)
0xc80: PushEmpty()
0xc81: Call2 0x1355

0xc82: Pop(0)
0xc83: Return(); Pop(0)

0xc84: PushEmpty(bool, bool, bool, bool)
0xc85: PushEmpty(object)
0xc86: Stack[-1] = Stack[-10]
0xc87: Call2 0xfdd

0xc88: Pop(1)
0xc89: Push((int) 1)
0xc8a: Push((int) 5)
0xc8b: @ SetTimer(Stack[-2], Stack[-1])
0xc8c: Pop(2)
0xc8d: @ CanSee(Stack[-2], Stack[-9])
0xc8e: Pop(0)
0xc8f: Push(Stack[-2])
0xc90: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc91: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc92: PushEmpty(object)
0xc93: Stack[-1] = Stack[-10]
0xc94: Call2 0xf3e

0xc95: Pop(1)
0xc96: GOTO 0xc98

0xc97: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xc98: PushEmpty(bool, object)
0xc99: Stack[-1] = Stack[-11]
0xc9a: Call2 0xda1

0xc9b: Pop(1)
0xc9c: IF (Stack[-1] == 0) GOTO 0xca2; Pop(1)

0xc9d: PushEmpty(object)
0xc9e: Call2 0xf79

0xc9f: Pop(0)
0xca0: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0xca1: Pop(1)
0xca2: PushEmpty(bool, object, float, float, bool, bool)
0xca3: Stack[-5] = Stack[-15]
0xca4: Stack[-4] = Stack[-14]
0xca5: Stack[-3] = Stack[-13]
0xca6: Stack[-2] = Stack[-12]
0xca7: Stack[-1] = Stack[-11]
0xca8: Call2 0xced

0xca9: Stack[-7] = Stack[-6]
0xcaa: Pop(6)
0xcab: Push( Stack[2 + Tasks[-1].StackPointer] )
0xcac: IF (Stack[-1] == 0) GOTO 0xcb0; Pop(1)

0xcad: Push("head")
0xcae: @ UnlookAsync(Stack[-1])
0xcaf: Pop(1)
0xcb0: Push((int) 1)
0xcb1: @ KillTimer(Stack[-1])
0xcb2: Pop(1)
0xcb3: Stack[-10] = Stack[-1]
0xcb4: Return(); Pop(4)

0xcb5: PushEmpty()
0xcb6: Push((int) 1)
0xcb7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb8: IF (Stack[-1] == 0) GOTO 0xcbe; Pop(1)

0xcb9: PushEmpty(object)
0xcba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcbb: Call2 0xfdd

0xcbc: Pop(1)
0xcbd: GOTO 0xcc2

0xcbe: PushEmpty(int)
0xcbf: Stack[-1] = Stack[-2]
0xcc0: Call2 0xd53

0xcc1: Pop(1)
0xcc2: Return(); Pop(0)

0xcc3: Push((int) 1)
0xcc4: @ KillTimer(Stack[-1])
0xcc5: Pop(1)
0xcc6: Push( Stack[2 + Tasks[-1].StackPointer] )
0xcc7: IF (Stack[-1] == 0) GOTO 0xccc; Pop(1)

0xcc8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xcc9: Push("head")
0xcca: @ UnlookAsync(Stack[-1])
0xccb: Pop(1)
0xccc: PushEmpty()
0xccd: Call2 0xd69

0xcce: Pop(0)
0xccf: Return(); Pop(0)

0xcd0: PushEmpty()
0xcd1: PushEmpty(bool)
0xcd2: Stack[-1] = (bool) 0
0xcd3: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xcd4: IF (Stack[-1] == 0) GOTO 0xcd8; Pop(1)

0xcd5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xcd6: IF (Stack[-1] == 0) GOTO 0xcd8; Pop(1)

0xcd7: Stack[-1] = (bool) 1
0xcd8: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xcd9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xcda: PushEmpty(object)
0xcdb: Stack[-1] = Stack[-2]
0xcdc: Call2 0xf3e

0xcdd: Pop(1)
0xcde: Return(); Pop(0)

0xcdf: PushEmpty()
0xce0: PushEmpty(bool)
0xce1: Stack[-1] = (bool) 0
0xce2: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xce3: IF (Stack[-1] == 0) GOTO 0xce7; Pop(1)

0xce4: Push( Stack[2 + Tasks[-1].StackPointer] )
0xce5: IF (Stack[-1] == 0) GOTO 0xce7; Pop(1)

0xce6: Stack[-1] = (bool) 1
0xce7: IF (Stack[-1] == 0) GOTO 0xcec; Pop(1)

0xce8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xce9: Push("head")
0xcea: @ UnlookAsync(Stack[-1])
0xceb: Pop(1)
0xcec: Return(); Pop(0)

0xced: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0xcee: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xcef: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0xcf0: Stack[-7] = Stack[-17]
0xcf1: PushEmpty(bool, object)
0xcf2: Stack[-1] = Stack[-23]
0xcf3: Call2 0xd79

0xcf4: Pop(1)
0xcf5: Pop(1); Push((bool) Stack[-1] == 0)
0xcf6: IF (Stack[-1] == 0) GOTO 0xcf9; Pop(1)

0xcf7: Stack[-22] = (bool) 0
0xcf8: Return(); Pop(16)

0xcf9: @@ GetPosition(Stack[-5])
0xcfa: Pop(0)
0xcfb: @ GetPosition(Stack[-4])
0xcfc: Pop(0)
0xcfd: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xcfe: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xcff: PushEmpty(bool)
0xd00: Stack[-1] = (bool) 0
0xd01: Push((int) 0)
0xd02: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0xd03: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xd04: Pop(0); Push(Stack[-20] * Stack[-20]);
0xd05: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xd06: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xd07: Stack[-1] = (bool) 1
0xd08: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd09: @ Stop()
0xd0a: Pop(0)
0xd0b: Stack[-22] = (bool) 0
0xd0c: Return(); Pop(16)

0xd0d: Pop(0); Push(Stack[-20] * Stack[-20]);
0xd0e: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xd0f: IF (Stack[-1] == 0) GOTO 0xd4b; Pop(1)

0xd10: @@ GetPFPosition(Stack[-5])
0xd11: Pop(0)
0xd12: @ FindPathTo(Stack[-1], Stack[-5])
0xd13: Pop(0)
0xd14: Pop(0); Push(( Stack[-1] != 0 )
0xd15: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd16: Stack[-6] = Stack[-1]
0xd17: Stack[-1] = 0
0xd18: Pop(0); Push(( Stack[-6] != 0 )
0xd19: IF (Stack[-1] == 0) GOTO 0xd39; Pop(1)

0xd1a: Push(Stack[-7])
0xd1b: IF (Stack[-1] == 0) GOTO 0xd22; Pop(1)

0xd1c: Stack[-7] = (bool) 0
0xd1d: @ RotatePath(Stack[-6], Stack[-8])
0xd1e: Pop(0)
0xd1f: Pop(0); Push((bool) Stack[-8] == 0)
0xd20: IF (Stack[-1] == 0) GOTO 0xd22; Pop(1)

0xd21: GOTO 0xd51

0xd22: Push((int) 0)
0xd23: Push((float)0.3)
0xd24: @ SetTimer(Stack[-2], Stack[-1])
0xd25: Pop(2)
0xd26: PushEmpty(string)
0xd27: Call2 0xd80

0xd28: Pop(0)
0xd29: PushEmpty(string)
0xd2a: Call2 0xd82

0xd2b: Pop(0)
0xd2c: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0xd2d: Pop(2)
0xd2e: Pop(0); Push((bool) Stack[-8] == 0)
0xd2f: IF (Stack[-1] == 0) GOTO 0xd37; Pop(1)

0xd30: Push( Stack[0 + Tasks[-1].StackPointer] )
0xd31: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xd32: Stack[-6] = 0
0xd33: GOTO 0xd51

0xd34: GOTO 0xd36

0xd35: GOTO 0xd50

0xd36: GOTO 0xd38

0xd37: Stack[-6] = 0
0xd38: GOTO 0xd49

0xd39: Push((int) 0)
0xd3a: @ KillTimer(Stack[-1])
0xd3b: Pop(1)
0xd3c: Push((float)0.5)
0xd3d: @ Sleep(Stack[-1], Stack[-9])
0xd3e: Pop(1)
0xd3f: Pop(0); Push((bool) Stack[-8] == 0)
0xd40: IF (Stack[-1] == 0) GOTO 0xd45; Pop(1)

0xd41: Push( Stack[0 + Tasks[-1].StackPointer] )
0xd42: IF (Stack[-1] == 0) GOTO 0xd45; Pop(1)

0xd43: Stack[-6] = 0
0xd44: GOTO 0xd51

0xd45: Push((int) 0)
0xd46: Push((float)0.3)
0xd47: @ SetTimer(Stack[-2], Stack[-1])
0xd48: Pop(2)
0xd49: Stack[-1] = 0
0xd4a: GOTO 0xd4f

0xd4b: Push((int) 0)
0xd4c: @ KillTimer(Stack[-1])
0xd4d: Pop(1)
0xd4e: GOTO 0xd51

0xd4f: Stack[-6] = 0
0xd50: GOTO 0xcf1

0xd51: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xd52: Return(); Pop(16)

0xd53: PushEmpty()
0xd54: Push((int) 0)
0xd55: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xd56: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd57: Return(); Pop(0)

0xd58: PushEmpty(bool, object)
0xd59: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5a: Call2 0xd79

0xd5b: Pop(1)
0xd5c: Pop(1); Push((bool) Stack[-1] == 0)
0xd5d: IF (Stack[-1] == 0) GOTO 0xd5f; Pop(1)

0xd5e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xd5f: Push((int) 0)
0xd60: @ KillTimer(Stack[-1])
0xd61: Pop(1)
0xd62: @ Stop()
0xd63: Pop(0)
0xd64: Return(); Pop(0)

0xd65: PushEmpty()
0xd66: @ RequestClearPath(Stack[-1])
0xd67: Pop(0)
0xd68: Return(); Pop(0)

0xd69: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xd6a: Push((int) 0)
0xd6b: @ KillTimer(Stack[-1])
0xd6c: Pop(1)
0xd6d: @ Stop()
0xd6e: Pop(0)
0xd6f: Return(); Pop(0)

0xd70: PushEmpty()
0xd71: PushEmpty()
0xd72: Call2 0xcc3

0xd73: Pop(0)
0xd74: PushEmpty(object)
0xd75: Stack[-1] = Stack[-2]
0xd76: Call2 0x121c

0xd77: Pop(1)
0xd78: Return(); Pop(0)

0xd79: PushEmpty()
0xd7a: PushEmpty(bool, object)
0xd7b: Stack[-1] = Stack[-3]
0xd7c: Call2 0xe24

0xd7d: Stack[-4] = Stack[-2]
0xd7e: Pop(2)
0xd7f: Return(); Pop(0)

0xd80: Stack[-1] = "walk"
0xd81: Return(); Pop(0)

0xd82: Stack[-1] = "run"
0xd83: Return(); Pop(0)

0xd84: PushEmpty()
0xd85: Push((int) 2)
0xd86: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd87: IF (Stack[-1] == 0) GOTO 0xd8b; Pop(1)

0xd88: Stack[-2] = "fire"
0xd89: Return(); Pop(0)

0xd8a: GOTO 0xd90

0xd8b: Push((int) 1)
0xd8c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8d: IF (Stack[-1] == 0) GOTO 0xd90; Pop(1)

0xd8e: Stack[-2] = "bullet"
0xd8f: Return(); Pop(0)

0xd90: Stack[-2] = "phys"
0xd91: Return(); Pop(0)

0xd92: PushEmpty(cvector, cvector, cvector, cvector)
0xd93: @ GetPosition(Stack[-2])
0xd94: Pop(0)
0xd95: @@ GetPosition(Stack[-1])
0xd96: Pop(0)
0xd97: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xd98: Return(); Pop(4)

0xd99: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xd9a: @ GetPosition(Stack[-3])
0xd9b: Pop(0)
0xd9c: @@ GetPosition(Stack[-2])
0xd9d: Pop(0)
0xd9e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xd9f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xda0: Return(); Pop(6)

0xda1: PushEmpty(bool, bool)
0xda2: @ IsPlayerActor(Stack[-3], Stack[-1])
0xda3: Pop(0)
0xda4: Stack[-4] = Stack[-1]
0xda5: Return(); Pop(2)

0xda6: PushEmpty(bool, bool)
0xda7: Push("HasProperty")
0xda8: Push((int) 2)
0xda9: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xdaa: Pop(1); Push((bool) Stack[-1] == 0)
0xdab: IF (Stack[-1] == 0) GOTO 0xdae; Pop(1)

0xdac: Stack[-5] = (bool) 0
0xdad: Return(); Pop(2)

0xdae: @@ HasProperty(Stack[-3], Stack[-1])
0xdaf: Pop(0)
0xdb0: Stack[-5] = Stack[-1]
0xdb1: Return(); Pop(2)

0xdb2: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xdb3: PushEmpty(bool, object, string)
0xdb4: Stack[-2] = Stack[-18]
0xdb5: Stack[-1] = "health"
0xdb6: Call2 0xda6

0xdb7: Pop(2)
0xdb8: Pop(1); Push((bool) Stack[-1] == 0)
0xdb9: IF (Stack[-1] == 0) GOTO 0xdbc; Pop(1)

0xdba: Stack[-16] = (float) 0.0
0xdbb: Return(); Pop(12)

0xdbc: PushEmpty(bool, object, string)
0xdbd: Stack[-2] = Stack[-18]
0xdbe: Stack[-1] = "armor"
0xdbf: Call2 0xda6

0xdc0: Pop(2)
0xdc1: Pop(1); Push((bool) Stack[-1] == 0)
0xdc2: IF (Stack[-1] == 0) GOTO 0xdc5; Pop(1)

0xdc3: Stack[-6] = (int) 0
0xdc4: GOTO 0xdc8

0xdc5: Push("armor")
0xdc6: @@ GetProperty(Stack[-1], Stack[-7])
0xdc7: Pop(1)
0xdc8: Push("armor_")
0xdc9: PushEmpty(string, int)
0xdca: Stack[-1] = Stack[-16]
0xdcb: Call2 0xd84

0xdcc: Pop(1)
0xdcd: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xdce: PushEmpty(bool, object, string)
0xdcf: Stack[-2] = Stack[-18]
0xdd0: Stack[-1] = Stack[-8]
0xdd1: Call2 0xda6

0xdd2: Pop(2)
0xdd3: Pop(1); Push((bool) Stack[-1] == 0)
0xdd4: IF (Stack[-1] == 0) GOTO 0xdd7; Pop(1)

0xdd5: Stack[-4] = (int) 0
0xdd6: GOTO 0xdd9

0xdd7: @@ GetProperty(Stack[-5], Stack[-4])
0xdd8: Pop(0)
0xdd9: PushEmpty(float, float, float)
0xdda: Pop(0); Push(Stack[-9] + Stack[-7]);
0xddb: Push((float)100.0)
0xddc: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xddd: Stack[-1] = (int) 1
0xdde: Call2 0xf89

0xddf: Stack[-6] = Stack[-3]
0xde0: Pop(3)
0xde1: Push("health")
0xde2: @@ GetProperty(Stack[-1], Stack[-3])
0xde3: Pop(1)
0xde4: Push((int) 1)
0xde5: Pop(1); Push(Stack[-1] - Stack[-4]);
0xde6: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xde7: Push("health")
0xde8: PushEmpty(float, float, float, float)
0xde9: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xdea: Stack[-2] = (int) 0
0xdeb: Stack[-1] = (int) 1
0xdec: Call2 0xf90

0xded: Pop(3)
0xdee: @@ SetProperty(Stack[-2], Stack[-1])
0xdef: Pop(2)
0xdf0: PushEmpty(bool, object)
0xdf1: Stack[-1] = Stack[-17]
0xdf2: Call2 0xda1

0xdf3: Pop(1)
0xdf4: IF (Stack[-1] == 0) GOTO 0xdf9; Pop(1)

0xdf5: PushEmpty(float)
0xdf6: Stack[-1] = -Stack[-2]; Pop(0);
0xdf7: Call2 0xfca

0xdf8: Pop(1)
0xdf9: Stack[-16] = Stack[-1]
0xdfa: Return(); Pop(12)

0xdfb: PushEmpty(bool, bool)
0xdfc: @@ IsDead(Stack[-1])
0xdfd: Pop(0)
0xdfe: Stack[-4] = Stack[-1]
0xdff: Return(); Pop(2)

0xe00: PushEmpty(object, object, object, object)
0xe01: Pop(0); Push((bool) Stack[-5] == 0)
0xe02: IF (Stack[-1] == 0) GOTO 0xe05; Pop(1)

0xe03: Stack[-6] = (bool) 0
0xe04: Return(); Pop(4)

0xe05: PushEmpty(bool)
0xe06: Stack[-1] = (bool) 0
0xe07: Push("IsDead")
0xe08: Push((int) 1)
0xe09: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xe0a: IF (Stack[-1] == 0) GOTO 0xe11; Pop(1)

0xe0b: PushEmpty(bool, object)
0xe0c: Stack[-1] = Stack[-8]
0xe0d: Call2 0xdfb

0xe0e: Pop(1)
0xe0f: IF (Stack[-1] == 0) GOTO 0xe11; Pop(1)

0xe10: Stack[-1] = (bool) 1
0xe11: IF (Stack[-1] == 0) GOTO 0xe14; Pop(1)

0xe12: Stack[-6] = (bool) 0
0xe13: Return(); Pop(4)

0xe14: @ GetScene(Stack[-2])
0xe15: Pop(0)
0xe16: Pop(0); Push((bool) Stack[-2] == 0)
0xe17: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe18: Stack[-6] = (bool) 0
0xe19: Return(); Pop(4)

0xe1a: @@ GetScene(Stack[-1])
0xe1b: Pop(0)
0xe1c: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xe1d: IF (Stack[-1] == 0) GOTO 0xe20; Pop(1)

0xe1e: Stack[-6] = (bool) 0
0xe1f: Return(); Pop(4)

0xe20: Stack[-6] = (bool) 1
0xe21: Return(); Pop(4)

0xe22: Stack[-1] = 0
0xe23: Stack[-2] = 0
0xe24: PushEmpty(int, int)
0xe25: PushEmpty(bool, object)
0xe26: Stack[-1] = Stack[-5]
0xe27: Call2 0xe00

0xe28: Pop(1)
0xe29: Pop(1); Push((bool) Stack[-1] == 0)
0xe2a: IF (Stack[-1] == 0) GOTO 0xe2d; Pop(1)

0xe2b: Stack[-4] = (bool) 0
0xe2c: Return(); Pop(2)

0xe2d: PushEmpty(bool, object, string)
0xe2e: Stack[-2] = Stack[-6]
0xe2f: Stack[-1] = "noaccess"
0xe30: Call2 0xda6

0xe31: Pop(2)
0xe32: Pop(1); Push((bool) Stack[-1] == 0)
0xe33: IF (Stack[-1] == 0) GOTO 0xe36; Pop(1)

0xe34: Stack[-4] = (bool) 1
0xe35: Return(); Pop(2)

0xe36: Push("noaccess")
0xe37: @@ GetProperty(Stack[-1], Stack[-2])
0xe38: Pop(1)
0xe39: Push((int) 0)
0xe3a: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xe3b: Return(); Pop(2)

0xe3c: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xe3d: Pop(0); Push((bool) Stack[-15] == 0)
0xe3e: IF (Stack[-1] == 0) GOTO 0xe40; Pop(1)

0xe3f: Return(); Pop(14)

0xe40: @ IsDead(Stack[-7])
0xe41: Pop(0)
0xe42: Push(Stack[-7])
0xe43: IF (Stack[-1] == 0) GOTO 0xe45; Pop(1)

0xe44: Return(); Pop(14)

0xe45: @ GetSecondaryAnimationType(Stack[-6])
0xe46: Pop(0)
0xe47: Push((int) 0)
0xe48: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xe49: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe4a: Return(); Pop(14)

0xe4b: @@ GetPosition(Stack[-5])
0xe4c: Pop(0)
0xe4d: @ GetPosition(Stack[-4])
0xe4e: Pop(0)
0xe4f: @ GetDirection(Stack[-3])
0xe50: Pop(0)
0xe51: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xe52: Push(CvectorIndex(Stack[-2], 0))
0xe53: Push(CvectorIndex(Stack[-4], 0))
0xe54: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe55: Push(CvectorIndex(Stack[-3], 2))
0xe56: Push(CvectorIndex(Stack[-5], 2))
0xe57: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe58: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe59: Push((int) 0)
0xe5a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe5b: IF (Stack[-1] == 0) GOTO 0xe5e; Pop(1)

0xe5c: Stack[-1] = "fhit"
0xe5d: GOTO 0xe5f

0xe5e: Stack[-1] = "bhit"
0xe5f: Push("hit_react")
0xe60: Push("1")
0xe61: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe62: Push("2")
0xe63: Pop(1); Push(Stack[-4] + Stack[-1]);
0xe64: Push((int) -10)
0xe65: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe66: Pop(4)
0xe67: Return(); Pop(14)

0xe68: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xe69: PushEmpty(bool)
0xe6a: Stack[-1] = (bool) 0
0xe6b: PushEmpty(bool)
0xe6c: Stack[-1] = (bool) 0
0xe6d: Push(Stack[-23])
0xe6e: IF (Stack[-1] == 0) GOTO 0xe73; Pop(1)

0xe6f: Push((int) 4)
0xe70: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xe71: IF (Stack[-1] == 0) GOTO 0xe73; Pop(1)

0xe72: Stack[-1] = (bool) 1
0xe73: IF (Stack[-1] == 0) GOTO 0xe78; Pop(1)

0xe74: Push((int) 5)
0xe75: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xe76: IF (Stack[-1] == 0) GOTO 0xe78; Pop(1)

0xe77: Stack[-1] = (bool) 1
0xe78: IF (Stack[-1] == 0) GOTO 0xea7; Pop(1)

0xe79: PushEmpty(cvector, cvector)
0xe7a: PushEmpty(cvector, object)
0xe7b: Stack[-1] = Stack[-25]
0xe7c: Call2 0xd92

0xe7d: Stack[-3] = Stack[-2]
0xe7e: Pop(2)
0xe7f: Call2 0xf7f

0xe80: Stack[-11] = Stack[-2]
0xe81: Pop(2)
0xe82: @ CreateVectorVector(Stack[-8])
0xe83: Pop(0)
0xe84: Stack[-7] = (int) 1
0xe85: Push("hit")
0xe86: Pop(1); Push(Stack[-1] + Stack[-8]);
0xe87: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xe88: Pop(1)
0xe89: Pop(0); Push((bool) Stack[-6] == 0)
0xe8a: IF (Stack[-1] == 0) GOTO 0xe8c; Pop(1)

0xe8b: GOTO 0xe95

0xe8c: Pop(0); Push(Stack[-4] | Stack[-9]);
0xe8d: Push((float)0.70711)
0xe8e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe8f: IF (Stack[-1] == 0) GOTO 0xe92; Pop(1)

0xe90: @@ add(Stack[-5])
0xe91: Pop(0)
0xe92: Push((int) 1)
0xe93: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xe94: GOTO 0xe85

0xe95: @@ size(Stack[-3])
0xe96: Pop(0)
0xe97: Push(Stack[-3])
0xe98: IF (Stack[-1] == 0) GOTO 0xea6; Pop(1)

0xe99: @ irand(Stack[-2], Stack[-3])
0xe9a: Pop(0)
0xe9b: @@ get(Stack[-1], Stack[-2])
0xe9c: Pop(0)
0xe9d: PushEmpty(object, int, float, cvector, cvector)
0xe9e: Stack[-5] = Stack[-26]
0xe9f: Stack[-4] = Stack[-25]
0xea0: Stack[-3] = Stack[-24]
0xea1: Stack[-2] = Stack[-6]
0xea2: Stack[-1] = -Stack[-14]; Pop(0);
0xea3: Call2 0xeac

0xea4: Pop(5)
0xea5: Return(); Pop(18)

0xea6: Stack[-8] = 0
0xea7: PushEmpty(object)
0xea8: Stack[-1] = Stack[-22]
0xea9: Call2 0xe3c

0xeaa: Pop(1)
0xeab: Return(); Pop(18)

0xeac: PushEmpty(object, object, object, object)
0xead: @ GetScene(Stack[-2])
0xeae: Pop(0)
0xeaf: Push("scripted")
0xeb0: Push("blood_dir.xml")
0xeb1: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xeb2: Pop(2)
0xeb3: PushEmpty(object)
0xeb4: Stack[-1] = Stack[-10]
0xeb5: Call2 0xe3c

0xeb6: Pop(1)
0xeb7: Return(); Pop(4)

0xeb8: Stack[-1] = 0
0xeb9: Stack[-2] = 0
0xeba: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xebb: @@ GetPosition(Stack[-3])
0xebc: Pop(0)
0xebd: @ GetPosition(Stack[-2])
0xebe: Pop(0)
0xebf: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xec0: Push(CvectorIndex(Stack[-1], 0))
0xec1: Push(CvectorIndex(Stack[-2], 2))
0xec2: @ RotateAsync(Stack[-2], Stack[-1])
0xec3: Pop(2)
0xec4: Return(); Pop(6)

0xec5: PushEmpty(bool, bool)
0xec6: @ IsLoaded(Stack[-1])
0xec7: Pop(0)
0xec8: Stack[-3] = Stack[-1]
0xec9: Return(); Pop(2)

0xeca: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xecb: @@ GetPosition(Stack[-8])
0xecc: Pop(0)
0xecd: @@ GetEyesHeight(Stack[-9])
0xece: Pop(0)
0xecf: Push(CvectorIndex(Stack[-8], 1))
0xed0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xed1: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xed2: @ GetPosition(Stack[-7])
0xed3: Pop(0)
0xed4: @ GetEyesHeight(Stack[-9])
0xed5: Pop(0)
0xed6: Push(CvectorIndex(Stack[-7], 1))
0xed7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xed8: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xed9: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xeda: Push(CvectorIndex(Stack[-6], 1))
0xedb: Stack[-1] = (int) 0
0xedc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xedd: Pop(0); Push(Stack[-6] | Stack[-6]);
0xede: Pop(1); Push(Sqrt(Stack[-1]))
0xedf: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xee0: Stack[-5] = -Stack[-6]; Pop(0);
0xee1: Pop(0); Push(Stack[-6] * Stack[-19]);
0xee2: PushEmpty(cvector, cvector)
0xee3: Push(CVector(0.0, 1.0, 0.0))
0xee4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xee5: Call2 0xf7f

0xee6: Pop(1)
0xee7: Push((int) 25)
0xee8: Pop(2); Push(Stack[-2] * Stack[-1]);
0xee9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xeea: Push(CVector(0.0, 10.0, 0.0))
0xeeb: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xeec: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xeed: @ IsOverrideActive(Stack[-2])
0xeee: Pop(0)
0xeef: Push(Stack[-2])
0xef0: IF (Stack[-1] == 0) GOTO 0xef3; Pop(1)

0xef1: Stack[-21] = (bool) 0
0xef2: Return(); Pop(18)

0xef3: @ StopWorld()
0xef4: Pop(0)
0xef5: @ CameraTransit(Stack[-3], Stack[-5])
0xef6: Pop(0)
0xef7: Push(CvectorIndex(Stack[-4], 0))
0xef8: Push(CvectorIndex(Stack[-5], 2))
0xef9: @ Rotate(Stack[-2], Stack[-1])
0xefa: Pop(2)
0xefb: PushEmpty(bool)
0xefc: Call2 0x144e

0xefd: Pop(0)
0xefe: IF (Stack[-1] == 0) GOTO 0xf00; Pop(1)

0xeff: GOTO 0xf08

0xf00: Push("head")
0xf01: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xf02: Pop(1)
0xf03: Push(Stack[-1])
0xf04: IF (Stack[-1] == 0) GOTO 0xf08; Pop(1)

0xf05: Push("head")
0xf06: @ LookAsyncCamera(Stack[-1])
0xf07: Pop(1)
0xf08: @ CameraWaitForPlayFinish()
0xf09: Pop(0)
0xf0a: @ ResumeWorld()
0xf0b: Pop(0)
0xf0c: Stack[-21] = (bool) 1
0xf0d: Return(); Pop(18)

0xf0e: PushEmpty(bool, bool)
0xf0f: @ CameraSwitchToNormal()
0xf10: Pop(0)
0xf11: PushEmpty(bool)
0xf12: Call2 0x144e

0xf13: Pop(0)
0xf14: IF (Stack[-1] == 0) GOTO 0xf16; Pop(1)

0xf15: GOTO 0xf1e

0xf16: Push("head")
0xf17: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xf18: Pop(1)
0xf19: Push(Stack[-1])
0xf1a: IF (Stack[-1] == 0) GOTO 0xf1e; Pop(1)

0xf1b: Push("head")
0xf1c: @ UnlookAsync(Stack[-1])
0xf1d: Pop(1)
0xf1e: Return(); Pop(2)

0xf1f: PushEmpty(bool, float, float, bool, float, float)
0xf20: @ lshHasAnimation(Stack[-3], Stack[-7])
0xf21: Pop(0)
0xf22: Push(Stack[-3])
0xf23: IF (Stack[-1] == 0) GOTO 0xf2a; Pop(1)

0xf24: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xf25: Pop(0)
0xf26: Push((bool) 0)
0xf27: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xf28: Pop(1)
0xf29: GOTO 0xf2e

0xf2a: Push("Can't find lsh animation : ")
0xf2b: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf2c: @ Trace(Stack[-1])
0xf2d: Pop(1)
0xf2e: Return(); Pop(6)

0xf2f: PushEmpty(bool, float, float, bool, float, float)
0xf30: @ lshHasAnimation(Stack[-3], Stack[-8])
0xf31: Pop(0)
0xf32: Push(Stack[-3])
0xf33: IF (Stack[-1] == 0) GOTO 0xf39; Pop(1)

0xf34: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xf35: Pop(0)
0xf36: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xf37: Pop(0)
0xf38: GOTO 0xf3d

0xf39: Push("Can't find lsh animation : ")
0xf3a: Pop(1); Push(Stack[-1] + Stack[-9]);
0xf3b: @ Trace(Stack[-1])
0xf3c: Pop(1)
0xf3d: Return(); Pop(6)

0xf3e: PushEmpty(float, cvector, float, cvector)
0xf3f: @@ GetEyesHeight(Stack[-2])
0xf40: Pop(0)
0xf41: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xf42: Push(CvectorIndex(Stack[-1], 1))
0xf43: Stack[-1] = Stack[-3]
0xf44: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xf45: Push("head")
0xf46: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xf47: Pop(1)
0xf48: Return(); Pop(4)

0xf49: PushEmpty(bool)
0xf4a: Call2 0x144e

0xf4b: Pop(0)
0xf4c: IF (Stack[-1] == 0) GOTO 0xf4f; Pop(1)

0xf4d: @ lshStopSpeech()
0xf4e: Pop(0)
0xf4f: Return(); Pop(0)

0xf50: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xf51: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xf52: Pop(0)
0xf53: Pop(0); Push((bool) Stack[-8] == 0)
0xf54: IF (Stack[-1] == 0) GOTO 0xf69; Pop(1)

0xf55: Stack[-7] = (int) 0
0xf56: Push((int) 1)
0xf57: Pop(1); Push(Stack[-8] + Stack[-1]);
0xf58: Pop(1); Push(Stack[-18] + Stack[-1]);
0xf59: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xf5a: Pop(1)
0xf5b: Pop(0); Push((bool) Stack[-6] == 0)
0xf5c: IF (Stack[-1] == 0) GOTO 0xf5e; Pop(1)

0xf5d: GOTO 0xf61

0xf5e: Push((int) 1)
0xf5f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xf60: GOTO 0xf56

0xf61: Pop(0); Push((bool) Stack[-7] == 0)
0xf62: IF (Stack[-1] == 0) GOTO 0xf64; Pop(1)

0xf63: Return(); Pop(16)

0xf64: @ irand(Stack[-5], Stack[-7])
0xf65: Pop(0)
0xf66: Push((int) 1)
0xf67: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf68: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xf69: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xf6a: Pop(0)
0xf6b: Push(Stack[-4])
0xf6c: IF (Stack[-1] == 0) GOTO 0xf78; Pop(1)

0xf6d: @ GetEyesHeight(Stack[-3])
0xf6e: Pop(0)
0xf6f: @ GetDirection(Stack[-2])
0xf70: Pop(0)
0xf71: Push((int) 50)
0xf72: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xf73: Push(CvectorIndex(Stack[-1], 1))
0xf74: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xf75: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xf76: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xf77: Pop(0)
0xf78: Return(); Pop(16)

0xf79: PushEmpty(object, object)
0xf7a: @ self(Stack[-1])
0xf7b: Pop(0)
0xf7c: Stack[-3] = Stack[-1]
0xf7d: Return(); Pop(2)

0xf7e: Stack[-1] = 0
0xf7f: PushEmpty(float, float)
0xf80: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf81: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xf82: Push((float)0.0)
0xf83: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf84: IF (Stack[-1] == 0) GOTO 0xf87; Pop(1)

0xf85: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xf86: Return(); Pop(2)

0xf87: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xf88: Return(); Pop(2)

0xf89: PushEmpty()
0xf8a: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xf8b: IF (Stack[-1] == 0) GOTO 0xf8e; Pop(1)

0xf8c: Stack[-3] = Stack[-2]
0xf8d: GOTO 0xf8f

0xf8e: Stack[-3] = Stack[-1]
0xf8f: Return(); Pop(0)

0xf90: PushEmpty()
0xf91: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xf92: IF (Stack[-1] == 0) GOTO 0xf95; Pop(1)

0xf93: Stack[-4] = Stack[-2]
0xf94: Return(); Pop(0)

0xf95: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xf96: IF (Stack[-1] == 0) GOTO 0xf99; Pop(1)

0xf97: Stack[-4] = Stack[-1]
0xf98: Return(); Pop(0)

0xf99: Stack[-4] = Stack[-3]
0xf9a: Return(); Pop(0)

0xf9b: PushEmpty(object, object)
0xf9c: @ CreateObjectVector(Stack[-1])
0xf9d: Pop(0)
0xf9e: Stack[-3] = Stack[-1]
0xf9f: Return(); Pop(2)

0xfa0: Stack[-1] = 0
0xfa1: PushEmpty()
0xfa2: Push(CvectorIndex(Stack[-2], 0))
0xfa3: Push(CvectorIndex(Stack[-2], 0))
0xfa4: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfa5: Push(CvectorIndex(Stack[-3], 2))
0xfa6: Push(CvectorIndex(Stack[-3], 2))
0xfa7: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfa8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xfa9: Return(); Pop(0)

0xfaa: PushEmpty()
0xfab: Push(CvectorIndex(Stack[-1], 0))
0xfac: Push(CvectorIndex(Stack[-2], 0))
0xfad: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfae: Push(CvectorIndex(Stack[-2], 2))
0xfaf: Push(CvectorIndex(Stack[-3], 2))
0xfb0: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfb1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfb2: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xfb3: Return(); Pop(0)

0xfb4: PushEmpty()
0xfb5: PushEmpty(float, cvector, cvector)
0xfb6: Stack[-2] = Stack[-5]
0xfb7: Stack[-1] = Stack[-4]
0xfb8: Call2 0xfa1

0xfb9: Pop(2)
0xfba: PushEmpty(float, cvector)
0xfbb: Stack[-1] = Stack[-5]
0xfbc: Call2 0xfaa

0xfbd: Pop(1)
0xfbe: PushEmpty(float, cvector)
0xfbf: Stack[-1] = Stack[-5]
0xfc0: Call2 0xfaa

0xfc1: Pop(1)
0xfc2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfc3: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xfc4: Return(); Pop(0)

0xfc5: PushEmpty(int, int)
0xfc6: @ GetVariable(Stack[-3], Stack[-1])
0xfc7: Pop(0)
0xfc8: Stack[-4] = Stack[-1]
0xfc9: Return(); Pop(2)

0xfca: PushEmpty(object, object)
0xfcb: @ CreateFloatVector(Stack[-1])
0xfcc: Pop(0)
0xfcd: @@ add(Stack[-3])
0xfce: Pop(0)
0xfcf: Push((int) 15)
0xfd0: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xfd1: Pop(1)
0xfd2: Return(); Pop(2)

0xfd3: Stack[-1] = 0
0xfd4: PushEmpty(float, float)
0xfd5: @ GetGameTime(Stack[-1])
0xfd6: Pop(0)
0xfd7: Push((int) 1)
0xfd8: PushEmpty(int)
0xfd9: Push((int) 24)
0xfda: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xfdb: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xfdc: Return(); Pop(2)

0xfdd: PushEmpty(bool, bool)
0xfde: @ IsPlayerActor(Stack[-3], Stack[-1])
0xfdf: Pop(0)
0xfe0: Push(Stack[-1])
0xfe1: IF (Stack[-1] == 0) GOTO 0xfe5; Pop(1)

0xfe2: Push("attack")
0xfe3: @ PlayGlobalMusic(Stack[-1])
0xfe4: Pop(1)
0xfe5: Return(); Pop(2)

0xfe6: PushEmpty(object, object)
0xfe7: @ GetScene(Stack[-1])
0xfe8: Pop(0)
0xfe9: Push("battle")
0xfea: PushEmpty(object)
0xfeb: Call2 0xf79

0xfec: Pop(0)
0xfed: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xfee: Pop(2)
0xfef: Return(); Pop(2)

0xff0: Stack[-1] = 0
0xff1: PushEmpty()
0xff2: Push((int) 100)
0xff3: @@ SetReturnValue(Stack[-1])
0xff4: Pop(1)
0xff5: Return(); Pop(0)

0xff6: PushEmpty()
0xff7: PushEmpty(int, string)
0xff8: Stack[-1] = "branch"
0xff9: Call2 0xfc5

0xffa: Pop(1)
0xffb: Push((int) 0)
0xffc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xffd: IF (Stack[-1] == 0) GOTO 0x1000; Pop(1)

0xffe: Stack[-2] = (bool) 1
0xfff: Return(); Pop(0)

0x1000: Stack[-2] = (bool) 0
0x1001: Return(); Pop(0)

0x1002: PushEmpty()
0x1003: PushEmpty(int, string)
0x1004: Stack[-1] = "branch"
0x1005: Call2 0xfc5

0x1006: Pop(1)
0x1007: Push((int) 1)
0x1008: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1009: IF (Stack[-1] == 0) GOTO 0x100c; Pop(1)

0x100a: Stack[-2] = (bool) 1
0x100b: Return(); Pop(0)

0x100c: Stack[-2] = (bool) 0
0x100d: Return(); Pop(0)

0x100e: PushEmpty()
0x100f: PushEmpty(int, string)
0x1010: Stack[-1] = "branch"
0x1011: Call2 0xfc5

0x1012: Pop(1)
0x1013: Push((int) 2)
0x1014: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1015: IF (Stack[-1] == 0) GOTO 0x1018; Pop(1)

0x1016: Stack[-2] = (bool) 1
0x1017: Return(); Pop(0)

0x1018: Stack[-2] = (bool) 0
0x1019: Return(); Pop(0)

0x101a: PushEmpty()
0x101b: PushEmpty(bool, object)
0x101c: Stack[-1] = Stack[-3]
0x101d: Call2 0x106a

0x101e: Pop(1)
0x101f: IF (Stack[-1] == 0) GOTO 0x1022; Pop(1)

0x1020: Stack[-2] = (bool) 1
0x1021: Return(); Pop(0)

0x1022: Stack[-2] = (bool) 0
0x1023: Return(); Pop(0)

0x1024: PushEmpty()
0x1025: PushEmpty(bool, object)
0x1026: Stack[-1] = Stack[-3]
0x1027: Call2 0x1071

0x1028: Pop(1)
0x1029: IF (Stack[-1] == 0) GOTO 0x102c; Pop(1)

0x102a: Stack[-2] = (bool) 1
0x102b: Return(); Pop(0)

0x102c: Stack[-2] = (bool) 0
0x102d: Return(); Pop(0)

0x102e: PushEmpty()
0x102f: PushEmpty(bool, object)
0x1030: Stack[-1] = Stack[-3]
0x1031: Call2 0x1078

0x1032: Pop(1)
0x1033: IF (Stack[-1] == 0) GOTO 0x1036; Pop(1)

0x1034: Stack[-2] = (bool) 1
0x1035: Return(); Pop(0)

0x1036: Stack[-2] = (bool) 0
0x1037: Return(); Pop(0)

0x1038: PushEmpty()
0x1039: PushEmpty(bool, object)
0x103a: Stack[-1] = Stack[-3]
0x103b: Call2 0x107f

0x103c: Pop(1)
0x103d: IF (Stack[-1] == 0) GOTO 0x1040; Pop(1)

0x103e: Stack[-2] = (bool) 1
0x103f: Return(); Pop(0)

0x1040: Stack[-2] = (bool) 0
0x1041: Return(); Pop(0)

0x1042: PushEmpty()
0x1043: PushEmpty(bool, object)
0x1044: Stack[-1] = Stack[-3]
0x1045: Call2 0x1086

0x1046: Pop(1)
0x1047: IF (Stack[-1] == 0) GOTO 0x104a; Pop(1)

0x1048: Stack[-2] = (bool) 1
0x1049: Return(); Pop(0)

0x104a: Stack[-2] = (bool) 0
0x104b: Return(); Pop(0)

0x104c: PushEmpty()
0x104d: PushEmpty(bool, object)
0x104e: Stack[-1] = Stack[-3]
0x104f: Call2 0x108d

0x1050: Pop(1)
0x1051: IF (Stack[-1] == 0) GOTO 0x1054; Pop(1)

0x1052: Stack[-2] = (bool) 1
0x1053: Return(); Pop(0)

0x1054: Stack[-2] = (bool) 0
0x1055: Return(); Pop(0)

0x1056: PushEmpty()
0x1057: PushEmpty(bool, object)
0x1058: Stack[-1] = Stack[-3]
0x1059: Call2 0x1094

0x105a: Pop(1)
0x105b: IF (Stack[-1] == 0) GOTO 0x105e; Pop(1)

0x105c: Stack[-2] = (bool) 1
0x105d: Return(); Pop(0)

0x105e: Stack[-2] = (bool) 0
0x105f: Return(); Pop(0)

0x1060: PushEmpty()
0x1061: PushEmpty(bool, object)
0x1062: Stack[-1] = Stack[-3]
0x1063: Call2 0x109b

0x1064: Pop(1)
0x1065: IF (Stack[-1] == 0) GOTO 0x1068; Pop(1)

0x1066: Stack[-2] = (bool) 1
0x1067: Return(); Pop(0)

0x1068: Stack[-2] = (bool) 0
0x1069: Return(); Pop(0)

0x106a: PushEmpty()
0x106b: PushEmpty(int)
0x106c: Call2 0xfd4

0x106d: Pop(0)
0x106e: Push((int) 6)
0x106f: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x1070: Return(); Pop(0)

0x1071: PushEmpty()
0x1072: PushEmpty(int)
0x1073: Call2 0xfd4

0x1074: Pop(0)
0x1075: Push((int) 2)
0x1076: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1077: Return(); Pop(0)

0x1078: PushEmpty()
0x1079: PushEmpty(int)
0x107a: Call2 0xfd4

0x107b: Pop(0)
0x107c: Push((int) 7)
0x107d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x107e: Return(); Pop(0)

0x107f: PushEmpty()
0x1080: PushEmpty(int)
0x1081: Call2 0xfd4

0x1082: Pop(0)
0x1083: Push((int) 8)
0x1084: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1085: Return(); Pop(0)

0x1086: PushEmpty()
0x1087: PushEmpty(int)
0x1088: Call2 0xfd4

0x1089: Pop(0)
0x108a: Push((int) 9)
0x108b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x108c: Return(); Pop(0)

0x108d: PushEmpty()
0x108e: PushEmpty(int)
0x108f: Call2 0xfd4

0x1090: Pop(0)
0x1091: Push((int) 10)
0x1092: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1093: Return(); Pop(0)

0x1094: PushEmpty()
0x1095: PushEmpty(int)
0x1096: Call2 0xfd4

0x1097: Pop(0)
0x1098: Push((int) 11)
0x1099: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x109a: Return(); Pop(0)

0x109b: PushEmpty()
0x109c: PushEmpty(int)
0x109d: Call2 0xfd4

0x109e: Pop(0)
0x109f: Push((int) 12)
0x10a0: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x10a1: Return(); Pop(0)

0x10a2: PushEmpty(int, int)
0x10a3: Push("branch")
0x10a4: @ GetVariable(Stack[-1], Stack[-2])
0x10a5: Pop(1)
0x10a6: Push((int) 0)
0x10a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10a8: IF (Stack[-1] == 0) GOTO 0x10ac; Pop(1)

0x10a9: Stack[-3] = (int) 1
0x10aa: Return(); Pop(2)

0x10ab: GOTO 0x10b1

0x10ac: Push((int) 1)
0x10ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10ae: IF (Stack[-1] == 0) GOTO 0x10b1; Pop(1)

0x10af: Stack[-3] = (int) 2
0x10b0: Return(); Pop(2)

0x10b1: Stack[-3] = (int) 3
0x10b2: Return(); Pop(2)

0x10b3: PushEmpty(int, int)
0x10b4: Push("branch")
0x10b5: @ GetVariable(Stack[-1], Stack[-2])
0x10b6: Pop(1)
0x10b7: Stack[-3] = Stack[-1]
0x10b8: Return(); Pop(2)

0x10b9: PushEmpty(int, int)
0x10ba: @@ GetItemID(Stack[-1])
0x10bb: Pop(0)
0x10bc: Stack[-4] = Stack[-1]
0x10bd: Return(); Pop(2)

0x10be: PushEmpty(int, int, int, string, bool, bool, int, int, int, int, string, bool, bool, int)
0x10bf: Push((int) 0)
0x10c0: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x10c1: IF (Stack[-1] == 0) GOTO 0x10e3; Pop(1)

0x10c2: PushEmpty(int)
0x10c3: Call2 0xfd4

0x10c4: Stack[-8] = Stack[-1]
0x10c5: Pop(1)
0x10c6: Stack[-6] = (int) 0
0x10c7: Stack[-5] = (int) 1
0x10c8: Pop(0); Push((bool) Stack[-5] <= Stack[-7])
0x10c9: IF (Stack[-1] == 0) GOTO 0x10e1; Pop(1)

0x10ca: Stack[-4] = "Price"
0x10cb: Push((int) 1)
0x10cc: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x10cd: IF (Stack[-1] == 0) GOTO 0x10cf; Pop(1)

0x10ce: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0x10cf: PushEmpty(int, object)
0x10d0: Stack[-1] = Stack[-18]
0x10d1: Call2 0x10b9

0x10d2: Pop(1)
0x10d3: @ HasInvItemProperty(Stack[-4], Stack[-1], Stack[-5])
0x10d4: Pop(1)
0x10d5: Pop(0); Push((bool) Stack[-3] == 0)
0x10d6: IF (Stack[-1] == 0) GOTO 0x10d8; Pop(1)

0x10d7: GOTO 0x10de

0x10d8: PushEmpty(int, object)
0x10d9: Stack[-1] = Stack[-18]
0x10da: Call2 0x10b9

0x10db: Pop(1)
0x10dc: @ GetInvItemProperty(Stack[-7], Stack[-1], Stack[-5])
0x10dd: Pop(1)
0x10de: Push((int) 1)
0x10df: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x10e0: GOTO 0x10c8

0x10e1: Stack[-17] = Stack[-6]
0x10e2: Return(); Pop(14)

0x10e3: PushEmpty(int, object)
0x10e4: Stack[-1] = Stack[-18]
0x10e5: Call2 0x10b9

0x10e6: Pop(1)
0x10e7: Push("BarterPrice")
0x10e8: Pop(1); Push(Stack[-1] + Stack[-17]);
0x10e9: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x10ea: Pop(2)
0x10eb: Pop(0); Push((bool) Stack[-2] == 0)
0x10ec: IF (Stack[-1] == 0) GOTO 0x10ef; Pop(1)

0x10ed: Stack[-17] = (int) 0
0x10ee: Return(); Pop(14)

0x10ef: PushEmpty(int, object)
0x10f0: Stack[-1] = Stack[-18]
0x10f1: Call2 0x10b9

0x10f2: Pop(1)
0x10f3: Push("BarterPrice")
0x10f4: Pop(1); Push(Stack[-1] + Stack[-17]);
0x10f5: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x10f6: Pop(2)
0x10f7: Push((int) 0)
0x10f8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10f9: IF (Stack[-1] == 0) GOTO 0x10fc; Pop(1)

0x10fa: Stack[-17] = Stack[-1]
0x10fb: Return(); Pop(14)

0x10fc: Stack[-17] = -Stack[-1]; Pop(0);
0x10fd: Return(); Pop(14)

0x10fe: PushEmpty()
0x10ff: PushEmpty(int)
0x1100: Call2 0x10b3

0x1101: Pop(0)
0x1102: Push((int) 1)
0x1103: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1104: IF (Stack[-1] == 0) GOTO 0x1108; Pop(1)

0x1105: @ WorkWithCorpse(Stack[-1])
0x1106: Pop(0)
0x1107: GOTO 0x110a

0x1108: @ Barter(Stack[-1])
0x1109: Pop(0)
0x110a: Return(); Pop(0)

0x110b: PushEmpty(int, bool, int, bool)
0x110c: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x110d: IF (Stack[-1] == 0) GOTO 0x1112; Pop(1)

0x110e: Push("GenerateMoney: iMin > iMax")
0x110f: @ Trace(Stack[-1])
0x1110: Pop(1)
0x1111: Return(); Pop(4)

0x1112: Stack[-2] = (int) 0
0x1113: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x1114: IF (Stack[-1] == 0) GOTO 0x1119; Pop(1)

0x1115: Pop(0); Push(Stack[-5] - Stack[-6]);
0x1116: @ irand(Stack[-3], Stack[-1])
0x1117: Pop(1)
0x1118: GOTO 0x111d

0x1119: Push((int) 0)
0x111a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x111b: IF (Stack[-1] == 0) GOTO 0x111d; Pop(1)

0x111c: Return(); Pop(4)

0x111d: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x111e: Push((int) 0)
0x111f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1120: IF (Stack[-1] == 0) GOTO 0x1122; Pop(1)

0x1121: Return(); Pop(4)

0x1122: PushEmpty(int, string)
0x1123: Stack[-1] = "Money"
0x1124: Call2 0x1202

0x1125: Pop(1)
0x1126: Push((int) 0)
0x1127: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x1128: Pop(2)
0x1129: Return(); Pop(4)

0x112a: PushEmpty(object, int, bool, object, int, bool)
0x112b: @ CreateInvItem(Stack[-3])
0x112c: Pop(0)
0x112d: @@ SetItemName(Stack[-7])
0x112e: Pop(0)
0x112f: Push("Organ")
0x1130: Push((int) 1)
0x1131: @@ SetProperty(Stack[-2], Stack[-1])
0x1132: Pop(2)
0x1133: @@ GetItemID(Stack[-2])
0x1134: Pop(0)
0x1135: Push((int) 0)
0x1136: Push((int) 1)
0x1137: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x1138: Pop(2)
0x1139: Return(); Pop(6)

0x113a: Stack[-3] = 0
0x113b: PushEmpty(int)
0x113c: Call2 0x10b3

0x113d: Pop(0)
0x113e: Push((int) 1)
0x113f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1140: IF (Stack[-1] == 0) GOTO 0x1142; Pop(1)

0x1141: Return(); Pop(0)

0x1142: PushEmpty(string)
0x1143: Stack[-1] = "liver"
0x1144: Call2 0x112a

0x1145: Pop(1)
0x1146: PushEmpty(string)
0x1147: Stack[-1] = "kidney"
0x1148: Call2 0x112a

0x1149: Pop(1)
0x114a: PushEmpty(string)
0x114b: Stack[-1] = "heart"
0x114c: Call2 0x112a

0x114d: Pop(1)
0x114e: PushEmpty(string)
0x114f: Stack[-1] = "blood"
0x1150: Call2 0x112a

0x1151: Pop(1)
0x1152: Return(); Pop(0)

0x1153: PushEmpty(int, bool, int, bool)
0x1154: Push(Stack[-5])
0x1155: IF (Stack[-1] == 0) GOTO 0x11ac; Pop(1)

0x1156: PushEmpty(int, int)
0x1157: Stack[-2] = (int) 0
0x1158: Push((int) 100)
0x1159: PushEmpty(int)
0x115a: Call2 0xfd4

0x115b: Pop(0)
0x115c: Push((int) 100)
0x115d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x115e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x115f: Call2 0x110b

0x1160: Pop(2)
0x1161: Push((int) 8)
0x1162: @ irand(Stack[-3], Stack[-1])
0x1163: Pop(1)
0x1164: Push((int) 0)
0x1165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1166: IF (Stack[-1] == 0) GOTO 0x1170; Pop(1)

0x1167: PushEmpty(int, string)
0x1168: Stack[-1] = "lemon"
0x1169: Call2 0x1202

0x116a: Pop(1)
0x116b: Push((int) 0)
0x116c: Push((int) 1)
0x116d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x116e: Pop(3)
0x116f: GOTO 0x11ab

0x1170: Push((int) 1)
0x1171: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1172: IF (Stack[-1] == 0) GOTO 0x117c; Pop(1)

0x1173: PushEmpty(int, string)
0x1174: Stack[-1] = "rusk"
0x1175: Call2 0x1202

0x1176: Pop(1)
0x1177: Push((int) 0)
0x1178: Push((int) 1)
0x1179: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x117a: Pop(3)
0x117b: GOTO 0x11ab

0x117c: Push((int) 2)
0x117d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117e: IF (Stack[-1] == 0) GOTO 0x1188; Pop(1)

0x117f: PushEmpty(int, string)
0x1180: Stack[-1] = "hook"
0x1181: Call2 0x1202

0x1182: Pop(1)
0x1183: Push((int) 0)
0x1184: Push((int) 1)
0x1185: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1186: Pop(3)
0x1187: GOTO 0x11ab

0x1188: Push((int) 4)
0x1189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118a: IF (Stack[-1] == 0) GOTO 0x1194; Pop(1)

0x118b: PushEmpty(int, string)
0x118c: Stack[-1] = "syringe"
0x118d: Call2 0x1202

0x118e: Pop(1)
0x118f: Push((int) 0)
0x1190: Push((int) 1)
0x1191: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1192: Pop(3)
0x1193: GOTO 0x11ab

0x1194: Push((int) 5)
0x1195: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1196: IF (Stack[-1] == 0) GOTO 0x11a0; Pop(1)

0x1197: PushEmpty(int, string)
0x1198: Stack[-1] = "watch"
0x1199: Call2 0x1202

0x119a: Pop(1)
0x119b: Push((int) 0)
0x119c: Push((int) 1)
0x119d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x119e: Pop(3)
0x119f: GOTO 0x11ab

0x11a0: Push((int) 6)
0x11a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a2: IF (Stack[-1] == 0) GOTO 0x11ab; Pop(1)

0x11a3: PushEmpty(int, string)
0x11a4: Stack[-1] = "razor"
0x11a5: Call2 0x1202

0x11a6: Pop(1)
0x11a7: Push((int) 0)
0x11a8: Push((int) 1)
0x11a9: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11aa: Pop(3)
0x11ab: GOTO 0x1201

0x11ac: PushEmpty(int, int)
0x11ad: Stack[-2] = (int) 0
0x11ae: Push((int) 50)
0x11af: PushEmpty(int)
0x11b0: Call2 0xfd4

0x11b1: Pop(0)
0x11b2: Push((int) 50)
0x11b3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11b4: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x11b5: Call2 0x110b

0x11b6: Pop(2)
0x11b7: Push((int) 7)
0x11b8: @ irand(Stack[-3], Stack[-1])
0x11b9: Pop(1)
0x11ba: Push((int) 0)
0x11bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11bc: IF (Stack[-1] == 0) GOTO 0x11c6; Pop(1)

0x11bd: PushEmpty(int, string)
0x11be: Stack[-1] = "beads"
0x11bf: Call2 0x1202

0x11c0: Pop(1)
0x11c1: Push((int) 0)
0x11c2: Push((int) 1)
0x11c3: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11c4: Pop(3)
0x11c5: GOTO 0x1201

0x11c6: Push((int) 1)
0x11c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c8: IF (Stack[-1] == 0) GOTO 0x11d2; Pop(1)

0x11c9: PushEmpty(int, string)
0x11ca: Stack[-1] = "bracelet"
0x11cb: Call2 0x1202

0x11cc: Pop(1)
0x11cd: Push((int) 0)
0x11ce: Push((int) 1)
0x11cf: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11d0: Pop(3)
0x11d1: GOTO 0x1201

0x11d2: Push((int) 2)
0x11d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d4: IF (Stack[-1] == 0) GOTO 0x11de; Pop(1)

0x11d5: PushEmpty(int, string)
0x11d6: Stack[-1] = "ear_ring"
0x11d7: Call2 0x1202

0x11d8: Pop(1)
0x11d9: Push((int) 0)
0x11da: Push((int) 1)
0x11db: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11dc: Pop(3)
0x11dd: GOTO 0x1201

0x11de: Push((int) 3)
0x11df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e0: IF (Stack[-1] == 0) GOTO 0x11ea; Pop(1)

0x11e1: PushEmpty(int, string)
0x11e2: Stack[-1] = "gold_ring"
0x11e3: Call2 0x1202

0x11e4: Pop(1)
0x11e5: Push((int) 0)
0x11e6: Push((int) 1)
0x11e7: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11e8: Pop(3)
0x11e9: GOTO 0x1201

0x11ea: Push((int) 4)
0x11eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11ec: IF (Stack[-1] == 0) GOTO 0x11f6; Pop(1)

0x11ed: PushEmpty(int, string)
0x11ee: Stack[-1] = "silver_ring"
0x11ef: Call2 0x1202

0x11f0: Pop(1)
0x11f1: Push((int) 0)
0x11f2: Push((int) 1)
0x11f3: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11f4: Pop(3)
0x11f5: GOTO 0x1201

0x11f6: Push((int) 5)
0x11f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f8: IF (Stack[-1] == 0) GOTO 0x1201; Pop(1)

0x11f9: PushEmpty(int, string)
0x11fa: Stack[-1] = "flower"
0x11fb: Call2 0x1202

0x11fc: Pop(1)
0x11fd: Push((int) 0)
0x11fe: Push((int) 1)
0x11ff: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1200: Pop(3)
0x1201: Return(); Pop(4)

0x1202: PushEmpty(int, int)
0x1203: @ GetInvItemByName(Stack[-1], Stack[-3])
0x1204: Pop(0)
0x1205: Stack[-4] = Stack[-1]
0x1206: Return(); Pop(2)

0x1207: PushEmpty()
0x1208: PushEmpty(object)
0x1209: Stack[-1] = Stack[-2]
0x120a: Push(-1, 0); TaskCall(2)
0x120b: Call2 0x707

0x120c: Pop(-1, 0); TaskReturn
0x120d: Pop(1)
0x120e: Return(); Pop(0)

0x120f: PushEmpty(float, float)
0x1210: Push("health")
0x1211: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1212: IF (Stack[-1] == 0) GOTO 0x121b; Pop(1)

0x1213: Push("health")
0x1214: @ GetProperty(Stack[-1], Stack[-2])
0x1215: Pop(1)
0x1216: Push((int) 0)
0x1217: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x1218: IF (Stack[-1] == 0) GOTO 0x121b; Pop(1)

0x1219: @ SignalDeath(Stack[-4])
0x121a: Pop(0)
0x121b: Return(); Pop(2)

0x121c: PushEmpty()
0x121d: PushEmpty(object)
0x121e: Stack[-1] = Stack[-2]
0x121f: Call2 0x1207

0x1220: Pop(1)
0x1221: Return(); Pop(0)

0x1222: PushEmpty()
0x1223: PushEmpty(object, int, float)
0x1224: Stack[-3] = Stack[-7]
0x1225: Stack[-2] = Stack[-6]
0x1226: Stack[-1] = Stack[-5]
0x1227: Call2 0xe68

0x1228: Pop(3)
0x1229: Return(); Pop(0)

0x122a: PushEmpty()
0x122b: PushEmpty(object, int, float, cvector, cvector)
0x122c: Stack[-5] = Stack[-11]
0x122d: Stack[-4] = Stack[-10]
0x122e: Stack[-3] = Stack[-9]
0x122f: Stack[-2] = Stack[-7]
0x1230: Stack[-1] = Stack[-6]
0x1231: Call2 0xeac

0x1232: Pop(5)
0x1233: Return(); Pop(0)

0x1234: PushEmpty()
0x1235: Push("unholster")
0x1236: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1237: IF (Stack[-1] == 0) GOTO 0x123f; Pop(1)

0x1238: PushEmpty(bool, object)
0x1239: Stack[-1] = Stack[-4]
0x123a: Call2 0x1371

0x123b: Stack[-5] = Stack[-2]
0x123c: Pop(2)
0x123d: Return(); Pop(0)

0x123e: GOTO 0x1252

0x123f: Push("player_shot")
0x1240: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1241: IF (Stack[-1] == 0) GOTO 0x1249; Pop(1)

0x1242: PushEmpty(bool, object)
0x1243: Stack[-1] = Stack[-4]
0x1244: Call2 0x1376

0x1245: Stack[-5] = Stack[-2]
0x1246: Pop(2)
0x1247: Return(); Pop(0)

0x1248: GOTO 0x1252

0x1249: Push("battle")
0x124a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x124b: IF (Stack[-1] == 0) GOTO 0x1252; Pop(1)

0x124c: PushEmpty(bool, object)
0x124d: Stack[-1] = Stack[-4]
0x124e: Call2 0x138b

0x124f: Stack[-5] = Stack[-2]
0x1250: Pop(2)
0x1251: Return(); Pop(0)

0x1252: Stack[-3] = (bool) 0
0x1253: Return(); Pop(0)

0x1254: PushEmpty()
0x1255: Push("unholster")
0x1256: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1257: IF (Stack[-1] == 0) GOTO 0x125d; Pop(1)

0x1258: PushEmpty(object)
0x1259: Stack[-1] = Stack[-3]
0x125a: Call2 0x1374

0x125b: Pop(1)
0x125c: GOTO 0x126c

0x125d: Push("player_shot")
0x125e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x125f: IF (Stack[-1] == 0) GOTO 0x1265; Pop(1)

0x1260: PushEmpty(object)
0x1261: Stack[-1] = Stack[-3]
0x1262: Call2 0x1385

0x1263: Pop(1)
0x1264: GOTO 0x126c

0x1265: Push("battle")
0x1266: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1267: IF (Stack[-1] == 0) GOTO 0x126c; Pop(1)

0x1268: PushEmpty(object)
0x1269: Stack[-1] = Stack[-3]
0x126a: Call2 0x138e

0x126b: Pop(1)
0x126c: Return(); Pop(0)

0x126d: PushEmpty(bool, bool)
0x126e: PushEmpty(bool)
0x126f: Stack[-1] = (bool) 0
0x1270: PushEmpty(bool, object)
0x1271: Stack[-1] = Stack[-6]
0x1272: Call2 0x1371

0x1273: Pop(1)
0x1274: IF (Stack[-1] == 0) GOTO 0x127b; Pop(1)

0x1275: PushEmpty(bool, object)
0x1276: Stack[-1] = Stack[-6]
0x1277: Call2 0xda1

0x1278: Pop(1)
0x1279: IF (Stack[-1] == 0) GOTO 0x127b; Pop(1)

0x127a: Stack[-1] = (bool) 1
0x127b: IF (Stack[-1] == 0) GOTO 0x1282; Pop(1)

0x127c: @@ IsWeaponHolstered(Stack[-1])
0x127d: Pop(0)
0x127e: Pop(0); Push((bool) Stack[-1] == 0)
0x127f: IF (Stack[-1] == 0) GOTO 0x1282; Pop(1)

0x1280: Stack[-4] = (bool) 1
0x1281: Return(); Pop(2)

0x1282: Stack[-4] = (bool) 0
0x1283: Return(); Pop(2)

0x1284: PushEmpty()
0x1285: PushEmpty(object)
0x1286: Stack[-1] = Stack[-2]
0x1287: Call2 0x1374

0x1288: Pop(1)
0x1289: Return(); Pop(0)

0x128a: PushEmpty()
0x128b: PushEmpty(bool, object)
0x128c: Stack[-1] = Stack[-3]
0x128d: Call2 0xda1

0x128e: Pop(1)
0x128f: IF (Stack[-1] == 0) GOTO 0x1296; Pop(1)

0x1290: PushEmpty(object)
0x1291: Call2 0xf79

0x1292: Pop(0)
0x1293: Push((float)-0.03)
0x1294: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1295: Pop(2)
0x1296: Return(); Pop(0)

0x1297: PushEmpty(object, object)
0x1298: Push("heal")
0x1299: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x129a: IF (Stack[-1] == 0) GOTO 0x12a5; Pop(1)

0x129b: Push("player")
0x129c: @ FindActor(Stack[-2], Stack[-1])
0x129d: Pop(1)
0x129e: PushEmpty(bool, object)
0x129f: Stack[-1] = Stack[-3]
0x12a0: Call2 0x1390

0x12a1: Stack[-6] = Stack[-2]
0x12a2: Pop(2)
0x12a3: Return(); Pop(2)

0x12a4: Stack[-1] = 0
0x12a5: Stack[-4] = (bool) 0
0x12a6: Return(); Pop(2)

0x12a7: PushEmpty(object, object)
0x12a8: Push("heal")
0x12a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x12aa: IF (Stack[-1] == 0) GOTO 0x12b3; Pop(1)

0x12ab: Push("player")
0x12ac: @ FindActor(Stack[-2], Stack[-1])
0x12ad: Pop(1)
0x12ae: PushEmpty(object)
0x12af: Stack[-1] = Stack[-2]
0x12b0: Call2 0x1393

0x12b1: Pop(1)
0x12b2: Stack[-1] = 0
0x12b3: Return(); Pop(2)

0x12b4: PushEmpty()
0x12b5: PushEmpty(bool)
0x12b6: Call2 0x1488

0x12b7: Pop(0)
0x12b8: IF (Stack[-1] == 0) GOTO 0x12bb; Pop(1)

0x12b9: Stack[-2] = (int) 2
0x12ba: GOTO 0x12bc

0x12bb: Stack[-2] = (int) 0
0x12bc: Return(); Pop(0)

0x12bd: PushEmpty()
0x12be: PushEmpty(object)
0x12bf: Stack[-1] = Stack[-2]
0x12c0: Push(-1, 1); TaskCall(4)
0x12c1: Call2 0x8c6

0x12c2: Pop(-1, 1); TaskReturn
0x12c3: Pop(1)
0x12c4: Return(); Pop(0)

0x12c5: PushEmpty()
0x12c6: PushEmpty(bool, object)
0x12c7: Stack[-1] = Stack[-3]
0x12c8: Call2 0xe24

0x12c9: Pop(1)
0x12ca: IF (Stack[-1] == 0) GOTO 0x12cd; Pop(1)

0x12cb: Stack[-2] = (int) 2
0x12cc: GOTO 0x12ce

0x12cd: Stack[-2] = (int) 0
0x12ce: Return(); Pop(0)

0x12cf: PushEmpty()
0x12d0: PushEmpty(object)
0x12d1: Stack[-1] = Stack[-2]
0x12d2: Push(-1, 6); TaskCall(5)
0x12d3: Call2 0x9d9

0x12d4: Pop(-1, 6); TaskReturn
0x12d5: Pop(1)
0x12d6: Return(); Pop(0)

0x12d7: PushEmpty(string, string, string, string)
0x12d8: PushEmpty(bool, object, string)
0x12d9: Stack[-2] = Stack[-9]
0x12da: Stack[-1] = "class"
0x12db: Call2 0xda6

0x12dc: Pop(2)
0x12dd: Pop(1); Push((bool) Stack[-1] == 0)
0x12de: IF (Stack[-1] == 0) GOTO 0x12e1; Pop(1)

0x12df: Stack[-7] = (bool) 0
0x12e0: Return(); Pop(4)

0x12e1: Push("class")
0x12e2: @ GetProperty(Stack[-1], Stack[-3])
0x12e3: Pop(1)
0x12e4: Push("class")
0x12e5: @@ GetProperty(Stack[-1], Stack[-2])
0x12e6: Pop(1)
0x12e7: PushEmpty(bool)
0x12e8: Stack[-1] = (bool) 0
0x12e9: Pop(0); Push((bool) Stack[-6] == 0)
0x12ea: IF (Stack[-1] == 0) GOTO 0x12ee; Pop(1)

0x12eb: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0x12ec: IF (Stack[-1] == 0) GOTO 0x12ee; Pop(1)

0x12ed: Stack[-1] = (bool) 1
0x12ee: IF (Stack[-1] == 0) GOTO 0x12f1; Pop(1)

0x12ef: Stack[-7] = (bool) 1
0x12f0: Return(); Pop(4)

0x12f1: Push("rat")
0x12f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f3: IF (Stack[-1] == 0) GOTO 0x12f7; Pop(1)

0x12f4: Stack[-7] = (bool) 0
0x12f5: Return(); Pop(4)

0x12f6: GOTO 0x1320

0x12f7: Push("rat_big")
0x12f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f9: IF (Stack[-1] == 0) GOTO 0x12fd; Pop(1)

0x12fa: Stack[-7] = (bool) 0
0x12fb: Return(); Pop(4)

0x12fc: GOTO 0x1320

0x12fd: Push("dog")
0x12fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12ff: IF (Stack[-1] == 0) GOTO 0x1303; Pop(1)

0x1300: Stack[-7] = (bool) 0
0x1301: Return(); Pop(4)

0x1302: GOTO 0x1320

0x1303: Push("grabitel")
0x1304: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1305: IF (Stack[-1] == 0) GOTO 0x1309; Pop(1)

0x1306: Stack[-7] = (bool) 0
0x1307: Return(); Pop(4)

0x1308: GOTO 0x1320

0x1309: Push("bomber")
0x130a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x130b: IF (Stack[-1] == 0) GOTO 0x130f; Pop(1)

0x130c: Stack[-7] = (bool) 0
0x130d: Return(); Pop(4)

0x130e: GOTO 0x1320

0x130f: Push("sanitar")
0x1310: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1311: IF (Stack[-1] == 0) GOTO 0x1315; Pop(1)

0x1312: Stack[-7] = (bool) 0
0x1313: Return(); Pop(4)

0x1314: GOTO 0x1320

0x1315: Push("hunter")
0x1316: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1317: IF (Stack[-1] == 0) GOTO 0x131b; Pop(1)

0x1318: Stack[-7] = (bool) 0
0x1319: Return(); Pop(4)

0x131a: GOTO 0x1320

0x131b: Push("soldier")
0x131c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x131d: IF (Stack[-1] == 0) GOTO 0x1320; Pop(1)

0x131e: Stack[-7] = (bool) 0
0x131f: Return(); Pop(4)

0x1320: Stack[-7] = (bool) 1
0x1321: Return(); Pop(4)

0x1322: PushEmpty()
0x1323: PushEmpty(int, object)
0x1324: Stack[-1] = Stack[-4]
0x1325: Call2 0x12c5

0x1326: Stack[-5] = Stack[-2]
0x1327: Pop(2)
0x1328: Return(); Pop(0)

0x1329: PushEmpty()
0x132a: PushEmpty(object)
0x132b: Stack[-1] = Stack[-2]
0x132c: Call2 0x12cf

0x132d: Pop(1)
0x132e: Return(); Pop(0)

0x132f: PushEmpty(bool, bool)
0x1330: PushEmpty(bool, object, bool)
0x1331: Stack[-2] = Stack[-8]
0x1332: Stack[-1] = !Stack[-6]; Pop(0);
0x1333: Call2 0x12d7

0x1334: Pop(2)
0x1335: Pop(1); Push((bool) Stack[-1] == 0)
0x1336: IF (Stack[-1] == 0) GOTO 0x1339; Pop(1)

0x1337: Stack[-7] = (bool) 0
0x1338: Return(); Pop(2)

0x1339: @ CanSee(Stack[-1], Stack[-6])
0x133a: Pop(0)
0x133b: PushEmpty(bool)
0x133c: Stack[-1] = (bool) 1
0x133d: Push(Stack[-2])
0x133e: IF (Stack[-1] == 0) GOTO 0x1347; Pop(1)

0x133f: PushEmpty(float, object)
0x1340: Stack[-1] = Stack[-9]
0x1341: Call2 0xd99

0x1342: Pop(1)
0x1343: Pop(0); Push(Stack[-6] * Stack[-6]);
0x1344: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1345: IF (Stack[-1] == 0) GOTO 0x1347; Pop(1)

0x1346: Stack[-1] = (bool) 0
0x1347: IF (Stack[-1] == 0) GOTO 0x134a; Pop(1)

0x1348: Stack[-7] = (bool) 1
0x1349: Return(); Pop(2)

0x134a: Stack[-7] = (bool) 0
0x134b: Return(); Pop(2)

0x134c: PushEmpty()
0x134d: Stack[-2] = (int) 2
0x134e: Return(); Pop(0)

0x134f: PushEmpty()
0x1350: PushEmpty(object)
0x1351: Stack[-1] = Stack[-2]
0x1352: Call2 0x1458

0x1353: Pop(1)
0x1354: Return(); Pop(0)

0x1355: Return(); Pop(0)

0x1356: PushEmpty(bool, bool)
0x1357: Push("Received steal")
0x1358: @ Trace(Stack[-1])
0x1359: Pop(1)
0x135a: @ CanSee(Stack[-1], Stack[-3])
0x135b: Pop(0)
0x135c: Push(Stack[-1])
0x135d: IF (Stack[-1] == 0) GOTO 0x1364; Pop(1)

0x135e: PushEmpty(int, object)
0x135f: Stack[-1] = Stack[-5]
0x1360: Call2 0x12c5

0x1361: Stack[-6] = Stack[-2]
0x1362: Pop(2)
0x1363: Return(); Pop(2)

0x1364: Stack[-4] = (int) 0
0x1365: Return(); Pop(2)

0x1366: PushEmpty()
0x1367: PushEmpty(object)
0x1368: Stack[-1] = Stack[-2]
0x1369: Call2 0x12cf

0x136a: Pop(1)
0x136b: Return(); Pop(0)

0x136c: PushEmpty()
0x136d: Stack[-3] = (int) 0
0x136e: Return(); Pop(0)

0x136f: PushEmpty()
0x1370: Return(); Pop(0)

0x1371: PushEmpty()
0x1372: Stack[-2] = (bool) 0
0x1373: Return(); Pop(0)

0x1374: PushEmpty()
0x1375: Return(); Pop(0)

0x1376: PushEmpty(bool, bool)
0x1377: @ CanSee(Stack[-1], Stack[-3])
0x1378: Pop(0)
0x1379: Stack[-4] = (bool) 1
0x137a: Push(Stack[-1])
0x137b: IF (Stack[-1] == 0) GOTO 0x1384; Pop(1)

0x137c: PushEmpty(float, object)
0x137d: Stack[-1] = Stack[-5]
0x137e: Call2 0xd99

0x137f: Pop(1)
0x1380: Push((int) 2250000)
0x1381: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1382: IF (Stack[-1] == 0) GOTO 0x1384; Pop(1)

0x1383: Stack[-4] = (bool) 0
0x1384: Return(); Pop(2)

0x1385: PushEmpty()
0x1386: PushEmpty(object)
0x1387: Stack[-1] = Stack[-2]
0x1388: Call2 0x12bd

0x1389: Pop(1)
0x138a: Return(); Pop(0)

0x138b: PushEmpty()
0x138c: Stack[-2] = (bool) 0
0x138d: Return(); Pop(0)

0x138e: PushEmpty()
0x138f: Return(); Pop(0)

0x1390: PushEmpty()
0x1391: Stack[-2] = (bool) 0
0x1392: Return(); Pop(0)

0x1393: PushEmpty()
0x1394: Return(); Pop(0)

0x1395: PushEmpty(string, string)
0x1396: Stack[-1] = "idle"
0x1397: Push(Stack[-3])
0x1398: IF (Stack[-1] == 0) GOTO 0x139a; Pop(1)

0x1399: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x139a: Stack[-4] = Stack[-1]
0x139b: Return(); Pop(2)

0x139c: PushEmpty(object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object, object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object)
0x139d: PushEmpty(object)
0x139e: Call2 0xf9b

0x139f: Stack[-27] = Stack[-1]
0x13a0: Pop(1)
0x13a1: @ CreateIntVector(Stack[-25])
0x13a2: Pop(0)
0x13a3: @ CreateIntVector(Stack[-24])
0x13a4: Pop(0)
0x13a5: @ CreateIntVector(Stack[-23])
0x13a6: Pop(0)
0x13a7: @@ GetSubContainerCount(Stack[-22])
0x13a8: Pop(0)
0x13a9: Stack[-21] = (int) 0
0x13aa: Pop(0); Push((bool) Stack[-21] < Stack[-22])
0x13ab: IF (Stack[-1] == 0) GOTO 0x13f2; Pop(1)

0x13ac: @@ GetItemCount(Stack[-20], Stack[-21])
0x13ad: Pop(0)
0x13ae: Stack[-19] = (int) 0
0x13af: Pop(0); Push((bool) Stack[-19] < Stack[-20])
0x13b0: IF (Stack[-1] == 0) GOTO 0x13ef; Pop(1)

0x13b1: @@ GetItem(Stack[-18], Stack[-19], Stack[-21])
0x13b2: Pop(0)
0x13b3: @@ GetItemID(Stack[-17])
0x13b4: Pop(0)
0x13b5: Push("HasDurability")
0x13b6: @ HasInvItemProperty(Stack[-17], Stack[-18], Stack[-1])
0x13b7: Pop(1)
0x13b8: Push(Stack[-16])
0x13b9: IF (Stack[-1] == 0) GOTO 0x13eb; Pop(1)

0x13ba: Push("durability")
0x13bb: @@ HasProperty(Stack[-17], Stack[-1])
0x13bc: Pop(1)
0x13bd: Push(Stack[-16])
0x13be: IF (Stack[-1] == 0) GOTO 0x13eb; Pop(1)

0x13bf: Push("durability")
0x13c0: @@ GetProperty(Stack[-16], Stack[-1])
0x13c1: Pop(1)
0x13c2: PushEmpty(bool)
0x13c3: Stack[-1] = (bool) 0
0x13c4: Push((int) 100)
0x13c5: Pop(1); Push((bool) Stack[-17] < Stack[-1])
0x13c6: IF (Stack[-1] == 0) GOTO 0x13cd; Pop(1)

0x13c7: PushEmpty(bool, object)
0x13c8: Stack[-1] = Stack[-21]
0x13c9: Call2 0x142f

0x13ca: Pop(1)
0x13cb: IF (Stack[-1] == 0) GOTO 0x13cd; Pop(1)

0x13cc: Stack[-1] = (bool) 1
0x13cd: IF (Stack[-1] == 0) GOTO 0x13eb; Pop(1)

0x13ce: @@ add(Stack[-18])
0x13cf: Pop(0)
0x13d0: @@ add(Stack[-21])
0x13d1: Pop(0)
0x13d2: @@ add(Stack[-19])
0x13d3: Pop(0)
0x13d4: PushEmpty(int, object, int)
0x13d5: Stack[-2] = Stack[-21]
0x13d6: Stack[-1] = (int) 0
0x13d7: Call2 0x10be

0x13d8: Stack[-17] = Stack[-3]
0x13d9: Pop(3)
0x13da: Push((float)1.0)
0x13db: Push((float)2.0)
0x13dc: Pop(1); Push(Stack[-1] * Stack[-17]);
0x13dd: Push((float)100.0)
0x13de: Pop(2); Push(Stack[-2] / Stack[-1]);
0x13df: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13e0: Pop(1); Push(Stack[-15] * Stack[-1]);
0x13e1: Push((int) 100)
0x13e2: Pop(1); Push(Stack[-1] - Stack[-17]);
0x13e3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x13e4: Push((int) 300)
0x13e5: Stack[-15] = Stack[-2] / Stack[-1]; Pop(2);
0x13e6: Pop(0); Push((bool) Stack[-13] == 0)
0x13e7: IF (Stack[-1] == 0) GOTO 0x13e9; Pop(1)

0x13e8: Stack[-13] = (int) 1
0x13e9: @@ add(Stack[-13])
0x13ea: Pop(0)
0x13eb: Stack[-18] = 0
0x13ec: Push((int) 1)
0x13ed: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x13ee: GOTO 0x13af

0x13ef: Push((int) 1)
0x13f0: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x13f1: GOTO 0x13aa

0x13f2: @ CreateIntVector(Stack[-12])
0x13f3: Pop(0)
0x13f4: Push("repair.xml")
0x13f5: @ ChooseItem(Stack[-27], Stack[-13], Stack[-24], Stack[-1])
0x13f6: Pop(1)
0x13f7: @@ size(Stack[-11])
0x13f8: Pop(0)
0x13f9: Pop(0); Push((bool) Stack[-11] == 0)
0x13fa: IF (Stack[-1] == 0) GOTO 0x13fc; Pop(1)

0x13fb: Return(); Pop(52)

0x13fc: Stack[-10] = (int) 0
0x13fd: Stack[-9] = (int) 0
0x13fe: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0x13ff: IF (Stack[-1] == 0) GOTO 0x1408; Pop(1)

0x1400: @@ get(Stack[-8], Stack[-9])
0x1401: Pop(0)
0x1402: @@ get(Stack[-7], Stack[-8])
0x1403: Pop(0)
0x1404: Stack[-10] = Stack[-10] + Stack[-7]; Pop(0);
0x1405: Push((int) 1)
0x1406: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x1407: GOTO 0x13fe

0x1408: Push("money")
0x1409: @@ GetProperty(Stack[-1], Stack[-7])
0x140a: Pop(1)
0x140b: Stack[-6] = Stack[-6] - Stack[-10]; Pop(0);
0x140c: Push((int) 0)
0x140d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x140e: IF (Stack[-1] == 0) GOTO 0x1410; Pop(1)

0x140f: Return(); Pop(52)

0x1410: Push("money")
0x1411: @@ SetProperty(Stack[-1], Stack[-7])
0x1412: Pop(1)
0x1413: Stack[-5] = (int) 0
0x1414: Pop(0); Push((bool) Stack[-5] < Stack[-11])
0x1415: IF (Stack[-1] == 0) GOTO 0x1429; Pop(1)

0x1416: @@ get(Stack[-4], Stack[-5])
0x1417: Pop(0)
0x1418: @@ get(Stack[-3], Stack[-4])
0x1419: Pop(0)
0x141a: @@ get(Stack[-2], Stack[-4])
0x141b: Pop(0)
0x141c: @@ GetItem(Stack[-1], Stack[-2], Stack[-3])
0x141d: Pop(0)
0x141e: Push("durability")
0x141f: Push((int) 100)
0x1420: @@ SetProperty(Stack[-2], Stack[-1])
0x1421: Pop(2)
0x1422: Push((int) 1)
0x1423: @@ SetItem(Stack[-2], Stack[-1], Stack[-3], Stack[-4])
0x1424: Pop(1)
0x1425: Stack[-1] = 0
0x1426: Push((int) 1)
0x1427: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1428: GOTO 0x1414

0x1429: Return(); Pop(52)

0x142a: Stack[-12] = 0
0x142b: Stack[-23] = 0
0x142c: Stack[-24] = 0
0x142d: Stack[-25] = 0
0x142e: Stack[-26] = 0
0x142f: PushEmpty(int, bool, int, bool)
0x1430: @@ GetItemID(Stack[-2])
0x1431: Pop(0)
0x1432: Push("Weapon")
0x1433: @ HasInvItemProperty(Stack[-2], Stack[-3], Stack[-1])
0x1434: Pop(1)
0x1435: Stack[-6] = Stack[-1]
0x1436: Return(); Pop(4)

0x1437: PushEmpty()
0x1438: PushEmpty(int, object)
0x1439: Stack[-1] = Stack[-3]
0x143a: Push(-2, 1); TaskCall(0)
0x143b: Call2 0x0

0x143c: Pop(-2, 1); TaskReturn
0x143d: Pop(1)
0x143e: Push((int) 100)
0x143f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1440: IF (Stack[-1] == 0) GOTO 0x1445; Pop(1)

0x1441: PushEmpty(object)
0x1442: Stack[-1] = Stack[-2]
0x1443: Call2 0x139c

0x1444: Pop(1)
0x1445: Return(); Pop(0)

0x1446: Stack[-1] = (int) 515568
0x1447: Return(); Pop(0)

0x1448: Stack[-1] = (int) 503353
0x1449: Return(); Pop(0)

0x144a: Stack[-1] = "ui/NPC_Citizen1.png"
0x144b: Return(); Pop(0)

0x144c: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x144d: Return(); Pop(0)

0x144e: Stack[-1] = (bool) 0
0x144f: Return(); Pop(0)

0x1450: Push(GlobalVars[0])
0x1451: Stack[-1] = (bool) 0
0x1452: GlobalVars[0] = Stack[-1]; Pop(1)
0x1453: PushEmpty(bool)
0x1454: Stack[-1] = (bool) 1
0x1455: Call2 0x1153

0x1456: Pop(1)
0x1457: Return(); Pop(0)

0x1458: PushEmpty(bool, bool)
0x1459: Push(GlobalVars[0])
0x145a: IF (Stack[-1] == 0) GOTO 0x1465; Pop(1)

0x145b: @ IsOverrideActive(Stack[-1])
0x145c: Pop(0)
0x145d: Pop(0); Push((bool) Stack[-1] == 0)
0x145e: IF (Stack[-1] == 0) GOTO 0x1463; Pop(1)

0x145f: PushEmpty(object)
0x1460: Stack[-1] = Stack[-4]
0x1461: Call2 0x10fe

0x1462: Pop(1)
0x1463: Return(); Pop(2)

0x1464: GOTO 0x1469

0x1465: PushEmpty(object)
0x1466: Stack[-1] = Stack[-4]
0x1467: Call2 0x1437

0x1468: Pop(1)
0x1469: Return(); Pop(2)

0x146a: PushEmpty(int, bool, int, int, bool, int)
0x146b: Stack[-3] = (int) 0
0x146c: Push("all")
0x146d: PushEmpty(string, int)
0x146e: Stack[-1] = Stack[-6]
0x146f: Call2 0x1395

0x1470: Pop(1)
0x1471: @ HasAnimation(Stack[-4], Stack[-2], Stack[-1])
0x1472: Pop(2)
0x1473: Pop(0); Push((bool) Stack[-2] == 0)
0x1474: IF (Stack[-1] == 0) GOTO 0x1476; Pop(1)

0x1475: GOTO 0x1479

0x1476: Push((int) 1)
0x1477: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x1478: GOTO 0x146c

0x1479: @ irand(Stack[-1], Stack[-3])
0x147a: Pop(0)
0x147b: Push("all")
0x147c: PushEmpty(string, int)
0x147d: Stack[-1] = Stack[-4]
0x147e: Call2 0x1395

0x147f: Pop(1)
0x1480: @ PlayAnimation(Stack[-2], Stack[-1])
0x1481: Pop(2)
0x1482: @ WaitForAnimEnd()
0x1483: Pop(0)
0x1484: Return(); Pop(6)

0x1485: @ StopAnimation()
0x1486: Pop(0)
0x1487: Return(); Pop(0)

0x1488: Stack[-1] = (bool) 1
0x1489: Return(); Pop(0)

0x148a: PushEmpty()
0x148b: PushEmpty(bool, object, object, float, bool)
0x148c: Stack[-4] = Stack[-8]
0x148d: Stack[-3] = Stack[-7]
0x148e: Stack[-2] = (float) 500.0
0x148f: Stack[-1] = Stack[-6]
0x1490: Call2 0x132f

0x1491: Stack[-9] = Stack[-5]
0x1492: Pop(5)
0x1493: Return(); Pop(0)

0x1494: PushEmpty()
0x1495: PushEmpty(bool, object)
0x1496: Stack[-1] = Stack[-3]
0x1497: Call2 0xda1

0x1498: Pop(1)
0x1499: IF (Stack[-1] == 0) GOTO 0x14a5; Pop(1)

0x149a: PushEmpty(object)
0x149b: Call2 0xf79

0x149c: Pop(0)
0x149d: Push((float)-0.07)
0x149e: Push((bool) 1)
0x149f: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14a0: Pop(3)
0x14a1: PushEmpty(bool)
0x14a2: Stack[-1] = (bool) 1
0x14a3: Call2 0x1153

0x14a4: Pop(1)
0x14a5: PushEmpty()
0x14a6: Call2 0x113b

0x14a7: Pop(0)
0x14a8: Push(GlobalVars[0])
0x14a9: Stack[-1] = (bool) 1
0x14aa: GlobalVars[0] = Stack[-1]; Pop(1)
0x14ab: Push((int) 50)
0x14ac: Push((int) 40)
0x14ad: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x14ae: Pop(2)
0x14af: Return(); Pop(0)

