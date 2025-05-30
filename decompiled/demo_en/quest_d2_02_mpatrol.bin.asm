GlobalVarCount = 3
	G_VAR_0 bool 
	G_VAR_1 object 
	G_VAR_2 bool 

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
	player
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
	head
	GetPosition
	walk
	run
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	kill_player
	fire
	bullet
	phys
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
	1
	2
	add
	size
	get
	scripted
	blood_dir.xml
	Can't find lsh animation : 
	reputation
	battle
	quest_d2_02
	player_attack
	completed
	branch
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	mpatrol_unload
	revolver_ammo
	alpha_pills
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	FindActor (2 args)
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
	irand (2 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	GetScene (1 args)
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
	SetRTEnvelope (2 args)
	Hold (0 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	FollowPath (3 args)
	Rotate (3 args)
	WaitForAnimEnd (1 args)
	StopGroup0 (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x511
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x3b0 Vars = (int)
		EVENT_1 Op = 0x3cb Vars = (object)
		EVENT_2 Op = 0x3da Vars = (object)
		EVENT_10 Op = 0x460 Vars = (object)
		EVENT_41 Op = 0x46b Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x48c Vars = (object)
		EVENT_22 Op = 0x50b Vars = (object, int, float, float)
		EVENT_16 Op = 0x50d Vars = (object, string)
		EVENT_41 Op = 0x50f Vars = (object)
	GTASK_5 Vars = (cvector, cvector) Params = 0
		EVENT_0 Op = 0x52e Vars = (object)
		EVENT_26 Op = 0x53b Vars = (string)

Events:
EVENT_17 Op = 0x875 Vars = (object)
EVENT_6 Op = 0x886 Vars = ()
EVENT_22 Op = 0x8ab Vars = (object, int, float, float)
EVENT_43 Op = 0x8b3 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x8bd Vars = (object, string)
EVENT_41 Op = 0x8ca Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x6ee

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x8d2

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x8d0

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x8d4

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x8d6

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x828

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
0x41: Call2 0x732

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
0x54: Push((int) 507522)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 507523)
0x5a: Push((int) -1)
0x5b: Push((int) 8305)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 507524)
0x5f: Push((int) -1)
0x60: Push((int) 8306)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x8d8

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x743

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
0x86: Call2 0x8d8

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
0x96: Call2 0x753

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x76d

0x9f: Pop(0)
0xa0: Push((int) 8305)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x81a

0xa7: Pop(2)
0xa8: Push((int) 8306)
0xa9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xab: PushEmpty(object, object)
0xac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae: Call2 0x821

0xaf: Pop(2)
0xb0: Push((int) 8304)
0xb1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xb3: PushEmpty(string)
0xb4: Stack[-1] = "Neutral"
0xb5: Call2 0x84

0xb6: Pop(1)
0xb7: Push((int) 507522)
0xb8: @@ SetMessage(Stack[-1])
0xb9: Pop(1)
0xba: @@ ClearReplies()
0xbb: Pop(0)
0xbc: Push((int) 507523)
0xbd: Push((int) -1)
0xbe: Push((int) 8305)
0xbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0: Pop(3)
0xc1: Push((int) 507524)
0xc2: Push((int) -1)
0xc3: Push((int) 8306)
0xc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5: Pop(3)
0xc6: Return(); Pop(0)

0xc7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc8: PushEmpty(bool)
0xc9: Call2 0x8d8

0xca: Pop(0)
0xcb: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcc: @ lshStopAnimation()
0xcd: Pop(0)
0xce: GOTO 0xd1

0xcf: @ StopAnimation()
0xd0: Pop(0)
0xd1: Return(); Pop(0)

0xd2: GOTO 0x9b

0xd3: Return(); Pop(0)

0xd4: PushEmpty(object, object)
0xd5: Push("player")
0xd6: @ FindActor(Stack[-2], Stack[-1])
0xd7: Pop(1)
0xd8: Pop(0); Push((bool) Stack[-1] == 0)
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: Return(); Pop(2)

0xdb: PushEmpty(object, bool, float)
0xdc: Stack[-3] = Stack[-4]
0xdd: Stack[-2] = (bool) 1
0xde: Stack[-1] = (float) 180.0
0xdf: Call2 0xe9

0xe0: Pop(3)
0xe1: Return(); Pop(2)

0xe2: Stack[-1] = 0
0xe3: PushEmpty()
0xe4: Stack[-3] = (float) 0.3
0xe5: Return(); Pop(0)

0xe6: PushEmpty()
0xe7: Stack[-3] = (int) 0
0xe8: Return(); Pop(0)

0xe9: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xea: PushEmpty()
0xeb: Call2 0x1ce

0xec: Pop(0)
0xed: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xee: Push("@GetAttackDistance")
0xef: Push((int) 1)
0xf0: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xf1: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf2: @@ GetAttackDistance(Stack[-11])
0xf3: Pop(0)
0xf4: Push((int) 50)
0xf5: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xf6: GOTO 0xf8

0xf7: Stack[-11] = Stack[-23]
0xf8: Push((int) 150)
0xf9: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfb: Stack[-11] = (int) 150
0xfc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xfd: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xfe: @ IsPlayerActor(Stack[-0], Stack[-8])
0xff: Pop(0)
0x100: Push(Stack[-8])
0x101: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x102: Push("attack")
0x103: @ PlayGlobalMusic(Stack[-1])
0x104: Pop(1)
0x105: PushEmpty(object)
0x106: Call2 0x79d

0x107: Pop(0)
0x108: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x109: Pop(1)
0x10a: Push(Stack[-24])
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-7] = (bool) 0
0x10d: GOTO 0x10f

0x10e: Stack[-7] = (bool) 1
0x10f: Push((float)400.0)
0x110: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x111: PushEmpty(bool)
0x112: Stack[-1] = (bool) 0
0x113: PushEmpty(bool, object)
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x64d

0x116: Pop(1)
0x117: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x118: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x119: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x11a: Stack[-1] = (bool) 1
0x11b: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x11c: PushEmpty()
0x11d: Call2 0x36b

0x11e: Pop(0)
0x11f: @@ GetPFPosition(Stack[-10])
0x120: Pop(0)
0x121: @ GetPFPosition(Stack[-9])
0x122: Pop(0)
0x123: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x124: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x125: Pop(0); Push(Stack[-6] * Stack[-6]);
0x126: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x128: PushEmpty(bool, object, float, float, bool, bool)
0x129: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x12a: Stack[-4] = Stack[-17]
0x12b: Stack[-3] = (float) 10000.0
0x12c: Stack[-2] = (bool) 1
0x12d: Stack[-1] = (bool) 0
0x12e: Push(-6, 3); TaskCall(3)
0x12f: Call2 0x37f

0x130: Pop(-6, 3); TaskReturn
0x131: Pop(5)
0x132: Pop(1); Push((bool) Stack[-1] == 0)
0x133: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x134: GOTO 0x1bd

0x135: Stack[-7] = (bool) 0
0x136: GOTO 0x1bc

0x137: Pop(0); Push(Stack[-23] * Stack[-23]);
0x138: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x13a: @@ GetPFPosition(Stack[-3])
0x13b: Pop(0)
0x13c: @ CanReachByPF(Stack[-2], Stack[-3])
0x13d: Pop(0)
0x13e: Pop(0); Push((bool) Stack[-2] == 0)
0x13f: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x140: PushEmpty(bool, object, float, float, bool, bool)
0x141: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x142: Stack[-4] = Stack[-17]
0x143: Stack[-3] = (float) 10000.0
0x144: Stack[-2] = (bool) 1
0x145: Stack[-1] = (bool) 0
0x146: Push(-6, 3); TaskCall(3)
0x147: Call2 0x37f

0x148: Pop(-6, 3); TaskReturn
0x149: Pop(5)
0x14a: Pop(1); Push((bool) Stack[-1] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14c: GOTO 0x1bd

0x14d: Stack[-7] = (bool) 0
0x14e: GOTO 0x111

0x14f: Pop(0); Push((bool) Stack[-7] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x151: PushEmpty(object)
0x152: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x153: Call2 0x6e3

0x154: Pop(1)
0x155: Push("all")
0x156: Push("attack_on")
0x157: @ PlayAnimation(Stack[-2], Stack[-1])
0x158: Pop(2)
0x159: @ WaitForAnimEnd()
0x15a: Pop(0)
0x15b: PushEmpty()
0x15c: Call2 0x36b

0x15d: Pop(0)
0x15e: @ StopAsync()
0x15f: Pop(0)
0x160: Stack[-7] = (bool) 1
0x161: PushEmpty(bool, object)
0x162: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x163: Call2 0x64d

0x164: Pop(1)
0x165: Pop(1); Push((bool) Stack[-1] == 0)
0x166: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x167: GOTO 0x1bd

0x168: @ rand(Stack[-1])
0x169: Pop(0)
0x16a: PushEmpty(bool)
0x16b: Stack[-1] = (bool) 1
0x16c: Push((float)0.25)
0x16d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16f: PushEmpty(bool)
0x170: Call2 0x340

0x171: Pop(0)
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Stack[-1] = (bool) 0
0x174: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x175: @ Face(Stack[-0])
0x176: Pop(0)
0x177: PushEmpty()
0x178: Call2 0x372

0x179: Pop(0)
0x17a: Push("all")
0x17b: Push("attack_stay")
0x17c: @ PlayAnimation(Stack[-2], Stack[-1])
0x17d: Pop(2)
0x17e: PushEmpty(bool, float)
0x17f: Stack[-1] = Stack[-25]
0x180: Call2 0x2bc

0x181: Pop(2)
0x182: @ StopAsync()
0x183: Pop(0)
0x184: GOTO 0x1b3

0x185: @ Face(Stack[-0])
0x186: Pop(0)
0x187: Push("all")
0x188: Push("fjump")
0x189: @ PlayAnimation(Stack[-2], Stack[-1])
0x18a: Pop(2)
0x18b: @ WaitForAnimEnd()
0x18c: Pop(0)
0x18d: PushEmpty()
0x18e: Call2 0x36b

0x18f: Pop(0)
0x190: Push(CVector(0.0, 0.0, 0.0))
0x191: @ SetSpeed(Stack[-1])
0x192: Pop(1)
0x193: @ Stop()
0x194: Pop(0)
0x195: @ StopAsync()
0x196: Pop(0)
0x197: PushEmpty(bool)
0x198: Call2 0x340

0x199: Pop(0)
0x19a: Pop(1); Push((bool) Stack[-1] == 0)
0x19b: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x19c: PushEmpty(bool, object)
0x19d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19e: Call2 0x64d

0x19f: Pop(1)
0x1a0: Pop(1); Push((bool) Stack[-1] == 0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: GOTO 0x1bd

0x1a3: @@ GetPFPosition(Stack[-10])
0x1a4: Pop(0)
0x1a5: @ GetPFPosition(Stack[-9])
0x1a6: Pop(0)
0x1a7: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1a8: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1a9: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1aa: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ac: PushEmpty(bool, float)
0x1ad: Stack[-1] = Stack[-25]
0x1ae: Call2 0x218

0x1af: Pop(1)
0x1b0: Pop(1); Push((bool) Stack[-1] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: GOTO 0x1bd

0x1b3: GOTO 0x1bc

0x1b4: PushEmpty(bool, float)
0x1b5: Stack[-1] = Stack[-25]
0x1b6: Call2 0x218

0x1b7: Pop(1)
0x1b8: Pop(1); Push((bool) Stack[-1] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: GOTO 0x1bd

0x1bb: Stack[-7] = (bool) 1
0x1bc: GOTO 0x111

0x1bd: @ WaitForAnimEnd()
0x1be: Pop(0)
0x1bf: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: Return(); Pop(22)

0x1c2: Push("all")
0x1c3: Push("attack_off")
0x1c4: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c5: Pop(2)
0x1c6: @ WaitForAnimEnd()
0x1c7: Pop(0)
0x1c8: Push(Stack[-8])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1ca: Push((float)2.0)
0x1cb: @ Sleep(Stack[-1])
0x1cc: Pop(1)
0x1cd: Return(); Pop(22)

0x1ce: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x1cf: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1d0: Push("all")
0x1d1: Push("attack_begin")
0x1d2: Push((int) 1)
0x1d3: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x1d4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d5: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1d6: Pop(2)
0x1d7: Pop(0); Push((bool) Stack[-3] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: GOTO 0x1dd

0x1da: Push((int) 1)
0x1db: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1dc: GOTO 0x1d0

0x1dd: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1de: Push("attack")
0x1df: Push((int) 1)
0x1e0: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e2: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x1e3: Pop(1)
0x1e4: Pop(0); Push((bool) Stack[-2] == 0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: GOTO 0x1ea

0x1e7: Push((int) 1)
0x1e8: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1e9: GOTO 0x1de

0x1ea: Push("all")
0x1eb: Push("bjump")
0x1ec: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(2)
0x1ee: Push(CvectorIndex(Stack[-1], 2))
0x1ef: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1f0: Return(); Pop(6)

0x1f1: PushEmpty(object, float, float, object, float, float)
0x1f2: Push((float)0.9)
0x1f3: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1f4: @ GetVictim(Stack[-1], Stack[-4])
0x1f5: Pop(1)
0x1f6: @ ReportAttack(Stack[-0])
0x1f7: Pop(0)
0x1f8: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1f9: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x1fa: PushEmpty(float, object, int)
0x1fb: Stack[-2] = Stack[-6]
0x1fc: Stack[-1] = Stack[-10]
0x1fd: Call2 0xe3

0x1fe: Stack[-5] = Stack[-3]
0x1ff: Pop(3)
0x200: PushEmpty(float, object, float, int)
0x201: Stack[-3] = Stack[-7]
0x202: Stack[-2] = Stack[-6]
0x203: PushEmpty(int, object, int)
0x204: Stack[-2] = Stack[-10]
0x205: Stack[-1] = Stack[-14]
0x206: Call2 0xe6

0x207: Stack[-4] = Stack[-3]
0x208: Pop(3)
0x209: Call2 0x5db

0x20a: Stack[-5] = Stack[-4]
0x20b: Pop(4)
0x20c: PushEmpty(int)
0x20d: Call2 0x370

0x20e: Pop(0)
0x20f: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x210: Pop(1)
0x211: PushEmpty(object, float)
0x212: Stack[-2] = Stack[-5]
0x213: Stack[-1] = Stack[-3]
0x214: Call2 0x377

0x215: Pop(2)
0x216: Return(); Pop(6)

0x217: Stack[-3] = 0
0x218: PushEmpty(int, bool, int, string, int, bool, int, string)
0x219: PushEmpty()
0x21a: Call2 0x36b

0x21b: Pop(0)
0x21c: @ irand(Stack[-4], Stack[-1])
0x21d: Pop(0)
0x21e: Push((int) 1)
0x21f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x220: @ Face(Stack[-0])
0x221: Pop(0)
0x222: Push((bool) 1)
0x223: @ SetAttackState(Stack[-1])
0x224: Pop(1)
0x225: PushEmpty()
0x226: Call2 0x80f

0x227: Pop(0)
0x228: Push("all")
0x229: Push("attack_begin")
0x22a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x22b: @ PlayAnimation(Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: @ WaitForAnimEnd()
0x22e: Pop(0)
0x22f: PushEmpty()
0x230: Call2 0x34b

0x231: Pop(0)
0x232: PushEmpty(bool, object)
0x233: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x234: Call2 0x64d

0x235: Pop(1)
0x236: Pop(1); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x238: @ StopAsync()
0x239: Pop(0)
0x23a: Stack[-10] = (bool) 0
0x23b: Return(); Pop(8)

0x23c: PushEmpty(float, int)
0x23d: Stack[-2] = Stack[-11]
0x23e: Stack[-1] = Stack[-6]
0x23f: Call2 0x1f1

0x240: Pop(2)
0x241: Push("all")
0x242: Push("attack_middle")
0x243: Pop(1); Push(Stack[-1] + Stack[-6]);
0x244: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x245: Pop(2)
0x246: Push(Stack[-3])
0x247: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x248: PushEmpty()
0x249: Call2 0x80f

0x24a: Pop(0)
0x24b: Push("all")
0x24c: Push("attack_middle")
0x24d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x24e: @ PlayAnimation(Stack[-2], Stack[-1])
0x24f: Pop(2)
0x250: @ WaitForAnimEnd()
0x251: Pop(0)
0x252: PushEmpty()
0x253: Call2 0x36b

0x254: Pop(0)
0x255: PushEmpty(bool, object)
0x256: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x257: Call2 0x64d

0x258: Pop(1)
0x259: Pop(1); Push((bool) Stack[-1] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25b: @ StopAsync()
0x25c: Pop(0)
0x25d: Stack[-10] = (bool) 0
0x25e: Return(); Pop(8)

0x25f: PushEmpty(float, int)
0x260: Stack[-2] = Stack[-11]
0x261: Stack[-1] = Stack[-6]
0x262: Call2 0x1f1

0x263: Pop(2)
0x264: Stack[-2] = (int) 1
0x265: Push("attack_middle")
0x266: Pop(1); Push(Stack[-1] + Stack[-5]);
0x267: Push("_")
0x268: Pop(2); Push(Stack[-2] + Stack[-1]);
0x269: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x26a: Push("all")
0x26b: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x26c: Pop(1)
0x26d: Pop(0); Push((bool) Stack[-3] == 0)
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: GOTO 0x28d

0x270: PushEmpty()
0x271: Call2 0x80f

0x272: Pop(0)
0x273: Push("all")
0x274: @ PlayAnimation(Stack[-1], Stack[-2])
0x275: Pop(1)
0x276: @ WaitForAnimEnd()
0x277: Pop(0)
0x278: PushEmpty()
0x279: Call2 0x36b

0x27a: Pop(0)
0x27b: PushEmpty(bool, object)
0x27c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27d: Call2 0x64d

0x27e: Pop(1)
0x27f: Pop(1); Push((bool) Stack[-1] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x281: @ StopAsync()
0x282: Pop(0)
0x283: Stack[-10] = (bool) 0
0x284: Return(); Pop(8)

0x285: PushEmpty(float, int)
0x286: Stack[-2] = Stack[-11]
0x287: Stack[-1] = Stack[-6]
0x288: Call2 0x1f1

0x289: Pop(2)
0x28a: Push((int) 1)
0x28b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x28c: GOTO 0x265

0x28d: Push((bool) 0)
0x28e: @ SetAttackState(Stack[-1])
0x28f: Pop(1)
0x290: Push("all")
0x291: Push("attack_end")
0x292: Pop(1); Push(Stack[-1] + Stack[-6]);
0x293: @ PlayAnimation(Stack[-2], Stack[-1])
0x294: Pop(2)
0x295: PushEmpty(bool)
0x296: Call2 0x379

0x297: Pop(0)
0x298: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x299: PushEmpty(bool, float)
0x29a: Stack[-1] = (float) 0.75
0x29b: Call2 0x2a1

0x29c: Pop(2)
0x29d: @ StopAsync()
0x29e: Pop(0)
0x29f: Stack[-10] = (bool) 1
0x2a0: Return(); Pop(8)

0x2a1: PushEmpty(float, bool, float, bool)
0x2a2: @ rand(Stack[-2])
0x2a3: Pop(0)
0x2a4: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a6: @ IsAnimationPlaying(Stack[-1])
0x2a7: Pop(0)
0x2a8: Pop(0); Push((bool) Stack[-1] == 0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: GOTO 0x2b4

0x2ab: PushEmpty(bool)
0x2ac: Call2 0x303

0x2ad: Pop(0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2af: Stack[-6] = (bool) 1
0x2b0: Return(); Pop(4)

0x2b1: @ sync()
0x2b2: Pop(0)
0x2b3: GOTO 0x2a6

0x2b4: GOTO 0x2ba

0x2b5: @ WaitForAnimEnd()
0x2b6: Pop(0)
0x2b7: PushEmpty()
0x2b8: Call2 0x36b

0x2b9: Pop(0)
0x2ba: Stack[-6] = (bool) 0
0x2bb: Return(); Pop(4)

0x2bc: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2bd: @ IsAnimationPlaying(Stack[-5])
0x2be: Pop(0)
0x2bf: Pop(0); Push((bool) Stack[-5] == 0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: GOTO 0x2e2

0x2c2: PushEmpty(bool)
0x2c3: Call2 0x303

0x2c4: Pop(0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c6: Stack[-12] = (bool) 1
0x2c7: Return(); Pop(10)

0x2c8: PushEmpty(bool, object)
0x2c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ca: Call2 0x64d

0x2cb: Pop(1)
0x2cc: Pop(1); Push((bool) Stack[-1] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-12] = (bool) 0
0x2cf: Return(); Pop(10)

0x2d0: @@ GetPFPosition(Stack[-4])
0x2d1: Pop(0)
0x2d2: @ GetPFPosition(Stack[-3])
0x2d3: Pop(0)
0x2d4: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x2d5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2d6: Pop(0); Push(Stack[-11] * Stack[-11]);
0x2d7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2d9: PushEmpty(bool, float)
0x2da: Stack[-1] = Stack[-13]
0x2db: Call2 0x218

0x2dc: Pop(2)
0x2dd: Stack[-12] = (bool) 1
0x2de: Return(); Pop(10)

0x2df: @ sync()
0x2e0: Pop(0)
0x2e1: GOTO 0x2bd

0x2e2: PushEmpty()
0x2e3: Call2 0x36b

0x2e4: Pop(0)
0x2e5: Stack[-12] = (bool) 0
0x2e6: Return(); Pop(10)

0x2e7: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2e8: PushEmpty(bool, object)
0x2e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ea: Call2 0x64d

0x2eb: Pop(1)
0x2ec: Pop(1); Push((bool) Stack[-1] == 0)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ee: Stack[-11] = (bool) 0
0x2ef: Return(); Pop(10)

0x2f0: PushEmpty(bool)
0x2f1: Call2 0x340

0x2f2: Pop(0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2f4: @@ GetPFPosition(Stack[-5])
0x2f5: Pop(0)
0x2f6: @ GetPFPosition(Stack[-4])
0x2f7: Pop(0)
0x2f8: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2f9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2fa: @@ GetAttackDistance(Stack[-1])
0x2fb: Pop(0)
0x2fc: Push((int) 50)
0x2fd: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2fe: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2ff: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x300: Return(); Pop(10)

0x301: Stack[-11] = (bool) 0
0x302: Return(); Pop(10)

0x303: PushEmpty(bool)
0x304: Stack[-1] = (bool) 0
0x305: PushEmpty(bool)
0x306: Call2 0x2e7

0x307: Pop(0)
0x308: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x309: PushEmpty(bool)
0x30a: Call2 0x313

0x30b: Pop(0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: Stack[-1] = (bool) 1
0x30e: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30f: Stack[-1] = (bool) 1
0x310: Return(); Pop(0)

0x311: Stack[-1] = (bool) 0
0x312: Return(); Pop(0)

0x313: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x314: @ GetScene(Stack[-5])
0x315: Pop(0)
0x316: Stack[-4] = (bool) 0
0x317: PushEmpty(cvector, object)
0x318: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x319: Call2 0x5ad

0x31a: Pop(1)
0x31b: Pop(1); Push(( -Stack[-1])
0x31c: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x31d: Pop(1)
0x31e: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: GOTO 0x33d

0x321: @ Face(Stack[-0])
0x322: Pop(0)
0x323: Push("all")
0x324: Push("bjump")
0x325: @ PlayAnimation(Stack[-2], Stack[-1])
0x326: Pop(2)
0x327: @@ GetPFPosition(Stack[-2])
0x328: Pop(0)
0x329: @ GetPFPosition(Stack[-1])
0x32a: Pop(0)
0x32b: @ WaitForAnimEnd()
0x32c: Pop(0)
0x32d: PushEmpty()
0x32e: Call2 0x36b

0x32f: Pop(0)
0x330: @ StopAsync()
0x331: Pop(0)
0x332: Push(CVector(0.0, 0.0, 0.0))
0x333: @ SetSpeed(Stack[-1])
0x334: Pop(1)
0x335: Stack[-4] = (bool) 1
0x336: PushEmpty(bool)
0x337: Call2 0x2e7

0x338: Pop(0)
0x339: Pop(1); Push((bool) Stack[-1] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33b: GOTO 0x33d

0x33c: GOTO 0x317

0x33d: Stack[-11] = Stack[-4]
0x33e: Return(); Pop(10)

0x33f: Stack[-5] = 0
0x340: PushEmpty(bool, bool)
0x341: Push("IsAttacking")
0x342: Push((int) 1)
0x343: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x344: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x345: @@ IsAttacking(Stack[-1])
0x346: Pop(0)
0x347: Stack[-3] = Stack[-1]
0x348: Return(); Pop(2)

0x349: Stack[-3] = (bool) 0
0x34a: Return(); Pop(2)

0x34b: PushEmpty(float, int, float, int)
0x34c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: Return(); Pop(4)

0x34f: Push( Stack[5 + Tasks[-1].StackPointer] )
0x350: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x351: Push((int) -1)
0x352: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x353: Push((int) 0)
0x354: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x356: Return(); Pop(4)

0x357: @ rand(Stack[-2])
0x358: Pop(0)
0x359: PushEmpty(float)
0x35a: Call2 0x37d

0x35b: Pop(0)
0x35c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x35e: @ irand(Stack[-1], Stack[-2])
0x35f: Pop(0)
0x360: Push((int) 1)
0x361: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x362: Push("attack")
0x363: Pop(1); Push(Stack[-1] + Stack[-2]);
0x364: @ Speak(Stack[-1])
0x365: Pop(1)
0x366: PushEmpty(int)
0x367: Call2 0x37b

0x368: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x369: Pop(1)
0x36a: Return(); Pop(4)

0x36b: PushEmpty(object)
0x36c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36d: Call2 0x806

0x36e: Pop(1)
0x36f: Return(); Pop(0)

0x370: Stack[-1] = (int) 0
0x371: Return(); Pop(0)

0x372: PushEmpty(string)
0x373: Stack[-1] = "attack_stay"
0x374: Call2 0x774

0x375: Pop(1)
0x376: Return(); Pop(0)

0x377: PushEmpty()
0x378: Return(); Pop(0)

0x379: Stack[-1] = (bool) 1
0x37a: Return(); Pop(0)

0x37b: Stack[-1] = (int) 1
0x37c: Return(); Pop(0)

0x37d: Stack[-1] = (float) 0.5
0x37e: Return(); Pop(0)

0x37f: PushEmpty(bool, bool, bool, bool)
0x380: PushEmpty(object)
0x381: Stack[-1] = Stack[-10]
0x382: Call2 0x806

0x383: Pop(1)
0x384: Push((int) 1)
0x385: Push((int) 5)
0x386: @ SetTimer(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: @ CanSee(Stack[-2], Stack[-9])
0x389: Pop(0)
0x38a: Push(Stack[-2])
0x38b: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x38d: PushEmpty(object)
0x38e: Stack[-1] = Stack[-10]
0x38f: Call2 0x762

0x390: Pop(1)
0x391: GOTO 0x393

0x392: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x393: PushEmpty(bool, object)
0x394: Stack[-1] = Stack[-11]
0x395: Call2 0x5b4

0x396: Pop(1)
0x397: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x398: PushEmpty(object)
0x399: Call2 0x79d

0x39a: Pop(0)
0x39b: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x39c: Pop(1)
0x39d: PushEmpty(bool, object, float, float, bool, bool)
0x39e: Stack[-5] = Stack[-15]
0x39f: Stack[-4] = Stack[-14]
0x3a0: Stack[-3] = Stack[-13]
0x3a1: Stack[-2] = Stack[-12]
0x3a2: Stack[-1] = Stack[-11]
0x3a3: Call2 0x3e8

0x3a4: Stack[-7] = Stack[-6]
0x3a5: Pop(6)
0x3a6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a8: Push("head")
0x3a9: @ UnlookAsync(Stack[-1])
0x3aa: Pop(1)
0x3ab: Push((int) 1)
0x3ac: @ KillTimer(Stack[-1])
0x3ad: Pop(1)
0x3ae: Stack[-10] = Stack[-1]
0x3af: Return(); Pop(4)

0x3b0: PushEmpty()
0x3b1: Push((int) 1)
0x3b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b4: PushEmpty(object)
0x3b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b6: Call2 0x806

0x3b7: Pop(1)
0x3b8: GOTO 0x3bd

0x3b9: PushEmpty(int)
0x3ba: Stack[-1] = Stack[-2]
0x3bb: Call2 0x44e

0x3bc: Pop(1)
0x3bd: Return(); Pop(0)

0x3be: Push((int) 1)
0x3bf: @ KillTimer(Stack[-1])
0x3c0: Pop(1)
0x3c1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3c4: Push("head")
0x3c5: @ UnlookAsync(Stack[-1])
0x3c6: Pop(1)
0x3c7: PushEmpty()
0x3c8: Call2 0x464

0x3c9: Pop(0)
0x3ca: Return(); Pop(0)

0x3cb: PushEmpty()
0x3cc: PushEmpty(bool)
0x3cd: Stack[-1] = (bool) 0
0x3ce: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d2: Stack[-1] = (bool) 1
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3d5: PushEmpty(object)
0x3d6: Stack[-1] = Stack[-2]
0x3d7: Call2 0x762

0x3d8: Pop(1)
0x3d9: Return(); Pop(0)

0x3da: PushEmpty()
0x3db: PushEmpty(bool)
0x3dc: Stack[-1] = (bool) 0
0x3dd: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3df: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e1: Stack[-1] = (bool) 1
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3e4: Push("head")
0x3e5: @ UnlookAsync(Stack[-1])
0x3e6: Pop(1)
0x3e7: Return(); Pop(0)

0x3e8: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3e9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3ea: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3eb: Stack[-7] = Stack[-17]
0x3ec: PushEmpty(bool, object)
0x3ed: Stack[-1] = Stack[-23]
0x3ee: Call2 0x474

0x3ef: Pop(1)
0x3f0: Pop(1); Push((bool) Stack[-1] == 0)
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f2: Stack[-22] = (bool) 0
0x3f3: Return(); Pop(16)

0x3f4: @@ GetPosition(Stack[-5])
0x3f5: Pop(0)
0x3f6: @ GetPosition(Stack[-4])
0x3f7: Pop(0)
0x3f8: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3f9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3fa: PushEmpty(bool)
0x3fb: Stack[-1] = (bool) 0
0x3fc: Push((int) 0)
0x3fd: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3ff: Pop(0); Push(Stack[-20] * Stack[-20]);
0x400: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: Stack[-1] = (bool) 1
0x403: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x404: @ Stop()
0x405: Pop(0)
0x406: Stack[-22] = (bool) 0
0x407: Return(); Pop(16)

0x408: Pop(0); Push(Stack[-20] * Stack[-20]);
0x409: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x40b: @@ GetPFPosition(Stack[-5])
0x40c: Pop(0)
0x40d: @ FindPathTo(Stack[-1], Stack[-5])
0x40e: Pop(0)
0x40f: Pop(0); Push(( Stack[-1] != 0 )
0x410: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x411: Stack[-6] = Stack[-1]
0x412: Stack[-1] = 0
0x413: Pop(0); Push(( Stack[-6] != 0 )
0x414: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x415: Push(Stack[-7])
0x416: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x417: Stack[-7] = (bool) 0
0x418: @ RotatePath(Stack[-6], Stack[-8])
0x419: Pop(0)
0x41a: Pop(0); Push((bool) Stack[-8] == 0)
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: GOTO 0x44c

0x41d: Push((int) 0)
0x41e: Push((float)0.3)
0x41f: @ SetTimer(Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: PushEmpty(string)
0x422: Call2 0x47b

0x423: Pop(0)
0x424: PushEmpty(string)
0x425: Call2 0x47d

0x426: Pop(0)
0x427: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x428: Pop(2)
0x429: Pop(0); Push((bool) Stack[-8] == 0)
0x42a: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x42c: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42d: Stack[-6] = 0
0x42e: GOTO 0x44c

0x42f: GOTO 0x431

0x430: GOTO 0x44b

0x431: GOTO 0x433

0x432: Stack[-6] = 0
0x433: GOTO 0x444

0x434: Push((int) 0)
0x435: @ KillTimer(Stack[-1])
0x436: Pop(1)
0x437: Push((float)0.5)
0x438: @ Sleep(Stack[-1], Stack[-9])
0x439: Pop(1)
0x43a: Pop(0); Push((bool) Stack[-8] == 0)
0x43b: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x43d: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43e: Stack[-6] = 0
0x43f: GOTO 0x44c

0x440: Push((int) 0)
0x441: Push((float)0.3)
0x442: @ SetTimer(Stack[-2], Stack[-1])
0x443: Pop(2)
0x444: Stack[-1] = 0
0x445: GOTO 0x44a

0x446: Push((int) 0)
0x447: @ KillTimer(Stack[-1])
0x448: Pop(1)
0x449: GOTO 0x44c

0x44a: Stack[-6] = 0
0x44b: GOTO 0x3ec

0x44c: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x44d: Return(); Pop(16)

0x44e: PushEmpty()
0x44f: Push((int) 0)
0x450: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x452: Return(); Pop(0)

0x453: PushEmpty(bool, object)
0x454: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x455: Call2 0x474

0x456: Pop(1)
0x457: Pop(1); Push((bool) Stack[-1] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x459: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x45a: Push((int) 0)
0x45b: @ KillTimer(Stack[-1])
0x45c: Pop(1)
0x45d: @ Stop()
0x45e: Pop(0)
0x45f: Return(); Pop(0)

0x460: PushEmpty()
0x461: @ RequestClearPath(Stack[-1])
0x462: Pop(0)
0x463: Return(); Pop(0)

0x464: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x465: Push((int) 0)
0x466: @ KillTimer(Stack[-1])
0x467: Pop(1)
0x468: @ Stop()
0x469: Pop(0)
0x46a: Return(); Pop(0)

0x46b: PushEmpty()
0x46c: PushEmpty()
0x46d: Call2 0x3be

0x46e: Pop(0)
0x46f: PushEmpty(object)
0x470: Stack[-1] = Stack[-2]
0x471: Call2 0x8ca

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty()
0x475: PushEmpty(bool, object)
0x476: Stack[-1] = Stack[-3]
0x477: Call2 0x64d

0x478: Stack[-4] = Stack[-2]
0x479: Pop(2)
0x47a: Return(); Pop(0)

0x47b: Stack[-1] = "walk"
0x47c: Return(); Pop(0)

0x47d: Stack[-1] = "run"
0x47e: Return(); Pop(0)

0x47f: PushEmpty()
0x480: PushEmpty(object)
0x481: Stack[-1] = Stack[-2]
0x482: Call2 0x496

0x483: Pop(1)
0x484: Push((int) 50)
0x485: Push((int) 40)
0x486: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x487: Pop(2)
0x488: @ Hold()
0x489: Pop(0)
0x48a: GOTO 0x488

0x48b: Return(); Pop(0)

0x48c: PushEmpty(bool, bool)
0x48d: @ IsOverrideActive(Stack[-1])
0x48e: Pop(0)
0x48f: Pop(0); Push((bool) Stack[-1] == 0)
0x490: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x491: PushEmpty(object)
0x492: Stack[-1] = Stack[-4]
0x493: Call2 0x83f

0x494: Pop(1)
0x495: Return(); Pop(2)

0x496: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x497: Pop(0); Push((bool) Stack[-21] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x499: PushEmpty(string)
0x49a: Stack[-1] = "fdie"
0x49b: Call2 0x4f1

0x49c: Pop(1)
0x49d: GOTO 0x4f0

0x49e: @@ GetPosition(Stack[-10])
0x49f: Pop(0)
0x4a0: @ GetPosition(Stack[-9])
0x4a1: Pop(0)
0x4a2: @ GetDirection(Stack[-8])
0x4a3: Pop(0)
0x4a4: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4a5: Push(CvectorIndex(Stack[-7], 0))
0x4a6: Push(CvectorIndex(Stack[-9], 0))
0x4a7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4a8: Push(CvectorIndex(Stack[-8], 2))
0x4a9: Push(CvectorIndex(Stack[-10], 2))
0x4aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4ac: Push((int) 0)
0x4ad: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4af: Stack[-6] = "fdie"
0x4b0: GOTO 0x4b2

0x4b1: Stack[-6] = "bdie"
0x4b2: @ RemoveRTEnvelope()
0x4b3: Pop(0)
0x4b4: @ SetDeathState()
0x4b5: Pop(0)
0x4b6: @ Stop()
0x4b7: Pop(0)
0x4b8: @ StopAsync()
0x4b9: Pop(0)
0x4ba: Stack[-5] = Stack[-21]
0x4bb: Push("GetScriptProperty")
0x4bc: Push((int) 2)
0x4bd: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4be: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4bf: Push("Owner")
0x4c0: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4c1: Pop(1)
0x4c2: Push(Stack[-4])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c4: Push("Owner")
0x4c5: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x4c6: Pop(1)
0x4c7: Pop(0); Push((bool) Stack[-5] == 0)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c9: Stack[-5] = Stack[-21]
0x4ca: Push("@GetEyesHeight")
0x4cb: Push((int) 1)
0x4cc: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4ce: @@ GetEyesHeight(Stack[-2])
0x4cf: Pop(0)
0x4d0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4d1: Push(CvectorIndex(Stack[-1], 1))
0x4d2: Stack[-1] = Stack[-3]
0x4d3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4d4: Push("head")
0x4d5: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4d6: Pop(1)
0x4d7: Stack[-3] = (bool) 1
0x4d8: GOTO 0x4da

0x4d9: Stack[-3] = (bool) 0
0x4da: PushEmpty(string)
0x4db: Stack[-1] = Stack[-7]
0x4dc: Call2 0x774

0x4dd: Pop(1)
0x4de: Push("all")
0x4df: @ PlayAnimation(Stack[-1], Stack[-7])
0x4e0: Pop(1)
0x4e1: @ WaitForAnimEnd()
0x4e2: Pop(0)
0x4e3: Push(Stack[-3])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e5: @ StopAsync()
0x4e6: Pop(0)
0x4e7: Push("head")
0x4e8: @ UnlookAsync(Stack[-1])
0x4e9: Pop(1)
0x4ea: Push("all")
0x4eb: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x4ec: Pop(1)
0x4ed: @ RemoveEnvelope()
0x4ee: Pop(0)
0x4ef: Stack[-5] = 0
0x4f0: Return(); Pop(20)

0x4f1: PushEmpty()
0x4f2: @ RemoveRTEnvelope()
0x4f3: Pop(0)
0x4f4: @ SetDeathState()
0x4f5: Pop(0)
0x4f6: @ Stop()
0x4f7: Pop(0)
0x4f8: @ StopAsync()
0x4f9: Pop(0)
0x4fa: @ StopSecondaryAnimation()
0x4fb: Pop(0)
0x4fc: PushEmpty(string)
0x4fd: Stack[-1] = Stack[-2]
0x4fe: Call2 0x774

0x4ff: Pop(1)
0x500: Push("all")
0x501: @ PlayAnimation(Stack[-1], Stack[-2])
0x502: Pop(1)
0x503: @ WaitForAnimEnd()
0x504: Pop(0)
0x505: Push("all")
0x506: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x507: Pop(1)
0x508: @ RemoveEnvelope()
0x509: Pop(0)
0x50a: Return(); Pop(0)

0x50b: PushEmpty()
0x50c: Return(); Pop(0)

0x50d: PushEmpty()
0x50e: Return(); Pop(0)

0x50f: PushEmpty()
0x510: Return(); Pop(0)

0x511: Push(GlobalVars[2])
0x512: Stack[-1] = (bool) 0
0x513: GlobalVars[2] = Stack[-1]; Pop(1)
0x514: PushEmpty()
0x515: Call2 0x526

0x516: Pop(0)
0x517: Return(); Pop(0)

0x518: PushEmpty()
0x519: PushEmpty(int, object)
0x51a: Stack[-1] = Stack[-3]
0x51b: Push(-2, 1); TaskCall(0)
0x51c: Call2 0x0

0x51d: Pop(-2, 1); TaskReturn
0x51e: Pop(2)
0x51f: Push(GlobalVars[2])
0x520: Stack[-1] = (bool) 1
0x521: GlobalVars[2] = Stack[-1]; Pop(1)
0x522: Return(); Pop(0)

0x523: Push(GlobalVars[2])
0x524: Stack[-2] = !Stack[-1]; Pop(1);
0x525: Return(); Pop(0)

0x526: Push(GlobalVars[0])
0x527: Stack[-1] = (bool) 0
0x528: GlobalVars[0] = Stack[-1]; Pop(1)
0x529: PushEmpty()
0x52a: Call2 0x545

0x52b: Pop(0)
0x52c: Return(); Pop(0)

0x52d: Return(); Pop(0)

0x52e: PushEmpty()
0x52f: PushEmpty(bool)
0x530: Call2 0x523

0x531: Pop(0)
0x532: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x533: PushEmpty()
0x534: Call2 0x599

0x535: Pop(0)
0x536: PushEmpty(object)
0x537: Stack[-1] = Stack[-2]
0x538: Call2 0x518

0x539: Pop(1)
0x53a: Return(); Pop(0)

0x53b: PushEmpty()
0x53c: Push("kill_player")
0x53d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x53f: PushEmpty()
0x540: Push(-0, 6); TaskCall(2)
0x541: Call2 0xd4

0x542: Pop(-0, 6); TaskReturn
0x543: Pop(0)
0x544: Return(); Pop(0)

0x545: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x546: @ GetPFPosition(Stack[-1])
0x547: Pop(0)
0x548: @ GetDirection(Stack[-0])
0x549: Pop(0)
0x54a: PushEmpty()
0x54b: Call2 0x59e

0x54c: Pop(0)
0x54d: Push((int) 10)
0x54e: @ irand(Stack[-5], Stack[-1])
0x54f: Pop(1)
0x550: Push((int) 5)
0x551: Pop(1); Push(Stack[-5] + Stack[-1]);
0x552: @ Sleep(Stack[-1], Stack[-4])
0x553: Pop(1)
0x554: Push(Stack[-3])
0x555: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x556: PushEmpty()
0x557: Call2 0x52d

0x558: Pop(0)
0x559: GOTO 0x597

0x55a: PushEmpty()
0x55b: Call2 0x59e

0x55c: Pop(0)
0x55d: @ GetPFPosition(Stack[-2])
0x55e: Pop(0)
0x55f: PushEmpty(float, cvector, cvector)
0x560: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x561: Stack[-1] = Stack[-5]
0x562: Call2 0x7ad

0x563: Pop(2)
0x564: Push((int) 40000)
0x565: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x567: @ FindPathTo(Stack[-1], Stack[-1])
0x568: Pop(0)
0x569: Pop(0); Push(( Stack[-1] != 0 )
0x56a: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x56b: @ RotatePath(Stack[-1], Stack[-3])
0x56c: Pop(0)
0x56d: Pop(0); Push((bool) Stack[-3] == 0)
0x56e: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56f: GOTO 0x596

0x570: Push((bool) 0)
0x571: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x572: Pop(1)
0x573: Pop(0); Push((bool) Stack[-3] == 0)
0x574: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x575: GOTO 0x596

0x576: Push(CvectorIndex(Stack[-0], 0))
0x577: Push(CvectorIndex(Stack[-0], 2))
0x578: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x579: Pop(2)
0x57a: Pop(0); Push((bool) Stack[-3] == 0)
0x57b: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57c: GOTO 0x596

0x57d: @ WaitForAnimEnd(Stack[-3])
0x57e: Pop(0)
0x57f: Pop(0); Push((bool) Stack[-3] == 0)
0x580: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x581: GOTO 0x596

0x582: GOTO 0x597

0x583: GOTO 0x587

0x584: Push((int) 1)
0x585: @ Sleep(Stack[-1])
0x586: Pop(1)
0x587: Stack[-1] = 0
0x588: GOTO 0x596

0x589: Push(CvectorIndex(Stack[-0], 0))
0x58a: Push(CvectorIndex(Stack[-0], 2))
0x58b: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x58c: Pop(2)
0x58d: Pop(0); Push((bool) Stack[-3] == 0)
0x58e: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58f: GOTO 0x596

0x590: @ WaitForAnimEnd(Stack[-3])
0x591: Pop(0)
0x592: Pop(0); Push((bool) Stack[-3] == 0)
0x593: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x594: GOTO 0x596

0x595: GOTO 0x597

0x596: GOTO 0x55a

0x597: GOTO 0x54a

0x598: Return(); Pop(8)

0x599: @ StopGroup0()
0x59a: Pop(0)
0x59b: @ Stop()
0x59c: Pop(0)
0x59d: Return(); Pop(0)

0x59e: Return(); Pop(0)

0x59f: PushEmpty()
0x5a0: Push((int) 2)
0x5a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a3: Stack[-2] = "fire"
0x5a4: Return(); Pop(0)

0x5a5: GOTO 0x5ab

0x5a6: Push((int) 1)
0x5a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a9: Stack[-2] = "bullet"
0x5aa: Return(); Pop(0)

0x5ab: Stack[-2] = "phys"
0x5ac: Return(); Pop(0)

0x5ad: PushEmpty(cvector, cvector, cvector, cvector)
0x5ae: @ GetPosition(Stack[-2])
0x5af: Pop(0)
0x5b0: @@ GetPosition(Stack[-1])
0x5b1: Pop(0)
0x5b2: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5b3: Return(); Pop(4)

0x5b4: PushEmpty(bool, bool)
0x5b5: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5b6: Pop(0)
0x5b7: Stack[-4] = Stack[-1]
0x5b8: Return(); Pop(2)

0x5b9: PushEmpty(bool, bool)
0x5ba: Push("HasProperty")
0x5bb: Push((int) 2)
0x5bc: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5bd: Pop(1); Push((bool) Stack[-1] == 0)
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: Stack[-5] = (bool) 0
0x5c0: Return(); Pop(2)

0x5c1: @@ HasProperty(Stack[-3], Stack[-1])
0x5c2: Pop(0)
0x5c3: Stack[-5] = Stack[-1]
0x5c4: Return(); Pop(2)

0x5c5: PushEmpty(float, float)
0x5c6: PushEmpty(bool, object, string)
0x5c7: Stack[-2] = Stack[-10]
0x5c8: Stack[-1] = Stack[-9]
0x5c9: Call2 0x5b9

0x5ca: Pop(2)
0x5cb: Pop(1); Push((bool) Stack[-1] == 0)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5cd: Stack[-8] = (bool) 0
0x5ce: Return(); Pop(2)

0x5cf: @@ GetProperty(Stack[-6], Stack[-1])
0x5d0: Pop(0)
0x5d1: PushEmpty(float, float, float, float)
0x5d2: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x5d3: Stack[-2] = Stack[-8]
0x5d4: Stack[-1] = Stack[-7]
0x5d5: Call2 0x7b8

0x5d6: Pop(3)
0x5d7: @@ SetProperty(Stack[-7], Stack[-1])
0x5d8: Pop(1)
0x5d9: Stack[-8] = (bool) 1
0x5da: Return(); Pop(2)

0x5db: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x5dc: PushEmpty(bool, object, string)
0x5dd: Stack[-2] = Stack[-18]
0x5de: Stack[-1] = "health"
0x5df: Call2 0x5b9

0x5e0: Pop(2)
0x5e1: Pop(1); Push((bool) Stack[-1] == 0)
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e3: Stack[-16] = (float) 0.0
0x5e4: Return(); Pop(12)

0x5e5: PushEmpty(bool, object, string)
0x5e6: Stack[-2] = Stack[-18]
0x5e7: Stack[-1] = "armor"
0x5e8: Call2 0x5b9

0x5e9: Pop(2)
0x5ea: Pop(1); Push((bool) Stack[-1] == 0)
0x5eb: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ec: Stack[-6] = (int) 0
0x5ed: GOTO 0x5f1

0x5ee: Push("armor")
0x5ef: @@ GetProperty(Stack[-1], Stack[-7])
0x5f0: Pop(1)
0x5f1: Push("armor_")
0x5f2: PushEmpty(string, int)
0x5f3: Stack[-1] = Stack[-16]
0x5f4: Call2 0x59f

0x5f5: Pop(1)
0x5f6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5f7: PushEmpty(bool, object, string)
0x5f8: Stack[-2] = Stack[-18]
0x5f9: Stack[-1] = Stack[-8]
0x5fa: Call2 0x5b9

0x5fb: Pop(2)
0x5fc: Pop(1); Push((bool) Stack[-1] == 0)
0x5fd: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fe: Stack[-4] = (int) 0
0x5ff: GOTO 0x602

0x600: @@ GetProperty(Stack[-5], Stack[-4])
0x601: Pop(0)
0x602: PushEmpty(float, float, float)
0x603: Pop(0); Push(Stack[-9] + Stack[-7]);
0x604: Push((float)100.0)
0x605: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x606: Stack[-1] = (int) 1
0x607: Call2 0x7b1

0x608: Stack[-6] = Stack[-3]
0x609: Pop(3)
0x60a: Push("health")
0x60b: @@ GetProperty(Stack[-1], Stack[-3])
0x60c: Pop(1)
0x60d: Push((int) 1)
0x60e: Pop(1); Push(Stack[-1] - Stack[-4]);
0x60f: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x610: Push("health")
0x611: PushEmpty(float, float, float, float)
0x612: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x613: Stack[-2] = (int) 0
0x614: Stack[-1] = (int) 1
0x615: Call2 0x7b8

0x616: Pop(3)
0x617: @@ SetProperty(Stack[-2], Stack[-1])
0x618: Pop(2)
0x619: PushEmpty(bool, object)
0x61a: Stack[-1] = Stack[-17]
0x61b: Call2 0x5b4

0x61c: Pop(1)
0x61d: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x61e: PushEmpty(float)
0x61f: Stack[-1] = -Stack[-2]; Pop(0);
0x620: Call2 0x7e6

0x621: Pop(1)
0x622: Stack[-16] = Stack[-1]
0x623: Return(); Pop(12)

0x624: PushEmpty(bool, bool)
0x625: @@ IsDead(Stack[-1])
0x626: Pop(0)
0x627: Stack[-4] = Stack[-1]
0x628: Return(); Pop(2)

0x629: PushEmpty(object, object, object, object)
0x62a: Pop(0); Push((bool) Stack[-5] == 0)
0x62b: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62c: Stack[-6] = (bool) 0
0x62d: Return(); Pop(4)

0x62e: PushEmpty(bool)
0x62f: Stack[-1] = (bool) 0
0x630: Push("IsDead")
0x631: Push((int) 1)
0x632: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x633: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x634: PushEmpty(bool, object)
0x635: Stack[-1] = Stack[-8]
0x636: Call2 0x624

0x637: Pop(1)
0x638: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x639: Stack[-1] = (bool) 1
0x63a: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63b: Stack[-6] = (bool) 0
0x63c: Return(); Pop(4)

0x63d: @ GetScene(Stack[-2])
0x63e: Pop(0)
0x63f: Pop(0); Push((bool) Stack[-2] == 0)
0x640: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x641: Stack[-6] = (bool) 0
0x642: Return(); Pop(4)

0x643: @@ GetScene(Stack[-1])
0x644: Pop(0)
0x645: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x647: Stack[-6] = (bool) 0
0x648: Return(); Pop(4)

0x649: Stack[-6] = (bool) 1
0x64a: Return(); Pop(4)

0x64b: Stack[-1] = 0
0x64c: Stack[-2] = 0
0x64d: PushEmpty(int, int)
0x64e: PushEmpty(bool, object)
0x64f: Stack[-1] = Stack[-5]
0x650: Call2 0x629

0x651: Pop(1)
0x652: Pop(1); Push((bool) Stack[-1] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: Stack[-4] = (bool) 0
0x655: Return(); Pop(2)

0x656: PushEmpty(bool, object, string)
0x657: Stack[-2] = Stack[-6]
0x658: Stack[-1] = "noaccess"
0x659: Call2 0x5b9

0x65a: Pop(2)
0x65b: Pop(1); Push((bool) Stack[-1] == 0)
0x65c: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65d: Stack[-4] = (bool) 1
0x65e: Return(); Pop(2)

0x65f: Push("noaccess")
0x660: @@ GetProperty(Stack[-1], Stack[-2])
0x661: Pop(1)
0x662: Push((int) 0)
0x663: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x664: Return(); Pop(2)

0x665: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x666: Pop(0); Push((bool) Stack[-15] == 0)
0x667: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x668: Return(); Pop(14)

0x669: @ IsDead(Stack[-7])
0x66a: Pop(0)
0x66b: Push(Stack[-7])
0x66c: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66d: Return(); Pop(14)

0x66e: @ GetSecondaryAnimationType(Stack[-6])
0x66f: Pop(0)
0x670: Push((int) 0)
0x671: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x672: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x673: Return(); Pop(14)

0x674: @@ GetPosition(Stack[-5])
0x675: Pop(0)
0x676: @ GetPosition(Stack[-4])
0x677: Pop(0)
0x678: @ GetDirection(Stack[-3])
0x679: Pop(0)
0x67a: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x67b: Push(CvectorIndex(Stack[-2], 0))
0x67c: Push(CvectorIndex(Stack[-4], 0))
0x67d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x67e: Push(CvectorIndex(Stack[-3], 2))
0x67f: Push(CvectorIndex(Stack[-5], 2))
0x680: Pop(2); Push(Stack[-2] * Stack[-1]);
0x681: Pop(2); Push(Stack[-2] + Stack[-1]);
0x682: Push((int) 0)
0x683: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x685: Stack[-1] = "fhit"
0x686: GOTO 0x688

0x687: Stack[-1] = "bhit"
0x688: Push("hit_react")
0x689: Push("1")
0x68a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x68b: Push("2")
0x68c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x68d: Push((int) -10)
0x68e: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x68f: Pop(4)
0x690: Return(); Pop(14)

0x691: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x692: PushEmpty(bool)
0x693: Stack[-1] = (bool) 0
0x694: PushEmpty(bool)
0x695: Stack[-1] = (bool) 0
0x696: Push(Stack[-23])
0x697: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x698: Push((int) 4)
0x699: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x69a: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x69b: Stack[-1] = (bool) 1
0x69c: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69d: Push((int) 5)
0x69e: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x69f: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x6a0: Stack[-1] = (bool) 1
0x6a1: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6a2: PushEmpty(cvector, cvector)
0x6a3: PushEmpty(cvector, object)
0x6a4: Stack[-1] = Stack[-25]
0x6a5: Call2 0x5ad

0x6a6: Stack[-3] = Stack[-2]
0x6a7: Pop(2)
0x6a8: Call2 0x7a3

0x6a9: Stack[-11] = Stack[-2]
0x6aa: Pop(2)
0x6ab: @ CreateVectorVector(Stack[-8])
0x6ac: Pop(0)
0x6ad: Stack[-7] = (int) 1
0x6ae: Push("hit")
0x6af: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6b0: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x6b1: Pop(1)
0x6b2: Pop(0); Push((bool) Stack[-6] == 0)
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b4: GOTO 0x6be

0x6b5: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6b6: Push((float)0.70711)
0x6b7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b9: @@ add(Stack[-5])
0x6ba: Pop(0)
0x6bb: Push((int) 1)
0x6bc: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6bd: GOTO 0x6ae

0x6be: @@ size(Stack[-3])
0x6bf: Pop(0)
0x6c0: Push(Stack[-3])
0x6c1: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6c2: @ irand(Stack[-2], Stack[-3])
0x6c3: Pop(0)
0x6c4: @@ get(Stack[-1], Stack[-2])
0x6c5: Pop(0)
0x6c6: PushEmpty(object, int, float, cvector, cvector)
0x6c7: Stack[-5] = Stack[-26]
0x6c8: Stack[-4] = Stack[-25]
0x6c9: Stack[-3] = Stack[-24]
0x6ca: Stack[-2] = Stack[-6]
0x6cb: Stack[-1] = -Stack[-14]; Pop(0);
0x6cc: Call2 0x6d5

0x6cd: Pop(5)
0x6ce: Return(); Pop(18)

0x6cf: Stack[-8] = 0
0x6d0: PushEmpty(object)
0x6d1: Stack[-1] = Stack[-22]
0x6d2: Call2 0x665

0x6d3: Pop(1)
0x6d4: Return(); Pop(18)

0x6d5: PushEmpty(object, object, object, object)
0x6d6: @ GetScene(Stack[-2])
0x6d7: Pop(0)
0x6d8: Push("scripted")
0x6d9: Push("blood_dir.xml")
0x6da: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6db: Pop(2)
0x6dc: PushEmpty(object)
0x6dd: Stack[-1] = Stack[-10]
0x6de: Call2 0x665

0x6df: Pop(1)
0x6e0: Return(); Pop(4)

0x6e1: Stack[-1] = 0
0x6e2: Stack[-2] = 0
0x6e3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6e4: @@ GetPosition(Stack[-3])
0x6e5: Pop(0)
0x6e6: @ GetPosition(Stack[-2])
0x6e7: Pop(0)
0x6e8: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6e9: Push(CvectorIndex(Stack[-1], 0))
0x6ea: Push(CvectorIndex(Stack[-2], 2))
0x6eb: @ RotateAsync(Stack[-2], Stack[-1])
0x6ec: Pop(2)
0x6ed: Return(); Pop(6)

0x6ee: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x6ef: @@ GetPosition(Stack[-8])
0x6f0: Pop(0)
0x6f1: @@ GetEyesHeight(Stack[-9])
0x6f2: Pop(0)
0x6f3: Push(CvectorIndex(Stack[-8], 1))
0x6f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6f5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x6f6: @ GetPosition(Stack[-7])
0x6f7: Pop(0)
0x6f8: @ GetEyesHeight(Stack[-9])
0x6f9: Pop(0)
0x6fa: Push(CvectorIndex(Stack[-7], 1))
0x6fb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6fc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x6fd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x6fe: Push(CvectorIndex(Stack[-6], 1))
0x6ff: Stack[-1] = (int) 0
0x700: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x701: Pop(0); Push(Stack[-6] | Stack[-6]);
0x702: Pop(1); Push(Sqrt(Stack[-1]))
0x703: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x704: Stack[-5] = -Stack[-6]; Pop(0);
0x705: Pop(0); Push(Stack[-6] * Stack[-19]);
0x706: PushEmpty(cvector, cvector)
0x707: Push(CVector(0.0, 1.0, 0.0))
0x708: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x709: Call2 0x7a3

0x70a: Pop(1)
0x70b: Push((int) 25)
0x70c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x70d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x70e: Push(CVector(0.0, 10.0, 0.0))
0x70f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x710: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x711: @ IsOverrideActive(Stack[-2])
0x712: Pop(0)
0x713: Push(Stack[-2])
0x714: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x715: Stack[-21] = (bool) 0
0x716: Return(); Pop(18)

0x717: @ StopWorld()
0x718: Pop(0)
0x719: @ CameraTransit(Stack[-3], Stack[-5])
0x71a: Pop(0)
0x71b: Push(CvectorIndex(Stack[-4], 0))
0x71c: Push(CvectorIndex(Stack[-5], 2))
0x71d: @ Rotate(Stack[-2], Stack[-1])
0x71e: Pop(2)
0x71f: PushEmpty(bool)
0x720: Call2 0x8d8

0x721: Pop(0)
0x722: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x723: GOTO 0x72c

0x724: Push("head")
0x725: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x726: Pop(1)
0x727: Push(Stack[-1])
0x728: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x729: Push("head")
0x72a: @ LookAsyncCamera(Stack[-1])
0x72b: Pop(1)
0x72c: @ CameraWaitForPlayFinish()
0x72d: Pop(0)
0x72e: @ ResumeWorld()
0x72f: Pop(0)
0x730: Stack[-21] = (bool) 1
0x731: Return(); Pop(18)

0x732: PushEmpty(bool, bool)
0x733: @ CameraSwitchToNormal()
0x734: Pop(0)
0x735: PushEmpty(bool)
0x736: Call2 0x8d8

0x737: Pop(0)
0x738: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x739: GOTO 0x742

0x73a: Push("head")
0x73b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x73c: Pop(1)
0x73d: Push(Stack[-1])
0x73e: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73f: Push("head")
0x740: @ UnlookAsync(Stack[-1])
0x741: Pop(1)
0x742: Return(); Pop(2)

0x743: PushEmpty(bool, float, float, bool, float, float)
0x744: @ lshHasAnimation(Stack[-3], Stack[-7])
0x745: Pop(0)
0x746: Push(Stack[-3])
0x747: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x748: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x749: Pop(0)
0x74a: Push((bool) 0)
0x74b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(1)
0x74d: GOTO 0x752

0x74e: Push("Can't find lsh animation : ")
0x74f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x750: @ Trace(Stack[-1])
0x751: Pop(1)
0x752: Return(); Pop(6)

0x753: PushEmpty(bool, float, float, bool, float, float)
0x754: @ lshHasAnimation(Stack[-3], Stack[-8])
0x755: Pop(0)
0x756: Push(Stack[-3])
0x757: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x758: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x759: Pop(0)
0x75a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x75b: Pop(0)
0x75c: GOTO 0x761

0x75d: Push("Can't find lsh animation : ")
0x75e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x75f: @ Trace(Stack[-1])
0x760: Pop(1)
0x761: Return(); Pop(6)

0x762: PushEmpty(float, cvector, float, cvector)
0x763: @@ GetEyesHeight(Stack[-2])
0x764: Pop(0)
0x765: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x766: Push(CvectorIndex(Stack[-1], 1))
0x767: Stack[-1] = Stack[-3]
0x768: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x769: Push("head")
0x76a: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x76b: Pop(1)
0x76c: Return(); Pop(4)

0x76d: PushEmpty(bool)
0x76e: Call2 0x8d8

0x76f: Pop(0)
0x770: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x771: @ lshStopSpeech()
0x772: Pop(0)
0x773: Return(); Pop(0)

0x774: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x775: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x776: Pop(0)
0x777: Pop(0); Push((bool) Stack[-8] == 0)
0x778: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x779: Stack[-7] = (int) 0
0x77a: Push((int) 1)
0x77b: Pop(1); Push(Stack[-8] + Stack[-1]);
0x77c: Pop(1); Push(Stack[-18] + Stack[-1]);
0x77d: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x77e: Pop(1)
0x77f: Pop(0); Push((bool) Stack[-6] == 0)
0x780: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x781: GOTO 0x785

0x782: Push((int) 1)
0x783: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x784: GOTO 0x77a

0x785: Pop(0); Push((bool) Stack[-7] == 0)
0x786: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x787: Return(); Pop(16)

0x788: @ irand(Stack[-5], Stack[-7])
0x789: Pop(0)
0x78a: Push((int) 1)
0x78b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x78c: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x78d: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x78e: Pop(0)
0x78f: Push(Stack[-4])
0x790: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x791: @ GetEyesHeight(Stack[-3])
0x792: Pop(0)
0x793: @ GetDirection(Stack[-2])
0x794: Pop(0)
0x795: Push((int) 50)
0x796: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x797: Push(CvectorIndex(Stack[-1], 1))
0x798: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x799: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x79a: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x79b: Pop(0)
0x79c: Return(); Pop(16)

0x79d: PushEmpty(object, object)
0x79e: @ self(Stack[-1])
0x79f: Pop(0)
0x7a0: Stack[-3] = Stack[-1]
0x7a1: Return(); Pop(2)

0x7a2: Stack[-1] = 0
0x7a3: PushEmpty(float, float)
0x7a4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7a5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7a6: Push((float)0.0)
0x7a7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7aa: Return(); Pop(2)

0x7ab: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7ac: Return(); Pop(2)

0x7ad: PushEmpty(cvector, cvector)
0x7ae: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x7af: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x7b0: Return(); Pop(2)

0x7b1: PushEmpty()
0x7b2: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7b4: Stack[-3] = Stack[-2]
0x7b5: GOTO 0x7b7

0x7b6: Stack[-3] = Stack[-1]
0x7b7: Return(); Pop(0)

0x7b8: PushEmpty()
0x7b9: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7ba: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bb: Stack[-4] = Stack[-2]
0x7bc: Return(); Pop(0)

0x7bd: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7bf: Stack[-4] = Stack[-1]
0x7c0: Return(); Pop(0)

0x7c1: Stack[-4] = Stack[-3]
0x7c2: Return(); Pop(0)

0x7c3: PushEmpty()
0x7c4: Pop(0); Push((bool) Stack[-2] == 0)
0x7c5: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c6: Stack[-3] = (bool) 0
0x7c7: Return(); Pop(0)

0x7c8: Push((int) 0)
0x7c9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cb: Push((int) 8)
0x7cc: @ SendWorldWndMessage(Stack[-1])
0x7cd: Pop(1)
0x7ce: GOTO 0x7d8

0x7cf: Push((int) 0)
0x7d0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d2: Push((int) 9)
0x7d3: @ SendWorldWndMessage(Stack[-1])
0x7d4: Pop(1)
0x7d5: GOTO 0x7d8

0x7d6: Stack[-3] = (bool) 0
0x7d7: Return(); Pop(0)

0x7d8: PushEmpty(float)
0x7d9: Stack[-1] = Stack[-2]
0x7da: Call2 0x7f0

0x7db: Pop(1)
0x7dc: PushEmpty(bool, object, string, float, float, float)
0x7dd: Stack[-5] = Stack[-8]
0x7de: Stack[-4] = "reputation"
0x7df: Stack[-3] = Stack[-7]
0x7e0: Stack[-2] = (int) 0
0x7e1: Stack[-1] = (int) 1
0x7e2: Call2 0x5c5

0x7e3: Pop(6)
0x7e4: Stack[-3] = (bool) 1
0x7e5: Return(); Pop(0)

0x7e6: PushEmpty(object, object)
0x7e7: @ CreateFloatVector(Stack[-1])
0x7e8: Pop(0)
0x7e9: @@ add(Stack[-3])
0x7ea: Pop(0)
0x7eb: Push((int) 15)
0x7ec: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7ed: Pop(1)
0x7ee: Return(); Pop(2)

0x7ef: Stack[-1] = 0
0x7f0: PushEmpty(object, object)
0x7f1: @ CreateFloatVector(Stack[-1])
0x7f2: Pop(0)
0x7f3: @@ add(Stack[-3])
0x7f4: Pop(0)
0x7f5: Push((int) 16)
0x7f6: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7f7: Pop(1)
0x7f8: Return(); Pop(2)

0x7f9: Stack[-1] = 0
0x7fa: PushEmpty(object, object)
0x7fb: @ FindActor(Stack[-1], Stack[-4])
0x7fc: Pop(0)
0x7fd: Pop(0); Push((bool) Stack[-1] == 0)
0x7fe: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7ff: Stack[-5] = (bool) 0
0x800: Return(); Pop(2)

0x801: @ Trigger(Stack[-1], Stack[-3])
0x802: Pop(0)
0x803: Stack[-5] = (bool) 1
0x804: Return(); Pop(2)

0x805: Stack[-1] = 0
0x806: PushEmpty(bool, bool)
0x807: @ IsPlayerActor(Stack[-3], Stack[-1])
0x808: Pop(0)
0x809: Push(Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x80b: Push("attack")
0x80c: @ PlayGlobalMusic(Stack[-1])
0x80d: Pop(1)
0x80e: Return(); Pop(2)

0x80f: PushEmpty(object, object)
0x810: @ GetScene(Stack[-1])
0x811: Pop(0)
0x812: Push("battle")
0x813: PushEmpty(object)
0x814: Call2 0x79d

0x815: Pop(0)
0x816: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x817: Pop(2)
0x818: Return(); Pop(2)

0x819: Stack[-1] = 0
0x81a: PushEmpty()
0x81b: PushEmpty(bool, string, string)
0x81c: Stack[-2] = "quest_d2_02"
0x81d: Stack[-1] = "player_attack"
0x81e: Call2 0x7fa

0x81f: Pop(3)
0x820: Return(); Pop(0)

0x821: PushEmpty()
0x822: PushEmpty(bool, string, string)
0x823: Stack[-2] = "quest_d2_02"
0x824: Stack[-1] = "completed"
0x825: Call2 0x7fa

0x826: Pop(3)
0x827: Return(); Pop(0)

0x828: PushEmpty(int, int)
0x829: Push("branch")
0x82a: @ GetVariable(Stack[-1], Stack[-2])
0x82b: Pop(1)
0x82c: Push((int) 0)
0x82d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x82f: Stack[-3] = (int) 1
0x830: Return(); Pop(2)

0x831: GOTO 0x837

0x832: Push((int) 1)
0x833: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x834: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x835: Stack[-3] = (int) 2
0x836: Return(); Pop(2)

0x837: Stack[-3] = (int) 3
0x838: Return(); Pop(2)

0x839: PushEmpty(int, int)
0x83a: Push("branch")
0x83b: @ GetVariable(Stack[-1], Stack[-2])
0x83c: Pop(1)
0x83d: Stack[-3] = Stack[-1]
0x83e: Return(); Pop(2)

0x83f: PushEmpty()
0x840: PushEmpty(int)
0x841: Call2 0x839

0x842: Pop(0)
0x843: Push((int) 1)
0x844: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x845: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x846: @ WorkWithCorpse(Stack[-1])
0x847: Pop(0)
0x848: GOTO 0x84b

0x849: @ Barter(Stack[-1])
0x84a: Pop(0)
0x84b: Return(); Pop(0)

0x84c: PushEmpty(object, int, bool, object, int, bool)
0x84d: @ CreateInvItem(Stack[-3])
0x84e: Pop(0)
0x84f: @@ SetItemName(Stack[-7])
0x850: Pop(0)
0x851: Push("Organ")
0x852: Push((int) 1)
0x853: @@ SetProperty(Stack[-2], Stack[-1])
0x854: Pop(2)
0x855: @@ GetItemID(Stack[-2])
0x856: Pop(0)
0x857: Push((int) 0)
0x858: Push((int) 1)
0x859: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x85a: Pop(2)
0x85b: Return(); Pop(6)

0x85c: Stack[-3] = 0
0x85d: PushEmpty(int)
0x85e: Call2 0x839

0x85f: Pop(0)
0x860: Push((int) 1)
0x861: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x862: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x863: Return(); Pop(0)

0x864: PushEmpty(string)
0x865: Stack[-1] = "liver"
0x866: Call2 0x84c

0x867: Pop(1)
0x868: PushEmpty(string)
0x869: Stack[-1] = "kidney"
0x86a: Call2 0x84c

0x86b: Pop(1)
0x86c: PushEmpty(string)
0x86d: Stack[-1] = "heart"
0x86e: Call2 0x84c

0x86f: Pop(1)
0x870: PushEmpty(string)
0x871: Stack[-1] = "blood"
0x872: Call2 0x84c

0x873: Pop(1)
0x874: Return(); Pop(0)

0x875: PushEmpty(bool, bool)
0x876: Push(GlobalVars[0])
0x877: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x878: Return(); Pop(2)

0x879: @ IsPlayerActor(Stack[-3], Stack[-1])
0x87a: Pop(0)
0x87b: Push(Stack[-1])
0x87c: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x87d: Push(GlobalVars[0])
0x87e: Stack[-1] = (bool) 1
0x87f: GlobalVars[0] = Stack[-1]; Pop(1)
0x880: PushEmpty(bool, string, string)
0x881: Stack[-2] = "quest_d2_02"
0x882: Stack[-1] = "player_attack"
0x883: Call2 0x7fa

0x884: Pop(3)
0x885: Return(); Pop(2)

0x886: PushEmpty(bool, string, string)
0x887: Stack[-2] = "quest_d2_02"
0x888: Stack[-1] = "mpatrol_unload"
0x889: Call2 0x7fa

0x88a: Pop(3)
0x88b: Return(); Pop(0)

0x88c: PushEmpty(bool, bool)
0x88d: Push("revolver_ammo")
0x88e: Push((int) 0)
0x88f: Push((int) 2)
0x890: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x891: Pop(3)
0x892: Push("alpha_pills")
0x893: Push((int) 0)
0x894: Push((int) 2)
0x895: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x896: Pop(3)
0x897: PushEmpty(bool, object)
0x898: Stack[-1] = Stack[-5]
0x899: Call2 0x5b4

0x89a: Pop(1)
0x89b: IF (Stack[-1] == 0) GOTO 0x8a1; Pop(1)

0x89c: PushEmpty(bool, object, float)
0x89d: Stack[-2] = Stack[-6]
0x89e: Stack[-1] = (float) -0.15
0x89f: Call2 0x7c3

0x8a0: Pop(3)
0x8a1: PushEmpty()
0x8a2: Call2 0x85d

0x8a3: Pop(0)
0x8a4: PushEmpty(object)
0x8a5: Stack[-1] = Stack[-4]
0x8a6: Push(-1, 0); TaskCall(4)
0x8a7: Call2 0x47f

0x8a8: Pop(-1, 0); TaskReturn
0x8a9: Pop(1)
0x8aa: Return(); Pop(2)

0x8ab: PushEmpty()
0x8ac: PushEmpty(object, int, float)
0x8ad: Stack[-3] = Stack[-7]
0x8ae: Stack[-2] = Stack[-6]
0x8af: Stack[-1] = Stack[-5]
0x8b0: Call2 0x691

0x8b1: Pop(3)
0x8b2: Return(); Pop(0)

0x8b3: PushEmpty()
0x8b4: PushEmpty(object, int, float, cvector, cvector)
0x8b5: Stack[-5] = Stack[-11]
0x8b6: Stack[-4] = Stack[-10]
0x8b7: Stack[-3] = Stack[-9]
0x8b8: Stack[-2] = Stack[-7]
0x8b9: Stack[-1] = Stack[-6]
0x8ba: Call2 0x6d5

0x8bb: Pop(5)
0x8bc: Return(); Pop(0)

0x8bd: PushEmpty(float, float)
0x8be: Push("health")
0x8bf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8c0: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c1: Push("health")
0x8c2: @ GetProperty(Stack[-1], Stack[-2])
0x8c3: Pop(1)
0x8c4: Push((int) 0)
0x8c5: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x8c6: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c7: @ SignalDeath(Stack[-4])
0x8c8: Pop(0)
0x8c9: Return(); Pop(2)

0x8ca: PushEmpty()
0x8cb: PushEmpty(object)
0x8cc: Stack[-1] = Stack[-2]
0x8cd: Call2 0x88c

0x8ce: Pop(1)
0x8cf: Return(); Pop(0)

0x8d0: Stack[-1] = (int) 515572
0x8d1: Return(); Pop(0)

0x8d2: Stack[-1] = (int) 504031
0x8d3: Return(); Pop(0)

0x8d4: Stack[-1] = "ui/NPC_Citizen2.png"
0x8d5: Return(); Pop(0)

0x8d6: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x8d7: Return(); Pop(0)

0x8d8: Stack[-1] = (bool) 0
0x8d9: Return(); Pop(0)

