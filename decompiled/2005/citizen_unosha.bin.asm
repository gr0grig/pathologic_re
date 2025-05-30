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
	GTASK_6 Vars = (object) Params = 1
		EVENT_0 Op = 0x958 Vars = (object)
		EVENT_17 Op = 0x96c Vars = (object)
		EVENT_30 Op = 0x984 Vars = (object, object, bool)
		EVENT_40 Op = 0x9a0 Vars = (object)
		EVENT_42 Op = 0x9b4 Vars = (object, string)
		EVENT_26 Op = 0x9d9 Vars = (string)
		EVENT_41 Op = 0x9f2 Vars = (object)
		EVENT_7 Op = 0x9fb Vars = (int)
		EVENT_6 Op = 0xa1e Vars = ()
		EVENT_1 Op = 0xa25 Vars = (object)
	GTASK_7 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_8 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0xcd7 Vars = ()
		EVENT_7 Op = 0xd0f Vars = (int)
		EVENT_1 Op = 0xd2a Vars = (object)
		EVENT_2 Op = 0xd39 Vars = (object)
		EVENT_10 Op = 0xdbf Vars = (object)
		EVENT_41 Op = 0xdca Vars = (object)

Events:
EVENT_16 Op = 0x11e2 Vars = (object, string)
EVENT_41 Op = 0x11ef Vars = (object)
EVENT_22 Op = 0x11f5 Vars = (object, int, float, float)
EVENT_43 Op = 0x11fd Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x13a0

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0xfb4

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
0x1c: Call2 0x13a0

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
0x2d: Call2 0xf24

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x139a

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x1398

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x139c

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x139e

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x10ba

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
0x69: Call2 0xf68

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
0x7c: Call2 0x108c

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x7f: PushEmpty(bool, object)
0x80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81: Call2 0x10a2

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
0xa3: Call2 0x108c

0xa4: Pop(1)
0xa5: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa6: PushEmpty(bool, object)
0xa7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Call2 0x10a2

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
0xca: Call2 0x1098

0xcb: Pop(1)
0xcc: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0x1080

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
0xdd: Call2 0x1098

0xde: Pop(1)
0xdf: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x1080

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
0xf0: Call2 0x1098

0xf1: Pop(1)
0xf2: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0x1080

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
0x108: Call2 0x13a0

0x109: Pop(0)
0x10a: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x10b: @ lshWaitForAnimEnd()
0x10c: Pop(0)
0x10d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: GOTO 0x115

0x110: PushEmpty(string)
0x111: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x112: Call2 0xfb4

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
0x127: Call2 0x13a0

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
0x137: Call2 0xfc4

0x138: Pop(2)
0x139: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x13a: Return(); Pop(0)

0x13b: PushEmpty()
0x13c: Push((int) 1)
0x13d: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x13e: PushEmpty()
0x13f: Call2 0xfde

0x140: Pop(0)
0x141: Push((int) 45786)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x144: PushEmpty(bool)
0x145: Stack[-1] = (bool) 0
0x146: PushEmpty(bool, object)
0x147: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x148: Call2 0x108c

0x149: Pop(1)
0x14a: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14b: PushEmpty(bool, object)
0x14c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Call2 0x10a2

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
0x16f: Call2 0x108c

0x170: Pop(1)
0x171: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x172: PushEmpty(bool, object)
0x173: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x174: Call2 0x10a2

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
0x196: Call2 0x1098

0x197: Pop(1)
0x198: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x199: PushEmpty(bool, object)
0x19a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19b: Call2 0x1080

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
0x1a9: Call2 0x1098

0x1aa: Pop(1)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ac: PushEmpty(bool, object)
0x1ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ae: Call2 0x1080

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
0x1bc: Call2 0x1098

0x1bd: Pop(1)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call2 0x1080

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
0x60e: Call2 0x13a0

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
0x621: Call2 0x13dd

0x622: Pop(1)
0x623: EventEnable(0)
0x624: @ Hold()
0x625: Pop(0)
0x626: GOTO 0x624

0x627: Return(); Pop(0)

0x628: PushEmpty(int, int)
0x629: PushEmpty(int, object)
0x62a: Stack[-1] = Stack[-5]
0x62b: Call2 0x136a

0x62c: Stack[-3] = Stack[-2]
0x62d: Pop(2)
0x62e: Push((int) 0)
0x62f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x631: PushEmpty(object)
0x632: Stack[-1] = Stack[-4]
0x633: Call2 0x136d

0x634: Pop(1)
0x635: Return(); Pop(2)

0x636: PushEmpty()
0x637: Call2 0x1373

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
0x680: Call2 0xfe5

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
0x6a2: Call2 0xfe5

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
0x6b9: Call2 0x13a2

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
0x6c5: Call2 0xf1f

0x6c6: Pop(0)
0x6c7: Pop(1); Push((bool) Stack[-1] == 0)
0x6c8: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c9: PushEmpty()
0x6ca: Call2 0x1373

0x6cb: Pop(0)
0x6cc: Return(); Pop(0)

0x6cd: PushEmpty(int, int)
0x6ce: PushEmpty(int, object)
0x6cf: Stack[-1] = Stack[-5]
0x6d0: Call2 0x136a

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
0x6de: Call2 0x136d

0x6df: Pop(1)
0x6e0: Return(); Pop(2)

0x6e1: PushEmpty(int, int)
0x6e2: PushEmpty(object)
0x6e3: Stack[-1] = Stack[-4]
0x6e4: Call2 0x125d

0x6e5: Pop(1)
0x6e6: PushEmpty(int, object)
0x6e7: Stack[-1] = Stack[-5]
0x6e8: Call2 0x12b0

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
0x6f6: Call2 0x12ba

0x6f7: Pop(1)
0x6f8: Return(); Pop(2)

0x6f9: PushEmpty(int, int)
0x6fa: PushEmpty(bool, object, object, bool)
0x6fb: Stack[-3] = Stack[-9]
0x6fc: Stack[-2] = Stack[-8]
0x6fd: Stack[-1] = Stack[-7]
0x6fe: Call2 0x13d3

0x6ff: Pop(3)
0x700: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x701: PushEmpty(int, object, bool)
0x702: Stack[-2] = Stack[-8]
0x703: Stack[-1] = Stack[-6]
0x704: Call2 0x130d

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
0x712: Call2 0x1314

0x713: Pop(1)
0x714: Return(); Pop(2)

0x715: PushEmpty(int, int)
0x716: PushEmpty(int, object)
0x717: Stack[-1] = Stack[-5]
0x718: Call2 0x1337

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
0x726: Call2 0x133a

0x727: Pop(1)
0x728: Return(); Pop(2)

0x729: PushEmpty(int, int)
0x72a: PushEmpty(bool, object, string)
0x72b: Stack[-2] = Stack[-7]
0x72c: Stack[-1] = Stack[-6]
0x72d: Call2 0x1207

0x72e: Pop(2)
0x72f: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x730: PushEmpty()
0x731: Call2 0x788

0x732: Pop(0)
0x733: PushEmpty(object, string)
0x734: Stack[-2] = Stack[-6]
0x735: Stack[-1] = Stack[-5]
0x736: Call2 0x1227

0x737: Pop(2)
0x738: GOTO 0x74d

0x739: PushEmpty(int, string, object)
0x73a: Stack[-2] = Stack[-6]
0x73b: Stack[-1] = Stack[-7]
0x73c: Call2 0x133c

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
0x74b: Call2 0x1348

0x74c: Pop(2)
0x74d: Return(); Pop(2)

0x74e: PushEmpty()
0x74f: PushEmpty(bool, string)
0x750: Stack[-1] = Stack[-3]
0x751: Call2 0x126a

0x752: Pop(1)
0x753: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x754: PushEmpty()
0x755: Call2 0x788

0x756: Pop(0)
0x757: PushEmpty(string)
0x758: Stack[-1] = Stack[-2]
0x759: Call2 0x127a

0x75a: Pop(1)
0x75b: Return(); Pop(0)

0x75c: PushEmpty()
0x75d: PushEmpty(bool, object)
0x75e: Stack[-1] = Stack[-3]
0x75f: Call2 0x1240

0x760: Pop(1)
0x761: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x762: PushEmpty()
0x763: Call2 0x788

0x764: Pop(0)
0x765: PushEmpty(object)
0x766: Stack[-1] = Stack[-2]
0x767: Call2 0x1257

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
0x785: Call2 0x1373

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
0x79e: Call2 0x11ef

0x79f: Pop(1)
0x7a0: Return(); Pop(0)

0x7a1: PushEmpty(bool, int, bool, int)
0x7a2: PushEmpty(bool, object)
0x7a3: Stack[-1] = Stack[-7]
0x7a4: Call2 0xe7e

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
0x7b3: Call2 0x129f

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
0x7c1: Call2 0x12a8

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
0x829: Call2 0x136a

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
0x837: Call2 0x136d

0x838: Pop(1)
0x839: Return(); Pop(2)

0x83a: PushEmpty(int, int)
0x83b: PushEmpty(object)
0x83c: Stack[-1] = Stack[-4]
0x83d: Call2 0x125d

0x83e: Pop(1)
0x83f: PushEmpty(int, object)
0x840: Stack[-1] = Stack[-5]
0x841: Call2 0x12b0

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
0x84f: Call2 0x12ba

0x850: Pop(1)
0x851: Return(); Pop(2)

0x852: PushEmpty(int, int)
0x853: PushEmpty(bool, object, object, bool)
0x854: Stack[-3] = Stack[-9]
0x855: Stack[-2] = Stack[-8]
0x856: Stack[-1] = Stack[-7]
0x857: Call2 0x13d3

0x858: Pop(3)
0x859: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x85a: PushEmpty(int, object, bool)
0x85b: Stack[-2] = Stack[-8]
0x85c: Stack[-1] = Stack[-6]
0x85d: Call2 0x130d

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
0x86b: Call2 0x1314

0x86c: Pop(1)
0x86d: Return(); Pop(2)

0x86e: PushEmpty(int, int)
0x86f: PushEmpty(int, object)
0x870: Stack[-1] = Stack[-5]
0x871: Call2 0x1337

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
0x87f: Call2 0x133a

0x880: Pop(1)
0x881: Return(); Pop(2)

0x882: PushEmpty(int, int)
0x883: PushEmpty(bool, object, string)
0x884: Stack[-2] = Stack[-7]
0x885: Stack[-1] = Stack[-6]
0x886: Call2 0x1207

0x887: Pop(2)
0x888: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x889: PushEmpty()
0x88a: Call2 0x91b

0x88b: Pop(0)
0x88c: PushEmpty(object, string)
0x88d: Stack[-2] = Stack[-6]
0x88e: Stack[-1] = Stack[-5]
0x88f: Call2 0x1227

0x890: Pop(2)
0x891: GOTO 0x8a6

0x892: PushEmpty(int, string, object)
0x893: Stack[-2] = Stack[-6]
0x894: Stack[-1] = Stack[-7]
0x895: Call2 0x133c

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
0x8a4: Call2 0x1348

0x8a5: Pop(2)
0x8a6: Return(); Pop(2)

0x8a7: PushEmpty()
0x8a8: PushEmpty(bool, string)
0x8a9: Stack[-1] = Stack[-3]
0x8aa: Call2 0x126a

0x8ab: Pop(1)
0x8ac: IF (Stack[-1] == 0) GOTO 0x8b4; Pop(1)

0x8ad: PushEmpty()
0x8ae: Call2 0x91b

0x8af: Pop(0)
0x8b0: PushEmpty(string)
0x8b1: Stack[-1] = Stack[-2]
0x8b2: Call2 0x127a

0x8b3: Pop(1)
0x8b4: Return(); Pop(0)

0x8b5: PushEmpty()
0x8b6: Call2 0x91b

0x8b7: Pop(0)
0x8b8: PushEmpty()
0x8b9: Call2 0x1373

0x8ba: Pop(0)
0x8bb: Return(); Pop(0)

0x8bc: PushEmpty()
0x8bd: PushEmpty(bool, object)
0x8be: Stack[-1] = Stack[-3]
0x8bf: Call2 0x1240

0x8c0: Pop(1)
0x8c1: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c2: PushEmpty()
0x8c3: Call2 0x91b

0x8c4: Pop(0)
0x8c5: PushEmpty(object)
0x8c6: Stack[-1] = Stack[-2]
0x8c7: Call2 0x1257

0x8c8: Pop(1)
0x8c9: Return(); Pop(0)

0x8ca: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x8cb: @ WaitForAnimEnd()
0x8cc: Pop(0)
0x8cd: PushEmpty(bool)
0x8ce: Call2 0xf1f

0x8cf: Pop(0)
0x8d0: Pop(1); Push((bool) Stack[-1] == 0)
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8d2: Return(); Pop(14)

0x8d3: PushEmpty(int)
0x8d4: Call2 0x128e

0x8d5: Stack[-8] = Stack[-1]
0x8d6: Pop(1)
0x8d7: Stack[-6] = (int) 0
0x8d8: PushEmpty(bool)
0x8d9: Stack[-1] = (bool) 0
0x8da: Push((int) 5)
0x8db: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8dd: PushEmpty(bool)
0x8de: Call2 0xf1f

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
0x8f0: Call2 0x1287

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

0x920: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x921: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x922: PushEmpty()
0x923: Call2 0x953

0x924: Pop(0)
0x925: @ GetDirection(Stack[-3])
0x926: Pop(0)
0x927: PushEmpty(cvector, object)
0x928: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x929: Call2 0xdec

0x92a: Stack[-4] = Stack[-2]
0x92b: Pop(2)
0x92c: PushEmpty(float, cvector, cvector)
0x92d: Stack[-2] = Stack[-6]
0x92e: Stack[-1] = Stack[-5]
0x92f: Call2 0x1043

0x930: Pop(2)
0x931: Push((int) 0)
0x932: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x933: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x934: PushEmpty(object)
0x935: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x936: Call2 0xf14

0x937: Pop(1)
0x938: Stack[-1] = (bool) 1
0x939: GOTO 0x93d

0x93a: Push((float)1.5)
0x93b: @ Sleep(Stack[-1], Stack[-2])
0x93c: Pop(1)
0x93d: Push(Stack[-1])
0x93e: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x93f: PushEmpty(object)
0x940: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x941: Call2 0xf14

0x942: Pop(1)
0x943: Push((int) 111)
0x944: Push((float)0.5)
0x945: @ SetTimer(Stack[-2], Stack[-1])
0x946: Pop(2)
0x947: Push((float)5.0)
0x948: @ Sleep(Stack[-1])
0x949: Pop(1)
0x94a: Push((int) 111)
0x94b: @ KillTimer(Stack[-1])
0x94c: Pop(1)
0x94d: @ StopAsync()
0x94e: Pop(0)
0x94f: Push("head")
0x950: @ UnlookAsync(Stack[-1])
0x951: Pop(1)
0x952: Return(); Pop(6)

0x953: PushEmpty(object)
0x954: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x955: Call2 0xfd3

0x956: Pop(1)
0x957: Return(); Pop(0)

0x958: PushEmpty(int, int)
0x959: PushEmpty(int, object)
0x95a: Stack[-1] = Stack[-5]
0x95b: Call2 0x136a

0x95c: Stack[-3] = Stack[-2]
0x95d: Pop(2)
0x95e: Push((int) 0)
0x95f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x960: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x961: Push((int) 1)
0x962: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x963: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x964: PushEmpty()
0x965: Call2 0x9e7

0x966: Pop(0)
0x967: PushEmpty(object)
0x968: Stack[-1] = Stack[-4]
0x969: Call2 0x136d

0x96a: Pop(1)
0x96b: Return(); Pop(2)

0x96c: PushEmpty(int, int)
0x96d: PushEmpty(object)
0x96e: Stack[-1] = Stack[-4]
0x96f: Call2 0x125d

0x970: Pop(1)
0x971: PushEmpty(int, object)
0x972: Stack[-1] = Stack[-5]
0x973: Call2 0x12b0

0x974: Stack[-3] = Stack[-2]
0x975: Pop(2)
0x976: Push((int) 0)
0x977: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x978: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x979: Push((int) 1)
0x97a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x97b: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x97c: PushEmpty()
0x97d: Call2 0x9e7

0x97e: Pop(0)
0x97f: PushEmpty(object)
0x980: Stack[-1] = Stack[-4]
0x981: Call2 0x12ba

0x982: Pop(1)
0x983: Return(); Pop(2)

0x984: PushEmpty(int, int)
0x985: PushEmpty(bool, object, object, bool)
0x986: Stack[-3] = Stack[-9]
0x987: Stack[-2] = Stack[-8]
0x988: Stack[-1] = Stack[-7]
0x989: Call2 0x13d3

0x98a: Pop(3)
0x98b: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x98c: PushEmpty(int, object, bool)
0x98d: Stack[-2] = Stack[-8]
0x98e: Stack[-1] = Stack[-6]
0x98f: Call2 0x130d

0x990: Stack[-4] = Stack[-3]
0x991: Pop(3)
0x992: Push((int) 0)
0x993: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x994: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x995: Push((int) 1)
0x996: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x997: IF (Stack[-1] == 0) GOTO 0x99b; Pop(1)

0x998: PushEmpty()
0x999: Call2 0x9e7

0x99a: Pop(0)
0x99b: PushEmpty(object)
0x99c: Stack[-1] = Stack[-6]
0x99d: Call2 0x1314

0x99e: Pop(1)
0x99f: Return(); Pop(2)

0x9a0: PushEmpty(int, int)
0x9a1: PushEmpty(int, object)
0x9a2: Stack[-1] = Stack[-5]
0x9a3: Call2 0x1337

0x9a4: Stack[-3] = Stack[-2]
0x9a5: Pop(2)
0x9a6: Push((int) 0)
0x9a7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9a8: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9a9: Push((int) 1)
0x9aa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9ac: PushEmpty()
0x9ad: Call2 0x9e7

0x9ae: Pop(0)
0x9af: PushEmpty(object)
0x9b0: Stack[-1] = Stack[-4]
0x9b1: Call2 0x133a

0x9b2: Pop(1)
0x9b3: Return(); Pop(2)

0x9b4: PushEmpty(int, int)
0x9b5: PushEmpty(bool, object, string)
0x9b6: Stack[-2] = Stack[-7]
0x9b7: Stack[-1] = Stack[-6]
0x9b8: Call2 0x1207

0x9b9: Pop(2)
0x9ba: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9bb: PushEmpty()
0x9bc: Call2 0x9e7

0x9bd: Pop(0)
0x9be: PushEmpty(object, string)
0x9bf: Stack[-2] = Stack[-6]
0x9c0: Stack[-1] = Stack[-5]
0x9c1: Call2 0x1227

0x9c2: Pop(2)
0x9c3: GOTO 0x9d8

0x9c4: PushEmpty(int, string, object)
0x9c5: Stack[-2] = Stack[-6]
0x9c6: Stack[-1] = Stack[-7]
0x9c7: Call2 0x133c

0x9c8: Stack[-4] = Stack[-3]
0x9c9: Pop(3)
0x9ca: Push((int) 0)
0x9cb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9cc: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9cd: Push((int) 1)
0x9ce: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9d0: PushEmpty()
0x9d1: Call2 0x9e7

0x9d2: Pop(0)
0x9d3: PushEmpty(string, object)
0x9d4: Stack[-2] = Stack[-5]
0x9d5: Stack[-1] = Stack[-6]
0x9d6: Call2 0x1348

0x9d7: Pop(2)
0x9d8: Return(); Pop(2)

0x9d9: PushEmpty()
0x9da: PushEmpty(bool, string)
0x9db: Stack[-1] = Stack[-3]
0x9dc: Call2 0x126a

0x9dd: Pop(1)
0x9de: IF (Stack[-1] == 0) GOTO 0x9e6; Pop(1)

0x9df: PushEmpty()
0x9e0: Call2 0x9e7

0x9e1: Pop(0)
0x9e2: PushEmpty(string)
0x9e3: Stack[-1] = Stack[-2]
0x9e4: Call2 0x127a

0x9e5: Pop(1)
0x9e6: Return(); Pop(0)

0x9e7: @ StopGroup0()
0x9e8: Pop(0)
0x9e9: @ StopAsync()
0x9ea: Pop(0)
0x9eb: Push("head")
0x9ec: @ UnlookAsync(Stack[-1])
0x9ed: Pop(1)
0x9ee: Push((int) 111)
0x9ef: @ KillTimer(Stack[-1])
0x9f0: Pop(1)
0x9f1: Return(); Pop(0)

0x9f2: PushEmpty()
0x9f3: PushEmpty()
0x9f4: Call2 0x9e7

0x9f5: Pop(0)
0x9f6: PushEmpty(object)
0x9f7: Stack[-1] = Stack[-2]
0x9f8: Call2 0x11ef

0x9f9: Pop(1)
0x9fa: Return(); Pop(0)

0x9fb: PushEmpty(cvector, cvector, cvector, cvector)
0x9fc: Push((int) 111)
0x9fd: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x9fe: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9ff: Return(); Pop(4)

0xa00: PushEmpty(bool, object)
0xa01: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa02: Call2 0xe7e

0xa03: Pop(1)
0xa04: Pop(1); Push((bool) Stack[-1] == 0)
0xa05: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa06: PushEmpty()
0xa07: Call2 0x9e7

0xa08: Pop(0)
0xa09: Return(); Pop(4)

0xa0a: @ GetDirection(Stack[-2])
0xa0b: Pop(0)
0xa0c: PushEmpty(cvector, object)
0xa0d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa0e: Call2 0xdec

0xa0f: Stack[-3] = Stack[-2]
0xa10: Pop(2)
0xa11: PushEmpty(float, cvector, cvector)
0xa12: Stack[-2] = Stack[-5]
0xa13: Stack[-1] = Stack[-4]
0xa14: Call2 0x1043

0xa15: Pop(2)
0xa16: Push((float)0.5)
0xa17: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xa18: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa19: PushEmpty(object)
0xa1a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa1b: Call2 0xf14

0xa1c: Pop(1)
0xa1d: Return(); Pop(4)

0xa1e: PushEmpty()
0xa1f: Call2 0x9e7

0xa20: Pop(0)
0xa21: PushEmpty()
0xa22: Call2 0x1373

0xa23: Pop(0)
0xa24: Return(); Pop(0)

0xa25: PushEmpty()
0xa26: PushEmpty(bool, object)
0xa27: Stack[-1] = Stack[-3]
0xa28: Call2 0x1240

0xa29: Pop(1)
0xa2a: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa2b: PushEmpty()
0xa2c: Call2 0x9e7

0xa2d: Pop(0)
0xa2e: PushEmpty(object)
0xa2f: Stack[-1] = Stack[-2]
0xa30: Call2 0x1257

0xa31: Pop(1)
0xa32: Return(); Pop(0)

0xa33: PushEmpty()
0xa34: PushEmpty(object, bool, float)
0xa35: Stack[-3] = Stack[-4]
0xa36: Stack[-2] = (bool) 1
0xa37: Stack[-1] = (float) 180.0
0xa38: Call2 0xa41

0xa39: Pop(3)
0xa3a: Return(); Pop(0)

0xa3b: PushEmpty()
0xa3c: Stack[-3] = (float) 0.05
0xa3d: Return(); Pop(0)

0xa3e: PushEmpty()
0xa3f: Stack[-3] = (int) 0
0xa40: Return(); Pop(0)

0xa41: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xa42: PushEmpty()
0xa43: Call2 0xb26

0xa44: Pop(0)
0xa45: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xa46: Push("@GetAttackDistance")
0xa47: Push((int) 1)
0xa48: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xa49: IF (Stack[-1] == 0) GOTO 0xa4f; Pop(1)

0xa4a: @@ GetAttackDistance(Stack[-11])
0xa4b: Pop(0)
0xa4c: Push((int) 50)
0xa4d: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xa4e: GOTO 0xa50

0xa4f: Stack[-11] = Stack[-23]
0xa50: Push((int) 150)
0xa51: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xa52: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa53: Stack[-11] = (int) 150
0xa54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa55: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xa56: @ IsPlayerActor(Stack[-0], Stack[-8])
0xa57: Pop(0)
0xa58: Push(Stack[-8])
0xa59: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa5a: Push("attack")
0xa5b: @ PlayGlobalMusic(Stack[-1])
0xa5c: Pop(1)
0xa5d: PushEmpty(object)
0xa5e: Call2 0x100e

0xa5f: Pop(0)
0xa60: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xa61: Pop(1)
0xa62: Push(Stack[-24])
0xa63: IF (Stack[-1] == 0) GOTO 0xa66; Pop(1)

0xa64: Stack[-7] = (bool) 0
0xa65: GOTO 0xa67

0xa66: Stack[-7] = (bool) 1
0xa67: Push((float)400.0)
0xa68: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xa69: PushEmpty(bool)
0xa6a: Stack[-1] = (bool) 0
0xa6b: PushEmpty(bool, object)
0xa6c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6d: Call2 0xe7e

0xa6e: Pop(1)
0xa6f: IF (Stack[-1] == 0) GOTO 0xa73; Pop(1)

0xa70: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xa71: IF (Stack[-1] == 0) GOTO 0xa73; Pop(1)

0xa72: Stack[-1] = (bool) 1
0xa73: IF (Stack[-1] == 0) GOTO 0xb15; Pop(1)

0xa74: PushEmpty()
0xa75: Call2 0xcc3

0xa76: Pop(0)
0xa77: @@ GetPFPosition(Stack[-10])
0xa78: Pop(0)
0xa79: @ GetPFPosition(Stack[-9])
0xa7a: Pop(0)
0xa7b: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xa7c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xa7d: Pop(0); Push(Stack[-6] * Stack[-6]);
0xa7e: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xa7f: IF (Stack[-1] == 0) GOTO 0xa8f; Pop(1)

0xa80: PushEmpty(bool, object, float, float, bool, bool)
0xa81: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xa82: Stack[-4] = Stack[-17]
0xa83: Stack[-3] = (float) 3000.0
0xa84: Stack[-2] = (bool) 1
0xa85: Stack[-1] = (bool) 0
0xa86: Push(-6, 3); TaskCall(8)
0xa87: Call2 0xcde

0xa88: Pop(-6, 3); TaskReturn
0xa89: Pop(5)
0xa8a: Pop(1); Push((bool) Stack[-1] == 0)
0xa8b: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa8c: GOTO 0xb15

0xa8d: Stack[-7] = (bool) 0
0xa8e: GOTO 0xb14

0xa8f: Pop(0); Push(Stack[-23] * Stack[-23]);
0xa90: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xa91: IF (Stack[-1] == 0) GOTO 0xb0c; Pop(1)

0xa92: @@ GetPFPosition(Stack[-3])
0xa93: Pop(0)
0xa94: @ CanReachByPF(Stack[-2], Stack[-3])
0xa95: Pop(0)
0xa96: Pop(0); Push((bool) Stack[-2] == 0)
0xa97: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xa98: PushEmpty(bool, object, float, float, bool, bool)
0xa99: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xa9a: Stack[-4] = Stack[-17]
0xa9b: Stack[-3] = (float) 3000.0
0xa9c: Stack[-2] = (bool) 1
0xa9d: Stack[-1] = (bool) 0
0xa9e: Push(-6, 3); TaskCall(8)
0xa9f: Call2 0xcde

0xaa0: Pop(-6, 3); TaskReturn
0xaa1: Pop(5)
0xaa2: Pop(1); Push((bool) Stack[-1] == 0)
0xaa3: IF (Stack[-1] == 0) GOTO 0xaa5; Pop(1)

0xaa4: GOTO 0xb15

0xaa5: Stack[-7] = (bool) 0
0xaa6: GOTO 0xa69

0xaa7: Pop(0); Push((bool) Stack[-7] == 0)
0xaa8: IF (Stack[-1] == 0) GOTO 0xac0; Pop(1)

0xaa9: PushEmpty(object)
0xaaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaab: Call2 0xf14

0xaac: Pop(1)
0xaad: Push("all")
0xaae: Push("attack_on")
0xaaf: @ PlayAnimation(Stack[-2], Stack[-1])
0xab0: Pop(2)
0xab1: @ WaitForAnimEnd()
0xab2: Pop(0)
0xab3: PushEmpty()
0xab4: Call2 0xcc3

0xab5: Pop(0)
0xab6: @ StopAsync()
0xab7: Pop(0)
0xab8: Stack[-7] = (bool) 1
0xab9: PushEmpty(bool, object)
0xaba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xabb: Call2 0xe7e

0xabc: Pop(1)
0xabd: Pop(1); Push((bool) Stack[-1] == 0)
0xabe: IF (Stack[-1] == 0) GOTO 0xac0; Pop(1)

0xabf: GOTO 0xb15

0xac0: @ rand(Stack[-1])
0xac1: Pop(0)
0xac2: PushEmpty(bool)
0xac3: Stack[-1] = (bool) 1
0xac4: Push((float)0.25)
0xac5: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xac6: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xac7: PushEmpty(bool)
0xac8: Call2 0xc98

0xac9: Pop(0)
0xaca: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xacb: Stack[-1] = (bool) 0
0xacc: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xacd: @ Face(Stack[-0])
0xace: Pop(0)
0xacf: PushEmpty()
0xad0: Call2 0xcca

0xad1: Pop(0)
0xad2: Push("all")
0xad3: Push("attack_stay")
0xad4: @ PlayAnimation(Stack[-2], Stack[-1])
0xad5: Pop(2)
0xad6: PushEmpty(bool, float)
0xad7: Stack[-1] = Stack[-25]
0xad8: Call2 0xc14

0xad9: Pop(2)
0xada: @ StopAsync()
0xadb: Pop(0)
0xadc: GOTO 0xb0b

0xadd: @ Face(Stack[-0])
0xade: Pop(0)
0xadf: Push("all")
0xae0: Push("fjump")
0xae1: @ PlayAnimation(Stack[-2], Stack[-1])
0xae2: Pop(2)
0xae3: @ WaitForAnimEnd()
0xae4: Pop(0)
0xae5: PushEmpty()
0xae6: Call2 0xcc3

0xae7: Pop(0)
0xae8: Push(CVector(0.0, 0.0, 0.0))
0xae9: @ SetSpeed(Stack[-1])
0xaea: Pop(1)
0xaeb: @ Stop()
0xaec: Pop(0)
0xaed: @ StopAsync()
0xaee: Pop(0)
0xaef: PushEmpty(bool)
0xaf0: Call2 0xc98

0xaf1: Pop(0)
0xaf2: Pop(1); Push((bool) Stack[-1] == 0)
0xaf3: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xaf4: PushEmpty(bool, object)
0xaf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaf6: Call2 0xe7e

0xaf7: Pop(1)
0xaf8: Pop(1); Push((bool) Stack[-1] == 0)
0xaf9: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xafa: GOTO 0xb15

0xafb: @@ GetPFPosition(Stack[-10])
0xafc: Pop(0)
0xafd: @ GetPFPosition(Stack[-9])
0xafe: Pop(0)
0xaff: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xb00: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xb01: Pop(0); Push(Stack[-23] * Stack[-23]);
0xb02: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xb03: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xb04: PushEmpty(bool, float)
0xb05: Stack[-1] = Stack[-25]
0xb06: Call2 0xb70

0xb07: Pop(1)
0xb08: Pop(1); Push((bool) Stack[-1] == 0)
0xb09: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xb0a: GOTO 0xb15

0xb0b: GOTO 0xb14

0xb0c: PushEmpty(bool, float)
0xb0d: Stack[-1] = Stack[-25]
0xb0e: Call2 0xb70

0xb0f: Pop(1)
0xb10: Pop(1); Push((bool) Stack[-1] == 0)
0xb11: IF (Stack[-1] == 0) GOTO 0xb13; Pop(1)

0xb12: GOTO 0xb15

0xb13: Stack[-7] = (bool) 1
0xb14: GOTO 0xa69

0xb15: @ WaitForAnimEnd()
0xb16: Pop(0)
0xb17: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb18: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb19: Return(); Pop(22)

0xb1a: Push("all")
0xb1b: Push("attack_off")
0xb1c: @ PlayAnimation(Stack[-2], Stack[-1])
0xb1d: Pop(2)
0xb1e: @ WaitForAnimEnd()
0xb1f: Pop(0)
0xb20: Push(Stack[-8])
0xb21: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb22: Push((float)2.0)
0xb23: @ Sleep(Stack[-1])
0xb24: Pop(1)
0xb25: Return(); Pop(22)

0xb26: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0xb27: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xb28: Push("all")
0xb29: Push("attack_begin")
0xb2a: Push((int) 1)
0xb2b: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0xb2c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb2d: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xb2e: Pop(2)
0xb2f: Pop(0); Push((bool) Stack[-3] == 0)
0xb30: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb31: GOTO 0xb35

0xb32: Push((int) 1)
0xb33: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xb34: GOTO 0xb28

0xb35: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xb36: Push("attack")
0xb37: Push((int) 1)
0xb38: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xb39: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb3a: @ IsExisting3DSound(Stack[-3], Stack[-1])
0xb3b: Pop(1)
0xb3c: Pop(0); Push((bool) Stack[-2] == 0)
0xb3d: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3e: GOTO 0xb42

0xb3f: Push((int) 1)
0xb40: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xb41: GOTO 0xb36

0xb42: Push("all")
0xb43: Push("bjump")
0xb44: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xb45: Pop(2)
0xb46: Push(CvectorIndex(Stack[-1], 2))
0xb47: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0xb48: Return(); Pop(6)

0xb49: PushEmpty(object, float, float, object, float, float)
0xb4a: Push((float)0.9)
0xb4b: Pop(1); Push(Stack[-9] * Stack[-1]);
0xb4c: @ GetVictim(Stack[-1], Stack[-4])
0xb4d: Pop(1)
0xb4e: @ ReportAttack(Stack[-0])
0xb4f: Pop(0)
0xb50: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xb51: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb52: PushEmpty(float, object, int)
0xb53: Stack[-2] = Stack[-6]
0xb54: Stack[-1] = Stack[-10]
0xb55: Call2 0xa3b

0xb56: Stack[-5] = Stack[-3]
0xb57: Pop(3)
0xb58: PushEmpty(float, object, float, int)
0xb59: Stack[-3] = Stack[-7]
0xb5a: Stack[-2] = Stack[-6]
0xb5b: PushEmpty(int, object, int)
0xb5c: Stack[-2] = Stack[-10]
0xb5d: Stack[-1] = Stack[-14]
0xb5e: Call2 0xa3e

0xb5f: Stack[-4] = Stack[-3]
0xb60: Pop(3)
0xb61: Call2 0xe0c

0xb62: Stack[-5] = Stack[-4]
0xb63: Pop(4)
0xb64: PushEmpty(int)
0xb65: Call2 0xcc8

0xb66: Pop(0)
0xb67: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0xb68: Pop(1)
0xb69: PushEmpty(object, float)
0xb6a: Stack[-2] = Stack[-5]
0xb6b: Stack[-1] = Stack[-3]
0xb6c: Call2 0xccf

0xb6d: Pop(2)
0xb6e: Return(); Pop(6)

0xb6f: Stack[-3] = 0
0xb70: PushEmpty(int, bool, int, string, int, bool, int, string)
0xb71: PushEmpty()
0xb72: Call2 0xcc3

0xb73: Pop(0)
0xb74: @ irand(Stack[-4], Stack[-1])
0xb75: Pop(0)
0xb76: Push((int) 1)
0xb77: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb78: @ Face(Stack[-0])
0xb79: Pop(0)
0xb7a: Push((bool) 1)
0xb7b: @ SetAttackState(Stack[-1])
0xb7c: Pop(1)
0xb7d: PushEmpty()
0xb7e: Call2 0x1075

0xb7f: Pop(0)
0xb80: Push("all")
0xb81: Push("attack_begin")
0xb82: Pop(1); Push(Stack[-1] + Stack[-6]);
0xb83: @ PlayAnimation(Stack[-2], Stack[-1])
0xb84: Pop(2)
0xb85: @ WaitForAnimEnd()
0xb86: Pop(0)
0xb87: PushEmpty()
0xb88: Call2 0xca3

0xb89: Pop(0)
0xb8a: PushEmpty(bool, object)
0xb8b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8c: Call2 0xe7e

0xb8d: Pop(1)
0xb8e: Pop(1); Push((bool) Stack[-1] == 0)
0xb8f: IF (Stack[-1] == 0) GOTO 0xb94; Pop(1)

0xb90: @ StopAsync()
0xb91: Pop(0)
0xb92: Stack[-10] = (bool) 0
0xb93: Return(); Pop(8)

0xb94: PushEmpty(float, int)
0xb95: Stack[-2] = Stack[-11]
0xb96: Stack[-1] = Stack[-6]
0xb97: Call2 0xb49

0xb98: Pop(2)
0xb99: Push("all")
0xb9a: Push("attack_middle")
0xb9b: Pop(1); Push(Stack[-1] + Stack[-6]);
0xb9c: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xb9d: Pop(2)
0xb9e: Push(Stack[-3])
0xb9f: IF (Stack[-1] == 0) GOTO 0xbe5; Pop(1)

0xba0: PushEmpty()
0xba1: Call2 0x1075

0xba2: Pop(0)
0xba3: Push("all")
0xba4: Push("attack_middle")
0xba5: Pop(1); Push(Stack[-1] + Stack[-6]);
0xba6: @ PlayAnimation(Stack[-2], Stack[-1])
0xba7: Pop(2)
0xba8: @ WaitForAnimEnd()
0xba9: Pop(0)
0xbaa: PushEmpty()
0xbab: Call2 0xcc3

0xbac: Pop(0)
0xbad: PushEmpty(bool, object)
0xbae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbaf: Call2 0xe7e

0xbb0: Pop(1)
0xbb1: Pop(1); Push((bool) Stack[-1] == 0)
0xbb2: IF (Stack[-1] == 0) GOTO 0xbb7; Pop(1)

0xbb3: @ StopAsync()
0xbb4: Pop(0)
0xbb5: Stack[-10] = (bool) 0
0xbb6: Return(); Pop(8)

0xbb7: PushEmpty(float, int)
0xbb8: Stack[-2] = Stack[-11]
0xbb9: Stack[-1] = Stack[-6]
0xbba: Call2 0xb49

0xbbb: Pop(2)
0xbbc: Stack[-2] = (int) 1
0xbbd: Push("attack_middle")
0xbbe: Pop(1); Push(Stack[-1] + Stack[-5]);
0xbbf: Push("_")
0xbc0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbc1: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0xbc2: Push("all")
0xbc3: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0xbc4: Pop(1)
0xbc5: Pop(0); Push((bool) Stack[-3] == 0)
0xbc6: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xbc7: GOTO 0xbe5

0xbc8: PushEmpty()
0xbc9: Call2 0x1075

0xbca: Pop(0)
0xbcb: Push("all")
0xbcc: @ PlayAnimation(Stack[-1], Stack[-2])
0xbcd: Pop(1)
0xbce: @ WaitForAnimEnd()
0xbcf: Pop(0)
0xbd0: PushEmpty()
0xbd1: Call2 0xcc3

0xbd2: Pop(0)
0xbd3: PushEmpty(bool, object)
0xbd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd5: Call2 0xe7e

0xbd6: Pop(1)
0xbd7: Pop(1); Push((bool) Stack[-1] == 0)
0xbd8: IF (Stack[-1] == 0) GOTO 0xbdd; Pop(1)

0xbd9: @ StopAsync()
0xbda: Pop(0)
0xbdb: Stack[-10] = (bool) 0
0xbdc: Return(); Pop(8)

0xbdd: PushEmpty(float, int)
0xbde: Stack[-2] = Stack[-11]
0xbdf: Stack[-1] = Stack[-6]
0xbe0: Call2 0xb49

0xbe1: Pop(2)
0xbe2: Push((int) 1)
0xbe3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xbe4: GOTO 0xbbd

0xbe5: Push((bool) 0)
0xbe6: @ SetAttackState(Stack[-1])
0xbe7: Pop(1)
0xbe8: Push("all")
0xbe9: Push("attack_end")
0xbea: Pop(1); Push(Stack[-1] + Stack[-6]);
0xbeb: @ PlayAnimation(Stack[-2], Stack[-1])
0xbec: Pop(2)
0xbed: PushEmpty(bool)
0xbee: Call2 0xcd1

0xbef: Pop(0)
0xbf0: IF (Stack[-1] == 0) GOTO 0xbf7; Pop(1)

0xbf1: PushEmpty(bool, float)
0xbf2: Stack[-1] = (float) 0.75
0xbf3: Call2 0xbf9

0xbf4: Pop(2)
0xbf5: @ StopAsync()
0xbf6: Pop(0)
0xbf7: Stack[-10] = (bool) 1
0xbf8: Return(); Pop(8)

0xbf9: PushEmpty(float, bool, float, bool)
0xbfa: @ rand(Stack[-2])
0xbfb: Pop(0)
0xbfc: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0xbfd: IF (Stack[-1] == 0) GOTO 0xc0d; Pop(1)

0xbfe: @ IsAnimationPlaying(Stack[-1])
0xbff: Pop(0)
0xc00: Pop(0); Push((bool) Stack[-1] == 0)
0xc01: IF (Stack[-1] == 0) GOTO 0xc03; Pop(1)

0xc02: GOTO 0xc0c

0xc03: PushEmpty(bool)
0xc04: Call2 0xc5b

0xc05: Pop(0)
0xc06: IF (Stack[-1] == 0) GOTO 0xc09; Pop(1)

0xc07: Stack[-6] = (bool) 1
0xc08: Return(); Pop(4)

0xc09: @ sync()
0xc0a: Pop(0)
0xc0b: GOTO 0xbfe

0xc0c: GOTO 0xc12

0xc0d: @ WaitForAnimEnd()
0xc0e: Pop(0)
0xc0f: PushEmpty()
0xc10: Call2 0xcc3

0xc11: Pop(0)
0xc12: Stack[-6] = (bool) 0
0xc13: Return(); Pop(4)

0xc14: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0xc15: @ IsAnimationPlaying(Stack[-5])
0xc16: Pop(0)
0xc17: Pop(0); Push((bool) Stack[-5] == 0)
0xc18: IF (Stack[-1] == 0) GOTO 0xc1a; Pop(1)

0xc19: GOTO 0xc3a

0xc1a: PushEmpty(bool)
0xc1b: Call2 0xc5b

0xc1c: Pop(0)
0xc1d: IF (Stack[-1] == 0) GOTO 0xc20; Pop(1)

0xc1e: Stack[-12] = (bool) 1
0xc1f: Return(); Pop(10)

0xc20: PushEmpty(bool, object)
0xc21: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc22: Call2 0xe7e

0xc23: Pop(1)
0xc24: Pop(1); Push((bool) Stack[-1] == 0)
0xc25: IF (Stack[-1] == 0) GOTO 0xc28; Pop(1)

0xc26: Stack[-12] = (bool) 0
0xc27: Return(); Pop(10)

0xc28: @@ GetPFPosition(Stack[-4])
0xc29: Pop(0)
0xc2a: @ GetPFPosition(Stack[-3])
0xc2b: Pop(0)
0xc2c: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xc2d: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xc2e: Pop(0); Push(Stack[-11] * Stack[-11]);
0xc2f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc30: IF (Stack[-1] == 0) GOTO 0xc37; Pop(1)

0xc31: PushEmpty(bool, float)
0xc32: Stack[-1] = Stack[-13]
0xc33: Call2 0xb70

0xc34: Pop(2)
0xc35: Stack[-12] = (bool) 1
0xc36: Return(); Pop(10)

0xc37: @ sync()
0xc38: Pop(0)
0xc39: GOTO 0xc15

0xc3a: PushEmpty()
0xc3b: Call2 0xcc3

0xc3c: Pop(0)
0xc3d: Stack[-12] = (bool) 0
0xc3e: Return(); Pop(10)

0xc3f: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0xc40: PushEmpty(bool, object)
0xc41: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc42: Call2 0xe7e

0xc43: Pop(1)
0xc44: Pop(1); Push((bool) Stack[-1] == 0)
0xc45: IF (Stack[-1] == 0) GOTO 0xc48; Pop(1)

0xc46: Stack[-11] = (bool) 0
0xc47: Return(); Pop(10)

0xc48: PushEmpty(bool)
0xc49: Call2 0xc98

0xc4a: Pop(0)
0xc4b: IF (Stack[-1] == 0) GOTO 0xc59; Pop(1)

0xc4c: @@ GetPFPosition(Stack[-5])
0xc4d: Pop(0)
0xc4e: @ GetPFPosition(Stack[-4])
0xc4f: Pop(0)
0xc50: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xc51: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xc52: @@ GetAttackDistance(Stack[-1])
0xc53: Pop(0)
0xc54: Push((int) 50)
0xc55: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xc56: Pop(0); Push(Stack[-1] * Stack[-1]);
0xc57: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0xc58: Return(); Pop(10)

0xc59: Stack[-11] = (bool) 0
0xc5a: Return(); Pop(10)

0xc5b: PushEmpty(bool)
0xc5c: Stack[-1] = (bool) 0
0xc5d: PushEmpty(bool)
0xc5e: Call2 0xc3f

0xc5f: Pop(0)
0xc60: IF (Stack[-1] == 0) GOTO 0xc66; Pop(1)

0xc61: PushEmpty(bool)
0xc62: Call2 0xc6b

0xc63: Pop(0)
0xc64: IF (Stack[-1] == 0) GOTO 0xc66; Pop(1)

0xc65: Stack[-1] = (bool) 1
0xc66: IF (Stack[-1] == 0) GOTO 0xc69; Pop(1)

0xc67: Stack[-1] = (bool) 1
0xc68: Return(); Pop(0)

0xc69: Stack[-1] = (bool) 0
0xc6a: Return(); Pop(0)

0xc6b: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0xc6c: @ GetScene(Stack[-5])
0xc6d: Pop(0)
0xc6e: Stack[-4] = (bool) 0
0xc6f: PushEmpty(cvector, object)
0xc70: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc71: Call2 0xdec

0xc72: Pop(1)
0xc73: Pop(1); Push(( -Stack[-1])
0xc74: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0xc75: Pop(1)
0xc76: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0xc77: IF (Stack[-1] == 0) GOTO 0xc79; Pop(1)

0xc78: GOTO 0xc95

0xc79: @ Face(Stack[-0])
0xc7a: Pop(0)
0xc7b: Push("all")
0xc7c: Push("bjump")
0xc7d: @ PlayAnimation(Stack[-2], Stack[-1])
0xc7e: Pop(2)
0xc7f: @@ GetPFPosition(Stack[-2])
0xc80: Pop(0)
0xc81: @ GetPFPosition(Stack[-1])
0xc82: Pop(0)
0xc83: @ WaitForAnimEnd()
0xc84: Pop(0)
0xc85: PushEmpty()
0xc86: Call2 0xcc3

0xc87: Pop(0)
0xc88: @ StopAsync()
0xc89: Pop(0)
0xc8a: Push(CVector(0.0, 0.0, 0.0))
0xc8b: @ SetSpeed(Stack[-1])
0xc8c: Pop(1)
0xc8d: Stack[-4] = (bool) 1
0xc8e: PushEmpty(bool)
0xc8f: Call2 0xc3f

0xc90: Pop(0)
0xc91: Pop(1); Push((bool) Stack[-1] == 0)
0xc92: IF (Stack[-1] == 0) GOTO 0xc94; Pop(1)

0xc93: GOTO 0xc95

0xc94: GOTO 0xc6f

0xc95: Stack[-11] = Stack[-4]
0xc96: Return(); Pop(10)

0xc97: Stack[-5] = 0
0xc98: PushEmpty(bool, bool)
0xc99: Push("IsAttacking")
0xc9a: Push((int) 1)
0xc9b: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0xc9c: IF (Stack[-1] == 0) GOTO 0xca1; Pop(1)

0xc9d: @@ IsAttacking(Stack[-1])
0xc9e: Pop(0)
0xc9f: Stack[-3] = Stack[-1]
0xca0: Return(); Pop(2)

0xca1: Stack[-3] = (bool) 0
0xca2: Return(); Pop(2)

0xca3: PushEmpty(float, int, float, int)
0xca4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xca5: IF (Stack[-1] == 0) GOTO 0xca7; Pop(1)

0xca6: Return(); Pop(4)

0xca7: Push( Stack[5 + Tasks[-1].StackPointer] )
0xca8: IF (Stack[-1] == 0) GOTO 0xcaf; Pop(1)

0xca9: Push((int) -1)
0xcaa: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xcab: Push((int) 0)
0xcac: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0xcad: IF (Stack[-1] == 0) GOTO 0xcaf; Pop(1)

0xcae: Return(); Pop(4)

0xcaf: @ rand(Stack[-2])
0xcb0: Pop(0)
0xcb1: PushEmpty(float)
0xcb2: Call2 0xcd5

0xcb3: Pop(0)
0xcb4: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xcb5: IF (Stack[-1] == 0) GOTO 0xcc2; Pop(1)

0xcb6: @ irand(Stack[-1], Stack[-2])
0xcb7: Pop(0)
0xcb8: Push((int) 1)
0xcb9: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xcba: Push("attack")
0xcbb: Pop(1); Push(Stack[-1] + Stack[-2]);
0xcbc: @ Speak(Stack[-1])
0xcbd: Pop(1)
0xcbe: PushEmpty(int)
0xcbf: Call2 0xcd3

0xcc0: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0xcc1: Pop(1)
0xcc2: Return(); Pop(4)

0xcc3: PushEmpty(object)
0xcc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc5: Call2 0x106c

0xcc6: Pop(1)
0xcc7: Return(); Pop(0)

0xcc8: Stack[-1] = (int) 0
0xcc9: Return(); Pop(0)

0xcca: PushEmpty(string)
0xccb: Stack[-1] = "attack_stay"
0xccc: Call2 0xfe5

0xccd: Pop(1)
0xcce: Return(); Pop(0)

0xccf: PushEmpty()
0xcd0: Return(); Pop(0)

0xcd1: Stack[-1] = (bool) 1
0xcd2: Return(); Pop(0)

0xcd3: Stack[-1] = (int) 1
0xcd4: Return(); Pop(0)

0xcd5: Stack[-1] = (float) 0.5
0xcd6: Return(); Pop(0)

0xcd7: PushEmpty()
0xcd8: Call2 0xd1d

0xcd9: Pop(0)
0xcda: PushEmpty()
0xcdb: Call2 0x1373

0xcdc: Pop(0)
0xcdd: Return(); Pop(0)

0xcde: PushEmpty(bool, bool, bool, bool)
0xcdf: PushEmpty(object)
0xce0: Stack[-1] = Stack[-10]
0xce1: Call2 0x106c

0xce2: Pop(1)
0xce3: Push((int) 1)
0xce4: Push((int) 5)
0xce5: @ SetTimer(Stack[-2], Stack[-1])
0xce6: Pop(2)
0xce7: @ CanSee(Stack[-2], Stack[-9])
0xce8: Pop(0)
0xce9: Push(Stack[-2])
0xcea: IF (Stack[-1] == 0) GOTO 0xcf1; Pop(1)

0xceb: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xcec: PushEmpty(object)
0xced: Stack[-1] = Stack[-10]
0xcee: Call2 0xfd3

0xcef: Pop(1)
0xcf0: GOTO 0xcf2

0xcf1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xcf2: PushEmpty(bool, object)
0xcf3: Stack[-1] = Stack[-11]
0xcf4: Call2 0xdfb

0xcf5: Pop(1)
0xcf6: IF (Stack[-1] == 0) GOTO 0xcfc; Pop(1)

0xcf7: PushEmpty(object)
0xcf8: Call2 0x100e

0xcf9: Pop(0)
0xcfa: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0xcfb: Pop(1)
0xcfc: PushEmpty(bool, object, float, float, bool, bool)
0xcfd: Stack[-5] = Stack[-15]
0xcfe: Stack[-4] = Stack[-14]
0xcff: Stack[-3] = Stack[-13]
0xd00: Stack[-2] = Stack[-12]
0xd01: Stack[-1] = Stack[-11]
0xd02: Call2 0xd47

0xd03: Stack[-7] = Stack[-6]
0xd04: Pop(6)
0xd05: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd06: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xd07: Push("head")
0xd08: @ UnlookAsync(Stack[-1])
0xd09: Pop(1)
0xd0a: Push((int) 1)
0xd0b: @ KillTimer(Stack[-1])
0xd0c: Pop(1)
0xd0d: Stack[-10] = Stack[-1]
0xd0e: Return(); Pop(4)

0xd0f: PushEmpty()
0xd10: Push((int) 1)
0xd11: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd12: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd13: PushEmpty(object)
0xd14: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd15: Call2 0x106c

0xd16: Pop(1)
0xd17: GOTO 0xd1c

0xd18: PushEmpty(int)
0xd19: Stack[-1] = Stack[-2]
0xd1a: Call2 0xdad

0xd1b: Pop(1)
0xd1c: Return(); Pop(0)

0xd1d: Push((int) 1)
0xd1e: @ KillTimer(Stack[-1])
0xd1f: Pop(1)
0xd20: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd21: IF (Stack[-1] == 0) GOTO 0xd26; Pop(1)

0xd22: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd23: Push("head")
0xd24: @ UnlookAsync(Stack[-1])
0xd25: Pop(1)
0xd26: PushEmpty()
0xd27: Call2 0xdc3

0xd28: Pop(0)
0xd29: Return(); Pop(0)

0xd2a: PushEmpty()
0xd2b: PushEmpty(bool)
0xd2c: Stack[-1] = (bool) 0
0xd2d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xd2e: IF (Stack[-1] == 0) GOTO 0xd32; Pop(1)

0xd2f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xd30: IF (Stack[-1] == 0) GOTO 0xd32; Pop(1)

0xd31: Stack[-1] = (bool) 1
0xd32: IF (Stack[-1] == 0) GOTO 0xd38; Pop(1)

0xd33: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd34: PushEmpty(object)
0xd35: Stack[-1] = Stack[-2]
0xd36: Call2 0xfd3

0xd37: Pop(1)
0xd38: Return(); Pop(0)

0xd39: PushEmpty()
0xd3a: PushEmpty(bool)
0xd3b: Stack[-1] = (bool) 0
0xd3c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xd3d: IF (Stack[-1] == 0) GOTO 0xd41; Pop(1)

0xd3e: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd3f: IF (Stack[-1] == 0) GOTO 0xd41; Pop(1)

0xd40: Stack[-1] = (bool) 1
0xd41: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd42: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd43: Push("head")
0xd44: @ UnlookAsync(Stack[-1])
0xd45: Pop(1)
0xd46: Return(); Pop(0)

0xd47: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0xd48: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xd49: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0xd4a: Stack[-7] = Stack[-17]
0xd4b: PushEmpty(bool, object)
0xd4c: Stack[-1] = Stack[-23]
0xd4d: Call2 0xdd3

0xd4e: Pop(1)
0xd4f: Pop(1); Push((bool) Stack[-1] == 0)
0xd50: IF (Stack[-1] == 0) GOTO 0xd53; Pop(1)

0xd51: Stack[-22] = (bool) 0
0xd52: Return(); Pop(16)

0xd53: @@ GetPosition(Stack[-5])
0xd54: Pop(0)
0xd55: @ GetPosition(Stack[-4])
0xd56: Pop(0)
0xd57: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xd58: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xd59: PushEmpty(bool)
0xd5a: Stack[-1] = (bool) 0
0xd5b: Push((int) 0)
0xd5c: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0xd5d: IF (Stack[-1] == 0) GOTO 0xd62; Pop(1)

0xd5e: Pop(0); Push(Stack[-20] * Stack[-20]);
0xd5f: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xd60: IF (Stack[-1] == 0) GOTO 0xd62; Pop(1)

0xd61: Stack[-1] = (bool) 1
0xd62: IF (Stack[-1] == 0) GOTO 0xd67; Pop(1)

0xd63: @ Stop()
0xd64: Pop(0)
0xd65: Stack[-22] = (bool) 0
0xd66: Return(); Pop(16)

0xd67: Pop(0); Push(Stack[-20] * Stack[-20]);
0xd68: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xd69: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xd6a: @@ GetPFPosition(Stack[-5])
0xd6b: Pop(0)
0xd6c: @ FindPathTo(Stack[-1], Stack[-5])
0xd6d: Pop(0)
0xd6e: Pop(0); Push(( Stack[-1] != 0 )
0xd6f: IF (Stack[-1] == 0) GOTO 0xd72; Pop(1)

0xd70: Stack[-6] = Stack[-1]
0xd71: Stack[-1] = 0
0xd72: Pop(0); Push(( Stack[-6] != 0 )
0xd73: IF (Stack[-1] == 0) GOTO 0xd93; Pop(1)

0xd74: Push(Stack[-7])
0xd75: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd76: Stack[-7] = (bool) 0
0xd77: @ RotatePath(Stack[-6], Stack[-8])
0xd78: Pop(0)
0xd79: Pop(0); Push((bool) Stack[-8] == 0)
0xd7a: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd7b: GOTO 0xdab

0xd7c: Push((int) 0)
0xd7d: Push((float)0.3)
0xd7e: @ SetTimer(Stack[-2], Stack[-1])
0xd7f: Pop(2)
0xd80: PushEmpty(string)
0xd81: Call2 0xdda

0xd82: Pop(0)
0xd83: PushEmpty(string)
0xd84: Call2 0xddc

0xd85: Pop(0)
0xd86: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0xd87: Pop(2)
0xd88: Pop(0); Push((bool) Stack[-8] == 0)
0xd89: IF (Stack[-1] == 0) GOTO 0xd91; Pop(1)

0xd8a: Push( Stack[0 + Tasks[-1].StackPointer] )
0xd8b: IF (Stack[-1] == 0) GOTO 0xd8f; Pop(1)

0xd8c: Stack[-6] = 0
0xd8d: GOTO 0xdab

0xd8e: GOTO 0xd90

0xd8f: GOTO 0xdaa

0xd90: GOTO 0xd92

0xd91: Stack[-6] = 0
0xd92: GOTO 0xda3

0xd93: Push((int) 0)
0xd94: @ KillTimer(Stack[-1])
0xd95: Pop(1)
0xd96: Push((float)0.5)
0xd97: @ Sleep(Stack[-1], Stack[-9])
0xd98: Pop(1)
0xd99: Pop(0); Push((bool) Stack[-8] == 0)
0xd9a: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd9b: Push( Stack[0 + Tasks[-1].StackPointer] )
0xd9c: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd9d: Stack[-6] = 0
0xd9e: GOTO 0xdab

0xd9f: Push((int) 0)
0xda0: Push((float)0.3)
0xda1: @ SetTimer(Stack[-2], Stack[-1])
0xda2: Pop(2)
0xda3: Stack[-1] = 0
0xda4: GOTO 0xda9

0xda5: Push((int) 0)
0xda6: @ KillTimer(Stack[-1])
0xda7: Pop(1)
0xda8: GOTO 0xdab

0xda9: Stack[-6] = 0
0xdaa: GOTO 0xd4b

0xdab: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xdac: Return(); Pop(16)

0xdad: PushEmpty()
0xdae: Push((int) 0)
0xdaf: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xdb0: IF (Stack[-1] == 0) GOTO 0xdb2; Pop(1)

0xdb1: Return(); Pop(0)

0xdb2: PushEmpty(bool, object)
0xdb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb4: Call2 0xdd3

0xdb5: Pop(1)
0xdb6: Pop(1); Push((bool) Stack[-1] == 0)
0xdb7: IF (Stack[-1] == 0) GOTO 0xdb9; Pop(1)

0xdb8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xdb9: Push((int) 0)
0xdba: @ KillTimer(Stack[-1])
0xdbb: Pop(1)
0xdbc: @ Stop()
0xdbd: Pop(0)
0xdbe: Return(); Pop(0)

0xdbf: PushEmpty()
0xdc0: @ RequestClearPath(Stack[-1])
0xdc1: Pop(0)
0xdc2: Return(); Pop(0)

0xdc3: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xdc4: Push((int) 0)
0xdc5: @ KillTimer(Stack[-1])
0xdc6: Pop(1)
0xdc7: @ Stop()
0xdc8: Pop(0)
0xdc9: Return(); Pop(0)

0xdca: PushEmpty()
0xdcb: PushEmpty()
0xdcc: Call2 0xd1d

0xdcd: Pop(0)
0xdce: PushEmpty(object)
0xdcf: Stack[-1] = Stack[-2]
0xdd0: Call2 0x11ef

0xdd1: Pop(1)
0xdd2: Return(); Pop(0)

0xdd3: PushEmpty()
0xdd4: PushEmpty(bool, object)
0xdd5: Stack[-1] = Stack[-3]
0xdd6: Call2 0xe7e

0xdd7: Stack[-4] = Stack[-2]
0xdd8: Pop(2)
0xdd9: Return(); Pop(0)

0xdda: Stack[-1] = "walk"
0xddb: Return(); Pop(0)

0xddc: Stack[-1] = "run"
0xddd: Return(); Pop(0)

0xdde: PushEmpty()
0xddf: Push((int) 2)
0xde0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xde1: IF (Stack[-1] == 0) GOTO 0xde5; Pop(1)

0xde2: Stack[-2] = "fire"
0xde3: Return(); Pop(0)

0xde4: GOTO 0xdea

0xde5: Push((int) 1)
0xde6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xde7: IF (Stack[-1] == 0) GOTO 0xdea; Pop(1)

0xde8: Stack[-2] = "bullet"
0xde9: Return(); Pop(0)

0xdea: Stack[-2] = "phys"
0xdeb: Return(); Pop(0)

0xdec: PushEmpty(cvector, cvector, cvector, cvector)
0xded: @ GetPosition(Stack[-2])
0xdee: Pop(0)
0xdef: @@ GetPosition(Stack[-1])
0xdf0: Pop(0)
0xdf1: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xdf2: Return(); Pop(4)

0xdf3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xdf4: @ GetPosition(Stack[-3])
0xdf5: Pop(0)
0xdf6: @@ GetPosition(Stack[-2])
0xdf7: Pop(0)
0xdf8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xdf9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xdfa: Return(); Pop(6)

0xdfb: PushEmpty(bool, bool)
0xdfc: @ IsPlayerActor(Stack[-3], Stack[-1])
0xdfd: Pop(0)
0xdfe: Stack[-4] = Stack[-1]
0xdff: Return(); Pop(2)

0xe00: PushEmpty(bool, bool)
0xe01: Push("HasProperty")
0xe02: Push((int) 2)
0xe03: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xe04: Pop(1); Push((bool) Stack[-1] == 0)
0xe05: IF (Stack[-1] == 0) GOTO 0xe08; Pop(1)

0xe06: Stack[-5] = (bool) 0
0xe07: Return(); Pop(2)

0xe08: @@ HasProperty(Stack[-3], Stack[-1])
0xe09: Pop(0)
0xe0a: Stack[-5] = Stack[-1]
0xe0b: Return(); Pop(2)

0xe0c: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xe0d: PushEmpty(bool, object, string)
0xe0e: Stack[-2] = Stack[-18]
0xe0f: Stack[-1] = "health"
0xe10: Call2 0xe00

0xe11: Pop(2)
0xe12: Pop(1); Push((bool) Stack[-1] == 0)
0xe13: IF (Stack[-1] == 0) GOTO 0xe16; Pop(1)

0xe14: Stack[-16] = (float) 0.0
0xe15: Return(); Pop(12)

0xe16: PushEmpty(bool, object, string)
0xe17: Stack[-2] = Stack[-18]
0xe18: Stack[-1] = "armor"
0xe19: Call2 0xe00

0xe1a: Pop(2)
0xe1b: Pop(1); Push((bool) Stack[-1] == 0)
0xe1c: IF (Stack[-1] == 0) GOTO 0xe1f; Pop(1)

0xe1d: Stack[-6] = (int) 0
0xe1e: GOTO 0xe22

0xe1f: Push("armor")
0xe20: @@ GetProperty(Stack[-1], Stack[-7])
0xe21: Pop(1)
0xe22: Push("armor_")
0xe23: PushEmpty(string, int)
0xe24: Stack[-1] = Stack[-16]
0xe25: Call2 0xdde

0xe26: Pop(1)
0xe27: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xe28: PushEmpty(bool, object, string)
0xe29: Stack[-2] = Stack[-18]
0xe2a: Stack[-1] = Stack[-8]
0xe2b: Call2 0xe00

0xe2c: Pop(2)
0xe2d: Pop(1); Push((bool) Stack[-1] == 0)
0xe2e: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe2f: Stack[-4] = (int) 0
0xe30: GOTO 0xe33

0xe31: @@ GetProperty(Stack[-5], Stack[-4])
0xe32: Pop(0)
0xe33: PushEmpty(float, float, float)
0xe34: Pop(0); Push(Stack[-9] + Stack[-7]);
0xe35: Push((float)100.0)
0xe36: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xe37: Stack[-1] = (int) 1
0xe38: Call2 0x101e

0xe39: Stack[-6] = Stack[-3]
0xe3a: Pop(3)
0xe3b: Push("health")
0xe3c: @@ GetProperty(Stack[-1], Stack[-3])
0xe3d: Pop(1)
0xe3e: Push((int) 1)
0xe3f: Pop(1); Push(Stack[-1] - Stack[-4]);
0xe40: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xe41: Push("health")
0xe42: PushEmpty(float, float, float, float)
0xe43: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xe44: Stack[-2] = (int) 0
0xe45: Stack[-1] = (int) 1
0xe46: Call2 0x1025

0xe47: Pop(3)
0xe48: @@ SetProperty(Stack[-2], Stack[-1])
0xe49: Pop(2)
0xe4a: PushEmpty(bool, object)
0xe4b: Stack[-1] = Stack[-17]
0xe4c: Call2 0xdfb

0xe4d: Pop(1)
0xe4e: IF (Stack[-1] == 0) GOTO 0xe53; Pop(1)

0xe4f: PushEmpty(float)
0xe50: Stack[-1] = -Stack[-2]; Pop(0);
0xe51: Call2 0x1059

0xe52: Pop(1)
0xe53: Stack[-16] = Stack[-1]
0xe54: Return(); Pop(12)

0xe55: PushEmpty(bool, bool)
0xe56: @@ IsDead(Stack[-1])
0xe57: Pop(0)
0xe58: Stack[-4] = Stack[-1]
0xe59: Return(); Pop(2)

0xe5a: PushEmpty(object, object, object, object)
0xe5b: Pop(0); Push((bool) Stack[-5] == 0)
0xe5c: IF (Stack[-1] == 0) GOTO 0xe5f; Pop(1)

0xe5d: Stack[-6] = (bool) 0
0xe5e: Return(); Pop(4)

0xe5f: PushEmpty(bool)
0xe60: Stack[-1] = (bool) 0
0xe61: Push("IsDead")
0xe62: Push((int) 1)
0xe63: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xe64: IF (Stack[-1] == 0) GOTO 0xe6b; Pop(1)

0xe65: PushEmpty(bool, object)
0xe66: Stack[-1] = Stack[-8]
0xe67: Call2 0xe55

0xe68: Pop(1)
0xe69: IF (Stack[-1] == 0) GOTO 0xe6b; Pop(1)

0xe6a: Stack[-1] = (bool) 1
0xe6b: IF (Stack[-1] == 0) GOTO 0xe6e; Pop(1)

0xe6c: Stack[-6] = (bool) 0
0xe6d: Return(); Pop(4)

0xe6e: @ GetScene(Stack[-2])
0xe6f: Pop(0)
0xe70: Pop(0); Push((bool) Stack[-2] == 0)
0xe71: IF (Stack[-1] == 0) GOTO 0xe74; Pop(1)

0xe72: Stack[-6] = (bool) 0
0xe73: Return(); Pop(4)

0xe74: @@ GetScene(Stack[-1])
0xe75: Pop(0)
0xe76: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xe77: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe78: Stack[-6] = (bool) 0
0xe79: Return(); Pop(4)

0xe7a: Stack[-6] = (bool) 1
0xe7b: Return(); Pop(4)

0xe7c: Stack[-1] = 0
0xe7d: Stack[-2] = 0
0xe7e: PushEmpty(int, int)
0xe7f: PushEmpty(bool, object)
0xe80: Stack[-1] = Stack[-5]
0xe81: Call2 0xe5a

0xe82: Pop(1)
0xe83: Pop(1); Push((bool) Stack[-1] == 0)
0xe84: IF (Stack[-1] == 0) GOTO 0xe87; Pop(1)

0xe85: Stack[-4] = (bool) 0
0xe86: Return(); Pop(2)

0xe87: PushEmpty(bool, object, string)
0xe88: Stack[-2] = Stack[-6]
0xe89: Stack[-1] = "noaccess"
0xe8a: Call2 0xe00

0xe8b: Pop(2)
0xe8c: Pop(1); Push((bool) Stack[-1] == 0)
0xe8d: IF (Stack[-1] == 0) GOTO 0xe90; Pop(1)

0xe8e: Stack[-4] = (bool) 1
0xe8f: Return(); Pop(2)

0xe90: Push("noaccess")
0xe91: @@ GetProperty(Stack[-1], Stack[-2])
0xe92: Pop(1)
0xe93: Push((int) 0)
0xe94: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xe95: Return(); Pop(2)

0xe96: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xe97: Pop(0); Push((bool) Stack[-15] == 0)
0xe98: IF (Stack[-1] == 0) GOTO 0xe9a; Pop(1)

0xe99: Return(); Pop(14)

0xe9a: @ IsDead(Stack[-7])
0xe9b: Pop(0)
0xe9c: Push(Stack[-7])
0xe9d: IF (Stack[-1] == 0) GOTO 0xe9f; Pop(1)

0xe9e: Return(); Pop(14)

0xe9f: @ GetSecondaryAnimationType(Stack[-6])
0xea0: Pop(0)
0xea1: Push((int) 0)
0xea2: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xea3: IF (Stack[-1] == 0) GOTO 0xea5; Pop(1)

0xea4: Return(); Pop(14)

0xea5: @@ GetPosition(Stack[-5])
0xea6: Pop(0)
0xea7: @ GetPosition(Stack[-4])
0xea8: Pop(0)
0xea9: @ GetDirection(Stack[-3])
0xeaa: Pop(0)
0xeab: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xeac: Push(CvectorIndex(Stack[-2], 0))
0xead: Push(CvectorIndex(Stack[-4], 0))
0xeae: Pop(2); Push(Stack[-2] * Stack[-1]);
0xeaf: Push(CvectorIndex(Stack[-3], 2))
0xeb0: Push(CvectorIndex(Stack[-5], 2))
0xeb1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xeb2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xeb3: Push((int) 0)
0xeb4: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xeb5: IF (Stack[-1] == 0) GOTO 0xeb8; Pop(1)

0xeb6: Stack[-1] = "fhit"
0xeb7: GOTO 0xeb9

0xeb8: Stack[-1] = "bhit"
0xeb9: Push("hit_react")
0xeba: Push("1")
0xebb: Pop(1); Push(Stack[-3] + Stack[-1]);
0xebc: Push("2")
0xebd: Pop(1); Push(Stack[-4] + Stack[-1]);
0xebe: Push((int) -10)
0xebf: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xec0: Pop(4)
0xec1: Return(); Pop(14)

0xec2: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xec3: PushEmpty(bool)
0xec4: Stack[-1] = (bool) 0
0xec5: PushEmpty(bool)
0xec6: Stack[-1] = (bool) 0
0xec7: Push(Stack[-23])
0xec8: IF (Stack[-1] == 0) GOTO 0xecd; Pop(1)

0xec9: Push((int) 4)
0xeca: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xecb: IF (Stack[-1] == 0) GOTO 0xecd; Pop(1)

0xecc: Stack[-1] = (bool) 1
0xecd: IF (Stack[-1] == 0) GOTO 0xed2; Pop(1)

0xece: Push((int) 5)
0xecf: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xed0: IF (Stack[-1] == 0) GOTO 0xed2; Pop(1)

0xed1: Stack[-1] = (bool) 1
0xed2: IF (Stack[-1] == 0) GOTO 0xf01; Pop(1)

0xed3: PushEmpty(cvector, cvector)
0xed4: PushEmpty(cvector, object)
0xed5: Stack[-1] = Stack[-25]
0xed6: Call2 0xdec

0xed7: Stack[-3] = Stack[-2]
0xed8: Pop(2)
0xed9: Call2 0x1014

0xeda: Stack[-11] = Stack[-2]
0xedb: Pop(2)
0xedc: @ CreateVectorVector(Stack[-8])
0xedd: Pop(0)
0xede: Stack[-7] = (int) 1
0xedf: Push("hit")
0xee0: Pop(1); Push(Stack[-1] + Stack[-8]);
0xee1: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xee2: Pop(1)
0xee3: Pop(0); Push((bool) Stack[-6] == 0)
0xee4: IF (Stack[-1] == 0) GOTO 0xee6; Pop(1)

0xee5: GOTO 0xeef

0xee6: Pop(0); Push(Stack[-4] | Stack[-9]);
0xee7: Push((float)0.70711)
0xee8: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xee9: IF (Stack[-1] == 0) GOTO 0xeec; Pop(1)

0xeea: @@ add(Stack[-5])
0xeeb: Pop(0)
0xeec: Push((int) 1)
0xeed: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xeee: GOTO 0xedf

0xeef: @@ size(Stack[-3])
0xef0: Pop(0)
0xef1: Push(Stack[-3])
0xef2: IF (Stack[-1] == 0) GOTO 0xf00; Pop(1)

0xef3: @ irand(Stack[-2], Stack[-3])
0xef4: Pop(0)
0xef5: @@ get(Stack[-1], Stack[-2])
0xef6: Pop(0)
0xef7: PushEmpty(object, int, float, cvector, cvector)
0xef8: Stack[-5] = Stack[-26]
0xef9: Stack[-4] = Stack[-25]
0xefa: Stack[-3] = Stack[-24]
0xefb: Stack[-2] = Stack[-6]
0xefc: Stack[-1] = -Stack[-14]; Pop(0);
0xefd: Call2 0xf06

0xefe: Pop(5)
0xeff: Return(); Pop(18)

0xf00: Stack[-8] = 0
0xf01: PushEmpty(object)
0xf02: Stack[-1] = Stack[-22]
0xf03: Call2 0xe96

0xf04: Pop(1)
0xf05: Return(); Pop(18)

0xf06: PushEmpty(object, object, object, object)
0xf07: @ GetScene(Stack[-2])
0xf08: Pop(0)
0xf09: Push("scripted")
0xf0a: Push("blood_dir.xml")
0xf0b: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xf0c: Pop(2)
0xf0d: PushEmpty(object)
0xf0e: Stack[-1] = Stack[-10]
0xf0f: Call2 0xe96

0xf10: Pop(1)
0xf11: Return(); Pop(4)

0xf12: Stack[-1] = 0
0xf13: Stack[-2] = 0
0xf14: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xf15: @@ GetPosition(Stack[-3])
0xf16: Pop(0)
0xf17: @ GetPosition(Stack[-2])
0xf18: Pop(0)
0xf19: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xf1a: Push(CvectorIndex(Stack[-1], 0))
0xf1b: Push(CvectorIndex(Stack[-2], 2))
0xf1c: @ RotateAsync(Stack[-2], Stack[-1])
0xf1d: Pop(2)
0xf1e: Return(); Pop(6)

0xf1f: PushEmpty(bool, bool)
0xf20: @ IsLoaded(Stack[-1])
0xf21: Pop(0)
0xf22: Stack[-3] = Stack[-1]
0xf23: Return(); Pop(2)

0xf24: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xf25: @@ GetPosition(Stack[-8])
0xf26: Pop(0)
0xf27: @@ GetEyesHeight(Stack[-9])
0xf28: Pop(0)
0xf29: Push(CvectorIndex(Stack[-8], 1))
0xf2a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf2b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xf2c: @ GetPosition(Stack[-7])
0xf2d: Pop(0)
0xf2e: @ GetEyesHeight(Stack[-9])
0xf2f: Pop(0)
0xf30: Push(CvectorIndex(Stack[-7], 1))
0xf31: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf32: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xf33: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xf34: Push(CvectorIndex(Stack[-6], 1))
0xf35: Stack[-1] = (int) 0
0xf36: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xf37: Pop(0); Push(Stack[-6] | Stack[-6]);
0xf38: Pop(1); Push(Sqrt(Stack[-1]))
0xf39: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xf3a: Stack[-5] = -Stack[-6]; Pop(0);
0xf3b: Pop(0); Push(Stack[-6] * Stack[-19]);
0xf3c: PushEmpty(cvector, cvector)
0xf3d: Push(CVector(0.0, 1.0, 0.0))
0xf3e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xf3f: Call2 0x1014

0xf40: Pop(1)
0xf41: Push((int) 25)
0xf42: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf43: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf44: Push(CVector(0.0, 10.0, 0.0))
0xf45: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xf46: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xf47: @ IsOverrideActive(Stack[-2])
0xf48: Pop(0)
0xf49: Push(Stack[-2])
0xf4a: IF (Stack[-1] == 0) GOTO 0xf4d; Pop(1)

0xf4b: Stack[-21] = (bool) 0
0xf4c: Return(); Pop(18)

0xf4d: @ StopWorld()
0xf4e: Pop(0)
0xf4f: @ CameraTransit(Stack[-3], Stack[-5])
0xf50: Pop(0)
0xf51: Push(CvectorIndex(Stack[-4], 0))
0xf52: Push(CvectorIndex(Stack[-5], 2))
0xf53: @ Rotate(Stack[-2], Stack[-1])
0xf54: Pop(2)
0xf55: PushEmpty(bool)
0xf56: Call2 0x13a0

0xf57: Pop(0)
0xf58: IF (Stack[-1] == 0) GOTO 0xf5a; Pop(1)

0xf59: GOTO 0xf62

0xf5a: Push("head")
0xf5b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xf5c: Pop(1)
0xf5d: Push(Stack[-1])
0xf5e: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf5f: Push("head")
0xf60: @ LookAsyncCamera(Stack[-1])
0xf61: Pop(1)
0xf62: @ CameraWaitForPlayFinish()
0xf63: Pop(0)
0xf64: @ ResumeWorld()
0xf65: Pop(0)
0xf66: Stack[-21] = (bool) 1
0xf67: Return(); Pop(18)

0xf68: PushEmpty(bool, bool)
0xf69: @ CameraSwitchToNormal()
0xf6a: Pop(0)
0xf6b: PushEmpty(bool)
0xf6c: Call2 0x13a0

0xf6d: Pop(0)
0xf6e: IF (Stack[-1] == 0) GOTO 0xf70; Pop(1)

0xf6f: GOTO 0xf78

0xf70: Push("head")
0xf71: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xf72: Pop(1)
0xf73: Push(Stack[-1])
0xf74: IF (Stack[-1] == 0) GOTO 0xf78; Pop(1)

0xf75: Push("head")
0xf76: @ UnlookAsync(Stack[-1])
0xf77: Pop(1)
0xf78: Return(); Pop(2)

0xf79: PushEmpty()
0xf7a: PushEmpty(bool, object, float)
0xf7b: Stack[-2] = Stack[-4]
0xf7c: Stack[-1] = (int) 70
0xf7d: Call2 0xf81

0xf7e: Stack[-5] = Stack[-3]
0xf7f: Pop(3)
0xf80: Return(); Pop(0)

0xf81: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xf82: @@ GetPosition(Stack[-7])
0xf83: Pop(0)
0xf84: @@ GetEyesHeight(Stack[-8])
0xf85: Pop(0)
0xf86: Push(CvectorIndex(Stack[-7], 1))
0xf87: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xf88: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xf89: @ GetPosition(Stack[-6])
0xf8a: Pop(0)
0xf8b: @ GetEyesHeight(Stack[-8])
0xf8c: Pop(0)
0xf8d: Push(CvectorIndex(Stack[-6], 1))
0xf8e: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xf8f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xf90: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xf91: Push(CvectorIndex(Stack[-5], 1))
0xf92: Stack[-1] = (int) 0
0xf93: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xf94: Pop(0); Push(Stack[-5] | Stack[-5]);
0xf95: Pop(1); Push(Sqrt(Stack[-1]))
0xf96: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xf97: Stack[-4] = -Stack[-5]; Pop(0);
0xf98: Pop(0); Push(Stack[-5] * Stack[-17]);
0xf99: Push(CVector(0.0, 10.0, 0.0))
0xf9a: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xf9b: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xf9c: @ IsOverrideActive(Stack[-1])
0xf9d: Pop(0)
0xf9e: Push(Stack[-1])
0xf9f: IF (Stack[-1] == 0) GOTO 0xfa2; Pop(1)

0xfa0: Stack[-19] = (bool) 0
0xfa1: Return(); Pop(16)

0xfa2: @ StopWorld()
0xfa3: Pop(0)
0xfa4: @ CameraTransit(Stack[-2], Stack[-4])
0xfa5: Pop(0)
0xfa6: Push(CvectorIndex(Stack[-3], 0))
0xfa7: Push(CvectorIndex(Stack[-4], 2))
0xfa8: @ Rotate(Stack[-2], Stack[-1])
0xfa9: Pop(2)
0xfaa: @ CameraWaitForPlayFinish()
0xfab: Pop(0)
0xfac: @ ResumeWorld()
0xfad: Pop(0)
0xfae: Stack[-19] = (bool) 1
0xfaf: Return(); Pop(16)

0xfb0: PushEmpty()
0xfb1: @ CameraSwitchToNormal()
0xfb2: Pop(0)
0xfb3: Return(); Pop(0)

0xfb4: PushEmpty(bool, float, float, bool, float, float)
0xfb5: @ lshHasAnimation(Stack[-3], Stack[-7])
0xfb6: Pop(0)
0xfb7: Push(Stack[-3])
0xfb8: IF (Stack[-1] == 0) GOTO 0xfbf; Pop(1)

0xfb9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xfba: Pop(0)
0xfbb: Push((bool) 0)
0xfbc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xfbd: Pop(1)
0xfbe: GOTO 0xfc3

0xfbf: Push("Can't find lsh animation : ")
0xfc0: Pop(1); Push(Stack[-1] + Stack[-8]);
0xfc1: @ Trace(Stack[-1])
0xfc2: Pop(1)
0xfc3: Return(); Pop(6)

0xfc4: PushEmpty(bool, float, float, bool, float, float)
0xfc5: @ lshHasAnimation(Stack[-3], Stack[-8])
0xfc6: Pop(0)
0xfc7: Push(Stack[-3])
0xfc8: IF (Stack[-1] == 0) GOTO 0xfce; Pop(1)

0xfc9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xfca: Pop(0)
0xfcb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xfcc: Pop(0)
0xfcd: GOTO 0xfd2

0xfce: Push("Can't find lsh animation : ")
0xfcf: Pop(1); Push(Stack[-1] + Stack[-9]);
0xfd0: @ Trace(Stack[-1])
0xfd1: Pop(1)
0xfd2: Return(); Pop(6)

0xfd3: PushEmpty(float, cvector, float, cvector)
0xfd4: @@ GetEyesHeight(Stack[-2])
0xfd5: Pop(0)
0xfd6: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xfd7: Push(CvectorIndex(Stack[-1], 1))
0xfd8: Stack[-1] = Stack[-3]
0xfd9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xfda: Push("head")
0xfdb: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xfdc: Pop(1)
0xfdd: Return(); Pop(4)

0xfde: PushEmpty(bool)
0xfdf: Call2 0x13a0

0xfe0: Pop(0)
0xfe1: IF (Stack[-1] == 0) GOTO 0xfe4; Pop(1)

0xfe2: @ lshStopSpeech()
0xfe3: Pop(0)
0xfe4: Return(); Pop(0)

0xfe5: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xfe6: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xfe7: Pop(0)
0xfe8: Pop(0); Push((bool) Stack[-8] == 0)
0xfe9: IF (Stack[-1] == 0) GOTO 0xffe; Pop(1)

0xfea: Stack[-7] = (int) 0
0xfeb: Push((int) 1)
0xfec: Pop(1); Push(Stack[-8] + Stack[-1]);
0xfed: Pop(1); Push(Stack[-18] + Stack[-1]);
0xfee: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xfef: Pop(1)
0xff0: Pop(0); Push((bool) Stack[-6] == 0)
0xff1: IF (Stack[-1] == 0) GOTO 0xff3; Pop(1)

0xff2: GOTO 0xff6

0xff3: Push((int) 1)
0xff4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xff5: GOTO 0xfeb

0xff6: Pop(0); Push((bool) Stack[-7] == 0)
0xff7: IF (Stack[-1] == 0) GOTO 0xff9; Pop(1)

0xff8: Return(); Pop(16)

0xff9: @ irand(Stack[-5], Stack[-7])
0xffa: Pop(0)
0xffb: Push((int) 1)
0xffc: Pop(1); Push(Stack[-6] + Stack[-1]);
0xffd: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xffe: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xfff: Pop(0)
0x1000: Push(Stack[-4])
0x1001: IF (Stack[-1] == 0) GOTO 0x100d; Pop(1)

0x1002: @ GetEyesHeight(Stack[-3])
0x1003: Pop(0)
0x1004: @ GetDirection(Stack[-2])
0x1005: Pop(0)
0x1006: Push((int) 50)
0x1007: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x1008: Push(CvectorIndex(Stack[-1], 1))
0x1009: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x100a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x100b: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x100c: Pop(0)
0x100d: Return(); Pop(16)

0x100e: PushEmpty(object, object)
0x100f: @ self(Stack[-1])
0x1010: Pop(0)
0x1011: Stack[-3] = Stack[-1]
0x1012: Return(); Pop(2)

0x1013: Stack[-1] = 0
0x1014: PushEmpty(float, float)
0x1015: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1016: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1017: Push((float)0.0)
0x1018: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1019: IF (Stack[-1] == 0) GOTO 0x101c; Pop(1)

0x101a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x101b: Return(); Pop(2)

0x101c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x101d: Return(); Pop(2)

0x101e: PushEmpty()
0x101f: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x1020: IF (Stack[-1] == 0) GOTO 0x1023; Pop(1)

0x1021: Stack[-3] = Stack[-2]
0x1022: GOTO 0x1024

0x1023: Stack[-3] = Stack[-1]
0x1024: Return(); Pop(0)

0x1025: PushEmpty()
0x1026: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1027: IF (Stack[-1] == 0) GOTO 0x102a; Pop(1)

0x1028: Stack[-4] = Stack[-2]
0x1029: Return(); Pop(0)

0x102a: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x102b: IF (Stack[-1] == 0) GOTO 0x102e; Pop(1)

0x102c: Stack[-4] = Stack[-1]
0x102d: Return(); Pop(0)

0x102e: Stack[-4] = Stack[-3]
0x102f: Return(); Pop(0)

0x1030: PushEmpty()
0x1031: Push(CvectorIndex(Stack[-2], 0))
0x1032: Push(CvectorIndex(Stack[-2], 0))
0x1033: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1034: Push(CvectorIndex(Stack[-3], 2))
0x1035: Push(CvectorIndex(Stack[-3], 2))
0x1036: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1037: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1038: Return(); Pop(0)

0x1039: PushEmpty()
0x103a: Push(CvectorIndex(Stack[-1], 0))
0x103b: Push(CvectorIndex(Stack[-2], 0))
0x103c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x103d: Push(CvectorIndex(Stack[-2], 2))
0x103e: Push(CvectorIndex(Stack[-3], 2))
0x103f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1040: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1041: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x1042: Return(); Pop(0)

0x1043: PushEmpty()
0x1044: PushEmpty(float, cvector, cvector)
0x1045: Stack[-2] = Stack[-5]
0x1046: Stack[-1] = Stack[-4]
0x1047: Call2 0x1030

0x1048: Pop(2)
0x1049: PushEmpty(float, cvector)
0x104a: Stack[-1] = Stack[-5]
0x104b: Call2 0x1039

0x104c: Pop(1)
0x104d: PushEmpty(float, cvector)
0x104e: Stack[-1] = Stack[-5]
0x104f: Call2 0x1039

0x1050: Pop(1)
0x1051: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1052: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x1053: Return(); Pop(0)

0x1054: PushEmpty(int, int)
0x1055: @ GetVariable(Stack[-3], Stack[-1])
0x1056: Pop(0)
0x1057: Stack[-4] = Stack[-1]
0x1058: Return(); Pop(2)

0x1059: PushEmpty(object, object)
0x105a: @ CreateFloatVector(Stack[-1])
0x105b: Pop(0)
0x105c: @@ add(Stack[-3])
0x105d: Pop(0)
0x105e: Push((int) 15)
0x105f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1060: Pop(1)
0x1061: Return(); Pop(2)

0x1062: Stack[-1] = 0
0x1063: PushEmpty(float, float)
0x1064: @ GetGameTime(Stack[-1])
0x1065: Pop(0)
0x1066: Push((int) 1)
0x1067: PushEmpty(int)
0x1068: Push((int) 24)
0x1069: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x106a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x106b: Return(); Pop(2)

0x106c: PushEmpty(bool, bool)
0x106d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x106e: Pop(0)
0x106f: Push(Stack[-1])
0x1070: IF (Stack[-1] == 0) GOTO 0x1074; Pop(1)

0x1071: Push("attack")
0x1072: @ PlayGlobalMusic(Stack[-1])
0x1073: Pop(1)
0x1074: Return(); Pop(2)

0x1075: PushEmpty(object, object)
0x1076: @ GetScene(Stack[-1])
0x1077: Pop(0)
0x1078: Push("battle")
0x1079: PushEmpty(object)
0x107a: Call2 0x100e

0x107b: Pop(0)
0x107c: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x107d: Pop(2)
0x107e: Return(); Pop(2)

0x107f: Stack[-1] = 0
0x1080: PushEmpty()
0x1081: PushEmpty(int, string)
0x1082: Stack[-1] = "branch"
0x1083: Call2 0x1054

0x1084: Pop(1)
0x1085: Push((int) 0)
0x1086: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1087: IF (Stack[-1] == 0) GOTO 0x108a; Pop(1)

0x1088: Stack[-2] = (bool) 1
0x1089: Return(); Pop(0)

0x108a: Stack[-2] = (bool) 0
0x108b: Return(); Pop(0)

0x108c: PushEmpty()
0x108d: PushEmpty(int, string)
0x108e: Stack[-1] = "branch"
0x108f: Call2 0x1054

0x1090: Pop(1)
0x1091: Push((int) 2)
0x1092: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1093: IF (Stack[-1] == 0) GOTO 0x1096; Pop(1)

0x1094: Stack[-2] = (bool) 1
0x1095: Return(); Pop(0)

0x1096: Stack[-2] = (bool) 0
0x1097: Return(); Pop(0)

0x1098: PushEmpty()
0x1099: PushEmpty(bool, object)
0x109a: Stack[-1] = Stack[-3]
0x109b: Call2 0x10ac

0x109c: Pop(1)
0x109d: IF (Stack[-1] == 0) GOTO 0x10a0; Pop(1)

0x109e: Stack[-2] = (bool) 1
0x109f: Return(); Pop(0)

0x10a0: Stack[-2] = (bool) 0
0x10a1: Return(); Pop(0)

0x10a2: PushEmpty()
0x10a3: PushEmpty(bool, object)
0x10a4: Stack[-1] = Stack[-3]
0x10a5: Call2 0x10b3

0x10a6: Pop(1)
0x10a7: IF (Stack[-1] == 0) GOTO 0x10aa; Pop(1)

0x10a8: Stack[-2] = (bool) 1
0x10a9: Return(); Pop(0)

0x10aa: Stack[-2] = (bool) 0
0x10ab: Return(); Pop(0)

0x10ac: PushEmpty()
0x10ad: PushEmpty(int)
0x10ae: Call2 0x1063

0x10af: Pop(0)
0x10b0: Push((int) 1)
0x10b1: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x10b2: Return(); Pop(0)

0x10b3: PushEmpty()
0x10b4: PushEmpty(int)
0x10b5: Call2 0x1063

0x10b6: Pop(0)
0x10b7: Push((int) 4)
0x10b8: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x10b9: Return(); Pop(0)

0x10ba: PushEmpty(int, int)
0x10bb: Push("branch")
0x10bc: @ GetVariable(Stack[-1], Stack[-2])
0x10bd: Pop(1)
0x10be: Push((int) 0)
0x10bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10c0: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10c1: Stack[-3] = (int) 1
0x10c2: Return(); Pop(2)

0x10c3: GOTO 0x10c9

0x10c4: Push((int) 1)
0x10c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10c6: IF (Stack[-1] == 0) GOTO 0x10c9; Pop(1)

0x10c7: Stack[-3] = (int) 2
0x10c8: Return(); Pop(2)

0x10c9: Stack[-3] = (int) 3
0x10ca: Return(); Pop(2)

0x10cb: PushEmpty(int, int)
0x10cc: Push("branch")
0x10cd: @ GetVariable(Stack[-1], Stack[-2])
0x10ce: Pop(1)
0x10cf: Stack[-3] = Stack[-1]
0x10d0: Return(); Pop(2)

0x10d1: PushEmpty()
0x10d2: PushEmpty(int)
0x10d3: Call2 0x10cb

0x10d4: Pop(0)
0x10d5: Push((int) 1)
0x10d6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10d7: IF (Stack[-1] == 0) GOTO 0x10db; Pop(1)

0x10d8: @ WorkWithCorpse(Stack[-1])
0x10d9: Pop(0)
0x10da: GOTO 0x10dd

0x10db: @ Barter(Stack[-1])
0x10dc: Pop(0)
0x10dd: Return(); Pop(0)

0x10de: PushEmpty(int, bool, int, bool)
0x10df: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x10e0: IF (Stack[-1] == 0) GOTO 0x10e5; Pop(1)

0x10e1: Push("GenerateMoney: iMin > iMax")
0x10e2: @ Trace(Stack[-1])
0x10e3: Pop(1)
0x10e4: Return(); Pop(4)

0x10e5: Stack[-2] = (int) 0
0x10e6: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x10e7: IF (Stack[-1] == 0) GOTO 0x10ec; Pop(1)

0x10e8: Pop(0); Push(Stack[-5] - Stack[-6]);
0x10e9: @ irand(Stack[-3], Stack[-1])
0x10ea: Pop(1)
0x10eb: GOTO 0x10f0

0x10ec: Push((int) 0)
0x10ed: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x10ee: IF (Stack[-1] == 0) GOTO 0x10f0; Pop(1)

0x10ef: Return(); Pop(4)

0x10f0: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x10f1: Push((int) 0)
0x10f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f3: IF (Stack[-1] == 0) GOTO 0x10f5; Pop(1)

0x10f4: Return(); Pop(4)

0x10f5: PushEmpty(int, string)
0x10f6: Stack[-1] = "Money"
0x10f7: Call2 0x11d5

0x10f8: Pop(1)
0x10f9: Push((int) 0)
0x10fa: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x10fb: Pop(2)
0x10fc: Return(); Pop(4)

0x10fd: PushEmpty(object, int, bool, object, int, bool)
0x10fe: @ CreateInvItem(Stack[-3])
0x10ff: Pop(0)
0x1100: @@ SetItemName(Stack[-7])
0x1101: Pop(0)
0x1102: Push("Organ")
0x1103: Push((int) 1)
0x1104: @@ SetProperty(Stack[-2], Stack[-1])
0x1105: Pop(2)
0x1106: @@ GetItemID(Stack[-2])
0x1107: Pop(0)
0x1108: Push((int) 0)
0x1109: Push((int) 1)
0x110a: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x110b: Pop(2)
0x110c: Return(); Pop(6)

0x110d: Stack[-3] = 0
0x110e: PushEmpty(int)
0x110f: Call2 0x10cb

0x1110: Pop(0)
0x1111: Push((int) 1)
0x1112: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1113: IF (Stack[-1] == 0) GOTO 0x1115; Pop(1)

0x1114: Return(); Pop(0)

0x1115: PushEmpty(string)
0x1116: Stack[-1] = "liver"
0x1117: Call2 0x10fd

0x1118: Pop(1)
0x1119: PushEmpty(string)
0x111a: Stack[-1] = "kidney"
0x111b: Call2 0x10fd

0x111c: Pop(1)
0x111d: PushEmpty(string)
0x111e: Stack[-1] = "heart"
0x111f: Call2 0x10fd

0x1120: Pop(1)
0x1121: PushEmpty(string)
0x1122: Stack[-1] = "blood"
0x1123: Call2 0x10fd

0x1124: Pop(1)
0x1125: Return(); Pop(0)

0x1126: PushEmpty(int, bool, int, bool)
0x1127: Push(Stack[-5])
0x1128: IF (Stack[-1] == 0) GOTO 0x117f; Pop(1)

0x1129: PushEmpty(int, int)
0x112a: Stack[-2] = (int) 0
0x112b: Push((int) 100)
0x112c: PushEmpty(int)
0x112d: Call2 0x1063

0x112e: Pop(0)
0x112f: Push((int) 100)
0x1130: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1131: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1132: Call2 0x10de

0x1133: Pop(2)
0x1134: Push((int) 8)
0x1135: @ irand(Stack[-3], Stack[-1])
0x1136: Pop(1)
0x1137: Push((int) 0)
0x1138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1139: IF (Stack[-1] == 0) GOTO 0x1143; Pop(1)

0x113a: PushEmpty(int, string)
0x113b: Stack[-1] = "lemon"
0x113c: Call2 0x11d5

0x113d: Pop(1)
0x113e: Push((int) 0)
0x113f: Push((int) 1)
0x1140: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1141: Pop(3)
0x1142: GOTO 0x117e

0x1143: Push((int) 1)
0x1144: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1145: IF (Stack[-1] == 0) GOTO 0x114f; Pop(1)

0x1146: PushEmpty(int, string)
0x1147: Stack[-1] = "rusk"
0x1148: Call2 0x11d5

0x1149: Pop(1)
0x114a: Push((int) 0)
0x114b: Push((int) 1)
0x114c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x114d: Pop(3)
0x114e: GOTO 0x117e

0x114f: Push((int) 2)
0x1150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1151: IF (Stack[-1] == 0) GOTO 0x115b; Pop(1)

0x1152: PushEmpty(int, string)
0x1153: Stack[-1] = "hook"
0x1154: Call2 0x11d5

0x1155: Pop(1)
0x1156: Push((int) 0)
0x1157: Push((int) 1)
0x1158: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1159: Pop(3)
0x115a: GOTO 0x117e

0x115b: Push((int) 4)
0x115c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115d: IF (Stack[-1] == 0) GOTO 0x1167; Pop(1)

0x115e: PushEmpty(int, string)
0x115f: Stack[-1] = "syringe"
0x1160: Call2 0x11d5

0x1161: Pop(1)
0x1162: Push((int) 0)
0x1163: Push((int) 1)
0x1164: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1165: Pop(3)
0x1166: GOTO 0x117e

0x1167: Push((int) 5)
0x1168: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1169: IF (Stack[-1] == 0) GOTO 0x1173; Pop(1)

0x116a: PushEmpty(int, string)
0x116b: Stack[-1] = "watch"
0x116c: Call2 0x11d5

0x116d: Pop(1)
0x116e: Push((int) 0)
0x116f: Push((int) 1)
0x1170: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1171: Pop(3)
0x1172: GOTO 0x117e

0x1173: Push((int) 6)
0x1174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1175: IF (Stack[-1] == 0) GOTO 0x117e; Pop(1)

0x1176: PushEmpty(int, string)
0x1177: Stack[-1] = "razor"
0x1178: Call2 0x11d5

0x1179: Pop(1)
0x117a: Push((int) 0)
0x117b: Push((int) 1)
0x117c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x117d: Pop(3)
0x117e: GOTO 0x11d4

0x117f: PushEmpty(int, int)
0x1180: Stack[-2] = (int) 0
0x1181: Push((int) 50)
0x1182: PushEmpty(int)
0x1183: Call2 0x1063

0x1184: Pop(0)
0x1185: Push((int) 50)
0x1186: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1187: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1188: Call2 0x10de

0x1189: Pop(2)
0x118a: Push((int) 7)
0x118b: @ irand(Stack[-3], Stack[-1])
0x118c: Pop(1)
0x118d: Push((int) 0)
0x118e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118f: IF (Stack[-1] == 0) GOTO 0x1199; Pop(1)

0x1190: PushEmpty(int, string)
0x1191: Stack[-1] = "beads"
0x1192: Call2 0x11d5

0x1193: Pop(1)
0x1194: Push((int) 0)
0x1195: Push((int) 1)
0x1196: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1197: Pop(3)
0x1198: GOTO 0x11d4

0x1199: Push((int) 1)
0x119a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119b: IF (Stack[-1] == 0) GOTO 0x11a5; Pop(1)

0x119c: PushEmpty(int, string)
0x119d: Stack[-1] = "bracelet"
0x119e: Call2 0x11d5

0x119f: Pop(1)
0x11a0: Push((int) 0)
0x11a1: Push((int) 1)
0x11a2: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11a3: Pop(3)
0x11a4: GOTO 0x11d4

0x11a5: Push((int) 2)
0x11a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a7: IF (Stack[-1] == 0) GOTO 0x11b1; Pop(1)

0x11a8: PushEmpty(int, string)
0x11a9: Stack[-1] = "ear_ring"
0x11aa: Call2 0x11d5

0x11ab: Pop(1)
0x11ac: Push((int) 0)
0x11ad: Push((int) 1)
0x11ae: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11af: Pop(3)
0x11b0: GOTO 0x11d4

0x11b1: Push((int) 3)
0x11b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b3: IF (Stack[-1] == 0) GOTO 0x11bd; Pop(1)

0x11b4: PushEmpty(int, string)
0x11b5: Stack[-1] = "gold_ring"
0x11b6: Call2 0x11d5

0x11b7: Pop(1)
0x11b8: Push((int) 0)
0x11b9: Push((int) 1)
0x11ba: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11bb: Pop(3)
0x11bc: GOTO 0x11d4

0x11bd: Push((int) 4)
0x11be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11bf: IF (Stack[-1] == 0) GOTO 0x11c9; Pop(1)

0x11c0: PushEmpty(int, string)
0x11c1: Stack[-1] = "silver_ring"
0x11c2: Call2 0x11d5

0x11c3: Pop(1)
0x11c4: Push((int) 0)
0x11c5: Push((int) 1)
0x11c6: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11c7: Pop(3)
0x11c8: GOTO 0x11d4

0x11c9: Push((int) 5)
0x11ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11cb: IF (Stack[-1] == 0) GOTO 0x11d4; Pop(1)

0x11cc: PushEmpty(int, string)
0x11cd: Stack[-1] = "flower"
0x11ce: Call2 0x11d5

0x11cf: Pop(1)
0x11d0: Push((int) 0)
0x11d1: Push((int) 1)
0x11d2: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11d3: Pop(3)
0x11d4: Return(); Pop(4)

0x11d5: PushEmpty(int, int)
0x11d6: @ GetInvItemByName(Stack[-1], Stack[-3])
0x11d7: Pop(0)
0x11d8: Stack[-4] = Stack[-1]
0x11d9: Return(); Pop(2)

0x11da: PushEmpty()
0x11db: PushEmpty(object)
0x11dc: Stack[-1] = Stack[-2]
0x11dd: Push(-1, 0); TaskCall(3)
0x11de: Call2 0x619

0x11df: Pop(-1, 0); TaskReturn
0x11e0: Pop(1)
0x11e1: Return(); Pop(0)

0x11e2: PushEmpty(float, float)
0x11e3: Push("health")
0x11e4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11e5: IF (Stack[-1] == 0) GOTO 0x11ee; Pop(1)

0x11e6: Push("health")
0x11e7: @ GetProperty(Stack[-1], Stack[-2])
0x11e8: Pop(1)
0x11e9: Push((int) 0)
0x11ea: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x11eb: IF (Stack[-1] == 0) GOTO 0x11ee; Pop(1)

0x11ec: @ SignalDeath(Stack[-4])
0x11ed: Pop(0)
0x11ee: Return(); Pop(2)

0x11ef: PushEmpty()
0x11f0: PushEmpty(object)
0x11f1: Stack[-1] = Stack[-2]
0x11f2: Call2 0x11da

0x11f3: Pop(1)
0x11f4: Return(); Pop(0)

0x11f5: PushEmpty()
0x11f6: PushEmpty(object, int, float)
0x11f7: Stack[-3] = Stack[-7]
0x11f8: Stack[-2] = Stack[-6]
0x11f9: Stack[-1] = Stack[-5]
0x11fa: Call2 0xec2

0x11fb: Pop(3)
0x11fc: Return(); Pop(0)

0x11fd: PushEmpty()
0x11fe: PushEmpty(object, int, float, cvector, cvector)
0x11ff: Stack[-5] = Stack[-11]
0x1200: Stack[-4] = Stack[-10]
0x1201: Stack[-3] = Stack[-9]
0x1202: Stack[-2] = Stack[-7]
0x1203: Stack[-1] = Stack[-6]
0x1204: Call2 0xf06

0x1205: Pop(5)
0x1206: Return(); Pop(0)

0x1207: PushEmpty()
0x1208: Push("unholster")
0x1209: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x120a: IF (Stack[-1] == 0) GOTO 0x1212; Pop(1)

0x120b: PushEmpty(bool, object)
0x120c: Stack[-1] = Stack[-4]
0x120d: Call2 0x1374

0x120e: Stack[-5] = Stack[-2]
0x120f: Pop(2)
0x1210: Return(); Pop(0)

0x1211: GOTO 0x1225

0x1212: Push("player_shot")
0x1213: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1214: IF (Stack[-1] == 0) GOTO 0x121c; Pop(1)

0x1215: PushEmpty(bool, object)
0x1216: Stack[-1] = Stack[-4]
0x1217: Call2 0x1379

0x1218: Stack[-5] = Stack[-2]
0x1219: Pop(2)
0x121a: Return(); Pop(0)

0x121b: GOTO 0x1225

0x121c: Push("battle")
0x121d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x121e: IF (Stack[-1] == 0) GOTO 0x1225; Pop(1)

0x121f: PushEmpty(bool, object)
0x1220: Stack[-1] = Stack[-4]
0x1221: Call2 0x138e

0x1222: Stack[-5] = Stack[-2]
0x1223: Pop(2)
0x1224: Return(); Pop(0)

0x1225: Stack[-3] = (bool) 0
0x1226: Return(); Pop(0)

0x1227: PushEmpty()
0x1228: Push("unholster")
0x1229: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x122a: IF (Stack[-1] == 0) GOTO 0x1230; Pop(1)

0x122b: PushEmpty(object)
0x122c: Stack[-1] = Stack[-3]
0x122d: Call2 0x1377

0x122e: Pop(1)
0x122f: GOTO 0x123f

0x1230: Push("player_shot")
0x1231: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1232: IF (Stack[-1] == 0) GOTO 0x1238; Pop(1)

0x1233: PushEmpty(object)
0x1234: Stack[-1] = Stack[-3]
0x1235: Call2 0x1388

0x1236: Pop(1)
0x1237: GOTO 0x123f

0x1238: Push("battle")
0x1239: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123a: IF (Stack[-1] == 0) GOTO 0x123f; Pop(1)

0x123b: PushEmpty(object)
0x123c: Stack[-1] = Stack[-3]
0x123d: Call2 0x1391

0x123e: Pop(1)
0x123f: Return(); Pop(0)

0x1240: PushEmpty(bool, bool)
0x1241: PushEmpty(bool)
0x1242: Stack[-1] = (bool) 0
0x1243: PushEmpty(bool, object)
0x1244: Stack[-1] = Stack[-6]
0x1245: Call2 0x1374

0x1246: Pop(1)
0x1247: IF (Stack[-1] == 0) GOTO 0x124e; Pop(1)

0x1248: PushEmpty(bool, object)
0x1249: Stack[-1] = Stack[-6]
0x124a: Call2 0xdfb

0x124b: Pop(1)
0x124c: IF (Stack[-1] == 0) GOTO 0x124e; Pop(1)

0x124d: Stack[-1] = (bool) 1
0x124e: IF (Stack[-1] == 0) GOTO 0x1255; Pop(1)

0x124f: @@ IsWeaponHolstered(Stack[-1])
0x1250: Pop(0)
0x1251: Pop(0); Push((bool) Stack[-1] == 0)
0x1252: IF (Stack[-1] == 0) GOTO 0x1255; Pop(1)

0x1253: Stack[-4] = (bool) 1
0x1254: Return(); Pop(2)

0x1255: Stack[-4] = (bool) 0
0x1256: Return(); Pop(2)

0x1257: PushEmpty()
0x1258: PushEmpty(object)
0x1259: Stack[-1] = Stack[-2]
0x125a: Call2 0x1377

0x125b: Pop(1)
0x125c: Return(); Pop(0)

0x125d: PushEmpty()
0x125e: PushEmpty(bool, object)
0x125f: Stack[-1] = Stack[-3]
0x1260: Call2 0xdfb

0x1261: Pop(1)
0x1262: IF (Stack[-1] == 0) GOTO 0x1269; Pop(1)

0x1263: PushEmpty(object)
0x1264: Call2 0x100e

0x1265: Pop(0)
0x1266: Push((float)-0.03)
0x1267: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1268: Pop(2)
0x1269: Return(); Pop(0)

0x126a: PushEmpty(object, object)
0x126b: Push("heal")
0x126c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x126d: IF (Stack[-1] == 0) GOTO 0x1278; Pop(1)

0x126e: Push("player")
0x126f: @ FindActor(Stack[-2], Stack[-1])
0x1270: Pop(1)
0x1271: PushEmpty(bool, object)
0x1272: Stack[-1] = Stack[-3]
0x1273: Call2 0x1393

0x1274: Stack[-6] = Stack[-2]
0x1275: Pop(2)
0x1276: Return(); Pop(2)

0x1277: Stack[-1] = 0
0x1278: Stack[-4] = (bool) 0
0x1279: Return(); Pop(2)

0x127a: PushEmpty(object, object)
0x127b: Push("heal")
0x127c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x127d: IF (Stack[-1] == 0) GOTO 0x1286; Pop(1)

0x127e: Push("player")
0x127f: @ FindActor(Stack[-2], Stack[-1])
0x1280: Pop(1)
0x1281: PushEmpty(object)
0x1282: Stack[-1] = Stack[-2]
0x1283: Call2 0x1396

0x1284: Pop(1)
0x1285: Stack[-1] = 0
0x1286: Return(); Pop(2)

0x1287: PushEmpty(string, string)
0x1288: Stack[-1] = "idle"
0x1289: Push(Stack[-3])
0x128a: IF (Stack[-1] == 0) GOTO 0x128c; Pop(1)

0x128b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x128c: Stack[-4] = Stack[-1]
0x128d: Return(); Pop(2)

0x128e: PushEmpty(int, bool, int, bool)
0x128f: Stack[-2] = (int) 0
0x1290: Push("all")
0x1291: PushEmpty(string, int)
0x1292: Stack[-1] = Stack[-5]
0x1293: Call2 0x1287

0x1294: Pop(1)
0x1295: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1296: Pop(2)
0x1297: Pop(0); Push((bool) Stack[-1] == 0)
0x1298: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1299: GOTO 0x129d

0x129a: Push((int) 1)
0x129b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x129c: GOTO 0x1290

0x129d: Stack[-5] = Stack[-2]
0x129e: Return(); Pop(4)

0x129f: PushEmpty()
0x12a0: PushEmpty(bool)
0x12a1: Call2 0x13ce

0x12a2: Pop(0)
0x12a3: IF (Stack[-1] == 0) GOTO 0x12a6; Pop(1)

0x12a4: Stack[-2] = (int) 2
0x12a5: GOTO 0x12a7

0x12a6: Stack[-2] = (int) 0
0x12a7: Return(); Pop(0)

0x12a8: PushEmpty()
0x12a9: PushEmpty(object)
0x12aa: Stack[-1] = Stack[-2]
0x12ab: Push(-1, 1); TaskCall(6)
0x12ac: Call2 0x920

0x12ad: Pop(-1, 1); TaskReturn
0x12ae: Pop(1)
0x12af: Return(); Pop(0)

0x12b0: PushEmpty()
0x12b1: PushEmpty(bool, object)
0x12b2: Stack[-1] = Stack[-3]
0x12b3: Call2 0xe7e

0x12b4: Pop(1)
0x12b5: IF (Stack[-1] == 0) GOTO 0x12b8; Pop(1)

0x12b6: Stack[-2] = (int) 2
0x12b7: GOTO 0x12b9

0x12b8: Stack[-2] = (int) 0
0x12b9: Return(); Pop(0)

0x12ba: PushEmpty()
0x12bb: PushEmpty(object)
0x12bc: Stack[-1] = Stack[-2]
0x12bd: Push(-1, 6); TaskCall(7)
0x12be: Call2 0xa33

0x12bf: Pop(-1, 6); TaskReturn
0x12c0: Pop(1)
0x12c1: Return(); Pop(0)

0x12c2: PushEmpty(string, string, string, string)
0x12c3: PushEmpty(bool, object, string)
0x12c4: Stack[-2] = Stack[-9]
0x12c5: Stack[-1] = "class"
0x12c6: Call2 0xe00

0x12c7: Pop(2)
0x12c8: Pop(1); Push((bool) Stack[-1] == 0)
0x12c9: IF (Stack[-1] == 0) GOTO 0x12cc; Pop(1)

0x12ca: Stack[-7] = (bool) 0
0x12cb: Return(); Pop(4)

0x12cc: Push("class")
0x12cd: @ GetProperty(Stack[-1], Stack[-3])
0x12ce: Pop(1)
0x12cf: Push("class")
0x12d0: @@ GetProperty(Stack[-1], Stack[-2])
0x12d1: Pop(1)
0x12d2: PushEmpty(bool)
0x12d3: Stack[-1] = (bool) 0
0x12d4: Pop(0); Push((bool) Stack[-6] == 0)
0x12d5: IF (Stack[-1] == 0) GOTO 0x12d9; Pop(1)

0x12d6: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0x12d7: IF (Stack[-1] == 0) GOTO 0x12d9; Pop(1)

0x12d8: Stack[-1] = (bool) 1
0x12d9: IF (Stack[-1] == 0) GOTO 0x12dc; Pop(1)

0x12da: Stack[-7] = (bool) 1
0x12db: Return(); Pop(4)

0x12dc: Push("rat")
0x12dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12de: IF (Stack[-1] == 0) GOTO 0x12e2; Pop(1)

0x12df: Stack[-7] = (bool) 0
0x12e0: Return(); Pop(4)

0x12e1: GOTO 0x130b

0x12e2: Push("rat_big")
0x12e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12e4: IF (Stack[-1] == 0) GOTO 0x12e8; Pop(1)

0x12e5: Stack[-7] = (bool) 0
0x12e6: Return(); Pop(4)

0x12e7: GOTO 0x130b

0x12e8: Push("dog")
0x12e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12ea: IF (Stack[-1] == 0) GOTO 0x12ee; Pop(1)

0x12eb: Stack[-7] = (bool) 0
0x12ec: Return(); Pop(4)

0x12ed: GOTO 0x130b

0x12ee: Push("grabitel")
0x12ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f0: IF (Stack[-1] == 0) GOTO 0x12f4; Pop(1)

0x12f1: Stack[-7] = (bool) 0
0x12f2: Return(); Pop(4)

0x12f3: GOTO 0x130b

0x12f4: Push("bomber")
0x12f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f6: IF (Stack[-1] == 0) GOTO 0x12fa; Pop(1)

0x12f7: Stack[-7] = (bool) 0
0x12f8: Return(); Pop(4)

0x12f9: GOTO 0x130b

0x12fa: Push("sanitar")
0x12fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12fc: IF (Stack[-1] == 0) GOTO 0x1300; Pop(1)

0x12fd: Stack[-7] = (bool) 0
0x12fe: Return(); Pop(4)

0x12ff: GOTO 0x130b

0x1300: Push("hunter")
0x1301: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1302: IF (Stack[-1] == 0) GOTO 0x1306; Pop(1)

0x1303: Stack[-7] = (bool) 0
0x1304: Return(); Pop(4)

0x1305: GOTO 0x130b

0x1306: Push("soldier")
0x1307: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1308: IF (Stack[-1] == 0) GOTO 0x130b; Pop(1)

0x1309: Stack[-7] = (bool) 0
0x130a: Return(); Pop(4)

0x130b: Stack[-7] = (bool) 1
0x130c: Return(); Pop(4)

0x130d: PushEmpty()
0x130e: PushEmpty(int, object)
0x130f: Stack[-1] = Stack[-4]
0x1310: Call2 0x12b0

0x1311: Stack[-5] = Stack[-2]
0x1312: Pop(2)
0x1313: Return(); Pop(0)

0x1314: PushEmpty()
0x1315: PushEmpty(object)
0x1316: Stack[-1] = Stack[-2]
0x1317: Call2 0x12ba

0x1318: Pop(1)
0x1319: Return(); Pop(0)

0x131a: PushEmpty(bool, bool)
0x131b: PushEmpty(bool, object, bool)
0x131c: Stack[-2] = Stack[-8]
0x131d: Stack[-1] = !Stack[-6]; Pop(0);
0x131e: Call2 0x12c2

0x131f: Pop(2)
0x1320: Pop(1); Push((bool) Stack[-1] == 0)
0x1321: IF (Stack[-1] == 0) GOTO 0x1324; Pop(1)

0x1322: Stack[-7] = (bool) 0
0x1323: Return(); Pop(2)

0x1324: @ CanSee(Stack[-1], Stack[-6])
0x1325: Pop(0)
0x1326: PushEmpty(bool)
0x1327: Stack[-1] = (bool) 1
0x1328: Push(Stack[-2])
0x1329: IF (Stack[-1] == 0) GOTO 0x1332; Pop(1)

0x132a: PushEmpty(float, object)
0x132b: Stack[-1] = Stack[-9]
0x132c: Call2 0xdf3

0x132d: Pop(1)
0x132e: Pop(0); Push(Stack[-6] * Stack[-6]);
0x132f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1330: IF (Stack[-1] == 0) GOTO 0x1332; Pop(1)

0x1331: Stack[-1] = (bool) 0
0x1332: IF (Stack[-1] == 0) GOTO 0x1335; Pop(1)

0x1333: Stack[-7] = (bool) 1
0x1334: Return(); Pop(2)

0x1335: Stack[-7] = (bool) 0
0x1336: Return(); Pop(2)

0x1337: PushEmpty()
0x1338: Stack[-2] = (int) 0
0x1339: Return(); Pop(0)

0x133a: PushEmpty()
0x133b: Return(); Pop(0)

0x133c: PushEmpty()
0x133d: Push("killme")
0x133e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133f: IF (Stack[-1] == 0) GOTO 0x1346; Pop(1)

0x1340: PushEmpty(int, object)
0x1341: Stack[-1] = Stack[-3]
0x1342: Call2 0x1352

0x1343: Stack[-5] = Stack[-2]
0x1344: Pop(2)
0x1345: Return(); Pop(0)

0x1346: Stack[-3] = (int) 0
0x1347: Return(); Pop(0)

0x1348: PushEmpty()
0x1349: Push("killme")
0x134a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x134b: IF (Stack[-1] == 0) GOTO 0x1351; Pop(1)

0x134c: PushEmpty(object)
0x134d: Stack[-1] = Stack[-2]
0x134e: Call2 0x1364

0x134f: Pop(1)
0x1350: Return(); Pop(0)

0x1351: Return(); Pop(0)

0x1352: PushEmpty()
0x1353: PushEmpty(bool, object)
0x1354: Stack[-1] = Stack[-3]
0x1355: Call2 0xe7e

0x1356: Pop(1)
0x1357: Pop(1); Push((bool) Stack[-1] == 0)
0x1358: IF (Stack[-1] == 0) GOTO 0x135b; Pop(1)

0x1359: Stack[-2] = (int) 0
0x135a: Return(); Pop(0)

0x135b: PushEmpty(bool, object)
0x135c: Stack[-1] = Stack[-3]
0x135d: Call2 0x13d0

0x135e: Pop(1)
0x135f: IF (Stack[-1] == 0) GOTO 0x1362; Pop(1)

0x1360: Stack[-2] = (int) 2
0x1361: GOTO 0x1363

0x1362: Stack[-2] = (int) 0
0x1363: Return(); Pop(0)

0x1364: PushEmpty()
0x1365: PushEmpty(object)
0x1366: Stack[-1] = Stack[-2]
0x1367: Call2 0x12ba

0x1368: Pop(1)
0x1369: Return(); Pop(0)

0x136a: PushEmpty()
0x136b: Stack[-2] = (int) 2
0x136c: Return(); Pop(0)

0x136d: PushEmpty()
0x136e: PushEmpty(object)
0x136f: Stack[-1] = Stack[-2]
0x1370: Call2 0x13a6

0x1371: Pop(1)
0x1372: Return(); Pop(0)

0x1373: Return(); Pop(0)

0x1374: PushEmpty()
0x1375: Stack[-2] = (bool) 0
0x1376: Return(); Pop(0)

0x1377: PushEmpty()
0x1378: Return(); Pop(0)

0x1379: PushEmpty(bool, bool)
0x137a: @ CanSee(Stack[-1], Stack[-3])
0x137b: Pop(0)
0x137c: Stack[-4] = (bool) 1
0x137d: Push(Stack[-1])
0x137e: IF (Stack[-1] == 0) GOTO 0x1387; Pop(1)

0x137f: PushEmpty(float, object)
0x1380: Stack[-1] = Stack[-5]
0x1381: Call2 0xdf3

0x1382: Pop(1)
0x1383: Push((int) 2250000)
0x1384: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1385: IF (Stack[-1] == 0) GOTO 0x1387; Pop(1)

0x1386: Stack[-4] = (bool) 0
0x1387: Return(); Pop(2)

0x1388: PushEmpty()
0x1389: PushEmpty(object)
0x138a: Stack[-1] = Stack[-2]
0x138b: Call2 0x12a8

0x138c: Pop(1)
0x138d: Return(); Pop(0)

0x138e: PushEmpty()
0x138f: Stack[-2] = (bool) 0
0x1390: Return(); Pop(0)

0x1391: PushEmpty()
0x1392: Return(); Pop(0)

0x1393: PushEmpty()
0x1394: Stack[-2] = (bool) 0
0x1395: Return(); Pop(0)

0x1396: PushEmpty()
0x1397: Return(); Pop(0)

0x1398: Stack[-1] = (int) 515564
0x1399: Return(); Pop(0)

0x139a: Stack[-1] = (int) 503349
0x139b: Return(); Pop(0)

0x139c: Stack[-1] = "ui/NPC_Citizen2.png"
0x139d: Return(); Pop(0)

0x139e: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x139f: Return(); Pop(0)

0x13a0: Stack[-1] = (bool) 0
0x13a1: Return(); Pop(0)

0x13a2: Push(GlobalVars[0])
0x13a3: Stack[-1] = (bool) 0
0x13a4: GlobalVars[0] = Stack[-1]; Pop(1)
0x13a5: Return(); Pop(0)

0x13a6: PushEmpty(bool, bool)
0x13a7: Push(GlobalVars[0])
0x13a8: IF (Stack[-1] == 0) GOTO 0x13b3; Pop(1)

0x13a9: @ IsOverrideActive(Stack[-1])
0x13aa: Pop(0)
0x13ab: Pop(0); Push((bool) Stack[-1] == 0)
0x13ac: IF (Stack[-1] == 0) GOTO 0x13b1; Pop(1)

0x13ad: PushEmpty(object)
0x13ae: Stack[-1] = Stack[-4]
0x13af: Call2 0x10d1

0x13b0: Pop(1)
0x13b1: Return(); Pop(2)

0x13b2: GOTO 0x13cd

0x13b3: Push((int) 1000)
0x13b4: PushEmpty(int, object)
0x13b5: Stack[-1] = Stack[-6]
0x13b6: Push(-2, 1); TaskCall(1)
0x13b7: Call2 0x28

0x13b8: Pop(-2, 1); TaskReturn
0x13b9: Pop(1)
0x13ba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13bb: IF (Stack[-1] == 0) GOTO 0x13cd; Pop(1)

0x13bc: PushEmpty(bool, object)
0x13bd: Stack[-1] = Stack[-5]
0x13be: Call2 0xf79

0x13bf: Pop(1)
0x13c0: Pop(1); Push((bool) Stack[-1] == 0)
0x13c1: IF (Stack[-1] == 0) GOTO 0x13c3; Pop(1)

0x13c2: Return(); Pop(2)

0x13c3: PushEmpty(object)
0x13c4: Stack[-1] = Stack[-4]
0x13c5: Push(-1, 1); TaskCall(0)
0x13c6: Call2 0x0

0x13c7: Pop(-1, 1); TaskReturn
0x13c8: Pop(1)
0x13c9: PushEmpty(object)
0x13ca: Stack[-1] = Stack[-4]
0x13cb: Call2 0xfb0

0x13cc: Pop(1)
0x13cd: Return(); Pop(2)

0x13ce: Stack[-1] = (bool) 0
0x13cf: Return(); Pop(0)

0x13d0: PushEmpty()
0x13d1: Stack[-2] = (bool) 1
0x13d2: Return(); Pop(0)

0x13d3: PushEmpty()
0x13d4: PushEmpty(bool, object, object, float, bool)
0x13d5: Stack[-4] = Stack[-8]
0x13d6: Stack[-3] = Stack[-7]
0x13d7: Stack[-2] = (float) 700.0
0x13d8: Stack[-1] = Stack[-6]
0x13d9: Call2 0x131a

0x13da: Stack[-9] = Stack[-5]
0x13db: Pop(5)
0x13dc: Return(); Pop(0)

0x13dd: PushEmpty()
0x13de: PushEmpty(bool, object)
0x13df: Stack[-1] = Stack[-3]
0x13e0: Call2 0xdfb

0x13e1: Pop(1)
0x13e2: IF (Stack[-1] == 0) GOTO 0x13ee; Pop(1)

0x13e3: PushEmpty(object)
0x13e4: Call2 0x100e

0x13e5: Pop(0)
0x13e6: Push((float)-0.07)
0x13e7: Push((bool) 1)
0x13e8: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13e9: Pop(3)
0x13ea: PushEmpty(bool)
0x13eb: Stack[-1] = (bool) 1
0x13ec: Call2 0x1126

0x13ed: Pop(1)
0x13ee: PushEmpty()
0x13ef: Call2 0x110e

0x13f0: Pop(0)
0x13f1: Push(GlobalVars[0])
0x13f2: Stack[-1] = (bool) 1
0x13f3: GlobalVars[0] = Stack[-1]; Pop(1)
0x13f4: Push((int) 50)
0x13f5: Push((int) 40)
0x13f6: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x13f7: Pop(2)
0x13f8: Return(); Pop(0)

