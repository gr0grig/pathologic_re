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
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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

RunOp = 0x1e6
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc6 Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x159 Vars = (object)
		EVENT_6 Op = 0x167 Vars = ()
		EVENT_22 Op = 0x1e0 Vars = (object, int, float, float)
		EVENT_16 Op = 0x1e2 Vars = (object, string)
		EVENT_41 Op = 0x1e4 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x1fe Vars = (object)
		EVENT_17 Op = 0x212 Vars = (object)
		EVENT_30 Op = 0x22a Vars = (object, object, bool)
		EVENT_40 Op = 0x246 Vars = (object)
		EVENT_42 Op = 0x25a Vars = (object, string)
		EVENT_26 Op = 0x27f Vars = (string)
		EVENT_1 Op = 0x28d Vars = (object)
		EVENT_3 Op = 0x2a0 Vars = (object)
		EVENT_7 Op = 0x2a6 Vars = (int)
		EVENT_6 Op = 0x2b2 Vars = ()
		EVENT_41 Op = 0x2c9 Vars = (object)
		EVENT_10 Op = 0x33a Vars = (object)
		EVENT_28 Op = 0x33e Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0x357 Vars = (object)
		EVENT_17 Op = 0x36b Vars = (object)
		EVENT_30 Op = 0x383 Vars = (object, object, bool)
		EVENT_40 Op = 0x39f Vars = (object)
		EVENT_42 Op = 0x3b3 Vars = (object, string)
		EVENT_26 Op = 0x3d8 Vars = (string)
		EVENT_6 Op = 0x3e6 Vars = ()
		EVENT_1 Op = 0x3ed Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0x489 Vars = (object)
		EVENT_17 Op = 0x49d Vars = (object)
		EVENT_30 Op = 0x4b5 Vars = (object, object, bool)
		EVENT_40 Op = 0x4d1 Vars = (object)
		EVENT_42 Op = 0x4e5 Vars = (object, string)
		EVENT_26 Op = 0x50a Vars = (string)
		EVENT_41 Op = 0x523 Vars = (object)
		EVENT_7 Op = 0x52c Vars = (int)
		EVENT_6 Op = 0x54f Vars = ()
		EVENT_1 Op = 0x556 Vars = (object)
	GTASK_6 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_7 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x808 Vars = ()
		EVENT_7 Op = 0x840 Vars = (int)
		EVENT_1 Op = 0x85b Vars = (object)
		EVENT_2 Op = 0x86a Vars = (object)
		EVENT_10 Op = 0x8f0 Vars = (object)
		EVENT_41 Op = 0x8fb Vars = (object)

Events:
EVENT_16 Op = 0xcd0 Vars = (object, string)
EVENT_41 Op = 0xcdd Vars = (object)
EVENT_22 Op = 0xce3 Vars = (object, int, float, float)
EVENT_43 Op = 0xceb Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xa55

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xe88

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xe86

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xe8a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xe8c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xba8

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
0x41: Call2 0xa9a

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
0x4f: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0xb8b

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0xb0

0x58: Pop(1)
0x59: Push((int) 543337)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 543338)
0x5f: Push((int) 45797)
0x60: Push((int) 45796)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 543340)
0x64: Push((int) -1)
0x65: Push((int) 45798)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x92

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0xb0

0x6c: Pop(1)
0x6d: Push((int) 538128)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: PushEmpty(bool)
0x73: Stack[-1] = (bool) 0
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0xb7f

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0xb97

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7e: Stack[-1] = (bool) 1
0x7f: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x80: Push((int) 538129)
0x81: Push((int) 40001)
0x82: Push((int) 40000)
0x83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84: Pop(3)
0x85: Push((int) 538133)
0x86: Push((int) -1)
0x87: Push((int) 40004)
0x88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(3)
0x8a: Push((int) 538134)
0x8b: Push((int) -1)
0x8c: Push((int) 40005)
0x8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e: Pop(3)
0x8f: GOTO 0x92

0x90: Return(); Pop(0)

0x91: GOTO 0x4e

0x92: PushEmpty(bool)
0x93: Call2 0xe8e

0x94: Pop(0)
0x95: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x96: @ lshWaitForAnimEnd()
0x97: Pop(0)
0x98: Push( Stack[3 + Tasks[-1].StackPointer] )
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: GOTO 0xa0

0x9b: PushEmpty(string)
0x9c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9d: Call2 0xaac

0x9e: Pop(1)
0x9f: GOTO 0x96

0xa0: GOTO 0xaf

0xa1: Push("all")
0xa2: Push("idle")
0xa3: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: @ WaitForAnimEnd()
0xa6: Pop(0)
0xa7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: GOTO 0xaf

0xaa: Push("all")
0xab: Push("idle")
0xac: @ PlayAnimation(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: GOTO 0xa5

0xaf: Return(); Pop(0)

0xb0: PushEmpty()
0xb1: PushEmpty(bool)
0xb2: Call2 0xe8e

0xb3: Pop(0)
0xb4: Pop(1); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Return(); Pop(0)

0xb7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Return(); Pop(0)

0xba: PushEmpty(string, bool)
0xbb: Stack[-2] = Stack[-3]
0xbc: Push("")
0xbd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbf: Stack[-1] = (bool) 0
0xc0: GOTO 0xc2

0xc1: Stack[-1] = (bool) 1
0xc2: Call2 0xabc

0xc3: Pop(2)
0xc4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc5: Return(); Pop(0)

0xc6: PushEmpty()
0xc7: Push((int) 1)
0xc8: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0xc9: PushEmpty()
0xca: Call2 0xad6

0xcb: Pop(0)
0xcc: Push((int) 45795)
0xcd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xcf: PushEmpty(bool, object)
0xd0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Call2 0xb8b

0xd2: Pop(1)
0xd3: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xd4: PushEmpty(string)
0xd5: Stack[-1] = "Neutral"
0xd6: Call2 0xb0

0xd7: Pop(1)
0xd8: Push((int) 543337)
0xd9: @@ SetMessage(Stack[-1])
0xda: Pop(1)
0xdb: @@ ClearReplies()
0xdc: Pop(0)
0xdd: Push((int) 543338)
0xde: Push((int) 45797)
0xdf: Push((int) 45796)
0xe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1: Pop(3)
0xe2: Push((int) 543340)
0xe3: Push((int) -1)
0xe4: Push((int) 45798)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: Return(); Pop(0)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0xb0

0xeb: Pop(1)
0xec: Push((int) 538128)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: PushEmpty(bool)
0xf2: Stack[-1] = (bool) 0
0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0xb7f

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf8: PushEmpty(bool, object)
0xf9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Call2 0xb97

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfd: Stack[-1] = (bool) 1
0xfe: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xff: Push((int) 538129)
0x100: Push((int) 40001)
0x101: Push((int) 40000)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 538133)
0x105: Push((int) -1)
0x106: Push((int) 40004)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Push((int) 538134)
0x10a: Push((int) -1)
0x10b: Push((int) 40005)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Return(); Pop(0)

0x10f: Push((int) 40001)
0x110: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral"
0x114: Call2 0xb0

0x115: Pop(1)
0x116: Push((int) 538130)
0x117: @@ SetMessage(Stack[-1])
0x118: Pop(1)
0x119: @@ ClearReplies()
0x11a: Pop(0)
0x11b: Push((int) 538131)
0x11c: Push((int) -1)
0x11d: Push((int) 40002)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Push((int) 538132)
0x121: Push((int) -1)
0x122: Push((int) 40003)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Return(); Pop(0)

0x126: Push((int) 45797)
0x127: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x129: PushEmpty(string)
0x12a: Stack[-1] = "Neutral"
0x12b: Call2 0xb0

0x12c: Pop(1)
0x12d: Push((int) 543339)
0x12e: @@ SetMessage(Stack[-1])
0x12f: Pop(1)
0x130: @@ ClearReplies()
0x131: Pop(0)
0x132: Push((int) 543341)
0x133: Push((int) -1)
0x134: Push((int) 45799)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Push((int) 543342)
0x138: Push((int) -1)
0x139: Push((int) 45800)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x13e: PushEmpty(bool)
0x13f: Call2 0xe8e

0x140: Pop(0)
0x141: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x142: @ lshStopAnimation()
0x143: Pop(0)
0x144: GOTO 0x147

0x145: @ StopAnimation()
0x146: Pop(0)
0x147: Return(); Pop(0)

0x148: GOTO 0xc7

0x149: Return(); Pop(0)

0x14a: PushEmpty()
0x14b: EventDisable(0)
0x14c: PushEmpty(object)
0x14d: Stack[-1] = Stack[-2]
0x14e: Call2 0x16b

0x14f: Pop(1)
0x150: PushEmpty(object)
0x151: Stack[-1] = Stack[-2]
0x152: Call2 0xeb7

0x153: Pop(1)
0x154: EventEnable(0)
0x155: @ Hold()
0x156: Pop(0)
0x157: GOTO 0x155

0x158: Return(); Pop(0)

0x159: PushEmpty(int, int)
0x15a: PushEmpty(int, object)
0x15b: Stack[-1] = Stack[-5]
0x15c: Call2 0xe58

0x15d: Stack[-3] = Stack[-2]
0x15e: Pop(2)
0x15f: Push((int) 0)
0x160: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x162: PushEmpty(object)
0x163: Stack[-1] = Stack[-4]
0x164: Call2 0xe5b

0x165: Pop(1)
0x166: Return(); Pop(2)

0x167: PushEmpty()
0x168: Call2 0xe61

0x169: Pop(0)
0x16a: Return(); Pop(0)

0x16b: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x16c: Pop(0); Push((bool) Stack[-21] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "fdie"
0x170: Call2 0x1c6

0x171: Pop(1)
0x172: GOTO 0x1c5

0x173: @@ GetPosition(Stack[-10])
0x174: Pop(0)
0x175: @ GetPosition(Stack[-9])
0x176: Pop(0)
0x177: @ GetDirection(Stack[-8])
0x178: Pop(0)
0x179: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x17a: Push(CvectorIndex(Stack[-7], 0))
0x17b: Push(CvectorIndex(Stack[-9], 0))
0x17c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x17d: Push(CvectorIndex(Stack[-8], 2))
0x17e: Push(CvectorIndex(Stack[-10], 2))
0x17f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x180: Pop(2); Push(Stack[-2] + Stack[-1]);
0x181: Push((int) 0)
0x182: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x184: Stack[-6] = "fdie"
0x185: GOTO 0x187

0x186: Stack[-6] = "bdie"
0x187: @ RemoveRTEnvelope()
0x188: Pop(0)
0x189: @ SetDeathState()
0x18a: Pop(0)
0x18b: @ Stop()
0x18c: Pop(0)
0x18d: @ StopAsync()
0x18e: Pop(0)
0x18f: Stack[-5] = Stack[-21]
0x190: Push("GetScriptProperty")
0x191: Push((int) 2)
0x192: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x193: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x194: Push("Owner")
0x195: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x196: Pop(1)
0x197: Push(Stack[-4])
0x198: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x199: Push("Owner")
0x19a: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x19b: Pop(1)
0x19c: Pop(0); Push((bool) Stack[-5] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Stack[-5] = Stack[-21]
0x19f: Push("@GetEyesHeight")
0x1a0: Push((int) 1)
0x1a1: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x1a2: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1a3: @@ GetEyesHeight(Stack[-2])
0x1a4: Pop(0)
0x1a5: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x1a6: Push(CvectorIndex(Stack[-1], 1))
0x1a7: Stack[-1] = Stack[-3]
0x1a8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1a9: Push("head")
0x1aa: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x1ab: Pop(1)
0x1ac: Stack[-3] = (bool) 1
0x1ad: GOTO 0x1af

0x1ae: Stack[-3] = (bool) 0
0x1af: PushEmpty(string)
0x1b0: Stack[-1] = Stack[-7]
0x1b1: Call2 0xadd

0x1b2: Pop(1)
0x1b3: Push("all")
0x1b4: @ PlayAnimation(Stack[-1], Stack[-7])
0x1b5: Pop(1)
0x1b6: @ WaitForAnimEnd()
0x1b7: Pop(0)
0x1b8: Push(Stack[-3])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: @ StopAsync()
0x1bb: Pop(0)
0x1bc: Push("head")
0x1bd: @ UnlookAsync(Stack[-1])
0x1be: Pop(1)
0x1bf: Push("all")
0x1c0: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x1c1: Pop(1)
0x1c2: @ RemoveEnvelope()
0x1c3: Pop(0)
0x1c4: Stack[-5] = 0
0x1c5: Return(); Pop(20)

0x1c6: PushEmpty()
0x1c7: @ RemoveRTEnvelope()
0x1c8: Pop(0)
0x1c9: @ SetDeathState()
0x1ca: Pop(0)
0x1cb: @ Stop()
0x1cc: Pop(0)
0x1cd: @ StopAsync()
0x1ce: Pop(0)
0x1cf: @ StopSecondaryAnimation()
0x1d0: Pop(0)
0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = Stack[-2]
0x1d3: Call2 0xadd

0x1d4: Pop(1)
0x1d5: Push("all")
0x1d6: @ PlayAnimation(Stack[-1], Stack[-2])
0x1d7: Pop(1)
0x1d8: @ WaitForAnimEnd()
0x1d9: Pop(0)
0x1da: Push("all")
0x1db: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x1dc: Pop(1)
0x1dd: @ RemoveEnvelope()
0x1de: Pop(0)
0x1df: Return(); Pop(0)

0x1e0: PushEmpty()
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty()
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty()
0x1e5: Return(); Pop(0)

0x1e6: Push((bool) 1)
0x1e7: @ SensePlayerOnly(Stack[-1])
0x1e8: Pop(1)
0x1e9: PushEmpty()
0x1ea: Call2 0xe90

0x1eb: Pop(0)
0x1ec: PushEmpty()
0x1ed: Call2 0x1f5

0x1ee: Pop(0)
0x1ef: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f0: PushEmpty()
0x1f1: Call2 0x2fa

0x1f2: Pop(0)
0x1f3: GOTO 0x1ef

0x1f4: Return(); Pop(0)

0x1f5: PushEmpty(bool)
0x1f6: Call2 0xa50

0x1f7: Pop(0)
0x1f8: Pop(1); Push((bool) Stack[-1] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fa: PushEmpty()
0x1fb: Call2 0xe61

0x1fc: Pop(0)
0x1fd: Return(); Pop(0)

0x1fe: PushEmpty(int, int)
0x1ff: PushEmpty(int, object)
0x200: Stack[-1] = Stack[-5]
0x201: Call2 0xe58

0x202: Stack[-3] = Stack[-2]
0x203: Pop(2)
0x204: Push((int) 0)
0x205: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x207: Push((int) 1)
0x208: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20a: PushEmpty()
0x20b: Call2 0x2b9

0x20c: Pop(0)
0x20d: PushEmpty(object)
0x20e: Stack[-1] = Stack[-4]
0x20f: Call2 0xe5b

0x210: Pop(1)
0x211: Return(); Pop(2)

0x212: PushEmpty(int, int)
0x213: PushEmpty(object)
0x214: Stack[-1] = Stack[-4]
0x215: Call2 0xd4b

0x216: Pop(1)
0x217: PushEmpty(int, object)
0x218: Stack[-1] = Stack[-5]
0x219: Call2 0xd9e

0x21a: Stack[-3] = Stack[-2]
0x21b: Pop(2)
0x21c: Push((int) 0)
0x21d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x21f: Push((int) 1)
0x220: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x222: PushEmpty()
0x223: Call2 0x2b9

0x224: Pop(0)
0x225: PushEmpty(object)
0x226: Stack[-1] = Stack[-4]
0x227: Call2 0xda8

0x228: Pop(1)
0x229: Return(); Pop(2)

0x22a: PushEmpty(int, int)
0x22b: PushEmpty(bool, object, object, bool)
0x22c: Stack[-3] = Stack[-9]
0x22d: Stack[-2] = Stack[-8]
0x22e: Stack[-1] = Stack[-7]
0x22f: Call2 0xead

0x230: Pop(3)
0x231: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x232: PushEmpty(int, object, bool)
0x233: Stack[-2] = Stack[-8]
0x234: Stack[-1] = Stack[-6]
0x235: Call2 0xdfb

0x236: Stack[-4] = Stack[-3]
0x237: Pop(3)
0x238: Push((int) 0)
0x239: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x23b: Push((int) 1)
0x23c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23e: PushEmpty()
0x23f: Call2 0x2b9

0x240: Pop(0)
0x241: PushEmpty(object)
0x242: Stack[-1] = Stack[-6]
0x243: Call2 0xe02

0x244: Pop(1)
0x245: Return(); Pop(2)

0x246: PushEmpty(int, int)
0x247: PushEmpty(int, object)
0x248: Stack[-1] = Stack[-5]
0x249: Call2 0xe25

0x24a: Stack[-3] = Stack[-2]
0x24b: Pop(2)
0x24c: Push((int) 0)
0x24d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x24f: Push((int) 1)
0x250: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x252: PushEmpty()
0x253: Call2 0x2b9

0x254: Pop(0)
0x255: PushEmpty(object)
0x256: Stack[-1] = Stack[-4]
0x257: Call2 0xe28

0x258: Pop(1)
0x259: Return(); Pop(2)

0x25a: PushEmpty(int, int)
0x25b: PushEmpty(bool, object, string)
0x25c: Stack[-2] = Stack[-7]
0x25d: Stack[-1] = Stack[-6]
0x25e: Call2 0xcf5

0x25f: Pop(2)
0x260: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x261: PushEmpty()
0x262: Call2 0x2b9

0x263: Pop(0)
0x264: PushEmpty(object, string)
0x265: Stack[-2] = Stack[-6]
0x266: Stack[-1] = Stack[-5]
0x267: Call2 0xd15

0x268: Pop(2)
0x269: GOTO 0x27e

0x26a: PushEmpty(int, string, object)
0x26b: Stack[-2] = Stack[-6]
0x26c: Stack[-1] = Stack[-7]
0x26d: Call2 0xe2a

0x26e: Stack[-4] = Stack[-3]
0x26f: Pop(3)
0x270: Push((int) 0)
0x271: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x273: Push((int) 1)
0x274: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x276: PushEmpty()
0x277: Call2 0x2b9

0x278: Pop(0)
0x279: PushEmpty(string, object)
0x27a: Stack[-2] = Stack[-5]
0x27b: Stack[-1] = Stack[-6]
0x27c: Call2 0xe36

0x27d: Pop(2)
0x27e: Return(); Pop(2)

0x27f: PushEmpty()
0x280: PushEmpty(bool, string)
0x281: Stack[-1] = Stack[-3]
0x282: Call2 0xd58

0x283: Pop(1)
0x284: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x285: PushEmpty()
0x286: Call2 0x2b9

0x287: Pop(0)
0x288: PushEmpty(string)
0x289: Stack[-1] = Stack[-2]
0x28a: Call2 0xd68

0x28b: Pop(1)
0x28c: Return(); Pop(0)

0x28d: PushEmpty()
0x28e: PushEmpty(bool, object)
0x28f: Stack[-1] = Stack[-3]
0x290: Call2 0xd2e

0x291: Pop(1)
0x292: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x293: PushEmpty()
0x294: Call2 0x2b9

0x295: Pop(0)
0x296: PushEmpty(object)
0x297: Stack[-1] = Stack[-2]
0x298: Call2 0xd45

0x299: Pop(1)
0x29a: GOTO 0x29f

0x29b: PushEmpty(object)
0x29c: Stack[-1] = Stack[-2]
0x29d: Call2 0x2d2

0x29e: Pop(1)
0x29f: Return(); Pop(0)

0x2a0: PushEmpty()
0x2a1: PushEmpty(object)
0x2a2: Stack[-1] = Stack[-2]
0x2a3: Call2 0x2d2

0x2a4: Pop(1)
0x2a5: Return(); Pop(0)

0x2a6: PushEmpty()
0x2a7: Push((int) 110)
0x2a8: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Return(); Pop(0)

0x2ab: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2ac: Push((int) 110)
0x2ad: @ KillTimer(Stack[-1])
0x2ae: Pop(1)
0x2af: @ ResetAAS()
0x2b0: Pop(0)
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty()
0x2b3: Call2 0x2b9

0x2b4: Pop(0)
0x2b5: PushEmpty()
0x2b6: Call2 0xe61

0x2b7: Pop(0)
0x2b8: Return(); Pop(0)

0x2b9: Push((int) 110)
0x2ba: @ KillTimer(Stack[-1])
0x2bb: Pop(1)
0x2bc: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2bd: PushEmpty()
0x2be: Call2 0x341

0x2bf: Pop(0)
0x2c0: Return(); Pop(0)

0x2c1: Push((int) 110)
0x2c2: @ KillTimer(Stack[-1])
0x2c3: Pop(1)
0x2c4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2c5: PushEmpty()
0x2c6: Call2 0x348

0x2c7: Pop(0)
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty()
0x2ca: PushEmpty()
0x2cb: Call2 0x2b9

0x2cc: Pop(0)
0x2cd: PushEmpty(object)
0x2ce: Stack[-1] = Stack[-2]
0x2cf: Call2 0xcdd

0x2d0: Pop(1)
0x2d1: Return(); Pop(0)

0x2d2: PushEmpty(bool, int, bool, int)
0x2d3: PushEmpty(bool, object)
0x2d4: Stack[-1] = Stack[-7]
0x2d5: Call2 0x9af

0x2d6: Pop(1)
0x2d7: Pop(1); Push((bool) Stack[-1] == 0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d9: Return(); Pop(4)

0x2da: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: Return(); Pop(4)

0x2dd: @ IsPlayerActor(Stack[-5], Stack[-2])
0x2de: Pop(0)
0x2df: Pop(0); Push((bool) Stack[-2] == 0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: Return(); Pop(4)

0x2e2: PushEmpty(int, object)
0x2e3: Stack[-1] = Stack[-7]
0x2e4: Call2 0xd8d

0x2e5: Stack[-3] = Stack[-2]
0x2e6: Pop(2)
0x2e7: Push((int) 0)
0x2e8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2ea: Push((int) 1)
0x2eb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ed: PushEmpty()
0x2ee: Call2 0x2c1

0x2ef: Pop(0)
0x2f0: PushEmpty(object)
0x2f1: Stack[-1] = Stack[-6]
0x2f2: Call2 0xd96

0x2f3: Pop(1)
0x2f4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2f5: Push((int) 110)
0x2f6: Push((float)10.0)
0x2f7: @ SetTimer(Stack[-2], Stack[-1])
0x2f8: Pop(2)
0x2f9: Return(); Pop(4)

0x2fa: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x2fb: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2fc: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2fd: Push((float)0.5)
0x2fe: @ rand(Stack[-7], Stack[-1])
0x2ff: Pop(1)
0x300: @ Sleep(Stack[-6])
0x301: Pop(0)
0x302: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x303: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x304: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x306: @ GetPosition(Stack[-4])
0x307: Pop(0)
0x308: PushEmpty(float)
0x309: Call2 0x335

0x30a: Pop(0)
0x30b: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x30c: Pop(1)
0x30d: Push(Stack[-3])
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: GOTO 0x314

0x310: Push((int) 1)
0x311: @ Sleep(Stack[-1])
0x312: Pop(1)
0x313: GOTO 0x306

0x314: GOTO 0x316

0x315: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x316: PushEmpty(object, cvector)
0x317: Stack[-1] = Stack[-7]
0x318: Call2 0x351

0x319: Stack[-4] = Stack[-2]
0x31a: Pop(2)
0x31b: Pop(0); Push(( Stack[-2] != 0 )
0x31c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x31d: @ RotatePath(Stack[-2], Stack[-1])
0x31e: Pop(0)
0x31f: Push(Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x321: PushEmpty(bool)
0x322: Call2 0x34f

0x323: Pop(0)
0x324: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x325: Pop(1)
0x326: Stack[-2] = 0
0x327: Push(Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x329: PushEmpty()
0x32a: Push(-0, 0); TaskCall(4)
0x32b: Call2 0x3fb

0x32c: Pop(-0, 0); TaskReturn
0x32d: Pop(0)
0x32e: GOTO 0x332

0x32f: Push((int) 1)
0x330: @ Sleep(Stack[-1])
0x331: Pop(1)
0x332: Stack[-2] = 0
0x333: GOTO 0x302

0x334: Return(); Pop(12)

0x335: PushEmpty(float, float)
0x336: @ GetCameraFarDistance(Stack[-1])
0x337: Pop(0)
0x338: Stack[-3] = Stack[-1]
0x339: Return(); Pop(2)

0x33a: PushEmpty()
0x33b: @ RequestClearPath(Stack[-1])
0x33c: Pop(0)
0x33d: Return(); Pop(0)

0x33e: @ Stop()
0x33f: Pop(0)
0x340: Return(); Pop(0)

0x341: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x342: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x343: @ Stop()
0x344: Pop(0)
0x345: @ StopGroup0()
0x346: Pop(0)
0x347: Return(); Pop(0)

0x348: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x349: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x34a: @ Stop()
0x34b: Pop(0)
0x34c: @ StopGroup0()
0x34d: Pop(0)
0x34e: Return(); Pop(0)

0x34f: Stack[-1] = (bool) 0
0x350: Return(); Pop(0)

0x351: PushEmpty(object, object)
0x352: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x353: Pop(0)
0x354: Stack[-4] = Stack[-1]
0x355: Return(); Pop(2)

0x356: Stack[-1] = 0
0x357: PushEmpty(int, int)
0x358: PushEmpty(int, object)
0x359: Stack[-1] = Stack[-5]
0x35a: Call2 0xe58

0x35b: Stack[-3] = Stack[-2]
0x35c: Pop(2)
0x35d: Push((int) 0)
0x35e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x360: Push((int) 1)
0x361: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x363: PushEmpty()
0x364: Call2 0x44c

0x365: Pop(0)
0x366: PushEmpty(object)
0x367: Stack[-1] = Stack[-4]
0x368: Call2 0xe5b

0x369: Pop(1)
0x36a: Return(); Pop(2)

0x36b: PushEmpty(int, int)
0x36c: PushEmpty(object)
0x36d: Stack[-1] = Stack[-4]
0x36e: Call2 0xd4b

0x36f: Pop(1)
0x370: PushEmpty(int, object)
0x371: Stack[-1] = Stack[-5]
0x372: Call2 0xd9e

0x373: Stack[-3] = Stack[-2]
0x374: Pop(2)
0x375: Push((int) 0)
0x376: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x378: Push((int) 1)
0x379: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37b: PushEmpty()
0x37c: Call2 0x44c

0x37d: Pop(0)
0x37e: PushEmpty(object)
0x37f: Stack[-1] = Stack[-4]
0x380: Call2 0xda8

0x381: Pop(1)
0x382: Return(); Pop(2)

0x383: PushEmpty(int, int)
0x384: PushEmpty(bool, object, object, bool)
0x385: Stack[-3] = Stack[-9]
0x386: Stack[-2] = Stack[-8]
0x387: Stack[-1] = Stack[-7]
0x388: Call2 0xead

0x389: Pop(3)
0x38a: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x38b: PushEmpty(int, object, bool)
0x38c: Stack[-2] = Stack[-8]
0x38d: Stack[-1] = Stack[-6]
0x38e: Call2 0xdfb

0x38f: Stack[-4] = Stack[-3]
0x390: Pop(3)
0x391: Push((int) 0)
0x392: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x394: Push((int) 1)
0x395: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x396: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x397: PushEmpty()
0x398: Call2 0x44c

0x399: Pop(0)
0x39a: PushEmpty(object)
0x39b: Stack[-1] = Stack[-6]
0x39c: Call2 0xe02

0x39d: Pop(1)
0x39e: Return(); Pop(2)

0x39f: PushEmpty(int, int)
0x3a0: PushEmpty(int, object)
0x3a1: Stack[-1] = Stack[-5]
0x3a2: Call2 0xe25

0x3a3: Stack[-3] = Stack[-2]
0x3a4: Pop(2)
0x3a5: Push((int) 0)
0x3a6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3a8: Push((int) 1)
0x3a9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ab: PushEmpty()
0x3ac: Call2 0x44c

0x3ad: Pop(0)
0x3ae: PushEmpty(object)
0x3af: Stack[-1] = Stack[-4]
0x3b0: Call2 0xe28

0x3b1: Pop(1)
0x3b2: Return(); Pop(2)

0x3b3: PushEmpty(int, int)
0x3b4: PushEmpty(bool, object, string)
0x3b5: Stack[-2] = Stack[-7]
0x3b6: Stack[-1] = Stack[-6]
0x3b7: Call2 0xcf5

0x3b8: Pop(2)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3ba: PushEmpty()
0x3bb: Call2 0x44c

0x3bc: Pop(0)
0x3bd: PushEmpty(object, string)
0x3be: Stack[-2] = Stack[-6]
0x3bf: Stack[-1] = Stack[-5]
0x3c0: Call2 0xd15

0x3c1: Pop(2)
0x3c2: GOTO 0x3d7

0x3c3: PushEmpty(int, string, object)
0x3c4: Stack[-2] = Stack[-6]
0x3c5: Stack[-1] = Stack[-7]
0x3c6: Call2 0xe2a

0x3c7: Stack[-4] = Stack[-3]
0x3c8: Pop(3)
0x3c9: Push((int) 0)
0x3ca: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3cc: Push((int) 1)
0x3cd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cf: PushEmpty()
0x3d0: Call2 0x44c

0x3d1: Pop(0)
0x3d2: PushEmpty(string, object)
0x3d3: Stack[-2] = Stack[-5]
0x3d4: Stack[-1] = Stack[-6]
0x3d5: Call2 0xe36

0x3d6: Pop(2)
0x3d7: Return(); Pop(2)

0x3d8: PushEmpty()
0x3d9: PushEmpty(bool, string)
0x3da: Stack[-1] = Stack[-3]
0x3db: Call2 0xd58

0x3dc: Pop(1)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3de: PushEmpty()
0x3df: Call2 0x44c

0x3e0: Pop(0)
0x3e1: PushEmpty(string)
0x3e2: Stack[-1] = Stack[-2]
0x3e3: Call2 0xd68

0x3e4: Pop(1)
0x3e5: Return(); Pop(0)

0x3e6: PushEmpty()
0x3e7: Call2 0x44c

0x3e8: Pop(0)
0x3e9: PushEmpty()
0x3ea: Call2 0xe61

0x3eb: Pop(0)
0x3ec: Return(); Pop(0)

0x3ed: PushEmpty()
0x3ee: PushEmpty(bool, object)
0x3ef: Stack[-1] = Stack[-3]
0x3f0: Call2 0xd2e

0x3f1: Pop(1)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f3: PushEmpty()
0x3f4: Call2 0x44c

0x3f5: Pop(0)
0x3f6: PushEmpty(object)
0x3f7: Stack[-1] = Stack[-2]
0x3f8: Call2 0xd45

0x3f9: Pop(1)
0x3fa: Return(); Pop(0)

0x3fb: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x3fc: @ WaitForAnimEnd()
0x3fd: Pop(0)
0x3fe: PushEmpty(bool)
0x3ff: Call2 0xa50

0x400: Pop(0)
0x401: Pop(1); Push((bool) Stack[-1] == 0)
0x402: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x403: Return(); Pop(14)

0x404: PushEmpty(int)
0x405: Call2 0xd7c

0x406: Stack[-8] = Stack[-1]
0x407: Pop(1)
0x408: Stack[-6] = (int) 0
0x409: PushEmpty(bool)
0x40a: Stack[-1] = (bool) 0
0x40b: Push((int) 5)
0x40c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x40e: PushEmpty(bool)
0x40f: Call2 0xa50

0x410: Pop(0)
0x411: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x412: Stack[-1] = (bool) 1
0x413: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x414: Push((int) 3)
0x415: @ irand(Stack[-6], Stack[-1])
0x416: Pop(1)
0x417: Push((int) 0)
0x418: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x41a: Push(Stack[-7])
0x41b: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x41c: @ irand(Stack[-4], Stack[-7])
0x41d: Pop(0)
0x41e: Push("all")
0x41f: PushEmpty(string, int)
0x420: Stack[-1] = Stack[-7]
0x421: Call2 0xd75

0x422: Pop(1)
0x423: @ PlayAnimation(Stack[-2], Stack[-1])
0x424: Pop(2)
0x425: @ WaitForAnimEnd(Stack[-3])
0x426: Pop(0)
0x427: Pop(0); Push((bool) Stack[-3] == 0)
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: GOTO 0x447

0x42a: GOTO 0x43c

0x42b: Push((int) 1)
0x42c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x42e: Push((int) 4)
0x42f: @ rand(Stack[-3], Stack[-1])
0x430: Pop(1)
0x431: Push((int) 1)
0x432: Pop(1); Push(Stack[-3] + Stack[-1]);
0x433: @ Sleep(Stack[-1], Stack[-2])
0x434: Pop(1)
0x435: Pop(0); Push((bool) Stack[-1] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x437: GOTO 0x447

0x438: GOTO 0x43c

0x439: Push(Stack[-6])
0x43a: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43b: GOTO 0x447

0x43c: PushEmpty(bool)
0x43d: Call2 0x44a

0x43e: Pop(0)
0x43f: Pop(1); Push((bool) Stack[-1] == 0)
0x440: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x441: GOTO 0x447

0x442: @ ResetAAS()
0x443: Pop(0)
0x444: Push((int) 1)
0x445: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x446: GOTO 0x409

0x447: @ ResetAAS()
0x448: Pop(0)
0x449: Return(); Pop(14)

0x44a: Stack[-1] = (bool) 1
0x44b: Return(); Pop(0)

0x44c: @ StopAnimation()
0x44d: Pop(0)
0x44e: @ StopGroup0()
0x44f: Pop(0)
0x450: Return(); Pop(0)

0x451: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x452: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x453: PushEmpty()
0x454: Call2 0x484

0x455: Pop(0)
0x456: @ GetDirection(Stack[-3])
0x457: Pop(0)
0x458: PushEmpty(cvector, object)
0x459: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45a: Call2 0x91d

0x45b: Stack[-4] = Stack[-2]
0x45c: Pop(2)
0x45d: PushEmpty(float, cvector, cvector)
0x45e: Stack[-2] = Stack[-6]
0x45f: Stack[-1] = Stack[-5]
0x460: Call2 0xb3b

0x461: Pop(2)
0x462: Push((int) 0)
0x463: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x465: PushEmpty(object)
0x466: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x467: Call2 0xa45

0x468: Pop(1)
0x469: Stack[-1] = (bool) 1
0x46a: GOTO 0x46e

0x46b: Push((float)1.5)
0x46c: @ Sleep(Stack[-1], Stack[-2])
0x46d: Pop(1)
0x46e: Push(Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x470: PushEmpty(object)
0x471: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x472: Call2 0xa45

0x473: Pop(1)
0x474: Push((int) 111)
0x475: Push((float)0.5)
0x476: @ SetTimer(Stack[-2], Stack[-1])
0x477: Pop(2)
0x478: Push((float)5.0)
0x479: @ Sleep(Stack[-1])
0x47a: Pop(1)
0x47b: Push((int) 111)
0x47c: @ KillTimer(Stack[-1])
0x47d: Pop(1)
0x47e: @ StopAsync()
0x47f: Pop(0)
0x480: Push("head")
0x481: @ UnlookAsync(Stack[-1])
0x482: Pop(1)
0x483: Return(); Pop(6)

0x484: PushEmpty(object)
0x485: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x486: Call2 0xacb

0x487: Pop(1)
0x488: Return(); Pop(0)

0x489: PushEmpty(int, int)
0x48a: PushEmpty(int, object)
0x48b: Stack[-1] = Stack[-5]
0x48c: Call2 0xe58

0x48d: Stack[-3] = Stack[-2]
0x48e: Pop(2)
0x48f: Push((int) 0)
0x490: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x492: Push((int) 1)
0x493: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x495: PushEmpty()
0x496: Call2 0x518

0x497: Pop(0)
0x498: PushEmpty(object)
0x499: Stack[-1] = Stack[-4]
0x49a: Call2 0xe5b

0x49b: Pop(1)
0x49c: Return(); Pop(2)

0x49d: PushEmpty(int, int)
0x49e: PushEmpty(object)
0x49f: Stack[-1] = Stack[-4]
0x4a0: Call2 0xd4b

0x4a1: Pop(1)
0x4a2: PushEmpty(int, object)
0x4a3: Stack[-1] = Stack[-5]
0x4a4: Call2 0xd9e

0x4a5: Stack[-3] = Stack[-2]
0x4a6: Pop(2)
0x4a7: Push((int) 0)
0x4a8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4aa: Push((int) 1)
0x4ab: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ad: PushEmpty()
0x4ae: Call2 0x518

0x4af: Pop(0)
0x4b0: PushEmpty(object)
0x4b1: Stack[-1] = Stack[-4]
0x4b2: Call2 0xda8

0x4b3: Pop(1)
0x4b4: Return(); Pop(2)

0x4b5: PushEmpty(int, int)
0x4b6: PushEmpty(bool, object, object, bool)
0x4b7: Stack[-3] = Stack[-9]
0x4b8: Stack[-2] = Stack[-8]
0x4b9: Stack[-1] = Stack[-7]
0x4ba: Call2 0xead

0x4bb: Pop(3)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4bd: PushEmpty(int, object, bool)
0x4be: Stack[-2] = Stack[-8]
0x4bf: Stack[-1] = Stack[-6]
0x4c0: Call2 0xdfb

0x4c1: Stack[-4] = Stack[-3]
0x4c2: Pop(3)
0x4c3: Push((int) 0)
0x4c4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c6: Push((int) 1)
0x4c7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c9: PushEmpty()
0x4ca: Call2 0x518

0x4cb: Pop(0)
0x4cc: PushEmpty(object)
0x4cd: Stack[-1] = Stack[-6]
0x4ce: Call2 0xe02

0x4cf: Pop(1)
0x4d0: Return(); Pop(2)

0x4d1: PushEmpty(int, int)
0x4d2: PushEmpty(int, object)
0x4d3: Stack[-1] = Stack[-5]
0x4d4: Call2 0xe25

0x4d5: Stack[-3] = Stack[-2]
0x4d6: Pop(2)
0x4d7: Push((int) 0)
0x4d8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4da: Push((int) 1)
0x4db: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4dd: PushEmpty()
0x4de: Call2 0x518

0x4df: Pop(0)
0x4e0: PushEmpty(object)
0x4e1: Stack[-1] = Stack[-4]
0x4e2: Call2 0xe28

0x4e3: Pop(1)
0x4e4: Return(); Pop(2)

0x4e5: PushEmpty(int, int)
0x4e6: PushEmpty(bool, object, string)
0x4e7: Stack[-2] = Stack[-7]
0x4e8: Stack[-1] = Stack[-6]
0x4e9: Call2 0xcf5

0x4ea: Pop(2)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4ec: PushEmpty()
0x4ed: Call2 0x518

0x4ee: Pop(0)
0x4ef: PushEmpty(object, string)
0x4f0: Stack[-2] = Stack[-6]
0x4f1: Stack[-1] = Stack[-5]
0x4f2: Call2 0xd15

0x4f3: Pop(2)
0x4f4: GOTO 0x509

0x4f5: PushEmpty(int, string, object)
0x4f6: Stack[-2] = Stack[-6]
0x4f7: Stack[-1] = Stack[-7]
0x4f8: Call2 0xe2a

0x4f9: Stack[-4] = Stack[-3]
0x4fa: Pop(3)
0x4fb: Push((int) 0)
0x4fc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x4fe: Push((int) 1)
0x4ff: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x501: PushEmpty()
0x502: Call2 0x518

0x503: Pop(0)
0x504: PushEmpty(string, object)
0x505: Stack[-2] = Stack[-5]
0x506: Stack[-1] = Stack[-6]
0x507: Call2 0xe36

0x508: Pop(2)
0x509: Return(); Pop(2)

0x50a: PushEmpty()
0x50b: PushEmpty(bool, string)
0x50c: Stack[-1] = Stack[-3]
0x50d: Call2 0xd58

0x50e: Pop(1)
0x50f: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x510: PushEmpty()
0x511: Call2 0x518

0x512: Pop(0)
0x513: PushEmpty(string)
0x514: Stack[-1] = Stack[-2]
0x515: Call2 0xd68

0x516: Pop(1)
0x517: Return(); Pop(0)

0x518: @ StopGroup0()
0x519: Pop(0)
0x51a: @ StopAsync()
0x51b: Pop(0)
0x51c: Push("head")
0x51d: @ UnlookAsync(Stack[-1])
0x51e: Pop(1)
0x51f: Push((int) 111)
0x520: @ KillTimer(Stack[-1])
0x521: Pop(1)
0x522: Return(); Pop(0)

0x523: PushEmpty()
0x524: PushEmpty()
0x525: Call2 0x518

0x526: Pop(0)
0x527: PushEmpty(object)
0x528: Stack[-1] = Stack[-2]
0x529: Call2 0xcdd

0x52a: Pop(1)
0x52b: Return(); Pop(0)

0x52c: PushEmpty(cvector, cvector, cvector, cvector)
0x52d: Push((int) 111)
0x52e: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x530: Return(); Pop(4)

0x531: PushEmpty(bool, object)
0x532: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x533: Call2 0x9af

0x534: Pop(1)
0x535: Pop(1); Push((bool) Stack[-1] == 0)
0x536: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x537: PushEmpty()
0x538: Call2 0x518

0x539: Pop(0)
0x53a: Return(); Pop(4)

0x53b: @ GetDirection(Stack[-2])
0x53c: Pop(0)
0x53d: PushEmpty(cvector, object)
0x53e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53f: Call2 0x91d

0x540: Stack[-3] = Stack[-2]
0x541: Pop(2)
0x542: PushEmpty(float, cvector, cvector)
0x543: Stack[-2] = Stack[-5]
0x544: Stack[-1] = Stack[-4]
0x545: Call2 0xb3b

0x546: Pop(2)
0x547: Push((float)0.5)
0x548: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54a: PushEmpty(object)
0x54b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x54c: Call2 0xa45

0x54d: Pop(1)
0x54e: Return(); Pop(4)

0x54f: PushEmpty()
0x550: Call2 0x518

0x551: Pop(0)
0x552: PushEmpty()
0x553: Call2 0xe61

0x554: Pop(0)
0x555: Return(); Pop(0)

0x556: PushEmpty()
0x557: PushEmpty(bool, object)
0x558: Stack[-1] = Stack[-3]
0x559: Call2 0xd2e

0x55a: Pop(1)
0x55b: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x55c: PushEmpty()
0x55d: Call2 0x518

0x55e: Pop(0)
0x55f: PushEmpty(object)
0x560: Stack[-1] = Stack[-2]
0x561: Call2 0xd45

0x562: Pop(1)
0x563: Return(); Pop(0)

0x564: PushEmpty()
0x565: PushEmpty(object, bool, float)
0x566: Stack[-3] = Stack[-4]
0x567: Stack[-2] = (bool) 1
0x568: Stack[-1] = (float) 180.0
0x569: Call2 0x572

0x56a: Pop(3)
0x56b: Return(); Pop(0)

0x56c: PushEmpty()
0x56d: Stack[-3] = (float) 0.1
0x56e: Return(); Pop(0)

0x56f: PushEmpty()
0x570: Stack[-3] = (int) 0
0x571: Return(); Pop(0)

0x572: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x573: PushEmpty()
0x574: Call2 0x657

0x575: Pop(0)
0x576: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x577: Push("@GetAttackDistance")
0x578: Push((int) 1)
0x579: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x57a: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57b: @@ GetAttackDistance(Stack[-11])
0x57c: Pop(0)
0x57d: Push((int) 50)
0x57e: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x57f: GOTO 0x581

0x580: Stack[-11] = Stack[-23]
0x581: Push((int) 150)
0x582: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x583: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x584: Stack[-11] = (int) 150
0x585: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x586: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x587: @ IsPlayerActor(Stack[-0], Stack[-8])
0x588: Pop(0)
0x589: Push(Stack[-8])
0x58a: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x58b: Push("attack")
0x58c: @ PlayGlobalMusic(Stack[-1])
0x58d: Pop(1)
0x58e: PushEmpty(object)
0x58f: Call2 0xb06

0x590: Pop(0)
0x591: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x592: Pop(1)
0x593: Push(Stack[-24])
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: Stack[-7] = (bool) 0
0x596: GOTO 0x598

0x597: Stack[-7] = (bool) 1
0x598: Push((float)400.0)
0x599: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x59a: PushEmpty(bool)
0x59b: Stack[-1] = (bool) 0
0x59c: PushEmpty(bool, object)
0x59d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x59e: Call2 0x9af

0x59f: Pop(1)
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x5a1: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x5a3: Stack[-1] = (bool) 1
0x5a4: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x5a5: PushEmpty()
0x5a6: Call2 0x7f4

0x5a7: Pop(0)
0x5a8: @@ GetPFPosition(Stack[-10])
0x5a9: Pop(0)
0x5aa: @ GetPFPosition(Stack[-9])
0x5ab: Pop(0)
0x5ac: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x5ad: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x5ae: Pop(0); Push(Stack[-6] * Stack[-6]);
0x5af: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5b1: PushEmpty(bool, object, float, float, bool, bool)
0x5b2: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x5b3: Stack[-4] = Stack[-17]
0x5b4: Stack[-3] = (float) 3000.0
0x5b5: Stack[-2] = (bool) 1
0x5b6: Stack[-1] = (bool) 0
0x5b7: Push(-6, 3); TaskCall(7)
0x5b8: Call2 0x80f

0x5b9: Pop(-6, 3); TaskReturn
0x5ba: Pop(5)
0x5bb: Pop(1); Push((bool) Stack[-1] == 0)
0x5bc: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5bd: GOTO 0x646

0x5be: Stack[-7] = (bool) 0
0x5bf: GOTO 0x645

0x5c0: Pop(0); Push(Stack[-23] * Stack[-23]);
0x5c1: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x5c2: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x5c3: @@ GetPFPosition(Stack[-3])
0x5c4: Pop(0)
0x5c5: @ CanReachByPF(Stack[-2], Stack[-3])
0x5c6: Pop(0)
0x5c7: Pop(0); Push((bool) Stack[-2] == 0)
0x5c8: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5c9: PushEmpty(bool, object, float, float, bool, bool)
0x5ca: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x5cb: Stack[-4] = Stack[-17]
0x5cc: Stack[-3] = (float) 3000.0
0x5cd: Stack[-2] = (bool) 1
0x5ce: Stack[-1] = (bool) 0
0x5cf: Push(-6, 3); TaskCall(7)
0x5d0: Call2 0x80f

0x5d1: Pop(-6, 3); TaskReturn
0x5d2: Pop(5)
0x5d3: Pop(1); Push((bool) Stack[-1] == 0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d5: GOTO 0x646

0x5d6: Stack[-7] = (bool) 0
0x5d7: GOTO 0x59a

0x5d8: Pop(0); Push((bool) Stack[-7] == 0)
0x5d9: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5da: PushEmpty(object)
0x5db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5dc: Call2 0xa45

0x5dd: Pop(1)
0x5de: Push("all")
0x5df: Push("attack_on")
0x5e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x5e1: Pop(2)
0x5e2: @ WaitForAnimEnd()
0x5e3: Pop(0)
0x5e4: PushEmpty()
0x5e5: Call2 0x7f4

0x5e6: Pop(0)
0x5e7: @ StopAsync()
0x5e8: Pop(0)
0x5e9: Stack[-7] = (bool) 1
0x5ea: PushEmpty(bool, object)
0x5eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ec: Call2 0x9af

0x5ed: Pop(1)
0x5ee: Pop(1); Push((bool) Stack[-1] == 0)
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5f0: GOTO 0x646

0x5f1: @ rand(Stack[-1])
0x5f2: Pop(0)
0x5f3: PushEmpty(bool)
0x5f4: Stack[-1] = (bool) 1
0x5f5: Push((float)0.25)
0x5f6: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5f8: PushEmpty(bool)
0x5f9: Call2 0x7c9

0x5fa: Pop(0)
0x5fb: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5fc: Stack[-1] = (bool) 0
0x5fd: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x5fe: @ Face(Stack[-0])
0x5ff: Pop(0)
0x600: PushEmpty()
0x601: Call2 0x7fb

0x602: Pop(0)
0x603: Push("all")
0x604: Push("attack_stay")
0x605: @ PlayAnimation(Stack[-2], Stack[-1])
0x606: Pop(2)
0x607: PushEmpty(bool, float)
0x608: Stack[-1] = Stack[-25]
0x609: Call2 0x745

0x60a: Pop(2)
0x60b: @ StopAsync()
0x60c: Pop(0)
0x60d: GOTO 0x63c

0x60e: @ Face(Stack[-0])
0x60f: Pop(0)
0x610: Push("all")
0x611: Push("fjump")
0x612: @ PlayAnimation(Stack[-2], Stack[-1])
0x613: Pop(2)
0x614: @ WaitForAnimEnd()
0x615: Pop(0)
0x616: PushEmpty()
0x617: Call2 0x7f4

0x618: Pop(0)
0x619: Push(CVector(0.0, 0.0, 0.0))
0x61a: @ SetSpeed(Stack[-1])
0x61b: Pop(1)
0x61c: @ Stop()
0x61d: Pop(0)
0x61e: @ StopAsync()
0x61f: Pop(0)
0x620: PushEmpty(bool)
0x621: Call2 0x7c9

0x622: Pop(0)
0x623: Pop(1); Push((bool) Stack[-1] == 0)
0x624: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x625: PushEmpty(bool, object)
0x626: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x627: Call2 0x9af

0x628: Pop(1)
0x629: Pop(1); Push((bool) Stack[-1] == 0)
0x62a: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x62b: GOTO 0x646

0x62c: @@ GetPFPosition(Stack[-10])
0x62d: Pop(0)
0x62e: @ GetPFPosition(Stack[-9])
0x62f: Pop(0)
0x630: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x631: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x632: Pop(0); Push(Stack[-23] * Stack[-23]);
0x633: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x635: PushEmpty(bool, float)
0x636: Stack[-1] = Stack[-25]
0x637: Call2 0x6a1

0x638: Pop(1)
0x639: Pop(1); Push((bool) Stack[-1] == 0)
0x63a: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63b: GOTO 0x646

0x63c: GOTO 0x645

0x63d: PushEmpty(bool, float)
0x63e: Stack[-1] = Stack[-25]
0x63f: Call2 0x6a1

0x640: Pop(1)
0x641: Pop(1); Push((bool) Stack[-1] == 0)
0x642: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x643: GOTO 0x646

0x644: Stack[-7] = (bool) 1
0x645: GOTO 0x59a

0x646: @ WaitForAnimEnd()
0x647: Pop(0)
0x648: Push( Stack[3 + Tasks[-1].StackPointer] )
0x649: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x64a: Return(); Pop(22)

0x64b: Push("all")
0x64c: Push("attack_off")
0x64d: @ PlayAnimation(Stack[-2], Stack[-1])
0x64e: Pop(2)
0x64f: @ WaitForAnimEnd()
0x650: Pop(0)
0x651: Push(Stack[-8])
0x652: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x653: Push((float)2.0)
0x654: @ Sleep(Stack[-1])
0x655: Pop(1)
0x656: Return(); Pop(22)

0x657: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x658: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x659: Push("all")
0x65a: Push("attack_begin")
0x65b: Push((int) 1)
0x65c: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x65d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x65e: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x65f: Pop(2)
0x660: Pop(0); Push((bool) Stack[-3] == 0)
0x661: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x662: GOTO 0x666

0x663: Push((int) 1)
0x664: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x665: GOTO 0x659

0x666: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x667: Push("attack")
0x668: Push((int) 1)
0x669: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x66a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x66b: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x66c: Pop(1)
0x66d: Pop(0); Push((bool) Stack[-2] == 0)
0x66e: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66f: GOTO 0x673

0x670: Push((int) 1)
0x671: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x672: GOTO 0x667

0x673: Push("all")
0x674: Push("bjump")
0x675: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x676: Pop(2)
0x677: Push(CvectorIndex(Stack[-1], 2))
0x678: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x679: Return(); Pop(6)

0x67a: PushEmpty(object, float, float, object, float, float)
0x67b: Push((float)0.9)
0x67c: Pop(1); Push(Stack[-9] * Stack[-1]);
0x67d: @ GetVictim(Stack[-1], Stack[-4])
0x67e: Pop(1)
0x67f: @ ReportAttack(Stack[-0])
0x680: Pop(0)
0x681: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x682: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x683: PushEmpty(float, object, int)
0x684: Stack[-2] = Stack[-6]
0x685: Stack[-1] = Stack[-10]
0x686: Call2 0x56c

0x687: Stack[-5] = Stack[-3]
0x688: Pop(3)
0x689: PushEmpty(float, object, float, int)
0x68a: Stack[-3] = Stack[-7]
0x68b: Stack[-2] = Stack[-6]
0x68c: PushEmpty(int, object, int)
0x68d: Stack[-2] = Stack[-10]
0x68e: Stack[-1] = Stack[-14]
0x68f: Call2 0x56f

0x690: Stack[-4] = Stack[-3]
0x691: Pop(3)
0x692: Call2 0x93d

0x693: Stack[-5] = Stack[-4]
0x694: Pop(4)
0x695: PushEmpty(int)
0x696: Call2 0x7f9

0x697: Pop(0)
0x698: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x699: Pop(1)
0x69a: PushEmpty(object, float)
0x69b: Stack[-2] = Stack[-5]
0x69c: Stack[-1] = Stack[-3]
0x69d: Call2 0x800

0x69e: Pop(2)
0x69f: Return(); Pop(6)

0x6a0: Stack[-3] = 0
0x6a1: PushEmpty(int, bool, int, string, int, bool, int, string)
0x6a2: PushEmpty()
0x6a3: Call2 0x7f4

0x6a4: Pop(0)
0x6a5: @ irand(Stack[-4], Stack[-1])
0x6a6: Pop(0)
0x6a7: Push((int) 1)
0x6a8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6a9: @ Face(Stack[-0])
0x6aa: Pop(0)
0x6ab: Push((bool) 1)
0x6ac: @ SetAttackState(Stack[-1])
0x6ad: Pop(1)
0x6ae: PushEmpty()
0x6af: Call2 0xb74

0x6b0: Pop(0)
0x6b1: Push("all")
0x6b2: Push("attack_begin")
0x6b3: Pop(1); Push(Stack[-1] + Stack[-6]);
0x6b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x6b5: Pop(2)
0x6b6: @ WaitForAnimEnd()
0x6b7: Pop(0)
0x6b8: PushEmpty()
0x6b9: Call2 0x7d4

0x6ba: Pop(0)
0x6bb: PushEmpty(bool, object)
0x6bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6bd: Call2 0x9af

0x6be: Pop(1)
0x6bf: Pop(1); Push((bool) Stack[-1] == 0)
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c1: @ StopAsync()
0x6c2: Pop(0)
0x6c3: Stack[-10] = (bool) 0
0x6c4: Return(); Pop(8)

0x6c5: PushEmpty(float, int)
0x6c6: Stack[-2] = Stack[-11]
0x6c7: Stack[-1] = Stack[-6]
0x6c8: Call2 0x67a

0x6c9: Pop(2)
0x6ca: Push("all")
0x6cb: Push("attack_middle")
0x6cc: Pop(1); Push(Stack[-1] + Stack[-6]);
0x6cd: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x6ce: Pop(2)
0x6cf: Push(Stack[-3])
0x6d0: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x6d1: PushEmpty()
0x6d2: Call2 0xb74

0x6d3: Pop(0)
0x6d4: Push("all")
0x6d5: Push("attack_middle")
0x6d6: Pop(1); Push(Stack[-1] + Stack[-6]);
0x6d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x6d8: Pop(2)
0x6d9: @ WaitForAnimEnd()
0x6da: Pop(0)
0x6db: PushEmpty()
0x6dc: Call2 0x7f4

0x6dd: Pop(0)
0x6de: PushEmpty(bool, object)
0x6df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e0: Call2 0x9af

0x6e1: Pop(1)
0x6e2: Pop(1); Push((bool) Stack[-1] == 0)
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e4: @ StopAsync()
0x6e5: Pop(0)
0x6e6: Stack[-10] = (bool) 0
0x6e7: Return(); Pop(8)

0x6e8: PushEmpty(float, int)
0x6e9: Stack[-2] = Stack[-11]
0x6ea: Stack[-1] = Stack[-6]
0x6eb: Call2 0x67a

0x6ec: Pop(2)
0x6ed: Stack[-2] = (int) 1
0x6ee: Push("attack_middle")
0x6ef: Pop(1); Push(Stack[-1] + Stack[-5]);
0x6f0: Push("_")
0x6f1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6f2: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x6f3: Push("all")
0x6f4: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x6f5: Pop(1)
0x6f6: Pop(0); Push((bool) Stack[-3] == 0)
0x6f7: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f8: GOTO 0x716

0x6f9: PushEmpty()
0x6fa: Call2 0xb74

0x6fb: Pop(0)
0x6fc: Push("all")
0x6fd: @ PlayAnimation(Stack[-1], Stack[-2])
0x6fe: Pop(1)
0x6ff: @ WaitForAnimEnd()
0x700: Pop(0)
0x701: PushEmpty()
0x702: Call2 0x7f4

0x703: Pop(0)
0x704: PushEmpty(bool, object)
0x705: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x706: Call2 0x9af

0x707: Pop(1)
0x708: Pop(1); Push((bool) Stack[-1] == 0)
0x709: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70a: @ StopAsync()
0x70b: Pop(0)
0x70c: Stack[-10] = (bool) 0
0x70d: Return(); Pop(8)

0x70e: PushEmpty(float, int)
0x70f: Stack[-2] = Stack[-11]
0x710: Stack[-1] = Stack[-6]
0x711: Call2 0x67a

0x712: Pop(2)
0x713: Push((int) 1)
0x714: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x715: GOTO 0x6ee

0x716: Push((bool) 0)
0x717: @ SetAttackState(Stack[-1])
0x718: Pop(1)
0x719: Push("all")
0x71a: Push("attack_end")
0x71b: Pop(1); Push(Stack[-1] + Stack[-6]);
0x71c: @ PlayAnimation(Stack[-2], Stack[-1])
0x71d: Pop(2)
0x71e: PushEmpty(bool)
0x71f: Call2 0x802

0x720: Pop(0)
0x721: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x722: PushEmpty(bool, float)
0x723: Stack[-1] = (float) 0.75
0x724: Call2 0x72a

0x725: Pop(2)
0x726: @ StopAsync()
0x727: Pop(0)
0x728: Stack[-10] = (bool) 1
0x729: Return(); Pop(8)

0x72a: PushEmpty(float, bool, float, bool)
0x72b: @ rand(Stack[-2])
0x72c: Pop(0)
0x72d: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x72e: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x72f: @ IsAnimationPlaying(Stack[-1])
0x730: Pop(0)
0x731: Pop(0); Push((bool) Stack[-1] == 0)
0x732: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x733: GOTO 0x73d

0x734: PushEmpty(bool)
0x735: Call2 0x78c

0x736: Pop(0)
0x737: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x738: Stack[-6] = (bool) 1
0x739: Return(); Pop(4)

0x73a: @ sync()
0x73b: Pop(0)
0x73c: GOTO 0x72f

0x73d: GOTO 0x743

0x73e: @ WaitForAnimEnd()
0x73f: Pop(0)
0x740: PushEmpty()
0x741: Call2 0x7f4

0x742: Pop(0)
0x743: Stack[-6] = (bool) 0
0x744: Return(); Pop(4)

0x745: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x746: @ IsAnimationPlaying(Stack[-5])
0x747: Pop(0)
0x748: Pop(0); Push((bool) Stack[-5] == 0)
0x749: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x74a: GOTO 0x76b

0x74b: PushEmpty(bool)
0x74c: Call2 0x78c

0x74d: Pop(0)
0x74e: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x74f: Stack[-12] = (bool) 1
0x750: Return(); Pop(10)

0x751: PushEmpty(bool, object)
0x752: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x753: Call2 0x9af

0x754: Pop(1)
0x755: Pop(1); Push((bool) Stack[-1] == 0)
0x756: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x757: Stack[-12] = (bool) 0
0x758: Return(); Pop(10)

0x759: @@ GetPFPosition(Stack[-4])
0x75a: Pop(0)
0x75b: @ GetPFPosition(Stack[-3])
0x75c: Pop(0)
0x75d: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x75e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x75f: Pop(0); Push(Stack[-11] * Stack[-11]);
0x760: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x761: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x762: PushEmpty(bool, float)
0x763: Stack[-1] = Stack[-13]
0x764: Call2 0x6a1

0x765: Pop(2)
0x766: Stack[-12] = (bool) 1
0x767: Return(); Pop(10)

0x768: @ sync()
0x769: Pop(0)
0x76a: GOTO 0x746

0x76b: PushEmpty()
0x76c: Call2 0x7f4

0x76d: Pop(0)
0x76e: Stack[-12] = (bool) 0
0x76f: Return(); Pop(10)

0x770: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x771: PushEmpty(bool, object)
0x772: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x773: Call2 0x9af

0x774: Pop(1)
0x775: Pop(1); Push((bool) Stack[-1] == 0)
0x776: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x777: Stack[-11] = (bool) 0
0x778: Return(); Pop(10)

0x779: PushEmpty(bool)
0x77a: Call2 0x7c9

0x77b: Pop(0)
0x77c: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x77d: @@ GetPFPosition(Stack[-5])
0x77e: Pop(0)
0x77f: @ GetPFPosition(Stack[-4])
0x780: Pop(0)
0x781: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x782: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x783: @@ GetAttackDistance(Stack[-1])
0x784: Pop(0)
0x785: Push((int) 50)
0x786: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x787: Pop(0); Push(Stack[-1] * Stack[-1]);
0x788: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x789: Return(); Pop(10)

0x78a: Stack[-11] = (bool) 0
0x78b: Return(); Pop(10)

0x78c: PushEmpty(bool)
0x78d: Stack[-1] = (bool) 0
0x78e: PushEmpty(bool)
0x78f: Call2 0x770

0x790: Pop(0)
0x791: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x792: PushEmpty(bool)
0x793: Call2 0x79c

0x794: Pop(0)
0x795: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x796: Stack[-1] = (bool) 1
0x797: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x798: Stack[-1] = (bool) 1
0x799: Return(); Pop(0)

0x79a: Stack[-1] = (bool) 0
0x79b: Return(); Pop(0)

0x79c: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x79d: @ GetScene(Stack[-5])
0x79e: Pop(0)
0x79f: Stack[-4] = (bool) 0
0x7a0: PushEmpty(cvector, object)
0x7a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a2: Call2 0x91d

0x7a3: Pop(1)
0x7a4: Pop(1); Push(( -Stack[-1])
0x7a5: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x7a6: Pop(1)
0x7a7: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a9: GOTO 0x7c6

0x7aa: @ Face(Stack[-0])
0x7ab: Pop(0)
0x7ac: Push("all")
0x7ad: Push("bjump")
0x7ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x7af: Pop(2)
0x7b0: @@ GetPFPosition(Stack[-2])
0x7b1: Pop(0)
0x7b2: @ GetPFPosition(Stack[-1])
0x7b3: Pop(0)
0x7b4: @ WaitForAnimEnd()
0x7b5: Pop(0)
0x7b6: PushEmpty()
0x7b7: Call2 0x7f4

0x7b8: Pop(0)
0x7b9: @ StopAsync()
0x7ba: Pop(0)
0x7bb: Push(CVector(0.0, 0.0, 0.0))
0x7bc: @ SetSpeed(Stack[-1])
0x7bd: Pop(1)
0x7be: Stack[-4] = (bool) 1
0x7bf: PushEmpty(bool)
0x7c0: Call2 0x770

0x7c1: Pop(0)
0x7c2: Pop(1); Push((bool) Stack[-1] == 0)
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c4: GOTO 0x7c6

0x7c5: GOTO 0x7a0

0x7c6: Stack[-11] = Stack[-4]
0x7c7: Return(); Pop(10)

0x7c8: Stack[-5] = 0
0x7c9: PushEmpty(bool, bool)
0x7ca: Push("IsAttacking")
0x7cb: Push((int) 1)
0x7cc: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x7cd: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7ce: @@ IsAttacking(Stack[-1])
0x7cf: Pop(0)
0x7d0: Stack[-3] = Stack[-1]
0x7d1: Return(); Pop(2)

0x7d2: Stack[-3] = (bool) 0
0x7d3: Return(); Pop(2)

0x7d4: PushEmpty(float, int, float, int)
0x7d5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x7d6: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d7: Return(); Pop(4)

0x7d8: Push( Stack[5 + Tasks[-1].StackPointer] )
0x7d9: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7da: Push((int) -1)
0x7db: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x7dc: Push((int) 0)
0x7dd: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7df: Return(); Pop(4)

0x7e0: @ rand(Stack[-2])
0x7e1: Pop(0)
0x7e2: PushEmpty(float)
0x7e3: Call2 0x806

0x7e4: Pop(0)
0x7e5: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x7e6: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7e7: @ irand(Stack[-1], Stack[-2])
0x7e8: Pop(0)
0x7e9: Push((int) 1)
0x7ea: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x7eb: Push("attack")
0x7ec: Pop(1); Push(Stack[-1] + Stack[-2]);
0x7ed: @ Speak(Stack[-1])
0x7ee: Pop(1)
0x7ef: PushEmpty(int)
0x7f0: Call2 0x804

0x7f1: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x7f2: Pop(1)
0x7f3: Return(); Pop(4)

0x7f4: PushEmpty(object)
0x7f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7f6: Call2 0xb6b

0x7f7: Pop(1)
0x7f8: Return(); Pop(0)

0x7f9: Stack[-1] = (int) 0
0x7fa: Return(); Pop(0)

0x7fb: PushEmpty(string)
0x7fc: Stack[-1] = "attack_stay"
0x7fd: Call2 0xadd

0x7fe: Pop(1)
0x7ff: Return(); Pop(0)

0x800: PushEmpty()
0x801: Return(); Pop(0)

0x802: Stack[-1] = (bool) 1
0x803: Return(); Pop(0)

0x804: Stack[-1] = (int) 1
0x805: Return(); Pop(0)

0x806: Stack[-1] = (float) 0.5
0x807: Return(); Pop(0)

0x808: PushEmpty()
0x809: Call2 0x84e

0x80a: Pop(0)
0x80b: PushEmpty()
0x80c: Call2 0xe61

0x80d: Pop(0)
0x80e: Return(); Pop(0)

0x80f: PushEmpty(bool, bool, bool, bool)
0x810: PushEmpty(object)
0x811: Stack[-1] = Stack[-10]
0x812: Call2 0xb6b

0x813: Pop(1)
0x814: Push((int) 1)
0x815: Push((int) 5)
0x816: @ SetTimer(Stack[-2], Stack[-1])
0x817: Pop(2)
0x818: @ CanSee(Stack[-2], Stack[-9])
0x819: Pop(0)
0x81a: Push(Stack[-2])
0x81b: IF (Stack[-1] == 0) GOTO 0x822; Pop(1)

0x81c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x81d: PushEmpty(object)
0x81e: Stack[-1] = Stack[-10]
0x81f: Call2 0xacb

0x820: Pop(1)
0x821: GOTO 0x823

0x822: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x823: PushEmpty(bool, object)
0x824: Stack[-1] = Stack[-11]
0x825: Call2 0x92c

0x826: Pop(1)
0x827: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x828: PushEmpty(object)
0x829: Call2 0xb06

0x82a: Pop(0)
0x82b: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x82c: Pop(1)
0x82d: PushEmpty(bool, object, float, float, bool, bool)
0x82e: Stack[-5] = Stack[-15]
0x82f: Stack[-4] = Stack[-14]
0x830: Stack[-3] = Stack[-13]
0x831: Stack[-2] = Stack[-12]
0x832: Stack[-1] = Stack[-11]
0x833: Call2 0x878

0x834: Stack[-7] = Stack[-6]
0x835: Pop(6)
0x836: Push( Stack[2 + Tasks[-1].StackPointer] )
0x837: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x838: Push("head")
0x839: @ UnlookAsync(Stack[-1])
0x83a: Pop(1)
0x83b: Push((int) 1)
0x83c: @ KillTimer(Stack[-1])
0x83d: Pop(1)
0x83e: Stack[-10] = Stack[-1]
0x83f: Return(); Pop(4)

0x840: PushEmpty()
0x841: Push((int) 1)
0x842: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x844: PushEmpty(object)
0x845: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x846: Call2 0xb6b

0x847: Pop(1)
0x848: GOTO 0x84d

0x849: PushEmpty(int)
0x84a: Stack[-1] = Stack[-2]
0x84b: Call2 0x8de

0x84c: Pop(1)
0x84d: Return(); Pop(0)

0x84e: Push((int) 1)
0x84f: @ KillTimer(Stack[-1])
0x850: Pop(1)
0x851: Push( Stack[2 + Tasks[-1].StackPointer] )
0x852: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x853: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x854: Push("head")
0x855: @ UnlookAsync(Stack[-1])
0x856: Pop(1)
0x857: PushEmpty()
0x858: Call2 0x8f4

0x859: Pop(0)
0x85a: Return(); Pop(0)

0x85b: PushEmpty()
0x85c: PushEmpty(bool)
0x85d: Stack[-1] = (bool) 0
0x85e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x85f: IF (Stack[-1] == 0) GOTO 0x863; Pop(1)

0x860: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x861: IF (Stack[-1] == 0) GOTO 0x863; Pop(1)

0x862: Stack[-1] = (bool) 1
0x863: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x864: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x865: PushEmpty(object)
0x866: Stack[-1] = Stack[-2]
0x867: Call2 0xacb

0x868: Pop(1)
0x869: Return(); Pop(0)

0x86a: PushEmpty()
0x86b: PushEmpty(bool)
0x86c: Stack[-1] = (bool) 0
0x86d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x86e: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x86f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x870: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x871: Stack[-1] = (bool) 1
0x872: IF (Stack[-1] == 0) GOTO 0x877; Pop(1)

0x873: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x874: Push("head")
0x875: @ UnlookAsync(Stack[-1])
0x876: Pop(1)
0x877: Return(); Pop(0)

0x878: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x879: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x87a: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x87b: Stack[-7] = Stack[-17]
0x87c: PushEmpty(bool, object)
0x87d: Stack[-1] = Stack[-23]
0x87e: Call2 0x904

0x87f: Pop(1)
0x880: Pop(1); Push((bool) Stack[-1] == 0)
0x881: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x882: Stack[-22] = (bool) 0
0x883: Return(); Pop(16)

0x884: @@ GetPosition(Stack[-5])
0x885: Pop(0)
0x886: @ GetPosition(Stack[-4])
0x887: Pop(0)
0x888: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x889: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x88a: PushEmpty(bool)
0x88b: Stack[-1] = (bool) 0
0x88c: Push((int) 0)
0x88d: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x88e: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x88f: Pop(0); Push(Stack[-20] * Stack[-20]);
0x890: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x891: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x892: Stack[-1] = (bool) 1
0x893: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x894: @ Stop()
0x895: Pop(0)
0x896: Stack[-22] = (bool) 0
0x897: Return(); Pop(16)

0x898: Pop(0); Push(Stack[-20] * Stack[-20]);
0x899: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x89a: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x89b: @@ GetPFPosition(Stack[-5])
0x89c: Pop(0)
0x89d: @ FindPathTo(Stack[-1], Stack[-5])
0x89e: Pop(0)
0x89f: Pop(0); Push(( Stack[-1] != 0 )
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a1: Stack[-6] = Stack[-1]
0x8a2: Stack[-1] = 0
0x8a3: Pop(0); Push(( Stack[-6] != 0 )
0x8a4: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8a5: Push(Stack[-7])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8a7: Stack[-7] = (bool) 0
0x8a8: @ RotatePath(Stack[-6], Stack[-8])
0x8a9: Pop(0)
0x8aa: Pop(0); Push((bool) Stack[-8] == 0)
0x8ab: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8ac: GOTO 0x8dc

0x8ad: Push((int) 0)
0x8ae: Push((float)0.3)
0x8af: @ SetTimer(Stack[-2], Stack[-1])
0x8b0: Pop(2)
0x8b1: PushEmpty(string)
0x8b2: Call2 0x90b

0x8b3: Pop(0)
0x8b4: PushEmpty(string)
0x8b5: Call2 0x90d

0x8b6: Pop(0)
0x8b7: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x8b8: Pop(2)
0x8b9: Pop(0); Push((bool) Stack[-8] == 0)
0x8ba: IF (Stack[-1] == 0) GOTO 0x8c2; Pop(1)

0x8bb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8bc: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8bd: Stack[-6] = 0
0x8be: GOTO 0x8dc

0x8bf: GOTO 0x8c1

0x8c0: GOTO 0x8db

0x8c1: GOTO 0x8c3

0x8c2: Stack[-6] = 0
0x8c3: GOTO 0x8d4

0x8c4: Push((int) 0)
0x8c5: @ KillTimer(Stack[-1])
0x8c6: Pop(1)
0x8c7: Push((float)0.5)
0x8c8: @ Sleep(Stack[-1], Stack[-9])
0x8c9: Pop(1)
0x8ca: Pop(0); Push((bool) Stack[-8] == 0)
0x8cb: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8cc: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8cd: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8ce: Stack[-6] = 0
0x8cf: GOTO 0x8dc

0x8d0: Push((int) 0)
0x8d1: Push((float)0.3)
0x8d2: @ SetTimer(Stack[-2], Stack[-1])
0x8d3: Pop(2)
0x8d4: Stack[-1] = 0
0x8d5: GOTO 0x8da

0x8d6: Push((int) 0)
0x8d7: @ KillTimer(Stack[-1])
0x8d8: Pop(1)
0x8d9: GOTO 0x8dc

0x8da: Stack[-6] = 0
0x8db: GOTO 0x87c

0x8dc: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x8dd: Return(); Pop(16)

0x8de: PushEmpty()
0x8df: Push((int) 0)
0x8e0: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e2: Return(); Pop(0)

0x8e3: PushEmpty(bool, object)
0x8e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e5: Call2 0x904

0x8e6: Pop(1)
0x8e7: Pop(1); Push((bool) Stack[-1] == 0)
0x8e8: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x8ea: Push((int) 0)
0x8eb: @ KillTimer(Stack[-1])
0x8ec: Pop(1)
0x8ed: @ Stop()
0x8ee: Pop(0)
0x8ef: Return(); Pop(0)

0x8f0: PushEmpty()
0x8f1: @ RequestClearPath(Stack[-1])
0x8f2: Pop(0)
0x8f3: Return(); Pop(0)

0x8f4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x8f5: Push((int) 0)
0x8f6: @ KillTimer(Stack[-1])
0x8f7: Pop(1)
0x8f8: @ Stop()
0x8f9: Pop(0)
0x8fa: Return(); Pop(0)

0x8fb: PushEmpty()
0x8fc: PushEmpty()
0x8fd: Call2 0x84e

0x8fe: Pop(0)
0x8ff: PushEmpty(object)
0x900: Stack[-1] = Stack[-2]
0x901: Call2 0xcdd

0x902: Pop(1)
0x903: Return(); Pop(0)

0x904: PushEmpty()
0x905: PushEmpty(bool, object)
0x906: Stack[-1] = Stack[-3]
0x907: Call2 0x9af

0x908: Stack[-4] = Stack[-2]
0x909: Pop(2)
0x90a: Return(); Pop(0)

0x90b: Stack[-1] = "walk"
0x90c: Return(); Pop(0)

0x90d: Stack[-1] = "run"
0x90e: Return(); Pop(0)

0x90f: PushEmpty()
0x910: Push((int) 2)
0x911: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x912: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x913: Stack[-2] = "fire"
0x914: Return(); Pop(0)

0x915: GOTO 0x91b

0x916: Push((int) 1)
0x917: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x918: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x919: Stack[-2] = "bullet"
0x91a: Return(); Pop(0)

0x91b: Stack[-2] = "phys"
0x91c: Return(); Pop(0)

0x91d: PushEmpty(cvector, cvector, cvector, cvector)
0x91e: @ GetPosition(Stack[-2])
0x91f: Pop(0)
0x920: @@ GetPosition(Stack[-1])
0x921: Pop(0)
0x922: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x923: Return(); Pop(4)

0x924: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x925: @ GetPosition(Stack[-3])
0x926: Pop(0)
0x927: @@ GetPosition(Stack[-2])
0x928: Pop(0)
0x929: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x92a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x92b: Return(); Pop(6)

0x92c: PushEmpty(bool, bool)
0x92d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x92e: Pop(0)
0x92f: Stack[-4] = Stack[-1]
0x930: Return(); Pop(2)

0x931: PushEmpty(bool, bool)
0x932: Push("HasProperty")
0x933: Push((int) 2)
0x934: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x935: Pop(1); Push((bool) Stack[-1] == 0)
0x936: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x937: Stack[-5] = (bool) 0
0x938: Return(); Pop(2)

0x939: @@ HasProperty(Stack[-3], Stack[-1])
0x93a: Pop(0)
0x93b: Stack[-5] = Stack[-1]
0x93c: Return(); Pop(2)

0x93d: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x93e: PushEmpty(bool, object, string)
0x93f: Stack[-2] = Stack[-18]
0x940: Stack[-1] = "health"
0x941: Call2 0x931

0x942: Pop(2)
0x943: Pop(1); Push((bool) Stack[-1] == 0)
0x944: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x945: Stack[-16] = (float) 0.0
0x946: Return(); Pop(12)

0x947: PushEmpty(bool, object, string)
0x948: Stack[-2] = Stack[-18]
0x949: Stack[-1] = "armor"
0x94a: Call2 0x931

0x94b: Pop(2)
0x94c: Pop(1); Push((bool) Stack[-1] == 0)
0x94d: IF (Stack[-1] == 0) GOTO 0x950; Pop(1)

0x94e: Stack[-6] = (int) 0
0x94f: GOTO 0x953

0x950: Push("armor")
0x951: @@ GetProperty(Stack[-1], Stack[-7])
0x952: Pop(1)
0x953: Push("armor_")
0x954: PushEmpty(string, int)
0x955: Stack[-1] = Stack[-16]
0x956: Call2 0x90f

0x957: Pop(1)
0x958: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x959: PushEmpty(bool, object, string)
0x95a: Stack[-2] = Stack[-18]
0x95b: Stack[-1] = Stack[-8]
0x95c: Call2 0x931

0x95d: Pop(2)
0x95e: Pop(1); Push((bool) Stack[-1] == 0)
0x95f: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x960: Stack[-4] = (int) 0
0x961: GOTO 0x964

0x962: @@ GetProperty(Stack[-5], Stack[-4])
0x963: Pop(0)
0x964: PushEmpty(float, float, float)
0x965: Pop(0); Push(Stack[-9] + Stack[-7]);
0x966: Push((float)100.0)
0x967: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x968: Stack[-1] = (int) 1
0x969: Call2 0xb16

0x96a: Stack[-6] = Stack[-3]
0x96b: Pop(3)
0x96c: Push("health")
0x96d: @@ GetProperty(Stack[-1], Stack[-3])
0x96e: Pop(1)
0x96f: Push((int) 1)
0x970: Pop(1); Push(Stack[-1] - Stack[-4]);
0x971: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x972: Push("health")
0x973: PushEmpty(float, float, float, float)
0x974: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x975: Stack[-2] = (int) 0
0x976: Stack[-1] = (int) 1
0x977: Call2 0xb1d

0x978: Pop(3)
0x979: @@ SetProperty(Stack[-2], Stack[-1])
0x97a: Pop(2)
0x97b: PushEmpty(bool, object)
0x97c: Stack[-1] = Stack[-17]
0x97d: Call2 0x92c

0x97e: Pop(1)
0x97f: IF (Stack[-1] == 0) GOTO 0x984; Pop(1)

0x980: PushEmpty(float)
0x981: Stack[-1] = -Stack[-2]; Pop(0);
0x982: Call2 0xb51

0x983: Pop(1)
0x984: Stack[-16] = Stack[-1]
0x985: Return(); Pop(12)

0x986: PushEmpty(bool, bool)
0x987: @@ IsDead(Stack[-1])
0x988: Pop(0)
0x989: Stack[-4] = Stack[-1]
0x98a: Return(); Pop(2)

0x98b: PushEmpty(object, object, object, object)
0x98c: Pop(0); Push((bool) Stack[-5] == 0)
0x98d: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98e: Stack[-6] = (bool) 0
0x98f: Return(); Pop(4)

0x990: PushEmpty(bool)
0x991: Stack[-1] = (bool) 0
0x992: Push("IsDead")
0x993: Push((int) 1)
0x994: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x995: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x996: PushEmpty(bool, object)
0x997: Stack[-1] = Stack[-8]
0x998: Call2 0x986

0x999: Pop(1)
0x99a: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x99b: Stack[-1] = (bool) 1
0x99c: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x99d: Stack[-6] = (bool) 0
0x99e: Return(); Pop(4)

0x99f: @ GetScene(Stack[-2])
0x9a0: Pop(0)
0x9a1: Pop(0); Push((bool) Stack[-2] == 0)
0x9a2: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x9a3: Stack[-6] = (bool) 0
0x9a4: Return(); Pop(4)

0x9a5: @@ GetScene(Stack[-1])
0x9a6: Pop(0)
0x9a7: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x9a8: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a9: Stack[-6] = (bool) 0
0x9aa: Return(); Pop(4)

0x9ab: Stack[-6] = (bool) 1
0x9ac: Return(); Pop(4)

0x9ad: Stack[-1] = 0
0x9ae: Stack[-2] = 0
0x9af: PushEmpty(int, int)
0x9b0: PushEmpty(bool, object)
0x9b1: Stack[-1] = Stack[-5]
0x9b2: Call2 0x98b

0x9b3: Pop(1)
0x9b4: Pop(1); Push((bool) Stack[-1] == 0)
0x9b5: IF (Stack[-1] == 0) GOTO 0x9b8; Pop(1)

0x9b6: Stack[-4] = (bool) 0
0x9b7: Return(); Pop(2)

0x9b8: PushEmpty(bool, object, string)
0x9b9: Stack[-2] = Stack[-6]
0x9ba: Stack[-1] = "noaccess"
0x9bb: Call2 0x931

0x9bc: Pop(2)
0x9bd: Pop(1); Push((bool) Stack[-1] == 0)
0x9be: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9bf: Stack[-4] = (bool) 1
0x9c0: Return(); Pop(2)

0x9c1: Push("noaccess")
0x9c2: @@ GetProperty(Stack[-1], Stack[-2])
0x9c3: Pop(1)
0x9c4: Push((int) 0)
0x9c5: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x9c6: Return(); Pop(2)

0x9c7: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x9c8: Pop(0); Push((bool) Stack[-15] == 0)
0x9c9: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9ca: Return(); Pop(14)

0x9cb: @ IsDead(Stack[-7])
0x9cc: Pop(0)
0x9cd: Push(Stack[-7])
0x9ce: IF (Stack[-1] == 0) GOTO 0x9d0; Pop(1)

0x9cf: Return(); Pop(14)

0x9d0: @ GetSecondaryAnimationType(Stack[-6])
0x9d1: Pop(0)
0x9d2: Push((int) 0)
0x9d3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x9d4: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9d5: Return(); Pop(14)

0x9d6: @@ GetPosition(Stack[-5])
0x9d7: Pop(0)
0x9d8: @ GetPosition(Stack[-4])
0x9d9: Pop(0)
0x9da: @ GetDirection(Stack[-3])
0x9db: Pop(0)
0x9dc: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x9dd: Push(CvectorIndex(Stack[-2], 0))
0x9de: Push(CvectorIndex(Stack[-4], 0))
0x9df: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9e0: Push(CvectorIndex(Stack[-3], 2))
0x9e1: Push(CvectorIndex(Stack[-5], 2))
0x9e2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9e3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9e4: Push((int) 0)
0x9e5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x9e6: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e7: Stack[-1] = "fhit"
0x9e8: GOTO 0x9ea

0x9e9: Stack[-1] = "bhit"
0x9ea: Push("hit_react")
0x9eb: Push("1")
0x9ec: Pop(1); Push(Stack[-3] + Stack[-1]);
0x9ed: Push("2")
0x9ee: Pop(1); Push(Stack[-4] + Stack[-1]);
0x9ef: Push((int) -10)
0x9f0: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9f1: Pop(4)
0x9f2: Return(); Pop(14)

0x9f3: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x9f4: PushEmpty(bool)
0x9f5: Stack[-1] = (bool) 0
0x9f6: PushEmpty(bool)
0x9f7: Stack[-1] = (bool) 0
0x9f8: Push(Stack[-23])
0x9f9: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9fa: Push((int) 4)
0x9fb: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x9fc: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9fd: Stack[-1] = (bool) 1
0x9fe: IF (Stack[-1] == 0) GOTO 0xa03; Pop(1)

0x9ff: Push((int) 5)
0xa00: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xa01: IF (Stack[-1] == 0) GOTO 0xa03; Pop(1)

0xa02: Stack[-1] = (bool) 1
0xa03: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa04: PushEmpty(cvector, cvector)
0xa05: PushEmpty(cvector, object)
0xa06: Stack[-1] = Stack[-25]
0xa07: Call2 0x91d

0xa08: Stack[-3] = Stack[-2]
0xa09: Pop(2)
0xa0a: Call2 0xb0c

0xa0b: Stack[-11] = Stack[-2]
0xa0c: Pop(2)
0xa0d: @ CreateVectorVector(Stack[-8])
0xa0e: Pop(0)
0xa0f: Stack[-7] = (int) 1
0xa10: Push("hit")
0xa11: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa12: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xa13: Pop(1)
0xa14: Pop(0); Push((bool) Stack[-6] == 0)
0xa15: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa16: GOTO 0xa20

0xa17: Pop(0); Push(Stack[-4] | Stack[-9]);
0xa18: Push((float)0.70711)
0xa19: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa1a: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa1b: @@ add(Stack[-5])
0xa1c: Pop(0)
0xa1d: Push((int) 1)
0xa1e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xa1f: GOTO 0xa10

0xa20: @@ size(Stack[-3])
0xa21: Pop(0)
0xa22: Push(Stack[-3])
0xa23: IF (Stack[-1] == 0) GOTO 0xa31; Pop(1)

0xa24: @ irand(Stack[-2], Stack[-3])
0xa25: Pop(0)
0xa26: @@ get(Stack[-1], Stack[-2])
0xa27: Pop(0)
0xa28: PushEmpty(object, int, float, cvector, cvector)
0xa29: Stack[-5] = Stack[-26]
0xa2a: Stack[-4] = Stack[-25]
0xa2b: Stack[-3] = Stack[-24]
0xa2c: Stack[-2] = Stack[-6]
0xa2d: Stack[-1] = -Stack[-14]; Pop(0);
0xa2e: Call2 0xa37

0xa2f: Pop(5)
0xa30: Return(); Pop(18)

0xa31: Stack[-8] = 0
0xa32: PushEmpty(object)
0xa33: Stack[-1] = Stack[-22]
0xa34: Call2 0x9c7

0xa35: Pop(1)
0xa36: Return(); Pop(18)

0xa37: PushEmpty(object, object, object, object)
0xa38: @ GetScene(Stack[-2])
0xa39: Pop(0)
0xa3a: Push("scripted")
0xa3b: Push("blood_dir.xml")
0xa3c: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xa3d: Pop(2)
0xa3e: PushEmpty(object)
0xa3f: Stack[-1] = Stack[-10]
0xa40: Call2 0x9c7

0xa41: Pop(1)
0xa42: Return(); Pop(4)

0xa43: Stack[-1] = 0
0xa44: Stack[-2] = 0
0xa45: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xa46: @@ GetPosition(Stack[-3])
0xa47: Pop(0)
0xa48: @ GetPosition(Stack[-2])
0xa49: Pop(0)
0xa4a: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xa4b: Push(CvectorIndex(Stack[-1], 0))
0xa4c: Push(CvectorIndex(Stack[-2], 2))
0xa4d: @ RotateAsync(Stack[-2], Stack[-1])
0xa4e: Pop(2)
0xa4f: Return(); Pop(6)

0xa50: PushEmpty(bool, bool)
0xa51: @ IsLoaded(Stack[-1])
0xa52: Pop(0)
0xa53: Stack[-3] = Stack[-1]
0xa54: Return(); Pop(2)

0xa55: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa56: @@ GetPosition(Stack[-8])
0xa57: Pop(0)
0xa58: @@ GetEyesHeight(Stack[-9])
0xa59: Pop(0)
0xa5a: Push(CvectorIndex(Stack[-8], 1))
0xa5b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa5c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa5d: @ GetPosition(Stack[-7])
0xa5e: Pop(0)
0xa5f: @ GetEyesHeight(Stack[-9])
0xa60: Pop(0)
0xa61: Push(CvectorIndex(Stack[-7], 1))
0xa62: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa63: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa64: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xa65: Push(CvectorIndex(Stack[-6], 1))
0xa66: Stack[-1] = (int) 0
0xa67: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa68: Pop(0); Push(Stack[-6] | Stack[-6]);
0xa69: Pop(1); Push(Sqrt(Stack[-1]))
0xa6a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xa6b: Stack[-5] = -Stack[-6]; Pop(0);
0xa6c: Pop(0); Push(Stack[-6] * Stack[-19]);
0xa6d: PushEmpty(cvector, cvector)
0xa6e: Push(CVector(0.0, 1.0, 0.0))
0xa6f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xa70: Call2 0xb0c

0xa71: Pop(1)
0xa72: Push((int) 25)
0xa73: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa74: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa75: Push(CVector(0.0, 10.0, 0.0))
0xa76: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa77: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xa78: @ IsOverrideActive(Stack[-2])
0xa79: Pop(0)
0xa7a: Push(Stack[-2])
0xa7b: IF (Stack[-1] == 0) GOTO 0xa7e; Pop(1)

0xa7c: Stack[-21] = (bool) 0
0xa7d: Return(); Pop(18)

0xa7e: @ StopWorld()
0xa7f: Pop(0)
0xa80: Push((bool) 1)
0xa81: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xa82: Pop(1)
0xa83: Push(CvectorIndex(Stack[-4], 0))
0xa84: Push(CvectorIndex(Stack[-5], 2))
0xa85: @ Rotate(Stack[-2], Stack[-1])
0xa86: Pop(2)
0xa87: PushEmpty(bool)
0xa88: Call2 0xe8e

0xa89: Pop(0)
0xa8a: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa8b: GOTO 0xa94

0xa8c: Push("head")
0xa8d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa8e: Pop(1)
0xa8f: Push(Stack[-1])
0xa90: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa91: Push("head")
0xa92: @ LookAsyncCamera(Stack[-1])
0xa93: Pop(1)
0xa94: @ CameraWaitForPlayFinish()
0xa95: Pop(0)
0xa96: @ ResumeWorld()
0xa97: Pop(0)
0xa98: Stack[-21] = (bool) 1
0xa99: Return(); Pop(18)

0xa9a: PushEmpty(bool, bool)
0xa9b: Push((bool) 1)
0xa9c: @ CameraSwitchToNormal(Stack[-1])
0xa9d: Pop(1)
0xa9e: PushEmpty(bool)
0xa9f: Call2 0xe8e

0xaa0: Pop(0)
0xaa1: IF (Stack[-1] == 0) GOTO 0xaa3; Pop(1)

0xaa2: GOTO 0xaab

0xaa3: Push("head")
0xaa4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xaa5: Pop(1)
0xaa6: Push(Stack[-1])
0xaa7: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xaa8: Push("head")
0xaa9: @ UnlookAsync(Stack[-1])
0xaaa: Pop(1)
0xaab: Return(); Pop(2)

0xaac: PushEmpty(bool, float, float, bool, float, float)
0xaad: @ lshHasAnimation(Stack[-3], Stack[-7])
0xaae: Pop(0)
0xaaf: Push(Stack[-3])
0xab0: IF (Stack[-1] == 0) GOTO 0xab7; Pop(1)

0xab1: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xab2: Pop(0)
0xab3: Push((bool) 0)
0xab4: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xab5: Pop(1)
0xab6: GOTO 0xabb

0xab7: Push("Can't find lsh animation : ")
0xab8: Pop(1); Push(Stack[-1] + Stack[-8]);
0xab9: @ Trace(Stack[-1])
0xaba: Pop(1)
0xabb: Return(); Pop(6)

0xabc: PushEmpty(bool, float, float, bool, float, float)
0xabd: @ lshHasAnimation(Stack[-3], Stack[-8])
0xabe: Pop(0)
0xabf: Push(Stack[-3])
0xac0: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xac1: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xac2: Pop(0)
0xac3: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xac4: Pop(0)
0xac5: GOTO 0xaca

0xac6: Push("Can't find lsh animation : ")
0xac7: Pop(1); Push(Stack[-1] + Stack[-9]);
0xac8: @ Trace(Stack[-1])
0xac9: Pop(1)
0xaca: Return(); Pop(6)

0xacb: PushEmpty(float, cvector, float, cvector)
0xacc: @@ GetEyesHeight(Stack[-2])
0xacd: Pop(0)
0xace: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xacf: Push(CvectorIndex(Stack[-1], 1))
0xad0: Stack[-1] = Stack[-3]
0xad1: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xad2: Push("head")
0xad3: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xad4: Pop(1)
0xad5: Return(); Pop(4)

0xad6: PushEmpty(bool)
0xad7: Call2 0xe8e

0xad8: Pop(0)
0xad9: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xada: @ lshStopSpeech()
0xadb: Pop(0)
0xadc: Return(); Pop(0)

0xadd: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xade: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xadf: Pop(0)
0xae0: Pop(0); Push((bool) Stack[-8] == 0)
0xae1: IF (Stack[-1] == 0) GOTO 0xaf6; Pop(1)

0xae2: Stack[-7] = (int) 0
0xae3: Push((int) 1)
0xae4: Pop(1); Push(Stack[-8] + Stack[-1]);
0xae5: Pop(1); Push(Stack[-18] + Stack[-1]);
0xae6: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xae7: Pop(1)
0xae8: Pop(0); Push((bool) Stack[-6] == 0)
0xae9: IF (Stack[-1] == 0) GOTO 0xaeb; Pop(1)

0xaea: GOTO 0xaee

0xaeb: Push((int) 1)
0xaec: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xaed: GOTO 0xae3

0xaee: Pop(0); Push((bool) Stack[-7] == 0)
0xaef: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaf0: Return(); Pop(16)

0xaf1: @ irand(Stack[-5], Stack[-7])
0xaf2: Pop(0)
0xaf3: Push((int) 1)
0xaf4: Pop(1); Push(Stack[-6] + Stack[-1]);
0xaf5: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xaf6: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xaf7: Pop(0)
0xaf8: Push(Stack[-4])
0xaf9: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xafa: @ GetEyesHeight(Stack[-3])
0xafb: Pop(0)
0xafc: @ GetDirection(Stack[-2])
0xafd: Pop(0)
0xafe: Push((int) 50)
0xaff: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xb00: Push(CvectorIndex(Stack[-1], 1))
0xb01: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xb02: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xb03: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xb04: Pop(0)
0xb05: Return(); Pop(16)

0xb06: PushEmpty(object, object)
0xb07: @ self(Stack[-1])
0xb08: Pop(0)
0xb09: Stack[-3] = Stack[-1]
0xb0a: Return(); Pop(2)

0xb0b: Stack[-1] = 0
0xb0c: PushEmpty(float, float)
0xb0d: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb0e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb0f: Push((float)0.0)
0xb10: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb11: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xb12: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xb13: Return(); Pop(2)

0xb14: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb15: Return(); Pop(2)

0xb16: PushEmpty()
0xb17: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xb18: IF (Stack[-1] == 0) GOTO 0xb1b; Pop(1)

0xb19: Stack[-3] = Stack[-2]
0xb1a: GOTO 0xb1c

0xb1b: Stack[-3] = Stack[-1]
0xb1c: Return(); Pop(0)

0xb1d: PushEmpty()
0xb1e: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xb1f: IF (Stack[-1] == 0) GOTO 0xb22; Pop(1)

0xb20: Stack[-4] = Stack[-2]
0xb21: Return(); Pop(0)

0xb22: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xb23: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb24: Stack[-4] = Stack[-1]
0xb25: Return(); Pop(0)

0xb26: Stack[-4] = Stack[-3]
0xb27: Return(); Pop(0)

0xb28: PushEmpty()
0xb29: Push(CvectorIndex(Stack[-2], 0))
0xb2a: Push(CvectorIndex(Stack[-2], 0))
0xb2b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb2c: Push(CvectorIndex(Stack[-3], 2))
0xb2d: Push(CvectorIndex(Stack[-3], 2))
0xb2e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb2f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb30: Return(); Pop(0)

0xb31: PushEmpty()
0xb32: Push(CvectorIndex(Stack[-1], 0))
0xb33: Push(CvectorIndex(Stack[-2], 0))
0xb34: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb35: Push(CvectorIndex(Stack[-2], 2))
0xb36: Push(CvectorIndex(Stack[-3], 2))
0xb37: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb38: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb39: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xb3a: Return(); Pop(0)

0xb3b: PushEmpty()
0xb3c: PushEmpty(float, cvector, cvector)
0xb3d: Stack[-2] = Stack[-5]
0xb3e: Stack[-1] = Stack[-4]
0xb3f: Call2 0xb28

0xb40: Pop(2)
0xb41: PushEmpty(float, cvector)
0xb42: Stack[-1] = Stack[-5]
0xb43: Call2 0xb31

0xb44: Pop(1)
0xb45: PushEmpty(float, cvector)
0xb46: Stack[-1] = Stack[-5]
0xb47: Call2 0xb31

0xb48: Pop(1)
0xb49: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb4a: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xb4b: Return(); Pop(0)

0xb4c: PushEmpty(int, int)
0xb4d: @ GetVariable(Stack[-3], Stack[-1])
0xb4e: Pop(0)
0xb4f: Stack[-4] = Stack[-1]
0xb50: Return(); Pop(2)

0xb51: PushEmpty(object, object)
0xb52: @ CreateFloatVector(Stack[-1])
0xb53: Pop(0)
0xb54: @@ add(Stack[-3])
0xb55: Pop(0)
0xb56: Push((int) 0)
0xb57: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xb58: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb59: Push((float)0.7)
0xb5a: Push((int) 500)
0xb5b: @ RumblePlay(Stack[-2], Stack[-1])
0xb5c: Pop(2)
0xb5d: Push((int) 15)
0xb5e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xb5f: Pop(1)
0xb60: Return(); Pop(2)

0xb61: Stack[-1] = 0
0xb62: PushEmpty(float, float)
0xb63: @ GetGameTime(Stack[-1])
0xb64: Pop(0)
0xb65: Push((int) 1)
0xb66: PushEmpty(int)
0xb67: Push((int) 24)
0xb68: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb69: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb6a: Return(); Pop(2)

0xb6b: PushEmpty(bool, bool)
0xb6c: @ IsPlayerActor(Stack[-3], Stack[-1])
0xb6d: Pop(0)
0xb6e: Push(Stack[-1])
0xb6f: IF (Stack[-1] == 0) GOTO 0xb73; Pop(1)

0xb70: Push("attack")
0xb71: @ PlayGlobalMusic(Stack[-1])
0xb72: Pop(1)
0xb73: Return(); Pop(2)

0xb74: PushEmpty(object, object)
0xb75: @ GetScene(Stack[-1])
0xb76: Pop(0)
0xb77: Push("battle")
0xb78: PushEmpty(object)
0xb79: Call2 0xb06

0xb7a: Pop(0)
0xb7b: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xb7c: Pop(2)
0xb7d: Return(); Pop(2)

0xb7e: Stack[-1] = 0
0xb7f: PushEmpty()
0xb80: PushEmpty(int, string)
0xb81: Stack[-1] = "branch"
0xb82: Call2 0xb4c

0xb83: Pop(1)
0xb84: Push((int) 0)
0xb85: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb86: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb87: Stack[-2] = (bool) 1
0xb88: Return(); Pop(0)

0xb89: Stack[-2] = (bool) 0
0xb8a: Return(); Pop(0)

0xb8b: PushEmpty()
0xb8c: PushEmpty(int, string)
0xb8d: Stack[-1] = "branch"
0xb8e: Call2 0xb4c

0xb8f: Pop(1)
0xb90: Push((int) 2)
0xb91: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb92: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb93: Stack[-2] = (bool) 1
0xb94: Return(); Pop(0)

0xb95: Stack[-2] = (bool) 0
0xb96: Return(); Pop(0)

0xb97: PushEmpty()
0xb98: PushEmpty(bool, object)
0xb99: Stack[-1] = Stack[-3]
0xb9a: Call2 0xba1

0xb9b: Pop(1)
0xb9c: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb9d: Stack[-2] = (bool) 1
0xb9e: Return(); Pop(0)

0xb9f: Stack[-2] = (bool) 0
0xba0: Return(); Pop(0)

0xba1: PushEmpty()
0xba2: PushEmpty(int)
0xba3: Call2 0xb62

0xba4: Pop(0)
0xba5: Push((int) 1)
0xba6: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xba7: Return(); Pop(0)

0xba8: PushEmpty(int, int)
0xba9: Push("branch")
0xbaa: @ GetVariable(Stack[-1], Stack[-2])
0xbab: Pop(1)
0xbac: Push((int) 0)
0xbad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbae: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbaf: Stack[-3] = (int) 1
0xbb0: Return(); Pop(2)

0xbb1: GOTO 0xbb7

0xbb2: Push((int) 1)
0xbb3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb4: IF (Stack[-1] == 0) GOTO 0xbb7; Pop(1)

0xbb5: Stack[-3] = (int) 2
0xbb6: Return(); Pop(2)

0xbb7: Stack[-3] = (int) 3
0xbb8: Return(); Pop(2)

0xbb9: PushEmpty(int, int)
0xbba: Push("branch")
0xbbb: @ GetVariable(Stack[-1], Stack[-2])
0xbbc: Pop(1)
0xbbd: Stack[-3] = Stack[-1]
0xbbe: Return(); Pop(2)

0xbbf: PushEmpty()
0xbc0: PushEmpty(int)
0xbc1: Call2 0xbb9

0xbc2: Pop(0)
0xbc3: Push((int) 1)
0xbc4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbc5: IF (Stack[-1] == 0) GOTO 0xbc9; Pop(1)

0xbc6: @ WorkWithCorpse(Stack[-1])
0xbc7: Pop(0)
0xbc8: GOTO 0xbcb

0xbc9: @ Barter(Stack[-1])
0xbca: Pop(0)
0xbcb: Return(); Pop(0)

0xbcc: PushEmpty(int, bool, int, bool)
0xbcd: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xbce: IF (Stack[-1] == 0) GOTO 0xbd3; Pop(1)

0xbcf: Push("GenerateMoney: iMin > iMax")
0xbd0: @ Trace(Stack[-1])
0xbd1: Pop(1)
0xbd2: Return(); Pop(4)

0xbd3: Stack[-2] = (int) 0
0xbd4: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xbd5: IF (Stack[-1] == 0) GOTO 0xbda; Pop(1)

0xbd6: Pop(0); Push(Stack[-5] - Stack[-6]);
0xbd7: @ irand(Stack[-3], Stack[-1])
0xbd8: Pop(1)
0xbd9: GOTO 0xbde

0xbda: Push((int) 0)
0xbdb: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xbdc: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbdd: Return(); Pop(4)

0xbde: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xbdf: Push((int) 0)
0xbe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe1: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbe2: Return(); Pop(4)

0xbe3: PushEmpty(int, string)
0xbe4: Stack[-1] = "Money"
0xbe5: Call2 0xcc3

0xbe6: Pop(1)
0xbe7: Push((int) 0)
0xbe8: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xbe9: Pop(2)
0xbea: Return(); Pop(4)

0xbeb: PushEmpty(object, int, bool, object, int, bool)
0xbec: @ CreateInvItem(Stack[-3])
0xbed: Pop(0)
0xbee: @@ SetItemName(Stack[-7])
0xbef: Pop(0)
0xbf0: Push("Organ")
0xbf1: Push((int) 1)
0xbf2: @@ SetProperty(Stack[-2], Stack[-1])
0xbf3: Pop(2)
0xbf4: @@ GetItemID(Stack[-2])
0xbf5: Pop(0)
0xbf6: Push((int) 0)
0xbf7: Push((int) 1)
0xbf8: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xbf9: Pop(2)
0xbfa: Return(); Pop(6)

0xbfb: Stack[-3] = 0
0xbfc: PushEmpty(int)
0xbfd: Call2 0xbb9

0xbfe: Pop(0)
0xbff: Push((int) 1)
0xc00: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xc01: IF (Stack[-1] == 0) GOTO 0xc03; Pop(1)

0xc02: Return(); Pop(0)

0xc03: PushEmpty(string)
0xc04: Stack[-1] = "liver"
0xc05: Call2 0xbeb

0xc06: Pop(1)
0xc07: PushEmpty(string)
0xc08: Stack[-1] = "kidney"
0xc09: Call2 0xbeb

0xc0a: Pop(1)
0xc0b: PushEmpty(string)
0xc0c: Stack[-1] = "heart"
0xc0d: Call2 0xbeb

0xc0e: Pop(1)
0xc0f: PushEmpty(string)
0xc10: Stack[-1] = "blood"
0xc11: Call2 0xbeb

0xc12: Pop(1)
0xc13: Return(); Pop(0)

0xc14: PushEmpty(int, bool, int, bool)
0xc15: Push(Stack[-5])
0xc16: IF (Stack[-1] == 0) GOTO 0xc6d; Pop(1)

0xc17: PushEmpty(int, int)
0xc18: Stack[-2] = (int) 0
0xc19: Push((int) 100)
0xc1a: PushEmpty(int)
0xc1b: Call2 0xb62

0xc1c: Pop(0)
0xc1d: Push((int) 100)
0xc1e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc1f: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc20: Call2 0xbcc

0xc21: Pop(2)
0xc22: Push((int) 8)
0xc23: @ irand(Stack[-3], Stack[-1])
0xc24: Pop(1)
0xc25: Push((int) 0)
0xc26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc27: IF (Stack[-1] == 0) GOTO 0xc31; Pop(1)

0xc28: PushEmpty(int, string)
0xc29: Stack[-1] = "lemon"
0xc2a: Call2 0xcc3

0xc2b: Pop(1)
0xc2c: Push((int) 0)
0xc2d: Push((int) 1)
0xc2e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc2f: Pop(3)
0xc30: GOTO 0xc6c

0xc31: Push((int) 1)
0xc32: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc33: IF (Stack[-1] == 0) GOTO 0xc3d; Pop(1)

0xc34: PushEmpty(int, string)
0xc35: Stack[-1] = "rusk"
0xc36: Call2 0xcc3

0xc37: Pop(1)
0xc38: Push((int) 0)
0xc39: Push((int) 1)
0xc3a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc3b: Pop(3)
0xc3c: GOTO 0xc6c

0xc3d: Push((int) 2)
0xc3e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3f: IF (Stack[-1] == 0) GOTO 0xc49; Pop(1)

0xc40: PushEmpty(int, string)
0xc41: Stack[-1] = "hook"
0xc42: Call2 0xcc3

0xc43: Pop(1)
0xc44: Push((int) 0)
0xc45: Push((int) 1)
0xc46: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc47: Pop(3)
0xc48: GOTO 0xc6c

0xc49: Push((int) 4)
0xc4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc4b: IF (Stack[-1] == 0) GOTO 0xc55; Pop(1)

0xc4c: PushEmpty(int, string)
0xc4d: Stack[-1] = "syringe"
0xc4e: Call2 0xcc3

0xc4f: Pop(1)
0xc50: Push((int) 0)
0xc51: Push((int) 1)
0xc52: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc53: Pop(3)
0xc54: GOTO 0xc6c

0xc55: Push((int) 5)
0xc56: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc57: IF (Stack[-1] == 0) GOTO 0xc61; Pop(1)

0xc58: PushEmpty(int, string)
0xc59: Stack[-1] = "watch"
0xc5a: Call2 0xcc3

0xc5b: Pop(1)
0xc5c: Push((int) 0)
0xc5d: Push((int) 1)
0xc5e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc5f: Pop(3)
0xc60: GOTO 0xc6c

0xc61: Push((int) 6)
0xc62: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc63: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc64: PushEmpty(int, string)
0xc65: Stack[-1] = "razor"
0xc66: Call2 0xcc3

0xc67: Pop(1)
0xc68: Push((int) 0)
0xc69: Push((int) 1)
0xc6a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc6b: Pop(3)
0xc6c: GOTO 0xcc2

0xc6d: PushEmpty(int, int)
0xc6e: Stack[-2] = (int) 0
0xc6f: Push((int) 50)
0xc70: PushEmpty(int)
0xc71: Call2 0xb62

0xc72: Pop(0)
0xc73: Push((int) 50)
0xc74: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc75: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc76: Call2 0xbcc

0xc77: Pop(2)
0xc78: Push((int) 7)
0xc79: @ irand(Stack[-3], Stack[-1])
0xc7a: Pop(1)
0xc7b: Push((int) 0)
0xc7c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7d: IF (Stack[-1] == 0) GOTO 0xc87; Pop(1)

0xc7e: PushEmpty(int, string)
0xc7f: Stack[-1] = "beads"
0xc80: Call2 0xcc3

0xc81: Pop(1)
0xc82: Push((int) 0)
0xc83: Push((int) 1)
0xc84: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc85: Pop(3)
0xc86: GOTO 0xcc2

0xc87: Push((int) 1)
0xc88: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc89: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc8a: PushEmpty(int, string)
0xc8b: Stack[-1] = "bracelet"
0xc8c: Call2 0xcc3

0xc8d: Pop(1)
0xc8e: Push((int) 0)
0xc8f: Push((int) 1)
0xc90: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc91: Pop(3)
0xc92: GOTO 0xcc2

0xc93: Push((int) 2)
0xc94: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc95: IF (Stack[-1] == 0) GOTO 0xc9f; Pop(1)

0xc96: PushEmpty(int, string)
0xc97: Stack[-1] = "ear_ring"
0xc98: Call2 0xcc3

0xc99: Pop(1)
0xc9a: Push((int) 0)
0xc9b: Push((int) 1)
0xc9c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc9d: Pop(3)
0xc9e: GOTO 0xcc2

0xc9f: Push((int) 3)
0xca0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca1: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xca2: PushEmpty(int, string)
0xca3: Stack[-1] = "gold_ring"
0xca4: Call2 0xcc3

0xca5: Pop(1)
0xca6: Push((int) 0)
0xca7: Push((int) 1)
0xca8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xca9: Pop(3)
0xcaa: GOTO 0xcc2

0xcab: Push((int) 4)
0xcac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcad: IF (Stack[-1] == 0) GOTO 0xcb7; Pop(1)

0xcae: PushEmpty(int, string)
0xcaf: Stack[-1] = "silver_ring"
0xcb0: Call2 0xcc3

0xcb1: Pop(1)
0xcb2: Push((int) 0)
0xcb3: Push((int) 1)
0xcb4: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcb5: Pop(3)
0xcb6: GOTO 0xcc2

0xcb7: Push((int) 5)
0xcb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb9: IF (Stack[-1] == 0) GOTO 0xcc2; Pop(1)

0xcba: PushEmpty(int, string)
0xcbb: Stack[-1] = "flower"
0xcbc: Call2 0xcc3

0xcbd: Pop(1)
0xcbe: Push((int) 0)
0xcbf: Push((int) 1)
0xcc0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcc1: Pop(3)
0xcc2: Return(); Pop(4)

0xcc3: PushEmpty(int, int)
0xcc4: @ GetInvItemByName(Stack[-1], Stack[-3])
0xcc5: Pop(0)
0xcc6: Stack[-4] = Stack[-1]
0xcc7: Return(); Pop(2)

0xcc8: PushEmpty()
0xcc9: PushEmpty(object)
0xcca: Stack[-1] = Stack[-2]
0xccb: Push(-1, 0); TaskCall(2)
0xccc: Call2 0x14a

0xccd: Pop(-1, 0); TaskReturn
0xcce: Pop(1)
0xccf: Return(); Pop(0)

0xcd0: PushEmpty(float, float)
0xcd1: Push("health")
0xcd2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcd3: IF (Stack[-1] == 0) GOTO 0xcdc; Pop(1)

0xcd4: Push("health")
0xcd5: @ GetProperty(Stack[-1], Stack[-2])
0xcd6: Pop(1)
0xcd7: Push((int) 0)
0xcd8: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xcd9: IF (Stack[-1] == 0) GOTO 0xcdc; Pop(1)

0xcda: @ SignalDeath(Stack[-4])
0xcdb: Pop(0)
0xcdc: Return(); Pop(2)

0xcdd: PushEmpty()
0xcde: PushEmpty(object)
0xcdf: Stack[-1] = Stack[-2]
0xce0: Call2 0xcc8

0xce1: Pop(1)
0xce2: Return(); Pop(0)

0xce3: PushEmpty()
0xce4: PushEmpty(object, int, float)
0xce5: Stack[-3] = Stack[-7]
0xce6: Stack[-2] = Stack[-6]
0xce7: Stack[-1] = Stack[-5]
0xce8: Call2 0x9f3

0xce9: Pop(3)
0xcea: Return(); Pop(0)

0xceb: PushEmpty()
0xcec: PushEmpty(object, int, float, cvector, cvector)
0xced: Stack[-5] = Stack[-11]
0xcee: Stack[-4] = Stack[-10]
0xcef: Stack[-3] = Stack[-9]
0xcf0: Stack[-2] = Stack[-7]
0xcf1: Stack[-1] = Stack[-6]
0xcf2: Call2 0xa37

0xcf3: Pop(5)
0xcf4: Return(); Pop(0)

0xcf5: PushEmpty()
0xcf6: Push("unholster")
0xcf7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf8: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xcf9: PushEmpty(bool, object)
0xcfa: Stack[-1] = Stack[-4]
0xcfb: Call2 0xe62

0xcfc: Stack[-5] = Stack[-2]
0xcfd: Pop(2)
0xcfe: Return(); Pop(0)

0xcff: GOTO 0xd13

0xd00: Push("player_shot")
0xd01: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd02: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xd03: PushEmpty(bool, object)
0xd04: Stack[-1] = Stack[-4]
0xd05: Call2 0xe67

0xd06: Stack[-5] = Stack[-2]
0xd07: Pop(2)
0xd08: Return(); Pop(0)

0xd09: GOTO 0xd13

0xd0a: Push("battle")
0xd0b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0c: IF (Stack[-1] == 0) GOTO 0xd13; Pop(1)

0xd0d: PushEmpty(bool, object)
0xd0e: Stack[-1] = Stack[-4]
0xd0f: Call2 0xe7c

0xd10: Stack[-5] = Stack[-2]
0xd11: Pop(2)
0xd12: Return(); Pop(0)

0xd13: Stack[-3] = (bool) 0
0xd14: Return(); Pop(0)

0xd15: PushEmpty()
0xd16: Push("unholster")
0xd17: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd18: IF (Stack[-1] == 0) GOTO 0xd1e; Pop(1)

0xd19: PushEmpty(object)
0xd1a: Stack[-1] = Stack[-3]
0xd1b: Call2 0xe65

0xd1c: Pop(1)
0xd1d: GOTO 0xd2d

0xd1e: Push("player_shot")
0xd1f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd20: IF (Stack[-1] == 0) GOTO 0xd26; Pop(1)

0xd21: PushEmpty(object)
0xd22: Stack[-1] = Stack[-3]
0xd23: Call2 0xe76

0xd24: Pop(1)
0xd25: GOTO 0xd2d

0xd26: Push("battle")
0xd27: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd28: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd29: PushEmpty(object)
0xd2a: Stack[-1] = Stack[-3]
0xd2b: Call2 0xe7f

0xd2c: Pop(1)
0xd2d: Return(); Pop(0)

0xd2e: PushEmpty(bool, bool)
0xd2f: PushEmpty(bool)
0xd30: Stack[-1] = (bool) 0
0xd31: PushEmpty(bool, object)
0xd32: Stack[-1] = Stack[-6]
0xd33: Call2 0xe62

0xd34: Pop(1)
0xd35: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd36: PushEmpty(bool, object)
0xd37: Stack[-1] = Stack[-6]
0xd38: Call2 0x92c

0xd39: Pop(1)
0xd3a: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd3b: Stack[-1] = (bool) 1
0xd3c: IF (Stack[-1] == 0) GOTO 0xd43; Pop(1)

0xd3d: @@ IsWeaponHolstered(Stack[-1])
0xd3e: Pop(0)
0xd3f: Pop(0); Push((bool) Stack[-1] == 0)
0xd40: IF (Stack[-1] == 0) GOTO 0xd43; Pop(1)

0xd41: Stack[-4] = (bool) 1
0xd42: Return(); Pop(2)

0xd43: Stack[-4] = (bool) 0
0xd44: Return(); Pop(2)

0xd45: PushEmpty()
0xd46: PushEmpty(object)
0xd47: Stack[-1] = Stack[-2]
0xd48: Call2 0xe65

0xd49: Pop(1)
0xd4a: Return(); Pop(0)

0xd4b: PushEmpty()
0xd4c: PushEmpty(bool, object)
0xd4d: Stack[-1] = Stack[-3]
0xd4e: Call2 0x92c

0xd4f: Pop(1)
0xd50: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd51: PushEmpty(object)
0xd52: Call2 0xb06

0xd53: Pop(0)
0xd54: Push((float)-0.03)
0xd55: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xd56: Pop(2)
0xd57: Return(); Pop(0)

0xd58: PushEmpty(object, object)
0xd59: Push("heal")
0xd5a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd5b: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd5c: Push("player")
0xd5d: @ FindActor(Stack[-2], Stack[-1])
0xd5e: Pop(1)
0xd5f: PushEmpty(bool, object)
0xd60: Stack[-1] = Stack[-3]
0xd61: Call2 0xe81

0xd62: Stack[-6] = Stack[-2]
0xd63: Pop(2)
0xd64: Return(); Pop(2)

0xd65: Stack[-1] = 0
0xd66: Stack[-4] = (bool) 0
0xd67: Return(); Pop(2)

0xd68: PushEmpty(object, object)
0xd69: Push("heal")
0xd6a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd6b: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd6c: Push("player")
0xd6d: @ FindActor(Stack[-2], Stack[-1])
0xd6e: Pop(1)
0xd6f: PushEmpty(object)
0xd70: Stack[-1] = Stack[-2]
0xd71: Call2 0xe84

0xd72: Pop(1)
0xd73: Stack[-1] = 0
0xd74: Return(); Pop(2)

0xd75: PushEmpty(string, string)
0xd76: Stack[-1] = "idle"
0xd77: Push(Stack[-3])
0xd78: IF (Stack[-1] == 0) GOTO 0xd7a; Pop(1)

0xd79: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xd7a: Stack[-4] = Stack[-1]
0xd7b: Return(); Pop(2)

0xd7c: PushEmpty(int, bool, int, bool)
0xd7d: Stack[-2] = (int) 0
0xd7e: Push("all")
0xd7f: PushEmpty(string, int)
0xd80: Stack[-1] = Stack[-5]
0xd81: Call2 0xd75

0xd82: Pop(1)
0xd83: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd84: Pop(2)
0xd85: Pop(0); Push((bool) Stack[-1] == 0)
0xd86: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd87: GOTO 0xd8b

0xd88: Push((int) 1)
0xd89: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd8a: GOTO 0xd7e

0xd8b: Stack[-5] = Stack[-2]
0xd8c: Return(); Pop(4)

0xd8d: PushEmpty()
0xd8e: PushEmpty(bool)
0xd8f: Call2 0xea8

0xd90: Pop(0)
0xd91: IF (Stack[-1] == 0) GOTO 0xd94; Pop(1)

0xd92: Stack[-2] = (int) 2
0xd93: GOTO 0xd95

0xd94: Stack[-2] = (int) 0
0xd95: Return(); Pop(0)

0xd96: PushEmpty()
0xd97: PushEmpty(object)
0xd98: Stack[-1] = Stack[-2]
0xd99: Push(-1, 1); TaskCall(5)
0xd9a: Call2 0x451

0xd9b: Pop(-1, 1); TaskReturn
0xd9c: Pop(1)
0xd9d: Return(); Pop(0)

0xd9e: PushEmpty()
0xd9f: PushEmpty(bool, object)
0xda0: Stack[-1] = Stack[-3]
0xda1: Call2 0x9af

0xda2: Pop(1)
0xda3: IF (Stack[-1] == 0) GOTO 0xda6; Pop(1)

0xda4: Stack[-2] = (int) 2
0xda5: GOTO 0xda7

0xda6: Stack[-2] = (int) 0
0xda7: Return(); Pop(0)

0xda8: PushEmpty()
0xda9: PushEmpty(object)
0xdaa: Stack[-1] = Stack[-2]
0xdab: Push(-1, 6); TaskCall(6)
0xdac: Call2 0x564

0xdad: Pop(-1, 6); TaskReturn
0xdae: Pop(1)
0xdaf: Return(); Pop(0)

0xdb0: PushEmpty(string, string, string, string)
0xdb1: PushEmpty(bool, object, string)
0xdb2: Stack[-2] = Stack[-9]
0xdb3: Stack[-1] = "class"
0xdb4: Call2 0x931

0xdb5: Pop(2)
0xdb6: Pop(1); Push((bool) Stack[-1] == 0)
0xdb7: IF (Stack[-1] == 0) GOTO 0xdba; Pop(1)

0xdb8: Stack[-7] = (bool) 0
0xdb9: Return(); Pop(4)

0xdba: Push("class")
0xdbb: @ GetProperty(Stack[-1], Stack[-3])
0xdbc: Pop(1)
0xdbd: Push("class")
0xdbe: @@ GetProperty(Stack[-1], Stack[-2])
0xdbf: Pop(1)
0xdc0: PushEmpty(bool)
0xdc1: Stack[-1] = (bool) 0
0xdc2: Pop(0); Push((bool) Stack[-6] == 0)
0xdc3: IF (Stack[-1] == 0) GOTO 0xdc7; Pop(1)

0xdc4: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0xdc5: IF (Stack[-1] == 0) GOTO 0xdc7; Pop(1)

0xdc6: Stack[-1] = (bool) 1
0xdc7: IF (Stack[-1] == 0) GOTO 0xdca; Pop(1)

0xdc8: Stack[-7] = (bool) 1
0xdc9: Return(); Pop(4)

0xdca: Push("rat")
0xdcb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdcc: IF (Stack[-1] == 0) GOTO 0xdd0; Pop(1)

0xdcd: Stack[-7] = (bool) 0
0xdce: Return(); Pop(4)

0xdcf: GOTO 0xdf9

0xdd0: Push("rat_big")
0xdd1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd2: IF (Stack[-1] == 0) GOTO 0xdd6; Pop(1)

0xdd3: Stack[-7] = (bool) 0
0xdd4: Return(); Pop(4)

0xdd5: GOTO 0xdf9

0xdd6: Push("dog")
0xdd7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd8: IF (Stack[-1] == 0) GOTO 0xddc; Pop(1)

0xdd9: Stack[-7] = (bool) 0
0xdda: Return(); Pop(4)

0xddb: GOTO 0xdf9

0xddc: Push("grabitel")
0xddd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdde: IF (Stack[-1] == 0) GOTO 0xde2; Pop(1)

0xddf: Stack[-7] = (bool) 0
0xde0: Return(); Pop(4)

0xde1: GOTO 0xdf9

0xde2: Push("bomber")
0xde3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xde4: IF (Stack[-1] == 0) GOTO 0xde8; Pop(1)

0xde5: Stack[-7] = (bool) 0
0xde6: Return(); Pop(4)

0xde7: GOTO 0xdf9

0xde8: Push("sanitar")
0xde9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdea: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xdeb: Stack[-7] = (bool) 0
0xdec: Return(); Pop(4)

0xded: GOTO 0xdf9

0xdee: Push("hunter")
0xdef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdf0: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xdf1: Stack[-7] = (bool) 0
0xdf2: Return(); Pop(4)

0xdf3: GOTO 0xdf9

0xdf4: Push("soldier")
0xdf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdf6: IF (Stack[-1] == 0) GOTO 0xdf9; Pop(1)

0xdf7: Stack[-7] = (bool) 0
0xdf8: Return(); Pop(4)

0xdf9: Stack[-7] = (bool) 1
0xdfa: Return(); Pop(4)

0xdfb: PushEmpty()
0xdfc: PushEmpty(int, object)
0xdfd: Stack[-1] = Stack[-4]
0xdfe: Call2 0xd9e

0xdff: Stack[-5] = Stack[-2]
0xe00: Pop(2)
0xe01: Return(); Pop(0)

0xe02: PushEmpty()
0xe03: PushEmpty(object)
0xe04: Stack[-1] = Stack[-2]
0xe05: Call2 0xda8

0xe06: Pop(1)
0xe07: Return(); Pop(0)

0xe08: PushEmpty(bool, bool)
0xe09: PushEmpty(bool, object, bool)
0xe0a: Stack[-2] = Stack[-8]
0xe0b: Stack[-1] = !Stack[-6]; Pop(0);
0xe0c: Call2 0xdb0

0xe0d: Pop(2)
0xe0e: Pop(1); Push((bool) Stack[-1] == 0)
0xe0f: IF (Stack[-1] == 0) GOTO 0xe12; Pop(1)

0xe10: Stack[-7] = (bool) 0
0xe11: Return(); Pop(2)

0xe12: @ CanSee(Stack[-1], Stack[-6])
0xe13: Pop(0)
0xe14: PushEmpty(bool)
0xe15: Stack[-1] = (bool) 1
0xe16: Push(Stack[-2])
0xe17: IF (Stack[-1] == 0) GOTO 0xe20; Pop(1)

0xe18: PushEmpty(float, object)
0xe19: Stack[-1] = Stack[-9]
0xe1a: Call2 0x924

0xe1b: Pop(1)
0xe1c: Pop(0); Push(Stack[-6] * Stack[-6]);
0xe1d: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xe1e: IF (Stack[-1] == 0) GOTO 0xe20; Pop(1)

0xe1f: Stack[-1] = (bool) 0
0xe20: IF (Stack[-1] == 0) GOTO 0xe23; Pop(1)

0xe21: Stack[-7] = (bool) 1
0xe22: Return(); Pop(2)

0xe23: Stack[-7] = (bool) 0
0xe24: Return(); Pop(2)

0xe25: PushEmpty()
0xe26: Stack[-2] = (int) 0
0xe27: Return(); Pop(0)

0xe28: PushEmpty()
0xe29: Return(); Pop(0)

0xe2a: PushEmpty()
0xe2b: Push("killme")
0xe2c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2d: IF (Stack[-1] == 0) GOTO 0xe34; Pop(1)

0xe2e: PushEmpty(int, object)
0xe2f: Stack[-1] = Stack[-3]
0xe30: Call2 0xe40

0xe31: Stack[-5] = Stack[-2]
0xe32: Pop(2)
0xe33: Return(); Pop(0)

0xe34: Stack[-3] = (int) 0
0xe35: Return(); Pop(0)

0xe36: PushEmpty()
0xe37: Push("killme")
0xe38: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe39: IF (Stack[-1] == 0) GOTO 0xe3f; Pop(1)

0xe3a: PushEmpty(object)
0xe3b: Stack[-1] = Stack[-2]
0xe3c: Call2 0xe52

0xe3d: Pop(1)
0xe3e: Return(); Pop(0)

0xe3f: Return(); Pop(0)

0xe40: PushEmpty()
0xe41: PushEmpty(bool, object)
0xe42: Stack[-1] = Stack[-3]
0xe43: Call2 0x9af

0xe44: Pop(1)
0xe45: Pop(1); Push((bool) Stack[-1] == 0)
0xe46: IF (Stack[-1] == 0) GOTO 0xe49; Pop(1)

0xe47: Stack[-2] = (int) 0
0xe48: Return(); Pop(0)

0xe49: PushEmpty(bool, object)
0xe4a: Stack[-1] = Stack[-3]
0xe4b: Call2 0xeaa

0xe4c: Pop(1)
0xe4d: IF (Stack[-1] == 0) GOTO 0xe50; Pop(1)

0xe4e: Stack[-2] = (int) 2
0xe4f: GOTO 0xe51

0xe50: Stack[-2] = (int) 0
0xe51: Return(); Pop(0)

0xe52: PushEmpty()
0xe53: PushEmpty(object)
0xe54: Stack[-1] = Stack[-2]
0xe55: Call2 0xda8

0xe56: Pop(1)
0xe57: Return(); Pop(0)

0xe58: PushEmpty()
0xe59: Stack[-2] = (int) 2
0xe5a: Return(); Pop(0)

0xe5b: PushEmpty()
0xe5c: PushEmpty(object)
0xe5d: Stack[-1] = Stack[-2]
0xe5e: Call2 0xe94

0xe5f: Pop(1)
0xe60: Return(); Pop(0)

0xe61: Return(); Pop(0)

0xe62: PushEmpty()
0xe63: Stack[-2] = (bool) 0
0xe64: Return(); Pop(0)

0xe65: PushEmpty()
0xe66: Return(); Pop(0)

0xe67: PushEmpty(bool, bool)
0xe68: @ CanSee(Stack[-1], Stack[-3])
0xe69: Pop(0)
0xe6a: Stack[-4] = (bool) 1
0xe6b: Push(Stack[-1])
0xe6c: IF (Stack[-1] == 0) GOTO 0xe75; Pop(1)

0xe6d: PushEmpty(float, object)
0xe6e: Stack[-1] = Stack[-5]
0xe6f: Call2 0x924

0xe70: Pop(1)
0xe71: Push((int) 2250000)
0xe72: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xe73: IF (Stack[-1] == 0) GOTO 0xe75; Pop(1)

0xe74: Stack[-4] = (bool) 0
0xe75: Return(); Pop(2)

0xe76: PushEmpty()
0xe77: PushEmpty(object)
0xe78: Stack[-1] = Stack[-2]
0xe79: Call2 0xd96

0xe7a: Pop(1)
0xe7b: Return(); Pop(0)

0xe7c: PushEmpty()
0xe7d: Stack[-2] = (bool) 0
0xe7e: Return(); Pop(0)

0xe7f: PushEmpty()
0xe80: Return(); Pop(0)

0xe81: PushEmpty()
0xe82: Stack[-2] = (bool) 0
0xe83: Return(); Pop(0)

0xe84: PushEmpty()
0xe85: Return(); Pop(0)

0xe86: Stack[-1] = (int) 515556
0xe87: Return(); Pop(0)

0xe88: Stack[-1] = (int) 503341
0xe89: Return(); Pop(0)

0xe8a: Stack[-1] = "ui/NPC_Citizen3.png"
0xe8b: Return(); Pop(0)

0xe8c: Stack[-1] = "ui/NPC_Citizen3_b.png"
0xe8d: Return(); Pop(0)

0xe8e: Stack[-1] = (bool) 0
0xe8f: Return(); Pop(0)

0xe90: Push(GlobalVars[0])
0xe91: Stack[-1] = (bool) 0
0xe92: GlobalVars[0] = Stack[-1]; Pop(1)
0xe93: Return(); Pop(0)

0xe94: PushEmpty(bool, bool)
0xe95: Push(GlobalVars[0])
0xe96: IF (Stack[-1] == 0) GOTO 0xea1; Pop(1)

0xe97: @ IsOverrideActive(Stack[-1])
0xe98: Pop(0)
0xe99: Pop(0); Push((bool) Stack[-1] == 0)
0xe9a: IF (Stack[-1] == 0) GOTO 0xe9f; Pop(1)

0xe9b: PushEmpty(object)
0xe9c: Stack[-1] = Stack[-4]
0xe9d: Call2 0xbbf

0xe9e: Pop(1)
0xe9f: Return(); Pop(2)

0xea0: GOTO 0xea7

0xea1: PushEmpty(int, object)
0xea2: Stack[-1] = Stack[-5]
0xea3: Push(-2, 1); TaskCall(0)
0xea4: Call2 0x0

0xea5: Pop(-2, 1); TaskReturn
0xea6: Pop(2)
0xea7: Return(); Pop(2)

0xea8: Stack[-1] = (bool) 0
0xea9: Return(); Pop(0)

0xeaa: PushEmpty()
0xeab: Stack[-2] = (bool) 1
0xeac: Return(); Pop(0)

0xead: PushEmpty()
0xeae: PushEmpty(bool, object, object, float, bool)
0xeaf: Stack[-4] = Stack[-8]
0xeb0: Stack[-3] = Stack[-7]
0xeb1: Stack[-2] = (float) 700.0
0xeb2: Stack[-1] = Stack[-6]
0xeb3: Call2 0xe08

0xeb4: Stack[-9] = Stack[-5]
0xeb5: Pop(5)
0xeb6: Return(); Pop(0)

0xeb7: PushEmpty()
0xeb8: PushEmpty(bool, object)
0xeb9: Stack[-1] = Stack[-3]
0xeba: Call2 0x92c

0xebb: Pop(1)
0xebc: IF (Stack[-1] == 0) GOTO 0xec8; Pop(1)

0xebd: PushEmpty(object)
0xebe: Call2 0xb06

0xebf: Pop(0)
0xec0: Push((float)-0.07)
0xec1: Push((bool) 1)
0xec2: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xec3: Pop(3)
0xec4: PushEmpty(bool)
0xec5: Stack[-1] = (bool) 1
0xec6: Call2 0xc14

0xec7: Pop(1)
0xec8: PushEmpty()
0xec9: Call2 0xbfc

0xeca: Pop(0)
0xecb: Push(GlobalVars[0])
0xecc: Stack[-1] = (bool) 1
0xecd: GlobalVars[0] = Stack[-1]; Pop(1)
0xece: Push((int) 50)
0xecf: Push((int) 40)
0xed0: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xed1: Pop(2)
0xed2: Return(); Pop(0)

