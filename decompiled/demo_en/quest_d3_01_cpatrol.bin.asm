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
	quest_d3_01
	patrol_talk
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x53d
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x95 Vars = (int, int)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x3dc Vars = (int)
		EVENT_1 Op = 0x3f7 Vars = (object)
		EVENT_2 Op = 0x406 Vars = (object)
		EVENT_10 Op = 0x48c Vars = (object)
		EVENT_41 Op = 0x497 Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x4b8 Vars = (object)
		EVENT_22 Op = 0x537 Vars = (object, int, float, float)
		EVENT_16 Op = 0x539 Vars = (object, string)
		EVENT_41 Op = 0x53b Vars = (object)
	GTASK_5 Vars = (cvector, cvector, bool) Params = 0
		EVENT_0 Op = 0x54e Vars = (object)
		EVENT_17 Op = 0x55b Vars = (object)

Events:
EVENT_22 Op = 0x8e7 Vars = (object, int, float, float)
EVENT_43 Op = 0x8ef Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x8f9 Vars = (object, string)
EVENT_41 Op = 0x906 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x70f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x90e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x90c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x910

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x912

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x87b

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
0x41: Call2 0x753

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
0x4f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x7f

0x53: Pop(1)
0x54: Push((int) 509122)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 509123)
0x5a: Push((int) 10004)
0x5b: Push((int) 10003)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: GOTO 0x61

0x5f: Return(); Pop(0)

0x60: GOTO 0x4e

0x61: PushEmpty(bool)
0x62: Call2 0x914

0x63: Pop(0)
0x64: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x65: @ lshWaitForAnimEnd()
0x66: Pop(0)
0x67: Push( Stack[3 + Tasks[-1].StackPointer] )
0x68: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x69: GOTO 0x6f

0x6a: PushEmpty(string)
0x6b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6c: Call2 0x764

0x6d: Pop(1)
0x6e: GOTO 0x65

0x6f: GOTO 0x7e

0x70: Push("all")
0x71: Push("idle")
0x72: @ PlayAnimation(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: @ WaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: Push("all")
0x7a: Push("idle")
0x7b: @ PlayAnimation(Stack[-2], Stack[-1])
0x7c: Pop(2)
0x7d: GOTO 0x74

0x7e: Return(); Pop(0)

0x7f: PushEmpty()
0x80: PushEmpty(bool)
0x81: Call2 0x914

0x82: Pop(0)
0x83: Pop(1); Push((bool) Stack[-1] == 0)
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Return(); Pop(0)

0x86: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: Return(); Pop(0)

0x89: PushEmpty(string, bool)
0x8a: Stack[-2] = Stack[-3]
0x8b: Push("")
0x8c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8e: Stack[-1] = (bool) 0
0x8f: GOTO 0x91

0x90: Stack[-1] = (bool) 1
0x91: Call2 0x774

0x92: Pop(2)
0x93: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: Push((int) 1)
0x97: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0x98: PushEmpty()
0x99: Call2 0x78e

0x9a: Pop(0)
0x9b: Push((int) 10005)
0x9c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9e: PushEmpty(object, object)
0x9f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa1: Call2 0x83b

0xa2: Pop(2)
0xa3: Push((int) 10006)
0xa4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa6: PushEmpty(object, object)
0xa7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9: Call2 0x83b

0xaa: Pop(2)
0xab: Push((int) 10009)
0xac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xae: PushEmpty(object, object)
0xaf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb1: Call2 0x83b

0xb2: Pop(2)
0xb3: Push((int) 10002)
0xb4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xb6: PushEmpty(string)
0xb7: Stack[-1] = "Neutral"
0xb8: Call2 0x7f

0xb9: Pop(1)
0xba: Push((int) 509122)
0xbb: @@ SetMessage(Stack[-1])
0xbc: Pop(1)
0xbd: @@ ClearReplies()
0xbe: Pop(0)
0xbf: Push((int) 509123)
0xc0: Push((int) 10004)
0xc1: Push((int) 10003)
0xc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3: Pop(3)
0xc4: Return(); Pop(0)

0xc5: Push((int) 10004)
0xc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xc8: PushEmpty(string)
0xc9: Stack[-1] = "Neutral"
0xca: Call2 0x7f

0xcb: Pop(1)
0xcc: Push((int) 509124)
0xcd: @@ SetMessage(Stack[-1])
0xce: Pop(1)
0xcf: @@ ClearReplies()
0xd0: Pop(0)
0xd1: Push((int) 509125)
0xd2: Push((int) -1)
0xd3: Push((int) 10005)
0xd4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5: Pop(3)
0xd6: Push((int) 509126)
0xd7: Push((int) -1)
0xd8: Push((int) 10006)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Push((int) 509127)
0xdc: Push((int) 10008)
0xdd: Push((int) 10007)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Return(); Pop(0)

0xe1: Push((int) 10008)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe4: PushEmpty(string)
0xe5: Stack[-1] = "Neutral"
0xe6: Call2 0x7f

0xe7: Pop(1)
0xe8: Push((int) 509128)
0xe9: @@ SetMessage(Stack[-1])
0xea: Pop(1)
0xeb: @@ ClearReplies()
0xec: Pop(0)
0xed: Push((int) 509129)
0xee: Push((int) -1)
0xef: Push((int) 10009)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf4: PushEmpty(bool)
0xf5: Call2 0x914

0xf6: Pop(0)
0xf7: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf8: @ lshStopAnimation()
0xf9: Pop(0)
0xfa: GOTO 0xfd

0xfb: @ StopAnimation()
0xfc: Pop(0)
0xfd: Return(); Pop(0)

0xfe: GOTO 0x96

0xff: Return(); Pop(0)

0x100: PushEmpty(object, object)
0x101: Push("player")
0x102: @ FindActor(Stack[-2], Stack[-1])
0x103: Pop(1)
0x104: Pop(0); Push((bool) Stack[-1] == 0)
0x105: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x106: Return(); Pop(2)

0x107: PushEmpty(object, bool, float)
0x108: Stack[-3] = Stack[-4]
0x109: Stack[-2] = (bool) 1
0x10a: Stack[-1] = (float) 180.0
0x10b: Call2 0x115

0x10c: Pop(3)
0x10d: Return(); Pop(2)

0x10e: Stack[-1] = 0
0x10f: PushEmpty()
0x110: Stack[-3] = (float) 0.3
0x111: Return(); Pop(0)

0x112: PushEmpty()
0x113: Stack[-3] = (int) 0
0x114: Return(); Pop(0)

0x115: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x116: PushEmpty()
0x117: Call2 0x1fa

0x118: Pop(0)
0x119: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x11a: Push("@GetAttackDistance")
0x11b: Push((int) 1)
0x11c: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x11d: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x11e: @@ GetAttackDistance(Stack[-11])
0x11f: Pop(0)
0x120: Push((int) 50)
0x121: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x122: GOTO 0x124

0x123: Stack[-11] = Stack[-23]
0x124: Push((int) 150)
0x125: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x127: Stack[-11] = (int) 150
0x128: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x129: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x12a: @ IsPlayerActor(Stack[-0], Stack[-8])
0x12b: Pop(0)
0x12c: Push(Stack[-8])
0x12d: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x12e: Push("attack")
0x12f: @ PlayGlobalMusic(Stack[-1])
0x130: Pop(1)
0x131: PushEmpty(object)
0x132: Call2 0x7be

0x133: Pop(0)
0x134: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x135: Pop(1)
0x136: Push(Stack[-24])
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-7] = (bool) 0
0x139: GOTO 0x13b

0x13a: Stack[-7] = (bool) 1
0x13b: Push((float)400.0)
0x13c: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x13d: PushEmpty(bool)
0x13e: Stack[-1] = (bool) 0
0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x141: Call2 0x66e

0x142: Pop(1)
0x143: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x144: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x145: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x146: Stack[-1] = (bool) 1
0x147: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x148: PushEmpty()
0x149: Call2 0x397

0x14a: Pop(0)
0x14b: @@ GetPFPosition(Stack[-10])
0x14c: Pop(0)
0x14d: @ GetPFPosition(Stack[-9])
0x14e: Pop(0)
0x14f: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x150: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x151: Pop(0); Push(Stack[-6] * Stack[-6]);
0x152: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x154: PushEmpty(bool, object, float, float, bool, bool)
0x155: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x156: Stack[-4] = Stack[-17]
0x157: Stack[-3] = (float) 10000.0
0x158: Stack[-2] = (bool) 1
0x159: Stack[-1] = (bool) 0
0x15a: Push(-6, 3); TaskCall(3)
0x15b: Call2 0x3ab

0x15c: Pop(-6, 3); TaskReturn
0x15d: Pop(5)
0x15e: Pop(1); Push((bool) Stack[-1] == 0)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: GOTO 0x1e9

0x161: Stack[-7] = (bool) 0
0x162: GOTO 0x1e8

0x163: Pop(0); Push(Stack[-23] * Stack[-23]);
0x164: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x166: @@ GetPFPosition(Stack[-3])
0x167: Pop(0)
0x168: @ CanReachByPF(Stack[-2], Stack[-3])
0x169: Pop(0)
0x16a: Pop(0); Push((bool) Stack[-2] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x16c: PushEmpty(bool, object, float, float, bool, bool)
0x16d: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x16e: Stack[-4] = Stack[-17]
0x16f: Stack[-3] = (float) 10000.0
0x170: Stack[-2] = (bool) 1
0x171: Stack[-1] = (bool) 0
0x172: Push(-6, 3); TaskCall(3)
0x173: Call2 0x3ab

0x174: Pop(-6, 3); TaskReturn
0x175: Pop(5)
0x176: Pop(1); Push((bool) Stack[-1] == 0)
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x1e9

0x179: Stack[-7] = (bool) 0
0x17a: GOTO 0x13d

0x17b: Pop(0); Push((bool) Stack[-7] == 0)
0x17c: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x17d: PushEmpty(object)
0x17e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17f: Call2 0x704

0x180: Pop(1)
0x181: Push("all")
0x182: Push("attack_on")
0x183: @ PlayAnimation(Stack[-2], Stack[-1])
0x184: Pop(2)
0x185: @ WaitForAnimEnd()
0x186: Pop(0)
0x187: PushEmpty()
0x188: Call2 0x397

0x189: Pop(0)
0x18a: @ StopAsync()
0x18b: Pop(0)
0x18c: Stack[-7] = (bool) 1
0x18d: PushEmpty(bool, object)
0x18e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18f: Call2 0x66e

0x190: Pop(1)
0x191: Pop(1); Push((bool) Stack[-1] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: GOTO 0x1e9

0x194: @ rand(Stack[-1])
0x195: Pop(0)
0x196: PushEmpty(bool)
0x197: Stack[-1] = (bool) 1
0x198: Push((float)0.25)
0x199: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19b: PushEmpty(bool)
0x19c: Call2 0x36c

0x19d: Pop(0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Stack[-1] = (bool) 0
0x1a0: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a1: @ Face(Stack[-0])
0x1a2: Pop(0)
0x1a3: PushEmpty()
0x1a4: Call2 0x39e

0x1a5: Pop(0)
0x1a6: Push("all")
0x1a7: Push("attack_stay")
0x1a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a9: Pop(2)
0x1aa: PushEmpty(bool, float)
0x1ab: Stack[-1] = Stack[-25]
0x1ac: Call2 0x2e8

0x1ad: Pop(2)
0x1ae: @ StopAsync()
0x1af: Pop(0)
0x1b0: GOTO 0x1df

0x1b1: @ Face(Stack[-0])
0x1b2: Pop(0)
0x1b3: Push("all")
0x1b4: Push("fjump")
0x1b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b6: Pop(2)
0x1b7: @ WaitForAnimEnd()
0x1b8: Pop(0)
0x1b9: PushEmpty()
0x1ba: Call2 0x397

0x1bb: Pop(0)
0x1bc: Push(CVector(0.0, 0.0, 0.0))
0x1bd: @ SetSpeed(Stack[-1])
0x1be: Pop(1)
0x1bf: @ Stop()
0x1c0: Pop(0)
0x1c1: @ StopAsync()
0x1c2: Pop(0)
0x1c3: PushEmpty(bool)
0x1c4: Call2 0x36c

0x1c5: Pop(0)
0x1c6: Pop(1); Push((bool) Stack[-1] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1c8: PushEmpty(bool, object)
0x1c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ca: Call2 0x66e

0x1cb: Pop(1)
0x1cc: Pop(1); Push((bool) Stack[-1] == 0)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ce: GOTO 0x1e9

0x1cf: @@ GetPFPosition(Stack[-10])
0x1d0: Pop(0)
0x1d1: @ GetPFPosition(Stack[-9])
0x1d2: Pop(0)
0x1d3: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1d4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1d5: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1d6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d8: PushEmpty(bool, float)
0x1d9: Stack[-1] = Stack[-25]
0x1da: Call2 0x244

0x1db: Pop(1)
0x1dc: Pop(1); Push((bool) Stack[-1] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: GOTO 0x1e9

0x1df: GOTO 0x1e8

0x1e0: PushEmpty(bool, float)
0x1e1: Stack[-1] = Stack[-25]
0x1e2: Call2 0x244

0x1e3: Pop(1)
0x1e4: Pop(1); Push((bool) Stack[-1] == 0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: GOTO 0x1e9

0x1e7: Stack[-7] = (bool) 1
0x1e8: GOTO 0x13d

0x1e9: @ WaitForAnimEnd()
0x1ea: Pop(0)
0x1eb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: Return(); Pop(22)

0x1ee: Push("all")
0x1ef: Push("attack_off")
0x1f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: @ WaitForAnimEnd()
0x1f3: Pop(0)
0x1f4: Push(Stack[-8])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f6: Push((float)2.0)
0x1f7: @ Sleep(Stack[-1])
0x1f8: Pop(1)
0x1f9: Return(); Pop(22)

0x1fa: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x1fb: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1fc: Push("all")
0x1fd: Push("attack_begin")
0x1fe: Push((int) 1)
0x1ff: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x200: Pop(2); Push(Stack[-2] + Stack[-1]);
0x201: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x202: Pop(2)
0x203: Pop(0); Push((bool) Stack[-3] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: GOTO 0x209

0x206: Push((int) 1)
0x207: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x208: GOTO 0x1fc

0x209: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x20a: Push("attack")
0x20b: Push((int) 1)
0x20c: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x20d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x20e: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x20f: Pop(1)
0x210: Pop(0); Push((bool) Stack[-2] == 0)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: GOTO 0x216

0x213: Push((int) 1)
0x214: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x215: GOTO 0x20a

0x216: Push("all")
0x217: Push("bjump")
0x218: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x219: Pop(2)
0x21a: Push(CvectorIndex(Stack[-1], 2))
0x21b: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x21c: Return(); Pop(6)

0x21d: PushEmpty(object, float, float, object, float, float)
0x21e: Push((float)0.9)
0x21f: Pop(1); Push(Stack[-9] * Stack[-1]);
0x220: @ GetVictim(Stack[-1], Stack[-4])
0x221: Pop(1)
0x222: @ ReportAttack(Stack[-0])
0x223: Pop(0)
0x224: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x225: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x226: PushEmpty(float, object, int)
0x227: Stack[-2] = Stack[-6]
0x228: Stack[-1] = Stack[-10]
0x229: Call2 0x10f

0x22a: Stack[-5] = Stack[-3]
0x22b: Pop(3)
0x22c: PushEmpty(float, object, float, int)
0x22d: Stack[-3] = Stack[-7]
0x22e: Stack[-2] = Stack[-6]
0x22f: PushEmpty(int, object, int)
0x230: Stack[-2] = Stack[-10]
0x231: Stack[-1] = Stack[-14]
0x232: Call2 0x112

0x233: Stack[-4] = Stack[-3]
0x234: Pop(3)
0x235: Call2 0x5fc

0x236: Stack[-5] = Stack[-4]
0x237: Pop(4)
0x238: PushEmpty(int)
0x239: Call2 0x39c

0x23a: Pop(0)
0x23b: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x23c: Pop(1)
0x23d: PushEmpty(object, float)
0x23e: Stack[-2] = Stack[-5]
0x23f: Stack[-1] = Stack[-3]
0x240: Call2 0x3a3

0x241: Pop(2)
0x242: Return(); Pop(6)

0x243: Stack[-3] = 0
0x244: PushEmpty(int, bool, int, string, int, bool, int, string)
0x245: PushEmpty()
0x246: Call2 0x397

0x247: Pop(0)
0x248: @ irand(Stack[-4], Stack[-1])
0x249: Pop(0)
0x24a: Push((int) 1)
0x24b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x24c: @ Face(Stack[-0])
0x24d: Pop(0)
0x24e: Push((bool) 1)
0x24f: @ SetAttackState(Stack[-1])
0x250: Pop(1)
0x251: PushEmpty()
0x252: Call2 0x830

0x253: Pop(0)
0x254: Push("all")
0x255: Push("attack_begin")
0x256: Pop(1); Push(Stack[-1] + Stack[-6]);
0x257: @ PlayAnimation(Stack[-2], Stack[-1])
0x258: Pop(2)
0x259: @ WaitForAnimEnd()
0x25a: Pop(0)
0x25b: PushEmpty()
0x25c: Call2 0x377

0x25d: Pop(0)
0x25e: PushEmpty(bool, object)
0x25f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x260: Call2 0x66e

0x261: Pop(1)
0x262: Pop(1); Push((bool) Stack[-1] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x264: @ StopAsync()
0x265: Pop(0)
0x266: Stack[-10] = (bool) 0
0x267: Return(); Pop(8)

0x268: PushEmpty(float, int)
0x269: Stack[-2] = Stack[-11]
0x26a: Stack[-1] = Stack[-6]
0x26b: Call2 0x21d

0x26c: Pop(2)
0x26d: Push("all")
0x26e: Push("attack_middle")
0x26f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x270: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x271: Pop(2)
0x272: Push(Stack[-3])
0x273: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x274: PushEmpty()
0x275: Call2 0x830

0x276: Pop(0)
0x277: Push("all")
0x278: Push("attack_middle")
0x279: Pop(1); Push(Stack[-1] + Stack[-6]);
0x27a: @ PlayAnimation(Stack[-2], Stack[-1])
0x27b: Pop(2)
0x27c: @ WaitForAnimEnd()
0x27d: Pop(0)
0x27e: PushEmpty()
0x27f: Call2 0x397

0x280: Pop(0)
0x281: PushEmpty(bool, object)
0x282: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x283: Call2 0x66e

0x284: Pop(1)
0x285: Pop(1); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x287: @ StopAsync()
0x288: Pop(0)
0x289: Stack[-10] = (bool) 0
0x28a: Return(); Pop(8)

0x28b: PushEmpty(float, int)
0x28c: Stack[-2] = Stack[-11]
0x28d: Stack[-1] = Stack[-6]
0x28e: Call2 0x21d

0x28f: Pop(2)
0x290: Stack[-2] = (int) 1
0x291: Push("attack_middle")
0x292: Pop(1); Push(Stack[-1] + Stack[-5]);
0x293: Push("_")
0x294: Pop(2); Push(Stack[-2] + Stack[-1]);
0x295: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x296: Push("all")
0x297: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x298: Pop(1)
0x299: Pop(0); Push((bool) Stack[-3] == 0)
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: GOTO 0x2b9

0x29c: PushEmpty()
0x29d: Call2 0x830

0x29e: Pop(0)
0x29f: Push("all")
0x2a0: @ PlayAnimation(Stack[-1], Stack[-2])
0x2a1: Pop(1)
0x2a2: @ WaitForAnimEnd()
0x2a3: Pop(0)
0x2a4: PushEmpty()
0x2a5: Call2 0x397

0x2a6: Pop(0)
0x2a7: PushEmpty(bool, object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0x66e

0x2aa: Pop(1)
0x2ab: Pop(1); Push((bool) Stack[-1] == 0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ad: @ StopAsync()
0x2ae: Pop(0)
0x2af: Stack[-10] = (bool) 0
0x2b0: Return(); Pop(8)

0x2b1: PushEmpty(float, int)
0x2b2: Stack[-2] = Stack[-11]
0x2b3: Stack[-1] = Stack[-6]
0x2b4: Call2 0x21d

0x2b5: Pop(2)
0x2b6: Push((int) 1)
0x2b7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2b8: GOTO 0x291

0x2b9: Push((bool) 0)
0x2ba: @ SetAttackState(Stack[-1])
0x2bb: Pop(1)
0x2bc: Push("all")
0x2bd: Push("attack_end")
0x2be: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c0: Pop(2)
0x2c1: PushEmpty(bool)
0x2c2: Call2 0x3a5

0x2c3: Pop(0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c5: PushEmpty(bool, float)
0x2c6: Stack[-1] = (float) 0.75
0x2c7: Call2 0x2cd

0x2c8: Pop(2)
0x2c9: @ StopAsync()
0x2ca: Pop(0)
0x2cb: Stack[-10] = (bool) 1
0x2cc: Return(); Pop(8)

0x2cd: PushEmpty(float, bool, float, bool)
0x2ce: @ rand(Stack[-2])
0x2cf: Pop(0)
0x2d0: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2d2: @ IsAnimationPlaying(Stack[-1])
0x2d3: Pop(0)
0x2d4: Pop(0); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: GOTO 0x2e0

0x2d7: PushEmpty(bool)
0x2d8: Call2 0x32f

0x2d9: Pop(0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2db: Stack[-6] = (bool) 1
0x2dc: Return(); Pop(4)

0x2dd: @ sync()
0x2de: Pop(0)
0x2df: GOTO 0x2d2

0x2e0: GOTO 0x2e6

0x2e1: @ WaitForAnimEnd()
0x2e2: Pop(0)
0x2e3: PushEmpty()
0x2e4: Call2 0x397

0x2e5: Pop(0)
0x2e6: Stack[-6] = (bool) 0
0x2e7: Return(); Pop(4)

0x2e8: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2e9: @ IsAnimationPlaying(Stack[-5])
0x2ea: Pop(0)
0x2eb: Pop(0); Push((bool) Stack[-5] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: GOTO 0x30e

0x2ee: PushEmpty(bool)
0x2ef: Call2 0x32f

0x2f0: Pop(0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f2: Stack[-12] = (bool) 1
0x2f3: Return(); Pop(10)

0x2f4: PushEmpty(bool, object)
0x2f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f6: Call2 0x66e

0x2f7: Pop(1)
0x2f8: Pop(1); Push((bool) Stack[-1] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-12] = (bool) 0
0x2fb: Return(); Pop(10)

0x2fc: @@ GetPFPosition(Stack[-4])
0x2fd: Pop(0)
0x2fe: @ GetPFPosition(Stack[-3])
0x2ff: Pop(0)
0x300: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x301: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x302: Pop(0); Push(Stack[-11] * Stack[-11]);
0x303: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x305: PushEmpty(bool, float)
0x306: Stack[-1] = Stack[-13]
0x307: Call2 0x244

0x308: Pop(2)
0x309: Stack[-12] = (bool) 1
0x30a: Return(); Pop(10)

0x30b: @ sync()
0x30c: Pop(0)
0x30d: GOTO 0x2e9

0x30e: PushEmpty()
0x30f: Call2 0x397

0x310: Pop(0)
0x311: Stack[-12] = (bool) 0
0x312: Return(); Pop(10)

0x313: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x314: PushEmpty(bool, object)
0x315: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x316: Call2 0x66e

0x317: Pop(1)
0x318: Pop(1); Push((bool) Stack[-1] == 0)
0x319: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31a: Stack[-11] = (bool) 0
0x31b: Return(); Pop(10)

0x31c: PushEmpty(bool)
0x31d: Call2 0x36c

0x31e: Pop(0)
0x31f: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x320: @@ GetPFPosition(Stack[-5])
0x321: Pop(0)
0x322: @ GetPFPosition(Stack[-4])
0x323: Pop(0)
0x324: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x325: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x326: @@ GetAttackDistance(Stack[-1])
0x327: Pop(0)
0x328: Push((int) 50)
0x329: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x32a: Pop(0); Push(Stack[-1] * Stack[-1]);
0x32b: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x32c: Return(); Pop(10)

0x32d: Stack[-11] = (bool) 0
0x32e: Return(); Pop(10)

0x32f: PushEmpty(bool)
0x330: Stack[-1] = (bool) 0
0x331: PushEmpty(bool)
0x332: Call2 0x313

0x333: Pop(0)
0x334: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x335: PushEmpty(bool)
0x336: Call2 0x33f

0x337: Pop(0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: Stack[-1] = (bool) 1
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-1] = (bool) 1
0x33c: Return(); Pop(0)

0x33d: Stack[-1] = (bool) 0
0x33e: Return(); Pop(0)

0x33f: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x340: @ GetScene(Stack[-5])
0x341: Pop(0)
0x342: Stack[-4] = (bool) 0
0x343: PushEmpty(cvector, object)
0x344: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x345: Call2 0x5ce

0x346: Pop(1)
0x347: Pop(1); Push(( -Stack[-1])
0x348: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x349: Pop(1)
0x34a: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x34b: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34c: GOTO 0x369

0x34d: @ Face(Stack[-0])
0x34e: Pop(0)
0x34f: Push("all")
0x350: Push("bjump")
0x351: @ PlayAnimation(Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: @@ GetPFPosition(Stack[-2])
0x354: Pop(0)
0x355: @ GetPFPosition(Stack[-1])
0x356: Pop(0)
0x357: @ WaitForAnimEnd()
0x358: Pop(0)
0x359: PushEmpty()
0x35a: Call2 0x397

0x35b: Pop(0)
0x35c: @ StopAsync()
0x35d: Pop(0)
0x35e: Push(CVector(0.0, 0.0, 0.0))
0x35f: @ SetSpeed(Stack[-1])
0x360: Pop(1)
0x361: Stack[-4] = (bool) 1
0x362: PushEmpty(bool)
0x363: Call2 0x313

0x364: Pop(0)
0x365: Pop(1); Push((bool) Stack[-1] == 0)
0x366: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x367: GOTO 0x369

0x368: GOTO 0x343

0x369: Stack[-11] = Stack[-4]
0x36a: Return(); Pop(10)

0x36b: Stack[-5] = 0
0x36c: PushEmpty(bool, bool)
0x36d: Push("IsAttacking")
0x36e: Push((int) 1)
0x36f: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x370: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x371: @@ IsAttacking(Stack[-1])
0x372: Pop(0)
0x373: Stack[-3] = Stack[-1]
0x374: Return(); Pop(2)

0x375: Stack[-3] = (bool) 0
0x376: Return(); Pop(2)

0x377: PushEmpty(float, int, float, int)
0x378: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x379: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x37a: Return(); Pop(4)

0x37b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x37c: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37d: Push((int) -1)
0x37e: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x37f: Push((int) 0)
0x380: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: Return(); Pop(4)

0x383: @ rand(Stack[-2])
0x384: Pop(0)
0x385: PushEmpty(float)
0x386: Call2 0x3a9

0x387: Pop(0)
0x388: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x38a: @ irand(Stack[-1], Stack[-2])
0x38b: Pop(0)
0x38c: Push((int) 1)
0x38d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x38e: Push("attack")
0x38f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x390: @ Speak(Stack[-1])
0x391: Pop(1)
0x392: PushEmpty(int)
0x393: Call2 0x3a7

0x394: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x395: Pop(1)
0x396: Return(); Pop(4)

0x397: PushEmpty(object)
0x398: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x399: Call2 0x827

0x39a: Pop(1)
0x39b: Return(); Pop(0)

0x39c: Stack[-1] = (int) 0
0x39d: Return(); Pop(0)

0x39e: PushEmpty(string)
0x39f: Stack[-1] = "attack_stay"
0x3a0: Call2 0x795

0x3a1: Pop(1)
0x3a2: Return(); Pop(0)

0x3a3: PushEmpty()
0x3a4: Return(); Pop(0)

0x3a5: Stack[-1] = (bool) 1
0x3a6: Return(); Pop(0)

0x3a7: Stack[-1] = (int) 1
0x3a8: Return(); Pop(0)

0x3a9: Stack[-1] = (float) 0.5
0x3aa: Return(); Pop(0)

0x3ab: PushEmpty(bool, bool, bool, bool)
0x3ac: PushEmpty(object)
0x3ad: Stack[-1] = Stack[-10]
0x3ae: Call2 0x827

0x3af: Pop(1)
0x3b0: Push((int) 1)
0x3b1: Push((int) 5)
0x3b2: @ SetTimer(Stack[-2], Stack[-1])
0x3b3: Pop(2)
0x3b4: @ CanSee(Stack[-2], Stack[-9])
0x3b5: Pop(0)
0x3b6: Push(Stack[-2])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3b9: PushEmpty(object)
0x3ba: Stack[-1] = Stack[-10]
0x3bb: Call2 0x783

0x3bc: Pop(1)
0x3bd: GOTO 0x3bf

0x3be: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3bf: PushEmpty(bool, object)
0x3c0: Stack[-1] = Stack[-11]
0x3c1: Call2 0x5d5

0x3c2: Pop(1)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c4: PushEmpty(object)
0x3c5: Call2 0x7be

0x3c6: Pop(0)
0x3c7: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x3c8: Pop(1)
0x3c9: PushEmpty(bool, object, float, float, bool, bool)
0x3ca: Stack[-5] = Stack[-15]
0x3cb: Stack[-4] = Stack[-14]
0x3cc: Stack[-3] = Stack[-13]
0x3cd: Stack[-2] = Stack[-12]
0x3ce: Stack[-1] = Stack[-11]
0x3cf: Call2 0x414

0x3d0: Stack[-7] = Stack[-6]
0x3d1: Pop(6)
0x3d2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d4: Push("head")
0x3d5: @ UnlookAsync(Stack[-1])
0x3d6: Pop(1)
0x3d7: Push((int) 1)
0x3d8: @ KillTimer(Stack[-1])
0x3d9: Pop(1)
0x3da: Stack[-10] = Stack[-1]
0x3db: Return(); Pop(4)

0x3dc: PushEmpty()
0x3dd: Push((int) 1)
0x3de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e0: PushEmpty(object)
0x3e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e2: Call2 0x827

0x3e3: Pop(1)
0x3e4: GOTO 0x3e9

0x3e5: PushEmpty(int)
0x3e6: Stack[-1] = Stack[-2]
0x3e7: Call2 0x47a

0x3e8: Pop(1)
0x3e9: Return(); Pop(0)

0x3ea: Push((int) 1)
0x3eb: @ KillTimer(Stack[-1])
0x3ec: Pop(1)
0x3ed: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ef: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3f0: Push("head")
0x3f1: @ UnlookAsync(Stack[-1])
0x3f2: Pop(1)
0x3f3: PushEmpty()
0x3f4: Call2 0x490

0x3f5: Pop(0)
0x3f6: Return(); Pop(0)

0x3f7: PushEmpty()
0x3f8: PushEmpty(bool)
0x3f9: Stack[-1] = (bool) 0
0x3fa: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3fb: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fc: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fe: Stack[-1] = (bool) 1
0x3ff: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x400: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x401: PushEmpty(object)
0x402: Stack[-1] = Stack[-2]
0x403: Call2 0x783

0x404: Pop(1)
0x405: Return(); Pop(0)

0x406: PushEmpty()
0x407: PushEmpty(bool)
0x408: Stack[-1] = (bool) 0
0x409: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x40a: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x40c: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40d: Stack[-1] = (bool) 1
0x40e: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x40f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x410: Push("head")
0x411: @ UnlookAsync(Stack[-1])
0x412: Pop(1)
0x413: Return(); Pop(0)

0x414: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x415: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x416: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x417: Stack[-7] = Stack[-17]
0x418: PushEmpty(bool, object)
0x419: Stack[-1] = Stack[-23]
0x41a: Call2 0x4a0

0x41b: Pop(1)
0x41c: Pop(1); Push((bool) Stack[-1] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: Stack[-22] = (bool) 0
0x41f: Return(); Pop(16)

0x420: @@ GetPosition(Stack[-5])
0x421: Pop(0)
0x422: @ GetPosition(Stack[-4])
0x423: Pop(0)
0x424: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x425: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x426: PushEmpty(bool)
0x427: Stack[-1] = (bool) 0
0x428: Push((int) 0)
0x429: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42b: Pop(0); Push(Stack[-20] * Stack[-20]);
0x42c: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42e: Stack[-1] = (bool) 1
0x42f: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x430: @ Stop()
0x431: Pop(0)
0x432: Stack[-22] = (bool) 0
0x433: Return(); Pop(16)

0x434: Pop(0); Push(Stack[-20] * Stack[-20]);
0x435: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x437: @@ GetPFPosition(Stack[-5])
0x438: Pop(0)
0x439: @ FindPathTo(Stack[-1], Stack[-5])
0x43a: Pop(0)
0x43b: Pop(0); Push(( Stack[-1] != 0 )
0x43c: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43d: Stack[-6] = Stack[-1]
0x43e: Stack[-1] = 0
0x43f: Pop(0); Push(( Stack[-6] != 0 )
0x440: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x441: Push(Stack[-7])
0x442: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x443: Stack[-7] = (bool) 0
0x444: @ RotatePath(Stack[-6], Stack[-8])
0x445: Pop(0)
0x446: Pop(0); Push((bool) Stack[-8] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x448: GOTO 0x478

0x449: Push((int) 0)
0x44a: Push((float)0.3)
0x44b: @ SetTimer(Stack[-2], Stack[-1])
0x44c: Pop(2)
0x44d: PushEmpty(string)
0x44e: Call2 0x4a7

0x44f: Pop(0)
0x450: PushEmpty(string)
0x451: Call2 0x4a9

0x452: Pop(0)
0x453: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x454: Pop(2)
0x455: Pop(0); Push((bool) Stack[-8] == 0)
0x456: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x457: Push( Stack[0 + Tasks[-1].StackPointer] )
0x458: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x459: Stack[-6] = 0
0x45a: GOTO 0x478

0x45b: GOTO 0x45d

0x45c: GOTO 0x477

0x45d: GOTO 0x45f

0x45e: Stack[-6] = 0
0x45f: GOTO 0x470

0x460: Push((int) 0)
0x461: @ KillTimer(Stack[-1])
0x462: Pop(1)
0x463: Push((float)0.5)
0x464: @ Sleep(Stack[-1], Stack[-9])
0x465: Pop(1)
0x466: Pop(0); Push((bool) Stack[-8] == 0)
0x467: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x468: Push( Stack[0 + Tasks[-1].StackPointer] )
0x469: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46a: Stack[-6] = 0
0x46b: GOTO 0x478

0x46c: Push((int) 0)
0x46d: Push((float)0.3)
0x46e: @ SetTimer(Stack[-2], Stack[-1])
0x46f: Pop(2)
0x470: Stack[-1] = 0
0x471: GOTO 0x476

0x472: Push((int) 0)
0x473: @ KillTimer(Stack[-1])
0x474: Pop(1)
0x475: GOTO 0x478

0x476: Stack[-6] = 0
0x477: GOTO 0x418

0x478: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x479: Return(); Pop(16)

0x47a: PushEmpty()
0x47b: Push((int) 0)
0x47c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47e: Return(); Pop(0)

0x47f: PushEmpty(bool, object)
0x480: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x481: Call2 0x4a0

0x482: Pop(1)
0x483: Pop(1); Push((bool) Stack[-1] == 0)
0x484: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x485: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x486: Push((int) 0)
0x487: @ KillTimer(Stack[-1])
0x488: Pop(1)
0x489: @ Stop()
0x48a: Pop(0)
0x48b: Return(); Pop(0)

0x48c: PushEmpty()
0x48d: @ RequestClearPath(Stack[-1])
0x48e: Pop(0)
0x48f: Return(); Pop(0)

0x490: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x491: Push((int) 0)
0x492: @ KillTimer(Stack[-1])
0x493: Pop(1)
0x494: @ Stop()
0x495: Pop(0)
0x496: Return(); Pop(0)

0x497: PushEmpty()
0x498: PushEmpty()
0x499: Call2 0x3ea

0x49a: Pop(0)
0x49b: PushEmpty(object)
0x49c: Stack[-1] = Stack[-2]
0x49d: Call2 0x906

0x49e: Pop(1)
0x49f: Return(); Pop(0)

0x4a0: PushEmpty()
0x4a1: PushEmpty(bool, object)
0x4a2: Stack[-1] = Stack[-3]
0x4a3: Call2 0x66e

0x4a4: Stack[-4] = Stack[-2]
0x4a5: Pop(2)
0x4a6: Return(); Pop(0)

0x4a7: Stack[-1] = "walk"
0x4a8: Return(); Pop(0)

0x4a9: Stack[-1] = "run"
0x4aa: Return(); Pop(0)

0x4ab: PushEmpty()
0x4ac: PushEmpty(object)
0x4ad: Stack[-1] = Stack[-2]
0x4ae: Call2 0x4c2

0x4af: Pop(1)
0x4b0: Push((int) 50)
0x4b1: Push((int) 40)
0x4b2: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x4b3: Pop(2)
0x4b4: @ Hold()
0x4b5: Pop(0)
0x4b6: GOTO 0x4b4

0x4b7: Return(); Pop(0)

0x4b8: PushEmpty(bool, bool)
0x4b9: @ IsOverrideActive(Stack[-1])
0x4ba: Pop(0)
0x4bb: Pop(0); Push((bool) Stack[-1] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bd: PushEmpty(object)
0x4be: Stack[-1] = Stack[-4]
0x4bf: Call2 0x892

0x4c0: Pop(1)
0x4c1: Return(); Pop(2)

0x4c2: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x4c3: Pop(0); Push((bool) Stack[-21] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c5: PushEmpty(string)
0x4c6: Stack[-1] = "fdie"
0x4c7: Call2 0x51d

0x4c8: Pop(1)
0x4c9: GOTO 0x51c

0x4ca: @@ GetPosition(Stack[-10])
0x4cb: Pop(0)
0x4cc: @ GetPosition(Stack[-9])
0x4cd: Pop(0)
0x4ce: @ GetDirection(Stack[-8])
0x4cf: Pop(0)
0x4d0: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4d1: Push(CvectorIndex(Stack[-7], 0))
0x4d2: Push(CvectorIndex(Stack[-9], 0))
0x4d3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4d4: Push(CvectorIndex(Stack[-8], 2))
0x4d5: Push(CvectorIndex(Stack[-10], 2))
0x4d6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4d7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4d8: Push((int) 0)
0x4d9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4db: Stack[-6] = "fdie"
0x4dc: GOTO 0x4de

0x4dd: Stack[-6] = "bdie"
0x4de: @ RemoveRTEnvelope()
0x4df: Pop(0)
0x4e0: @ SetDeathState()
0x4e1: Pop(0)
0x4e2: @ Stop()
0x4e3: Pop(0)
0x4e4: @ StopAsync()
0x4e5: Pop(0)
0x4e6: Stack[-5] = Stack[-21]
0x4e7: Push("GetScriptProperty")
0x4e8: Push((int) 2)
0x4e9: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4eb: Push("Owner")
0x4ec: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4ed: Pop(1)
0x4ee: Push(Stack[-4])
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f0: Push("Owner")
0x4f1: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x4f2: Pop(1)
0x4f3: Pop(0); Push((bool) Stack[-5] == 0)
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f5: Stack[-5] = Stack[-21]
0x4f6: Push("@GetEyesHeight")
0x4f7: Push((int) 1)
0x4f8: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x4f9: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4fa: @@ GetEyesHeight(Stack[-2])
0x4fb: Pop(0)
0x4fc: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4fd: Push(CvectorIndex(Stack[-1], 1))
0x4fe: Stack[-1] = Stack[-3]
0x4ff: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x500: Push("head")
0x501: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x502: Pop(1)
0x503: Stack[-3] = (bool) 1
0x504: GOTO 0x506

0x505: Stack[-3] = (bool) 0
0x506: PushEmpty(string)
0x507: Stack[-1] = Stack[-7]
0x508: Call2 0x795

0x509: Pop(1)
0x50a: Push("all")
0x50b: @ PlayAnimation(Stack[-1], Stack[-7])
0x50c: Pop(1)
0x50d: @ WaitForAnimEnd()
0x50e: Pop(0)
0x50f: Push(Stack[-3])
0x510: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x511: @ StopAsync()
0x512: Pop(0)
0x513: Push("head")
0x514: @ UnlookAsync(Stack[-1])
0x515: Pop(1)
0x516: Push("all")
0x517: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x518: Pop(1)
0x519: @ RemoveEnvelope()
0x51a: Pop(0)
0x51b: Stack[-5] = 0
0x51c: Return(); Pop(20)

0x51d: PushEmpty()
0x51e: @ RemoveRTEnvelope()
0x51f: Pop(0)
0x520: @ SetDeathState()
0x521: Pop(0)
0x522: @ Stop()
0x523: Pop(0)
0x524: @ StopAsync()
0x525: Pop(0)
0x526: @ StopSecondaryAnimation()
0x527: Pop(0)
0x528: PushEmpty(string)
0x529: Stack[-1] = Stack[-2]
0x52a: Call2 0x795

0x52b: Pop(1)
0x52c: Push("all")
0x52d: @ PlayAnimation(Stack[-1], Stack[-2])
0x52e: Pop(1)
0x52f: @ WaitForAnimEnd()
0x530: Pop(0)
0x531: Push("all")
0x532: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x533: Pop(1)
0x534: @ RemoveEnvelope()
0x535: Pop(0)
0x536: Return(); Pop(0)

0x537: PushEmpty()
0x538: Return(); Pop(0)

0x539: PushEmpty()
0x53a: Return(); Pop(0)

0x53b: PushEmpty()
0x53c: Return(); Pop(0)

0x53d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x53e: PushEmpty()
0x53f: Call2 0x566

0x540: Pop(0)
0x541: Return(); Pop(0)

0x542: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x543: Return(); Pop(0)

0x544: PushEmpty()
0x545: PushEmpty(int, object)
0x546: Stack[-1] = Stack[-3]
0x547: Push(-2, 1); TaskCall(0)
0x548: Call2 0x0

0x549: Pop(-2, 1); TaskReturn
0x54a: Pop(2)
0x54b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x54c: Return(); Pop(0)

0x54d: Return(); Pop(0)

0x54e: PushEmpty()
0x54f: PushEmpty(bool)
0x550: Call2 0x542

0x551: Pop(0)
0x552: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x553: PushEmpty()
0x554: Call2 0x5ba

0x555: Pop(0)
0x556: PushEmpty(object)
0x557: Stack[-1] = Stack[-2]
0x558: Call2 0x544

0x559: Pop(1)
0x55a: Return(); Pop(0)

0x55b: PushEmpty(bool, bool)
0x55c: @ IsPlayerActor(Stack[-3], Stack[-1])
0x55d: Pop(0)
0x55e: Push(Stack[-1])
0x55f: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x560: PushEmpty()
0x561: Push(-0, 6); TaskCall(2)
0x562: Call2 0x100

0x563: Pop(-0, 6); TaskReturn
0x564: Pop(0)
0x565: Return(); Pop(2)

0x566: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x567: @ GetPFPosition(Stack[-1])
0x568: Pop(0)
0x569: @ GetDirection(Stack[-0])
0x56a: Pop(0)
0x56b: PushEmpty()
0x56c: Call2 0x5bf

0x56d: Pop(0)
0x56e: Push((int) 10)
0x56f: @ irand(Stack[-5], Stack[-1])
0x570: Pop(1)
0x571: Push((int) 5)
0x572: Pop(1); Push(Stack[-5] + Stack[-1]);
0x573: @ Sleep(Stack[-1], Stack[-4])
0x574: Pop(1)
0x575: Push(Stack[-3])
0x576: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x577: PushEmpty()
0x578: Call2 0x54d

0x579: Pop(0)
0x57a: GOTO 0x5b8

0x57b: PushEmpty()
0x57c: Call2 0x5bf

0x57d: Pop(0)
0x57e: @ GetPFPosition(Stack[-2])
0x57f: Pop(0)
0x580: PushEmpty(float, cvector, cvector)
0x581: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x582: Stack[-1] = Stack[-5]
0x583: Call2 0x7ce

0x584: Pop(2)
0x585: Push((int) 40000)
0x586: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x587: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x588: @ FindPathTo(Stack[-1], Stack[-1])
0x589: Pop(0)
0x58a: Pop(0); Push(( Stack[-1] != 0 )
0x58b: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x58c: @ RotatePath(Stack[-1], Stack[-3])
0x58d: Pop(0)
0x58e: Pop(0); Push((bool) Stack[-3] == 0)
0x58f: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x590: GOTO 0x5b7

0x591: Push((bool) 0)
0x592: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x593: Pop(1)
0x594: Pop(0); Push((bool) Stack[-3] == 0)
0x595: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x596: GOTO 0x5b7

0x597: Push(CvectorIndex(Stack[-0], 0))
0x598: Push(CvectorIndex(Stack[-0], 2))
0x599: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x59a: Pop(2)
0x59b: Pop(0); Push((bool) Stack[-3] == 0)
0x59c: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59d: GOTO 0x5b7

0x59e: @ WaitForAnimEnd(Stack[-3])
0x59f: Pop(0)
0x5a0: Pop(0); Push((bool) Stack[-3] == 0)
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a2: GOTO 0x5b7

0x5a3: GOTO 0x5b8

0x5a4: GOTO 0x5a8

0x5a5: Push((int) 1)
0x5a6: @ Sleep(Stack[-1])
0x5a7: Pop(1)
0x5a8: Stack[-1] = 0
0x5a9: GOTO 0x5b7

0x5aa: Push(CvectorIndex(Stack[-0], 0))
0x5ab: Push(CvectorIndex(Stack[-0], 2))
0x5ac: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x5ad: Pop(2)
0x5ae: Pop(0); Push((bool) Stack[-3] == 0)
0x5af: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5b0: GOTO 0x5b7

0x5b1: @ WaitForAnimEnd(Stack[-3])
0x5b2: Pop(0)
0x5b3: Pop(0); Push((bool) Stack[-3] == 0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b5: GOTO 0x5b7

0x5b6: GOTO 0x5b8

0x5b7: GOTO 0x57b

0x5b8: GOTO 0x56b

0x5b9: Return(); Pop(8)

0x5ba: @ StopGroup0()
0x5bb: Pop(0)
0x5bc: @ Stop()
0x5bd: Pop(0)
0x5be: Return(); Pop(0)

0x5bf: Return(); Pop(0)

0x5c0: PushEmpty()
0x5c1: Push((int) 2)
0x5c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c4: Stack[-2] = "fire"
0x5c5: Return(); Pop(0)

0x5c6: GOTO 0x5cc

0x5c7: Push((int) 1)
0x5c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5ca: Stack[-2] = "bullet"
0x5cb: Return(); Pop(0)

0x5cc: Stack[-2] = "phys"
0x5cd: Return(); Pop(0)

0x5ce: PushEmpty(cvector, cvector, cvector, cvector)
0x5cf: @ GetPosition(Stack[-2])
0x5d0: Pop(0)
0x5d1: @@ GetPosition(Stack[-1])
0x5d2: Pop(0)
0x5d3: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5d4: Return(); Pop(4)

0x5d5: PushEmpty(bool, bool)
0x5d6: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5d7: Pop(0)
0x5d8: Stack[-4] = Stack[-1]
0x5d9: Return(); Pop(2)

0x5da: PushEmpty(bool, bool)
0x5db: Push("HasProperty")
0x5dc: Push((int) 2)
0x5dd: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5de: Pop(1); Push((bool) Stack[-1] == 0)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e0: Stack[-5] = (bool) 0
0x5e1: Return(); Pop(2)

0x5e2: @@ HasProperty(Stack[-3], Stack[-1])
0x5e3: Pop(0)
0x5e4: Stack[-5] = Stack[-1]
0x5e5: Return(); Pop(2)

0x5e6: PushEmpty(float, float)
0x5e7: PushEmpty(bool, object, string)
0x5e8: Stack[-2] = Stack[-10]
0x5e9: Stack[-1] = Stack[-9]
0x5ea: Call2 0x5da

0x5eb: Pop(2)
0x5ec: Pop(1); Push((bool) Stack[-1] == 0)
0x5ed: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ee: Stack[-8] = (bool) 0
0x5ef: Return(); Pop(2)

0x5f0: @@ GetProperty(Stack[-6], Stack[-1])
0x5f1: Pop(0)
0x5f2: PushEmpty(float, float, float, float)
0x5f3: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x5f4: Stack[-2] = Stack[-8]
0x5f5: Stack[-1] = Stack[-7]
0x5f6: Call2 0x7d9

0x5f7: Pop(3)
0x5f8: @@ SetProperty(Stack[-7], Stack[-1])
0x5f9: Pop(1)
0x5fa: Stack[-8] = (bool) 1
0x5fb: Return(); Pop(2)

0x5fc: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x5fd: PushEmpty(bool, object, string)
0x5fe: Stack[-2] = Stack[-18]
0x5ff: Stack[-1] = "health"
0x600: Call2 0x5da

0x601: Pop(2)
0x602: Pop(1); Push((bool) Stack[-1] == 0)
0x603: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x604: Stack[-16] = (float) 0.0
0x605: Return(); Pop(12)

0x606: PushEmpty(bool, object, string)
0x607: Stack[-2] = Stack[-18]
0x608: Stack[-1] = "armor"
0x609: Call2 0x5da

0x60a: Pop(2)
0x60b: Pop(1); Push((bool) Stack[-1] == 0)
0x60c: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60d: Stack[-6] = (int) 0
0x60e: GOTO 0x612

0x60f: Push("armor")
0x610: @@ GetProperty(Stack[-1], Stack[-7])
0x611: Pop(1)
0x612: Push("armor_")
0x613: PushEmpty(string, int)
0x614: Stack[-1] = Stack[-16]
0x615: Call2 0x5c0

0x616: Pop(1)
0x617: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x618: PushEmpty(bool, object, string)
0x619: Stack[-2] = Stack[-18]
0x61a: Stack[-1] = Stack[-8]
0x61b: Call2 0x5da

0x61c: Pop(2)
0x61d: Pop(1); Push((bool) Stack[-1] == 0)
0x61e: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x61f: Stack[-4] = (int) 0
0x620: GOTO 0x623

0x621: @@ GetProperty(Stack[-5], Stack[-4])
0x622: Pop(0)
0x623: PushEmpty(float, float, float)
0x624: Pop(0); Push(Stack[-9] + Stack[-7]);
0x625: Push((float)100.0)
0x626: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x627: Stack[-1] = (int) 1
0x628: Call2 0x7d2

0x629: Stack[-6] = Stack[-3]
0x62a: Pop(3)
0x62b: Push("health")
0x62c: @@ GetProperty(Stack[-1], Stack[-3])
0x62d: Pop(1)
0x62e: Push((int) 1)
0x62f: Pop(1); Push(Stack[-1] - Stack[-4]);
0x630: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x631: Push("health")
0x632: PushEmpty(float, float, float, float)
0x633: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x634: Stack[-2] = (int) 0
0x635: Stack[-1] = (int) 1
0x636: Call2 0x7d9

0x637: Pop(3)
0x638: @@ SetProperty(Stack[-2], Stack[-1])
0x639: Pop(2)
0x63a: PushEmpty(bool, object)
0x63b: Stack[-1] = Stack[-17]
0x63c: Call2 0x5d5

0x63d: Pop(1)
0x63e: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63f: PushEmpty(float)
0x640: Stack[-1] = -Stack[-2]; Pop(0);
0x641: Call2 0x807

0x642: Pop(1)
0x643: Stack[-16] = Stack[-1]
0x644: Return(); Pop(12)

0x645: PushEmpty(bool, bool)
0x646: @@ IsDead(Stack[-1])
0x647: Pop(0)
0x648: Stack[-4] = Stack[-1]
0x649: Return(); Pop(2)

0x64a: PushEmpty(object, object, object, object)
0x64b: Pop(0); Push((bool) Stack[-5] == 0)
0x64c: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64d: Stack[-6] = (bool) 0
0x64e: Return(); Pop(4)

0x64f: PushEmpty(bool)
0x650: Stack[-1] = (bool) 0
0x651: Push("IsDead")
0x652: Push((int) 1)
0x653: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x654: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x655: PushEmpty(bool, object)
0x656: Stack[-1] = Stack[-8]
0x657: Call2 0x645

0x658: Pop(1)
0x659: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x65a: Stack[-1] = (bool) 1
0x65b: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65c: Stack[-6] = (bool) 0
0x65d: Return(); Pop(4)

0x65e: @ GetScene(Stack[-2])
0x65f: Pop(0)
0x660: Pop(0); Push((bool) Stack[-2] == 0)
0x661: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x662: Stack[-6] = (bool) 0
0x663: Return(); Pop(4)

0x664: @@ GetScene(Stack[-1])
0x665: Pop(0)
0x666: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x667: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x668: Stack[-6] = (bool) 0
0x669: Return(); Pop(4)

0x66a: Stack[-6] = (bool) 1
0x66b: Return(); Pop(4)

0x66c: Stack[-1] = 0
0x66d: Stack[-2] = 0
0x66e: PushEmpty(int, int)
0x66f: PushEmpty(bool, object)
0x670: Stack[-1] = Stack[-5]
0x671: Call2 0x64a

0x672: Pop(1)
0x673: Pop(1); Push((bool) Stack[-1] == 0)
0x674: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x675: Stack[-4] = (bool) 0
0x676: Return(); Pop(2)

0x677: PushEmpty(bool, object, string)
0x678: Stack[-2] = Stack[-6]
0x679: Stack[-1] = "noaccess"
0x67a: Call2 0x5da

0x67b: Pop(2)
0x67c: Pop(1); Push((bool) Stack[-1] == 0)
0x67d: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x67e: Stack[-4] = (bool) 1
0x67f: Return(); Pop(2)

0x680: Push("noaccess")
0x681: @@ GetProperty(Stack[-1], Stack[-2])
0x682: Pop(1)
0x683: Push((int) 0)
0x684: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x685: Return(); Pop(2)

0x686: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x687: Pop(0); Push((bool) Stack[-15] == 0)
0x688: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x689: Return(); Pop(14)

0x68a: @ IsDead(Stack[-7])
0x68b: Pop(0)
0x68c: Push(Stack[-7])
0x68d: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68e: Return(); Pop(14)

0x68f: @ GetSecondaryAnimationType(Stack[-6])
0x690: Pop(0)
0x691: Push((int) 0)
0x692: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x693: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x694: Return(); Pop(14)

0x695: @@ GetPosition(Stack[-5])
0x696: Pop(0)
0x697: @ GetPosition(Stack[-4])
0x698: Pop(0)
0x699: @ GetDirection(Stack[-3])
0x69a: Pop(0)
0x69b: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x69c: Push(CvectorIndex(Stack[-2], 0))
0x69d: Push(CvectorIndex(Stack[-4], 0))
0x69e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x69f: Push(CvectorIndex(Stack[-3], 2))
0x6a0: Push(CvectorIndex(Stack[-5], 2))
0x6a1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6a2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6a3: Push((int) 0)
0x6a4: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a6: Stack[-1] = "fhit"
0x6a7: GOTO 0x6a9

0x6a8: Stack[-1] = "bhit"
0x6a9: Push("hit_react")
0x6aa: Push("1")
0x6ab: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6ac: Push("2")
0x6ad: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6ae: Push((int) -10)
0x6af: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6b0: Pop(4)
0x6b1: Return(); Pop(14)

0x6b2: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6b3: PushEmpty(bool)
0x6b4: Stack[-1] = (bool) 0
0x6b5: PushEmpty(bool)
0x6b6: Stack[-1] = (bool) 0
0x6b7: Push(Stack[-23])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6b9: Push((int) 4)
0x6ba: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6bc: Stack[-1] = (bool) 1
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6be: Push((int) 5)
0x6bf: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6c1: Stack[-1] = (bool) 1
0x6c2: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6c3: PushEmpty(cvector, cvector)
0x6c4: PushEmpty(cvector, object)
0x6c5: Stack[-1] = Stack[-25]
0x6c6: Call2 0x5ce

0x6c7: Stack[-3] = Stack[-2]
0x6c8: Pop(2)
0x6c9: Call2 0x7c4

0x6ca: Stack[-11] = Stack[-2]
0x6cb: Pop(2)
0x6cc: @ CreateVectorVector(Stack[-8])
0x6cd: Pop(0)
0x6ce: Stack[-7] = (int) 1
0x6cf: Push("hit")
0x6d0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6d1: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x6d2: Pop(1)
0x6d3: Pop(0); Push((bool) Stack[-6] == 0)
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d5: GOTO 0x6df

0x6d6: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6d7: Push((float)0.70711)
0x6d8: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6da: @@ add(Stack[-5])
0x6db: Pop(0)
0x6dc: Push((int) 1)
0x6dd: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6de: GOTO 0x6cf

0x6df: @@ size(Stack[-3])
0x6e0: Pop(0)
0x6e1: Push(Stack[-3])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6e3: @ irand(Stack[-2], Stack[-3])
0x6e4: Pop(0)
0x6e5: @@ get(Stack[-1], Stack[-2])
0x6e6: Pop(0)
0x6e7: PushEmpty(object, int, float, cvector, cvector)
0x6e8: Stack[-5] = Stack[-26]
0x6e9: Stack[-4] = Stack[-25]
0x6ea: Stack[-3] = Stack[-24]
0x6eb: Stack[-2] = Stack[-6]
0x6ec: Stack[-1] = -Stack[-14]; Pop(0);
0x6ed: Call2 0x6f6

0x6ee: Pop(5)
0x6ef: Return(); Pop(18)

0x6f0: Stack[-8] = 0
0x6f1: PushEmpty(object)
0x6f2: Stack[-1] = Stack[-22]
0x6f3: Call2 0x686

0x6f4: Pop(1)
0x6f5: Return(); Pop(18)

0x6f6: PushEmpty(object, object, object, object)
0x6f7: @ GetScene(Stack[-2])
0x6f8: Pop(0)
0x6f9: Push("scripted")
0x6fa: Push("blood_dir.xml")
0x6fb: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6fc: Pop(2)
0x6fd: PushEmpty(object)
0x6fe: Stack[-1] = Stack[-10]
0x6ff: Call2 0x686

0x700: Pop(1)
0x701: Return(); Pop(4)

0x702: Stack[-1] = 0
0x703: Stack[-2] = 0
0x704: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x705: @@ GetPosition(Stack[-3])
0x706: Pop(0)
0x707: @ GetPosition(Stack[-2])
0x708: Pop(0)
0x709: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x70a: Push(CvectorIndex(Stack[-1], 0))
0x70b: Push(CvectorIndex(Stack[-2], 2))
0x70c: @ RotateAsync(Stack[-2], Stack[-1])
0x70d: Pop(2)
0x70e: Return(); Pop(6)

0x70f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x710: @@ GetPosition(Stack[-8])
0x711: Pop(0)
0x712: @@ GetEyesHeight(Stack[-9])
0x713: Pop(0)
0x714: Push(CvectorIndex(Stack[-8], 1))
0x715: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x716: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x717: @ GetPosition(Stack[-7])
0x718: Pop(0)
0x719: @ GetEyesHeight(Stack[-9])
0x71a: Pop(0)
0x71b: Push(CvectorIndex(Stack[-7], 1))
0x71c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x71d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x71e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x71f: Push(CvectorIndex(Stack[-6], 1))
0x720: Stack[-1] = (int) 0
0x721: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x722: Pop(0); Push(Stack[-6] | Stack[-6]);
0x723: Pop(1); Push(Sqrt(Stack[-1]))
0x724: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x725: Stack[-5] = -Stack[-6]; Pop(0);
0x726: Pop(0); Push(Stack[-6] * Stack[-19]);
0x727: PushEmpty(cvector, cvector)
0x728: Push(CVector(0.0, 1.0, 0.0))
0x729: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x72a: Call2 0x7c4

0x72b: Pop(1)
0x72c: Push((int) 25)
0x72d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x72e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x72f: Push(CVector(0.0, 10.0, 0.0))
0x730: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x731: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x732: @ IsOverrideActive(Stack[-2])
0x733: Pop(0)
0x734: Push(Stack[-2])
0x735: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x736: Stack[-21] = (bool) 0
0x737: Return(); Pop(18)

0x738: @ StopWorld()
0x739: Pop(0)
0x73a: @ CameraTransit(Stack[-3], Stack[-5])
0x73b: Pop(0)
0x73c: Push(CvectorIndex(Stack[-4], 0))
0x73d: Push(CvectorIndex(Stack[-5], 2))
0x73e: @ Rotate(Stack[-2], Stack[-1])
0x73f: Pop(2)
0x740: PushEmpty(bool)
0x741: Call2 0x914

0x742: Pop(0)
0x743: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x744: GOTO 0x74d

0x745: Push("head")
0x746: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x747: Pop(1)
0x748: Push(Stack[-1])
0x749: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x74a: Push("head")
0x74b: @ LookAsyncCamera(Stack[-1])
0x74c: Pop(1)
0x74d: @ CameraWaitForPlayFinish()
0x74e: Pop(0)
0x74f: @ ResumeWorld()
0x750: Pop(0)
0x751: Stack[-21] = (bool) 1
0x752: Return(); Pop(18)

0x753: PushEmpty(bool, bool)
0x754: @ CameraSwitchToNormal()
0x755: Pop(0)
0x756: PushEmpty(bool)
0x757: Call2 0x914

0x758: Pop(0)
0x759: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x75a: GOTO 0x763

0x75b: Push("head")
0x75c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x75d: Pop(1)
0x75e: Push(Stack[-1])
0x75f: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x760: Push("head")
0x761: @ UnlookAsync(Stack[-1])
0x762: Pop(1)
0x763: Return(); Pop(2)

0x764: PushEmpty(bool, float, float, bool, float, float)
0x765: @ lshHasAnimation(Stack[-3], Stack[-7])
0x766: Pop(0)
0x767: Push(Stack[-3])
0x768: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x769: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x76a: Pop(0)
0x76b: Push((bool) 0)
0x76c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x76d: Pop(1)
0x76e: GOTO 0x773

0x76f: Push("Can't find lsh animation : ")
0x770: Pop(1); Push(Stack[-1] + Stack[-8]);
0x771: @ Trace(Stack[-1])
0x772: Pop(1)
0x773: Return(); Pop(6)

0x774: PushEmpty(bool, float, float, bool, float, float)
0x775: @ lshHasAnimation(Stack[-3], Stack[-8])
0x776: Pop(0)
0x777: Push(Stack[-3])
0x778: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x779: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x77a: Pop(0)
0x77b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x77c: Pop(0)
0x77d: GOTO 0x782

0x77e: Push("Can't find lsh animation : ")
0x77f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x780: @ Trace(Stack[-1])
0x781: Pop(1)
0x782: Return(); Pop(6)

0x783: PushEmpty(float, cvector, float, cvector)
0x784: @@ GetEyesHeight(Stack[-2])
0x785: Pop(0)
0x786: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x787: Push(CvectorIndex(Stack[-1], 1))
0x788: Stack[-1] = Stack[-3]
0x789: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x78a: Push("head")
0x78b: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x78c: Pop(1)
0x78d: Return(); Pop(4)

0x78e: PushEmpty(bool)
0x78f: Call2 0x914

0x790: Pop(0)
0x791: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x792: @ lshStopSpeech()
0x793: Pop(0)
0x794: Return(); Pop(0)

0x795: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x796: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x797: Pop(0)
0x798: Pop(0); Push((bool) Stack[-8] == 0)
0x799: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x79a: Stack[-7] = (int) 0
0x79b: Push((int) 1)
0x79c: Pop(1); Push(Stack[-8] + Stack[-1]);
0x79d: Pop(1); Push(Stack[-18] + Stack[-1]);
0x79e: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x79f: Pop(1)
0x7a0: Pop(0); Push((bool) Stack[-6] == 0)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a2: GOTO 0x7a6

0x7a3: Push((int) 1)
0x7a4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7a5: GOTO 0x79b

0x7a6: Pop(0); Push((bool) Stack[-7] == 0)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a8: Return(); Pop(16)

0x7a9: @ irand(Stack[-5], Stack[-7])
0x7aa: Pop(0)
0x7ab: Push((int) 1)
0x7ac: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7ad: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x7ae: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x7af: Pop(0)
0x7b0: Push(Stack[-4])
0x7b1: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b2: @ GetEyesHeight(Stack[-3])
0x7b3: Pop(0)
0x7b4: @ GetDirection(Stack[-2])
0x7b5: Pop(0)
0x7b6: Push((int) 50)
0x7b7: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x7b8: Push(CvectorIndex(Stack[-1], 1))
0x7b9: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x7ba: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7bb: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x7bc: Pop(0)
0x7bd: Return(); Pop(16)

0x7be: PushEmpty(object, object)
0x7bf: @ self(Stack[-1])
0x7c0: Pop(0)
0x7c1: Stack[-3] = Stack[-1]
0x7c2: Return(); Pop(2)

0x7c3: Stack[-1] = 0
0x7c4: PushEmpty(float, float)
0x7c5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7c6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7c7: Push((float)0.0)
0x7c8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7ca: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7cb: Return(); Pop(2)

0x7cc: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7cd: Return(); Pop(2)

0x7ce: PushEmpty(cvector, cvector)
0x7cf: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x7d0: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x7d1: Return(); Pop(2)

0x7d2: PushEmpty()
0x7d3: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7d4: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d5: Stack[-3] = Stack[-2]
0x7d6: GOTO 0x7d8

0x7d7: Stack[-3] = Stack[-1]
0x7d8: Return(); Pop(0)

0x7d9: PushEmpty()
0x7da: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7db: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dc: Stack[-4] = Stack[-2]
0x7dd: Return(); Pop(0)

0x7de: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7df: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e0: Stack[-4] = Stack[-1]
0x7e1: Return(); Pop(0)

0x7e2: Stack[-4] = Stack[-3]
0x7e3: Return(); Pop(0)

0x7e4: PushEmpty()
0x7e5: Pop(0); Push((bool) Stack[-2] == 0)
0x7e6: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e7: Stack[-3] = (bool) 0
0x7e8: Return(); Pop(0)

0x7e9: Push((int) 0)
0x7ea: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7eb: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7ec: Push((int) 8)
0x7ed: @ SendWorldWndMessage(Stack[-1])
0x7ee: Pop(1)
0x7ef: GOTO 0x7f9

0x7f0: Push((int) 0)
0x7f1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f3: Push((int) 9)
0x7f4: @ SendWorldWndMessage(Stack[-1])
0x7f5: Pop(1)
0x7f6: GOTO 0x7f9

0x7f7: Stack[-3] = (bool) 0
0x7f8: Return(); Pop(0)

0x7f9: PushEmpty(float)
0x7fa: Stack[-1] = Stack[-2]
0x7fb: Call2 0x811

0x7fc: Pop(1)
0x7fd: PushEmpty(bool, object, string, float, float, float)
0x7fe: Stack[-5] = Stack[-8]
0x7ff: Stack[-4] = "reputation"
0x800: Stack[-3] = Stack[-7]
0x801: Stack[-2] = (int) 0
0x802: Stack[-1] = (int) 1
0x803: Call2 0x5e6

0x804: Pop(6)
0x805: Stack[-3] = (bool) 1
0x806: Return(); Pop(0)

0x807: PushEmpty(object, object)
0x808: @ CreateFloatVector(Stack[-1])
0x809: Pop(0)
0x80a: @@ add(Stack[-3])
0x80b: Pop(0)
0x80c: Push((int) 15)
0x80d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x80e: Pop(1)
0x80f: Return(); Pop(2)

0x810: Stack[-1] = 0
0x811: PushEmpty(object, object)
0x812: @ CreateFloatVector(Stack[-1])
0x813: Pop(0)
0x814: @@ add(Stack[-3])
0x815: Pop(0)
0x816: Push((int) 16)
0x817: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x818: Pop(1)
0x819: Return(); Pop(2)

0x81a: Stack[-1] = 0
0x81b: PushEmpty(object, object)
0x81c: @ FindActor(Stack[-1], Stack[-4])
0x81d: Pop(0)
0x81e: Pop(0); Push((bool) Stack[-1] == 0)
0x81f: IF (Stack[-1] == 0) GOTO 0x822; Pop(1)

0x820: Stack[-5] = (bool) 0
0x821: Return(); Pop(2)

0x822: @ Trigger(Stack[-1], Stack[-3])
0x823: Pop(0)
0x824: Stack[-5] = (bool) 1
0x825: Return(); Pop(2)

0x826: Stack[-1] = 0
0x827: PushEmpty(bool, bool)
0x828: @ IsPlayerActor(Stack[-3], Stack[-1])
0x829: Pop(0)
0x82a: Push(Stack[-1])
0x82b: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x82c: Push("attack")
0x82d: @ PlayGlobalMusic(Stack[-1])
0x82e: Pop(1)
0x82f: Return(); Pop(2)

0x830: PushEmpty(object, object)
0x831: @ GetScene(Stack[-1])
0x832: Pop(0)
0x833: Push("battle")
0x834: PushEmpty(object)
0x835: Call2 0x7be

0x836: Pop(0)
0x837: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x838: Pop(2)
0x839: Return(); Pop(2)

0x83a: Stack[-1] = 0
0x83b: PushEmpty()
0x83c: PushEmpty()
0x83d: Call2 0x845

0x83e: Pop(0)
0x83f: PushEmpty(bool, string, string)
0x840: Stack[-2] = "quest_d3_01"
0x841: Stack[-1] = "patrol_talk"
0x842: Call2 0x81b

0x843: Pop(3)
0x844: Return(); Pop(0)

0x845: PushEmpty(object, object)
0x846: Push((int) 72)
0x847: Push((int) 1)
0x848: Push((int) 512154)
0x849: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x84a: Pop(3)
0x84b: PushEmpty(bool, object, int)
0x84c: Stack[-2] = Stack[-4]
0x84d: Stack[-1] = (int) 25
0x84e: Call2 0x85f

0x84f: Pop(3)
0x850: Return(); Pop(2)

0x851: Stack[-1] = 0
0x852: PushEmpty(object, object)
0x853: @ GetDiaryRoot(Stack[-1])
0x854: Pop(0)
0x855: Pop(0); Push((bool) Stack[-1] == 0)
0x856: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x857: Push("Can't retrieve diary root")
0x858: @ Trace(Stack[-1])
0x859: Pop(1)
0x85a: Stack[-3] = (bool) 0
0x85b: Return(); Pop(2)

0x85c: Stack[-3] = Stack[-1]
0x85d: Return(); Pop(2)

0x85e: Stack[-1] = 0
0x85f: PushEmpty(object, object, int, object, object, int)
0x860: PushEmpty(object)
0x861: Call2 0x852

0x862: Stack[-4] = Stack[-1]
0x863: Pop(1)
0x864: @@ Find(Stack[-7], Stack[-2])
0x865: Pop(0)
0x866: Pop(0); Push((bool) Stack[-2] == 0)
0x867: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x868: Push("Can't find diary parent with id: ")
0x869: Pop(1); Push(Stack[-1] + Stack[-8]);
0x86a: @ Trace(Stack[-1])
0x86b: Pop(1)
0x86c: Stack[-9] = (bool) 0
0x86d: Return(); Pop(6)

0x86e: @@ AddChild(Stack[-8])
0x86f: Pop(0)
0x870: Push((int) 7)
0x871: @ SendWorldWndMessage(Stack[-1])
0x872: Pop(1)
0x873: @@ GetCategory(Stack[-1])
0x874: Pop(0)
0x875: @ SetDiarySection(Stack[-1])
0x876: Pop(0)
0x877: Stack[-9] = (bool) 0
0x878: Return(); Pop(6)

0x879: Stack[-2] = 0
0x87a: Stack[-3] = 0
0x87b: PushEmpty(int, int)
0x87c: Push("branch")
0x87d: @ GetVariable(Stack[-1], Stack[-2])
0x87e: Pop(1)
0x87f: Push((int) 0)
0x880: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x881: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x882: Stack[-3] = (int) 1
0x883: Return(); Pop(2)

0x884: GOTO 0x88a

0x885: Push((int) 1)
0x886: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x887: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x888: Stack[-3] = (int) 2
0x889: Return(); Pop(2)

0x88a: Stack[-3] = (int) 3
0x88b: Return(); Pop(2)

0x88c: PushEmpty(int, int)
0x88d: Push("branch")
0x88e: @ GetVariable(Stack[-1], Stack[-2])
0x88f: Pop(1)
0x890: Stack[-3] = Stack[-1]
0x891: Return(); Pop(2)

0x892: PushEmpty()
0x893: PushEmpty(int)
0x894: Call2 0x88c

0x895: Pop(0)
0x896: Push((int) 1)
0x897: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x898: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x899: @ WorkWithCorpse(Stack[-1])
0x89a: Pop(0)
0x89b: GOTO 0x89e

0x89c: @ Barter(Stack[-1])
0x89d: Pop(0)
0x89e: Return(); Pop(0)

0x89f: PushEmpty(object, int, bool, object, int, bool)
0x8a0: @ CreateInvItem(Stack[-3])
0x8a1: Pop(0)
0x8a2: @@ SetItemName(Stack[-7])
0x8a3: Pop(0)
0x8a4: Push("Organ")
0x8a5: Push((int) 1)
0x8a6: @@ SetProperty(Stack[-2], Stack[-1])
0x8a7: Pop(2)
0x8a8: @@ GetItemID(Stack[-2])
0x8a9: Pop(0)
0x8aa: Push((int) 0)
0x8ab: Push((int) 1)
0x8ac: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x8ad: Pop(2)
0x8ae: Return(); Pop(6)

0x8af: Stack[-3] = 0
0x8b0: PushEmpty(int)
0x8b1: Call2 0x88c

0x8b2: Pop(0)
0x8b3: Push((int) 1)
0x8b4: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x8b5: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b6: Return(); Pop(0)

0x8b7: PushEmpty(string)
0x8b8: Stack[-1] = "liver"
0x8b9: Call2 0x89f

0x8ba: Pop(1)
0x8bb: PushEmpty(string)
0x8bc: Stack[-1] = "kidney"
0x8bd: Call2 0x89f

0x8be: Pop(1)
0x8bf: PushEmpty(string)
0x8c0: Stack[-1] = "heart"
0x8c1: Call2 0x89f

0x8c2: Pop(1)
0x8c3: PushEmpty(string)
0x8c4: Stack[-1] = "blood"
0x8c5: Call2 0x89f

0x8c6: Pop(1)
0x8c7: Return(); Pop(0)

0x8c8: PushEmpty(bool, bool)
0x8c9: Push("revolver_ammo")
0x8ca: Push((int) 0)
0x8cb: Push((int) 2)
0x8cc: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8cd: Pop(3)
0x8ce: Push("alpha_pills")
0x8cf: Push((int) 0)
0x8d0: Push((int) 2)
0x8d1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8d2: Pop(3)
0x8d3: PushEmpty()
0x8d4: Call2 0x8b0

0x8d5: Pop(0)
0x8d6: PushEmpty(bool, object)
0x8d7: Stack[-1] = Stack[-5]
0x8d8: Call2 0x5d5

0x8d9: Pop(1)
0x8da: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8db: PushEmpty(bool, object, float)
0x8dc: Stack[-2] = Stack[-6]
0x8dd: Stack[-1] = (float) -0.2
0x8de: Call2 0x7e4

0x8df: Pop(3)
0x8e0: PushEmpty(object)
0x8e1: Stack[-1] = Stack[-4]
0x8e2: Push(-1, 0); TaskCall(4)
0x8e3: Call2 0x4ab

0x8e4: Pop(-1, 0); TaskReturn
0x8e5: Pop(1)
0x8e6: Return(); Pop(2)

0x8e7: PushEmpty()
0x8e8: PushEmpty(object, int, float)
0x8e9: Stack[-3] = Stack[-7]
0x8ea: Stack[-2] = Stack[-6]
0x8eb: Stack[-1] = Stack[-5]
0x8ec: Call2 0x6b2

0x8ed: Pop(3)
0x8ee: Return(); Pop(0)

0x8ef: PushEmpty()
0x8f0: PushEmpty(object, int, float, cvector, cvector)
0x8f1: Stack[-5] = Stack[-11]
0x8f2: Stack[-4] = Stack[-10]
0x8f3: Stack[-3] = Stack[-9]
0x8f4: Stack[-2] = Stack[-7]
0x8f5: Stack[-1] = Stack[-6]
0x8f6: Call2 0x6f6

0x8f7: Pop(5)
0x8f8: Return(); Pop(0)

0x8f9: PushEmpty(float, float)
0x8fa: Push("health")
0x8fb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8fc: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x8fd: Push("health")
0x8fe: @ GetProperty(Stack[-1], Stack[-2])
0x8ff: Pop(1)
0x900: Push((int) 0)
0x901: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x902: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x903: @ SignalDeath(Stack[-4])
0x904: Pop(0)
0x905: Return(); Pop(2)

0x906: PushEmpty()
0x907: PushEmpty(object)
0x908: Stack[-1] = Stack[-2]
0x909: Call2 0x8c8

0x90a: Pop(1)
0x90b: Return(); Pop(0)

0x90c: Stack[-1] = (int) 515572
0x90d: Return(); Pop(0)

0x90e: Stack[-1] = (int) 504031
0x90f: Return(); Pop(0)

0x910: Stack[-1] = "ui/NPC_Citizen2.png"
0x911: Return(); Pop(0)

0x912: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x913: Return(); Pop(0)

0x914: Stack[-1] = (bool) 0
0x915: Return(); Pop(0)

