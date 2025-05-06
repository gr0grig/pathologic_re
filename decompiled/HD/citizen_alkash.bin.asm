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
	tourniquet
	bandage
	bottle_empty
	tvirin
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
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0xb0c
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x226 Vars = (int, int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0xa7f Vars = (object)
		EVENT_6 Op = 0xa8d Vars = ()
		EVENT_22 Op = 0xb06 Vars = (object, int, float, float)
		EVENT_16 Op = 0xb08 Vars = (object, string)
		EVENT_41 Op = 0xb0a Vars = (object)
	GTASK_4 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0xb24 Vars = (object)
		EVENT_17 Op = 0xb38 Vars = (object)
		EVENT_30 Op = 0xb50 Vars = (object, object, bool)
		EVENT_40 Op = 0xb6c Vars = (object)
		EVENT_42 Op = 0xb80 Vars = (object, string)
		EVENT_26 Op = 0xba5 Vars = (string)
		EVENT_1 Op = 0xbb3 Vars = (object)
		EVENT_3 Op = 0xbc6 Vars = (object)
		EVENT_7 Op = 0xbcc Vars = (int)
		EVENT_6 Op = 0xbd8 Vars = ()
		EVENT_41 Op = 0xbef Vars = (object)
		EVENT_10 Op = 0xc60 Vars = (object)
		EVENT_28 Op = 0xc64 Vars = ()
	GTASK_5  Params = 0
		EVENT_0 Op = 0xc7d Vars = (object)
		EVENT_17 Op = 0xc91 Vars = (object)
		EVENT_30 Op = 0xca9 Vars = (object, object, bool)
		EVENT_40 Op = 0xcc5 Vars = (object)
		EVENT_42 Op = 0xcd9 Vars = (object, string)
		EVENT_26 Op = 0xcfe Vars = (string)
		EVENT_6 Op = 0xd0c Vars = ()
		EVENT_1 Op = 0xd13 Vars = (object)
	GTASK_6 Vars = (object) Params = 1
		EVENT_0 Op = 0xdaf Vars = (object)
		EVENT_17 Op = 0xdc3 Vars = (object)
		EVENT_30 Op = 0xddb Vars = (object, object, bool)
		EVENT_40 Op = 0xdf7 Vars = (object)
		EVENT_42 Op = 0xe0b Vars = (object, string)
		EVENT_26 Op = 0xe30 Vars = (string)
		EVENT_41 Op = 0xe49 Vars = (object)
		EVENT_7 Op = 0xe52 Vars = (int)
		EVENT_6 Op = 0xe75 Vars = ()
		EVENT_1 Op = 0xe7c Vars = (object)
	GTASK_7 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_8 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x112e Vars = ()
		EVENT_7 Op = 0x1166 Vars = (int)
		EVENT_1 Op = 0x1181 Vars = (object)
		EVENT_2 Op = 0x1190 Vars = (object)
		EVENT_10 Op = 0x1216 Vars = (object)
		EVENT_41 Op = 0x1221 Vars = (object)

Events:
EVENT_16 Op = 0x1699 Vars = (object, string)
EVENT_41 Op = 0x16a6 Vars = (object)
EVENT_22 Op = 0x16ac Vars = (object, int, float, float)
EVENT_43 Op = 0x16b4 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x1857

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x140f

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
0x1c: Call2 0x1857

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
0x2d: Call2 0x137b

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x1851

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x184f

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x1853

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x1855

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x15e7

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
0x69: Call2 0x13c0

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
0x77: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x78: PushEmpty(bool, object)
0x79: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a: Call2 0x150f

0x7b: Pop(1)
0x7c: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0x7d: PushEmpty(string)
0x7e: Stack[-1] = "Neutral"
0x7f: Call2 0x210

0x80: Pop(1)
0x81: Push((int) 543012)
0x82: @@ SetMessage(Stack[-1])
0x83: Pop(1)
0x84: @@ ClearReplies()
0x85: Pop(0)
0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88: Call2 0x1525

0x89: Pop(1)
0x8a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8b: Push((int) 543015)
0x8c: Push((int) 45468)
0x8d: Push((int) 45467)
0x8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f: Pop(3)
0x90: PushEmpty(bool, object)
0x91: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92: Call2 0x152f

0x93: Pop(1)
0x94: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x95: Push((int) 543022)
0x96: Push((int) 45475)
0x97: Push((int) 45474)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: PushEmpty(bool)
0x9b: Stack[-1] = (bool) 1
0x9c: PushEmpty(bool)
0x9d: Stack[-1] = (bool) 1
0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call2 0x1539

0xa1: Pop(1)
0xa2: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa3: PushEmpty(bool, object)
0xa4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Call2 0x1543

0xa6: Pop(1)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Stack[-1] = (bool) 0
0xa9: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaa: PushEmpty(bool, object)
0xab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac: Call2 0x154d

0xad: Pop(1)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Stack[-1] = (bool) 0
0xb0: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb1: Push((int) 543026)
0xb2: Push((int) 45480)
0xb3: Push((int) 45478)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: PushEmpty(bool)
0xb7: Stack[-1] = (bool) 1
0xb8: PushEmpty(bool, object)
0xb9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba: Call2 0x1557

0xbb: Pop(1)
0xbc: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbd: PushEmpty(bool, object)
0xbe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Call2 0x1561

0xc0: Pop(1)
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: Stack[-1] = (bool) 0
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: Push((int) 543034)
0xc5: Push((int) 45487)
0xc6: Push((int) 45486)
0xc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(3)
0xc9: Push((int) 536643)
0xca: Push((int) -1)
0xcb: Push((int) 38471)
0xcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd: Pop(3)
0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0x1525

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd3: Push((int) 543014)
0xd4: Push((int) -1)
0xd5: Push((int) 45466)
0xd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(3)
0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x1525

0xdb: Pop(1)
0xdc: Pop(1); Push((bool) Stack[-1] == 0)
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: Push((int) 543027)
0xdf: Push((int) -1)
0xe0: Push((int) 45479)
0xe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(3)
0xe3: Push((int) 536852)
0xe4: Push((int) -1)
0xe5: Push((int) 38688)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: GOTO 0x1f2

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Neutral"
0xeb: Call2 0x210

0xec: Pop(1)
0xed: Push((int) 536636)
0xee: @@ SetMessage(Stack[-1])
0xef: Pop(1)
0xf0: @@ ClearReplies()
0xf1: Pop(0)
0xf2: PushEmpty(bool)
0xf3: Stack[-1] = (bool) 0
0xf4: PushEmpty(bool, object)
0xf5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Call2 0x14f7

0xf7: Pop(1)
0xf8: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf9: PushEmpty(bool, object)
0xfa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Call2 0x151b

0xfc: Pop(1)
0xfd: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfe: Stack[-1] = (bool) 1
0xff: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x100: Push((int) 536638)
0x101: Push((int) -1)
0x102: Push((int) 38466)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: PushEmpty(bool)
0x106: Stack[-1] = (bool) 0
0x107: PushEmpty(bool, object)
0x108: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x109: Call2 0x14f7

0x10a: Pop(1)
0x10b: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10c: PushEmpty(bool, object)
0x10d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Call2 0x151b

0x10f: Pop(1)
0x110: Pop(1); Push((bool) Stack[-1] == 0)
0x111: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x112: Stack[-1] = (bool) 1
0x113: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x114: Push((int) 536644)
0x115: Push((int) -1)
0x116: Push((int) 38472)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: PushEmpty(bool)
0x11a: Stack[-1] = (bool) 0
0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Call2 0x1503

0x11e: Pop(1)
0x11f: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0x151b

0x123: Pop(1)
0x124: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x125: Stack[-1] = (bool) 1
0x126: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x127: Push((int) 536639)
0x128: Push((int) 38468)
0x129: Push((int) 38467)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: PushEmpty(bool)
0x12d: Stack[-1] = (bool) 0
0x12e: PushEmpty(bool, object)
0x12f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x130: Call2 0x1503

0x131: Pop(1)
0x132: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x133: PushEmpty(bool, object)
0x134: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x135: Call2 0x151b

0x136: Pop(1)
0x137: Pop(1); Push((bool) Stack[-1] == 0)
0x138: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x139: Stack[-1] = (bool) 1
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: Push((int) 536642)
0x13c: Push((int) -1)
0x13d: Push((int) 38470)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: PushEmpty(bool)
0x141: Stack[-1] = (bool) 0
0x142: PushEmpty(bool, object)
0x143: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144: Call2 0x1525

0x145: Pop(1)
0x146: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x147: PushEmpty(bool, object)
0x148: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x149: Call2 0x14f7

0x14a: Pop(1)
0x14b: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14c: Stack[-1] = (bool) 1
0x14d: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14e: Push((int) 536645)
0x14f: Push((int) 38474)
0x150: Push((int) 38473)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x155: Call2 0x152f

0x156: Pop(1)
0x157: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x158: Push((int) 536663)
0x159: Push((int) 38493)
0x15a: Push((int) 38492)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: PushEmpty(bool, object)
0x15e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15f: Call2 0x1539

0x160: Pop(1)
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: Push((int) 536685)
0x163: Push((int) 38517)
0x164: Push((int) 38516)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: PushEmpty(bool)
0x168: Stack[-1] = (bool) 0
0x169: PushEmpty(bool, object)
0x16a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Call2 0x1543

0x16c: Pop(1)
0x16d: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16e: PushEmpty(bool, object)
0x16f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x170: Call2 0x14f7

0x171: Pop(1)
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Stack[-1] = (bool) 1
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: Push((int) 536710)
0x176: Push((int) 38542)
0x177: Push((int) 38541)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: PushEmpty(bool, object)
0x17b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Call2 0x154d

0x17d: Pop(1)
0x17e: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x17f: Push((int) 536747)
0x180: Push((int) 38579)
0x181: Push((int) 38578)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: PushEmpty(bool)
0x185: Stack[-1] = (bool) 0
0x186: PushEmpty(bool, object)
0x187: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x188: Call2 0x1557

0x189: Pop(1)
0x18a: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18b: PushEmpty(bool, object)
0x18c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18d: Call2 0x14f7

0x18e: Pop(1)
0x18f: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x190: Stack[-1] = (bool) 1
0x191: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x192: Push((int) 536769)
0x193: Push((int) 38602)
0x194: Push((int) 38601)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: PushEmpty(bool, object)
0x198: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x199: Call2 0x1561

0x19a: Pop(1)
0x19b: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19c: Push((int) 536782)
0x19d: Push((int) 38617)
0x19e: Push((int) 38616)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: PushEmpty(bool)
0x1a2: Stack[-1] = (bool) 0
0x1a3: PushEmpty(bool, object)
0x1a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a5: Call2 0x156b

0x1a6: Pop(1)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1a8: PushEmpty(bool, object)
0x1a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1aa: Call2 0x14f7

0x1ab: Pop(1)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: Stack[-1] = (bool) 1
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1af: Push((int) 536792)
0x1b0: Push((int) 38627)
0x1b1: Push((int) 38626)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: PushEmpty(bool, object)
0x1b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b6: Call2 0x1575

0x1b7: Pop(1)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: Push((int) 536814)
0x1ba: Push((int) 38651)
0x1bb: Push((int) 38650)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: PushEmpty(bool)
0x1bf: Stack[-1] = (bool) 0
0x1c0: PushEmpty(bool, object)
0x1c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c2: Call2 0x157f

0x1c3: Pop(1)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c5: PushEmpty(bool, object)
0x1c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Call2 0x14f7

0x1c8: Pop(1)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: Stack[-1] = (bool) 1
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: Push((int) 536833)
0x1cd: Push((int) 38670)
0x1ce: Push((int) 38669)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: PushEmpty(bool, object)
0x1d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Call2 0x1589

0x1d4: Pop(1)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d6: Push((int) 536843)
0x1d7: Push((int) 38680)
0x1d8: Push((int) 38679)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: PushEmpty(bool, object)
0x1dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1dd: Call2 0x14f7

0x1de: Pop(1)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e0: Push((int) 536850)
0x1e1: Push((int) -1)
0x1e2: Push((int) 38686)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: PushEmpty(bool, object)
0x1e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e7: Call2 0x1503

0x1e8: Pop(1)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ea: Push((int) 536851)
0x1eb: Push((int) -1)
0x1ec: Push((int) 38687)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: GOTO 0x1f2

0x1f0: Return(); Pop(0)

0x1f1: GOTO 0x76

0x1f2: PushEmpty(bool)
0x1f3: Call2 0x1857

0x1f4: Pop(0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f6: @ lshWaitForAnimEnd()
0x1f7: Pop(0)
0x1f8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1fa: GOTO 0x200

0x1fb: PushEmpty(string)
0x1fc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1fd: Call2 0x140f

0x1fe: Pop(1)
0x1ff: GOTO 0x1f6

0x200: GOTO 0x20f

0x201: Push("all")
0x202: Push("idle")
0x203: @ PlayAnimation(Stack[-2], Stack[-1])
0x204: Pop(2)
0x205: @ WaitForAnimEnd()
0x206: Pop(0)
0x207: Push( Stack[3 + Tasks[-1].StackPointer] )
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: GOTO 0x20f

0x20a: Push("all")
0x20b: Push("idle")
0x20c: @ PlayAnimation(Stack[-2], Stack[-1])
0x20d: Pop(2)
0x20e: GOTO 0x205

0x20f: Return(); Pop(0)

0x210: PushEmpty()
0x211: PushEmpty(bool)
0x212: Call2 0x1857

0x213: Pop(0)
0x214: Pop(1); Push((bool) Stack[-1] == 0)
0x215: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x216: Return(); Pop(0)

0x217: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: Return(); Pop(0)

0x21a: PushEmpty(string, bool)
0x21b: Stack[-2] = Stack[-3]
0x21c: Push("")
0x21d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21f: Stack[-1] = (bool) 0
0x220: GOTO 0x222

0x221: Stack[-1] = (bool) 1
0x222: Call2 0x141f

0x223: Pop(2)
0x224: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x225: Return(); Pop(0)

0x226: PushEmpty()
0x227: Push((int) 1)
0x228: IF (Stack[-1] == 0) GOTO 0xa6f; Pop(1)

0x229: PushEmpty()
0x22a: Call2 0x1439

0x22b: Pop(0)
0x22c: Push((int) 38471)
0x22d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x22f: PushEmpty(object, object)
0x230: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x231: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x232: Call2 0x14f2

0x233: Pop(2)
0x234: Push((int) 38466)
0x235: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x237: PushEmpty(object, object)
0x238: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x239: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23a: Call2 0x14f2

0x23b: Pop(2)
0x23c: Push((int) 38472)
0x23d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23f: PushEmpty(object, object)
0x240: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x241: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x242: Call2 0x14f2

0x243: Pop(2)
0x244: Push((int) 38469)
0x245: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: PushEmpty(object, object)
0x248: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x249: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24a: Call2 0x14f2

0x24b: Pop(2)
0x24c: Push((int) 38470)
0x24d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: PushEmpty(object, object)
0x250: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x251: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x252: Call2 0x14f2

0x253: Pop(2)
0x254: Push((int) 45464)
0x255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x257: PushEmpty(bool, object)
0x258: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x259: Call2 0x150f

0x25a: Pop(1)
0x25b: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x25c: PushEmpty(string)
0x25d: Stack[-1] = "Neutral"
0x25e: Call2 0x210

0x25f: Pop(1)
0x260: Push((int) 543012)
0x261: @@ SetMessage(Stack[-1])
0x262: Pop(1)
0x263: @@ ClearReplies()
0x264: Pop(0)
0x265: PushEmpty(bool, object)
0x266: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x267: Call2 0x1525

0x268: Pop(1)
0x269: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26a: Push((int) 543015)
0x26b: Push((int) 45468)
0x26c: Push((int) 45467)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: PushEmpty(bool, object)
0x270: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x271: Call2 0x152f

0x272: Pop(1)
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: Push((int) 543022)
0x275: Push((int) 45475)
0x276: Push((int) 45474)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: PushEmpty(bool)
0x27a: Stack[-1] = (bool) 1
0x27b: PushEmpty(bool)
0x27c: Stack[-1] = (bool) 1
0x27d: PushEmpty(bool, object)
0x27e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27f: Call2 0x1539

0x280: Pop(1)
0x281: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x284: Call2 0x1543

0x285: Pop(1)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: Stack[-1] = (bool) 0
0x288: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x289: PushEmpty(bool, object)
0x28a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28b: Call2 0x154d

0x28c: Pop(1)
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: Stack[-1] = (bool) 0
0x28f: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x290: Push((int) 543026)
0x291: Push((int) 45480)
0x292: Push((int) 45478)
0x293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(3)
0x295: PushEmpty(bool)
0x296: Stack[-1] = (bool) 1
0x297: PushEmpty(bool, object)
0x298: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x299: Call2 0x1557

0x29a: Pop(1)
0x29b: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29c: PushEmpty(bool, object)
0x29d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29e: Call2 0x1561

0x29f: Pop(1)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: Stack[-1] = (bool) 0
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a3: Push((int) 543034)
0x2a4: Push((int) 45487)
0x2a5: Push((int) 45486)
0x2a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(3)
0x2a8: Push((int) 536643)
0x2a9: Push((int) -1)
0x2aa: Push((int) 38471)
0x2ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ac: Pop(3)
0x2ad: PushEmpty(bool, object)
0x2ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2af: Call2 0x1525

0x2b0: Pop(1)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b2: Push((int) 543014)
0x2b3: Push((int) -1)
0x2b4: Push((int) 45466)
0x2b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b6: Pop(3)
0x2b7: PushEmpty(bool, object)
0x2b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b9: Call2 0x1525

0x2ba: Pop(1)
0x2bb: Pop(1); Push((bool) Stack[-1] == 0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bd: Push((int) 543027)
0x2be: Push((int) -1)
0x2bf: Push((int) 45479)
0x2c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c1: Pop(3)
0x2c2: Push((int) 536852)
0x2c3: Push((int) -1)
0x2c4: Push((int) 38688)
0x2c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c6: Pop(3)
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty(string)
0x2c9: Stack[-1] = "Neutral"
0x2ca: Call2 0x210

0x2cb: Pop(1)
0x2cc: Push((int) 536636)
0x2cd: @@ SetMessage(Stack[-1])
0x2ce: Pop(1)
0x2cf: @@ ClearReplies()
0x2d0: Pop(0)
0x2d1: PushEmpty(bool)
0x2d2: Stack[-1] = (bool) 0
0x2d3: PushEmpty(bool, object)
0x2d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d5: Call2 0x14f7

0x2d6: Pop(1)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d8: PushEmpty(bool, object)
0x2d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2da: Call2 0x151b

0x2db: Pop(1)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: Stack[-1] = (bool) 1
0x2de: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2df: Push((int) 536638)
0x2e0: Push((int) -1)
0x2e1: Push((int) 38466)
0x2e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e3: Pop(3)
0x2e4: PushEmpty(bool)
0x2e5: Stack[-1] = (bool) 0
0x2e6: PushEmpty(bool, object)
0x2e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e8: Call2 0x14f7

0x2e9: Pop(1)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2eb: PushEmpty(bool, object)
0x2ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ed: Call2 0x151b

0x2ee: Pop(1)
0x2ef: Pop(1); Push((bool) Stack[-1] == 0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Stack[-1] = (bool) 1
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f3: Push((int) 536644)
0x2f4: Push((int) -1)
0x2f5: Push((int) 38472)
0x2f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f7: Pop(3)
0x2f8: PushEmpty(bool)
0x2f9: Stack[-1] = (bool) 0
0x2fa: PushEmpty(bool, object)
0x2fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fc: Call2 0x1503

0x2fd: Pop(1)
0x2fe: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2ff: PushEmpty(bool, object)
0x300: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x301: Call2 0x151b

0x302: Pop(1)
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: Stack[-1] = (bool) 1
0x305: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x306: Push((int) 536639)
0x307: Push((int) 38468)
0x308: Push((int) 38467)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: PushEmpty(bool)
0x30c: Stack[-1] = (bool) 0
0x30d: PushEmpty(bool, object)
0x30e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30f: Call2 0x1503

0x310: Pop(1)
0x311: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x312: PushEmpty(bool, object)
0x313: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x314: Call2 0x151b

0x315: Pop(1)
0x316: Pop(1); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: Stack[-1] = (bool) 1
0x319: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31a: Push((int) 536642)
0x31b: Push((int) -1)
0x31c: Push((int) 38470)
0x31d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31e: Pop(3)
0x31f: PushEmpty(bool)
0x320: Stack[-1] = (bool) 0
0x321: PushEmpty(bool, object)
0x322: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x323: Call2 0x1525

0x324: Pop(1)
0x325: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x326: PushEmpty(bool, object)
0x327: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x328: Call2 0x14f7

0x329: Pop(1)
0x32a: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32b: Stack[-1] = (bool) 1
0x32c: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32d: Push((int) 536645)
0x32e: Push((int) 38474)
0x32f: Push((int) 38473)
0x330: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x331: Pop(3)
0x332: PushEmpty(bool, object)
0x333: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x334: Call2 0x152f

0x335: Pop(1)
0x336: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x337: Push((int) 536663)
0x338: Push((int) 38493)
0x339: Push((int) 38492)
0x33a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(3)
0x33c: PushEmpty(bool, object)
0x33d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33e: Call2 0x1539

0x33f: Pop(1)
0x340: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x341: Push((int) 536685)
0x342: Push((int) 38517)
0x343: Push((int) 38516)
0x344: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x345: Pop(3)
0x346: PushEmpty(bool)
0x347: Stack[-1] = (bool) 0
0x348: PushEmpty(bool, object)
0x349: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34a: Call2 0x1543

0x34b: Pop(1)
0x34c: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34d: PushEmpty(bool, object)
0x34e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34f: Call2 0x14f7

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x352: Stack[-1] = (bool) 1
0x353: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x354: Push((int) 536710)
0x355: Push((int) 38542)
0x356: Push((int) 38541)
0x357: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x358: Pop(3)
0x359: PushEmpty(bool, object)
0x35a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35b: Call2 0x154d

0x35c: Pop(1)
0x35d: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35e: Push((int) 536747)
0x35f: Push((int) 38579)
0x360: Push((int) 38578)
0x361: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x362: Pop(3)
0x363: PushEmpty(bool)
0x364: Stack[-1] = (bool) 0
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x367: Call2 0x1557

0x368: Pop(1)
0x369: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36a: PushEmpty(bool, object)
0x36b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36c: Call2 0x14f7

0x36d: Pop(1)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: Stack[-1] = (bool) 1
0x370: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x371: Push((int) 536769)
0x372: Push((int) 38602)
0x373: Push((int) 38601)
0x374: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x375: Pop(3)
0x376: PushEmpty(bool, object)
0x377: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x378: Call2 0x1561

0x379: Pop(1)
0x37a: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37b: Push((int) 536782)
0x37c: Push((int) 38617)
0x37d: Push((int) 38616)
0x37e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37f: Pop(3)
0x380: PushEmpty(bool)
0x381: Stack[-1] = (bool) 0
0x382: PushEmpty(bool, object)
0x383: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x384: Call2 0x156b

0x385: Pop(1)
0x386: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x387: PushEmpty(bool, object)
0x388: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x389: Call2 0x14f7

0x38a: Pop(1)
0x38b: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38c: Stack[-1] = (bool) 1
0x38d: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x38e: Push((int) 536792)
0x38f: Push((int) 38627)
0x390: Push((int) 38626)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: PushEmpty(bool, object)
0x394: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x395: Call2 0x1575

0x396: Pop(1)
0x397: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x398: Push((int) 536814)
0x399: Push((int) 38651)
0x39a: Push((int) 38650)
0x39b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39c: Pop(3)
0x39d: PushEmpty(bool)
0x39e: Stack[-1] = (bool) 0
0x39f: PushEmpty(bool, object)
0x3a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a1: Call2 0x157f

0x3a2: Pop(1)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a4: PushEmpty(bool, object)
0x3a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a6: Call2 0x14f7

0x3a7: Pop(1)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: Stack[-1] = (bool) 1
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ab: Push((int) 536833)
0x3ac: Push((int) 38670)
0x3ad: Push((int) 38669)
0x3ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: PushEmpty(bool, object)
0x3b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b2: Call2 0x1589

0x3b3: Pop(1)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b5: Push((int) 536843)
0x3b6: Push((int) 38680)
0x3b7: Push((int) 38679)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: PushEmpty(bool, object)
0x3bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3bc: Call2 0x14f7

0x3bd: Pop(1)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3bf: Push((int) 536850)
0x3c0: Push((int) -1)
0x3c1: Push((int) 38686)
0x3c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c3: Pop(3)
0x3c4: PushEmpty(bool, object)
0x3c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c6: Call2 0x1503

0x3c7: Pop(1)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c9: Push((int) 536851)
0x3ca: Push((int) -1)
0x3cb: Push((int) 38687)
0x3cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cd: Pop(3)
0x3ce: Return(); Pop(0)

0x3cf: Push((int) 38680)
0x3d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3d2: PushEmpty(string)
0x3d3: Stack[-1] = "Neutral"
0x3d4: Call2 0x210

0x3d5: Pop(1)
0x3d6: Push((int) 536844)
0x3d7: @@ SetMessage(Stack[-1])
0x3d8: Pop(1)
0x3d9: @@ ClearReplies()
0x3da: Pop(0)
0x3db: Push((int) 536845)
0x3dc: Push((int) 38682)
0x3dd: Push((int) 38681)
0x3de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3df: Pop(3)
0x3e0: PushEmpty(bool, object)
0x3e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e2: Call2 0x14f7

0x3e3: Pop(1)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e5: Push((int) 536849)
0x3e6: Push((int) -1)
0x3e7: Push((int) 38685)
0x3e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e9: Pop(3)
0x3ea: Return(); Pop(0)

0x3eb: Push((int) 38682)
0x3ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3ee: PushEmpty(string)
0x3ef: Stack[-1] = "Neutral"
0x3f0: Call2 0x210

0x3f1: Pop(1)
0x3f2: Push((int) 536846)
0x3f3: @@ SetMessage(Stack[-1])
0x3f4: Pop(1)
0x3f5: @@ ClearReplies()
0x3f6: Pop(0)
0x3f7: Push((int) 536847)
0x3f8: Push((int) -1)
0x3f9: Push((int) 38683)
0x3fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fb: Pop(3)
0x3fc: Push((int) 536848)
0x3fd: Push((int) -1)
0x3fe: Push((int) 38684)
0x3ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(3)
0x401: Return(); Pop(0)

0x402: Push((int) 38670)
0x403: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x405: PushEmpty(string)
0x406: Stack[-1] = "Neutral"
0x407: Call2 0x210

0x408: Pop(1)
0x409: Push((int) 536834)
0x40a: @@ SetMessage(Stack[-1])
0x40b: Pop(1)
0x40c: @@ ClearReplies()
0x40d: Pop(0)
0x40e: Push((int) 536835)
0x40f: Push((int) 38672)
0x410: Push((int) 38671)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: Push((int) 536842)
0x414: Push((int) -1)
0x415: Push((int) 38678)
0x416: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x417: Pop(3)
0x418: Return(); Pop(0)

0x419: Push((int) 38672)
0x41a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x41c: PushEmpty(string)
0x41d: Stack[-1] = "Neutral"
0x41e: Call2 0x210

0x41f: Pop(1)
0x420: Push((int) 536836)
0x421: @@ SetMessage(Stack[-1])
0x422: Pop(1)
0x423: @@ ClearReplies()
0x424: Pop(0)
0x425: Push((int) 536837)
0x426: Push((int) 38674)
0x427: Push((int) 38673)
0x428: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x429: Pop(3)
0x42a: Push((int) 536841)
0x42b: Push((int) -1)
0x42c: Push((int) 38677)
0x42d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42e: Pop(3)
0x42f: Return(); Pop(0)

0x430: Push((int) 38674)
0x431: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x433: PushEmpty(string)
0x434: Stack[-1] = "Neutral"
0x435: Call2 0x210

0x436: Pop(1)
0x437: Push((int) 536838)
0x438: @@ SetMessage(Stack[-1])
0x439: Pop(1)
0x43a: @@ ClearReplies()
0x43b: Pop(0)
0x43c: Push((int) 536839)
0x43d: Push((int) -1)
0x43e: Push((int) 38675)
0x43f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: Push((int) 536840)
0x442: Push((int) -1)
0x443: Push((int) 38676)
0x444: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x445: Pop(3)
0x446: Return(); Pop(0)

0x447: Push((int) 38651)
0x448: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x44a: PushEmpty(string)
0x44b: Stack[-1] = "Neutral"
0x44c: Call2 0x210

0x44d: Pop(1)
0x44e: Push((int) 536815)
0x44f: @@ SetMessage(Stack[-1])
0x450: Pop(1)
0x451: @@ ClearReplies()
0x452: Pop(0)
0x453: PushEmpty(bool, object)
0x454: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x455: Call2 0x14f7

0x456: Pop(1)
0x457: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x458: Push((int) 536816)
0x459: Push((int) 38653)
0x45a: Push((int) 38652)
0x45b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45c: Pop(3)
0x45d: Push((int) 536823)
0x45e: Push((int) 38660)
0x45f: Push((int) 38659)
0x460: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x461: Pop(3)
0x462: Push((int) 536832)
0x463: Push((int) -1)
0x464: Push((int) 38668)
0x465: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(3)
0x467: Return(); Pop(0)

0x468: Push((int) 38660)
0x469: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x46b: PushEmpty(string)
0x46c: Stack[-1] = "Neutral"
0x46d: Call2 0x210

0x46e: Pop(1)
0x46f: Push((int) 536824)
0x470: @@ SetMessage(Stack[-1])
0x471: Pop(1)
0x472: @@ ClearReplies()
0x473: Pop(0)
0x474: Push((int) 536825)
0x475: Push((int) 38662)
0x476: Push((int) 38661)
0x477: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x478: Pop(3)
0x479: Push((int) 536830)
0x47a: Push((int) -1)
0x47b: Push((int) 38666)
0x47c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47d: Pop(3)
0x47e: Push((int) 536831)
0x47f: Push((int) -1)
0x480: Push((int) 38667)
0x481: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x482: Pop(3)
0x483: Return(); Pop(0)

0x484: Push((int) 38662)
0x485: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x487: PushEmpty(string)
0x488: Stack[-1] = "Neutral"
0x489: Call2 0x210

0x48a: Pop(1)
0x48b: Push((int) 536826)
0x48c: @@ SetMessage(Stack[-1])
0x48d: Pop(1)
0x48e: @@ ClearReplies()
0x48f: Pop(0)
0x490: Push((int) 536827)
0x491: Push((int) 38664)
0x492: Push((int) 38663)
0x493: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x494: Pop(3)
0x495: Return(); Pop(0)

0x496: Push((int) 38664)
0x497: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x498: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x499: PushEmpty(string)
0x49a: Stack[-1] = "Neutral"
0x49b: Call2 0x210

0x49c: Pop(1)
0x49d: Push((int) 536828)
0x49e: @@ SetMessage(Stack[-1])
0x49f: Pop(1)
0x4a0: @@ ClearReplies()
0x4a1: Pop(0)
0x4a2: Push((int) 536829)
0x4a3: Push((int) -1)
0x4a4: Push((int) 38665)
0x4a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a6: Pop(3)
0x4a7: Return(); Pop(0)

0x4a8: Push((int) 38653)
0x4a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4ab: PushEmpty(string)
0x4ac: Stack[-1] = "Neutral"
0x4ad: Call2 0x210

0x4ae: Pop(1)
0x4af: Push((int) 536817)
0x4b0: @@ SetMessage(Stack[-1])
0x4b1: Pop(1)
0x4b2: @@ ClearReplies()
0x4b3: Pop(0)
0x4b4: Push((int) 536818)
0x4b5: Push((int) 38655)
0x4b6: Push((int) 38654)
0x4b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b8: Pop(3)
0x4b9: Push((int) 536822)
0x4ba: Push((int) -1)
0x4bb: Push((int) 38658)
0x4bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bd: Pop(3)
0x4be: Return(); Pop(0)

0x4bf: Push((int) 38655)
0x4c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4c2: PushEmpty(string)
0x4c3: Stack[-1] = "Neutral"
0x4c4: Call2 0x210

0x4c5: Pop(1)
0x4c6: Push((int) 536819)
0x4c7: @@ SetMessage(Stack[-1])
0x4c8: Pop(1)
0x4c9: @@ ClearReplies()
0x4ca: Pop(0)
0x4cb: Push((int) 536820)
0x4cc: Push((int) -1)
0x4cd: Push((int) 38656)
0x4ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cf: Pop(3)
0x4d0: Push((int) 536821)
0x4d1: Push((int) -1)
0x4d2: Push((int) 38657)
0x4d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d4: Pop(3)
0x4d5: Return(); Pop(0)

0x4d6: Push((int) 38627)
0x4d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4d9: PushEmpty(string)
0x4da: Stack[-1] = "Neutral"
0x4db: Call2 0x210

0x4dc: Pop(1)
0x4dd: Push((int) 536793)
0x4de: @@ SetMessage(Stack[-1])
0x4df: Pop(1)
0x4e0: @@ ClearReplies()
0x4e1: Pop(0)
0x4e2: Push((int) 536794)
0x4e3: Push((int) 38629)
0x4e4: Push((int) 38628)
0x4e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e6: Pop(3)
0x4e7: Push((int) 536806)
0x4e8: Push((int) 38642)
0x4e9: Push((int) 38641)
0x4ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4eb: Pop(3)
0x4ec: Push((int) 536813)
0x4ed: Push((int) -1)
0x4ee: Push((int) 38649)
0x4ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f0: Pop(3)
0x4f1: Return(); Pop(0)

0x4f2: Push((int) 38642)
0x4f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f4: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x4f5: PushEmpty(string)
0x4f6: Stack[-1] = "Neutral"
0x4f7: Call2 0x210

0x4f8: Pop(1)
0x4f9: Push((int) 536807)
0x4fa: @@ SetMessage(Stack[-1])
0x4fb: Pop(1)
0x4fc: @@ ClearReplies()
0x4fd: Pop(0)
0x4fe: Push((int) 536808)
0x4ff: Push((int) 38644)
0x500: Push((int) 38643)
0x501: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x502: Pop(3)
0x503: Push((int) 536812)
0x504: Push((int) 38644)
0x505: Push((int) 38647)
0x506: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x507: Pop(3)
0x508: Return(); Pop(0)

0x509: Push((int) 38644)
0x50a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50b: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x50c: PushEmpty(string)
0x50d: Stack[-1] = "Neutral"
0x50e: Call2 0x210

0x50f: Pop(1)
0x510: Push((int) 536809)
0x511: @@ SetMessage(Stack[-1])
0x512: Pop(1)
0x513: @@ ClearReplies()
0x514: Pop(0)
0x515: Push((int) 536810)
0x516: Push((int) -1)
0x517: Push((int) 38645)
0x518: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x519: Pop(3)
0x51a: Push((int) 536811)
0x51b: Push((int) -1)
0x51c: Push((int) 38646)
0x51d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51e: Pop(3)
0x51f: Return(); Pop(0)

0x520: Push((int) 38629)
0x521: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x523: PushEmpty(string)
0x524: Stack[-1] = "Neutral"
0x525: Call2 0x210

0x526: Pop(1)
0x527: Push((int) 536795)
0x528: @@ SetMessage(Stack[-1])
0x529: Pop(1)
0x52a: @@ ClearReplies()
0x52b: Pop(0)
0x52c: Push((int) 536796)
0x52d: Push((int) 38631)
0x52e: Push((int) 38630)
0x52f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x530: Pop(3)
0x531: Push((int) 536805)
0x532: Push((int) -1)
0x533: Push((int) 38640)
0x534: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x535: Pop(3)
0x536: Return(); Pop(0)

0x537: Push((int) 38631)
0x538: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x539: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x53a: PushEmpty(string)
0x53b: Stack[-1] = "Neutral"
0x53c: Call2 0x210

0x53d: Pop(1)
0x53e: Push((int) 536797)
0x53f: @@ SetMessage(Stack[-1])
0x540: Pop(1)
0x541: @@ ClearReplies()
0x542: Pop(0)
0x543: Push((int) 536798)
0x544: Push((int) 38633)
0x545: Push((int) 38632)
0x546: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x547: Pop(3)
0x548: Push((int) 536804)
0x549: Push((int) -1)
0x54a: Push((int) 38639)
0x54b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54c: Pop(3)
0x54d: Return(); Pop(0)

0x54e: Push((int) 38633)
0x54f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x550: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x551: PushEmpty(string)
0x552: Stack[-1] = "Neutral"
0x553: Call2 0x210

0x554: Pop(1)
0x555: Push((int) 536799)
0x556: @@ SetMessage(Stack[-1])
0x557: Pop(1)
0x558: @@ ClearReplies()
0x559: Pop(0)
0x55a: Push((int) 536800)
0x55b: Push((int) 38635)
0x55c: Push((int) 38634)
0x55d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55e: Pop(3)
0x55f: Push((int) 536803)
0x560: Push((int) 38635)
0x561: Push((int) 38637)
0x562: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x563: Pop(3)
0x564: Return(); Pop(0)

0x565: Push((int) 38635)
0x566: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x567: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x568: PushEmpty(string)
0x569: Stack[-1] = "Neutral"
0x56a: Call2 0x210

0x56b: Pop(1)
0x56c: Push((int) 536801)
0x56d: @@ SetMessage(Stack[-1])
0x56e: Pop(1)
0x56f: @@ ClearReplies()
0x570: Pop(0)
0x571: Push((int) 536802)
0x572: Push((int) -1)
0x573: Push((int) 38636)
0x574: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x575: Pop(3)
0x576: Return(); Pop(0)

0x577: Push((int) 38617)
0x578: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x579: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x57a: PushEmpty(string)
0x57b: Stack[-1] = "Neutral"
0x57c: Call2 0x210

0x57d: Pop(1)
0x57e: Push((int) 536783)
0x57f: @@ SetMessage(Stack[-1])
0x580: Pop(1)
0x581: @@ ClearReplies()
0x582: Pop(0)
0x583: Push((int) 536784)
0x584: Push((int) 38619)
0x585: Push((int) 38618)
0x586: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x587: Pop(3)
0x588: Push((int) 536791)
0x589: Push((int) -1)
0x58a: Push((int) 38625)
0x58b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58c: Pop(3)
0x58d: Return(); Pop(0)

0x58e: Push((int) 38619)
0x58f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x590: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x591: PushEmpty(string)
0x592: Stack[-1] = "Neutral"
0x593: Call2 0x210

0x594: Pop(1)
0x595: Push((int) 536785)
0x596: @@ SetMessage(Stack[-1])
0x597: Pop(1)
0x598: @@ ClearReplies()
0x599: Pop(0)
0x59a: Push((int) 536786)
0x59b: Push((int) 38621)
0x59c: Push((int) 38620)
0x59d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59e: Pop(3)
0x59f: Push((int) 536790)
0x5a0: Push((int) -1)
0x5a1: Push((int) 38624)
0x5a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a3: Pop(3)
0x5a4: Return(); Pop(0)

0x5a5: Push((int) 38621)
0x5a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a7: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5a8: PushEmpty(string)
0x5a9: Stack[-1] = "Neutral"
0x5aa: Call2 0x210

0x5ab: Pop(1)
0x5ac: Push((int) 536787)
0x5ad: @@ SetMessage(Stack[-1])
0x5ae: Pop(1)
0x5af: @@ ClearReplies()
0x5b0: Pop(0)
0x5b1: PushEmpty(bool, object)
0x5b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b3: Call2 0x14f7

0x5b4: Pop(1)
0x5b5: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b6: Push((int) 536788)
0x5b7: Push((int) -1)
0x5b8: Push((int) 38622)
0x5b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ba: Pop(3)
0x5bb: Push((int) 536789)
0x5bc: Push((int) -1)
0x5bd: Push((int) 38623)
0x5be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: Return(); Pop(0)

0x5c1: Push((int) 38602)
0x5c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5c4: PushEmpty(string)
0x5c5: Stack[-1] = "Neutral"
0x5c6: Call2 0x210

0x5c7: Pop(1)
0x5c8: Push((int) 536770)
0x5c9: @@ SetMessage(Stack[-1])
0x5ca: Pop(1)
0x5cb: @@ ClearReplies()
0x5cc: Pop(0)
0x5cd: Push((int) 536771)
0x5ce: Push((int) 38604)
0x5cf: Push((int) 38603)
0x5d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d1: Pop(3)
0x5d2: Push((int) 536781)
0x5d3: Push((int) -1)
0x5d4: Push((int) 38615)
0x5d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d6: Pop(3)
0x5d7: Return(); Pop(0)

0x5d8: Push((int) 38604)
0x5d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5db: PushEmpty(string)
0x5dc: Stack[-1] = "Neutral"
0x5dd: Call2 0x210

0x5de: Pop(1)
0x5df: Push((int) 536772)
0x5e0: @@ SetMessage(Stack[-1])
0x5e1: Pop(1)
0x5e2: @@ ClearReplies()
0x5e3: Pop(0)
0x5e4: Push((int) 536773)
0x5e5: Push((int) 38606)
0x5e6: Push((int) 38605)
0x5e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e8: Pop(3)
0x5e9: Push((int) 536780)
0x5ea: Push((int) 38606)
0x5eb: Push((int) 38613)
0x5ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ed: Pop(3)
0x5ee: Return(); Pop(0)

0x5ef: Push((int) 38606)
0x5f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x5f2: PushEmpty(string)
0x5f3: Stack[-1] = "Neutral"
0x5f4: Call2 0x210

0x5f5: Pop(1)
0x5f6: Push((int) 536774)
0x5f7: @@ SetMessage(Stack[-1])
0x5f8: Pop(1)
0x5f9: @@ ClearReplies()
0x5fa: Pop(0)
0x5fb: Push((int) 536775)
0x5fc: Push((int) 38608)
0x5fd: Push((int) 38607)
0x5fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ff: Pop(3)
0x600: Push((int) 536779)
0x601: Push((int) 38608)
0x602: Push((int) 38611)
0x603: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x604: Pop(3)
0x605: Return(); Pop(0)

0x606: Push((int) 38608)
0x607: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x608: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x609: PushEmpty(string)
0x60a: Stack[-1] = "Neutral"
0x60b: Call2 0x210

0x60c: Pop(1)
0x60d: Push((int) 536776)
0x60e: @@ SetMessage(Stack[-1])
0x60f: Pop(1)
0x610: @@ ClearReplies()
0x611: Pop(0)
0x612: Push((int) 536777)
0x613: Push((int) -1)
0x614: Push((int) 38609)
0x615: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x616: Pop(3)
0x617: Push((int) 536778)
0x618: Push((int) -1)
0x619: Push((int) 38610)
0x61a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61b: Pop(3)
0x61c: Return(); Pop(0)

0x61d: Push((int) 38579)
0x61e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61f: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x620: PushEmpty(string)
0x621: Stack[-1] = "Neutral"
0x622: Call2 0x210

0x623: Pop(1)
0x624: Push((int) 536748)
0x625: @@ SetMessage(Stack[-1])
0x626: Pop(1)
0x627: @@ ClearReplies()
0x628: Pop(0)
0x629: PushEmpty(bool, object)
0x62a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62b: Call2 0x14f7

0x62c: Pop(1)
0x62d: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x62e: Push((int) 536749)
0x62f: Push((int) 38581)
0x630: Push((int) 38580)
0x631: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x632: Pop(3)
0x633: Push((int) 536761)
0x634: Push((int) 38593)
0x635: Push((int) 38592)
0x636: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x637: Pop(3)
0x638: Push((int) 536768)
0x639: Push((int) -1)
0x63a: Push((int) 38600)
0x63b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63c: Pop(3)
0x63d: Return(); Pop(0)

0x63e: Push((int) 38593)
0x63f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x640: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x641: PushEmpty(string)
0x642: Stack[-1] = "Neutral"
0x643: Call2 0x210

0x644: Pop(1)
0x645: Push((int) 536762)
0x646: @@ SetMessage(Stack[-1])
0x647: Pop(1)
0x648: @@ ClearReplies()
0x649: Pop(0)
0x64a: Push((int) 536763)
0x64b: Push((int) 38595)
0x64c: Push((int) 38594)
0x64d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64e: Pop(3)
0x64f: Push((int) 536767)
0x650: Push((int) 38595)
0x651: Push((int) 38598)
0x652: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x653: Pop(3)
0x654: Return(); Pop(0)

0x655: Push((int) 38595)
0x656: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x658: PushEmpty(string)
0x659: Stack[-1] = "Neutral"
0x65a: Call2 0x210

0x65b: Pop(1)
0x65c: Push((int) 536764)
0x65d: @@ SetMessage(Stack[-1])
0x65e: Pop(1)
0x65f: @@ ClearReplies()
0x660: Pop(0)
0x661: Push((int) 536765)
0x662: Push((int) -1)
0x663: Push((int) 38596)
0x664: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x665: Pop(3)
0x666: Push((int) 536766)
0x667: Push((int) -1)
0x668: Push((int) 38597)
0x669: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66a: Pop(3)
0x66b: Return(); Pop(0)

0x66c: Push((int) 38581)
0x66d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x66f: PushEmpty(string)
0x670: Stack[-1] = "Neutral"
0x671: Call2 0x210

0x672: Pop(1)
0x673: Push((int) 536750)
0x674: @@ SetMessage(Stack[-1])
0x675: Pop(1)
0x676: @@ ClearReplies()
0x677: Pop(0)
0x678: Push((int) 536751)
0x679: Push((int) 38583)
0x67a: Push((int) 38582)
0x67b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67c: Pop(3)
0x67d: Push((int) 536760)
0x67e: Push((int) -1)
0x67f: Push((int) 38591)
0x680: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x681: Pop(3)
0x682: Return(); Pop(0)

0x683: Push((int) 38583)
0x684: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x685: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x686: PushEmpty(string)
0x687: Stack[-1] = "Neutral"
0x688: Call2 0x210

0x689: Pop(1)
0x68a: Push((int) 536752)
0x68b: @@ SetMessage(Stack[-1])
0x68c: Pop(1)
0x68d: @@ ClearReplies()
0x68e: Pop(0)
0x68f: Push((int) 536753)
0x690: Push((int) 38585)
0x691: Push((int) 38584)
0x692: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x693: Pop(3)
0x694: Return(); Pop(0)

0x695: Push((int) 38585)
0x696: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x697: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x698: PushEmpty(string)
0x699: Stack[-1] = "Neutral"
0x69a: Call2 0x210

0x69b: Pop(1)
0x69c: Push((int) 536754)
0x69d: @@ SetMessage(Stack[-1])
0x69e: Pop(1)
0x69f: @@ ClearReplies()
0x6a0: Pop(0)
0x6a1: Push((int) 536755)
0x6a2: Push((int) 38587)
0x6a3: Push((int) 38586)
0x6a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a5: Pop(3)
0x6a6: Push((int) 536759)
0x6a7: Push((int) -1)
0x6a8: Push((int) 38590)
0x6a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6aa: Pop(3)
0x6ab: Return(); Pop(0)

0x6ac: Push((int) 38587)
0x6ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ae: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6af: PushEmpty(string)
0x6b0: Stack[-1] = "Neutral"
0x6b1: Call2 0x210

0x6b2: Pop(1)
0x6b3: Push((int) 536756)
0x6b4: @@ SetMessage(Stack[-1])
0x6b5: Pop(1)
0x6b6: @@ ClearReplies()
0x6b7: Pop(0)
0x6b8: Push((int) 536757)
0x6b9: Push((int) -1)
0x6ba: Push((int) 38588)
0x6bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bc: Pop(3)
0x6bd: Push((int) 536758)
0x6be: Push((int) -1)
0x6bf: Push((int) 38589)
0x6c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c1: Pop(3)
0x6c2: Return(); Pop(0)

0x6c3: Push((int) 38542)
0x6c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c5: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6c6: PushEmpty(string)
0x6c7: Stack[-1] = "Neutral"
0x6c8: Call2 0x210

0x6c9: Pop(1)
0x6ca: Push((int) 536711)
0x6cb: @@ SetMessage(Stack[-1])
0x6cc: Pop(1)
0x6cd: @@ ClearReplies()
0x6ce: Pop(0)
0x6cf: Push((int) 536712)
0x6d0: Push((int) 38544)
0x6d1: Push((int) 38543)
0x6d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d3: Pop(3)
0x6d4: Push((int) 536730)
0x6d5: Push((int) 38562)
0x6d6: Push((int) 38561)
0x6d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d8: Pop(3)
0x6d9: Push((int) 536746)
0x6da: Push((int) -1)
0x6db: Push((int) 38577)
0x6dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6dd: Pop(3)
0x6de: Return(); Pop(0)

0x6df: Push((int) 38562)
0x6e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e1: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6e2: PushEmpty(string)
0x6e3: Stack[-1] = "Neutral"
0x6e4: Call2 0x210

0x6e5: Pop(1)
0x6e6: Push((int) 536731)
0x6e7: @@ SetMessage(Stack[-1])
0x6e8: Pop(1)
0x6e9: @@ ClearReplies()
0x6ea: Pop(0)
0x6eb: Push((int) 536732)
0x6ec: Push((int) 38564)
0x6ed: Push((int) 38563)
0x6ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ef: Pop(3)
0x6f0: Push((int) 536745)
0x6f1: Push((int) -1)
0x6f2: Push((int) 38576)
0x6f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f4: Pop(3)
0x6f5: Return(); Pop(0)

0x6f6: Push((int) 38564)
0x6f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f8: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x6f9: PushEmpty(string)
0x6fa: Stack[-1] = "Neutral"
0x6fb: Call2 0x210

0x6fc: Pop(1)
0x6fd: Push((int) 536733)
0x6fe: @@ SetMessage(Stack[-1])
0x6ff: Pop(1)
0x700: @@ ClearReplies()
0x701: Pop(0)
0x702: Push((int) 536734)
0x703: Push((int) 38566)
0x704: Push((int) 38565)
0x705: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x706: Pop(3)
0x707: Push((int) 536744)
0x708: Push((int) -1)
0x709: Push((int) 38575)
0x70a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70b: Pop(3)
0x70c: Return(); Pop(0)

0x70d: Push((int) 38566)
0x70e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70f: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x710: PushEmpty(string)
0x711: Stack[-1] = "Neutral"
0x712: Call2 0x210

0x713: Pop(1)
0x714: Push((int) 536735)
0x715: @@ SetMessage(Stack[-1])
0x716: Pop(1)
0x717: @@ ClearReplies()
0x718: Pop(0)
0x719: Push((int) 536736)
0x71a: Push((int) -1)
0x71b: Push((int) 38567)
0x71c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71d: Pop(3)
0x71e: Push((int) 536737)
0x71f: Push((int) 38569)
0x720: Push((int) 38568)
0x721: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x722: Pop(3)
0x723: Return(); Pop(0)

0x724: Push((int) 38569)
0x725: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x726: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x727: PushEmpty(string)
0x728: Stack[-1] = "Neutral"
0x729: Call2 0x210

0x72a: Pop(1)
0x72b: Push((int) 536738)
0x72c: @@ SetMessage(Stack[-1])
0x72d: Pop(1)
0x72e: @@ ClearReplies()
0x72f: Pop(0)
0x730: Push((int) 536739)
0x731: Push((int) 38571)
0x732: Push((int) 38570)
0x733: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x734: Pop(3)
0x735: Push((int) 536743)
0x736: Push((int) -1)
0x737: Push((int) 38574)
0x738: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x739: Pop(3)
0x73a: Return(); Pop(0)

0x73b: Push((int) 38571)
0x73c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73d: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x73e: PushEmpty(string)
0x73f: Stack[-1] = "Neutral"
0x740: Call2 0x210

0x741: Pop(1)
0x742: Push((int) 536740)
0x743: @@ SetMessage(Stack[-1])
0x744: Pop(1)
0x745: @@ ClearReplies()
0x746: Pop(0)
0x747: Push((int) 536741)
0x748: Push((int) -1)
0x749: Push((int) 38572)
0x74a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74b: Pop(3)
0x74c: Push((int) 536742)
0x74d: Push((int) -1)
0x74e: Push((int) 38573)
0x74f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x750: Pop(3)
0x751: Return(); Pop(0)

0x752: Push((int) 38544)
0x753: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x754: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x755: PushEmpty(string)
0x756: Stack[-1] = "Neutral"
0x757: Call2 0x210

0x758: Pop(1)
0x759: Push((int) 536713)
0x75a: @@ SetMessage(Stack[-1])
0x75b: Pop(1)
0x75c: @@ ClearReplies()
0x75d: Pop(0)
0x75e: Push((int) 536714)
0x75f: Push((int) 38546)
0x760: Push((int) 38545)
0x761: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x762: Pop(3)
0x763: Push((int) 536729)
0x764: Push((int) -1)
0x765: Push((int) 38560)
0x766: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x767: Pop(3)
0x768: Return(); Pop(0)

0x769: Push((int) 38546)
0x76a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76b: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x76c: PushEmpty(string)
0x76d: Stack[-1] = "Neutral"
0x76e: Call2 0x210

0x76f: Pop(1)
0x770: Push((int) 536715)
0x771: @@ SetMessage(Stack[-1])
0x772: Pop(1)
0x773: @@ ClearReplies()
0x774: Pop(0)
0x775: Push((int) 536716)
0x776: Push((int) 38548)
0x777: Push((int) 38547)
0x778: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x779: Pop(3)
0x77a: Push((int) 536726)
0x77b: Push((int) 38558)
0x77c: Push((int) 38557)
0x77d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77e: Pop(3)
0x77f: Return(); Pop(0)

0x780: Push((int) 38558)
0x781: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x782: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x783: PushEmpty(string)
0x784: Stack[-1] = "Neutral"
0x785: Call2 0x210

0x786: Pop(1)
0x787: Push((int) 536727)
0x788: @@ SetMessage(Stack[-1])
0x789: Pop(1)
0x78a: @@ ClearReplies()
0x78b: Pop(0)
0x78c: Push((int) 536728)
0x78d: Push((int) -1)
0x78e: Push((int) 38559)
0x78f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x790: Pop(3)
0x791: Return(); Pop(0)

0x792: Push((int) 38548)
0x793: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x794: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x795: PushEmpty(string)
0x796: Stack[-1] = "Neutral"
0x797: Call2 0x210

0x798: Pop(1)
0x799: Push((int) 536717)
0x79a: @@ SetMessage(Stack[-1])
0x79b: Pop(1)
0x79c: @@ ClearReplies()
0x79d: Pop(0)
0x79e: Push((int) 536718)
0x79f: Push((int) 38550)
0x7a0: Push((int) 38549)
0x7a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a2: Pop(3)
0x7a3: Return(); Pop(0)

0x7a4: Push((int) 38550)
0x7a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a6: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7a7: PushEmpty(string)
0x7a8: Stack[-1] = "Neutral"
0x7a9: Call2 0x210

0x7aa: Pop(1)
0x7ab: Push((int) 536719)
0x7ac: @@ SetMessage(Stack[-1])
0x7ad: Pop(1)
0x7ae: @@ ClearReplies()
0x7af: Pop(0)
0x7b0: Push((int) 536720)
0x7b1: Push((int) 38552)
0x7b2: Push((int) 38551)
0x7b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b4: Pop(3)
0x7b5: Push((int) 536723)
0x7b6: Push((int) 38555)
0x7b7: Push((int) 38554)
0x7b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b9: Pop(3)
0x7ba: Return(); Pop(0)

0x7bb: Push((int) 38555)
0x7bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7bd: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7be: PushEmpty(string)
0x7bf: Stack[-1] = "Neutral"
0x7c0: Call2 0x210

0x7c1: Pop(1)
0x7c2: Push((int) 536724)
0x7c3: @@ SetMessage(Stack[-1])
0x7c4: Pop(1)
0x7c5: @@ ClearReplies()
0x7c6: Pop(0)
0x7c7: Push((int) 536725)
0x7c8: Push((int) -1)
0x7c9: Push((int) 38556)
0x7ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cb: Pop(3)
0x7cc: Return(); Pop(0)

0x7cd: Push((int) 38552)
0x7ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7cf: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7d0: PushEmpty(string)
0x7d1: Stack[-1] = "Neutral"
0x7d2: Call2 0x210

0x7d3: Pop(1)
0x7d4: Push((int) 536721)
0x7d5: @@ SetMessage(Stack[-1])
0x7d6: Pop(1)
0x7d7: @@ ClearReplies()
0x7d8: Pop(0)
0x7d9: Push((int) 536722)
0x7da: Push((int) -1)
0x7db: Push((int) 38553)
0x7dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7dd: Pop(3)
0x7de: Return(); Pop(0)

0x7df: Push((int) 38517)
0x7e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e1: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7e2: PushEmpty(string)
0x7e3: Stack[-1] = "Neutral"
0x7e4: Call2 0x210

0x7e5: Pop(1)
0x7e6: Push((int) 536686)
0x7e7: @@ SetMessage(Stack[-1])
0x7e8: Pop(1)
0x7e9: @@ ClearReplies()
0x7ea: Pop(0)
0x7eb: Push((int) 536687)
0x7ec: Push((int) 38519)
0x7ed: Push((int) 38518)
0x7ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ef: Pop(3)
0x7f0: Push((int) 536699)
0x7f1: Push((int) 38531)
0x7f2: Push((int) 38530)
0x7f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f4: Pop(3)
0x7f5: Push((int) 536709)
0x7f6: Push((int) -1)
0x7f7: Push((int) 38540)
0x7f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f9: Pop(3)
0x7fa: Return(); Pop(0)

0x7fb: Push((int) 38531)
0x7fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7fd: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x7fe: PushEmpty(string)
0x7ff: Stack[-1] = "Neutral"
0x800: Call2 0x210

0x801: Pop(1)
0x802: Push((int) 536700)
0x803: @@ SetMessage(Stack[-1])
0x804: Pop(1)
0x805: @@ ClearReplies()
0x806: Pop(0)
0x807: Push((int) 536701)
0x808: Push((int) 38533)
0x809: Push((int) 38532)
0x80a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80b: Pop(3)
0x80c: PushEmpty(bool, object)
0x80d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80e: Call2 0x14f7

0x80f: Pop(1)
0x810: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x811: Push((int) 536705)
0x812: Push((int) 38537)
0x813: Push((int) 38536)
0x814: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x815: Pop(3)
0x816: Return(); Pop(0)

0x817: Push((int) 38537)
0x818: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x819: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x81a: PushEmpty(string)
0x81b: Stack[-1] = "Neutral"
0x81c: Call2 0x210

0x81d: Pop(1)
0x81e: Push((int) 536706)
0x81f: @@ SetMessage(Stack[-1])
0x820: Pop(1)
0x821: @@ ClearReplies()
0x822: Pop(0)
0x823: Push((int) 536707)
0x824: Push((int) -1)
0x825: Push((int) 38538)
0x826: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x827: Pop(3)
0x828: Push((int) 536708)
0x829: Push((int) -1)
0x82a: Push((int) 38539)
0x82b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82c: Pop(3)
0x82d: Return(); Pop(0)

0x82e: Push((int) 38533)
0x82f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x831: PushEmpty(string)
0x832: Stack[-1] = "Neutral"
0x833: Call2 0x210

0x834: Pop(1)
0x835: Push((int) 536702)
0x836: @@ SetMessage(Stack[-1])
0x837: Pop(1)
0x838: @@ ClearReplies()
0x839: Pop(0)
0x83a: PushEmpty(bool, object)
0x83b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83c: Call2 0x14f7

0x83d: Pop(1)
0x83e: IF (Stack[-1] == 0) GOTO 0x844; Pop(1)

0x83f: Push((int) 536703)
0x840: Push((int) -1)
0x841: Push((int) 38534)
0x842: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x843: Pop(3)
0x844: Push((int) 536704)
0x845: Push((int) -1)
0x846: Push((int) 38535)
0x847: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x848: Pop(3)
0x849: Return(); Pop(0)

0x84a: Push((int) 38519)
0x84b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84c: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x84d: PushEmpty(string)
0x84e: Stack[-1] = "Neutral"
0x84f: Call2 0x210

0x850: Pop(1)
0x851: Push((int) 536688)
0x852: @@ SetMessage(Stack[-1])
0x853: Pop(1)
0x854: @@ ClearReplies()
0x855: Pop(0)
0x856: Push((int) 536689)
0x857: Push((int) 38521)
0x858: Push((int) 38520)
0x859: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85a: Pop(3)
0x85b: Push((int) 536695)
0x85c: Push((int) 38527)
0x85d: Push((int) 38526)
0x85e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85f: Pop(3)
0x860: Return(); Pop(0)

0x861: Push((int) 38527)
0x862: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x863: IF (Stack[-1] == 0) GOTO 0x878; Pop(1)

0x864: PushEmpty(string)
0x865: Stack[-1] = "Neutral"
0x866: Call2 0x210

0x867: Pop(1)
0x868: Push((int) 536696)
0x869: @@ SetMessage(Stack[-1])
0x86a: Pop(1)
0x86b: @@ ClearReplies()
0x86c: Pop(0)
0x86d: Push((int) 536697)
0x86e: Push((int) -1)
0x86f: Push((int) 38528)
0x870: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x871: Pop(3)
0x872: Push((int) 536698)
0x873: Push((int) -1)
0x874: Push((int) 38529)
0x875: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x876: Pop(3)
0x877: Return(); Pop(0)

0x878: Push((int) 38521)
0x879: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x87a: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x87b: PushEmpty(string)
0x87c: Stack[-1] = "Neutral"
0x87d: Call2 0x210

0x87e: Pop(1)
0x87f: Push((int) 536690)
0x880: @@ SetMessage(Stack[-1])
0x881: Pop(1)
0x882: @@ ClearReplies()
0x883: Pop(0)
0x884: Push((int) 536691)
0x885: Push((int) -1)
0x886: Push((int) 38522)
0x887: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x888: Pop(3)
0x889: Push((int) 536692)
0x88a: Push((int) 38524)
0x88b: Push((int) 38523)
0x88c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88d: Pop(3)
0x88e: Return(); Pop(0)

0x88f: Push((int) 38524)
0x890: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x891: IF (Stack[-1] == 0) GOTO 0x8a1; Pop(1)

0x892: PushEmpty(string)
0x893: Stack[-1] = "Neutral"
0x894: Call2 0x210

0x895: Pop(1)
0x896: Push((int) 536693)
0x897: @@ SetMessage(Stack[-1])
0x898: Pop(1)
0x899: @@ ClearReplies()
0x89a: Pop(0)
0x89b: Push((int) 536694)
0x89c: Push((int) -1)
0x89d: Push((int) 38525)
0x89e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89f: Pop(3)
0x8a0: Return(); Pop(0)

0x8a1: Push((int) 38493)
0x8a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a3: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8a4: PushEmpty(string)
0x8a5: Stack[-1] = "Neutral"
0x8a6: Call2 0x210

0x8a7: Pop(1)
0x8a8: Push((int) 536664)
0x8a9: @@ SetMessage(Stack[-1])
0x8aa: Pop(1)
0x8ab: @@ ClearReplies()
0x8ac: Pop(0)
0x8ad: Push((int) 536665)
0x8ae: Push((int) 38495)
0x8af: Push((int) 38494)
0x8b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b1: Pop(3)
0x8b2: Push((int) 536675)
0x8b3: Push((int) 38507)
0x8b4: Push((int) 38506)
0x8b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b6: Pop(3)
0x8b7: Push((int) 536684)
0x8b8: Push((int) -1)
0x8b9: Push((int) 38515)
0x8ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bb: Pop(3)
0x8bc: Return(); Pop(0)

0x8bd: Push((int) 38507)
0x8be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8bf: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8c0: PushEmpty(string)
0x8c1: Stack[-1] = "Neutral"
0x8c2: Call2 0x210

0x8c3: Pop(1)
0x8c4: Push((int) 536676)
0x8c5: @@ SetMessage(Stack[-1])
0x8c6: Pop(1)
0x8c7: @@ ClearReplies()
0x8c8: Pop(0)
0x8c9: Push((int) 536677)
0x8ca: Push((int) 38509)
0x8cb: Push((int) 38508)
0x8cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cd: Pop(3)
0x8ce: Return(); Pop(0)

0x8cf: Push((int) 38509)
0x8d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d1: IF (Stack[-1] == 0) GOTO 0x8e6; Pop(1)

0x8d2: PushEmpty(string)
0x8d3: Stack[-1] = "Neutral"
0x8d4: Call2 0x210

0x8d5: Pop(1)
0x8d6: Push((int) 536678)
0x8d7: @@ SetMessage(Stack[-1])
0x8d8: Pop(1)
0x8d9: @@ ClearReplies()
0x8da: Pop(0)
0x8db: Push((int) 536679)
0x8dc: Push((int) 38511)
0x8dd: Push((int) 38510)
0x8de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8df: Pop(3)
0x8e0: Push((int) 536683)
0x8e1: Push((int) -1)
0x8e2: Push((int) 38514)
0x8e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e4: Pop(3)
0x8e5: Return(); Pop(0)

0x8e6: Push((int) 38511)
0x8e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e8: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8e9: PushEmpty(string)
0x8ea: Stack[-1] = "Neutral"
0x8eb: Call2 0x210

0x8ec: Pop(1)
0x8ed: Push((int) 536680)
0x8ee: @@ SetMessage(Stack[-1])
0x8ef: Pop(1)
0x8f0: @@ ClearReplies()
0x8f1: Pop(0)
0x8f2: Push((int) 536681)
0x8f3: Push((int) -1)
0x8f4: Push((int) 38512)
0x8f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f6: Pop(3)
0x8f7: Push((int) 536682)
0x8f8: Push((int) -1)
0x8f9: Push((int) 38513)
0x8fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fb: Pop(3)
0x8fc: Return(); Pop(0)

0x8fd: Push((int) 38495)
0x8fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ff: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x900: PushEmpty(string)
0x901: Stack[-1] = "Neutral"
0x902: Call2 0x210

0x903: Pop(1)
0x904: Push((int) 536666)
0x905: @@ SetMessage(Stack[-1])
0x906: Pop(1)
0x907: @@ ClearReplies()
0x908: Pop(0)
0x909: Push((int) 536667)
0x90a: Push((int) 38497)
0x90b: Push((int) 38496)
0x90c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90d: Pop(3)
0x90e: Push((int) 536674)
0x90f: Push((int) 38499)
0x910: Push((int) 38504)
0x911: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x912: Pop(3)
0x913: Return(); Pop(0)

0x914: Push((int) 38497)
0x915: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x916: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x917: PushEmpty(string)
0x918: Stack[-1] = "Neutral"
0x919: Call2 0x210

0x91a: Pop(1)
0x91b: Push((int) 536668)
0x91c: @@ SetMessage(Stack[-1])
0x91d: Pop(1)
0x91e: @@ ClearReplies()
0x91f: Pop(0)
0x920: Push((int) 536669)
0x921: Push((int) 38499)
0x922: Push((int) 38498)
0x923: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x924: Pop(3)
0x925: Push((int) 536673)
0x926: Push((int) 38499)
0x927: Push((int) 38502)
0x928: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x929: Pop(3)
0x92a: Return(); Pop(0)

0x92b: Push((int) 38499)
0x92c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x92d: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x92e: PushEmpty(string)
0x92f: Stack[-1] = "Neutral"
0x930: Call2 0x210

0x931: Pop(1)
0x932: Push((int) 536670)
0x933: @@ SetMessage(Stack[-1])
0x934: Pop(1)
0x935: @@ ClearReplies()
0x936: Pop(0)
0x937: Push((int) 536671)
0x938: Push((int) -1)
0x939: Push((int) 38500)
0x93a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93b: Pop(3)
0x93c: Push((int) 536672)
0x93d: Push((int) -1)
0x93e: Push((int) 38501)
0x93f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x940: Pop(3)
0x941: Return(); Pop(0)

0x942: Push((int) 38474)
0x943: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x944: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x945: PushEmpty(string)
0x946: Stack[-1] = "Neutral"
0x947: Call2 0x210

0x948: Pop(1)
0x949: Push((int) 536646)
0x94a: @@ SetMessage(Stack[-1])
0x94b: Pop(1)
0x94c: @@ ClearReplies()
0x94d: Pop(0)
0x94e: Push((int) 536647)
0x94f: Push((int) 38476)
0x950: Push((int) 38475)
0x951: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x952: Pop(3)
0x953: Push((int) 536653)
0x954: Push((int) 38482)
0x955: Push((int) 38481)
0x956: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x957: Pop(3)
0x958: Push((int) 536662)
0x959: Push((int) -1)
0x95a: Push((int) 38491)
0x95b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95c: Pop(3)
0x95d: Return(); Pop(0)

0x95e: Push((int) 38482)
0x95f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x960: IF (Stack[-1] == 0) GOTO 0x975; Pop(1)

0x961: PushEmpty(string)
0x962: Stack[-1] = "Neutral"
0x963: Call2 0x210

0x964: Pop(1)
0x965: Push((int) 536654)
0x966: @@ SetMessage(Stack[-1])
0x967: Pop(1)
0x968: @@ ClearReplies()
0x969: Pop(0)
0x96a: Push((int) 536655)
0x96b: Push((int) 38484)
0x96c: Push((int) 38483)
0x96d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96e: Pop(3)
0x96f: Push((int) 536659)
0x970: Push((int) 38488)
0x971: Push((int) 38487)
0x972: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x973: Pop(3)
0x974: Return(); Pop(0)

0x975: Push((int) 38488)
0x976: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x977: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x978: PushEmpty(string)
0x979: Stack[-1] = "Neutral"
0x97a: Call2 0x210

0x97b: Pop(1)
0x97c: Push((int) 536660)
0x97d: @@ SetMessage(Stack[-1])
0x97e: Pop(1)
0x97f: @@ ClearReplies()
0x980: Pop(0)
0x981: Push((int) 536661)
0x982: Push((int) 38484)
0x983: Push((int) 38489)
0x984: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x985: Pop(3)
0x986: Return(); Pop(0)

0x987: Push((int) 38484)
0x988: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x989: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x98a: PushEmpty(string)
0x98b: Stack[-1] = "Neutral"
0x98c: Call2 0x210

0x98d: Pop(1)
0x98e: Push((int) 536656)
0x98f: @@ SetMessage(Stack[-1])
0x990: Pop(1)
0x991: @@ ClearReplies()
0x992: Pop(0)
0x993: Push((int) 536657)
0x994: Push((int) -1)
0x995: Push((int) 38485)
0x996: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x997: Pop(3)
0x998: Push((int) 536658)
0x999: Push((int) -1)
0x99a: Push((int) 38486)
0x99b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99c: Pop(3)
0x99d: Return(); Pop(0)

0x99e: Push((int) 38476)
0x99f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a0: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9a1: PushEmpty(string)
0x9a2: Stack[-1] = "Neutral"
0x9a3: Call2 0x210

0x9a4: Pop(1)
0x9a5: Push((int) 536648)
0x9a6: @@ SetMessage(Stack[-1])
0x9a7: Pop(1)
0x9a8: @@ ClearReplies()
0x9a9: Pop(0)
0x9aa: Push((int) 536649)
0x9ab: Push((int) 38478)
0x9ac: Push((int) 38477)
0x9ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ae: Pop(3)
0x9af: Push((int) 536652)
0x9b0: Push((int) -1)
0x9b1: Push((int) 38480)
0x9b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b3: Pop(3)
0x9b4: Return(); Pop(0)

0x9b5: Push((int) 38478)
0x9b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b7: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9b8: PushEmpty(string)
0x9b9: Stack[-1] = "Neutral"
0x9ba: Call2 0x210

0x9bb: Pop(1)
0x9bc: Push((int) 536650)
0x9bd: @@ SetMessage(Stack[-1])
0x9be: Pop(1)
0x9bf: @@ ClearReplies()
0x9c0: Pop(0)
0x9c1: Push((int) 536651)
0x9c2: Push((int) -1)
0x9c3: Push((int) 38479)
0x9c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c5: Pop(3)
0x9c6: Return(); Pop(0)

0x9c7: Push((int) 38468)
0x9c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c9: IF (Stack[-1] == 0) GOTO 0x9d9; Pop(1)

0x9ca: PushEmpty(string)
0x9cb: Stack[-1] = "Neutral"
0x9cc: Call2 0x210

0x9cd: Pop(1)
0x9ce: Push((int) 536640)
0x9cf: @@ SetMessage(Stack[-1])
0x9d0: Pop(1)
0x9d1: @@ ClearReplies()
0x9d2: Pop(0)
0x9d3: Push((int) 536641)
0x9d4: Push((int) -1)
0x9d5: Push((int) 38469)
0x9d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d7: Pop(3)
0x9d8: Return(); Pop(0)

0x9d9: Push((int) 45487)
0x9da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9db: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9dc: PushEmpty(string)
0x9dd: Stack[-1] = "Neutral"
0x9de: Call2 0x210

0x9df: Pop(1)
0x9e0: Push((int) 543035)
0x9e1: @@ SetMessage(Stack[-1])
0x9e2: Pop(1)
0x9e3: @@ ClearReplies()
0x9e4: Pop(0)
0x9e5: Push((int) 543036)
0x9e6: Push((int) -1)
0x9e7: Push((int) 45488)
0x9e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e9: Pop(3)
0x9ea: Push((int) 543037)
0x9eb: Push((int) -1)
0x9ec: Push((int) 45489)
0x9ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ee: Pop(3)
0x9ef: Return(); Pop(0)

0x9f0: Push((int) 45480)
0x9f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f2: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0x9f3: PushEmpty(string)
0x9f4: Stack[-1] = "Neutral"
0x9f5: Call2 0x210

0x9f6: Pop(1)
0x9f7: Push((int) 543028)
0x9f8: @@ SetMessage(Stack[-1])
0x9f9: Pop(1)
0x9fa: @@ ClearReplies()
0x9fb: Pop(0)
0x9fc: Push((int) 543029)
0x9fd: Push((int) -1)
0x9fe: Push((int) 45481)
0x9ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa00: Pop(3)
0xa01: Push((int) 543030)
0xa02: Push((int) 45483)
0xa03: Push((int) 45482)
0xa04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa05: Pop(3)
0xa06: Return(); Pop(0)

0xa07: Push((int) 45483)
0xa08: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa09: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa0a: PushEmpty(string)
0xa0b: Stack[-1] = "Neutral"
0xa0c: Call2 0x210

0xa0d: Pop(1)
0xa0e: Push((int) 543031)
0xa0f: @@ SetMessage(Stack[-1])
0xa10: Pop(1)
0xa11: @@ ClearReplies()
0xa12: Pop(0)
0xa13: Push((int) 543032)
0xa14: Push((int) -1)
0xa15: Push((int) 45484)
0xa16: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa17: Pop(3)
0xa18: Push((int) 543033)
0xa19: Push((int) -1)
0xa1a: Push((int) 45485)
0xa1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1c: Pop(3)
0xa1d: Return(); Pop(0)

0xa1e: Push((int) 45475)
0xa1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa20: IF (Stack[-1] == 0) GOTO 0xa35; Pop(1)

0xa21: PushEmpty(string)
0xa22: Stack[-1] = "Neutral"
0xa23: Call2 0x210

0xa24: Pop(1)
0xa25: Push((int) 543023)
0xa26: @@ SetMessage(Stack[-1])
0xa27: Pop(1)
0xa28: @@ ClearReplies()
0xa29: Pop(0)
0xa2a: Push((int) 543024)
0xa2b: Push((int) -1)
0xa2c: Push((int) 45476)
0xa2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2e: Pop(3)
0xa2f: Push((int) 543025)
0xa30: Push((int) -1)
0xa31: Push((int) 45477)
0xa32: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa33: Pop(3)
0xa34: Return(); Pop(0)

0xa35: Push((int) 45468)
0xa36: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa37: IF (Stack[-1] == 0) GOTO 0xa4c; Pop(1)

0xa38: PushEmpty(string)
0xa39: Stack[-1] = "Neutral"
0xa3a: Call2 0x210

0xa3b: Pop(1)
0xa3c: Push((int) 543016)
0xa3d: @@ SetMessage(Stack[-1])
0xa3e: Pop(1)
0xa3f: @@ ClearReplies()
0xa40: Pop(0)
0xa41: Push((int) 543017)
0xa42: Push((int) 45471)
0xa43: Push((int) 45469)
0xa44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa45: Pop(3)
0xa46: Push((int) 543018)
0xa47: Push((int) -1)
0xa48: Push((int) 45470)
0xa49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4a: Pop(3)
0xa4b: Return(); Pop(0)

0xa4c: Push((int) 45471)
0xa4d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4e: IF (Stack[-1] == 0) GOTO 0xa63; Pop(1)

0xa4f: PushEmpty(string)
0xa50: Stack[-1] = "Neutral"
0xa51: Call2 0x210

0xa52: Pop(1)
0xa53: Push((int) 543019)
0xa54: @@ SetMessage(Stack[-1])
0xa55: Pop(1)
0xa56: @@ ClearReplies()
0xa57: Pop(0)
0xa58: Push((int) 543020)
0xa59: Push((int) -1)
0xa5a: Push((int) 45472)
0xa5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5c: Pop(3)
0xa5d: Push((int) 543021)
0xa5e: Push((int) -1)
0xa5f: Push((int) 45473)
0xa60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa61: Pop(3)
0xa62: Return(); Pop(0)

0xa63: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa64: PushEmpty(bool)
0xa65: Call2 0x1857

0xa66: Pop(0)
0xa67: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa68: @ lshStopAnimation()
0xa69: Pop(0)
0xa6a: GOTO 0xa6d

0xa6b: @ StopAnimation()
0xa6c: Pop(0)
0xa6d: Return(); Pop(0)

0xa6e: GOTO 0x227

0xa6f: Return(); Pop(0)

0xa70: PushEmpty()
0xa71: EventDisable(0)
0xa72: PushEmpty(object)
0xa73: Stack[-1] = Stack[-2]
0xa74: Call2 0xa91

0xa75: Pop(1)
0xa76: PushEmpty(object)
0xa77: Stack[-1] = Stack[-2]
0xa78: Call2 0x1897

0xa79: Pop(1)
0xa7a: EventEnable(0)
0xa7b: @ Hold()
0xa7c: Pop(0)
0xa7d: GOTO 0xa7b

0xa7e: Return(); Pop(0)

0xa7f: PushEmpty(int, int)
0xa80: PushEmpty(int, object)
0xa81: Stack[-1] = Stack[-5]
0xa82: Call2 0x1821

0xa83: Stack[-3] = Stack[-2]
0xa84: Pop(2)
0xa85: Push((int) 0)
0xa86: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa87: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa88: PushEmpty(object)
0xa89: Stack[-1] = Stack[-4]
0xa8a: Call2 0x1824

0xa8b: Pop(1)
0xa8c: Return(); Pop(2)

0xa8d: PushEmpty()
0xa8e: Call2 0x182a

0xa8f: Pop(0)
0xa90: Return(); Pop(0)

0xa91: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xa92: Pop(0); Push((bool) Stack[-21] == 0)
0xa93: IF (Stack[-1] == 0) GOTO 0xa99; Pop(1)

0xa94: PushEmpty(string)
0xa95: Stack[-1] = "fdie"
0xa96: Call2 0xaec

0xa97: Pop(1)
0xa98: GOTO 0xaeb

0xa99: @@ GetPosition(Stack[-10])
0xa9a: Pop(0)
0xa9b: @ GetPosition(Stack[-9])
0xa9c: Pop(0)
0xa9d: @ GetDirection(Stack[-8])
0xa9e: Pop(0)
0xa9f: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xaa0: Push(CvectorIndex(Stack[-7], 0))
0xaa1: Push(CvectorIndex(Stack[-9], 0))
0xaa2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xaa3: Push(CvectorIndex(Stack[-8], 2))
0xaa4: Push(CvectorIndex(Stack[-10], 2))
0xaa5: Pop(2); Push(Stack[-2] * Stack[-1]);
0xaa6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaa7: Push((int) 0)
0xaa8: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xaa9: IF (Stack[-1] == 0) GOTO 0xaac; Pop(1)

0xaaa: Stack[-6] = "fdie"
0xaab: GOTO 0xaad

0xaac: Stack[-6] = "bdie"
0xaad: @ RemoveRTEnvelope()
0xaae: Pop(0)
0xaaf: @ SetDeathState()
0xab0: Pop(0)
0xab1: @ Stop()
0xab2: Pop(0)
0xab3: @ StopAsync()
0xab4: Pop(0)
0xab5: Stack[-5] = Stack[-21]
0xab6: Push("GetScriptProperty")
0xab7: Push((int) 2)
0xab8: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xab9: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xaba: Push("Owner")
0xabb: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xabc: Pop(1)
0xabd: Push(Stack[-4])
0xabe: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xabf: Push("Owner")
0xac0: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xac1: Pop(1)
0xac2: Pop(0); Push((bool) Stack[-5] == 0)
0xac3: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xac4: Stack[-5] = Stack[-21]
0xac5: Push("@GetEyesHeight")
0xac6: Push((int) 1)
0xac7: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xac8: IF (Stack[-1] == 0) GOTO 0xad4; Pop(1)

0xac9: @@ GetEyesHeight(Stack[-2])
0xaca: Pop(0)
0xacb: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xacc: Push(CvectorIndex(Stack[-1], 1))
0xacd: Stack[-1] = Stack[-3]
0xace: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xacf: Push("head")
0xad0: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xad1: Pop(1)
0xad2: Stack[-3] = (bool) 1
0xad3: GOTO 0xad5

0xad4: Stack[-3] = (bool) 0
0xad5: PushEmpty(string)
0xad6: Stack[-1] = Stack[-7]
0xad7: Call2 0x144b

0xad8: Pop(1)
0xad9: Push("all")
0xada: @ PlayAnimation(Stack[-1], Stack[-7])
0xadb: Pop(1)
0xadc: @ WaitForAnimEnd()
0xadd: Pop(0)
0xade: Push(Stack[-3])
0xadf: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xae0: @ StopAsync()
0xae1: Pop(0)
0xae2: Push("head")
0xae3: @ UnlookAsync(Stack[-1])
0xae4: Pop(1)
0xae5: Push("all")
0xae6: @ LockAnimationEnd(Stack[-1], Stack[-7])
0xae7: Pop(1)
0xae8: @ RemoveEnvelope()
0xae9: Pop(0)
0xaea: Stack[-5] = 0
0xaeb: Return(); Pop(20)

0xaec: PushEmpty()
0xaed: @ RemoveRTEnvelope()
0xaee: Pop(0)
0xaef: @ SetDeathState()
0xaf0: Pop(0)
0xaf1: @ Stop()
0xaf2: Pop(0)
0xaf3: @ StopAsync()
0xaf4: Pop(0)
0xaf5: @ StopSecondaryAnimation()
0xaf6: Pop(0)
0xaf7: PushEmpty(string)
0xaf8: Stack[-1] = Stack[-2]
0xaf9: Call2 0x144b

0xafa: Pop(1)
0xafb: Push("all")
0xafc: @ PlayAnimation(Stack[-1], Stack[-2])
0xafd: Pop(1)
0xafe: @ WaitForAnimEnd()
0xaff: Pop(0)
0xb00: Push("all")
0xb01: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xb02: Pop(1)
0xb03: @ RemoveEnvelope()
0xb04: Pop(0)
0xb05: Return(); Pop(0)

0xb06: PushEmpty()
0xb07: Return(); Pop(0)

0xb08: PushEmpty()
0xb09: Return(); Pop(0)

0xb0a: PushEmpty()
0xb0b: Return(); Pop(0)

0xb0c: Push((bool) 1)
0xb0d: @ SensePlayerOnly(Stack[-1])
0xb0e: Pop(1)
0xb0f: PushEmpty()
0xb10: Call2 0x1859

0xb11: Pop(0)
0xb12: PushEmpty()
0xb13: Call2 0xb1b

0xb14: Pop(0)
0xb15: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb16: PushEmpty()
0xb17: Call2 0xc20

0xb18: Pop(0)
0xb19: GOTO 0xb15

0xb1a: Return(); Pop(0)

0xb1b: PushEmpty(bool)
0xb1c: Call2 0x1376

0xb1d: Pop(0)
0xb1e: Pop(1); Push((bool) Stack[-1] == 0)
0xb1f: IF (Stack[-1] == 0) GOTO 0xb23; Pop(1)

0xb20: PushEmpty()
0xb21: Call2 0x182a

0xb22: Pop(0)
0xb23: Return(); Pop(0)

0xb24: PushEmpty(int, int)
0xb25: PushEmpty(int, object)
0xb26: Stack[-1] = Stack[-5]
0xb27: Call2 0x1821

0xb28: Stack[-3] = Stack[-2]
0xb29: Pop(2)
0xb2a: Push((int) 0)
0xb2b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb2c: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xb2d: Push((int) 1)
0xb2e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb2f: IF (Stack[-1] == 0) GOTO 0xb33; Pop(1)

0xb30: PushEmpty()
0xb31: Call2 0xbdf

0xb32: Pop(0)
0xb33: PushEmpty(object)
0xb34: Stack[-1] = Stack[-4]
0xb35: Call2 0x1824

0xb36: Pop(1)
0xb37: Return(); Pop(2)

0xb38: PushEmpty(int, int)
0xb39: PushEmpty(object)
0xb3a: Stack[-1] = Stack[-4]
0xb3b: Call2 0x1714

0xb3c: Pop(1)
0xb3d: PushEmpty(int, object)
0xb3e: Stack[-1] = Stack[-5]
0xb3f: Call2 0x1767

0xb40: Stack[-3] = Stack[-2]
0xb41: Pop(2)
0xb42: Push((int) 0)
0xb43: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb44: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb45: Push((int) 1)
0xb46: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb47: IF (Stack[-1] == 0) GOTO 0xb4b; Pop(1)

0xb48: PushEmpty()
0xb49: Call2 0xbdf

0xb4a: Pop(0)
0xb4b: PushEmpty(object)
0xb4c: Stack[-1] = Stack[-4]
0xb4d: Call2 0x1771

0xb4e: Pop(1)
0xb4f: Return(); Pop(2)

0xb50: PushEmpty(int, int)
0xb51: PushEmpty(bool, object, object, bool)
0xb52: Stack[-3] = Stack[-9]
0xb53: Stack[-2] = Stack[-8]
0xb54: Stack[-1] = Stack[-7]
0xb55: Call2 0x188d

0xb56: Pop(3)
0xb57: IF (Stack[-1] == 0) GOTO 0xb6b; Pop(1)

0xb58: PushEmpty(int, object, bool)
0xb59: Stack[-2] = Stack[-8]
0xb5a: Stack[-1] = Stack[-6]
0xb5b: Call2 0x17c4

0xb5c: Stack[-4] = Stack[-3]
0xb5d: Pop(3)
0xb5e: Push((int) 0)
0xb5f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb60: IF (Stack[-1] == 0) GOTO 0xb6b; Pop(1)

0xb61: Push((int) 1)
0xb62: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb63: IF (Stack[-1] == 0) GOTO 0xb67; Pop(1)

0xb64: PushEmpty()
0xb65: Call2 0xbdf

0xb66: Pop(0)
0xb67: PushEmpty(object)
0xb68: Stack[-1] = Stack[-6]
0xb69: Call2 0x17cb

0xb6a: Pop(1)
0xb6b: Return(); Pop(2)

0xb6c: PushEmpty(int, int)
0xb6d: PushEmpty(int, object)
0xb6e: Stack[-1] = Stack[-5]
0xb6f: Call2 0x17ee

0xb70: Stack[-3] = Stack[-2]
0xb71: Pop(2)
0xb72: Push((int) 0)
0xb73: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb74: IF (Stack[-1] == 0) GOTO 0xb7f; Pop(1)

0xb75: Push((int) 1)
0xb76: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb77: IF (Stack[-1] == 0) GOTO 0xb7b; Pop(1)

0xb78: PushEmpty()
0xb79: Call2 0xbdf

0xb7a: Pop(0)
0xb7b: PushEmpty(object)
0xb7c: Stack[-1] = Stack[-4]
0xb7d: Call2 0x17f1

0xb7e: Pop(1)
0xb7f: Return(); Pop(2)

0xb80: PushEmpty(int, int)
0xb81: PushEmpty(bool, object, string)
0xb82: Stack[-2] = Stack[-7]
0xb83: Stack[-1] = Stack[-6]
0xb84: Call2 0x16be

0xb85: Pop(2)
0xb86: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb87: PushEmpty()
0xb88: Call2 0xbdf

0xb89: Pop(0)
0xb8a: PushEmpty(object, string)
0xb8b: Stack[-2] = Stack[-6]
0xb8c: Stack[-1] = Stack[-5]
0xb8d: Call2 0x16de

0xb8e: Pop(2)
0xb8f: GOTO 0xba4

0xb90: PushEmpty(int, string, object)
0xb91: Stack[-2] = Stack[-6]
0xb92: Stack[-1] = Stack[-7]
0xb93: Call2 0x17f3

0xb94: Stack[-4] = Stack[-3]
0xb95: Pop(3)
0xb96: Push((int) 0)
0xb97: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb98: IF (Stack[-1] == 0) GOTO 0xba4; Pop(1)

0xb99: Push((int) 1)
0xb9a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb9b: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb9c: PushEmpty()
0xb9d: Call2 0xbdf

0xb9e: Pop(0)
0xb9f: PushEmpty(string, object)
0xba0: Stack[-2] = Stack[-5]
0xba1: Stack[-1] = Stack[-6]
0xba2: Call2 0x17ff

0xba3: Pop(2)
0xba4: Return(); Pop(2)

0xba5: PushEmpty()
0xba6: PushEmpty(bool, string)
0xba7: Stack[-1] = Stack[-3]
0xba8: Call2 0x1721

0xba9: Pop(1)
0xbaa: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbab: PushEmpty()
0xbac: Call2 0xbdf

0xbad: Pop(0)
0xbae: PushEmpty(string)
0xbaf: Stack[-1] = Stack[-2]
0xbb0: Call2 0x1731

0xbb1: Pop(1)
0xbb2: Return(); Pop(0)

0xbb3: PushEmpty()
0xbb4: PushEmpty(bool, object)
0xbb5: Stack[-1] = Stack[-3]
0xbb6: Call2 0x16f7

0xbb7: Pop(1)
0xbb8: IF (Stack[-1] == 0) GOTO 0xbc1; Pop(1)

0xbb9: PushEmpty()
0xbba: Call2 0xbdf

0xbbb: Pop(0)
0xbbc: PushEmpty(object)
0xbbd: Stack[-1] = Stack[-2]
0xbbe: Call2 0x170e

0xbbf: Pop(1)
0xbc0: GOTO 0xbc5

0xbc1: PushEmpty(object)
0xbc2: Stack[-1] = Stack[-2]
0xbc3: Call2 0xbf8

0xbc4: Pop(1)
0xbc5: Return(); Pop(0)

0xbc6: PushEmpty()
0xbc7: PushEmpty(object)
0xbc8: Stack[-1] = Stack[-2]
0xbc9: Call2 0xbf8

0xbca: Pop(1)
0xbcb: Return(); Pop(0)

0xbcc: PushEmpty()
0xbcd: Push((int) 110)
0xbce: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xbcf: IF (Stack[-1] == 0) GOTO 0xbd1; Pop(1)

0xbd0: Return(); Pop(0)

0xbd1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbd2: Push((int) 110)
0xbd3: @ KillTimer(Stack[-1])
0xbd4: Pop(1)
0xbd5: @ ResetAAS()
0xbd6: Pop(0)
0xbd7: Return(); Pop(0)

0xbd8: PushEmpty()
0xbd9: Call2 0xbdf

0xbda: Pop(0)
0xbdb: PushEmpty()
0xbdc: Call2 0x182a

0xbdd: Pop(0)
0xbde: Return(); Pop(0)

0xbdf: Push((int) 110)
0xbe0: @ KillTimer(Stack[-1])
0xbe1: Pop(1)
0xbe2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbe3: PushEmpty()
0xbe4: Call2 0xc67

0xbe5: Pop(0)
0xbe6: Return(); Pop(0)

0xbe7: Push((int) 110)
0xbe8: @ KillTimer(Stack[-1])
0xbe9: Pop(1)
0xbea: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbeb: PushEmpty()
0xbec: Call2 0xc6e

0xbed: Pop(0)
0xbee: Return(); Pop(0)

0xbef: PushEmpty()
0xbf0: PushEmpty()
0xbf1: Call2 0xbdf

0xbf2: Pop(0)
0xbf3: PushEmpty(object)
0xbf4: Stack[-1] = Stack[-2]
0xbf5: Call2 0x16a6

0xbf6: Pop(1)
0xbf7: Return(); Pop(0)

0xbf8: PushEmpty(bool, int, bool, int)
0xbf9: PushEmpty(bool, object)
0xbfa: Stack[-1] = Stack[-7]
0xbfb: Call2 0x12d5

0xbfc: Pop(1)
0xbfd: Pop(1); Push((bool) Stack[-1] == 0)
0xbfe: IF (Stack[-1] == 0) GOTO 0xc00; Pop(1)

0xbff: Return(); Pop(4)

0xc00: Push( Stack[2 + Tasks[-1].StackPointer] )
0xc01: IF (Stack[-1] == 0) GOTO 0xc03; Pop(1)

0xc02: Return(); Pop(4)

0xc03: @ IsPlayerActor(Stack[-5], Stack[-2])
0xc04: Pop(0)
0xc05: Pop(0); Push((bool) Stack[-2] == 0)
0xc06: IF (Stack[-1] == 0) GOTO 0xc08; Pop(1)

0xc07: Return(); Pop(4)

0xc08: PushEmpty(int, object)
0xc09: Stack[-1] = Stack[-7]
0xc0a: Call2 0x1756

0xc0b: Stack[-3] = Stack[-2]
0xc0c: Pop(2)
0xc0d: Push((int) 0)
0xc0e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc0f: IF (Stack[-1] == 0) GOTO 0xc1f; Pop(1)

0xc10: Push((int) 1)
0xc11: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc12: IF (Stack[-1] == 0) GOTO 0xc16; Pop(1)

0xc13: PushEmpty()
0xc14: Call2 0xbe7

0xc15: Pop(0)
0xc16: PushEmpty(object)
0xc17: Stack[-1] = Stack[-6]
0xc18: Call2 0x175f

0xc19: Pop(1)
0xc1a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc1b: Push((int) 110)
0xc1c: Push((float)10.0)
0xc1d: @ SetTimer(Stack[-2], Stack[-1])
0xc1e: Pop(2)
0xc1f: Return(); Pop(4)

0xc20: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0xc21: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xc22: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xc23: Push((float)0.5)
0xc24: @ rand(Stack[-7], Stack[-1])
0xc25: Pop(1)
0xc26: @ Sleep(Stack[-6])
0xc27: Pop(0)
0xc28: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc29: IF (Stack[-1] == 0) GOTO 0xc5a; Pop(1)

0xc2a: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xc2b: IF (Stack[-1] == 0) GOTO 0xc3b; Pop(1)

0xc2c: @ GetPosition(Stack[-4])
0xc2d: Pop(0)
0xc2e: PushEmpty(float)
0xc2f: Call2 0xc5b

0xc30: Pop(0)
0xc31: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0xc32: Pop(1)
0xc33: Push(Stack[-3])
0xc34: IF (Stack[-1] == 0) GOTO 0xc36; Pop(1)

0xc35: GOTO 0xc3a

0xc36: Push((int) 1)
0xc37: @ Sleep(Stack[-1])
0xc38: Pop(1)
0xc39: GOTO 0xc2c

0xc3a: GOTO 0xc3c

0xc3b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xc3c: PushEmpty(object, cvector)
0xc3d: Stack[-1] = Stack[-7]
0xc3e: Call2 0xc77

0xc3f: Stack[-4] = Stack[-2]
0xc40: Pop(2)
0xc41: Pop(0); Push(( Stack[-2] != 0 )
0xc42: IF (Stack[-1] == 0) GOTO 0xc55; Pop(1)

0xc43: @ RotatePath(Stack[-2], Stack[-1])
0xc44: Pop(0)
0xc45: Push(Stack[-1])
0xc46: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc47: PushEmpty(bool)
0xc48: Call2 0xc75

0xc49: Pop(0)
0xc4a: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0xc4b: Pop(1)
0xc4c: Stack[-2] = 0
0xc4d: Push(Stack[-1])
0xc4e: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc4f: PushEmpty()
0xc50: Push(-0, 0); TaskCall(5)
0xc51: Call2 0xd21

0xc52: Pop(-0, 0); TaskReturn
0xc53: Pop(0)
0xc54: GOTO 0xc58

0xc55: Push((int) 1)
0xc56: @ Sleep(Stack[-1])
0xc57: Pop(1)
0xc58: Stack[-2] = 0
0xc59: GOTO 0xc28

0xc5a: Return(); Pop(12)

0xc5b: PushEmpty(float, float)
0xc5c: @ GetCameraFarDistance(Stack[-1])
0xc5d: Pop(0)
0xc5e: Stack[-3] = Stack[-1]
0xc5f: Return(); Pop(2)

0xc60: PushEmpty()
0xc61: @ RequestClearPath(Stack[-1])
0xc62: Pop(0)
0xc63: Return(); Pop(0)

0xc64: @ Stop()
0xc65: Pop(0)
0xc66: Return(); Pop(0)

0xc67: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc68: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xc69: @ Stop()
0xc6a: Pop(0)
0xc6b: @ StopGroup0()
0xc6c: Pop(0)
0xc6d: Return(); Pop(0)

0xc6e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc6f: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xc70: @ Stop()
0xc71: Pop(0)
0xc72: @ StopGroup0()
0xc73: Pop(0)
0xc74: Return(); Pop(0)

0xc75: Stack[-1] = (bool) 0
0xc76: Return(); Pop(0)

0xc77: PushEmpty(object, object)
0xc78: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0xc79: Pop(0)
0xc7a: Stack[-4] = Stack[-1]
0xc7b: Return(); Pop(2)

0xc7c: Stack[-1] = 0
0xc7d: PushEmpty(int, int)
0xc7e: PushEmpty(int, object)
0xc7f: Stack[-1] = Stack[-5]
0xc80: Call2 0x1821

0xc81: Stack[-3] = Stack[-2]
0xc82: Pop(2)
0xc83: Push((int) 0)
0xc84: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc85: IF (Stack[-1] == 0) GOTO 0xc90; Pop(1)

0xc86: Push((int) 1)
0xc87: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc88: IF (Stack[-1] == 0) GOTO 0xc8c; Pop(1)

0xc89: PushEmpty()
0xc8a: Call2 0xd72

0xc8b: Pop(0)
0xc8c: PushEmpty(object)
0xc8d: Stack[-1] = Stack[-4]
0xc8e: Call2 0x1824

0xc8f: Pop(1)
0xc90: Return(); Pop(2)

0xc91: PushEmpty(int, int)
0xc92: PushEmpty(object)
0xc93: Stack[-1] = Stack[-4]
0xc94: Call2 0x1714

0xc95: Pop(1)
0xc96: PushEmpty(int, object)
0xc97: Stack[-1] = Stack[-5]
0xc98: Call2 0x1767

0xc99: Stack[-3] = Stack[-2]
0xc9a: Pop(2)
0xc9b: Push((int) 0)
0xc9c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc9d: IF (Stack[-1] == 0) GOTO 0xca8; Pop(1)

0xc9e: Push((int) 1)
0xc9f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca0: IF (Stack[-1] == 0) GOTO 0xca4; Pop(1)

0xca1: PushEmpty()
0xca2: Call2 0xd72

0xca3: Pop(0)
0xca4: PushEmpty(object)
0xca5: Stack[-1] = Stack[-4]
0xca6: Call2 0x1771

0xca7: Pop(1)
0xca8: Return(); Pop(2)

0xca9: PushEmpty(int, int)
0xcaa: PushEmpty(bool, object, object, bool)
0xcab: Stack[-3] = Stack[-9]
0xcac: Stack[-2] = Stack[-8]
0xcad: Stack[-1] = Stack[-7]
0xcae: Call2 0x188d

0xcaf: Pop(3)
0xcb0: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcb1: PushEmpty(int, object, bool)
0xcb2: Stack[-2] = Stack[-8]
0xcb3: Stack[-1] = Stack[-6]
0xcb4: Call2 0x17c4

0xcb5: Stack[-4] = Stack[-3]
0xcb6: Pop(3)
0xcb7: Push((int) 0)
0xcb8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcb9: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcba: Push((int) 1)
0xcbb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcbc: IF (Stack[-1] == 0) GOTO 0xcc0; Pop(1)

0xcbd: PushEmpty()
0xcbe: Call2 0xd72

0xcbf: Pop(0)
0xcc0: PushEmpty(object)
0xcc1: Stack[-1] = Stack[-6]
0xcc2: Call2 0x17cb

0xcc3: Pop(1)
0xcc4: Return(); Pop(2)

0xcc5: PushEmpty(int, int)
0xcc6: PushEmpty(int, object)
0xcc7: Stack[-1] = Stack[-5]
0xcc8: Call2 0x17ee

0xcc9: Stack[-3] = Stack[-2]
0xcca: Pop(2)
0xccb: Push((int) 0)
0xccc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xccd: IF (Stack[-1] == 0) GOTO 0xcd8; Pop(1)

0xcce: Push((int) 1)
0xccf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcd0: IF (Stack[-1] == 0) GOTO 0xcd4; Pop(1)

0xcd1: PushEmpty()
0xcd2: Call2 0xd72

0xcd3: Pop(0)
0xcd4: PushEmpty(object)
0xcd5: Stack[-1] = Stack[-4]
0xcd6: Call2 0x17f1

0xcd7: Pop(1)
0xcd8: Return(); Pop(2)

0xcd9: PushEmpty(int, int)
0xcda: PushEmpty(bool, object, string)
0xcdb: Stack[-2] = Stack[-7]
0xcdc: Stack[-1] = Stack[-6]
0xcdd: Call2 0x16be

0xcde: Pop(2)
0xcdf: IF (Stack[-1] == 0) GOTO 0xce9; Pop(1)

0xce0: PushEmpty()
0xce1: Call2 0xd72

0xce2: Pop(0)
0xce3: PushEmpty(object, string)
0xce4: Stack[-2] = Stack[-6]
0xce5: Stack[-1] = Stack[-5]
0xce6: Call2 0x16de

0xce7: Pop(2)
0xce8: GOTO 0xcfd

0xce9: PushEmpty(int, string, object)
0xcea: Stack[-2] = Stack[-6]
0xceb: Stack[-1] = Stack[-7]
0xcec: Call2 0x17f3

0xced: Stack[-4] = Stack[-3]
0xcee: Pop(3)
0xcef: Push((int) 0)
0xcf0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcf1: IF (Stack[-1] == 0) GOTO 0xcfd; Pop(1)

0xcf2: Push((int) 1)
0xcf3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcf4: IF (Stack[-1] == 0) GOTO 0xcf8; Pop(1)

0xcf5: PushEmpty()
0xcf6: Call2 0xd72

0xcf7: Pop(0)
0xcf8: PushEmpty(string, object)
0xcf9: Stack[-2] = Stack[-5]
0xcfa: Stack[-1] = Stack[-6]
0xcfb: Call2 0x17ff

0xcfc: Pop(2)
0xcfd: Return(); Pop(2)

0xcfe: PushEmpty()
0xcff: PushEmpty(bool, string)
0xd00: Stack[-1] = Stack[-3]
0xd01: Call2 0x1721

0xd02: Pop(1)
0xd03: IF (Stack[-1] == 0) GOTO 0xd0b; Pop(1)

0xd04: PushEmpty()
0xd05: Call2 0xd72

0xd06: Pop(0)
0xd07: PushEmpty(string)
0xd08: Stack[-1] = Stack[-2]
0xd09: Call2 0x1731

0xd0a: Pop(1)
0xd0b: Return(); Pop(0)

0xd0c: PushEmpty()
0xd0d: Call2 0xd72

0xd0e: Pop(0)
0xd0f: PushEmpty()
0xd10: Call2 0x182a

0xd11: Pop(0)
0xd12: Return(); Pop(0)

0xd13: PushEmpty()
0xd14: PushEmpty(bool, object)
0xd15: Stack[-1] = Stack[-3]
0xd16: Call2 0x16f7

0xd17: Pop(1)
0xd18: IF (Stack[-1] == 0) GOTO 0xd20; Pop(1)

0xd19: PushEmpty()
0xd1a: Call2 0xd72

0xd1b: Pop(0)
0xd1c: PushEmpty(object)
0xd1d: Stack[-1] = Stack[-2]
0xd1e: Call2 0x170e

0xd1f: Pop(1)
0xd20: Return(); Pop(0)

0xd21: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xd22: @ WaitForAnimEnd()
0xd23: Pop(0)
0xd24: PushEmpty(bool)
0xd25: Call2 0x1376

0xd26: Pop(0)
0xd27: Pop(1); Push((bool) Stack[-1] == 0)
0xd28: IF (Stack[-1] == 0) GOTO 0xd2a; Pop(1)

0xd29: Return(); Pop(14)

0xd2a: PushEmpty(int)
0xd2b: Call2 0x1745

0xd2c: Stack[-8] = Stack[-1]
0xd2d: Pop(1)
0xd2e: Stack[-6] = (int) 0
0xd2f: PushEmpty(bool)
0xd30: Stack[-1] = (bool) 0
0xd31: Push((int) 5)
0xd32: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xd33: IF (Stack[-1] == 0) GOTO 0xd39; Pop(1)

0xd34: PushEmpty(bool)
0xd35: Call2 0x1376

0xd36: Pop(0)
0xd37: IF (Stack[-1] == 0) GOTO 0xd39; Pop(1)

0xd38: Stack[-1] = (bool) 1
0xd39: IF (Stack[-1] == 0) GOTO 0xd6d; Pop(1)

0xd3a: Push((int) 3)
0xd3b: @ irand(Stack[-6], Stack[-1])
0xd3c: Pop(1)
0xd3d: Push((int) 0)
0xd3e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd3f: IF (Stack[-1] == 0) GOTO 0xd51; Pop(1)

0xd40: Push(Stack[-7])
0xd41: IF (Stack[-1] == 0) GOTO 0xd50; Pop(1)

0xd42: @ irand(Stack[-4], Stack[-7])
0xd43: Pop(0)
0xd44: Push("all")
0xd45: PushEmpty(string, int)
0xd46: Stack[-1] = Stack[-7]
0xd47: Call2 0x173e

0xd48: Pop(1)
0xd49: @ PlayAnimation(Stack[-2], Stack[-1])
0xd4a: Pop(2)
0xd4b: @ WaitForAnimEnd(Stack[-3])
0xd4c: Pop(0)
0xd4d: Pop(0); Push((bool) Stack[-3] == 0)
0xd4e: IF (Stack[-1] == 0) GOTO 0xd50; Pop(1)

0xd4f: GOTO 0xd6d

0xd50: GOTO 0xd62

0xd51: Push((int) 1)
0xd52: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd53: IF (Stack[-1] == 0) GOTO 0xd5f; Pop(1)

0xd54: Push((int) 4)
0xd55: @ rand(Stack[-3], Stack[-1])
0xd56: Pop(1)
0xd57: Push((int) 1)
0xd58: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd59: @ Sleep(Stack[-1], Stack[-2])
0xd5a: Pop(1)
0xd5b: Pop(0); Push((bool) Stack[-1] == 0)
0xd5c: IF (Stack[-1] == 0) GOTO 0xd5e; Pop(1)

0xd5d: GOTO 0xd6d

0xd5e: GOTO 0xd62

0xd5f: Push(Stack[-6])
0xd60: IF (Stack[-1] == 0) GOTO 0xd62; Pop(1)

0xd61: GOTO 0xd6d

0xd62: PushEmpty(bool)
0xd63: Call2 0xd70

0xd64: Pop(0)
0xd65: Pop(1); Push((bool) Stack[-1] == 0)
0xd66: IF (Stack[-1] == 0) GOTO 0xd68; Pop(1)

0xd67: GOTO 0xd6d

0xd68: @ ResetAAS()
0xd69: Pop(0)
0xd6a: Push((int) 1)
0xd6b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xd6c: GOTO 0xd2f

0xd6d: @ ResetAAS()
0xd6e: Pop(0)
0xd6f: Return(); Pop(14)

0xd70: Stack[-1] = (bool) 1
0xd71: Return(); Pop(0)

0xd72: @ StopAnimation()
0xd73: Pop(0)
0xd74: @ StopGroup0()
0xd75: Pop(0)
0xd76: Return(); Pop(0)

0xd77: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xd78: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0xd79: PushEmpty()
0xd7a: Call2 0xdaa

0xd7b: Pop(0)
0xd7c: @ GetDirection(Stack[-3])
0xd7d: Pop(0)
0xd7e: PushEmpty(cvector, object)
0xd7f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd80: Call2 0x1243

0xd81: Stack[-4] = Stack[-2]
0xd82: Pop(2)
0xd83: PushEmpty(float, cvector, cvector)
0xd84: Stack[-2] = Stack[-6]
0xd85: Stack[-1] = Stack[-5]
0xd86: Call2 0x14ae

0xd87: Pop(2)
0xd88: Push((int) 0)
0xd89: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xd8a: IF (Stack[-1] == 0) GOTO 0xd91; Pop(1)

0xd8b: PushEmpty(object)
0xd8c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8d: Call2 0x136b

0xd8e: Pop(1)
0xd8f: Stack[-1] = (bool) 1
0xd90: GOTO 0xd94

0xd91: Push((float)1.5)
0xd92: @ Sleep(Stack[-1], Stack[-2])
0xd93: Pop(1)
0xd94: Push(Stack[-1])
0xd95: IF (Stack[-1] == 0) GOTO 0xda4; Pop(1)

0xd96: PushEmpty(object)
0xd97: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd98: Call2 0x136b

0xd99: Pop(1)
0xd9a: Push((int) 111)
0xd9b: Push((float)0.5)
0xd9c: @ SetTimer(Stack[-2], Stack[-1])
0xd9d: Pop(2)
0xd9e: Push((float)5.0)
0xd9f: @ Sleep(Stack[-1])
0xda0: Pop(1)
0xda1: Push((int) 111)
0xda2: @ KillTimer(Stack[-1])
0xda3: Pop(1)
0xda4: @ StopAsync()
0xda5: Pop(0)
0xda6: Push("head")
0xda7: @ UnlookAsync(Stack[-1])
0xda8: Pop(1)
0xda9: Return(); Pop(6)

0xdaa: PushEmpty(object)
0xdab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdac: Call2 0x142e

0xdad: Pop(1)
0xdae: Return(); Pop(0)

0xdaf: PushEmpty(int, int)
0xdb0: PushEmpty(int, object)
0xdb1: Stack[-1] = Stack[-5]
0xdb2: Call2 0x1821

0xdb3: Stack[-3] = Stack[-2]
0xdb4: Pop(2)
0xdb5: Push((int) 0)
0xdb6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdb7: IF (Stack[-1] == 0) GOTO 0xdc2; Pop(1)

0xdb8: Push((int) 1)
0xdb9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdba: IF (Stack[-1] == 0) GOTO 0xdbe; Pop(1)

0xdbb: PushEmpty()
0xdbc: Call2 0xe3e

0xdbd: Pop(0)
0xdbe: PushEmpty(object)
0xdbf: Stack[-1] = Stack[-4]
0xdc0: Call2 0x1824

0xdc1: Pop(1)
0xdc2: Return(); Pop(2)

0xdc3: PushEmpty(int, int)
0xdc4: PushEmpty(object)
0xdc5: Stack[-1] = Stack[-4]
0xdc6: Call2 0x1714

0xdc7: Pop(1)
0xdc8: PushEmpty(int, object)
0xdc9: Stack[-1] = Stack[-5]
0xdca: Call2 0x1767

0xdcb: Stack[-3] = Stack[-2]
0xdcc: Pop(2)
0xdcd: Push((int) 0)
0xdce: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdcf: IF (Stack[-1] == 0) GOTO 0xdda; Pop(1)

0xdd0: Push((int) 1)
0xdd1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdd2: IF (Stack[-1] == 0) GOTO 0xdd6; Pop(1)

0xdd3: PushEmpty()
0xdd4: Call2 0xe3e

0xdd5: Pop(0)
0xdd6: PushEmpty(object)
0xdd7: Stack[-1] = Stack[-4]
0xdd8: Call2 0x1771

0xdd9: Pop(1)
0xdda: Return(); Pop(2)

0xddb: PushEmpty(int, int)
0xddc: PushEmpty(bool, object, object, bool)
0xddd: Stack[-3] = Stack[-9]
0xdde: Stack[-2] = Stack[-8]
0xddf: Stack[-1] = Stack[-7]
0xde0: Call2 0x188d

0xde1: Pop(3)
0xde2: IF (Stack[-1] == 0) GOTO 0xdf6; Pop(1)

0xde3: PushEmpty(int, object, bool)
0xde4: Stack[-2] = Stack[-8]
0xde5: Stack[-1] = Stack[-6]
0xde6: Call2 0x17c4

0xde7: Stack[-4] = Stack[-3]
0xde8: Pop(3)
0xde9: Push((int) 0)
0xdea: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdeb: IF (Stack[-1] == 0) GOTO 0xdf6; Pop(1)

0xdec: Push((int) 1)
0xded: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdee: IF (Stack[-1] == 0) GOTO 0xdf2; Pop(1)

0xdef: PushEmpty()
0xdf0: Call2 0xe3e

0xdf1: Pop(0)
0xdf2: PushEmpty(object)
0xdf3: Stack[-1] = Stack[-6]
0xdf4: Call2 0x17cb

0xdf5: Pop(1)
0xdf6: Return(); Pop(2)

0xdf7: PushEmpty(int, int)
0xdf8: PushEmpty(int, object)
0xdf9: Stack[-1] = Stack[-5]
0xdfa: Call2 0x17ee

0xdfb: Stack[-3] = Stack[-2]
0xdfc: Pop(2)
0xdfd: Push((int) 0)
0xdfe: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdff: IF (Stack[-1] == 0) GOTO 0xe0a; Pop(1)

0xe00: Push((int) 1)
0xe01: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe02: IF (Stack[-1] == 0) GOTO 0xe06; Pop(1)

0xe03: PushEmpty()
0xe04: Call2 0xe3e

0xe05: Pop(0)
0xe06: PushEmpty(object)
0xe07: Stack[-1] = Stack[-4]
0xe08: Call2 0x17f1

0xe09: Pop(1)
0xe0a: Return(); Pop(2)

0xe0b: PushEmpty(int, int)
0xe0c: PushEmpty(bool, object, string)
0xe0d: Stack[-2] = Stack[-7]
0xe0e: Stack[-1] = Stack[-6]
0xe0f: Call2 0x16be

0xe10: Pop(2)
0xe11: IF (Stack[-1] == 0) GOTO 0xe1b; Pop(1)

0xe12: PushEmpty()
0xe13: Call2 0xe3e

0xe14: Pop(0)
0xe15: PushEmpty(object, string)
0xe16: Stack[-2] = Stack[-6]
0xe17: Stack[-1] = Stack[-5]
0xe18: Call2 0x16de

0xe19: Pop(2)
0xe1a: GOTO 0xe2f

0xe1b: PushEmpty(int, string, object)
0xe1c: Stack[-2] = Stack[-6]
0xe1d: Stack[-1] = Stack[-7]
0xe1e: Call2 0x17f3

0xe1f: Stack[-4] = Stack[-3]
0xe20: Pop(3)
0xe21: Push((int) 0)
0xe22: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe23: IF (Stack[-1] == 0) GOTO 0xe2f; Pop(1)

0xe24: Push((int) 1)
0xe25: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe26: IF (Stack[-1] == 0) GOTO 0xe2a; Pop(1)

0xe27: PushEmpty()
0xe28: Call2 0xe3e

0xe29: Pop(0)
0xe2a: PushEmpty(string, object)
0xe2b: Stack[-2] = Stack[-5]
0xe2c: Stack[-1] = Stack[-6]
0xe2d: Call2 0x17ff

0xe2e: Pop(2)
0xe2f: Return(); Pop(2)

0xe30: PushEmpty()
0xe31: PushEmpty(bool, string)
0xe32: Stack[-1] = Stack[-3]
0xe33: Call2 0x1721

0xe34: Pop(1)
0xe35: IF (Stack[-1] == 0) GOTO 0xe3d; Pop(1)

0xe36: PushEmpty()
0xe37: Call2 0xe3e

0xe38: Pop(0)
0xe39: PushEmpty(string)
0xe3a: Stack[-1] = Stack[-2]
0xe3b: Call2 0x1731

0xe3c: Pop(1)
0xe3d: Return(); Pop(0)

0xe3e: @ StopGroup0()
0xe3f: Pop(0)
0xe40: @ StopAsync()
0xe41: Pop(0)
0xe42: Push("head")
0xe43: @ UnlookAsync(Stack[-1])
0xe44: Pop(1)
0xe45: Push((int) 111)
0xe46: @ KillTimer(Stack[-1])
0xe47: Pop(1)
0xe48: Return(); Pop(0)

0xe49: PushEmpty()
0xe4a: PushEmpty()
0xe4b: Call2 0xe3e

0xe4c: Pop(0)
0xe4d: PushEmpty(object)
0xe4e: Stack[-1] = Stack[-2]
0xe4f: Call2 0x16a6

0xe50: Pop(1)
0xe51: Return(); Pop(0)

0xe52: PushEmpty(cvector, cvector, cvector, cvector)
0xe53: Push((int) 111)
0xe54: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xe55: IF (Stack[-1] == 0) GOTO 0xe57; Pop(1)

0xe56: Return(); Pop(4)

0xe57: PushEmpty(bool, object)
0xe58: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe59: Call2 0x12d5

0xe5a: Pop(1)
0xe5b: Pop(1); Push((bool) Stack[-1] == 0)
0xe5c: IF (Stack[-1] == 0) GOTO 0xe61; Pop(1)

0xe5d: PushEmpty()
0xe5e: Call2 0xe3e

0xe5f: Pop(0)
0xe60: Return(); Pop(4)

0xe61: @ GetDirection(Stack[-2])
0xe62: Pop(0)
0xe63: PushEmpty(cvector, object)
0xe64: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe65: Call2 0x1243

0xe66: Stack[-3] = Stack[-2]
0xe67: Pop(2)
0xe68: PushEmpty(float, cvector, cvector)
0xe69: Stack[-2] = Stack[-5]
0xe6a: Stack[-1] = Stack[-4]
0xe6b: Call2 0x14ae

0xe6c: Pop(2)
0xe6d: Push((float)0.5)
0xe6e: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xe6f: IF (Stack[-1] == 0) GOTO 0xe74; Pop(1)

0xe70: PushEmpty(object)
0xe71: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe72: Call2 0x136b

0xe73: Pop(1)
0xe74: Return(); Pop(4)

0xe75: PushEmpty()
0xe76: Call2 0xe3e

0xe77: Pop(0)
0xe78: PushEmpty()
0xe79: Call2 0x182a

0xe7a: Pop(0)
0xe7b: Return(); Pop(0)

0xe7c: PushEmpty()
0xe7d: PushEmpty(bool, object)
0xe7e: Stack[-1] = Stack[-3]
0xe7f: Call2 0x16f7

0xe80: Pop(1)
0xe81: IF (Stack[-1] == 0) GOTO 0xe89; Pop(1)

0xe82: PushEmpty()
0xe83: Call2 0xe3e

0xe84: Pop(0)
0xe85: PushEmpty(object)
0xe86: Stack[-1] = Stack[-2]
0xe87: Call2 0x170e

0xe88: Pop(1)
0xe89: Return(); Pop(0)

0xe8a: PushEmpty()
0xe8b: PushEmpty(object, bool, float)
0xe8c: Stack[-3] = Stack[-4]
0xe8d: Stack[-2] = (bool) 1
0xe8e: Stack[-1] = (float) 180.0
0xe8f: Call2 0xe98

0xe90: Pop(3)
0xe91: Return(); Pop(0)

0xe92: PushEmpty()
0xe93: Stack[-3] = (float) 0.05
0xe94: Return(); Pop(0)

0xe95: PushEmpty()
0xe96: Stack[-3] = (int) 0
0xe97: Return(); Pop(0)

0xe98: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xe99: PushEmpty()
0xe9a: Call2 0xf7d

0xe9b: Pop(0)
0xe9c: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xe9d: Push("@GetAttackDistance")
0xe9e: Push((int) 1)
0xe9f: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xea0: IF (Stack[-1] == 0) GOTO 0xea6; Pop(1)

0xea1: @@ GetAttackDistance(Stack[-11])
0xea2: Pop(0)
0xea3: Push((int) 50)
0xea4: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xea5: GOTO 0xea7

0xea6: Stack[-11] = Stack[-23]
0xea7: Push((int) 150)
0xea8: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xea9: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xeaa: Stack[-11] = (int) 150
0xeab: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xeac: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xead: @ IsPlayerActor(Stack[-0], Stack[-8])
0xeae: Pop(0)
0xeaf: Push(Stack[-8])
0xeb0: IF (Stack[-1] == 0) GOTO 0xeb9; Pop(1)

0xeb1: Push("attack")
0xeb2: @ PlayGlobalMusic(Stack[-1])
0xeb3: Pop(1)
0xeb4: PushEmpty(object)
0xeb5: Call2 0x1474

0xeb6: Pop(0)
0xeb7: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xeb8: Pop(1)
0xeb9: Push(Stack[-24])
0xeba: IF (Stack[-1] == 0) GOTO 0xebd; Pop(1)

0xebb: Stack[-7] = (bool) 0
0xebc: GOTO 0xebe

0xebd: Stack[-7] = (bool) 1
0xebe: Push((float)400.0)
0xebf: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xec0: PushEmpty(bool)
0xec1: Stack[-1] = (bool) 0
0xec2: PushEmpty(bool, object)
0xec3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec4: Call2 0x12d5

0xec5: Pop(1)
0xec6: IF (Stack[-1] == 0) GOTO 0xeca; Pop(1)

0xec7: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xec8: IF (Stack[-1] == 0) GOTO 0xeca; Pop(1)

0xec9: Stack[-1] = (bool) 1
0xeca: IF (Stack[-1] == 0) GOTO 0xf6c; Pop(1)

0xecb: PushEmpty()
0xecc: Call2 0x111a

0xecd: Pop(0)
0xece: @@ GetPFPosition(Stack[-10])
0xecf: Pop(0)
0xed0: @ GetPFPosition(Stack[-9])
0xed1: Pop(0)
0xed2: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xed3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xed4: Pop(0); Push(Stack[-6] * Stack[-6]);
0xed5: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xed6: IF (Stack[-1] == 0) GOTO 0xee6; Pop(1)

0xed7: PushEmpty(bool, object, float, float, bool, bool)
0xed8: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xed9: Stack[-4] = Stack[-17]
0xeda: Stack[-3] = (float) 3000.0
0xedb: Stack[-2] = (bool) 1
0xedc: Stack[-1] = (bool) 0
0xedd: Push(-6, 3); TaskCall(8)
0xede: Call2 0x1135

0xedf: Pop(-6, 3); TaskReturn
0xee0: Pop(5)
0xee1: Pop(1); Push((bool) Stack[-1] == 0)
0xee2: IF (Stack[-1] == 0) GOTO 0xee4; Pop(1)

0xee3: GOTO 0xf6c

0xee4: Stack[-7] = (bool) 0
0xee5: GOTO 0xf6b

0xee6: Pop(0); Push(Stack[-23] * Stack[-23]);
0xee7: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xee8: IF (Stack[-1] == 0) GOTO 0xf63; Pop(1)

0xee9: @@ GetPFPosition(Stack[-3])
0xeea: Pop(0)
0xeeb: @ CanReachByPF(Stack[-2], Stack[-3])
0xeec: Pop(0)
0xeed: Pop(0); Push((bool) Stack[-2] == 0)
0xeee: IF (Stack[-1] == 0) GOTO 0xefe; Pop(1)

0xeef: PushEmpty(bool, object, float, float, bool, bool)
0xef0: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xef1: Stack[-4] = Stack[-17]
0xef2: Stack[-3] = (float) 3000.0
0xef3: Stack[-2] = (bool) 1
0xef4: Stack[-1] = (bool) 0
0xef5: Push(-6, 3); TaskCall(8)
0xef6: Call2 0x1135

0xef7: Pop(-6, 3); TaskReturn
0xef8: Pop(5)
0xef9: Pop(1); Push((bool) Stack[-1] == 0)
0xefa: IF (Stack[-1] == 0) GOTO 0xefc; Pop(1)

0xefb: GOTO 0xf6c

0xefc: Stack[-7] = (bool) 0
0xefd: GOTO 0xec0

0xefe: Pop(0); Push((bool) Stack[-7] == 0)
0xeff: IF (Stack[-1] == 0) GOTO 0xf17; Pop(1)

0xf00: PushEmpty(object)
0xf01: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf02: Call2 0x136b

0xf03: Pop(1)
0xf04: Push("all")
0xf05: Push("attack_on")
0xf06: @ PlayAnimation(Stack[-2], Stack[-1])
0xf07: Pop(2)
0xf08: @ WaitForAnimEnd()
0xf09: Pop(0)
0xf0a: PushEmpty()
0xf0b: Call2 0x111a

0xf0c: Pop(0)
0xf0d: @ StopAsync()
0xf0e: Pop(0)
0xf0f: Stack[-7] = (bool) 1
0xf10: PushEmpty(bool, object)
0xf11: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf12: Call2 0x12d5

0xf13: Pop(1)
0xf14: Pop(1); Push((bool) Stack[-1] == 0)
0xf15: IF (Stack[-1] == 0) GOTO 0xf17; Pop(1)

0xf16: GOTO 0xf6c

0xf17: @ rand(Stack[-1])
0xf18: Pop(0)
0xf19: PushEmpty(bool)
0xf1a: Stack[-1] = (bool) 1
0xf1b: Push((float)0.25)
0xf1c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xf1d: IF (Stack[-1] == 0) GOTO 0xf23; Pop(1)

0xf1e: PushEmpty(bool)
0xf1f: Call2 0x10ef

0xf20: Pop(0)
0xf21: IF (Stack[-1] == 0) GOTO 0xf23; Pop(1)

0xf22: Stack[-1] = (bool) 0
0xf23: IF (Stack[-1] == 0) GOTO 0xf34; Pop(1)

0xf24: @ Face(Stack[-0])
0xf25: Pop(0)
0xf26: PushEmpty()
0xf27: Call2 0x1121

0xf28: Pop(0)
0xf29: Push("all")
0xf2a: Push("attack_stay")
0xf2b: @ PlayAnimation(Stack[-2], Stack[-1])
0xf2c: Pop(2)
0xf2d: PushEmpty(bool, float)
0xf2e: Stack[-1] = Stack[-25]
0xf2f: Call2 0x106b

0xf30: Pop(2)
0xf31: @ StopAsync()
0xf32: Pop(0)
0xf33: GOTO 0xf62

0xf34: @ Face(Stack[-0])
0xf35: Pop(0)
0xf36: Push("all")
0xf37: Push("fjump")
0xf38: @ PlayAnimation(Stack[-2], Stack[-1])
0xf39: Pop(2)
0xf3a: @ WaitForAnimEnd()
0xf3b: Pop(0)
0xf3c: PushEmpty()
0xf3d: Call2 0x111a

0xf3e: Pop(0)
0xf3f: Push(CVector(0.0, 0.0, 0.0))
0xf40: @ SetSpeed(Stack[-1])
0xf41: Pop(1)
0xf42: @ Stop()
0xf43: Pop(0)
0xf44: @ StopAsync()
0xf45: Pop(0)
0xf46: PushEmpty(bool)
0xf47: Call2 0x10ef

0xf48: Pop(0)
0xf49: Pop(1); Push((bool) Stack[-1] == 0)
0xf4a: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf4b: PushEmpty(bool, object)
0xf4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4d: Call2 0x12d5

0xf4e: Pop(1)
0xf4f: Pop(1); Push((bool) Stack[-1] == 0)
0xf50: IF (Stack[-1] == 0) GOTO 0xf52; Pop(1)

0xf51: GOTO 0xf6c

0xf52: @@ GetPFPosition(Stack[-10])
0xf53: Pop(0)
0xf54: @ GetPFPosition(Stack[-9])
0xf55: Pop(0)
0xf56: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xf57: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xf58: Pop(0); Push(Stack[-23] * Stack[-23]);
0xf59: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xf5a: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf5b: PushEmpty(bool, float)
0xf5c: Stack[-1] = Stack[-25]
0xf5d: Call2 0xfc7

0xf5e: Pop(1)
0xf5f: Pop(1); Push((bool) Stack[-1] == 0)
0xf60: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf61: GOTO 0xf6c

0xf62: GOTO 0xf6b

0xf63: PushEmpty(bool, float)
0xf64: Stack[-1] = Stack[-25]
0xf65: Call2 0xfc7

0xf66: Pop(1)
0xf67: Pop(1); Push((bool) Stack[-1] == 0)
0xf68: IF (Stack[-1] == 0) GOTO 0xf6a; Pop(1)

0xf69: GOTO 0xf6c

0xf6a: Stack[-7] = (bool) 1
0xf6b: GOTO 0xec0

0xf6c: @ WaitForAnimEnd()
0xf6d: Pop(0)
0xf6e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf6f: IF (Stack[-1] == 0) GOTO 0xf71; Pop(1)

0xf70: Return(); Pop(22)

0xf71: Push("all")
0xf72: Push("attack_off")
0xf73: @ PlayAnimation(Stack[-2], Stack[-1])
0xf74: Pop(2)
0xf75: @ WaitForAnimEnd()
0xf76: Pop(0)
0xf77: Push(Stack[-8])
0xf78: IF (Stack[-1] == 0) GOTO 0xf7c; Pop(1)

0xf79: Push((float)2.0)
0xf7a: @ Sleep(Stack[-1])
0xf7b: Pop(1)
0xf7c: Return(); Pop(22)

0xf7d: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0xf7e: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xf7f: Push("all")
0xf80: Push("attack_begin")
0xf81: Push((int) 1)
0xf82: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0xf83: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf84: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xf85: Pop(2)
0xf86: Pop(0); Push((bool) Stack[-3] == 0)
0xf87: IF (Stack[-1] == 0) GOTO 0xf89; Pop(1)

0xf88: GOTO 0xf8c

0xf89: Push((int) 1)
0xf8a: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xf8b: GOTO 0xf7f

0xf8c: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xf8d: Push("attack")
0xf8e: Push((int) 1)
0xf8f: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xf90: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf91: @ IsExisting3DSound(Stack[-3], Stack[-1])
0xf92: Pop(1)
0xf93: Pop(0); Push((bool) Stack[-2] == 0)
0xf94: IF (Stack[-1] == 0) GOTO 0xf96; Pop(1)

0xf95: GOTO 0xf99

0xf96: Push((int) 1)
0xf97: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xf98: GOTO 0xf8d

0xf99: Push("all")
0xf9a: Push("bjump")
0xf9b: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xf9c: Pop(2)
0xf9d: Push(CvectorIndex(Stack[-1], 2))
0xf9e: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0xf9f: Return(); Pop(6)

0xfa0: PushEmpty(object, float, float, object, float, float)
0xfa1: Push((float)0.9)
0xfa2: Pop(1); Push(Stack[-9] * Stack[-1]);
0xfa3: @ GetVictim(Stack[-1], Stack[-4])
0xfa4: Pop(1)
0xfa5: @ ReportAttack(Stack[-0])
0xfa6: Pop(0)
0xfa7: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xfa8: IF (Stack[-1] == 0) GOTO 0xfc5; Pop(1)

0xfa9: PushEmpty(float, object, int)
0xfaa: Stack[-2] = Stack[-6]
0xfab: Stack[-1] = Stack[-10]
0xfac: Call2 0xe92

0xfad: Stack[-5] = Stack[-3]
0xfae: Pop(3)
0xfaf: PushEmpty(float, object, float, int)
0xfb0: Stack[-3] = Stack[-7]
0xfb1: Stack[-2] = Stack[-6]
0xfb2: PushEmpty(int, object, int)
0xfb3: Stack[-2] = Stack[-10]
0xfb4: Stack[-1] = Stack[-14]
0xfb5: Call2 0xe95

0xfb6: Stack[-4] = Stack[-3]
0xfb7: Pop(3)
0xfb8: Call2 0x1263

0xfb9: Stack[-5] = Stack[-4]
0xfba: Pop(4)
0xfbb: PushEmpty(int)
0xfbc: Call2 0x111f

0xfbd: Pop(0)
0xfbe: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0xfbf: Pop(1)
0xfc0: PushEmpty(object, float)
0xfc1: Stack[-2] = Stack[-5]
0xfc2: Stack[-1] = Stack[-3]
0xfc3: Call2 0x1126

0xfc4: Pop(2)
0xfc5: Return(); Pop(6)

0xfc6: Stack[-3] = 0
0xfc7: PushEmpty(int, bool, int, string, int, bool, int, string)
0xfc8: PushEmpty()
0xfc9: Call2 0x111a

0xfca: Pop(0)
0xfcb: @ irand(Stack[-4], Stack[-1])
0xfcc: Pop(0)
0xfcd: Push((int) 1)
0xfce: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xfcf: @ Face(Stack[-0])
0xfd0: Pop(0)
0xfd1: Push((bool) 1)
0xfd2: @ SetAttackState(Stack[-1])
0xfd3: Pop(1)
0xfd4: PushEmpty()
0xfd5: Call2 0x14e7

0xfd6: Pop(0)
0xfd7: Push("all")
0xfd8: Push("attack_begin")
0xfd9: Pop(1); Push(Stack[-1] + Stack[-6]);
0xfda: @ PlayAnimation(Stack[-2], Stack[-1])
0xfdb: Pop(2)
0xfdc: @ WaitForAnimEnd()
0xfdd: Pop(0)
0xfde: PushEmpty()
0xfdf: Call2 0x10fa

0xfe0: Pop(0)
0xfe1: PushEmpty(bool, object)
0xfe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe3: Call2 0x12d5

0xfe4: Pop(1)
0xfe5: Pop(1); Push((bool) Stack[-1] == 0)
0xfe6: IF (Stack[-1] == 0) GOTO 0xfeb; Pop(1)

0xfe7: @ StopAsync()
0xfe8: Pop(0)
0xfe9: Stack[-10] = (bool) 0
0xfea: Return(); Pop(8)

0xfeb: PushEmpty(float, int)
0xfec: Stack[-2] = Stack[-11]
0xfed: Stack[-1] = Stack[-6]
0xfee: Call2 0xfa0

0xfef: Pop(2)
0xff0: Push("all")
0xff1: Push("attack_middle")
0xff2: Pop(1); Push(Stack[-1] + Stack[-6]);
0xff3: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xff4: Pop(2)
0xff5: Push(Stack[-3])
0xff6: IF (Stack[-1] == 0) GOTO 0x103c; Pop(1)

0xff7: PushEmpty()
0xff8: Call2 0x14e7

0xff9: Pop(0)
0xffa: Push("all")
0xffb: Push("attack_middle")
0xffc: Pop(1); Push(Stack[-1] + Stack[-6]);
0xffd: @ PlayAnimation(Stack[-2], Stack[-1])
0xffe: Pop(2)
0xfff: @ WaitForAnimEnd()
0x1000: Pop(0)
0x1001: PushEmpty()
0x1002: Call2 0x111a

0x1003: Pop(0)
0x1004: PushEmpty(bool, object)
0x1005: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1006: Call2 0x12d5

0x1007: Pop(1)
0x1008: Pop(1); Push((bool) Stack[-1] == 0)
0x1009: IF (Stack[-1] == 0) GOTO 0x100e; Pop(1)

0x100a: @ StopAsync()
0x100b: Pop(0)
0x100c: Stack[-10] = (bool) 0
0x100d: Return(); Pop(8)

0x100e: PushEmpty(float, int)
0x100f: Stack[-2] = Stack[-11]
0x1010: Stack[-1] = Stack[-6]
0x1011: Call2 0xfa0

0x1012: Pop(2)
0x1013: Stack[-2] = (int) 1
0x1014: Push("attack_middle")
0x1015: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1016: Push("_")
0x1017: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1018: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x1019: Push("all")
0x101a: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x101b: Pop(1)
0x101c: Pop(0); Push((bool) Stack[-3] == 0)
0x101d: IF (Stack[-1] == 0) GOTO 0x101f; Pop(1)

0x101e: GOTO 0x103c

0x101f: PushEmpty()
0x1020: Call2 0x14e7

0x1021: Pop(0)
0x1022: Push("all")
0x1023: @ PlayAnimation(Stack[-1], Stack[-2])
0x1024: Pop(1)
0x1025: @ WaitForAnimEnd()
0x1026: Pop(0)
0x1027: PushEmpty()
0x1028: Call2 0x111a

0x1029: Pop(0)
0x102a: PushEmpty(bool, object)
0x102b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102c: Call2 0x12d5

0x102d: Pop(1)
0x102e: Pop(1); Push((bool) Stack[-1] == 0)
0x102f: IF (Stack[-1] == 0) GOTO 0x1034; Pop(1)

0x1030: @ StopAsync()
0x1031: Pop(0)
0x1032: Stack[-10] = (bool) 0
0x1033: Return(); Pop(8)

0x1034: PushEmpty(float, int)
0x1035: Stack[-2] = Stack[-11]
0x1036: Stack[-1] = Stack[-6]
0x1037: Call2 0xfa0

0x1038: Pop(2)
0x1039: Push((int) 1)
0x103a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x103b: GOTO 0x1014

0x103c: Push((bool) 0)
0x103d: @ SetAttackState(Stack[-1])
0x103e: Pop(1)
0x103f: Push("all")
0x1040: Push("attack_end")
0x1041: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1042: @ PlayAnimation(Stack[-2], Stack[-1])
0x1043: Pop(2)
0x1044: PushEmpty(bool)
0x1045: Call2 0x1128

0x1046: Pop(0)
0x1047: IF (Stack[-1] == 0) GOTO 0x104e; Pop(1)

0x1048: PushEmpty(bool, float)
0x1049: Stack[-1] = (float) 0.75
0x104a: Call2 0x1050

0x104b: Pop(2)
0x104c: @ StopAsync()
0x104d: Pop(0)
0x104e: Stack[-10] = (bool) 1
0x104f: Return(); Pop(8)

0x1050: PushEmpty(float, bool, float, bool)
0x1051: @ rand(Stack[-2])
0x1052: Pop(0)
0x1053: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x1054: IF (Stack[-1] == 0) GOTO 0x1064; Pop(1)

0x1055: @ IsAnimationPlaying(Stack[-1])
0x1056: Pop(0)
0x1057: Pop(0); Push((bool) Stack[-1] == 0)
0x1058: IF (Stack[-1] == 0) GOTO 0x105a; Pop(1)

0x1059: GOTO 0x1063

0x105a: PushEmpty(bool)
0x105b: Call2 0x10b2

0x105c: Pop(0)
0x105d: IF (Stack[-1] == 0) GOTO 0x1060; Pop(1)

0x105e: Stack[-6] = (bool) 1
0x105f: Return(); Pop(4)

0x1060: @ sync()
0x1061: Pop(0)
0x1062: GOTO 0x1055

0x1063: GOTO 0x1069

0x1064: @ WaitForAnimEnd()
0x1065: Pop(0)
0x1066: PushEmpty()
0x1067: Call2 0x111a

0x1068: Pop(0)
0x1069: Stack[-6] = (bool) 0
0x106a: Return(); Pop(4)

0x106b: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x106c: @ IsAnimationPlaying(Stack[-5])
0x106d: Pop(0)
0x106e: Pop(0); Push((bool) Stack[-5] == 0)
0x106f: IF (Stack[-1] == 0) GOTO 0x1071; Pop(1)

0x1070: GOTO 0x1091

0x1071: PushEmpty(bool)
0x1072: Call2 0x10b2

0x1073: Pop(0)
0x1074: IF (Stack[-1] == 0) GOTO 0x1077; Pop(1)

0x1075: Stack[-12] = (bool) 1
0x1076: Return(); Pop(10)

0x1077: PushEmpty(bool, object)
0x1078: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1079: Call2 0x12d5

0x107a: Pop(1)
0x107b: Pop(1); Push((bool) Stack[-1] == 0)
0x107c: IF (Stack[-1] == 0) GOTO 0x107f; Pop(1)

0x107d: Stack[-12] = (bool) 0
0x107e: Return(); Pop(10)

0x107f: @@ GetPFPosition(Stack[-4])
0x1080: Pop(0)
0x1081: @ GetPFPosition(Stack[-3])
0x1082: Pop(0)
0x1083: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x1084: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x1085: Pop(0); Push(Stack[-11] * Stack[-11]);
0x1086: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1087: IF (Stack[-1] == 0) GOTO 0x108e; Pop(1)

0x1088: PushEmpty(bool, float)
0x1089: Stack[-1] = Stack[-13]
0x108a: Call2 0xfc7

0x108b: Pop(2)
0x108c: Stack[-12] = (bool) 1
0x108d: Return(); Pop(10)

0x108e: @ sync()
0x108f: Pop(0)
0x1090: GOTO 0x106c

0x1091: PushEmpty()
0x1092: Call2 0x111a

0x1093: Pop(0)
0x1094: Stack[-12] = (bool) 0
0x1095: Return(); Pop(10)

0x1096: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x1097: PushEmpty(bool, object)
0x1098: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1099: Call2 0x12d5

0x109a: Pop(1)
0x109b: Pop(1); Push((bool) Stack[-1] == 0)
0x109c: IF (Stack[-1] == 0) GOTO 0x109f; Pop(1)

0x109d: Stack[-11] = (bool) 0
0x109e: Return(); Pop(10)

0x109f: PushEmpty(bool)
0x10a0: Call2 0x10ef

0x10a1: Pop(0)
0x10a2: IF (Stack[-1] == 0) GOTO 0x10b0; Pop(1)

0x10a3: @@ GetPFPosition(Stack[-5])
0x10a4: Pop(0)
0x10a5: @ GetPFPosition(Stack[-4])
0x10a6: Pop(0)
0x10a7: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x10a8: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x10a9: @@ GetAttackDistance(Stack[-1])
0x10aa: Pop(0)
0x10ab: Push((int) 50)
0x10ac: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x10ad: Pop(0); Push(Stack[-1] * Stack[-1]);
0x10ae: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x10af: Return(); Pop(10)

0x10b0: Stack[-11] = (bool) 0
0x10b1: Return(); Pop(10)

0x10b2: PushEmpty(bool)
0x10b3: Stack[-1] = (bool) 0
0x10b4: PushEmpty(bool)
0x10b5: Call2 0x1096

0x10b6: Pop(0)
0x10b7: IF (Stack[-1] == 0) GOTO 0x10bd; Pop(1)

0x10b8: PushEmpty(bool)
0x10b9: Call2 0x10c2

0x10ba: Pop(0)
0x10bb: IF (Stack[-1] == 0) GOTO 0x10bd; Pop(1)

0x10bc: Stack[-1] = (bool) 1
0x10bd: IF (Stack[-1] == 0) GOTO 0x10c0; Pop(1)

0x10be: Stack[-1] = (bool) 1
0x10bf: Return(); Pop(0)

0x10c0: Stack[-1] = (bool) 0
0x10c1: Return(); Pop(0)

0x10c2: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x10c3: @ GetScene(Stack[-5])
0x10c4: Pop(0)
0x10c5: Stack[-4] = (bool) 0
0x10c6: PushEmpty(cvector, object)
0x10c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c8: Call2 0x1243

0x10c9: Pop(1)
0x10ca: Pop(1); Push(( -Stack[-1])
0x10cb: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x10cc: Pop(1)
0x10cd: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x10ce: IF (Stack[-1] == 0) GOTO 0x10d0; Pop(1)

0x10cf: GOTO 0x10ec

0x10d0: @ Face(Stack[-0])
0x10d1: Pop(0)
0x10d2: Push("all")
0x10d3: Push("bjump")
0x10d4: @ PlayAnimation(Stack[-2], Stack[-1])
0x10d5: Pop(2)
0x10d6: @@ GetPFPosition(Stack[-2])
0x10d7: Pop(0)
0x10d8: @ GetPFPosition(Stack[-1])
0x10d9: Pop(0)
0x10da: @ WaitForAnimEnd()
0x10db: Pop(0)
0x10dc: PushEmpty()
0x10dd: Call2 0x111a

0x10de: Pop(0)
0x10df: @ StopAsync()
0x10e0: Pop(0)
0x10e1: Push(CVector(0.0, 0.0, 0.0))
0x10e2: @ SetSpeed(Stack[-1])
0x10e3: Pop(1)
0x10e4: Stack[-4] = (bool) 1
0x10e5: PushEmpty(bool)
0x10e6: Call2 0x1096

0x10e7: Pop(0)
0x10e8: Pop(1); Push((bool) Stack[-1] == 0)
0x10e9: IF (Stack[-1] == 0) GOTO 0x10eb; Pop(1)

0x10ea: GOTO 0x10ec

0x10eb: GOTO 0x10c6

0x10ec: Stack[-11] = Stack[-4]
0x10ed: Return(); Pop(10)

0x10ee: Stack[-5] = 0
0x10ef: PushEmpty(bool, bool)
0x10f0: Push("IsAttacking")
0x10f1: Push((int) 1)
0x10f2: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x10f3: IF (Stack[-1] == 0) GOTO 0x10f8; Pop(1)

0x10f4: @@ IsAttacking(Stack[-1])
0x10f5: Pop(0)
0x10f6: Stack[-3] = Stack[-1]
0x10f7: Return(); Pop(2)

0x10f8: Stack[-3] = (bool) 0
0x10f9: Return(); Pop(2)

0x10fa: PushEmpty(float, int, float, int)
0x10fb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x10fc: IF (Stack[-1] == 0) GOTO 0x10fe; Pop(1)

0x10fd: Return(); Pop(4)

0x10fe: Push( Stack[5 + Tasks[-1].StackPointer] )
0x10ff: IF (Stack[-1] == 0) GOTO 0x1106; Pop(1)

0x1100: Push((int) -1)
0x1101: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1102: Push((int) 0)
0x1103: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x1104: IF (Stack[-1] == 0) GOTO 0x1106; Pop(1)

0x1105: Return(); Pop(4)

0x1106: @ rand(Stack[-2])
0x1107: Pop(0)
0x1108: PushEmpty(float)
0x1109: Call2 0x112c

0x110a: Pop(0)
0x110b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x110c: IF (Stack[-1] == 0) GOTO 0x1119; Pop(1)

0x110d: @ irand(Stack[-1], Stack[-2])
0x110e: Pop(0)
0x110f: Push((int) 1)
0x1110: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1111: Push("attack")
0x1112: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1113: @ Speak(Stack[-1])
0x1114: Pop(1)
0x1115: PushEmpty(int)
0x1116: Call2 0x112a

0x1117: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x1118: Pop(1)
0x1119: Return(); Pop(4)

0x111a: PushEmpty(object)
0x111b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111c: Call2 0x14de

0x111d: Pop(1)
0x111e: Return(); Pop(0)

0x111f: Stack[-1] = (int) 0
0x1120: Return(); Pop(0)

0x1121: PushEmpty(string)
0x1122: Stack[-1] = "attack_stay"
0x1123: Call2 0x144b

0x1124: Pop(1)
0x1125: Return(); Pop(0)

0x1126: PushEmpty()
0x1127: Return(); Pop(0)

0x1128: Stack[-1] = (bool) 1
0x1129: Return(); Pop(0)

0x112a: Stack[-1] = (int) 1
0x112b: Return(); Pop(0)

0x112c: Stack[-1] = (float) 0.5
0x112d: Return(); Pop(0)

0x112e: PushEmpty()
0x112f: Call2 0x1174

0x1130: Pop(0)
0x1131: PushEmpty()
0x1132: Call2 0x182a

0x1133: Pop(0)
0x1134: Return(); Pop(0)

0x1135: PushEmpty(bool, bool, bool, bool)
0x1136: PushEmpty(object)
0x1137: Stack[-1] = Stack[-10]
0x1138: Call2 0x14de

0x1139: Pop(1)
0x113a: Push((int) 1)
0x113b: Push((int) 5)
0x113c: @ SetTimer(Stack[-2], Stack[-1])
0x113d: Pop(2)
0x113e: @ CanSee(Stack[-2], Stack[-9])
0x113f: Pop(0)
0x1140: Push(Stack[-2])
0x1141: IF (Stack[-1] == 0) GOTO 0x1148; Pop(1)

0x1142: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1143: PushEmpty(object)
0x1144: Stack[-1] = Stack[-10]
0x1145: Call2 0x142e

0x1146: Pop(1)
0x1147: GOTO 0x1149

0x1148: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1149: PushEmpty(bool, object)
0x114a: Stack[-1] = Stack[-11]
0x114b: Call2 0x1252

0x114c: Pop(1)
0x114d: IF (Stack[-1] == 0) GOTO 0x1153; Pop(1)

0x114e: PushEmpty(object)
0x114f: Call2 0x1474

0x1150: Pop(0)
0x1151: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x1152: Pop(1)
0x1153: PushEmpty(bool, object, float, float, bool, bool)
0x1154: Stack[-5] = Stack[-15]
0x1155: Stack[-4] = Stack[-14]
0x1156: Stack[-3] = Stack[-13]
0x1157: Stack[-2] = Stack[-12]
0x1158: Stack[-1] = Stack[-11]
0x1159: Call2 0x119e

0x115a: Stack[-7] = Stack[-6]
0x115b: Pop(6)
0x115c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x115d: IF (Stack[-1] == 0) GOTO 0x1161; Pop(1)

0x115e: Push("head")
0x115f: @ UnlookAsync(Stack[-1])
0x1160: Pop(1)
0x1161: Push((int) 1)
0x1162: @ KillTimer(Stack[-1])
0x1163: Pop(1)
0x1164: Stack[-10] = Stack[-1]
0x1165: Return(); Pop(4)

0x1166: PushEmpty()
0x1167: Push((int) 1)
0x1168: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1169: IF (Stack[-1] == 0) GOTO 0x116f; Pop(1)

0x116a: PushEmpty(object)
0x116b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x116c: Call2 0x14de

0x116d: Pop(1)
0x116e: GOTO 0x1173

0x116f: PushEmpty(int)
0x1170: Stack[-1] = Stack[-2]
0x1171: Call2 0x1204

0x1172: Pop(1)
0x1173: Return(); Pop(0)

0x1174: Push((int) 1)
0x1175: @ KillTimer(Stack[-1])
0x1176: Pop(1)
0x1177: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1178: IF (Stack[-1] == 0) GOTO 0x117d; Pop(1)

0x1179: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x117a: Push("head")
0x117b: @ UnlookAsync(Stack[-1])
0x117c: Pop(1)
0x117d: PushEmpty()
0x117e: Call2 0x121a

0x117f: Pop(0)
0x1180: Return(); Pop(0)

0x1181: PushEmpty()
0x1182: PushEmpty(bool)
0x1183: Stack[-1] = (bool) 0
0x1184: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x1185: IF (Stack[-1] == 0) GOTO 0x1189; Pop(1)

0x1186: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1187: IF (Stack[-1] == 0) GOTO 0x1189; Pop(1)

0x1188: Stack[-1] = (bool) 1
0x1189: IF (Stack[-1] == 0) GOTO 0x118f; Pop(1)

0x118a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x118b: PushEmpty(object)
0x118c: Stack[-1] = Stack[-2]
0x118d: Call2 0x142e

0x118e: Pop(1)
0x118f: Return(); Pop(0)

0x1190: PushEmpty()
0x1191: PushEmpty(bool)
0x1192: Stack[-1] = (bool) 0
0x1193: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x1194: IF (Stack[-1] == 0) GOTO 0x1198; Pop(1)

0x1195: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1196: IF (Stack[-1] == 0) GOTO 0x1198; Pop(1)

0x1197: Stack[-1] = (bool) 1
0x1198: IF (Stack[-1] == 0) GOTO 0x119d; Pop(1)

0x1199: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x119a: Push("head")
0x119b: @ UnlookAsync(Stack[-1])
0x119c: Pop(1)
0x119d: Return(); Pop(0)

0x119e: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x119f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x11a0: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x11a1: Stack[-7] = Stack[-17]
0x11a2: PushEmpty(bool, object)
0x11a3: Stack[-1] = Stack[-23]
0x11a4: Call2 0x122a

0x11a5: Pop(1)
0x11a6: Pop(1); Push((bool) Stack[-1] == 0)
0x11a7: IF (Stack[-1] == 0) GOTO 0x11aa; Pop(1)

0x11a8: Stack[-22] = (bool) 0
0x11a9: Return(); Pop(16)

0x11aa: @@ GetPosition(Stack[-5])
0x11ab: Pop(0)
0x11ac: @ GetPosition(Stack[-4])
0x11ad: Pop(0)
0x11ae: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x11af: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x11b0: PushEmpty(bool)
0x11b1: Stack[-1] = (bool) 0
0x11b2: Push((int) 0)
0x11b3: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x11b4: IF (Stack[-1] == 0) GOTO 0x11b9; Pop(1)

0x11b5: Pop(0); Push(Stack[-20] * Stack[-20]);
0x11b6: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x11b7: IF (Stack[-1] == 0) GOTO 0x11b9; Pop(1)

0x11b8: Stack[-1] = (bool) 1
0x11b9: IF (Stack[-1] == 0) GOTO 0x11be; Pop(1)

0x11ba: @ Stop()
0x11bb: Pop(0)
0x11bc: Stack[-22] = (bool) 0
0x11bd: Return(); Pop(16)

0x11be: Pop(0); Push(Stack[-20] * Stack[-20]);
0x11bf: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x11c0: IF (Stack[-1] == 0) GOTO 0x11fc; Pop(1)

0x11c1: @@ GetPFPosition(Stack[-5])
0x11c2: Pop(0)
0x11c3: @ FindPathTo(Stack[-1], Stack[-5])
0x11c4: Pop(0)
0x11c5: Pop(0); Push(( Stack[-1] != 0 )
0x11c6: IF (Stack[-1] == 0) GOTO 0x11c9; Pop(1)

0x11c7: Stack[-6] = Stack[-1]
0x11c8: Stack[-1] = 0
0x11c9: Pop(0); Push(( Stack[-6] != 0 )
0x11ca: IF (Stack[-1] == 0) GOTO 0x11ea; Pop(1)

0x11cb: Push(Stack[-7])
0x11cc: IF (Stack[-1] == 0) GOTO 0x11d3; Pop(1)

0x11cd: Stack[-7] = (bool) 0
0x11ce: @ RotatePath(Stack[-6], Stack[-8])
0x11cf: Pop(0)
0x11d0: Pop(0); Push((bool) Stack[-8] == 0)
0x11d1: IF (Stack[-1] == 0) GOTO 0x11d3; Pop(1)

0x11d2: GOTO 0x1202

0x11d3: Push((int) 0)
0x11d4: Push((float)0.3)
0x11d5: @ SetTimer(Stack[-2], Stack[-1])
0x11d6: Pop(2)
0x11d7: PushEmpty(string)
0x11d8: Call2 0x1231

0x11d9: Pop(0)
0x11da: PushEmpty(string)
0x11db: Call2 0x1233

0x11dc: Pop(0)
0x11dd: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x11de: Pop(2)
0x11df: Pop(0); Push((bool) Stack[-8] == 0)
0x11e0: IF (Stack[-1] == 0) GOTO 0x11e8; Pop(1)

0x11e1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x11e2: IF (Stack[-1] == 0) GOTO 0x11e6; Pop(1)

0x11e3: Stack[-6] = 0
0x11e4: GOTO 0x1202

0x11e5: GOTO 0x11e7

0x11e6: GOTO 0x1201

0x11e7: GOTO 0x11e9

0x11e8: Stack[-6] = 0
0x11e9: GOTO 0x11fa

0x11ea: Push((int) 0)
0x11eb: @ KillTimer(Stack[-1])
0x11ec: Pop(1)
0x11ed: Push((float)0.5)
0x11ee: @ Sleep(Stack[-1], Stack[-9])
0x11ef: Pop(1)
0x11f0: Pop(0); Push((bool) Stack[-8] == 0)
0x11f1: IF (Stack[-1] == 0) GOTO 0x11f6; Pop(1)

0x11f2: Push( Stack[0 + Tasks[-1].StackPointer] )
0x11f3: IF (Stack[-1] == 0) GOTO 0x11f6; Pop(1)

0x11f4: Stack[-6] = 0
0x11f5: GOTO 0x1202

0x11f6: Push((int) 0)
0x11f7: Push((float)0.3)
0x11f8: @ SetTimer(Stack[-2], Stack[-1])
0x11f9: Pop(2)
0x11fa: Stack[-1] = 0
0x11fb: GOTO 0x1200

0x11fc: Push((int) 0)
0x11fd: @ KillTimer(Stack[-1])
0x11fe: Pop(1)
0x11ff: GOTO 0x1202

0x1200: Stack[-6] = 0
0x1201: GOTO 0x11a2

0x1202: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1203: Return(); Pop(16)

0x1204: PushEmpty()
0x1205: Push((int) 0)
0x1206: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1207: IF (Stack[-1] == 0) GOTO 0x1209; Pop(1)

0x1208: Return(); Pop(0)

0x1209: PushEmpty(bool, object)
0x120a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x120b: Call2 0x122a

0x120c: Pop(1)
0x120d: Pop(1); Push((bool) Stack[-1] == 0)
0x120e: IF (Stack[-1] == 0) GOTO 0x1210; Pop(1)

0x120f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1210: Push((int) 0)
0x1211: @ KillTimer(Stack[-1])
0x1212: Pop(1)
0x1213: @ Stop()
0x1214: Pop(0)
0x1215: Return(); Pop(0)

0x1216: PushEmpty()
0x1217: @ RequestClearPath(Stack[-1])
0x1218: Pop(0)
0x1219: Return(); Pop(0)

0x121a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x121b: Push((int) 0)
0x121c: @ KillTimer(Stack[-1])
0x121d: Pop(1)
0x121e: @ Stop()
0x121f: Pop(0)
0x1220: Return(); Pop(0)

0x1221: PushEmpty()
0x1222: PushEmpty()
0x1223: Call2 0x1174

0x1224: Pop(0)
0x1225: PushEmpty(object)
0x1226: Stack[-1] = Stack[-2]
0x1227: Call2 0x16a6

0x1228: Pop(1)
0x1229: Return(); Pop(0)

0x122a: PushEmpty()
0x122b: PushEmpty(bool, object)
0x122c: Stack[-1] = Stack[-3]
0x122d: Call2 0x12d5

0x122e: Stack[-4] = Stack[-2]
0x122f: Pop(2)
0x1230: Return(); Pop(0)

0x1231: Stack[-1] = "walk"
0x1232: Return(); Pop(0)

0x1233: Stack[-1] = "run"
0x1234: Return(); Pop(0)

0x1235: PushEmpty()
0x1236: Push((int) 2)
0x1237: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1238: IF (Stack[-1] == 0) GOTO 0x123c; Pop(1)

0x1239: Stack[-2] = "fire"
0x123a: Return(); Pop(0)

0x123b: GOTO 0x1241

0x123c: Push((int) 1)
0x123d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123e: IF (Stack[-1] == 0) GOTO 0x1241; Pop(1)

0x123f: Stack[-2] = "bullet"
0x1240: Return(); Pop(0)

0x1241: Stack[-2] = "phys"
0x1242: Return(); Pop(0)

0x1243: PushEmpty(cvector, cvector, cvector, cvector)
0x1244: @ GetPosition(Stack[-2])
0x1245: Pop(0)
0x1246: @@ GetPosition(Stack[-1])
0x1247: Pop(0)
0x1248: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x1249: Return(); Pop(4)

0x124a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x124b: @ GetPosition(Stack[-3])
0x124c: Pop(0)
0x124d: @@ GetPosition(Stack[-2])
0x124e: Pop(0)
0x124f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1250: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1251: Return(); Pop(6)

0x1252: PushEmpty(bool, bool)
0x1253: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1254: Pop(0)
0x1255: Stack[-4] = Stack[-1]
0x1256: Return(); Pop(2)

0x1257: PushEmpty(bool, bool)
0x1258: Push("HasProperty")
0x1259: Push((int) 2)
0x125a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x125b: Pop(1); Push((bool) Stack[-1] == 0)
0x125c: IF (Stack[-1] == 0) GOTO 0x125f; Pop(1)

0x125d: Stack[-5] = (bool) 0
0x125e: Return(); Pop(2)

0x125f: @@ HasProperty(Stack[-3], Stack[-1])
0x1260: Pop(0)
0x1261: Stack[-5] = Stack[-1]
0x1262: Return(); Pop(2)

0x1263: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x1264: PushEmpty(bool, object, string)
0x1265: Stack[-2] = Stack[-18]
0x1266: Stack[-1] = "health"
0x1267: Call2 0x1257

0x1268: Pop(2)
0x1269: Pop(1); Push((bool) Stack[-1] == 0)
0x126a: IF (Stack[-1] == 0) GOTO 0x126d; Pop(1)

0x126b: Stack[-16] = (float) 0.0
0x126c: Return(); Pop(12)

0x126d: PushEmpty(bool, object, string)
0x126e: Stack[-2] = Stack[-18]
0x126f: Stack[-1] = "armor"
0x1270: Call2 0x1257

0x1271: Pop(2)
0x1272: Pop(1); Push((bool) Stack[-1] == 0)
0x1273: IF (Stack[-1] == 0) GOTO 0x1276; Pop(1)

0x1274: Stack[-6] = (int) 0
0x1275: GOTO 0x1279

0x1276: Push("armor")
0x1277: @@ GetProperty(Stack[-1], Stack[-7])
0x1278: Pop(1)
0x1279: Push("armor_")
0x127a: PushEmpty(string, int)
0x127b: Stack[-1] = Stack[-16]
0x127c: Call2 0x1235

0x127d: Pop(1)
0x127e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x127f: PushEmpty(bool, object, string)
0x1280: Stack[-2] = Stack[-18]
0x1281: Stack[-1] = Stack[-8]
0x1282: Call2 0x1257

0x1283: Pop(2)
0x1284: Pop(1); Push((bool) Stack[-1] == 0)
0x1285: IF (Stack[-1] == 0) GOTO 0x1288; Pop(1)

0x1286: Stack[-4] = (int) 0
0x1287: GOTO 0x128a

0x1288: @@ GetProperty(Stack[-5], Stack[-4])
0x1289: Pop(0)
0x128a: PushEmpty(float, float, float)
0x128b: Pop(0); Push(Stack[-9] + Stack[-7]);
0x128c: Push((float)100.0)
0x128d: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x128e: Stack[-1] = (int) 1
0x128f: Call2 0x1484

0x1290: Stack[-6] = Stack[-3]
0x1291: Pop(3)
0x1292: Push("health")
0x1293: @@ GetProperty(Stack[-1], Stack[-3])
0x1294: Pop(1)
0x1295: Push((int) 1)
0x1296: Pop(1); Push(Stack[-1] - Stack[-4]);
0x1297: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x1298: Push("health")
0x1299: PushEmpty(float, float, float, float)
0x129a: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x129b: Stack[-2] = (int) 0
0x129c: Stack[-1] = (int) 1
0x129d: Call2 0x148b

0x129e: Pop(3)
0x129f: @@ SetProperty(Stack[-2], Stack[-1])
0x12a0: Pop(2)
0x12a1: PushEmpty(bool, object)
0x12a2: Stack[-1] = Stack[-17]
0x12a3: Call2 0x1252

0x12a4: Pop(1)
0x12a5: IF (Stack[-1] == 0) GOTO 0x12aa; Pop(1)

0x12a6: PushEmpty(float)
0x12a7: Stack[-1] = -Stack[-2]; Pop(0);
0x12a8: Call2 0x14c4

0x12a9: Pop(1)
0x12aa: Stack[-16] = Stack[-1]
0x12ab: Return(); Pop(12)

0x12ac: PushEmpty(bool, bool)
0x12ad: @@ IsDead(Stack[-1])
0x12ae: Pop(0)
0x12af: Stack[-4] = Stack[-1]
0x12b0: Return(); Pop(2)

0x12b1: PushEmpty(object, object, object, object)
0x12b2: Pop(0); Push((bool) Stack[-5] == 0)
0x12b3: IF (Stack[-1] == 0) GOTO 0x12b6; Pop(1)

0x12b4: Stack[-6] = (bool) 0
0x12b5: Return(); Pop(4)

0x12b6: PushEmpty(bool)
0x12b7: Stack[-1] = (bool) 0
0x12b8: Push("IsDead")
0x12b9: Push((int) 1)
0x12ba: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x12bb: IF (Stack[-1] == 0) GOTO 0x12c2; Pop(1)

0x12bc: PushEmpty(bool, object)
0x12bd: Stack[-1] = Stack[-8]
0x12be: Call2 0x12ac

0x12bf: Pop(1)
0x12c0: IF (Stack[-1] == 0) GOTO 0x12c2; Pop(1)

0x12c1: Stack[-1] = (bool) 1
0x12c2: IF (Stack[-1] == 0) GOTO 0x12c5; Pop(1)

0x12c3: Stack[-6] = (bool) 0
0x12c4: Return(); Pop(4)

0x12c5: @ GetScene(Stack[-2])
0x12c6: Pop(0)
0x12c7: Pop(0); Push((bool) Stack[-2] == 0)
0x12c8: IF (Stack[-1] == 0) GOTO 0x12cb; Pop(1)

0x12c9: Stack[-6] = (bool) 0
0x12ca: Return(); Pop(4)

0x12cb: @@ GetScene(Stack[-1])
0x12cc: Pop(0)
0x12cd: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x12ce: IF (Stack[-1] == 0) GOTO 0x12d1; Pop(1)

0x12cf: Stack[-6] = (bool) 0
0x12d0: Return(); Pop(4)

0x12d1: Stack[-6] = (bool) 1
0x12d2: Return(); Pop(4)

0x12d3: Stack[-1] = 0
0x12d4: Stack[-2] = 0
0x12d5: PushEmpty(int, int)
0x12d6: PushEmpty(bool, object)
0x12d7: Stack[-1] = Stack[-5]
0x12d8: Call2 0x12b1

0x12d9: Pop(1)
0x12da: Pop(1); Push((bool) Stack[-1] == 0)
0x12db: IF (Stack[-1] == 0) GOTO 0x12de; Pop(1)

0x12dc: Stack[-4] = (bool) 0
0x12dd: Return(); Pop(2)

0x12de: PushEmpty(bool, object, string)
0x12df: Stack[-2] = Stack[-6]
0x12e0: Stack[-1] = "noaccess"
0x12e1: Call2 0x1257

0x12e2: Pop(2)
0x12e3: Pop(1); Push((bool) Stack[-1] == 0)
0x12e4: IF (Stack[-1] == 0) GOTO 0x12e7; Pop(1)

0x12e5: Stack[-4] = (bool) 1
0x12e6: Return(); Pop(2)

0x12e7: Push("noaccess")
0x12e8: @@ GetProperty(Stack[-1], Stack[-2])
0x12e9: Pop(1)
0x12ea: Push((int) 0)
0x12eb: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x12ec: Return(); Pop(2)

0x12ed: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x12ee: Pop(0); Push((bool) Stack[-15] == 0)
0x12ef: IF (Stack[-1] == 0) GOTO 0x12f1; Pop(1)

0x12f0: Return(); Pop(14)

0x12f1: @ IsDead(Stack[-7])
0x12f2: Pop(0)
0x12f3: Push(Stack[-7])
0x12f4: IF (Stack[-1] == 0) GOTO 0x12f6; Pop(1)

0x12f5: Return(); Pop(14)

0x12f6: @ GetSecondaryAnimationType(Stack[-6])
0x12f7: Pop(0)
0x12f8: Push((int) 0)
0x12f9: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x12fa: IF (Stack[-1] == 0) GOTO 0x12fc; Pop(1)

0x12fb: Return(); Pop(14)

0x12fc: @@ GetPosition(Stack[-5])
0x12fd: Pop(0)
0x12fe: @ GetPosition(Stack[-4])
0x12ff: Pop(0)
0x1300: @ GetDirection(Stack[-3])
0x1301: Pop(0)
0x1302: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x1303: Push(CvectorIndex(Stack[-2], 0))
0x1304: Push(CvectorIndex(Stack[-4], 0))
0x1305: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1306: Push(CvectorIndex(Stack[-3], 2))
0x1307: Push(CvectorIndex(Stack[-5], 2))
0x1308: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1309: Pop(2); Push(Stack[-2] + Stack[-1]);
0x130a: Push((int) 0)
0x130b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x130c: IF (Stack[-1] == 0) GOTO 0x130f; Pop(1)

0x130d: Stack[-1] = "fhit"
0x130e: GOTO 0x1310

0x130f: Stack[-1] = "bhit"
0x1310: Push("hit_react")
0x1311: Push("1")
0x1312: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1313: Push("2")
0x1314: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1315: Push((int) -10)
0x1316: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1317: Pop(4)
0x1318: Return(); Pop(14)

0x1319: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x131a: PushEmpty(bool)
0x131b: Stack[-1] = (bool) 0
0x131c: PushEmpty(bool)
0x131d: Stack[-1] = (bool) 0
0x131e: Push(Stack[-23])
0x131f: IF (Stack[-1] == 0) GOTO 0x1324; Pop(1)

0x1320: Push((int) 4)
0x1321: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x1322: IF (Stack[-1] == 0) GOTO 0x1324; Pop(1)

0x1323: Stack[-1] = (bool) 1
0x1324: IF (Stack[-1] == 0) GOTO 0x1329; Pop(1)

0x1325: Push((int) 5)
0x1326: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x1327: IF (Stack[-1] == 0) GOTO 0x1329; Pop(1)

0x1328: Stack[-1] = (bool) 1
0x1329: IF (Stack[-1] == 0) GOTO 0x1358; Pop(1)

0x132a: PushEmpty(cvector, cvector)
0x132b: PushEmpty(cvector, object)
0x132c: Stack[-1] = Stack[-25]
0x132d: Call2 0x1243

0x132e: Stack[-3] = Stack[-2]
0x132f: Pop(2)
0x1330: Call2 0x147a

0x1331: Stack[-11] = Stack[-2]
0x1332: Pop(2)
0x1333: @ CreateVectorVector(Stack[-8])
0x1334: Pop(0)
0x1335: Stack[-7] = (int) 1
0x1336: Push("hit")
0x1337: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1338: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x1339: Pop(1)
0x133a: Pop(0); Push((bool) Stack[-6] == 0)
0x133b: IF (Stack[-1] == 0) GOTO 0x133d; Pop(1)

0x133c: GOTO 0x1346

0x133d: Pop(0); Push(Stack[-4] | Stack[-9]);
0x133e: Push((float)0.70711)
0x133f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1340: IF (Stack[-1] == 0) GOTO 0x1343; Pop(1)

0x1341: @@ add(Stack[-5])
0x1342: Pop(0)
0x1343: Push((int) 1)
0x1344: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x1345: GOTO 0x1336

0x1346: @@ size(Stack[-3])
0x1347: Pop(0)
0x1348: Push(Stack[-3])
0x1349: IF (Stack[-1] == 0) GOTO 0x1357; Pop(1)

0x134a: @ irand(Stack[-2], Stack[-3])
0x134b: Pop(0)
0x134c: @@ get(Stack[-1], Stack[-2])
0x134d: Pop(0)
0x134e: PushEmpty(object, int, float, cvector, cvector)
0x134f: Stack[-5] = Stack[-26]
0x1350: Stack[-4] = Stack[-25]
0x1351: Stack[-3] = Stack[-24]
0x1352: Stack[-2] = Stack[-6]
0x1353: Stack[-1] = -Stack[-14]; Pop(0);
0x1354: Call2 0x135d

0x1355: Pop(5)
0x1356: Return(); Pop(18)

0x1357: Stack[-8] = 0
0x1358: PushEmpty(object)
0x1359: Stack[-1] = Stack[-22]
0x135a: Call2 0x12ed

0x135b: Pop(1)
0x135c: Return(); Pop(18)

0x135d: PushEmpty(object, object, object, object)
0x135e: @ GetScene(Stack[-2])
0x135f: Pop(0)
0x1360: Push("scripted")
0x1361: Push("blood_dir.xml")
0x1362: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x1363: Pop(2)
0x1364: PushEmpty(object)
0x1365: Stack[-1] = Stack[-10]
0x1366: Call2 0x12ed

0x1367: Pop(1)
0x1368: Return(); Pop(4)

0x1369: Stack[-1] = 0
0x136a: Stack[-2] = 0
0x136b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x136c: @@ GetPosition(Stack[-3])
0x136d: Pop(0)
0x136e: @ GetPosition(Stack[-2])
0x136f: Pop(0)
0x1370: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x1371: Push(CvectorIndex(Stack[-1], 0))
0x1372: Push(CvectorIndex(Stack[-2], 2))
0x1373: @ RotateAsync(Stack[-2], Stack[-1])
0x1374: Pop(2)
0x1375: Return(); Pop(6)

0x1376: PushEmpty(bool, bool)
0x1377: @ IsLoaded(Stack[-1])
0x1378: Pop(0)
0x1379: Stack[-3] = Stack[-1]
0x137a: Return(); Pop(2)

0x137b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x137c: @@ GetPosition(Stack[-8])
0x137d: Pop(0)
0x137e: @@ GetEyesHeight(Stack[-9])
0x137f: Pop(0)
0x1380: Push(CvectorIndex(Stack[-8], 1))
0x1381: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1382: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1383: @ GetPosition(Stack[-7])
0x1384: Pop(0)
0x1385: @ GetEyesHeight(Stack[-9])
0x1386: Pop(0)
0x1387: Push(CvectorIndex(Stack[-7], 1))
0x1388: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1389: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x138a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x138b: Push(CvectorIndex(Stack[-6], 1))
0x138c: Stack[-1] = (int) 0
0x138d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x138e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x138f: Pop(1); Push(Sqrt(Stack[-1]))
0x1390: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1391: Stack[-5] = -Stack[-6]; Pop(0);
0x1392: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1393: PushEmpty(cvector, cvector)
0x1394: Push(CVector(0.0, 1.0, 0.0))
0x1395: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1396: Call2 0x147a

0x1397: Pop(1)
0x1398: Push((int) 25)
0x1399: Pop(2); Push(Stack[-2] * Stack[-1]);
0x139a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x139b: Push(CVector(0.0, 10.0, 0.0))
0x139c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x139d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x139e: @ IsOverrideActive(Stack[-2])
0x139f: Pop(0)
0x13a0: Push(Stack[-2])
0x13a1: IF (Stack[-1] == 0) GOTO 0x13a4; Pop(1)

0x13a2: Stack[-21] = (bool) 0
0x13a3: Return(); Pop(18)

0x13a4: @ StopWorld()
0x13a5: Pop(0)
0x13a6: Push((bool) 1)
0x13a7: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x13a8: Pop(1)
0x13a9: Push(CvectorIndex(Stack[-4], 0))
0x13aa: Push(CvectorIndex(Stack[-5], 2))
0x13ab: @ Rotate(Stack[-2], Stack[-1])
0x13ac: Pop(2)
0x13ad: PushEmpty(bool)
0x13ae: Call2 0x1857

0x13af: Pop(0)
0x13b0: IF (Stack[-1] == 0) GOTO 0x13b2; Pop(1)

0x13b1: GOTO 0x13ba

0x13b2: Push("head")
0x13b3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x13b4: Pop(1)
0x13b5: Push(Stack[-1])
0x13b6: IF (Stack[-1] == 0) GOTO 0x13ba; Pop(1)

0x13b7: Push("head")
0x13b8: @ LookAsyncCamera(Stack[-1])
0x13b9: Pop(1)
0x13ba: @ CameraWaitForPlayFinish()
0x13bb: Pop(0)
0x13bc: @ ResumeWorld()
0x13bd: Pop(0)
0x13be: Stack[-21] = (bool) 1
0x13bf: Return(); Pop(18)

0x13c0: PushEmpty(bool, bool)
0x13c1: Push((bool) 1)
0x13c2: @ CameraSwitchToNormal(Stack[-1])
0x13c3: Pop(1)
0x13c4: PushEmpty(bool)
0x13c5: Call2 0x1857

0x13c6: Pop(0)
0x13c7: IF (Stack[-1] == 0) GOTO 0x13c9; Pop(1)

0x13c8: GOTO 0x13d1

0x13c9: Push("head")
0x13ca: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x13cb: Pop(1)
0x13cc: Push(Stack[-1])
0x13cd: IF (Stack[-1] == 0) GOTO 0x13d1; Pop(1)

0x13ce: Push("head")
0x13cf: @ UnlookAsync(Stack[-1])
0x13d0: Pop(1)
0x13d1: Return(); Pop(2)

0x13d2: PushEmpty()
0x13d3: PushEmpty(bool, object, float)
0x13d4: Stack[-2] = Stack[-4]
0x13d5: Stack[-1] = (int) 70
0x13d6: Call2 0x13da

0x13d7: Stack[-5] = Stack[-3]
0x13d8: Pop(3)
0x13d9: Return(); Pop(0)

0x13da: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x13db: @@ GetPosition(Stack[-7])
0x13dc: Pop(0)
0x13dd: @@ GetEyesHeight(Stack[-8])
0x13de: Pop(0)
0x13df: Push(CvectorIndex(Stack[-7], 1))
0x13e0: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x13e1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x13e2: @ GetPosition(Stack[-6])
0x13e3: Pop(0)
0x13e4: @ GetEyesHeight(Stack[-8])
0x13e5: Pop(0)
0x13e6: Push(CvectorIndex(Stack[-6], 1))
0x13e7: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x13e8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x13e9: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x13ea: Push(CvectorIndex(Stack[-5], 1))
0x13eb: Stack[-1] = (int) 0
0x13ec: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x13ed: Pop(0); Push(Stack[-5] | Stack[-5]);
0x13ee: Pop(1); Push(Sqrt(Stack[-1]))
0x13ef: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x13f0: Stack[-4] = -Stack[-5]; Pop(0);
0x13f1: Pop(0); Push(Stack[-5] * Stack[-17]);
0x13f2: Push(CVector(0.0, 10.0, 0.0))
0x13f3: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x13f4: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x13f5: @ IsOverrideActive(Stack[-1])
0x13f6: Pop(0)
0x13f7: Push(Stack[-1])
0x13f8: IF (Stack[-1] == 0) GOTO 0x13fb; Pop(1)

0x13f9: Stack[-19] = (bool) 0
0x13fa: Return(); Pop(16)

0x13fb: @ StopWorld()
0x13fc: Pop(0)
0x13fd: Push((bool) 1)
0x13fe: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0x13ff: Pop(1)
0x1400: Push(CvectorIndex(Stack[-3], 0))
0x1401: Push(CvectorIndex(Stack[-4], 2))
0x1402: @ Rotate(Stack[-2], Stack[-1])
0x1403: Pop(2)
0x1404: @ CameraWaitForPlayFinish()
0x1405: Pop(0)
0x1406: @ ResumeWorld()
0x1407: Pop(0)
0x1408: Stack[-19] = (bool) 1
0x1409: Return(); Pop(16)

0x140a: PushEmpty()
0x140b: Push((bool) 1)
0x140c: @ CameraSwitchToNormal(Stack[-1])
0x140d: Pop(1)
0x140e: Return(); Pop(0)

0x140f: PushEmpty(bool, float, float, bool, float, float)
0x1410: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1411: Pop(0)
0x1412: Push(Stack[-3])
0x1413: IF (Stack[-1] == 0) GOTO 0x141a; Pop(1)

0x1414: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1415: Pop(0)
0x1416: Push((bool) 0)
0x1417: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1418: Pop(1)
0x1419: GOTO 0x141e

0x141a: Push("Can't find lsh animation : ")
0x141b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x141c: @ Trace(Stack[-1])
0x141d: Pop(1)
0x141e: Return(); Pop(6)

0x141f: PushEmpty(bool, float, float, bool, float, float)
0x1420: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1421: Pop(0)
0x1422: Push(Stack[-3])
0x1423: IF (Stack[-1] == 0) GOTO 0x1429; Pop(1)

0x1424: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1425: Pop(0)
0x1426: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1427: Pop(0)
0x1428: GOTO 0x142d

0x1429: Push("Can't find lsh animation : ")
0x142a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x142b: @ Trace(Stack[-1])
0x142c: Pop(1)
0x142d: Return(); Pop(6)

0x142e: PushEmpty(float, cvector, float, cvector)
0x142f: @@ GetEyesHeight(Stack[-2])
0x1430: Pop(0)
0x1431: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x1432: Push(CvectorIndex(Stack[-1], 1))
0x1433: Stack[-1] = Stack[-3]
0x1434: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1435: Push("head")
0x1436: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x1437: Pop(1)
0x1438: Return(); Pop(4)

0x1439: PushEmpty(bool)
0x143a: Call2 0x1857

0x143b: Pop(0)
0x143c: IF (Stack[-1] == 0) GOTO 0x143f; Pop(1)

0x143d: @ lshStopSpeech()
0x143e: Pop(0)
0x143f: Return(); Pop(0)

0x1440: PushEmpty(bool, bool)
0x1441: PushEmpty(bool, int, int)
0x1442: Stack[-2] = Stack[-7]
0x1443: Stack[-1] = Stack[-6]
0x1444: Call2 0x1496

0x1445: Pop(2)
0x1446: IF (Stack[-1] == 0) GOTO 0x144a; Pop(1)

0x1447: Push((int) 0)
0x1448: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x1449: Pop(1)
0x144a: Return(); Pop(2)

0x144b: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x144c: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x144d: Pop(0)
0x144e: Pop(0); Push((bool) Stack[-8] == 0)
0x144f: IF (Stack[-1] == 0) GOTO 0x1464; Pop(1)

0x1450: Stack[-7] = (int) 0
0x1451: Push((int) 1)
0x1452: Pop(1); Push(Stack[-8] + Stack[-1]);
0x1453: Pop(1); Push(Stack[-18] + Stack[-1]);
0x1454: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x1455: Pop(1)
0x1456: Pop(0); Push((bool) Stack[-6] == 0)
0x1457: IF (Stack[-1] == 0) GOTO 0x1459; Pop(1)

0x1458: GOTO 0x145c

0x1459: Push((int) 1)
0x145a: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x145b: GOTO 0x1451

0x145c: Pop(0); Push((bool) Stack[-7] == 0)
0x145d: IF (Stack[-1] == 0) GOTO 0x145f; Pop(1)

0x145e: Return(); Pop(16)

0x145f: @ irand(Stack[-5], Stack[-7])
0x1460: Pop(0)
0x1461: Push((int) 1)
0x1462: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1463: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x1464: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x1465: Pop(0)
0x1466: Push(Stack[-4])
0x1467: IF (Stack[-1] == 0) GOTO 0x1473; Pop(1)

0x1468: @ GetEyesHeight(Stack[-3])
0x1469: Pop(0)
0x146a: @ GetDirection(Stack[-2])
0x146b: Pop(0)
0x146c: Push((int) 50)
0x146d: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x146e: Push(CvectorIndex(Stack[-1], 1))
0x146f: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x1470: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1471: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x1472: Pop(0)
0x1473: Return(); Pop(16)

0x1474: PushEmpty(object, object)
0x1475: @ self(Stack[-1])
0x1476: Pop(0)
0x1477: Stack[-3] = Stack[-1]
0x1478: Return(); Pop(2)

0x1479: Stack[-1] = 0
0x147a: PushEmpty(float, float)
0x147b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x147c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x147d: Push((float)0.0)
0x147e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x147f: IF (Stack[-1] == 0) GOTO 0x1482; Pop(1)

0x1480: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1481: Return(); Pop(2)

0x1482: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1483: Return(); Pop(2)

0x1484: PushEmpty()
0x1485: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x1486: IF (Stack[-1] == 0) GOTO 0x1489; Pop(1)

0x1487: Stack[-3] = Stack[-2]
0x1488: GOTO 0x148a

0x1489: Stack[-3] = Stack[-1]
0x148a: Return(); Pop(0)

0x148b: PushEmpty()
0x148c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x148d: IF (Stack[-1] == 0) GOTO 0x1490; Pop(1)

0x148e: Stack[-4] = Stack[-2]
0x148f: Return(); Pop(0)

0x1490: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x1491: IF (Stack[-1] == 0) GOTO 0x1494; Pop(1)

0x1492: Stack[-4] = Stack[-1]
0x1493: Return(); Pop(0)

0x1494: Stack[-4] = Stack[-3]
0x1495: Return(); Pop(0)

0x1496: PushEmpty(int, int)
0x1497: @ irand(Stack[-1], Stack[-3])
0x1498: Pop(0)
0x1499: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x149a: Return(); Pop(2)

0x149b: PushEmpty()
0x149c: Push(CvectorIndex(Stack[-2], 0))
0x149d: Push(CvectorIndex(Stack[-2], 0))
0x149e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x149f: Push(CvectorIndex(Stack[-3], 2))
0x14a0: Push(CvectorIndex(Stack[-3], 2))
0x14a1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14a2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x14a3: Return(); Pop(0)

0x14a4: PushEmpty()
0x14a5: Push(CvectorIndex(Stack[-1], 0))
0x14a6: Push(CvectorIndex(Stack[-2], 0))
0x14a7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14a8: Push(CvectorIndex(Stack[-2], 2))
0x14a9: Push(CvectorIndex(Stack[-3], 2))
0x14aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14ac: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x14ad: Return(); Pop(0)

0x14ae: PushEmpty()
0x14af: PushEmpty(float, cvector, cvector)
0x14b0: Stack[-2] = Stack[-5]
0x14b1: Stack[-1] = Stack[-4]
0x14b2: Call2 0x149b

0x14b3: Pop(2)
0x14b4: PushEmpty(float, cvector)
0x14b5: Stack[-1] = Stack[-5]
0x14b6: Call2 0x14a4

0x14b7: Pop(1)
0x14b8: PushEmpty(float, cvector)
0x14b9: Stack[-1] = Stack[-5]
0x14ba: Call2 0x14a4

0x14bb: Pop(1)
0x14bc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14bd: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x14be: Return(); Pop(0)

0x14bf: PushEmpty(int, int)
0x14c0: @ GetVariable(Stack[-3], Stack[-1])
0x14c1: Pop(0)
0x14c2: Stack[-4] = Stack[-1]
0x14c3: Return(); Pop(2)

0x14c4: PushEmpty(object, object)
0x14c5: @ CreateFloatVector(Stack[-1])
0x14c6: Pop(0)
0x14c7: @@ add(Stack[-3])
0x14c8: Pop(0)
0x14c9: Push((int) 0)
0x14ca: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x14cb: IF (Stack[-1] == 0) GOTO 0x14d0; Pop(1)

0x14cc: Push((float)0.7)
0x14cd: Push((int) 500)
0x14ce: @ RumblePlay(Stack[-2], Stack[-1])
0x14cf: Pop(2)
0x14d0: Push((int) 15)
0x14d1: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x14d2: Pop(1)
0x14d3: Return(); Pop(2)

0x14d4: Stack[-1] = 0
0x14d5: PushEmpty(float, float)
0x14d6: @ GetGameTime(Stack[-1])
0x14d7: Pop(0)
0x14d8: Push((int) 1)
0x14d9: PushEmpty(int)
0x14da: Push((int) 24)
0x14db: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x14dc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x14dd: Return(); Pop(2)

0x14de: PushEmpty(bool, bool)
0x14df: @ IsPlayerActor(Stack[-3], Stack[-1])
0x14e0: Pop(0)
0x14e1: Push(Stack[-1])
0x14e2: IF (Stack[-1] == 0) GOTO 0x14e6; Pop(1)

0x14e3: Push("attack")
0x14e4: @ PlayGlobalMusic(Stack[-1])
0x14e5: Pop(1)
0x14e6: Return(); Pop(2)

0x14e7: PushEmpty(object, object)
0x14e8: @ GetScene(Stack[-1])
0x14e9: Pop(0)
0x14ea: Push("battle")
0x14eb: PushEmpty(object)
0x14ec: Call2 0x1474

0x14ed: Pop(0)
0x14ee: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x14ef: Pop(2)
0x14f0: Return(); Pop(2)

0x14f1: Stack[-1] = 0
0x14f2: PushEmpty()
0x14f3: Push((int) 1000)
0x14f4: @@ SetReturnValue(Stack[-1])
0x14f5: Pop(1)
0x14f6: Return(); Pop(0)

0x14f7: PushEmpty()
0x14f8: PushEmpty(int, string)
0x14f9: Stack[-1] = "branch"
0x14fa: Call2 0x14bf

0x14fb: Pop(1)
0x14fc: Push((int) 0)
0x14fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14fe: IF (Stack[-1] == 0) GOTO 0x1501; Pop(1)

0x14ff: Stack[-2] = (bool) 1
0x1500: Return(); Pop(0)

0x1501: Stack[-2] = (bool) 0
0x1502: Return(); Pop(0)

0x1503: PushEmpty()
0x1504: PushEmpty(int, string)
0x1505: Stack[-1] = "branch"
0x1506: Call2 0x14bf

0x1507: Pop(1)
0x1508: Push((int) 1)
0x1509: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x150a: IF (Stack[-1] == 0) GOTO 0x150d; Pop(1)

0x150b: Stack[-2] = (bool) 1
0x150c: Return(); Pop(0)

0x150d: Stack[-2] = (bool) 0
0x150e: Return(); Pop(0)

0x150f: PushEmpty()
0x1510: PushEmpty(int, string)
0x1511: Stack[-1] = "branch"
0x1512: Call2 0x14bf

0x1513: Pop(1)
0x1514: Push((int) 2)
0x1515: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1516: IF (Stack[-1] == 0) GOTO 0x1519; Pop(1)

0x1517: Stack[-2] = (bool) 1
0x1518: Return(); Pop(0)

0x1519: Stack[-2] = (bool) 0
0x151a: Return(); Pop(0)

0x151b: PushEmpty()
0x151c: PushEmpty(bool, object)
0x151d: Stack[-1] = Stack[-3]
0x151e: Call2 0x1593

0x151f: Pop(1)
0x1520: IF (Stack[-1] == 0) GOTO 0x1523; Pop(1)

0x1521: Stack[-2] = (bool) 1
0x1522: Return(); Pop(0)

0x1523: Stack[-2] = (bool) 0
0x1524: Return(); Pop(0)

0x1525: PushEmpty()
0x1526: PushEmpty(bool, object)
0x1527: Stack[-1] = Stack[-3]
0x1528: Call2 0x159a

0x1529: Pop(1)
0x152a: IF (Stack[-1] == 0) GOTO 0x152d; Pop(1)

0x152b: Stack[-2] = (bool) 1
0x152c: Return(); Pop(0)

0x152d: Stack[-2] = (bool) 0
0x152e: Return(); Pop(0)

0x152f: PushEmpty()
0x1530: PushEmpty(bool, object)
0x1531: Stack[-1] = Stack[-3]
0x1532: Call2 0x15a1

0x1533: Pop(1)
0x1534: IF (Stack[-1] == 0) GOTO 0x1537; Pop(1)

0x1535: Stack[-2] = (bool) 1
0x1536: Return(); Pop(0)

0x1537: Stack[-2] = (bool) 0
0x1538: Return(); Pop(0)

0x1539: PushEmpty()
0x153a: PushEmpty(bool, object)
0x153b: Stack[-1] = Stack[-3]
0x153c: Call2 0x15a8

0x153d: Pop(1)
0x153e: IF (Stack[-1] == 0) GOTO 0x1541; Pop(1)

0x153f: Stack[-2] = (bool) 1
0x1540: Return(); Pop(0)

0x1541: Stack[-2] = (bool) 0
0x1542: Return(); Pop(0)

0x1543: PushEmpty()
0x1544: PushEmpty(bool, object)
0x1545: Stack[-1] = Stack[-3]
0x1546: Call2 0x15af

0x1547: Pop(1)
0x1548: IF (Stack[-1] == 0) GOTO 0x154b; Pop(1)

0x1549: Stack[-2] = (bool) 1
0x154a: Return(); Pop(0)

0x154b: Stack[-2] = (bool) 0
0x154c: Return(); Pop(0)

0x154d: PushEmpty()
0x154e: PushEmpty(bool, object)
0x154f: Stack[-1] = Stack[-3]
0x1550: Call2 0x15b6

0x1551: Pop(1)
0x1552: IF (Stack[-1] == 0) GOTO 0x1555; Pop(1)

0x1553: Stack[-2] = (bool) 1
0x1554: Return(); Pop(0)

0x1555: Stack[-2] = (bool) 0
0x1556: Return(); Pop(0)

0x1557: PushEmpty()
0x1558: PushEmpty(bool, object)
0x1559: Stack[-1] = Stack[-3]
0x155a: Call2 0x15bd

0x155b: Pop(1)
0x155c: IF (Stack[-1] == 0) GOTO 0x155f; Pop(1)

0x155d: Stack[-2] = (bool) 1
0x155e: Return(); Pop(0)

0x155f: Stack[-2] = (bool) 0
0x1560: Return(); Pop(0)

0x1561: PushEmpty()
0x1562: PushEmpty(bool, object)
0x1563: Stack[-1] = Stack[-3]
0x1564: Call2 0x15c4

0x1565: Pop(1)
0x1566: IF (Stack[-1] == 0) GOTO 0x1569; Pop(1)

0x1567: Stack[-2] = (bool) 1
0x1568: Return(); Pop(0)

0x1569: Stack[-2] = (bool) 0
0x156a: Return(); Pop(0)

0x156b: PushEmpty()
0x156c: PushEmpty(bool, object)
0x156d: Stack[-1] = Stack[-3]
0x156e: Call2 0x15cb

0x156f: Pop(1)
0x1570: IF (Stack[-1] == 0) GOTO 0x1573; Pop(1)

0x1571: Stack[-2] = (bool) 1
0x1572: Return(); Pop(0)

0x1573: Stack[-2] = (bool) 0
0x1574: Return(); Pop(0)

0x1575: PushEmpty()
0x1576: PushEmpty(bool, object)
0x1577: Stack[-1] = Stack[-3]
0x1578: Call2 0x15d2

0x1579: Pop(1)
0x157a: IF (Stack[-1] == 0) GOTO 0x157d; Pop(1)

0x157b: Stack[-2] = (bool) 1
0x157c: Return(); Pop(0)

0x157d: Stack[-2] = (bool) 0
0x157e: Return(); Pop(0)

0x157f: PushEmpty()
0x1580: PushEmpty(bool, object)
0x1581: Stack[-1] = Stack[-3]
0x1582: Call2 0x15d9

0x1583: Pop(1)
0x1584: IF (Stack[-1] == 0) GOTO 0x1587; Pop(1)

0x1585: Stack[-2] = (bool) 1
0x1586: Return(); Pop(0)

0x1587: Stack[-2] = (bool) 0
0x1588: Return(); Pop(0)

0x1589: PushEmpty()
0x158a: PushEmpty(bool, object)
0x158b: Stack[-1] = Stack[-3]
0x158c: Call2 0x15e0

0x158d: Pop(1)
0x158e: IF (Stack[-1] == 0) GOTO 0x1591; Pop(1)

0x158f: Stack[-2] = (bool) 1
0x1590: Return(); Pop(0)

0x1591: Stack[-2] = (bool) 0
0x1592: Return(); Pop(0)

0x1593: PushEmpty()
0x1594: PushEmpty(int)
0x1595: Call2 0x14d5

0x1596: Pop(0)
0x1597: Push((int) 6)
0x1598: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x1599: Return(); Pop(0)

0x159a: PushEmpty()
0x159b: PushEmpty(int)
0x159c: Call2 0x14d5

0x159d: Pop(0)
0x159e: Push((int) 1)
0x159f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x15a0: Return(); Pop(0)

0x15a1: PushEmpty()
0x15a2: PushEmpty(int)
0x15a3: Call2 0x14d5

0x15a4: Pop(0)
0x15a5: Push((int) 2)
0x15a6: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x15a7: Return(); Pop(0)

0x15a8: PushEmpty()
0x15a9: PushEmpty(int)
0x15aa: Call2 0x14d5

0x15ab: Pop(0)
0x15ac: Push((int) 3)
0x15ad: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x15ae: Return(); Pop(0)

0x15af: PushEmpty()
0x15b0: PushEmpty(int)
0x15b1: Call2 0x14d5

0x15b2: Pop(0)
0x15b3: Push((int) 4)
0x15b4: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x15b5: Return(); Pop(0)

0x15b6: PushEmpty()
0x15b7: PushEmpty(int)
0x15b8: Call2 0x14d5

0x15b9: Pop(0)
0x15ba: Push((int) 5)
0x15bb: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x15bc: Return(); Pop(0)

0x15bd: PushEmpty()
0x15be: PushEmpty(int)
0x15bf: Call2 0x14d5

0x15c0: Pop(0)
0x15c1: Push((int) 6)
0x15c2: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x15c3: Return(); Pop(0)

0x15c4: PushEmpty()
0x15c5: PushEmpty(int)
0x15c6: Call2 0x14d5

0x15c7: Pop(0)
0x15c8: Push((int) 7)
0x15c9: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x15ca: Return(); Pop(0)

0x15cb: PushEmpty()
0x15cc: PushEmpty(int)
0x15cd: Call2 0x14d5

0x15ce: Pop(0)
0x15cf: Push((int) 8)
0x15d0: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x15d1: Return(); Pop(0)

0x15d2: PushEmpty()
0x15d3: PushEmpty(int)
0x15d4: Call2 0x14d5

0x15d5: Pop(0)
0x15d6: Push((int) 9)
0x15d7: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x15d8: Return(); Pop(0)

0x15d9: PushEmpty()
0x15da: PushEmpty(int)
0x15db: Call2 0x14d5

0x15dc: Pop(0)
0x15dd: Push((int) 10)
0x15de: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x15df: Return(); Pop(0)

0x15e0: PushEmpty()
0x15e1: PushEmpty(int)
0x15e2: Call2 0x14d5

0x15e3: Pop(0)
0x15e4: Push((int) 11)
0x15e5: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x15e6: Return(); Pop(0)

0x15e7: PushEmpty(int, int)
0x15e8: Push("branch")
0x15e9: @ GetVariable(Stack[-1], Stack[-2])
0x15ea: Pop(1)
0x15eb: Push((int) 0)
0x15ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15ed: IF (Stack[-1] == 0) GOTO 0x15f1; Pop(1)

0x15ee: Stack[-3] = (int) 1
0x15ef: Return(); Pop(2)

0x15f0: GOTO 0x15f6

0x15f1: Push((int) 1)
0x15f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15f3: IF (Stack[-1] == 0) GOTO 0x15f6; Pop(1)

0x15f4: Stack[-3] = (int) 2
0x15f5: Return(); Pop(2)

0x15f6: Stack[-3] = (int) 3
0x15f7: Return(); Pop(2)

0x15f8: PushEmpty(int, int)
0x15f9: Push("branch")
0x15fa: @ GetVariable(Stack[-1], Stack[-2])
0x15fb: Pop(1)
0x15fc: Stack[-3] = Stack[-1]
0x15fd: Return(); Pop(2)

0x15fe: PushEmpty()
0x15ff: PushEmpty(int)
0x1600: Call2 0x15f8

0x1601: Pop(0)
0x1602: Push((int) 1)
0x1603: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1604: IF (Stack[-1] == 0) GOTO 0x1608; Pop(1)

0x1605: @ WorkWithCorpse(Stack[-1])
0x1606: Pop(0)
0x1607: GOTO 0x160a

0x1608: @ Barter(Stack[-1])
0x1609: Pop(0)
0x160a: Return(); Pop(0)

0x160b: PushEmpty(int, bool, int, bool)
0x160c: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x160d: IF (Stack[-1] == 0) GOTO 0x1612; Pop(1)

0x160e: Push("GenerateMoney: iMin > iMax")
0x160f: @ Trace(Stack[-1])
0x1610: Pop(1)
0x1611: Return(); Pop(4)

0x1612: Stack[-2] = (int) 0
0x1613: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x1614: IF (Stack[-1] == 0) GOTO 0x1619; Pop(1)

0x1615: Pop(0); Push(Stack[-5] - Stack[-6]);
0x1616: @ irand(Stack[-3], Stack[-1])
0x1617: Pop(1)
0x1618: GOTO 0x161d

0x1619: Push((int) 0)
0x161a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x161b: IF (Stack[-1] == 0) GOTO 0x161d; Pop(1)

0x161c: Return(); Pop(4)

0x161d: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x161e: Push((int) 0)
0x161f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1620: IF (Stack[-1] == 0) GOTO 0x1622; Pop(1)

0x1621: Return(); Pop(4)

0x1622: PushEmpty(int, string)
0x1623: Stack[-1] = "Money"
0x1624: Call2 0x168c

0x1625: Pop(1)
0x1626: Push((int) 0)
0x1627: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x1628: Pop(2)
0x1629: Return(); Pop(4)

0x162a: PushEmpty(object, int, bool, object, int, bool)
0x162b: @ CreateInvItem(Stack[-3])
0x162c: Pop(0)
0x162d: @@ SetItemName(Stack[-7])
0x162e: Pop(0)
0x162f: Push("Organ")
0x1630: Push((int) 1)
0x1631: @@ SetProperty(Stack[-2], Stack[-1])
0x1632: Pop(2)
0x1633: @@ GetItemID(Stack[-2])
0x1634: Pop(0)
0x1635: Push((int) 0)
0x1636: Push((int) 1)
0x1637: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x1638: Pop(2)
0x1639: Return(); Pop(6)

0x163a: Stack[-3] = 0
0x163b: PushEmpty(int)
0x163c: Call2 0x15f8

0x163d: Pop(0)
0x163e: Push((int) 1)
0x163f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1640: IF (Stack[-1] == 0) GOTO 0x1642; Pop(1)

0x1641: Return(); Pop(0)

0x1642: PushEmpty(string)
0x1643: Stack[-1] = "liver"
0x1644: Call2 0x162a

0x1645: Pop(1)
0x1646: PushEmpty(string)
0x1647: Stack[-1] = "kidney"
0x1648: Call2 0x162a

0x1649: Pop(1)
0x164a: PushEmpty(string)
0x164b: Stack[-1] = "heart"
0x164c: Call2 0x162a

0x164d: Pop(1)
0x164e: PushEmpty(string)
0x164f: Stack[-1] = "blood"
0x1650: Call2 0x162a

0x1651: Pop(1)
0x1652: Return(); Pop(0)

0x1653: PushEmpty(bool, bool)
0x1654: Push((int) 0)
0x1655: @ ClearSubContainer(Stack[-1])
0x1656: Pop(1)
0x1657: PushEmpty(int, int)
0x1658: Stack[-2] = (int) 30
0x1659: Push((int) 50)
0x165a: PushEmpty(int)
0x165b: Call2 0x14d5

0x165c: Pop(0)
0x165d: Push((int) 40)
0x165e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x165f: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1660: Call2 0x160b

0x1661: Pop(2)
0x1662: PushEmpty(string, int, int)
0x1663: Stack[-3] = "tourniquet"
0x1664: Stack[-2] = (int) 1
0x1665: Stack[-1] = (int) 10
0x1666: Call2 0x1440

0x1667: Pop(3)
0x1668: PushEmpty(string, int, int)
0x1669: Stack[-3] = "bandage"
0x166a: Stack[-2] = (int) 1
0x166b: Stack[-1] = (int) 10
0x166c: Call2 0x1440

0x166d: Pop(3)
0x166e: PushEmpty(string, int, int)
0x166f: Stack[-3] = "bottle_empty"
0x1670: Stack[-2] = (int) 1
0x1671: Stack[-1] = (int) 2
0x1672: Call2 0x1440

0x1673: Pop(3)
0x1674: PushEmpty(string, int, int)
0x1675: Stack[-3] = "tvirin"
0x1676: Stack[-2] = (int) 1
0x1677: Stack[-1] = (int) 8
0x1678: Call2 0x1440

0x1679: Pop(3)
0x167a: Return(); Pop(2)

0x167b: PushEmpty(bool, bool)
0x167c: Push((int) 0)
0x167d: @ ClearSubContainer(Stack[-1])
0x167e: Pop(1)
0x167f: PushEmpty(string, int, int)
0x1680: Stack[-3] = "tourniquet"
0x1681: Stack[-2] = (int) 1
0x1682: Stack[-1] = (int) 4
0x1683: Call2 0x1440

0x1684: Pop(3)
0x1685: PushEmpty(string, int, int)
0x1686: Stack[-3] = "bandage"
0x1687: Stack[-2] = (int) 1
0x1688: Stack[-1] = (int) 2
0x1689: Call2 0x1440

0x168a: Pop(3)
0x168b: Return(); Pop(2)

0x168c: PushEmpty(int, int)
0x168d: @ GetInvItemByName(Stack[-1], Stack[-3])
0x168e: Pop(0)
0x168f: Stack[-4] = Stack[-1]
0x1690: Return(); Pop(2)

0x1691: PushEmpty()
0x1692: PushEmpty(object)
0x1693: Stack[-1] = Stack[-2]
0x1694: Push(-1, 0); TaskCall(3)
0x1695: Call2 0xa70

0x1696: Pop(-1, 0); TaskReturn
0x1697: Pop(1)
0x1698: Return(); Pop(0)

0x1699: PushEmpty(float, float)
0x169a: Push("health")
0x169b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x169c: IF (Stack[-1] == 0) GOTO 0x16a5; Pop(1)

0x169d: Push("health")
0x169e: @ GetProperty(Stack[-1], Stack[-2])
0x169f: Pop(1)
0x16a0: Push((int) 0)
0x16a1: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x16a2: IF (Stack[-1] == 0) GOTO 0x16a5; Pop(1)

0x16a3: @ SignalDeath(Stack[-4])
0x16a4: Pop(0)
0x16a5: Return(); Pop(2)

0x16a6: PushEmpty()
0x16a7: PushEmpty(object)
0x16a8: Stack[-1] = Stack[-2]
0x16a9: Call2 0x1691

0x16aa: Pop(1)
0x16ab: Return(); Pop(0)

0x16ac: PushEmpty()
0x16ad: PushEmpty(object, int, float)
0x16ae: Stack[-3] = Stack[-7]
0x16af: Stack[-2] = Stack[-6]
0x16b0: Stack[-1] = Stack[-5]
0x16b1: Call2 0x1319

0x16b2: Pop(3)
0x16b3: Return(); Pop(0)

0x16b4: PushEmpty()
0x16b5: PushEmpty(object, int, float, cvector, cvector)
0x16b6: Stack[-5] = Stack[-11]
0x16b7: Stack[-4] = Stack[-10]
0x16b8: Stack[-3] = Stack[-9]
0x16b9: Stack[-2] = Stack[-7]
0x16ba: Stack[-1] = Stack[-6]
0x16bb: Call2 0x135d

0x16bc: Pop(5)
0x16bd: Return(); Pop(0)

0x16be: PushEmpty()
0x16bf: Push("unholster")
0x16c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16c1: IF (Stack[-1] == 0) GOTO 0x16c9; Pop(1)

0x16c2: PushEmpty(bool, object)
0x16c3: Stack[-1] = Stack[-4]
0x16c4: Call2 0x182b

0x16c5: Stack[-5] = Stack[-2]
0x16c6: Pop(2)
0x16c7: Return(); Pop(0)

0x16c8: GOTO 0x16dc

0x16c9: Push("player_shot")
0x16ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16cb: IF (Stack[-1] == 0) GOTO 0x16d3; Pop(1)

0x16cc: PushEmpty(bool, object)
0x16cd: Stack[-1] = Stack[-4]
0x16ce: Call2 0x1830

0x16cf: Stack[-5] = Stack[-2]
0x16d0: Pop(2)
0x16d1: Return(); Pop(0)

0x16d2: GOTO 0x16dc

0x16d3: Push("battle")
0x16d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16d5: IF (Stack[-1] == 0) GOTO 0x16dc; Pop(1)

0x16d6: PushEmpty(bool, object)
0x16d7: Stack[-1] = Stack[-4]
0x16d8: Call2 0x1845

0x16d9: Stack[-5] = Stack[-2]
0x16da: Pop(2)
0x16db: Return(); Pop(0)

0x16dc: Stack[-3] = (bool) 0
0x16dd: Return(); Pop(0)

0x16de: PushEmpty()
0x16df: Push("unholster")
0x16e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16e1: IF (Stack[-1] == 0) GOTO 0x16e7; Pop(1)

0x16e2: PushEmpty(object)
0x16e3: Stack[-1] = Stack[-3]
0x16e4: Call2 0x182e

0x16e5: Pop(1)
0x16e6: GOTO 0x16f6

0x16e7: Push("player_shot")
0x16e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16e9: IF (Stack[-1] == 0) GOTO 0x16ef; Pop(1)

0x16ea: PushEmpty(object)
0x16eb: Stack[-1] = Stack[-3]
0x16ec: Call2 0x183f

0x16ed: Pop(1)
0x16ee: GOTO 0x16f6

0x16ef: Push("battle")
0x16f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16f1: IF (Stack[-1] == 0) GOTO 0x16f6; Pop(1)

0x16f2: PushEmpty(object)
0x16f3: Stack[-1] = Stack[-3]
0x16f4: Call2 0x1848

0x16f5: Pop(1)
0x16f6: Return(); Pop(0)

0x16f7: PushEmpty(bool, bool)
0x16f8: PushEmpty(bool)
0x16f9: Stack[-1] = (bool) 0
0x16fa: PushEmpty(bool, object)
0x16fb: Stack[-1] = Stack[-6]
0x16fc: Call2 0x182b

0x16fd: Pop(1)
0x16fe: IF (Stack[-1] == 0) GOTO 0x1705; Pop(1)

0x16ff: PushEmpty(bool, object)
0x1700: Stack[-1] = Stack[-6]
0x1701: Call2 0x1252

0x1702: Pop(1)
0x1703: IF (Stack[-1] == 0) GOTO 0x1705; Pop(1)

0x1704: Stack[-1] = (bool) 1
0x1705: IF (Stack[-1] == 0) GOTO 0x170c; Pop(1)

0x1706: @@ IsWeaponHolstered(Stack[-1])
0x1707: Pop(0)
0x1708: Pop(0); Push((bool) Stack[-1] == 0)
0x1709: IF (Stack[-1] == 0) GOTO 0x170c; Pop(1)

0x170a: Stack[-4] = (bool) 1
0x170b: Return(); Pop(2)

0x170c: Stack[-4] = (bool) 0
0x170d: Return(); Pop(2)

0x170e: PushEmpty()
0x170f: PushEmpty(object)
0x1710: Stack[-1] = Stack[-2]
0x1711: Call2 0x182e

0x1712: Pop(1)
0x1713: Return(); Pop(0)

0x1714: PushEmpty()
0x1715: PushEmpty(bool, object)
0x1716: Stack[-1] = Stack[-3]
0x1717: Call2 0x1252

0x1718: Pop(1)
0x1719: IF (Stack[-1] == 0) GOTO 0x1720; Pop(1)

0x171a: PushEmpty(object)
0x171b: Call2 0x1474

0x171c: Pop(0)
0x171d: Push((float)-0.02)
0x171e: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x171f: Pop(2)
0x1720: Return(); Pop(0)

0x1721: PushEmpty(object, object)
0x1722: Push("heal")
0x1723: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1724: IF (Stack[-1] == 0) GOTO 0x172f; Pop(1)

0x1725: Push("player")
0x1726: @ FindActor(Stack[-2], Stack[-1])
0x1727: Pop(1)
0x1728: PushEmpty(bool, object)
0x1729: Stack[-1] = Stack[-3]
0x172a: Call2 0x184a

0x172b: Stack[-6] = Stack[-2]
0x172c: Pop(2)
0x172d: Return(); Pop(2)

0x172e: Stack[-1] = 0
0x172f: Stack[-4] = (bool) 0
0x1730: Return(); Pop(2)

0x1731: PushEmpty(object, object)
0x1732: Push("heal")
0x1733: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1734: IF (Stack[-1] == 0) GOTO 0x173d; Pop(1)

0x1735: Push("player")
0x1736: @ FindActor(Stack[-2], Stack[-1])
0x1737: Pop(1)
0x1738: PushEmpty(object)
0x1739: Stack[-1] = Stack[-2]
0x173a: Call2 0x184d

0x173b: Pop(1)
0x173c: Stack[-1] = 0
0x173d: Return(); Pop(2)

0x173e: PushEmpty(string, string)
0x173f: Stack[-1] = "idle"
0x1740: Push(Stack[-3])
0x1741: IF (Stack[-1] == 0) GOTO 0x1743; Pop(1)

0x1742: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1743: Stack[-4] = Stack[-1]
0x1744: Return(); Pop(2)

0x1745: PushEmpty(int, bool, int, bool)
0x1746: Stack[-2] = (int) 0
0x1747: Push("all")
0x1748: PushEmpty(string, int)
0x1749: Stack[-1] = Stack[-5]
0x174a: Call2 0x173e

0x174b: Pop(1)
0x174c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x174d: Pop(2)
0x174e: Pop(0); Push((bool) Stack[-1] == 0)
0x174f: IF (Stack[-1] == 0) GOTO 0x1751; Pop(1)

0x1750: GOTO 0x1754

0x1751: Push((int) 1)
0x1752: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1753: GOTO 0x1747

0x1754: Stack[-5] = Stack[-2]
0x1755: Return(); Pop(4)

0x1756: PushEmpty()
0x1757: PushEmpty(bool)
0x1758: Call2 0x1888

0x1759: Pop(0)
0x175a: IF (Stack[-1] == 0) GOTO 0x175d; Pop(1)

0x175b: Stack[-2] = (int) 2
0x175c: GOTO 0x175e

0x175d: Stack[-2] = (int) 0
0x175e: Return(); Pop(0)

0x175f: PushEmpty()
0x1760: PushEmpty(object)
0x1761: Stack[-1] = Stack[-2]
0x1762: Push(-1, 1); TaskCall(6)
0x1763: Call2 0xd77

0x1764: Pop(-1, 1); TaskReturn
0x1765: Pop(1)
0x1766: Return(); Pop(0)

0x1767: PushEmpty()
0x1768: PushEmpty(bool, object)
0x1769: Stack[-1] = Stack[-3]
0x176a: Call2 0x12d5

0x176b: Pop(1)
0x176c: IF (Stack[-1] == 0) GOTO 0x176f; Pop(1)

0x176d: Stack[-2] = (int) 2
0x176e: GOTO 0x1770

0x176f: Stack[-2] = (int) 0
0x1770: Return(); Pop(0)

0x1771: PushEmpty()
0x1772: PushEmpty(object)
0x1773: Stack[-1] = Stack[-2]
0x1774: Push(-1, 6); TaskCall(7)
0x1775: Call2 0xe8a

0x1776: Pop(-1, 6); TaskReturn
0x1777: Pop(1)
0x1778: Return(); Pop(0)

0x1779: PushEmpty(string, string, string, string)
0x177a: PushEmpty(bool, object, string)
0x177b: Stack[-2] = Stack[-9]
0x177c: Stack[-1] = "class"
0x177d: Call2 0x1257

0x177e: Pop(2)
0x177f: Pop(1); Push((bool) Stack[-1] == 0)
0x1780: IF (Stack[-1] == 0) GOTO 0x1783; Pop(1)

0x1781: Stack[-7] = (bool) 0
0x1782: Return(); Pop(4)

0x1783: Push("class")
0x1784: @ GetProperty(Stack[-1], Stack[-3])
0x1785: Pop(1)
0x1786: Push("class")
0x1787: @@ GetProperty(Stack[-1], Stack[-2])
0x1788: Pop(1)
0x1789: PushEmpty(bool)
0x178a: Stack[-1] = (bool) 0
0x178b: Pop(0); Push((bool) Stack[-6] == 0)
0x178c: IF (Stack[-1] == 0) GOTO 0x1790; Pop(1)

0x178d: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0x178e: IF (Stack[-1] == 0) GOTO 0x1790; Pop(1)

0x178f: Stack[-1] = (bool) 1
0x1790: IF (Stack[-1] == 0) GOTO 0x1793; Pop(1)

0x1791: Stack[-7] = (bool) 1
0x1792: Return(); Pop(4)

0x1793: Push("rat")
0x1794: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1795: IF (Stack[-1] == 0) GOTO 0x1799; Pop(1)

0x1796: Stack[-7] = (bool) 0
0x1797: Return(); Pop(4)

0x1798: GOTO 0x17c2

0x1799: Push("rat_big")
0x179a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x179b: IF (Stack[-1] == 0) GOTO 0x179f; Pop(1)

0x179c: Stack[-7] = (bool) 0
0x179d: Return(); Pop(4)

0x179e: GOTO 0x17c2

0x179f: Push("dog")
0x17a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17a1: IF (Stack[-1] == 0) GOTO 0x17a5; Pop(1)

0x17a2: Stack[-7] = (bool) 0
0x17a3: Return(); Pop(4)

0x17a4: GOTO 0x17c2

0x17a5: Push("grabitel")
0x17a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17a7: IF (Stack[-1] == 0) GOTO 0x17ab; Pop(1)

0x17a8: Stack[-7] = (bool) 0
0x17a9: Return(); Pop(4)

0x17aa: GOTO 0x17c2

0x17ab: Push("bomber")
0x17ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17ad: IF (Stack[-1] == 0) GOTO 0x17b1; Pop(1)

0x17ae: Stack[-7] = (bool) 0
0x17af: Return(); Pop(4)

0x17b0: GOTO 0x17c2

0x17b1: Push("sanitar")
0x17b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17b3: IF (Stack[-1] == 0) GOTO 0x17b7; Pop(1)

0x17b4: Stack[-7] = (bool) 0
0x17b5: Return(); Pop(4)

0x17b6: GOTO 0x17c2

0x17b7: Push("hunter")
0x17b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17b9: IF (Stack[-1] == 0) GOTO 0x17bd; Pop(1)

0x17ba: Stack[-7] = (bool) 0
0x17bb: Return(); Pop(4)

0x17bc: GOTO 0x17c2

0x17bd: Push("soldier")
0x17be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17bf: IF (Stack[-1] == 0) GOTO 0x17c2; Pop(1)

0x17c0: Stack[-7] = (bool) 0
0x17c1: Return(); Pop(4)

0x17c2: Stack[-7] = (bool) 1
0x17c3: Return(); Pop(4)

0x17c4: PushEmpty()
0x17c5: PushEmpty(int, object)
0x17c6: Stack[-1] = Stack[-4]
0x17c7: Call2 0x1767

0x17c8: Stack[-5] = Stack[-2]
0x17c9: Pop(2)
0x17ca: Return(); Pop(0)

0x17cb: PushEmpty()
0x17cc: PushEmpty(object)
0x17cd: Stack[-1] = Stack[-2]
0x17ce: Call2 0x1771

0x17cf: Pop(1)
0x17d0: Return(); Pop(0)

0x17d1: PushEmpty(bool, bool)
0x17d2: PushEmpty(bool, object, bool)
0x17d3: Stack[-2] = Stack[-8]
0x17d4: Stack[-1] = !Stack[-6]; Pop(0);
0x17d5: Call2 0x1779

0x17d6: Pop(2)
0x17d7: Pop(1); Push((bool) Stack[-1] == 0)
0x17d8: IF (Stack[-1] == 0) GOTO 0x17db; Pop(1)

0x17d9: Stack[-7] = (bool) 0
0x17da: Return(); Pop(2)

0x17db: @ CanSee(Stack[-1], Stack[-6])
0x17dc: Pop(0)
0x17dd: PushEmpty(bool)
0x17de: Stack[-1] = (bool) 1
0x17df: Push(Stack[-2])
0x17e0: IF (Stack[-1] == 0) GOTO 0x17e9; Pop(1)

0x17e1: PushEmpty(float, object)
0x17e2: Stack[-1] = Stack[-9]
0x17e3: Call2 0x124a

0x17e4: Pop(1)
0x17e5: Pop(0); Push(Stack[-6] * Stack[-6]);
0x17e6: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x17e7: IF (Stack[-1] == 0) GOTO 0x17e9; Pop(1)

0x17e8: Stack[-1] = (bool) 0
0x17e9: IF (Stack[-1] == 0) GOTO 0x17ec; Pop(1)

0x17ea: Stack[-7] = (bool) 1
0x17eb: Return(); Pop(2)

0x17ec: Stack[-7] = (bool) 0
0x17ed: Return(); Pop(2)

0x17ee: PushEmpty()
0x17ef: Stack[-2] = (int) 0
0x17f0: Return(); Pop(0)

0x17f1: PushEmpty()
0x17f2: Return(); Pop(0)

0x17f3: PushEmpty()
0x17f4: Push("killme")
0x17f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f6: IF (Stack[-1] == 0) GOTO 0x17fd; Pop(1)

0x17f7: PushEmpty(int, object)
0x17f8: Stack[-1] = Stack[-3]
0x17f9: Call2 0x1809

0x17fa: Stack[-5] = Stack[-2]
0x17fb: Pop(2)
0x17fc: Return(); Pop(0)

0x17fd: Stack[-3] = (int) 0
0x17fe: Return(); Pop(0)

0x17ff: PushEmpty()
0x1800: Push("killme")
0x1801: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1802: IF (Stack[-1] == 0) GOTO 0x1808; Pop(1)

0x1803: PushEmpty(object)
0x1804: Stack[-1] = Stack[-2]
0x1805: Call2 0x181b

0x1806: Pop(1)
0x1807: Return(); Pop(0)

0x1808: Return(); Pop(0)

0x1809: PushEmpty()
0x180a: PushEmpty(bool, object)
0x180b: Stack[-1] = Stack[-3]
0x180c: Call2 0x12d5

0x180d: Pop(1)
0x180e: Pop(1); Push((bool) Stack[-1] == 0)
0x180f: IF (Stack[-1] == 0) GOTO 0x1812; Pop(1)

0x1810: Stack[-2] = (int) 0
0x1811: Return(); Pop(0)

0x1812: PushEmpty(bool, object)
0x1813: Stack[-1] = Stack[-3]
0x1814: Call2 0x188a

0x1815: Pop(1)
0x1816: IF (Stack[-1] == 0) GOTO 0x1819; Pop(1)

0x1817: Stack[-2] = (int) 2
0x1818: GOTO 0x181a

0x1819: Stack[-2] = (int) 0
0x181a: Return(); Pop(0)

0x181b: PushEmpty()
0x181c: PushEmpty(object)
0x181d: Stack[-1] = Stack[-2]
0x181e: Call2 0x1771

0x181f: Pop(1)
0x1820: Return(); Pop(0)

0x1821: PushEmpty()
0x1822: Stack[-2] = (int) 2
0x1823: Return(); Pop(0)

0x1824: PushEmpty()
0x1825: PushEmpty(object)
0x1826: Stack[-1] = Stack[-2]
0x1827: Call2 0x1860

0x1828: Pop(1)
0x1829: Return(); Pop(0)

0x182a: Return(); Pop(0)

0x182b: PushEmpty()
0x182c: Stack[-2] = (bool) 0
0x182d: Return(); Pop(0)

0x182e: PushEmpty()
0x182f: Return(); Pop(0)

0x1830: PushEmpty(bool, bool)
0x1831: @ CanSee(Stack[-1], Stack[-3])
0x1832: Pop(0)
0x1833: Stack[-4] = (bool) 1
0x1834: Push(Stack[-1])
0x1835: IF (Stack[-1] == 0) GOTO 0x183e; Pop(1)

0x1836: PushEmpty(float, object)
0x1837: Stack[-1] = Stack[-5]
0x1838: Call2 0x124a

0x1839: Pop(1)
0x183a: Push((int) 2250000)
0x183b: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x183c: IF (Stack[-1] == 0) GOTO 0x183e; Pop(1)

0x183d: Stack[-4] = (bool) 0
0x183e: Return(); Pop(2)

0x183f: PushEmpty()
0x1840: PushEmpty(object)
0x1841: Stack[-1] = Stack[-2]
0x1842: Call2 0x175f

0x1843: Pop(1)
0x1844: Return(); Pop(0)

0x1845: PushEmpty()
0x1846: Stack[-2] = (bool) 0
0x1847: Return(); Pop(0)

0x1848: PushEmpty()
0x1849: Return(); Pop(0)

0x184a: PushEmpty()
0x184b: Stack[-2] = (bool) 0
0x184c: Return(); Pop(0)

0x184d: PushEmpty()
0x184e: Return(); Pop(0)

0x184f: Stack[-1] = (int) 515557
0x1850: Return(); Pop(0)

0x1851: Stack[-1] = (int) 503342
0x1852: Return(); Pop(0)

0x1853: Stack[-1] = "ui/NPC_Citizen1.png"
0x1854: Return(); Pop(0)

0x1855: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x1856: Return(); Pop(0)

0x1857: Stack[-1] = (bool) 0
0x1858: Return(); Pop(0)

0x1859: Push(GlobalVars[0])
0x185a: Stack[-1] = (bool) 0
0x185b: GlobalVars[0] = Stack[-1]; Pop(1)
0x185c: PushEmpty()
0x185d: Call2 0x167b

0x185e: Pop(0)
0x185f: Return(); Pop(0)

0x1860: PushEmpty(bool, bool)
0x1861: Push(GlobalVars[0])
0x1862: IF (Stack[-1] == 0) GOTO 0x186d; Pop(1)

0x1863: @ IsOverrideActive(Stack[-1])
0x1864: Pop(0)
0x1865: Pop(0); Push((bool) Stack[-1] == 0)
0x1866: IF (Stack[-1] == 0) GOTO 0x186b; Pop(1)

0x1867: PushEmpty(object)
0x1868: Stack[-1] = Stack[-4]
0x1869: Call2 0x15fe

0x186a: Pop(1)
0x186b: Return(); Pop(2)

0x186c: GOTO 0x1887

0x186d: Push((int) 1000)
0x186e: PushEmpty(int, object)
0x186f: Stack[-1] = Stack[-6]
0x1870: Push(-2, 1); TaskCall(1)
0x1871: Call2 0x28

0x1872: Pop(-2, 1); TaskReturn
0x1873: Pop(1)
0x1874: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1875: IF (Stack[-1] == 0) GOTO 0x1887; Pop(1)

0x1876: PushEmpty(bool, object)
0x1877: Stack[-1] = Stack[-5]
0x1878: Call2 0x13d2

0x1879: Pop(1)
0x187a: Pop(1); Push((bool) Stack[-1] == 0)
0x187b: IF (Stack[-1] == 0) GOTO 0x187d; Pop(1)

0x187c: Return(); Pop(2)

0x187d: PushEmpty(object)
0x187e: Stack[-1] = Stack[-4]
0x187f: Push(-1, 1); TaskCall(0)
0x1880: Call2 0x0

0x1881: Pop(-1, 1); TaskReturn
0x1882: Pop(1)
0x1883: PushEmpty(object)
0x1884: Stack[-1] = Stack[-4]
0x1885: Call2 0x140a

0x1886: Pop(1)
0x1887: Return(); Pop(2)

0x1888: Stack[-1] = (bool) 0
0x1889: Return(); Pop(0)

0x188a: PushEmpty()
0x188b: Stack[-2] = (bool) 1
0x188c: Return(); Pop(0)

0x188d: PushEmpty()
0x188e: PushEmpty(bool, object, object, float, bool)
0x188f: Stack[-4] = Stack[-8]
0x1890: Stack[-3] = Stack[-7]
0x1891: Stack[-2] = (float) 700.0
0x1892: Stack[-1] = Stack[-6]
0x1893: Call2 0x17d1

0x1894: Stack[-9] = Stack[-5]
0x1895: Pop(5)
0x1896: Return(); Pop(0)

0x1897: PushEmpty()
0x1898: PushEmpty(bool, object)
0x1899: Stack[-1] = Stack[-3]
0x189a: Call2 0x1252

0x189b: Pop(1)
0x189c: IF (Stack[-1] == 0) GOTO 0x18a7; Pop(1)

0x189d: PushEmpty(object)
0x189e: Call2 0x1474

0x189f: Pop(0)
0x18a0: Push((float)-0.03)
0x18a1: Push((bool) 1)
0x18a2: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x18a3: Pop(3)
0x18a4: PushEmpty()
0x18a5: Call2 0x1653

0x18a6: Pop(0)
0x18a7: PushEmpty()
0x18a8: Call2 0x163b

0x18a9: Pop(0)
0x18aa: Push(GlobalVars[0])
0x18ab: Stack[-1] = (bool) 1
0x18ac: GlobalVars[0] = Stack[-1]; Pop(1)
0x18ad: Push((int) 50)
0x18ae: Push((int) 40)
0x18af: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x18b0: Pop(2)
0x18b1: Return(); Pop(0)

