GlobalVarCount = 3
	G_VAR_0 bool 
	G_VAR_1 object 
	G_VAR_2 bool 

Strings:
	all
	aattack_begin1
	aattack_end1
	knife
	scripted
	grabitel_knife.xml
	Owner
	SetScriptProperty
	Target
	GetPosition
	GetEyesHeight
	StartDirection
	kill
	attack_off
	@GetAttackDistance
	GetAttackDistance
	attack
	GetPFPosition
	attack_on
	attack_stay
	fjump
	attack_begin
	bjump
	attack_middle
	_
	attack_end
	IsAttacking
	IsAttacking
	head
	walk
	run
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
	idle
	quest_b3_02
	grabitel_attack
	fdie
	bdie
	GetScriptProperty
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	fire
	bullet
	phys
	player
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	health
	armor
	armor_
	IsDead
	IsDead
	GetScene
	noaccess
	fhit
	bhit
	hit_react
	add
	size
	get
	blood_dir.xml
	Can't find lsh animation : 
	reputation
	battle
	god_mode
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	b3q02GrabitelTalk
	b3q02
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
	Knife
	lockpick
	grabitel_mark
	RemoveStationaryActor
	grabitel_dead

Import:
	Face (1 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAsync (0 args)
	GetScene (1 args)
	GetGeometryLocator (3 args)
	AddActorByType (6 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	rand (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	Sleep (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	irand (2 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	FindDirLength (3 args)
	Speak (1 args)
	SetTimer (2 args)
	CanSee (2 args)
	UnlookAsync (1 args)
	KillTimer (1 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	FindActor (2 args)
	Rotate (3 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	SetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x620
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 2
		EVENT_17 Op = 0x6b Vars = (object)
		EVENT_30 Op = 0x71 Vars = (object, object, bool)
		EVENT_26 Op = 0x78 Vars = (string)
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0xb6 Vars = (object)
		EVENT_30 Op = 0xbc Vars = (object, object, bool)
		EVENT_26 Op = 0xc3 Vars = (string)
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0x35f Vars = (object)
		EVENT_30 Op = 0x365 Vars = (object, object, bool)
		EVENT_26 Op = 0x36c Vars = (string)
		EVENT_7 Op = 0x3a8 Vars = (int)
		EVENT_1 Op = 0x3c3 Vars = (object)
		EVENT_2 Op = 0x3d2 Vars = (object)
		EVENT_10 Op = 0x458 Vars = (object)
		EVENT_41 Op = 0x463 Vars = (object)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x53a Vars = (int, int)
	GTASK_5  Params = 0
		EVENT_0 Op = 0x628 Vars = (object)
		EVENT_17 Op = 0x633 Vars = (object)
		EVENT_26 Op = 0x63a Vars = (string)
	GTASK_6  Params = 0
	GTASK_7  Params = 1
		EVENT_0 Op = 0x6e9 Vars = (object)
		EVENT_22 Op = 0x768 Vars = (object, int, float, float)
		EVENT_16 Op = 0x76a Vars = (object, string)
		EVENT_41 Op = 0x76c Vars = (object)

Events:
EVENT_22 Op = 0xb72 Vars = (object, int, float, float)
EVENT_43 Op = 0xb7a Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xb84 Vars = (object, string)
EVENT_41 Op = 0xb91 Vars = (object)

0x0: PushEmpty(object, cvector, bool, object, cvector, float, cvector, object, cvector, bool, object, cvector, float, cvector)
0x1: PushEmpty(object)
0x2: Stack[-1] = Stack[-16]
0x3: Call2 0xa4c

0x4: Pop(1)
0x5: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x6: PushEmpty(bool, object)
0x7: Stack[-1] = Stack[-17]
0x8: Call2 0x86c

0x9: Pop(2)
0xa: PushEmpty(bool, object)
0xb: Stack[-1] = Stack[-17]
0xc: Call2 0x84a

0xd: Pop(1)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-16] = (bool) 0
0x11: Return(); Pop(14)

0x12: PushEmpty()
0x13: Call2 0xa55

0x14: Pop(0)
0x15: @ Face(Stack[-15])
0x16: Pop(0)
0x17: Push("all")
0x18: Push("aattack_begin1")
0x19: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a: Pop(2)
0x1b: @ WaitForAnimEnd()
0x1c: Pop(0)
0x1d: PushEmpty(bool, object)
0x1e: Stack[-1] = Stack[-17]
0x1f: Call2 0x84a

0x20: Pop(1)
0x21: Pop(1); Push((bool) Stack[-1] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: @ StopAsync()
0x24: Pop(0)
0x25: Stack[-16] = (bool) 0
0x26: Return(); Pop(14)

0x27: Push("all")
0x28: Push("aattack_end1")
0x29: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a: Pop(2)
0x2b: @ GetScene(Stack[-7])
0x2c: Pop(0)
0x2d: Push("knife")
0x2e: @ GetGeometryLocator(Stack[-1], Stack[-6], Stack[-7])
0x2f: Pop(1)
0x30: Push("scripted")
0x31: Push(CVector(0.0, 0.0, 1.0))
0x32: Push("grabitel_knife.xml")
0x33: @ AddActorByType(Stack[-7], Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1])
0x34: Pop(3)
0x35: Push("Owner")
0x36: PushEmpty(object)
0x37: Call2 0x9bd

0x38: Pop(0)
0x39: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x3a: Pop(2)
0x3b: Push("Target")
0x3c: @@ SetScriptProperty(Stack[-1], Stack[-16])
0x3d: Pop(1)
0x3e: @@ GetPosition(Stack[-3])
0x3f: Pop(0)
0x40: @@ GetEyesHeight(Stack[-2])
0x41: Pop(0)
0x42: Push(CvectorIndex(Stack[-3], 1))
0x43: Push((int) 10)
0x44: Pop(1); Push(Stack[-4] - Stack[-1]);
0x45: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x46: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x47: PushEmpty(cvector, cvector, cvector, float)
0x48: Stack[-3] = Stack[-10]
0x49: Stack[-2] = Stack[-7]
0x4a: Stack[-1] = (float) 2000.0
0x4b: Call2 0xa66

0x4c: Stack[-5] = Stack[-4]
0x4d: Pop(4)
0x4e: Push("StartDirection")
0x4f: @@ SetScriptProperty(Stack[-1], Stack[-2])
0x50: Pop(1)
0x51: @ WaitForAnimEnd()
0x52: Pop(0)
0x53: @ StopAsync()
0x54: Pop(0)
0x55: Push( Stack[0 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Stack[-16] = (bool) 1
0x58: Return(); Pop(14)

0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[-17]
0x5b: Call2 0x84a

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5f: Stack[-16] = (bool) 0
0x60: Return(); Pop(14)

0x61: PushEmpty(bool, object)
0x62: Stack[-1] = Stack[-17]
0x63: Push(-2, 6); TaskCall(1)
0x64: Call2 0x7e

0x65: Pop(-2, 6); TaskReturn
0x66: Stack[-18] = Stack[-2]
0x67: Pop(2)
0x68: Return(); Pop(14)

0x69: Stack[-4] = 0
0x6a: Stack[-7] = 0
0x6b: PushEmpty()
0x6c: PushEmpty(object)
0x6d: Stack[-1] = Stack[-2]
0x6e: Call2 0xb97

0x6f: Pop(1)
0x70: Return(); Pop(0)

0x71: PushEmpty()
0x72: PushEmpty(bool, object, object)
0x73: Stack[-2] = Stack[-6]
0x74: Stack[-1] = Stack[-5]
0x75: Call2 0xb99

0x76: Pop(3)
0x77: Return(); Pop(0)

0x78: PushEmpty()
0x79: Push("kill")
0x7a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x7d: Return(); Pop(0)

0x7e: PushEmpty()
0x7f: Push(GlobalVars[0])
0x80: Stack[-1] = (bool) 0
0x81: GlobalVars[0] = Stack[-1]; Pop(1)
0x82: PushEmpty(object, bool, float)
0x83: Stack[-3] = Stack[-4]
0x84: Stack[-2] = (bool) 1
0x85: Stack[-1] = (float) 200.0
0x86: Call2 0xcb

0x87: Pop(3)
0x88: PushEmpty(bool)
0x89: Stack[-1] = (bool) 0
0x8a: Push(GlobalVars[0])
0x8b: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: Stack[-1] = (bool) 1
0x8f: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x90: Push("all")
0x91: Push("attack_off")
0x92: @ PlayAnimation(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: @ WaitForAnimEnd()
0x95: Pop(0)
0x96: Push(GlobalVars[0])
0x97: Stack[-3] = Stack[-1]
0x98: Pop(1)
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Stack[-3] = (float) 0.15
0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: Stack[-3] = (int) 0
0x9f: Return(); Pop(0)

0xa0: Stack[-1] = (int) 1
0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Stack[-1] = (bool) 0
0xa5: Push((int) 0)
0xa6: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa8: PushEmpty(bool, object)
0xa9: Stack[-1] = Stack[-5]
0xaa: Call2 0x802

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Stack[-1] = (bool) 1
0xae: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaf: Push(GlobalVars[0])
0xb0: Stack[-1] = (bool) 1
0xb1: GlobalVars[0] = Stack[-1]; Pop(1)
0xb2: PushEmpty()
0xb3: Call2 0x283

0xb4: Pop(0)
0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: PushEmpty(object)
0xb8: Stack[-1] = Stack[-2]
0xb9: Call2 0xb97

0xba: Pop(1)
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: PushEmpty(bool, object, object)
0xbe: Stack[-2] = Stack[-6]
0xbf: Stack[-1] = Stack[-5]
0xc0: Call2 0xb99

0xc1: Pop(3)
0xc2: Return(); Pop(0)

0xc3: PushEmpty()
0xc4: Push("kill")
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc7: Push(GlobalVars[0])
0xc8: Stack[-1] = (bool) 1
0xc9: GlobalVars[0] = Stack[-1]; Pop(1)
0xca: Return(); Pop(0)

0xcb: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xcc: PushEmpty()
0xcd: Call2 0x1b0

0xce: Pop(0)
0xcf: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xd0: Push("@GetAttackDistance")
0xd1: Push((int) 1)
0xd2: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xd3: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd4: @@ GetAttackDistance(Stack[-11])
0xd5: Pop(0)
0xd6: Push((int) 50)
0xd7: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xd8: GOTO 0xda

0xd9: Stack[-11] = Stack[-23]
0xda: Push((int) 150)
0xdb: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Stack[-11] = (int) 150
0xde: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xdf: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xe0: @ IsPlayerActor(Stack[-0], Stack[-8])
0xe1: Pop(0)
0xe2: Push(Stack[-8])
0xe3: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe4: Push("attack")
0xe5: @ PlayGlobalMusic(Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(object)
0xe8: Call2 0x9bd

0xe9: Pop(0)
0xea: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xeb: Pop(1)
0xec: Push(Stack[-24])
0xed: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xee: Stack[-7] = (bool) 0
0xef: GOTO 0xf1

0xf0: Stack[-7] = (bool) 1
0xf1: Push((float)300.0)
0xf2: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xf3: PushEmpty(bool)
0xf4: Stack[-1] = (bool) 0
0xf5: PushEmpty(bool, object)
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0x84a

0xf8: Pop(1)
0xf9: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfa: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xfb: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfc: Stack[-1] = (bool) 1
0xfd: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0xfe: PushEmpty()
0xff: Call2 0x34f

0x100: Pop(0)
0x101: @@ GetPFPosition(Stack[-10])
0x102: Pop(0)
0x103: @ GetPFPosition(Stack[-9])
0x104: Pop(0)
0x105: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x106: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x107: Pop(0); Push(Stack[-6] * Stack[-6]);
0x108: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10a: PushEmpty(bool, object, float, float, bool, bool)
0x10b: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Stack[-4] = Stack[-17]
0x10d: Stack[-3] = (float) 3000.0
0x10e: Stack[-2] = (bool) 1
0x10f: Stack[-1] = (bool) 0
0x110: Push(-6, 3); TaskCall(2)
0x111: Call2 0x377

0x112: Pop(-6, 3); TaskReturn
0x113: Pop(5)
0x114: Pop(1); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: GOTO 0x19f

0x117: Stack[-7] = (bool) 0
0x118: GOTO 0x19e

0x119: Pop(0); Push(Stack[-23] * Stack[-23]);
0x11a: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x11c: @@ GetPFPosition(Stack[-3])
0x11d: Pop(0)
0x11e: @ CanReachByPF(Stack[-2], Stack[-3])
0x11f: Pop(0)
0x120: Pop(0); Push((bool) Stack[-2] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(bool, object, float, float, bool, bool)
0x123: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x124: Stack[-4] = Stack[-17]
0x125: Stack[-3] = (float) 3000.0
0x126: Stack[-2] = (bool) 1
0x127: Stack[-1] = (bool) 0
0x128: Push(-6, 3); TaskCall(2)
0x129: Call2 0x377

0x12a: Pop(-6, 3); TaskReturn
0x12b: Pop(5)
0x12c: Pop(1); Push((bool) Stack[-1] == 0)
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: GOTO 0x19f

0x12f: Stack[-7] = (bool) 0
0x130: GOTO 0xf3

0x131: Pop(0); Push((bool) Stack[-7] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x133: PushEmpty(object)
0x134: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x135: Call2 0x8f3

0x136: Pop(1)
0x137: Push("all")
0x138: Push("attack_on")
0x139: @ PlayAnimation(Stack[-2], Stack[-1])
0x13a: Pop(2)
0x13b: @ WaitForAnimEnd()
0x13c: Pop(0)
0x13d: PushEmpty()
0x13e: Call2 0x34f

0x13f: Pop(0)
0x140: @ StopAsync()
0x141: Pop(0)
0x142: Stack[-7] = (bool) 1
0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x145: Call2 0x84a

0x146: Pop(1)
0x147: Pop(1); Push((bool) Stack[-1] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: GOTO 0x19f

0x14a: @ rand(Stack[-1])
0x14b: Pop(0)
0x14c: PushEmpty(bool)
0x14d: Stack[-1] = (bool) 1
0x14e: Push((float)0.2)
0x14f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: PushEmpty(bool)
0x152: Call2 0x324

0x153: Pop(0)
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: Stack[-1] = (bool) 0
0x156: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x157: @ Face(Stack[-0])
0x158: Pop(0)
0x159: PushEmpty()
0x15a: Call2 0x354

0x15b: Pop(0)
0x15c: Push("all")
0x15d: Push("attack_stay")
0x15e: @ PlayAnimation(Stack[-2], Stack[-1])
0x15f: Pop(2)
0x160: PushEmpty(bool, float)
0x161: Stack[-1] = Stack[-25]
0x162: Call2 0x2a0

0x163: Pop(2)
0x164: @ StopAsync()
0x165: Pop(0)
0x166: GOTO 0x195

0x167: @ Face(Stack[-0])
0x168: Pop(0)
0x169: Push("all")
0x16a: Push("fjump")
0x16b: @ PlayAnimation(Stack[-2], Stack[-1])
0x16c: Pop(2)
0x16d: @ WaitForAnimEnd()
0x16e: Pop(0)
0x16f: PushEmpty()
0x170: Call2 0x34f

0x171: Pop(0)
0x172: Push(CVector(0.0, 0.0, 0.0))
0x173: @ SetSpeed(Stack[-1])
0x174: Pop(1)
0x175: @ Stop()
0x176: Pop(0)
0x177: @ StopAsync()
0x178: Pop(0)
0x179: PushEmpty(bool)
0x17a: Call2 0x324

0x17b: Pop(0)
0x17c: Pop(1); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x17e: PushEmpty(bool, object)
0x17f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x180: Call2 0x84a

0x181: Pop(1)
0x182: Pop(1); Push((bool) Stack[-1] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: GOTO 0x19f

0x185: @@ GetPFPosition(Stack[-10])
0x186: Pop(0)
0x187: @ GetPFPosition(Stack[-9])
0x188: Pop(0)
0x189: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x18a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x18b: Pop(0); Push(Stack[-23] * Stack[-23]);
0x18c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x18e: PushEmpty(bool, float)
0x18f: Stack[-1] = Stack[-25]
0x190: Call2 0x1fa

0x191: Pop(1)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: GOTO 0x19f

0x195: GOTO 0x19e

0x196: PushEmpty(bool, float)
0x197: Stack[-1] = Stack[-25]
0x198: Call2 0x1fa

0x199: Pop(1)
0x19a: Pop(1); Push((bool) Stack[-1] == 0)
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: GOTO 0x19f

0x19d: Stack[-7] = (bool) 1
0x19e: GOTO 0xf3

0x19f: @ WaitForAnimEnd()
0x1a0: Pop(0)
0x1a1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: Return(); Pop(22)

0x1a4: Push("all")
0x1a5: Push("attack_off")
0x1a6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a7: Pop(2)
0x1a8: @ WaitForAnimEnd()
0x1a9: Pop(0)
0x1aa: Push(Stack[-8])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ac: Push((float)2.0)
0x1ad: @ Sleep(Stack[-1])
0x1ae: Pop(1)
0x1af: Return(); Pop(22)

0x1b0: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x1b1: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1b2: Push("all")
0x1b3: Push("attack_begin")
0x1b4: Push((int) 1)
0x1b5: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x1b6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b7: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1b8: Pop(2)
0x1b9: Pop(0); Push((bool) Stack[-3] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: GOTO 0x1bf

0x1bc: Push((int) 1)
0x1bd: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1be: GOTO 0x1b2

0x1bf: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1c0: Push("attack")
0x1c1: Push((int) 1)
0x1c2: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1c3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1c4: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x1c5: Pop(1)
0x1c6: Pop(0); Push((bool) Stack[-2] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: GOTO 0x1cc

0x1c9: Push((int) 1)
0x1ca: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1cb: GOTO 0x1c0

0x1cc: Push("all")
0x1cd: Push("bjump")
0x1ce: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(2)
0x1d0: Push(CvectorIndex(Stack[-1], 2))
0x1d1: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1d2: Return(); Pop(6)

0x1d3: PushEmpty(object, float, float, object, float, float)
0x1d4: Push((float)0.9)
0x1d5: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1d6: @ GetVictim(Stack[-1], Stack[-4])
0x1d7: Pop(1)
0x1d8: @ ReportAttack(Stack[-0])
0x1d9: Pop(0)
0x1da: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1db: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1dc: PushEmpty(float, object, int)
0x1dd: Stack[-2] = Stack[-6]
0x1de: Stack[-1] = Stack[-10]
0x1df: Call2 0x9a

0x1e0: Stack[-5] = Stack[-3]
0x1e1: Pop(3)
0x1e2: PushEmpty(float, object, float, int)
0x1e3: Stack[-3] = Stack[-7]
0x1e4: Stack[-2] = Stack[-6]
0x1e5: PushEmpty(int, object, int)
0x1e6: Stack[-2] = Stack[-10]
0x1e7: Stack[-1] = Stack[-14]
0x1e8: Call2 0x9d

0x1e9: Stack[-4] = Stack[-3]
0x1ea: Pop(3)
0x1eb: Call2 0x7b9

0x1ec: Stack[-5] = Stack[-4]
0x1ed: Pop(4)
0x1ee: PushEmpty(int)
0x1ef: Call2 0xa0

0x1f0: Pop(0)
0x1f1: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x1f2: Pop(1)
0x1f3: PushEmpty(object, float)
0x1f4: Stack[-2] = Stack[-5]
0x1f5: Stack[-1] = Stack[-3]
0x1f6: Call2 0xa2

0x1f7: Pop(2)
0x1f8: Return(); Pop(6)

0x1f9: Stack[-3] = 0
0x1fa: PushEmpty(int, bool, int, string, int, bool, int, string)
0x1fb: PushEmpty()
0x1fc: Call2 0x34f

0x1fd: Pop(0)
0x1fe: @ irand(Stack[-4], Stack[-1])
0x1ff: Pop(0)
0x200: Push((int) 1)
0x201: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x202: @ Face(Stack[-0])
0x203: Pop(0)
0x204: Push((bool) 1)
0x205: @ SetAttackState(Stack[-1])
0x206: Pop(1)
0x207: PushEmpty()
0x208: Call2 0xa55

0x209: Pop(0)
0x20a: Push("all")
0x20b: Push("attack_begin")
0x20c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x20d: @ PlayAnimation(Stack[-2], Stack[-1])
0x20e: Pop(2)
0x20f: @ WaitForAnimEnd()
0x210: Pop(0)
0x211: PushEmpty()
0x212: Call2 0x32f

0x213: Pop(0)
0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x216: Call2 0x84a

0x217: Pop(1)
0x218: Pop(1); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21a: @ StopAsync()
0x21b: Pop(0)
0x21c: Stack[-10] = (bool) 0
0x21d: Return(); Pop(8)

0x21e: PushEmpty(float, int)
0x21f: Stack[-2] = Stack[-11]
0x220: Stack[-1] = Stack[-6]
0x221: Call2 0x1d3

0x222: Pop(2)
0x223: Push("all")
0x224: Push("attack_middle")
0x225: Pop(1); Push(Stack[-1] + Stack[-6]);
0x226: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x227: Pop(2)
0x228: Push(Stack[-3])
0x229: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x22a: PushEmpty()
0x22b: Call2 0xa55

0x22c: Pop(0)
0x22d: Push("all")
0x22e: Push("attack_middle")
0x22f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x230: @ PlayAnimation(Stack[-2], Stack[-1])
0x231: Pop(2)
0x232: @ WaitForAnimEnd()
0x233: Pop(0)
0x234: PushEmpty()
0x235: Call2 0x34f

0x236: Pop(0)
0x237: PushEmpty(bool, object)
0x238: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x239: Call2 0x84a

0x23a: Pop(1)
0x23b: Pop(1); Push((bool) Stack[-1] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23d: @ StopAsync()
0x23e: Pop(0)
0x23f: Stack[-10] = (bool) 0
0x240: Return(); Pop(8)

0x241: PushEmpty(float, int)
0x242: Stack[-2] = Stack[-11]
0x243: Stack[-1] = Stack[-6]
0x244: Call2 0x1d3

0x245: Pop(2)
0x246: Stack[-2] = (int) 1
0x247: Push("attack_middle")
0x248: Pop(1); Push(Stack[-1] + Stack[-5]);
0x249: Push("_")
0x24a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x24b: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x24c: Push("all")
0x24d: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x24e: Pop(1)
0x24f: Pop(0); Push((bool) Stack[-3] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: GOTO 0x26f

0x252: PushEmpty()
0x253: Call2 0xa55

0x254: Pop(0)
0x255: Push("all")
0x256: @ PlayAnimation(Stack[-1], Stack[-2])
0x257: Pop(1)
0x258: @ WaitForAnimEnd()
0x259: Pop(0)
0x25a: PushEmpty()
0x25b: Call2 0x34f

0x25c: Pop(0)
0x25d: PushEmpty(bool, object)
0x25e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25f: Call2 0x84a

0x260: Pop(1)
0x261: Pop(1); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x263: @ StopAsync()
0x264: Pop(0)
0x265: Stack[-10] = (bool) 0
0x266: Return(); Pop(8)

0x267: PushEmpty(float, int)
0x268: Stack[-2] = Stack[-11]
0x269: Stack[-1] = Stack[-6]
0x26a: Call2 0x1d3

0x26b: Pop(2)
0x26c: Push((int) 1)
0x26d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x26e: GOTO 0x247

0x26f: Push((bool) 0)
0x270: @ SetAttackState(Stack[-1])
0x271: Pop(1)
0x272: Push("all")
0x273: Push("attack_end")
0x274: Pop(1); Push(Stack[-1] + Stack[-6]);
0x275: @ PlayAnimation(Stack[-2], Stack[-1])
0x276: Pop(2)
0x277: PushEmpty(bool)
0x278: Call2 0x359

0x279: Pop(0)
0x27a: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27b: PushEmpty(bool, float)
0x27c: Stack[-1] = (float) 0.45
0x27d: Call2 0x285

0x27e: Pop(2)
0x27f: @ StopAsync()
0x280: Pop(0)
0x281: Stack[-10] = (bool) 1
0x282: Return(); Pop(8)

0x283: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x284: Return(); Pop(0)

0x285: PushEmpty(float, bool, float, bool)
0x286: @ rand(Stack[-2])
0x287: Pop(0)
0x288: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x289: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28a: @ IsAnimationPlaying(Stack[-1])
0x28b: Pop(0)
0x28c: Pop(0); Push((bool) Stack[-1] == 0)
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: GOTO 0x298

0x28f: PushEmpty(bool)
0x290: Call2 0x2e7

0x291: Pop(0)
0x292: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x293: Stack[-6] = (bool) 1
0x294: Return(); Pop(4)

0x295: @ sync()
0x296: Pop(0)
0x297: GOTO 0x28a

0x298: GOTO 0x29e

0x299: @ WaitForAnimEnd()
0x29a: Pop(0)
0x29b: PushEmpty()
0x29c: Call2 0x34f

0x29d: Pop(0)
0x29e: Stack[-6] = (bool) 0
0x29f: Return(); Pop(4)

0x2a0: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2a1: @ IsAnimationPlaying(Stack[-5])
0x2a2: Pop(0)
0x2a3: Pop(0); Push((bool) Stack[-5] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: GOTO 0x2c6

0x2a6: PushEmpty(bool)
0x2a7: Call2 0x2e7

0x2a8: Pop(0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2aa: Stack[-12] = (bool) 1
0x2ab: Return(); Pop(10)

0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ae: Call2 0x84a

0x2af: Pop(1)
0x2b0: Pop(1); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b2: Stack[-12] = (bool) 0
0x2b3: Return(); Pop(10)

0x2b4: @@ GetPFPosition(Stack[-4])
0x2b5: Pop(0)
0x2b6: @ GetPFPosition(Stack[-3])
0x2b7: Pop(0)
0x2b8: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x2b9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2ba: Pop(0); Push(Stack[-11] * Stack[-11]);
0x2bb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2bd: PushEmpty(bool, float)
0x2be: Stack[-1] = Stack[-13]
0x2bf: Call2 0x1fa

0x2c0: Pop(2)
0x2c1: Stack[-12] = (bool) 1
0x2c2: Return(); Pop(10)

0x2c3: @ sync()
0x2c4: Pop(0)
0x2c5: GOTO 0x2a1

0x2c6: PushEmpty()
0x2c7: Call2 0x34f

0x2c8: Pop(0)
0x2c9: Stack[-12] = (bool) 0
0x2ca: Return(); Pop(10)

0x2cb: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2cc: PushEmpty(bool, object)
0x2cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ce: Call2 0x84a

0x2cf: Pop(1)
0x2d0: Pop(1); Push((bool) Stack[-1] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: Stack[-11] = (bool) 0
0x2d3: Return(); Pop(10)

0x2d4: PushEmpty(bool)
0x2d5: Call2 0x324

0x2d6: Pop(0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2d8: @@ GetPFPosition(Stack[-5])
0x2d9: Pop(0)
0x2da: @ GetPFPosition(Stack[-4])
0x2db: Pop(0)
0x2dc: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2dd: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2de: @@ GetAttackDistance(Stack[-1])
0x2df: Pop(0)
0x2e0: Push((int) 50)
0x2e1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2e2: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2e3: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x2e4: Return(); Pop(10)

0x2e5: Stack[-11] = (bool) 0
0x2e6: Return(); Pop(10)

0x2e7: PushEmpty(bool)
0x2e8: Stack[-1] = (bool) 0
0x2e9: PushEmpty(bool)
0x2ea: Call2 0x2cb

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ed: PushEmpty(bool)
0x2ee: Call2 0x2f7

0x2ef: Pop(0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Stack[-1] = (bool) 1
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: Stack[-1] = (bool) 1
0x2f4: Return(); Pop(0)

0x2f5: Stack[-1] = (bool) 0
0x2f6: Return(); Pop(0)

0x2f7: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x2f8: @ GetScene(Stack[-5])
0x2f9: Pop(0)
0x2fa: Stack[-4] = (bool) 0
0x2fb: PushEmpty(cvector, object)
0x2fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fd: Call2 0x77c

0x2fe: Pop(1)
0x2ff: Pop(1); Push(( -Stack[-1])
0x300: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x301: Pop(1)
0x302: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: GOTO 0x321

0x305: @ Face(Stack[-0])
0x306: Pop(0)
0x307: Push("all")
0x308: Push("bjump")
0x309: @ PlayAnimation(Stack[-2], Stack[-1])
0x30a: Pop(2)
0x30b: @@ GetPFPosition(Stack[-2])
0x30c: Pop(0)
0x30d: @ GetPFPosition(Stack[-1])
0x30e: Pop(0)
0x30f: @ WaitForAnimEnd()
0x310: Pop(0)
0x311: PushEmpty()
0x312: Call2 0x34f

0x313: Pop(0)
0x314: @ StopAsync()
0x315: Pop(0)
0x316: Push(CVector(0.0, 0.0, 0.0))
0x317: @ SetSpeed(Stack[-1])
0x318: Pop(1)
0x319: Stack[-4] = (bool) 1
0x31a: PushEmpty(bool)
0x31b: Call2 0x2cb

0x31c: Pop(0)
0x31d: Pop(1); Push((bool) Stack[-1] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: GOTO 0x321

0x320: GOTO 0x2fb

0x321: Stack[-11] = Stack[-4]
0x322: Return(); Pop(10)

0x323: Stack[-5] = 0
0x324: PushEmpty(bool, bool)
0x325: Push("IsAttacking")
0x326: Push((int) 1)
0x327: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x328: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x329: @@ IsAttacking(Stack[-1])
0x32a: Pop(0)
0x32b: Stack[-3] = Stack[-1]
0x32c: Return(); Pop(2)

0x32d: Stack[-3] = (bool) 0
0x32e: Return(); Pop(2)

0x32f: PushEmpty(float, int, float, int)
0x330: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: Return(); Pop(4)

0x333: Push( Stack[5 + Tasks[-1].StackPointer] )
0x334: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x335: Push((int) -1)
0x336: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x337: Push((int) 0)
0x338: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x33a: Return(); Pop(4)

0x33b: @ rand(Stack[-2])
0x33c: Pop(0)
0x33d: PushEmpty(float)
0x33e: Call2 0x35d

0x33f: Pop(0)
0x340: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x342: @ irand(Stack[-1], Stack[-2])
0x343: Pop(0)
0x344: Push((int) 1)
0x345: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x346: Push("attack")
0x347: Pop(1); Push(Stack[-1] + Stack[-2]);
0x348: @ Speak(Stack[-1])
0x349: Pop(1)
0x34a: PushEmpty(int)
0x34b: Call2 0x35b

0x34c: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x34d: Pop(1)
0x34e: Return(); Pop(4)

0x34f: PushEmpty(object)
0x350: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x351: Call2 0xa4c

0x352: Pop(1)
0x353: Return(); Pop(0)

0x354: PushEmpty(string)
0x355: Stack[-1] = "attack_stay"
0x356: Call2 0x994

0x357: Pop(1)
0x358: Return(); Pop(0)

0x359: Stack[-1] = (bool) 1
0x35a: Return(); Pop(0)

0x35b: Stack[-1] = (int) 1
0x35c: Return(); Pop(0)

0x35d: Stack[-1] = (float) 0.5
0x35e: Return(); Pop(0)

0x35f: PushEmpty()
0x360: PushEmpty(object)
0x361: Stack[-1] = Stack[-2]
0x362: Call2 0xb97

0x363: Pop(1)
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: PushEmpty(bool, object, object)
0x367: Stack[-2] = Stack[-6]
0x368: Stack[-1] = Stack[-5]
0x369: Call2 0xb99

0x36a: Pop(3)
0x36b: Return(); Pop(0)

0x36c: PushEmpty()
0x36d: Push("kill")
0x36e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x370: Push(GlobalVars[0])
0x371: Stack[-1] = (bool) 1
0x372: GlobalVars[0] = Stack[-1]; Pop(1)
0x373: PushEmpty()
0x374: Call2 0x3b6

0x375: Pop(0)
0x376: Return(); Pop(0)

0x377: PushEmpty(bool, bool, bool, bool)
0x378: PushEmpty(object)
0x379: Stack[-1] = Stack[-10]
0x37a: Call2 0xa4c

0x37b: Pop(1)
0x37c: Push((int) 1)
0x37d: Push((int) 5)
0x37e: @ SetTimer(Stack[-2], Stack[-1])
0x37f: Pop(2)
0x380: @ CanSee(Stack[-2], Stack[-9])
0x381: Pop(0)
0x382: Push(Stack[-2])
0x383: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x384: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x385: PushEmpty(object)
0x386: Stack[-1] = Stack[-10]
0x387: Call2 0x977

0x388: Pop(1)
0x389: GOTO 0x38b

0x38a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x38b: PushEmpty(bool, object)
0x38c: Stack[-1] = Stack[-11]
0x38d: Call2 0x792

0x38e: Pop(1)
0x38f: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x390: PushEmpty(object)
0x391: Call2 0x9bd

0x392: Pop(0)
0x393: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x394: Pop(1)
0x395: PushEmpty(bool, object, float, float, bool, bool)
0x396: Stack[-5] = Stack[-15]
0x397: Stack[-4] = Stack[-14]
0x398: Stack[-3] = Stack[-13]
0x399: Stack[-2] = Stack[-12]
0x39a: Stack[-1] = Stack[-11]
0x39b: Call2 0x3e0

0x39c: Stack[-7] = Stack[-6]
0x39d: Pop(6)
0x39e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x39f: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a0: Push("head")
0x3a1: @ UnlookAsync(Stack[-1])
0x3a2: Pop(1)
0x3a3: Push((int) 1)
0x3a4: @ KillTimer(Stack[-1])
0x3a5: Pop(1)
0x3a6: Stack[-10] = Stack[-1]
0x3a7: Return(); Pop(4)

0x3a8: PushEmpty()
0x3a9: Push((int) 1)
0x3aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ac: PushEmpty(object)
0x3ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ae: Call2 0xa4c

0x3af: Pop(1)
0x3b0: GOTO 0x3b5

0x3b1: PushEmpty(int)
0x3b2: Stack[-1] = Stack[-2]
0x3b3: Call2 0x446

0x3b4: Pop(1)
0x3b5: Return(); Pop(0)

0x3b6: Push((int) 1)
0x3b7: @ KillTimer(Stack[-1])
0x3b8: Pop(1)
0x3b9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3bc: Push("head")
0x3bd: @ UnlookAsync(Stack[-1])
0x3be: Pop(1)
0x3bf: PushEmpty()
0x3c0: Call2 0x45c

0x3c1: Pop(0)
0x3c2: Return(); Pop(0)

0x3c3: PushEmpty()
0x3c4: PushEmpty(bool)
0x3c5: Stack[-1] = (bool) 0
0x3c6: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: Stack[-1] = (bool) 1
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3cd: PushEmpty(object)
0x3ce: Stack[-1] = Stack[-2]
0x3cf: Call2 0x977

0x3d0: Pop(1)
0x3d1: Return(); Pop(0)

0x3d2: PushEmpty()
0x3d3: PushEmpty(bool)
0x3d4: Stack[-1] = (bool) 0
0x3d5: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: Stack[-1] = (bool) 1
0x3da: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3db: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3dc: Push("head")
0x3dd: @ UnlookAsync(Stack[-1])
0x3de: Pop(1)
0x3df: Return(); Pop(0)

0x3e0: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3e1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3e2: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3e3: Stack[-7] = Stack[-17]
0x3e4: PushEmpty(bool, object)
0x3e5: Stack[-1] = Stack[-23]
0x3e6: Call2 0x46c

0x3e7: Pop(1)
0x3e8: Pop(1); Push((bool) Stack[-1] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: Stack[-22] = (bool) 0
0x3eb: Return(); Pop(16)

0x3ec: @@ GetPosition(Stack[-5])
0x3ed: Pop(0)
0x3ee: @ GetPosition(Stack[-4])
0x3ef: Pop(0)
0x3f0: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3f1: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3f2: PushEmpty(bool)
0x3f3: Stack[-1] = (bool) 0
0x3f4: Push((int) 0)
0x3f5: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f7: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3f8: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3fa: Stack[-1] = (bool) 1
0x3fb: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fc: @ Stop()
0x3fd: Pop(0)
0x3fe: Stack[-22] = (bool) 0
0x3ff: Return(); Pop(16)

0x400: Pop(0); Push(Stack[-20] * Stack[-20]);
0x401: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x403: @@ GetPFPosition(Stack[-5])
0x404: Pop(0)
0x405: @ FindPathTo(Stack[-1], Stack[-5])
0x406: Pop(0)
0x407: Pop(0); Push(( Stack[-1] != 0 )
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-6] = Stack[-1]
0x40a: Stack[-1] = 0
0x40b: Pop(0); Push(( Stack[-6] != 0 )
0x40c: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x40d: Push(Stack[-7])
0x40e: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x40f: Stack[-7] = (bool) 0
0x410: @ RotatePath(Stack[-6], Stack[-8])
0x411: Pop(0)
0x412: Pop(0); Push((bool) Stack[-8] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x414: GOTO 0x444

0x415: Push((int) 0)
0x416: Push((float)0.3)
0x417: @ SetTimer(Stack[-2], Stack[-1])
0x418: Pop(2)
0x419: PushEmpty(string)
0x41a: Call2 0x473

0x41b: Pop(0)
0x41c: PushEmpty(string)
0x41d: Call2 0x475

0x41e: Pop(0)
0x41f: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: Pop(0); Push((bool) Stack[-8] == 0)
0x422: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x423: Push( Stack[0 + Tasks[-1].StackPointer] )
0x424: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x425: Stack[-6] = 0
0x426: GOTO 0x444

0x427: GOTO 0x429

0x428: GOTO 0x443

0x429: GOTO 0x42b

0x42a: Stack[-6] = 0
0x42b: GOTO 0x43c

0x42c: Push((int) 0)
0x42d: @ KillTimer(Stack[-1])
0x42e: Pop(1)
0x42f: Push((float)0.5)
0x430: @ Sleep(Stack[-1], Stack[-9])
0x431: Pop(1)
0x432: Pop(0); Push((bool) Stack[-8] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x434: Push( Stack[0 + Tasks[-1].StackPointer] )
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-6] = 0
0x437: GOTO 0x444

0x438: Push((int) 0)
0x439: Push((float)0.3)
0x43a: @ SetTimer(Stack[-2], Stack[-1])
0x43b: Pop(2)
0x43c: Stack[-1] = 0
0x43d: GOTO 0x442

0x43e: Push((int) 0)
0x43f: @ KillTimer(Stack[-1])
0x440: Pop(1)
0x441: GOTO 0x444

0x442: Stack[-6] = 0
0x443: GOTO 0x3e4

0x444: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x445: Return(); Pop(16)

0x446: PushEmpty()
0x447: Push((int) 0)
0x448: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x44a: Return(); Pop(0)

0x44b: PushEmpty(bool, object)
0x44c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44d: Call2 0x46c

0x44e: Pop(1)
0x44f: Pop(1); Push((bool) Stack[-1] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x451: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x452: Push((int) 0)
0x453: @ KillTimer(Stack[-1])
0x454: Pop(1)
0x455: @ Stop()
0x456: Pop(0)
0x457: Return(); Pop(0)

0x458: PushEmpty()
0x459: @ RequestClearPath(Stack[-1])
0x45a: Pop(0)
0x45b: Return(); Pop(0)

0x45c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x45d: Push((int) 0)
0x45e: @ KillTimer(Stack[-1])
0x45f: Pop(1)
0x460: @ Stop()
0x461: Pop(0)
0x462: Return(); Pop(0)

0x463: PushEmpty()
0x464: PushEmpty()
0x465: Call2 0x3b6

0x466: Pop(0)
0x467: PushEmpty(object)
0x468: Stack[-1] = Stack[-2]
0x469: Call2 0xb91

0x46a: Pop(1)
0x46b: Return(); Pop(0)

0x46c: PushEmpty()
0x46d: PushEmpty(bool, object)
0x46e: Stack[-1] = Stack[-3]
0x46f: Call2 0x84a

0x470: Stack[-4] = Stack[-2]
0x471: Pop(2)
0x472: Return(); Pop(0)

0x473: Stack[-1] = "walk"
0x474: Return(); Pop(0)

0x475: Stack[-1] = "run"
0x476: Return(); Pop(0)

0x477: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x478: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x479: PushEmpty(bool, object, float)
0x47a: Stack[-2] = Stack[-12]
0x47b: Stack[-1] = (float) 70.0
0x47c: Call2 0x903

0x47d: Pop(2)
0x47e: Pop(1); Push((bool) Stack[-1] == 0)
0x47f: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x480: Stack[-10] = (int) -2
0x481: Return(); Pop(8)

0x482: @ CreateDialog(Stack[-4])
0x483: Pop(0)
0x484: PushEmpty(int)
0x485: Call2 0xa8b

0x486: Pop(0)
0x487: @@ SetNPCName(Stack[-1])
0x488: Pop(1)
0x489: PushEmpty(int)
0x48a: Call2 0xa89

0x48b: Pop(0)
0x48c: @@ SetNPCDescription(Stack[-1])
0x48d: Pop(1)
0x48e: PushEmpty(string)
0x48f: Call2 0xa8d

0x490: Pop(0)
0x491: @@ SetPhoto(Stack[-1])
0x492: Pop(1)
0x493: PushEmpty(string)
0x494: Call2 0xa8f

0x495: Pop(0)
0x496: @@ SetPhoto2(Stack[-1])
0x497: Pop(1)
0x498: PushEmpty(int)
0x499: Call2 0xac4

0x49a: Pop(0)
0x49b: @@ SetPlayerName(Stack[-1])
0x49c: Pop(1)
0x49d: Stack[-2] = (int) -1
0x49e: @ IsOverrideActive(Stack[-3])
0x49f: Pop(0)
0x4a0: Push(Stack[-3])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a2: Stack[-10] = (int) -2
0x4a3: Return(); Pop(8)

0x4a4: @ DoDialog(Stack[-4])
0x4a5: Pop(0)
0x4a6: PushEmpty(object, object)
0x4a7: Stack[-2] = Stack[-11]
0x4a8: Stack[-1] = Stack[-6]
0x4a9: Push(-2, 4); TaskCall(4)
0x4aa: Call2 0x4c1

0x4ab: Pop(-2, 4); TaskReturn
0x4ac: Pop(2)
0x4ad: @@ IsDialogEnd(Stack[-1])
0x4ae: Pop(0)
0x4af: Pop(0); Push((bool) Stack[-1] == 0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b1: @ sync()
0x4b2: Pop(0)
0x4b3: @@ IsDialogEnd(Stack[-1])
0x4b4: Pop(0)
0x4b5: GOTO 0x4af

0x4b6: PushEmpty(object)
0x4b7: Stack[-1] = Stack[-10]
0x4b8: Call2 0x947

0x4b9: Pop(1)
0x4ba: @ StopDialog(Stack[-4])
0x4bb: Pop(0)
0x4bc: @@ GetReturnValue(Stack[-2])
0x4bd: Pop(0)
0x4be: Stack[-10] = Stack[-2]
0x4bf: Return(); Pop(8)

0x4c0: Stack[-4] = 0
0x4c1: PushEmpty()
0x4c2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4c4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4c5: Push((int) 1)
0x4c6: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x4c7: PushEmpty(bool, object)
0x4c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c9: Call2 0xab8

0x4ca: Pop(1)
0x4cb: Pop(1); Push((bool) Stack[-1] == 0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4cd: PushEmpty(object, object)
0x4ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d0: Call2 0xaab

0x4d1: Pop(2)
0x4d2: PushEmpty(string)
0x4d3: Stack[-1] = "Neutral"
0x4d4: Call2 0x524

0x4d5: Pop(1)
0x4d6: Push((int) 518381)
0x4d7: @@ SetMessage(Stack[-1])
0x4d8: Pop(1)
0x4d9: @@ ClearReplies()
0x4da: Pop(0)
0x4db: Push((int) 519109)
0x4dc: Push((int) 20244)
0x4dd: Push((int) 20240)
0x4de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4df: Pop(3)
0x4e0: Push((int) 518382)
0x4e1: Push((int) 20241)
0x4e2: Push((int) 19495)
0x4e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e4: Pop(3)
0x4e5: GOTO 0x506

0x4e6: PushEmpty(bool, object)
0x4e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e8: Call2 0xab8

0x4e9: Pop(1)
0x4ea: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4eb: PushEmpty(object, object)
0x4ec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ee: Call2 0xaab

0x4ef: Pop(2)
0x4f0: PushEmpty(string)
0x4f1: Stack[-1] = "Neutral"
0x4f2: Call2 0x524

0x4f3: Pop(1)
0x4f4: Push((int) 518383)
0x4f5: @@ SetMessage(Stack[-1])
0x4f6: Pop(1)
0x4f7: @@ ClearReplies()
0x4f8: Pop(0)
0x4f9: Push((int) 518384)
0x4fa: Push((int) 20252)
0x4fb: Push((int) 19497)
0x4fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fd: Pop(3)
0x4fe: Push((int) 519119)
0x4ff: Push((int) 20252)
0x500: Push((int) 20251)
0x501: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x502: Pop(3)
0x503: GOTO 0x506

0x504: Return(); Pop(0)

0x505: GOTO 0x4c5

0x506: PushEmpty(bool)
0x507: Call2 0xa91

0x508: Pop(0)
0x509: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x50a: @ lshWaitForAnimEnd()
0x50b: Pop(0)
0x50c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x50d: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50e: GOTO 0x514

0x50f: PushEmpty(string)
0x510: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x511: Call2 0x958

0x512: Pop(1)
0x513: GOTO 0x50a

0x514: GOTO 0x523

0x515: Push("all")
0x516: Push("idle")
0x517: @ PlayAnimation(Stack[-2], Stack[-1])
0x518: Pop(2)
0x519: @ WaitForAnimEnd()
0x51a: Pop(0)
0x51b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x51c: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51d: GOTO 0x523

0x51e: Push("all")
0x51f: Push("idle")
0x520: @ PlayAnimation(Stack[-2], Stack[-1])
0x521: Pop(2)
0x522: GOTO 0x519

0x523: Return(); Pop(0)

0x524: PushEmpty()
0x525: PushEmpty(bool)
0x526: Call2 0xa91

0x527: Pop(0)
0x528: Pop(1); Push((bool) Stack[-1] == 0)
0x529: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x52a: Return(); Pop(0)

0x52b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x52c: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52d: Return(); Pop(0)

0x52e: PushEmpty(string, bool)
0x52f: Stack[-2] = Stack[-3]
0x530: Push("")
0x531: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x533: Stack[-1] = (bool) 0
0x534: GOTO 0x536

0x535: Stack[-1] = (bool) 1
0x536: Call2 0x968

0x537: Pop(2)
0x538: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x539: Return(); Pop(0)

0x53a: PushEmpty()
0x53b: Push((int) 1)
0x53c: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x53d: PushEmpty()
0x53e: Call2 0x982

0x53f: Pop(0)
0x540: Push((int) 20248)
0x541: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x543: PushEmpty(object, object)
0x544: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x545: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x546: Call2 0xab1

0x547: Pop(2)
0x548: Push((int) 20242)
0x549: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54b: PushEmpty(object, object)
0x54c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x54d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x54e: Call2 0xab1

0x54f: Pop(2)
0x550: Push((int) 20258)
0x551: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x552: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x553: PushEmpty(object, object)
0x554: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x555: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x556: Call2 0xab1

0x557: Pop(2)
0x558: Push((int) 20255)
0x559: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55b: PushEmpty(object, object)
0x55c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x55e: Call2 0xab1

0x55f: Pop(2)
0x560: Push((int) 19494)
0x561: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x562: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x563: PushEmpty(bool, object)
0x564: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x565: Call2 0xab8

0x566: Pop(1)
0x567: Pop(1); Push((bool) Stack[-1] == 0)
0x568: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x569: PushEmpty(object, object)
0x56a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56c: Call2 0xaab

0x56d: Pop(2)
0x56e: PushEmpty(string)
0x56f: Stack[-1] = "Neutral"
0x570: Call2 0x524

0x571: Pop(1)
0x572: Push((int) 518381)
0x573: @@ SetMessage(Stack[-1])
0x574: Pop(1)
0x575: @@ ClearReplies()
0x576: Pop(0)
0x577: Push((int) 519109)
0x578: Push((int) 20244)
0x579: Push((int) 20240)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Push((int) 518382)
0x57d: Push((int) 20241)
0x57e: Push((int) 19495)
0x57f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x580: Pop(3)
0x581: Return(); Pop(0)

0x582: PushEmpty(bool, object)
0x583: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x584: Call2 0xab8

0x585: Pop(1)
0x586: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x587: PushEmpty(object, object)
0x588: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x589: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58a: Call2 0xaab

0x58b: Pop(2)
0x58c: PushEmpty(string)
0x58d: Stack[-1] = "Neutral"
0x58e: Call2 0x524

0x58f: Pop(1)
0x590: Push((int) 518383)
0x591: @@ SetMessage(Stack[-1])
0x592: Pop(1)
0x593: @@ ClearReplies()
0x594: Pop(0)
0x595: Push((int) 518384)
0x596: Push((int) 20252)
0x597: Push((int) 19497)
0x598: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x599: Pop(3)
0x59a: Push((int) 519119)
0x59b: Push((int) 20252)
0x59c: Push((int) 20251)
0x59d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59e: Pop(3)
0x59f: Return(); Pop(0)

0x5a0: Push((int) 20252)
0x5a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5a3: PushEmpty(string)
0x5a4: Stack[-1] = "Neutral"
0x5a5: Call2 0x524

0x5a6: Pop(1)
0x5a7: Push((int) 519120)
0x5a8: @@ SetMessage(Stack[-1])
0x5a9: Pop(1)
0x5aa: @@ ClearReplies()
0x5ab: Pop(0)
0x5ac: Push((int) 519121)
0x5ad: Push((int) 20256)
0x5ae: Push((int) 20254)
0x5af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b0: Pop(3)
0x5b1: Push((int) 519122)
0x5b2: Push((int) -1)
0x5b3: Push((int) 20255)
0x5b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b5: Pop(3)
0x5b6: Return(); Pop(0)

0x5b7: Push((int) 20256)
0x5b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5ba: PushEmpty(string)
0x5bb: Stack[-1] = "Neutral"
0x5bc: Call2 0x524

0x5bd: Pop(1)
0x5be: Push((int) 519123)
0x5bf: @@ SetMessage(Stack[-1])
0x5c0: Pop(1)
0x5c1: @@ ClearReplies()
0x5c2: Pop(0)
0x5c3: Push((int) 519124)
0x5c4: Push((int) -1)
0x5c5: Push((int) 20257)
0x5c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c7: Pop(3)
0x5c8: Push((int) 519125)
0x5c9: Push((int) -1)
0x5ca: Push((int) 20258)
0x5cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cc: Pop(3)
0x5cd: Return(); Pop(0)

0x5ce: Push((int) 20241)
0x5cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5d1: PushEmpty(string)
0x5d2: Stack[-1] = "Neutral"
0x5d3: Call2 0x524

0x5d4: Pop(1)
0x5d5: Push((int) 519110)
0x5d6: @@ SetMessage(Stack[-1])
0x5d7: Pop(1)
0x5d8: @@ ClearReplies()
0x5d9: Pop(0)
0x5da: Push((int) 519111)
0x5db: Push((int) -1)
0x5dc: Push((int) 20242)
0x5dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5de: Pop(3)
0x5df: Push((int) 519112)
0x5e0: Push((int) -1)
0x5e1: Push((int) 20243)
0x5e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e3: Pop(3)
0x5e4: Return(); Pop(0)

0x5e5: Push((int) 20244)
0x5e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5e8: PushEmpty(string)
0x5e9: Stack[-1] = "Neutral"
0x5ea: Call2 0x524

0x5eb: Pop(1)
0x5ec: Push((int) 519113)
0x5ed: @@ SetMessage(Stack[-1])
0x5ee: Pop(1)
0x5ef: @@ ClearReplies()
0x5f0: Pop(0)
0x5f1: Push((int) 519114)
0x5f2: Push((int) 20247)
0x5f3: Push((int) 20245)
0x5f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f5: Pop(3)
0x5f6: Push((int) 519115)
0x5f7: Push((int) 20247)
0x5f8: Push((int) 20246)
0x5f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fa: Pop(3)
0x5fb: Return(); Pop(0)

0x5fc: Push((int) 20247)
0x5fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fe: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x5ff: PushEmpty(string)
0x600: Stack[-1] = "Neutral"
0x601: Call2 0x524

0x602: Pop(1)
0x603: Push((int) 519116)
0x604: @@ SetMessage(Stack[-1])
0x605: Pop(1)
0x606: @@ ClearReplies()
0x607: Pop(0)
0x608: Push((int) 519117)
0x609: Push((int) -1)
0x60a: Push((int) 20248)
0x60b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60c: Pop(3)
0x60d: Push((int) 519118)
0x60e: Push((int) -1)
0x60f: Push((int) 20250)
0x610: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x611: Pop(3)
0x612: Return(); Pop(0)

0x613: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x614: PushEmpty(bool)
0x615: Call2 0xa91

0x616: Pop(0)
0x617: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x618: @ lshStopAnimation()
0x619: Pop(0)
0x61a: GOTO 0x61d

0x61b: @ StopAnimation()
0x61c: Pop(0)
0x61d: Return(); Pop(0)

0x61e: GOTO 0x53b

0x61f: Return(); Pop(0)

0x620: PushEmpty()
0x621: Call2 0x644

0x622: Pop(0)
0x623: Push((int) 3)
0x624: @ Sleep(Stack[-1])
0x625: Pop(1)
0x626: GOTO 0x620

0x627: Return(); Pop(0)

0x628: PushEmpty()
0x629: PushEmpty()
0x62a: Call2 0x695

0x62b: Pop(0)
0x62c: PushEmpty(int, object)
0x62d: Stack[-1] = Stack[-3]
0x62e: Push(-2, 1); TaskCall(3)
0x62f: Call2 0x477

0x630: Pop(-2, 1); TaskReturn
0x631: Pop(2)
0x632: Return(); Pop(0)

0x633: PushEmpty()
0x634: PushEmpty(bool, string, string)
0x635: Stack[-2] = "quest_b3_02"
0x636: Stack[-1] = "grabitel_attack"
0x637: Call2 0xa40

0x638: Pop(3)
0x639: Return(); Pop(0)

0x63a: PushEmpty()
0x63b: Push("attack")
0x63c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63e: PushEmpty()
0x63f: Push(-0, 0); TaskCall(6)
0x640: Call2 0x69a

0x641: Pop(-0, 0); TaskReturn
0x642: Pop(0)
0x643: Return(); Pop(0)

0x644: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x645: @ WaitForAnimEnd()
0x646: Pop(0)
0x647: PushEmpty(bool)
0x648: Call2 0x8fe

0x649: Pop(0)
0x64a: Pop(1); Push((bool) Stack[-1] == 0)
0x64b: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x64c: Return(); Pop(14)

0x64d: PushEmpty(int)
0x64e: Call2 0xa9a

0x64f: Stack[-8] = Stack[-1]
0x650: Pop(1)
0x651: Stack[-6] = (int) 0
0x652: PushEmpty(bool)
0x653: Stack[-1] = (bool) 0
0x654: Push((int) 5)
0x655: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x656: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x657: PushEmpty(bool)
0x658: Call2 0x8fe

0x659: Pop(0)
0x65a: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x65b: Stack[-1] = (bool) 1
0x65c: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x65d: Push((int) 3)
0x65e: @ irand(Stack[-6], Stack[-1])
0x65f: Pop(1)
0x660: Push((int) 0)
0x661: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x662: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x663: Push(Stack[-7])
0x664: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x665: @ irand(Stack[-4], Stack[-7])
0x666: Pop(0)
0x667: Push("all")
0x668: PushEmpty(string, int)
0x669: Stack[-1] = Stack[-7]
0x66a: Call2 0xa93

0x66b: Pop(1)
0x66c: @ PlayAnimation(Stack[-2], Stack[-1])
0x66d: Pop(2)
0x66e: @ WaitForAnimEnd(Stack[-3])
0x66f: Pop(0)
0x670: Pop(0); Push((bool) Stack[-3] == 0)
0x671: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x672: GOTO 0x690

0x673: GOTO 0x685

0x674: Push((int) 1)
0x675: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x677: Push((int) 4)
0x678: @ rand(Stack[-3], Stack[-1])
0x679: Pop(1)
0x67a: Push((int) 1)
0x67b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x67c: @ Sleep(Stack[-1], Stack[-2])
0x67d: Pop(1)
0x67e: Pop(0); Push((bool) Stack[-1] == 0)
0x67f: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x680: GOTO 0x690

0x681: GOTO 0x685

0x682: Push(Stack[-6])
0x683: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x684: GOTO 0x690

0x685: PushEmpty(bool)
0x686: Call2 0x693

0x687: Pop(0)
0x688: Pop(1); Push((bool) Stack[-1] == 0)
0x689: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x68a: GOTO 0x690

0x68b: @ ResetAAS()
0x68c: Pop(0)
0x68d: Push((int) 1)
0x68e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x68f: GOTO 0x652

0x690: @ ResetAAS()
0x691: Pop(0)
0x692: Return(); Pop(14)

0x693: Stack[-1] = (bool) 1
0x694: Return(); Pop(0)

0x695: @ StopAnimation()
0x696: Pop(0)
0x697: @ StopGroup0()
0x698: Pop(0)
0x699: Return(); Pop(0)

0x69a: Push(GlobalVars[2])
0x69b: Stack[-1] = (bool) 1
0x69c: GlobalVars[2] = Stack[-1]; Pop(1)
0x69d: PushEmpty(bool, object)
0x69e: PushEmpty(object)
0x69f: Call2 0x78b

0x6a0: Stack[-2] = Stack[-1]
0x6a1: Pop(1)
0x6a2: Call2 0x6a9

0x6a3: Pop(2)
0x6a4: Push((int) 1)
0x6a5: @ Sleep(Stack[-1])
0x6a6: Pop(1)
0x6a7: GOTO 0x69d

0x6a8: Return(); Pop(0)

0x6a9: PushEmpty(float, float)
0x6aa: PushEmpty(bool, object)
0x6ab: Stack[-1] = Stack[-5]
0x6ac: Call2 0x84a

0x6ad: Pop(1)
0x6ae: Pop(1); Push((bool) Stack[-1] == 0)
0x6af: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6b0: Stack[-4] = (bool) 0
0x6b1: Return(); Pop(2)

0x6b2: PushEmpty(float, object)
0x6b3: Stack[-1] = Stack[-5]
0x6b4: Call2 0x783

0x6b5: Stack[-3] = Stack[-2]
0x6b6: Pop(2)
0x6b7: PushEmpty(bool, float, float, float)
0x6b8: Stack[-3] = Stack[-5]
0x6b9: Stack[-2] = (float) 250000.0
0x6ba: Stack[-1] = (float) 3240000.0
0x6bb: Call2 0x9f7

0x6bc: Pop(3)
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6be: PushEmpty(bool, object)
0x6bf: Stack[-1] = Stack[-5]
0x6c0: Push(-2, 1); TaskCall(0)
0x6c1: Call2 0x0

0x6c2: Pop(-2, 1); TaskReturn
0x6c3: Stack[-6] = Stack[-2]
0x6c4: Pop(2)
0x6c5: Return(); Pop(2)

0x6c6: PushEmpty(bool, object)
0x6c7: Stack[-1] = Stack[-5]
0x6c8: Push(-2, 6); TaskCall(1)
0x6c9: Call2 0x7e

0x6ca: Pop(-2, 6); TaskReturn
0x6cb: Stack[-6] = Stack[-2]
0x6cc: Pop(2)
0x6cd: Return(); Pop(2)

0x6ce: PushEmpty()
0x6cf: PushEmpty()
0x6d0: Call2 0xb30

0x6d1: Pop(0)
0x6d2: PushEmpty()
0x6d3: Call2 0xb18

0x6d4: Pop(0)
0x6d5: PushEmpty(object)
0x6d6: Stack[-1] = Stack[-2]
0x6d7: Call2 0x6da

0x6d8: Pop(1)
0x6d9: Return(); Pop(0)

0x6da: PushEmpty()
0x6db: EventDisable(0)
0x6dc: PushEmpty(object)
0x6dd: Stack[-1] = Stack[-2]
0x6de: Call2 0x6f3

0x6df: Pop(1)
0x6e0: Push((int) 50)
0x6e1: Push((int) 40)
0x6e2: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x6e3: Pop(2)
0x6e4: EventEnable(0)
0x6e5: @ Hold()
0x6e6: Pop(0)
0x6e7: GOTO 0x6e5

0x6e8: Return(); Pop(0)

0x6e9: PushEmpty(bool, bool)
0x6ea: @ IsOverrideActive(Stack[-1])
0x6eb: Pop(0)
0x6ec: Pop(0); Push((bool) Stack[-1] == 0)
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6ee: PushEmpty(object)
0x6ef: Stack[-1] = Stack[-4]
0x6f0: Call2 0xadb

0x6f1: Pop(1)
0x6f2: Return(); Pop(2)

0x6f3: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x6f4: Pop(0); Push((bool) Stack[-21] == 0)
0x6f5: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6f6: PushEmpty(string)
0x6f7: Stack[-1] = "fdie"
0x6f8: Call2 0x74e

0x6f9: Pop(1)
0x6fa: GOTO 0x74d

0x6fb: @@ GetPosition(Stack[-10])
0x6fc: Pop(0)
0x6fd: @ GetPosition(Stack[-9])
0x6fe: Pop(0)
0x6ff: @ GetDirection(Stack[-8])
0x700: Pop(0)
0x701: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x702: Push(CvectorIndex(Stack[-7], 0))
0x703: Push(CvectorIndex(Stack[-9], 0))
0x704: Pop(2); Push(Stack[-2] * Stack[-1]);
0x705: Push(CvectorIndex(Stack[-8], 2))
0x706: Push(CvectorIndex(Stack[-10], 2))
0x707: Pop(2); Push(Stack[-2] * Stack[-1]);
0x708: Pop(2); Push(Stack[-2] + Stack[-1]);
0x709: Push((int) 0)
0x70a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70c: Stack[-6] = "fdie"
0x70d: GOTO 0x70f

0x70e: Stack[-6] = "bdie"
0x70f: @ RemoveRTEnvelope()
0x710: Pop(0)
0x711: @ SetDeathState()
0x712: Pop(0)
0x713: @ Stop()
0x714: Pop(0)
0x715: @ StopAsync()
0x716: Pop(0)
0x717: Stack[-5] = Stack[-21]
0x718: Push("GetScriptProperty")
0x719: Push((int) 2)
0x71a: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x71b: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x71c: Push("Owner")
0x71d: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x71e: Pop(1)
0x71f: Push(Stack[-4])
0x720: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x721: Push("Owner")
0x722: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x723: Pop(1)
0x724: Pop(0); Push((bool) Stack[-5] == 0)
0x725: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x726: Stack[-5] = Stack[-21]
0x727: Push("@GetEyesHeight")
0x728: Push((int) 1)
0x729: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x72a: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x72b: @@ GetEyesHeight(Stack[-2])
0x72c: Pop(0)
0x72d: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x72e: Push(CvectorIndex(Stack[-1], 1))
0x72f: Stack[-1] = Stack[-3]
0x730: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x731: Push("head")
0x732: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x733: Pop(1)
0x734: Stack[-3] = (bool) 1
0x735: GOTO 0x737

0x736: Stack[-3] = (bool) 0
0x737: PushEmpty(string)
0x738: Stack[-1] = Stack[-7]
0x739: Call2 0x994

0x73a: Pop(1)
0x73b: Push("all")
0x73c: @ PlayAnimation(Stack[-1], Stack[-7])
0x73d: Pop(1)
0x73e: @ WaitForAnimEnd()
0x73f: Pop(0)
0x740: Push(Stack[-3])
0x741: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x742: @ StopAsync()
0x743: Pop(0)
0x744: Push("head")
0x745: @ UnlookAsync(Stack[-1])
0x746: Pop(1)
0x747: Push("all")
0x748: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x749: Pop(1)
0x74a: @ RemoveEnvelope()
0x74b: Pop(0)
0x74c: Stack[-5] = 0
0x74d: Return(); Pop(20)

0x74e: PushEmpty()
0x74f: @ RemoveRTEnvelope()
0x750: Pop(0)
0x751: @ SetDeathState()
0x752: Pop(0)
0x753: @ Stop()
0x754: Pop(0)
0x755: @ StopAsync()
0x756: Pop(0)
0x757: @ StopSecondaryAnimation()
0x758: Pop(0)
0x759: PushEmpty(string)
0x75a: Stack[-1] = Stack[-2]
0x75b: Call2 0x994

0x75c: Pop(1)
0x75d: Push("all")
0x75e: @ PlayAnimation(Stack[-1], Stack[-2])
0x75f: Pop(1)
0x760: @ WaitForAnimEnd()
0x761: Pop(0)
0x762: Push("all")
0x763: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x764: Pop(1)
0x765: @ RemoveEnvelope()
0x766: Pop(0)
0x767: Return(); Pop(0)

0x768: PushEmpty()
0x769: Return(); Pop(0)

0x76a: PushEmpty()
0x76b: Return(); Pop(0)

0x76c: PushEmpty()
0x76d: Return(); Pop(0)

0x76e: PushEmpty()
0x76f: Push((int) 2)
0x770: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x772: Stack[-2] = "fire"
0x773: Return(); Pop(0)

0x774: GOTO 0x77a

0x775: Push((int) 1)
0x776: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x777: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x778: Stack[-2] = "bullet"
0x779: Return(); Pop(0)

0x77a: Stack[-2] = "phys"
0x77b: Return(); Pop(0)

0x77c: PushEmpty(cvector, cvector, cvector, cvector)
0x77d: @ GetPosition(Stack[-2])
0x77e: Pop(0)
0x77f: @@ GetPosition(Stack[-1])
0x780: Pop(0)
0x781: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x782: Return(); Pop(4)

0x783: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x784: @ GetPosition(Stack[-3])
0x785: Pop(0)
0x786: @@ GetPosition(Stack[-2])
0x787: Pop(0)
0x788: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x789: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x78a: Return(); Pop(6)

0x78b: PushEmpty(object, object)
0x78c: Push("player")
0x78d: @ FindActor(Stack[-2], Stack[-1])
0x78e: Pop(1)
0x78f: Stack[-3] = Stack[-1]
0x790: Return(); Pop(2)

0x791: Stack[-1] = 0
0x792: PushEmpty(bool, bool)
0x793: @ IsPlayerActor(Stack[-3], Stack[-1])
0x794: Pop(0)
0x795: Stack[-4] = Stack[-1]
0x796: Return(); Pop(2)

0x797: PushEmpty(bool, bool)
0x798: Push("HasProperty")
0x799: Push((int) 2)
0x79a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x79b: Pop(1); Push((bool) Stack[-1] == 0)
0x79c: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x79d: Stack[-5] = (bool) 0
0x79e: Return(); Pop(2)

0x79f: @@ HasProperty(Stack[-3], Stack[-1])
0x7a0: Pop(0)
0x7a1: Stack[-5] = Stack[-1]
0x7a2: Return(); Pop(2)

0x7a3: PushEmpty(float, float)
0x7a4: PushEmpty(bool, object, string)
0x7a5: Stack[-2] = Stack[-10]
0x7a6: Stack[-1] = Stack[-9]
0x7a7: Call2 0x797

0x7a8: Pop(2)
0x7a9: Pop(1); Push((bool) Stack[-1] == 0)
0x7aa: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ab: Stack[-8] = (bool) 0
0x7ac: Return(); Pop(2)

0x7ad: @@ GetProperty(Stack[-6], Stack[-1])
0x7ae: Pop(0)
0x7af: PushEmpty(float, float, float, float)
0x7b0: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x7b1: Stack[-2] = Stack[-8]
0x7b2: Stack[-1] = Stack[-7]
0x7b3: Call2 0x9ec

0x7b4: Pop(3)
0x7b5: @@ SetProperty(Stack[-7], Stack[-1])
0x7b6: Pop(1)
0x7b7: Stack[-8] = (bool) 1
0x7b8: Return(); Pop(2)

0x7b9: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x7ba: PushEmpty(bool, object, string)
0x7bb: Stack[-2] = Stack[-18]
0x7bc: Stack[-1] = "health"
0x7bd: Call2 0x797

0x7be: Pop(2)
0x7bf: Pop(1); Push((bool) Stack[-1] == 0)
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7c1: Stack[-16] = (float) 0.0
0x7c2: Return(); Pop(12)

0x7c3: PushEmpty(bool, object, string)
0x7c4: Stack[-2] = Stack[-18]
0x7c5: Stack[-1] = "armor"
0x7c6: Call2 0x797

0x7c7: Pop(2)
0x7c8: Pop(1); Push((bool) Stack[-1] == 0)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7ca: Stack[-6] = (int) 0
0x7cb: GOTO 0x7cf

0x7cc: Push("armor")
0x7cd: @@ GetProperty(Stack[-1], Stack[-7])
0x7ce: Pop(1)
0x7cf: Push("armor_")
0x7d0: PushEmpty(string, int)
0x7d1: Stack[-1] = Stack[-16]
0x7d2: Call2 0x76e

0x7d3: Pop(1)
0x7d4: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x7d5: PushEmpty(bool, object, string)
0x7d6: Stack[-2] = Stack[-18]
0x7d7: Stack[-1] = Stack[-8]
0x7d8: Call2 0x797

0x7d9: Pop(2)
0x7da: Pop(1); Push((bool) Stack[-1] == 0)
0x7db: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dc: Stack[-4] = (int) 0
0x7dd: GOTO 0x7e0

0x7de: @@ GetProperty(Stack[-5], Stack[-4])
0x7df: Pop(0)
0x7e0: PushEmpty(float, float, float)
0x7e1: Pop(0); Push(Stack[-9] + Stack[-7]);
0x7e2: Push((float)100.0)
0x7e3: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x7e4: Stack[-1] = (int) 1
0x7e5: Call2 0x9cd

0x7e6: Stack[-6] = Stack[-3]
0x7e7: Pop(3)
0x7e8: Push("health")
0x7e9: @@ GetProperty(Stack[-1], Stack[-3])
0x7ea: Pop(1)
0x7eb: Push((int) 1)
0x7ec: Pop(1); Push(Stack[-1] - Stack[-4]);
0x7ed: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x7ee: Push("health")
0x7ef: PushEmpty(float, float, float, float)
0x7f0: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x7f1: Stack[-2] = (int) 0
0x7f2: Stack[-1] = (int) 1
0x7f3: Call2 0x9ec

0x7f4: Pop(3)
0x7f5: @@ SetProperty(Stack[-2], Stack[-1])
0x7f6: Pop(2)
0x7f7: PushEmpty(bool, object)
0x7f8: Stack[-1] = Stack[-17]
0x7f9: Call2 0x792

0x7fa: Pop(1)
0x7fb: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7fc: PushEmpty(float)
0x7fd: Stack[-1] = -Stack[-2]; Pop(0);
0x7fe: Call2 0xa2c

0x7ff: Pop(1)
0x800: Stack[-16] = Stack[-1]
0x801: Return(); Pop(12)

0x802: PushEmpty(float, float)
0x803: PushEmpty(bool, object, string)
0x804: Stack[-2] = Stack[-6]
0x805: Stack[-1] = "health"
0x806: Call2 0x797

0x807: Pop(2)
0x808: Pop(1); Push((bool) Stack[-1] == 0)
0x809: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80a: Stack[-4] = (bool) 0
0x80b: Return(); Pop(2)

0x80c: PushEmpty(bool)
0x80d: Stack[-1] = (bool) 0
0x80e: PushEmpty(bool, object)
0x80f: Stack[-1] = Stack[-6]
0x810: Call2 0x792

0x811: Pop(1)
0x812: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x813: PushEmpty(bool)
0x814: Call2 0xa60

0x815: Pop(0)
0x816: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x817: Stack[-1] = (bool) 1
0x818: IF (Stack[-1] == 0) GOTO 0x81b; Pop(1)

0x819: Stack[-4] = (bool) 0
0x81a: Return(); Pop(2)

0x81b: Push("health")
0x81c: @@ GetProperty(Stack[-1], Stack[-2])
0x81d: Pop(1)
0x81e: Push((float)0.0)
0x81f: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0x820: Return(); Pop(2)

0x821: PushEmpty(bool, bool)
0x822: @@ IsDead(Stack[-1])
0x823: Pop(0)
0x824: Stack[-4] = Stack[-1]
0x825: Return(); Pop(2)

0x826: PushEmpty(object, object, object, object)
0x827: Pop(0); Push((bool) Stack[-5] == 0)
0x828: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x829: Stack[-6] = (bool) 0
0x82a: Return(); Pop(4)

0x82b: PushEmpty(bool)
0x82c: Stack[-1] = (bool) 0
0x82d: Push("IsDead")
0x82e: Push((int) 1)
0x82f: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x830: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x831: PushEmpty(bool, object)
0x832: Stack[-1] = Stack[-8]
0x833: Call2 0x821

0x834: Pop(1)
0x835: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x836: Stack[-1] = (bool) 1
0x837: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x838: Stack[-6] = (bool) 0
0x839: Return(); Pop(4)

0x83a: @ GetScene(Stack[-2])
0x83b: Pop(0)
0x83c: Pop(0); Push((bool) Stack[-2] == 0)
0x83d: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83e: Stack[-6] = (bool) 0
0x83f: Return(); Pop(4)

0x840: @@ GetScene(Stack[-1])
0x841: Pop(0)
0x842: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x844: Stack[-6] = (bool) 0
0x845: Return(); Pop(4)

0x846: Stack[-6] = (bool) 1
0x847: Return(); Pop(4)

0x848: Stack[-1] = 0
0x849: Stack[-2] = 0
0x84a: PushEmpty(int, int)
0x84b: PushEmpty(bool, object)
0x84c: Stack[-1] = Stack[-5]
0x84d: Call2 0x826

0x84e: Pop(1)
0x84f: Pop(1); Push((bool) Stack[-1] == 0)
0x850: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x851: Stack[-4] = (bool) 0
0x852: Return(); Pop(2)

0x853: PushEmpty(bool, object, string)
0x854: Stack[-2] = Stack[-6]
0x855: Stack[-1] = "noaccess"
0x856: Call2 0x797

0x857: Pop(2)
0x858: Pop(1); Push((bool) Stack[-1] == 0)
0x859: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x85a: Stack[-4] = (bool) 1
0x85b: Return(); Pop(2)

0x85c: Push("noaccess")
0x85d: @@ GetProperty(Stack[-1], Stack[-2])
0x85e: Pop(1)
0x85f: Push((int) 0)
0x860: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x861: Return(); Pop(2)

0x862: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x863: @ GetPosition(Stack[-3])
0x864: Pop(0)
0x865: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x866: Push(CvectorIndex(Stack[-2], 0))
0x867: Push(CvectorIndex(Stack[-3], 2))
0x868: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x869: Pop(2)
0x86a: Stack[-8] = Stack[-1]
0x86b: Return(); Pop(6)

0x86c: PushEmpty(cvector, cvector)
0x86d: @@ GetPosition(Stack[-1])
0x86e: Pop(0)
0x86f: PushEmpty(bool, cvector)
0x870: Stack[-1] = Stack[-3]
0x871: Call2 0x862

0x872: Stack[-6] = Stack[-2]
0x873: Pop(2)
0x874: Return(); Pop(2)

0x875: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x876: Pop(0); Push((bool) Stack[-15] == 0)
0x877: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x878: Return(); Pop(14)

0x879: @ IsDead(Stack[-7])
0x87a: Pop(0)
0x87b: Push(Stack[-7])
0x87c: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x87d: Return(); Pop(14)

0x87e: @ GetSecondaryAnimationType(Stack[-6])
0x87f: Pop(0)
0x880: Push((int) 0)
0x881: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x883: Return(); Pop(14)

0x884: @@ GetPosition(Stack[-5])
0x885: Pop(0)
0x886: @ GetPosition(Stack[-4])
0x887: Pop(0)
0x888: @ GetDirection(Stack[-3])
0x889: Pop(0)
0x88a: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x88b: Push(CvectorIndex(Stack[-2], 0))
0x88c: Push(CvectorIndex(Stack[-4], 0))
0x88d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x88e: Push(CvectorIndex(Stack[-3], 2))
0x88f: Push(CvectorIndex(Stack[-5], 2))
0x890: Pop(2); Push(Stack[-2] * Stack[-1]);
0x891: Pop(2); Push(Stack[-2] + Stack[-1]);
0x892: Push((int) 0)
0x893: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x895: Stack[-1] = "fhit"
0x896: GOTO 0x898

0x897: Stack[-1] = "bhit"
0x898: Push("hit_react")
0x899: Push("1")
0x89a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x89b: Push("2")
0x89c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x89d: Push((int) -10)
0x89e: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x89f: Pop(4)
0x8a0: Return(); Pop(14)

0x8a1: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x8a2: PushEmpty(bool)
0x8a3: Stack[-1] = (bool) 0
0x8a4: PushEmpty(bool)
0x8a5: Stack[-1] = (bool) 0
0x8a6: Push(Stack[-23])
0x8a7: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x8a8: Push((int) 4)
0x8a9: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x8aa: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x8ab: Stack[-1] = (bool) 1
0x8ac: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8ad: Push((int) 5)
0x8ae: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8b0: Stack[-1] = (bool) 1
0x8b1: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8b2: PushEmpty(cvector, cvector)
0x8b3: PushEmpty(cvector, object)
0x8b4: Stack[-1] = Stack[-25]
0x8b5: Call2 0x77c

0x8b6: Stack[-3] = Stack[-2]
0x8b7: Pop(2)
0x8b8: Call2 0x9c3

0x8b9: Stack[-11] = Stack[-2]
0x8ba: Pop(2)
0x8bb: @ CreateVectorVector(Stack[-8])
0x8bc: Pop(0)
0x8bd: Stack[-7] = (int) 1
0x8be: Push("hit")
0x8bf: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8c0: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x8c1: Pop(1)
0x8c2: Pop(0); Push((bool) Stack[-6] == 0)
0x8c3: IF (Stack[-1] == 0) GOTO 0x8c5; Pop(1)

0x8c4: GOTO 0x8ce

0x8c5: Pop(0); Push(Stack[-4] | Stack[-9]);
0x8c6: Push((float)0.70711)
0x8c7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x8c8: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8c9: @@ add(Stack[-5])
0x8ca: Pop(0)
0x8cb: Push((int) 1)
0x8cc: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x8cd: GOTO 0x8be

0x8ce: @@ size(Stack[-3])
0x8cf: Pop(0)
0x8d0: Push(Stack[-3])
0x8d1: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8d2: @ irand(Stack[-2], Stack[-3])
0x8d3: Pop(0)
0x8d4: @@ get(Stack[-1], Stack[-2])
0x8d5: Pop(0)
0x8d6: PushEmpty(object, int, float, cvector, cvector)
0x8d7: Stack[-5] = Stack[-26]
0x8d8: Stack[-4] = Stack[-25]
0x8d9: Stack[-3] = Stack[-24]
0x8da: Stack[-2] = Stack[-6]
0x8db: Stack[-1] = -Stack[-14]; Pop(0);
0x8dc: Call2 0x8e5

0x8dd: Pop(5)
0x8de: Return(); Pop(18)

0x8df: Stack[-8] = 0
0x8e0: PushEmpty(object)
0x8e1: Stack[-1] = Stack[-22]
0x8e2: Call2 0x875

0x8e3: Pop(1)
0x8e4: Return(); Pop(18)

0x8e5: PushEmpty(object, object, object, object)
0x8e6: @ GetScene(Stack[-2])
0x8e7: Pop(0)
0x8e8: Push("scripted")
0x8e9: Push("blood_dir.xml")
0x8ea: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x8eb: Pop(2)
0x8ec: PushEmpty(object)
0x8ed: Stack[-1] = Stack[-10]
0x8ee: Call2 0x875

0x8ef: Pop(1)
0x8f0: Return(); Pop(4)

0x8f1: Stack[-1] = 0
0x8f2: Stack[-2] = 0
0x8f3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x8f4: @@ GetPosition(Stack[-3])
0x8f5: Pop(0)
0x8f6: @ GetPosition(Stack[-2])
0x8f7: Pop(0)
0x8f8: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x8f9: Push(CvectorIndex(Stack[-1], 0))
0x8fa: Push(CvectorIndex(Stack[-2], 2))
0x8fb: @ RotateAsync(Stack[-2], Stack[-1])
0x8fc: Pop(2)
0x8fd: Return(); Pop(6)

0x8fe: PushEmpty(bool, bool)
0x8ff: @ IsLoaded(Stack[-1])
0x900: Pop(0)
0x901: Stack[-3] = Stack[-1]
0x902: Return(); Pop(2)

0x903: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x904: @@ GetPosition(Stack[-8])
0x905: Pop(0)
0x906: @@ GetEyesHeight(Stack[-9])
0x907: Pop(0)
0x908: Push(CvectorIndex(Stack[-8], 1))
0x909: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x90a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x90b: @ GetPosition(Stack[-7])
0x90c: Pop(0)
0x90d: @ GetEyesHeight(Stack[-9])
0x90e: Pop(0)
0x90f: Push(CvectorIndex(Stack[-7], 1))
0x910: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x911: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x912: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x913: Push(CvectorIndex(Stack[-6], 1))
0x914: Stack[-1] = (int) 0
0x915: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x916: Pop(0); Push(Stack[-6] | Stack[-6]);
0x917: Pop(1); Push(Sqrt(Stack[-1]))
0x918: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x919: Stack[-5] = -Stack[-6]; Pop(0);
0x91a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x91b: PushEmpty(cvector, cvector)
0x91c: Push(CVector(0.0, 1.0, 0.0))
0x91d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x91e: Call2 0x9c3

0x91f: Pop(1)
0x920: Push((int) 25)
0x921: Pop(2); Push(Stack[-2] * Stack[-1]);
0x922: Pop(2); Push(Stack[-2] + Stack[-1]);
0x923: Push(CVector(0.0, 10.0, 0.0))
0x924: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x925: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x926: @ IsOverrideActive(Stack[-2])
0x927: Pop(0)
0x928: Push(Stack[-2])
0x929: IF (Stack[-1] == 0) GOTO 0x92c; Pop(1)

0x92a: Stack[-21] = (bool) 0
0x92b: Return(); Pop(18)

0x92c: @ StopWorld()
0x92d: Pop(0)
0x92e: @ CameraTransit(Stack[-3], Stack[-5])
0x92f: Pop(0)
0x930: Push(CvectorIndex(Stack[-4], 0))
0x931: Push(CvectorIndex(Stack[-5], 2))
0x932: @ Rotate(Stack[-2], Stack[-1])
0x933: Pop(2)
0x934: PushEmpty(bool)
0x935: Call2 0xa91

0x936: Pop(0)
0x937: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x938: GOTO 0x941

0x939: Push("head")
0x93a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x93b: Pop(1)
0x93c: Push(Stack[-1])
0x93d: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x93e: Push("head")
0x93f: @ LookAsyncCamera(Stack[-1])
0x940: Pop(1)
0x941: @ CameraWaitForPlayFinish()
0x942: Pop(0)
0x943: @ ResumeWorld()
0x944: Pop(0)
0x945: Stack[-21] = (bool) 1
0x946: Return(); Pop(18)

0x947: PushEmpty(bool, bool)
0x948: @ CameraSwitchToNormal()
0x949: Pop(0)
0x94a: PushEmpty(bool)
0x94b: Call2 0xa91

0x94c: Pop(0)
0x94d: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x94e: GOTO 0x957

0x94f: Push("head")
0x950: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x951: Pop(1)
0x952: Push(Stack[-1])
0x953: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x954: Push("head")
0x955: @ UnlookAsync(Stack[-1])
0x956: Pop(1)
0x957: Return(); Pop(2)

0x958: PushEmpty(bool, float, float, bool, float, float)
0x959: @ lshHasAnimation(Stack[-3], Stack[-7])
0x95a: Pop(0)
0x95b: Push(Stack[-3])
0x95c: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x95d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x95e: Pop(0)
0x95f: Push((bool) 0)
0x960: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x961: Pop(1)
0x962: GOTO 0x967

0x963: Push("Can't find lsh animation : ")
0x964: Pop(1); Push(Stack[-1] + Stack[-8]);
0x965: @ Trace(Stack[-1])
0x966: Pop(1)
0x967: Return(); Pop(6)

0x968: PushEmpty(bool, float, float, bool, float, float)
0x969: @ lshHasAnimation(Stack[-3], Stack[-8])
0x96a: Pop(0)
0x96b: Push(Stack[-3])
0x96c: IF (Stack[-1] == 0) GOTO 0x972; Pop(1)

0x96d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x96e: Pop(0)
0x96f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x970: Pop(0)
0x971: GOTO 0x976

0x972: Push("Can't find lsh animation : ")
0x973: Pop(1); Push(Stack[-1] + Stack[-9]);
0x974: @ Trace(Stack[-1])
0x975: Pop(1)
0x976: Return(); Pop(6)

0x977: PushEmpty(float, cvector, float, cvector)
0x978: @@ GetEyesHeight(Stack[-2])
0x979: Pop(0)
0x97a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x97b: Push(CvectorIndex(Stack[-1], 1))
0x97c: Stack[-1] = Stack[-3]
0x97d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x97e: Push("head")
0x97f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x980: Pop(1)
0x981: Return(); Pop(4)

0x982: PushEmpty(bool)
0x983: Call2 0xa91

0x984: Pop(0)
0x985: IF (Stack[-1] == 0) GOTO 0x988; Pop(1)

0x986: @ lshStopSpeech()
0x987: Pop(0)
0x988: Return(); Pop(0)

0x989: PushEmpty(bool, bool)
0x98a: PushEmpty(bool, int, int)
0x98b: Stack[-2] = Stack[-7]
0x98c: Stack[-1] = Stack[-6]
0x98d: Call2 0x9ff

0x98e: Pop(2)
0x98f: IF (Stack[-1] == 0) GOTO 0x993; Pop(1)

0x990: Push((int) 0)
0x991: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x992: Pop(1)
0x993: Return(); Pop(2)

0x994: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x995: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x996: Pop(0)
0x997: Pop(0); Push((bool) Stack[-8] == 0)
0x998: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x999: Stack[-7] = (int) 0
0x99a: Push((int) 1)
0x99b: Pop(1); Push(Stack[-8] + Stack[-1]);
0x99c: Pop(1); Push(Stack[-18] + Stack[-1]);
0x99d: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x99e: Pop(1)
0x99f: Pop(0); Push((bool) Stack[-6] == 0)
0x9a0: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x9a1: GOTO 0x9a5

0x9a2: Push((int) 1)
0x9a3: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x9a4: GOTO 0x99a

0x9a5: Pop(0); Push((bool) Stack[-7] == 0)
0x9a6: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x9a7: Return(); Pop(16)

0x9a8: @ irand(Stack[-5], Stack[-7])
0x9a9: Pop(0)
0x9aa: Push((int) 1)
0x9ab: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9ac: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x9ad: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x9ae: Pop(0)
0x9af: Push(Stack[-4])
0x9b0: IF (Stack[-1] == 0) GOTO 0x9bc; Pop(1)

0x9b1: @ GetEyesHeight(Stack[-3])
0x9b2: Pop(0)
0x9b3: @ GetDirection(Stack[-2])
0x9b4: Pop(0)
0x9b5: Push((int) 50)
0x9b6: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x9b7: Push(CvectorIndex(Stack[-1], 1))
0x9b8: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x9b9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x9ba: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x9bb: Pop(0)
0x9bc: Return(); Pop(16)

0x9bd: PushEmpty(object, object)
0x9be: @ self(Stack[-1])
0x9bf: Pop(0)
0x9c0: Stack[-3] = Stack[-1]
0x9c1: Return(); Pop(2)

0x9c2: Stack[-1] = 0
0x9c3: PushEmpty(float, float)
0x9c4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x9c5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9c6: Push((float)0.0)
0x9c7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9c8: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9c9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x9ca: Return(); Pop(2)

0x9cb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x9cc: Return(); Pop(2)

0x9cd: PushEmpty()
0x9ce: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9d0: Stack[-3] = Stack[-2]
0x9d1: GOTO 0x9d3

0x9d2: Stack[-3] = Stack[-1]
0x9d3: Return(); Pop(0)

0x9d4: PushEmpty()
0x9d5: Pop(0); Push(Stack[-2] * Stack[-2]);
0x9d6: Push((int) 4)
0x9d7: Pop(1); Push(Stack[-1] * Stack[-5]);
0x9d8: Pop(1); Push(Stack[-1] * Stack[-3]);
0x9d9: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x9da: Return(); Pop(0)

0x9db: PushEmpty(float, float)
0x9dc: Pop(0); Push(( -Stack[-5])
0x9dd: Pop(1); Push(Stack[-1] - Stack[-4]);
0x9de: Push((int) 2)
0x9df: Pop(1); Push(Stack[-1] * Stack[-8]);
0x9e0: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x9e1: Push((int) 0)
0x9e2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9e3: IF (Stack[-1] == 0) GOTO 0x9e6; Pop(1)

0x9e4: Stack[-7] = Stack[-1]
0x9e5: Return(); Pop(2)

0x9e6: Pop(0); Push(( -Stack[-5])
0x9e7: Pop(1); Push(Stack[-1] + Stack[-4]);
0x9e8: Push((int) 2)
0x9e9: Pop(1); Push(Stack[-1] * Stack[-8]);
0x9ea: Stack[-9] = Stack[-2] / Stack[-1]; Pop(2);
0x9eb: Return(); Pop(2)

0x9ec: PushEmpty()
0x9ed: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x9ee: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9ef: Stack[-4] = Stack[-2]
0x9f0: Return(); Pop(0)

0x9f1: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x9f2: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f3: Stack[-4] = Stack[-1]
0x9f4: Return(); Pop(0)

0x9f5: Stack[-4] = Stack[-3]
0x9f6: Return(); Pop(0)

0x9f7: PushEmpty()
0x9f8: Stack[-4] = (bool) 0
0x9f9: Pop(0); Push((bool) Stack[-3] >= Stack[-2])
0x9fa: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9fb: Pop(0); Push((bool) Stack[-3] <= Stack[-1])
0x9fc: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9fd: Stack[-4] = (bool) 1
0x9fe: Return(); Pop(0)

0x9ff: PushEmpty(int, int)
0xa00: @ irand(Stack[-1], Stack[-3])
0xa01: Pop(0)
0xa02: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xa03: Return(); Pop(2)

0xa04: PushEmpty(int, int)
0xa05: @ GetVariable(Stack[-3], Stack[-1])
0xa06: Pop(0)
0xa07: Stack[-4] = Stack[-1]
0xa08: Return(); Pop(2)

0xa09: PushEmpty()
0xa0a: Pop(0); Push((bool) Stack[-2] == 0)
0xa0b: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa0c: Stack[-3] = (bool) 0
0xa0d: Return(); Pop(0)

0xa0e: Push((int) 0)
0xa0f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa10: IF (Stack[-1] == 0) GOTO 0xa15; Pop(1)

0xa11: Push((int) 8)
0xa12: @ SendWorldWndMessage(Stack[-1])
0xa13: Pop(1)
0xa14: GOTO 0xa1e

0xa15: Push((int) 0)
0xa16: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa17: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa18: Push((int) 9)
0xa19: @ SendWorldWndMessage(Stack[-1])
0xa1a: Pop(1)
0xa1b: GOTO 0xa1e

0xa1c: Stack[-3] = (bool) 0
0xa1d: Return(); Pop(0)

0xa1e: PushEmpty(float)
0xa1f: Stack[-1] = Stack[-2]
0xa20: Call2 0xa36

0xa21: Pop(1)
0xa22: PushEmpty(bool, object, string, float, float, float)
0xa23: Stack[-5] = Stack[-8]
0xa24: Stack[-4] = "reputation"
0xa25: Stack[-3] = Stack[-7]
0xa26: Stack[-2] = (int) 0
0xa27: Stack[-1] = (int) 1
0xa28: Call2 0x7a3

0xa29: Pop(6)
0xa2a: Stack[-3] = (bool) 1
0xa2b: Return(); Pop(0)

0xa2c: PushEmpty(object, object)
0xa2d: @ CreateFloatVector(Stack[-1])
0xa2e: Pop(0)
0xa2f: @@ add(Stack[-3])
0xa30: Pop(0)
0xa31: Push((int) 15)
0xa32: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa33: Pop(1)
0xa34: Return(); Pop(2)

0xa35: Stack[-1] = 0
0xa36: PushEmpty(object, object)
0xa37: @ CreateFloatVector(Stack[-1])
0xa38: Pop(0)
0xa39: @@ add(Stack[-3])
0xa3a: Pop(0)
0xa3b: Push((int) 16)
0xa3c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa3d: Pop(1)
0xa3e: Return(); Pop(2)

0xa3f: Stack[-1] = 0
0xa40: PushEmpty(object, object)
0xa41: @ FindActor(Stack[-1], Stack[-4])
0xa42: Pop(0)
0xa43: Pop(0); Push((bool) Stack[-1] == 0)
0xa44: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa45: Stack[-5] = (bool) 0
0xa46: Return(); Pop(2)

0xa47: @ Trigger(Stack[-1], Stack[-3])
0xa48: Pop(0)
0xa49: Stack[-5] = (bool) 1
0xa4a: Return(); Pop(2)

0xa4b: Stack[-1] = 0
0xa4c: PushEmpty(bool, bool)
0xa4d: @ IsPlayerActor(Stack[-3], Stack[-1])
0xa4e: Pop(0)
0xa4f: Push(Stack[-1])
0xa50: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa51: Push("attack")
0xa52: @ PlayGlobalMusic(Stack[-1])
0xa53: Pop(1)
0xa54: Return(); Pop(2)

0xa55: PushEmpty(object, object)
0xa56: @ GetScene(Stack[-1])
0xa57: Pop(0)
0xa58: Push("battle")
0xa59: PushEmpty(object)
0xa5a: Call2 0x9bd

0xa5b: Pop(0)
0xa5c: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xa5d: Pop(2)
0xa5e: Return(); Pop(2)

0xa5f: Stack[-1] = 0
0xa60: PushEmpty(bool, bool)
0xa61: Push("god_mode")
0xa62: @ GetVariable(Stack[-1], Stack[-2])
0xa63: Pop(1)
0xa64: Stack[-3] = Stack[-1]
0xa65: Return(); Pop(2)

0xa66: PushEmpty(cvector, float, float, float, float, float, cvector, float, float, float, float, float)
0xa67: Stack[-6] = Stack[-14] - Stack[-15]; Pop(0);
0xa68: Stack[-5] = (int) 250000
0xa69: Push(CvectorIndex(Stack[-6], 1))
0xa6a: Push((int) 1000)
0xa6b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa6c: Pop(0); Push(Stack[-14] * Stack[-14]);
0xa6d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa6e: Stack[-3] = Stack[-6] | Stack[-6]; Pop(0);
0xa6f: PushEmpty(float, float, float, float)
0xa70: Stack[-3] = Stack[-9]
0xa71: Stack[-2] = Stack[-8]
0xa72: Stack[-1] = Stack[-7]
0xa73: Call2 0x9d4

0xa74: Stack[-6] = Stack[-4]
0xa75: Pop(4)
0xa76: Push((int) 0)
0xa77: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xa78: IF (Stack[-1] == 0) GOTO 0xa7b; Pop(1)

0xa79: Stack[-1] = (int) 1
0xa7a: GOTO 0xa83

0xa7b: PushEmpty(float, float, float, float, float)
0xa7c: Stack[-4] = Stack[-10]
0xa7d: Stack[-3] = Stack[-9]
0xa7e: Stack[-2] = Stack[-8]
0xa7f: Stack[-1] = Sqrt(Stack[-7]); Pop(0);
0xa80: Call2 0x9db

0xa81: Pop(4)
0xa82: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xa83: Push(CVector(0.0, 500.0, 0.0))
0xa84: Pop(1); Push(Stack[-1] * Stack[-2]);
0xa85: Pop(1); Push(Stack[-1] * Stack[-2]);
0xa86: Pop(1); Push(Stack[-7] + Stack[-1]);
0xa87: Stack[-17] = Stack[-1] / Stack[-2]; Pop(1);
0xa88: Return(); Pop(12)

0xa89: Stack[-1] = (int) 518411
0xa8a: Return(); Pop(0)

0xa8b: Stack[-1] = (int) 518410
0xa8c: Return(); Pop(0)

0xa8d: Stack[-1] = "ui/NPC_Citizen1.png"
0xa8e: Return(); Pop(0)

0xa8f: Stack[-1] = "ui/NPC_Citizen1_b.png"
0xa90: Return(); Pop(0)

0xa91: Stack[-1] = (bool) 0
0xa92: Return(); Pop(0)

0xa93: PushEmpty(string, string)
0xa94: Stack[-1] = "idle"
0xa95: Push(Stack[-3])
0xa96: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa97: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa98: Stack[-4] = Stack[-1]
0xa99: Return(); Pop(2)

0xa9a: PushEmpty(int, bool, int, bool)
0xa9b: Stack[-2] = (int) 0
0xa9c: Push("all")
0xa9d: PushEmpty(string, int)
0xa9e: Stack[-1] = Stack[-5]
0xa9f: Call2 0xa93

0xaa0: Pop(1)
0xaa1: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xaa2: Pop(2)
0xaa3: Pop(0); Push((bool) Stack[-1] == 0)
0xaa4: IF (Stack[-1] == 0) GOTO 0xaa6; Pop(1)

0xaa5: GOTO 0xaa9

0xaa6: Push((int) 1)
0xaa7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xaa8: GOTO 0xa9c

0xaa9: Stack[-5] = Stack[-2]
0xaaa: Return(); Pop(4)

0xaab: PushEmpty()
0xaac: Push("b3q02GrabitelTalk")
0xaad: Push((int) 1)
0xaae: @ SetVariable(Stack[-2], Stack[-1])
0xaaf: Pop(2)
0xab0: Return(); Pop(0)

0xab1: PushEmpty()
0xab2: PushEmpty(bool, string, string)
0xab3: Stack[-2] = "quest_b3_02"
0xab4: Stack[-1] = "grabitel_attack"
0xab5: Call2 0xa40

0xab6: Pop(3)
0xab7: Return(); Pop(0)

0xab8: PushEmpty()
0xab9: PushEmpty(int, string)
0xaba: Stack[-1] = "b3q02"
0xabb: Call2 0xa04

0xabc: Pop(1)
0xabd: Push((int) 3)
0xabe: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xabf: IF (Stack[-1] == 0) GOTO 0xac2; Pop(1)

0xac0: Stack[-2] = (bool) 1
0xac1: Return(); Pop(0)

0xac2: Stack[-2] = (bool) 0
0xac3: Return(); Pop(0)

0xac4: PushEmpty(int, int)
0xac5: Push("branch")
0xac6: @ GetVariable(Stack[-1], Stack[-2])
0xac7: Pop(1)
0xac8: Push((int) 0)
0xac9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaca: IF (Stack[-1] == 0) GOTO 0xace; Pop(1)

0xacb: Stack[-3] = (int) 1
0xacc: Return(); Pop(2)

0xacd: GOTO 0xad3

0xace: Push((int) 1)
0xacf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xad0: IF (Stack[-1] == 0) GOTO 0xad3; Pop(1)

0xad1: Stack[-3] = (int) 2
0xad2: Return(); Pop(2)

0xad3: Stack[-3] = (int) 3
0xad4: Return(); Pop(2)

0xad5: PushEmpty(int, int)
0xad6: Push("branch")
0xad7: @ GetVariable(Stack[-1], Stack[-2])
0xad8: Pop(1)
0xad9: Stack[-3] = Stack[-1]
0xada: Return(); Pop(2)

0xadb: PushEmpty()
0xadc: PushEmpty(int)
0xadd: Call2 0xad5

0xade: Pop(0)
0xadf: Push((int) 1)
0xae0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xae1: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xae2: @ WorkWithCorpse(Stack[-1])
0xae3: Pop(0)
0xae4: GOTO 0xae7

0xae5: @ Barter(Stack[-1])
0xae6: Pop(0)
0xae7: Return(); Pop(0)

0xae8: PushEmpty(int, bool, int, bool)
0xae9: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xaea: IF (Stack[-1] == 0) GOTO 0xaef; Pop(1)

0xaeb: Push("GenerateMoney: iMin > iMax")
0xaec: @ Trace(Stack[-1])
0xaed: Pop(1)
0xaee: Return(); Pop(4)

0xaef: Stack[-2] = (int) 0
0xaf0: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xaf1: IF (Stack[-1] == 0) GOTO 0xaf6; Pop(1)

0xaf2: Pop(0); Push(Stack[-5] - Stack[-6]);
0xaf3: @ irand(Stack[-3], Stack[-1])
0xaf4: Pop(1)
0xaf5: GOTO 0xafa

0xaf6: Push((int) 0)
0xaf7: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xaf8: IF (Stack[-1] == 0) GOTO 0xafa; Pop(1)

0xaf9: Return(); Pop(4)

0xafa: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xafb: Push((int) 0)
0xafc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xafd: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xafe: Return(); Pop(4)

0xaff: PushEmpty(int, string)
0xb00: Stack[-1] = "Money"
0xb01: Call2 0xb4e

0xb02: Pop(1)
0xb03: Push((int) 0)
0xb04: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xb05: Pop(2)
0xb06: Return(); Pop(4)

0xb07: PushEmpty(object, int, bool, object, int, bool)
0xb08: @ CreateInvItem(Stack[-3])
0xb09: Pop(0)
0xb0a: @@ SetItemName(Stack[-7])
0xb0b: Pop(0)
0xb0c: Push("Organ")
0xb0d: Push((int) 1)
0xb0e: @@ SetProperty(Stack[-2], Stack[-1])
0xb0f: Pop(2)
0xb10: @@ GetItemID(Stack[-2])
0xb11: Pop(0)
0xb12: Push((int) 0)
0xb13: Push((int) 1)
0xb14: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xb15: Pop(2)
0xb16: Return(); Pop(6)

0xb17: Stack[-3] = 0
0xb18: PushEmpty(int)
0xb19: Call2 0xad5

0xb1a: Pop(0)
0xb1b: Push((int) 1)
0xb1c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xb1d: IF (Stack[-1] == 0) GOTO 0xb1f; Pop(1)

0xb1e: Return(); Pop(0)

0xb1f: PushEmpty(string)
0xb20: Stack[-1] = "liver"
0xb21: Call2 0xb07

0xb22: Pop(1)
0xb23: PushEmpty(string)
0xb24: Stack[-1] = "kidney"
0xb25: Call2 0xb07

0xb26: Pop(1)
0xb27: PushEmpty(string)
0xb28: Stack[-1] = "heart"
0xb29: Call2 0xb07

0xb2a: Pop(1)
0xb2b: PushEmpty(string)
0xb2c: Stack[-1] = "blood"
0xb2d: Call2 0xb07

0xb2e: Pop(1)
0xb2f: Return(); Pop(0)

0xb30: PushEmpty(int, bool, int, bool)
0xb31: Push((int) 0)
0xb32: @ ClearSubContainer(Stack[-1])
0xb33: Pop(1)
0xb34: PushEmpty(int, int)
0xb35: Stack[-2] = (int) 300
0xb36: Stack[-1] = (int) 750
0xb37: Call2 0xae8

0xb38: Pop(2)
0xb39: PushEmpty(string, int, int)
0xb3a: Stack[-3] = "Knife"
0xb3b: Stack[-2] = (int) 1
0xb3c: Stack[-1] = (int) 8
0xb3d: Call2 0x989

0xb3e: Pop(3)
0xb3f: PushEmpty(string, int, int)
0xb40: Stack[-3] = "lockpick"
0xb41: Stack[-2] = (int) 1
0xb42: Stack[-1] = (int) 6
0xb43: Call2 0x989

0xb44: Pop(3)
0xb45: PushEmpty(int, string)
0xb46: Stack[-1] = "grabitel_mark"
0xb47: Call2 0xb4e

0xb48: Pop(1)
0xb49: Push((int) 0)
0xb4a: Push((int) 1)
0xb4b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb4c: Pop(3)
0xb4d: Return(); Pop(4)

0xb4e: PushEmpty(int, int)
0xb4f: @ GetInvItemByName(Stack[-1], Stack[-3])
0xb50: Pop(0)
0xb51: Stack[-4] = Stack[-1]
0xb52: Return(); Pop(2)

0xb53: PushEmpty(object, object)
0xb54: @ GetScene(Stack[-1])
0xb55: Pop(0)
0xb56: PushEmpty(object)
0xb57: Call2 0x9bd

0xb58: Pop(0)
0xb59: @@ RemoveStationaryActor(Stack[-1])
0xb5a: Pop(1)
0xb5b: PushEmpty(bool, string, string)
0xb5c: Stack[-2] = "quest_b3_02"
0xb5d: Stack[-1] = "grabitel_dead"
0xb5e: Call2 0xa40

0xb5f: Pop(3)
0xb60: PushEmpty(bool, object)
0xb61: Stack[-1] = Stack[-5]
0xb62: Call2 0x792

0xb63: Pop(1)
0xb64: IF (Stack[-1] == 0) GOTO 0xb6a; Pop(1)

0xb65: PushEmpty(bool, object, float)
0xb66: Stack[-2] = Stack[-6]
0xb67: Stack[-1] = (float) 0.03
0xb68: Call2 0xa09

0xb69: Pop(3)
0xb6a: PushEmpty(object)
0xb6b: Stack[-1] = Stack[-4]
0xb6c: Push(-1, 0); TaskCall(7)
0xb6d: Call2 0x6ce

0xb6e: Pop(-1, 0); TaskReturn
0xb6f: Pop(1)
0xb70: Return(); Pop(2)

0xb71: Stack[-1] = 0
0xb72: PushEmpty()
0xb73: PushEmpty(object, int, float)
0xb74: Stack[-3] = Stack[-7]
0xb75: Stack[-2] = Stack[-6]
0xb76: Stack[-1] = Stack[-5]
0xb77: Call2 0x8a1

0xb78: Pop(3)
0xb79: Return(); Pop(0)

0xb7a: PushEmpty()
0xb7b: PushEmpty(object, int, float, cvector, cvector)
0xb7c: Stack[-5] = Stack[-11]
0xb7d: Stack[-4] = Stack[-10]
0xb7e: Stack[-3] = Stack[-9]
0xb7f: Stack[-2] = Stack[-7]
0xb80: Stack[-1] = Stack[-6]
0xb81: Call2 0x8e5

0xb82: Pop(5)
0xb83: Return(); Pop(0)

0xb84: PushEmpty(float, float)
0xb85: Push("health")
0xb86: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb87: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb88: Push("health")
0xb89: @ GetProperty(Stack[-1], Stack[-2])
0xb8a: Pop(1)
0xb8b: Push((int) 0)
0xb8c: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xb8d: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb8e: @ SignalDeath(Stack[-4])
0xb8f: Pop(0)
0xb90: Return(); Pop(2)

0xb91: PushEmpty()
0xb92: PushEmpty(object)
0xb93: Stack[-1] = Stack[-2]
0xb94: Call2 0xb53

0xb95: Pop(1)
0xb96: Return(); Pop(0)

0xb97: PushEmpty()
0xb98: Return(); Pop(0)

0xb99: PushEmpty()
0xb9a: Stack[-3] = (bool) 0
0xb9b: Return(); Pop(0)

