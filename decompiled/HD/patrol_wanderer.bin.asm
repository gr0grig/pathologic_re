GlobalVarCount = 1
	G_VAR_0 object 

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
	head
	GetPosition
	GetPFPosition
	walk
	run
	@GetAttackDistance
	GetAttackDistance
	attack
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
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
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
	tourniquet
	bandage
	packet
	bottle_water
	rusk
	hook
	watch
	alpha_pills
	beta_pills
	gamma_pills
	revolver_ammo
	rifle_ammo
	patrol_mark
	fresh_meat
	dried_meat
	smoked_meat
	vegetables
	samopal_ammo
	class
	patrol
	sanitar
	soldier
	woman
	wasted_girl
	vaxxabitka
	vaxxabit
	little_girl
	dohodyaga
	nudegirl
	worker
	butcher
	boy
	unosha
	wasted_male
	alkash
	morlok
	in
	prc
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	reputation
	bomber
	hunter
	grabitel

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
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	SetTimer (2 args)
	CanSee (2 args)
	SendPlayerEnemy (2 args)
	UnlookAsync (1 args)
	KillTimer (1 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
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
	SetRTEnvelope (2 args)
	Hold (0 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
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
	AddItem (4 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	ReportReputationChange (3 args)
	ReportReputationChange (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0xf6
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc7 Vars = (int, int)
	GTASK_3 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x101 Vars = (object)
		EVENT_1 Op = 0x119 Vars = (object)
		EVENT_3 Op = 0x127 Vars = (object)
		EVENT_17 Op = 0x135 Vars = (object)
		EVENT_30 Op = 0x149 Vars = (object, object, bool)
		EVENT_10 Op = 0x196 Vars = (object)
		EVENT_28 Op = 0x19a Vars = ()
		EVENT_41 Op = 0x1a4 Vars = (object)
	GTASK_4  Params = 0
		EVENT_0 Op = 0x1b5 Vars = (object)
		EVENT_1 Op = 0x1ba Vars = (object)
		EVENT_3 Op = 0x1c8 Vars = (object)
		EVENT_17 Op = 0x1d6 Vars = (object)
		EVENT_30 Op = 0x1ea Vars = (object, object, bool)
	GTASK_5 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0x24d Vars = (object)
		EVENT_30 Op = 0x253 Vars = (object, object, bool)
		EVENT_7 Op = 0x28c Vars = (int)
		EVENT_1 Op = 0x2a7 Vars = (object)
		EVENT_2 Op = 0x2b6 Vars = (object)
		EVENT_10 Op = 0x33c Vars = (object)
		EVENT_41 Op = 0x347 Vars = (object)
	GTASK_6 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0x369 Vars = (object)
		EVENT_30 Op = 0x36f Vars = (object, object, bool)
	GTASK_7  Params = 1
		EVENT_0 Op = 0x630 Vars = (object)
		EVENT_22 Op = 0x6af Vars = (object, int, float, float)
		EVENT_16 Op = 0x6b1 Vars = (object, string)
		EVENT_41 Op = 0x6b3 Vars = (object)

Events:
EVENT_22 Op = 0xbe9 Vars = (object, int, float, float)
EVENT_43 Op = 0xbf1 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xbfb Vars = (object, string)
EVENT_42 Op = 0xc08 Vars = (object, string)
EVENT_41 Op = 0xc0f Vars = (object)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0xc37

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x88f

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
0x1c: Call2 0xc37

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
0x2d: Call2 0x7fb

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0xc31

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0xc2f

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0xc33

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0xc35

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x976

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
0x69: Call2 0x840

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
0x77: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral"
0x7a: Call2 0xb1

0x7b: Pop(1)
0x7c: Push((int) 537930)
0x7d: @@ SetMessage(Stack[-1])
0x7e: Pop(1)
0x7f: @@ ClearReplies()
0x80: Pop(0)
0x81: Push((int) 537931)
0x82: Push((int) -1)
0x83: Push((int) 39792)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: Push((int) 537932)
0x87: Push((int) -1)
0x88: Push((int) 39793)
0x89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: Push((int) 537933)
0x8c: Push((int) -1)
0x8d: Push((int) 39794)
0x8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f: Pop(3)
0x90: GOTO 0x93

0x91: Return(); Pop(0)

0x92: GOTO 0x76

0x93: PushEmpty(bool)
0x94: Call2 0xc37

0x95: Pop(0)
0x96: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x97: @ lshWaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: PushEmpty(string)
0x9d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9e: Call2 0x88f

0x9f: Pop(1)
0xa0: GOTO 0x97

0xa1: GOTO 0xb0

0xa2: Push("all")
0xa3: Push("idle")
0xa4: @ PlayAnimation(Stack[-2], Stack[-1])
0xa5: Pop(2)
0xa6: @ WaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: Push("all")
0xac: Push("idle")
0xad: @ PlayAnimation(Stack[-2], Stack[-1])
0xae: Pop(2)
0xaf: GOTO 0xa6

0xb0: Return(); Pop(0)

0xb1: PushEmpty()
0xb2: PushEmpty(bool)
0xb3: Call2 0xc37

0xb4: Pop(0)
0xb5: Pop(1); Push((bool) Stack[-1] == 0)
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Return(); Pop(0)

0xb8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: PushEmpty(string, bool)
0xbc: Stack[-2] = Stack[-3]
0xbd: Push("")
0xbe: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc0: Stack[-1] = (bool) 0
0xc1: GOTO 0xc3

0xc2: Stack[-1] = (bool) 1
0xc3: Call2 0x89f

0xc4: Pop(2)
0xc5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc6: Return(); Pop(0)

0xc7: PushEmpty()
0xc8: Push((int) 1)
0xc9: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xca: PushEmpty()
0xcb: Call2 0x8b9

0xcc: Pop(0)
0xcd: Push((int) 39791)
0xce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xd0: PushEmpty(string)
0xd1: Stack[-1] = "Neutral"
0xd2: Call2 0xb1

0xd3: Pop(1)
0xd4: Push((int) 537930)
0xd5: @@ SetMessage(Stack[-1])
0xd6: Pop(1)
0xd7: @@ ClearReplies()
0xd8: Pop(0)
0xd9: Push((int) 537931)
0xda: Push((int) -1)
0xdb: Push((int) 39792)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Push((int) 537932)
0xdf: Push((int) -1)
0xe0: Push((int) 39793)
0xe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(3)
0xe3: Push((int) 537933)
0xe4: Push((int) -1)
0xe5: Push((int) 39794)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xea: PushEmpty(bool)
0xeb: Call2 0xc37

0xec: Pop(0)
0xed: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xee: @ lshStopAnimation()
0xef: Pop(0)
0xf0: GOTO 0xf3

0xf1: @ StopAnimation()
0xf2: Pop(0)
0xf3: Return(); Pop(0)

0xf4: GOTO 0xc8

0xf5: Return(); Pop(0)

0xf6: PushEmpty()
0xf7: Call2 0xb6f

0xf8: Pop(0)
0xf9: PushEmpty()
0xfa: Call2 0xaa8

0xfb: Pop(0)
0xfc: PushEmpty()
0xfd: Call2 0x156

0xfe: Pop(0)
0xff: GOTO 0xfc

0x100: Return(); Pop(0)

0x101: PushEmpty()
0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[-3]
0x104: Call2 0xc39

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: Return(); Pop(0)

0x108: PushEmpty()
0x109: Call2 0x19d

0x10a: Pop(0)
0x10b: Push((int) 1000)
0x10c: PushEmpty(int, object)
0x10d: Stack[-1] = Stack[-4]
0x10e: Push(-2, 1); TaskCall(1)
0x10f: Call2 0x28

0x110: Pop(-2, 1); TaskReturn
0x111: Pop(1)
0x112: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x114: PushEmpty(object)
0x115: Stack[-1] = Stack[-2]
0x116: Call2 0xb76

0x117: Pop(1)
0x118: Return(); Pop(0)

0x119: PushEmpty()
0x11a: PushEmpty(bool, object)
0x11b: Stack[-1] = Stack[-3]
0x11c: Call2 0xb96

0x11d: Pop(1)
0x11e: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x11f: PushEmpty()
0x120: Call2 0x19d

0x121: Pop(0)
0x122: PushEmpty(object)
0x123: Stack[-1] = Stack[-2]
0x124: Call2 0xb9d

0x125: Pop(1)
0x126: Return(); Pop(0)

0x127: PushEmpty()
0x128: PushEmpty(bool, object)
0x129: Stack[-1] = Stack[-3]
0x12a: Call2 0xb89

0x12b: Pop(1)
0x12c: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x12d: PushEmpty()
0x12e: Call2 0x19d

0x12f: Pop(0)
0x130: PushEmpty(object)
0x131: Stack[-1] = Stack[-2]
0x132: Call2 0xb90

0x133: Pop(1)
0x134: Return(); Pop(0)

0x135: PushEmpty()
0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[-3]
0x138: Call2 0x755

0x139: Pop(1)
0x13a: Pop(1); Push((bool) Stack[-1] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13c: PushEmpty(object)
0x13d: Stack[-1] = Stack[-2]
0x13e: Call2 0xbae

0x13f: Pop(1)
0x140: Return(); Pop(0)

0x141: PushEmpty()
0x142: Call2 0x19d

0x143: Pop(0)
0x144: PushEmpty(object)
0x145: Stack[-1] = Stack[-2]
0x146: Call2 0xbc6

0x147: Pop(1)
0x148: Return(); Pop(0)

0x149: PushEmpty()
0x14a: PushEmpty(bool, object, object, bool)
0x14b: Stack[-3] = Stack[-7]
0x14c: Stack[-2] = Stack[-6]
0x14d: Stack[-1] = Stack[-5]
0x14e: Call2 0xc15

0x14f: Pop(3)
0x150: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x151: PushEmpty(object)
0x152: Stack[-1] = Stack[-4]
0x153: Call2 0x135

0x154: Pop(1)
0x155: Return(); Pop(0)

0x156: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x157: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x158: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x159: Push((float)0.5)
0x15a: @ rand(Stack[-7], Stack[-1])
0x15b: Pop(1)
0x15c: @ Sleep(Stack[-6])
0x15d: Pop(0)
0x15e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x15f: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x160: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x162: @ GetPosition(Stack[-4])
0x163: Pop(0)
0x164: PushEmpty(float)
0x165: Call2 0x191

0x166: Pop(0)
0x167: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x168: Pop(1)
0x169: Push(Stack[-3])
0x16a: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16b: GOTO 0x170

0x16c: Push((int) 1)
0x16d: @ Sleep(Stack[-1])
0x16e: Pop(1)
0x16f: GOTO 0x162

0x170: GOTO 0x172

0x171: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x172: PushEmpty(object, cvector)
0x173: Stack[-1] = Stack[-7]
0x174: Call2 0x1af

0x175: Stack[-4] = Stack[-2]
0x176: Pop(2)
0x177: Pop(0); Push(( Stack[-2] != 0 )
0x178: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x179: @ RotatePath(Stack[-2], Stack[-1])
0x17a: Pop(0)
0x17b: Push(Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17d: PushEmpty(bool)
0x17e: Call2 0x1ad

0x17f: Pop(0)
0x180: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x181: Pop(1)
0x182: Stack[-2] = 0
0x183: Push(Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x185: PushEmpty()
0x186: Push(-0, 0); TaskCall(4)
0x187: Call2 0x1f7

0x188: Pop(-0, 0); TaskReturn
0x189: Pop(0)
0x18a: GOTO 0x18e

0x18b: Push((int) 1)
0x18c: @ Sleep(Stack[-1])
0x18d: Pop(1)
0x18e: Stack[-2] = 0
0x18f: GOTO 0x15e

0x190: Return(); Pop(12)

0x191: PushEmpty(float, float)
0x192: @ GetCameraFarDistance(Stack[-1])
0x193: Pop(0)
0x194: Stack[-3] = Stack[-1]
0x195: Return(); Pop(2)

0x196: PushEmpty()
0x197: @ RequestClearPath(Stack[-1])
0x198: Pop(0)
0x199: Return(); Pop(0)

0x19a: @ Stop()
0x19b: Pop(0)
0x19c: Return(); Pop(0)

0x19d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x19e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x19f: @ Stop()
0x1a0: Pop(0)
0x1a1: @ StopGroup0()
0x1a2: Pop(0)
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: PushEmpty()
0x1a6: Call2 0x19d

0x1a7: Pop(0)
0x1a8: PushEmpty(object)
0x1a9: Stack[-1] = Stack[-2]
0x1aa: Call2 0xc0f

0x1ab: Pop(1)
0x1ac: Return(); Pop(0)

0x1ad: Stack[-1] = (bool) 0
0x1ae: Return(); Pop(0)

0x1af: PushEmpty(object, object)
0x1b0: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x1b1: Pop(0)
0x1b2: Stack[-4] = Stack[-1]
0x1b3: Return(); Pop(2)

0x1b4: Stack[-1] = 0
0x1b5: PushEmpty()
0x1b6: PushEmpty()
0x1b7: Call2 0x248

0x1b8: Pop(0)
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty()
0x1bb: PushEmpty(bool, object)
0x1bc: Stack[-1] = Stack[-3]
0x1bd: Call2 0xb96

0x1be: Pop(1)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c0: PushEmpty()
0x1c1: Call2 0x248

0x1c2: Pop(0)
0x1c3: PushEmpty(object)
0x1c4: Stack[-1] = Stack[-2]
0x1c5: Call2 0xb9d

0x1c6: Pop(1)
0x1c7: Return(); Pop(0)

0x1c8: PushEmpty()
0x1c9: PushEmpty(bool, object)
0x1ca: Stack[-1] = Stack[-3]
0x1cb: Call2 0xb89

0x1cc: Pop(1)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1ce: PushEmpty()
0x1cf: Call2 0x248

0x1d0: Pop(0)
0x1d1: PushEmpty(object)
0x1d2: Stack[-1] = Stack[-2]
0x1d3: Call2 0xb90

0x1d4: Pop(1)
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty()
0x1d7: PushEmpty(bool, object)
0x1d8: Stack[-1] = Stack[-3]
0x1d9: Call2 0x755

0x1da: Pop(1)
0x1db: Pop(1); Push((bool) Stack[-1] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: PushEmpty(object)
0x1de: Stack[-1] = Stack[-2]
0x1df: Call2 0xbae

0x1e0: Pop(1)
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty()
0x1e3: Call2 0x248

0x1e4: Pop(0)
0x1e5: PushEmpty(object)
0x1e6: Stack[-1] = Stack[-2]
0x1e7: Call2 0xbc6

0x1e8: Pop(1)
0x1e9: Return(); Pop(0)

0x1ea: PushEmpty()
0x1eb: PushEmpty(bool, object, object, bool)
0x1ec: Stack[-3] = Stack[-7]
0x1ed: Stack[-2] = Stack[-6]
0x1ee: Stack[-1] = Stack[-5]
0x1ef: Call2 0xc15

0x1f0: Pop(3)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f2: PushEmpty(object)
0x1f3: Stack[-1] = Stack[-4]
0x1f4: Call2 0x1d6

0x1f5: Pop(1)
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1f8: @ WaitForAnimEnd()
0x1f9: Pop(0)
0x1fa: PushEmpty(bool)
0x1fb: Call2 0x7f6

0x1fc: Pop(0)
0x1fd: Pop(1); Push((bool) Stack[-1] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: Return(); Pop(14)

0x200: PushEmpty(int)
0x201: Call2 0x965

0x202: Stack[-8] = Stack[-1]
0x203: Pop(1)
0x204: Stack[-6] = (int) 0
0x205: PushEmpty(bool)
0x206: Stack[-1] = (bool) 0
0x207: Push((int) 5)
0x208: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20a: PushEmpty(bool)
0x20b: Call2 0x7f6

0x20c: Pop(0)
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: Stack[-1] = (bool) 1
0x20f: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x210: Push((int) 3)
0x211: @ irand(Stack[-6], Stack[-1])
0x212: Pop(1)
0x213: Push((int) 0)
0x214: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x216: Push(Stack[-7])
0x217: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x218: @ irand(Stack[-4], Stack[-7])
0x219: Pop(0)
0x21a: Push("all")
0x21b: PushEmpty(string, int)
0x21c: Stack[-1] = Stack[-7]
0x21d: Call2 0x95e

0x21e: Pop(1)
0x21f: @ PlayAnimation(Stack[-2], Stack[-1])
0x220: Pop(2)
0x221: @ WaitForAnimEnd(Stack[-3])
0x222: Pop(0)
0x223: Pop(0); Push((bool) Stack[-3] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: GOTO 0x243

0x226: GOTO 0x238

0x227: Push((int) 1)
0x228: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22a: Push((int) 4)
0x22b: @ rand(Stack[-3], Stack[-1])
0x22c: Pop(1)
0x22d: Push((int) 1)
0x22e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x22f: @ Sleep(Stack[-1], Stack[-2])
0x230: Pop(1)
0x231: Pop(0); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x233: GOTO 0x243

0x234: GOTO 0x238

0x235: Push(Stack[-6])
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: GOTO 0x243

0x238: PushEmpty(bool)
0x239: Call2 0x246

0x23a: Pop(0)
0x23b: Pop(1); Push((bool) Stack[-1] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: GOTO 0x243

0x23e: @ ResetAAS()
0x23f: Pop(0)
0x240: Push((int) 1)
0x241: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x242: GOTO 0x205

0x243: @ ResetAAS()
0x244: Pop(0)
0x245: Return(); Pop(14)

0x246: Stack[-1] = (bool) 1
0x247: Return(); Pop(0)

0x248: @ StopAnimation()
0x249: Pop(0)
0x24a: @ StopGroup0()
0x24b: Pop(0)
0x24c: Return(); Pop(0)

0x24d: PushEmpty()
0x24e: PushEmpty(object)
0x24f: Stack[-1] = Stack[-2]
0x250: Call2 0xbae

0x251: Pop(1)
0x252: Return(); Pop(0)

0x253: PushEmpty()
0x254: PushEmpty(bool, object, object, bool)
0x255: Stack[-3] = Stack[-7]
0x256: Stack[-2] = Stack[-6]
0x257: Stack[-1] = Stack[-5]
0x258: Call2 0xc15

0x259: Pop(4)
0x25a: Return(); Pop(0)

0x25b: PushEmpty(bool, bool, bool, bool)
0x25c: PushEmpty(object)
0x25d: Stack[-1] = Stack[-10]
0x25e: Call2 0x94a

0x25f: Pop(1)
0x260: Push((int) 1)
0x261: Push((int) 5)
0x262: @ SetTimer(Stack[-2], Stack[-1])
0x263: Pop(2)
0x264: @ CanSee(Stack[-2], Stack[-9])
0x265: Pop(0)
0x266: Push(Stack[-2])
0x267: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x268: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x269: PushEmpty(object)
0x26a: Stack[-1] = Stack[-10]
0x26b: Call2 0x8ae

0x26c: Pop(1)
0x26d: GOTO 0x26f

0x26e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x26f: PushEmpty(bool, object)
0x270: Stack[-1] = Stack[-11]
0x271: Call2 0x6d2

0x272: Pop(1)
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: PushEmpty(object)
0x275: Call2 0x903

0x276: Pop(0)
0x277: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x278: Pop(1)
0x279: PushEmpty(bool, object, float, float, bool, bool)
0x27a: Stack[-5] = Stack[-15]
0x27b: Stack[-4] = Stack[-14]
0x27c: Stack[-3] = Stack[-13]
0x27d: Stack[-2] = Stack[-12]
0x27e: Stack[-1] = Stack[-11]
0x27f: Call2 0x2c4

0x280: Stack[-7] = Stack[-6]
0x281: Pop(6)
0x282: Push( Stack[2 + Tasks[-1].StackPointer] )
0x283: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x284: Push("head")
0x285: @ UnlookAsync(Stack[-1])
0x286: Pop(1)
0x287: Push((int) 1)
0x288: @ KillTimer(Stack[-1])
0x289: Pop(1)
0x28a: Stack[-10] = Stack[-1]
0x28b: Return(); Pop(4)

0x28c: PushEmpty()
0x28d: Push((int) 1)
0x28e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x290: PushEmpty(object)
0x291: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x292: Call2 0x94a

0x293: Pop(1)
0x294: GOTO 0x299

0x295: PushEmpty(int)
0x296: Stack[-1] = Stack[-2]
0x297: Call2 0x32a

0x298: Pop(1)
0x299: Return(); Pop(0)

0x29a: Push((int) 1)
0x29b: @ KillTimer(Stack[-1])
0x29c: Pop(1)
0x29d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x29e: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2a0: Push("head")
0x2a1: @ UnlookAsync(Stack[-1])
0x2a2: Pop(1)
0x2a3: PushEmpty()
0x2a4: Call2 0x340

0x2a5: Pop(0)
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty()
0x2a8: PushEmpty(bool)
0x2a9: Stack[-1] = (bool) 0
0x2aa: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ac: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: Stack[-1] = (bool) 1
0x2af: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2b1: PushEmpty(object)
0x2b2: Stack[-1] = Stack[-2]
0x2b3: Call2 0x8ae

0x2b4: Pop(1)
0x2b5: Return(); Pop(0)

0x2b6: PushEmpty()
0x2b7: PushEmpty(bool)
0x2b8: Stack[-1] = (bool) 0
0x2b9: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bb: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2bc: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bd: Stack[-1] = (bool) 1
0x2be: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2bf: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2c0: Push("head")
0x2c1: @ UnlookAsync(Stack[-1])
0x2c2: Pop(1)
0x2c3: Return(); Pop(0)

0x2c4: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x2c5: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2c6: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x2c7: Stack[-7] = Stack[-17]
0x2c8: PushEmpty(bool, object)
0x2c9: Stack[-1] = Stack[-23]
0x2ca: Call2 0x350

0x2cb: Pop(1)
0x2cc: Pop(1); Push((bool) Stack[-1] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-22] = (bool) 0
0x2cf: Return(); Pop(16)

0x2d0: @@ GetPosition(Stack[-5])
0x2d1: Pop(0)
0x2d2: @ GetPosition(Stack[-4])
0x2d3: Pop(0)
0x2d4: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2d5: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2d6: PushEmpty(bool)
0x2d7: Stack[-1] = (bool) 0
0x2d8: Push((int) 0)
0x2d9: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2db: Pop(0); Push(Stack[-20] * Stack[-20]);
0x2dc: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2de: Stack[-1] = (bool) 1
0x2df: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e0: @ Stop()
0x2e1: Pop(0)
0x2e2: Stack[-22] = (bool) 0
0x2e3: Return(); Pop(16)

0x2e4: Pop(0); Push(Stack[-20] * Stack[-20]);
0x2e5: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x2e7: @@ GetPFPosition(Stack[-5])
0x2e8: Pop(0)
0x2e9: @ FindPathTo(Stack[-1], Stack[-5])
0x2ea: Pop(0)
0x2eb: Pop(0); Push(( Stack[-1] != 0 )
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ed: Stack[-6] = Stack[-1]
0x2ee: Stack[-1] = 0
0x2ef: Pop(0); Push(( Stack[-6] != 0 )
0x2f0: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x2f1: Push(Stack[-7])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f3: Stack[-7] = (bool) 0
0x2f4: @ RotatePath(Stack[-6], Stack[-8])
0x2f5: Pop(0)
0x2f6: Pop(0); Push((bool) Stack[-8] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: GOTO 0x328

0x2f9: Push((int) 0)
0x2fa: Push((float)0.3)
0x2fb: @ SetTimer(Stack[-2], Stack[-1])
0x2fc: Pop(2)
0x2fd: PushEmpty(string)
0x2fe: Call2 0x357

0x2ff: Pop(0)
0x300: PushEmpty(string)
0x301: Call2 0x359

0x302: Pop(0)
0x303: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x304: Pop(2)
0x305: Pop(0); Push((bool) Stack[-8] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x307: Push( Stack[0 + Tasks[-1].StackPointer] )
0x308: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x309: Stack[-6] = 0
0x30a: GOTO 0x328

0x30b: GOTO 0x30d

0x30c: GOTO 0x327

0x30d: GOTO 0x30f

0x30e: Stack[-6] = 0
0x30f: GOTO 0x320

0x310: Push((int) 0)
0x311: @ KillTimer(Stack[-1])
0x312: Pop(1)
0x313: Push((float)0.5)
0x314: @ Sleep(Stack[-1], Stack[-9])
0x315: Pop(1)
0x316: Pop(0); Push((bool) Stack[-8] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x318: Push( Stack[0 + Tasks[-1].StackPointer] )
0x319: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31a: Stack[-6] = 0
0x31b: GOTO 0x328

0x31c: Push((int) 0)
0x31d: Push((float)0.3)
0x31e: @ SetTimer(Stack[-2], Stack[-1])
0x31f: Pop(2)
0x320: Stack[-1] = 0
0x321: GOTO 0x326

0x322: Push((int) 0)
0x323: @ KillTimer(Stack[-1])
0x324: Pop(1)
0x325: GOTO 0x328

0x326: Stack[-6] = 0
0x327: GOTO 0x2c8

0x328: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x329: Return(); Pop(16)

0x32a: PushEmpty()
0x32b: Push((int) 0)
0x32c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32e: Return(); Pop(0)

0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x331: Call2 0x350

0x332: Pop(1)
0x333: Pop(1); Push((bool) Stack[-1] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x335: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x336: Push((int) 0)
0x337: @ KillTimer(Stack[-1])
0x338: Pop(1)
0x339: @ Stop()
0x33a: Pop(0)
0x33b: Return(); Pop(0)

0x33c: PushEmpty()
0x33d: @ RequestClearPath(Stack[-1])
0x33e: Pop(0)
0x33f: Return(); Pop(0)

0x340: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x341: Push((int) 0)
0x342: @ KillTimer(Stack[-1])
0x343: Pop(1)
0x344: @ Stop()
0x345: Pop(0)
0x346: Return(); Pop(0)

0x347: PushEmpty()
0x348: PushEmpty()
0x349: Call2 0x29a

0x34a: Pop(0)
0x34b: PushEmpty(object)
0x34c: Stack[-1] = Stack[-2]
0x34d: Call2 0xc0f

0x34e: Pop(1)
0x34f: Return(); Pop(0)

0x350: PushEmpty()
0x351: PushEmpty(bool, object)
0x352: Stack[-1] = Stack[-3]
0x353: Call2 0x755

0x354: Stack[-4] = Stack[-2]
0x355: Pop(2)
0x356: Return(); Pop(0)

0x357: Stack[-1] = "walk"
0x358: Return(); Pop(0)

0x359: Stack[-1] = "run"
0x35a: Return(); Pop(0)

0x35b: PushEmpty()
0x35c: PushEmpty(object, bool, float)
0x35d: Stack[-3] = Stack[-5]
0x35e: Stack[-2] = Stack[-4]
0x35f: Stack[-1] = (float) 180.0
0x360: Call2 0x377

0x361: Pop(3)
0x362: Return(); Pop(0)

0x363: PushEmpty()
0x364: Stack[-3] = (float) 0.1
0x365: Return(); Pop(0)

0x366: PushEmpty()
0x367: Stack[-3] = (int) 0
0x368: Return(); Pop(0)

0x369: PushEmpty()
0x36a: PushEmpty(object)
0x36b: Stack[-1] = Stack[-2]
0x36c: Call2 0xbae

0x36d: Pop(1)
0x36e: Return(); Pop(0)

0x36f: PushEmpty()
0x370: PushEmpty(bool, object, object, bool)
0x371: Stack[-3] = Stack[-7]
0x372: Stack[-2] = Stack[-6]
0x373: Stack[-1] = Stack[-5]
0x374: Call2 0xc15

0x375: Pop(4)
0x376: Return(); Pop(0)

0x377: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x378: PushEmpty()
0x379: Call2 0x45c

0x37a: Pop(0)
0x37b: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x37c: Push("@GetAttackDistance")
0x37d: Push((int) 1)
0x37e: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x37f: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x380: @@ GetAttackDistance(Stack[-11])
0x381: Pop(0)
0x382: Push((int) 50)
0x383: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x384: GOTO 0x386

0x385: Stack[-11] = Stack[-23]
0x386: Push((int) 150)
0x387: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x389: Stack[-11] = (int) 150
0x38a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x38b: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x38c: @ IsPlayerActor(Stack[-0], Stack[-8])
0x38d: Pop(0)
0x38e: Push(Stack[-8])
0x38f: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x390: Push("attack")
0x391: @ PlayGlobalMusic(Stack[-1])
0x392: Pop(1)
0x393: PushEmpty(object)
0x394: Call2 0x903

0x395: Pop(0)
0x396: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x397: Pop(1)
0x398: Push(Stack[-24])
0x399: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39a: Stack[-7] = (bool) 0
0x39b: GOTO 0x39d

0x39c: Stack[-7] = (bool) 1
0x39d: Push((float)300.0)
0x39e: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x39f: PushEmpty(bool)
0x3a0: Stack[-1] = (bool) 0
0x3a1: PushEmpty(bool, object)
0x3a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a3: Call2 0x755

0x3a4: Pop(1)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a6: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a8: Stack[-1] = (bool) 1
0x3a9: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x3aa: PushEmpty()
0x3ab: Call2 0x5f9

0x3ac: Pop(0)
0x3ad: @@ GetPFPosition(Stack[-10])
0x3ae: Pop(0)
0x3af: @ GetPFPosition(Stack[-9])
0x3b0: Pop(0)
0x3b1: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x3b2: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3b3: Pop(0); Push(Stack[-6] * Stack[-6]);
0x3b4: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3b6: PushEmpty(bool, object, float, float, bool, bool)
0x3b7: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x3b8: Stack[-4] = Stack[-17]
0x3b9: Stack[-3] = (float) 3000.0
0x3ba: Stack[-2] = (bool) 1
0x3bb: Stack[-1] = (bool) 0
0x3bc: Push(-6, 3); TaskCall(5)
0x3bd: Call2 0x25b

0x3be: Pop(-6, 3); TaskReturn
0x3bf: Pop(5)
0x3c0: Pop(1); Push((bool) Stack[-1] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c2: GOTO 0x44b

0x3c3: Stack[-7] = (bool) 0
0x3c4: GOTO 0x44a

0x3c5: Pop(0); Push(Stack[-23] * Stack[-23]);
0x3c6: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x3c8: @@ GetPFPosition(Stack[-3])
0x3c9: Pop(0)
0x3ca: @ CanReachByPF(Stack[-2], Stack[-3])
0x3cb: Pop(0)
0x3cc: Pop(0); Push((bool) Stack[-2] == 0)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3ce: PushEmpty(bool, object, float, float, bool, bool)
0x3cf: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x3d0: Stack[-4] = Stack[-17]
0x3d1: Stack[-3] = (float) 3000.0
0x3d2: Stack[-2] = (bool) 1
0x3d3: Stack[-1] = (bool) 0
0x3d4: Push(-6, 3); TaskCall(5)
0x3d5: Call2 0x25b

0x3d6: Pop(-6, 3); TaskReturn
0x3d7: Pop(5)
0x3d8: Pop(1); Push((bool) Stack[-1] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3da: GOTO 0x44b

0x3db: Stack[-7] = (bool) 0
0x3dc: GOTO 0x39f

0x3dd: Pop(0); Push((bool) Stack[-7] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3df: PushEmpty(object)
0x3e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e1: Call2 0x7eb

0x3e2: Pop(1)
0x3e3: Push("all")
0x3e4: Push("attack_on")
0x3e5: @ PlayAnimation(Stack[-2], Stack[-1])
0x3e6: Pop(2)
0x3e7: @ WaitForAnimEnd()
0x3e8: Pop(0)
0x3e9: PushEmpty()
0x3ea: Call2 0x5f9

0x3eb: Pop(0)
0x3ec: @ StopAsync()
0x3ed: Pop(0)
0x3ee: Stack[-7] = (bool) 1
0x3ef: PushEmpty(bool, object)
0x3f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f1: Call2 0x755

0x3f2: Pop(1)
0x3f3: Pop(1); Push((bool) Stack[-1] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f5: GOTO 0x44b

0x3f6: @ rand(Stack[-1])
0x3f7: Pop(0)
0x3f8: PushEmpty(bool)
0x3f9: Stack[-1] = (bool) 1
0x3fa: Push((float)0.6)
0x3fb: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fd: PushEmpty(bool)
0x3fe: Call2 0x5ce

0x3ff: Pop(0)
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: Stack[-1] = (bool) 0
0x402: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x403: @ Face(Stack[-0])
0x404: Pop(0)
0x405: PushEmpty()
0x406: Call2 0x600

0x407: Pop(0)
0x408: Push("all")
0x409: Push("attack_stay")
0x40a: @ PlayAnimation(Stack[-2], Stack[-1])
0x40b: Pop(2)
0x40c: PushEmpty(bool, float)
0x40d: Stack[-1] = Stack[-25]
0x40e: Call2 0x54a

0x40f: Pop(2)
0x410: @ StopAsync()
0x411: Pop(0)
0x412: GOTO 0x441

0x413: @ Face(Stack[-0])
0x414: Pop(0)
0x415: Push("all")
0x416: Push("fjump")
0x417: @ PlayAnimation(Stack[-2], Stack[-1])
0x418: Pop(2)
0x419: @ WaitForAnimEnd()
0x41a: Pop(0)
0x41b: PushEmpty()
0x41c: Call2 0x5f9

0x41d: Pop(0)
0x41e: Push(CVector(0.0, 0.0, 0.0))
0x41f: @ SetSpeed(Stack[-1])
0x420: Pop(1)
0x421: @ Stop()
0x422: Pop(0)
0x423: @ StopAsync()
0x424: Pop(0)
0x425: PushEmpty(bool)
0x426: Call2 0x5ce

0x427: Pop(0)
0x428: Pop(1); Push((bool) Stack[-1] == 0)
0x429: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x42a: PushEmpty(bool, object)
0x42b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42c: Call2 0x755

0x42d: Pop(1)
0x42e: Pop(1); Push((bool) Stack[-1] == 0)
0x42f: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x430: GOTO 0x44b

0x431: @@ GetPFPosition(Stack[-10])
0x432: Pop(0)
0x433: @ GetPFPosition(Stack[-9])
0x434: Pop(0)
0x435: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x436: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x437: Pop(0); Push(Stack[-23] * Stack[-23]);
0x438: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43a: PushEmpty(bool, float)
0x43b: Stack[-1] = Stack[-25]
0x43c: Call2 0x4a6

0x43d: Pop(1)
0x43e: Pop(1); Push((bool) Stack[-1] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: GOTO 0x44b

0x441: GOTO 0x44a

0x442: PushEmpty(bool, float)
0x443: Stack[-1] = Stack[-25]
0x444: Call2 0x4a6

0x445: Pop(1)
0x446: Pop(1); Push((bool) Stack[-1] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x448: GOTO 0x44b

0x449: Stack[-7] = (bool) 1
0x44a: GOTO 0x39f

0x44b: @ WaitForAnimEnd()
0x44c: Pop(0)
0x44d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x44e: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44f: Return(); Pop(22)

0x450: Push("all")
0x451: Push("attack_off")
0x452: @ PlayAnimation(Stack[-2], Stack[-1])
0x453: Pop(2)
0x454: @ WaitForAnimEnd()
0x455: Pop(0)
0x456: Push(Stack[-8])
0x457: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x458: Push((float)2.0)
0x459: @ Sleep(Stack[-1])
0x45a: Pop(1)
0x45b: Return(); Pop(22)

0x45c: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x45d: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x45e: Push("all")
0x45f: Push("attack_begin")
0x460: Push((int) 1)
0x461: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x462: Pop(2); Push(Stack[-2] + Stack[-1]);
0x463: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x464: Pop(2)
0x465: Pop(0); Push((bool) Stack[-3] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x467: GOTO 0x46b

0x468: Push((int) 1)
0x469: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x46a: GOTO 0x45e

0x46b: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x46c: Push("attack")
0x46d: Push((int) 1)
0x46e: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x46f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x470: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x471: Pop(1)
0x472: Pop(0); Push((bool) Stack[-2] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: GOTO 0x478

0x475: Push((int) 1)
0x476: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x477: GOTO 0x46c

0x478: Push("all")
0x479: Push("bjump")
0x47a: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(2)
0x47c: Push(CvectorIndex(Stack[-1], 2))
0x47d: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x47e: Return(); Pop(6)

0x47f: PushEmpty(object, float, float, object, float, float)
0x480: Push((float)0.9)
0x481: Pop(1); Push(Stack[-9] * Stack[-1]);
0x482: @ GetVictim(Stack[-1], Stack[-4])
0x483: Pop(1)
0x484: @ ReportAttack(Stack[-0])
0x485: Pop(0)
0x486: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x487: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x488: PushEmpty(float, object, int)
0x489: Stack[-2] = Stack[-6]
0x48a: Stack[-1] = Stack[-10]
0x48b: Call2 0x363

0x48c: Stack[-5] = Stack[-3]
0x48d: Pop(3)
0x48e: PushEmpty(float, object, float, int)
0x48f: Stack[-3] = Stack[-7]
0x490: Stack[-2] = Stack[-6]
0x491: PushEmpty(int, object, int)
0x492: Stack[-2] = Stack[-10]
0x493: Stack[-1] = Stack[-14]
0x494: Call2 0x366

0x495: Stack[-4] = Stack[-3]
0x496: Pop(3)
0x497: Call2 0x6e3

0x498: Stack[-5] = Stack[-4]
0x499: Pop(4)
0x49a: PushEmpty(int)
0x49b: Call2 0x5fe

0x49c: Pop(0)
0x49d: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x49e: Pop(1)
0x49f: PushEmpty(object, float)
0x4a0: Stack[-2] = Stack[-5]
0x4a1: Stack[-1] = Stack[-3]
0x4a2: Call2 0x605

0x4a3: Pop(2)
0x4a4: Return(); Pop(6)

0x4a5: Stack[-3] = 0
0x4a6: PushEmpty(int, bool, int, string, int, bool, int, string)
0x4a7: PushEmpty()
0x4a8: Call2 0x5f9

0x4a9: Pop(0)
0x4aa: @ irand(Stack[-4], Stack[-1])
0x4ab: Pop(0)
0x4ac: Push((int) 1)
0x4ad: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4ae: @ Face(Stack[-0])
0x4af: Pop(0)
0x4b0: Push((bool) 1)
0x4b1: @ SetAttackState(Stack[-1])
0x4b2: Pop(1)
0x4b3: PushEmpty()
0x4b4: Call2 0x953

0x4b5: Pop(0)
0x4b6: Push("all")
0x4b7: Push("attack_begin")
0x4b8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4b9: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ba: Pop(2)
0x4bb: @ WaitForAnimEnd()
0x4bc: Pop(0)
0x4bd: PushEmpty()
0x4be: Call2 0x5d9

0x4bf: Pop(0)
0x4c0: PushEmpty(bool, object)
0x4c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c2: Call2 0x755

0x4c3: Pop(1)
0x4c4: Pop(1); Push((bool) Stack[-1] == 0)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c6: @ StopAsync()
0x4c7: Pop(0)
0x4c8: Stack[-10] = (bool) 0
0x4c9: Return(); Pop(8)

0x4ca: PushEmpty(float, int)
0x4cb: Stack[-2] = Stack[-11]
0x4cc: Stack[-1] = Stack[-6]
0x4cd: Call2 0x47f

0x4ce: Pop(2)
0x4cf: Push("all")
0x4d0: Push("attack_middle")
0x4d1: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4d2: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x4d3: Pop(2)
0x4d4: Push(Stack[-3])
0x4d5: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x4d6: PushEmpty()
0x4d7: Call2 0x953

0x4d8: Pop(0)
0x4d9: Push("all")
0x4da: Push("attack_middle")
0x4db: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4dc: @ PlayAnimation(Stack[-2], Stack[-1])
0x4dd: Pop(2)
0x4de: @ WaitForAnimEnd()
0x4df: Pop(0)
0x4e0: PushEmpty()
0x4e1: Call2 0x5f9

0x4e2: Pop(0)
0x4e3: PushEmpty(bool, object)
0x4e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e5: Call2 0x755

0x4e6: Pop(1)
0x4e7: Pop(1); Push((bool) Stack[-1] == 0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e9: @ StopAsync()
0x4ea: Pop(0)
0x4eb: Stack[-10] = (bool) 0
0x4ec: Return(); Pop(8)

0x4ed: PushEmpty(float, int)
0x4ee: Stack[-2] = Stack[-11]
0x4ef: Stack[-1] = Stack[-6]
0x4f0: Call2 0x47f

0x4f1: Pop(2)
0x4f2: Stack[-2] = (int) 1
0x4f3: Push("attack_middle")
0x4f4: Pop(1); Push(Stack[-1] + Stack[-5]);
0x4f5: Push("_")
0x4f6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4f7: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x4f8: Push("all")
0x4f9: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x4fa: Pop(1)
0x4fb: Pop(0); Push((bool) Stack[-3] == 0)
0x4fc: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fd: GOTO 0x51b

0x4fe: PushEmpty()
0x4ff: Call2 0x953

0x500: Pop(0)
0x501: Push("all")
0x502: @ PlayAnimation(Stack[-1], Stack[-2])
0x503: Pop(1)
0x504: @ WaitForAnimEnd()
0x505: Pop(0)
0x506: PushEmpty()
0x507: Call2 0x5f9

0x508: Pop(0)
0x509: PushEmpty(bool, object)
0x50a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x50b: Call2 0x755

0x50c: Pop(1)
0x50d: Pop(1); Push((bool) Stack[-1] == 0)
0x50e: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x50f: @ StopAsync()
0x510: Pop(0)
0x511: Stack[-10] = (bool) 0
0x512: Return(); Pop(8)

0x513: PushEmpty(float, int)
0x514: Stack[-2] = Stack[-11]
0x515: Stack[-1] = Stack[-6]
0x516: Call2 0x47f

0x517: Pop(2)
0x518: Push((int) 1)
0x519: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x51a: GOTO 0x4f3

0x51b: Push((bool) 0)
0x51c: @ SetAttackState(Stack[-1])
0x51d: Pop(1)
0x51e: Push("all")
0x51f: Push("attack_end")
0x520: Pop(1); Push(Stack[-1] + Stack[-6]);
0x521: @ PlayAnimation(Stack[-2], Stack[-1])
0x522: Pop(2)
0x523: PushEmpty(bool)
0x524: Call2 0x607

0x525: Pop(0)
0x526: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x527: PushEmpty(bool, float)
0x528: Stack[-1] = (float) 0.75
0x529: Call2 0x52f

0x52a: Pop(2)
0x52b: @ StopAsync()
0x52c: Pop(0)
0x52d: Stack[-10] = (bool) 1
0x52e: Return(); Pop(8)

0x52f: PushEmpty(float, bool, float, bool)
0x530: @ rand(Stack[-2])
0x531: Pop(0)
0x532: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x533: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x534: @ IsAnimationPlaying(Stack[-1])
0x535: Pop(0)
0x536: Pop(0); Push((bool) Stack[-1] == 0)
0x537: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x538: GOTO 0x542

0x539: PushEmpty(bool)
0x53a: Call2 0x591

0x53b: Pop(0)
0x53c: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53d: Stack[-6] = (bool) 1
0x53e: Return(); Pop(4)

0x53f: @ sync()
0x540: Pop(0)
0x541: GOTO 0x534

0x542: GOTO 0x548

0x543: @ WaitForAnimEnd()
0x544: Pop(0)
0x545: PushEmpty()
0x546: Call2 0x5f9

0x547: Pop(0)
0x548: Stack[-6] = (bool) 0
0x549: Return(); Pop(4)

0x54a: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x54b: @ IsAnimationPlaying(Stack[-5])
0x54c: Pop(0)
0x54d: Pop(0); Push((bool) Stack[-5] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: GOTO 0x570

0x550: PushEmpty(bool)
0x551: Call2 0x591

0x552: Pop(0)
0x553: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x554: Stack[-12] = (bool) 1
0x555: Return(); Pop(10)

0x556: PushEmpty(bool, object)
0x557: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x558: Call2 0x755

0x559: Pop(1)
0x55a: Pop(1); Push((bool) Stack[-1] == 0)
0x55b: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55c: Stack[-12] = (bool) 0
0x55d: Return(); Pop(10)

0x55e: @@ GetPFPosition(Stack[-4])
0x55f: Pop(0)
0x560: @ GetPFPosition(Stack[-3])
0x561: Pop(0)
0x562: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x563: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x564: Pop(0); Push(Stack[-11] * Stack[-11]);
0x565: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x567: PushEmpty(bool, float)
0x568: Stack[-1] = Stack[-13]
0x569: Call2 0x4a6

0x56a: Pop(2)
0x56b: Stack[-12] = (bool) 1
0x56c: Return(); Pop(10)

0x56d: @ sync()
0x56e: Pop(0)
0x56f: GOTO 0x54b

0x570: PushEmpty()
0x571: Call2 0x5f9

0x572: Pop(0)
0x573: Stack[-12] = (bool) 0
0x574: Return(); Pop(10)

0x575: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x576: PushEmpty(bool, object)
0x577: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x578: Call2 0x755

0x579: Pop(1)
0x57a: Pop(1); Push((bool) Stack[-1] == 0)
0x57b: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x57c: Stack[-11] = (bool) 0
0x57d: Return(); Pop(10)

0x57e: PushEmpty(bool)
0x57f: Call2 0x5ce

0x580: Pop(0)
0x581: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x582: @@ GetPFPosition(Stack[-5])
0x583: Pop(0)
0x584: @ GetPFPosition(Stack[-4])
0x585: Pop(0)
0x586: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x587: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x588: @@ GetAttackDistance(Stack[-1])
0x589: Pop(0)
0x58a: Push((int) 50)
0x58b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x58c: Pop(0); Push(Stack[-1] * Stack[-1]);
0x58d: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x58e: Return(); Pop(10)

0x58f: Stack[-11] = (bool) 0
0x590: Return(); Pop(10)

0x591: PushEmpty(bool)
0x592: Stack[-1] = (bool) 0
0x593: PushEmpty(bool)
0x594: Call2 0x575

0x595: Pop(0)
0x596: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x597: PushEmpty(bool)
0x598: Call2 0x5a1

0x599: Pop(0)
0x59a: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59b: Stack[-1] = (bool) 1
0x59c: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59d: Stack[-1] = (bool) 1
0x59e: Return(); Pop(0)

0x59f: Stack[-1] = (bool) 0
0x5a0: Return(); Pop(0)

0x5a1: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x5a2: @ GetScene(Stack[-5])
0x5a3: Pop(0)
0x5a4: Stack[-4] = (bool) 0
0x5a5: PushEmpty(cvector, object)
0x5a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a7: Call2 0x6c3

0x5a8: Pop(1)
0x5a9: Pop(1); Push(( -Stack[-1])
0x5aa: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x5ab: Pop(1)
0x5ac: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ae: GOTO 0x5cb

0x5af: @ Face(Stack[-0])
0x5b0: Pop(0)
0x5b1: Push("all")
0x5b2: Push("bjump")
0x5b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x5b4: Pop(2)
0x5b5: @@ GetPFPosition(Stack[-2])
0x5b6: Pop(0)
0x5b7: @ GetPFPosition(Stack[-1])
0x5b8: Pop(0)
0x5b9: @ WaitForAnimEnd()
0x5ba: Pop(0)
0x5bb: PushEmpty()
0x5bc: Call2 0x5f9

0x5bd: Pop(0)
0x5be: @ StopAsync()
0x5bf: Pop(0)
0x5c0: Push(CVector(0.0, 0.0, 0.0))
0x5c1: @ SetSpeed(Stack[-1])
0x5c2: Pop(1)
0x5c3: Stack[-4] = (bool) 1
0x5c4: PushEmpty(bool)
0x5c5: Call2 0x575

0x5c6: Pop(0)
0x5c7: Pop(1); Push((bool) Stack[-1] == 0)
0x5c8: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c9: GOTO 0x5cb

0x5ca: GOTO 0x5a5

0x5cb: Stack[-11] = Stack[-4]
0x5cc: Return(); Pop(10)

0x5cd: Stack[-5] = 0
0x5ce: PushEmpty(bool, bool)
0x5cf: Push("IsAttacking")
0x5d0: Push((int) 1)
0x5d1: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d3: @@ IsAttacking(Stack[-1])
0x5d4: Pop(0)
0x5d5: Stack[-3] = Stack[-1]
0x5d6: Return(); Pop(2)

0x5d7: Stack[-3] = (bool) 0
0x5d8: Return(); Pop(2)

0x5d9: PushEmpty(float, int, float, int)
0x5da: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x5db: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5dc: Return(); Pop(4)

0x5dd: Push( Stack[5 + Tasks[-1].StackPointer] )
0x5de: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5df: Push((int) -1)
0x5e0: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x5e1: Push((int) 0)
0x5e2: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e4: Return(); Pop(4)

0x5e5: @ rand(Stack[-2])
0x5e6: Pop(0)
0x5e7: PushEmpty(float)
0x5e8: Call2 0x60b

0x5e9: Pop(0)
0x5ea: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x5eb: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5ec: @ irand(Stack[-1], Stack[-2])
0x5ed: Pop(0)
0x5ee: Push((int) 1)
0x5ef: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5f0: Push("attack")
0x5f1: Pop(1); Push(Stack[-1] + Stack[-2]);
0x5f2: @ Speak(Stack[-1])
0x5f3: Pop(1)
0x5f4: PushEmpty(int)
0x5f5: Call2 0x609

0x5f6: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x5f7: Pop(1)
0x5f8: Return(); Pop(4)

0x5f9: PushEmpty(object)
0x5fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5fb: Call2 0x94a

0x5fc: Pop(1)
0x5fd: Return(); Pop(0)

0x5fe: Stack[-1] = (int) 0
0x5ff: Return(); Pop(0)

0x600: PushEmpty(string)
0x601: Stack[-1] = "attack_stay"
0x602: Call2 0x8da

0x603: Pop(1)
0x604: Return(); Pop(0)

0x605: PushEmpty()
0x606: Return(); Pop(0)

0x607: Stack[-1] = (bool) 1
0x608: Return(); Pop(0)

0x609: Stack[-1] = (int) 1
0x60a: Return(); Pop(0)

0x60b: Stack[-1] = (float) 0.5
0x60c: Return(); Pop(0)

0x60d: PushEmpty(bool, bool)
0x60e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x60f: Pop(0)
0x610: Push(Stack[-1])
0x611: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x612: PushEmpty()
0x613: Call2 0x9e2

0x614: Pop(0)
0x615: GOTO 0x619

0x616: PushEmpty()
0x617: Call2 0xa61

0x618: Pop(0)
0x619: PushEmpty()
0x61a: Call2 0x9ca

0x61b: Pop(0)
0x61c: PushEmpty(object)
0x61d: Stack[-1] = Stack[-4]
0x61e: Call2 0x621

0x61f: Pop(1)
0x620: Return(); Pop(2)

0x621: PushEmpty()
0x622: EventDisable(0)
0x623: PushEmpty(object)
0x624: Stack[-1] = Stack[-2]
0x625: Call2 0x63a

0x626: Pop(1)
0x627: Push((int) 50)
0x628: Push((int) 40)
0x629: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x62a: Pop(2)
0x62b: EventEnable(0)
0x62c: @ Hold()
0x62d: Pop(0)
0x62e: GOTO 0x62c

0x62f: Return(); Pop(0)

0x630: PushEmpty(bool, bool)
0x631: @ IsOverrideActive(Stack[-1])
0x632: Pop(0)
0x633: Pop(0); Push((bool) Stack[-1] == 0)
0x634: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x635: PushEmpty(object)
0x636: Stack[-1] = Stack[-4]
0x637: Call2 0x98d

0x638: Pop(1)
0x639: Return(); Pop(2)

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
0x680: Call2 0x8da

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
0x6a2: Call2 0x8da

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

0x6b5: PushEmpty()
0x6b6: Push((int) 2)
0x6b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6b9: Stack[-2] = "fire"
0x6ba: Return(); Pop(0)

0x6bb: GOTO 0x6c1

0x6bc: Push((int) 1)
0x6bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6bf: Stack[-2] = "bullet"
0x6c0: Return(); Pop(0)

0x6c1: Stack[-2] = "phys"
0x6c2: Return(); Pop(0)

0x6c3: PushEmpty(cvector, cvector, cvector, cvector)
0x6c4: @ GetPosition(Stack[-2])
0x6c5: Pop(0)
0x6c6: @@ GetPosition(Stack[-1])
0x6c7: Pop(0)
0x6c8: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x6c9: Return(); Pop(4)

0x6ca: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6cb: @ GetPosition(Stack[-3])
0x6cc: Pop(0)
0x6cd: @@ GetPosition(Stack[-2])
0x6ce: Pop(0)
0x6cf: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x6d0: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x6d1: Return(); Pop(6)

0x6d2: PushEmpty(bool, bool)
0x6d3: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6d4: Pop(0)
0x6d5: Stack[-4] = Stack[-1]
0x6d6: Return(); Pop(2)

0x6d7: PushEmpty(bool, bool)
0x6d8: Push("HasProperty")
0x6d9: Push((int) 2)
0x6da: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x6db: Pop(1); Push((bool) Stack[-1] == 0)
0x6dc: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6dd: Stack[-5] = (bool) 0
0x6de: Return(); Pop(2)

0x6df: @@ HasProperty(Stack[-3], Stack[-1])
0x6e0: Pop(0)
0x6e1: Stack[-5] = Stack[-1]
0x6e2: Return(); Pop(2)

0x6e3: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x6e4: PushEmpty(bool, object, string)
0x6e5: Stack[-2] = Stack[-18]
0x6e6: Stack[-1] = "health"
0x6e7: Call2 0x6d7

0x6e8: Pop(2)
0x6e9: Pop(1); Push((bool) Stack[-1] == 0)
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6eb: Stack[-16] = (float) 0.0
0x6ec: Return(); Pop(12)

0x6ed: PushEmpty(bool, object, string)
0x6ee: Stack[-2] = Stack[-18]
0x6ef: Stack[-1] = "armor"
0x6f0: Call2 0x6d7

0x6f1: Pop(2)
0x6f2: Pop(1); Push((bool) Stack[-1] == 0)
0x6f3: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f4: Stack[-6] = (int) 0
0x6f5: GOTO 0x6f9

0x6f6: Push("armor")
0x6f7: @@ GetProperty(Stack[-1], Stack[-7])
0x6f8: Pop(1)
0x6f9: Push("armor_")
0x6fa: PushEmpty(string, int)
0x6fb: Stack[-1] = Stack[-16]
0x6fc: Call2 0x6b5

0x6fd: Pop(1)
0x6fe: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6ff: PushEmpty(bool, object, string)
0x700: Stack[-2] = Stack[-18]
0x701: Stack[-1] = Stack[-8]
0x702: Call2 0x6d7

0x703: Pop(2)
0x704: Pop(1); Push((bool) Stack[-1] == 0)
0x705: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x706: Stack[-4] = (int) 0
0x707: GOTO 0x70a

0x708: @@ GetProperty(Stack[-5], Stack[-4])
0x709: Pop(0)
0x70a: PushEmpty(float, float, float)
0x70b: Pop(0); Push(Stack[-9] + Stack[-7]);
0x70c: Push((float)100.0)
0x70d: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x70e: Stack[-1] = (int) 1
0x70f: Call2 0x913

0x710: Stack[-6] = Stack[-3]
0x711: Pop(3)
0x712: Push("health")
0x713: @@ GetProperty(Stack[-1], Stack[-3])
0x714: Pop(1)
0x715: Push((int) 1)
0x716: Pop(1); Push(Stack[-1] - Stack[-4]);
0x717: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x718: Push("health")
0x719: PushEmpty(float, float, float, float)
0x71a: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x71b: Stack[-2] = (int) 0
0x71c: Stack[-1] = (int) 1
0x71d: Call2 0x91a

0x71e: Pop(3)
0x71f: @@ SetProperty(Stack[-2], Stack[-1])
0x720: Pop(2)
0x721: PushEmpty(bool, object)
0x722: Stack[-1] = Stack[-17]
0x723: Call2 0x6d2

0x724: Pop(1)
0x725: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x726: PushEmpty(float)
0x727: Stack[-1] = -Stack[-2]; Pop(0);
0x728: Call2 0x930

0x729: Pop(1)
0x72a: Stack[-16] = Stack[-1]
0x72b: Return(); Pop(12)

0x72c: PushEmpty(bool, bool)
0x72d: @@ IsDead(Stack[-1])
0x72e: Pop(0)
0x72f: Stack[-4] = Stack[-1]
0x730: Return(); Pop(2)

0x731: PushEmpty(object, object, object, object)
0x732: Pop(0); Push((bool) Stack[-5] == 0)
0x733: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x734: Stack[-6] = (bool) 0
0x735: Return(); Pop(4)

0x736: PushEmpty(bool)
0x737: Stack[-1] = (bool) 0
0x738: Push("IsDead")
0x739: Push((int) 1)
0x73a: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x73b: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73c: PushEmpty(bool, object)
0x73d: Stack[-1] = Stack[-8]
0x73e: Call2 0x72c

0x73f: Pop(1)
0x740: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x741: Stack[-1] = (bool) 1
0x742: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x743: Stack[-6] = (bool) 0
0x744: Return(); Pop(4)

0x745: @ GetScene(Stack[-2])
0x746: Pop(0)
0x747: Pop(0); Push((bool) Stack[-2] == 0)
0x748: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x749: Stack[-6] = (bool) 0
0x74a: Return(); Pop(4)

0x74b: @@ GetScene(Stack[-1])
0x74c: Pop(0)
0x74d: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x74e: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x74f: Stack[-6] = (bool) 0
0x750: Return(); Pop(4)

0x751: Stack[-6] = (bool) 1
0x752: Return(); Pop(4)

0x753: Stack[-1] = 0
0x754: Stack[-2] = 0
0x755: PushEmpty(int, int)
0x756: PushEmpty(bool, object)
0x757: Stack[-1] = Stack[-5]
0x758: Call2 0x731

0x759: Pop(1)
0x75a: Pop(1); Push((bool) Stack[-1] == 0)
0x75b: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x75c: Stack[-4] = (bool) 0
0x75d: Return(); Pop(2)

0x75e: PushEmpty(bool, object, string)
0x75f: Stack[-2] = Stack[-6]
0x760: Stack[-1] = "noaccess"
0x761: Call2 0x6d7

0x762: Pop(2)
0x763: Pop(1); Push((bool) Stack[-1] == 0)
0x764: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x765: Stack[-4] = (bool) 1
0x766: Return(); Pop(2)

0x767: Push("noaccess")
0x768: @@ GetProperty(Stack[-1], Stack[-2])
0x769: Pop(1)
0x76a: Push((int) 0)
0x76b: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x76c: Return(); Pop(2)

0x76d: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x76e: Pop(0); Push((bool) Stack[-15] == 0)
0x76f: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x770: Return(); Pop(14)

0x771: @ IsDead(Stack[-7])
0x772: Pop(0)
0x773: Push(Stack[-7])
0x774: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x775: Return(); Pop(14)

0x776: @ GetSecondaryAnimationType(Stack[-6])
0x777: Pop(0)
0x778: Push((int) 0)
0x779: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x77a: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77b: Return(); Pop(14)

0x77c: @@ GetPosition(Stack[-5])
0x77d: Pop(0)
0x77e: @ GetPosition(Stack[-4])
0x77f: Pop(0)
0x780: @ GetDirection(Stack[-3])
0x781: Pop(0)
0x782: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x783: Push(CvectorIndex(Stack[-2], 0))
0x784: Push(CvectorIndex(Stack[-4], 0))
0x785: Pop(2); Push(Stack[-2] * Stack[-1]);
0x786: Push(CvectorIndex(Stack[-3], 2))
0x787: Push(CvectorIndex(Stack[-5], 2))
0x788: Pop(2); Push(Stack[-2] * Stack[-1]);
0x789: Pop(2); Push(Stack[-2] + Stack[-1]);
0x78a: Push((int) 0)
0x78b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78d: Stack[-1] = "fhit"
0x78e: GOTO 0x790

0x78f: Stack[-1] = "bhit"
0x790: Push("hit_react")
0x791: Push("1")
0x792: Pop(1); Push(Stack[-3] + Stack[-1]);
0x793: Push("2")
0x794: Pop(1); Push(Stack[-4] + Stack[-1]);
0x795: Push((int) -10)
0x796: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x797: Pop(4)
0x798: Return(); Pop(14)

0x799: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x79a: PushEmpty(bool)
0x79b: Stack[-1] = (bool) 0
0x79c: PushEmpty(bool)
0x79d: Stack[-1] = (bool) 0
0x79e: Push(Stack[-23])
0x79f: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a0: Push((int) 4)
0x7a1: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a3: Stack[-1] = (bool) 1
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a5: Push((int) 5)
0x7a6: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a8: Stack[-1] = (bool) 1
0x7a9: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7aa: PushEmpty(cvector, cvector)
0x7ab: PushEmpty(cvector, object)
0x7ac: Stack[-1] = Stack[-25]
0x7ad: Call2 0x6c3

0x7ae: Stack[-3] = Stack[-2]
0x7af: Pop(2)
0x7b0: Call2 0x909

0x7b1: Stack[-11] = Stack[-2]
0x7b2: Pop(2)
0x7b3: @ CreateVectorVector(Stack[-8])
0x7b4: Pop(0)
0x7b5: Stack[-7] = (int) 1
0x7b6: Push("hit")
0x7b7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7b8: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x7b9: Pop(1)
0x7ba: Pop(0); Push((bool) Stack[-6] == 0)
0x7bb: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bc: GOTO 0x7c6

0x7bd: Pop(0); Push(Stack[-4] | Stack[-9]);
0x7be: Push((float)0.70711)
0x7bf: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7c1: @@ add(Stack[-5])
0x7c2: Pop(0)
0x7c3: Push((int) 1)
0x7c4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7c5: GOTO 0x7b6

0x7c6: @@ size(Stack[-3])
0x7c7: Pop(0)
0x7c8: Push(Stack[-3])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7ca: @ irand(Stack[-2], Stack[-3])
0x7cb: Pop(0)
0x7cc: @@ get(Stack[-1], Stack[-2])
0x7cd: Pop(0)
0x7ce: PushEmpty(object, int, float, cvector, cvector)
0x7cf: Stack[-5] = Stack[-26]
0x7d0: Stack[-4] = Stack[-25]
0x7d1: Stack[-3] = Stack[-24]
0x7d2: Stack[-2] = Stack[-6]
0x7d3: Stack[-1] = -Stack[-14]; Pop(0);
0x7d4: Call2 0x7dd

0x7d5: Pop(5)
0x7d6: Return(); Pop(18)

0x7d7: Stack[-8] = 0
0x7d8: PushEmpty(object)
0x7d9: Stack[-1] = Stack[-22]
0x7da: Call2 0x76d

0x7db: Pop(1)
0x7dc: Return(); Pop(18)

0x7dd: PushEmpty(object, object, object, object)
0x7de: @ GetScene(Stack[-2])
0x7df: Pop(0)
0x7e0: Push("scripted")
0x7e1: Push("blood_dir.xml")
0x7e2: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x7e3: Pop(2)
0x7e4: PushEmpty(object)
0x7e5: Stack[-1] = Stack[-10]
0x7e6: Call2 0x76d

0x7e7: Pop(1)
0x7e8: Return(); Pop(4)

0x7e9: Stack[-1] = 0
0x7ea: Stack[-2] = 0
0x7eb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7ec: @@ GetPosition(Stack[-3])
0x7ed: Pop(0)
0x7ee: @ GetPosition(Stack[-2])
0x7ef: Pop(0)
0x7f0: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x7f1: Push(CvectorIndex(Stack[-1], 0))
0x7f2: Push(CvectorIndex(Stack[-2], 2))
0x7f3: @ RotateAsync(Stack[-2], Stack[-1])
0x7f4: Pop(2)
0x7f5: Return(); Pop(6)

0x7f6: PushEmpty(bool, bool)
0x7f7: @ IsLoaded(Stack[-1])
0x7f8: Pop(0)
0x7f9: Stack[-3] = Stack[-1]
0x7fa: Return(); Pop(2)

0x7fb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x7fc: @@ GetPosition(Stack[-8])
0x7fd: Pop(0)
0x7fe: @@ GetEyesHeight(Stack[-9])
0x7ff: Pop(0)
0x800: Push(CvectorIndex(Stack[-8], 1))
0x801: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x802: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x803: @ GetPosition(Stack[-7])
0x804: Pop(0)
0x805: @ GetEyesHeight(Stack[-9])
0x806: Pop(0)
0x807: Push(CvectorIndex(Stack[-7], 1))
0x808: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x809: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x80a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x80b: Push(CvectorIndex(Stack[-6], 1))
0x80c: Stack[-1] = (int) 0
0x80d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x80e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x80f: Pop(1); Push(Sqrt(Stack[-1]))
0x810: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x811: Stack[-5] = -Stack[-6]; Pop(0);
0x812: Pop(0); Push(Stack[-6] * Stack[-19]);
0x813: PushEmpty(cvector, cvector)
0x814: Push(CVector(0.0, 1.0, 0.0))
0x815: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x816: Call2 0x909

0x817: Pop(1)
0x818: Push((int) 25)
0x819: Pop(2); Push(Stack[-2] * Stack[-1]);
0x81a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x81b: Push(CVector(0.0, 10.0, 0.0))
0x81c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x81d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x81e: @ IsOverrideActive(Stack[-2])
0x81f: Pop(0)
0x820: Push(Stack[-2])
0x821: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x822: Stack[-21] = (bool) 0
0x823: Return(); Pop(18)

0x824: @ StopWorld()
0x825: Pop(0)
0x826: Push((bool) 1)
0x827: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x828: Pop(1)
0x829: Push(CvectorIndex(Stack[-4], 0))
0x82a: Push(CvectorIndex(Stack[-5], 2))
0x82b: @ Rotate(Stack[-2], Stack[-1])
0x82c: Pop(2)
0x82d: PushEmpty(bool)
0x82e: Call2 0xc37

0x82f: Pop(0)
0x830: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x831: GOTO 0x83a

0x832: Push("head")
0x833: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x834: Pop(1)
0x835: Push(Stack[-1])
0x836: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x837: Push("head")
0x838: @ LookAsyncCamera(Stack[-1])
0x839: Pop(1)
0x83a: @ CameraWaitForPlayFinish()
0x83b: Pop(0)
0x83c: @ ResumeWorld()
0x83d: Pop(0)
0x83e: Stack[-21] = (bool) 1
0x83f: Return(); Pop(18)

0x840: PushEmpty(bool, bool)
0x841: Push((bool) 1)
0x842: @ CameraSwitchToNormal(Stack[-1])
0x843: Pop(1)
0x844: PushEmpty(bool)
0x845: Call2 0xc37

0x846: Pop(0)
0x847: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x848: GOTO 0x851

0x849: Push("head")
0x84a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x84b: Pop(1)
0x84c: Push(Stack[-1])
0x84d: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x84e: Push("head")
0x84f: @ UnlookAsync(Stack[-1])
0x850: Pop(1)
0x851: Return(); Pop(2)

0x852: PushEmpty()
0x853: PushEmpty(bool, object, float)
0x854: Stack[-2] = Stack[-4]
0x855: Stack[-1] = (int) 70
0x856: Call2 0x85a

0x857: Stack[-5] = Stack[-3]
0x858: Pop(3)
0x859: Return(); Pop(0)

0x85a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x85b: @@ GetPosition(Stack[-7])
0x85c: Pop(0)
0x85d: @@ GetEyesHeight(Stack[-8])
0x85e: Pop(0)
0x85f: Push(CvectorIndex(Stack[-7], 1))
0x860: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x861: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x862: @ GetPosition(Stack[-6])
0x863: Pop(0)
0x864: @ GetEyesHeight(Stack[-8])
0x865: Pop(0)
0x866: Push(CvectorIndex(Stack[-6], 1))
0x867: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x868: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x869: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x86a: Push(CvectorIndex(Stack[-5], 1))
0x86b: Stack[-1] = (int) 0
0x86c: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x86d: Pop(0); Push(Stack[-5] | Stack[-5]);
0x86e: Pop(1); Push(Sqrt(Stack[-1]))
0x86f: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x870: Stack[-4] = -Stack[-5]; Pop(0);
0x871: Pop(0); Push(Stack[-5] * Stack[-17]);
0x872: Push(CVector(0.0, 10.0, 0.0))
0x873: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x874: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x875: @ IsOverrideActive(Stack[-1])
0x876: Pop(0)
0x877: Push(Stack[-1])
0x878: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x879: Stack[-19] = (bool) 0
0x87a: Return(); Pop(16)

0x87b: @ StopWorld()
0x87c: Pop(0)
0x87d: Push((bool) 1)
0x87e: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0x87f: Pop(1)
0x880: Push(CvectorIndex(Stack[-3], 0))
0x881: Push(CvectorIndex(Stack[-4], 2))
0x882: @ Rotate(Stack[-2], Stack[-1])
0x883: Pop(2)
0x884: @ CameraWaitForPlayFinish()
0x885: Pop(0)
0x886: @ ResumeWorld()
0x887: Pop(0)
0x888: Stack[-19] = (bool) 1
0x889: Return(); Pop(16)

0x88a: PushEmpty()
0x88b: Push((bool) 1)
0x88c: @ CameraSwitchToNormal(Stack[-1])
0x88d: Pop(1)
0x88e: Return(); Pop(0)

0x88f: PushEmpty(bool, float, float, bool, float, float)
0x890: @ lshHasAnimation(Stack[-3], Stack[-7])
0x891: Pop(0)
0x892: Push(Stack[-3])
0x893: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x894: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x895: Pop(0)
0x896: Push((bool) 0)
0x897: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x898: Pop(1)
0x899: GOTO 0x89e

0x89a: Push("Can't find lsh animation : ")
0x89b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x89c: @ Trace(Stack[-1])
0x89d: Pop(1)
0x89e: Return(); Pop(6)

0x89f: PushEmpty(bool, float, float, bool, float, float)
0x8a0: @ lshHasAnimation(Stack[-3], Stack[-8])
0x8a1: Pop(0)
0x8a2: Push(Stack[-3])
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x8a4: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x8a5: Pop(0)
0x8a6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x8a7: Pop(0)
0x8a8: GOTO 0x8ad

0x8a9: Push("Can't find lsh animation : ")
0x8aa: Pop(1); Push(Stack[-1] + Stack[-9]);
0x8ab: @ Trace(Stack[-1])
0x8ac: Pop(1)
0x8ad: Return(); Pop(6)

0x8ae: PushEmpty(float, cvector, float, cvector)
0x8af: @@ GetEyesHeight(Stack[-2])
0x8b0: Pop(0)
0x8b1: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x8b2: Push(CvectorIndex(Stack[-1], 1))
0x8b3: Stack[-1] = Stack[-3]
0x8b4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x8b5: Push("head")
0x8b6: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x8b7: Pop(1)
0x8b8: Return(); Pop(4)

0x8b9: PushEmpty(bool)
0x8ba: Call2 0xc37

0x8bb: Pop(0)
0x8bc: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8bd: @ lshStopSpeech()
0x8be: Pop(0)
0x8bf: Return(); Pop(0)

0x8c0: PushEmpty(bool, bool)
0x8c1: PushEmpty(bool, int, int)
0x8c2: Stack[-2] = Stack[-7]
0x8c3: Stack[-1] = Stack[-6]
0x8c4: Call2 0x925

0x8c5: Pop(2)
0x8c6: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c7: Push((int) 0)
0x8c8: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x8c9: Pop(1)
0x8ca: Return(); Pop(2)

0x8cb: PushEmpty(int, bool, int, bool)
0x8cc: PushEmpty(bool, int, int)
0x8cd: Stack[-2] = Stack[-10]
0x8ce: Stack[-1] = Stack[-9]
0x8cf: Call2 0x925

0x8d0: Pop(2)
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d2: @ irand(Stack[-2], Stack[-5])
0x8d3: Pop(0)
0x8d4: Push((int) 0)
0x8d5: Push((int) 1)
0x8d6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x8d7: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x8d8: Pop(2)
0x8d9: Return(); Pop(4)

0x8da: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x8db: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x8dc: Pop(0)
0x8dd: Pop(0); Push((bool) Stack[-8] == 0)
0x8de: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8df: Stack[-7] = (int) 0
0x8e0: Push((int) 1)
0x8e1: Pop(1); Push(Stack[-8] + Stack[-1]);
0x8e2: Pop(1); Push(Stack[-18] + Stack[-1]);
0x8e3: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x8e4: Pop(1)
0x8e5: Pop(0); Push((bool) Stack[-6] == 0)
0x8e6: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e7: GOTO 0x8eb

0x8e8: Push((int) 1)
0x8e9: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x8ea: GOTO 0x8e0

0x8eb: Pop(0); Push((bool) Stack[-7] == 0)
0x8ec: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8ed: Return(); Pop(16)

0x8ee: @ irand(Stack[-5], Stack[-7])
0x8ef: Pop(0)
0x8f0: Push((int) 1)
0x8f1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8f2: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x8f3: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x8f4: Pop(0)
0x8f5: Push(Stack[-4])
0x8f6: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8f7: @ GetEyesHeight(Stack[-3])
0x8f8: Pop(0)
0x8f9: @ GetDirection(Stack[-2])
0x8fa: Pop(0)
0x8fb: Push((int) 50)
0x8fc: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x8fd: Push(CvectorIndex(Stack[-1], 1))
0x8fe: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x8ff: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x900: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x901: Pop(0)
0x902: Return(); Pop(16)

0x903: PushEmpty(object, object)
0x904: @ self(Stack[-1])
0x905: Pop(0)
0x906: Stack[-3] = Stack[-1]
0x907: Return(); Pop(2)

0x908: Stack[-1] = 0
0x909: PushEmpty(float, float)
0x90a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x90b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x90c: Push((float)0.0)
0x90d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x90e: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x90f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x910: Return(); Pop(2)

0x911: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x912: Return(); Pop(2)

0x913: PushEmpty()
0x914: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x915: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x916: Stack[-3] = Stack[-2]
0x917: GOTO 0x919

0x918: Stack[-3] = Stack[-1]
0x919: Return(); Pop(0)

0x91a: PushEmpty()
0x91b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x91c: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x91d: Stack[-4] = Stack[-2]
0x91e: Return(); Pop(0)

0x91f: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x920: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x921: Stack[-4] = Stack[-1]
0x922: Return(); Pop(0)

0x923: Stack[-4] = Stack[-3]
0x924: Return(); Pop(0)

0x925: PushEmpty(int, int)
0x926: @ irand(Stack[-1], Stack[-3])
0x927: Pop(0)
0x928: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x929: Return(); Pop(2)

0x92a: PushEmpty(object, object)
0x92b: @ CreateObjectSet(Stack[-1])
0x92c: Pop(0)
0x92d: Stack[-3] = Stack[-1]
0x92e: Return(); Pop(2)

0x92f: Stack[-1] = 0
0x930: PushEmpty(object, object)
0x931: @ CreateFloatVector(Stack[-1])
0x932: Pop(0)
0x933: @@ add(Stack[-3])
0x934: Pop(0)
0x935: Push((int) 0)
0x936: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x937: IF (Stack[-1] == 0) GOTO 0x93c; Pop(1)

0x938: Push((float)0.7)
0x939: Push((int) 500)
0x93a: @ RumblePlay(Stack[-2], Stack[-1])
0x93b: Pop(2)
0x93c: Push((int) 15)
0x93d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x93e: Pop(1)
0x93f: Return(); Pop(2)

0x940: Stack[-1] = 0
0x941: PushEmpty(float, float)
0x942: @ GetGameTime(Stack[-1])
0x943: Pop(0)
0x944: Push((int) 1)
0x945: PushEmpty(int)
0x946: Push((int) 24)
0x947: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x948: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x949: Return(); Pop(2)

0x94a: PushEmpty(bool, bool)
0x94b: @ IsPlayerActor(Stack[-3], Stack[-1])
0x94c: Pop(0)
0x94d: Push(Stack[-1])
0x94e: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x94f: Push("attack")
0x950: @ PlayGlobalMusic(Stack[-1])
0x951: Pop(1)
0x952: Return(); Pop(2)

0x953: PushEmpty(object, object)
0x954: @ GetScene(Stack[-1])
0x955: Pop(0)
0x956: Push("battle")
0x957: PushEmpty(object)
0x958: Call2 0x903

0x959: Pop(0)
0x95a: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x95b: Pop(2)
0x95c: Return(); Pop(2)

0x95d: Stack[-1] = 0
0x95e: PushEmpty(string, string)
0x95f: Stack[-1] = "idle"
0x960: Push(Stack[-3])
0x961: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x962: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x963: Stack[-4] = Stack[-1]
0x964: Return(); Pop(2)

0x965: PushEmpty(int, bool, int, bool)
0x966: Stack[-2] = (int) 0
0x967: Push("all")
0x968: PushEmpty(string, int)
0x969: Stack[-1] = Stack[-5]
0x96a: Call2 0x95e

0x96b: Pop(1)
0x96c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x96d: Pop(2)
0x96e: Pop(0); Push((bool) Stack[-1] == 0)
0x96f: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x970: GOTO 0x974

0x971: Push((int) 1)
0x972: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x973: GOTO 0x967

0x974: Stack[-5] = Stack[-2]
0x975: Return(); Pop(4)

0x976: PushEmpty(int, int)
0x977: Push("branch")
0x978: @ GetVariable(Stack[-1], Stack[-2])
0x979: Pop(1)
0x97a: Push((int) 0)
0x97b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x97c: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97d: Stack[-3] = (int) 1
0x97e: Return(); Pop(2)

0x97f: GOTO 0x985

0x980: Push((int) 1)
0x981: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x982: IF (Stack[-1] == 0) GOTO 0x985; Pop(1)

0x983: Stack[-3] = (int) 2
0x984: Return(); Pop(2)

0x985: Stack[-3] = (int) 3
0x986: Return(); Pop(2)

0x987: PushEmpty(int, int)
0x988: Push("branch")
0x989: @ GetVariable(Stack[-1], Stack[-2])
0x98a: Pop(1)
0x98b: Stack[-3] = Stack[-1]
0x98c: Return(); Pop(2)

0x98d: PushEmpty()
0x98e: PushEmpty(int)
0x98f: Call2 0x987

0x990: Pop(0)
0x991: Push((int) 1)
0x992: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x993: IF (Stack[-1] == 0) GOTO 0x997; Pop(1)

0x994: @ WorkWithCorpse(Stack[-1])
0x995: Pop(0)
0x996: GOTO 0x999

0x997: @ Barter(Stack[-1])
0x998: Pop(0)
0x999: Return(); Pop(0)

0x99a: PushEmpty(int, bool, int, bool)
0x99b: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x99c: IF (Stack[-1] == 0) GOTO 0x9a1; Pop(1)

0x99d: Push("GenerateMoney: iMin > iMax")
0x99e: @ Trace(Stack[-1])
0x99f: Pop(1)
0x9a0: Return(); Pop(4)

0x9a1: Stack[-2] = (int) 0
0x9a2: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x9a3: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x9a4: Pop(0); Push(Stack[-5] - Stack[-6]);
0x9a5: @ irand(Stack[-3], Stack[-1])
0x9a6: Pop(1)
0x9a7: GOTO 0x9ac

0x9a8: Push((int) 0)
0x9a9: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9ab: Return(); Pop(4)

0x9ac: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x9ad: Push((int) 0)
0x9ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9af: IF (Stack[-1] == 0) GOTO 0x9b1; Pop(1)

0x9b0: Return(); Pop(4)

0x9b1: PushEmpty(int, string)
0x9b2: Stack[-1] = "Money"
0x9b3: Call2 0xae2

0x9b4: Pop(1)
0x9b5: Push((int) 0)
0x9b6: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x9b7: Pop(2)
0x9b8: Return(); Pop(4)

0x9b9: PushEmpty(object, int, bool, object, int, bool)
0x9ba: @ CreateInvItem(Stack[-3])
0x9bb: Pop(0)
0x9bc: @@ SetItemName(Stack[-7])
0x9bd: Pop(0)
0x9be: Push("Organ")
0x9bf: Push((int) 1)
0x9c0: @@ SetProperty(Stack[-2], Stack[-1])
0x9c1: Pop(2)
0x9c2: @@ GetItemID(Stack[-2])
0x9c3: Pop(0)
0x9c4: Push((int) 0)
0x9c5: Push((int) 1)
0x9c6: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x9c7: Pop(2)
0x9c8: Return(); Pop(6)

0x9c9: Stack[-3] = 0
0x9ca: PushEmpty(int)
0x9cb: Call2 0x987

0x9cc: Pop(0)
0x9cd: Push((int) 1)
0x9ce: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9d0: Return(); Pop(0)

0x9d1: PushEmpty(string)
0x9d2: Stack[-1] = "liver"
0x9d3: Call2 0x9b9

0x9d4: Pop(1)
0x9d5: PushEmpty(string)
0x9d6: Stack[-1] = "kidney"
0x9d7: Call2 0x9b9

0x9d8: Pop(1)
0x9d9: PushEmpty(string)
0x9da: Stack[-1] = "heart"
0x9db: Call2 0x9b9

0x9dc: Pop(1)
0x9dd: PushEmpty(string)
0x9de: Stack[-1] = "blood"
0x9df: Call2 0x9b9

0x9e0: Pop(1)
0x9e1: Return(); Pop(0)

0x9e2: PushEmpty(int, bool, int, int, bool, int)
0x9e3: Push((int) 0)
0x9e4: @ ClearSubContainer(Stack[-1])
0x9e5: Pop(1)
0x9e6: PushEmpty(int)
0x9e7: Call2 0x941

0x9e8: Stack[-2] = Stack[-1]
0x9e9: Pop(1)
0x9ea: PushEmpty(int, int)
0x9eb: Stack[-2] = (int) 0
0x9ec: Push((int) 100)
0x9ed: Push((int) 100)
0x9ee: Pop(1); Push(Stack[-5] * Stack[-1]);
0x9ef: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x9f0: Call2 0x99a

0x9f1: Pop(2)
0x9f2: PushEmpty(string, int, int)
0x9f3: Stack[-3] = "tourniquet"
0x9f4: Stack[-2] = (int) 1
0x9f5: Stack[-1] = (int) 7
0x9f6: Call2 0x8c0

0x9f7: Pop(3)
0x9f8: PushEmpty(string, int, int)
0x9f9: Stack[-3] = "bandage"
0x9fa: Stack[-2] = (int) 1
0x9fb: Stack[-1] = (int) 7
0x9fc: Call2 0x8c0

0x9fd: Pop(3)
0x9fe: PushEmpty(string, int, int)
0x9ff: Stack[-3] = "packet"
0xa00: Stack[-2] = (int) 1
0xa01: Stack[-1] = (int) 10
0xa02: Call2 0x8c0

0xa03: Pop(3)
0xa04: PushEmpty(string, int, int)
0xa05: Stack[-3] = "bottle_water"
0xa06: Stack[-2] = (int) 1
0xa07: Stack[-1] = (int) 3
0xa08: Call2 0x8c0

0xa09: Pop(3)
0xa0a: PushEmpty(string, int, int, int)
0xa0b: Stack[-4] = "rusk"
0xa0c: Stack[-3] = (int) 1
0xa0d: Stack[-2] = (int) 3
0xa0e: Stack[-1] = (int) 4
0xa0f: Call2 0x8cb

0xa10: Pop(4)
0xa11: PushEmpty(string, int, int)
0xa12: Stack[-3] = "hook"
0xa13: Stack[-2] = (int) 1
0xa14: Stack[-1] = (int) 20
0xa15: Call2 0x8c0

0xa16: Pop(3)
0xa17: PushEmpty(string, int, int)
0xa18: Stack[-3] = "watch"
0xa19: Stack[-2] = (int) 1
0xa1a: Stack[-1] = (int) 20
0xa1b: Call2 0x8c0

0xa1c: Pop(3)
0xa1d: PushEmpty(bool)
0xa1e: Stack[-1] = (bool) 0
0xa1f: Push((int) 3)
0xa20: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xa21: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa22: Push((int) 6)
0xa23: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xa24: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa25: Stack[-1] = (bool) 1
0xa26: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa27: PushEmpty(string, int, int, int)
0xa28: Stack[-4] = "alpha_pills"
0xa29: Stack[-3] = (int) 1
0xa2a: Stack[-2] = (int) 2
0xa2b: Stack[-1] = (int) 3
0xa2c: Call2 0x8cb

0xa2d: Pop(4)
0xa2e: Push((int) 4)
0xa2f: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa30: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa31: PushEmpty(string, int, int, int)
0xa32: Stack[-4] = "beta_pills"
0xa33: Stack[-3] = (int) 1
0xa34: Stack[-2] = (int) 4
0xa35: Stack[-1] = (int) 3
0xa36: Call2 0x8cb

0xa37: Pop(4)
0xa38: Push((int) 6)
0xa39: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa3a: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa3b: PushEmpty(string, int, int, int)
0xa3c: Stack[-4] = "alpha_pills"
0xa3d: Stack[-3] = (int) 1
0xa3e: Stack[-2] = (int) 2
0xa3f: Stack[-1] = (int) 8
0xa40: Call2 0x8cb

0xa41: Pop(4)
0xa42: PushEmpty(string, int, int, int)
0xa43: Stack[-4] = "gamma_pills"
0xa44: Stack[-3] = (int) 1
0xa45: Stack[-2] = (int) 8
0xa46: Stack[-1] = (int) 3
0xa47: Call2 0x8cb

0xa48: Pop(4)
0xa49: Push((int) 8)
0xa4a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa4b: IF (Stack[-1] == 0) GOTO 0xa58; Pop(1)

0xa4c: PushEmpty(string, int, int)
0xa4d: Stack[-3] = "revolver_ammo"
0xa4e: Stack[-2] = (int) 1
0xa4f: Stack[-1] = (int) 3
0xa50: Call2 0x8c0

0xa51: Pop(3)
0xa52: PushEmpty(string, int, int)
0xa53: Stack[-3] = "rifle_ammo"
0xa54: Stack[-2] = (int) 1
0xa55: Stack[-1] = (int) 3
0xa56: Call2 0x8c0

0xa57: Pop(3)
0xa58: PushEmpty(int, string)
0xa59: Stack[-1] = "patrol_mark"
0xa5a: Call2 0xae2

0xa5b: Pop(1)
0xa5c: Push((int) 0)
0xa5d: Push((int) 1)
0xa5e: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0xa5f: Pop(3)
0xa60: Return(); Pop(6)

0xa61: PushEmpty(int, bool, int, int, bool, int)
0xa62: Push((int) 0)
0xa63: @ ClearSubContainer(Stack[-1])
0xa64: Pop(1)
0xa65: PushEmpty(int)
0xa66: Call2 0x941

0xa67: Stack[-2] = Stack[-1]
0xa68: Pop(1)
0xa69: PushEmpty(int, int)
0xa6a: Stack[-2] = (int) 0
0xa6b: Push((int) 10)
0xa6c: Push((int) 5)
0xa6d: Pop(1); Push(Stack[-5] * Stack[-1]);
0xa6e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xa6f: Call2 0x99a

0xa70: Pop(2)
0xa71: PushEmpty(string, int, int)
0xa72: Stack[-3] = "bottle_water"
0xa73: Stack[-2] = (int) 1
0xa74: Stack[-1] = (int) 3
0xa75: Call2 0x8c0

0xa76: Pop(3)
0xa77: PushEmpty(string, int, int)
0xa78: Stack[-3] = "rusk"
0xa79: Stack[-2] = (int) 1
0xa7a: Stack[-1] = (int) 20
0xa7b: Call2 0x8c0

0xa7c: Pop(3)
0xa7d: PushEmpty(string, int, int)
0xa7e: Stack[-3] = "hook"
0xa7f: Stack[-2] = (int) 1
0xa80: Stack[-1] = (int) 30
0xa81: Call2 0x8c0

0xa82: Pop(3)
0xa83: PushEmpty(string, int, int)
0xa84: Stack[-3] = "watch"
0xa85: Stack[-2] = (int) 1
0xa86: Stack[-1] = (int) 30
0xa87: Call2 0x8c0

0xa88: Pop(3)
0xa89: Push((int) 3)
0xa8a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa8b: IF (Stack[-1] == 0) GOTO 0xa93; Pop(1)

0xa8c: PushEmpty(string, int, int, int)
0xa8d: Stack[-4] = "alpha_pills"
0xa8e: Stack[-3] = (int) 1
0xa8f: Stack[-2] = (int) 4
0xa90: Stack[-1] = (int) 3
0xa91: Call2 0x8cb

0xa92: Pop(4)
0xa93: Push((int) 4)
0xa94: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa95: IF (Stack[-1] == 0) GOTO 0xa9d; Pop(1)

0xa96: PushEmpty(string, int, int, int)
0xa97: Stack[-4] = "beta_pills"
0xa98: Stack[-3] = (int) 1
0xa99: Stack[-2] = (int) 8
0xa9a: Stack[-1] = (int) 3
0xa9b: Call2 0x8cb

0xa9c: Pop(4)
0xa9d: Push((int) 6)
0xa9e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa9f: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xaa0: PushEmpty(string, int, int, int)
0xaa1: Stack[-4] = "gamma_pills"
0xaa2: Stack[-3] = (int) 1
0xaa3: Stack[-2] = (int) 16
0xaa4: Stack[-1] = (int) 3
0xaa5: Call2 0x8cb

0xaa6: Pop(4)
0xaa7: Return(); Pop(6)

0xaa8: PushEmpty(int, bool, int, int, bool, int)
0xaa9: Push((int) 0)
0xaaa: @ ClearSubContainer(Stack[-1])
0xaab: Pop(1)
0xaac: PushEmpty(int)
0xaad: Call2 0x941

0xaae: Stack[-2] = Stack[-1]
0xaaf: Pop(1)
0xab0: PushEmpty(string, int, int, int)
0xab1: Stack[-4] = "fresh_meat"
0xab2: Stack[-3] = (int) 1
0xab3: Stack[-2] = (int) 4
0xab4: Stack[-1] = (int) 3
0xab5: Call2 0x8cb

0xab6: Pop(4)
0xab7: PushEmpty(string, int, int, int)
0xab8: Stack[-4] = "dried_meat"
0xab9: Stack[-3] = (int) 1
0xaba: Stack[-2] = (int) 4
0xabb: Stack[-1] = (int) 3
0xabc: Call2 0x8cb

0xabd: Pop(4)
0xabe: PushEmpty(string, int, int, int)
0xabf: Stack[-4] = "smoked_meat"
0xac0: Stack[-3] = (int) 1
0xac1: Stack[-2] = (int) 4
0xac2: Stack[-1] = (int) 3
0xac3: Call2 0x8cb

0xac4: Pop(4)
0xac5: PushEmpty(string, int, int, int)
0xac6: Stack[-4] = "vegetables"
0xac7: Stack[-3] = (int) 1
0xac8: Stack[-2] = (int) 3
0xac9: Stack[-1] = (int) 3
0xaca: Call2 0x8cb

0xacb: Pop(4)
0xacc: Push((int) 3)
0xacd: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xace: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xacf: PushEmpty(string, int, int)
0xad0: Stack[-3] = "revolver_ammo"
0xad1: Stack[-2] = (int) 1
0xad2: Stack[-1] = (int) 5
0xad3: Call2 0x8c0

0xad4: Pop(3)
0xad5: PushEmpty(string, int, int)
0xad6: Stack[-3] = "rifle_ammo"
0xad7: Stack[-2] = (int) 1
0xad8: Stack[-1] = (int) 5
0xad9: Call2 0x8c0

0xada: Pop(3)
0xadb: PushEmpty(string, int, int)
0xadc: Stack[-3] = "samopal_ammo"
0xadd: Stack[-2] = (int) 1
0xade: Stack[-1] = (int) 5
0xadf: Call2 0x8c0

0xae0: Pop(3)
0xae1: Return(); Pop(6)

0xae2: PushEmpty(int, int)
0xae3: @ GetInvItemByName(Stack[-1], Stack[-3])
0xae4: Pop(0)
0xae5: Stack[-4] = Stack[-1]
0xae6: Return(); Pop(2)

0xae7: PushEmpty(string, string)
0xae8: PushEmpty(bool, object, string)
0xae9: Stack[-2] = Stack[-7]
0xaea: Stack[-1] = "class"
0xaeb: Call2 0x6d7

0xaec: Pop(2)
0xaed: Pop(1); Push((bool) Stack[-1] == 0)
0xaee: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaef: Stack[-5] = (bool) 0
0xaf0: Return(); Pop(2)

0xaf1: Push("class")
0xaf2: @@ GetProperty(Stack[-1], Stack[-2])
0xaf3: Pop(1)
0xaf4: PushEmpty(bool)
0xaf5: Stack[-1] = (bool) 1
0xaf6: PushEmpty(bool)
0xaf7: Stack[-1] = (bool) 1
0xaf8: PushEmpty(bool)
0xaf9: Stack[-1] = (bool) 1
0xafa: PushEmpty(bool)
0xafb: Stack[-1] = (bool) 1
0xafc: PushEmpty(bool)
0xafd: Stack[-1] = (bool) 1
0xafe: PushEmpty(bool)
0xaff: Stack[-1] = (bool) 1
0xb00: PushEmpty(bool)
0xb01: Stack[-1] = (bool) 1
0xb02: PushEmpty(bool)
0xb03: Stack[-1] = (bool) 1
0xb04: PushEmpty(bool)
0xb05: Stack[-1] = (bool) 1
0xb06: PushEmpty(bool)
0xb07: Stack[-1] = (bool) 1
0xb08: Push("patrol")
0xb09: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xb0a: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0b: Push("sanitar")
0xb0c: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xb0d: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0e: Stack[-1] = (bool) 0
0xb0f: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xb10: Push("soldier")
0xb11: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0xb12: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xb13: Stack[-1] = (bool) 0
0xb14: IF (Stack[-1] == 0) GOTO 0xb19; Pop(1)

0xb15: Push("woman")
0xb16: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xb17: IF (Stack[-1] == 0) GOTO 0xb19; Pop(1)

0xb18: Stack[-1] = (bool) 0
0xb19: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb1a: Push("wasted_girl")
0xb1b: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0xb1c: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb1d: Stack[-1] = (bool) 0
0xb1e: IF (Stack[-1] == 0) GOTO 0xb23; Pop(1)

0xb1f: Push("vaxxabitka")
0xb20: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xb21: IF (Stack[-1] == 0) GOTO 0xb23; Pop(1)

0xb22: Stack[-1] = (bool) 0
0xb23: IF (Stack[-1] == 0) GOTO 0xb28; Pop(1)

0xb24: Push("vaxxabit")
0xb25: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xb26: IF (Stack[-1] == 0) GOTO 0xb28; Pop(1)

0xb27: Stack[-1] = (bool) 0
0xb28: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb29: Push("little_girl")
0xb2a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb2b: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb2c: Stack[-1] = (bool) 0
0xb2d: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb2e: Push("girl")
0xb2f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xb30: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb31: Stack[-1] = (bool) 0
0xb32: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xb33: Push("dohodyaga")
0xb34: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb35: IF (Stack[-1] == 0) GOTO 0xb37; Pop(1)

0xb36: Stack[-1] = (bool) 0
0xb37: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb38: Push("nudegirl")
0xb39: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3a: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb3b: Stack[-1] = (bool) 0
0xb3c: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3d: Stack[-5] = (bool) 1
0xb3e: Return(); Pop(2)

0xb3f: Push(Stack[-3])
0xb40: IF (Stack[-1] == 0) GOTO 0xb43; Pop(1)

0xb41: Stack[-5] = (bool) 0
0xb42: Return(); Pop(2)

0xb43: Stack[-5] = (bool) 1
0xb44: PushEmpty(bool)
0xb45: Stack[-1] = (bool) 1
0xb46: PushEmpty(bool)
0xb47: Stack[-1] = (bool) 1
0xb48: PushEmpty(bool)
0xb49: Stack[-1] = (bool) 1
0xb4a: PushEmpty(bool)
0xb4b: Stack[-1] = (bool) 1
0xb4c: PushEmpty(bool)
0xb4d: Stack[-1] = (bool) 1
0xb4e: Push("worker")
0xb4f: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xb50: IF (Stack[-1] == 0) GOTO 0xb55; Pop(1)

0xb51: Push("butcher")
0xb52: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xb53: IF (Stack[-1] == 0) GOTO 0xb55; Pop(1)

0xb54: Stack[-1] = (bool) 0
0xb55: IF (Stack[-1] == 0) GOTO 0xb5a; Pop(1)

0xb56: Push("boy")
0xb57: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb58: IF (Stack[-1] == 0) GOTO 0xb5a; Pop(1)

0xb59: Stack[-1] = (bool) 0
0xb5a: IF (Stack[-1] == 0) GOTO 0xb5f; Pop(1)

0xb5b: Push("unosha")
0xb5c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xb5d: IF (Stack[-1] == 0) GOTO 0xb5f; Pop(1)

0xb5e: Stack[-1] = (bool) 0
0xb5f: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb60: Push("wasted_male")
0xb61: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb62: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb63: Stack[-1] = (bool) 0
0xb64: IF (Stack[-1] == 0) GOTO 0xb69; Pop(1)

0xb65: Push("alkash")
0xb66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb67: IF (Stack[-1] == 0) GOTO 0xb69; Pop(1)

0xb68: Stack[-1] = (bool) 0
0xb69: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb6a: Push("morlok")
0xb6b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6c: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb6d: Stack[-5] = (bool) 0
0xb6e: Return(); Pop(2)

0xb6f: Push(GlobalVars[0])
0xb70: PushEmpty(object)
0xb71: Call2 0x92a

0xb72: Stack[-2] = Stack[-1]
0xb73: Pop(1)
0xb74: GlobalVars[0] = Stack[-1]; Pop(1)
0xb75: Return(); Pop(0)

0xb76: PushEmpty()
0xb77: PushEmpty(bool, object)
0xb78: Stack[-1] = Stack[-3]
0xb79: Call2 0x852

0xb7a: Pop(1)
0xb7b: Pop(1); Push((bool) Stack[-1] == 0)
0xb7c: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb7d: Return(); Pop(0)

0xb7e: PushEmpty(object)
0xb7f: Stack[-1] = Stack[-2]
0xb80: Push(-1, 1); TaskCall(0)
0xb81: Call2 0x0

0xb82: Pop(-1, 1); TaskReturn
0xb83: Pop(1)
0xb84: PushEmpty(object)
0xb85: Stack[-1] = Stack[-2]
0xb86: Call2 0x88a

0xb87: Pop(1)
0xb88: Return(); Pop(0)

0xb89: PushEmpty()
0xb8a: PushEmpty(bool, object)
0xb8b: Stack[-1] = Stack[-3]
0xb8c: Call2 0xc39

0xb8d: Stack[-4] = Stack[-2]
0xb8e: Pop(2)
0xb8f: Return(); Pop(0)

0xb90: PushEmpty()
0xb91: PushEmpty(object)
0xb92: Stack[-1] = Stack[-2]
0xb93: Call2 0xba3

0xb94: Pop(1)
0xb95: Return(); Pop(0)

0xb96: PushEmpty()
0xb97: PushEmpty(bool, object)
0xb98: Stack[-1] = Stack[-3]
0xb99: Call2 0xc39

0xb9a: Stack[-4] = Stack[-2]
0xb9b: Pop(2)
0xb9c: Return(); Pop(0)

0xb9d: PushEmpty()
0xb9e: PushEmpty(object)
0xb9f: Stack[-1] = Stack[-2]
0xba0: Call2 0xba3

0xba1: Pop(1)
0xba2: Return(); Pop(0)

0xba3: PushEmpty()
0xba4: PushEmpty(object, bool)
0xba5: Stack[-2] = Stack[-3]
0xba6: Stack[-1] = (bool) 1
0xba7: Push(-2, 6); TaskCall(6)
0xba8: Call2 0x35b

0xba9: Pop(-2, 6); TaskReturn
0xbaa: Pop(2)
0xbab: @ ResetAAS()
0xbac: Pop(0)
0xbad: Return(); Pop(0)

0xbae: PushEmpty(bool, bool)
0xbaf: Pop(0); Push((bool) Stack[-3] == 0)
0xbb0: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbb1: Return(); Pop(2)

0xbb2: Push(GlobalVars[0])
0xbb3: @@ in(Stack[-2], Stack[-4])
0xbb4: Pop(1)
0xbb5: Pop(0); Push((bool) Stack[-1] == 0)
0xbb6: IF (Stack[-1] == 0) GOTO 0xbba; Pop(1)

0xbb7: Push(GlobalVars[0])
0xbb8: @@ add(Stack[-4])
0xbb9: Pop(1)
0xbba: PushEmpty(bool, object)
0xbbb: Stack[-1] = Stack[-5]
0xbbc: Call2 0x6d2

0xbbd: Pop(1)
0xbbe: IF (Stack[-1] == 0) GOTO 0xbc5; Pop(1)

0xbbf: PushEmpty(object)
0xbc0: Call2 0x903

0xbc1: Pop(0)
0xbc2: Push((float)-0.07)
0xbc3: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0xbc4: Pop(2)
0xbc5: Return(); Pop(2)

0xbc6: PushEmpty()
0xbc7: PushEmpty(object)
0xbc8: Stack[-1] = Stack[-2]
0xbc9: Call2 0xbae

0xbca: Pop(1)
0xbcb: PushEmpty(object, bool)
0xbcc: Stack[-2] = Stack[-3]
0xbcd: Stack[-1] = (bool) 1
0xbce: Push(-2, 6); TaskCall(6)
0xbcf: Call2 0x35b

0xbd0: Pop(-2, 6); TaskReturn
0xbd1: Pop(2)
0xbd2: @ ResetAAS()
0xbd3: Pop(0)
0xbd4: Return(); Pop(0)

0xbd5: PushEmpty()
0xbd6: PushEmpty(bool, object)
0xbd7: Stack[-1] = Stack[-3]
0xbd8: Call2 0x6d2

0xbd9: Pop(1)
0xbda: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbdb: PushEmpty(object)
0xbdc: Call2 0x903

0xbdd: Pop(0)
0xbde: Push((float)-0.13)
0xbdf: Push((bool) 1)
0xbe0: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbe1: Pop(3)
0xbe2: PushEmpty(object)
0xbe3: Stack[-1] = Stack[-2]
0xbe4: Push(-1, 0); TaskCall(7)
0xbe5: Call2 0x60d

0xbe6: Pop(-1, 0); TaskReturn
0xbe7: Pop(1)
0xbe8: Return(); Pop(0)

0xbe9: PushEmpty()
0xbea: PushEmpty(object, int, float)
0xbeb: Stack[-3] = Stack[-7]
0xbec: Stack[-2] = Stack[-6]
0xbed: Stack[-1] = Stack[-5]
0xbee: Call2 0x799

0xbef: Pop(3)
0xbf0: Return(); Pop(0)

0xbf1: PushEmpty()
0xbf2: PushEmpty(object, int, float, cvector, cvector)
0xbf3: Stack[-5] = Stack[-11]
0xbf4: Stack[-4] = Stack[-10]
0xbf5: Stack[-3] = Stack[-9]
0xbf6: Stack[-2] = Stack[-7]
0xbf7: Stack[-1] = Stack[-6]
0xbf8: Call2 0x7dd

0xbf9: Pop(5)
0xbfa: Return(); Pop(0)

0xbfb: PushEmpty(float, float)
0xbfc: Push("health")
0xbfd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbfe: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xbff: Push("health")
0xc00: @ GetProperty(Stack[-1], Stack[-2])
0xc01: Pop(1)
0xc02: Push((int) 0)
0xc03: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xc04: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xc05: @ SignalDeath(Stack[-4])
0xc06: Pop(0)
0xc07: Return(); Pop(2)

0xc08: PushEmpty()
0xc09: Push("prc")
0xc0a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0b: IF (Stack[-1] == 0) GOTO 0xc0e; Pop(1)

0xc0c: @ ResetAAS()
0xc0d: Pop(0)
0xc0e: Return(); Pop(0)

0xc0f: PushEmpty()
0xc10: PushEmpty(object)
0xc11: Stack[-1] = Stack[-2]
0xc12: Call2 0xbd5

0xc13: Pop(1)
0xc14: Return(); Pop(0)

0xc15: PushEmpty(bool, bool)
0xc16: PushEmpty(bool, object, bool)
0xc17: Stack[-2] = Stack[-7]
0xc18: Stack[-1] = !Stack[-6]; Pop(0);
0xc19: Call2 0xae7

0xc1a: Pop(2)
0xc1b: IF (Stack[-1] == 0) GOTO 0xc2d; Pop(1)

0xc1c: @ CanSee(Stack[-1], Stack[-5])
0xc1d: Pop(0)
0xc1e: PushEmpty(bool)
0xc1f: Stack[-1] = (bool) 1
0xc20: Push(Stack[-2])
0xc21: IF (Stack[-1] == 0) GOTO 0xc2a; Pop(1)

0xc22: PushEmpty(float, object)
0xc23: Stack[-1] = Stack[-8]
0xc24: Call2 0x6ca

0xc25: Pop(1)
0xc26: Push((float)160000.0)
0xc27: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xc28: IF (Stack[-1] == 0) GOTO 0xc2a; Pop(1)

0xc29: Stack[-1] = (bool) 0
0xc2a: IF (Stack[-1] == 0) GOTO 0xc2d; Pop(1)

0xc2b: Stack[-6] = (bool) 1
0xc2c: Return(); Pop(2)

0xc2d: Stack[-6] = (bool) 0
0xc2e: Return(); Pop(2)

0xc2f: Stack[-1] = (int) 515572
0xc30: Return(); Pop(0)

0xc31: Stack[-1] = (int) 504031
0xc32: Return(); Pop(0)

0xc33: Stack[-1] = "ui/NPC_Citizen2.png"
0xc34: Return(); Pop(0)

0xc35: Stack[-1] = "ui/NPC_Citizen2_b.png"
0xc36: Return(); Pop(0)

0xc37: Stack[-1] = (bool) 0
0xc38: Return(); Pop(0)

0xc39: PushEmpty(bool, float, string, bool, float, string)
0xc3a: PushEmpty(bool, object)
0xc3b: Stack[-1] = Stack[-9]
0xc3c: Call2 0x755

0xc3d: Pop(1)
0xc3e: Pop(1); Push((bool) Stack[-1] == 0)
0xc3f: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc40: Stack[-8] = (bool) 0
0xc41: Return(); Pop(6)

0xc42: Push(GlobalVars[0])
0xc43: @@ in(Stack[-4], Stack[-8])
0xc44: Pop(1)
0xc45: Push(Stack[-3])
0xc46: IF (Stack[-1] == 0) GOTO 0xc49; Pop(1)

0xc47: Stack[-8] = (bool) 1
0xc48: Return(); Pop(6)

0xc49: PushEmpty(bool, object)
0xc4a: Stack[-1] = Stack[-9]
0xc4b: Call2 0x6d2

0xc4c: Pop(1)
0xc4d: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc4e: Push("reputation")
0xc4f: @@ GetProperty(Stack[-1], Stack[-3])
0xc50: Pop(1)
0xc51: Push((float)0.33)
0xc52: Stack[-9] = Stack[-3] < Stack[-1]; Pop(1);
0xc53: Return(); Pop(6)

0xc54: PushEmpty(bool, object, string)
0xc55: Stack[-2] = Stack[-10]
0xc56: Stack[-1] = "class"
0xc57: Call2 0x6d7

0xc58: Pop(2)
0xc59: IF (Stack[-1] == 0) GOTO 0xc6d; Pop(1)

0xc5a: Push("class")
0xc5b: @@ GetProperty(Stack[-1], Stack[-2])
0xc5c: Pop(1)
0xc5d: Stack[-8] = (bool) 1
0xc5e: PushEmpty(bool)
0xc5f: Stack[-1] = (bool) 1
0xc60: Push("bomber")
0xc61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc62: IF (Stack[-1] == 0) GOTO 0xc67; Pop(1)

0xc63: Push("hunter")
0xc64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc65: IF (Stack[-1] == 0) GOTO 0xc67; Pop(1)

0xc66: Stack[-1] = (bool) 0
0xc67: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc68: Push("grabitel")
0xc69: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6a: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc6b: Stack[-8] = (bool) 0
0xc6c: Return(); Pop(6)

0xc6d: Stack[-8] = (bool) 0
0xc6e: Return(); Pop(6)

