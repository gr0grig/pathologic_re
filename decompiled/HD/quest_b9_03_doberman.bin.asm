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
	quest_b9_03
	doberman_attack
	cleanup
	player
	head
	@GetAttackDistance
	GetAttackDistance
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
	GetPosition
	walk
	run
	samopal_ammo
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
	b9q03DobermanGotoFollower
	pt_b9q03_follower
	AddMark
	ShowMap
	oob9DobermanSpi4ka1_1
	place_follower
	init_bonefires
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	branch
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	doberman_dead

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
	SensePlayerOnly (1 args)
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	Sleep (1 args)
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
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
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
	AddItem (4 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetVariable (2 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x13c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x145 Vars = (object)
		EVENT_17 Op = 0x14e Vars = (object)
		EVENT_26 Op = 0x15a Vars = (string)
		EVENT_6 Op = 0x19a Vars = ()
		EVENT_7 Op = 0x1db Vars = (int)
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 0
		EVENT_6 Op = 0x268 Vars = ()
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x504 Vars = ()
		EVENT_7 Op = 0x53b Vars = (int)
		EVENT_1 Op = 0x556 Vars = (object)
		EVENT_2 Op = 0x565 Vars = (object)
		EVENT_10 Op = 0x5eb Vars = (object)
		EVENT_41 Op = 0x5f6 Vars = (object)
	GTASK_5  Params = 1
		EVENT_6 Op = 0x61a Vars = ()
		EVENT_0 Op = 0x62f Vars = (object)
		EVENT_22 Op = 0x6ae Vars = (object, int, float, float)
		EVENT_16 Op = 0x6b0 Vars = (object, string)
		EVENT_41 Op = 0x6b2 Vars = (object)

Events:
EVENT_22 Op = 0xa63 Vars = (object, int, float, float)
EVENT_43 Op = 0xa6b Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xa75 Vars = (object, string)
EVENT_41 Op = 0xa82 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x7fa

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xa4e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xa4c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xa50

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xa52

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xa1d

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
0x41: Call2 0x83f

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x973

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x942

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0x9d

0x5d: Pop(1)
0x5e: Push((int) 530309)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 530310)
0x64: Push((int) 31698)
0x65: Push((int) 31697)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 531024)
0x69: Push((int) 31698)
0x6a: Push((int) 32353)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x7f

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0x9d

0x71: Pop(1)
0x72: Push((int) 530314)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 530315)
0x78: Push((int) -1)
0x79: Push((int) 31702)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0xa54

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x851

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all")
0x8f: Push("idle")
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0xa54

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = Stack[-3]
0xa9: Push("")
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x861

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x87b

0xb8: Pop(0)
0xb9: Push((int) 31699)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x948

0xc0: Pop(2)
0xc1: Push((int) 31700)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x91c

0xc8: Pop(2)
0xc9: Push((int) 32356)
0xca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x91c

0xd0: Pop(2)
0xd1: Push((int) 31696)
0xd2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xd4: PushEmpty(bool, object)
0xd5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Call2 0x973

0xd7: Pop(1)
0xd8: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call2 0x942

0xdd: Pop(2)
0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral"
0xe0: Call2 0x9d

0xe1: Pop(1)
0xe2: Push((int) 530309)
0xe3: @@ SetMessage(Stack[-1])
0xe4: Pop(1)
0xe5: @@ ClearReplies()
0xe6: Pop(0)
0xe7: Push((int) 530310)
0xe8: Push((int) 31698)
0xe9: Push((int) 31697)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Push((int) 531024)
0xed: Push((int) 31698)
0xee: Push((int) 32353)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral"
0xf4: Call2 0x9d

0xf5: Pop(1)
0xf6: Push((int) 530314)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 530315)
0xfc: Push((int) -1)
0xfd: Push((int) 31702)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 31698)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral"
0x106: Call2 0x9d

0x107: Pop(1)
0x108: Push((int) 530311)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 531025)
0x10e: Push((int) 32355)
0x10f: Push((int) 32354)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 531027)
0x113: Push((int) -1)
0x114: Push((int) 32356)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 32355)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call2 0x9d

0x11e: Pop(1)
0x11f: Push((int) 531026)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 530312)
0x125: Push((int) -1)
0x126: Push((int) 31699)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Push((int) 530313)
0x12a: Push((int) -1)
0x12b: Push((int) 31700)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x130: PushEmpty(bool)
0x131: Call2 0xa54

0x132: Pop(0)
0x133: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x134: @ lshStopAnimation()
0x135: Pop(0)
0x136: GOTO 0x139

0x137: @ StopAnimation()
0x138: Pop(0)
0x139: Return(); Pop(0)

0x13a: GOTO 0xb4

0x13b: Return(); Pop(0)

0x13c: Push((bool) 1)
0x13d: @ SensePlayerOnly(Stack[-1])
0x13e: Pop(1)
0x13f: PushEmpty(float, float)
0x140: Stack[-2] = (int) 300
0x141: Stack[-1] = (int) 100
0x142: Call2 0x16c

0x143: Pop(2)
0x144: Return(); Pop(0)

0x145: PushEmpty()
0x146: PushEmpty()
0x147: Call2 0x1f2

0x148: Pop(0)
0x149: PushEmpty(object)
0x14a: Stack[-1] = Stack[-2]
0x14b: Call2 0xa88

0x14c: Pop(1)
0x14d: Return(); Pop(0)

0x14e: PushEmpty()
0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[-3]
0x151: Call2 0x6d1

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: PushEmpty(bool, string, string)
0x155: Stack[-2] = "quest_b9_03"
0x156: Stack[-1] = "doberman_attack"
0x157: Call2 0x8f7

0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: PushEmpty()
0x15b: Push("attack")
0x15c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x15e: PushEmpty()
0x15f: Call2 0x1f2

0x160: Pop(0)
0x161: PushEmpty()
0x162: Push(-0, 6); TaskCall(3)
0x163: Call2 0x256

0x164: Pop(-0, 6); TaskReturn
0x165: Pop(0)
0x166: GOTO 0x16b

0x167: PushEmpty(string)
0x168: Stack[-1] = Stack[-2]
0x169: Call2 0x192

0x16a: Pop(1)
0x16b: Return(); Pop(0)

0x16c: PushEmpty(float, bool, float, bool)
0x16d: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x16e: Push((int) 3)
0x16f: @ rand(Stack[-3], Stack[-1])
0x170: Pop(1)
0x171: Push((int) 3)
0x172: Pop(1); Push(Stack[-3] + Stack[-1]);
0x173: @ Sleep(Stack[-1], Stack[-2])
0x174: Pop(1)
0x175: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x176: PushEmpty(float, float)
0x177: Stack[-2] = Stack[-8]
0x178: Stack[-1] = Stack[-7]
0x179: Call2 0x1b1

0x17a: Pop(2)
0x17b: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x17c: GOTO 0x16e

0x17d: Return(); Pop(4)

0x17e: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x17f: PushEmpty(bool)
0x180: Stack[-1] = (bool) 0
0x181: PushEmpty(bool)
0x182: Call2 0x7f5

0x183: Pop(0)
0x184: Pop(1); Push((bool) Stack[-1] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: PushEmpty(bool)
0x187: Call2 0x1af

0x188: Pop(0)
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: Stack[-1] = (bool) 1
0x18b: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18c: PushEmpty(object)
0x18d: Call2 0x8ba

0x18e: Pop(0)
0x18f: @ RemoveActor(Stack[-1])
0x190: Pop(1)
0x191: Return(); Pop(0)

0x192: PushEmpty()
0x193: Push("cleanup")
0x194: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x196: PushEmpty()
0x197: Call2 0x17e

0x198: Pop(0)
0x199: Return(); Pop(0)

0x19a: Push( Stack[6 + Tasks[-1].StackPointer] )
0x19b: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19c: PushEmpty()
0x19d: Call2 0x1f2

0x19e: Pop(0)
0x19f: PushEmpty(bool)
0x1a0: Stack[-1] = (bool) 0
0x1a1: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: PushEmpty(bool)
0x1a4: Call2 0x1af

0x1a5: Pop(0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Stack[-1] = (bool) 1
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1a9: PushEmpty(object)
0x1aa: Call2 0x8ba

0x1ab: Pop(0)
0x1ac: @ RemoveActor(Stack[-1])
0x1ad: Pop(1)
0x1ae: Return(); Pop(0)

0x1af: Stack[-1] = (bool) 1
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: PushEmpty(bool)
0x1b3: Call2 0x7f5

0x1b4: Pop(0)
0x1b5: Pop(1); Push((bool) Stack[-1] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: Return(); Pop(0)

0x1b8: Push("player")
0x1b9: @ FindActor(Stack[-4], Stack[-1])
0x1ba: Pop(1)
0x1bb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1bc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1bd: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1be: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1bf: Push((int) 10)
0x1c0: Push((float)1.0)
0x1c1: @ SetTimer(Stack[-2], Stack[-1])
0x1c2: Pop(2)
0x1c3: PushEmpty()
0x1c4: Call2 0x200

0x1c5: Pop(0)
0x1c6: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c8: Push((int) 10)
0x1c9: @ KillTimer(Stack[-1])
0x1ca: Pop(1)
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty(float, float)
0x1cd: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cf: Stack[-3] = (bool) 0
0x1d0: Return(); Pop(2)

0x1d1: PushEmpty(float, object)
0x1d2: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1d3: Call2 0x6c9

0x1d4: Pop(1)
0x1d5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1d6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1d9: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1da: Return(); Pop(2)

0x1db: PushEmpty()
0x1dc: Push((int) 10)
0x1dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1df: PushEmpty(bool)
0x1e0: Call2 0x1cc

0x1e1: Pop(0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e3: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e5: PushEmpty(object)
0x1e6: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e7: Call2 0x870

0x1e8: Pop(1)
0x1e9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1ea: GOTO 0x1f1

0x1eb: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ed: Push("head")
0x1ee: @ UnlookAsync(Stack[-1])
0x1ef: Pop(1)
0x1f0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f1: Return(); Pop(0)

0x1f2: PushEmpty()
0x1f3: Call2 0x251

0x1f4: Pop(0)
0x1f5: Push((int) 10)
0x1f6: @ KillTimer(Stack[-1])
0x1f7: Pop(1)
0x1f8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fa: Push("head")
0x1fb: @ UnlookAsync(Stack[-1])
0x1fc: Pop(1)
0x1fd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1fe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ff: Return(); Pop(0)

0x200: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x201: @ WaitForAnimEnd()
0x202: Pop(0)
0x203: PushEmpty(bool)
0x204: Call2 0x7f5

0x205: Pop(0)
0x206: Pop(1); Push((bool) Stack[-1] == 0)
0x207: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x208: Return(); Pop(14)

0x209: PushEmpty(int)
0x20a: Call2 0xa3b

0x20b: Stack[-8] = Stack[-1]
0x20c: Pop(1)
0x20d: Stack[-6] = (int) 0
0x20e: PushEmpty(bool)
0x20f: Stack[-1] = (bool) 0
0x210: Push((int) 5)
0x211: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x213: PushEmpty(bool)
0x214: Call2 0x7f5

0x215: Pop(0)
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: Stack[-1] = (bool) 1
0x218: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x219: Push((int) 3)
0x21a: @ irand(Stack[-6], Stack[-1])
0x21b: Pop(1)
0x21c: Push((int) 0)
0x21d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x21f: Push(Stack[-7])
0x220: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x221: @ irand(Stack[-4], Stack[-7])
0x222: Pop(0)
0x223: Push("all")
0x224: PushEmpty(string, int)
0x225: Stack[-1] = Stack[-7]
0x226: Call2 0xa34

0x227: Pop(1)
0x228: @ PlayAnimation(Stack[-2], Stack[-1])
0x229: Pop(2)
0x22a: @ WaitForAnimEnd(Stack[-3])
0x22b: Pop(0)
0x22c: Pop(0); Push((bool) Stack[-3] == 0)
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: GOTO 0x24c

0x22f: GOTO 0x241

0x230: Push((int) 1)
0x231: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x233: Push((int) 4)
0x234: @ rand(Stack[-3], Stack[-1])
0x235: Pop(1)
0x236: Push((int) 1)
0x237: Pop(1); Push(Stack[-3] + Stack[-1]);
0x238: @ Sleep(Stack[-1], Stack[-2])
0x239: Pop(1)
0x23a: Pop(0); Push((bool) Stack[-1] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: GOTO 0x24c

0x23d: GOTO 0x241

0x23e: Push(Stack[-6])
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: GOTO 0x24c

0x241: PushEmpty(bool)
0x242: Call2 0x24f

0x243: Pop(0)
0x244: Pop(1); Push((bool) Stack[-1] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: GOTO 0x24c

0x247: @ ResetAAS()
0x248: Pop(0)
0x249: Push((int) 1)
0x24a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x24b: GOTO 0x20e

0x24c: @ ResetAAS()
0x24d: Pop(0)
0x24e: Return(); Pop(14)

0x24f: Stack[-1] = (bool) 1
0x250: Return(); Pop(0)

0x251: @ StopAnimation()
0x252: Pop(0)
0x253: @ StopGroup0()
0x254: Pop(0)
0x255: Return(); Pop(0)

0x256: PushEmpty(object, object)
0x257: Push("player")
0x258: @ FindActor(Stack[-2], Stack[-1])
0x259: Pop(1)
0x25a: PushEmpty(object, bool, float)
0x25b: Stack[-3] = Stack[-4]
0x25c: Stack[-2] = (bool) 1
0x25d: Stack[-1] = (float) 180.0
0x25e: Call2 0x26e

0x25f: Pop(3)
0x260: Return(); Pop(2)

0x261: Stack[-1] = 0
0x262: PushEmpty()
0x263: Stack[-3] = (float) 0.1
0x264: Return(); Pop(0)

0x265: PushEmpty()
0x266: Stack[-3] = (int) 0
0x267: Return(); Pop(0)

0x268: PushEmpty(object)
0x269: Call2 0x8ba

0x26a: Pop(0)
0x26b: @ RemoveActor(Stack[-1])
0x26c: Pop(1)
0x26d: Return(); Pop(0)

0x26e: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x26f: PushEmpty()
0x270: Call2 0x353

0x271: Pop(0)
0x272: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x273: Push("@GetAttackDistance")
0x274: Push((int) 1)
0x275: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x276: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x277: @@ GetAttackDistance(Stack[-11])
0x278: Pop(0)
0x279: Push((int) 50)
0x27a: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x27b: GOTO 0x27d

0x27c: Stack[-11] = Stack[-23]
0x27d: Push((int) 150)
0x27e: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: Stack[-11] = (int) 150
0x281: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x282: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x283: @ IsPlayerActor(Stack[-0], Stack[-8])
0x284: Pop(0)
0x285: Push(Stack[-8])
0x286: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x287: Push("attack")
0x288: @ PlayGlobalMusic(Stack[-1])
0x289: Pop(1)
0x28a: PushEmpty(object)
0x28b: Call2 0x8ba

0x28c: Pop(0)
0x28d: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x28e: Pop(1)
0x28f: Push(Stack[-24])
0x290: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x291: Stack[-7] = (bool) 0
0x292: GOTO 0x294

0x293: Stack[-7] = (bool) 1
0x294: Push((float)400.0)
0x295: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x296: PushEmpty(bool)
0x297: Stack[-1] = (bool) 0
0x298: PushEmpty(bool, object)
0x299: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29a: Call2 0x754

0x29b: Pop(1)
0x29c: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29d: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: Stack[-1] = (bool) 1
0x2a0: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x2a1: PushEmpty()
0x2a2: Call2 0x4f0

0x2a3: Pop(0)
0x2a4: @@ GetPFPosition(Stack[-10])
0x2a5: Pop(0)
0x2a6: @ GetPFPosition(Stack[-9])
0x2a7: Pop(0)
0x2a8: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2a9: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2aa: Pop(0); Push(Stack[-6] * Stack[-6]);
0x2ab: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ad: PushEmpty(bool, object, float, float, bool, bool)
0x2ae: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2af: Stack[-4] = Stack[-17]
0x2b0: Stack[-3] = (float) 3000.0
0x2b1: Stack[-2] = (bool) 1
0x2b2: Stack[-1] = (bool) 0
0x2b3: Push(-6, 3); TaskCall(4)
0x2b4: Call2 0x50a

0x2b5: Pop(-6, 3); TaskReturn
0x2b6: Pop(5)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: GOTO 0x342

0x2ba: Stack[-7] = (bool) 0
0x2bb: GOTO 0x341

0x2bc: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2bd: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x2bf: @@ GetPFPosition(Stack[-3])
0x2c0: Pop(0)
0x2c1: @ CanReachByPF(Stack[-2], Stack[-3])
0x2c2: Pop(0)
0x2c3: Pop(0); Push((bool) Stack[-2] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2c5: PushEmpty(bool, object, float, float, bool, bool)
0x2c6: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2c7: Stack[-4] = Stack[-17]
0x2c8: Stack[-3] = (float) 3000.0
0x2c9: Stack[-2] = (bool) 1
0x2ca: Stack[-1] = (bool) 0
0x2cb: Push(-6, 3); TaskCall(4)
0x2cc: Call2 0x50a

0x2cd: Pop(-6, 3); TaskReturn
0x2ce: Pop(5)
0x2cf: Pop(1); Push((bool) Stack[-1] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: GOTO 0x342

0x2d2: Stack[-7] = (bool) 0
0x2d3: GOTO 0x296

0x2d4: Pop(0); Push((bool) Stack[-7] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2d6: PushEmpty(object)
0x2d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d8: Call2 0x7ea

0x2d9: Pop(1)
0x2da: Push("all")
0x2db: Push("attack_on")
0x2dc: @ PlayAnimation(Stack[-2], Stack[-1])
0x2dd: Pop(2)
0x2de: @ WaitForAnimEnd()
0x2df: Pop(0)
0x2e0: PushEmpty()
0x2e1: Call2 0x4f0

0x2e2: Pop(0)
0x2e3: @ StopAsync()
0x2e4: Pop(0)
0x2e5: Stack[-7] = (bool) 1
0x2e6: PushEmpty(bool, object)
0x2e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e8: Call2 0x754

0x2e9: Pop(1)
0x2ea: Pop(1); Push((bool) Stack[-1] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x342

0x2ed: @ rand(Stack[-1])
0x2ee: Pop(0)
0x2ef: PushEmpty(bool)
0x2f0: Stack[-1] = (bool) 1
0x2f1: Push((float)0.25)
0x2f2: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f4: PushEmpty(bool)
0x2f5: Call2 0x4c5

0x2f6: Pop(0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: Stack[-1] = (bool) 0
0x2f9: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2fa: @ Face(Stack[-0])
0x2fb: Pop(0)
0x2fc: PushEmpty()
0x2fd: Call2 0x4f7

0x2fe: Pop(0)
0x2ff: Push("all")
0x300: Push("attack_stay")
0x301: @ PlayAnimation(Stack[-2], Stack[-1])
0x302: Pop(2)
0x303: PushEmpty(bool, float)
0x304: Stack[-1] = Stack[-25]
0x305: Call2 0x441

0x306: Pop(2)
0x307: @ StopAsync()
0x308: Pop(0)
0x309: GOTO 0x338

0x30a: @ Face(Stack[-0])
0x30b: Pop(0)
0x30c: Push("all")
0x30d: Push("fjump")
0x30e: @ PlayAnimation(Stack[-2], Stack[-1])
0x30f: Pop(2)
0x310: @ WaitForAnimEnd()
0x311: Pop(0)
0x312: PushEmpty()
0x313: Call2 0x4f0

0x314: Pop(0)
0x315: Push(CVector(0.0, 0.0, 0.0))
0x316: @ SetSpeed(Stack[-1])
0x317: Pop(1)
0x318: @ Stop()
0x319: Pop(0)
0x31a: @ StopAsync()
0x31b: Pop(0)
0x31c: PushEmpty(bool)
0x31d: Call2 0x4c5

0x31e: Pop(0)
0x31f: Pop(1); Push((bool) Stack[-1] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x321: PushEmpty(bool, object)
0x322: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x323: Call2 0x754

0x324: Pop(1)
0x325: Pop(1); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: GOTO 0x342

0x328: @@ GetPFPosition(Stack[-10])
0x329: Pop(0)
0x32a: @ GetPFPosition(Stack[-9])
0x32b: Pop(0)
0x32c: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x32d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x32e: Pop(0); Push(Stack[-23] * Stack[-23]);
0x32f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x331: PushEmpty(bool, float)
0x332: Stack[-1] = Stack[-25]
0x333: Call2 0x39d

0x334: Pop(1)
0x335: Pop(1); Push((bool) Stack[-1] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: GOTO 0x342

0x338: GOTO 0x341

0x339: PushEmpty(bool, float)
0x33a: Stack[-1] = Stack[-25]
0x33b: Call2 0x39d

0x33c: Pop(1)
0x33d: Pop(1); Push((bool) Stack[-1] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: GOTO 0x342

0x340: Stack[-7] = (bool) 1
0x341: GOTO 0x296

0x342: @ WaitForAnimEnd()
0x343: Pop(0)
0x344: Push( Stack[3 + Tasks[-1].StackPointer] )
0x345: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x346: Return(); Pop(22)

0x347: Push("all")
0x348: Push("attack_off")
0x349: @ PlayAnimation(Stack[-2], Stack[-1])
0x34a: Pop(2)
0x34b: @ WaitForAnimEnd()
0x34c: Pop(0)
0x34d: Push(Stack[-8])
0x34e: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34f: Push((float)2.0)
0x350: @ Sleep(Stack[-1])
0x351: Pop(1)
0x352: Return(); Pop(22)

0x353: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x354: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x355: Push("all")
0x356: Push("attack_begin")
0x357: Push((int) 1)
0x358: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x359: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35a: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x35b: Pop(2)
0x35c: Pop(0); Push((bool) Stack[-3] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35e: GOTO 0x362

0x35f: Push((int) 1)
0x360: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x361: GOTO 0x355

0x362: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x363: Push("attack")
0x364: Push((int) 1)
0x365: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x366: Pop(2); Push(Stack[-2] + Stack[-1]);
0x367: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x368: Pop(1)
0x369: Pop(0); Push((bool) Stack[-2] == 0)
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: GOTO 0x36f

0x36c: Push((int) 1)
0x36d: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x36e: GOTO 0x363

0x36f: Push("all")
0x370: Push("bjump")
0x371: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x372: Pop(2)
0x373: Push(CvectorIndex(Stack[-1], 2))
0x374: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x375: Return(); Pop(6)

0x376: PushEmpty(object, float, float, object, float, float)
0x377: Push((float)0.9)
0x378: Pop(1); Push(Stack[-9] * Stack[-1]);
0x379: @ GetVictim(Stack[-1], Stack[-4])
0x37a: Pop(1)
0x37b: @ ReportAttack(Stack[-0])
0x37c: Pop(0)
0x37d: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x37e: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x37f: PushEmpty(float, object, int)
0x380: Stack[-2] = Stack[-6]
0x381: Stack[-1] = Stack[-10]
0x382: Call2 0x262

0x383: Stack[-5] = Stack[-3]
0x384: Pop(3)
0x385: PushEmpty(float, object, float, int)
0x386: Stack[-3] = Stack[-7]
0x387: Stack[-2] = Stack[-6]
0x388: PushEmpty(int, object, int)
0x389: Stack[-2] = Stack[-10]
0x38a: Stack[-1] = Stack[-14]
0x38b: Call2 0x265

0x38c: Stack[-4] = Stack[-3]
0x38d: Pop(3)
0x38e: Call2 0x6e2

0x38f: Stack[-5] = Stack[-4]
0x390: Pop(4)
0x391: PushEmpty(int)
0x392: Call2 0x4f5

0x393: Pop(0)
0x394: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x395: Pop(1)
0x396: PushEmpty(object, float)
0x397: Stack[-2] = Stack[-5]
0x398: Stack[-1] = Stack[-3]
0x399: Call2 0x4fc

0x39a: Pop(2)
0x39b: Return(); Pop(6)

0x39c: Stack[-3] = 0
0x39d: PushEmpty(int, bool, int, string, int, bool, int, string)
0x39e: PushEmpty()
0x39f: Call2 0x4f0

0x3a0: Pop(0)
0x3a1: @ irand(Stack[-4], Stack[-1])
0x3a2: Pop(0)
0x3a3: Push((int) 1)
0x3a4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3a5: @ Face(Stack[-0])
0x3a6: Pop(0)
0x3a7: Push((bool) 1)
0x3a8: @ SetAttackState(Stack[-1])
0x3a9: Pop(1)
0x3aa: PushEmpty()
0x3ab: Call2 0x911

0x3ac: Pop(0)
0x3ad: Push("all")
0x3ae: Push("attack_begin")
0x3af: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3b0: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b1: Pop(2)
0x3b2: @ WaitForAnimEnd()
0x3b3: Pop(0)
0x3b4: PushEmpty()
0x3b5: Call2 0x4d0

0x3b6: Pop(0)
0x3b7: PushEmpty(bool, object)
0x3b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b9: Call2 0x754

0x3ba: Pop(1)
0x3bb: Pop(1); Push((bool) Stack[-1] == 0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3bd: @ StopAsync()
0x3be: Pop(0)
0x3bf: Stack[-10] = (bool) 0
0x3c0: Return(); Pop(8)

0x3c1: PushEmpty(float, int)
0x3c2: Stack[-2] = Stack[-11]
0x3c3: Stack[-1] = Stack[-6]
0x3c4: Call2 0x376

0x3c5: Pop(2)
0x3c6: Push("all")
0x3c7: Push("attack_middle")
0x3c8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3c9: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x3ca: Pop(2)
0x3cb: Push(Stack[-3])
0x3cc: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x3cd: PushEmpty()
0x3ce: Call2 0x911

0x3cf: Pop(0)
0x3d0: Push("all")
0x3d1: Push("attack_middle")
0x3d2: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3d3: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d4: Pop(2)
0x3d5: @ WaitForAnimEnd()
0x3d6: Pop(0)
0x3d7: PushEmpty()
0x3d8: Call2 0x4f0

0x3d9: Pop(0)
0x3da: PushEmpty(bool, object)
0x3db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3dc: Call2 0x754

0x3dd: Pop(1)
0x3de: Pop(1); Push((bool) Stack[-1] == 0)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e0: @ StopAsync()
0x3e1: Pop(0)
0x3e2: Stack[-10] = (bool) 0
0x3e3: Return(); Pop(8)

0x3e4: PushEmpty(float, int)
0x3e5: Stack[-2] = Stack[-11]
0x3e6: Stack[-1] = Stack[-6]
0x3e7: Call2 0x376

0x3e8: Pop(2)
0x3e9: Stack[-2] = (int) 1
0x3ea: Push("attack_middle")
0x3eb: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3ec: Push("_")
0x3ed: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ee: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x3ef: Push("all")
0x3f0: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x3f1: Pop(1)
0x3f2: Pop(0); Push((bool) Stack[-3] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f4: GOTO 0x412

0x3f5: PushEmpty()
0x3f6: Call2 0x911

0x3f7: Pop(0)
0x3f8: Push("all")
0x3f9: @ PlayAnimation(Stack[-1], Stack[-2])
0x3fa: Pop(1)
0x3fb: @ WaitForAnimEnd()
0x3fc: Pop(0)
0x3fd: PushEmpty()
0x3fe: Call2 0x4f0

0x3ff: Pop(0)
0x400: PushEmpty(bool, object)
0x401: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x402: Call2 0x754

0x403: Pop(1)
0x404: Pop(1); Push((bool) Stack[-1] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x406: @ StopAsync()
0x407: Pop(0)
0x408: Stack[-10] = (bool) 0
0x409: Return(); Pop(8)

0x40a: PushEmpty(float, int)
0x40b: Stack[-2] = Stack[-11]
0x40c: Stack[-1] = Stack[-6]
0x40d: Call2 0x376

0x40e: Pop(2)
0x40f: Push((int) 1)
0x410: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x411: GOTO 0x3ea

0x412: Push((bool) 0)
0x413: @ SetAttackState(Stack[-1])
0x414: Pop(1)
0x415: Push("all")
0x416: Push("attack_end")
0x417: Pop(1); Push(Stack[-1] + Stack[-6]);
0x418: @ PlayAnimation(Stack[-2], Stack[-1])
0x419: Pop(2)
0x41a: PushEmpty(bool)
0x41b: Call2 0x4fe

0x41c: Pop(0)
0x41d: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x41e: PushEmpty(bool, float)
0x41f: Stack[-1] = (float) 0.75
0x420: Call2 0x426

0x421: Pop(2)
0x422: @ StopAsync()
0x423: Pop(0)
0x424: Stack[-10] = (bool) 1
0x425: Return(); Pop(8)

0x426: PushEmpty(float, bool, float, bool)
0x427: @ rand(Stack[-2])
0x428: Pop(0)
0x429: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x42a: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x42b: @ IsAnimationPlaying(Stack[-1])
0x42c: Pop(0)
0x42d: Pop(0); Push((bool) Stack[-1] == 0)
0x42e: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42f: GOTO 0x439

0x430: PushEmpty(bool)
0x431: Call2 0x488

0x432: Pop(0)
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: Stack[-6] = (bool) 1
0x435: Return(); Pop(4)

0x436: @ sync()
0x437: Pop(0)
0x438: GOTO 0x42b

0x439: GOTO 0x43f

0x43a: @ WaitForAnimEnd()
0x43b: Pop(0)
0x43c: PushEmpty()
0x43d: Call2 0x4f0

0x43e: Pop(0)
0x43f: Stack[-6] = (bool) 0
0x440: Return(); Pop(4)

0x441: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x442: @ IsAnimationPlaying(Stack[-5])
0x443: Pop(0)
0x444: Pop(0); Push((bool) Stack[-5] == 0)
0x445: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x446: GOTO 0x467

0x447: PushEmpty(bool)
0x448: Call2 0x488

0x449: Pop(0)
0x44a: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44b: Stack[-12] = (bool) 1
0x44c: Return(); Pop(10)

0x44d: PushEmpty(bool, object)
0x44e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x44f: Call2 0x754

0x450: Pop(1)
0x451: Pop(1); Push((bool) Stack[-1] == 0)
0x452: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x453: Stack[-12] = (bool) 0
0x454: Return(); Pop(10)

0x455: @@ GetPFPosition(Stack[-4])
0x456: Pop(0)
0x457: @ GetPFPosition(Stack[-3])
0x458: Pop(0)
0x459: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x45a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x45b: Pop(0); Push(Stack[-11] * Stack[-11]);
0x45c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x45e: PushEmpty(bool, float)
0x45f: Stack[-1] = Stack[-13]
0x460: Call2 0x39d

0x461: Pop(2)
0x462: Stack[-12] = (bool) 1
0x463: Return(); Pop(10)

0x464: @ sync()
0x465: Pop(0)
0x466: GOTO 0x442

0x467: PushEmpty()
0x468: Call2 0x4f0

0x469: Pop(0)
0x46a: Stack[-12] = (bool) 0
0x46b: Return(); Pop(10)

0x46c: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x46d: PushEmpty(bool, object)
0x46e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x46f: Call2 0x754

0x470: Pop(1)
0x471: Pop(1); Push((bool) Stack[-1] == 0)
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-11] = (bool) 0
0x474: Return(); Pop(10)

0x475: PushEmpty(bool)
0x476: Call2 0x4c5

0x477: Pop(0)
0x478: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x479: @@ GetPFPosition(Stack[-5])
0x47a: Pop(0)
0x47b: @ GetPFPosition(Stack[-4])
0x47c: Pop(0)
0x47d: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x47e: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x47f: @@ GetAttackDistance(Stack[-1])
0x480: Pop(0)
0x481: Push((int) 50)
0x482: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x483: Pop(0); Push(Stack[-1] * Stack[-1]);
0x484: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x485: Return(); Pop(10)

0x486: Stack[-11] = (bool) 0
0x487: Return(); Pop(10)

0x488: PushEmpty(bool)
0x489: Stack[-1] = (bool) 0
0x48a: PushEmpty(bool)
0x48b: Call2 0x46c

0x48c: Pop(0)
0x48d: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48e: PushEmpty(bool)
0x48f: Call2 0x498

0x490: Pop(0)
0x491: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x492: Stack[-1] = (bool) 1
0x493: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x494: Stack[-1] = (bool) 1
0x495: Return(); Pop(0)

0x496: Stack[-1] = (bool) 0
0x497: Return(); Pop(0)

0x498: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x499: @ GetScene(Stack[-5])
0x49a: Pop(0)
0x49b: Stack[-4] = (bool) 0
0x49c: PushEmpty(cvector, object)
0x49d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x49e: Call2 0x6c2

0x49f: Pop(1)
0x4a0: Pop(1); Push(( -Stack[-1])
0x4a1: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x4a2: Pop(1)
0x4a3: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a5: GOTO 0x4c2

0x4a6: @ Face(Stack[-0])
0x4a7: Pop(0)
0x4a8: Push("all")
0x4a9: Push("bjump")
0x4aa: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ab: Pop(2)
0x4ac: @@ GetPFPosition(Stack[-2])
0x4ad: Pop(0)
0x4ae: @ GetPFPosition(Stack[-1])
0x4af: Pop(0)
0x4b0: @ WaitForAnimEnd()
0x4b1: Pop(0)
0x4b2: PushEmpty()
0x4b3: Call2 0x4f0

0x4b4: Pop(0)
0x4b5: @ StopAsync()
0x4b6: Pop(0)
0x4b7: Push(CVector(0.0, 0.0, 0.0))
0x4b8: @ SetSpeed(Stack[-1])
0x4b9: Pop(1)
0x4ba: Stack[-4] = (bool) 1
0x4bb: PushEmpty(bool)
0x4bc: Call2 0x46c

0x4bd: Pop(0)
0x4be: Pop(1); Push((bool) Stack[-1] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4c0: GOTO 0x4c2

0x4c1: GOTO 0x49c

0x4c2: Stack[-11] = Stack[-4]
0x4c3: Return(); Pop(10)

0x4c4: Stack[-5] = 0
0x4c5: PushEmpty(bool, bool)
0x4c6: Push("IsAttacking")
0x4c7: Push((int) 1)
0x4c8: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x4c9: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4ca: @@ IsAttacking(Stack[-1])
0x4cb: Pop(0)
0x4cc: Stack[-3] = Stack[-1]
0x4cd: Return(); Pop(2)

0x4ce: Stack[-3] = (bool) 0
0x4cf: Return(); Pop(2)

0x4d0: PushEmpty(float, int, float, int)
0x4d1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d3: Return(); Pop(4)

0x4d4: Push( Stack[5 + Tasks[-1].StackPointer] )
0x4d5: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d6: Push((int) -1)
0x4d7: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4d8: Push((int) 0)
0x4d9: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4db: Return(); Pop(4)

0x4dc: @ rand(Stack[-2])
0x4dd: Pop(0)
0x4de: PushEmpty(float)
0x4df: Call2 0x502

0x4e0: Pop(0)
0x4e1: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4e3: @ irand(Stack[-1], Stack[-2])
0x4e4: Pop(0)
0x4e5: Push((int) 1)
0x4e6: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4e7: Push("attack")
0x4e8: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4e9: @ Speak(Stack[-1])
0x4ea: Pop(1)
0x4eb: PushEmpty(int)
0x4ec: Call2 0x500

0x4ed: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x4ee: Pop(1)
0x4ef: Return(); Pop(4)

0x4f0: PushEmpty(object)
0x4f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f2: Call2 0x908

0x4f3: Pop(1)
0x4f4: Return(); Pop(0)

0x4f5: Stack[-1] = (int) 0
0x4f6: Return(); Pop(0)

0x4f7: PushEmpty(string)
0x4f8: Stack[-1] = "attack_stay"
0x4f9: Call2 0x891

0x4fa: Pop(1)
0x4fb: Return(); Pop(0)

0x4fc: PushEmpty()
0x4fd: Return(); Pop(0)

0x4fe: Stack[-1] = (bool) 1
0x4ff: Return(); Pop(0)

0x500: Stack[-1] = (int) 1
0x501: Return(); Pop(0)

0x502: Stack[-1] = (float) 0.5
0x503: Return(); Pop(0)

0x504: PushEmpty(object)
0x505: Call2 0x8ba

0x506: Pop(0)
0x507: @ RemoveActor(Stack[-1])
0x508: Pop(1)
0x509: Return(); Pop(0)

0x50a: PushEmpty(bool, bool, bool, bool)
0x50b: PushEmpty(object)
0x50c: Stack[-1] = Stack[-10]
0x50d: Call2 0x908

0x50e: Pop(1)
0x50f: Push((int) 1)
0x510: Push((int) 5)
0x511: @ SetTimer(Stack[-2], Stack[-1])
0x512: Pop(2)
0x513: @ CanSee(Stack[-2], Stack[-9])
0x514: Pop(0)
0x515: Push(Stack[-2])
0x516: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x517: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x518: PushEmpty(object)
0x519: Stack[-1] = Stack[-10]
0x51a: Call2 0x870

0x51b: Pop(1)
0x51c: GOTO 0x51e

0x51d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x51e: PushEmpty(bool, object)
0x51f: Stack[-1] = Stack[-11]
0x520: Call2 0x6d1

0x521: Pop(1)
0x522: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x523: PushEmpty(object)
0x524: Call2 0x8ba

0x525: Pop(0)
0x526: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x527: Pop(1)
0x528: PushEmpty(bool, object, float, float, bool, bool)
0x529: Stack[-5] = Stack[-15]
0x52a: Stack[-4] = Stack[-14]
0x52b: Stack[-3] = Stack[-13]
0x52c: Stack[-2] = Stack[-12]
0x52d: Stack[-1] = Stack[-11]
0x52e: Call2 0x573

0x52f: Stack[-7] = Stack[-6]
0x530: Pop(6)
0x531: Push( Stack[2 + Tasks[-1].StackPointer] )
0x532: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x533: Push("head")
0x534: @ UnlookAsync(Stack[-1])
0x535: Pop(1)
0x536: Push((int) 1)
0x537: @ KillTimer(Stack[-1])
0x538: Pop(1)
0x539: Stack[-10] = Stack[-1]
0x53a: Return(); Pop(4)

0x53b: PushEmpty()
0x53c: Push((int) 1)
0x53d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x53f: PushEmpty(object)
0x540: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x541: Call2 0x908

0x542: Pop(1)
0x543: GOTO 0x548

0x544: PushEmpty(int)
0x545: Stack[-1] = Stack[-2]
0x546: Call2 0x5d9

0x547: Pop(1)
0x548: Return(); Pop(0)

0x549: Push((int) 1)
0x54a: @ KillTimer(Stack[-1])
0x54b: Pop(1)
0x54c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x54d: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x54e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x54f: Push("head")
0x550: @ UnlookAsync(Stack[-1])
0x551: Pop(1)
0x552: PushEmpty()
0x553: Call2 0x5ef

0x554: Pop(0)
0x555: Return(); Pop(0)

0x556: PushEmpty()
0x557: PushEmpty(bool)
0x558: Stack[-1] = (bool) 0
0x559: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x55a: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x55c: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55d: Stack[-1] = (bool) 1
0x55e: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x55f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x560: PushEmpty(object)
0x561: Stack[-1] = Stack[-2]
0x562: Call2 0x870

0x563: Pop(1)
0x564: Return(); Pop(0)

0x565: PushEmpty()
0x566: PushEmpty(bool)
0x567: Stack[-1] = (bool) 0
0x568: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x569: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x56b: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56c: Stack[-1] = (bool) 1
0x56d: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x56e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x56f: Push("head")
0x570: @ UnlookAsync(Stack[-1])
0x571: Pop(1)
0x572: Return(); Pop(0)

0x573: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x574: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x575: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x576: Stack[-7] = Stack[-17]
0x577: PushEmpty(bool, object)
0x578: Stack[-1] = Stack[-23]
0x579: Call2 0x5ff

0x57a: Pop(1)
0x57b: Pop(1); Push((bool) Stack[-1] == 0)
0x57c: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57d: Stack[-22] = (bool) 0
0x57e: Return(); Pop(16)

0x57f: @@ GetPosition(Stack[-5])
0x580: Pop(0)
0x581: @ GetPosition(Stack[-4])
0x582: Pop(0)
0x583: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x584: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x585: PushEmpty(bool)
0x586: Stack[-1] = (bool) 0
0x587: Push((int) 0)
0x588: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x589: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58a: Pop(0); Push(Stack[-20] * Stack[-20]);
0x58b: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58d: Stack[-1] = (bool) 1
0x58e: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x58f: @ Stop()
0x590: Pop(0)
0x591: Stack[-22] = (bool) 0
0x592: Return(); Pop(16)

0x593: Pop(0); Push(Stack[-20] * Stack[-20]);
0x594: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x595: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x596: @@ GetPFPosition(Stack[-5])
0x597: Pop(0)
0x598: @ FindPathTo(Stack[-1], Stack[-5])
0x599: Pop(0)
0x59a: Pop(0); Push(( Stack[-1] != 0 )
0x59b: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59c: Stack[-6] = Stack[-1]
0x59d: Stack[-1] = 0
0x59e: Pop(0); Push(( Stack[-6] != 0 )
0x59f: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5a0: Push(Stack[-7])
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a2: Stack[-7] = (bool) 0
0x5a3: @ RotatePath(Stack[-6], Stack[-8])
0x5a4: Pop(0)
0x5a5: Pop(0); Push((bool) Stack[-8] == 0)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a7: GOTO 0x5d7

0x5a8: Push((int) 0)
0x5a9: Push((float)0.3)
0x5aa: @ SetTimer(Stack[-2], Stack[-1])
0x5ab: Pop(2)
0x5ac: PushEmpty(string)
0x5ad: Call2 0x606

0x5ae: Pop(0)
0x5af: PushEmpty(string)
0x5b0: Call2 0x608

0x5b1: Pop(0)
0x5b2: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x5b3: Pop(2)
0x5b4: Pop(0); Push((bool) Stack[-8] == 0)
0x5b5: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5b6: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5b7: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b8: Stack[-6] = 0
0x5b9: GOTO 0x5d7

0x5ba: GOTO 0x5bc

0x5bb: GOTO 0x5d6

0x5bc: GOTO 0x5be

0x5bd: Stack[-6] = 0
0x5be: GOTO 0x5cf

0x5bf: Push((int) 0)
0x5c0: @ KillTimer(Stack[-1])
0x5c1: Pop(1)
0x5c2: Push((float)0.5)
0x5c3: @ Sleep(Stack[-1], Stack[-9])
0x5c4: Pop(1)
0x5c5: Pop(0); Push((bool) Stack[-8] == 0)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c7: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5c8: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c9: Stack[-6] = 0
0x5ca: GOTO 0x5d7

0x5cb: Push((int) 0)
0x5cc: Push((float)0.3)
0x5cd: @ SetTimer(Stack[-2], Stack[-1])
0x5ce: Pop(2)
0x5cf: Stack[-1] = 0
0x5d0: GOTO 0x5d5

0x5d1: Push((int) 0)
0x5d2: @ KillTimer(Stack[-1])
0x5d3: Pop(1)
0x5d4: GOTO 0x5d7

0x5d5: Stack[-6] = 0
0x5d6: GOTO 0x577

0x5d7: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x5d8: Return(); Pop(16)

0x5d9: PushEmpty()
0x5da: Push((int) 0)
0x5db: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5dd: Return(); Pop(0)

0x5de: PushEmpty(bool, object)
0x5df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e0: Call2 0x5ff

0x5e1: Pop(1)
0x5e2: Pop(1); Push((bool) Stack[-1] == 0)
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5e5: Push((int) 0)
0x5e6: @ KillTimer(Stack[-1])
0x5e7: Pop(1)
0x5e8: @ Stop()
0x5e9: Pop(0)
0x5ea: Return(); Pop(0)

0x5eb: PushEmpty()
0x5ec: @ RequestClearPath(Stack[-1])
0x5ed: Pop(0)
0x5ee: Return(); Pop(0)

0x5ef: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5f0: Push((int) 0)
0x5f1: @ KillTimer(Stack[-1])
0x5f2: Pop(1)
0x5f3: @ Stop()
0x5f4: Pop(0)
0x5f5: Return(); Pop(0)

0x5f6: PushEmpty()
0x5f7: PushEmpty()
0x5f8: Call2 0x549

0x5f9: Pop(0)
0x5fa: PushEmpty(object)
0x5fb: Stack[-1] = Stack[-2]
0x5fc: Call2 0xa82

0x5fd: Pop(1)
0x5fe: Return(); Pop(0)

0x5ff: PushEmpty()
0x600: PushEmpty(bool, object)
0x601: Stack[-1] = Stack[-3]
0x602: Call2 0x754

0x603: Stack[-4] = Stack[-2]
0x604: Pop(2)
0x605: Return(); Pop(0)

0x606: Stack[-1] = "walk"
0x607: Return(); Pop(0)

0x608: Stack[-1] = "run"
0x609: Return(); Pop(0)

0x60a: PushEmpty()
0x60b: PushEmpty(string, int, int, int)
0x60c: Stack[-4] = "samopal_ammo"
0x60d: Stack[-3] = (int) 1
0x60e: Stack[-2] = (int) 1
0x60f: Stack[-1] = (int) 4
0x610: Call2 0x882

0x611: Pop(4)
0x612: PushEmpty()
0x613: Call2 0xa05

0x614: Pop(0)
0x615: PushEmpty(object)
0x616: Stack[-1] = Stack[-2]
0x617: Call2 0x620

0x618: Pop(1)
0x619: Return(); Pop(0)

0x61a: PushEmpty(object)
0x61b: Call2 0x8ba

0x61c: Pop(0)
0x61d: @ RemoveActor(Stack[-1])
0x61e: Pop(1)
0x61f: Return(); Pop(0)

0x620: PushEmpty()
0x621: EventDisable(0)
0x622: PushEmpty(object)
0x623: Stack[-1] = Stack[-2]
0x624: Call2 0x639

0x625: Pop(1)
0x626: Push((int) 50)
0x627: Push((int) 40)
0x628: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x629: Pop(2)
0x62a: EventEnable(0)
0x62b: @ Hold()
0x62c: Pop(0)
0x62d: GOTO 0x62b

0x62e: Return(); Pop(0)

0x62f: PushEmpty(bool, bool)
0x630: @ IsOverrideActive(Stack[-1])
0x631: Pop(0)
0x632: Pop(0); Push((bool) Stack[-1] == 0)
0x633: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x634: PushEmpty(object)
0x635: Stack[-1] = Stack[-4]
0x636: Call2 0x9e7

0x637: Pop(1)
0x638: Return(); Pop(2)

0x639: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x63a: Pop(0); Push((bool) Stack[-21] == 0)
0x63b: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63c: PushEmpty(string)
0x63d: Stack[-1] = "fdie"
0x63e: Call2 0x694

0x63f: Pop(1)
0x640: GOTO 0x693

0x641: @@ GetPosition(Stack[-10])
0x642: Pop(0)
0x643: @ GetPosition(Stack[-9])
0x644: Pop(0)
0x645: @ GetDirection(Stack[-8])
0x646: Pop(0)
0x647: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x648: Push(CvectorIndex(Stack[-7], 0))
0x649: Push(CvectorIndex(Stack[-9], 0))
0x64a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x64b: Push(CvectorIndex(Stack[-8], 2))
0x64c: Push(CvectorIndex(Stack[-10], 2))
0x64d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x64e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x64f: Push((int) 0)
0x650: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x652: Stack[-6] = "fdie"
0x653: GOTO 0x655

0x654: Stack[-6] = "bdie"
0x655: @ RemoveRTEnvelope()
0x656: Pop(0)
0x657: @ SetDeathState()
0x658: Pop(0)
0x659: @ Stop()
0x65a: Pop(0)
0x65b: @ StopAsync()
0x65c: Pop(0)
0x65d: Stack[-5] = Stack[-21]
0x65e: Push("GetScriptProperty")
0x65f: Push((int) 2)
0x660: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x661: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x662: Push("Owner")
0x663: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x664: Pop(1)
0x665: Push(Stack[-4])
0x666: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x667: Push("Owner")
0x668: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x669: Pop(1)
0x66a: Pop(0); Push((bool) Stack[-5] == 0)
0x66b: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x66c: Stack[-5] = Stack[-21]
0x66d: Push("@GetEyesHeight")
0x66e: Push((int) 1)
0x66f: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x670: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x671: @@ GetEyesHeight(Stack[-2])
0x672: Pop(0)
0x673: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x674: Push(CvectorIndex(Stack[-1], 1))
0x675: Stack[-1] = Stack[-3]
0x676: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x677: Push("head")
0x678: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x679: Pop(1)
0x67a: Stack[-3] = (bool) 1
0x67b: GOTO 0x67d

0x67c: Stack[-3] = (bool) 0
0x67d: PushEmpty(string)
0x67e: Stack[-1] = Stack[-7]
0x67f: Call2 0x891

0x680: Pop(1)
0x681: Push("all")
0x682: @ PlayAnimation(Stack[-1], Stack[-7])
0x683: Pop(1)
0x684: @ WaitForAnimEnd()
0x685: Pop(0)
0x686: Push(Stack[-3])
0x687: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x688: @ StopAsync()
0x689: Pop(0)
0x68a: Push("head")
0x68b: @ UnlookAsync(Stack[-1])
0x68c: Pop(1)
0x68d: Push("all")
0x68e: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x68f: Pop(1)
0x690: @ RemoveEnvelope()
0x691: Pop(0)
0x692: Stack[-5] = 0
0x693: Return(); Pop(20)

0x694: PushEmpty()
0x695: @ RemoveRTEnvelope()
0x696: Pop(0)
0x697: @ SetDeathState()
0x698: Pop(0)
0x699: @ Stop()
0x69a: Pop(0)
0x69b: @ StopAsync()
0x69c: Pop(0)
0x69d: @ StopSecondaryAnimation()
0x69e: Pop(0)
0x69f: PushEmpty(string)
0x6a0: Stack[-1] = Stack[-2]
0x6a1: Call2 0x891

0x6a2: Pop(1)
0x6a3: Push("all")
0x6a4: @ PlayAnimation(Stack[-1], Stack[-2])
0x6a5: Pop(1)
0x6a6: @ WaitForAnimEnd()
0x6a7: Pop(0)
0x6a8: Push("all")
0x6a9: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x6aa: Pop(1)
0x6ab: @ RemoveEnvelope()
0x6ac: Pop(0)
0x6ad: Return(); Pop(0)

0x6ae: PushEmpty()
0x6af: Return(); Pop(0)

0x6b0: PushEmpty()
0x6b1: Return(); Pop(0)

0x6b2: PushEmpty()
0x6b3: Return(); Pop(0)

0x6b4: PushEmpty()
0x6b5: Push((int) 2)
0x6b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b7: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b8: Stack[-2] = "fire"
0x6b9: Return(); Pop(0)

0x6ba: GOTO 0x6c0

0x6bb: Push((int) 1)
0x6bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6be: Stack[-2] = "bullet"
0x6bf: Return(); Pop(0)

0x6c0: Stack[-2] = "phys"
0x6c1: Return(); Pop(0)

0x6c2: PushEmpty(cvector, cvector, cvector, cvector)
0x6c3: @ GetPosition(Stack[-2])
0x6c4: Pop(0)
0x6c5: @@ GetPosition(Stack[-1])
0x6c6: Pop(0)
0x6c7: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x6c8: Return(); Pop(4)

0x6c9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6ca: @ GetPosition(Stack[-3])
0x6cb: Pop(0)
0x6cc: @@ GetPosition(Stack[-2])
0x6cd: Pop(0)
0x6ce: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x6cf: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x6d0: Return(); Pop(6)

0x6d1: PushEmpty(bool, bool)
0x6d2: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6d3: Pop(0)
0x6d4: Stack[-4] = Stack[-1]
0x6d5: Return(); Pop(2)

0x6d6: PushEmpty(bool, bool)
0x6d7: Push("HasProperty")
0x6d8: Push((int) 2)
0x6d9: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x6da: Pop(1); Push((bool) Stack[-1] == 0)
0x6db: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6dc: Stack[-5] = (bool) 0
0x6dd: Return(); Pop(2)

0x6de: @@ HasProperty(Stack[-3], Stack[-1])
0x6df: Pop(0)
0x6e0: Stack[-5] = Stack[-1]
0x6e1: Return(); Pop(2)

0x6e2: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x6e3: PushEmpty(bool, object, string)
0x6e4: Stack[-2] = Stack[-18]
0x6e5: Stack[-1] = "health"
0x6e6: Call2 0x6d6

0x6e7: Pop(2)
0x6e8: Pop(1); Push((bool) Stack[-1] == 0)
0x6e9: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6ea: Stack[-16] = (float) 0.0
0x6eb: Return(); Pop(12)

0x6ec: PushEmpty(bool, object, string)
0x6ed: Stack[-2] = Stack[-18]
0x6ee: Stack[-1] = "armor"
0x6ef: Call2 0x6d6

0x6f0: Pop(2)
0x6f1: Pop(1); Push((bool) Stack[-1] == 0)
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6f3: Stack[-6] = (int) 0
0x6f4: GOTO 0x6f8

0x6f5: Push("armor")
0x6f6: @@ GetProperty(Stack[-1], Stack[-7])
0x6f7: Pop(1)
0x6f8: Push("armor_")
0x6f9: PushEmpty(string, int)
0x6fa: Stack[-1] = Stack[-16]
0x6fb: Call2 0x6b4

0x6fc: Pop(1)
0x6fd: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6fe: PushEmpty(bool, object, string)
0x6ff: Stack[-2] = Stack[-18]
0x700: Stack[-1] = Stack[-8]
0x701: Call2 0x6d6

0x702: Pop(2)
0x703: Pop(1); Push((bool) Stack[-1] == 0)
0x704: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x705: Stack[-4] = (int) 0
0x706: GOTO 0x709

0x707: @@ GetProperty(Stack[-5], Stack[-4])
0x708: Pop(0)
0x709: PushEmpty(float, float, float)
0x70a: Pop(0); Push(Stack[-9] + Stack[-7]);
0x70b: Push((float)100.0)
0x70c: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x70d: Stack[-1] = (int) 1
0x70e: Call2 0x8ca

0x70f: Stack[-6] = Stack[-3]
0x710: Pop(3)
0x711: Push("health")
0x712: @@ GetProperty(Stack[-1], Stack[-3])
0x713: Pop(1)
0x714: Push((int) 1)
0x715: Pop(1); Push(Stack[-1] - Stack[-4]);
0x716: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x717: Push("health")
0x718: PushEmpty(float, float, float, float)
0x719: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x71a: Stack[-2] = (int) 0
0x71b: Stack[-1] = (int) 1
0x71c: Call2 0x8d1

0x71d: Pop(3)
0x71e: @@ SetProperty(Stack[-2], Stack[-1])
0x71f: Pop(2)
0x720: PushEmpty(bool, object)
0x721: Stack[-1] = Stack[-17]
0x722: Call2 0x6d1

0x723: Pop(1)
0x724: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x725: PushEmpty(float)
0x726: Stack[-1] = -Stack[-2]; Pop(0);
0x727: Call2 0x8e6

0x728: Pop(1)
0x729: Stack[-16] = Stack[-1]
0x72a: Return(); Pop(12)

0x72b: PushEmpty(bool, bool)
0x72c: @@ IsDead(Stack[-1])
0x72d: Pop(0)
0x72e: Stack[-4] = Stack[-1]
0x72f: Return(); Pop(2)

0x730: PushEmpty(object, object, object, object)
0x731: Pop(0); Push((bool) Stack[-5] == 0)
0x732: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x733: Stack[-6] = (bool) 0
0x734: Return(); Pop(4)

0x735: PushEmpty(bool)
0x736: Stack[-1] = (bool) 0
0x737: Push("IsDead")
0x738: Push((int) 1)
0x739: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x73a: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73b: PushEmpty(bool, object)
0x73c: Stack[-1] = Stack[-8]
0x73d: Call2 0x72b

0x73e: Pop(1)
0x73f: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x740: Stack[-1] = (bool) 1
0x741: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x742: Stack[-6] = (bool) 0
0x743: Return(); Pop(4)

0x744: @ GetScene(Stack[-2])
0x745: Pop(0)
0x746: Pop(0); Push((bool) Stack[-2] == 0)
0x747: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x748: Stack[-6] = (bool) 0
0x749: Return(); Pop(4)

0x74a: @@ GetScene(Stack[-1])
0x74b: Pop(0)
0x74c: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x74d: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74e: Stack[-6] = (bool) 0
0x74f: Return(); Pop(4)

0x750: Stack[-6] = (bool) 1
0x751: Return(); Pop(4)

0x752: Stack[-1] = 0
0x753: Stack[-2] = 0
0x754: PushEmpty(int, int)
0x755: PushEmpty(bool, object)
0x756: Stack[-1] = Stack[-5]
0x757: Call2 0x730

0x758: Pop(1)
0x759: Pop(1); Push((bool) Stack[-1] == 0)
0x75a: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75b: Stack[-4] = (bool) 0
0x75c: Return(); Pop(2)

0x75d: PushEmpty(bool, object, string)
0x75e: Stack[-2] = Stack[-6]
0x75f: Stack[-1] = "noaccess"
0x760: Call2 0x6d6

0x761: Pop(2)
0x762: Pop(1); Push((bool) Stack[-1] == 0)
0x763: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x764: Stack[-4] = (bool) 1
0x765: Return(); Pop(2)

0x766: Push("noaccess")
0x767: @@ GetProperty(Stack[-1], Stack[-2])
0x768: Pop(1)
0x769: Push((int) 0)
0x76a: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x76b: Return(); Pop(2)

0x76c: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x76d: Pop(0); Push((bool) Stack[-15] == 0)
0x76e: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76f: Return(); Pop(14)

0x770: @ IsDead(Stack[-7])
0x771: Pop(0)
0x772: Push(Stack[-7])
0x773: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x774: Return(); Pop(14)

0x775: @ GetSecondaryAnimationType(Stack[-6])
0x776: Pop(0)
0x777: Push((int) 0)
0x778: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x77a: Return(); Pop(14)

0x77b: @@ GetPosition(Stack[-5])
0x77c: Pop(0)
0x77d: @ GetPosition(Stack[-4])
0x77e: Pop(0)
0x77f: @ GetDirection(Stack[-3])
0x780: Pop(0)
0x781: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x782: Push(CvectorIndex(Stack[-2], 0))
0x783: Push(CvectorIndex(Stack[-4], 0))
0x784: Pop(2); Push(Stack[-2] * Stack[-1]);
0x785: Push(CvectorIndex(Stack[-3], 2))
0x786: Push(CvectorIndex(Stack[-5], 2))
0x787: Pop(2); Push(Stack[-2] * Stack[-1]);
0x788: Pop(2); Push(Stack[-2] + Stack[-1]);
0x789: Push((int) 0)
0x78a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x78b: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78c: Stack[-1] = "fhit"
0x78d: GOTO 0x78f

0x78e: Stack[-1] = "bhit"
0x78f: Push("hit_react")
0x790: Push("1")
0x791: Pop(1); Push(Stack[-3] + Stack[-1]);
0x792: Push("2")
0x793: Pop(1); Push(Stack[-4] + Stack[-1]);
0x794: Push((int) -10)
0x795: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x796: Pop(4)
0x797: Return(); Pop(14)

0x798: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x799: PushEmpty(bool)
0x79a: Stack[-1] = (bool) 0
0x79b: PushEmpty(bool)
0x79c: Stack[-1] = (bool) 0
0x79d: Push(Stack[-23])
0x79e: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x79f: Push((int) 4)
0x7a0: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a2: Stack[-1] = (bool) 1
0x7a3: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a4: Push((int) 5)
0x7a5: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x7a6: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a7: Stack[-1] = (bool) 1
0x7a8: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7a9: PushEmpty(cvector, cvector)
0x7aa: PushEmpty(cvector, object)
0x7ab: Stack[-1] = Stack[-25]
0x7ac: Call2 0x6c2

0x7ad: Stack[-3] = Stack[-2]
0x7ae: Pop(2)
0x7af: Call2 0x8c0

0x7b0: Stack[-11] = Stack[-2]
0x7b1: Pop(2)
0x7b2: @ CreateVectorVector(Stack[-8])
0x7b3: Pop(0)
0x7b4: Stack[-7] = (int) 1
0x7b5: Push("hit")
0x7b6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7b7: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x7b8: Pop(1)
0x7b9: Pop(0); Push((bool) Stack[-6] == 0)
0x7ba: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7bb: GOTO 0x7c5

0x7bc: Pop(0); Push(Stack[-4] | Stack[-9]);
0x7bd: Push((float)0.70711)
0x7be: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c0: @@ add(Stack[-5])
0x7c1: Pop(0)
0x7c2: Push((int) 1)
0x7c3: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7c4: GOTO 0x7b5

0x7c5: @@ size(Stack[-3])
0x7c6: Pop(0)
0x7c7: Push(Stack[-3])
0x7c8: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7c9: @ irand(Stack[-2], Stack[-3])
0x7ca: Pop(0)
0x7cb: @@ get(Stack[-1], Stack[-2])
0x7cc: Pop(0)
0x7cd: PushEmpty(object, int, float, cvector, cvector)
0x7ce: Stack[-5] = Stack[-26]
0x7cf: Stack[-4] = Stack[-25]
0x7d0: Stack[-3] = Stack[-24]
0x7d1: Stack[-2] = Stack[-6]
0x7d2: Stack[-1] = -Stack[-14]; Pop(0);
0x7d3: Call2 0x7dc

0x7d4: Pop(5)
0x7d5: Return(); Pop(18)

0x7d6: Stack[-8] = 0
0x7d7: PushEmpty(object)
0x7d8: Stack[-1] = Stack[-22]
0x7d9: Call2 0x76c

0x7da: Pop(1)
0x7db: Return(); Pop(18)

0x7dc: PushEmpty(object, object, object, object)
0x7dd: @ GetScene(Stack[-2])
0x7de: Pop(0)
0x7df: Push("scripted")
0x7e0: Push("blood_dir.xml")
0x7e1: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x7e2: Pop(2)
0x7e3: PushEmpty(object)
0x7e4: Stack[-1] = Stack[-10]
0x7e5: Call2 0x76c

0x7e6: Pop(1)
0x7e7: Return(); Pop(4)

0x7e8: Stack[-1] = 0
0x7e9: Stack[-2] = 0
0x7ea: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7eb: @@ GetPosition(Stack[-3])
0x7ec: Pop(0)
0x7ed: @ GetPosition(Stack[-2])
0x7ee: Pop(0)
0x7ef: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x7f0: Push(CvectorIndex(Stack[-1], 0))
0x7f1: Push(CvectorIndex(Stack[-2], 2))
0x7f2: @ RotateAsync(Stack[-2], Stack[-1])
0x7f3: Pop(2)
0x7f4: Return(); Pop(6)

0x7f5: PushEmpty(bool, bool)
0x7f6: @ IsLoaded(Stack[-1])
0x7f7: Pop(0)
0x7f8: Stack[-3] = Stack[-1]
0x7f9: Return(); Pop(2)

0x7fa: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x7fb: @@ GetPosition(Stack[-8])
0x7fc: Pop(0)
0x7fd: @@ GetEyesHeight(Stack[-9])
0x7fe: Pop(0)
0x7ff: Push(CvectorIndex(Stack[-8], 1))
0x800: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x801: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x802: @ GetPosition(Stack[-7])
0x803: Pop(0)
0x804: @ GetEyesHeight(Stack[-9])
0x805: Pop(0)
0x806: Push(CvectorIndex(Stack[-7], 1))
0x807: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x808: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x809: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x80a: Push(CvectorIndex(Stack[-6], 1))
0x80b: Stack[-1] = (int) 0
0x80c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x80d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x80e: Pop(1); Push(Sqrt(Stack[-1]))
0x80f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x810: Stack[-5] = -Stack[-6]; Pop(0);
0x811: Pop(0); Push(Stack[-6] * Stack[-19]);
0x812: PushEmpty(cvector, cvector)
0x813: Push(CVector(0.0, 1.0, 0.0))
0x814: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x815: Call2 0x8c0

0x816: Pop(1)
0x817: Push((int) 25)
0x818: Pop(2); Push(Stack[-2] * Stack[-1]);
0x819: Pop(2); Push(Stack[-2] + Stack[-1]);
0x81a: Push(CVector(0.0, 10.0, 0.0))
0x81b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x81c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x81d: @ IsOverrideActive(Stack[-2])
0x81e: Pop(0)
0x81f: Push(Stack[-2])
0x820: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x821: Stack[-21] = (bool) 0
0x822: Return(); Pop(18)

0x823: @ StopWorld()
0x824: Pop(0)
0x825: Push((bool) 1)
0x826: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x827: Pop(1)
0x828: Push(CvectorIndex(Stack[-4], 0))
0x829: Push(CvectorIndex(Stack[-5], 2))
0x82a: @ Rotate(Stack[-2], Stack[-1])
0x82b: Pop(2)
0x82c: PushEmpty(bool)
0x82d: Call2 0xa54

0x82e: Pop(0)
0x82f: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x830: GOTO 0x839

0x831: Push("head")
0x832: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x833: Pop(1)
0x834: Push(Stack[-1])
0x835: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x836: Push("head")
0x837: @ LookAsyncCamera(Stack[-1])
0x838: Pop(1)
0x839: @ CameraWaitForPlayFinish()
0x83a: Pop(0)
0x83b: @ ResumeWorld()
0x83c: Pop(0)
0x83d: Stack[-21] = (bool) 1
0x83e: Return(); Pop(18)

0x83f: PushEmpty(bool, bool)
0x840: Push((bool) 1)
0x841: @ CameraSwitchToNormal(Stack[-1])
0x842: Pop(1)
0x843: PushEmpty(bool)
0x844: Call2 0xa54

0x845: Pop(0)
0x846: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x847: GOTO 0x850

0x848: Push("head")
0x849: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x84a: Pop(1)
0x84b: Push(Stack[-1])
0x84c: IF (Stack[-1] == 0) GOTO 0x850; Pop(1)

0x84d: Push("head")
0x84e: @ UnlookAsync(Stack[-1])
0x84f: Pop(1)
0x850: Return(); Pop(2)

0x851: PushEmpty(bool, float, float, bool, float, float)
0x852: @ lshHasAnimation(Stack[-3], Stack[-7])
0x853: Pop(0)
0x854: Push(Stack[-3])
0x855: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x856: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x857: Pop(0)
0x858: Push((bool) 0)
0x859: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x85a: Pop(1)
0x85b: GOTO 0x860

0x85c: Push("Can't find lsh animation : ")
0x85d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x85e: @ Trace(Stack[-1])
0x85f: Pop(1)
0x860: Return(); Pop(6)

0x861: PushEmpty(bool, float, float, bool, float, float)
0x862: @ lshHasAnimation(Stack[-3], Stack[-8])
0x863: Pop(0)
0x864: Push(Stack[-3])
0x865: IF (Stack[-1] == 0) GOTO 0x86b; Pop(1)

0x866: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x867: Pop(0)
0x868: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x869: Pop(0)
0x86a: GOTO 0x86f

0x86b: Push("Can't find lsh animation : ")
0x86c: Pop(1); Push(Stack[-1] + Stack[-9]);
0x86d: @ Trace(Stack[-1])
0x86e: Pop(1)
0x86f: Return(); Pop(6)

0x870: PushEmpty(float, cvector, float, cvector)
0x871: @@ GetEyesHeight(Stack[-2])
0x872: Pop(0)
0x873: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x874: Push(CvectorIndex(Stack[-1], 1))
0x875: Stack[-1] = Stack[-3]
0x876: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x877: Push("head")
0x878: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x879: Pop(1)
0x87a: Return(); Pop(4)

0x87b: PushEmpty(bool)
0x87c: Call2 0xa54

0x87d: Pop(0)
0x87e: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x87f: @ lshStopSpeech()
0x880: Pop(0)
0x881: Return(); Pop(0)

0x882: PushEmpty(int, bool, int, bool)
0x883: PushEmpty(bool, int, int)
0x884: Stack[-2] = Stack[-10]
0x885: Stack[-1] = Stack[-9]
0x886: Call2 0x8dc

0x887: Pop(2)
0x888: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x889: @ irand(Stack[-2], Stack[-5])
0x88a: Pop(0)
0x88b: Push((int) 0)
0x88c: Push((int) 1)
0x88d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x88e: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x88f: Pop(2)
0x890: Return(); Pop(4)

0x891: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x892: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x893: Pop(0)
0x894: Pop(0); Push((bool) Stack[-8] == 0)
0x895: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x896: Stack[-7] = (int) 0
0x897: Push((int) 1)
0x898: Pop(1); Push(Stack[-8] + Stack[-1]);
0x899: Pop(1); Push(Stack[-18] + Stack[-1]);
0x89a: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x89b: Pop(1)
0x89c: Pop(0); Push((bool) Stack[-6] == 0)
0x89d: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x89e: GOTO 0x8a2

0x89f: Push((int) 1)
0x8a0: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x8a1: GOTO 0x897

0x8a2: Pop(0); Push((bool) Stack[-7] == 0)
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x8a4: Return(); Pop(16)

0x8a5: @ irand(Stack[-5], Stack[-7])
0x8a6: Pop(0)
0x8a7: Push((int) 1)
0x8a8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8a9: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x8aa: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x8ab: Pop(0)
0x8ac: Push(Stack[-4])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8ae: @ GetEyesHeight(Stack[-3])
0x8af: Pop(0)
0x8b0: @ GetDirection(Stack[-2])
0x8b1: Pop(0)
0x8b2: Push((int) 50)
0x8b3: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x8b4: Push(CvectorIndex(Stack[-1], 1))
0x8b5: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x8b6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x8b7: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x8b8: Pop(0)
0x8b9: Return(); Pop(16)

0x8ba: PushEmpty(object, object)
0x8bb: @ self(Stack[-1])
0x8bc: Pop(0)
0x8bd: Stack[-3] = Stack[-1]
0x8be: Return(); Pop(2)

0x8bf: Stack[-1] = 0
0x8c0: PushEmpty(float, float)
0x8c1: Pop(0); Push(Stack[-3] | Stack[-3]);
0x8c2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8c3: Push((float)0.0)
0x8c4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8c6: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x8c7: Return(); Pop(2)

0x8c8: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x8c9: Return(); Pop(2)

0x8ca: PushEmpty()
0x8cb: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x8cc: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8cd: Stack[-3] = Stack[-2]
0x8ce: GOTO 0x8d0

0x8cf: Stack[-3] = Stack[-1]
0x8d0: Return(); Pop(0)

0x8d1: PushEmpty()
0x8d2: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x8d3: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8d4: Stack[-4] = Stack[-2]
0x8d5: Return(); Pop(0)

0x8d6: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x8d7: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8d8: Stack[-4] = Stack[-1]
0x8d9: Return(); Pop(0)

0x8da: Stack[-4] = Stack[-3]
0x8db: Return(); Pop(0)

0x8dc: PushEmpty(int, int)
0x8dd: @ irand(Stack[-1], Stack[-3])
0x8de: Pop(0)
0x8df: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x8e0: Return(); Pop(2)

0x8e1: PushEmpty(int, int)
0x8e2: @ GetVariable(Stack[-3], Stack[-1])
0x8e3: Pop(0)
0x8e4: Stack[-4] = Stack[-1]
0x8e5: Return(); Pop(2)

0x8e6: PushEmpty(object, object)
0x8e7: @ CreateFloatVector(Stack[-1])
0x8e8: Pop(0)
0x8e9: @@ add(Stack[-3])
0x8ea: Pop(0)
0x8eb: Push((int) 0)
0x8ec: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x8ed: IF (Stack[-1] == 0) GOTO 0x8f2; Pop(1)

0x8ee: Push((float)0.7)
0x8ef: Push((int) 500)
0x8f0: @ RumblePlay(Stack[-2], Stack[-1])
0x8f1: Pop(2)
0x8f2: Push((int) 15)
0x8f3: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8f4: Pop(1)
0x8f5: Return(); Pop(2)

0x8f6: Stack[-1] = 0
0x8f7: PushEmpty(object, object)
0x8f8: @ FindActor(Stack[-1], Stack[-4])
0x8f9: Pop(0)
0x8fa: Pop(0); Push((bool) Stack[-1] == 0)
0x8fb: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8fc: Stack[-5] = (bool) 0
0x8fd: Return(); Pop(2)

0x8fe: @ Trigger(Stack[-1], Stack[-3])
0x8ff: Pop(0)
0x900: Stack[-5] = (bool) 1
0x901: Return(); Pop(2)

0x902: Stack[-1] = 0
0x903: PushEmpty(float, float)
0x904: @ GetGameTime(Stack[-1])
0x905: Pop(0)
0x906: Stack[-3] = Stack[-1]
0x907: Return(); Pop(2)

0x908: PushEmpty(bool, bool)
0x909: @ IsPlayerActor(Stack[-3], Stack[-1])
0x90a: Pop(0)
0x90b: Push(Stack[-1])
0x90c: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x90d: Push("attack")
0x90e: @ PlayGlobalMusic(Stack[-1])
0x90f: Pop(1)
0x910: Return(); Pop(2)

0x911: PushEmpty(object, object)
0x912: @ GetScene(Stack[-1])
0x913: Pop(0)
0x914: Push("battle")
0x915: PushEmpty(object)
0x916: Call2 0x8ba

0x917: Pop(0)
0x918: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x919: Pop(2)
0x91a: Return(); Pop(2)

0x91b: Stack[-1] = 0
0x91c: PushEmpty(object, object)
0x91d: PushEmpty(object)
0x91e: Call2 0x9b5

0x91f: Stack[-2] = Stack[-1]
0x920: Pop(1)
0x921: Push("b9q03DobermanGotoFollower")
0x922: Push("pt_b9q03_follower")
0x923: Push((int) 0)
0x924: Push((int) 530343)
0x925: PushEmpty(float)
0x926: Call2 0x903

0x927: Pop(0)
0x928: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x929: Pop(5)
0x92a: PushEmpty()
0x92b: Call2 0x97f

0x92c: Pop(0)
0x92d: PushEmpty(bool, string, string)
0x92e: Stack[-2] = "quest_b9_03"
0x92f: Stack[-1] = "doberman_attack"
0x930: Call2 0x8f7

0x931: Pop(3)
0x932: PushEmpty(object, string, float)
0x933: PushEmpty(object)
0x934: Call2 0x9b5

0x935: Stack[-4] = Stack[-1]
0x936: Pop(1)
0x937: Stack[-2] = "pt_b9q03_follower"
0x938: Stack[-1] = (int) 2
0x939: Call2 0x9c6

0x93a: Pop(3)
0x93b: PushEmpty(object)
0x93c: Call2 0x9b5

0x93d: Pop(0)
0x93e: @@ ShowMap(Stack[-1])
0x93f: Pop(1)
0x940: Return(); Pop(2)

0x941: Stack[-1] = 0
0x942: PushEmpty()
0x943: Push("oob9DobermanSpi4ka1_1")
0x944: Push((int) 1)
0x945: @ SetVariable(Stack[-2], Stack[-1])
0x946: Pop(2)
0x947: Return(); Pop(0)

0x948: PushEmpty(object, object)
0x949: PushEmpty(object)
0x94a: Call2 0x9b5

0x94b: Stack[-2] = Stack[-1]
0x94c: Pop(1)
0x94d: Push("b9q03DobermanGotoFollower")
0x94e: Push("pt_b9q03_follower")
0x94f: Push((int) 0)
0x950: Push((int) 530343)
0x951: PushEmpty(float)
0x952: Call2 0x903

0x953: Pop(0)
0x954: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x955: Pop(5)
0x956: PushEmpty()
0x957: Call2 0x97f

0x958: Pop(0)
0x959: PushEmpty(bool, string, string)
0x95a: Stack[-2] = "quest_b9_03"
0x95b: Stack[-1] = "place_follower"
0x95c: Call2 0x8f7

0x95d: Pop(3)
0x95e: PushEmpty(bool, string, string)
0x95f: Stack[-2] = "quest_b9_03"
0x960: Stack[-1] = "init_bonefires"
0x961: Call2 0x8f7

0x962: Pop(3)
0x963: PushEmpty(object, string, float)
0x964: PushEmpty(object)
0x965: Call2 0x9b5

0x966: Stack[-4] = Stack[-1]
0x967: Pop(1)
0x968: Stack[-2] = "pt_b9q03_follower"
0x969: Stack[-1] = (int) 2
0x96a: Call2 0x9c6

0x96b: Pop(3)
0x96c: PushEmpty(object)
0x96d: Call2 0x9b5

0x96e: Pop(0)
0x96f: @@ ShowMap(Stack[-1])
0x970: Pop(1)
0x971: Return(); Pop(2)

0x972: Stack[-1] = 0
0x973: PushEmpty()
0x974: PushEmpty(int, string)
0x975: Stack[-1] = "oob9DobermanSpi4ka1_1"
0x976: Call2 0x8e1

0x977: Pop(1)
0x978: Push((int) 0)
0x979: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x97a: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x97b: Stack[-2] = (bool) 1
0x97c: Return(); Pop(0)

0x97d: Stack[-2] = (bool) 0
0x97e: Return(); Pop(0)

0x97f: PushEmpty(object, object)
0x980: Push((int) 542)
0x981: Push((int) 2)
0x982: Push((int) 530354)
0x983: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x984: Pop(3)
0x985: PushEmpty(bool, object, int)
0x986: Stack[-2] = Stack[-4]
0x987: Stack[-1] = (int) 532
0x988: Call2 0x999

0x989: Pop(3)
0x98a: Return(); Pop(2)

0x98b: Stack[-1] = 0
0x98c: PushEmpty(object, object)
0x98d: @ GetDiaryRoot(Stack[-1])
0x98e: Pop(0)
0x98f: Pop(0); Push((bool) Stack[-1] == 0)
0x990: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x991: Push("Can't retrieve diary root")
0x992: @ Trace(Stack[-1])
0x993: Pop(1)
0x994: Stack[-3] = (bool) 0
0x995: Return(); Pop(2)

0x996: Stack[-3] = Stack[-1]
0x997: Return(); Pop(2)

0x998: Stack[-1] = 0
0x999: PushEmpty(object, object, int, object, object, int)
0x99a: PushEmpty(object)
0x99b: Call2 0x98c

0x99c: Stack[-4] = Stack[-1]
0x99d: Pop(1)
0x99e: @@ Find(Stack[-7], Stack[-2])
0x99f: Pop(0)
0x9a0: Pop(0); Push((bool) Stack[-2] == 0)
0x9a1: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x9a2: Push("Can't find diary parent with id: ")
0x9a3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x9a4: @ Trace(Stack[-1])
0x9a5: Pop(1)
0x9a6: Stack[-9] = (bool) 0
0x9a7: Return(); Pop(6)

0x9a8: @@ AddChild(Stack[-8])
0x9a9: Pop(0)
0x9aa: Push((int) 7)
0x9ab: @ SendWorldWndMessage(Stack[-1])
0x9ac: Pop(1)
0x9ad: @@ GetCategory(Stack[-1])
0x9ae: Pop(0)
0x9af: @ SetDiarySection(Stack[-1])
0x9b0: Pop(0)
0x9b1: Stack[-9] = (bool) 0
0x9b2: Return(); Pop(6)

0x9b3: Stack[-2] = 0
0x9b4: Stack[-3] = 0
0x9b5: PushEmpty(object, object, object, object)
0x9b6: @ GetMainOutdoorScene(Stack[-2])
0x9b7: Pop(0)
0x9b8: Pop(0); Push((bool) Stack[-2] == 0)
0x9b9: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9ba: Push("Can't find main outdoor scene")
0x9bb: @ Trace(Stack[-1])
0x9bc: Pop(1)
0x9bd: Stack[-1] = 0
0x9be: Stack[-5] = Stack[-1]
0x9bf: Return(); Pop(4)

0x9c0: @@ GetMap(Stack[-1])
0x9c1: Pop(0)
0x9c2: Stack[-5] = Stack[-1]
0x9c3: Return(); Pop(4)

0x9c4: Stack[-1] = 0
0x9c5: Stack[-2] = 0
0x9c6: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x9c7: @ GetMainOutdoorScene(Stack[-2])
0x9c8: Pop(0)
0x9c9: Pop(0); Push((bool) Stack[-2] == 0)
0x9ca: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9cb: Push("Can't find main outdoor scene")
0x9cc: @ Trace(Stack[-1])
0x9cd: Pop(1)
0x9ce: Return(); Pop(8)

0x9cf: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x9d0: Pop(0)
0x9d1: Pop(0); Push((bool) Stack[-1] == 0)
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d9; Pop(1)

0x9d3: Push("Warning: outdoor scene locator ")
0x9d4: Pop(1); Push(Stack[-1] + Stack[-11]);
0x9d5: Push(" doesnt exist")
0x9d6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9d7: @ Trace(Stack[-1])
0x9d8: Pop(1)
0x9d9: @@ GetMap(Stack[-11])
0x9da: Pop(0)
0x9db: Pop(0); Push((bool) Stack[-11] == 0)
0x9dc: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9dd: Push("Can't find map")
0x9de: @ Trace(Stack[-1])
0x9df: Pop(1)
0x9e0: Return(); Pop(8)

0x9e1: Push(CvectorIndex(Stack[-4], 0))
0x9e2: Push(CvectorIndex(Stack[-5], 2))
0x9e3: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x9e4: Pop(2)
0x9e5: Return(); Pop(8)

0x9e6: Stack[-2] = 0
0x9e7: PushEmpty()
0x9e8: PushEmpty(int)
0x9e9: Call2 0xa2e

0x9ea: Pop(0)
0x9eb: Push((int) 1)
0x9ec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9ed: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9ee: @ WorkWithCorpse(Stack[-1])
0x9ef: Pop(0)
0x9f0: GOTO 0x9f3

0x9f1: @ Barter(Stack[-1])
0x9f2: Pop(0)
0x9f3: Return(); Pop(0)

0x9f4: PushEmpty(object, int, bool, object, int, bool)
0x9f5: @ CreateInvItem(Stack[-3])
0x9f6: Pop(0)
0x9f7: @@ SetItemName(Stack[-7])
0x9f8: Pop(0)
0x9f9: Push("Organ")
0x9fa: Push((int) 1)
0x9fb: @@ SetProperty(Stack[-2], Stack[-1])
0x9fc: Pop(2)
0x9fd: @@ GetItemID(Stack[-2])
0x9fe: Pop(0)
0x9ff: Push((int) 0)
0xa00: Push((int) 1)
0xa01: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xa02: Pop(2)
0xa03: Return(); Pop(6)

0xa04: Stack[-3] = 0
0xa05: PushEmpty(int)
0xa06: Call2 0xa2e

0xa07: Pop(0)
0xa08: Push((int) 1)
0xa09: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xa0a: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa0b: Return(); Pop(0)

0xa0c: PushEmpty(string)
0xa0d: Stack[-1] = "liver"
0xa0e: Call2 0x9f4

0xa0f: Pop(1)
0xa10: PushEmpty(string)
0xa11: Stack[-1] = "kidney"
0xa12: Call2 0x9f4

0xa13: Pop(1)
0xa14: PushEmpty(string)
0xa15: Stack[-1] = "heart"
0xa16: Call2 0x9f4

0xa17: Pop(1)
0xa18: PushEmpty(string)
0xa19: Stack[-1] = "blood"
0xa1a: Call2 0x9f4

0xa1b: Pop(1)
0xa1c: Return(); Pop(0)

0xa1d: PushEmpty(int, int)
0xa1e: Push("branch")
0xa1f: @ GetVariable(Stack[-1], Stack[-2])
0xa20: Pop(1)
0xa21: Push((int) 0)
0xa22: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa23: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa24: Stack[-3] = (int) 1
0xa25: Return(); Pop(2)

0xa26: GOTO 0xa2c

0xa27: Push((int) 1)
0xa28: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa29: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa2a: Stack[-3] = (int) 2
0xa2b: Return(); Pop(2)

0xa2c: Stack[-3] = (int) 3
0xa2d: Return(); Pop(2)

0xa2e: PushEmpty(int, int)
0xa2f: Push("branch")
0xa30: @ GetVariable(Stack[-1], Stack[-2])
0xa31: Pop(1)
0xa32: Stack[-3] = Stack[-1]
0xa33: Return(); Pop(2)

0xa34: PushEmpty(string, string)
0xa35: Stack[-1] = "idle"
0xa36: Push(Stack[-3])
0xa37: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa38: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa39: Stack[-4] = Stack[-1]
0xa3a: Return(); Pop(2)

0xa3b: PushEmpty(int, bool, int, bool)
0xa3c: Stack[-2] = (int) 0
0xa3d: Push("all")
0xa3e: PushEmpty(string, int)
0xa3f: Stack[-1] = Stack[-5]
0xa40: Call2 0xa34

0xa41: Pop(1)
0xa42: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa43: Pop(2)
0xa44: Pop(0); Push((bool) Stack[-1] == 0)
0xa45: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa46: GOTO 0xa4a

0xa47: Push((int) 1)
0xa48: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa49: GOTO 0xa3d

0xa4a: Stack[-5] = Stack[-2]
0xa4b: Return(); Pop(4)

0xa4c: Stack[-1] = (int) 518097
0xa4d: Return(); Pop(0)

0xa4e: Stack[-1] = (int) 518096
0xa4f: Return(); Pop(0)

0xa50: Stack[-1] = "ui/NPC_Citizen2.png"
0xa51: Return(); Pop(0)

0xa52: Stack[-1] = "ui/NPC_Citizen2_b.png"
0xa53: Return(); Pop(0)

0xa54: Stack[-1] = (bool) 0
0xa55: Return(); Pop(0)

0xa56: PushEmpty()
0xa57: PushEmpty(bool, string, string)
0xa58: Stack[-2] = "quest_b9_03"
0xa59: Stack[-1] = "doberman_dead"
0xa5a: Call2 0x8f7

0xa5b: Pop(3)
0xa5c: PushEmpty(object)
0xa5d: Stack[-1] = Stack[-2]
0xa5e: Push(-1, 0); TaskCall(5)
0xa5f: Call2 0x60a

0xa60: Pop(-1, 0); TaskReturn
0xa61: Pop(1)
0xa62: Return(); Pop(0)

0xa63: PushEmpty()
0xa64: PushEmpty(object, int, float)
0xa65: Stack[-3] = Stack[-7]
0xa66: Stack[-2] = Stack[-6]
0xa67: Stack[-1] = Stack[-5]
0xa68: Call2 0x798

0xa69: Pop(3)
0xa6a: Return(); Pop(0)

0xa6b: PushEmpty()
0xa6c: PushEmpty(object, int, float, cvector, cvector)
0xa6d: Stack[-5] = Stack[-11]
0xa6e: Stack[-4] = Stack[-10]
0xa6f: Stack[-3] = Stack[-9]
0xa70: Stack[-2] = Stack[-7]
0xa71: Stack[-1] = Stack[-6]
0xa72: Call2 0x7dc

0xa73: Pop(5)
0xa74: Return(); Pop(0)

0xa75: PushEmpty(float, float)
0xa76: Push("health")
0xa77: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa78: IF (Stack[-1] == 0) GOTO 0xa81; Pop(1)

0xa79: Push("health")
0xa7a: @ GetProperty(Stack[-1], Stack[-2])
0xa7b: Pop(1)
0xa7c: Push((int) 0)
0xa7d: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xa7e: IF (Stack[-1] == 0) GOTO 0xa81; Pop(1)

0xa7f: @ SignalDeath(Stack[-4])
0xa80: Pop(0)
0xa81: Return(); Pop(2)

0xa82: PushEmpty()
0xa83: PushEmpty(object)
0xa84: Stack[-1] = Stack[-2]
0xa85: Call2 0xa56

0xa86: Pop(1)
0xa87: Return(); Pop(0)

0xa88: PushEmpty()
0xa89: PushEmpty(int, object)
0xa8a: Stack[-1] = Stack[-3]
0xa8b: Push(-2, 1); TaskCall(0)
0xa8c: Call2 0x0

0xa8d: Pop(-2, 1); TaskReturn
0xa8e: Pop(2)
0xa8f: Return(); Pop(0)

