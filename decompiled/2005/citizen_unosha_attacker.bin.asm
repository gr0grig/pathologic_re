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
	GetVariable (2 args)
	CreateFloatVector (1 args)
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

RunOp = 0x6b5
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x13b Vars = (int, int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x628 Vars = (object)
		EVENT_6 Op = 0x636 Vars = ()
		EVENT_22 Op = 0x6af Vars = (object, int, float, float)
		EVENT_16 Op = 0x6b1 Vars = (object, string)
		EVENT_41 Op = 0x6b3 Vars = (object)
	GTASK_4 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x6cd Vars = (object)
		EVENT_17 Op = 0x6e1 Vars = (object)
		EVENT_30 Op = 0x6f9 Vars = (object, object, bool)
		EVENT_40 Op = 0x715 Vars = (object)
		EVENT_42 Op = 0x729 Vars = (object, string)
		EVENT_26 Op = 0x74e Vars = (string)
		EVENT_1 Op = 0x75c Vars = (object)
		EVENT_3 Op = 0x76f Vars = (object)
		EVENT_7 Op = 0x775 Vars = (int)
		EVENT_6 Op = 0x781 Vars = ()
		EVENT_41 Op = 0x798 Vars = (object)
		EVENT_10 Op = 0x809 Vars = (object)
		EVENT_28 Op = 0x80d Vars = ()
	GTASK_5  Params = 0
		EVENT_0 Op = 0x826 Vars = (object)
		EVENT_17 Op = 0x83a Vars = (object)
		EVENT_30 Op = 0x852 Vars = (object, object, bool)
		EVENT_40 Op = 0x86e Vars = (object)
		EVENT_42 Op = 0x882 Vars = (object, string)
		EVENT_26 Op = 0x8a7 Vars = (string)
		EVENT_6 Op = 0x8b5 Vars = ()
		EVENT_1 Op = 0x8bc Vars = (object)
	GTASK_6 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_7 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0xbc4 Vars = ()
		EVENT_7 Op = 0xbfc Vars = (int)
		EVENT_1 Op = 0xc17 Vars = (object)
		EVENT_2 Op = 0xc26 Vars = (object)
		EVENT_10 Op = 0xcac Vars = (object)
		EVENT_41 Op = 0xcb7 Vars = (object)

Events:
EVENT_16 Op = 0x10ab Vars = (object, string)
EVENT_41 Op = 0x10b8 Vars = (object)
EVENT_22 Op = 0x10be Vars = (object, int, float, float)
EVENT_43 Op = 0x10c6 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x1258

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0xea1

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
0x1c: Call2 0x1258

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
0x2d: Call2 0xe11

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x1252

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x1250

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x1254

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x1256

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0xf83

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
0x69: Call2 0xe55

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
0x77: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x78: PushEmpty(bool)
0x79: Stack[-1] = (bool) 0
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0xf55

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x7f: PushEmpty(bool, object)
0x80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81: Call2 0xf6b

0x82: Pop(1)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Stack[-1] = (bool) 1
0x85: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x86: PushEmpty(string)
0x87: Stack[-1] = "Neutral"
0x88: Call2 0x125

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
0x9e: GOTO 0x107

0x9f: PushEmpty(bool)
0xa0: Stack[-1] = (bool) 0
0xa1: PushEmpty(bool, object)
0xa2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa3: Call2 0xf55

0xa4: Pop(1)
0xa5: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa6: PushEmpty(bool, object)
0xa7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Call2 0xf6b

0xa9: Pop(1)
0xaa: Pop(1); Push((bool) Stack[-1] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Stack[-1] = (bool) 1
0xad: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xae: PushEmpty(string)
0xaf: Stack[-1] = "Neutral"
0xb0: Call2 0x125

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
0xbc: GOTO 0x107

0xbd: PushEmpty(string)
0xbe: Stack[-1] = "Neutral"
0xbf: Call2 0x125

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
0xca: Call2 0xf61

0xcb: Pop(1)
0xcc: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0xf49

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
0xdd: Call2 0xf61

0xde: Pop(1)
0xdf: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0xf49

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
0xf0: Call2 0xf61

0xf1: Pop(1)
0xf2: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0xf49

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf8: Stack[-1] = (bool) 1
0xf9: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfa: Push((int) 538003)
0xfb: Push((int) 39869)
0xfc: Push((int) 39868)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Push((int) 538126)
0x100: Push((int) -1)
0x101: Push((int) 39997)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: GOTO 0x107

0x105: Return(); Pop(0)

0x106: GOTO 0x76

0x107: PushEmpty(bool)
0x108: Call2 0x1258

0x109: Pop(0)
0x10a: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x10b: @ lshWaitForAnimEnd()
0x10c: Pop(0)
0x10d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: GOTO 0x115

0x110: PushEmpty(string)
0x111: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x112: Call2 0xea1

0x113: Pop(1)
0x114: GOTO 0x10b

0x115: GOTO 0x124

0x116: Push("all")
0x117: Push("idle")
0x118: @ PlayAnimation(Stack[-2], Stack[-1])
0x119: Pop(2)
0x11a: @ WaitForAnimEnd()
0x11b: Pop(0)
0x11c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: GOTO 0x124

0x11f: Push("all")
0x120: Push("idle")
0x121: @ PlayAnimation(Stack[-2], Stack[-1])
0x122: Pop(2)
0x123: GOTO 0x11a

0x124: Return(); Pop(0)

0x125: PushEmpty()
0x126: PushEmpty(bool)
0x127: Call2 0x1258

0x128: Pop(0)
0x129: Pop(1); Push((bool) Stack[-1] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x12b: Return(); Pop(0)

0x12c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: Return(); Pop(0)

0x12f: PushEmpty(string, bool)
0x130: Stack[-2] = Stack[-3]
0x131: Push("")
0x132: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x134: Stack[-1] = (bool) 0
0x135: GOTO 0x137

0x136: Stack[-1] = (bool) 1
0x137: Call2 0xeb1

0x138: Pop(2)
0x139: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x13a: Return(); Pop(0)

0x13b: PushEmpty()
0x13c: Push((int) 1)
0x13d: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x13e: PushEmpty()
0x13f: Call2 0xecb

0x140: Pop(0)
0x141: Push((int) 45786)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x144: PushEmpty(bool)
0x145: Stack[-1] = (bool) 0
0x146: PushEmpty(bool, object)
0x147: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x148: Call2 0xf55

0x149: Pop(1)
0x14a: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14b: PushEmpty(bool, object)
0x14c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Call2 0xf6b

0x14e: Pop(1)
0x14f: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x150: Stack[-1] = (bool) 1
0x151: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x152: PushEmpty(string)
0x153: Stack[-1] = "Neutral"
0x154: Call2 0x125

0x155: Pop(1)
0x156: Push((int) 543329)
0x157: @@ SetMessage(Stack[-1])
0x158: Pop(1)
0x159: @@ ClearReplies()
0x15a: Pop(0)
0x15b: Push((int) 543330)
0x15c: Push((int) 45790)
0x15d: Push((int) 45787)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Push((int) 543332)
0x161: Push((int) 45790)
0x162: Push((int) 45789)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Push((int) 543331)
0x166: Push((int) -1)
0x167: Push((int) 45788)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: PushEmpty(bool)
0x16c: Stack[-1] = (bool) 0
0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Call2 0xf55

0x170: Pop(1)
0x171: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x172: PushEmpty(bool, object)
0x173: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x174: Call2 0xf6b

0x175: Pop(1)
0x176: Pop(1); Push((bool) Stack[-1] == 0)
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: Stack[-1] = (bool) 1
0x179: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral"
0x17c: Call2 0x125

0x17d: Pop(1)
0x17e: Push((int) 543328)
0x17f: @@ SetMessage(Stack[-1])
0x180: Pop(1)
0x181: @@ ClearReplies()
0x182: Pop(0)
0x183: Push((int) 543336)
0x184: Push((int) -1)
0x185: Push((int) 45794)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Neutral"
0x18b: Call2 0x125

0x18c: Pop(1)
0x18d: Push((int) 537969)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: PushEmpty(bool)
0x193: Stack[-1] = (bool) 0
0x194: PushEmpty(bool, object)
0x195: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x196: Call2 0xf61

0x197: Pop(1)
0x198: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x199: PushEmpty(bool, object)
0x19a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19b: Call2 0xf49

0x19c: Pop(1)
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Stack[-1] = (bool) 1
0x19f: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a0: Push((int) 537970)
0x1a1: Push((int) 39833)
0x1a2: Push((int) 39832)
0x1a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(3)
0x1a5: PushEmpty(bool)
0x1a6: Stack[-1] = (bool) 0
0x1a7: PushEmpty(bool, object)
0x1a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a9: Call2 0xf61

0x1aa: Pop(1)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ac: PushEmpty(bool, object)
0x1ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ae: Call2 0xf49

0x1af: Pop(1)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Stack[-1] = (bool) 1
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b3: Push((int) 537995)
0x1b4: Push((int) 39861)
0x1b5: Push((int) 39860)
0x1b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(3)
0x1b8: PushEmpty(bool)
0x1b9: Stack[-1] = (bool) 0
0x1ba: PushEmpty(bool, object)
0x1bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bc: Call2 0xf61

0x1bd: Pop(1)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call2 0xf49

0x1c2: Pop(1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[-1] = (bool) 1
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c6: Push((int) 538003)
0x1c7: Push((int) 39869)
0x1c8: Push((int) 39868)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Push((int) 538126)
0x1cc: Push((int) -1)
0x1cd: Push((int) 39997)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 39980)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d4: Push((int) 39982)
0x1d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d7: PushEmpty(string)
0x1d8: Stack[-1] = "Neutral"
0x1d9: Call2 0x125

0x1da: Pop(1)
0x1db: Push((int) 538113)
0x1dc: @@ SetMessage(Stack[-1])
0x1dd: Pop(1)
0x1de: @@ ClearReplies()
0x1df: Pop(0)
0x1e0: Push((int) 538114)
0x1e1: Push((int) 39984)
0x1e2: Push((int) 39983)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: Push((int) 538118)
0x1e6: Push((int) 39989)
0x1e7: Push((int) 39988)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 39989)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral"
0x1f0: Call2 0x125

0x1f1: Pop(1)
0x1f2: Push((int) 538119)
0x1f3: @@ SetMessage(Stack[-1])
0x1f4: Pop(1)
0x1f5: @@ ClearReplies()
0x1f6: Pop(0)
0x1f7: Push((int) 538120)
0x1f8: Push((int) 39991)
0x1f9: Push((int) 39990)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Return(); Pop(0)

0x1fd: Push((int) 39991)
0x1fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x200: PushEmpty(string)
0x201: Stack[-1] = "Neutral"
0x202: Call2 0x125

0x203: Pop(1)
0x204: Push((int) 538121)
0x205: @@ SetMessage(Stack[-1])
0x206: Pop(1)
0x207: @@ ClearReplies()
0x208: Pop(0)
0x209: Push((int) 538122)
0x20a: Push((int) -1)
0x20b: Push((int) 39992)
0x20c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20d: Pop(3)
0x20e: Push((int) 538123)
0x20f: Push((int) -1)
0x210: Push((int) 39993)
0x211: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: Return(); Pop(0)

0x214: Push((int) 39984)
0x215: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x217: PushEmpty(string)
0x218: Stack[-1] = "Neutral"
0x219: Call2 0x125

0x21a: Pop(1)
0x21b: Push((int) 538115)
0x21c: @@ SetMessage(Stack[-1])
0x21d: Pop(1)
0x21e: @@ ClearReplies()
0x21f: Pop(0)
0x220: Push((int) 538116)
0x221: Push((int) -1)
0x222: Push((int) 39985)
0x223: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x224: Pop(3)
0x225: Push((int) 538117)
0x226: Push((int) 39991)
0x227: Push((int) 39986)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: Return(); Pop(0)

0x22b: Push((int) 39952)
0x22c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22e: Push((int) 39972)
0x22f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x231: PushEmpty(string)
0x232: Stack[-1] = "Neutral"
0x233: Call2 0x125

0x234: Pop(1)
0x235: Push((int) 538104)
0x236: @@ SetMessage(Stack[-1])
0x237: Pop(1)
0x238: @@ ClearReplies()
0x239: Pop(0)
0x23a: Push((int) 538105)
0x23b: Push((int) 39974)
0x23c: Push((int) 39973)
0x23d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: Push((int) 538108)
0x240: Push((int) -1)
0x241: Push((int) 39977)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: Return(); Pop(0)

0x245: Push((int) 39974)
0x246: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x248: PushEmpty(string)
0x249: Stack[-1] = "Neutral"
0x24a: Call2 0x125

0x24b: Pop(1)
0x24c: Push((int) 538106)
0x24d: @@ SetMessage(Stack[-1])
0x24e: Pop(1)
0x24f: @@ ClearReplies()
0x250: Pop(0)
0x251: Push((int) 538107)
0x252: Push((int) 39963)
0x253: Push((int) 39975)
0x254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: Return(); Pop(0)

0x257: Push((int) 39963)
0x258: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x25a: PushEmpty(string)
0x25b: Stack[-1] = "Neutral"
0x25c: Call2 0x125

0x25d: Pop(1)
0x25e: Push((int) 538095)
0x25f: @@ SetMessage(Stack[-1])
0x260: Pop(1)
0x261: @@ ClearReplies()
0x262: Pop(0)
0x263: Push((int) 538096)
0x264: Push((int) 39965)
0x265: Push((int) 39964)
0x266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x267: Pop(3)
0x268: Push((int) 538100)
0x269: Push((int) 39969)
0x26a: Push((int) 39968)
0x26b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: Return(); Pop(0)

0x26e: Push((int) 39969)
0x26f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x271: PushEmpty(string)
0x272: Stack[-1] = "Neutral"
0x273: Call2 0x125

0x274: Pop(1)
0x275: Push((int) 538101)
0x276: @@ SetMessage(Stack[-1])
0x277: Pop(1)
0x278: @@ ClearReplies()
0x279: Pop(0)
0x27a: Push((int) 538102)
0x27b: Push((int) -1)
0x27c: Push((int) 39970)
0x27d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27e: Pop(3)
0x27f: Return(); Pop(0)

0x280: Push((int) 39965)
0x281: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x283: PushEmpty(string)
0x284: Stack[-1] = "Neutral"
0x285: Call2 0x125

0x286: Pop(1)
0x287: Push((int) 538097)
0x288: @@ SetMessage(Stack[-1])
0x289: Pop(1)
0x28a: @@ ClearReplies()
0x28b: Pop(0)
0x28c: Push((int) 538098)
0x28d: Push((int) -1)
0x28e: Push((int) 39966)
0x28f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x290: Pop(3)
0x291: Push((int) 538099)
0x292: Push((int) -1)
0x293: Push((int) 39967)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: Return(); Pop(0)

0x297: Push((int) 39954)
0x298: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x29a: PushEmpty(string)
0x29b: Stack[-1] = "Neutral"
0x29c: Call2 0x125

0x29d: Pop(1)
0x29e: Push((int) 538086)
0x29f: @@ SetMessage(Stack[-1])
0x2a0: Pop(1)
0x2a1: @@ ClearReplies()
0x2a2: Pop(0)
0x2a3: Push((int) 538087)
0x2a4: Push((int) 39956)
0x2a5: Push((int) 39955)
0x2a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(3)
0x2a8: Push((int) 538093)
0x2a9: Push((int) -1)
0x2aa: Push((int) 39961)
0x2ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ac: Pop(3)
0x2ad: Return(); Pop(0)

0x2ae: Push((int) 39956)
0x2af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b1: PushEmpty(string)
0x2b2: Stack[-1] = "Neutral"
0x2b3: Call2 0x125

0x2b4: Pop(1)
0x2b5: Push((int) 538088)
0x2b6: @@ SetMessage(Stack[-1])
0x2b7: Pop(1)
0x2b8: @@ ClearReplies()
0x2b9: Pop(0)
0x2ba: Push((int) 538089)
0x2bb: Push((int) 39958)
0x2bc: Push((int) 39957)
0x2bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(3)
0x2bf: Return(); Pop(0)

0x2c0: Push((int) 39958)
0x2c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2c3: PushEmpty(string)
0x2c4: Stack[-1] = "Neutral"
0x2c5: Call2 0x125

0x2c6: Pop(1)
0x2c7: Push((int) 538090)
0x2c8: @@ SetMessage(Stack[-1])
0x2c9: Pop(1)
0x2ca: @@ ClearReplies()
0x2cb: Pop(0)
0x2cc: Push((int) 538091)
0x2cd: Push((int) -1)
0x2ce: Push((int) 39959)
0x2cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d0: Pop(3)
0x2d1: Push((int) 538092)
0x2d2: Push((int) -1)
0x2d3: Push((int) 39960)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: Return(); Pop(0)

0x2d7: Push((int) 39911)
0x2d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2da: Push((int) 39932)
0x2db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2dd: PushEmpty(string)
0x2de: Stack[-1] = "Neutral"
0x2df: Call2 0x125

0x2e0: Pop(1)
0x2e1: Push((int) 538064)
0x2e2: @@ SetMessage(Stack[-1])
0x2e3: Pop(1)
0x2e4: @@ ClearReplies()
0x2e5: Pop(0)
0x2e6: Push((int) 538065)
0x2e7: Push((int) 39934)
0x2e8: Push((int) 39933)
0x2e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ea: Pop(3)
0x2eb: Return(); Pop(0)

0x2ec: Push((int) 39934)
0x2ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2ef: PushEmpty(string)
0x2f0: Stack[-1] = "Neutral"
0x2f1: Call2 0x125

0x2f2: Pop(1)
0x2f3: Push((int) 538066)
0x2f4: @@ SetMessage(Stack[-1])
0x2f5: Pop(1)
0x2f6: @@ ClearReplies()
0x2f7: Pop(0)
0x2f8: Push((int) 538067)
0x2f9: Push((int) 39936)
0x2fa: Push((int) 39935)
0x2fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fc: Pop(3)
0x2fd: Return(); Pop(0)

0x2fe: Push((int) 39936)
0x2ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x301: PushEmpty(string)
0x302: Stack[-1] = "Neutral"
0x303: Call2 0x125

0x304: Pop(1)
0x305: Push((int) 538068)
0x306: @@ SetMessage(Stack[-1])
0x307: Pop(1)
0x308: @@ ClearReplies()
0x309: Pop(0)
0x30a: Push((int) 538069)
0x30b: Push((int) 39938)
0x30c: Push((int) 39937)
0x30d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30e: Pop(3)
0x30f: Push((int) 538075)
0x310: Push((int) 39944)
0x311: Push((int) 39943)
0x312: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x313: Pop(3)
0x314: Return(); Pop(0)

0x315: Push((int) 39944)
0x316: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x318: PushEmpty(string)
0x319: Stack[-1] = "Neutral"
0x31a: Call2 0x125

0x31b: Pop(1)
0x31c: Push((int) 538076)
0x31d: @@ SetMessage(Stack[-1])
0x31e: Pop(1)
0x31f: @@ ClearReplies()
0x320: Pop(0)
0x321: Push((int) 538077)
0x322: Push((int) 39946)
0x323: Push((int) 39945)
0x324: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x325: Pop(3)
0x326: Push((int) 538082)
0x327: Push((int) -1)
0x328: Push((int) 39950)
0x329: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32a: Pop(3)
0x32b: Return(); Pop(0)

0x32c: Push((int) 39946)
0x32d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x32f: PushEmpty(string)
0x330: Stack[-1] = "Neutral"
0x331: Call2 0x125

0x332: Pop(1)
0x333: Push((int) 538078)
0x334: @@ SetMessage(Stack[-1])
0x335: Pop(1)
0x336: @@ ClearReplies()
0x337: Pop(0)
0x338: Push((int) 538079)
0x339: Push((int) 39948)
0x33a: Push((int) 39947)
0x33b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33c: Pop(3)
0x33d: Return(); Pop(0)

0x33e: Push((int) 39948)
0x33f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x341: PushEmpty(string)
0x342: Stack[-1] = "Neutral"
0x343: Call2 0x125

0x344: Pop(1)
0x345: Push((int) 538080)
0x346: @@ SetMessage(Stack[-1])
0x347: Pop(1)
0x348: @@ ClearReplies()
0x349: Pop(0)
0x34a: Push((int) 538081)
0x34b: Push((int) -1)
0x34c: Push((int) 39949)
0x34d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34e: Pop(3)
0x34f: Return(); Pop(0)

0x350: Push((int) 39938)
0x351: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x353: PushEmpty(string)
0x354: Stack[-1] = "Neutral"
0x355: Call2 0x125

0x356: Pop(1)
0x357: Push((int) 538070)
0x358: @@ SetMessage(Stack[-1])
0x359: Pop(1)
0x35a: @@ ClearReplies()
0x35b: Pop(0)
0x35c: Push((int) 538071)
0x35d: Push((int) 39940)
0x35e: Push((int) 39939)
0x35f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x360: Pop(3)
0x361: Push((int) 538074)
0x362: Push((int) -1)
0x363: Push((int) 39942)
0x364: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x365: Pop(3)
0x366: Return(); Pop(0)

0x367: Push((int) 39940)
0x368: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x36a: PushEmpty(string)
0x36b: Stack[-1] = "Neutral"
0x36c: Call2 0x125

0x36d: Pop(1)
0x36e: Push((int) 538072)
0x36f: @@ SetMessage(Stack[-1])
0x370: Pop(1)
0x371: @@ ClearReplies()
0x372: Pop(0)
0x373: Push((int) 538073)
0x374: Push((int) -1)
0x375: Push((int) 39941)
0x376: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x377: Pop(3)
0x378: Return(); Pop(0)

0x379: Push((int) 39913)
0x37a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x37c: PushEmpty(string)
0x37d: Stack[-1] = "Neutral"
0x37e: Call2 0x125

0x37f: Pop(1)
0x380: Push((int) 538046)
0x381: @@ SetMessage(Stack[-1])
0x382: Pop(1)
0x383: @@ ClearReplies()
0x384: Pop(0)
0x385: Push((int) 538047)
0x386: Push((int) 39915)
0x387: Push((int) 39914)
0x388: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x389: Pop(3)
0x38a: Push((int) 538060)
0x38b: Push((int) 39928)
0x38c: Push((int) 39927)
0x38d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38e: Pop(3)
0x38f: Return(); Pop(0)

0x390: Push((int) 39928)
0x391: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x393: PushEmpty(string)
0x394: Stack[-1] = "Neutral"
0x395: Call2 0x125

0x396: Pop(1)
0x397: Push((int) 538061)
0x398: @@ SetMessage(Stack[-1])
0x399: Pop(1)
0x39a: @@ ClearReplies()
0x39b: Pop(0)
0x39c: Push((int) 538062)
0x39d: Push((int) 39915)
0x39e: Push((int) 39929)
0x39f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a0: Pop(3)
0x3a1: Return(); Pop(0)

0x3a2: Push((int) 39915)
0x3a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3a5: PushEmpty(string)
0x3a6: Stack[-1] = "Neutral"
0x3a7: Call2 0x125

0x3a8: Pop(1)
0x3a9: Push((int) 538048)
0x3aa: @@ SetMessage(Stack[-1])
0x3ab: Pop(1)
0x3ac: @@ ClearReplies()
0x3ad: Pop(0)
0x3ae: Push((int) 538049)
0x3af: Push((int) 39917)
0x3b0: Push((int) 39916)
0x3b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b2: Pop(3)
0x3b3: Push((int) 538057)
0x3b4: Push((int) 39925)
0x3b5: Push((int) 39924)
0x3b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b7: Pop(3)
0x3b8: Return(); Pop(0)

0x3b9: Push((int) 39925)
0x3ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3bc: PushEmpty(string)
0x3bd: Stack[-1] = "Neutral"
0x3be: Call2 0x125

0x3bf: Pop(1)
0x3c0: Push((int) 538058)
0x3c1: @@ SetMessage(Stack[-1])
0x3c2: Pop(1)
0x3c3: @@ ClearReplies()
0x3c4: Pop(0)
0x3c5: Push((int) 538059)
0x3c6: Push((int) -1)
0x3c7: Push((int) 39926)
0x3c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c9: Pop(3)
0x3ca: Return(); Pop(0)

0x3cb: Push((int) 39917)
0x3cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3ce: PushEmpty(string)
0x3cf: Stack[-1] = "Neutral"
0x3d0: Call2 0x125

0x3d1: Pop(1)
0x3d2: Push((int) 538050)
0x3d3: @@ SetMessage(Stack[-1])
0x3d4: Pop(1)
0x3d5: @@ ClearReplies()
0x3d6: Pop(0)
0x3d7: Push((int) 538051)
0x3d8: Push((int) 39919)
0x3d9: Push((int) 39918)
0x3da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3db: Pop(3)
0x3dc: Push((int) 538056)
0x3dd: Push((int) -1)
0x3de: Push((int) 39923)
0x3df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e0: Pop(3)
0x3e1: Return(); Pop(0)

0x3e2: Push((int) 39919)
0x3e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3e5: PushEmpty(string)
0x3e6: Stack[-1] = "Neutral"
0x3e7: Call2 0x125

0x3e8: Pop(1)
0x3e9: Push((int) 538052)
0x3ea: @@ SetMessage(Stack[-1])
0x3eb: Pop(1)
0x3ec: @@ ClearReplies()
0x3ed: Pop(0)
0x3ee: Push((int) 538053)
0x3ef: Push((int) 39921)
0x3f0: Push((int) 39920)
0x3f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f2: Pop(3)
0x3f3: Return(); Pop(0)

0x3f4: Push((int) 39921)
0x3f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3f7: PushEmpty(string)
0x3f8: Stack[-1] = "Neutral"
0x3f9: Call2 0x125

0x3fa: Pop(1)
0x3fb: Push((int) 538054)
0x3fc: @@ SetMessage(Stack[-1])
0x3fd: Pop(1)
0x3fe: @@ ClearReplies()
0x3ff: Pop(0)
0x400: Push((int) 538055)
0x401: Push((int) -1)
0x402: Push((int) 39922)
0x403: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x404: Pop(3)
0x405: Return(); Pop(0)

0x406: Push((int) 39883)
0x407: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x409: Push((int) 39907)
0x40a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x40c: PushEmpty(string)
0x40d: Stack[-1] = "Neutral"
0x40e: Call2 0x125

0x40f: Pop(1)
0x410: Push((int) 538040)
0x411: @@ SetMessage(Stack[-1])
0x412: Pop(1)
0x413: @@ ClearReplies()
0x414: Pop(0)
0x415: Push((int) 538041)
0x416: Push((int) -1)
0x417: Push((int) 39908)
0x418: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(3)
0x41a: Return(); Pop(0)

0x41b: Push((int) 39897)
0x41c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x41e: PushEmpty(string)
0x41f: Stack[-1] = "Neutral"
0x420: Call2 0x125

0x421: Pop(1)
0x422: Push((int) 538031)
0x423: @@ SetMessage(Stack[-1])
0x424: Pop(1)
0x425: @@ ClearReplies()
0x426: Pop(0)
0x427: Push((int) 538032)
0x428: Push((int) 39899)
0x429: Push((int) 39898)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: Push((int) 538038)
0x42d: Push((int) 39899)
0x42e: Push((int) 39904)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Return(); Pop(0)

0x432: Push((int) 39899)
0x433: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x435: PushEmpty(string)
0x436: Stack[-1] = "Neutral"
0x437: Call2 0x125

0x438: Pop(1)
0x439: Push((int) 538033)
0x43a: @@ SetMessage(Stack[-1])
0x43b: Pop(1)
0x43c: @@ ClearReplies()
0x43d: Pop(0)
0x43e: Push((int) 538034)
0x43f: Push((int) 39901)
0x440: Push((int) 39900)
0x441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(3)
0x443: Push((int) 538037)
0x444: Push((int) -1)
0x445: Push((int) 39903)
0x446: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(3)
0x448: Return(); Pop(0)

0x449: Push((int) 39901)
0x44a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x44c: PushEmpty(string)
0x44d: Stack[-1] = "Neutral"
0x44e: Call2 0x125

0x44f: Pop(1)
0x450: Push((int) 538035)
0x451: @@ SetMessage(Stack[-1])
0x452: Pop(1)
0x453: @@ ClearReplies()
0x454: Pop(0)
0x455: Push((int) 538036)
0x456: Push((int) -1)
0x457: Push((int) 39902)
0x458: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(3)
0x45a: Return(); Pop(0)

0x45b: Push((int) 39885)
0x45c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x45e: PushEmpty(string)
0x45f: Stack[-1] = "Neutral"
0x460: Call2 0x125

0x461: Pop(1)
0x462: Push((int) 538020)
0x463: @@ SetMessage(Stack[-1])
0x464: Pop(1)
0x465: @@ ClearReplies()
0x466: Pop(0)
0x467: Push((int) 538021)
0x468: Push((int) 39887)
0x469: Push((int) 39886)
0x46a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46b: Pop(3)
0x46c: Push((int) 538027)
0x46d: Push((int) 39894)
0x46e: Push((int) 39893)
0x46f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(3)
0x471: Return(); Pop(0)

0x472: Push((int) 39894)
0x473: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x474: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x475: PushEmpty(string)
0x476: Stack[-1] = "Neutral"
0x477: Call2 0x125

0x478: Pop(1)
0x479: Push((int) 538028)
0x47a: @@ SetMessage(Stack[-1])
0x47b: Pop(1)
0x47c: @@ ClearReplies()
0x47d: Pop(0)
0x47e: Push((int) 538029)
0x47f: Push((int) -1)
0x480: Push((int) 39895)
0x481: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x482: Pop(3)
0x483: Return(); Pop(0)

0x484: Push((int) 39887)
0x485: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x487: PushEmpty(string)
0x488: Stack[-1] = "Neutral"
0x489: Call2 0x125

0x48a: Pop(1)
0x48b: Push((int) 538022)
0x48c: @@ SetMessage(Stack[-1])
0x48d: Pop(1)
0x48e: @@ ClearReplies()
0x48f: Pop(0)
0x490: Push((int) 538023)
0x491: Push((int) 39889)
0x492: Push((int) 39888)
0x493: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x494: Pop(3)
0x495: Push((int) 538026)
0x496: Push((int) 39889)
0x497: Push((int) 39891)
0x498: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x499: Pop(3)
0x49a: Return(); Pop(0)

0x49b: Push((int) 39889)
0x49c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x49e: PushEmpty(string)
0x49f: Stack[-1] = "Neutral"
0x4a0: Call2 0x125

0x4a1: Pop(1)
0x4a2: Push((int) 538024)
0x4a3: @@ SetMessage(Stack[-1])
0x4a4: Pop(1)
0x4a5: @@ ClearReplies()
0x4a6: Pop(0)
0x4a7: Push((int) 538025)
0x4a8: Push((int) -1)
0x4a9: Push((int) 39890)
0x4aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ab: Pop(3)
0x4ac: Return(); Pop(0)

0x4ad: Push((int) 39878)
0x4ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4b0: Push((int) 39880)
0x4b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4b3: PushEmpty(string)
0x4b4: Stack[-1] = "Neutral"
0x4b5: Call2 0x125

0x4b6: Pop(1)
0x4b7: Push((int) 538015)
0x4b8: @@ SetMessage(Stack[-1])
0x4b9: Pop(1)
0x4ba: @@ ClearReplies()
0x4bb: Pop(0)
0x4bc: Push((int) 538016)
0x4bd: Push((int) -1)
0x4be: Push((int) 39881)
0x4bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c0: Pop(3)
0x4c1: Return(); Pop(0)

0x4c2: Push((int) 39869)
0x4c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4c5: PushEmpty(string)
0x4c6: Stack[-1] = "Neutral"
0x4c7: Call2 0x125

0x4c8: Pop(1)
0x4c9: Push((int) 538004)
0x4ca: @@ SetMessage(Stack[-1])
0x4cb: Pop(1)
0x4cc: @@ ClearReplies()
0x4cd: Pop(0)
0x4ce: Push((int) 538005)
0x4cf: Push((int) 39871)
0x4d0: Push((int) 39870)
0x4d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d2: Pop(3)
0x4d3: Push((int) 538011)
0x4d4: Push((int) -1)
0x4d5: Push((int) 39876)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Return(); Pop(0)

0x4d9: Push((int) 39871)
0x4da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4dc: PushEmpty(string)
0x4dd: Stack[-1] = "Neutral"
0x4de: Call2 0x125

0x4df: Pop(1)
0x4e0: Push((int) 538006)
0x4e1: @@ SetMessage(Stack[-1])
0x4e2: Pop(1)
0x4e3: @@ ClearReplies()
0x4e4: Pop(0)
0x4e5: Push((int) 538007)
0x4e6: Push((int) 39873)
0x4e7: Push((int) 39872)
0x4e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e9: Pop(3)
0x4ea: Return(); Pop(0)

0x4eb: Push((int) 39873)
0x4ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4ee: PushEmpty(string)
0x4ef: Stack[-1] = "Neutral"
0x4f0: Call2 0x125

0x4f1: Pop(1)
0x4f2: Push((int) 538008)
0x4f3: @@ SetMessage(Stack[-1])
0x4f4: Pop(1)
0x4f5: @@ ClearReplies()
0x4f6: Pop(0)
0x4f7: Push((int) 538009)
0x4f8: Push((int) -1)
0x4f9: Push((int) 39874)
0x4fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fb: Pop(3)
0x4fc: Push((int) 538010)
0x4fd: Push((int) -1)
0x4fe: Push((int) 39875)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Return(); Pop(0)

0x502: Push((int) 39861)
0x503: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x505: PushEmpty(string)
0x506: Stack[-1] = "Neutral"
0x507: Call2 0x125

0x508: Pop(1)
0x509: Push((int) 537996)
0x50a: @@ SetMessage(Stack[-1])
0x50b: Pop(1)
0x50c: @@ ClearReplies()
0x50d: Pop(0)
0x50e: Push((int) 537997)
0x50f: Push((int) 39863)
0x510: Push((int) 39862)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: Return(); Pop(0)

0x514: Push((int) 39863)
0x515: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x517: PushEmpty(string)
0x518: Stack[-1] = "Neutral"
0x519: Call2 0x125

0x51a: Pop(1)
0x51b: Push((int) 537998)
0x51c: @@ SetMessage(Stack[-1])
0x51d: Pop(1)
0x51e: @@ ClearReplies()
0x51f: Pop(0)
0x520: Push((int) 537999)
0x521: Push((int) 39865)
0x522: Push((int) 39864)
0x523: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(3)
0x525: Push((int) 538002)
0x526: Push((int) -1)
0x527: Push((int) 39867)
0x528: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(3)
0x52a: Return(); Pop(0)

0x52b: Push((int) 39865)
0x52c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x52e: PushEmpty(string)
0x52f: Stack[-1] = "Neutral"
0x530: Call2 0x125

0x531: Pop(1)
0x532: Push((int) 538000)
0x533: @@ SetMessage(Stack[-1])
0x534: Pop(1)
0x535: @@ ClearReplies()
0x536: Pop(0)
0x537: Push((int) 538001)
0x538: Push((int) -1)
0x539: Push((int) 39866)
0x53a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53b: Pop(3)
0x53c: Return(); Pop(0)

0x53d: Push((int) 39833)
0x53e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53f: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x540: PushEmpty(string)
0x541: Stack[-1] = "Neutral"
0x542: Call2 0x125

0x543: Pop(1)
0x544: Push((int) 537971)
0x545: @@ SetMessage(Stack[-1])
0x546: Pop(1)
0x547: @@ ClearReplies()
0x548: Pop(0)
0x549: Push((int) 537972)
0x54a: Push((int) 39835)
0x54b: Push((int) 39834)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Push((int) 537976)
0x54f: Push((int) 39840)
0x550: Push((int) 39839)
0x551: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x552: Pop(3)
0x553: Push((int) 537988)
0x554: Push((int) 39852)
0x555: Push((int) 39851)
0x556: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x557: Pop(3)
0x558: Push((int) 537994)
0x559: Push((int) -1)
0x55a: Push((int) 39859)
0x55b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55c: Pop(3)
0x55d: Return(); Pop(0)

0x55e: Push((int) 39852)
0x55f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x561: PushEmpty(string)
0x562: Stack[-1] = "Neutral"
0x563: Call2 0x125

0x564: Pop(1)
0x565: Push((int) 537989)
0x566: @@ SetMessage(Stack[-1])
0x567: Pop(1)
0x568: @@ ClearReplies()
0x569: Pop(0)
0x56a: Push((int) 537990)
0x56b: Push((int) 39835)
0x56c: Push((int) 39853)
0x56d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56e: Pop(3)
0x56f: Push((int) 537991)
0x570: Push((int) 39856)
0x571: Push((int) 39855)
0x572: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x573: Pop(3)
0x574: Return(); Pop(0)

0x575: Push((int) 39856)
0x576: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x578: PushEmpty(string)
0x579: Stack[-1] = "Neutral"
0x57a: Call2 0x125

0x57b: Pop(1)
0x57c: Push((int) 537992)
0x57d: @@ SetMessage(Stack[-1])
0x57e: Pop(1)
0x57f: @@ ClearReplies()
0x580: Pop(0)
0x581: Push((int) 537993)
0x582: Push((int) 39840)
0x583: Push((int) 39857)
0x584: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x585: Pop(3)
0x586: Return(); Pop(0)

0x587: Push((int) 39840)
0x588: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x589: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x58a: PushEmpty(string)
0x58b: Stack[-1] = "Neutral"
0x58c: Call2 0x125

0x58d: Pop(1)
0x58e: Push((int) 537977)
0x58f: @@ SetMessage(Stack[-1])
0x590: Pop(1)
0x591: @@ ClearReplies()
0x592: Pop(0)
0x593: Push((int) 537978)
0x594: Push((int) 39842)
0x595: Push((int) 39841)
0x596: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x597: Pop(3)
0x598: Push((int) 537987)
0x599: Push((int) -1)
0x59a: Push((int) 39850)
0x59b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59c: Pop(3)
0x59d: Return(); Pop(0)

0x59e: Push((int) 39842)
0x59f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5a1: PushEmpty(string)
0x5a2: Stack[-1] = "Neutral"
0x5a3: Call2 0x125

0x5a4: Pop(1)
0x5a5: Push((int) 537979)
0x5a6: @@ SetMessage(Stack[-1])
0x5a7: Pop(1)
0x5a8: @@ ClearReplies()
0x5a9: Pop(0)
0x5aa: Push((int) 537980)
0x5ab: Push((int) 39844)
0x5ac: Push((int) 39843)
0x5ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ae: Pop(3)
0x5af: Push((int) 537986)
0x5b0: Push((int) -1)
0x5b1: Push((int) 39849)
0x5b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b3: Pop(3)
0x5b4: Return(); Pop(0)

0x5b5: Push((int) 39844)
0x5b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5b8: PushEmpty(string)
0x5b9: Stack[-1] = "Neutral"
0x5ba: Call2 0x125

0x5bb: Pop(1)
0x5bc: Push((int) 537981)
0x5bd: @@ SetMessage(Stack[-1])
0x5be: Pop(1)
0x5bf: @@ ClearReplies()
0x5c0: Pop(0)
0x5c1: Push((int) 537982)
0x5c2: Push((int) 39846)
0x5c3: Push((int) 39845)
0x5c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c5: Pop(3)
0x5c6: Push((int) 537985)
0x5c7: Push((int) -1)
0x5c8: Push((int) 39848)
0x5c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ca: Pop(3)
0x5cb: Return(); Pop(0)

0x5cc: Push((int) 39846)
0x5cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5cf: PushEmpty(string)
0x5d0: Stack[-1] = "Neutral"
0x5d1: Call2 0x125

0x5d2: Pop(1)
0x5d3: Push((int) 537983)
0x5d4: @@ SetMessage(Stack[-1])
0x5d5: Pop(1)
0x5d6: @@ ClearReplies()
0x5d7: Pop(0)
0x5d8: Push((int) 537984)
0x5d9: Push((int) -1)
0x5da: Push((int) 39847)
0x5db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dc: Pop(3)
0x5dd: Return(); Pop(0)

0x5de: Push((int) 39835)
0x5df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5e1: PushEmpty(string)
0x5e2: Stack[-1] = "Neutral"
0x5e3: Call2 0x125

0x5e4: Pop(1)
0x5e5: Push((int) 537973)
0x5e6: @@ SetMessage(Stack[-1])
0x5e7: Pop(1)
0x5e8: @@ ClearReplies()
0x5e9: Pop(0)
0x5ea: Push((int) 537974)
0x5eb: Push((int) 39840)
0x5ec: Push((int) 39836)
0x5ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(3)
0x5ef: Push((int) 537975)
0x5f0: Push((int) -1)
0x5f1: Push((int) 39838)
0x5f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f3: Pop(3)
0x5f4: Return(); Pop(0)

0x5f5: Push((int) 45790)
0x5f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x5f8: PushEmpty(string)
0x5f9: Stack[-1] = "Neutral"
0x5fa: Call2 0x125

0x5fb: Pop(1)
0x5fc: Push((int) 543333)
0x5fd: @@ SetMessage(Stack[-1])
0x5fe: Pop(1)
0x5ff: @@ ClearReplies()
0x600: Pop(0)
0x601: Push((int) 543334)
0x602: Push((int) -1)
0x603: Push((int) 45791)
0x604: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x605: Pop(3)
0x606: Push((int) 543335)
0x607: Push((int) -1)
0x608: Push((int) 45792)
0x609: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60a: Pop(3)
0x60b: Return(); Pop(0)

0x60c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x60d: PushEmpty(bool)
0x60e: Call2 0x1258

0x60f: Pop(0)
0x610: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x611: @ lshStopAnimation()
0x612: Pop(0)
0x613: GOTO 0x616

0x614: @ StopAnimation()
0x615: Pop(0)
0x616: Return(); Pop(0)

0x617: GOTO 0x13c

0x618: Return(); Pop(0)

0x619: PushEmpty()
0x61a: EventDisable(0)
0x61b: PushEmpty(object)
0x61c: Stack[-1] = Stack[-2]
0x61d: Call2 0x63a

0x61e: Pop(1)
0x61f: PushEmpty(object)
0x620: Stack[-1] = Stack[-2]
0x621: Call2 0x12a9

0x622: Pop(1)
0x623: EventEnable(0)
0x624: @ Hold()
0x625: Pop(0)
0x626: GOTO 0x624

0x627: Return(); Pop(0)

0x628: PushEmpty(int, int)
0x629: PushEmpty(int, object)
0x62a: Stack[-1] = Stack[-5]
0x62b: Call2 0x1232

0x62c: Stack[-3] = Stack[-2]
0x62d: Pop(2)
0x62e: Push((int) 0)
0x62f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x631: PushEmpty(object)
0x632: Stack[-1] = Stack[-4]
0x633: Call2 0x1235

0x634: Pop(1)
0x635: Return(); Pop(2)

0x636: PushEmpty()
0x637: Call2 0x123b

0x638: Pop(0)
0x639: Return(); Pop(0)

0x63a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x63b: Pop(0); Push((bool) Stack[-21] == 0)
0x63c: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x63d: PushEmpty(string)
0x63e: Stack[-1] = "fdie"
0x63f: Call2 0x695

0x640: Pop(1)
0x641: GOTO 0x694

0x642: @@ GetPosition(Stack[-10])
0x643: Pop(0)
0x644: @ GetPosition(Stack[-9])
0x645: Pop(0)
0x646: @ GetDirection(Stack[-8])
0x647: Pop(0)
0x648: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x649: Push(CvectorIndex(Stack[-7], 0))
0x64a: Push(CvectorIndex(Stack[-9], 0))
0x64b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x64c: Push(CvectorIndex(Stack[-8], 2))
0x64d: Push(CvectorIndex(Stack[-10], 2))
0x64e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x64f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x650: Push((int) 0)
0x651: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x653: Stack[-6] = "fdie"
0x654: GOTO 0x656

0x655: Stack[-6] = "bdie"
0x656: @ RemoveRTEnvelope()
0x657: Pop(0)
0x658: @ SetDeathState()
0x659: Pop(0)
0x65a: @ Stop()
0x65b: Pop(0)
0x65c: @ StopAsync()
0x65d: Pop(0)
0x65e: Stack[-5] = Stack[-21]
0x65f: Push("GetScriptProperty")
0x660: Push((int) 2)
0x661: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x662: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x663: Push("Owner")
0x664: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x665: Pop(1)
0x666: Push(Stack[-4])
0x667: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x668: Push("Owner")
0x669: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x66a: Pop(1)
0x66b: Pop(0); Push((bool) Stack[-5] == 0)
0x66c: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66d: Stack[-5] = Stack[-21]
0x66e: Push("@GetEyesHeight")
0x66f: Push((int) 1)
0x670: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x671: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x672: @@ GetEyesHeight(Stack[-2])
0x673: Pop(0)
0x674: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x675: Push(CvectorIndex(Stack[-1], 1))
0x676: Stack[-1] = Stack[-3]
0x677: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x678: Push("head")
0x679: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x67a: Pop(1)
0x67b: Stack[-3] = (bool) 1
0x67c: GOTO 0x67e

0x67d: Stack[-3] = (bool) 0
0x67e: PushEmpty(string)
0x67f: Stack[-1] = Stack[-7]
0x680: Call2 0xed2

0x681: Pop(1)
0x682: Push("all")
0x683: @ PlayAnimation(Stack[-1], Stack[-7])
0x684: Pop(1)
0x685: @ WaitForAnimEnd()
0x686: Pop(0)
0x687: Push(Stack[-3])
0x688: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x689: @ StopAsync()
0x68a: Pop(0)
0x68b: Push("head")
0x68c: @ UnlookAsync(Stack[-1])
0x68d: Pop(1)
0x68e: Push("all")
0x68f: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x690: Pop(1)
0x691: @ RemoveEnvelope()
0x692: Pop(0)
0x693: Stack[-5] = 0
0x694: Return(); Pop(20)

0x695: PushEmpty()
0x696: @ RemoveRTEnvelope()
0x697: Pop(0)
0x698: @ SetDeathState()
0x699: Pop(0)
0x69a: @ Stop()
0x69b: Pop(0)
0x69c: @ StopAsync()
0x69d: Pop(0)
0x69e: @ StopSecondaryAnimation()
0x69f: Pop(0)
0x6a0: PushEmpty(string)
0x6a1: Stack[-1] = Stack[-2]
0x6a2: Call2 0xed2

0x6a3: Pop(1)
0x6a4: Push("all")
0x6a5: @ PlayAnimation(Stack[-1], Stack[-2])
0x6a6: Pop(1)
0x6a7: @ WaitForAnimEnd()
0x6a8: Pop(0)
0x6a9: Push("all")
0x6aa: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x6ab: Pop(1)
0x6ac: @ RemoveEnvelope()
0x6ad: Pop(0)
0x6ae: Return(); Pop(0)

0x6af: PushEmpty()
0x6b0: Return(); Pop(0)

0x6b1: PushEmpty()
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty()
0x6b4: Return(); Pop(0)

0x6b5: Push((bool) 1)
0x6b6: @ SensePlayerOnly(Stack[-1])
0x6b7: Pop(1)
0x6b8: PushEmpty()
0x6b9: Call2 0x125a

0x6ba: Pop(0)
0x6bb: PushEmpty()
0x6bc: Call2 0x6c4

0x6bd: Pop(0)
0x6be: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x6bf: PushEmpty()
0x6c0: Call2 0x7c9

0x6c1: Pop(0)
0x6c2: GOTO 0x6be

0x6c3: Return(); Pop(0)

0x6c4: PushEmpty(bool)
0x6c5: Call2 0xe0c

0x6c6: Pop(0)
0x6c7: Pop(1); Push((bool) Stack[-1] == 0)
0x6c8: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c9: PushEmpty()
0x6ca: Call2 0x123b

0x6cb: Pop(0)
0x6cc: Return(); Pop(0)

0x6cd: PushEmpty(int, int)
0x6ce: PushEmpty(int, object)
0x6cf: Stack[-1] = Stack[-5]
0x6d0: Call2 0x1232

0x6d1: Stack[-3] = Stack[-2]
0x6d2: Pop(2)
0x6d3: Push((int) 0)
0x6d4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6d6: Push((int) 1)
0x6d7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6d8: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6d9: PushEmpty()
0x6da: Call2 0x788

0x6db: Pop(0)
0x6dc: PushEmpty(object)
0x6dd: Stack[-1] = Stack[-4]
0x6de: Call2 0x1235

0x6df: Pop(1)
0x6e0: Return(); Pop(2)

0x6e1: PushEmpty(int, int)
0x6e2: PushEmpty(object)
0x6e3: Stack[-1] = Stack[-4]
0x6e4: Call2 0x1126

0x6e5: Pop(1)
0x6e6: PushEmpty(int, object)
0x6e7: Stack[-1] = Stack[-5]
0x6e8: Call2 0x1178

0x6e9: Stack[-3] = Stack[-2]
0x6ea: Pop(2)
0x6eb: Push((int) 0)
0x6ec: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6ee: Push((int) 1)
0x6ef: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f1: PushEmpty()
0x6f2: Call2 0x788

0x6f3: Pop(0)
0x6f4: PushEmpty(object)
0x6f5: Stack[-1] = Stack[-4]
0x6f6: Call2 0x1182

0x6f7: Pop(1)
0x6f8: Return(); Pop(2)

0x6f9: PushEmpty(int, int)
0x6fa: PushEmpty(bool, object, object, bool)
0x6fb: Stack[-3] = Stack[-9]
0x6fc: Stack[-2] = Stack[-8]
0x6fd: Stack[-1] = Stack[-7]
0x6fe: Call2 0x129f

0x6ff: Pop(3)
0x700: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x701: PushEmpty(int, object, bool)
0x702: Stack[-2] = Stack[-8]
0x703: Stack[-1] = Stack[-6]
0x704: Call2 0x11d5

0x705: Stack[-4] = Stack[-3]
0x706: Pop(3)
0x707: Push((int) 0)
0x708: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x709: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x70a: Push((int) 1)
0x70b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70d: PushEmpty()
0x70e: Call2 0x788

0x70f: Pop(0)
0x710: PushEmpty(object)
0x711: Stack[-1] = Stack[-6]
0x712: Call2 0x11dc

0x713: Pop(1)
0x714: Return(); Pop(2)

0x715: PushEmpty(int, int)
0x716: PushEmpty(int, object)
0x717: Stack[-1] = Stack[-5]
0x718: Call2 0x11ff

0x719: Stack[-3] = Stack[-2]
0x71a: Pop(2)
0x71b: Push((int) 0)
0x71c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x71d: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x71e: Push((int) 1)
0x71f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x720: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x721: PushEmpty()
0x722: Call2 0x788

0x723: Pop(0)
0x724: PushEmpty(object)
0x725: Stack[-1] = Stack[-4]
0x726: Call2 0x1202

0x727: Pop(1)
0x728: Return(); Pop(2)

0x729: PushEmpty(int, int)
0x72a: PushEmpty(bool, object, string)
0x72b: Stack[-2] = Stack[-7]
0x72c: Stack[-1] = Stack[-6]
0x72d: Call2 0x10d0

0x72e: Pop(2)
0x72f: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x730: PushEmpty()
0x731: Call2 0x788

0x732: Pop(0)
0x733: PushEmpty(object, string)
0x734: Stack[-2] = Stack[-6]
0x735: Stack[-1] = Stack[-5]
0x736: Call2 0x10f0

0x737: Pop(2)
0x738: GOTO 0x74d

0x739: PushEmpty(int, string, object)
0x73a: Stack[-2] = Stack[-6]
0x73b: Stack[-1] = Stack[-7]
0x73c: Call2 0x1204

0x73d: Stack[-4] = Stack[-3]
0x73e: Pop(3)
0x73f: Push((int) 0)
0x740: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x741: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x742: Push((int) 1)
0x743: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x744: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x745: PushEmpty()
0x746: Call2 0x788

0x747: Pop(0)
0x748: PushEmpty(string, object)
0x749: Stack[-2] = Stack[-5]
0x74a: Stack[-1] = Stack[-6]
0x74b: Call2 0x1210

0x74c: Pop(2)
0x74d: Return(); Pop(2)

0x74e: PushEmpty()
0x74f: PushEmpty(bool, string)
0x750: Stack[-1] = Stack[-3]
0x751: Call2 0x1133

0x752: Pop(1)
0x753: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x754: PushEmpty()
0x755: Call2 0x788

0x756: Pop(0)
0x757: PushEmpty(string)
0x758: Stack[-1] = Stack[-2]
0x759: Call2 0x1143

0x75a: Pop(1)
0x75b: Return(); Pop(0)

0x75c: PushEmpty()
0x75d: PushEmpty(bool, object)
0x75e: Stack[-1] = Stack[-3]
0x75f: Call2 0x1109

0x760: Pop(1)
0x761: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x762: PushEmpty()
0x763: Call2 0x788

0x764: Pop(0)
0x765: PushEmpty(object)
0x766: Stack[-1] = Stack[-2]
0x767: Call2 0x1120

0x768: Pop(1)
0x769: GOTO 0x76e

0x76a: PushEmpty(object)
0x76b: Stack[-1] = Stack[-2]
0x76c: Call2 0x7a1

0x76d: Pop(1)
0x76e: Return(); Pop(0)

0x76f: PushEmpty()
0x770: PushEmpty(object)
0x771: Stack[-1] = Stack[-2]
0x772: Call2 0x7a1

0x773: Pop(1)
0x774: Return(); Pop(0)

0x775: PushEmpty()
0x776: Push((int) 110)
0x777: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x778: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x779: Return(); Pop(0)

0x77a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x77b: Push((int) 110)
0x77c: @ KillTimer(Stack[-1])
0x77d: Pop(1)
0x77e: @ ResetAAS()
0x77f: Pop(0)
0x780: Return(); Pop(0)

0x781: PushEmpty()
0x782: Call2 0x788

0x783: Pop(0)
0x784: PushEmpty()
0x785: Call2 0x123b

0x786: Pop(0)
0x787: Return(); Pop(0)

0x788: Push((int) 110)
0x789: @ KillTimer(Stack[-1])
0x78a: Pop(1)
0x78b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x78c: PushEmpty()
0x78d: Call2 0x810

0x78e: Pop(0)
0x78f: Return(); Pop(0)

0x790: Push((int) 110)
0x791: @ KillTimer(Stack[-1])
0x792: Pop(1)
0x793: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x794: PushEmpty()
0x795: Call2 0x817

0x796: Pop(0)
0x797: Return(); Pop(0)

0x798: PushEmpty()
0x799: PushEmpty()
0x79a: Call2 0x788

0x79b: Pop(0)
0x79c: PushEmpty(object)
0x79d: Stack[-1] = Stack[-2]
0x79e: Call2 0x10b8

0x79f: Pop(1)
0x7a0: Return(); Pop(0)

0x7a1: PushEmpty(bool, int, bool, int)
0x7a2: PushEmpty(bool, object)
0x7a3: Stack[-1] = Stack[-7]
0x7a4: Call2 0xd6b

0x7a5: Pop(1)
0x7a6: Pop(1); Push((bool) Stack[-1] == 0)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a8: Return(); Pop(4)

0x7a9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x7aa: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7ab: Return(); Pop(4)

0x7ac: @ IsPlayerActor(Stack[-5], Stack[-2])
0x7ad: Pop(0)
0x7ae: Pop(0); Push((bool) Stack[-2] == 0)
0x7af: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7b0: Return(); Pop(4)

0x7b1: PushEmpty(int, object)
0x7b2: Stack[-1] = Stack[-7]
0x7b3: Call2 0x1168

0x7b4: Stack[-3] = Stack[-2]
0x7b5: Pop(2)
0x7b6: Push((int) 0)
0x7b7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7b8: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7b9: Push((int) 1)
0x7ba: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7bc: PushEmpty()
0x7bd: Call2 0x790

0x7be: Pop(0)
0x7bf: PushEmpty(object)
0x7c0: Stack[-1] = Stack[-6]
0x7c1: Call2 0x1172

0x7c2: Pop(1)
0x7c3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x7c4: Push((int) 110)
0x7c5: Push((float)10.0)
0x7c6: @ SetTimer(Stack[-2], Stack[-1])
0x7c7: Pop(2)
0x7c8: Return(); Pop(4)

0x7c9: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x7ca: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7cb: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x7cc: Push((float)0.5)
0x7cd: @ rand(Stack[-7], Stack[-1])
0x7ce: Pop(1)
0x7cf: @ Sleep(Stack[-6])
0x7d0: Pop(0)
0x7d1: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7d2: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7d3: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x7d4: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7d5: @ GetPosition(Stack[-4])
0x7d6: Pop(0)
0x7d7: PushEmpty(float)
0x7d8: Call2 0x804

0x7d9: Pop(0)
0x7da: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x7db: Pop(1)
0x7dc: Push(Stack[-3])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7de: GOTO 0x7e3

0x7df: Push((int) 1)
0x7e0: @ Sleep(Stack[-1])
0x7e1: Pop(1)
0x7e2: GOTO 0x7d5

0x7e3: GOTO 0x7e5

0x7e4: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x7e5: PushEmpty(object, cvector)
0x7e6: Stack[-1] = Stack[-7]
0x7e7: Call2 0x820

0x7e8: Stack[-4] = Stack[-2]
0x7e9: Pop(2)
0x7ea: Pop(0); Push(( Stack[-2] != 0 )
0x7eb: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7ec: @ RotatePath(Stack[-2], Stack[-1])
0x7ed: Pop(0)
0x7ee: Push(Stack[-1])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7f0: PushEmpty(bool)
0x7f1: Call2 0x81e

0x7f2: Pop(0)
0x7f3: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x7f4: Pop(1)
0x7f5: Stack[-2] = 0
0x7f6: Push(Stack[-1])
0x7f7: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7f8: PushEmpty()
0x7f9: Push(-0, 0); TaskCall(5)
0x7fa: Call2 0x8ca

0x7fb: Pop(-0, 0); TaskReturn
0x7fc: Pop(0)
0x7fd: GOTO 0x801

0x7fe: Push((int) 1)
0x7ff: @ Sleep(Stack[-1])
0x800: Pop(1)
0x801: Stack[-2] = 0
0x802: GOTO 0x7d1

0x803: Return(); Pop(12)

0x804: PushEmpty(float, float)
0x805: @ GetCameraFarDistance(Stack[-1])
0x806: Pop(0)
0x807: Stack[-3] = Stack[-1]
0x808: Return(); Pop(2)

0x809: PushEmpty()
0x80a: @ RequestClearPath(Stack[-1])
0x80b: Pop(0)
0x80c: Return(); Pop(0)

0x80d: @ Stop()
0x80e: Pop(0)
0x80f: Return(); Pop(0)

0x810: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x811: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x812: @ Stop()
0x813: Pop(0)
0x814: @ StopGroup0()
0x815: Pop(0)
0x816: Return(); Pop(0)

0x817: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x818: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x819: @ Stop()
0x81a: Pop(0)
0x81b: @ StopGroup0()
0x81c: Pop(0)
0x81d: Return(); Pop(0)

0x81e: Stack[-1] = (bool) 0
0x81f: Return(); Pop(0)

0x820: PushEmpty(object, object)
0x821: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x822: Pop(0)
0x823: Stack[-4] = Stack[-1]
0x824: Return(); Pop(2)

0x825: Stack[-1] = 0
0x826: PushEmpty(int, int)
0x827: PushEmpty(int, object)
0x828: Stack[-1] = Stack[-5]
0x829: Call2 0x1232

0x82a: Stack[-3] = Stack[-2]
0x82b: Pop(2)
0x82c: Push((int) 0)
0x82d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x82f: Push((int) 1)
0x830: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x831: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x832: PushEmpty()
0x833: Call2 0x91b

0x834: Pop(0)
0x835: PushEmpty(object)
0x836: Stack[-1] = Stack[-4]
0x837: Call2 0x1235

0x838: Pop(1)
0x839: Return(); Pop(2)

0x83a: PushEmpty(int, int)
0x83b: PushEmpty(object)
0x83c: Stack[-1] = Stack[-4]
0x83d: Call2 0x1126

0x83e: Pop(1)
0x83f: PushEmpty(int, object)
0x840: Stack[-1] = Stack[-5]
0x841: Call2 0x1178

0x842: Stack[-3] = Stack[-2]
0x843: Pop(2)
0x844: Push((int) 0)
0x845: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x846: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x847: Push((int) 1)
0x848: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x849: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x84a: PushEmpty()
0x84b: Call2 0x91b

0x84c: Pop(0)
0x84d: PushEmpty(object)
0x84e: Stack[-1] = Stack[-4]
0x84f: Call2 0x1182

0x850: Pop(1)
0x851: Return(); Pop(2)

0x852: PushEmpty(int, int)
0x853: PushEmpty(bool, object, object, bool)
0x854: Stack[-3] = Stack[-9]
0x855: Stack[-2] = Stack[-8]
0x856: Stack[-1] = Stack[-7]
0x857: Call2 0x129f

0x858: Pop(3)
0x859: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x85a: PushEmpty(int, object, bool)
0x85b: Stack[-2] = Stack[-8]
0x85c: Stack[-1] = Stack[-6]
0x85d: Call2 0x11d5

0x85e: Stack[-4] = Stack[-3]
0x85f: Pop(3)
0x860: Push((int) 0)
0x861: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x862: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x863: Push((int) 1)
0x864: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x865: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x866: PushEmpty()
0x867: Call2 0x91b

0x868: Pop(0)
0x869: PushEmpty(object)
0x86a: Stack[-1] = Stack[-6]
0x86b: Call2 0x11dc

0x86c: Pop(1)
0x86d: Return(); Pop(2)

0x86e: PushEmpty(int, int)
0x86f: PushEmpty(int, object)
0x870: Stack[-1] = Stack[-5]
0x871: Call2 0x11ff

0x872: Stack[-3] = Stack[-2]
0x873: Pop(2)
0x874: Push((int) 0)
0x875: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x876: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x877: Push((int) 1)
0x878: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x879: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87a: PushEmpty()
0x87b: Call2 0x91b

0x87c: Pop(0)
0x87d: PushEmpty(object)
0x87e: Stack[-1] = Stack[-4]
0x87f: Call2 0x1202

0x880: Pop(1)
0x881: Return(); Pop(2)

0x882: PushEmpty(int, int)
0x883: PushEmpty(bool, object, string)
0x884: Stack[-2] = Stack[-7]
0x885: Stack[-1] = Stack[-6]
0x886: Call2 0x10d0

0x887: Pop(2)
0x888: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x889: PushEmpty()
0x88a: Call2 0x91b

0x88b: Pop(0)
0x88c: PushEmpty(object, string)
0x88d: Stack[-2] = Stack[-6]
0x88e: Stack[-1] = Stack[-5]
0x88f: Call2 0x10f0

0x890: Pop(2)
0x891: GOTO 0x8a6

0x892: PushEmpty(int, string, object)
0x893: Stack[-2] = Stack[-6]
0x894: Stack[-1] = Stack[-7]
0x895: Call2 0x1204

0x896: Stack[-4] = Stack[-3]
0x897: Pop(3)
0x898: Push((int) 0)
0x899: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x89a: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x89b: Push((int) 1)
0x89c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x89d: IF (Stack[-1] == 0) GOTO 0x8a1; Pop(1)

0x89e: PushEmpty()
0x89f: Call2 0x91b

0x8a0: Pop(0)
0x8a1: PushEmpty(string, object)
0x8a2: Stack[-2] = Stack[-5]
0x8a3: Stack[-1] = Stack[-6]
0x8a4: Call2 0x1210

0x8a5: Pop(2)
0x8a6: Return(); Pop(2)

0x8a7: PushEmpty()
0x8a8: PushEmpty(bool, string)
0x8a9: Stack[-1] = Stack[-3]
0x8aa: Call2 0x1133

0x8ab: Pop(1)
0x8ac: IF (Stack[-1] == 0) GOTO 0x8b4; Pop(1)

0x8ad: PushEmpty()
0x8ae: Call2 0x91b

0x8af: Pop(0)
0x8b0: PushEmpty(string)
0x8b1: Stack[-1] = Stack[-2]
0x8b2: Call2 0x1143

0x8b3: Pop(1)
0x8b4: Return(); Pop(0)

0x8b5: PushEmpty()
0x8b6: Call2 0x91b

0x8b7: Pop(0)
0x8b8: PushEmpty()
0x8b9: Call2 0x123b

0x8ba: Pop(0)
0x8bb: Return(); Pop(0)

0x8bc: PushEmpty()
0x8bd: PushEmpty(bool, object)
0x8be: Stack[-1] = Stack[-3]
0x8bf: Call2 0x1109

0x8c0: Pop(1)
0x8c1: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c2: PushEmpty()
0x8c3: Call2 0x91b

0x8c4: Pop(0)
0x8c5: PushEmpty(object)
0x8c6: Stack[-1] = Stack[-2]
0x8c7: Call2 0x1120

0x8c8: Pop(1)
0x8c9: Return(); Pop(0)

0x8ca: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x8cb: @ WaitForAnimEnd()
0x8cc: Pop(0)
0x8cd: PushEmpty(bool)
0x8ce: Call2 0xe0c

0x8cf: Pop(0)
0x8d0: Pop(1); Push((bool) Stack[-1] == 0)
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8d2: Return(); Pop(14)

0x8d3: PushEmpty(int)
0x8d4: Call2 0x1157

0x8d5: Stack[-8] = Stack[-1]
0x8d6: Pop(1)
0x8d7: Stack[-6] = (int) 0
0x8d8: PushEmpty(bool)
0x8d9: Stack[-1] = (bool) 0
0x8da: Push((int) 5)
0x8db: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8dd: PushEmpty(bool)
0x8de: Call2 0xe0c

0x8df: Pop(0)
0x8e0: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8e1: Stack[-1] = (bool) 1
0x8e2: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x8e3: Push((int) 3)
0x8e4: @ irand(Stack[-6], Stack[-1])
0x8e5: Pop(1)
0x8e6: Push((int) 0)
0x8e7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x8e8: IF (Stack[-1] == 0) GOTO 0x8fa; Pop(1)

0x8e9: Push(Stack[-7])
0x8ea: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8eb: @ irand(Stack[-4], Stack[-7])
0x8ec: Pop(0)
0x8ed: Push("all")
0x8ee: PushEmpty(string, int)
0x8ef: Stack[-1] = Stack[-7]
0x8f0: Call2 0x1150

0x8f1: Pop(1)
0x8f2: @ PlayAnimation(Stack[-2], Stack[-1])
0x8f3: Pop(2)
0x8f4: @ WaitForAnimEnd(Stack[-3])
0x8f5: Pop(0)
0x8f6: Pop(0); Push((bool) Stack[-3] == 0)
0x8f7: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f8: GOTO 0x916

0x8f9: GOTO 0x90b

0x8fa: Push((int) 1)
0x8fb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x8fc: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x8fd: Push((int) 4)
0x8fe: @ rand(Stack[-3], Stack[-1])
0x8ff: Pop(1)
0x900: Push((int) 1)
0x901: Pop(1); Push(Stack[-3] + Stack[-1]);
0x902: @ Sleep(Stack[-1], Stack[-2])
0x903: Pop(1)
0x904: Pop(0); Push((bool) Stack[-1] == 0)
0x905: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x906: GOTO 0x916

0x907: GOTO 0x90b

0x908: Push(Stack[-6])
0x909: IF (Stack[-1] == 0) GOTO 0x90b; Pop(1)

0x90a: GOTO 0x916

0x90b: PushEmpty(bool)
0x90c: Call2 0x919

0x90d: Pop(0)
0x90e: Pop(1); Push((bool) Stack[-1] == 0)
0x90f: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x910: GOTO 0x916

0x911: @ ResetAAS()
0x912: Pop(0)
0x913: Push((int) 1)
0x914: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x915: GOTO 0x8d8

0x916: @ ResetAAS()
0x917: Pop(0)
0x918: Return(); Pop(14)

0x919: Stack[-1] = (bool) 1
0x91a: Return(); Pop(0)

0x91b: @ StopAnimation()
0x91c: Pop(0)
0x91d: @ StopGroup0()
0x91e: Pop(0)
0x91f: Return(); Pop(0)

0x920: PushEmpty()
0x921: PushEmpty(object, bool, float)
0x922: Stack[-3] = Stack[-4]
0x923: Stack[-2] = (bool) 1
0x924: Stack[-1] = (float) 180.0
0x925: Call2 0x92e

0x926: Pop(3)
0x927: Return(); Pop(0)

0x928: PushEmpty()
0x929: Stack[-3] = (float) 0.05
0x92a: Return(); Pop(0)

0x92b: PushEmpty()
0x92c: Stack[-3] = (int) 0
0x92d: Return(); Pop(0)

0x92e: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x92f: PushEmpty()
0x930: Call2 0xa13

0x931: Pop(0)
0x932: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x933: Push("@GetAttackDistance")
0x934: Push((int) 1)
0x935: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x936: IF (Stack[-1] == 0) GOTO 0x93c; Pop(1)

0x937: @@ GetAttackDistance(Stack[-11])
0x938: Pop(0)
0x939: Push((int) 50)
0x93a: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x93b: GOTO 0x93d

0x93c: Stack[-11] = Stack[-23]
0x93d: Push((int) 150)
0x93e: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x93f: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x940: Stack[-11] = (int) 150
0x941: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x942: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x943: @ IsPlayerActor(Stack[-0], Stack[-8])
0x944: Pop(0)
0x945: Push(Stack[-8])
0x946: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x947: Push("attack")
0x948: @ PlayGlobalMusic(Stack[-1])
0x949: Pop(1)
0x94a: PushEmpty(object)
0x94b: Call2 0xefb

0x94c: Pop(0)
0x94d: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x94e: Pop(1)
0x94f: Push(Stack[-24])
0x950: IF (Stack[-1] == 0) GOTO 0x953; Pop(1)

0x951: Stack[-7] = (bool) 0
0x952: GOTO 0x954

0x953: Stack[-7] = (bool) 1
0x954: Push((float)400.0)
0x955: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x956: PushEmpty(bool)
0x957: Stack[-1] = (bool) 0
0x958: PushEmpty(bool, object)
0x959: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x95a: Call2 0xd6b

0x95b: Pop(1)
0x95c: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95d: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x95e: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95f: Stack[-1] = (bool) 1
0x960: IF (Stack[-1] == 0) GOTO 0xa02; Pop(1)

0x961: PushEmpty()
0x962: Call2 0xbb0

0x963: Pop(0)
0x964: @@ GetPFPosition(Stack[-10])
0x965: Pop(0)
0x966: @ GetPFPosition(Stack[-9])
0x967: Pop(0)
0x968: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x969: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x96a: Pop(0); Push(Stack[-6] * Stack[-6]);
0x96b: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x96c: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x96d: PushEmpty(bool, object, float, float, bool, bool)
0x96e: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x96f: Stack[-4] = Stack[-17]
0x970: Stack[-3] = (float) 3000.0
0x971: Stack[-2] = (bool) 1
0x972: Stack[-1] = (bool) 0
0x973: Push(-6, 3); TaskCall(7)
0x974: Call2 0xbcb

0x975: Pop(-6, 3); TaskReturn
0x976: Pop(5)
0x977: Pop(1); Push((bool) Stack[-1] == 0)
0x978: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x979: GOTO 0xa02

0x97a: Stack[-7] = (bool) 0
0x97b: GOTO 0xa01

0x97c: Pop(0); Push(Stack[-23] * Stack[-23]);
0x97d: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x97e: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x97f: @@ GetPFPosition(Stack[-3])
0x980: Pop(0)
0x981: @ CanReachByPF(Stack[-2], Stack[-3])
0x982: Pop(0)
0x983: Pop(0); Push((bool) Stack[-2] == 0)
0x984: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x985: PushEmpty(bool, object, float, float, bool, bool)
0x986: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x987: Stack[-4] = Stack[-17]
0x988: Stack[-3] = (float) 3000.0
0x989: Stack[-2] = (bool) 1
0x98a: Stack[-1] = (bool) 0
0x98b: Push(-6, 3); TaskCall(7)
0x98c: Call2 0xbcb

0x98d: Pop(-6, 3); TaskReturn
0x98e: Pop(5)
0x98f: Pop(1); Push((bool) Stack[-1] == 0)
0x990: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x991: GOTO 0xa02

0x992: Stack[-7] = (bool) 0
0x993: GOTO 0x956

0x994: Pop(0); Push((bool) Stack[-7] == 0)
0x995: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x996: PushEmpty(object)
0x997: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x998: Call2 0xe01

0x999: Pop(1)
0x99a: Push("all")
0x99b: Push("attack_on")
0x99c: @ PlayAnimation(Stack[-2], Stack[-1])
0x99d: Pop(2)
0x99e: @ WaitForAnimEnd()
0x99f: Pop(0)
0x9a0: PushEmpty()
0x9a1: Call2 0xbb0

0x9a2: Pop(0)
0x9a3: @ StopAsync()
0x9a4: Pop(0)
0x9a5: Stack[-7] = (bool) 1
0x9a6: PushEmpty(bool, object)
0x9a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a8: Call2 0xd6b

0x9a9: Pop(1)
0x9aa: Pop(1); Push((bool) Stack[-1] == 0)
0x9ab: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9ac: GOTO 0xa02

0x9ad: @ rand(Stack[-1])
0x9ae: Pop(0)
0x9af: PushEmpty(bool)
0x9b0: Stack[-1] = (bool) 1
0x9b1: Push((float)0.25)
0x9b2: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x9b3: IF (Stack[-1] == 0) GOTO 0x9b9; Pop(1)

0x9b4: PushEmpty(bool)
0x9b5: Call2 0xb85

0x9b6: Pop(0)
0x9b7: IF (Stack[-1] == 0) GOTO 0x9b9; Pop(1)

0x9b8: Stack[-1] = (bool) 0
0x9b9: IF (Stack[-1] == 0) GOTO 0x9ca; Pop(1)

0x9ba: @ Face(Stack[-0])
0x9bb: Pop(0)
0x9bc: PushEmpty()
0x9bd: Call2 0xbb7

0x9be: Pop(0)
0x9bf: Push("all")
0x9c0: Push("attack_stay")
0x9c1: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c2: Pop(2)
0x9c3: PushEmpty(bool, float)
0x9c4: Stack[-1] = Stack[-25]
0x9c5: Call2 0xb01

0x9c6: Pop(2)
0x9c7: @ StopAsync()
0x9c8: Pop(0)
0x9c9: GOTO 0x9f8

0x9ca: @ Face(Stack[-0])
0x9cb: Pop(0)
0x9cc: Push("all")
0x9cd: Push("fjump")
0x9ce: @ PlayAnimation(Stack[-2], Stack[-1])
0x9cf: Pop(2)
0x9d0: @ WaitForAnimEnd()
0x9d1: Pop(0)
0x9d2: PushEmpty()
0x9d3: Call2 0xbb0

0x9d4: Pop(0)
0x9d5: Push(CVector(0.0, 0.0, 0.0))
0x9d6: @ SetSpeed(Stack[-1])
0x9d7: Pop(1)
0x9d8: @ Stop()
0x9d9: Pop(0)
0x9da: @ StopAsync()
0x9db: Pop(0)
0x9dc: PushEmpty(bool)
0x9dd: Call2 0xb85

0x9de: Pop(0)
0x9df: Pop(1); Push((bool) Stack[-1] == 0)
0x9e0: IF (Stack[-1] == 0) GOTO 0x9f8; Pop(1)

0x9e1: PushEmpty(bool, object)
0x9e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e3: Call2 0xd6b

0x9e4: Pop(1)
0x9e5: Pop(1); Push((bool) Stack[-1] == 0)
0x9e6: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9e7: GOTO 0xa02

0x9e8: @@ GetPFPosition(Stack[-10])
0x9e9: Pop(0)
0x9ea: @ GetPFPosition(Stack[-9])
0x9eb: Pop(0)
0x9ec: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x9ed: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x9ee: Pop(0); Push(Stack[-23] * Stack[-23]);
0x9ef: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x9f0: IF (Stack[-1] == 0) GOTO 0x9f8; Pop(1)

0x9f1: PushEmpty(bool, float)
0x9f2: Stack[-1] = Stack[-25]
0x9f3: Call2 0xa5d

0x9f4: Pop(1)
0x9f5: Pop(1); Push((bool) Stack[-1] == 0)
0x9f6: IF (Stack[-1] == 0) GOTO 0x9f8; Pop(1)

0x9f7: GOTO 0xa02

0x9f8: GOTO 0xa01

0x9f9: PushEmpty(bool, float)
0x9fa: Stack[-1] = Stack[-25]
0x9fb: Call2 0xa5d

0x9fc: Pop(1)
0x9fd: Pop(1); Push((bool) Stack[-1] == 0)
0x9fe: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9ff: GOTO 0xa02

0xa00: Stack[-7] = (bool) 1
0xa01: GOTO 0x956

0xa02: @ WaitForAnimEnd()
0xa03: Pop(0)
0xa04: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa05: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa06: Return(); Pop(22)

0xa07: Push("all")
0xa08: Push("attack_off")
0xa09: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0a: Pop(2)
0xa0b: @ WaitForAnimEnd()
0xa0c: Pop(0)
0xa0d: Push(Stack[-8])
0xa0e: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa0f: Push((float)2.0)
0xa10: @ Sleep(Stack[-1])
0xa11: Pop(1)
0xa12: Return(); Pop(22)

0xa13: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0xa14: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xa15: Push("all")
0xa16: Push("attack_begin")
0xa17: Push((int) 1)
0xa18: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0xa19: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa1a: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xa1b: Pop(2)
0xa1c: Pop(0); Push((bool) Stack[-3] == 0)
0xa1d: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa1e: GOTO 0xa22

0xa1f: Push((int) 1)
0xa20: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xa21: GOTO 0xa15

0xa22: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xa23: Push("attack")
0xa24: Push((int) 1)
0xa25: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xa26: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa27: @ IsExisting3DSound(Stack[-3], Stack[-1])
0xa28: Pop(1)
0xa29: Pop(0); Push((bool) Stack[-2] == 0)
0xa2a: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa2b: GOTO 0xa2f

0xa2c: Push((int) 1)
0xa2d: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xa2e: GOTO 0xa23

0xa2f: Push("all")
0xa30: Push("bjump")
0xa31: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xa32: Pop(2)
0xa33: Push(CvectorIndex(Stack[-1], 2))
0xa34: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0xa35: Return(); Pop(6)

0xa36: PushEmpty(object, float, float, object, float, float)
0xa37: Push((float)0.9)
0xa38: Pop(1); Push(Stack[-9] * Stack[-1]);
0xa39: @ GetVictim(Stack[-1], Stack[-4])
0xa3a: Pop(1)
0xa3b: @ ReportAttack(Stack[-0])
0xa3c: Pop(0)
0xa3d: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xa3e: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa3f: PushEmpty(float, object, int)
0xa40: Stack[-2] = Stack[-6]
0xa41: Stack[-1] = Stack[-10]
0xa42: Call2 0x928

0xa43: Stack[-5] = Stack[-3]
0xa44: Pop(3)
0xa45: PushEmpty(float, object, float, int)
0xa46: Stack[-3] = Stack[-7]
0xa47: Stack[-2] = Stack[-6]
0xa48: PushEmpty(int, object, int)
0xa49: Stack[-2] = Stack[-10]
0xa4a: Stack[-1] = Stack[-14]
0xa4b: Call2 0x92b

0xa4c: Stack[-4] = Stack[-3]
0xa4d: Pop(3)
0xa4e: Call2 0xcf9

0xa4f: Stack[-5] = Stack[-4]
0xa50: Pop(4)
0xa51: PushEmpty(int)
0xa52: Call2 0xbb5

0xa53: Pop(0)
0xa54: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0xa55: Pop(1)
0xa56: PushEmpty(object, float)
0xa57: Stack[-2] = Stack[-5]
0xa58: Stack[-1] = Stack[-3]
0xa59: Call2 0xbbc

0xa5a: Pop(2)
0xa5b: Return(); Pop(6)

0xa5c: Stack[-3] = 0
0xa5d: PushEmpty(int, bool, int, string, int, bool, int, string)
0xa5e: PushEmpty()
0xa5f: Call2 0xbb0

0xa60: Pop(0)
0xa61: @ irand(Stack[-4], Stack[-1])
0xa62: Pop(0)
0xa63: Push((int) 1)
0xa64: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa65: @ Face(Stack[-0])
0xa66: Pop(0)
0xa67: Push((bool) 1)
0xa68: @ SetAttackState(Stack[-1])
0xa69: Pop(1)
0xa6a: PushEmpty()
0xa6b: Call2 0xf3e

0xa6c: Pop(0)
0xa6d: Push("all")
0xa6e: Push("attack_begin")
0xa6f: Pop(1); Push(Stack[-1] + Stack[-6]);
0xa70: @ PlayAnimation(Stack[-2], Stack[-1])
0xa71: Pop(2)
0xa72: @ WaitForAnimEnd()
0xa73: Pop(0)
0xa74: PushEmpty()
0xa75: Call2 0xb90

0xa76: Pop(0)
0xa77: PushEmpty(bool, object)
0xa78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa79: Call2 0xd6b

0xa7a: Pop(1)
0xa7b: Pop(1); Push((bool) Stack[-1] == 0)
0xa7c: IF (Stack[-1] == 0) GOTO 0xa81; Pop(1)

0xa7d: @ StopAsync()
0xa7e: Pop(0)
0xa7f: Stack[-10] = (bool) 0
0xa80: Return(); Pop(8)

0xa81: PushEmpty(float, int)
0xa82: Stack[-2] = Stack[-11]
0xa83: Stack[-1] = Stack[-6]
0xa84: Call2 0xa36

0xa85: Pop(2)
0xa86: Push("all")
0xa87: Push("attack_middle")
0xa88: Pop(1); Push(Stack[-1] + Stack[-6]);
0xa89: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xa8a: Pop(2)
0xa8b: Push(Stack[-3])
0xa8c: IF (Stack[-1] == 0) GOTO 0xad2; Pop(1)

0xa8d: PushEmpty()
0xa8e: Call2 0xf3e

0xa8f: Pop(0)
0xa90: Push("all")
0xa91: Push("attack_middle")
0xa92: Pop(1); Push(Stack[-1] + Stack[-6]);
0xa93: @ PlayAnimation(Stack[-2], Stack[-1])
0xa94: Pop(2)
0xa95: @ WaitForAnimEnd()
0xa96: Pop(0)
0xa97: PushEmpty()
0xa98: Call2 0xbb0

0xa99: Pop(0)
0xa9a: PushEmpty(bool, object)
0xa9b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9c: Call2 0xd6b

0xa9d: Pop(1)
0xa9e: Pop(1); Push((bool) Stack[-1] == 0)
0xa9f: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xaa0: @ StopAsync()
0xaa1: Pop(0)
0xaa2: Stack[-10] = (bool) 0
0xaa3: Return(); Pop(8)

0xaa4: PushEmpty(float, int)
0xaa5: Stack[-2] = Stack[-11]
0xaa6: Stack[-1] = Stack[-6]
0xaa7: Call2 0xa36

0xaa8: Pop(2)
0xaa9: Stack[-2] = (int) 1
0xaaa: Push("attack_middle")
0xaab: Pop(1); Push(Stack[-1] + Stack[-5]);
0xaac: Push("_")
0xaad: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaae: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0xaaf: Push("all")
0xab0: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0xab1: Pop(1)
0xab2: Pop(0); Push((bool) Stack[-3] == 0)
0xab3: IF (Stack[-1] == 0) GOTO 0xab5; Pop(1)

0xab4: GOTO 0xad2

0xab5: PushEmpty()
0xab6: Call2 0xf3e

0xab7: Pop(0)
0xab8: Push("all")
0xab9: @ PlayAnimation(Stack[-1], Stack[-2])
0xaba: Pop(1)
0xabb: @ WaitForAnimEnd()
0xabc: Pop(0)
0xabd: PushEmpty()
0xabe: Call2 0xbb0

0xabf: Pop(0)
0xac0: PushEmpty(bool, object)
0xac1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xac2: Call2 0xd6b

0xac3: Pop(1)
0xac4: Pop(1); Push((bool) Stack[-1] == 0)
0xac5: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xac6: @ StopAsync()
0xac7: Pop(0)
0xac8: Stack[-10] = (bool) 0
0xac9: Return(); Pop(8)

0xaca: PushEmpty(float, int)
0xacb: Stack[-2] = Stack[-11]
0xacc: Stack[-1] = Stack[-6]
0xacd: Call2 0xa36

0xace: Pop(2)
0xacf: Push((int) 1)
0xad0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xad1: GOTO 0xaaa

0xad2: Push((bool) 0)
0xad3: @ SetAttackState(Stack[-1])
0xad4: Pop(1)
0xad5: Push("all")
0xad6: Push("attack_end")
0xad7: Pop(1); Push(Stack[-1] + Stack[-6]);
0xad8: @ PlayAnimation(Stack[-2], Stack[-1])
0xad9: Pop(2)
0xada: PushEmpty(bool)
0xadb: Call2 0xbbe

0xadc: Pop(0)
0xadd: IF (Stack[-1] == 0) GOTO 0xae4; Pop(1)

0xade: PushEmpty(bool, float)
0xadf: Stack[-1] = (float) 0.75
0xae0: Call2 0xae6

0xae1: Pop(2)
0xae2: @ StopAsync()
0xae3: Pop(0)
0xae4: Stack[-10] = (bool) 1
0xae5: Return(); Pop(8)

0xae6: PushEmpty(float, bool, float, bool)
0xae7: @ rand(Stack[-2])
0xae8: Pop(0)
0xae9: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0xaea: IF (Stack[-1] == 0) GOTO 0xafa; Pop(1)

0xaeb: @ IsAnimationPlaying(Stack[-1])
0xaec: Pop(0)
0xaed: Pop(0); Push((bool) Stack[-1] == 0)
0xaee: IF (Stack[-1] == 0) GOTO 0xaf0; Pop(1)

0xaef: GOTO 0xaf9

0xaf0: PushEmpty(bool)
0xaf1: Call2 0xb48

0xaf2: Pop(0)
0xaf3: IF (Stack[-1] == 0) GOTO 0xaf6; Pop(1)

0xaf4: Stack[-6] = (bool) 1
0xaf5: Return(); Pop(4)

0xaf6: @ sync()
0xaf7: Pop(0)
0xaf8: GOTO 0xaeb

0xaf9: GOTO 0xaff

0xafa: @ WaitForAnimEnd()
0xafb: Pop(0)
0xafc: PushEmpty()
0xafd: Call2 0xbb0

0xafe: Pop(0)
0xaff: Stack[-6] = (bool) 0
0xb00: Return(); Pop(4)

0xb01: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0xb02: @ IsAnimationPlaying(Stack[-5])
0xb03: Pop(0)
0xb04: Pop(0); Push((bool) Stack[-5] == 0)
0xb05: IF (Stack[-1] == 0) GOTO 0xb07; Pop(1)

0xb06: GOTO 0xb27

0xb07: PushEmpty(bool)
0xb08: Call2 0xb48

0xb09: Pop(0)
0xb0a: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb0b: Stack[-12] = (bool) 1
0xb0c: Return(); Pop(10)

0xb0d: PushEmpty(bool, object)
0xb0e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0f: Call2 0xd6b

0xb10: Pop(1)
0xb11: Pop(1); Push((bool) Stack[-1] == 0)
0xb12: IF (Stack[-1] == 0) GOTO 0xb15; Pop(1)

0xb13: Stack[-12] = (bool) 0
0xb14: Return(); Pop(10)

0xb15: @@ GetPFPosition(Stack[-4])
0xb16: Pop(0)
0xb17: @ GetPFPosition(Stack[-3])
0xb18: Pop(0)
0xb19: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xb1a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xb1b: Pop(0); Push(Stack[-11] * Stack[-11]);
0xb1c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb1d: IF (Stack[-1] == 0) GOTO 0xb24; Pop(1)

0xb1e: PushEmpty(bool, float)
0xb1f: Stack[-1] = Stack[-13]
0xb20: Call2 0xa5d

0xb21: Pop(2)
0xb22: Stack[-12] = (bool) 1
0xb23: Return(); Pop(10)

0xb24: @ sync()
0xb25: Pop(0)
0xb26: GOTO 0xb02

0xb27: PushEmpty()
0xb28: Call2 0xbb0

0xb29: Pop(0)
0xb2a: Stack[-12] = (bool) 0
0xb2b: Return(); Pop(10)

0xb2c: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0xb2d: PushEmpty(bool, object)
0xb2e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2f: Call2 0xd6b

0xb30: Pop(1)
0xb31: Pop(1); Push((bool) Stack[-1] == 0)
0xb32: IF (Stack[-1] == 0) GOTO 0xb35; Pop(1)

0xb33: Stack[-11] = (bool) 0
0xb34: Return(); Pop(10)

0xb35: PushEmpty(bool)
0xb36: Call2 0xb85

0xb37: Pop(0)
0xb38: IF (Stack[-1] == 0) GOTO 0xb46; Pop(1)

0xb39: @@ GetPFPosition(Stack[-5])
0xb3a: Pop(0)
0xb3b: @ GetPFPosition(Stack[-4])
0xb3c: Pop(0)
0xb3d: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xb3e: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xb3f: @@ GetAttackDistance(Stack[-1])
0xb40: Pop(0)
0xb41: Push((int) 50)
0xb42: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xb43: Pop(0); Push(Stack[-1] * Stack[-1]);
0xb44: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0xb45: Return(); Pop(10)

0xb46: Stack[-11] = (bool) 0
0xb47: Return(); Pop(10)

0xb48: PushEmpty(bool)
0xb49: Stack[-1] = (bool) 0
0xb4a: PushEmpty(bool)
0xb4b: Call2 0xb2c

0xb4c: Pop(0)
0xb4d: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb4e: PushEmpty(bool)
0xb4f: Call2 0xb58

0xb50: Pop(0)
0xb51: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb52: Stack[-1] = (bool) 1
0xb53: IF (Stack[-1] == 0) GOTO 0xb56; Pop(1)

0xb54: Stack[-1] = (bool) 1
0xb55: Return(); Pop(0)

0xb56: Stack[-1] = (bool) 0
0xb57: Return(); Pop(0)

0xb58: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0xb59: @ GetScene(Stack[-5])
0xb5a: Pop(0)
0xb5b: Stack[-4] = (bool) 0
0xb5c: PushEmpty(cvector, object)
0xb5d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5e: Call2 0xcd9

0xb5f: Pop(1)
0xb60: Pop(1); Push(( -Stack[-1])
0xb61: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0xb62: Pop(1)
0xb63: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0xb64: IF (Stack[-1] == 0) GOTO 0xb66; Pop(1)

0xb65: GOTO 0xb82

0xb66: @ Face(Stack[-0])
0xb67: Pop(0)
0xb68: Push("all")
0xb69: Push("bjump")
0xb6a: @ PlayAnimation(Stack[-2], Stack[-1])
0xb6b: Pop(2)
0xb6c: @@ GetPFPosition(Stack[-2])
0xb6d: Pop(0)
0xb6e: @ GetPFPosition(Stack[-1])
0xb6f: Pop(0)
0xb70: @ WaitForAnimEnd()
0xb71: Pop(0)
0xb72: PushEmpty()
0xb73: Call2 0xbb0

0xb74: Pop(0)
0xb75: @ StopAsync()
0xb76: Pop(0)
0xb77: Push(CVector(0.0, 0.0, 0.0))
0xb78: @ SetSpeed(Stack[-1])
0xb79: Pop(1)
0xb7a: Stack[-4] = (bool) 1
0xb7b: PushEmpty(bool)
0xb7c: Call2 0xb2c

0xb7d: Pop(0)
0xb7e: Pop(1); Push((bool) Stack[-1] == 0)
0xb7f: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb80: GOTO 0xb82

0xb81: GOTO 0xb5c

0xb82: Stack[-11] = Stack[-4]
0xb83: Return(); Pop(10)

0xb84: Stack[-5] = 0
0xb85: PushEmpty(bool, bool)
0xb86: Push("IsAttacking")
0xb87: Push((int) 1)
0xb88: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0xb89: IF (Stack[-1] == 0) GOTO 0xb8e; Pop(1)

0xb8a: @@ IsAttacking(Stack[-1])
0xb8b: Pop(0)
0xb8c: Stack[-3] = Stack[-1]
0xb8d: Return(); Pop(2)

0xb8e: Stack[-3] = (bool) 0
0xb8f: Return(); Pop(2)

0xb90: PushEmpty(float, int, float, int)
0xb91: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xb92: IF (Stack[-1] == 0) GOTO 0xb94; Pop(1)

0xb93: Return(); Pop(4)

0xb94: Push( Stack[5 + Tasks[-1].StackPointer] )
0xb95: IF (Stack[-1] == 0) GOTO 0xb9c; Pop(1)

0xb96: Push((int) -1)
0xb97: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xb98: Push((int) 0)
0xb99: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0xb9a: IF (Stack[-1] == 0) GOTO 0xb9c; Pop(1)

0xb9b: Return(); Pop(4)

0xb9c: @ rand(Stack[-2])
0xb9d: Pop(0)
0xb9e: PushEmpty(float)
0xb9f: Call2 0xbc2

0xba0: Pop(0)
0xba1: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xba2: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xba3: @ irand(Stack[-1], Stack[-2])
0xba4: Pop(0)
0xba5: Push((int) 1)
0xba6: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xba7: Push("attack")
0xba8: Pop(1); Push(Stack[-1] + Stack[-2]);
0xba9: @ Speak(Stack[-1])
0xbaa: Pop(1)
0xbab: PushEmpty(int)
0xbac: Call2 0xbc0

0xbad: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0xbae: Pop(1)
0xbaf: Return(); Pop(4)

0xbb0: PushEmpty(object)
0xbb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb2: Call2 0xf35

0xbb3: Pop(1)
0xbb4: Return(); Pop(0)

0xbb5: Stack[-1] = (int) 0
0xbb6: Return(); Pop(0)

0xbb7: PushEmpty(string)
0xbb8: Stack[-1] = "attack_stay"
0xbb9: Call2 0xed2

0xbba: Pop(1)
0xbbb: Return(); Pop(0)

0xbbc: PushEmpty()
0xbbd: Return(); Pop(0)

0xbbe: Stack[-1] = (bool) 1
0xbbf: Return(); Pop(0)

0xbc0: Stack[-1] = (int) 1
0xbc1: Return(); Pop(0)

0xbc2: Stack[-1] = (float) 0.5
0xbc3: Return(); Pop(0)

0xbc4: PushEmpty()
0xbc5: Call2 0xc0a

0xbc6: Pop(0)
0xbc7: PushEmpty()
0xbc8: Call2 0x123b

0xbc9: Pop(0)
0xbca: Return(); Pop(0)

0xbcb: PushEmpty(bool, bool, bool, bool)
0xbcc: PushEmpty(object)
0xbcd: Stack[-1] = Stack[-10]
0xbce: Call2 0xf35

0xbcf: Pop(1)
0xbd0: Push((int) 1)
0xbd1: Push((int) 5)
0xbd2: @ SetTimer(Stack[-2], Stack[-1])
0xbd3: Pop(2)
0xbd4: @ CanSee(Stack[-2], Stack[-9])
0xbd5: Pop(0)
0xbd6: Push(Stack[-2])
0xbd7: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbd8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xbd9: PushEmpty(object)
0xbda: Stack[-1] = Stack[-10]
0xbdb: Call2 0xec0

0xbdc: Pop(1)
0xbdd: GOTO 0xbdf

0xbde: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbdf: PushEmpty(bool, object)
0xbe0: Stack[-1] = Stack[-11]
0xbe1: Call2 0xce8

0xbe2: Pop(1)
0xbe3: IF (Stack[-1] == 0) GOTO 0xbe9; Pop(1)

0xbe4: PushEmpty(object)
0xbe5: Call2 0xefb

0xbe6: Pop(0)
0xbe7: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0xbe8: Pop(1)
0xbe9: PushEmpty(bool, object, float, float, bool, bool)
0xbea: Stack[-5] = Stack[-15]
0xbeb: Stack[-4] = Stack[-14]
0xbec: Stack[-3] = Stack[-13]
0xbed: Stack[-2] = Stack[-12]
0xbee: Stack[-1] = Stack[-11]
0xbef: Call2 0xc34

0xbf0: Stack[-7] = Stack[-6]
0xbf1: Pop(6)
0xbf2: Push( Stack[2 + Tasks[-1].StackPointer] )
0xbf3: IF (Stack[-1] == 0) GOTO 0xbf7; Pop(1)

0xbf4: Push("head")
0xbf5: @ UnlookAsync(Stack[-1])
0xbf6: Pop(1)
0xbf7: Push((int) 1)
0xbf8: @ KillTimer(Stack[-1])
0xbf9: Pop(1)
0xbfa: Stack[-10] = Stack[-1]
0xbfb: Return(); Pop(4)

0xbfc: PushEmpty()
0xbfd: Push((int) 1)
0xbfe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbff: IF (Stack[-1] == 0) GOTO 0xc05; Pop(1)

0xc00: PushEmpty(object)
0xc01: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc02: Call2 0xf35

0xc03: Pop(1)
0xc04: GOTO 0xc09

0xc05: PushEmpty(int)
0xc06: Stack[-1] = Stack[-2]
0xc07: Call2 0xc9a

0xc08: Pop(1)
0xc09: Return(); Pop(0)

0xc0a: Push((int) 1)
0xc0b: @ KillTimer(Stack[-1])
0xc0c: Pop(1)
0xc0d: Push( Stack[2 + Tasks[-1].StackPointer] )
0xc0e: IF (Stack[-1] == 0) GOTO 0xc13; Pop(1)

0xc0f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xc10: Push("head")
0xc11: @ UnlookAsync(Stack[-1])
0xc12: Pop(1)
0xc13: PushEmpty()
0xc14: Call2 0xcb0

0xc15: Pop(0)
0xc16: Return(); Pop(0)

0xc17: PushEmpty()
0xc18: PushEmpty(bool)
0xc19: Stack[-1] = (bool) 0
0xc1a: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xc1b: IF (Stack[-1] == 0) GOTO 0xc1f; Pop(1)

0xc1c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xc1d: IF (Stack[-1] == 0) GOTO 0xc1f; Pop(1)

0xc1e: Stack[-1] = (bool) 1
0xc1f: IF (Stack[-1] == 0) GOTO 0xc25; Pop(1)

0xc20: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc21: PushEmpty(object)
0xc22: Stack[-1] = Stack[-2]
0xc23: Call2 0xec0

0xc24: Pop(1)
0xc25: Return(); Pop(0)

0xc26: PushEmpty()
0xc27: PushEmpty(bool)
0xc28: Stack[-1] = (bool) 0
0xc29: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xc2a: IF (Stack[-1] == 0) GOTO 0xc2e; Pop(1)

0xc2b: Push( Stack[2 + Tasks[-1].StackPointer] )
0xc2c: IF (Stack[-1] == 0) GOTO 0xc2e; Pop(1)

0xc2d: Stack[-1] = (bool) 1
0xc2e: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc2f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xc30: Push("head")
0xc31: @ UnlookAsync(Stack[-1])
0xc32: Pop(1)
0xc33: Return(); Pop(0)

0xc34: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0xc35: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xc36: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0xc37: Stack[-7] = Stack[-17]
0xc38: PushEmpty(bool, object)
0xc39: Stack[-1] = Stack[-23]
0xc3a: Call2 0xcc0

0xc3b: Pop(1)
0xc3c: Pop(1); Push((bool) Stack[-1] == 0)
0xc3d: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc3e: Stack[-22] = (bool) 0
0xc3f: Return(); Pop(16)

0xc40: @@ GetPosition(Stack[-5])
0xc41: Pop(0)
0xc42: @ GetPosition(Stack[-4])
0xc43: Pop(0)
0xc44: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xc45: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xc46: PushEmpty(bool)
0xc47: Stack[-1] = (bool) 0
0xc48: Push((int) 0)
0xc49: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0xc4a: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc4b: Pop(0); Push(Stack[-20] * Stack[-20]);
0xc4c: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xc4d: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc4e: Stack[-1] = (bool) 1
0xc4f: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc50: @ Stop()
0xc51: Pop(0)
0xc52: Stack[-22] = (bool) 0
0xc53: Return(); Pop(16)

0xc54: Pop(0); Push(Stack[-20] * Stack[-20]);
0xc55: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xc56: IF (Stack[-1] == 0) GOTO 0xc92; Pop(1)

0xc57: @@ GetPFPosition(Stack[-5])
0xc58: Pop(0)
0xc59: @ FindPathTo(Stack[-1], Stack[-5])
0xc5a: Pop(0)
0xc5b: Pop(0); Push(( Stack[-1] != 0 )
0xc5c: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc5d: Stack[-6] = Stack[-1]
0xc5e: Stack[-1] = 0
0xc5f: Pop(0); Push(( Stack[-6] != 0 )
0xc60: IF (Stack[-1] == 0) GOTO 0xc80; Pop(1)

0xc61: Push(Stack[-7])
0xc62: IF (Stack[-1] == 0) GOTO 0xc69; Pop(1)

0xc63: Stack[-7] = (bool) 0
0xc64: @ RotatePath(Stack[-6], Stack[-8])
0xc65: Pop(0)
0xc66: Pop(0); Push((bool) Stack[-8] == 0)
0xc67: IF (Stack[-1] == 0) GOTO 0xc69; Pop(1)

0xc68: GOTO 0xc98

0xc69: Push((int) 0)
0xc6a: Push((float)0.3)
0xc6b: @ SetTimer(Stack[-2], Stack[-1])
0xc6c: Pop(2)
0xc6d: PushEmpty(string)
0xc6e: Call2 0xcc7

0xc6f: Pop(0)
0xc70: PushEmpty(string)
0xc71: Call2 0xcc9

0xc72: Pop(0)
0xc73: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0xc74: Pop(2)
0xc75: Pop(0); Push((bool) Stack[-8] == 0)
0xc76: IF (Stack[-1] == 0) GOTO 0xc7e; Pop(1)

0xc77: Push( Stack[0 + Tasks[-1].StackPointer] )
0xc78: IF (Stack[-1] == 0) GOTO 0xc7c; Pop(1)

0xc79: Stack[-6] = 0
0xc7a: GOTO 0xc98

0xc7b: GOTO 0xc7d

0xc7c: GOTO 0xc97

0xc7d: GOTO 0xc7f

0xc7e: Stack[-6] = 0
0xc7f: GOTO 0xc90

0xc80: Push((int) 0)
0xc81: @ KillTimer(Stack[-1])
0xc82: Pop(1)
0xc83: Push((float)0.5)
0xc84: @ Sleep(Stack[-1], Stack[-9])
0xc85: Pop(1)
0xc86: Pop(0); Push((bool) Stack[-8] == 0)
0xc87: IF (Stack[-1] == 0) GOTO 0xc8c; Pop(1)

0xc88: Push( Stack[0 + Tasks[-1].StackPointer] )
0xc89: IF (Stack[-1] == 0) GOTO 0xc8c; Pop(1)

0xc8a: Stack[-6] = 0
0xc8b: GOTO 0xc98

0xc8c: Push((int) 0)
0xc8d: Push((float)0.3)
0xc8e: @ SetTimer(Stack[-2], Stack[-1])
0xc8f: Pop(2)
0xc90: Stack[-1] = 0
0xc91: GOTO 0xc96

0xc92: Push((int) 0)
0xc93: @ KillTimer(Stack[-1])
0xc94: Pop(1)
0xc95: GOTO 0xc98

0xc96: Stack[-6] = 0
0xc97: GOTO 0xc38

0xc98: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xc99: Return(); Pop(16)

0xc9a: PushEmpty()
0xc9b: Push((int) 0)
0xc9c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xc9d: IF (Stack[-1] == 0) GOTO 0xc9f; Pop(1)

0xc9e: Return(); Pop(0)

0xc9f: PushEmpty(bool, object)
0xca0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca1: Call2 0xcc0

0xca2: Pop(1)
0xca3: Pop(1); Push((bool) Stack[-1] == 0)
0xca4: IF (Stack[-1] == 0) GOTO 0xca6; Pop(1)

0xca5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xca6: Push((int) 0)
0xca7: @ KillTimer(Stack[-1])
0xca8: Pop(1)
0xca9: @ Stop()
0xcaa: Pop(0)
0xcab: Return(); Pop(0)

0xcac: PushEmpty()
0xcad: @ RequestClearPath(Stack[-1])
0xcae: Pop(0)
0xcaf: Return(); Pop(0)

0xcb0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xcb1: Push((int) 0)
0xcb2: @ KillTimer(Stack[-1])
0xcb3: Pop(1)
0xcb4: @ Stop()
0xcb5: Pop(0)
0xcb6: Return(); Pop(0)

0xcb7: PushEmpty()
0xcb8: PushEmpty()
0xcb9: Call2 0xc0a

0xcba: Pop(0)
0xcbb: PushEmpty(object)
0xcbc: Stack[-1] = Stack[-2]
0xcbd: Call2 0x10b8

0xcbe: Pop(1)
0xcbf: Return(); Pop(0)

0xcc0: PushEmpty()
0xcc1: PushEmpty(bool, object)
0xcc2: Stack[-1] = Stack[-3]
0xcc3: Call2 0xd6b

0xcc4: Stack[-4] = Stack[-2]
0xcc5: Pop(2)
0xcc6: Return(); Pop(0)

0xcc7: Stack[-1] = "walk"
0xcc8: Return(); Pop(0)

0xcc9: Stack[-1] = "run"
0xcca: Return(); Pop(0)

0xccb: PushEmpty()
0xccc: Push((int) 2)
0xccd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcce: IF (Stack[-1] == 0) GOTO 0xcd2; Pop(1)

0xccf: Stack[-2] = "fire"
0xcd0: Return(); Pop(0)

0xcd1: GOTO 0xcd7

0xcd2: Push((int) 1)
0xcd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcd4: IF (Stack[-1] == 0) GOTO 0xcd7; Pop(1)

0xcd5: Stack[-2] = "bullet"
0xcd6: Return(); Pop(0)

0xcd7: Stack[-2] = "phys"
0xcd8: Return(); Pop(0)

0xcd9: PushEmpty(cvector, cvector, cvector, cvector)
0xcda: @ GetPosition(Stack[-2])
0xcdb: Pop(0)
0xcdc: @@ GetPosition(Stack[-1])
0xcdd: Pop(0)
0xcde: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xcdf: Return(); Pop(4)

0xce0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xce1: @ GetPosition(Stack[-3])
0xce2: Pop(0)
0xce3: @@ GetPosition(Stack[-2])
0xce4: Pop(0)
0xce5: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xce6: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xce7: Return(); Pop(6)

0xce8: PushEmpty(bool, bool)
0xce9: @ IsPlayerActor(Stack[-3], Stack[-1])
0xcea: Pop(0)
0xceb: Stack[-4] = Stack[-1]
0xcec: Return(); Pop(2)

0xced: PushEmpty(bool, bool)
0xcee: Push("HasProperty")
0xcef: Push((int) 2)
0xcf0: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xcf1: Pop(1); Push((bool) Stack[-1] == 0)
0xcf2: IF (Stack[-1] == 0) GOTO 0xcf5; Pop(1)

0xcf3: Stack[-5] = (bool) 0
0xcf4: Return(); Pop(2)

0xcf5: @@ HasProperty(Stack[-3], Stack[-1])
0xcf6: Pop(0)
0xcf7: Stack[-5] = Stack[-1]
0xcf8: Return(); Pop(2)

0xcf9: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xcfa: PushEmpty(bool, object, string)
0xcfb: Stack[-2] = Stack[-18]
0xcfc: Stack[-1] = "health"
0xcfd: Call2 0xced

0xcfe: Pop(2)
0xcff: Pop(1); Push((bool) Stack[-1] == 0)
0xd00: IF (Stack[-1] == 0) GOTO 0xd03; Pop(1)

0xd01: Stack[-16] = (float) 0.0
0xd02: Return(); Pop(12)

0xd03: PushEmpty(bool, object, string)
0xd04: Stack[-2] = Stack[-18]
0xd05: Stack[-1] = "armor"
0xd06: Call2 0xced

0xd07: Pop(2)
0xd08: Pop(1); Push((bool) Stack[-1] == 0)
0xd09: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd0a: Stack[-6] = (int) 0
0xd0b: GOTO 0xd0f

0xd0c: Push("armor")
0xd0d: @@ GetProperty(Stack[-1], Stack[-7])
0xd0e: Pop(1)
0xd0f: Push("armor_")
0xd10: PushEmpty(string, int)
0xd11: Stack[-1] = Stack[-16]
0xd12: Call2 0xccb

0xd13: Pop(1)
0xd14: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xd15: PushEmpty(bool, object, string)
0xd16: Stack[-2] = Stack[-18]
0xd17: Stack[-1] = Stack[-8]
0xd18: Call2 0xced

0xd19: Pop(2)
0xd1a: Pop(1); Push((bool) Stack[-1] == 0)
0xd1b: IF (Stack[-1] == 0) GOTO 0xd1e; Pop(1)

0xd1c: Stack[-4] = (int) 0
0xd1d: GOTO 0xd20

0xd1e: @@ GetProperty(Stack[-5], Stack[-4])
0xd1f: Pop(0)
0xd20: PushEmpty(float, float, float)
0xd21: Pop(0); Push(Stack[-9] + Stack[-7]);
0xd22: Push((float)100.0)
0xd23: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xd24: Stack[-1] = (int) 1
0xd25: Call2 0xf0b

0xd26: Stack[-6] = Stack[-3]
0xd27: Pop(3)
0xd28: Push("health")
0xd29: @@ GetProperty(Stack[-1], Stack[-3])
0xd2a: Pop(1)
0xd2b: Push((int) 1)
0xd2c: Pop(1); Push(Stack[-1] - Stack[-4]);
0xd2d: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xd2e: Push("health")
0xd2f: PushEmpty(float, float, float, float)
0xd30: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xd31: Stack[-2] = (int) 0
0xd32: Stack[-1] = (int) 1
0xd33: Call2 0xf12

0xd34: Pop(3)
0xd35: @@ SetProperty(Stack[-2], Stack[-1])
0xd36: Pop(2)
0xd37: PushEmpty(bool, object)
0xd38: Stack[-1] = Stack[-17]
0xd39: Call2 0xce8

0xd3a: Pop(1)
0xd3b: IF (Stack[-1] == 0) GOTO 0xd40; Pop(1)

0xd3c: PushEmpty(float)
0xd3d: Stack[-1] = -Stack[-2]; Pop(0);
0xd3e: Call2 0xf22

0xd3f: Pop(1)
0xd40: Stack[-16] = Stack[-1]
0xd41: Return(); Pop(12)

0xd42: PushEmpty(bool, bool)
0xd43: @@ IsDead(Stack[-1])
0xd44: Pop(0)
0xd45: Stack[-4] = Stack[-1]
0xd46: Return(); Pop(2)

0xd47: PushEmpty(object, object, object, object)
0xd48: Pop(0); Push((bool) Stack[-5] == 0)
0xd49: IF (Stack[-1] == 0) GOTO 0xd4c; Pop(1)

0xd4a: Stack[-6] = (bool) 0
0xd4b: Return(); Pop(4)

0xd4c: PushEmpty(bool)
0xd4d: Stack[-1] = (bool) 0
0xd4e: Push("IsDead")
0xd4f: Push((int) 1)
0xd50: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xd51: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd52: PushEmpty(bool, object)
0xd53: Stack[-1] = Stack[-8]
0xd54: Call2 0xd42

0xd55: Pop(1)
0xd56: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd57: Stack[-1] = (bool) 1
0xd58: IF (Stack[-1] == 0) GOTO 0xd5b; Pop(1)

0xd59: Stack[-6] = (bool) 0
0xd5a: Return(); Pop(4)

0xd5b: @ GetScene(Stack[-2])
0xd5c: Pop(0)
0xd5d: Pop(0); Push((bool) Stack[-2] == 0)
0xd5e: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd5f: Stack[-6] = (bool) 0
0xd60: Return(); Pop(4)

0xd61: @@ GetScene(Stack[-1])
0xd62: Pop(0)
0xd63: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xd64: IF (Stack[-1] == 0) GOTO 0xd67; Pop(1)

0xd65: Stack[-6] = (bool) 0
0xd66: Return(); Pop(4)

0xd67: Stack[-6] = (bool) 1
0xd68: Return(); Pop(4)

0xd69: Stack[-1] = 0
0xd6a: Stack[-2] = 0
0xd6b: PushEmpty(int, int)
0xd6c: PushEmpty(bool, object)
0xd6d: Stack[-1] = Stack[-5]
0xd6e: Call2 0xd47

0xd6f: Pop(1)
0xd70: Pop(1); Push((bool) Stack[-1] == 0)
0xd71: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd72: Stack[-4] = (bool) 0
0xd73: Return(); Pop(2)

0xd74: PushEmpty(bool, object, string)
0xd75: Stack[-2] = Stack[-6]
0xd76: Stack[-1] = "noaccess"
0xd77: Call2 0xced

0xd78: Pop(2)
0xd79: Pop(1); Push((bool) Stack[-1] == 0)
0xd7a: IF (Stack[-1] == 0) GOTO 0xd7d; Pop(1)

0xd7b: Stack[-4] = (bool) 1
0xd7c: Return(); Pop(2)

0xd7d: Push("noaccess")
0xd7e: @@ GetProperty(Stack[-1], Stack[-2])
0xd7f: Pop(1)
0xd80: Push((int) 0)
0xd81: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xd82: Return(); Pop(2)

0xd83: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xd84: Pop(0); Push((bool) Stack[-15] == 0)
0xd85: IF (Stack[-1] == 0) GOTO 0xd87; Pop(1)

0xd86: Return(); Pop(14)

0xd87: @ IsDead(Stack[-7])
0xd88: Pop(0)
0xd89: Push(Stack[-7])
0xd8a: IF (Stack[-1] == 0) GOTO 0xd8c; Pop(1)

0xd8b: Return(); Pop(14)

0xd8c: @ GetSecondaryAnimationType(Stack[-6])
0xd8d: Pop(0)
0xd8e: Push((int) 0)
0xd8f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xd90: IF (Stack[-1] == 0) GOTO 0xd92; Pop(1)

0xd91: Return(); Pop(14)

0xd92: @@ GetPosition(Stack[-5])
0xd93: Pop(0)
0xd94: @ GetPosition(Stack[-4])
0xd95: Pop(0)
0xd96: @ GetDirection(Stack[-3])
0xd97: Pop(0)
0xd98: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xd99: Push(CvectorIndex(Stack[-2], 0))
0xd9a: Push(CvectorIndex(Stack[-4], 0))
0xd9b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd9c: Push(CvectorIndex(Stack[-3], 2))
0xd9d: Push(CvectorIndex(Stack[-5], 2))
0xd9e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd9f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xda0: Push((int) 0)
0xda1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xda2: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xda3: Stack[-1] = "fhit"
0xda4: GOTO 0xda6

0xda5: Stack[-1] = "bhit"
0xda6: Push("hit_react")
0xda7: Push("1")
0xda8: Pop(1); Push(Stack[-3] + Stack[-1]);
0xda9: Push("2")
0xdaa: Pop(1); Push(Stack[-4] + Stack[-1]);
0xdab: Push((int) -10)
0xdac: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdad: Pop(4)
0xdae: Return(); Pop(14)

0xdaf: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xdb0: PushEmpty(bool)
0xdb1: Stack[-1] = (bool) 0
0xdb2: PushEmpty(bool)
0xdb3: Stack[-1] = (bool) 0
0xdb4: Push(Stack[-23])
0xdb5: IF (Stack[-1] == 0) GOTO 0xdba; Pop(1)

0xdb6: Push((int) 4)
0xdb7: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xdb8: IF (Stack[-1] == 0) GOTO 0xdba; Pop(1)

0xdb9: Stack[-1] = (bool) 1
0xdba: IF (Stack[-1] == 0) GOTO 0xdbf; Pop(1)

0xdbb: Push((int) 5)
0xdbc: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xdbd: IF (Stack[-1] == 0) GOTO 0xdbf; Pop(1)

0xdbe: Stack[-1] = (bool) 1
0xdbf: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xdc0: PushEmpty(cvector, cvector)
0xdc1: PushEmpty(cvector, object)
0xdc2: Stack[-1] = Stack[-25]
0xdc3: Call2 0xcd9

0xdc4: Stack[-3] = Stack[-2]
0xdc5: Pop(2)
0xdc6: Call2 0xf01

0xdc7: Stack[-11] = Stack[-2]
0xdc8: Pop(2)
0xdc9: @ CreateVectorVector(Stack[-8])
0xdca: Pop(0)
0xdcb: Stack[-7] = (int) 1
0xdcc: Push("hit")
0xdcd: Pop(1); Push(Stack[-1] + Stack[-8]);
0xdce: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xdcf: Pop(1)
0xdd0: Pop(0); Push((bool) Stack[-6] == 0)
0xdd1: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdd2: GOTO 0xddc

0xdd3: Pop(0); Push(Stack[-4] | Stack[-9]);
0xdd4: Push((float)0.70711)
0xdd5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xdd6: IF (Stack[-1] == 0) GOTO 0xdd9; Pop(1)

0xdd7: @@ add(Stack[-5])
0xdd8: Pop(0)
0xdd9: Push((int) 1)
0xdda: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xddb: GOTO 0xdcc

0xddc: @@ size(Stack[-3])
0xddd: Pop(0)
0xdde: Push(Stack[-3])
0xddf: IF (Stack[-1] == 0) GOTO 0xded; Pop(1)

0xde0: @ irand(Stack[-2], Stack[-3])
0xde1: Pop(0)
0xde2: @@ get(Stack[-1], Stack[-2])
0xde3: Pop(0)
0xde4: PushEmpty(object, int, float, cvector, cvector)
0xde5: Stack[-5] = Stack[-26]
0xde6: Stack[-4] = Stack[-25]
0xde7: Stack[-3] = Stack[-24]
0xde8: Stack[-2] = Stack[-6]
0xde9: Stack[-1] = -Stack[-14]; Pop(0);
0xdea: Call2 0xdf3

0xdeb: Pop(5)
0xdec: Return(); Pop(18)

0xded: Stack[-8] = 0
0xdee: PushEmpty(object)
0xdef: Stack[-1] = Stack[-22]
0xdf0: Call2 0xd83

0xdf1: Pop(1)
0xdf2: Return(); Pop(18)

0xdf3: PushEmpty(object, object, object, object)
0xdf4: @ GetScene(Stack[-2])
0xdf5: Pop(0)
0xdf6: Push("scripted")
0xdf7: Push("blood_dir.xml")
0xdf8: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xdf9: Pop(2)
0xdfa: PushEmpty(object)
0xdfb: Stack[-1] = Stack[-10]
0xdfc: Call2 0xd83

0xdfd: Pop(1)
0xdfe: Return(); Pop(4)

0xdff: Stack[-1] = 0
0xe00: Stack[-2] = 0
0xe01: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xe02: @@ GetPosition(Stack[-3])
0xe03: Pop(0)
0xe04: @ GetPosition(Stack[-2])
0xe05: Pop(0)
0xe06: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xe07: Push(CvectorIndex(Stack[-1], 0))
0xe08: Push(CvectorIndex(Stack[-2], 2))
0xe09: @ RotateAsync(Stack[-2], Stack[-1])
0xe0a: Pop(2)
0xe0b: Return(); Pop(6)

0xe0c: PushEmpty(bool, bool)
0xe0d: @ IsLoaded(Stack[-1])
0xe0e: Pop(0)
0xe0f: Stack[-3] = Stack[-1]
0xe10: Return(); Pop(2)

0xe11: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xe12: @@ GetPosition(Stack[-8])
0xe13: Pop(0)
0xe14: @@ GetEyesHeight(Stack[-9])
0xe15: Pop(0)
0xe16: Push(CvectorIndex(Stack[-8], 1))
0xe17: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xe18: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xe19: @ GetPosition(Stack[-7])
0xe1a: Pop(0)
0xe1b: @ GetEyesHeight(Stack[-9])
0xe1c: Pop(0)
0xe1d: Push(CvectorIndex(Stack[-7], 1))
0xe1e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xe1f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xe20: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xe21: Push(CvectorIndex(Stack[-6], 1))
0xe22: Stack[-1] = (int) 0
0xe23: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xe24: Pop(0); Push(Stack[-6] | Stack[-6]);
0xe25: Pop(1); Push(Sqrt(Stack[-1]))
0xe26: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xe27: Stack[-5] = -Stack[-6]; Pop(0);
0xe28: Pop(0); Push(Stack[-6] * Stack[-19]);
0xe29: PushEmpty(cvector, cvector)
0xe2a: Push(CVector(0.0, 1.0, 0.0))
0xe2b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xe2c: Call2 0xf01

0xe2d: Pop(1)
0xe2e: Push((int) 25)
0xe2f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe30: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe31: Push(CVector(0.0, 10.0, 0.0))
0xe32: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xe33: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xe34: @ IsOverrideActive(Stack[-2])
0xe35: Pop(0)
0xe36: Push(Stack[-2])
0xe37: IF (Stack[-1] == 0) GOTO 0xe3a; Pop(1)

0xe38: Stack[-21] = (bool) 0
0xe39: Return(); Pop(18)

0xe3a: @ StopWorld()
0xe3b: Pop(0)
0xe3c: @ CameraTransit(Stack[-3], Stack[-5])
0xe3d: Pop(0)
0xe3e: Push(CvectorIndex(Stack[-4], 0))
0xe3f: Push(CvectorIndex(Stack[-5], 2))
0xe40: @ Rotate(Stack[-2], Stack[-1])
0xe41: Pop(2)
0xe42: PushEmpty(bool)
0xe43: Call2 0x1258

0xe44: Pop(0)
0xe45: IF (Stack[-1] == 0) GOTO 0xe47; Pop(1)

0xe46: GOTO 0xe4f

0xe47: Push("head")
0xe48: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xe49: Pop(1)
0xe4a: Push(Stack[-1])
0xe4b: IF (Stack[-1] == 0) GOTO 0xe4f; Pop(1)

0xe4c: Push("head")
0xe4d: @ LookAsyncCamera(Stack[-1])
0xe4e: Pop(1)
0xe4f: @ CameraWaitForPlayFinish()
0xe50: Pop(0)
0xe51: @ ResumeWorld()
0xe52: Pop(0)
0xe53: Stack[-21] = (bool) 1
0xe54: Return(); Pop(18)

0xe55: PushEmpty(bool, bool)
0xe56: @ CameraSwitchToNormal()
0xe57: Pop(0)
0xe58: PushEmpty(bool)
0xe59: Call2 0x1258

0xe5a: Pop(0)
0xe5b: IF (Stack[-1] == 0) GOTO 0xe5d; Pop(1)

0xe5c: GOTO 0xe65

0xe5d: Push("head")
0xe5e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xe5f: Pop(1)
0xe60: Push(Stack[-1])
0xe61: IF (Stack[-1] == 0) GOTO 0xe65; Pop(1)

0xe62: Push("head")
0xe63: @ UnlookAsync(Stack[-1])
0xe64: Pop(1)
0xe65: Return(); Pop(2)

0xe66: PushEmpty()
0xe67: PushEmpty(bool, object, float)
0xe68: Stack[-2] = Stack[-4]
0xe69: Stack[-1] = (int) 70
0xe6a: Call2 0xe6e

0xe6b: Stack[-5] = Stack[-3]
0xe6c: Pop(3)
0xe6d: Return(); Pop(0)

0xe6e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xe6f: @@ GetPosition(Stack[-7])
0xe70: Pop(0)
0xe71: @@ GetEyesHeight(Stack[-8])
0xe72: Pop(0)
0xe73: Push(CvectorIndex(Stack[-7], 1))
0xe74: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xe75: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xe76: @ GetPosition(Stack[-6])
0xe77: Pop(0)
0xe78: @ GetEyesHeight(Stack[-8])
0xe79: Pop(0)
0xe7a: Push(CvectorIndex(Stack[-6], 1))
0xe7b: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xe7c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xe7d: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xe7e: Push(CvectorIndex(Stack[-5], 1))
0xe7f: Stack[-1] = (int) 0
0xe80: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xe81: Pop(0); Push(Stack[-5] | Stack[-5]);
0xe82: Pop(1); Push(Sqrt(Stack[-1]))
0xe83: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xe84: Stack[-4] = -Stack[-5]; Pop(0);
0xe85: Pop(0); Push(Stack[-5] * Stack[-17]);
0xe86: Push(CVector(0.0, 10.0, 0.0))
0xe87: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xe88: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xe89: @ IsOverrideActive(Stack[-1])
0xe8a: Pop(0)
0xe8b: Push(Stack[-1])
0xe8c: IF (Stack[-1] == 0) GOTO 0xe8f; Pop(1)

0xe8d: Stack[-19] = (bool) 0
0xe8e: Return(); Pop(16)

0xe8f: @ StopWorld()
0xe90: Pop(0)
0xe91: @ CameraTransit(Stack[-2], Stack[-4])
0xe92: Pop(0)
0xe93: Push(CvectorIndex(Stack[-3], 0))
0xe94: Push(CvectorIndex(Stack[-4], 2))
0xe95: @ Rotate(Stack[-2], Stack[-1])
0xe96: Pop(2)
0xe97: @ CameraWaitForPlayFinish()
0xe98: Pop(0)
0xe99: @ ResumeWorld()
0xe9a: Pop(0)
0xe9b: Stack[-19] = (bool) 1
0xe9c: Return(); Pop(16)

0xe9d: PushEmpty()
0xe9e: @ CameraSwitchToNormal()
0xe9f: Pop(0)
0xea0: Return(); Pop(0)

0xea1: PushEmpty(bool, float, float, bool, float, float)
0xea2: @ lshHasAnimation(Stack[-3], Stack[-7])
0xea3: Pop(0)
0xea4: Push(Stack[-3])
0xea5: IF (Stack[-1] == 0) GOTO 0xeac; Pop(1)

0xea6: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xea7: Pop(0)
0xea8: Push((bool) 0)
0xea9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xeaa: Pop(1)
0xeab: GOTO 0xeb0

0xeac: Push("Can't find lsh animation : ")
0xead: Pop(1); Push(Stack[-1] + Stack[-8]);
0xeae: @ Trace(Stack[-1])
0xeaf: Pop(1)
0xeb0: Return(); Pop(6)

0xeb1: PushEmpty(bool, float, float, bool, float, float)
0xeb2: @ lshHasAnimation(Stack[-3], Stack[-8])
0xeb3: Pop(0)
0xeb4: Push(Stack[-3])
0xeb5: IF (Stack[-1] == 0) GOTO 0xebb; Pop(1)

0xeb6: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xeb7: Pop(0)
0xeb8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xeb9: Pop(0)
0xeba: GOTO 0xebf

0xebb: Push("Can't find lsh animation : ")
0xebc: Pop(1); Push(Stack[-1] + Stack[-9]);
0xebd: @ Trace(Stack[-1])
0xebe: Pop(1)
0xebf: Return(); Pop(6)

0xec0: PushEmpty(float, cvector, float, cvector)
0xec1: @@ GetEyesHeight(Stack[-2])
0xec2: Pop(0)
0xec3: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xec4: Push(CvectorIndex(Stack[-1], 1))
0xec5: Stack[-1] = Stack[-3]
0xec6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xec7: Push("head")
0xec8: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xec9: Pop(1)
0xeca: Return(); Pop(4)

0xecb: PushEmpty(bool)
0xecc: Call2 0x1258

0xecd: Pop(0)
0xece: IF (Stack[-1] == 0) GOTO 0xed1; Pop(1)

0xecf: @ lshStopSpeech()
0xed0: Pop(0)
0xed1: Return(); Pop(0)

0xed2: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xed3: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xed4: Pop(0)
0xed5: Pop(0); Push((bool) Stack[-8] == 0)
0xed6: IF (Stack[-1] == 0) GOTO 0xeeb; Pop(1)

0xed7: Stack[-7] = (int) 0
0xed8: Push((int) 1)
0xed9: Pop(1); Push(Stack[-8] + Stack[-1]);
0xeda: Pop(1); Push(Stack[-18] + Stack[-1]);
0xedb: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xedc: Pop(1)
0xedd: Pop(0); Push((bool) Stack[-6] == 0)
0xede: IF (Stack[-1] == 0) GOTO 0xee0; Pop(1)

0xedf: GOTO 0xee3

0xee0: Push((int) 1)
0xee1: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xee2: GOTO 0xed8

0xee3: Pop(0); Push((bool) Stack[-7] == 0)
0xee4: IF (Stack[-1] == 0) GOTO 0xee6; Pop(1)

0xee5: Return(); Pop(16)

0xee6: @ irand(Stack[-5], Stack[-7])
0xee7: Pop(0)
0xee8: Push((int) 1)
0xee9: Pop(1); Push(Stack[-6] + Stack[-1]);
0xeea: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xeeb: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xeec: Pop(0)
0xeed: Push(Stack[-4])
0xeee: IF (Stack[-1] == 0) GOTO 0xefa; Pop(1)

0xeef: @ GetEyesHeight(Stack[-3])
0xef0: Pop(0)
0xef1: @ GetDirection(Stack[-2])
0xef2: Pop(0)
0xef3: Push((int) 50)
0xef4: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xef5: Push(CvectorIndex(Stack[-1], 1))
0xef6: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xef7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xef8: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xef9: Pop(0)
0xefa: Return(); Pop(16)

0xefb: PushEmpty(object, object)
0xefc: @ self(Stack[-1])
0xefd: Pop(0)
0xefe: Stack[-3] = Stack[-1]
0xeff: Return(); Pop(2)

0xf00: Stack[-1] = 0
0xf01: PushEmpty(float, float)
0xf02: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf03: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xf04: Push((float)0.0)
0xf05: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf06: IF (Stack[-1] == 0) GOTO 0xf09; Pop(1)

0xf07: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xf08: Return(); Pop(2)

0xf09: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xf0a: Return(); Pop(2)

0xf0b: PushEmpty()
0xf0c: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xf0d: IF (Stack[-1] == 0) GOTO 0xf10; Pop(1)

0xf0e: Stack[-3] = Stack[-2]
0xf0f: GOTO 0xf11

0xf10: Stack[-3] = Stack[-1]
0xf11: Return(); Pop(0)

0xf12: PushEmpty()
0xf13: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xf14: IF (Stack[-1] == 0) GOTO 0xf17; Pop(1)

0xf15: Stack[-4] = Stack[-2]
0xf16: Return(); Pop(0)

0xf17: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xf18: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf19: Stack[-4] = Stack[-1]
0xf1a: Return(); Pop(0)

0xf1b: Stack[-4] = Stack[-3]
0xf1c: Return(); Pop(0)

0xf1d: PushEmpty(int, int)
0xf1e: @ GetVariable(Stack[-3], Stack[-1])
0xf1f: Pop(0)
0xf20: Stack[-4] = Stack[-1]
0xf21: Return(); Pop(2)

0xf22: PushEmpty(object, object)
0xf23: @ CreateFloatVector(Stack[-1])
0xf24: Pop(0)
0xf25: @@ add(Stack[-3])
0xf26: Pop(0)
0xf27: Push((int) 15)
0xf28: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xf29: Pop(1)
0xf2a: Return(); Pop(2)

0xf2b: Stack[-1] = 0
0xf2c: PushEmpty(float, float)
0xf2d: @ GetGameTime(Stack[-1])
0xf2e: Pop(0)
0xf2f: Push((int) 1)
0xf30: PushEmpty(int)
0xf31: Push((int) 24)
0xf32: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xf33: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf34: Return(); Pop(2)

0xf35: PushEmpty(bool, bool)
0xf36: @ IsPlayerActor(Stack[-3], Stack[-1])
0xf37: Pop(0)
0xf38: Push(Stack[-1])
0xf39: IF (Stack[-1] == 0) GOTO 0xf3d; Pop(1)

0xf3a: Push("attack")
0xf3b: @ PlayGlobalMusic(Stack[-1])
0xf3c: Pop(1)
0xf3d: Return(); Pop(2)

0xf3e: PushEmpty(object, object)
0xf3f: @ GetScene(Stack[-1])
0xf40: Pop(0)
0xf41: Push("battle")
0xf42: PushEmpty(object)
0xf43: Call2 0xefb

0xf44: Pop(0)
0xf45: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xf46: Pop(2)
0xf47: Return(); Pop(2)

0xf48: Stack[-1] = 0
0xf49: PushEmpty()
0xf4a: PushEmpty(int, string)
0xf4b: Stack[-1] = "branch"
0xf4c: Call2 0xf1d

0xf4d: Pop(1)
0xf4e: Push((int) 0)
0xf4f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf50: IF (Stack[-1] == 0) GOTO 0xf53; Pop(1)

0xf51: Stack[-2] = (bool) 1
0xf52: Return(); Pop(0)

0xf53: Stack[-2] = (bool) 0
0xf54: Return(); Pop(0)

0xf55: PushEmpty()
0xf56: PushEmpty(int, string)
0xf57: Stack[-1] = "branch"
0xf58: Call2 0xf1d

0xf59: Pop(1)
0xf5a: Push((int) 2)
0xf5b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf5c: IF (Stack[-1] == 0) GOTO 0xf5f; Pop(1)

0xf5d: Stack[-2] = (bool) 1
0xf5e: Return(); Pop(0)

0xf5f: Stack[-2] = (bool) 0
0xf60: Return(); Pop(0)

0xf61: PushEmpty()
0xf62: PushEmpty(bool, object)
0xf63: Stack[-1] = Stack[-3]
0xf64: Call2 0xf75

0xf65: Pop(1)
0xf66: IF (Stack[-1] == 0) GOTO 0xf69; Pop(1)

0xf67: Stack[-2] = (bool) 1
0xf68: Return(); Pop(0)

0xf69: Stack[-2] = (bool) 0
0xf6a: Return(); Pop(0)

0xf6b: PushEmpty()
0xf6c: PushEmpty(bool, object)
0xf6d: Stack[-1] = Stack[-3]
0xf6e: Call2 0xf7c

0xf6f: Pop(1)
0xf70: IF (Stack[-1] == 0) GOTO 0xf73; Pop(1)

0xf71: Stack[-2] = (bool) 1
0xf72: Return(); Pop(0)

0xf73: Stack[-2] = (bool) 0
0xf74: Return(); Pop(0)

0xf75: PushEmpty()
0xf76: PushEmpty(int)
0xf77: Call2 0xf2c

0xf78: Pop(0)
0xf79: Push((int) 1)
0xf7a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf7b: Return(); Pop(0)

0xf7c: PushEmpty()
0xf7d: PushEmpty(int)
0xf7e: Call2 0xf2c

0xf7f: Pop(0)
0xf80: Push((int) 4)
0xf81: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xf82: Return(); Pop(0)

0xf83: PushEmpty(int, int)
0xf84: Push("branch")
0xf85: @ GetVariable(Stack[-1], Stack[-2])
0xf86: Pop(1)
0xf87: Push((int) 0)
0xf88: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf89: IF (Stack[-1] == 0) GOTO 0xf8d; Pop(1)

0xf8a: Stack[-3] = (int) 1
0xf8b: Return(); Pop(2)

0xf8c: GOTO 0xf92

0xf8d: Push((int) 1)
0xf8e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf8f: IF (Stack[-1] == 0) GOTO 0xf92; Pop(1)

0xf90: Stack[-3] = (int) 2
0xf91: Return(); Pop(2)

0xf92: Stack[-3] = (int) 3
0xf93: Return(); Pop(2)

0xf94: PushEmpty(int, int)
0xf95: Push("branch")
0xf96: @ GetVariable(Stack[-1], Stack[-2])
0xf97: Pop(1)
0xf98: Stack[-3] = Stack[-1]
0xf99: Return(); Pop(2)

0xf9a: PushEmpty()
0xf9b: PushEmpty(int)
0xf9c: Call2 0xf94

0xf9d: Pop(0)
0xf9e: Push((int) 1)
0xf9f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfa0: IF (Stack[-1] == 0) GOTO 0xfa4; Pop(1)

0xfa1: @ WorkWithCorpse(Stack[-1])
0xfa2: Pop(0)
0xfa3: GOTO 0xfa6

0xfa4: @ Barter(Stack[-1])
0xfa5: Pop(0)
0xfa6: Return(); Pop(0)

0xfa7: PushEmpty(int, bool, int, bool)
0xfa8: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xfa9: IF (Stack[-1] == 0) GOTO 0xfae; Pop(1)

0xfaa: Push("GenerateMoney: iMin > iMax")
0xfab: @ Trace(Stack[-1])
0xfac: Pop(1)
0xfad: Return(); Pop(4)

0xfae: Stack[-2] = (int) 0
0xfaf: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xfb0: IF (Stack[-1] == 0) GOTO 0xfb5; Pop(1)

0xfb1: Pop(0); Push(Stack[-5] - Stack[-6]);
0xfb2: @ irand(Stack[-3], Stack[-1])
0xfb3: Pop(1)
0xfb4: GOTO 0xfb9

0xfb5: Push((int) 0)
0xfb6: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xfb7: IF (Stack[-1] == 0) GOTO 0xfb9; Pop(1)

0xfb8: Return(); Pop(4)

0xfb9: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xfba: Push((int) 0)
0xfbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfbc: IF (Stack[-1] == 0) GOTO 0xfbe; Pop(1)

0xfbd: Return(); Pop(4)

0xfbe: PushEmpty(int, string)
0xfbf: Stack[-1] = "Money"
0xfc0: Call2 0x109e

0xfc1: Pop(1)
0xfc2: Push((int) 0)
0xfc3: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xfc4: Pop(2)
0xfc5: Return(); Pop(4)

0xfc6: PushEmpty(object, int, bool, object, int, bool)
0xfc7: @ CreateInvItem(Stack[-3])
0xfc8: Pop(0)
0xfc9: @@ SetItemName(Stack[-7])
0xfca: Pop(0)
0xfcb: Push("Organ")
0xfcc: Push((int) 1)
0xfcd: @@ SetProperty(Stack[-2], Stack[-1])
0xfce: Pop(2)
0xfcf: @@ GetItemID(Stack[-2])
0xfd0: Pop(0)
0xfd1: Push((int) 0)
0xfd2: Push((int) 1)
0xfd3: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xfd4: Pop(2)
0xfd5: Return(); Pop(6)

0xfd6: Stack[-3] = 0
0xfd7: PushEmpty(int)
0xfd8: Call2 0xf94

0xfd9: Pop(0)
0xfda: Push((int) 1)
0xfdb: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xfdc: IF (Stack[-1] == 0) GOTO 0xfde; Pop(1)

0xfdd: Return(); Pop(0)

0xfde: PushEmpty(string)
0xfdf: Stack[-1] = "liver"
0xfe0: Call2 0xfc6

0xfe1: Pop(1)
0xfe2: PushEmpty(string)
0xfe3: Stack[-1] = "kidney"
0xfe4: Call2 0xfc6

0xfe5: Pop(1)
0xfe6: PushEmpty(string)
0xfe7: Stack[-1] = "heart"
0xfe8: Call2 0xfc6

0xfe9: Pop(1)
0xfea: PushEmpty(string)
0xfeb: Stack[-1] = "blood"
0xfec: Call2 0xfc6

0xfed: Pop(1)
0xfee: Return(); Pop(0)

0xfef: PushEmpty(int, bool, int, bool)
0xff0: Push(Stack[-5])
0xff1: IF (Stack[-1] == 0) GOTO 0x1048; Pop(1)

0xff2: PushEmpty(int, int)
0xff3: Stack[-2] = (int) 0
0xff4: Push((int) 100)
0xff5: PushEmpty(int)
0xff6: Call2 0xf2c

0xff7: Pop(0)
0xff8: Push((int) 100)
0xff9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xffa: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xffb: Call2 0xfa7

0xffc: Pop(2)
0xffd: Push((int) 8)
0xffe: @ irand(Stack[-3], Stack[-1])
0xfff: Pop(1)
0x1000: Push((int) 0)
0x1001: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1002: IF (Stack[-1] == 0) GOTO 0x100c; Pop(1)

0x1003: PushEmpty(int, string)
0x1004: Stack[-1] = "lemon"
0x1005: Call2 0x109e

0x1006: Pop(1)
0x1007: Push((int) 0)
0x1008: Push((int) 1)
0x1009: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x100a: Pop(3)
0x100b: GOTO 0x1047

0x100c: Push((int) 1)
0x100d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100e: IF (Stack[-1] == 0) GOTO 0x1018; Pop(1)

0x100f: PushEmpty(int, string)
0x1010: Stack[-1] = "rusk"
0x1011: Call2 0x109e

0x1012: Pop(1)
0x1013: Push((int) 0)
0x1014: Push((int) 1)
0x1015: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1016: Pop(3)
0x1017: GOTO 0x1047

0x1018: Push((int) 2)
0x1019: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101a: IF (Stack[-1] == 0) GOTO 0x1024; Pop(1)

0x101b: PushEmpty(int, string)
0x101c: Stack[-1] = "hook"
0x101d: Call2 0x109e

0x101e: Pop(1)
0x101f: Push((int) 0)
0x1020: Push((int) 1)
0x1021: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1022: Pop(3)
0x1023: GOTO 0x1047

0x1024: Push((int) 4)
0x1025: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1026: IF (Stack[-1] == 0) GOTO 0x1030; Pop(1)

0x1027: PushEmpty(int, string)
0x1028: Stack[-1] = "syringe"
0x1029: Call2 0x109e

0x102a: Pop(1)
0x102b: Push((int) 0)
0x102c: Push((int) 1)
0x102d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x102e: Pop(3)
0x102f: GOTO 0x1047

0x1030: Push((int) 5)
0x1031: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1032: IF (Stack[-1] == 0) GOTO 0x103c; Pop(1)

0x1033: PushEmpty(int, string)
0x1034: Stack[-1] = "watch"
0x1035: Call2 0x109e

0x1036: Pop(1)
0x1037: Push((int) 0)
0x1038: Push((int) 1)
0x1039: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x103a: Pop(3)
0x103b: GOTO 0x1047

0x103c: Push((int) 6)
0x103d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103e: IF (Stack[-1] == 0) GOTO 0x1047; Pop(1)

0x103f: PushEmpty(int, string)
0x1040: Stack[-1] = "razor"
0x1041: Call2 0x109e

0x1042: Pop(1)
0x1043: Push((int) 0)
0x1044: Push((int) 1)
0x1045: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1046: Pop(3)
0x1047: GOTO 0x109d

0x1048: PushEmpty(int, int)
0x1049: Stack[-2] = (int) 0
0x104a: Push((int) 50)
0x104b: PushEmpty(int)
0x104c: Call2 0xf2c

0x104d: Pop(0)
0x104e: Push((int) 50)
0x104f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1050: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1051: Call2 0xfa7

0x1052: Pop(2)
0x1053: Push((int) 7)
0x1054: @ irand(Stack[-3], Stack[-1])
0x1055: Pop(1)
0x1056: Push((int) 0)
0x1057: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1058: IF (Stack[-1] == 0) GOTO 0x1062; Pop(1)

0x1059: PushEmpty(int, string)
0x105a: Stack[-1] = "beads"
0x105b: Call2 0x109e

0x105c: Pop(1)
0x105d: Push((int) 0)
0x105e: Push((int) 1)
0x105f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1060: Pop(3)
0x1061: GOTO 0x109d

0x1062: Push((int) 1)
0x1063: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1064: IF (Stack[-1] == 0) GOTO 0x106e; Pop(1)

0x1065: PushEmpty(int, string)
0x1066: Stack[-1] = "bracelet"
0x1067: Call2 0x109e

0x1068: Pop(1)
0x1069: Push((int) 0)
0x106a: Push((int) 1)
0x106b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x106c: Pop(3)
0x106d: GOTO 0x109d

0x106e: Push((int) 2)
0x106f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1070: IF (Stack[-1] == 0) GOTO 0x107a; Pop(1)

0x1071: PushEmpty(int, string)
0x1072: Stack[-1] = "ear_ring"
0x1073: Call2 0x109e

0x1074: Pop(1)
0x1075: Push((int) 0)
0x1076: Push((int) 1)
0x1077: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1078: Pop(3)
0x1079: GOTO 0x109d

0x107a: Push((int) 3)
0x107b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107c: IF (Stack[-1] == 0) GOTO 0x1086; Pop(1)

0x107d: PushEmpty(int, string)
0x107e: Stack[-1] = "gold_ring"
0x107f: Call2 0x109e

0x1080: Pop(1)
0x1081: Push((int) 0)
0x1082: Push((int) 1)
0x1083: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1084: Pop(3)
0x1085: GOTO 0x109d

0x1086: Push((int) 4)
0x1087: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1088: IF (Stack[-1] == 0) GOTO 0x1092; Pop(1)

0x1089: PushEmpty(int, string)
0x108a: Stack[-1] = "silver_ring"
0x108b: Call2 0x109e

0x108c: Pop(1)
0x108d: Push((int) 0)
0x108e: Push((int) 1)
0x108f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1090: Pop(3)
0x1091: GOTO 0x109d

0x1092: Push((int) 5)
0x1093: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1094: IF (Stack[-1] == 0) GOTO 0x109d; Pop(1)

0x1095: PushEmpty(int, string)
0x1096: Stack[-1] = "flower"
0x1097: Call2 0x109e

0x1098: Pop(1)
0x1099: Push((int) 0)
0x109a: Push((int) 1)
0x109b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x109c: Pop(3)
0x109d: Return(); Pop(4)

0x109e: PushEmpty(int, int)
0x109f: @ GetInvItemByName(Stack[-1], Stack[-3])
0x10a0: Pop(0)
0x10a1: Stack[-4] = Stack[-1]
0x10a2: Return(); Pop(2)

0x10a3: PushEmpty()
0x10a4: PushEmpty(object)
0x10a5: Stack[-1] = Stack[-2]
0x10a6: Push(-1, 0); TaskCall(3)
0x10a7: Call2 0x619

0x10a8: Pop(-1, 0); TaskReturn
0x10a9: Pop(1)
0x10aa: Return(); Pop(0)

0x10ab: PushEmpty(float, float)
0x10ac: Push("health")
0x10ad: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10ae: IF (Stack[-1] == 0) GOTO 0x10b7; Pop(1)

0x10af: Push("health")
0x10b0: @ GetProperty(Stack[-1], Stack[-2])
0x10b1: Pop(1)
0x10b2: Push((int) 0)
0x10b3: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x10b4: IF (Stack[-1] == 0) GOTO 0x10b7; Pop(1)

0x10b5: @ SignalDeath(Stack[-4])
0x10b6: Pop(0)
0x10b7: Return(); Pop(2)

0x10b8: PushEmpty()
0x10b9: PushEmpty(object)
0x10ba: Stack[-1] = Stack[-2]
0x10bb: Call2 0x10a3

0x10bc: Pop(1)
0x10bd: Return(); Pop(0)

0x10be: PushEmpty()
0x10bf: PushEmpty(object, int, float)
0x10c0: Stack[-3] = Stack[-7]
0x10c1: Stack[-2] = Stack[-6]
0x10c2: Stack[-1] = Stack[-5]
0x10c3: Call2 0xdaf

0x10c4: Pop(3)
0x10c5: Return(); Pop(0)

0x10c6: PushEmpty()
0x10c7: PushEmpty(object, int, float, cvector, cvector)
0x10c8: Stack[-5] = Stack[-11]
0x10c9: Stack[-4] = Stack[-10]
0x10ca: Stack[-3] = Stack[-9]
0x10cb: Stack[-2] = Stack[-7]
0x10cc: Stack[-1] = Stack[-6]
0x10cd: Call2 0xdf3

0x10ce: Pop(5)
0x10cf: Return(); Pop(0)

0x10d0: PushEmpty()
0x10d1: Push("unholster")
0x10d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d3: IF (Stack[-1] == 0) GOTO 0x10db; Pop(1)

0x10d4: PushEmpty(bool, object)
0x10d5: Stack[-1] = Stack[-4]
0x10d6: Call2 0x123c

0x10d7: Stack[-5] = Stack[-2]
0x10d8: Pop(2)
0x10d9: Return(); Pop(0)

0x10da: GOTO 0x10ee

0x10db: Push("player_shot")
0x10dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10dd: IF (Stack[-1] == 0) GOTO 0x10e5; Pop(1)

0x10de: PushEmpty(bool, object)
0x10df: Stack[-1] = Stack[-4]
0x10e0: Call2 0x1241

0x10e1: Stack[-5] = Stack[-2]
0x10e2: Pop(2)
0x10e3: Return(); Pop(0)

0x10e4: GOTO 0x10ee

0x10e5: Push("battle")
0x10e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10e7: IF (Stack[-1] == 0) GOTO 0x10ee; Pop(1)

0x10e8: PushEmpty(bool, object)
0x10e9: Stack[-1] = Stack[-4]
0x10ea: Call2 0x1246

0x10eb: Stack[-5] = Stack[-2]
0x10ec: Pop(2)
0x10ed: Return(); Pop(0)

0x10ee: Stack[-3] = (bool) 0
0x10ef: Return(); Pop(0)

0x10f0: PushEmpty()
0x10f1: Push("unholster")
0x10f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f3: IF (Stack[-1] == 0) GOTO 0x10f9; Pop(1)

0x10f4: PushEmpty(object)
0x10f5: Stack[-1] = Stack[-3]
0x10f6: Call2 0x123f

0x10f7: Pop(1)
0x10f8: GOTO 0x1108

0x10f9: Push("player_shot")
0x10fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10fb: IF (Stack[-1] == 0) GOTO 0x1101; Pop(1)

0x10fc: PushEmpty(object)
0x10fd: Stack[-1] = Stack[-3]
0x10fe: Call2 0x1244

0x10ff: Pop(1)
0x1100: GOTO 0x1108

0x1101: Push("battle")
0x1102: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1103: IF (Stack[-1] == 0) GOTO 0x1108; Pop(1)

0x1104: PushEmpty(object)
0x1105: Stack[-1] = Stack[-3]
0x1106: Call2 0x1249

0x1107: Pop(1)
0x1108: Return(); Pop(0)

0x1109: PushEmpty(bool, bool)
0x110a: PushEmpty(bool)
0x110b: Stack[-1] = (bool) 0
0x110c: PushEmpty(bool, object)
0x110d: Stack[-1] = Stack[-6]
0x110e: Call2 0x123c

0x110f: Pop(1)
0x1110: IF (Stack[-1] == 0) GOTO 0x1117; Pop(1)

0x1111: PushEmpty(bool, object)
0x1112: Stack[-1] = Stack[-6]
0x1113: Call2 0xce8

0x1114: Pop(1)
0x1115: IF (Stack[-1] == 0) GOTO 0x1117; Pop(1)

0x1116: Stack[-1] = (bool) 1
0x1117: IF (Stack[-1] == 0) GOTO 0x111e; Pop(1)

0x1118: @@ IsWeaponHolstered(Stack[-1])
0x1119: Pop(0)
0x111a: Pop(0); Push((bool) Stack[-1] == 0)
0x111b: IF (Stack[-1] == 0) GOTO 0x111e; Pop(1)

0x111c: Stack[-4] = (bool) 1
0x111d: Return(); Pop(2)

0x111e: Stack[-4] = (bool) 0
0x111f: Return(); Pop(2)

0x1120: PushEmpty()
0x1121: PushEmpty(object)
0x1122: Stack[-1] = Stack[-2]
0x1123: Call2 0x123f

0x1124: Pop(1)
0x1125: Return(); Pop(0)

0x1126: PushEmpty()
0x1127: PushEmpty(bool, object)
0x1128: Stack[-1] = Stack[-3]
0x1129: Call2 0xce8

0x112a: Pop(1)
0x112b: IF (Stack[-1] == 0) GOTO 0x1132; Pop(1)

0x112c: PushEmpty(object)
0x112d: Call2 0xefb

0x112e: Pop(0)
0x112f: Push((float)-0.01)
0x1130: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1131: Pop(2)
0x1132: Return(); Pop(0)

0x1133: PushEmpty(object, object)
0x1134: Push("heal")
0x1135: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1136: IF (Stack[-1] == 0) GOTO 0x1141; Pop(1)

0x1137: Push("player")
0x1138: @ FindActor(Stack[-2], Stack[-1])
0x1139: Pop(1)
0x113a: PushEmpty(bool, object)
0x113b: Stack[-1] = Stack[-3]
0x113c: Call2 0x124b

0x113d: Stack[-6] = Stack[-2]
0x113e: Pop(2)
0x113f: Return(); Pop(2)

0x1140: Stack[-1] = 0
0x1141: Stack[-4] = (bool) 0
0x1142: Return(); Pop(2)

0x1143: PushEmpty(object, object)
0x1144: Push("heal")
0x1145: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1146: IF (Stack[-1] == 0) GOTO 0x114f; Pop(1)

0x1147: Push("player")
0x1148: @ FindActor(Stack[-2], Stack[-1])
0x1149: Pop(1)
0x114a: PushEmpty(object)
0x114b: Stack[-1] = Stack[-2]
0x114c: Call2 0x124e

0x114d: Pop(1)
0x114e: Stack[-1] = 0
0x114f: Return(); Pop(2)

0x1150: PushEmpty(string, string)
0x1151: Stack[-1] = "idle"
0x1152: Push(Stack[-3])
0x1153: IF (Stack[-1] == 0) GOTO 0x1155; Pop(1)

0x1154: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1155: Stack[-4] = Stack[-1]
0x1156: Return(); Pop(2)

0x1157: PushEmpty(int, bool, int, bool)
0x1158: Stack[-2] = (int) 0
0x1159: Push("all")
0x115a: PushEmpty(string, int)
0x115b: Stack[-1] = Stack[-5]
0x115c: Call2 0x1150

0x115d: Pop(1)
0x115e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x115f: Pop(2)
0x1160: Pop(0); Push((bool) Stack[-1] == 0)
0x1161: IF (Stack[-1] == 0) GOTO 0x1163; Pop(1)

0x1162: GOTO 0x1166

0x1163: Push((int) 1)
0x1164: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1165: GOTO 0x1159

0x1166: Stack[-5] = Stack[-2]
0x1167: Return(); Pop(4)

0x1168: PushEmpty()
0x1169: PushEmpty(bool, object)
0x116a: Stack[-1] = Stack[-3]
0x116b: Call2 0x128c

0x116c: Pop(1)
0x116d: IF (Stack[-1] == 0) GOTO 0x1170; Pop(1)

0x116e: Stack[-2] = (int) 2
0x116f: GOTO 0x1171

0x1170: Stack[-2] = (int) 0
0x1171: Return(); Pop(0)

0x1172: PushEmpty()
0x1173: PushEmpty(object)
0x1174: Stack[-1] = Stack[-2]
0x1175: Call2 0x1182

0x1176: Pop(1)
0x1177: Return(); Pop(0)

0x1178: PushEmpty()
0x1179: PushEmpty(bool, object)
0x117a: Stack[-1] = Stack[-3]
0x117b: Call2 0xd6b

0x117c: Pop(1)
0x117d: IF (Stack[-1] == 0) GOTO 0x1180; Pop(1)

0x117e: Stack[-2] = (int) 2
0x117f: GOTO 0x1181

0x1180: Stack[-2] = (int) 0
0x1181: Return(); Pop(0)

0x1182: PushEmpty()
0x1183: PushEmpty(object)
0x1184: Stack[-1] = Stack[-2]
0x1185: Push(-1, 6); TaskCall(6)
0x1186: Call2 0x920

0x1187: Pop(-1, 6); TaskReturn
0x1188: Pop(1)
0x1189: Return(); Pop(0)

0x118a: PushEmpty(string, string, string, string)
0x118b: PushEmpty(bool, object, string)
0x118c: Stack[-2] = Stack[-9]
0x118d: Stack[-1] = "class"
0x118e: Call2 0xced

0x118f: Pop(2)
0x1190: Pop(1); Push((bool) Stack[-1] == 0)
0x1191: IF (Stack[-1] == 0) GOTO 0x1194; Pop(1)

0x1192: Stack[-7] = (bool) 0
0x1193: Return(); Pop(4)

0x1194: Push("class")
0x1195: @ GetProperty(Stack[-1], Stack[-3])
0x1196: Pop(1)
0x1197: Push("class")
0x1198: @@ GetProperty(Stack[-1], Stack[-2])
0x1199: Pop(1)
0x119a: PushEmpty(bool)
0x119b: Stack[-1] = (bool) 0
0x119c: Pop(0); Push((bool) Stack[-6] == 0)
0x119d: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x119e: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0x119f: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x11a0: Stack[-1] = (bool) 1
0x11a1: IF (Stack[-1] == 0) GOTO 0x11a4; Pop(1)

0x11a2: Stack[-7] = (bool) 1
0x11a3: Return(); Pop(4)

0x11a4: Push("rat")
0x11a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11a6: IF (Stack[-1] == 0) GOTO 0x11aa; Pop(1)

0x11a7: Stack[-7] = (bool) 0
0x11a8: Return(); Pop(4)

0x11a9: GOTO 0x11d3

0x11aa: Push("rat_big")
0x11ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11ac: IF (Stack[-1] == 0) GOTO 0x11b0; Pop(1)

0x11ad: Stack[-7] = (bool) 0
0x11ae: Return(); Pop(4)

0x11af: GOTO 0x11d3

0x11b0: Push("dog")
0x11b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11b2: IF (Stack[-1] == 0) GOTO 0x11b6; Pop(1)

0x11b3: Stack[-7] = (bool) 0
0x11b4: Return(); Pop(4)

0x11b5: GOTO 0x11d3

0x11b6: Push("grabitel")
0x11b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11b8: IF (Stack[-1] == 0) GOTO 0x11bc; Pop(1)

0x11b9: Stack[-7] = (bool) 0
0x11ba: Return(); Pop(4)

0x11bb: GOTO 0x11d3

0x11bc: Push("bomber")
0x11bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11be: IF (Stack[-1] == 0) GOTO 0x11c2; Pop(1)

0x11bf: Stack[-7] = (bool) 0
0x11c0: Return(); Pop(4)

0x11c1: GOTO 0x11d3

0x11c2: Push("sanitar")
0x11c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11c4: IF (Stack[-1] == 0) GOTO 0x11c8; Pop(1)

0x11c5: Stack[-7] = (bool) 0
0x11c6: Return(); Pop(4)

0x11c7: GOTO 0x11d3

0x11c8: Push("hunter")
0x11c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11ca: IF (Stack[-1] == 0) GOTO 0x11ce; Pop(1)

0x11cb: Stack[-7] = (bool) 0
0x11cc: Return(); Pop(4)

0x11cd: GOTO 0x11d3

0x11ce: Push("soldier")
0x11cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11d0: IF (Stack[-1] == 0) GOTO 0x11d3; Pop(1)

0x11d1: Stack[-7] = (bool) 0
0x11d2: Return(); Pop(4)

0x11d3: Stack[-7] = (bool) 1
0x11d4: Return(); Pop(4)

0x11d5: PushEmpty()
0x11d6: PushEmpty(int, object)
0x11d7: Stack[-1] = Stack[-4]
0x11d8: Call2 0x1178

0x11d9: Stack[-5] = Stack[-2]
0x11da: Pop(2)
0x11db: Return(); Pop(0)

0x11dc: PushEmpty()
0x11dd: PushEmpty(object)
0x11de: Stack[-1] = Stack[-2]
0x11df: Call2 0x1182

0x11e0: Pop(1)
0x11e1: Return(); Pop(0)

0x11e2: PushEmpty(bool, bool)
0x11e3: PushEmpty(bool, object, bool)
0x11e4: Stack[-2] = Stack[-8]
0x11e5: Stack[-1] = !Stack[-6]; Pop(0);
0x11e6: Call2 0x118a

0x11e7: Pop(2)
0x11e8: Pop(1); Push((bool) Stack[-1] == 0)
0x11e9: IF (Stack[-1] == 0) GOTO 0x11ec; Pop(1)

0x11ea: Stack[-7] = (bool) 0
0x11eb: Return(); Pop(2)

0x11ec: @ CanSee(Stack[-1], Stack[-6])
0x11ed: Pop(0)
0x11ee: PushEmpty(bool)
0x11ef: Stack[-1] = (bool) 1
0x11f0: Push(Stack[-2])
0x11f1: IF (Stack[-1] == 0) GOTO 0x11fa; Pop(1)

0x11f2: PushEmpty(float, object)
0x11f3: Stack[-1] = Stack[-9]
0x11f4: Call2 0xce0

0x11f5: Pop(1)
0x11f6: Pop(0); Push(Stack[-6] * Stack[-6]);
0x11f7: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x11f8: IF (Stack[-1] == 0) GOTO 0x11fa; Pop(1)

0x11f9: Stack[-1] = (bool) 0
0x11fa: IF (Stack[-1] == 0) GOTO 0x11fd; Pop(1)

0x11fb: Stack[-7] = (bool) 1
0x11fc: Return(); Pop(2)

0x11fd: Stack[-7] = (bool) 0
0x11fe: Return(); Pop(2)

0x11ff: PushEmpty()
0x1200: Stack[-2] = (int) 0
0x1201: Return(); Pop(0)

0x1202: PushEmpty()
0x1203: Return(); Pop(0)

0x1204: PushEmpty()
0x1205: Push("killme")
0x1206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1207: IF (Stack[-1] == 0) GOTO 0x120e; Pop(1)

0x1208: PushEmpty(int, object)
0x1209: Stack[-1] = Stack[-3]
0x120a: Call2 0x121a

0x120b: Stack[-5] = Stack[-2]
0x120c: Pop(2)
0x120d: Return(); Pop(0)

0x120e: Stack[-3] = (int) 0
0x120f: Return(); Pop(0)

0x1210: PushEmpty()
0x1211: Push("killme")
0x1212: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1213: IF (Stack[-1] == 0) GOTO 0x1219; Pop(1)

0x1214: PushEmpty(object)
0x1215: Stack[-1] = Stack[-2]
0x1216: Call2 0x122c

0x1217: Pop(1)
0x1218: Return(); Pop(0)

0x1219: Return(); Pop(0)

0x121a: PushEmpty()
0x121b: PushEmpty(bool, object)
0x121c: Stack[-1] = Stack[-3]
0x121d: Call2 0xd6b

0x121e: Pop(1)
0x121f: Pop(1); Push((bool) Stack[-1] == 0)
0x1220: IF (Stack[-1] == 0) GOTO 0x1223; Pop(1)

0x1221: Stack[-2] = (int) 0
0x1222: Return(); Pop(0)

0x1223: PushEmpty(bool, object)
0x1224: Stack[-1] = Stack[-3]
0x1225: Call2 0x129c

0x1226: Pop(1)
0x1227: IF (Stack[-1] == 0) GOTO 0x122a; Pop(1)

0x1228: Stack[-2] = (int) 2
0x1229: GOTO 0x122b

0x122a: Stack[-2] = (int) 0
0x122b: Return(); Pop(0)

0x122c: PushEmpty()
0x122d: PushEmpty(object)
0x122e: Stack[-1] = Stack[-2]
0x122f: Call2 0x1182

0x1230: Pop(1)
0x1231: Return(); Pop(0)

0x1232: PushEmpty()
0x1233: Stack[-2] = (int) 2
0x1234: Return(); Pop(0)

0x1235: PushEmpty()
0x1236: PushEmpty(object)
0x1237: Stack[-1] = Stack[-2]
0x1238: Call2 0x125e

0x1239: Pop(1)
0x123a: Return(); Pop(0)

0x123b: Return(); Pop(0)

0x123c: PushEmpty()
0x123d: Stack[-2] = (bool) 0
0x123e: Return(); Pop(0)

0x123f: PushEmpty()
0x1240: Return(); Pop(0)

0x1241: PushEmpty()
0x1242: Stack[-2] = (bool) 0
0x1243: Return(); Pop(0)

0x1244: PushEmpty()
0x1245: Return(); Pop(0)

0x1246: PushEmpty()
0x1247: Stack[-2] = (bool) 0
0x1248: Return(); Pop(0)

0x1249: PushEmpty()
0x124a: Return(); Pop(0)

0x124b: PushEmpty()
0x124c: Stack[-2] = (bool) 0
0x124d: Return(); Pop(0)

0x124e: PushEmpty()
0x124f: Return(); Pop(0)

0x1250: Stack[-1] = (int) 515564
0x1251: Return(); Pop(0)

0x1252: Stack[-1] = (int) 503349
0x1253: Return(); Pop(0)

0x1254: Stack[-1] = "ui/NPC_Citizen2.png"
0x1255: Return(); Pop(0)

0x1256: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x1257: Return(); Pop(0)

0x1258: Stack[-1] = (bool) 0
0x1259: Return(); Pop(0)

0x125a: Push(GlobalVars[0])
0x125b: Stack[-1] = (bool) 0
0x125c: GlobalVars[0] = Stack[-1]; Pop(1)
0x125d: Return(); Pop(0)

0x125e: PushEmpty(bool, bool)
0x125f: Push(GlobalVars[0])
0x1260: IF (Stack[-1] == 0) GOTO 0x126b; Pop(1)

0x1261: @ IsOverrideActive(Stack[-1])
0x1262: Pop(0)
0x1263: Pop(0); Push((bool) Stack[-1] == 0)
0x1264: IF (Stack[-1] == 0) GOTO 0x1269; Pop(1)

0x1265: PushEmpty(object)
0x1266: Stack[-1] = Stack[-4]
0x1267: Call2 0xf9a

0x1268: Pop(1)
0x1269: Return(); Pop(2)

0x126a: GOTO 0x128b

0x126b: PushEmpty(bool, object)
0x126c: Stack[-1] = Stack[-5]
0x126d: Call2 0x128c

0x126e: Pop(1)
0x126f: Pop(1); Push((bool) Stack[-1] == 0)
0x1270: IF (Stack[-1] == 0) GOTO 0x128b; Pop(1)

0x1271: Push((int) 1000)
0x1272: PushEmpty(int, object)
0x1273: Stack[-1] = Stack[-6]
0x1274: Push(-2, 1); TaskCall(1)
0x1275: Call2 0x28

0x1276: Pop(-2, 1); TaskReturn
0x1277: Pop(1)
0x1278: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1279: IF (Stack[-1] == 0) GOTO 0x128b; Pop(1)

0x127a: PushEmpty(bool, object)
0x127b: Stack[-1] = Stack[-5]
0x127c: Call2 0xe66

0x127d: Pop(1)
0x127e: Pop(1); Push((bool) Stack[-1] == 0)
0x127f: IF (Stack[-1] == 0) GOTO 0x1281; Pop(1)

0x1280: Return(); Pop(2)

0x1281: PushEmpty(object)
0x1282: Stack[-1] = Stack[-4]
0x1283: Push(-1, 1); TaskCall(0)
0x1284: Call2 0x0

0x1285: Pop(-1, 1); TaskReturn
0x1286: Pop(1)
0x1287: PushEmpty(object)
0x1288: Stack[-1] = Stack[-4]
0x1289: Call2 0xe9d

0x128a: Pop(1)
0x128b: Return(); Pop(2)

0x128c: PushEmpty(float, float)
0x128d: PushEmpty(bool, object)
0x128e: Stack[-1] = Stack[-5]
0x128f: Call2 0xce8

0x1290: Pop(1)
0x1291: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1292: Push("reputation")
0x1293: @@ GetProperty(Stack[-1], Stack[-2])
0x1294: Pop(1)
0x1295: Push((float)0.4)
0x1296: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1297: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1298: Stack[-4] = (bool) 1
0x1299: Return(); Pop(2)

0x129a: Stack[-4] = (bool) 0
0x129b: Return(); Pop(2)

0x129c: PushEmpty()
0x129d: Stack[-2] = (bool) 1
0x129e: Return(); Pop(0)

0x129f: PushEmpty()
0x12a0: PushEmpty(bool, object, object, float, bool)
0x12a1: Stack[-4] = Stack[-8]
0x12a2: Stack[-3] = Stack[-7]
0x12a3: Stack[-2] = (float) 700.0
0x12a4: Stack[-1] = Stack[-6]
0x12a5: Call2 0x11e2

0x12a6: Stack[-9] = Stack[-5]
0x12a7: Pop(5)
0x12a8: Return(); Pop(0)

0x12a9: PushEmpty()
0x12aa: PushEmpty(bool, object)
0x12ab: Stack[-1] = Stack[-3]
0x12ac: Call2 0xce8

0x12ad: Pop(1)
0x12ae: IF (Stack[-1] == 0) GOTO 0x12ba; Pop(1)

0x12af: PushEmpty(object)
0x12b0: Call2 0xefb

0x12b1: Pop(0)
0x12b2: Push((float)-0.04)
0x12b3: Push((bool) 1)
0x12b4: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12b5: Pop(3)
0x12b6: PushEmpty(bool)
0x12b7: Stack[-1] = (bool) 1
0x12b8: Call2 0xfef

0x12b9: Pop(1)
0x12ba: PushEmpty()
0x12bb: Call2 0xfd7

0x12bc: Pop(0)
0x12bd: Push(GlobalVars[0])
0x12be: Stack[-1] = (bool) 1
0x12bf: GlobalVars[0] = Stack[-1]; Pop(1)
0x12c0: Push((int) 50)
0x12c1: Push((int) 40)
0x12c2: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x12c3: Pop(2)
0x12c4: Return(); Pop(0)

