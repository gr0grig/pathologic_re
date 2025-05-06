GlobalVarCount = 1
	G_VAR_0 object 

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
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	SensePlayerOnly (1 args)
	Sleep (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	FindShiftedPathTo (2 args)
	IsPlayerActor (2 args)
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
	SetTimer (2 args)
	CanSee (2 args)
	KillTimer (1 args)
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
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	AddItem (4 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	RemoveActor (1 args)

RunOp = 0x25a
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0xd3 Vars = (object)
		EVENT_6 Op = 0xe1 Vars = ()
		EVENT_22 Op = 0x15a Vars = (object, int, float, float)
		EVENT_16 Op = 0x15c Vars = (object, string)
		EVENT_41 Op = 0x15e Vars = (object)
	GTASK_3  Params = 0
		EVENT_0 Op = 0x160 Vars = (object)
		EVENT_17 Op = 0x174 Vars = (object)
		EVENT_30 Op = 0x18c Vars = (object, object, bool)
		EVENT_40 Op = 0x1a8 Vars = (object)
		EVENT_42 Op = 0x1bc Vars = (object, string)
		EVENT_26 Op = 0x1e1 Vars = (string)
		EVENT_6 Op = 0x1ef Vars = ()
		EVENT_1 Op = 0x1f6 Vars = (object)
	GTASK_4 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x271 Vars = (object)
		EVENT_17 Op = 0x285 Vars = (object)
		EVENT_30 Op = 0x29d Vars = (object, object, bool)
		EVENT_40 Op = 0x2b9 Vars = (object)
		EVENT_42 Op = 0x2cd Vars = (object, string)
		EVENT_26 Op = 0x2f2 Vars = (string)
		EVENT_1 Op = 0x300 Vars = (object)
		EVENT_6 Op = 0x30e Vars = ()
		EVENT_10 Op = 0x355 Vars = (object)
		EVENT_28 Op = 0x359 Vars = ()
		EVENT_41 Op = 0x363 Vars = (object)
	GTASK_5 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_6 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x618 Vars = ()
		EVENT_7 Op = 0x650 Vars = (int)
		EVENT_1 Op = 0x66b Vars = (object)
		EVENT_2 Op = 0x67a Vars = (object)
		EVENT_10 Op = 0x700 Vars = (object)
		EVENT_41 Op = 0x70b Vars = (object)

Events:
EVENT_16 Op = 0xa4a Vars = (object, string)
EVENT_41 Op = 0xa57 Vars = (object)
EVENT_22 Op = 0xa5d Vars = (object, int, float, float)
EVENT_43 Op = 0xa65 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x85d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xb47

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xb45

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xb49

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xb4b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x95e

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
0x41: Call2 0x8a2

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 518113)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 518114)
0x5a: Push((int) -1)
0x5b: Push((int) 19233)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 534586)
0x5f: Push((int) -1)
0x60: Push((int) 36224)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0xb4d

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x8b4

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0xb4d

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x8c4

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x8de

0x9f: Pop(0)
0xa0: Push((int) 19232)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 518113)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 518114)
0xad: Push((int) -1)
0xae: Push((int) 19233)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 534586)
0xb2: Push((int) -1)
0xb3: Push((int) 36224)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0xb4d

0xba: Pop(0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbc: @ lshStopAnimation()
0xbd: Pop(0)
0xbe: GOTO 0xc1

0xbf: @ StopAnimation()
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: GOTO 0x9b

0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: EventDisable(0)
0xc6: PushEmpty(object)
0xc7: Stack[-1] = Stack[-2]
0xc8: Call2 0xe5

0xc9: Pop(1)
0xca: PushEmpty(object)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call2 0xb67

0xcd: Pop(1)
0xce: EventEnable(0)
0xcf: @ Hold()
0xd0: Pop(0)
0xd1: GOTO 0xcf

0xd2: Return(); Pop(0)

0xd3: PushEmpty(int, int)
0xd4: PushEmpty(int, object)
0xd5: Stack[-1] = Stack[-5]
0xd6: Call2 0xb28

0xd7: Stack[-3] = Stack[-2]
0xd8: Pop(2)
0xd9: Push((int) 0)
0xda: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdc: PushEmpty(object)
0xdd: Stack[-1] = Stack[-4]
0xde: Call2 0xb2b

0xdf: Pop(1)
0xe0: Return(); Pop(2)

0xe1: PushEmpty()
0xe2: Call2 0xb5f

0xe3: Pop(0)
0xe4: Return(); Pop(0)

0xe5: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xe6: Pop(0); Push((bool) Stack[-21] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "fdie"
0xea: Call2 0x140

0xeb: Pop(1)
0xec: GOTO 0x13f

0xed: @@ GetPosition(Stack[-10])
0xee: Pop(0)
0xef: @ GetPosition(Stack[-9])
0xf0: Pop(0)
0xf1: @ GetDirection(Stack[-8])
0xf2: Pop(0)
0xf3: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xf4: Push(CvectorIndex(Stack[-7], 0))
0xf5: Push(CvectorIndex(Stack[-9], 0))
0xf6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf7: Push(CvectorIndex(Stack[-8], 2))
0xf8: Push(CvectorIndex(Stack[-10], 2))
0xf9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfa: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfb: Push((int) 0)
0xfc: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfe: Stack[-6] = "fdie"
0xff: GOTO 0x101

0x100: Stack[-6] = "bdie"
0x101: @ RemoveRTEnvelope()
0x102: Pop(0)
0x103: @ SetDeathState()
0x104: Pop(0)
0x105: @ Stop()
0x106: Pop(0)
0x107: @ StopAsync()
0x108: Pop(0)
0x109: Stack[-5] = Stack[-21]
0x10a: Push("GetScriptProperty")
0x10b: Push((int) 2)
0x10c: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x10d: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10e: Push("Owner")
0x10f: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x110: Pop(1)
0x111: Push(Stack[-4])
0x112: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x113: Push("Owner")
0x114: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x115: Pop(1)
0x116: Pop(0); Push((bool) Stack[-5] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x118: Stack[-5] = Stack[-21]
0x119: Push("@GetEyesHeight")
0x11a: Push((int) 1)
0x11b: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x11c: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x11d: @@ GetEyesHeight(Stack[-2])
0x11e: Pop(0)
0x11f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x120: Push(CvectorIndex(Stack[-1], 1))
0x121: Stack[-1] = Stack[-3]
0x122: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x123: Push("head")
0x124: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x125: Pop(1)
0x126: Stack[-3] = (bool) 1
0x127: GOTO 0x129

0x128: Stack[-3] = (bool) 0
0x129: PushEmpty(string)
0x12a: Stack[-1] = Stack[-7]
0x12b: Call2 0x8e5

0x12c: Pop(1)
0x12d: Push("all")
0x12e: @ PlayAnimation(Stack[-1], Stack[-7])
0x12f: Pop(1)
0x130: @ WaitForAnimEnd()
0x131: Pop(0)
0x132: Push(Stack[-3])
0x133: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x134: @ StopAsync()
0x135: Pop(0)
0x136: Push("head")
0x137: @ UnlookAsync(Stack[-1])
0x138: Pop(1)
0x139: Push("all")
0x13a: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x13b: Pop(1)
0x13c: @ RemoveEnvelope()
0x13d: Pop(0)
0x13e: Stack[-5] = 0
0x13f: Return(); Pop(20)

0x140: PushEmpty()
0x141: @ RemoveRTEnvelope()
0x142: Pop(0)
0x143: @ SetDeathState()
0x144: Pop(0)
0x145: @ Stop()
0x146: Pop(0)
0x147: @ StopAsync()
0x148: Pop(0)
0x149: @ StopSecondaryAnimation()
0x14a: Pop(0)
0x14b: PushEmpty(string)
0x14c: Stack[-1] = Stack[-2]
0x14d: Call2 0x8e5

0x14e: Pop(1)
0x14f: Push("all")
0x150: @ PlayAnimation(Stack[-1], Stack[-2])
0x151: Pop(1)
0x152: @ WaitForAnimEnd()
0x153: Pop(0)
0x154: Push("all")
0x155: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x156: Pop(1)
0x157: @ RemoveEnvelope()
0x158: Pop(0)
0x159: Return(); Pop(0)

0x15a: PushEmpty()
0x15b: Return(); Pop(0)

0x15c: PushEmpty()
0x15d: Return(); Pop(0)

0x15e: PushEmpty()
0x15f: Return(); Pop(0)

0x160: PushEmpty(int, int)
0x161: PushEmpty(int, object)
0x162: Stack[-1] = Stack[-5]
0x163: Call2 0xb28

0x164: Stack[-3] = Stack[-2]
0x165: Pop(2)
0x166: Push((int) 0)
0x167: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x169: Push((int) 1)
0x16a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16c: PushEmpty()
0x16d: Call2 0x255

0x16e: Pop(0)
0x16f: PushEmpty(object)
0x170: Stack[-1] = Stack[-4]
0x171: Call2 0xb2b

0x172: Pop(1)
0x173: Return(); Pop(2)

0x174: PushEmpty(int, int)
0x175: PushEmpty(object)
0x176: Stack[-1] = Stack[-4]
0x177: Call2 0xac5

0x178: Pop(1)
0x179: PushEmpty(int, object)
0x17a: Stack[-1] = Stack[-5]
0x17b: Call2 0xb07

0x17c: Stack[-3] = Stack[-2]
0x17d: Pop(2)
0x17e: Push((int) 0)
0x17f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x181: Push((int) 1)
0x182: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x184: PushEmpty()
0x185: Call2 0x255

0x186: Pop(0)
0x187: PushEmpty(object)
0x188: Stack[-1] = Stack[-4]
0x189: Call2 0xb11

0x18a: Pop(1)
0x18b: Return(); Pop(2)

0x18c: PushEmpty(int, int)
0x18d: PushEmpty(bool, object, object, bool)
0x18e: Stack[-3] = Stack[-9]
0x18f: Stack[-2] = Stack[-8]
0x190: Stack[-1] = Stack[-7]
0x191: Call2 0xb5c

0x192: Pop(3)
0x193: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x194: PushEmpty(int, object, bool)
0x195: Stack[-2] = Stack[-8]
0x196: Stack[-1] = Stack[-6]
0x197: Call2 0xb19

0x198: Stack[-4] = Stack[-3]
0x199: Pop(3)
0x19a: Push((int) 0)
0x19b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x19d: Push((int) 1)
0x19e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a0: PushEmpty()
0x1a1: Call2 0x255

0x1a2: Pop(0)
0x1a3: PushEmpty(object)
0x1a4: Stack[-1] = Stack[-6]
0x1a5: Call2 0xb1c

0x1a6: Pop(1)
0x1a7: Return(); Pop(2)

0x1a8: PushEmpty(int, int)
0x1a9: PushEmpty(int, object)
0x1aa: Stack[-1] = Stack[-5]
0x1ab: Call2 0xb1e

0x1ac: Stack[-3] = Stack[-2]
0x1ad: Pop(2)
0x1ae: Push((int) 0)
0x1af: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b1: Push((int) 1)
0x1b2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x255

0x1b6: Pop(0)
0x1b7: PushEmpty(object)
0x1b8: Stack[-1] = Stack[-4]
0x1b9: Call2 0xb21

0x1ba: Pop(1)
0x1bb: Return(); Pop(2)

0x1bc: PushEmpty(int, int)
0x1bd: PushEmpty(bool, object, string)
0x1be: Stack[-2] = Stack[-7]
0x1bf: Stack[-1] = Stack[-6]
0x1c0: Call2 0xa6f

0x1c1: Pop(2)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c3: PushEmpty()
0x1c4: Call2 0x255

0x1c5: Pop(0)
0x1c6: PushEmpty(object, string)
0x1c7: Stack[-2] = Stack[-6]
0x1c8: Stack[-1] = Stack[-5]
0x1c9: Call2 0xa8f

0x1ca: Pop(2)
0x1cb: GOTO 0x1e0

0x1cc: PushEmpty(int, string, object)
0x1cd: Stack[-2] = Stack[-6]
0x1ce: Stack[-1] = Stack[-7]
0x1cf: Call2 0xb23

0x1d0: Stack[-4] = Stack[-3]
0x1d1: Pop(3)
0x1d2: Push((int) 0)
0x1d3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d5: Push((int) 1)
0x1d6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d8: PushEmpty()
0x1d9: Call2 0x255

0x1da: Pop(0)
0x1db: PushEmpty(string, object)
0x1dc: Stack[-2] = Stack[-5]
0x1dd: Stack[-1] = Stack[-6]
0x1de: Call2 0xb26

0x1df: Pop(2)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty()
0x1e2: PushEmpty(bool, string)
0x1e3: Stack[-1] = Stack[-3]
0x1e4: Call2 0xad2

0x1e5: Pop(1)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e7: PushEmpty()
0x1e8: Call2 0x255

0x1e9: Pop(0)
0x1ea: PushEmpty(string)
0x1eb: Stack[-1] = Stack[-2]
0x1ec: Call2 0xae2

0x1ed: Pop(1)
0x1ee: Return(); Pop(0)

0x1ef: PushEmpty()
0x1f0: Call2 0x255

0x1f1: Pop(0)
0x1f2: PushEmpty()
0x1f3: Call2 0xb5f

0x1f4: Pop(0)
0x1f5: Return(); Pop(0)

0x1f6: PushEmpty()
0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[-3]
0x1f9: Call2 0xaa8

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x255

0x1fe: Pop(0)
0x1ff: PushEmpty(object)
0x200: Stack[-1] = Stack[-2]
0x201: Call2 0xabf

0x202: Pop(1)
0x203: Return(); Pop(0)

0x204: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x205: @ WaitForAnimEnd()
0x206: Pop(0)
0x207: PushEmpty(bool)
0x208: Call2 0x858

0x209: Pop(0)
0x20a: Pop(1); Push((bool) Stack[-1] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: Return(); Pop(14)

0x20d: PushEmpty(int)
0x20e: Call2 0xaf6

0x20f: Stack[-8] = Stack[-1]
0x210: Pop(1)
0x211: Stack[-6] = (int) 0
0x212: PushEmpty(bool)
0x213: Stack[-1] = (bool) 0
0x214: Push((int) 5)
0x215: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x217: PushEmpty(bool)
0x218: Call2 0x858

0x219: Pop(0)
0x21a: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21b: Stack[-1] = (bool) 1
0x21c: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x21d: Push((int) 3)
0x21e: @ irand(Stack[-6], Stack[-1])
0x21f: Pop(1)
0x220: Push((int) 0)
0x221: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x223: Push(Stack[-7])
0x224: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x225: @ irand(Stack[-4], Stack[-7])
0x226: Pop(0)
0x227: Push("all")
0x228: PushEmpty(string, int)
0x229: Stack[-1] = Stack[-7]
0x22a: Call2 0xaef

0x22b: Pop(1)
0x22c: @ PlayAnimation(Stack[-2], Stack[-1])
0x22d: Pop(2)
0x22e: @ WaitForAnimEnd(Stack[-3])
0x22f: Pop(0)
0x230: Pop(0); Push((bool) Stack[-3] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: GOTO 0x250

0x233: GOTO 0x245

0x234: Push((int) 1)
0x235: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x237: Push((int) 4)
0x238: @ rand(Stack[-3], Stack[-1])
0x239: Pop(1)
0x23a: Push((int) 1)
0x23b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x23c: @ Sleep(Stack[-1], Stack[-2])
0x23d: Pop(1)
0x23e: Pop(0); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: GOTO 0x250

0x241: GOTO 0x245

0x242: Push(Stack[-6])
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: GOTO 0x250

0x245: PushEmpty(bool)
0x246: Call2 0x253

0x247: Pop(0)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: GOTO 0x250

0x24b: @ ResetAAS()
0x24c: Pop(0)
0x24d: Push((int) 1)
0x24e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x24f: GOTO 0x212

0x250: @ ResetAAS()
0x251: Pop(0)
0x252: Return(); Pop(14)

0x253: Stack[-1] = (bool) 1
0x254: Return(); Pop(0)

0x255: @ StopAnimation()
0x256: Pop(0)
0x257: @ StopGroup0()
0x258: Pop(0)
0x259: Return(); Pop(0)

0x25a: Push((bool) 1)
0x25b: @ SensePlayerOnly(Stack[-1])
0x25c: Pop(1)
0x25d: PushEmpty()
0x25e: Call2 0xb4f

0x25f: Pop(0)
0x260: PushEmpty()
0x261: Call2 0x268

0x262: Pop(0)
0x263: PushEmpty()
0x264: Call2 0x315

0x265: Pop(0)
0x266: GOTO 0x263

0x267: Return(); Pop(0)

0x268: PushEmpty(bool)
0x269: Call2 0x858

0x26a: Pop(0)
0x26b: Pop(1); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26d: PushEmpty()
0x26e: Call2 0xb5f

0x26f: Pop(0)
0x270: Return(); Pop(0)

0x271: PushEmpty(int, int)
0x272: PushEmpty(int, object)
0x273: Stack[-1] = Stack[-5]
0x274: Call2 0xb28

0x275: Stack[-3] = Stack[-2]
0x276: Pop(2)
0x277: Push((int) 0)
0x278: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27a: Push((int) 1)
0x27b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27d: PushEmpty()
0x27e: Call2 0x35c

0x27f: Pop(0)
0x280: PushEmpty(object)
0x281: Stack[-1] = Stack[-4]
0x282: Call2 0xb2b

0x283: Pop(1)
0x284: Return(); Pop(2)

0x285: PushEmpty(int, int)
0x286: PushEmpty(object)
0x287: Stack[-1] = Stack[-4]
0x288: Call2 0xac5

0x289: Pop(1)
0x28a: PushEmpty(int, object)
0x28b: Stack[-1] = Stack[-5]
0x28c: Call2 0xb07

0x28d: Stack[-3] = Stack[-2]
0x28e: Pop(2)
0x28f: Push((int) 0)
0x290: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x292: Push((int) 1)
0x293: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x295: PushEmpty()
0x296: Call2 0x35c

0x297: Pop(0)
0x298: PushEmpty(object)
0x299: Stack[-1] = Stack[-4]
0x29a: Call2 0xb11

0x29b: Pop(1)
0x29c: Return(); Pop(2)

0x29d: PushEmpty(int, int)
0x29e: PushEmpty(bool, object, object, bool)
0x29f: Stack[-3] = Stack[-9]
0x2a0: Stack[-2] = Stack[-8]
0x2a1: Stack[-1] = Stack[-7]
0x2a2: Call2 0xb5c

0x2a3: Pop(3)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2a5: PushEmpty(int, object, bool)
0x2a6: Stack[-2] = Stack[-8]
0x2a7: Stack[-1] = Stack[-6]
0x2a8: Call2 0xb19

0x2a9: Stack[-4] = Stack[-3]
0x2aa: Pop(3)
0x2ab: Push((int) 0)
0x2ac: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2ae: Push((int) 1)
0x2af: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b1: PushEmpty()
0x2b2: Call2 0x35c

0x2b3: Pop(0)
0x2b4: PushEmpty(object)
0x2b5: Stack[-1] = Stack[-6]
0x2b6: Call2 0xb1c

0x2b7: Pop(1)
0x2b8: Return(); Pop(2)

0x2b9: PushEmpty(int, int)
0x2ba: PushEmpty(int, object)
0x2bb: Stack[-1] = Stack[-5]
0x2bc: Call2 0xb1e

0x2bd: Stack[-3] = Stack[-2]
0x2be: Pop(2)
0x2bf: Push((int) 0)
0x2c0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c2: Push((int) 1)
0x2c3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c5: PushEmpty()
0x2c6: Call2 0x35c

0x2c7: Pop(0)
0x2c8: PushEmpty(object)
0x2c9: Stack[-1] = Stack[-4]
0x2ca: Call2 0xb21

0x2cb: Pop(1)
0x2cc: Return(); Pop(2)

0x2cd: PushEmpty(int, int)
0x2ce: PushEmpty(bool, object, string)
0x2cf: Stack[-2] = Stack[-7]
0x2d0: Stack[-1] = Stack[-6]
0x2d1: Call2 0xa6f

0x2d2: Pop(2)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d4: PushEmpty()
0x2d5: Call2 0x35c

0x2d6: Pop(0)
0x2d7: PushEmpty(object, string)
0x2d8: Stack[-2] = Stack[-6]
0x2d9: Stack[-1] = Stack[-5]
0x2da: Call2 0xa8f

0x2db: Pop(2)
0x2dc: GOTO 0x2f1

0x2dd: PushEmpty(int, string, object)
0x2de: Stack[-2] = Stack[-6]
0x2df: Stack[-1] = Stack[-7]
0x2e0: Call2 0xb23

0x2e1: Stack[-4] = Stack[-3]
0x2e2: Pop(3)
0x2e3: Push((int) 0)
0x2e4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2e6: Push((int) 1)
0x2e7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e9: PushEmpty()
0x2ea: Call2 0x35c

0x2eb: Pop(0)
0x2ec: PushEmpty(string, object)
0x2ed: Stack[-2] = Stack[-5]
0x2ee: Stack[-1] = Stack[-6]
0x2ef: Call2 0xb26

0x2f0: Pop(2)
0x2f1: Return(); Pop(2)

0x2f2: PushEmpty()
0x2f3: PushEmpty(bool, string)
0x2f4: Stack[-1] = Stack[-3]
0x2f5: Call2 0xad2

0x2f6: Pop(1)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f8: PushEmpty()
0x2f9: Call2 0x35c

0x2fa: Pop(0)
0x2fb: PushEmpty(string)
0x2fc: Stack[-1] = Stack[-2]
0x2fd: Call2 0xae2

0x2fe: Pop(1)
0x2ff: Return(); Pop(0)

0x300: PushEmpty()
0x301: PushEmpty(bool, object)
0x302: Stack[-1] = Stack[-3]
0x303: Call2 0xaa8

0x304: Pop(1)
0x305: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x306: PushEmpty()
0x307: Call2 0x35c

0x308: Pop(0)
0x309: PushEmpty(object)
0x30a: Stack[-1] = Stack[-2]
0x30b: Call2 0xabf

0x30c: Pop(1)
0x30d: Return(); Pop(0)

0x30e: PushEmpty()
0x30f: Call2 0x35c

0x310: Pop(0)
0x311: PushEmpty()
0x312: Call2 0xb5f

0x313: Pop(0)
0x314: Return(); Pop(0)

0x315: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x316: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x317: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x318: Push((float)0.5)
0x319: @ rand(Stack[-7], Stack[-1])
0x31a: Pop(1)
0x31b: @ Sleep(Stack[-6])
0x31c: Pop(0)
0x31d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x31f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x321: @ GetPosition(Stack[-4])
0x322: Pop(0)
0x323: PushEmpty(float)
0x324: Call2 0x350

0x325: Pop(0)
0x326: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x327: Pop(1)
0x328: Push(Stack[-3])
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: GOTO 0x32f

0x32b: Push((int) 1)
0x32c: @ Sleep(Stack[-1])
0x32d: Pop(1)
0x32e: GOTO 0x321

0x32f: GOTO 0x331

0x330: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x331: PushEmpty(object, cvector)
0x332: Stack[-1] = Stack[-7]
0x333: Call2 0x36e

0x334: Stack[-4] = Stack[-2]
0x335: Pop(2)
0x336: Pop(0); Push(( Stack[-2] != 0 )
0x337: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x338: @ RotatePath(Stack[-2], Stack[-1])
0x339: Pop(0)
0x33a: Push(Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x33c: PushEmpty(bool)
0x33d: Call2 0x36c

0x33e: Pop(0)
0x33f: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x340: Pop(1)
0x341: Stack[-2] = 0
0x342: Push(Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x344: PushEmpty()
0x345: Push(-0, 0); TaskCall(3)
0x346: Call2 0x204

0x347: Pop(-0, 0); TaskReturn
0x348: Pop(0)
0x349: GOTO 0x34d

0x34a: Push((int) 1)
0x34b: @ Sleep(Stack[-1])
0x34c: Pop(1)
0x34d: Stack[-2] = 0
0x34e: GOTO 0x31d

0x34f: Return(); Pop(12)

0x350: PushEmpty(float, float)
0x351: @ GetCameraFarDistance(Stack[-1])
0x352: Pop(0)
0x353: Stack[-3] = Stack[-1]
0x354: Return(); Pop(2)

0x355: PushEmpty()
0x356: @ RequestClearPath(Stack[-1])
0x357: Pop(0)
0x358: Return(); Pop(0)

0x359: @ Stop()
0x35a: Pop(0)
0x35b: Return(); Pop(0)

0x35c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x35d: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x35e: @ Stop()
0x35f: Pop(0)
0x360: @ StopGroup0()
0x361: Pop(0)
0x362: Return(); Pop(0)

0x363: PushEmpty()
0x364: PushEmpty()
0x365: Call2 0x35c

0x366: Pop(0)
0x367: PushEmpty(object)
0x368: Stack[-1] = Stack[-2]
0x369: Call2 0xa57

0x36a: Pop(1)
0x36b: Return(); Pop(0)

0x36c: Stack[-1] = (bool) 0
0x36d: Return(); Pop(0)

0x36e: PushEmpty(object, object)
0x36f: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x370: Pop(0)
0x371: Stack[-4] = Stack[-1]
0x372: Return(); Pop(2)

0x373: Stack[-1] = 0
0x374: PushEmpty()
0x375: PushEmpty(object, bool, float)
0x376: Stack[-3] = Stack[-4]
0x377: Stack[-2] = (bool) 1
0x378: Stack[-1] = (float) 180.0
0x379: Call2 0x382

0x37a: Pop(3)
0x37b: Return(); Pop(0)

0x37c: PushEmpty()
0x37d: Stack[-3] = (float) 0.05
0x37e: Return(); Pop(0)

0x37f: PushEmpty()
0x380: Stack[-3] = (int) 0
0x381: Return(); Pop(0)

0x382: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x383: PushEmpty()
0x384: Call2 0x467

0x385: Pop(0)
0x386: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x387: Push("@GetAttackDistance")
0x388: Push((int) 1)
0x389: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x38a: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38b: @@ GetAttackDistance(Stack[-11])
0x38c: Pop(0)
0x38d: Push((int) 50)
0x38e: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x38f: GOTO 0x391

0x390: Stack[-11] = Stack[-23]
0x391: Push((int) 150)
0x392: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: Stack[-11] = (int) 150
0x395: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x396: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x397: @ IsPlayerActor(Stack[-0], Stack[-8])
0x398: Pop(0)
0x399: Push(Stack[-8])
0x39a: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x39b: Push("attack")
0x39c: @ PlayGlobalMusic(Stack[-1])
0x39d: Pop(1)
0x39e: PushEmpty(object)
0x39f: Call2 0x90e

0x3a0: Pop(0)
0x3a1: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x3a2: Pop(1)
0x3a3: Push(Stack[-24])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a5: Stack[-7] = (bool) 0
0x3a6: GOTO 0x3a8

0x3a7: Stack[-7] = (bool) 1
0x3a8: Push((float)400.0)
0x3a9: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x3aa: PushEmpty(bool)
0x3ab: Stack[-1] = (bool) 0
0x3ac: PushEmpty(bool, object)
0x3ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ae: Call2 0x7b7

0x3af: Pop(1)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b1: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: Stack[-1] = (bool) 1
0x3b4: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x3b5: PushEmpty()
0x3b6: Call2 0x604

0x3b7: Pop(0)
0x3b8: @@ GetPFPosition(Stack[-10])
0x3b9: Pop(0)
0x3ba: @ GetPFPosition(Stack[-9])
0x3bb: Pop(0)
0x3bc: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x3bd: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3be: Pop(0); Push(Stack[-6] * Stack[-6]);
0x3bf: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3c1: PushEmpty(bool, object, float, float, bool, bool)
0x3c2: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x3c3: Stack[-4] = Stack[-17]
0x3c4: Stack[-3] = (float) 3000.0
0x3c5: Stack[-2] = (bool) 1
0x3c6: Stack[-1] = (bool) 0
0x3c7: Push(-6, 3); TaskCall(6)
0x3c8: Call2 0x61f

0x3c9: Pop(-6, 3); TaskReturn
0x3ca: Pop(5)
0x3cb: Pop(1); Push((bool) Stack[-1] == 0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: GOTO 0x456

0x3ce: Stack[-7] = (bool) 0
0x3cf: GOTO 0x455

0x3d0: Pop(0); Push(Stack[-23] * Stack[-23]);
0x3d1: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x3d3: @@ GetPFPosition(Stack[-3])
0x3d4: Pop(0)
0x3d5: @ CanReachByPF(Stack[-2], Stack[-3])
0x3d6: Pop(0)
0x3d7: Pop(0); Push((bool) Stack[-2] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3d9: PushEmpty(bool, object, float, float, bool, bool)
0x3da: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x3db: Stack[-4] = Stack[-17]
0x3dc: Stack[-3] = (float) 3000.0
0x3dd: Stack[-2] = (bool) 1
0x3de: Stack[-1] = (bool) 0
0x3df: Push(-6, 3); TaskCall(6)
0x3e0: Call2 0x61f

0x3e1: Pop(-6, 3); TaskReturn
0x3e2: Pop(5)
0x3e3: Pop(1); Push((bool) Stack[-1] == 0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e5: GOTO 0x456

0x3e6: Stack[-7] = (bool) 0
0x3e7: GOTO 0x3aa

0x3e8: Pop(0); Push((bool) Stack[-7] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ea: PushEmpty(object)
0x3eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ec: Call2 0x84d

0x3ed: Pop(1)
0x3ee: Push("all")
0x3ef: Push("attack_on")
0x3f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f1: Pop(2)
0x3f2: @ WaitForAnimEnd()
0x3f3: Pop(0)
0x3f4: PushEmpty()
0x3f5: Call2 0x604

0x3f6: Pop(0)
0x3f7: @ StopAsync()
0x3f8: Pop(0)
0x3f9: Stack[-7] = (bool) 1
0x3fa: PushEmpty(bool, object)
0x3fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fc: Call2 0x7b7

0x3fd: Pop(1)
0x3fe: Pop(1); Push((bool) Stack[-1] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x400: GOTO 0x456

0x401: @ rand(Stack[-1])
0x402: Pop(0)
0x403: PushEmpty(bool)
0x404: Stack[-1] = (bool) 1
0x405: Push((float)0.25)
0x406: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x408: PushEmpty(bool)
0x409: Call2 0x5d9

0x40a: Pop(0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40c: Stack[-1] = (bool) 0
0x40d: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x40e: @ Face(Stack[-0])
0x40f: Pop(0)
0x410: PushEmpty()
0x411: Call2 0x60b

0x412: Pop(0)
0x413: Push("all")
0x414: Push("attack_stay")
0x415: @ PlayAnimation(Stack[-2], Stack[-1])
0x416: Pop(2)
0x417: PushEmpty(bool, float)
0x418: Stack[-1] = Stack[-25]
0x419: Call2 0x555

0x41a: Pop(2)
0x41b: @ StopAsync()
0x41c: Pop(0)
0x41d: GOTO 0x44c

0x41e: @ Face(Stack[-0])
0x41f: Pop(0)
0x420: Push("all")
0x421: Push("fjump")
0x422: @ PlayAnimation(Stack[-2], Stack[-1])
0x423: Pop(2)
0x424: @ WaitForAnimEnd()
0x425: Pop(0)
0x426: PushEmpty()
0x427: Call2 0x604

0x428: Pop(0)
0x429: Push(CVector(0.0, 0.0, 0.0))
0x42a: @ SetSpeed(Stack[-1])
0x42b: Pop(1)
0x42c: @ Stop()
0x42d: Pop(0)
0x42e: @ StopAsync()
0x42f: Pop(0)
0x430: PushEmpty(bool)
0x431: Call2 0x5d9

0x432: Pop(0)
0x433: Pop(1); Push((bool) Stack[-1] == 0)
0x434: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x435: PushEmpty(bool, object)
0x436: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x437: Call2 0x7b7

0x438: Pop(1)
0x439: Pop(1); Push((bool) Stack[-1] == 0)
0x43a: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43b: GOTO 0x456

0x43c: @@ GetPFPosition(Stack[-10])
0x43d: Pop(0)
0x43e: @ GetPFPosition(Stack[-9])
0x43f: Pop(0)
0x440: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x441: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x442: Pop(0); Push(Stack[-23] * Stack[-23]);
0x443: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x445: PushEmpty(bool, float)
0x446: Stack[-1] = Stack[-25]
0x447: Call2 0x4b1

0x448: Pop(1)
0x449: Pop(1); Push((bool) Stack[-1] == 0)
0x44a: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44b: GOTO 0x456

0x44c: GOTO 0x455

0x44d: PushEmpty(bool, float)
0x44e: Stack[-1] = Stack[-25]
0x44f: Call2 0x4b1

0x450: Pop(1)
0x451: Pop(1); Push((bool) Stack[-1] == 0)
0x452: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x453: GOTO 0x456

0x454: Stack[-7] = (bool) 1
0x455: GOTO 0x3aa

0x456: @ WaitForAnimEnd()
0x457: Pop(0)
0x458: Push( Stack[3 + Tasks[-1].StackPointer] )
0x459: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x45a: Return(); Pop(22)

0x45b: Push("all")
0x45c: Push("attack_off")
0x45d: @ PlayAnimation(Stack[-2], Stack[-1])
0x45e: Pop(2)
0x45f: @ WaitForAnimEnd()
0x460: Pop(0)
0x461: Push(Stack[-8])
0x462: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x463: Push((float)2.0)
0x464: @ Sleep(Stack[-1])
0x465: Pop(1)
0x466: Return(); Pop(22)

0x467: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x468: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x469: Push("all")
0x46a: Push("attack_begin")
0x46b: Push((int) 1)
0x46c: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x46d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x46e: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x46f: Pop(2)
0x470: Pop(0); Push((bool) Stack[-3] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x472: GOTO 0x476

0x473: Push((int) 1)
0x474: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x475: GOTO 0x469

0x476: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x477: Push("attack")
0x478: Push((int) 1)
0x479: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x47a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47b: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x47c: Pop(1)
0x47d: Pop(0); Push((bool) Stack[-2] == 0)
0x47e: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47f: GOTO 0x483

0x480: Push((int) 1)
0x481: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x482: GOTO 0x477

0x483: Push("all")
0x484: Push("bjump")
0x485: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x486: Pop(2)
0x487: Push(CvectorIndex(Stack[-1], 2))
0x488: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x489: Return(); Pop(6)

0x48a: PushEmpty(object, float, float, object, float, float)
0x48b: Push((float)0.9)
0x48c: Pop(1); Push(Stack[-9] * Stack[-1]);
0x48d: @ GetVictim(Stack[-1], Stack[-4])
0x48e: Pop(1)
0x48f: @ ReportAttack(Stack[-0])
0x490: Pop(0)
0x491: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x492: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x493: PushEmpty(float, object, int)
0x494: Stack[-2] = Stack[-6]
0x495: Stack[-1] = Stack[-10]
0x496: Call2 0x37c

0x497: Stack[-5] = Stack[-3]
0x498: Pop(3)
0x499: PushEmpty(float, object, float, int)
0x49a: Stack[-3] = Stack[-7]
0x49b: Stack[-2] = Stack[-6]
0x49c: PushEmpty(int, object, int)
0x49d: Stack[-2] = Stack[-10]
0x49e: Stack[-1] = Stack[-14]
0x49f: Call2 0x37f

0x4a0: Stack[-4] = Stack[-3]
0x4a1: Pop(3)
0x4a2: Call2 0x745

0x4a3: Stack[-5] = Stack[-4]
0x4a4: Pop(4)
0x4a5: PushEmpty(int)
0x4a6: Call2 0x609

0x4a7: Pop(0)
0x4a8: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x4a9: Pop(1)
0x4aa: PushEmpty(object, float)
0x4ab: Stack[-2] = Stack[-5]
0x4ac: Stack[-1] = Stack[-3]
0x4ad: Call2 0x610

0x4ae: Pop(2)
0x4af: Return(); Pop(6)

0x4b0: Stack[-3] = 0
0x4b1: PushEmpty(int, bool, int, string, int, bool, int, string)
0x4b2: PushEmpty()
0x4b3: Call2 0x604

0x4b4: Pop(0)
0x4b5: @ irand(Stack[-4], Stack[-1])
0x4b6: Pop(0)
0x4b7: Push((int) 1)
0x4b8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4b9: @ Face(Stack[-0])
0x4ba: Pop(0)
0x4bb: Push((bool) 1)
0x4bc: @ SetAttackState(Stack[-1])
0x4bd: Pop(1)
0x4be: PushEmpty()
0x4bf: Call2 0x953

0x4c0: Pop(0)
0x4c1: Push("all")
0x4c2: Push("attack_begin")
0x4c3: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4c4: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c5: Pop(2)
0x4c6: @ WaitForAnimEnd()
0x4c7: Pop(0)
0x4c8: PushEmpty()
0x4c9: Call2 0x5e4

0x4ca: Pop(0)
0x4cb: PushEmpty(bool, object)
0x4cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cd: Call2 0x7b7

0x4ce: Pop(1)
0x4cf: Pop(1); Push((bool) Stack[-1] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d1: @ StopAsync()
0x4d2: Pop(0)
0x4d3: Stack[-10] = (bool) 0
0x4d4: Return(); Pop(8)

0x4d5: PushEmpty(float, int)
0x4d6: Stack[-2] = Stack[-11]
0x4d7: Stack[-1] = Stack[-6]
0x4d8: Call2 0x48a

0x4d9: Pop(2)
0x4da: Push("all")
0x4db: Push("attack_middle")
0x4dc: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4dd: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x4de: Pop(2)
0x4df: Push(Stack[-3])
0x4e0: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x4e1: PushEmpty()
0x4e2: Call2 0x953

0x4e3: Pop(0)
0x4e4: Push("all")
0x4e5: Push("attack_middle")
0x4e6: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4e7: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e8: Pop(2)
0x4e9: @ WaitForAnimEnd()
0x4ea: Pop(0)
0x4eb: PushEmpty()
0x4ec: Call2 0x604

0x4ed: Pop(0)
0x4ee: PushEmpty(bool, object)
0x4ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f0: Call2 0x7b7

0x4f1: Pop(1)
0x4f2: Pop(1); Push((bool) Stack[-1] == 0)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f4: @ StopAsync()
0x4f5: Pop(0)
0x4f6: Stack[-10] = (bool) 0
0x4f7: Return(); Pop(8)

0x4f8: PushEmpty(float, int)
0x4f9: Stack[-2] = Stack[-11]
0x4fa: Stack[-1] = Stack[-6]
0x4fb: Call2 0x48a

0x4fc: Pop(2)
0x4fd: Stack[-2] = (int) 1
0x4fe: Push("attack_middle")
0x4ff: Pop(1); Push(Stack[-1] + Stack[-5]);
0x500: Push("_")
0x501: Pop(2); Push(Stack[-2] + Stack[-1]);
0x502: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x503: Push("all")
0x504: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x505: Pop(1)
0x506: Pop(0); Push((bool) Stack[-3] == 0)
0x507: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x508: GOTO 0x526

0x509: PushEmpty()
0x50a: Call2 0x953

0x50b: Pop(0)
0x50c: Push("all")
0x50d: @ PlayAnimation(Stack[-1], Stack[-2])
0x50e: Pop(1)
0x50f: @ WaitForAnimEnd()
0x510: Pop(0)
0x511: PushEmpty()
0x512: Call2 0x604

0x513: Pop(0)
0x514: PushEmpty(bool, object)
0x515: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x516: Call2 0x7b7

0x517: Pop(1)
0x518: Pop(1); Push((bool) Stack[-1] == 0)
0x519: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51a: @ StopAsync()
0x51b: Pop(0)
0x51c: Stack[-10] = (bool) 0
0x51d: Return(); Pop(8)

0x51e: PushEmpty(float, int)
0x51f: Stack[-2] = Stack[-11]
0x520: Stack[-1] = Stack[-6]
0x521: Call2 0x48a

0x522: Pop(2)
0x523: Push((int) 1)
0x524: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x525: GOTO 0x4fe

0x526: Push((bool) 0)
0x527: @ SetAttackState(Stack[-1])
0x528: Pop(1)
0x529: Push("all")
0x52a: Push("attack_end")
0x52b: Pop(1); Push(Stack[-1] + Stack[-6]);
0x52c: @ PlayAnimation(Stack[-2], Stack[-1])
0x52d: Pop(2)
0x52e: PushEmpty(bool)
0x52f: Call2 0x612

0x530: Pop(0)
0x531: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x532: PushEmpty(bool, float)
0x533: Stack[-1] = (float) 0.75
0x534: Call2 0x53a

0x535: Pop(2)
0x536: @ StopAsync()
0x537: Pop(0)
0x538: Stack[-10] = (bool) 1
0x539: Return(); Pop(8)

0x53a: PushEmpty(float, bool, float, bool)
0x53b: @ rand(Stack[-2])
0x53c: Pop(0)
0x53d: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x53e: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x53f: @ IsAnimationPlaying(Stack[-1])
0x540: Pop(0)
0x541: Pop(0); Push((bool) Stack[-1] == 0)
0x542: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x543: GOTO 0x54d

0x544: PushEmpty(bool)
0x545: Call2 0x59c

0x546: Pop(0)
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: Stack[-6] = (bool) 1
0x549: Return(); Pop(4)

0x54a: @ sync()
0x54b: Pop(0)
0x54c: GOTO 0x53f

0x54d: GOTO 0x553

0x54e: @ WaitForAnimEnd()
0x54f: Pop(0)
0x550: PushEmpty()
0x551: Call2 0x604

0x552: Pop(0)
0x553: Stack[-6] = (bool) 0
0x554: Return(); Pop(4)

0x555: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x556: @ IsAnimationPlaying(Stack[-5])
0x557: Pop(0)
0x558: Pop(0); Push((bool) Stack[-5] == 0)
0x559: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x55a: GOTO 0x57b

0x55b: PushEmpty(bool)
0x55c: Call2 0x59c

0x55d: Pop(0)
0x55e: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55f: Stack[-12] = (bool) 1
0x560: Return(); Pop(10)

0x561: PushEmpty(bool, object)
0x562: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x563: Call2 0x7b7

0x564: Pop(1)
0x565: Pop(1); Push((bool) Stack[-1] == 0)
0x566: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x567: Stack[-12] = (bool) 0
0x568: Return(); Pop(10)

0x569: @@ GetPFPosition(Stack[-4])
0x56a: Pop(0)
0x56b: @ GetPFPosition(Stack[-3])
0x56c: Pop(0)
0x56d: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x56e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x56f: Pop(0); Push(Stack[-11] * Stack[-11]);
0x570: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x572: PushEmpty(bool, float)
0x573: Stack[-1] = Stack[-13]
0x574: Call2 0x4b1

0x575: Pop(2)
0x576: Stack[-12] = (bool) 1
0x577: Return(); Pop(10)

0x578: @ sync()
0x579: Pop(0)
0x57a: GOTO 0x556

0x57b: PushEmpty()
0x57c: Call2 0x604

0x57d: Pop(0)
0x57e: Stack[-12] = (bool) 0
0x57f: Return(); Pop(10)

0x580: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x581: PushEmpty(bool, object)
0x582: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x583: Call2 0x7b7

0x584: Pop(1)
0x585: Pop(1); Push((bool) Stack[-1] == 0)
0x586: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x587: Stack[-11] = (bool) 0
0x588: Return(); Pop(10)

0x589: PushEmpty(bool)
0x58a: Call2 0x5d9

0x58b: Pop(0)
0x58c: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x58d: @@ GetPFPosition(Stack[-5])
0x58e: Pop(0)
0x58f: @ GetPFPosition(Stack[-4])
0x590: Pop(0)
0x591: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x592: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x593: @@ GetAttackDistance(Stack[-1])
0x594: Pop(0)
0x595: Push((int) 50)
0x596: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x597: Pop(0); Push(Stack[-1] * Stack[-1]);
0x598: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x599: Return(); Pop(10)

0x59a: Stack[-11] = (bool) 0
0x59b: Return(); Pop(10)

0x59c: PushEmpty(bool)
0x59d: Stack[-1] = (bool) 0
0x59e: PushEmpty(bool)
0x59f: Call2 0x580

0x5a0: Pop(0)
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a2: PushEmpty(bool)
0x5a3: Call2 0x5ac

0x5a4: Pop(0)
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a6: Stack[-1] = (bool) 1
0x5a7: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a8: Stack[-1] = (bool) 1
0x5a9: Return(); Pop(0)

0x5aa: Stack[-1] = (bool) 0
0x5ab: Return(); Pop(0)

0x5ac: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x5ad: @ GetScene(Stack[-5])
0x5ae: Pop(0)
0x5af: Stack[-4] = (bool) 0
0x5b0: PushEmpty(cvector, object)
0x5b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b2: Call2 0x72d

0x5b3: Pop(1)
0x5b4: Pop(1); Push(( -Stack[-1])
0x5b5: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x5b6: Pop(1)
0x5b7: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b9: GOTO 0x5d6

0x5ba: @ Face(Stack[-0])
0x5bb: Pop(0)
0x5bc: Push("all")
0x5bd: Push("bjump")
0x5be: @ PlayAnimation(Stack[-2], Stack[-1])
0x5bf: Pop(2)
0x5c0: @@ GetPFPosition(Stack[-2])
0x5c1: Pop(0)
0x5c2: @ GetPFPosition(Stack[-1])
0x5c3: Pop(0)
0x5c4: @ WaitForAnimEnd()
0x5c5: Pop(0)
0x5c6: PushEmpty()
0x5c7: Call2 0x604

0x5c8: Pop(0)
0x5c9: @ StopAsync()
0x5ca: Pop(0)
0x5cb: Push(CVector(0.0, 0.0, 0.0))
0x5cc: @ SetSpeed(Stack[-1])
0x5cd: Pop(1)
0x5ce: Stack[-4] = (bool) 1
0x5cf: PushEmpty(bool)
0x5d0: Call2 0x580

0x5d1: Pop(0)
0x5d2: Pop(1); Push((bool) Stack[-1] == 0)
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d4: GOTO 0x5d6

0x5d5: GOTO 0x5b0

0x5d6: Stack[-11] = Stack[-4]
0x5d7: Return(); Pop(10)

0x5d8: Stack[-5] = 0
0x5d9: PushEmpty(bool, bool)
0x5da: Push("IsAttacking")
0x5db: Push((int) 1)
0x5dc: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5de: @@ IsAttacking(Stack[-1])
0x5df: Pop(0)
0x5e0: Stack[-3] = Stack[-1]
0x5e1: Return(); Pop(2)

0x5e2: Stack[-3] = (bool) 0
0x5e3: Return(); Pop(2)

0x5e4: PushEmpty(float, int, float, int)
0x5e5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e7: Return(); Pop(4)

0x5e8: Push( Stack[5 + Tasks[-1].StackPointer] )
0x5e9: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ea: Push((int) -1)
0x5eb: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x5ec: Push((int) 0)
0x5ed: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ef: Return(); Pop(4)

0x5f0: @ rand(Stack[-2])
0x5f1: Pop(0)
0x5f2: PushEmpty(float)
0x5f3: Call2 0x616

0x5f4: Pop(0)
0x5f5: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x5f6: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x5f7: @ irand(Stack[-1], Stack[-2])
0x5f8: Pop(0)
0x5f9: Push((int) 1)
0x5fa: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5fb: Push("attack")
0x5fc: Pop(1); Push(Stack[-1] + Stack[-2]);
0x5fd: @ Speak(Stack[-1])
0x5fe: Pop(1)
0x5ff: PushEmpty(int)
0x600: Call2 0x614

0x601: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x602: Pop(1)
0x603: Return(); Pop(4)

0x604: PushEmpty(object)
0x605: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x606: Call2 0x94a

0x607: Pop(1)
0x608: Return(); Pop(0)

0x609: Stack[-1] = (int) 0
0x60a: Return(); Pop(0)

0x60b: PushEmpty(string)
0x60c: Stack[-1] = "attack_stay"
0x60d: Call2 0x8e5

0x60e: Pop(1)
0x60f: Return(); Pop(0)

0x610: PushEmpty()
0x611: Return(); Pop(0)

0x612: Stack[-1] = (bool) 1
0x613: Return(); Pop(0)

0x614: Stack[-1] = (int) 1
0x615: Return(); Pop(0)

0x616: Stack[-1] = (float) 0.5
0x617: Return(); Pop(0)

0x618: PushEmpty()
0x619: Call2 0x65e

0x61a: Pop(0)
0x61b: PushEmpty()
0x61c: Call2 0xb5f

0x61d: Pop(0)
0x61e: Return(); Pop(0)

0x61f: PushEmpty(bool, bool, bool, bool)
0x620: PushEmpty(object)
0x621: Stack[-1] = Stack[-10]
0x622: Call2 0x94a

0x623: Pop(1)
0x624: Push((int) 1)
0x625: Push((int) 5)
0x626: @ SetTimer(Stack[-2], Stack[-1])
0x627: Pop(2)
0x628: @ CanSee(Stack[-2], Stack[-9])
0x629: Pop(0)
0x62a: Push(Stack[-2])
0x62b: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x62c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x62d: PushEmpty(object)
0x62e: Stack[-1] = Stack[-10]
0x62f: Call2 0x8d3

0x630: Pop(1)
0x631: GOTO 0x633

0x632: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x633: PushEmpty(bool, object)
0x634: Stack[-1] = Stack[-11]
0x635: Call2 0x734

0x636: Pop(1)
0x637: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x638: PushEmpty(object)
0x639: Call2 0x90e

0x63a: Pop(0)
0x63b: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x63c: Pop(1)
0x63d: PushEmpty(bool, object, float, float, bool, bool)
0x63e: Stack[-5] = Stack[-15]
0x63f: Stack[-4] = Stack[-14]
0x640: Stack[-3] = Stack[-13]
0x641: Stack[-2] = Stack[-12]
0x642: Stack[-1] = Stack[-11]
0x643: Call2 0x688

0x644: Stack[-7] = Stack[-6]
0x645: Pop(6)
0x646: Push( Stack[2 + Tasks[-1].StackPointer] )
0x647: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x648: Push("head")
0x649: @ UnlookAsync(Stack[-1])
0x64a: Pop(1)
0x64b: Push((int) 1)
0x64c: @ KillTimer(Stack[-1])
0x64d: Pop(1)
0x64e: Stack[-10] = Stack[-1]
0x64f: Return(); Pop(4)

0x650: PushEmpty()
0x651: Push((int) 1)
0x652: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x653: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x654: PushEmpty(object)
0x655: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x656: Call2 0x94a

0x657: Pop(1)
0x658: GOTO 0x65d

0x659: PushEmpty(int)
0x65a: Stack[-1] = Stack[-2]
0x65b: Call2 0x6ee

0x65c: Pop(1)
0x65d: Return(); Pop(0)

0x65e: Push((int) 1)
0x65f: @ KillTimer(Stack[-1])
0x660: Pop(1)
0x661: Push( Stack[2 + Tasks[-1].StackPointer] )
0x662: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x663: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x664: Push("head")
0x665: @ UnlookAsync(Stack[-1])
0x666: Pop(1)
0x667: PushEmpty()
0x668: Call2 0x704

0x669: Pop(0)
0x66a: Return(); Pop(0)

0x66b: PushEmpty()
0x66c: PushEmpty(bool)
0x66d: Stack[-1] = (bool) 0
0x66e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x66f: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x670: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x671: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x672: Stack[-1] = (bool) 1
0x673: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x674: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x675: PushEmpty(object)
0x676: Stack[-1] = Stack[-2]
0x677: Call2 0x8d3

0x678: Pop(1)
0x679: Return(); Pop(0)

0x67a: PushEmpty()
0x67b: PushEmpty(bool)
0x67c: Stack[-1] = (bool) 0
0x67d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x67e: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x67f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x680: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x681: Stack[-1] = (bool) 1
0x682: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x683: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x684: Push("head")
0x685: @ UnlookAsync(Stack[-1])
0x686: Pop(1)
0x687: Return(); Pop(0)

0x688: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x689: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x68a: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x68b: Stack[-7] = Stack[-17]
0x68c: PushEmpty(bool, object)
0x68d: Stack[-1] = Stack[-23]
0x68e: Call2 0x714

0x68f: Pop(1)
0x690: Pop(1); Push((bool) Stack[-1] == 0)
0x691: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x692: Stack[-22] = (bool) 0
0x693: Return(); Pop(16)

0x694: @@ GetPosition(Stack[-5])
0x695: Pop(0)
0x696: @ GetPosition(Stack[-4])
0x697: Pop(0)
0x698: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x699: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x69a: PushEmpty(bool)
0x69b: Stack[-1] = (bool) 0
0x69c: Push((int) 0)
0x69d: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x69e: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x69f: Pop(0); Push(Stack[-20] * Stack[-20]);
0x6a0: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a2: Stack[-1] = (bool) 1
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a4: @ Stop()
0x6a5: Pop(0)
0x6a6: Stack[-22] = (bool) 0
0x6a7: Return(); Pop(16)

0x6a8: Pop(0); Push(Stack[-20] * Stack[-20]);
0x6a9: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6ab: @@ GetPFPosition(Stack[-5])
0x6ac: Pop(0)
0x6ad: @ FindPathTo(Stack[-1], Stack[-5])
0x6ae: Pop(0)
0x6af: Pop(0); Push(( Stack[-1] != 0 )
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b1: Stack[-6] = Stack[-1]
0x6b2: Stack[-1] = 0
0x6b3: Pop(0); Push(( Stack[-6] != 0 )
0x6b4: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6b5: Push(Stack[-7])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6b7: Stack[-7] = (bool) 0
0x6b8: @ RotatePath(Stack[-6], Stack[-8])
0x6b9: Pop(0)
0x6ba: Pop(0); Push((bool) Stack[-8] == 0)
0x6bb: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6bc: GOTO 0x6ec

0x6bd: Push((int) 0)
0x6be: Push((float)0.3)
0x6bf: @ SetTimer(Stack[-2], Stack[-1])
0x6c0: Pop(2)
0x6c1: PushEmpty(string)
0x6c2: Call2 0x71b

0x6c3: Pop(0)
0x6c4: PushEmpty(string)
0x6c5: Call2 0x71d

0x6c6: Pop(0)
0x6c7: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x6c8: Pop(2)
0x6c9: Pop(0); Push((bool) Stack[-8] == 0)
0x6ca: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6cb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6cc: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6cd: Stack[-6] = 0
0x6ce: GOTO 0x6ec

0x6cf: GOTO 0x6d1

0x6d0: GOTO 0x6eb

0x6d1: GOTO 0x6d3

0x6d2: Stack[-6] = 0
0x6d3: GOTO 0x6e4

0x6d4: Push((int) 0)
0x6d5: @ KillTimer(Stack[-1])
0x6d6: Pop(1)
0x6d7: Push((float)0.5)
0x6d8: @ Sleep(Stack[-1], Stack[-9])
0x6d9: Pop(1)
0x6da: Pop(0); Push((bool) Stack[-8] == 0)
0x6db: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6dc: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6dd: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6de: Stack[-6] = 0
0x6df: GOTO 0x6ec

0x6e0: Push((int) 0)
0x6e1: Push((float)0.3)
0x6e2: @ SetTimer(Stack[-2], Stack[-1])
0x6e3: Pop(2)
0x6e4: Stack[-1] = 0
0x6e5: GOTO 0x6ea

0x6e6: Push((int) 0)
0x6e7: @ KillTimer(Stack[-1])
0x6e8: Pop(1)
0x6e9: GOTO 0x6ec

0x6ea: Stack[-6] = 0
0x6eb: GOTO 0x68c

0x6ec: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x6ed: Return(); Pop(16)

0x6ee: PushEmpty()
0x6ef: Push((int) 0)
0x6f0: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f2: Return(); Pop(0)

0x6f3: PushEmpty(bool, object)
0x6f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f5: Call2 0x714

0x6f6: Pop(1)
0x6f7: Pop(1); Push((bool) Stack[-1] == 0)
0x6f8: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6fa: Push((int) 0)
0x6fb: @ KillTimer(Stack[-1])
0x6fc: Pop(1)
0x6fd: @ Stop()
0x6fe: Pop(0)
0x6ff: Return(); Pop(0)

0x700: PushEmpty()
0x701: @ RequestClearPath(Stack[-1])
0x702: Pop(0)
0x703: Return(); Pop(0)

0x704: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x705: Push((int) 0)
0x706: @ KillTimer(Stack[-1])
0x707: Pop(1)
0x708: @ Stop()
0x709: Pop(0)
0x70a: Return(); Pop(0)

0x70b: PushEmpty()
0x70c: PushEmpty()
0x70d: Call2 0x65e

0x70e: Pop(0)
0x70f: PushEmpty(object)
0x710: Stack[-1] = Stack[-2]
0x711: Call2 0xa57

0x712: Pop(1)
0x713: Return(); Pop(0)

0x714: PushEmpty()
0x715: PushEmpty(bool, object)
0x716: Stack[-1] = Stack[-3]
0x717: Call2 0x7b7

0x718: Stack[-4] = Stack[-2]
0x719: Pop(2)
0x71a: Return(); Pop(0)

0x71b: Stack[-1] = "walk"
0x71c: Return(); Pop(0)

0x71d: Stack[-1] = "run"
0x71e: Return(); Pop(0)

0x71f: PushEmpty()
0x720: Push((int) 2)
0x721: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x722: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x723: Stack[-2] = "fire"
0x724: Return(); Pop(0)

0x725: GOTO 0x72b

0x726: Push((int) 1)
0x727: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x728: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x729: Stack[-2] = "bullet"
0x72a: Return(); Pop(0)

0x72b: Stack[-2] = "phys"
0x72c: Return(); Pop(0)

0x72d: PushEmpty(cvector, cvector, cvector, cvector)
0x72e: @ GetPosition(Stack[-2])
0x72f: Pop(0)
0x730: @@ GetPosition(Stack[-1])
0x731: Pop(0)
0x732: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x733: Return(); Pop(4)

0x734: PushEmpty(bool, bool)
0x735: @ IsPlayerActor(Stack[-3], Stack[-1])
0x736: Pop(0)
0x737: Stack[-4] = Stack[-1]
0x738: Return(); Pop(2)

0x739: PushEmpty(bool, bool)
0x73a: Push("HasProperty")
0x73b: Push((int) 2)
0x73c: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x73d: Pop(1); Push((bool) Stack[-1] == 0)
0x73e: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73f: Stack[-5] = (bool) 0
0x740: Return(); Pop(2)

0x741: @@ HasProperty(Stack[-3], Stack[-1])
0x742: Pop(0)
0x743: Stack[-5] = Stack[-1]
0x744: Return(); Pop(2)

0x745: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x746: PushEmpty(bool, object, string)
0x747: Stack[-2] = Stack[-18]
0x748: Stack[-1] = "health"
0x749: Call2 0x739

0x74a: Pop(2)
0x74b: Pop(1); Push((bool) Stack[-1] == 0)
0x74c: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74d: Stack[-16] = (float) 0.0
0x74e: Return(); Pop(12)

0x74f: PushEmpty(bool, object, string)
0x750: Stack[-2] = Stack[-18]
0x751: Stack[-1] = "armor"
0x752: Call2 0x739

0x753: Pop(2)
0x754: Pop(1); Push((bool) Stack[-1] == 0)
0x755: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x756: Stack[-6] = (int) 0
0x757: GOTO 0x75b

0x758: Push("armor")
0x759: @@ GetProperty(Stack[-1], Stack[-7])
0x75a: Pop(1)
0x75b: Push("armor_")
0x75c: PushEmpty(string, int)
0x75d: Stack[-1] = Stack[-16]
0x75e: Call2 0x71f

0x75f: Pop(1)
0x760: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x761: PushEmpty(bool, object, string)
0x762: Stack[-2] = Stack[-18]
0x763: Stack[-1] = Stack[-8]
0x764: Call2 0x739

0x765: Pop(2)
0x766: Pop(1); Push((bool) Stack[-1] == 0)
0x767: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x768: Stack[-4] = (int) 0
0x769: GOTO 0x76c

0x76a: @@ GetProperty(Stack[-5], Stack[-4])
0x76b: Pop(0)
0x76c: PushEmpty(float, float, float)
0x76d: Pop(0); Push(Stack[-9] + Stack[-7]);
0x76e: Push((float)100.0)
0x76f: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x770: Stack[-1] = (int) 1
0x771: Call2 0x91e

0x772: Stack[-6] = Stack[-3]
0x773: Pop(3)
0x774: Push("health")
0x775: @@ GetProperty(Stack[-1], Stack[-3])
0x776: Pop(1)
0x777: Push((int) 1)
0x778: Pop(1); Push(Stack[-1] - Stack[-4]);
0x779: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x77a: Push("health")
0x77b: PushEmpty(float, float, float, float)
0x77c: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x77d: Stack[-2] = (int) 0
0x77e: Stack[-1] = (int) 1
0x77f: Call2 0x925

0x780: Pop(3)
0x781: @@ SetProperty(Stack[-2], Stack[-1])
0x782: Pop(2)
0x783: PushEmpty(bool, object)
0x784: Stack[-1] = Stack[-17]
0x785: Call2 0x734

0x786: Pop(1)
0x787: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x788: PushEmpty(float)
0x789: Stack[-1] = -Stack[-2]; Pop(0);
0x78a: Call2 0x930

0x78b: Pop(1)
0x78c: Stack[-16] = Stack[-1]
0x78d: Return(); Pop(12)

0x78e: PushEmpty(bool, bool)
0x78f: @@ IsDead(Stack[-1])
0x790: Pop(0)
0x791: Stack[-4] = Stack[-1]
0x792: Return(); Pop(2)

0x793: PushEmpty(object, object, object, object)
0x794: Pop(0); Push((bool) Stack[-5] == 0)
0x795: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x796: Stack[-6] = (bool) 0
0x797: Return(); Pop(4)

0x798: PushEmpty(bool)
0x799: Stack[-1] = (bool) 0
0x79a: Push("IsDead")
0x79b: Push((int) 1)
0x79c: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x79d: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x79e: PushEmpty(bool, object)
0x79f: Stack[-1] = Stack[-8]
0x7a0: Call2 0x78e

0x7a1: Pop(1)
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a3: Stack[-1] = (bool) 1
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a5: Stack[-6] = (bool) 0
0x7a6: Return(); Pop(4)

0x7a7: @ GetScene(Stack[-2])
0x7a8: Pop(0)
0x7a9: Pop(0); Push((bool) Stack[-2] == 0)
0x7aa: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ab: Stack[-6] = (bool) 0
0x7ac: Return(); Pop(4)

0x7ad: @@ GetScene(Stack[-1])
0x7ae: Pop(0)
0x7af: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b1: Stack[-6] = (bool) 0
0x7b2: Return(); Pop(4)

0x7b3: Stack[-6] = (bool) 1
0x7b4: Return(); Pop(4)

0x7b5: Stack[-1] = 0
0x7b6: Stack[-2] = 0
0x7b7: PushEmpty(int, int)
0x7b8: PushEmpty(bool, object)
0x7b9: Stack[-1] = Stack[-5]
0x7ba: Call2 0x793

0x7bb: Pop(1)
0x7bc: Pop(1); Push((bool) Stack[-1] == 0)
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7be: Stack[-4] = (bool) 0
0x7bf: Return(); Pop(2)

0x7c0: PushEmpty(bool, object, string)
0x7c1: Stack[-2] = Stack[-6]
0x7c2: Stack[-1] = "noaccess"
0x7c3: Call2 0x739

0x7c4: Pop(2)
0x7c5: Pop(1); Push((bool) Stack[-1] == 0)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7c7: Stack[-4] = (bool) 1
0x7c8: Return(); Pop(2)

0x7c9: Push("noaccess")
0x7ca: @@ GetProperty(Stack[-1], Stack[-2])
0x7cb: Pop(1)
0x7cc: Push((int) 0)
0x7cd: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x7ce: Return(); Pop(2)

0x7cf: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x7d0: Pop(0); Push((bool) Stack[-15] == 0)
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d2: Return(); Pop(14)

0x7d3: @ IsDead(Stack[-7])
0x7d4: Pop(0)
0x7d5: Push(Stack[-7])
0x7d6: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d7: Return(); Pop(14)

0x7d8: @ GetSecondaryAnimationType(Stack[-6])
0x7d9: Pop(0)
0x7da: Push((int) 0)
0x7db: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x7dc: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dd: Return(); Pop(14)

0x7de: @@ GetPosition(Stack[-5])
0x7df: Pop(0)
0x7e0: @ GetPosition(Stack[-4])
0x7e1: Pop(0)
0x7e2: @ GetDirection(Stack[-3])
0x7e3: Pop(0)
0x7e4: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x7e5: Push(CvectorIndex(Stack[-2], 0))
0x7e6: Push(CvectorIndex(Stack[-4], 0))
0x7e7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7e8: Push(CvectorIndex(Stack[-3], 2))
0x7e9: Push(CvectorIndex(Stack[-5], 2))
0x7ea: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7eb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7ec: Push((int) 0)
0x7ed: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ef: Stack[-1] = "fhit"
0x7f0: GOTO 0x7f2

0x7f1: Stack[-1] = "bhit"
0x7f2: Push("hit_react")
0x7f3: Push("1")
0x7f4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7f5: Push("2")
0x7f6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7f7: Push((int) -10)
0x7f8: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7f9: Pop(4)
0x7fa: Return(); Pop(14)

0x7fb: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x7fc: PushEmpty(bool)
0x7fd: Stack[-1] = (bool) 0
0x7fe: PushEmpty(bool)
0x7ff: Stack[-1] = (bool) 0
0x800: Push(Stack[-23])
0x801: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x802: Push((int) 4)
0x803: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x804: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x805: Stack[-1] = (bool) 1
0x806: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x807: Push((int) 5)
0x808: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x809: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x80a: Stack[-1] = (bool) 1
0x80b: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x80c: PushEmpty(cvector, cvector)
0x80d: PushEmpty(cvector, object)
0x80e: Stack[-1] = Stack[-25]
0x80f: Call2 0x72d

0x810: Stack[-3] = Stack[-2]
0x811: Pop(2)
0x812: Call2 0x914

0x813: Stack[-11] = Stack[-2]
0x814: Pop(2)
0x815: @ CreateVectorVector(Stack[-8])
0x816: Pop(0)
0x817: Stack[-7] = (int) 1
0x818: Push("hit")
0x819: Pop(1); Push(Stack[-1] + Stack[-8]);
0x81a: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x81b: Pop(1)
0x81c: Pop(0); Push((bool) Stack[-6] == 0)
0x81d: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81e: GOTO 0x828

0x81f: Pop(0); Push(Stack[-4] | Stack[-9]);
0x820: Push((float)0.70711)
0x821: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x822: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x823: @@ add(Stack[-5])
0x824: Pop(0)
0x825: Push((int) 1)
0x826: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x827: GOTO 0x818

0x828: @@ size(Stack[-3])
0x829: Pop(0)
0x82a: Push(Stack[-3])
0x82b: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x82c: @ irand(Stack[-2], Stack[-3])
0x82d: Pop(0)
0x82e: @@ get(Stack[-1], Stack[-2])
0x82f: Pop(0)
0x830: PushEmpty(object, int, float, cvector, cvector)
0x831: Stack[-5] = Stack[-26]
0x832: Stack[-4] = Stack[-25]
0x833: Stack[-3] = Stack[-24]
0x834: Stack[-2] = Stack[-6]
0x835: Stack[-1] = -Stack[-14]; Pop(0);
0x836: Call2 0x83f

0x837: Pop(5)
0x838: Return(); Pop(18)

0x839: Stack[-8] = 0
0x83a: PushEmpty(object)
0x83b: Stack[-1] = Stack[-22]
0x83c: Call2 0x7cf

0x83d: Pop(1)
0x83e: Return(); Pop(18)

0x83f: PushEmpty(object, object, object, object)
0x840: @ GetScene(Stack[-2])
0x841: Pop(0)
0x842: Push("scripted")
0x843: Push("blood_dir.xml")
0x844: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x845: Pop(2)
0x846: PushEmpty(object)
0x847: Stack[-1] = Stack[-10]
0x848: Call2 0x7cf

0x849: Pop(1)
0x84a: Return(); Pop(4)

0x84b: Stack[-1] = 0
0x84c: Stack[-2] = 0
0x84d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x84e: @@ GetPosition(Stack[-3])
0x84f: Pop(0)
0x850: @ GetPosition(Stack[-2])
0x851: Pop(0)
0x852: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x853: Push(CvectorIndex(Stack[-1], 0))
0x854: Push(CvectorIndex(Stack[-2], 2))
0x855: @ RotateAsync(Stack[-2], Stack[-1])
0x856: Pop(2)
0x857: Return(); Pop(6)

0x858: PushEmpty(bool, bool)
0x859: @ IsLoaded(Stack[-1])
0x85a: Pop(0)
0x85b: Stack[-3] = Stack[-1]
0x85c: Return(); Pop(2)

0x85d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x85e: @@ GetPosition(Stack[-8])
0x85f: Pop(0)
0x860: @@ GetEyesHeight(Stack[-9])
0x861: Pop(0)
0x862: Push(CvectorIndex(Stack[-8], 1))
0x863: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x864: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x865: @ GetPosition(Stack[-7])
0x866: Pop(0)
0x867: @ GetEyesHeight(Stack[-9])
0x868: Pop(0)
0x869: Push(CvectorIndex(Stack[-7], 1))
0x86a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x86b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x86c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x86d: Push(CvectorIndex(Stack[-6], 1))
0x86e: Stack[-1] = (int) 0
0x86f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x870: Pop(0); Push(Stack[-6] | Stack[-6]);
0x871: Pop(1); Push(Sqrt(Stack[-1]))
0x872: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x873: Stack[-5] = -Stack[-6]; Pop(0);
0x874: Pop(0); Push(Stack[-6] * Stack[-19]);
0x875: PushEmpty(cvector, cvector)
0x876: Push(CVector(0.0, 1.0, 0.0))
0x877: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x878: Call2 0x914

0x879: Pop(1)
0x87a: Push((int) 25)
0x87b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x87c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x87d: Push(CVector(0.0, 10.0, 0.0))
0x87e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x87f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x880: @ IsOverrideActive(Stack[-2])
0x881: Pop(0)
0x882: Push(Stack[-2])
0x883: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x884: Stack[-21] = (bool) 0
0x885: Return(); Pop(18)

0x886: @ StopWorld()
0x887: Pop(0)
0x888: Push((bool) 1)
0x889: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x88a: Pop(1)
0x88b: Push(CvectorIndex(Stack[-4], 0))
0x88c: Push(CvectorIndex(Stack[-5], 2))
0x88d: @ Rotate(Stack[-2], Stack[-1])
0x88e: Pop(2)
0x88f: PushEmpty(bool)
0x890: Call2 0xb4d

0x891: Pop(0)
0x892: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x893: GOTO 0x89c

0x894: Push("head")
0x895: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x896: Pop(1)
0x897: Push(Stack[-1])
0x898: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x899: Push("head")
0x89a: @ LookAsyncCamera(Stack[-1])
0x89b: Pop(1)
0x89c: @ CameraWaitForPlayFinish()
0x89d: Pop(0)
0x89e: @ ResumeWorld()
0x89f: Pop(0)
0x8a0: Stack[-21] = (bool) 1
0x8a1: Return(); Pop(18)

0x8a2: PushEmpty(bool, bool)
0x8a3: Push((bool) 1)
0x8a4: @ CameraSwitchToNormal(Stack[-1])
0x8a5: Pop(1)
0x8a6: PushEmpty(bool)
0x8a7: Call2 0xb4d

0x8a8: Pop(0)
0x8a9: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8aa: GOTO 0x8b3

0x8ab: Push("head")
0x8ac: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8ad: Pop(1)
0x8ae: Push(Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b0: Push("head")
0x8b1: @ UnlookAsync(Stack[-1])
0x8b2: Pop(1)
0x8b3: Return(); Pop(2)

0x8b4: PushEmpty(bool, float, float, bool, float, float)
0x8b5: @ lshHasAnimation(Stack[-3], Stack[-7])
0x8b6: Pop(0)
0x8b7: Push(Stack[-3])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8b9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x8ba: Pop(0)
0x8bb: Push((bool) 0)
0x8bc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8bd: Pop(1)
0x8be: GOTO 0x8c3

0x8bf: Push("Can't find lsh animation : ")
0x8c0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8c1: @ Trace(Stack[-1])
0x8c2: Pop(1)
0x8c3: Return(); Pop(6)

0x8c4: PushEmpty(bool, float, float, bool, float, float)
0x8c5: @ lshHasAnimation(Stack[-3], Stack[-8])
0x8c6: Pop(0)
0x8c7: Push(Stack[-3])
0x8c8: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8c9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x8ca: Pop(0)
0x8cb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x8cc: Pop(0)
0x8cd: GOTO 0x8d2

0x8ce: Push("Can't find lsh animation : ")
0x8cf: Pop(1); Push(Stack[-1] + Stack[-9]);
0x8d0: @ Trace(Stack[-1])
0x8d1: Pop(1)
0x8d2: Return(); Pop(6)

0x8d3: PushEmpty(float, cvector, float, cvector)
0x8d4: @@ GetEyesHeight(Stack[-2])
0x8d5: Pop(0)
0x8d6: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x8d7: Push(CvectorIndex(Stack[-1], 1))
0x8d8: Stack[-1] = Stack[-3]
0x8d9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x8da: Push("head")
0x8db: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x8dc: Pop(1)
0x8dd: Return(); Pop(4)

0x8de: PushEmpty(bool)
0x8df: Call2 0xb4d

0x8e0: Pop(0)
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8e2: @ lshStopSpeech()
0x8e3: Pop(0)
0x8e4: Return(); Pop(0)

0x8e5: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x8e6: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x8e7: Pop(0)
0x8e8: Pop(0); Push((bool) Stack[-8] == 0)
0x8e9: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8ea: Stack[-7] = (int) 0
0x8eb: Push((int) 1)
0x8ec: Pop(1); Push(Stack[-8] + Stack[-1]);
0x8ed: Pop(1); Push(Stack[-18] + Stack[-1]);
0x8ee: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x8ef: Pop(1)
0x8f0: Pop(0); Push((bool) Stack[-6] == 0)
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8f2: GOTO 0x8f6

0x8f3: Push((int) 1)
0x8f4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x8f5: GOTO 0x8eb

0x8f6: Pop(0); Push((bool) Stack[-7] == 0)
0x8f7: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f8: Return(); Pop(16)

0x8f9: @ irand(Stack[-5], Stack[-7])
0x8fa: Pop(0)
0x8fb: Push((int) 1)
0x8fc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8fd: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x8fe: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x8ff: Pop(0)
0x900: Push(Stack[-4])
0x901: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x902: @ GetEyesHeight(Stack[-3])
0x903: Pop(0)
0x904: @ GetDirection(Stack[-2])
0x905: Pop(0)
0x906: Push((int) 50)
0x907: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x908: Push(CvectorIndex(Stack[-1], 1))
0x909: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x90a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x90b: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x90c: Pop(0)
0x90d: Return(); Pop(16)

0x90e: PushEmpty(object, object)
0x90f: @ self(Stack[-1])
0x910: Pop(0)
0x911: Stack[-3] = Stack[-1]
0x912: Return(); Pop(2)

0x913: Stack[-1] = 0
0x914: PushEmpty(float, float)
0x915: Pop(0); Push(Stack[-3] | Stack[-3]);
0x916: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x917: Push((float)0.0)
0x918: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x919: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x91a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x91b: Return(); Pop(2)

0x91c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x91d: Return(); Pop(2)

0x91e: PushEmpty()
0x91f: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x920: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x921: Stack[-3] = Stack[-2]
0x922: GOTO 0x924

0x923: Stack[-3] = Stack[-1]
0x924: Return(); Pop(0)

0x925: PushEmpty()
0x926: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x927: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x928: Stack[-4] = Stack[-2]
0x929: Return(); Pop(0)

0x92a: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x92b: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x92c: Stack[-4] = Stack[-1]
0x92d: Return(); Pop(0)

0x92e: Stack[-4] = Stack[-3]
0x92f: Return(); Pop(0)

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
0x958: Call2 0x90e

0x959: Pop(0)
0x95a: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x95b: Pop(2)
0x95c: Return(); Pop(2)

0x95d: Stack[-1] = 0
0x95e: PushEmpty(int, int)
0x95f: Push("branch")
0x960: @ GetVariable(Stack[-1], Stack[-2])
0x961: Pop(1)
0x962: Push((int) 0)
0x963: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x964: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x965: Stack[-3] = (int) 1
0x966: Return(); Pop(2)

0x967: GOTO 0x96d

0x968: Push((int) 1)
0x969: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x96a: IF (Stack[-1] == 0) GOTO 0x96d; Pop(1)

0x96b: Stack[-3] = (int) 2
0x96c: Return(); Pop(2)

0x96d: Stack[-3] = (int) 3
0x96e: Return(); Pop(2)

0x96f: PushEmpty(int, bool, int, bool)
0x970: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x971: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x972: Push("GenerateMoney: iMin > iMax")
0x973: @ Trace(Stack[-1])
0x974: Pop(1)
0x975: Return(); Pop(4)

0x976: Stack[-2] = (int) 0
0x977: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x978: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x979: Pop(0); Push(Stack[-5] - Stack[-6]);
0x97a: @ irand(Stack[-3], Stack[-1])
0x97b: Pop(1)
0x97c: GOTO 0x981

0x97d: Push((int) 0)
0x97e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x97f: IF (Stack[-1] == 0) GOTO 0x981; Pop(1)

0x980: Return(); Pop(4)

0x981: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x982: Push((int) 0)
0x983: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x984: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x985: Return(); Pop(4)

0x986: PushEmpty(int, string)
0x987: Stack[-1] = "Money"
0x988: Call2 0xa3d

0x989: Pop(1)
0x98a: Push((int) 0)
0x98b: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x98c: Pop(2)
0x98d: Return(); Pop(4)

0x98e: PushEmpty(int, bool, int, bool)
0x98f: Push(Stack[-5])
0x990: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x991: PushEmpty(int, int)
0x992: Stack[-2] = (int) 0
0x993: Push((int) 100)
0x994: PushEmpty(int)
0x995: Call2 0x941

0x996: Pop(0)
0x997: Push((int) 100)
0x998: Pop(2); Push(Stack[-2] * Stack[-1]);
0x999: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x99a: Call2 0x96f

0x99b: Pop(2)
0x99c: Push((int) 8)
0x99d: @ irand(Stack[-3], Stack[-1])
0x99e: Pop(1)
0x99f: Push((int) 0)
0x9a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a1: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a2: PushEmpty(int, string)
0x9a3: Stack[-1] = "lemon"
0x9a4: Call2 0xa3d

0x9a5: Pop(1)
0x9a6: Push((int) 0)
0x9a7: Push((int) 1)
0x9a8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9a9: Pop(3)
0x9aa: GOTO 0x9e6

0x9ab: Push((int) 1)
0x9ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ad: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9ae: PushEmpty(int, string)
0x9af: Stack[-1] = "rusk"
0x9b0: Call2 0xa3d

0x9b1: Pop(1)
0x9b2: Push((int) 0)
0x9b3: Push((int) 1)
0x9b4: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9b5: Pop(3)
0x9b6: GOTO 0x9e6

0x9b7: Push((int) 2)
0x9b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b9: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9ba: PushEmpty(int, string)
0x9bb: Stack[-1] = "hook"
0x9bc: Call2 0xa3d

0x9bd: Pop(1)
0x9be: Push((int) 0)
0x9bf: Push((int) 1)
0x9c0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9c1: Pop(3)
0x9c2: GOTO 0x9e6

0x9c3: Push((int) 4)
0x9c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c5: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9c6: PushEmpty(int, string)
0x9c7: Stack[-1] = "syringe"
0x9c8: Call2 0xa3d

0x9c9: Pop(1)
0x9ca: Push((int) 0)
0x9cb: Push((int) 1)
0x9cc: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9cd: Pop(3)
0x9ce: GOTO 0x9e6

0x9cf: Push((int) 5)
0x9d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d1: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9d2: PushEmpty(int, string)
0x9d3: Stack[-1] = "watch"
0x9d4: Call2 0xa3d

0x9d5: Pop(1)
0x9d6: Push((int) 0)
0x9d7: Push((int) 1)
0x9d8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9d9: Pop(3)
0x9da: GOTO 0x9e6

0x9db: Push((int) 6)
0x9dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9dd: IF (Stack[-1] == 0) GOTO 0x9e6; Pop(1)

0x9de: PushEmpty(int, string)
0x9df: Stack[-1] = "razor"
0x9e0: Call2 0xa3d

0x9e1: Pop(1)
0x9e2: Push((int) 0)
0x9e3: Push((int) 1)
0x9e4: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9e5: Pop(3)
0x9e6: GOTO 0xa3c

0x9e7: PushEmpty(int, int)
0x9e8: Stack[-2] = (int) 0
0x9e9: Push((int) 50)
0x9ea: PushEmpty(int)
0x9eb: Call2 0x941

0x9ec: Pop(0)
0x9ed: Push((int) 50)
0x9ee: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9ef: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x9f0: Call2 0x96f

0x9f1: Pop(2)
0x9f2: Push((int) 7)
0x9f3: @ irand(Stack[-3], Stack[-1])
0x9f4: Pop(1)
0x9f5: Push((int) 0)
0x9f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f7: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x9f8: PushEmpty(int, string)
0x9f9: Stack[-1] = "beads"
0x9fa: Call2 0xa3d

0x9fb: Pop(1)
0x9fc: Push((int) 0)
0x9fd: Push((int) 1)
0x9fe: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9ff: Pop(3)
0xa00: GOTO 0xa3c

0xa01: Push((int) 1)
0xa02: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa03: IF (Stack[-1] == 0) GOTO 0xa0d; Pop(1)

0xa04: PushEmpty(int, string)
0xa05: Stack[-1] = "bracelet"
0xa06: Call2 0xa3d

0xa07: Pop(1)
0xa08: Push((int) 0)
0xa09: Push((int) 1)
0xa0a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa0b: Pop(3)
0xa0c: GOTO 0xa3c

0xa0d: Push((int) 2)
0xa0e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0f: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa10: PushEmpty(int, string)
0xa11: Stack[-1] = "ear_ring"
0xa12: Call2 0xa3d

0xa13: Pop(1)
0xa14: Push((int) 0)
0xa15: Push((int) 1)
0xa16: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa17: Pop(3)
0xa18: GOTO 0xa3c

0xa19: Push((int) 3)
0xa1a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa1b: IF (Stack[-1] == 0) GOTO 0xa25; Pop(1)

0xa1c: PushEmpty(int, string)
0xa1d: Stack[-1] = "gold_ring"
0xa1e: Call2 0xa3d

0xa1f: Pop(1)
0xa20: Push((int) 0)
0xa21: Push((int) 1)
0xa22: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa23: Pop(3)
0xa24: GOTO 0xa3c

0xa25: Push((int) 4)
0xa26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa27: IF (Stack[-1] == 0) GOTO 0xa31; Pop(1)

0xa28: PushEmpty(int, string)
0xa29: Stack[-1] = "silver_ring"
0xa2a: Call2 0xa3d

0xa2b: Pop(1)
0xa2c: Push((int) 0)
0xa2d: Push((int) 1)
0xa2e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa2f: Pop(3)
0xa30: GOTO 0xa3c

0xa31: Push((int) 5)
0xa32: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa33: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa34: PushEmpty(int, string)
0xa35: Stack[-1] = "flower"
0xa36: Call2 0xa3d

0xa37: Pop(1)
0xa38: Push((int) 0)
0xa39: Push((int) 1)
0xa3a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa3b: Pop(3)
0xa3c: Return(); Pop(4)

0xa3d: PushEmpty(int, int)
0xa3e: @ GetInvItemByName(Stack[-1], Stack[-3])
0xa3f: Pop(0)
0xa40: Stack[-4] = Stack[-1]
0xa41: Return(); Pop(2)

0xa42: PushEmpty()
0xa43: PushEmpty(object)
0xa44: Stack[-1] = Stack[-2]
0xa45: Push(-1, 0); TaskCall(2)
0xa46: Call2 0xc4

0xa47: Pop(-1, 0); TaskReturn
0xa48: Pop(1)
0xa49: Return(); Pop(0)

0xa4a: PushEmpty(float, float)
0xa4b: Push("health")
0xa4c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa4d: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa4e: Push("health")
0xa4f: @ GetProperty(Stack[-1], Stack[-2])
0xa50: Pop(1)
0xa51: Push((int) 0)
0xa52: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xa53: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa54: @ SignalDeath(Stack[-4])
0xa55: Pop(0)
0xa56: Return(); Pop(2)

0xa57: PushEmpty()
0xa58: PushEmpty(object)
0xa59: Stack[-1] = Stack[-2]
0xa5a: Call2 0xa42

0xa5b: Pop(1)
0xa5c: Return(); Pop(0)

0xa5d: PushEmpty()
0xa5e: PushEmpty(object, int, float)
0xa5f: Stack[-3] = Stack[-7]
0xa60: Stack[-2] = Stack[-6]
0xa61: Stack[-1] = Stack[-5]
0xa62: Call2 0x7fb

0xa63: Pop(3)
0xa64: Return(); Pop(0)

0xa65: PushEmpty()
0xa66: PushEmpty(object, int, float, cvector, cvector)
0xa67: Stack[-5] = Stack[-11]
0xa68: Stack[-4] = Stack[-10]
0xa69: Stack[-3] = Stack[-9]
0xa6a: Stack[-2] = Stack[-7]
0xa6b: Stack[-1] = Stack[-6]
0xa6c: Call2 0x83f

0xa6d: Pop(5)
0xa6e: Return(); Pop(0)

0xa6f: PushEmpty()
0xa70: Push("unholster")
0xa71: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa72: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa73: PushEmpty(bool, object)
0xa74: Stack[-1] = Stack[-4]
0xa75: Call2 0xb31

0xa76: Stack[-5] = Stack[-2]
0xa77: Pop(2)
0xa78: Return(); Pop(0)

0xa79: GOTO 0xa8d

0xa7a: Push("player_shot")
0xa7b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7c: IF (Stack[-1] == 0) GOTO 0xa84; Pop(1)

0xa7d: PushEmpty(bool, object)
0xa7e: Stack[-1] = Stack[-4]
0xa7f: Call2 0xb36

0xa80: Stack[-5] = Stack[-2]
0xa81: Pop(2)
0xa82: Return(); Pop(0)

0xa83: GOTO 0xa8d

0xa84: Push("battle")
0xa85: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa86: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa87: PushEmpty(bool, object)
0xa88: Stack[-1] = Stack[-4]
0xa89: Call2 0xb3b

0xa8a: Stack[-5] = Stack[-2]
0xa8b: Pop(2)
0xa8c: Return(); Pop(0)

0xa8d: Stack[-3] = (bool) 0
0xa8e: Return(); Pop(0)

0xa8f: PushEmpty()
0xa90: Push("unholster")
0xa91: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa92: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa93: PushEmpty(object)
0xa94: Stack[-1] = Stack[-3]
0xa95: Call2 0xb34

0xa96: Pop(1)
0xa97: GOTO 0xaa7

0xa98: Push("player_shot")
0xa99: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa9a: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa9b: PushEmpty(object)
0xa9c: Stack[-1] = Stack[-3]
0xa9d: Call2 0xb39

0xa9e: Pop(1)
0xa9f: GOTO 0xaa7

0xaa0: Push("battle")
0xaa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa2: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xaa3: PushEmpty(object)
0xaa4: Stack[-1] = Stack[-3]
0xaa5: Call2 0xb3e

0xaa6: Pop(1)
0xaa7: Return(); Pop(0)

0xaa8: PushEmpty(bool, bool)
0xaa9: PushEmpty(bool)
0xaaa: Stack[-1] = (bool) 0
0xaab: PushEmpty(bool, object)
0xaac: Stack[-1] = Stack[-6]
0xaad: Call2 0xb31

0xaae: Pop(1)
0xaaf: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xab0: PushEmpty(bool, object)
0xab1: Stack[-1] = Stack[-6]
0xab2: Call2 0x734

0xab3: Pop(1)
0xab4: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xab5: Stack[-1] = (bool) 1
0xab6: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xab7: @@ IsWeaponHolstered(Stack[-1])
0xab8: Pop(0)
0xab9: Pop(0); Push((bool) Stack[-1] == 0)
0xaba: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xabb: Stack[-4] = (bool) 1
0xabc: Return(); Pop(2)

0xabd: Stack[-4] = (bool) 0
0xabe: Return(); Pop(2)

0xabf: PushEmpty()
0xac0: PushEmpty(object)
0xac1: Stack[-1] = Stack[-2]
0xac2: Call2 0xb34

0xac3: Pop(1)
0xac4: Return(); Pop(0)

0xac5: PushEmpty()
0xac6: PushEmpty(bool, object)
0xac7: Stack[-1] = Stack[-3]
0xac8: Call2 0x734

0xac9: Pop(1)
0xaca: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xacb: PushEmpty(object)
0xacc: Call2 0x90e

0xacd: Pop(0)
0xace: Push((float)-0.03)
0xacf: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xad0: Pop(2)
0xad1: Return(); Pop(0)

0xad2: PushEmpty(object, object)
0xad3: Push("heal")
0xad4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xad5: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xad6: Push("player")
0xad7: @ FindActor(Stack[-2], Stack[-1])
0xad8: Pop(1)
0xad9: PushEmpty(bool, object)
0xada: Stack[-1] = Stack[-3]
0xadb: Call2 0xb40

0xadc: Stack[-6] = Stack[-2]
0xadd: Pop(2)
0xade: Return(); Pop(2)

0xadf: Stack[-1] = 0
0xae0: Stack[-4] = (bool) 0
0xae1: Return(); Pop(2)

0xae2: PushEmpty(object, object)
0xae3: Push("heal")
0xae4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xae5: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xae6: Push("player")
0xae7: @ FindActor(Stack[-2], Stack[-1])
0xae8: Pop(1)
0xae9: PushEmpty(object)
0xaea: Stack[-1] = Stack[-2]
0xaeb: Call2 0xb43

0xaec: Pop(1)
0xaed: Stack[-1] = 0
0xaee: Return(); Pop(2)

0xaef: PushEmpty(string, string)
0xaf0: Stack[-1] = "idle"
0xaf1: Push(Stack[-3])
0xaf2: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xaf3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xaf4: Stack[-4] = Stack[-1]
0xaf5: Return(); Pop(2)

0xaf6: PushEmpty(int, bool, int, bool)
0xaf7: Stack[-2] = (int) 0
0xaf8: Push("all")
0xaf9: PushEmpty(string, int)
0xafa: Stack[-1] = Stack[-5]
0xafb: Call2 0xaef

0xafc: Pop(1)
0xafd: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xafe: Pop(2)
0xaff: Pop(0); Push((bool) Stack[-1] == 0)
0xb00: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xb01: GOTO 0xb05

0xb02: Push((int) 1)
0xb03: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb04: GOTO 0xaf8

0xb05: Stack[-5] = Stack[-2]
0xb06: Return(); Pop(4)

0xb07: PushEmpty()
0xb08: PushEmpty(bool, object)
0xb09: Stack[-1] = Stack[-3]
0xb0a: Call2 0x7b7

0xb0b: Pop(1)
0xb0c: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0d: Stack[-2] = (int) 2
0xb0e: GOTO 0xb10

0xb0f: Stack[-2] = (int) 0
0xb10: Return(); Pop(0)

0xb11: PushEmpty()
0xb12: PushEmpty(object)
0xb13: Stack[-1] = Stack[-2]
0xb14: Push(-1, 6); TaskCall(5)
0xb15: Call2 0x374

0xb16: Pop(-1, 6); TaskReturn
0xb17: Pop(1)
0xb18: Return(); Pop(0)

0xb19: PushEmpty()
0xb1a: Stack[-3] = (int) 0
0xb1b: Return(); Pop(0)

0xb1c: PushEmpty()
0xb1d: Return(); Pop(0)

0xb1e: PushEmpty()
0xb1f: Stack[-2] = (int) 0
0xb20: Return(); Pop(0)

0xb21: PushEmpty()
0xb22: Return(); Pop(0)

0xb23: PushEmpty()
0xb24: Stack[-3] = (int) 0
0xb25: Return(); Pop(0)

0xb26: PushEmpty()
0xb27: Return(); Pop(0)

0xb28: PushEmpty()
0xb29: Stack[-2] = (int) 2
0xb2a: Return(); Pop(0)

0xb2b: PushEmpty()
0xb2c: PushEmpty(object)
0xb2d: Stack[-1] = Stack[-2]
0xb2e: Call2 0xb54

0xb2f: Pop(1)
0xb30: Return(); Pop(0)

0xb31: PushEmpty()
0xb32: Stack[-2] = (bool) 0
0xb33: Return(); Pop(0)

0xb34: PushEmpty()
0xb35: Return(); Pop(0)

0xb36: PushEmpty()
0xb37: Stack[-2] = (bool) 0
0xb38: Return(); Pop(0)

0xb39: PushEmpty()
0xb3a: Return(); Pop(0)

0xb3b: PushEmpty()
0xb3c: Stack[-2] = (bool) 0
0xb3d: Return(); Pop(0)

0xb3e: PushEmpty()
0xb3f: Return(); Pop(0)

0xb40: PushEmpty()
0xb41: Stack[-2] = (bool) 0
0xb42: Return(); Pop(0)

0xb43: PushEmpty()
0xb44: Return(); Pop(0)

0xb45: Stack[-1] = (int) 515568
0xb46: Return(); Pop(0)

0xb47: Stack[-1] = (int) 503353
0xb48: Return(); Pop(0)

0xb49: Stack[-1] = "ui/NPC_Citizen1.png"
0xb4a: Return(); Pop(0)

0xb4b: Stack[-1] = "ui/NPC_Citizen1_b.png"
0xb4c: Return(); Pop(0)

0xb4d: Stack[-1] = (bool) 0
0xb4e: Return(); Pop(0)

0xb4f: PushEmpty(bool)
0xb50: Stack[-1] = (bool) 1
0xb51: Call2 0x98e

0xb52: Pop(1)
0xb53: Return(); Pop(0)

0xb54: PushEmpty()
0xb55: PushEmpty(int, object)
0xb56: Stack[-1] = Stack[-3]
0xb57: Push(-2, 1); TaskCall(0)
0xb58: Call2 0x0

0xb59: Pop(-2, 1); TaskReturn
0xb5a: Pop(2)
0xb5b: Return(); Pop(0)

0xb5c: PushEmpty()
0xb5d: Stack[-4] = (bool) 0
0xb5e: Return(); Pop(0)

0xb5f: PushEmpty(object)
0xb60: Call2 0x90e

0xb61: Pop(0)
0xb62: @ RemoveActor(Stack[-1])
0xb63: Pop(1)
0xb64: @ Hold()
0xb65: Pop(0)
0xb66: Return(); Pop(0)

0xb67: PushEmpty()
0xb68: Return(); Pop(0)

