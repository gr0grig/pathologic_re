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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	reputation

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
	AddItem (4 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x833
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1be Vars = (int, int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x7a6 Vars = (object)
		EVENT_6 Op = 0x7b4 Vars = ()
		EVENT_22 Op = 0x82d Vars = (object, int, float, float)
		EVENT_16 Op = 0x82f Vars = (object, string)
		EVENT_41 Op = 0x831 Vars = (object)
	GTASK_4 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x84b Vars = (object)
		EVENT_17 Op = 0x85f Vars = (object)
		EVENT_30 Op = 0x877 Vars = (object, object, bool)
		EVENT_40 Op = 0x893 Vars = (object)
		EVENT_42 Op = 0x8a7 Vars = (object, string)
		EVENT_26 Op = 0x8cc Vars = (string)
		EVENT_1 Op = 0x8da Vars = (object)
		EVENT_3 Op = 0x8ed Vars = (object)
		EVENT_7 Op = 0x8f3 Vars = (int)
		EVENT_6 Op = 0x8ff Vars = ()
		EVENT_41 Op = 0x916 Vars = (object)
		EVENT_10 Op = 0x987 Vars = (object)
		EVENT_28 Op = 0x98b Vars = ()
	GTASK_5  Params = 0
		EVENT_0 Op = 0x9a4 Vars = (object)
		EVENT_17 Op = 0x9b8 Vars = (object)
		EVENT_30 Op = 0x9d0 Vars = (object, object, bool)
		EVENT_40 Op = 0x9ec Vars = (object)
		EVENT_42 Op = 0xa00 Vars = (object, string)
		EVENT_26 Op = 0xa25 Vars = (string)
		EVENT_6 Op = 0xa33 Vars = ()
		EVENT_1 Op = 0xa3a Vars = (object)
	GTASK_6 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_7 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0xd42 Vars = ()
		EVENT_7 Op = 0xd7a Vars = (int)
		EVENT_1 Op = 0xd95 Vars = (object)
		EVENT_2 Op = 0xda4 Vars = (object)
		EVENT_10 Op = 0xe2a Vars = (object)
		EVENT_41 Op = 0xe35 Vars = (object)

Events:
EVENT_16 Op = 0x1292 Vars = (object, string)
EVENT_41 Op = 0x129f Vars = (object)
EVENT_22 Op = 0x12a5 Vars = (object, int, float, float)
EVENT_43 Op = 0x12ad Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x143f

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x1023

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
0x1c: Call2 0x143f

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
0x2d: Call2 0xf8f

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x1439

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x1437

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x143b

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x143d

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x116a

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
0x69: Call2 0xfd4

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
0x77: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x78: PushEmpty(bool)
0x79: Stack[-1] = (bool) 0
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x10e6

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x7f: PushEmpty(bool, object)
0x80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81: Call2 0x1106

0x82: Pop(1)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Stack[-1] = (bool) 1
0x85: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x86: PushEmpty(string)
0x87: Stack[-1] = "Neutral"
0x88: Call2 0x1a8

0x89: Pop(1)
0x8a: Push((int) 543329)
0x8b: @@ SetMessage(Stack[-1])
0x8c: Pop(1)
0x8d: @@ ClearReplies()
0x8e: Pop(0)
0x8f: Push((int) 543330)
0x90: Push((int) 45790)
0x91: Push((int) 45787)
0x92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93: Pop(3)
0x94: Push((int) 543332)
0x95: Push((int) 45790)
0x96: Push((int) 45789)
0x97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98: Pop(3)
0x99: Push((int) 543331)
0x9a: Push((int) -1)
0x9b: Push((int) 45788)
0x9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d: Pop(3)
0x9e: GOTO 0x18a

0x9f: PushEmpty(bool)
0xa0: Stack[-1] = (bool) 0
0xa1: PushEmpty(bool, object)
0xa2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa3: Call2 0x10e6

0xa4: Pop(1)
0xa5: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa6: PushEmpty(bool, object)
0xa7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Call2 0x1106

0xa9: Pop(1)
0xaa: Pop(1); Push((bool) Stack[-1] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Stack[-1] = (bool) 1
0xad: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xae: PushEmpty(string)
0xaf: Stack[-1] = "Neutral"
0xb0: Call2 0x1a8

0xb1: Pop(1)
0xb2: Push((int) 543328)
0xb3: @@ SetMessage(Stack[-1])
0xb4: Pop(1)
0xb5: @@ ClearReplies()
0xb6: Pop(0)
0xb7: Push((int) 543336)
0xb8: Push((int) -1)
0xb9: Push((int) 45794)
0xba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb: Pop(3)
0xbc: GOTO 0x18a

0xbd: PushEmpty(string)
0xbe: Stack[-1] = "Neutral"
0xbf: Call2 0x1a8

0xc0: Pop(1)
0xc1: Push((int) 537969)
0xc2: @@ SetMessage(Stack[-1])
0xc3: Pop(1)
0xc4: @@ ClearReplies()
0xc5: Pop(0)
0xc6: PushEmpty(bool)
0xc7: Stack[-1] = (bool) 0
0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0x10f2

0xcb: Pop(1)
0xcc: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0x10da

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Stack[-1] = (bool) 1
0xd3: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd4: Push((int) 537970)
0xd5: Push((int) 39833)
0xd6: Push((int) 39832)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: PushEmpty(bool)
0xda: Stack[-1] = (bool) 0
0xdb: PushEmpty(bool, object)
0xdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Call2 0x10f2

0xde: Pop(1)
0xdf: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x10da

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: Stack[-1] = (bool) 1
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: Push((int) 537995)
0xe8: Push((int) 39861)
0xe9: Push((int) 39860)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: PushEmpty(bool)
0xed: Stack[-1] = (bool) 0
0xee: PushEmpty(bool, object)
0xef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Call2 0x10f2

0xf1: Pop(1)
0xf2: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0x10da

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf8: Stack[-1] = (bool) 1
0xf9: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfa: Push((int) 538003)
0xfb: Push((int) 39869)
0xfc: Push((int) 39868)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: PushEmpty(bool)
0x100: Stack[-1] = (bool) 0
0x101: PushEmpty(bool, object)
0x102: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x103: Call2 0x10f2

0x104: Pop(1)
0x105: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x106: PushEmpty(bool, object)
0x107: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x108: Call2 0x10da

0x109: Pop(1)
0x10a: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10b: Stack[-1] = (bool) 1
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: Push((int) 538012)
0x10e: Push((int) 39878)
0x10f: Push((int) 39877)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: PushEmpty(bool)
0x113: Stack[-1] = (bool) 0
0x114: PushEmpty(bool)
0x115: Stack[-1] = (bool) 0
0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call2 0x10f2

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Call2 0x1124

0x11e: Pop(1)
0x11f: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x120: Stack[-1] = (bool) 1
0x121: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x122: PushEmpty(bool, object)
0x123: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x124: Call2 0x10da

0x125: Pop(1)
0x126: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x127: Stack[-1] = (bool) 1
0x128: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x129: Push((int) 538017)
0x12a: Push((int) 39883)
0x12b: Push((int) 39882)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: PushEmpty(bool)
0x12f: Stack[-1] = (bool) 0
0x130: PushEmpty(bool)
0x131: Stack[-1] = (bool) 0
0x132: PushEmpty(bool, object)
0x133: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x134: Call2 0x10fc

0x135: Pop(1)
0x136: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x137: PushEmpty(bool, object)
0x138: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x139: Call2 0x111a

0x13a: Pop(1)
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: Stack[-1] = (bool) 1
0x13d: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x140: Call2 0x10da

0x141: Pop(1)
0x142: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x143: Stack[-1] = (bool) 1
0x144: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x145: Push((int) 538043)
0x146: Push((int) 39911)
0x147: Push((int) 39910)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: PushEmpty(bool)
0x14b: Stack[-1] = (bool) 0
0x14c: PushEmpty(bool)
0x14d: Stack[-1] = (bool) 0
0x14e: PushEmpty(bool, object)
0x14f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x150: Call2 0x1110

0x151: Pop(1)
0x152: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x155: Call2 0x111a

0x156: Pop(1)
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: Stack[-1] = (bool) 1
0x159: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Call2 0x10da

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Stack[-1] = (bool) 1
0x160: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x161: Push((int) 538083)
0x162: Push((int) 39952)
0x163: Push((int) 39951)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: PushEmpty(bool)
0x167: Stack[-1] = (bool) 0
0x168: PushEmpty(bool)
0x169: Stack[-1] = (bool) 0
0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0x1110

0x16d: Pop(1)
0x16e: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x16f: PushEmpty(bool, object)
0x170: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x171: Call2 0x1124

0x172: Pop(1)
0x173: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x174: Stack[-1] = (bool) 1
0x175: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x176: PushEmpty(bool, object)
0x177: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x178: Call2 0x10da

0x179: Pop(1)
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: Stack[-1] = (bool) 1
0x17c: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17d: Push((int) 538110)
0x17e: Push((int) 39980)
0x17f: Push((int) 39979)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Push((int) 538126)
0x183: Push((int) -1)
0x184: Push((int) 39997)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: GOTO 0x18a

0x188: Return(); Pop(0)

0x189: GOTO 0x76

0x18a: PushEmpty(bool)
0x18b: Call2 0x143f

0x18c: Pop(0)
0x18d: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x18e: @ lshWaitForAnimEnd()
0x18f: Pop(0)
0x190: Push( Stack[3 + Tasks[-1].StackPointer] )
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: GOTO 0x198

0x193: PushEmpty(string)
0x194: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x195: Call2 0x1023

0x196: Pop(1)
0x197: GOTO 0x18e

0x198: GOTO 0x1a7

0x199: Push("all")
0x19a: Push("idle")
0x19b: @ PlayAnimation(Stack[-2], Stack[-1])
0x19c: Pop(2)
0x19d: @ WaitForAnimEnd()
0x19e: Pop(0)
0x19f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: GOTO 0x1a7

0x1a2: Push("all")
0x1a3: Push("idle")
0x1a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a5: Pop(2)
0x1a6: GOTO 0x19d

0x1a7: Return(); Pop(0)

0x1a8: PushEmpty()
0x1a9: PushEmpty(bool)
0x1aa: Call2 0x143f

0x1ab: Pop(0)
0x1ac: Pop(1); Push((bool) Stack[-1] == 0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Return(); Pop(0)

0x1af: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Return(); Pop(0)

0x1b2: PushEmpty(string, bool)
0x1b3: Stack[-2] = Stack[-3]
0x1b4: Push("")
0x1b5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b7: Stack[-1] = (bool) 0
0x1b8: GOTO 0x1ba

0x1b9: Stack[-1] = (bool) 1
0x1ba: Call2 0x1033

0x1bb: Pop(2)
0x1bc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1bd: Return(); Pop(0)

0x1be: PushEmpty()
0x1bf: Push((int) 1)
0x1c0: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x1c1: PushEmpty()
0x1c2: Call2 0x104d

0x1c3: Pop(0)
0x1c4: Push((int) 45786)
0x1c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x1c7: PushEmpty(bool)
0x1c8: Stack[-1] = (bool) 0
0x1c9: PushEmpty(bool, object)
0x1ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cb: Call2 0x10e6

0x1cc: Pop(1)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1ce: PushEmpty(bool, object)
0x1cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d0: Call2 0x1106

0x1d1: Pop(1)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: Stack[-1] = (bool) 1
0x1d4: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1d5: PushEmpty(string)
0x1d6: Stack[-1] = "Neutral"
0x1d7: Call2 0x1a8

0x1d8: Pop(1)
0x1d9: Push((int) 543329)
0x1da: @@ SetMessage(Stack[-1])
0x1db: Pop(1)
0x1dc: @@ ClearReplies()
0x1dd: Pop(0)
0x1de: Push((int) 543330)
0x1df: Push((int) 45790)
0x1e0: Push((int) 45787)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Push((int) 543332)
0x1e4: Push((int) 45790)
0x1e5: Push((int) 45789)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Push((int) 543331)
0x1e9: Push((int) -1)
0x1ea: Push((int) 45788)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: PushEmpty(bool)
0x1ef: Stack[-1] = (bool) 0
0x1f0: PushEmpty(bool, object)
0x1f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f2: Call2 0x10e6

0x1f3: Pop(1)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f5: PushEmpty(bool, object)
0x1f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f7: Call2 0x1106

0x1f8: Pop(1)
0x1f9: Pop(1); Push((bool) Stack[-1] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Stack[-1] = (bool) 1
0x1fc: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Neutral"
0x1ff: Call2 0x1a8

0x200: Pop(1)
0x201: Push((int) 543328)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: Push((int) 543336)
0x207: Push((int) -1)
0x208: Push((int) 45794)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: PushEmpty(string)
0x20d: Stack[-1] = "Neutral"
0x20e: Call2 0x1a8

0x20f: Pop(1)
0x210: Push((int) 537969)
0x211: @@ SetMessage(Stack[-1])
0x212: Pop(1)
0x213: @@ ClearReplies()
0x214: Pop(0)
0x215: PushEmpty(bool)
0x216: Stack[-1] = (bool) 0
0x217: PushEmpty(bool, object)
0x218: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x219: Call2 0x10f2

0x21a: Pop(1)
0x21b: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21c: PushEmpty(bool, object)
0x21d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21e: Call2 0x10da

0x21f: Pop(1)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: Stack[-1] = (bool) 1
0x222: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x223: Push((int) 537970)
0x224: Push((int) 39833)
0x225: Push((int) 39832)
0x226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(3)
0x228: PushEmpty(bool)
0x229: Stack[-1] = (bool) 0
0x22a: PushEmpty(bool, object)
0x22b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22c: Call2 0x10f2

0x22d: Pop(1)
0x22e: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22f: PushEmpty(bool, object)
0x230: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x231: Call2 0x10da

0x232: Pop(1)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: Stack[-1] = (bool) 1
0x235: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x236: Push((int) 537995)
0x237: Push((int) 39861)
0x238: Push((int) 39860)
0x239: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23a: Pop(3)
0x23b: PushEmpty(bool)
0x23c: Stack[-1] = (bool) 0
0x23d: PushEmpty(bool, object)
0x23e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23f: Call2 0x10f2

0x240: Pop(1)
0x241: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x242: PushEmpty(bool, object)
0x243: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x244: Call2 0x10da

0x245: Pop(1)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: Stack[-1] = (bool) 1
0x248: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x249: Push((int) 538003)
0x24a: Push((int) 39869)
0x24b: Push((int) 39868)
0x24c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24d: Pop(3)
0x24e: PushEmpty(bool)
0x24f: Stack[-1] = (bool) 0
0x250: PushEmpty(bool, object)
0x251: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x252: Call2 0x10f2

0x253: Pop(1)
0x254: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x255: PushEmpty(bool, object)
0x256: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x257: Call2 0x10da

0x258: Pop(1)
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: Stack[-1] = (bool) 1
0x25b: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25c: Push((int) 538012)
0x25d: Push((int) 39878)
0x25e: Push((int) 39877)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: PushEmpty(bool)
0x262: Stack[-1] = (bool) 0
0x263: PushEmpty(bool)
0x264: Stack[-1] = (bool) 0
0x265: PushEmpty(bool, object)
0x266: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x267: Call2 0x10f2

0x268: Pop(1)
0x269: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26a: PushEmpty(bool, object)
0x26b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26c: Call2 0x1124

0x26d: Pop(1)
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: Stack[-1] = (bool) 1
0x270: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x271: PushEmpty(bool, object)
0x272: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x273: Call2 0x10da

0x274: Pop(1)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Stack[-1] = (bool) 1
0x277: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x278: Push((int) 538017)
0x279: Push((int) 39883)
0x27a: Push((int) 39882)
0x27b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27c: Pop(3)
0x27d: PushEmpty(bool)
0x27e: Stack[-1] = (bool) 0
0x27f: PushEmpty(bool)
0x280: Stack[-1] = (bool) 0
0x281: PushEmpty(bool, object)
0x282: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x283: Call2 0x10fc

0x284: Pop(1)
0x285: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x288: Call2 0x111a

0x289: Pop(1)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Stack[-1] = (bool) 1
0x28c: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28f: Call2 0x10da

0x290: Pop(1)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: Stack[-1] = (bool) 1
0x293: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x294: Push((int) 538043)
0x295: Push((int) 39911)
0x296: Push((int) 39910)
0x297: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x298: Pop(3)
0x299: PushEmpty(bool)
0x29a: Stack[-1] = (bool) 0
0x29b: PushEmpty(bool)
0x29c: Stack[-1] = (bool) 0
0x29d: PushEmpty(bool, object)
0x29e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29f: Call2 0x1110

0x2a0: Pop(1)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a4: Call2 0x111a

0x2a5: Pop(1)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Stack[-1] = (bool) 1
0x2a8: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2a9: PushEmpty(bool, object)
0x2aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ab: Call2 0x10da

0x2ac: Pop(1)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: Stack[-1] = (bool) 1
0x2af: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b0: Push((int) 538083)
0x2b1: Push((int) 39952)
0x2b2: Push((int) 39951)
0x2b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b4: Pop(3)
0x2b5: PushEmpty(bool)
0x2b6: Stack[-1] = (bool) 0
0x2b7: PushEmpty(bool)
0x2b8: Stack[-1] = (bool) 0
0x2b9: PushEmpty(bool, object)
0x2ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2bb: Call2 0x1110

0x2bc: Pop(1)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2be: PushEmpty(bool, object)
0x2bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c0: Call2 0x1124

0x2c1: Pop(1)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: Stack[-1] = (bool) 1
0x2c4: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c5: PushEmpty(bool, object)
0x2c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c7: Call2 0x10da

0x2c8: Pop(1)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2ca: Stack[-1] = (bool) 1
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cc: Push((int) 538110)
0x2cd: Push((int) 39980)
0x2ce: Push((int) 39979)
0x2cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d0: Pop(3)
0x2d1: Push((int) 538126)
0x2d2: Push((int) -1)
0x2d3: Push((int) 39997)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: Return(); Pop(0)

0x2d7: Push((int) 39980)
0x2d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2da: PushEmpty(string)
0x2db: Stack[-1] = "Neutral"
0x2dc: Call2 0x1a8

0x2dd: Pop(1)
0x2de: Push((int) 538111)
0x2df: @@ SetMessage(Stack[-1])
0x2e0: Pop(1)
0x2e1: @@ ClearReplies()
0x2e2: Pop(0)
0x2e3: Push((int) 538112)
0x2e4: Push((int) 39982)
0x2e5: Push((int) 39981)
0x2e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(3)
0x2e8: Push((int) 538124)
0x2e9: Push((int) 39982)
0x2ea: Push((int) 39994)
0x2eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(3)
0x2ed: Push((int) 538125)
0x2ee: Push((int) -1)
0x2ef: Push((int) 39996)
0x2f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f1: Pop(3)
0x2f2: Return(); Pop(0)

0x2f3: Push((int) 39982)
0x2f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2f6: PushEmpty(string)
0x2f7: Stack[-1] = "Neutral"
0x2f8: Call2 0x1a8

0x2f9: Pop(1)
0x2fa: Push((int) 538113)
0x2fb: @@ SetMessage(Stack[-1])
0x2fc: Pop(1)
0x2fd: @@ ClearReplies()
0x2fe: Pop(0)
0x2ff: Push((int) 538114)
0x300: Push((int) 39984)
0x301: Push((int) 39983)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: Push((int) 538118)
0x305: Push((int) 39989)
0x306: Push((int) 39988)
0x307: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x308: Pop(3)
0x309: Return(); Pop(0)

0x30a: Push((int) 39989)
0x30b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x30d: PushEmpty(string)
0x30e: Stack[-1] = "Neutral"
0x30f: Call2 0x1a8

0x310: Pop(1)
0x311: Push((int) 538119)
0x312: @@ SetMessage(Stack[-1])
0x313: Pop(1)
0x314: @@ ClearReplies()
0x315: Pop(0)
0x316: Push((int) 538120)
0x317: Push((int) 39991)
0x318: Push((int) 39990)
0x319: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31a: Pop(3)
0x31b: Return(); Pop(0)

0x31c: Push((int) 39991)
0x31d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x31f: PushEmpty(string)
0x320: Stack[-1] = "Neutral"
0x321: Call2 0x1a8

0x322: Pop(1)
0x323: Push((int) 538121)
0x324: @@ SetMessage(Stack[-1])
0x325: Pop(1)
0x326: @@ ClearReplies()
0x327: Pop(0)
0x328: Push((int) 538122)
0x329: Push((int) -1)
0x32a: Push((int) 39992)
0x32b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32c: Pop(3)
0x32d: Push((int) 538123)
0x32e: Push((int) -1)
0x32f: Push((int) 39993)
0x330: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x331: Pop(3)
0x332: Return(); Pop(0)

0x333: Push((int) 39984)
0x334: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x336: PushEmpty(string)
0x337: Stack[-1] = "Neutral"
0x338: Call2 0x1a8

0x339: Pop(1)
0x33a: Push((int) 538115)
0x33b: @@ SetMessage(Stack[-1])
0x33c: Pop(1)
0x33d: @@ ClearReplies()
0x33e: Pop(0)
0x33f: Push((int) 538116)
0x340: Push((int) -1)
0x341: Push((int) 39985)
0x342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(3)
0x344: Push((int) 538117)
0x345: Push((int) 39991)
0x346: Push((int) 39986)
0x347: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x348: Pop(3)
0x349: Return(); Pop(0)

0x34a: Push((int) 39952)
0x34b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x34d: PushEmpty(string)
0x34e: Stack[-1] = "Neutral"
0x34f: Call2 0x1a8

0x350: Pop(1)
0x351: Push((int) 538084)
0x352: @@ SetMessage(Stack[-1])
0x353: Pop(1)
0x354: @@ ClearReplies()
0x355: Pop(0)
0x356: Push((int) 538085)
0x357: Push((int) 39954)
0x358: Push((int) 39953)
0x359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35a: Pop(3)
0x35b: Push((int) 538094)
0x35c: Push((int) 39963)
0x35d: Push((int) 39962)
0x35e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35f: Pop(3)
0x360: Push((int) 538103)
0x361: Push((int) 39972)
0x362: Push((int) 39971)
0x363: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x364: Pop(3)
0x365: Push((int) 538109)
0x366: Push((int) -1)
0x367: Push((int) 39978)
0x368: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: Return(); Pop(0)

0x36b: Push((int) 39972)
0x36c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x36e: PushEmpty(string)
0x36f: Stack[-1] = "Neutral"
0x370: Call2 0x1a8

0x371: Pop(1)
0x372: Push((int) 538104)
0x373: @@ SetMessage(Stack[-1])
0x374: Pop(1)
0x375: @@ ClearReplies()
0x376: Pop(0)
0x377: Push((int) 538105)
0x378: Push((int) 39974)
0x379: Push((int) 39973)
0x37a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(3)
0x37c: Push((int) 538108)
0x37d: Push((int) -1)
0x37e: Push((int) 39977)
0x37f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: Return(); Pop(0)

0x382: Push((int) 39974)
0x383: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral"
0x387: Call2 0x1a8

0x388: Pop(1)
0x389: Push((int) 538106)
0x38a: @@ SetMessage(Stack[-1])
0x38b: Pop(1)
0x38c: @@ ClearReplies()
0x38d: Pop(0)
0x38e: Push((int) 538107)
0x38f: Push((int) 39963)
0x390: Push((int) 39975)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: Return(); Pop(0)

0x394: Push((int) 39963)
0x395: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x396: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x397: PushEmpty(string)
0x398: Stack[-1] = "Neutral"
0x399: Call2 0x1a8

0x39a: Pop(1)
0x39b: Push((int) 538095)
0x39c: @@ SetMessage(Stack[-1])
0x39d: Pop(1)
0x39e: @@ ClearReplies()
0x39f: Pop(0)
0x3a0: Push((int) 538096)
0x3a1: Push((int) 39965)
0x3a2: Push((int) 39964)
0x3a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a4: Pop(3)
0x3a5: Push((int) 538100)
0x3a6: Push((int) 39969)
0x3a7: Push((int) 39968)
0x3a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a9: Pop(3)
0x3aa: Return(); Pop(0)

0x3ab: Push((int) 39969)
0x3ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3ae: PushEmpty(string)
0x3af: Stack[-1] = "Neutral"
0x3b0: Call2 0x1a8

0x3b1: Pop(1)
0x3b2: Push((int) 538101)
0x3b3: @@ SetMessage(Stack[-1])
0x3b4: Pop(1)
0x3b5: @@ ClearReplies()
0x3b6: Pop(0)
0x3b7: Push((int) 538102)
0x3b8: Push((int) -1)
0x3b9: Push((int) 39970)
0x3ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bb: Pop(3)
0x3bc: Return(); Pop(0)

0x3bd: Push((int) 39965)
0x3be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = "Neutral"
0x3c2: Call2 0x1a8

0x3c3: Pop(1)
0x3c4: Push((int) 538097)
0x3c5: @@ SetMessage(Stack[-1])
0x3c6: Pop(1)
0x3c7: @@ ClearReplies()
0x3c8: Pop(0)
0x3c9: Push((int) 538098)
0x3ca: Push((int) -1)
0x3cb: Push((int) 39966)
0x3cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cd: Pop(3)
0x3ce: Push((int) 538099)
0x3cf: Push((int) -1)
0x3d0: Push((int) 39967)
0x3d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(3)
0x3d3: Return(); Pop(0)

0x3d4: Push((int) 39954)
0x3d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3d7: PushEmpty(string)
0x3d8: Stack[-1] = "Neutral"
0x3d9: Call2 0x1a8

0x3da: Pop(1)
0x3db: Push((int) 538086)
0x3dc: @@ SetMessage(Stack[-1])
0x3dd: Pop(1)
0x3de: @@ ClearReplies()
0x3df: Pop(0)
0x3e0: Push((int) 538087)
0x3e1: Push((int) 39956)
0x3e2: Push((int) 39955)
0x3e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e4: Pop(3)
0x3e5: Push((int) 538093)
0x3e6: Push((int) -1)
0x3e7: Push((int) 39961)
0x3e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e9: Pop(3)
0x3ea: Return(); Pop(0)

0x3eb: Push((int) 39956)
0x3ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3ee: PushEmpty(string)
0x3ef: Stack[-1] = "Neutral"
0x3f0: Call2 0x1a8

0x3f1: Pop(1)
0x3f2: Push((int) 538088)
0x3f3: @@ SetMessage(Stack[-1])
0x3f4: Pop(1)
0x3f5: @@ ClearReplies()
0x3f6: Pop(0)
0x3f7: Push((int) 538089)
0x3f8: Push((int) 39958)
0x3f9: Push((int) 39957)
0x3fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fb: Pop(3)
0x3fc: Return(); Pop(0)

0x3fd: Push((int) 39958)
0x3fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x400: PushEmpty(string)
0x401: Stack[-1] = "Neutral"
0x402: Call2 0x1a8

0x403: Pop(1)
0x404: Push((int) 538090)
0x405: @@ SetMessage(Stack[-1])
0x406: Pop(1)
0x407: @@ ClearReplies()
0x408: Pop(0)
0x409: Push((int) 538091)
0x40a: Push((int) -1)
0x40b: Push((int) 39959)
0x40c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40d: Pop(3)
0x40e: Push((int) 538092)
0x40f: Push((int) -1)
0x410: Push((int) 39960)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: Return(); Pop(0)

0x414: Push((int) 39911)
0x415: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x417: PushEmpty(string)
0x418: Stack[-1] = "Neutral"
0x419: Call2 0x1a8

0x41a: Pop(1)
0x41b: Push((int) 538044)
0x41c: @@ SetMessage(Stack[-1])
0x41d: Pop(1)
0x41e: @@ ClearReplies()
0x41f: Pop(0)
0x420: Push((int) 538045)
0x421: Push((int) 39913)
0x422: Push((int) 39912)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: Push((int) 538063)
0x426: Push((int) 39932)
0x427: Push((int) 39931)
0x428: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x429: Pop(3)
0x42a: Return(); Pop(0)

0x42b: Push((int) 39932)
0x42c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x42e: PushEmpty(string)
0x42f: Stack[-1] = "Neutral"
0x430: Call2 0x1a8

0x431: Pop(1)
0x432: Push((int) 538064)
0x433: @@ SetMessage(Stack[-1])
0x434: Pop(1)
0x435: @@ ClearReplies()
0x436: Pop(0)
0x437: Push((int) 538065)
0x438: Push((int) 39934)
0x439: Push((int) 39933)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Return(); Pop(0)

0x43d: Push((int) 39934)
0x43e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x440: PushEmpty(string)
0x441: Stack[-1] = "Neutral"
0x442: Call2 0x1a8

0x443: Pop(1)
0x444: Push((int) 538066)
0x445: @@ SetMessage(Stack[-1])
0x446: Pop(1)
0x447: @@ ClearReplies()
0x448: Pop(0)
0x449: Push((int) 538067)
0x44a: Push((int) 39936)
0x44b: Push((int) 39935)
0x44c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44d: Pop(3)
0x44e: Return(); Pop(0)

0x44f: Push((int) 39936)
0x450: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x452: PushEmpty(string)
0x453: Stack[-1] = "Neutral"
0x454: Call2 0x1a8

0x455: Pop(1)
0x456: Push((int) 538068)
0x457: @@ SetMessage(Stack[-1])
0x458: Pop(1)
0x459: @@ ClearReplies()
0x45a: Pop(0)
0x45b: Push((int) 538069)
0x45c: Push((int) 39938)
0x45d: Push((int) 39937)
0x45e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45f: Pop(3)
0x460: Push((int) 538075)
0x461: Push((int) 39944)
0x462: Push((int) 39943)
0x463: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x464: Pop(3)
0x465: Return(); Pop(0)

0x466: Push((int) 39944)
0x467: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x469: PushEmpty(string)
0x46a: Stack[-1] = "Neutral"
0x46b: Call2 0x1a8

0x46c: Pop(1)
0x46d: Push((int) 538076)
0x46e: @@ SetMessage(Stack[-1])
0x46f: Pop(1)
0x470: @@ ClearReplies()
0x471: Pop(0)
0x472: Push((int) 538077)
0x473: Push((int) 39946)
0x474: Push((int) 39945)
0x475: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x476: Pop(3)
0x477: Push((int) 538082)
0x478: Push((int) -1)
0x479: Push((int) 39950)
0x47a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(3)
0x47c: Return(); Pop(0)

0x47d: Push((int) 39946)
0x47e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47f: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x480: PushEmpty(string)
0x481: Stack[-1] = "Neutral"
0x482: Call2 0x1a8

0x483: Pop(1)
0x484: Push((int) 538078)
0x485: @@ SetMessage(Stack[-1])
0x486: Pop(1)
0x487: @@ ClearReplies()
0x488: Pop(0)
0x489: Push((int) 538079)
0x48a: Push((int) 39948)
0x48b: Push((int) 39947)
0x48c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48d: Pop(3)
0x48e: Return(); Pop(0)

0x48f: Push((int) 39948)
0x490: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x492: PushEmpty(string)
0x493: Stack[-1] = "Neutral"
0x494: Call2 0x1a8

0x495: Pop(1)
0x496: Push((int) 538080)
0x497: @@ SetMessage(Stack[-1])
0x498: Pop(1)
0x499: @@ ClearReplies()
0x49a: Pop(0)
0x49b: Push((int) 538081)
0x49c: Push((int) -1)
0x49d: Push((int) 39949)
0x49e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49f: Pop(3)
0x4a0: Return(); Pop(0)

0x4a1: Push((int) 39938)
0x4a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4a4: PushEmpty(string)
0x4a5: Stack[-1] = "Neutral"
0x4a6: Call2 0x1a8

0x4a7: Pop(1)
0x4a8: Push((int) 538070)
0x4a9: @@ SetMessage(Stack[-1])
0x4aa: Pop(1)
0x4ab: @@ ClearReplies()
0x4ac: Pop(0)
0x4ad: Push((int) 538071)
0x4ae: Push((int) 39940)
0x4af: Push((int) 39939)
0x4b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b1: Pop(3)
0x4b2: Push((int) 538074)
0x4b3: Push((int) -1)
0x4b4: Push((int) 39942)
0x4b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b6: Pop(3)
0x4b7: Return(); Pop(0)

0x4b8: Push((int) 39940)
0x4b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4bb: PushEmpty(string)
0x4bc: Stack[-1] = "Neutral"
0x4bd: Call2 0x1a8

0x4be: Pop(1)
0x4bf: Push((int) 538072)
0x4c0: @@ SetMessage(Stack[-1])
0x4c1: Pop(1)
0x4c2: @@ ClearReplies()
0x4c3: Pop(0)
0x4c4: Push((int) 538073)
0x4c5: Push((int) -1)
0x4c6: Push((int) 39941)
0x4c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c8: Pop(3)
0x4c9: Return(); Pop(0)

0x4ca: Push((int) 39913)
0x4cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4cd: PushEmpty(string)
0x4ce: Stack[-1] = "Neutral"
0x4cf: Call2 0x1a8

0x4d0: Pop(1)
0x4d1: Push((int) 538046)
0x4d2: @@ SetMessage(Stack[-1])
0x4d3: Pop(1)
0x4d4: @@ ClearReplies()
0x4d5: Pop(0)
0x4d6: Push((int) 538047)
0x4d7: Push((int) 39915)
0x4d8: Push((int) 39914)
0x4d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4da: Pop(3)
0x4db: Push((int) 538060)
0x4dc: Push((int) 39928)
0x4dd: Push((int) 39927)
0x4de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4df: Pop(3)
0x4e0: Return(); Pop(0)

0x4e1: Push((int) 39928)
0x4e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e3: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4e4: PushEmpty(string)
0x4e5: Stack[-1] = "Neutral"
0x4e6: Call2 0x1a8

0x4e7: Pop(1)
0x4e8: Push((int) 538061)
0x4e9: @@ SetMessage(Stack[-1])
0x4ea: Pop(1)
0x4eb: @@ ClearReplies()
0x4ec: Pop(0)
0x4ed: Push((int) 538062)
0x4ee: Push((int) 39915)
0x4ef: Push((int) 39929)
0x4f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f1: Pop(3)
0x4f2: Return(); Pop(0)

0x4f3: Push((int) 39915)
0x4f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x4f6: PushEmpty(string)
0x4f7: Stack[-1] = "Neutral"
0x4f8: Call2 0x1a8

0x4f9: Pop(1)
0x4fa: Push((int) 538048)
0x4fb: @@ SetMessage(Stack[-1])
0x4fc: Pop(1)
0x4fd: @@ ClearReplies()
0x4fe: Pop(0)
0x4ff: Push((int) 538049)
0x500: Push((int) 39917)
0x501: Push((int) 39916)
0x502: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x503: Pop(3)
0x504: Push((int) 538057)
0x505: Push((int) 39925)
0x506: Push((int) 39924)
0x507: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x508: Pop(3)
0x509: Return(); Pop(0)

0x50a: Push((int) 39925)
0x50b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50c: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x50d: PushEmpty(string)
0x50e: Stack[-1] = "Neutral"
0x50f: Call2 0x1a8

0x510: Pop(1)
0x511: Push((int) 538058)
0x512: @@ SetMessage(Stack[-1])
0x513: Pop(1)
0x514: @@ ClearReplies()
0x515: Pop(0)
0x516: Push((int) 538059)
0x517: Push((int) -1)
0x518: Push((int) 39926)
0x519: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51a: Pop(3)
0x51b: Return(); Pop(0)

0x51c: Push((int) 39917)
0x51d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x51f: PushEmpty(string)
0x520: Stack[-1] = "Neutral"
0x521: Call2 0x1a8

0x522: Pop(1)
0x523: Push((int) 538050)
0x524: @@ SetMessage(Stack[-1])
0x525: Pop(1)
0x526: @@ ClearReplies()
0x527: Pop(0)
0x528: Push((int) 538051)
0x529: Push((int) 39919)
0x52a: Push((int) 39918)
0x52b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52c: Pop(3)
0x52d: Push((int) 538056)
0x52e: Push((int) -1)
0x52f: Push((int) 39923)
0x530: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x531: Pop(3)
0x532: Return(); Pop(0)

0x533: Push((int) 39919)
0x534: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x536: PushEmpty(string)
0x537: Stack[-1] = "Neutral"
0x538: Call2 0x1a8

0x539: Pop(1)
0x53a: Push((int) 538052)
0x53b: @@ SetMessage(Stack[-1])
0x53c: Pop(1)
0x53d: @@ ClearReplies()
0x53e: Pop(0)
0x53f: Push((int) 538053)
0x540: Push((int) 39921)
0x541: Push((int) 39920)
0x542: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x543: Pop(3)
0x544: Return(); Pop(0)

0x545: Push((int) 39921)
0x546: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x548: PushEmpty(string)
0x549: Stack[-1] = "Neutral"
0x54a: Call2 0x1a8

0x54b: Pop(1)
0x54c: Push((int) 538054)
0x54d: @@ SetMessage(Stack[-1])
0x54e: Pop(1)
0x54f: @@ ClearReplies()
0x550: Pop(0)
0x551: Push((int) 538055)
0x552: Push((int) -1)
0x553: Push((int) 39922)
0x554: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x555: Pop(3)
0x556: Return(); Pop(0)

0x557: Push((int) 39883)
0x558: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x559: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x55a: PushEmpty(string)
0x55b: Stack[-1] = "Neutral"
0x55c: Call2 0x1a8

0x55d: Pop(1)
0x55e: Push((int) 538018)
0x55f: @@ SetMessage(Stack[-1])
0x560: Pop(1)
0x561: @@ ClearReplies()
0x562: Pop(0)
0x563: Push((int) 538019)
0x564: Push((int) 39885)
0x565: Push((int) 39884)
0x566: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x567: Pop(3)
0x568: Push((int) 538030)
0x569: Push((int) 39897)
0x56a: Push((int) 39896)
0x56b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56c: Pop(3)
0x56d: Push((int) 538039)
0x56e: Push((int) 39907)
0x56f: Push((int) 39906)
0x570: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x571: Pop(3)
0x572: Push((int) 538042)
0x573: Push((int) -1)
0x574: Push((int) 39909)
0x575: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x576: Pop(3)
0x577: Return(); Pop(0)

0x578: Push((int) 39907)
0x579: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57a: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x57b: PushEmpty(string)
0x57c: Stack[-1] = "Neutral"
0x57d: Call2 0x1a8

0x57e: Pop(1)
0x57f: Push((int) 538040)
0x580: @@ SetMessage(Stack[-1])
0x581: Pop(1)
0x582: @@ ClearReplies()
0x583: Pop(0)
0x584: Push((int) 538041)
0x585: Push((int) -1)
0x586: Push((int) 39908)
0x587: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x588: Pop(3)
0x589: Return(); Pop(0)

0x58a: Push((int) 39897)
0x58b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x58d: PushEmpty(string)
0x58e: Stack[-1] = "Neutral"
0x58f: Call2 0x1a8

0x590: Pop(1)
0x591: Push((int) 538031)
0x592: @@ SetMessage(Stack[-1])
0x593: Pop(1)
0x594: @@ ClearReplies()
0x595: Pop(0)
0x596: Push((int) 538032)
0x597: Push((int) 39899)
0x598: Push((int) 39898)
0x599: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59a: Pop(3)
0x59b: Push((int) 538038)
0x59c: Push((int) 39899)
0x59d: Push((int) 39904)
0x59e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(3)
0x5a0: Return(); Pop(0)

0x5a1: Push((int) 39899)
0x5a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5a4: PushEmpty(string)
0x5a5: Stack[-1] = "Neutral"
0x5a6: Call2 0x1a8

0x5a7: Pop(1)
0x5a8: Push((int) 538033)
0x5a9: @@ SetMessage(Stack[-1])
0x5aa: Pop(1)
0x5ab: @@ ClearReplies()
0x5ac: Pop(0)
0x5ad: Push((int) 538034)
0x5ae: Push((int) 39901)
0x5af: Push((int) 39900)
0x5b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b1: Pop(3)
0x5b2: Push((int) 538037)
0x5b3: Push((int) -1)
0x5b4: Push((int) 39903)
0x5b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b6: Pop(3)
0x5b7: Return(); Pop(0)

0x5b8: Push((int) 39901)
0x5b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ba: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5bb: PushEmpty(string)
0x5bc: Stack[-1] = "Neutral"
0x5bd: Call2 0x1a8

0x5be: Pop(1)
0x5bf: Push((int) 538035)
0x5c0: @@ SetMessage(Stack[-1])
0x5c1: Pop(1)
0x5c2: @@ ClearReplies()
0x5c3: Pop(0)
0x5c4: Push((int) 538036)
0x5c5: Push((int) -1)
0x5c6: Push((int) 39902)
0x5c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c8: Pop(3)
0x5c9: Return(); Pop(0)

0x5ca: Push((int) 39885)
0x5cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5cd: PushEmpty(string)
0x5ce: Stack[-1] = "Neutral"
0x5cf: Call2 0x1a8

0x5d0: Pop(1)
0x5d1: Push((int) 538020)
0x5d2: @@ SetMessage(Stack[-1])
0x5d3: Pop(1)
0x5d4: @@ ClearReplies()
0x5d5: Pop(0)
0x5d6: Push((int) 538021)
0x5d7: Push((int) 39887)
0x5d8: Push((int) 39886)
0x5d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5da: Pop(3)
0x5db: Push((int) 538027)
0x5dc: Push((int) 39894)
0x5dd: Push((int) 39893)
0x5de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5df: Pop(3)
0x5e0: Return(); Pop(0)

0x5e1: Push((int) 39894)
0x5e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5e4: PushEmpty(string)
0x5e5: Stack[-1] = "Neutral"
0x5e6: Call2 0x1a8

0x5e7: Pop(1)
0x5e8: Push((int) 538028)
0x5e9: @@ SetMessage(Stack[-1])
0x5ea: Pop(1)
0x5eb: @@ ClearReplies()
0x5ec: Pop(0)
0x5ed: Push((int) 538029)
0x5ee: Push((int) -1)
0x5ef: Push((int) 39895)
0x5f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f1: Pop(3)
0x5f2: Return(); Pop(0)

0x5f3: Push((int) 39887)
0x5f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f5: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x5f6: PushEmpty(string)
0x5f7: Stack[-1] = "Neutral"
0x5f8: Call2 0x1a8

0x5f9: Pop(1)
0x5fa: Push((int) 538022)
0x5fb: @@ SetMessage(Stack[-1])
0x5fc: Pop(1)
0x5fd: @@ ClearReplies()
0x5fe: Pop(0)
0x5ff: Push((int) 538023)
0x600: Push((int) 39889)
0x601: Push((int) 39888)
0x602: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x603: Pop(3)
0x604: Push((int) 538026)
0x605: Push((int) 39889)
0x606: Push((int) 39891)
0x607: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x608: Pop(3)
0x609: Return(); Pop(0)

0x60a: Push((int) 39889)
0x60b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x60d: PushEmpty(string)
0x60e: Stack[-1] = "Neutral"
0x60f: Call2 0x1a8

0x610: Pop(1)
0x611: Push((int) 538024)
0x612: @@ SetMessage(Stack[-1])
0x613: Pop(1)
0x614: @@ ClearReplies()
0x615: Pop(0)
0x616: Push((int) 538025)
0x617: Push((int) -1)
0x618: Push((int) 39890)
0x619: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61a: Pop(3)
0x61b: Return(); Pop(0)

0x61c: Push((int) 39878)
0x61d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61e: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x61f: PushEmpty(string)
0x620: Stack[-1] = "Neutral"
0x621: Call2 0x1a8

0x622: Pop(1)
0x623: Push((int) 538013)
0x624: @@ SetMessage(Stack[-1])
0x625: Pop(1)
0x626: @@ ClearReplies()
0x627: Pop(0)
0x628: Push((int) 538014)
0x629: Push((int) 39880)
0x62a: Push((int) 39879)
0x62b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62c: Pop(3)
0x62d: Return(); Pop(0)

0x62e: Push((int) 39880)
0x62f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x631: PushEmpty(string)
0x632: Stack[-1] = "Neutral"
0x633: Call2 0x1a8

0x634: Pop(1)
0x635: Push((int) 538015)
0x636: @@ SetMessage(Stack[-1])
0x637: Pop(1)
0x638: @@ ClearReplies()
0x639: Pop(0)
0x63a: Push((int) 538016)
0x63b: Push((int) -1)
0x63c: Push((int) 39881)
0x63d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63e: Pop(3)
0x63f: Return(); Pop(0)

0x640: Push((int) 39869)
0x641: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x643: PushEmpty(string)
0x644: Stack[-1] = "Neutral"
0x645: Call2 0x1a8

0x646: Pop(1)
0x647: Push((int) 538004)
0x648: @@ SetMessage(Stack[-1])
0x649: Pop(1)
0x64a: @@ ClearReplies()
0x64b: Pop(0)
0x64c: Push((int) 538005)
0x64d: Push((int) 39871)
0x64e: Push((int) 39870)
0x64f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x650: Pop(3)
0x651: Push((int) 538011)
0x652: Push((int) -1)
0x653: Push((int) 39876)
0x654: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x655: Pop(3)
0x656: Return(); Pop(0)

0x657: Push((int) 39871)
0x658: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x659: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x65a: PushEmpty(string)
0x65b: Stack[-1] = "Neutral"
0x65c: Call2 0x1a8

0x65d: Pop(1)
0x65e: Push((int) 538006)
0x65f: @@ SetMessage(Stack[-1])
0x660: Pop(1)
0x661: @@ ClearReplies()
0x662: Pop(0)
0x663: Push((int) 538007)
0x664: Push((int) 39873)
0x665: Push((int) 39872)
0x666: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x667: Pop(3)
0x668: Return(); Pop(0)

0x669: Push((int) 39873)
0x66a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66b: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x66c: PushEmpty(string)
0x66d: Stack[-1] = "Neutral"
0x66e: Call2 0x1a8

0x66f: Pop(1)
0x670: Push((int) 538008)
0x671: @@ SetMessage(Stack[-1])
0x672: Pop(1)
0x673: @@ ClearReplies()
0x674: Pop(0)
0x675: Push((int) 538009)
0x676: Push((int) -1)
0x677: Push((int) 39874)
0x678: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x679: Pop(3)
0x67a: Push((int) 538010)
0x67b: Push((int) -1)
0x67c: Push((int) 39875)
0x67d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67e: Pop(3)
0x67f: Return(); Pop(0)

0x680: Push((int) 39861)
0x681: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x682: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x683: PushEmpty(string)
0x684: Stack[-1] = "Neutral"
0x685: Call2 0x1a8

0x686: Pop(1)
0x687: Push((int) 537996)
0x688: @@ SetMessage(Stack[-1])
0x689: Pop(1)
0x68a: @@ ClearReplies()
0x68b: Pop(0)
0x68c: Push((int) 537997)
0x68d: Push((int) 39863)
0x68e: Push((int) 39862)
0x68f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x690: Pop(3)
0x691: Return(); Pop(0)

0x692: Push((int) 39863)
0x693: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x694: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x695: PushEmpty(string)
0x696: Stack[-1] = "Neutral"
0x697: Call2 0x1a8

0x698: Pop(1)
0x699: Push((int) 537998)
0x69a: @@ SetMessage(Stack[-1])
0x69b: Pop(1)
0x69c: @@ ClearReplies()
0x69d: Pop(0)
0x69e: Push((int) 537999)
0x69f: Push((int) 39865)
0x6a0: Push((int) 39864)
0x6a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a2: Pop(3)
0x6a3: Push((int) 538002)
0x6a4: Push((int) -1)
0x6a5: Push((int) 39867)
0x6a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a7: Pop(3)
0x6a8: Return(); Pop(0)

0x6a9: Push((int) 39865)
0x6aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ab: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6ac: PushEmpty(string)
0x6ad: Stack[-1] = "Neutral"
0x6ae: Call2 0x1a8

0x6af: Pop(1)
0x6b0: Push((int) 538000)
0x6b1: @@ SetMessage(Stack[-1])
0x6b2: Pop(1)
0x6b3: @@ ClearReplies()
0x6b4: Pop(0)
0x6b5: Push((int) 538001)
0x6b6: Push((int) -1)
0x6b7: Push((int) 39866)
0x6b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b9: Pop(3)
0x6ba: Return(); Pop(0)

0x6bb: Push((int) 39833)
0x6bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bd: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6be: PushEmpty(string)
0x6bf: Stack[-1] = "Neutral"
0x6c0: Call2 0x1a8

0x6c1: Pop(1)
0x6c2: Push((int) 537971)
0x6c3: @@ SetMessage(Stack[-1])
0x6c4: Pop(1)
0x6c5: @@ ClearReplies()
0x6c6: Pop(0)
0x6c7: Push((int) 537972)
0x6c8: Push((int) 39835)
0x6c9: Push((int) 39834)
0x6ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cb: Pop(3)
0x6cc: Push((int) 537976)
0x6cd: Push((int) 39840)
0x6ce: Push((int) 39839)
0x6cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d0: Pop(3)
0x6d1: Push((int) 537988)
0x6d2: Push((int) 39852)
0x6d3: Push((int) 39851)
0x6d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d5: Pop(3)
0x6d6: Push((int) 537994)
0x6d7: Push((int) -1)
0x6d8: Push((int) 39859)
0x6d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6da: Pop(3)
0x6db: Return(); Pop(0)

0x6dc: Push((int) 39852)
0x6dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6de: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6df: PushEmpty(string)
0x6e0: Stack[-1] = "Neutral"
0x6e1: Call2 0x1a8

0x6e2: Pop(1)
0x6e3: Push((int) 537989)
0x6e4: @@ SetMessage(Stack[-1])
0x6e5: Pop(1)
0x6e6: @@ ClearReplies()
0x6e7: Pop(0)
0x6e8: Push((int) 537990)
0x6e9: Push((int) 39835)
0x6ea: Push((int) 39853)
0x6eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ec: Pop(3)
0x6ed: Push((int) 537991)
0x6ee: Push((int) 39856)
0x6ef: Push((int) 39855)
0x6f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f1: Pop(3)
0x6f2: Return(); Pop(0)

0x6f3: Push((int) 39856)
0x6f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f5: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x6f6: PushEmpty(string)
0x6f7: Stack[-1] = "Neutral"
0x6f8: Call2 0x1a8

0x6f9: Pop(1)
0x6fa: Push((int) 537992)
0x6fb: @@ SetMessage(Stack[-1])
0x6fc: Pop(1)
0x6fd: @@ ClearReplies()
0x6fe: Pop(0)
0x6ff: Push((int) 537993)
0x700: Push((int) 39840)
0x701: Push((int) 39857)
0x702: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x703: Pop(3)
0x704: Return(); Pop(0)

0x705: Push((int) 39840)
0x706: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x707: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x708: PushEmpty(string)
0x709: Stack[-1] = "Neutral"
0x70a: Call2 0x1a8

0x70b: Pop(1)
0x70c: Push((int) 537977)
0x70d: @@ SetMessage(Stack[-1])
0x70e: Pop(1)
0x70f: @@ ClearReplies()
0x710: Pop(0)
0x711: Push((int) 537978)
0x712: Push((int) 39842)
0x713: Push((int) 39841)
0x714: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x715: Pop(3)
0x716: Push((int) 537987)
0x717: Push((int) -1)
0x718: Push((int) 39850)
0x719: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71a: Pop(3)
0x71b: Return(); Pop(0)

0x71c: Push((int) 39842)
0x71d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71e: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x71f: PushEmpty(string)
0x720: Stack[-1] = "Neutral"
0x721: Call2 0x1a8

0x722: Pop(1)
0x723: Push((int) 537979)
0x724: @@ SetMessage(Stack[-1])
0x725: Pop(1)
0x726: @@ ClearReplies()
0x727: Pop(0)
0x728: Push((int) 537980)
0x729: Push((int) 39844)
0x72a: Push((int) 39843)
0x72b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72c: Pop(3)
0x72d: Push((int) 537986)
0x72e: Push((int) -1)
0x72f: Push((int) 39849)
0x730: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x731: Pop(3)
0x732: Return(); Pop(0)

0x733: Push((int) 39844)
0x734: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x735: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x736: PushEmpty(string)
0x737: Stack[-1] = "Neutral"
0x738: Call2 0x1a8

0x739: Pop(1)
0x73a: Push((int) 537981)
0x73b: @@ SetMessage(Stack[-1])
0x73c: Pop(1)
0x73d: @@ ClearReplies()
0x73e: Pop(0)
0x73f: Push((int) 537982)
0x740: Push((int) 39846)
0x741: Push((int) 39845)
0x742: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x743: Pop(3)
0x744: Push((int) 537985)
0x745: Push((int) -1)
0x746: Push((int) 39848)
0x747: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x748: Pop(3)
0x749: Return(); Pop(0)

0x74a: Push((int) 39846)
0x74b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74c: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x74d: PushEmpty(string)
0x74e: Stack[-1] = "Neutral"
0x74f: Call2 0x1a8

0x750: Pop(1)
0x751: Push((int) 537983)
0x752: @@ SetMessage(Stack[-1])
0x753: Pop(1)
0x754: @@ ClearReplies()
0x755: Pop(0)
0x756: Push((int) 537984)
0x757: Push((int) -1)
0x758: Push((int) 39847)
0x759: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75a: Pop(3)
0x75b: Return(); Pop(0)

0x75c: Push((int) 39835)
0x75d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x75f: PushEmpty(string)
0x760: Stack[-1] = "Neutral"
0x761: Call2 0x1a8

0x762: Pop(1)
0x763: Push((int) 537973)
0x764: @@ SetMessage(Stack[-1])
0x765: Pop(1)
0x766: @@ ClearReplies()
0x767: Pop(0)
0x768: Push((int) 537974)
0x769: Push((int) 39840)
0x76a: Push((int) 39836)
0x76b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76c: Pop(3)
0x76d: Push((int) 537975)
0x76e: Push((int) -1)
0x76f: Push((int) 39838)
0x770: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x771: Pop(3)
0x772: Return(); Pop(0)

0x773: Push((int) 45790)
0x774: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x775: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x776: PushEmpty(string)
0x777: Stack[-1] = "Neutral"
0x778: Call2 0x1a8

0x779: Pop(1)
0x77a: Push((int) 543333)
0x77b: @@ SetMessage(Stack[-1])
0x77c: Pop(1)
0x77d: @@ ClearReplies()
0x77e: Pop(0)
0x77f: Push((int) 543334)
0x780: Push((int) -1)
0x781: Push((int) 45791)
0x782: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x783: Pop(3)
0x784: Push((int) 543335)
0x785: Push((int) -1)
0x786: Push((int) 45792)
0x787: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x788: Pop(3)
0x789: Return(); Pop(0)

0x78a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x78b: PushEmpty(bool)
0x78c: Call2 0x143f

0x78d: Pop(0)
0x78e: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x78f: @ lshStopAnimation()
0x790: Pop(0)
0x791: GOTO 0x794

0x792: @ StopAnimation()
0x793: Pop(0)
0x794: Return(); Pop(0)

0x795: GOTO 0x1bf

0x796: Return(); Pop(0)

0x797: PushEmpty()
0x798: EventDisable(0)
0x799: PushEmpty(object)
0x79a: Stack[-1] = Stack[-2]
0x79b: Call2 0x7b8

0x79c: Pop(1)
0x79d: PushEmpty(object)
0x79e: Stack[-1] = Stack[-2]
0x79f: Call2 0x1490

0x7a0: Pop(1)
0x7a1: EventEnable(0)
0x7a2: @ Hold()
0x7a3: Pop(0)
0x7a4: GOTO 0x7a2

0x7a5: Return(); Pop(0)

0x7a6: PushEmpty(int, int)
0x7a7: PushEmpty(int, object)
0x7a8: Stack[-1] = Stack[-5]
0x7a9: Call2 0x1419

0x7aa: Stack[-3] = Stack[-2]
0x7ab: Pop(2)
0x7ac: Push((int) 0)
0x7ad: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7af: PushEmpty(object)
0x7b0: Stack[-1] = Stack[-4]
0x7b1: Call2 0x141c

0x7b2: Pop(1)
0x7b3: Return(); Pop(2)

0x7b4: PushEmpty()
0x7b5: Call2 0x1422

0x7b6: Pop(0)
0x7b7: Return(); Pop(0)

0x7b8: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x7b9: Pop(0); Push((bool) Stack[-21] == 0)
0x7ba: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7bb: PushEmpty(string)
0x7bc: Stack[-1] = "fdie"
0x7bd: Call2 0x813

0x7be: Pop(1)
0x7bf: GOTO 0x812

0x7c0: @@ GetPosition(Stack[-10])
0x7c1: Pop(0)
0x7c2: @ GetPosition(Stack[-9])
0x7c3: Pop(0)
0x7c4: @ GetDirection(Stack[-8])
0x7c5: Pop(0)
0x7c6: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x7c7: Push(CvectorIndex(Stack[-7], 0))
0x7c8: Push(CvectorIndex(Stack[-9], 0))
0x7c9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7ca: Push(CvectorIndex(Stack[-8], 2))
0x7cb: Push(CvectorIndex(Stack[-10], 2))
0x7cc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7cd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7ce: Push((int) 0)
0x7cf: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d1: Stack[-6] = "fdie"
0x7d2: GOTO 0x7d4

0x7d3: Stack[-6] = "bdie"
0x7d4: @ RemoveRTEnvelope()
0x7d5: Pop(0)
0x7d6: @ SetDeathState()
0x7d7: Pop(0)
0x7d8: @ Stop()
0x7d9: Pop(0)
0x7da: @ StopAsync()
0x7db: Pop(0)
0x7dc: Stack[-5] = Stack[-21]
0x7dd: Push("GetScriptProperty")
0x7de: Push((int) 2)
0x7df: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x7e0: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7e1: Push("Owner")
0x7e2: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x7e3: Pop(1)
0x7e4: Push(Stack[-4])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7e6: Push("Owner")
0x7e7: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x7e8: Pop(1)
0x7e9: Pop(0); Push((bool) Stack[-5] == 0)
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7eb: Stack[-5] = Stack[-21]
0x7ec: Push("@GetEyesHeight")
0x7ed: Push((int) 1)
0x7ee: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x7ef: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f0: @@ GetEyesHeight(Stack[-2])
0x7f1: Pop(0)
0x7f2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x7f3: Push(CvectorIndex(Stack[-1], 1))
0x7f4: Stack[-1] = Stack[-3]
0x7f5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7f6: Push("head")
0x7f7: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x7f8: Pop(1)
0x7f9: Stack[-3] = (bool) 1
0x7fa: GOTO 0x7fc

0x7fb: Stack[-3] = (bool) 0
0x7fc: PushEmpty(string)
0x7fd: Stack[-1] = Stack[-7]
0x7fe: Call2 0x1054

0x7ff: Pop(1)
0x800: Push("all")
0x801: @ PlayAnimation(Stack[-1], Stack[-7])
0x802: Pop(1)
0x803: @ WaitForAnimEnd()
0x804: Pop(0)
0x805: Push(Stack[-3])
0x806: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x807: @ StopAsync()
0x808: Pop(0)
0x809: Push("head")
0x80a: @ UnlookAsync(Stack[-1])
0x80b: Pop(1)
0x80c: Push("all")
0x80d: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x80e: Pop(1)
0x80f: @ RemoveEnvelope()
0x810: Pop(0)
0x811: Stack[-5] = 0
0x812: Return(); Pop(20)

0x813: PushEmpty()
0x814: @ RemoveRTEnvelope()
0x815: Pop(0)
0x816: @ SetDeathState()
0x817: Pop(0)
0x818: @ Stop()
0x819: Pop(0)
0x81a: @ StopAsync()
0x81b: Pop(0)
0x81c: @ StopSecondaryAnimation()
0x81d: Pop(0)
0x81e: PushEmpty(string)
0x81f: Stack[-1] = Stack[-2]
0x820: Call2 0x1054

0x821: Pop(1)
0x822: Push("all")
0x823: @ PlayAnimation(Stack[-1], Stack[-2])
0x824: Pop(1)
0x825: @ WaitForAnimEnd()
0x826: Pop(0)
0x827: Push("all")
0x828: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x829: Pop(1)
0x82a: @ RemoveEnvelope()
0x82b: Pop(0)
0x82c: Return(); Pop(0)

0x82d: PushEmpty()
0x82e: Return(); Pop(0)

0x82f: PushEmpty()
0x830: Return(); Pop(0)

0x831: PushEmpty()
0x832: Return(); Pop(0)

0x833: Push((bool) 1)
0x834: @ SensePlayerOnly(Stack[-1])
0x835: Pop(1)
0x836: PushEmpty()
0x837: Call2 0x1441

0x838: Pop(0)
0x839: PushEmpty()
0x83a: Call2 0x842

0x83b: Pop(0)
0x83c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x83d: PushEmpty()
0x83e: Call2 0x947

0x83f: Pop(0)
0x840: GOTO 0x83c

0x841: Return(); Pop(0)

0x842: PushEmpty(bool)
0x843: Call2 0xf8a

0x844: Pop(0)
0x845: Pop(1); Push((bool) Stack[-1] == 0)
0x846: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x847: PushEmpty()
0x848: Call2 0x1422

0x849: Pop(0)
0x84a: Return(); Pop(0)

0x84b: PushEmpty(int, int)
0x84c: PushEmpty(int, object)
0x84d: Stack[-1] = Stack[-5]
0x84e: Call2 0x1419

0x84f: Stack[-3] = Stack[-2]
0x850: Pop(2)
0x851: Push((int) 0)
0x852: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x853: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x854: Push((int) 1)
0x855: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x856: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x857: PushEmpty()
0x858: Call2 0x906

0x859: Pop(0)
0x85a: PushEmpty(object)
0x85b: Stack[-1] = Stack[-4]
0x85c: Call2 0x141c

0x85d: Pop(1)
0x85e: Return(); Pop(2)

0x85f: PushEmpty(int, int)
0x860: PushEmpty(object)
0x861: Stack[-1] = Stack[-4]
0x862: Call2 0x130d

0x863: Pop(1)
0x864: PushEmpty(int, object)
0x865: Stack[-1] = Stack[-5]
0x866: Call2 0x135f

0x867: Stack[-3] = Stack[-2]
0x868: Pop(2)
0x869: Push((int) 0)
0x86a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x86b: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x86c: Push((int) 1)
0x86d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x86e: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x86f: PushEmpty()
0x870: Call2 0x906

0x871: Pop(0)
0x872: PushEmpty(object)
0x873: Stack[-1] = Stack[-4]
0x874: Call2 0x1369

0x875: Pop(1)
0x876: Return(); Pop(2)

0x877: PushEmpty(int, int)
0x878: PushEmpty(bool, object, object, bool)
0x879: Stack[-3] = Stack[-9]
0x87a: Stack[-2] = Stack[-8]
0x87b: Stack[-1] = Stack[-7]
0x87c: Call2 0x1486

0x87d: Pop(3)
0x87e: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x87f: PushEmpty(int, object, bool)
0x880: Stack[-2] = Stack[-8]
0x881: Stack[-1] = Stack[-6]
0x882: Call2 0x13bc

0x883: Stack[-4] = Stack[-3]
0x884: Pop(3)
0x885: Push((int) 0)
0x886: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x887: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x888: Push((int) 1)
0x889: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x88a: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x88b: PushEmpty()
0x88c: Call2 0x906

0x88d: Pop(0)
0x88e: PushEmpty(object)
0x88f: Stack[-1] = Stack[-6]
0x890: Call2 0x13c3

0x891: Pop(1)
0x892: Return(); Pop(2)

0x893: PushEmpty(int, int)
0x894: PushEmpty(int, object)
0x895: Stack[-1] = Stack[-5]
0x896: Call2 0x13e6

0x897: Stack[-3] = Stack[-2]
0x898: Pop(2)
0x899: Push((int) 0)
0x89a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x89b: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x89c: Push((int) 1)
0x89d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x89e: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x89f: PushEmpty()
0x8a0: Call2 0x906

0x8a1: Pop(0)
0x8a2: PushEmpty(object)
0x8a3: Stack[-1] = Stack[-4]
0x8a4: Call2 0x13e9

0x8a5: Pop(1)
0x8a6: Return(); Pop(2)

0x8a7: PushEmpty(int, int)
0x8a8: PushEmpty(bool, object, string)
0x8a9: Stack[-2] = Stack[-7]
0x8aa: Stack[-1] = Stack[-6]
0x8ab: Call2 0x12b7

0x8ac: Pop(2)
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8ae: PushEmpty()
0x8af: Call2 0x906

0x8b0: Pop(0)
0x8b1: PushEmpty(object, string)
0x8b2: Stack[-2] = Stack[-6]
0x8b3: Stack[-1] = Stack[-5]
0x8b4: Call2 0x12d7

0x8b5: Pop(2)
0x8b6: GOTO 0x8cb

0x8b7: PushEmpty(int, string, object)
0x8b8: Stack[-2] = Stack[-6]
0x8b9: Stack[-1] = Stack[-7]
0x8ba: Call2 0x13eb

0x8bb: Stack[-4] = Stack[-3]
0x8bc: Pop(3)
0x8bd: Push((int) 0)
0x8be: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8bf: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8c0: Push((int) 1)
0x8c1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c3: PushEmpty()
0x8c4: Call2 0x906

0x8c5: Pop(0)
0x8c6: PushEmpty(string, object)
0x8c7: Stack[-2] = Stack[-5]
0x8c8: Stack[-1] = Stack[-6]
0x8c9: Call2 0x13f7

0x8ca: Pop(2)
0x8cb: Return(); Pop(2)

0x8cc: PushEmpty()
0x8cd: PushEmpty(bool, string)
0x8ce: Stack[-1] = Stack[-3]
0x8cf: Call2 0x131a

0x8d0: Pop(1)
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d2: PushEmpty()
0x8d3: Call2 0x906

0x8d4: Pop(0)
0x8d5: PushEmpty(string)
0x8d6: Stack[-1] = Stack[-2]
0x8d7: Call2 0x132a

0x8d8: Pop(1)
0x8d9: Return(); Pop(0)

0x8da: PushEmpty()
0x8db: PushEmpty(bool, object)
0x8dc: Stack[-1] = Stack[-3]
0x8dd: Call2 0x12f0

0x8de: Pop(1)
0x8df: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e0: PushEmpty()
0x8e1: Call2 0x906

0x8e2: Pop(0)
0x8e3: PushEmpty(object)
0x8e4: Stack[-1] = Stack[-2]
0x8e5: Call2 0x1307

0x8e6: Pop(1)
0x8e7: GOTO 0x8ec

0x8e8: PushEmpty(object)
0x8e9: Stack[-1] = Stack[-2]
0x8ea: Call2 0x91f

0x8eb: Pop(1)
0x8ec: Return(); Pop(0)

0x8ed: PushEmpty()
0x8ee: PushEmpty(object)
0x8ef: Stack[-1] = Stack[-2]
0x8f0: Call2 0x91f

0x8f1: Pop(1)
0x8f2: Return(); Pop(0)

0x8f3: PushEmpty()
0x8f4: Push((int) 110)
0x8f5: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x8f6: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8f7: Return(); Pop(0)

0x8f8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8f9: Push((int) 110)
0x8fa: @ KillTimer(Stack[-1])
0x8fb: Pop(1)
0x8fc: @ ResetAAS()
0x8fd: Pop(0)
0x8fe: Return(); Pop(0)

0x8ff: PushEmpty()
0x900: Call2 0x906

0x901: Pop(0)
0x902: PushEmpty()
0x903: Call2 0x1422

0x904: Pop(0)
0x905: Return(); Pop(0)

0x906: Push((int) 110)
0x907: @ KillTimer(Stack[-1])
0x908: Pop(1)
0x909: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x90a: PushEmpty()
0x90b: Call2 0x98e

0x90c: Pop(0)
0x90d: Return(); Pop(0)

0x90e: Push((int) 110)
0x90f: @ KillTimer(Stack[-1])
0x910: Pop(1)
0x911: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x912: PushEmpty()
0x913: Call2 0x995

0x914: Pop(0)
0x915: Return(); Pop(0)

0x916: PushEmpty()
0x917: PushEmpty()
0x918: Call2 0x906

0x919: Pop(0)
0x91a: PushEmpty(object)
0x91b: Stack[-1] = Stack[-2]
0x91c: Call2 0x129f

0x91d: Pop(1)
0x91e: Return(); Pop(0)

0x91f: PushEmpty(bool, int, bool, int)
0x920: PushEmpty(bool, object)
0x921: Stack[-1] = Stack[-7]
0x922: Call2 0xee9

0x923: Pop(1)
0x924: Pop(1); Push((bool) Stack[-1] == 0)
0x925: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x926: Return(); Pop(4)

0x927: Push( Stack[2 + Tasks[-1].StackPointer] )
0x928: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x929: Return(); Pop(4)

0x92a: @ IsPlayerActor(Stack[-5], Stack[-2])
0x92b: Pop(0)
0x92c: Pop(0); Push((bool) Stack[-2] == 0)
0x92d: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x92e: Return(); Pop(4)

0x92f: PushEmpty(int, object)
0x930: Stack[-1] = Stack[-7]
0x931: Call2 0x134f

0x932: Stack[-3] = Stack[-2]
0x933: Pop(2)
0x934: Push((int) 0)
0x935: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x936: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x937: Push((int) 1)
0x938: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x939: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93a: PushEmpty()
0x93b: Call2 0x90e

0x93c: Pop(0)
0x93d: PushEmpty(object)
0x93e: Stack[-1] = Stack[-6]
0x93f: Call2 0x1359

0x940: Pop(1)
0x941: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x942: Push((int) 110)
0x943: Push((float)10.0)
0x944: @ SetTimer(Stack[-2], Stack[-1])
0x945: Pop(2)
0x946: Return(); Pop(4)

0x947: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x948: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x949: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x94a: Push((float)0.5)
0x94b: @ rand(Stack[-7], Stack[-1])
0x94c: Pop(1)
0x94d: @ Sleep(Stack[-6])
0x94e: Pop(0)
0x94f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x950: IF (Stack[-1] == 0) GOTO 0x981; Pop(1)

0x951: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x952: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x953: @ GetPosition(Stack[-4])
0x954: Pop(0)
0x955: PushEmpty(float)
0x956: Call2 0x982

0x957: Pop(0)
0x958: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x959: Pop(1)
0x95a: Push(Stack[-3])
0x95b: IF (Stack[-1] == 0) GOTO 0x95d; Pop(1)

0x95c: GOTO 0x961

0x95d: Push((int) 1)
0x95e: @ Sleep(Stack[-1])
0x95f: Pop(1)
0x960: GOTO 0x953

0x961: GOTO 0x963

0x962: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x963: PushEmpty(object, cvector)
0x964: Stack[-1] = Stack[-7]
0x965: Call2 0x99e

0x966: Stack[-4] = Stack[-2]
0x967: Pop(2)
0x968: Pop(0); Push(( Stack[-2] != 0 )
0x969: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x96a: @ RotatePath(Stack[-2], Stack[-1])
0x96b: Pop(0)
0x96c: Push(Stack[-1])
0x96d: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x96e: PushEmpty(bool)
0x96f: Call2 0x99c

0x970: Pop(0)
0x971: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x972: Pop(1)
0x973: Stack[-2] = 0
0x974: Push(Stack[-1])
0x975: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x976: PushEmpty()
0x977: Push(-0, 0); TaskCall(5)
0x978: Call2 0xa48

0x979: Pop(-0, 0); TaskReturn
0x97a: Pop(0)
0x97b: GOTO 0x97f

0x97c: Push((int) 1)
0x97d: @ Sleep(Stack[-1])
0x97e: Pop(1)
0x97f: Stack[-2] = 0
0x980: GOTO 0x94f

0x981: Return(); Pop(12)

0x982: PushEmpty(float, float)
0x983: @ GetCameraFarDistance(Stack[-1])
0x984: Pop(0)
0x985: Stack[-3] = Stack[-1]
0x986: Return(); Pop(2)

0x987: PushEmpty()
0x988: @ RequestClearPath(Stack[-1])
0x989: Pop(0)
0x98a: Return(); Pop(0)

0x98b: @ Stop()
0x98c: Pop(0)
0x98d: Return(); Pop(0)

0x98e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x98f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x990: @ Stop()
0x991: Pop(0)
0x992: @ StopGroup0()
0x993: Pop(0)
0x994: Return(); Pop(0)

0x995: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x996: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x997: @ Stop()
0x998: Pop(0)
0x999: @ StopGroup0()
0x99a: Pop(0)
0x99b: Return(); Pop(0)

0x99c: Stack[-1] = (bool) 0
0x99d: Return(); Pop(0)

0x99e: PushEmpty(object, object)
0x99f: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x9a0: Pop(0)
0x9a1: Stack[-4] = Stack[-1]
0x9a2: Return(); Pop(2)

0x9a3: Stack[-1] = 0
0x9a4: PushEmpty(int, int)
0x9a5: PushEmpty(int, object)
0x9a6: Stack[-1] = Stack[-5]
0x9a7: Call2 0x1419

0x9a8: Stack[-3] = Stack[-2]
0x9a9: Pop(2)
0x9aa: Push((int) 0)
0x9ab: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ac: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9ad: Push((int) 1)
0x9ae: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9af: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9b0: PushEmpty()
0x9b1: Call2 0xa99

0x9b2: Pop(0)
0x9b3: PushEmpty(object)
0x9b4: Stack[-1] = Stack[-4]
0x9b5: Call2 0x141c

0x9b6: Pop(1)
0x9b7: Return(); Pop(2)

0x9b8: PushEmpty(int, int)
0x9b9: PushEmpty(object)
0x9ba: Stack[-1] = Stack[-4]
0x9bb: Call2 0x130d

0x9bc: Pop(1)
0x9bd: PushEmpty(int, object)
0x9be: Stack[-1] = Stack[-5]
0x9bf: Call2 0x135f

0x9c0: Stack[-3] = Stack[-2]
0x9c1: Pop(2)
0x9c2: Push((int) 0)
0x9c3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9c4: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9c5: Push((int) 1)
0x9c6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9c7: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9c8: PushEmpty()
0x9c9: Call2 0xa99

0x9ca: Pop(0)
0x9cb: PushEmpty(object)
0x9cc: Stack[-1] = Stack[-4]
0x9cd: Call2 0x1369

0x9ce: Pop(1)
0x9cf: Return(); Pop(2)

0x9d0: PushEmpty(int, int)
0x9d1: PushEmpty(bool, object, object, bool)
0x9d2: Stack[-3] = Stack[-9]
0x9d3: Stack[-2] = Stack[-8]
0x9d4: Stack[-1] = Stack[-7]
0x9d5: Call2 0x1486

0x9d6: Pop(3)
0x9d7: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9d8: PushEmpty(int, object, bool)
0x9d9: Stack[-2] = Stack[-8]
0x9da: Stack[-1] = Stack[-6]
0x9db: Call2 0x13bc

0x9dc: Stack[-4] = Stack[-3]
0x9dd: Pop(3)
0x9de: Push((int) 0)
0x9df: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9e0: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9e1: Push((int) 1)
0x9e2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9e3: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e4: PushEmpty()
0x9e5: Call2 0xa99

0x9e6: Pop(0)
0x9e7: PushEmpty(object)
0x9e8: Stack[-1] = Stack[-6]
0x9e9: Call2 0x13c3

0x9ea: Pop(1)
0x9eb: Return(); Pop(2)

0x9ec: PushEmpty(int, int)
0x9ed: PushEmpty(int, object)
0x9ee: Stack[-1] = Stack[-5]
0x9ef: Call2 0x13e6

0x9f0: Stack[-3] = Stack[-2]
0x9f1: Pop(2)
0x9f2: Push((int) 0)
0x9f3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9f4: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9f5: Push((int) 1)
0x9f6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9f7: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f8: PushEmpty()
0x9f9: Call2 0xa99

0x9fa: Pop(0)
0x9fb: PushEmpty(object)
0x9fc: Stack[-1] = Stack[-4]
0x9fd: Call2 0x13e9

0x9fe: Pop(1)
0x9ff: Return(); Pop(2)

0xa00: PushEmpty(int, int)
0xa01: PushEmpty(bool, object, string)
0xa02: Stack[-2] = Stack[-7]
0xa03: Stack[-1] = Stack[-6]
0xa04: Call2 0x12b7

0xa05: Pop(2)
0xa06: IF (Stack[-1] == 0) GOTO 0xa10; Pop(1)

0xa07: PushEmpty()
0xa08: Call2 0xa99

0xa09: Pop(0)
0xa0a: PushEmpty(object, string)
0xa0b: Stack[-2] = Stack[-6]
0xa0c: Stack[-1] = Stack[-5]
0xa0d: Call2 0x12d7

0xa0e: Pop(2)
0xa0f: GOTO 0xa24

0xa10: PushEmpty(int, string, object)
0xa11: Stack[-2] = Stack[-6]
0xa12: Stack[-1] = Stack[-7]
0xa13: Call2 0x13eb

0xa14: Stack[-4] = Stack[-3]
0xa15: Pop(3)
0xa16: Push((int) 0)
0xa17: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa18: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa19: Push((int) 1)
0xa1a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa1b: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa1c: PushEmpty()
0xa1d: Call2 0xa99

0xa1e: Pop(0)
0xa1f: PushEmpty(string, object)
0xa20: Stack[-2] = Stack[-5]
0xa21: Stack[-1] = Stack[-6]
0xa22: Call2 0x13f7

0xa23: Pop(2)
0xa24: Return(); Pop(2)

0xa25: PushEmpty()
0xa26: PushEmpty(bool, string)
0xa27: Stack[-1] = Stack[-3]
0xa28: Call2 0x131a

0xa29: Pop(1)
0xa2a: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa2b: PushEmpty()
0xa2c: Call2 0xa99

0xa2d: Pop(0)
0xa2e: PushEmpty(string)
0xa2f: Stack[-1] = Stack[-2]
0xa30: Call2 0x132a

0xa31: Pop(1)
0xa32: Return(); Pop(0)

0xa33: PushEmpty()
0xa34: Call2 0xa99

0xa35: Pop(0)
0xa36: PushEmpty()
0xa37: Call2 0x1422

0xa38: Pop(0)
0xa39: Return(); Pop(0)

0xa3a: PushEmpty()
0xa3b: PushEmpty(bool, object)
0xa3c: Stack[-1] = Stack[-3]
0xa3d: Call2 0x12f0

0xa3e: Pop(1)
0xa3f: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa40: PushEmpty()
0xa41: Call2 0xa99

0xa42: Pop(0)
0xa43: PushEmpty(object)
0xa44: Stack[-1] = Stack[-2]
0xa45: Call2 0x1307

0xa46: Pop(1)
0xa47: Return(); Pop(0)

0xa48: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xa49: @ WaitForAnimEnd()
0xa4a: Pop(0)
0xa4b: PushEmpty(bool)
0xa4c: Call2 0xf8a

0xa4d: Pop(0)
0xa4e: Pop(1); Push((bool) Stack[-1] == 0)
0xa4f: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa50: Return(); Pop(14)

0xa51: PushEmpty(int)
0xa52: Call2 0x133e

0xa53: Stack[-8] = Stack[-1]
0xa54: Pop(1)
0xa55: Stack[-6] = (int) 0
0xa56: PushEmpty(bool)
0xa57: Stack[-1] = (bool) 0
0xa58: Push((int) 5)
0xa59: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xa5a: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa5b: PushEmpty(bool)
0xa5c: Call2 0xf8a

0xa5d: Pop(0)
0xa5e: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa5f: Stack[-1] = (bool) 1
0xa60: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa61: Push((int) 3)
0xa62: @ irand(Stack[-6], Stack[-1])
0xa63: Pop(1)
0xa64: Push((int) 0)
0xa65: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa66: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa67: Push(Stack[-7])
0xa68: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa69: @ irand(Stack[-4], Stack[-7])
0xa6a: Pop(0)
0xa6b: Push("all")
0xa6c: PushEmpty(string, int)
0xa6d: Stack[-1] = Stack[-7]
0xa6e: Call2 0x1337

0xa6f: Pop(1)
0xa70: @ PlayAnimation(Stack[-2], Stack[-1])
0xa71: Pop(2)
0xa72: @ WaitForAnimEnd(Stack[-3])
0xa73: Pop(0)
0xa74: Pop(0); Push((bool) Stack[-3] == 0)
0xa75: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa76: GOTO 0xa94

0xa77: GOTO 0xa89

0xa78: Push((int) 1)
0xa79: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa7a: IF (Stack[-1] == 0) GOTO 0xa86; Pop(1)

0xa7b: Push((int) 4)
0xa7c: @ rand(Stack[-3], Stack[-1])
0xa7d: Pop(1)
0xa7e: Push((int) 1)
0xa7f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa80: @ Sleep(Stack[-1], Stack[-2])
0xa81: Pop(1)
0xa82: Pop(0); Push((bool) Stack[-1] == 0)
0xa83: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa84: GOTO 0xa94

0xa85: GOTO 0xa89

0xa86: Push(Stack[-6])
0xa87: IF (Stack[-1] == 0) GOTO 0xa89; Pop(1)

0xa88: GOTO 0xa94

0xa89: PushEmpty(bool)
0xa8a: Call2 0xa97

0xa8b: Pop(0)
0xa8c: Pop(1); Push((bool) Stack[-1] == 0)
0xa8d: IF (Stack[-1] == 0) GOTO 0xa8f; Pop(1)

0xa8e: GOTO 0xa94

0xa8f: @ ResetAAS()
0xa90: Pop(0)
0xa91: Push((int) 1)
0xa92: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xa93: GOTO 0xa56

0xa94: @ ResetAAS()
0xa95: Pop(0)
0xa96: Return(); Pop(14)

0xa97: Stack[-1] = (bool) 1
0xa98: Return(); Pop(0)

0xa99: @ StopAnimation()
0xa9a: Pop(0)
0xa9b: @ StopGroup0()
0xa9c: Pop(0)
0xa9d: Return(); Pop(0)

0xa9e: PushEmpty()
0xa9f: PushEmpty(object, bool, float)
0xaa0: Stack[-3] = Stack[-4]
0xaa1: Stack[-2] = (bool) 1
0xaa2: Stack[-1] = (float) 180.0
0xaa3: Call2 0xaac

0xaa4: Pop(3)
0xaa5: Return(); Pop(0)

0xaa6: PushEmpty()
0xaa7: Stack[-3] = (float) 0.05
0xaa8: Return(); Pop(0)

0xaa9: PushEmpty()
0xaaa: Stack[-3] = (int) 0
0xaab: Return(); Pop(0)

0xaac: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xaad: PushEmpty()
0xaae: Call2 0xb91

0xaaf: Pop(0)
0xab0: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xab1: Push("@GetAttackDistance")
0xab2: Push((int) 1)
0xab3: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xab4: IF (Stack[-1] == 0) GOTO 0xaba; Pop(1)

0xab5: @@ GetAttackDistance(Stack[-11])
0xab6: Pop(0)
0xab7: Push((int) 50)
0xab8: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xab9: GOTO 0xabb

0xaba: Stack[-11] = Stack[-23]
0xabb: Push((int) 150)
0xabc: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xabd: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xabe: Stack[-11] = (int) 150
0xabf: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xac0: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xac1: @ IsPlayerActor(Stack[-0], Stack[-8])
0xac2: Pop(0)
0xac3: Push(Stack[-8])
0xac4: IF (Stack[-1] == 0) GOTO 0xacd; Pop(1)

0xac5: Push("attack")
0xac6: @ PlayGlobalMusic(Stack[-1])
0xac7: Pop(1)
0xac8: PushEmpty(object)
0xac9: Call2 0x107d

0xaca: Pop(0)
0xacb: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xacc: Pop(1)
0xacd: Push(Stack[-24])
0xace: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xacf: Stack[-7] = (bool) 0
0xad0: GOTO 0xad2

0xad1: Stack[-7] = (bool) 1
0xad2: Push((float)400.0)
0xad3: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xad4: PushEmpty(bool)
0xad5: Stack[-1] = (bool) 0
0xad6: PushEmpty(bool, object)
0xad7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xad8: Call2 0xee9

0xad9: Pop(1)
0xada: IF (Stack[-1] == 0) GOTO 0xade; Pop(1)

0xadb: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xadc: IF (Stack[-1] == 0) GOTO 0xade; Pop(1)

0xadd: Stack[-1] = (bool) 1
0xade: IF (Stack[-1] == 0) GOTO 0xb80; Pop(1)

0xadf: PushEmpty()
0xae0: Call2 0xd2e

0xae1: Pop(0)
0xae2: @@ GetPFPosition(Stack[-10])
0xae3: Pop(0)
0xae4: @ GetPFPosition(Stack[-9])
0xae5: Pop(0)
0xae6: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xae7: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xae8: Pop(0); Push(Stack[-6] * Stack[-6]);
0xae9: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xaea: IF (Stack[-1] == 0) GOTO 0xafa; Pop(1)

0xaeb: PushEmpty(bool, object, float, float, bool, bool)
0xaec: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xaed: Stack[-4] = Stack[-17]
0xaee: Stack[-3] = (float) 3000.0
0xaef: Stack[-2] = (bool) 1
0xaf0: Stack[-1] = (bool) 0
0xaf1: Push(-6, 3); TaskCall(7)
0xaf2: Call2 0xd49

0xaf3: Pop(-6, 3); TaskReturn
0xaf4: Pop(5)
0xaf5: Pop(1); Push((bool) Stack[-1] == 0)
0xaf6: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xaf7: GOTO 0xb80

0xaf8: Stack[-7] = (bool) 0
0xaf9: GOTO 0xb7f

0xafa: Pop(0); Push(Stack[-23] * Stack[-23]);
0xafb: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xafc: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0xafd: @@ GetPFPosition(Stack[-3])
0xafe: Pop(0)
0xaff: @ CanReachByPF(Stack[-2], Stack[-3])
0xb00: Pop(0)
0xb01: Pop(0); Push((bool) Stack[-2] == 0)
0xb02: IF (Stack[-1] == 0) GOTO 0xb12; Pop(1)

0xb03: PushEmpty(bool, object, float, float, bool, bool)
0xb04: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xb05: Stack[-4] = Stack[-17]
0xb06: Stack[-3] = (float) 3000.0
0xb07: Stack[-2] = (bool) 1
0xb08: Stack[-1] = (bool) 0
0xb09: Push(-6, 3); TaskCall(7)
0xb0a: Call2 0xd49

0xb0b: Pop(-6, 3); TaskReturn
0xb0c: Pop(5)
0xb0d: Pop(1); Push((bool) Stack[-1] == 0)
0xb0e: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb0f: GOTO 0xb80

0xb10: Stack[-7] = (bool) 0
0xb11: GOTO 0xad4

0xb12: Pop(0); Push((bool) Stack[-7] == 0)
0xb13: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb14: PushEmpty(object)
0xb15: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb16: Call2 0xf7f

0xb17: Pop(1)
0xb18: Push("all")
0xb19: Push("attack_on")
0xb1a: @ PlayAnimation(Stack[-2], Stack[-1])
0xb1b: Pop(2)
0xb1c: @ WaitForAnimEnd()
0xb1d: Pop(0)
0xb1e: PushEmpty()
0xb1f: Call2 0xd2e

0xb20: Pop(0)
0xb21: @ StopAsync()
0xb22: Pop(0)
0xb23: Stack[-7] = (bool) 1
0xb24: PushEmpty(bool, object)
0xb25: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb26: Call2 0xee9

0xb27: Pop(1)
0xb28: Pop(1); Push((bool) Stack[-1] == 0)
0xb29: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb2a: GOTO 0xb80

0xb2b: @ rand(Stack[-1])
0xb2c: Pop(0)
0xb2d: PushEmpty(bool)
0xb2e: Stack[-1] = (bool) 1
0xb2f: Push((float)0.25)
0xb30: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xb31: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xb32: PushEmpty(bool)
0xb33: Call2 0xd03

0xb34: Pop(0)
0xb35: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xb36: Stack[-1] = (bool) 0
0xb37: IF (Stack[-1] == 0) GOTO 0xb48; Pop(1)

0xb38: @ Face(Stack[-0])
0xb39: Pop(0)
0xb3a: PushEmpty()
0xb3b: Call2 0xd35

0xb3c: Pop(0)
0xb3d: Push("all")
0xb3e: Push("attack_stay")
0xb3f: @ PlayAnimation(Stack[-2], Stack[-1])
0xb40: Pop(2)
0xb41: PushEmpty(bool, float)
0xb42: Stack[-1] = Stack[-25]
0xb43: Call2 0xc7f

0xb44: Pop(2)
0xb45: @ StopAsync()
0xb46: Pop(0)
0xb47: GOTO 0xb76

0xb48: @ Face(Stack[-0])
0xb49: Pop(0)
0xb4a: Push("all")
0xb4b: Push("fjump")
0xb4c: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4d: Pop(2)
0xb4e: @ WaitForAnimEnd()
0xb4f: Pop(0)
0xb50: PushEmpty()
0xb51: Call2 0xd2e

0xb52: Pop(0)
0xb53: Push(CVector(0.0, 0.0, 0.0))
0xb54: @ SetSpeed(Stack[-1])
0xb55: Pop(1)
0xb56: @ Stop()
0xb57: Pop(0)
0xb58: @ StopAsync()
0xb59: Pop(0)
0xb5a: PushEmpty(bool)
0xb5b: Call2 0xd03

0xb5c: Pop(0)
0xb5d: Pop(1); Push((bool) Stack[-1] == 0)
0xb5e: IF (Stack[-1] == 0) GOTO 0xb76; Pop(1)

0xb5f: PushEmpty(bool, object)
0xb60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb61: Call2 0xee9

0xb62: Pop(1)
0xb63: Pop(1); Push((bool) Stack[-1] == 0)
0xb64: IF (Stack[-1] == 0) GOTO 0xb66; Pop(1)

0xb65: GOTO 0xb80

0xb66: @@ GetPFPosition(Stack[-10])
0xb67: Pop(0)
0xb68: @ GetPFPosition(Stack[-9])
0xb69: Pop(0)
0xb6a: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xb6b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xb6c: Pop(0); Push(Stack[-23] * Stack[-23]);
0xb6d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xb6e: IF (Stack[-1] == 0) GOTO 0xb76; Pop(1)

0xb6f: PushEmpty(bool, float)
0xb70: Stack[-1] = Stack[-25]
0xb71: Call2 0xbdb

0xb72: Pop(1)
0xb73: Pop(1); Push((bool) Stack[-1] == 0)
0xb74: IF (Stack[-1] == 0) GOTO 0xb76; Pop(1)

0xb75: GOTO 0xb80

0xb76: GOTO 0xb7f

0xb77: PushEmpty(bool, float)
0xb78: Stack[-1] = Stack[-25]
0xb79: Call2 0xbdb

0xb7a: Pop(1)
0xb7b: Pop(1); Push((bool) Stack[-1] == 0)
0xb7c: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb7d: GOTO 0xb80

0xb7e: Stack[-7] = (bool) 1
0xb7f: GOTO 0xad4

0xb80: @ WaitForAnimEnd()
0xb81: Pop(0)
0xb82: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb83: IF (Stack[-1] == 0) GOTO 0xb85; Pop(1)

0xb84: Return(); Pop(22)

0xb85: Push("all")
0xb86: Push("attack_off")
0xb87: @ PlayAnimation(Stack[-2], Stack[-1])
0xb88: Pop(2)
0xb89: @ WaitForAnimEnd()
0xb8a: Pop(0)
0xb8b: Push(Stack[-8])
0xb8c: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb8d: Push((float)2.0)
0xb8e: @ Sleep(Stack[-1])
0xb8f: Pop(1)
0xb90: Return(); Pop(22)

0xb91: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0xb92: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xb93: Push("all")
0xb94: Push("attack_begin")
0xb95: Push((int) 1)
0xb96: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0xb97: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb98: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xb99: Pop(2)
0xb9a: Pop(0); Push((bool) Stack[-3] == 0)
0xb9b: IF (Stack[-1] == 0) GOTO 0xb9d; Pop(1)

0xb9c: GOTO 0xba0

0xb9d: Push((int) 1)
0xb9e: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xb9f: GOTO 0xb93

0xba0: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xba1: Push("attack")
0xba2: Push((int) 1)
0xba3: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xba4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xba5: @ IsExisting3DSound(Stack[-3], Stack[-1])
0xba6: Pop(1)
0xba7: Pop(0); Push((bool) Stack[-2] == 0)
0xba8: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xba9: GOTO 0xbad

0xbaa: Push((int) 1)
0xbab: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xbac: GOTO 0xba1

0xbad: Push("all")
0xbae: Push("bjump")
0xbaf: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xbb0: Pop(2)
0xbb1: Push(CvectorIndex(Stack[-1], 2))
0xbb2: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0xbb3: Return(); Pop(6)

0xbb4: PushEmpty(object, float, float, object, float, float)
0xbb5: Push((float)0.9)
0xbb6: Pop(1); Push(Stack[-9] * Stack[-1]);
0xbb7: @ GetVictim(Stack[-1], Stack[-4])
0xbb8: Pop(1)
0xbb9: @ ReportAttack(Stack[-0])
0xbba: Pop(0)
0xbbb: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xbbc: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbbd: PushEmpty(float, object, int)
0xbbe: Stack[-2] = Stack[-6]
0xbbf: Stack[-1] = Stack[-10]
0xbc0: Call2 0xaa6

0xbc1: Stack[-5] = Stack[-3]
0xbc2: Pop(3)
0xbc3: PushEmpty(float, object, float, int)
0xbc4: Stack[-3] = Stack[-7]
0xbc5: Stack[-2] = Stack[-6]
0xbc6: PushEmpty(int, object, int)
0xbc7: Stack[-2] = Stack[-10]
0xbc8: Stack[-1] = Stack[-14]
0xbc9: Call2 0xaa9

0xbca: Stack[-4] = Stack[-3]
0xbcb: Pop(3)
0xbcc: Call2 0xe77

0xbcd: Stack[-5] = Stack[-4]
0xbce: Pop(4)
0xbcf: PushEmpty(int)
0xbd0: Call2 0xd33

0xbd1: Pop(0)
0xbd2: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0xbd3: Pop(1)
0xbd4: PushEmpty(object, float)
0xbd5: Stack[-2] = Stack[-5]
0xbd6: Stack[-1] = Stack[-3]
0xbd7: Call2 0xd3a

0xbd8: Pop(2)
0xbd9: Return(); Pop(6)

0xbda: Stack[-3] = 0
0xbdb: PushEmpty(int, bool, int, string, int, bool, int, string)
0xbdc: PushEmpty()
0xbdd: Call2 0xd2e

0xbde: Pop(0)
0xbdf: @ irand(Stack[-4], Stack[-1])
0xbe0: Pop(0)
0xbe1: Push((int) 1)
0xbe2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xbe3: @ Face(Stack[-0])
0xbe4: Pop(0)
0xbe5: Push((bool) 1)
0xbe6: @ SetAttackState(Stack[-1])
0xbe7: Pop(1)
0xbe8: PushEmpty()
0xbe9: Call2 0x10cf

0xbea: Pop(0)
0xbeb: Push("all")
0xbec: Push("attack_begin")
0xbed: Pop(1); Push(Stack[-1] + Stack[-6]);
0xbee: @ PlayAnimation(Stack[-2], Stack[-1])
0xbef: Pop(2)
0xbf0: @ WaitForAnimEnd()
0xbf1: Pop(0)
0xbf2: PushEmpty()
0xbf3: Call2 0xd0e

0xbf4: Pop(0)
0xbf5: PushEmpty(bool, object)
0xbf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf7: Call2 0xee9

0xbf8: Pop(1)
0xbf9: Pop(1); Push((bool) Stack[-1] == 0)
0xbfa: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbfb: @ StopAsync()
0xbfc: Pop(0)
0xbfd: Stack[-10] = (bool) 0
0xbfe: Return(); Pop(8)

0xbff: PushEmpty(float, int)
0xc00: Stack[-2] = Stack[-11]
0xc01: Stack[-1] = Stack[-6]
0xc02: Call2 0xbb4

0xc03: Pop(2)
0xc04: Push("all")
0xc05: Push("attack_middle")
0xc06: Pop(1); Push(Stack[-1] + Stack[-6]);
0xc07: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xc08: Pop(2)
0xc09: Push(Stack[-3])
0xc0a: IF (Stack[-1] == 0) GOTO 0xc50; Pop(1)

0xc0b: PushEmpty()
0xc0c: Call2 0x10cf

0xc0d: Pop(0)
0xc0e: Push("all")
0xc0f: Push("attack_middle")
0xc10: Pop(1); Push(Stack[-1] + Stack[-6]);
0xc11: @ PlayAnimation(Stack[-2], Stack[-1])
0xc12: Pop(2)
0xc13: @ WaitForAnimEnd()
0xc14: Pop(0)
0xc15: PushEmpty()
0xc16: Call2 0xd2e

0xc17: Pop(0)
0xc18: PushEmpty(bool, object)
0xc19: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1a: Call2 0xee9

0xc1b: Pop(1)
0xc1c: Pop(1); Push((bool) Stack[-1] == 0)
0xc1d: IF (Stack[-1] == 0) GOTO 0xc22; Pop(1)

0xc1e: @ StopAsync()
0xc1f: Pop(0)
0xc20: Stack[-10] = (bool) 0
0xc21: Return(); Pop(8)

0xc22: PushEmpty(float, int)
0xc23: Stack[-2] = Stack[-11]
0xc24: Stack[-1] = Stack[-6]
0xc25: Call2 0xbb4

0xc26: Pop(2)
0xc27: Stack[-2] = (int) 1
0xc28: Push("attack_middle")
0xc29: Pop(1); Push(Stack[-1] + Stack[-5]);
0xc2a: Push("_")
0xc2b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc2c: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0xc2d: Push("all")
0xc2e: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0xc2f: Pop(1)
0xc30: Pop(0); Push((bool) Stack[-3] == 0)
0xc31: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc32: GOTO 0xc50

0xc33: PushEmpty()
0xc34: Call2 0x10cf

0xc35: Pop(0)
0xc36: Push("all")
0xc37: @ PlayAnimation(Stack[-1], Stack[-2])
0xc38: Pop(1)
0xc39: @ WaitForAnimEnd()
0xc3a: Pop(0)
0xc3b: PushEmpty()
0xc3c: Call2 0xd2e

0xc3d: Pop(0)
0xc3e: PushEmpty(bool, object)
0xc3f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc40: Call2 0xee9

0xc41: Pop(1)
0xc42: Pop(1); Push((bool) Stack[-1] == 0)
0xc43: IF (Stack[-1] == 0) GOTO 0xc48; Pop(1)

0xc44: @ StopAsync()
0xc45: Pop(0)
0xc46: Stack[-10] = (bool) 0
0xc47: Return(); Pop(8)

0xc48: PushEmpty(float, int)
0xc49: Stack[-2] = Stack[-11]
0xc4a: Stack[-1] = Stack[-6]
0xc4b: Call2 0xbb4

0xc4c: Pop(2)
0xc4d: Push((int) 1)
0xc4e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc4f: GOTO 0xc28

0xc50: Push((bool) 0)
0xc51: @ SetAttackState(Stack[-1])
0xc52: Pop(1)
0xc53: Push("all")
0xc54: Push("attack_end")
0xc55: Pop(1); Push(Stack[-1] + Stack[-6]);
0xc56: @ PlayAnimation(Stack[-2], Stack[-1])
0xc57: Pop(2)
0xc58: PushEmpty(bool)
0xc59: Call2 0xd3c

0xc5a: Pop(0)
0xc5b: IF (Stack[-1] == 0) GOTO 0xc62; Pop(1)

0xc5c: PushEmpty(bool, float)
0xc5d: Stack[-1] = (float) 0.75
0xc5e: Call2 0xc64

0xc5f: Pop(2)
0xc60: @ StopAsync()
0xc61: Pop(0)
0xc62: Stack[-10] = (bool) 1
0xc63: Return(); Pop(8)

0xc64: PushEmpty(float, bool, float, bool)
0xc65: @ rand(Stack[-2])
0xc66: Pop(0)
0xc67: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0xc68: IF (Stack[-1] == 0) GOTO 0xc78; Pop(1)

0xc69: @ IsAnimationPlaying(Stack[-1])
0xc6a: Pop(0)
0xc6b: Pop(0); Push((bool) Stack[-1] == 0)
0xc6c: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc6d: GOTO 0xc77

0xc6e: PushEmpty(bool)
0xc6f: Call2 0xcc6

0xc70: Pop(0)
0xc71: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc72: Stack[-6] = (bool) 1
0xc73: Return(); Pop(4)

0xc74: @ sync()
0xc75: Pop(0)
0xc76: GOTO 0xc69

0xc77: GOTO 0xc7d

0xc78: @ WaitForAnimEnd()
0xc79: Pop(0)
0xc7a: PushEmpty()
0xc7b: Call2 0xd2e

0xc7c: Pop(0)
0xc7d: Stack[-6] = (bool) 0
0xc7e: Return(); Pop(4)

0xc7f: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0xc80: @ IsAnimationPlaying(Stack[-5])
0xc81: Pop(0)
0xc82: Pop(0); Push((bool) Stack[-5] == 0)
0xc83: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc84: GOTO 0xca5

0xc85: PushEmpty(bool)
0xc86: Call2 0xcc6

0xc87: Pop(0)
0xc88: IF (Stack[-1] == 0) GOTO 0xc8b; Pop(1)

0xc89: Stack[-12] = (bool) 1
0xc8a: Return(); Pop(10)

0xc8b: PushEmpty(bool, object)
0xc8c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc8d: Call2 0xee9

0xc8e: Pop(1)
0xc8f: Pop(1); Push((bool) Stack[-1] == 0)
0xc90: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc91: Stack[-12] = (bool) 0
0xc92: Return(); Pop(10)

0xc93: @@ GetPFPosition(Stack[-4])
0xc94: Pop(0)
0xc95: @ GetPFPosition(Stack[-3])
0xc96: Pop(0)
0xc97: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xc98: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xc99: Pop(0); Push(Stack[-11] * Stack[-11]);
0xc9a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc9b: IF (Stack[-1] == 0) GOTO 0xca2; Pop(1)

0xc9c: PushEmpty(bool, float)
0xc9d: Stack[-1] = Stack[-13]
0xc9e: Call2 0xbdb

0xc9f: Pop(2)
0xca0: Stack[-12] = (bool) 1
0xca1: Return(); Pop(10)

0xca2: @ sync()
0xca3: Pop(0)
0xca4: GOTO 0xc80

0xca5: PushEmpty()
0xca6: Call2 0xd2e

0xca7: Pop(0)
0xca8: Stack[-12] = (bool) 0
0xca9: Return(); Pop(10)

0xcaa: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0xcab: PushEmpty(bool, object)
0xcac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcad: Call2 0xee9

0xcae: Pop(1)
0xcaf: Pop(1); Push((bool) Stack[-1] == 0)
0xcb0: IF (Stack[-1] == 0) GOTO 0xcb3; Pop(1)

0xcb1: Stack[-11] = (bool) 0
0xcb2: Return(); Pop(10)

0xcb3: PushEmpty(bool)
0xcb4: Call2 0xd03

0xcb5: Pop(0)
0xcb6: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcb7: @@ GetPFPosition(Stack[-5])
0xcb8: Pop(0)
0xcb9: @ GetPFPosition(Stack[-4])
0xcba: Pop(0)
0xcbb: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xcbc: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xcbd: @@ GetAttackDistance(Stack[-1])
0xcbe: Pop(0)
0xcbf: Push((int) 50)
0xcc0: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xcc1: Pop(0); Push(Stack[-1] * Stack[-1]);
0xcc2: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0xcc3: Return(); Pop(10)

0xcc4: Stack[-11] = (bool) 0
0xcc5: Return(); Pop(10)

0xcc6: PushEmpty(bool)
0xcc7: Stack[-1] = (bool) 0
0xcc8: PushEmpty(bool)
0xcc9: Call2 0xcaa

0xcca: Pop(0)
0xccb: IF (Stack[-1] == 0) GOTO 0xcd1; Pop(1)

0xccc: PushEmpty(bool)
0xccd: Call2 0xcd6

0xcce: Pop(0)
0xccf: IF (Stack[-1] == 0) GOTO 0xcd1; Pop(1)

0xcd0: Stack[-1] = (bool) 1
0xcd1: IF (Stack[-1] == 0) GOTO 0xcd4; Pop(1)

0xcd2: Stack[-1] = (bool) 1
0xcd3: Return(); Pop(0)

0xcd4: Stack[-1] = (bool) 0
0xcd5: Return(); Pop(0)

0xcd6: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0xcd7: @ GetScene(Stack[-5])
0xcd8: Pop(0)
0xcd9: Stack[-4] = (bool) 0
0xcda: PushEmpty(cvector, object)
0xcdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcdc: Call2 0xe57

0xcdd: Pop(1)
0xcde: Pop(1); Push(( -Stack[-1])
0xcdf: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0xce0: Pop(1)
0xce1: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0xce2: IF (Stack[-1] == 0) GOTO 0xce4; Pop(1)

0xce3: GOTO 0xd00

0xce4: @ Face(Stack[-0])
0xce5: Pop(0)
0xce6: Push("all")
0xce7: Push("bjump")
0xce8: @ PlayAnimation(Stack[-2], Stack[-1])
0xce9: Pop(2)
0xcea: @@ GetPFPosition(Stack[-2])
0xceb: Pop(0)
0xcec: @ GetPFPosition(Stack[-1])
0xced: Pop(0)
0xcee: @ WaitForAnimEnd()
0xcef: Pop(0)
0xcf0: PushEmpty()
0xcf1: Call2 0xd2e

0xcf2: Pop(0)
0xcf3: @ StopAsync()
0xcf4: Pop(0)
0xcf5: Push(CVector(0.0, 0.0, 0.0))
0xcf6: @ SetSpeed(Stack[-1])
0xcf7: Pop(1)
0xcf8: Stack[-4] = (bool) 1
0xcf9: PushEmpty(bool)
0xcfa: Call2 0xcaa

0xcfb: Pop(0)
0xcfc: Pop(1); Push((bool) Stack[-1] == 0)
0xcfd: IF (Stack[-1] == 0) GOTO 0xcff; Pop(1)

0xcfe: GOTO 0xd00

0xcff: GOTO 0xcda

0xd00: Stack[-11] = Stack[-4]
0xd01: Return(); Pop(10)

0xd02: Stack[-5] = 0
0xd03: PushEmpty(bool, bool)
0xd04: Push("IsAttacking")
0xd05: Push((int) 1)
0xd06: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0xd07: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd08: @@ IsAttacking(Stack[-1])
0xd09: Pop(0)
0xd0a: Stack[-3] = Stack[-1]
0xd0b: Return(); Pop(2)

0xd0c: Stack[-3] = (bool) 0
0xd0d: Return(); Pop(2)

0xd0e: PushEmpty(float, int, float, int)
0xd0f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xd10: IF (Stack[-1] == 0) GOTO 0xd12; Pop(1)

0xd11: Return(); Pop(4)

0xd12: Push( Stack[5 + Tasks[-1].StackPointer] )
0xd13: IF (Stack[-1] == 0) GOTO 0xd1a; Pop(1)

0xd14: Push((int) -1)
0xd15: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xd16: Push((int) 0)
0xd17: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0xd18: IF (Stack[-1] == 0) GOTO 0xd1a; Pop(1)

0xd19: Return(); Pop(4)

0xd1a: @ rand(Stack[-2])
0xd1b: Pop(0)
0xd1c: PushEmpty(float)
0xd1d: Call2 0xd40

0xd1e: Pop(0)
0xd1f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xd20: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd21: @ irand(Stack[-1], Stack[-2])
0xd22: Pop(0)
0xd23: Push((int) 1)
0xd24: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xd25: Push("attack")
0xd26: Pop(1); Push(Stack[-1] + Stack[-2]);
0xd27: @ Speak(Stack[-1])
0xd28: Pop(1)
0xd29: PushEmpty(int)
0xd2a: Call2 0xd3e

0xd2b: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0xd2c: Pop(1)
0xd2d: Return(); Pop(4)

0xd2e: PushEmpty(object)
0xd2f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd30: Call2 0x10c6

0xd31: Pop(1)
0xd32: Return(); Pop(0)

0xd33: Stack[-1] = (int) 0
0xd34: Return(); Pop(0)

0xd35: PushEmpty(string)
0xd36: Stack[-1] = "attack_stay"
0xd37: Call2 0x1054

0xd38: Pop(1)
0xd39: Return(); Pop(0)

0xd3a: PushEmpty()
0xd3b: Return(); Pop(0)

0xd3c: Stack[-1] = (bool) 1
0xd3d: Return(); Pop(0)

0xd3e: Stack[-1] = (int) 1
0xd3f: Return(); Pop(0)

0xd40: Stack[-1] = (float) 0.5
0xd41: Return(); Pop(0)

0xd42: PushEmpty()
0xd43: Call2 0xd88

0xd44: Pop(0)
0xd45: PushEmpty()
0xd46: Call2 0x1422

0xd47: Pop(0)
0xd48: Return(); Pop(0)

0xd49: PushEmpty(bool, bool, bool, bool)
0xd4a: PushEmpty(object)
0xd4b: Stack[-1] = Stack[-10]
0xd4c: Call2 0x10c6

0xd4d: Pop(1)
0xd4e: Push((int) 1)
0xd4f: Push((int) 5)
0xd50: @ SetTimer(Stack[-2], Stack[-1])
0xd51: Pop(2)
0xd52: @ CanSee(Stack[-2], Stack[-9])
0xd53: Pop(0)
0xd54: Push(Stack[-2])
0xd55: IF (Stack[-1] == 0) GOTO 0xd5c; Pop(1)

0xd56: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd57: PushEmpty(object)
0xd58: Stack[-1] = Stack[-10]
0xd59: Call2 0x1042

0xd5a: Pop(1)
0xd5b: GOTO 0xd5d

0xd5c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd5d: PushEmpty(bool, object)
0xd5e: Stack[-1] = Stack[-11]
0xd5f: Call2 0xe66

0xd60: Pop(1)
0xd61: IF (Stack[-1] == 0) GOTO 0xd67; Pop(1)

0xd62: PushEmpty(object)
0xd63: Call2 0x107d

0xd64: Pop(0)
0xd65: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0xd66: Pop(1)
0xd67: PushEmpty(bool, object, float, float, bool, bool)
0xd68: Stack[-5] = Stack[-15]
0xd69: Stack[-4] = Stack[-14]
0xd6a: Stack[-3] = Stack[-13]
0xd6b: Stack[-2] = Stack[-12]
0xd6c: Stack[-1] = Stack[-11]
0xd6d: Call2 0xdb2

0xd6e: Stack[-7] = Stack[-6]
0xd6f: Pop(6)
0xd70: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd71: IF (Stack[-1] == 0) GOTO 0xd75; Pop(1)

0xd72: Push("head")
0xd73: @ UnlookAsync(Stack[-1])
0xd74: Pop(1)
0xd75: Push((int) 1)
0xd76: @ KillTimer(Stack[-1])
0xd77: Pop(1)
0xd78: Stack[-10] = Stack[-1]
0xd79: Return(); Pop(4)

0xd7a: PushEmpty()
0xd7b: Push((int) 1)
0xd7c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7d: IF (Stack[-1] == 0) GOTO 0xd83; Pop(1)

0xd7e: PushEmpty(object)
0xd7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd80: Call2 0x10c6

0xd81: Pop(1)
0xd82: GOTO 0xd87

0xd83: PushEmpty(int)
0xd84: Stack[-1] = Stack[-2]
0xd85: Call2 0xe18

0xd86: Pop(1)
0xd87: Return(); Pop(0)

0xd88: Push((int) 1)
0xd89: @ KillTimer(Stack[-1])
0xd8a: Pop(1)
0xd8b: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd8c: IF (Stack[-1] == 0) GOTO 0xd91; Pop(1)

0xd8d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd8e: Push("head")
0xd8f: @ UnlookAsync(Stack[-1])
0xd90: Pop(1)
0xd91: PushEmpty()
0xd92: Call2 0xe2e

0xd93: Pop(0)
0xd94: Return(); Pop(0)

0xd95: PushEmpty()
0xd96: PushEmpty(bool)
0xd97: Stack[-1] = (bool) 0
0xd98: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xd99: IF (Stack[-1] == 0) GOTO 0xd9d; Pop(1)

0xd9a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xd9b: IF (Stack[-1] == 0) GOTO 0xd9d; Pop(1)

0xd9c: Stack[-1] = (bool) 1
0xd9d: IF (Stack[-1] == 0) GOTO 0xda3; Pop(1)

0xd9e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd9f: PushEmpty(object)
0xda0: Stack[-1] = Stack[-2]
0xda1: Call2 0x1042

0xda2: Pop(1)
0xda3: Return(); Pop(0)

0xda4: PushEmpty()
0xda5: PushEmpty(bool)
0xda6: Stack[-1] = (bool) 0
0xda7: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xda8: IF (Stack[-1] == 0) GOTO 0xdac; Pop(1)

0xda9: Push( Stack[2 + Tasks[-1].StackPointer] )
0xdaa: IF (Stack[-1] == 0) GOTO 0xdac; Pop(1)

0xdab: Stack[-1] = (bool) 1
0xdac: IF (Stack[-1] == 0) GOTO 0xdb1; Pop(1)

0xdad: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xdae: Push("head")
0xdaf: @ UnlookAsync(Stack[-1])
0xdb0: Pop(1)
0xdb1: Return(); Pop(0)

0xdb2: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0xdb3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xdb4: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0xdb5: Stack[-7] = Stack[-17]
0xdb6: PushEmpty(bool, object)
0xdb7: Stack[-1] = Stack[-23]
0xdb8: Call2 0xe3e

0xdb9: Pop(1)
0xdba: Pop(1); Push((bool) Stack[-1] == 0)
0xdbb: IF (Stack[-1] == 0) GOTO 0xdbe; Pop(1)

0xdbc: Stack[-22] = (bool) 0
0xdbd: Return(); Pop(16)

0xdbe: @@ GetPosition(Stack[-5])
0xdbf: Pop(0)
0xdc0: @ GetPosition(Stack[-4])
0xdc1: Pop(0)
0xdc2: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xdc3: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xdc4: PushEmpty(bool)
0xdc5: Stack[-1] = (bool) 0
0xdc6: Push((int) 0)
0xdc7: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0xdc8: IF (Stack[-1] == 0) GOTO 0xdcd; Pop(1)

0xdc9: Pop(0); Push(Stack[-20] * Stack[-20]);
0xdca: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xdcb: IF (Stack[-1] == 0) GOTO 0xdcd; Pop(1)

0xdcc: Stack[-1] = (bool) 1
0xdcd: IF (Stack[-1] == 0) GOTO 0xdd2; Pop(1)

0xdce: @ Stop()
0xdcf: Pop(0)
0xdd0: Stack[-22] = (bool) 0
0xdd1: Return(); Pop(16)

0xdd2: Pop(0); Push(Stack[-20] * Stack[-20]);
0xdd3: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xdd4: IF (Stack[-1] == 0) GOTO 0xe10; Pop(1)

0xdd5: @@ GetPFPosition(Stack[-5])
0xdd6: Pop(0)
0xdd7: @ FindPathTo(Stack[-1], Stack[-5])
0xdd8: Pop(0)
0xdd9: Pop(0); Push(( Stack[-1] != 0 )
0xdda: IF (Stack[-1] == 0) GOTO 0xddd; Pop(1)

0xddb: Stack[-6] = Stack[-1]
0xddc: Stack[-1] = 0
0xddd: Pop(0); Push(( Stack[-6] != 0 )
0xdde: IF (Stack[-1] == 0) GOTO 0xdfe; Pop(1)

0xddf: Push(Stack[-7])
0xde0: IF (Stack[-1] == 0) GOTO 0xde7; Pop(1)

0xde1: Stack[-7] = (bool) 0
0xde2: @ RotatePath(Stack[-6], Stack[-8])
0xde3: Pop(0)
0xde4: Pop(0); Push((bool) Stack[-8] == 0)
0xde5: IF (Stack[-1] == 0) GOTO 0xde7; Pop(1)

0xde6: GOTO 0xe16

0xde7: Push((int) 0)
0xde8: Push((float)0.3)
0xde9: @ SetTimer(Stack[-2], Stack[-1])
0xdea: Pop(2)
0xdeb: PushEmpty(string)
0xdec: Call2 0xe45

0xded: Pop(0)
0xdee: PushEmpty(string)
0xdef: Call2 0xe47

0xdf0: Pop(0)
0xdf1: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0xdf2: Pop(2)
0xdf3: Pop(0); Push((bool) Stack[-8] == 0)
0xdf4: IF (Stack[-1] == 0) GOTO 0xdfc; Pop(1)

0xdf5: Push( Stack[0 + Tasks[-1].StackPointer] )
0xdf6: IF (Stack[-1] == 0) GOTO 0xdfa; Pop(1)

0xdf7: Stack[-6] = 0
0xdf8: GOTO 0xe16

0xdf9: GOTO 0xdfb

0xdfa: GOTO 0xe15

0xdfb: GOTO 0xdfd

0xdfc: Stack[-6] = 0
0xdfd: GOTO 0xe0e

0xdfe: Push((int) 0)
0xdff: @ KillTimer(Stack[-1])
0xe00: Pop(1)
0xe01: Push((float)0.5)
0xe02: @ Sleep(Stack[-1], Stack[-9])
0xe03: Pop(1)
0xe04: Pop(0); Push((bool) Stack[-8] == 0)
0xe05: IF (Stack[-1] == 0) GOTO 0xe0a; Pop(1)

0xe06: Push( Stack[0 + Tasks[-1].StackPointer] )
0xe07: IF (Stack[-1] == 0) GOTO 0xe0a; Pop(1)

0xe08: Stack[-6] = 0
0xe09: GOTO 0xe16

0xe0a: Push((int) 0)
0xe0b: Push((float)0.3)
0xe0c: @ SetTimer(Stack[-2], Stack[-1])
0xe0d: Pop(2)
0xe0e: Stack[-1] = 0
0xe0f: GOTO 0xe14

0xe10: Push((int) 0)
0xe11: @ KillTimer(Stack[-1])
0xe12: Pop(1)
0xe13: GOTO 0xe16

0xe14: Stack[-6] = 0
0xe15: GOTO 0xdb6

0xe16: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xe17: Return(); Pop(16)

0xe18: PushEmpty()
0xe19: Push((int) 0)
0xe1a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xe1b: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xe1c: Return(); Pop(0)

0xe1d: PushEmpty(bool, object)
0xe1e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe1f: Call2 0xe3e

0xe20: Pop(1)
0xe21: Pop(1); Push((bool) Stack[-1] == 0)
0xe22: IF (Stack[-1] == 0) GOTO 0xe24; Pop(1)

0xe23: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xe24: Push((int) 0)
0xe25: @ KillTimer(Stack[-1])
0xe26: Pop(1)
0xe27: @ Stop()
0xe28: Pop(0)
0xe29: Return(); Pop(0)

0xe2a: PushEmpty()
0xe2b: @ RequestClearPath(Stack[-1])
0xe2c: Pop(0)
0xe2d: Return(); Pop(0)

0xe2e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xe2f: Push((int) 0)
0xe30: @ KillTimer(Stack[-1])
0xe31: Pop(1)
0xe32: @ Stop()
0xe33: Pop(0)
0xe34: Return(); Pop(0)

0xe35: PushEmpty()
0xe36: PushEmpty()
0xe37: Call2 0xd88

0xe38: Pop(0)
0xe39: PushEmpty(object)
0xe3a: Stack[-1] = Stack[-2]
0xe3b: Call2 0x129f

0xe3c: Pop(1)
0xe3d: Return(); Pop(0)

0xe3e: PushEmpty()
0xe3f: PushEmpty(bool, object)
0xe40: Stack[-1] = Stack[-3]
0xe41: Call2 0xee9

0xe42: Stack[-4] = Stack[-2]
0xe43: Pop(2)
0xe44: Return(); Pop(0)

0xe45: Stack[-1] = "walk"
0xe46: Return(); Pop(0)

0xe47: Stack[-1] = "run"
0xe48: Return(); Pop(0)

0xe49: PushEmpty()
0xe4a: Push((int) 2)
0xe4b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe4c: IF (Stack[-1] == 0) GOTO 0xe50; Pop(1)

0xe4d: Stack[-2] = "fire"
0xe4e: Return(); Pop(0)

0xe4f: GOTO 0xe55

0xe50: Push((int) 1)
0xe51: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe52: IF (Stack[-1] == 0) GOTO 0xe55; Pop(1)

0xe53: Stack[-2] = "bullet"
0xe54: Return(); Pop(0)

0xe55: Stack[-2] = "phys"
0xe56: Return(); Pop(0)

0xe57: PushEmpty(cvector, cvector, cvector, cvector)
0xe58: @ GetPosition(Stack[-2])
0xe59: Pop(0)
0xe5a: @@ GetPosition(Stack[-1])
0xe5b: Pop(0)
0xe5c: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xe5d: Return(); Pop(4)

0xe5e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xe5f: @ GetPosition(Stack[-3])
0xe60: Pop(0)
0xe61: @@ GetPosition(Stack[-2])
0xe62: Pop(0)
0xe63: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xe64: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xe65: Return(); Pop(6)

0xe66: PushEmpty(bool, bool)
0xe67: @ IsPlayerActor(Stack[-3], Stack[-1])
0xe68: Pop(0)
0xe69: Stack[-4] = Stack[-1]
0xe6a: Return(); Pop(2)

0xe6b: PushEmpty(bool, bool)
0xe6c: Push("HasProperty")
0xe6d: Push((int) 2)
0xe6e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xe6f: Pop(1); Push((bool) Stack[-1] == 0)
0xe70: IF (Stack[-1] == 0) GOTO 0xe73; Pop(1)

0xe71: Stack[-5] = (bool) 0
0xe72: Return(); Pop(2)

0xe73: @@ HasProperty(Stack[-3], Stack[-1])
0xe74: Pop(0)
0xe75: Stack[-5] = Stack[-1]
0xe76: Return(); Pop(2)

0xe77: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xe78: PushEmpty(bool, object, string)
0xe79: Stack[-2] = Stack[-18]
0xe7a: Stack[-1] = "health"
0xe7b: Call2 0xe6b

0xe7c: Pop(2)
0xe7d: Pop(1); Push((bool) Stack[-1] == 0)
0xe7e: IF (Stack[-1] == 0) GOTO 0xe81; Pop(1)

0xe7f: Stack[-16] = (float) 0.0
0xe80: Return(); Pop(12)

0xe81: PushEmpty(bool, object, string)
0xe82: Stack[-2] = Stack[-18]
0xe83: Stack[-1] = "armor"
0xe84: Call2 0xe6b

0xe85: Pop(2)
0xe86: Pop(1); Push((bool) Stack[-1] == 0)
0xe87: IF (Stack[-1] == 0) GOTO 0xe8a; Pop(1)

0xe88: Stack[-6] = (int) 0
0xe89: GOTO 0xe8d

0xe8a: Push("armor")
0xe8b: @@ GetProperty(Stack[-1], Stack[-7])
0xe8c: Pop(1)
0xe8d: Push("armor_")
0xe8e: PushEmpty(string, int)
0xe8f: Stack[-1] = Stack[-16]
0xe90: Call2 0xe49

0xe91: Pop(1)
0xe92: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xe93: PushEmpty(bool, object, string)
0xe94: Stack[-2] = Stack[-18]
0xe95: Stack[-1] = Stack[-8]
0xe96: Call2 0xe6b

0xe97: Pop(2)
0xe98: Pop(1); Push((bool) Stack[-1] == 0)
0xe99: IF (Stack[-1] == 0) GOTO 0xe9c; Pop(1)

0xe9a: Stack[-4] = (int) 0
0xe9b: GOTO 0xe9e

0xe9c: @@ GetProperty(Stack[-5], Stack[-4])
0xe9d: Pop(0)
0xe9e: PushEmpty(float, float, float)
0xe9f: Pop(0); Push(Stack[-9] + Stack[-7]);
0xea0: Push((float)100.0)
0xea1: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xea2: Stack[-1] = (int) 1
0xea3: Call2 0x108d

0xea4: Stack[-6] = Stack[-3]
0xea5: Pop(3)
0xea6: Push("health")
0xea7: @@ GetProperty(Stack[-1], Stack[-3])
0xea8: Pop(1)
0xea9: Push((int) 1)
0xeaa: Pop(1); Push(Stack[-1] - Stack[-4]);
0xeab: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xeac: Push("health")
0xead: PushEmpty(float, float, float, float)
0xeae: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xeaf: Stack[-2] = (int) 0
0xeb0: Stack[-1] = (int) 1
0xeb1: Call2 0x1094

0xeb2: Pop(3)
0xeb3: @@ SetProperty(Stack[-2], Stack[-1])
0xeb4: Pop(2)
0xeb5: PushEmpty(bool, object)
0xeb6: Stack[-1] = Stack[-17]
0xeb7: Call2 0xe66

0xeb8: Pop(1)
0xeb9: IF (Stack[-1] == 0) GOTO 0xebe; Pop(1)

0xeba: PushEmpty(float)
0xebb: Stack[-1] = -Stack[-2]; Pop(0);
0xebc: Call2 0x10a4

0xebd: Pop(1)
0xebe: Stack[-16] = Stack[-1]
0xebf: Return(); Pop(12)

0xec0: PushEmpty(bool, bool)
0xec1: @@ IsDead(Stack[-1])
0xec2: Pop(0)
0xec3: Stack[-4] = Stack[-1]
0xec4: Return(); Pop(2)

0xec5: PushEmpty(object, object, object, object)
0xec6: Pop(0); Push((bool) Stack[-5] == 0)
0xec7: IF (Stack[-1] == 0) GOTO 0xeca; Pop(1)

0xec8: Stack[-6] = (bool) 0
0xec9: Return(); Pop(4)

0xeca: PushEmpty(bool)
0xecb: Stack[-1] = (bool) 0
0xecc: Push("IsDead")
0xecd: Push((int) 1)
0xece: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xecf: IF (Stack[-1] == 0) GOTO 0xed6; Pop(1)

0xed0: PushEmpty(bool, object)
0xed1: Stack[-1] = Stack[-8]
0xed2: Call2 0xec0

0xed3: Pop(1)
0xed4: IF (Stack[-1] == 0) GOTO 0xed6; Pop(1)

0xed5: Stack[-1] = (bool) 1
0xed6: IF (Stack[-1] == 0) GOTO 0xed9; Pop(1)

0xed7: Stack[-6] = (bool) 0
0xed8: Return(); Pop(4)

0xed9: @ GetScene(Stack[-2])
0xeda: Pop(0)
0xedb: Pop(0); Push((bool) Stack[-2] == 0)
0xedc: IF (Stack[-1] == 0) GOTO 0xedf; Pop(1)

0xedd: Stack[-6] = (bool) 0
0xede: Return(); Pop(4)

0xedf: @@ GetScene(Stack[-1])
0xee0: Pop(0)
0xee1: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xee2: IF (Stack[-1] == 0) GOTO 0xee5; Pop(1)

0xee3: Stack[-6] = (bool) 0
0xee4: Return(); Pop(4)

0xee5: Stack[-6] = (bool) 1
0xee6: Return(); Pop(4)

0xee7: Stack[-1] = 0
0xee8: Stack[-2] = 0
0xee9: PushEmpty(int, int)
0xeea: PushEmpty(bool, object)
0xeeb: Stack[-1] = Stack[-5]
0xeec: Call2 0xec5

0xeed: Pop(1)
0xeee: Pop(1); Push((bool) Stack[-1] == 0)
0xeef: IF (Stack[-1] == 0) GOTO 0xef2; Pop(1)

0xef0: Stack[-4] = (bool) 0
0xef1: Return(); Pop(2)

0xef2: PushEmpty(bool, object, string)
0xef3: Stack[-2] = Stack[-6]
0xef4: Stack[-1] = "noaccess"
0xef5: Call2 0xe6b

0xef6: Pop(2)
0xef7: Pop(1); Push((bool) Stack[-1] == 0)
0xef8: IF (Stack[-1] == 0) GOTO 0xefb; Pop(1)

0xef9: Stack[-4] = (bool) 1
0xefa: Return(); Pop(2)

0xefb: Push("noaccess")
0xefc: @@ GetProperty(Stack[-1], Stack[-2])
0xefd: Pop(1)
0xefe: Push((int) 0)
0xeff: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xf00: Return(); Pop(2)

0xf01: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xf02: Pop(0); Push((bool) Stack[-15] == 0)
0xf03: IF (Stack[-1] == 0) GOTO 0xf05; Pop(1)

0xf04: Return(); Pop(14)

0xf05: @ IsDead(Stack[-7])
0xf06: Pop(0)
0xf07: Push(Stack[-7])
0xf08: IF (Stack[-1] == 0) GOTO 0xf0a; Pop(1)

0xf09: Return(); Pop(14)

0xf0a: @ GetSecondaryAnimationType(Stack[-6])
0xf0b: Pop(0)
0xf0c: Push((int) 0)
0xf0d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xf0e: IF (Stack[-1] == 0) GOTO 0xf10; Pop(1)

0xf0f: Return(); Pop(14)

0xf10: @@ GetPosition(Stack[-5])
0xf11: Pop(0)
0xf12: @ GetPosition(Stack[-4])
0xf13: Pop(0)
0xf14: @ GetDirection(Stack[-3])
0xf15: Pop(0)
0xf16: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xf17: Push(CvectorIndex(Stack[-2], 0))
0xf18: Push(CvectorIndex(Stack[-4], 0))
0xf19: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf1a: Push(CvectorIndex(Stack[-3], 2))
0xf1b: Push(CvectorIndex(Stack[-5], 2))
0xf1c: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf1d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf1e: Push((int) 0)
0xf1f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf20: IF (Stack[-1] == 0) GOTO 0xf23; Pop(1)

0xf21: Stack[-1] = "fhit"
0xf22: GOTO 0xf24

0xf23: Stack[-1] = "bhit"
0xf24: Push("hit_react")
0xf25: Push("1")
0xf26: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf27: Push("2")
0xf28: Pop(1); Push(Stack[-4] + Stack[-1]);
0xf29: Push((int) -10)
0xf2a: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf2b: Pop(4)
0xf2c: Return(); Pop(14)

0xf2d: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xf2e: PushEmpty(bool)
0xf2f: Stack[-1] = (bool) 0
0xf30: PushEmpty(bool)
0xf31: Stack[-1] = (bool) 0
0xf32: Push(Stack[-23])
0xf33: IF (Stack[-1] == 0) GOTO 0xf38; Pop(1)

0xf34: Push((int) 4)
0xf35: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xf36: IF (Stack[-1] == 0) GOTO 0xf38; Pop(1)

0xf37: Stack[-1] = (bool) 1
0xf38: IF (Stack[-1] == 0) GOTO 0xf3d; Pop(1)

0xf39: Push((int) 5)
0xf3a: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xf3b: IF (Stack[-1] == 0) GOTO 0xf3d; Pop(1)

0xf3c: Stack[-1] = (bool) 1
0xf3d: IF (Stack[-1] == 0) GOTO 0xf6c; Pop(1)

0xf3e: PushEmpty(cvector, cvector)
0xf3f: PushEmpty(cvector, object)
0xf40: Stack[-1] = Stack[-25]
0xf41: Call2 0xe57

0xf42: Stack[-3] = Stack[-2]
0xf43: Pop(2)
0xf44: Call2 0x1083

0xf45: Stack[-11] = Stack[-2]
0xf46: Pop(2)
0xf47: @ CreateVectorVector(Stack[-8])
0xf48: Pop(0)
0xf49: Stack[-7] = (int) 1
0xf4a: Push("hit")
0xf4b: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf4c: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xf4d: Pop(1)
0xf4e: Pop(0); Push((bool) Stack[-6] == 0)
0xf4f: IF (Stack[-1] == 0) GOTO 0xf51; Pop(1)

0xf50: GOTO 0xf5a

0xf51: Pop(0); Push(Stack[-4] | Stack[-9]);
0xf52: Push((float)0.70711)
0xf53: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf54: IF (Stack[-1] == 0) GOTO 0xf57; Pop(1)

0xf55: @@ add(Stack[-5])
0xf56: Pop(0)
0xf57: Push((int) 1)
0xf58: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xf59: GOTO 0xf4a

0xf5a: @@ size(Stack[-3])
0xf5b: Pop(0)
0xf5c: Push(Stack[-3])
0xf5d: IF (Stack[-1] == 0) GOTO 0xf6b; Pop(1)

0xf5e: @ irand(Stack[-2], Stack[-3])
0xf5f: Pop(0)
0xf60: @@ get(Stack[-1], Stack[-2])
0xf61: Pop(0)
0xf62: PushEmpty(object, int, float, cvector, cvector)
0xf63: Stack[-5] = Stack[-26]
0xf64: Stack[-4] = Stack[-25]
0xf65: Stack[-3] = Stack[-24]
0xf66: Stack[-2] = Stack[-6]
0xf67: Stack[-1] = -Stack[-14]; Pop(0);
0xf68: Call2 0xf71

0xf69: Pop(5)
0xf6a: Return(); Pop(18)

0xf6b: Stack[-8] = 0
0xf6c: PushEmpty(object)
0xf6d: Stack[-1] = Stack[-22]
0xf6e: Call2 0xf01

0xf6f: Pop(1)
0xf70: Return(); Pop(18)

0xf71: PushEmpty(object, object, object, object)
0xf72: @ GetScene(Stack[-2])
0xf73: Pop(0)
0xf74: Push("scripted")
0xf75: Push("blood_dir.xml")
0xf76: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xf77: Pop(2)
0xf78: PushEmpty(object)
0xf79: Stack[-1] = Stack[-10]
0xf7a: Call2 0xf01

0xf7b: Pop(1)
0xf7c: Return(); Pop(4)

0xf7d: Stack[-1] = 0
0xf7e: Stack[-2] = 0
0xf7f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xf80: @@ GetPosition(Stack[-3])
0xf81: Pop(0)
0xf82: @ GetPosition(Stack[-2])
0xf83: Pop(0)
0xf84: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xf85: Push(CvectorIndex(Stack[-1], 0))
0xf86: Push(CvectorIndex(Stack[-2], 2))
0xf87: @ RotateAsync(Stack[-2], Stack[-1])
0xf88: Pop(2)
0xf89: Return(); Pop(6)

0xf8a: PushEmpty(bool, bool)
0xf8b: @ IsLoaded(Stack[-1])
0xf8c: Pop(0)
0xf8d: Stack[-3] = Stack[-1]
0xf8e: Return(); Pop(2)

0xf8f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xf90: @@ GetPosition(Stack[-8])
0xf91: Pop(0)
0xf92: @@ GetEyesHeight(Stack[-9])
0xf93: Pop(0)
0xf94: Push(CvectorIndex(Stack[-8], 1))
0xf95: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf96: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xf97: @ GetPosition(Stack[-7])
0xf98: Pop(0)
0xf99: @ GetEyesHeight(Stack[-9])
0xf9a: Pop(0)
0xf9b: Push(CvectorIndex(Stack[-7], 1))
0xf9c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf9d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xf9e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xf9f: Push(CvectorIndex(Stack[-6], 1))
0xfa0: Stack[-1] = (int) 0
0xfa1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xfa2: Pop(0); Push(Stack[-6] | Stack[-6]);
0xfa3: Pop(1); Push(Sqrt(Stack[-1]))
0xfa4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xfa5: Stack[-5] = -Stack[-6]; Pop(0);
0xfa6: Pop(0); Push(Stack[-6] * Stack[-19]);
0xfa7: PushEmpty(cvector, cvector)
0xfa8: Push(CVector(0.0, 1.0, 0.0))
0xfa9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xfaa: Call2 0x1083

0xfab: Pop(1)
0xfac: Push((int) 25)
0xfad: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfae: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfaf: Push(CVector(0.0, 10.0, 0.0))
0xfb0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xfb1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xfb2: @ IsOverrideActive(Stack[-2])
0xfb3: Pop(0)
0xfb4: Push(Stack[-2])
0xfb5: IF (Stack[-1] == 0) GOTO 0xfb8; Pop(1)

0xfb6: Stack[-21] = (bool) 0
0xfb7: Return(); Pop(18)

0xfb8: @ StopWorld()
0xfb9: Pop(0)
0xfba: Push((bool) 1)
0xfbb: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xfbc: Pop(1)
0xfbd: Push(CvectorIndex(Stack[-4], 0))
0xfbe: Push(CvectorIndex(Stack[-5], 2))
0xfbf: @ Rotate(Stack[-2], Stack[-1])
0xfc0: Pop(2)
0xfc1: PushEmpty(bool)
0xfc2: Call2 0x143f

0xfc3: Pop(0)
0xfc4: IF (Stack[-1] == 0) GOTO 0xfc6; Pop(1)

0xfc5: GOTO 0xfce

0xfc6: Push("head")
0xfc7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xfc8: Pop(1)
0xfc9: Push(Stack[-1])
0xfca: IF (Stack[-1] == 0) GOTO 0xfce; Pop(1)

0xfcb: Push("head")
0xfcc: @ LookAsyncCamera(Stack[-1])
0xfcd: Pop(1)
0xfce: @ CameraWaitForPlayFinish()
0xfcf: Pop(0)
0xfd0: @ ResumeWorld()
0xfd1: Pop(0)
0xfd2: Stack[-21] = (bool) 1
0xfd3: Return(); Pop(18)

0xfd4: PushEmpty(bool, bool)
0xfd5: Push((bool) 1)
0xfd6: @ CameraSwitchToNormal(Stack[-1])
0xfd7: Pop(1)
0xfd8: PushEmpty(bool)
0xfd9: Call2 0x143f

0xfda: Pop(0)
0xfdb: IF (Stack[-1] == 0) GOTO 0xfdd; Pop(1)

0xfdc: GOTO 0xfe5

0xfdd: Push("head")
0xfde: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xfdf: Pop(1)
0xfe0: Push(Stack[-1])
0xfe1: IF (Stack[-1] == 0) GOTO 0xfe5; Pop(1)

0xfe2: Push("head")
0xfe3: @ UnlookAsync(Stack[-1])
0xfe4: Pop(1)
0xfe5: Return(); Pop(2)

0xfe6: PushEmpty()
0xfe7: PushEmpty(bool, object, float)
0xfe8: Stack[-2] = Stack[-4]
0xfe9: Stack[-1] = (int) 70
0xfea: Call2 0xfee

0xfeb: Stack[-5] = Stack[-3]
0xfec: Pop(3)
0xfed: Return(); Pop(0)

0xfee: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xfef: @@ GetPosition(Stack[-7])
0xff0: Pop(0)
0xff1: @@ GetEyesHeight(Stack[-8])
0xff2: Pop(0)
0xff3: Push(CvectorIndex(Stack[-7], 1))
0xff4: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xff5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xff6: @ GetPosition(Stack[-6])
0xff7: Pop(0)
0xff8: @ GetEyesHeight(Stack[-8])
0xff9: Pop(0)
0xffa: Push(CvectorIndex(Stack[-6], 1))
0xffb: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xffc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xffd: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xffe: Push(CvectorIndex(Stack[-5], 1))
0xfff: Stack[-1] = (int) 0
0x1000: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1001: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1002: Pop(1); Push(Sqrt(Stack[-1]))
0x1003: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1004: Stack[-4] = -Stack[-5]; Pop(0);
0x1005: Pop(0); Push(Stack[-5] * Stack[-17]);
0x1006: Push(CVector(0.0, 10.0, 0.0))
0x1007: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1008: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1009: @ IsOverrideActive(Stack[-1])
0x100a: Pop(0)
0x100b: Push(Stack[-1])
0x100c: IF (Stack[-1] == 0) GOTO 0x100f; Pop(1)

0x100d: Stack[-19] = (bool) 0
0x100e: Return(); Pop(16)

0x100f: @ StopWorld()
0x1010: Pop(0)
0x1011: Push((bool) 1)
0x1012: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0x1013: Pop(1)
0x1014: Push(CvectorIndex(Stack[-3], 0))
0x1015: Push(CvectorIndex(Stack[-4], 2))
0x1016: @ Rotate(Stack[-2], Stack[-1])
0x1017: Pop(2)
0x1018: @ CameraWaitForPlayFinish()
0x1019: Pop(0)
0x101a: @ ResumeWorld()
0x101b: Pop(0)
0x101c: Stack[-19] = (bool) 1
0x101d: Return(); Pop(16)

0x101e: PushEmpty()
0x101f: Push((bool) 1)
0x1020: @ CameraSwitchToNormal(Stack[-1])
0x1021: Pop(1)
0x1022: Return(); Pop(0)

0x1023: PushEmpty(bool, float, float, bool, float, float)
0x1024: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1025: Pop(0)
0x1026: Push(Stack[-3])
0x1027: IF (Stack[-1] == 0) GOTO 0x102e; Pop(1)

0x1028: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1029: Pop(0)
0x102a: Push((bool) 0)
0x102b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x102c: Pop(1)
0x102d: GOTO 0x1032

0x102e: Push("Can't find lsh animation : ")
0x102f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1030: @ Trace(Stack[-1])
0x1031: Pop(1)
0x1032: Return(); Pop(6)

0x1033: PushEmpty(bool, float, float, bool, float, float)
0x1034: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1035: Pop(0)
0x1036: Push(Stack[-3])
0x1037: IF (Stack[-1] == 0) GOTO 0x103d; Pop(1)

0x1038: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1039: Pop(0)
0x103a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x103b: Pop(0)
0x103c: GOTO 0x1041

0x103d: Push("Can't find lsh animation : ")
0x103e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x103f: @ Trace(Stack[-1])
0x1040: Pop(1)
0x1041: Return(); Pop(6)

0x1042: PushEmpty(float, cvector, float, cvector)
0x1043: @@ GetEyesHeight(Stack[-2])
0x1044: Pop(0)
0x1045: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x1046: Push(CvectorIndex(Stack[-1], 1))
0x1047: Stack[-1] = Stack[-3]
0x1048: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1049: Push("head")
0x104a: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x104b: Pop(1)
0x104c: Return(); Pop(4)

0x104d: PushEmpty(bool)
0x104e: Call2 0x143f

0x104f: Pop(0)
0x1050: IF (Stack[-1] == 0) GOTO 0x1053; Pop(1)

0x1051: @ lshStopSpeech()
0x1052: Pop(0)
0x1053: Return(); Pop(0)

0x1054: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x1055: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x1056: Pop(0)
0x1057: Pop(0); Push((bool) Stack[-8] == 0)
0x1058: IF (Stack[-1] == 0) GOTO 0x106d; Pop(1)

0x1059: Stack[-7] = (int) 0
0x105a: Push((int) 1)
0x105b: Pop(1); Push(Stack[-8] + Stack[-1]);
0x105c: Pop(1); Push(Stack[-18] + Stack[-1]);
0x105d: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x105e: Pop(1)
0x105f: Pop(0); Push((bool) Stack[-6] == 0)
0x1060: IF (Stack[-1] == 0) GOTO 0x1062; Pop(1)

0x1061: GOTO 0x1065

0x1062: Push((int) 1)
0x1063: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x1064: GOTO 0x105a

0x1065: Pop(0); Push((bool) Stack[-7] == 0)
0x1066: IF (Stack[-1] == 0) GOTO 0x1068; Pop(1)

0x1067: Return(); Pop(16)

0x1068: @ irand(Stack[-5], Stack[-7])
0x1069: Pop(0)
0x106a: Push((int) 1)
0x106b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x106c: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x106d: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x106e: Pop(0)
0x106f: Push(Stack[-4])
0x1070: IF (Stack[-1] == 0) GOTO 0x107c; Pop(1)

0x1071: @ GetEyesHeight(Stack[-3])
0x1072: Pop(0)
0x1073: @ GetDirection(Stack[-2])
0x1074: Pop(0)
0x1075: Push((int) 50)
0x1076: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x1077: Push(CvectorIndex(Stack[-1], 1))
0x1078: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x1079: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x107a: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x107b: Pop(0)
0x107c: Return(); Pop(16)

0x107d: PushEmpty(object, object)
0x107e: @ self(Stack[-1])
0x107f: Pop(0)
0x1080: Stack[-3] = Stack[-1]
0x1081: Return(); Pop(2)

0x1082: Stack[-1] = 0
0x1083: PushEmpty(float, float)
0x1084: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1085: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1086: Push((float)0.0)
0x1087: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1088: IF (Stack[-1] == 0) GOTO 0x108b; Pop(1)

0x1089: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x108a: Return(); Pop(2)

0x108b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x108c: Return(); Pop(2)

0x108d: PushEmpty()
0x108e: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x108f: IF (Stack[-1] == 0) GOTO 0x1092; Pop(1)

0x1090: Stack[-3] = Stack[-2]
0x1091: GOTO 0x1093

0x1092: Stack[-3] = Stack[-1]
0x1093: Return(); Pop(0)

0x1094: PushEmpty()
0x1095: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1096: IF (Stack[-1] == 0) GOTO 0x1099; Pop(1)

0x1097: Stack[-4] = Stack[-2]
0x1098: Return(); Pop(0)

0x1099: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x109a: IF (Stack[-1] == 0) GOTO 0x109d; Pop(1)

0x109b: Stack[-4] = Stack[-1]
0x109c: Return(); Pop(0)

0x109d: Stack[-4] = Stack[-3]
0x109e: Return(); Pop(0)

0x109f: PushEmpty(int, int)
0x10a0: @ GetVariable(Stack[-3], Stack[-1])
0x10a1: Pop(0)
0x10a2: Stack[-4] = Stack[-1]
0x10a3: Return(); Pop(2)

0x10a4: PushEmpty(object, object)
0x10a5: @ CreateFloatVector(Stack[-1])
0x10a6: Pop(0)
0x10a7: @@ add(Stack[-3])
0x10a8: Pop(0)
0x10a9: Push((int) 0)
0x10aa: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x10ab: IF (Stack[-1] == 0) GOTO 0x10b0; Pop(1)

0x10ac: Push((float)0.7)
0x10ad: Push((int) 500)
0x10ae: @ RumblePlay(Stack[-2], Stack[-1])
0x10af: Pop(2)
0x10b0: Push((int) 15)
0x10b1: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x10b2: Pop(1)
0x10b3: Return(); Pop(2)

0x10b4: Stack[-1] = 0
0x10b5: PushEmpty(float, float)
0x10b6: @ GetGameTime(Stack[-1])
0x10b7: Pop(0)
0x10b8: Push((int) 1)
0x10b9: PushEmpty(int)
0x10ba: Push((int) 24)
0x10bb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x10bc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x10bd: Return(); Pop(2)

0x10be: PushEmpty(float, float)
0x10bf: @ GetGameTime(Stack[-1])
0x10c0: Pop(0)
0x10c1: PushEmpty(int)
0x10c2: Stack[-1] = Stack[-2]
0x10c3: Push((int) 24)
0x10c4: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x10c5: Return(); Pop(2)

0x10c6: PushEmpty(bool, bool)
0x10c7: @ IsPlayerActor(Stack[-3], Stack[-1])
0x10c8: Pop(0)
0x10c9: Push(Stack[-1])
0x10ca: IF (Stack[-1] == 0) GOTO 0x10ce; Pop(1)

0x10cb: Push("attack")
0x10cc: @ PlayGlobalMusic(Stack[-1])
0x10cd: Pop(1)
0x10ce: Return(); Pop(2)

0x10cf: PushEmpty(object, object)
0x10d0: @ GetScene(Stack[-1])
0x10d1: Pop(0)
0x10d2: Push("battle")
0x10d3: PushEmpty(object)
0x10d4: Call2 0x107d

0x10d5: Pop(0)
0x10d6: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x10d7: Pop(2)
0x10d8: Return(); Pop(2)

0x10d9: Stack[-1] = 0
0x10da: PushEmpty()
0x10db: PushEmpty(int, string)
0x10dc: Stack[-1] = "branch"
0x10dd: Call2 0x109f

0x10de: Pop(1)
0x10df: Push((int) 0)
0x10e0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10e1: IF (Stack[-1] == 0) GOTO 0x10e4; Pop(1)

0x10e2: Stack[-2] = (bool) 1
0x10e3: Return(); Pop(0)

0x10e4: Stack[-2] = (bool) 0
0x10e5: Return(); Pop(0)

0x10e6: PushEmpty()
0x10e7: PushEmpty(int, string)
0x10e8: Stack[-1] = "branch"
0x10e9: Call2 0x109f

0x10ea: Pop(1)
0x10eb: Push((int) 2)
0x10ec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10ed: IF (Stack[-1] == 0) GOTO 0x10f0; Pop(1)

0x10ee: Stack[-2] = (bool) 1
0x10ef: Return(); Pop(0)

0x10f0: Stack[-2] = (bool) 0
0x10f1: Return(); Pop(0)

0x10f2: PushEmpty()
0x10f3: PushEmpty(bool, object)
0x10f4: Stack[-1] = Stack[-3]
0x10f5: Call2 0x112e

0x10f6: Pop(1)
0x10f7: IF (Stack[-1] == 0) GOTO 0x10fa; Pop(1)

0x10f8: Stack[-2] = (bool) 1
0x10f9: Return(); Pop(0)

0x10fa: Stack[-2] = (bool) 0
0x10fb: Return(); Pop(0)

0x10fc: PushEmpty()
0x10fd: PushEmpty(bool, object)
0x10fe: Stack[-1] = Stack[-3]
0x10ff: Call2 0x1135

0x1100: Pop(1)
0x1101: IF (Stack[-1] == 0) GOTO 0x1104; Pop(1)

0x1102: Stack[-2] = (bool) 1
0x1103: Return(); Pop(0)

0x1104: Stack[-2] = (bool) 0
0x1105: Return(); Pop(0)

0x1106: PushEmpty()
0x1107: PushEmpty(bool, object)
0x1108: Stack[-1] = Stack[-3]
0x1109: Call2 0x113c

0x110a: Pop(1)
0x110b: IF (Stack[-1] == 0) GOTO 0x110e; Pop(1)

0x110c: Stack[-2] = (bool) 1
0x110d: Return(); Pop(0)

0x110e: Stack[-2] = (bool) 0
0x110f: Return(); Pop(0)

0x1110: PushEmpty()
0x1111: PushEmpty(bool, object)
0x1112: Stack[-1] = Stack[-3]
0x1113: Call2 0x1143

0x1114: Pop(1)
0x1115: IF (Stack[-1] == 0) GOTO 0x1118; Pop(1)

0x1116: Stack[-2] = (bool) 1
0x1117: Return(); Pop(0)

0x1118: Stack[-2] = (bool) 0
0x1119: Return(); Pop(0)

0x111a: PushEmpty()
0x111b: PushEmpty(bool, object)
0x111c: Stack[-1] = Stack[-3]
0x111d: Call2 0x114a

0x111e: Pop(1)
0x111f: IF (Stack[-1] == 0) GOTO 0x1122; Pop(1)

0x1120: Stack[-2] = (bool) 1
0x1121: Return(); Pop(0)

0x1122: Stack[-2] = (bool) 0
0x1123: Return(); Pop(0)

0x1124: PushEmpty()
0x1125: PushEmpty(bool, object)
0x1126: Stack[-1] = Stack[-3]
0x1127: Call2 0x115f

0x1128: Pop(1)
0x1129: IF (Stack[-1] == 0) GOTO 0x112c; Pop(1)

0x112a: Stack[-2] = (bool) 1
0x112b: Return(); Pop(0)

0x112c: Stack[-2] = (bool) 0
0x112d: Return(); Pop(0)

0x112e: PushEmpty()
0x112f: PushEmpty(int)
0x1130: Call2 0x10b5

0x1131: Pop(0)
0x1132: Push((int) 1)
0x1133: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1134: Return(); Pop(0)

0x1135: PushEmpty()
0x1136: PushEmpty(int)
0x1137: Call2 0x10b5

0x1138: Pop(0)
0x1139: Push((int) 2)
0x113a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x113b: Return(); Pop(0)

0x113c: PushEmpty()
0x113d: PushEmpty(int)
0x113e: Call2 0x10b5

0x113f: Pop(0)
0x1140: Push((int) 4)
0x1141: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1142: Return(); Pop(0)

0x1143: PushEmpty()
0x1144: PushEmpty(int)
0x1145: Call2 0x10b5

0x1146: Pop(0)
0x1147: Push((int) 5)
0x1148: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1149: Return(); Pop(0)

0x114a: PushEmpty()
0x114b: PushEmpty(bool)
0x114c: Stack[-1] = (bool) 0
0x114d: PushEmpty(int)
0x114e: Call2 0x10be

0x114f: Pop(0)
0x1150: Push((int) 0)
0x1151: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1152: IF (Stack[-1] == 0) GOTO 0x115a; Pop(1)

0x1153: PushEmpty(int)
0x1154: Call2 0x10be

0x1155: Pop(0)
0x1156: Push((int) 12)
0x1157: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1158: IF (Stack[-1] == 0) GOTO 0x115a; Pop(1)

0x1159: Stack[-1] = (bool) 1
0x115a: IF (Stack[-1] == 0) GOTO 0x115d; Pop(1)

0x115b: Stack[-2] = (bool) 1
0x115c: Return(); Pop(0)

0x115d: Stack[-2] = (bool) 0
0x115e: Return(); Pop(0)

0x115f: PushEmpty()
0x1160: PushEmpty(int)
0x1161: Call2 0x10be

0x1162: Pop(0)
0x1163: Push((int) 12)
0x1164: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1165: IF (Stack[-1] == 0) GOTO 0x1168; Pop(1)

0x1166: Stack[-2] = (bool) 1
0x1167: Return(); Pop(0)

0x1168: Stack[-2] = (bool) 0
0x1169: Return(); Pop(0)

0x116a: PushEmpty(int, int)
0x116b: Push("branch")
0x116c: @ GetVariable(Stack[-1], Stack[-2])
0x116d: Pop(1)
0x116e: Push((int) 0)
0x116f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1170: IF (Stack[-1] == 0) GOTO 0x1174; Pop(1)

0x1171: Stack[-3] = (int) 1
0x1172: Return(); Pop(2)

0x1173: GOTO 0x1179

0x1174: Push((int) 1)
0x1175: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1176: IF (Stack[-1] == 0) GOTO 0x1179; Pop(1)

0x1177: Stack[-3] = (int) 2
0x1178: Return(); Pop(2)

0x1179: Stack[-3] = (int) 3
0x117a: Return(); Pop(2)

0x117b: PushEmpty(int, int)
0x117c: Push("branch")
0x117d: @ GetVariable(Stack[-1], Stack[-2])
0x117e: Pop(1)
0x117f: Stack[-3] = Stack[-1]
0x1180: Return(); Pop(2)

0x1181: PushEmpty()
0x1182: PushEmpty(int)
0x1183: Call2 0x117b

0x1184: Pop(0)
0x1185: Push((int) 1)
0x1186: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1187: IF (Stack[-1] == 0) GOTO 0x118b; Pop(1)

0x1188: @ WorkWithCorpse(Stack[-1])
0x1189: Pop(0)
0x118a: GOTO 0x118d

0x118b: @ Barter(Stack[-1])
0x118c: Pop(0)
0x118d: Return(); Pop(0)

0x118e: PushEmpty(int, bool, int, bool)
0x118f: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x1190: IF (Stack[-1] == 0) GOTO 0x1195; Pop(1)

0x1191: Push("GenerateMoney: iMin > iMax")
0x1192: @ Trace(Stack[-1])
0x1193: Pop(1)
0x1194: Return(); Pop(4)

0x1195: Stack[-2] = (int) 0
0x1196: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x1197: IF (Stack[-1] == 0) GOTO 0x119c; Pop(1)

0x1198: Pop(0); Push(Stack[-5] - Stack[-6]);
0x1199: @ irand(Stack[-3], Stack[-1])
0x119a: Pop(1)
0x119b: GOTO 0x11a0

0x119c: Push((int) 0)
0x119d: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x119e: IF (Stack[-1] == 0) GOTO 0x11a0; Pop(1)

0x119f: Return(); Pop(4)

0x11a0: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x11a1: Push((int) 0)
0x11a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a3: IF (Stack[-1] == 0) GOTO 0x11a5; Pop(1)

0x11a4: Return(); Pop(4)

0x11a5: PushEmpty(int, string)
0x11a6: Stack[-1] = "Money"
0x11a7: Call2 0x1285

0x11a8: Pop(1)
0x11a9: Push((int) 0)
0x11aa: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x11ab: Pop(2)
0x11ac: Return(); Pop(4)

0x11ad: PushEmpty(object, int, bool, object, int, bool)
0x11ae: @ CreateInvItem(Stack[-3])
0x11af: Pop(0)
0x11b0: @@ SetItemName(Stack[-7])
0x11b1: Pop(0)
0x11b2: Push("Organ")
0x11b3: Push((int) 1)
0x11b4: @@ SetProperty(Stack[-2], Stack[-1])
0x11b5: Pop(2)
0x11b6: @@ GetItemID(Stack[-2])
0x11b7: Pop(0)
0x11b8: Push((int) 0)
0x11b9: Push((int) 1)
0x11ba: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x11bb: Pop(2)
0x11bc: Return(); Pop(6)

0x11bd: Stack[-3] = 0
0x11be: PushEmpty(int)
0x11bf: Call2 0x117b

0x11c0: Pop(0)
0x11c1: Push((int) 1)
0x11c2: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x11c3: IF (Stack[-1] == 0) GOTO 0x11c5; Pop(1)

0x11c4: Return(); Pop(0)

0x11c5: PushEmpty(string)
0x11c6: Stack[-1] = "liver"
0x11c7: Call2 0x11ad

0x11c8: Pop(1)
0x11c9: PushEmpty(string)
0x11ca: Stack[-1] = "kidney"
0x11cb: Call2 0x11ad

0x11cc: Pop(1)
0x11cd: PushEmpty(string)
0x11ce: Stack[-1] = "heart"
0x11cf: Call2 0x11ad

0x11d0: Pop(1)
0x11d1: PushEmpty(string)
0x11d2: Stack[-1] = "blood"
0x11d3: Call2 0x11ad

0x11d4: Pop(1)
0x11d5: Return(); Pop(0)

0x11d6: PushEmpty(int, bool, int, bool)
0x11d7: Push(Stack[-5])
0x11d8: IF (Stack[-1] == 0) GOTO 0x122f; Pop(1)

0x11d9: PushEmpty(int, int)
0x11da: Stack[-2] = (int) 0
0x11db: Push((int) 100)
0x11dc: PushEmpty(int)
0x11dd: Call2 0x10b5

0x11de: Pop(0)
0x11df: Push((int) 100)
0x11e0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11e1: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x11e2: Call2 0x118e

0x11e3: Pop(2)
0x11e4: Push((int) 8)
0x11e5: @ irand(Stack[-3], Stack[-1])
0x11e6: Pop(1)
0x11e7: Push((int) 0)
0x11e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e9: IF (Stack[-1] == 0) GOTO 0x11f3; Pop(1)

0x11ea: PushEmpty(int, string)
0x11eb: Stack[-1] = "lemon"
0x11ec: Call2 0x1285

0x11ed: Pop(1)
0x11ee: Push((int) 0)
0x11ef: Push((int) 1)
0x11f0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11f1: Pop(3)
0x11f2: GOTO 0x122e

0x11f3: Push((int) 1)
0x11f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f5: IF (Stack[-1] == 0) GOTO 0x11ff; Pop(1)

0x11f6: PushEmpty(int, string)
0x11f7: Stack[-1] = "rusk"
0x11f8: Call2 0x1285

0x11f9: Pop(1)
0x11fa: Push((int) 0)
0x11fb: Push((int) 1)
0x11fc: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11fd: Pop(3)
0x11fe: GOTO 0x122e

0x11ff: Push((int) 2)
0x1200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1201: IF (Stack[-1] == 0) GOTO 0x120b; Pop(1)

0x1202: PushEmpty(int, string)
0x1203: Stack[-1] = "hook"
0x1204: Call2 0x1285

0x1205: Pop(1)
0x1206: Push((int) 0)
0x1207: Push((int) 1)
0x1208: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1209: Pop(3)
0x120a: GOTO 0x122e

0x120b: Push((int) 4)
0x120c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120d: IF (Stack[-1] == 0) GOTO 0x1217; Pop(1)

0x120e: PushEmpty(int, string)
0x120f: Stack[-1] = "syringe"
0x1210: Call2 0x1285

0x1211: Pop(1)
0x1212: Push((int) 0)
0x1213: Push((int) 1)
0x1214: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1215: Pop(3)
0x1216: GOTO 0x122e

0x1217: Push((int) 5)
0x1218: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1219: IF (Stack[-1] == 0) GOTO 0x1223; Pop(1)

0x121a: PushEmpty(int, string)
0x121b: Stack[-1] = "watch"
0x121c: Call2 0x1285

0x121d: Pop(1)
0x121e: Push((int) 0)
0x121f: Push((int) 1)
0x1220: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1221: Pop(3)
0x1222: GOTO 0x122e

0x1223: Push((int) 6)
0x1224: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1225: IF (Stack[-1] == 0) GOTO 0x122e; Pop(1)

0x1226: PushEmpty(int, string)
0x1227: Stack[-1] = "razor"
0x1228: Call2 0x1285

0x1229: Pop(1)
0x122a: Push((int) 0)
0x122b: Push((int) 1)
0x122c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x122d: Pop(3)
0x122e: GOTO 0x1284

0x122f: PushEmpty(int, int)
0x1230: Stack[-2] = (int) 0
0x1231: Push((int) 50)
0x1232: PushEmpty(int)
0x1233: Call2 0x10b5

0x1234: Pop(0)
0x1235: Push((int) 50)
0x1236: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1237: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1238: Call2 0x118e

0x1239: Pop(2)
0x123a: Push((int) 7)
0x123b: @ irand(Stack[-3], Stack[-1])
0x123c: Pop(1)
0x123d: Push((int) 0)
0x123e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123f: IF (Stack[-1] == 0) GOTO 0x1249; Pop(1)

0x1240: PushEmpty(int, string)
0x1241: Stack[-1] = "beads"
0x1242: Call2 0x1285

0x1243: Pop(1)
0x1244: Push((int) 0)
0x1245: Push((int) 1)
0x1246: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1247: Pop(3)
0x1248: GOTO 0x1284

0x1249: Push((int) 1)
0x124a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124b: IF (Stack[-1] == 0) GOTO 0x1255; Pop(1)

0x124c: PushEmpty(int, string)
0x124d: Stack[-1] = "bracelet"
0x124e: Call2 0x1285

0x124f: Pop(1)
0x1250: Push((int) 0)
0x1251: Push((int) 1)
0x1252: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1253: Pop(3)
0x1254: GOTO 0x1284

0x1255: Push((int) 2)
0x1256: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1257: IF (Stack[-1] == 0) GOTO 0x1261; Pop(1)

0x1258: PushEmpty(int, string)
0x1259: Stack[-1] = "ear_ring"
0x125a: Call2 0x1285

0x125b: Pop(1)
0x125c: Push((int) 0)
0x125d: Push((int) 1)
0x125e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x125f: Pop(3)
0x1260: GOTO 0x1284

0x1261: Push((int) 3)
0x1262: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1263: IF (Stack[-1] == 0) GOTO 0x126d; Pop(1)

0x1264: PushEmpty(int, string)
0x1265: Stack[-1] = "gold_ring"
0x1266: Call2 0x1285

0x1267: Pop(1)
0x1268: Push((int) 0)
0x1269: Push((int) 1)
0x126a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x126b: Pop(3)
0x126c: GOTO 0x1284

0x126d: Push((int) 4)
0x126e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126f: IF (Stack[-1] == 0) GOTO 0x1279; Pop(1)

0x1270: PushEmpty(int, string)
0x1271: Stack[-1] = "silver_ring"
0x1272: Call2 0x1285

0x1273: Pop(1)
0x1274: Push((int) 0)
0x1275: Push((int) 1)
0x1276: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1277: Pop(3)
0x1278: GOTO 0x1284

0x1279: Push((int) 5)
0x127a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127b: IF (Stack[-1] == 0) GOTO 0x1284; Pop(1)

0x127c: PushEmpty(int, string)
0x127d: Stack[-1] = "flower"
0x127e: Call2 0x1285

0x127f: Pop(1)
0x1280: Push((int) 0)
0x1281: Push((int) 1)
0x1282: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1283: Pop(3)
0x1284: Return(); Pop(4)

0x1285: PushEmpty(int, int)
0x1286: @ GetInvItemByName(Stack[-1], Stack[-3])
0x1287: Pop(0)
0x1288: Stack[-4] = Stack[-1]
0x1289: Return(); Pop(2)

0x128a: PushEmpty()
0x128b: PushEmpty(object)
0x128c: Stack[-1] = Stack[-2]
0x128d: Push(-1, 0); TaskCall(3)
0x128e: Call2 0x797

0x128f: Pop(-1, 0); TaskReturn
0x1290: Pop(1)
0x1291: Return(); Pop(0)

0x1292: PushEmpty(float, float)
0x1293: Push("health")
0x1294: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1295: IF (Stack[-1] == 0) GOTO 0x129e; Pop(1)

0x1296: Push("health")
0x1297: @ GetProperty(Stack[-1], Stack[-2])
0x1298: Pop(1)
0x1299: Push((int) 0)
0x129a: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x129b: IF (Stack[-1] == 0) GOTO 0x129e; Pop(1)

0x129c: @ SignalDeath(Stack[-4])
0x129d: Pop(0)
0x129e: Return(); Pop(2)

0x129f: PushEmpty()
0x12a0: PushEmpty(object)
0x12a1: Stack[-1] = Stack[-2]
0x12a2: Call2 0x128a

0x12a3: Pop(1)
0x12a4: Return(); Pop(0)

0x12a5: PushEmpty()
0x12a6: PushEmpty(object, int, float)
0x12a7: Stack[-3] = Stack[-7]
0x12a8: Stack[-2] = Stack[-6]
0x12a9: Stack[-1] = Stack[-5]
0x12aa: Call2 0xf2d

0x12ab: Pop(3)
0x12ac: Return(); Pop(0)

0x12ad: PushEmpty()
0x12ae: PushEmpty(object, int, float, cvector, cvector)
0x12af: Stack[-5] = Stack[-11]
0x12b0: Stack[-4] = Stack[-10]
0x12b1: Stack[-3] = Stack[-9]
0x12b2: Stack[-2] = Stack[-7]
0x12b3: Stack[-1] = Stack[-6]
0x12b4: Call2 0xf71

0x12b5: Pop(5)
0x12b6: Return(); Pop(0)

0x12b7: PushEmpty()
0x12b8: Push("unholster")
0x12b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12ba: IF (Stack[-1] == 0) GOTO 0x12c2; Pop(1)

0x12bb: PushEmpty(bool, object)
0x12bc: Stack[-1] = Stack[-4]
0x12bd: Call2 0x1423

0x12be: Stack[-5] = Stack[-2]
0x12bf: Pop(2)
0x12c0: Return(); Pop(0)

0x12c1: GOTO 0x12d5

0x12c2: Push("player_shot")
0x12c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12c4: IF (Stack[-1] == 0) GOTO 0x12cc; Pop(1)

0x12c5: PushEmpty(bool, object)
0x12c6: Stack[-1] = Stack[-4]
0x12c7: Call2 0x1428

0x12c8: Stack[-5] = Stack[-2]
0x12c9: Pop(2)
0x12ca: Return(); Pop(0)

0x12cb: GOTO 0x12d5

0x12cc: Push("battle")
0x12cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12ce: IF (Stack[-1] == 0) GOTO 0x12d5; Pop(1)

0x12cf: PushEmpty(bool, object)
0x12d0: Stack[-1] = Stack[-4]
0x12d1: Call2 0x142d

0x12d2: Stack[-5] = Stack[-2]
0x12d3: Pop(2)
0x12d4: Return(); Pop(0)

0x12d5: Stack[-3] = (bool) 0
0x12d6: Return(); Pop(0)

0x12d7: PushEmpty()
0x12d8: Push("unholster")
0x12d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12da: IF (Stack[-1] == 0) GOTO 0x12e0; Pop(1)

0x12db: PushEmpty(object)
0x12dc: Stack[-1] = Stack[-3]
0x12dd: Call2 0x1426

0x12de: Pop(1)
0x12df: GOTO 0x12ef

0x12e0: Push("player_shot")
0x12e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12e2: IF (Stack[-1] == 0) GOTO 0x12e8; Pop(1)

0x12e3: PushEmpty(object)
0x12e4: Stack[-1] = Stack[-3]
0x12e5: Call2 0x142b

0x12e6: Pop(1)
0x12e7: GOTO 0x12ef

0x12e8: Push("battle")
0x12e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12ea: IF (Stack[-1] == 0) GOTO 0x12ef; Pop(1)

0x12eb: PushEmpty(object)
0x12ec: Stack[-1] = Stack[-3]
0x12ed: Call2 0x1430

0x12ee: Pop(1)
0x12ef: Return(); Pop(0)

0x12f0: PushEmpty(bool, bool)
0x12f1: PushEmpty(bool)
0x12f2: Stack[-1] = (bool) 0
0x12f3: PushEmpty(bool, object)
0x12f4: Stack[-1] = Stack[-6]
0x12f5: Call2 0x1423

0x12f6: Pop(1)
0x12f7: IF (Stack[-1] == 0) GOTO 0x12fe; Pop(1)

0x12f8: PushEmpty(bool, object)
0x12f9: Stack[-1] = Stack[-6]
0x12fa: Call2 0xe66

0x12fb: Pop(1)
0x12fc: IF (Stack[-1] == 0) GOTO 0x12fe; Pop(1)

0x12fd: Stack[-1] = (bool) 1
0x12fe: IF (Stack[-1] == 0) GOTO 0x1305; Pop(1)

0x12ff: @@ IsWeaponHolstered(Stack[-1])
0x1300: Pop(0)
0x1301: Pop(0); Push((bool) Stack[-1] == 0)
0x1302: IF (Stack[-1] == 0) GOTO 0x1305; Pop(1)

0x1303: Stack[-4] = (bool) 1
0x1304: Return(); Pop(2)

0x1305: Stack[-4] = (bool) 0
0x1306: Return(); Pop(2)

0x1307: PushEmpty()
0x1308: PushEmpty(object)
0x1309: Stack[-1] = Stack[-2]
0x130a: Call2 0x1426

0x130b: Pop(1)
0x130c: Return(); Pop(0)

0x130d: PushEmpty()
0x130e: PushEmpty(bool, object)
0x130f: Stack[-1] = Stack[-3]
0x1310: Call2 0xe66

0x1311: Pop(1)
0x1312: IF (Stack[-1] == 0) GOTO 0x1319; Pop(1)

0x1313: PushEmpty(object)
0x1314: Call2 0x107d

0x1315: Pop(0)
0x1316: Push((float)-0.01)
0x1317: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1318: Pop(2)
0x1319: Return(); Pop(0)

0x131a: PushEmpty(object, object)
0x131b: Push("heal")
0x131c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x131d: IF (Stack[-1] == 0) GOTO 0x1328; Pop(1)

0x131e: Push("player")
0x131f: @ FindActor(Stack[-2], Stack[-1])
0x1320: Pop(1)
0x1321: PushEmpty(bool, object)
0x1322: Stack[-1] = Stack[-3]
0x1323: Call2 0x1432

0x1324: Stack[-6] = Stack[-2]
0x1325: Pop(2)
0x1326: Return(); Pop(2)

0x1327: Stack[-1] = 0
0x1328: Stack[-4] = (bool) 0
0x1329: Return(); Pop(2)

0x132a: PushEmpty(object, object)
0x132b: Push("heal")
0x132c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x132d: IF (Stack[-1] == 0) GOTO 0x1336; Pop(1)

0x132e: Push("player")
0x132f: @ FindActor(Stack[-2], Stack[-1])
0x1330: Pop(1)
0x1331: PushEmpty(object)
0x1332: Stack[-1] = Stack[-2]
0x1333: Call2 0x1435

0x1334: Pop(1)
0x1335: Stack[-1] = 0
0x1336: Return(); Pop(2)

0x1337: PushEmpty(string, string)
0x1338: Stack[-1] = "idle"
0x1339: Push(Stack[-3])
0x133a: IF (Stack[-1] == 0) GOTO 0x133c; Pop(1)

0x133b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x133c: Stack[-4] = Stack[-1]
0x133d: Return(); Pop(2)

0x133e: PushEmpty(int, bool, int, bool)
0x133f: Stack[-2] = (int) 0
0x1340: Push("all")
0x1341: PushEmpty(string, int)
0x1342: Stack[-1] = Stack[-5]
0x1343: Call2 0x1337

0x1344: Pop(1)
0x1345: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1346: Pop(2)
0x1347: Pop(0); Push((bool) Stack[-1] == 0)
0x1348: IF (Stack[-1] == 0) GOTO 0x134a; Pop(1)

0x1349: GOTO 0x134d

0x134a: Push((int) 1)
0x134b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x134c: GOTO 0x1340

0x134d: Stack[-5] = Stack[-2]
0x134e: Return(); Pop(4)

0x134f: PushEmpty()
0x1350: PushEmpty(bool, object)
0x1351: Stack[-1] = Stack[-3]
0x1352: Call2 0x1473

0x1353: Pop(1)
0x1354: IF (Stack[-1] == 0) GOTO 0x1357; Pop(1)

0x1355: Stack[-2] = (int) 2
0x1356: GOTO 0x1358

0x1357: Stack[-2] = (int) 0
0x1358: Return(); Pop(0)

0x1359: PushEmpty()
0x135a: PushEmpty(object)
0x135b: Stack[-1] = Stack[-2]
0x135c: Call2 0x1369

0x135d: Pop(1)
0x135e: Return(); Pop(0)

0x135f: PushEmpty()
0x1360: PushEmpty(bool, object)
0x1361: Stack[-1] = Stack[-3]
0x1362: Call2 0xee9

0x1363: Pop(1)
0x1364: IF (Stack[-1] == 0) GOTO 0x1367; Pop(1)

0x1365: Stack[-2] = (int) 2
0x1366: GOTO 0x1368

0x1367: Stack[-2] = (int) 0
0x1368: Return(); Pop(0)

0x1369: PushEmpty()
0x136a: PushEmpty(object)
0x136b: Stack[-1] = Stack[-2]
0x136c: Push(-1, 6); TaskCall(6)
0x136d: Call2 0xa9e

0x136e: Pop(-1, 6); TaskReturn
0x136f: Pop(1)
0x1370: Return(); Pop(0)

0x1371: PushEmpty(string, string, string, string)
0x1372: PushEmpty(bool, object, string)
0x1373: Stack[-2] = Stack[-9]
0x1374: Stack[-1] = "class"
0x1375: Call2 0xe6b

0x1376: Pop(2)
0x1377: Pop(1); Push((bool) Stack[-1] == 0)
0x1378: IF (Stack[-1] == 0) GOTO 0x137b; Pop(1)

0x1379: Stack[-7] = (bool) 0
0x137a: Return(); Pop(4)

0x137b: Push("class")
0x137c: @ GetProperty(Stack[-1], Stack[-3])
0x137d: Pop(1)
0x137e: Push("class")
0x137f: @@ GetProperty(Stack[-1], Stack[-2])
0x1380: Pop(1)
0x1381: PushEmpty(bool)
0x1382: Stack[-1] = (bool) 0
0x1383: Pop(0); Push((bool) Stack[-6] == 0)
0x1384: IF (Stack[-1] == 0) GOTO 0x1388; Pop(1)

0x1385: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0x1386: IF (Stack[-1] == 0) GOTO 0x1388; Pop(1)

0x1387: Stack[-1] = (bool) 1
0x1388: IF (Stack[-1] == 0) GOTO 0x138b; Pop(1)

0x1389: Stack[-7] = (bool) 1
0x138a: Return(); Pop(4)

0x138b: Push("rat")
0x138c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x138d: IF (Stack[-1] == 0) GOTO 0x1391; Pop(1)

0x138e: Stack[-7] = (bool) 0
0x138f: Return(); Pop(4)

0x1390: GOTO 0x13ba

0x1391: Push("rat_big")
0x1392: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1393: IF (Stack[-1] == 0) GOTO 0x1397; Pop(1)

0x1394: Stack[-7] = (bool) 0
0x1395: Return(); Pop(4)

0x1396: GOTO 0x13ba

0x1397: Push("dog")
0x1398: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1399: IF (Stack[-1] == 0) GOTO 0x139d; Pop(1)

0x139a: Stack[-7] = (bool) 0
0x139b: Return(); Pop(4)

0x139c: GOTO 0x13ba

0x139d: Push("grabitel")
0x139e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x139f: IF (Stack[-1] == 0) GOTO 0x13a3; Pop(1)

0x13a0: Stack[-7] = (bool) 0
0x13a1: Return(); Pop(4)

0x13a2: GOTO 0x13ba

0x13a3: Push("bomber")
0x13a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13a5: IF (Stack[-1] == 0) GOTO 0x13a9; Pop(1)

0x13a6: Stack[-7] = (bool) 0
0x13a7: Return(); Pop(4)

0x13a8: GOTO 0x13ba

0x13a9: Push("sanitar")
0x13aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13ab: IF (Stack[-1] == 0) GOTO 0x13af; Pop(1)

0x13ac: Stack[-7] = (bool) 0
0x13ad: Return(); Pop(4)

0x13ae: GOTO 0x13ba

0x13af: Push("hunter")
0x13b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13b1: IF (Stack[-1] == 0) GOTO 0x13b5; Pop(1)

0x13b2: Stack[-7] = (bool) 0
0x13b3: Return(); Pop(4)

0x13b4: GOTO 0x13ba

0x13b5: Push("soldier")
0x13b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13b7: IF (Stack[-1] == 0) GOTO 0x13ba; Pop(1)

0x13b8: Stack[-7] = (bool) 0
0x13b9: Return(); Pop(4)

0x13ba: Stack[-7] = (bool) 1
0x13bb: Return(); Pop(4)

0x13bc: PushEmpty()
0x13bd: PushEmpty(int, object)
0x13be: Stack[-1] = Stack[-4]
0x13bf: Call2 0x135f

0x13c0: Stack[-5] = Stack[-2]
0x13c1: Pop(2)
0x13c2: Return(); Pop(0)

0x13c3: PushEmpty()
0x13c4: PushEmpty(object)
0x13c5: Stack[-1] = Stack[-2]
0x13c6: Call2 0x1369

0x13c7: Pop(1)
0x13c8: Return(); Pop(0)

0x13c9: PushEmpty(bool, bool)
0x13ca: PushEmpty(bool, object, bool)
0x13cb: Stack[-2] = Stack[-8]
0x13cc: Stack[-1] = !Stack[-6]; Pop(0);
0x13cd: Call2 0x1371

0x13ce: Pop(2)
0x13cf: Pop(1); Push((bool) Stack[-1] == 0)
0x13d0: IF (Stack[-1] == 0) GOTO 0x13d3; Pop(1)

0x13d1: Stack[-7] = (bool) 0
0x13d2: Return(); Pop(2)

0x13d3: @ CanSee(Stack[-1], Stack[-6])
0x13d4: Pop(0)
0x13d5: PushEmpty(bool)
0x13d6: Stack[-1] = (bool) 1
0x13d7: Push(Stack[-2])
0x13d8: IF (Stack[-1] == 0) GOTO 0x13e1; Pop(1)

0x13d9: PushEmpty(float, object)
0x13da: Stack[-1] = Stack[-9]
0x13db: Call2 0xe5e

0x13dc: Pop(1)
0x13dd: Pop(0); Push(Stack[-6] * Stack[-6]);
0x13de: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x13df: IF (Stack[-1] == 0) GOTO 0x13e1; Pop(1)

0x13e0: Stack[-1] = (bool) 0
0x13e1: IF (Stack[-1] == 0) GOTO 0x13e4; Pop(1)

0x13e2: Stack[-7] = (bool) 1
0x13e3: Return(); Pop(2)

0x13e4: Stack[-7] = (bool) 0
0x13e5: Return(); Pop(2)

0x13e6: PushEmpty()
0x13e7: Stack[-2] = (int) 0
0x13e8: Return(); Pop(0)

0x13e9: PushEmpty()
0x13ea: Return(); Pop(0)

0x13eb: PushEmpty()
0x13ec: Push("killme")
0x13ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13ee: IF (Stack[-1] == 0) GOTO 0x13f5; Pop(1)

0x13ef: PushEmpty(int, object)
0x13f0: Stack[-1] = Stack[-3]
0x13f1: Call2 0x1401

0x13f2: Stack[-5] = Stack[-2]
0x13f3: Pop(2)
0x13f4: Return(); Pop(0)

0x13f5: Stack[-3] = (int) 0
0x13f6: Return(); Pop(0)

0x13f7: PushEmpty()
0x13f8: Push("killme")
0x13f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13fa: IF (Stack[-1] == 0) GOTO 0x1400; Pop(1)

0x13fb: PushEmpty(object)
0x13fc: Stack[-1] = Stack[-2]
0x13fd: Call2 0x1413

0x13fe: Pop(1)
0x13ff: Return(); Pop(0)

0x1400: Return(); Pop(0)

0x1401: PushEmpty()
0x1402: PushEmpty(bool, object)
0x1403: Stack[-1] = Stack[-3]
0x1404: Call2 0xee9

0x1405: Pop(1)
0x1406: Pop(1); Push((bool) Stack[-1] == 0)
0x1407: IF (Stack[-1] == 0) GOTO 0x140a; Pop(1)

0x1408: Stack[-2] = (int) 0
0x1409: Return(); Pop(0)

0x140a: PushEmpty(bool, object)
0x140b: Stack[-1] = Stack[-3]
0x140c: Call2 0x1483

0x140d: Pop(1)
0x140e: IF (Stack[-1] == 0) GOTO 0x1411; Pop(1)

0x140f: Stack[-2] = (int) 2
0x1410: GOTO 0x1412

0x1411: Stack[-2] = (int) 0
0x1412: Return(); Pop(0)

0x1413: PushEmpty()
0x1414: PushEmpty(object)
0x1415: Stack[-1] = Stack[-2]
0x1416: Call2 0x1369

0x1417: Pop(1)
0x1418: Return(); Pop(0)

0x1419: PushEmpty()
0x141a: Stack[-2] = (int) 2
0x141b: Return(); Pop(0)

0x141c: PushEmpty()
0x141d: PushEmpty(object)
0x141e: Stack[-1] = Stack[-2]
0x141f: Call2 0x1445

0x1420: Pop(1)
0x1421: Return(); Pop(0)

0x1422: Return(); Pop(0)

0x1423: PushEmpty()
0x1424: Stack[-2] = (bool) 0
0x1425: Return(); Pop(0)

0x1426: PushEmpty()
0x1427: Return(); Pop(0)

0x1428: PushEmpty()
0x1429: Stack[-2] = (bool) 0
0x142a: Return(); Pop(0)

0x142b: PushEmpty()
0x142c: Return(); Pop(0)

0x142d: PushEmpty()
0x142e: Stack[-2] = (bool) 0
0x142f: Return(); Pop(0)

0x1430: PushEmpty()
0x1431: Return(); Pop(0)

0x1432: PushEmpty()
0x1433: Stack[-2] = (bool) 0
0x1434: Return(); Pop(0)

0x1435: PushEmpty()
0x1436: Return(); Pop(0)

0x1437: Stack[-1] = (int) 515564
0x1438: Return(); Pop(0)

0x1439: Stack[-1] = (int) 503349
0x143a: Return(); Pop(0)

0x143b: Stack[-1] = "ui/NPC_Citizen2.png"
0x143c: Return(); Pop(0)

0x143d: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x143e: Return(); Pop(0)

0x143f: Stack[-1] = (bool) 0
0x1440: Return(); Pop(0)

0x1441: Push(GlobalVars[0])
0x1442: Stack[-1] = (bool) 0
0x1443: GlobalVars[0] = Stack[-1]; Pop(1)
0x1444: Return(); Pop(0)

0x1445: PushEmpty(bool, bool)
0x1446: Push(GlobalVars[0])
0x1447: IF (Stack[-1] == 0) GOTO 0x1452; Pop(1)

0x1448: @ IsOverrideActive(Stack[-1])
0x1449: Pop(0)
0x144a: Pop(0); Push((bool) Stack[-1] == 0)
0x144b: IF (Stack[-1] == 0) GOTO 0x1450; Pop(1)

0x144c: PushEmpty(object)
0x144d: Stack[-1] = Stack[-4]
0x144e: Call2 0x1181

0x144f: Pop(1)
0x1450: Return(); Pop(2)

0x1451: GOTO 0x1472

0x1452: PushEmpty(bool, object)
0x1453: Stack[-1] = Stack[-5]
0x1454: Call2 0x1473

0x1455: Pop(1)
0x1456: Pop(1); Push((bool) Stack[-1] == 0)
0x1457: IF (Stack[-1] == 0) GOTO 0x1472; Pop(1)

0x1458: Push((int) 1000)
0x1459: PushEmpty(int, object)
0x145a: Stack[-1] = Stack[-6]
0x145b: Push(-2, 1); TaskCall(1)
0x145c: Call2 0x28

0x145d: Pop(-2, 1); TaskReturn
0x145e: Pop(1)
0x145f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1460: IF (Stack[-1] == 0) GOTO 0x1472; Pop(1)

0x1461: PushEmpty(bool, object)
0x1462: Stack[-1] = Stack[-5]
0x1463: Call2 0xfe6

0x1464: Pop(1)
0x1465: Pop(1); Push((bool) Stack[-1] == 0)
0x1466: IF (Stack[-1] == 0) GOTO 0x1468; Pop(1)

0x1467: Return(); Pop(2)

0x1468: PushEmpty(object)
0x1469: Stack[-1] = Stack[-4]
0x146a: Push(-1, 1); TaskCall(0)
0x146b: Call2 0x0

0x146c: Pop(-1, 1); TaskReturn
0x146d: Pop(1)
0x146e: PushEmpty(object)
0x146f: Stack[-1] = Stack[-4]
0x1470: Call2 0x101e

0x1471: Pop(1)
0x1472: Return(); Pop(2)

0x1473: PushEmpty(float, float)
0x1474: PushEmpty(bool, object)
0x1475: Stack[-1] = Stack[-5]
0x1476: Call2 0xe66

0x1477: Pop(1)
0x1478: IF (Stack[-1] == 0) GOTO 0x1481; Pop(1)

0x1479: Push("reputation")
0x147a: @@ GetProperty(Stack[-1], Stack[-2])
0x147b: Pop(1)
0x147c: Push((float)0.4)
0x147d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x147e: IF (Stack[-1] == 0) GOTO 0x1481; Pop(1)

0x147f: Stack[-4] = (bool) 1
0x1480: Return(); Pop(2)

0x1481: Stack[-4] = (bool) 0
0x1482: Return(); Pop(2)

0x1483: PushEmpty()
0x1484: Stack[-2] = (bool) 1
0x1485: Return(); Pop(0)

0x1486: PushEmpty()
0x1487: PushEmpty(bool, object, object, float, bool)
0x1488: Stack[-4] = Stack[-8]
0x1489: Stack[-3] = Stack[-7]
0x148a: Stack[-2] = (float) 700.0
0x148b: Stack[-1] = Stack[-6]
0x148c: Call2 0x13c9

0x148d: Stack[-9] = Stack[-5]
0x148e: Pop(5)
0x148f: Return(); Pop(0)

0x1490: PushEmpty()
0x1491: PushEmpty(bool, object)
0x1492: Stack[-1] = Stack[-3]
0x1493: Call2 0xe66

0x1494: Pop(1)
0x1495: IF (Stack[-1] == 0) GOTO 0x14a1; Pop(1)

0x1496: PushEmpty(object)
0x1497: Call2 0x107d

0x1498: Pop(0)
0x1499: Push((float)-0.04)
0x149a: Push((bool) 1)
0x149b: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x149c: Pop(3)
0x149d: PushEmpty(bool)
0x149e: Stack[-1] = (bool) 1
0x149f: Call2 0x11d6

0x14a0: Pop(1)
0x14a1: PushEmpty()
0x14a2: Call2 0x11be

0x14a3: Pop(0)
0x14a4: Push(GlobalVars[0])
0x14a5: Stack[-1] = (bool) 1
0x14a6: GlobalVars[0] = Stack[-1]; Pop(1)
0x14a7: Push((int) 50)
0x14a8: Push((int) 40)
0x14a9: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x14aa: Pop(2)
0x14ab: Return(); Pop(0)

