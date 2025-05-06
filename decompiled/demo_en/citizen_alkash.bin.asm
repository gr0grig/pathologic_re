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
	AddItem (3 args)
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
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x831
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x15b Vars = (int, int)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x7a4 Vars = (object)
		EVENT_6 Op = 0x7b2 Vars = ()
		EVENT_22 Op = 0x82b Vars = (object, int, float, float)
		EVENT_16 Op = 0x82d Vars = (object, string)
		EVENT_41 Op = 0x82f Vars = (object)
	GTASK_4 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x849 Vars = (object)
		EVENT_17 Op = 0x85d Vars = (object)
		EVENT_30 Op = 0x875 Vars = (object, object, bool)
		EVENT_40 Op = 0x891 Vars = (object)
		EVENT_42 Op = 0x8a5 Vars = (object, string)
		EVENT_26 Op = 0x8ca Vars = (string)
		EVENT_1 Op = 0x8d8 Vars = (object)
		EVENT_3 Op = 0x8eb Vars = (object)
		EVENT_7 Op = 0x8f1 Vars = (int)
		EVENT_6 Op = 0x8fd Vars = ()
		EVENT_41 Op = 0x914 Vars = (object)
		EVENT_10 Op = 0x985 Vars = (object)
		EVENT_28 Op = 0x989 Vars = ()
	GTASK_5  Params = 0
		EVENT_0 Op = 0x9a2 Vars = (object)
		EVENT_17 Op = 0x9b6 Vars = (object)
		EVENT_30 Op = 0x9ce Vars = (object, object, bool)
		EVENT_40 Op = 0x9ea Vars = (object)
		EVENT_42 Op = 0x9fe Vars = (object, string)
		EVENT_26 Op = 0xa23 Vars = (string)
		EVENT_6 Op = 0xa31 Vars = ()
		EVENT_1 Op = 0xa38 Vars = (object)
	GTASK_6 Vars = (object) Params = 1
		EVENT_0 Op = 0xad4 Vars = (object)
		EVENT_17 Op = 0xae8 Vars = (object)
		EVENT_30 Op = 0xb00 Vars = (object, object, bool)
		EVENT_40 Op = 0xb1c Vars = (object)
		EVENT_42 Op = 0xb30 Vars = (object, string)
		EVENT_26 Op = 0xb55 Vars = (string)
		EVENT_41 Op = 0xb6e Vars = (object)
		EVENT_7 Op = 0xb77 Vars = (int)
		EVENT_6 Op = 0xb9a Vars = ()
		EVENT_1 Op = 0xba1 Vars = (object)
	GTASK_7 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_8 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0xe53 Vars = ()
		EVENT_7 Op = 0xe8b Vars = (int)
		EVENT_1 Op = 0xea6 Vars = (object)
		EVENT_2 Op = 0xeb5 Vars = (object)
		EVENT_10 Op = 0xf3b Vars = (object)
		EVENT_41 Op = 0xf46 Vars = (object)

Events:
EVENT_16 Op = 0x1309 Vars = (object, string)
EVENT_41 Op = 0x1316 Vars = (object)
EVENT_22 Op = 0x131c Vars = (object, int, float, float)
EVENT_43 Op = 0x1324 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x14c7

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x1130

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
0x1c: Call2 0x14c7

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
0x2d: Call2 0x10a0

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x14c1

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x14bf

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x14c3

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x14c5

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x1257

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
0x69: Call2 0x10e4

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
0x77: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x78: PushEmpty(bool, object)
0x79: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a: Call2 0x1229

0x7b: Pop(1)
0x7c: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x7d: PushEmpty(string)
0x7e: Stack[-1] = "Neutral"
0x7f: Call2 0x145

0x80: Pop(1)
0x81: Push((int) 543012)
0x82: @@ SetMessage(Stack[-1])
0x83: Pop(1)
0x84: @@ ClearReplies()
0x85: Pop(0)
0x86: Push((int) 536643)
0x87: Push((int) -1)
0x88: Push((int) 38471)
0x89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: PushEmpty(bool, object)
0x8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d: Call2 0x123f

0x8e: Pop(1)
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: Push((int) 543014)
0x91: Push((int) -1)
0x92: Push((int) 45466)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0x123f

0x98: Pop(1)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9b: Push((int) 543027)
0x9c: Push((int) -1)
0x9d: Push((int) 45479)
0x9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(3)
0xa0: Push((int) 536852)
0xa1: Push((int) -1)
0xa2: Push((int) 38688)
0xa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4: Pop(3)
0xa5: GOTO 0x127

0xa6: PushEmpty(string)
0xa7: Stack[-1] = "Neutral"
0xa8: Call2 0x145

0xa9: Pop(1)
0xaa: Push((int) 536636)
0xab: @@ SetMessage(Stack[-1])
0xac: Pop(1)
0xad: @@ ClearReplies()
0xae: Pop(0)
0xaf: PushEmpty(bool)
0xb0: Stack[-1] = (bool) 0
0xb1: PushEmpty(bool, object)
0xb2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Call2 0x1211

0xb4: Pop(1)
0xb5: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb6: PushEmpty(bool, object)
0xb7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Call2 0x1235

0xb9: Pop(1)
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: Stack[-1] = (bool) 1
0xbc: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbd: Push((int) 536638)
0xbe: Push((int) -1)
0xbf: Push((int) 38466)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: PushEmpty(bool)
0xc3: Stack[-1] = (bool) 0
0xc4: PushEmpty(bool, object)
0xc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Call2 0x1211

0xc7: Pop(1)
0xc8: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x1235

0xcc: Pop(1)
0xcd: Pop(1); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Stack[-1] = (bool) 1
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: Push((int) 536644)
0xd2: Push((int) -1)
0xd3: Push((int) 38472)
0xd4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5: Pop(3)
0xd6: PushEmpty(bool)
0xd7: Stack[-1] = (bool) 0
0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x121d

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Call2 0x1235

0xe0: Pop(1)
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: Stack[-1] = (bool) 1
0xe3: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe4: Push((int) 536639)
0xe5: Push((int) 38468)
0xe6: Push((int) 38467)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: PushEmpty(bool)
0xea: Stack[-1] = (bool) 0
0xeb: PushEmpty(bool, object)
0xec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed: Call2 0x121d

0xee: Pop(1)
0xef: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf0: PushEmpty(bool, object)
0xf1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Call2 0x1235

0xf3: Pop(1)
0xf4: Pop(1); Push((bool) Stack[-1] == 0)
0xf5: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf6: Stack[-1] = (bool) 1
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: Push((int) 536642)
0xf9: Push((int) -1)
0xfa: Push((int) 38470)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: PushEmpty(bool)
0xfe: Stack[-1] = (bool) 0
0xff: PushEmpty(bool, object)
0x100: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x101: Call2 0x123f

0x102: Pop(1)
0x103: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x104: PushEmpty(bool, object)
0x105: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x106: Call2 0x1211

0x107: Pop(1)
0x108: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x109: Stack[-1] = (bool) 1
0x10a: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10b: Push((int) 536645)
0x10c: Push((int) 38474)
0x10d: Push((int) 38473)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x112: Call2 0x1211

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: Push((int) 536850)
0x116: Push((int) -1)
0x117: Push((int) 38686)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: PushEmpty(bool, object)
0x11b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Call2 0x121d

0x11d: Pop(1)
0x11e: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11f: Push((int) 536851)
0x120: Push((int) -1)
0x121: Push((int) 38687)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: GOTO 0x127

0x125: Return(); Pop(0)

0x126: GOTO 0x76

0x127: PushEmpty(bool)
0x128: Call2 0x14c7

0x129: Pop(0)
0x12a: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x12b: @ lshWaitForAnimEnd()
0x12c: Pop(0)
0x12d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x12e: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12f: GOTO 0x135

0x130: PushEmpty(string)
0x131: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x132: Call2 0x1130

0x133: Pop(1)
0x134: GOTO 0x12b

0x135: GOTO 0x144

0x136: Push("all")
0x137: Push("idle")
0x138: @ PlayAnimation(Stack[-2], Stack[-1])
0x139: Pop(2)
0x13a: @ WaitForAnimEnd()
0x13b: Pop(0)
0x13c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x13d: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13e: GOTO 0x144

0x13f: Push("all")
0x140: Push("idle")
0x141: @ PlayAnimation(Stack[-2], Stack[-1])
0x142: Pop(2)
0x143: GOTO 0x13a

0x144: Return(); Pop(0)

0x145: PushEmpty()
0x146: PushEmpty(bool)
0x147: Call2 0x14c7

0x148: Pop(0)
0x149: Pop(1); Push((bool) Stack[-1] == 0)
0x14a: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14b: Return(); Pop(0)

0x14c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x14d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14e: Return(); Pop(0)

0x14f: PushEmpty(string, bool)
0x150: Stack[-2] = Stack[-3]
0x151: Push("")
0x152: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x154: Stack[-1] = (bool) 0
0x155: GOTO 0x157

0x156: Stack[-1] = (bool) 1
0x157: Call2 0x1140

0x158: Pop(2)
0x159: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x15a: Return(); Pop(0)

0x15b: PushEmpty()
0x15c: Push((int) 1)
0x15d: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x15e: PushEmpty()
0x15f: Call2 0x115a

0x160: Pop(0)
0x161: Push((int) 38471)
0x162: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x164: PushEmpty(object, object)
0x165: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x166: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x167: Call2 0x120c

0x168: Pop(2)
0x169: Push((int) 38466)
0x16a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16c: PushEmpty(object, object)
0x16d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16f: Call2 0x120c

0x170: Pop(2)
0x171: Push((int) 38472)
0x172: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x174: PushEmpty(object, object)
0x175: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x176: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x177: Call2 0x120c

0x178: Pop(2)
0x179: Push((int) 38469)
0x17a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(object, object)
0x17d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17f: Call2 0x120c

0x180: Pop(2)
0x181: Push((int) 38470)
0x182: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: PushEmpty(object, object)
0x185: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x186: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x187: Call2 0x120c

0x188: Pop(2)
0x189: Push((int) 45464)
0x18a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x18c: PushEmpty(bool, object)
0x18d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18e: Call2 0x1229

0x18f: Pop(1)
0x190: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral"
0x193: Call2 0x145

0x194: Pop(1)
0x195: Push((int) 543012)
0x196: @@ SetMessage(Stack[-1])
0x197: Pop(1)
0x198: @@ ClearReplies()
0x199: Pop(0)
0x19a: Push((int) 536643)
0x19b: Push((int) -1)
0x19c: Push((int) 38471)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: PushEmpty(bool, object)
0x1a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a1: Call2 0x123f

0x1a2: Pop(1)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a4: Push((int) 543014)
0x1a5: Push((int) -1)
0x1a6: Push((int) 45466)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Call2 0x123f

0x1ac: Pop(1)
0x1ad: Pop(1); Push((bool) Stack[-1] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1af: Push((int) 543027)
0x1b0: Push((int) -1)
0x1b1: Push((int) 45479)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Push((int) 536852)
0x1b5: Push((int) -1)
0x1b6: Push((int) 38688)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral"
0x1bc: Call2 0x145

0x1bd: Pop(1)
0x1be: Push((int) 536636)
0x1bf: @@ SetMessage(Stack[-1])
0x1c0: Pop(1)
0x1c1: @@ ClearReplies()
0x1c2: Pop(0)
0x1c3: PushEmpty(bool)
0x1c4: Stack[-1] = (bool) 0
0x1c5: PushEmpty(bool, object)
0x1c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Call2 0x1211

0x1c8: Pop(1)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1ca: PushEmpty(bool, object)
0x1cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cc: Call2 0x1235

0x1cd: Pop(1)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: Stack[-1] = (bool) 1
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: Push((int) 536638)
0x1d2: Push((int) -1)
0x1d3: Push((int) 38466)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: PushEmpty(bool)
0x1d7: Stack[-1] = (bool) 0
0x1d8: PushEmpty(bool, object)
0x1d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Call2 0x1211

0x1db: Pop(1)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1dd: PushEmpty(bool, object)
0x1de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Call2 0x1235

0x1e0: Pop(1)
0x1e1: Pop(1); Push((bool) Stack[-1] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: Stack[-1] = (bool) 1
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e5: Push((int) 536644)
0x1e6: Push((int) -1)
0x1e7: Push((int) 38472)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: PushEmpty(bool)
0x1eb: Stack[-1] = (bool) 0
0x1ec: PushEmpty(bool, object)
0x1ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ee: Call2 0x121d

0x1ef: Pop(1)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f1: PushEmpty(bool, object)
0x1f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f3: Call2 0x1235

0x1f4: Pop(1)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Stack[-1] = (bool) 1
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f8: Push((int) 536639)
0x1f9: Push((int) 38468)
0x1fa: Push((int) 38467)
0x1fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(3)
0x1fd: PushEmpty(bool)
0x1fe: Stack[-1] = (bool) 0
0x1ff: PushEmpty(bool, object)
0x200: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x201: Call2 0x121d

0x202: Pop(1)
0x203: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x204: PushEmpty(bool, object)
0x205: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x206: Call2 0x1235

0x207: Pop(1)
0x208: Pop(1); Push((bool) Stack[-1] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Stack[-1] = (bool) 1
0x20b: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20c: Push((int) 536642)
0x20d: Push((int) -1)
0x20e: Push((int) 38470)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: PushEmpty(bool)
0x212: Stack[-1] = (bool) 0
0x213: PushEmpty(bool, object)
0x214: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x215: Call2 0x123f

0x216: Pop(1)
0x217: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x218: PushEmpty(bool, object)
0x219: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21a: Call2 0x1211

0x21b: Pop(1)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: Stack[-1] = (bool) 1
0x21e: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21f: Push((int) 536645)
0x220: Push((int) 38474)
0x221: Push((int) 38473)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: PushEmpty(bool, object)
0x225: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x226: Call2 0x1211

0x227: Pop(1)
0x228: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x229: Push((int) 536850)
0x22a: Push((int) -1)
0x22b: Push((int) 38686)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: PushEmpty(bool, object)
0x22f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x230: Call2 0x121d

0x231: Pop(1)
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: Push((int) 536851)
0x234: Push((int) -1)
0x235: Push((int) 38687)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: Return(); Pop(0)

0x239: Push((int) 38680)
0x23a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23c: Push((int) 38682)
0x23d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x23f: PushEmpty(string)
0x240: Stack[-1] = "Neutral"
0x241: Call2 0x145

0x242: Pop(1)
0x243: Push((int) 536846)
0x244: @@ SetMessage(Stack[-1])
0x245: Pop(1)
0x246: @@ ClearReplies()
0x247: Pop(0)
0x248: Push((int) 536847)
0x249: Push((int) -1)
0x24a: Push((int) 38683)
0x24b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(3)
0x24d: Push((int) 536848)
0x24e: Push((int) -1)
0x24f: Push((int) 38684)
0x250: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x251: Pop(3)
0x252: Return(); Pop(0)

0x253: Push((int) 38670)
0x254: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x256: Push((int) 38672)
0x257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Neutral"
0x25b: Call2 0x145

0x25c: Pop(1)
0x25d: Push((int) 536836)
0x25e: @@ SetMessage(Stack[-1])
0x25f: Pop(1)
0x260: @@ ClearReplies()
0x261: Pop(0)
0x262: Push((int) 536837)
0x263: Push((int) 38674)
0x264: Push((int) 38673)
0x265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: Push((int) 536841)
0x268: Push((int) -1)
0x269: Push((int) 38677)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Return(); Pop(0)

0x26d: Push((int) 38674)
0x26e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x270: PushEmpty(string)
0x271: Stack[-1] = "Neutral"
0x272: Call2 0x145

0x273: Pop(1)
0x274: Push((int) 536838)
0x275: @@ SetMessage(Stack[-1])
0x276: Pop(1)
0x277: @@ ClearReplies()
0x278: Pop(0)
0x279: Push((int) 536839)
0x27a: Push((int) -1)
0x27b: Push((int) 38675)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: Push((int) 536840)
0x27f: Push((int) -1)
0x280: Push((int) 38676)
0x281: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x282: Pop(3)
0x283: Return(); Pop(0)

0x284: Push((int) 38651)
0x285: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x287: Push((int) 38660)
0x288: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x28a: PushEmpty(string)
0x28b: Stack[-1] = "Neutral"
0x28c: Call2 0x145

0x28d: Pop(1)
0x28e: Push((int) 536824)
0x28f: @@ SetMessage(Stack[-1])
0x290: Pop(1)
0x291: @@ ClearReplies()
0x292: Pop(0)
0x293: Push((int) 536825)
0x294: Push((int) 38662)
0x295: Push((int) 38661)
0x296: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x297: Pop(3)
0x298: Push((int) 536830)
0x299: Push((int) -1)
0x29a: Push((int) 38666)
0x29b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29c: Pop(3)
0x29d: Push((int) 536831)
0x29e: Push((int) -1)
0x29f: Push((int) 38667)
0x2a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a1: Pop(3)
0x2a2: Return(); Pop(0)

0x2a3: Push((int) 38662)
0x2a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a6: PushEmpty(string)
0x2a7: Stack[-1] = "Neutral"
0x2a8: Call2 0x145

0x2a9: Pop(1)
0x2aa: Push((int) 536826)
0x2ab: @@ SetMessage(Stack[-1])
0x2ac: Pop(1)
0x2ad: @@ ClearReplies()
0x2ae: Pop(0)
0x2af: Push((int) 536827)
0x2b0: Push((int) 38664)
0x2b1: Push((int) 38663)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Return(); Pop(0)

0x2b5: Push((int) 38664)
0x2b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2b8: PushEmpty(string)
0x2b9: Stack[-1] = "Neutral"
0x2ba: Call2 0x145

0x2bb: Pop(1)
0x2bc: Push((int) 536828)
0x2bd: @@ SetMessage(Stack[-1])
0x2be: Pop(1)
0x2bf: @@ ClearReplies()
0x2c0: Pop(0)
0x2c1: Push((int) 536829)
0x2c2: Push((int) -1)
0x2c3: Push((int) 38665)
0x2c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(3)
0x2c6: Return(); Pop(0)

0x2c7: Push((int) 38653)
0x2c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "Neutral"
0x2cc: Call2 0x145

0x2cd: Pop(1)
0x2ce: Push((int) 536817)
0x2cf: @@ SetMessage(Stack[-1])
0x2d0: Pop(1)
0x2d1: @@ ClearReplies()
0x2d2: Pop(0)
0x2d3: Push((int) 536818)
0x2d4: Push((int) 38655)
0x2d5: Push((int) 38654)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: Push((int) 536822)
0x2d9: Push((int) -1)
0x2da: Push((int) 38658)
0x2db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(3)
0x2dd: Return(); Pop(0)

0x2de: Push((int) 38655)
0x2df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2e1: PushEmpty(string)
0x2e2: Stack[-1] = "Neutral"
0x2e3: Call2 0x145

0x2e4: Pop(1)
0x2e5: Push((int) 536819)
0x2e6: @@ SetMessage(Stack[-1])
0x2e7: Pop(1)
0x2e8: @@ ClearReplies()
0x2e9: Pop(0)
0x2ea: Push((int) 536820)
0x2eb: Push((int) -1)
0x2ec: Push((int) 38656)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: Push((int) 536821)
0x2f0: Push((int) -1)
0x2f1: Push((int) 38657)
0x2f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: Return(); Pop(0)

0x2f5: Push((int) 38627)
0x2f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f8: Push((int) 38642)
0x2f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x2fb: PushEmpty(string)
0x2fc: Stack[-1] = "Neutral"
0x2fd: Call2 0x145

0x2fe: Pop(1)
0x2ff: Push((int) 536807)
0x300: @@ SetMessage(Stack[-1])
0x301: Pop(1)
0x302: @@ ClearReplies()
0x303: Pop(0)
0x304: Push((int) 536808)
0x305: Push((int) 38644)
0x306: Push((int) 38643)
0x307: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x308: Pop(3)
0x309: Push((int) 536812)
0x30a: Push((int) 38644)
0x30b: Push((int) 38647)
0x30c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(3)
0x30e: Return(); Pop(0)

0x30f: Push((int) 38644)
0x310: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x312: PushEmpty(string)
0x313: Stack[-1] = "Neutral"
0x314: Call2 0x145

0x315: Pop(1)
0x316: Push((int) 536809)
0x317: @@ SetMessage(Stack[-1])
0x318: Pop(1)
0x319: @@ ClearReplies()
0x31a: Pop(0)
0x31b: Push((int) 536810)
0x31c: Push((int) -1)
0x31d: Push((int) 38645)
0x31e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31f: Pop(3)
0x320: Push((int) 536811)
0x321: Push((int) -1)
0x322: Push((int) 38646)
0x323: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: Return(); Pop(0)

0x326: Push((int) 38629)
0x327: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x329: PushEmpty(string)
0x32a: Stack[-1] = "Neutral"
0x32b: Call2 0x145

0x32c: Pop(1)
0x32d: Push((int) 536795)
0x32e: @@ SetMessage(Stack[-1])
0x32f: Pop(1)
0x330: @@ ClearReplies()
0x331: Pop(0)
0x332: Push((int) 536796)
0x333: Push((int) 38631)
0x334: Push((int) 38630)
0x335: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(3)
0x337: Push((int) 536805)
0x338: Push((int) -1)
0x339: Push((int) 38640)
0x33a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(3)
0x33c: Return(); Pop(0)

0x33d: Push((int) 38631)
0x33e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x340: PushEmpty(string)
0x341: Stack[-1] = "Neutral"
0x342: Call2 0x145

0x343: Pop(1)
0x344: Push((int) 536797)
0x345: @@ SetMessage(Stack[-1])
0x346: Pop(1)
0x347: @@ ClearReplies()
0x348: Pop(0)
0x349: Push((int) 536798)
0x34a: Push((int) 38633)
0x34b: Push((int) 38632)
0x34c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34d: Pop(3)
0x34e: Push((int) 536804)
0x34f: Push((int) -1)
0x350: Push((int) 38639)
0x351: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x352: Pop(3)
0x353: Return(); Pop(0)

0x354: Push((int) 38633)
0x355: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x357: PushEmpty(string)
0x358: Stack[-1] = "Neutral"
0x359: Call2 0x145

0x35a: Pop(1)
0x35b: Push((int) 536799)
0x35c: @@ SetMessage(Stack[-1])
0x35d: Pop(1)
0x35e: @@ ClearReplies()
0x35f: Pop(0)
0x360: Push((int) 536800)
0x361: Push((int) 38635)
0x362: Push((int) 38634)
0x363: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x364: Pop(3)
0x365: Push((int) 536803)
0x366: Push((int) 38635)
0x367: Push((int) 38637)
0x368: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: Return(); Pop(0)

0x36b: Push((int) 38635)
0x36c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x36e: PushEmpty(string)
0x36f: Stack[-1] = "Neutral"
0x370: Call2 0x145

0x371: Pop(1)
0x372: Push((int) 536801)
0x373: @@ SetMessage(Stack[-1])
0x374: Pop(1)
0x375: @@ ClearReplies()
0x376: Pop(0)
0x377: Push((int) 536802)
0x378: Push((int) -1)
0x379: Push((int) 38636)
0x37a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(3)
0x37c: Return(); Pop(0)

0x37d: Push((int) 38617)
0x37e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x380: Push((int) 38619)
0x381: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x383: PushEmpty(string)
0x384: Stack[-1] = "Neutral"
0x385: Call2 0x145

0x386: Pop(1)
0x387: Push((int) 536785)
0x388: @@ SetMessage(Stack[-1])
0x389: Pop(1)
0x38a: @@ ClearReplies()
0x38b: Pop(0)
0x38c: Push((int) 536786)
0x38d: Push((int) 38621)
0x38e: Push((int) 38620)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: Push((int) 536790)
0x392: Push((int) -1)
0x393: Push((int) 38624)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Return(); Pop(0)

0x397: Push((int) 38621)
0x398: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x39a: PushEmpty(string)
0x39b: Stack[-1] = "Neutral"
0x39c: Call2 0x145

0x39d: Pop(1)
0x39e: Push((int) 536787)
0x39f: @@ SetMessage(Stack[-1])
0x3a0: Pop(1)
0x3a1: @@ ClearReplies()
0x3a2: Pop(0)
0x3a3: PushEmpty(bool, object)
0x3a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a5: Call2 0x1211

0x3a6: Pop(1)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a8: Push((int) 536788)
0x3a9: Push((int) -1)
0x3aa: Push((int) 38622)
0x3ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: Push((int) 536789)
0x3ae: Push((int) -1)
0x3af: Push((int) 38623)
0x3b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b1: Pop(3)
0x3b2: Return(); Pop(0)

0x3b3: Push((int) 38602)
0x3b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b6: Push((int) 38604)
0x3b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3b9: PushEmpty(string)
0x3ba: Stack[-1] = "Neutral"
0x3bb: Call2 0x145

0x3bc: Pop(1)
0x3bd: Push((int) 536772)
0x3be: @@ SetMessage(Stack[-1])
0x3bf: Pop(1)
0x3c0: @@ ClearReplies()
0x3c1: Pop(0)
0x3c2: Push((int) 536773)
0x3c3: Push((int) 38606)
0x3c4: Push((int) 38605)
0x3c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c6: Pop(3)
0x3c7: Push((int) 536780)
0x3c8: Push((int) 38606)
0x3c9: Push((int) 38613)
0x3ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cb: Pop(3)
0x3cc: Return(); Pop(0)

0x3cd: Push((int) 38606)
0x3ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d0: PushEmpty(string)
0x3d1: Stack[-1] = "Neutral"
0x3d2: Call2 0x145

0x3d3: Pop(1)
0x3d4: Push((int) 536774)
0x3d5: @@ SetMessage(Stack[-1])
0x3d6: Pop(1)
0x3d7: @@ ClearReplies()
0x3d8: Pop(0)
0x3d9: Push((int) 536775)
0x3da: Push((int) 38608)
0x3db: Push((int) 38607)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: Push((int) 536779)
0x3df: Push((int) 38608)
0x3e0: Push((int) 38611)
0x3e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(3)
0x3e3: Return(); Pop(0)

0x3e4: Push((int) 38608)
0x3e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3e7: PushEmpty(string)
0x3e8: Stack[-1] = "Neutral"
0x3e9: Call2 0x145

0x3ea: Pop(1)
0x3eb: Push((int) 536776)
0x3ec: @@ SetMessage(Stack[-1])
0x3ed: Pop(1)
0x3ee: @@ ClearReplies()
0x3ef: Pop(0)
0x3f0: Push((int) 536777)
0x3f1: Push((int) -1)
0x3f2: Push((int) 38609)
0x3f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f4: Pop(3)
0x3f5: Push((int) 536778)
0x3f6: Push((int) -1)
0x3f7: Push((int) 38610)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: Push((int) 38579)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fe: Push((int) 38593)
0x3ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x401: PushEmpty(string)
0x402: Stack[-1] = "Neutral"
0x403: Call2 0x145

0x404: Pop(1)
0x405: Push((int) 536762)
0x406: @@ SetMessage(Stack[-1])
0x407: Pop(1)
0x408: @@ ClearReplies()
0x409: Pop(0)
0x40a: Push((int) 536763)
0x40b: Push((int) 38595)
0x40c: Push((int) 38594)
0x40d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40e: Pop(3)
0x40f: Push((int) 536767)
0x410: Push((int) 38595)
0x411: Push((int) 38598)
0x412: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x413: Pop(3)
0x414: Return(); Pop(0)

0x415: Push((int) 38595)
0x416: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x417: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x418: PushEmpty(string)
0x419: Stack[-1] = "Neutral"
0x41a: Call2 0x145

0x41b: Pop(1)
0x41c: Push((int) 536764)
0x41d: @@ SetMessage(Stack[-1])
0x41e: Pop(1)
0x41f: @@ ClearReplies()
0x420: Pop(0)
0x421: Push((int) 536765)
0x422: Push((int) -1)
0x423: Push((int) 38596)
0x424: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x425: Pop(3)
0x426: Push((int) 536766)
0x427: Push((int) -1)
0x428: Push((int) 38597)
0x429: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42a: Pop(3)
0x42b: Return(); Pop(0)

0x42c: Push((int) 38581)
0x42d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x42f: PushEmpty(string)
0x430: Stack[-1] = "Neutral"
0x431: Call2 0x145

0x432: Pop(1)
0x433: Push((int) 536750)
0x434: @@ SetMessage(Stack[-1])
0x435: Pop(1)
0x436: @@ ClearReplies()
0x437: Pop(0)
0x438: Push((int) 536751)
0x439: Push((int) 38583)
0x43a: Push((int) 38582)
0x43b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43c: Pop(3)
0x43d: Push((int) 536760)
0x43e: Push((int) -1)
0x43f: Push((int) 38591)
0x440: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x441: Pop(3)
0x442: Return(); Pop(0)

0x443: Push((int) 38583)
0x444: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x446: PushEmpty(string)
0x447: Stack[-1] = "Neutral"
0x448: Call2 0x145

0x449: Pop(1)
0x44a: Push((int) 536752)
0x44b: @@ SetMessage(Stack[-1])
0x44c: Pop(1)
0x44d: @@ ClearReplies()
0x44e: Pop(0)
0x44f: Push((int) 536753)
0x450: Push((int) 38585)
0x451: Push((int) 38584)
0x452: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x453: Pop(3)
0x454: Return(); Pop(0)

0x455: Push((int) 38585)
0x456: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x457: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x458: PushEmpty(string)
0x459: Stack[-1] = "Neutral"
0x45a: Call2 0x145

0x45b: Pop(1)
0x45c: Push((int) 536754)
0x45d: @@ SetMessage(Stack[-1])
0x45e: Pop(1)
0x45f: @@ ClearReplies()
0x460: Pop(0)
0x461: Push((int) 536755)
0x462: Push((int) 38587)
0x463: Push((int) 38586)
0x464: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x465: Pop(3)
0x466: Push((int) 536759)
0x467: Push((int) -1)
0x468: Push((int) 38590)
0x469: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46a: Pop(3)
0x46b: Return(); Pop(0)

0x46c: Push((int) 38587)
0x46d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46e: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x46f: PushEmpty(string)
0x470: Stack[-1] = "Neutral"
0x471: Call2 0x145

0x472: Pop(1)
0x473: Push((int) 536756)
0x474: @@ SetMessage(Stack[-1])
0x475: Pop(1)
0x476: @@ ClearReplies()
0x477: Pop(0)
0x478: Push((int) 536757)
0x479: Push((int) -1)
0x47a: Push((int) 38588)
0x47b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47c: Pop(3)
0x47d: Push((int) 536758)
0x47e: Push((int) -1)
0x47f: Push((int) 38589)
0x480: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x481: Pop(3)
0x482: Return(); Pop(0)

0x483: Push((int) 38542)
0x484: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x485: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x486: Push((int) 38562)
0x487: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x489: PushEmpty(string)
0x48a: Stack[-1] = "Neutral"
0x48b: Call2 0x145

0x48c: Pop(1)
0x48d: Push((int) 536731)
0x48e: @@ SetMessage(Stack[-1])
0x48f: Pop(1)
0x490: @@ ClearReplies()
0x491: Pop(0)
0x492: Push((int) 536732)
0x493: Push((int) 38564)
0x494: Push((int) 38563)
0x495: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x496: Pop(3)
0x497: Push((int) 536745)
0x498: Push((int) -1)
0x499: Push((int) 38576)
0x49a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49b: Pop(3)
0x49c: Return(); Pop(0)

0x49d: Push((int) 38564)
0x49e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4a0: PushEmpty(string)
0x4a1: Stack[-1] = "Neutral"
0x4a2: Call2 0x145

0x4a3: Pop(1)
0x4a4: Push((int) 536733)
0x4a5: @@ SetMessage(Stack[-1])
0x4a6: Pop(1)
0x4a7: @@ ClearReplies()
0x4a8: Pop(0)
0x4a9: Push((int) 536734)
0x4aa: Push((int) 38566)
0x4ab: Push((int) 38565)
0x4ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ad: Pop(3)
0x4ae: Push((int) 536744)
0x4af: Push((int) -1)
0x4b0: Push((int) 38575)
0x4b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b2: Pop(3)
0x4b3: Return(); Pop(0)

0x4b4: Push((int) 38566)
0x4b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4b7: PushEmpty(string)
0x4b8: Stack[-1] = "Neutral"
0x4b9: Call2 0x145

0x4ba: Pop(1)
0x4bb: Push((int) 536735)
0x4bc: @@ SetMessage(Stack[-1])
0x4bd: Pop(1)
0x4be: @@ ClearReplies()
0x4bf: Pop(0)
0x4c0: Push((int) 536736)
0x4c1: Push((int) -1)
0x4c2: Push((int) 38567)
0x4c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c4: Pop(3)
0x4c5: Push((int) 536737)
0x4c6: Push((int) 38569)
0x4c7: Push((int) 38568)
0x4c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c9: Pop(3)
0x4ca: Return(); Pop(0)

0x4cb: Push((int) 38569)
0x4cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4ce: PushEmpty(string)
0x4cf: Stack[-1] = "Neutral"
0x4d0: Call2 0x145

0x4d1: Pop(1)
0x4d2: Push((int) 536738)
0x4d3: @@ SetMessage(Stack[-1])
0x4d4: Pop(1)
0x4d5: @@ ClearReplies()
0x4d6: Pop(0)
0x4d7: Push((int) 536739)
0x4d8: Push((int) 38571)
0x4d9: Push((int) 38570)
0x4da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4db: Pop(3)
0x4dc: Push((int) 536743)
0x4dd: Push((int) -1)
0x4de: Push((int) 38574)
0x4df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e0: Pop(3)
0x4e1: Return(); Pop(0)

0x4e2: Push((int) 38571)
0x4e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4e5: PushEmpty(string)
0x4e6: Stack[-1] = "Neutral"
0x4e7: Call2 0x145

0x4e8: Pop(1)
0x4e9: Push((int) 536740)
0x4ea: @@ SetMessage(Stack[-1])
0x4eb: Pop(1)
0x4ec: @@ ClearReplies()
0x4ed: Pop(0)
0x4ee: Push((int) 536741)
0x4ef: Push((int) -1)
0x4f0: Push((int) 38572)
0x4f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f2: Pop(3)
0x4f3: Push((int) 536742)
0x4f4: Push((int) -1)
0x4f5: Push((int) 38573)
0x4f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f7: Pop(3)
0x4f8: Return(); Pop(0)

0x4f9: Push((int) 38544)
0x4fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x4fc: PushEmpty(string)
0x4fd: Stack[-1] = "Neutral"
0x4fe: Call2 0x145

0x4ff: Pop(1)
0x500: Push((int) 536713)
0x501: @@ SetMessage(Stack[-1])
0x502: Pop(1)
0x503: @@ ClearReplies()
0x504: Pop(0)
0x505: Push((int) 536714)
0x506: Push((int) 38546)
0x507: Push((int) 38545)
0x508: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x509: Pop(3)
0x50a: Push((int) 536729)
0x50b: Push((int) -1)
0x50c: Push((int) 38560)
0x50d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50e: Pop(3)
0x50f: Return(); Pop(0)

0x510: Push((int) 38546)
0x511: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x513: PushEmpty(string)
0x514: Stack[-1] = "Neutral"
0x515: Call2 0x145

0x516: Pop(1)
0x517: Push((int) 536715)
0x518: @@ SetMessage(Stack[-1])
0x519: Pop(1)
0x51a: @@ ClearReplies()
0x51b: Pop(0)
0x51c: Push((int) 536716)
0x51d: Push((int) 38548)
0x51e: Push((int) 38547)
0x51f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x520: Pop(3)
0x521: Push((int) 536726)
0x522: Push((int) 38558)
0x523: Push((int) 38557)
0x524: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x525: Pop(3)
0x526: Return(); Pop(0)

0x527: Push((int) 38558)
0x528: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x52a: PushEmpty(string)
0x52b: Stack[-1] = "Neutral"
0x52c: Call2 0x145

0x52d: Pop(1)
0x52e: Push((int) 536727)
0x52f: @@ SetMessage(Stack[-1])
0x530: Pop(1)
0x531: @@ ClearReplies()
0x532: Pop(0)
0x533: Push((int) 536728)
0x534: Push((int) -1)
0x535: Push((int) 38559)
0x536: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x537: Pop(3)
0x538: Return(); Pop(0)

0x539: Push((int) 38548)
0x53a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x53c: PushEmpty(string)
0x53d: Stack[-1] = "Neutral"
0x53e: Call2 0x145

0x53f: Pop(1)
0x540: Push((int) 536717)
0x541: @@ SetMessage(Stack[-1])
0x542: Pop(1)
0x543: @@ ClearReplies()
0x544: Pop(0)
0x545: Push((int) 536718)
0x546: Push((int) 38550)
0x547: Push((int) 38549)
0x548: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x549: Pop(3)
0x54a: Return(); Pop(0)

0x54b: Push((int) 38550)
0x54c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54d: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x54e: PushEmpty(string)
0x54f: Stack[-1] = "Neutral"
0x550: Call2 0x145

0x551: Pop(1)
0x552: Push((int) 536719)
0x553: @@ SetMessage(Stack[-1])
0x554: Pop(1)
0x555: @@ ClearReplies()
0x556: Pop(0)
0x557: Push((int) 536720)
0x558: Push((int) 38552)
0x559: Push((int) 38551)
0x55a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55b: Pop(3)
0x55c: Push((int) 536723)
0x55d: Push((int) 38555)
0x55e: Push((int) 38554)
0x55f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x560: Pop(3)
0x561: Return(); Pop(0)

0x562: Push((int) 38555)
0x563: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x564: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x565: PushEmpty(string)
0x566: Stack[-1] = "Neutral"
0x567: Call2 0x145

0x568: Pop(1)
0x569: Push((int) 536724)
0x56a: @@ SetMessage(Stack[-1])
0x56b: Pop(1)
0x56c: @@ ClearReplies()
0x56d: Pop(0)
0x56e: Push((int) 536725)
0x56f: Push((int) -1)
0x570: Push((int) 38556)
0x571: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x572: Pop(3)
0x573: Return(); Pop(0)

0x574: Push((int) 38552)
0x575: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x576: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x577: PushEmpty(string)
0x578: Stack[-1] = "Neutral"
0x579: Call2 0x145

0x57a: Pop(1)
0x57b: Push((int) 536721)
0x57c: @@ SetMessage(Stack[-1])
0x57d: Pop(1)
0x57e: @@ ClearReplies()
0x57f: Pop(0)
0x580: Push((int) 536722)
0x581: Push((int) -1)
0x582: Push((int) 38553)
0x583: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x584: Pop(3)
0x585: Return(); Pop(0)

0x586: Push((int) 38517)
0x587: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x589: Push((int) 38531)
0x58a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58b: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x58c: PushEmpty(string)
0x58d: Stack[-1] = "Neutral"
0x58e: Call2 0x145

0x58f: Pop(1)
0x590: Push((int) 536700)
0x591: @@ SetMessage(Stack[-1])
0x592: Pop(1)
0x593: @@ ClearReplies()
0x594: Pop(0)
0x595: Push((int) 536701)
0x596: Push((int) 38533)
0x597: Push((int) 38532)
0x598: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x599: Pop(3)
0x59a: PushEmpty(bool, object)
0x59b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59c: Call2 0x1211

0x59d: Pop(1)
0x59e: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x59f: Push((int) 536705)
0x5a0: Push((int) 38537)
0x5a1: Push((int) 38536)
0x5a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a3: Pop(3)
0x5a4: Return(); Pop(0)

0x5a5: Push((int) 38537)
0x5a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a7: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5a8: PushEmpty(string)
0x5a9: Stack[-1] = "Neutral"
0x5aa: Call2 0x145

0x5ab: Pop(1)
0x5ac: Push((int) 536706)
0x5ad: @@ SetMessage(Stack[-1])
0x5ae: Pop(1)
0x5af: @@ ClearReplies()
0x5b0: Pop(0)
0x5b1: Push((int) 536707)
0x5b2: Push((int) -1)
0x5b3: Push((int) 38538)
0x5b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b5: Pop(3)
0x5b6: Push((int) 536708)
0x5b7: Push((int) -1)
0x5b8: Push((int) 38539)
0x5b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ba: Pop(3)
0x5bb: Return(); Pop(0)

0x5bc: Push((int) 38533)
0x5bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5bf: PushEmpty(string)
0x5c0: Stack[-1] = "Neutral"
0x5c1: Call2 0x145

0x5c2: Pop(1)
0x5c3: Push((int) 536702)
0x5c4: @@ SetMessage(Stack[-1])
0x5c5: Pop(1)
0x5c6: @@ ClearReplies()
0x5c7: Pop(0)
0x5c8: PushEmpty(bool, object)
0x5c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ca: Call2 0x1211

0x5cb: Pop(1)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5cd: Push((int) 536703)
0x5ce: Push((int) -1)
0x5cf: Push((int) 38534)
0x5d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d1: Pop(3)
0x5d2: Push((int) 536704)
0x5d3: Push((int) -1)
0x5d4: Push((int) 38535)
0x5d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d6: Pop(3)
0x5d7: Return(); Pop(0)

0x5d8: Push((int) 38519)
0x5d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5db: PushEmpty(string)
0x5dc: Stack[-1] = "Neutral"
0x5dd: Call2 0x145

0x5de: Pop(1)
0x5df: Push((int) 536688)
0x5e0: @@ SetMessage(Stack[-1])
0x5e1: Pop(1)
0x5e2: @@ ClearReplies()
0x5e3: Pop(0)
0x5e4: Push((int) 536689)
0x5e5: Push((int) 38521)
0x5e6: Push((int) 38520)
0x5e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e8: Pop(3)
0x5e9: Push((int) 536695)
0x5ea: Push((int) 38527)
0x5eb: Push((int) 38526)
0x5ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ed: Pop(3)
0x5ee: Return(); Pop(0)

0x5ef: Push((int) 38527)
0x5f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x5f2: PushEmpty(string)
0x5f3: Stack[-1] = "Neutral"
0x5f4: Call2 0x145

0x5f5: Pop(1)
0x5f6: Push((int) 536696)
0x5f7: @@ SetMessage(Stack[-1])
0x5f8: Pop(1)
0x5f9: @@ ClearReplies()
0x5fa: Pop(0)
0x5fb: Push((int) 536697)
0x5fc: Push((int) -1)
0x5fd: Push((int) 38528)
0x5fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ff: Pop(3)
0x600: Push((int) 536698)
0x601: Push((int) -1)
0x602: Push((int) 38529)
0x603: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x604: Pop(3)
0x605: Return(); Pop(0)

0x606: Push((int) 38521)
0x607: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x608: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x609: PushEmpty(string)
0x60a: Stack[-1] = "Neutral"
0x60b: Call2 0x145

0x60c: Pop(1)
0x60d: Push((int) 536690)
0x60e: @@ SetMessage(Stack[-1])
0x60f: Pop(1)
0x610: @@ ClearReplies()
0x611: Pop(0)
0x612: Push((int) 536691)
0x613: Push((int) -1)
0x614: Push((int) 38522)
0x615: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x616: Pop(3)
0x617: Push((int) 536692)
0x618: Push((int) 38524)
0x619: Push((int) 38523)
0x61a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61b: Pop(3)
0x61c: Return(); Pop(0)

0x61d: Push((int) 38524)
0x61e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61f: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x620: PushEmpty(string)
0x621: Stack[-1] = "Neutral"
0x622: Call2 0x145

0x623: Pop(1)
0x624: Push((int) 536693)
0x625: @@ SetMessage(Stack[-1])
0x626: Pop(1)
0x627: @@ ClearReplies()
0x628: Pop(0)
0x629: Push((int) 536694)
0x62a: Push((int) -1)
0x62b: Push((int) 38525)
0x62c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62d: Pop(3)
0x62e: Return(); Pop(0)

0x62f: Push((int) 38493)
0x630: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x632: Push((int) 38507)
0x633: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x635: PushEmpty(string)
0x636: Stack[-1] = "Neutral"
0x637: Call2 0x145

0x638: Pop(1)
0x639: Push((int) 536676)
0x63a: @@ SetMessage(Stack[-1])
0x63b: Pop(1)
0x63c: @@ ClearReplies()
0x63d: Pop(0)
0x63e: Push((int) 536677)
0x63f: Push((int) 38509)
0x640: Push((int) 38508)
0x641: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x642: Pop(3)
0x643: Return(); Pop(0)

0x644: Push((int) 38509)
0x645: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x647: PushEmpty(string)
0x648: Stack[-1] = "Neutral"
0x649: Call2 0x145

0x64a: Pop(1)
0x64b: Push((int) 536678)
0x64c: @@ SetMessage(Stack[-1])
0x64d: Pop(1)
0x64e: @@ ClearReplies()
0x64f: Pop(0)
0x650: Push((int) 536679)
0x651: Push((int) 38511)
0x652: Push((int) 38510)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Push((int) 536683)
0x656: Push((int) -1)
0x657: Push((int) 38514)
0x658: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x659: Pop(3)
0x65a: Return(); Pop(0)

0x65b: Push((int) 38511)
0x65c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65d: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x65e: PushEmpty(string)
0x65f: Stack[-1] = "Neutral"
0x660: Call2 0x145

0x661: Pop(1)
0x662: Push((int) 536680)
0x663: @@ SetMessage(Stack[-1])
0x664: Pop(1)
0x665: @@ ClearReplies()
0x666: Pop(0)
0x667: Push((int) 536681)
0x668: Push((int) -1)
0x669: Push((int) 38512)
0x66a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66b: Pop(3)
0x66c: Push((int) 536682)
0x66d: Push((int) -1)
0x66e: Push((int) 38513)
0x66f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x670: Pop(3)
0x671: Return(); Pop(0)

0x672: Push((int) 38495)
0x673: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x675: PushEmpty(string)
0x676: Stack[-1] = "Neutral"
0x677: Call2 0x145

0x678: Pop(1)
0x679: Push((int) 536666)
0x67a: @@ SetMessage(Stack[-1])
0x67b: Pop(1)
0x67c: @@ ClearReplies()
0x67d: Pop(0)
0x67e: Push((int) 536667)
0x67f: Push((int) 38497)
0x680: Push((int) 38496)
0x681: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x682: Pop(3)
0x683: Push((int) 536674)
0x684: Push((int) 38499)
0x685: Push((int) 38504)
0x686: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x687: Pop(3)
0x688: Return(); Pop(0)

0x689: Push((int) 38497)
0x68a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68b: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x68c: PushEmpty(string)
0x68d: Stack[-1] = "Neutral"
0x68e: Call2 0x145

0x68f: Pop(1)
0x690: Push((int) 536668)
0x691: @@ SetMessage(Stack[-1])
0x692: Pop(1)
0x693: @@ ClearReplies()
0x694: Pop(0)
0x695: Push((int) 536669)
0x696: Push((int) 38499)
0x697: Push((int) 38498)
0x698: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x699: Pop(3)
0x69a: Push((int) 536673)
0x69b: Push((int) 38499)
0x69c: Push((int) 38502)
0x69d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69e: Pop(3)
0x69f: Return(); Pop(0)

0x6a0: Push((int) 38499)
0x6a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6a3: PushEmpty(string)
0x6a4: Stack[-1] = "Neutral"
0x6a5: Call2 0x145

0x6a6: Pop(1)
0x6a7: Push((int) 536670)
0x6a8: @@ SetMessage(Stack[-1])
0x6a9: Pop(1)
0x6aa: @@ ClearReplies()
0x6ab: Pop(0)
0x6ac: Push((int) 536671)
0x6ad: Push((int) -1)
0x6ae: Push((int) 38500)
0x6af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b0: Pop(3)
0x6b1: Push((int) 536672)
0x6b2: Push((int) -1)
0x6b3: Push((int) 38501)
0x6b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b5: Pop(3)
0x6b6: Return(); Pop(0)

0x6b7: Push((int) 38474)
0x6b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6ba: PushEmpty(string)
0x6bb: Stack[-1] = "Neutral"
0x6bc: Call2 0x145

0x6bd: Pop(1)
0x6be: Push((int) 536646)
0x6bf: @@ SetMessage(Stack[-1])
0x6c0: Pop(1)
0x6c1: @@ ClearReplies()
0x6c2: Pop(0)
0x6c3: Push((int) 536647)
0x6c4: Push((int) 38476)
0x6c5: Push((int) 38475)
0x6c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c7: Pop(3)
0x6c8: Push((int) 536653)
0x6c9: Push((int) 38482)
0x6ca: Push((int) 38481)
0x6cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cc: Pop(3)
0x6cd: Push((int) 536662)
0x6ce: Push((int) -1)
0x6cf: Push((int) 38491)
0x6d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d1: Pop(3)
0x6d2: Return(); Pop(0)

0x6d3: Push((int) 38482)
0x6d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6d6: PushEmpty(string)
0x6d7: Stack[-1] = "Neutral"
0x6d8: Call2 0x145

0x6d9: Pop(1)
0x6da: Push((int) 536654)
0x6db: @@ SetMessage(Stack[-1])
0x6dc: Pop(1)
0x6dd: @@ ClearReplies()
0x6de: Pop(0)
0x6df: Push((int) 536655)
0x6e0: Push((int) 38484)
0x6e1: Push((int) 38483)
0x6e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e3: Pop(3)
0x6e4: Push((int) 536659)
0x6e5: Push((int) 38488)
0x6e6: Push((int) 38487)
0x6e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e8: Pop(3)
0x6e9: Return(); Pop(0)

0x6ea: Push((int) 38488)
0x6eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ec: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6ed: PushEmpty(string)
0x6ee: Stack[-1] = "Neutral"
0x6ef: Call2 0x145

0x6f0: Pop(1)
0x6f1: Push((int) 536660)
0x6f2: @@ SetMessage(Stack[-1])
0x6f3: Pop(1)
0x6f4: @@ ClearReplies()
0x6f5: Pop(0)
0x6f6: Push((int) 536661)
0x6f7: Push((int) 38484)
0x6f8: Push((int) 38489)
0x6f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fa: Pop(3)
0x6fb: Return(); Pop(0)

0x6fc: Push((int) 38484)
0x6fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x6ff: PushEmpty(string)
0x700: Stack[-1] = "Neutral"
0x701: Call2 0x145

0x702: Pop(1)
0x703: Push((int) 536656)
0x704: @@ SetMessage(Stack[-1])
0x705: Pop(1)
0x706: @@ ClearReplies()
0x707: Pop(0)
0x708: Push((int) 536657)
0x709: Push((int) -1)
0x70a: Push((int) 38485)
0x70b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70c: Pop(3)
0x70d: Push((int) 536658)
0x70e: Push((int) -1)
0x70f: Push((int) 38486)
0x710: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x711: Pop(3)
0x712: Return(); Pop(0)

0x713: Push((int) 38476)
0x714: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x716: PushEmpty(string)
0x717: Stack[-1] = "Neutral"
0x718: Call2 0x145

0x719: Pop(1)
0x71a: Push((int) 536648)
0x71b: @@ SetMessage(Stack[-1])
0x71c: Pop(1)
0x71d: @@ ClearReplies()
0x71e: Pop(0)
0x71f: Push((int) 536649)
0x720: Push((int) 38478)
0x721: Push((int) 38477)
0x722: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x723: Pop(3)
0x724: Push((int) 536652)
0x725: Push((int) -1)
0x726: Push((int) 38480)
0x727: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x728: Pop(3)
0x729: Return(); Pop(0)

0x72a: Push((int) 38478)
0x72b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72c: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x72d: PushEmpty(string)
0x72e: Stack[-1] = "Neutral"
0x72f: Call2 0x145

0x730: Pop(1)
0x731: Push((int) 536650)
0x732: @@ SetMessage(Stack[-1])
0x733: Pop(1)
0x734: @@ ClearReplies()
0x735: Pop(0)
0x736: Push((int) 536651)
0x737: Push((int) -1)
0x738: Push((int) 38479)
0x739: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73a: Pop(3)
0x73b: Return(); Pop(0)

0x73c: Push((int) 38468)
0x73d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73e: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x73f: PushEmpty(string)
0x740: Stack[-1] = "Neutral"
0x741: Call2 0x145

0x742: Pop(1)
0x743: Push((int) 536640)
0x744: @@ SetMessage(Stack[-1])
0x745: Pop(1)
0x746: @@ ClearReplies()
0x747: Pop(0)
0x748: Push((int) 536641)
0x749: Push((int) -1)
0x74a: Push((int) 38469)
0x74b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(3)
0x74d: Return(); Pop(0)

0x74e: Push((int) 45487)
0x74f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x751: Push((int) 45480)
0x752: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x753: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x754: Push((int) 45483)
0x755: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x756: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x757: PushEmpty(string)
0x758: Stack[-1] = "Neutral"
0x759: Call2 0x145

0x75a: Pop(1)
0x75b: Push((int) 543031)
0x75c: @@ SetMessage(Stack[-1])
0x75d: Pop(1)
0x75e: @@ ClearReplies()
0x75f: Pop(0)
0x760: Push((int) 543032)
0x761: Push((int) -1)
0x762: Push((int) 45484)
0x763: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x764: Pop(3)
0x765: Push((int) 543033)
0x766: Push((int) -1)
0x767: Push((int) 45485)
0x768: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x769: Pop(3)
0x76a: Return(); Pop(0)

0x76b: Push((int) 45475)
0x76c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76d: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76e: Push((int) 45468)
0x76f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x770: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x771: Push((int) 45471)
0x772: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x773: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x774: PushEmpty(string)
0x775: Stack[-1] = "Neutral"
0x776: Call2 0x145

0x777: Pop(1)
0x778: Push((int) 543019)
0x779: @@ SetMessage(Stack[-1])
0x77a: Pop(1)
0x77b: @@ ClearReplies()
0x77c: Pop(0)
0x77d: Push((int) 543020)
0x77e: Push((int) -1)
0x77f: Push((int) 45472)
0x780: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x781: Pop(3)
0x782: Push((int) 543021)
0x783: Push((int) -1)
0x784: Push((int) 45473)
0x785: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x786: Pop(3)
0x787: Return(); Pop(0)

0x788: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x789: PushEmpty(bool)
0x78a: Call2 0x14c7

0x78b: Pop(0)
0x78c: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78d: @ lshStopAnimation()
0x78e: Pop(0)
0x78f: GOTO 0x792

0x790: @ StopAnimation()
0x791: Pop(0)
0x792: Return(); Pop(0)

0x793: GOTO 0x15c

0x794: Return(); Pop(0)

0x795: PushEmpty()
0x796: EventDisable(0)
0x797: PushEmpty(object)
0x798: Stack[-1] = Stack[-2]
0x799: Call2 0x7b6

0x79a: Pop(1)
0x79b: PushEmpty(object)
0x79c: Stack[-1] = Stack[-2]
0x79d: Call2 0x1507

0x79e: Pop(1)
0x79f: EventEnable(0)
0x7a0: @ Hold()
0x7a1: Pop(0)
0x7a2: GOTO 0x7a0

0x7a3: Return(); Pop(0)

0x7a4: PushEmpty(int, int)
0x7a5: PushEmpty(int, object)
0x7a6: Stack[-1] = Stack[-5]
0x7a7: Call2 0x1491

0x7a8: Stack[-3] = Stack[-2]
0x7a9: Pop(2)
0x7aa: Push((int) 0)
0x7ab: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7ad: PushEmpty(object)
0x7ae: Stack[-1] = Stack[-4]
0x7af: Call2 0x1494

0x7b0: Pop(1)
0x7b1: Return(); Pop(2)

0x7b2: PushEmpty()
0x7b3: Call2 0x149a

0x7b4: Pop(0)
0x7b5: Return(); Pop(0)

0x7b6: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x7b7: Pop(0); Push((bool) Stack[-21] == 0)
0x7b8: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7b9: PushEmpty(string)
0x7ba: Stack[-1] = "fdie"
0x7bb: Call2 0x811

0x7bc: Pop(1)
0x7bd: GOTO 0x810

0x7be: @@ GetPosition(Stack[-10])
0x7bf: Pop(0)
0x7c0: @ GetPosition(Stack[-9])
0x7c1: Pop(0)
0x7c2: @ GetDirection(Stack[-8])
0x7c3: Pop(0)
0x7c4: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x7c5: Push(CvectorIndex(Stack[-7], 0))
0x7c6: Push(CvectorIndex(Stack[-9], 0))
0x7c7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7c8: Push(CvectorIndex(Stack[-8], 2))
0x7c9: Push(CvectorIndex(Stack[-10], 2))
0x7ca: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7cb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7cc: Push((int) 0)
0x7cd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d1; Pop(1)

0x7cf: Stack[-6] = "fdie"
0x7d0: GOTO 0x7d2

0x7d1: Stack[-6] = "bdie"
0x7d2: @ RemoveRTEnvelope()
0x7d3: Pop(0)
0x7d4: @ SetDeathState()
0x7d5: Pop(0)
0x7d6: @ Stop()
0x7d7: Pop(0)
0x7d8: @ StopAsync()
0x7d9: Pop(0)
0x7da: Stack[-5] = Stack[-21]
0x7db: Push("GetScriptProperty")
0x7dc: Push((int) 2)
0x7dd: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x7de: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7df: Push("Owner")
0x7e0: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x7e1: Pop(1)
0x7e2: Push(Stack[-4])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e4: Push("Owner")
0x7e5: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x7e6: Pop(1)
0x7e7: Pop(0); Push((bool) Stack[-5] == 0)
0x7e8: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e9: Stack[-5] = Stack[-21]
0x7ea: Push("@GetEyesHeight")
0x7eb: Push((int) 1)
0x7ec: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7ee: @@ GetEyesHeight(Stack[-2])
0x7ef: Pop(0)
0x7f0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x7f1: Push(CvectorIndex(Stack[-1], 1))
0x7f2: Stack[-1] = Stack[-3]
0x7f3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7f4: Push("head")
0x7f5: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x7f6: Pop(1)
0x7f7: Stack[-3] = (bool) 1
0x7f8: GOTO 0x7fa

0x7f9: Stack[-3] = (bool) 0
0x7fa: PushEmpty(string)
0x7fb: Stack[-1] = Stack[-7]
0x7fc: Call2 0x116c

0x7fd: Pop(1)
0x7fe: Push("all")
0x7ff: @ PlayAnimation(Stack[-1], Stack[-7])
0x800: Pop(1)
0x801: @ WaitForAnimEnd()
0x802: Pop(0)
0x803: Push(Stack[-3])
0x804: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x805: @ StopAsync()
0x806: Pop(0)
0x807: Push("head")
0x808: @ UnlookAsync(Stack[-1])
0x809: Pop(1)
0x80a: Push("all")
0x80b: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x80c: Pop(1)
0x80d: @ RemoveEnvelope()
0x80e: Pop(0)
0x80f: Stack[-5] = 0
0x810: Return(); Pop(20)

0x811: PushEmpty()
0x812: @ RemoveRTEnvelope()
0x813: Pop(0)
0x814: @ SetDeathState()
0x815: Pop(0)
0x816: @ Stop()
0x817: Pop(0)
0x818: @ StopAsync()
0x819: Pop(0)
0x81a: @ StopSecondaryAnimation()
0x81b: Pop(0)
0x81c: PushEmpty(string)
0x81d: Stack[-1] = Stack[-2]
0x81e: Call2 0x116c

0x81f: Pop(1)
0x820: Push("all")
0x821: @ PlayAnimation(Stack[-1], Stack[-2])
0x822: Pop(1)
0x823: @ WaitForAnimEnd()
0x824: Pop(0)
0x825: Push("all")
0x826: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x827: Pop(1)
0x828: @ RemoveEnvelope()
0x829: Pop(0)
0x82a: Return(); Pop(0)

0x82b: PushEmpty()
0x82c: Return(); Pop(0)

0x82d: PushEmpty()
0x82e: Return(); Pop(0)

0x82f: PushEmpty()
0x830: Return(); Pop(0)

0x831: Push((bool) 1)
0x832: @ SensePlayerOnly(Stack[-1])
0x833: Pop(1)
0x834: PushEmpty()
0x835: Call2 0x14c9

0x836: Pop(0)
0x837: PushEmpty()
0x838: Call2 0x840

0x839: Pop(0)
0x83a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x83b: PushEmpty()
0x83c: Call2 0x945

0x83d: Pop(0)
0x83e: GOTO 0x83a

0x83f: Return(); Pop(0)

0x840: PushEmpty(bool)
0x841: Call2 0x109b

0x842: Pop(0)
0x843: Pop(1); Push((bool) Stack[-1] == 0)
0x844: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x845: PushEmpty()
0x846: Call2 0x149a

0x847: Pop(0)
0x848: Return(); Pop(0)

0x849: PushEmpty(int, int)
0x84a: PushEmpty(int, object)
0x84b: Stack[-1] = Stack[-5]
0x84c: Call2 0x1491

0x84d: Stack[-3] = Stack[-2]
0x84e: Pop(2)
0x84f: Push((int) 0)
0x850: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x851: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x852: Push((int) 1)
0x853: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x854: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x855: PushEmpty()
0x856: Call2 0x904

0x857: Pop(0)
0x858: PushEmpty(object)
0x859: Stack[-1] = Stack[-4]
0x85a: Call2 0x1494

0x85b: Pop(1)
0x85c: Return(); Pop(2)

0x85d: PushEmpty(int, int)
0x85e: PushEmpty(object)
0x85f: Stack[-1] = Stack[-4]
0x860: Call2 0x1384

0x861: Pop(1)
0x862: PushEmpty(int, object)
0x863: Stack[-1] = Stack[-5]
0x864: Call2 0x13d7

0x865: Stack[-3] = Stack[-2]
0x866: Pop(2)
0x867: Push((int) 0)
0x868: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x869: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x86a: Push((int) 1)
0x86b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x86c: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x86d: PushEmpty()
0x86e: Call2 0x904

0x86f: Pop(0)
0x870: PushEmpty(object)
0x871: Stack[-1] = Stack[-4]
0x872: Call2 0x13e1

0x873: Pop(1)
0x874: Return(); Pop(2)

0x875: PushEmpty(int, int)
0x876: PushEmpty(bool, object, object, bool)
0x877: Stack[-3] = Stack[-9]
0x878: Stack[-2] = Stack[-8]
0x879: Stack[-1] = Stack[-7]
0x87a: Call2 0x14fd

0x87b: Pop(3)
0x87c: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x87d: PushEmpty(int, object, bool)
0x87e: Stack[-2] = Stack[-8]
0x87f: Stack[-1] = Stack[-6]
0x880: Call2 0x1434

0x881: Stack[-4] = Stack[-3]
0x882: Pop(3)
0x883: Push((int) 0)
0x884: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x885: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x886: Push((int) 1)
0x887: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x888: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x889: PushEmpty()
0x88a: Call2 0x904

0x88b: Pop(0)
0x88c: PushEmpty(object)
0x88d: Stack[-1] = Stack[-6]
0x88e: Call2 0x143b

0x88f: Pop(1)
0x890: Return(); Pop(2)

0x891: PushEmpty(int, int)
0x892: PushEmpty(int, object)
0x893: Stack[-1] = Stack[-5]
0x894: Call2 0x145e

0x895: Stack[-3] = Stack[-2]
0x896: Pop(2)
0x897: Push((int) 0)
0x898: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x899: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x89a: Push((int) 1)
0x89b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x89c: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x89d: PushEmpty()
0x89e: Call2 0x904

0x89f: Pop(0)
0x8a0: PushEmpty(object)
0x8a1: Stack[-1] = Stack[-4]
0x8a2: Call2 0x1461

0x8a3: Pop(1)
0x8a4: Return(); Pop(2)

0x8a5: PushEmpty(int, int)
0x8a6: PushEmpty(bool, object, string)
0x8a7: Stack[-2] = Stack[-7]
0x8a8: Stack[-1] = Stack[-6]
0x8a9: Call2 0x132e

0x8aa: Pop(2)
0x8ab: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8ac: PushEmpty()
0x8ad: Call2 0x904

0x8ae: Pop(0)
0x8af: PushEmpty(object, string)
0x8b0: Stack[-2] = Stack[-6]
0x8b1: Stack[-1] = Stack[-5]
0x8b2: Call2 0x134e

0x8b3: Pop(2)
0x8b4: GOTO 0x8c9

0x8b5: PushEmpty(int, string, object)
0x8b6: Stack[-2] = Stack[-6]
0x8b7: Stack[-1] = Stack[-7]
0x8b8: Call2 0x1463

0x8b9: Stack[-4] = Stack[-3]
0x8ba: Pop(3)
0x8bb: Push((int) 0)
0x8bc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8be: Push((int) 1)
0x8bf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8c0: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8c1: PushEmpty()
0x8c2: Call2 0x904

0x8c3: Pop(0)
0x8c4: PushEmpty(string, object)
0x8c5: Stack[-2] = Stack[-5]
0x8c6: Stack[-1] = Stack[-6]
0x8c7: Call2 0x146f

0x8c8: Pop(2)
0x8c9: Return(); Pop(2)

0x8ca: PushEmpty()
0x8cb: PushEmpty(bool, string)
0x8cc: Stack[-1] = Stack[-3]
0x8cd: Call2 0x1391

0x8ce: Pop(1)
0x8cf: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8d0: PushEmpty()
0x8d1: Call2 0x904

0x8d2: Pop(0)
0x8d3: PushEmpty(string)
0x8d4: Stack[-1] = Stack[-2]
0x8d5: Call2 0x13a1

0x8d6: Pop(1)
0x8d7: Return(); Pop(0)

0x8d8: PushEmpty()
0x8d9: PushEmpty(bool, object)
0x8da: Stack[-1] = Stack[-3]
0x8db: Call2 0x1367

0x8dc: Pop(1)
0x8dd: IF (Stack[-1] == 0) GOTO 0x8e6; Pop(1)

0x8de: PushEmpty()
0x8df: Call2 0x904

0x8e0: Pop(0)
0x8e1: PushEmpty(object)
0x8e2: Stack[-1] = Stack[-2]
0x8e3: Call2 0x137e

0x8e4: Pop(1)
0x8e5: GOTO 0x8ea

0x8e6: PushEmpty(object)
0x8e7: Stack[-1] = Stack[-2]
0x8e8: Call2 0x91d

0x8e9: Pop(1)
0x8ea: Return(); Pop(0)

0x8eb: PushEmpty()
0x8ec: PushEmpty(object)
0x8ed: Stack[-1] = Stack[-2]
0x8ee: Call2 0x91d

0x8ef: Pop(1)
0x8f0: Return(); Pop(0)

0x8f1: PushEmpty()
0x8f2: Push((int) 110)
0x8f3: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x8f4: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8f5: Return(); Pop(0)

0x8f6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8f7: Push((int) 110)
0x8f8: @ KillTimer(Stack[-1])
0x8f9: Pop(1)
0x8fa: @ ResetAAS()
0x8fb: Pop(0)
0x8fc: Return(); Pop(0)

0x8fd: PushEmpty()
0x8fe: Call2 0x904

0x8ff: Pop(0)
0x900: PushEmpty()
0x901: Call2 0x149a

0x902: Pop(0)
0x903: Return(); Pop(0)

0x904: Push((int) 110)
0x905: @ KillTimer(Stack[-1])
0x906: Pop(1)
0x907: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x908: PushEmpty()
0x909: Call2 0x98c

0x90a: Pop(0)
0x90b: Return(); Pop(0)

0x90c: Push((int) 110)
0x90d: @ KillTimer(Stack[-1])
0x90e: Pop(1)
0x90f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x910: PushEmpty()
0x911: Call2 0x993

0x912: Pop(0)
0x913: Return(); Pop(0)

0x914: PushEmpty()
0x915: PushEmpty()
0x916: Call2 0x904

0x917: Pop(0)
0x918: PushEmpty(object)
0x919: Stack[-1] = Stack[-2]
0x91a: Call2 0x1316

0x91b: Pop(1)
0x91c: Return(); Pop(0)

0x91d: PushEmpty(bool, int, bool, int)
0x91e: PushEmpty(bool, object)
0x91f: Stack[-1] = Stack[-7]
0x920: Call2 0xffa

0x921: Pop(1)
0x922: Pop(1); Push((bool) Stack[-1] == 0)
0x923: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x924: Return(); Pop(4)

0x925: Push( Stack[2 + Tasks[-1].StackPointer] )
0x926: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x927: Return(); Pop(4)

0x928: @ IsPlayerActor(Stack[-5], Stack[-2])
0x929: Pop(0)
0x92a: Pop(0); Push((bool) Stack[-2] == 0)
0x92b: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x92c: Return(); Pop(4)

0x92d: PushEmpty(int, object)
0x92e: Stack[-1] = Stack[-7]
0x92f: Call2 0x13c6

0x930: Stack[-3] = Stack[-2]
0x931: Pop(2)
0x932: Push((int) 0)
0x933: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x935: Push((int) 1)
0x936: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x937: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x938: PushEmpty()
0x939: Call2 0x90c

0x93a: Pop(0)
0x93b: PushEmpty(object)
0x93c: Stack[-1] = Stack[-6]
0x93d: Call2 0x13cf

0x93e: Pop(1)
0x93f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x940: Push((int) 110)
0x941: Push((float)10.0)
0x942: @ SetTimer(Stack[-2], Stack[-1])
0x943: Pop(2)
0x944: Return(); Pop(4)

0x945: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x946: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x947: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x948: Push((float)0.5)
0x949: @ rand(Stack[-7], Stack[-1])
0x94a: Pop(1)
0x94b: @ Sleep(Stack[-6])
0x94c: Pop(0)
0x94d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x94e: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x94f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x950: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x951: @ GetPosition(Stack[-4])
0x952: Pop(0)
0x953: PushEmpty(float)
0x954: Call2 0x980

0x955: Pop(0)
0x956: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x957: Pop(1)
0x958: Push(Stack[-3])
0x959: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x95a: GOTO 0x95f

0x95b: Push((int) 1)
0x95c: @ Sleep(Stack[-1])
0x95d: Pop(1)
0x95e: GOTO 0x951

0x95f: GOTO 0x961

0x960: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x961: PushEmpty(object, cvector)
0x962: Stack[-1] = Stack[-7]
0x963: Call2 0x99c

0x964: Stack[-4] = Stack[-2]
0x965: Pop(2)
0x966: Pop(0); Push(( Stack[-2] != 0 )
0x967: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x968: @ RotatePath(Stack[-2], Stack[-1])
0x969: Pop(0)
0x96a: Push(Stack[-1])
0x96b: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x96c: PushEmpty(bool)
0x96d: Call2 0x99a

0x96e: Pop(0)
0x96f: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x970: Pop(1)
0x971: Stack[-2] = 0
0x972: Push(Stack[-1])
0x973: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x974: PushEmpty()
0x975: Push(-0, 0); TaskCall(5)
0x976: Call2 0xa46

0x977: Pop(-0, 0); TaskReturn
0x978: Pop(0)
0x979: GOTO 0x97d

0x97a: Push((int) 1)
0x97b: @ Sleep(Stack[-1])
0x97c: Pop(1)
0x97d: Stack[-2] = 0
0x97e: GOTO 0x94d

0x97f: Return(); Pop(12)

0x980: PushEmpty(float, float)
0x981: @ GetCameraFarDistance(Stack[-1])
0x982: Pop(0)
0x983: Stack[-3] = Stack[-1]
0x984: Return(); Pop(2)

0x985: PushEmpty()
0x986: @ RequestClearPath(Stack[-1])
0x987: Pop(0)
0x988: Return(); Pop(0)

0x989: @ Stop()
0x98a: Pop(0)
0x98b: Return(); Pop(0)

0x98c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x98d: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x98e: @ Stop()
0x98f: Pop(0)
0x990: @ StopGroup0()
0x991: Pop(0)
0x992: Return(); Pop(0)

0x993: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x994: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x995: @ Stop()
0x996: Pop(0)
0x997: @ StopGroup0()
0x998: Pop(0)
0x999: Return(); Pop(0)

0x99a: Stack[-1] = (bool) 0
0x99b: Return(); Pop(0)

0x99c: PushEmpty(object, object)
0x99d: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x99e: Pop(0)
0x99f: Stack[-4] = Stack[-1]
0x9a0: Return(); Pop(2)

0x9a1: Stack[-1] = 0
0x9a2: PushEmpty(int, int)
0x9a3: PushEmpty(int, object)
0x9a4: Stack[-1] = Stack[-5]
0x9a5: Call2 0x1491

0x9a6: Stack[-3] = Stack[-2]
0x9a7: Pop(2)
0x9a8: Push((int) 0)
0x9a9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9ab: Push((int) 1)
0x9ac: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ad: IF (Stack[-1] == 0) GOTO 0x9b1; Pop(1)

0x9ae: PushEmpty()
0x9af: Call2 0xa97

0x9b0: Pop(0)
0x9b1: PushEmpty(object)
0x9b2: Stack[-1] = Stack[-4]
0x9b3: Call2 0x1494

0x9b4: Pop(1)
0x9b5: Return(); Pop(2)

0x9b6: PushEmpty(int, int)
0x9b7: PushEmpty(object)
0x9b8: Stack[-1] = Stack[-4]
0x9b9: Call2 0x1384

0x9ba: Pop(1)
0x9bb: PushEmpty(int, object)
0x9bc: Stack[-1] = Stack[-5]
0x9bd: Call2 0x13d7

0x9be: Stack[-3] = Stack[-2]
0x9bf: Pop(2)
0x9c0: Push((int) 0)
0x9c1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9c2: IF (Stack[-1] == 0) GOTO 0x9cd; Pop(1)

0x9c3: Push((int) 1)
0x9c4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9c5: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c6: PushEmpty()
0x9c7: Call2 0xa97

0x9c8: Pop(0)
0x9c9: PushEmpty(object)
0x9ca: Stack[-1] = Stack[-4]
0x9cb: Call2 0x13e1

0x9cc: Pop(1)
0x9cd: Return(); Pop(2)

0x9ce: PushEmpty(int, int)
0x9cf: PushEmpty(bool, object, object, bool)
0x9d0: Stack[-3] = Stack[-9]
0x9d1: Stack[-2] = Stack[-8]
0x9d2: Stack[-1] = Stack[-7]
0x9d3: Call2 0x14fd

0x9d4: Pop(3)
0x9d5: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9d6: PushEmpty(int, object, bool)
0x9d7: Stack[-2] = Stack[-8]
0x9d8: Stack[-1] = Stack[-6]
0x9d9: Call2 0x1434

0x9da: Stack[-4] = Stack[-3]
0x9db: Pop(3)
0x9dc: Push((int) 0)
0x9dd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9de: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9df: Push((int) 1)
0x9e0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9e1: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9e2: PushEmpty()
0x9e3: Call2 0xa97

0x9e4: Pop(0)
0x9e5: PushEmpty(object)
0x9e6: Stack[-1] = Stack[-6]
0x9e7: Call2 0x143b

0x9e8: Pop(1)
0x9e9: Return(); Pop(2)

0x9ea: PushEmpty(int, int)
0x9eb: PushEmpty(int, object)
0x9ec: Stack[-1] = Stack[-5]
0x9ed: Call2 0x145e

0x9ee: Stack[-3] = Stack[-2]
0x9ef: Pop(2)
0x9f0: Push((int) 0)
0x9f1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9f2: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9f3: Push((int) 1)
0x9f4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9f5: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f6: PushEmpty()
0x9f7: Call2 0xa97

0x9f8: Pop(0)
0x9f9: PushEmpty(object)
0x9fa: Stack[-1] = Stack[-4]
0x9fb: Call2 0x1461

0x9fc: Pop(1)
0x9fd: Return(); Pop(2)

0x9fe: PushEmpty(int, int)
0x9ff: PushEmpty(bool, object, string)
0xa00: Stack[-2] = Stack[-7]
0xa01: Stack[-1] = Stack[-6]
0xa02: Call2 0x132e

0xa03: Pop(2)
0xa04: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa05: PushEmpty()
0xa06: Call2 0xa97

0xa07: Pop(0)
0xa08: PushEmpty(object, string)
0xa09: Stack[-2] = Stack[-6]
0xa0a: Stack[-1] = Stack[-5]
0xa0b: Call2 0x134e

0xa0c: Pop(2)
0xa0d: GOTO 0xa22

0xa0e: PushEmpty(int, string, object)
0xa0f: Stack[-2] = Stack[-6]
0xa10: Stack[-1] = Stack[-7]
0xa11: Call2 0x1463

0xa12: Stack[-4] = Stack[-3]
0xa13: Pop(3)
0xa14: Push((int) 0)
0xa15: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa16: IF (Stack[-1] == 0) GOTO 0xa22; Pop(1)

0xa17: Push((int) 1)
0xa18: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa19: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa1a: PushEmpty()
0xa1b: Call2 0xa97

0xa1c: Pop(0)
0xa1d: PushEmpty(string, object)
0xa1e: Stack[-2] = Stack[-5]
0xa1f: Stack[-1] = Stack[-6]
0xa20: Call2 0x146f

0xa21: Pop(2)
0xa22: Return(); Pop(2)

0xa23: PushEmpty()
0xa24: PushEmpty(bool, string)
0xa25: Stack[-1] = Stack[-3]
0xa26: Call2 0x1391

0xa27: Pop(1)
0xa28: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa29: PushEmpty()
0xa2a: Call2 0xa97

0xa2b: Pop(0)
0xa2c: PushEmpty(string)
0xa2d: Stack[-1] = Stack[-2]
0xa2e: Call2 0x13a1

0xa2f: Pop(1)
0xa30: Return(); Pop(0)

0xa31: PushEmpty()
0xa32: Call2 0xa97

0xa33: Pop(0)
0xa34: PushEmpty()
0xa35: Call2 0x149a

0xa36: Pop(0)
0xa37: Return(); Pop(0)

0xa38: PushEmpty()
0xa39: PushEmpty(bool, object)
0xa3a: Stack[-1] = Stack[-3]
0xa3b: Call2 0x1367

0xa3c: Pop(1)
0xa3d: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa3e: PushEmpty()
0xa3f: Call2 0xa97

0xa40: Pop(0)
0xa41: PushEmpty(object)
0xa42: Stack[-1] = Stack[-2]
0xa43: Call2 0x137e

0xa44: Pop(1)
0xa45: Return(); Pop(0)

0xa46: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xa47: @ WaitForAnimEnd()
0xa48: Pop(0)
0xa49: PushEmpty(bool)
0xa4a: Call2 0x109b

0xa4b: Pop(0)
0xa4c: Pop(1); Push((bool) Stack[-1] == 0)
0xa4d: IF (Stack[-1] == 0) GOTO 0xa4f; Pop(1)

0xa4e: Return(); Pop(14)

0xa4f: PushEmpty(int)
0xa50: Call2 0x13b5

0xa51: Stack[-8] = Stack[-1]
0xa52: Pop(1)
0xa53: Stack[-6] = (int) 0
0xa54: PushEmpty(bool)
0xa55: Stack[-1] = (bool) 0
0xa56: Push((int) 5)
0xa57: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xa58: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa59: PushEmpty(bool)
0xa5a: Call2 0x109b

0xa5b: Pop(0)
0xa5c: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa5d: Stack[-1] = (bool) 1
0xa5e: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa5f: Push((int) 3)
0xa60: @ irand(Stack[-6], Stack[-1])
0xa61: Pop(1)
0xa62: Push((int) 0)
0xa63: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa64: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa65: Push(Stack[-7])
0xa66: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa67: @ irand(Stack[-4], Stack[-7])
0xa68: Pop(0)
0xa69: Push("all")
0xa6a: PushEmpty(string, int)
0xa6b: Stack[-1] = Stack[-7]
0xa6c: Call2 0x13ae

0xa6d: Pop(1)
0xa6e: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6f: Pop(2)
0xa70: @ WaitForAnimEnd(Stack[-3])
0xa71: Pop(0)
0xa72: Pop(0); Push((bool) Stack[-3] == 0)
0xa73: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa74: GOTO 0xa92

0xa75: GOTO 0xa87

0xa76: Push((int) 1)
0xa77: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa78: IF (Stack[-1] == 0) GOTO 0xa84; Pop(1)

0xa79: Push((int) 4)
0xa7a: @ rand(Stack[-3], Stack[-1])
0xa7b: Pop(1)
0xa7c: Push((int) 1)
0xa7d: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa7e: @ Sleep(Stack[-1], Stack[-2])
0xa7f: Pop(1)
0xa80: Pop(0); Push((bool) Stack[-1] == 0)
0xa81: IF (Stack[-1] == 0) GOTO 0xa83; Pop(1)

0xa82: GOTO 0xa92

0xa83: GOTO 0xa87

0xa84: Push(Stack[-6])
0xa85: IF (Stack[-1] == 0) GOTO 0xa87; Pop(1)

0xa86: GOTO 0xa92

0xa87: PushEmpty(bool)
0xa88: Call2 0xa95

0xa89: Pop(0)
0xa8a: Pop(1); Push((bool) Stack[-1] == 0)
0xa8b: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa8c: GOTO 0xa92

0xa8d: @ ResetAAS()
0xa8e: Pop(0)
0xa8f: Push((int) 1)
0xa90: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xa91: GOTO 0xa54

0xa92: @ ResetAAS()
0xa93: Pop(0)
0xa94: Return(); Pop(14)

0xa95: Stack[-1] = (bool) 1
0xa96: Return(); Pop(0)

0xa97: @ StopAnimation()
0xa98: Pop(0)
0xa99: @ StopGroup0()
0xa9a: Pop(0)
0xa9b: Return(); Pop(0)

0xa9c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xa9d: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0xa9e: PushEmpty()
0xa9f: Call2 0xacf

0xaa0: Pop(0)
0xaa1: @ GetDirection(Stack[-3])
0xaa2: Pop(0)
0xaa3: PushEmpty(cvector, object)
0xaa4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaa5: Call2 0xf68

0xaa6: Stack[-4] = Stack[-2]
0xaa7: Pop(2)
0xaa8: PushEmpty(float, cvector, cvector)
0xaa9: Stack[-2] = Stack[-6]
0xaaa: Stack[-1] = Stack[-5]
0xaab: Call2 0x11cf

0xaac: Pop(2)
0xaad: Push((int) 0)
0xaae: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xaaf: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xab0: PushEmpty(object)
0xab1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab2: Call2 0x1090

0xab3: Pop(1)
0xab4: Stack[-1] = (bool) 1
0xab5: GOTO 0xab9

0xab6: Push((float)1.5)
0xab7: @ Sleep(Stack[-1], Stack[-2])
0xab8: Pop(1)
0xab9: Push(Stack[-1])
0xaba: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xabb: PushEmpty(object)
0xabc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xabd: Call2 0x1090

0xabe: Pop(1)
0xabf: Push((int) 111)
0xac0: Push((float)0.5)
0xac1: @ SetTimer(Stack[-2], Stack[-1])
0xac2: Pop(2)
0xac3: Push((float)5.0)
0xac4: @ Sleep(Stack[-1])
0xac5: Pop(1)
0xac6: Push((int) 111)
0xac7: @ KillTimer(Stack[-1])
0xac8: Pop(1)
0xac9: @ StopAsync()
0xaca: Pop(0)
0xacb: Push("head")
0xacc: @ UnlookAsync(Stack[-1])
0xacd: Pop(1)
0xace: Return(); Pop(6)

0xacf: PushEmpty(object)
0xad0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xad1: Call2 0x114f

0xad2: Pop(1)
0xad3: Return(); Pop(0)

0xad4: PushEmpty(int, int)
0xad5: PushEmpty(int, object)
0xad6: Stack[-1] = Stack[-5]
0xad7: Call2 0x1491

0xad8: Stack[-3] = Stack[-2]
0xad9: Pop(2)
0xada: Push((int) 0)
0xadb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xadc: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xadd: Push((int) 1)
0xade: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xadf: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xae0: PushEmpty()
0xae1: Call2 0xb63

0xae2: Pop(0)
0xae3: PushEmpty(object)
0xae4: Stack[-1] = Stack[-4]
0xae5: Call2 0x1494

0xae6: Pop(1)
0xae7: Return(); Pop(2)

0xae8: PushEmpty(int, int)
0xae9: PushEmpty(object)
0xaea: Stack[-1] = Stack[-4]
0xaeb: Call2 0x1384

0xaec: Pop(1)
0xaed: PushEmpty(int, object)
0xaee: Stack[-1] = Stack[-5]
0xaef: Call2 0x13d7

0xaf0: Stack[-3] = Stack[-2]
0xaf1: Pop(2)
0xaf2: Push((int) 0)
0xaf3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xaf4: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xaf5: Push((int) 1)
0xaf6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xaf7: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xaf8: PushEmpty()
0xaf9: Call2 0xb63

0xafa: Pop(0)
0xafb: PushEmpty(object)
0xafc: Stack[-1] = Stack[-4]
0xafd: Call2 0x13e1

0xafe: Pop(1)
0xaff: Return(); Pop(2)

0xb00: PushEmpty(int, int)
0xb01: PushEmpty(bool, object, object, bool)
0xb02: Stack[-3] = Stack[-9]
0xb03: Stack[-2] = Stack[-8]
0xb04: Stack[-1] = Stack[-7]
0xb05: Call2 0x14fd

0xb06: Pop(3)
0xb07: IF (Stack[-1] == 0) GOTO 0xb1b; Pop(1)

0xb08: PushEmpty(int, object, bool)
0xb09: Stack[-2] = Stack[-8]
0xb0a: Stack[-1] = Stack[-6]
0xb0b: Call2 0x1434

0xb0c: Stack[-4] = Stack[-3]
0xb0d: Pop(3)
0xb0e: Push((int) 0)
0xb0f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb10: IF (Stack[-1] == 0) GOTO 0xb1b; Pop(1)

0xb11: Push((int) 1)
0xb12: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb13: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xb14: PushEmpty()
0xb15: Call2 0xb63

0xb16: Pop(0)
0xb17: PushEmpty(object)
0xb18: Stack[-1] = Stack[-6]
0xb19: Call2 0x143b

0xb1a: Pop(1)
0xb1b: Return(); Pop(2)

0xb1c: PushEmpty(int, int)
0xb1d: PushEmpty(int, object)
0xb1e: Stack[-1] = Stack[-5]
0xb1f: Call2 0x145e

0xb20: Stack[-3] = Stack[-2]
0xb21: Pop(2)
0xb22: Push((int) 0)
0xb23: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb24: IF (Stack[-1] == 0) GOTO 0xb2f; Pop(1)

0xb25: Push((int) 1)
0xb26: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb27: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb28: PushEmpty()
0xb29: Call2 0xb63

0xb2a: Pop(0)
0xb2b: PushEmpty(object)
0xb2c: Stack[-1] = Stack[-4]
0xb2d: Call2 0x1461

0xb2e: Pop(1)
0xb2f: Return(); Pop(2)

0xb30: PushEmpty(int, int)
0xb31: PushEmpty(bool, object, string)
0xb32: Stack[-2] = Stack[-7]
0xb33: Stack[-1] = Stack[-6]
0xb34: Call2 0x132e

0xb35: Pop(2)
0xb36: IF (Stack[-1] == 0) GOTO 0xb40; Pop(1)

0xb37: PushEmpty()
0xb38: Call2 0xb63

0xb39: Pop(0)
0xb3a: PushEmpty(object, string)
0xb3b: Stack[-2] = Stack[-6]
0xb3c: Stack[-1] = Stack[-5]
0xb3d: Call2 0x134e

0xb3e: Pop(2)
0xb3f: GOTO 0xb54

0xb40: PushEmpty(int, string, object)
0xb41: Stack[-2] = Stack[-6]
0xb42: Stack[-1] = Stack[-7]
0xb43: Call2 0x1463

0xb44: Stack[-4] = Stack[-3]
0xb45: Pop(3)
0xb46: Push((int) 0)
0xb47: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb48: IF (Stack[-1] == 0) GOTO 0xb54; Pop(1)

0xb49: Push((int) 1)
0xb4a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb4b: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb4c: PushEmpty()
0xb4d: Call2 0xb63

0xb4e: Pop(0)
0xb4f: PushEmpty(string, object)
0xb50: Stack[-2] = Stack[-5]
0xb51: Stack[-1] = Stack[-6]
0xb52: Call2 0x146f

0xb53: Pop(2)
0xb54: Return(); Pop(2)

0xb55: PushEmpty()
0xb56: PushEmpty(bool, string)
0xb57: Stack[-1] = Stack[-3]
0xb58: Call2 0x1391

0xb59: Pop(1)
0xb5a: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb5b: PushEmpty()
0xb5c: Call2 0xb63

0xb5d: Pop(0)
0xb5e: PushEmpty(string)
0xb5f: Stack[-1] = Stack[-2]
0xb60: Call2 0x13a1

0xb61: Pop(1)
0xb62: Return(); Pop(0)

0xb63: @ StopGroup0()
0xb64: Pop(0)
0xb65: @ StopAsync()
0xb66: Pop(0)
0xb67: Push("head")
0xb68: @ UnlookAsync(Stack[-1])
0xb69: Pop(1)
0xb6a: Push((int) 111)
0xb6b: @ KillTimer(Stack[-1])
0xb6c: Pop(1)
0xb6d: Return(); Pop(0)

0xb6e: PushEmpty()
0xb6f: PushEmpty()
0xb70: Call2 0xb63

0xb71: Pop(0)
0xb72: PushEmpty(object)
0xb73: Stack[-1] = Stack[-2]
0xb74: Call2 0x1316

0xb75: Pop(1)
0xb76: Return(); Pop(0)

0xb77: PushEmpty(cvector, cvector, cvector, cvector)
0xb78: Push((int) 111)
0xb79: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xb7a: IF (Stack[-1] == 0) GOTO 0xb7c; Pop(1)

0xb7b: Return(); Pop(4)

0xb7c: PushEmpty(bool, object)
0xb7d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7e: Call2 0xffa

0xb7f: Pop(1)
0xb80: Pop(1); Push((bool) Stack[-1] == 0)
0xb81: IF (Stack[-1] == 0) GOTO 0xb86; Pop(1)

0xb82: PushEmpty()
0xb83: Call2 0xb63

0xb84: Pop(0)
0xb85: Return(); Pop(4)

0xb86: @ GetDirection(Stack[-2])
0xb87: Pop(0)
0xb88: PushEmpty(cvector, object)
0xb89: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8a: Call2 0xf68

0xb8b: Stack[-3] = Stack[-2]
0xb8c: Pop(2)
0xb8d: PushEmpty(float, cvector, cvector)
0xb8e: Stack[-2] = Stack[-5]
0xb8f: Stack[-1] = Stack[-4]
0xb90: Call2 0x11cf

0xb91: Pop(2)
0xb92: Push((float)0.5)
0xb93: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xb94: IF (Stack[-1] == 0) GOTO 0xb99; Pop(1)

0xb95: PushEmpty(object)
0xb96: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb97: Call2 0x1090

0xb98: Pop(1)
0xb99: Return(); Pop(4)

0xb9a: PushEmpty()
0xb9b: Call2 0xb63

0xb9c: Pop(0)
0xb9d: PushEmpty()
0xb9e: Call2 0x149a

0xb9f: Pop(0)
0xba0: Return(); Pop(0)

0xba1: PushEmpty()
0xba2: PushEmpty(bool, object)
0xba3: Stack[-1] = Stack[-3]
0xba4: Call2 0x1367

0xba5: Pop(1)
0xba6: IF (Stack[-1] == 0) GOTO 0xbae; Pop(1)

0xba7: PushEmpty()
0xba8: Call2 0xb63

0xba9: Pop(0)
0xbaa: PushEmpty(object)
0xbab: Stack[-1] = Stack[-2]
0xbac: Call2 0x137e

0xbad: Pop(1)
0xbae: Return(); Pop(0)

0xbaf: PushEmpty()
0xbb0: PushEmpty(object, bool, float)
0xbb1: Stack[-3] = Stack[-4]
0xbb2: Stack[-2] = (bool) 1
0xbb3: Stack[-1] = (float) 180.0
0xbb4: Call2 0xbbd

0xbb5: Pop(3)
0xbb6: Return(); Pop(0)

0xbb7: PushEmpty()
0xbb8: Stack[-3] = (float) 0.05
0xbb9: Return(); Pop(0)

0xbba: PushEmpty()
0xbbb: Stack[-3] = (int) 0
0xbbc: Return(); Pop(0)

0xbbd: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xbbe: PushEmpty()
0xbbf: Call2 0xca2

0xbc0: Pop(0)
0xbc1: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xbc2: Push("@GetAttackDistance")
0xbc3: Push((int) 1)
0xbc4: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xbc5: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbc6: @@ GetAttackDistance(Stack[-11])
0xbc7: Pop(0)
0xbc8: Push((int) 50)
0xbc9: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xbca: GOTO 0xbcc

0xbcb: Stack[-11] = Stack[-23]
0xbcc: Push((int) 150)
0xbcd: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xbce: IF (Stack[-1] == 0) GOTO 0xbd0; Pop(1)

0xbcf: Stack[-11] = (int) 150
0xbd0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xbd1: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xbd2: @ IsPlayerActor(Stack[-0], Stack[-8])
0xbd3: Pop(0)
0xbd4: Push(Stack[-8])
0xbd5: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbd6: Push("attack")
0xbd7: @ PlayGlobalMusic(Stack[-1])
0xbd8: Pop(1)
0xbd9: PushEmpty(object)
0xbda: Call2 0x1195

0xbdb: Pop(0)
0xbdc: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xbdd: Pop(1)
0xbde: Push(Stack[-24])
0xbdf: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbe0: Stack[-7] = (bool) 0
0xbe1: GOTO 0xbe3

0xbe2: Stack[-7] = (bool) 1
0xbe3: Push((float)400.0)
0xbe4: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xbe5: PushEmpty(bool)
0xbe6: Stack[-1] = (bool) 0
0xbe7: PushEmpty(bool, object)
0xbe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe9: Call2 0xffa

0xbea: Pop(1)
0xbeb: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbec: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xbed: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbee: Stack[-1] = (bool) 1
0xbef: IF (Stack[-1] == 0) GOTO 0xc91; Pop(1)

0xbf0: PushEmpty()
0xbf1: Call2 0xe3f

0xbf2: Pop(0)
0xbf3: @@ GetPFPosition(Stack[-10])
0xbf4: Pop(0)
0xbf5: @ GetPFPosition(Stack[-9])
0xbf6: Pop(0)
0xbf7: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xbf8: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xbf9: Pop(0); Push(Stack[-6] * Stack[-6]);
0xbfa: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xbfb: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xbfc: PushEmpty(bool, object, float, float, bool, bool)
0xbfd: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xbfe: Stack[-4] = Stack[-17]
0xbff: Stack[-3] = (float) 3000.0
0xc00: Stack[-2] = (bool) 1
0xc01: Stack[-1] = (bool) 0
0xc02: Push(-6, 3); TaskCall(8)
0xc03: Call2 0xe5a

0xc04: Pop(-6, 3); TaskReturn
0xc05: Pop(5)
0xc06: Pop(1); Push((bool) Stack[-1] == 0)
0xc07: IF (Stack[-1] == 0) GOTO 0xc09; Pop(1)

0xc08: GOTO 0xc91

0xc09: Stack[-7] = (bool) 0
0xc0a: GOTO 0xc90

0xc0b: Pop(0); Push(Stack[-23] * Stack[-23]);
0xc0c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xc0d: IF (Stack[-1] == 0) GOTO 0xc88; Pop(1)

0xc0e: @@ GetPFPosition(Stack[-3])
0xc0f: Pop(0)
0xc10: @ CanReachByPF(Stack[-2], Stack[-3])
0xc11: Pop(0)
0xc12: Pop(0); Push((bool) Stack[-2] == 0)
0xc13: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc14: PushEmpty(bool, object, float, float, bool, bool)
0xc15: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xc16: Stack[-4] = Stack[-17]
0xc17: Stack[-3] = (float) 3000.0
0xc18: Stack[-2] = (bool) 1
0xc19: Stack[-1] = (bool) 0
0xc1a: Push(-6, 3); TaskCall(8)
0xc1b: Call2 0xe5a

0xc1c: Pop(-6, 3); TaskReturn
0xc1d: Pop(5)
0xc1e: Pop(1); Push((bool) Stack[-1] == 0)
0xc1f: IF (Stack[-1] == 0) GOTO 0xc21; Pop(1)

0xc20: GOTO 0xc91

0xc21: Stack[-7] = (bool) 0
0xc22: GOTO 0xbe5

0xc23: Pop(0); Push((bool) Stack[-7] == 0)
0xc24: IF (Stack[-1] == 0) GOTO 0xc3c; Pop(1)

0xc25: PushEmpty(object)
0xc26: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc27: Call2 0x1090

0xc28: Pop(1)
0xc29: Push("all")
0xc2a: Push("attack_on")
0xc2b: @ PlayAnimation(Stack[-2], Stack[-1])
0xc2c: Pop(2)
0xc2d: @ WaitForAnimEnd()
0xc2e: Pop(0)
0xc2f: PushEmpty()
0xc30: Call2 0xe3f

0xc31: Pop(0)
0xc32: @ StopAsync()
0xc33: Pop(0)
0xc34: Stack[-7] = (bool) 1
0xc35: PushEmpty(bool, object)
0xc36: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc37: Call2 0xffa

0xc38: Pop(1)
0xc39: Pop(1); Push((bool) Stack[-1] == 0)
0xc3a: IF (Stack[-1] == 0) GOTO 0xc3c; Pop(1)

0xc3b: GOTO 0xc91

0xc3c: @ rand(Stack[-1])
0xc3d: Pop(0)
0xc3e: PushEmpty(bool)
0xc3f: Stack[-1] = (bool) 1
0xc40: Push((float)0.25)
0xc41: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xc42: IF (Stack[-1] == 0) GOTO 0xc48; Pop(1)

0xc43: PushEmpty(bool)
0xc44: Call2 0xe14

0xc45: Pop(0)
0xc46: IF (Stack[-1] == 0) GOTO 0xc48; Pop(1)

0xc47: Stack[-1] = (bool) 0
0xc48: IF (Stack[-1] == 0) GOTO 0xc59; Pop(1)

0xc49: @ Face(Stack[-0])
0xc4a: Pop(0)
0xc4b: PushEmpty()
0xc4c: Call2 0xe46

0xc4d: Pop(0)
0xc4e: Push("all")
0xc4f: Push("attack_stay")
0xc50: @ PlayAnimation(Stack[-2], Stack[-1])
0xc51: Pop(2)
0xc52: PushEmpty(bool, float)
0xc53: Stack[-1] = Stack[-25]
0xc54: Call2 0xd90

0xc55: Pop(2)
0xc56: @ StopAsync()
0xc57: Pop(0)
0xc58: GOTO 0xc87

0xc59: @ Face(Stack[-0])
0xc5a: Pop(0)
0xc5b: Push("all")
0xc5c: Push("fjump")
0xc5d: @ PlayAnimation(Stack[-2], Stack[-1])
0xc5e: Pop(2)
0xc5f: @ WaitForAnimEnd()
0xc60: Pop(0)
0xc61: PushEmpty()
0xc62: Call2 0xe3f

0xc63: Pop(0)
0xc64: Push(CVector(0.0, 0.0, 0.0))
0xc65: @ SetSpeed(Stack[-1])
0xc66: Pop(1)
0xc67: @ Stop()
0xc68: Pop(0)
0xc69: @ StopAsync()
0xc6a: Pop(0)
0xc6b: PushEmpty(bool)
0xc6c: Call2 0xe14

0xc6d: Pop(0)
0xc6e: Pop(1); Push((bool) Stack[-1] == 0)
0xc6f: IF (Stack[-1] == 0) GOTO 0xc87; Pop(1)

0xc70: PushEmpty(bool, object)
0xc71: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc72: Call2 0xffa

0xc73: Pop(1)
0xc74: Pop(1); Push((bool) Stack[-1] == 0)
0xc75: IF (Stack[-1] == 0) GOTO 0xc77; Pop(1)

0xc76: GOTO 0xc91

0xc77: @@ GetPFPosition(Stack[-10])
0xc78: Pop(0)
0xc79: @ GetPFPosition(Stack[-9])
0xc7a: Pop(0)
0xc7b: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xc7c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xc7d: Pop(0); Push(Stack[-23] * Stack[-23]);
0xc7e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xc7f: IF (Stack[-1] == 0) GOTO 0xc87; Pop(1)

0xc80: PushEmpty(bool, float)
0xc81: Stack[-1] = Stack[-25]
0xc82: Call2 0xcec

0xc83: Pop(1)
0xc84: Pop(1); Push((bool) Stack[-1] == 0)
0xc85: IF (Stack[-1] == 0) GOTO 0xc87; Pop(1)

0xc86: GOTO 0xc91

0xc87: GOTO 0xc90

0xc88: PushEmpty(bool, float)
0xc89: Stack[-1] = Stack[-25]
0xc8a: Call2 0xcec

0xc8b: Pop(1)
0xc8c: Pop(1); Push((bool) Stack[-1] == 0)
0xc8d: IF (Stack[-1] == 0) GOTO 0xc8f; Pop(1)

0xc8e: GOTO 0xc91

0xc8f: Stack[-7] = (bool) 1
0xc90: GOTO 0xbe5

0xc91: @ WaitForAnimEnd()
0xc92: Pop(0)
0xc93: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc94: IF (Stack[-1] == 0) GOTO 0xc96; Pop(1)

0xc95: Return(); Pop(22)

0xc96: Push("all")
0xc97: Push("attack_off")
0xc98: @ PlayAnimation(Stack[-2], Stack[-1])
0xc99: Pop(2)
0xc9a: @ WaitForAnimEnd()
0xc9b: Pop(0)
0xc9c: Push(Stack[-8])
0xc9d: IF (Stack[-1] == 0) GOTO 0xca1; Pop(1)

0xc9e: Push((float)2.0)
0xc9f: @ Sleep(Stack[-1])
0xca0: Pop(1)
0xca1: Return(); Pop(22)

0xca2: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0xca3: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xca4: Push("all")
0xca5: Push("attack_begin")
0xca6: Push((int) 1)
0xca7: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0xca8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xca9: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xcaa: Pop(2)
0xcab: Pop(0); Push((bool) Stack[-3] == 0)
0xcac: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xcad: GOTO 0xcb1

0xcae: Push((int) 1)
0xcaf: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xcb0: GOTO 0xca4

0xcb1: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xcb2: Push("attack")
0xcb3: Push((int) 1)
0xcb4: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xcb5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcb6: @ IsExisting3DSound(Stack[-3], Stack[-1])
0xcb7: Pop(1)
0xcb8: Pop(0); Push((bool) Stack[-2] == 0)
0xcb9: IF (Stack[-1] == 0) GOTO 0xcbb; Pop(1)

0xcba: GOTO 0xcbe

0xcbb: Push((int) 1)
0xcbc: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xcbd: GOTO 0xcb2

0xcbe: Push("all")
0xcbf: Push("bjump")
0xcc0: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0xcc1: Pop(2)
0xcc2: Push(CvectorIndex(Stack[-1], 2))
0xcc3: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0xcc4: Return(); Pop(6)

0xcc5: PushEmpty(object, float, float, object, float, float)
0xcc6: Push((float)0.9)
0xcc7: Pop(1); Push(Stack[-9] * Stack[-1]);
0xcc8: @ GetVictim(Stack[-1], Stack[-4])
0xcc9: Pop(1)
0xcca: @ ReportAttack(Stack[-0])
0xccb: Pop(0)
0xccc: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xccd: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xcce: PushEmpty(float, object, int)
0xccf: Stack[-2] = Stack[-6]
0xcd0: Stack[-1] = Stack[-10]
0xcd1: Call2 0xbb7

0xcd2: Stack[-5] = Stack[-3]
0xcd3: Pop(3)
0xcd4: PushEmpty(float, object, float, int)
0xcd5: Stack[-3] = Stack[-7]
0xcd6: Stack[-2] = Stack[-6]
0xcd7: PushEmpty(int, object, int)
0xcd8: Stack[-2] = Stack[-10]
0xcd9: Stack[-1] = Stack[-14]
0xcda: Call2 0xbba

0xcdb: Stack[-4] = Stack[-3]
0xcdc: Pop(3)
0xcdd: Call2 0xf88

0xcde: Stack[-5] = Stack[-4]
0xcdf: Pop(4)
0xce0: PushEmpty(int)
0xce1: Call2 0xe44

0xce2: Pop(0)
0xce3: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0xce4: Pop(1)
0xce5: PushEmpty(object, float)
0xce6: Stack[-2] = Stack[-5]
0xce7: Stack[-1] = Stack[-3]
0xce8: Call2 0xe4b

0xce9: Pop(2)
0xcea: Return(); Pop(6)

0xceb: Stack[-3] = 0
0xcec: PushEmpty(int, bool, int, string, int, bool, int, string)
0xced: PushEmpty()
0xcee: Call2 0xe3f

0xcef: Pop(0)
0xcf0: @ irand(Stack[-4], Stack[-1])
0xcf1: Pop(0)
0xcf2: Push((int) 1)
0xcf3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xcf4: @ Face(Stack[-0])
0xcf5: Pop(0)
0xcf6: Push((bool) 1)
0xcf7: @ SetAttackState(Stack[-1])
0xcf8: Pop(1)
0xcf9: PushEmpty()
0xcfa: Call2 0x1201

0xcfb: Pop(0)
0xcfc: Push("all")
0xcfd: Push("attack_begin")
0xcfe: Pop(1); Push(Stack[-1] + Stack[-6]);
0xcff: @ PlayAnimation(Stack[-2], Stack[-1])
0xd00: Pop(2)
0xd01: @ WaitForAnimEnd()
0xd02: Pop(0)
0xd03: PushEmpty()
0xd04: Call2 0xe1f

0xd05: Pop(0)
0xd06: PushEmpty(bool, object)
0xd07: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd08: Call2 0xffa

0xd09: Pop(1)
0xd0a: Pop(1); Push((bool) Stack[-1] == 0)
0xd0b: IF (Stack[-1] == 0) GOTO 0xd10; Pop(1)

0xd0c: @ StopAsync()
0xd0d: Pop(0)
0xd0e: Stack[-10] = (bool) 0
0xd0f: Return(); Pop(8)

0xd10: PushEmpty(float, int)
0xd11: Stack[-2] = Stack[-11]
0xd12: Stack[-1] = Stack[-6]
0xd13: Call2 0xcc5

0xd14: Pop(2)
0xd15: Push("all")
0xd16: Push("attack_middle")
0xd17: Pop(1); Push(Stack[-1] + Stack[-6]);
0xd18: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0xd19: Pop(2)
0xd1a: Push(Stack[-3])
0xd1b: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd1c: PushEmpty()
0xd1d: Call2 0x1201

0xd1e: Pop(0)
0xd1f: Push("all")
0xd20: Push("attack_middle")
0xd21: Pop(1); Push(Stack[-1] + Stack[-6]);
0xd22: @ PlayAnimation(Stack[-2], Stack[-1])
0xd23: Pop(2)
0xd24: @ WaitForAnimEnd()
0xd25: Pop(0)
0xd26: PushEmpty()
0xd27: Call2 0xe3f

0xd28: Pop(0)
0xd29: PushEmpty(bool, object)
0xd2a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2b: Call2 0xffa

0xd2c: Pop(1)
0xd2d: Pop(1); Push((bool) Stack[-1] == 0)
0xd2e: IF (Stack[-1] == 0) GOTO 0xd33; Pop(1)

0xd2f: @ StopAsync()
0xd30: Pop(0)
0xd31: Stack[-10] = (bool) 0
0xd32: Return(); Pop(8)

0xd33: PushEmpty(float, int)
0xd34: Stack[-2] = Stack[-11]
0xd35: Stack[-1] = Stack[-6]
0xd36: Call2 0xcc5

0xd37: Pop(2)
0xd38: Stack[-2] = (int) 1
0xd39: Push("attack_middle")
0xd3a: Pop(1); Push(Stack[-1] + Stack[-5]);
0xd3b: Push("_")
0xd3c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd3d: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0xd3e: Push("all")
0xd3f: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0xd40: Pop(1)
0xd41: Pop(0); Push((bool) Stack[-3] == 0)
0xd42: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd43: GOTO 0xd61

0xd44: PushEmpty()
0xd45: Call2 0x1201

0xd46: Pop(0)
0xd47: Push("all")
0xd48: @ PlayAnimation(Stack[-1], Stack[-2])
0xd49: Pop(1)
0xd4a: @ WaitForAnimEnd()
0xd4b: Pop(0)
0xd4c: PushEmpty()
0xd4d: Call2 0xe3f

0xd4e: Pop(0)
0xd4f: PushEmpty(bool, object)
0xd50: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd51: Call2 0xffa

0xd52: Pop(1)
0xd53: Pop(1); Push((bool) Stack[-1] == 0)
0xd54: IF (Stack[-1] == 0) GOTO 0xd59; Pop(1)

0xd55: @ StopAsync()
0xd56: Pop(0)
0xd57: Stack[-10] = (bool) 0
0xd58: Return(); Pop(8)

0xd59: PushEmpty(float, int)
0xd5a: Stack[-2] = Stack[-11]
0xd5b: Stack[-1] = Stack[-6]
0xd5c: Call2 0xcc5

0xd5d: Pop(2)
0xd5e: Push((int) 1)
0xd5f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd60: GOTO 0xd39

0xd61: Push((bool) 0)
0xd62: @ SetAttackState(Stack[-1])
0xd63: Pop(1)
0xd64: Push("all")
0xd65: Push("attack_end")
0xd66: Pop(1); Push(Stack[-1] + Stack[-6]);
0xd67: @ PlayAnimation(Stack[-2], Stack[-1])
0xd68: Pop(2)
0xd69: PushEmpty(bool)
0xd6a: Call2 0xe4d

0xd6b: Pop(0)
0xd6c: IF (Stack[-1] == 0) GOTO 0xd73; Pop(1)

0xd6d: PushEmpty(bool, float)
0xd6e: Stack[-1] = (float) 0.75
0xd6f: Call2 0xd75

0xd70: Pop(2)
0xd71: @ StopAsync()
0xd72: Pop(0)
0xd73: Stack[-10] = (bool) 1
0xd74: Return(); Pop(8)

0xd75: PushEmpty(float, bool, float, bool)
0xd76: @ rand(Stack[-2])
0xd77: Pop(0)
0xd78: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0xd79: IF (Stack[-1] == 0) GOTO 0xd89; Pop(1)

0xd7a: @ IsAnimationPlaying(Stack[-1])
0xd7b: Pop(0)
0xd7c: Pop(0); Push((bool) Stack[-1] == 0)
0xd7d: IF (Stack[-1] == 0) GOTO 0xd7f; Pop(1)

0xd7e: GOTO 0xd88

0xd7f: PushEmpty(bool)
0xd80: Call2 0xdd7

0xd81: Pop(0)
0xd82: IF (Stack[-1] == 0) GOTO 0xd85; Pop(1)

0xd83: Stack[-6] = (bool) 1
0xd84: Return(); Pop(4)

0xd85: @ sync()
0xd86: Pop(0)
0xd87: GOTO 0xd7a

0xd88: GOTO 0xd8e

0xd89: @ WaitForAnimEnd()
0xd8a: Pop(0)
0xd8b: PushEmpty()
0xd8c: Call2 0xe3f

0xd8d: Pop(0)
0xd8e: Stack[-6] = (bool) 0
0xd8f: Return(); Pop(4)

0xd90: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0xd91: @ IsAnimationPlaying(Stack[-5])
0xd92: Pop(0)
0xd93: Pop(0); Push((bool) Stack[-5] == 0)
0xd94: IF (Stack[-1] == 0) GOTO 0xd96; Pop(1)

0xd95: GOTO 0xdb6

0xd96: PushEmpty(bool)
0xd97: Call2 0xdd7

0xd98: Pop(0)
0xd99: IF (Stack[-1] == 0) GOTO 0xd9c; Pop(1)

0xd9a: Stack[-12] = (bool) 1
0xd9b: Return(); Pop(10)

0xd9c: PushEmpty(bool, object)
0xd9d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9e: Call2 0xffa

0xd9f: Pop(1)
0xda0: Pop(1); Push((bool) Stack[-1] == 0)
0xda1: IF (Stack[-1] == 0) GOTO 0xda4; Pop(1)

0xda2: Stack[-12] = (bool) 0
0xda3: Return(); Pop(10)

0xda4: @@ GetPFPosition(Stack[-4])
0xda5: Pop(0)
0xda6: @ GetPFPosition(Stack[-3])
0xda7: Pop(0)
0xda8: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xda9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xdaa: Pop(0); Push(Stack[-11] * Stack[-11]);
0xdab: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xdac: IF (Stack[-1] == 0) GOTO 0xdb3; Pop(1)

0xdad: PushEmpty(bool, float)
0xdae: Stack[-1] = Stack[-13]
0xdaf: Call2 0xcec

0xdb0: Pop(2)
0xdb1: Stack[-12] = (bool) 1
0xdb2: Return(); Pop(10)

0xdb3: @ sync()
0xdb4: Pop(0)
0xdb5: GOTO 0xd91

0xdb6: PushEmpty()
0xdb7: Call2 0xe3f

0xdb8: Pop(0)
0xdb9: Stack[-12] = (bool) 0
0xdba: Return(); Pop(10)

0xdbb: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0xdbc: PushEmpty(bool, object)
0xdbd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdbe: Call2 0xffa

0xdbf: Pop(1)
0xdc0: Pop(1); Push((bool) Stack[-1] == 0)
0xdc1: IF (Stack[-1] == 0) GOTO 0xdc4; Pop(1)

0xdc2: Stack[-11] = (bool) 0
0xdc3: Return(); Pop(10)

0xdc4: PushEmpty(bool)
0xdc5: Call2 0xe14

0xdc6: Pop(0)
0xdc7: IF (Stack[-1] == 0) GOTO 0xdd5; Pop(1)

0xdc8: @@ GetPFPosition(Stack[-5])
0xdc9: Pop(0)
0xdca: @ GetPFPosition(Stack[-4])
0xdcb: Pop(0)
0xdcc: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xdcd: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xdce: @@ GetAttackDistance(Stack[-1])
0xdcf: Pop(0)
0xdd0: Push((int) 50)
0xdd1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xdd2: Pop(0); Push(Stack[-1] * Stack[-1]);
0xdd3: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0xdd4: Return(); Pop(10)

0xdd5: Stack[-11] = (bool) 0
0xdd6: Return(); Pop(10)

0xdd7: PushEmpty(bool)
0xdd8: Stack[-1] = (bool) 0
0xdd9: PushEmpty(bool)
0xdda: Call2 0xdbb

0xddb: Pop(0)
0xddc: IF (Stack[-1] == 0) GOTO 0xde2; Pop(1)

0xddd: PushEmpty(bool)
0xdde: Call2 0xde7

0xddf: Pop(0)
0xde0: IF (Stack[-1] == 0) GOTO 0xde2; Pop(1)

0xde1: Stack[-1] = (bool) 1
0xde2: IF (Stack[-1] == 0) GOTO 0xde5; Pop(1)

0xde3: Stack[-1] = (bool) 1
0xde4: Return(); Pop(0)

0xde5: Stack[-1] = (bool) 0
0xde6: Return(); Pop(0)

0xde7: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0xde8: @ GetScene(Stack[-5])
0xde9: Pop(0)
0xdea: Stack[-4] = (bool) 0
0xdeb: PushEmpty(cvector, object)
0xdec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xded: Call2 0xf68

0xdee: Pop(1)
0xdef: Pop(1); Push(( -Stack[-1])
0xdf0: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0xdf1: Pop(1)
0xdf2: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0xdf3: IF (Stack[-1] == 0) GOTO 0xdf5; Pop(1)

0xdf4: GOTO 0xe11

0xdf5: @ Face(Stack[-0])
0xdf6: Pop(0)
0xdf7: Push("all")
0xdf8: Push("bjump")
0xdf9: @ PlayAnimation(Stack[-2], Stack[-1])
0xdfa: Pop(2)
0xdfb: @@ GetPFPosition(Stack[-2])
0xdfc: Pop(0)
0xdfd: @ GetPFPosition(Stack[-1])
0xdfe: Pop(0)
0xdff: @ WaitForAnimEnd()
0xe00: Pop(0)
0xe01: PushEmpty()
0xe02: Call2 0xe3f

0xe03: Pop(0)
0xe04: @ StopAsync()
0xe05: Pop(0)
0xe06: Push(CVector(0.0, 0.0, 0.0))
0xe07: @ SetSpeed(Stack[-1])
0xe08: Pop(1)
0xe09: Stack[-4] = (bool) 1
0xe0a: PushEmpty(bool)
0xe0b: Call2 0xdbb

0xe0c: Pop(0)
0xe0d: Pop(1); Push((bool) Stack[-1] == 0)
0xe0e: IF (Stack[-1] == 0) GOTO 0xe10; Pop(1)

0xe0f: GOTO 0xe11

0xe10: GOTO 0xdeb

0xe11: Stack[-11] = Stack[-4]
0xe12: Return(); Pop(10)

0xe13: Stack[-5] = 0
0xe14: PushEmpty(bool, bool)
0xe15: Push("IsAttacking")
0xe16: Push((int) 1)
0xe17: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0xe18: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xe19: @@ IsAttacking(Stack[-1])
0xe1a: Pop(0)
0xe1b: Stack[-3] = Stack[-1]
0xe1c: Return(); Pop(2)

0xe1d: Stack[-3] = (bool) 0
0xe1e: Return(); Pop(2)

0xe1f: PushEmpty(float, int, float, int)
0xe20: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xe21: IF (Stack[-1] == 0) GOTO 0xe23; Pop(1)

0xe22: Return(); Pop(4)

0xe23: Push( Stack[5 + Tasks[-1].StackPointer] )
0xe24: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xe25: Push((int) -1)
0xe26: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xe27: Push((int) 0)
0xe28: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0xe29: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xe2a: Return(); Pop(4)

0xe2b: @ rand(Stack[-2])
0xe2c: Pop(0)
0xe2d: PushEmpty(float)
0xe2e: Call2 0xe51

0xe2f: Pop(0)
0xe30: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xe31: IF (Stack[-1] == 0) GOTO 0xe3e; Pop(1)

0xe32: @ irand(Stack[-1], Stack[-2])
0xe33: Pop(0)
0xe34: Push((int) 1)
0xe35: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xe36: Push("attack")
0xe37: Pop(1); Push(Stack[-1] + Stack[-2]);
0xe38: @ Speak(Stack[-1])
0xe39: Pop(1)
0xe3a: PushEmpty(int)
0xe3b: Call2 0xe4f

0xe3c: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0xe3d: Pop(1)
0xe3e: Return(); Pop(4)

0xe3f: PushEmpty(object)
0xe40: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe41: Call2 0x11f8

0xe42: Pop(1)
0xe43: Return(); Pop(0)

0xe44: Stack[-1] = (int) 0
0xe45: Return(); Pop(0)

0xe46: PushEmpty(string)
0xe47: Stack[-1] = "attack_stay"
0xe48: Call2 0x116c

0xe49: Pop(1)
0xe4a: Return(); Pop(0)

0xe4b: PushEmpty()
0xe4c: Return(); Pop(0)

0xe4d: Stack[-1] = (bool) 1
0xe4e: Return(); Pop(0)

0xe4f: Stack[-1] = (int) 1
0xe50: Return(); Pop(0)

0xe51: Stack[-1] = (float) 0.5
0xe52: Return(); Pop(0)

0xe53: PushEmpty()
0xe54: Call2 0xe99

0xe55: Pop(0)
0xe56: PushEmpty()
0xe57: Call2 0x149a

0xe58: Pop(0)
0xe59: Return(); Pop(0)

0xe5a: PushEmpty(bool, bool, bool, bool)
0xe5b: PushEmpty(object)
0xe5c: Stack[-1] = Stack[-10]
0xe5d: Call2 0x11f8

0xe5e: Pop(1)
0xe5f: Push((int) 1)
0xe60: Push((int) 5)
0xe61: @ SetTimer(Stack[-2], Stack[-1])
0xe62: Pop(2)
0xe63: @ CanSee(Stack[-2], Stack[-9])
0xe64: Pop(0)
0xe65: Push(Stack[-2])
0xe66: IF (Stack[-1] == 0) GOTO 0xe6d; Pop(1)

0xe67: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xe68: PushEmpty(object)
0xe69: Stack[-1] = Stack[-10]
0xe6a: Call2 0x114f

0xe6b: Pop(1)
0xe6c: GOTO 0xe6e

0xe6d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xe6e: PushEmpty(bool, object)
0xe6f: Stack[-1] = Stack[-11]
0xe70: Call2 0xf77

0xe71: Pop(1)
0xe72: IF (Stack[-1] == 0) GOTO 0xe78; Pop(1)

0xe73: PushEmpty(object)
0xe74: Call2 0x1195

0xe75: Pop(0)
0xe76: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0xe77: Pop(1)
0xe78: PushEmpty(bool, object, float, float, bool, bool)
0xe79: Stack[-5] = Stack[-15]
0xe7a: Stack[-4] = Stack[-14]
0xe7b: Stack[-3] = Stack[-13]
0xe7c: Stack[-2] = Stack[-12]
0xe7d: Stack[-1] = Stack[-11]
0xe7e: Call2 0xec3

0xe7f: Stack[-7] = Stack[-6]
0xe80: Pop(6)
0xe81: Push( Stack[2 + Tasks[-1].StackPointer] )
0xe82: IF (Stack[-1] == 0) GOTO 0xe86; Pop(1)

0xe83: Push("head")
0xe84: @ UnlookAsync(Stack[-1])
0xe85: Pop(1)
0xe86: Push((int) 1)
0xe87: @ KillTimer(Stack[-1])
0xe88: Pop(1)
0xe89: Stack[-10] = Stack[-1]
0xe8a: Return(); Pop(4)

0xe8b: PushEmpty()
0xe8c: Push((int) 1)
0xe8d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8e: IF (Stack[-1] == 0) GOTO 0xe94; Pop(1)

0xe8f: PushEmpty(object)
0xe90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe91: Call2 0x11f8

0xe92: Pop(1)
0xe93: GOTO 0xe98

0xe94: PushEmpty(int)
0xe95: Stack[-1] = Stack[-2]
0xe96: Call2 0xf29

0xe97: Pop(1)
0xe98: Return(); Pop(0)

0xe99: Push((int) 1)
0xe9a: @ KillTimer(Stack[-1])
0xe9b: Pop(1)
0xe9c: Push( Stack[2 + Tasks[-1].StackPointer] )
0xe9d: IF (Stack[-1] == 0) GOTO 0xea2; Pop(1)

0xe9e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xe9f: Push("head")
0xea0: @ UnlookAsync(Stack[-1])
0xea1: Pop(1)
0xea2: PushEmpty()
0xea3: Call2 0xf3f

0xea4: Pop(0)
0xea5: Return(); Pop(0)

0xea6: PushEmpty()
0xea7: PushEmpty(bool)
0xea8: Stack[-1] = (bool) 0
0xea9: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xeaa: IF (Stack[-1] == 0) GOTO 0xeae; Pop(1)

0xeab: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xeac: IF (Stack[-1] == 0) GOTO 0xeae; Pop(1)

0xead: Stack[-1] = (bool) 1
0xeae: IF (Stack[-1] == 0) GOTO 0xeb4; Pop(1)

0xeaf: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xeb0: PushEmpty(object)
0xeb1: Stack[-1] = Stack[-2]
0xeb2: Call2 0x114f

0xeb3: Pop(1)
0xeb4: Return(); Pop(0)

0xeb5: PushEmpty()
0xeb6: PushEmpty(bool)
0xeb7: Stack[-1] = (bool) 0
0xeb8: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xeb9: IF (Stack[-1] == 0) GOTO 0xebd; Pop(1)

0xeba: Push( Stack[2 + Tasks[-1].StackPointer] )
0xebb: IF (Stack[-1] == 0) GOTO 0xebd; Pop(1)

0xebc: Stack[-1] = (bool) 1
0xebd: IF (Stack[-1] == 0) GOTO 0xec2; Pop(1)

0xebe: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xebf: Push("head")
0xec0: @ UnlookAsync(Stack[-1])
0xec1: Pop(1)
0xec2: Return(); Pop(0)

0xec3: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0xec4: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xec5: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0xec6: Stack[-7] = Stack[-17]
0xec7: PushEmpty(bool, object)
0xec8: Stack[-1] = Stack[-23]
0xec9: Call2 0xf4f

0xeca: Pop(1)
0xecb: Pop(1); Push((bool) Stack[-1] == 0)
0xecc: IF (Stack[-1] == 0) GOTO 0xecf; Pop(1)

0xecd: Stack[-22] = (bool) 0
0xece: Return(); Pop(16)

0xecf: @@ GetPosition(Stack[-5])
0xed0: Pop(0)
0xed1: @ GetPosition(Stack[-4])
0xed2: Pop(0)
0xed3: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xed4: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xed5: PushEmpty(bool)
0xed6: Stack[-1] = (bool) 0
0xed7: Push((int) 0)
0xed8: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0xed9: IF (Stack[-1] == 0) GOTO 0xede; Pop(1)

0xeda: Pop(0); Push(Stack[-20] * Stack[-20]);
0xedb: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xedc: IF (Stack[-1] == 0) GOTO 0xede; Pop(1)

0xedd: Stack[-1] = (bool) 1
0xede: IF (Stack[-1] == 0) GOTO 0xee3; Pop(1)

0xedf: @ Stop()
0xee0: Pop(0)
0xee1: Stack[-22] = (bool) 0
0xee2: Return(); Pop(16)

0xee3: Pop(0); Push(Stack[-20] * Stack[-20]);
0xee4: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xee5: IF (Stack[-1] == 0) GOTO 0xf21; Pop(1)

0xee6: @@ GetPFPosition(Stack[-5])
0xee7: Pop(0)
0xee8: @ FindPathTo(Stack[-1], Stack[-5])
0xee9: Pop(0)
0xeea: Pop(0); Push(( Stack[-1] != 0 )
0xeeb: IF (Stack[-1] == 0) GOTO 0xeee; Pop(1)

0xeec: Stack[-6] = Stack[-1]
0xeed: Stack[-1] = 0
0xeee: Pop(0); Push(( Stack[-6] != 0 )
0xeef: IF (Stack[-1] == 0) GOTO 0xf0f; Pop(1)

0xef0: Push(Stack[-7])
0xef1: IF (Stack[-1] == 0) GOTO 0xef8; Pop(1)

0xef2: Stack[-7] = (bool) 0
0xef3: @ RotatePath(Stack[-6], Stack[-8])
0xef4: Pop(0)
0xef5: Pop(0); Push((bool) Stack[-8] == 0)
0xef6: IF (Stack[-1] == 0) GOTO 0xef8; Pop(1)

0xef7: GOTO 0xf27

0xef8: Push((int) 0)
0xef9: Push((float)0.3)
0xefa: @ SetTimer(Stack[-2], Stack[-1])
0xefb: Pop(2)
0xefc: PushEmpty(string)
0xefd: Call2 0xf56

0xefe: Pop(0)
0xeff: PushEmpty(string)
0xf00: Call2 0xf58

0xf01: Pop(0)
0xf02: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0xf03: Pop(2)
0xf04: Pop(0); Push((bool) Stack[-8] == 0)
0xf05: IF (Stack[-1] == 0) GOTO 0xf0d; Pop(1)

0xf06: Push( Stack[0 + Tasks[-1].StackPointer] )
0xf07: IF (Stack[-1] == 0) GOTO 0xf0b; Pop(1)

0xf08: Stack[-6] = 0
0xf09: GOTO 0xf27

0xf0a: GOTO 0xf0c

0xf0b: GOTO 0xf26

0xf0c: GOTO 0xf0e

0xf0d: Stack[-6] = 0
0xf0e: GOTO 0xf1f

0xf0f: Push((int) 0)
0xf10: @ KillTimer(Stack[-1])
0xf11: Pop(1)
0xf12: Push((float)0.5)
0xf13: @ Sleep(Stack[-1], Stack[-9])
0xf14: Pop(1)
0xf15: Pop(0); Push((bool) Stack[-8] == 0)
0xf16: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf17: Push( Stack[0 + Tasks[-1].StackPointer] )
0xf18: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf19: Stack[-6] = 0
0xf1a: GOTO 0xf27

0xf1b: Push((int) 0)
0xf1c: Push((float)0.3)
0xf1d: @ SetTimer(Stack[-2], Stack[-1])
0xf1e: Pop(2)
0xf1f: Stack[-1] = 0
0xf20: GOTO 0xf25

0xf21: Push((int) 0)
0xf22: @ KillTimer(Stack[-1])
0xf23: Pop(1)
0xf24: GOTO 0xf27

0xf25: Stack[-6] = 0
0xf26: GOTO 0xec7

0xf27: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xf28: Return(); Pop(16)

0xf29: PushEmpty()
0xf2a: Push((int) 0)
0xf2b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xf2c: IF (Stack[-1] == 0) GOTO 0xf2e; Pop(1)

0xf2d: Return(); Pop(0)

0xf2e: PushEmpty(bool, object)
0xf2f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf30: Call2 0xf4f

0xf31: Pop(1)
0xf32: Pop(1); Push((bool) Stack[-1] == 0)
0xf33: IF (Stack[-1] == 0) GOTO 0xf35; Pop(1)

0xf34: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf35: Push((int) 0)
0xf36: @ KillTimer(Stack[-1])
0xf37: Pop(1)
0xf38: @ Stop()
0xf39: Pop(0)
0xf3a: Return(); Pop(0)

0xf3b: PushEmpty()
0xf3c: @ RequestClearPath(Stack[-1])
0xf3d: Pop(0)
0xf3e: Return(); Pop(0)

0xf3f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf40: Push((int) 0)
0xf41: @ KillTimer(Stack[-1])
0xf42: Pop(1)
0xf43: @ Stop()
0xf44: Pop(0)
0xf45: Return(); Pop(0)

0xf46: PushEmpty()
0xf47: PushEmpty()
0xf48: Call2 0xe99

0xf49: Pop(0)
0xf4a: PushEmpty(object)
0xf4b: Stack[-1] = Stack[-2]
0xf4c: Call2 0x1316

0xf4d: Pop(1)
0xf4e: Return(); Pop(0)

0xf4f: PushEmpty()
0xf50: PushEmpty(bool, object)
0xf51: Stack[-1] = Stack[-3]
0xf52: Call2 0xffa

0xf53: Stack[-4] = Stack[-2]
0xf54: Pop(2)
0xf55: Return(); Pop(0)

0xf56: Stack[-1] = "walk"
0xf57: Return(); Pop(0)

0xf58: Stack[-1] = "run"
0xf59: Return(); Pop(0)

0xf5a: PushEmpty()
0xf5b: Push((int) 2)
0xf5c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5d: IF (Stack[-1] == 0) GOTO 0xf61; Pop(1)

0xf5e: Stack[-2] = "fire"
0xf5f: Return(); Pop(0)

0xf60: GOTO 0xf66

0xf61: Push((int) 1)
0xf62: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf63: IF (Stack[-1] == 0) GOTO 0xf66; Pop(1)

0xf64: Stack[-2] = "bullet"
0xf65: Return(); Pop(0)

0xf66: Stack[-2] = "phys"
0xf67: Return(); Pop(0)

0xf68: PushEmpty(cvector, cvector, cvector, cvector)
0xf69: @ GetPosition(Stack[-2])
0xf6a: Pop(0)
0xf6b: @@ GetPosition(Stack[-1])
0xf6c: Pop(0)
0xf6d: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xf6e: Return(); Pop(4)

0xf6f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xf70: @ GetPosition(Stack[-3])
0xf71: Pop(0)
0xf72: @@ GetPosition(Stack[-2])
0xf73: Pop(0)
0xf74: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xf75: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xf76: Return(); Pop(6)

0xf77: PushEmpty(bool, bool)
0xf78: @ IsPlayerActor(Stack[-3], Stack[-1])
0xf79: Pop(0)
0xf7a: Stack[-4] = Stack[-1]
0xf7b: Return(); Pop(2)

0xf7c: PushEmpty(bool, bool)
0xf7d: Push("HasProperty")
0xf7e: Push((int) 2)
0xf7f: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xf80: Pop(1); Push((bool) Stack[-1] == 0)
0xf81: IF (Stack[-1] == 0) GOTO 0xf84; Pop(1)

0xf82: Stack[-5] = (bool) 0
0xf83: Return(); Pop(2)

0xf84: @@ HasProperty(Stack[-3], Stack[-1])
0xf85: Pop(0)
0xf86: Stack[-5] = Stack[-1]
0xf87: Return(); Pop(2)

0xf88: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xf89: PushEmpty(bool, object, string)
0xf8a: Stack[-2] = Stack[-18]
0xf8b: Stack[-1] = "health"
0xf8c: Call2 0xf7c

0xf8d: Pop(2)
0xf8e: Pop(1); Push((bool) Stack[-1] == 0)
0xf8f: IF (Stack[-1] == 0) GOTO 0xf92; Pop(1)

0xf90: Stack[-16] = (float) 0.0
0xf91: Return(); Pop(12)

0xf92: PushEmpty(bool, object, string)
0xf93: Stack[-2] = Stack[-18]
0xf94: Stack[-1] = "armor"
0xf95: Call2 0xf7c

0xf96: Pop(2)
0xf97: Pop(1); Push((bool) Stack[-1] == 0)
0xf98: IF (Stack[-1] == 0) GOTO 0xf9b; Pop(1)

0xf99: Stack[-6] = (int) 0
0xf9a: GOTO 0xf9e

0xf9b: Push("armor")
0xf9c: @@ GetProperty(Stack[-1], Stack[-7])
0xf9d: Pop(1)
0xf9e: Push("armor_")
0xf9f: PushEmpty(string, int)
0xfa0: Stack[-1] = Stack[-16]
0xfa1: Call2 0xf5a

0xfa2: Pop(1)
0xfa3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xfa4: PushEmpty(bool, object, string)
0xfa5: Stack[-2] = Stack[-18]
0xfa6: Stack[-1] = Stack[-8]
0xfa7: Call2 0xf7c

0xfa8: Pop(2)
0xfa9: Pop(1); Push((bool) Stack[-1] == 0)
0xfaa: IF (Stack[-1] == 0) GOTO 0xfad; Pop(1)

0xfab: Stack[-4] = (int) 0
0xfac: GOTO 0xfaf

0xfad: @@ GetProperty(Stack[-5], Stack[-4])
0xfae: Pop(0)
0xfaf: PushEmpty(float, float, float)
0xfb0: Pop(0); Push(Stack[-9] + Stack[-7]);
0xfb1: Push((float)100.0)
0xfb2: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xfb3: Stack[-1] = (int) 1
0xfb4: Call2 0x11a5

0xfb5: Stack[-6] = Stack[-3]
0xfb6: Pop(3)
0xfb7: Push("health")
0xfb8: @@ GetProperty(Stack[-1], Stack[-3])
0xfb9: Pop(1)
0xfba: Push((int) 1)
0xfbb: Pop(1); Push(Stack[-1] - Stack[-4]);
0xfbc: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xfbd: Push("health")
0xfbe: PushEmpty(float, float, float, float)
0xfbf: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xfc0: Stack[-2] = (int) 0
0xfc1: Stack[-1] = (int) 1
0xfc2: Call2 0x11ac

0xfc3: Pop(3)
0xfc4: @@ SetProperty(Stack[-2], Stack[-1])
0xfc5: Pop(2)
0xfc6: PushEmpty(bool, object)
0xfc7: Stack[-1] = Stack[-17]
0xfc8: Call2 0xf77

0xfc9: Pop(1)
0xfca: IF (Stack[-1] == 0) GOTO 0xfcf; Pop(1)

0xfcb: PushEmpty(float)
0xfcc: Stack[-1] = -Stack[-2]; Pop(0);
0xfcd: Call2 0x11e5

0xfce: Pop(1)
0xfcf: Stack[-16] = Stack[-1]
0xfd0: Return(); Pop(12)

0xfd1: PushEmpty(bool, bool)
0xfd2: @@ IsDead(Stack[-1])
0xfd3: Pop(0)
0xfd4: Stack[-4] = Stack[-1]
0xfd5: Return(); Pop(2)

0xfd6: PushEmpty(object, object, object, object)
0xfd7: Pop(0); Push((bool) Stack[-5] == 0)
0xfd8: IF (Stack[-1] == 0) GOTO 0xfdb; Pop(1)

0xfd9: Stack[-6] = (bool) 0
0xfda: Return(); Pop(4)

0xfdb: PushEmpty(bool)
0xfdc: Stack[-1] = (bool) 0
0xfdd: Push("IsDead")
0xfde: Push((int) 1)
0xfdf: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xfe0: IF (Stack[-1] == 0) GOTO 0xfe7; Pop(1)

0xfe1: PushEmpty(bool, object)
0xfe2: Stack[-1] = Stack[-8]
0xfe3: Call2 0xfd1

0xfe4: Pop(1)
0xfe5: IF (Stack[-1] == 0) GOTO 0xfe7; Pop(1)

0xfe6: Stack[-1] = (bool) 1
0xfe7: IF (Stack[-1] == 0) GOTO 0xfea; Pop(1)

0xfe8: Stack[-6] = (bool) 0
0xfe9: Return(); Pop(4)

0xfea: @ GetScene(Stack[-2])
0xfeb: Pop(0)
0xfec: Pop(0); Push((bool) Stack[-2] == 0)
0xfed: IF (Stack[-1] == 0) GOTO 0xff0; Pop(1)

0xfee: Stack[-6] = (bool) 0
0xfef: Return(); Pop(4)

0xff0: @@ GetScene(Stack[-1])
0xff1: Pop(0)
0xff2: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xff3: IF (Stack[-1] == 0) GOTO 0xff6; Pop(1)

0xff4: Stack[-6] = (bool) 0
0xff5: Return(); Pop(4)

0xff6: Stack[-6] = (bool) 1
0xff7: Return(); Pop(4)

0xff8: Stack[-1] = 0
0xff9: Stack[-2] = 0
0xffa: PushEmpty(int, int)
0xffb: PushEmpty(bool, object)
0xffc: Stack[-1] = Stack[-5]
0xffd: Call2 0xfd6

0xffe: Pop(1)
0xfff: Pop(1); Push((bool) Stack[-1] == 0)
0x1000: IF (Stack[-1] == 0) GOTO 0x1003; Pop(1)

0x1001: Stack[-4] = (bool) 0
0x1002: Return(); Pop(2)

0x1003: PushEmpty(bool, object, string)
0x1004: Stack[-2] = Stack[-6]
0x1005: Stack[-1] = "noaccess"
0x1006: Call2 0xf7c

0x1007: Pop(2)
0x1008: Pop(1); Push((bool) Stack[-1] == 0)
0x1009: IF (Stack[-1] == 0) GOTO 0x100c; Pop(1)

0x100a: Stack[-4] = (bool) 1
0x100b: Return(); Pop(2)

0x100c: Push("noaccess")
0x100d: @@ GetProperty(Stack[-1], Stack[-2])
0x100e: Pop(1)
0x100f: Push((int) 0)
0x1010: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x1011: Return(); Pop(2)

0x1012: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x1013: Pop(0); Push((bool) Stack[-15] == 0)
0x1014: IF (Stack[-1] == 0) GOTO 0x1016; Pop(1)

0x1015: Return(); Pop(14)

0x1016: @ IsDead(Stack[-7])
0x1017: Pop(0)
0x1018: Push(Stack[-7])
0x1019: IF (Stack[-1] == 0) GOTO 0x101b; Pop(1)

0x101a: Return(); Pop(14)

0x101b: @ GetSecondaryAnimationType(Stack[-6])
0x101c: Pop(0)
0x101d: Push((int) 0)
0x101e: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x101f: IF (Stack[-1] == 0) GOTO 0x1021; Pop(1)

0x1020: Return(); Pop(14)

0x1021: @@ GetPosition(Stack[-5])
0x1022: Pop(0)
0x1023: @ GetPosition(Stack[-4])
0x1024: Pop(0)
0x1025: @ GetDirection(Stack[-3])
0x1026: Pop(0)
0x1027: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x1028: Push(CvectorIndex(Stack[-2], 0))
0x1029: Push(CvectorIndex(Stack[-4], 0))
0x102a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x102b: Push(CvectorIndex(Stack[-3], 2))
0x102c: Push(CvectorIndex(Stack[-5], 2))
0x102d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x102e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x102f: Push((int) 0)
0x1030: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1031: IF (Stack[-1] == 0) GOTO 0x1034; Pop(1)

0x1032: Stack[-1] = "fhit"
0x1033: GOTO 0x1035

0x1034: Stack[-1] = "bhit"
0x1035: Push("hit_react")
0x1036: Push("1")
0x1037: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1038: Push("2")
0x1039: Pop(1); Push(Stack[-4] + Stack[-1]);
0x103a: Push((int) -10)
0x103b: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x103c: Pop(4)
0x103d: Return(); Pop(14)

0x103e: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x103f: PushEmpty(bool)
0x1040: Stack[-1] = (bool) 0
0x1041: PushEmpty(bool)
0x1042: Stack[-1] = (bool) 0
0x1043: Push(Stack[-23])
0x1044: IF (Stack[-1] == 0) GOTO 0x1049; Pop(1)

0x1045: Push((int) 4)
0x1046: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x1047: IF (Stack[-1] == 0) GOTO 0x1049; Pop(1)

0x1048: Stack[-1] = (bool) 1
0x1049: IF (Stack[-1] == 0) GOTO 0x104e; Pop(1)

0x104a: Push((int) 5)
0x104b: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x104c: IF (Stack[-1] == 0) GOTO 0x104e; Pop(1)

0x104d: Stack[-1] = (bool) 1
0x104e: IF (Stack[-1] == 0) GOTO 0x107d; Pop(1)

0x104f: PushEmpty(cvector, cvector)
0x1050: PushEmpty(cvector, object)
0x1051: Stack[-1] = Stack[-25]
0x1052: Call2 0xf68

0x1053: Stack[-3] = Stack[-2]
0x1054: Pop(2)
0x1055: Call2 0x119b

0x1056: Stack[-11] = Stack[-2]
0x1057: Pop(2)
0x1058: @ CreateVectorVector(Stack[-8])
0x1059: Pop(0)
0x105a: Stack[-7] = (int) 1
0x105b: Push("hit")
0x105c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x105d: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x105e: Pop(1)
0x105f: Pop(0); Push((bool) Stack[-6] == 0)
0x1060: IF (Stack[-1] == 0) GOTO 0x1062; Pop(1)

0x1061: GOTO 0x106b

0x1062: Pop(0); Push(Stack[-4] | Stack[-9]);
0x1063: Push((float)0.70711)
0x1064: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1065: IF (Stack[-1] == 0) GOTO 0x1068; Pop(1)

0x1066: @@ add(Stack[-5])
0x1067: Pop(0)
0x1068: Push((int) 1)
0x1069: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x106a: GOTO 0x105b

0x106b: @@ size(Stack[-3])
0x106c: Pop(0)
0x106d: Push(Stack[-3])
0x106e: IF (Stack[-1] == 0) GOTO 0x107c; Pop(1)

0x106f: @ irand(Stack[-2], Stack[-3])
0x1070: Pop(0)
0x1071: @@ get(Stack[-1], Stack[-2])
0x1072: Pop(0)
0x1073: PushEmpty(object, int, float, cvector, cvector)
0x1074: Stack[-5] = Stack[-26]
0x1075: Stack[-4] = Stack[-25]
0x1076: Stack[-3] = Stack[-24]
0x1077: Stack[-2] = Stack[-6]
0x1078: Stack[-1] = -Stack[-14]; Pop(0);
0x1079: Call2 0x1082

0x107a: Pop(5)
0x107b: Return(); Pop(18)

0x107c: Stack[-8] = 0
0x107d: PushEmpty(object)
0x107e: Stack[-1] = Stack[-22]
0x107f: Call2 0x1012

0x1080: Pop(1)
0x1081: Return(); Pop(18)

0x1082: PushEmpty(object, object, object, object)
0x1083: @ GetScene(Stack[-2])
0x1084: Pop(0)
0x1085: Push("scripted")
0x1086: Push("blood_dir.xml")
0x1087: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x1088: Pop(2)
0x1089: PushEmpty(object)
0x108a: Stack[-1] = Stack[-10]
0x108b: Call2 0x1012

0x108c: Pop(1)
0x108d: Return(); Pop(4)

0x108e: Stack[-1] = 0
0x108f: Stack[-2] = 0
0x1090: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1091: @@ GetPosition(Stack[-3])
0x1092: Pop(0)
0x1093: @ GetPosition(Stack[-2])
0x1094: Pop(0)
0x1095: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x1096: Push(CvectorIndex(Stack[-1], 0))
0x1097: Push(CvectorIndex(Stack[-2], 2))
0x1098: @ RotateAsync(Stack[-2], Stack[-1])
0x1099: Pop(2)
0x109a: Return(); Pop(6)

0x109b: PushEmpty(bool, bool)
0x109c: @ IsLoaded(Stack[-1])
0x109d: Pop(0)
0x109e: Stack[-3] = Stack[-1]
0x109f: Return(); Pop(2)

0x10a0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x10a1: @@ GetPosition(Stack[-8])
0x10a2: Pop(0)
0x10a3: @@ GetEyesHeight(Stack[-9])
0x10a4: Pop(0)
0x10a5: Push(CvectorIndex(Stack[-8], 1))
0x10a6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x10a7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x10a8: @ GetPosition(Stack[-7])
0x10a9: Pop(0)
0x10aa: @ GetEyesHeight(Stack[-9])
0x10ab: Pop(0)
0x10ac: Push(CvectorIndex(Stack[-7], 1))
0x10ad: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x10ae: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x10af: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x10b0: Push(CvectorIndex(Stack[-6], 1))
0x10b1: Stack[-1] = (int) 0
0x10b2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x10b3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x10b4: Pop(1); Push(Sqrt(Stack[-1]))
0x10b5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x10b6: Stack[-5] = -Stack[-6]; Pop(0);
0x10b7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x10b8: PushEmpty(cvector, cvector)
0x10b9: Push(CVector(0.0, 1.0, 0.0))
0x10ba: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x10bb: Call2 0x119b

0x10bc: Pop(1)
0x10bd: Push((int) 25)
0x10be: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10bf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10c0: Push(CVector(0.0, 10.0, 0.0))
0x10c1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x10c2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x10c3: @ IsOverrideActive(Stack[-2])
0x10c4: Pop(0)
0x10c5: Push(Stack[-2])
0x10c6: IF (Stack[-1] == 0) GOTO 0x10c9; Pop(1)

0x10c7: Stack[-21] = (bool) 0
0x10c8: Return(); Pop(18)

0x10c9: @ StopWorld()
0x10ca: Pop(0)
0x10cb: @ CameraTransit(Stack[-3], Stack[-5])
0x10cc: Pop(0)
0x10cd: Push(CvectorIndex(Stack[-4], 0))
0x10ce: Push(CvectorIndex(Stack[-5], 2))
0x10cf: @ Rotate(Stack[-2], Stack[-1])
0x10d0: Pop(2)
0x10d1: PushEmpty(bool)
0x10d2: Call2 0x14c7

0x10d3: Pop(0)
0x10d4: IF (Stack[-1] == 0) GOTO 0x10d6; Pop(1)

0x10d5: GOTO 0x10de

0x10d6: Push("head")
0x10d7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x10d8: Pop(1)
0x10d9: Push(Stack[-1])
0x10da: IF (Stack[-1] == 0) GOTO 0x10de; Pop(1)

0x10db: Push("head")
0x10dc: @ LookAsyncCamera(Stack[-1])
0x10dd: Pop(1)
0x10de: @ CameraWaitForPlayFinish()
0x10df: Pop(0)
0x10e0: @ ResumeWorld()
0x10e1: Pop(0)
0x10e2: Stack[-21] = (bool) 1
0x10e3: Return(); Pop(18)

0x10e4: PushEmpty(bool, bool)
0x10e5: @ CameraSwitchToNormal()
0x10e6: Pop(0)
0x10e7: PushEmpty(bool)
0x10e8: Call2 0x14c7

0x10e9: Pop(0)
0x10ea: IF (Stack[-1] == 0) GOTO 0x10ec; Pop(1)

0x10eb: GOTO 0x10f4

0x10ec: Push("head")
0x10ed: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x10ee: Pop(1)
0x10ef: Push(Stack[-1])
0x10f0: IF (Stack[-1] == 0) GOTO 0x10f4; Pop(1)

0x10f1: Push("head")
0x10f2: @ UnlookAsync(Stack[-1])
0x10f3: Pop(1)
0x10f4: Return(); Pop(2)

0x10f5: PushEmpty()
0x10f6: PushEmpty(bool, object, float)
0x10f7: Stack[-2] = Stack[-4]
0x10f8: Stack[-1] = (int) 70
0x10f9: Call2 0x10fd

0x10fa: Stack[-5] = Stack[-3]
0x10fb: Pop(3)
0x10fc: Return(); Pop(0)

0x10fd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x10fe: @@ GetPosition(Stack[-7])
0x10ff: Pop(0)
0x1100: @@ GetEyesHeight(Stack[-8])
0x1101: Pop(0)
0x1102: Push(CvectorIndex(Stack[-7], 1))
0x1103: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1104: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1105: @ GetPosition(Stack[-6])
0x1106: Pop(0)
0x1107: @ GetEyesHeight(Stack[-8])
0x1108: Pop(0)
0x1109: Push(CvectorIndex(Stack[-6], 1))
0x110a: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x110b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x110c: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x110d: Push(CvectorIndex(Stack[-5], 1))
0x110e: Stack[-1] = (int) 0
0x110f: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1110: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1111: Pop(1); Push(Sqrt(Stack[-1]))
0x1112: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1113: Stack[-4] = -Stack[-5]; Pop(0);
0x1114: Pop(0); Push(Stack[-5] * Stack[-17]);
0x1115: Push(CVector(0.0, 10.0, 0.0))
0x1116: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1117: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1118: @ IsOverrideActive(Stack[-1])
0x1119: Pop(0)
0x111a: Push(Stack[-1])
0x111b: IF (Stack[-1] == 0) GOTO 0x111e; Pop(1)

0x111c: Stack[-19] = (bool) 0
0x111d: Return(); Pop(16)

0x111e: @ StopWorld()
0x111f: Pop(0)
0x1120: @ CameraTransit(Stack[-2], Stack[-4])
0x1121: Pop(0)
0x1122: Push(CvectorIndex(Stack[-3], 0))
0x1123: Push(CvectorIndex(Stack[-4], 2))
0x1124: @ Rotate(Stack[-2], Stack[-1])
0x1125: Pop(2)
0x1126: @ CameraWaitForPlayFinish()
0x1127: Pop(0)
0x1128: @ ResumeWorld()
0x1129: Pop(0)
0x112a: Stack[-19] = (bool) 1
0x112b: Return(); Pop(16)

0x112c: PushEmpty()
0x112d: @ CameraSwitchToNormal()
0x112e: Pop(0)
0x112f: Return(); Pop(0)

0x1130: PushEmpty(bool, float, float, bool, float, float)
0x1131: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1132: Pop(0)
0x1133: Push(Stack[-3])
0x1134: IF (Stack[-1] == 0) GOTO 0x113b; Pop(1)

0x1135: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1136: Pop(0)
0x1137: Push((bool) 0)
0x1138: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1139: Pop(1)
0x113a: GOTO 0x113f

0x113b: Push("Can't find lsh animation : ")
0x113c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x113d: @ Trace(Stack[-1])
0x113e: Pop(1)
0x113f: Return(); Pop(6)

0x1140: PushEmpty(bool, float, float, bool, float, float)
0x1141: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1142: Pop(0)
0x1143: Push(Stack[-3])
0x1144: IF (Stack[-1] == 0) GOTO 0x114a; Pop(1)

0x1145: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1146: Pop(0)
0x1147: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1148: Pop(0)
0x1149: GOTO 0x114e

0x114a: Push("Can't find lsh animation : ")
0x114b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x114c: @ Trace(Stack[-1])
0x114d: Pop(1)
0x114e: Return(); Pop(6)

0x114f: PushEmpty(float, cvector, float, cvector)
0x1150: @@ GetEyesHeight(Stack[-2])
0x1151: Pop(0)
0x1152: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x1153: Push(CvectorIndex(Stack[-1], 1))
0x1154: Stack[-1] = Stack[-3]
0x1155: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1156: Push("head")
0x1157: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x1158: Pop(1)
0x1159: Return(); Pop(4)

0x115a: PushEmpty(bool)
0x115b: Call2 0x14c7

0x115c: Pop(0)
0x115d: IF (Stack[-1] == 0) GOTO 0x1160; Pop(1)

0x115e: @ lshStopSpeech()
0x115f: Pop(0)
0x1160: Return(); Pop(0)

0x1161: PushEmpty(bool, bool)
0x1162: PushEmpty(bool, int, int)
0x1163: Stack[-2] = Stack[-7]
0x1164: Stack[-1] = Stack[-6]
0x1165: Call2 0x11b7

0x1166: Pop(2)
0x1167: IF (Stack[-1] == 0) GOTO 0x116b; Pop(1)

0x1168: Push((int) 0)
0x1169: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x116a: Pop(1)
0x116b: Return(); Pop(2)

0x116c: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x116d: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x116e: Pop(0)
0x116f: Pop(0); Push((bool) Stack[-8] == 0)
0x1170: IF (Stack[-1] == 0) GOTO 0x1185; Pop(1)

0x1171: Stack[-7] = (int) 0
0x1172: Push((int) 1)
0x1173: Pop(1); Push(Stack[-8] + Stack[-1]);
0x1174: Pop(1); Push(Stack[-18] + Stack[-1]);
0x1175: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x1176: Pop(1)
0x1177: Pop(0); Push((bool) Stack[-6] == 0)
0x1178: IF (Stack[-1] == 0) GOTO 0x117a; Pop(1)

0x1179: GOTO 0x117d

0x117a: Push((int) 1)
0x117b: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x117c: GOTO 0x1172

0x117d: Pop(0); Push((bool) Stack[-7] == 0)
0x117e: IF (Stack[-1] == 0) GOTO 0x1180; Pop(1)

0x117f: Return(); Pop(16)

0x1180: @ irand(Stack[-5], Stack[-7])
0x1181: Pop(0)
0x1182: Push((int) 1)
0x1183: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1184: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x1185: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x1186: Pop(0)
0x1187: Push(Stack[-4])
0x1188: IF (Stack[-1] == 0) GOTO 0x1194; Pop(1)

0x1189: @ GetEyesHeight(Stack[-3])
0x118a: Pop(0)
0x118b: @ GetDirection(Stack[-2])
0x118c: Pop(0)
0x118d: Push((int) 50)
0x118e: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x118f: Push(CvectorIndex(Stack[-1], 1))
0x1190: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x1191: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1192: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x1193: Pop(0)
0x1194: Return(); Pop(16)

0x1195: PushEmpty(object, object)
0x1196: @ self(Stack[-1])
0x1197: Pop(0)
0x1198: Stack[-3] = Stack[-1]
0x1199: Return(); Pop(2)

0x119a: Stack[-1] = 0
0x119b: PushEmpty(float, float)
0x119c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x119d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x119e: Push((float)0.0)
0x119f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x11a0: IF (Stack[-1] == 0) GOTO 0x11a3; Pop(1)

0x11a1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x11a2: Return(); Pop(2)

0x11a3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x11a4: Return(); Pop(2)

0x11a5: PushEmpty()
0x11a6: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x11a7: IF (Stack[-1] == 0) GOTO 0x11aa; Pop(1)

0x11a8: Stack[-3] = Stack[-2]
0x11a9: GOTO 0x11ab

0x11aa: Stack[-3] = Stack[-1]
0x11ab: Return(); Pop(0)

0x11ac: PushEmpty()
0x11ad: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x11ae: IF (Stack[-1] == 0) GOTO 0x11b1; Pop(1)

0x11af: Stack[-4] = Stack[-2]
0x11b0: Return(); Pop(0)

0x11b1: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x11b2: IF (Stack[-1] == 0) GOTO 0x11b5; Pop(1)

0x11b3: Stack[-4] = Stack[-1]
0x11b4: Return(); Pop(0)

0x11b5: Stack[-4] = Stack[-3]
0x11b6: Return(); Pop(0)

0x11b7: PushEmpty(int, int)
0x11b8: @ irand(Stack[-1], Stack[-3])
0x11b9: Pop(0)
0x11ba: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x11bb: Return(); Pop(2)

0x11bc: PushEmpty()
0x11bd: Push(CvectorIndex(Stack[-2], 0))
0x11be: Push(CvectorIndex(Stack[-2], 0))
0x11bf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11c0: Push(CvectorIndex(Stack[-3], 2))
0x11c1: Push(CvectorIndex(Stack[-3], 2))
0x11c2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11c3: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x11c4: Return(); Pop(0)

0x11c5: PushEmpty()
0x11c6: Push(CvectorIndex(Stack[-1], 0))
0x11c7: Push(CvectorIndex(Stack[-2], 0))
0x11c8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11c9: Push(CvectorIndex(Stack[-2], 2))
0x11ca: Push(CvectorIndex(Stack[-3], 2))
0x11cb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11cc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11cd: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x11ce: Return(); Pop(0)

0x11cf: PushEmpty()
0x11d0: PushEmpty(float, cvector, cvector)
0x11d1: Stack[-2] = Stack[-5]
0x11d2: Stack[-1] = Stack[-4]
0x11d3: Call2 0x11bc

0x11d4: Pop(2)
0x11d5: PushEmpty(float, cvector)
0x11d6: Stack[-1] = Stack[-5]
0x11d7: Call2 0x11c5

0x11d8: Pop(1)
0x11d9: PushEmpty(float, cvector)
0x11da: Stack[-1] = Stack[-5]
0x11db: Call2 0x11c5

0x11dc: Pop(1)
0x11dd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11de: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x11df: Return(); Pop(0)

0x11e0: PushEmpty(int, int)
0x11e1: @ GetVariable(Stack[-3], Stack[-1])
0x11e2: Pop(0)
0x11e3: Stack[-4] = Stack[-1]
0x11e4: Return(); Pop(2)

0x11e5: PushEmpty(object, object)
0x11e6: @ CreateFloatVector(Stack[-1])
0x11e7: Pop(0)
0x11e8: @@ add(Stack[-3])
0x11e9: Pop(0)
0x11ea: Push((int) 15)
0x11eb: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x11ec: Pop(1)
0x11ed: Return(); Pop(2)

0x11ee: Stack[-1] = 0
0x11ef: PushEmpty(float, float)
0x11f0: @ GetGameTime(Stack[-1])
0x11f1: Pop(0)
0x11f2: Push((int) 1)
0x11f3: PushEmpty(int)
0x11f4: Push((int) 24)
0x11f5: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x11f6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x11f7: Return(); Pop(2)

0x11f8: PushEmpty(bool, bool)
0x11f9: @ IsPlayerActor(Stack[-3], Stack[-1])
0x11fa: Pop(0)
0x11fb: Push(Stack[-1])
0x11fc: IF (Stack[-1] == 0) GOTO 0x1200; Pop(1)

0x11fd: Push("attack")
0x11fe: @ PlayGlobalMusic(Stack[-1])
0x11ff: Pop(1)
0x1200: Return(); Pop(2)

0x1201: PushEmpty(object, object)
0x1202: @ GetScene(Stack[-1])
0x1203: Pop(0)
0x1204: Push("battle")
0x1205: PushEmpty(object)
0x1206: Call2 0x1195

0x1207: Pop(0)
0x1208: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x1209: Pop(2)
0x120a: Return(); Pop(2)

0x120b: Stack[-1] = 0
0x120c: PushEmpty()
0x120d: Push((int) 1000)
0x120e: @@ SetReturnValue(Stack[-1])
0x120f: Pop(1)
0x1210: Return(); Pop(0)

0x1211: PushEmpty()
0x1212: PushEmpty(int, string)
0x1213: Stack[-1] = "branch"
0x1214: Call2 0x11e0

0x1215: Pop(1)
0x1216: Push((int) 0)
0x1217: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1218: IF (Stack[-1] == 0) GOTO 0x121b; Pop(1)

0x1219: Stack[-2] = (bool) 1
0x121a: Return(); Pop(0)

0x121b: Stack[-2] = (bool) 0
0x121c: Return(); Pop(0)

0x121d: PushEmpty()
0x121e: PushEmpty(int, string)
0x121f: Stack[-1] = "branch"
0x1220: Call2 0x11e0

0x1221: Pop(1)
0x1222: Push((int) 1)
0x1223: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1224: IF (Stack[-1] == 0) GOTO 0x1227; Pop(1)

0x1225: Stack[-2] = (bool) 1
0x1226: Return(); Pop(0)

0x1227: Stack[-2] = (bool) 0
0x1228: Return(); Pop(0)

0x1229: PushEmpty()
0x122a: PushEmpty(int, string)
0x122b: Stack[-1] = "branch"
0x122c: Call2 0x11e0

0x122d: Pop(1)
0x122e: Push((int) 2)
0x122f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1230: IF (Stack[-1] == 0) GOTO 0x1233; Pop(1)

0x1231: Stack[-2] = (bool) 1
0x1232: Return(); Pop(0)

0x1233: Stack[-2] = (bool) 0
0x1234: Return(); Pop(0)

0x1235: PushEmpty()
0x1236: PushEmpty(bool, object)
0x1237: Stack[-1] = Stack[-3]
0x1238: Call2 0x1249

0x1239: Pop(1)
0x123a: IF (Stack[-1] == 0) GOTO 0x123d; Pop(1)

0x123b: Stack[-2] = (bool) 1
0x123c: Return(); Pop(0)

0x123d: Stack[-2] = (bool) 0
0x123e: Return(); Pop(0)

0x123f: PushEmpty()
0x1240: PushEmpty(bool, object)
0x1241: Stack[-1] = Stack[-3]
0x1242: Call2 0x1250

0x1243: Pop(1)
0x1244: IF (Stack[-1] == 0) GOTO 0x1247; Pop(1)

0x1245: Stack[-2] = (bool) 1
0x1246: Return(); Pop(0)

0x1247: Stack[-2] = (bool) 0
0x1248: Return(); Pop(0)

0x1249: PushEmpty()
0x124a: PushEmpty(int)
0x124b: Call2 0x11ef

0x124c: Pop(0)
0x124d: Push((int) 6)
0x124e: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x124f: Return(); Pop(0)

0x1250: PushEmpty()
0x1251: PushEmpty(int)
0x1252: Call2 0x11ef

0x1253: Pop(0)
0x1254: Push((int) 1)
0x1255: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1256: Return(); Pop(0)

0x1257: PushEmpty(int, int)
0x1258: Push("branch")
0x1259: @ GetVariable(Stack[-1], Stack[-2])
0x125a: Pop(1)
0x125b: Push((int) 0)
0x125c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x125d: IF (Stack[-1] == 0) GOTO 0x1261; Pop(1)

0x125e: Stack[-3] = (int) 1
0x125f: Return(); Pop(2)

0x1260: GOTO 0x1266

0x1261: Push((int) 1)
0x1262: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1263: IF (Stack[-1] == 0) GOTO 0x1266; Pop(1)

0x1264: Stack[-3] = (int) 2
0x1265: Return(); Pop(2)

0x1266: Stack[-3] = (int) 3
0x1267: Return(); Pop(2)

0x1268: PushEmpty(int, int)
0x1269: Push("branch")
0x126a: @ GetVariable(Stack[-1], Stack[-2])
0x126b: Pop(1)
0x126c: Stack[-3] = Stack[-1]
0x126d: Return(); Pop(2)

0x126e: PushEmpty()
0x126f: PushEmpty(int)
0x1270: Call2 0x1268

0x1271: Pop(0)
0x1272: Push((int) 1)
0x1273: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1274: IF (Stack[-1] == 0) GOTO 0x1278; Pop(1)

0x1275: @ WorkWithCorpse(Stack[-1])
0x1276: Pop(0)
0x1277: GOTO 0x127a

0x1278: @ Barter(Stack[-1])
0x1279: Pop(0)
0x127a: Return(); Pop(0)

0x127b: PushEmpty(int, bool, int, bool)
0x127c: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x127d: IF (Stack[-1] == 0) GOTO 0x1282; Pop(1)

0x127e: Push("GenerateMoney: iMin > iMax")
0x127f: @ Trace(Stack[-1])
0x1280: Pop(1)
0x1281: Return(); Pop(4)

0x1282: Stack[-2] = (int) 0
0x1283: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x1284: IF (Stack[-1] == 0) GOTO 0x1289; Pop(1)

0x1285: Pop(0); Push(Stack[-5] - Stack[-6]);
0x1286: @ irand(Stack[-3], Stack[-1])
0x1287: Pop(1)
0x1288: GOTO 0x128d

0x1289: Push((int) 0)
0x128a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x128b: IF (Stack[-1] == 0) GOTO 0x128d; Pop(1)

0x128c: Return(); Pop(4)

0x128d: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x128e: Push((int) 0)
0x128f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1290: IF (Stack[-1] == 0) GOTO 0x1292; Pop(1)

0x1291: Return(); Pop(4)

0x1292: PushEmpty(int, string)
0x1293: Stack[-1] = "Money"
0x1294: Call2 0x12fc

0x1295: Pop(1)
0x1296: Push((int) 0)
0x1297: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x1298: Pop(2)
0x1299: Return(); Pop(4)

0x129a: PushEmpty(object, int, bool, object, int, bool)
0x129b: @ CreateInvItem(Stack[-3])
0x129c: Pop(0)
0x129d: @@ SetItemName(Stack[-7])
0x129e: Pop(0)
0x129f: Push("Organ")
0x12a0: Push((int) 1)
0x12a1: @@ SetProperty(Stack[-2], Stack[-1])
0x12a2: Pop(2)
0x12a3: @@ GetItemID(Stack[-2])
0x12a4: Pop(0)
0x12a5: Push((int) 0)
0x12a6: Push((int) 1)
0x12a7: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x12a8: Pop(2)
0x12a9: Return(); Pop(6)

0x12aa: Stack[-3] = 0
0x12ab: PushEmpty(int)
0x12ac: Call2 0x1268

0x12ad: Pop(0)
0x12ae: Push((int) 1)
0x12af: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x12b0: IF (Stack[-1] == 0) GOTO 0x12b2; Pop(1)

0x12b1: Return(); Pop(0)

0x12b2: PushEmpty(string)
0x12b3: Stack[-1] = "liver"
0x12b4: Call2 0x129a

0x12b5: Pop(1)
0x12b6: PushEmpty(string)
0x12b7: Stack[-1] = "kidney"
0x12b8: Call2 0x129a

0x12b9: Pop(1)
0x12ba: PushEmpty(string)
0x12bb: Stack[-1] = "heart"
0x12bc: Call2 0x129a

0x12bd: Pop(1)
0x12be: PushEmpty(string)
0x12bf: Stack[-1] = "blood"
0x12c0: Call2 0x129a

0x12c1: Pop(1)
0x12c2: Return(); Pop(0)

0x12c3: PushEmpty(bool, bool)
0x12c4: Push((int) 0)
0x12c5: @ ClearSubContainer(Stack[-1])
0x12c6: Pop(1)
0x12c7: PushEmpty(int, int)
0x12c8: Stack[-2] = (int) 30
0x12c9: Push((int) 50)
0x12ca: PushEmpty(int)
0x12cb: Call2 0x11ef

0x12cc: Pop(0)
0x12cd: Push((int) 40)
0x12ce: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12cf: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x12d0: Call2 0x127b

0x12d1: Pop(2)
0x12d2: PushEmpty(string, int, int)
0x12d3: Stack[-3] = "tourniquet"
0x12d4: Stack[-2] = (int) 1
0x12d5: Stack[-1] = (int) 10
0x12d6: Call2 0x1161

0x12d7: Pop(3)
0x12d8: PushEmpty(string, int, int)
0x12d9: Stack[-3] = "bandage"
0x12da: Stack[-2] = (int) 1
0x12db: Stack[-1] = (int) 10
0x12dc: Call2 0x1161

0x12dd: Pop(3)
0x12de: PushEmpty(string, int, int)
0x12df: Stack[-3] = "bottle_empty"
0x12e0: Stack[-2] = (int) 1
0x12e1: Stack[-1] = (int) 2
0x12e2: Call2 0x1161

0x12e3: Pop(3)
0x12e4: PushEmpty(string, int, int)
0x12e5: Stack[-3] = "tvirin"
0x12e6: Stack[-2] = (int) 1
0x12e7: Stack[-1] = (int) 8
0x12e8: Call2 0x1161

0x12e9: Pop(3)
0x12ea: Return(); Pop(2)

0x12eb: PushEmpty(bool, bool)
0x12ec: Push((int) 0)
0x12ed: @ ClearSubContainer(Stack[-1])
0x12ee: Pop(1)
0x12ef: PushEmpty(string, int, int)
0x12f0: Stack[-3] = "tourniquet"
0x12f1: Stack[-2] = (int) 1
0x12f2: Stack[-1] = (int) 4
0x12f3: Call2 0x1161

0x12f4: Pop(3)
0x12f5: PushEmpty(string, int, int)
0x12f6: Stack[-3] = "bandage"
0x12f7: Stack[-2] = (int) 1
0x12f8: Stack[-1] = (int) 2
0x12f9: Call2 0x1161

0x12fa: Pop(3)
0x12fb: Return(); Pop(2)

0x12fc: PushEmpty(int, int)
0x12fd: @ GetInvItemByName(Stack[-1], Stack[-3])
0x12fe: Pop(0)
0x12ff: Stack[-4] = Stack[-1]
0x1300: Return(); Pop(2)

0x1301: PushEmpty()
0x1302: PushEmpty(object)
0x1303: Stack[-1] = Stack[-2]
0x1304: Push(-1, 0); TaskCall(3)
0x1305: Call2 0x795

0x1306: Pop(-1, 0); TaskReturn
0x1307: Pop(1)
0x1308: Return(); Pop(0)

0x1309: PushEmpty(float, float)
0x130a: Push("health")
0x130b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x130c: IF (Stack[-1] == 0) GOTO 0x1315; Pop(1)

0x130d: Push("health")
0x130e: @ GetProperty(Stack[-1], Stack[-2])
0x130f: Pop(1)
0x1310: Push((int) 0)
0x1311: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x1312: IF (Stack[-1] == 0) GOTO 0x1315; Pop(1)

0x1313: @ SignalDeath(Stack[-4])
0x1314: Pop(0)
0x1315: Return(); Pop(2)

0x1316: PushEmpty()
0x1317: PushEmpty(object)
0x1318: Stack[-1] = Stack[-2]
0x1319: Call2 0x1301

0x131a: Pop(1)
0x131b: Return(); Pop(0)

0x131c: PushEmpty()
0x131d: PushEmpty(object, int, float)
0x131e: Stack[-3] = Stack[-7]
0x131f: Stack[-2] = Stack[-6]
0x1320: Stack[-1] = Stack[-5]
0x1321: Call2 0x103e

0x1322: Pop(3)
0x1323: Return(); Pop(0)

0x1324: PushEmpty()
0x1325: PushEmpty(object, int, float, cvector, cvector)
0x1326: Stack[-5] = Stack[-11]
0x1327: Stack[-4] = Stack[-10]
0x1328: Stack[-3] = Stack[-9]
0x1329: Stack[-2] = Stack[-7]
0x132a: Stack[-1] = Stack[-6]
0x132b: Call2 0x1082

0x132c: Pop(5)
0x132d: Return(); Pop(0)

0x132e: PushEmpty()
0x132f: Push("unholster")
0x1330: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1331: IF (Stack[-1] == 0) GOTO 0x1339; Pop(1)

0x1332: PushEmpty(bool, object)
0x1333: Stack[-1] = Stack[-4]
0x1334: Call2 0x149b

0x1335: Stack[-5] = Stack[-2]
0x1336: Pop(2)
0x1337: Return(); Pop(0)

0x1338: GOTO 0x134c

0x1339: Push("player_shot")
0x133a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x133b: IF (Stack[-1] == 0) GOTO 0x1343; Pop(1)

0x133c: PushEmpty(bool, object)
0x133d: Stack[-1] = Stack[-4]
0x133e: Call2 0x14a0

0x133f: Stack[-5] = Stack[-2]
0x1340: Pop(2)
0x1341: Return(); Pop(0)

0x1342: GOTO 0x134c

0x1343: Push("battle")
0x1344: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1345: IF (Stack[-1] == 0) GOTO 0x134c; Pop(1)

0x1346: PushEmpty(bool, object)
0x1347: Stack[-1] = Stack[-4]
0x1348: Call2 0x14b5

0x1349: Stack[-5] = Stack[-2]
0x134a: Pop(2)
0x134b: Return(); Pop(0)

0x134c: Stack[-3] = (bool) 0
0x134d: Return(); Pop(0)

0x134e: PushEmpty()
0x134f: Push("unholster")
0x1350: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1351: IF (Stack[-1] == 0) GOTO 0x1357; Pop(1)

0x1352: PushEmpty(object)
0x1353: Stack[-1] = Stack[-3]
0x1354: Call2 0x149e

0x1355: Pop(1)
0x1356: GOTO 0x1366

0x1357: Push("player_shot")
0x1358: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1359: IF (Stack[-1] == 0) GOTO 0x135f; Pop(1)

0x135a: PushEmpty(object)
0x135b: Stack[-1] = Stack[-3]
0x135c: Call2 0x14af

0x135d: Pop(1)
0x135e: GOTO 0x1366

0x135f: Push("battle")
0x1360: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1361: IF (Stack[-1] == 0) GOTO 0x1366; Pop(1)

0x1362: PushEmpty(object)
0x1363: Stack[-1] = Stack[-3]
0x1364: Call2 0x14b8

0x1365: Pop(1)
0x1366: Return(); Pop(0)

0x1367: PushEmpty(bool, bool)
0x1368: PushEmpty(bool)
0x1369: Stack[-1] = (bool) 0
0x136a: PushEmpty(bool, object)
0x136b: Stack[-1] = Stack[-6]
0x136c: Call2 0x149b

0x136d: Pop(1)
0x136e: IF (Stack[-1] == 0) GOTO 0x1375; Pop(1)

0x136f: PushEmpty(bool, object)
0x1370: Stack[-1] = Stack[-6]
0x1371: Call2 0xf77

0x1372: Pop(1)
0x1373: IF (Stack[-1] == 0) GOTO 0x1375; Pop(1)

0x1374: Stack[-1] = (bool) 1
0x1375: IF (Stack[-1] == 0) GOTO 0x137c; Pop(1)

0x1376: @@ IsWeaponHolstered(Stack[-1])
0x1377: Pop(0)
0x1378: Pop(0); Push((bool) Stack[-1] == 0)
0x1379: IF (Stack[-1] == 0) GOTO 0x137c; Pop(1)

0x137a: Stack[-4] = (bool) 1
0x137b: Return(); Pop(2)

0x137c: Stack[-4] = (bool) 0
0x137d: Return(); Pop(2)

0x137e: PushEmpty()
0x137f: PushEmpty(object)
0x1380: Stack[-1] = Stack[-2]
0x1381: Call2 0x149e

0x1382: Pop(1)
0x1383: Return(); Pop(0)

0x1384: PushEmpty()
0x1385: PushEmpty(bool, object)
0x1386: Stack[-1] = Stack[-3]
0x1387: Call2 0xf77

0x1388: Pop(1)
0x1389: IF (Stack[-1] == 0) GOTO 0x1390; Pop(1)

0x138a: PushEmpty(object)
0x138b: Call2 0x1195

0x138c: Pop(0)
0x138d: Push((float)-0.02)
0x138e: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x138f: Pop(2)
0x1390: Return(); Pop(0)

0x1391: PushEmpty(object, object)
0x1392: Push("heal")
0x1393: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1394: IF (Stack[-1] == 0) GOTO 0x139f; Pop(1)

0x1395: Push("player")
0x1396: @ FindActor(Stack[-2], Stack[-1])
0x1397: Pop(1)
0x1398: PushEmpty(bool, object)
0x1399: Stack[-1] = Stack[-3]
0x139a: Call2 0x14ba

0x139b: Stack[-6] = Stack[-2]
0x139c: Pop(2)
0x139d: Return(); Pop(2)

0x139e: Stack[-1] = 0
0x139f: Stack[-4] = (bool) 0
0x13a0: Return(); Pop(2)

0x13a1: PushEmpty(object, object)
0x13a2: Push("heal")
0x13a3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13a4: IF (Stack[-1] == 0) GOTO 0x13ad; Pop(1)

0x13a5: Push("player")
0x13a6: @ FindActor(Stack[-2], Stack[-1])
0x13a7: Pop(1)
0x13a8: PushEmpty(object)
0x13a9: Stack[-1] = Stack[-2]
0x13aa: Call2 0x14bd

0x13ab: Pop(1)
0x13ac: Stack[-1] = 0
0x13ad: Return(); Pop(2)

0x13ae: PushEmpty(string, string)
0x13af: Stack[-1] = "idle"
0x13b0: Push(Stack[-3])
0x13b1: IF (Stack[-1] == 0) GOTO 0x13b3; Pop(1)

0x13b2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x13b3: Stack[-4] = Stack[-1]
0x13b4: Return(); Pop(2)

0x13b5: PushEmpty(int, bool, int, bool)
0x13b6: Stack[-2] = (int) 0
0x13b7: Push("all")
0x13b8: PushEmpty(string, int)
0x13b9: Stack[-1] = Stack[-5]
0x13ba: Call2 0x13ae

0x13bb: Pop(1)
0x13bc: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x13bd: Pop(2)
0x13be: Pop(0); Push((bool) Stack[-1] == 0)
0x13bf: IF (Stack[-1] == 0) GOTO 0x13c1; Pop(1)

0x13c0: GOTO 0x13c4

0x13c1: Push((int) 1)
0x13c2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13c3: GOTO 0x13b7

0x13c4: Stack[-5] = Stack[-2]
0x13c5: Return(); Pop(4)

0x13c6: PushEmpty()
0x13c7: PushEmpty(bool)
0x13c8: Call2 0x14f8

0x13c9: Pop(0)
0x13ca: IF (Stack[-1] == 0) GOTO 0x13cd; Pop(1)

0x13cb: Stack[-2] = (int) 2
0x13cc: GOTO 0x13ce

0x13cd: Stack[-2] = (int) 0
0x13ce: Return(); Pop(0)

0x13cf: PushEmpty()
0x13d0: PushEmpty(object)
0x13d1: Stack[-1] = Stack[-2]
0x13d2: Push(-1, 1); TaskCall(6)
0x13d3: Call2 0xa9c

0x13d4: Pop(-1, 1); TaskReturn
0x13d5: Pop(1)
0x13d6: Return(); Pop(0)

0x13d7: PushEmpty()
0x13d8: PushEmpty(bool, object)
0x13d9: Stack[-1] = Stack[-3]
0x13da: Call2 0xffa

0x13db: Pop(1)
0x13dc: IF (Stack[-1] == 0) GOTO 0x13df; Pop(1)

0x13dd: Stack[-2] = (int) 2
0x13de: GOTO 0x13e0

0x13df: Stack[-2] = (int) 0
0x13e0: Return(); Pop(0)

0x13e1: PushEmpty()
0x13e2: PushEmpty(object)
0x13e3: Stack[-1] = Stack[-2]
0x13e4: Push(-1, 6); TaskCall(7)
0x13e5: Call2 0xbaf

0x13e6: Pop(-1, 6); TaskReturn
0x13e7: Pop(1)
0x13e8: Return(); Pop(0)

0x13e9: PushEmpty(string, string, string, string)
0x13ea: PushEmpty(bool, object, string)
0x13eb: Stack[-2] = Stack[-9]
0x13ec: Stack[-1] = "class"
0x13ed: Call2 0xf7c

0x13ee: Pop(2)
0x13ef: Pop(1); Push((bool) Stack[-1] == 0)
0x13f0: IF (Stack[-1] == 0) GOTO 0x13f3; Pop(1)

0x13f1: Stack[-7] = (bool) 0
0x13f2: Return(); Pop(4)

0x13f3: Push("class")
0x13f4: @ GetProperty(Stack[-1], Stack[-3])
0x13f5: Pop(1)
0x13f6: Push("class")
0x13f7: @@ GetProperty(Stack[-1], Stack[-2])
0x13f8: Pop(1)
0x13f9: PushEmpty(bool)
0x13fa: Stack[-1] = (bool) 0
0x13fb: Pop(0); Push((bool) Stack[-6] == 0)
0x13fc: IF (Stack[-1] == 0) GOTO 0x1400; Pop(1)

0x13fd: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0x13fe: IF (Stack[-1] == 0) GOTO 0x1400; Pop(1)

0x13ff: Stack[-1] = (bool) 1
0x1400: IF (Stack[-1] == 0) GOTO 0x1403; Pop(1)

0x1401: Stack[-7] = (bool) 1
0x1402: Return(); Pop(4)

0x1403: Push("rat")
0x1404: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1405: IF (Stack[-1] == 0) GOTO 0x1409; Pop(1)

0x1406: Stack[-7] = (bool) 0
0x1407: Return(); Pop(4)

0x1408: GOTO 0x1432

0x1409: Push("rat_big")
0x140a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x140b: IF (Stack[-1] == 0) GOTO 0x140f; Pop(1)

0x140c: Stack[-7] = (bool) 0
0x140d: Return(); Pop(4)

0x140e: GOTO 0x1432

0x140f: Push("dog")
0x1410: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1411: IF (Stack[-1] == 0) GOTO 0x1415; Pop(1)

0x1412: Stack[-7] = (bool) 0
0x1413: Return(); Pop(4)

0x1414: GOTO 0x1432

0x1415: Push("grabitel")
0x1416: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1417: IF (Stack[-1] == 0) GOTO 0x141b; Pop(1)

0x1418: Stack[-7] = (bool) 0
0x1419: Return(); Pop(4)

0x141a: GOTO 0x1432

0x141b: Push("bomber")
0x141c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x141d: IF (Stack[-1] == 0) GOTO 0x1421; Pop(1)

0x141e: Stack[-7] = (bool) 0
0x141f: Return(); Pop(4)

0x1420: GOTO 0x1432

0x1421: Push("sanitar")
0x1422: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1423: IF (Stack[-1] == 0) GOTO 0x1427; Pop(1)

0x1424: Stack[-7] = (bool) 0
0x1425: Return(); Pop(4)

0x1426: GOTO 0x1432

0x1427: Push("hunter")
0x1428: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1429: IF (Stack[-1] == 0) GOTO 0x142d; Pop(1)

0x142a: Stack[-7] = (bool) 0
0x142b: Return(); Pop(4)

0x142c: GOTO 0x1432

0x142d: Push("soldier")
0x142e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x142f: IF (Stack[-1] == 0) GOTO 0x1432; Pop(1)

0x1430: Stack[-7] = (bool) 0
0x1431: Return(); Pop(4)

0x1432: Stack[-7] = (bool) 1
0x1433: Return(); Pop(4)

0x1434: PushEmpty()
0x1435: PushEmpty(int, object)
0x1436: Stack[-1] = Stack[-4]
0x1437: Call2 0x13d7

0x1438: Stack[-5] = Stack[-2]
0x1439: Pop(2)
0x143a: Return(); Pop(0)

0x143b: PushEmpty()
0x143c: PushEmpty(object)
0x143d: Stack[-1] = Stack[-2]
0x143e: Call2 0x13e1

0x143f: Pop(1)
0x1440: Return(); Pop(0)

0x1441: PushEmpty(bool, bool)
0x1442: PushEmpty(bool, object, bool)
0x1443: Stack[-2] = Stack[-8]
0x1444: Stack[-1] = !Stack[-6]; Pop(0);
0x1445: Call2 0x13e9

0x1446: Pop(2)
0x1447: Pop(1); Push((bool) Stack[-1] == 0)
0x1448: IF (Stack[-1] == 0) GOTO 0x144b; Pop(1)

0x1449: Stack[-7] = (bool) 0
0x144a: Return(); Pop(2)

0x144b: @ CanSee(Stack[-1], Stack[-6])
0x144c: Pop(0)
0x144d: PushEmpty(bool)
0x144e: Stack[-1] = (bool) 1
0x144f: Push(Stack[-2])
0x1450: IF (Stack[-1] == 0) GOTO 0x1459; Pop(1)

0x1451: PushEmpty(float, object)
0x1452: Stack[-1] = Stack[-9]
0x1453: Call2 0xf6f

0x1454: Pop(1)
0x1455: Pop(0); Push(Stack[-6] * Stack[-6]);
0x1456: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1457: IF (Stack[-1] == 0) GOTO 0x1459; Pop(1)

0x1458: Stack[-1] = (bool) 0
0x1459: IF (Stack[-1] == 0) GOTO 0x145c; Pop(1)

0x145a: Stack[-7] = (bool) 1
0x145b: Return(); Pop(2)

0x145c: Stack[-7] = (bool) 0
0x145d: Return(); Pop(2)

0x145e: PushEmpty()
0x145f: Stack[-2] = (int) 0
0x1460: Return(); Pop(0)

0x1461: PushEmpty()
0x1462: Return(); Pop(0)

0x1463: PushEmpty()
0x1464: Push("killme")
0x1465: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1466: IF (Stack[-1] == 0) GOTO 0x146d; Pop(1)

0x1467: PushEmpty(int, object)
0x1468: Stack[-1] = Stack[-3]
0x1469: Call2 0x1479

0x146a: Stack[-5] = Stack[-2]
0x146b: Pop(2)
0x146c: Return(); Pop(0)

0x146d: Stack[-3] = (int) 0
0x146e: Return(); Pop(0)

0x146f: PushEmpty()
0x1470: Push("killme")
0x1471: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1472: IF (Stack[-1] == 0) GOTO 0x1478; Pop(1)

0x1473: PushEmpty(object)
0x1474: Stack[-1] = Stack[-2]
0x1475: Call2 0x148b

0x1476: Pop(1)
0x1477: Return(); Pop(0)

0x1478: Return(); Pop(0)

0x1479: PushEmpty()
0x147a: PushEmpty(bool, object)
0x147b: Stack[-1] = Stack[-3]
0x147c: Call2 0xffa

0x147d: Pop(1)
0x147e: Pop(1); Push((bool) Stack[-1] == 0)
0x147f: IF (Stack[-1] == 0) GOTO 0x1482; Pop(1)

0x1480: Stack[-2] = (int) 0
0x1481: Return(); Pop(0)

0x1482: PushEmpty(bool, object)
0x1483: Stack[-1] = Stack[-3]
0x1484: Call2 0x14fa

0x1485: Pop(1)
0x1486: IF (Stack[-1] == 0) GOTO 0x1489; Pop(1)

0x1487: Stack[-2] = (int) 2
0x1488: GOTO 0x148a

0x1489: Stack[-2] = (int) 0
0x148a: Return(); Pop(0)

0x148b: PushEmpty()
0x148c: PushEmpty(object)
0x148d: Stack[-1] = Stack[-2]
0x148e: Call2 0x13e1

0x148f: Pop(1)
0x1490: Return(); Pop(0)

0x1491: PushEmpty()
0x1492: Stack[-2] = (int) 2
0x1493: Return(); Pop(0)

0x1494: PushEmpty()
0x1495: PushEmpty(object)
0x1496: Stack[-1] = Stack[-2]
0x1497: Call2 0x14d0

0x1498: Pop(1)
0x1499: Return(); Pop(0)

0x149a: Return(); Pop(0)

0x149b: PushEmpty()
0x149c: Stack[-2] = (bool) 0
0x149d: Return(); Pop(0)

0x149e: PushEmpty()
0x149f: Return(); Pop(0)

0x14a0: PushEmpty(bool, bool)
0x14a1: @ CanSee(Stack[-1], Stack[-3])
0x14a2: Pop(0)
0x14a3: Stack[-4] = (bool) 1
0x14a4: Push(Stack[-1])
0x14a5: IF (Stack[-1] == 0) GOTO 0x14ae; Pop(1)

0x14a6: PushEmpty(float, object)
0x14a7: Stack[-1] = Stack[-5]
0x14a8: Call2 0xf6f

0x14a9: Pop(1)
0x14aa: Push((int) 2250000)
0x14ab: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x14ac: IF (Stack[-1] == 0) GOTO 0x14ae; Pop(1)

0x14ad: Stack[-4] = (bool) 0
0x14ae: Return(); Pop(2)

0x14af: PushEmpty()
0x14b0: PushEmpty(object)
0x14b1: Stack[-1] = Stack[-2]
0x14b2: Call2 0x13cf

0x14b3: Pop(1)
0x14b4: Return(); Pop(0)

0x14b5: PushEmpty()
0x14b6: Stack[-2] = (bool) 0
0x14b7: Return(); Pop(0)

0x14b8: PushEmpty()
0x14b9: Return(); Pop(0)

0x14ba: PushEmpty()
0x14bb: Stack[-2] = (bool) 0
0x14bc: Return(); Pop(0)

0x14bd: PushEmpty()
0x14be: Return(); Pop(0)

0x14bf: Stack[-1] = (int) 515557
0x14c0: Return(); Pop(0)

0x14c1: Stack[-1] = (int) 503342
0x14c2: Return(); Pop(0)

0x14c3: Stack[-1] = "ui/NPC_Citizen1.png"
0x14c4: Return(); Pop(0)

0x14c5: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x14c6: Return(); Pop(0)

0x14c7: Stack[-1] = (bool) 0
0x14c8: Return(); Pop(0)

0x14c9: Push(GlobalVars[0])
0x14ca: Stack[-1] = (bool) 0
0x14cb: GlobalVars[0] = Stack[-1]; Pop(1)
0x14cc: PushEmpty()
0x14cd: Call2 0x12eb

0x14ce: Pop(0)
0x14cf: Return(); Pop(0)

0x14d0: PushEmpty(bool, bool)
0x14d1: Push(GlobalVars[0])
0x14d2: IF (Stack[-1] == 0) GOTO 0x14dd; Pop(1)

0x14d3: @ IsOverrideActive(Stack[-1])
0x14d4: Pop(0)
0x14d5: Pop(0); Push((bool) Stack[-1] == 0)
0x14d6: IF (Stack[-1] == 0) GOTO 0x14db; Pop(1)

0x14d7: PushEmpty(object)
0x14d8: Stack[-1] = Stack[-4]
0x14d9: Call2 0x126e

0x14da: Pop(1)
0x14db: Return(); Pop(2)

0x14dc: GOTO 0x14f7

0x14dd: Push((int) 1000)
0x14de: PushEmpty(int, object)
0x14df: Stack[-1] = Stack[-6]
0x14e0: Push(-2, 1); TaskCall(1)
0x14e1: Call2 0x28

0x14e2: Pop(-2, 1); TaskReturn
0x14e3: Pop(1)
0x14e4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14e5: IF (Stack[-1] == 0) GOTO 0x14f7; Pop(1)

0x14e6: PushEmpty(bool, object)
0x14e7: Stack[-1] = Stack[-5]
0x14e8: Call2 0x10f5

0x14e9: Pop(1)
0x14ea: Pop(1); Push((bool) Stack[-1] == 0)
0x14eb: IF (Stack[-1] == 0) GOTO 0x14ed; Pop(1)

0x14ec: Return(); Pop(2)

0x14ed: PushEmpty(object)
0x14ee: Stack[-1] = Stack[-4]
0x14ef: Push(-1, 1); TaskCall(0)
0x14f0: Call2 0x0

0x14f1: Pop(-1, 1); TaskReturn
0x14f2: Pop(1)
0x14f3: PushEmpty(object)
0x14f4: Stack[-1] = Stack[-4]
0x14f5: Call2 0x112c

0x14f6: Pop(1)
0x14f7: Return(); Pop(2)

0x14f8: Stack[-1] = (bool) 0
0x14f9: Return(); Pop(0)

0x14fa: PushEmpty()
0x14fb: Stack[-2] = (bool) 1
0x14fc: Return(); Pop(0)

0x14fd: PushEmpty()
0x14fe: PushEmpty(bool, object, object, float, bool)
0x14ff: Stack[-4] = Stack[-8]
0x1500: Stack[-3] = Stack[-7]
0x1501: Stack[-2] = (float) 700.0
0x1502: Stack[-1] = Stack[-6]
0x1503: Call2 0x1441

0x1504: Stack[-9] = Stack[-5]
0x1505: Pop(5)
0x1506: Return(); Pop(0)

0x1507: PushEmpty()
0x1508: PushEmpty(bool, object)
0x1509: Stack[-1] = Stack[-3]
0x150a: Call2 0xf77

0x150b: Pop(1)
0x150c: IF (Stack[-1] == 0) GOTO 0x1517; Pop(1)

0x150d: PushEmpty(object)
0x150e: Call2 0x1195

0x150f: Pop(0)
0x1510: Push((float)-0.03)
0x1511: Push((bool) 1)
0x1512: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1513: Pop(3)
0x1514: PushEmpty()
0x1515: Call2 0x12c3

0x1516: Pop(0)
0x1517: PushEmpty()
0x1518: Call2 0x12ab

0x1519: Pop(0)
0x151a: Push(GlobalVars[0])
0x151b: Stack[-1] = (bool) 1
0x151c: GlobalVars[0] = Stack[-1]; Pop(1)
0x151d: Push((int) 50)
0x151e: Push((int) 40)
0x151f: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1520: Pop(2)
0x1521: Return(); Pop(0)

