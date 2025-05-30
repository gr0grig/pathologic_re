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
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x589
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x428 Vars = (int)
		EVENT_1 Op = 0x443 Vars = (object)
		EVENT_2 Op = 0x452 Vars = (object)
		EVENT_10 Op = 0x4d8 Vars = (object)
		EVENT_41 Op = 0x4e3 Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x504 Vars = (object)
		EVENT_22 Op = 0x583 Vars = (object, int, float, float)
		EVENT_16 Op = 0x585 Vars = (object, string)
		EVENT_41 Op = 0x587 Vars = (object)
	GTASK_5 Vars = (cvector, cvector, bool) Params = 0
		EVENT_0 Op = 0x59a Vars = (object)
		EVENT_17 Op = 0x5a7 Vars = (object)

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
0x5: Call2 0x75b

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
0x41: Call2 0x79f

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
0x54: Push((int) 509102)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 509103)
0x5a: Push((int) 9989)
0x5b: Push((int) 9982)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 509104)
0x5f: Push((int) 9985)
0x60: Push((int) 9983)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x914

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x7b0

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
0x86: Call2 0x914

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
0x96: Call2 0x7c0

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x7da

0x9f: Pop(0)
0xa0: Push((int) 9981)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 509102)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 509103)
0xad: Push((int) 9989)
0xae: Push((int) 9982)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 509104)
0xb2: Push((int) 9985)
0xb3: Push((int) 9983)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 9985)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 509106)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 509107)
0xc4: Push((int) 9984)
0xc5: Push((int) 9986)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 9984)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x84

0xcf: Pop(1)
0xd0: Push((int) 509105)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 509108)
0xd6: Push((int) 9988)
0xd7: Push((int) 9987)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: Push((int) 9988)
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral"
0xe0: Call2 0x84

0xe1: Pop(1)
0xe2: Push((int) 509109)
0xe3: @@ SetMessage(Stack[-1])
0xe4: Pop(1)
0xe5: @@ ClearReplies()
0xe6: Pop(0)
0xe7: Push((int) 509112)
0xe8: Push((int) 9992)
0xe9: Push((int) 9991)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: Push((int) 9989)
0xee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf0: PushEmpty(string)
0xf1: Stack[-1] = "Neutral"
0xf2: Call2 0x84

0xf3: Pop(1)
0xf4: Push((int) 509110)
0xf5: @@ SetMessage(Stack[-1])
0xf6: Pop(1)
0xf7: @@ ClearReplies()
0xf8: Pop(0)
0xf9: Push((int) 509111)
0xfa: Push((int) 9992)
0xfb: Push((int) 9990)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Return(); Pop(0)

0xff: Push((int) 9992)
0x100: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x102: PushEmpty(string)
0x103: Stack[-1] = "Neutral"
0x104: Call2 0x84

0x105: Pop(1)
0x106: Push((int) 509113)
0x107: @@ SetMessage(Stack[-1])
0x108: Pop(1)
0x109: @@ ClearReplies()
0x10a: Pop(0)
0x10b: Push((int) 509114)
0x10c: Push((int) 9994)
0x10d: Push((int) 9993)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: Push((int) 509116)
0x111: Push((int) -1)
0x112: Push((int) 9995)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Return(); Pop(0)

0x116: Push((int) 9994)
0x117: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral"
0x11b: Call2 0x84

0x11c: Pop(1)
0x11d: Push((int) 509115)
0x11e: @@ SetMessage(Stack[-1])
0x11f: Pop(1)
0x120: @@ ClearReplies()
0x121: Pop(0)
0x122: Push((int) 509117)
0x123: Push((int) -1)
0x124: Push((int) 9997)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Push((int) 509118)
0x128: Push((int) 9999)
0x129: Push((int) 9998)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Return(); Pop(0)

0x12d: Push((int) 9999)
0x12e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x130: PushEmpty(string)
0x131: Stack[-1] = "Neutral"
0x132: Call2 0x84

0x133: Pop(1)
0x134: Push((int) 509119)
0x135: @@ SetMessage(Stack[-1])
0x136: Pop(1)
0x137: @@ ClearReplies()
0x138: Pop(0)
0x139: Push((int) 509120)
0x13a: Push((int) -1)
0x13b: Push((int) 10000)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Return(); Pop(0)

0x13f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x140: PushEmpty(bool)
0x141: Call2 0x914

0x142: Pop(0)
0x143: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x144: @ lshStopAnimation()
0x145: Pop(0)
0x146: GOTO 0x149

0x147: @ StopAnimation()
0x148: Pop(0)
0x149: Return(); Pop(0)

0x14a: GOTO 0x9b

0x14b: Return(); Pop(0)

0x14c: PushEmpty(object, object)
0x14d: Push("player")
0x14e: @ FindActor(Stack[-2], Stack[-1])
0x14f: Pop(1)
0x150: Pop(0); Push((bool) Stack[-1] == 0)
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: Return(); Pop(2)

0x153: PushEmpty(object, bool, float)
0x154: Stack[-3] = Stack[-4]
0x155: Stack[-2] = (bool) 1
0x156: Stack[-1] = (float) 180.0
0x157: Call2 0x161

0x158: Pop(3)
0x159: Return(); Pop(2)

0x15a: Stack[-1] = 0
0x15b: PushEmpty()
0x15c: Stack[-3] = (float) 0.3
0x15d: Return(); Pop(0)

0x15e: PushEmpty()
0x15f: Stack[-3] = (int) 0
0x160: Return(); Pop(0)

0x161: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x162: PushEmpty()
0x163: Call2 0x246

0x164: Pop(0)
0x165: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x166: Push("@GetAttackDistance")
0x167: Push((int) 1)
0x168: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: @@ GetAttackDistance(Stack[-11])
0x16b: Pop(0)
0x16c: Push((int) 50)
0x16d: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x16e: GOTO 0x170

0x16f: Stack[-11] = Stack[-23]
0x170: Push((int) 150)
0x171: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Stack[-11] = (int) 150
0x174: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x175: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x176: @ IsPlayerActor(Stack[-0], Stack[-8])
0x177: Pop(0)
0x178: Push(Stack[-8])
0x179: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17a: Push("attack")
0x17b: @ PlayGlobalMusic(Stack[-1])
0x17c: Pop(1)
0x17d: PushEmpty(object)
0x17e: Call2 0x80a

0x17f: Pop(0)
0x180: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x181: Pop(1)
0x182: Push(Stack[-24])
0x183: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x184: Stack[-7] = (bool) 0
0x185: GOTO 0x187

0x186: Stack[-7] = (bool) 1
0x187: Push((float)400.0)
0x188: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x189: PushEmpty(bool)
0x18a: Stack[-1] = (bool) 0
0x18b: PushEmpty(bool, object)
0x18c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18d: Call2 0x6ba

0x18e: Pop(1)
0x18f: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x190: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: Stack[-1] = (bool) 1
0x193: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x194: PushEmpty()
0x195: Call2 0x3e3

0x196: Pop(0)
0x197: @@ GetPFPosition(Stack[-10])
0x198: Pop(0)
0x199: @ GetPFPosition(Stack[-9])
0x19a: Pop(0)
0x19b: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x19c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x19d: Pop(0); Push(Stack[-6] * Stack[-6]);
0x19e: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a0: PushEmpty(bool, object, float, float, bool, bool)
0x1a1: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1a2: Stack[-4] = Stack[-17]
0x1a3: Stack[-3] = (float) 10000.0
0x1a4: Stack[-2] = (bool) 1
0x1a5: Stack[-1] = (bool) 0
0x1a6: Push(-6, 3); TaskCall(3)
0x1a7: Call2 0x3f7

0x1a8: Pop(-6, 3); TaskReturn
0x1a9: Pop(5)
0x1aa: Pop(1); Push((bool) Stack[-1] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ac: GOTO 0x235

0x1ad: Stack[-7] = (bool) 0
0x1ae: GOTO 0x234

0x1af: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1b0: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x1b2: @@ GetPFPosition(Stack[-3])
0x1b3: Pop(0)
0x1b4: @ CanReachByPF(Stack[-2], Stack[-3])
0x1b5: Pop(0)
0x1b6: Pop(0); Push((bool) Stack[-2] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b8: PushEmpty(bool, object, float, float, bool, bool)
0x1b9: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1ba: Stack[-4] = Stack[-17]
0x1bb: Stack[-3] = (float) 10000.0
0x1bc: Stack[-2] = (bool) 1
0x1bd: Stack[-1] = (bool) 0
0x1be: Push(-6, 3); TaskCall(3)
0x1bf: Call2 0x3f7

0x1c0: Pop(-6, 3); TaskReturn
0x1c1: Pop(5)
0x1c2: Pop(1); Push((bool) Stack[-1] == 0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: GOTO 0x235

0x1c5: Stack[-7] = (bool) 0
0x1c6: GOTO 0x189

0x1c7: Pop(0); Push((bool) Stack[-7] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1c9: PushEmpty(object)
0x1ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cb: Call2 0x750

0x1cc: Pop(1)
0x1cd: Push("all")
0x1ce: Push("attack_on")
0x1cf: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d0: Pop(2)
0x1d1: @ WaitForAnimEnd()
0x1d2: Pop(0)
0x1d3: PushEmpty()
0x1d4: Call2 0x3e3

0x1d5: Pop(0)
0x1d6: @ StopAsync()
0x1d7: Pop(0)
0x1d8: Stack[-7] = (bool) 1
0x1d9: PushEmpty(bool, object)
0x1da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1db: Call2 0x6ba

0x1dc: Pop(1)
0x1dd: Pop(1); Push((bool) Stack[-1] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: GOTO 0x235

0x1e0: @ rand(Stack[-1])
0x1e1: Pop(0)
0x1e2: PushEmpty(bool)
0x1e3: Stack[-1] = (bool) 1
0x1e4: Push((float)0.25)
0x1e5: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e7: PushEmpty(bool)
0x1e8: Call2 0x3b8

0x1e9: Pop(0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Stack[-1] = (bool) 0
0x1ec: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1ed: @ Face(Stack[-0])
0x1ee: Pop(0)
0x1ef: PushEmpty()
0x1f0: Call2 0x3ea

0x1f1: Pop(0)
0x1f2: Push("all")
0x1f3: Push("attack_stay")
0x1f4: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f5: Pop(2)
0x1f6: PushEmpty(bool, float)
0x1f7: Stack[-1] = Stack[-25]
0x1f8: Call2 0x334

0x1f9: Pop(2)
0x1fa: @ StopAsync()
0x1fb: Pop(0)
0x1fc: GOTO 0x22b

0x1fd: @ Face(Stack[-0])
0x1fe: Pop(0)
0x1ff: Push("all")
0x200: Push("fjump")
0x201: @ PlayAnimation(Stack[-2], Stack[-1])
0x202: Pop(2)
0x203: @ WaitForAnimEnd()
0x204: Pop(0)
0x205: PushEmpty()
0x206: Call2 0x3e3

0x207: Pop(0)
0x208: Push(CVector(0.0, 0.0, 0.0))
0x209: @ SetSpeed(Stack[-1])
0x20a: Pop(1)
0x20b: @ Stop()
0x20c: Pop(0)
0x20d: @ StopAsync()
0x20e: Pop(0)
0x20f: PushEmpty(bool)
0x210: Call2 0x3b8

0x211: Pop(0)
0x212: Pop(1); Push((bool) Stack[-1] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x216: Call2 0x6ba

0x217: Pop(1)
0x218: Pop(1); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: GOTO 0x235

0x21b: @@ GetPFPosition(Stack[-10])
0x21c: Pop(0)
0x21d: @ GetPFPosition(Stack[-9])
0x21e: Pop(0)
0x21f: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x220: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x221: Pop(0); Push(Stack[-23] * Stack[-23]);
0x222: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x224: PushEmpty(bool, float)
0x225: Stack[-1] = Stack[-25]
0x226: Call2 0x290

0x227: Pop(1)
0x228: Pop(1); Push((bool) Stack[-1] == 0)
0x229: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x22a: GOTO 0x235

0x22b: GOTO 0x234

0x22c: PushEmpty(bool, float)
0x22d: Stack[-1] = Stack[-25]
0x22e: Call2 0x290

0x22f: Pop(1)
0x230: Pop(1); Push((bool) Stack[-1] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: GOTO 0x235

0x233: Stack[-7] = (bool) 1
0x234: GOTO 0x189

0x235: @ WaitForAnimEnd()
0x236: Pop(0)
0x237: Push( Stack[3 + Tasks[-1].StackPointer] )
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: Return(); Pop(22)

0x23a: Push("all")
0x23b: Push("attack_off")
0x23c: @ PlayAnimation(Stack[-2], Stack[-1])
0x23d: Pop(2)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: Push(Stack[-8])
0x241: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x242: Push((float)2.0)
0x243: @ Sleep(Stack[-1])
0x244: Pop(1)
0x245: Return(); Pop(22)

0x246: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x247: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x248: Push("all")
0x249: Push("attack_begin")
0x24a: Push((int) 1)
0x24b: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x24c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x24d: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x24e: Pop(2)
0x24f: Pop(0); Push((bool) Stack[-3] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: GOTO 0x255

0x252: Push((int) 1)
0x253: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x254: GOTO 0x248

0x255: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x256: Push("attack")
0x257: Push((int) 1)
0x258: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x259: Pop(2); Push(Stack[-2] + Stack[-1]);
0x25a: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x25b: Pop(1)
0x25c: Pop(0); Push((bool) Stack[-2] == 0)
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: GOTO 0x262

0x25f: Push((int) 1)
0x260: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x261: GOTO 0x256

0x262: Push("all")
0x263: Push("bjump")
0x264: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(2)
0x266: Push(CvectorIndex(Stack[-1], 2))
0x267: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x268: Return(); Pop(6)

0x269: PushEmpty(object, float, float, object, float, float)
0x26a: Push((float)0.9)
0x26b: Pop(1); Push(Stack[-9] * Stack[-1]);
0x26c: @ GetVictim(Stack[-1], Stack[-4])
0x26d: Pop(1)
0x26e: @ ReportAttack(Stack[-0])
0x26f: Pop(0)
0x270: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x271: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x272: PushEmpty(float, object, int)
0x273: Stack[-2] = Stack[-6]
0x274: Stack[-1] = Stack[-10]
0x275: Call2 0x15b

0x276: Stack[-5] = Stack[-3]
0x277: Pop(3)
0x278: PushEmpty(float, object, float, int)
0x279: Stack[-3] = Stack[-7]
0x27a: Stack[-2] = Stack[-6]
0x27b: PushEmpty(int, object, int)
0x27c: Stack[-2] = Stack[-10]
0x27d: Stack[-1] = Stack[-14]
0x27e: Call2 0x15e

0x27f: Stack[-4] = Stack[-3]
0x280: Pop(3)
0x281: Call2 0x648

0x282: Stack[-5] = Stack[-4]
0x283: Pop(4)
0x284: PushEmpty(int)
0x285: Call2 0x3e8

0x286: Pop(0)
0x287: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x288: Pop(1)
0x289: PushEmpty(object, float)
0x28a: Stack[-2] = Stack[-5]
0x28b: Stack[-1] = Stack[-3]
0x28c: Call2 0x3ef

0x28d: Pop(2)
0x28e: Return(); Pop(6)

0x28f: Stack[-3] = 0
0x290: PushEmpty(int, bool, int, string, int, bool, int, string)
0x291: PushEmpty()
0x292: Call2 0x3e3

0x293: Pop(0)
0x294: @ irand(Stack[-4], Stack[-1])
0x295: Pop(0)
0x296: Push((int) 1)
0x297: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x298: @ Face(Stack[-0])
0x299: Pop(0)
0x29a: Push((bool) 1)
0x29b: @ SetAttackState(Stack[-1])
0x29c: Pop(1)
0x29d: PushEmpty()
0x29e: Call2 0x870

0x29f: Pop(0)
0x2a0: Push("all")
0x2a1: Push("attack_begin")
0x2a2: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2a3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a4: Pop(2)
0x2a5: @ WaitForAnimEnd()
0x2a6: Pop(0)
0x2a7: PushEmpty()
0x2a8: Call2 0x3c3

0x2a9: Pop(0)
0x2aa: PushEmpty(bool, object)
0x2ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ac: Call2 0x6ba

0x2ad: Pop(1)
0x2ae: Pop(1); Push((bool) Stack[-1] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b0: @ StopAsync()
0x2b1: Pop(0)
0x2b2: Stack[-10] = (bool) 0
0x2b3: Return(); Pop(8)

0x2b4: PushEmpty(float, int)
0x2b5: Stack[-2] = Stack[-11]
0x2b6: Stack[-1] = Stack[-6]
0x2b7: Call2 0x269

0x2b8: Pop(2)
0x2b9: Push("all")
0x2ba: Push("attack_middle")
0x2bb: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2bc: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x2bd: Pop(2)
0x2be: Push(Stack[-3])
0x2bf: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2c0: PushEmpty()
0x2c1: Call2 0x870

0x2c2: Pop(0)
0x2c3: Push("all")
0x2c4: Push("attack_middle")
0x2c5: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c7: Pop(2)
0x2c8: @ WaitForAnimEnd()
0x2c9: Pop(0)
0x2ca: PushEmpty()
0x2cb: Call2 0x3e3

0x2cc: Pop(0)
0x2cd: PushEmpty(bool, object)
0x2ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cf: Call2 0x6ba

0x2d0: Pop(1)
0x2d1: Pop(1); Push((bool) Stack[-1] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d3: @ StopAsync()
0x2d4: Pop(0)
0x2d5: Stack[-10] = (bool) 0
0x2d6: Return(); Pop(8)

0x2d7: PushEmpty(float, int)
0x2d8: Stack[-2] = Stack[-11]
0x2d9: Stack[-1] = Stack[-6]
0x2da: Call2 0x269

0x2db: Pop(2)
0x2dc: Stack[-2] = (int) 1
0x2dd: Push("attack_middle")
0x2de: Pop(1); Push(Stack[-1] + Stack[-5]);
0x2df: Push("_")
0x2e0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e1: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x2e2: Push("all")
0x2e3: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x2e4: Pop(1)
0x2e5: Pop(0); Push((bool) Stack[-3] == 0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e7: GOTO 0x305

0x2e8: PushEmpty()
0x2e9: Call2 0x870

0x2ea: Pop(0)
0x2eb: Push("all")
0x2ec: @ PlayAnimation(Stack[-1], Stack[-2])
0x2ed: Pop(1)
0x2ee: @ WaitForAnimEnd()
0x2ef: Pop(0)
0x2f0: PushEmpty()
0x2f1: Call2 0x3e3

0x2f2: Pop(0)
0x2f3: PushEmpty(bool, object)
0x2f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f5: Call2 0x6ba

0x2f6: Pop(1)
0x2f7: Pop(1); Push((bool) Stack[-1] == 0)
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f9: @ StopAsync()
0x2fa: Pop(0)
0x2fb: Stack[-10] = (bool) 0
0x2fc: Return(); Pop(8)

0x2fd: PushEmpty(float, int)
0x2fe: Stack[-2] = Stack[-11]
0x2ff: Stack[-1] = Stack[-6]
0x300: Call2 0x269

0x301: Pop(2)
0x302: Push((int) 1)
0x303: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x304: GOTO 0x2dd

0x305: Push((bool) 0)
0x306: @ SetAttackState(Stack[-1])
0x307: Pop(1)
0x308: Push("all")
0x309: Push("attack_end")
0x30a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x30b: @ PlayAnimation(Stack[-2], Stack[-1])
0x30c: Pop(2)
0x30d: PushEmpty(bool)
0x30e: Call2 0x3f1

0x30f: Pop(0)
0x310: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x311: PushEmpty(bool, float)
0x312: Stack[-1] = (float) 0.75
0x313: Call2 0x319

0x314: Pop(2)
0x315: @ StopAsync()
0x316: Pop(0)
0x317: Stack[-10] = (bool) 1
0x318: Return(); Pop(8)

0x319: PushEmpty(float, bool, float, bool)
0x31a: @ rand(Stack[-2])
0x31b: Pop(0)
0x31c: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x31d: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x31e: @ IsAnimationPlaying(Stack[-1])
0x31f: Pop(0)
0x320: Pop(0); Push((bool) Stack[-1] == 0)
0x321: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x322: GOTO 0x32c

0x323: PushEmpty(bool)
0x324: Call2 0x37b

0x325: Pop(0)
0x326: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x327: Stack[-6] = (bool) 1
0x328: Return(); Pop(4)

0x329: @ sync()
0x32a: Pop(0)
0x32b: GOTO 0x31e

0x32c: GOTO 0x332

0x32d: @ WaitForAnimEnd()
0x32e: Pop(0)
0x32f: PushEmpty()
0x330: Call2 0x3e3

0x331: Pop(0)
0x332: Stack[-6] = (bool) 0
0x333: Return(); Pop(4)

0x334: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x335: @ IsAnimationPlaying(Stack[-5])
0x336: Pop(0)
0x337: Pop(0); Push((bool) Stack[-5] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x35a

0x33a: PushEmpty(bool)
0x33b: Call2 0x37b

0x33c: Pop(0)
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: Stack[-12] = (bool) 1
0x33f: Return(); Pop(10)

0x340: PushEmpty(bool, object)
0x341: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x342: Call2 0x6ba

0x343: Pop(1)
0x344: Pop(1); Push((bool) Stack[-1] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x346: Stack[-12] = (bool) 0
0x347: Return(); Pop(10)

0x348: @@ GetPFPosition(Stack[-4])
0x349: Pop(0)
0x34a: @ GetPFPosition(Stack[-3])
0x34b: Pop(0)
0x34c: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x34d: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x34e: Pop(0); Push(Stack[-11] * Stack[-11]);
0x34f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x351: PushEmpty(bool, float)
0x352: Stack[-1] = Stack[-13]
0x353: Call2 0x290

0x354: Pop(2)
0x355: Stack[-12] = (bool) 1
0x356: Return(); Pop(10)

0x357: @ sync()
0x358: Pop(0)
0x359: GOTO 0x335

0x35a: PushEmpty()
0x35b: Call2 0x3e3

0x35c: Pop(0)
0x35d: Stack[-12] = (bool) 0
0x35e: Return(); Pop(10)

0x35f: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x360: PushEmpty(bool, object)
0x361: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x362: Call2 0x6ba

0x363: Pop(1)
0x364: Pop(1); Push((bool) Stack[-1] == 0)
0x365: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x366: Stack[-11] = (bool) 0
0x367: Return(); Pop(10)

0x368: PushEmpty(bool)
0x369: Call2 0x3b8

0x36a: Pop(0)
0x36b: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x36c: @@ GetPFPosition(Stack[-5])
0x36d: Pop(0)
0x36e: @ GetPFPosition(Stack[-4])
0x36f: Pop(0)
0x370: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x371: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x372: @@ GetAttackDistance(Stack[-1])
0x373: Pop(0)
0x374: Push((int) 50)
0x375: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x376: Pop(0); Push(Stack[-1] * Stack[-1]);
0x377: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x378: Return(); Pop(10)

0x379: Stack[-11] = (bool) 0
0x37a: Return(); Pop(10)

0x37b: PushEmpty(bool)
0x37c: Stack[-1] = (bool) 0
0x37d: PushEmpty(bool)
0x37e: Call2 0x35f

0x37f: Pop(0)
0x380: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x381: PushEmpty(bool)
0x382: Call2 0x38b

0x383: Pop(0)
0x384: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x385: Stack[-1] = (bool) 1
0x386: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x387: Stack[-1] = (bool) 1
0x388: Return(); Pop(0)

0x389: Stack[-1] = (bool) 0
0x38a: Return(); Pop(0)

0x38b: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x38c: @ GetScene(Stack[-5])
0x38d: Pop(0)
0x38e: Stack[-4] = (bool) 0
0x38f: PushEmpty(cvector, object)
0x390: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x391: Call2 0x61a

0x392: Pop(1)
0x393: Pop(1); Push(( -Stack[-1])
0x394: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x395: Pop(1)
0x396: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: GOTO 0x3b5

0x399: @ Face(Stack[-0])
0x39a: Pop(0)
0x39b: Push("all")
0x39c: Push("bjump")
0x39d: @ PlayAnimation(Stack[-2], Stack[-1])
0x39e: Pop(2)
0x39f: @@ GetPFPosition(Stack[-2])
0x3a0: Pop(0)
0x3a1: @ GetPFPosition(Stack[-1])
0x3a2: Pop(0)
0x3a3: @ WaitForAnimEnd()
0x3a4: Pop(0)
0x3a5: PushEmpty()
0x3a6: Call2 0x3e3

0x3a7: Pop(0)
0x3a8: @ StopAsync()
0x3a9: Pop(0)
0x3aa: Push(CVector(0.0, 0.0, 0.0))
0x3ab: @ SetSpeed(Stack[-1])
0x3ac: Pop(1)
0x3ad: Stack[-4] = (bool) 1
0x3ae: PushEmpty(bool)
0x3af: Call2 0x35f

0x3b0: Pop(0)
0x3b1: Pop(1); Push((bool) Stack[-1] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: GOTO 0x3b5

0x3b4: GOTO 0x38f

0x3b5: Stack[-11] = Stack[-4]
0x3b6: Return(); Pop(10)

0x3b7: Stack[-5] = 0
0x3b8: PushEmpty(bool, bool)
0x3b9: Push("IsAttacking")
0x3ba: Push((int) 1)
0x3bb: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3bd: @@ IsAttacking(Stack[-1])
0x3be: Pop(0)
0x3bf: Stack[-3] = Stack[-1]
0x3c0: Return(); Pop(2)

0x3c1: Stack[-3] = (bool) 0
0x3c2: Return(); Pop(2)

0x3c3: PushEmpty(float, int, float, int)
0x3c4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c6: Return(); Pop(4)

0x3c7: Push( Stack[5 + Tasks[-1].StackPointer] )
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3c9: Push((int) -1)
0x3ca: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3cb: Push((int) 0)
0x3cc: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3ce: Return(); Pop(4)

0x3cf: @ rand(Stack[-2])
0x3d0: Pop(0)
0x3d1: PushEmpty(float)
0x3d2: Call2 0x3f5

0x3d3: Pop(0)
0x3d4: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3d6: @ irand(Stack[-1], Stack[-2])
0x3d7: Pop(0)
0x3d8: Push((int) 1)
0x3d9: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3da: Push("attack")
0x3db: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3dc: @ Speak(Stack[-1])
0x3dd: Pop(1)
0x3de: PushEmpty(int)
0x3df: Call2 0x3f3

0x3e0: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x3e1: Pop(1)
0x3e2: Return(); Pop(4)

0x3e3: PushEmpty(object)
0x3e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e5: Call2 0x867

0x3e6: Pop(1)
0x3e7: Return(); Pop(0)

0x3e8: Stack[-1] = (int) 0
0x3e9: Return(); Pop(0)

0x3ea: PushEmpty(string)
0x3eb: Stack[-1] = "attack_stay"
0x3ec: Call2 0x7e1

0x3ed: Pop(1)
0x3ee: Return(); Pop(0)

0x3ef: PushEmpty()
0x3f0: Return(); Pop(0)

0x3f1: Stack[-1] = (bool) 1
0x3f2: Return(); Pop(0)

0x3f3: Stack[-1] = (int) 1
0x3f4: Return(); Pop(0)

0x3f5: Stack[-1] = (float) 0.5
0x3f6: Return(); Pop(0)

0x3f7: PushEmpty(bool, bool, bool, bool)
0x3f8: PushEmpty(object)
0x3f9: Stack[-1] = Stack[-10]
0x3fa: Call2 0x867

0x3fb: Pop(1)
0x3fc: Push((int) 1)
0x3fd: Push((int) 5)
0x3fe: @ SetTimer(Stack[-2], Stack[-1])
0x3ff: Pop(2)
0x400: @ CanSee(Stack[-2], Stack[-9])
0x401: Pop(0)
0x402: Push(Stack[-2])
0x403: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x404: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x405: PushEmpty(object)
0x406: Stack[-1] = Stack[-10]
0x407: Call2 0x7cf

0x408: Pop(1)
0x409: GOTO 0x40b

0x40a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x40b: PushEmpty(bool, object)
0x40c: Stack[-1] = Stack[-11]
0x40d: Call2 0x621

0x40e: Pop(1)
0x40f: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x410: PushEmpty(object)
0x411: Call2 0x80a

0x412: Pop(0)
0x413: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x414: Pop(1)
0x415: PushEmpty(bool, object, float, float, bool, bool)
0x416: Stack[-5] = Stack[-15]
0x417: Stack[-4] = Stack[-14]
0x418: Stack[-3] = Stack[-13]
0x419: Stack[-2] = Stack[-12]
0x41a: Stack[-1] = Stack[-11]
0x41b: Call2 0x460

0x41c: Stack[-7] = Stack[-6]
0x41d: Pop(6)
0x41e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x41f: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x420: Push("head")
0x421: @ UnlookAsync(Stack[-1])
0x422: Pop(1)
0x423: Push((int) 1)
0x424: @ KillTimer(Stack[-1])
0x425: Pop(1)
0x426: Stack[-10] = Stack[-1]
0x427: Return(); Pop(4)

0x428: PushEmpty()
0x429: Push((int) 1)
0x42a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42c: PushEmpty(object)
0x42d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42e: Call2 0x867

0x42f: Pop(1)
0x430: GOTO 0x435

0x431: PushEmpty(int)
0x432: Stack[-1] = Stack[-2]
0x433: Call2 0x4c6

0x434: Pop(1)
0x435: Return(); Pop(0)

0x436: Push((int) 1)
0x437: @ KillTimer(Stack[-1])
0x438: Pop(1)
0x439: Push( Stack[2 + Tasks[-1].StackPointer] )
0x43a: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x43c: Push("head")
0x43d: @ UnlookAsync(Stack[-1])
0x43e: Pop(1)
0x43f: PushEmpty()
0x440: Call2 0x4dc

0x441: Pop(0)
0x442: Return(); Pop(0)

0x443: PushEmpty()
0x444: PushEmpty(bool)
0x445: Stack[-1] = (bool) 0
0x446: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x447: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x448: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x44a: Stack[-1] = (bool) 1
0x44b: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x44d: PushEmpty(object)
0x44e: Stack[-1] = Stack[-2]
0x44f: Call2 0x7cf

0x450: Pop(1)
0x451: Return(); Pop(0)

0x452: PushEmpty()
0x453: PushEmpty(bool)
0x454: Stack[-1] = (bool) 0
0x455: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x456: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x457: Push( Stack[2 + Tasks[-1].StackPointer] )
0x458: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x459: Stack[-1] = (bool) 1
0x45a: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x45c: Push("head")
0x45d: @ UnlookAsync(Stack[-1])
0x45e: Pop(1)
0x45f: Return(); Pop(0)

0x460: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x461: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x462: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x463: Stack[-7] = Stack[-17]
0x464: PushEmpty(bool, object)
0x465: Stack[-1] = Stack[-23]
0x466: Call2 0x4ec

0x467: Pop(1)
0x468: Pop(1); Push((bool) Stack[-1] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46a: Stack[-22] = (bool) 0
0x46b: Return(); Pop(16)

0x46c: @@ GetPosition(Stack[-5])
0x46d: Pop(0)
0x46e: @ GetPosition(Stack[-4])
0x46f: Pop(0)
0x470: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x471: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x472: PushEmpty(bool)
0x473: Stack[-1] = (bool) 0
0x474: Push((int) 0)
0x475: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x477: Pop(0); Push(Stack[-20] * Stack[-20]);
0x478: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x47a: Stack[-1] = (bool) 1
0x47b: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47c: @ Stop()
0x47d: Pop(0)
0x47e: Stack[-22] = (bool) 0
0x47f: Return(); Pop(16)

0x480: Pop(0); Push(Stack[-20] * Stack[-20]);
0x481: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x482: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x483: @@ GetPFPosition(Stack[-5])
0x484: Pop(0)
0x485: @ FindPathTo(Stack[-1], Stack[-5])
0x486: Pop(0)
0x487: Pop(0); Push(( Stack[-1] != 0 )
0x488: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x489: Stack[-6] = Stack[-1]
0x48a: Stack[-1] = 0
0x48b: Pop(0); Push(( Stack[-6] != 0 )
0x48c: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x48d: Push(Stack[-7])
0x48e: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x48f: Stack[-7] = (bool) 0
0x490: @ RotatePath(Stack[-6], Stack[-8])
0x491: Pop(0)
0x492: Pop(0); Push((bool) Stack[-8] == 0)
0x493: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x494: GOTO 0x4c4

0x495: Push((int) 0)
0x496: Push((float)0.3)
0x497: @ SetTimer(Stack[-2], Stack[-1])
0x498: Pop(2)
0x499: PushEmpty(string)
0x49a: Call2 0x4f3

0x49b: Pop(0)
0x49c: PushEmpty(string)
0x49d: Call2 0x4f5

0x49e: Pop(0)
0x49f: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x4a0: Pop(2)
0x4a1: Pop(0); Push((bool) Stack[-8] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a3: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a5: Stack[-6] = 0
0x4a6: GOTO 0x4c4

0x4a7: GOTO 0x4a9

0x4a8: GOTO 0x4c3

0x4a9: GOTO 0x4ab

0x4aa: Stack[-6] = 0
0x4ab: GOTO 0x4bc

0x4ac: Push((int) 0)
0x4ad: @ KillTimer(Stack[-1])
0x4ae: Pop(1)
0x4af: Push((float)0.5)
0x4b0: @ Sleep(Stack[-1], Stack[-9])
0x4b1: Pop(1)
0x4b2: Pop(0); Push((bool) Stack[-8] == 0)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b4: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b6: Stack[-6] = 0
0x4b7: GOTO 0x4c4

0x4b8: Push((int) 0)
0x4b9: Push((float)0.3)
0x4ba: @ SetTimer(Stack[-2], Stack[-1])
0x4bb: Pop(2)
0x4bc: Stack[-1] = 0
0x4bd: GOTO 0x4c2

0x4be: Push((int) 0)
0x4bf: @ KillTimer(Stack[-1])
0x4c0: Pop(1)
0x4c1: GOTO 0x4c4

0x4c2: Stack[-6] = 0
0x4c3: GOTO 0x464

0x4c4: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4c5: Return(); Pop(16)

0x4c6: PushEmpty()
0x4c7: Push((int) 0)
0x4c8: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4ca: Return(); Pop(0)

0x4cb: PushEmpty(bool, object)
0x4cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4cd: Call2 0x4ec

0x4ce: Pop(1)
0x4cf: Pop(1); Push((bool) Stack[-1] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4d2: Push((int) 0)
0x4d3: @ KillTimer(Stack[-1])
0x4d4: Pop(1)
0x4d5: @ Stop()
0x4d6: Pop(0)
0x4d7: Return(); Pop(0)

0x4d8: PushEmpty()
0x4d9: @ RequestClearPath(Stack[-1])
0x4da: Pop(0)
0x4db: Return(); Pop(0)

0x4dc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4dd: Push((int) 0)
0x4de: @ KillTimer(Stack[-1])
0x4df: Pop(1)
0x4e0: @ Stop()
0x4e1: Pop(0)
0x4e2: Return(); Pop(0)

0x4e3: PushEmpty()
0x4e4: PushEmpty()
0x4e5: Call2 0x436

0x4e6: Pop(0)
0x4e7: PushEmpty(object)
0x4e8: Stack[-1] = Stack[-2]
0x4e9: Call2 0x906

0x4ea: Pop(1)
0x4eb: Return(); Pop(0)

0x4ec: PushEmpty()
0x4ed: PushEmpty(bool, object)
0x4ee: Stack[-1] = Stack[-3]
0x4ef: Call2 0x6ba

0x4f0: Stack[-4] = Stack[-2]
0x4f1: Pop(2)
0x4f2: Return(); Pop(0)

0x4f3: Stack[-1] = "walk"
0x4f4: Return(); Pop(0)

0x4f5: Stack[-1] = "run"
0x4f6: Return(); Pop(0)

0x4f7: PushEmpty()
0x4f8: PushEmpty(object)
0x4f9: Stack[-1] = Stack[-2]
0x4fa: Call2 0x50e

0x4fb: Pop(1)
0x4fc: Push((int) 50)
0x4fd: Push((int) 40)
0x4fe: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x4ff: Pop(2)
0x500: @ Hold()
0x501: Pop(0)
0x502: GOTO 0x500

0x503: Return(); Pop(0)

0x504: PushEmpty(bool, bool)
0x505: @ IsOverrideActive(Stack[-1])
0x506: Pop(0)
0x507: Pop(0); Push((bool) Stack[-1] == 0)
0x508: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x509: PushEmpty(object)
0x50a: Stack[-1] = Stack[-4]
0x50b: Call2 0x892

0x50c: Pop(1)
0x50d: Return(); Pop(2)

0x50e: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x50f: Pop(0); Push((bool) Stack[-21] == 0)
0x510: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x511: PushEmpty(string)
0x512: Stack[-1] = "fdie"
0x513: Call2 0x569

0x514: Pop(1)
0x515: GOTO 0x568

0x516: @@ GetPosition(Stack[-10])
0x517: Pop(0)
0x518: @ GetPosition(Stack[-9])
0x519: Pop(0)
0x51a: @ GetDirection(Stack[-8])
0x51b: Pop(0)
0x51c: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x51d: Push(CvectorIndex(Stack[-7], 0))
0x51e: Push(CvectorIndex(Stack[-9], 0))
0x51f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x520: Push(CvectorIndex(Stack[-8], 2))
0x521: Push(CvectorIndex(Stack[-10], 2))
0x522: Pop(2); Push(Stack[-2] * Stack[-1]);
0x523: Pop(2); Push(Stack[-2] + Stack[-1]);
0x524: Push((int) 0)
0x525: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x526: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x527: Stack[-6] = "fdie"
0x528: GOTO 0x52a

0x529: Stack[-6] = "bdie"
0x52a: @ RemoveRTEnvelope()
0x52b: Pop(0)
0x52c: @ SetDeathState()
0x52d: Pop(0)
0x52e: @ Stop()
0x52f: Pop(0)
0x530: @ StopAsync()
0x531: Pop(0)
0x532: Stack[-5] = Stack[-21]
0x533: Push("GetScriptProperty")
0x534: Push((int) 2)
0x535: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x536: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x537: Push("Owner")
0x538: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x539: Pop(1)
0x53a: Push(Stack[-4])
0x53b: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53c: Push("Owner")
0x53d: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x53e: Pop(1)
0x53f: Pop(0); Push((bool) Stack[-5] == 0)
0x540: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x541: Stack[-5] = Stack[-21]
0x542: Push("@GetEyesHeight")
0x543: Push((int) 1)
0x544: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x545: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x546: @@ GetEyesHeight(Stack[-2])
0x547: Pop(0)
0x548: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x549: Push(CvectorIndex(Stack[-1], 1))
0x54a: Stack[-1] = Stack[-3]
0x54b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x54c: Push("head")
0x54d: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x54e: Pop(1)
0x54f: Stack[-3] = (bool) 1
0x550: GOTO 0x552

0x551: Stack[-3] = (bool) 0
0x552: PushEmpty(string)
0x553: Stack[-1] = Stack[-7]
0x554: Call2 0x7e1

0x555: Pop(1)
0x556: Push("all")
0x557: @ PlayAnimation(Stack[-1], Stack[-7])
0x558: Pop(1)
0x559: @ WaitForAnimEnd()
0x55a: Pop(0)
0x55b: Push(Stack[-3])
0x55c: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x55d: @ StopAsync()
0x55e: Pop(0)
0x55f: Push("head")
0x560: @ UnlookAsync(Stack[-1])
0x561: Pop(1)
0x562: Push("all")
0x563: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x564: Pop(1)
0x565: @ RemoveEnvelope()
0x566: Pop(0)
0x567: Stack[-5] = 0
0x568: Return(); Pop(20)

0x569: PushEmpty()
0x56a: @ RemoveRTEnvelope()
0x56b: Pop(0)
0x56c: @ SetDeathState()
0x56d: Pop(0)
0x56e: @ Stop()
0x56f: Pop(0)
0x570: @ StopAsync()
0x571: Pop(0)
0x572: @ StopSecondaryAnimation()
0x573: Pop(0)
0x574: PushEmpty(string)
0x575: Stack[-1] = Stack[-2]
0x576: Call2 0x7e1

0x577: Pop(1)
0x578: Push("all")
0x579: @ PlayAnimation(Stack[-1], Stack[-2])
0x57a: Pop(1)
0x57b: @ WaitForAnimEnd()
0x57c: Pop(0)
0x57d: Push("all")
0x57e: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x57f: Pop(1)
0x580: @ RemoveEnvelope()
0x581: Pop(0)
0x582: Return(); Pop(0)

0x583: PushEmpty()
0x584: Return(); Pop(0)

0x585: PushEmpty()
0x586: Return(); Pop(0)

0x587: PushEmpty()
0x588: Return(); Pop(0)

0x589: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x58a: PushEmpty()
0x58b: Call2 0x5b2

0x58c: Pop(0)
0x58d: Return(); Pop(0)

0x58e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x58f: Return(); Pop(0)

0x590: PushEmpty()
0x591: PushEmpty(int, object)
0x592: Stack[-1] = Stack[-3]
0x593: Push(-2, 1); TaskCall(0)
0x594: Call2 0x0

0x595: Pop(-2, 1); TaskReturn
0x596: Pop(2)
0x597: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x598: Return(); Pop(0)

0x599: Return(); Pop(0)

0x59a: PushEmpty()
0x59b: PushEmpty(bool)
0x59c: Call2 0x58e

0x59d: Pop(0)
0x59e: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x59f: PushEmpty()
0x5a0: Call2 0x606

0x5a1: Pop(0)
0x5a2: PushEmpty(object)
0x5a3: Stack[-1] = Stack[-2]
0x5a4: Call2 0x590

0x5a5: Pop(1)
0x5a6: Return(); Pop(0)

0x5a7: PushEmpty(bool, bool)
0x5a8: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5a9: Pop(0)
0x5aa: Push(Stack[-1])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5ac: PushEmpty()
0x5ad: Push(-0, 6); TaskCall(2)
0x5ae: Call2 0x14c

0x5af: Pop(-0, 6); TaskReturn
0x5b0: Pop(0)
0x5b1: Return(); Pop(2)

0x5b2: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x5b3: @ GetPFPosition(Stack[-1])
0x5b4: Pop(0)
0x5b5: @ GetDirection(Stack[-0])
0x5b6: Pop(0)
0x5b7: PushEmpty()
0x5b8: Call2 0x60b

0x5b9: Pop(0)
0x5ba: Push((int) 10)
0x5bb: @ irand(Stack[-5], Stack[-1])
0x5bc: Pop(1)
0x5bd: Push((int) 5)
0x5be: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5bf: @ Sleep(Stack[-1], Stack[-4])
0x5c0: Pop(1)
0x5c1: Push(Stack[-3])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c3: PushEmpty()
0x5c4: Call2 0x599

0x5c5: Pop(0)
0x5c6: GOTO 0x604

0x5c7: PushEmpty()
0x5c8: Call2 0x60b

0x5c9: Pop(0)
0x5ca: @ GetPFPosition(Stack[-2])
0x5cb: Pop(0)
0x5cc: PushEmpty(float, cvector, cvector)
0x5cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ce: Stack[-1] = Stack[-5]
0x5cf: Call2 0x81a

0x5d0: Pop(2)
0x5d1: Push((int) 40000)
0x5d2: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5d4: @ FindPathTo(Stack[-1], Stack[-1])
0x5d5: Pop(0)
0x5d6: Pop(0); Push(( Stack[-1] != 0 )
0x5d7: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5d8: @ RotatePath(Stack[-1], Stack[-3])
0x5d9: Pop(0)
0x5da: Pop(0); Push((bool) Stack[-3] == 0)
0x5db: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5dc: GOTO 0x603

0x5dd: Push((bool) 0)
0x5de: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x5df: Pop(1)
0x5e0: Pop(0); Push((bool) Stack[-3] == 0)
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e2: GOTO 0x603

0x5e3: Push(CvectorIndex(Stack[-0], 0))
0x5e4: Push(CvectorIndex(Stack[-0], 2))
0x5e5: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x5e6: Pop(2)
0x5e7: Pop(0); Push((bool) Stack[-3] == 0)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e9: GOTO 0x603

0x5ea: @ WaitForAnimEnd(Stack[-3])
0x5eb: Pop(0)
0x5ec: Pop(0); Push((bool) Stack[-3] == 0)
0x5ed: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ee: GOTO 0x603

0x5ef: GOTO 0x604

0x5f0: GOTO 0x5f4

0x5f1: Push((int) 1)
0x5f2: @ Sleep(Stack[-1])
0x5f3: Pop(1)
0x5f4: Stack[-1] = 0
0x5f5: GOTO 0x603

0x5f6: Push(CvectorIndex(Stack[-0], 0))
0x5f7: Push(CvectorIndex(Stack[-0], 2))
0x5f8: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x5f9: Pop(2)
0x5fa: Pop(0); Push((bool) Stack[-3] == 0)
0x5fb: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5fc: GOTO 0x603

0x5fd: @ WaitForAnimEnd(Stack[-3])
0x5fe: Pop(0)
0x5ff: Pop(0); Push((bool) Stack[-3] == 0)
0x600: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x601: GOTO 0x603

0x602: GOTO 0x604

0x603: GOTO 0x5c7

0x604: GOTO 0x5b7

0x605: Return(); Pop(8)

0x606: @ StopGroup0()
0x607: Pop(0)
0x608: @ Stop()
0x609: Pop(0)
0x60a: Return(); Pop(0)

0x60b: Return(); Pop(0)

0x60c: PushEmpty()
0x60d: Push((int) 2)
0x60e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x610: Stack[-2] = "fire"
0x611: Return(); Pop(0)

0x612: GOTO 0x618

0x613: Push((int) 1)
0x614: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x615: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x616: Stack[-2] = "bullet"
0x617: Return(); Pop(0)

0x618: Stack[-2] = "phys"
0x619: Return(); Pop(0)

0x61a: PushEmpty(cvector, cvector, cvector, cvector)
0x61b: @ GetPosition(Stack[-2])
0x61c: Pop(0)
0x61d: @@ GetPosition(Stack[-1])
0x61e: Pop(0)
0x61f: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x620: Return(); Pop(4)

0x621: PushEmpty(bool, bool)
0x622: @ IsPlayerActor(Stack[-3], Stack[-1])
0x623: Pop(0)
0x624: Stack[-4] = Stack[-1]
0x625: Return(); Pop(2)

0x626: PushEmpty(bool, bool)
0x627: Push("HasProperty")
0x628: Push((int) 2)
0x629: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x62a: Pop(1); Push((bool) Stack[-1] == 0)
0x62b: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62c: Stack[-5] = (bool) 0
0x62d: Return(); Pop(2)

0x62e: @@ HasProperty(Stack[-3], Stack[-1])
0x62f: Pop(0)
0x630: Stack[-5] = Stack[-1]
0x631: Return(); Pop(2)

0x632: PushEmpty(float, float)
0x633: PushEmpty(bool, object, string)
0x634: Stack[-2] = Stack[-10]
0x635: Stack[-1] = Stack[-9]
0x636: Call2 0x626

0x637: Pop(2)
0x638: Pop(1); Push((bool) Stack[-1] == 0)
0x639: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63a: Stack[-8] = (bool) 0
0x63b: Return(); Pop(2)

0x63c: @@ GetProperty(Stack[-6], Stack[-1])
0x63d: Pop(0)
0x63e: PushEmpty(float, float, float, float)
0x63f: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x640: Stack[-2] = Stack[-8]
0x641: Stack[-1] = Stack[-7]
0x642: Call2 0x825

0x643: Pop(3)
0x644: @@ SetProperty(Stack[-7], Stack[-1])
0x645: Pop(1)
0x646: Stack[-8] = (bool) 1
0x647: Return(); Pop(2)

0x648: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x649: PushEmpty(bool, object, string)
0x64a: Stack[-2] = Stack[-18]
0x64b: Stack[-1] = "health"
0x64c: Call2 0x626

0x64d: Pop(2)
0x64e: Pop(1); Push((bool) Stack[-1] == 0)
0x64f: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x650: Stack[-16] = (float) 0.0
0x651: Return(); Pop(12)

0x652: PushEmpty(bool, object, string)
0x653: Stack[-2] = Stack[-18]
0x654: Stack[-1] = "armor"
0x655: Call2 0x626

0x656: Pop(2)
0x657: Pop(1); Push((bool) Stack[-1] == 0)
0x658: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x659: Stack[-6] = (int) 0
0x65a: GOTO 0x65e

0x65b: Push("armor")
0x65c: @@ GetProperty(Stack[-1], Stack[-7])
0x65d: Pop(1)
0x65e: Push("armor_")
0x65f: PushEmpty(string, int)
0x660: Stack[-1] = Stack[-16]
0x661: Call2 0x60c

0x662: Pop(1)
0x663: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x664: PushEmpty(bool, object, string)
0x665: Stack[-2] = Stack[-18]
0x666: Stack[-1] = Stack[-8]
0x667: Call2 0x626

0x668: Pop(2)
0x669: Pop(1); Push((bool) Stack[-1] == 0)
0x66a: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x66b: Stack[-4] = (int) 0
0x66c: GOTO 0x66f

0x66d: @@ GetProperty(Stack[-5], Stack[-4])
0x66e: Pop(0)
0x66f: PushEmpty(float, float, float)
0x670: Pop(0); Push(Stack[-9] + Stack[-7]);
0x671: Push((float)100.0)
0x672: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x673: Stack[-1] = (int) 1
0x674: Call2 0x81e

0x675: Stack[-6] = Stack[-3]
0x676: Pop(3)
0x677: Push("health")
0x678: @@ GetProperty(Stack[-1], Stack[-3])
0x679: Pop(1)
0x67a: Push((int) 1)
0x67b: Pop(1); Push(Stack[-1] - Stack[-4]);
0x67c: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x67d: Push("health")
0x67e: PushEmpty(float, float, float, float)
0x67f: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x680: Stack[-2] = (int) 0
0x681: Stack[-1] = (int) 1
0x682: Call2 0x825

0x683: Pop(3)
0x684: @@ SetProperty(Stack[-2], Stack[-1])
0x685: Pop(2)
0x686: PushEmpty(bool, object)
0x687: Stack[-1] = Stack[-17]
0x688: Call2 0x621

0x689: Pop(1)
0x68a: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68b: PushEmpty(float)
0x68c: Stack[-1] = -Stack[-2]; Pop(0);
0x68d: Call2 0x853

0x68e: Pop(1)
0x68f: Stack[-16] = Stack[-1]
0x690: Return(); Pop(12)

0x691: PushEmpty(bool, bool)
0x692: @@ IsDead(Stack[-1])
0x693: Pop(0)
0x694: Stack[-4] = Stack[-1]
0x695: Return(); Pop(2)

0x696: PushEmpty(object, object, object, object)
0x697: Pop(0); Push((bool) Stack[-5] == 0)
0x698: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x699: Stack[-6] = (bool) 0
0x69a: Return(); Pop(4)

0x69b: PushEmpty(bool)
0x69c: Stack[-1] = (bool) 0
0x69d: Push("IsDead")
0x69e: Push((int) 1)
0x69f: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a1: PushEmpty(bool, object)
0x6a2: Stack[-1] = Stack[-8]
0x6a3: Call2 0x691

0x6a4: Pop(1)
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a6: Stack[-1] = (bool) 1
0x6a7: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a8: Stack[-6] = (bool) 0
0x6a9: Return(); Pop(4)

0x6aa: @ GetScene(Stack[-2])
0x6ab: Pop(0)
0x6ac: Pop(0); Push((bool) Stack[-2] == 0)
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6ae: Stack[-6] = (bool) 0
0x6af: Return(); Pop(4)

0x6b0: @@ GetScene(Stack[-1])
0x6b1: Pop(0)
0x6b2: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b4: Stack[-6] = (bool) 0
0x6b5: Return(); Pop(4)

0x6b6: Stack[-6] = (bool) 1
0x6b7: Return(); Pop(4)

0x6b8: Stack[-1] = 0
0x6b9: Stack[-2] = 0
0x6ba: PushEmpty(int, int)
0x6bb: PushEmpty(bool, object)
0x6bc: Stack[-1] = Stack[-5]
0x6bd: Call2 0x696

0x6be: Pop(1)
0x6bf: Pop(1); Push((bool) Stack[-1] == 0)
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6c1: Stack[-4] = (bool) 0
0x6c2: Return(); Pop(2)

0x6c3: PushEmpty(bool, object, string)
0x6c4: Stack[-2] = Stack[-6]
0x6c5: Stack[-1] = "noaccess"
0x6c6: Call2 0x626

0x6c7: Pop(2)
0x6c8: Pop(1); Push((bool) Stack[-1] == 0)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6ca: Stack[-4] = (bool) 1
0x6cb: Return(); Pop(2)

0x6cc: Push("noaccess")
0x6cd: @@ GetProperty(Stack[-1], Stack[-2])
0x6ce: Pop(1)
0x6cf: Push((int) 0)
0x6d0: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6d1: Return(); Pop(2)

0x6d2: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6d3: Pop(0); Push((bool) Stack[-15] == 0)
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d5: Return(); Pop(14)

0x6d6: @ IsDead(Stack[-7])
0x6d7: Pop(0)
0x6d8: Push(Stack[-7])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6da: Return(); Pop(14)

0x6db: @ GetSecondaryAnimationType(Stack[-6])
0x6dc: Pop(0)
0x6dd: Push((int) 0)
0x6de: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6df: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6e0: Return(); Pop(14)

0x6e1: @@ GetPosition(Stack[-5])
0x6e2: Pop(0)
0x6e3: @ GetPosition(Stack[-4])
0x6e4: Pop(0)
0x6e5: @ GetDirection(Stack[-3])
0x6e6: Pop(0)
0x6e7: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6e8: Push(CvectorIndex(Stack[-2], 0))
0x6e9: Push(CvectorIndex(Stack[-4], 0))
0x6ea: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6eb: Push(CvectorIndex(Stack[-3], 2))
0x6ec: Push(CvectorIndex(Stack[-5], 2))
0x6ed: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ee: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6ef: Push((int) 0)
0x6f0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f2: Stack[-1] = "fhit"
0x6f3: GOTO 0x6f5

0x6f4: Stack[-1] = "bhit"
0x6f5: Push("hit_react")
0x6f6: Push("1")
0x6f7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6f8: Push("2")
0x6f9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6fa: Push((int) -10)
0x6fb: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6fc: Pop(4)
0x6fd: Return(); Pop(14)

0x6fe: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6ff: PushEmpty(bool)
0x700: Stack[-1] = (bool) 0
0x701: PushEmpty(bool)
0x702: Stack[-1] = (bool) 0
0x703: Push(Stack[-23])
0x704: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x705: Push((int) 4)
0x706: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x707: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x708: Stack[-1] = (bool) 1
0x709: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70a: Push((int) 5)
0x70b: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70d: Stack[-1] = (bool) 1
0x70e: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x70f: PushEmpty(cvector, cvector)
0x710: PushEmpty(cvector, object)
0x711: Stack[-1] = Stack[-25]
0x712: Call2 0x61a

0x713: Stack[-3] = Stack[-2]
0x714: Pop(2)
0x715: Call2 0x810

0x716: Stack[-11] = Stack[-2]
0x717: Pop(2)
0x718: @ CreateVectorVector(Stack[-8])
0x719: Pop(0)
0x71a: Stack[-7] = (int) 1
0x71b: Push("hit")
0x71c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x71d: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x71e: Pop(1)
0x71f: Pop(0); Push((bool) Stack[-6] == 0)
0x720: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x721: GOTO 0x72b

0x722: Pop(0); Push(Stack[-4] | Stack[-9]);
0x723: Push((float)0.70711)
0x724: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x725: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x726: @@ add(Stack[-5])
0x727: Pop(0)
0x728: Push((int) 1)
0x729: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x72a: GOTO 0x71b

0x72b: @@ size(Stack[-3])
0x72c: Pop(0)
0x72d: Push(Stack[-3])
0x72e: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x72f: @ irand(Stack[-2], Stack[-3])
0x730: Pop(0)
0x731: @@ get(Stack[-1], Stack[-2])
0x732: Pop(0)
0x733: PushEmpty(object, int, float, cvector, cvector)
0x734: Stack[-5] = Stack[-26]
0x735: Stack[-4] = Stack[-25]
0x736: Stack[-3] = Stack[-24]
0x737: Stack[-2] = Stack[-6]
0x738: Stack[-1] = -Stack[-14]; Pop(0);
0x739: Call2 0x742

0x73a: Pop(5)
0x73b: Return(); Pop(18)

0x73c: Stack[-8] = 0
0x73d: PushEmpty(object)
0x73e: Stack[-1] = Stack[-22]
0x73f: Call2 0x6d2

0x740: Pop(1)
0x741: Return(); Pop(18)

0x742: PushEmpty(object, object, object, object)
0x743: @ GetScene(Stack[-2])
0x744: Pop(0)
0x745: Push("scripted")
0x746: Push("blood_dir.xml")
0x747: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x748: Pop(2)
0x749: PushEmpty(object)
0x74a: Stack[-1] = Stack[-10]
0x74b: Call2 0x6d2

0x74c: Pop(1)
0x74d: Return(); Pop(4)

0x74e: Stack[-1] = 0
0x74f: Stack[-2] = 0
0x750: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x751: @@ GetPosition(Stack[-3])
0x752: Pop(0)
0x753: @ GetPosition(Stack[-2])
0x754: Pop(0)
0x755: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x756: Push(CvectorIndex(Stack[-1], 0))
0x757: Push(CvectorIndex(Stack[-2], 2))
0x758: @ RotateAsync(Stack[-2], Stack[-1])
0x759: Pop(2)
0x75a: Return(); Pop(6)

0x75b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x75c: @@ GetPosition(Stack[-8])
0x75d: Pop(0)
0x75e: @@ GetEyesHeight(Stack[-9])
0x75f: Pop(0)
0x760: Push(CvectorIndex(Stack[-8], 1))
0x761: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x762: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x763: @ GetPosition(Stack[-7])
0x764: Pop(0)
0x765: @ GetEyesHeight(Stack[-9])
0x766: Pop(0)
0x767: Push(CvectorIndex(Stack[-7], 1))
0x768: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x769: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x76a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x76b: Push(CvectorIndex(Stack[-6], 1))
0x76c: Stack[-1] = (int) 0
0x76d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x76e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x76f: Pop(1); Push(Sqrt(Stack[-1]))
0x770: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x771: Stack[-5] = -Stack[-6]; Pop(0);
0x772: Pop(0); Push(Stack[-6] * Stack[-19]);
0x773: PushEmpty(cvector, cvector)
0x774: Push(CVector(0.0, 1.0, 0.0))
0x775: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x776: Call2 0x810

0x777: Pop(1)
0x778: Push((int) 25)
0x779: Pop(2); Push(Stack[-2] * Stack[-1]);
0x77a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x77b: Push(CVector(0.0, 10.0, 0.0))
0x77c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x77d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x77e: @ IsOverrideActive(Stack[-2])
0x77f: Pop(0)
0x780: Push(Stack[-2])
0x781: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x782: Stack[-21] = (bool) 0
0x783: Return(); Pop(18)

0x784: @ StopWorld()
0x785: Pop(0)
0x786: @ CameraTransit(Stack[-3], Stack[-5])
0x787: Pop(0)
0x788: Push(CvectorIndex(Stack[-4], 0))
0x789: Push(CvectorIndex(Stack[-5], 2))
0x78a: @ Rotate(Stack[-2], Stack[-1])
0x78b: Pop(2)
0x78c: PushEmpty(bool)
0x78d: Call2 0x914

0x78e: Pop(0)
0x78f: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x790: GOTO 0x799

0x791: Push("head")
0x792: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x793: Pop(1)
0x794: Push(Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x796: Push("head")
0x797: @ LookAsyncCamera(Stack[-1])
0x798: Pop(1)
0x799: @ CameraWaitForPlayFinish()
0x79a: Pop(0)
0x79b: @ ResumeWorld()
0x79c: Pop(0)
0x79d: Stack[-21] = (bool) 1
0x79e: Return(); Pop(18)

0x79f: PushEmpty(bool, bool)
0x7a0: @ CameraSwitchToNormal()
0x7a1: Pop(0)
0x7a2: PushEmpty(bool)
0x7a3: Call2 0x914

0x7a4: Pop(0)
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a6: GOTO 0x7af

0x7a7: Push("head")
0x7a8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7a9: Pop(1)
0x7aa: Push(Stack[-1])
0x7ab: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ac: Push("head")
0x7ad: @ UnlookAsync(Stack[-1])
0x7ae: Pop(1)
0x7af: Return(); Pop(2)

0x7b0: PushEmpty(bool, float, float, bool, float, float)
0x7b1: @ lshHasAnimation(Stack[-3], Stack[-7])
0x7b2: Pop(0)
0x7b3: Push(Stack[-3])
0x7b4: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x7b6: Pop(0)
0x7b7: Push((bool) 0)
0x7b8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7b9: Pop(1)
0x7ba: GOTO 0x7bf

0x7bb: Push("Can't find lsh animation : ")
0x7bc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7bd: @ Trace(Stack[-1])
0x7be: Pop(1)
0x7bf: Return(); Pop(6)

0x7c0: PushEmpty(bool, float, float, bool, float, float)
0x7c1: @ lshHasAnimation(Stack[-3], Stack[-8])
0x7c2: Pop(0)
0x7c3: Push(Stack[-3])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x7c6: Pop(0)
0x7c7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x7c8: Pop(0)
0x7c9: GOTO 0x7ce

0x7ca: Push("Can't find lsh animation : ")
0x7cb: Pop(1); Push(Stack[-1] + Stack[-9]);
0x7cc: @ Trace(Stack[-1])
0x7cd: Pop(1)
0x7ce: Return(); Pop(6)

0x7cf: PushEmpty(float, cvector, float, cvector)
0x7d0: @@ GetEyesHeight(Stack[-2])
0x7d1: Pop(0)
0x7d2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x7d3: Push(CvectorIndex(Stack[-1], 1))
0x7d4: Stack[-1] = Stack[-3]
0x7d5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7d6: Push("head")
0x7d7: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x7d8: Pop(1)
0x7d9: Return(); Pop(4)

0x7da: PushEmpty(bool)
0x7db: Call2 0x914

0x7dc: Pop(0)
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7de: @ lshStopSpeech()
0x7df: Pop(0)
0x7e0: Return(); Pop(0)

0x7e1: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x7e2: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x7e3: Pop(0)
0x7e4: Pop(0); Push((bool) Stack[-8] == 0)
0x7e5: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7e6: Stack[-7] = (int) 0
0x7e7: Push((int) 1)
0x7e8: Pop(1); Push(Stack[-8] + Stack[-1]);
0x7e9: Pop(1); Push(Stack[-18] + Stack[-1]);
0x7ea: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x7eb: Pop(1)
0x7ec: Pop(0); Push((bool) Stack[-6] == 0)
0x7ed: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7ee: GOTO 0x7f2

0x7ef: Push((int) 1)
0x7f0: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7f1: GOTO 0x7e7

0x7f2: Pop(0); Push((bool) Stack[-7] == 0)
0x7f3: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f4: Return(); Pop(16)

0x7f5: @ irand(Stack[-5], Stack[-7])
0x7f6: Pop(0)
0x7f7: Push((int) 1)
0x7f8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7f9: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x7fa: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x7fb: Pop(0)
0x7fc: Push(Stack[-4])
0x7fd: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x7fe: @ GetEyesHeight(Stack[-3])
0x7ff: Pop(0)
0x800: @ GetDirection(Stack[-2])
0x801: Pop(0)
0x802: Push((int) 50)
0x803: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x804: Push(CvectorIndex(Stack[-1], 1))
0x805: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x806: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x807: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x808: Pop(0)
0x809: Return(); Pop(16)

0x80a: PushEmpty(object, object)
0x80b: @ self(Stack[-1])
0x80c: Pop(0)
0x80d: Stack[-3] = Stack[-1]
0x80e: Return(); Pop(2)

0x80f: Stack[-1] = 0
0x810: PushEmpty(float, float)
0x811: Pop(0); Push(Stack[-3] | Stack[-3]);
0x812: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x813: Push((float)0.0)
0x814: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x815: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x816: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x817: Return(); Pop(2)

0x818: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x819: Return(); Pop(2)

0x81a: PushEmpty(cvector, cvector)
0x81b: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x81c: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x81d: Return(); Pop(2)

0x81e: PushEmpty()
0x81f: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x820: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x821: Stack[-3] = Stack[-2]
0x822: GOTO 0x824

0x823: Stack[-3] = Stack[-1]
0x824: Return(); Pop(0)

0x825: PushEmpty()
0x826: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x827: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x828: Stack[-4] = Stack[-2]
0x829: Return(); Pop(0)

0x82a: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x82b: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82c: Stack[-4] = Stack[-1]
0x82d: Return(); Pop(0)

0x82e: Stack[-4] = Stack[-3]
0x82f: Return(); Pop(0)

0x830: PushEmpty()
0x831: Pop(0); Push((bool) Stack[-2] == 0)
0x832: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x833: Stack[-3] = (bool) 0
0x834: Return(); Pop(0)

0x835: Push((int) 0)
0x836: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x838: Push((int) 8)
0x839: @ SendWorldWndMessage(Stack[-1])
0x83a: Pop(1)
0x83b: GOTO 0x845

0x83c: Push((int) 0)
0x83d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x83e: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x83f: Push((int) 9)
0x840: @ SendWorldWndMessage(Stack[-1])
0x841: Pop(1)
0x842: GOTO 0x845

0x843: Stack[-3] = (bool) 0
0x844: Return(); Pop(0)

0x845: PushEmpty(float)
0x846: Stack[-1] = Stack[-2]
0x847: Call2 0x85d

0x848: Pop(1)
0x849: PushEmpty(bool, object, string, float, float, float)
0x84a: Stack[-5] = Stack[-8]
0x84b: Stack[-4] = "reputation"
0x84c: Stack[-3] = Stack[-7]
0x84d: Stack[-2] = (int) 0
0x84e: Stack[-1] = (int) 1
0x84f: Call2 0x632

0x850: Pop(6)
0x851: Stack[-3] = (bool) 1
0x852: Return(); Pop(0)

0x853: PushEmpty(object, object)
0x854: @ CreateFloatVector(Stack[-1])
0x855: Pop(0)
0x856: @@ add(Stack[-3])
0x857: Pop(0)
0x858: Push((int) 15)
0x859: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x85a: Pop(1)
0x85b: Return(); Pop(2)

0x85c: Stack[-1] = 0
0x85d: PushEmpty(object, object)
0x85e: @ CreateFloatVector(Stack[-1])
0x85f: Pop(0)
0x860: @@ add(Stack[-3])
0x861: Pop(0)
0x862: Push((int) 16)
0x863: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x864: Pop(1)
0x865: Return(); Pop(2)

0x866: Stack[-1] = 0
0x867: PushEmpty(bool, bool)
0x868: @ IsPlayerActor(Stack[-3], Stack[-1])
0x869: Pop(0)
0x86a: Push(Stack[-1])
0x86b: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86c: Push("attack")
0x86d: @ PlayGlobalMusic(Stack[-1])
0x86e: Pop(1)
0x86f: Return(); Pop(2)

0x870: PushEmpty(object, object)
0x871: @ GetScene(Stack[-1])
0x872: Pop(0)
0x873: Push("battle")
0x874: PushEmpty(object)
0x875: Call2 0x80a

0x876: Pop(0)
0x877: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x878: Pop(2)
0x879: Return(); Pop(2)

0x87a: Stack[-1] = 0
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
0x8d8: Call2 0x621

0x8d9: Pop(1)
0x8da: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8db: PushEmpty(bool, object, float)
0x8dc: Stack[-2] = Stack[-6]
0x8dd: Stack[-1] = (float) -0.2
0x8de: Call2 0x830

0x8df: Pop(3)
0x8e0: PushEmpty(object)
0x8e1: Stack[-1] = Stack[-4]
0x8e2: Push(-1, 0); TaskCall(4)
0x8e3: Call2 0x4f7

0x8e4: Pop(-1, 0); TaskReturn
0x8e5: Pop(1)
0x8e6: Return(); Pop(2)

0x8e7: PushEmpty()
0x8e8: PushEmpty(object, int, float)
0x8e9: Stack[-3] = Stack[-7]
0x8ea: Stack[-2] = Stack[-6]
0x8eb: Stack[-1] = Stack[-5]
0x8ec: Call2 0x6fe

0x8ed: Pop(3)
0x8ee: Return(); Pop(0)

0x8ef: PushEmpty()
0x8f0: PushEmpty(object, int, float, cvector, cvector)
0x8f1: Stack[-5] = Stack[-11]
0x8f2: Stack[-4] = Stack[-10]
0x8f3: Stack[-3] = Stack[-9]
0x8f4: Stack[-2] = Stack[-7]
0x8f5: Stack[-1] = Stack[-6]
0x8f6: Call2 0x742

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

